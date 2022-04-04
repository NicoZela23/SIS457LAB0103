// Copyright Epic Games, Inc. All Rights Reserved.

#include "PrincipalGameMode.h"
#include "PrincipalCharacter.h"
#include "UObject/ConstructorHelpers.h"

APrincipalGameMode::APrincipalGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
