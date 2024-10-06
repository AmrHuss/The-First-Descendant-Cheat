#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_MG

#include "Basic.hpp"

#include "UpperBody_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass F_MG.F_MG_C
// 0x0000 (0x1C80 - 0x1C80)
class UF_MG_C : public UUpperBody_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"F_MG_C">();
	}
	static class UF_MG_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UF_MG_C>();
	}
};
static_assert(alignof(UF_MG_C) == 0x000010, "Wrong alignment on UF_MG_C");
static_assert(sizeof(UF_MG_C) == 0x001C80, "Wrong size on UF_MG_C");

}

