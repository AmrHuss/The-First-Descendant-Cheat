#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ConsoleVariablesEditorRuntime

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "ConsoleVariablesEditorRuntime_structs.hpp"


namespace SDK::Params
{

// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.AddOrSetConsoleObjectSavedData
// 0x0028 (0x0028 - 0x0000)
struct ConsoleVariablesAsset_AddOrSetConsoleObjectSavedData final
{
public:
	struct FConsoleVariablesEditorAssetSaveData   InData;                                            // 0x0000(0x0028)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(ConsoleVariablesAsset_AddOrSetConsoleObjectSavedData) == 0x000008, "Wrong alignment on ConsoleVariablesAsset_AddOrSetConsoleObjectSavedData");
static_assert(sizeof(ConsoleVariablesAsset_AddOrSetConsoleObjectSavedData) == 0x000028, "Wrong size on ConsoleVariablesAsset_AddOrSetConsoleObjectSavedData");
static_assert(offsetof(ConsoleVariablesAsset_AddOrSetConsoleObjectSavedData, InData) == 0x000000, "Member 'ConsoleVariablesAsset_AddOrSetConsoleObjectSavedData::InData' has a wrong offset!");

// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.CopyFrom
// 0x0008 (0x0008 - 0x0000)
struct ConsoleVariablesAsset_CopyFrom final
{
public:
	const class UConsoleVariablesAsset*           InAssetToCopy;                                     // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ConsoleVariablesAsset_CopyFrom) == 0x000008, "Wrong alignment on ConsoleVariablesAsset_CopyFrom");
static_assert(sizeof(ConsoleVariablesAsset_CopyFrom) == 0x000008, "Wrong size on ConsoleVariablesAsset_CopyFrom");
static_assert(offsetof(ConsoleVariablesAsset_CopyFrom, InAssetToCopy) == 0x000000, "Member 'ConsoleVariablesAsset_CopyFrom::InAssetToCopy' has a wrong offset!");

// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.RemoveConsoleVariable
// 0x0018 (0x0018 - 0x0000)
struct ConsoleVariablesAsset_RemoveConsoleVariable final
{
public:
	class FString                                 InCommandString;                                   // 0x0000(0x0010)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ConsoleVariablesAsset_RemoveConsoleVariable) == 0x000008, "Wrong alignment on ConsoleVariablesAsset_RemoveConsoleVariable");
static_assert(sizeof(ConsoleVariablesAsset_RemoveConsoleVariable) == 0x000018, "Wrong size on ConsoleVariablesAsset_RemoveConsoleVariable");
static_assert(offsetof(ConsoleVariablesAsset_RemoveConsoleVariable, InCommandString) == 0x000000, "Member 'ConsoleVariablesAsset_RemoveConsoleVariable::InCommandString' has a wrong offset!");
static_assert(offsetof(ConsoleVariablesAsset_RemoveConsoleVariable, ReturnValue) == 0x000010, "Member 'ConsoleVariablesAsset_RemoveConsoleVariable::ReturnValue' has a wrong offset!");

// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.ReplaceSavedCommands
// 0x0010 (0x0010 - 0x0000)
struct ConsoleVariablesAsset_ReplaceSavedCommands final
{
public:
	TArray<struct FConsoleVariablesEditorAssetSaveData> Replacement;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(ConsoleVariablesAsset_ReplaceSavedCommands) == 0x000008, "Wrong alignment on ConsoleVariablesAsset_ReplaceSavedCommands");
static_assert(sizeof(ConsoleVariablesAsset_ReplaceSavedCommands) == 0x000010, "Wrong size on ConsoleVariablesAsset_ReplaceSavedCommands");
static_assert(offsetof(ConsoleVariablesAsset_ReplaceSavedCommands, Replacement) == 0x000000, "Member 'ConsoleVariablesAsset_ReplaceSavedCommands::Replacement' has a wrong offset!");

// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.SetVariableCollectionDescription
// 0x0010 (0x0010 - 0x0000)
struct ConsoleVariablesAsset_SetVariableCollectionDescription final
{
public:
	class FString                                 InVariableCollectionDescription;                   // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ConsoleVariablesAsset_SetVariableCollectionDescription) == 0x000008, "Wrong alignment on ConsoleVariablesAsset_SetVariableCollectionDescription");
static_assert(sizeof(ConsoleVariablesAsset_SetVariableCollectionDescription) == 0x000010, "Wrong size on ConsoleVariablesAsset_SetVariableCollectionDescription");
static_assert(offsetof(ConsoleVariablesAsset_SetVariableCollectionDescription, InVariableCollectionDescription) == 0x000000, "Member 'ConsoleVariablesAsset_SetVariableCollectionDescription::InVariableCollectionDescription' has a wrong offset!");

// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.ExecuteSavedCommands
// 0x0010 (0x0010 - 0x0000)
struct ConsoleVariablesAsset_ExecuteSavedCommands final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOnlyIncludeChecked;                               // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ConsoleVariablesAsset_ExecuteSavedCommands) == 0x000008, "Wrong alignment on ConsoleVariablesAsset_ExecuteSavedCommands");
static_assert(sizeof(ConsoleVariablesAsset_ExecuteSavedCommands) == 0x000010, "Wrong size on ConsoleVariablesAsset_ExecuteSavedCommands");
static_assert(offsetof(ConsoleVariablesAsset_ExecuteSavedCommands, WorldContextObject) == 0x000000, "Member 'ConsoleVariablesAsset_ExecuteSavedCommands::WorldContextObject' has a wrong offset!");
static_assert(offsetof(ConsoleVariablesAsset_ExecuteSavedCommands, bOnlyIncludeChecked) == 0x000008, "Member 'ConsoleVariablesAsset_ExecuteSavedCommands::bOnlyIncludeChecked' has a wrong offset!");

// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.FindSavedDataByCommandString
// 0x0040 (0x0040 - 0x0000)
struct ConsoleVariablesAsset_FindSavedDataByCommandString final
{
public:
	class FString                                 InCommandString;                                   // 0x0000(0x0010)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConsoleVariablesEditorAssetSaveData   OutValue;                                          // 0x0010(0x0028)(Parm, OutParm, NativeAccessSpecifierPublic)
	ESearchCase                                   SearchCase;                                        // 0x0038(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0039(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ConsoleVariablesAsset_FindSavedDataByCommandString) == 0x000008, "Wrong alignment on ConsoleVariablesAsset_FindSavedDataByCommandString");
static_assert(sizeof(ConsoleVariablesAsset_FindSavedDataByCommandString) == 0x000040, "Wrong size on ConsoleVariablesAsset_FindSavedDataByCommandString");
static_assert(offsetof(ConsoleVariablesAsset_FindSavedDataByCommandString, InCommandString) == 0x000000, "Member 'ConsoleVariablesAsset_FindSavedDataByCommandString::InCommandString' has a wrong offset!");
static_assert(offsetof(ConsoleVariablesAsset_FindSavedDataByCommandString, OutValue) == 0x000010, "Member 'ConsoleVariablesAsset_FindSavedDataByCommandString::OutValue' has a wrong offset!");
static_assert(offsetof(ConsoleVariablesAsset_FindSavedDataByCommandString, SearchCase) == 0x000038, "Member 'ConsoleVariablesAsset_FindSavedDataByCommandString::SearchCase' has a wrong offset!");
static_assert(offsetof(ConsoleVariablesAsset_FindSavedDataByCommandString, ReturnValue) == 0x000039, "Member 'ConsoleVariablesAsset_FindSavedDataByCommandString::ReturnValue' has a wrong offset!");

// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommands
// 0x0010 (0x0010 - 0x0000)
struct ConsoleVariablesAsset_GetSavedCommands final
{
public:
	TArray<struct FConsoleVariablesEditorAssetSaveData> ReturnValue;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(ConsoleVariablesAsset_GetSavedCommands) == 0x000008, "Wrong alignment on ConsoleVariablesAsset_GetSavedCommands");
static_assert(sizeof(ConsoleVariablesAsset_GetSavedCommands) == 0x000010, "Wrong size on ConsoleVariablesAsset_GetSavedCommands");
static_assert(offsetof(ConsoleVariablesAsset_GetSavedCommands, ReturnValue) == 0x000000, "Member 'ConsoleVariablesAsset_GetSavedCommands::ReturnValue' has a wrong offset!");

// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommandsAsCommaSeparatedString
// 0x0018 (0x0018 - 0x0000)
struct ConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString final
{
public:
	bool                                          bOnlyIncludeChecked;                               // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString) == 0x000008, "Wrong alignment on ConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString");
static_assert(sizeof(ConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString) == 0x000018, "Wrong size on ConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString");
static_assert(offsetof(ConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString, bOnlyIncludeChecked) == 0x000000, "Member 'ConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString::bOnlyIncludeChecked' has a wrong offset!");
static_assert(offsetof(ConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString, ReturnValue) == 0x000008, "Member 'ConsoleVariablesAsset_GetSavedCommandsAsCommaSeparatedString::ReturnValue' has a wrong offset!");

// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommandsAsStringArray
// 0x0018 (0x0018 - 0x0000)
struct ConsoleVariablesAsset_GetSavedCommandsAsStringArray final
{
public:
	bool                                          bOnlyIncludeChecked;                               // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(ConsoleVariablesAsset_GetSavedCommandsAsStringArray) == 0x000008, "Wrong alignment on ConsoleVariablesAsset_GetSavedCommandsAsStringArray");
static_assert(sizeof(ConsoleVariablesAsset_GetSavedCommandsAsStringArray) == 0x000018, "Wrong size on ConsoleVariablesAsset_GetSavedCommandsAsStringArray");
static_assert(offsetof(ConsoleVariablesAsset_GetSavedCommandsAsStringArray, bOnlyIncludeChecked) == 0x000000, "Member 'ConsoleVariablesAsset_GetSavedCommandsAsStringArray::bOnlyIncludeChecked' has a wrong offset!");
static_assert(offsetof(ConsoleVariablesAsset_GetSavedCommandsAsStringArray, ReturnValue) == 0x000008, "Member 'ConsoleVariablesAsset_GetSavedCommandsAsStringArray::ReturnValue' has a wrong offset!");

// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetSavedCommandsCount
// 0x0004 (0x0004 - 0x0000)
struct ConsoleVariablesAsset_GetSavedCommandsCount final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ConsoleVariablesAsset_GetSavedCommandsCount) == 0x000004, "Wrong alignment on ConsoleVariablesAsset_GetSavedCommandsCount");
static_assert(sizeof(ConsoleVariablesAsset_GetSavedCommandsCount) == 0x000004, "Wrong size on ConsoleVariablesAsset_GetSavedCommandsCount");
static_assert(offsetof(ConsoleVariablesAsset_GetSavedCommandsCount, ReturnValue) == 0x000000, "Member 'ConsoleVariablesAsset_GetSavedCommandsCount::ReturnValue' has a wrong offset!");

// Function ConsoleVariablesEditorRuntime.ConsoleVariablesAsset.GetVariableCollectionDescription
// 0x0010 (0x0010 - 0x0000)
struct ConsoleVariablesAsset_GetVariableCollectionDescription final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(ConsoleVariablesAsset_GetVariableCollectionDescription) == 0x000008, "Wrong alignment on ConsoleVariablesAsset_GetVariableCollectionDescription");
static_assert(sizeof(ConsoleVariablesAsset_GetVariableCollectionDescription) == 0x000010, "Wrong size on ConsoleVariablesAsset_GetVariableCollectionDescription");
static_assert(offsetof(ConsoleVariablesAsset_GetVariableCollectionDescription, ReturnValue) == 0x000000, "Member 'ConsoleVariablesAsset_GetVariableCollectionDescription::ReturnValue' has a wrong offset!");

}

