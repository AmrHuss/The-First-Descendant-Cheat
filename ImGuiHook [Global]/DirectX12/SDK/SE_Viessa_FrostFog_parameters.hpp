#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SE_Viessa_FrostFog

#include "Basic.hpp"


namespace SDK::Params
{

// Function SE_Viessa_FrostFog.SE_Viessa_FrostFog_C.ExecuteUbergraph_SE_Viessa_FrostFog
// 0x0030 (0x0030 - 0x0000)
struct SE_Viessa_FrostFog_C_ExecuteUbergraph_SE_Viessa_FrostFog final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1AbilityTask_WaitDelay*               CallFunc_WaitDelay_ReturnValue;                    // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SE_Viessa_FrostFog_C_ExecuteUbergraph_SE_Viessa_FrostFog) == 0x000008, "Wrong alignment on SE_Viessa_FrostFog_C_ExecuteUbergraph_SE_Viessa_FrostFog");
static_assert(sizeof(SE_Viessa_FrostFog_C_ExecuteUbergraph_SE_Viessa_FrostFog) == 0x000030, "Wrong size on SE_Viessa_FrostFog_C_ExecuteUbergraph_SE_Viessa_FrostFog");
static_assert(offsetof(SE_Viessa_FrostFog_C_ExecuteUbergraph_SE_Viessa_FrostFog, EntryPoint) == 0x000000, "Member 'SE_Viessa_FrostFog_C_ExecuteUbergraph_SE_Viessa_FrostFog::EntryPoint' has a wrong offset!");
static_assert(offsetof(SE_Viessa_FrostFog_C_ExecuteUbergraph_SE_Viessa_FrostFog, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'SE_Viessa_FrostFog_C_ExecuteUbergraph_SE_Viessa_FrostFog::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SE_Viessa_FrostFog_C_ExecuteUbergraph_SE_Viessa_FrostFog, CallFunc_WaitDelay_ReturnValue) == 0x000018, "Member 'SE_Viessa_FrostFog_C_ExecuteUbergraph_SE_Viessa_FrostFog::CallFunc_WaitDelay_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_Viessa_FrostFog_C_ExecuteUbergraph_SE_Viessa_FrostFog, CallFunc_GetOwnerActor_ReturnValue) == 0x000020, "Member 'SE_Viessa_FrostFog_C_ExecuteUbergraph_SE_Viessa_FrostFog::CallFunc_GetOwnerActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_Viessa_FrostFog_C_ExecuteUbergraph_SE_Viessa_FrostFog, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'SE_Viessa_FrostFog_C_ExecuteUbergraph_SE_Viessa_FrostFog::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_Viessa_FrostFog_C_ExecuteUbergraph_SE_Viessa_FrostFog, CallFunc_HasAuthority_ReturnValue) == 0x000029, "Member 'SE_Viessa_FrostFog_C_ExecuteUbergraph_SE_Viessa_FrostFog::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(SE_Viessa_FrostFog_C_ExecuteUbergraph_SE_Viessa_FrostFog, CallFunc_IsValid_ReturnValue_1) == 0x00002A, "Member 'SE_Viessa_FrostFog_C_ExecuteUbergraph_SE_Viessa_FrostFog::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}

