// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UI_DemoHUD.generated.h"

UCLASS()
class AUI_DemoHUD : public AHUD
{
	GENERATED_BODY()

public:
	AUI_DemoHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;
	virtual void BeginPlay() override; // new

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

	// new
	UPROPERTY(EditAnywhere, Category = "Health")
		TSubclassOf<class UUserWidget> HUDWidgetClass;

	// new
	UPROPERTY(EditAnywhere, Category = "Health")
		class UUserWidget* CurrentWidget;
};

