// Fill out your copyright notice in the Description page of Project Settings.


#include "DecoratorDisparoDoble.h"
#include "PVZ_USFX_LAB02Projectile.h"

void ADecoratorDisparoDoble::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	ControlTiempo += DeltaTime;
	if (ControlTiempo >= tiempoEntreDisparo)
	{
		DisparoDoble();
		ControlTiempo = 0.0f;
	}
}

void ADecoratorDisparoDoble::DisparoDoble()
{
	int32 Random = FMath::RandRange(0, 3);
	switch (Random)
	{
	case 0:
		DecoratedPlant->FireShot(FVector(0.0f, -1.0f, 0.0f));
		break;
	case 1:
		DecoratedPlant->FireShot(FVector(0.0f, 1.0f, 0.0f));
		break;
	default:
		break;
	}

}
