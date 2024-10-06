#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skill_LepicDamageGrenade

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1Data_structs.hpp"


namespace SDK::Params
{

// Function Skill_LepicDamageGrenade.Skill_LepicDamageGrenade_C.ExecuteUbergraph_Skill_LepicDamageGrenade
// 0x02A8 (0x02A8 - 0x0000)
struct Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1AbilityEvent                        K2Node_CustomEvent_Event_2;                        // 0x0008(0x0040)(ConstParm)
	TDelegate<void(struct FM1AbilityEvent& Event)> K2Node_CreateDelegate_OutputDelegate;              // 0x0048(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1AbilityEvent                        K2Node_CustomEvent_Event_1;                        // 0x0058(0x0040)(ConstParm)
	TDelegate<void(struct FM1AbilityEvent& Event)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0098(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1AbilityEvent                        K2Node_CustomEvent_Event;                          // 0x00A8(0x0040)(ConstParm)
	TDelegate<void(struct FM1AbilityEvent& Event)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x00E8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1AbilityEvent                        Temp_struct_Variable;                              // 0x00F8(0x0040)()
	class UM1AbilityTask_PlayMontageAndWait*      CallFunc_PlayMontageAndWaitForEvent_ReturnValue;   // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_141[0x7];                                      // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FM1AbilityParamData>            Temp_struct_Variable_1;                            // 0x0148(0x0010)(ConstParm, ReferenceParm)
	TArray<struct FM1TaggedAbilityParamData>      Temp_struct_Variable_2;                            // 0x0158(0x0010)(ConstParm, ReferenceParm)
	TArray<class FName>                           Temp_name_Variable;                                // 0x0168(0x0010)(ConstParm, ReferenceParm)
	class AM1Monster*                             CallFunc_GetTestMonster_ReturnValue;               // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1SkillFTestTestCase                  CallFunc_MakeTestCaseSpawnAbilityActor_ReturnValue; // 0x0180(0x0068)()
	struct FM1SkillFTestTestCase                  CallFunc_MakeTestCaseDamageOnMonster_ReturnValue;  // 0x01E8(0x0068)()
	TArray<struct FM1SkillFTestTestCase>          K2Node_MakeArray_Array;                            // 0x0250(0x0010)(ReferenceParm)
	bool                                          CallFunc_TryCommitAbility_ReturnValue;             // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_261[0x7];                                      // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1SkillFTestTestCaseSheet             K2Node_MakeStruct_M1SkillFTestTestCaseSheet;       // 0x0268(0x0040)()
};
static_assert(alignof(Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade) == 0x000008, "Wrong alignment on Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade");
static_assert(sizeof(Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade) == 0x0002A8, "Wrong size on Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade");
static_assert(offsetof(Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade, EntryPoint) == 0x000000, "Member 'Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade::EntryPoint' has a wrong offset!");
static_assert(offsetof(Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade, CallFunc_IsLocallyControlled_ReturnValue) == 0x000004, "Member 'Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade, K2Node_CustomEvent_Event_2) == 0x000008, "Member 'Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade::K2Node_CustomEvent_Event_2' has a wrong offset!");
static_assert(offsetof(Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade, K2Node_CreateDelegate_OutputDelegate) == 0x000048, "Member 'Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade, K2Node_CustomEvent_Event_1) == 0x000058, "Member 'Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade::K2Node_CustomEvent_Event_1' has a wrong offset!");
static_assert(offsetof(Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade, K2Node_CreateDelegate_OutputDelegate_1) == 0x000098, "Member 'Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade, K2Node_CustomEvent_Event) == 0x0000A8, "Member 'Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade::K2Node_CustomEvent_Event' has a wrong offset!");
static_assert(offsetof(Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000E8, "Member 'Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade, Temp_struct_Variable) == 0x0000F8, "Member 'Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade, CallFunc_PlayMontageAndWaitForEvent_ReturnValue) == 0x000138, "Member 'Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade::CallFunc_PlayMontageAndWaitForEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade, CallFunc_IsValid_ReturnValue) == 0x000140, "Member 'Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade, Temp_struct_Variable_1) == 0x000148, "Member 'Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade, Temp_struct_Variable_2) == 0x000158, "Member 'Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade, Temp_name_Variable) == 0x000168, "Member 'Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade, CallFunc_GetTestMonster_ReturnValue) == 0x000178, "Member 'Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade::CallFunc_GetTestMonster_ReturnValue' has a wrong offset!");
static_assert(offsetof(Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade, CallFunc_MakeTestCaseSpawnAbilityActor_ReturnValue) == 0x000180, "Member 'Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade::CallFunc_MakeTestCaseSpawnAbilityActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade, CallFunc_MakeTestCaseDamageOnMonster_ReturnValue) == 0x0001E8, "Member 'Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade::CallFunc_MakeTestCaseDamageOnMonster_ReturnValue' has a wrong offset!");
static_assert(offsetof(Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade, K2Node_MakeArray_Array) == 0x000250, "Member 'Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade, CallFunc_TryCommitAbility_ReturnValue) == 0x000260, "Member 'Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade::CallFunc_TryCommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade, K2Node_MakeStruct_M1SkillFTestTestCaseSheet) == 0x000268, "Member 'Skill_LepicDamageGrenade_C_ExecuteUbergraph_Skill_LepicDamageGrenade::K2Node_MakeStruct_M1SkillFTestTestCaseSheet' has a wrong offset!");

// Function Skill_LepicDamageGrenade.Skill_LepicDamageGrenade_C.OnBlendOut_433EFAB045D30A2711C96BB9CD7A9634
// 0x0040 (0x0040 - 0x0000)
struct Skill_LepicDamageGrenade_C_OnBlendOut_433EFAB045D30A2711C96BB9CD7A9634 final
{
public:
	struct FM1AbilityEvent                        Event;                                             // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Skill_LepicDamageGrenade_C_OnBlendOut_433EFAB045D30A2711C96BB9CD7A9634) == 0x000008, "Wrong alignment on Skill_LepicDamageGrenade_C_OnBlendOut_433EFAB045D30A2711C96BB9CD7A9634");
static_assert(sizeof(Skill_LepicDamageGrenade_C_OnBlendOut_433EFAB045D30A2711C96BB9CD7A9634) == 0x000040, "Wrong size on Skill_LepicDamageGrenade_C_OnBlendOut_433EFAB045D30A2711C96BB9CD7A9634");
static_assert(offsetof(Skill_LepicDamageGrenade_C_OnBlendOut_433EFAB045D30A2711C96BB9CD7A9634, Event) == 0x000000, "Member 'Skill_LepicDamageGrenade_C_OnBlendOut_433EFAB045D30A2711C96BB9CD7A9634::Event' has a wrong offset!");

// Function Skill_LepicDamageGrenade.Skill_LepicDamageGrenade_C.OnCompleted_433EFAB045D30A2711C96BB9CD7A9634
// 0x0040 (0x0040 - 0x0000)
struct Skill_LepicDamageGrenade_C_OnCompleted_433EFAB045D30A2711C96BB9CD7A9634 final
{
public:
	struct FM1AbilityEvent                        Event;                                             // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Skill_LepicDamageGrenade_C_OnCompleted_433EFAB045D30A2711C96BB9CD7A9634) == 0x000008, "Wrong alignment on Skill_LepicDamageGrenade_C_OnCompleted_433EFAB045D30A2711C96BB9CD7A9634");
static_assert(sizeof(Skill_LepicDamageGrenade_C_OnCompleted_433EFAB045D30A2711C96BB9CD7A9634) == 0x000040, "Wrong size on Skill_LepicDamageGrenade_C_OnCompleted_433EFAB045D30A2711C96BB9CD7A9634");
static_assert(offsetof(Skill_LepicDamageGrenade_C_OnCompleted_433EFAB045D30A2711C96BB9CD7A9634, Event) == 0x000000, "Member 'Skill_LepicDamageGrenade_C_OnCompleted_433EFAB045D30A2711C96BB9CD7A9634::Event' has a wrong offset!");

// Function Skill_LepicDamageGrenade.Skill_LepicDamageGrenade_C.OnEventReceived_433EFAB045D30A2711C96BB9CD7A9634
// 0x0040 (0x0040 - 0x0000)
struct Skill_LepicDamageGrenade_C_OnEventReceived_433EFAB045D30A2711C96BB9CD7A9634 final
{
public:
	struct FM1AbilityEvent                        Event;                                             // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Skill_LepicDamageGrenade_C_OnEventReceived_433EFAB045D30A2711C96BB9CD7A9634) == 0x000008, "Wrong alignment on Skill_LepicDamageGrenade_C_OnEventReceived_433EFAB045D30A2711C96BB9CD7A9634");
static_assert(sizeof(Skill_LepicDamageGrenade_C_OnEventReceived_433EFAB045D30A2711C96BB9CD7A9634) == 0x000040, "Wrong size on Skill_LepicDamageGrenade_C_OnEventReceived_433EFAB045D30A2711C96BB9CD7A9634");
static_assert(offsetof(Skill_LepicDamageGrenade_C_OnEventReceived_433EFAB045D30A2711C96BB9CD7A9634, Event) == 0x000000, "Member 'Skill_LepicDamageGrenade_C_OnEventReceived_433EFAB045D30A2711C96BB9CD7A9634::Event' has a wrong offset!");

}
