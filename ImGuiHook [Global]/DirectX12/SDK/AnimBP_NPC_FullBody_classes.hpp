#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_NPC_FullBody

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimBP_NPC_FullBody_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AnimBP_NPC_FullBody.AnimBP_NPC_FullBody_C
// 0x0770 (0x0A90 - 0x0320)
class UAnimBP_NPC_FullBody_C final : public UAnimInstance
{
public:
	uint8                                         Pad_318[0x8];                                      // 0x0318(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct AnimBP_NPC_FullBody::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0328(0x0008)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0330(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0338(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0340(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_16;                 // 0x0360(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_15;                 // 0x0388(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_14;                 // 0x03B0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_13;                 // 0x03D8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_12;                 // 0x0400(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_11;                 // 0x0428(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_10;                 // 0x0450(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;                  // 0x0478(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x04A0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x04C8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x04F0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x0518(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x0540(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x0568(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0590(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x05B8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x05E0(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_7;                       // 0x0608(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;                    // 0x0628(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_6;                       // 0x0670(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x0690(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x06D8(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x06F8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x0740(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0760(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x07A8(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x07C8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0810(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0830(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0878(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0898(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x08E0(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0900(0x00C8)()
	float                                         K2Node_PropertyAccess_3;                           // 0x09C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_PropertyAccess_2;                           // 0x09CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_PropertyAccess_1;                           // 0x09D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_PropertyAccess;                             // 0x09D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          IdleOne;                                           // 0x09D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          IdleTwo;                                           // 0x09E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          MovingIdleOne;                                     // 0x09E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          MovingIdleTwo;                                     // 0x09F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          InteractionBegin;                                  // 0x09F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          InteractionLoop;                                   // 0x0A00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          InteractionEnd;                                    // 0x0A08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsInInteraction;                                  // 0x0A10(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A11[0x7];                                      // 0x0A11(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1NpcIdleAnimSettings                 IdleAnimSettings;                                  // 0x0A18(0x0058)(Edit, BlueprintVisible)
	double                                        IdlaStartPosition;                                 // 0x0A70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentIdleRepeatCount;                            // 0x0A78(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1NpcAnimState                               CurrentAnimState;                                  // 0x0A7C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A7D[0x3];                                      // 0x0A7D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TargetIdleRepeatCount;                             // 0x0A80(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void UpdateTargetRepeatCount(EM1NpcAnimState AnimState);
	void ResetRepeatCount();
	void HasRepeatedEnough(bool* NewParam);
	void ExecuteUbergraph_AnimBP_NPC_FullBody(int32 EntryPoint);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_DE17CFA6472ECCDFF6A37AAAA703853B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_DB3D83C64F58CE03389901AC142CD336();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_D2390C7C4A932D8EE83722B176E4300B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_C6250843418910B018FC46A20797F5A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_A4BBFE9C47496681D0E98592CCD86288();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_9E470B6C437DA0138013F0956836D41E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_9CBCE9B44E30B03130ADF4A1144EC5FB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_91C73DD449C62C37A8DD52BC4F4549C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_8FA1637947CCEF185EC09BAB996CE896();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_8C63693141217C69A0F011928FD9001A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_7653EB62453949D9D9D10DAC6A71930A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_59331B454AC55487362D25AB9D278192();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_0FAFAFB14E9A32BFE087EEB90BE25817();
	void BlueprintInitializeAnimation();
	void AnimNotify_StartTransition();
	void AnimNotify_EnterRepeat();
	void AnimNotify_EnterMovingIdleTwo();
	void AnimNotify_EnterMovingIdleOne();
	void AnimNotify_EnterIdleTwo();
	void AnimNotify_EnterIdleOne();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_FullBody_AnimGraphNode_TransitionResult_E729C1854456B72F5D87C78ABE74C55D();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimBP_NPC_FullBody_C">();
	}
	static class UAnimBP_NPC_FullBody_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimBP_NPC_FullBody_C>();
	}
};
static_assert(alignof(UAnimBP_NPC_FullBody_C) == 0x000010, "Wrong alignment on UAnimBP_NPC_FullBody_C");
static_assert(sizeof(UAnimBP_NPC_FullBody_C) == 0x000A90, "Wrong size on UAnimBP_NPC_FullBody_C");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, UberGraphFrame) == 0x000320, "Member 'UAnimBP_NPC_FullBody_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, __AnimBlueprintMutables) == 0x000328, "Member 'UAnimBP_NPC_FullBody_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, AnimBlueprintExtension_PropertyAccess) == 0x000330, "Member 'UAnimBP_NPC_FullBody_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, AnimBlueprintExtension_Base) == 0x000338, "Member 'UAnimBP_NPC_FullBody_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, AnimGraphNode_Root) == 0x000340, "Member 'UAnimBP_NPC_FullBody_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, AnimGraphNode_TransitionResult_16) == 0x000360, "Member 'UAnimBP_NPC_FullBody_C::AnimGraphNode_TransitionResult_16' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, AnimGraphNode_TransitionResult_15) == 0x000388, "Member 'UAnimBP_NPC_FullBody_C::AnimGraphNode_TransitionResult_15' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, AnimGraphNode_TransitionResult_14) == 0x0003B0, "Member 'UAnimBP_NPC_FullBody_C::AnimGraphNode_TransitionResult_14' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, AnimGraphNode_TransitionResult_13) == 0x0003D8, "Member 'UAnimBP_NPC_FullBody_C::AnimGraphNode_TransitionResult_13' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, AnimGraphNode_TransitionResult_12) == 0x000400, "Member 'UAnimBP_NPC_FullBody_C::AnimGraphNode_TransitionResult_12' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, AnimGraphNode_TransitionResult_11) == 0x000428, "Member 'UAnimBP_NPC_FullBody_C::AnimGraphNode_TransitionResult_11' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, AnimGraphNode_TransitionResult_10) == 0x000450, "Member 'UAnimBP_NPC_FullBody_C::AnimGraphNode_TransitionResult_10' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, AnimGraphNode_TransitionResult_9) == 0x000478, "Member 'UAnimBP_NPC_FullBody_C::AnimGraphNode_TransitionResult_9' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, AnimGraphNode_TransitionResult_8) == 0x0004A0, "Member 'UAnimBP_NPC_FullBody_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, AnimGraphNode_TransitionResult_7) == 0x0004C8, "Member 'UAnimBP_NPC_FullBody_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, AnimGraphNode_TransitionResult_6) == 0x0004F0, "Member 'UAnimBP_NPC_FullBody_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, AnimGraphNode_TransitionResult_5) == 0x000518, "Member 'UAnimBP_NPC_FullBody_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, AnimGraphNode_TransitionResult_4) == 0x000540, "Member 'UAnimBP_NPC_FullBody_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, AnimGraphNode_TransitionResult_3) == 0x000568, "Member 'UAnimBP_NPC_FullBody_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, AnimGraphNode_TransitionResult_2) == 0x000590, "Member 'UAnimBP_NPC_FullBody_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, AnimGraphNode_TransitionResult_1) == 0x0005B8, "Member 'UAnimBP_NPC_FullBody_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, AnimGraphNode_TransitionResult) == 0x0005E0, "Member 'UAnimBP_NPC_FullBody_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, AnimGraphNode_StateResult_7) == 0x000608, "Member 'UAnimBP_NPC_FullBody_C::AnimGraphNode_StateResult_7' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, AnimGraphNode_SequencePlayer_6) == 0x000628, "Member 'UAnimBP_NPC_FullBody_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, AnimGraphNode_StateResult_6) == 0x000670, "Member 'UAnimBP_NPC_FullBody_C::AnimGraphNode_StateResult_6' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, AnimGraphNode_SequencePlayer_5) == 0x000690, "Member 'UAnimBP_NPC_FullBody_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, AnimGraphNode_StateResult_5) == 0x0006D8, "Member 'UAnimBP_NPC_FullBody_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, AnimGraphNode_SequencePlayer_4) == 0x0006F8, "Member 'UAnimBP_NPC_FullBody_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, AnimGraphNode_StateResult_4) == 0x000740, "Member 'UAnimBP_NPC_FullBody_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, AnimGraphNode_SequencePlayer_3) == 0x000760, "Member 'UAnimBP_NPC_FullBody_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, AnimGraphNode_StateResult_3) == 0x0007A8, "Member 'UAnimBP_NPC_FullBody_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, AnimGraphNode_SequencePlayer_2) == 0x0007C8, "Member 'UAnimBP_NPC_FullBody_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, AnimGraphNode_StateResult_2) == 0x000810, "Member 'UAnimBP_NPC_FullBody_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, AnimGraphNode_SequencePlayer_1) == 0x000830, "Member 'UAnimBP_NPC_FullBody_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, AnimGraphNode_StateResult_1) == 0x000878, "Member 'UAnimBP_NPC_FullBody_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, AnimGraphNode_SequencePlayer) == 0x000898, "Member 'UAnimBP_NPC_FullBody_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, AnimGraphNode_StateResult) == 0x0008E0, "Member 'UAnimBP_NPC_FullBody_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, AnimGraphNode_StateMachine) == 0x000900, "Member 'UAnimBP_NPC_FullBody_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, K2Node_PropertyAccess_3) == 0x0009C8, "Member 'UAnimBP_NPC_FullBody_C::K2Node_PropertyAccess_3' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, K2Node_PropertyAccess_2) == 0x0009CC, "Member 'UAnimBP_NPC_FullBody_C::K2Node_PropertyAccess_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, K2Node_PropertyAccess_1) == 0x0009D0, "Member 'UAnimBP_NPC_FullBody_C::K2Node_PropertyAccess_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, K2Node_PropertyAccess) == 0x0009D4, "Member 'UAnimBP_NPC_FullBody_C::K2Node_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, IdleOne) == 0x0009D8, "Member 'UAnimBP_NPC_FullBody_C::IdleOne' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, IdleTwo) == 0x0009E0, "Member 'UAnimBP_NPC_FullBody_C::IdleTwo' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, MovingIdleOne) == 0x0009E8, "Member 'UAnimBP_NPC_FullBody_C::MovingIdleOne' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, MovingIdleTwo) == 0x0009F0, "Member 'UAnimBP_NPC_FullBody_C::MovingIdleTwo' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, InteractionBegin) == 0x0009F8, "Member 'UAnimBP_NPC_FullBody_C::InteractionBegin' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, InteractionLoop) == 0x000A00, "Member 'UAnimBP_NPC_FullBody_C::InteractionLoop' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, InteractionEnd) == 0x000A08, "Member 'UAnimBP_NPC_FullBody_C::InteractionEnd' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, bIsInInteraction) == 0x000A10, "Member 'UAnimBP_NPC_FullBody_C::bIsInInteraction' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, IdleAnimSettings) == 0x000A18, "Member 'UAnimBP_NPC_FullBody_C::IdleAnimSettings' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, IdlaStartPosition) == 0x000A70, "Member 'UAnimBP_NPC_FullBody_C::IdlaStartPosition' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, CurrentIdleRepeatCount) == 0x000A78, "Member 'UAnimBP_NPC_FullBody_C::CurrentIdleRepeatCount' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, CurrentAnimState) == 0x000A7C, "Member 'UAnimBP_NPC_FullBody_C::CurrentAnimState' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_FullBody_C, TargetIdleRepeatCount) == 0x000A80, "Member 'UAnimBP_NPC_FullBody_C::TargetIdleRepeatCount' has a wrong offset!");

}
