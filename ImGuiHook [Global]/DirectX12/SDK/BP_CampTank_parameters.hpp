#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CampTank

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_structs.hpp"


namespace SDK::Params
{

// Function BP_CampTank.BP_CampTank_C.UserConstructionScript
// 0x0218 (0x0218 - 0x0000)
struct BP_CampTank_C_UserConstructionScript final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicsAsset*                          Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPhysicsAsset*                          Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicsAsset*                          Temp_object_Variable_2;                            // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPhysicsAsset*                          Temp_object_Variable_3;                            // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0030(0x009C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicsAsset*                          K2Node_Select_Default;                             // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPhysicsAsset*                          K2Node_Select_Default_1;                           // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult_1;  // 0x00E0(0x009C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult_2;  // 0x017C(0x009C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_CampTank_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_CampTank_C_UserConstructionScript");
static_assert(sizeof(BP_CampTank_C_UserConstructionScript) == 0x000218, "Wrong size on BP_CampTank_C_UserConstructionScript");
static_assert(offsetof(BP_CampTank_C_UserConstructionScript, Temp_bool_Variable) == 0x000000, "Member 'BP_CampTank_C_UserConstructionScript::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_CampTank_C_UserConstructionScript, Temp_object_Variable) == 0x000008, "Member 'BP_CampTank_C_UserConstructionScript::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_CampTank_C_UserConstructionScript, Temp_object_Variable_1) == 0x000010, "Member 'BP_CampTank_C_UserConstructionScript::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_CampTank_C_UserConstructionScript, Temp_bool_Variable_1) == 0x000018, "Member 'BP_CampTank_C_UserConstructionScript::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_CampTank_C_UserConstructionScript, Temp_object_Variable_2) == 0x000020, "Member 'BP_CampTank_C_UserConstructionScript::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_CampTank_C_UserConstructionScript, Temp_object_Variable_3) == 0x000028, "Member 'BP_CampTank_C_UserConstructionScript::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_CampTank_C_UserConstructionScript, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000030, "Member 'BP_CampTank_C_UserConstructionScript::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_CampTank_C_UserConstructionScript, K2Node_Select_Default) == 0x0000D0, "Member 'BP_CampTank_C_UserConstructionScript::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_CampTank_C_UserConstructionScript, K2Node_Select_Default_1) == 0x0000D8, "Member 'BP_CampTank_C_UserConstructionScript::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_CampTank_C_UserConstructionScript, CallFunc_K2_SetRelativeRotation_SweepHitResult_1) == 0x0000E0, "Member 'BP_CampTank_C_UserConstructionScript::CallFunc_K2_SetRelativeRotation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_CampTank_C_UserConstructionScript, CallFunc_K2_SetRelativeRotation_SweepHitResult_2) == 0x00017C, "Member 'BP_CampTank_C_UserConstructionScript::CallFunc_K2_SetRelativeRotation_SweepHitResult_2' has a wrong offset!");

// Function BP_CampTank.BP_CampTank_C.SetCampState
// 0x0028 (0x0028 - 0x0000)
struct BP_CampTank_C_SetCampState final
{
public:
	class USkeletalMeshComponent*                 InMesh;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsNewlyActivated;                                 // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UM1CampAnimInstance*                    K2Node_DynamicCast_AsM1Camp_Anim_Instance;         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampTank_C_SetCampState) == 0x000008, "Wrong alignment on BP_CampTank_C_SetCampState");
static_assert(sizeof(BP_CampTank_C_SetCampState) == 0x000028, "Wrong size on BP_CampTank_C_SetCampState");
static_assert(offsetof(BP_CampTank_C_SetCampState, InMesh) == 0x000000, "Member 'BP_CampTank_C_SetCampState::InMesh' has a wrong offset!");
static_assert(offsetof(BP_CampTank_C_SetCampState, bIsNewlyActivated) == 0x000008, "Member 'BP_CampTank_C_SetCampState::bIsNewlyActivated' has a wrong offset!");
static_assert(offsetof(BP_CampTank_C_SetCampState, CallFunc_GetAnimInstance_ReturnValue) == 0x000010, "Member 'BP_CampTank_C_SetCampState::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampTank_C_SetCampState, K2Node_DynamicCast_AsM1Camp_Anim_Instance) == 0x000018, "Member 'BP_CampTank_C_SetCampState::K2Node_DynamicCast_AsM1Camp_Anim_Instance' has a wrong offset!");
static_assert(offsetof(BP_CampTank_C_SetCampState, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_CampTank_C_SetCampState::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_CampTank.BP_CampTank_C.SetCampAnimation
// 0x0060 (0x0060 - 0x0000)
struct BP_CampTank_C_SetCampAnimation final
{
public:
	class USkeletalMeshComponent*                 InMesh;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UM1CampAnimInstance*                    K2Node_DynamicCast_AsM1Camp_Anim_Instance;         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequence*                          Temp_object_Variable_1;                            // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequence*                          Temp_object_Variable_2;                            // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          Temp_object_Variable_3;                            // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequence*                          K2Node_Select_Default;                             // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          K2Node_Select_Default_1;                           // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampTank_C_SetCampAnimation) == 0x000008, "Wrong alignment on BP_CampTank_C_SetCampAnimation");
static_assert(sizeof(BP_CampTank_C_SetCampAnimation) == 0x000060, "Wrong size on BP_CampTank_C_SetCampAnimation");
static_assert(offsetof(BP_CampTank_C_SetCampAnimation, InMesh) == 0x000000, "Member 'BP_CampTank_C_SetCampAnimation::InMesh' has a wrong offset!");
static_assert(offsetof(BP_CampTank_C_SetCampAnimation, Temp_object_Variable) == 0x000008, "Member 'BP_CampTank_C_SetCampAnimation::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_CampTank_C_SetCampAnimation, CallFunc_GetAnimInstance_ReturnValue) == 0x000010, "Member 'BP_CampTank_C_SetCampAnimation::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampTank_C_SetCampAnimation, K2Node_DynamicCast_AsM1Camp_Anim_Instance) == 0x000018, "Member 'BP_CampTank_C_SetCampAnimation::K2Node_DynamicCast_AsM1Camp_Anim_Instance' has a wrong offset!");
static_assert(offsetof(BP_CampTank_C_SetCampAnimation, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_CampTank_C_SetCampAnimation::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_CampTank_C_SetCampAnimation, Temp_object_Variable_1) == 0x000028, "Member 'BP_CampTank_C_SetCampAnimation::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_CampTank_C_SetCampAnimation, Temp_bool_Variable) == 0x000030, "Member 'BP_CampTank_C_SetCampAnimation::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_CampTank_C_SetCampAnimation, Temp_object_Variable_2) == 0x000038, "Member 'BP_CampTank_C_SetCampAnimation::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_CampTank_C_SetCampAnimation, Temp_object_Variable_3) == 0x000040, "Member 'BP_CampTank_C_SetCampAnimation::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_CampTank_C_SetCampAnimation, Temp_bool_Variable_1) == 0x000048, "Member 'BP_CampTank_C_SetCampAnimation::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_CampTank_C_SetCampAnimation, K2Node_Select_Default) == 0x000050, "Member 'BP_CampTank_C_SetCampAnimation::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_CampTank_C_SetCampAnimation, K2Node_Select_Default_1) == 0x000058, "Member 'BP_CampTank_C_SetCampAnimation::K2Node_Select_Default_1' has a wrong offset!");

// Function BP_CampTank.BP_CampTank_C.PlayCampAnimation
// 0x0030 (0x0030 - 0x0000)
struct BP_CampTank_C_PlayCampAnimation final
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
static_assert(alignof(BP_CampTank_C_PlayCampAnimation) == 0x000008, "Wrong alignment on BP_CampTank_C_PlayCampAnimation");
static_assert(sizeof(BP_CampTank_C_PlayCampAnimation) == 0x000030, "Wrong size on BP_CampTank_C_PlayCampAnimation");
static_assert(offsetof(BP_CampTank_C_PlayCampAnimation, bIsNewlyActivated) == 0x000000, "Member 'BP_CampTank_C_PlayCampAnimation::bIsNewlyActivated' has a wrong offset!");
static_assert(offsetof(BP_CampTank_C_PlayCampAnimation, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000008, "Member 'BP_CampTank_C_PlayCampAnimation::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampTank_C_PlayCampAnimation, CallFunc_K2_GetPawn_ReturnValue) == 0x000010, "Member 'BP_CampTank_C_PlayCampAnimation::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampTank_C_PlayCampAnimation, CallFunc_FindAkComponentWithValid_OutputPins) == 0x000018, "Member 'BP_CampTank_C_PlayCampAnimation::CallFunc_FindAkComponentWithValid_OutputPins' has a wrong offset!");
static_assert(offsetof(BP_CampTank_C_PlayCampAnimation, CallFunc_FindAkComponentWithValid_ReturnValue) == 0x000020, "Member 'BP_CampTank_C_PlayCampAnimation::CallFunc_FindAkComponentWithValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampTank_C_PlayCampAnimation, K2Node_SwitchEnum_CmpSuccess) == 0x000028, "Member 'BP_CampTank_C_PlayCampAnimation::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BP_CampTank.BP_CampTank_C.ExecuteUbergraph_BP_CampTank
// 0x0004 (0x0004 - 0x0000)
struct BP_CampTank_C_ExecuteUbergraph_BP_CampTank final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampTank_C_ExecuteUbergraph_BP_CampTank) == 0x000004, "Wrong alignment on BP_CampTank_C_ExecuteUbergraph_BP_CampTank");
static_assert(sizeof(BP_CampTank_C_ExecuteUbergraph_BP_CampTank) == 0x000004, "Wrong size on BP_CampTank_C_ExecuteUbergraph_BP_CampTank");
static_assert(offsetof(BP_CampTank_C_ExecuteUbergraph_BP_CampTank, EntryPoint) == 0x000000, "Member 'BP_CampTank_C_ExecuteUbergraph_BP_CampTank::EntryPoint' has a wrong offset!");

}

