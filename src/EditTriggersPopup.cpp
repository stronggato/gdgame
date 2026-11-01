#include <Geode/binding/EditTriggersPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x395330
// Method: EditTriggersPopup::~EditTriggersPopup
cocos2d::CCNode *__fastcall EditTriggersPopup__dtor_EditTriggersPopup(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &EditTriggersPopup::`vftable'; /*0x395343*/
  *((_QWORD *)Block + 40) = &EditTriggersPopup::`vftable'; /*0x395350*/
  *((_QWORD *)Block + 41) = &EditTriggersPopup::`vftable'; /*0x39535e*/
  *((_QWORD *)Block + 42) = &EditTriggersPopup::`vftable'; /*0x39536c*/
  *((_QWORD *)Block + 43) = &EditTriggersPopup::`vftable'; /*0x39537a*/
  *((_QWORD *)Block + 44) = &EditTriggersPopup::`vftable'; /*0x395388*/
  *((_QWORD *)Block + 51) = &EditTriggersPopup::`vftable'; /*0x395396*/
  *((_QWORD *)Block + 54) = &EditTriggersPopup::`vftable'; /*0x3953a4*/
  *((_QWORD *)Block + 68) = &EditTriggersPopup::`vftable'; /*0x3953b2*/
  *((_QWORD *)Block + 83) = &EditTriggersPopup::`vftable'; /*0x3953c0*/
  *((_QWORD *)Block + 84) = &EditTriggersPopup::`vftable'; /*0x3953ce*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x3953d5*/
  if ( (a2 & 1) != 0 ) /*0x3953dd*/
    j_j_free(Block); /*0x3953e7*/
  return Block; /*0x3953ec*/
}
