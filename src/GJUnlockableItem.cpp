#include <Geode/binding/GJUnlockableItem.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x2f6220
// Method: GJUnlockableItem::~GJUnlockableItem
cocos2d::CCObject *__fastcall GJUnlockableItem__dtor_GJUnlockableItem(cocos2d::CCObject *Block, char a2)
{
  cocos2d::CCObject::~CCObject(Block); /*0x2f622f*/
  if ( (a2 & 1) != 0 ) /*0x2f6238*/
    j_j_free(Block); /*0x2f6242*/
  return Block; /*0x2f6247*/
}
