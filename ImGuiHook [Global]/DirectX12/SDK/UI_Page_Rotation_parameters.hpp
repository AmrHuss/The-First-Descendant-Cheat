#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Page_Rotation

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_Page_Rotation.UI_Page_Rotation_C.ExecuteUbergraph_UI_Page_Rotation
// 0x0008 (0x0008 - 0x0000)
struct UI_Page_Rotation_C_ExecuteUbergraph_UI_Page_Rotation final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Page_Rotation_C_ExecuteUbergraph_UI_Page_Rotation) == 0x000004, "Wrong alignment on UI_Page_Rotation_C_ExecuteUbergraph_UI_Page_Rotation");
static_assert(sizeof(UI_Page_Rotation_C_ExecuteUbergraph_UI_Page_Rotation) == 0x000008, "Wrong size on UI_Page_Rotation_C_ExecuteUbergraph_UI_Page_Rotation");
static_assert(offsetof(UI_Page_Rotation_C_ExecuteUbergraph_UI_Page_Rotation, EntryPoint) == 0x000000, "Member 'UI_Page_Rotation_C_ExecuteUbergraph_UI_Page_Rotation::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Page_Rotation_C_ExecuteUbergraph_UI_Page_Rotation, K2Node_Event_IsDesignTime) == 0x000004, "Member 'UI_Page_Rotation_C_ExecuteUbergraph_UI_Page_Rotation::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function UI_Page_Rotation.UI_Page_Rotation_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_Page_Rotation_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Page_Rotation_C_PreConstruct) == 0x000001, "Wrong alignment on UI_Page_Rotation_C_PreConstruct");
static_assert(sizeof(UI_Page_Rotation_C_PreConstruct) == 0x000001, "Wrong size on UI_Page_Rotation_C_PreConstruct");
static_assert(offsetof(UI_Page_Rotation_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_Page_Rotation_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
