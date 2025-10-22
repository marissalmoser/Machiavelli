// Fill out your copyright notice in the Description page of Project Settings.


#include "EventBase.h"

bool UEventBase::ShouldTrigger_Implementation(UObject* Context)
{
    // Default implementation: always true
    return true;
}

void UEventBase::Execute_Implementation(UObject* Context)
{
    // Default implementation: does nothing
}
