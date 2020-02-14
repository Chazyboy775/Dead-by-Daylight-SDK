#pragma once

// ����ɱ�� (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ɱ��_Basic.hpp"
#include "ɱ��_Engine_classes.hpp"
#include "ɱ��_UMG_classes.hpp"
#include "ɱ��_Slate_classes.hpp"
#include "ɱ��_CoreUObject_classes.hpp"
#include "ɱ��_SlateCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum SharedAuthenticationUtilities.ESharedAuthenticationProvider
enum class ESharedAuthenticationProvider : uint8_t
{
	None                           = 0,
	Facebook                       = 1,
	Google                         = 2,
	Kraken                         = 3,
	ESharedAuthenticationProvider_MAX = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SharedAuthenticationUtilities.AuthenticationRequestState
// 0x0018
struct FAuthenticationRequestState
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
