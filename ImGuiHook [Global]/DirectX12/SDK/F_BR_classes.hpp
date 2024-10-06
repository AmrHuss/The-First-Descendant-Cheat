#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_BR

#include "Basic.hpp"

#include "UpperBody_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass F_BR.F_BR_C
// 0x0000 (0x1C80 - 0x1C80)
class UF_BR_C : public UUpperBody_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"F_BR_C">();
	}
	static class UF_BR_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UF_BR_C>();
	}
};
static_assert(alignof(UF_BR_C) == 0x000010, "Wrong alignment on UF_BR_C");
static_assert(sizeof(UF_BR_C) == 0x001C80, "Wrong size on UF_BR_C");

}
