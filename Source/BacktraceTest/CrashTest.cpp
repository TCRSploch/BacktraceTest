// Fill out your copyright notice in the Description page of Project Settings.


#include "CrashTest.h"


// Sets default values
ACrashTest::ACrashTest()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ACrashTest::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Fatal, TEXT("Backtrace!"));
}

// Called every frame
void ACrashTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
