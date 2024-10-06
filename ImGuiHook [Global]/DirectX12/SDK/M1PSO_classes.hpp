#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: M1PSO

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class M1PSO.M1PSOCheat
// 0x0128 (0x0150 - 0x0028)
class alignas(0x10) UM1PSOCheat final : public UObject
{
public:
	TArray<struct FAssetData>                     NiagaraSystemData;                                 // 0x0028(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FAssetData>                     LevelSequenceData;                                 // 0x0038(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraComponent*>              NiagaraComponentArray;                             // 0x0048(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                         Pad_58[0xF8];                                      // 0x0058(0x00F8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void PSOPlaySequence();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"M1PSOCheat">();
	}
	static class UM1PSOCheat* GetDefaultObj()
	{
		return GetDefaultObjImpl<UM1PSOCheat>();
	}
};
static_assert(alignof(UM1PSOCheat) == 0x000010, "Wrong alignment on UM1PSOCheat");
static_assert(sizeof(UM1PSOCheat) == 0x000150, "Wrong size on UM1PSOCheat");
static_assert(offsetof(UM1PSOCheat, NiagaraSystemData) == 0x000028, "Member 'UM1PSOCheat::NiagaraSystemData' has a wrong offset!");
static_assert(offsetof(UM1PSOCheat, LevelSequenceData) == 0x000038, "Member 'UM1PSOCheat::LevelSequenceData' has a wrong offset!");
static_assert(offsetof(UM1PSOCheat, NiagaraComponentArray) == 0x000048, "Member 'UM1PSOCheat::NiagaraComponentArray' has a wrong offset!");

}

