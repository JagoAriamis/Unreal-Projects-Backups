// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Third_Person_Game : ModuleRules
{
	public Third_Person_Game(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
