// Copyright Epic Games, Inc. All Rights Reserved.

#include "TF2GameMode.h"
#include "TF2Character.h"
#include "UObject/ConstructorHelpers.h"

ATF2GameMode::ATF2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
