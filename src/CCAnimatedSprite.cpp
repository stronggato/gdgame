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

// Address: 0x42cd0
// Method: CCAnimatedSprite::loadType
// Hidden C++ exception states: #wind=7
double __fastcall CCAnimatedSprite_loadType(_QWORD *a1, __int64 a2, struct cocos2d::CCTexture2D *a3, char a4)
{
  __int64 v6; // r14
  __int64 v7; // r8
  double result; // xmm0_8
  void **v9; // rdx
  char *v10; // rdi
  const void *v11; // rcx
  size_t v12; // r12
  size_t v13; // r8
  size_t v14; // r13
  __int64 v15; // rdx
  int v16; // ebx
  char *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  cocos2d::CCDictionary **v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r12
  cocos2d::CCString *v25; // rbx
  const char *CString; // rax
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  const char *p_Src; // rbx
  cocos2d::CCTextureCache *v31; // rax
  void *v32; // r8
  cocos2d::CCString *v33; // rdi
  void *v34; // r8
  cocos2d::CCString *v35; // rbx
  void *v36; // r8
  bool v37; // di
  bool v38; // r13
  cocos2d::CCString *v39; // rax
  char *v40; // rax
  size_t v41; // r8
  void *v42; // rcx
  const struct cocos2d::CCRect *v43; // rax
  struct cocos2d::CCSprite *v44; // rax
  __int64 v45; // rdi
  float v46; // xmm6_4
  float *v47; // rax
  __int64 v48; // rbx
  __int64 v49; // rax
  cocos2d::CCString *v50; // rax
  const char *v51; // rbx
  void *v52; // r8
  char *v53; // rdi
  __int64 v54; // rdi
  float v55; // xmm6_4
  float *v56; // rax
  __int64 v57; // rbx
  __int64 v58; // rax
  __int64 v59; // r8
  char *v60; // rbx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rcx
  _QWORD *v65; // rdx
  void *Buf2[2]; // [rsp+40h] [rbp-69h] BYREF
  size_t Size; // [rsp+50h] [rbp-59h]
  unsigned __int64 v70; // [rsp+58h] [rbp-51h]
  void *Block[2]; // [rsp+60h] [rbp-49h] BYREF
  __int64 v72; // [rsp+70h] [rbp-39h]
  unsigned __int64 v73; // [rsp+78h] [rbp-31h]
  __int128 Src; // [rsp+80h] [rbp-29h] BYREF
  __int64 v75; // [rsp+90h] [rbp-19h]
  unsigned __int64 v76; // [rsp+98h] [rbp-11h]

  *(_OWORD *)Buf2 = 0;
  Size = 0;
  v70 = 0;
  v6 = -1;
  v7 = -1;
  do
    ++v7;
  while ( *(_BYTE *)(a2 + v7) );
  result = sub_3C230(Buf2);
  v9 = Buf2;
  v10 = (char *)Buf2[0];
  if ( v70 > 0xF )
    v9 = (void **)Buf2[0];
  v11 = a1 + 75;
  if ( a1[78] > 0xFu )
    v11 = (const void *)a1[75];
  v12 = a1[77];
  v13 = v12;
  v14 = Size;
  if ( Size < v12 )
    v13 = Size;
  v16 = memcmp(v11, v9, v13);
  if ( !v16 )
  {
    if ( v12 >= v14 )
      v16 = v12 > v14;
    else
      v16 = -1;
  }
  if ( v70 > 0xF )
  {
    v17 = v10;
    if ( v70 + 1 >= 0x1000 )
    {
      v10 = (char *)*((_QWORD *)v10 - 1);
      if ( (unsigned __int64)(v17 - v10 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v10);
  }
  if ( v16 )
  {
    v18 = a1[86];
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 728LL))(v18);
    v19 = a1[85];
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 728LL))(v19);
    v20 = (cocos2d::CCDictionary **)a1[83];
    if ( v20 )
    {
      cocos2d::CCDictionary::removeAllObjects(v20[50]);
      cocos2d::CCObject::release((cocos2d::CCObject *)v20);
    }
    v21 = a1[85];
    if ( v21 )
    {
      LOBYTE(v15) = 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 520LL))(v21, v15);
    }
    v22 = a1[86];
    if ( v22 )
    {
      LOBYTE(v15) = 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 520LL))(v22, v15);
    }
    *((_DWORD *)a1 + 174) = 0;
    a1[83] = 0;
    a1[85] = 0;
    a1[86] = 0;
    a1[84] = 0;
    v23 = ObjectManager_instance();
    v24 = sub_7C320(v23, a2);
    if ( !a3 )
    {
      Size = 11;
      v70 = 15;
      Buf2[0] = (void *)0x6853657469727073LL;
      Buf2[1] = "Toggle Particle Icons" + 5;
      v25 = (cocos2d::CCString *)cocos2d::CCDictionary::objectForKey(v24, Buf2);
      sub_3C310(Buf2);
      CString = cocos2d::CCString::getCString(v25);
      Src = 0;
      v75 = 0;
      v76 = 0;
      v27 = -1;
      do
        ++v27;
      while ( CString[v27] );
      sub_3C230(&Src);
      sub_43D80(&Src, ".png", 4u);
      p_Src = (const char *)&Src;
      if ( v76 > 0xF )
        p_Src = (const char *)Src;
      v31 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v29, v28);
      a3 = cocos2d::CCTextureCache::addImage(v31, p_Src, 0);
      if ( v76 > 0xF )
      {
        v32 = (void *)Src;
        if ( v76 + 1 >= 0x1000 )
        {
          v32 = *(void **)(Src - 8);
          if ( (unsigned __int64)(Src - (_QWORD)v32 - 8) > 0x1F )
            invoke_watson(0, 0, 0, 0, 0);
        }
        j_j_free(v32);
      }
      v75 = 0;
      v76 = 15;
      LOBYTE(Src) = 0;
    }
    *(_OWORD *)Block = 0;
    v72 = 6;
    v73 = 15;
    strcpy((char *)Block, "useFBF");
    v33 = (cocos2d::CCString *)cocos2d::CCDictionary::objectForKey(v24, Block);
    if ( v73 > 0xF )
    {
      v34 = Block[0];
      if ( v73 + 1 >= 0x1000 )
      {
        v34 = (void *)*((_QWORD *)Block[0] - 1);
        if ( (unsigned __int64)((char *)Block[0] - (char *)v34 - 8) > 0x1F )
          invoke_watson(0, 0, 0, 0, 0);
      }
      j_j_free(v34);
    }
    v72 = 0;
    v73 = 15;
    LOBYTE(Block[0]) = 0;
    *(_OWORD *)Buf2 = 0;
    Size = 5;
    v70 = 15;
    strcpy((char *)Buf2, "usePA");
    v35 = (cocos2d::CCString *)cocos2d::CCDictionary::objectForKey(v24, Buf2);
    if ( v70 > 0xF )
    {
      v36 = Buf2[0];
      if ( v70 + 1 >= 0x1000 )
      {
        v36 = (void *)*((_QWORD *)Buf2[0] - 1);
        if ( (unsigned __int64)((char *)Buf2[0] - (char *)v36 - 8) > 0x1F )
          invoke_watson(0, 0, 0, 0, 0);
      }
      j_j_free(v36);
    }
    Size = 0;
    v70 = 15;
    LOBYTE(Buf2[0]) = 0;
    v37 = v33 && cocos2d::CCString::boolValue(v33);
    v38 = v35 && cocos2d::CCString::boolValue(v35);
    *(_OWORD *)Buf2 = 0;
    Size = 0;
    v70 = 0;
    Buf2[0] = (void *)sub_3C460(32);
    Size = 16;
    v70 = 31;
    strcpy((char *)Buf2[0], "defaultAnimation");
    v39 = (cocos2d::CCString *)cocos2d::CCDictionary::objectForKey(v24, Buf2);
    v40 = (char *)cocos2d::CCString::getCString(v39);
    v41 = -1;
    do
      ++v41;
    while ( v40[v41] );
    sub_3F5A0(a1 + 88, v40, v41);
    if ( v70 > 0xF )
    {
      v42 = Buf2[0];
      if ( v70 + 1 >= 0x1000 )
      {
        v42 = (void *)*((_QWORD *)Buf2[0] - 1);
        if ( (unsigned __int64)((char *)Buf2[0] - (char *)v42 - 8) > 0x1F )
          invoke_watson(0, 0, 0, 0, 0);
      }
      j_j_free(v42);
    }
    if ( v37 )
    {
      cocos2d::CCRect::CCRect((cocos2d::CCRect *)Block, 0.0, 0.0, 0.0, 0.0);
      v44 = cocos2d::CCSprite::createWithTexture(a3, v43);
      a1[85] = v44;
      v45 = *(_QWORD *)v44;
      v46 = *(float *)((*(__int64 (__fastcall **)(_QWORD *))(*a1 + 320LL))(a1) + 4) * 0.5;
      v47 = (float *)(*(__int64 (__fastcall **)(_QWORD *))(*a1 + 320LL))(a1);
      v48 = a1[85];
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)Block, *v47 * 0.5, v46);
      (*(void (__fastcall **)(__int64, __int64))(v45 + 184))(v48, v49);
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 464LL))(a1, a1[85]);
      a1[84] = a1[85];
    }
    if ( v38 )
    {
      Buf2[1] = 0;
      Size = 8;
      v70 = 15;
      Buf2[0] = (void *)0x637365446D696E61LL;
      v50 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(v24, Buf2);
      v51 = cocos2d::CCString::getCString(v50);
      if ( v70 > 0xF )
      {
        v52 = Buf2[0];
        if ( v70 + 1 >= 0x1000 )
        {
          v52 = (void *)*((_QWORD *)Buf2[0] - 1);
          if ( (unsigned __int64)((char *)Buf2[0] - (char *)v52 - 8) > 0x1F )
            invoke_watson(0, 0, 0, 0, 0);
        }
        j_j_free(v52);
      }
      Size = 0;
      v70 = 15;
      LOBYTE(Buf2[0]) = 0;
      v53 = (char *)operator new(0x280u);
      Block[0] = v53;
      cocos2d::CCSprite::CCSprite((cocos2d::CCSprite *)v53);
      *(_QWORD *)v53 = &CCPartAnimSprite::`vftable';
      *((_QWORD *)v53 + 40) = &CCPartAnimSprite::`vftable';
      *((_QWORD *)v53 + 43) = &CCPartAnimSprite::`vftable';
      *((_QWORD *)v53 + 75) = 0;
      *((_QWORD *)v53 + 76) = 0;
      v53[616] = 0;
      cocos2d::CCSize::CCSize((cocos2d::CCSize *)(v53 + 620));
      *((_QWORD *)v53 + 79) = 0;
      if ( CCPartAnimSprite_initWithAnimDesc((__int64)v53, (__int64)v51, a3, a4) )
      {
        cocos2d::CCObject::autorelease((cocos2d::CCObject *)v53);
      }
      else
      {
        (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v53 + 8LL))(v53, 1);
        v53 = 0;
      }
      a1[86] = v53;
      v54 = *(_QWORD *)v53;
      v55 = *(float *)((*(__int64 (__fastcall **)(_QWORD *))(*a1 + 320LL))(a1) + 4) * 0.5;
      v56 = (float *)(*(__int64 (__fastcall **)(_QWORD *))(*a1 + 320LL))(a1);
      v57 = a1[86];
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)Block, *v56 * 0.5, v55);
      (*(void (__fastcall **)(__int64, __int64))(v54 + 184))(v57, v58);
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 464LL))(a1, a1[86]);
      a1[84] = a1[86];
    }
    *((_DWORD *)a1 + 174) = 0;
    *(_OWORD *)Buf2 = 0;
    Size = 0;
    v70 = 0;
    v59 = -1;
    do
      ++v59;
    while ( *(_BYTE *)(a2 + v59) );
    sub_3C230(Buf2);
    Block[0] = Buf2;
    v60 = (char *)operator new(0x1D8u);
    cocos2d::CCNode::CCNode((cocos2d::CCNode *)v60);
    *(_QWORD *)v60 = &SpriteAnimationManager::`vftable';
    *((_QWORD *)v60 + 40) = 0;
    *((_QWORD *)v60 + 41) = 0;
    *((_QWORD *)v60 + 42) = 0;
    *((_QWORD *)v60 + 43) = 0;
    *((_OWORD *)v60 + 22) = 0;
    *((_QWORD *)v60 + 46) = 0;
    *((_QWORD *)v60 + 47) = 15;
    v60[352] = 0;
    *((_QWORD *)v60 + 50) = 0;
    *(_OWORD *)(v60 + 408) = 0;
    *((_QWORD *)v60 + 53) = 0;
    *((_QWORD *)v60 + 54) = 15;
    v60[408] = 0;
    *(_OWORD *)(v60 + 440) = 0;
    *((_QWORD *)v60 + 57) = 0;
    *((_QWORD *)v60 + 58) = 15;
    v60[440] = 0;
    sub_3E4F0(&Src, Buf2);
    if ( (unsigned __int8)sub_83FE0(v60, a1, v61) )
    {
      cocos2d::CCObject::autorelease((cocos2d::CCObject *)v60);
    }
    else
    {
      (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v60 + 8LL))(v60, 1);
      v60 = 0;
    }
    sub_3C310(Buf2);
    a1[83] = v60;
    cocos2d::CCObject::retain((cocos2d::CCObject *)v60);
    v63 = a1[86];
    if ( v63 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v63 + 336LL))(v63, 0);
    v64 = a1[85];
    if ( v64 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v64 + 336LL))(v64, 0);
    LOBYTE(v62) = 1;
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 336LL))(a1, v62);
    v65 = a1 + 88;
    if ( a1[91] > 0xFu )
      v65 = (_QWORD *)*v65;
    *(_OWORD *)Buf2 = 0;
    Size = 0;
    v70 = 0;
    do
      ++v6;
    while ( *((_BYTE *)v65 + v6) );
    sub_3C230(Buf2);
    return SpriteAnimationManager_runAnimation(a1[83], Buf2);
  }
  return result;
}
