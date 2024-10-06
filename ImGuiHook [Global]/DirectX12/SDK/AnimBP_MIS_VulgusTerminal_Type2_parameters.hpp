#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_MIS_VulgusTerminal_Type2

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AnimBP_MIS_VulgusTerminal_Type2.AnimBP_MIS_VulgusTerminal_Type2_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct AnimBP_MIS_VulgusTerminal_Type2_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(AnimBP_MIS_VulgusTerminal_Type2_C_AnimGraph) == 0x000008, "Wrong alignment on AnimBP_MIS_VulgusTerminal_Type2_C_AnimGraph");
static_assert(sizeof(AnimBP_MIS_VulgusTerminal_Type2_C_AnimGraph) == 0x000010, "Wrong size on AnimBP_MIS_VulgusTerminal_Type2_C_AnimGraph");
static_assert(offsetof(AnimBP_MIS_VulgusTerminal_Type2_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'AnimBP_MIS_VulgusTerminal_Type2_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function AnimBP_MIS_VulgusTerminal_Type2.AnimBP_MIS_VulgusTerminal_Type2_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct AnimBP_MIS_VulgusTerminal_Type2_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AnimBP_MIS_VulgusTerminal_Type2_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on AnimBP_MIS_VulgusTerminal_Type2_C_BlueprintUpdateAnimation");
static_assert(sizeof(AnimBP_MIS_VulgusTerminal_Type2_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on AnimBP_MIS_VulgusTerminal_Type2_C_BlueprintUpdateAnimation");
static_assert(offsetof(AnimBP_MIS_VulgusTerminal_Type2_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'AnimBP_MIS_VulgusTerminal_Type2_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function AnimBP_MIS_VulgusTerminal_Type2.AnimBP_MIS_VulgusTerminal_Type2_C.ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2
// 0x0050 (0x0050 - 0x0000)
struct AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetRelevantAnimTimeRemaining_ReturnValue; // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E[0x2];                                        // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AM1MissionOccupationActor*              K2Node_DynamicCast_AsM1Mission_Occupation_Actor;   // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1MissionTaskOccupationState                 CallFunc_GetOccupationState_ReturnValue;           // 0x0029(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAttachParentActor_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AM1MissionSubTaskActor*                 K2Node_DynamicCast_AsM1Mission_Sub_Task_Actor;     // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1EventActorState                            CallFunc_GetActorState_ReturnValue;                // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43[0x5];                                       // 0x0043(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2) == 0x000008, "Wrong alignment on AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2");
static_assert(sizeof(AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2) == 0x000050, "Wrong size on AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2");
static_assert(offsetof(AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2, EntryPoint) == 0x000000, "Member 'AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2::EntryPoint' has a wrong offset!");
static_assert(offsetof(AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000004, "Member 'AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000005, "Member 'AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000006, "Member 'AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2, CallFunc_GetRelevantAnimTimeRemaining_ReturnValue) == 0x000008, "Member 'AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2::CallFunc_GetRelevantAnimTimeRemaining_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x00000C, "Member 'AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x00000D, "Member 'AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2, K2Node_Event_DeltaTimeX) == 0x000010, "Member 'AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2, CallFunc_GetOwningActor_ReturnValue) == 0x000018, "Member 'AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2, K2Node_DynamicCast_AsM1Mission_Occupation_Actor) == 0x000020, "Member 'AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2::K2Node_DynamicCast_AsM1Mission_Occupation_Actor' has a wrong offset!");
static_assert(offsetof(AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2, CallFunc_GetOccupationState_ReturnValue) == 0x000029, "Member 'AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2::CallFunc_GetOccupationState_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2, CallFunc_GetAttachParentActor_ReturnValue) == 0x000030, "Member 'AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2::CallFunc_GetAttachParentActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2, K2Node_DynamicCast_AsM1Mission_Sub_Task_Actor) == 0x000038, "Member 'AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2::K2Node_DynamicCast_AsM1Mission_Sub_Task_Actor' has a wrong offset!");
static_assert(offsetof(AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2, CallFunc_GetActorState_ReturnValue) == 0x000041, "Member 'AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2::CallFunc_GetActorState_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2, K2Node_SwitchEnum_CmpSuccess) == 0x000042, "Member 'AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast) == 0x000048, "Member 'AnimBP_MIS_VulgusTerminal_Type2_C_ExecuteUbergraph_AnimBP_MIS_VulgusTerminal_Type2::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");

}

