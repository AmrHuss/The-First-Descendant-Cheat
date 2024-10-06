#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_NpcBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// ScriptStruct AnimBP_NpcBase.AnimBP_NpcBase_C.AnimBlueprintGeneratedMutableData
// 0x0001 (0x0002 - 0x0001)
struct AnimBP_NpcBase::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	bool                                          __BoolProperty;                                    // 0x0001(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AnimBP_NpcBase::FAnimBlueprintGeneratedMutableData) == 0x000001, "Wrong alignment on AnimBP_NpcBase::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(AnimBP_NpcBase::FAnimBlueprintGeneratedMutableData) == 0x000002, "Wrong size on AnimBP_NpcBase::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(AnimBP_NpcBase::FAnimBlueprintGeneratedMutableData, __BoolProperty) == 0x000001, "Member 'AnimBP_NpcBase::FAnimBlueprintGeneratedMutableData::__BoolProperty' has a wrong offset!");

// ScriptStruct AnimBP_NpcBase.AnimBP_NpcBase_C.AnimBlueprintGeneratedConstantData
// 0x00F7 (0x00F8 - 0x0001)
struct AnimBP_NpcBase::FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_19;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_20;                                 // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlendProfile*                          __BlendProfile_21;                                 // 0x0018(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_22;                                   // 0x0020(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          __BoolProperty_23;                                 // 0x0028(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_24;                                 // 0x0029(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_25;                                 // 0x002A(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B[0x5];                                       // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_26;                                // 0x0030(0x0010)(BlueprintVisible, EditFixedSize)
	struct FAnimNodeFunctionRef                   __StructProperty_27;                               // 0x0040(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0060(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x00E0(0x0018)()
};
static_assert(alignof(AnimBP_NpcBase::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on AnimBP_NpcBase::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(AnimBP_NpcBase::FAnimBlueprintGeneratedConstantData) == 0x0000F8, "Wrong size on AnimBP_NpcBase::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(AnimBP_NpcBase::FAnimBlueprintGeneratedConstantData, __NameProperty_19) == 0x000004, "Member 'AnimBP_NpcBase::FAnimBlueprintGeneratedConstantData::__NameProperty_19' has a wrong offset!");
static_assert(offsetof(AnimBP_NpcBase::FAnimBlueprintGeneratedConstantData, __NameProperty_20) == 0x00000C, "Member 'AnimBP_NpcBase::FAnimBlueprintGeneratedConstantData::__NameProperty_20' has a wrong offset!");
static_assert(offsetof(AnimBP_NpcBase::FAnimBlueprintGeneratedConstantData, __BlendProfile_21) == 0x000018, "Member 'AnimBP_NpcBase::FAnimBlueprintGeneratedConstantData::__BlendProfile_21' has a wrong offset!");
static_assert(offsetof(AnimBP_NpcBase::FAnimBlueprintGeneratedConstantData, __CurveFloat_22) == 0x000020, "Member 'AnimBP_NpcBase::FAnimBlueprintGeneratedConstantData::__CurveFloat_22' has a wrong offset!");
static_assert(offsetof(AnimBP_NpcBase::FAnimBlueprintGeneratedConstantData, __BoolProperty_23) == 0x000028, "Member 'AnimBP_NpcBase::FAnimBlueprintGeneratedConstantData::__BoolProperty_23' has a wrong offset!");
static_assert(offsetof(AnimBP_NpcBase::FAnimBlueprintGeneratedConstantData, __EnumProperty_24) == 0x000029, "Member 'AnimBP_NpcBase::FAnimBlueprintGeneratedConstantData::__EnumProperty_24' has a wrong offset!");
static_assert(offsetof(AnimBP_NpcBase::FAnimBlueprintGeneratedConstantData, __EnumProperty_25) == 0x00002A, "Member 'AnimBP_NpcBase::FAnimBlueprintGeneratedConstantData::__EnumProperty_25' has a wrong offset!");
static_assert(offsetof(AnimBP_NpcBase::FAnimBlueprintGeneratedConstantData, __ArrayProperty_26) == 0x000030, "Member 'AnimBP_NpcBase::FAnimBlueprintGeneratedConstantData::__ArrayProperty_26' has a wrong offset!");
static_assert(offsetof(AnimBP_NpcBase::FAnimBlueprintGeneratedConstantData, __StructProperty_27) == 0x000040, "Member 'AnimBP_NpcBase::FAnimBlueprintGeneratedConstantData::__StructProperty_27' has a wrong offset!");
static_assert(offsetof(AnimBP_NpcBase::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000060, "Member 'AnimBP_NpcBase::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(AnimBP_NpcBase::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000E0, "Member 'AnimBP_NpcBase::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

}

