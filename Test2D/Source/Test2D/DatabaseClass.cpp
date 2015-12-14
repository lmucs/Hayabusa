// Fill out your copyright notice in the Description page of Project Settings.

#include "Test2D.h"
#include "DatabaseClass.h"


// Sets default values
ADatabaseClass::ADatabaseClass()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADatabaseClass::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADatabaseClass::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

