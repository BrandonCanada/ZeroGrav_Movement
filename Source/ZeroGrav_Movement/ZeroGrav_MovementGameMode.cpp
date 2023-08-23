// Copyright Epic Games, Inc. All Rights Reserved.

#include "ZeroGrav_MovementGameMode.h"
#include "ZeroGrav_MovementCharacter.h"
#include "UObject/ConstructorHelpers.h"

AZeroGrav_MovementGameMode::AZeroGrav_MovementGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
