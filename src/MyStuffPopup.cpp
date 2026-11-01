#include <Geode/binding/MyStuffPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x54b3a0
// Method: MyStuffPopup::~MyStuffPopup
_QWORD *__fastcall MyStuffPopup__dtor_MyStuffPopup(_QWORD *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *Block = &MyStuffPopup::`vftable'; /*0x54b3b6*/
  Block[40] = &MyStuffPopup::`vftable'; /*0x54b3c0*/
  Block[41] = &MyStuffPopup::`vftable'; /*0x54b3ce*/
  Block[42] = &MyStuffPopup::`vftable'; /*0x54b3dc*/
  Block[43] = &MyStuffPopup::`vftable'; /*0x54b3ea*/
  Block[44] = &MyStuffPopup::`vftable'; /*0x54b3f8*/
  Block[51] = &MyStuffPopup::`vftable'; /*0x54b406*/
  Block[54] = &MyStuffPopup::`vftable'; /*0x54b414*/
  Block[68] = &MyStuffPopup::`vftable'; /*0x54b422*/
  v4 = (cocos2d::CCObject *)Block[83]; /*0x54b429*/
  if ( v4 ) /*0x54b433*/
    cocos2d::CCObject::release(v4); /*0x54b435*/
  StarInfoPopup__dtor_StarInfoPopup((__int64)Block); /*0x54b43e*/
  if ( (a2 & 1) != 0 ) /*0x54b448*/
    j_j_free(Block); /*0x54b452*/
  return Block; /*0x54b45a*/
}
