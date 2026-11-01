#include <Geode/binding/SpriteDescription.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x44930
// Method: SpriteDescription::initDescription
// Hidden C++ exception states: #wind=1
char __fastcall SpriteDescription_initDescription(__int64 a1, __int64 a2)
{
  __int64 Vec2ForKey; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 StringForKey; // rax
  float v8; // xmm1_4
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  void **v12; // rbx
  cocos2d::CCSpriteFrameCache *v13; // rax
  cocos2d::CCObject *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  void **v18; // r14
  unsigned __int64 v19; // rsi
  __int64 v20; // rbx
  _BYTE v22[8]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v23; // [rsp+28h] [rbp-48h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-38h]
  __int64 v25; // [rsp+40h] [rbp-30h]
  void *Src[2]; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v27; // [rsp+58h] [rbp-18h]
  unsigned __int64 v28; // [rsp+60h] [rbp-10h]

  Vec2ForKey = DS_Dictionary::getVec2ForKey(a2, v22, "position"); /*0x44967*/
  cocos2d::CCPoint::operator=(a1 + 56, Vec2ForKey); /*0x44974*/
  v5 = DS_Dictionary::getVec2ForKey(a2, v22, "flipped"); /*0x44988*/
  cocos2d::CCPoint::operator=(a1 + 72, v5); /*0x44995*/
  v6 = DS_Dictionary::getVec2ForKey(a2, v22, "scale"); /*0x449a9*/
  cocos2d::CCPoint::operator=(a1 + 64, v6); /*0x449b6*/
  StringForKey = DS_Dictionary::getStringForKey(a2, Src, "rotation"); /*0x449ca*/
  if ( *(_QWORD *)(StringForKey + 24) > 0xFu ) /*0x449d5*/
    StringForKey = *(_QWORD *)StringForKey; /*0x449d7*/
  v8 = atof((const char *)StringForKey); /*0x449e6*/
  *(float *)(a1 + 80) = v8; /*0x449ea*/
  sub_3C310(Src); /*0x449f3*/
  v9 = DS_Dictionary::getStringForKey(a2, Src, "zValue"); /*0x44a06*/
  if ( *(_QWORD *)(v9 + 24) > 0xFu ) /*0x44a11*/
    v9 = *(_QWORD *)v9; /*0x44a13*/
  *(_DWORD *)(a1 + 84) = atoi((const char *)v9); /*0x44a1f*/
  sub_3C310(Src); /*0x44a26*/
  v10 = DS_Dictionary::getStringForKey(a2, Src, &dword_702580); /*0x44a39*/
  if ( *(_QWORD *)(v10 + 24) > 0xFu ) /*0x44a44*/
    v10 = *(_QWORD *)v10; /*0x44a46*/
  *(_DWORD *)(a1 + 88) = atoi((const char *)v10); /*0x44a52*/
  sub_3C310(Src); /*0x44a59*/
  v11 = DS_Dictionary::getStringForKey(a2, Src, "usesCustomTag"); /*0x44a6c*/
  if ( *(_QWORD *)(v11 + 24) > 0xFu ) /*0x44a77*/
    v11 = *(_QWORD *)v11; /*0x44a79*/
  *(_BYTE *)(a1 + 92) = atoi((const char *)v11) != 0; /*0x44a8a*/
  sub_3C310(Src); /*0x44a91*/
  if ( *(_BYTE *)(a1 + 92) ) /*0x44a96*/
  {
    DS_Dictionary::getStringForKey(a2, Src, &qword_702578); /*0x44aae*/
    v12 = Src; /*0x44ab5*/
    if ( v28 > 0xF ) /*0x44abe*/
      v12 = (void **)Src[0]; /*0x44abe*/
    v13 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x44ac3*/
    v14 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v13, (const char *)v12); /*0x44acf*/
    *(_QWORD *)(a1 + 96) = v14; /*0x44ad5*/
    cocos2d::CCObject::retain(v14); /*0x44adc*/
    v23 = 0; /*0x44ae5*/
    v24 = 0; /*0x44aeb*/
    v25 = 0; /*0x44aef*/
    v18 = Src; /*0x44af3*/
    if ( v28 > 0xF ) /*0x44afc*/
      v18 = (void **)Src[0]; /*0x44afc*/
    v19 = v27; /*0x44b01*/
    v20 = 0x7FFFFFFFFFFFFFFFLL; /*0x44b05*/
    if ( v27 > 0x7FFFFFFFFFFFFFFFLL ) /*0x44b12*/
      sub_8D90(v16, v15, v17); /*0x44bae*/
    if ( v27 > 0xF ) /*0x44b1c*/
    {
      if ( (v27 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x44b3e*/
      {
        v20 = v27 | 0xF; /*0x44b40*/
        if ( (v27 | 0xF) < 0x16 ) /*0x44b4b*/
          v20 = 22; /*0x44b4b*/
      }
      *(_QWORD *)&v23 = sub_3C460(v20 + 1); /*0x44b58*/
      v24 = v19; /*0x44b5c*/
      v25 = v20; /*0x44b60*/
      memcpy((void *)v23, v18, v19 + 1); /*0x44b6e*/
    }
    else
    {
      v24 = v27; /*0x44b1e*/
      v25 = 15; /*0x44b22*/
      v23 = *(_OWORD *)v18; /*0x44b2e*/
    }
    cocos2d::CCSpriteFrame::setFrameName(*(_QWORD *)(a1 + 96), &v23); /*0x44b7b*/
    sub_3C310(Src); /*0x44b86*/
  }
  return 1; /*0x44b8d*/
}
