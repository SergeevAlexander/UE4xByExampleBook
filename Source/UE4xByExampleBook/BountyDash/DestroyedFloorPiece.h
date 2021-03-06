// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DestroyedFloorPiece.generated.h"

UCLASS()
class UE4XBYEXAMPLEBOOK_API ADestroyedFloorPiece : public AActor
{
	GENERATED_BODY()
	
public:	
	
	/** Represents  Destructible Mesh */
	// UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AAA", meta = (AllowPrivateAccess = "true"))
	// class UDestructibleComponent* Destructable;

protected:

	// Sets default values for this actor's properties
	ADestroyedFloorPiece();

	// Called when the game starts or when spawned
	void BeginPlay() override;

	// Called every frame
	void Tick(float DeltaTime) override;
	
};
