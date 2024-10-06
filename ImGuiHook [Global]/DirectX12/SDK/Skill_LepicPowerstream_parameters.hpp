#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skill_LepicPowerstream

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "M1_structs.hpp"


namespace SDK::Params
{

// Function Skill_LepicPowerstream.Skill_LepicPowerstream_C.ExecuteUbergraph_Skill_LepicPowerstream
// 0x02A0 (0x02A0 - 0x0000)
struct Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1AbilityTask_PlayMontageAndWait*      CallFunc_PlayMontageAndWaitForEvent_ReturnValue;   // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FM1AbilityEvent& Event)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1AbilityEvent                        K2Node_CustomEvent_Event_2;                        // 0x0028(0x0040)(ConstParm)
	struct FM1AbilityEvent                        K2Node_CustomEvent_Event_1;                        // 0x0068(0x0040)(ConstParm)
	TDelegate<void(struct FM1AbilityEvent& Event)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x00A8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FM1AbilityEvent& Event)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x00B8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FM1AbilityEvent                        K2Node_CustomEvent_Event;                          // 0x00C8(0x0040)(ConstParm)
	struct FM1AbilityEvent                        Temp_struct_Variable;                              // 0x0108(0x0040)()
	struct FGameplayTagContainer                  CallFunc_MakeGameplayTagContainerFromTag_ReturnValue; // 0x0148(0x0020)()
	struct FM1AbilityId                           CallFunc_InvokeFirstStatusEffectToSelfByTag_ReturnValue; // 0x0168(0x0010)(HasGetValueTypeHash)
	struct FM1SkillFTestTestCase                  CallFunc_MakeTestCaseStatusEffectOnPlayer_ReturnValue; // 0x0178(0x0068)()
	struct FM1SkillFTestTestCase                  CallFunc_MakeTestCaseWatchPlayerStat_ReturnValue;  // 0x01E0(0x0068)()
	TArray<struct FM1SkillFTestTestCase>          K2Node_MakeArray_Array;                            // 0x0248(0x0010)(ReferenceParm)
	struct FM1SkillFTestTestCaseSheet             K2Node_MakeStruct_M1SkillFTestTestCaseSheet;       // 0x0258(0x0040)()
	bool                                          CallFunc_TryCommitAbility_ReturnValue;             // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream) == 0x000008, "Wrong alignment on Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream");
static_assert(sizeof(Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream) == 0x0002A0, "Wrong size on Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream");
static_assert(offsetof(Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream, EntryPoint) == 0x000000, "Member 'Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream::EntryPoint' has a wrong offset!");
static_assert(offsetof(Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream, CallFunc_PlayMontageAndWaitForEvent_ReturnValue) == 0x000008, "Member 'Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream::CallFunc_PlayMontageAndWaitForEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream, K2Node_CustomEvent_Event_2) == 0x000028, "Member 'Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream::K2Node_CustomEvent_Event_2' has a wrong offset!");
static_assert(offsetof(Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream, K2Node_CustomEvent_Event_1) == 0x000068, "Member 'Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream::K2Node_CustomEvent_Event_1' has a wrong offset!");
static_assert(offsetof(Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000A8, "Member 'Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000B8, "Member 'Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream, K2Node_CustomEvent_Event) == 0x0000C8, "Member 'Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream::K2Node_CustomEvent_Event' has a wrong offset!");
static_assert(offsetof(Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream, Temp_struct_Variable) == 0x000108, "Member 'Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream, CallFunc_MakeGameplayTagContainerFromTag_ReturnValue) == 0x000148, "Member 'Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream::CallFunc_MakeGameplayTagContainerFromTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream, CallFunc_InvokeFirstStatusEffectToSelfByTag_ReturnValue) == 0x000168, "Member 'Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream::CallFunc_InvokeFirstStatusEffectToSelfByTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream, CallFunc_MakeTestCaseStatusEffectOnPlayer_ReturnValue) == 0x000178, "Member 'Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream::CallFunc_MakeTestCaseStatusEffectOnPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream, CallFunc_MakeTestCaseWatchPlayerStat_ReturnValue) == 0x0001E0, "Member 'Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream::CallFunc_MakeTestCaseWatchPlayerStat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream, K2Node_MakeArray_Array) == 0x000248, "Member 'Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream, K2Node_MakeStruct_M1SkillFTestTestCaseSheet) == 0x000258, "Member 'Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream::K2Node_MakeStruct_M1SkillFTestTestCaseSheet' has a wrong offset!");
static_assert(offsetof(Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream, CallFunc_TryCommitAbility_ReturnValue) == 0x000298, "Member 'Skill_LepicPowerstream_C_ExecuteUbergraph_Skill_LepicPowerstream::CallFunc_TryCommitAbility_ReturnValue' has a wrong offset!");

// Function Skill_LepicPowerstream.Skill_LepicPowerstream_C.OnBlendOut_A63EE6B44E2D6816D6A6938D6A5D15CC
// 0x0040 (0x0040 - 0x0000)
struct Skill_LepicPowerstream_C_OnBlendOut_A63EE6B44E2D6816D6A6938D6A5D15CC final
{
public:
	struct FM1AbilityEvent                        Event;                                             // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Skill_LepicPowerstream_C_OnBlendOut_A63EE6B44E2D6816D6A6938D6A5D15CC) == 0x000008, "Wrong alignment on Skill_LepicPowerstream_C_OnBlendOut_A63EE6B44E2D6816D6A6938D6A5D15CC");
static_assert(sizeof(Skill_LepicPowerstream_C_OnBlendOut_A63EE6B44E2D6816D6A6938D6A5D15CC) == 0x000040, "Wrong size on Skill_LepicPowerstream_C_OnBlendOut_A63EE6B44E2D6816D6A6938D6A5D15CC");
static_assert(offsetof(Skill_LepicPowerstream_C_OnBlendOut_A63EE6B44E2D6816D6A6938D6A5D15CC, Event) == 0x000000, "Member 'Skill_LepicPowerstream_C_OnBlendOut_A63EE6B44E2D6816D6A6938D6A5D15CC::Event' has a wrong offset!");

// Function Skill_LepicPowerstream.Skill_LepicPowerstream_C.OnCompleted_A63EE6B44E2D6816D6A6938D6A5D15CC
// 0x0040 (0x0040 - 0x0000)
struct Skill_LepicPowerstream_C_OnCompleted_A63EE6B44E2D6816D6A6938D6A5D15CC final
{
public:
	struct FM1AbilityEvent                        Event;                                             // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Skill_LepicPowerstream_C_OnCompleted_A63EE6B44E2D6816D6A6938D6A5D15CC) == 0x000008, "Wrong alignment on Skill_LepicPowerstream_C_OnCompleted_A63EE6B44E2D6816D6A6938D6A5D15CC");
static_assert(sizeof(Skill_LepicPowerstream_C_OnCompleted_A63EE6B44E2D6816D6A6938D6A5D15CC) == 0x000040, "Wrong size on Skill_LepicPowerstream_C_OnCompleted_A63EE6B44E2D6816D6A6938D6A5D15CC");
static_assert(offsetof(Skill_LepicPowerstream_C_OnCompleted_A63EE6B44E2D6816D6A6938D6A5D15CC, Event) == 0x000000, "Member 'Skill_LepicPowerstream_C_OnCompleted_A63EE6B44E2D6816D6A6938D6A5D15CC::Event' has a wrong offset!");

// Function Skill_LepicPowerstream.Skill_LepicPowerstream_C.OnEventReceived_A63EE6B44E2D6816D6A6938D6A5D15CC
// 0x0040 (0x0040 - 0x0000)
struct Skill_LepicPowerstream_C_OnEventReceived_A63EE6B44E2D6816D6A6938D6A5D15CC final
{
public:
	struct FM1AbilityEvent                        Event;                                             // 0x0000(0x0040)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Skill_LepicPowerstream_C_OnEventReceived_A63EE6B44E2D6816D6A6938D6A5D15CC) == 0x000008, "Wrong alignment on Skill_LepicPowerstream_C_OnEventReceived_A63EE6B44E2D6816D6A6938D6A5D15CC");
static_assert(sizeof(Skill_LepicPowerstream_C_OnEventReceived_A63EE6B44E2D6816D6A6938D6A5D15CC) == 0x000040, "Wrong size on Skill_LepicPowerstream_C_OnEventReceived_A63EE6B44E2D6816D6A6938D6A5D15CC");
static_assert(offsetof(Skill_LepicPowerstream_C_OnEventReceived_A63EE6B44E2D6816D6A6938D6A5D15CC, Event) == 0x000000, "Member 'Skill_LepicPowerstream_C_OnEventReceived_A63EE6B44E2D6816D6A6938D6A5D15CC::Event' has a wrong offset!");

}
