// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DialogueManager.h"
#include "DialogueComponent.generated.h"

UENUM(BlueprintType)
enum class EDialogueInterruptStatus : uint8
{
	ABSENT UMETA(DisplayName = "Dialogue is absent"),
	INVALID UMETA(DisplayName = "Dialogue is invalid"),
	LOWER_PRIORITY UMETA(DisplayName = "Dialogue is lower priority"),
	HIGHER_PRIORITY UMETA(DisplayName = "Dialogue is higher priority"),
};

USTRUCT(BlueprintType)
struct FDialogueDataForHearer
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	TArray<AActor*> Participants;

	UPROPERTY(BlueprintReadWrite)
	TArray<FDialogueLine> Dialogue;

	UPROPERTY(BlueprintReadWrite)
	float LastSpokenTime;

	UPROPERTY(BlueprintReadWrite)
	bool IsParticipant;

	UPROPERTY(BlueprintReadWrite)
	bool IsMainPartCompleted;
};

USTRUCT(BlueprintType)
struct FDialoguePendingToJoin
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	int DialogueID;

	UPROPERTY(BlueprintReadWrite)
	AActor* Hearer;

	UPROPERTY(BlueprintReadWrite)
	EPendingType PendingType;

	UPROPERTY(BlueprintReadWrite)
	float JoinTimeout;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDialogueComponentOnReplyRequested, int, DialogueID);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable, BlueprintType)
class RIBEYE_API UDialogueComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDialogueComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	FDialogueLine LastSpokenLine;
	int LastDialogueID = -1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogue")
	UDialogueManager* DialogueManager;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Dialogue")
	TMap<int, FDialogueDataForHearer> HeardDialogues;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Dialogue")
	TArray<FDialoguePendingToJoin> DialoguesPendingToJoin;
public:	

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Dialogue")
	EVoicePreset VoicePreset;

	// INVALID DATA START
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Dialogue")
	FDialogueDataForHearer InvalidDialogueDataForHearer = {};

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Dialogue")
	FDialogueLine InvalidDialogueLine = {};

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Dialogue")
	FDialoguePendingToJoin InvalidPendingToJoinData = {};
	// INVALID DATA END

	UPROPERTY(BlueprintAssignable, Category = "Components|Dialogue")
	FDialogueComponentOnReplyRequested OnReplyRequested;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Dialogue")
	float MaxWaitTimeToJoin = 8.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Dialogue")
	float MaxAdditionalWaitTimeToKeepDialogue = 3.0f;

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	void ForgetDialogue(int DialogueID, bool IterateThroughPendings = true);

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	void OnPendingToJoinDialogue(int DialogueID, AActor* Hearer, EPendingType PendingType);

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	void RefreshPendingToJoinDialogueTime(int DialogueID);

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	void LeavePendindDialogue(int DialogueID);

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	bool OnDialogueHeard(int DialogueID, FDialogueLine HeardLine);

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	bool OnDialogueSpoke(int DialogueID, FDialogueLine SpokenLine);

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	int GetLastPendingDialogue();

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	FDialoguePendingToJoin GetPendingData(int DialogueID);

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	const FDialogueDataForHearer& GetHeardDialogue(int DialogueID);

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	const FDialogueLine& GetLastHeardLine(int DialogueID);

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	int GetLastDialogueID();

	//UFUNCTION(BlueprintCallable, Category = "Dialogue")
	//int CanCurrentDialodueBeInterrupted();

	// BLUEPRINT IMPLEMENTABLE!

	UFUNCTION(BlueprintImplementableEvent, Category = "Dialogue")
	void OnDialogueJoined(int DialogueID, AActor* Participant, ELineType LineType);

	UFUNCTION(BlueprintImplementableEvent, Category = "Dialogue")
	void OnDialogueLeft(int DialogueID);

	UFUNCTION(BlueprintImplementableEvent, Category = "Dialogue")
	void OnDialogueIgnored(int DialogueID);

	UFUNCTION(BlueprintImplementableEvent, Category = "Dialogue")
	void OnLeftPendingDialogue(int DialogueID);

	UFUNCTION(BlueprintImplementableEvent, Category = "Dialogue", meta = (ForceAsFunction))
	bool OnPlayBark(const FVector& EmiterPos, EBarkType BarkType);
};
