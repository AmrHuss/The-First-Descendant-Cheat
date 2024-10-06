#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MetasoundEngine

#include "Basic.hpp"

#include "MetasoundEngine_structs.hpp"


namespace SDK::Params
{

// Function MetasoundEngine.MetasoundGeneratorHandle.CreateMetaSoundGeneratorHandle
// 0x0010 (0x0010 - 0x0000)
struct MetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle final
{
public:
	class UAudioComponent*                        OnComponent;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMetasoundGeneratorHandle*              ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle) == 0x000008, "Wrong alignment on MetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle");
static_assert(sizeof(MetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle) == 0x000010, "Wrong size on MetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle");
static_assert(offsetof(MetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle, OnComponent) == 0x000000, "Member 'MetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle::OnComponent' has a wrong offset!");
static_assert(offsetof(MetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle, ReturnValue) == 0x000008, "Member 'MetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle::ReturnValue' has a wrong offset!");

// Function MetasoundEngine.MetasoundGeneratorHandle.ApplyParameterPack
// 0x0010 (0x0010 - 0x0000)
struct MetasoundGeneratorHandle_ApplyParameterPack final
{
public:
	class UMetasoundParameterPack*                Pack;                                              // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MetasoundGeneratorHandle_ApplyParameterPack) == 0x000008, "Wrong alignment on MetasoundGeneratorHandle_ApplyParameterPack");
static_assert(sizeof(MetasoundGeneratorHandle_ApplyParameterPack) == 0x000010, "Wrong size on MetasoundGeneratorHandle_ApplyParameterPack");
static_assert(offsetof(MetasoundGeneratorHandle_ApplyParameterPack, Pack) == 0x000000, "Member 'MetasoundGeneratorHandle_ApplyParameterPack::Pack' has a wrong offset!");
static_assert(offsetof(MetasoundGeneratorHandle_ApplyParameterPack, ReturnValue) == 0x000008, "Member 'MetasoundGeneratorHandle_ApplyParameterPack::ReturnValue' has a wrong offset!");

// Function MetasoundEngine.MetaSoundAssetSubsystem.RegisterAssetClassesInDirectories
// 0x0010 (0x0010 - 0x0000)
struct MetaSoundAssetSubsystem_RegisterAssetClassesInDirectories final
{
public:
	TArray<struct FMetaSoundAssetDirectory>       Directories;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(MetaSoundAssetSubsystem_RegisterAssetClassesInDirectories) == 0x000008, "Wrong alignment on MetaSoundAssetSubsystem_RegisterAssetClassesInDirectories");
static_assert(sizeof(MetaSoundAssetSubsystem_RegisterAssetClassesInDirectories) == 0x000010, "Wrong size on MetaSoundAssetSubsystem_RegisterAssetClassesInDirectories");
static_assert(offsetof(MetaSoundAssetSubsystem_RegisterAssetClassesInDirectories, Directories) == 0x000000, "Member 'MetaSoundAssetSubsystem_RegisterAssetClassesInDirectories::Directories' has a wrong offset!");

// Function MetasoundEngine.MetaSoundAssetSubsystem.UnregisterAssetClassesInDirectories
// 0x0010 (0x0010 - 0x0000)
struct MetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories final
{
public:
	TArray<struct FMetaSoundAssetDirectory>       Directories;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(MetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories) == 0x000008, "Wrong alignment on MetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories");
static_assert(sizeof(MetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories) == 0x000010, "Wrong size on MetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories");
static_assert(offsetof(MetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories, Directories) == 0x000000, "Member 'MetaSoundAssetSubsystem_UnregisterAssetClassesInDirectories::Directories' has a wrong offset!");

}

