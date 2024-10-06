#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_PC_003_A0101

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// ScriptStruct ABP_PC_003_A0101.ABP_PC_003_A0101_C.AnimBlueprintGeneratedMutableData
// 0x0007 (0x0008 - 0x0001)
struct ABP_PC_003_A0101::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         __IntProperty;                                     // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_PC_003_A0101::FAnimBlueprintGeneratedMutableData) == 0x000004, "Wrong alignment on ABP_PC_003_A0101::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(ABP_PC_003_A0101::FAnimBlueprintGeneratedMutableData) == 0x000008, "Wrong size on ABP_PC_003_A0101::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(ABP_PC_003_A0101::FAnimBlueprintGeneratedMutableData, __IntProperty) == 0x000004, "Member 'ABP_PC_003_A0101::FAnimBlueprintGeneratedMutableData::__IntProperty' has a wrong offset!");

// ScriptStruct ABP_PC_003_A0101.ABP_PC_003_A0101_C.AnimBlueprintGeneratedConstantData
// 0x015F (0x0160 - 0x0001)
struct ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_130;                                // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_131;                                // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_132;                                 // 0x0014(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_133;                                // 0x0018(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_134;                                 // 0x0020(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_135;                                // 0x0024(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlendProfile*                          __BlendProfile_136;                                // 0x0028(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_137;                                  // 0x0030(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_138;                                // 0x0038(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_139;                                // 0x0039(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_140;                               // 0x0040(0x0010)(BlueprintVisible, EditFixedSize)
	class FName                                   __NameProperty_141;                                // 0x0050(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_142;                                 // 0x0058(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_143;                               // 0x005C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_144;                              // 0x0060(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_145;                               // 0x008C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_146;                                // 0x0090(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_147;                                // 0x0091(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_148;                                // 0x0092(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_93[0x1];                                       // 0x0093(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_149;                                // 0x0094(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_150;                                // 0x009C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_151;                                 // 0x00A4(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimNodeFunctionRef                   __StructProperty_152;                              // 0x00A8(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x00C8(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0148(0x0018)()
};
static_assert(alignof(ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData) == 0x000160, "Wrong size on ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData, __NameProperty_130) == 0x000004, "Member 'ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData::__NameProperty_130' has a wrong offset!");
static_assert(offsetof(ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData, __NameProperty_131) == 0x00000C, "Member 'ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData::__NameProperty_131' has a wrong offset!");
static_assert(offsetof(ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData, __IntProperty_132) == 0x000014, "Member 'ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData::__IntProperty_132' has a wrong offset!");
static_assert(offsetof(ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData, __NameProperty_133) == 0x000018, "Member 'ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData::__NameProperty_133' has a wrong offset!");
static_assert(offsetof(ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData, __IntProperty_134) == 0x000020, "Member 'ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData::__IntProperty_134' has a wrong offset!");
static_assert(offsetof(ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData, __BoolProperty_135) == 0x000024, "Member 'ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData::__BoolProperty_135' has a wrong offset!");
static_assert(offsetof(ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData, __BlendProfile_136) == 0x000028, "Member 'ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData::__BlendProfile_136' has a wrong offset!");
static_assert(offsetof(ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData, __CurveFloat_137) == 0x000030, "Member 'ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData::__CurveFloat_137' has a wrong offset!");
static_assert(offsetof(ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData, __EnumProperty_138) == 0x000038, "Member 'ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData::__EnumProperty_138' has a wrong offset!");
static_assert(offsetof(ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData, __EnumProperty_139) == 0x000039, "Member 'ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData::__EnumProperty_139' has a wrong offset!");
static_assert(offsetof(ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData, __ArrayProperty_140) == 0x000040, "Member 'ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData::__ArrayProperty_140' has a wrong offset!");
static_assert(offsetof(ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData, __NameProperty_141) == 0x000050, "Member 'ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData::__NameProperty_141' has a wrong offset!");
static_assert(offsetof(ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData, __IntProperty_142) == 0x000058, "Member 'ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData::__IntProperty_142' has a wrong offset!");
static_assert(offsetof(ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData, __FloatProperty_143) == 0x00005C, "Member 'ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData::__FloatProperty_143' has a wrong offset!");
static_assert(offsetof(ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData, __StructProperty_144) == 0x000060, "Member 'ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData::__StructProperty_144' has a wrong offset!");
static_assert(offsetof(ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData, __FloatProperty_145) == 0x00008C, "Member 'ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData::__FloatProperty_145' has a wrong offset!");
static_assert(offsetof(ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData, __BoolProperty_146) == 0x000090, "Member 'ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData::__BoolProperty_146' has a wrong offset!");
static_assert(offsetof(ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData, __EnumProperty_147) == 0x000091, "Member 'ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData::__EnumProperty_147' has a wrong offset!");
static_assert(offsetof(ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData, __ByteProperty_148) == 0x000092, "Member 'ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData::__ByteProperty_148' has a wrong offset!");
static_assert(offsetof(ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData, __NameProperty_149) == 0x000094, "Member 'ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData::__NameProperty_149' has a wrong offset!");
static_assert(offsetof(ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData, __NameProperty_150) == 0x00009C, "Member 'ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData::__NameProperty_150' has a wrong offset!");
static_assert(offsetof(ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData, __IntProperty_151) == 0x0000A4, "Member 'ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData::__IntProperty_151' has a wrong offset!");
static_assert(offsetof(ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData, __StructProperty_152) == 0x0000A8, "Member 'ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData::__StructProperty_152' has a wrong offset!");
static_assert(offsetof(ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000C8, "Member 'ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000148, "Member 'ABP_PC_003_A0101::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

}
