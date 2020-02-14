#pragma once

// ����ɱ�� (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ɱ��_Basic.hpp"
#include "ɱ��_Engine_classes.hpp"
#include "ɱ��_CoreUObject_classes.hpp"
#include "ɱ��_GameplayTags_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Competence.EStatusEffectType
enum class EStatusEffectType : uint8_t
{
	None                           = 0,
	Buff                           = 1,
	Debuff                         = 2,
	EStatusEffectType_MAX          = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Competence.GamePlayModifier
// 0x0010
struct FGamePlayModifier
{
	struct FGameplayTag                                Type;                                                     // 0x0000(0x000C) (Edit, BlueprintVisible)
	float                                              ModifierValue;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Competence.GameplayModifierData
// 0x0030
struct FGameplayModifierData
{
	TArray<class UClass*>                              Conditions;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FGamePlayModifier>                   Modifiers;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FGameplayTag>                        TaggedFlags;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
