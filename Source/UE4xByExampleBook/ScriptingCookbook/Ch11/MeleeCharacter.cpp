// Fill out your copyright notice in the Description page of Project Settings.

#include "MeleeCharacter.h"
#include "ConstructorHelpers.h"

// Sets default values
AMeleeCharacter::AMeleeCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/**  setup AI Controller asset */
	auto BPAIControllerClass = static ConstructorHelpers::FClassFinder<AController>(TEXT("/Game/ScriptingCookbook/Ch11/BP_AIMeleeController"));
	if (BPAIControllerClass.Class != NULL)
	{
		AIControllerClass = BPAIControllerClass.Class;
	}
}

// Called when the game starts or when spawned
void AMeleeCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMeleeCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMeleeCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

