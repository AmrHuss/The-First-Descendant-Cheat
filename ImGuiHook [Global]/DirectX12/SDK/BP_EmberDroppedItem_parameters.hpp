#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EmberDroppedItem

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "M1_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_EmberDroppedItem.BP_EmberDroppedItem_C.BP_ClientOnGround
// 0x0004 (0x0004 - 0x0000)
struct BP_EmberDroppedItem_C_BP_ClientOnGround final
{
public:
	float                                         InDeltaTime;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EmberDroppedItem_C_BP_ClientOnGround) == 0x000004, "Wrong alignment on BP_EmberDroppedItem_C_BP_ClientOnGround");
static_assert(sizeof(BP_EmberDroppedItem_C_BP_ClientOnGround) == 0x000004, "Wrong size on BP_EmberDroppedItem_C_BP_ClientOnGround");
static_assert(offsetof(BP_EmberDroppedItem_C_BP_ClientOnGround, InDeltaTime) == 0x000000, "Member 'BP_EmberDroppedItem_C_BP_ClientOnGround::InDeltaTime' has a wrong offset!");

// Function BP_EmberDroppedItem.BP_EmberDroppedItem_C.BP_OnSetWhoDroppedThis
// 0x0008 (0x0008 - 0x0000)
struct BP_EmberDroppedItem_C_BP_OnSetWhoDroppedThis final
{
public:
	class AActor*                                 InActor;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EmberDroppedItem_C_BP_OnSetWhoDroppedThis) == 0x000008, "Wrong alignment on BP_EmberDroppedItem_C_BP_OnSetWhoDroppedThis");
static_assert(sizeof(BP_EmberDroppedItem_C_BP_OnSetWhoDroppedThis) == 0x000008, "Wrong size on BP_EmberDroppedItem_C_BP_OnSetWhoDroppedThis");
static_assert(offsetof(BP_EmberDroppedItem_C_BP_OnSetWhoDroppedThis, InActor) == 0x000000, "Member 'BP_EmberDroppedItem_C_BP_OnSetWhoDroppedThis::InActor' has a wrong offset!");

// Function BP_EmberDroppedItem.BP_EmberDroppedItem_C.ExecuteUbergraph_BP_EmberDroppedItem
// 0x01A0 (0x01A0 - 0x0000)
struct BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0008(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_GetOnGroundFxComponent_ReturnValue;       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VInterpTo_ReturnValue;                    // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Vector_IsNearlyZero_ReturnValue;          // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x0058(0x009C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_F4[0x4];                                       // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1AbilityEvent                        K2Node_MakeStruct_M1AbilityEvent;                  // 0x00F8(0x0040)()
	class AActor*                                 K2Node_Event_InActor;                              // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1AbilityEvent                        K2Node_MakeStruct_M1AbilityEvent_1;                // 0x0140(0x0040)()
	class AM1NormalMonster*                       K2Node_DynamicCast_AsM1Normal_Monster;             // 0x0180(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_189[0x7];                                      // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetMaster_ReturnValue;                    // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem) == 0x000008, "Wrong alignment on BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem");
static_assert(sizeof(BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem) == 0x0001A0, "Wrong size on BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem");
static_assert(offsetof(BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem, EntryPoint) == 0x000000, "Member 'BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem, CallFunc_HasAuthority_ReturnValue) == 0x000004, "Member 'BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem, K2Node_Event_InDeltaTime) == 0x000014, "Member 'BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem, CallFunc_GetOnGroundFxComponent_ReturnValue) == 0x000018, "Member 'BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem::CallFunc_GetOnGroundFxComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem, CallFunc_Add_VectorVector_ReturnValue) == 0x000020, "Member 'BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem, CallFunc_IsValid_ReturnValue) == 0x00002C, "Member 'BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000030, "Member 'BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem, CallFunc_VInterpTo_ReturnValue) == 0x00003C, "Member 'BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem::CallFunc_VInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000048, "Member 'BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem, CallFunc_Vector_IsNearlyZero_ReturnValue) == 0x000054, "Member 'BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem::CallFunc_Vector_IsNearlyZero_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000058, "Member 'BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem, K2Node_MakeStruct_M1AbilityEvent) == 0x0000F8, "Member 'BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem::K2Node_MakeStruct_M1AbilityEvent' has a wrong offset!");
static_assert(offsetof(BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem, K2Node_Event_InActor) == 0x000138, "Member 'BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem::K2Node_Event_InActor' has a wrong offset!");
static_assert(offsetof(BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem, K2Node_MakeStruct_M1AbilityEvent_1) == 0x000140, "Member 'BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem::K2Node_MakeStruct_M1AbilityEvent_1' has a wrong offset!");
static_assert(offsetof(BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem, K2Node_DynamicCast_AsM1Normal_Monster) == 0x000180, "Member 'BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem::K2Node_DynamicCast_AsM1Normal_Monster' has a wrong offset!");
static_assert(offsetof(BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem, K2Node_DynamicCast_bSuccess) == 0x000188, "Member 'BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem, CallFunc_GetMaster_ReturnValue) == 0x000190, "Member 'BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem::CallFunc_GetMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem, CallFunc_IsValid_ReturnValue_1) == 0x000198, "Member 'BP_EmberDroppedItem_C_ExecuteUbergraph_BP_EmberDroppedItem::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BP_EmberDroppedItem.BP_EmberDroppedItem_C.CanHideEffectsForPerformanceGain
// 0x0001 (0x0001 - 0x0000)
struct BP_EmberDroppedItem_C_CanHideEffectsForPerformanceGain final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EmberDroppedItem_C_CanHideEffectsForPerformanceGain) == 0x000001, "Wrong alignment on BP_EmberDroppedItem_C_CanHideEffectsForPerformanceGain");
static_assert(sizeof(BP_EmberDroppedItem_C_CanHideEffectsForPerformanceGain) == 0x000001, "Wrong size on BP_EmberDroppedItem_C_CanHideEffectsForPerformanceGain");
static_assert(offsetof(BP_EmberDroppedItem_C_CanHideEffectsForPerformanceGain, ReturnValue) == 0x000000, "Member 'BP_EmberDroppedItem_C_CanHideEffectsForPerformanceGain::ReturnValue' has a wrong offset!");

}
