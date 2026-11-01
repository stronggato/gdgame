#include <Geode/binding/GJMGLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x383ee0
// Method: GJMGLayer::showGround
void __fastcall GJMGLayer_showGround(__int64 a1)
{
  *(_BYTE *)(a1 + 440) = 1; /*0x383ee0*/
}
