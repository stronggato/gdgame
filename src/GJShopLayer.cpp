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
