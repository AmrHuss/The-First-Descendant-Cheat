#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_MIS_VoidFragment_Plain

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AnimBP_MIS_VoidFragment_Plain.AnimBP_MIS_VoidFragment_Plain_C
// 0x02E0 (0x0600 - 0x0320)
class UAnimBP_MIS_VoidFragment_Plain_C final : public UM1MissionTargetAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0328(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0330(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0338(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0358(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0380(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x03A8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x03D0(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x03F8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0440(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0460(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x04A8(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x04C8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0510(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0530(0x00C8)()

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_MIS_VoidFragment_Plain_AnimGraphNode_TransitionResult_3C44E4D84CB930893A31E0A34C32DFC7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_MIS_VoidFragment_Plain_AnimGraphNode_TransitionResult_4C82CA604762C4A1C9EAFCAEBD5C05A8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_MIS_VoidFragment_Plain_AnimGraphNode_TransitionResult_89774E434B6BF39CB4B615A199AAD089();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_MIS_VoidFragment_Plain_AnimGraphNode_TransitionResult_B74BDFFC491DD46764813692BAB5C613();
	void ExecuteUbergraph_AnimBP_MIS_VoidFragment_Plain(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimBP_MIS_VoidFragment_Plain_C">();
	}
	static class UAnimBP_MIS_VoidFragment_Plain_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimBP_MIS_VoidFragment_Plain_C>();
	}
};
static_assert(alignof(UAnimBP_MIS_VoidFragment_Plain_C) == 0x000010, "Wrong alignment on UAnimBP_MIS_VoidFragment_Plain_C");
static_assert(sizeof(UAnimBP_MIS_VoidFragment_Plain_C) == 0x000600, "Wrong size on UAnimBP_MIS_VoidFragment_Plain_C");
static_assert(offsetof(UAnimBP_MIS_VoidFragment_Plain_C, UberGraphFrame) == 0x000320, "Member 'UAnimBP_MIS_VoidFragment_Plain_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAnimBP_MIS_VoidFragment_Plain_C, AnimBlueprintExtension_PropertyAccess) == 0x000328, "Member 'UAnimBP_MIS_VoidFragment_Plain_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UAnimBP_MIS_VoidFragment_Plain_C, AnimBlueprintExtension_Base) == 0x000330, "Member 'UAnimBP_MIS_VoidFragment_Plain_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UAnimBP_MIS_VoidFragment_Plain_C, AnimGraphNode_Root) == 0x000338, "Member 'UAnimBP_MIS_VoidFragment_Plain_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UAnimBP_MIS_VoidFragment_Plain_C, AnimGraphNode_TransitionResult_3) == 0x000358, "Member 'UAnimBP_MIS_VoidFragment_Plain_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UAnimBP_MIS_VoidFragment_Plain_C, AnimGraphNode_TransitionResult_2) == 0x000380, "Member 'UAnimBP_MIS_VoidFragment_Plain_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_MIS_VoidFragment_Plain_C, AnimGraphNode_TransitionResult_1) == 0x0003A8, "Member 'UAnimBP_MIS_VoidFragment_Plain_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_MIS_VoidFragment_Plain_C, AnimGraphNode_TransitionResult) == 0x0003D0, "Member 'UAnimBP_MIS_VoidFragment_Plain_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UAnimBP_MIS_VoidFragment_Plain_C, AnimGraphNode_SequencePlayer_2) == 0x0003F8, "Member 'UAnimBP_MIS_VoidFragment_Plain_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_MIS_VoidFragment_Plain_C, AnimGraphNode_StateResult_2) == 0x000440, "Member 'UAnimBP_MIS_VoidFragment_Plain_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_MIS_VoidFragment_Plain_C, AnimGraphNode_SequencePlayer_1) == 0x000460, "Member 'UAnimBP_MIS_VoidFragment_Plain_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_MIS_VoidFragment_Plain_C, AnimGraphNode_StateResult_1) == 0x0004A8, "Member 'UAnimBP_MIS_VoidFragment_Plain_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_MIS_VoidFragment_Plain_C, AnimGraphNode_SequencePlayer) == 0x0004C8, "Member 'UAnimBP_MIS_VoidFragment_Plain_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UAnimBP_MIS_VoidFragment_Plain_C, AnimGraphNode_StateResult) == 0x000510, "Member 'UAnimBP_MIS_VoidFragment_Plain_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UAnimBP_MIS_VoidFragment_Plain_C, AnimGraphNode_StateMachine) == 0x000530, "Member 'UAnimBP_MIS_VoidFragment_Plain_C::AnimGraphNode_StateMachine' has a wrong offset!");

}
