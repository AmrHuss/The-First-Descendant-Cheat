#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_CampTank

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct AnimBP_CampTank.AnimBP_CampTank_C.AnimBlueprintGeneratedConstantData
// 0x012F (0x0130 - 0x0001)
struct AnimBP_CampTank::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_60;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_61;                                 // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_62;                                  // 0x0014(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_63;                                 // 0x0018(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_64;                                 // 0x001C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_65;                                  // 0x0024(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_66;                                // 0x0028(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_67;                               // 0x002C(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_68;                                // 0x0058(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_69;                                 // 0x005C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_70;                                 // 0x005D(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_71;                                 // 0x005E(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F[0x1];                                       // 0x005F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_72;                                 // 0x0060(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_73;                                 // 0x0068(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_74;                                  // 0x0070(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_75;                               // 0x0078(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0098(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0118(0x0018)()
};
static_assert(alignof(AnimBP_CampTank::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on AnimBP_CampTank::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(AnimBP_CampTank::FAnimBlueprintGeneratedConstantData) == 0x000130, "Wrong size on AnimBP_CampTank::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(AnimBP_CampTank::FAnimBlueprintGeneratedConstantData, __NameProperty_60) == 0x000004, "Member 'AnimBP_CampTank::FAnimBlueprintGeneratedConstantData::__NameProperty_60' has a wrong offset!");
static_assert(offsetof(AnimBP_CampTank::FAnimBlueprintGeneratedConstantData, __NameProperty_61) == 0x00000C, "Member 'AnimBP_CampTank::FAnimBlueprintGeneratedConstantData::__NameProperty_61' has a wrong offset!");
static_assert(offsetof(AnimBP_CampTank::FAnimBlueprintGeneratedConstantData, __IntProperty_62) == 0x000014, "Member 'AnimBP_CampTank::FAnimBlueprintGeneratedConstantData::__IntProperty_62' has a wrong offset!");
static_assert(offsetof(AnimBP_CampTank::FAnimBlueprintGeneratedConstantData, __BoolProperty_63) == 0x000018, "Member 'AnimBP_CampTank::FAnimBlueprintGeneratedConstantData::__BoolProperty_63' has a wrong offset!");
static_assert(offsetof(AnimBP_CampTank::FAnimBlueprintGeneratedConstantData, __NameProperty_64) == 0x00001C, "Member 'AnimBP_CampTank::FAnimBlueprintGeneratedConstantData::__NameProperty_64' has a wrong offset!");
static_assert(offsetof(AnimBP_CampTank::FAnimBlueprintGeneratedConstantData, __IntProperty_65) == 0x000024, "Member 'AnimBP_CampTank::FAnimBlueprintGeneratedConstantData::__IntProperty_65' has a wrong offset!");
static_assert(offsetof(AnimBP_CampTank::FAnimBlueprintGeneratedConstantData, __FloatProperty_66) == 0x000028, "Member 'AnimBP_CampTank::FAnimBlueprintGeneratedConstantData::__FloatProperty_66' has a wrong offset!");
static_assert(offsetof(AnimBP_CampTank::FAnimBlueprintGeneratedConstantData, __StructProperty_67) == 0x00002C, "Member 'AnimBP_CampTank::FAnimBlueprintGeneratedConstantData::__StructProperty_67' has a wrong offset!");
static_assert(offsetof(AnimBP_CampTank::FAnimBlueprintGeneratedConstantData, __FloatProperty_68) == 0x000058, "Member 'AnimBP_CampTank::FAnimBlueprintGeneratedConstantData::__FloatProperty_68' has a wrong offset!");
static_assert(offsetof(AnimBP_CampTank::FAnimBlueprintGeneratedConstantData, __BoolProperty_69) == 0x00005C, "Member 'AnimBP_CampTank::FAnimBlueprintGeneratedConstantData::__BoolProperty_69' has a wrong offset!");
static_assert(offsetof(AnimBP_CampTank::FAnimBlueprintGeneratedConstantData, __EnumProperty_70) == 0x00005D, "Member 'AnimBP_CampTank::FAnimBlueprintGeneratedConstantData::__EnumProperty_70' has a wrong offset!");
static_assert(offsetof(AnimBP_CampTank::FAnimBlueprintGeneratedConstantData, __ByteProperty_71) == 0x00005E, "Member 'AnimBP_CampTank::FAnimBlueprintGeneratedConstantData::__ByteProperty_71' has a wrong offset!");
static_assert(offsetof(AnimBP_CampTank::FAnimBlueprintGeneratedConstantData, __NameProperty_72) == 0x000060, "Member 'AnimBP_CampTank::FAnimBlueprintGeneratedConstantData::__NameProperty_72' has a wrong offset!");
static_assert(offsetof(AnimBP_CampTank::FAnimBlueprintGeneratedConstantData, __NameProperty_73) == 0x000068, "Member 'AnimBP_CampTank::FAnimBlueprintGeneratedConstantData::__NameProperty_73' has a wrong offset!");
static_assert(offsetof(AnimBP_CampTank::FAnimBlueprintGeneratedConstantData, __IntProperty_74) == 0x000070, "Member 'AnimBP_CampTank::FAnimBlueprintGeneratedConstantData::__IntProperty_74' has a wrong offset!");
static_assert(offsetof(AnimBP_CampTank::FAnimBlueprintGeneratedConstantData, __StructProperty_75) == 0x000078, "Member 'AnimBP_CampTank::FAnimBlueprintGeneratedConstantData::__StructProperty_75' has a wrong offset!");
static_assert(offsetof(AnimBP_CampTank::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000098, "Member 'AnimBP_CampTank::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(AnimBP_CampTank::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000118, "Member 'AnimBP_CampTank::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

}

