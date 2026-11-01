#include <Geode/binding/SetupObjectTogglePopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x5ba0f0
// Method: SetupObjectTogglePopup::~SetupObjectTogglePopup
cocos2d::CCNode *__fastcall SetupObjectTogglePopup__dtor_SetupObjectTogglePopup(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &SetupObjectTogglePopup::`vftable'; /*0x5ba103*/
  *((_QWORD *)Block + 40) = &SetupObjectTogglePopup::`vftable'; /*0x5ba110*/
  *((_QWORD *)Block + 41) = &SetupObjectTogglePopup::`vftable'; /*0x5ba11e*/
  *((_QWORD *)Block + 42) = &SetupObjectTogglePopup::`vftable'; /*0x5ba12c*/
  *((_QWORD *)Block + 43) = &SetupObjectTogglePopup::`vftable'; /*0x5ba13a*/
  *((_QWORD *)Block + 44) = &SetupObjectTogglePopup::`vftable'; /*0x5ba148*/
  *((_QWORD *)Block + 51) = &SetupObjectTogglePopup::`vftable'; /*0x5ba156*/
  *((_QWORD *)Block + 54) = &SetupObjectTogglePopup::`vftable'; /*0x5ba164*/
  *((_QWORD *)Block + 68) = &SetupObjectTogglePopup::`vftable'; /*0x5ba172*/
  *((_QWORD *)Block + 83) = &SetupObjectTogglePopup::`vftable'; /*0x5ba180*/
  *((_QWORD *)Block + 84) = &SetupObjectTogglePopup::`vftable'; /*0x5ba18e*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x5ba195*/
  if ( (a2 & 1) != 0 ) /*0x5ba19d*/
    j_j_free(Block); /*0x5ba1a7*/
  return Block; /*0x5ba1ac*/
}

// [2/2] Address: 0x5bacb0
// Method: SetupObjectTogglePopup::valueDidChange
void __fastcall SetupObjectTogglePopup_valueDidChange(__int64 a1, int a2)
{
  struct cocos2d::CCObject *v2; // rax
  cocos2d::CCArray *v3; // rdi
  unsigned int i; // ebx
  struct cocos2d::CCObject *v5; // rax

  if ( a2 == 56 ) /*0x5bacb7*/
  {
    v2 = *(struct cocos2d::CCObject **)(a1 + 680); /*0x5bacb9*/
    if ( v2 ) /*0x5baccd*/
      v3 = cocos2d::CCArray::createWithObject(v2); /*0x5bacd8*/
    else
      v3 = *(cocos2d::CCArray **)(a1 + 688); /*0x5bacdd*/
    for ( i = 0; i < cocos2d::CCArray::count(v3); ++i ) /*0x5bace9*/
    {
      v5 = cocos2d::CCArray::objectAtIndex(v3, i); /*0x5bacf8*/
      EffectGameObject_updateSpecialColor((__int64)v5); /*0x5bad01*/
    }
  }
}
