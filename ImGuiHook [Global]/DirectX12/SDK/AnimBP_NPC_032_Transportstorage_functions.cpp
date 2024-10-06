#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_NPC_032_Transportstorage

#include "Basic.hpp"

#include "AnimBP_NPC_032_Transportstorage_classes.hpp"
#include "AnimBP_NPC_032_Transportstorage_parameters.hpp"


namespace SDK
{

// Function AnimBP_NPC_032_Transportstorage.AnimBP_NPC_032_Transportstorage_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UAnimBP_NPC_032_Transportstorage_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_NPC_032_Transportstorage_C", "AnimGraph");

	Params::AnimBP_NPC_032_Transportstorage_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function AnimBP_NPC_032_Transportstorage.AnimBP_NPC_032_Transportstorage_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_032_Transportstorage_AnimGraphNode_TransitionResult_B53F4C1346FB7754BA8C09B8BF0532EC
// (BlueprintEvent)

void UAnimBP_NPC_032_Transportstorage_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_032_Transportstorage_AnimGraphNode_TransitionResult_B53F4C1346FB7754BA8C09B8BF0532EC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_NPC_032_Transportstorage_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_032_Transportstorage_AnimGraphNode_TransitionResult_B53F4C1346FB7754BA8C09B8BF0532EC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_NPC_032_Transportstorage.AnimBP_NPC_032_Transportstorage_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_032_Transportstorage_AnimGraphNode_TransitionResult_EA979A964A75F37C05AB66A6626C284C
// (BlueprintEvent)

void UAnimBP_NPC_032_Transportstorage_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_032_Transportstorage_AnimGraphNode_TransitionResult_EA979A964A75F37C05AB66A6626C284C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_NPC_032_Transportstorage_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_032_Transportstorage_AnimGraphNode_TransitionResult_EA979A964A75F37C05AB66A6626C284C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_NPC_032_Transportstorage.AnimBP_NPC_032_Transportstorage_C.ExecuteUbergraph_AnimBP_NPC_032_Transportstorage
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_NPC_032_Transportstorage_C::ExecuteUbergraph_AnimBP_NPC_032_Transportstorage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_NPC_032_Transportstorage_C", "ExecuteUbergraph_AnimBP_NPC_032_Transportstorage");

	Params::AnimBP_NPC_032_Transportstorage_C_ExecuteUbergraph_AnimBP_NPC_032_Transportstorage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

