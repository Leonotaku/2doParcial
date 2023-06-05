// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoFuturo.h"
#include "Escenario.h"

// Sets default values
AEstadoFuturo::AEstadoFuturo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	materialEscenarioPasado = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Blueprints/futuro.futuro'"));
}

// Called when the game starts or when spawned
void AEstadoFuturo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoFuturo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstadoFuturo::EstablecerEscenario(AEscenario* _Escenario)
{
    //Escenario->Destroy();
    FTransform SpawnLocation;
    //UPROPERTY()
        //AEscenario* B;
    GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, TEXT("Estado Futuro"));
    //Escenario = GetWorld()->SpawnActor<AEscenario>(AEscenario::StaticClass(), SpawnLocation);
    //AEscenario* B = GetWorld()->SpawnActor<AEscenarioPiedras>(this->GetActorLocation(), Rotation);
    //B->MeshEscenario->SetMaterial(0, Materiales[0]);
    _Escenario->MeshEscenario->SetMaterial(0, materialEscenarioPasado);

    //B->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
    //Escenario->SetActorRelativeLocation(FVector(260.0, -25.0, 100.0));
    //Escenario->SetActorRelativeRotation(FRotator(0.0, 90.0, 90.0));

    Escenario->cambiarEstado(Escenario->getEstadoPasado());
}

void AEstadoFuturo::SetEscenario(AEscenario* _Escenario)
{
    Escenario = _Escenario;
}