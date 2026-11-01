#include <Geode/binding/SetupInteractObjectPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x5b4060
// Method: SetupInteractObjectPopup::~SetupInteractObjectPopup
cocos2d::CCNode *__fastcall SetupInteractObjectPopup__dtor_SetupInteractObjectPopup(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &SetupInteractObjectPopup::`vftable'; /*0x5b4073*/
  *((_QWORD *)Block + 40) = &SetupInteractObjectPopup::`vftable'; /*0x5b4080*/
  *((_QWORD *)Block + 41) = &SetupInteractObjectPopup::`vftable'; /*0x5b408e*/
  *((_QWORD *)Block + 42) = &SetupInteractObjectPopup::`vftable'; /*0x5b409c*/
  *((_QWORD *)Block + 43) = &SetupInteractObjectPopup::`vftable'; /*0x5b40aa*/
  *((_QWORD *)Block + 44) = &SetupInteractObjectPopup::`vftable'; /*0x5b40b8*/
  *((_QWORD *)Block + 51) = &SetupInteractObjectPopup::`vftable'; /*0x5b40c6*/
  *((_QWORD *)Block + 54) = &SetupInteractObjectPopup::`vftable'; /*0x5b40d4*/
  *((_QWORD *)Block + 68) = &SetupInteractObjectPopup::`vftable'; /*0x5b40e2*/
  *((_QWORD *)Block + 83) = &SetupInteractObjectPopup::`vftable'; /*0x5b40f0*/
  *((_QWORD *)Block + 84) = &SetupInteractObjectPopup::`vftable'; /*0x5b40fe*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x5b4105*/
  if ( (a2 & 1) != 0 ) /*0x5b410d*/
    j_j_free(Block); /*0x5b4117*/
  return Block; /*0x5b411c*/
}

// [2/2] Address: 0x5b4b40
// Method: SetupInteractObjectPopup::valueDidChange
void __fastcall SetupInteractObjectPopup_valueDidChange(cocos2d::CCDictionary **a1, int a2, float a3)
{
  if ( (unsigned int)(a2 - 381) <= 1 ) /*0x5b4b49*/
  {
    sub_5B4AC0(); /*0x5b4b5d*/
  }
  else if ( a2 == 463 ) /*0x5b4b51*/
  {
    SetupTriggerPopup_updateValue(a1, 0x1CEu, a3); /*0x5b4b58*/
  }
}
