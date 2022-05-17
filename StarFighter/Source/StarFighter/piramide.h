// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "piramide.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class STARFIGHTER_API Upiramide : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	Upiramide();

	UPROPERTY(EditAnywhere)
		FVector Current_Velocity;

	UPROPERTY(EditAnywhere)
		float MaxVelocity;

	float TotalTime;
	float RandomStart;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


private:
	AActor* piramide;

	UPROPERTY(EditAnywhere)
		FVector posiciones;

	UPROPERTY(EditAnywhere)
		int velocidad = 300;

};
