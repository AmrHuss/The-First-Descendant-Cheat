#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RW_SG_1003_AnimBP

#include "Basic.hpp"

#include "RW_SG_1003_AnimBP_classes.hpp"
#include "RW_SG_1003_AnimBP_parameters.hpp"


namespace SDK
{

// Function RW_SG_1003_AnimBP.RW_SG_1003_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void URW_SG_1003_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RW_SG_1003_AnimBP_C", "AnimGraph");

	Params::RW_SG_1003_AnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function RW_SG_1003_AnimBP.RW_SG_1003_AnimBP_C.ExecuteUbergraph_RW_SG_1003_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URW_SG_1003_AnimBP_C::ExecuteUbergraph_RW_SG_1003_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RW_SG_1003_AnimBP_C", "ExecuteUbergraph_RW_SG_1003_AnimBP");

	Params::RW_SG_1003_AnimBP_C_ExecuteUbergraph_RW_SG_1003_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

