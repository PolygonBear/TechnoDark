// Fill out your copyright notice in the Description page of Project Settings.


#include "TD_BaseCharacter.h"

// Sets default values
ATD_BaseCharacter::ATD_BaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATD_BaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATD_BaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATD_BaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

