#include "FindingHooman/Player/Doge.h"

// Sets default values
ADoge::ADoge()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->InitCapsuleSize(42.0f, 96.0f);

	// SET UP TRIGGER FOR INTERACTION

	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
	TriggerBox->SetCollisionProfileName(TEXT("Trigger"));
	TriggerBox->SetupAttachment(RootComponent);
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ADoge::OnOverlapBegin);
	TriggerBox->OnComponentEndOverlap.AddDynamic(this, &ADoge::OnOverlapEnd);

	SkillRadius = CreateDefaultSubobject<USphereComponent>(TEXT("SkillRadius"));
	SkillRadius->SetCollisionProfileName(TEXT("Trigger"));
	SkillRadius->SetupAttachment(RootComponent);
	SkillRadius->OnComponentBeginOverlap.AddDynamic(this, &ADoge::OnOverlapSkillBegin);

	// SETUP CAMERA

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);

	CameraBoom->TargetArmLength = 300.0f;
	CameraBoom->bUsePawnControlRotation = true;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	// SETUP MOVEMENT

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
	GetCharacterMovement()->JumpZVelocity = 450.0f;
	GetCharacterMovement()->AirControl = 0.2f;
}

// Called when the game starts or when spawned
void ADoge::BeginPlay()
{
	Super::BeginPlay();

	bIsRunning = false;
	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
}

// Called every frame
void ADoge::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ADoge::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Zoom", this, &ADoge::ZoomCamera);

	PlayerInputComponent->BindAxis("MoveForward", this, &ADoge::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ADoge::MoveRight);
	PlayerInputComponent->BindAction("Run", IE_Pressed, this, &ADoge::ToggleRun);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &ADoge::Interact);

	PlayerInputComponent->BindAction("SetSkillOpen", IE_Pressed, this, &ADoge::SetSkillOpen);
	PlayerInputComponent->BindAction("SetSkillPush", IE_Pressed, this, &ADoge::SetSkillPush);
	PlayerInputComponent->BindAction("SetSkillBark", IE_Pressed, this, &ADoge::SetSkillBark);
	PlayerInputComponent->BindAction("SetSkillDig", IE_Pressed, this, &ADoge::SetSkillDig);
}

void ADoge::ZoomCamera(float Axis)
{
	// Zoom in
	if (Axis > 0 && CameraBoom->TargetArmLength > MinZoom)
	{
		CameraBoom->TargetArmLength -= ZoomSpeed;
	}

	// Zoom out
	else if (Axis < 0 && CameraBoom->TargetArmLength < MaxZoom)
	{
		CameraBoom->TargetArmLength += ZoomSpeed;
	}
}


// MOVEMENT

void ADoge::MoveForward(float Axis)
{
	const FRotator Rotation = Controller->GetControlRotation();
	const FRotator YawRotation(0, Rotation.Yaw, 0);

	const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

	AddMovementInput(Direction, Axis);
}

void ADoge::MoveRight(float Axis)
{
	const FRotator Rotation = Controller->GetControlRotation();
	const FRotator YawRotation(0, Rotation.Yaw, 0);

	const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

	AddMovementInput(Direction, Axis);
}

void ADoge::ToggleRun()
{
	bIsRunning = !bIsRunning;

	if (bIsRunning) GetCharacterMovement()->MaxWalkSpeed = RunSpeed;
	else GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
}


// INTERACTION

void ADoge::Interact()
{
	if (bCanInteract)
	{
		UE_LOG(LogTemp, Warning, TEXT("Interacted"));
	}

	else if(!bCanInteract)
	{
		UE_LOG(LogTemp, Warning, TEXT("ILLEGAL"));
	}
}


// SKILLS

void ADoge::UnlockSkill(int i)
{
	switch (i)
	{
	case 1:
		bCanOpen = true;
		break;
	case 2:
		bCanPush = true;
		break;
	case 3:
		bCanBark = true;
		break;
	case 4:
		bCanDig = true;
		break;

	default:
		break;
	}
}

void ADoge::LockSkill(int i)
{
	switch (i)
	{
	case 1:
		bCanOpen = false;
		break;
	case 2:
		bCanPush = false;
		break;
	case 3:
		bCanBark = false;
		break;
	case 4:
		bCanDig = false;
		break;

	default:
		break;
	}
}

void ADoge::SetSkill(int skill)
{
	currentSkill = skill;
}

void ADoge::OnOverlapSkillBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Overlap bark begin"));
	}
	
}


// COLLISIONS

void ADoge::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Overlap begin"));
		bCanInteract = true;
	}
}

void ADoge::OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Overlap end"));
		bCanInteract = false;
	}
}
