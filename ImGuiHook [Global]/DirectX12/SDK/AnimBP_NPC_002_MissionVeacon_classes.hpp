#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_NPC_002_MissionVeacon

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AnimBP_NPC_002_MissionVeacon.AnimBP_NPC_002_MissionVeacon_C
// 0x0340 (0x07F0 - 0x04B0)
class UAnimBP_NPC_002_MissionVeacon_C final : public UM1NpcAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x04B8(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x04C0(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x04C8(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x04E8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0510(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0538(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0560(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0588(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x05D0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x05F0(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0638(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0658(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x06A0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x06C0(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0708(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0728(0x00C8)()

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_002_MissionVeacon_AnimGraphNode_TransitionResult_83A1E8B649A3CC134AF560A46C40F132();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_002_MissionVeacon_AnimGraphNode_TransitionResult_928235D34CED8EBA9F119282BADFA3FB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_NPC_002_MissionVeacon_AnimGraphNode_TransitionResult_B3BE84E546BBF066F08EB281B7F2C94F();
	void ExecuteUbergraph_AnimBP_NPC_002_MissionVeacon(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimBP_NPC_002_MissionVeacon_C">();
	}
	static class UAnimBP_NPC_002_MissionVeacon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimBP_NPC_002_MissionVeacon_C>();
	}
};
static_assert(alignof(UAnimBP_NPC_002_MissionVeacon_C) == 0x000010, "Wrong alignment on UAnimBP_NPC_002_MissionVeacon_C");
static_assert(sizeof(UAnimBP_NPC_002_MissionVeacon_C) == 0x0007F0, "Wrong size on UAnimBP_NPC_002_MissionVeacon_C");
static_assert(offsetof(UAnimBP_NPC_002_MissionVeacon_C, UberGraphFrame) == 0x0004B0, "Member 'UAnimBP_NPC_002_MissionVeacon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_002_MissionVeacon_C, AnimBlueprintExtension_PropertyAccess) == 0x0004B8, "Member 'UAnimBP_NPC_002_MissionVeacon_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_002_MissionVeacon_C, AnimBlueprintExtension_Base) == 0x0004C0, "Member 'UAnimBP_NPC_002_MissionVeacon_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_002_MissionVeacon_C, AnimGraphNode_Root) == 0x0004C8, "Member 'UAnimBP_NPC_002_MissionVeacon_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_002_MissionVeacon_C, AnimGraphNode_TransitionResult_3) == 0x0004E8, "Member 'UAnimBP_NPC_002_MissionVeacon_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_002_MissionVeacon_C, AnimGraphNode_TransitionResult_2) == 0x000510, "Member 'UAnimBP_NPC_002_MissionVeacon_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_002_MissionVeacon_C, AnimGraphNode_TransitionResult_1) == 0x000538, "Member 'UAnimBP_NPC_002_MissionVeacon_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_002_MissionVeacon_C, AnimGraphNode_TransitionResult) == 0x000560, "Member 'UAnimBP_NPC_002_MissionVeacon_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_002_MissionVeacon_C, AnimGraphNode_SequencePlayer_3) == 0x000588, "Member 'UAnimBP_NPC_002_MissionVeacon_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_002_MissionVeacon_C, AnimGraphNode_StateResult_3) == 0x0005D0, "Member 'UAnimBP_NPC_002_MissionVeacon_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_002_MissionVeacon_C, AnimGraphNode_SequencePlayer_2) == 0x0005F0, "Member 'UAnimBP_NPC_002_MissionVeacon_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_002_MissionVeacon_C, AnimGraphNode_StateResult_2) == 0x000638, "Member 'UAnimBP_NPC_002_MissionVeacon_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_002_MissionVeacon_C, AnimGraphNode_SequencePlayer_1) == 0x000658, "Member 'UAnimBP_NPC_002_MissionVeacon_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_002_MissionVeacon_C, AnimGraphNode_StateResult_1) == 0x0006A0, "Member 'UAnimBP_NPC_002_MissionVeacon_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_002_MissionVeacon_C, AnimGraphNode_SequencePlayer) == 0x0006C0, "Member 'UAnimBP_NPC_002_MissionVeacon_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_002_MissionVeacon_C, AnimGraphNode_StateResult) == 0x000708, "Member 'UAnimBP_NPC_002_MissionVeacon_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_002_MissionVeacon_C, AnimGraphNode_StateMachine) == 0x000728, "Member 'UAnimBP_NPC_002_MissionVeacon_C::AnimGraphNode_StateMachine' has a wrong offset!");

}

