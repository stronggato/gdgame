#include <Geode/binding/ColorActionSprite.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x35f850
// Method: ColorActionSprite::init
bool __fastcall ColorActionSprite_init(__int64 a1)
{
  bool result; // al

  result = cocos2d::CCNode::init((cocos2d::CCNode *)a1); /*0x35f859*/
  if ( result ) /*0x35f861*/
  {
    *(_WORD *)(a1 + 327) = -1; /*0x35f870*/
    *(_BYTE *)(a1 + 329) = -1; /*0x35f87e*/
    *(_WORD *)(a1 + 324) = -1; /*0x35f88b*/
    *(_BYTE *)(a1 + 326) = -1; /*0x35f899*/
    *(_DWORD *)(a1 + 320) = 1132396544; /*0x35f8a1*/
    return 1; /*0x35f892*/
  }
  return result; /*0x35f863*/
}
