#include <Geode/binding/ListCell.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x3efc0
// Method: ListCell::draw
void __fastcall ListCell_draw(__int64 a1)
{
  const struct cocos2d::CCPoint *v2; // rax
  const struct cocos2d::CCPoint *v3; // rbx
  cocos2d *v4; // rax
  const struct cocos2d::CCPoint *v5; // r8
  float v6; // [rsp+30h] [rbp+8h] BYREF
  float v7; // [rsp+34h] [rbp+Ch]
  char v8; // [rsp+38h] [rbp+10h] BYREF
  char v9; // [rsp+40h] [rbp+18h] BYREF

  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v6, *(float *)(a1 + 528), *(float *)(a1 + 532)); /*0x3efde*/
  cocos2d::ccDrawColor4B( /*0x3f002*/
    (cocos2d *)*(unsigned __int8 *)(a1 + 560),
    *(_BYTE *)(a1 + 561),
    *(_BYTE *)(a1 + 562),
    *(_BYTE *)(a1 + 563));
  glLineWidth(2.0); /*0x3f010*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v8, v6 - 1.0, v7); /*0x3f02f*/
  v3 = v2; /*0x3f048*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v9, 1.0, v7); /*0x3f04b*/
  cocos2d::ccDrawLine(v4, v3, v5); /*0x3f057*/
}
