#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DataflowEnginePlugin

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class DataflowEnginePlugin.DataflowActor
// 0x0008 (0x0250 - 0x0248)
class ADataflowActor final : public AActor
{
public:
	class UDataflowComponent*                     DataflowComponent;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataflowActor">();
	}
	static class ADataflowActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADataflowActor>();
	}
};
static_assert(alignof(ADataflowActor) == 0x000008, "Wrong alignment on ADataflowActor");
static_assert(sizeof(ADataflowActor) == 0x000250, "Wrong size on ADataflowActor");
static_assert(offsetof(ADataflowActor, DataflowComponent) == 0x000248, "Member 'ADataflowActor::DataflowComponent' has a wrong offset!");

// Class DataflowEnginePlugin.DataflowComponent
// 0x0120 (0x0590 - 0x0470)
class UDataflowComponent final : public UPrimitiveComponent
{
public:
	uint8                                         Pad_470[0x120];                                    // 0x0470(0x0120)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DataflowComponent">();
	}
	static class UDataflowComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataflowComponent>();
	}
};
static_assert(alignof(UDataflowComponent) == 0x000010, "Wrong alignment on UDataflowComponent");
static_assert(sizeof(UDataflowComponent) == 0x000590, "Wrong size on UDataflowComponent");

}

