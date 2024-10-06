#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_CampTank

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AnimBP_CampTank.AnimBP_CampTank_C
// 0x02E0 (0x0610 - 0x0330)
class UAnimBP_CampTank_C final : public UM1CampAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0330(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0338(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0340(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0348(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0368(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0390(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x03B8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x03E0(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0408(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0450(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0470(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x04B8(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x04D8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0520(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0540(0x00C8)()

public:
	void ExecuteUbergraph_AnimBP_CampTank(int32 EntryPoint);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampTank_AnimGraphNode_TransitionResult_DDFA2FB844ACCB931465A097D523D796();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampTank_AnimGraphNode_TransitionResult_610BF40D46975E71664CBDBEE34DF094();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_CampTank_AnimGraphNode_TransitionResult_56AA16BA43A583EF0FE038AD5ECE171A();
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimBP_CampTank_C">();
	}
	static class UAnimBP_CampTank_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimBP_CampTank_C>();
	}
};
static_assert(alignof(UAnimBP_CampTank_C) == 0x000010, "Wrong alignment on UAnimBP_CampTank_C");
static_assert(sizeof(UAnimBP_CampTank_C) == 0x000610, "Wrong size on UAnimBP_CampTank_C");
static_assert(offsetof(UAnimBP_CampTank_C, UberGraphFrame) == 0x000330, "Member 'UAnimBP_CampTank_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAnimBP_CampTank_C, AnimBlueprintExtension_PropertyAccess) == 0x000338, "Member 'UAnimBP_CampTank_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UAnimBP_CampTank_C, AnimBlueprintExtension_Base) == 0x000340, "Member 'UAnimBP_CampTank_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UAnimBP_CampTank_C, AnimGraphNode_Root) == 0x000348, "Member 'UAnimBP_CampTank_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UAnimBP_CampTank_C, AnimGraphNode_TransitionResult_3) == 0x000368, "Member 'UAnimBP_CampTank_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UAnimBP_CampTank_C, AnimGraphNode_TransitionResult_2) == 0x000390, "Member 'UAnimBP_CampTank_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_CampTank_C, AnimGraphNode_TransitionResult_1) == 0x0003B8, "Member 'UAnimBP_CampTank_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_CampTank_C, AnimGraphNode_TransitionResult) == 0x0003E0, "Member 'UAnimBP_CampTank_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UAnimBP_CampTank_C, AnimGraphNode_SequencePlayer_2) == 0x000408, "Member 'UAnimBP_CampTank_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_CampTank_C, AnimGraphNode_StateResult_2) == 0x000450, "Member 'UAnimBP_CampTank_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_CampTank_C, AnimGraphNode_SequencePlayer_1) == 0x000470, "Member 'UAnimBP_CampTank_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_CampTank_C, AnimGraphNode_StateResult_1) == 0x0004B8, "Member 'UAnimBP_CampTank_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_CampTank_C, AnimGraphNode_SequencePlayer) == 0x0004D8, "Member 'UAnimBP_CampTank_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UAnimBP_CampTank_C, AnimGraphNode_StateResult) == 0x000520, "Member 'UAnimBP_CampTank_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UAnimBP_CampTank_C, AnimGraphNode_StateMachine) == 0x000540, "Member 'UAnimBP_CampTank_C::AnimGraphNode_StateMachine' has a wrong offset!");

}
