// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlantDecorator.h"
#include "DecoratorDisparoRapido.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API ADecoratorDisparoRapido : public APlantDecorator
{
	GENERATED_BODY()
public:
	float tiempoEntreDispar = 0.9f;
	float ControlTiempo2 = 0.0f;

	void Tick(float DeltaTime) override;
	void DisparoRapido();


	void SetPlant(APlant* InDecoratedPlant)
	{
		DecoratedPlant = InDecoratedPlant;
	}
};
