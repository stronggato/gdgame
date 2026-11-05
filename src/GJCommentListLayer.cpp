#include <Geode/binding/GJCommentListLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x3954d0
// Method: GJCommentListLayer::~GJCommentListLayer
// Hidden C++ exception states: #wind=1
struct cocos2d::CCObject *__fastcall GJCommentListLayer__dtor_GJCommentListLayer(
        struct cocos2d::CCObject *Block,
        char a2)
{
  __int64 v4; // rax
  cocos2d::CCTouchDispatcher *v5; // rax

  *(_QWORD *)Block = &GJCommentListLayer::`vftable'; /*0x3954e6*/
  *((_QWORD *)Block + 40) = &GJCommentListLayer::`vftable'; /*0x3954f0*/
  *((_QWORD *)Block + 41) = &GJCommentListLayer::`vftable'; /*0x3954fe*/
  *((_QWORD *)Block + 42) = &GJCommentListLayer::`vftable'; /*0x39550c*/
  *((_QWORD *)Block + 43) = &GJCommentListLayer::`vftable'; /*0x39551a*/
  *((_QWORD *)Block + 44) = &GJCommentListLayer::`vftable'; /*0x395528*/
  *((_QWORD *)Block + 51) = &GJCommentListLayer::`vftable'; /*0x395536*/
  *((_QWORD *)Block + 54) = &GJCommentListLayer::`vftable'; /*0x395544*/
  v4 = cocos2d::CCDirector::sharedDirector(Block); /*0x39554b*/
  v5 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 144LL))(v4); /*0x39555e*/
  cocos2d::CCTouchDispatcher::unregisterForcePrio(v5, Block); /*0x395566*/
  cocos2d::CCLayerColor::~CCLayerColor(Block); /*0x39556f*/
  if ( (a2 & 1) != 0 ) /*0x395579*/
    j_j_free(Block); /*0x395583*/
  return Block; /*0x39558b*/
}

// [2/3] Address: 0x3989b0
// Method: GJCommentListLayer::create
// Hidden C++ exception states: #wind=1
cocos2d::CCLayerColor *__fastcall GJCommentListLayer_create(int a1, __int64 a2, int a3, float a4, int a5, char a6)
{
  cocos2d::CCLayerColor *v8; // rsi
  int v9; // r8d

  v8 = (cocos2d::CCLayerColor *)operator new(0x228u); /*0x3989dc*/
  cocos2d::CCLayerColor::CCLayerColor(v8); /*0x3989e7*/
  *(_QWORD *)v8 = &GJCommentListLayer::`vftable'; /*0x3989f4*/
  *((_QWORD *)v8 + 40) = &GJCommentListLayer::`vftable'; /*0x3989fe*/
  *((_QWORD *)v8 + 41) = &GJCommentListLayer::`vftable'; /*0x398a0c*/
  *((_QWORD *)v8 + 42) = &GJCommentListLayer::`vftable'; /*0x398a1a*/
  *((_QWORD *)v8 + 43) = &GJCommentListLayer::`vftable'; /*0x398a28*/
  *((_QWORD *)v8 + 44) = &GJCommentListLayer::`vftable'; /*0x398a36*/
  *((_QWORD *)v8 + 51) = &GJCommentListLayer::`vftable'; /*0x398a44*/
  *((_QWORD *)v8 + 54) = &GJCommentListLayer::`vftable'; /*0x398a52*/
  *((_QWORD *)v8 + 68) = 0; /*0x398a59*/
  if ( (unsigned __int8)GJCommentListLayer_init((_DWORD)v8, a1, v9, a3, LODWORD(a4), a5, a6) ) /*0x398a8e*/
  {
    cocos2d::CCObject::autorelease(v8); /*0x398a9a*/
    return v8; /*0x398aa0*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCLayerColor *, __int64))(*(_QWORD *)v8 + 8LL))(v8, 1); /*0x398ab4*/
    return 0; /*0x398ab7*/
  }
}

// Address: 0x398ad0
// Method: GJCommentListLayer::init
// Hidden C++ exception states: #wind=2
bool __fastcall GJCommentListLayer_init(
        cocos2d::CCLayerColor *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        float a5,
        float a6,
        char a7)
{
  bool result; // al
  __int64 v10; // rcx
  __int64 v11; // rax
  cocos2d::CCTouchDispatcher *v12; // rax
  const char *v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // r8
  const char *v16; // rdx
  void **v17; // rcx
  cocos2d::CCSprite *v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rax
  void **v21; // rcx
  struct cocos2d::CCSprite *v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rax
  void **v27; // rcx
  struct cocos2d::CCSprite *v28; // rsi
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rax
  void **v33; // rcx
  struct cocos2d::CCSprite *v34; // rdi
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rbx
  void *v40; // rcx
  void *v41; // rcx
  _BYTE v42[8]; // [rsp+30h] [rbp-71h] BYREF
  int v43; // [rsp+38h] [rbp-69h] BYREF
  void *Block[2]; // [rsp+40h] [rbp-61h] BYREF
  __m128i si128; // [rsp+50h] [rbp-51h]
  void *v46[2]; // [rsp+60h] [rbp-41h] BYREF
  __int128 v47; // [rsp+70h] [rbp-31h]

  v43 = a4;
  result = cocos2d::CCLayerColor::initWithColor(a1, (const struct cocos2d::_ccColor4B *)&v43, a5, a6);
  if ( result )
  {
    v11 = cocos2d::CCDirector::sharedDirector(v10);
    v12 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 144LL))(v11);
    cocos2d::CCTouchDispatcher::registerForcePrio(v12, a1, 2, 2);
    v13 = "GJ_commentTop_001.png";
    if ( a7 )
      v13 = "GJ_commentTop2_001.png";
    *(_OWORD *)v46 = 0;
    v47 = 0;
    v14 = -1;
    v15 = -1;
    do
      ++v15;
    while ( v13[v15] );
    sub_3C230(v46);
    v16 = "GJ_commentSide_001.png";
    if ( a7 )
      v16 = "GJ_commentSide2_001.png";
    *(_OWORD *)Block = 0;
    si128 = 0;
    do
      ++v14;
    while ( v16[v14] );
    sub_3C230(Block);
    v17 = v46;
    if ( *((_QWORD *)&v47 + 1) > 0xFu )
      v17 = (void **)v46[0];
    v18 = cocos2d::CCSprite::createWithSpriteFrameName((const char *)v17);
    cocos2d::CCSprite::setFlipY(v18, 1);
    v19 = *(_QWORD *)v18;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v42, a5 * 0.5, 4.0);
    (*(void (__fastcall **)(cocos2d::CCSprite *, __int64))(v19 + 184))(v18, v20);
    (*(void (__fastcall **)(cocos2d::CCLayerColor *, cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v18, 10);
    v21 = v46;
    if ( *((_QWORD *)&v47 + 1) > 0xFu )
      v21 = (void **)v46[0];
    v22 = cocos2d::CCSprite::createWithSpriteFrameName((const char *)v21);
    v23 = *(_QWORD *)v22;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v42, a5 * 0.5, a6 - 4.0);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v23 + 184))(v22, v24);
    v25 = *(_QWORD *)v22;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v42, 0.5, 0.5);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v25 + 288))(v22, v26);
    (*(void (__fastcall **)(cocos2d::CCLayerColor *, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(
      a1,
      v22,
      10);
    v27 = Block;
    if ( si128.m128i_i64[1] > 0xFuLL )
      v27 = (void **)Block[0];
    v28 = cocos2d::CCSprite::createWithSpriteFrameName((const char *)v27);
    v29 = *(_QWORD *)v28;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v42, 0.0, 0.0);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v29 + 288))(v28, v30);
    (*(void (__fastcall **)(cocos2d::CCLayerColor *, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(
      a1,
      v28,
      9);
    v31 = *(_QWORD *)v28;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v42, -7.0, 0.0);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v31 + 184))(v28, v32);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v28 + 136LL))(v28);
    v33 = Block;
    if ( si128.m128i_i64[1] > 0xFuLL )
      v33 = (void **)Block[0];
    v34 = cocos2d::CCSprite::createWithSpriteFrameName((const char *)v33);
    v35 = *(_QWORD *)v34;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v42, 1.0, 0.0);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v35 + 288))(v34, v36);
    (*(void (__fastcall **)(cocos2d::CCLayerColor *, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(
      a1,
      v34,
      9);
    v37 = *(_QWORD *)v34;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v42, a5 + 7.0, 0.0);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v37 + 184))(v34, v38);
    v39 = *(_QWORD *)v34;
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v28 + 144LL))(v28);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(v39 + 136))(v34);
    cocos2d::CCSprite::setFlipX(v34, 1);
    if ( a2 )
    {
      *((_QWORD *)a1 + 68) = a2;
      (*(void (__fastcall **)(cocos2d::CCLayerColor *, __int64, __int64))(*(_QWORD *)a1 + 456LL))(a1, a2, 6);
    }
    if ( si128.m128i_i64[1] > 0xFuLL )
    {
      v40 = Block[0];
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
      {
        v40 = (void *)*((_QWORD *)Block[0] - 1);
        if ( (unsigned __int64)((char *)Block[0] - (char *)v40 - 8) > 0x1F )
          invoke_watson(0, 0, 0, 0, 0);
      }
      j_j_free(v40);
    }
    si128 = _mm_load_si128((const __m128i *)&Size);
    LOBYTE(Block[0]) = 0;
    if ( *((_QWORD *)&v47 + 1) > 0xFu )
    {
      v41 = v46[0];
      if ( (unsigned __int64)(*((_QWORD *)&v47 + 1) + 1LL) >= 0x1000 )
      {
        v41 = (void *)*((_QWORD *)v46[0] - 1);
        if ( (unsigned __int64)((char *)v46[0] - (char *)v41 - 8) > 0x1F )
          invoke_watson(0, 0, 0, 0, 0);
      }
      j_j_free(v41);
    }
    return 1;
  }
  return result;
}
