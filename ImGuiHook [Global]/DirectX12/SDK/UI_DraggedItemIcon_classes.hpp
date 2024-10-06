#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_DraggedItemIcon

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "M1Data_structs.hpp"
#include "Slate_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_DraggedItemIcon.UI_DraggedItemIcon_C
// 0x0048 (0x0750 - 0x0708)
class UUI_DraggedItemIcon_C final : public UM1UIWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0708(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_DrageOn;                                      // 0x0710(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_Default;                                     // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Renovatable;                                 // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_TierLine;                                    // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBox_Wrapper;                           // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Item_Tier_Base;                                    // 0x0738(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              Thumnail;                                          // 0x0740(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Deco_Back_001_C*                    UI_Deco_Back_001;                                  // 0x0748(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_UI_DraggedItemIcon(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetDataImpl(class UM1UIData* InData);
	void SetItemIconType(class UM1UIDataItemInfo* UIData_0);
	void SetUIIconStretch(bool NewParam);
	void ShowEquippedIcon(class UM1UIDataItemInfo* InItemInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_DraggedItemIcon_C">();
	}
	static class UUI_DraggedItemIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_DraggedItemIcon_C>();
	}
};
static_assert(alignof(UUI_DraggedItemIcon_C) == 0x000008, "Wrong alignment on UUI_DraggedItemIcon_C");
static_assert(sizeof(UUI_DraggedItemIcon_C) == 0x000750, "Wrong size on UUI_DraggedItemIcon_C");
static_assert(offsetof(UUI_DraggedItemIcon_C, UberGraphFrame) == 0x000708, "Member 'UUI_DraggedItemIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_DraggedItemIcon_C, Anim_DrageOn) == 0x000710, "Member 'UUI_DraggedItemIcon_C::Anim_DrageOn' has a wrong offset!");
static_assert(offsetof(UUI_DraggedItemIcon_C, Image_Default) == 0x000718, "Member 'UUI_DraggedItemIcon_C::Image_Default' has a wrong offset!");
static_assert(offsetof(UUI_DraggedItemIcon_C, Image_Renovatable) == 0x000720, "Member 'UUI_DraggedItemIcon_C::Image_Renovatable' has a wrong offset!");
static_assert(offsetof(UUI_DraggedItemIcon_C, Image_TierLine) == 0x000728, "Member 'UUI_DraggedItemIcon_C::Image_TierLine' has a wrong offset!");
static_assert(offsetof(UUI_DraggedItemIcon_C, InvalidationBox_Wrapper) == 0x000730, "Member 'UUI_DraggedItemIcon_C::InvalidationBox_Wrapper' has a wrong offset!");
static_assert(offsetof(UUI_DraggedItemIcon_C, Item_Tier_Base) == 0x000738, "Member 'UUI_DraggedItemIcon_C::Item_Tier_Base' has a wrong offset!");
static_assert(offsetof(UUI_DraggedItemIcon_C, Thumnail) == 0x000740, "Member 'UUI_DraggedItemIcon_C::Thumnail' has a wrong offset!");
static_assert(offsetof(UUI_DraggedItemIcon_C, UI_Deco_Back_001) == 0x000748, "Member 'UUI_DraggedItemIcon_C::UI_Deco_Back_001' has a wrong offset!");

}
