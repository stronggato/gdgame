#include <Geode/binding/SetupPlayerControlPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x5f6f20
// Method: SetupPlayerControlPopup::~SetupPlayerControlPopup
cocos2d::CCNode *__fastcall SetupPlayerControlPopup__dtor_SetupPlayerControlPopup(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &SetupPlayerControlPopup::`vftable'; /*0x5f6f33*/
  *((_QWORD *)Block + 40) = &SetupPlayerControlPopup::`vftable'; /*0x5f6f40*/
  *((_QWORD *)Block + 41) = &SetupPlayerControlPopup::`vftable'; /*0x5f6f4e*/
  *((_QWORD *)Block + 42) = &SetupPlayerControlPopup::`vftable'; /*0x5f6f5c*/
  *((_QWORD *)Block + 43) = &SetupPlayerControlPopup::`vftable'; /*0x5f6f6a*/
  *((_QWORD *)Block + 44) = &SetupPlayerControlPopup::`vftable'; /*0x5f6f78*/
  *((_QWORD *)Block + 51) = &SetupPlayerControlPopup::`vftable'; /*0x5f6f86*/
  *((_QWORD *)Block + 54) = &SetupPlayerControlPopup::`vftable'; /*0x5f6f94*/
  *((_QWORD *)Block + 68) = &SetupPlayerControlPopup::`vftable'; /*0x5f6fa2*/
  *((_QWORD *)Block + 83) = &SetupPlayerControlPopup::`vftable'; /*0x5f6fb0*/
  *((_QWORD *)Block + 84) = &SetupPlayerControlPopup::`vftable'; /*0x5f6fbe*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x5f6fc5*/
  if ( (a2 & 1) != 0 ) /*0x5f6fcd*/
    j_j_free(Block); /*0x5f6fd7*/
  return Block; /*0x5f6fdc*/
}
