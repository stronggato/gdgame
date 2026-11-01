#include <Geode/binding/SetupGameplayOffsetPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/6] Address: 0x5d1720
// Method: SetupGameplayOffsetPopup::~SetupGameplayOffsetPopup
cocos2d::CCNode *__fastcall SetupGameplayOffsetPopup__dtor_SetupGameplayOffsetPopup(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &SetupGameplayOffsetPopup::`vftable'; /*0x5d1733*/
  *((_QWORD *)Block + 40) = &SetupGameplayOffsetPopup::`vftable'; /*0x5d1740*/
  *((_QWORD *)Block + 41) = &SetupGameplayOffsetPopup::`vftable'; /*0x5d174e*/
  *((_QWORD *)Block + 42) = &SetupGameplayOffsetPopup::`vftable'; /*0x5d175c*/
  *((_QWORD *)Block + 43) = &SetupGameplayOffsetPopup::`vftable'; /*0x5d176a*/
  *((_QWORD *)Block + 44) = &SetupGameplayOffsetPopup::`vftable'; /*0x5d1778*/
  *((_QWORD *)Block + 51) = &SetupGameplayOffsetPopup::`vftable'; /*0x5d1786*/
  *((_QWORD *)Block + 54) = &SetupGameplayOffsetPopup::`vftable'; /*0x5d1794*/
  *((_QWORD *)Block + 68) = &SetupGameplayOffsetPopup::`vftable'; /*0x5d17a2*/
  *((_QWORD *)Block + 83) = &SetupGameplayOffsetPopup::`vftable'; /*0x5d17b0*/
  *((_QWORD *)Block + 84) = &SetupGameplayOffsetPopup::`vftable'; /*0x5d17be*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x5d17c5*/
  if ( (a2 & 1) != 0 ) /*0x5d17cd*/
    j_j_free(Block); /*0x5d17d7*/
  return Block; /*0x5d17dc*/
}

// [2/6] Address: 0x5d2b00
// Method: SetupGameplayOffsetPopup::onDefaultValues
double __fastcall SetupGameplayOffsetPopup_onDefaultValues(cocos2d::CCDictionary **a1)
{
  __int64 v2; // r8
  __int64 v3; // r8

  if ( cocos2d::CCDictionary::objectForKey(a1[94], 28) ) /*0x5d2b1a*/
  {
    LOBYTE(v2) = 1; /*0x5d2b38*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, __int64))*a1 + 144))(a1, 28, v2); /*0x5d2b3b*/
  }
  else
  {
    sub_60A5A0(a1, 28); /*0x5d2b46*/
  }
  sub_60ABF0(a1, 28); /*0x5d2b56*/
  if ( cocos2d::CCDictionary::objectForKey(a1[94], 29) ) /*0x5d2b67*/
  {
    LOBYTE(v3) = 1; /*0x5d2b7d*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, __int64))*a1 + 144))(a1, 29, v3); /*0x5d2b80*/
  }
  else
  {
    sub_60A5A0(a1, 29); /*0x5d2b8b*/
  }
  return sub_60ABF0(a1, 29); /*0x5d2b9b*/
}

// [3/6] Address: 0x5d2c60
// Method: SetupGameplayOffsetPopup::triggerValueFromSliderValue
float __fastcall SetupGameplayOffsetPopup_triggerValueFromSliderValue(__int64 a1, int a2, float a3)
{
  float result; // xmm0_4

  result = SetupTriggerPopup_triggerValueFromSliderValue(a1, a2, a3); /*0x5d2c68*/
  if ( (unsigned int)(a2 - 28) <= 1 ) /*0x5d2c70*/
    return floorf(result) * 3.0; /*0x5d2c7c*/
  return result; /*0x5d2c84*/
}

// [4/6] Address: 0x5d2c90
// Method: SetupGameplayOffsetPopup::triggerSliderValueFromValue
__m128 __fastcall SetupGameplayOffsetPopup_triggerSliderValueFromValue(__int64 a1, int a2, float a3)
{
  if ( a2 == 28 || a2 == 29 ) /*0x5d2c9d*/
    a3 = a3 / 3.0; /*0x5d2c9f*/
  return SetupTriggerPopup_triggerSliderValueFromValue(a1, a2, a3);
}

// [5/6] Address: 0x5d2cb0
// Method: SetupGameplayOffsetPopup::updateInputNode
struct cocos2d::CCObject *__fastcall SetupGameplayOffsetPopup_updateInputNode(__int64 a1, int a2, float a3)
{
  if ( a2 == 28 || a2 == 29 ) /*0x5d2cbd*/
    a3 = a3 / 3.0; /*0x5d2cbf*/
  return SetupTriggerPopup_updateInputNode(a1, a2, a3);
}

// [6/6] Address: 0x5d2cd0
// Method: SetupGameplayOffsetPopup::updateInputValue
void __fastcall SetupGameplayOffsetPopup_updateInputValue(__int64 a1, int a2, float *a3)
{
  if ( (unsigned int)(a2 - 28) <= 1 ) /*0x5d2cd3*/
    *a3 = *a3 * 3.0; /*0x5d2ce7*/
}
