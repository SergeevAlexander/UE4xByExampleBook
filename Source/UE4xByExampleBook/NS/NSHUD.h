// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "NSHUD.generated.h"

/**
 * 
 */
UCLASS()
class UE4XBYEXAMPLEBOOK_API ANSHUD : public AHUD
{
	GENERATED_BODY()
	
protected:

	/** Calls each frame to Draw the HUD  */
	void DrawHUD() override;

private:

	/** Crosshair Texture Asset */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AAA", meta = (AllowPrivateAccess = "true"))
	class UTexture2D* CrosshairTexture;
	
	
};
