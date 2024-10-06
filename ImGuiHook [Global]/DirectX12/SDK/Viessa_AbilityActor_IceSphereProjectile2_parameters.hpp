#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Viessa_AbilityActor_IceSphereProjectile2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Viessa_AbilityActor_IceSphereProjectile2.Viessa_AbilityActor_IceSphereProjectile2_C.ProcessExplosionToActor
// 0x00A8 (0x00A8 - 0x0000)
struct Viessa_AbilityActor_IceSphereProjectile2_C_ProcessExplosionToActor final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             ExplosionResult;                                   // 0x0008(0x009C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Viessa_AbilityActor_IceSphereProjectile2_C_ProcessExplosionToActor) == 0x000008, "Wrong alignment on Viessa_AbilityActor_IceSphereProjectile2_C_ProcessExplosionToActor");
static_assert(sizeof(Viessa_AbilityActor_IceSphereProjectile2_C_ProcessExplosionToActor) == 0x0000A8, "Wrong size on Viessa_AbilityActor_IceSphereProjectile2_C_ProcessExplosionToActor");
static_assert(offsetof(Viessa_AbilityActor_IceSphereProjectile2_C_ProcessExplosionToActor, OtherActor) == 0x000000, "Member 'Viessa_AbilityActor_IceSphereProjectile2_C_ProcessExplosionToActor::OtherActor' has a wrong offset!");
static_assert(offsetof(Viessa_AbilityActor_IceSphereProjectile2_C_ProcessExplosionToActor, ExplosionResult) == 0x000008, "Member 'Viessa_AbilityActor_IceSphereProjectile2_C_ProcessExplosionToActor::ExplosionResult' has a wrong offset!");

// Function Viessa_AbilityActor_IceSphereProjectile2.Viessa_AbilityActor_IceSphereProjectile2_C.OnEvent_08BF9A30431473309640ECAD956C5228
// 0x0138 (0x0138 - 0x0000)
struct Viessa_AbilityActor_IceSphereProjectile2_C_OnEvent_08BF9A30431473309640ECAD956C5228 final
{
public:
	struct FM1CalcDamageInfo                      DamageInfo;                                        // 0x0000(0x0138)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(Viessa_AbilityActor_IceSphereProjectile2_C_OnEvent_08BF9A30431473309640ECAD956C5228) == 0x000008, "Wrong alignment on Viessa_AbilityActor_IceSphereProjectile2_C_OnEvent_08BF9A30431473309640ECAD956C5228");
static_assert(sizeof(Viessa_AbilityActor_IceSphereProjectile2_C_OnEvent_08BF9A30431473309640ECAD956C5228) == 0x000138, "Wrong size on Viessa_AbilityActor_IceSphereProjectile2_C_OnEvent_08BF9A30431473309640ECAD956C5228");
static_assert(offsetof(Viessa_AbilityActor_IceSphereProjectile2_C_OnEvent_08BF9A30431473309640ECAD956C5228, DamageInfo) == 0x000000, "Member 'Viessa_AbilityActor_IceSphereProjectile2_C_OnEvent_08BF9A30431473309640ECAD956C5228::DamageInfo' has a wrong offset!");

// Function Viessa_AbilityActor_IceSphereProjectile2.Viessa_AbilityActor_IceSphereProjectile2_C.ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2
// 0x04F0 (0x04F0 - 0x0000)
struct Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UM1AbilityAsync_WaitDamageEvent*        CallFunc_WaitGiveDamageEventToActor_ReturnValue;   // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OtherActor_1;                         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_ExplosionResult;                      // 0x0020(0x009C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x00CC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceTerrain_OutHit;                  // 0x00D8(0x009C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceTerrain_ReturnValue;             // 0x0174(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0175(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_176[0x2];                                      // 0x0176(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1AbilityContextHandle                CallFunc_GetAbilityContextHandle_ReturnValue;      // 0x0178(0x0010)(ConstParm)
	struct FM1CalcDamageInfo                      Temp_struct_Variable;                              // 0x0188(0x0138)(ContainsInstancedReference)
	class AActor*                                 CallFunc_AbilityContextGetInstigator_ReturnValue;  // 0x02C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1AbilityContextHandle                CallFunc_GetAbilityContextHandle_ReturnValue_1;    // 0x02C8(0x0010)(ConstParm)
	class AActor*                                 CallFunc_AbilityContextGetInstigator_ReturnValue_1; // 0x02D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1CalcDamageInfo                      K2Node_CustomEvent_DamageInfo;                     // 0x02E0(0x0138)(ConstParm, ContainsInstancedReference)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0418(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x041C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0420(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_HitResult;                            // 0x0428(0x009C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          K2Node_Event_bPenetrated;                          // 0x04C4(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C5[0x3];                                      // 0x04C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FM1CalcDamageInfo& DamageInfo)> K2Node_CreateDelegate_OutputDelegate;              // 0x04C8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x04D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DC[0x4];                                      // 0x04DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x04E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x04E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2) == 0x000008, "Wrong alignment on Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2");
static_assert(sizeof(Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2) == 0x0004F0, "Wrong size on Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2");
static_assert(offsetof(Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2, EntryPoint) == 0x000000, "Member 'Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2::EntryPoint' has a wrong offset!");
static_assert(offsetof(Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2, Temp_int_Array_Index_Variable) == 0x000004, "Member 'Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2, CallFunc_WaitGiveDamageEventToActor_ReturnValue) == 0x000008, "Member 'Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2::CallFunc_WaitGiveDamageEventToActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2, K2Node_Event_OtherActor_1) == 0x000018, "Member 'Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2::K2Node_Event_OtherActor_1' has a wrong offset!");
static_assert(offsetof(Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2, K2Node_Event_ExplosionResult) == 0x000020, "Member 'Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2::K2Node_Event_ExplosionResult' has a wrong offset!");
static_assert(offsetof(Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2, CallFunc_Array_Add_ReturnValue) == 0x0000BC, "Member 'Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000C0, "Member 'Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0000CC, "Member 'Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2, CallFunc_LineTraceTerrain_OutHit) == 0x0000D8, "Member 'Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2::CallFunc_LineTraceTerrain_OutHit' has a wrong offset!");
static_assert(offsetof(Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2, CallFunc_LineTraceTerrain_ReturnValue) == 0x000174, "Member 'Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2::CallFunc_LineTraceTerrain_ReturnValue' has a wrong offset!");
static_assert(offsetof(Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000175, "Member 'Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2, CallFunc_GetAbilityContextHandle_ReturnValue) == 0x000178, "Member 'Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2::CallFunc_GetAbilityContextHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2, Temp_struct_Variable) == 0x000188, "Member 'Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2, CallFunc_AbilityContextGetInstigator_ReturnValue) == 0x0002C0, "Member 'Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2::CallFunc_AbilityContextGetInstigator_ReturnValue' has a wrong offset!");
static_assert(offsetof(Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2, CallFunc_GetAbilityContextHandle_ReturnValue_1) == 0x0002C8, "Member 'Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2::CallFunc_GetAbilityContextHandle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2, CallFunc_AbilityContextGetInstigator_ReturnValue_1) == 0x0002D8, "Member 'Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2::CallFunc_AbilityContextGetInstigator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2, K2Node_CustomEvent_DamageInfo) == 0x0002E0, "Member 'Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2::K2Node_CustomEvent_DamageInfo' has a wrong offset!");
static_assert(offsetof(Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2, Temp_int_Loop_Counter_Variable) == 0x000418, "Member 'Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2, CallFunc_Add_IntInt_ReturnValue) == 0x00041C, "Member 'Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2, K2Node_Event_OtherActor) == 0x000420, "Member 'Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2, K2Node_Event_HitResult) == 0x000428, "Member 'Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2::K2Node_Event_HitResult' has a wrong offset!");
static_assert(offsetof(Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2, K2Node_Event_bPenetrated) == 0x0004C4, "Member 'Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2::K2Node_Event_bPenetrated' has a wrong offset!");
static_assert(offsetof(Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2, K2Node_CreateDelegate_OutputDelegate) == 0x0004C8, "Member 'Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2, CallFunc_Array_Length_ReturnValue) == 0x0004D8, "Member 'Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2, CallFunc_Array_Get_Item) == 0x0004E0, "Member 'Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2, CallFunc_Less_IntInt_ReturnValue) == 0x0004E8, "Member 'Viessa_AbilityActor_IceSphereProjectile2_C_ExecuteUbergraph_Viessa_AbilityActor_IceSphereProjectile2::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function Viessa_AbilityActor_IceSphereProjectile2.Viessa_AbilityActor_IceSphereProjectile2_C.BP_OnPreProcessHit
// 0x00A8 (0x00A8 - 0x0000)
struct Viessa_AbilityActor_IceSphereProjectile2_C_BP_OnPreProcessHit final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             HitResult;                                         // 0x0008(0x009C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          bPenetrated;                                       // 0x00A4(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Viessa_AbilityActor_IceSphereProjectile2_C_BP_OnPreProcessHit) == 0x000008, "Wrong alignment on Viessa_AbilityActor_IceSphereProjectile2_C_BP_OnPreProcessHit");
static_assert(sizeof(Viessa_AbilityActor_IceSphereProjectile2_C_BP_OnPreProcessHit) == 0x0000A8, "Wrong size on Viessa_AbilityActor_IceSphereProjectile2_C_BP_OnPreProcessHit");
static_assert(offsetof(Viessa_AbilityActor_IceSphereProjectile2_C_BP_OnPreProcessHit, OtherActor) == 0x000000, "Member 'Viessa_AbilityActor_IceSphereProjectile2_C_BP_OnPreProcessHit::OtherActor' has a wrong offset!");
static_assert(offsetof(Viessa_AbilityActor_IceSphereProjectile2_C_BP_OnPreProcessHit, HitResult) == 0x000008, "Member 'Viessa_AbilityActor_IceSphereProjectile2_C_BP_OnPreProcessHit::HitResult' has a wrong offset!");
static_assert(offsetof(Viessa_AbilityActor_IceSphereProjectile2_C_BP_OnPreProcessHit, bPenetrated) == 0x0000A4, "Member 'Viessa_AbilityActor_IceSphereProjectile2_C_BP_OnPreProcessHit::bPenetrated' has a wrong offset!");

}

