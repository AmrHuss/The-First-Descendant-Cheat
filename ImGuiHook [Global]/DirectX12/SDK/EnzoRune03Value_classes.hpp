#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EnzoRune03Value

#include "Basic.hpp"

#include "StatBased_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EnzoRune03Value.EnzoRune03Value_C
// 0x0000 (0x00F8 - 0x00F8)
class UEnzoRune03Value_C final : public UStatBased_C
{
public:
	struct FM1ScaledInteger CalculateValue(const struct FM1AbilityOpCalcParam& Param) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EnzoRune03Value_C">();
	}
	static class UEnzoRune03Value_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnzoRune03Value_C>();
	}
};
static_assert(alignof(UEnzoRune03Value_C) == 0x000008, "Wrong alignment on UEnzoRune03Value_C");
static_assert(sizeof(UEnzoRune03Value_C) == 0x0000F8, "Wrong size on UEnzoRune03Value_C");

}

