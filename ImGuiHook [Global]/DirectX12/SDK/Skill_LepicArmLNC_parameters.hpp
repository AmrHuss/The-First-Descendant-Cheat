#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skill_LepicArmLNC

#include "Basic.hpp"

#include "M1_structs.hpp"


namespace SDK::Params
{

// Function Skill_LepicArmLNC.Skill_LepicArmLNC_C.BP_OnDeactivated
// 0x0001 (0x0001 - 0x0000)
struct Skill_LepicArmLNC_C_BP_OnDeactivated final
{
public:
	bool                                          bCancelled;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Skill_LepicArmLNC_C_BP_OnDeactivated) == 0x000001, "Wrong alignment on Skill_LepicArmLNC_C_BP_OnDeactivated");
static_assert(sizeof(Skill_LepicArmLNC_C_BP_OnDeactivated) == 0x000001, "Wrong size on Skill_LepicArmLNC_C_BP_OnDeactivated");
static_assert(offsetof(Skill_LepicArmLNC_C_BP_OnDeactivated, bCancelled) == 0x000000, "Member 'Skill_LepicArmLNC_C_BP_OnDeactivated::bCancelled' has a wrong offset!");

// Function Skill_LepicArmLNC.Skill_LepicArmLNC_C.ExecuteUbergraph_Skill_LepicArmLNC
// 0x02E0 (0x02E0 - 0x0000)
struct Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bCancelled;                           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1AbilityEvent                        K2Node_CustomEvent_Event;                          // 0x0008(0x0040)(ConstParm)
	TDelegate<void(struct FM1AbilityEvent& Event)> K2Node_CreateDelegate_OutputDelegate;              // 0x0048(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1AbilityEvent                        Temp_struct_Variable;                              // 0x0058(0x0040)()
	class UM1AbilityTask_WaitAbilityEvent*        CallFunc_WaitAbilityEvent_ReturnValue;             // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AM1Monster*                             CallFunc_GetTestMonster_ReturnValue;               // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1SkillFTestTestCase                  CallFunc_MakeTestCaseAltWeapon_ReturnValue;        // 0x00B0(0x0068)()
	TArray<struct FM1SkillFTestTestCase>          K2Node_MakeArray_Array;                            // 0x0118(0x0010)(ReferenceParm)
	struct FM1SkillFTestTestCase                  CallFunc_MakeTestCaseDamageOnMonster_ReturnValue;  // 0x0128(0x0068)()
	struct FM1SkillFTestTestCaseSheet             K2Node_MakeStruct_M1SkillFTestTestCaseSheet;       // 0x0190(0x0040)()
	TArray<struct FM1SkillFTestTestCase>          K2Node_MakeArray_Array_1;                          // 0x01D0(0x0010)(ReferenceParm)
	struct FM1SkillFTestTestCaseSheet             K2Node_MakeStruct_M1SkillFTestTestCaseSheet_1;     // 0x01E0(0x0040)()
	struct FM1SkillFTestTestCase                  CallFunc_MakeTestCaseDamageOnMonster_ReturnValue_1; // 0x0220(0x0068)()
	TArray<struct FM1SkillFTestTestCase>          K2Node_MakeArray_Array_2;                          // 0x0288(0x0010)(ReferenceParm)
	struct FM1SkillFTestTestCaseSheet             K2Node_MakeStruct_M1SkillFTestTestCaseSheet_2;     // 0x0298(0x0040)()
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC) == 0x000008, "Wrong alignment on Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC");
static_assert(sizeof(Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC) == 0x0002E0, "Wrong size on Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC");
static_assert(offsetof(Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC, EntryPoint) == 0x000000, "Member 'Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC::EntryPoint' has a wrong offset!");
static_assert(offsetof(Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC, K2Node_Event_bCancelled) == 0x000004, "Member 'Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC::K2Node_Event_bCancelled' has a wrong offset!");
static_assert(offsetof(Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC, K2Node_CustomEvent_Event) == 0x000008, "Member 'Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC::K2Node_CustomEvent_Event' has a wrong offset!");
static_assert(offsetof(Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC, K2Node_CreateDelegate_OutputDelegate) == 0x000048, "Member 'Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC, Temp_struct_Variable) == 0x000058, "Member 'Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC, CallFunc_WaitAbilityEvent_ReturnValue) == 0x000098, "Member 'Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC::CallFunc_WaitAbilityEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC, CallFunc_IsValid_ReturnValue) == 0x0000A0, "Member 'Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC, CallFunc_GetTestMonster_ReturnValue) == 0x0000A8, "Member 'Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC::CallFunc_GetTestMonster_ReturnValue' has a wrong offset!");
static_assert(offsetof(Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC, CallFunc_MakeTestCaseAltWeapon_ReturnValue) == 0x0000B0, "Member 'Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC::CallFunc_MakeTestCaseAltWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC, K2Node_MakeArray_Array) == 0x000118, "Member 'Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC, CallFunc_MakeTestCaseDamageOnMonster_ReturnValue) == 0x000128, "Member 'Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC::CallFunc_MakeTestCaseDamageOnMonster_ReturnValue' has a wrong offset!");
static_assert(offsetof(Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC, K2Node_MakeStruct_M1SkillFTestTestCaseSheet) == 0x000190, "Member 'Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC::K2Node_MakeStruct_M1SkillFTestTestCaseSheet' has a wrong offset!");
static_assert(offsetof(Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC, K2Node_MakeArray_Array_1) == 0x0001D0, "Member 'Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC, K2Node_MakeStruct_M1SkillFTestTestCaseSheet_1) == 0x0001E0, "Member 'Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC::K2Node_MakeStruct_M1SkillFTestTestCaseSheet_1' has a wrong offset!");
static_assert(offsetof(Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC, CallFunc_MakeTestCaseDamageOnMonster_ReturnValue_1) == 0x000220, "Member 'Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC::CallFunc_MakeTestCaseDamageOnMonster_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC, K2Node_MakeArray_Array_2) == 0x000288, "Member 'Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC, K2Node_MakeStruct_M1SkillFTestTestCaseSheet_2) == 0x000298, "Member 'Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC::K2Node_MakeStruct_M1SkillFTestTestCaseSheet_2' has a wrong offset!");
static_assert(offsetof(Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC, CallFunc_IsDedicatedServer_ReturnValue) == 0x0002D8, "Member 'Skill_LepicArmLNC_C_ExecuteUbergraph_Skill_LepicArmLNC::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");

// Function Skill_LepicArmLNC.Skill_LepicArmLNC_C.OnAbilityEvent_3A13A6C94180B2DA4F4077885B102387
// 0x0040 (0x0040 - 0x0000)
struct Skill_LepicArmLNC_C_OnAbilityEvent_3A13A6C94180B2DA4F4077885B102387 final
{
public:
	struct FM1AbilityEvent                        Event;                                             // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Skill_LepicArmLNC_C_OnAbilityEvent_3A13A6C94180B2DA4F4077885B102387) == 0x000008, "Wrong alignment on Skill_LepicArmLNC_C_OnAbilityEvent_3A13A6C94180B2DA4F4077885B102387");
static_assert(sizeof(Skill_LepicArmLNC_C_OnAbilityEvent_3A13A6C94180B2DA4F4077885B102387) == 0x000040, "Wrong size on Skill_LepicArmLNC_C_OnAbilityEvent_3A13A6C94180B2DA4F4077885B102387");
static_assert(offsetof(Skill_LepicArmLNC_C_OnAbilityEvent_3A13A6C94180B2DA4F4077885B102387, Event) == 0x000000, "Member 'Skill_LepicArmLNC_C_OnAbilityEvent_3A13A6C94180B2DA4F4077885B102387::Event' has a wrong offset!");

}
