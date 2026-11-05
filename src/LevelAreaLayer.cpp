#include <Geode/binding/LevelAreaLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/10] Address: 0x3b320
// Method: LevelAreaLayer::addGodRay
// Hidden C++ exception states: #wind=2
cocos2d::CCArray *__fastcall LevelAreaLayer_addGodRay(__int64 a1, char a2)
{
  cocos2d::CCArray *v4; // r14
  __int64 v5; // rcx
  cocos2d::CCArray *v6; // rbp
  unsigned int v7; // edi
  __m128i si128; // xmm7
  __m128i v9; // xmm6
  cocos2d::CCString *v10; // rax
  const char *CString; // rax
  __int64 v12; // r8
  struct cocos2d::CCObject *v13; // rsi
  void *v14; // rcx
  __int64 v15; // rbx
  void *v16; // rcx
  __int128 v18; // [rsp+30h] [rbp-98h] BYREF
  __m128i v19; // [rsp+40h] [rbp-88h]
  __int128 v20; // [rsp+50h] [rbp-78h] BYREF
  __m128i v21; // [rsp+60h] [rbp-68h]

  v4 = cocos2d::CCDictionary::allKeys(*(cocos2d::CCDictionary **)(a1 + 328)); /*0x3b365*/
  v6 = (cocos2d::CCArray *)cocos2d::CCArray::create(v5); /*0x3b36e*/
  v7 = 0; /*0x3b371*/
  if ( cocos2d::CCArray::count(v4) ) /*0x3b376*/
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_830EF0); /*0x3b384*/
    v9 = _mm_load_si128((const __m128i *)&Size); /*0x3b38c*/
    do /*0x3b4c3*/
    {
      v10 = cocos2d::CCArray::objectAtIndex(v4, v7); /*0x3b39e*/
      CString = cocos2d::CCString::getCString(v10); /*0x3b3a7*/
      v18 = 0; /*0x3b3b0*/
      v19 = 0; /*0x3b3b8*/
      v12 = -1; /*0x3b3be*/
      do /*0x3b3c8*/
        ++v12; /*0x3b3c5*/
      while ( CString[v12] ); /*0x3b3c8*/
      sub_3C230(&v18); /*0x3b3d7*/
      v13 = (struct cocos2d::CCObject *)cocos2d::CCDictionary::objectForKey(*(_QWORD *)(a1 + 328), &v18); /*0x3b3ef*/
      if ( v19.m128i_i64[1] > 0xFuLL ) /*0x3b3fb*/
      {
        v14 = (void *)v18; /*0x3b400*/
        if ( (unsigned __int64)(v19.m128i_i64[1] + 1) >= 0x1000 ) /*0x3b40f*/
        {
          v14 = *(void **)(v18 - 8); /*0x3b415*/
          if ( (unsigned __int64)(v18 - (_QWORD)v14 - 8) > 0x1F ) /*0x3b424*/
            invoke_watson(0, 0, 0, 0, 0); /*0x3b53c*/
        }
        j_j_free(v14); /*0x3b42a*/
      }
      v19 = v9; /*0x3b42f*/
      LOBYTE(v18) = 0; /*0x3b435*/
      if ( !a2 ) /*0x3b43d*/
        goto LABEL_15; /*0x3b43d*/
      v20 = 0; /*0x3b442*/
      v21 = si128; /*0x3b447*/
      strcpy((char *)&v20, "un"); /*0x3b44d*/
      v15 = cocos2d::CCDictionary::objectForKey(v13, &v20); /*0x3b465*/
      if ( v21.m128i_i64[1] > 0xFuLL ) /*0x3b471*/
      {
        v16 = (void *)v20; /*0x3b476*/
        if ( (unsigned __int64)(v21.m128i_i64[1] + 1) >= 0x1000 ) /*0x3b485*/
        {
          v16 = *(void **)(v20 - 8); /*0x3b48b*/
          if ( (unsigned __int64)(v20 - (_QWORD)v16 - 8) > 0x1F ) /*0x3b49a*/
            invoke_watson(0, 0, 0, 0, 0); /*0x3b556*/
        }
        j_j_free(v16); /*0x3b4a0*/
      }
      if ( !v15 ) /*0x3b4a8*/
LABEL_15:
        cocos2d::CCArray::addObject(v6, v13); /*0x3b4b0*/
      ++v7; /*0x3b4b6*/
    }
    while ( v7 < cocos2d::CCArray::count(v4) ); /*0x3b4c3*/
  }
  if ( cocos2d::CCArray::count(v6) ) /*0x3b4cc*/
    qsort(*(void **)(*((_QWORD *)v6 + 7) + 16LL), **((unsigned int **)v6 + 7), 8u, CompareFunction); /*0x3b4ed*/
  return v6; /*0x3b4f6*/
}

// [2/10] Address: 0x3d9ab0
// Method: LevelAreaLayer::scene
// Hidden C++ exception states: #wind=1
__int64 __fastcall LevelAreaLayer_scene(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  cocos2d::CCLayer *v6; // rbx

  v4 = cocos2d::CCScene::create(a1, a2, a3, a4); /*0x3d9ac0*/
  *(_QWORD *)(cocos2d::CCApplication::sharedApplication(v5) + 232) = v4; /*0x3d9ac9*/
  v6 = (cocos2d::CCLayer *)operator new(0x1B8u); /*0x3d9ada*/
  cocos2d::CCLayer::CCLayer(v6); /*0x3d9ae5*/
  *(_QWORD *)v6 = &LevelAreaLayer::`vftable'; /*0x3d9af2*/
  *((_QWORD *)v6 + 40) = &LevelAreaLayer::`vftable'; /*0x3d9afc*/
  *((_QWORD *)v6 + 41) = &LevelAreaLayer::`vftable'; /*0x3d9b0a*/
  *((_QWORD *)v6 + 42) = &LevelAreaLayer::`vftable'; /*0x3d9b18*/
  *((_QWORD *)v6 + 43) = &LevelAreaLayer::`vftable'; /*0x3d9b26*/
  *((_QWORD *)v6 + 44) = &LevelAreaLayer::`vftable'; /*0x3d9b34*/
  *((_QWORD *)v6 + 51) = &LevelAreaLayer::`vftable'; /*0x3d9b42*/
  *((_QWORD *)v6 + 52) = 0; /*0x3d9b49*/
  *((_QWORD *)v6 + 53) = 0; /*0x3d9b54*/
  *((_WORD *)v6 + 216) = 0; /*0x3d9b5f*/
  if ( (unsigned __int8)LevelAreaLayer_init(v6) ) /*0x3d9b7e*/
  {
    cocos2d::CCObject::autorelease(v6); /*0x3d9b8e*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCLayer *, __int64))(*(_QWORD *)v6 + 8LL))(v6, 1); /*0x3d9b9e*/
    v6 = 0; /*0x3d9ba1*/
  }
  (*(void (__fastcall **)(__int64, cocos2d::CCLayer *))(*(_QWORD *)v4 + 464LL))(v4, v6); /*0x3d9bac*/
  return v4; /*0x3d9bb5*/
}

// [4/10] Address: 0x3dadf0
// Method: LevelAreaLayer::dialogClosed
void __fastcall LevelAreaLayer_dialogClosed(__int64 a1)
{
  *(_BYTE *)(a1 + 24) = 0; /*0x3dadf0*/
}

// [5/10] Address: 0x3dae00
// Method: LevelAreaLayer::onClickDoor
void __fastcall LevelAreaLayer_onClickDoor(__int64 *a1)
{
  __int64 v2; // rax
  struct cocos2d::CCActionInterval *v3; // rax
  struct cocos2d::CCAction *v4; // rax
  const struct cocos2d::CCPoint *v5; // rax
  struct cocos2d::CCActionInterval *v6; // rax
  struct cocos2d::CCAction *v7; // rax
  unsigned int i; // esi
  cocos2d::CCNode *v9; // rbx
  struct cocos2d::CCAction *v10; // rax
  struct cocos2d::CCFiniteTimeAction *v11; // rbx
  __int64 v12; // rax
  struct cocos2d::CCAction *v13; // rax
  char v14; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_BYTE *)a1 + 432) ) /*0x3dae06*/
  {
    v2 = *a1; /*0x3dae16*/
    *((_BYTE *)a1 + 432) = 1; /*0x3dae1b*/
    (*(void (__fastcall **)(__int64 *, _QWORD))(v2 + 992))(a1, 0); /*0x3dae22*/
    if ( a1[52] ) /*0x3dae28*/
    {
      v3 = cocos2d::CCScaleTo::create(1.4, 20.0); /*0x3dae58*/
      v4 = cocos2d::CCEaseExponentialIn::create(v3); /*0x3dae61*/
      cocos2d::CCNode::runAction((cocos2d::CCNode *)a1[52], v4); /*0x3dae71*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v14, 0.0, 1550.0); /*0x3dae87*/
      v6 = cocos2d::CCMoveBy::create(1.4, v5); /*0x3dae93*/
      v7 = cocos2d::CCEaseExponentialIn::create(v6); /*0x3dae9c*/
      cocos2d::CCNode::runAction((cocos2d::CCNode *)a1[52], v7); /*0x3daeac*/
      for ( i = 0; i < cocos2d::CCArray::count((cocos2d::CCArray *)a1[53]); ++i ) /*0x3daebb*/
      {
        v9 = cocos2d::CCArray::objectAtIndex((cocos2d::CCArray *)a1[53], i); /*0x3daee2*/
        cocos2d::CCNode::stopAllActions(v9); /*0x3daee5*/
        v10 = cocos2d::CCFadeTo::create(1.0, 0); /*0x3daef0*/
        cocos2d::CCNode::runAction(v9, v10); /*0x3daefc*/
      }
      v11 = cocos2d::CCDelayTime::create(1.0999999); /*0x3daf2d*/
      v12 = cocos2d::CCCallFunc::create(a1, PlayerObject_updateStreakBlend); /*0x3daf30*/
      v13 = cocos2d::CCSequence::create(v11, v12, 0); /*0x3daf3f*/
      cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v13); /*0x3daf4b*/
    }
  }
}

// [6/10] Address: 0x3db010
// Method: LevelAreaLayer::onEnterTower
// Hidden C++ exception states: #wind=2
bool LevelAreaLayer_onEnterTower()
{
  int v0; // ecx
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  struct cocos2d::CCScene *v4; // rbx
  __int64 v5; // rcx
  cocos2d::CCDirector *v6; // rax
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF
  void *v9; // [rsp+60h] [rbp+18h]

  v8[1] = 26471; /*0x3db023*/
  v8[2] = 10; /*0x3db028*/
  v8[3] = 15; /*0x3db031*/
  v8[0] = 0x6F2E3130726F6F64LL; /*0x3db042*/
  v0 = qword_905F60; /*0x3db059*/
  if ( !qword_905F60 ) /*0x3db063*/
  {
    v9 = operator new(0x8A8u); /*0x3db06f*/
    qword_905F60 = sub_5AE20(v9); /*0x3db07d*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x3db08e*/
    v0 = qword_905F60; /*0x3db090*/
  }
  FMODAudioEngine_playEffect(v0, (__int64)v8); /*0x3db09c*/
  v4 = (struct cocos2d::CCScene *)LevelAreaInnerLayer_scene(0, v1, v2, v3); /*0x3db0a8*/
  v6 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v5); /*0x3db0ab*/
  return cocos2d::CCDirector::replaceScene(v6, v4); /*0x3db0b7*/
}

// [8/10] Address: 0x3dbb30
// Method: LevelAreaLayer::onBack
// Hidden C++ exception states: #wind=1
void __fastcall LevelAreaLayer_onBack(_BYTE *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  struct cocos2d::CCScene *v5; // rax
  struct cocos2d::CCScene *v6; // rbx
  __int64 v7; // rcx
  cocos2d::CCDirector *v8; // rax
  void *v9; // [rsp+30h] [rbp+8h]

  if ( !a1[432] ) /*0x3dbb39*/
  {
    (*(void (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x3dbb4b*/
    if ( !qword_905FD0 ) /*0x3dbb5b*/
    {
      v9 = operator new(0x6E8u); /*0x3dbb67*/
      qword_905FD0 = sub_2723A0(v9); /*0x3dbb75*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3dbb86*/
    }
    sub_2732D0(); /*0x3dbb8f*/
    a1[433] = 1; /*0x3dbb94*/
    v5 = (struct cocos2d::CCScene *)LevelSelectLayer_scene(22, v2, v3, v4); /*0x3dbba0*/
    v6 = cocos2d::CCTransitionFade::create(0.5, v5); /*0x3dbbb6*/
    v8 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v7); /*0x3dbbb9*/
    cocos2d::CCDirector::replaceScene(v8, v6); /*0x3dbbca*/
  }
}

// [9/10] Address: 0x3dbbe0
// Method: LevelAreaLayer::onExit
void __fastcall LevelAreaLayer_onExit(cocos2d::CCLayer *a1)
{
  cocos2d::CCSpriteFrameCache *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  cocos2d::CCTextureCache *v5; // rax

  cocos2d::CCLayer::onExit(a1); /*0x3dbbe9*/
  if ( *((_BYTE *)a1 + 433) ) /*0x3dbbef*/
  {
    v2 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x3dbbf8*/
    cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(v2, "TowerSheet.plist"); /*0x3dbc08*/
    v5 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v4, v3); /*0x3dbc0e*/
    cocos2d::CCTextureCache::removeTextureForKey(v5, "TowerSheet.png"); /*0x3dbc23*/
  }
}

// [10/10] Address: 0x3dbc30
// Method: LevelAreaLayer::keyBackClicked
void __fastcall LevelAreaLayer_keyBackClicked(__int64 a1)
{
  LevelAreaLayer_onBack((_BYTE *)(a1 - 336)); /*0x3dbc39*/
}

// Address: 0x3db0d0
// Method: LevelAreaLayer::addTorch
// Hidden C++ exception states: #wind=1
double __fastcall LevelAreaLayer_addTorch(
        __int64 a1,
        __int64 a2,
        int a3,
        float a4,
        unsigned int a5,
        char a6,
        int a7,
        __int64 a8)
{
  const char *v11; // rdx
  __int64 v12; // r8
  const char *v13; // rcx
  struct cocos2d::CCSprite *v14; // r14
  const char *v15; // rcx
  struct cocos2d::CCSprite *v16; // r13
  __int64 v17; // rbx
  __int64 v18; // rax
  BOOL v19; // esi
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // edi
  cocos2d::CCArray *v24; // r12
  cocos2d::CCArray *v25; // r15
  cocos2d::CCString *v26; // rax
  const char *CString; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  cocos2d::CCSpriteFrameCache *v30; // rax
  struct cocos2d::CCObject *v31; // rax
  cocos2d::CCString *v32; // rax
  const char *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  cocos2d::CCSpriteFrameCache *v36; // rax
  struct cocos2d::CCObject *v37; // rax
  struct cocos2d::CCAnimation *v38; // rax
  struct cocos2d::CCActionInterval *v39; // rax
  struct cocos2d::CCAction *v40; // rax
  struct cocos2d::CCAnimation *v41; // rax
  struct cocos2d::CCActionInterval *v42; // rax
  struct cocos2d::CCAction *v43; // rax
  cocos2d::CCNode *v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // r15
  __int64 v49; // rdx
  struct cocos2d::CCActionInterval *v50; // rax
  struct cocos2d::CCFiniteTimeAction *v51; // rdi
  struct cocos2d::CCActionInterval *v52; // rax
  struct cocos2d::CCEaseInOut *v53; // rax
  struct cocos2d::CCActionInterval *v54; // rax
  struct cocos2d::CCAction *v55; // rax
  struct cocos2d::CCActionInterval *v56; // rax
  struct cocos2d::CCFiniteTimeAction *v57; // rdi
  struct cocos2d::CCActionInterval *v58; // rax
  struct cocos2d::CCEaseInOut *v59; // rax
  struct cocos2d::CCActionInterval *v60; // rax
  struct cocos2d::CCAction *v61; // rax
  cocos2d::CCArray *v62; // r12
  struct cocos2d::CCSprite *v63; // rsi
  __int64 v64; // rax
  __int64 v65; // rdi
  __int64 v66; // rax
  struct cocos2d::CCObject *v67; // rsi
  __int64 v68; // rax
  __int64 v69; // rdi
  __int64 v70; // rax
  __int64 v71; // rdx
  struct cocos2d::CCObject *v72; // rdi
  __int16 v74; // [rsp+20h] [rbp-A1h] BYREF
  char v75; // [rsp+22h] [rbp-9Fh]
  __int64 v76; // [rsp+28h] [rbp-99h] BYREF
  __int64 v77; // [rsp+30h] [rbp-91h] BYREF
  void (__fastcall ***v78)(__int64, __int16 *); // [rsp+38h] [rbp-89h]
  _BYTE v79[8]; // [rsp+40h] [rbp-81h] BYREF
  __int64 v80; // [rsp+48h] [rbp-79h]
  __int128 v81; // [rsp+50h] [rbp-71h] BYREF
  __int128 v82; // [rsp+60h] [rbp-61h]

  v80 = a1;
  v77 = a8;
  v11 = "Fire_01_looped_001.png";
  if ( a3 == 2 )
    v11 = "Fire_02_looped_001.png";
  v81 = 0;
  v82 = 0;
  v12 = -1;
  do
    ++v12;
  while ( v11[v12] );
  sub_3C230(&v81);
  v13 = (const char *)&v81;
  if ( *((_QWORD *)&v82 + 1) > 0xFu )
    v13 = (const char *)v81;
  v14 = cocos2d::CCSprite::createWithSpriteFrameName(v13);
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, _QWORD))(*(_QWORD *)a1 + 456LL))(a1, v14, a5 - 2);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(*(_QWORD *)v14 + 184LL))(v14, a2);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v14 + 160LL))(v14);
  v15 = (const char *)&v81;
  if ( *((_QWORD *)&v82 + 1) > 0xFu )
    v15 = (const char *)v81;
  v16 = cocos2d::CCSprite::createWithSpriteFrameName(v15);
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, _QWORD))(*(_QWORD *)a1 + 456LL))(a1, v16, a5 - 3);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v14 + 168LL))(v14);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v16 + 160LL))(v16);
  v17 = *(_QWORD *)v16;
  v18 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v14 + 200LL))(v14);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v17 + 184))(v16, v18);
  v74 = 13055;
  v75 = 0;
  (**((void (__fastcall ***)(__int64, __int16 *))v14 + 40))((__int64)v14 + 320, &v74);
  v74 = -1;
  v75 = 0;
  (**((void (__fastcall ***)(__int64, __int16 *))v16 + 40))((__int64)v16 + 320, &v74);
  v19 = a3 == 2;
  v76 = cocos2d::CCArray::create(v20);
  v22 = cocos2d::CCArray::create(v21);
  v23 = 1;
  v24 = (cocos2d::CCArray *)v76;
  v25 = (cocos2d::CCArray *)v22;
  do
  {
    v26 = cocos2d::CCString::createWithFormat("Fire_0%i_looped_%03i.png", v19 + 1, v23);
    CString = cocos2d::CCString::getCString(v26);
    v30 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(v29, v28);
    v31 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v30, CString);
    cocos2d::CCArray::addObject(v24, v31);
    v32 = cocos2d::CCString::createWithFormat("Fire_0%i_2_looped_%03i.png", v19 + 1, v23);
    v33 = cocos2d::CCString::getCString(v32);
    v36 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(v35, v34);
    v37 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v36, v33);
    cocos2d::CCArray::addObject(v25, v37);
    ++v23;
  }
  while ( v23 <= 9 );
  v38 = cocos2d::CCAnimation::createWithSpriteFrames(v24, 0.079999998);
  v39 = cocos2d::CCAnimate::create(v38);
  v40 = cocos2d::CCRepeatForever::create(v39);
  cocos2d::CCNode::runAction(v14, v40);
  v41 = cocos2d::CCAnimation::createWithSpriteFrames(v25, 0.079999998);
  v42 = cocos2d::CCAnimate::create(v41);
  v43 = cocos2d::CCRepeatForever::create(v42);
  cocos2d::CCNode::runAction(v16, v43);
  v44 = cocos2d::CCSprite::createWithSpriteFrameName("towerShine.png");
  v78 = (void (__fastcall ***)(__int64, __int16 *))v44;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v79, 0.0, -10.0);
  v46 = v45;
  v47 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v14 + 200LL))(v14);
  cocos2d::CCPoint::operator+(v47, &v76, v46);
  (*(void (__fastcall **)(cocos2d::CCNode *, __int64 *))(*(_QWORD *)v44 + 184LL))(v44, &v76);
  v48 = v80;
  (*(void (__fastcall **)(__int64, cocos2d::CCNode *, _QWORD))(*(_QWORD *)v80 + 456LL))(v80, v44, a5 - 1);
  (*(void (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v44 + 160LL))(v44);
  v76 = 0x100000302LL;
  (**((void (__fastcall ***)(__int64, __int64))v44 + 43))((__int64)v44 + 344, 0x100000302LL);
  LOBYTE(v49) = -116;
  (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v44 + 40) + 40LL))((__int64)v44 + 320, v49);
  v74 = -14081;
  v75 = 0;
  (**((void (__fastcall ***)(__int64, __int16 *))v44 + 40))((__int64)v44 + 320, &v74);
  v50 = cocos2d::CCFadeTo::create(1.6, 0x70u);
  v51 = cocos2d::CCEaseInOut::create(v50, 1.3);
  v52 = cocos2d::CCFadeTo::create(1.6, 0x9Du);
  v53 = cocos2d::CCEaseInOut::create(v52, 1.3);
  v54 = cocos2d::CCSequence::create(v51, v53, 0);
  v55 = cocos2d::CCRepeatForever::create(v54);
  cocos2d::CCNode::runAction(v44, v55);
  v56 = cocos2d::CCScaleTo::create(1.0, a4 + a4);
  v57 = cocos2d::CCEaseInOut::create(v56, 1.5);
  v58 = cocos2d::CCScaleTo::create(1.0, (float)(a4 + a4) * 1.2);
  v59 = cocos2d::CCEaseInOut::create(v58, 1.5);
  v60 = cocos2d::CCSequence::create(v57, v59, 0);
  v61 = cocos2d::CCRepeatForever::create(v60);
  cocos2d::CCNode::runAction(v44, v61);
  v62 = (cocos2d::CCArray *)v77;
  if ( !a6 )
  {
    v63 = cocos2d::CCSprite::createWithSpriteFrameName("towerTorch_001.png");
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, _QWORD))(*(_QWORD *)v48 + 456LL))(v48, v63, a5);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v79, 0.5, -18.0);
    v65 = v64;
    v66 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v14 + 200LL))(v14);
    cocos2d::CCPoint::operator+(v66, &v77, v65);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64 *))(*(_QWORD *)v63 + 184LL))(v63, &v77);
  }
  v67 = cocos2d::CCSprite::createWithSpriteFrameName("towerShine.png");
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v79, 0.0, -14.0);
  v69 = v68;
  v70 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v14 + 200LL))(v14);
  cocos2d::CCPoint::operator+(v70, &v77, v69);
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64 *))(*(_QWORD *)v67 + 184LL))(v67, &v77);
  (*(void (__fastcall **)(__int64, struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v48 + 456LL))(v48, v67, a5 + 1);
  (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v67 + 160LL))(v67);
  (**((void (__fastcall ***)(__int64, __int64))v67 + 43))((__int64)v67 + 344, 0x100000302LL);
  LOBYTE(v71) = 122;
  (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v67 + 40) + 40LL))((__int64)v67 + 320, v71);
  v74 = -26881;
  v75 = 0;
  (**((void (__fastcall ***)(__int64, __int16 *))v67 + 40))((__int64)v67 + 320, &v74);
  if ( a7 == 1 )
  {
    v74 = 50;
    v75 = 127;
    (**((void (__fastcall ***)(__int64, __int16 *))v14 + 40))((__int64)v14 + 320, &v74);
    v74 = 10837;
    v75 = -40;
    (**((void (__fastcall ***)(__int64, __int16 *))v16 + 40))((__int64)v16 + 320, &v74);
    v74 = 12950;
    v75 = -1;
    v72 = (struct cocos2d::CCObject *)v78;
    (*v78[40])((__int64)(v78 + 40), &v74);
    v74 = 130;
    v75 = -1;
    (**((void (__fastcall ***)(__int64, __int16 *))v67 + 40))((__int64)v67 + 320, &v74);
  }
  else
  {
    v72 = (struct cocos2d::CCObject *)v78;
  }
  if ( v62 )
  {
    cocos2d::CCArray::addObject(v62, v14);
    cocos2d::CCArray::addObject(v62, v16);
    cocos2d::CCArray::addObject(v62, v72);
    cocos2d::CCArray::addObject(v62, v67);
  }
  return sub_3C310(&v81);
}

// Address: 0x3d9bc0
// Method: LevelAreaLayer::init
// Hidden C++ exception states: #wind=7
bool __fastcall LevelAreaLayer_init(__int64 a1)
{
  bool result; // al
  __int64 v3; // rcx
  __int64 v4; // rcx
  cocos2d::CCObject *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  cocos2d::CCTextureCache *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  cocos2d::CCSpriteFrameCache *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  cocos2d::CCObject *v17; // rsi
  struct cocos2d::CCMenu *v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rcx
  cocos2d::CCDirector *v21; // rax
  float v22; // xmm6_4
  __int64 v23; // rcx
  cocos2d::CCDirector *v24; // rax
  float v25; // xmm0_4
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  cocos2d::CCString *v29; // rax
  const char *CString; // rax
  struct cocos2d::CCSprite *v31; // rdi
  cocos2d::CCTexture2D *v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rax
  cocos2d::CCNode *v37; // rdi
  __int64 v38; // rbx
  __int64 v39; // rax
  struct cocos2d::CCActionInterval *v40; // rax
  struct cocos2d::CCFiniteTimeAction *v41; // rbx
  struct cocos2d::CCActionInterval *v42; // rax
  struct cocos2d::CCEaseInOut *v43; // rax
  struct cocos2d::CCActionInterval *v44; // rax
  struct cocos2d::CCAction *v45; // rax
  struct cocos2d::CCSprite *v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rbx
  __int64 v49; // rax
  struct cocos2d::CCSprite *v50; // r15
  cocos2d::CCObject *v51; // rsi
  struct cocos2d::CCMenu *v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rbx
  __int64 v55; // rax
  __int64 v56; // rbx
  __int64 v57; // rax
  int v58; // r15d
  struct cocos2d::CCSprite *v59; // rdi
  char *v60; // rsi
  float v61; // xmm1_4
  __int64 v62; // rbx
  __int64 v63; // rax
  __int64 v64; // rdx
  struct cocos2d::CCSprite *v65; // rdi
  char *v66; // rsi
  __int64 v67; // rbx
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rbx
  __int64 v72; // rax
  const struct cocos2d::CCPoint *v73; // rax
  struct cocos2d::CCActionInterval *v74; // rax
  struct cocos2d::CCFiniteTimeAction *v75; // rbx
  const struct cocos2d::CCPoint *v76; // rax
  struct cocos2d::CCActionInterval *v77; // rax
  struct cocos2d::CCEaseInOut *v78; // rax
  struct cocos2d::CCActionInterval *v79; // rax
  struct cocos2d::CCAction *v80; // rax
  __int64 v81; // rax
  int v82; // edx
  int v83; // r8d
  int v84; // r9d
  __int64 v85; // rax
  int v86; // edx
  int v87; // r8d
  int v88; // r9d
  __int64 v89; // rax
  int v90; // edx
  int v91; // r8d
  int v92; // r9d
  __int64 v93; // rax
  int v94; // edx
  int v95; // r8d
  int v96; // r9d
  __int64 v97; // rax
  int v98; // edx
  int v99; // r8d
  int v100; // r9d
  __int64 v101; // rax
  int v102; // edx
  int v103; // r8d
  int v104; // r9d
  __int64 v105; // rdx
  __int64 v106; // r8
  __int64 v107; // r9
  struct cocos2d::CCParticleSystemQuad *v108; // rdi
  void *v109; // rcx
  __int64 v110; // rbx
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rbx
  float v114; // xmm6_4
  float *v115; // rax
  __int64 v116; // rbx
  __int64 v117; // rax
  __int64 v118; // r8
  __int64 v119; // rcx
  __int64 v120; // rbx
  struct cocos2d::CCFiniteTimeAction *v121; // rax
  struct cocos2d::CCAction *v122; // rax
  int v123; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v124; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v125; // [rsp+50h] [rbp-B0h] BYREF
  float v126; // [rsp+58h] [rbp-A8h] BYREF
  float v127; // [rsp+5Ch] [rbp-A4h]
  char v128[8]; // [rsp+60h] [rbp-A0h] BYREF
  void *v129; // [rsp+68h] [rbp-98h] BYREF
  _QWORD Src[4]; // [rsp+70h] [rbp-90h] BYREF
  void *Block[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v132; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v133; // [rsp+A8h] [rbp-58h]
  _DWORD v134[4]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v135[66]; // [rsp+C0h] [rbp-40h] BYREF
  char v136[40]; // [rsp+1C8h] [rbp+C8h] BYREF

  result = cocos2d::CCLayer::init((cocos2d::CCLayer *)a1);
  if ( result )
  {
    v124 = (__int64)Block;
    v132 = 11;
    v133 = 15;
    Block[0] = (void *)0x2E31307265776F74LL;
    Block[1] = &loc_33706D;
    if ( !qword_905FD0 )
    {
      v129 = operator new(0x6E8u);
      qword_905FD0 = sub_2723A0(v129);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
    }
    GameManager_fadeInMusic(v3, (__int64)Block);
    v5 = (cocos2d::CCObject *)cocos2d::CCArray::create(v4);
    *(_QWORD *)(a1 + 424) = v5;
    cocos2d::CCObject::retain(v5);
    v8 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v7, v6);
    cocos2d::CCTextureCache::addImage(v8, "TowerSheet.png", 0);
    v11 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(v10, v9);
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(v11, "TowerSheet.plist");
    LOBYTE(v12) = 1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 992LL))(a1, v12);
    LOBYTE(v13) = 1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 1008LL))(a1, v13);
    v15 = cocos2d::CCDirector::sharedDirector(v14);
    cocos2d::CCDirector::getWinSize(v15, &v126);
    v16 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_arrow_03_001.png");
    v17 = CCMenuItemSpriteExtra_create(v16, 0, a1, (__int64)LevelAreaLayer_onBack);
    *((_DWORD *)v17 + 93) = 1070386381;
    v18 = cocos2d::CCMenu::create(v17, 0);
    (*(void (__fastcall **)(__int64, struct cocos2d::CCMenu *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v18, 1);
    v19 = *(_QWORD *)v18;
    v21 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v20);
    v22 = cocos2d::CCDirector::getScreenTop(v21) - 23.0;
    v24 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v23);
    v25 = cocos2d::CCDirector::getScreenLeft(v24) + 24.0;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v124, v25, v22);
    (*(void (__fastcall **)(struct cocos2d::CCMenu *, __int64))(v19 + 184))(v18, v26);
    if ( *(_BYTE *)(cocos2d::CCApplication::sharedApplication(v27) + 209) )
      sub_6DEB0(a1, v17);
    v28 = qword_905FD0;
    if ( !qword_905FD0 )
    {
      v124 = (__int64)operator new(0x6E8u);
      qword_905FD0 = sub_2723A0(v124);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
      v28 = qword_905FD0;
    }
    GameManager_loadBackground(v28, 23);
    v29 = cocos2d::CCString::createWithFormat("game_bg_%02d_001.png", 23);
    CString = cocos2d::CCString::getCString(v29);
    v31 = cocos2d::CCSprite::create(CString);
    v134[0] = 9729;
    v134[1] = 9729;
    v134[2] = 10497;
    v134[3] = 10497;
    v32 = (cocos2d::CCTexture2D *)(*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v31 + 43) + 16LL))((__int64)v31 + 344);
    cocos2d::CCTexture2D::setTexParameters(v32, (struct cocos2d::_ccTexParams *)v134);
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(
      a1,
      v31,
      4294967293LL);
    v33 = *(_QWORD *)v31;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v124, 0.0, 0.0);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v33 + 288))(v31, v34);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v31 + 160LL))(v31);
    v35 = *(_QWORD *)v31;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v124, 0.0, -50.0);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v35 + 184))(v31, v36);
    LOWORD(v123) = 15360;
    BYTE2(v123) = -76;
    (**((void (__fastcall ***)(__int64, int *))v31 + 40))((__int64)v31 + 320, &v123);
    LODWORD(v129) = 16776960;
    v123 = -1761607936;
    v37 = cocos2d::CCLayerGradient::create(
            (const struct cocos2d::_ccColor4B *)&v123,
            (const struct cocos2d::_ccColor4B *)&v129);
    v124 = 0x100000302LL;
    v38 = *(_QWORD *)v37;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v125, 0.0, 1.0);
    (*(void (__fastcall **)(cocos2d::CCNode *, __int64))(v38 + 288))(v37, v39);
    (**((void (__fastcall ***)(__int64, __int64))v37 + 54))((__int64)v37 + 432, v124);
    *((_BYTE *)v37 + 561) = 1;
    (*(void (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v37 + 136LL))(v37);
    (*(void (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v37 + 1048LL))(v37);
    (*(void (__fastcall **)(__int64, cocos2d::CCNode *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v37, 2);
    v40 = cocos2d::CCFadeTo::create(3.0, 0xFFu);
    v41 = cocos2d::CCEaseInOut::create(v40, 2.0);
    v42 = cocos2d::CCFadeTo::create(3.0, 0x96u);
    v43 = cocos2d::CCEaseInOut::create(v42, 2.0);
    v44 = cocos2d::CCSequence::create(v41, v43, 0);
    v45 = cocos2d::CCRepeatForever::create(v44);
    cocos2d::CCNode::runAction(v37, v45);
    v46 = cocos2d::CCSprite::createWithSpriteFrameName("theTower_01_001.png");
    *(_QWORD *)(a1 + 416) = v46;
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v46, 1);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 416) + 160LL))(*(_QWORD *)(a1 + 416));
    v47 = **(_QWORD **)(a1 + 416);
    v48 = *(_QWORD *)(a1 + 416);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v125, v126 * 0.5, v127 * 0.5);
    (*(void (__fastcall **)(__int64, __int64))(v47 + 184))(v48, v49);
    v50 = cocos2d::CCSprite::createWithSpriteFrameName("whiteSquare60_001.png");
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v50 + 120LL))(v50);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v50 + 136LL))(v50);
    v51 = CCMenuItemSpriteExtra_create((int)v50, 0, a1, (__int64)LevelAreaLayer_onClickDoor);
    Src[1] = 26471;
    Src[2] = 10;
    Src[3] = 15;
    Src[0] = 0x6F2E3230726F6F64LL;
    v125 = Src;
    if ( (_QWORD *)((char *)v51 + 416) != Src )
      sub_3F5A0((char *)v51 + 416, Src, 0xAu);
    sub_3C310(Src);
    v52 = cocos2d::CCMenu::create(v51, 0);
    (*(void (__fastcall **)(__int64, struct cocos2d::CCMenu *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v52, 10);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v125, 0.0, -75.0);
    v54 = v53;
    v55 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 416) + 200LL))(*(_QWORD *)(a1 + 416));
    cocos2d::CCPoint::operator+(v55, &v124, v54);
    v56 = *(_QWORD *)v51;
    cocos2d::CCNode::convertToNodeSpace(v52, &v129, &v124);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v56 + 184))(v51, v57);
    (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v50 + 40) + 40LL))((__int64)v50 + 320, 0);
    v58 = 0;
    LOWORD(v123) = 0;
    do
    {
      v59 = cocos2d::CCSprite::createWithSpriteFrameName("godray01_001.png");
      v60 = (char *)v59 + 320;
      (**((void (__fastcall ***)(__int64, unsigned int *))v59 + 40))((__int64)v59 + 320, &dword_6FEB70);
      (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(
        a1,
        v59,
        0xFFFFFFFFLL);
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v59 + 120LL))(v59);
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v59 + 136LL))(v59);
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v59 + 352LL))(v59);
      if ( v58 )
        v61 = v126;
      else
        v61 = 0.0;
      v62 = *(_QWORD *)v59;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v125, v61, v127 * 0.5);
      (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v62 + 184))(v59, v63);
      LOBYTE(v64) = 125;
      (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v60 + 40LL))(v60, v64);
      LOWORD(v123) = 0;
      BYTE2(v123) = 50;
      (**(void (__fastcall ***)(char *, int *))v60)(v60, &v123);
      ++v58;
    }
    while ( v58 < 2 );
    v65 = cocos2d::CCSprite::createWithSpriteFrameName("godray01_001.png");
    v66 = (char *)v65 + 320;
    (**((void (__fastcall ***)(__int64, unsigned int *))v65 + 40))((__int64)v65 + 320, &dword_6FEB70);
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(
      a1,
      v65,
      0xFFFFFFFFLL);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v65 + 120LL))(v65);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v65 + 136LL))(v65);
    v67 = *(_QWORD *)v65;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v125, v126 * 0.5, 0.0);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v67 + 184))(v65, v68);
    LOBYTE(v69) = 125;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v66 + 40LL))(v66, v69);
    LOWORD(v123) = 0;
    BYTE2(v123) = 50;
    (**(void (__fastcall ***)(char *, int *))v66)(v66, &v123);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v125, 0.0, -2.0);
    v71 = v70;
    v72 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 416) + 200LL))(*(_QWORD *)(a1 + 416));
    cocos2d::CCPoint::operator+(v72, &v124, v71);
    (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 416) + 184LL))(*(_QWORD *)(a1 + 416), &v124);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v125, 0.0, 4.0);
    v74 = cocos2d::CCMoveBy::create(2.0, v73);
    v75 = cocos2d::CCEaseInOut::create(v74, 2.0);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v125, 0.0, -4.0);
    v77 = cocos2d::CCMoveBy::create(2.0, v76);
    v78 = cocos2d::CCEaseInOut::create(v77, 2.0);
    v79 = cocos2d::CCSequence::create(v75, v78, 0);
    v80 = cocos2d::CCRepeatForever::create(v79);
    cocos2d::CCNode::runAction(*(cocos2d::CCNode **)(a1 + 416), v80);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v128, v126 * 0.5, (float)(v127 * 0.5) + 13.0);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v125, 0.0, 0.0);
    cocos2d::CCPoint::operator+(v128, &v124, v81);
    sub_3DB780(a1, v82, v83, v84, 1084227584, 1082130432, (__int64)&v124);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v125, 0.0, 10.0);
    cocos2d::CCPoint::operator+(v128, &v124, v85);
    sub_3DB780(a1, v86, v87, v88, 1077936128, 1075838976, (__int64)&v124);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v125, 0.0, 20.0);
    cocos2d::CCPoint::operator+(v128, &v124, v89);
    sub_3DB780(a1, v90, v91, v92, 1082130432, 1077936128, (__int64)&v124);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v125, 0.0, -20.0);
    cocos2d::CCPoint::operator+(v128, &v124, v93);
    sub_3DB780(a1, v94, v95, v96, 1086324736, 1075838976, (__int64)&v124);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v125, 0.0, -10.0);
    cocos2d::CCPoint::operator+(v128, &v124, v97);
    sub_3DB780(a1, v98, v99, v100, 1084227584, 1080033280, (__int64)&v124);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v125, 0.0, 10.0);
    cocos2d::CCPoint::operator+(v128, &v124, v101);
    sub_3DB780(a1, v102, v103, v104, 1083179008, 1075838976, (__int64)&v124);
    *(_OWORD *)Block = 0;
    v132 = 0;
    v133 = 0;
    Block[0] = (void *)sub_3C460(160);
    v132 = 159;
    v133 = 159;
    strcpy(
      (char *)Block[0],
      "60a-1a8a2a6a90a90a0a2a45a70a0a0a0a0a0a0a1a0a0a0a1a0a0.886275a0a0a0a0a0.7a1a0a0a0a1a0a0.552941a0a0a0a0a0.7a2a0a2a0a"
      "0a0a0a0a0a0a0a2a1a0a0a0a0a0a0a0a0a0a0a0a0a0a0");
    if ( v132 )
    {
      sub_6AE20(v135, v105, v106, v107);
      KeyframeObject_setupSpline((__int64 *)Block, (__int64)v135);
      v108 = GameToolbox_particleFromStruct(v135, 0, 0);
      sub_3C310(v136);
    }
    else
    {
      v108 = 0;
    }
    if ( v133 > 0xF )
    {
      v109 = Block[0];
      if ( v133 + 1 >= 0x1000 )
      {
        v109 = (void *)*((_QWORD *)Block[0] - 1);
        if ( (unsigned __int64)((char *)Block[0] - (char *)v109 - 8) > 0x1F )
          invoke_watson(0, 0, 0, 0, 0);
      }
      j_j_free(v109);
    }
    v132 = 0;
    v133 = 15;
    LOBYTE(Block[0]) = 0;
    (*(void (__fastcall **)(__int64, struct cocos2d::CCParticleSystemQuad *, _QWORD))(*(_QWORD *)a1 + 456LL))(
      a1,
      v108,
      0);
    (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *))(*(_QWORD *)v108 + 352LL))(v108);
    v110 = *(_QWORD *)v108;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v125, 100.0, 40.0);
    (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *, __int64))(v110 + 952))(v108, v111);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v125, -100.0, 60.0);
    cocos2d::CCPoint::operator+(v128, &v124, v112);
    (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *, __int64 *))(*(_QWORD *)v108 + 184LL))(v108, &v124);
    v113 = 20;
    do
    {
      (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *))(*(_QWORD *)v108 + 32LL))(v108);
      --v113;
    }
    while ( v113 );
    v114 = (float)(*(float *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 416) + 320LL))(*(_QWORD *)(a1 + 416))
                            + 4)
                 * 0.5)
         - 69.5;
    v115 = (float *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 416) + 320LL))(*(_QWORD *)(a1 + 416));
    v116 = *(_QWORD *)(a1 + 416);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v125, (float)(*v115 * 0.5) + 35.0, v114);
    LevelAreaLayer_addTorch(v116, v117, 1, 0.40000001, 6u, 0, 0, 0);
    v119 = qword_905FD0;
    if ( !qword_905FD0 )
    {
      v124 = (__int64)operator new(0x6E8u);
      qword_905FD0 = sub_2723A0(v124);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
      v119 = qword_905FD0;
    }
    if ( !(unsigned __int8)sub_27B350(v119, &word_755560, v118) )
    {
      *(_BYTE *)(a1 + 432) = 1;
      v120 = cocos2d::CCCallFunc::create(a1, sub_3DAAC0);
      v121 = cocos2d::CCDelayTime::create(1.2);
      v122 = cocos2d::CCSequence::create(v121, v120, 0);
      cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v122);
    }
    return 1;
  }
  return result;
}
