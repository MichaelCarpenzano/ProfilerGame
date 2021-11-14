// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProfilerGameGameMode.h"
#include "ProfilerGameHUD.h"
#include "ProfilerGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProfilerGameGameMode::AProfilerGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AProfilerGameHUD::StaticClass();
}
