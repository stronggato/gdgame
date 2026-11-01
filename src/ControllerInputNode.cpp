#include <Geode/binding/ControllerInputNode.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x443f40
// Method: ControllerInputNode::~ControllerInputNode
char *__fastcall ControllerInputNode__dtor_ControllerInputNode(char *Block, char a2)
{
  sub_3DA90(Block + 352); /*0x443f56*/
  cocos2d::CCNode::~CCNode((cocos2d::CCNode *)Block); /*0x443f5e*/
  if ( (a2 & 1) != 0 ) /*0x443f67*/
    j_j_free(Block); /*0x443f71*/
  return Block; /*0x443f76*/
}
