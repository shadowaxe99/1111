
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ButlerCharacter.h"
#include "VoiceRecognition.h"
#include "TaskAutomation.h"
#include "VirtualButler.generated.h"

UCLASS()
class VIRTUALBUTLER_API AVirtualButler : public AGameModeBase
{
    GENERATED_BODY()

public:
    AVirtualButler();

    virtual void BeginPlay() override;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Butler")
    AButlerCharacter* ButlerCharacter;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Voice")
    UVoiceRecognition* VoiceRecognition;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Task")
    UTaskAutomation* TaskAutomation;
};
