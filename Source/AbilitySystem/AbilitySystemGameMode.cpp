// Copyright Epic Games, Inc. All Rights Reserved.

#include "AbilitySystemGameMode.h"
#include "AbilitySystemCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAbilitySystemGameMode::AAbilitySystemGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
