// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"		// must be the last include


class ATank;

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()

private:
		virtual void BeginPlay() override;

		virtual void Tick(float DeltaSeconds) override;

		// How close can the AI tank get
		float AcceptanceRadius = 3000;
};
