// Fill out your copyright notice in the Description page of Project Settings.


#include "UBPableGameInstanceSubsystem.h"

void UBPableGameInstanceSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
    OnSubsystemInitialized(); // Calls Blueprint implementation, if any
}