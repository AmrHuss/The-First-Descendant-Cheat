#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MissionTargetBase

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_MissionTargetBase.BP_MissionTargetBase_C.BP_GetPushAwayCollsionRadius
// 0x0008 (0x0008 - 0x0000)
struct BP_MissionTargetBase_C_BP_GetPushAwayCollsionRadius final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScaledCapsuleRadius_ReturnValue;       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MissionTargetBase_C_BP_GetPushAwayCollsionRadius) == 0x000004, "Wrong alignment on BP_MissionTargetBase_C_BP_GetPushAwayCollsionRadius");
static_assert(sizeof(BP_MissionTargetBase_C_BP_GetPushAwayCollsionRadius) == 0x000008, "Wrong size on BP_MissionTargetBase_C_BP_GetPushAwayCollsionRadius");
static_assert(offsetof(BP_MissionTargetBase_C_BP_GetPushAwayCollsionRadius, ReturnValue) == 0x000000, "Member 'BP_MissionTargetBase_C_BP_GetPushAwayCollsionRadius::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MissionTargetBase_C_BP_GetPushAwayCollsionRadius, CallFunc_GetScaledCapsuleRadius_ReturnValue) == 0x000004, "Member 'BP_MissionTargetBase_C_BP_GetPushAwayCollsionRadius::CallFunc_GetScaledCapsuleRadius_ReturnValue' has a wrong offset!");

}

