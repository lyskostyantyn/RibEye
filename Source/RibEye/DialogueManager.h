// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Algo/Sort.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Enums.h"
#include "Perception/AIPerceptionComponent.h"

#include "DialogueManager.generated.h"

USTRUCT(BlueprintType)
struct FLineData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	FString LineID; // used in conversation system to define generic sense of phrase

	UPROPERTY(BlueprintReadWrite)
	int LineInstanceID; // specific instance of current variant
};

// Voice Line Dictionary

USTRUCT(BlueprintType)
struct FLineTypeInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ELineType LineType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPhraseType MasterType;
};

USTRUCT(BlueprintType)
struct FLineCooldownInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int CountOfSimultaneousPlays;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LineCooldownTime;
};

USTRUCT(BlueprintType)
struct FLinePlayInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LineText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DelayTime = 0.0f;
};

USTRUCT(BlueprintType)
struct FLineInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinePlayInfo PlayInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLineCooldownInfo CooldownInfo;
};


USTRUCT(BlueprintType)
struct FLineInstanceCollection
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FLineInstance> LineInstances;
};

USTRUCT(BlueprintType)
struct FVoiceDictionary
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FLineInstanceCollection> LineInstanceCollection;
};

// Dialogue Structs

USTRUCT(BlueprintType)
struct FLineEntry
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	FLineData LineData;

	UPROPERTY(BlueprintReadWrite)
	int AdditionalData; // might contain count of additional investigators requested etc
};

USTRUCT(BlueprintType)
struct FDialogueLine
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	AActor* Speaker;

	UPROPERTY(BlueprintReadWrite)
	AActor* Replier;

	UPROPERTY(BlueprintReadWrite)
	FLineEntry LineEntry;
};

USTRUCT(BlueprintType)
struct FActorList
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AActor*> Actors;
};

USTRUCT(BlueprintType)
struct FPendingActorPriorityMap
{
	GENERATED_BODY()

public:
	bool IsEmpty() const;
	
	bool Contains(AActor* Actor) const;

	void AddOrUpdate(AActor* Actor, float Value);

	void Remove(AActor* Actor);

	AActor* GetMaxActor() const;

	UPROPERTY(BlueprintReadWrite)
	TMap<AActor*, float> ActorMap;
};

USTRUCT(BlueprintType)
struct FDialogueData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	TArray<AActor*> Participants;

	UPROPERTY(BlueprintReadWrite)
	TArray<FDialogueLine> Dialogue;

	UPROPERTY(BlueprintReadWrite)
	float LastSpokenTime;

	// is set when we request main participant to answer, but they have nothing to say
	UPROPERTY(BlueprintReadWrite)
	EDialogueState DialogueState = EDialogueState::STARTED;

	UPROPERTY(BlueprintReadWrite)
	FPendingActorPriorityMap PendingParticipants = {};

	// AI that just listen to conversation when someone else asks smth from theirs allies
	UPROPERTY(BlueprintReadWrite)
	TArray<AActor*> Listeners = {};

	// interesting part
	// for every speaker, contains theirs own ally group (according to personal vision
	// of speaker, so everyone who heard could update alert state of whole that group
	// we store it because at the end of conversation group might be changed 
	UPROPERTY(BlueprintReadWrite)
	TMap<AActor*, FActorList> SpeakerGroups = {};
};

USTRUCT(BlueprintType)
struct FBarkSpeakerData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	AActor* Actor;

	UPROPERTY(BlueprintReadWrite)
	EBarkType BarkType;

	UPROPERTY(BlueprintReadWrite)
	float Priority;
};

USTRUCT(BlueprintType)
struct FBarkGenericData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	FVector EmiterPosition;

	UPROPERTY(BlueprintReadWrite)
	float BarkReleaseTime;

	UPROPERTY(BlueprintReadWrite)
	TArray<FBarkSpeakerData> Speakers;
};

USTRUCT(BlueprintType)
struct FRules
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EBarkPlayingRule BarkRule = EBarkPlayingRule::PLAY_WITH_DELAY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BarkDelayTime = 1.5f;
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RIBEYE_API UDialogueManager : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDialogueManager();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	void SendOnReplyRequested(AActor* Actor, int DialogueID) const;
	void SendOnDialogueEnded(AActor* Actor, int DialogueID) const;
	void ValidateDialogues();
	void ValidateBarks();
	void EndDialogue(int DialogueID, const FDialogueData& Data);

	int S_DIALOGUE_ID_GENERATOR = 0;

	// INVALID DATA BEGIN
	UPROPERTY(BlueprintReadWrite)
	int InvalidDialogue = -1;
	// INVALID DATA END

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Dialogue")
	float RemoveDialogWaitTime = 3.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Dialogue")
	float JoinPendingWaitTime = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Dialogue")
	float ScaleDurationTime = 2.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Dialogue")
	float BarkReleaseTime = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Dialogue")
	FRules ManagerRules;

	TMap<int, FDialogueData> Dialogues;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Category = "Dialogue")
	UAIPerceptionComponent* PerceptionHelper;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient, Category = "Dialogue")
	TArray<FVoiceDictionary> VoiceCollection;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient, Category = "Dialogue")
	TMap<FString, FLineTypeInfo> LineTypesMap;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient, Category = "Dialogue")
	TArray<FBarkGenericData> BarkEmiterData;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient, Category = "Dialogue")
	TMap<ELineType, EAlert> LineTypePriority;
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	float GetJoinPendingWaitTime() const { return JoinPendingWaitTime; }

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	int MakeADialogue(FDialogueLine DialogueLine);

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	void MakeABark(const FVector& SoundPosition, FBarkSpeakerData SpeakerData);

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	bool ContinueDialogue(int DialogueID, FDialogueLine DialogueLine);

	// not used if barkType is PLAY_WITH_DELAY
	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	void ContinueBark(AActor* Speaker);

	// shouldn't be used at all actually
	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	void RefuseToBark(AActor* Speaker, const FVector& EmitterPos);

	//return true if we sent process and wait for a reaction
	bool ProcessBark(FBarkGenericData& BarkData);

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	void RemoveActorFromDialogue(int DialogueID, AActor* Actor);

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	bool AddToPendingParticipants(int DialogueID, AActor* Actor, float Priority);

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	bool RemoveFromPendingParticipants(int DialogueID, AActor* Actor);

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	bool AddToListeners(int DialogueID, AActor* Actor);

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	void OnMainPartEnded(int DialogueID);

	// IS CHECKERS

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	bool IsDialogueValid(int DialogueID) const;

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	bool IsAMemberOfADialogue(int DialogueID, AActor* Actor) const;

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	bool HasDialoguePendingParticipants(int DialogueID) const;

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	bool IsMainPartEnded(int DialogueID);

	bool IsEndLineType(ELineType LineType) const;

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	bool HaveCommonActiveDialogue(TArray<AActor*> FirstGroup, TArray<AActor*> SecondGroup, EAlert AlertState) const;

	// GETTERS

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	int FindActiveDialogueOfActor(AActor* Actor) const;

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	FDialogueData GetDialogueByID(int DialogueID) const;

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	const TArray<AActor*>& GetAllyGroupList(int DialogueID, AActor* Actor) const;

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	TArray<FString> GetLineIdListFromTypes(TArray<ELineType> LineTypes) const;

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	FLineData GetRandomLineFromTypes(EVoicePreset Voice, TArray<ELineType> LineTypes) const;

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	FLineData GetRandomLineFromLineIds(EVoicePreset Voice, TArray<FString> LineIDs) const;

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	ELineType GetLineType(FString LineID) const;

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	EPhraseType GetLineMasteryType(FString LineID) const;

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	FLinePlayInfo GetLinePlayInfo(EVoicePreset Voice, FLineData Data) const;

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	EAlert GetLineTypePriority(ELineType LineType) const;
};
