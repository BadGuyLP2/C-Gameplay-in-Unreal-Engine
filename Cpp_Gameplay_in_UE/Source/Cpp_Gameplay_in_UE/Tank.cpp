// Fill out your copyright notice in the Description page of Project Settings.

#include "Tank.h"
//#include "GameFramework/Actor.h"

ATank::ATank()
{
	PrimaryActorTick.bCanEverTick = false;
}

float ATank::TakeDamage(float DamageAmount, FDamageEvent const & DamageEvent, AController * EventInstigator, AActor * DamageCauser)
{	
	int32 DamagePoints = FPlatformMath::RoundToInt(DamageAmount);
	auto DamageToApply = FMath::Clamp(DamagePoints, 0, CurrentHealth);
	CurrentHealth -= DamageToApply;
	return DamageToApply;
}

float ATank::GetHealth() const
{
	return (float)CurrentHealth / (float)StartingHealth;
}