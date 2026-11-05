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

// Address: 0x2fa0f0
// Method: GauntletSelectLayer::init
// Hidden C++ exception states: #wind=4
bool __fastcall GauntletSelectLayer_init(__int64 a1, int a2)
{
  bool result; // al
  __int64 v4; // rdx
  __int64 v5; // rcx
  cocos2d::CCTextureCache *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  cocos2d::CCSpriteFrameCache *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  cocos2d::CCObject *v15; // rax
  struct cocos2d::CCSprite *v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rax
  struct cocos2d::CCSprite *v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // rcx
  cocos2d::CCDirector *v25; // rax
  float v26; // xmm0_4
  __int64 v27; // rax
  struct cocos2d::CCSprite *v28; // rdi
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rcx
  cocos2d::CCDirector *v33; // rax
  float v34; // xmm6_4
  __int64 v35; // rcx
  cocos2d::CCDirector *v36; // rax
  float v37; // xmm0_4
  __int64 v38; // rax
  struct cocos2d::CCSprite *v39; // rdi
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // rcx
  cocos2d::CCDirector *v44; // rax
  float v45; // xmm6_4
  __int64 v46; // rcx
  cocos2d::CCDirector *v47; // rax
  float v48; // xmm0_4
  __int64 v49; // rax
  struct cocos2d::CCSprite *v50; // rdi
  __int64 v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rbx
  __int64 v54; // rcx
  cocos2d::CCDirector *v55; // rax
  float v56; // xmm6_4
  __int64 v57; // rcx
  cocos2d::CCDirector *v58; // rax
  float v59; // xmm0_4
  __int64 v60; // rax
  struct cocos2d::CCSprite *v61; // rdi
  __int64 v62; // rbx
  __int64 v63; // rax
  __int64 v64; // rbx
  __int64 v65; // rcx
  cocos2d::CCDirector *v66; // rax
  float v67; // xmm6_4
  __int64 v68; // rcx
  cocos2d::CCDirector *v69; // rax
  float v70; // xmm0_4
  __int64 v71; // rax
  float v72; // xmm6_4
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // r14
  __int64 v78; // rcx
  char v79; // r12
  const char *v80; // r15
  const char *v81; // rcx
  cocos2d::CCSprite *v82; // rbx
  cocos2d::CCObject *v83; // rax
  __int64 v84; // rdi
  __int64 v85; // rcx
  cocos2d::CCDirector *v86; // rax
  float v87; // xmm0_4
  __int64 v88; // rbx
  __int64 v89; // rax
  __int64 v90; // rax
  struct cocos2d::CCSprite *v91; // rax
  int v92; // ebx
  cocos2d::CCObject *v93; // rax
  __int64 v94; // rdi
  __int64 v95; // rcx
  cocos2d::CCDirector *v96; // rax
  float v97; // xmm0_4
  __int64 v98; // rbx
  __int64 v99; // rax
  __int64 v100; // rax
  int v101; // eax
  cocos2d::CCObject *v102; // r15
  struct cocos2d::CCMenu *v103; // r14
  __int64 v104; // rbx
  __int64 v105; // rcx
  cocos2d::CCDirector *v106; // rax
  float v107; // xmm6_4
  __int64 v108; // rcx
  cocos2d::CCDirector *v109; // rax
  float v110; // xmm0_4
  __int64 v111; // rax
  int v112; // eax
  cocos2d::CCObject *v113; // rdi
  __int64 v114; // rbx
  __int64 v115; // rcx
  cocos2d::CCDirector *v116; // rax
  float v117; // xmm6_4
  __int64 v118; // rcx
  cocos2d::CCDirector *v119; // rax
  float v120; // xmm0_4
  __int64 v121; // rax
  __int64 v122; // rax
  cocos2d::CCLayerColor *v123; // rax
  void (__fastcall ***v124)(_QWORD, __int128 **); // rcx
  const struct cocos2d::CCPoint *v125; // rax
  char *v126; // rdi
  __int64 v127; // rbx
  __int64 v128; // rax
  struct cocos2d::CCSprite *v129; // rax
  cocos2d::CCObject *v130; // rax
  __int64 v131; // rdi
  __int64 v132; // rcx
  cocos2d::CCDirector *v133; // rax
  float v134; // xmm0_4
  __int64 v135; // rbx
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rcx
  __int64 v139; // rdx
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // rdx
  _BYTE v143[8]; // [rsp+40h] [rbp-59h] BYREF
  void *v144; // [rsp+48h] [rbp-51h]
  __int128 v145; // [rsp+50h] [rbp-49h] BYREF
  __int64 v146; // [rsp+60h] [rbp-39h]
  __int64 v147; // [rsp+68h] [rbp-31h]
  int v148; // [rsp+108h] [rbp+6Fh] BYREF
  __int128 *v149; // [rsp+110h] [rbp+77h] BYREF
  float v150; // [rsp+118h] [rbp+7Fh] BYREF
  float v151; // [rsp+11Ch] [rbp+83h]

  v148 = a2;
  result = cocos2d::CCLayer::init((cocos2d::CCLayer *)a1);
  if ( result )
  {
    v6 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v5, v4);
    cocos2d::CCTextureCache::addImage(v6, "GauntletSheet.png", 0);
    v9 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(v8, v7);
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(v9, "GauntletSheet.plist");
    LOBYTE(v10) = 1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 992LL))(a1, v10);
    LOBYTE(v11) = 1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 1008LL))(a1, v11);
    v13 = cocos2d::CCDirector::sharedDirector(v12);
    cocos2d::CCDirector::getWinSize(v13, &v150);
    v15 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(v14);
    *(_QWORD *)(a1 + 496) = v15;
    cocos2d::CCObject::retain(v15);
    v16 = cocos2d::CCSprite::create("GJ_gradientBG.png");
    *(_QWORD *)(a1 + 432) = v16;
    v17 = *(_QWORD *)v16;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v149, 0.0, 0.0);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v17 + 288))(v16, v18);
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 456LL))(a1, *(_QWORD *)(a1 + 432), 4294967294LL);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 432) + 120LL))(*(_QWORD *)(a1 + 432));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 432) + 136LL))(*(_QWORD *)(a1 + 432));
    v19 = **(_QWORD **)(a1 + 432);
    v20 = *(_QWORD *)(a1 + 432);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v149, -5.0, -5.0);
    (*(void (__fastcall **)(__int64, __int64))(v19 + 184))(v20, v21);
    memset(&v149, 51, 3);
    (**(void (__fastcall ***)(__int64, __int128 **))(*(_QWORD *)(a1 + 432) + 320LL))(
      *(_QWORD *)(a1 + 432) + 320LL,
      &v149);
    v22 = cocos2d::CCSprite::createWithSpriteFrameName("theLostGauntletsLabel_001.png");
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *))(*(_QWORD *)a1 + 464LL))(a1, v22);
    v23 = *(_QWORD *)v22;
    v25 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v24);
    v26 = cocos2d::CCDirector::getScreenTop(v25) - 28.0;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v149, v150 * 0.5, v26);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v23 + 184))(v22, v27);
    LOWORD(v149) = 19532;
    memset(&v148, 76, 3);
    v28 = cocos2d::CCSprite::createWithSpriteFrameName("gauntletCorner_001.png");
    v29 = *(_QWORD *)v28;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v149, 0.0, 0.0);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v29 + 288))(v28, v30);
    v31 = *(_QWORD *)v28;
    v33 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v32);
    v34 = cocos2d::CCDirector::getScreenBottom(v33) - 1.0;
    v36 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v35);
    v37 = cocos2d::CCDirector::getScreenLeft(v36) - 1.0;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v149, v37, v34);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v31 + 184))(v28, v38);
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v28, 1);
    (**((void (__fastcall ***)(__int64, int *))v28 + 40))((__int64)v28 + 320, &v148);
    v39 = cocos2d::CCSprite::createWithSpriteFrameName("gauntletCorner_001.png");
    v40 = *(_QWORD *)v39;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v149, 1.0, 0.0);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v40 + 288))(v39, v41);
    v42 = *(_QWORD *)v39;
    v44 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v43);
    v45 = cocos2d::CCDirector::getScreenBottom(v44) - 1.0;
    v47 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v46);
    v48 = cocos2d::CCDirector::getScreenRight(v47) + 1.0;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v149, v48, v45);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v42 + 184))(v39, v49);
    cocos2d::CCSprite::setFlipX(v39, 1);
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v39, 1);
    (**((void (__fastcall ***)(__int64, int *))v39 + 40))((__int64)v39 + 320, &v148);
    v50 = cocos2d::CCSprite::createWithSpriteFrameName("gauntletCorner_001.png");
    v51 = *(_QWORD *)v50;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v149, 0.0, 1.0);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v51 + 288))(v50, v52);
    v53 = *(_QWORD *)v50;
    v55 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v54);
    v56 = cocos2d::CCDirector::getScreenTop(v55) + 1.0;
    v58 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v57);
    v59 = cocos2d::CCDirector::getScreenLeft(v58) - 1.0;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v149, v59, v56);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v53 + 184))(v50, v60);
    cocos2d::CCSprite::setFlipY(v50, 1);
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v50, 1);
    (**((void (__fastcall ***)(__int64, int *))v50 + 40))((__int64)v50 + 320, &v148);
    v61 = cocos2d::CCSprite::createWithSpriteFrameName("gauntletCorner_001.png");
    v62 = *(_QWORD *)v61;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v149, 1.0, 1.0);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v62 + 288))(v61, v63);
    v64 = *(_QWORD *)v61;
    v66 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v65);
    v67 = cocos2d::CCDirector::getScreenTop(v66) + 1.0;
    v69 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v68);
    v70 = cocos2d::CCDirector::getScreenRight(v69) + 1.0;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v149, v70, v67);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v64 + 184))(v61, v71);
    cocos2d::CCSprite::setFlipX(v61, 1);
    cocos2d::CCSprite::setFlipY(v61, 1);
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v61, 1);
    (**((void (__fastcall ***)(__int64, int *))v61 + 40))((__int64)v61 + 320, &v148);
    v72 = v151 * 0.5;
    v77 = cocos2d::CCMenu::create(v74, v73, v75, v76);
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 456LL))(a1, v77, 5);
    v79 = *(_BYTE *)(cocos2d::CCApplication::sharedApplication(v78) + 209);
    v80 = "navArrowBtn_001.png";
    v81 = "navArrowBtn_001.png";
    if ( v79 )
      v81 = "controllerBtn_DPad_Left_001.png";
    v82 = cocos2d::CCSprite::createWithSpriteFrameName(v81);
    (*(void (__fastcall **)(cocos2d::CCSprite *))(*(_QWORD *)v82 + 160LL))(v82);
    if ( !v79 )
      cocos2d::CCSprite::setFlipX(v82, 1);
    v83 = CCMenuItemSpriteExtra_create((int)v82, 0, a1, (__int64)GauntletSelectLayer_onPrev);
    *(_QWORD *)(a1 + 448) = v83;
    (*(void (__fastcall **)(__int64, cocos2d::CCObject *))(*(_QWORD *)v77 + 464LL))(v77, v83);
    *(_DWORD *)(*(_QWORD *)(a1 + 448) + 372LL) = 0x40000000;
    v84 = **(_QWORD **)(a1 + 448);
    v86 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v85);
    v87 = cocos2d::CCDirector::getScreenLeft(v86) + 25.0;
    v88 = *(_QWORD *)(a1 + 448);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v149, v87, v72);
    cocos2d::CCNode::convertToNodeSpace(v77, v143, v89);
    (*(void (__fastcall **)(__int64, __int64))(v84 + 184))(v88, v90);
    if ( v79 )
      v80 = "controllerBtn_DPad_Right_001.png";
    v91 = cocos2d::CCSprite::createWithSpriteFrameName(v80);
    v92 = (int)v91;
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v91 + 160LL))(v91);
    v93 = CCMenuItemSpriteExtra_create(v92, 0, a1, (__int64)GauntletSelectLayer_onNext);
    *(_QWORD *)(a1 + 456) = v93;
    (*(void (__fastcall **)(__int64, cocos2d::CCObject *))(*(_QWORD *)v77 + 464LL))(v77, v93);
    *(_DWORD *)(*(_QWORD *)(a1 + 456) + 372LL) = 0x40000000;
    v94 = **(_QWORD **)(a1 + 456);
    v96 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v95);
    v97 = cocos2d::CCDirector::getScreenRight(v96) - 25.0;
    v98 = *(_QWORD *)(a1 + 456);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v149, v97, v72);
    cocos2d::CCNode::convertToNodeSpace(v77, v143, v99);
    (*(void (__fastcall **)(__int64, __int64))(v94 + 184))(v98, v100);
    v101 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_arrow_01_001.png");
    v102 = CCMenuItemSpriteExtra_create(v101, 0, a1, (__int64)GauntletSelectLayer_onBack);
    *((_DWORD *)v102 + 93) = 1070386381;
    v103 = cocos2d::CCMenu::create(v102, 0);
    (*(void (__fastcall **)(__int64, struct cocos2d::CCMenu *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v103, 1);
    v104 = *(_QWORD *)v103;
    v106 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v105);
    v107 = cocos2d::CCDirector::getScreenTop(v106) - 22.0;
    v109 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v108);
    v110 = cocos2d::CCDirector::getScreenLeft(v109) + 25.0;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v149, v110, v107);
    (*(void (__fastcall **)(struct cocos2d::CCMenu *, __int64))(v104 + 184))(v103, v111);
    v112 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_infoIcon_001.png");
    v113 = CCMenuItemSpriteExtra_create(v112, 0, a1, (__int64)sub_2FAC80);
    *((_DWORD *)v113 + 93) = 0x40000000;
    (*(void (__fastcall **)(struct cocos2d::CCMenu *, cocos2d::CCObject *))(*(_QWORD *)v103 + 464LL))(v103, v113);
    v114 = *(_QWORD *)v113;
    v116 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v115);
    v117 = cocos2d::CCDirector::getScreenBottom(v116) + 30.0;
    v119 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v118);
    v120 = cocos2d::CCDirector::getScreenLeft(v119) + 30.0;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v149, v120, v117);
    cocos2d::CCNode::convertToNodeSpace(v103, v143, v121);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v114 + 184))(v113, v122);
    if ( v79 )
      sub_6DEB0(a1, v102);
    v123 = LoadingCircle_create();
    *(_QWORD *)(a1 + 488) = v123;
    *((_QWORD *)v123 + 69) = a1;
    *(_BYTE *)(*(_QWORD *)(a1 + 488) + 560LL) = 0;
    cocos2d::CCObject::retain(*(cocos2d::CCObject **)(a1 + 488));
    LoadingCircle_show(*(_QWORD *)(a1 + 488));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 488) + 336LL))(*(_QWORD *)(a1 + 488), 0);
    memset(&v149, 100, 3);
    v124 = (void (__fastcall ***)(_QWORD, __int128 **))(*(_QWORD *)(*(_QWORD *)(a1 + 488) + 544LL) + 320LL);
    (**v124)(v124, &v149);
    v149 = &v145;
    v145 = 0;
    v146 = 0;
    v147 = 0;
    *(_QWORD *)&v145 = sub_3C460(48);
    v146 = 43;
    v147 = 47;
    strcpy((char *)v145, "Something went wrong\nplease try again later");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v143, 0.5, 1.0);
    v126 = TextArea_create((__int64)&v145, &qword_6FFF68, 1.0, 600.0, v125, 1106247680, 0, 0);
    *(_QWORD *)(a1 + 480) = v126;
    v127 = *(_QWORD *)v126;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v149, v150 * 0.5, (float)(v151 * 0.5) + 10.0);
    (*(void (__fastcall **)(char *, __int64))(v127 + 184))(v126, v128);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 480) + 160LL))(*(_QWORD *)(a1 + 480));
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 456LL))(a1, *(_QWORD *)(a1 + 480), 10);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 480) + 336LL))(*(_QWORD *)(a1 + 480), 0);
    v129 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_updateBtn_001.png");
    LODWORD(v127) = (_DWORD)v129;
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v129 + 160LL))(v129);
    v130 = CCMenuItemSpriteExtra_create(v127, 0, a1, (__int64)GauntletSelectLayer_onRefresh);
    *(_QWORD *)(a1 + 464) = v130;
    (*(void (__fastcall **)(struct cocos2d::CCMenu *, cocos2d::CCObject *))(*(_QWORD *)v103 + 464LL))(v103, v130);
    v131 = **(_QWORD **)(a1 + 464);
    v133 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v132);
    v134 = cocos2d::CCDirector::getScreenRight(v133) - 25.0;
    v135 = *(_QWORD *)(a1 + 464);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v149, v134, 25.0);
    cocos2d::CCNode::convertToNodeSpace(v103, v143, v136);
    (*(void (__fastcall **)(__int64, __int64))(v131 + 184))(v135, v137);
    v138 = *(_QWORD *)&qword_905FB0;
    if ( !*(_QWORD *)&qword_905FB0 )
    {
      v144 = operator new(0x690u);
      *(_QWORD *)&qword_905FB0 = sub_214250(v144);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
      v138 = *(_QWORD *)&qword_905FB0;
    }
    if ( cocos2d::CCDictionary::count(*(cocos2d::CCDictionary **)(v138 + 1184)) )
    {
      GauntletSelectLayer_setupGauntlets(a1);
    }
    else
    {
      LOBYTE(v139) = 1;
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 488) + 336LL))(*(_QWORD *)(a1 + 488), v139);
      v141 = *(_QWORD *)&qword_905FB0;
      if ( !*(_QWORD *)&qword_905FB0 )
      {
        v149 = (__int128 *)operator new(0x690u);
        *(_QWORD *)&qword_905FB0 = sub_214250(v149);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
        v141 = *(_QWORD *)&qword_905FB0;
      }
      *(_QWORD *)(v141 + 1352) = a1 + 416;
      sub_22DA10();
    }
    LOBYTE(v140) = *(_QWORD *)(a1 + 440) != 0;
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 448) + 336LL))(*(_QWORD *)(a1 + 448), v140);
    LOBYTE(v142) = *(_QWORD *)(a1 + 440) != 0;
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 456) + 336LL))(*(_QWORD *)(a1 + 456), v142);
    return 1;
  }
  return result;
}

// Address: 0x3a7730
// Method: GauntletSelectLayer::playUnlockAnimation
// Hidden C++ exception states: #wind=3
double __fastcall GauntletSelectLayer_playUnlockAnimation(_DWORD *a1, int a2)
{
  cocos2d::CCParticleSystem *v3; // r14
  int v4; // eax
  void **v5; // rcx
  struct cocos2d::CCSprite *v6; // rsi
  float *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  char *v12; // r8
  __int64 v13; // r9
  float *v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  double result; // xmm0_8
  _BYTE v20[8]; // [rsp+30h] [rbp-D0h] BYREF
  void *v21[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v23; // [rsp+50h] [rbp-B0h]
  __int128 v24; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h]
  __int64 v26; // [rsp+70h] [rbp-90h]
  unsigned int v27[66]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v28[40]; // [rsp+188h] [rbp+88h] BYREF

  if ( a2 != a1[150] )
  {
    a1[150] = a2;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 568LL))(a1);
    if ( a1[150] )
    {
      *(_OWORD *)v21 = 0;
      v3 = 0;
      v21[0] = (void *)sub_3C460(32);
      v22 = 23;
      v23 = 31;
      strcpy((char *)v21[0], "GJ_featuredCoin_001.png");
      v4 = a1[150];
      switch ( v4 )
      {
        case 4:
          v22 = 20;
          memmove(v21[0], "GJ_epicCoin3_001.png", 0x14u);
          *((_BYTE *)v21[0] + 20) = 0;
          break;
        case 3:
          v22 = 20;
          memmove(v21[0], "GJ_epicCoin2_001.png", 0x14u);
          *((_BYTE *)v21[0] + 20) = 0;
          break;
        case 2:
          v22 = 19;
          memmove(v21[0], "GJ_epicCoin_001.png", 0x13u);
          *((_BYTE *)v21[0] + 19) = 0;
          break;
      }
      v5 = v21;
      if ( v23 > 0xF )
        v5 = (void **)v21[0];
      v6 = cocos2d::CCSprite::createWithSpriteFrameName((const char *)v5);
      (*(void (__fastcall **)(_DWORD *, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(
        a1,
        v6,
        4294967294LL);
      v7 = (float *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 320LL))(a1);
      v8 = *(_QWORD *)v6;
      v9 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 320LL))(a1);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v20, *v7 * 0.5, *(float *)(v9 + 4) * 0.5);
      (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v8 + 184))(v6, v10);
      if ( a1[150] == 4 )
      {
        v24 = 0;
        v25 = 0;
        v26 = 0;
        v12 = (char *)sub_3C460(176);
        *(_QWORD *)&v24 = v12;
        v25 = 170;
        v26 = 175;
        strcpy(
          v12,
          "30a-1a1.3a0.2a20a90a0a10a5a20a20a0a0a8a0a0a0a4a1a0a0a0a0a1a0a1a0a1a0a1a1a0a0a0a0a0.784314a0a1a0a1a0a0.27a0a0.2"
          "7a0a0a0a0a0a0a0a0a2a1a0a0a0a0a0a0a0.25a0a0a0a0a0a0a0a0a0a0a0");
        if ( v25 )
        {
          sub_6AE20(v27, v11, v12, v13);
          KeyframeObject_setupSpline((__int64 *)&v24, (__int64)v27);
          v3 = GameToolbox_particleFromStruct(v27, 0, 0);
          sub_3C310(v28);
        }
        (*(void (__fastcall **)(_DWORD *, cocos2d::CCParticleSystem *, __int64))(*(_QWORD *)a1 + 456LL))(
          a1,
          v3,
          0xFFFFFFFFLL);
        (*(void (__fastcall **)(cocos2d::CCParticleSystem *))(*(_QWORD *)v3 + 160LL))(v3);
        cocos2d::CCParticleSystem::resetSystem(v3);
        v14 = (float *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 320LL))(a1);
        v15 = *(_QWORD *)v3;
        v16 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 320LL))(a1);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v20, *v14 * 0.5, *(float *)(v16 + 4) * 0.5);
        (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __int64))(v15 + 184))(v3, v17);
        v18 = 5;
        do
        {
          (*(void (__fastcall **)(cocos2d::CCParticleSystem *))(*(_QWORD *)v3 + 32LL))(v3);
          --v18;
        }
        while ( v18 );
        sub_3C310(&v24);
      }
      return sub_3C310(v21);
    }
  }
  return result;
}

// Address: 0x2fb260
// Method: GauntletSelectLayer::setupGauntlets
// Hidden C++ exception states: #wind=7
unsigned int __fastcall GauntletSelectLayer_setupGauntlets(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  cocos2d::CCArray *v3; // r12
  __int64 v4; // rcx
  cocos2d::CCArray *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // r14
  cocos2d::CCDictionary *v8; // r14
  unsigned int result; // eax
  __int64 v10; // r8
  signed int v11; // r13d
  __int64 v12; // rax
  int v13; // ebx
  int v14; // edi
  __int64 v15; // r14
  __int64 i; // r15
  cocos2d::CCObject *v17; // r14
  unsigned int v18; // edi
  struct cocos2d::CCObject *v19; // r12
  struct cocos2d::CCObject *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  _QWORD *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rbx
  float v33; // xmm6_4
  float *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  struct cocos2d::CCObject *v37; // rbx
  unsigned int v38; // r14d
  int v39; // edx
  int v40; // r8d
  cocos2d::CCArray *v41; // r13
  struct cocos2d::CCObject *v42; // rdi
  struct cocos2d::CCObject *v43; // r15
  struct cocos2d::CCObject *v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // r12
  float v48; // xmm6_4
  unsigned int *v49; // rbx
  __int64 v50; // rcx
  __int64 *v51; // rbx
  __int64 *j; // rsi
  __int64 v53; // rdi
  float v54; // xmm0_4
  float v55; // xmm6_4
  unsigned int *v56; // rsi
  __int64 v57; // rax
  __int64 **v58; // rsi
  __int64 **k; // r15
  __int64 *v60; // rdi
  __int64 v61; // rbx
  double v62; // xmm0_8
  __int64 v63; // rax
  __int64 v64; // rax
  float v65; // xmm0_4
  unsigned int v66; // eax
  __int64 v67; // rax
  __int64 v68; // rcx
  cocos2d::CCDirector *v69; // rax
  float ScreenBottom; // xmm0_4
  __int64 v71; // rbx
  __int64 v72; // rax
  __int64 v73; // rcx
  cocos2d::CCArray *v74; // rcx
  cocos2d::CCArray *v75; // [rsp+30h] [rbp-A9h]
  int v76; // [rsp+38h] [rbp-A1h]
  cocos2d::CCArray *v77; // [rsp+40h] [rbp-99h] BYREF
  int v78; // [rsp+48h] [rbp-91h]
  cocos2d::CCArray *v79; // [rsp+50h] [rbp-89h]
  float v80[2]; // [rsp+58h] [rbp-81h] BYREF
  _BYTE v81[8]; // [rsp+60h] [rbp-79h] BYREF
  _BYTE v82[8]; // [rsp+68h] [rbp-71h] BYREF
  _BYTE v83[8]; // [rsp+70h] [rbp-69h] BYREF
  _BYTE v84[8]; // [rsp+78h] [rbp-61h] BYREF
  void *v85; // [rsp+80h] [rbp-59h]
  _QWORD *v86; // [rsp+88h] [rbp-51h]
  void *v88; // [rsp+148h] [rbp+6Fh] BYREF
  struct cocos2d::CCObject *v89; // [rsp+150h] [rbp+77h]
  float v90; // [rsp+158h] [rbp+7Fh] BYREF

  v1 = cocos2d::CCDirector::sharedDirector(a1);
  cocos2d::CCDirector::getWinSize(v1, v80);
  v3 = (cocos2d::CCArray *)cocos2d::CCArray::create(v2);
  v79 = v3;
  v5 = (cocos2d::CCArray *)cocos2d::CCArray::create(v4);
  v75 = v5;
  v77 = (cocos2d::CCArray *)cocos2d::CCArray::create(v6);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v81, v80[0] * 0.5, (float)(v80[1] * 0.5) - 11.0);
  v7 = *(_QWORD *)&qword_905FB0;
  if ( !*(_QWORD *)&qword_905FB0 )
  {
    v88 = operator new(0x690u);
    *(_QWORD *)&qword_905FB0 = sub_214250(v88);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
    v7 = *(_QWORD *)&qword_905FB0;
  }
  v8 = *(cocos2d::CCDictionary **)(v7 + 1184);
  result = cocos2d::CCDictionary::count(v8);
  if ( result )
  {
    if ( !qword_905FD0 )
    {
      v88 = operator new(0x6E8u);
      qword_905FD0 = sub_2723A0(v88);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
    }
    v78 = *(_DWORD *)(qword_905FD0 + 1116);
    v11 = 0;
    LODWORD(v89) = 0;
    v12 = *(_QWORD *)&qword_905FB0;
    if ( !*(_QWORD *)&qword_905FB0 )
    {
      v88 = operator new(0x690u);
      *(_QWORD *)&qword_905FB0 = sub_214250(v88);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
      v12 = *(_QWORD *)&qword_905FB0;
    }
    LOBYTE(v88) = *(_BYTE *)(v12 + 1576);
    *(_BYTE *)(v12 + 1576) = 0;
    v13 = *(_DWORD *)(v12 + 1004);
    v76 = v13;
    v14 = 1;
    LODWORD(v90) = 1;
    if ( v8 )
    {
      v15 = *((_QWORD *)v8 + 7);
      if ( v15 )
      {
        for ( i = *(_QWORD *)(v15 + 288); ; i = *(_QWORD *)(i + 288) )
        {
          v17 = *(cocos2d::CCObject **)(v15 + 264);
          if ( *((_DWORD *)v17 + 82) != 7 )
            goto LABEL_15;
          if ( !qword_905FD0 )
          {
            v85 = operator new(0x6E8u);
            qword_905FD0 = sub_2723A0(v85);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
          }
          if ( (unsigned __int8)sub_27B350(qword_905FD0, &word_732D8C, v10) )
          {
LABEL_15:
            v18 = (int)(float)(ceilf((float)v14 / 3.0) - 1.0);
            if ( cocos2d::CCArray::count(v3) <= v18 )
            {
              v20 = (struct cocos2d::CCObject *)cocos2d::CCLayer::create();
              cocos2d::CCArray::addObject(v3, v20);
              v19 = (struct cocos2d::CCObject *)cocos2d::CCMenu::create(v22, v21, v23, v24);
              (*(void (__fastcall **)(struct cocos2d::CCObject *, struct cocos2d::CCObject *))(*(_QWORD *)v20 + 464LL))(
                v20,
                v19);
              cocos2d::CCArray::addObject(v77, v19);
              v89 = (struct cocos2d::CCObject *)cocos2d::CCArray::create(v25);
              cocos2d::CCArray::addObject(v5, v89);
              v13 = v76;
            }
            else
            {
              cocos2d::CCArray::objectAtIndex(v3, v18);
              v89 = cocos2d::CCArray::objectAtIndex(v5, v18);
              v19 = cocos2d::CCArray::objectAtIndex(v77, v18);
            }
            if ( (_BYTE)v88 )
            {
              if ( v13 > 0 && *((_DWORD *)v17 + 82) == v13 )
                v11 = v18;
            }
            else if ( *((_DWORD *)v17 + 82) == v78 && v78 > 1 )
            {
              v11 = v18;
            }
            v26 = operator new(0x168u);
            v86 = v26;
            memset(v26, 0, 0x168u);
            cocos2d::CCNode::CCNode((cocos2d::CCNode *)v26);
            *v26 = &GauntletNode::`vftable';
            v26[40] = 0;
            v26[41] = 0;
            v26[43] = 0;
            *((_BYTE *)v26 + 352) = 0;
            if ( cocos2d::CCNode::init((cocos2d::CCNode *)v26) )
            {
              v26[43] = v17;
              cocos2d::CCObject::retain(v17);
              *((_BYTE *)v26 + 352) = 0;
              GauntletNode_generateNode(v26);
              cocos2d::CCObject::autorelease((cocos2d::CCObject *)v26);
            }
            else
            {
              (*(void (__fastcall **)(_QWORD *, __int64))(*v26 + 8LL))(v26, 1);
              v26 = 0;
            }
            cocos2d::CCDictionary::setObject(
              *(cocos2d::CCDictionary **)(a1 + 496),
              (struct cocos2d::CCObject *)v26,
              *((int *)v17 + 82));
            v29 = cocos2d::CCNode::create(v28, v27);
            v30 = *(_QWORD *)v29;
            cocos2d::CCSize::CCSize((cocos2d::CCSize *)v82, 110.0, 234.0);
            (*(void (__fastcall **)(__int64, __int64))(v30 + 312))(v29, v31);
            (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v29 + 464LL))(v29, v26);
            v32 = *v26;
            v33 = *(float *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 320LL))(v29) + 4) * 0.5;
            v34 = (float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 320LL))(v29);
            cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v83, *v34 * 0.5, v33);
            cocos2d::CCNode::convertToNodeSpace(v29, v84, v35);
            (*(void (__fastcall **)(_QWORD *, __int64))(v32 + 184))(v26, v36);
            v37 = CCMenuItemSpriteExtra_create(v29, 0, a1, (__int64)sub_2FBD30);
            *((_DWORD *)v37 + 100) = 1065772646;
            (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v37 + 64LL))(
              v37,
              *((unsigned int *)v17 + 82));
            (*(void (__fastcall **)(struct cocos2d::CCObject *, struct cocos2d::CCObject *))(*(_QWORD *)v19 + 464LL))(
              v19,
              v37);
            cocos2d::CCArray::addObject(v89, v37);
            v14 = ++LODWORD(v90);
            v5 = v75;
            v3 = v79;
            v13 = v76;
          }
          v15 = i;
          if ( !i )
            break;
        }
        LODWORD(v89) = v11;
      }
    }
    v38 = 0;
    if ( cocos2d::CCArray::count(v5) )
    {
      v41 = v77;
      do
      {
        v42 = cocos2d::CCArray::objectAtIndex(v3, v38);
        v43 = cocos2d::CCArray::objectAtIndex(v5, v38);
        v44 = cocos2d::CCArray::objectAtIndex(v41, v38);
        cocos2d::CCNode::convertToWorldSpace(v42, v84, v81);
        cocos2d::CCNode::convertToNodeSpace(v44, v83, v45);
        v47 = v46;
        v48 = -112.0;
        if ( v43 )
        {
          v49 = (unsigned int *)*((_QWORD *)v43 + 7);
          v50 = *v49;
          if ( (_DWORD)v50 )
          {
            v51 = (__int64 *)*((_QWORD *)v49 + 2);
            for ( j = &v51[v50 - 1]; v51 <= j; ++v51 )
            {
              v53 = *v51;
              if ( !*v51 )
                break;
              cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v90, (const struct cocos2d::CCSize *)&unk_903BF8);
              v54 = (*(float (__fastcall **)(__int64))(*(_QWORD *)v53 + 128LL))(v53);
              v48 = v48 + (float)((float)(v54 * v90) + 112.0);
            }
            v5 = v75;
          }
        }
        v55 = (float)-v48 * 0.5;
        if ( v43 )
        {
          v56 = (unsigned int *)*((_QWORD *)v43 + 7);
          v57 = *v56;
          if ( (_DWORD)v57 )
          {
            v58 = (__int64 **)*((_QWORD *)v56 + 2);
            for ( k = &v58[v57 - 1]; v58 <= k; ++v58 )
            {
              v60 = *v58;
              if ( !*v58 )
                break;
              cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v88, (const struct cocos2d::CCSize *)&unk_903BF8);
              v61 = *v60;
              v62 = (*(double (__fastcall **)(__int64 *))(*v60 + 128))(v60);
              cocos2d::CCPoint::CCPoint(
                (cocos2d::CCPoint *)v82,
                (float)((float)(*(float *)&v62 * *(float *)&v88) * 0.5) + v55,
                0.0);
              (*(void (__fastcall **)(__int64 *, __int64))(v61 + 184))(v60, v63);
              v64 = (*(__int64 (__fastcall **)(__int64 *))(*v60 + 200))(v60);
              cocos2d::CCPoint::operator+(v47, &v77, v64);
              (*(void (__fastcall **)(__int64 *, cocos2d::CCArray **))(*v60 + 184))(v60, &v77);
              v65 = (*(float (__fastcall **)(__int64 *))(*v60 + 128))(v60);
              v55 = v55 + (float)((float)(v65 * *(float *)&v88) + 112.0);
            }
          }
          v5 = v75;
        }
        ++v38;
        v66 = cocos2d::CCArray::count(v5);
        v3 = v79;
      }
      while ( v38 < v66 );
      v11 = (int)v89;
    }
    LOBYTE(v40) = 1;
    v67 = sub_3F960((_DWORD)v79, v39, v40, 0, 0);
    *(_QWORD *)(a1 + 440) = v67;
    *(_QWORD *)(v67 + 544) = a1 + 408;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 464LL))(a1, *(_QWORD *)(a1 + 440));
    v69 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v68);
    ScreenBottom = cocos2d::CCDirector::getScreenBottom(v69);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v88, v80[0] * 0.5, ScreenBottom + 15.0);
    v71 = *(_QWORD *)(a1 + 440);
    cocos2d::CCPoint::operator=(v71 + 572, v72);
    result = sub_40290(v71);
    if ( v11 > 0 )
    {
      v73 = *(_QWORD *)(a1 + 440);
      if ( *(_BYTE *)(v73 + 456) )
        v74 = *(cocos2d::CCArray **)(v73 + 448);
      else
        v74 = *(cocos2d::CCArray **)(v73 + 480);
      if ( v11 == cocos2d::CCArray::count(v74) - 1 )
        GauntletSelectLayer_goToPage(a1, v11 - 1, 1);
      return (unsigned int)GauntletSelectLayer_goToPage(a1, v11, 1);
    }
  }
  return result;
}

// Address: 0x2fcca0
// Method: GauntletSelectLayer::unlockAnimationStep3
// Hidden C++ exception states: #wind=2
void __fastcall GauntletSelectLayer_unlockAnimationStep3(__int64 a1)
{
  struct cocos2d::CCObject *v2; // r12
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  void *v6; // r8
  __int64 v7; // r9
  cocos2d::CCParticleSystem *v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 (__fastcall *v13)(struct cocos2d::CCObject *); // rdi
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  void *v18; // rcx
  __int16 v19; // [rsp+30h] [rbp-D0h]
  __int16 v20; // [rsp+30h] [rbp-D0h]
  _BYTE v21[8]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v22[8]; // [rsp+48h] [rbp-B8h] BYREF
  float v23; // [rsp+50h] [rbp-B0h] BYREF
  float v24; // [rsp+54h] [rbp-ACh]
  float v25; // [rsp+58h] [rbp-A8h]
  int v26; // [rsp+5Ch] [rbp-A4h]
  void *Block[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+70h] [rbp-90h]
  unsigned __int64 v29; // [rsp+78h] [rbp-88h]
  unsigned int v30[66]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v31[40]; // [rsp+188h] [rbp+88h] BYREF

  v2 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 496), *(int *)(a1 + 508));
  v4 = cocos2d::CCDirector::sharedDirector(v3);
  cocos2d::CCDirector::getWinSize(v4, v21);
  *(_OWORD *)Block = 0;
  v28 = 0;
  v29 = 0;
  v6 = (void *)sub_3C460(176);
  Block[0] = v6;
  v28 = 170;
  v29 = 175;
  strcpy(
    (char *)v6,
    "84a0.97a1a0.16a72a180a180a29a0a11a0a0a0a0a0a0a0a2a1a0a0a1a0a0a0a0a0a1a0a1a1a0a0a1a0a0.568627a0a0a0a1a0a0.8a0a0.2a0a1"
    "50a0a0a0a0a0a1a2a1a0a0a0a0a0a0a0a0a0a0a0a0a0a0a0a0a0a0");
  if ( v28 )
  {
    sub_6AE20(v30, v5, v6, v7);
    KeyframeObject_setupSpline((__int64 *)Block, (__int64)v30);
    v8 = GameToolbox_particleFromStruct(v30, 0, 0);
    sub_3C310(v31);
  }
  else
  {
    v8 = 0;
  }
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *))(*(_QWORD *)v8 + 1200LL))(v8);
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *))(*(_QWORD *)v8 + 1216LL))(v8);
  v9 = *(_QWORD *)v8;
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *))(*(_QWORD *)v8 + 960LL))(v8);
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *))(v9 + 968))(v8);
  v10 = *(_QWORD *)v8;
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *))(*(_QWORD *)v8 + 912LL))(v8);
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *))(v10 + 920))(v8);
  LOBYTE(v11) = 1;
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __int64))(*(_QWORD *)v8 + 1544LL))(v8, v11);
  (*(void (__fastcall **)(__int64, cocos2d::CCParticleSystem *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v8, 11);
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *))(*(_QWORD *)v8 + 160LL))(v8);
  cocos2d::CCParticleSystem::resetSystem(v8);
  v12 = *(_QWORD *)v8;
  v13 = *(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v2 + 504LL);
  v14 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v2 + 200LL))(v2);
  v15 = v13(v2);
  cocos2d::CCNode::convertToWorldSpace(v15, v22, v14);
  cocos2d::CCNode::convertToNodeSpace(a1, &v23, v16);
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __int64))(v12 + 184))(v8, v17);
  v19 = *((_WORD *)v2 + 168);
  v23 = (float)(unsigned __int8)v19 / 255.0;
  v24 = (float)HIBYTE(v19) / 255.0;
  v25 = (float)*((unsigned __int8 *)v2 + 338) / 255.0;
  v26 = 1065353216;
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *, float *))(*(_QWORD *)v8 + 1352LL))(v8, &v23);
  v20 = *((_WORD *)v2 + 168);
  v23 = (float)(unsigned __int8)v20 / 255.0;
  v24 = (float)HIBYTE(v20) / 255.0;
  v25 = (float)*((unsigned __int8 *)v2 + 338) / 255.0;
  v26 = 1065353216;
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *, float *))(*(_QWORD *)v8 + 1384LL))(v8, &v23);
  if ( v29 > 0xF )
  {
    v18 = Block[0];
    if ( v29 + 1 >= 0x1000 )
    {
      v18 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v18 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v18);
  }
}
