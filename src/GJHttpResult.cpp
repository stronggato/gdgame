#include <Geode/binding/GJHttpResult.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x215e30
// Method: GJHttpResult::~GJHttpResult
cocos2d::CCNode *__fastcall GJHttpResult__dtor_GJHttpResult(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &GJHttpResult::`vftable'; /*0x215e44*/
  sub_3C310((char *)Block + 360); /*0x215e50*/
  sub_3C310((char *)Block + 328); /*0x215e5c*/
  cocos2d::CCNode::~CCNode(Block); /*0x215e64*/
  if ( (a2 & 1) != 0 ) /*0x215e6d*/
    j_j_free(Block); /*0x215e77*/
  return Block; /*0x215e7c*/
}
