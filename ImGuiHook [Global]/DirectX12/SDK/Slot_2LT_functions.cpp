#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Slot_2LT

#include "Basic.hpp"

#include "Slot_2LT_classes.hpp"
#include "Slot_2LT_parameters.hpp"


namespace SDK
{

// Function Slot_2LT.Slot_2LT_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void USlot_2LT_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Slot_2LT_C", "AnimGraph");

	Params::Slot_2LT_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function Slot_2LT.Slot_2LT_C.ExecuteUbergraph_Slot_2LT
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USlot_2LT_C::ExecuteUbergraph_Slot_2LT(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Slot_2LT_C", "ExecuteUbergraph_Slot_2LT");

	Params::Slot_2LT_C_ExecuteUbergraph_Slot_2LT Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Slot_2LT.Slot_2LT_C.FullBody
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose_FullBody                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        FullBody_0                                             (Parm, OutParm, NoDestructor)

void USlot_2LT_C::FullBody(const struct FPoseLink& InPose_FullBody, struct FPoseLink* FullBody_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Slot_2LT_C", "FullBody");

	Params::Slot_2LT_C_FullBody Parms{};

	Parms.InPose_FullBody = std::move(InPose_FullBody);

	UObject::ProcessEvent(Func, &Parms);

	if (FullBody_0 != nullptr)
		*FullBody_0 = std::move(Parms.FullBody_0);
}


// Function Slot_2LT.Slot_2LT_C.Motion_M
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose_Motion_M                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Motion_M_0                                             (Parm, OutParm, NoDestructor)

void USlot_2LT_C::Motion_M(const struct FPoseLink& InPose_Motion_M, struct FPoseLink* Motion_M_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Slot_2LT_C", "Motion_M");

	Params::Slot_2LT_C_Motion_M Parms{};

	Parms.InPose_Motion_M = std::move(InPose_Motion_M);

	UObject::ProcessEvent(Func, &Parms);

	if (Motion_M_0 != nullptr)
		*Motion_M_0 = std::move(Parms.Motion_M_0);
}


// Function Slot_2LT.Slot_2LT_C.UpperBody_L
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose_UpperBody_L                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        UpperBody_L_0                                          (Parm, OutParm, NoDestructor)

void USlot_2LT_C::UpperBody_L(const struct FPoseLink& InPose_UpperBody_L, struct FPoseLink* UpperBody_L_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Slot_2LT_C", "UpperBody_L");

	Params::Slot_2LT_C_UpperBody_L Parms{};

	Parms.InPose_UpperBody_L = std::move(InPose_UpperBody_L);

	UObject::ProcessEvent(Func, &Parms);

	if (UpperBody_L_0 != nullptr)
		*UpperBody_L_0 = std::move(Parms.UpperBody_L_0);
}


// Function Slot_2LT.Slot_2LT_C.UpperBody_L_Additive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose_UpperBody_L_Additive                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        UpperBody_L_Additive_0                                 (Parm, OutParm, NoDestructor)

void USlot_2LT_C::UpperBody_L_Additive(const struct FPoseLink& InPose_UpperBody_L_Additive, struct FPoseLink* UpperBody_L_Additive_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Slot_2LT_C", "UpperBody_L_Additive");

	Params::Slot_2LT_C_UpperBody_L_Additive Parms{};

	Parms.InPose_UpperBody_L_Additive = std::move(InPose_UpperBody_L_Additive);

	UObject::ProcessEvent(Func, &Parms);

	if (UpperBody_L_Additive_0 != nullptr)
		*UpperBody_L_Additive_0 = std::move(Parms.UpperBody_L_Additive_0);
}


// Function Slot_2LT.Slot_2LT_C.UpperBody_U
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose_UpperBody_U                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        UpperBody_U_0                                          (Parm, OutParm, NoDestructor)

void USlot_2LT_C::UpperBody_U(const struct FPoseLink& InPose_UpperBody_U, struct FPoseLink* UpperBody_U_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Slot_2LT_C", "UpperBody_U");

	Params::Slot_2LT_C_UpperBody_U Parms{};

	Parms.InPose_UpperBody_U = std::move(InPose_UpperBody_U);

	UObject::ProcessEvent(Func, &Parms);

	if (UpperBody_U_0 != nullptr)
		*UpperBody_U_0 = std::move(Parms.UpperBody_U_0);
}


// Function Slot_2LT.Slot_2LT_C.UpperBody_U_R
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose_UpperBody_U_R                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        UpperBody_U_R_0                                        (Parm, OutParm, NoDestructor)

void USlot_2LT_C::UpperBody_U_R(const struct FPoseLink& InPose_UpperBody_U_R, struct FPoseLink* UpperBody_U_R_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Slot_2LT_C", "UpperBody_U_R");

	Params::Slot_2LT_C_UpperBody_U_R Parms{};

	Parms.InPose_UpperBody_U_R = std::move(InPose_UpperBody_U_R);

	UObject::ProcessEvent(Func, &Parms);

	if (UpperBody_U_R_0 != nullptr)
		*UpperBody_U_R_0 = std::move(Parms.UpperBody_U_R_0);
}

}

