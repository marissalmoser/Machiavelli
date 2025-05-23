#include "UBPableGameInstanceSubsystem.h"
#include "Engine/World.h"
#include "Engine/Engine.h"

void UBPableGameInstanceSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);

    OnSubsystemInitialized();

    PostWorldInitHandle = FWorldDelegates::OnPostWorldInitialization.AddUObject(
        this, &UBPableGameInstanceSubsystem::HandlePostWorldInit
    );
}

void UBPableGameInstanceSubsystem::Deinitialize()
{
    // Unbind the delegate to prevent crashes on next PIE session
    if (PostWorldInitHandle.IsValid())
    {
        FWorldDelegates::OnPostWorldInitialization.Remove(PostWorldInitHandle);
        PostWorldInitHandle.Reset();
    }

    Super::Deinitialize();
}

void UBPableGameInstanceSubsystem::HandlePostWorldInit(UWorld* World, const UWorld::InitializationValues IVS)
{
    if (World && World->IsGameWorld())
    {
        OnWorldReady();
    }
}

AActor* UBPableGameInstanceSubsystem::SpawnActorInWorld(TSubclassOf<AActor> ActorClass, FVector Location, FRotator Rotation)
{
    if (!ActorClass) return nullptr;

    UWorld* World = GetWorld();
    if (!World) return nullptr;

    return World->SpawnActor<AActor>(ActorClass, Location, Rotation);
}