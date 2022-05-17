// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Cubo.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class STARFIGHTER_API UCubo : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCubo();

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

	AActor * cubo;//puntero para hacer referencia a este cubo 

	UPROPERTY(EditAnywhere)
	FVector current_location;//vector para dar la ubicacion en 3 dimensiones

	UPROPERTY(EditAnywhere)
		float vel = 300.0f ;
		
};
