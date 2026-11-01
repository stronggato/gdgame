#include <Geode/binding/CCMoveCNode.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x35ea00
// Method: CCMoveCNode::~CCMoveCNode
char *__fastcall CCMoveCNode__dtor_CCMoveCNode(char *Block, char a2)
{
  sub_3DA90(Block + 216); /*0x35ea16*/
  cocos2d::CCObject::~CCObject((cocos2d::CCObject *)Block); /*0x35ea1e*/
  if ( (a2 & 1) != 0 ) /*0x35ea27*/
    j_j_free(Block); /*0x35ea31*/
  return Block; /*0x35ea36*/
}
