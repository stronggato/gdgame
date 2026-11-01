#include <Geode/binding/SetupCheckpointPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x5f6ff0
// Method: SetupCheckpointPopup::~SetupCheckpointPopup
cocos2d::CCNode *__fastcall SetupCheckpointPopup__dtor_SetupCheckpointPopup(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &SetupCheckpointPopup::`vftable'; /*0x5f7003*/
  *((_QWORD *)Block + 40) = &SetupCheckpointPopup::`vftable'; /*0x5f7010*/
  *((_QWORD *)Block + 41) = &SetupCheckpointPopup::`vftable'; /*0x5f701e*/
  *((_QWORD *)Block + 42) = &SetupCheckpointPopup::`vftable'; /*0x5f702c*/
  *((_QWORD *)Block + 43) = &SetupCheckpointPopup::`vftable'; /*0x5f703a*/
  *((_QWORD *)Block + 44) = &SetupCheckpointPopup::`vftable'; /*0x5f7048*/
  *((_QWORD *)Block + 51) = &SetupCheckpointPopup::`vftable'; /*0x5f7056*/
  *((_QWORD *)Block + 54) = &SetupCheckpointPopup::`vftable'; /*0x5f7064*/
  *((_QWORD *)Block + 68) = &SetupCheckpointPopup::`vftable'; /*0x5f7072*/
  *((_QWORD *)Block + 83) = &SetupCheckpointPopup::`vftable'; /*0x5f7080*/
  *((_QWORD *)Block + 84) = &SetupCheckpointPopup::`vftable'; /*0x5f708e*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x5f7095*/
  if ( (a2 & 1) != 0 ) /*0x5f709d*/
    j_j_free(Block); /*0x5f70a7*/
  return Block; /*0x5f70ac*/
}
