
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ButlerCharacter.generated.h"

UCLASS()
class VIRTUALBUTLER_API AButlerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AButlerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Function to handle voice commands
	UFUNCTION(BlueprintCallable, Category = "Voice Recognition")
	void HandleVoiceCommand(FString command);

private:
	// Function to perform tasks
	void PerformTask(FString task);
};
