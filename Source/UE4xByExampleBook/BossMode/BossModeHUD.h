// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "BossModeHUD.generated.h"

/**
 * 
 */
UCLASS()
class UE4XBYEXAMPLEBOOK_API ABossModeHUD : public AHUD
{
	GENERATED_BODY()
	
protected:
	
	/** Calls each frame to Draw the HUD  */
	void DrawHUD() override;

private:
	
	/** Crosshair Texture  */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AAA", meta = (AllowPrivateAccess = "true"))
	class UTexture2D* CrosshairTexture;
	
};
