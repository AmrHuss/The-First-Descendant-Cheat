#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MissionNpcMaterialManipulator

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MissionNpcMaterialManipulator.BP_MissionNpcMaterialManipulator_C
// 0x0000 (0x0168 - 0x0168)
class UBP_MissionNpcMaterialManipulator_C final : public UM1MissionNpcMaterialManipulator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MissionNpcMaterialManipulator_C">();
	}
	static class UBP_MissionNpcMaterialManipulator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_MissionNpcMaterialManipulator_C>();
	}
};
static_assert(alignof(UBP_MissionNpcMaterialManipulator_C) == 0x000008, "Wrong alignment on UBP_MissionNpcMaterialManipulator_C");
static_assert(sizeof(UBP_MissionNpcMaterialManipulator_C) == 0x000168, "Wrong size on UBP_MissionNpcMaterialManipulator_C");

}
