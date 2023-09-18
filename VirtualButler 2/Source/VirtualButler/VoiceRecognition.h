
#pragma once

#include "CoreMinimal.h"
#include "VoiceRecognition.generated.h"

UCLASS()
class VIRTUALBUTLER_API UVoiceRecognition : public UObject
{
    GENERATED_BODY()

public:
    UVoiceRecognition();

    UFUNCTION(BlueprintCallable, Category = "Voice Recognition")
    bool InitializeVoiceRecognition();

    UFUNCTION(BlueprintCallable, Category = "Voice Recognition")
    FString ListenForCommand();

private:
    // Voice recognition implementation details hidden for brevity
};
