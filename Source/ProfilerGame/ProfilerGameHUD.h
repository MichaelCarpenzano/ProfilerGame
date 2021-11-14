// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ProfilerGameHUD.generated.h"

UCLASS()
class AProfilerGameHUD : public AHUD
{
	GENERATED_BODY()

public:
	AProfilerGameHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

