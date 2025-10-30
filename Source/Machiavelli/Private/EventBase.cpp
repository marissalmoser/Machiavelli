// Fill out your copyright notice in the Description page of Project Settings.


#include "EventBase.h"

bool UEventBase::ShouldExecute_Implementation(UObject* Context, int32 Quarters)
{
    // Default implementation false to not fire base class events
    return false;
}

void UEventBase::Execute_Implementation(UObject* Context)
{
    // Default implementation: does nothing
}

void UEventBase::Init_Implementation(UObject* Context)
{
    _context = Context;
}
