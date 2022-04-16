#include "FindingHooman/HatMetagame/SquirrelManager.h"

ASquirrelManager::ASquirrelManager()
{
 	PrimaryActorTick.bCanEverTick = true;
}

void ASquirrelManager::BeginPlay()
{
	Super::BeginPlay();

	UWorld* const World = GetWorld();
	
	for (int i = 0; i < poolSize; i++)
	{
		AAcorn* newAcorn = World->SpawnActor<AAcorn>(acornBP, FVector().ZeroVector, FRotator().ZeroRotator);
		newAcorn->SetActive(false);
		acornPool.Add(newAcorn);
	}

	nextAcorn = 0;
}

void ASquirrelManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ASquirrelManager::ThrowAcorn(FVector spawnPos, FVector throwTo)
{
	AAcorn* acorn = acornPool[nextAcorn];

	nextAcorn++;
	if (nextAcorn == poolSize) nextAcorn = 0;

	acorn->SetActorLocation(spawnPos);
	acorn->SetActive(true);

	FVector throwVelocity = (throwTo - spawnPos).GetSafeNormal() * 1000;

	/*if (acorn->mesh)
		acorn->mesh->SetPhysicsLinearVelocity(throwVelocity);*/
}
