#include <Geode/binding/FontPreviewCell.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x589010
// Method: FontPreviewCell::draw
void __fastcall FontPreviewCell_draw(__int64 a1)
{
  __m128 v2; // xmm4
  __m128 v3; // xmm4
  __m128 v4; // xmm4
  __m128 v5; // xmm4
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __m128 v9; // [rsp+20h] [rbp-18h] BYREF
  float v10; // [rsp+40h] [rbp+8h] BYREF
  float v11; // [rsp+44h] [rbp+Ch]
  char v12; // [rsp+48h] [rbp+10h] BYREF
  char v13; // [rsp+50h] [rbp+18h] BYREF

  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v10, *(float *)(a1 + 528), *(float *)(a1 + 532)); /*0x589032*/
  v2 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int8)*(_DWORD *)(a1 + 560)); /*0x589054*/
  v2.m128_f32[0] = v2.m128_f32[0] / 255.0; /*0x58905d*/
  v3 = _mm_shuffle_ps(v2, v2, 225); /*0x589067*/
  v3.m128_f32[0] = (float)(unsigned __int8)BYTE1(*(_DWORD *)(a1 + 560)) / 255.0; /*0x58907f*/
  v4 = _mm_shuffle_ps(v3, v3, 198); /*0x58908d*/
  v4.m128_f32[0] = (float)(unsigned __int8)BYTE2(*(_DWORD *)(a1 + 560)) / 255.0; /*0x58909f*/
  v5 = _mm_shuffle_ps(v4, v4, 39); /*0x5890a9*/
  v5.m128_f32[0] = (float)HIBYTE(*(_DWORD *)(a1 + 560)) / 255.0; /*0x5890ad*/
  v9 = _mm_shuffle_ps(v5, v5, 57); /*0x5890ba*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v12, v10, v11); /*0x5890c0*/
  v7 = v6; /*0x5890cd*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v13, (const struct cocos2d::CCPoint *)&unk_905648); /*0x5890d5*/
  cocos2d::ccDrawSolidRect(v8, v7, &v9); /*0x5890e6*/
  cocos2d::CCNode::draw((cocos2d::CCNode *)a1); /*0x5890ef*/
}
