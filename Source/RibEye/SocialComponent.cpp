// Fill out your copyright notice in the Description page of Project Settings.

#include "SocialComponent.h"

#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"

static int S_SOCIAL_ID_GENERATOR = 0;

// Sets default values for this component's properties
USocialComponent::USocialComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void USocialComponent::BeginPlay()
{
	Super::BeginPlay();
	// ...
	KnowledgeComponent = GetOwner()->FindComponentByClass<UKnowledgeComponent>();
}

// Called every frame
void USocialComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

	if (IsValid(KnowledgeComponent))
	{
		auto& SpottedActors = KnowledgeComponent->GetSpottedActors();
		for (auto& SpottedActor : SpottedActors)
		{
			const USocialComponent* const SASocialComp = SpottedActor->GetComponentByClass<USocialComponent>();
			if (IsValid(SASocialComp) && SASocialComp->GetFaction() == GetFaction())
			{
				UpdateAllyKnownState_Vision(SpottedActor, SASocialComp->AlertState);
			}
		}
	}
}

void USocialComponent::SetAlertState(EAlert NewAlertState)
{
	if (NewAlertState == AlertState)
	{
		return;
	}
	AlertState = NewAlertState;
	//AddActorToGroup(GetOwner(), NewAlertState);
	OnAlertnessChanged.Broadcast(AlertState);
}

void USocialComponent::AddActorToGroup(AActor* Actor, EGroupType Group)
{
	FAllyGroup* GroupMembers = CurrentKnownGroups.Find(Group);
	if (!GroupMembers)
	{
		CurrentKnownGroups.Add({Group, FAllyGroup{TArray<AActor*>{Actor}} });
	}
	else
	{
		GroupMembers->Actors.AddUnique(Actor);
	}
}

void USocialComponent::RemoveActorFromGroup(AActor* Actor, EGroupType Group)
{
	FAllyGroup* GroupMembers = CurrentKnownGroups.Find(Group);
	if (GroupMembers)
	{
		GroupMembers->Actors.Remove(Actor);
	}
}

const TArray<AActor*>& USocialComponent::GetGroupMembers(EGroupType Group)
{
	FAllyGroup* GroupMembers = CurrentKnownGroups.Find(Group);
	return GroupMembers ? GroupMembers->Actors : EMPTY_ACTOR_LIST;
}

void USocialComponent::ClearGroupMembers(EGroupType Group)
{
	CurrentKnownGroups.Remove(Group);
}

void USocialComponent::AddMembersToGroup(TArray<AActor*> Members, EGroupType Group, bool Override/* = false*/)
{
	FAllyGroup* GroupMembers = CurrentKnownGroups.Find(Group);
	if (!GroupMembers)
	{
		CurrentKnownGroups.Add({ Group, FAllyGroup{Members} });
	}
	else
	{
		if (Override)
		{
			GroupMembers->Actors.Empty();
		}

		for (auto& Member : Members)
		{
			GroupMembers->Actors.AddUnique(Member);
		}
	}
}

EGroupType AlertToGroup(EAlert Alert)
{
	switch (Alert)
	{
	case EAlert::PASSIVE:
		return EGroupType::PATROL;
	case EAlert::INVESTIGATE:
		return EGroupType::INVESTIGATE;
	case EAlert::AGGRESSIVE_INVESTIGATE:
		return EGroupType::INVESTIGATE;
	case EAlert::AGGRESSIVE:
		return EGroupType::ATTACK;
	default:
		return EGroupType::PATROL;
	}
}

bool USocialComponent::IsFromMySocialGroup(AActor* Actor) const
{
	const TArray<AActor*>& GroupMembers = GetMySocialGroup();
	return GroupMembers.Contains(Actor);
}

int USocialComponent::GetMyGroupNumber() const
{
	const TArray<AActor*>& GroupMembers = GetMySocialGroup();
	return GroupMembers.IndexOfByKey(GetOwner());
}

TArray<AActor*> USocialComponent::GetMySocialGroup() const
{
	const FAllyGroup* GroupMembers = CurrentKnownGroups.Find(EGroupType::OWN);
	return GroupMembers ? GroupMembers->Actors : TArray<AActor*>{GetOwner()};
}

int USocialComponent::GetSocialGroupSize() const
{
	const TArray<AActor*>& GroupMembers = GetMySocialGroup();
	return GroupMembers.Num();
}

void USocialComponent::SetupID()
{
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACharacter::StaticClass(), FoundActors);

	// Optionally cast to your specific class
	for (int Index = 0; Index < FoundActors.Num(); ++Index)
	{
		if (FoundActors[Index] == GetOwner())
		{
			ID = Index;
			break;
		}
	}
}

int USocialComponent::GetID() const
{ 
	return ID; 
}

FString USocialComponent::GetTextID() const
{
	return GetOwner()->GetActorLabel();
}

void USocialComponent::UpdateAllyKnownState(AActor* Ally, EAlert AllyAlertState, bool IsKnowledgeResolved)
{
	if (Ally == GetOwner())
	{
		SetAlertState(AllyAlertState);
		return;
	}

	if (false && Settings.ResolveWholeGroupOfAI)
	{
		UpdateAllyKnownStateInMyGroup(Ally, AllyAlertState, IsKnowledgeResolved);
	}
	else
	{
		UpdateAllyKnownState_Internal(Ally, AllyAlertState, IsKnowledgeResolved);
	}
}

void USocialComponent::UpdateAllyKnownState_Vision(AActor* Ally, EAlert AllyAlertState)
{
	if (UpdateAllyKnownState_Internal(Ally, AllyAlertState))
	{
		OnSawAllyChangedState.Broadcast(Ally, AllyAlertState);
	}
}

bool USocialComponent::UpdateAllyKnownState_Internal(AActor* Ally, EAlert AllyAlertState, bool IsKnowledgeResolved)
{
	FAllyKnownState* State = AllyKnownStates.Find(Ally);
	bool StateChanged = false;
	if (!State)
	{
		FAllyKnownState NewState = { AllyAlertState, GetWorld()->GetTimeSeconds(), IsKnowledgeResolved };
		AllyKnownStates.Add(Ally, NewState);
		StateChanged = true;
	}
	else if (AllyAlertState != State->AlertState)
	{
		StateChanged = AllyAlertState > State->AlertState || 
			GetWorld()->GetTimeSeconds() > State->LastKnownTime + StateForgetTime;
		State->AlertState = AllyAlertState;
		State->LastKnownTime = GetWorld()->GetTimeSeconds();
		State->KnowledgeResolved = IsKnowledgeResolved;
	}
	else
	{
		// we already forgot about Ally, consider we met them again
		if ( GetWorld()->GetTimeSeconds() > State->LastKnownTime + StateForgetTime )
		{
			State->KnowledgeResolved = IsKnowledgeResolved;
			StateChanged = true;
		}
		else
		{
			// if we just update current knowledge, don't reset knowledge if it was already set
			// otherwise we assume that we don't have data and set value that was passed
			State->KnowledgeResolved |= IsKnowledgeResolved;
		}

		State->LastKnownTime = GetWorld()->GetTimeSeconds();
	}

	return StateChanged;
}

void USocialComponent::UpdateAllyKnownStateInMyGroup(AActor* Ally, EAlert AllyAlertState, bool IsKnowledgeResolved)
{
	if (!IsValid(Ally))
	{
		return;
	}

	USocialComponent* SocialComp = Ally->GetComponentByClass<USocialComponent>();
	if (SocialComp)
	{
		for (auto& GroupMember : SocialComp->GetMySocialGroup())
		{
			UpdateAllyKnownState_Internal(GroupMember, AllyAlertState, IsKnowledgeResolved);
		}
	}
}

bool USocialComponent::ShouldIgnoreAnsweringLineType(ELineType LineType) const
{
	switch (LineType)
	{
	case ELineType::GREETING:
	case ELineType::GREETING_REPLY:
	case ELineType::GREETING_END:
		return ShouldIgnoreADialogueType(EIgnoreDialogueType::Patrol);
		break;
	case ELineType::SURPRISE:
	case ELineType::INVESTIGATION_MAIN:
	case ELineType::INVESTIGATION_SECONDARY:
	case ELineType::INVESTIGATION_DISCUSSION:
	case ELineType::INVESTIGATION_REPLY_MAIN:
	case ELineType::INVESTIGATION_REPLY_SECONDARY:
	case ELineType::INVESTIGATION_BOTH_MAIN:
	case ELineType::INVESTIGATION_BOTH_SECONDARY:
		return ShouldIgnoreADialogueType(EIgnoreDialogueType::Investigation);
	default:
		return false;
	}
}

bool USocialComponent::ShouldIgnoreADialogueType(EIgnoreDialogueType IgnoreType)const
{
	return (Settings.DialoguesToIgnore & static_cast<int32>(IgnoreType)) != 0;
}

bool USocialComponent::IsAllyResolved(AActor* Ally) const
{
	const FAllyKnownState* State = AllyKnownStates.Find(Ally);
	if (!State || (GetWorld()->GetTimeSeconds() > State->LastKnownTime + StateForgetTime))
	{
		return false;
	}

	return State->KnowledgeResolved;
}

