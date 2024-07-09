// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class DRONEPROJECT_07_07_API UMyUserWidget : public UUserWidget
{
	GENERATED_BODY()
			public:
    UFUNCTION(BlueprintCallable, Category = "UI")
    float GetHealthPersent();
};
