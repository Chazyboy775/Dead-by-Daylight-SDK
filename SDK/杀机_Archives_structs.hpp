#pragma once

// ����ɱ�� (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ɱ��_Basic.hpp"
#include "ɱ��_DeadByDaylight_classes.hpp"
#include "ɱ��_GameplayTags_classes.hpp"
#include "ɱ��_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Archives.PlayerDataForQuestConditions
// 0x0078
struct FPlayerDataForQuestConditions
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
