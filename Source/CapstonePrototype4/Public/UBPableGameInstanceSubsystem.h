// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UBPableGameInstanceSubsystem.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class CAPSTONEPROTOTYPE4_API UBPableGameInstanceSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	// Optionally override in Blueprint
	UFUNCTION(BlueprintImplementableEvent, Category = "Subsystem")
	void OnSubsystemInitialized();

};
