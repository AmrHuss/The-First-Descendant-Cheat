#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NXPWebBrowser

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct NXPWebBrowser.NXPWebJSCallbackBase
// 0x0020 (0x0020 - 0x0000)
struct alignas(0x08) FNXPWebJSCallbackBase
{
public:
	uint8                                         Pad_0[0x20];                                       // 0x0000(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FNXPWebJSCallbackBase) == 0x000008, "Wrong alignment on FNXPWebJSCallbackBase");
static_assert(sizeof(FNXPWebJSCallbackBase) == 0x000020, "Wrong size on FNXPWebJSCallbackBase");

// ScriptStruct NXPWebBrowser.NXPWebJSFunction
// 0x0000 (0x0020 - 0x0020)
struct FNXPWebJSFunction final : public FNXPWebJSCallbackBase
{
};
static_assert(alignof(FNXPWebJSFunction) == 0x000008, "Wrong alignment on FNXPWebJSFunction");
static_assert(sizeof(FNXPWebJSFunction) == 0x000020, "Wrong size on FNXPWebJSFunction");

// ScriptStruct NXPWebBrowser.NXPWebJSResponse
// 0x0000 (0x0020 - 0x0020)
struct FNXPWebJSResponse final : public FNXPWebJSCallbackBase
{
};
static_assert(alignof(FNXPWebJSResponse) == 0x000008, "Wrong alignment on FNXPWebJSResponse");
static_assert(sizeof(FNXPWebJSResponse) == 0x000020, "Wrong size on FNXPWebJSResponse");

}
