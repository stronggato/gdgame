#include <Geode/binding/SetupCollisionTriggerPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/4] Address: 0x5aa9e0
// Method: SetupCollisionTriggerPopup::~SetupCollisionTriggerPopup
cocos2d::CCNode *__fastcall SetupCollisionTriggerPopup__dtor_SetupCollisionTriggerPopup(
        cocos2d::CCNode *Block,
        char a2)
{
  *(_QWORD *)Block = &SetupCollisionTriggerPopup::`vftable'; /*0x5aa9f3*/
  *((_QWORD *)Block + 40) = &SetupCollisionTriggerPopup::`vftable'; /*0x5aaa00*/
  *((_QWORD *)Block + 41) = &SetupCollisionTriggerPopup::`vftable'; /*0x5aaa0e*/
  *((_QWORD *)Block + 42) = &SetupCollisionTriggerPopup::`vftable'; /*0x5aaa1c*/
  *((_QWORD *)Block + 43) = &SetupCollisionTriggerPopup::`vftable'; /*0x5aaa2a*/
  *((_QWORD *)Block + 44) = &SetupCollisionTriggerPopup::`vftable'; /*0x5aaa38*/
  *((_QWORD *)Block + 51) = &SetupCollisionTriggerPopup::`vftable'; /*0x5aaa46*/
  *((_QWORD *)Block + 54) = &SetupCollisionTriggerPopup::`vftable'; /*0x5aaa54*/
  *((_QWORD *)Block + 68) = &SetupCollisionTriggerPopup::`vftable'; /*0x5aaa62*/
  *((_QWORD *)Block + 83) = &SetupCollisionTriggerPopup::`vftable'; /*0x5aaa70*/
  *((_QWORD *)Block + 84) = &SetupCollisionTriggerPopup::`vftable'; /*0x5aaa7e*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x5aaa85*/
  if ( (a2 & 1) != 0 ) /*0x5aaa8d*/
    j_j_free(Block); /*0x5aaa97*/
  return Block; /*0x5aaa9c*/
}

// [3/4] Address: 0x5ab4b0
// Method: SetupCollisionTriggerPopup::valueDidChange
void __fastcall SetupCollisionTriggerPopup_valueDidChange(cocos2d::CCDictionary **a1, int a2)
{
  int v2; // edx
  int v3; // edx

  v2 = a2 - 51; /*0x5ab4b0*/
  if ( v2 ) /*0x5ab4b3*/
  {
    v3 = v2 - 87; /*0x5ab4b5*/
    if ( !v3 || (unsigned int)(v3 - 62) <= 1 ) /*0x5ab4bd*/
      SetupInstantCollisionTriggerPopup_updateSpecialNodes(a1); /*0x5ab4c4*/
  }
  else
  {
    sub_607BB0(a1); /*0x5ab4c9*/
  }
}

// [4/4] Address: 0x5ab720
// Method: SetupCollisionTriggerPopup::updateDefaultTriggerValues
void __fastcall SetupCollisionTriggerPopup_updateDefaultTriggerValues(struct cocos2d::CCObject **a1)
{
  SetupTriggerPopup_updateDefaultTriggerValues(a1); /*0x5ab729*/
  SetupInstantCollisionTriggerPopup_updateSpecialNodes(a1); /*0x5ab736*/
}
