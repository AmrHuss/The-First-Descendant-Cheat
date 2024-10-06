#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AppleARKitFaceSupport

#include "Basic.hpp"


namespace SDK
{

// Enum AppleARKitFaceSupport.EARFaceComponentTransformMixing
// NumValues: 0x0005
enum class EARFaceComponentTransformMixing : uint8
{
	ComponentOnly                            = 0,
	ComponentLocationTrackedRotation         = 1,
	ComponentWithTracked                     = 2,
	TrackingOnly                             = 3,
	EARFaceComponentTransformMixing_MAX      = 4,
};

// ScriptStruct AppleARKitFaceSupport.NetQuantizeFaceCurve
// 0x0002 (0x0002 - 0x0000)
struct FNetQuantizeFaceCurve final
{
public:
	uint8                                         Pad_0[0x2];                                        // 0x0000(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FNetQuantizeFaceCurve) == 0x000001, "Wrong alignment on FNetQuantizeFaceCurve");
static_assert(sizeof(FNetQuantizeFaceCurve) == 0x000002, "Wrong size on FNetQuantizeFaceCurve");

}

