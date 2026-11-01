#include <Geode/binding/GJListLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x38a010
// Method: GJListLayer::~GJListLayer
cocos2d::CCLayerColor *__fastcall GJListLayer__dtor_GJListLayer(cocos2d::CCLayerColor *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *(_QWORD *)Block = &GJListLayer::`vftable'; /*0x38a026*/
  *((_QWORD *)Block + 40) = &GJListLayer::`vftable'; /*0x38a030*/
  *((_QWORD *)Block + 41) = &GJListLayer::`vftable'; /*0x38a03e*/
  *((_QWORD *)Block + 42) = &GJListLayer::`vftable'; /*0x38a04c*/
  *((_QWORD *)Block + 43) = &GJListLayer::`vftable'; /*0x38a05a*/
  *((_QWORD *)Block + 44) = &GJListLayer::`vftable'; /*0x38a068*/
  *((_QWORD *)Block + 51) = &GJListLayer::`vftable'; /*0x38a076*/
  *((_QWORD *)Block + 54) = &GJListLayer::`vftable'; /*0x38a084*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 68); /*0x38a08b*/
  if ( v4 ) /*0x38a095*/
    cocos2d::CCObject::release(v4); /*0x38a097*/
  cocos2d::CCLayerColor::~CCLayerColor(Block); /*0x38a0a0*/
  if ( (a2 & 1) != 0 ) /*0x38a0ab*/
    j_j_free(Block); /*0x38a0b5*/
  return Block; /*0x38a0bd*/
}

// [2/3] Address: 0x38a0d0
// Method: GJListLayer::create
// Hidden C++ exception states: #wind=1
cocos2d::CCLayerColor *__fastcall GJListLayer_create(int a1, int a2, int a3, float a4, int a5, int a6)
{
  cocos2d::CCLayerColor *v9; // r14

  v9 = (cocos2d::CCLayerColor *)operator new(0x228u); /*0x38a100*/
  cocos2d::CCLayerColor::CCLayerColor(v9); /*0x38a10b*/
  *(_QWORD *)v9 = &GJListLayer::`vftable'; /*0x38a118*/
  *((_QWORD *)v9 + 40) = &GJListLayer::`vftable'; /*0x38a122*/
  *((_QWORD *)v9 + 41) = &GJListLayer::`vftable'; /*0x38a130*/
  *((_QWORD *)v9 + 42) = &GJListLayer::`vftable'; /*0x38a13e*/
  *((_QWORD *)v9 + 43) = &GJListLayer::`vftable'; /*0x38a14c*/
  *((_QWORD *)v9 + 44) = &GJListLayer::`vftable'; /*0x38a15a*/
  *((_QWORD *)v9 + 51) = &GJListLayer::`vftable'; /*0x38a168*/
  *((_QWORD *)v9 + 54) = &GJListLayer::`vftable'; /*0x38a176*/
  *((_QWORD *)v9 + 68) = 0; /*0x38a17d*/
  if ( (unsigned __int8)GJListLayer_init((_DWORD)v9, a1, a2, a3, LODWORD(a4), a5, a6) ) /*0x38a1b4*/
  {
    cocos2d::CCObject::autorelease(v9); /*0x38a1c0*/
    return v9; /*0x38a1c6*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCLayerColor *, __int64))(*(_QWORD *)v9 + 8LL))(v9, 1); /*0x38a1da*/
    return 0; /*0x38a1dd*/
  }
}

// [3/3] Address: 0x38a200
// Method: GJListLayer::init
bool __fastcall GJListLayer_init(
        cocos2d::CCLayerColor *a1,
        cocos2d::CCObject *a2,
        const char *a3,
        int a4,
        float a5,
        float a6,
        int a7)
{
  float v8; // xmm7_4
  float v9; // xmm9_4
  bool result; // al
  const char *v13; // rcx
  const char *v14; // rdi
  float v15; // xmm8_4
  struct cocos2d::CCSprite *v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // rax
  struct cocos2d::CCSprite *v19; // r15
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  int v24; // edi
  bool v25; // zf
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rax
  struct cocos2d::CCSprite *v30; // rsi
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rax
  float v39; // xmm6_4
  struct cocos2d::CCSprite *v40; // rsi
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rax
  struct cocos2d::CCSprite *v45; // rdi
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rbx
  cocos2d::CCLabelBMFont *v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rbx
  __int64 v54; // rax
  _BYTE v55[8]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v56[8]; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v57[16]; // [rsp+30h] [rbp-A8h] BYREF
  int v58; // [rsp+F8h] [rbp+20h] BYREF

  v58 = a4; /*0x38a203*/
  v8 = a6; /*0x38a21a*/
  v9 = a5; /*0x38a22f*/
  result = cocos2d::CCLayerColor::initWithColor(a1, (const struct cocos2d::_ccColor4B *)&v58, a5, a6); /*0x38a243*/
  if ( result ) /*0x38a24b*/
  {
    v13 = "GJ_table_bottom_001.png"; /*0x38a259*/
    if ( a7 == 1 ) /*0x38a2a4*/
    {
      v13 = "GJ_table_side_001.png"; /*0x38a2a6*/
      v14 = "GJ_table_side_001.png"; /*0x38a2ad*/
    }
    else
    {
      v14 = "GJ_table_top02_001.png"; /*0x38a2b9*/
      if ( a3 ) /*0x38a2c0*/
        v14 = "GJ_table_top_001.png"; /*0x38a2c0*/
    }
    v15 = v9 * 0.5; /*0x38a2e3*/
    v16 = cocos2d::CCSprite::createWithSpriteFrameName(v13); /*0x38a2e8*/
    v17 = *(_QWORD *)v16; /*0x38a2eb*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v55, v9 * 0.5, -10.0); /*0x38a2f2*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v17 + 184))(v16, v18); /*0x38a2fe*/
    (*(void (__fastcall **)(cocos2d::CCLayerColor *, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))( /*0x38a313*/
      a1,
      v16,
      10);
    v19 = cocos2d::CCSprite::createWithSpriteFrameName(v14); /*0x38a33c*/
    v20 = *(_QWORD *)v19; /*0x38a33f*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v55, v9 * 0.5, (float)(v8 - 5.0) + 20.0); /*0x38a34a*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v20 + 184))(v19, v21); /*0x38a356*/
    v22 = *(_QWORD *)v19; /*0x38a35c*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v55, 0.5, 0.5); /*0x38a36a*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v22 + 288))(v19, v23); /*0x38a376*/
    (*(void (__fastcall **)(cocos2d::CCLayerColor *, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))( /*0x38a38b*/
      a1,
      v19,
      10);
    v24 = 0; /*0x38a391*/
    v25 = a7 == 1; /*0x38a397*/
    if ( a7 == 1 ) /*0x38a39f*/
    {
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v19 + 136LL))(v19); /*0x38a3d2*/
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v19 + 352LL))(v19); /*0x38a3e6*/
      v26 = *(_QWORD *)v19; /*0x38a3ec*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v55, v15, (float)(v8 - 14.0) + 20.0); /*0x38a40b*/
      (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v26 + 184))(v19, v27); /*0x38a417*/
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v16 + 136LL))(v16); /*0x38a42e*/
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v16 + 352LL))(v16); /*0x38a442*/
      v28 = *(_QWORD *)v16; /*0x38a456*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v55, v15, -6.0); /*0x38a461*/
      (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v28 + 184))(v16, v29); /*0x38a46d*/
      while ( 1 ) /*0x38a4c6*/
      {
        while ( 1 ) /*0x38a4bd*/
        {
          while ( 1 ) /*0x38a4a9*/
          {
            v30 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_table_corner_001.png"); /*0x38a4a9*/
            (*(void (__fastcall **)(cocos2d::CCLayerColor *, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))( /*0x38a4b6*/
              a1,
              v30,
              11);
            if ( v24 ) /*0x38a4bd*/
              break; /*0x38a4bd*/
            v35 = *(_QWORD *)v30; /*0x38a552*/
            cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v57, -5.0, v8 + 6.0); /*0x38a565*/
            (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v35 + 184))(v30, v36); /*0x38a571*/
            v24 = 1; /*0x38a577*/
          }
          if ( v24 != 1 ) /*0x38a4c6*/
            break; /*0x38a4c6*/
          v33 = *(_QWORD *)v30; /*0x38a515*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v56, v9 + 5.0, v8 + 6.0); /*0x38a52e*/
          (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v33 + 184))(v30, v34); /*0x38a53a*/
          cocos2d::CCSprite::setFlipX(v30, 1); /*0x38a545*/
          v24 = 2; /*0x38a54b*/
        }
        if ( v24 != 2 ) /*0x38a4cb*/
          break; /*0x38a4cb*/
        v31 = *(_QWORD *)v30; /*0x38a4e2*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v55, -5.0, -6.0); /*0x38a4f1*/
        (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v31 + 184))(v30, v32); /*0x38a4fd*/
        cocos2d::CCSprite::setFlipY(v30, 1); /*0x38a508*/
        v24 = 3; /*0x38a50e*/
      }
      v37 = *(_QWORD *)v30; /*0x38a57e*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v57, v9 + 5.0, -6.0); /*0x38a593*/
      (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v37 + 184))(v30, v38); /*0x38a59f*/
      cocos2d::CCSprite::setFlipX(v30, 1); /*0x38a5aa*/
      cocos2d::CCSprite::setFlipY(v30, 1); /*0x38a5b5*/
      v25 = a7 == 1; /*0x38a5c1*/
    }
    v39 = (float)v25; /*0x38a5dd*/
    v40 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_table_side_001.png"); /*0x38a5f1*/
    v41 = *(_QWORD *)v40; /*0x38a5f4*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v57, 0.0, 0.0); /*0x38a5f7*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v41 + 288))(v40, v42); /*0x38a603*/
    (*(void (__fastcall **)(cocos2d::CCLayerColor *, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))( /*0x38a61f*/
      a1,
      v40,
      9);
    v43 = *(_QWORD *)v40; /*0x38a62f*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v57, -20.0, v39); /*0x38a635*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v43 + 184))(v40, v44); /*0x38a641*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v40 + 136LL))(v40); /*0x38a65a*/
    v45 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_table_side_001.png"); /*0x38a67d*/
    v46 = *(_QWORD *)v45; /*0x38a680*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v57, 1.0, 0.0); /*0x38a683*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v46 + 288))(v45, v47); /*0x38a68f*/
    (*(void (__fastcall **)(cocos2d::CCLayerColor *, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))( /*0x38a6ab*/
      a1,
      v45,
      9);
    v48 = *(_QWORD *)v45; /*0x38a6b7*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v57, v9 + 20.0, v39); /*0x38a6c6*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v48 + 184))(v45, v49); /*0x38a6d2*/
    v50 = *(_QWORD *)v45; /*0x38a6de*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v40 + 144LL))(v40); /*0x38a6e1*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(v50 + 136))(v45); /*0x38a6ed*/
    cocos2d::CCSprite::setFlipX(v45, 1); /*0x38a6f8*/
    if ( a3 ) /*0x38a726*/
    {
      v51 = cocos2d::CCLabelBMFont::create(a3, (const char *)&qword_6FFF68); /*0x38a748*/
      (*(void (__fastcall **)(cocos2d::CCLayerColor *, cocos2d::CCLabelBMFont *, __int64))(*(_QWORD *)a1 + 456LL))( /*0x38a755*/
        a1,
        v51,
        11);
      cocos2d::CCLabelBMFont::limitLabelWidth(v51, 280.0, 0.80000001, 0.0); /*0x38a76e*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v57, 0.0, 3.0); /*0x38a784*/
      v53 = v52; /*0x38a78d*/
      v54 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v19 + 200LL))(v19); /*0x38a79a*/
      cocos2d::CCPoint::operator+(v54, v55, v53); /*0x38a7a7*/
      (*(void (__fastcall **)(cocos2d::CCLabelBMFont *, _BYTE *))(*(_QWORD *)v51 + 184LL))(v51, v55); /*0x38a7b8*/
    }
    if ( a2 ) /*0x38a7d9*/
    {
      *((_QWORD *)a1 + 68) = a2; /*0x38a7de*/
      cocos2d::CCObject::retain(a2); /*0x38a7e5*/
      (*(void (__fastcall **)(cocos2d::CCLayerColor *, _QWORD, __int64))(*(_QWORD *)a1 + 456LL))( /*0x38a7fe*/
        a1,
        *((_QWORD *)a1 + 68),
        6);
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)a1 + 68) + 64LL))(*((_QWORD *)a1 + 68), 9); /*0x38a813*/
    }
    return 1; /*0x38a816*/
  }
  return result; /*0x38a818*/
}
