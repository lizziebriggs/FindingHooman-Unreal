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

	/*if (infinite)
	{
		if (bonesCollected >= bonesToCollect)
			won = true;
	}
	else
	{
		if (fTimer >= goalTime)
		{
			if (bonesCollected >= bonesToCollect)
				won = true;
			
			doge->LockSkill(skill);
			won = false;
			beginGame = false;
		}
		else
		{
			if (bonesCollected >= bonesToCollect)
				fTimer = goalTime;

			else fTimer += DeltaTime;
		}
	}*/
}
