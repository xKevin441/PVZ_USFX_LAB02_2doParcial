// Fill out your copyright notice in the Description page of Project Settings.


#include "DecoratorDisparoAleatorio.h"

void ADecoratorDisparoAleatorio::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	ControlTiempo += DeltaTime;
	if (ControlTiempo >= tiempoEntreDisparo)
	{
		DisparoAleatorio();
		ControlTiempo = 0.0f;
	}
}

void ADecoratorDisparoAleatorio::DisparoAleatorio()
{
	int32 RandomX = FMath::RandRange(-1, 1);
	int32 RandomY = FMath::RandRange(-1, 1);
	FVector direccion = FVector(RandomX, RandomY, 0.0f);
	DecoratedPlant->FireShot(direccion);

}
