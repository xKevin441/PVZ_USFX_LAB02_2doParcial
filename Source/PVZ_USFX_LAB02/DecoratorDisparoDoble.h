// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlantDecorator.h"
#include "DecoratorDisparoDoble.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API ADecoratorDisparoDoble : public APlantDecorator
{
	GENERATED_BODY()
public:
	void Tick(float DeltaTime) override;
	void DisparoDoble();
	

	void SetPlant(APlant* InDecoratedPlant)
	{
		DecoratedPlant = InDecoratedPlant;
	}
};
