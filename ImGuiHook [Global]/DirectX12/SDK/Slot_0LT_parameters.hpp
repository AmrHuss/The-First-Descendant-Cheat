#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Slot_0LT

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Slot_0LT.Slot_0LT_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct Slot_0LT_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(Slot_0LT_C_AnimGraph) == 0x000008, "Wrong alignment on Slot_0LT_C_AnimGraph");
static_assert(sizeof(Slot_0LT_C_AnimGraph) == 0x000010, "Wrong size on Slot_0LT_C_AnimGraph");
static_assert(offsetof(Slot_0LT_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'Slot_0LT_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function Slot_0LT.Slot_0LT_C.ExecuteUbergraph_Slot_0LT
// 0x0004 (0x0004 - 0x0000)
struct Slot_0LT_C_ExecuteUbergraph_Slot_0LT final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Slot_0LT_C_ExecuteUbergraph_Slot_0LT) == 0x000004, "Wrong alignment on Slot_0LT_C_ExecuteUbergraph_Slot_0LT");
static_assert(sizeof(Slot_0LT_C_ExecuteUbergraph_Slot_0LT) == 0x000004, "Wrong size on Slot_0LT_C_ExecuteUbergraph_Slot_0LT");
static_assert(offsetof(Slot_0LT_C_ExecuteUbergraph_Slot_0LT, EntryPoint) == 0x000000, "Member 'Slot_0LT_C_ExecuteUbergraph_Slot_0LT::EntryPoint' has a wrong offset!");

// Function Slot_0LT.Slot_0LT_C.FullBody
// 0x0020 (0x0020 - 0x0000)
struct Slot_0LT_C_FullBody final
{
public:
	struct FPoseLink                              InPose_FullBody;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              FullBody_0;                                        // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(Slot_0LT_C_FullBody) == 0x000008, "Wrong alignment on Slot_0LT_C_FullBody");
static_assert(sizeof(Slot_0LT_C_FullBody) == 0x000020, "Wrong size on Slot_0LT_C_FullBody");
static_assert(offsetof(Slot_0LT_C_FullBody, InPose_FullBody) == 0x000000, "Member 'Slot_0LT_C_FullBody::InPose_FullBody' has a wrong offset!");
static_assert(offsetof(Slot_0LT_C_FullBody, FullBody_0) == 0x000010, "Member 'Slot_0LT_C_FullBody::FullBody_0' has a wrong offset!");

// Function Slot_0LT.Slot_0LT_C.Motion_M
// 0x0020 (0x0020 - 0x0000)
struct Slot_0LT_C_Motion_M final
{
public:
	struct FPoseLink                              InPose_Motion_M;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              Motion_M_0;                                        // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(Slot_0LT_C_Motion_M) == 0x000008, "Wrong alignment on Slot_0LT_C_Motion_M");
static_assert(sizeof(Slot_0LT_C_Motion_M) == 0x000020, "Wrong size on Slot_0LT_C_Motion_M");
static_assert(offsetof(Slot_0LT_C_Motion_M, InPose_Motion_M) == 0x000000, "Member 'Slot_0LT_C_Motion_M::InPose_Motion_M' has a wrong offset!");
static_assert(offsetof(Slot_0LT_C_Motion_M, Motion_M_0) == 0x000010, "Member 'Slot_0LT_C_Motion_M::Motion_M_0' has a wrong offset!");

// Function Slot_0LT.Slot_0LT_C.UpperBody_L
// 0x0020 (0x0020 - 0x0000)
struct Slot_0LT_C_UpperBody_L final
{
public:
	struct FPoseLink                              InPose_UpperBody_L;                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              UpperBody_L_0;                                     // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(Slot_0LT_C_UpperBody_L) == 0x000008, "Wrong alignment on Slot_0LT_C_UpperBody_L");
static_assert(sizeof(Slot_0LT_C_UpperBody_L) == 0x000020, "Wrong size on Slot_0LT_C_UpperBody_L");
static_assert(offsetof(Slot_0LT_C_UpperBody_L, InPose_UpperBody_L) == 0x000000, "Member 'Slot_0LT_C_UpperBody_L::InPose_UpperBody_L' has a wrong offset!");
static_assert(offsetof(Slot_0LT_C_UpperBody_L, UpperBody_L_0) == 0x000010, "Member 'Slot_0LT_C_UpperBody_L::UpperBody_L_0' has a wrong offset!");

// Function Slot_0LT.Slot_0LT_C.UpperBody_L_Additive
// 0x0020 (0x0020 - 0x0000)
struct Slot_0LT_C_UpperBody_L_Additive final
{
public:
	struct FPoseLink                              InPose_UpperBody_L_Additive;                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              UpperBody_L_Additive_0;                            // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(Slot_0LT_C_UpperBody_L_Additive) == 0x000008, "Wrong alignment on Slot_0LT_C_UpperBody_L_Additive");
static_assert(sizeof(Slot_0LT_C_UpperBody_L_Additive) == 0x000020, "Wrong size on Slot_0LT_C_UpperBody_L_Additive");
static_assert(offsetof(Slot_0LT_C_UpperBody_L_Additive, InPose_UpperBody_L_Additive) == 0x000000, "Member 'Slot_0LT_C_UpperBody_L_Additive::InPose_UpperBody_L_Additive' has a wrong offset!");
static_assert(offsetof(Slot_0LT_C_UpperBody_L_Additive, UpperBody_L_Additive_0) == 0x000010, "Member 'Slot_0LT_C_UpperBody_L_Additive::UpperBody_L_Additive_0' has a wrong offset!");

// Function Slot_0LT.Slot_0LT_C.UpperBody_U
// 0x0020 (0x0020 - 0x0000)
struct Slot_0LT_C_UpperBody_U final
{
public:
	struct FPoseLink                              InPose_UpperBody_U;                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              UpperBody_U_0;                                     // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(Slot_0LT_C_UpperBody_U) == 0x000008, "Wrong alignment on Slot_0LT_C_UpperBody_U");
static_assert(sizeof(Slot_0LT_C_UpperBody_U) == 0x000020, "Wrong size on Slot_0LT_C_UpperBody_U");
static_assert(offsetof(Slot_0LT_C_UpperBody_U, InPose_UpperBody_U) == 0x000000, "Member 'Slot_0LT_C_UpperBody_U::InPose_UpperBody_U' has a wrong offset!");
static_assert(offsetof(Slot_0LT_C_UpperBody_U, UpperBody_U_0) == 0x000010, "Member 'Slot_0LT_C_UpperBody_U::UpperBody_U_0' has a wrong offset!");

// Function Slot_0LT.Slot_0LT_C.UpperBody_U_R
// 0x0020 (0x0020 - 0x0000)
struct Slot_0LT_C_UpperBody_U_R final
{
public:
	struct FPoseLink                              InPose_UpperBody_U_R;                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              UpperBody_U_R_0;                                   // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(Slot_0LT_C_UpperBody_U_R) == 0x000008, "Wrong alignment on Slot_0LT_C_UpperBody_U_R");
static_assert(sizeof(Slot_0LT_C_UpperBody_U_R) == 0x000020, "Wrong size on Slot_0LT_C_UpperBody_U_R");
static_assert(offsetof(Slot_0LT_C_UpperBody_U_R, InPose_UpperBody_U_R) == 0x000000, "Member 'Slot_0LT_C_UpperBody_U_R::InPose_UpperBody_U_R' has a wrong offset!");
static_assert(offsetof(Slot_0LT_C_UpperBody_U_R, UpperBody_U_R_0) == 0x000010, "Member 'Slot_0LT_C_UpperBody_U_R::UpperBody_U_R_0' has a wrong offset!");

}

