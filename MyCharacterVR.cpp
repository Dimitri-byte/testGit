// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacterVR.h"

// Sets default values
AMyCharacterVR::AMyCharacterVR()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCharacterVR::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacterVR::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacterVR::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	//test 123dddd
}

