#include <Geode/binding/BoomScrollLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/11] Address: 0x3fb60
// Method: BoomScrollLayer::init
// Hidden C++ exception states: #wind=1
bool __fastcall BoomScrollLayer_init(__int64 a1, cocos2d::CCObject *a2, __int64 a3, char a4, __int64 a5, __int64 a6)
{
  bool result; // al
  cocos2d::CCLayer *v10; // rbx
  signed int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  _DWORD *v15; // rax
  float *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  float v21; // xmm6_4
  __int64 v22; // rcx
  __int64 v23; // rax
  float *v24; // rax
  __int64 v25; // rax
  struct cocos2d::CCSpriteBatchNode *v26; // r14
  __int64 v27; // rcx
  cocos2d::CCObject *v28; // rax
  cocos2d::CCArray *v29; // rcx
  struct cocos2d::CCObject *v30; // rbx
  cocos2d::CCLayer *v31; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v32[8]; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v33[16]; // [rsp+40h] [rbp-38h] BYREF

  result = cocos2d::CCLayer::init((cocos2d::CCLayer *)a1); /*0x3fb86*/
  if ( result )
  {
    v10 = (cocos2d::CCLayer *)operator new(0x1A0u); /*0x3fb9e*/
    v31 = v10; /*0x3fba1*/
    cocos2d::CCLayer::CCLayer(v10); /*0x3fba9*/
    *(_QWORD *)v10 = &ExtendedLayer::`vftable'; /*0x3fbb6*/
    *((_QWORD *)v10 + 40) = &ExtendedLayer::`vftable'; /*0x3fbc0*/
    *((_QWORD *)v10 + 41) = &ExtendedLayer::`vftable'; /*0x3fbce*/
    *((_QWORD *)v10 + 42) = &ExtendedLayer::`vftable'; /*0x3fbdc*/
    *((_QWORD *)v10 + 43) = &ExtendedLayer::`vftable'; /*0x3fbea*/
    *((_QWORD *)v10 + 44) = &ExtendedLayer::`vftable'; /*0x3fbf8*/
    v11 = 0; /*0x3fbff*/
    *((_QWORD *)v10 + 51) = 0; /*0x3fc01*/
    if ( cocos2d::CCLayer::init(v10) ) /*0x3fc1e*/
    {
      cocos2d::CCObject::autorelease(v10); /*0x3fc2f*/
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCLayer *, __int64))(*(_QWORD *)v10 + 8LL))(v10, 1); /*0x3fc3f*/
      v10 = 0; /*0x3fc42*/
    }
    *(_QWORD *)(a1 + 504) = v10; /*0x3fc45*/
    (*(void (__fastcall **)(__int64, cocos2d::CCLayer *))(*(_QWORD *)a1 + 464LL))(a1, v10); /*0x3fc55*/
    *(_DWORD *)(a1 + 28) = 4; /*0x3fc5b*/
    LOBYTE(v12) = 1; /*0x3fc65*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 920LL))(a1, v12); /*0x3fc6a*/
    *(_BYTE *)(a1 + 568) = 1; /*0x3fc70*/
    *(_DWORD *)(a1 + 556) = 1109393408; /*0x3fc77*/
    *(_DWORD *)(a1 + 560) = 1120403456; /*0x3fc81*/
    v14 = cocos2d::CCDirector::sharedDirector(v13); /*0x3fc8b*/
    cocos2d::CCDirector::getWinSize(v14, &v31); /*0x3fc99*/
    *(_DWORD *)(a1 + 564) = *v15; /*0x3fca1*/
    *(_BYTE *)(a1 + 569) = 1; /*0x3fca7*/
    v16 = (float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 320LL))(a1); /*0x3fcb4*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v31, *v16 * 0.5, 60.0); /*0x3fcd3*/
    cocos2d::CCPoint::operator=(a1 + 572, v17); /*0x3fce3*/
    sub_40290(a1); /*0x3fcef*/
    *(_DWORD *)(a1 + 584) = -6908266; /*0x3fd06*/
    *(_DWORD *)(a1 + 580) = -1; /*0x3fd1e*/
    v19 = cocos2d::CCDirector::sharedDirector(v18); /*0x3fd24*/
    cocos2d::CCDirector::getWinSize(v19, &v31); /*0x3fd32*/
    v21 = *(float *)(v20 + 4); /*0x3fd38*/
    v23 = cocos2d::CCDirector::sharedDirector(v22); /*0x3fd3d*/
    cocos2d::CCDirector::getWinSize(v23, v32); /*0x3fd4b*/
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v33, 0.0, 0.0, *v24, v21); /*0x3fd66*/
    cocos2d::CCRect::operator=(a1 + 512, v25); /*0x3fd76*/
    *(_QWORD *)(a1 + 588) = 0; /*0x3fd7c*/
    *(_DWORD *)(a1 + 528) = 1050253722; /*0x3fd83*/
    *(_DWORD *)(a1 + 536) = 1053609165; /*0x3fd8d*/
    *(_DWORD *)(a1 + 532) = 1058642330; /*0x3fd97*/
    *(_QWORD *)(a1 + 480) = a2; /*0x3fda1*/
    cocos2d::CCObject::retain(a2); /*0x3fdab*/
    v26 = cocos2d::CCSpriteBatchNode::create("smallDot.png"); /*0x3fdbe*/
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSpriteBatchNode *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v26, 5); /*0x3fdd7*/
    BoomScrollLayer_updatePages(a1); /*0x3fddd*/
    *(_BYTE *)(a1 + 436) = a4; /*0x3fde2*/
    if ( a4 ) /*0x3fdec*/
      GJBaseGameLayer_checkCollisionBlocks(a1); /*0x3fdf1*/
    if ( a5 ) /*0x3fe01*/
      sub_3FEC0(a1, a5, a6); /*0x3fe0e*/
    v28 = (cocos2d::CCObject *)cocos2d::CCArray::create(v27); /*0x3fe13*/
    *(_QWORD *)(a1 + 416) = v28; /*0x3fe19*/
    cocos2d::CCObject::retain(v28); /*0x3fe23*/
    while ( 1 )
    {
      v29 = *(_BYTE *)(a1 + 456) ? *(cocos2d::CCArray **)(a1 + 448) : *(cocos2d::CCArray **)(a1 + 480);
      if ( v11 >= (int)cocos2d::CCArray::count(v29) ) /*0x3fe51*/
        break; /*0x3fe51*/
      v30 = cocos2d::CCSprite::create("smallDot.png"); /*0x3fe60*/
      (*(void (__fastcall **)(struct cocos2d::CCSpriteBatchNode *, struct cocos2d::CCObject *))(*(_QWORD *)v26 + 464LL))( /*0x3fe73*/
        v26,
        v30);
      cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 416), v30); /*0x3fe80*/
      ++v11; /*0x3fe86*/
    }
    cocos2d::CCNode::schedule(a1, sub_40290); /*0x3fe9c*/
    return 1; /*0x3fea2*/
  }
  return result; /*0x3fea4*/
}

// [2/11] Address: 0x40170
// Method: BoomScrollLayer::updatePages
unsigned int __fastcall BoomScrollLayer_updatePages(__int64 a1)
{
  unsigned int v2; // edi
  unsigned int result; // eax
  struct cocos2d::CCObject *v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  float v11; // xmm6_4
  float *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  char v15; // [rsp+50h] [rbp+8h] BYREF
  char v16; // [rsp+58h] [rbp+10h] BYREF
  char v17; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0; /*0x4017a*/
  result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 480)); /*0x40183*/
  if ( result ) /*0x4018b*/
  {
    do /*0x4026e*/
    {
      v4 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 480), v2); /*0x401ba*/
      v5 = *(_QWORD *)v4; /*0x401bd*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v15, 0.0, 0.0); /*0x401c0*/
      (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v5 + 288))(v4, v6); /*0x401cc*/
      v7 = *(_QWORD *)v4; /*0x401d2*/
      v9 = cocos2d::CCDirector::sharedDirector(v8); /*0x401d5*/
      cocos2d::CCDirector::getWinSize(v9, &v16); /*0x401e3*/
      (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v7 + 312))(v4, v10); /*0x401ef*/
      v11 = *(float *)(a1 + 592); /*0x401fb*/
      v12 = (float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 320LL))(a1); /*0x40203*/
      v13 = *(_QWORD *)v4; /*0x40209*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v17, (float)(*v12 - v11) * (float)(int)v2, 0.0); /*0x40227*/
      (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v13 + 184))(v4, v14); /*0x40233*/
      if ( !(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v4 + 504LL))(v4) ) /*0x4023f*/
        (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *))(**(_QWORD **)(a1 + 504) + 464LL))( /*0x40257*/
          *(_QWORD *)(a1 + 504),
          v4);
      ++v2; /*0x40264*/
      result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 480)); /*0x40266*/
    }
    while ( v2 < result ); /*0x4026e*/
  }
  return result; /*0x40283*/
}

// [3/11] Address: 0x40490
// Method: BoomScrollLayer::visit
void __fastcall BoomScrollLayer_visit(_BYTE *a1)
{
  __int64 v2; // rax
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( a1[608] ) /*0x40496*/
  {
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v3, (const struct cocos2d::CCRect *)(a1 + 612)); /*0x404ae*/
    sub_6C9A0(a1, v2); /*0x404ba*/
  }
  cocos2d::CCNode::visit((cocos2d::CCNode *)a1); /*0x404c2*/
  if ( a1[608] ) /*0x404c8*/
    glDisable(0xC11u); /*0x404db*/
}

// [4/11] Address: 0x404f0
// Method: BoomScrollLayer::touchInsideClip
bool __fastcall BoomScrollLayer_touchInsideClip(__int64 a1, const struct cocos2d::CCPoint *a2)
{
  const struct cocos2d::CCRect *v5; // rax
  const struct cocos2d::CCRect *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  _BYTE v10[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v11[16]; // [rsp+30h] [rbp-28h] BYREF
  char v12; // [rsp+60h] [rbp+8h] BYREF
  char v13; // [rsp+70h] [rbp+18h] BYREF
  char v14; // [rsp+78h] [rbp+20h] BYREF

  if ( !*(_BYTE *)(a1 + 200) ) /*0x404f7*/
    return 1; /*0x40506*/
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v11, (const struct cocos2d::CCRect *)(a1 + 204)); /*0x40520*/
  v6 = v5; /*0x40534*/
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 408) + 200LL))(a1 - 408); /*0x40537*/
  cocos2d::CCPoint::operator+(v7, &v12, v6); /*0x40548*/
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 408) + 504LL))(a1 - 408); /*0x4055c*/
  if ( v8 ) /*0x40565*/
    cocos2d::CCNode::convertToWorldSpace(v8, &v13, &v12); /*0x40574*/
  else
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v14, (const struct cocos2d::CCPoint *)&v12); /*0x40586*/
  cocos2d::CCPoint::operator=(v6, v9); /*0x40592*/
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v10, v6); /*0x405a0*/
  return cocos2d::CCRect::containsPoint((cocos2d::CCRect *)v10, a2); /*0x40508*/
}

// [5/11] Address: 0x405c0
// Method: BoomScrollLayer::moveToPageEnded
__int64 __fastcall BoomScrollLayer_moveToPageEnded(__int64 a1)
{
  __int64 v2; // rcx
  const struct cocos2d::CCPoint *v3; // rax
  int v4; // eax
  char v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 424) != *(_DWORD *)(a1 + 588) ) /*0x405d7*/
  {
    v2 = *(_QWORD *)(a1 + 544); /*0x405d9*/
    if ( v2 ) /*0x405e3*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 8LL))(v2, a1); /*0x405eb*/
  }
  cocos2d::CCNode::stopActionByTag(*(cocos2d::CCNode **)(a1 + 504), 2); /*0x405fa*/
  v3 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 504) + 200LL))(*(_QWORD *)(a1 + 504)); /*0x4060a*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v6, v3); /*0x40618*/
  v4 = CCScrollLayerExt_moveToTop(a1); /*0x40621*/
  *(_DWORD *)(a1 + 588) = v4; /*0x40629*/
  *(_DWORD *)(a1 + 424) = v4; /*0x40632*/
  return sub_40290(a1); /*0x40638*/
}

// [6/11] Address: 0x40750
// Method: BoomScrollLayer::instantMoveToPage
void __fastcall BoomScrollLayer_instantMoveToPage(__int64 a1, int a2)
{
  cocos2d::CCArray *v4; // rcx
  __int64 v5; // rax
  float *v6; // rax
  bool v7; // zf
  char v8; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 436)
    || a2 >= 0
    && (!*(_BYTE *)(a1 + 456) ? (v4 = *(cocos2d::CCArray **)(a1 + 480)) : (v4 = *(cocos2d::CCArray **)(a1 + 448)),
        a2 < (int)cocos2d::CCArray::count(v4)) )
  {
    cocos2d::CCNode::stopActionByTag(*(cocos2d::CCNode **)(a1 + 504), 2); /*0x407a3*/
    v5 = *(_QWORD *)a1; /*0x407a9*/
    *(_BYTE *)(a1 + 552) = 0; /*0x407af*/
    v6 = (float *)(*(__int64 (__fastcall **)(__int64))(v5 + 320))(a1); /*0x407b6*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v8, (float)(*v6 - *(float *)(a1 + 592)) * (float)-a2, 0.0); /*0x407df*/
    (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 504) + 184LL))(*(_QWORD *)(a1 + 504), &v8); /*0x407f4*/
    v7 = *(_BYTE *)(a1 + 436) == 0; /*0x407fa*/
    *(_DWORD *)(a1 + 588) = a2; /*0x40801*/
    if ( !v7 ) /*0x40807*/
      GJBaseGameLayer_checkCollisionBlocks(a1); /*0x4080c*/
    BoomScrollLayer_moveToPageEnded(a1); /*0x40814*/
  }
}

// [7/11] Address: 0x40830
// Method: BoomScrollLayer::moveToPage
void __fastcall BoomScrollLayer_moveToPage(__int64 a1, int a2)
{
  cocos2d::CCArray *v4; // rcx
  __int64 v5; // rax
  float *v6; // rax
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  struct cocos2d::CCActionInterval *v11; // rax
  struct cocos2d::CCFiniteTimeAction *v12; // rbx
  __int64 v13; // rax
  struct cocos2d::CCAction *v14; // rbx
  __int64 v15; // rcx
  char v16; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 436)
    || a2 >= 0
    && (!*(_BYTE *)(a1 + 456) ? (v4 = *(cocos2d::CCArray **)(a1 + 480)) : (v4 = *(cocos2d::CCArray **)(a1 + 448)),
        a2 < (int)cocos2d::CCArray::count(v4)) )
  {
    v5 = *(_QWORD *)a1; /*0x40877*/
    *(_BYTE *)(a1 + 552) = 1; /*0x40887*/
    v6 = (float *)(*(__int64 (__fastcall **)(__int64))(v5 + 320))(a1); /*0x4088e*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v16, (float)(*v6 - *(float *)(a1 + 592)) * (float)-a2, 0.0); /*0x408ba*/
    cocos2d::CCPoint::operator=(a1 + 496, &v16); /*0x408cc*/
    cocos2d::CCNode::stopActionByTag(*(cocos2d::CCNode **)(a1 + 504), 2); /*0x408de*/
    v7 = *(float *)(a1 + 432); /*0x408e4*/
    v8 = 0.80000001; /*0x408f3*/
    if ( v7 <= *(float *)(a1 + 532) ) /*0x408fb*/
    {
      if ( v7 > *(float *)(a1 + 536) ) /*0x4090e*/
        v8 = 0.60000002; /*0x40910*/
    }
    else
    {
      v8 = 0.40000001; /*0x408fd*/
    }
    v9 = *(float *)(a1 + 540); /*0x40918*/
    v10 = v8 * 1.2; /*0x40920*/
    if ( v9 > 0.0 ) /*0x40930*/
      v10 = v10 * v9; /*0x40932*/
    *(_DWORD *)(a1 + 432) = 0; /*0x4093d*/
    v11 = cocos2d::CCMoveTo::create(v10, (const struct cocos2d::CCPoint *)(a1 + 496)); /*0x40947*/
    v12 = cocos2d::CCEaseElasticOut::create(v11, 0.5); /*0x40968*/
    v13 = cocos2d::CCCallFunc::create(a1, BoomScrollLayer_moveToPageEnded); /*0x4096b*/
    v14 = cocos2d::CCSequence::create(v12, v13, 0); /*0x4098a*/
    cocos2d::CCNode::runAction(*(cocos2d::CCNode **)(a1 + 504), v14); /*0x4098d*/
    (*(void (__fastcall **)(struct cocos2d::CCAction *, __int64))(*(_QWORD *)v14 + 64LL))(v14, 2); /*0x409a2*/
    v15 = *(_QWORD *)(a1 + 544); /*0x409a5*/
    *(_DWORD *)(a1 + 588) = a2; /*0x409b1*/
    if ( v15 ) /*0x409ba*/
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v15 + 24LL))(v15, a1, (unsigned int)a2); /*0x409c5*/
    if ( *(_BYTE *)(a1 + 436) ) /*0x409c8*/
      GJBaseGameLayer_checkCollisionBlocks(a1); /*0x409d4*/
  }
}

// [8/11] Address: 0x40fd0
// Method: BoomScrollLayer::ccTouchCancelled
void __fastcall BoomScrollLayer_ccTouchCancelled(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // edi
  cocos2d::CCArray *v4; // rcx
  float *v5; // rax
  char v6; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 144) && *(_QWORD *)(a1 + 152) == a2 ) /*0x40fe8*/
  {
    v2 = a1 - 320; /*0x40ff3*/
    v3 = *(_DWORD *)(a1 + 268); /*0x40fff*/
    *(_QWORD *)(a1 + 152) = 0; /*0x41005*/
    if ( v3 >= 0 ) /*0x41012*/
    {
      if ( *(_BYTE *)(v2 + 456) ) /*0x41014*/
        v4 = *(cocos2d::CCArray **)(v2 + 448); /*0x4101d*/
      else
        v4 = *(cocos2d::CCArray **)(v2 + 480); /*0x41026*/
      if ( v3 < (int)cocos2d::CCArray::count(v4) ) /*0x41035*/
      {
        v5 = (float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 320LL))(v2); /*0x4103d*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v6, (float)(*v5 - *(float *)(v2 + 592)) * (float)-v3, 0.0); /*0x41066*/
        (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(v2 + 504) + 184LL))(*(_QWORD *)(v2 + 504), &v6); /*0x4107b*/
        *(_DWORD *)(v2 + 424) = *(_DWORD *)(v2 + 588); /*0x41087*/
        *(_DWORD *)(v2 + 588) = v3; /*0x4108d*/
      }
    }
  }
}

// [9/11] Address: 0x410b0
// Method: BoomScrollLayer::ccTouchBegan
char __fastcall BoomScrollLayer_ccTouchBegan(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int millitm; // eax
  double time_low; // xmm0_8
  __m128i v9; // xmm1
  int v11; // [rsp+20h] [rbp-28h] BYREF
  struct __timeb64 Time; // [rsp+28h] [rbp-20h] BYREF

  if ( *(_BYTE *)(a1 + 308) ) /*0x410c9*/
    return 0; /*0x410c9*/
  cocos2d::CCTouch::getLocationInView(a2, &v11); /*0x410e4*/
  v5 = cocos2d::CCDirector::sharedDirector(v4); /*0x410ea*/
  v6 = cocos2d::CCDirector::convertToGL(v5, &Time, &v11); /*0x410fd*/
  cocos2d::CCPoint::operator=(&v11, v6); /*0x4110b*/
  if ( !cocos2d::CCRect::containsPoint((cocos2d::CCRect *)(a1 + 192), (const struct cocos2d::CCPoint *)&v11) /*0x41127*/
    || *(_QWORD *)(a1 + 152) )
  {
    return 0; /*0x41187*/
  }
  *(_QWORD *)(a1 + 152) = a2; /*0x41136*/
  ftime64(&Time); /*0x4113d*/
  millitm = Time.millitm; /*0x41143*/
  time_low = (double)SLODWORD(Time.time); /*0x4114b*/
  *(_DWORD *)(a1 + 140) = 0; /*0x41152*/
  v9 = _mm_cvtsi32_si128(millitm); /*0x4115c*/
  *(_DWORD *)(a1 + 108) = v11; /*0x41178*/
  *(double *)(a1 + 168) = _mm_cvtepi32_pd(v9).m128d_f64[0] / 1000.0 + time_low; /*0x4117d*/
  return 1; /*0x41189*/
}

// [10/11] Address: 0x411b0
// Method: BoomScrollLayer::ccTouchMoved
// Hidden C++ exception states: #wind=1
void __fastcall BoomScrollLayer_ccTouchMoved(__int64 a1, struct cocos2d::CCObject *a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  cocos2d::CCSet *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  cocos2d::CCTouchDispatcher *v15; // rax
  cocos2d::CCTargetedTouchHandler *Handler; // rbx
  cocos2d::CCSet *ClaimedTouches; // rax
  cocos2d::CCSet *v18; // rax
  void (__fastcall ***v19)(_QWORD, __int64); // rcx
  float *v20; // rax
  float v21; // xmm9_4
  int v22; // edi
  float *v23; // rax
  __int64 v24; // rcx
  float v25; // xmm7_4
  cocos2d::CCArray *v26; // rcx
  float v27; // xmm6_4
  __int64 v28; // rax
  float *v29; // rax
  float v30; // xmm7_4
  __int64 v31; // rdi
  __int64 v32; // rbx
  __int64 v33; // rax
  float v34; // [rsp+80h] [rbp+8h] BYREF
  cocos2d::CCSet *v35; // [rsp+88h] [rbp+10h] BYREF

  if ( *(struct cocos2d::CCObject **)(a1 + 152) == a2 && !*(_BYTE *)(a1 + 308) )
  {
    cocos2d::CCTouch::getLocationInView(a2, &v34); /*0x411fa*/
    v7 = cocos2d::CCDirector::sharedDirector(v6); /*0x41200*/
    v8 = cocos2d::CCDirector::convertToGL(v7, &v35, &v34); /*0x41219*/
    cocos2d::CCPoint::operator=(&v34, v8); /*0x4122a*/
    if ( *(_DWORD *)(a1 + 140) == 1 ) /*0x41237*/
      goto LABEL_11; /*0x41237*/
    if ( fabs(v34 - *(float *)(a1 + 108)) >= *(float *)(a1 + 236) ) /*0x41259*/
    {
      cocos2d::CCNode::stopActionByTag(*(cocos2d::CCNode **)(a1 + 184), 2); /*0x4126b*/
      *(_BYTE *)(a1 + 232) = 0; /*0x41271*/
      *(_DWORD *)(a1 + 140) = 1; /*0x41278*/
      *(float *)(a1 + 108) = v34; /*0x4128b*/
      if ( *(_BYTE *)(a1 + 248) ) /*0x41290*/
      {
        v9 = (cocos2d::CCSet *)operator new(0x40u); /*0x412a7*/
        v35 = v9; /*0x412aa*/
        cocos2d::CCSet::CCSet(v9); /*0x412b5*/
        *(_QWORD *)v9 = &cocos2d::CCSet::`vftable'; /*0x412c2*/
        cocos2d::CCSet::addObject(v9, a2); /*0x412cb*/
        cocos2d::CCObject::autorelease(v9); /*0x412d4*/
        *(_BYTE *)(a1 + 144) = 1; /*0x412da*/
        v11 = cocos2d::CCDirector::sharedDirector(v10); /*0x412e1*/
        v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 144LL))(v11); /*0x412f4*/
        (*(void (__fastcall **)(__int64, cocos2d::CCSet *, __int64))(*(_QWORD *)(v12 + 56) + 24LL))(v12 + 56, v9, a3); /*0x41303*/
        *(_BYTE *)(a1 + 144) = 0; /*0x41306*/
        v14 = cocos2d::CCDirector::sharedDirector(v13); /*0x4130d*/
        v15 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 144LL))(v14); /*0x41320*/
        Handler = cocos2d::CCTouchDispatcher::findHandler(v15, (struct cocos2d::CCTouchDelegate *)a1); /*0x4132e*/
        ClaimedTouches = cocos2d::CCTargetedTouchHandler::getClaimedTouches(Handler); /*0x41334*/
        if ( !cocos2d::CCSet::containsObject(ClaimedTouches, a2) ) /*0x41340*/
        {
          v18 = cocos2d::CCTargetedTouchHandler::getClaimedTouches(Handler); /*0x4134d*/
          cocos2d::CCSet::addObject(v18, a2); /*0x41359*/
        }
      }
      v19 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 224); /*0x4135f*/
      if ( v19 ) /*0x41369*/
        (**v19)(v19, a1 - 320); /*0x41375*/
    }
    if ( *(_DWORD *)(a1 + 140) == 1 )
    {
LABEL_11:
      v20 = (float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 320) + 320LL))(a1 - 320); /*0x41391*/
      v21 = (float)(v34 - (float)((float)(*v20 - *(float *)(a1 + 272)) * (float)*(int *)(a1 + 268))) /*0x413c1*/
          - *(float *)(a1 + 108);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v35, v21, 0.0); /*0x413da*/
      v22 = CCScrollLayerExt_moveToTop(a1 - 320); /*0x413e8*/
      v23 = (float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 320) + 320LL))(a1 - 320); /*0x413f7*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v35, (float)(*v23 - *(float *)(a1 - 320 + 592)) * (float)-v22, 0.0); /*0x4141f*/
      v25 = v21 - *(float *)&v35; /*0x41429*/
      if ( (v22 || v25 <= 0.0)
        && (!*(_BYTE *)(a1 + 136) ? (v26 = *(cocos2d::CCArray **)(a1 + 160)) : (v26 = *(cocos2d::CCArray **)(a1 + 128)),
            v22 != cocos2d::CCArray::count(v26) - 1 || v25 >= 0.0) )
      {
        v30 = 0.0; /*0x41493*/
      }
      else
      {
        v27 = v25 * *(float *)(a1 + 244); /*0x4146a*/
        v28 = cocos2d::CCDirector::sharedDirector(v24); /*0x41472*/
        cocos2d::CCDirector::getWinSize(v28, &v35); /*0x41483*/
        v30 = v25 - (float)(v27 / *v29); /*0x4148d*/
      }
      v31 = **(_QWORD **)(a1 + 184); /*0x4149d*/
      v32 = *(_QWORD *)(a1 + 184); /*0x414a0*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v35, v21 - v30, 0.0); /*0x414b7*/
      (*(void (__fastcall **)(__int64, __int64))(v31 + 184))(v32, v33); /*0x414c3*/
    }
  }
}

// [11/11] Address: 0x414f0
// Method: BoomScrollLayer::ccTouchEnded
void __fastcall BoomScrollLayer_ccTouchEnded(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  float v6; // xmm6_4
  int v7; // edi
  unsigned __int32 v8; // xmm3_4
  double v9; // xmm2_8
  float v10; // xmm0_4
  float v11; // xmm1_4
  const struct cocos2d::CCPoint *v12; // rax
  cocos2d::CCArray *v13; // rcx
  float v14; // [rsp+20h] [rbp-48h] BYREF
  struct __timeb64 Time; // [rsp+28h] [rbp-40h] BYREF

  if ( *(_QWORD *)(a1 + 152) == a2 )
  {
    *(_QWORD *)(a1 + 152) = 0; /*0x4151c*/
    cocos2d::CCTouch::getLocationInView(a2, &v14); /*0x4153c*/
    v4 = cocos2d::CCDirector::sharedDirector(v3); /*0x41542*/
    v5 = cocos2d::CCDirector::convertToGL(v4, &Time, &v14); /*0x41555*/
    cocos2d::CCPoint::operator=(&v14, v5); /*0x41563*/
    v6 = v14 - *(float *)(a1 + 108); /*0x41574*/
    v7 = *(_DWORD *)(a1 + 268); /*0x41579*/
    ftime64(&Time); /*0x4157f*/
    v8 = _mm_load_si128((const __m128i *)&xmmword_831640).m128i_u32[0]; /*0x41594*/
    v9 = (double)Time.millitm / 1000.0 + (double)SLODWORD(Time.time) - *(double *)(a1 + 168); /*0x415b3*/
    if ( v9 == 0.0 ) /*0x415c1*/
      v10 = *(float *)(a1 + 212) + 1.0; /*0x415cb*/
    else
      v10 = COERCE_FLOAT(LODWORD(v6) & v8) / v9; /*0x415e2*/
    *(float *)(a1 + 112) = v10; /*0x415e9*/
    v11 = *(float *)(a1 + 240); /*0x415ee*/
    if ( COERCE_FLOAT(LODWORD(v6) & v8) >= v11
      || v10 > *(float *)(a1 + 208) && COERCE_FLOAT(LODWORD(v6) & v8) >= (float)(v11 * 0.25) )
    {
      v12 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 184) + 200LL))(*(_QWORD *)(a1 + 184)); /*0x41626*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&Time, v12); /*0x41634*/
      v7 = CCScrollLayerExt_moveToTop(a1 - 320); /*0x41646*/
      if ( v7 == *(_DWORD *)(a1 + 268) )
      {
        if ( v6 < 0.0
          && (*(_BYTE *)(a1 + 116)
           || (!*(_BYTE *)(a1 + 136)
             ? (v13 = *(cocos2d::CCArray **)(a1 + 160))
             : (v13 = *(cocos2d::CCArray **)(a1 + 128)),
               v7 < (int)(cocos2d::CCArray::count(v13) - 1))) )
        {
          ++v7; /*0x41688*/
        }
        else if ( v6 > 0.0 && (*(_BYTE *)(a1 + 116) || v7 > 0) ) /*0x41699*/
        {
          --v7; /*0x4169b*/
        }
      }
    }
    BoomScrollLayer_moveToPage(a1 - 320, v7); /*0x416ab*/
  }
}
