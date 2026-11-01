#include <Geode/binding/ParentalOptionsLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x45840
// Method: ParentalOptionsLayer::addToggle
// Hidden C++ exception states: #wind=2
void __fastcall ParentalOptionsLayer_addToggle(float *a1, float a2, __int64 a3)
{
  __int64 v5; // r8
  void **v6; // rcx
  char *v7; // r14
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r15
  size_t v10; // r8
  int v11; // esi
  char *v12; // rax
  __int64 v13; // r8
  __int128 *p_Buf2; // rcx
  char *v15; // rsi
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // r14
  size_t v18; // r8
  int v19; // ebx
  char *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int128 Buf2; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int64 v25; // [rsp+40h] [rbp-29h]
  unsigned __int64 v26; // [rsp+48h] [rbp-21h]
  void *Buf1[2]; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int64 v28; // [rsp+60h] [rbp-9h]
  unsigned __int64 v29; // [rsp+68h] [rbp-1h]

  HIWORD(Buf2) = 0; /*0x4587e*/
  v25 = 7; /*0x45887*/
  v26 = 15; /*0x4588b*/
  qmemcpy(&Buf2, "opacit", 6); /*0x4589a*/
  *(_QWORD *)((char *)&Buf2 + 6) = (unsigned __int8)aOpacity[6]; /*0x458af*/
  *(_OWORD *)Buf1 = 0; /*0x458b6*/
  v28 = 0; /*0x458bd*/
  v29 = 0; /*0x458c1*/
  v5 = -1; /*0x458c5*/
  do /*0x458d3*/
    ++v5; /*0x458d0*/
  while ( *(_BYTE *)(a3 + v5) ); /*0x458d3*/
  sub_3C230(Buf1); /*0x458e0*/
  v6 = Buf1; /*0x458e5*/
  v7 = (char *)Buf1[0]; /*0x458e9*/
  v8 = v29; /*0x458ed*/
  if ( v29 > 0xF ) /*0x458f5*/
    v6 = (void **)Buf1[0]; /*0x458f5*/
  v9 = v28; /*0x458f9*/
  v10 = v28; /*0x458fd*/
  if ( v28 > 7 ) /*0x45904*/
    v10 = 7; /*0x45904*/
  v11 = memcmp(v6, &Buf2, v10); /*0x45911*/
  if ( !v11 ) /*0x45915*/
  {
    if ( v9 >= 7 ) /*0x4591b*/
      v11 = v9 > 7; /*0x45927*/
    else
      v11 = -1; /*0x4591d*/
  }
  if ( v8 > 0xF ) /*0x4592f*/
  {
    v12 = v7; /*0x45935*/
    if ( v8 + 1 >= 0x1000 ) /*0x4593f*/
    {
      v7 = (char *)*((_QWORD *)v7 - 1); /*0x45945*/
      if ( (unsigned __int64)(v12 - v7 - 8) > 0x1F ) /*0x45954*/
        invoke_watson(0, 0, 0, 0, 0); /*0x45965*/
    }
    j_j_free(v7); /*0x4596f*/
  }
  if ( v11 ) /*0x45977*/
  {
    *(_OWORD *)Buf1 = 0; /*0x45989*/
    v28 = 6; /*0x45993*/
    v29 = 15; /*0x45997*/
    strcpy((char *)Buf1, "radius"); /*0x459a5*/
    Buf2 = 0; /*0x459b7*/
    v25 = 0; /*0x459bb*/
    v26 = 0; /*0x459bf*/
    v13 = -1; /*0x459c3*/
    do /*0x459d3*/
      ++v13; /*0x459d0*/
    while ( *(_BYTE *)(a3 + v13) ); /*0x459d3*/
    sub_3C230(&Buf2); /*0x459e1*/
    p_Buf2 = &Buf2; /*0x459e6*/
    v15 = (char *)Buf2; /*0x459ea*/
    v16 = v26; /*0x459ee*/
    if ( v26 > 0xF ) /*0x459f6*/
      p_Buf2 = (__int128 *)Buf2; /*0x459f6*/
    v17 = v25; /*0x459fa*/
    v18 = v25; /*0x459fe*/
    if ( v25 > 6 ) /*0x45a05*/
      v18 = 6; /*0x45a05*/
    v19 = memcmp(p_Buf2, Buf1, v18); /*0x45a12*/
    if ( !v19 ) /*0x45a16*/
    {
      if ( v17 >= 6 ) /*0x45a1c*/
        v19 = v17 > 6; /*0x45a28*/
      else
        v19 = -1; /*0x45a1e*/
    }
    if ( v16 > 0xF ) /*0x45a2f*/
    {
      v20 = v15; /*0x45a35*/
      if ( v16 + 1 >= 0x1000 ) /*0x45a3f*/
      {
        v15 = (char *)*((_QWORD *)v15 - 1); /*0x45a45*/
        if ( (unsigned __int64)(v20 - v15 - 8) > 0x1F ) /*0x45a54*/
          invoke_watson(0, 0, 0, 0, 0); /*0x45a65*/
      }
      j_j_free(v15); /*0x45a6f*/
    }
    if ( !v19 ) /*0x45a77*/
      a1[83] = a2; /*0x45a79*/
  }
  else
  {
    a1[84] = a2; /*0x45979*/
  }
  v21 = *((_QWORD *)a1 + 40); /*0x45a81*/
  if ( v21 ) /*0x45a8b*/
  {
    v22 = *(_QWORD *)a1; /*0x45a8d*/
    v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 200LL))(v21); /*0x45a93*/
    (*(void (__fastcall **)(float *, __int64))(v22 + 184))(a1, v23); /*0x45a9f*/
  }
}

// [2/3] Address: 0x4cd340
// Method: ParentalOptionsLayer::init
// Hidden C++ exception states: #wind=1
bool __fastcall ParentalOptionsLayer_init(__int64 a1)
{
  bool result; // al
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  struct cocos2d::CCLabelBMFont *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  cocos2d::CCObject *v14; // rax
  cocos2d::CCObject *v15; // rax
  __int64 v16; // rcx
  cocos2d::CCObject *v17; // rax
  __int64 v18; // rcx
  cocos2d::CCObject *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  int v25; // eax
  cocos2d::CCObject *v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  struct cocos2d::CCSprite *v31; // rbx
  struct cocos2d::CCSprite *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rbx
  bool GameVariable; // al
  __int64 v36; // rcx
  __int64 v37; // rsi
  __int64 v38; // rbx
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rax
  float v42; // xmm7_4
  int v43; // eax
  cocos2d::CCObject *v44; // rax
  __int64 v45; // rsi
  __int64 v46; // rbx
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rax
  cocos2d::CCSprite *v50; // rax
  cocos2d::CCObject *v51; // rax
  __int64 v52; // rsi
  __int64 v53; // rbx
  __int64 v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rax
  _BYTE v57[16]; // [rsp+30h] [rbp-40h] BYREF
  float v58; // [rsp+A8h] [rbp+38h] BYREF
  float v59; // [rsp+ACh] [rbp+3Ch]
  void *v60; // [rsp+B0h] [rbp+40h] BYREF
  char v61; // [rsp+B8h] [rbp+48h] BYREF

  result = FLAlertLayer_init(a1, 75); /*0x4cd366*/
  if ( result ) /*0x4cd36d*/
  {
    *(_BYTE *)(a1 + 596) = 1; /*0x4cd373*/
    v4 = cocos2d::CCDirector::sharedDirector(v3); /*0x4cd37b*/
    cocos2d::CCDirector::getWinSize(v4, &v58); /*0x4cd388*/
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v57, 0.0, 0.0, 80.0, 80.0); /*0x4cd3a6*/
    v6 = (__int64 *)cocos2d::extension::CCScale9Sprite::create("GJ_square02.png", v5); /*0x4cd3bc*/
    v7 = *v6; /*0x4cd3bf*/
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v60, 360.0, 260.0); /*0x4cd3d6*/
    (*(void (__fastcall **)(__int64 *, __int64))(v7 + 312))(v6, v8); /*0x4cd3e2*/
    (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))( /*0x4cd3fb*/
      *(_QWORD *)(a1 + 584),
      v6,
      0xFFFFFFFFLL);
    v9 = *v6; /*0x4cd401*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v60, v58 * 0.5, v59 * 0.5); /*0x4cd425*/
    (*(void (__fastcall **)(__int64 *, __int64))(v9 + 184))(v6, v10); /*0x4cd431*/
    v11 = cocos2d::CCLabelBMFont::create("Parental Control", (const char *)&qword_6FFF68); /*0x4cd44b*/
    v12 = *(_QWORD *)v11; /*0x4cd44e*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v60, v58 * 0.5, (float)((float)(v59 * 0.5) + 130.0) - 16.0); /*0x4cd47d*/
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v12 + 184))(v11, v13); /*0x4cd489*/
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))( /*0x4cd49c*/
      *(_QWORD *)(a1 + 584),
      v11);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v11 + 160LL))(v11); /*0x4cd4b0*/
    v14 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x4cd4b6*/
    *(_QWORD *)(a1 + 688) = v14; /*0x4cd4bc*/
    cocos2d::CCObject::retain(v14); /*0x4cd4c6*/
    v15 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x4cd4cc*/
    *(_QWORD *)(a1 + 680) = v15; /*0x4cd4d2*/
    cocos2d::CCObject::retain(v15); /*0x4cd4dc*/
    v17 = (cocos2d::CCObject *)cocos2d::CCArray::create(v16); /*0x4cd4e2*/
    *(_QWORD *)(a1 + 720) = v17; /*0x4cd4e8*/
    cocos2d::CCObject::retain(v17); /*0x4cd4f2*/
    v19 = (cocos2d::CCObject *)cocos2d::CCArray::create(v18); /*0x4cd4f8*/
    *(_QWORD *)(a1 + 728) = v19; /*0x4cd4fe*/
    cocos2d::CCObject::retain(v19); /*0x4cd508*/
    v24 = cocos2d::CCMenu::create(v21, v20, v22, v23); /*0x4cd50e*/
    *(_QWORD *)(a1 + 552) = v24; /*0x4cd514*/
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v24, 10); /*0x4cd535*/
    sub_4CD970( /*0x4cd55c*/
      a1,
      "Safe Mode",
      "0218",
      "Blocks all communication.\nOnly approved online levels.",
      "<cy>Safe Mode</c> blocks comments, posts, messages, friend requests, user search and uploads. Online levels are li"
      "mited to <cg>Featured</c>, <cg>Daily</c>, <cg>Weekly</c>, <cg>Events</c>, <cg>Gauntlets</c> and <cg>Map Packs</c>."
      " Social links are hidden. Account privacy is set to block messages, friend requests and comments.");
    sub_4CD970( /*0x4cd585*/
      a1,
      "Offline Mode",
      "0219",
      "No online levels or profiles.\nIncludes Safe Mode.",
      "<cy>Offline Mode</c> blocks everything Safe Mode blocks, plus online levels, profiles and leaderboards.");
    sub_4CE140(a1, "Disable\nComments", "0075"); /*0x4cd5a7*/
    sub_4CE140(a1, "Disable\nPosts", "0076"); /*0x4cd5c9*/
    sub_4CE140(a1, "Disable\nMessaging", "0243"); /*0x4cd5eb*/
    sub_4CE140(a1, "Only Curated\nLevels", "0077"); /*0x4cd60d*/
    sub_4CF4C0(a1); /*0x4cd615*/
    v25 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_closeBtn_001.png"); /*0x4cd621*/
    v26 = CCMenuItemSpriteExtra_create(v25, 0, a1, (__int64)sub_4CF910); /*0x4cd63b*/
    *((_DWORD *)v26 + 93) = 1069547520; /*0x4cd63e*/
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v26); /*0x4cd65c*/
    v27 = *(_QWORD *)v26; /*0x4cd65f*/
    v28 = *(_QWORD *)(a1 + 552); /*0x4cd662*/
    cocos2d::CCPoint::CCPoint( /*0x4cd6a1*/
      (cocos2d::CCPoint *)&v60,
      (float)((float)(v58 * 0.5) - 180.0) + 5.0,
      (float)((float)(v59 * 0.5) + 130.0) - 5.0);
    cocos2d::CCNode::convertToNodeSpace(v28, &v61, v29); /*0x4cd6b1*/
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v27 + 184))(v26, v30); /*0x4cd6bd*/
    v31 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_lock_open_001.png"); /*0x4cd6d0*/
    v32 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_lock_001.png"); /*0x4cd6da*/
    *(_QWORD *)(a1 + 712) = CCMenuItemToggler_create((__int64)v31, (__int64)v32, a1, (__int64)sub_4CEDC0); /*0x4cd6f5*/
    v33 = qword_905FD0; /*0x4cd6fc*/
    if ( !qword_905FD0 ) /*0x4cd706*/
    {
      v60 = operator new(0x6E8u); /*0x4cd712*/
      qword_905FD0 = sub_2723A0(v60); /*0x4cd71f*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4cd730*/
      v33 = qword_905FD0; /*0x4cd732*/
    }
    v34 = *(_QWORD *)(a1 + 712); /*0x4cd739*/
    GameVariable = GameManager_getGameVariable(v33, "0228"); /*0x4cd747*/
    CCMenuItemToggler_toggle(v34, GameVariable); /*0x4cd752*/
    v36 = *(_QWORD *)(a1 + 712); /*0x4cd757*/
    *(_DWORD *)(*(_QWORD *)(v36 + 376) + 372LL) = 1069547520; /*0x4cd765*/
    *(_DWORD *)(*(_QWORD *)(v36 + 384) + 372LL) = 1069547520; /*0x4cd776*/
    CCMenuItemToggler_toggle(v36, *(unsigned __int8 *)(v36 + 392)); /*0x4cd787*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 552) + 464LL))( /*0x4cd79d*/
      *(_QWORD *)(a1 + 552),
      *(_QWORD *)(a1 + 712));
    v37 = **(_QWORD **)(a1 + 712); /*0x4cd7aa*/
    v38 = *(_QWORD *)(a1 + 552); /*0x4cd7ad*/
    v39 = *(_QWORD *)(a1 + 712); /*0x4cd7b4*/
    cocos2d::CCPoint::CCPoint( /*0x4cd7e7*/
      (cocos2d::CCPoint *)&v60,
      (float)((float)(v58 * 0.5) + 180.0) - 24.0,
      (float)((float)(v59 * 0.5) - 130.0) + 24.0);
    cocos2d::CCNode::convertToNodeSpace(v38, &v61, v40); /*0x4cd7f7*/
    (*(void (__fastcall **)(__int64, __int64))(v37 + 184))(v39, v41); /*0x4cd803*/
    v42 = v59 * 0.5; /*0x4cd80e*/
    v43 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_arrow_03_001.png"); /*0x4cd81a*/
    v44 = CCMenuItemSpriteExtra_create(v43, 0, a1, (__int64)sub_4CE850); /*0x4cd82f*/
    *(_QWORD *)(a1 + 736) = v44; /*0x4cd834*/
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v44); /*0x4cd84f*/
    v45 = **(_QWORD **)(a1 + 736); /*0x4cd859*/
    v46 = *(_QWORD *)(a1 + 552); /*0x4cd85c*/
    v47 = *(_QWORD *)(a1 + 736); /*0x4cd863*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v60, (float)(v58 * 0.5) - 224.0, v42); /*0x4cd87f*/
    cocos2d::CCNode::convertToNodeSpace(v46, &v61, v48); /*0x4cd88f*/
    (*(void (__fastcall **)(__int64, __int64))(v45 + 184))(v47, v49); /*0x4cd89b*/
    v50 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_arrow_03_001.png"); /*0x4cd8a8*/
    LODWORD(v46) = (_DWORD)v50; /*0x4cd8ae*/
    cocos2d::CCSprite::setFlipX(v50, 1); /*0x4cd8b6*/
    v51 = CCMenuItemSpriteExtra_create(v46, 0, a1, (__int64)sub_4CE840); /*0x4cd8cb*/
    *(_QWORD *)(a1 + 744) = v51; /*0x4cd8d0*/
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v51); /*0x4cd8eb*/
    v52 = **(_QWORD **)(a1 + 744); /*0x4cd8f5*/
    v53 = *(_QWORD *)(a1 + 552); /*0x4cd8f8*/
    v54 = *(_QWORD *)(a1 + 744); /*0x4cd8ff*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v60, (float)(v58 * 0.5) + 224.0, v42); /*0x4cd91b*/
    cocos2d::CCNode::convertToNodeSpace(v53, &v61, v55); /*0x4cd92b*/
    (*(void (__fastcall **)(__int64, __int64))(v52 + 184))(v54, v56); /*0x4cd937*/
    sub_4CE860(a1, 0); /*0x4cd942*/
    return 1; /*0x4cd947*/
  }
  return result; /*0x4cd949*/
}

// [3/3] Address: 0x4cf9a0
// Method: ParentalOptionsLayer::keyBackClicked
__int64 __fastcall ParentalOptionsLayer_keyBackClicked(__int64 a1)
{
  return sub_4CF910(a1 - 336, 0);
}
