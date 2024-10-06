#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SCR

#include "Basic.hpp"

#include "UpperBody_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass SCR.SCR_C
// 0x0000 (0x1C80 - 0x1C80)
class USCR_C : public UUpperBody_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SCR_C">();
	}
	static class USCR_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USCR_C>();
	}
};
static_assert(alignof(USCR_C) == 0x000010, "Wrong alignment on USCR_C");
static_assert(sizeof(USCR_C) == 0x001C80, "Wrong size on USCR_C");

}
