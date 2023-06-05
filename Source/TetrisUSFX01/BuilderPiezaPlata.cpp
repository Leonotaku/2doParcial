// Fill out your copyright notice in the Description page of Project Settings.


#include "BuilderPiezaPlata.h"
#include "PiezaBasica.h"

// Sets default values
ABuilderPiezaPlata::ABuilderPiezaPlata()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABuilderPiezaPlata::BeginPlay()
{
	Super::BeginPlay();

	//Spawn the Lodging Actors
	PiezaEspecial = GetWorld()->SpawnActor<APiezaBasica>(APiezaBasica::StaticClass());
	//Attach it to the Builder (this)
	PiezaEspecial->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);

}

// Called every frame
void ABuilderPiezaPlata::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABuilderPiezaPlata::ConstruirColores()
{
	PiezaEspecial->setColor(10);
}

void ABuilderPiezaPlata::ConstruirTipoPieza()
{

}

APiezaBasica* ABuilderPiezaPlata::GetPiezaBasica()
{
	//Returns the Lodging Actor of the Builder (this)
	return PiezaEspecial;
}