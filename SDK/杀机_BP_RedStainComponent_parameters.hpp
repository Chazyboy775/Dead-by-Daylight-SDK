#pragma once

// ����ɱ�� (4.22.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ɱ��_BP_RedStainComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DeadByDaylight.RedStainComponent.UpdateRedStain
struct UBP_RedStainComponent_C_UpdateRedStain_Params
{
	bool*                                              shouldBeHidden;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Alpha;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
