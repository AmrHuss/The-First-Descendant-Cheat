#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RW_SG_1003_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct RW_SG_1003_AnimBP.RW_SG_1003_AnimBP_C.AnimBlueprintGeneratedConstantData
// 0x00CF (0x00D0 - 0x0001)
struct RW_SG_1003_AnimBP::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_7;                                  // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_8;                                  // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_9;                                // 0x0018(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0038(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x00B8(0x0018)()
};
static_assert(alignof(RW_SG_1003_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on RW_SG_1003_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(RW_SG_1003_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x0000D0, "Wrong size on RW_SG_1003_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(RW_SG_1003_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_7) == 0x000004, "Member 'RW_SG_1003_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_7' has a wrong offset!");
static_assert(offsetof(RW_SG_1003_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_8) == 0x00000C, "Member 'RW_SG_1003_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_8' has a wrong offset!");
static_assert(offsetof(RW_SG_1003_AnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_9) == 0x000018, "Member 'RW_SG_1003_AnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_9' has a wrong offset!");
static_assert(offsetof(RW_SG_1003_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000038, "Member 'RW_SG_1003_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(RW_SG_1003_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000B8, "Member 'RW_SG_1003_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

}

