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
	void Tick(float DeltaTime) override;
	float TiempoDisparo = 0.3;
	void DisparoRapido();


	void SetPlant(APlant* InDecoratedPlant)
	{
		DecoratedPlant = InDecoratedPlant;
	}
};
