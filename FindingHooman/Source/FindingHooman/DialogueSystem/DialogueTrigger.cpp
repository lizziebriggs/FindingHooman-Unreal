#include "FindingHooman/DialogueSystem/DialogueTrigger.h"

// Sets default values for this component's properties
UDialogueTrigger::UDialogueTrigger()
{
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UDialogueTrigger::BeginPlay()
{
	Super::BeginPlay();	
}


// Called every frame
void UDialogueTrigger::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}


void UDialogueTrigger::TriggerDialogue()
{
	UE_LOG(LogTemp, Warning, TEXT("Triggered dialogue"));
}

