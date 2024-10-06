#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WC_BP

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WC_BP.WC_BP_C
// 0x0000 (0x0378 - 0x0378)
class AWC_BP_C final : public AM1WireCaster
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WC_BP_C">();
	}
	static class AWC_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWC_BP_C>();
	}
};
static_assert(alignof(AWC_BP_C) == 0x000008, "Wrong alignment on AWC_BP_C");
static_assert(sizeof(AWC_BP_C) == 0x000378, "Wrong size on AWC_BP_C");

}

