#include "FindingHooman/MiniGames/UnlockDig.h"

AUnlockDig::AUnlockDig()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AUnlockDig::BeginPlay()
{
	Super::BeginPlay();

	amountDigged = 0;
}

void AUnlockDig::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!beginGame) return;

	/*if (amountDigged >= amountToDig)
		won = true;*/
}
