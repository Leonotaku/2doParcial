// Fill out your copyright notice in the Description page of Project Settings.


#include "PiezaBasica.h"
#include "Components/SceneComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include <vector>

// Sets default values
APiezaBasica::APiezaBasica()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    SceneComponent = CreateDefaultSubobject<USceneComponent>("Pieces Scene");
    RootComponent = SceneComponent;

    struct FConstructorStatics
    {
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_0;
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_1;
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_2;
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_3;
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_4;
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_5;
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_6;
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_004;
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_006;
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_007;
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_008;
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_009;
        FConstructorStatics()
            : Color_0(TEXT("Material'/Game/Mesh/Material_0.Material_0'"))
            , Color_1(TEXT("Material'/Game/Mesh/Material_1.Material_1'"))
            , Color_2(TEXT("Material'/Game/Mesh/Material_2.Material_2'"))
            , Color_3(TEXT("Material'/Game/Mesh/Material_3.Material_3'"))
            , Color_4(TEXT("Material'/Game/Mesh/Material_4.Material_4'"))
            , Color_5(TEXT("Material'/Game/Mesh/Material_5.Material_5'"))
            , Color_6(TEXT("Material'/Game/Mesh/Material_6.Material_6'"))
            , Color_004(TEXT("Material'/Game/Mesh/Material_004.Material_004'"))
            , Color_006(TEXT("Material'/Game/Mesh/Material_006.Material_006'"))
            , Color_007(TEXT("Material'/Game/Mesh/Material_007.Material_007'"))
            , Color_008(TEXT("Material'/Game/Mesh/Material_008.Material_008'"))
            , Color_009(TEXT("Material'/Game/Mesh/Material_009.Material_009'"))
        {
        }
    };
    static FConstructorStatics ConstructorStatics;
    Colors.Add(ConstructorStatics.Color_0.Get());
    Colors.Add(ConstructorStatics.Color_1.Get());
    Colors.Add(ConstructorStatics.Color_2.Get());
    Colors.Add(ConstructorStatics.Color_3.Get());
    Colors.Add(ConstructorStatics.Color_4.Get());
    Colors.Add(ConstructorStatics.Color_5.Get());
    Colors.Add(ConstructorStatics.Color_6.Get());
    Colors.Add(ConstructorStatics.Color_004.Get());
    Colors.Add(ConstructorStatics.Color_006.Get());
    Colors.Add(ConstructorStatics.Color_007.Get());
    Colors.Add(ConstructorStatics.Color_008.Get());
    Colors.Add(ConstructorStatics.Color_009.Get());

}

// Called when the game starts or when spawned
void APiezaBasica::BeginPlay()
{
    Super::BeginPlay();
    //SpawnBlocks();
}

// Called every frame
void APiezaBasica::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

void APiezaBasica::SpawnBlocks()
{
    //std::vector<std::vector<std::pair<float, float>>> Shapes = tipoPieza;
    Azar = FMath::RandRange(0, tipoPieza.size() - 1);
    UE_LOG(LogTemp, Warning, TEXT("Azar=%d"), Azar);
    const std::vector<std::pair<float, float>>& YZs = tipoPieza[Azar];
    for (auto&& YZ : YZs)
    {
        int color = Azar;

        if (getTipoColor() == 8) {
            color = 8;
        }
        if (getTipoColor() == 9) {
            color = 9;
        }
        if (getTipoColor() == 10) {
            color = 10;
        }
        if (getTipoColor() == 11) {
            color = 11;
        }

        //int color = FMath::RandRange(0, Shapes.size() - 1);
        FRotator Rotation(0.0, 0.0, 0.0);
        ABlock* B = GetWorld()->SpawnActor<ABlock>(this->GetActorLocation(), Rotation);
        B->Mesh->SetMaterial(1, Colors[color]);
        Blocks.Add(B);
        B->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
        B->SetActorRelativeLocation(FVector(0.0, YZ.first, YZ.second));
    }
}


void APiezaBasica::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    UE_LOG(LogTemp, Warning, TEXT("Piezas eliminadas"));
}


void APiezaBasica::DrawDebugLines()
{
    for (ABlock* B : Blocks)
    {
        FVector V1 = B->GetActorLocation();
        FVector V2(V1.X, V1.Y, 5.0f);
        DrawDebugLine(GetWorld(), V1, V2, FColor::Green, false, 1, 0, 1);
    }
}

void APiezaBasica::TestRotate()
{
    auto RotateVector = [this](FVector OldVector) {
        FVector ActorVector = this->GetActorLocation();
        FVector BlockVector = OldVector;
        FVector TempVector = BlockVector - ActorVector;
        TempVector = ActorVector + TempVector.RotateAngleAxis(90.0, FVector(1.0, 0.0, 0.0));
        return TempVector;
    };

    if (!CheckWillCollision(RotateVector))
    {
        UE_LOG(LogTemp, Warning, TEXT("now can rotate"));
        FRotator NewRotation = this->GetActorRotation() + FRotator(0.0, 0.0, -90.0);
        this->SetActorRelativeRotation(NewRotation);
    }
}

void APiezaBasica::Dismiss()
{
    Blocks.Empty();
}

void APiezaBasica::MoveLeft()
{
    auto MoveVectorLeft = [](FVector OldVector) {
        OldVector.Y -= 10.0f;
        return OldVector;
    };

    if (!CheckWillCollision(MoveVectorLeft))
    {
        FVector NewLocation = GetActorLocation();
        NewLocation.Y -= 10;
        SetActorLocation(NewLocation);

    }
}

void APiezaBasica::MoveRight()
{
    auto MoveVectorRight = [](FVector OldVector) {
        OldVector.Y += 10.0f;
        return OldVector;
    };

    if (!CheckWillCollision(MoveVectorRight))
    {
        FVector NewLocation = GetActorLocation();
        NewLocation.Y += 10;
        SetActorLocation(NewLocation);
    }
}

bool APiezaBasica::MoveDown(bool PlaySound)
{
    auto MoveVectorDown = [](FVector OldVector) {
        OldVector.Z -= 10.0f;
        return OldVector;
    };

    if (!CheckWillCollision(MoveVectorDown))
    {
        FVector NewLocation = GetActorLocation();
        NewLocation.Z -= 10;
        SetActorLocation(NewLocation);

        return true;
    }
    else
    {
        return false;
    }
}

bool APiezaBasica::CheckWillCollision(std::function<FVector(FVector OldLocation)> ChangeBeforeCheck)
{
    FCollisionQueryParams Params;
    for (ABlock* B : Blocks)
    {
        Params.AddIgnoredActor(B);
    }

    for (ABlock* B : Blocks)
    {
        FVector TempVector = B->GetActorLocation();
        TempVector = ChangeBeforeCheck(TempVector);

        TArray<struct FOverlapResult> OutOverlaps;
        FCollisionShape CollisionShape;
        CollisionShape.SetBox(FVector(4.0f, 4.0f, 4.0f));
        FCollisionResponseParams ResponseParam;
        bool b = GetWorld()->OverlapMultiByChannel(OutOverlaps,
            TempVector, B->GetActorQuat(), ECollisionChannel::ECC_WorldDynamic,
            CollisionShape, Params, ResponseParam);

        if (b)
        {
            for (auto&& Result : OutOverlaps)
            {
                UE_LOG(LogTemp, Warning, TEXT("OverLapped with actor %s, component=%s"), *Result.GetActor()->GetName(),
                    *Result.GetComponent()->GetName());
            }
            return true;
        }
    }

    return false;
}

