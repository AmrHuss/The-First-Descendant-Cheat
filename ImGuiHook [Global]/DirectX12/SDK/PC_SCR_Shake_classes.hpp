#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PC_SCR_Shake

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PC_SCR_Shake.PC_SCR_Shake_C
// 0x0000 (0x01A0 - 0x01A0)
class UPC_SCR_Shake_C final : public UM1MoveCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PC_SCR_Shake_C">();
	}
	static class UPC_SCR_Shake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPC_SCR_Shake_C>();
	}
};
static_assert(alignof(UPC_SCR_Shake_C) == 0x000010, "Wrong alignment on UPC_SCR_Shake_C");
static_assert(sizeof(UPC_SCR_Shake_C) == 0x0001A0, "Wrong size on UPC_SCR_Shake_C");

}

