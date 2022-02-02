#include "FindingHooman/DialogueSystem/DialogueManager.h"

// Sets default values for this component's properties
UDialogueManager::UDialogueManager()
{
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UDialogueManager::BeginPlay()
{
	Super::BeginPlay();

	bPlayingDialogue = false;
}


// Called every frame
void UDialogueManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}


void UDialogueManager::StartDialogue()
{
	bPlayingDialogue = true;
}


void UDialogueManager::EndDialogue()
{
	bPlayingDialogue = false;
}

