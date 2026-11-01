#include <Geode/binding/SetupEventLinkPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x5f6d30
// Method: SetupEventLinkPopup::~SetupEventLinkPopup
cocos2d::CCNode *__fastcall SetupEventLinkPopup__dtor_SetupEventLinkPopup(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &SetupEventLinkPopup::`vftable'; /*0x5f6d43*/
  *((_QWORD *)Block + 40) = &SetupEventLinkPopup::`vftable'; /*0x5f6d50*/
  *((_QWORD *)Block + 41) = &SetupEventLinkPopup::`vftable'; /*0x5f6d5e*/
  *((_QWORD *)Block + 42) = &SetupEventLinkPopup::`vftable'; /*0x5f6d6c*/
  *((_QWORD *)Block + 43) = &SetupEventLinkPopup::`vftable'; /*0x5f6d7a*/
  *((_QWORD *)Block + 44) = &SetupEventLinkPopup::`vftable'; /*0x5f6d88*/
  *((_QWORD *)Block + 51) = &SetupEventLinkPopup::`vftable'; /*0x5f6d96*/
  *((_QWORD *)Block + 54) = &SetupEventLinkPopup::`vftable'; /*0x5f6da4*/
  *((_QWORD *)Block + 68) = &SetupEventLinkPopup::`vftable'; /*0x5f6db2*/
  *((_QWORD *)Block + 83) = &SetupEventLinkPopup::`vftable'; /*0x5f6dc0*/
  *((_QWORD *)Block + 84) = &SetupEventLinkPopup::`vftable'; /*0x5f6dce*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x5f6dd5*/
  if ( (a2 & 1) != 0 ) /*0x5f6ddd*/
    j_j_free(Block); /*0x5f6de7*/
  return Block; /*0x5f6dec*/
}
