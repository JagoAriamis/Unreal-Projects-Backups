// Copyright Epic Games, Inc. All Rights Reserved.

#include "WeaponTypesGameMode.h"
#include "WeaponTypesCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWeaponTypesGameMode::AWeaponTypesGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
