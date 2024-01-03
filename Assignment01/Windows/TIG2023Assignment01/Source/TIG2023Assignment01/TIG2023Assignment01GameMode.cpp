// Copyright Epic Games, Inc. All Rights Reserved.

#include "TIG2023Assignment01GameMode.h"
#include "TIG2023Assignment01Character.h"
#include "UObject/ConstructorHelpers.h"

ATIG2023Assignment01GameMode::ATIG2023Assignment01GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
