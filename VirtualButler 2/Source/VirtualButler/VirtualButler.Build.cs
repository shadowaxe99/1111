
using UnrealBuildTool;

public class VirtualButler : ModuleRules
{
    public VirtualButler(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
    
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "Voice", "SpeechRecognition" });

        PrivateDependencyModuleNames.AddRange(new string[] {  });

        DynamicallyLoadedModuleNames.AddRange(new string[] {  });
    }
}
