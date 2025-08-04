// Copyright Epic Games, Inc. All Rights Reserved.

#include "BucketKnightGameMode.h"
#include "BucketKnightCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABucketKnightGameMode::ABucketKnightGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_BucketKnight"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
