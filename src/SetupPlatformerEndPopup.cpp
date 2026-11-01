#include <Geode/binding/SetupPlatformerEndPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/2] Address: 0x5ad070
// Method: SetupPlatformerEndPopup::~SetupPlatformerEndPopup
cocos2d::CCNode *__fastcall SetupPlatformerEndPopup__dtor_SetupPlatformerEndPopup(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &SetupPlatformerEndPopup::`vftable'; /*0x5ad083*/
  *((_QWORD *)Block + 40) = &SetupPlatformerEndPopup::`vftable'; /*0x5ad090*/
  *((_QWORD *)Block + 41) = &SetupPlatformerEndPopup::`vftable'; /*0x5ad09e*/
  *((_QWORD *)Block + 42) = &SetupPlatformerEndPopup::`vftable'; /*0x5ad0ac*/
  *((_QWORD *)Block + 43) = &SetupPlatformerEndPopup::`vftable'; /*0x5ad0ba*/
  *((_QWORD *)Block + 44) = &SetupPlatformerEndPopup::`vftable'; /*0x5ad0c8*/
  *((_QWORD *)Block + 51) = &SetupPlatformerEndPopup::`vftable'; /*0x5ad0d6*/
  *((_QWORD *)Block + 54) = &SetupPlatformerEndPopup::`vftable'; /*0x5ad0e4*/
  *((_QWORD *)Block + 68) = &SetupPlatformerEndPopup::`vftable'; /*0x5ad0f2*/
  *((_QWORD *)Block + 83) = &SetupPlatformerEndPopup::`vftable'; /*0x5ad100*/
  *((_QWORD *)Block + 84) = &SetupPlatformerEndPopup::`vftable'; /*0x5ad10e*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x5ad115*/
  if ( (a2 & 1) != 0 ) /*0x5ad11d*/
    j_j_free(Block); /*0x5ad127*/
  return Block; /*0x5ad12c*/
}
