// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/NavMovementComponent.h"
#include "TankMovementComponent.generated.h"

class UTankTrack;
/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class CPP_GAMEPLAY_IN_UE_API UTankMovementComponent : public UNavMovementComponent
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Input")
	void IntendMoveForward(float Throw);

	UFUNCTION(BlueprintCallable, Category = "Input")
	void IntendTurnRight(float Throw);
	
private:
	UTankTrack* LeftTrack = nullptr;
	UTankTrack* RightTrack = nullptr;
	
public:
	UFUNCTION(BlueprintCallable, Category = "Setup")
	void Initialize(UTankTrack * LeftTrackToSet, UTankTrack * RightTrackToSet);

	virtual void RequestDirectMove(const FVector& MoveVelocity, bool bForceMaxSpeed) override;


};
