#include <Geode/binding/GraphicsReloadLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x4c6b70
// Method: GraphicsReloadLayer::~GraphicsReloadLayer
cocos2d::CCLayer *__fastcall GraphicsReloadLayer__dtor_GraphicsReloadLayer(cocos2d::CCLayer *Block, char a2)
{
  cocos2d::CCLayer::~CCLayer(Block); /*0x4c6b7f*/
  if ( (a2 & 1) != 0 ) /*0x4c6b88*/
    j_j_free(Block); /*0x4c6b92*/
  return Block; /*0x4c6b97*/
}
