#include <Geode/binding/GJStoreItem.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x2d2f10
// Method: GJStoreItem::~GJStoreItem
cocos2d::CCNode *__fastcall GJStoreItem__dtor_GJStoreItem(cocos2d::CCNode *Block, char a2)
{
  cocos2d::CCNode::~CCNode(Block); /*0x2d2f1f*/
  if ( (a2 & 1) != 0 ) /*0x2d2f28*/
    j_j_free(Block); /*0x2d2f32*/
  return Block; /*0x2d2f37*/
}
