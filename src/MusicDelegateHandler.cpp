#include <Geode/binding/MusicDelegateHandler.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x47c310
// Method: MusicDelegateHandler::~MusicDelegateHandler
cocos2d::CCNode *__fastcall MusicDelegateHandler__dtor_MusicDelegateHandler(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &MusicDelegateHandler::`vftable'; /*0x47c323*/
  cocos2d::CCNode::~CCNode(Block); /*0x47c329*/
  if ( (a2 & 1) != 0 ) /*0x47c332*/
    j_j_free(Block); /*0x47c33c*/
  return Block; /*0x47c341*/
}
