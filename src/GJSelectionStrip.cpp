#include <Geode/binding/GJSelectionStrip.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x3a54d0
// Method: GJSelectionStrip::~GJSelectionStrip
char *__fastcall GJSelectionStrip__dtor_GJSelectionStrip(char *Block, char a2)
{
  sub_3DA90(Block + 384); /*0x3a54e6*/
  cocos2d::CCNode::~CCNode((cocos2d::CCNode *)Block); /*0x3a54ee*/
  if ( (a2 & 1) != 0 ) /*0x3a54f7*/
    j_j_free(Block); /*0x3a5501*/
  return Block; /*0x3a5506*/
}
