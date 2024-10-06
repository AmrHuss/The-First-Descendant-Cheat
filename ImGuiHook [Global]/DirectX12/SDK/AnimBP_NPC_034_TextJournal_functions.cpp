#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_NPC_034_TextJournal

#include "Basic.hpp"

#include "AnimBP_NPC_034_TextJournal_classes.hpp"
#include "AnimBP_NPC_034_TextJournal_parameters.hpp"


namespace SDK
{

// Function AnimBP_NPC_034_TextJournal.AnimBP_NPC_034_TextJournal_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UAnimBP_NPC_034_TextJournal_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_NPC_034_TextJournal_C", "AnimGraph");

	Params::AnimBP_NPC_034_TextJournal_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function AnimBP_NPC_034_TextJournal.AnimBP_NPC_034_TextJournal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_034_TextJournal_AnimGraphNode_TransitionResult_8F9C4D37452038489007E597804A1578
// (BlueprintEvent)

void UAnimBP_NPC_034_TextJournal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_034_TextJournal_AnimGraphNode_TransitionResult_8F9C4D37452038489007E597804A1578()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_NPC_034_TextJournal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_034_TextJournal_AnimGraphNode_TransitionResult_8F9C4D37452038489007E597804A1578");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_NPC_034_TextJournal.AnimBP_NPC_034_TextJournal_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_034_TextJournal_AnimGraphNode_TransitionResult_9BFDC8BE4D45245521DF1CA48E4117A6
// (BlueprintEvent)

void UAnimBP_NPC_034_TextJournal_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_034_TextJournal_AnimGraphNode_TransitionResult_9BFDC8BE4D45245521DF1CA48E4117A6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_NPC_034_TextJournal_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_034_TextJournal_AnimGraphNode_TransitionResult_9BFDC8BE4D45245521DF1CA48E4117A6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_NPC_034_TextJournal.AnimBP_NPC_034_TextJournal_C.ExecuteUbergraph_AnimBP_NPC_034_TextJournal
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_NPC_034_TextJournal_C::ExecuteUbergraph_AnimBP_NPC_034_TextJournal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_NPC_034_TextJournal_C", "ExecuteUbergraph_AnimBP_NPC_034_TextJournal");

	Params::AnimBP_NPC_034_TextJournal_C_ExecuteUbergraph_AnimBP_NPC_034_TextJournal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

