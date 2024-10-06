#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Game_Bottom_Cha_Heal

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Game_Bottom_Cha_Heal.UI_Game_Bottom_Cha_Heal_C
// 0x0020 (0x0728 - 0x0708)
class UUI_Game_Bottom_Cha_Heal_C final : public UM1UIWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0708(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Heal_0;                                            // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Heal_1;                                            // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Heal_2;                                            // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_UI_Game_Bottom_Cha_Heal(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Game_Bottom_Cha_Heal_C">();
	}
	static class UUI_Game_Bottom_Cha_Heal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Game_Bottom_Cha_Heal_C>();
	}
};
static_assert(alignof(UUI_Game_Bottom_Cha_Heal_C) == 0x000008, "Wrong alignment on UUI_Game_Bottom_Cha_Heal_C");
static_assert(sizeof(UUI_Game_Bottom_Cha_Heal_C) == 0x000728, "Wrong size on UUI_Game_Bottom_Cha_Heal_C");
static_assert(offsetof(UUI_Game_Bottom_Cha_Heal_C, UberGraphFrame) == 0x000708, "Member 'UUI_Game_Bottom_Cha_Heal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Game_Bottom_Cha_Heal_C, Heal_0) == 0x000710, "Member 'UUI_Game_Bottom_Cha_Heal_C::Heal_0' has a wrong offset!");
static_assert(offsetof(UUI_Game_Bottom_Cha_Heal_C, Heal_1) == 0x000718, "Member 'UUI_Game_Bottom_Cha_Heal_C::Heal_1' has a wrong offset!");
static_assert(offsetof(UUI_Game_Bottom_Cha_Heal_C, Heal_2) == 0x000720, "Member 'UUI_Game_Bottom_Cha_Heal_C::Heal_2' has a wrong offset!");

}
