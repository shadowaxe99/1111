
#include "VirtualButler.h"
#include "Modules/ModuleManager.h"

IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, VirtualButler, "VirtualButler" );

void VirtualButler::Start()
{
    // Initialize the Butler Character
    ButlerCharacter = new ButlerCharacter();
    ButlerCharacter->Initialize();

    // Initialize Voice Recognition
    VoiceRecognition = new VoiceRecognition();
    VoiceRecognition->Initialize();

    // Initialize Task Automation
    TaskAutomation = new TaskAutomation();
    TaskAutomation->Initialize();
}

void VirtualButler::Update()
{
    // Update the Butler Character
    ButlerCharacter->Update();

    // Update Voice Recognition
    VoiceRecognition->Update();

    // Update Task Automation
    TaskAutomation->Update();
}

void VirtualButler::Shutdown()
{
    // Shutdown the Butler Character
    ButlerCharacter->Shutdown();

    // Shutdown Voice Recognition
    VoiceRecognition->Shutdown();

    // Shutdown Task Automation
    TaskAutomation->Shutdown();
}
