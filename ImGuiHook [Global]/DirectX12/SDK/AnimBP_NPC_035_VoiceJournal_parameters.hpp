#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_NPC_035_VoiceJournal

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AnimBP_NPC_035_VoiceJournal.AnimBP_NPC_035_VoiceJournal_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct AnimBP_NPC_035_VoiceJournal_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(AnimBP_NPC_035_VoiceJournal_C_AnimGraph) == 0x000008, "Wrong alignment on AnimBP_NPC_035_VoiceJournal_C_AnimGraph");
static_assert(sizeof(AnimBP_NPC_035_VoiceJournal_C_AnimGraph) == 0x000010, "Wrong size on AnimBP_NPC_035_VoiceJournal_C_AnimGraph");
static_assert(offsetof(AnimBP_NPC_035_VoiceJournal_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'AnimBP_NPC_035_VoiceJournal_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function AnimBP_NPC_035_VoiceJournal.AnimBP_NPC_035_VoiceJournal_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct AnimBP_NPC_035_VoiceJournal_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AnimBP_NPC_035_VoiceJournal_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on AnimBP_NPC_035_VoiceJournal_C_BlueprintUpdateAnimation");
static_assert(sizeof(AnimBP_NPC_035_VoiceJournal_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on AnimBP_NPC_035_VoiceJournal_C_BlueprintUpdateAnimation");
static_assert(offsetof(AnimBP_NPC_035_VoiceJournal_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'AnimBP_NPC_035_VoiceJournal_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function AnimBP_NPC_035_VoiceJournal.AnimBP_NPC_035_VoiceJournal_C.ExecuteUbergraph_AnimBP_NPC_035_VoiceJournal
// 0x0020 (0x0020 - 0x0000)
struct AnimBP_NPC_035_VoiceJournal_C_ExecuteUbergraph_AnimBP_NPC_035_VoiceJournal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x2];                                        // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetRelevantAnimTimeRemaining_ReturnValue; // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AnimBP_NPC_035_VoiceJournal_C_ExecuteUbergraph_AnimBP_NPC_035_VoiceJournal) == 0x000008, "Wrong alignment on AnimBP_NPC_035_VoiceJournal_C_ExecuteUbergraph_AnimBP_NPC_035_VoiceJournal");
static_assert(sizeof(AnimBP_NPC_035_VoiceJournal_C_ExecuteUbergraph_AnimBP_NPC_035_VoiceJournal) == 0x000020, "Wrong size on AnimBP_NPC_035_VoiceJournal_C_ExecuteUbergraph_AnimBP_NPC_035_VoiceJournal");
static_assert(offsetof(AnimBP_NPC_035_VoiceJournal_C_ExecuteUbergraph_AnimBP_NPC_035_VoiceJournal, EntryPoint) == 0x000000, "Member 'AnimBP_NPC_035_VoiceJournal_C_ExecuteUbergraph_AnimBP_NPC_035_VoiceJournal::EntryPoint' has a wrong offset!");
static_assert(offsetof(AnimBP_NPC_035_VoiceJournal_C_ExecuteUbergraph_AnimBP_NPC_035_VoiceJournal, K2Node_Event_DeltaTimeX) == 0x000004, "Member 'AnimBP_NPC_035_VoiceJournal_C_ExecuteUbergraph_AnimBP_NPC_035_VoiceJournal::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(AnimBP_NPC_035_VoiceJournal_C_ExecuteUbergraph_AnimBP_NPC_035_VoiceJournal, CallFunc_Not_PreBool_ReturnValue) == 0x000008, "Member 'AnimBP_NPC_035_VoiceJournal_C_ExecuteUbergraph_AnimBP_NPC_035_VoiceJournal::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimBP_NPC_035_VoiceJournal_C_ExecuteUbergraph_AnimBP_NPC_035_VoiceJournal, CallFunc_BooleanOR_ReturnValue) == 0x000009, "Member 'AnimBP_NPC_035_VoiceJournal_C_ExecuteUbergraph_AnimBP_NPC_035_VoiceJournal::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimBP_NPC_035_VoiceJournal_C_ExecuteUbergraph_AnimBP_NPC_035_VoiceJournal, CallFunc_GetRelevantAnimTimeRemaining_ReturnValue) == 0x00000C, "Member 'AnimBP_NPC_035_VoiceJournal_C_ExecuteUbergraph_AnimBP_NPC_035_VoiceJournal::CallFunc_GetRelevantAnimTimeRemaining_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimBP_NPC_035_VoiceJournal_C_ExecuteUbergraph_AnimBP_NPC_035_VoiceJournal, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000010, "Member 'AnimBP_NPC_035_VoiceJournal_C_ExecuteUbergraph_AnimBP_NPC_035_VoiceJournal::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimBP_NPC_035_VoiceJournal_C_ExecuteUbergraph_AnimBP_NPC_035_VoiceJournal, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast) == 0x000018, "Member 'AnimBP_NPC_035_VoiceJournal_C_ExecuteUbergraph_AnimBP_NPC_035_VoiceJournal::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");

}

