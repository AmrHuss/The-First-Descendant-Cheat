#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skill_Viessa_Active01

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1Data_structs.hpp"


namespace SDK::Params
{

// Function Skill_Viessa_Active01.Skill_Viessa_Active01_C.ExecuteUbergraph_Skill_Viessa_Active01
// 0x03C8 (0x03C8 - 0x0000)
struct Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01 final
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
	struct FM1SkillFTestTestCase                  CallFunc_MakeTestCaseStatusEffectOnMonster_ReturnValue; // 0x0178(0x0068)()
	class AM1Monster*                             CallFunc_GetTestMonster_ReturnValue;               // 0x01E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1SkillFTestTestCase                  CallFunc_MakeTestCaseDamageOnMonster_ReturnValue;  // 0x01E8(0x0068)()
	struct FM1SkillFTestTestCase                  CallFunc_MakeTestCaseDamageOnMonster_ReturnValue_1; // 0x0250(0x0068)()
	TArray<struct FM1SkillFTestTestCase>          K2Node_MakeArray_Array;                            // 0x02B8(0x0010)(ReferenceParm)
	struct FM1SkillFTestTestCase                  CallFunc_MakeTestCaseSpawnAbilityActor_ReturnValue; // 0x02C8(0x0068)()
	struct FM1SkillFTestTestCaseSheet             K2Node_MakeStruct_M1SkillFTestTestCaseSheet;       // 0x0330(0x0040)()
	TArray<struct FM1SkillFTestTestCase>          K2Node_MakeArray_Array_1;                          // 0x0370(0x0010)(ReferenceParm)
	struct FM1SkillFTestTestCaseSheet             K2Node_MakeStruct_M1SkillFTestTestCaseSheet_1;     // 0x0380(0x0040)()
	bool                                          CallFunc_TryCommitAbility_ReturnValue;             // 0x03C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01) == 0x000008, "Wrong alignment on Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01");
static_assert(sizeof(Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01) == 0x0003C8, "Wrong size on Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01");
static_assert(offsetof(Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01, EntryPoint) == 0x000000, "Member 'Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01::EntryPoint' has a wrong offset!");
static_assert(offsetof(Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01, CallFunc_IsLocallyControlled_ReturnValue) == 0x000004, "Member 'Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01, K2Node_CustomEvent_Event_2) == 0x000008, "Member 'Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01::K2Node_CustomEvent_Event_2' has a wrong offset!");
static_assert(offsetof(Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01, K2Node_CreateDelegate_OutputDelegate) == 0x000048, "Member 'Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01, K2Node_CustomEvent_Event_1) == 0x000058, "Member 'Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01::K2Node_CustomEvent_Event_1' has a wrong offset!");
static_assert(offsetof(Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01, K2Node_CreateDelegate_OutputDelegate_1) == 0x000098, "Member 'Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01, K2Node_CustomEvent_Event) == 0x0000A8, "Member 'Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01::K2Node_CustomEvent_Event' has a wrong offset!");
static_assert(offsetof(Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000E8, "Member 'Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01, Temp_struct_Variable) == 0x0000F8, "Member 'Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01, CallFunc_PlayMontageAndWaitForEvent_ReturnValue) == 0x000138, "Member 'Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01::CallFunc_PlayMontageAndWaitForEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01, CallFunc_IsValid_ReturnValue) == 0x000140, "Member 'Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01, Temp_struct_Variable_1) == 0x000148, "Member 'Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01, Temp_struct_Variable_2) == 0x000158, "Member 'Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01, Temp_name_Variable) == 0x000168, "Member 'Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01, CallFunc_MakeTestCaseStatusEffectOnMonster_ReturnValue) == 0x000178, "Member 'Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01::CallFunc_MakeTestCaseStatusEffectOnMonster_ReturnValue' has a wrong offset!");
static_assert(offsetof(Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01, CallFunc_GetTestMonster_ReturnValue) == 0x0001E0, "Member 'Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01::CallFunc_GetTestMonster_ReturnValue' has a wrong offset!");
static_assert(offsetof(Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01, CallFunc_MakeTestCaseDamageOnMonster_ReturnValue) == 0x0001E8, "Member 'Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01::CallFunc_MakeTestCaseDamageOnMonster_ReturnValue' has a wrong offset!");
static_assert(offsetof(Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01, CallFunc_MakeTestCaseDamageOnMonster_ReturnValue_1) == 0x000250, "Member 'Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01::CallFunc_MakeTestCaseDamageOnMonster_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01, K2Node_MakeArray_Array) == 0x0002B8, "Member 'Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01, CallFunc_MakeTestCaseSpawnAbilityActor_ReturnValue) == 0x0002C8, "Member 'Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01::CallFunc_MakeTestCaseSpawnAbilityActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01, K2Node_MakeStruct_M1SkillFTestTestCaseSheet) == 0x000330, "Member 'Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01::K2Node_MakeStruct_M1SkillFTestTestCaseSheet' has a wrong offset!");
static_assert(offsetof(Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01, K2Node_MakeArray_Array_1) == 0x000370, "Member 'Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01, K2Node_MakeStruct_M1SkillFTestTestCaseSheet_1) == 0x000380, "Member 'Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01::K2Node_MakeStruct_M1SkillFTestTestCaseSheet_1' has a wrong offset!");
static_assert(offsetof(Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01, CallFunc_TryCommitAbility_ReturnValue) == 0x0003C0, "Member 'Skill_Viessa_Active01_C_ExecuteUbergraph_Skill_Viessa_Active01::CallFunc_TryCommitAbility_ReturnValue' has a wrong offset!");

// Function Skill_Viessa_Active01.Skill_Viessa_Active01_C.OnBlendOut_1D43D4E24F5073DD606769972CB99EC7
// 0x0040 (0x0040 - 0x0000)
struct Skill_Viessa_Active01_C_OnBlendOut_1D43D4E24F5073DD606769972CB99EC7 final
{
public:
	struct FM1AbilityEvent                        Event;                                             // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Skill_Viessa_Active01_C_OnBlendOut_1D43D4E24F5073DD606769972CB99EC7) == 0x000008, "Wrong alignment on Skill_Viessa_Active01_C_OnBlendOut_1D43D4E24F5073DD606769972CB99EC7");
static_assert(sizeof(Skill_Viessa_Active01_C_OnBlendOut_1D43D4E24F5073DD606769972CB99EC7) == 0x000040, "Wrong size on Skill_Viessa_Active01_C_OnBlendOut_1D43D4E24F5073DD606769972CB99EC7");
static_assert(offsetof(Skill_Viessa_Active01_C_OnBlendOut_1D43D4E24F5073DD606769972CB99EC7, Event) == 0x000000, "Member 'Skill_Viessa_Active01_C_OnBlendOut_1D43D4E24F5073DD606769972CB99EC7::Event' has a wrong offset!");

// Function Skill_Viessa_Active01.Skill_Viessa_Active01_C.OnCompleted_1D43D4E24F5073DD606769972CB99EC7
// 0x0040 (0x0040 - 0x0000)
struct Skill_Viessa_Active01_C_OnCompleted_1D43D4E24F5073DD606769972CB99EC7 final
{
public:
	struct FM1AbilityEvent                        Event;                                             // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Skill_Viessa_Active01_C_OnCompleted_1D43D4E24F5073DD606769972CB99EC7) == 0x000008, "Wrong alignment on Skill_Viessa_Active01_C_OnCompleted_1D43D4E24F5073DD606769972CB99EC7");
static_assert(sizeof(Skill_Viessa_Active01_C_OnCompleted_1D43D4E24F5073DD606769972CB99EC7) == 0x000040, "Wrong size on Skill_Viessa_Active01_C_OnCompleted_1D43D4E24F5073DD606769972CB99EC7");
static_assert(offsetof(Skill_Viessa_Active01_C_OnCompleted_1D43D4E24F5073DD606769972CB99EC7, Event) == 0x000000, "Member 'Skill_Viessa_Active01_C_OnCompleted_1D43D4E24F5073DD606769972CB99EC7::Event' has a wrong offset!");

// Function Skill_Viessa_Active01.Skill_Viessa_Active01_C.OnEventReceived_1D43D4E24F5073DD606769972CB99EC7
// 0x0040 (0x0040 - 0x0000)
struct Skill_Viessa_Active01_C_OnEventReceived_1D43D4E24F5073DD606769972CB99EC7 final
{
public:
	struct FM1AbilityEvent                        Event;                                             // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Skill_Viessa_Active01_C_OnEventReceived_1D43D4E24F5073DD606769972CB99EC7) == 0x000008, "Wrong alignment on Skill_Viessa_Active01_C_OnEventReceived_1D43D4E24F5073DD606769972CB99EC7");
static_assert(sizeof(Skill_Viessa_Active01_C_OnEventReceived_1D43D4E24F5073DD606769972CB99EC7) == 0x000040, "Wrong size on Skill_Viessa_Active01_C_OnEventReceived_1D43D4E24F5073DD606769972CB99EC7");
static_assert(offsetof(Skill_Viessa_Active01_C_OnEventReceived_1D43D4E24F5073DD606769972CB99EC7, Event) == 0x000000, "Member 'Skill_Viessa_Active01_C_OnEventReceived_1D43D4E24F5073DD606769972CB99EC7::Event' has a wrong offset!");

}
