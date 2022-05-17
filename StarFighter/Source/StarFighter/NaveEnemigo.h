// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/CapsuleComponent.h"
#include "NaveEnemigo.generated.h"

//#include "Components/CapsuleComponent.h"
//#include "Components/StaticMeshComponent.h"

UCLASS()
class STARFIGHTER_API ANaveEnemigo : public APawn
{
	GENERATED_BODY()

		//UPROPERTY(EditAnywhere)
		//UStaticMeshComponent* EnemigoMesh;

private:
	float velocidadEnemigo;
	float ubicacionEnemigoX;
	float ubicaccionEnemigoY;
	float vidaEnemigo;

public:
	// Sets default values for this pawn's properties
	ANaveEnemigo();

	UPROPERTY(EditAnywhere)

		UStaticMeshComponent* EnemigoMesh;

	UPROPERTY(EditAnywhere)
		UCapsuleComponent* CapsuleCollision;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	FORCEINLINE class UStaticMeshComponent* GetNaveMesh() const { return EnemigoMesh; }
	FORCEINLINE class UCapsuleComponent* GetCapsuleCollision() const { return CapsuleCollision; }

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//virtual void UpdateMovement(float DeltaTime);

	//UPROPERTY(EditAnywhere)
		//FVector Current_Velocity;

	//FVector Current_Location;
	//float TotalTime;
	//float RandomStart;
	float MoveSpeed;
};
