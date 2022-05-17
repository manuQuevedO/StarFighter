// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigo.h"
#include "NaveEnemigo_Aereo.generated.h"

/**
 *
 */
UCLASS()
class  ANaveEnemigo_Aereo : public ANaveEnemigo
{
	GENERATED_BODY()

public:
	ANaveEnemigo_Aereo();
	// Called every frame

	virtual void Tick(float DeltaTime) override;

	//float RandomStart;

};