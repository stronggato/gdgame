#include <Geode/binding/GooglePlayManager.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x769d0
// Method: GooglePlayManager::~GooglePlayManager
cocos2d::CCNode *__fastcall GooglePlayManager__dtor_GooglePlayManager(cocos2d::CCNode *Block, char a2)
{
  qword_905F70 = 0; /*0x769e1*/
  *(_QWORD *)Block = &GooglePlayManager::`vftable'; /*0x769ec*/
  cocos2d::CCNode::~CCNode(Block); /*0x769f4*/
  if ( (a2 & 1) != 0 ) /*0x769fd*/
    j_j_free(Block); /*0x76a07*/
  return Block; /*0x76a0c*/
}
