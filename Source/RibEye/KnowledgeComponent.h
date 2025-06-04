// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Enums.h"
#include "KnowledgeComponent.generated.h"

USTRUCT(BlueprintType)
struct FLastKnownData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	FVector LastKnownPosition;
	
	UPROPERTY(BlueprintReadWrite)
	FVector LastKnownMoveDirection;

	UPROPERTY(BlueprintReadWrite)
	float LastKnownTime;
};

USTRUCT(BlueprintType)
struct FLastKnownSoundPosition
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	FVector LastKnownPosition;

	UPROPERTY(BlueprintReadWrite)
	float LastKnownTime;

	UPROPERTY(BlueprintReadWrite)
	bool Resolved;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKnowledgeComponentOnTargetSelectedSignature, AActor*, Target);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FKnowledgeComponentOnLastTargetLostSignature, AActor*, Target, const FLastKnownData&, LastKnownData);

class USocialComponent;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable, BlueprintType)
class RIBEYE_API UKnowledgeComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UKnowledgeComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	TMap<AActor*, FLastKnownData> LastKnownData;
	TArray<FLastKnownSoundPosition> LastKnownSoundPosition;
	TArray<AActor*> SpottedEnemies;

	USocialComponent* SComp;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(BlueprintAssignable, Category = "Components|Vision")
	FKnowledgeComponentOnTargetSelectedSignature OnTargetSelected;

	UPROPERTY(BlueprintAssignable, Category = "Components|Vision")
	FKnowledgeComponentOnLastTargetLostSignature OnLastTargetLost;

	UFUNCTION(BlueprintCallable, Category = "Vision")
	void OnEnemySpotted(AActor* Actor);

	UFUNCTION(BlueprintCallable, Category = "Knowledge")
	void RegisterKnowledge(AActor* Actor, FVector Position, FVector Direction);

	UFUNCTION(BlueprintCallable, Category = "Vision")
	const TArray<AActor*>& GetSpottedActors() { return SpottedEnemies; }

	UFUNCTION(BlueprintCallable, Category = "Group")
	bool IsResolvedAllyNearby(FVector Position, EAlert MinAlertLevel) const;

	UFUNCTION(BlueprintCallable, Category = "Knowledge")
	void RegisterSound(const FVector& EmiterPos, bool IsResolved = false);

	// this function is an assumption, that AI barked to react on these sounds!
	UFUNCTION(BlueprintCallable, Category = "Knowledge")
	void ResolveSound(const FVector& AllyPos);

	UFUNCTION(BlueprintCallable, Category = "Knowledge")
	bool IsSoundResolved(const FVector& EmiterPos) const;
};
