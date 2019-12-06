// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "UI_DemoGameMode.h"
#include "UI_DemoHUD.h"
#include "UI_DemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUI_DemoGameMode::AUI_DemoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUI_DemoHUD::StaticClass();
}
