// Copyright Epic Games, Inc. All Rights Reserved.

#include "WithBasic_MDGameMode.h"
#include "WithBasic_MDCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWithBasic_MDGameMode::AWithBasic_MDGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
