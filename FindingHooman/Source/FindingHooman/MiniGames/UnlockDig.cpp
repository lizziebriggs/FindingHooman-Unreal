#include "FindingHooman/MiniGames/UnlockDig.h"

AUnlockDig::AUnlockDig()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AUnlockDig::BeginPlay()
{
	Super::BeginPlay();

	bonesCollected = 0;
}

void AUnlockDig::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!beginGame) return;

	if (bonesCollected >= bonesToCollect)
		won = true;
}
