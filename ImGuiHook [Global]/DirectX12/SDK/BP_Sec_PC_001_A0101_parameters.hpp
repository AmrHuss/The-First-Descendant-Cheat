#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Sec_PC_001_A0101

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Sec_PC_001_A0101.BP_Sec_PC_001_A0101_C.AnimGraph
// 0x0020 (0x0020 - 0x0000)
struct BP_Sec_PC_001_A0101_C_AnimGraph final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              AnimGraph_0;                                       // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(BP_Sec_PC_001_A0101_C_AnimGraph) == 0x000008, "Wrong alignment on BP_Sec_PC_001_A0101_C_AnimGraph");
static_assert(sizeof(BP_Sec_PC_001_A0101_C_AnimGraph) == 0x000020, "Wrong size on BP_Sec_PC_001_A0101_C_AnimGraph");
static_assert(offsetof(BP_Sec_PC_001_A0101_C_AnimGraph, InPose) == 0x000000, "Member 'BP_Sec_PC_001_A0101_C_AnimGraph::InPose' has a wrong offset!");
static_assert(offsetof(BP_Sec_PC_001_A0101_C_AnimGraph, AnimGraph_0) == 0x000010, "Member 'BP_Sec_PC_001_A0101_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function BP_Sec_PC_001_A0101.BP_Sec_PC_001_A0101_C.BlueprintThreadSafeUpdateAnimation
// 0x0028 (0x0028 - 0x0000)
struct BP_Sec_PC_001_A0101_C_BlueprintThreadSafeUpdateAnimation final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCurveValue_ReturnValue;                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_A_ImplicitCast;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Sec_PC_001_A0101_C_BlueprintThreadSafeUpdateAnimation) == 0x000008, "Wrong alignment on BP_Sec_PC_001_A0101_C_BlueprintThreadSafeUpdateAnimation");
static_assert(sizeof(BP_Sec_PC_001_A0101_C_BlueprintThreadSafeUpdateAnimation) == 0x000028, "Wrong size on BP_Sec_PC_001_A0101_C_BlueprintThreadSafeUpdateAnimation");
static_assert(offsetof(BP_Sec_PC_001_A0101_C_BlueprintThreadSafeUpdateAnimation, DeltaTime) == 0x000000, "Member 'BP_Sec_PC_001_A0101_C_BlueprintThreadSafeUpdateAnimation::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_Sec_PC_001_A0101_C_BlueprintThreadSafeUpdateAnimation, CallFunc_GetCurveValue_ReturnValue) == 0x000004, "Member 'BP_Sec_PC_001_A0101_C_BlueprintThreadSafeUpdateAnimation::CallFunc_GetCurveValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Sec_PC_001_A0101_C_BlueprintThreadSafeUpdateAnimation, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000008, "Member 'BP_Sec_PC_001_A0101_C_BlueprintThreadSafeUpdateAnimation::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Sec_PC_001_A0101_C_BlueprintThreadSafeUpdateAnimation, CallFunc_SelectFloat_ReturnValue) == 0x000010, "Member 'BP_Sec_PC_001_A0101_C_BlueprintThreadSafeUpdateAnimation::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Sec_PC_001_A0101_C_BlueprintThreadSafeUpdateAnimation, CallFunc_SelectFloat_A_ImplicitCast) == 0x000018, "Member 'BP_Sec_PC_001_A0101_C_BlueprintThreadSafeUpdateAnimation::CallFunc_SelectFloat_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Sec_PC_001_A0101_C_BlueprintThreadSafeUpdateAnimation, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000020, "Member 'BP_Sec_PC_001_A0101_C_BlueprintThreadSafeUpdateAnimation::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function BP_Sec_PC_001_A0101.BP_Sec_PC_001_A0101_C.ExecuteUbergraph_BP_Sec_PC_001_A0101
// 0x0004 (0x0004 - 0x0000)
struct BP_Sec_PC_001_A0101_C_ExecuteUbergraph_BP_Sec_PC_001_A0101 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Sec_PC_001_A0101_C_ExecuteUbergraph_BP_Sec_PC_001_A0101) == 0x000004, "Wrong alignment on BP_Sec_PC_001_A0101_C_ExecuteUbergraph_BP_Sec_PC_001_A0101");
static_assert(sizeof(BP_Sec_PC_001_A0101_C_ExecuteUbergraph_BP_Sec_PC_001_A0101) == 0x000004, "Wrong size on BP_Sec_PC_001_A0101_C_ExecuteUbergraph_BP_Sec_PC_001_A0101");
static_assert(offsetof(BP_Sec_PC_001_A0101_C_ExecuteUbergraph_BP_Sec_PC_001_A0101, EntryPoint) == 0x000000, "Member 'BP_Sec_PC_001_A0101_C_ExecuteUbergraph_BP_Sec_PC_001_A0101::EntryPoint' has a wrong offset!");

}

