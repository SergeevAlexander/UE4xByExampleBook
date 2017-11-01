// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "AttackAtMidRange.generated.h"

/**
 * 
 */
UCLASS()
class UE4XBYEXAMPLEBOOK_API UAttackAtMidRange : public UBTTaskNode
{
	GENERATED_BODY()

	UAttackAtMidRange();

	/** starts this task, should return Succeeded, Failed or InProgress
	*  (use FinishLatentTask() when returning InProgress)
	* this function should be considered as const (don't modify state of object) if node is not instanced! */
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
};