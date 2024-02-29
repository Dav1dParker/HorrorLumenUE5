// Copyright Epic Games, Inc. All Rights Reserved.

#include "HorrorLumenGameMode.h"
#include "HorrorLumenCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHorrorLumenGameMode::AHorrorLumenGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
