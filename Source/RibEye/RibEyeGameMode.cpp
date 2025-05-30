// Copyright Epic Games, Inc. All Rights Reserved.

#include "RibEyeGameMode.h"
#include "RibEyeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARibEyeGameMode::ARibEyeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
