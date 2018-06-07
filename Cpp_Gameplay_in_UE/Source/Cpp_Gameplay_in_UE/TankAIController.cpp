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

void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GetPlayerTank())
	{
		ATank* AITank = Cast<ATank>(GetPawn());
		AITank->AimAt(GetPlayerTank()->GetTargetLocation());
	}
}

ATank* ATankAIController::GetPlayerTank() const
{
	APawn* PlayerTank = GetWorld()->GetFirstPlayerController()->GetPawn();
	return Cast<ATank>(PlayerTank);
}