// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"
#include "Engine/World.h"
#include "Tank.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
}

void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GetPlayerTank())
	{
		ATank* AITank = Cast<ATank>(GetPawn());
		AITank->AimAt(GetPlayerTank()->GetTargetLocation());
	}

	GetControlledTank()->Fire();
}

ATank* ATankAIController::GetPlayerTank() const
{
	APawn* PlayerTank = GetWorld()->GetFirstPlayerController()->GetPawn();
	return Cast<ATank>(PlayerTank);
}

ATank * ATankAIController::GetControlledTank() const
{
	APawn* AITank = GetPawn();
	return Cast<ATank>(AITank);
}
