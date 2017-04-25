// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Faunar.h"
#include "FaunarGameMode.h"
#include "FaunarPawn.h"

AFaunarGameMode::AFaunarGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AFaunarPawn::StaticClass();
}

