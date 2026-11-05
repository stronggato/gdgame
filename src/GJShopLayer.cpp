#include <Geode/binding/GJShopLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/10] Address: 0x3abd70
// Method: GJShopLayer::scene
// Hidden C++ exception states: #wind=1
__int64 __fastcall GJShopLayer_scene(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rsi
  __int64 v6; // rcx
  cocos2d::CCLayer *v7; // rdi

  v4 = a1; /*0x3abd84*/
  v5 = cocos2d::CCScene::create(a1, a2, a3, a4); /*0x3abd8c*/
  *(_QWORD *)(cocos2d::CCApplication::sharedApplication(v6) + 232) = v5; /*0x3abd95*/
  v7 = (cocos2d::CCLayer *)operator new(0x218u); /*0x3abda6*/
  cocos2d::CCLayer::CCLayer(v7); /*0x3abdb1*/
  *(_QWORD *)v7 = &GJShopLayer::`vftable'; /*0x3abdbe*/
  *((_QWORD *)v7 + 40) = &GJShopLayer::`vftable'; /*0x3abdc8*/
  *((_QWORD *)v7 + 41) = &GJShopLayer::`vftable'; /*0x3abdd6*/
  *((_QWORD *)v7 + 42) = &GJShopLayer::`vftable'; /*0x3abde4*/
  *((_QWORD *)v7 + 43) = &GJShopLayer::`vftable'; /*0x3abdf2*/
  *((_QWORD *)v7 + 44) = &GJShopLayer::`vftable'; /*0x3abe00*/
  *((_QWORD *)v7 + 51) = &GJShopLayer::`vftable'; /*0x3abe0e*/
  *((_QWORD *)v7 + 52) = &GJShopLayer::`vftable'; /*0x3abe1c*/
  *((_QWORD *)v7 + 53) = &GJShopLayer::`vftable'; /*0x3abe2a*/
  *((_BYTE *)v7 + 432) = 0; /*0x3abe31*/
  *((_QWORD *)v7 + 55) = 0; /*0x3abe3a*/
  *((_QWORD *)v7 + 56) = 0; /*0x3abe41*/
  *((_DWORD *)v7 + 114) = 0; /*0x3abe48*/
  *((_OWORD *)v7 + 29) = 0; /*0x3abe51*/
  *((_QWORD *)v7 + 60) = 0; /*0x3abe58*/
  *((_QWORD *)v7 + 61) = 15; /*0x3abe5f*/
  *((_BYTE *)v7 + 464) = 0; /*0x3abe6a*/
  *((_QWORD *)v7 + 62) = 0; /*0x3abe71*/
  *((_QWORD *)v7 + 63) = 0; /*0x3abe78*/
  *((_WORD *)v7 + 256) = 0; /*0x3abe7f*/
  *((_QWORD *)v7 + 65) = 0; /*0x3abe86*/
  *((_QWORD *)v7 + 66) = 0; /*0x3abe8d*/
  if ( (unsigned __int8)GJShopLayer_init(v7, v4) ) /*0x3abe99*/
  {
    cocos2d::CCObject::autorelease(v7); /*0x3abea5*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCLayer *, __int64))(*(_QWORD *)v7 + 8LL))(v7, 1); /*0x3abeb5*/
    v7 = 0; /*0x3abeb8*/
  }
  (*(void (__fastcall **)(__int64, cocos2d::CCLayer *))(*(_QWORD *)v5 + 464LL))(v5, v7); /*0x3abec4*/
  return v5; /*0x3abecd*/
}

// [3/10] Address: 0x3ae0b0
// Method: GJShopLayer::onExit
// Hidden C++ exception states: #wind=1
void __fastcall GJShopLayer_onExit(cocos2d::CCLayer *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  const void **v5; // rsi
  size_t v6; // r15
  const void **v7; // r12
  size_t v8; // rbp
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  void **v11; // r14
  void **v12; // rbx
  cocos2d::CCSpriteFrameCache *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  void *v17; // rcx
  size_t v18; // r14
  size_t v19; // rbp
  void **v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  void **v23; // rbx
  cocos2d::CCTextureCache *v24; // rax
  void *v25; // rcx
  void *Block[2]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v27; // [rsp+48h] [rbp-40h]

  cocos2d::CCLayer::onExit(a1); /*0x3ae0de*/
  v5 = (const void **)((char *)a1 + 464); /*0x3ae0e4*/
  v6 = (size_t)v5[2]; /*0x3ae0eb*/
  if ( 0x7FFFFFFFFFFFFFFFLL - v6 < 6 ) /*0x3ae103*/
    sub_8D90(v3, v2, v4); /*0x3ae34d*/
  v7 = v5; /*0x3ae109*/
  if ( (unsigned __int64)v5[3] > 0xF ) /*0x3ae111*/
    v7 = (const void **)*v5; /*0x3ae113*/
  *(_OWORD *)Block = 0; /*0x3ae119*/
  v27 = 0; /*0x3ae121*/
  v8 = v6 + 6; /*0x3ae127*/
  v9 = 15; /*0x3ae12b*/
  v10 = 15; /*0x3ae130*/
  v11 = Block; /*0x3ae132*/
  if ( v6 + 6 > 0xF ) /*0x3ae13f*/
  {
    v10 = v8 | 0xF; /*0x3ae144*/
    if ( (v8 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x3ae14a*/
    {
      if ( v10 < 0x16 ) /*0x3ae154*/
        v10 = 22; /*0x3ae154*/
    }
    else
    {
      v10 = 0x7FFFFFFFFFFFFFFFLL; /*0x3ae14c*/
    }
    v11 = (void **)sub_3C460(v10 + 1); /*0x3ae161*/
    Block[0] = v11; /*0x3ae164*/
  }
  *(_QWORD *)&v27 = v6 + 6; /*0x3ae169*/
  *((_QWORD *)&v27 + 1) = v10; /*0x3ae16e*/
  memcpy(v11, v7, v6); /*0x3ae17c*/
  qmemcpy((char *)v11 + v6, ".plist", 6); /*0x3ae187*/
  *((_BYTE *)v11 + v8) = 0; /*0x3ae198*/
  v12 = Block; /*0x3ae19d*/
  if ( *((_QWORD *)&v27 + 1) > 0xFu ) /*0x3ae1a8*/
    v12 = (void **)Block[0]; /*0x3ae1a8*/
  v13 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x3ae1ae*/
  cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(v13, (const char *)v12); /*0x3ae1ba*/
  v16 = *((_QWORD *)&v27 + 1); /*0x3ae1c1*/
  if ( *((_QWORD *)&v27 + 1) > 0xFu ) /*0x3ae1ca*/
  {
    v17 = Block[0]; /*0x3ae1cf*/
    if ( (unsigned __int64)(*((_QWORD *)&v27 + 1) + 1LL) >= 0x1000 ) /*0x3ae1de*/
    {
      v17 = (void *)*((_QWORD *)Block[0] - 1); /*0x3ae1e4*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v17 - 8) > 0x1F ) /*0x3ae1f3*/
        invoke_watson(0, 0, 0, 0, 0); /*0x3ae208*/
    }
    j_j_free(v17); /*0x3ae20f*/
  }
  v18 = (size_t)v5[2]; /*0x3ae214*/
  if ( 0x7FFFFFFFFFFFFFFFLL - v18 < 4 ) /*0x3ae222*/
    sub_8D90(v14, v16, v15); /*0x3ae347*/
  if ( (unsigned __int64)v5[3] > 0xF ) /*0x3ae22d*/
    v5 = (const void **)*v5; /*0x3ae22f*/
  *(_OWORD *)Block = 0; /*0x3ae235*/
  v27 = 0; /*0x3ae23d*/
  v19 = v18 + 4; /*0x3ae243*/
  v20 = Block; /*0x3ae247*/
  if ( v18 + 4 > 0xF ) /*0x3ae250*/
  {
    v9 = v19 | 0xF; /*0x3ae255*/
    if ( (v19 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x3ae25c*/
    {
      if ( v9 < 0x16 ) /*0x3ae26c*/
        v9 = 22; /*0x3ae26c*/
    }
    else
    {
      v9 = 0x7FFFFFFFFFFFFFFFLL; /*0x3ae25e*/
    }
    v20 = (void **)sub_3C460(v9 + 1); /*0x3ae279*/
    Block[0] = v20; /*0x3ae27c*/
  }
  *(_QWORD *)&v27 = v18 + 4; /*0x3ae281*/
  *((_QWORD *)&v27 + 1) = v9; /*0x3ae286*/
  memcpy(v20, v5, v18); /*0x3ae294*/
  *(_DWORD *)((char *)v20 + v18) = 1735290926; /*0x3ae299*/
  *((_BYTE *)v20 + v19) = 0; /*0x3ae2a1*/
  v23 = Block; /*0x3ae2a5*/
  if ( *((_QWORD *)&v27 + 1) > 0xFu ) /*0x3ae2b0*/
    v23 = (void **)Block[0]; /*0x3ae2b0*/
  v24 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v22, v21); /*0x3ae2b6*/
  cocos2d::CCTextureCache::removeTextureForKey(v24, (const char *)v23); /*0x3ae2c2*/
  if ( *((_QWORD *)&v27 + 1) > 0xFu ) /*0x3ae2d2*/
  {
    v25 = Block[0]; /*0x3ae2d7*/
    if ( (unsigned __int64)(*((_QWORD *)&v27 + 1) + 1LL) >= 0x1000 ) /*0x3ae2e6*/
    {
      v25 = (void *)*((_QWORD *)Block[0] - 1); /*0x3ae2ec*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v25 - 8) > 0x1F ) /*0x3ae2fb*/
        invoke_watson(0, 0, 0, 0, 0); /*0x3ae310*/
    }
    j_j_free(v25); /*0x3ae317*/
  }
}

// [4/10] Address: 0x3ae4b0
// Method: GJShopLayer::rewardedVideoFinished
struct cocos2d::CCAction *__fastcall GJShopLayer_rewardedVideoFinished(__int64 a1)
{
  cocos2d::CCNode *v1; // rdi
  __int64 v2; // rbx
  struct cocos2d::CCFiniteTimeAction *v3; // rax
  struct cocos2d::CCAction *v4; // rax

  v1 = (cocos2d::CCNode *)(a1 - 424); /*0x3ae4ba*/
  *(_BYTE *)(a1 - 424 + 512) = 0; /*0x3ae4c8*/
  v2 = cocos2d::CCCallFunc::create(a1 - 424, sub_3AE510); /*0x3ae4e0*/
  v3 = cocos2d::CCDelayTime::create(2.5); /*0x3ae4e3*/
  v4 = cocos2d::CCSequence::create(v3, v2, 0); /*0x3ae4f2*/
  return cocos2d::CCNode::runAction(v1, v4); /*0x3ae4fe*/
}

// [6/10] Address: 0x3af600
// Method: GJShopLayer::onBack
// Hidden C++ exception states: #wind=3
void __fastcall GJShopLayer_onBack(__int64 a1)
{
  __int64 v2; // rax
  cocos2d::CCTouchDispatcher *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  struct cocos2d::CCScene *v7; // rbx
  cocos2d::CCDirector *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  const struct cocos2d::CCPoint *v11; // rax
  struct cocos2d::CCActionInterval *v12; // rax
  struct cocos2d::CCFiniteTimeAction *v13; // rbx
  __int64 v14; // rax
  struct cocos2d::CCAction *v15; // rax
  __int64 v16; // rcx
  char v17[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+30h] [rbp-18h]
  __int64 v19; // [rsp+38h] [rbp-10h]
  char v20; // [rsp+50h] [rbp+8h] BYREF
  float v21; // [rsp+54h] [rbp+Ch]
  char *v22; // [rsp+60h] [rbp+18h] BYREF
  void *v23; // [rsp+68h] [rbp+20h]

  if ( !*(_BYTE *)(a1 + 432) ) /*0x3af60d*/
  {
    *(_BYTE *)(a1 + 432) = 1; /*0x3af61a*/
    v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x3af621*/
    v3 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2); /*0x3af62d*/
    cocos2d::CCTouchDispatcher::unregisterForcePrio(v3, (struct cocos2d::CCObject *)a1); /*0x3af639*/
    cocos2d::CCObject::retain((cocos2d::CCObject *)a1); /*0x3af642*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 512LL))(a1); /*0x3af64e*/
    if ( *(_DWORD *)(a1 + 456) ) /*0x3af654*/
    {
      LOBYTE(v4) = 1; /*0x3af65d*/
      v5 = SecretRewardsLayer_scene(v4); /*0x3af65f*/
    }
    else
    {
      v5 = GJGarageLayer_scene(); /*0x3af666*/
    }
    v7 = (struct cocos2d::CCScene *)v5; /*0x3af66b*/
    if ( v5 ) /*0x3af671*/
    {
      v8 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v6); /*0x3af677*/
      if ( cocos2d::CCDirector::replaceScene(v8, v7) ) /*0x3af683*/
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x3af699*/
        (*(void (__fastcall **)(struct cocos2d::CCScene *, __int64, __int64))(*(_QWORD *)v7 + 456LL))(v7, a1, 1000); /*0x3af6ae*/
        cocos2d::CCObject::release((cocos2d::CCObject *)a1); /*0x3af6b7*/
        v10 = cocos2d::CCDirector::sharedDirector(v9); /*0x3af6bd*/
        cocos2d::CCDirector::getWinSize(v10, &v20); /*0x3af6cb*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, 0.0, v21); /*0x3af6df*/
        v12 = cocos2d::CCMoveTo::create(0.30000001, v11); /*0x3af6f0*/
        v13 = cocos2d::CCEaseIn::create(v12, 2.0); /*0x3af707*/
        v14 = cocos2d::CCCallFunc::create(a1, sub_3E5B0); /*0x3af714*/
        v15 = cocos2d::CCSequence::create(v13, v14, 0); /*0x3af723*/
        cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v15); /*0x3af72f*/
        if ( *(_DWORD *)(a1 + 456) ) /*0x3af735*/
        {
          v22 = v17; /*0x3af747*/
          v17[15] = 0; /*0x3af74c*/
          v18 = 14; /*0x3af753*/
          v19 = 15; /*0x3af75c*/
          strcpy(v17, "secretLoop.mp3"); /*0x3af76d*/
          if ( !qword_905FD0 ) /*0x3af791*/
          {
            v23 = operator new(0x6E8u); /*0x3af79d*/
            qword_905FD0 = sub_2723A0(v23); /*0x3af7ab*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3af7bc*/
          }
          GameManager_fadeInMusic(v16, (__int64)v17); /*0x3af7c4*/
        }
        else
        {
          if ( !qword_905FD0 ) /*0x3af7de*/
          {
            v22 = (char *)operator new(0x6E8u); /*0x3af7ea*/
            qword_905FD0 = sub_2723A0(v22); /*0x3af7f8*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3af809*/
          }
          sub_2732D0(); /*0x3af812*/
        }
      }
    }
  }
}

// [7/10] Address: 0x3af830
// Method: GJShopLayer::keyBackClicked
void __fastcall GJShopLayer_keyBackClicked(__int64 a1)
{
  GJShopLayer_onBack(a1 - 336); /*0x3af839*/
}

// [9/10] Address: 0x3b0f00
// Method: GJShopLayer::dialogClosed
// Hidden C++ exception states: #wind=5
char __fastcall GJShopLayer_dialogClosed(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ecx
  struct cocos2d::CCLayerColor *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  cocos2d::CCTouchDispatcher *v12; // rax
  struct cocos2d::CCScene *v13; // rax
  struct cocos2d::CCScene *v14; // rbx
  __int64 v15; // rcx
  cocos2d::CCDirector *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rbx
  cocos2d::CCObject *v21; // rcx
  __int128 v23; // [rsp+30h] [rbp-28h] BYREF
  __int64 v24; // [rsp+40h] [rbp-18h]
  __int64 v25; // [rsp+48h] [rbp-10h]
  __int128 *v26; // [rsp+68h] [rbp+10h] BYREF
  void *v27; // [rsp+70h] [rbp+18h]

  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 1 ) /*0x3b0f21*/
  {
    v26 = &v23; /*0x3b0f2c*/
    v24 = 11; /*0x3b0f39*/
    v25 = 15; /*0x3b0f42*/
    *(_QWORD *)&v23 = 0x2E313030726F6F64LL; /*0x3b0f53*/
    *((_QWORD *)&v23 + 1) = 6776687; /*0x3b0f60*/
    v6 = qword_905F60; /*0x3b0f75*/
    if ( !qword_905F60 ) /*0x3b0f7f*/
    {
      v27 = operator new(0x8A8u); /*0x3b0f8b*/
      qword_905F60 = sub_5AE20(v27); /*0x3b0f99*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x3b0faa*/
      v6 = qword_905F60; /*0x3b0fac*/
    }
    FMODAudioEngine_playEffect_0(v6, (__int64)&v23, v4, v5, 1061997773); /*0x3b0fd1*/
    LODWORD(v26) = -16777216; /*0x3b0fe2*/
    v7 = cocos2d::CCLayerColor::create((const struct cocos2d::_ccColor4B *)&v26); /*0x3b0feb*/
    (*(void (__fastcall **)(__int64, struct cocos2d::CCLayerColor *, __int64))(*(_QWORD *)(a1 - 416) + 456LL))( /*0x3b100f*/
      a1 - 416,
      v7,
      1000);
    v8 = qword_905F60; /*0x3b1012*/
    if ( !qword_905F60 ) /*0x3b101c*/
    {
      v26 = (__int128 *)operator new(0x8A8u); /*0x3b1028*/
      qword_905F60 = sub_5AE20(v26); /*0x3b1036*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x3b1047*/
      v8 = qword_905F60; /*0x3b1049*/
    }
    v9 = *(_QWORD *)(v8 + 552); /*0x3b1050*/
    if ( v9 ) /*0x3b105a*/
      FMOD::ChannelControl::stop(v9); /*0x3b105c*/
    sub_3DB60(v8 + 1096); /*0x3b1069*/
    sub_3DB60(v8 + 1160); /*0x3b1075*/
    sub_3DB60(v8 + 1224); /*0x3b1081*/
    v11 = cocos2d::CCDirector::sharedDirector(v10); /*0x3b1086*/
    v12 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 144LL))(v11); /*0x3b1099*/
    cocos2d::CCTouchDispatcher::unregisterForcePrio(v12, (struct cocos2d::CCObject *)(a1 - 416)); /*0x3b10a6*/
    v13 = (struct cocos2d::CCScene *)GJGarageLayer_scene(); /*0x3b10ac*/
    v14 = cocos2d::CCTransitionFade::create(1.0, v13); /*0x3b10c2*/
    v16 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v15); /*0x3b10c5*/
    LOBYTE(v17) = cocos2d::CCDirector::replaceScene(v16, v14); /*0x3b10e0*/
  }
  else
  {
    LODWORD(v17) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x3b10ed*/
    if ( (_DWORD)v17 == 2 ) /*0x3b10f3*/
    {
      v26 = &v23; /*0x3b10fe*/
      v23 = 0; /*0x3b1106*/
      v24 = 4; /*0x3b110b*/
      v25 = 15; /*0x3b1114*/
      strcpy((char *)&v23, "0022"); /*0x3b1123*/
      v18 = qword_905FE0; /*0x3b112c*/
      if ( !qword_905FE0 ) /*0x3b1136*/
      {
        v27 = operator new(0x3E8u); /*0x3b1142*/
        qword_905FE0 = sub_2D2B40(v27); /*0x3b1150*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x3b1161*/
        v18 = qword_905FE0; /*0x3b1163*/
      }
      v17 = GameStatsManager_unlockSpecialChest(v18, (__int64)&v23); /*0x3b116f*/
      v19 = v17; /*0x3b1174*/
      if ( v17 ) /*0x3b117a*/
      {
        v20 = sub_55E830(*(unsigned int *)(v17 + 64), 0); /*0x3b118a*/
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(a1 - 416) + 456LL))(a1 - 416, v20, 100); /*0x3b11a7*/
        v21 = *(cocos2d::CCObject **)(v20 + 704); /*0x3b11aa*/
        if ( v21 ) /*0x3b11b4*/
          cocos2d::CCObject::release(v21); /*0x3b11b6*/
        *(_QWORD *)(v20 + 704) = v19; /*0x3b11bc*/
        cocos2d::CCObject::retain((cocos2d::CCObject *)v19); /*0x3b11c6*/
        if ( !*(_BYTE *)(v19 + 80) || (LODWORD(v17) = *(_DWORD *)(v20 + 696), *(_DWORD *)(v19 + 64) == (_DWORD)v17) ) /*0x3b11db*/
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v20 + 720) + 336LL))(*(_QWORD *)(v20 + 720), 0); /*0x3b11e9*/
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v20 + 720) + 936LL))(*(_QWORD *)(v20 + 720), 0); /*0x3b11fb*/
          LOBYTE(v17) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v20 + 712) + 336LL))( /*0x3b120d*/
                          *(_QWORD *)(v20 + 712),
                          0);
          *(_BYTE *)(v20 + 700) = 1; /*0x3b1213*/
          if ( *(_BYTE *)(v20 + 701) ) /*0x3b121a*/
            LOBYTE(v17) = RewardUnlockLayer_playRewardEffect(v20); /*0x3b1226*/
        }
      }
    }
  }
  return v17; /*0x3b10d1*/
}

// [10/10] Address: 0x3b1240
// Method: GJShopLayer::ccTouchBegan
// Hidden C++ exception states: #wind=3
char __fastcall GJShopLayer_ccTouchBegan(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  float v5; // xmm6_4
  float *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rcx
  char v10; // cl
  __int64 v11; // rax
  void *v12; // [rsp+30h] [rbp-58h]
  _BYTE v13[16]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v14; // [rsp+48h] [rbp-40h] BYREF
  __int64 v15; // [rsp+58h] [rbp-30h]
  __int64 v16; // [rsp+60h] [rbp-28h]
  char v17; // [rsp+90h] [rbp+8h] BYREF
  __int128 *v18; // [rsp+A8h] [rbp+20h] BYREF

  if ( *(_DWORD *)(a1 + 136) ) /*0x3b1258*/
    return 0; /*0x3b1261*/
  cocos2d::CCTouch::getLocation(a2, &v17); /*0x3b1273*/
  cocos2d::CCNode::convertToNodeSpace(a1 - 320, &v18, &v17); /*0x3b1290*/
  cocos2d::CCPoint::operator=(&v17, v4); /*0x3b12a1*/
  v5 = (float)(*(float *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 200) + 200LL))(*(_QWORD *)(a1 + 200)) /*0x3b12c4*/
                        + 4)
             - 45.0)
     + 10.0;
  v6 = (float *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 200) + 200LL))(*(_QWORD *)(a1 + 200)); /*0x3b12d6*/
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v13, *v6 - 40.0, v5, 80.0, 90.0); /*0x3b1306*/
  if ( cocos2d::CCRect::containsPoint((cocos2d::CCRect *)v13, (const struct cocos2d::CCPoint *)&v17) /*0x3b132e*/
    && !*(_BYTE *)(*(_QWORD *)(a1 + 200) + 757LL) )
  {
    v8 = qword_905FD0; /*0x3b133b*/
    if ( !qword_905FD0 ) /*0x3b1345*/
    {
      v18 = (__int128 *)operator new(0x6E8u); /*0x3b1351*/
      qword_905FD0 = sub_2723A0(v18); /*0x3b1362*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3b1373*/
      v8 = qword_905FD0; /*0x3b1375*/
    }
    if ( !(unsigned __int8)sub_27B350(v8, &word_755544, v7) ) /*0x3b1383*/
      goto LABEL_12; /*0x3b1383*/
    v18 = &v14; /*0x3b1395*/
    v14 = 0; /*0x3b13a0*/
    v15 = 4; /*0x3b13a5*/
    v16 = 15; /*0x3b13ae*/
    strcpy((char *)&v14, "0022"); /*0x3b13bd*/
    v9 = qword_905FE0; /*0x3b13c6*/
    if ( !qword_905FE0 ) /*0x3b13d0*/
    {
      v12 = operator new(0x3E8u); /*0x3b13dc*/
      qword_905FE0 = sub_2D2B40(v12); /*0x3b13ea*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x3b13fb*/
      v9 = qword_905FE0; /*0x3b13fd*/
    }
    if ( GameStatsManager_isSpecialChestUnlocked(v9, &v14) ) /*0x3b1409*/
LABEL_12:
      v10 = 0; /*0x3b1416*/
    else
      v10 = 1; /*0x3b1412*/
    v11 = *(_QWORD *)(a1 + 200); /*0x3b1418*/
    if ( *(int *)(v11 + 760) >= 5 || v10 ) /*0x3b142a*/
    {
      *(_DWORD *)(v11 + 760) = 2; /*0x3b1436*/
      GJShopLayer_showReactMessage(a1 - 320); /*0x3b1447*/
      if ( *(_DWORD *)(a1 + 208) == 9 ) /*0x3b1453*/
        *(_DWORD *)(*(_QWORD *)(a1 + 200) + 760LL) = 0; /*0x3b145c*/
    }
    else
    {
      sub_3B24E0(*(_QWORD *)(a1 + 200)); /*0x3b142f*/
    }
  }
  return 1; /*0x3b1468*/
}

// Address: 0x3aee10
// Method: GJShopLayer::didPurchaseItem
// Hidden C++ exception states: #wind=5
__int64 __fastcall GJShopLayer_didPurchaseItem(__int64 a1, _DWORD *a2)
{
  int v4; // ecx
  __int16 *v5; // rdx
  __int64 v6; // r8
  void **v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rbx
  int Stat; // eax
  void *v11; // rcx
  struct cocos2d::CCObject *v12; // rax
  __int64 v13; // rcx
  struct cocos2d::CCObject *v14; // rdi
  __int64 v15; // rbx
  cocos2d::CCArray *v16; // rax
  cocos2d::CCArray *v17; // rsi
  unsigned int v18; // edi
  struct cocos2d::CCObject *v19; // rbx
  __int64 result; // rax
  cocos2d::CCArray *v21; // rbx
  int v22; // r9d
  struct cocos2d::CCObject *v23; // rax
  int v24; // r9d
  struct cocos2d::CCObject *v25; // rax
  int v26; // r9d
  struct cocos2d::CCObject *v27; // rax
  int v28; // r9d
  struct cocos2d::CCObject *v29; // rax
  int v30; // r9d
  struct cocos2d::CCObject *v31; // rax
  cocos2d::CCLayerColor *DialogLayer; // rsi
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rbx
  __int64 v37; // rax
  _QWORD v38[2]; // [rsp+30h] [rbp-39h] BYREF
  __int128 *v39; // [rsp+40h] [rbp-29h] BYREF
  __int128 v40; // [rsp+48h] [rbp-21h] BYREF
  __int64 v41; // [rsp+58h] [rbp-11h]
  __int64 v42; // [rsp+60h] [rbp-9h]
  void *Block[2]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v44; // [rsp+78h] [rbp+Fh]
  unsigned __int64 v45; // [rsp+80h] [rbp+17h]

  v38[0] = Block;
  v44 = 13;
  v45 = 15;
  strcpy((char *)Block, "buyItem03.ogg");
  HIWORD(Block[1]) = 0;
  v4 = qword_905F60;
  if ( !qword_905F60 )
  {
    v39 = (__int128 *)operator new(0x8A8u);
    qword_905F60 = sub_5AE20(v39);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60);
    v4 = qword_905F60;
  }
  FMODAudioEngine_playEffect(v4, (__int64)Block);
  v5 = &word_732AF4;
  if ( a2[92] == 4 )
    v5 = &word_755560;
  *(_OWORD *)Block = 0;
  v44 = 0;
  v45 = 0;
  v6 = -1;
  do
    ++v6;
  while ( *((_BYTE *)v5 + v6) );
  sub_3C230(Block);
  v7 = Block;
  if ( v45 > 0xF )
    v7 = (void **)Block[0];
  v8 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    v39 = (__int128 *)operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v39);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v8 = qword_905FE0;
  }
  v9 = *(_QWORD *)(a1 + 32);
  Stat = GameStatsManager_getStat(v8, (const char *)v7);
  CCCounterLabel_setTargetCount(v9, Stat);
  if ( v45 > 0xF )
  {
    v11 = Block[0];
    if ( v45 + 1 >= 0x1000 )
    {
      v11 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v11 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v11);
  }
  v12 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 40), a2[80] - a2[81]);
  v14 = v12;
  if ( v12 )
  {
    v15 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v12 + 952LL))(v12);
    (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v14 + 936LL))(v14, 0);
    GJItemIcon_darkenStoreItem(v15, *(_DWORD *)(a1 + 48));
    v16 = (cocos2d::CCArray *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 480LL))(v15);
    v17 = v16;
    if ( v16 )
    {
      v18 = 0;
      if ( cocos2d::CCArray::count(v16) )
      {
        do
        {
          v19 = cocos2d::CCArray::objectAtIndex(v17, v18);
          if ( (*(unsigned int (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v19 + 56LL))(v19) == 1234 )
            (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v19 + 336LL))(v19, 0);
          ++v18;
        }
        while ( v18 < cocos2d::CCArray::count(v17) );
      }
    }
  }
  result = (unsigned int)(a2[86] - a2[87]);
  if ( (_DWORD)result == 12 )
  {
    result = (unsigned int)(a2[83] - a2[84]);
    if ( (_DWORD)result == 4 )
    {
      v21 = (cocos2d::CCArray *)cocos2d::CCArray::create(v13);
      v39 = &v40;
      LOWORD(v38[0]) = -1;
      BYTE2(v38[0]) = -1;
      v40 = 0;
      v41 = 0;
      v42 = 0;
      *(_QWORD *)&v40 = sub_3C460(48);
      v41 = 45;
      v42 = 47;
      strcpy((char *)v40, "Ah the <cl>shiny</c> thing, excellent choice.");
      Block[1] = 0;
      v44 = 7;
      v45 = 15;
      Block[0] = (void *)0x68637461726353LL;
      v23 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)Block, (unsigned int)&v40, 10, v22, 0, (__int64)v38);
      cocos2d::CCArray::addObject(v21, v23);
      v39 = &v40;
      LOWORD(v38[0]) = -1;
      BYTE2(v38[0]) = -1;
      v40 = 0;
      v41 = 0;
      v42 = 0;
      *(_QWORD *)&v40 = sub_3C460(96);
      v41 = 80;
      v42 = 95;
      strcpy((char *)v40, "I found it a while ago.<d030>\nYea<d010>.<d010>.<d010>. 'Found' is a good word...");
      Block[1] = 0;
      v44 = 7;
      v45 = 15;
      Block[0] = (void *)0x68637461726353LL;
      v25 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)Block, (unsigned int)&v40, 13, v24, 0, (__int64)v38);
      cocos2d::CCArray::addObject(v21, v25);
      v39 = &v40;
      LOWORD(v38[0]) = -1;
      BYTE2(v38[0]) = -1;
      v40 = 0;
      v41 = 0;
      v42 = 0;
      *(_QWORD *)&v40 = sub_3C460(80);
      v41 = 66;
      v42 = 79;
      strcpy((char *)v40, "Not sure what it does.<d020> If anyone asks you didnt buy it here.");
      Block[1] = 0;
      v44 = 7;
      v45 = 15;
      Block[0] = (void *)0x68637461726353LL;
      v27 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)Block, (unsigned int)&v40, 11, v26, 0, (__int64)v38);
      cocos2d::CCArray::addObject(v21, v27);
      v39 = &v40;
      LOWORD(v38[0]) = -1;
      BYTE2(v38[0]) = -1;
      v40 = 0;
      v41 = 0;
      v42 = 0;
      *(_QWORD *)&v40 = sub_3C460(32);
      v41 = 27;
      v42 = 31;
      strcpy((char *)v40, "I mean, <d040>buy it where?");
      Block[1] = 0;
      v44 = 7;
      v45 = 15;
      Block[0] = (void *)0x68637461726353LL;
      v29 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)Block, (unsigned int)&v40, 13, v28, 0, (__int64)v38);
      cocos2d::CCArray::addObject(v21, v29);
      v39 = &v40;
      LOWORD(v38[0]) = -1;
      BYTE2(v38[0]) = -1;
      v40 = 0;
      v41 = 0;
      v42 = 0;
      *(_QWORD *)&v40 = sub_3C460(32);
      v41 = 21;
      v42 = 31;
      strcpy((char *)v40, "<d010>.<d010>.<d010>.");
      Block[1] = 0;
      v44 = 7;
      v45 = 15;
      Block[0] = (void *)0x68637461726353LL;
      v31 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)Block, (unsigned int)&v40, 8, v30, 0, (__int64)v38);
      cocos2d::CCArray::addObject(v21, v31);
      DialogLayer = DialogLayer_createDialogLayer(0, (__int64)v21, 2u);
      (*(void (__fastcall **)(__int64, cocos2d::CCLayerColor *, __int64))(*(_QWORD *)(a1 - 408) + 456LL))(
        a1 - 408,
        DialogLayer,
        100);
      v34 = cocos2d::CCDirector::sharedDirector(v33);
      cocos2d::CCDirector::getWinSize(v34, v38);
      v35 = **((_QWORD **)DialogLayer + 70);
      v36 = *((_QWORD *)DialogLayer + 70);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v39, *(float *)v38 * 0.5, *((float *)v38 + 1) * 0.5);
      (*(void (__fastcall **)(__int64, __int64))(v35 + 184))(v36, v37);
      return sub_173300(DialogLayer);
    }
  }
  return result;
}

// Address: 0x3abef0
// Method: GJShopLayer::init
// Hidden C++ exception states: #wind=21
bool __fastcall GJShopLayer_init(__int64 a1, int a2)
{
  bool result; // al
  __int64 v5; // rcx
  __int64 v6; // rax
  cocos2d::CCTouchDispatcher *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r15
  __int64 v13; // rsi
  __int64 v14; // r13
  unsigned __int64 v15; // r12
  _BYTE *v16; // rbx
  unsigned __int64 v17; // rcx
  __int64 v18; // rbx
  void **v19; // rax
  void *v20; // rcx
  unsigned __int64 v21; // r12
  _BYTE *v22; // rbx
  unsigned __int64 v23; // rcx
  __int64 v24; // rbx
  cocos2d::CCArray *v25; // rax
  void *v26; // rcx
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // rcx
  _WORD *v29; // rbx
  void *v30; // rcx
  const char *v31; // rdx
  void **v32; // rdi
  cocos2d::CCArray *v33; // rcx
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rbx
  void **v36; // rax
  unsigned __int64 v37; // r12
  _BYTE *v38; // rbx
  unsigned __int64 v39; // rcx
  __int64 v40; // rbx
  void **v41; // rax
  void *v42; // rcx
  unsigned __int64 v43; // r12
  _BYTE *v44; // rbx
  unsigned __int64 v45; // rcx
  __int64 v46; // rbx
  cocos2d::CCArray *v47; // rax
  void *v48; // rcx
  unsigned __int64 v49; // r12
  unsigned __int64 v50; // rcx
  _WORD *v51; // rbx
  void *v52; // rcx
  void **v53; // rax
  void **v54; // rdx
  void **v55; // rbx
  cocos2d::CCTextureCache *v56; // rax
  __int64 v57; // r8
  unsigned __int64 v58; // rdx
  void *v59; // rcx
  size_t v60; // rcx
  unsigned __int64 v61; // rdx
  unsigned __int64 v62; // rbx
  void **v63; // rax
  void **v64; // rdx
  void **v65; // r8
  void **v66; // rbx
  cocos2d::CCSpriteFrameCache *v67; // rax
  unsigned __int64 v68; // rdx
  void *v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rax
  void **v75; // rdx
  __int64 v76; // r8
  struct cocos2d::CCSprite *v77; // rdi
  float v78; // xmm0_4
  float v79; // xmm0_4
  const char *v80; // rcx
  __int64 v81; // rbx
  __int64 v82; // rax
  __int64 v83; // rbx
  __int64 v84; // rax
  void **v85; // rcx
  struct cocos2d::CCSprite *v86; // rdi
  __int64 v87; // rbx
  __int64 v88; // rax
  char *v89; // rbx
  int v90; // ecx
  int v91; // ecx
  int v92; // ecx
  int v93; // ecx
  const char *v94; // rdx
  int v95; // eax
  __int64 v96; // rdi
  cocos2d::CCNode *v97; // rcx
  cocos2d::CCNode *v98; // rcx
  __int64 v99; // rdi
  __int64 v100; // rbx
  __int64 v101; // rax
  cocos2d::CCNode *v102; // rdi
  __int64 v103; // rbx
  struct cocos2d::CCFiniteTimeAction *v104; // rax
  struct cocos2d::CCAction *v105; // rax
  void **v106; // rdx
  __int64 v107; // r8
  struct cocos2d::CCSprite *v108; // rdi
  float v109; // xmm0_4
  float v110; // xmm0_4
  void **v111; // rcx
  __int64 v112; // rbx
  __int64 v113; // rax
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  struct cocos2d::CCSprite *v118; // rdi
  cocos2d::CCObject *v119; // rbx
  struct cocos2d::CCMenu *v120; // rdi
  __int64 v121; // rax
  __int64 v122; // rbx
  __int64 v123; // rax
  __int64 v124; // rdi
  __int64 v125; // rbx
  __int64 v126; // rax
  int v127; // eax
  cocos2d::CCObject *v128; // rax
  int v129; // eax
  cocos2d::CCObject *v130; // rax
  struct cocos2d::CCMenu *v131; // rdi
  __int64 v132; // rbx
  __int64 v133; // rcx
  cocos2d::CCDirector *v134; // rax
  float v135; // xmm6_4
  __int64 v136; // rcx
  cocos2d::CCDirector *v137; // rax
  float v138; // xmm0_4
  __int64 v139; // rax
  __int64 v140; // rcx
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // r8
  __int64 *v144; // rbx
  __int64 v145; // rcx
  __int64 v146; // rcx
  __int16 *v147; // rdx
  int Stat; // edi
  void **v149; // rbx
  __int64 v150; // rdi
  __int64 v151; // rbx
  __int64 v152; // rax
  __int64 v153; // rdi
  __int64 v154; // rbx
  __int64 v155; // rax
  __int128 *v156; // rdx
  __int64 v157; // r8
  const char *v158; // rcx
  struct cocos2d::CCSprite *v159; // rsi
  __int64 v160; // rax
  __int64 v161; // rbx
  __int64 v162; // rax
  cocos2d::CCParticleSystem *v163; // rdi
  __int64 v164; // rbx
  __int64 v165; // rax
  __int64 v166; // rbx
  __int64 v167; // rax
  __int64 v168; // rcx
  __int64 v169; // rcx
  __int64 v170; // rdi
  cocos2d::CCArray *v171; // rdi
  cocos2d::CCArray *v172; // rsi
  __int64 v173; // r8
  __int64 v174; // rcx
  char v175; // r15
  unsigned int i; // ebx
  struct cocos2d::CCObject *v177; // rax
  int v178; // ecx
  cocos2d::CCObject *v179; // rax
  __int64 v180; // rcx
  unsigned int v181; // ebx
  struct cocos2d::CCObject *v182; // r15
  int v183; // edi
  unsigned int v184; // ebx
  __int64 v185; // rcx
  char v186; // al
  bool v187; // r13
  char *StoreItem; // r12
  cocos2d::CCObject *v189; // rsi
  char v190; // cl
  const char *v191; // rcx
  struct cocos2d::CCLabelBMFont *v192; // r13
  __int64 v193; // rbx
  float *v194; // rax
  __int64 v195; // rax
  __int128 *v196; // rdx
  int v197; // ebx
  __int64 v198; // r8
  const char *v199; // rcx
  struct cocos2d::CCSprite *v200; // rdi
  float v201; // xmm6_4
  double v202; // xmm0_8
  __int64 v203; // rax
  __int64 v204; // rbx
  __int64 v205; // rax
  const struct cocos2d::CCPoint *v206; // rax
  cocos2d::CCNode *v207; // rbx
  __int64 v208; // rdx
  __int64 v209; // rcx
  cocos2d::CCArray *v210; // rcx
  __int64 v211; // rcx
  void (__fastcall ***v212)(_QWORD, cocos2d::CCNode *, _QWORD); // rcx
  __int64 v213; // rax
  __int16 v214; // [rsp+50h] [rbp-B0h] BYREF
  char v215; // [rsp+52h] [rbp-AEh]
  void **v216; // [rsp+58h] [rbp-A8h] BYREF
  void **v217; // [rsp+60h] [rbp-A0h] BYREF
  char v218; // [rsp+68h] [rbp-98h]
  cocos2d::CCArray *v219; // [rsp+70h] [rbp-90h] BYREF
  float v220; // [rsp+78h] [rbp-88h] BYREF
  float v221; // [rsp+7Ch] [rbp-84h]
  void *Src; // [rsp+80h] [rbp-80h]
  __int16 v223; // [rsp+90h] [rbp-70h] BYREF
  char v224; // [rsp+92h] [rbp-6Eh]
  int v225; // [rsp+A0h] [rbp-60h]
  void **v226; // [rsp+A8h] [rbp-58h] BYREF
  float v227[2]; // [rsp+B0h] [rbp-50h] BYREF
  float v228; // [rsp+B8h] [rbp-48h] BYREF
  float v229; // [rsp+BCh] [rbp-44h]
  void *v230; // [rsp+C0h] [rbp-40h]
  void *v231; // [rsp+C8h] [rbp-38h]
  _BYTE v232[16]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v233; // [rsp+E0h] [rbp-20h]
  __int64 v234; // [rsp+F0h] [rbp-10h]
  __int64 v235; // [rsp+F8h] [rbp-8h]
  void *Block[2]; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v237; // [rsp+110h] [rbp+10h]
  unsigned __int64 v238; // [rsp+118h] [rbp+18h]
  void *v239[2]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v240; // [rsp+130h] [rbp+30h]
  unsigned __int64 v241; // [rsp+138h] [rbp+38h]
  __int64 v242; // [rsp+140h] [rbp+40h] BYREF
  __int64 v243; // [rsp+148h] [rbp+48h]
  __int64 v244; // [rsp+150h] [rbp+50h]
  __int64 v245; // [rsp+158h] [rbp+58h]
  void *v246[2]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v247; // [rsp+170h] [rbp+70h]
  unsigned __int64 v248; // [rsp+178h] [rbp+78h]
  void *v249[2]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v250; // [rsp+190h] [rbp+90h]
  unsigned __int64 v251; // [rsp+198h] [rbp+98h]
  __int128 v252; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v253; // [rsp+1B0h] [rbp+B0h]
  unsigned __int64 v254; // [rsp+1B8h] [rbp+B8h]
  __int128 v255; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v256; // [rsp+1D0h] [rbp+D0h]
  unsigned __int64 v257; // [rsp+1D8h] [rbp+D8h]
  _QWORD v258[4]; // [rsp+1E0h] [rbp+E0h] BYREF

  v225 = a2;
  result = cocos2d::CCLayer::init((cocos2d::CCLayer *)a1);
  if ( !result )
    return result;
  v6 = cocos2d::CCDirector::sharedDirector(v5);
  v7 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 144LL))(v6);
  cocos2d::CCTouchDispatcher::registerForcePrio(v7, (struct cocos2d::CCObject *)a1, 2, 0);
  *(_DWORD *)(a1 + 456) = a2;
  v247 = 14;
  v248 = 15;
  strcpy((char *)v246, "shopBG_001.png");
  HIBYTE(v246[1]) = 0;
  *(_OWORD *)v249 = 0;
  v250 = 0;
  v251 = 0;
  v249[0] = (void *)sub_3C460(32);
  v250 = 17;
  v8 = 31;
  v251 = 31;
  strcpy((char *)v249[0], "storeDesk_001.png");
  *(_OWORD *)v239 = 0;
  v239[0] = (void *)sub_3C460(32);
  v240 = 16;
  v241 = 31;
  strcpy((char *)v239[0], "shopSign_001.png");
  sub_3F5A0((void *)(a1 + 464), "GJ_ShopSheet01", 0xEu);
  v243 = 0;
  v11 = 8;
  v244 = 8;
  v12 = 15;
  v245 = 15;
  v13 = 0x33706D2E706F6873LL;
  v242 = 0x33706D2E706F6873LL;
  v14 = 0x7FFFFFFFFFFFFFFFLL;
  switch ( *(_DWORD *)(a1 + 456) )
  {
    case 1:
      v240 = 17;
      memmove(v239[0], "shopSign2_001.png", 0x11u);
      *((_BYTE *)v239[0] + 17) = 0;
      v244 = 14;
      memmove(&v242, "secretShop.mp3", 0xEu);
      BYTE6(v243) = 0;
      goto LABEL_41;
    case 2:
      v240 = 17;
      memmove(v239[0], "shopSign3_001.png", 0x11u);
      *((_BYTE *)v239[0] + 17) = 0;
      v31 = "shop3.ogg";
      goto LABEL_40;
    case 3:
      sub_3F5A0((void *)(a1 + 464), "GJ_ShopSheet02", 0xEu);
      v37 = v248;
      if ( v248 < 0x11 )
      {
        v39 = v248 >> 1;
        if ( v248 <= 0x7FFFFFFFFFFFFFFFLL - (v248 >> 1) )
        {
          v40 = 31;
          if ( v248 + v39 > 0x1F )
            v40 = v248 + v39;
        }
        else
        {
          v40 = 0x7FFFFFFFFFFFFFFFLL;
        }
        v41 = (void **)sub_3C460(v40 + 1);
        v216 = v41;
        v247 = 17;
        v248 = v40;
        *(_OWORD *)v41 = *(_OWORD *)"shopBG_02_001.png";
        *((_WORD *)v41 + 8) = (unsigned __int8)aShopbg02001Png[16];
        if ( v37 > 0xF )
        {
          v42 = v246[0];
          if ( v37 + 1 >= 0x1000 )
          {
            v42 = (void *)*((_QWORD *)v246[0] - 1);
            if ( (unsigned __int64)((char *)v246[0] - (char *)v42 - 8) > 0x1F )
              goto LABEL_83;
          }
          j_j_free(v42);
          v41 = v216;
        }
        v246[0] = v41;
      }
      else
      {
        v38 = v246[0];
        v247 = 17;
        memmove(v246[0], "shopBG_02_001.png", 0x11u);
        v38[17] = 0;
      }
      v43 = v251;
      if ( v251 < 0x14 )
      {
        v45 = v251 >> 1;
        if ( v251 <= 0x7FFFFFFFFFFFFFFFLL - (v251 >> 1) )
        {
          v46 = 31;
          if ( v251 + v45 > 0x1F )
            v46 = v251 + v45;
        }
        else
        {
          v46 = 0x7FFFFFFFFFFFFFFFLL;
        }
        v47 = (cocos2d::CCArray *)sub_3C460(v46 + 1);
        v216 = (void **)v47;
        v250 = 20;
        v251 = v46;
        strcpy((char *)v47, "storeDesk_02_001.png");
        if ( v43 > 0xF )
        {
          v48 = v249[0];
          if ( v43 + 1 >= 0x1000 )
          {
            v48 = (void *)*((_QWORD *)v249[0] - 1);
            if ( (unsigned __int64)((char *)v249[0] - (char *)v48 - 8) > 0x1F )
              goto LABEL_83;
          }
          j_j_free(v48);
          v47 = (cocos2d::CCArray *)v216;
        }
        v249[0] = v47;
      }
      else
      {
        v44 = v249[0];
        v250 = 20;
        memmove(v249[0], "storeDesk_02_001.png", 0x14u);
        v44[20] = 0;
      }
      v49 = v241;
      if ( v241 >= 0x11 )
      {
        v240 = 17;
        memmove(v239[0], "shopSign4_001.png", 0x11u);
        *((_BYTE *)v239[0] + 17) = 0;
        v31 = "shop4.mp3";
        goto LABEL_40;
      }
      v50 = v241 >> 1;
      if ( v241 <= 0x7FFFFFFFFFFFFFFFLL - (v241 >> 1) )
      {
        if ( v241 + v50 > 0x1F )
          v8 = v241 + v50;
      }
      else
      {
        v8 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v51 = (_WORD *)sub_3C460(v8 + 1);
      v240 = 17;
      v241 = v8;
      *(_OWORD *)v51 = *(_OWORD *)"shopSign4_001.png";
      v51[8] = (unsigned __int8)aShopsign4001Pn[16];
      if ( v49 > 0xF )
      {
        v52 = v239[0];
        if ( v49 + 1 >= 0x1000 )
        {
          v52 = (void *)*((_QWORD *)v239[0] - 1);
          if ( (unsigned __int64)((char *)v239[0] - (char *)v52 - 8) > 0x1F )
            goto LABEL_83;
        }
        j_j_free(v52);
      }
      v239[0] = v51;
      v31 = "shop4.mp3";
      goto LABEL_40;
  }
  if ( *(_DWORD *)(a1 + 456) != 4 )
    goto LABEL_42;
  sub_3F5A0((void *)(a1 + 464), "GJ_ShopSheet03", 0xEu);
  v15 = v248;
  if ( v248 < 0x11 )
  {
    v17 = v248 >> 1;
    if ( v248 <= 0x7FFFFFFFFFFFFFFFLL - (v248 >> 1) )
    {
      v18 = 31;
      if ( v17 + v248 > 0x1F )
        v18 = v17 + v248;
    }
    else
    {
      v18 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v19 = (void **)sub_3C460(v18 + 1);
    v216 = v19;
    v247 = 17;
    v248 = v18;
    *(_OWORD *)v19 = *(_OWORD *)"shopBG_03_001.png";
    *((_WORD *)v19 + 8) = (unsigned __int8)aShopbg03001Png[16];
    if ( v15 > 0xF )
    {
      v20 = v246[0];
      if ( v15 + 1 >= 0x1000 )
      {
        v20 = (void *)*((_QWORD *)v246[0] - 1);
        if ( (unsigned __int64)((char *)v246[0] - (char *)v20 - 8) > 0x1F )
          goto LABEL_83;
      }
      j_j_free(v20);
      v19 = v216;
    }
    v246[0] = v19;
  }
  else
  {
    v16 = v246[0];
    v247 = 17;
    memmove(v246[0], "shopBG_03_001.png", 0x11u);
    v16[17] = 0;
  }
  v21 = v251;
  if ( v251 < 0x14 )
  {
    v23 = v251 >> 1;
    if ( v251 <= 0x7FFFFFFFFFFFFFFFLL - (v251 >> 1) )
    {
      v24 = 31;
      if ( v251 + v23 > 0x1F )
        v24 = v251 + v23;
    }
    else
    {
      v24 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v25 = (cocos2d::CCArray *)sub_3C460(v24 + 1);
    v216 = (void **)v25;
    v250 = 20;
    v251 = v24;
    strcpy((char *)v25, "storeDesk_03_001.png");
    if ( v21 > 0xF )
    {
      v26 = v249[0];
      if ( v21 + 1 >= 0x1000 )
      {
        v26 = (void *)*((_QWORD *)v249[0] - 1);
        if ( (unsigned __int64)((char *)v249[0] - (char *)v26 - 8) > 0x1F )
          goto LABEL_83;
      }
      j_j_free(v26);
      v25 = (cocos2d::CCArray *)v216;
    }
    v249[0] = v25;
  }
  else
  {
    v22 = v249[0];
    v250 = 20;
    memmove(v249[0], "storeDesk_03_001.png", 0x14u);
    v22[20] = 0;
  }
  v27 = v241;
  if ( v241 < 0x11 )
  {
    v28 = v241 >> 1;
    if ( v241 <= 0x7FFFFFFFFFFFFFFFLL - (v241 >> 1) )
    {
      if ( v241 + v28 > 0x1F )
        v8 = v241 + v28;
    }
    else
    {
      v8 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v29 = (_WORD *)sub_3C460(v8 + 1);
    v240 = 17;
    v241 = v8;
    *(_OWORD *)v29 = *(_OWORD *)"shopSign5_001.png";
    v29[8] = (unsigned __int8)aShopsign5001Pn[16];
    if ( v27 <= 0xF )
      goto LABEL_38;
    v30 = v239[0];
    if ( v27 + 1 < 0x1000
      || (v30 = (void *)*((_QWORD *)v239[0] - 1), (unsigned __int64)((char *)v239[0] - (char *)v30 - 8) <= 0x1F) )
    {
      j_j_free(v30);
LABEL_38:
      v239[0] = v29;
      goto LABEL_39;
    }
LABEL_83:
    invoke_watson(0, 0, 0, 0, 0);
  }
  v240 = 17;
  memmove(v239[0], "shopSign5_001.png", 0x11u);
  *((_BYTE *)v239[0] + 17) = 0;
LABEL_39:
  v31 = "shop5.ogg";
LABEL_40:
  v244 = 9;
  memmove(&v242, v31, 9u);
  BYTE1(v243) = 0;
LABEL_41:
  v12 = v245;
  v11 = v244;
  v13 = v242;
LABEL_42:
  v32 = (void **)(a1 + 464);
  v33 = *(cocos2d::CCArray **)(a1 + 480);
  v216 = (void **)v33;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - (_QWORD)v33) < 4 )
    sub_8D90(v33, v9, v10);
  Src = (void *)(a1 + 464);
  if ( *(_QWORD *)(a1 + 488) > 0xFu )
    Src = *v32;
  *(_OWORD *)Block = 0;
  v237 = 0;
  v238 = 0;
  v34 = (unsigned __int64)v33 + 4;
  v219 = (cocos2d::CCArray *)((char *)v33 + 4);
  v35 = 15;
  v36 = Block;
  v226 = Block;
  if ( (unsigned __int64)v33 + 4 > 0xF )
  {
    v35 = v34 | 0xF;
    if ( (v34 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL )
    {
      if ( v35 < 0x16 )
        v35 = 22;
    }
    else
    {
      v35 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v36 = (void **)sub_3C460(v35 + 1);
    v226 = v36;
    Block[0] = v36;
    v33 = (cocos2d::CCArray *)v216;
    v34 = (unsigned __int64)v219;
  }
  v237 = v34;
  v238 = v35;
  memcpy(v36, Src, (size_t)v33);
  v53 = v226;
  v54 = v216;
  *(_DWORD *)((char *)v216 + (_QWORD)v226) = *(_DWORD *)".png";
  *((_BYTE *)v54 + (_QWORD)v53 + 4) = 0;
  v55 = Block;
  if ( v238 > 0xF )
    v55 = (void **)Block[0];
  v56 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(*(unsigned int *)".png", v54);
  cocos2d::CCTextureCache::addImage(v56, (const char *)v55, 0);
  v58 = v238;
  if ( v238 > 0xF )
  {
    v59 = Block[0];
    if ( v238 + 1 >= 0x1000 )
    {
      v59 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v59 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v59);
  }
  v60 = *(_QWORD *)(a1 + 480);
  v226 = (void **)v60;
  if ( 0x7FFFFFFFFFFFFFFFLL - v60 < 6 )
    sub_8D90(v60, v58, v57);
  if ( *(_QWORD *)(a1 + 488) > 0xFu )
    v32 = (void **)*v32;
  *(_OWORD *)Block = 0;
  v237 = 0;
  v238 = 0;
  v61 = v60 + 6;
  v219 = (cocos2d::CCArray *)(v60 + 6);
  v62 = 15;
  v63 = Block;
  v216 = Block;
  if ( v60 + 6 > 0xF )
  {
    v62 = v61 | 0xF;
    if ( (v61 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL )
    {
      if ( v62 < 0x16 )
        v62 = 22;
    }
    else
    {
      v62 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v63 = (void **)sub_3C460(v62 + 1);
    v216 = v63;
    Block[0] = v63;
    v60 = (size_t)v226;
    v61 = (unsigned __int64)v219;
  }
  v237 = v61;
  v238 = v62;
  memcpy(v63, v32, v60);
  v64 = v216;
  v65 = v226;
  *(_DWORD *)((char *)v226 + (_QWORD)v216) = *(_DWORD *)".plist";
  strcpy((char *)v65 + (_QWORD)v64 + 4, "st");
  v66 = Block;
  if ( v238 > 0xF )
    v66 = (void **)Block[0];
  v67 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(
                                         *(unsigned int *)".plist",
                                         v64);
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(v67, (const char *)v66);
  v68 = v238;
  if ( v238 > 0xF )
  {
    v69 = Block[0];
    if ( v238 + 1 >= 0x1000 )
    {
      v69 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v69 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v69);
  }
  LOBYTE(v68) = 1;
  (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 992LL))(a1, v68);
  LOBYTE(v70) = 1;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 1008LL))(a1, v70);
  LOBYTE(v71) = 1;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 920LL))(a1, v71);
  LOBYTE(v72) = 1;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 1024LL))(a1, v72);
  v74 = cocos2d::CCDirector::sharedDirector(v73);
  cocos2d::CCDirector::getWinSize(v74, &v220);
  if ( *(_DWORD *)(a1 + 456) == 2 )
  {
    v75 = v246;
    if ( v248 > 0xF )
      v75 = (void **)v246[0];
    v252 = 0;
    v253 = 0;
    v254 = 0;
    v76 = -1;
    do
      ++v76;
    while ( *((_BYTE *)v75 + v76) );
    sub_3C230(&v252);
    v77 = (struct cocos2d::CCSprite *)sub_4B5B0(&v252);
    Src = v77;
    sub_3C310(&v252);
    v78 = -110.0;
    do
      v78 = v78 + 360.0;
    while ( v78 < 0.0 );
    v79 = (float)(v78 / 360.0) * 6.283185307179586;
    *((float *)v77 + 150) = v79;
    sub_4BA60(v77);
    v214 = 240;
    v215 = -16;
    (**((void (__fastcall ***)(__int64, __int16 *))v77 + 40))((__int64)v77 + 320, &v214);
  }
  else
  {
    v80 = (const char *)v246;
    if ( v248 > 0xF )
      v80 = (const char *)v246[0];
    v77 = cocos2d::CCSprite::createWithSpriteFrameName(v80);
    Src = v77;
  }
  v81 = *(_QWORD *)v77;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v217, 0.0, 0.0);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v81 + 288))(v77, v82);
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v77, 4294967294LL);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v77 + 120LL))(v77);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v77 + 136LL))(v77);
  v83 = *(_QWORD *)v77;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v217, -2.5, -2.5);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v83 + 184))(v77, v84);
  v85 = v239;
  if ( v241 > 0xF )
    v85 = (void **)v239[0];
  v86 = cocos2d::CCSprite::createWithSpriteFrameName((const char *)v85);
  v87 = *(_QWORD *)v86;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v217, (float)(v220 * 0.5) - 70.0, v221 - 38.0);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v87 + 184))(v86, v88);
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *))(*(_QWORD *)a1 + 464LL))(a1, v86);
  v89 = (char *)operator new(0x300u);
  v217 = (void **)v89;
  CCAnimatedSprite_CCAnimatedSprite((__int64)v89);
  *(_QWORD *)v89 = &AnimatedShopKeeper::`vftable';
  *((_QWORD *)v89 + 40) = &AnimatedShopKeeper::`vftable';
  *((_QWORD *)v89 + 43) = &AnimatedShopKeeper::`vftable';
  *(_QWORD *)(v89 + 748) = 0;
  *((_WORD *)v89 + 378) = 0;
  *((_QWORD *)v89 + 95) = 0;
  v90 = v225;
  *((_DWORD *)v89 + 186) = v225;
  v91 = v90 - 1;
  if ( v91 )
  {
    v92 = v91 - 1;
    if ( v92 )
    {
      v93 = v92 - 1;
      if ( v93 )
      {
        if ( v93 == 1 )
          v94 = "GJShopKeeper5";
        else
          v94 = "GJShopKeeper";
      }
      else
      {
        v94 = "GJShopKeeper4";
      }
    }
    else
    {
      v94 = "GJShopKeeper3";
    }
  }
  else
  {
    v94 = "GJShopKeeper2";
  }
  if ( CCAnimatedSprite_tweenToAnimation(v89, (__int64)v94, 0, 0) )
  {
    *((_DWORD *)v89 + 188) = (int)(float)((float)((float)((float)rand() / 32767.0) * 5.0) + 10.0);
    v95 = rand();
    *((_DWORD *)v89 + 187) = (int)(float)((float)((float)((float)v95 / 32767.0) + (float)((float)v95 / 32767.0)) + 1.0);
    v96 = *((_QWORD *)v89 + 83);
    sub_86290(v96);
    v97 = *(cocos2d::CCNode **)(*(_QWORD *)(v96 + 320) + 688LL);
    if ( v97 )
      cocos2d::CCNode::stopAllActions(v97);
    v98 = *(cocos2d::CCNode **)(*(_QWORD *)(v96 + 320) + 680LL);
    if ( v98 )
      cocos2d::CCNode::stopAllActions(v98);
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v89);
  }
  else
  {
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v89 + 8LL))(v89, 1);
    v89 = 0;
  }
  *(_QWORD *)(a1 + 520) = v89;
  (*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v89, 3);
  v99 = **(_QWORD **)(a1 + 520);
  v100 = *(_QWORD *)(a1 + 520);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v217, (float)((float)(v220 * 0.5) + 100.0) + 0.0, 230.0);
  (*(void (__fastcall **)(__int64, __int64))(v99 + 184))(v100, v101);
  v102 = *(cocos2d::CCNode **)(a1 + 520);
  v103 = cocos2d::CCCallFunc::create(v102, sub_3B2780);
  v104 = cocos2d::CCDelayTime::create(0.1);
  v105 = cocos2d::CCSequence::create(v104, v103, 0);
  cocos2d::CCNode::runAction(v102, v105);
  if ( *(_DWORD *)(a1 + 456) == 2 )
  {
    v106 = v249;
    if ( v251 > 0xF )
      v106 = (void **)v249[0];
    *(_OWORD *)Block = 0;
    v237 = 0;
    v238 = 0;
    v107 = -1;
    do
      ++v107;
    while ( *((_BYTE *)v106 + v107) );
    sub_3C230(Block);
    v108 = (struct cocos2d::CCSprite *)sub_4B5B0(Block);
    v216 = (void **)v108;
    sub_3C310(Block);
    v109 = -120.0;
    do
      v109 = v109 + 360.0;
    while ( v109 < 0.0 );
    v110 = (float)(v109 / 360.0) * 6.283185307179586;
    *((float *)v108 + 150) = v110;
    sub_4BA60(v108);
  }
  else
  {
    v111 = v249;
    if ( v251 > 0xF )
      v111 = (void **)v249[0];
    v108 = cocos2d::CCSprite::createWithSpriteFrameName((const char *)v111);
    v216 = (void **)v108;
  }
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v108, 1);
  v112 = *(_QWORD *)v108;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v217, v220 * 0.5, 95.0);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v112 + 184))(v108, v113);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v108 + 120LL))(v108);
  if ( v225 != 1 )
  {
    if ( v225 == 3 )
    {
      v214 = -20561;
      v215 = -81;
      (**((void (__fastcall ***)(char *, __int16 *))Src + 40))((char *)Src + 320, &v214);
      goto LABEL_163;
    }
    if ( v225 )
    {
      if ( v225 == 2 )
      {
        v124 = cocos2d::CCMenu::create(v115, v114, v116, v117);
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 456LL))(a1, v124, 0xFFFFFFFFLL);
        v125 = *(_QWORD *)v124;
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v217, (float)(v220 - 40.0) - 0.0, v221 - 60.0);
        (*(void (__fastcall **)(__int64, __int64))(v125 + 184))(v124, v126);
        v127 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("communityCreditsBtn_001.png");
        v128 = CCMenuItemSpriteExtra_create(v127, 0, a1, (__int64)GameLevelOptionsLayer_create);
        *((_DWORD *)v128 + 93) = 1067030938;
        (*(void (__fastcall **)(__int64, cocos2d::CCObject *))(*(_QWORD *)v124 + 464LL))(v124, v128);
      }
      goto LABEL_163;
    }
    v118 = cocos2d::CCSprite::createWithSpriteFrameName("plushies_001.png");
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v118 + 160LL))(v118);
    v217 = (void **)operator new(0x208u);
    v119 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra((__int64)v217);
    if ( v119 )
    {
      if ( (unsigned __int8)sub_47940((_DWORD)v119, (_DWORD)v118, 0, a1, (__int64)guard_check_icall_nop) )
      {
        cocos2d::CCObject::autorelease(v119);
LABEL_160:
        *((_WORD *)v119 + 204) = 256;
        v120 = cocos2d::CCMenu::createWithItem(v119);
        (*(void (__fastcall **)(__int64, struct cocos2d::CCMenu *, _QWORD))(*(_QWORD *)a1 + 456LL))(a1, v120, 0);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v217, -130.0, 120.0);
        v122 = v121;
        v123 = (*((__int64 (__fastcall **)(void **))*v216 + 25))(v216);
        cocos2d::CCPoint::operator+(v123, &v219, v122);
        (*(void (__fastcall **)(struct cocos2d::CCMenu *, cocos2d::CCArray **))(*(_QWORD *)v120 + 184LL))(v120, &v219);
        (*(void (__fastcall **)(struct cocos2d::CCMenu *, _QWORD))(*(_QWORD *)v120 + 1040LL))(v120, 0);
        goto LABEL_163;
      }
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v119 + 8LL))(v119, 1);
    }
    v119 = 0;
    goto LABEL_160;
  }
  v214 = -256;
  v215 = -1;
  (**((void (__fastcall ***)(char *, __int16 *))Src + 40))((char *)Src + 320, &v214);
  v214 = -256;
  v215 = -1;
  (**((void (__fastcall ***)(__int64, __int16 *))v108 + 40))((__int64)v108 + 320, &v214);
LABEL_163:
  v129 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_arrow_03_001.png");
  v130 = CCMenuItemSpriteExtra_create(v129, 0, a1, (__int64)GJShopLayer_onBack);
  v219 = v130;
  *((_DWORD *)v130 + 93) = 1070386381;
  v131 = cocos2d::CCMenu::create(v130, 0);
  (*(void (__fastcall **)(__int64, struct cocos2d::CCMenu *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v131, 1);
  v132 = *(_QWORD *)v131;
  v134 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v133);
  v135 = cocos2d::CCDirector::getScreenTop(v134) - 23.0;
  v137 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v136);
  v138 = cocos2d::CCDirector::getScreenLeft(v137) + 24.0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v217, v138, v135);
  (*(void (__fastcall **)(struct cocos2d::CCMenu *, __int64))(v132 + 184))(v131, v139);
  if ( *(_BYTE *)(cocos2d::CCApplication::sharedApplication(v140) + 209) )
    sub_6DEB0(a1, v219);
  v217 = Block;
  *(_OWORD *)Block = 0;
  v237 = 0;
  v238 = 0;
  v144 = &v242;
  if ( v12 > 0xF )
    v144 = (__int64 *)v13;
  if ( v11 > 0x7FFFFFFFFFFFFFFFLL )
    sub_8D90(v142, v141, v143);
  if ( v11 > 0xF )
  {
    if ( (v11 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL )
    {
      v14 = v11 | 0xF;
      if ( (v11 | 0xF) < 0x16 )
        v14 = 22;
    }
    Block[0] = (void *)sub_3C460(v14 + 1);
    v237 = v11;
    v238 = v14;
    memcpy(Block[0], v144, v11 + 1);
  }
  else
  {
    v237 = v11;
    v238 = 15;
    *(_OWORD *)Block = *(_OWORD *)v144;
  }
  v145 = qword_905F60;
  if ( !qword_905F60 )
  {
    v219 = (cocos2d::CCArray *)operator new(0x8A8u);
    qword_905F60 = sub_5AE20(v219);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60);
    v145 = qword_905F60;
  }
  FMODAudioEngine_playMusic(v145, (__int64)Block, 1, 0.0);
  v146 = qword_905FE0;
  if ( *(_DWORD *)(a1 + 456) == 4 )
  {
    if ( !qword_905FE0 )
    {
      v217 = (void **)operator new(0x3E8u);
      qword_905FE0 = sub_2D2B40(v217);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
      v146 = qword_905FE0;
    }
    v147 = &word_755560;
  }
  else
  {
    if ( !qword_905FE0 )
    {
      v217 = (void **)operator new(0x3E8u);
      qword_905FE0 = sub_2D2B40(v217);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
      v146 = qword_905FE0;
    }
    v147 = &word_732AF4;
  }
  Stat = GameStatsManager_getStat(v146, (const char *)v147);
  v149 = (void **)operator new(0x238u);
  v217 = v149;
  cocos2d::CCLabelBMFont::CCLabelBMFont((cocos2d::CCLabelBMFont *)v149);
  *v149 = &CCCounterLabel::`vftable';
  v149[40] = &CCCounterLabel::`vftable';
  v149[45] = &CCCounterLabel::`vftable';
  v149[46] = &CCCounterLabel::`vftable';
  v149[67] = 0;
  *((_DWORD *)v149 + 136) = 0;
  *((_BYTE *)v149 + 548) = 0;
  *((_DWORD *)v149 + 138) = 10;
  *((_BYTE *)v149 + 556) = 0;
  *((_DWORD *)v149 + 140) = 0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v217, (const struct cocos2d::CCPoint *)&unk_9039C0);
  if ( (unsigned __int8)cocos2d::CCLabelBMFont::initWithString(v149, " ", &qword_6FFF68) )
  {
    *((_DWORD *)v149 + 140) = 0;
    *((_DWORD *)v149 + 135) = Stat;
    *((_DWORD *)v149 + 136) = Stat;
    CCCounterLabel_updateString((__int64)v149);
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v149);
  }
  else
  {
    (*((void (__fastcall **)(void **, __int64))*v149 + 1))(v149, 1);
    v149 = 0;
  }
  *(_QWORD *)(a1 + 440) = v149;
  (*(void (__fastcall **)(__int64, void **, __int64))(*(_QWORD *)a1 + 456LL))(a1, v149, 3);
  v150 = **(_QWORD **)(a1 + 440);
  v151 = *(_QWORD *)(a1 + 440);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v217, (float)(v220 - 34.0) - 0.0, v221 - 15.0);
  (*(void (__fastcall **)(__int64, __int64))(v150 + 184))(v151, v152);
  v153 = **(_QWORD **)(a1 + 440);
  v154 = *(_QWORD *)(a1 + 440);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v217, 1.0, 0.5);
  (*(void (__fastcall **)(__int64, __int64))(v153 + 288))(v154, v155);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 440) + 160LL))(*(_QWORD *)(a1 + 440));
  v156 = &xmmword_716E08;
  if ( *(_DWORD *)(a1 + 456) == 4 )
    v156 = (__int128 *)"currencyDiamondIcon_001.png";
  v255 = 0;
  v256 = 0;
  v257 = 0;
  v157 = -1;
  do
    ++v157;
  while ( *((_BYTE *)v156 + v157) );
  sub_3C230(&v255);
  v158 = (const char *)&v255;
  if ( v257 > 0xF )
    v158 = (const char *)v255;
  v159 = cocos2d::CCSprite::createWithSpriteFrameName(v158);
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v159, 3);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v217, 13.0, -0.5);
  v161 = v160;
  v162 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 440) + 200LL))(*(_QWORD *)(a1 + 440));
  cocos2d::CCPoint::operator+(v162, &v219, v161);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, cocos2d::CCArray **))(*(_QWORD *)v159 + 184LL))(v159, &v219);
  v163 = cocos2d::CCParticleSystemQuad::create("keyEffect.plist", 0);
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __int64))(*(_QWORD *)v163 + 1496LL))(v163, 8);
  *(__m128i *)Block = _mm_load_si128((const __m128i *)&xmmword_831570);
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *, void **))(*(_QWORD *)v163 + 1352LL))(v163, Block);
  *(__m128i *)Block = _mm_load_si128((const __m128i *)&xmmword_831460);
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *, void **))(*(_QWORD *)v163 + 1384LL))(v163, Block);
  *(_OWORD *)Block = 0;
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *, void **))(*(_QWORD *)v163 + 1368LL))(v163, Block);
  *(_OWORD *)Block = 0;
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *, void **))(*(_QWORD *)v163 + 1400LL))(v163, Block);
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *))(*(_QWORD *)v163 + 968LL))(v163);
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *))(*(_QWORD *)v163 + 984LL))(v163);
  v164 = *(_QWORD *)v163;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v216, 12.0, 10.0);
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __int64))(v164 + 952))(v163, v165);
  (*(void (__fastcall **)(__int64, cocos2d::CCParticleSystem *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v163, 100);
  v166 = *(_QWORD *)v163;
  v167 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v159 + 200LL))(v159);
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __int64))(v166 + 184))(v163, v167);
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __int64))(*(_QWORD *)v163 + 1528LL))(v163, 2);
  cocos2d::CCParticleSystem::resetSystem(v163);
  v216 = (void **)cocos2d::CCArray::create(v168);
  v170 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    v217 = (void **)operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v217);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v170 = qword_905FE0;
  }
  v171 = *(cocos2d::CCArray **)(v170 + 520);
  v172 = (cocos2d::CCArray *)cocos2d::CCArray::create(v169);
  v217 = (void **)v172;
  v174 = qword_905FD0;
  if ( !qword_905FD0 )
  {
    v219 = (cocos2d::CCArray *)operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v219);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
    v174 = qword_905FD0;
  }
  v175 = sub_27B350(v174, &word_708030, v173);
  for ( i = 0; i < cocos2d::CCArray::count(v171); ++i )
  {
    v177 = cocos2d::CCArray::objectAtIndex(v171, i);
    v178 = *(_DWORD *)(a1 + 456);
    if ( v178 == *((_DWORD *)v177 + 92) && (v178 != 1 || v175 || *((_DWORD *)v177 + 80) - *((_DWORD *)v177 + 81) != 20) )
      cocos2d::CCArray::addObject(v172, v177);
  }
  v179 = (cocos2d::CCObject *)cocos2d::CCDictionary::create();
  *(_QWORD *)(a1 + 448) = v179;
  cocos2d::CCObject::retain(v179);
  cocos2d::CCSprite::createWithSpriteFrameName("playerSquare_001.png");
  v219 = (cocos2d::CCArray *)cocos2d::CCArray::create(v180);
  v181 = 0;
  LODWORD(Src) = 0;
  if ( cocos2d::CCArray::count(v172) )
  {
    do
    {
      v182 = cocos2d::CCArray::objectAtIndex(v172, v181);
      v183 = *((_DWORD *)v182 + 83) - *((_DWORD *)v182 + 84);
      v184 = *((_DWORD *)v182 + 86) - *((_DWORD *)v182 + 87);
      v233 = 0;
      v234 = 0;
      v235 = 15;
      LOBYTE(v233) = 0;
      v185 = qword_905FE0;
      if ( !qword_905FE0 )
      {
        v230 = operator new(0x3E8u);
        qword_905FE0 = sub_2D2B40(v230);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
        v185 = qword_905FE0;
      }
      v186 = sub_2D6800(v185, (unsigned int)(*((_DWORD *)v182 + 80) - *((_DWORD *)v182 + 81)));
      v218 = v186;
      v187 = v184 - 8 > 1 && v184 != 1;
      StoreItem = GJItemIcon_createStoreItem(v184, v183, v186);
      (*(void (__fastcall **)(char *))(*(_QWORD *)StoreItem + 160LL))(StoreItem);
      v231 = operator new(0x208u);
      v189 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra((__int64)v231);
      if ( v189 )
      {
        if ( (unsigned __int8)sub_47940((_DWORD)v189, (_DWORD)StoreItem, 0, a1, (__int64)sub_3AE580) )
        {
          cocos2d::CCObject::autorelease(v189);
          goto LABEL_215;
        }
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v189 + 8LL))(v189, 1);
      }
      v189 = 0;
LABEL_215:
      *((_DWORD *)v189 + 93) = 0x40000000;
      cocos2d::CCArray::addObject((cocos2d::CCArray *)v216, v189);
      (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)v189 + 64LL))(
        v189,
        (unsigned int)(*((_DWORD *)v182 + 80) - *((_DWORD *)v182 + 81)));
      (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)StoreItem + 64LL))(StoreItem, v184);
      if ( v187 )
        cocos2d::CCArray::addObject(v219, v189);
      if ( !v218 )
      {
        GameToolbox_pointsToString((__int64)v258, *((_DWORD *)v182 + 89) - *((_DWORD *)v182 + 90));
        v191 = (const char *)v258;
        if ( v258[3] > 0xFu )
          v191 = (const char *)v258[0];
        v192 = cocos2d::CCLabelBMFont::create(v191, (const char *)&qword_6FFF68);
        (*(void (__fastcall **)(char *, struct cocos2d::CCLabelBMFont *))(*(_QWORD *)StoreItem + 464LL))(
          StoreItem,
          v192);
        v193 = *(_QWORD *)v192;
        v194 = (float *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)StoreItem + 320LL))(StoreItem);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v232, (float)(*v194 * 0.5) - 4.0, -6.5);
        (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v193 + 184))(v192, v195);
        (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v192 + 160LL))(v192);
        (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(*(_QWORD *)v192 + 64LL))(v192, 1234);
        v196 = &xmmword_716E08;
        v197 = v225;
        if ( v225 == 4 )
          v196 = (__int128 *)"currencyDiamondIcon_001.png";
        v252 = 0;
        v253 = 0;
        v254 = 0;
        v198 = -1;
        do
          ++v198;
        while ( *((_BYTE *)v196 + v198) );
        sub_3C230(&v252);
        v199 = (const char *)&v252;
        if ( v254 > 0xF )
          v199 = (const char *)v252;
        v200 = cocos2d::CCSprite::createWithSpriteFrameName(v199);
        (*(void (__fastcall **)(char *, struct cocos2d::CCSprite *))(*(_QWORD *)StoreItem + 464LL))(StoreItem, v200);
        v201 = *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v192 + 320LL))(v192)
             * 0.5;
        v202 = (*(double (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v192 + 168LL))(v192);
        cocos2d::CCPoint::CCPoint(
          (cocos2d::CCPoint *)Block,
          (float)((float)(*(float *)&v202 * v201) + 6.0) + (float)(v197 == 4),
          -0.5);
        v204 = v203;
        v205 = (*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v192 + 200LL))(v192);
        cocos2d::CCPoint::operator+(v205, &v226, v204);
        (*(void (__fastcall **)(struct cocos2d::CCSprite *, void ***))(*(_QWORD *)v200 + 184LL))(v200, &v226);
        (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v200 + 160LL))(v200);
        (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(*(_QWORD *)v200 + 64LL))(v200, 1234);
        sub_3C310(&v252);
        sub_3C310(v258);
        goto LABEL_240;
      }
      (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)v189 + 936LL))(v189, 0);
      switch ( *(_DWORD *)(a1 + 456) )
      {
        case 1:
          v214 = 7690;
          goto LABEL_229;
        case 2:
          v214 = 5665;
          v190 = 66;
          break;
        case 3:
          v214 = 5140;
          v190 = 40;
          break;
        case 4:
          v214 = 7700;
          v190 = 50;
          break;
        case 5:
          v214 = 12850;
          v190 = 50;
          break;
        default:
          v214 = 7740;
LABEL_229:
          v190 = 20;
          break;
      }
      v223 = v214;
      v224 = v190;
      SetGroupIDLayer_onExtra2((__int64)StoreItem, (__int64)&v223);
LABEL_240:
      cocos2d::CCDictionary::setObject(
        *(cocos2d::CCDictionary **)(a1 + 448),
        v189,
        *((_DWORD *)v182 + 80) - *((_DWORD *)v182 + 81));
      LODWORD(Src) = (_DWORD)Src + 1;
      v181 = (unsigned int)Src;
      v172 = (cocos2d::CCArray *)v217;
    }
    while ( v181 < cocos2d::CCArray::count((cocos2d::CCArray *)v217) );
  }
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v227, v220 * 0.5, 93.0);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)Block, (const struct cocos2d::CCPoint *)v227);
  v207 = ListButtonBar_create((int)v216, v206, 4, 2, 1103626240, 1097859072, 1114636288, 1130168320);
  (*(void (__fastcall **)(__int64, cocos2d::CCNode *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v207, 100);
  *((_BYTE *)v207 + 344) = 1;
  *(_DWORD *)(*((_QWORD *)v207 + 40) + 540LL) = 1058642330;
  LOBYTE(v208) = 1;
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v207 + 40) + 920LL))(*((_QWORD *)v207 + 40), v208);
  v209 = *((_QWORD *)v207 + 40);
  if ( *(_BYTE *)(v209 + 456) )
    v210 = *(cocos2d::CCArray **)(v209 + 448);
  else
    v210 = *(cocos2d::CCArray **)(v209 + 480);
  cocos2d::CCArray::count(v210);
  v211 = *((_QWORD *)v207 + 40);
  if ( *((_BYTE *)v207 + 344) )
  {
    BoomScrollLayer_moveToPage(v211, 0);
  }
  else
  {
    BoomScrollLayer_instantMoveToPage(v211, -1);
    BoomScrollLayer_instantMoveToPage(*((_QWORD *)v207 + 40), 0);
  }
  v212 = (void (__fastcall ***)(_QWORD, cocos2d::CCNode *, _QWORD))*((_QWORD *)v207 + 42);
  if ( v212 )
    (**v212)(v212, v207, 0);
  *(_BYTE *)(*((_QWORD *)v207 + 40) + 608LL) = 1;
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v228, 406.0, 200.0);
  cocos2d::CCRect::CCRect(
    (cocos2d::CCRect *)v232,
    v227[0] - (float)(v228 * 0.5),
    v227[1] - (float)(v229 * 0.5),
    v228,
    v229);
  cocos2d::CCRect::operator=(*((_QWORD *)v207 + 40) + 612LL, v213);
  sub_3C310(&v255);
  sub_3C310(&v242);
  sub_3C310(v239);
  sub_3C310(v249);
  sub_3C310(v246);
  return 1;
}

// Address: 0x3af840
// Method: GJShopLayer::showReactMessage
// Hidden C++ exception states: #wind=12
void __fastcall GJShopLayer_showReactMessage(_DWORD *a1)
{
  unsigned __int64 v2; // r14
  int v3; // ebx
  int v4; // r15d
  __int64 v5; // r8
  cocos2d::CCArray *v6; // r12
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rcx
  int v10; // r9d
  struct cocos2d::CCObject *v11; // rax
  int v12; // r9d
  struct cocos2d::CCObject *v13; // rax
  int v14; // r9d
  struct cocos2d::CCObject *v15; // rax
  cocos2d::CCString *v16; // rax
  const char *v17; // rax
  __int64 v18; // rdi
  int v19; // r9d
  struct cocos2d::CCObject *v20; // rax
  int v21; // r9d
  struct cocos2d::CCObject *v22; // rax
  cocos2d::CCLayerColor *DialogLayer; // rsi
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // rax
  char *v29; // rax
  char *v30; // rax
  char *v31; // rax
  char *v32; // rax
  __int64 v33; // rcx
  int v34; // r9d
  struct cocos2d::CCObject *v35; // rax
  int v36; // r9d
  struct cocos2d::CCObject *v37; // rax
  int v38; // r9d
  struct cocos2d::CCObject *v39; // rax
  char *v40; // rax
  char *v41; // rax
  char *v42; // rax
  int v43; // r9d
  struct cocos2d::CCObject *v44; // rax
  int v45; // r9d
  struct cocos2d::CCObject *v46; // rax
  __int64 v47; // rdx
  __int128 *v48; // rdx
  __int64 v49; // rdi
  __int64 v50; // r8
  unsigned __int64 v51; // r12
  void **v52; // rbx
  unsigned __int64 v53; // rcx
  __int64 v54; // rbx
  _WORD *v55; // rax
  void *v56; // rcx
  void **v57; // rdx
  cocos2d::CCString *v58; // rax
  const char *CString; // rax
  __int64 v60; // r8
  void **v61; // rdx
  int v62; // r9d
  struct cocos2d::CCObject *v63; // rax
  int v64; // r9d
  struct cocos2d::CCObject *v65; // rax
  void *v66; // rcx
  void *v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  int v71; // r9d
  unsigned int v72; // r8d
  __int64 v73; // rdx
  __int64 v74; // rcx
  void **v75; // rbx
  __int64 v76; // rax
  cocos2d::CCLayerColor *v77; // rsi
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rdi
  __int64 v81; // rbx
  __int64 v82; // rax
  __int64 v83; // r8
  __int64 v84; // rcx
  void *v85; // rcx
  __int16 v86; // [rsp+30h] [rbp-D0h] BYREF
  char v87; // [rsp+32h] [rbp-CEh]
  void **v88; // [rsp+40h] [rbp-C0h] BYREF
  cocos2d::CCArray *v89; // [rsp+48h] [rbp-B8h] BYREF
  _WORD *v90; // [rsp+50h] [rbp-B0h]
  __int128 v91; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v92; // [rsp+68h] [rbp-98h]
  __int64 v93; // [rsp+70h] [rbp-90h]
  void *v94[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v95; // [rsp+88h] [rbp-78h]
  unsigned __int64 v96; // [rsp+90h] [rbp-70h]
  void *Src[2]; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v98; // [rsp+A8h] [rbp-58h]
  __int64 v99; // [rsp+B0h] [rbp-50h]
  void *Block[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v101; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v102; // [rsp+D0h] [rbp-30h]
  __int128 v103; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v104; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v105; // [rsp+F0h] [rbp-10h]

  *(_OWORD *)Src = 0;
  v98 = 3;
  v2 = 15;
  v99 = 15;
  LOWORD(Src[0]) = *(_WORD *)"zzz";
  WORD1(Src[0]) = (unsigned __int8)aZzz[2];
  v3 = 2;
  v4 = 6;
  LODWORD(v90) = 2;
  v6 = (cocos2d::CCArray *)cocos2d::CCArray::create(a1);
  v89 = v6;
  v7 = qword_905FD0;
  if ( !qword_905FD0 )
  {
    v88 = (void **)operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v88);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
    v7 = qword_905FD0;
  }
  v8 = 0x7FFFFFFFFFFFFFFFLL;
  if ( !(unsigned __int8)sub_27B350(v7, &word_755544, v5) )
  {
    switch ( a1[132] )
    {
      case 0:
        v2 = 31;
        v29 = (char *)sub_3C460(32);
        v98 = 17;
        v99 = 31;
        strcpy(v29, "What do you want?");
        Src[0] = v29;
        v3 = 2;
        v4 = 29;
        goto LABEL_62;
      case 1:
        v98 = 13;
        memmove(Src, "Can you stop?", 0xDu);
        BYTE5(Src[1]) = 0;
        v2 = v99;
        v3 = 2;
        goto LABEL_62;
      case 2:
        v2 = 47;
        v30 = (char *)sub_3C460(48);
        v98 = 37;
        v99 = 47;
        strcpy(v30, "<cr>Stop</c> with the <cg>poking</c>!");
        Src[0] = v30;
        v3 = 2;
        v4 = 30;
        goto LABEL_62;
      case 3:
        v2 = 47;
        v31 = (char *)sub_3C460(48);
        v98 = 37;
        v99 = 47;
        strcpy(v31, "You are getting on my <cl>nerves</c>.");
        Src[0] = v31;
        v3 = 2;
        v4 = 31;
        goto LABEL_62;
      case 4:
        v2 = 31;
        v32 = (char *)sub_3C460(32);
        v98 = 24;
        v99 = 31;
        strcpy(v32, "I'm <co>warning</c> you!");
        Src[0] = v32;
        v3 = 2;
        v4 = 30;
        goto LABEL_62;
      case 5:
        v88 = v94;
        v95 = 14;
        v96 = 15;
        strcpy((char *)v94, "dangerLoop.mp3");
        HIBYTE(v94[1]) = 0;
        v33 = qword_905F60;
        if ( !qword_905F60 )
        {
          v89 = (cocos2d::CCArray *)operator new(0x8A8u);
          qword_905F60 = sub_5AE20(v89);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60);
          v33 = qword_905F60;
        }
        FMODAudioEngine_playMusic(v33, (__int64)v94, 1, 0.0);
        v88 = Block;
        v86 = -1;
        v87 = -1;
        *(_OWORD *)Block = 0;
        v101 = 0;
        v102 = 0;
        Block[0] = (void *)sub_3C460(48);
        v101 = 42;
        v102 = 47;
        strcpy((char *)Block[0], "<cg>Some things are better left alone</c>.");
        v95 = 14;
        v96 = 15;
        strcpy((char *)v94, "The Shopkeeper");
        HIBYTE(v94[1]) = 0;
        v35 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v94, (unsigned int)Block, 32, v34, 0, (__int64)&v86);
        cocos2d::CCArray::addObject(v6, v35);
        v88 = Block;
        v86 = -1;
        v87 = -1;
        *(_OWORD *)Block = 0;
        v101 = 0;
        v102 = 0;
        Block[0] = (void *)sub_3C460(32);
        v101 = 19;
        v102 = 31;
        strcpy((char *)Block[0], "Oh no... Not again.");
        v95 = 14;
        v96 = 15;
        strcpy((char *)v94, "The Shopkeeper");
        HIBYTE(v94[1]) = 0;
        v37 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v94, (unsigned int)Block, 34, v36, 0, (__int64)&v86);
        cocos2d::CCArray::addObject(v6, v37);
        v88 = Block;
        v86 = -1;
        v87 = -1;
        *(_OWORD *)Block = 0;
        v101 = 0;
        v102 = 0;
        Block[0] = (void *)sub_3C460(64);
        v101 = 54;
        v102 = 63;
        strcpy((char *)Block[0], "Just... just <cr>STOP</c> tapping and it will be fine!");
        v95 = 14;
        v96 = 15;
        strcpy((char *)v94, "The Shopkeeper");
        HIBYTE(v94[1]) = 0;
        v39 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v94, (unsigned int)Block, 36, v38, 0, (__int64)&v86);
        cocos2d::CCArray::addObject(v6, v39);
        v3 = 4;
        LODWORD(v90) = 4;
        goto LABEL_62;
      case 6:
        v2 = 47;
        v40 = (char *)sub_3C460(48);
        v98 = 33;
        v99 = 47;
        strcpy(v40, "It's best if you stop doing that.");
        Src[0] = v40;
        v3 = 2;
        v4 = 34;
        goto LABEL_62;
      case 7:
        v2 = 31;
        v41 = (char *)sub_3C460(32);
        v98 = 29;
        v99 = 31;
        strcpy(v41, "<cl>.<d030>.<d030>.<d030></c>");
        Src[0] = v41;
        v3 = 2;
        v4 = 35;
        goto LABEL_62;
      case 8:
        v2 = 63;
        v42 = (char *)sub_3C460(64);
        v98 = 50;
        v99 = 63;
        strcpy(v42, "<cg>I feel, <d050>strange.<d030>.<d030>.<d030></c>");
        Src[0] = v42;
        v3 = 4;
        v4 = 32;
        LODWORD(v90) = 4;
        goto LABEL_62;
      case 9:
        v88 = Block;
        v86 = -1;
        v87 = -1;
        *(_OWORD *)Block = 0;
        v101 = 0;
        v102 = 0;
        Block[0] = (void *)sub_3C460(32);
        v101 = 29;
        v102 = 31;
        strcpy((char *)Block[0], "<cr>You dare touch a god?</c>");
        v92 = 9;
        v93 = 15;
        *(_QWORD *)&v91 = *(_QWORD *)"Zolguroth";
        *((_QWORD *)&v91 + 1) = (unsigned __int8)aZolguroth[8];
        BYTE9(v91) = 0;
        v44 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)&v91, (unsigned int)Block, 33, v43, 0, (__int64)&v86);
        cocos2d::CCArray::addObject(v6, v44);
        v88 = (void **)&v91;
        v86 = -1;
        v87 = -1;
        v91 = 0;
        v92 = 0;
        v93 = 0;
        *(_QWORD *)&v91 = sub_3C460(64);
        v92 = 48;
        v93 = 63;
        strcpy((char *)v91, "<cr>You will regret your actions here today.</c>");
        v101 = 9;
        v102 = 15;
        Block[0] = *(void **)"Zolguroth";
        Block[1] = (void *)(unsigned __int8)aZolguroth[8];
        BYTE1(Block[1]) = 0;
        v46 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)Block, (unsigned int)&v91, 33, v45, 0, (__int64)&v86);
        cocos2d::CCArray::addObject(v6, v46);
        v47 = qword_905FD0;
        if ( !qword_905FD0 )
        {
          v88 = (void **)operator new(0x6E8u);
          qword_905FD0 = sub_2723A0(v88);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
          v47 = qword_905FD0;
        }
        sub_3E4F0(&v103, v47 + 656);
        v48 = &v103;
        if ( v105 > 0xF )
          v48 = (__int128 *)v103;
        *(_OWORD *)v94 = 0;
        v95 = 0;
        v96 = 0;
        v49 = -1;
        v50 = -1;
        do
          ++v50;
        while ( *((_BYTE *)v48 + v50) );
        sub_3C230(v94);
        sub_3C310(&v103);
        if ( v95 )
          goto LABEL_44;
        v51 = v96;
        if ( v96 < 3 )
        {
          v53 = v96 >> 1;
          if ( v96 <= 0x7FFFFFFFFFFFFFFFLL - (v96 >> 1) )
          {
            v54 = 15;
            if ( v96 + v53 > 0xF )
              v54 = v96 + v53;
          }
          else
          {
            v54 = 0x7FFFFFFFFFFFFFFFLL;
          }
          v55 = (_WORD *)sub_3C460(v54 + 1);
          v90 = v55;
          v95 = 3;
          v96 = v54;
          *v55 = *(_WORD *)"...";
          v55[1] = (unsigned __int8)asc_709B04[2];
          if ( v51 > 0xF )
          {
            v56 = v94[0];
            if ( v51 + 1 >= 0x1000 )
            {
              v56 = (void *)*((_QWORD *)v94[0] - 1);
              if ( (unsigned __int64)((char *)v94[0] - (char *)v56 - 8) > 0x1F )
LABEL_55:
                invoke_watson(0, 0, 0, 0, 0);
            }
            j_j_free(v56);
            v55 = v90;
          }
          v94[0] = v55;
        }
        else
        {
          v52 = v94;
          if ( v96 > 0xF )
            v52 = (void **)v94[0];
          v95 = 3;
          memmove(v52, "...", 3u);
          *((_BYTE *)v52 + 3) = 0;
        }
        v6 = v89;
LABEL_44:
        v57 = v94;
        if ( v96 > 0xF )
          v57 = (void **)v94[0];
        v58 = cocos2d::CCString::createWithFormat(
                "<cr>I have big things planned\nfor you<d020></c> <cl>%s</c>.",
                (const char *)v57);
        CString = cocos2d::CCString::getCString(v58);
        *(_OWORD *)Block = 0;
        v101 = 0;
        v102 = 0;
        v60 = -1;
        do
          ++v60;
        while ( CString[v60] );
        sub_3C230(Block);
        v88 = (void **)&v103;
        v86 = -1;
        v87 = -1;
        v61 = Block;
        if ( v102 > 0xF )
          v61 = (void **)Block[0];
        v103 = 0;
        v104 = 0;
        v105 = 0;
        do
          ++v49;
        while ( *((_BYTE *)v61 + v49) );
        sub_3C230(&v103);
        v92 = 9;
        v93 = 15;
        *(_QWORD *)&v91 = *(_QWORD *)"Zolguroth";
        *((_QWORD *)&v91 + 1) = (unsigned __int8)aZolguroth[8];
        BYTE9(v91) = 0;
        v63 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)&v91, (unsigned int)&v103, 33, v62, 0, (__int64)&v86);
        cocos2d::CCArray::addObject(v6, v63);
        v88 = (void **)&v91;
        v86 = -1;
        v87 = -1;
        v91 = 0;
        v92 = 0;
        v93 = 0;
        *(_QWORD *)&v91 = sub_3C460(80);
        v92 = 68;
        v93 = 79;
        strcpy((char *)v91, "<cr>Now.<d030>.<d030>.<d030> </c><i050><s260><cr>BEGONE!</c></s></i>");
        v104 = 9;
        v105 = 15;
        *(_QWORD *)&v103 = *(_QWORD *)"Zolguroth";
        *((_QWORD *)&v103 + 1) = (unsigned __int8)aZolguroth[8];
        BYTE9(v103) = 0;
        v65 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)&v103, (unsigned int)&v91, 33, v64, 0, (__int64)&v86);
        cocos2d::CCArray::addObject(v6, v65);
        v3 = 4;
        LODWORD(v90) = 4;
        if ( v102 > 0xF )
        {
          v66 = Block[0];
          if ( v102 + 1 >= 0x1000 )
          {
            v66 = (void *)*((_QWORD *)Block[0] - 1);
            if ( (unsigned __int64)((char *)Block[0] - (char *)v66 - 8) > 0x1F )
              goto LABEL_55;
          }
          j_j_free(v66);
        }
        if ( v96 > 0xF )
        {
          v67 = v94[0];
          if ( v96 + 1 >= 0x1000 )
          {
            v67 = (void *)*((_QWORD *)v94[0] - 1);
            if ( (unsigned __int64)((char *)v94[0] - (char *)v67 - 8) > 0x1F )
              invoke_watson(0, 0, 0, 0, 0);
          }
          j_j_free(v67);
        }
        goto LABEL_62;
      default:
        goto LABEL_62;
    }
  }
  a1[132] = 0;
  v88 = (void **)&v103;
  v103 = 0;
  v104 = 4;
  v105 = 15;
  strcpy((char *)&v103, "0022");
  v9 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    v89 = (cocos2d::CCArray *)operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v89);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v9 = qword_905FE0;
  }
  if ( !GameStatsManager_isSpecialChestUnlocked(v9, &v103) )
  {
    v88 = Block;
    v86 = -1;
    v87 = -1;
    *(_OWORD *)Block = 0;
    v101 = 0;
    v102 = 0;
    Block[0] = (void *)sub_3C460(32);
    v101 = 18;
    v102 = 31;
    strcpy((char *)Block[0], "Hey, Welcome back!");
    v95 = 14;
    v96 = 15;
    strcpy((char *)v94, "The Shopkeeper");
    HIBYTE(v94[1]) = 0;
    v11 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v94, (unsigned int)Block, 5, v10, 0, (__int64)&v86);
    cocos2d::CCArray::addObject(v6, v11);
    v88 = Block;
    v86 = -1;
    v87 = -1;
    *(_OWORD *)Block = 0;
    v101 = 0;
    v102 = 0;
    Block[0] = (void *)sub_3C460(80);
    v101 = 65;
    v102 = 79;
    strcpy((char *)Block[0], "Sorry, I think I fell asleep earlier. <d030>Did I miss something?");
    v95 = 14;
    v96 = 15;
    strcpy((char *)v94, "The Shopkeeper");
    HIBYTE(v94[1]) = 0;
    v13 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v94, (unsigned int)Block, 29, v12, 0, (__int64)&v86);
    cocos2d::CCArray::addObject(v6, v13);
    v88 = Block;
    v86 = -1;
    v87 = -1;
    *(_OWORD *)Block = 0;
    v101 = 0;
    v102 = 0;
    Block[0] = (void *)sub_3C460(64);
    v101 = 63;
    v102 = 63;
    strcpy((char *)Block[0], "<cl>Oh yea!</c> Someone left this <cg>package</c> here for you.");
    v95 = 14;
    v96 = 15;
    strcpy((char *)v94, "The Shopkeeper");
    HIBYTE(v94[1]) = 0;
    v15 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v94, (unsigned int)Block, 5, v14, 0, (__int64)&v86);
    cocos2d::CCArray::addObject(v6, v15);
    v88 = (void **)&v103;
    v86 = -1;
    v87 = -1;
    v16 = cocos2d::CCString::createWithFormat("Who is<d030> <cr>%s</c>?", "Zolguroth");
    v17 = cocos2d::CCString::getCString(v16);
    v103 = 0;
    v104 = 0;
    v105 = 0;
    v18 = -1;
    do
      ++v18;
    while ( v17[v18] );
    sub_3C230(&v103);
    v95 = 14;
    v96 = 15;
    strcpy((char *)v94, "The Shopkeeper");
    HIBYTE(v94[1]) = 0;
    v20 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v94, (unsigned int)&v103, 29, v19, 0, (__int64)&v86);
    cocos2d::CCArray::addObject(v6, v20);
    v88 = Block;
    v86 = -1;
    v87 = -1;
    *(_OWORD *)Block = 0;
    v101 = 0;
    v102 = 0;
    Block[0] = (void *)sub_3C460(64);
    v101 = 62;
    v102 = 63;
    strcpy((char *)Block[0], "<cl>I really need to get that thing checked.<d030>.<d030>.</c>");
    v95 = 14;
    v96 = 15;
    strcpy((char *)v94, "The Shopkeeper");
    HIBYTE(v94[1]) = 0;
    v22 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v94, (unsigned int)Block, 34, v21, 0, (__int64)&v86);
    cocos2d::CCArray::addObject(v6, v22);
    DialogLayer = DialogLayer_createDialogLayer(0, (__int64)v6, 2u);
    *((_BYTE *)DialogLayer + 617) = 1;
    *((_QWORD *)DialogLayer + 78) = a1 + 104;
    (*(void (__fastcall **)(cocos2d::CCLayerColor *, __int64))(*(_QWORD *)DialogLayer + 64LL))(DialogLayer, 2);
    (*(void (__fastcall **)(_DWORD *, cocos2d::CCLayerColor *, __int64))(*(_QWORD *)a1 + 456LL))(a1, DialogLayer, 100);
    v25 = cocos2d::CCDirector::sharedDirector(v24);
    cocos2d::CCDirector::getWinSize(v25, &v89);
    v26 = **((_QWORD **)DialogLayer + 70);
    v27 = *((_QWORD *)DialogLayer + 70);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v88, *(float *)&v89 * 0.5, *((float *)&v89 + 1) * 0.5);
    (*(void (__fastcall **)(__int64, __int64))(v26 + 184))(v27, v28);
    sub_173300(DialogLayer);
    goto LABEL_79;
  }
  v98 = 15;
  memmove(Src, "Can I help you?", 0xFu);
  HIBYTE(Src[1]) = 0;
  v2 = v99;
  v3 = 2;
  v4 = 29;
LABEL_62:
  if ( cocos2d::CCArray::count(v6) )
  {
    v72 = v3;
    v73 = (__int64)v6;
    v74 = 0;
  }
  else
  {
    v88 = v94;
    v86 = -1;
    v87 = -1;
    *(_OWORD *)v94 = 0;
    v95 = 0;
    v96 = 0;
    v75 = Src;
    if ( v2 > 0xF )
      v75 = (void **)Src[0];
    if ( v98 > 0x7FFFFFFFFFFFFFFFLL )
      sub_8D90(v69, v68, v70);
    if ( v98 > 0xF )
    {
      if ( (v98 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL )
      {
        v8 = v98 | 0xF;
        if ( (v98 | 0xF) < 0x16 )
          v8 = 22;
      }
      v94[0] = (void *)sub_3C460(v8 + 1);
      v95 = v98;
      v96 = v8;
      memcpy(v94[0], v75, v98 + 1);
    }
    else
    {
      v95 = v98;
      v96 = 15;
      *(_OWORD *)v94 = *(_OWORD *)v75;
    }
    v101 = 14;
    v102 = 15;
    strcpy((char *)Block, "The Shopkeeper");
    HIBYTE(Block[1]) = 0;
    v76 = sub_1723F0((unsigned int)Block, (unsigned int)v94, v4, v71, 0, (__int64)&v86);
    v72 = (unsigned int)v90;
    v73 = 0;
    v74 = v76;
  }
  v77 = DialogLayer_createDialogLayer(v74, v73, v72);
  *((_BYTE *)v77 + 617) = 1;
  (*(void (__fastcall **)(_DWORD *, cocos2d::CCLayerColor *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v77, 100);
  v79 = cocos2d::CCDirector::sharedDirector(v78);
  cocos2d::CCDirector::getWinSize(v79, &v89);
  v80 = **((_QWORD **)v77 + 70);
  v81 = *((_QWORD *)v77 + 70);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v88, *(float *)&v89 * 0.5, *((float *)&v89 + 1) * 0.5);
  (*(void (__fastcall **)(__int64, __int64))(v80 + 184))(v81, v82);
  sub_173300(v77);
  if ( (int)a1[132] >= 9 )
  {
    *((_QWORD *)v77 + 78) = a1 + 104;
    *((_BYTE *)v77 + 640) = 1;
    (*(void (__fastcall **)(cocos2d::CCLayerColor *, __int64))(*(_QWORD *)v77 + 64LL))(v77, 1);
    v84 = qword_905FD0;
    if ( !qword_905FD0 )
    {
      v88 = (void **)operator new(0x6E8u);
      qword_905FD0 = sub_2723A0(v88);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
      v84 = qword_905FD0;
    }
    LOBYTE(v83) = 1;
    sub_27B1C0(v84, &word_755544, v83);
  }
  ++a1[132];
LABEL_79:
  if ( v2 > 0xF )
  {
    v85 = Src[0];
    if ( v2 + 1 >= 0x1000 )
    {
      v85 = (void *)*((_QWORD *)Src[0] - 1);
      if ( (unsigned __int64)((char *)Src[0] - (char *)v85 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v85);
  }
}
