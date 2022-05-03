#include "FindingHooman/MiniGames/UnlockPush.h"

AUnlockPush::AUnlockPush()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AUnlockPush::BeginPlay()
{
	Super::BeginPlay();
}

void AUnlockPush::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!beginGame) return;

	if (hasWrapper && hasHotdog && hasBun)
		won = true;
}
