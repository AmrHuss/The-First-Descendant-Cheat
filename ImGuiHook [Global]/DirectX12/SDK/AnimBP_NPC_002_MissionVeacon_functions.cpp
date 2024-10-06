#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_NPC_002_MissionVeacon

#include "Basic.hpp"

#include "AnimBP_NPC_002_MissionVeacon_classes.hpp"
#include "AnimBP_NPC_002_MissionVeacon_parameters.hpp"


namespace SDK
{

// Function AnimBP_NPC_002_MissionVeacon.AnimBP_NPC_002_MissionVeacon_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UAnimBP_NPC_002_MissionVeacon_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_NPC_002_MissionVeacon_C", "AnimGraph");

	Params::AnimBP_NPC_002_MissionVeacon_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function AnimBP_NPC_002_MissionVeacon.AnimBP_NPC_002_MissionVeacon_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_NPC_002_MissionVeacon_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_NPC_002_MissionVeacon_C", "BlueprintUpdateAnimation");

	Params::AnimBP_NPC_002_MissionVeacon_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AnimBP_NPC_002_MissionVeacon.AnimBP_NPC_002_MissionVeacon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_002_MissionVeacon_AnimGraphNode_TransitionResult_83A1E8B649A3CC134AF560A46C40F132
// (BlueprintEvent)

void UAnimBP_NPC_002_MissionVeacon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_002_MissionVeacon_AnimGraphNode_TransitionResult_83A1E8B649A3CC134AF560A46C40F132()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_NPC_002_MissionVeacon_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_002_MissionVeacon_AnimGraphNode_TransitionResult_83A1E8B649A3CC134AF560A46C40F132");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_NPC_002_MissionVeacon.AnimBP_NPC_002_MissionVeacon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_002_MissionVeacon_AnimGraphNode_TransitionResult_928235D34CED8EBA9F119282BADFA3FB
// (BlueprintEvent)

void UAnimBP_NPC_002_MissionVeacon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_002_MissionVeacon_AnimGraphNode_TransitionResult_928235D34CED8EBA9F119282BADFA3FB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_NPC_002_MissionVeacon_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_002_MissionVeacon_AnimGraphNode_TransitionResult_928235D34CED8EBA9F119282BADFA3FB");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_NPC_002_MissionVeacon.AnimBP_NPC_002_MissionVeacon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_002_MissionVeacon_AnimGraphNode_TransitionResult_B3BE84E546BBF066F08EB281B7F2C94F
// (BlueprintEvent)

void UAnimBP_NPC_002_MissionVeacon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_002_MissionVeacon_AnimGraphNode_TransitionResult_B3BE84E546BBF066F08EB281B7F2C94F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_NPC_002_MissionVeacon_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_002_MissionVeacon_AnimGraphNode_TransitionResult_B3BE84E546BBF066F08EB281B7F2C94F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_NPC_002_MissionVeacon.AnimBP_NPC_002_MissionVeacon_C.ExecuteUbergraph_AnimBP_NPC_002_MissionVeacon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_NPC_002_MissionVeacon_C::ExecuteUbergraph_AnimBP_NPC_002_MissionVeacon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_NPC_002_MissionVeacon_C", "ExecuteUbergraph_AnimBP_NPC_002_MissionVeacon");

	Params::AnimBP_NPC_002_MissionVeacon_C_ExecuteUbergraph_AnimBP_NPC_002_MissionVeacon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

