// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Piece.h"
#include "PiezaBasica.h"
#include "Escenario.h"
#include "Board.generated.h"

UCLASS()
class TETRISUSFX01_API ABoard : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABoard();

	//La instancia de esta clase
	UPROPERTY()
		ABoard* Instance;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//UPROPERTY()
	//APiece* CurrentPiece;

	UPROPERTY()
		APiezaBasica* CurrentPiece;

	UPROPERTY()
		AEscenario* Escenario;

	UPROPERTY()
		AEscenario* Escen;

	void Rotate(); 
	void MoveLeft(); 
	void MoveRight();
	void MoveDown(); 
	void NewPiece();
	void CheckLine();
	void MoveDownToEnd();

private:
	enum PieceStatus { PS_NOT_INITED, PS_MOVING, PS_GOT_BOTTOM };
	PieceStatus Status = PS_NOT_INITED;

	const float CoolDown = 0.5f;
	float CoolLeft = 0.5f;
	bool bGameOver = false;

	bool CheckGameOver();


	//El builder de las piezas
	UPROPERTY(VisibleAnywhere, Category = "Main")
		class ABuilderPiezaDorada* BuilderPiezaDorada;

	UPROPERTY(VisibleAnywhere, Category = "Main")
		class ABuilderPiezaBronze* BuilderPiezaBronze;

	UPROPERTY(VisibleAnywhere, Category = "Main")
		class ABuilderPiezaPlata* BuilderPiezaPlata;

	UPROPERTY(VisibleAnywhere, Category = "Main")
		class ABuilderPiezaDiamante* BuilderPiezaDiamante;


	//El director del builder
	UPROPERTY(VisibleAnywhere, Category = "Main")
		class ADirectorPiezas* DirectorPiezas;
};
