#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: M_001_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Main_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass M_001_BP.M_001_BP_C
// 0x0000 (0x2CC0 - 0x2CC0)
class UM_001_BP_C final : public UMain_C
{
public:
	uint8                                         Pad_2CB1[0x7];                                     // 0x2CB1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_M_001_BP_C;                         // 0x2CB8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_M_001_BP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"M_001_BP_C">();
	}
	static class UM_001_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UM_001_BP_C>();
	}
};
static_assert(alignof(UM_001_BP_C) == 0x000010, "Wrong alignment on UM_001_BP_C");
static_assert(sizeof(UM_001_BP_C) == 0x002CC0, "Wrong size on UM_001_BP_C");
static_assert(offsetof(UM_001_BP_C, UberGraphFrame_M_001_BP_C) == 0x002CB8, "Member 'UM_001_BP_C::UberGraphFrame_M_001_BP_C' has a wrong offset!");

}

