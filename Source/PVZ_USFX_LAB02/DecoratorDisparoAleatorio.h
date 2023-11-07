// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlantDecorator.h"
#include "DecoratorDisparoAleatorio.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API ADecoratorDisparoAleatorio : public APlantDecorator
{
	GENERATED_BODY()
public:
	float tiempoEntreDisparo = 1.3f;
	float ControlTiempo1 = 0.0f;

	void Tick(float DeltaTime) override;
	void DisparoAleatorio();


	void SetPlant(APlant* InDecoratedPlant)
	{
		DecoratedPlant = InDecoratedPlant;
	}
};
