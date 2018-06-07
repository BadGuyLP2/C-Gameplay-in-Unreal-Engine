// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"

void ATankAIController::BeginPlay()
{

	Super::BeginPlay();

	APawn* AITank = GetPawn();
	if (AITank)
	{
	UE_LOG(LogTemp, Warning, TEXT("AI now controls the %s tank."), *AITank->GetName());
	}
}


