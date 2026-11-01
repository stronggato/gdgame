#include <Geode/binding/CCAnimatedSprite.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/10] Address: 0x42950
// Method: CCAnimatedSprite::CCAnimatedSprite
__int64 __fastcall CCAnimatedSprite_CCAnimatedSprite(__int64 a1)
{
  cocos2d::CCSprite::CCSprite((cocos2d::CCSprite *)a1); /*0x42959*/
  *(_QWORD *)a1 = &CCAnimatedSprite::`vftable'; /*0x42969*/
  *(_QWORD *)(a1 + 320) = &CCAnimatedSprite::`vftable'; /*0x42973*/
  *(_QWORD *)(a1 + 344) = &CCAnimatedSprite::`vftable'; /*0x42981*/
  *(_OWORD *)(a1 + 600) = 0; /*0x4298a*/
  *(_QWORD *)(a1 + 616) = 0; /*0x42991*/
  *(_QWORD *)(a1 + 624) = 15; /*0x42998*/
  *(_BYTE *)(a1 + 600) = 0; /*0x429a3*/
  *(_OWORD *)(a1 + 632) = 0; /*0x429a9*/
  *(_QWORD *)(a1 + 648) = 0; /*0x429b0*/
  *(_QWORD *)(a1 + 656) = 15; /*0x429b7*/
  *(_BYTE *)(a1 + 632) = 0; /*0x429c2*/
  *(_QWORD *)(a1 + 664) = 0; /*0x429c8*/
  *(_QWORD *)(a1 + 672) = 0; /*0x429cf*/
  *(_QWORD *)(a1 + 680) = 0; /*0x429d6*/
  *(_QWORD *)(a1 + 688) = 0; /*0x429dd*/
  *(_DWORD *)(a1 + 696) = 0; /*0x429e4*/
  *(_OWORD *)(a1 + 704) = 0; /*0x429ea*/
  *(_QWORD *)(a1 + 720) = 0; /*0x429f1*/
  *(_QWORD *)(a1 + 728) = 15; /*0x429f8*/
  *(_BYTE *)(a1 + 704) = 0; /*0x42a03*/
  *(_QWORD *)(a1 + 736) = 0; /*0x42a09*/
  return a1; /*0x42a13*/
}

// [2/10] Address: 0x42a60
// Method: CCAnimatedSprite::tweenToAnimation
// Hidden C++ exception states: #wind=3
bool __fastcall CCAnimatedSprite_tweenToAnimation(
        _BYTE *a1,
        __int64 a2,
        struct cocos2d::CCTexture2D *a3,
        unsigned __int8 a4)
{
  struct cocos2d::CCTexture2D *v5; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  cocos2d::CCString *v10; // rax
  const char *CString; // rax
  __int64 v12; // r8
  void *v13; // rcx
  __m128i v14; // xmm6
  __int64 v15; // rdx
  __int64 v16; // rcx
  void **v17; // rbx
  cocos2d::CCTextureCache *v18; // rax
  void *v19; // r8
  const struct cocos2d::CCRect *v20; // rax
  bool result; // al
  void *Block[2]; // [rsp+30h] [rbp-78h] BYREF
  __m128i si128; // [rsp+40h] [rbp-68h]
  void *Src[2]; // [rsp+50h] [rbp-58h] BYREF
  __m128i v25; // [rsp+60h] [rbp-48h]

  v5 = a3; /*0x42a8a*/
  if ( !a3 ) /*0x42a96*/
  {
    v8 = ObjectManager_instance(); /*0x42a9c*/
    v9 = sub_7C320(v8, a2); /*0x42aa7*/
    HIDWORD(Block[1]) = 0; /*0x42ab2*/
    si128 = _mm_load_si128((const __m128i *)&xmmword_830F80); /*0x42abf*/
    strcpy((char *)Block, "spriteSheet"); /*0x42acd*/
    v10 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(v9, Block); /*0x42af3*/
    CString = cocos2d::CCString::getCString(v10); /*0x42afc*/
    *(_OWORD *)Src = 0; /*0x42b05*/
    v25 = 0; /*0x42b0d*/
    v12 = -1; /*0x42b13*/
    do /*0x42b23*/
      ++v12; /*0x42b20*/
    while ( CString[v12] ); /*0x42b23*/
    sub_3C230(Src); /*0x42b32*/
    if ( si128.m128i_i64[1] > 0xFuLL ) /*0x42b41*/
    {
      v13 = Block[0]; /*0x42b46*/
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x42b55*/
      {
        v13 = (void *)*((_QWORD *)Block[0] - 1); /*0x42b5b*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v13 - 8) > 0x1F ) /*0x42b6a*/
          invoke_watson(0, 0, 0, 0, 0); /*0x42b7f*/
      }
      j_j_free(v13); /*0x42b86*/
    }
    v14 = _mm_load_si128((const __m128i *)&Size); /*0x42b8b*/
    si128 = v14; /*0x42b93*/
    LOBYTE(Block[0]) = 0; /*0x42b99*/
    sub_43D80(Src, ".png", 4u); /*0x42bb0*/
    v17 = Src; /*0x42bb5*/
    if ( v25.m128i_i64[1] > 0xFuLL ) /*0x42bc0*/
      v17 = (void **)Src[0]; /*0x42bc0*/
    v18 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v16, v15); /*0x42bc6*/
    v5 = cocos2d::CCTextureCache::addImage(v18, (const char *)v17, 0); /*0x42bdb*/
    if ( v25.m128i_i64[1] > 0xFuLL ) /*0x42be7*/
    {
      v19 = Src[0]; /*0x42bec*/
      if ( (unsigned __int64)(v25.m128i_i64[1] + 1) >= 0x1000 ) /*0x42bfb*/
      {
        v19 = (void *)*((_QWORD *)Src[0] - 1); /*0x42c01*/
        if ( (unsigned __int64)((char *)Src[0] - (char *)v19 - 8) > 0x1F ) /*0x42c10*/
          invoke_watson(0, 0, 0, 0, 0); /*0x42c25*/
      }
      j_j_free(v19); /*0x42c2f*/
      v14 = _mm_load_si128((const __m128i *)&Size); /*0x42c34*/
    }
    v25 = v14; /*0x42c3c*/
    LOBYTE(Src[0]) = 0; /*0x42c42*/
  }
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)Block, 0.0, 0.0, 0.0, 0.0); /*0x42c5b*/
  result = cocos2d::CCSprite::initWithTexture((cocos2d::CCSprite *)a1, v5, v20); /*0x42c6a*/
  if ( result ) /*0x42c72*/
  {
    a1[559] = 1; /*0x42c74*/
    sub_3F5A0(a1 + 600, &byte_6E86E0, 0); /*0x42c8c*/
    CCAnimatedSprite_loadType(a1, a2, v5, a4); /*0x42c9e*/
    return 1; /*0x42ca3*/
  }
  return result; /*0x42ca5*/
}

// [4/10] Address: 0x437e0
// Method: CCAnimatedSprite::runAnimation
// Hidden C++ exception states: #wind=1
double __fastcall CCAnimatedSprite_runAnimation(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  _BYTE v6[32]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v7; // [rsp+48h] [rbp-20h]

  v7 = a2; /*0x437ff*/
  v4 = sub_3E4F0(v6, a2); /*0x43809*/
  SpriteAnimationManager_runAnimation(*(_QWORD *)(a1 + 664), v4); /*0x43818*/
  return sub_3C310(a2); /*0x43826*/
}

// [5/10] Address: 0x43b40
// Method: CCAnimatedSprite::tweenToAnimationFinished
__int64 __fastcall CCAnimatedSprite_tweenToAnimationFinished(__int64 a1)
{
  __int64 v2; // rax
  _BYTE v4[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = sub_3E4F0(v4, a1 + 632); /*0x43b59*/
  CCAnimatedSprite_runAnimation(a1, v2); /*0x43b64*/
  return sub_3F5A0((void *)(a1 + 632), &byte_6E86E0, 0); /*0x43b7a*/
}

// [6/10] Address: 0x43b90
// Method: CCAnimatedSprite::animationFinishedO
__int64 __fastcall CCAnimatedSprite_animationFinishedO(__int64 *a1, cocos2d::CCString *a2)
{
  __int64 v2; // rbx
  const char *CString; // rax

  v2 = *a1; /*0x43b9a*/
  CString = cocos2d::CCString::getCString(a2); /*0x43ba3*/
  return (*(__int64 (__fastcall **)(__int64 *, const char *))(v2 + 1088))(a1, CString); /*0x43bb6*/
}

// [7/10] Address: 0x43bd0
// Method: CCAnimatedSprite::animationFinished
__int64 __fastcall CCAnimatedSprite_animationFinished(__int64 a1)
{
  __int64 (__fastcall ***v1)(_QWORD); // rcx
  __int64 result; // rax

  v1 = *(__int64 (__fastcall ****)(_QWORD))(a1 + 736); /*0x43bd0*/
  if ( v1 ) /*0x43bda*/
    return (**v1)(v1); /*0x43bdf*/
  return result; /*0x43be2*/
}

// [8/10] Address: 0x43bf0
// Method: CCAnimatedSprite::setOpacity
void __fastcall CCAnimatedSprite_setOpacity(cocos2d::CCSprite *a1, unsigned __int8 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  v4 = *((_QWORD *)a1 + 45); /*0x43c00*/
  if ( v4 ) /*0x43c0a*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v4 + 320) + 40LL))(v4 + 320); /*0x43c16*/
  v5 = *((_QWORD *)a1 + 46); /*0x43c19*/
  if ( v5 ) /*0x43c23*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v5 + 320) + 40LL))(v5 + 320, a2); /*0x43c33*/
  cocos2d::CCSprite::setOpacity(a1, a2); /*0x43c47*/
}

// [9/10] Address: 0x43c50
// Method: CCAnimatedSprite::setColor
void __fastcall CCAnimatedSprite_setColor(cocos2d::CCSprite *a1, __int16 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int16 v6; // [rsp+30h] [rbp+8h] BYREF
  char v7; // [rsp+32h] [rbp+Ah]

  v4 = *((_QWORD *)a1 + 45); /*0x43c60*/
  if ( v4 ) /*0x43c6a*/
    (**(void (__fastcall ***)(__int64))(v4 + 320))(v4 + 320); /*0x43c76*/
  v5 = *((_QWORD *)a1 + 46); /*0x43c78*/
  if ( v5 ) /*0x43c82*/
  {
    v6 = *a2; /*0x43c8c*/
    v7 = *((_BYTE *)a2 + 2); /*0x43c95*/
    CCPartAnimSprite_setColor(v5, &v6); /*0x43c99*/
  }
  cocos2d::CCSprite::setColor(a1, (const struct cocos2d::_ccColor3B *)a2); /*0x43cae*/
}

// [10/10] Address: 0x43cc0
// Method: CCAnimatedSprite::~CCAnimatedSprite
void __fastcall CCAnimatedSprite__dtor_CCAnimatedSprite(cocos2d::CCSprite *a1)
{
  cocos2d::CCNode *v2; // rcx
  cocos2d::CCNode *v3; // rcx
  cocos2d::CCDictionary **v4; // rbx

  *(_QWORD *)a1 = &CCAnimatedSprite::`vftable'; /*0x43cd4*/
  *((_QWORD *)a1 + 40) = &CCAnimatedSprite::`vftable'; /*0x43cde*/
  *((_QWORD *)a1 + 43) = &CCAnimatedSprite::`vftable'; /*0x43cec*/
  v2 = (cocos2d::CCNode *)*((_QWORD *)a1 + 86); /*0x43cf3*/
  if ( v2 ) /*0x43cfd*/
    cocos2d::CCNode::stopAllActions(v2); /*0x43cff*/
  v3 = (cocos2d::CCNode *)*((_QWORD *)a1 + 85); /*0x43d05*/
  if ( v3 ) /*0x43d0f*/
    cocos2d::CCNode::stopAllActions(v3); /*0x43d11*/
  v4 = (cocos2d::CCDictionary **)*((_QWORD *)a1 + 83); /*0x43d17*/
  cocos2d::CCDictionary::removeAllObjects(v4[50]); /*0x43d25*/
  cocos2d::CCObject::release((cocos2d::CCObject *)v4); /*0x43d2e*/
  *((_QWORD *)a1 + 83) = 0; /*0x43d34*/
  sub_3C310((char *)a1 + 704); /*0x43d46*/
  sub_3C310((char *)a1 + 632); /*0x43d52*/
  sub_3C310((char *)a1 + 600); /*0x43d5e*/
  cocos2d::CCSprite::~CCSprite(a1); /*0x43d70*/
}
