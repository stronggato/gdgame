#include <Geode/binding/GauntletSelectLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/16] Address: 0x2fadc0
// Method: GauntletSelectLayer::onRefresh
// Hidden C++ exception states: #wind=3
__int64 __fastcall GauntletSelectLayer_onRefresh(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rcx
  void *v10; // [rsp+30h] [rbp+8h]
  void *v11; // [rsp+30h] [rbp+8h]

  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 464) + 336LL))(*(_QWORD *)(a1 + 464), 0); /*0x2fadd5*/
  v3 = *(_QWORD *)(a1 + 440); /*0x2faddb*/
  if ( v3 ) /*0x2fade5*/
  {
    LOBYTE(v2) = 1; /*0x2fadea*/
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v3 + 520LL))(*(_QWORD *)(a1 + 440), v2); /*0x2fadef*/
    v3 = 0; /*0x2fadf5*/
    *(_QWORD *)(a1 + 440) = 0; /*0x2fadf8*/
  }
  LOBYTE(v2) = v3 != 0; /*0x2fae09*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 448) + 336LL))(*(_QWORD *)(a1 + 448), v2); /*0x2fae0f*/
  LOBYTE(v4) = *(_QWORD *)(a1 + 440) != 0; /*0x2fae24*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 456) + 336LL))(*(_QWORD *)(a1 + 456), v4); /*0x2fae2a*/
  v5 = *(_QWORD *)&qword_905FB0; /*0x2fae30*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x2fae3a*/
  {
    v10 = operator new(0x690u); /*0x2fae46*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v10); /*0x2fae54*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x2fae65*/
    v5 = *(_QWORD *)&qword_905FB0; /*0x2fae67*/
  }
  cocos2d::CCDictionary::removeAllObjects(*(cocos2d::CCDictionary **)(v5 + 1184)); /*0x2fae75*/
  LOBYTE(v6) = 1; /*0x2fae85*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 488) + 336LL))(*(_QWORD *)(a1 + 488), v6); /*0x2fae87*/
  v7 = a1 + 416; /*0x2fae8d*/
  v8 = *(_QWORD *)&qword_905FB0; /*0x2fae94*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x2fae9e*/
  {
    v11 = operator new(0x690u); /*0x2faeaa*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v11); /*0x2faeb8*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x2faec9*/
    v8 = *(_QWORD *)&qword_905FB0; /*0x2faecb*/
  }
  *(_QWORD *)(v8 + 1352) = v7; /*0x2faed2*/
  return sub_22DA10(); /*0x2faed9*/
}

// [3/16] Address: 0x2faef0
// Method: GauntletSelectLayer::loadLevelsFinished
// Hidden C++ exception states: #wind=1
void __fastcall GauntletSelectLayer_loadLevelsFinished(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r8
  void **v6; // rcx
  char *v7; // rdi
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rsi
  size_t v10; // r8
  int v11; // ebx
  char *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  _BYTE Buf2[12]; // [rsp+30h] [rbp-68h] BYREF
  int Buf2_12; // [rsp+3Ch] [rbp-5Ch]
  __int64 v18; // [rsp+40h] [rbp-58h]
  __int64 v19; // [rsp+48h] [rbp-50h]
  void *Buf1[2]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v21; // [rsp+60h] [rbp-38h]
  unsigned __int64 v22; // [rsp+68h] [rbp-30h]

  v18 = 13; /*0x2faf27*/
  v19 = 15; /*0x2faf2c*/
  qmemcpy(Buf2, "get_gauntlet", sizeof(Buf2)); /*0x2faf3d*/
  Buf2_12 = (unsigned __int8)aGetGauntlets[12]; /*0x2faf54*/
  *(_OWORD *)Buf1 = 0; /*0x2faf60*/
  v21 = 0; /*0x2faf65*/
  v22 = 0; /*0x2faf6e*/
  v5 = -1; /*0x2faf77*/
  do /*0x2faf83*/
    ++v5; /*0x2faf80*/
  while ( *(_BYTE *)(a3 + v5) ); /*0x2faf83*/
  sub_3C230(Buf1); /*0x2faf92*/
  v6 = Buf1; /*0x2faf97*/
  v7 = (char *)Buf1[0]; /*0x2faf9c*/
  v8 = v22; /*0x2fafa1*/
  if ( v22 > 0xF ) /*0x2fafaa*/
    v6 = (void **)Buf1[0]; /*0x2fafaa*/
  v9 = v21; /*0x2fafae*/
  v10 = v21; /*0x2fafb3*/
  if ( v21 > 0xD ) /*0x2fafba*/
    v10 = 13; /*0x2fafba*/
  v11 = memcmp(v6, Buf2, v10); /*0x2fafc8*/
  if ( !v11 ) /*0x2fafcc*/
  {
    if ( v9 >= 0xD ) /*0x2fafd2*/
      v11 = v9 > 0xD; /*0x2fafe1*/
    else
      v11 = -1; /*0x2fafd4*/
  }
  if ( v8 > 0xF ) /*0x2fafe8*/
  {
    v12 = v7; /*0x2fafee*/
    if ( v8 + 1 >= 0x1000 ) /*0x2faff8*/
    {
      v7 = (char *)*((_QWORD *)v7 - 1); /*0x2faffe*/
      if ( (unsigned __int64)(v12 - v7 - 8) > 0x1F ) /*0x2fb00d*/
        invoke_watson(0, 0, 0, 0, 0); /*0x2fb022*/
    }
    j_j_free(v7); /*0x2fb02c*/
  }
  if ( !v11 ) /*0x2fb034*/
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 72) + 336LL))(*(_QWORD *)(a1 + 72), 0); /*0x2fb03f*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 64) + 336LL))(*(_QWORD *)(a1 + 64), 0); /*0x2fb04e*/
    GauntletSelectLayer_setupGauntlets(a1 - 416); /*0x2fb05b*/
    LOBYTE(v13) = *(_QWORD *)(a1 + 24) != 0; /*0x2fb069*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 32) + 336LL))(*(_QWORD *)(a1 + 32), v13); /*0x2fb06f*/
    LOBYTE(v14) = *(_QWORD *)(a1 + 24) != 0; /*0x2fb07e*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 40) + 336LL))(*(_QWORD *)(a1 + 40), v14); /*0x2fb084*/
    LOBYTE(v15) = 1; /*0x2fb091*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 336LL))(*(_QWORD *)(a1 + 48), v15); /*0x2fb093*/
  }
}

// [4/16] Address: 0x2fb0c0
// Method: GauntletSelectLayer::loadLevelsFailed
// Hidden C++ exception states: #wind=1
void __fastcall GauntletSelectLayer_loadLevelsFailed(_QWORD **a1, __int64 a2)
{
  __int64 v3; // r8
  void **v4; // rcx
  char *v5; // rdi
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rsi
  size_t v8; // r8
  int v9; // ebx
  char *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  _BYTE Buf2[12]; // [rsp+30h] [rbp-68h] BYREF
  int Buf2_12; // [rsp+3Ch] [rbp-5Ch]
  __int64 v15; // [rsp+40h] [rbp-58h]
  __int64 v16; // [rsp+48h] [rbp-50h]
  void *Buf1[2]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+60h] [rbp-38h]
  unsigned __int64 v19; // [rsp+68h] [rbp-30h]

  v15 = 13; /*0x2fb0f4*/
  v16 = 15; /*0x2fb0f9*/
  qmemcpy(Buf2, "get_gauntlet", sizeof(Buf2)); /*0x2fb10a*/
  Buf2_12 = (unsigned __int8)aGetGauntlets[12]; /*0x2fb121*/
  *(_OWORD *)Buf1 = 0; /*0x2fb12d*/
  v18 = 0; /*0x2fb132*/
  v19 = 0; /*0x2fb13b*/
  v3 = -1; /*0x2fb144*/
  do /*0x2fb153*/
    ++v3; /*0x2fb150*/
  while ( *(_BYTE *)(a2 + v3) ); /*0x2fb153*/
  sub_3C230(Buf1); /*0x2fb15f*/
  v4 = Buf1; /*0x2fb164*/
  v5 = (char *)Buf1[0]; /*0x2fb169*/
  v6 = v19; /*0x2fb16e*/
  if ( v19 > 0xF ) /*0x2fb177*/
    v4 = (void **)Buf1[0]; /*0x2fb177*/
  v7 = v18; /*0x2fb17b*/
  v8 = v18; /*0x2fb180*/
  if ( v18 > 0xD ) /*0x2fb187*/
    v8 = 13; /*0x2fb187*/
  v9 = memcmp(v4, Buf2, v8); /*0x2fb195*/
  if ( !v9 ) /*0x2fb199*/
  {
    if ( v7 >= 0xD ) /*0x2fb19f*/
      v9 = v7 > 0xD; /*0x2fb1ae*/
    else
      v9 = -1; /*0x2fb1a1*/
  }
  if ( v6 > 0xF ) /*0x2fb1b5*/
  {
    v10 = v5; /*0x2fb1bb*/
    if ( v6 + 1 >= 0x1000 ) /*0x2fb1c5*/
    {
      v5 = (char *)*((_QWORD *)v5 - 1); /*0x2fb1cb*/
      if ( (unsigned __int64)(v10 - v5 - 8) > 0x1F ) /*0x2fb1da*/
        invoke_watson(0, 0, 0, 0, 0); /*0x2fb1ef*/
    }
    j_j_free(v5); /*0x2fb1f9*/
  }
  if ( !v9 ) /*0x2fb201*/
  {
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1[9] + 336LL))(a1[9], 0); /*0x2fb20c*/
    LOBYTE(v11) = 1; /*0x2fb219*/
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1[8] + 336LL))(a1[8], v11); /*0x2fb21b*/
    LOBYTE(v12) = 1; /*0x2fb228*/
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1[6] + 336LL))(a1[6], v12); /*0x2fb22a*/
  }
}

// [6/16] Address: 0x2fba70
// Method: GauntletSelectLayer::onNext
__int64 __fastcall GauntletSelectLayer_onNext(__int64 a1)
{
  return GauntletSelectLayer_goToPage(a1, (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 440) + 588LL) + 1), 0);
}

// [7/16] Address: 0x2fba90
// Method: GauntletSelectLayer::onPrev
__int64 __fastcall GauntletSelectLayer_onPrev(__int64 a1)
{
  return GauntletSelectLayer_goToPage(a1, (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 440) + 588LL) - 1), 0);
}

// [8/16] Address: 0x2fbab0
// Method: GauntletSelectLayer::goToPage
struct cocos2d::CCAction *__fastcall GauntletSelectLayer_goToPage(__int64 a1, unsigned int a2, char a3)
{
  __int64 v5; // rcx
  cocos2d::CCArray *v7; // rcx
  __int64 v8; // rbx
  cocos2d::CCNode *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rbx
  struct cocos2d::CCFiniteTimeAction *v14; // rax
  struct cocos2d::CCAction *v15; // rbx

  v5 = *(_QWORD *)(a1 + 440); /*0x2fbacb*/
  if ( *(_BYTE *)(v5 + 456) ) /*0x2fbad4*/
    v7 = *(cocos2d::CCArray **)(v5 + 448); /*0x2fbadd*/
  else
    v7 = *(cocos2d::CCArray **)(v5 + 480); /*0x2fbae6*/
  cocos2d::CCArray::count(v7); /*0x2fbaed*/
  v8 = *(_QWORD *)(a1 + 440); /*0x2fbaf3*/
  if ( *(_BYTE *)(v8 + 552) ) /*0x2fbafa*/
  {
    v9 = *(cocos2d::CCNode **)(v8 + 504); /*0x2fbb03*/
    *(_BYTE *)(v8 + 552) = 0; /*0x2fbb0f*/
    cocos2d::CCNode::stopActionByTag(v9, 2); /*0x2fbb16*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v8 + 504) + 184LL))(*(_QWORD *)(v8 + 504), v8 + 496); /*0x2fbb2d*/
    BoomScrollLayer_moveToPageEnded(v8); /*0x2fbb36*/
  }
  v10 = *(_QWORD *)(a1 + 440); /*0x2fbb3b*/
  if ( a3 ) /*0x2fbb47*/
    BoomScrollLayer_instantMoveToPage(v10, a2); /*0x2fbb49*/
  else
    BoomScrollLayer_moveToPage(v10, a2); /*0x2fbb50*/
  LOBYTE(v11) = *(_QWORD *)(a1 + 440) != 0; /*0x2fbb64*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 448) + 336LL))(*(_QWORD *)(a1 + 448), v11); /*0x2fbb6a*/
  LOBYTE(v12) = *(_QWORD *)(a1 + 440) != 0; /*0x2fbb7f*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 456) + 336LL))(*(_QWORD *)(a1 + 456), v12); /*0x2fbb85*/
  *(_BYTE *)(a1 + 504) = 1; /*0x2fbb90*/
  cocos2d::CCNode::stopActionByTag((cocos2d::CCNode *)a1, 1001); /*0x2fbb9a*/
  v13 = cocos2d::CCCallFunc::create(a1, sub_2FBC10); /*0x2fbbb8*/
  v14 = cocos2d::CCDelayTime::create(0.30000001); /*0x2fbbbb*/
  v15 = cocos2d::CCSequence::create(v14, v13, 0); /*0x2fbbd5*/
  (*(void (__fastcall **)(struct cocos2d::CCAction *, __int64))(*(_QWORD *)v15 + 64LL))(v15, 1001); /*0x2fbbe2*/
  return cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v15); /*0x2fbbeb*/
}

// [9/16] Address: 0x2fbc20
// Method: GauntletSelectLayer::scrollLayerScrolledToPage
__int64 __fastcall GauntletSelectLayer_scrollLayerScrolledToPage(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx

  LOBYTE(a2) = *(_QWORD *)(a1 + 32) != 0; /*0x2fbc35*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 40) + 336LL))(*(_QWORD *)(a1 + 40), a2); /*0x2fbc38*/
  LOBYTE(v3) = *(_QWORD *)(a1 + 32) != 0; /*0x2fbc47*/
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 336LL))(*(_QWORD *)(a1 + 48), v3);
}

// [10/16] Address: 0x2fbc60
// Method: GauntletSelectLayer::onBack
// Hidden C++ exception states: #wind=1
void __fastcall GauntletSelectLayer_onBack(__int64 a1)
{
  __int64 v2; // rax
  struct cocos2d::CCScene *v3; // rax
  struct cocos2d::CCScene *v4; // rbx
  __int64 v5; // rcx
  cocos2d::CCDirector *v6; // rax
  void *v7; // [rsp+30h] [rbp+8h]

  if ( !*(_BYTE *)(a1 + 473) && !*(_BYTE *)(a1 + 513) ) /*0x2fbc76*/
  {
    v2 = qword_905FD0; /*0x2fbc83*/
    if ( !qword_905FD0 ) /*0x2fbc8d*/
    {
      v7 = operator new(0x6E8u); /*0x2fbc99*/
      qword_905FD0 = sub_2723A0(v7); /*0x2fbca7*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2fbcb8*/
      v2 = qword_905FD0; /*0x2fbcba*/
    }
    *(_DWORD *)(v2 + 1116) = 1; /*0x2fbcc1*/
    *(_WORD *)(a1 + 472) = 257; /*0x2fbccb*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x2fbcdc*/
    v3 = (struct cocos2d::CCScene *)CreatorLayer_scene(); /*0x2fbce2*/
    v4 = cocos2d::CCTransitionFade::create(0.5, v3); /*0x2fbcf8*/
    v6 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v5); /*0x2fbcfb*/
    cocos2d::CCDirector::replaceScene(v6, v4); /*0x2fbd0c*/
  }
}

// [11/16] Address: 0x2fbd20
// Method: GauntletSelectLayer::keyBackClicked
void __fastcall GauntletSelectLayer_keyBackClicked(__int64 a1)
{
  GauntletSelectLayer_onBack(a1 - 336); /*0x2fbd29*/
}

// [12/16] Address: 0x2fc5b0
// Method: GauntletSelectLayer::rewardedVideoFinished
struct cocos2d::CCAction *__fastcall GauntletSelectLayer_rewardedVideoFinished(__int64 a1)
{
  __int64 v1; // rax
  cocos2d::CCNode *v2; // rdi
  __int64 v3; // rbx
  struct cocos2d::CCFiniteTimeAction *v4; // rax
  struct cocos2d::CCAction *v5; // rax

  v1 = *(_QWORD *)(a1 + 16); /*0x2fc5ba*/
  v2 = (cocos2d::CCNode *)(a1 - 424); /*0x2fc5be*/
  *(_BYTE *)(a1 + 89) = 1; /*0x2fc5c5*/
  *(_BYTE *)(a1 - 424 + 512) = 0; /*0x2fc5d0*/
  *(_BYTE *)(v1 + 628) = 1; /*0x2fc5da*/
  v3 = cocos2d::CCCallFunc::create(a1 - 424, SongInfoObject_create); /*0x2fc5ef*/
  v4 = cocos2d::CCDelayTime::create(0.1); /*0x2fc5f2*/
  v5 = cocos2d::CCSequence::create(v4, v3, 0); /*0x2fc601*/
  return cocos2d::CCNode::runAction(v2, v5); /*0x2fc60d*/
}

// [13/16] Address: 0x2fc620
// Method: GauntletSelectLayer::onExit
void __fastcall GauntletSelectLayer_onExit(cocos2d::CCLayer *a1)
{
  cocos2d::CCSpriteFrameCache *v2; // rax
  cocos2d::CCTextureCache *v3; // rax

  cocos2d::CCLayer::onExit(a1); /*0x2fc629*/
  if ( *((_BYTE *)a1 + 472) ) /*0x2fc62f*/
  {
    v2 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x2fc638*/
    cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(v2, "GauntletSheet.plist"); /*0x2fc648*/
    v3 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(); /*0x2fc64e*/
    cocos2d::CCTextureCache::removeTextureForKey(v3, "GauntletSheet.png"); /*0x2fc663*/
  }
}

// [15/16] Address: 0x2fd770
// Method: GauntletSelectLayer::unlockAnimationFinished
__int64 __fastcall GauntletSelectLayer_unlockAnimationFinished(__int64 a1)
{
  __int64 v1; // rax
  struct cocos2d::CCObject *v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  cocos2d::extension::CCScale9Sprite *v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rbx
  struct cocos2d::CCActionInterval *v11; // rax
  struct cocos2d::CCFiniteTimeAction *v12; // rax
  struct cocos2d::CCAction *v13; // rax
  _BYTE v15[40]; // [rsp+30h] [rbp-28h] BYREF
  char v16; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 440); /*0x2fd782*/
  *(_BYTE *)(a1 + 513) = 0; /*0x2fd78c*/
  *(_BYTE *)(v1 + 628) = 0; /*0x2fd793*/
  v3 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 496), *(int *)(a1 + 508)); /*0x2fd7b1*/
  *((_BYTE *)v3 + 352) = 0; /*0x2fd7b4*/
  GauntletNode_generateNode(v3); /*0x2fd7bb*/
  v4 = cocos2d::CCRect::CCRect((cocos2d::CCRect *)v15, 0.0, 0.0, 86.0, 86.0); /*0x2fd7d9*/
  v5 = cocos2d::extension::CCScale9Sprite::create("GJ_squareB_01.png", v4); /*0x2fd7e9*/
  LOBYTE(v6) = -1; /*0x2fd7ef*/
  v7 = (cocos2d::extension::CCScale9Sprite *)v5; /*0x2fd7f1*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v5 + 320) + 40LL))(v5 + 320, v6); /*0x2fd806*/
  v8 = *(_QWORD *)v7; /*0x2fd81e*/
  v9 = cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v16, 110.0, 234.0); /*0x2fd821*/
  (*(void (__fastcall **)(cocos2d::extension::CCScale9Sprite *, __int64))(v8 + 312))(v7, v9); /*0x2fd82d*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, cocos2d::extension::CCScale9Sprite *, __int64))(*(_QWORD *)v3 + 456LL))( /*0x2fd842*/
    v3,
    v7,
    100);
  (**((void (__fastcall ***)(__int64, __int16 *))v7 + 40))((__int64)v7 + 320, &word_6FE444); /*0x2fd85d*/
  cocos2d::extension::CCScale9Sprite::setBlendAdditive(v7, 1); /*0x2fd864*/
  v10 = cocos2d::CCCallFunc::create(v7, sub_3E5B0); /*0x2fd882*/
  v11 = cocos2d::CCFadeOut::create(0.80000001); /*0x2fd885*/
  v12 = cocos2d::CCEaseIn::create(v11, 1.5); /*0x2fd896*/
  v13 = cocos2d::CCSequence::create(v12, v10, 0); /*0x2fd8a5*/
  cocos2d::CCNode::runAction(v7, v13); /*0x2fd8b1*/
  return EditorPauseLayer_saveLevel(a1); /*0x2fd8ba*/
}
