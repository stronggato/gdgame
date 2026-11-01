#include <Geode/binding/FindObjectPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x17dc80
// Method: FindObjectPopup::~FindObjectPopup
cocos2d::CCNode *__fastcall FindObjectPopup__dtor_FindObjectPopup(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &FindObjectPopup::`vftable'; /*0x17dc93*/
  *((_QWORD *)Block + 40) = &FindObjectPopup::`vftable'; /*0x17dca0*/
  *((_QWORD *)Block + 41) = &FindObjectPopup::`vftable'; /*0x17dcae*/
  *((_QWORD *)Block + 42) = &FindObjectPopup::`vftable'; /*0x17dcbc*/
  *((_QWORD *)Block + 43) = &FindObjectPopup::`vftable'; /*0x17dcca*/
  *((_QWORD *)Block + 44) = &FindObjectPopup::`vftable'; /*0x17dcd8*/
  *((_QWORD *)Block + 51) = &FindObjectPopup::`vftable'; /*0x17dce6*/
  *((_QWORD *)Block + 54) = &FindObjectPopup::`vftable'; /*0x17dcf4*/
  *((_QWORD *)Block + 68) = &FindObjectPopup::`vftable'; /*0x17dd02*/
  *((_QWORD *)Block + 83) = &FindObjectPopup::`vftable'; /*0x17dd10*/
  *((_QWORD *)Block + 84) = &FindObjectPopup::`vftable'; /*0x17dd1e*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x17dd25*/
  if ( (a2 & 1) != 0 ) /*0x17dd2d*/
    j_j_free(Block); /*0x17dd37*/
  return Block; /*0x17dd3c*/
}

// [3/4] Address: 0x17e400
// Method: FindObjectPopup::valueDidChange
__int64 __fastcall FindObjectPopup_valueDidChange(__int64 a1, int a2, float a3)
{
  __int64 result; // rax

  if ( a2 == 51 ) /*0x17e403*/
  {
    result = (unsigned int)(int)a3; /*0x17e405*/
    *(_DWORD *)(a1 + 1152) = result; /*0x17e409*/
  }
  return result; /*0x17e40f*/
}

// [4/4] Address: 0x17e4b0
// Method: FindObjectPopup::onFieldEnter
__int64 __fastcall FindObjectPopup_onFieldEnter(__int64 a1)
{
  return sub_17E410(a1, 0);
}
