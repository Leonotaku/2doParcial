// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuilderPiezas.h"
#include "BuilderPiezaBronze.generated.h"

UCLASS()
class TETRISUSFX01_API ABuilderPiezaBronze : public AActor, public IBuilderPiezas
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABuilderPiezaBronze();

private:
	//The Lodging Actor
	UPROPERTY()
		class APiezaBasica* PiezaEspecial;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void ConstruirColores() override;
	virtual void ConstruirTipoPieza() override;
	virtual class APiezaBasica* GetPiezaBasica() override;

};