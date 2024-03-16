// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MCI_SIM : ModuleRules
{
	public MCI_SIM(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "ROSIntegration" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });

		//PublicIncludePaths.AddRange(new string[] { "RosIntegration/Public", "RosIntegration/Classes" });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
