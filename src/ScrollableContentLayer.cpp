#include <Geode/binding/ScrollableContentLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x7fa80
// Method: ScrollableContentLayer::~ScrollableContentLayer
char *__fastcall ScrollableContentLayer__dtor_ScrollableContentLayer(char *Block, char a2)
{
  sub_82160(Block + 624); /*0x7fa96*/
  sub_685C0(Block + 600); /*0x7faa2*/
  sub_821C0(Block + 544); /*0x7faae*/
  sub_821C0(Block + 528); /*0x7faba*/
  cocos2d::CCTouchClipper::~CCTouchClipper((cocos2d::CCTouchClipper *)(Block + 408)); /*0x7fac6*/
  cocos2d::CCLayer::~CCLayer((cocos2d::CCLayer *)Block); /*0x7facf*/
  if ( (a2 & 1) != 0 ) /*0x7fad8*/
    j_j_free(Block); /*0x7fae2*/
  return Block; /*0x7fae7*/
}

// [2/5] Address: 0x80cc0
// Method: ScrollableContentLayer::visit
void __fastcall ScrollableContentLayer_visit(cocos2d::CCNode *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  _BYTE v4[24]; // [rsp+30h] [rbp-18h] BYREF

  sub_80BF0(a1, v4); /*0x80cd2*/
  glEnable(0xC11u); /*0x80cdf*/
  v3 = cocos2d::CCEGLView::sharedOpenGLView(v2); /*0x80ce5*/
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 104LL))(v3); /*0x80d0a*/
  cocos2d::CCNode::visit(a1); /*0x80d10*/
  glDisable(0xC11u); /*0x80d25*/
}

// [3/5] Address: 0x80d30
// Method: ScrollableContentLayer::touchInsideClip
bool __fastcall ScrollableContentLayer_touchInsideClip(__int64 a1, const struct cocos2d::CCPoint *a2)
{
  cocos2d::CCRect *v3; // rax
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = (cocos2d::CCRect *)sub_80BF0(a1 - 408, v5); /*0x80d45*/
  return cocos2d::CCRect::containsPoint(v3, a2); /*0x80d56*/
}

// [4/5] Address: 0x80d60
// Method: ScrollableContentLayer::scrollWheel
char __fastcall ScrollableContentLayer_scrollWheel(__int64 a1, float a2)
{
  cocos2d::CCNode *v2; // rsi
  __int64 v4; // rcx
  __int64 v5; // rbx
  float v6; // xmm0_4
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  _BYTE v12[8]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v13[24]; // [rsp+38h] [rbp-30h] BYREF
  char v14; // [rsp+70h] [rbp+8h] BYREF
  char v15; // [rsp+88h] [rbp+20h] BYREF

  v2 = (cocos2d::CCNode *)(a1 - 352); /*0x80d6f*/
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 352) + 344LL))(a1 - 352) ) /*0x80d87*/
  {
    v5 = (*(__int64 (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v2 + 504LL))(v2); /*0x80da1*/
    if ( v5 ) /*0x80da7*/
    {
      while ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 344LL))(v5) ) /*0x80dc1*/
      {
        v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 504LL))(v5); /*0x80dd6*/
        if ( !v5 ) /*0x80ddc*/
          goto LABEL_5; /*0x80ddc*/
      }
    }
    else
    {
LABEL_5:
      if ( *(_BYTE *)(a1 + 216) ) /*0x80dde*/
        v6 = *(float *)(a1 + 72); /*0x80de7*/
      else
        v6 = *(float *)(a1 + 76); /*0x80dee*/
      if ( v6 < *(float *)(a1 + 80) ) /*0x80df7*/
      {
        v7 = cocos2d::CCEGLView::sharedOpenGLView(v4); /*0x80dfd*/
        if ( v7 ) /*0x80e06*/
        {
          v8 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v7 + 176LL))(v7, v12); /*0x80e21*/
          v10 = cocos2d::CCDirector::sharedDirector(v9); /*0x80e24*/
          cocos2d::CCDirector::convertToGL(v10, &v14, v8); /*0x80e35*/
          cocos2d::CCNode::convertToNodeSpace(v2, &v15, &v14); /*0x80e4b*/
          cocos2d::CCRect::CCRect((cocos2d::CCRect *)v13, 0.0, 0.0, *(float *)(a1 + 72), *(float *)(a1 + 76)); /*0x80e6c*/
          if ( cocos2d::CCRect::containsPoint((cocos2d::CCRect *)v13, (const struct cocos2d::CCPoint *)&v15) ) /*0x80e7f*/
          {
            cocos2d::CCNode::unscheduleUpdate(v2); /*0x80e8c*/
            *(_DWORD *)(a1 + 120) = 0; /*0x80e96*/
            *(float *)(a1 + 124) = (float)(a2 + a2) + *(float *)(a1 + 124); /*0x80ea5*/
            cocos2d::CCNode::scheduleUpdate(v2); /*0x80eaa*/
            return 1; /*0x80eb2*/
          }
        }
      }
    }
  }
  return 0; /*0x80eb6*/
}

// [5/5] Address: 0x80ed0
// Method: ScrollableContentLayer::update
void __fastcall ScrollableContentLayer_update(__int64 a1, float a2)
{
  float v3; // xmm2_4
  float v4; // xmm3_4
  float v5; // xmm7_4
  float v6; // xmm2_4
  float v7; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm8_4
  float *v10; // rdi
  float v11; // xmm9_4
  float *v12; // rsi
  float v13; // xmm0_4
  float v14; // xmm9_4
  float v15; // xmm0_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  bool v18; // al

  if ( *(_BYTE *)(a1 + 568) ) /*0x80ed6*/
    v3 = *(float *)(a1 + 424); /*0x80efa*/
  else
    v3 = *(float *)(a1 + 428); /*0x80f04*/
  v4 = *(float *)(a1 + 476); /*0x80f17*/
  v5 = fmaxf(0.0, *(float *)(a1 + 432) - v3); /*0x80f2b*/
  if ( v4 == 0.0 ) /*0x80f31*/
    goto LABEL_12; /*0x80f31*/
  v6 = (float)(v4 * a2) * 15.0; /*0x80f42*/
  v7 = v4 - v6; /*0x80f4a*/
  *(float *)(a1 + 476) = v7; /*0x80f51*/
  if ( fabs(v7) < 0.1 ) /*0x80f63*/
  {
    v6 = v6 + v7; /*0x80f65*/
    *(_DWORD *)(a1 + 476) = 0; /*0x80f69*/
  }
  v8 = v6 + *(float *)(a1 + 436); /*0x80f6f*/
  *(float *)(a1 + 436) = v8; /*0x80f7a*/
  if ( v8 < 0.0 ) /*0x80f82*/
  {
    *(_DWORD *)(a1 + 436) = 0; /*0x80f84*/
LABEL_11:
    *(_DWORD *)(a1 + 476) = 0; /*0x80f99*/
    goto LABEL_12; /*0x80f99*/
  }
  if ( v8 > v5 ) /*0x80f8f*/
  {
    *(float *)(a1 + 436) = v5; /*0x80f91*/
    goto LABEL_11; /*0x80f91*/
  }
LABEL_12:
  v9 = *(float *)(a1 + 436); /*0x80f9f*/
  if ( v9 < 0.0 ) /*0x80fbf*/
    goto LABEL_18; /*0x80fbf*/
  if ( v9 <= v5 ) /*0x80fc5*/
  {
    v10 = (float *)(a1 + 472); /*0x80fc7*/
    v11 = *(float *)(a1 + 472); /*0x80fce*/
    v12 = (float *)(a1 + 472); /*0x80fd3*/
    if ( v11 != 0.0 ) /*0x80fdc*/
    {
      *(float *)(a1 + 436) = (float)(v11 * a2) + v9; /*0x80ffa*/
      v13 = powf(0.94999999, a2 * 60.0) * v11; /*0x81017*/
      *v10 = v13; /*0x8101c*/
      if ( fabs(v13) < 2.0 ) /*0x8102a*/
        *v10 = 0.0; /*0x8102c*/
    }
    goto LABEL_22; /*0x8102e*/
  }
  if ( v9 >= 0.0 ) /*0x81034*/
    v14 = v5; /*0x8103c*/
  else
LABEL_18:
    v14 = 0.0; /*0x81036*/
  v15 = expf((float)-a2 * 12.0); /*0x81052*/
  v12 = (float *)(a1 + 472); /*0x8105f*/
  *(_DWORD *)(a1 + 472) = 0; /*0x8106a*/
  v16 = (float)((float)(1.0 - v15) * (float)(v14 - v9)) + v9; /*0x81081*/
  *(float *)(a1 + 436) = v16; /*0x81086*/
  if ( fabs(v16 - v14) < 0.5 ) /*0x8109d*/
    *(float *)(a1 + 436) = v14; /*0x8109f*/
LABEL_22:
  sub_7FFD0(a1); /*0x810a8*/
  v17 = *(float *)(a1 + 436); /*0x810b0*/
  v18 = v17 < 0.0 || v17 > v5; /*0x810df*/
  if ( *(float *)(a1 + 476) == 0.0 && *v12 == 0.0 && !v18 ) /*0x81102*/
    cocos2d::CCNode::unscheduleUpdate((cocos2d::CCNode *)a1); /*0x81107*/
}
