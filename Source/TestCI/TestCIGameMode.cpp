// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestCIGameMode.h"
#include "TestCICharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestCIGameMode::ATestCIGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
