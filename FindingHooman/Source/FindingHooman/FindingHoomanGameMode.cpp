// Copyright Epic Games, Inc. All Rights Reserved.

#include "FindingHoomanGameMode.h"
#include "FindingHoomanCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFindingHoomanGameMode::AFindingHoomanGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
