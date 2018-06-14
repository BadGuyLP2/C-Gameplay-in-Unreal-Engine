// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

UCLASS(meta = (BlueprintSpawnableComponent), HideCategories = ("Colission"))
class CPP_GAMEPLAY_IN_UE_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()

private:
	UTankBarrel();

	UPROPERTY(EditAnywhere, Category = "Setup")
	float MaxDegreesPerSecond = 50;

	UPROPERTY(EditAnywhere, Category = "Setup")
	float MaxElevationDegrees = 40;

	UPROPERTY(EditAnywhere, Category = "Setup")
	float MinElevationDegrees = 0;
	

public:
	void Elevate(float RelativeSpeed);
};
