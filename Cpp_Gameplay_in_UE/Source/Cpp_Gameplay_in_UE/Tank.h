// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TankAimingComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Tank.generated.h"

class UTankBarrel;
class UTankTurret;
class AProjectile;
class UTankMovementComponent;

UCLASS()
class CPP_GAMEPLAY_IN_UE_API ATank : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATank();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UTankAimingComponent* TankAimingComponent = nullptr;

	UPROPERTY(BlueprintReadOnly)
	UTankMovementComponent* TankMovementComponent = nullptr;



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void AimAt(FVector HitLocation);

	UFUNCTION(BlueprintCallable, Category = "Firing")
	void Fire();
	
	UFUNCTION(BlueprintCallable, Category = "Setup")
	void SetBarrelReference(UTankBarrel * BarrelToSet);

	UFUNCTION(BlueprintCallable, Category = "Setup")
	void SetTurretReference(UTankTurret * TurretToSet);

	UPROPERTY(EditAnywhere, Category = "Firing")
	float LaunchSpeed = 15000;

	UPROPERTY(EditAnywhere, Category = "Setup")
	TSubclassOf<AProjectile> ProjectileBlueprint;

private:
	UTankBarrel* Barrel = nullptr;

	float Reload = 3.f;

	double LastFireTime = 0;
};
