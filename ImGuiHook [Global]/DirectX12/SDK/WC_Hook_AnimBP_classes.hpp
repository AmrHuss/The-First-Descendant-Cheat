#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WC_Hook_AnimBP

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass WC_Hook_AnimBP.WC_Hook_AnimBP_C
// 0x0370 (0x06A0 - 0x0330)
class UWC_Hook_AnimBP_C final : public UM1WireCasterAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0330(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0338(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0340(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0348(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x0368(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0390(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x03B8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x03E0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0408(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0430(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x0478(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0498(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x04E0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0500(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0548(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0568(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x05B0(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x05D0(0x00C8)()

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_WC_Hook_AnimBP_AnimGraphNode_TransitionResult_FA154A754961F6C15612FABF813BB137();
	void ExecuteUbergraph_WC_Hook_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WC_Hook_AnimBP_C">();
	}
	static class UWC_Hook_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWC_Hook_AnimBP_C>();
	}
};
static_assert(alignof(UWC_Hook_AnimBP_C) == 0x000010, "Wrong alignment on UWC_Hook_AnimBP_C");
static_assert(sizeof(UWC_Hook_AnimBP_C) == 0x0006A0, "Wrong size on UWC_Hook_AnimBP_C");
static_assert(offsetof(UWC_Hook_AnimBP_C, UberGraphFrame) == 0x000330, "Member 'UWC_Hook_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWC_Hook_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x000338, "Member 'UWC_Hook_AnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UWC_Hook_AnimBP_C, AnimBlueprintExtension_Base) == 0x000340, "Member 'UWC_Hook_AnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UWC_Hook_AnimBP_C, AnimGraphNode_Root) == 0x000348, "Member 'UWC_Hook_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UWC_Hook_AnimBP_C, AnimGraphNode_TransitionResult_4) == 0x000368, "Member 'UWC_Hook_AnimBP_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UWC_Hook_AnimBP_C, AnimGraphNode_TransitionResult_3) == 0x000390, "Member 'UWC_Hook_AnimBP_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UWC_Hook_AnimBP_C, AnimGraphNode_TransitionResult_2) == 0x0003B8, "Member 'UWC_Hook_AnimBP_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UWC_Hook_AnimBP_C, AnimGraphNode_TransitionResult_1) == 0x0003E0, "Member 'UWC_Hook_AnimBP_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UWC_Hook_AnimBP_C, AnimGraphNode_TransitionResult) == 0x000408, "Member 'UWC_Hook_AnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UWC_Hook_AnimBP_C, AnimGraphNode_SequencePlayer_3) == 0x000430, "Member 'UWC_Hook_AnimBP_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UWC_Hook_AnimBP_C, AnimGraphNode_StateResult_3) == 0x000478, "Member 'UWC_Hook_AnimBP_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UWC_Hook_AnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x000498, "Member 'UWC_Hook_AnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UWC_Hook_AnimBP_C, AnimGraphNode_StateResult_2) == 0x0004E0, "Member 'UWC_Hook_AnimBP_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UWC_Hook_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x000500, "Member 'UWC_Hook_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UWC_Hook_AnimBP_C, AnimGraphNode_StateResult_1) == 0x000548, "Member 'UWC_Hook_AnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UWC_Hook_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x000568, "Member 'UWC_Hook_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UWC_Hook_AnimBP_C, AnimGraphNode_StateResult) == 0x0005B0, "Member 'UWC_Hook_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UWC_Hook_AnimBP_C, AnimGraphNode_StateMachine) == 0x0005D0, "Member 'UWC_Hook_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");

}
