#include <Geode/binding/GJGroundLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/8] Address: 0x7e090
// Method: GJGroundLayer::scaleGround
__int64 __fastcall GJGroundLayer_scaleGround(_QWORD *a1, float a2, float a3)
{
  __int64 result; // rax
  float v5; // xmm0_4
  __int64 v6; // rax
  float v7; // xmm8_4
  float v8; // xmm6_4
  double v9; // xmm0_8
  float v10; // xmm7_4
  double v11; // xmm0_8
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  char v15; // [rsp+60h] [rbp+8h] BYREF
  char v16; // [rsp+78h] [rbp+20h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 320LL))(a1); /*0x7e0ae*/
  v5 = *(float *)(result + 4); /*0x7e0b7*/
  if ( v5 > 0.0 ) /*0x7e0bf*/
  {
    if ( a3 > 0.0 ) /*0x7e0da*/
      fminf(a2 / v5, (float)(a2 * a3) / *(float *)(*(__int64 (__fastcall **)(_QWORD *))(*a1 + 320LL))(a1)); /*0x7e0f1*/
    (*(void (__fastcall **)(_QWORD *))(*a1 + 160LL))(a1); /*0x7e10a*/
    v6 = a1[75]; /*0x7e110*/
    v7 = *(float *)(v6 + 16); /*0x7e11b*/
    if ( *(_BYTE *)(v6 + 40) ) /*0x7e117*/
      v7 = -v7; /*0x7e123*/
    v8 = *(float *)(v6 + 20); /*0x7e12b*/
    v9 = (*(double (__fastcall **)(_QWORD *))(*a1 + 168LL))(a1); /*0x7e136*/
    v10 = *(float *)&v9 * v8; /*0x7e145*/
    v11 = (*(double (__fastcall **)(_QWORD *))(*a1 + 168LL))(a1); /*0x7e149*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v16, *(float *)&v11 * v7, v10); /*0x7e15f*/
    v13 = v12; /*0x7e168*/
    v14 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 200LL))(a1); /*0x7e175*/
    cocos2d::CCPoint::operator+(v14, &v15, v13); /*0x7e182*/
    return (*(__int64 (__fastcall **)(_QWORD *, char *))(*a1 + 184LL))(a1, &v15); /*0x7e193*/
  }
  return result; /*0x7e1a3*/
}

// [2/8] Address: 0x1172a0
// Method: GJGroundLayer::loadGroundSprites
__int64 __fastcall GJGroundLayer_loadGroundSprites(
        char *a1,
        int a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v10; // rbp
  __int64 v11; // rdi
  int v12; // r8d
  char *v13; // r12

  if ( (__int64)a3 <= 32 ) /*0x1172bb*/
    return sub_1170D0(a1); /*0x1172cf*/
  v10 = a3 >> 1; /*0x1172e9*/
  v11 = a3 - (a3 >> 1); /*0x1172ec*/
  v12 = a3 - (a3 >> 1); /*0x1172fc*/
  v13 = &a1[4 * v11]; /*0x117307*/
  if ( v11 > a5 ) /*0x117311*/
  {
    GJGroundLayer_loadGroundSprites((_DWORD)a1, (_DWORD)a1 + 4 * v11, v12, a4, a5, a6); /*0x11733f*/
    GJGroundLayer_loadGroundSprites((_DWORD)v13, a2, v10, a4, a5, a6); /*0x11735a*/
  }
  else
  {
    sub_117AE0((__int64)a1, a6); /*0x117318*/
    sub_117AE0((__int64)v13, a6); /*0x11732e*/
  }
  return sub_117CD0(a1, v13, v10, a4, a5, a6); /*0x1172c5*/
}

// [3/8] Address: 0x383210
// Method: GJGroundLayer::~GJGroundLayer
void __fastcall GJGroundLayer__dtor_GJGroundLayer(cocos2d::CCLayer *a1)
{
  *(_QWORD *)a1 = &GJGroundLayer::`vftable'; /*0x383217*/
  *((_QWORD *)a1 + 40) = &GJGroundLayer::`vftable'; /*0x383221*/
  *((_QWORD *)a1 + 41) = &GJGroundLayer::`vftable'; /*0x38322f*/
  *((_QWORD *)a1 + 42) = &GJGroundLayer::`vftable'; /*0x38323d*/
  *((_QWORD *)a1 + 43) = &GJGroundLayer::`vftable'; /*0x38324b*/
  *((_QWORD *)a1 + 44) = &GJGroundLayer::`vftable'; /*0x383259*/
  cocos2d::CCLayer::~CCLayer(a1); /*0x383260*/
}

// [4/8] Address: 0x383270
// Method: GJGroundLayer::create
// Hidden C++ exception states: #wind=1
cocos2d::CCObject *__fastcall GJGroundLayer_create(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rax
  cocos2d::CCObject *v5; // rbx
  void *v7; // [rsp+40h] [rbp+18h]

  v7 = operator new(0x1D8u); /*0x38328d*/
  v4 = sub_383120(v7); /*0x383295*/
  v5 = (cocos2d::CCObject *)v4; /*0x38329a*/
  if ( v4 ) /*0x3832a0*/
  {
    if ( (unsigned __int8)GJGroundLayer_init(v4, a1, a2) ) /*0x3832aa*/
    {
      cocos2d::CCObject::autorelease(v5); /*0x3832b6*/
      return v5; /*0x3832ce*/
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v5 + 8LL))(v5, 1); /*0x3832d7*/
    return 0; /*0x3832da*/
  }
  return v5; /*0x3832bf*/
}

// [5/8] Address: 0x3832f0
// Method: GJGroundLayer::init
// Hidden C++ exception states: #wind=1
bool __fastcall GJGroundLayer_init(__int64 a1, int a2, unsigned int a3)
{
  bool result; // al
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  int v11; // ebx
  cocos2d::CCString *v12; // rax
  const char *CString; // r14
  struct cocos2d::CCSprite *v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rcx
  cocos2d::CCDirector *v19; // rax
  float v20; // xmm0_4
  __int64 v21; // rax
  struct cocos2d::CCSprite *v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rcx
  cocos2d::CCDirector *v27; // rax
  float v28; // xmm0_4
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdx
  struct cocos2d::CCSpriteBatchNode *v32; // rsi
  __int64 v33; // rax
  float v34; // xmm1_4
  struct cocos2d::CCTexture2D *v35; // rax
  struct cocos2d::CCSprite *v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rbx
  __int64 v39; // rax
  unsigned int v40; // r15d
  __int64 v41; // r8
  unsigned int v42; // r14d
  cocos2d::CCArray *v43; // rax
  cocos2d::CCArray *v44; // rdi
  unsigned int v45; // ebx
  struct cocos2d::CCObject *v46; // rax
  cocos2d::CCString *v47; // rax
  const char *v48; // rax
  struct cocos2d::CCSpriteBatchNode *v49; // rsi
  struct cocos2d::CCTexture2D *v50; // rax
  struct cocos2d::CCSprite *v51; // rax
  __int64 v52; // rdi
  __int64 v53; // rbx
  __int64 v54; // rax
  cocos2d::CCArray *v55; // rax
  cocos2d::CCArray *v56; // rbx
  struct cocos2d::CCObject *v57; // rax
  __int16 v58; // [rsp+20h] [rbp-40h] BYREF
  char v59; // [rsp+22h] [rbp-3Eh]
  __int64 v60; // [rsp+30h] [rbp-30h]
  _DWORD v61[2]; // [rsp+38h] [rbp-28h] BYREF
  void *v62; // [rsp+40h] [rbp-20h] BYREF
  float v63; // [rsp+48h] [rbp-18h] BYREF
  __int16 v64; // [rsp+A8h] [rbp+48h] BYREF
  char v65; // [rsp+AAh] [rbp+4Ah]

  result = cocos2d::CCLayer::init((cocos2d::CCLayer *)a1); /*0x38331d*/
  if ( result ) /*0x383325*/
  {
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)a1 + 312LL))(a1, &unk_904B88); /*0x383339*/
    v8 = cocos2d::CCDirector::sharedDirector(v7); /*0x38333f*/
    cocos2d::CCDirector::getWinSize(v8, &v63); /*0x38334c*/
    v9 = qword_905FD0; /*0x383352*/
    if ( !qword_905FD0 ) /*0x38335c*/
    {
      v62 = operator new(0x6E8u); /*0x383368*/
      qword_905FD0 = sub_2723A0(v62); /*0x383375*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x383386*/
      v9 = qword_905FD0; /*0x383388*/
    }
    v10 = 22; /*0x38338f*/
    if ( a2 < 22 ) /*0x383397*/
      v10 = a2; /*0x383397*/
    v11 = 1; /*0x38339b*/
    if ( v10 > 1 ) /*0x3833a2*/
      v11 = v10; /*0x3833a2*/
    GameManager_loadGround(v9, v11); /*0x3833a7*/
    v12 = cocos2d::CCString::createWithFormat("groundSquare_%02d_001.png", v11); /*0x3833b5*/
    CString = cocos2d::CCString::getCString(v12); /*0x3833c4*/
    *(_BYTE *)(a1 + 441) = 1; /*0x3833c7*/
    sub_383B50(a1, a3); /*0x3833d5*/
    v14 = cocos2d::CCSprite::createWithSpriteFrameName("groundSquareShadow_001.png"); /*0x3833e7*/
    v15 = *(_QWORD *)v14; /*0x3833ea*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v62, 0.0, 1.0); /*0x3833ff*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v15 + 288))(v14, v16); /*0x38340b*/
    v17 = *(_QWORD *)v14; /*0x383411*/
    v19 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v18); /*0x383414*/
    v20 = cocos2d::CCDirector::getScreenLeft(v19) - 1.0; /*0x383423*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v62, v20, 0.0); /*0x383431*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v17 + 184))(v14, v21); /*0x38343d*/
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v14, 6); /*0x383453*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, _QWORD))(*(_QWORD *)v14 + 64LL))(v14, 0); /*0x383461*/
    v22 = cocos2d::CCSprite::createWithSpriteFrameName("groundSquareShadow_001.png"); /*0x383471*/
    v23 = *(_QWORD *)v22; /*0x383474*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v62, 1.0, 1.0); /*0x383481*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v23 + 288))(v22, v24); /*0x38348d*/
    v25 = *(_QWORD *)v22; /*0x383493*/
    v27 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v26); /*0x383496*/
    v28 = cocos2d::CCDirector::getScreenRight(v27) + 1.0; /*0x3834a5*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v62, v28, 0.0); /*0x3834b3*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v25 + 184))(v22, v29); /*0x3834bf*/
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v22, 6); /*0x3834d5*/
    cocos2d::CCSprite::setFlipX(v22, 1); /*0x3834e0*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(*(_QWORD *)v22 + 64LL))(v22, 1); /*0x3834f1*/
    LOBYTE(v30) = 100; /*0x3834fe*/
    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v14 + 40) + 40LL))((__int64)v14 + 320, v30); /*0x383500*/
    LOBYTE(v31) = 100; /*0x38350d*/
    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v22 + 40) + 40LL))((__int64)v22 + 320, v31); /*0x38350f*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v14 + 120LL))(v14); /*0x383520*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v22 + 120LL))(v22); /*0x383531*/
    v60 = 0x30300000306LL; /*0x383534*/
    (**((void (__fastcall ***)(__int64, __int64))v14 + 43))((__int64)v14 + 344, 0x30300000306LL); /*0x383550*/
    (**((void (__fastcall ***)(__int64, __int64))v22 + 43))((__int64)v22 + 344, 0x30300000306LL); /*0x383560*/
    *(_BYTE *)(a1 + 440) = 0; /*0x383562*/
    v58 = 26112; /*0x38356b*/
    v64 = 26112; /*0x383575*/
    v65 = -1; /*0x383579*/
    v32 = cocos2d::CCSpriteBatchNode::create(CString); /*0x383586*/
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSpriteBatchNode *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v32, 2); /*0x3835a0*/
    v33 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v32 + 40) + 16LL))((__int64)v32 + 320); /*0x3835b4*/
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v33 + 136LL))(v33, v61); /*0x3835c7*/
    v34 = *(float *)v61; /*0x3835ca*/
    *(_DWORD *)(a1 + 424) = v61[0]; /*0x3835cf*/
    LODWORD(v60) = (int)(float)(ceilf(v63 / v34) + 1.0); /*0x3835ef*/
    *(float *)(a1 + 444) = 128.0 - *(float *)&v61[1]; /*0x3835ff*/
    v35 = (struct cocos2d::CCTexture2D *)(*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v32 + 40) + 16LL))((__int64)v32 + 320); /*0x38360f*/
    v36 = cocos2d::CCSprite::createWithTexture(v35, (const struct cocos2d::CCRect *)&unk_904B78); /*0x38361c*/
    *(_QWORD *)(a1 + 408) = v36; /*0x383622*/
    *((_BYTE *)v36 + 559) = 1; /*0x38362a*/
    v37 = **(_QWORD **)(a1 + 408); /*0x383639*/
    v38 = *(_QWORD *)(a1 + 408); /*0x38363c*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v62, 0.0, 0.0); /*0x383649*/
    (*(void (__fastcall **)(__int64, __int64))(v37 + 184))(v38, v39); /*0x383655*/
    (**(void (__fastcall ***)(__int64, __int16 *))(*(_QWORD *)(a1 + 408) + 320LL))(*(_QWORD *)(a1 + 408) + 320LL, &v64); /*0x383671*/
    (*(void (__fastcall **)(struct cocos2d::CCSpriteBatchNode *, _QWORD))(*(_QWORD *)v32 + 464LL))( /*0x383681*/
      v32,
      *(_QWORD *)(a1 + 408));
    v62 = sub_0 + 1; /*0x383687*/
    v40 = 0; /*0x38368f*/
    (**((void (__fastcall ***)(__int64, __int64))v32 + 40))((__int64)v32 + 320, 1); /*0x38369c*/
    LOBYTE(v41) = 1; /*0x38369e*/
    v42 = v60; /*0x3836a1*/
    sub_383890(a1, (unsigned int)v60, v41); /*0x3836ab*/
    v58 = v64; /*0x3836b4*/
    v59 = v65; /*0x3836bc*/
    v43 = (cocos2d::CCArray *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 480LL))(*(_QWORD *)(a1 + 408)); /*0x3836ca*/
    v44 = v43; /*0x3836d0*/
    if ( v43 ) /*0x3836d6*/
    {
      v45 = 0; /*0x3836d8*/
      if ( cocos2d::CCArray::count(v43) ) /*0x3836de*/
      {
        do /*0x383718*/
        {
          v46 = cocos2d::CCArray::objectAtIndex(v44, v45); /*0x3836f5*/
          (**((void (__fastcall ***)(__int64, __int16 *))v46 + 40))((__int64)v46 + 320, &v58); /*0x383709*/
          ++v45; /*0x38370b*/
        }
        while ( v45 < cocos2d::CCArray::count(v44) ); /*0x383718*/
      }
    }
    if ( a2 >= 8 ) /*0x38371e*/
    {
      v47 = cocos2d::CCString::createWithFormat("groundSquare_%02d_2_001.png", a2); /*0x38372e*/
      v48 = cocos2d::CCString::getCString(v47); /*0x383737*/
      v49 = cocos2d::CCSpriteBatchNode::create(v48); /*0x383746*/
      (*(void (__fastcall **)(__int64, struct cocos2d::CCSpriteBatchNode *, __int64))(*(_QWORD *)a1 + 456LL))( /*0x383760*/
        a1,
        v49,
        3);
      v50 = (struct cocos2d::CCTexture2D *)(*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v49 + 40) + 16LL))((__int64)v49 + 320); /*0x38376d*/
      v51 = cocos2d::CCSprite::createWithTexture(v50, (const struct cocos2d::CCRect *)&unk_904B78); /*0x38377b*/
      *(_QWORD *)(a1 + 416) = v51; /*0x383781*/
      *((_BYTE *)v51 + 559) = 1; /*0x383789*/
      v52 = **(_QWORD **)(a1 + 416); /*0x383798*/
      v53 = *(_QWORD *)(a1 + 416); /*0x38379b*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v62, 0.0, 0.0); /*0x3837a8*/
      (*(void (__fastcall **)(__int64, __int64))(v52 + 184))(v53, v54); /*0x3837b4*/
      (**(void (__fastcall ***)(__int64, __int16 *))(*(_QWORD *)(a1 + 416) + 320LL))( /*0x3837d0*/
        *(_QWORD *)(a1 + 416) + 320LL,
        &v64);
      (*(void (__fastcall **)(struct cocos2d::CCSpriteBatchNode *, _QWORD))(*(_QWORD *)v49 + 464LL))( /*0x3837e0*/
        v49,
        *(_QWORD *)(a1 + 416));
      sub_383890(a1, v42, 0); /*0x3837ef*/
      v58 = v64; /*0x3837f8*/
      v59 = v65; /*0x383800*/
      v55 = (cocos2d::CCArray *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 480LL))(*(_QWORD *)(a1 + 408)); /*0x38380e*/
      v56 = v55; /*0x383814*/
      if ( v55 ) /*0x38381a*/
      {
        if ( cocos2d::CCArray::count(v55) ) /*0x38381f*/
        {
          do /*0x38385b*/
          {
            v57 = cocos2d::CCArray::objectAtIndex(v56, v40); /*0x383836*/
            (**((void (__fastcall ***)(__int64, __int16 *))v57 + 40))((__int64)v57 + 320, &v58); /*0x38384a*/
            ++v40; /*0x38384c*/
          }
          while ( v40 < cocos2d::CCArray::count(v56) ); /*0x38385b*/
        }
      }
    }
    return 1; /*0x38385d*/
  }
  return result; /*0x38385f*/
}

// [6/8] Address: 0x383ef0
// Method: GJGroundLayer::fadeInGround
struct cocos2d::CCAction *__fastcall GJGroundLayer_fadeInGround(cocos2d::CCNode *a1, float a2)
{
  struct cocos2d::CCFiniteTimeAction *v3; // rbx
  __int64 v4; // rax
  struct cocos2d::CCAction *v5; // rbx

  cocos2d::CCNode::stopActionByTag(a1, 3); /*0x383f0a*/
  v3 = cocos2d::CCDelayTime::create(a2); /*0x383f23*/
  v4 = cocos2d::CCCallFunc::create(a1, GJMGLayer_showGround); /*0x383f26*/
  v5 = cocos2d::CCSequence::create(v3, v4, 0); /*0x383f40*/
  (*(void (__fastcall **)(struct cocos2d::CCAction *, __int64))(*(_QWORD *)v5 + 64LL))(v5, 3); /*0x383f4d*/
  return cocos2d::CCNode::runAction(a1, v5); /*0x383f56*/
}

// [7/8] Address: 0x383f70
// Method: GJGroundLayer::updateShadows
_QWORD *__fastcall GJGroundLayer_updateShadows(__int64 a1)
{
  double v2; // xmm0_8
  float v3; // xmm6_4
  __int64 v4; // rcx
  __int64 v5; // rax
  float *v6; // rax
  float v7; // xmm7_4
  _QWORD *result; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  char v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = (*(double (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1); /*0x383f8a*/
  v3 = *(float *)&v2; /*0x383f90*/
  v5 = cocos2d::CCDirector::sharedDirector(v4); /*0x383f93*/
  cocos2d::CCDirector::getWinSize(v5, &v12); /*0x383fa1*/
  v7 = *v6 / v3; /*0x383fb6*/
  result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 472LL))(a1, 1); /*0x383fba*/
  v9 = result; /*0x383fc0*/
  if ( result ) /*0x383fc6*/
  {
    v10 = *result; /*0x383fd0*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v12, v7 + 1.0, 0.0); /*0x383fde*/
    return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int64))(v10 + 184))(v9, v11); /*0x383fea*/
  }
  return result; /*0x383ff0*/
}

// [8/8] Address: 0x384010
// Method: GJGroundLayer::updateShadowXPos
_QWORD *__fastcall GJGroundLayer_updateShadowXPos(__int64 a1, float a2, float a3)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rax
  _QWORD *result; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  char v12; // [rsp+50h] [rbp+8h] BYREF

  (*(void (**)(void))(*(_QWORD *)a1 + 128LL))(); /*0x384035*/
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 472LL))(a1, 0); /*0x384043*/
  v5 = v4; /*0x384049*/
  if ( v4 ) /*0x38404f*/
  {
    v6 = *v4; /*0x384059*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v12, a2 - 1.0, 0.0); /*0x384067*/
    (*(void (__fastcall **)(_QWORD *, __int64))(v6 + 184))(v5, v7); /*0x384073*/
  }
  result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 472LL))(a1, 1); /*0x384084*/
  v9 = result; /*0x38408f*/
  if ( result ) /*0x38409a*/
  {
    v10 = *result; /*0x3840a4*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v12, a3 + 1.0, 0.0); /*0x3840b2*/
    return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int64))(v10 + 184))(v9, v11); /*0x3840be*/
  }
  return result; /*0x3840c4*/
}
