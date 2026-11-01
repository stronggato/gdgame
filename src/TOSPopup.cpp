#include <Geode/binding/TOSPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x396100
// Method: TOSPopup::~TOSPopup
_QWORD *__fastcall TOSPopup__dtor_TOSPopup(_QWORD *Block, char a2)
{
  *Block = &TOSPopup::`vftable'; /*0x396113*/
  Block[40] = &TOSPopup::`vftable'; /*0x396120*/
  Block[41] = &TOSPopup::`vftable'; /*0x39612e*/
  Block[42] = &TOSPopup::`vftable'; /*0x39613c*/
  Block[43] = &TOSPopup::`vftable'; /*0x39614a*/
  Block[44] = &TOSPopup::`vftable'; /*0x396158*/
  Block[51] = &TOSPopup::`vftable'; /*0x396166*/
  Block[54] = &TOSPopup::`vftable'; /*0x396174*/
  Block[68] = &TOSPopup::`vftable'; /*0x396182*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x396189*/
  if ( (a2 & 1) != 0 ) /*0x396191*/
    j_j_free(Block); /*0x39619b*/
  return Block; /*0x3961a0*/
}
