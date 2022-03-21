#include "FindingHooman/NPCs/BirbActor.h"

ABirbActor::ABirbActor()
{
 	PrimaryActorTick.bCanEverTick = true;
}

void ABirbActor::BeginPlay()
{
	Super::BeginPlay();
	
	fTimer = 0;
	startPos = GetActorLocation();
}

// Called every frame
void ABirbActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (inAir)
		fTimer += DeltaTime;
}

FVector ABirbActor::RandomPosition()
{
	FVector newPos = FVector(0, 0, 0);
	return newPos;
}
