// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class WithBasic_MD : ModuleRules
{
	public WithBasic_MD(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "WithBasic" });
	}
}
