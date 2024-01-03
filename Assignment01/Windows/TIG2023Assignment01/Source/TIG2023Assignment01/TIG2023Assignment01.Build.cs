// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TIG2023Assignment01 : ModuleRules
{
	public TIG2023Assignment01(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
