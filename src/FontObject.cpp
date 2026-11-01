#include <Geode/binding/FontObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x3d130
// Method: FontObject::~FontObject
char *__fastcall FontObject__dtor_FontObject(char *Block, char a2)
{
  sub_3DA90(Block + 144); /*0x3d146*/
  sub_3DB00(Block + 128); /*0x3d152*/
  sub_3DA90(Block + 80); /*0x3d15b*/
  sub_3DB00(Block + 64); /*0x3d164*/
  cocos2d::CCObject::~CCObject((cocos2d::CCObject *)Block); /*0x3d16c*/
  if ( (a2 & 1) != 0 ) /*0x3d175*/
    j_j_free(Block); /*0x3d17f*/
  return Block; /*0x3d184*/
}
