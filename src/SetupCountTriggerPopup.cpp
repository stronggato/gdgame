#include <Geode/binding/SetupCountTriggerPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x5ac750
// Method: SetupCountTriggerPopup::~SetupCountTriggerPopup
cocos2d::CCNode *__fastcall SetupCountTriggerPopup__dtor_SetupCountTriggerPopup(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &SetupCountTriggerPopup::`vftable'; /*0x5ac763*/
  *((_QWORD *)Block + 40) = &SetupCountTriggerPopup::`vftable'; /*0x5ac770*/
  *((_QWORD *)Block + 41) = &SetupCountTriggerPopup::`vftable'; /*0x5ac77e*/
  *((_QWORD *)Block + 42) = &SetupCountTriggerPopup::`vftable'; /*0x5ac78c*/
  *((_QWORD *)Block + 43) = &SetupCountTriggerPopup::`vftable'; /*0x5ac79a*/
  *((_QWORD *)Block + 44) = &SetupCountTriggerPopup::`vftable'; /*0x5ac7a8*/
  *((_QWORD *)Block + 51) = &SetupCountTriggerPopup::`vftable'; /*0x5ac7b6*/
  *((_QWORD *)Block + 54) = &SetupCountTriggerPopup::`vftable'; /*0x5ac7c4*/
  *((_QWORD *)Block + 68) = &SetupCountTriggerPopup::`vftable'; /*0x5ac7d2*/
  *((_QWORD *)Block + 83) = &SetupCountTriggerPopup::`vftable'; /*0x5ac7e0*/
  *((_QWORD *)Block + 84) = &SetupCountTriggerPopup::`vftable'; /*0x5ac7ee*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x5ac7f5*/
  if ( (a2 & 1) != 0 ) /*0x5ac7fd*/
    j_j_free(Block); /*0x5ac807*/
  return Block; /*0x5ac80c*/
}

// [2/2] Address: 0x5acf80
// Method: SetupCountTriggerPopup::valueDidChange
__int64 __fastcall SetupCountTriggerPopup_valueDidChange(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 == 80 || a2 == 51 ) /*0x5acf88*/
    return sub_607BB0(a1); /*0x5acf8a*/
  return result; /*0x5acf8f*/
}
