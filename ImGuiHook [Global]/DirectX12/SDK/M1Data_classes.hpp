#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: M1Data

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class M1Data.M1DataTable
// 0x0070 (0x0120 - 0x00B0)
class UM1DataTable : public UDataTable
{
public:
	TArray<class FString>                         FilePaths;                                         // 0x00B0(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bDirty;                                            // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C1[0x5F];                                      // 0x00C1(0x005F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"M1DataTable">();
	}
	static class UM1DataTable* GetDefaultObj()
	{
		return GetDefaultObjImpl<UM1DataTable>();
	}
};
static_assert(alignof(UM1DataTable) == 0x000008, "Wrong alignment on UM1DataTable");
static_assert(sizeof(UM1DataTable) == 0x000120, "Wrong size on UM1DataTable");
static_assert(offsetof(UM1DataTable, FilePaths) == 0x0000B0, "Member 'UM1DataTable::FilePaths' has a wrong offset!");
static_assert(offsetof(UM1DataTable, bDirty) == 0x0000C0, "Member 'UM1DataTable::bDirty' has a wrong offset!");

// Class M1Data.M1DataTableGroup
// 0x0010 (0x0130 - 0x0120)
class UM1DataTableGroup final : public UM1DataTable
{
public:
	uint8                                         Pad_120[0x10];                                     // 0x0120(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"M1DataTableGroup">();
	}
	static class UM1DataTableGroup* GetDefaultObj()
	{
		return GetDefaultObjImpl<UM1DataTableGroup>();
	}
};
static_assert(alignof(UM1DataTableGroup) == 0x000008, "Wrong alignment on UM1DataTableGroup");
static_assert(sizeof(UM1DataTableGroup) == 0x000130, "Wrong size on UM1DataTableGroup");

// Class M1Data.M1SecondaryDataManager
// 0x0000 (0x0028 - 0x0028)
class UM1SecondaryDataManager : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"M1SecondaryDataManager">();
	}
	static class UM1SecondaryDataManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UM1SecondaryDataManager>();
	}
};
static_assert(alignof(UM1SecondaryDataManager) == 0x000008, "Wrong alignment on UM1SecondaryDataManager");
static_assert(sizeof(UM1SecondaryDataManager) == 0x000028, "Wrong size on UM1SecondaryDataManager");

// Class M1Data.M1DataCenter
// 0x0208 (0x0238 - 0x0030)
class UM1DataCenter final : public UDataAsset
{
public:
	uint8                                         Pad_30[0x8];                                       // 0x0030(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UM1DataTable*>                   Tables;                                            // 0x0038(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)
	TMap<class UScriptStruct*, class UM1DataTable*> RowStructToTable;                                  // 0x0048(0x0050)(Edit, EditConst, NativeAccessSpecifierPrivate)
	TMap<class UScriptStruct*, class UM1DataTable*> RowStructToGroupOrTable;                           // 0x0098(0x0050)(Edit, EditConst, NativeAccessSpecifierPrivate)
	TMap<class UScriptStruct*, class UM1DataTableGroup*> TableGroups;                                       // 0x00E8(0x0050)(Edit, Transient, EditConst, NativeAccessSpecifierPrivate)
	TArray<class UM1SecondaryDataManager*>        SecondaryManagers;                                 // 0x0138(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                         Pad_148[0x50];                                     // 0x0148(0x0050)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class UScriptStruct*, class UM1DataTable*> AltTableMap;                                       // 0x0198(0x0050)(Transient, NativeAccessSpecifierPrivate)
	TMap<class FString, class UM1DataTable*>      PatchTableMap;                                     // 0x01E8(0x0050)(Transient, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"M1DataCenter">();
	}
	static class UM1DataCenter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UM1DataCenter>();
	}
};
static_assert(alignof(UM1DataCenter) == 0x000008, "Wrong alignment on UM1DataCenter");
static_assert(sizeof(UM1DataCenter) == 0x000238, "Wrong size on UM1DataCenter");
static_assert(offsetof(UM1DataCenter, Tables) == 0x000038, "Member 'UM1DataCenter::Tables' has a wrong offset!");
static_assert(offsetof(UM1DataCenter, RowStructToTable) == 0x000048, "Member 'UM1DataCenter::RowStructToTable' has a wrong offset!");
static_assert(offsetof(UM1DataCenter, RowStructToGroupOrTable) == 0x000098, "Member 'UM1DataCenter::RowStructToGroupOrTable' has a wrong offset!");
static_assert(offsetof(UM1DataCenter, TableGroups) == 0x0000E8, "Member 'UM1DataCenter::TableGroups' has a wrong offset!");
static_assert(offsetof(UM1DataCenter, SecondaryManagers) == 0x000138, "Member 'UM1DataCenter::SecondaryManagers' has a wrong offset!");
static_assert(offsetof(UM1DataCenter, AltTableMap) == 0x000198, "Member 'UM1DataCenter::AltTableMap' has a wrong offset!");
static_assert(offsetof(UM1DataCenter, PatchTableMap) == 0x0001E8, "Member 'UM1DataCenter::PatchTableMap' has a wrong offset!");

}
