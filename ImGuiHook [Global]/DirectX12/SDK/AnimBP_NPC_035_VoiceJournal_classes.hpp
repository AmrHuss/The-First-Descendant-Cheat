#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_NPC_035_VoiceJournal

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AnimBP_NPC_035_VoiceJournal.AnimBP_NPC_035_VoiceJournal_C
// 0x02B0 (0x0760 - 0x04B0)
class UAnimBP_NPC_035_VoiceJournal_C final : public UM1NpcAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x04B8(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x04C0(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x04C8(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x04E8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0510(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0538(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0560(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x05A8(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x05C8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0610(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0630(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0678(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0698(0x00C8)()

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_035_VoiceJournal_AnimGraphNode_TransitionResult_5461E16240D9BACD59BE7283783B26DB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_035_VoiceJournal_AnimGraphNode_TransitionResult_9AE2F79F41FCB9118D97F7B61BA84105();
	void ExecuteUbergraph_AnimBP_NPC_035_VoiceJournal(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimBP_NPC_035_VoiceJournal_C">();
	}
	static class UAnimBP_NPC_035_VoiceJournal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimBP_NPC_035_VoiceJournal_C>();
	}
};
static_assert(alignof(UAnimBP_NPC_035_VoiceJournal_C) == 0x000010, "Wrong alignment on UAnimBP_NPC_035_VoiceJournal_C");
static_assert(sizeof(UAnimBP_NPC_035_VoiceJournal_C) == 0x000760, "Wrong size on UAnimBP_NPC_035_VoiceJournal_C");
static_assert(offsetof(UAnimBP_NPC_035_VoiceJournal_C, UberGraphFrame) == 0x0004B0, "Member 'UAnimBP_NPC_035_VoiceJournal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_035_VoiceJournal_C, AnimBlueprintExtension_PropertyAccess) == 0x0004B8, "Member 'UAnimBP_NPC_035_VoiceJournal_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_035_VoiceJournal_C, AnimBlueprintExtension_Base) == 0x0004C0, "Member 'UAnimBP_NPC_035_VoiceJournal_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_035_VoiceJournal_C, AnimGraphNode_Root) == 0x0004C8, "Member 'UAnimBP_NPC_035_VoiceJournal_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_035_VoiceJournal_C, AnimGraphNode_TransitionResult_2) == 0x0004E8, "Member 'UAnimBP_NPC_035_VoiceJournal_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_035_VoiceJournal_C, AnimGraphNode_TransitionResult_1) == 0x000510, "Member 'UAnimBP_NPC_035_VoiceJournal_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_035_VoiceJournal_C, AnimGraphNode_TransitionResult) == 0x000538, "Member 'UAnimBP_NPC_035_VoiceJournal_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_035_VoiceJournal_C, AnimGraphNode_SequencePlayer_2) == 0x000560, "Member 'UAnimBP_NPC_035_VoiceJournal_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_035_VoiceJournal_C, AnimGraphNode_StateResult_2) == 0x0005A8, "Member 'UAnimBP_NPC_035_VoiceJournal_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_035_VoiceJournal_C, AnimGraphNode_SequencePlayer_1) == 0x0005C8, "Member 'UAnimBP_NPC_035_VoiceJournal_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_035_VoiceJournal_C, AnimGraphNode_StateResult_1) == 0x000610, "Member 'UAnimBP_NPC_035_VoiceJournal_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_035_VoiceJournal_C, AnimGraphNode_SequencePlayer) == 0x000630, "Member 'UAnimBP_NPC_035_VoiceJournal_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_035_VoiceJournal_C, AnimGraphNode_StateResult) == 0x000678, "Member 'UAnimBP_NPC_035_VoiceJournal_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_035_VoiceJournal_C, AnimGraphNode_StateMachine) == 0x000698, "Member 'UAnimBP_NPC_035_VoiceJournal_C::AnimGraphNode_StateMachine' has a wrong offset!");

}
