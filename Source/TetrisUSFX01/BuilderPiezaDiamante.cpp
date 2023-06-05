// Fill out your copyright notice in the Description page of Project Settings.


#include "BuilderPiezaDiamante.h"
#include "PiezaBasica.h"

// Sets default values
ABuilderPiezaDiamante::ABuilderPiezaDiamante()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABuilderPiezaDiamante::BeginPlay()
{
	Super::BeginPlay();

	//Spawn the Lodging Actors
	PiezaEspecial = GetWorld()->SpawnActor<APiezaBasica>(APiezaBasica::StaticClass());
	//Attach it to the Builder (this)
	PiezaEspecial->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);

}

// Called every frame
void ABuilderPiezaDiamante::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABuilderPiezaDiamante::ConstruirColores()
{
	PiezaEspecial->setColor(11);
}

void ABuilderPiezaDiamante::ConstruirTipoPieza()
{

}

APiezaBasica* ABuilderPiezaDiamante::GetPiezaBasica()
{
	//Returns the Lodging Actor of the Builder (this)
	return PiezaEspecial;
}