#include <Geode/binding/GJLocalLevelScoreCell.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/2] Address: 0x154660
// Method: GJLocalLevelScoreCell::~GJLocalLevelScoreCell
_QWORD *__fastcall GJLocalLevelScoreCell__dtor_GJLocalLevelScoreCell(_QWORD *Block, char a2)
{
  *Block = &GJLocalLevelScoreCell::`vftable'; /*0x154673*/
  Block[40] = &GJLocalLevelScoreCell::`vftable'; /*0x154680*/
  Block[41] = &GJLocalLevelScoreCell::`vftable'; /*0x15468e*/
  Block[42] = &GJLocalLevelScoreCell::`vftable'; /*0x15469c*/
  Block[43] = &GJLocalLevelScoreCell::`vftable'; /*0x1546aa*/
  Block[44] = &GJLocalLevelScoreCell::`vftable'; /*0x1546b8*/
  URLCell__dtor_URLCell(Block); /*0x1546bf*/
  if ( (a2 & 1) != 0 ) /*0x1546c7*/
    j_j_free(Block); /*0x1546d1*/
  return Block; /*0x1546d6*/
}
