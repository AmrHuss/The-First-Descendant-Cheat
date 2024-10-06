#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WP_Invasion_EnergyEmitter_AnimBP

#include "Basic.hpp"

#include "WP_Invasion_EnergyEmitter_AnimBP_classes.hpp"
#include "WP_Invasion_EnergyEmitter_AnimBP_parameters.hpp"


namespace SDK
{

// Function WP_Invasion_EnergyEmitter_AnimBP.WP_Invasion_EnergyEmitter_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UWP_Invasion_EnergyEmitter_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WP_Invasion_EnergyEmitter_AnimBP_C", "AnimGraph");

	Params::WP_Invasion_EnergyEmitter_AnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function WP_Invasion_EnergyEmitter_AnimBP.WP_Invasion_EnergyEmitter_AnimBP_C.AnimNotify_OnSpawned
// (BlueprintCallable, BlueprintEvent)

void UWP_Invasion_EnergyEmitter_AnimBP_C::AnimNotify_OnSpawned()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WP_Invasion_EnergyEmitter_AnimBP_C", "AnimNotify_OnSpawned");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WP_Invasion_EnergyEmitter_AnimBP.WP_Invasion_EnergyEmitter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WP_Invasion_EnergyEmitter_AnimBP_AnimGraphNode_ApplyAdditive_02A578F542C8200EAB4AE5975C42D120
// (BlueprintEvent)

void UWP_Invasion_EnergyEmitter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_WP_Invasion_EnergyEmitter_AnimBP_AnimGraphNode_ApplyAdditive_02A578F542C8200EAB4AE5975C42D120()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WP_Invasion_EnergyEmitter_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_WP_Invasion_EnergyEmitter_AnimBP_AnimGraphNode_ApplyAdditive_02A578F542C8200EAB4AE5975C42D120");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WP_Invasion_EnergyEmitter_AnimBP.WP_Invasion_EnergyEmitter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WP_Invasion_EnergyEmitter_AnimBP_AnimGraphNode_TransitionResult_AE75E2B04EB0995C8C576A977DD0F8BB
// (BlueprintEvent)

void UWP_Invasion_EnergyEmitter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_WP_Invasion_EnergyEmitter_AnimBP_AnimGraphNode_TransitionResult_AE75E2B04EB0995C8C576A977DD0F8BB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WP_Invasion_EnergyEmitter_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_WP_Invasion_EnergyEmitter_AnimBP_AnimGraphNode_TransitionResult_AE75E2B04EB0995C8C576A977DD0F8BB");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WP_Invasion_EnergyEmitter_AnimBP.WP_Invasion_EnergyEmitter_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WP_Invasion_EnergyEmitter_AnimBP_AnimGraphNode_TransitionResult_CEF8D217420469ABA5F512AF8C9F8370
// (BlueprintEvent)

void UWP_Invasion_EnergyEmitter_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_WP_Invasion_EnergyEmitter_AnimBP_AnimGraphNode_TransitionResult_CEF8D217420469ABA5F512AF8C9F8370()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WP_Invasion_EnergyEmitter_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_WP_Invasion_EnergyEmitter_AnimBP_AnimGraphNode_TransitionResult_CEF8D217420469ABA5F512AF8C9F8370");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WP_Invasion_EnergyEmitter_AnimBP.WP_Invasion_EnergyEmitter_AnimBP_C.ExecuteUbergraph_WP_Invasion_EnergyEmitter_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWP_Invasion_EnergyEmitter_AnimBP_C::ExecuteUbergraph_WP_Invasion_EnergyEmitter_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WP_Invasion_EnergyEmitter_AnimBP_C", "ExecuteUbergraph_WP_Invasion_EnergyEmitter_AnimBP");

	Params::WP_Invasion_EnergyEmitter_AnimBP_C_ExecuteUbergraph_WP_Invasion_EnergyEmitter_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
