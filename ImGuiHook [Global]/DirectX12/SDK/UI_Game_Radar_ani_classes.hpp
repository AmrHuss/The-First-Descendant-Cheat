#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Game_Radar_ani

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Game_Radar_ani.UI_Game_Radar_ani_C
// 0x0010 (0x0260 - 0x0250)
class UUI_Game_Radar_ani_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0250(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_Loop;                                         // 0x0258(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void Anim_radar_ani();
	void ExecuteUbergraph_UI_Game_Radar_ani(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Game_Radar_ani_C">();
	}
	static class UUI_Game_Radar_ani_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Game_Radar_ani_C>();
	}
};
static_assert(alignof(UUI_Game_Radar_ani_C) == 0x000008, "Wrong alignment on UUI_Game_Radar_ani_C");
static_assert(sizeof(UUI_Game_Radar_ani_C) == 0x000260, "Wrong size on UUI_Game_Radar_ani_C");
static_assert(offsetof(UUI_Game_Radar_ani_C, UberGraphFrame) == 0x000250, "Member 'UUI_Game_Radar_ani_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Game_Radar_ani_C, Anim_Loop) == 0x000258, "Member 'UUI_Game_Radar_ani_C::Anim_Loop' has a wrong offset!");

}

