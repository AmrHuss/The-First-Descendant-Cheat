#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SE_SplineAOEHandlerBase

#include "Basic.hpp"

#include "M1Data_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "M1_structs.hpp"


namespace SDK::Params
{

// Function SE_SplineAOEHandlerBase.SE_SplineAOEHandlerBase_C.ExecuteUbergraph_SE_SplineAOEHandlerBase
// 0x0190 (0x0190 - 0x0000)
struct SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidTags_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetOwnerLocation_ReturnValue;             // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FM1AbilityTargetInfoHandle             CallFunc_MakeTargetInfoFromActor_ReturnValue;      // 0x0038(0x0020)()
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           Temp_name_Variable;                                // 0x0068(0x0010)(ConstParm, ReferenceParm)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_84[0xC];                                       // 0x0084(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0090(0x0030)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bCancelled;                           // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C2[0x6];                                       // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UNiagaraComponent*>              CallFunc_SpawnFXsForAbility_ReturnValue;           // 0x00C8(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<struct FM1TaggedAbilityParamData>      Temp_struct_Variable;                              // 0x00D8(0x0010)(ConstParm, ReferenceParm)
	struct FM1AbilityContextHandle                CallFunc_BP_MakeForwardingContext_ReturnValue;     // 0x00E8(0x0010)()
	TArray<class UNiagaraComponent*>              CallFunc_SpawnFXsForAbility_ReturnValue_1;         // 0x00F8(0x0010)(ReferenceParm, ContainsInstancedReference)
	struct FM1AbilityContextHandle                CallFunc_AbilityContextSetTargetInfo_ReturnValue;  // 0x0108(0x0010)()
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_119[0x7];                                      // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_Array_Get_Item;                           // 0x0120(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsActive_ReturnValue;                     // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12A[0x2];                                      // 0x012A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_131[0x7];                                      // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1FXParam                             K2Node_MakeStruct_M1FXParam;                       // 0x0138(0x0030)()
	TArray<class UNiagaraComponent*>              CallFunc_SpawnFXsForAbility_ReturnValue_2;         // 0x0168(0x0010)(ReferenceParm, ContainsInstancedReference)
	class AM1AbilityActor*                        CallFunc_SpawnFirstAbilityActorByTag_ReturnValue;  // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASplineAOEBase_C*                       K2Node_DynamicCast_AsSpline_AOEBase;               // 0x0180(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase) == 0x000010, "Wrong alignment on SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase");
static_assert(sizeof(SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase) == 0x000190, "Wrong size on SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase");
static_assert(offsetof(SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase, EntryPoint) == 0x000000, "Member 'SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase, CallFunc_IsValidTags_ReturnValue) == 0x000004, "Member 'SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase::CallFunc_IsValidTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase, Temp_int_Array_Index_Variable) == 0x000008, "Member 'SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase, CallFunc_IsDedicatedServer_ReturnValue) == 0x000010, "Member 'SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase, CallFunc_GetOwnerActor_ReturnValue) == 0x000018, "Member 'SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase::CallFunc_GetOwnerActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase, CallFunc_GetOwnerLocation_ReturnValue) == 0x000020, "Member 'SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase::CallFunc_GetOwnerLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase, CallFunc_K2_GetActorRotation_ReturnValue) == 0x00002C, "Member 'SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase, CallFunc_MakeTargetInfoFromActor_ReturnValue) == 0x000038, "Member 'SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase::CallFunc_MakeTargetInfoFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase, CallFunc_BreakRotator_Roll) == 0x000058, "Member 'SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase, CallFunc_BreakRotator_Pitch) == 0x00005C, "Member 'SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase, CallFunc_BreakRotator_Yaw) == 0x000060, "Member 'SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase, Temp_name_Variable) == 0x000068, "Member 'SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase, CallFunc_MakeRotator_ReturnValue) == 0x000078, "Member 'SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase, CallFunc_MakeTransform_ReturnValue) == 0x000090, "Member 'SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase, K2Node_Event_bCancelled) == 0x0000C0, "Member 'SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase::K2Node_Event_bCancelled' has a wrong offset!");
static_assert(offsetof(SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase, CallFunc_IsValid_ReturnValue) == 0x0000C1, "Member 'SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase, CallFunc_SpawnFXsForAbility_ReturnValue) == 0x0000C8, "Member 'SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase::CallFunc_SpawnFXsForAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase, Temp_struct_Variable) == 0x0000D8, "Member 'SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase, CallFunc_BP_MakeForwardingContext_ReturnValue) == 0x0000E8, "Member 'SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase::CallFunc_BP_MakeForwardingContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase, CallFunc_SpawnFXsForAbility_ReturnValue_1) == 0x0000F8, "Member 'SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase::CallFunc_SpawnFXsForAbility_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase, CallFunc_AbilityContextSetTargetInfo_ReturnValue) == 0x000108, "Member 'SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase::CallFunc_AbilityContextSetTargetInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x000118, "Member 'SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase, CallFunc_Array_Get_Item) == 0x000120, "Member 'SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase, CallFunc_IsValid_ReturnValue_1) == 0x000128, "Member 'SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase, CallFunc_IsActive_ReturnValue) == 0x000129, "Member 'SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase::CallFunc_IsActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase, CallFunc_Array_Length_ReturnValue) == 0x00012C, "Member 'SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase, CallFunc_Less_IntInt_ReturnValue) == 0x000130, "Member 'SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase, K2Node_MakeStruct_M1FXParam) == 0x000138, "Member 'SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase::K2Node_MakeStruct_M1FXParam' has a wrong offset!");
static_assert(offsetof(SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase, CallFunc_SpawnFXsForAbility_ReturnValue_2) == 0x000168, "Member 'SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase::CallFunc_SpawnFXsForAbility_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase, CallFunc_SpawnFirstAbilityActorByTag_ReturnValue) == 0x000178, "Member 'SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase::CallFunc_SpawnFirstAbilityActorByTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase, K2Node_DynamicCast_AsSpline_AOEBase) == 0x000180, "Member 'SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase::K2Node_DynamicCast_AsSpline_AOEBase' has a wrong offset!");
static_assert(offsetof(SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase, K2Node_DynamicCast_bSuccess) == 0x000188, "Member 'SE_SplineAOEHandlerBase_C_ExecuteUbergraph_SE_SplineAOEHandlerBase::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function SE_SplineAOEHandlerBase.SE_SplineAOEHandlerBase_C.BP_OnDeactivated
// 0x0001 (0x0001 - 0x0000)
struct SE_SplineAOEHandlerBase_C_BP_OnDeactivated final
{
public:
	bool                                          bCancelled;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SE_SplineAOEHandlerBase_C_BP_OnDeactivated) == 0x000001, "Wrong alignment on SE_SplineAOEHandlerBase_C_BP_OnDeactivated");
static_assert(sizeof(SE_SplineAOEHandlerBase_C_BP_OnDeactivated) == 0x000001, "Wrong size on SE_SplineAOEHandlerBase_C_BP_OnDeactivated");
static_assert(offsetof(SE_SplineAOEHandlerBase_C_BP_OnDeactivated, bCancelled) == 0x000000, "Member 'SE_SplineAOEHandlerBase_C_BP_OnDeactivated::bCancelled' has a wrong offset!");

}
