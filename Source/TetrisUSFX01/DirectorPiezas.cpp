// Fill out your copyright notice in the Description page of Project Settings.


#include "DirectorPiezas.h"

// Sets default values
ADirectorPiezas::ADirectorPiezas()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADirectorPiezas::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ADirectorPiezas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADirectorPiezas::SetBuilderPiezaBasica(AActor* Constructor)
{
	//Cast the passed Actor and set the Builder
	BuilderPiezas = Cast<IBuilderPiezas>(Constructor);
	if (!BuilderPiezas) //Log Error if cast fails
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("Invalid Cast! See Output log for more details"));
		UE_LOG(LogTemp, Error, TEXT("SetLodgingBuilder(): The Actor is not a LodgingBuilder! Are you sure that the Actor implements that interface ? "));
	}
}

APiezaBasica* ADirectorPiezas::GetPiezaBasica()
{
	if (BuilderPiezas)
	{
		//Returns the Lodging of the Builder
		return BuilderPiezas->GetPiezaBasica();
	}
	//Log if the Builder is NULL
	UE_LOG(LogTemp, Error, TEXT("GetLodging(): Return nullptr"));
	return nullptr;
}

void ADirectorPiezas::ConstruirPiezaBasica()
{
	//Log if the Builder is NULL
	if (!BuilderPiezas) {
		UE_LOG(LogTemp, Error, TEXT("ConstructLodging(): LodgingBuilder is NULL, make sure it's initialized."));
		return;
	}
	//Creates the buildings
	BuilderPiezas->ConstruirColores();
	BuilderPiezas->ConstruirTipoPieza();

}

