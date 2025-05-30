// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogueComponent.h"
#include "DialogueManager.h"
// Sets default values for this component's properties
UDialogueComponent::UDialogueComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

static const int S_INVALID_DIALOGUE = -1;

// Called when the game starts
void UDialogueComponent::BeginPlay()
{
	LastDialogueID = S_INVALID_DIALOGUE;
	Super::BeginPlay();
}

// Called every frame
void UDialogueComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	for (int Index = 0; Index < DialoguesPendingToJoin.Num(); ++Index)
	{
		FDialoguePendingToJoin& Dialogue = DialoguesPendingToJoin[Index];
		if ( GetWorld()->GetTimeSeconds() > Dialogue.JoinTimeout)
		{
			LeavePendindDialogue(Dialogue.DialogueID);
			return;
		}
	}

	float TimeToWaitBeforeLeaveDialogue = MaxAdditionalWaitTimeToKeepDialogue;
	if (DialogueManager)
	{
		TimeToWaitBeforeLeaveDialogue += DialogueManager->GetJoinPendingWaitTime();
	}

	for (auto& Dialogue : HeardDialogues)
	{
		if (GetWorld()->GetTimeSeconds() > Dialogue.Value.LastSpokenTime + TimeToWaitBeforeLeaveDialogue)
		{
			ForgetDialogue(Dialogue.Key);
			// to avoid acessing wrong data
			break;
		}
	}
}

// clears just whole own data, without Manager's
void UDialogueComponent::ForgetDialogue(int DialogueID, bool IterateThroughPendings)
{
	if (IterateThroughPendings)
	{
		LeavePendindDialogue(DialogueID);
	}

	FDialogueDataForHearer* Dialogue = HeardDialogues.Find(DialogueID);
	if (Dialogue && Dialogue->IsParticipant)
	{
		OnDialogueLeft(DialogueID);
	}

	if (DialogueID == LastDialogueID)
	{
		LastDialogueID = S_INVALID_DIALOGUE;
	}

	HeardDialogues.Remove(DialogueID);
}

void UDialogueComponent::OnPendingToJoinDialogue(int DialogueID, AActor* Hearer, EPendingType PendingType)
{
	for (auto& Dialogue : DialoguesPendingToJoin)
	{
		if (Dialogue.DialogueID == DialogueID)
		{
			Dialogue.Hearer = Hearer;
			Dialogue.PendingType = PendingType;
			Dialogue.JoinTimeout = GetWorld()->GetTimeSeconds() + MaxWaitTimeToJoin;
			return;
		}
	}

	if (!DialoguesPendingToJoin.IsEmpty())
	{
		DialoguesPendingToJoin.Reset();
	}

	FDialoguePendingToJoin Pending = { DialogueID, Hearer, PendingType,
		GetWorld()->GetTimeSeconds() + MaxWaitTimeToJoin };
	DialoguesPendingToJoin.Add( Pending );

	OnDialogueJoined(DialogueID, Hearer, ELineType::INVALID);
}

void UDialogueComponent::RefreshPendingToJoinDialogueTime(int DialogueID)
{
	for (auto& Dialogue : DialoguesPendingToJoin)
	{
		if (Dialogue.DialogueID == DialogueID)
		{
			Dialogue.JoinTimeout = GetWorld()->GetTimeSeconds() + MaxWaitTimeToJoin;
			return;
		}
	}
}

void UDialogueComponent::LeavePendindDialogue(int DialogueID)
{
	for (int Index = 0; Index < DialoguesPendingToJoin.Num(); ++Index)
	{
		FDialoguePendingToJoin& Dialogue = DialoguesPendingToJoin[Index];
		if (Dialogue.DialogueID == DialogueID)
		{
			DialoguesPendingToJoin.RemoveAt(Index);
			break;
		}
	}

	// If AI wasn't dialogue participant
	if (DialogueManager && DialogueManager->RemoveFromPendingParticipants(DialogueID, GetOwner()))
	{
		OnLeftPendingDialogue(DialogueID);
	}
}

int UDialogueComponent::GetLastPendingDialogue()
{
	return DialoguesPendingToJoin.IsEmpty() ? S_INVALID_DIALOGUE : DialoguesPendingToJoin.HeapTop().DialogueID;
}

FDialoguePendingToJoin UDialogueComponent::GetPendingData(int DialogueID)
{
	for (auto& Dialogue : DialoguesPendingToJoin)
	{
		if (Dialogue.DialogueID == DialogueID)
		{
			return Dialogue;
		}
	}

	return InvalidPendingToJoinData;
}

bool UDialogueComponent::OnDialogueSpoke(int DialogueID, FDialogueLine SpokenLine)
{
	LastSpokenLine = SpokenLine;
	return OnDialogueHeard(DialogueID, SpokenLine);
}

bool UDialogueComponent::OnDialogueHeard(int DialogueID, FDialogueLine HeardLine)
{
	bool bIsSpeaker = HeardLine.Speaker == GetOwner();
	bool IsParticipant = (HeardLine.Speaker == GetOwner() || HeardLine.Replier == GetOwner());
	// if we were in other dialogue, but heard a line from new one, forget previous
	if (IsParticipant && LastDialogueID != S_INVALID_DIALOGUE && LastDialogueID != DialogueID)
	{
		ForgetDialogue(LastDialogueID);
	}

	if (bIsSpeaker)
	{
		LastDialogueID = DialogueID;
	}

	LastDialogueID = DialogueID;

	for (int Index = 0; Index < DialoguesPendingToJoin.Num(); ++Index)
	{
		FDialoguePendingToJoin& Dialogue = DialoguesPendingToJoin[Index];
		if (Dialogue.DialogueID == DialogueID && HeardLine.Speaker == GetOwner())
		{
			DialoguesPendingToJoin.RemoveAt(Index);
			break;
		}
	}

	UDialogueComponent* SpeakerComp = HeardLine.Speaker->GetComponentByClass<UDialogueComponent>();
	if (!IsValid(SpeakerComp))
	{
		return false;
	}

	float LastSpokenTime = GetWorld()->GetTimeSeconds();
	ELineType LineType = ELineType::INVALID;
	if (DialogueManager)
	{
		FLinePlayInfo PlayInfo = DialogueManager->GetLinePlayInfo(SpeakerComp->VoicePreset,  HeardLine.LineEntry.LineData);
		LastSpokenTime += PlayInfo.DelayTime;
		LineType = DialogueManager->GetLineType(HeardLine.LineEntry.LineData.LineID);
	}

	FDialogueDataForHearer* Dialogue = HeardDialogues.Find(DialogueID);
	if (Dialogue)
	{
		if (!Dialogue->IsParticipant)
		{
			Dialogue->IsParticipant = IsParticipant;
			if (IsParticipant)
			{
				OnDialogueJoined(DialogueID, HeardLine.Replier == GetOwner() ? HeardLine.Speaker : HeardLine.Replier, LineType );
			}
		}
		Dialogue->Dialogue.Add(HeardLine);
		Dialogue->LastSpokenTime = LastSpokenTime;
		if (!Dialogue->Participants.Contains(HeardLine.Speaker))
		{
			Dialogue->Participants.Add(HeardLine.Speaker);
		}

		if (!Dialogue->Participants.Contains(HeardLine.Replier))
		{
			Dialogue->Participants.Add(HeardLine.Replier);
		}

		if (DialogueManager && DialogueManager->IsEndLineType(LineType))
		{
			Dialogue->IsMainPartCompleted = true;
		}

		return Dialogue->IsParticipant;
	}
	else
	{
		FDialogueDataForHearer Data = {{ HeardLine.Speaker, HeardLine.Replier }, { HeardLine }, 
			LastSpokenTime, (HeardLine.Speaker == GetOwner() || HeardLine.Replier == GetOwner()),
			DialogueManager && DialogueManager->IsEndLineType(LineType) };
		HeardDialogues.Add( DialogueID, Data );
		if (IsParticipant)
		{
			OnDialogueJoined(DialogueID, HeardLine.Replier == GetOwner() ? HeardLine.Speaker : HeardLine.Replier, LineType);
		}
		return IsParticipant;
	}

	return false;
}

const FDialogueDataForHearer& UDialogueComponent::GetHeardDialogue(int DialogueID)
{
	FDialogueDataForHearer* Dialogue = HeardDialogues.Find(DialogueID);
	return Dialogue ? *Dialogue : InvalidDialogueDataForHearer;
}

const FDialogueLine& UDialogueComponent::GetLastHeardLine(int DialogueID)
{
	FDialogueDataForHearer* Dialogue = HeardDialogues.Find(DialogueID);
	if (!Dialogue)
	{
		return InvalidDialogueLine;
	}

	return Dialogue->Dialogue.Last();
}

int UDialogueComponent::GetLastDialogueID()
{
	return LastDialogueID;
}