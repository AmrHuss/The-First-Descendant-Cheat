#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NpcBase

#include "Basic.hpp"

#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NpcBase.BP_NpcBase_C
// 0x0040 (0x07A0 - 0x0760)
#pragma pack(push, 0x1)
class alignas(0x10) ABP_NpcBase_C : public AM1Npc
{
public:
	uint8                                         Pad_758[0x8];                                      // 0x0758(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0760(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAK_Dialog_Component_C*                 AK_Dialog_Component;                               // 0x0768(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UM1IndicatorComponent*                  M1Indicator;                                       // 0x0770(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UM1InteractionInvokerComponent*         M1InteractionInvoker;                              // 0x0778(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Origin_position;                                   // 0x0780(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Sub_position;                                      // 0x078C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_NpcBase(int32 EntryPoint);

	class UWidgetComponent* BP_GetWidgetComponent() const;
	class UM1InteractionInvokerComponent* BP_GetInteractionComponent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NpcBase_C">();
	}
	static class ABP_NpcBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_NpcBase_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(ABP_NpcBase_C) == 0x000010, "Wrong alignment on ABP_NpcBase_C");
static_assert(sizeof(ABP_NpcBase_C) == 0x0007A0, "Wrong size on ABP_NpcBase_C");
static_assert(offsetof(ABP_NpcBase_C, UberGraphFrame) == 0x000760, "Member 'ABP_NpcBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_NpcBase_C, AK_Dialog_Component) == 0x000768, "Member 'ABP_NpcBase_C::AK_Dialog_Component' has a wrong offset!");
static_assert(offsetof(ABP_NpcBase_C, M1Indicator) == 0x000770, "Member 'ABP_NpcBase_C::M1Indicator' has a wrong offset!");
static_assert(offsetof(ABP_NpcBase_C, M1InteractionInvoker) == 0x000778, "Member 'ABP_NpcBase_C::M1InteractionInvoker' has a wrong offset!");
static_assert(offsetof(ABP_NpcBase_C, Origin_position) == 0x000780, "Member 'ABP_NpcBase_C::Origin_position' has a wrong offset!");
static_assert(offsetof(ABP_NpcBase_C, Sub_position) == 0x00078C, "Member 'ABP_NpcBase_C::Sub_position' has a wrong offset!");

}
