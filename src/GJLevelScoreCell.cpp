#include <Geode/binding/GJLevelScoreCell.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x154ac0
// Method: GJLevelScoreCell::~GJLevelScoreCell
_QWORD *__fastcall GJLevelScoreCell__dtor_GJLevelScoreCell(_QWORD *Block, char a2)
{
  *Block = &GJLevelScoreCell::`vftable'; /*0x154ad3*/
  Block[40] = &GJLevelScoreCell::`vftable'; /*0x154ae0*/
  Block[41] = &GJLevelScoreCell::`vftable'; /*0x154aee*/
  Block[42] = &GJLevelScoreCell::`vftable'; /*0x154afc*/
  Block[43] = &GJLevelScoreCell::`vftable'; /*0x154b0a*/
  Block[44] = &GJLevelScoreCell::`vftable'; /*0x154b18*/
  URLCell__dtor_URLCell(Block); /*0x154b1f*/
  if ( (a2 & 1) != 0 ) /*0x154b27*/
    j_j_free(Block); /*0x154b31*/
  return Block; /*0x154b36*/
}
