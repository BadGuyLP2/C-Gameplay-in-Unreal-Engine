// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankTurret.generated.h"

UCLASS(meta = (BlueprintSpawnableComponent))
class CPP_GAMEPLAY_IN_UE_API UTankTurret : public UStaticMeshComponent
{
	GENERATED_BODY()

private:
	UTankTurret();

	UPROPERTY(EditAnywhere, Category = "Setup")
	float MaxDegreesPerSecond = 50;
	
public:
	void Rotate(float RelativeSpeed);
 };
