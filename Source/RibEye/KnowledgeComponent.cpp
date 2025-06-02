// Fill out your copyright notice in the Description page of Project Settings.


#include "KnowledgeComponent.h"
#include "Kismet/GameplayStatics.h"
#include "SocialComponent.h"

// Sets default values for this component's properties
UKnowledgeComponent::UKnowledgeComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UKnowledgeComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	SComp = GetOwner()->GetComponentByClass<USocialComponent>();
}


// Called every frame
void UKnowledgeComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UKnowledgeComponent::OnEnemySpotted(AActor* Actor)
{
	if (!SpottedEnemies.Contains(Actor))
	{ 
		SpottedEnemies.Add(Actor);
	}

	// calculate best threat
	OnTargetSelected.Broadcast(SpottedEnemies[0]);
}

void UKnowledgeComponent::RegisterKnowledge(AActor* Actor, FVector Position, FVector Direction)
{
	FLastKnownData* ActorsLND = LastKnownData.Find(Actor);
	if (ActorsLND)
	{
		ActorsLND->LastKnownPosition = Position;
		ActorsLND->LastKnownMoveDirection = Direction;
		ActorsLND->LastKnownTime = GetWorld()->GetTimeSeconds();
	}
	else
	{
		FLastKnownData NewData;
		NewData.LastKnownPosition = Position;
		NewData.LastKnownMoveDirection = Direction;
		NewData.LastKnownTime = GetWorld()->GetTimeSeconds();
		LastKnownData.Add(Actor, NewData);

		ActorsLND = &NewData;
	}

	if (SpottedEnemies.Contains(Actor))
	{
		SpottedEnemies.Remove(Actor);
		if (SpottedEnemies.IsEmpty())
		{
			OnLastTargetLost.Broadcast(Actor, *ActorsLND);
		}
	}
}

bool UKnowledgeComponent::IsResolvedAllyNearby(FVector Position, EAlert MinAlertLevel) const
{
	if (!IsValid(SComp))
	{
		return false;
	}

	float TimeToInclude = 10.f;
	constexpr float DistanceToIncludeSq = FMath::Square(15000.f);
	for (auto& State : LastKnownData)
	{
		// Check only that allies knowledge about which are fresh
		if (State.Value.LastKnownTime + TimeToInclude > GetWorld()->GetTimeSeconds())
		{
			float DistanceSq = (State.Value.LastKnownPosition - 
				Position).SquaredLength();
			if ( DistanceSq < DistanceToIncludeSq )
			{
				if (SComp->IsAllyResolved(State.Key))
				{
					return true;
				}
			}
		}
	}

	return false;
}
