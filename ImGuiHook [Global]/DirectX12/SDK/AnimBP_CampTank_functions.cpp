#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_CampTank

#include "Basic.hpp"

#include "AnimBP_CampTank_classes.hpp"
#include "AnimBP_CampTank_parameters.hpp"


namespace SDK
{

// Function AnimBP_CampTank.AnimBP_CampTank_C.ExecuteUbergraph_AnimBP_CampTank
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_CampTank_C::ExecuteUbergraph_AnimBP_CampTank(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_CampTank_C", "ExecuteUbergraph_AnimBP_CampTank");

	Params::AnimBP_CampTank_C_ExecuteUbergraph_AnimBP_CampTank Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AnimBP_CampTank.AnimBP_CampTank_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampTank_AnimGraphNode_TransitionResult_DDFA2FB844ACCB931465A097D523D796
// (BlueprintEvent)

void UAnimBP_CampTank_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampTank_AnimGraphNode_TransitionResult_DDFA2FB844ACCB931465A097D523D796()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_CampTank_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampTank_AnimGraphNode_TransitionResult_DDFA2FB844ACCB931465A097D523D796");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_CampTank.AnimBP_CampTank_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampTank_AnimGraphNode_TransitionResult_610BF40D46975E71664CBDBEE34DF094
// (BlueprintEvent)

void UAnimBP_CampTank_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampTank_AnimGraphNode_TransitionResult_610BF40D46975E71664CBDBEE34DF094()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_CampTank_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampTank_AnimGraphNode_TransitionResult_610BF40D46975E71664CBDBEE34DF094");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_CampTank.AnimBP_CampTank_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampTank_AnimGraphNode_TransitionResult_56AA16BA43A583EF0FE038AD5ECE171A
// (BlueprintEvent)

void UAnimBP_CampTank_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampTank_AnimGraphNode_TransitionResult_56AA16BA43A583EF0FE038AD5ECE171A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_CampTank_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampTank_AnimGraphNode_TransitionResult_56AA16BA43A583EF0FE038AD5ECE171A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_CampTank.AnimBP_CampTank_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UAnimBP_CampTank_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_CampTank_C", "AnimGraph");

	Params::AnimBP_CampTank_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}

