#pragma once

// ����ɱ�� (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ɱ��_LevelTransition_LightsEffects_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LevelTransition_LightsEffects.LevelTransition_LightsEffects_C
// 0x0008 (0x0350 - 0x0348)
class ALevelTransition_LightsEffects_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass LevelTransition_LightsEffects.LevelTransition_LightsEffects_C"));

		return ptr;
	}


	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_LevelTransition_LightsEffects(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
