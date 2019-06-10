// Fill out your copyright notice in the Description page of Project Settings.


#include "TankTrack.h"
#include "Engine.h"
#include "BattleTank.h"


void UTankTrack::SetThrottle(float Throttle)
{
	auto ForceApplied = GetForwardVector() * Throttle * TrackMaxDrivingForce;
	auto ForceLocation = GetComponentLocation();
	auto TankRoot = Cast<UPrimitiveComponent>(GetOwner()->GetRootComponent());
	TankRoot->AddForceAtLocationLocal(ForceApplied, ForceLocation);
}



