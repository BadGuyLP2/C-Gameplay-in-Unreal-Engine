// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Projectile.generated.h"

UCLASS()
class CPP_GAMEPLAY_IN_UE_API AProjectile : public AActor
{
	GENERATED_BODY()
	
private:
	AProjectile();

	UProjectileMovementComponent * ProjectileMovement = nullptr;


public:
	void LaunchProjectile(float Speed);
};
