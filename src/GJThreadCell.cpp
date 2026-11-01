#include <Geode/binding/GJThreadCell.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x156db0
// Method: GJThreadCell::~GJThreadCell
_QWORD *__fastcall GJThreadCell__dtor_GJThreadCell(_QWORD *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *Block = &GJThreadCell::`vftable'; /*0x156dc6*/
  Block[40] = &GJThreadCell::`vftable'; /*0x156dd0*/
  Block[41] = &GJThreadCell::`vftable'; /*0x156dde*/
  Block[42] = &GJThreadCell::`vftable'; /*0x156dec*/
  Block[43] = &GJThreadCell::`vftable'; /*0x156dfa*/
  Block[44] = &GJThreadCell::`vftable'; /*0x156e08*/
  v4 = (cocos2d::CCObject *)Block[70]; /*0x156e0f*/
  if ( v4 ) /*0x156e19*/
    cocos2d::CCObject::release(v4); /*0x156e1b*/
  URLCell__dtor_URLCell(Block); /*0x156e24*/
  if ( (a2 & 1) != 0 ) /*0x156e2e*/
    j_j_free(Block); /*0x156e38*/
  return Block; /*0x156e40*/
}
