// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoPresente.h"
#include "Escenario.h"

// Sets default values
AEstadoPresente::AEstadoPresente()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	materialEscenarioPasado = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Blueprints/presente.presente'"));

}

// Called when the game starts or when spawned
void AEstadoPresente::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoPresente::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstadoPresente::EstablecerEscenario(class AEscenario* _Escenario)
{

	FTransform SpawnLocation;

	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, TEXT("Estado Presente"));


	_Escenario->MeshEscenario->SetMaterial(0, materialEscenarioPasado);


	Escenario->cambiarEstado(Escenario->getEstadoFuturo());
}

void AEstadoPresente::SetEscenario(AEscenario* _Escenario)
{
	Escenario = _Escenario;
}
