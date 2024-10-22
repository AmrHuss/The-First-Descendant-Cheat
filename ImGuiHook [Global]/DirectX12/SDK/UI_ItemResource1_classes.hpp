#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ItemResource1

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ItemResource1.UI_ItemResource1_C
// 0x0040 (0x0768 - 0x0728)
class UUI_ItemResource1_C : public UM1UIItemResource
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0728(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HorizontalBox_0;                                   // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Item_Name;                                         // 0x0738(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_Icon;                                           // 0x0740(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_Count;                                    // 0x0748(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_142;                                   // 0x0750(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          View_Itemname;                                     // 0x0758(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          View_Count;                                        // 0x0759(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75A[0x2];                                      // 0x075A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         In_Width_Override;                                 // 0x075C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         In_Height_Override;                                // 0x0760(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UI_Alignment;                                      // 0x0764(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_ItemResource1(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetDataImpl(class UM1UIData* InData);
	void SetUI_Alignment(bool NewParam);
	void SetUI_IconSize(double WidthOverride, double HeightOverride);
	void SetUI_ViewName(bool ViewName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ItemResource1_C">();
	}
	static class UUI_ItemResource1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ItemResource1_C>();
	}
};
static_assert(alignof(UUI_ItemResource1_C) == 0x000008, "Wrong alignment on UUI_ItemResource1_C");
static_assert(sizeof(UUI_ItemResource1_C) == 0x000768, "Wrong size on UUI_ItemResource1_C");
static_assert(offsetof(UUI_ItemResource1_C, UberGraphFrame) == 0x000728, "Member 'UUI_ItemResource1_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_ItemResource1_C, HorizontalBox_0) == 0x000730, "Member 'UUI_ItemResource1_C::HorizontalBox_0' has a wrong offset!");
static_assert(offsetof(UUI_ItemResource1_C, Item_Name) == 0x000738, "Member 'UUI_ItemResource1_C::Item_Name' has a wrong offset!");
static_assert(offsetof(UUI_ItemResource1_C, SB_Icon) == 0x000740, "Member 'UUI_ItemResource1_C::SB_Icon' has a wrong offset!");
static_assert(offsetof(UUI_ItemResource1_C, ScaleBox_Count) == 0x000748, "Member 'UUI_ItemResource1_C::ScaleBox_Count' has a wrong offset!");
static_assert(offsetof(UUI_ItemResource1_C, VerticalBox_142) == 0x000750, "Member 'UUI_ItemResource1_C::VerticalBox_142' has a wrong offset!");
static_assert(offsetof(UUI_ItemResource1_C, View_Itemname) == 0x000758, "Member 'UUI_ItemResource1_C::View_Itemname' has a wrong offset!");
static_assert(offsetof(UUI_ItemResource1_C, View_Count) == 0x000759, "Member 'UUI_ItemResource1_C::View_Count' has a wrong offset!");
static_assert(offsetof(UUI_ItemResource1_C, In_Width_Override) == 0x00075C, "Member 'UUI_ItemResource1_C::In_Width_Override' has a wrong offset!");
static_assert(offsetof(UUI_ItemResource1_C, In_Height_Override) == 0x000760, "Member 'UUI_ItemResource1_C::In_Height_Override' has a wrong offset!");
static_assert(offsetof(UUI_ItemResource1_C, UI_Alignment) == 0x000764, "Member 'UUI_ItemResource1_C::UI_Alignment' has a wrong offset!");

}

