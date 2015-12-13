// Fill out your copyright notice in the Description page of Project Settings.

#include "Test2D.h"
#include "Network.h"


// Sets default values
ANetwork::ANetwork()
var TcpLinkClient mytcplink;
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANetwork::BeginPlay()
{
	Super::BeginPlay();
	mytcplink = Spawn(class'TcpLinkClient'); //spawn the class
	mytcplink.PC = self; //send it a reference to the player controller
	
}

// Called every frame
void ANetwork::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

