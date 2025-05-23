#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UBPableGameInstanceSubsystem.generated.h"

UCLASS(Blueprintable)
class CAPSTONEPROTOTYPE4_API UBPableGameInstanceSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	virtual void Deinitialize() override;
	
	UFUNCTION(BlueprintCallable, Category = "Subsystem|Spawning")
	AActor* SpawnActorInWorld(TSubclassOf<AActor> ActorClass, FVector Location, FRotator Rotation);

	
protected:
	UFUNCTION(BlueprintImplementableEvent, Category = "Subsystem")
	void OnSubsystemInitialized();

	UFUNCTION(BlueprintImplementableEvent, Category = "Subsystem")
	void OnWorldReady();

private:
	void HandlePostWorldInit(UWorld* World, const UWorld::InitializationValues IVS);

	FDelegateHandle PostWorldInitHandle;
};