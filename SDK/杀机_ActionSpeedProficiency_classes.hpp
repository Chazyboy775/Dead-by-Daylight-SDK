#pragma once

// ����ɱ�� (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ɱ��_ActionSpeedProficiency_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ActionSpeedProficiency.ActionSpeedProficiency_C
// 0x0000 (0x0048 - 0x0048)
class UActionSpeedProficiency_C : public UInteractionProficiency
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass ActionSpeedProficiency.ActionSpeedProficiency_C"));

		return ptr;
	}


	float GetValue(class UChargeableInteractionDefinition** chargeableInteraction, class ADBDPlayer** Player);
	EStatusEffectType GetType(float* value);
	int GetLevel(class UChargeableInteractionDefinition** chargeableInteraction, class ADBDPlayer** Player);
	bool GetIsActive(class UChargeableInteractionDefinition** chargeableInteraction, class ADBDPlayer** Player);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
