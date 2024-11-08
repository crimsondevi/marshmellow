// Copyright Epic Games, Inc. All Rights Reserved.

#include "MarshmellowGameMode.h"
#include "MarshmellowCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMarshmellowGameMode::AMarshmellowGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
