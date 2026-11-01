#include <Geode/binding/GameCell.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x3f4f0
// Method: GameCell::draw
void __fastcall GameCell_draw(__int64 a1)
{
  const struct cocos2d::CCPoint *v1; // rax
  const struct cocos2d::CCPoint *v2; // rbx
  cocos2d *v3; // rax
  const struct cocos2d::CCPoint *v4; // r8
  float v5; // [rsp+30h] [rbp+8h] BYREF
  float v6; // [rsp+34h] [rbp+Ch]
  char v7; // [rsp+38h] [rbp+10h] BYREF
  char v8; // [rsp+40h] [rbp+18h] BYREF

  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v5, *(float *)(a1 + 528), *(float *)(a1 + 532)); /*0x3f50b*/
  cocos2d::ccDrawColor4B(0, 0, 0, 0x4Bu); /*0x3f51b*/
  glLineWidth(2.0); /*0x3f529*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v7, v5 - 1.0, v6); /*0x3f548*/
  v2 = v1; /*0x3f561*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v8, 1.0, v6); /*0x3f564*/
  cocos2d::ccDrawLine(v3, v2, v4); /*0x3f570*/
}
