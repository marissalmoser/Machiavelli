// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EventBase.h"
#include "EventAsset.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class MACHIAVELLI_API UEventAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
    // The actual event logic, chosen per asset
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite, Category = "Event")
	UEventBase* EventLogic;
};

