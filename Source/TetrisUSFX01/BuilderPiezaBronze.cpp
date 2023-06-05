// Fill out your copyright notice in the Description page of Project Settings.


#include "BuilderPiezaBronze.h"
#include "PiezaBasica.h"

// Sets default values
ABuilderPiezaBronze::ABuilderPiezaBronze()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABuilderPiezaBronze::BeginPlay()
{
	Super::BeginPlay();

	//Spawn the Lodging Actors
	PiezaEspecial = GetWorld()->SpawnActor<APiezaBasica>(APiezaBasica::StaticClass());
	//Attach it to the Builder (this)
	PiezaEspecial->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);

}

// Called every frame
void ABuilderPiezaBronze::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABuilderPiezaBronze::ConstruirColores()
{
	PiezaEspecial->setColor(9);
}

void ABuilderPiezaBronze::ConstruirTipoPieza()
{

}

APiezaBasica* ABuilderPiezaBronze::GetPiezaBasica()
{
	//Returns the Lodging Actor of the Builder (this)
	return PiezaEspecial;
}