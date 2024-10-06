#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerDroneTransformControlValues

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// UserDefinedStruct PlayerDroneTransformControlValues.PlayerDroneTransformControlValues
// 0x0028 (0x0028 - 0x0000)
struct FPlayerDroneTransformControlValues final
{
public:
	class USceneComponent*                        Component_22_0388073041BED19535AE018AF0F338A9;     // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVectorSpringState                     LocationVectorSpringState_28_429F5B2144E0A59B359109B9C60876DF; // 0x0008(0x001C)(Edit, BlueprintVisible, NoDestructor)
};
static_assert(alignof(FPlayerDroneTransformControlValues) == 0x000008, "Wrong alignment on FPlayerDroneTransformControlValues");
static_assert(sizeof(FPlayerDroneTransformControlValues) == 0x000028, "Wrong size on FPlayerDroneTransformControlValues");
static_assert(offsetof(FPlayerDroneTransformControlValues, Component_22_0388073041BED19535AE018AF0F338A9) == 0x000000, "Member 'FPlayerDroneTransformControlValues::Component_22_0388073041BED19535AE018AF0F338A9' has a wrong offset!");
static_assert(offsetof(FPlayerDroneTransformControlValues, LocationVectorSpringState_28_429F5B2144E0A59B359109B9C60876DF) == 0x000008, "Member 'FPlayerDroneTransformControlValues::LocationVectorSpringState_28_429F5B2144E0A59B359109B9C60876DF' has a wrong offset!");

}

