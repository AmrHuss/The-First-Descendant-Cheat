#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StreamlineDeepDVCBlueprint

#include "Basic.hpp"

#include "StreamlineDeepDVCBlueprint_structs.hpp"
#include "StreamlineBlueprint_structs.hpp"


namespace SDK::Params
{

// Function StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.GetDeepDVCIntensity
// 0x0004 (0x0004 - 0x0000)
struct StreamlineLibraryDeepDVC_GetDeepDVCIntensity final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(StreamlineLibraryDeepDVC_GetDeepDVCIntensity) == 0x000004, "Wrong alignment on StreamlineLibraryDeepDVC_GetDeepDVCIntensity");
static_assert(sizeof(StreamlineLibraryDeepDVC_GetDeepDVCIntensity) == 0x000004, "Wrong size on StreamlineLibraryDeepDVC_GetDeepDVCIntensity");
static_assert(offsetof(StreamlineLibraryDeepDVC_GetDeepDVCIntensity, ReturnValue) == 0x000000, "Member 'StreamlineLibraryDeepDVC_GetDeepDVCIntensity::ReturnValue' has a wrong offset!");

// Function StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.GetDeepDVCMode
// 0x0001 (0x0001 - 0x0000)
struct StreamlineLibraryDeepDVC_GetDeepDVCMode final
{
public:
	EUStreamlineDeepDVCMode                       ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(StreamlineLibraryDeepDVC_GetDeepDVCMode) == 0x000001, "Wrong alignment on StreamlineLibraryDeepDVC_GetDeepDVCMode");
static_assert(sizeof(StreamlineLibraryDeepDVC_GetDeepDVCMode) == 0x000001, "Wrong size on StreamlineLibraryDeepDVC_GetDeepDVCMode");
static_assert(offsetof(StreamlineLibraryDeepDVC_GetDeepDVCMode, ReturnValue) == 0x000000, "Member 'StreamlineLibraryDeepDVC_GetDeepDVCMode::ReturnValue' has a wrong offset!");

// Function StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.GetDeepDVCSaturationBoost
// 0x0004 (0x0004 - 0x0000)
struct StreamlineLibraryDeepDVC_GetDeepDVCSaturationBoost final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(StreamlineLibraryDeepDVC_GetDeepDVCSaturationBoost) == 0x000004, "Wrong alignment on StreamlineLibraryDeepDVC_GetDeepDVCSaturationBoost");
static_assert(sizeof(StreamlineLibraryDeepDVC_GetDeepDVCSaturationBoost) == 0x000004, "Wrong size on StreamlineLibraryDeepDVC_GetDeepDVCSaturationBoost");
static_assert(offsetof(StreamlineLibraryDeepDVC_GetDeepDVCSaturationBoost, ReturnValue) == 0x000000, "Member 'StreamlineLibraryDeepDVC_GetDeepDVCSaturationBoost::ReturnValue' has a wrong offset!");

// Function StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.GetDefaultDeepDVCMode
// 0x0001 (0x0001 - 0x0000)
struct StreamlineLibraryDeepDVC_GetDefaultDeepDVCMode final
{
public:
	EUStreamlineDeepDVCMode                       ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(StreamlineLibraryDeepDVC_GetDefaultDeepDVCMode) == 0x000001, "Wrong alignment on StreamlineLibraryDeepDVC_GetDefaultDeepDVCMode");
static_assert(sizeof(StreamlineLibraryDeepDVC_GetDefaultDeepDVCMode) == 0x000001, "Wrong size on StreamlineLibraryDeepDVC_GetDefaultDeepDVCMode");
static_assert(offsetof(StreamlineLibraryDeepDVC_GetDefaultDeepDVCMode, ReturnValue) == 0x000000, "Member 'StreamlineLibraryDeepDVC_GetDefaultDeepDVCMode::ReturnValue' has a wrong offset!");

// Function StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.GetSupportedDeepDVCModes
// 0x0010 (0x0010 - 0x0000)
struct StreamlineLibraryDeepDVC_GetSupportedDeepDVCModes final
{
public:
	TArray<EUStreamlineDeepDVCMode>               ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(StreamlineLibraryDeepDVC_GetSupportedDeepDVCModes) == 0x000008, "Wrong alignment on StreamlineLibraryDeepDVC_GetSupportedDeepDVCModes");
static_assert(sizeof(StreamlineLibraryDeepDVC_GetSupportedDeepDVCModes) == 0x000010, "Wrong size on StreamlineLibraryDeepDVC_GetSupportedDeepDVCModes");
static_assert(offsetof(StreamlineLibraryDeepDVC_GetSupportedDeepDVCModes, ReturnValue) == 0x000000, "Member 'StreamlineLibraryDeepDVC_GetSupportedDeepDVCModes::ReturnValue' has a wrong offset!");

// Function StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.IsDeepDVCModeSupported
// 0x0002 (0x0002 - 0x0000)
struct StreamlineLibraryDeepDVC_IsDeepDVCModeSupported final
{
public:
	EUStreamlineDeepDVCMode                       DeepDVCMode;                                       // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(StreamlineLibraryDeepDVC_IsDeepDVCModeSupported) == 0x000001, "Wrong alignment on StreamlineLibraryDeepDVC_IsDeepDVCModeSupported");
static_assert(sizeof(StreamlineLibraryDeepDVC_IsDeepDVCModeSupported) == 0x000002, "Wrong size on StreamlineLibraryDeepDVC_IsDeepDVCModeSupported");
static_assert(offsetof(StreamlineLibraryDeepDVC_IsDeepDVCModeSupported, DeepDVCMode) == 0x000000, "Member 'StreamlineLibraryDeepDVC_IsDeepDVCModeSupported::DeepDVCMode' has a wrong offset!");
static_assert(offsetof(StreamlineLibraryDeepDVC_IsDeepDVCModeSupported, ReturnValue) == 0x000001, "Member 'StreamlineLibraryDeepDVC_IsDeepDVCModeSupported::ReturnValue' has a wrong offset!");

// Function StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.IsDeepDVCSupported
// 0x0001 (0x0001 - 0x0000)
struct StreamlineLibraryDeepDVC_IsDeepDVCSupported final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(StreamlineLibraryDeepDVC_IsDeepDVCSupported) == 0x000001, "Wrong alignment on StreamlineLibraryDeepDVC_IsDeepDVCSupported");
static_assert(sizeof(StreamlineLibraryDeepDVC_IsDeepDVCSupported) == 0x000001, "Wrong size on StreamlineLibraryDeepDVC_IsDeepDVCSupported");
static_assert(offsetof(StreamlineLibraryDeepDVC_IsDeepDVCSupported, ReturnValue) == 0x000000, "Member 'StreamlineLibraryDeepDVC_IsDeepDVCSupported::ReturnValue' has a wrong offset!");

// Function StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.QueryDeepDVCSupport
// 0x0001 (0x0001 - 0x0000)
struct StreamlineLibraryDeepDVC_QueryDeepDVCSupport final
{
public:
	EUStreamlineFeatureSupport                    ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(StreamlineLibraryDeepDVC_QueryDeepDVCSupport) == 0x000001, "Wrong alignment on StreamlineLibraryDeepDVC_QueryDeepDVCSupport");
static_assert(sizeof(StreamlineLibraryDeepDVC_QueryDeepDVCSupport) == 0x000001, "Wrong size on StreamlineLibraryDeepDVC_QueryDeepDVCSupport");
static_assert(offsetof(StreamlineLibraryDeepDVC_QueryDeepDVCSupport, ReturnValue) == 0x000000, "Member 'StreamlineLibraryDeepDVC_QueryDeepDVCSupport::ReturnValue' has a wrong offset!");

// Function StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.SetDeepDVCIntensity
// 0x0004 (0x0004 - 0x0000)
struct StreamlineLibraryDeepDVC_SetDeepDVCIntensity final
{
public:
	float                                         Intensity;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(StreamlineLibraryDeepDVC_SetDeepDVCIntensity) == 0x000004, "Wrong alignment on StreamlineLibraryDeepDVC_SetDeepDVCIntensity");
static_assert(sizeof(StreamlineLibraryDeepDVC_SetDeepDVCIntensity) == 0x000004, "Wrong size on StreamlineLibraryDeepDVC_SetDeepDVCIntensity");
static_assert(offsetof(StreamlineLibraryDeepDVC_SetDeepDVCIntensity, Intensity) == 0x000000, "Member 'StreamlineLibraryDeepDVC_SetDeepDVCIntensity::Intensity' has a wrong offset!");

// Function StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.SetDeepDVCMode
// 0x0001 (0x0001 - 0x0000)
struct StreamlineLibraryDeepDVC_SetDeepDVCMode final
{
public:
	EUStreamlineDeepDVCMode                       DeepDVCMode;                                       // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(StreamlineLibraryDeepDVC_SetDeepDVCMode) == 0x000001, "Wrong alignment on StreamlineLibraryDeepDVC_SetDeepDVCMode");
static_assert(sizeof(StreamlineLibraryDeepDVC_SetDeepDVCMode) == 0x000001, "Wrong size on StreamlineLibraryDeepDVC_SetDeepDVCMode");
static_assert(offsetof(StreamlineLibraryDeepDVC_SetDeepDVCMode, DeepDVCMode) == 0x000000, "Member 'StreamlineLibraryDeepDVC_SetDeepDVCMode::DeepDVCMode' has a wrong offset!");

// Function StreamlineDeepDVCBlueprint.StreamlineLibraryDeepDVC.SetDeepDVCSaturationBoost
// 0x0004 (0x0004 - 0x0000)
struct StreamlineLibraryDeepDVC_SetDeepDVCSaturationBoost final
{
public:
	float                                         Intensity;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(StreamlineLibraryDeepDVC_SetDeepDVCSaturationBoost) == 0x000004, "Wrong alignment on StreamlineLibraryDeepDVC_SetDeepDVCSaturationBoost");
static_assert(sizeof(StreamlineLibraryDeepDVC_SetDeepDVCSaturationBoost) == 0x000004, "Wrong size on StreamlineLibraryDeepDVC_SetDeepDVCSaturationBoost");
static_assert(offsetof(StreamlineLibraryDeepDVC_SetDeepDVCSaturationBoost, Intensity) == 0x000000, "Member 'StreamlineLibraryDeepDVC_SetDeepDVCSaturationBoost::Intensity' has a wrong offset!");

}
