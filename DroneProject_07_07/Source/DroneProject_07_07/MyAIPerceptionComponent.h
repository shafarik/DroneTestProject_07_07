// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Perception/AIPerceptionComponent.h"
#include "MyAIPerceptionComponent.generated.h"

/**
 * 
 */
UCLASS()
class DRONEPROJECT_07_07_API UMyAIPerceptionComponent : public UAIPerceptionComponent
{
	GENERATED_BODY()
public:
	AActor* GetPlayerCharacter();
	FVector GetPlayerLocation();
};
