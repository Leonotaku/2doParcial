// Fill out your copyright notice in the Description page of Project Settings.


#include "Escenario.h"
#include "EstadoEscenario.h"
#include "EstadoPasado.h"
#include "EstadoPresente.h"
#include "EstadoFuturo.h"

// Sets default values
AEscenario::AEscenario()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    MeshEscenario = CreateDefaultSubobject<UStaticMeshComponent>("Escenario Mesh");
    RootComponent = MeshEscenario;

    static ConstructorHelpers::FObjectFinder<UStaticMesh> Escenarios(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Plane.Shape_Plane'"));
    //StaticMesh'/Game/Mesh/block.block'
    if (Escenarios.Succeeded())
    {
        MeshEscenario->SetStaticMesh(Escenarios.Object);
        MeshEscenario->SetRelativeLocation(FVector(1000.0f, 1000.0f, 1000.0f));
        MeshEscenario->SetWorldScale3D(FVector(5.0f, 3.0f, 2.5f));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("mesh not found"));
    }

    materialEscenarioPasado = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Blueprints/First.First'"));
}

// Called when the game starts or when spawned
void AEscenario::BeginPlay()
{
    Super::BeginPlay();

}

// Called every frame
void AEscenario::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

AEscenario* AEscenario::iniciar()
{
    EstadoPasado = GetWorld()->SpawnActor<AEstadoPasado>(AEstadoPasado::StaticClass());
    EstadoPasado->SetEscenario(this);

    //Spanw the No Coin State and set this Slot Machine to it
    EstadoPresente = GetWorld()->SpawnActor<AEstadoPresente>(AEstadoPresente::StaticClass());
    EstadoPresente->SetEscenario(this);

    //Spanw the Coin Inserted State and set this Slot Machine to it
    EstadoFuturo = GetWorld()->SpawnActor<AEstadoFuturo>(AEstadoFuturo::StaticClass());
    EstadoFuturo->SetEscenario(this);

    //Estado = EstadoPasado;

    FTransform SpawnLocation;
    //UPROPERTY()
        //AEscenario* B;
    GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, TEXT("Estado escenario pasado apareciendo"));
    AEscenario* Escenario = GetWorld()->SpawnActor<AEscenario>(AEscenario::StaticClass(), SpawnLocation);
    //AEscenario* B = GetWorld()->SpawnActor<AEscenarioPiedras>(this->GetActorLocation(), Rotation);
    Escenario->MeshEscenario->SetMaterial(0, materialEscenarioPasado);

    //B->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
    Escenario->SetActorRelativeLocation(FVector(260.0, -25.0, 100.0));
    Escenario->SetActorRelativeRotation(FRotator(0.0, 90.0, 90.0));

    Estado = EstadoPasado;
    return Escenario;
}

void AEscenario::cambiarEscenario(AEscenario* _Escenario)
{
    GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, TEXT("Estableciendo escenario"));
    Estado->EstablecerEscenario(_Escenario);
}

void AEscenario::cambiarEstado(IEstadoEscenario* _Estado)
{
    Estado = _Estado;
}

IEstadoEscenario* AEscenario::getEstadoPasado()
{
    return EstadoPasado;
}

IEstadoEscenario* AEscenario::getEstadoPresente()
{
    return EstadoPresente;
}

IEstadoEscenario* AEscenario::getEstadoFuturo()
{
    return EstadoFuturo;
}

IEstadoEscenario* AEscenario::getEstado()
{
    return Estado;
}

