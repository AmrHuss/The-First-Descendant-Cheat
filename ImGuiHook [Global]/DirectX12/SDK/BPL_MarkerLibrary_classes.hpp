#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_MarkerLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPL_MarkerLibrary.BPL_MarkerLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBPL_MarkerLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static double GetDirectionAngleFromViewCenter(const struct FGeometry& Geometry, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPL_MarkerLibrary_C">();
	}
	static class UBPL_MarkerLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPL_MarkerLibrary_C>();
	}
};
static_assert(alignof(UBPL_MarkerLibrary_C) == 0x000008, "Wrong alignment on UBPL_MarkerLibrary_C");
static_assert(sizeof(UBPL_MarkerLibrary_C) == 0x000028, "Wrong size on UBPL_MarkerLibrary_C");

}
