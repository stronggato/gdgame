#include <Geode/binding/GJCompactUserCell.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x155690
// Method: GJCompactUserCell::~GJCompactUserCell
_QWORD *__fastcall GJCompactUserCell__dtor_GJCompactUserCell(_QWORD *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *Block = &GJCompactUserCell::`vftable'; /*0x1556a6*/
  Block[40] = &GJCompactUserCell::`vftable'; /*0x1556b0*/
  Block[41] = &GJCompactUserCell::`vftable'; /*0x1556be*/
  Block[42] = &GJCompactUserCell::`vftable'; /*0x1556cc*/
  Block[43] = &GJCompactUserCell::`vftable'; /*0x1556da*/
  Block[44] = &GJCompactUserCell::`vftable'; /*0x1556e8*/
  v4 = (cocos2d::CCObject *)Block[70]; /*0x1556ef*/
  if ( v4 ) /*0x1556f9*/
    cocos2d::CCObject::release(v4); /*0x1556fb*/
  URLCell__dtor_URLCell(Block); /*0x155704*/
  if ( (a2 & 1) != 0 ) /*0x15570e*/
    j_j_free(Block); /*0x155718*/
  return Block; /*0x155720*/
}
