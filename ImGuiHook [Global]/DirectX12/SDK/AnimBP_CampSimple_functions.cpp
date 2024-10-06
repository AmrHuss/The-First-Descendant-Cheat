#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_CampSimple

#include "Basic.hpp"

#include "AnimBP_CampSimple_classes.hpp"
#include "AnimBP_CampSimple_parameters.hpp"


namespace SDK
{

// Function AnimBP_CampSimple.AnimBP_CampSimple_C.ExecuteUbergraph_AnimBP_CampSimple
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_CampSimple_C::ExecuteUbergraph_AnimBP_CampSimple(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_CampSimple_C", "ExecuteUbergraph_AnimBP_CampSimple");

	Params::AnimBP_CampSimple_C_ExecuteUbergraph_AnimBP_CampSimple Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AnimBP_CampSimple.AnimBP_CampSimple_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampSimple_AnimGraphNode_TransitionResult_ACD7E0D44DEE7032F75D7F8A6E044DF8
// (BlueprintEvent)

void UAnimBP_CampSimple_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampSimple_AnimGraphNode_TransitionResult_ACD7E0D44DEE7032F75D7F8A6E044DF8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_CampSimple_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampSimple_AnimGraphNode_TransitionResult_ACD7E0D44DEE7032F75D7F8A6E044DF8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_CampSimple.AnimBP_CampSimple_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampSimple_AnimGraphNode_TransitionResult_7649E96542ADC580617D01AC67F37425
// (BlueprintEvent)

void UAnimBP_CampSimple_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampSimple_AnimGraphNode_TransitionResult_7649E96542ADC580617D01AC67F37425()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_CampSimple_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampSimple_AnimGraphNode_TransitionResult_7649E96542ADC580617D01AC67F37425");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_CampSimple.AnimBP_CampSimple_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampSimple_AnimGraphNode_TransitionResult_05A5B1DA41B24470D21A818F11179EFD
// (BlueprintEvent)

void UAnimBP_CampSimple_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampSimple_AnimGraphNode_TransitionResult_05A5B1DA41B24470D21A818F11179EFD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_CampSimple_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampSimple_AnimGraphNode_TransitionResult_05A5B1DA41B24470D21A818F11179EFD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_CampSimple.AnimBP_CampSimple_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UAnimBP_CampSimple_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_CampSimple_C", "AnimGraph");

	Params::AnimBP_CampSimple_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}

