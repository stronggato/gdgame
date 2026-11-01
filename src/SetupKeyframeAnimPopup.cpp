#include <Geode/binding/SetupKeyframeAnimPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x5b4bf0
// Method: SetupKeyframeAnimPopup::~SetupKeyframeAnimPopup
cocos2d::CCNode *__fastcall SetupKeyframeAnimPopup__dtor_SetupKeyframeAnimPopup(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &SetupKeyframeAnimPopup::`vftable'; /*0x5b4c03*/
  *((_QWORD *)Block + 40) = &SetupKeyframeAnimPopup::`vftable'; /*0x5b4c10*/
  *((_QWORD *)Block + 41) = &SetupKeyframeAnimPopup::`vftable'; /*0x5b4c1e*/
  *((_QWORD *)Block + 42) = &SetupKeyframeAnimPopup::`vftable'; /*0x5b4c2c*/
  *((_QWORD *)Block + 43) = &SetupKeyframeAnimPopup::`vftable'; /*0x5b4c3a*/
  *((_QWORD *)Block + 44) = &SetupKeyframeAnimPopup::`vftable'; /*0x5b4c48*/
  *((_QWORD *)Block + 51) = &SetupKeyframeAnimPopup::`vftable'; /*0x5b4c56*/
  *((_QWORD *)Block + 54) = &SetupKeyframeAnimPopup::`vftable'; /*0x5b4c64*/
  *((_QWORD *)Block + 68) = &SetupKeyframeAnimPopup::`vftable'; /*0x5b4c72*/
  *((_QWORD *)Block + 83) = &SetupKeyframeAnimPopup::`vftable'; /*0x5b4c80*/
  *((_QWORD *)Block + 84) = &SetupKeyframeAnimPopup::`vftable'; /*0x5b4c8e*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x5b4c95*/
  if ( (a2 & 1) != 0 ) /*0x5b4c9d*/
    j_j_free(Block); /*0x5b4ca7*/
  return Block; /*0x5b4cac*/
}
