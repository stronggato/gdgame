#include <Geode/binding/DeathStatsPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x11bdf0
// Method: DeathStatsPopup::~DeathStatsPopup
cocos2d::CCNode *__fastcall DeathStatsPopup__dtor_DeathStatsPopup(cocos2d::CCNode *Block, char a2)
{
  __int64 v4; // rax
  __int64 v5; // rax

  *(_QWORD *)Block = &DeathStatsPopup::`vftable'; /*0x11be04*/
  *((_QWORD *)Block + 40) = &DeathStatsPopup::`vftable'; /*0x11be10*/
  *((_QWORD *)Block + 41) = &DeathStatsPopup::`vftable'; /*0x11be1e*/
  *((_QWORD *)Block + 42) = &DeathStatsPopup::`vftable'; /*0x11be2c*/
  *((_QWORD *)Block + 43) = &DeathStatsPopup::`vftable'; /*0x11be3a*/
  *((_QWORD *)Block + 44) = &DeathStatsPopup::`vftable'; /*0x11be48*/
  *((_QWORD *)Block + 51) = &DeathStatsPopup::`vftable'; /*0x11be56*/
  *((_QWORD *)Block + 54) = &DeathStatsPopup::`vftable'; /*0x11be64*/
  *((_QWORD *)Block + 68) = &DeathStatsPopup::`vftable'; /*0x11be72*/
  *((_QWORD *)Block + 83) = &DeathStatsPopup::`vftable'; /*0x11be80*/
  *((_QWORD *)Block + 84) = &DeathStatsPopup::`vftable'; /*0x11be8e*/
  v4 = *((_QWORD *)Block + 126); /*0x11be95*/
  if ( v4 ) /*0x11bea1*/
    *(_QWORD *)(v4 + 608) = 0; /*0x11bea3*/
  v5 = *((_QWORD *)Block + 127); /*0x11beaa*/
  if ( v5 ) /*0x11beb4*/
    *(_QWORD *)(v5 + 608) = 0; /*0x11beb6*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x11bec0*/
  if ( (a2 & 1) != 0 ) /*0x11bec9*/
    j_j_free(Block); /*0x11bed3*/
  return Block; /*0x11bedb*/
}
