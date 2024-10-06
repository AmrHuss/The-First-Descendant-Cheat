#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Sec_MOB_CMN_1003_A

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "M1AnimPhys_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass BP_Sec_MOB_CMN_1003_A.BP_Sec_MOB_CMN_1003_A_C
// 0x1050 (0x1370 - 0x0320)
class UBP_Sec_MOB_CMN_1003_A_C final : public UAnimInstance
{
public:
	uint8                                         Pad_318[0x8];                                      // 0x0318(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0328(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0330(0x0008)()
	uint8                                         Pad_338[0x8];                                      // 0x0338(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_3;                        // 0x0340(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_2;                        // 0x0710(0x03D0)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x0AE0(0x00C8)()
	uint8                                         Pad_BA8[0x8];                                      // 0x0BA8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_1;                        // 0x0BB0(0x03D0)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0F80(0x0020)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys;                          // 0x0FA0(0x03D0)()

public:
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0);
	void ExecuteUbergraph_BP_Sec_MOB_CMN_1003_A(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Sec_MOB_CMN_1003_A_C">();
	}
	static class UBP_Sec_MOB_CMN_1003_A_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Sec_MOB_CMN_1003_A_C>();
	}
};
static_assert(alignof(UBP_Sec_MOB_CMN_1003_A_C) == 0x000010, "Wrong alignment on UBP_Sec_MOB_CMN_1003_A_C");
static_assert(sizeof(UBP_Sec_MOB_CMN_1003_A_C) == 0x001370, "Wrong size on UBP_Sec_MOB_CMN_1003_A_C");
static_assert(offsetof(UBP_Sec_MOB_CMN_1003_A_C, UberGraphFrame) == 0x000320, "Member 'UBP_Sec_MOB_CMN_1003_A_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Sec_MOB_CMN_1003_A_C, AnimBlueprintExtension_PropertyAccess) == 0x000328, "Member 'UBP_Sec_MOB_CMN_1003_A_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UBP_Sec_MOB_CMN_1003_A_C, AnimBlueprintExtension_Base) == 0x000330, "Member 'UBP_Sec_MOB_CMN_1003_A_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UBP_Sec_MOB_CMN_1003_A_C, M1AnimGraphNode_AnimPhys_3) == 0x000340, "Member 'UBP_Sec_MOB_CMN_1003_A_C::M1AnimGraphNode_AnimPhys_3' has a wrong offset!");
static_assert(offsetof(UBP_Sec_MOB_CMN_1003_A_C, M1AnimGraphNode_AnimPhys_2) == 0x000710, "Member 'UBP_Sec_MOB_CMN_1003_A_C::M1AnimGraphNode_AnimPhys_2' has a wrong offset!");
static_assert(offsetof(UBP_Sec_MOB_CMN_1003_A_C, AnimGraphNode_LinkedInputPose) == 0x000AE0, "Member 'UBP_Sec_MOB_CMN_1003_A_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UBP_Sec_MOB_CMN_1003_A_C, M1AnimGraphNode_AnimPhys_1) == 0x000BB0, "Member 'UBP_Sec_MOB_CMN_1003_A_C::M1AnimGraphNode_AnimPhys_1' has a wrong offset!");
static_assert(offsetof(UBP_Sec_MOB_CMN_1003_A_C, AnimGraphNode_Root) == 0x000F80, "Member 'UBP_Sec_MOB_CMN_1003_A_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UBP_Sec_MOB_CMN_1003_A_C, M1AnimGraphNode_AnimPhys) == 0x000FA0, "Member 'UBP_Sec_MOB_CMN_1003_A_C::M1AnimGraphNode_AnimPhys' has a wrong offset!");

}
