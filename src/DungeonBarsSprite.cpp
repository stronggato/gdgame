#include <Geode/binding/DungeonBarsSprite.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x5802c0
// Method: DungeonBarsSprite::init
bool __fastcall DungeonBarsSprite_init(cocos2d::CCNode *a1)
{
  bool result; // al
  struct cocos2d::CCSprite *v3; // rax
  __int64 v4; // rcx
  __int64 *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  char v8; // [rsp+38h] [rbp+10h] BYREF

  result = cocos2d::CCNode::init(a1); /*0x5802c9*/
  if ( result ) /*0x5802d1*/
  {
    v3 = cocos2d::CCSprite::createWithSpriteFrameName("dungeon_bars_001.png"); /*0x5802e5*/
    v4 = *(_QWORD *)a1; /*0x5802eb*/
    *((_QWORD *)a1 + 40) = v3; /*0x5802f1*/
    (*(void (__fastcall **)(cocos2d::CCNode *, struct cocos2d::CCSprite *))(v4 + 464))(a1, v3); /*0x580302*/
    v5 = (__int64 *)*((_QWORD *)a1 + 40); /*0x580305*/
    v6 = *v5; /*0x58031c*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v8, 0.0, -2.0); /*0x58031f*/
    (*(void (__fastcall **)(__int64 *, __int64))(v6 + 184))(v5, v7); /*0x58032b*/
    return 1; /*0x580336*/
  }
  return result; /*0x5802d3*/
}

// [2/2] Address: 0x580340
// Method: DungeonBarsSprite::visit
void __fastcall DungeonBarsSprite_visit(cocos2d::CCNode *a1)
{
  float *v2; // rbx
  double v3; // xmm0_8
  float v4; // xmm7_4
  double v5; // xmm0_8
  float v6; // xmm6_4
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  _BYTE v12[8]; // [rsp+30h] [rbp-58h] BYREF
  float v13; // [rsp+38h] [rbp-50h]
  float v14; // [rsp+3Ch] [rbp-4Ch]
  _BYTE v15[8]; // [rsp+40h] [rbp-48h] BYREF
  float v16; // [rsp+90h] [rbp+8h] BYREF
  float v17; // [rsp+94h] [rbp+Ch]
  int v18; // [rsp+98h] [rbp+10h] BYREF
  char v19; // [rsp+A0h] [rbp+18h] BYREF

  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v16, 140.0, 125.0); /*0x580373*/
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v12, (float)-v16 * 0.5, (float)-v17 * 0.5, v16, v17); /*0x5803bd*/
  v2 = (float *)(*(__int64 (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)a1 + 296LL))(a1); /*0x5803d2*/
  v3 = (*(double (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)a1 + 144LL))(a1); /*0x5803df*/
  v4 = *(float *)&v3 * v14; /*0x5803e7*/
  v5 = (*(double (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)a1 + 128LL))(a1); /*0x5803f7*/
  v6 = *(float *)&v5 * v13; /*0x5803ff*/
  v7 = (*(__int64 (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)a1 + 296LL))(a1); /*0x580408*/
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v15, (float)-v13 * *v2, (float)-v14 * *(float *)(v7 + 4), v6, v4); /*0x580439*/
  glEnable(0xC11u); /*0x580444*/
  v8 = (*(__int64 (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)a1 + 200LL))(a1); /*0x580450*/
  cocos2d::CCPoint::operator+(v8, &v19, v12); /*0x580466*/
  v9 = (*(__int64 (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)a1 + 504LL))(a1); /*0x580472*/
  cocos2d::CCNode::convertToWorldSpace(v9, &v18, &v19); /*0x58048b*/
  v11 = cocos2d::CCEGLView::sharedOpenGLView(v10); /*0x580491*/
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 104LL))(v11); /*0x5804c1*/
  cocos2d::CCNode::visit(a1); /*0x5804c7*/
  glDisable(0xC11u); /*0x5804d2*/
}
