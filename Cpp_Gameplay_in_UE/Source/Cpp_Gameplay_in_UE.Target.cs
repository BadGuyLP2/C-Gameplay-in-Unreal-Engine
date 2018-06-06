// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Cpp_Gameplay_in_UETarget : TargetRules
{
	public Cpp_Gameplay_in_UETarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "Cpp_Gameplay_in_UE" } );
	}
}
