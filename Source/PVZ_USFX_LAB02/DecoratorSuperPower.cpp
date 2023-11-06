// Fill out your copyright notice in the Description page of Project Settings.


#include "DecoratorSuperPower.h"
#include "PVZ_USFX_LAB02Projectile.h"

void ADecoratorSuperPower::BeginPlay()
{
	Super::BeginPlay();

    float DelayInSeconds = 5.0f;
    FTimerHandle TimerHandle;

    GetWorldTimerManager().SetTimer(TimerHandle, this, &ADecoratorSuperPower::superPower, DelayInSeconds, false);

}

void ADecoratorSuperPower::superPower()
{
	FVector FireDirection = FVector(0.0f, 1.0f, 0.0f);
	
	const FRotator FireRotation = FireDirection.Rotation();
	// Spawn projectile at an offset from this pawn
	const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// spawn the projectile
		APVZ_USFX_LAB02Projectile* projectile = nullptr;
		//projectile->DamageGenerates = 100;
		World->SpawnActor<APVZ_USFX_LAB02Projectile>(SpawnLocation, FireRotation);
	}
}
