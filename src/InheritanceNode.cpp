#include <Geode/binding/InheritanceNode.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x35e9c0
// Method: InheritanceNode::~InheritanceNode
cocos2d::CCObject *__fastcall InheritanceNode__dtor_InheritanceNode(cocos2d::CCObject *Block, char a2)
{
  cocos2d::CCObject::~CCObject(Block); /*0x35e9cf*/
  if ( (a2 & 1) != 0 ) /*0x35e9d8*/
    j_j_free(Block); /*0x35e9e2*/
  return Block; /*0x35e9e7*/
}
