#include <Geode/binding/CreateStartPosPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x4d2560
// Method: CreateStartPosPopup::~CreateStartPosPopup
cocos2d::CCNode *__fastcall CreateStartPosPopup__dtor_CreateStartPosPopup(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &CreateStartPosPopup::`vftable'; /*0x4d2573*/
  *((_QWORD *)Block + 40) = &CreateStartPosPopup::`vftable'; /*0x4d2580*/
  *((_QWORD *)Block + 41) = &CreateStartPosPopup::`vftable'; /*0x4d258e*/
  *((_QWORD *)Block + 42) = &CreateStartPosPopup::`vftable'; /*0x4d259c*/
  *((_QWORD *)Block + 43) = &CreateStartPosPopup::`vftable'; /*0x4d25aa*/
  *((_QWORD *)Block + 44) = &CreateStartPosPopup::`vftable'; /*0x4d25b8*/
  *((_QWORD *)Block + 51) = &CreateStartPosPopup::`vftable'; /*0x4d25c6*/
  *((_QWORD *)Block + 54) = &CreateStartPosPopup::`vftable'; /*0x4d25d4*/
  *((_QWORD *)Block + 68) = &CreateStartPosPopup::`vftable'; /*0x4d25e2*/
  *((_QWORD *)Block + 83) = &CreateStartPosPopup::`vftable'; /*0x4d25f0*/
  *((_QWORD *)Block + 84) = &CreateStartPosPopup::`vftable'; /*0x4d25fe*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x4d2605*/
  if ( (a2 & 1) != 0 ) /*0x4d260d*/
    j_j_free(Block); /*0x4d2617*/
  return Block; /*0x4d261c*/
}

// [3/4] Address: 0x4d82b0
// Method: CreateStartPosPopup::updateInputNode
struct cocos2d::CCObject *__fastcall CreateStartPosPopup_updateInputNode(__int64 a1, int a2, float a3)
{
  struct cocos2d::CCObject *result; // rax

  if ( a2 != -1 ) /*0x4d82b3*/
    return SetupTriggerPopup_updateInputNode(a1, a2, a3); /*0x4d82b3*/
  return result; /*0x4d82b9*/
}

// [4/4] Address: 0x4d8970
// Method: CreateStartPosPopup::onClose
__int64 __fastcall CreateStartPosPopup_onClose(__int64 a1)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  v2 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 1000); /*0x4d8980*/
  if ( v2 ) /*0x4d898a*/
    (**v2)(v2, a1); /*0x4d8992*/
  return SetupTriggerPopup_onClose(a1); /*0x4d899a*/
}
