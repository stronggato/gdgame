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
