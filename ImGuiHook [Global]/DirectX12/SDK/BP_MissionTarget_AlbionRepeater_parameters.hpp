#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MissionTarget_AlbionRepeater

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_MissionTarget_AlbionRepeater.BP_MissionTarget_AlbionRepeater_C.BP_GetPushAwayCollsionRadius
// 0x0008 (0x0008 - 0x0000)
struct BP_MissionTarget_AlbionRepeater_C_BP_GetPushAwayCollsionRadius final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScaledCapsuleRadius_ReturnValue;       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MissionTarget_AlbionRepeater_C_BP_GetPushAwayCollsionRadius) == 0x000004, "Wrong alignment on BP_MissionTarget_AlbionRepeater_C_BP_GetPushAwayCollsionRadius");
static_assert(sizeof(BP_MissionTarget_AlbionRepeater_C_BP_GetPushAwayCollsionRadius) == 0x000008, "Wrong size on BP_MissionTarget_AlbionRepeater_C_BP_GetPushAwayCollsionRadius");
static_assert(offsetof(BP_MissionTarget_AlbionRepeater_C_BP_GetPushAwayCollsionRadius, ReturnValue) == 0x000000, "Member 'BP_MissionTarget_AlbionRepeater_C_BP_GetPushAwayCollsionRadius::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MissionTarget_AlbionRepeater_C_BP_GetPushAwayCollsionRadius, CallFunc_GetScaledCapsuleRadius_ReturnValue) == 0x000004, "Member 'BP_MissionTarget_AlbionRepeater_C_BP_GetPushAwayCollsionRadius::CallFunc_GetScaledCapsuleRadius_ReturnValue' has a wrong offset!");

// Function BP_MissionTarget_AlbionRepeater.BP_MissionTarget_AlbionRepeater_C.GetTargetPointOffset
// 0x000C (0x000C - 0x0000)
struct BP_MissionTarget_AlbionRepeater_C_GetTargetPointOffset final
{
public:
	struct FVector                                ReturnValue;                                       // 0x0000(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MissionTarget_AlbionRepeater_C_GetTargetPointOffset) == 0x000004, "Wrong alignment on BP_MissionTarget_AlbionRepeater_C_GetTargetPointOffset");
static_assert(sizeof(BP_MissionTarget_AlbionRepeater_C_GetTargetPointOffset) == 0x00000C, "Wrong size on BP_MissionTarget_AlbionRepeater_C_GetTargetPointOffset");
static_assert(offsetof(BP_MissionTarget_AlbionRepeater_C_GetTargetPointOffset, ReturnValue) == 0x000000, "Member 'BP_MissionTarget_AlbionRepeater_C_GetTargetPointOffset::ReturnValue' has a wrong offset!");

}

