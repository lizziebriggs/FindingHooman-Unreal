#include "FindingHooman/MiniGames/UnlockOpen.h"

AUnlockOpen::AUnlockOpen()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AUnlockOpen::BeginPlay()
{
	Super::BeginPlay();

	//valueScore = 0;
}

void AUnlockOpen::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!beginGame) return;

	/*if (valueScore >= scoreToWin)
		won = true;*/

	if (hasMirror && hasBracelet && hasPearlCollar)
		won = true;
}
