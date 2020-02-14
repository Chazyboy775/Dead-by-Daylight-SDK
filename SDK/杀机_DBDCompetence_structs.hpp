#pragma once

// ����ɱ�� (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ɱ��_Basic.hpp"
#include "ɱ��_SystemUtilities_classes.hpp"
#include "ɱ��_DeadByDaylight_classes.hpp"
#include "ɱ��_Competence_classes.hpp"
#include "ɱ��_GameplayTags_classes.hpp"
#include "ɱ��_CoreUObject_classes.hpp"
#include "ɱ��_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum DBDCompetence.ESecondWindState
enum class ESecondWindState : uint8_t
{
	Loading                        = 0,
	Locked                         = 1,
	Available                      = 2,
	InUse                          = 3,
	ESecondWindState_MAX           = 4
};


// Enum DBDCompetence.ETheMettleOfManPhase
enum class ETheMettleOfManPhase : uint8_t
{
	Uninitialized                  = 0,
	GainingTokens                  = 1,
	CancelNextAttack               = 2,
	RevealWhenHealthy              = 3,
	RevealedToKiller               = 4,
	ETheMettleOfManPhase_MAX       = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DBDCompetence.WindowBlockableList
// 0x0010
struct FWindowBlockableList
{
	TArray<class UBlockableComponent*>                 Blockables;                                               // 0x0000(0x0010) (ExportObject, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
