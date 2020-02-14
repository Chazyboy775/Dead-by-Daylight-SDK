#pragma once

// ����ɱ�� (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ɱ��_SkillCheckDifficultyProficiency_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DeadByDaylight.InteractionProficiency.GetValue
struct USkillCheckDifficultyProficiency_C_GetValue_Params
{
	class UChargeableInteractionDefinition**           chargeableInteraction;                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionProficiency.GetType
struct USkillCheckDifficultyProficiency_C_GetType_Params
{
	float*                                             value;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EStatusEffectType                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionProficiency.GetLevel
struct USkillCheckDifficultyProficiency_C_GetLevel_Params
{
	class UChargeableInteractionDefinition**           chargeableInteraction;                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DeadByDaylight.InteractionProficiency.GetIsActive
struct USkillCheckDifficultyProficiency_C_GetIsActive_Params
{
	class UChargeableInteractionDefinition**           chargeableInteraction;                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADBDPlayer**                                 Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
