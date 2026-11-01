#include <Geode/binding/FriendRowEdges.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x20ff60
// Method: FriendRowEdges::draw
void __fastcall FriendRowEdges_draw(__int64 a1)
{
  const struct cocos2d::CCPoint *v2; // rax
  const struct cocos2d::CCPoint *v3; // rbx
  cocos2d *v4; // rax
  const struct cocos2d::CCPoint *v5; // r8
  const struct cocos2d::CCPoint *v6; // rax
  const struct cocos2d::CCPoint *v7; // rbx
  cocos2d *v8; // rax
  const struct cocos2d::CCPoint *v9; // r8
  char v10; // [rsp+30h] [rbp+8h] BYREF
  char v11; // [rsp+38h] [rbp+10h] BYREF

  cocos2d::ccDrawColor4B(0, 0, 0, 0x4Bu); /*0x20ff77*/
  glLineWidth(2.0); /*0x20ff85*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v10, *(float *)(a1 + 320), 20.0); /*0x20ffa0*/
  v3 = v2; /*0x20ffb6*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v11, 0.0, 20.0); /*0x20ffb9*/
  cocos2d::ccDrawLine(v4, v3, v5); /*0x20ffc5*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v10, *(float *)(a1 + 320), -20.0); /*0x20ffe0*/
  v7 = v6; /*0x20fff6*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v11, 0.0, -20.0); /*0x20fff9*/
  cocos2d::ccDrawLine(v8, v7, v9); /*0x210005*/
}
