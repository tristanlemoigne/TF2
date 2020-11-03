// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TF2 : ModuleRules
{
	public TF2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
