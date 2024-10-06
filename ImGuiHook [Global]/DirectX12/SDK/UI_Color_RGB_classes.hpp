#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Color_RGB

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Color_RGB.UI_Color_RGB_C
// 0x0000 (0x0720 - 0x0720)
class UUI_Color_RGB_C final : public UM1UIColorRGBDetail
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Color_RGB_C">();
	}
	static class UUI_Color_RGB_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Color_RGB_C>();
	}
};
static_assert(alignof(UUI_Color_RGB_C) == 0x000008, "Wrong alignment on UUI_Color_RGB_C");
static_assert(sizeof(UUI_Color_RGB_C) == 0x000720, "Wrong size on UUI_Color_RGB_C");

}

