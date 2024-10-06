#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CL_CenterCircle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WB_CrosshairLayerBase_Circles_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CL_CenterCircle.CL_CenterCircle_C
// 0x0028 (0x0858 - 0x0830)
class UCL_CenterCircle_C final : public UWB_CrosshairLayerBase_Circles_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_CL_CenterCircle_C;                  // 0x0830(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        CircleRadius;                                      // 0x0838(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LineThickness;                                     // 0x0840(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Fill;                                              // 0x0848(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EnableRecoilResponse;                              // 0x0849(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84A[0x6];                                      // 0x084A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        RecoilToCircleRadiusPercentage;                    // 0x0850(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CL_CenterCircle(int32 EntryPoint);
	void InitializeEditableVariables();
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CL_CenterCircle_C">();
	}
	static class UCL_CenterCircle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCL_CenterCircle_C>();
	}
};
static_assert(alignof(UCL_CenterCircle_C) == 0x000008, "Wrong alignment on UCL_CenterCircle_C");
static_assert(sizeof(UCL_CenterCircle_C) == 0x000858, "Wrong size on UCL_CenterCircle_C");
static_assert(offsetof(UCL_CenterCircle_C, UberGraphFrame_CL_CenterCircle_C) == 0x000830, "Member 'UCL_CenterCircle_C::UberGraphFrame_CL_CenterCircle_C' has a wrong offset!");
static_assert(offsetof(UCL_CenterCircle_C, CircleRadius) == 0x000838, "Member 'UCL_CenterCircle_C::CircleRadius' has a wrong offset!");
static_assert(offsetof(UCL_CenterCircle_C, LineThickness) == 0x000840, "Member 'UCL_CenterCircle_C::LineThickness' has a wrong offset!");
static_assert(offsetof(UCL_CenterCircle_C, Fill) == 0x000848, "Member 'UCL_CenterCircle_C::Fill' has a wrong offset!");
static_assert(offsetof(UCL_CenterCircle_C, EnableRecoilResponse) == 0x000849, "Member 'UCL_CenterCircle_C::EnableRecoilResponse' has a wrong offset!");
static_assert(offsetof(UCL_CenterCircle_C, RecoilToCircleRadiusPercentage) == 0x000850, "Member 'UCL_CenterCircle_C::RecoilToCircleRadiusPercentage' has a wrong offset!");

}
