#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_NPC_040_CombatSupportDroid

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass AnimBP_NPC_040_CombatSupportDroid.AnimBP_NPC_040_CombatSupportDroid_C
// 0x0170 (0x0620 - 0x04B0)
class UAnimBP_NPC_040_CombatSupportDroid_C final : public UM1NpcAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x04B8(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x04C0(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x04C8(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x04E8(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0530(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0550(0x00C8)()

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void ExecuteUbergraph_AnimBP_NPC_040_CombatSupportDroid(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimBP_NPC_040_CombatSupportDroid_C">();
	}
	static class UAnimBP_NPC_040_CombatSupportDroid_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimBP_NPC_040_CombatSupportDroid_C>();
	}
};
static_assert(alignof(UAnimBP_NPC_040_CombatSupportDroid_C) == 0x000010, "Wrong alignment on UAnimBP_NPC_040_CombatSupportDroid_C");
static_assert(sizeof(UAnimBP_NPC_040_CombatSupportDroid_C) == 0x000620, "Wrong size on UAnimBP_NPC_040_CombatSupportDroid_C");
static_assert(offsetof(UAnimBP_NPC_040_CombatSupportDroid_C, UberGraphFrame) == 0x0004B0, "Member 'UAnimBP_NPC_040_CombatSupportDroid_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_040_CombatSupportDroid_C, AnimBlueprintExtension_PropertyAccess) == 0x0004B8, "Member 'UAnimBP_NPC_040_CombatSupportDroid_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_040_CombatSupportDroid_C, AnimBlueprintExtension_Base) == 0x0004C0, "Member 'UAnimBP_NPC_040_CombatSupportDroid_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_040_CombatSupportDroid_C, AnimGraphNode_Root) == 0x0004C8, "Member 'UAnimBP_NPC_040_CombatSupportDroid_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_040_CombatSupportDroid_C, AnimGraphNode_SequencePlayer) == 0x0004E8, "Member 'UAnimBP_NPC_040_CombatSupportDroid_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_040_CombatSupportDroid_C, AnimGraphNode_StateResult) == 0x000530, "Member 'UAnimBP_NPC_040_CombatSupportDroid_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UAnimBP_NPC_040_CombatSupportDroid_C, AnimGraphNode_StateMachine) == 0x000550, "Member 'UAnimBP_NPC_040_CombatSupportDroid_C::AnimGraphNode_StateMachine' has a wrong offset!");

}
