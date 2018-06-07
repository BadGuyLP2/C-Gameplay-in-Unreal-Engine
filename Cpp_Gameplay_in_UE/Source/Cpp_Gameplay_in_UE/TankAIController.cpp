// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"
#include "Engine/World.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	APawn* AITank = GetPawn();
	if (AITank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AI now controls the %s tank."), *AITank->GetName());
	}
}

ATank* ATankAIController::GetPlayerTank() const
{
	APawn* PlayerTank = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (PlayerTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("The AI found our tank: %s"), *PlayerTank->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("The AI couldn't detect any player controlled tanks."));
	}
	return Cast<ATank>(PlayerTank);
}