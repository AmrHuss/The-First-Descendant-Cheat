#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_PC_003_A0101

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "ABP_PC_003_A0101_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_PC_003_A0101.ABP_PC_003_A0101_C
// 0x0490 (0x07B0 - 0x0320)
class UABP_PC_003_A0101_C final : public UAnimInstance
{
public:
	uint8                                         Pad_318[0x8];                                      // 0x0318(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct ABP_PC_003_A0101::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0328(0x0008)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0330(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0338(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0340(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0360(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0388(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x03B0(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_7;                    // 0x03D8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x0420(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;                    // 0x0440(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0488(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x04A8(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x04F0(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0538(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0580(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x05C8(0x0048)()
	struct FAnimNode_BlendListByInt               AnimGraphNode_BlendListByInt;                      // 0x0610(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0658(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0678(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x06C0(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x06E0(0x00C8)()
	int32                                         Identity;                                          // 0x07A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsHold;                                           // 0x07AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPlayDestroyAnim;                                  // 0x07AD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ABP_PC_003_A0101(int32 EntryPoint);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PC_003_A0101_AnimGraphNode_TransitionResult_FBD5168B4775DCAF15153AA0ED6DC64F();
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_PC_003_A0101_C">();
	}
	static class UABP_PC_003_A0101_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_PC_003_A0101_C>();
	}
};
static_assert(alignof(UABP_PC_003_A0101_C) == 0x000010, "Wrong alignment on UABP_PC_003_A0101_C");
static_assert(sizeof(UABP_PC_003_A0101_C) == 0x0007B0, "Wrong size on UABP_PC_003_A0101_C");
static_assert(offsetof(UABP_PC_003_A0101_C, UberGraphFrame) == 0x000320, "Member 'UABP_PC_003_A0101_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_PC_003_A0101_C, __AnimBlueprintMutables) == 0x000328, "Member 'UABP_PC_003_A0101_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UABP_PC_003_A0101_C, AnimBlueprintExtension_PropertyAccess) == 0x000330, "Member 'UABP_PC_003_A0101_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UABP_PC_003_A0101_C, AnimBlueprintExtension_Base) == 0x000338, "Member 'UABP_PC_003_A0101_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UABP_PC_003_A0101_C, AnimGraphNode_Root) == 0x000340, "Member 'UABP_PC_003_A0101_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_PC_003_A0101_C, AnimGraphNode_TransitionResult_2) == 0x000360, "Member 'UABP_PC_003_A0101_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UABP_PC_003_A0101_C, AnimGraphNode_TransitionResult_1) == 0x000388, "Member 'UABP_PC_003_A0101_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABP_PC_003_A0101_C, AnimGraphNode_TransitionResult) == 0x0003B0, "Member 'UABP_PC_003_A0101_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABP_PC_003_A0101_C, AnimGraphNode_SequencePlayer_7) == 0x0003D8, "Member 'UABP_PC_003_A0101_C::AnimGraphNode_SequencePlayer_7' has a wrong offset!");
static_assert(offsetof(UABP_PC_003_A0101_C, AnimGraphNode_StateResult_3) == 0x000420, "Member 'UABP_PC_003_A0101_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UABP_PC_003_A0101_C, AnimGraphNode_SequencePlayer_6) == 0x000440, "Member 'UABP_PC_003_A0101_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(UABP_PC_003_A0101_C, AnimGraphNode_StateResult_2) == 0x000488, "Member 'UABP_PC_003_A0101_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABP_PC_003_A0101_C, AnimGraphNode_SequencePlayer_5) == 0x0004A8, "Member 'UABP_PC_003_A0101_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UABP_PC_003_A0101_C, AnimGraphNode_SequencePlayer_4) == 0x0004F0, "Member 'UABP_PC_003_A0101_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UABP_PC_003_A0101_C, AnimGraphNode_SequencePlayer_3) == 0x000538, "Member 'UABP_PC_003_A0101_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UABP_PC_003_A0101_C, AnimGraphNode_SequencePlayer_2) == 0x000580, "Member 'UABP_PC_003_A0101_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_PC_003_A0101_C, AnimGraphNode_SequencePlayer_1) == 0x0005C8, "Member 'UABP_PC_003_A0101_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_PC_003_A0101_C, AnimGraphNode_BlendListByInt) == 0x000610, "Member 'UABP_PC_003_A0101_C::AnimGraphNode_BlendListByInt' has a wrong offset!");
static_assert(offsetof(UABP_PC_003_A0101_C, AnimGraphNode_StateResult_1) == 0x000658, "Member 'UABP_PC_003_A0101_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_PC_003_A0101_C, AnimGraphNode_SequencePlayer) == 0x000678, "Member 'UABP_PC_003_A0101_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_PC_003_A0101_C, AnimGraphNode_StateResult) == 0x0006C0, "Member 'UABP_PC_003_A0101_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_PC_003_A0101_C, AnimGraphNode_StateMachine) == 0x0006E0, "Member 'UABP_PC_003_A0101_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_PC_003_A0101_C, Identity) == 0x0007A8, "Member 'UABP_PC_003_A0101_C::Identity' has a wrong offset!");
static_assert(offsetof(UABP_PC_003_A0101_C, bIsHold) == 0x0007AC, "Member 'UABP_PC_003_A0101_C::bIsHold' has a wrong offset!");
static_assert(offsetof(UABP_PC_003_A0101_C, bPlayDestroyAnim) == 0x0007AD, "Member 'UABP_PC_003_A0101_C::bPlayDestroyAnim' has a wrong offset!");

}

