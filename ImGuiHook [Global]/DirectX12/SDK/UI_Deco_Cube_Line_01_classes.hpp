#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Deco_Cube_Line_01

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Deco_Cube_Line_01.UI_Deco_Cube_Line_01_C
// 0x0070 (0x0778 - 0x0708)
class UUI_Deco_Cube_Line_01_C final : public UM1UIWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0708(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_Open;                                       // 0x0710(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBackgroundBlur*                        BackgroundBlur_71;                                 // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 blackbg;                                           // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0738(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x0740(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x0748(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_5;                                           // 0x0750(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_40;                                          // 0x0758(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_74;                                          // 0x0760(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_89;                                        // 0x0768(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESlateVisibility                              InBlurPanel;                                       // 0x0770(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              In_Line;                                           // 0x0771(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_Deco_Cube_Line_01(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Deco_Cube_Line_01_C">();
	}
	static class UUI_Deco_Cube_Line_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Deco_Cube_Line_01_C>();
	}
};
static_assert(alignof(UUI_Deco_Cube_Line_01_C) == 0x000008, "Wrong alignment on UUI_Deco_Cube_Line_01_C");
static_assert(sizeof(UUI_Deco_Cube_Line_01_C) == 0x000778, "Wrong size on UUI_Deco_Cube_Line_01_C");
static_assert(offsetof(UUI_Deco_Cube_Line_01_C, UberGraphFrame) == 0x000708, "Member 'UUI_Deco_Cube_Line_01_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Deco_Cube_Line_01_C, UIAnim_Open) == 0x000710, "Member 'UUI_Deco_Cube_Line_01_C::UIAnim_Open' has a wrong offset!");
static_assert(offsetof(UUI_Deco_Cube_Line_01_C, BackgroundBlur_71) == 0x000718, "Member 'UUI_Deco_Cube_Line_01_C::BackgroundBlur_71' has a wrong offset!");
static_assert(offsetof(UUI_Deco_Cube_Line_01_C, blackbg) == 0x000720, "Member 'UUI_Deco_Cube_Line_01_C::blackbg' has a wrong offset!");
static_assert(offsetof(UUI_Deco_Cube_Line_01_C, Image) == 0x000728, "Member 'UUI_Deco_Cube_Line_01_C::Image' has a wrong offset!");
static_assert(offsetof(UUI_Deco_Cube_Line_01_C, Image_1) == 0x000730, "Member 'UUI_Deco_Cube_Line_01_C::Image_1' has a wrong offset!");
static_assert(offsetof(UUI_Deco_Cube_Line_01_C, Image_2) == 0x000738, "Member 'UUI_Deco_Cube_Line_01_C::Image_2' has a wrong offset!");
static_assert(offsetof(UUI_Deco_Cube_Line_01_C, Image_3) == 0x000740, "Member 'UUI_Deco_Cube_Line_01_C::Image_3' has a wrong offset!");
static_assert(offsetof(UUI_Deco_Cube_Line_01_C, Image_4) == 0x000748, "Member 'UUI_Deco_Cube_Line_01_C::Image_4' has a wrong offset!");
static_assert(offsetof(UUI_Deco_Cube_Line_01_C, Image_5) == 0x000750, "Member 'UUI_Deco_Cube_Line_01_C::Image_5' has a wrong offset!");
static_assert(offsetof(UUI_Deco_Cube_Line_01_C, Image_40) == 0x000758, "Member 'UUI_Deco_Cube_Line_01_C::Image_40' has a wrong offset!");
static_assert(offsetof(UUI_Deco_Cube_Line_01_C, Image_74) == 0x000760, "Member 'UUI_Deco_Cube_Line_01_C::Image_74' has a wrong offset!");
static_assert(offsetof(UUI_Deco_Cube_Line_01_C, Overlay_89) == 0x000768, "Member 'UUI_Deco_Cube_Line_01_C::Overlay_89' has a wrong offset!");
static_assert(offsetof(UUI_Deco_Cube_Line_01_C, InBlurPanel) == 0x000770, "Member 'UUI_Deco_Cube_Line_01_C::InBlurPanel' has a wrong offset!");
static_assert(offsetof(UUI_Deco_Cube_Line_01_C, In_Line) == 0x000771, "Member 'UUI_Deco_Cube_Line_01_C::In_Line' has a wrong offset!");

}
