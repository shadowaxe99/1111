
#include "VoiceRecognition.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"

UVoiceRecognition::UVoiceRecognition()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UVoiceRecognition::BeginPlay()
{
    Super::BeginPlay();
    SetupVoiceRecognition();
}

void UVoiceRecognition::SetupVoiceRecognition()
{
    // Initialize voice recognition system
    VoiceRecognizer = FVoiceModule::Get().CreateVoiceRecognizer();
    VoiceRecognizer->OnVoiceRecognized().BindLambda([this](const FString& Phrase, float Confidence)
    {
        OnVoiceCommandRecognized.Broadcast(Phrase, Confidence);
    });
    VoiceRecognizer->SetLanguage(ELanguage::EN);
    VoiceRecognizer->Start();
}

void UVoiceRecognition::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
    VoiceRecognizer->Tick();
}

void UVoiceRecognition::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);
    VoiceRecognizer->Shutdown();
}
