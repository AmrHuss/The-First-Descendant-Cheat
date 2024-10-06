#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_SimpleItemDetails

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_SimpleItemDetails.UI_SimpleItemDetails_C
// 0x0028 (0x0768 - 0x0740)
class UUI_SimpleItemDetails_C final : public UM1UISimpleItemDetails
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0740(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_Open;                                       // 0x0748(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_0;                                        // 0x0750(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Deco_Back_002_C*                    UI_Deco_Back_002;                                  // 0x0758(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          TitleText_Hidden;                                  // 0x0760(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_UI_SimpleItemDetails(int32 EntryPoint);
	void OnEventWidgetOpen(EM1WidgetAnimDirection InDirection);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_SimpleItemDetails_C">();
	}
	static class UUI_SimpleItemDetails_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_SimpleItemDetails_C>();
	}
};
static_assert(alignof(UUI_SimpleItemDetails_C) == 0x000008, "Wrong alignment on UUI_SimpleItemDetails_C");
static_assert(sizeof(UUI_SimpleItemDetails_C) == 0x000768, "Wrong size on UUI_SimpleItemDetails_C");
static_assert(offsetof(UUI_SimpleItemDetails_C, UberGraphFrame) == 0x000740, "Member 'UUI_SimpleItemDetails_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_SimpleItemDetails_C, UIAnim_Open) == 0x000748, "Member 'UUI_SimpleItemDetails_C::UIAnim_Open' has a wrong offset!");
static_assert(offsetof(UUI_SimpleItemDetails_C, ScaleBox_0) == 0x000750, "Member 'UUI_SimpleItemDetails_C::ScaleBox_0' has a wrong offset!");
static_assert(offsetof(UUI_SimpleItemDetails_C, UI_Deco_Back_002) == 0x000758, "Member 'UUI_SimpleItemDetails_C::UI_Deco_Back_002' has a wrong offset!");
static_assert(offsetof(UUI_SimpleItemDetails_C, TitleText_Hidden) == 0x000760, "Member 'UUI_SimpleItemDetails_C::TitleText_Hidden' has a wrong offset!");

}

