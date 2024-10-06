#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WC_AnimBP

#include "Basic.hpp"

#include "WC_AnimBP_classes.hpp"
#include "WC_AnimBP_parameters.hpp"


namespace SDK
{

// Function WC_AnimBP.WC_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UWC_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WC_AnimBP_C", "AnimGraph");

	Params::WC_AnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function WC_AnimBP.WC_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_WC_AnimBP_AnimGraphNode_TransitionResult_1856FCAD482DA836AC5625A7EF23E021
// (BlueprintEvent)

void UWC_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_WC_AnimBP_AnimGraphNode_TransitionResult_1856FCAD482DA836AC5625A7EF23E021()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WC_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_WC_AnimBP_AnimGraphNode_TransitionResult_1856FCAD482DA836AC5625A7EF23E021");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WC_AnimBP.WC_AnimBP_C.ExecuteUbergraph_WC_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWC_AnimBP_C::ExecuteUbergraph_WC_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WC_AnimBP_C", "ExecuteUbergraph_WC_AnimBP");

	Params::WC_AnimBP_C_ExecuteUbergraph_WC_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

