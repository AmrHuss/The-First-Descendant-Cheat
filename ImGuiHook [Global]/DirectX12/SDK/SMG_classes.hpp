#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SMG

#include "Basic.hpp"

#include "UpperBody_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass SMG.SMG_C
// 0x0000 (0x1C80 - 0x1C80)
class USMG_C : public UUpperBody_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SMG_C">();
	}
	static class USMG_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USMG_C>();
	}
};
static_assert(alignof(USMG_C) == 0x000010, "Wrong alignment on USMG_C");
static_assert(sizeof(USMG_C) == 0x001C80, "Wrong size on USMG_C");

}
