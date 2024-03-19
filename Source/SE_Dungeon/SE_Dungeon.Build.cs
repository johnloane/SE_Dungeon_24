// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SE_Dungeon : ModuleRules
{
	public SE_Dungeon(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
