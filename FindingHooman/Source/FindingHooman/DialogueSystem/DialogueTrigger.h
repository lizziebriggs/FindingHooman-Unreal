#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "DialogueAsset.h"

#include "DialogueTrigger.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FINDINGHOOMAN_API UDialogueTrigger : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDialogueTrigger();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, Category = Dialogue)
		UDialogueAsset* Dialogue;

	void TriggerDialogue();
};
