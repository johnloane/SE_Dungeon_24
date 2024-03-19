// Copyright Epic Games, Inc. All Rights Reserved.

#include "SE_DungeonGameMode.h"
#include "SE_DungeonCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASE_DungeonGameMode::ASE_DungeonGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
