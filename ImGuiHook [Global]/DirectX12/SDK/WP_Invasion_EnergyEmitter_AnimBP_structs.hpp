#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WP_Invasion_EnergyEmitter_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// ScriptStruct WP_Invasion_EnergyEmitter_AnimBP.WP_Invasion_EnergyEmitter_AnimBP_C.AnimBlueprintGeneratedConstantData
// 0x0177 (0x0178 - 0x0001)
struct WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_145;                                // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_146;                                // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_147;                                 // 0x0014(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_148;                                // 0x0018(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_149;                                 // 0x0020(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_150;                                // 0x0024(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_151;                                 // 0x002C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_152;                                // 0x0030(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_153;                                 // 0x0038(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_154;                                // 0x003C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlendProfile*                          __BlendProfile_155;                                // 0x0040(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_156;                                  // 0x0048(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_157;                                // 0x0050(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_158;                                // 0x0051(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_159;                               // 0x0058(0x0010)(BlueprintVisible, EditFixedSize)
	class FName                                   __NameProperty_160;                                // 0x0068(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_161;                                 // 0x0070(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_162;                                // 0x0074(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_163;                                 // 0x007C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_164;                               // 0x0080(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_165;                              // 0x0084(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_166;                               // 0x00B0(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_167;                                // 0x00B4(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_168;                                // 0x00B5(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_169;                                // 0x00B6(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B7[0x1];                                       // 0x00B7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_170;                                // 0x00B8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimNodeFunctionRef                   __StructProperty_171;                              // 0x00C0(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x00E0(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0160(0x0018)()
};
static_assert(alignof(WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x000178, "Wrong size on WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_145) == 0x000004, "Member 'WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_145' has a wrong offset!");
static_assert(offsetof(WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_146) == 0x00000C, "Member 'WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_146' has a wrong offset!");
static_assert(offsetof(WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_147) == 0x000014, "Member 'WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_147' has a wrong offset!");
static_assert(offsetof(WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_148) == 0x000018, "Member 'WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_148' has a wrong offset!");
static_assert(offsetof(WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_149) == 0x000020, "Member 'WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_149' has a wrong offset!");
static_assert(offsetof(WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_150) == 0x000024, "Member 'WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_150' has a wrong offset!");
static_assert(offsetof(WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_151) == 0x00002C, "Member 'WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_151' has a wrong offset!");
static_assert(offsetof(WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_152) == 0x000030, "Member 'WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_152' has a wrong offset!");
static_assert(offsetof(WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_153) == 0x000038, "Member 'WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_153' has a wrong offset!");
static_assert(offsetof(WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData, __BoolProperty_154) == 0x00003C, "Member 'WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData::__BoolProperty_154' has a wrong offset!");
static_assert(offsetof(WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData, __BlendProfile_155) == 0x000040, "Member 'WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData::__BlendProfile_155' has a wrong offset!");
static_assert(offsetof(WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData, __CurveFloat_156) == 0x000048, "Member 'WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData::__CurveFloat_156' has a wrong offset!");
static_assert(offsetof(WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_157) == 0x000050, "Member 'WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_157' has a wrong offset!");
static_assert(offsetof(WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_158) == 0x000051, "Member 'WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_158' has a wrong offset!");
static_assert(offsetof(WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_159) == 0x000058, "Member 'WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_159' has a wrong offset!");
static_assert(offsetof(WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_160) == 0x000068, "Member 'WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_160' has a wrong offset!");
static_assert(offsetof(WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_161) == 0x000070, "Member 'WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_161' has a wrong offset!");
static_assert(offsetof(WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_162) == 0x000074, "Member 'WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_162' has a wrong offset!");
static_assert(offsetof(WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_163) == 0x00007C, "Member 'WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_163' has a wrong offset!");
static_assert(offsetof(WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData, __FloatProperty_164) == 0x000080, "Member 'WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData::__FloatProperty_164' has a wrong offset!");
static_assert(offsetof(WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_165) == 0x000084, "Member 'WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_165' has a wrong offset!");
static_assert(offsetof(WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData, __FloatProperty_166) == 0x0000B0, "Member 'WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData::__FloatProperty_166' has a wrong offset!");
static_assert(offsetof(WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData, __BoolProperty_167) == 0x0000B4, "Member 'WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData::__BoolProperty_167' has a wrong offset!");
static_assert(offsetof(WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_168) == 0x0000B5, "Member 'WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_168' has a wrong offset!");
static_assert(offsetof(WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData, __ByteProperty_169) == 0x0000B6, "Member 'WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData::__ByteProperty_169' has a wrong offset!");
static_assert(offsetof(WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_170) == 0x0000B8, "Member 'WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_170' has a wrong offset!");
static_assert(offsetof(WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_171) == 0x0000C0, "Member 'WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_171' has a wrong offset!");
static_assert(offsetof(WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000E0, "Member 'WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000160, "Member 'WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct WP_Invasion_EnergyEmitter_AnimBP.WP_Invasion_EnergyEmitter_AnimBP_C.AnimBlueprintGeneratedMutableData
// 0x0001 (0x0002 - 0x0001)
struct WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	bool                                          __BoolProperty;                                    // 0x0001(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedMutableData) == 0x000001, "Wrong alignment on WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedMutableData) == 0x000002, "Wrong size on WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty) == 0x000001, "Member 'WP_Invasion_EnergyEmitter_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty' has a wrong offset!");

}
