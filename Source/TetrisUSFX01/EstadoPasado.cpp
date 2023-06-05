// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoPasado.h"
#include "Escenario.h"

// Sets default values
AEstadoPasado::AEstadoPasado()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	materialEscenarioPasado = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Blueprints/Pasado.Pasado'"));
	//BlockMesh->SetMaterial(0, materialEsfera);

}

// Called when the game starts or when spawned
void AEstadoPasado::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoPasado::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstadoPasado::EstablecerEscenario(AEscenario* _Escenario)
{
    //Escenario->Destroy();
    //FTransform SpawnLocation;
    //UPROPERTY()
        //AEscenario* B;
    GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, TEXT("Estado escenario pasado apareciendo"));
    //Escenario = GetWorld()->SpawnActor<AEscenario>(AEscenario::StaticClass(), SpawnLocation);
    //AEscenario* B = GetWorld()->SpawnActor<AEscenarioPiedras>(this->GetActorLocation(), Rotation);
    _Escenario->MeshEscenario->SetMaterial(0, materialEscenarioPasado);

    //B->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
    //Escenario->SetActorRelativeLocation(FVector(260.0, -25.0, 100.0));
    //Escenario->SetActorRelativeRotation(FRotator(0.0, 90.0, 90.0));*/

    Escenario->cambiarEstado(Escenario->getEstadoPresente());

}

void AEstadoPasado::SetEscenario(AEscenario* _Escenario)
{
    Escenario = _Escenario;
}