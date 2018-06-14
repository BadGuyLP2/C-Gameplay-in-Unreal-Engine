// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class CPP_GAMEPLAY_IN_UE_API ATankAIController : public AAIController
{
	GENERATED_BODY()

private:
	ATankAIController();
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	float AcceptanceRadius = 5000;
};
