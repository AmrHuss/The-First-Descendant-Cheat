#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_NPC_Facial

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AnimBP_NPC_Facial.AnimBP_NPC_Facial_C.ExecuteUbergraph_AnimBP_NPC_Facial
// 0x0004 (0x0004 - 0x0000)
struct AnimBP_NPC_Facial_C_ExecuteUbergraph_AnimBP_NPC_Facial final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AnimBP_NPC_Facial_C_ExecuteUbergraph_AnimBP_NPC_Facial) == 0x000004, "Wrong alignment on AnimBP_NPC_Facial_C_ExecuteUbergraph_AnimBP_NPC_Facial");
static_assert(sizeof(AnimBP_NPC_Facial_C_ExecuteUbergraph_AnimBP_NPC_Facial) == 0x000004, "Wrong size on AnimBP_NPC_Facial_C_ExecuteUbergraph_AnimBP_NPC_Facial");
static_assert(offsetof(AnimBP_NPC_Facial_C_ExecuteUbergraph_AnimBP_NPC_Facial, EntryPoint) == 0x000000, "Member 'AnimBP_NPC_Facial_C_ExecuteUbergraph_AnimBP_NPC_Facial::EntryPoint' has a wrong offset!");

// Function AnimBP_NPC_Facial.AnimBP_NPC_Facial_C.AnimGraph
// 0x0020 (0x0020 - 0x0000)
struct AnimBP_NPC_Facial_C_AnimGraph final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              AnimGraph_0;                                       // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(AnimBP_NPC_Facial_C_AnimGraph) == 0x000008, "Wrong alignment on AnimBP_NPC_Facial_C_AnimGraph");
static_assert(sizeof(AnimBP_NPC_Facial_C_AnimGraph) == 0x000020, "Wrong size on AnimBP_NPC_Facial_C_AnimGraph");
static_assert(offsetof(AnimBP_NPC_Facial_C_AnimGraph, InPose) == 0x000000, "Member 'AnimBP_NPC_Facial_C_AnimGraph::InPose' has a wrong offset!");
static_assert(offsetof(AnimBP_NPC_Facial_C_AnimGraph, AnimGraph_0) == 0x000010, "Member 'AnimBP_NPC_Facial_C_AnimGraph::AnimGraph_0' has a wrong offset!");

}

