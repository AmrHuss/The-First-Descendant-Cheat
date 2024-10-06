#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SE_CraneStunBase

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function SE_CraneStunBase.SE_CraneStunBase_C.ExecuteUbergraph_SE_CraneStunBase
// 0x00C0 (0x00C0 - 0x0000)
struct SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector2D_X;                          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AM1Monster*                             K2Node_DynamicCast_AsM1Monster;                    // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1RagDollHandlerComponent*             CallFunc_GetComponentByClass_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x6];                                       // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue_1;              // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bCancelled;                           // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AM1Monster*                             K2Node_DynamicCast_AsM1Monster_1;                  // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A[0x6];                                       // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1RagDollHandlerComponent*             CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A[0x6];                                       // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector2D_X_1;                        // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y_1;                        // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X_2;                        // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y_2;                        // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_ReturnValue_2;         // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase) == 0x000008, "Wrong alignment on SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase");
static_assert(sizeof(SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase) == 0x0000C0, "Wrong size on SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase");
static_assert(offsetof(SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase, EntryPoint) == 0x000000, "Member 'SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase, CallFunc_BreakVector2D_X) == 0x000008, "Member 'SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase, CallFunc_BreakVector2D_Y) == 0x000010, "Member 'SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase, CallFunc_RandomFloatInRange_ReturnValue) == 0x000018, "Member 'SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase, CallFunc_IsDedicatedServer_ReturnValue) == 0x000020, "Member 'SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase, CallFunc_GetOwnerActor_ReturnValue) == 0x000028, "Member 'SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase::CallFunc_GetOwnerActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase, K2Node_DynamicCast_AsM1Monster) == 0x000030, "Member 'SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase::K2Node_DynamicCast_AsM1Monster' has a wrong offset!");
static_assert(offsetof(SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase, CallFunc_GetComponentByClass_ReturnValue) == 0x000040, "Member 'SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x000049, "Member 'SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase, CallFunc_GetOwnerActor_ReturnValue_1) == 0x000050, "Member 'SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase::CallFunc_GetOwnerActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase, K2Node_Event_bCancelled) == 0x000058, "Member 'SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase::K2Node_Event_bCancelled' has a wrong offset!");
static_assert(offsetof(SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase, K2Node_DynamicCast_AsM1Monster_1) == 0x000060, "Member 'SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase::K2Node_DynamicCast_AsM1Monster_1' has a wrong offset!");
static_assert(offsetof(SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase, K2Node_DynamicCast_bSuccess_1) == 0x000068, "Member 'SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase, CallFunc_BooleanOR_ReturnValue) == 0x000069, "Member 'SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000070, "Member 'SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase, CallFunc_IsValid_ReturnValue_1) == 0x000078, "Member 'SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000079, "Member 'SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase, CallFunc_BreakVector2D_X_1) == 0x000080, "Member 'SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase, CallFunc_BreakVector2D_Y_1) == 0x000088, "Member 'SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000090, "Member 'SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase, CallFunc_BreakVector2D_X_2) == 0x000098, "Member 'SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase::CallFunc_BreakVector2D_X_2' has a wrong offset!");
static_assert(offsetof(SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase, CallFunc_BreakVector2D_Y_2) == 0x0000A0, "Member 'SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase::CallFunc_BreakVector2D_Y_2' has a wrong offset!");
static_assert(offsetof(SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase, CallFunc_RandomFloatInRange_ReturnValue_2) == 0x0000A8, "Member 'SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase::CallFunc_RandomFloatInRange_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase, CallFunc_MakeVector_ReturnValue) == 0x0000B0, "Member 'SE_CraneStunBase_C_ExecuteUbergraph_SE_CraneStunBase::CallFunc_MakeVector_ReturnValue' has a wrong offset!");

// Function SE_CraneStunBase.SE_CraneStunBase_C.BP_OnDeactivated
// 0x0001 (0x0001 - 0x0000)
struct SE_CraneStunBase_C_BP_OnDeactivated final
{
public:
	bool                                          bCancelled;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SE_CraneStunBase_C_BP_OnDeactivated) == 0x000001, "Wrong alignment on SE_CraneStunBase_C_BP_OnDeactivated");
static_assert(sizeof(SE_CraneStunBase_C_BP_OnDeactivated) == 0x000001, "Wrong size on SE_CraneStunBase_C_BP_OnDeactivated");
static_assert(offsetof(SE_CraneStunBase_C_BP_OnDeactivated, bCancelled) == 0x000000, "Member 'SE_CraneStunBase_C_BP_OnDeactivated::bCancelled' has a wrong offset!");

}
