#include <Geode/binding/EditorSoundConfigCell.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x18e0b0
// Method: EditorSoundConfigCell::~EditorSoundConfigCell
_QWORD *__fastcall EditorSoundConfigCell__dtor_EditorSoundConfigCell(_QWORD *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *Block = &EditorSoundConfigCell::`vftable'; /*0x18e0c6*/
  Block[40] = &EditorSoundConfigCell::`vftable'; /*0x18e0d0*/
  Block[41] = &EditorSoundConfigCell::`vftable'; /*0x18e0de*/
  Block[42] = &EditorSoundConfigCell::`vftable'; /*0x18e0ec*/
  Block[43] = &EditorSoundConfigCell::`vftable'; /*0x18e0fa*/
  Block[44] = &EditorSoundConfigCell::`vftable'; /*0x18e108*/
  v4 = (cocos2d::CCObject *)Block[70]; /*0x18e10f*/
  if ( v4 ) /*0x18e119*/
    cocos2d::CCObject::release(v4); /*0x18e11b*/
  URLCell__dtor_URLCell(Block); /*0x18e124*/
  if ( (a2 & 1) != 0 ) /*0x18e12e*/
    j_j_free(Block); /*0x18e138*/
  return Block; /*0x18e140*/
}
