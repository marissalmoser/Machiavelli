// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EventBase.generated.h"

/**
 * 
 */
UCLASS(Abstract, Blueprintable, EditInLineNew)
class MACHIAVELLI_API UEventBase : public UObject
{
	GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event")
    FText EventTitle;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event")
    FText EventDescription;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Event")
    bool ShouldTrigger(UObject* Context);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Event")
    void Execute(UObject* Context);

};
