#include <Geode/binding/SFXInfoObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x47c9d0
// Method: SFXInfoObject::~SFXInfoObject
cocos2d::CCObject *__fastcall SFXInfoObject__dtor_SFXInfoObject(cocos2d::CCObject *Block, char a2)
{
  *(_QWORD *)Block = &SFXInfoObject::`vftable'; /*0x47c9e4*/
  sub_3C310((char *)Block + 144); /*0x47c9f0*/
  sub_3C310((char *)Block + 112); /*0x47c9f9*/
  sub_3C310((char *)Block + 80); /*0x47ca02*/
  cocos2d::CCObject::~CCObject(Block); /*0x47ca0a*/
  if ( (a2 & 1) != 0 ) /*0x47ca13*/
    j_j_free(Block); /*0x47ca1d*/
  return Block; /*0x47ca22*/
}
