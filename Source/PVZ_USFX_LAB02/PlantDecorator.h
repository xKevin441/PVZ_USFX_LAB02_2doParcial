// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Plant.h"
#include "PlantDecorator.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API APlantDecorator : public APlant
{
	GENERATED_BODY()
protected:
	// Referencia a la planta base que estamos decorando
	APlant* DecoratedPlant = nullptr;



public:
    void SetPlant(APlant* InDecoratedPlant)
    {
        DecoratedPlant = InDecoratedPlant;
    }
};
