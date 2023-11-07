// Fill out your copyright notice in the Description page of Project Settings.


#include "DecoratorDisparoRapido.h"

void ADecoratorDisparoRapido::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	ControlTiempo2 += DeltaTime;
	if (ControlTiempo2 >= tiempoEntreDispar)
	{
		DisparoRapido();
		ControlTiempo2 = 0.0f;
	}
}

void ADecoratorDisparoRapido::DisparoRapido()
{
	FVector Direccion = FVector(0.0f, 1.0f, 0.0f);
	DecoratedPlant->FireShot(Direccion);
}
