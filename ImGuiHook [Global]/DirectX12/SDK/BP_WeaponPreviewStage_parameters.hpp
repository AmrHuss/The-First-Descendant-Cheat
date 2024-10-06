#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WeaponPreviewStage

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_WeaponPreviewStage.BP_WeaponPreviewStage_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_WeaponPreviewStage_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WeaponPreviewStage_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_WeaponPreviewStage_C_ReceiveTick");
static_assert(sizeof(BP_WeaponPreviewStage_C_ReceiveTick) == 0x000004, "Wrong size on BP_WeaponPreviewStage_C_ReceiveTick");
static_assert(offsetof(BP_WeaponPreviewStage_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_WeaponPreviewStage_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_WeaponPreviewStage.BP_WeaponPreviewStage_C.ExecuteUbergraph_BP_WeaponPreviewStage
// 0x0008 (0x0008 - 0x0000)
struct BP_WeaponPreviewStage_C_ExecuteUbergraph_BP_WeaponPreviewStage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WeaponPreviewStage_C_ExecuteUbergraph_BP_WeaponPreviewStage) == 0x000004, "Wrong alignment on BP_WeaponPreviewStage_C_ExecuteUbergraph_BP_WeaponPreviewStage");
static_assert(sizeof(BP_WeaponPreviewStage_C_ExecuteUbergraph_BP_WeaponPreviewStage) == 0x000008, "Wrong size on BP_WeaponPreviewStage_C_ExecuteUbergraph_BP_WeaponPreviewStage");
static_assert(offsetof(BP_WeaponPreviewStage_C_ExecuteUbergraph_BP_WeaponPreviewStage, EntryPoint) == 0x000000, "Member 'BP_WeaponPreviewStage_C_ExecuteUbergraph_BP_WeaponPreviewStage::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_WeaponPreviewStage_C_ExecuteUbergraph_BP_WeaponPreviewStage, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BP_WeaponPreviewStage_C_ExecuteUbergraph_BP_WeaponPreviewStage::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function BP_WeaponPreviewStage.BP_WeaponPreviewStage_C.BP_GetCameraComponent
// 0x0008 (0x0008 - 0x0000)
struct BP_WeaponPreviewStage_C_BP_GetCameraComponent final
{
public:
	class UCineCameraComponent*                   ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_WeaponPreviewStage_C_BP_GetCameraComponent) == 0x000008, "Wrong alignment on BP_WeaponPreviewStage_C_BP_GetCameraComponent");
static_assert(sizeof(BP_WeaponPreviewStage_C_BP_GetCameraComponent) == 0x000008, "Wrong size on BP_WeaponPreviewStage_C_BP_GetCameraComponent");
static_assert(offsetof(BP_WeaponPreviewStage_C_BP_GetCameraComponent, ReturnValue) == 0x000000, "Member 'BP_WeaponPreviewStage_C_BP_GetCameraComponent::ReturnValue' has a wrong offset!");

}

