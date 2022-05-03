#include "FindingHooman/HatMetagame/Acorn.h"

AAcorn::AAcorn()
{
 	PrimaryActorTick.bCanEverTick = true;
}

void AAcorn::BeginPlay()
{
	Super::BeginPlay();
}

void AAcorn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AAcorn::SetActive(bool state)
{
	isActive = state;
	SetActorHiddenInGame(!state);
}

