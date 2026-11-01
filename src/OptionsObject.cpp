#include <Geode/binding/OptionsObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x3961b0
// Method: OptionsObject::~OptionsObject
cocos2d::CCObject *__fastcall OptionsObject__dtor_OptionsObject(cocos2d::CCObject *Block, char a2)
{
  *(_QWORD *)Block = &OptionsObject::`vftable'; /*0x3961c4*/
  sub_3C310((char *)Block + 64); /*0x3961cd*/
  cocos2d::CCObject::~CCObject(Block); /*0x3961d5*/
  if ( (a2 & 1) != 0 ) /*0x3961de*/
    j_j_free(Block); /*0x3961e8*/
  return Block; /*0x3961ed*/
}
