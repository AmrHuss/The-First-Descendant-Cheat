#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RW_TR_1003_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct RW_TR_1003_Skeleton_AnimBlueprint.RW_TR_1003_Skeleton_AnimBlueprint_C.AnimBlueprintGeneratedConstantData
// 0x00CF (0x00D0 - 0x0001)
struct RW_TR_1003_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_1;                                // 0x0008(0x0020)(BlueprintVisible, NoDestructor)
	class FName                                   __NameProperty_2;                                  // 0x0028(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_3;                                  // 0x0030(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0038(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x00B8(0x0018)()
};
static_assert(alignof(RW_TR_1003_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on RW_TR_1003_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(RW_TR_1003_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData) == 0x0000D0, "Wrong size on RW_TR_1003_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(RW_TR_1003_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData, __StructProperty_1) == 0x000008, "Member 'RW_TR_1003_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData::__StructProperty_1' has a wrong offset!");
static_assert(offsetof(RW_TR_1003_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData, __NameProperty_2) == 0x000028, "Member 'RW_TR_1003_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData::__NameProperty_2' has a wrong offset!");
static_assert(offsetof(RW_TR_1003_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData, __NameProperty_3) == 0x000030, "Member 'RW_TR_1003_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData::__NameProperty_3' has a wrong offset!");
static_assert(offsetof(RW_TR_1003_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000038, "Member 'RW_TR_1003_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(RW_TR_1003_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000B8, "Member 'RW_TR_1003_Skeleton_AnimBlueprint::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

}

