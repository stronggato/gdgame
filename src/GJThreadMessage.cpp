#include <Geode/binding/GJThreadMessage.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0xd0c60
// Method: GJThreadMessage::~GJThreadMessage
cocos2d::CCObject *__fastcall GJThreadMessage__dtor_GJThreadMessage(cocos2d::CCObject *Block, char a2)
{
  sub_3C310((char *)Block + 72); /*0xd0c73*/
  cocos2d::CCObject::~CCObject(Block); /*0xd0c7b*/
  if ( (a2 & 1) != 0 ) /*0xd0c84*/
    j_j_free(Block); /*0xd0c8e*/
  return Block; /*0xd0c93*/
}
