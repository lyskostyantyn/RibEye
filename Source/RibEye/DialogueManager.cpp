// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogueManager.h"
#include "DialogueComponent.h"
#include "SocialComponent.h"

static TMap<FString, ELineType> S_LINE_TYPE_MAP
{
	{"GR", ELineType::GREETING},
	{"GRR", ELineType::GREETING_REPLY},
	{"GRE", ELineType::GREETING_END},
	{"SUR", ELineType::SURPRISE},
	{"INVM", ELineType::INVESTIGATION_MAIN},
	{"INVS", ELineType::INVESTIGATION_SECONDARY},
	{"INVD", ELineType::INVESTIGATION_DISCUSSION},
	{"INVRM", ELineType::INVESTIGATION_REPLY_MAIN},
	{"INVRS", ELineType::INVESTIGATION_REPLY_SECONDARY},
	{"INVBM", ELineType::INVESTIGATION_BOTH_MAIN},
	{"INVBS", ELineType::INVESTIGATION_BOTH_SECONDARY},
	{"COM", ELineType::COMMENT_MISSED_ANSWER},
};

static TMap<FString, EPhraseType> S_MASTER_TYPE_MAP
{
	{"M", EPhraseType::MAIN},
	{"S", EPhraseType::SECONDARY},
	{"S2", EPhraseType::SECONDARY_2},
};

static TArray<FString> VoiceFiles
{
	{"Standard.txt"}
};

bool FPendingActorPriorityMap::IsEmpty() const
{
	return ActorMap.IsEmpty();
}

bool FPendingActorPriorityMap::Contains(AActor* Actor) const
{
	return ActorMap.Contains(Actor);
}

void FPendingActorPriorityMap::AddOrUpdate(AActor* Actor, float Value) {
	ActorMap.Add(Actor, Value);
}

void FPendingActorPriorityMap::Remove(AActor* Actor) {
	ActorMap.Remove(Actor);
}

AActor* FPendingActorPriorityMap::GetMaxActor() const {
	AActor* MaxActor = nullptr;
	float MaxValue = -FLT_MAX;

	for (const auto& Pair : ActorMap) {
		if (Pair.Value > MaxValue) {
			MaxValue = Pair.Value;
			MaxActor = Pair.Key;
		}
	}

	return MaxActor;
}

// Sets default values for this component's properties
UDialogueManager::UDialogueManager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	FString LineNames = FPaths::ProjectContentDir() / "Lines.txt";
	if (FPlatformFileManager::Get().GetPlatformFile().FileExists(*LineNames))
	{
		TArray<FString> Lines;
		FFileHelper::LoadFileToStringArray(Lines, *LineNames);
		// remove first line
		Lines.RemoveAt(0);
		for (const auto& Line : Lines)
		{
			TArray<FString> OneLine;
			Line.ParseIntoArray(OneLine, TEXT("\t"));

			if (OneLine.Num() == 3)
			{
				FString Name = OneLine[0];
				ELineType Type = ELineType::GREETING;

				ELineType* PType = S_LINE_TYPE_MAP.Find(OneLine[1]);
				if (PType)
				{
					Type = *PType;
				}

				EPhraseType Phrase = EPhraseType::SECONDARY_2;
				EPhraseType* PPhrase = S_MASTER_TYPE_MAP.Find(OneLine[2]);
				if (PPhrase)
				{
					Phrase = *PPhrase;
				}

				ensure(!LineTypesMap.Contains(Name));
				LineTypesMap.Add(Name, {Type, Phrase });
			}
		}
	}

	int VoiceCount = static_cast<int>(EVoicePreset::VOICE_NUM);
	ensure(VoiceFiles.Num() == VoiceCount);
	VoiceCollection.SetNum(VoiceCount);

	for (int Index = 0; Index < VoiceCount; ++Index)
	{
		FString VoiceVariants = FPaths::ProjectContentDir() / VoiceFiles[Index];
		if (FPlatformFileManager::Get().GetPlatformFile().FileExists(*VoiceVariants))
		{
			FVoiceDictionary& VoiceDictionary = VoiceCollection[Index];

			TArray<FString> Lines;
			FFileHelper::LoadFileToStringArray(Lines, *VoiceVariants);
			// remove first line
			Lines.RemoveAt(0);
			for (const auto& Line : Lines)
			{
				TArray<FString> OneLine;
				Line.ParseIntoArray(OneLine, TEXT("\t"));

				if (OneLine.Num() == 5)
				{
					FString Name = OneLine[0];
					ELineType Type = ELineType::GREETING;

					float Duration = FCString::Atof(*OneLine[1]);
					int CountOfRepeats = FCString::Atoi(*OneLine[2]);

					float Cooldown = FCString::Atof(*OneLine[3]);
					FString Text = OneLine[4];

					FLineInstanceCollection& InstanceCollecton = VoiceDictionary.LineInstanceCollection.FindOrAdd(Name);
					FLineInstance Instance = { {Text, Duration}, {CountOfRepeats, Cooldown} };
					InstanceCollecton.LineInstances.Add(Instance);
				}
			}
		}
	}

	FString FilePriority = FPaths::ProjectContentDir() / "Priorities.txt";
	if (FPlatformFileManager::Get().GetPlatformFile().FileExists(*FilePriority))
	{
		TArray<FString> Lines;
		FFileHelper::LoadFileToStringArray(Lines, *FilePriority);
		for (const auto& Line : Lines)
		{
			TArray<FString> OneLine;
			Line.ParseIntoArray(OneLine, TEXT("\t"));

			if (OneLine.Num() == 2)
			{
				ELineType Type = ELineType::GREETING;

				ELineType* PType = S_LINE_TYPE_MAP.Find(OneLine[0]);
				if (PType)
				{
					Type = *PType;
				}
				
				EAlert Alert = StaticCast<EAlert>(FCString::Atoi(*OneLine[1]));
				LineTypePriority.Add(Type, Alert);
			}
		}
	}
}

// Called when the game starts
void UDialogueManager::BeginPlay()
{
	Super::BeginPlay();
	// ...
	
}

// Called every frame
void UDialogueManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	ValidateDialogues();
	ValidateBarks();
}

void UDialogueManager::SendOnReplyRequested(AActor* Actor, int DialogueID) const
{
	if (IsValid(Actor))
	{
		UDialogueComponent* Comp = Actor->GetComponentByClass<UDialogueComponent>();
		if (IsValid(Comp))
		{
			Comp->OnReplyRequested.Broadcast(DialogueID);
		}
	}
}

void UDialogueManager::SendOnDialogueEnded(AActor* Actor, int DialogueID) const
{
	if (IsValid(Actor))
	{
		UDialogueComponent* Comp = Actor->GetComponentByClass<UDialogueComponent>();
		if (IsValid(Comp))
		{
			Comp->ForgetDialogue(DialogueID);
		}
	}
}

void UDialogueManager::SendOnPlayBark(AActor* Instigator, TArray<FBarkSpeakerData>& Speakers)
{
	float BestScore = Speakers[0].Priority;
	int BestIndex = 0;
	for (int Index = 1; Index < Speakers.Num(); ++Index)
	{
		if (Speakers[Index].Priority > BestScore)
		{
			BestScore = Speakers[Index].Priority;
			BestIndex = Index;
		}
	}

	if (IsValid(Speakers[BestIndex].Actor))
	{
		UDialogueComponent* Comp = Speakers[BestIndex].Actor->GetComponentByClass<UDialogueComponent>();
		if (IsValid(Comp))
		{
			EBarkType BarkType = Speakers[BestIndex].BarkType;
			// only if we play with delay remove current speaker
			if (ManagerRules.BarkRule == EBarkPlayingRule::PLAY_WITH_DELAY)
			{
				Speakers.RemoveAtSwap(BestIndex);
			}

			Comp->OnPlayBark(Instigator, BarkType);
		}
	}
}

void UDialogueManager::EndDialogue(int DialogueID, const FDialogueData& Data)
{
	auto ParticipantsCopy = Data.Participants;
	for (const auto& Participant : ParticipantsCopy)
	{
		SendOnDialogueEnded(Participant, DialogueID);
	}

	auto PendingParticipants = Data.PendingParticipants;
	for (const auto& Participant : PendingParticipants.ActorMap)
	{
		SendOnDialogueEnded(Participant.Key, DialogueID);
	}

	auto Listeners = Data.Listeners;
	for (const auto& Listener : Listeners)
	{
		SendOnDialogueEnded(Listener, DialogueID);
	}

	Dialogues.Remove(DialogueID);
}

void UDialogueManager::ValidateDialogues()
{
	for (const auto& Dialogue : Dialogues)
	{
		const FDialogueData& Data = Dialogue.Value;
		const FDialogueLine& LastLine = Data.Dialogue.Last();

		const bool bLinePlaytimeEnded = GetWorld()->GetTimeSeconds() > Data.LastSpokenTime;
		const bool AllMembersLeft = Data.Participants.IsEmpty();
		const bool CanSomeoneJoin = bLinePlaytimeEnded && Data.DialogueState == EDialogueState::MAIN_PART_ENDED;
		const bool DialogueTimeoutReached = GetWorld()->GetTimeSeconds() > Data.LastSpokenTime + RemoveDialogWaitTime;
		if (AllMembersLeft || DialogueTimeoutReached)
		{
			// to avoid erasing while iterating
			EndDialogue(Dialogue.Key, Data);
			break;
		}
		else if (CanSomeoneJoin || GetWorld()->GetTimeSeconds() > Data.LastSpokenTime + JoinPendingWaitTime)
		{
			// TODO handle cases when pending doesn't reply
			if (!Data.PendingParticipants.IsEmpty())
			{
				SendOnReplyRequested(Data.PendingParticipants.GetMaxActor(), Dialogue.Key); 
			}
			else
			{
				// main participant didn't hear, no one wants to comment it
				// quit dialogue
				EndDialogue(Dialogue.Key, Data);
				break;
			}
		}
		else if(bLinePlaytimeEnded)
		{
			//for cases when participant decided to leave conversation
			if (LastLine.Replier != nullptr && Data.Participants.Contains(LastLine.Replier))
			{
				// request next line
				SendOnReplyRequested(LastLine.Replier, Dialogue.Key);
			}
			else if (LastLine.Replier == nullptr && !Data.PendingParticipants.IsEmpty())
			{
				SendOnReplyRequested(Data.PendingParticipants.GetMaxActor(), Dialogue.Key);
			}
		}
	}
}

void UDialogueManager::ValidateBarks()
{
	for (auto& Bark : BarkEmiterData)
	{
		FBarkGenericData& BarkData = Bark.Value;
		if (GetWorld()->GetTimeSeconds() > BarkData.BarkReleaseTime)
		{
			if (ManagerRules.BarkRule == EBarkPlayingRule::PLAY_IN_ORDER)
			{
				if (IsValid(PerceptionHelper))
				{
					PerceptionHelper->RegisterComponent();
				}
				BarkData.BarkReleaseTime = INFINITY;
			}

			if (ManagerRules.BarkRule == EBarkPlayingRule::PLAY_NEXT_AFTER_FINISHING)
			{
				BarkData.BarkReleaseTime = INFINITY;
			}

			ProcessBark(Bark.Key, BarkData);

			if (ManagerRules.BarkRule == EBarkPlayingRule::PLAY_CLOSEST_ONLY)
			{
				BarkEmiterData.Remove(Bark.Key);
			}

			if (ManagerRules.BarkRule == EBarkPlayingRule::PLAY_WITH_DELAY)
			{
				BarkData.BarkReleaseTime += ManagerRules.BarkDelayTime;
			}

			break;
		}
	}
}

int UDialogueManager::FindActiveDialogueOfActor(AActor* Actor) const
{
	if (Dialogues.IsEmpty())
	{
		return -1;
	}

	for (const auto& Dialogue : Dialogues)
	{
		for (const auto& Participant : Dialogue.Value.Participants)
		{
			if (Participant == Actor)
			{
				return Dialogue.Key;
			}
		}
	}

	return InvalidDialogue;
}

bool UDialogueManager::HaveCommonActiveDialogue(TArray<AActor*> FirstGroup, TArray<AActor*> SecondGroup, EAlert AlertState) const
{
	if (Dialogues.IsEmpty())
	{
		return false;
	}

	for (const auto& Dialogue : Dialogues)
	{
		if (Dialogue.Value.Dialogue.IsEmpty())
		{
			continue;
		}

		const ELineType LineType = GetLineType(Dialogue.Value.Dialogue.Last().LineEntry.LineData.LineID);
		EAlert DialogueAlertType = GetLineTypePriority(LineType);
		
		// ignores dialogue if it's alert state is less then
		// requested, it means we can just interrupt it
		if (DialogueAlertType < AlertState)
		{
			continue;
		}

		bool FirstContains = false;

		for (const auto& Participant : Dialogue.Value.Participants)
		{
			if (FirstGroup.Contains(Participant))
			{
				FirstContains = true;
				break;
			}
		}

		if (FirstContains)
		{
			for (const auto& Participant : Dialogue.Value.Participants)
			{
				if (SecondGroup.Contains(Participant))
				{
					return true;
				}
			}
		}
	}

	return false;
}

int UDialogueManager::MakeADialogue(FDialogueLine DialogueLine)
{
	UDialogueComponent* SpeakerComp = DialogueLine.Speaker->GetComponentByClass<UDialogueComponent>();
	if (!IsValid(SpeakerComp))
	{
		return false;
	}

	FLinePlayInfo LinePlayInfo = GetLinePlayInfo(SpeakerComp->VoicePreset, DialogueLine.LineEntry.LineData);
	if (LinePlayInfo.LineText.IsEmpty())
	{
		return false;
	}

	const int DialogueID = S_DIALOGUE_ID_GENERATOR;
	++S_DIALOGUE_ID_GENERATOR;

	FDialogueData Data = {
		{DialogueLine.Speaker, DialogueLine.Replier},
		{DialogueLine},
		GetWorld()->GetTimeSeconds() + LinePlayInfo.DelayTime * ScaleDurationTime
	};

	if (USocialComponent* SocialComp = DialogueLine.Speaker->GetComponentByClass<USocialComponent>())
	{
		Data.SpeakerGroups.Add(DialogueLine.Speaker, {SocialComp->GetMySocialGroup()});
	};

	Dialogues.Add(DialogueID, Data);

	return DialogueID;
}

void UDialogueManager::MakeABark(AActor* Source, FBarkSpeakerData SpeakerData)
{
	FBarkGenericData* BarkData = BarkEmiterData.Find(Source);
	if (!BarkData)
	{
		BarkData = &(BarkEmiterData.Add(Source, {static_cast<float>(GetWorld()->GetTimeSeconds() + BarkReleaseTime), {}}));
	}

	BarkData->Speakers.Add(SpeakerData);
}

bool UDialogueManager::ContinueDialogue(int DialogueID, FDialogueLine DialogueLine)
{
	FDialogueData* Dialogue = Dialogues.Find(DialogueID);
	if (!Dialogue)
	{
		return false;
	}

	if (!IsValid(DialogueLine.Speaker))
	{
		return false;
	}

	UDialogueComponent* SpeakerComp = DialogueLine.Speaker->GetComponentByClass<UDialogueComponent>();
	if (!IsValid(SpeakerComp))
	{
		return false;
	}

	FLinePlayInfo LinePlayInfo = GetLinePlayInfo(SpeakerComp->VoicePreset, DialogueLine.LineEntry.LineData);
	if (LinePlayInfo.LineText.IsEmpty())
	{
		return false;
	}

	if ( Dialogue->PendingParticipants.Contains(DialogueLine.Speaker) )
	{
		Dialogue->PendingParticipants.Remove(DialogueLine.Speaker);

		// maybe we will want main participant to add some additional lines
		if (!Dialogue->Participants.Contains(DialogueLine.Speaker))
		{
			Dialogue->Participants.Add(DialogueLine.Speaker);
		}
	}
	
	if (!Dialogue->Participants.Contains(DialogueLine.Speaker))
	{
		return false;
	}

	Dialogue->LastSpokenTime = GetWorld()->GetTimeSeconds() + LinePlayInfo.DelayTime * ScaleDurationTime;
	Dialogue->Dialogue.Add(DialogueLine);
	//reset dialogue ended
	Dialogue->DialogueState = EDialogueState::STARTED;
	
	if (USocialComponent* SocialComp = DialogueLine.Speaker->GetComponentByClass<USocialComponent>())
	{
		Dialogue->SpeakerGroups.Add(DialogueLine.Speaker, {SocialComp->GetMySocialGroup()});
	};

	return true;
}

void UDialogueManager::ContinueBark(AActor* Speaker)
{
	for (auto& Bark : BarkEmiterData)
	{
		FBarkGenericData& BarkData = Bark.Value;
		for (int Index = 0; Index < BarkData.Speakers.Num(); ++Index)
		{
			if (BarkData.Speakers[Index].Actor == Speaker)
			{
				//remove current speaker
				BarkData.Speakers.RemoveAtSwap(Index);
				ProcessBark(Bark.Key, BarkData);
				return;
			}
		}
	}
}

void UDialogueManager::RefuseToBark(AActor* Speaker, AActor* Reason)
{
	FBarkGenericData* BarkData = BarkEmiterData.Find(Reason);
	if (!BarkData)
	{
		return;
	}

	if (ManagerRules.BarkRule != EBarkPlayingRule::PLAY_WITH_DELAY)
	{
		for (int Index = 0; Index < BarkData->Speakers.Num(); ++Index)
		{
			if (BarkData->Speakers[Index].Actor == Speaker)
			{
				//remove current speaker
				BarkData->Speakers.RemoveAtSwap(Index);
				break;
			}
		}
	}
	else
	{
		BarkData->BarkReleaseTime = GetWorld()->GetTimeSeconds() + ManagerRules.BarkDelayTime;
	}

	ProcessBark(Reason, *BarkData);
}

void UDialogueManager::ProcessBark(AActor* BarkKey, FBarkGenericData& BarkData)
{
	if (BarkData.Speakers.IsEmpty())
	{
		BarkEmiterData.Remove(BarkKey);

		if (BarkEmiterData.IsEmpty() && IsValid(PerceptionHelper))
		{
			PerceptionHelper->UnregisterComponent();
		}
		return;
	}

	// keep asking another actor
	SendOnPlayBark(BarkKey, BarkData.Speakers);
}

void UDialogueManager::RemoveActorFromDialogue(int DialogueID, AActor* Actor)
{
	FDialogueData* Dialogue = Dialogues.Find(DialogueID);
	if (!Dialogue)
	{
		return;
	}

	Dialogue->PendingParticipants.Remove(Actor);
	Dialogue->Participants.Remove(Actor);
}

bool UDialogueManager::AddToPendingParticipants(int DialogueID, AActor* Actor, float Priority)
{
	FDialogueData* Dialogue = Dialogues.Find(DialogueID);
	if (!Dialogue)
	{
		return false;
	}

	Dialogue->PendingParticipants.AddOrUpdate(Actor, Priority);
	return true;
}

bool UDialogueManager::RemoveFromPendingParticipants(int DialogueID, AActor* Actor)
{
	FDialogueData* Dialogue = Dialogues.Find(DialogueID);
	if (!Dialogue)
	{
		return false;
	}

	Dialogue->PendingParticipants.Remove(Actor);

	return !Dialogue->Participants.Contains(Actor);
}

bool UDialogueManager::AddToListeners(int DialogueID, AActor* Actor)
{
	FDialogueData* Dialogue = Dialogues.Find(DialogueID);
	if (!Dialogue)
	{
		return false;
	}

	Dialogue->Listeners.AddUnique(Actor);
	return true;
}

FDialogueData UDialogueManager::GetDialogueByID(int DialogueID) const
{
	const FDialogueData* Dialogue = Dialogues.Find(DialogueID);
	return Dialogue ? (*Dialogue) : FDialogueData{};
}

const TArray<AActor*>& UDialogueManager::GetAllyGroupList(int DialogueID, AActor* Actor) const
{
	const FDialogueData* Dialogue = Dialogues.Find(DialogueID);
	if (!Dialogue)
	{
		return EMPTY_ACTOR_LIST;
	}
	const FActorList* ActorList = Dialogue->SpeakerGroups.Find(Actor);
	return ActorList ? (ActorList->Actors) : EMPTY_ACTOR_LIST;
}

bool UDialogueManager::IsDialogueValid(int DialogueID) const
{
	return Dialogues.Contains(DialogueID);
}

bool UDialogueManager::IsAMemberOfADialogue(int DialogueID, AActor* Actor) const
{
	const FDialogueData* Dialogue = Dialogues.Find(DialogueID);
	return Dialogue ? (Dialogue->Participants.Contains(Actor) || Dialogue->PendingParticipants.Contains(Actor)) : false;
}

//struct BestLineInfo
//{
//	ELine
//};

TArray<FString> UDialogueManager::GetLineIdListFromTypes(TArray<ELineType> LineTypes) const
{
	TArray<FString> LineIDs;
	for (const auto& Type : LineTypes)
	{
		for (const auto& LineID : LineTypesMap)
		{
			if (LineID.Value.LineType == Type)
			{
				LineIDs.Add(LineID.Key);
			}
		}
	}

	return LineIDs;
}

FLineData UDialogueManager::GetRandomLineFromTypes(EVoicePreset Voice, TArray<ELineType> LineTypes) const
{
	return GetRandomLineFromLineIds(Voice, GetLineIdListFromTypes(LineTypes));	
}

FLineData UDialogueManager::GetRandomLineFromLineIds(EVoicePreset Voice, TArray<FString> LineIDs) const
{
	const FVoiceDictionary& Dict = VoiceCollection[static_cast<int>(Voice)];
	TArray<FLineData> Lines;
	for (const auto& LineID : LineIDs)
	{
		const FLineInstanceCollection* const InstanceCollection = Dict.LineInstanceCollection.Find(LineID);
		if (InstanceCollection)
		{
			for (int Index = 0; Index < InstanceCollection->LineInstances.Num(); ++Index)
			{
				Lines.Add({ LineID, Index });
			}
		}
	}

	if (Lines.IsEmpty())
	{
		return {};
	}

	return Lines[FMath::RandRange(0, Lines.Num() - 1)];
}

ELineType UDialogueManager::GetLineType(FString LineID) const
{
	const FLineTypeInfo* LineType = LineTypesMap.Find(LineID);
	return LineType ? LineType->LineType : ELineType::INVALID;
}

EPhraseType UDialogueManager::GetLineMasteryType(FString LineID) const
{
	const FLineTypeInfo* LineType = LineTypesMap.Find(LineID);
	return LineType ? LineType->MasterType : EPhraseType::SECONDARY_2;
}

FLinePlayInfo UDialogueManager::GetLinePlayInfo(EVoicePreset Voice, FLineData Data) const
{
	const FVoiceDictionary& VoiceDict = VoiceCollection[static_cast<int>(Voice)];
	const FLineInstanceCollection* LineCollection = VoiceDict.LineInstanceCollection.Find(Data.LineID);
	if (LineCollection && Data.LineInstanceID < LineCollection->LineInstances.Num())
	{
		return LineCollection->LineInstances[Data.LineInstanceID].PlayInfo;
	}
	return {};
}

EAlert UDialogueManager::GetLineTypePriority(ELineType LineType) const
{
	const EAlert* AlertState = LineTypePriority.Find(LineType);
	return AlertState ? *AlertState : EAlert::PASSIVE;
}

bool UDialogueManager::HasDialoguePendingParticipants(int DialogueID) const
{
	const FDialogueData* Dialogue = Dialogues.Find(DialogueID);
	return Dialogue && !Dialogue->PendingParticipants.IsEmpty();
}

void UDialogueManager::OnMainPartEnded(int DialogueID)
{
	FDialogueData* Dialogue = Dialogues.Find(DialogueID);
	if (Dialogue)
	{
		Dialogue->DialogueState = EDialogueState::MAIN_PART_ENDED;
	}
}

bool UDialogueManager::IsMainPartEnded(int DialogueID)
{
	FDialogueData* Dialogue = Dialogues.Find(DialogueID);
	return Dialogue && Dialogue->DialogueState == EDialogueState::MAIN_PART_ENDED;
}

bool UDialogueManager::IsEndLineType(ELineType LineType)  const
{
	return LineType == ELineType::GREETING_END || 
		LineType == ELineType::INVESTIGATION_REPLY_MAIN ||
		LineType == ELineType::INVESTIGATION_REPLY_SECONDARY;
}