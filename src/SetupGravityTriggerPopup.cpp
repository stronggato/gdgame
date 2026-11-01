#include <Geode/binding/SetupGravityTriggerPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x5b9940
// Method: SetupGravityTriggerPopup::~SetupGravityTriggerPopup
cocos2d::CCNode *__fastcall SetupGravityTriggerPopup__dtor_SetupGravityTriggerPopup(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &SetupGravityTriggerPopup::`vftable'; /*0x5b9953*/
  *((_QWORD *)Block + 40) = &SetupGravityTriggerPopup::`vftable'; /*0x5b9960*/
  *((_QWORD *)Block + 41) = &SetupGravityTriggerPopup::`vftable'; /*0x5b996e*/
  *((_QWORD *)Block + 42) = &SetupGravityTriggerPopup::`vftable'; /*0x5b997c*/
  *((_QWORD *)Block + 43) = &SetupGravityTriggerPopup::`vftable'; /*0x5b998a*/
  *((_QWORD *)Block + 44) = &SetupGravityTriggerPopup::`vftable'; /*0x5b9998*/
  *((_QWORD *)Block + 51) = &SetupGravityTriggerPopup::`vftable'; /*0x5b99a6*/
  *((_QWORD *)Block + 54) = &SetupGravityTriggerPopup::`vftable'; /*0x5b99b4*/
  *((_QWORD *)Block + 68) = &SetupGravityTriggerPopup::`vftable'; /*0x5b99c2*/
  *((_QWORD *)Block + 83) = &SetupGravityTriggerPopup::`vftable'; /*0x5b99d0*/
  *((_QWORD *)Block + 84) = &SetupGravityTriggerPopup::`vftable'; /*0x5b99de*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x5b99e5*/
  if ( (a2 & 1) != 0 ) /*0x5b99ed*/
    j_j_free(Block); /*0x5b99f7*/
  return Block; /*0x5b99fc*/
}

// [2/2] Address: 0x5b9fb0
// Method: SetupGravityTriggerPopup::valueDidChange
double __fastcall SetupGravityTriggerPopup_valueDidChange(cocos2d::CCDictionary **a1, int a2, float a3)
{
  double result; // xmm0_8

  if ( (a2 == 138 || (unsigned int)(a2 - 200) <= 1) && a3 != 0.0 ) /*0x5b9fe4*/
  {
    if ( a2 != 138 ) /*0x5b9ff0*/
    {
      if ( cocos2d::CCDictionary::objectForKey(a1[94], 138) ) /*0x5b9ffe*/
        (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*a1 + 144))(a1, 138, 0); /*0x5ba017*/
      else
        sub_60A5A0(a1, 138); /*0x5ba022*/
      sub_60ABF0(a1, 138); /*0x5ba032*/
      if ( a2 == 200 ) /*0x5ba03d*/
        goto LABEL_19; /*0x5ba03d*/
    }
    if ( cocos2d::CCDictionary::objectForKey(a1[94], 200) ) /*0x5ba04b*/
      (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*a1 + 144))(a1, 200, 0); /*0x5ba064*/
    else
      sub_60A5A0(a1, 200); /*0x5ba06f*/
    result = sub_60ABF0(a1, 200); /*0x5ba07f*/
    if ( a2 != 201 ) /*0x5ba08a*/
    {
LABEL_19:
      if ( cocos2d::CCDictionary::objectForKey(a1[94], 201) ) /*0x5ba098*/
        (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*a1 + 144))(a1, 201, 0); /*0x5ba0b1*/
      else
        sub_60A5A0(a1, 201); /*0x5ba0bc*/
      return sub_60ABF0(a1, 201); /*0x5ba0cc*/
    }
  }
  return result; /*0x5ba0d6*/
}
