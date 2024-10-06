#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Deco_Back_Title

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Deco_Back_Title.UI_Deco_Back_Title_C
// 0x0028 (0x0730 - 0x0708)
class UUI_Deco_Back_Title_C final : public UM1UIWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0708(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_Open;                                       // 0x0710(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UM1TextBlock*                           TB_Title;                                          // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 LabelUIKey;                                        // 0x0720(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_UI_Deco_Back_Title(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetUIString(const class FText& Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Deco_Back_Title_C">();
	}
	static class UUI_Deco_Back_Title_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Deco_Back_Title_C>();
	}
};
static_assert(alignof(UUI_Deco_Back_Title_C) == 0x000008, "Wrong alignment on UUI_Deco_Back_Title_C");
static_assert(sizeof(UUI_Deco_Back_Title_C) == 0x000730, "Wrong size on UUI_Deco_Back_Title_C");
static_assert(offsetof(UUI_Deco_Back_Title_C, UberGraphFrame) == 0x000708, "Member 'UUI_Deco_Back_Title_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Deco_Back_Title_C, UIAnim_Open) == 0x000710, "Member 'UUI_Deco_Back_Title_C::UIAnim_Open' has a wrong offset!");
static_assert(offsetof(UUI_Deco_Back_Title_C, TB_Title) == 0x000718, "Member 'UUI_Deco_Back_Title_C::TB_Title' has a wrong offset!");
static_assert(offsetof(UUI_Deco_Back_Title_C, LabelUIKey) == 0x000720, "Member 'UUI_Deco_Back_Title_C::LabelUIKey' has a wrong offset!");

}
