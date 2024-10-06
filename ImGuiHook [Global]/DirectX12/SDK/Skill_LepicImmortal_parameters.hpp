#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skill_LepicImmortal

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1Data_structs.hpp"


namespace SDK::Params
{

// Function Skill_LepicImmortal.Skill_LepicImmortal_C.ExecuteUbergraph_Skill_LepicImmortal
// 0x0440 (0x0440 - 0x0000)
struct Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1AbilityEvent                        K2Node_CustomEvent_Event;                          // 0x0008(0x0040)(ConstParm)
	TDelegate<void(struct FM1AbilityEvent& Event)> K2Node_CreateDelegate_OutputDelegate;              // 0x0048(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1AbilityEvent                        Temp_struct_Variable;                              // 0x0058(0x0040)()
	class UM1AbilityTask_WaitAbilityEvent*        CallFunc_WaitAbilityEvent_ReturnValue;             // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1AbilityEventData_ReconcileDamage    CallFunc_GetAbilityEventData_ReconcileDamage_ReturnValue; // 0x00A8(0x0150)(ContainsInstancedReference)
	struct FM1SkillFTestTestCase                  CallFunc_MakeTestCaseStatusEffectOnPlayer_ReturnValue; // 0x01F8(0x0068)()
	struct FM1SkillFTestTestCase                  CallFunc_MakeTestCaseWatchPlayerStat_ReturnValue;  // 0x0260(0x0068)()
	TArray<struct FM1SkillFTestTestCase>          K2Node_MakeArray_Array;                            // 0x02C8(0x0010)(ReferenceParm)
	struct FM1SkillFTestTestCaseSheet             K2Node_MakeStruct_M1SkillFTestTestCaseSheet;       // 0x02D8(0x0040)()
	struct FM1SkillFTestTestCase                  CallFunc_MakeTestCaseWatchPlayerStat_ReturnValue_1; // 0x0318(0x0068)()
	TArray<struct FM1SkillFTestTestCase>          K2Node_MakeArray_Array_1;                          // 0x0380(0x0010)(ReferenceParm)
	struct FM1SkillFTestTestCaseSheet             K2Node_MakeStruct_M1SkillFTestTestCaseSheet_1;     // 0x0390(0x0040)()
	class AActor*                                 CallFunc_GetOwnerActor_ReturnValue;                // 0x03D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_WillDieTakeDamage_OutAppliedDamage;       // 0x03D8(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_WillDieTakeDamage_ReturnValue;            // 0x03E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E1[0x7];                                      // 0x03E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1ScaledInteger                       CallFunc_ScaledIntegerOne_ReturnValue;             // 0x03E8(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       CallFunc_Subtract_ScaledIntScaledInt_ReturnValue;  // 0x03F0(0x0008)(NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           Temp_name_Variable;                                // 0x03F8(0x0010)(ConstParm, ReferenceParm)
	TArray<struct FM1TaggedAbilityParamData>      Temp_struct_Variable_1;                            // 0x0408(0x0010)(ConstParm, ReferenceParm)
	struct FM1AbilityContextHandle                CallFunc_BP_MakeForwardingContext_ReturnValue;     // 0x0418(0x0010)()
	bool                                          CallFunc_TryCommitCooltime_ReturnValue;            // 0x0428(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_429[0x7];                                      // 0x0429(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FM1AbilityId>                   CallFunc_InvokeAllStatusEffectToSelfByTag_ReturnValue; // 0x0430(0x0010)(ReferenceParm)
};
static_assert(alignof(Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal) == 0x000008, "Wrong alignment on Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal");
static_assert(sizeof(Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal) == 0x000440, "Wrong size on Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal");
static_assert(offsetof(Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal, EntryPoint) == 0x000000, "Member 'Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal::EntryPoint' has a wrong offset!");
static_assert(offsetof(Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal, K2Node_CustomEvent_Event) == 0x000008, "Member 'Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal::K2Node_CustomEvent_Event' has a wrong offset!");
static_assert(offsetof(Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal, K2Node_CreateDelegate_OutputDelegate) == 0x000048, "Member 'Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal, Temp_struct_Variable) == 0x000058, "Member 'Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal, CallFunc_WaitAbilityEvent_ReturnValue) == 0x000098, "Member 'Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal::CallFunc_WaitAbilityEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal, CallFunc_IsValid_ReturnValue) == 0x0000A0, "Member 'Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal, CallFunc_GetAbilityEventData_ReconcileDamage_ReturnValue) == 0x0000A8, "Member 'Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal::CallFunc_GetAbilityEventData_ReconcileDamage_ReturnValue' has a wrong offset!");
static_assert(offsetof(Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal, CallFunc_MakeTestCaseStatusEffectOnPlayer_ReturnValue) == 0x0001F8, "Member 'Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal::CallFunc_MakeTestCaseStatusEffectOnPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal, CallFunc_MakeTestCaseWatchPlayerStat_ReturnValue) == 0x000260, "Member 'Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal::CallFunc_MakeTestCaseWatchPlayerStat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal, K2Node_MakeArray_Array) == 0x0002C8, "Member 'Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal, K2Node_MakeStruct_M1SkillFTestTestCaseSheet) == 0x0002D8, "Member 'Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal::K2Node_MakeStruct_M1SkillFTestTestCaseSheet' has a wrong offset!");
static_assert(offsetof(Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal, CallFunc_MakeTestCaseWatchPlayerStat_ReturnValue_1) == 0x000318, "Member 'Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal::CallFunc_MakeTestCaseWatchPlayerStat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal, K2Node_MakeArray_Array_1) == 0x000380, "Member 'Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal, K2Node_MakeStruct_M1SkillFTestTestCaseSheet_1) == 0x000390, "Member 'Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal::K2Node_MakeStruct_M1SkillFTestTestCaseSheet_1' has a wrong offset!");
static_assert(offsetof(Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal, CallFunc_GetOwnerActor_ReturnValue) == 0x0003D0, "Member 'Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal::CallFunc_GetOwnerActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal, CallFunc_WillDieTakeDamage_OutAppliedDamage) == 0x0003D8, "Member 'Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal::CallFunc_WillDieTakeDamage_OutAppliedDamage' has a wrong offset!");
static_assert(offsetof(Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal, CallFunc_WillDieTakeDamage_ReturnValue) == 0x0003E0, "Member 'Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal::CallFunc_WillDieTakeDamage_ReturnValue' has a wrong offset!");
static_assert(offsetof(Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal, CallFunc_ScaledIntegerOne_ReturnValue) == 0x0003E8, "Member 'Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal::CallFunc_ScaledIntegerOne_ReturnValue' has a wrong offset!");
static_assert(offsetof(Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal, CallFunc_Subtract_ScaledIntScaledInt_ReturnValue) == 0x0003F0, "Member 'Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal::CallFunc_Subtract_ScaledIntScaledInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal, Temp_name_Variable) == 0x0003F8, "Member 'Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal, Temp_struct_Variable_1) == 0x000408, "Member 'Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal, CallFunc_BP_MakeForwardingContext_ReturnValue) == 0x000418, "Member 'Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal::CallFunc_BP_MakeForwardingContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal, CallFunc_TryCommitCooltime_ReturnValue) == 0x000428, "Member 'Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal::CallFunc_TryCommitCooltime_ReturnValue' has a wrong offset!");
static_assert(offsetof(Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal, CallFunc_InvokeAllStatusEffectToSelfByTag_ReturnValue) == 0x000430, "Member 'Skill_LepicImmortal_C_ExecuteUbergraph_Skill_LepicImmortal::CallFunc_InvokeAllStatusEffectToSelfByTag_ReturnValue' has a wrong offset!");

// Function Skill_LepicImmortal.Skill_LepicImmortal_C.OnAbilityEvent_E6995AEF4CFB0E6CB0FF488228E939FD
// 0x0040 (0x0040 - 0x0000)
struct Skill_LepicImmortal_C_OnAbilityEvent_E6995AEF4CFB0E6CB0FF488228E939FD final
{
public:
	struct FM1AbilityEvent                        Event;                                             // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Skill_LepicImmortal_C_OnAbilityEvent_E6995AEF4CFB0E6CB0FF488228E939FD) == 0x000008, "Wrong alignment on Skill_LepicImmortal_C_OnAbilityEvent_E6995AEF4CFB0E6CB0FF488228E939FD");
static_assert(sizeof(Skill_LepicImmortal_C_OnAbilityEvent_E6995AEF4CFB0E6CB0FF488228E939FD) == 0x000040, "Wrong size on Skill_LepicImmortal_C_OnAbilityEvent_E6995AEF4CFB0E6CB0FF488228E939FD");
static_assert(offsetof(Skill_LepicImmortal_C_OnAbilityEvent_E6995AEF4CFB0E6CB0FF488228E939FD, Event) == 0x000000, "Member 'Skill_LepicImmortal_C_OnAbilityEvent_E6995AEF4CFB0E6CB0FF488228E939FD::Event' has a wrong offset!");

}

