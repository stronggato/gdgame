#include <Geode/binding/CustomSongWidget.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/23] Address: 0x15fcb0
// Method: CustomSongWidget::onSelect
__int64 __fastcall CustomSongWidget_onSelect(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 336) ) /*0x15fcb6*/
  {
    v2 = *(_QWORD *)(a1 + 480); /*0x15fcc5*/
    if ( v2 ) /*0x15fccf*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 48LL))(v2); /*0x15fcd4*/
    return sub_1600C0(a1); /*0x15fcdf*/
  }
  return result; /*0x15fcda*/
}

// [3/23] Address: 0x166b30
// Method: CustomSongWidget::create
// Hidden C++ exception states: #wind=5
cocos2d::CCNode *__fastcall CustomSongWidget_create(
        int a1,
        int a2,
        unsigned __int8 a3,
        char a4,
        char a5,
        char a6,
        char a7,
        char a8,
        int a9,
        char a10,
        char a11)
{
  cocos2d::CCNode *v15; // r15
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax

  v15 = (cocos2d::CCNode *)operator new(0x278u); /*0x166b66*/
  cocos2d::CCNode::CCNode(v15); /*0x166b71*/
  *(_QWORD *)v15 = &CustomSongWidget::`vftable'; /*0x166b7f*/
  *((_QWORD *)v15 + 40) = &CustomSongWidget::`vftable'; /*0x166b89*/
  *((_QWORD *)v15 + 41) = &CustomSongWidget::`vftable'; /*0x166b97*/
  *((_QWORD *)v15 + 42) = 0; /*0x166ba1*/
  *((_QWORD *)v15 + 44) = 0; /*0x166ba8*/
  *((_QWORD *)v15 + 45) = 0; /*0x166baf*/
  *((_QWORD *)v15 + 46) = 0; /*0x166bb6*/
  *((_QWORD *)v15 + 48) = 0; /*0x166bbd*/
  *((_QWORD *)v15 + 50) = 0; /*0x166bc4*/
  *((_QWORD *)v15 + 52) = 0; /*0x166bcb*/
  *((_QWORD *)v15 + 54) = 0; /*0x166bd2*/
  *((_QWORD *)v15 + 56) = 0; /*0x166bd9*/
  *((_QWORD *)v15 + 57) = 0; /*0x166be0*/
  *((_QWORD *)v15 + 58) = 0; /*0x166be7*/
  *((_QWORD *)v15 + 59) = 0; /*0x166bee*/
  *((_QWORD *)v15 + 60) = 0; /*0x166bf5*/
  *((_QWORD *)v15 + 61) = 0; /*0x166bfc*/
  *((_DWORD *)v15 + 124) = 0; /*0x166c03*/
  *((_WORD *)v15 + 250) = 0; /*0x166c0a*/
  *((_BYTE *)v15 + 502) = 0; /*0x166c12*/
  *((_QWORD *)v15 + 63) = 0; /*0x166c19*/
  *((_BYTE *)v15 + 512) = 0; /*0x166c20*/
  *((_QWORD *)v15 + 65) = 0; /*0x166c27*/
  *((_WORD *)v15 + 264) = 0; /*0x166c2e*/
  *((_QWORD *)v15 + 67) = 0; /*0x166c36*/
  *((_WORD *)v15 + 272) = 0; /*0x166c3d*/
  *((_QWORD *)v15 + 69) = 0; /*0x166c45*/
  *((_QWORD *)v15 + 70) = 0; /*0x166c4c*/
  v16 = operator new(0x28u); /*0x166c58*/
  *v16 = v16; /*0x166c5d*/
  v16[1] = v16; /*0x166c60*/
  v16[2] = v16; /*0x166c64*/
  *((_WORD *)v16 + 12) = 257; /*0x166c68*/
  *((_QWORD *)v15 + 69) = v16; /*0x166c6e*/
  *((_QWORD *)v15 + 71) = 0; /*0x166c75*/
  *((_QWORD *)v15 + 72) = 0; /*0x166c7c*/
  v17 = operator new(0x28u); /*0x166c88*/
  *v17 = v17; /*0x166c8d*/
  v17[1] = v17; /*0x166c90*/
  v17[2] = v17; /*0x166c94*/
  *((_WORD *)v17 + 12) = 257; /*0x166c98*/
  *((_QWORD *)v15 + 71) = v17; /*0x166c9e*/
  *((_QWORD *)v15 + 73) = 0; /*0x166ca5*/
  *((_QWORD *)v15 + 74) = 0; /*0x166cac*/
  *((_QWORD *)v15 + 75) = 0; /*0x166cb3*/
  *((_QWORD *)v15 + 76) = 0; /*0x166cba*/
  *((_QWORD *)v15 + 77) = 0; /*0x166cc1*/
  *((_QWORD *)v15 + 78) = 0; /*0x166cc8*/
  v18 = operator new(0x20u); /*0x166cd4*/
  *v18 = v18; /*0x166cd9*/
  v18[1] = v18; /*0x166cdc*/
  v18[2] = v18; /*0x166ce0*/
  *((_WORD *)v18 + 12) = 257; /*0x166ce4*/
  *((_QWORD *)v15 + 77) = v18; /*0x166cea*/
  if ( (unsigned __int8)sub_166DB0((_DWORD)v15, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11) ) /*0x166d56*/
  {
    cocos2d::CCObject::autorelease(v15); /*0x166d62*/
    return v15; /*0x166d68*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCNode *, __int64))(*(_QWORD *)v15 + 8LL))(v15, 1); /*0x166d7c*/
    return 0; /*0x166d7f*/
  }
}

// [4/23] Address: 0x169060
// Method: CustomSongWidget::getSongInfoIfUnloaded
// Hidden C++ exception states: #wind=1
__int64 __fastcall CustomSongWidget_getSongInfoIfUnloaded(__int64 a1)
{
  __int64 v2; // rcx
  char *v3; // rcx
  __int64 result; // rax
  char v5[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]
  __int64 v8; // [rsp+38h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 336); /*0x16906b*/
  if ( v2 && *(_BYTE *)(v2 + 472) ) /*0x16907b*/
  {
    v6 = 0; /*0x169088*/
    v7 = 7; /*0x169090*/
    v8 = 15; /*0x169098*/
    strcpy(v5, "Loading"); /*0x1690a7*/
    v3 = (char *)(v2 + 328); /*0x1690cf*/
    if ( v3 != v5 ) /*0x1690dd*/
      sub_3F5A0(v3, v5, 7u); /*0x1690e9*/
    sub_3C310(v5); /*0x1690f4*/
    CustomSongWidget_updateSongInfo(a1); /*0x1690fc*/
    return sub_1691E0(a1, 0); /*0x16910b*/
  }
  return result; /*0x169106*/
}

// [5/23] Address: 0x169c30
// Method: CustomSongWidget::updatePlaybackBtn
// Hidden C++ exception states: #wind=3
void __fastcall CustomSongWidget_updatePlaybackBtn(__int64 a1)
{
  __int64 *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rcx
  char v6; // al
  __int64 v7; // rbx
  cocos2d::CCSpriteFrameCache *v8; // rax
  const char *v9; // rdx
  struct cocos2d::CCSpriteFrame *v10; // rax
  _BYTE v11[40]; // [rsp+20h] [rbp-28h] BYREF
  void *v12; // [rsp+58h] [rbp+10h]
  void *v13; // [rsp+58h] [rbp+10h]

  if ( *(_QWORD *)(a1 + 336) ) /*0x169c3d*/
  {
    v2 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 416) + 952LL))(*(_QWORD *)(a1 + 416)); /*0x169c5b*/
    v3 = qword_906070; /*0x169c68*/
    if ( !qword_906070 ) /*0x169c72*/
    {
      v12 = operator new(0x3D0u); /*0x169c7e*/
      qword_906070 = sub_47C350(v12); /*0x169c8c*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x169c9d*/
      v3 = qword_906070; /*0x169c9f*/
    }
    v4 = MusicDownloadManager_pathForSong(v3, v11, *(unsigned int *)(*(_QWORD *)(a1 + 336) + 320LL)); /*0x169cbe*/
    v5 = qword_905F60; /*0x169cc1*/
    if ( !qword_905F60 ) /*0x169ccb*/
    {
      v13 = operator new(0x8A8u); /*0x169cd7*/
      qword_905F60 = sub_5AE20(v13); /*0x169ce5*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x169cf6*/
      v5 = qword_905F60; /*0x169cf8*/
    }
    v6 = sub_619A0(v5, v4); /*0x169d02*/
    v7 = *v2; /*0x169d07*/
    if ( v6 ) /*0x169d0c*/
    {
      v8 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x169d0e*/
      v9 = "GJ_stopMusicBtn_001.png"; /*0x169d14*/
    }
    else
    {
      v8 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x169d1d*/
      v9 = "GJ_playMusicBtn_001.png"; /*0x169d23*/
    }
    v10 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v8, v9); /*0x169d2d*/
    (*(void (__fastcall **)(__int64 *, struct cocos2d::CCSpriteFrame *))(v7 + 1008))(v2, v10); /*0x169d39*/
  }
}

// [6/23] Address: 0x169e20
// Method: CustomSongWidget::songStateChanged
void __fastcall CustomSongWidget_songStateChanged(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 - 320; /*0x169e26*/
  CustomSongWidget_updateSongInfo(a1 - 320); /*0x169e30*/
  CustomSongWidget_updatePlaybackBtn(v1); /*0x169e3d*/
}

// [8/23] Address: 0x16b160
// Method: CustomSongWidget::updateMultiAssetInfo
// Hidden C++ exception states: #wind=15
double __fastcall CustomSongWidget_updateMultiAssetInfo(__int64 a1, char a2)
{
  int v3; // r14d
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // r15
  int v7; // r12d
  __int64 *v8; // rbx
  __int64 v9; // rax
  void *v10; // rdx
  __int64 v11; // rax
  void *v12; // rdx
  __int64 **v13; // rcx
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 *v16; // rbx
  size_t v17; // rsi
  unsigned int v18; // edi
  __int64 v19; // rax
  __int64 v20; // r8
  void **v21; // rdx
  void *v22; // rcx
  unsigned int v23; // edi
  __int64 v24; // rax
  __int64 v25; // r8
  void **v26; // rdx
  void *v27; // rcx
  __int64 **v28; // rcx
  __int64 *k; // rax
  __int64 *m; // rcx
  _BYTE *v31; // rbx
  int v32; // r15d
  char v33; // al
  __int64 v34; // rcx
  __int64 v35; // rdx
  bool v36; // di
  __int64 v37; // rbx
  __int64 v38; // rax
  int v39; // r14d
  cocos2d::CCString *v40; // rax
  const char *CString; // rax
  __int64 v42; // r8
  _OWORD *v43; // rax
  char v44; // r14
  void **v45; // r9
  cocos2d::CCString *v46; // rax
  const char *v47; // rax
  __int64 v48; // r8
  void **v49; // rdx
  cocos2d::CCString *v50; // rax
  char *v51; // rax
  void **v52; // rdx
  int *v53; // rdx
  void *v54; // rcx
  void *v55; // rcx
  int v57; // [rsp+30h] [rbp-D0h] BYREF
  char v58; // [rsp+34h] [rbp-CCh]
  int v59; // [rsp+38h] [rbp-C8h] BYREF
  void *Block[2]; // [rsp+40h] [rbp-C0h] BYREF
  size_t Size[2]; // [rsp+50h] [rbp-B0h]
  void *v62[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v63; // [rsp+70h] [rbp-90h]
  _OWORD v64[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v65; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v66; // [rsp+B0h] [rbp-50h]
  __int64 v67; // [rsp+B8h] [rbp-48h]
  __int128 v68; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v69; // [rsp+D0h] [rbp-30h]
  __int64 v70; // [rsp+D8h] [rbp-28h]
  __int128 v71; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v72; // [rsp+F0h] [rbp-10h]
  __int64 v73; // [rsp+F8h] [rbp-8h]
  __int128 Src; // [rsp+100h] [rbp+0h] BYREF
  __int64 v75; // [rsp+110h] [rbp+10h]
  __int64 v76; // [rsp+118h] [rbp+18h]
  _BYTE v77[32]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v78[32]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v79[32]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v80[528]; // [rsp+180h] [rbp+80h] BYREF

  v58 = a2; /*0x16b198*/
  v3 = 0; /*0x16b19f*/
  v57 = 0; /*0x16b1a2*/
  Src = 0; /*0x16b1aa*/
  v4 = 0; /*0x16b1ae*/
  v75 = 0; /*0x16b1b0*/
  v76 = 15; /*0x16b1b4*/
  LOBYTE(Src) = 0; /*0x16b1bc*/
  v71 = 0; /*0x16b1c0*/
  v5 = 0; /*0x16b1c4*/
  v72 = 0; /*0x16b1c6*/
  v73 = 15; /*0x16b1ca*/
  LOBYTE(v71) = 0; /*0x16b1d2*/
  v68 = 0; /*0x16b1d6*/
  v6 = 0; /*0x16b1da*/
  v69 = 0; /*0x16b1dd*/
  v70 = 15; /*0x16b1e1*/
  LOBYTE(v68) = 0; /*0x16b1e9*/
  v65 = 0; /*0x16b1ed*/
  v66 = 0; /*0x16b1f1*/
  v67 = 15; /*0x16b1f5*/
  LOBYTE(v65) = 0; /*0x16b1fd*/
  v59 = *(_DWORD *)(a1 + 576) + *(_DWORD *)(a1 + 560); /*0x16b20d*/
  v7 = 0; /*0x16b211*/
  v8 = **(__int64 ***)(a1 + 552); /*0x16b21b*/
  while ( !*((_BYTE *)v8 + 25) ) /*0x16b21e*/
  {
    if ( *((_BYTE *)v8 + 32) ) /*0x16b228*/
    {
      if ( v4 ) /*0x16b231*/
        sub_43D80(&Src, ", ", 2u); /*0x16b244*/
      v9 = GameToolbox_intToString(v64, *((unsigned int *)v8 + 7)); /*0x16b250*/
      v10 = (void *)v9; /*0x16b256*/
      if ( *(_QWORD *)(v9 + 24) > 0xFu ) /*0x16b25e*/
        v10 = *(void **)v9; /*0x16b260*/
      sub_43D80(&Src, v10, *(_QWORD *)(v9 + 16)); /*0x16b26b*/
      sub_3C310(v64); /*0x16b275*/
      ++v7; /*0x16b27a*/
      v4 = v75; /*0x16b27d*/
    }
    else
    {
      if ( v5 ) /*0x16b286*/
        sub_43D80(&v71, ", ", 2u); /*0x16b299*/
      v11 = GameToolbox_intToString(v64, *((unsigned int *)v8 + 7)); /*0x16b2a5*/
      v12 = (void *)v11; /*0x16b2ab*/
      if ( *(_QWORD *)(v11 + 24) > 0xFu ) /*0x16b2b3*/
        v12 = *(void **)v11; /*0x16b2b5*/
      sub_43D80(&v71, v12, *(_QWORD *)(v11 + 16)); /*0x16b2c0*/
      sub_3C310(v64); /*0x16b2ca*/
      v5 = v72; /*0x16b2cf*/
    }
    v13 = (__int64 **)v8[2]; /*0x16b2d3*/
    if ( *((_BYTE *)v13 + 25) ) /*0x16b2d7*/
    {
      for ( i = (__int64 *)v8[1]; !*((_BYTE *)i + 25); i = (__int64 *)i[1] ) /*0x16b2e1*/
      {
        if ( v8 != (__int64 *)i[2] ) /*0x16b2eb*/
          break; /*0x16b2eb*/
        v8 = i; /*0x16b2ed*/
      }
      v8 = i; /*0x16b2fa*/
    }
    else
    {
      v8 = (__int64 *)v8[2]; /*0x16b2ff*/
      for ( j = *v13; !*((_BYTE *)j + 25); j = (__int64 *)*j ) /*0x16b305*/
        v8 = j; /*0x16b310*/
    }
  }
  v16 = **(__int64 ***)(a1 + 568); /*0x16b330*/
  v17 = -1; /*0x16b333*/
  while ( !*((_BYTE *)v16 + 25) ) /*0x16b33a*/
  {
    if ( *((_BYTE *)v16 + 32) ) /*0x16b344*/
    {
      if ( v6 ) /*0x16b351*/
        sub_43D80(&v68, ", ", 2u); /*0x16b364*/
      v18 = *((_DWORD *)v16 + 7); /*0x16b369*/
      fmt::BasicWriter<char>::BasicWriter<char>(v80); /*0x16b373*/
      fmt::BasicWriter<char>::operator<<(v80, v18); /*0x16b383*/
      v19 = fmt::BasicWriter<char>::c_str(v80); /*0x16b390*/
      *(_OWORD *)Block = 0; /*0x16b399*/
      *(_OWORD *)Size = 0; /*0x16b3a1*/
      v20 = -1; /*0x16b3a7*/
      do /*0x16b3b3*/
        ++v20; /*0x16b3b0*/
      while ( *(_BYTE *)(v19 + v20) ); /*0x16b3b3*/
      sub_3C230(Block); /*0x16b3c2*/
      v3 |= 0x20u; /*0x16b3c7*/
      v57 = v3; /*0x16b3cb*/
      fmt::BasicWriter<char>::~BasicWriter<char>(v80); /*0x16b3d7*/
      v21 = Block; /*0x16b3de*/
      if ( Size[1] > 0xF ) /*0x16b3e9*/
        v21 = (void **)Block[0]; /*0x16b3e9*/
      sub_43D80(&v68, v21, Size[0]); /*0x16b3f8*/
      if ( Size[1] > 0xF ) /*0x16b407*/
      {
        v22 = Block[0]; /*0x16b40c*/
        if ( Size[1] + 1 >= 0x1000 ) /*0x16b41b*/
        {
          v22 = (void *)*((_QWORD *)Block[0] - 1); /*0x16b421*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v22 - 8) > 0x1F ) /*0x16b430*/
            goto LABEL_62; /*0x16b430*/
        }
        j_j_free(v22); /*0x16b436*/
      }
      ++v7; /*0x16b43b*/
      v6 = v69; /*0x16b43e*/
    }
    else
    {
      if ( v66 ) /*0x16b44c*/
        sub_43D80(&v65, ", ", 2u); /*0x16b45f*/
      v23 = *((_DWORD *)v16 + 7); /*0x16b464*/
      fmt::BasicWriter<char>::BasicWriter<char>(v80); /*0x16b46e*/
      fmt::BasicWriter<char>::operator<<(v80, v23); /*0x16b47e*/
      v24 = fmt::BasicWriter<char>::c_str(v80); /*0x16b48b*/
      *(_OWORD *)Block = 0; /*0x16b494*/
      *(_OWORD *)Size = 0; /*0x16b49c*/
      v25 = -1; /*0x16b4a2*/
      do /*0x16b4a8*/
        ++v25; /*0x16b4a5*/
      while ( *(_BYTE *)(v24 + v25) ); /*0x16b4a8*/
      sub_3C230(Block); /*0x16b4b7*/
      v3 |= 0x10u; /*0x16b4bc*/
      v57 = v3; /*0x16b4c0*/
      fmt::BasicWriter<char>::~BasicWriter<char>(v80); /*0x16b4cc*/
      v26 = Block; /*0x16b4d3*/
      if ( Size[1] > 0xF ) /*0x16b4de*/
        v26 = (void **)Block[0]; /*0x16b4de*/
      sub_43D80(&v65, v26, Size[0]); /*0x16b4ed*/
      if ( Size[1] > 0xF ) /*0x16b4fc*/
      {
        v27 = Block[0]; /*0x16b501*/
        if ( Size[1] + 1 >= 0x1000 ) /*0x16b510*/
        {
          v27 = (void *)*((_QWORD *)Block[0] - 1); /*0x16b516*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v27 - 8) > 0x1F ) /*0x16b525*/
LABEL_62:
            invoke_watson(0, 0, 0, 0, 0); /*0x16b5f5*/
        }
        j_j_free(v27); /*0x16b52b*/
      }
    }
    v28 = (__int64 **)v16[2]; /*0x16b530*/
    if ( *((_BYTE *)v28 + 25) ) /*0x16b534*/
    {
      for ( k = (__int64 *)v16[1]; !*((_BYTE *)k + 25); k = (__int64 *)k[1] ) /*0x16b53e*/
      {
        if ( v16 != (__int64 *)k[2] ) /*0x16b548*/
          break; /*0x16b548*/
        v16 = k; /*0x16b54a*/
      }
      v16 = k; /*0x16b557*/
    }
    else
    {
      v16 = (__int64 *)v16[2]; /*0x16b55c*/
      for ( m = *v28; !*((_BYTE *)m + 25); m = (__int64 *)*m ) /*0x16b562*/
        v16 = m; /*0x16b570*/
    }
  }
  if ( !*(_QWORD *)(a1 + 560) && !*(_QWORD *)(a1 + 576) ) /*0x16b593*/
  {
    v31 = (_BYTE *)(a1 + 529); /*0x16b59f*/
    *(_BYTE *)(a1 + 529) = 0; /*0x16b5a6*/
    v32 = v59; /*0x16b5a8*/
LABEL_55:
    v33 = 0; /*0x16b5ad*/
    goto LABEL_56; /*0x16b5ad*/
  }
  v31 = (_BYTE *)(a1 + 529); /*0x16b60f*/
  *(_BYTE *)(a1 + 529) = 1; /*0x16b616*/
  v32 = v59; /*0x16b618*/
  if ( v7 >= v59 ) /*0x16b620*/
    goto LABEL_55; /*0x16b620*/
  v33 = 1; /*0x16b622*/
LABEL_56:
  *(_BYTE *)(a1 + 545) = v33; /*0x16b5af*/
  v34 = *(_QWORD *)(a1 + 440); /*0x16b5b6*/
  if ( v34 ) /*0x16b5c0*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 336LL))(v34); /*0x16b5c5*/
  sub_168790(a1); /*0x16b5ce*/
  if ( *v31 )
  {
    v35 = *(unsigned int *)(a1 + 612); /*0x16b5dc*/
    v36 = (int)v35 > 0 && *(_DWORD *)(a1 + 608) > (int)v35; /*0x16b627*/
    if ( (int)v35 <= 0 ) /*0x16b62c*/
    {
      v43 = (_OWORD *)sub_47D740(v77, *(unsigned int *)(a1 + 608)); /*0x16b6ce*/
      v44 = v3 | 8; /*0x16b6d3*/
    }
    else
    {
      v37 = sub_47D740(v79, v35); /*0x16b63b*/
      v57 = v3 | 1; /*0x16b642*/
      v38 = sub_47D740(v78, *(unsigned int *)(a1 + 608)); /*0x16b652*/
      v39 = v3 | 3; /*0x16b658*/
      v57 = v39; /*0x16b65c*/
      if ( *(_QWORD *)(v38 + 24) > 0xFu ) /*0x16b666*/
        v38 = *(_QWORD *)v38; /*0x16b668*/
      if ( *(_QWORD *)(v37 + 24) > 0xFu ) /*0x16b670*/
        v37 = *(_QWORD *)v37; /*0x16b672*/
      v40 = cocos2d::CCString::createWithFormat("%s / %s", (const char *)v38, (const char *)v37); /*0x16b682*/
      CString = cocos2d::CCString::getCString(v40); /*0x16b68b*/
      memset(v64, 0, sizeof(v64)); /*0x16b694*/
      v42 = -1; /*0x16b6a0*/
      do /*0x16b6a6*/
        ++v42; /*0x16b6a3*/
      while ( CString[v42] ); /*0x16b6a6*/
      sub_3C230(v64); /*0x16b6b4*/
      v43 = v64; /*0x16b6b9*/
      v44 = v39 | 4; /*0x16b6bd*/
    }
    *(_OWORD *)v62 = 0; /*0x16b6da*/
    v63 = 0; /*0x16b6e2*/
    *(_OWORD *)v62 = *v43; /*0x16b6eb*/
    v63 = v43[1]; /*0x16b6f4*/
    *((_QWORD *)v43 + 2) = 0; /*0x16b6fb*/
    *((_QWORD *)v43 + 3) = 15; /*0x16b6ff*/
    *(_BYTE *)v43 = 0; /*0x16b707*/
    if ( (v44 & 8) != 0 ) /*0x16b70d*/
    {
      v44 &= ~8u; /*0x16b70f*/
      sub_3C310(v77); /*0x16b717*/
    }
    if ( (v44 & 4) != 0 ) /*0x16b721*/
    {
      v44 &= ~4u; /*0x16b723*/
      sub_3C310(v64); /*0x16b72b*/
    }
    if ( (v44 & 2) != 0 ) /*0x16b735*/
    {
      v44 &= ~2u; /*0x16b737*/
      sub_3C310(v78); /*0x16b73f*/
    }
    if ( (v44 & 1) != 0 ) /*0x16b749*/
      sub_3C310(v79); /*0x16b74f*/
    v45 = v62; /*0x16b754*/
    if ( *((_QWORD *)&v63 + 1) > 0xFu ) /*0x16b75f*/
      v45 = (void **)v62[0]; /*0x16b75f*/
    v46 = cocos2d::CCString::createWithFormat(
            "Songs: %i  SFX: %i  Size: %s",
            *(_QWORD *)(a1 + 560),
            *(_QWORD *)(a1 + 576),
            (const char *)v45);
    v47 = cocos2d::CCString::getCString(v46); /*0x16b783*/
    *(_OWORD *)Block = 0; /*0x16b78c*/
    *(_OWORD *)Size = 0; /*0x16b794*/
    v48 = -1; /*0x16b79a*/
    do /*0x16b7a3*/
      ++v48; /*0x16b7a0*/
    while ( v47[v48] ); /*0x16b7a3*/
    sub_3C230(Block); /*0x16b7b2*/
    if ( v7 > 0 && v32 > v7 ) /*0x16b7c0*/
    {
      v49 = Block; /*0x16b7c2*/
      if ( Size[1] > 0xF ) /*0x16b7cd*/
        v49 = (void **)Block[0]; /*0x16b7cd*/
      v50 = cocos2d::CCString::createWithFormat("%s (%i/%i)", (const char *)v49, v7, v32); /*0x16b7e0*/
      v51 = (char *)cocos2d::CCString::getCString(v50); /*0x16b7e9*/
      do /*0x16b7f3*/
        ++v17; /*0x16b7f0*/
      while ( v51[v17] ); /*0x16b7f3*/
      sub_3F5A0(Block, v51, v17); /*0x16b804*/
    }
    v52 = Block; /*0x16b809*/
    if ( Size[1] > 0xF ) /*0x16b814*/
      v52 = (void **)Block[0]; /*0x16b814*/
    (**(void (__fastcall ***)(__int64, void **))(*(_QWORD *)(a1 + 368) + 360LL))(*(_QWORD *)(a1 + 368) + 360LL, v52); /*0x16b82b*/
    cocos2d::CCLabelBMFont::limitLabelWidth(*(cocos2d::CCLabelBMFont **)(a1 + 368), 230.0, 0.40000001, 0.0); /*0x16b847*/
    if ( v36 ) /*0x16b850*/
    {
      LOWORD(v59) = 25855; /*0x16b852*/
      BYTE2(v59) = 100; /*0x16b859*/
      v53 = &v59; /*0x16b85e*/
    }
    else
    {
      LOWORD(v57) = -1; /*0x16b865*/
      BYTE2(v57) = -1; /*0x16b86c*/
      v53 = &v57; /*0x16b871*/
    }
    (**(void (__fastcall ***)(__int64, int *))(*(_QWORD *)(a1 + 368) + 368LL))(*(_QWORD *)(a1 + 368) + 368LL, v53); /*0x16b887*/
    if ( Size[1] > 0xF ) /*0x16b893*/
    {
      v54 = Block[0]; /*0x16b898*/
      if ( Size[1] + 1 >= 0x1000 ) /*0x16b8a7*/
      {
        v54 = (void *)*((_QWORD *)Block[0] - 1); /*0x16b8ad*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v54 - 8) > 0x1F ) /*0x16b8bc*/
          invoke_watson(0, 0, 0, 0, 0); /*0x16b8cd*/
      }
      j_j_free(v54); /*0x16b8d4*/
    }
    *(__m128i *)Size = _mm_load_si128((const __m128i *)&::Size); /*0x16b8e1*/
    LOBYTE(Block[0]) = 0; /*0x16b8e7*/
    if ( *((_QWORD *)&v63 + 1) > 0xFu ) /*0x16b8f5*/
    {
      v55 = v62[0]; /*0x16b8fa*/
      if ( (unsigned __int64)(*((_QWORD *)&v63 + 1) + 1LL) >= 0x1000 ) /*0x16b909*/
      {
        v55 = (void *)*((_QWORD *)v62[0] - 1); /*0x16b90f*/
        if ( (unsigned __int64)((char *)v62[0] - (char *)v55 - 8) > 0x1F ) /*0x16b91e*/
          invoke_watson(0, 0, 0, 0, 0); /*0x16b92f*/
      }
      j_j_free(v55); /*0x16b936*/
    }
  }
  if ( v58 ) /*0x16b940*/
    CustomSongWidget_updateSongInfo(a1); /*0x16b945*/
  sub_3C310(&v65); /*0x16b94f*/
  sub_3C310(&v68); /*0x16b959*/
  sub_3C310(&v71); /*0x16b963*/
  return sub_3C310(&Src); /*0x16b972*/
}

// [9/23] Address: 0x16b9b0
// Method: CustomSongWidget::loadSongInfoFinished
// Hidden C++ exception states: #wind=1
__int64 __fastcall CustomSongWidget_loadSongInfoFinished(__int64 a1, cocos2d::CCObject *a2)
{
  int v4; // r8d
  __int64 *v5; // rcx
  __int64 *v6; // r9
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  cocos2d::CCObject *v12; // rax
  cocos2d::CCObject *v13; // rcx
  int v14; // ecx
  __int64 v15; // rbx
  struct cocos2d::CCFiniteTimeAction *v16; // rax
  struct cocos2d::CCAction *v17; // rax
  void *v18; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_DWORD *)a2 + 80); /*0x16b9c5*/
  v5 = (__int64 *)(a1 + 296); /*0x16b9cc*/
  v6 = (__int64 *)*v5; /*0x16b9d3*/
  v7 = *(__int64 **)(*v5 + 8); /*0x16b9d6*/
  while ( !*((_BYTE *)v7 + 25) ) /*0x16b9da*/
  {
    if ( *((_DWORD *)v7 + 7) >= v4 ) /*0x16b9e4*/
    {
      v6 = v7; /*0x16b9ec*/
      v7 = (__int64 *)*v7; /*0x16b9ef*/
    }
    else
    {
      v7 = (__int64 *)v7[2]; /*0x16b9e6*/
    }
  }
  if ( *((_BYTE *)v6 + 25) || v4 < *((_DWORD *)v6 + 7) ) /*0x16ba03*/
  {
    v10 = a1 - 320; /*0x16ba6c*/
    result = *(unsigned int *)(a1 - 320 + 504); /*0x16ba73*/
    if ( (_DWORD)result == v4 && (_DWORD)result ) /*0x16ba84*/
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v10 + 376) + 336LL))(*(_QWORD *)(v10 + 376), 0); /*0x16ba96*/
      v11 = *(_QWORD *)(v10 + 480); /*0x16ba9c*/
      if ( v11 ) /*0x16baa6*/
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 336LL))(v11, 0); /*0x16baad*/
      v12 = *(cocos2d::CCObject **)(v10 + 336); /*0x16bab3*/
      if ( v12 != a2 ) /*0x16babd*/
      {
        cocos2d::CCObject::retain(a2); /*0x16bac2*/
        v13 = *(cocos2d::CCObject **)(v10 + 336); /*0x16bac8*/
        if ( v13 ) /*0x16bad2*/
          cocos2d::CCObject::release(v13); /*0x16bad4*/
        *(_QWORD *)(v10 + 336) = a2; /*0x16bada*/
        v12 = a2; /*0x16bae1*/
      }
      if ( v12 ) /*0x16bae7*/
        v14 = *((_DWORD *)v12 + 80); /*0x16bae9*/
      else
        v14 = 0; /*0x16baf1*/
      *(_DWORD *)(v10 + 504) = v14; /*0x16baf3*/
      CustomSongWidget_updateSongInfo(a1 - 320); /*0x16bafc*/
      if ( *(_BYTE *)(a1 + 179) ) /*0x16bb01*/
        DailyLevelPage_createNodeIfLoaded(a1 - 320); /*0x16bb0d*/
      v15 = cocos2d::CCCallFunc::create(a1 - 320, CustomSongWidget_updateSongInfo); /*0x16bb22*/
      v16 = cocos2d::CCDelayTime::create(0.0); /*0x16bb28*/
      v17 = cocos2d::CCSequence::create(v16, v15, 0); /*0x16bb37*/
      return (__int64)cocos2d::CCNode::runAction((cocos2d::CCNode *)(a1 - 320), v17); /*0x16bb43*/
    }
  }
  else
  {
    LODWORD(v18) = *((_DWORD *)a2 + 80); /*0x16ba05*/
    sub_BB450(v5, &v18); /*0x16ba0f*/
    v8 = qword_906070; /*0x16ba14*/
    if ( !qword_906070 ) /*0x16ba1e*/
    {
      v18 = operator new(0x3D0u); /*0x16ba2a*/
      qword_906070 = sub_47C350(v18); /*0x16ba38*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x16ba49*/
      v8 = qword_906070; /*0x16ba4b*/
    }
    return sub_47FAF0(v8, *((unsigned int *)a2 + 80)); /*0x16ba67*/
  }
  return result; /*0x16ba58*/
}

// [10/23] Address: 0x16bb60
// Method: CustomSongWidget::loadSongInfoFailed
__int64 __fastcall CustomSongWidget_loadSongInfoFailed(unsigned int *a1, signed int a2, unsigned int a3)
{
  unsigned int *v5; // rcx
  __int64 *v7; // rdx
  __int64 *i; // rax
  __int64 result; // rax
  unsigned int *v10; // rdi
  int v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2; /*0x16bb6a*/
  v5 = a1 + 74; /*0x16bb78*/
  v7 = *(__int64 **)v5; /*0x16bb82*/
  for ( i = *(__int64 **)(*(_QWORD *)v5 + 8LL); !*((_BYTE *)i + 25); i = (__int64 *)*i ) /*0x16bb89*/
  {
    if ( *((_DWORD *)i + 7) >= a2 ) /*0x16bb93*/
      v7 = i; /*0x16bb9b*/
    else
      i += 2; /*0x16bb95*/
  }
  if ( *((_BYTE *)v7 + 25) || a2 < *((_DWORD *)v7 + 7) ) /*0x16bbb0*/
  {
    result = a1[46]; /*0x16bbda*/
    v10 = a1 - 80; /*0x16bbe0*/
    if ( (_DWORD)result == a2 ) /*0x16bbe9*/
    {
      if ( (_DWORD)result ) /*0x16bbed*/
      {
        CustomSongWidget_updateError(v10, a3); /*0x16bbf4*/
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v10 + 57) + 336LL))(*((_QWORD *)v10 + 57), 0); /*0x16bc05*/
        cocos2d::CCNode::unschedule(v10, sub_169D50); /*0x16bc15*/
        *((_BYTE *)v10 + 499) = 0; /*0x16bc1e*/
        return CustomSongWidget_updateSongInfo(v10); /*0x16bc25*/
      }
    }
  }
  else
  {
    sub_BB450(v5, &v11); /*0x16bbb7*/
    return (*(__int64 (__fastcall **)(unsigned int *, _QWORD, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, (unsigned int)a2, a3); /*0x16bbd6*/
  }
  return result; /*0x16bc2a*/
}

// [11/23] Address: 0x16bc40
// Method: CustomSongWidget::downloadSongStarted
__int64 __fastcall CustomSongWidget_downloadSongStarted(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = *(unsigned int *)(a1 + 184); /*0x16bc40*/
  v3 = a1 - 320; /*0x16bc46*/
  if ( (_DWORD)result == a2 ) /*0x16bc4f*/
  {
    if ( (_DWORD)result ) /*0x16bc53*/
      return sub_169650(v3); /*0x16bc53*/
  }
  return result; /*0x16bc59*/
}

// [12/23] Address: 0x16bc60
// Method: CustomSongWidget::downloadSongFinished
__int64 __fastcall CustomSongWidget_downloadSongFinished(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  float v4; // xmm2_4
  float v5; // xmm1_4
  __int64 v6; // rdx

  if ( *(_BYTE *)(a1 + 209) ) /*0x16bc6a*/
    return sub_16C2B0(a1 - 320, a2, 1); /*0x16bc8d*/
  result = *(unsigned int *)(a1 + 184); /*0x16bc92*/
  if ( (_DWORD)result == (_DWORD)a2 && (_DWORD)result ) /*0x16bc9e*/
  {
    (**(void (__fastcall ***)(__int64, void *))(*(_QWORD *)(a1 + 56) + 368LL))( /*0x16bcb5*/
      *(_QWORD *)(a1 + 56) + 368LL,
      &unk_6FDF7C);
    (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 56) + 360LL))( /*0x16bccc*/
      *(_QWORD *)(a1 + 56) + 360LL,
      "Download complete.");
    if ( *(_BYTE *)(a1 + 181) ) /*0x16bcce*/
    {
      v4 = 0.34999999; /*0x16bcde*/
      v5 = 140.0; /*0x16bce6*/
    }
    else
    {
      v4 = 0.40000001; /*0x16bcf0*/
      v5 = 230.0; /*0x16bcf8*/
    }
    cocos2d::CCLabelBMFont::limitLabelWidth(*(cocos2d::CCLabelBMFont **)(a1 + 56), v5, v4, 0.0); /*0x16bd00*/
    LOBYTE(v6) = 1; /*0x16bd06*/
    return sub_16C5A0(a1 - 320, v6); /*0x16bd0f*/
  }
  return result; /*0x16bc83*/
}

// [13/23] Address: 0x16bd20
// Method: CustomSongWidget::downloadSongFailed
__int64 __fastcall CustomSongWidget_downloadSongFailed(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 result; // rax

  v3 = a1 - 320; /*0x16bd2d*/
  if ( *(_BYTE *)(a1 + 209) ) /*0x16bd26*/
    return CustomSongWidget_downloadAssetFailed(a1 - 320, a2, 1); /*0x16bd44*/
  result = *(unsigned int *)(v3 + 504); /*0x16bd49*/
  if ( (_DWORD)result == (_DWORD)a2 ) /*0x16bd51*/
  {
    if ( (_DWORD)result ) /*0x16bd55*/
    {
      CustomSongWidget_updateError(a1 - 320, a3); /*0x16bd5d*/
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v3 + 456) + 336LL))(*(_QWORD *)(v3 + 456), 0); /*0x16bd6e*/
      cocos2d::CCNode::unschedule(v3, sub_169D50); /*0x16bd7e*/
      *(_BYTE *)(v3 + 499) = 0; /*0x16bd87*/
      return CustomSongWidget_updateSongInfo(v3); /*0x16bd93*/
    }
  }
  return result; /*0x16bd3f*/
}

// [14/23] Address: 0x16bda0
// Method: CustomSongWidget::downloadSFXFinished
__int64 __fastcall CustomSongWidget_downloadSFXFinished(__int64 a1, __int64 a2)
{
  return sub_16C2B0(a1 - 320, a2, 2);
}

// [15/23] Address: 0x16bdc0
// Method: CustomSongWidget::downloadSFXFailed
__int64 __fastcall CustomSongWidget_downloadSFXFailed(__int64 a1, __int64 a2)
{
  return CustomSongWidget_downloadAssetFailed(a1 - 320, a2, 2);
}

// [16/23] Address: 0x16bde0
// Method: CustomSongWidget::startMultiAssetDownload
__int64 __fastcall CustomSongWidget_startMultiAssetDownload(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rax
  __int64 *v4; // rbx
  bool v5; // zf
  int v6; // eax
  __int64 v7; // rdx
  __int64 **v8; // rcx
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 *v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 **v14; // rcx
  __int64 *k; // rax
  __int64 *m; // rcx
  int v18; // [rsp+40h] [rbp+8h] BYREF
  int v19; // [rsp+48h] [rbp+10h] BYREF

  v1 = a1 + 584; /*0x16bdec*/
  v3 = *(_QWORD *)(a1 + 584); /*0x16bdf6*/
  if ( v3 != *(_QWORD *)(a1 + 592) ) /*0x16bdfd*/
    *(_QWORD *)(a1 + 592) = v3; /*0x16bdff*/
  v4 = **(__int64 ***)(a1 + 552); /*0x16be0a*/
  while ( !*((_BYTE *)v4 + 25) ) /*0x16be0d*/
  {
    v5 = *((_BYTE *)v4 + 32) == 0; /*0x16be20*/
    v6 = *((_DWORD *)v4 + 7); /*0x16be24*/
    v19 = v6; /*0x16be27*/
    if ( v5 ) /*0x16be2b*/
    {
      v7 = *(_QWORD *)(v1 + 8); /*0x16be2d*/
      v18 = 1; /*0x16be31*/
      if ( v7 == *(_QWORD *)(v1 + 16) ) /*0x16be3d*/
      {
        sub_16C9F0(v1, v7, &v19, &v18); /*0x16be61*/
      }
      else
      {
        *(_DWORD *)v7 = v6; /*0x16be3f*/
        *(_QWORD *)(v7 + 4) = 1; /*0x16be41*/
        *(_BYTE *)(v7 + 12) = 0; /*0x16be49*/
        *(_QWORD *)(v1 + 8) += 16LL; /*0x16be4d*/
      }
    }
    v8 = (__int64 **)v4[2]; /*0x16be66*/
    if ( *((_BYTE *)v8 + 25) ) /*0x16be6a*/
    {
      for ( i = (__int64 *)v4[1]; !*((_BYTE *)i + 25); i = (__int64 *)i[1] ) /*0x16be74*/
      {
        if ( v4 != (__int64 *)i[2] ) /*0x16be84*/
          break; /*0x16be84*/
        v4 = i; /*0x16be86*/
      }
      v4 = i; /*0x16be93*/
    }
    else
    {
      v4 = (__int64 *)v4[2]; /*0x16be98*/
      for ( j = *v8; !*((_BYTE *)j + 25); j = (__int64 *)*j ) /*0x16be9e*/
        v4 = j; /*0x16beb3*/
    }
  }
  v11 = **(__int64 ***)(a1 + 568); /*0x16bed0*/
  while ( !*((_BYTE *)v11 + 25) ) /*0x16bed3*/
  {
    v5 = *((_BYTE *)v11 + 32) == 0; /*0x16bee0*/
    v12 = *((_DWORD *)v11 + 7); /*0x16bee4*/
    v19 = v12; /*0x16bee7*/
    if ( v5 ) /*0x16beeb*/
    {
      v13 = *(_QWORD *)(v1 + 8); /*0x16beed*/
      v18 = 2; /*0x16bef1*/
      if ( v13 == *(_QWORD *)(v1 + 16) ) /*0x16befd*/
      {
        sub_16C9F0(v1, v13, &v19, &v18); /*0x16bf21*/
      }
      else
      {
        *(_DWORD *)v13 = v12; /*0x16beff*/
        *(_QWORD *)(v13 + 4) = 2; /*0x16bf01*/
        *(_BYTE *)(v13 + 12) = 0; /*0x16bf09*/
        *(_QWORD *)(v1 + 8) += 16LL; /*0x16bf0d*/
      }
    }
    v14 = (__int64 **)v11[2]; /*0x16bf26*/
    if ( *((_BYTE *)v14 + 25) ) /*0x16bf2a*/
    {
      for ( k = (__int64 *)v11[1]; !*((_BYTE *)k + 25); k = (__int64 *)k[1] ) /*0x16bf34*/
      {
        if ( v11 != (__int64 *)k[2] ) /*0x16bf44*/
          break; /*0x16bf44*/
        v11 = k; /*0x16bf46*/
      }
      v11 = k; /*0x16bf53*/
    }
    else
    {
      v11 = (__int64 *)v11[2]; /*0x16bf58*/
      for ( m = *v14; !*((_BYTE *)m + 25); m = (__int64 *)*m ) /*0x16bf5e*/
        v11 = m; /*0x16bf73*/
    }
  }
  return EndPortalObject_updateEndPos(a1); /*0x16bf8c*/
}

// [17/23] Address: 0x16c370
// Method: CustomSongWidget::downloadAssetFailed
__int64 __fastcall CustomSongWidget_downloadAssetFailed(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  __int128 *v5; // r8
  __int128 *v6; // rcx
  __int128 *v7; // r9
  __int128 *v8; // rdx
  __int128 v9; // xmm1
  __int128 *v10; // rdx
  __int128 v11; // xmm1
  __int128 v12; // xmm1

  result = *(_QWORD *)(a1 + 584); /*0x16c370*/
  if ( result != *(_QWORD *)(a1 + 592) ) /*0x16c381*/
  {
    while ( *(_DWORD *)result != a2 || *(_DWORD *)(result + 4) != a3 ) /*0x16c38f*/
    {
      result += 16; /*0x16c391*/
      if ( result == *(_QWORD *)(a1 + 592) ) /*0x16c39c*/
        return result; /*0x16c39c*/
    }
    ++*(_DWORD *)(result + 8); /*0x16c39f*/
    v5 = (__int128 *)(result + 16); /*0x16c3a2*/
    *(_BYTE *)(result + 12) = 0; /*0x16c3a6*/
    v6 = *(__int128 **)(a1 + 592); /*0x16c3aa*/
    if ( (__int128 *)(result + 16) != v6 ) /*0x16c3b9*/
    {
      v7 = (__int128 *)result; /*0x16c3bb*/
      v8 = (__int128 *)(result + 16); /*0x16c3be*/
      do /*0x16c3df*/
      {
        if ( v7 == --v8 ) /*0x16c3c8*/
          break; /*0x16c3c8*/
        v9 = *v7; /*0x16c3ca*/
        *v7++ = *v8; /*0x16c3d1*/
        *v8 = v9; /*0x16c3d9*/
      }
      while ( v7 != v8 ); /*0x16c3df*/
      v10 = v6; /*0x16c3e1*/
      do /*0x16c402*/
      {
        if ( v5 == --v10 ) /*0x16c3eb*/
          break; /*0x16c3eb*/
        v11 = *v5; /*0x16c3ed*/
        *v5++ = *v10; /*0x16c3f4*/
        *v10 = v11; /*0x16c3fc*/
      }
      while ( v5 != v10 ); /*0x16c402*/
      for ( ; (__int128 *)result != v6; *v6 = v12 ) /*0x16c407*/
      {
        if ( (__int128 *)result == --v6 ) /*0x16c417*/
          break; /*0x16c417*/
        v12 = *(_OWORD *)result; /*0x16c419*/
        *(_OWORD *)result = *v6; /*0x16c41f*/
        result += 16; /*0x16c422*/
      }
    }
    return EndPortalObject_updateEndPos(a1); /*0x16c431*/
  }
  return result; /*0x16c39e*/
}

// [18/23] Address: 0x16c440
// Method: CustomSongWidget::musicActionFinished
__int64 __fastcall CustomSongWidget_musicActionFinished(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = a1; /*0x16c440*/
  if ( a2 == 2 ) /*0x16c446*/
  {
    v3 = a1 - 320; /*0x16c448*/
    if ( *(_BYTE *)(v3 + 528) ) /*0x16c44f*/
    {
      *(_BYTE *)(result + 208) = 0; /*0x16c45a*/
      return sub_169360(v3, 0); /*0x16c461*/
    }
  }
  return result; /*0x16c466*/
}

// [19/23] Address: 0x16c470
// Method: CustomSongWidget::musicActionFailed
__int64 __fastcall CustomSongWidget_musicActionFailed(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  if ( a2 != 8 ) /*0x16c477*/
  {
    v2 = a1 - 320; /*0x16c480*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 136) + 336LL))(*(_QWORD *)(a1 + 136), 0); /*0x16c491*/
    cocos2d::CCNode::unschedule(v2, sub_169D50); /*0x16c4a1*/
    *(_BYTE *)(v2 + 499) = 0; /*0x16c4aa*/
    return CustomSongWidget_updateSongInfo(v2); /*0x16c4ba*/
  }
  return result; /*0x16c4b6*/
}

// [20/23] Address: 0x16c4d0
// Method: CustomSongWidget::updateError
__int64 __fastcall CustomSongWidget_updateError(__int64 a1, int a2)
{
  void (__fastcall ***v4)(_QWORD, __int16 *); // rcx
  int v5; // ebx
  int v6; // ebx
  const char *v7; // rdx
  float v8; // xmm2_4
  float v9; // xmm1_4
  __int16 v11; // [rsp+38h] [rbp+10h] BYREF
  char v12; // [rsp+3Ah] [rbp+12h]

  v11 = 13055; /*0x16c4dd*/
  v4 = (void (__fastcall ***)(_QWORD, __int16 *))(*(_QWORD *)(a1 + 376) + 368LL); /*0x16c4ed*/
  v12 = 25; /*0x16c4f4*/
  (**v4)(v4, &v11); /*0x16c501*/
  v5 = a2 - 1; /*0x16c514*/
  if ( v5 ) /*0x16c517*/
  {
    v6 = v5 - 1; /*0x16c519*/
    if ( v6 ) /*0x16c51c*/
    {
      if ( v6 == 1 ) /*0x16c521*/
        v7 = "Download canceled."; /*0x16c52c*/
      else
        v7 = "Download failed. Please try later."; /*0x16c523*/
    }
    else
    {
      v7 = "Song is not allowed for use."; /*0x16c535*/
    }
  }
  else
  {
    v7 = "Failed to fetch song info."; /*0x16c53e*/
  }
  (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 376) + 360LL))(*(_QWORD *)(a1 + 376) + 360LL, v7); /*0x16c545*/
  if ( *(_BYTE *)(a1 + 501) ) /*0x16c547*/
  {
    v8 = 0.34999999; /*0x16c55a*/
    v9 = 140.0; /*0x16c562*/
  }
  else
  {
    v8 = 0.40000001; /*0x16c56c*/
    v9 = 230.0; /*0x16c574*/
  }
  cocos2d::CCLabelBMFont::limitLabelWidth(*(cocos2d::CCLabelBMFont **)(a1 + 376), v9, v8, 0.0); /*0x16c57c*/
  return sub_16C5A0(a1, 0); /*0x16c587*/
}

// [21/23] Address: 0x16c7f0
// Method: CustomSongWidget::FLAlert_Clicked
__int64 __fastcall CustomSongWidget_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  void *v8; // [rsp+38h] [rbp+10h]

  result = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) - 1; /*0x16c80a*/
  if ( (_DWORD)result ) /*0x16c80d*/
  {
    if ( (_DWORD)result == 1 ) /*0x16c812*/
    {
      if ( a3 ) /*0x16c816*/
        return sub_168D40(a1 - 328); /*0x16c829*/
    }
  }
  else if ( a3 ) /*0x16c830*/
  {
    v7 = qword_905FD0; /*0x16c832*/
    if ( !qword_905FD0 ) /*0x16c83c*/
    {
      v8 = operator new(0x6E8u); /*0x16c848*/
      qword_905FD0 = sub_2723A0(v8); /*0x16c856*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x16c867*/
      v7 = qword_905FD0; /*0x16c869*/
    }
    LOBYTE(v6) = 1; /*0x16c870*/
    sub_27ACB0(v7, "0016", v6); /*0x16c87a*/
    return sub_169360(a1 - 328, 0); /*0x16c888*/
  }
  return result; /*0x16c81f*/
}

// [22/23] Address: 0x1ad080
// Method: CustomSongWidget::onDownload
_QWORD *__fastcall CustomSongWidget_onDownload(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  _QWORD *result; // rax

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 968) + 952LL))(*(_QWORD *)(a1 + 968)); /*0x1ad097*/
  sub_41FC0(v2, "GJ_button_04.png"); /*0x1ad0a7*/
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 976) + 952LL))(*(_QWORD *)(a1 + 976)); /*0x1ad0b6*/
  sub_41FC0(v3, "GJ_button_04.png"); /*0x1ad0c6*/
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 984) + 952LL))(*(_QWORD *)(a1 + 984)); /*0x1ad0d5*/
  sub_41FC0(v4, "GJ_button_04.png"); /*0x1ad0e5*/
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 992) + 952LL))(*(_QWORD *)(a1 + 992)); /*0x1ad0f4*/
  sub_41FC0(v5, "GJ_button_04.png"); /*0x1ad104*/
  if ( *(_BYTE *)(a1 + 1661) || *(_DWORD *)(a1 + 1508) != 1 ) /*0x1ad119*/
    v6 = 0; /*0x1ad11f*/
  else
    LOBYTE(v6) = 1; /*0x1ad11b*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 952) + 336LL))(*(_QWORD *)(a1 + 952), v6); /*0x1ad12b*/
  sub_1F20D0(a1); /*0x1ad134*/
  GameStatsManager_verifyUserCoins(a1, 0); /*0x1ad13e*/
  sub_1B7700(a1); /*0x1ad146*/
  if ( *(_BYTE *)(a1 + 1661) || *(_DWORD *)(a1 + 1508) != 4 ) /*0x1ad15b*/
    v7 = 0; /*0x1ad161*/
  else
    LOBYTE(v7) = 1; /*0x1ad15d*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 1432) + 336LL))(*(_QWORD *)(a1 + 1432), v7); /*0x1ad16d*/
  result = (_QWORD *)GJRotationControl_finishTouch(a1); /*0x1ad176*/
  if ( *(_BYTE *)(a1 + 1661) ) /*0x1ad17b*/
    return LevelInfoLayer_create(a1, 0); /*0x1ad189*/
  return result; /*0x1ad18e*/
}

// [23/23] Address: 0x444ac0
// Method: CustomSongWidget::onPlayback
// Hidden C++ exception states: #wind=6
void __fastcall CustomSongWidget_onPlayback(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rcx
  void **v5; // r14
  __int64 v6; // rdi
  __int64 v7; // rbx
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  void *v11; // rcx
  __int128 v12; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v13; // [rsp+68h] [rbp-98h]
  __int128 v14; // [rsp+78h] [rbp-88h] BYREF
  __int64 v15; // [rsp+88h] [rbp-78h]
  __int64 v16; // [rsp+90h] [rbp-70h]
  _DWORD v17[4]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v18; // [rsp+A8h] [rbp-58h]
  __int64 v19; // [rsp+B0h] [rbp-50h]
  __int128 v20; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v21; // [rsp+C8h] [rbp-38h]
  __int64 v22; // [rsp+D0h] [rbp-30h]
  __int128 v23; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v24; // [rsp+E8h] [rbp-18h]
  __int64 v25; // [rsp+F0h] [rbp-10h]
  __int128 *v26; // [rsp+F8h] [rbp-8h]
  _DWORD *v27; // [rsp+100h] [rbp+0h]
  __int128 *v28; // [rsp+108h] [rbp+8h]
  void *Src[2]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v30; // [rsp+120h] [rbp+20h]

  sub_3E4F0(&v12, *(_QWORD *)(a1 + 1024) + 376LL); /*0x444b07*/
  if ( (_QWORD)v13 ) /*0x444b1b*/
  {
    cocos2d::ZipUtils::base64URLDecode(Src, &v12); /*0x444b4d*/
  }
  else
  {
    *(_OWORD *)Src = v12; /*0x444b22*/
    v30 = v13; /*0x444b2b*/
    *(_QWORD *)&v13 = 0; /*0x444b2f*/
    *((_QWORD *)&v13 + 1) = 15; /*0x444b34*/
    LOBYTE(v12) = 0; /*0x444b3d*/
  }
  sub_3C310(&v12); /*0x444b59*/
  v26 = &v23; /*0x444b6c*/
  v27 = v17; /*0x444b74*/
  v28 = &v14; /*0x444b7d*/
  v20 = 0; /*0x444b84*/
  v21 = 6; /*0x444b88*/
  v22 = 15; /*0x444b90*/
  strcpy((char *)&v20, "Update"); /*0x444b9e*/
  v23 = 0; /*0x444bb0*/
  v24 = 0; /*0x444bb4*/
  v25 = 0; /*0x444bb8*/
  *(_QWORD *)&v23 = sub_3C460(32); /*0x444bc6*/
  v24 = 18; /*0x444bca*/
  v25 = 31; /*0x444bd2*/
  strcpy((char *)v23, "Update Description"); /*0x444be1*/
  v4 = 28271; /*0x444be4*/
  v17[3] = 0; /*0x444bf3*/
  v18 = 11; /*0x444bf7*/
  v19 = 15; /*0x444bff*/
  strcpy((char *)v17, "Description"); /*0x444c0f*/
  v14 = 0; /*0x444c30*/
  v15 = 0; /*0x444c35*/
  v16 = 0; /*0x444c39*/
  v5 = Src; /*0x444c3d*/
  if ( *((_QWORD *)&v30 + 1) > 0xFu ) /*0x444c46*/
    v5 = (void **)Src[0]; /*0x444c46*/
  v6 = v30; /*0x444c4b*/
  v7 = 0x7FFFFFFFFFFFFFFFLL; /*0x444c4f*/
  if ( (unsigned __int64)v30 > 0x7FFFFFFFFFFFFFFFLL ) /*0x444c5c*/
    sub_8D90(28271, v2, v3); /*0x444dcf*/
  if ( (unsigned __int64)v30 > 0xF ) /*0x444c66*/
  {
    if ( ((unsigned __int64)v30 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x444c89*/
    {
      v7 = v30 | 0xF; /*0x444c8b*/
      if ( ((unsigned __int64)v30 | 0xF) < 0x16 ) /*0x444c96*/
        v7 = 22; /*0x444c96*/
    }
    *(_QWORD *)&v14 = sub_3C460(v7 + 1); /*0x444ca3*/
    v15 = v6; /*0x444ca8*/
    v16 = v7; /*0x444cac*/
    memcpy((void *)v14, v5, v6 + 1); /*0x444cba*/
  }
  else
  {
    v15 = v30; /*0x444c68*/
    v16 = 15; /*0x444c6c*/
    v14 = *(_OWORD *)v5; /*0x444c78*/
  }
  SetupSmartBlockLayer_onCreateAll(v4, v2); /*0x444cc0*/
  v8 = (_QWORD *)sub_3A34B0( /*0x444d0b*/
                   (unsigned int)&v14,
                   (unsigned int)v17,
                   180,
                   (unsigned int)&v23,
                   (__int64)&v20,
                   0,
                   0,
                   0,
                   4,
                   dword_8F83A4);
  v9 = v8[84]; /*0x444d0e*/
  if ( v9 ) /*0x444d18*/
  {
    *(_BYTE *)(v9 + 649) = 1; /*0x444d1a*/
    sub_3F5A0((void *)(v9 + 488), &byte_6E86E0, 0); /*0x444d32*/
  }
  v10 = a1 + 1016; /*0x444d37*/
  if ( !a1 ) /*0x444d41*/
    v10 = 0; /*0x444d41*/
  v8[94] = v10; /*0x444d45*/
  (*(void (__fastcall **)(_QWORD *))(*v8 + 1064LL))(v8); /*0x444d52*/
  if ( *((_QWORD *)&v30 + 1) > 0xFu ) /*0x444d61*/
  {
    v11 = Src[0]; /*0x444d66*/
    if ( (unsigned __int64)(*((_QWORD *)&v30 + 1) + 1LL) >= 0x1000 ) /*0x444d74*/
    {
      v11 = (void *)*((_QWORD *)Src[0] - 1); /*0x444d7a*/
      if ( (unsigned __int64)((char *)Src[0] - (char *)v11 - 8) > 0x1F ) /*0x444d89*/
        invoke_watson(0, 0, 0, 0, 0); /*0x444d9a*/
    }
    j_j_free(v11); /*0x444da1*/
  }
}

// Address: 0xd73f0
// Method: CustomSongWidget::init
// Hidden C++ exception states: #wind=5
char __fastcall CustomSongWidget_init(__int64 a1, cocos2d::CCObject *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  const char *v15; // rcx
  struct cocos2d::CCLabelBMFont *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  struct cocos2d::CCLabelBMFont *v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  struct cocos2d::CCSprite *v31; // rax
  int v32; // ebx
  cocos2d::CCObject *v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // rax
  struct cocos2d::CCLabelBMFont *v36; // rbx
  __int64 v37; // rdx
  cocos2d::CCObject *v38; // rdi
  __int64 v39; // rbx
  __int64 v40; // rax
  struct cocos2d::CCSprite *v41; // rax
  int v42; // ebx
  cocos2d::CCObject *v43; // rdi
  __int64 v44; // rbx
  __int64 v45; // rax
  struct cocos2d::CCSprite *v46; // rax
  int v47; // ebx
  cocos2d::CCObject *v48; // rdi
  __int64 v49; // rbx
  int v50; // ecx
  __int64 v51; // rax
  struct cocos2d::CCSprite *v52; // rax
  int v53; // ebx
  cocos2d::CCObject *v54; // rdi
  __int64 v55; // rbx
  int v56; // ecx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rax
  float v60; // xmm1_4
  float v61; // xmm2_4
  __int64 v62; // rax
  __int64 v63; // rax
  _QWORD *v64; // rdi
  __int64 v65; // rdx
  __int64 v66; // rbx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 *v69; // rdi
  __int64 v70; // rbx
  __int64 v71; // rax
  __int64 v72; // rbx
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rbx
  __int64 v76; // rax
  float v77; // xmm9_4
  struct cocos2d::CCSprite *v78; // rax
  int v79; // ebx
  cocos2d::CCObject *v80; // rax
  __int64 v81; // rdi
  __int64 v82; // rbx
  __int64 v83; // rax
  __int64 v84; // rax
  _QWORD *v85; // rbx
  void *v86; // r8
  cocos2d::CCObject *v87; // rax
  __int64 v88; // rdi
  __int64 v89; // rbx
  __int64 v90; // rax
  __int64 v91; // rax
  _QWORD *v92; // rsi
  __int64 v93; // rbx
  __int64 v94; // rax
  __int64 v95; // rbx
  __int64 v96; // rax
  struct cocos2d::CCLabelBMFont *v97; // rax
  __int64 v98; // rdi
  __int64 v99; // rbx
  __int64 v100; // rax
  __int64 v101; // rdx
  int v102; // eax
  cocos2d::CCObject *v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rcx
  char *v106; // rdi
  __int64 v107; // rbx
  __int64 v108; // rax
  __int64 v109; // rcx
  __int64 v110; // rcx
  __int64 v111; // rcx
  __int64 v112; // rax
  __int64 v113; // rcx
  __int64 v114; // rdx
  __int64 v115; // rbx
  __int64 v116; // rax
  const struct cocos2d::CCPoint *v117; // rax
  char *v118; // rbx
  cocos2d::CCObject *v119; // rbx
  cocos2d::CCObject *v120; // rax
  __int64 v121; // rdi
  __int64 v122; // rbx
  __int64 v123; // rax
  __int64 v124; // rcx
  cocos2d::CCObject *v125; // rax
  __int64 v126; // rax
  __int64 v127; // rax
  int v128; // ebx
  __int64 v129; // rcx
  struct cocos2d::CCObject *v130; // rax
  int v131; // ecx
  __int64 v132; // rax
  int v134; // [rsp+50h] [rbp-B0h] BYREF
  float v135; // [rsp+58h] [rbp-A8h] BYREF
  float v136; // [rsp+5Ch] [rbp-A4h]
  __int64 v137[2]; // [rsp+60h] [rbp-A0h] BYREF
  float v138[2]; // [rsp+70h] [rbp-90h] BYREF
  void *Block[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v140; // [rsp+88h] [rbp-78h]
  unsigned __int64 v141; // [rsp+90h] [rbp-70h]

  if ( !a2 )
    return 0;
  v134 = -1778384896;
  if ( !cocos2d::CCLayerColor::initWithColor((cocos2d::CCLayerColor *)a1, (const struct cocos2d::_ccColor4B *)&v134) )
    return 0;
  *(_QWORD *)(a1 + 744) = a2;
  cocos2d::CCObject::retain(a2);
  *(_DWORD *)(a1 + 776) = *(_DWORD *)(*(_QWORD *)(a1 + 744) + 128LL);
  LOBYTE(v4) = -106;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 408) + 40LL))(a1 + 408, v4);
  sub_5ABA0(a1);
  *(_BYTE *)(a1 + 596) = 1;
  LOBYTE(v5) = 1;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 920LL))(a1, v5);
  LOBYTE(v6) = 1;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 992LL))(a1, v6);
  v8 = cocos2d::CCDirector::sharedDirector(v7);
  cocos2d::CCDirector::getWinSize(v8, v138);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v135, v138[0] * 0.5, v138[1] * 0.5);
  v9 = cocos2d::CCLayer::create();
  *(_QWORD *)(a1 + 584) = v9;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 464LL))(a1, v9);
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v137, 0.0, 0.0, 80.0, 80.0);
  v11 = cocos2d::extension::CCScale9Sprite::create("GJ_square01.png", v10);
  v12 = *(_QWORD *)v11;
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v134, 440.0, 290.0);
  (*(void (__fastcall **)(__int64, __int64))(v12 + 312))(v11, v13);
  (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)v11 + 184LL))(v11, &v135);
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
    *(_QWORD *)(a1 + 584),
    v11,
    4294967294LL);
  v14 = *(_QWORD *)(a1 + 744);
  if ( *(_BYTE *)(v14 + 320) )
    v15 = (const char *)(v14 + 64);
  else
    v15 = (const char *)(v14 + 96);
  if ( *((_QWORD *)v15 + 3) > 0xFu )
    v15 = *(const char **)v15;
  v16 = cocos2d::CCLabelBMFont::create(v15, "goldFont.fnt");
  *(_QWORD *)(a1 + 880) = v16;
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v16 + 160LL))(v16);
  v17 = **(_QWORD **)(a1 + 880);
  v18 = *(_QWORD *)(a1 + 880);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v134, v135, (float)(v136 + 145.0) - 21.0);
  (*(void (__fastcall **)(__int64, __int64))(v17 + 184))(v18, v19);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 584) + 464LL))(
    *(_QWORD *)(a1 + 584),
    *(_QWORD *)(a1 + 880));
  sub_E0F80(a1);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v134, (float)(v135 - 220.0) + 38.0, (float)(v136 + 145.0) - 21.0);
  cocos2d::CCPoint::operator=(a1 + 872, v20);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 744) + 320LL) )
  {
    v25 = cocos2d::CCLabelBMFont::create(&byte_6E86E0, (const char *)&qword_6FFF68);
    *(_QWORD *)(a1 + 856) = v25;
    v26 = *(_QWORD *)v25;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v134, 0.0, 0.5);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v26 + 288))(v25, v27);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 856) + 160LL))(*(_QWORD *)(a1 + 856));
    LOWORD(v134) = -11521;
    BYTE2(v134) = 60;
    (**(void (__fastcall ***)(__int64, int *))(*(_QWORD *)(a1 + 856) + 368LL))(*(_QWORD *)(a1 + 856) + 368LL, &v134);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v137, 3.0, -3.0);
    cocos2d::CCPoint::operator+(a1 + 872, &v134, v28);
    (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 856) + 184LL))(*(_QWORD *)(a1 + 856), &v134);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 584) + 464LL))(
      *(_QWORD *)(a1 + 584),
      *(_QWORD *)(a1 + 856));
    sub_D8CE0(a1);
  }
  v29 = *(_QWORD *)(a1 + 744);
  if ( *(_BYTE *)(v29 + 320) || *(_DWORD *)(v29 + 324) != 8 )
  {
    if ( !*(_BYTE *)(a1 + 783) )
      cocos2d::CCNode::schedule(a1, sub_DB7A0);
  }
  else
  {
    *(_DWORD *)(a1 + 932) = 0;
  }
  v30 = cocos2d::CCMenu::create(v22, v21, v23, v24);
  *(_QWORD *)(a1 + 552) = v30;
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v30, 10);
  (*(void (__fastcall **)(_QWORD, void *))(**(_QWORD **)(a1 + 552) + 184LL))(*(_QWORD *)(a1 + 552), &unk_904188);
  *(_DWORD *)(a1 + 640) = -1;
  v31 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_closeBtn_001.png");
  v32 = (int)v31;
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v31 + 160LL))(v31);
  v33 = CCMenuItemSpriteExtra_create(v32, 0, a1, (__int64)sub_E0D70);
  *((_DWORD *)v33 + 93) = 1069547520;
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v33);
  v34 = *(_QWORD *)v33;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v137, (float)(v135 - 220.0) + 8.0, (float)(v136 + 145.0) - 8.0);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v34 + 184))(v33, v35);
  v36 = cocos2d::CCLabelBMFont::create("...", (const char *)&qword_6FFF68);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v36 + 160LL))(v36);
  LOBYTE(v37) = -116;
  (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v36 + 46) + 40LL))((__int64)v36 + 368, v37);
  v38 = CCMenuItemSpriteExtra_create((int)v36, 0, a1, (__int64)sub_DA690);
  *((_DWORD *)v38 + 93) = 1070386381;
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v38);
  v39 = *(_QWORD *)v38;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v137, (float)(v135 + 220.0) - 20.0, (float)(v136 + 145.0) - 21.0);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v39 + 184))(v38, v40);
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 744) + 320LL) )
  {
    v41 = cocos2d::CCSprite::createWithSpriteFrameName("sideBtn_config_001.png");
    v42 = (int)v41;
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v41 + 160LL))(v41);
    v43 = CCMenuItemSpriteExtra_create(v42, 0, a1, (__int64)sub_DAFC0);
    *((_DWORD *)v43 + 93) = 1067030938;
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v43);
    v44 = *(_QWORD *)v43;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v137, (float)(v135 + 220.0) - 44.0, (float)(v136 + 145.0) - 21.0);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v44 + 184))(v43, v45);
  }
  v46 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_updateBtn_001.png");
  v47 = (int)v46;
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v46 + 160LL))(v46);
  v48 = CCMenuItemSpriteExtra_create(v47, 0, a1, (__int64)EndLevelLayer_onReplay);
  *((_DWORD *)v48 + 93) = 1067030938;
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v48);
  v49 = *(_QWORD *)v48;
  v50 = 72;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 744) + 320LL) )
    v50 = 44;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v137, (float)(v135 + 220.0) - (float)v50, (float)(v136 + 145.0) - 21.0);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v49 + 184))(v48, v51);
  v52 = cocos2d::CCSprite::createWithSpriteFrameName("sideBtn_search_001.png");
  v53 = (int)v52;
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v52 + 160LL))(v52);
  v54 = CCMenuItemSpriteExtra_create(v53, 0, a1, (__int64)LevelInfoLayer_onRateStarsMod);
  *((_DWORD *)v54 + 93) = 1067030938;
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v54);
  v55 = *(_QWORD *)v54;
  v56 = 100;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 744) + 320LL) )
    v56 = 72;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v137, (float)(v135 + 220.0) - (float)v56, (float)(v136 + 145.0) - 21.0);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v55 + 184))(v54, v57);
  v59 = *(_QWORD *)(a1 + 744);
  LOBYTE(v58) = *(_BYTE *)(v59 + 320) || *(_DWORD *)(v59 + 324) != 8;
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v54 + 336LL))(v54, v58);
  EndLevelLayer_playStarEffect(a1);
  v60 = (float)(v136 + 145.0) - 40.0;
  v61 = (float)(v136 - 145.0) + 46.0;
  *(float *)(a1 + 1068) = v60;
  *(_DWORD *)(a1 + 832) = 1137508352;
  *(float *)(a1 + 836) = v60 - v61;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v137, v135, (float)(v61 + v60) * 0.5);
  cocos2d::CCPoint::operator=(a1 + 840, v62);
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)Block, 0.0, 0.0, 40.0, 40.0);
  v64 = (_QWORD *)cocos2d::extension::CCScale9Sprite::create("square02_small.png", v63);
  LOBYTE(v65) = 80;
  (*(void (__fastcall **)(_QWORD *, __int64))(v64[40] + 40LL))(v64 + 40, v65);
  LOWORD(v134) = 0;
  BYTE2(v134) = 0;
  (*(void (__fastcall **)(_QWORD *, int *))v64[40])(v64 + 40, &v134);
  v66 = *v64;
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)v137, *(float *)(a1 + 832), *(float *)(a1 + 836));
  (*(void (__fastcall **)(_QWORD *, __int64))(v66 + 312))(v64, v67);
  (*(void (__fastcall **)(_QWORD *, __int64))(*v64 + 184LL))(v64, a1 + 840);
  (*(void (__fastcall **)(_QWORD, _QWORD *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
    *(_QWORD *)(a1 + 584),
    v64,
    0xFFFFFFFFLL);
  *(_QWORD *)(a1 + 1048) = v64;
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)v137, *(float *)(a1 + 832), *(float *)(a1 + 836));
  v69 = (__int64 *)sub_7FD80(v68);
  *(_QWORD *)(a1 + 816) = v69;
  v70 = *v69;
  cocos2d::CCPoint::CCPoint(
    (cocos2d::CCPoint *)v137,
    *(float *)(a1 + 840) - (float)(*(float *)(a1 + 832) * 0.5),
    *(float *)(a1 + 844) - (float)(*(float *)(a1 + 836) * 0.5));
  (*(void (__fastcall **)(__int64 *, __int64))(v70 + 184))(v69, v71);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v137, 2.0, 0.0);
  v72 = *(_QWORD *)(a1 + 816);
  cocos2d::CCPoint::operator=(v72 + 500, v73);
  ShareCommentLayer_updatePercentLabel(v72, v74);
  v75 = *(_QWORD *)(a1 + 816);
  sub_81190(v75);
  sub_82040(v75);
  *(_QWORD *)(v75 + 576) = a1 + 664;
  *(_DWORD *)(v75 + 584) = 1119879168;
  *(_DWORD *)(v75 + 588) = 1086324736;
  *(_DWORD *)(v75 + 592) = 1086324736;
  v76 = *(_QWORD *)(v75 + 600);
  if ( v76 != *(_QWORD *)(v75 + 608) )
    *(_QWORD *)(v75 + 608) = v76;
  if ( a1 != -664 )
    sub_818F0(v75);
  *(_BYTE *)(*(_QWORD *)(a1 + 816) + 524LL) = 1;
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
    *(_QWORD *)(a1 + 584),
    *(_QWORD *)(a1 + 816),
    1);
  v77 = (float)(v136 - 145.0) + 22.0;
  v78 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_plusBtn_001.png");
  v79 = (int)v78;
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v78 + 160LL))(v78);
  v80 = CCMenuItemSpriteExtra_create(v79, 0, a1, (__int64)sub_DA8D0);
  *(_QWORD *)(a1 + 1224) = v80;
  *((_DWORD *)v80 + 93) = 1067869798;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 552) + 464LL))(
    *(_QWORD *)(a1 + 552),
    *(_QWORD *)(a1 + 1224));
  v81 = **(_QWORD **)(a1 + 1224);
  v82 = *(_QWORD *)(a1 + 1224);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v137, (float)(v135 - 220.0) + 24.0, v77);
  (*(void (__fastcall **)(__int64, __int64))(v81 + 184))(v82, v83);
  *(_OWORD *)Block = 0;
  v140 = 4;
  v141 = 15;
  strcpy((char *)Block, "easy");
  v84 = sub_7DE30(Block);
  if ( v84 )
    v85 = (_QWORD *)sub_7DF70(v84);
  else
    v85 = 0;
  if ( v141 > 0xF )
  {
    v86 = Block[0];
    if ( v141 + 1 >= 0x1000 )
    {
      v86 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v86 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v86);
  }
  GJGroundLayer_scaleGround(v85, 18.0, 0.0);
  v87 = CCMenuItemSpriteExtra_create((int)v85, 0, a1, (__int64)sub_DC2C0);
  *(_QWORD *)(a1 + 1232) = v87;
  *((_DWORD *)v87 + 93) = 1068708659;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 552) + 464LL))(
    *(_QWORD *)(a1 + 552),
    *(_QWORD *)(a1 + 1232));
  v88 = **(_QWORD **)(a1 + 1232);
  v89 = *(_QWORD *)(a1 + 1232);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v137, (float)((float)(v135 - 220.0) + 27.0) + 26.0, v77);
  (*(void (__fastcall **)(__int64, __int64))(v88 + 184))(v89, v90);
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)Block, 0.0, 0.0, 40.0, 40.0);
  v92 = (_QWORD *)cocos2d::extension::CCScale9Sprite::create("square02b_small.png", v91);
  v93 = *v92;
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)v137, 293.0, 28.0);
  (*(void (__fastcall **)(_QWORD *, __int64))(v93 + 312))(v92, v94);
  LOWORD(v134) = 13405;
  BYTE2(v134) = 31;
  (*(void (__fastcall **)(_QWORD *, int *))v92[40])(v92 + 40, &v134);
  v95 = *v92;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v137, (float)((float)(v135 - 27.5) + 13.0) + 13.0, v77);
  (*(void (__fastcall **)(_QWORD *, __int64))(v95 + 184))(v92, v96);
  (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v92, 0);
  *(_QWORD *)(a1 + 1008) = v92;
  *(float *)(a1 + 1060) = v77 - 14.0;
  v97 = cocos2d::CCLabelBMFont::create(&byte_6E86E0, "chatFont.fnt");
  *(_QWORD *)(a1 + 1016) = v97;
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v97 + 160LL))(v97);
  v98 = **(_QWORD **)(a1 + 1016);
  v99 = *(_QWORD *)(a1 + 1016);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v137, 1.0, 1.0);
  (*(void (__fastcall **)(__int64, __int64))(v98 + 288))(v99, v100);
  LOBYTE(v101) = -96;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 1016) + 368LL) + 40LL))(
    *(_QWORD *)(a1 + 1016) + 368LL,
    v101);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1016) + 336LL))(*(_QWORD *)(a1 + 1016), 0);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
    *(_QWORD *)(a1 + 584),
    *(_QWORD *)(a1 + 1016),
    6);
  v102 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("downArrowBtn_001.png");
  v103 = CCMenuItemSpriteExtra_create(v102, 0, a1, (__int64)sub_DDFB0);
  *(_QWORD *)(a1 + 1024) = v103;
  *((_DWORD *)v103 + 93) = 1069547520;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 552) + 464LL))(
    *(_QWORD *)(a1 + 552),
    *(_QWORD *)(a1 + 1024));
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1024) + 336LL))(*(_QWORD *)(a1 + 1024), 0);
  *(_DWORD *)(a1 + 1064) = 1133281280;
  v106 = CCTextInputNode_create(v105, v104, (__int64)"Message");
  *(_QWORD *)(a1 + 920) = v106;
  v107 = *(_QWORD *)v106;
  v108 = (*(__int64 (__fastcall **)(_QWORD *))(*v92 + 200LL))(v92);
  (*(void (__fastcall **)(char *, __int64))(v107 + 184))(v106, v108);
  v109 = *(_QWORD *)(a1 + 920);
  *(_BYTE *)(v109 + 649) = 1;
  sub_3F5A0((void *)(v109 + 488), &byte_6E86E0, 0);
  SetupSmartBlockLayer_onCreateAll(v110);
  v111 = (unsigned int)(17 * dword_8F8394 + 500);
  *(_DWORD *)(*(_QWORD *)(a1 + 920) + 616LL) = v111;
  SetupSmartBlockLayer_onCreateAll(v111);
  sub_543F0(*(_QWORD *)(a1 + 920), (unsigned int)dword_8F8394);
  v112 = *(_QWORD *)(a1 + 920);
  *(_BYTE *)(v112 + 648) = 1;
  *(_BYTE *)(*(_QWORD *)(v112 + 600) + 764LL) = 1;
  *(_QWORD *)(*(_QWORD *)(a1 + 920) + 608LL) = a1 + 544;
  LOWORD(v134) = 27843;
  v113 = *(_QWORD *)(a1 + 920);
  *(_WORD *)(v113 + 580) = 27843;
  *(_BYTE *)(v113 + 582) = 65;
  sub_555B0(v113, v114);
  *(_BYTE *)(*(_QWORD *)(a1 + 920) + 650LL) = 0;
  v115 = *(_QWORD *)(a1 + 920);
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)v137, 6.0, 4.0);
  cocos2d::CCSize::operator=(v115 + 652, v116);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
    *(_QWORD *)(a1 + 584),
    *(_QWORD *)(a1 + 920),
    5);
  v137[0] = (__int64)Block;
  *(_OWORD *)Block = 0;
  v140 = 0;
  v141 = 15;
  LOBYTE(Block[0]) = 0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v134, 0.0, 1.0);
  v118 = TextArea_create((__int64)Block, "chatFont.fnt", 1.0, 358.66666, v117, 1101004800, 1, 0);
  v118[601] = 1;
  (*(void (__fastcall **)(char *))(*(_QWORD *)v118 + 160LL))(v118);
  SetupSequenceTriggerPopup_onChangeOrder(*(_QWORD *)(a1 + 920), (__int64)v118);
  sub_53880(*(_QWORD *)(a1 + 920));
  v137[0] = (__int64)operator new(0x2C8u);
  v119 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite(v137[0]);
  if ( v119 )
  {
    if ( ButtonSprite_init(
           (__int64)v119,
           (__int64)"Send",
           45,
           0,
           1057803469,
           1,
           (const char *)&qword_6FFF68,
           (__int64)"GJ_button_01.png",
           1105199104) )
    {
      cocos2d::CCObject::autorelease(v119);
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v119 + 8LL))(v119, 1);
      LODWORD(v119) = 0;
    }
  }
  v120 = CCMenuItemSpriteExtra_create((int)v119, 0, a1, (__int64)sub_DBAA0);
  *(_QWORD *)(a1 + 904) = v120;
  *((_DWORD *)v120 + 93) = 1066192077;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 552) + 464LL))(
    *(_QWORD *)(a1 + 552),
    *(_QWORD *)(a1 + 904));
  v121 = **(_QWORD **)(a1 + 904);
  v122 = *(_QWORD *)(a1 + 904);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v137, (float)((float)(v135 + 220.0) - 15.0) - 22.5, v77);
  (*(void (__fastcall **)(__int64, __int64))(v121 + 184))(v122, v123);
  sub_E1930(a1);
  v125 = (cocos2d::CCObject *)cocos2d::CCArray::create(v124);
  *(_QWORD *)(a1 + 752) = v125;
  cocos2d::CCObject::retain(v125);
  v126 = *(_QWORD *)(a1 + 744);
  if ( *(int *)(v126 + 128) > 0 && !*(_BYTE *)(v126 + 244) )
  {
    v127 = GJAccountManager_sharedState();
    v128 = *(_DWORD *)(v127 + 360) - *(_DWORD *)(v127 + 364);
    v129 = *(_QWORD *)&qword_905FB0;
    if ( !*(_QWORD *)&qword_905FB0 )
    {
      v137[0] = (__int64)operator new(0x690u);
      *(_QWORD *)&qword_905FB0 = sub_214250(v137[0]);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
      v129 = *(_QWORD *)&qword_905FB0;
    }
    v130 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(v129 + 1232), v128);
    if ( v130 )
    {
      v131 = 0;
      if ( *((_DWORD *)v130 + 191) - *(_DWORD *)(*(_QWORD *)(a1 + 744) + 128LL) >= 0 )
        v131 = *((_DWORD *)v130 + 191) - *(_DWORD *)(*(_QWORD *)(a1 + 744) + 128LL);
      *((_DWORD *)v130 + 191) = v131;
    }
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 744) + 128LL) = 0;
  sub_D8D80(a1);
  v132 = *(_QWORD *)&qword_905FB0;
  if ( !*(_QWORD *)&qword_905FB0 )
  {
    v137[0] = (__int64)operator new(0x690u);
    *(_QWORD *)&qword_905FB0 = sub_214250(v137[0]);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
    v132 = *(_QWORD *)&qword_905FB0;
  }
  *(_QWORD *)(v132 + 1392) = a1 + 672;
  if ( !*(_BYTE *)(a1 + 783) || *(__int64 *)(a1 + 784) <= 0 || !(unsigned __int8)sub_D9AD0(a1) )
  {
    sub_D94E0(a1);
    sub_D8710(a1, 0, 0);
  }
  return 1;
}

// Address: 0x169e50
// Method: CustomSongWidget::updateSongInfo
// Hidden C++ exception states: #wind=10
__int64 __fastcall CustomSongWidget_updateSongInfo(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rdx
  bool v5; // bl
  size_t v6; // rdi
  const char *v7; // rdx
  cocos2d::CCString *v8; // rax
  char *v9; // rax
  size_t v10; // r8
  __int64 v11; // rcx
  int v12; // eax
  void **v13; // rdx
  cocos2d::CCString *v14; // rax
  char *v15; // rax
  size_t v16; // r8
  void **v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  cocos2d::CCString *v20; // rax
  const char *v21; // rax
  float v22; // xmm1_4
  int v23; // ebx
  float v24; // xmm0_4
  cocos2d::CCString *v25; // rax
  char *v26; // rax
  void **v27; // rdx
  void *v28; // rcx
  void *v29; // rcx
  void **v30; // rdx
  __int64 v31; // rcx
  size_t v32; // rdi
  int ExtraArtistCount; // eax
  const char *v34; // rdx
  cocos2d::CCString *v35; // rax
  char *CString; // rax
  size_t v37; // r8
  _QWORD *v38; // rdx
  __int64 v39; // rdx
  int v40; // eax
  double v41; // xmm2_8
  cocos2d::CCString *v42; // rax
  char *v43; // rax
  size_t v44; // rbx
  void **v45; // rdx
  void **v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rax
  unsigned int v49; // ebx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 *v54; // rdi
  int v55; // eax
  __int64 v56; // rdx
  __int64 *v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rbx
  cocos2d::CCSpriteFrameCache *v60; // rax
  const char *v61; // rdx
  struct cocos2d::CCSpriteFrame *v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rdx
  char v66; // bl
  __int64 v67; // rdx
  __int64 v68; // rdx
  void *v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 *v73; // rsi
  __int64 v74; // rcx
  __int64 v75; // rdi
  const char *v76; // rbx
  cocos2d::CCSpriteFrameCache *v77; // rax
  struct cocos2d::CCSpriteFrame *v78; // rax
  __int64 v79; // rax
  char v80; // al
  cocos2d::CCLabelBMFont *v81; // rcx
  float v82; // xmm6_4
  float v83; // xmm1_4
  __int64 v84; // rax
  float v85; // xmm6_4
  double v86; // xmm0_8
  __int64 v87; // rax
  __int64 *v88; // rcx
  __int64 v89; // rbx
  __int64 *v90; // rdi
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rax
  char v96; // al
  int v97; // ecx
  float v98; // xmm7_4
  char v99; // al
  int v100; // ecx
  float v101; // xmm9_4
  float v102; // xmm6_4
  float v103; // xmm0_4
  int v104; // eax
  float v105; // xmm6_4
  double v106; // xmm0_8
  float v107; // xmm7_4
  float v108; // xmm6_4
  double v109; // xmm0_8
  __int64 v110; // rax
  __int64 v111; // rbx
  __int64 v112; // rax
  __int64 v113; // rsi
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rbx
  __int64 v117; // rdi
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rdi
  __int64 v121; // rbx
  __int64 v122; // rax
  __int64 v123; // rdi
  float v124; // xmm6_4
  float *v125; // rax
  __int64 v126; // rbx
  __int64 v127; // rax
  void *v128; // [rsp+30h] [rbp-D0h] BYREF
  int v129; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v130[8]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v131[8]; // [rsp+48h] [rbp-B8h] BYREF
  void *Block[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v133; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v134; // [rsp+68h] [rbp-98h]
  void *v135[2]; // [rsp+70h] [rbp-90h] BYREF
  size_t Size; // [rsp+80h] [rbp-80h]
  unsigned __int64 v137; // [rsp+88h] [rbp-78h]
  _QWORD v138[3]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v139; // [rsp+A8h] [rbp-58h]

  sub_1681C0();
  sub_168790(a1);
  v2 = *(_QWORD *)(a1 + 336);
  if ( v2 )
  {
    v3 = v2 + 328;
    if ( *(_BYTE *)(a1 + 501) )
    {
      sub_3E4F0(Block, v3);
      v30 = Block;
      if ( v134 > 0xF )
        v30 = (void **)Block[0];
      (**(void (__fastcall ***)(__int64, void **))(*(_QWORD *)(a1 + 352) + 360LL))(*(_QWORD *)(a1 + 352) + 360LL, v30);
      sub_3C310(Block);
      sub_3E4F0(v138, *(_QWORD *)(a1 + 336) + 360LL);
      v31 = *(_QWORD *)(a1 + 336);
      v32 = -1;
      if ( *(_QWORD *)(v31 + 552) )
      {
        ExtraArtistCount = SongInfoObject_getExtraArtistCount(v31);
        if ( ExtraArtistCount > 0 )
        {
          v34 = (const char *)v138;
          if ( v139 > 0xF )
            v34 = (const char *)v138[0];
          v35 = cocos2d::CCString::createWithFormat("%s +%i", v34, ExtraArtistCount);
          CString = (char *)cocos2d::CCString::getCString(v35);
          v37 = -1;
          do
            ++v37;
          while ( CString[v37] );
          sub_3F5A0(v138, CString, v37);
        }
      }
      v38 = v138;
      if ( v139 > 0xF )
        v38 = (_QWORD *)v138[0];
      (**(void (__fastcall ***)(__int64, _QWORD *))(*(_QWORD *)(a1 + 360) + 360LL))(*(_QWORD *)(a1 + 360) + 360LL, v38);
      if ( !*(_BYTE *)(a1 + 529) )
      {
        v39 = *(_QWORD *)(a1 + 336);
        v40 = *(_DWORD *)(v39 + 480);
        *(_OWORD *)Block = 0;
        v133 = 0;
        v134 = 15;
        LOBYTE(Block[0]) = 0;
        v41 = *(float *)(v39 + 428);
        if ( v40 <= 0 )
          v42 = cocos2d::CCString::createWithFormat("ID: %i  Size: %.01fMB", *(_DWORD *)(v39 + 320), v41);
        else
          v42 = cocos2d::CCString::createWithFormat(
                  "ID: %i  Size: %.01fMB (%is)",
                  *(_DWORD *)(v39 + 320),
                  v41,
                  *(_DWORD *)(v39 + 480));
        v43 = (char *)cocos2d::CCString::getCString(v42);
        do
          ++v32;
        while ( v43[v32] );
        sub_3F5A0(Block, v43, v32);
        SongInfoObject_getTagsString(*(_QWORD **)(a1 + 336), (__int64)v135, 1);
        v44 = Size;
        if ( Size )
        {
          sub_43D80(Block, "    ", 4u);
          v45 = v135;
          if ( v137 > 0xF )
            v45 = (void **)v135[0];
          sub_43D80(Block, v45, v44);
        }
        v46 = Block;
        if ( v134 > 0xF )
          v46 = (void **)Block[0];
        (**(void (__fastcall ***)(__int64, void **))(*(_QWORD *)(a1 + 368) + 360LL))(*(_QWORD *)(a1 + 368) + 360LL, v46);
        sub_3C310(v135);
        sub_3C310(Block);
      }
      sub_3C310(v138);
    }
    else
    {
      sub_3E4F0(v138, v3);
      v4 = v138;
      if ( v139 > 0xF )
        v4 = (_QWORD *)v138[0];
      (**(void (__fastcall ***)(__int64, _QWORD *))(*(_QWORD *)(a1 + 352) + 360LL))(*(_QWORD *)(a1 + 352) + 360LL, v4);
      sub_3C310(v138);
      *(_OWORD *)v135 = 0;
      Size = 0;
      v137 = 15;
      LOBYTE(v135[0]) = 0;
      sub_3E4F0(v138, *(_QWORD *)(a1 + 336) + 360LL);
      v5 = v138[2] != 0;
      sub_3C310(v138);
      v6 = -1;
      if ( v5 )
      {
        sub_3E4F0(v138, *(_QWORD *)(a1 + 336) + 360LL);
        v7 = (const char *)v138;
        if ( v139 > 0xF )
          v7 = (const char *)v138[0];
        v8 = cocos2d::CCString::createWithFormat("By: %s", v7);
        v9 = (char *)cocos2d::CCString::getCString(v8);
        v10 = -1;
        do
          ++v10;
        while ( v9[v10] );
        sub_3F5A0(v135, v9, v10);
        sub_3C310(v138);
      }
      v11 = *(_QWORD *)(a1 + 336);
      if ( *(_QWORD *)(v11 + 552) )
      {
        v12 = SongInfoObject_getExtraArtistCount(v11);
        if ( v12 > 0 )
        {
          v13 = v135;
          if ( v137 > 0xF )
            v13 = (void **)v135[0];
          v14 = cocos2d::CCString::createWithFormat("%s +%i", (const char *)v13, v12);
          v15 = (char *)cocos2d::CCString::getCString(v14);
          v16 = -1;
          do
            ++v16;
          while ( v15[v16] );
          sub_3F5A0(v135, v15, v16);
        }
      }
      v17 = v135;
      if ( v137 > 0xF )
        v17 = (void **)v135[0];
      (**(void (__fastcall ***)(__int64, void **))(*(_QWORD *)(a1 + 360) + 360LL))(*(_QWORD *)(a1 + 360) + 360LL, v17);
      if ( !*(_BYTE *)(a1 + 529) )
      {
        if ( *(_BYTE *)(a1 + 500) )
        {
          (**(void (__fastcall ***)(__int64, char *))(*(_QWORD *)(a1 + 368) + 360LL))(
            *(_QWORD *)(a1 + 368) + 360LL,
            &byte_6E86E0);
        }
        else
        {
          v18 = *(_QWORD *)(a1 + 336);
          v19 = *(unsigned int *)(v18 + 320);
          if ( *(_BYTE *)(v18 + 472) )
            v20 = cocos2d::CCString::createWithFormat("SongID: %i", v19);
          else
            v20 = cocos2d::CCString::createWithFormat("SongID: %i  Size: %.02fMB", v19, *(float *)(v18 + 428));
          v21 = cocos2d::CCString::getCString(v20);
          (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 368) + 360LL))(
            *(_QWORD *)(a1 + 368) + 360LL,
            v21);
          if ( *(int *)(*(_QWORD *)(a1 + 336) + 484LL) > 0 )
          {
            (**(void (__fastcall ***)(__int64, void *))(*(_QWORD *)(a1 + 376) + 368LL))(
              *(_QWORD *)(a1 + 376) + 368LL,
              &unk_6FDF7C);
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 376) + 160LL))(*(_QWORD *)(a1 + 376));
            *(_OWORD *)Block = 0;
            v133 = 0;
            v134 = 15;
            LOBYTE(Block[0]) = 0;
            v22 = *(float *)(a1 + 508);
            if ( v22 <= 0.0 || v22 == 1.0 )
            {
              v25 = cocos2d::CCString::createWithFormat("BPM: %i", *(_DWORD *)(*(_QWORD *)(a1 + 336) + 484LL));
            }
            else
            {
              v23 = *(_DWORD *)(*(_QWORD *)(a1 + 336) + 484LL);
              v24 = roundf((float)v23 * v22);
              v25 = cocos2d::CCString::createWithFormat("BPM: %i (%i)", v23, (int)v24);
            }
            v26 = (char *)cocos2d::CCString::getCString(v25);
            do
              ++v6;
            while ( v26[v6] );
            sub_3F5A0(Block, v26, v6);
            v27 = Block;
            if ( v134 > 0xF )
              v27 = (void **)Block[0];
            (**(void (__fastcall ***)(__int64, void **))(*(_QWORD *)(a1 + 376) + 360LL))(
              *(_QWORD *)(a1 + 376) + 360LL,
              v27);
            sub_16C5A0(a1, 0);
            if ( v134 > 0xF )
            {
              v28 = Block[0];
              if ( v134 + 1 >= 0x1000 )
              {
                v28 = (void *)*((_QWORD *)Block[0] - 1);
                if ( (unsigned __int64)((char *)Block[0] - (char *)v28 - 8) > 0x1F )
                  invoke_watson(0, 0, 0, 0, 0);
              }
              j_j_free(v28);
            }
            v133 = 0;
            v134 = 15;
            LOBYTE(Block[0]) = 0;
          }
        }
      }
      if ( v137 > 0xF )
      {
        v29 = v135[0];
        if ( v137 + 1 >= 0x1000 )
        {
          v29 = (void *)*((_QWORD *)v135[0] - 1);
          if ( (unsigned __int64)((char *)v135[0] - (char *)v29 - 8) > 0x1F )
            invoke_watson(0, 0, 0, 0, 0);
        }
        j_j_free(v29);
      }
      Size = 0;
      v137 = 15;
      LOBYTE(v135[0]) = 0;
    }
  }
  else
  {
    (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 352) + 360LL))(
      *(_QWORD *)(a1 + 352) + 360LL,
      "No song loaded");
    (**(void (__fastcall ***)(__int64, char *))(*(_QWORD *)(a1 + 360) + 360LL))(
      *(_QWORD *)(a1 + 360) + 360LL,
      &byte_6E86E0);
    if ( !*(_BYTE *)(a1 + 529) )
      (**(void (__fastcall ***)(__int64, char *))(*(_QWORD *)(a1 + 368) + 360LL))(
        *(_QWORD *)(a1 + 368) + 360LL,
        &byte_6E86E0);
  }
  if ( *(_BYTE *)(a1 + 529) )
  {
    v47 = *(unsigned __int8 *)(a1 + 545);
LABEL_120:
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 384) + 336LL))(*(_QWORD *)(a1 + 384), v47);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 392) + 336LL))(*(_QWORD *)(a1 + 392), 0);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 400) + 336LL))(*(_QWORD *)(a1 + 400), 0);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 416) + 336LL))(*(_QWORD *)(a1 + 416), 0);
    v71 = *(_QWORD *)(a1 + 456);
    goto LABEL_121;
  }
  v48 = *(_QWORD *)(a1 + 336);
  if ( !v48 )
  {
    v47 = 0;
    goto LABEL_120;
  }
  v49 = *(_DWORD *)(v48 + 320);
  v50 = qword_906070;
  if ( !qword_906070 )
  {
    v128 = operator new(0x3D0u);
    qword_906070 = sub_47C350(v128);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070);
    v50 = qword_906070;
  }
  if ( (unsigned __int8)sub_4803B0(v50, v49) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 384) + 336LL))(*(_QWORD *)(a1 + 384), 0);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 392) + 336LL))(*(_QWORD *)(a1 + 392), 0);
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 336) + 472LL) && *(_BYTE *)(a1 + 498) )
      LOBYTE(v51) = 1;
    else
      v51 = 0;
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 408) + 336LL))(*(_QWORD *)(a1 + 408), v51);
    if ( !*(_BYTE *)(a1 + 498)
      || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 344LL))(*(_QWORD *)(a1 + 408))
      || (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 432) + 56LL))(*(_QWORD *)(a1 + 432)) == -999 )
    {
      v52 = 0;
    }
    else
    {
      LOBYTE(v52) = 1;
    }
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 432) + 336LL))(*(_QWORD *)(a1 + 432), v52);
    if ( *(_BYTE *)(a1 + 496) && *(_QWORD *)(a1 + 488) )
    {
      LOBYTE(v53) = 1;
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 400) + 336LL))(*(_QWORD *)(a1 + 400), v53);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 432) + 336LL))(*(_QWORD *)(a1 + 432), 0);
      v54 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 400) + 952LL))(*(_QWORD *)(a1 + 400));
      v55 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 488) + 8LL))(*(_QWORD *)(a1 + 488));
      v57 = *(__int64 **)(a1 + 400);
      v58 = *v57;
      if ( v55 == v49 )
      {
        (*(void (__fastcall **)(__int64 *, _QWORD))(v58 + 936))(v57, 0);
        v59 = *v54;
        v60 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
        v61 = "GJ_selectSongOnBtn_001.png";
      }
      else
      {
        LOBYTE(v56) = 1;
        (*(void (__fastcall **)(__int64 *, __int64))(v58 + 936))(v57, v56);
        v59 = *v54;
        v60 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
        v61 = "GJ_selectSongBtn_001.png";
      }
      v62 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v60, v61);
      (*(void (__fastcall **)(__int64 *, struct cocos2d::CCSpriteFrame *))(v59 + 1008))(v54, v62);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 400) + 336LL))(*(_QWORD *)(a1 + 400), 0);
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 416) + 336LL))(
      *(_QWORD *)(a1 + 416),
      *(unsigned __int8 *)(a1 + 497));
    v63 = *(_QWORD *)(a1 + 456);
    goto LABEL_122;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 400) + 336LL))(*(_QWORD *)(a1 + 400), 0);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 416) + 336LL))(*(_QWORD *)(a1 + 416), 0);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 432) + 336LL))(*(_QWORD *)(a1 + 432), 0);
  if ( *(_BYTE *)(a1 + 500) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 384) + 336LL))(*(_QWORD *)(a1 + 384), 0);
    v71 = *(_QWORD *)(a1 + 392);
LABEL_121:
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v71 + 336LL))(v71, 0);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 408) + 336LL))(*(_QWORD *)(a1 + 408), 0);
    v63 = *(_QWORD *)(a1 + 432);
LABEL_122:
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v63 + 336LL))(v63, 0);
    goto LABEL_123;
  }
  v64 = qword_906070;
  if ( !qword_906070 )
  {
    v128 = operator new(0x3D0u);
    qword_906070 = sub_47C350(v128);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070);
    v64 = qword_906070;
  }
  if ( MusicDownloadManager_isRunningActionForSongID(v64, *(_DWORD *)(a1 + 504)) || *(_BYTE *)(a1 + 499) )
  {
    v66 = 1;
  }
  else
  {
    v66 = 0;
    if ( !*(_BYTE *)(*(_QWORD *)(a1 + 336) + 472LL) && *(_BYTE *)(a1 + 498) )
    {
      LOBYTE(v65) = 1;
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 384) + 336LL))(*(_QWORD *)(a1 + 384), v65);
LABEL_105:
      v67 = 0;
      goto LABEL_106;
    }
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 384) + 336LL))(*(_QWORD *)(a1 + 384), 0);
  if ( !v66 || *(_BYTE *)(*(_QWORD *)(a1 + 336) + 472LL) || !*(_BYTE *)(a1 + 498) )
    goto LABEL_105;
  LOBYTE(v67) = 1;
LABEL_106:
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 392) + 336LL))(*(_QWORD *)(a1 + 392), v67);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 336) + 472LL) && *(_BYTE *)(a1 + 498) )
    LOBYTE(v68) = 1;
  else
    v68 = 0;
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 408) + 336LL))(*(_QWORD *)(a1 + 408), v68);
  v69 = &unk_6FDF74;
  if ( !v66 )
    v69 = &unk_6FDF80;
  (**(void (__fastcall ***)(__int64, void *))(*(_QWORD *)(a1 + 408) + 320LL))(*(_QWORD *)(a1 + 408) + 320LL, v69);
  LOBYTE(v70) = v66 == 0;
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 408) + 936LL))(*(_QWORD *)(a1 + 408), v70);
LABEL_123:
  v72 = *(_QWORD *)(a1 + 448);
  if ( v72 && *(_QWORD *)(a1 + 336) )
  {
    v73 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v72 + 952LL))(v72);
    v129 = *(_DWORD *)(*(_QWORD *)(a1 + 336) + 320LL);
    v74 = qword_906070;
    if ( !qword_906070 )
    {
      v128 = operator new(0x3D0u);
      qword_906070 = sub_47C350(v128);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070);
      v74 = qword_906070;
    }
    v75 = *v73;
    v76 = "gj_heartOff_001.png";
    if ( sub_659E0(v74 + 776, &v129) )
      v76 = "gj_heartOn_001.png";
    v77 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    v78 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v77, v76);
    (*(void (__fastcall **)(__int64 *, struct cocos2d::CCSpriteFrame *))(v75 + 1008))(v73, v78);
  }
  v79 = **(_QWORD **)(a1 + 472);
  if ( *(_BYTE *)(a1 + 501) )
  {
    v96 = (*(__int64 (**)(void))(v79 + 344))();
    v97 = 140;
    if ( v96 )
      v97 = 130;
    v98 = (float)v97;
    v99 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 472) + 344LL))(*(_QWORD *)(a1 + 472));
    v100 = 80;
    if ( v99 )
      v100 = 55;
    v101 = (float)v100;
    if ( *(_BYTE *)(a1 + 502) )
    {
      v98 = v98 + -25.0;
      v101 = v101 + -15.0;
    }
    cocos2d::CCLabelBMFont::limitLabelWidth(*(cocos2d::CCLabelBMFont **)(a1 + 352), v98, 0.5, 0.0);
    v102 = *(float *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 352) + 320LL))(*(_QWORD *)(a1 + 352));
    v103 = (*(float (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 352) + 168LL))(*(_QWORD *)(a1 + 352));
    cocos2d::CCLabelBMFont::limitLabelWidth(
      *(cocos2d::CCLabelBMFont **)(a1 + 360),
      fmaxf(0.0, v98 - (float)(v103 * v102)) + v101,
      0.5,
      0.0);
    if ( !*(_BYTE *)(a1 + 529) )
    {
      v104 = 220;
      if ( *(_BYTE *)(a1 + 502) )
        v104 = 180;
      cocos2d::CCLabelBMFont::limitLabelWidth(*(cocos2d::CCLabelBMFont **)(a1 + 368), (float)v104, 0.60000002, 0.0);
    }
    v105 = *(float *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 352) + 320LL))(*(_QWORD *)(a1 + 352));
    v106 = (*(double (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 352) + 168LL))(*(_QWORD *)(a1 + 352));
    v107 = *(float *)&v106 * v105;
    v108 = *(float *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 360) + 320LL))(*(_QWORD *)(a1 + 360));
    v109 = (*(double (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 360) + 168LL))(*(_QWORD *)(a1 + 360));
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)v130,
      (float)((float)((float)(*(float *)&v109 * v108) * 0.5) + v107) + 4.0,
      0.0);
    v111 = v110;
    v112 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 352) + 200LL))(*(_QWORD *)(a1 + 352));
    cocos2d::CCPoint::operator+(v112, &v128, v111);
    v113 = **(_QWORD **)(a1 + 424);
    v114 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 352) + 504LL))(*(_QWORD *)(a1 + 352));
    cocos2d::CCNode::convertToWorldSpace(v114, v131, &v128);
    v116 = v115;
    v117 = *(_QWORD *)(a1 + 424);
    v118 = (*(__int64 (**)(void))(*(_QWORD *)v117 + 504LL))();
    cocos2d::CCNode::convertToNodeSpace(v118, &v129, v116);
    (*(void (__fastcall **)(__int64, __int64))(v113 + 184))(v117, v119);
    v120 = **(_QWORD **)(a1 + 360);
    v121 = *(_QWORD *)(a1 + 360);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v130, 0.5, 0.5);
    (*(void (__fastcall **)(__int64, __int64))(v120 + 288))(v121, v122);
    v123 = **(_QWORD **)(a1 + 360);
    v124 = *(float *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 424) + 320LL))(*(_QWORD *)(a1 + 424)) + 4)
         * 0.5;
    v125 = (float *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 424) + 320LL))(*(_QWORD *)(a1 + 424));
    v126 = *(_QWORD *)(a1 + 360);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v130, *v125 * 0.5, v124);
    return (*(__int64 (__fastcall **)(__int64, __int64))(v123 + 184))(v126, v127);
  }
  else
  {
    v80 = (*(__int64 (**)(void))(v79 + 344))();
    v81 = *(cocos2d::CCLabelBMFont **)(a1 + 352);
    if ( v80 )
    {
      v82 = 0.75;
      cocos2d::CCLabelBMFont::limitLabelWidth(v81, 190.0, 0.75, 0.0);
      v83 = 165.0;
    }
    else
    {
      v82 = 0.80000001;
      cocos2d::CCLabelBMFont::limitLabelWidth(v81, 240.0, 0.80000001, 0.0);
      v83 = 175.0;
    }
    cocos2d::CCLabelBMFont::limitLabelWidth(*(cocos2d::CCLabelBMFont **)(a1 + 360), v83, v82, 0.0);
    if ( !*(_BYTE *)(a1 + 529) )
      cocos2d::CCLabelBMFont::limitLabelWidth(*(cocos2d::CCLabelBMFont **)(a1 + 368), 300.0, 0.40000001, 0.0);
    v84 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 360) + 200LL))(*(_QWORD *)(a1 + 360));
    cocos2d::CCNode::convertToWorldSpace(a1, &v129, v84);
    v85 = *(float *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 360) + 320LL))(*(_QWORD *)(a1 + 360));
    v86 = (*(double (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 360) + 128LL))(*(_QWORD *)(a1 + 360));
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v131, (float)(*(float *)&v86 * v85) + 35.0, -2.0);
    cocos2d::CCPoint::operator+(&v129, &v128, v87);
    v88 = *(__int64 **)(a1 + 424);
    v89 = *v88;
    v90 = v88;
    v91 = (*(__int64 (**)(void))(*v88 + 504))();
    cocos2d::CCNode::convertToNodeSpace(v91, v130, &v128);
    (*(void (__fastcall **)(__int64 *, __int64))(v89 + 184))(v90, v92);
    v94 = *(_QWORD *)(a1 + 336);
    if ( !v94 || *(_BYTE *)(v94 + 472) )
      v93 = 0;
    else
      LOBYTE(v93) = 1;
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 424) + 336LL))(*(_QWORD *)(a1 + 424), v93);
  }
}
