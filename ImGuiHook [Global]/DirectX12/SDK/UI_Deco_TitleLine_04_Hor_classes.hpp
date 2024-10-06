#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Deco_TitleLine_04_Hor

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Deco_TitleLine_04_Hor.UI_Deco_TitleLine_04_Hor_C
// 0x0038 (0x0740 - 0x0708)
class UUI_Deco_TitleLine_04_Hor_C final : public UM1UIWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0708(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_245;                                         // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_328;                                         // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_428;                                         // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_Deco_0;                                         // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_Deco_1;                                         // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         Deco_Height_;                                      // 0x0738(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_UI_Deco_TitleLine_04_Hor(int32 EntryPoint);
	void PlaySetOpenUI();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Deco_TitleLine_04_Hor_C">();
	}
	static class UUI_Deco_TitleLine_04_Hor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Deco_TitleLine_04_Hor_C>();
	}
};
static_assert(alignof(UUI_Deco_TitleLine_04_Hor_C) == 0x000008, "Wrong alignment on UUI_Deco_TitleLine_04_Hor_C");
static_assert(sizeof(UUI_Deco_TitleLine_04_Hor_C) == 0x000740, "Wrong size on UUI_Deco_TitleLine_04_Hor_C");
static_assert(offsetof(UUI_Deco_TitleLine_04_Hor_C, UberGraphFrame) == 0x000708, "Member 'UUI_Deco_TitleLine_04_Hor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Deco_TitleLine_04_Hor_C, Image_245) == 0x000710, "Member 'UUI_Deco_TitleLine_04_Hor_C::Image_245' has a wrong offset!");
static_assert(offsetof(UUI_Deco_TitleLine_04_Hor_C, Image_328) == 0x000718, "Member 'UUI_Deco_TitleLine_04_Hor_C::Image_328' has a wrong offset!");
static_assert(offsetof(UUI_Deco_TitleLine_04_Hor_C, Image_428) == 0x000720, "Member 'UUI_Deco_TitleLine_04_Hor_C::Image_428' has a wrong offset!");
static_assert(offsetof(UUI_Deco_TitleLine_04_Hor_C, SB_Deco_0) == 0x000728, "Member 'UUI_Deco_TitleLine_04_Hor_C::SB_Deco_0' has a wrong offset!");
static_assert(offsetof(UUI_Deco_TitleLine_04_Hor_C, SB_Deco_1) == 0x000730, "Member 'UUI_Deco_TitleLine_04_Hor_C::SB_Deco_1' has a wrong offset!");
static_assert(offsetof(UUI_Deco_TitleLine_04_Hor_C, Deco_Height_) == 0x000738, "Member 'UUI_Deco_TitleLine_04_Hor_C::Deco_Height_' has a wrong offset!");

}
