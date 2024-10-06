#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_INTER_MilitarySupplies

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AnimBP_INTER_MilitarySupplies.AnimBP_INTER_MilitarySupplies_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct AnimBP_INTER_MilitarySupplies_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(AnimBP_INTER_MilitarySupplies_C_AnimGraph) == 0x000008, "Wrong alignment on AnimBP_INTER_MilitarySupplies_C_AnimGraph");
static_assert(sizeof(AnimBP_INTER_MilitarySupplies_C_AnimGraph) == 0x000010, "Wrong size on AnimBP_INTER_MilitarySupplies_C_AnimGraph");
static_assert(offsetof(AnimBP_INTER_MilitarySupplies_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'AnimBP_INTER_MilitarySupplies_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function AnimBP_INTER_MilitarySupplies.AnimBP_INTER_MilitarySupplies_C.ExecuteUbergraph_AnimBP_INTER_MilitarySupplies
// 0x0004 (0x0004 - 0x0000)
struct AnimBP_INTER_MilitarySupplies_C_ExecuteUbergraph_AnimBP_INTER_MilitarySupplies final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AnimBP_INTER_MilitarySupplies_C_ExecuteUbergraph_AnimBP_INTER_MilitarySupplies) == 0x000004, "Wrong alignment on AnimBP_INTER_MilitarySupplies_C_ExecuteUbergraph_AnimBP_INTER_MilitarySupplies");
static_assert(sizeof(AnimBP_INTER_MilitarySupplies_C_ExecuteUbergraph_AnimBP_INTER_MilitarySupplies) == 0x000004, "Wrong size on AnimBP_INTER_MilitarySupplies_C_ExecuteUbergraph_AnimBP_INTER_MilitarySupplies");
static_assert(offsetof(AnimBP_INTER_MilitarySupplies_C_ExecuteUbergraph_AnimBP_INTER_MilitarySupplies, EntryPoint) == 0x000000, "Member 'AnimBP_INTER_MilitarySupplies_C_ExecuteUbergraph_AnimBP_INTER_MilitarySupplies::EntryPoint' has a wrong offset!");

}
