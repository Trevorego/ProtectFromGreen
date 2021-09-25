// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProtectFromGreenGameMode.h"
#include "ProtectFromGreenCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProtectFromGreenGameMode::AProtectFromGreenGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
