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
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Event")
    bool ShouldExecute(UObject* Context, int32 Quarters);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Event")
    void Execute(UObject* Context);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Event")
    void Init(UObject* Context);

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Event")
    UObject* _context;

};
