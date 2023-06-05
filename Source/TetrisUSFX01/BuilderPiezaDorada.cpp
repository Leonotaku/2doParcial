// Fill out your copyright notice in the Description page of Project Settings.


#include "BuilderPiezaDorada.h"
#include "PiezaBasica.h"

// Sets default values
ABuilderPiezaDorada::ABuilderPiezaDorada()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABuilderPiezaDorada::BeginPlay()
{
	Super::BeginPlay();

	//Spawn the Lodging Actors
	PiezaEspecial = GetWorld()->SpawnActor<APiezaBasica>(APiezaBasica::StaticClass());
	//Attach it to the Builder (this)
	PiezaEspecial->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	
}

// Called every frame
void ABuilderPiezaDorada::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABuilderPiezaDorada::ConstruirColores()
{
	PiezaEspecial->setColor(8);
}

void ABuilderPiezaDorada::ConstruirTipoPieza()
{

}

APiezaBasica* ABuilderPiezaDorada::GetPiezaBasica()
{
	//Returns the Lodging Actor of the Builder (this)
	return PiezaEspecial;
}