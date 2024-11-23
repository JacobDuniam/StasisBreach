// Copyright Epic Games, Inc. All Rights Reserved.

#include "StasisBreachGameMode.h"
#include "StasisBreachCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStasisBreachGameMode::AStasisBreachGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
