#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EsiemoStackValue

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EsiemoStackValue.EsiemoStackValue_C
// 0x0018 (0x0100 - 0x00E8)
class UEsiemoStackValue_C final : public UM1AbilityOpModValueCalc
{
public:
	int32                                         StackCount1;                                       // 0x00E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EC[0x4];                                       // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        StackValue;                                        // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxCount;                                          // 0x00F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StackCount3;                                       // 0x00FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	struct FM1ScaledInteger CalculateValue(const struct FM1AbilityOpCalcParam& Param) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EsiemoStackValue_C">();
	}
	static class UEsiemoStackValue_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEsiemoStackValue_C>();
	}
};
static_assert(alignof(UEsiemoStackValue_C) == 0x000008, "Wrong alignment on UEsiemoStackValue_C");
static_assert(sizeof(UEsiemoStackValue_C) == 0x000100, "Wrong size on UEsiemoStackValue_C");
static_assert(offsetof(UEsiemoStackValue_C, StackCount1) == 0x0000E8, "Member 'UEsiemoStackValue_C::StackCount1' has a wrong offset!");
static_assert(offsetof(UEsiemoStackValue_C, StackValue) == 0x0000F0, "Member 'UEsiemoStackValue_C::StackValue' has a wrong offset!");
static_assert(offsetof(UEsiemoStackValue_C, MaxCount) == 0x0000F8, "Member 'UEsiemoStackValue_C::MaxCount' has a wrong offset!");
static_assert(offsetof(UEsiemoStackValue_C, StackCount3) == 0x0000FC, "Member 'UEsiemoStackValue_C::StackCount3' has a wrong offset!");

}
