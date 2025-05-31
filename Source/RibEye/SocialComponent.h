// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Enums.h"
#include "KnowledgeComponent.h"
#include "SocialComponent.generated.h"

USTRUCT(BlueprintType)
struct FSocialSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	int MaxInvestigators = 3;

	UPROPERTY(BlueprintReadWrite)
	bool ResolveWholeGroupOfAI = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Bitmask, BitmaskEnum = "EIgnoreDialogueType"))
	int32 DialoguesToIgnore;
};

USTRUCT(BlueprintType)
struct FAllyGroupInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	TArray<AActor*> Allies;
};

USTRUCT(BlueprintType)
struct FAllyKnownState
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	EAlert AlertState;

	UPROPERTY(BlueprintReadWrite)
	float LastKnownTime;

	UPROPERTY(BlueprintReadWrite)
	bool KnowledgeResolved;
};

USTRUCT(BlueprintType)
struct FAllyGroup
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	TArray<AActor*> Actors;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSocialComponentOnAlertnessChangedSignature, EAlert, AlertState);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSocialComponentOnAllyChangedStateSignature, AActor*, Ally, EAlert, AlertState);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable, BlueprintType )
class RIBEYE_API USocialComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USocialComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	bool ShouldIgnoreADialogueType(EIgnoreDialogueType IgnoreType) const;

	// used for group resolve
	void UpdateAllyKnownStateInMyGroup(AActor* Ally, EAlert AllyAlertState, bool IsKnowledgeResolved = false);
	
	// used for personal resolve
	bool UpdateAllyKnownState_Internal(AActor* Ally, EAlert AllyAlertState, bool IsKnowledgeResolved = false);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AllyGroup")
	TMap<EGroupType, FAllyGroup> CurrentKnownGroups;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Faction")
	int Faction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "State")
	EAlert AlertState;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "State")
	float StateForgetTime = 60.0f;

	int ID = -1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Settings")
	FSocialSettings Settings;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Settings")
	TMap<AActor*, FAllyKnownState> AllyKnownStates;

	UKnowledgeComponent* KnowledgeComponent;
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(BlueprintAssignable, Category = "Components|StateChange")
	FSocialComponentOnAlertnessChangedSignature OnAlertnessChanged;

	UPROPERTY(BlueprintAssignable, Category = "Components|StateChange")
	FSocialComponentOnAllyChangedStateSignature OnSawAllyChangedState;

	// used mainly for hearing
	UFUNCTION(BlueprintCallable, Category = "Group")
	void UpdateAllyKnownState(AActor* Ally, EAlert AllyAlertState, bool IsKnowledgeResolved = false);

	// used for vision
	UFUNCTION(BlueprintCallable, Category = "Group")
	void UpdateAllyKnownState_Vision(AActor* Ally, EAlert AllyAlertState);

	UFUNCTION(BlueprintCallable, Category = "State")
	void SetAlertState(EAlert NewAlertState);

	UFUNCTION(BlueprintCallable, Category = "Group")
	void AddActorToGroup( AActor* Actor, EGroupType Group );

	UFUNCTION(BlueprintCallable, Category = "Group")
	void RemoveActorFromGroup(AActor* Actor, EGroupType Group);

	UFUNCTION(BlueprintCallable, Category = "Group")
	void AddMembersToGroup(TArray<AActor*> Members, EGroupType Group, bool Override = false);

	UFUNCTION(BlueprintCallable, Category = "Group")
	const TArray<AActor*>& GetGroupMembers( EGroupType Group );

	UFUNCTION(BlueprintCallable, Category = "Group")
	void ClearGroupMembers(EGroupType Group);

	UFUNCTION(BlueprintCallable, Category = "Group")
	bool IsFromMySocialGroup(AActor* Actor) const;

	UFUNCTION(BlueprintCallable, Category = "Group")
	int GetMyGroupNumber() const;

	UFUNCTION(BlueprintCallable, Category = "Group")
	TArray<AActor*> GetMySocialGroup() const;

	UFUNCTION(BlueprintCallable, Category = "Group")
	int GetSocialGroupSize() const;

	UFUNCTION(BlueprintCallable, Category = "State")
	void SetupID();

	UFUNCTION(BlueprintCallable, Category = "State")
	int GetID() const;

	UFUNCTION(BlueprintCallable, Category = "State")
	FString GetTextID() const;

	UFUNCTION(BlueprintCallable, Category = "Faction")
	bool IsAllyResolved(AActor* Ally) const;

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	bool ShouldIgnoreAnsweringLineType(ELineType LineType) const;

	UFUNCTION(BlueprintCallable, Category = "Faction")
	int GetFaction() const { return Faction; }

	UFUNCTION(BlueprintCallable, Category = "Debug")
	FString GetDebugText() const;
};
