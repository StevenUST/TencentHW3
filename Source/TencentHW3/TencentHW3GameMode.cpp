// Copyright Epic Games, Inc. All Rights Reserved.

#include "TencentHW3GameMode.h"
#include "TencentHW3Character.h"
#include "UObject/ConstructorHelpers.h"

ATencentHW3GameMode::ATencentHW3GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
