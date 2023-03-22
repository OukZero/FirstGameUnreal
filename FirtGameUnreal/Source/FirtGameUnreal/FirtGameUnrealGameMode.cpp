// Copyright Epic Games, Inc. All Rights Reserved.

#include "FirtGameUnrealGameMode.h"
#include "FirtGameUnrealCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFirtGameUnrealGameMode::AFirtGameUnrealGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
