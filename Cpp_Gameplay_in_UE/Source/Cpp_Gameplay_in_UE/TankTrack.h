// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankTrack.generated.h"

UCLASS(meta = (BlueprintSpawnableComponent))
class CPP_GAMEPLAY_IN_UE_API UTankTrack : public UStaticMeshComponent
{
	GENERATED_BODY()
	
private:
	UTankTrack();


public:
	UPROPERTY(EditDefaultsOnly)
	float TrackMaxDrivingForce = 400000.f;

	UFUNCTION(BlueprintCallable, Category = "Input")
	void SetThrottle(float Throttle);
};
