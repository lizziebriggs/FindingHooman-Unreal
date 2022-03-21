#pragma once

#include "CoreMinimal.h"
#include "FindingHooman/Player/Doge.h"
#include "GameFramework/Actor.h"

#include "MiniGame.generated.h"

UCLASS()
class FINDINGHOOMAN_API AMiniGame : public AActor
{
	GENERATED_BODY()
	
public:
	AMiniGame();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MiniGame)
		ADoge* doge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MiniGame)
		int skill;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MiniGame)
		bool beginGame;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MiniGame)
		bool won;

public:
	virtual void Tick(float DeltaTime) override;

};
