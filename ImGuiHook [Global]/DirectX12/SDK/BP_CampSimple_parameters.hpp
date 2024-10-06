#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CampSimple

#include "Basic.hpp"

#include "M1_structs.hpp"


namespace SDK::Params
{

// Function BP_CampSimple.BP_CampSimple_C.SetCampState
// 0x0028 (0x0028 - 0x0000)
struct BP_CampSimple_C_SetCampState final
{
public:
	class USkeletalMeshComponent*                 InMesh;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsNewlyActivated;                                 // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UM1CampAnimInstance*                    K2Node_DynamicCast_AsM1Camp_Anim_Instance;         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampSimple_C_SetCampState) == 0x000008, "Wrong alignment on BP_CampSimple_C_SetCampState");
static_assert(sizeof(BP_CampSimple_C_SetCampState) == 0x000028, "Wrong size on BP_CampSimple_C_SetCampState");
static_assert(offsetof(BP_CampSimple_C_SetCampState, InMesh) == 0x000000, "Member 'BP_CampSimple_C_SetCampState::InMesh' has a wrong offset!");
static_assert(offsetof(BP_CampSimple_C_SetCampState, bIsNewlyActivated) == 0x000008, "Member 'BP_CampSimple_C_SetCampState::bIsNewlyActivated' has a wrong offset!");
static_assert(offsetof(BP_CampSimple_C_SetCampState, CallFunc_GetAnimInstance_ReturnValue) == 0x000010, "Member 'BP_CampSimple_C_SetCampState::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampSimple_C_SetCampState, K2Node_DynamicCast_AsM1Camp_Anim_Instance) == 0x000018, "Member 'BP_CampSimple_C_SetCampState::K2Node_DynamicCast_AsM1Camp_Anim_Instance' has a wrong offset!");
static_assert(offsetof(BP_CampSimple_C_SetCampState, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_CampSimple_C_SetCampState::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_CampSimple.BP_CampSimple_C.PlayCampAnimation
// 0x0030 (0x0030 - 0x0000)
struct BP_CampSimple_C_PlayCampAnimation final
{
public:
	bool                                          bIsNewlyActivated;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EValidOutputPin                               CallFunc_FindAkComponentWithValid_OutputPins;      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1AkComponent*                         CallFunc_FindAkComponentWithValid_ReturnValue;     // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampSimple_C_PlayCampAnimation) == 0x000008, "Wrong alignment on BP_CampSimple_C_PlayCampAnimation");
static_assert(sizeof(BP_CampSimple_C_PlayCampAnimation) == 0x000030, "Wrong size on BP_CampSimple_C_PlayCampAnimation");
static_assert(offsetof(BP_CampSimple_C_PlayCampAnimation, bIsNewlyActivated) == 0x000000, "Member 'BP_CampSimple_C_PlayCampAnimation::bIsNewlyActivated' has a wrong offset!");
static_assert(offsetof(BP_CampSimple_C_PlayCampAnimation, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000008, "Member 'BP_CampSimple_C_PlayCampAnimation::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampSimple_C_PlayCampAnimation, CallFunc_K2_GetPawn_ReturnValue) == 0x000010, "Member 'BP_CampSimple_C_PlayCampAnimation::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampSimple_C_PlayCampAnimation, CallFunc_FindAkComponentWithValid_OutputPins) == 0x000018, "Member 'BP_CampSimple_C_PlayCampAnimation::CallFunc_FindAkComponentWithValid_OutputPins' has a wrong offset!");
static_assert(offsetof(BP_CampSimple_C_PlayCampAnimation, CallFunc_FindAkComponentWithValid_ReturnValue) == 0x000020, "Member 'BP_CampSimple_C_PlayCampAnimation::CallFunc_FindAkComponentWithValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampSimple_C_PlayCampAnimation, K2Node_SwitchEnum_CmpSuccess) == 0x000028, "Member 'BP_CampSimple_C_PlayCampAnimation::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}
