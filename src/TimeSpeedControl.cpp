#include <Geode/binding/TimeSpeedControl.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x46080
// Method: TimeSpeedControl::~TimeSpeedControl
cocos2d::CCNode *__fastcall TimeSpeedControl__dtor_TimeSpeedControl(cocos2d::CCNode *Block, char a2)
{
  cocos2d::CCNode::~CCNode(Block); /*0x4608f*/
  if ( (a2 & 1) != 0 ) /*0x46098*/
    j_j_free(Block); /*0x460a2*/
  return Block; /*0x460a7*/
}
