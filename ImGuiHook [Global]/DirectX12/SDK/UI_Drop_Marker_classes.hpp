#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Drop_Marker

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Drop_Marker.UI_Drop_Marker_C
// 0x0020 (0x0788 - 0x0768)
class UUI_Drop_Marker_C final : public UM1UIDropContainerMarker
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0768(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_Start;                                        // 0x0770(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 DirectionIcon;                                     // 0x0778(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Panel;                                             // 0x0780(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BP_SetActive(bool bActive);
	void Construct();
	void ExecuteUbergraph_UI_Drop_Marker(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Drop_Marker_C">();
	}
	static class UUI_Drop_Marker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Drop_Marker_C>();
	}
};
static_assert(alignof(UUI_Drop_Marker_C) == 0x000008, "Wrong alignment on UUI_Drop_Marker_C");
static_assert(sizeof(UUI_Drop_Marker_C) == 0x000788, "Wrong size on UUI_Drop_Marker_C");
static_assert(offsetof(UUI_Drop_Marker_C, UberGraphFrame) == 0x000768, "Member 'UUI_Drop_Marker_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Drop_Marker_C, Anim_Start) == 0x000770, "Member 'UUI_Drop_Marker_C::Anim_Start' has a wrong offset!");
static_assert(offsetof(UUI_Drop_Marker_C, DirectionIcon) == 0x000778, "Member 'UUI_Drop_Marker_C::DirectionIcon' has a wrong offset!");
static_assert(offsetof(UUI_Drop_Marker_C, Panel) == 0x000780, "Member 'UUI_Drop_Marker_C::Panel' has a wrong offset!");

}

