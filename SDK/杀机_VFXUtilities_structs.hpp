#pragma once

// ����ɱ�� (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ɱ��_Basic.hpp"
#include "ɱ��_Engine_classes.hpp"
#include "ɱ��_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum VFXUtilities.ESpawnerStrategyType
enum class ESpawnerStrategyType : uint8_t
{
	None                           = 0,
	NoAccumulation                 = 1,
	ESpawnerStrategyType_MAX       = 2
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
