// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TankAimingComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CPP_GAMEPLAY_IN_UE_API UTankAimingComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UStaticMeshComponent * Barrel = nullptr;

	void MoveBarrel(FVector AimDirection);

public:	
	// Sets default values for this component's properties
	UTankAimingComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void AimAt(FVector WorldSpaceAim, float LaunchSpeed);

	void SetBarrelRefernece(UStaticMeshComponent* BarrelToSet);
	
};
