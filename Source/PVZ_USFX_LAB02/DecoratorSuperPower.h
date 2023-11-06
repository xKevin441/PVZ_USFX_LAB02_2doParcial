// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlantDecorator.h"
#include "DecoratorSuperPower.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API ADecoratorSuperPower : public APlantDecorator
{
	GENERATED_BODY()
	
public:
	void BeginPlay() override;
	void superPower();

	void SetPlant(APlant* InDecoratedPlant)
	{
		DecoratedPlant = InDecoratedPlant;
	}
};
