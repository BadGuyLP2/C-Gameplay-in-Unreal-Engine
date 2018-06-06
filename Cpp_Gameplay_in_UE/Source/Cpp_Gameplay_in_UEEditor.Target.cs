// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Cpp_Gameplay_in_UEEditorTarget : TargetRules
{
	public Cpp_Gameplay_in_UEEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "Cpp_Gameplay_in_UE" } );
	}
}
