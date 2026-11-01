#include <Geode/binding/ExplodeItemSprite.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x4d8a90
// Method: ExplodeItemSprite::~ExplodeItemSprite
cocos2d::CCSprite *__fastcall ExplodeItemSprite__dtor_ExplodeItemSprite(cocos2d::CCSprite *Block, char a2)
{
  cocos2d::CCSprite::~CCSprite(Block); /*0x4d8a9f*/
  if ( (a2 & 1) != 0 ) /*0x4d8aa8*/
    j_j_free(Block); /*0x4d8ab2*/
  return Block; /*0x4d8ab7*/
}

// [2/2] Address: 0x4df010
// Method: ExplodeItemSprite::init
bool __fastcall ExplodeItemSprite_init(cocos2d::CCSprite *a1)
{
  return cocos2d::CCSprite::init(a1); /*0x4df01f*/
}
