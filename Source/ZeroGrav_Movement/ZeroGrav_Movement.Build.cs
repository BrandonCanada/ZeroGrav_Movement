// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ZeroGrav_Movement : ModuleRules
{
	public ZeroGrav_Movement(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
