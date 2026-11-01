#include <Geode/binding/ScrollingLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/7] Address: 0x82700
// Method: ScrollingLayer::~ScrollingLayer
cocos2d::CCLayerColor *__fastcall ScrollingLayer__dtor_ScrollingLayer(cocos2d::CCLayerColor *Block, char a2)
{
  cocos2d::CCLayerColor::~CCLayerColor(Block); /*0x8270f*/
  if ( (a2 & 1) != 0 ) /*0x82718*/
    j_j_free(Block); /*0x82722*/
  return Block; /*0x82727*/
}

// [2/7] Address: 0x82960
// Method: ScrollingLayer::getViewRect
cocos2d::CCRect *__fastcall ScrollingLayer_getViewRect(__int64 a1, cocos2d::CCRect *a2)
{
  __int64 v4; // rcx
  float v5; // xmm6_4
  double v6; // xmm0_8
  float v7; // xmm7_4
  __int64 v8; // rcx
  double v9; // xmm0_8
  float v11; // [rsp+60h] [rbp+8h] BYREF
  float v12; // [rsp+64h] [rbp+Ch]

  cocos2d::CCNode::convertToWorldSpace(a1, &v11, &unk_903D88); /*0x82986*/
  v4 = *(_QWORD *)(a1 + 600); /*0x8298c*/
  v5 = 1.0; /*0x82993*/
  if ( v4 ) /*0x8299e*/
  {
    v6 = (*(double (__fastcall **)(__int64))(*(_QWORD *)v4 + 128LL))(v4); /*0x829a3*/
    v7 = *(float *)&v6; /*0x829a9*/
  }
  else
  {
    v7 = 1.0; /*0x829ae*/
  }
  v8 = *(_QWORD *)(a1 + 600); /*0x829b1*/
  if ( v8 ) /*0x829bb*/
  {
    v9 = (*(double (__fastcall **)(__int64))(*(_QWORD *)v8 + 144LL))(v8); /*0x829c0*/
    v5 = *(float *)&v9; /*0x829c6*/
  }
  cocos2d::CCRect::CCRect( /*0x82a32*/
    a2,
    (float)((float)(v7 * *(float *)(a1 + 544)) + v11) - (float)((float)(*(float *)(a1 + 552) * 0.5) * v7),
    (float)((float)(v5 * *(float *)(a1 + 548)) + v12) - (float)((float)(*(float *)(a1 + 556) * 0.5) * v5),
    *(float *)(a1 + 552) * v7,
    *(float *)(a1 + 556) * v5);
  return a2; /*0x82a38*/
}

// [3/7] Address: 0x82a50
// Method: ScrollingLayer::draw
__int64 __fastcall ScrollingLayer_draw(float *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF
  char v6; // [rsp+38h] [rbp+10h] BYREF
  char v7; // [rsp+40h] [rbp+18h] BYREF
  char v8; // [rsp+48h] [rbp+20h] BYREF

  cocos2d::ccDrawColor4B(0, 0x14u, 0x28u, 0xFFu); /*0x82a63*/
  glLineWidth(6.0); /*0x82a71*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v5, a1[136] - (float)(a1[138] * 0.5), a1[137] - (float)(a1[139] * 0.5)); /*0x82ab4*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v7, a1[138], a1[139]); /*0x82acf*/
  cocos2d::CCPoint::operator+(&v5, &v6, v2); /*0x82ae2*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v8, (const struct cocos2d::CCPoint *)&v5); /*0x82af2*/
  return cocos2d::ccDrawRect(v3, &v6); /*0x82b06*/
}

// [4/7] Address: 0x82b10
// Method: ScrollingLayer::visit
void __fastcall ScrollingLayer_visit(cocos2d::CCNode *a1)
{
  __int64 v2; // rax
  _BYTE v3[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v4[24]; // [rsp+30h] [rbp-18h] BYREF

  ScrollingLayer_getViewRect((__int64)a1, (cocos2d::CCRect *)v3); /*0x82b1e*/
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v4, (const struct cocos2d::CCRect *)v3); /*0x82b2d*/
  sub_6C9A0(a1, v2); /*0x82b39*/
  cocos2d::CCNode::visit(a1); /*0x82b41*/
  glDisable(0xC11u); /*0x82b4c*/
}

// [5/7] Address: 0x82b60
// Method: ScrollingLayer::ccTouchBegan
char __fastcall ScrollingLayer_ccTouchBegan(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+40h] [rbp+8h] BYREF
  char v10; // [rsp+58h] [rbp+20h] BYREF

  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 320) + 344LL))(a1 - 320) ) /*0x82b83*/
    return 0; /*0x82b83*/
  ScrollingLayer_getViewRect(a1 - 320, (cocos2d::CCRect *)v8); /*0x82b9d*/
  cocos2d::CCTouch::getLocationInView(a2, &v9); /*0x82baa*/
  v5 = cocos2d::CCDirector::sharedDirector(v4); /*0x82bb0*/
  v6 = cocos2d::CCDirector::convertToGL(v5, &v10, &v9); /*0x82bc3*/
  cocos2d::CCPoint::operator=(&v9, v6); /*0x82bd1*/
  if ( *(_DWORD *)(a1 + 268) != -1 /*0x82bea*/
    || !cocos2d::CCRect::containsPoint((cocos2d::CCRect *)v8, (const struct cocos2d::CCPoint *)&v9) )
  {
    return 0; /*0x82c3a*/
  }
  *(_DWORD *)(a1 + 268) = *(_DWORD *)(a2 + 56); /*0x82c03*/
  cocos2d::CCPoint::operator=(a1 + 240, &v9); /*0x82c09*/
  cocos2d::CCPoint::operator=(a1 + 248, a1 + 240); /*0x82c1d*/
  return 1; /*0x82c25*/
}

// [6/7] Address: 0x82c50
// Method: ScrollingLayer::ccTouchMoved
double __fastcall ScrollingLayer_ccTouchMoved(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  double result; // xmm0_8
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF
  char v14; // [rsp+40h] [rbp+8h] BYREF
  float v15; // [rsp+44h] [rbp+Ch]
  char v16; // [rsp+58h] [rbp+20h] BYREF
  float v17; // [rsp+5Ch] [rbp+24h]

  cocos2d::CCTouch::getLocationInView(a2, &v14); /*0x82c68*/
  v4 = cocos2d::CCDirector::sharedDirector(v3); /*0x82c6e*/
  v5 = cocos2d::CCDirector::convertToGL(v4, v13, &v14); /*0x82c81*/
  result = cocos2d::CCPoint::operator=(&v14, v5); /*0x82c8f*/
  if ( !cocos2d::CCPoint::equals((cocos2d::CCPoint *)&v14, (const struct cocos2d::CCPoint *)(a1 + 248)) ) /*0x82ca1*/
  {
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v13, 0.0, v15 - *(float *)(a1 + 252)); /*0x82cca*/
    v8 = v7; /*0x82cd7*/
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 272) + 200LL))(*(_QWORD *)(a1 + 272)); /*0x82cdd*/
    cocos2d::CCPoint::operator+(v9, &v16, v8); /*0x82cee*/
    v10 = *(float *)(a1 + 260); /*0x82cf4*/
    v11 = v17; /*0x82cfc*/
    if ( v10 > v17 ) /*0x82d0a*/
    {
      v17 = *(float *)(a1 + 260); /*0x82d0c*/
      v11 = v10; /*0x82d12*/
    }
    v12 = v10 + *(float *)(a1 + 264); /*0x82d15*/
    if ( v11 > v12 ) /*0x82d20*/
      v17 = v12; /*0x82d22*/
    (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 272) + 184LL))(*(_QWORD *)(a1 + 272), &v16); /*0x82d37*/
    return cocos2d::CCPoint::operator=(a1 + 248, &v14); /*0x82d49*/
  }
  return result; /*0x82d4f*/
}

// [7/7] Address: 0x82d60
// Method: ScrollingLayer::ccTouchEnded
__int64 __fastcall ScrollingLayer_ccTouchEnded(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a2 + 56); /*0x82d60*/
  if ( *(_DWORD *)(a1 + 268) == (_DWORD)result ) /*0x82d69*/
    *(_DWORD *)(a1 + 268) = -1; /*0x82d6b*/
  return result; /*0x82d75*/
}
