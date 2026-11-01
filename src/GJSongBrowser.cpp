#include <Geode/binding/GJSongBrowser.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/8] Address: 0x3b9b90
// Method: GJSongBrowser::~GJSongBrowser
// Hidden C++ exception states: #wind=1
struct cocos2d::CCObject *__fastcall GJSongBrowser__dtor_GJSongBrowser(struct cocos2d::CCObject *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *(_QWORD *)Block = &GJSongBrowser::`vftable'; /*0x3b9ba6*/
  *((_QWORD *)Block + 40) = &GJSongBrowser::`vftable'; /*0x3b9bb0*/
  *((_QWORD *)Block + 41) = &GJSongBrowser::`vftable'; /*0x3b9bbe*/
  *((_QWORD *)Block + 42) = &GJSongBrowser::`vftable'; /*0x3b9bcc*/
  *((_QWORD *)Block + 43) = &GJSongBrowser::`vftable'; /*0x3b9bda*/
  *((_QWORD *)Block + 44) = &GJSongBrowser::`vftable'; /*0x3b9be8*/
  *((_QWORD *)Block + 51) = &GJSongBrowser::`vftable'; /*0x3b9bf6*/
  *((_QWORD *)Block + 54) = &GJSongBrowser::`vftable'; /*0x3b9c04*/
  *((_QWORD *)Block + 76) = &GJSongBrowser::`vftable'; /*0x3b9c12*/
  *((_QWORD *)Block + 77) = &GJSongBrowser::`vftable'; /*0x3b9c20*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 84); /*0x3b9c27*/
  if ( v4 ) /*0x3b9c31*/
    cocos2d::CCObject::release(v4); /*0x3b9c33*/
  GJDropDownLayer__dtor_GJDropDownLayer(Block); /*0x3b9c3c*/
  if ( (a2 & 1) != 0 ) /*0x3b9c46*/
    j_j_free(Block); /*0x3b9c50*/
  return Block; /*0x3b9c58*/
}

// [2/8] Address: 0x3b9c70
// Method: GJSongBrowser::create
// Hidden C++ exception states: #wind=2
cocos2d::CCObject *GJSongBrowser_create()
{
  cocos2d::CCObject *v0; // rbx
  __int64 (__fastcall *v1)(cocos2d::CCObject *); // rdx
  char v2; // al

  v0 = (cocos2d::CCObject *)operator new(0x2B0u); /*0x3b9c84*/
  GJDropDownLayer_GJDropDownLayer((__int64)v0); /*0x3b9c8f*/
  *(_QWORD *)v0 = &GJSongBrowser::`vftable'; /*0x3b9c9c*/
  *((_QWORD *)v0 + 40) = &GJSongBrowser::`vftable'; /*0x3b9ca6*/
  *((_QWORD *)v0 + 41) = &GJSongBrowser::`vftable'; /*0x3b9cb4*/
  *((_QWORD *)v0 + 42) = &GJSongBrowser::`vftable'; /*0x3b9cc2*/
  *((_QWORD *)v0 + 43) = &GJSongBrowser::`vftable'; /*0x3b9cd0*/
  *((_QWORD *)v0 + 44) = &GJSongBrowser::`vftable'; /*0x3b9cde*/
  *((_QWORD *)v0 + 51) = &GJSongBrowser::`vftable'; /*0x3b9cec*/
  *((_QWORD *)v0 + 54) = &GJSongBrowser::`vftable'; /*0x3b9cfa*/
  *((_QWORD *)v0 + 76) = &GJSongBrowser::`vftable'; /*0x3b9d08*/
  *((_QWORD *)v0 + 77) = &GJSongBrowser::`vftable'; /*0x3b9d16*/
  *((_QWORD *)v0 + 78) = 0; /*0x3b9d1f*/
  *((_BYTE *)v0 + 632) = 0; /*0x3b9d26*/
  *((_QWORD *)v0 + 80) = 0; /*0x3b9d2d*/
  *((_QWORD *)v0 + 81) = 0; /*0x3b9d34*/
  *((_QWORD *)v0 + 82) = 0; /*0x3b9d3b*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCObject *)((char *)v0 + 664)); /*0x3b9d49*/
  *((_QWORD *)v0 + 84) = 0; /*0x3b9d4f*/
  *((_QWORD *)v0 + 85) = 0; /*0x3b9d56*/
  v1 = *(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v0 + 72LL); /*0x3b9d60*/
  if ( (char *)v1 == (char *)GJSongBrowser_init ) /*0x3b9d71*/
    v2 = GJSongBrowser_init(v0); /*0x3b9d73*/
  else
    v2 = v1(v0); /*0x3b9d7a*/
  if ( v2 ) /*0x3b9d7e*/
  {
    cocos2d::CCObject::autorelease(v0); /*0x3b9d83*/
    return v0; /*0x3b9d89*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v0 + 8LL))(v0, 1); /*0x3b9da6*/
    return 0; /*0x3b9da9*/
  }
}

// [3/8] Address: 0x3b9dc0
// Method: GJSongBrowser::init
bool __fastcall GJSongBrowser_init(__int64 *a1)
{
  bool result; // al

  result = GJDropDownLayer_init(a1, (int)"Downloaded Songs", 220.0, 0); /*0x3b9ddb*/
  if ( result ) /*0x3b9de2*/
  {
    sub_3BA290(a1, 0); /*0x3b9def*/
    return 1; /*0x3b9df4*/
  }
  return result; /*0x3b9de4*/
}

// [4/8] Address: 0x3b9e00
// Method: GJSongBrowser::exitLayer
__int64 __fastcall GJSongBrowser_exitLayer(unsigned __int8 *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  void *v5; // [rsp+30h] [rbp+8h]

  v2 = qword_905F60; /*0x3b9e0d*/
  if ( !qword_905F60 ) /*0x3b9e17*/
  {
    v5 = operator new(0x8A8u); /*0x3b9e23*/
    qword_905F60 = sub_5AE20(v5); /*0x3b9e31*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x3b9e42*/
    v2 = qword_905F60; /*0x3b9e44*/
  }
  v3 = *(_QWORD *)(v2 + 552); /*0x3b9e4b*/
  if ( v3 ) /*0x3b9e55*/
    FMOD::ChannelControl::stop(v3); /*0x3b9e57*/
  sub_3DB60(v2 + 1096); /*0x3b9e64*/
  sub_3DB60(v2 + 1160); /*0x3b9e70*/
  sub_3DB60(v2 + 1224); /*0x3b9e7c*/
  (*(void (__fastcall **)(unsigned __int8 *, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x3b9e89*/
  (*(void (__fastcall **)(unsigned __int8 *))(*(_QWORD *)a1 + 1120LL))(a1); /*0x3b9e95*/
  return (*(__int64 (__fastcall **)(unsigned __int8 *, _QWORD))(*(_QWORD *)a1 + 1088LL))(a1, a1[600]);
}

// [5/8] Address: 0x3b9ec0
// Method: GJSongBrowser::customSetup
// Hidden C++ exception states: #wind=1
__int64 __fastcall GJSongBrowser_customSetup(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rsi
  float v8; // xmm7_4
  struct cocos2d::CCSprite *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  cocos2d::CCDirector *v13; // rax
  float v14; // xmm0_4
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  cocos2d::CCSprite *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rcx
  cocos2d::CCDirector *v22; // rax
  float v23; // xmm0_4
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  struct cocos2d::CCSprite *v27; // rbx
  __int64 *v28; // rdi
  float v29; // xmm7_4
  __int64 v30; // rbx
  __int64 v31; // rcx
  cocos2d::CCDirector *v32; // rax
  float v33; // xmm6_4
  __int64 v34; // rcx
  cocos2d::CCDirector *v35; // rax
  float v36; // xmm0_4
  __int64 v37; // rax
  __int64 v38; // rax
  struct cocos2d::CCLabelBMFont *v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rcx
  cocos2d::CCDirector *v42; // rax
  float v43; // xmm6_4
  __int64 v44; // rcx
  cocos2d::CCDirector *v45; // rax
  float v46; // xmm1_4
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rcx
  cocos2d::CCObject *DownloadedSongs; // rax
  __int64 v54; // rdx
  void *v56; // [rsp+60h] [rbp+8h] BYREF
  char v57; // [rsp+68h] [rbp+10h] BYREF
  float v58; // [rsp+6Ch] [rbp+14h]
  char v59; // [rsp+70h] [rbp+18h] BYREF

  v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x3b9ed9*/
  cocos2d::CCDirector::getWinSize(v2, &v57); /*0x3b9ee7*/
  v7 = cocos2d::CCMenu::create(v4, v3, v5, v6); /*0x3b9ef3*/
  v8 = v58 * 0.5; /*0x3b9efc*/
  v9 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_arrow_01_001.png"); /*0x3b9f0b*/
  v10 = CCMenuItemSpriteExtra_create(v9, 0, a1, sub_3BA4B0); /*0x3b9f20*/
  *(_QWORD *)(a1 + 648) = v10; /*0x3b9f25*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 464LL))(v7, v10); /*0x3b9f3c*/
  v11 = **(_QWORD **)(a1 + 648); /*0x3b9f46*/
  v13 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v12); /*0x3b9f49*/
  v14 = cocos2d::CCDirector::getScreenLeft(v13) + 24.0; /*0x3b9f58*/
  v15 = *(_QWORD *)(a1 + 648); /*0x3b9f60*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v56, v14, v8); /*0x3b9f72*/
  cocos2d::CCNode::convertToNodeSpace(v7, &v59, v16); /*0x3b9f83*/
  (*(void (__fastcall **)(__int64, __int64))(v11 + 184))(v15, v17); /*0x3b9f8f*/
  v18 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_arrow_01_001.png"); /*0x3b9fa2*/
  cocos2d::CCSprite::setFlipX(v18, 1); /*0x3b9faa*/
  v19 = CCMenuItemSpriteExtra_create(v18, 0, a1, sub_3BA4A0); /*0x3b9fbf*/
  *(_QWORD *)(a1 + 640) = v19; /*0x3b9fc4*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 464LL))(v7, v19); /*0x3b9fdb*/
  v20 = **(_QWORD **)(a1 + 640); /*0x3b9fe5*/
  v22 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v21); /*0x3b9fe8*/
  v23 = cocos2d::CCDirector::getScreenRight(v22) - 24.0; /*0x3b9ff7*/
  v24 = *(_QWORD *)(a1 + 640); /*0x3b9fff*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v56, v23, v8); /*0x3ba011*/
  cocos2d::CCNode::convertToNodeSpace(v7, &v59, v25); /*0x3ba022*/
  (*(void (__fastcall **)(__int64, __int64))(v20 + 184))(v24, v26); /*0x3ba02e*/
  v27 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_deleteBtn_001.png"); /*0x3ba041*/
  v28 = (__int64 *)CCMenuItemSpriteExtra_create(v27, 0, a1, sub_3BA4C0); /*0x3ba058*/
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 464LL))(v7, v28); /*0x3ba06b*/
  v29 = (float)(*((float *)v27 + 108) * 0.5) + 4.0; /*0x3ba07e*/
  v30 = *v28; /*0x3ba086*/
  v32 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v31); /*0x3ba089*/
  v33 = cocos2d::CCDirector::getScreenBottom(v32) + v29; /*0x3ba09b*/
  v35 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v34); /*0x3ba09f*/
  v36 = cocos2d::CCDirector::getScreenRight(v35) - v29; /*0x3ba0ae*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v56, v36, v33); /*0x3ba0bd*/
  cocos2d::CCNode::convertToNodeSpace(v7, &v59, v37); /*0x3ba0ce*/
  (*(void (__fastcall **)(__int64 *, __int64))(v30 + 184))(v28, v38); /*0x3ba0da*/
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 576) + 456LL))(*(_QWORD *)(a1 + 576), v7, 10); /*0x3ba0f3*/
  v39 = cocos2d::CCLabelBMFont::create(" ", "goldFont.fnt"); /*0x3ba107*/
  *(_QWORD *)(a1 + 656) = v39; /*0x3ba10d*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 576) + 464LL))( /*0x3ba128*/
    *(_QWORD *)(a1 + 576),
    v39);
  v40 = **(_QWORD **)(a1 + 656); /*0x3ba132*/
  v42 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v41); /*0x3ba135*/
  v43 = cocos2d::CCDirector::getScreenTop(v42) - 4.0; /*0x3ba147*/
  v45 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v44); /*0x3ba14f*/
  v46 = cocos2d::CCDirector::getScreenRight(v45) - 7.0; /*0x3ba161*/
  v47 = *(_QWORD *)(a1 + 656); /*0x3ba170*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v56, v46 - 0.0, v43); /*0x3ba17f*/
  (*(void (__fastcall **)(__int64, __int64))(v40 + 184))(v47, v48); /*0x3ba18b*/
  v49 = **(_QWORD **)(a1 + 656); /*0x3ba198*/
  v50 = *(_QWORD *)(a1 + 656); /*0x3ba19b*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v56, 1.0, 1.0); /*0x3ba1ae*/
  (*(void (__fastcall **)(__int64, __int64))(v49 + 288))(v50, v51); /*0x3ba1ba*/
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 656) + 160LL))(*(_QWORD *)(a1 + 656)); /*0x3ba1d2*/
  v52 = qword_906070; /*0x3ba1d8*/
  if ( !qword_906070 ) /*0x3ba1e2*/
  {
    v56 = operator new(0x3D0u); /*0x3ba1ee*/
    qword_906070 = sub_47C350(v56); /*0x3ba1fc*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x3ba20d*/
    v52 = qword_906070; /*0x3ba20f*/
  }
  DownloadedSongs = MusicDownloadManager_getDownloadedSongs(v52); /*0x3ba216*/
  *(_QWORD *)(a1 + 672) = DownloadedSongs; /*0x3ba21b*/
  cocos2d::CCObject::retain(DownloadedSongs); /*0x3ba225*/
  LOBYTE(v54) = -1; /*0x3ba23c*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 568) + 408LL) + 40LL))( /*0x3ba23e*/
    *(_QWORD *)(a1 + 568) + 408LL,
    v54);
  memset(&v56, 50, 3); /*0x3ba24d*/
  return (**(__int64 (__fastcall ***)(__int64, void **))(*(_QWORD *)(a1 + 568) + 408LL))( /*0x3ba26f*/
           *(_QWORD *)(a1 + 568) + 408LL,
           &v56);
}

// [6/8] Address: 0x3ba5e0
// Method: GJSongBrowser::FLAlert_Clicked
// Hidden C++ exception states: #wind=3
__int64 __fastcall GJSongBrowser_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int64 v6; // rcx
  cocos2d::CCArray *DownloadedSongs; // rdi
  unsigned int i; // ebx
  struct cocos2d::CCObject *v9; // rsi
  __int64 v10; // rcx
  const char *v11; // rcx
  __int64 v12; // rcx
  void *v13; // [rsp+20h] [rbp-48h]
  void *v14; // [rsp+20h] [rbp-48h]
  void *v15; // [rsp+20h] [rbp-48h]
  char *FileName[4]; // [rsp+28h] [rbp-40h] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x3ba608*/
  if ( (_DWORD)result == 1 && a3 ) /*0x3ba616*/
  {
    v6 = qword_906070; /*0x3ba61c*/
    if ( !qword_906070 ) /*0x3ba626*/
    {
      v13 = operator new(0x3D0u); /*0x3ba632*/
      qword_906070 = sub_47C350(v13); /*0x3ba640*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x3ba651*/
      v6 = qword_906070; /*0x3ba653*/
    }
    DownloadedSongs = MusicDownloadManager_getDownloadedSongs(v6); /*0x3ba65f*/
    for ( i = 0; i < cocos2d::CCArray::count(DownloadedSongs); ++i ) /*0x3ba667*/
    {
      v9 = cocos2d::CCArray::objectAtIndex(DownloadedSongs, i); /*0x3ba680*/
      v10 = qword_906070; /*0x3ba683*/
      if ( !qword_906070 ) /*0x3ba68d*/
      {
        v14 = operator new(0x3D0u); /*0x3ba699*/
        qword_906070 = sub_47C350(v14); /*0x3ba6a7*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x3ba6b8*/
        v10 = qword_906070; /*0x3ba6ba*/
      }
      MusicDownloadManager_pathForSong(v10, FileName, *((_DWORD *)v9 + 80)); /*0x3ba6cd*/
      v11 = (const char *)FileName; /*0x3ba6d2*/
      if ( FileName[3] > (_BYTE *)&loc_D + 2 ) /*0x3ba6dd*/
        v11 = FileName[0]; /*0x3ba6dd*/
      remove(v11); /*0x3ba6e3*/
      sub_3C310(FileName); /*0x3ba6ee*/
    }
    v12 = qword_906070; /*0x3ba706*/
    if ( !qword_906070 ) /*0x3ba710*/
    {
      v15 = operator new(0x3D0u); /*0x3ba71c*/
      qword_906070 = sub_47C350(v15); /*0x3ba72a*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x3ba73b*/
      v12 = qword_906070; /*0x3ba73d*/
    }
    MusicDownloadManager_clearUnusedSongs(v12); /*0x3ba744*/
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 608) + 1072LL))(a1 - 608, 0); /*0x3ba755*/
  }
  return result; /*0x3ba75b*/
}

// [7/8] Address: 0x3ba780
// Method: GJSongBrowser::cellPerformedAction
char __fastcall GJSongBrowser_cellPerformedAction(__int64 a1, __int64 a2, int a3, int a4)
{
  if ( a3 != 14 ) /*0x3ba784*/
    return 0; /*0x3ba7a3*/
  if ( a4 == 1 ) /*0x3ba78a*/
  {
    *(_DWORD *)(a1 + 12) = *(_DWORD *)(*(_QWORD *)(a2 + 568) + 320LL); /*0x3ba799*/
    *(_BYTE *)(a1 + 16) = 1; /*0x3ba79c*/
  }
  return 1; /*0x3ba7a2*/
}

// [8/8] Address: 0x3ba7b0
// Method: GJSongBrowser::getSelectedCellIdx
__int64 __fastcall GJSongBrowser_getSelectedCellIdx(__int64 a1)
{
  return *(unsigned int *)(a1 + 12); /*0x3ba7b3*/
}
