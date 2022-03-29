#include "FindingHooman/MiniGames/UnlockBark.h"

AUnlockBark::AUnlockBark()
{
 	PrimaryActorTick.bCanEverTick = true;

}

void AUnlockBark::BeginPlay()
{
	Super::BeginPlay();
	
	birbsInAir = 0;
	fTimer = 0;
}

void AUnlockBark::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!beginGame) return;

	if (infinite)
	{
		for (int i = 0; i < birbs.Num(); i++)
		{
			if (birbs[i]->inAir)
				++birbsInAir;
		}

		if (birbsInAir == birbs.Num())
			won = true;
	}
	else
	{
		if (fTimer >= goalTime)
		{
			if (birbsInAir == birbs.Num())
			{
				UE_LOG(LogTemp, Warning, TEXT("Bark won"));
				won = true;
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Bark lost"));
				doge->LockSkill(skill);
				won = false;
			}

			birbsInAir = 0;
			fTimer = 0;
			beginGame = false;
		}
		else
		{
			for (int i = 0; i < birbs.Num(); i++)
			{
				if (birbs[i]->inAir)
					++birbsInAir;
			}

			if (birbsInAir == birbs.Num())
			{
				fTimer = goalTime;
			}
			else
			{
				fTimer += DeltaTime;
				birbsInAir = 0;
			}
		}
	}
}
