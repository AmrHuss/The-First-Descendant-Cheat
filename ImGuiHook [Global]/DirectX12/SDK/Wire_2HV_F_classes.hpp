#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Wire_2HV_F

#include "Basic.hpp"

#include "Wire_0LT_F_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Wire_2HV_F.Wire_2HV_F_C
// 0x0000 (0x0B80 - 0x0B80)
class UWire_2HV_F_C final : public UWire_0LT_F_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Wire_2HV_F_C">();
	}
	static class UWire_2HV_F_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWire_2HV_F_C>();
	}
};
static_assert(alignof(UWire_2HV_F_C) == 0x000010, "Wrong alignment on UWire_2HV_F_C");
static_assert(sizeof(UWire_2HV_F_C) == 0x000B80, "Wrong size on UWire_2HV_F_C");

}

