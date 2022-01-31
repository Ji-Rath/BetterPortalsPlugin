// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class BetterPortalsEditor : ModuleRules
{
    private string PluginPath
    {
        get { return Path.Combine(PluginDirectory, "Source/"); }
    }
    public BetterPortalsEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PrivateIncludePaths.Add(Path.Combine(PluginPath, "BetterPortalsEditor/Private"));
        PublicIncludePaths.Add(Path.Combine(PluginPath, "BetterPortalsEditor/Public"));


        PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"PhysicsCore"
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"PhysicsCore",
				"BetterPortals"
			}
			);


			DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
