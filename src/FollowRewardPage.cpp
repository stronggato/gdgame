#include <Geode/binding/FollowRewardPage.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/6] Address: 0x207c20
// Method: FollowRewardPage::~FollowRewardPage
// Hidden C++ exception states: #wind=1
char *__fastcall FollowRewardPage__dtor_FollowRewardPage(char *Block, char a2)
{
  char *v4; // rdi
  char *v5; // rsi
  cocos2d::CCObject *v6; // rcx
  __int64 v7; // rax
  void *v8; // rax

  *(_QWORD *)Block = &FollowRewardPage::`vftable'; /*0x207c40*/
  *((_QWORD *)Block + 40) = &FollowRewardPage::`vftable'; /*0x207c4a*/
  *((_QWORD *)Block + 41) = &FollowRewardPage::`vftable'; /*0x207c58*/
  *((_QWORD *)Block + 42) = &FollowRewardPage::`vftable'; /*0x207c66*/
  *((_QWORD *)Block + 43) = &FollowRewardPage::`vftable'; /*0x207c74*/
  *((_QWORD *)Block + 44) = &FollowRewardPage::`vftable'; /*0x207c82*/
  *((_QWORD *)Block + 51) = &FollowRewardPage::`vftable'; /*0x207c90*/
  *((_QWORD *)Block + 54) = &FollowRewardPage::`vftable'; /*0x207c9e*/
  *((_QWORD *)Block + 68) = &FollowRewardPage::`vftable'; /*0x207cac*/
  *((_QWORD *)Block + 83) = &FollowRewardPage::`vftable'; /*0x207cba*/
  v4 = Block + 672; /*0x207cc1*/
  *((_QWORD *)Block + 84) = &FollowRewardPage::`vftable'; /*0x207ccf*/
  v5 = Block + 680; /*0x207cd2*/
  *((_QWORD *)Block + 85) = &FollowRewardPage::`vftable'; /*0x207ce0*/
  v6 = (cocos2d::CCObject *)*((_QWORD *)Block + 86); /*0x207ce3*/
  if ( v6 ) /*0x207ced*/
    cocos2d::CCObject::release(v6); /*0x207cef*/
  v7 = qword_905FD0; /*0x207cf5*/
  if ( !qword_905FD0 ) /*0x207cff*/
  {
    v8 = operator new(0x6E8u); /*0x207d06*/
    qword_905FD0 = sub_2723A0(v8); /*0x207d13*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x207d24*/
    v7 = qword_905FD0; /*0x207d26*/
  }
  if ( *(char **)(v7 + 976) == v4 ) /*0x207d36*/
    *(_QWORD *)(v7 + 976) = 0; /*0x207d38*/
  if ( *(char **)(v7 + 1288) == v5 ) /*0x207d46*/
    *(_QWORD *)(v7 + 1288) = 0; /*0x207d48*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x207d52*/
  if ( (a2 & 1) != 0 ) /*0x207d5c*/
    j_j_free(Block); /*0x207d66*/
  return Block; /*0x207d6e*/
}

// [3/6] Address: 0x20a030
// Method: FollowRewardPage::updateRate
// Hidden C++ exception states: #wind=15
unsigned int __fastcall FollowRewardPage_updateRate(__int64 a1)
{
  unsigned int v2; // esi
  unsigned int result; // eax
  __int64 v4; // rcx
  bool isSpecialChestUnlocked; // bl
  __int64 v6; // r8
  __int64 v7; // rcx
  const char *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  struct cocos2d::CCObject *v15; // rdi
  __int64 v16; // rbx
  int v17; // eax
  __int128 v18; // [rsp+20h] [rbp-49h] BYREF
  __int64 v19; // [rsp+30h] [rbp-39h]
  __int64 v20; // [rsp+38h] [rbp-31h]
  void *v21; // [rsp+40h] [rbp-29h]
  void *v22; // [rsp+48h] [rbp-21h]
  void *v23; // [rsp+50h] [rbp-19h]
  void *v24; // [rsp+58h] [rbp-11h]
  void *v25; // [rsp+60h] [rbp-9h]
  void *v26; // [rsp+68h] [rbp-1h]
  void *v27; // [rsp+70h] [rbp+7h]
  void *v28; // [rsp+78h] [rbp+Fh]
  void *v29; // [rsp+80h] [rbp+17h]
  void *v30; // [rsp+88h] [rbp+1Fh]
  void *v31; // [rsp+90h] [rbp+27h]
  void *v32; // [rsp+D8h] [rbp+6Fh]
  void *v33; // [rsp+E0h] [rbp+77h]
  void *v34; // [rsp+E8h] [rbp+7Fh]

  v2 = 0; /*0x20a046*/
  result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 16)); /*0x20a04c*/
  if ( result ) /*0x20a054*/
  {
    while ( v2 ) /*0x20a062*/
    {
      switch ( v2 ) /*0x20a129*/
      {
        case 1u: /*0x20a129*/
          v18 = 0; /*0x20a13a*/
          v19 = 4; /*0x20a13e*/
          v20 = 15; /*0x20a146*/
          strcpy((char *)&v18, "0008"); /*0x20a154*/
          v9 = qword_905FE0; /*0x20a15b*/
          if ( !qword_905FE0 ) /*0x20a165*/
          {
            v34 = operator new(0x3E8u); /*0x20a171*/
            qword_905FE0 = sub_2D2B40(v34); /*0x20a17e*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x20a18f*/
            v9 = qword_905FE0; /*0x20a191*/
          }
          isSpecialChestUnlocked = GameStatsManager_isSpecialChestUnlocked(v9, &v18); /*0x20a1a1*/
          v7 = qword_905FD0; /*0x20a1a4*/
          if ( !qword_905FD0 ) /*0x20a1ae*/
          {
            v21 = operator new(0x6E8u); /*0x20a1ba*/
            qword_905FD0 = sub_2723A0(v21); /*0x20a1c7*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x20a1d8*/
            v7 = qword_905FD0; /*0x20a1da*/
          }
          v8 = (const char *)&unk_732CD4; /*0x20a1e1*/
          goto LABEL_44; /*0x20a1e8*/
        case 2u: /*0x20a129*/
          v18 = 0; /*0x20a201*/
          v19 = 4; /*0x20a205*/
          v20 = 15; /*0x20a20d*/
          strcpy((char *)&v18, "0009"); /*0x20a21b*/
          v10 = qword_905FE0; /*0x20a222*/
          if ( !qword_905FE0 ) /*0x20a22c*/
          {
            v22 = operator new(0x3E8u); /*0x20a238*/
            qword_905FE0 = sub_2D2B40(v22); /*0x20a245*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x20a256*/
            v10 = qword_905FE0; /*0x20a258*/
          }
          isSpecialChestUnlocked = GameStatsManager_isSpecialChestUnlocked(v10, &v18); /*0x20a268*/
          v7 = qword_905FD0; /*0x20a26b*/
          if ( !qword_905FD0 ) /*0x20a275*/
          {
            v23 = operator new(0x6E8u); /*0x20a281*/
            qword_905FD0 = sub_2723A0(v23); /*0x20a28e*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x20a29f*/
            v7 = qword_905FD0; /*0x20a2a1*/
          }
          v8 = (const char *)&unk_732CC8; /*0x20a2a8*/
          goto LABEL_44; /*0x20a2af*/
        case 3u: /*0x20a129*/
          v18 = 0; /*0x20a2c8*/
          v19 = 4; /*0x20a2cc*/
          v20 = 15; /*0x20a2d4*/
          strcpy((char *)&v18, "0010"); /*0x20a2e2*/
          v11 = qword_905FE0; /*0x20a2e9*/
          if ( !qword_905FE0 ) /*0x20a2f3*/
          {
            v24 = operator new(0x3E8u); /*0x20a2ff*/
            qword_905FE0 = sub_2D2B40(v24); /*0x20a30c*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x20a31d*/
            v11 = qword_905FE0; /*0x20a31f*/
          }
          isSpecialChestUnlocked = GameStatsManager_isSpecialChestUnlocked(v11, &v18); /*0x20a32f*/
          v7 = qword_905FD0; /*0x20a332*/
          if ( !qword_905FD0 ) /*0x20a33c*/
          {
            v25 = operator new(0x6E8u); /*0x20a348*/
            qword_905FD0 = sub_2723A0(v25); /*0x20a355*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x20a366*/
            v7 = qword_905FD0; /*0x20a368*/
          }
          v8 = (const char *)&unk_732CDC; /*0x20a36f*/
          goto LABEL_44; /*0x20a376*/
        case 4u: /*0x20a129*/
          v18 = 0; /*0x20a38f*/
          v19 = 4; /*0x20a393*/
          v20 = 15; /*0x20a39b*/
          strcpy((char *)&v18, "0011"); /*0x20a3a9*/
          v12 = qword_905FE0; /*0x20a3b0*/
          if ( !qword_905FE0 ) /*0x20a3ba*/
          {
            v26 = operator new(0x3E8u); /*0x20a3c6*/
            qword_905FE0 = sub_2D2B40(v26); /*0x20a3d3*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x20a3e4*/
            v12 = qword_905FE0; /*0x20a3e6*/
          }
          isSpecialChestUnlocked = GameStatsManager_isSpecialChestUnlocked(v12, &v18); /*0x20a3f6*/
          v7 = qword_905FD0; /*0x20a3f9*/
          if ( !qword_905FD0 ) /*0x20a403*/
          {
            v27 = operator new(0x6E8u); /*0x20a40f*/
            qword_905FD0 = sub_2723A0(v27); /*0x20a41c*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x20a42d*/
            v7 = qword_905FD0; /*0x20a42f*/
          }
          v8 = (const char *)&unk_732CD8; /*0x20a436*/
          goto LABEL_44; /*0x20a43d*/
        case 5u: /*0x20a129*/
          v18 = 0; /*0x20a456*/
          v19 = 4; /*0x20a45a*/
          v20 = 15; /*0x20a462*/
          strcpy((char *)&v18, "0024"); /*0x20a470*/
          v13 = qword_905FE0; /*0x20a477*/
          if ( !qword_905FE0 ) /*0x20a481*/
          {
            v28 = operator new(0x3E8u); /*0x20a48d*/
            qword_905FE0 = sub_2D2B40(v28); /*0x20a49a*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x20a4ab*/
            v13 = qword_905FE0; /*0x20a4ad*/
          }
          isSpecialChestUnlocked = GameStatsManager_isSpecialChestUnlocked(v13, &v18); /*0x20a4bd*/
          v7 = qword_905FD0; /*0x20a4c0*/
          if ( !qword_905FD0 ) /*0x20a4ca*/
          {
            v29 = operator new(0x6E8u); /*0x20a4d6*/
            qword_905FD0 = sub_2723A0(v29); /*0x20a4e3*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x20a4f4*/
            v7 = qword_905FD0; /*0x20a4f6*/
          }
          v8 = "32"; /*0x20a4fd*/
          goto LABEL_44; /*0x20a504*/
        case 6u: /*0x20a129*/
          v18 = 0; /*0x20a51d*/
          v19 = 4; /*0x20a521*/
          v20 = 15; /*0x20a529*/
          strcpy((char *)&v18, "0025"); /*0x20a537*/
          v14 = qword_905FE0; /*0x20a53e*/
          if ( !qword_905FE0 ) /*0x20a548*/
          {
            v30 = operator new(0x3E8u); /*0x20a554*/
            qword_905FE0 = sub_2D2B40(v30); /*0x20a561*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x20a572*/
            v14 = qword_905FE0; /*0x20a574*/
          }
          isSpecialChestUnlocked = GameStatsManager_isSpecialChestUnlocked(v14, &v18); /*0x20a584*/
          v7 = qword_905FD0; /*0x20a587*/
          if ( !qword_905FD0 ) /*0x20a591*/
          {
            v31 = operator new(0x6E8u); /*0x20a59d*/
            qword_905FD0 = sub_2723A0(v31); /*0x20a5aa*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x20a5bb*/
            v7 = qword_905FD0; /*0x20a5bd*/
          }
          v8 = (const char *)&word_750174; /*0x20a5c4*/
          goto LABEL_44; /*0x20a5c4*/
      }
LABEL_47:
      ++v2; /*0x20a624*/
      result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 16)); /*0x20a62a*/
      if ( v2 >= result ) /*0x20a632*/
        return result; /*0x20a632*/
    }
    v18 = 0; /*0x20a073*/
    v19 = 4; /*0x20a077*/
    v20 = 15; /*0x20a07f*/
    strcpy((char *)&v18, "0007"); /*0x20a08d*/
    v4 = qword_905FE0; /*0x20a094*/
    if ( !qword_905FE0 ) /*0x20a09e*/
    {
      v32 = operator new(0x3E8u); /*0x20a0aa*/
      qword_905FE0 = sub_2D2B40(v32); /*0x20a0b7*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x20a0c8*/
      v4 = qword_905FE0; /*0x20a0ca*/
    }
    isSpecialChestUnlocked = GameStatsManager_isSpecialChestUnlocked(v4, &v18); /*0x20a0da*/
    v7 = qword_905FD0; /*0x20a0dd*/
    if ( !qword_905FD0 ) /*0x20a0e7*/
    {
      v33 = operator new(0x6E8u); /*0x20a0f3*/
      qword_905FD0 = sub_2723A0(v33); /*0x20a100*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x20a111*/
      v7 = qword_905FD0; /*0x20a113*/
    }
    v8 = "22"; /*0x20a11a*/
LABEL_44:
    if ( (unsigned __int8)sub_27B350(v7, v8, v6) ) /*0x20a5cb*/
    {
      if ( !isSpecialChestUnlocked ) /*0x20a5d6*/
      {
        v15 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 16), v2); /*0x20a5e4*/
        *((_BYTE *)v15 + 608) = 0; /*0x20a5e7*/
        (**((void (__fastcall ***)(__int64, void *))v15 + 40))((__int64)v15 + 320, &unk_6FE3EC); /*0x20a601*/
        v16 = **(_QWORD **)(a1 - 88); /*0x20a608*/
        v17 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v15 + 56LL))(v15); /*0x20a615*/
        (*(void (__fastcall **)(_QWORD, _QWORD))(v16 + 560))(*(_QWORD *)(a1 - 88), (unsigned int)(v17 + 10)); /*0x20a61e*/
      }
    }
    goto LABEL_47; /*0x20a61e*/
  }
  return result; /*0x20a638*/
}

// [4/6] Address: 0x20a650
// Method: FollowRewardPage::rewardedVideoFinished
void __fastcall FollowRewardPage_rewardedVideoFinished(__int64 a1)
{
  *(_BYTE *)(a1 + 16) = 0; /*0x20a650*/
}

// [5/6] Address: 0x20bad0
// Method: FollowRewardPage::switchToOpenedState
__int64 __fastcall FollowRewardPage_switchToOpenedState(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int *v8; // rbx
  __int64 v9; // rax
  __int64 *v10; // rbx
  __int64 *i; // rsi
  __int64 v12; // rdi
  void (__fastcall **v13)(__int64, __int64 *); // rax
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v15 = a1; /*0x20bad5*/
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 952LL))(a2); /*0x20bae9*/
  LOBYTE(v4) = 1; /*0x20baef*/
  v5 = v3; /*0x20bafa*/
  *(_BYTE *)(v3 + 608) = 0; /*0x20bafd*/
  sub_562400(v3, 4, v4); /*0x20bb04*/
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 480LL))(v5); /*0x20bb16*/
  if ( v6 ) /*0x20bb1c*/
  {
    v8 = *(unsigned int **)(v6 + 56); /*0x20bb1e*/
    v9 = *v8; /*0x20bb22*/
    if ( (_DWORD)v9 ) /*0x20bb26*/
    {
      v10 = (__int64 *)*((_QWORD *)v8 + 2); /*0x20bb28*/
      for ( i = &v10[v9 - 1]; v10 <= i; ++v10 ) /*0x20bb3c*/
      {
        v12 = *v10; /*0x20bb43*/
        if ( !*v10 ) /*0x20bb43*/
          break; /*0x20bb49*/
        LOBYTE(v7) = -106; /*0x20bb59*/
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v12 + 320) + 40LL))(v12 + 320, v7); /*0x20bb5b*/
        v13 = *(void (__fastcall ***)(__int64, __int64 *))(v12 + 320); /*0x20bb5e*/
        LOWORD(v15) = -26986; /*0x20bb71*/
        BYTE2(v15) = -106; /*0x20bb78*/
        (*v13)(v12 + 320, &v15); /*0x20bb7d*/
      }
    }
  }
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 936LL))(a2, 0);
}

// [6/6] Address: 0x20bbb0
// Method: FollowRewardPage::FLAlert_Clicked
// Hidden C++ exception states: #wind=7
void __fastcall FollowRewardPage_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  struct __timeb64 Time; // [rsp+20h] [rbp-28h] BYREF

  if ( a3 ) /*0x20bbb3*/
  {
    switch ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) ) /*0x20bbf4*/
    {
      case 1u: /*0x20bbf4*/
        v4 = qword_905FD0; /*0x20bbf6*/
        if ( !qword_905FD0 ) /*0x20bc00*/
        {
          Time.time = (__time64_t)operator new(0x6E8u); /*0x20bc0c*/
          qword_905FD0 = sub_2723A0(Time.time); /*0x20bc1a*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x20bc2b*/
          v4 = qword_905FD0; /*0x20bc2d*/
        }
        sub_2797A0(v4); /*0x20bc34*/
        return; /*0x20bc4b*/
      case 2u: /*0x20bbf4*/
        v5 = qword_905FD0; /*0x20bc4c*/
        if ( !qword_905FD0 ) /*0x20bc56*/
        {
          Time.time = (__time64_t)operator new(0x6E8u); /*0x20bc62*/
          qword_905FD0 = sub_2723A0(Time.time); /*0x20bc70*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x20bc81*/
          v5 = qword_905FD0; /*0x20bc83*/
        }
        sub_279710(v5); /*0x20bc8a*/
        return; /*0x20bca1*/
      case 3u: /*0x20bbf4*/
        v6 = qword_905FD0; /*0x20bca2*/
        if ( !qword_905FD0 ) /*0x20bcac*/
        {
          Time.time = (__time64_t)operator new(0x6E8u); /*0x20bcb8*/
          qword_905FD0 = sub_2723A0(Time.time); /*0x20bcc6*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x20bcd7*/
          v6 = qword_905FD0; /*0x20bcd9*/
        }
        sub_279680(v6); /*0x20bce0*/
        return; /*0x20bcf7*/
      case 4u: /*0x20bbf4*/
        v7 = qword_905FD0; /*0x20bcf8*/
        if ( !qword_905FD0 ) /*0x20bd02*/
        {
          Time.time = (__time64_t)operator new(0x6E8u); /*0x20bd0e*/
          qword_905FD0 = sub_2723A0(Time.time); /*0x20bd1c*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x20bd2d*/
          v7 = qword_905FD0; /*0x20bd2f*/
        }
        v8 = cocos2d::CCApplication::sharedApplication(v3); /*0x20bd36*/
        (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)v8 + 96LL))( /*0x20bd4d*/
          v8,
          "https://www.twitch.tv/directory/category/geometry-dash");
        *(_BYTE *)(v7 + 720) = 1; /*0x20bd50*/
        goto LABEL_24; /*0x20bd57*/
      case 5u: /*0x20bbf4*/
        v7 = qword_905FD0; /*0x20bd5c*/
        if ( !qword_905FD0 ) /*0x20bd66*/
        {
          Time.time = (__time64_t)operator new(0x6E8u); /*0x20bd72*/
          qword_905FD0 = sub_2723A0(Time.time); /*0x20bd80*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x20bd91*/
          v7 = qword_905FD0; /*0x20bd93*/
        }
        v9 = cocos2d::CCApplication::sharedApplication(v3); /*0x20bd9a*/
        (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)v9 + 96LL))( /*0x20bdb1*/
          v9,
          "https://discord.com/invite/geometrydash");
        *(_BYTE *)(v7 + 721) = 1; /*0x20bdb4*/
        goto LABEL_24; /*0x20bdbb*/
      case 6u: /*0x20bbf4*/
        v7 = qword_905FD0; /*0x20bdc0*/
        if ( !qword_905FD0 ) /*0x20bdca*/
        {
          Time.time = (__time64_t)operator new(0x6E8u); /*0x20bdd6*/
          qword_905FD0 = sub_2723A0(Time.time); /*0x20bde4*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x20bdf5*/
          v7 = qword_905FD0; /*0x20bdf7*/
        }
        v10 = cocos2d::CCApplication::sharedApplication(v3); /*0x20bdfe*/
        (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)v10 + 96LL))( /*0x20be15*/
          v10,
          "https://www.reddit.com/r/geometrydash/");
        *(_BYTE *)(v7 + 722) = 1; /*0x20be18*/
        goto LABEL_24; /*0x20be1f*/
      case 7u: /*0x20bbf4*/
        v7 = qword_905FD0; /*0x20be21*/
        if ( !qword_905FD0 ) /*0x20be2b*/
        {
          Time.time = (__time64_t)operator new(0x6E8u); /*0x20be37*/
          qword_905FD0 = sub_2723A0(Time.time); /*0x20be45*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x20be56*/
          v7 = qword_905FD0; /*0x20be58*/
        }
        v11 = cocos2d::CCApplication::sharedApplication(v3); /*0x20be5f*/
        (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)v11 + 96LL))( /*0x20be76*/
          v11,
          "https://www.youtube.com/@GeometryDashSpotlight");
        *(_BYTE *)(v7 + 723) = 1; /*0x20be79*/
LABEL_24:
        ftime64(&Time); /*0x20be80*/
        *(double *)(v7 + 728) = (double)Time.millitm / 1000.0 + (double)SLODWORD(Time.time); /*0x20beae*/
        break; /*0x20beae*/
      default:
        return;
    }
  }
}

// Address: 0x207ec0
// Method: FollowRewardPage::init
// Hidden C++ exception states: #wind=28
bool __fastcall FollowRewardPage_init(__int64 a1)
{
  bool result; // al
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 *v6; // rdi
  __int64 v7; // rdx
  void (__fastcall *v8)(__int64 *, __int64); // r8
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  int i; // esi
  cocos2d::CCSprite *v14; // rdi
  float v15; // xmm6_4
  float v16; // xmm7_4
  __int64 v17; // rbx
  __int64 v18; // rax
  struct cocos2d::CCLabelBMFont *v19; // rsi
  __int64 v20; // rbx
  __int64 v21; // rax
  struct cocos2d::CCLabelBMFont *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rax
  unsigned int v26; // edi
  cocos2d::CCObject *v27; // rbx
  struct cocos2d::CCMenu *v28; // rax
  __int64 v29; // rdi
  struct cocos2d::CCMenu *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rcx
  cocos2d::CCObject *v33; // rax
  unsigned int v34; // r12d
  __int64 v35; // rsi
  char v36; // r14
  __int64 v37; // r13
  __int64 v38; // rcx
  __int64 v39; // rcx
  unsigned __int64 v40; // rdi
  _BYTE *v41; // rbx
  unsigned __int64 v42; // rcx
  __int64 v43; // rbx
  _WORD *v44; // rsi
  void *v45; // rcx
  unsigned __int64 v46; // rdi
  void **v47; // rbx
  __int64 v48; // r8
  unsigned __int64 v49; // rcx
  _WORD *v50; // rbx
  void *v51; // rcx
  __int64 v52; // rcx
  char v53; // al
  float v54; // xmm2_4
  float v55; // xmm1_4
  cocos2d::CCPoint *v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  unsigned __int64 v59; // rdi
  _BYTE *v60; // rbx
  unsigned __int64 v61; // rcx
  __int64 v62; // rbx
  _WORD *v63; // rsi
  void *v64; // rcx
  unsigned __int64 v65; // rdi
  void **v66; // rbx
  __int64 v67; // r8
  unsigned __int64 v68; // rcx
  _WORD *v69; // rbx
  void *v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rcx
  unsigned __int64 v74; // rdi
  _BYTE *v75; // rbx
  __int64 v76; // r8
  unsigned __int64 v77; // rcx
  __int64 v78; // rbx
  _WORD *v79; // rsi
  void *v80; // rcx
  unsigned __int64 v81; // rbx
  char *v82; // rcx
  unsigned __int64 v83; // rcx
  __int64 v84; // rdi
  char *v85; // rsi
  void *v86; // rcx
  __int64 v87; // rcx
  __int64 v88; // rcx
  __int64 v89; // rcx
  unsigned __int64 v90; // rdi
  _BYTE *v91; // rbx
  unsigned __int64 v92; // rcx
  _WORD *v93; // rbx
  void *v94; // rcx
  unsigned __int64 v95; // rdi
  void **v96; // rbx
  __int64 v97; // r8
  unsigned __int64 v98; // rcx
  __int64 v99; // rbx
  char *v100; // rsi
  void *v101; // rcx
  __int64 v102; // rcx
  __int64 v103; // rcx
  __int64 v104; // rcx
  unsigned __int64 v105; // rdi
  _BYTE *v106; // rbx
  unsigned __int64 v107; // rcx
  char *v108; // rbx
  void *v109; // rcx
  unsigned __int64 v110; // rdi
  void **v111; // rbx
  __int64 v112; // r8
  unsigned __int64 v113; // rcx
  _WORD *v114; // rbx
  void *v115; // rcx
  __int64 v116; // rcx
  __int64 v117; // rcx
  __int64 v118; // rcx
  unsigned __int64 v119; // rdi
  _BYTE *v120; // rbx
  unsigned __int64 v121; // rcx
  __int64 v122; // rbx
  _WORD *v123; // rsi
  void *v124; // rcx
  unsigned __int64 v125; // rdi
  void **v126; // rbx
  __int64 v127; // r8
  unsigned __int64 v128; // rcx
  __int64 v129; // rbx
  char *v130; // rsi
  void *v131; // rcx
  __int64 v132; // rcx
  __int64 v133; // rcx
  __int64 v134; // rcx
  unsigned __int64 v135; // rdi
  _BYTE *v136; // rbx
  unsigned __int64 v137; // rcx
  __int64 v138; // rbx
  _WORD *v139; // rsi
  void *v140; // rcx
  unsigned __int64 v141; // rdi
  void **v142; // rbx
  __int64 v143; // r8
  unsigned __int64 v144; // rcx
  __int64 v145; // rbx
  _WORD *v146; // rsi
  void *v147; // rcx
  __int64 v148; // rcx
  __int64 v149; // rax
  cocos2d::CCSprite *v150; // rsi
  _WORD *v151; // rdi
  __int64 v152; // rbx
  __int64 v153; // rax
  __int64 v154; // rbx
  float v155; // xmm6_4
  float *v156; // rax
  __int64 v157; // rax
  __int64 v158; // rbx
  __int64 v159; // rax
  void **v160; // rcx
  struct cocos2d::CCLabelBMFont *v161; // rbx
  __int64 v162; // rax
  __int64 v163; // rcx
  void **v164; // rcx
  struct cocos2d::CCSprite *v165; // rbx
  __int64 v166; // rax
  void *v167; // rcx
  void *v168; // rcx
  __int64 v169; // rax
  bool isSpecialChestUnlocked; // [rsp+30h] [rbp-D0h]
  __int128 v171; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v172; // [rsp+50h] [rbp-B0h]
  __int64 v173; // [rsp+58h] [rbp-A8h]
  float v174; // [rsp+60h] [rbp-A0h] BYREF
  float v175; // [rsp+64h] [rbp-9Ch]
  _BYTE v176[8]; // [rsp+68h] [rbp-98h] BYREF
  void *v177; // [rsp+70h] [rbp-90h] BYREF
  __int128 *v178; // [rsp+78h] [rbp-88h]
  _BYTE v179[8]; // [rsp+80h] [rbp-80h] BYREF
  char Src[15]; // [rsp+88h] [rbp-78h] BYREF
  char v181; // [rsp+97h] [rbp-69h]
  __int64 v182; // [rsp+98h] [rbp-68h]
  __int64 v183; // [rsp+A0h] [rbp-60h]
  __int128 v184; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v185; // [rsp+B8h] [rbp-48h]
  __int64 v186; // [rsp+C0h] [rbp-40h]
  __int128 v187; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v188; // [rsp+D8h] [rbp-28h]
  __int64 v189; // [rsp+E0h] [rbp-20h]
  __int128 v190; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v191; // [rsp+F8h] [rbp-8h]
  __int64 v192; // [rsp+100h] [rbp+0h]
  __int128 v193; // [rsp+108h] [rbp+8h] BYREF
  __int64 v194; // [rsp+118h] [rbp+18h]
  __int64 v195; // [rsp+120h] [rbp+20h]
  __int128 v196; // [rsp+128h] [rbp+28h] BYREF
  __int64 v197; // [rsp+138h] [rbp+38h]
  __int64 v198; // [rsp+140h] [rbp+40h]
  __int128 v199; // [rsp+148h] [rbp+48h] BYREF
  __int64 v200; // [rsp+158h] [rbp+58h]
  __int64 v201; // [rsp+160h] [rbp+60h]
  __int128 v202; // [rsp+168h] [rbp+68h] BYREF
  __int64 v203; // [rsp+178h] [rbp+78h]
  __int64 v204; // [rsp+180h] [rbp+80h]
  _BYTE v205[8]; // [rsp+188h] [rbp+88h] BYREF
  _BYTE v206[8]; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v207[2]; // [rsp+198h] [rbp+98h] BYREF
  void *v208; // [rsp+1A8h] [rbp+A8h]
  void *v209; // [rsp+1B0h] [rbp+B0h]
  char v210; // [rsp+1B8h] [rbp+B8h] BYREF
  void *v211; // [rsp+1C0h] [rbp+C0h]
  void *v212; // [rsp+1C8h] [rbp+C8h]
  void *v213; // [rsp+1D0h] [rbp+D0h]
  char v214; // [rsp+1D8h] [rbp+D8h] BYREF
  void *v215; // [rsp+1E0h] [rbp+E0h]
  void *v216; // [rsp+1E8h] [rbp+E8h]
  void *v217; // [rsp+1F0h] [rbp+F0h]
  char v218; // [rsp+1F8h] [rbp+F8h] BYREF
  void *v219; // [rsp+200h] [rbp+100h]
  void *v220; // [rsp+208h] [rbp+108h]
  void *v221; // [rsp+210h] [rbp+110h]
  char v222; // [rsp+218h] [rbp+118h] BYREF
  void *v223; // [rsp+220h] [rbp+120h]
  void *v224; // [rsp+228h] [rbp+128h]
  char v225; // [rsp+230h] [rbp+130h] BYREF
  void *v226; // [rsp+238h] [rbp+138h]
  _BYTE v227[8]; // [rsp+240h] [rbp+140h] BYREF
  _BYTE v228[8]; // [rsp+248h] [rbp+148h] BYREF
  _BYTE v229[8]; // [rsp+250h] [rbp+150h] BYREF
  void *v230; // [rsp+258h] [rbp+158h]
  void *v231; // [rsp+260h] [rbp+160h]
  void *v232; // [rsp+268h] [rbp+168h]
  char v233; // [rsp+270h] [rbp+170h] BYREF
  void *v234; // [rsp+278h] [rbp+178h]
  void *v235; // [rsp+280h] [rbp+180h]
  void *v236; // [rsp+288h] [rbp+188h]
  void *v237; // [rsp+290h] [rbp+190h]
  char v238; // [rsp+298h] [rbp+198h] BYREF
  void *v239; // [rsp+2A0h] [rbp+1A0h]
  _BYTE v240[8]; // [rsp+2A8h] [rbp+1A8h] BYREF
  void *v241[2]; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int64 v242; // [rsp+2C0h] [rbp+1C0h]
  unsigned __int64 v243; // [rsp+2C8h] [rbp+1C8h]
  void *v244[2]; // [rsp+2D0h] [rbp+1D0h] BYREF
  __int64 v245; // [rsp+2E0h] [rbp+1E0h]
  unsigned __int64 v246; // [rsp+2E8h] [rbp+1E8h]

  result = FLAlertLayer_init(a1, 150);
  if ( !result )
    return result;
  v4 = cocos2d::CCDirector::sharedDirector(v3);
  cocos2d::CCDirector::getWinSize(v4, &v174);
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v207, 0.0, 0.0, 80.0, 80.0);
  v6 = (__int64 *)cocos2d::extension::CCScale9Sprite::create("GJ_square01.png", v5);
  v7 = v6[40];
  v8 = *(void (__fastcall **)(__int64 *, __int64))(v7 + 40);
  LOBYTE(v7) = -1;
  v8(v6 + 40, v7);
  v9 = *v6;
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v177, 420.0, 280.0);
  (*(void (__fastcall **)(__int64 *, __int64))(v9 + 312))(v6, v10);
  (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
    *(_QWORD *)(a1 + 584),
    v6,
    0xFFFFFFFFLL);
  v11 = *v6;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v177, v174 * 0.5, v175 * 0.5);
  (*(void (__fastcall **)(__int64 *, __int64))(v11 + 184))(v6, v12);
  for ( i = 0; i < 4; ++i )
  {
    v14 = cocos2d::CCSprite::createWithSpriteFrameName("dailyLevelCorner_001.png");
    (*(void (__fastcall **)(_QWORD, cocos2d::CCSprite *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
      *(_QWORD *)(a1 + 584),
      v14,
      8);
    v15 = 185.0;
    v16 = 115.0;
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v15 = -185.0;
          cocos2d::CCSprite::setFlipY(v14, 1);
          break;
        case 2:
          cocos2d::CCSprite::setFlipX(v14, 1);
          cocos2d::CCSprite::setFlipY(v14, 1);
          break;
        case 3:
          v16 = -115.0;
          cocos2d::CCSprite::setFlipX(v14, 1);
          break;
      }
    }
    else
    {
      v15 = -185.0;
      v16 = -115.0;
    }
    v17 = *(_QWORD *)v14;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v177, (float)(v174 * 0.5) + v15, (float)(v175 * 0.5) + v16);
    (*(void (__fastcall **)(cocos2d::CCSprite *, __int64))(v17 + 184))(v14, v18);
  }
  v19 = cocos2d::CCLabelBMFont::create("Follow RobTop Games!", (const char *)&qword_6FFF68);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v19 + 160LL))(v19);
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))(
    *(_QWORD *)(a1 + 584),
    v19);
  v20 = *(_QWORD *)v19;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v177, v174 * 0.5, (float)((float)(v175 * 0.5) + 140.0) - 22.0);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v20 + 184))(v19, v21);
  v22 = cocos2d::CCLabelBMFont::create("Earn rewards!", (const char *)&qword_6FFF68);
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))(
    *(_QWORD *)(a1 + 584),
    v22);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v22 + 160LL))(v22);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v177, 0.0, -26.0);
  v24 = v23;
  v25 = (*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v19 + 200LL))(v19);
  cocos2d::CCPoint::operator+(v25, v179, v24);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, _BYTE *))(*(_QWORD *)v22 + 184LL))(v22, v179);
  v26 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_closeBtn_001.png");
  v177 = operator new(0x208u);
  v27 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra((__int64)v177);
  if ( v27 )
  {
    if ( (unsigned __int8)sub_47940((_DWORD)v27, v26, 0, a1, (__int64)UploadPopup_onClose) )
    {
      cocos2d::CCObject::autorelease(v27);
      goto LABEL_17;
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v27 + 8LL))(v27, 1);
  }
  v27 = 0;
LABEL_17:
  *((_DWORD *)v27 + 93) = 1070386381;
  v28 = cocos2d::CCMenu::create(v27, 0);
  *(_QWORD *)(a1 + 552) = v28;
  v29 = *(_QWORD *)v28;
  v30 = v28;
  cocos2d::CCPoint::CCPoint(
    (cocos2d::CCPoint *)&v177,
    (float)((float)(v174 * 0.5) - 210.0) + 10.0,
    (float)((float)(v175 * 0.5) + 140.0) - 10.0);
  (*(void (__fastcall **)(struct cocos2d::CCMenu *, __int64))(v29 + 184))(v30, v31);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
    *(_QWORD *)(a1 + 584),
    *(_QWORD *)(a1 + 552),
    10);
  v33 = (cocos2d::CCObject *)cocos2d::CCArray::create(v32);
  *(_QWORD *)(a1 + 688) = v33;
  cocos2d::CCObject::retain(v33);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v205, v174 * 0.5, (float)(v175 * 0.5) - 30.0);
  v34 = 1;
  while ( 2 )
  {
    v35 = 0x7FFFFFFFFFFFFFFFLL;
    isSpecialChestUnlocked = 0;
    v36 = 0;
    v37 = 0;
    *(_OWORD *)v244 = 0;
    v245 = 0;
    v246 = 15;
    LOBYTE(v244[0]) = 0;
    *(_OWORD *)v241 = 0;
    v242 = 0;
    v243 = 15;
    LOBYTE(v241[0]) = 0;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v176, (const struct cocos2d::CCPoint *)&unk_904828);
    switch ( v34 )
    {
      case 1u:
        v178 = &v171;
        v171 = 0;
        v172 = 4;
        v173 = 15;
        strcpy((char *)&v171, "0007");
        v38 = qword_905FE0;
        if ( !qword_905FE0 )
        {
          v231 = operator new(0x3E8u);
          qword_905FE0 = sub_2D2B40(v231);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
          v38 = qword_905FE0;
        }
        isSpecialChestUnlocked = GameStatsManager_isSpecialChestUnlocked(v38, &v171);
        v178 = &v199;
        v199 = 0;
        v200 = 4;
        v201 = 15;
        strcpy((char *)&v199, "0007");
        v39 = qword_905FE0;
        if ( !qword_905FE0 )
        {
          v208 = operator new(0x3E8u);
          qword_905FE0 = sub_2D2B40(v208);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
          v39 = qword_905FE0;
        }
        v37 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(v39 + 368), &v199);
        sub_3C310(&v199);
        v40 = v246;
        if ( v246 < 0x11 )
        {
          v42 = v246 >> 1;
          if ( v246 <= 0x7FFFFFFFFFFFFFFFLL - (v246 >> 1) )
          {
            v43 = 31;
            if ( v42 + v246 > 0x1F )
              v43 = v42 + v246;
          }
          else
          {
            v43 = 0x7FFFFFFFFFFFFFFFLL;
          }
          v44 = (_WORD *)sub_3C460(v43 + 1);
          v245 = 17;
          v246 = v43;
          *(_OWORD *)v44 = *(_OWORD *)"gj_ytIcon_001.png";
          v44[8] = (unsigned __int8)aGjYticon001Png[16];
          if ( v40 > 0xF )
          {
            v45 = v244[0];
            if ( v40 + 1 >= 0x1000 )
            {
              v45 = (void *)*((_QWORD *)v244[0] - 1);
              if ( (unsigned __int64)((char *)v244[0] - (char *)v45 - 8) > 0x1F )
                goto LABEL_261;
            }
            j_j_free(v45);
          }
          v244[0] = v44;
          v35 = 0x7FFFFFFFFFFFFFFFLL;
        }
        else
        {
          v41 = v244[0];
          v245 = 17;
          memmove(v244[0], "gj_ytIcon_001.png", 0x11u);
          v41[17] = 0;
        }
        v46 = v243;
        if ( v243 < 7 )
        {
          v49 = v243 >> 1;
          if ( v243 <= 0x7FFFFFFFFFFFFFFFLL - (v243 >> 1) )
          {
            v35 = 15;
            if ( v243 + v49 > 0xF )
              v35 = v243 + v49;
          }
          v50 = (_WORD *)sub_3C460(v35 + 1);
          v242 = 7;
          v243 = v35;
          qmemcpy(v50, "YouTub", 6);
          v50[3] = (unsigned __int8)aYoutube[6];
          if ( v46 > 0xF )
          {
            v51 = v241[0];
            if ( v46 + 1 >= 0x1000 )
            {
              v51 = (void *)*((_QWORD *)v241[0] - 1);
              if ( (unsigned __int64)((char *)v241[0] - (char *)v51 - 8) > 0x1F )
                goto LABEL_261;
            }
            j_j_free(v51);
          }
          v241[0] = v50;
        }
        else
        {
          v47 = v241;
          if ( v243 > 0xF )
            v47 = (void **)v241[0];
          v242 = 7;
          memmove(v47, "YouTube", 7u);
          *((_BYTE *)v47 + 7) = 0;
        }
        v52 = qword_905FD0;
        if ( !qword_905FD0 )
        {
          v209 = operator new(0x6E8u);
          qword_905FD0 = sub_2723A0(v209);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
          v52 = qword_905FD0;
        }
        v53 = sub_27B350(v52, "22", v48);
        v54 = 48.0;
        v55 = -90.0;
        v56 = (cocos2d::CCPoint *)&v210;
        goto LABEL_232;
      case 2u:
        v171 = 0;
        v172 = 4;
        v173 = 15;
        strcpy((char *)&v171, "0008");
        v57 = qword_905FE0;
        if ( !qword_905FE0 )
        {
          v211 = operator new(0x3E8u);
          qword_905FE0 = sub_2D2B40(v211);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
          v57 = qword_905FE0;
        }
        isSpecialChestUnlocked = GameStatsManager_isSpecialChestUnlocked(v57, &v171);
        v196 = 0;
        v197 = 4;
        v198 = 15;
        strcpy((char *)&v196, "0008");
        v178 = &v196;
        v58 = qword_905FE0;
        if ( !qword_905FE0 )
        {
          v212 = operator new(0x3E8u);
          qword_905FE0 = sub_2D2B40(v212);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
          v58 = qword_905FE0;
        }
        v37 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(v58 + 368), &v196);
        sub_3C310(&v196);
        v59 = v246;
        if ( v246 < 0x11 )
        {
          v61 = v246 >> 1;
          if ( v246 <= 0x7FFFFFFFFFFFFFFFLL - (v246 >> 1) )
          {
            v62 = 31;
            if ( v246 + v61 > 0x1F )
              v62 = v246 + v61;
          }
          else
          {
            v62 = 0x7FFFFFFFFFFFFFFFLL;
          }
          v63 = (_WORD *)sub_3C460(v62 + 1);
          v245 = 17;
          v246 = v62;
          *(_OWORD *)v63 = *(_OWORD *)"gj_twIcon_001.png";
          v63[8] = (unsigned __int8)aGjTwicon001Png[16];
          if ( v59 > 0xF )
          {
            v64 = v244[0];
            if ( v59 + 1 >= 0x1000 )
            {
              v64 = (void *)*((_QWORD *)v244[0] - 1);
              if ( (unsigned __int64)((char *)v244[0] - (char *)v64 - 8) > 0x1F )
                goto LABEL_261;
            }
            j_j_free(v64);
          }
          v244[0] = v63;
          v35 = 0x7FFFFFFFFFFFFFFFLL;
        }
        else
        {
          v60 = v244[0];
          v245 = 17;
          memmove(v244[0], "gj_twIcon_001.png", 0x11u);
          v60[17] = 0;
        }
        v65 = v243;
        if ( v243 < 7 )
        {
          v68 = v243 >> 1;
          if ( v243 <= 0x7FFFFFFFFFFFFFFFLL - (v243 >> 1) )
          {
            v35 = 15;
            if ( v243 + v68 > 0xF )
              v35 = v243 + v68;
          }
          v69 = (_WORD *)sub_3C460(v35 + 1);
          v242 = 7;
          v243 = v35;
          qmemcpy(v69, "Twitte", 6);
          v69[3] = (unsigned __int8)aTwitter[6];
          if ( v65 > 0xF )
          {
            v70 = v241[0];
            if ( v65 + 1 >= 0x1000 )
            {
              v70 = (void *)*((_QWORD *)v241[0] - 1);
              if ( (unsigned __int64)((char *)v241[0] - (char *)v70 - 8) > 0x1F )
                goto LABEL_261;
            }
            j_j_free(v70);
          }
          v241[0] = v69;
        }
        else
        {
          v66 = v241;
          if ( v243 > 0xF )
            v66 = (void **)v241[0];
          v242 = 7;
          memmove(v66, "Twitter", 7u);
          *((_BYTE *)v66 + 7) = 0;
        }
        v71 = qword_905FD0;
        if ( !qword_905FD0 )
        {
          v213 = operator new(0x6E8u);
          qword_905FD0 = sub_2723A0(v213);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
          v71 = qword_905FD0;
        }
        v53 = sub_27B350(v71, &unk_732CD4, v67);
        v54 = 48.0;
        v55 = 0.0;
        v56 = (cocos2d::CCPoint *)&v214;
        goto LABEL_232;
      case 3u:
        v171 = 0;
        v172 = 4;
        v173 = 15;
        strcpy((char *)&v171, "0009");
        v72 = qword_905FE0;
        if ( !qword_905FE0 )
        {
          v215 = operator new(0x3E8u);
          qword_905FE0 = sub_2D2B40(v215);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
          v72 = qword_905FE0;
        }
        isSpecialChestUnlocked = GameStatsManager_isSpecialChestUnlocked(v72, &v171);
        v202 = 0;
        v203 = 4;
        v204 = 15;
        strcpy((char *)&v202, "0009");
        v178 = &v202;
        v73 = qword_905FE0;
        if ( !qword_905FE0 )
        {
          v216 = operator new(0x3E8u);
          qword_905FE0 = sub_2D2B40(v216);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
          v73 = qword_905FE0;
        }
        v37 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(v73 + 368), &v202);
        sub_3C310(&v202);
        v74 = v246;
        if ( v246 < 0x11 )
        {
          v77 = v246 >> 1;
          if ( v246 <= 0x7FFFFFFFFFFFFFFFLL - (v246 >> 1) )
          {
            v78 = 31;
            if ( v246 + v77 > 0x1F )
              v78 = v246 + v77;
          }
          else
          {
            v78 = 0x7FFFFFFFFFFFFFFFLL;
          }
          v79 = (_WORD *)sub_3C460(v78 + 1);
          v245 = 17;
          v246 = v78;
          *(_OWORD *)v79 = *(_OWORD *)"gj_fbIcon_001.png";
          v79[8] = (unsigned __int8)aGjFbicon001Png[16];
          if ( v74 > 0xF )
          {
            v80 = v244[0];
            if ( v74 + 1 >= 0x1000 )
            {
              v80 = (void *)*((_QWORD *)v244[0] - 1);
              if ( (unsigned __int64)((char *)v244[0] - (char *)v80 - 8) > 0x1F )
                goto LABEL_261;
            }
            j_j_free(v80);
          }
          v244[0] = v79;
        }
        else
        {
          v75 = v244[0];
          v245 = 17;
          memmove(v244[0], "gj_fbIcon_001.png", 0x11u);
          v75[17] = 0;
        }
        v81 = v243;
        if ( v243 < 8 )
        {
          v83 = v243 >> 1;
          if ( v243 <= 0x7FFFFFFFFFFFFFFFLL - (v243 >> 1) )
          {
            v84 = 15;
            if ( v243 + v83 > 0xF )
              v84 = v243 + v83;
          }
          else
          {
            v84 = 0x7FFFFFFFFFFFFFFFLL;
          }
          v85 = (char *)sub_3C460(v84 + 1);
          v242 = 8;
          v243 = v84;
          strcpy(v85, "Facebook");
          if ( v81 > 0xF )
          {
            v86 = v241[0];
            if ( v81 + 1 >= 0x1000 )
            {
              v86 = (void *)*((_QWORD *)v241[0] - 1);
              if ( (unsigned __int64)((char *)v241[0] - (char *)v86 - 8) > 0x1F )
                goto LABEL_261;
            }
            j_j_free(v86);
          }
          v241[0] = v85;
        }
        else
        {
          v82 = (char *)v241;
          if ( v243 > 0xF )
            v82 = (char *)v241[0];
          v242 = 8;
          strcpy(v82, "Facebook");
        }
        v87 = qword_905FD0;
        if ( !qword_905FD0 )
        {
          v217 = operator new(0x6E8u);
          qword_905FD0 = sub_2723A0(v217);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
          v87 = qword_905FD0;
        }
        v53 = sub_27B350(v87, &unk_732CC8, v76);
        v54 = 48.0;
        v55 = 90.0;
        v56 = (cocos2d::CCPoint *)&v218;
        goto LABEL_232;
      case 4u:
        v171 = 0;
        v172 = 4;
        v173 = 15;
        strcpy((char *)&v171, "0010");
        v88 = qword_905FE0;
        if ( !qword_905FE0 )
        {
          v219 = operator new(0x3E8u);
          qword_905FE0 = sub_2D2B40(v219);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
          v88 = qword_905FE0;
        }
        isSpecialChestUnlocked = GameStatsManager_isSpecialChestUnlocked(v88, &v171);
        v184 = 0;
        v185 = 4;
        v186 = 15;
        strcpy((char *)&v184, "0010");
        v178 = &v184;
        v89 = qword_905FE0;
        if ( !qword_905FE0 )
        {
          v220 = operator new(0x3E8u);
          qword_905FE0 = sub_2D2B40(v220);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
          v89 = qword_905FE0;
        }
        v37 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(v89 + 368), &v184);
        sub_3C310(&v184);
        v90 = v246;
        if ( v246 < 0x15 )
        {
          v92 = v246 >> 1;
          if ( v246 <= 0x7FFFFFFFFFFFFFFFLL - (v246 >> 1) )
          {
            v35 = 31;
            if ( v92 + v246 > 0x1F )
              v35 = v92 + v246;
          }
          v93 = (_WORD *)sub_3C460(v35 + 1);
          v245 = 21;
          v246 = v35;
          qmemcpy(v93, "gj_twitchIcon_001.pn", 20);
          v93[10] = (unsigned __int8)aGjTwitchicon00[20];
          if ( v90 > 0xF )
          {
            v94 = v244[0];
            if ( v90 + 1 >= 0x1000 )
            {
              v94 = (void *)*((_QWORD *)v244[0] - 1);
              if ( (unsigned __int64)((char *)v244[0] - (char *)v94 - 8) > 0x1F )
                goto LABEL_261;
            }
            j_j_free(v94);
          }
          v244[0] = v93;
        }
        else
        {
          v91 = v244[0];
          v245 = 21;
          memmove(v244[0], "gj_twitchIcon_001.png", 0x15u);
          v91[21] = 0;
        }
        v95 = v243;
        if ( v243 < 6 )
        {
          v98 = v243 >> 1;
          if ( v243 <= 0x7FFFFFFFFFFFFFFFLL - (v243 >> 1) )
          {
            v99 = 15;
            if ( v98 + v243 > 0xF )
              v99 = v98 + v243;
          }
          else
          {
            v99 = 0x7FFFFFFFFFFFFFFFLL;
          }
          v100 = (char *)sub_3C460(v99 + 1);
          v242 = 6;
          v243 = v99;
          strcpy(v100, "Twitch");
          if ( v95 > 0xF )
          {
            v101 = v241[0];
            if ( v95 + 1 >= 0x1000 )
            {
              v101 = (void *)*((_QWORD *)v241[0] - 1);
              if ( (unsigned __int64)((char *)v241[0] - (char *)v101 - 8) > 0x1F )
                goto LABEL_261;
            }
            j_j_free(v101);
          }
          v241[0] = v100;
        }
        else
        {
          v96 = v241;
          if ( v243 > 0xF )
            v96 = (void **)v241[0];
          v242 = 6;
          memmove(v96, "Twitch", 6u);
          *((_BYTE *)v96 + 6) = 0;
        }
        v102 = qword_905FD0;
        if ( !qword_905FD0 )
        {
          v221 = operator new(0x6E8u);
          qword_905FD0 = sub_2723A0(v221);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
          v102 = qword_905FD0;
        }
        v53 = sub_27B350(v102, &unk_732CDC, v97);
        v55 = -135.0;
        v56 = (cocos2d::CCPoint *)&v222;
        goto LABEL_231;
      case 5u:
        v171 = 0;
        v172 = 4;
        v173 = 15;
        strcpy((char *)&v171, "0011");
        v103 = qword_905FE0;
        if ( !qword_905FE0 )
        {
          v232 = operator new(0x3E8u);
          qword_905FE0 = sub_2D2B40(v232);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
          v103 = qword_905FE0;
        }
        isSpecialChestUnlocked = GameStatsManager_isSpecialChestUnlocked(v103, &v171);
        v187 = 0;
        v188 = 4;
        v189 = 15;
        strcpy((char *)&v187, "0011");
        v178 = &v187;
        v104 = qword_905FE0;
        if ( !qword_905FE0 )
        {
          v230 = operator new(0x3E8u);
          qword_905FE0 = sub_2D2B40(v230);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
          v104 = qword_905FE0;
        }
        v37 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(v104 + 368), &v187);
        sub_3C310(&v187);
        v105 = v246;
        if ( v246 < 0x16 )
        {
          v107 = v246 >> 1;
          if ( v246 <= 0x7FFFFFFFFFFFFFFFLL - (v246 >> 1) )
          {
            v35 = 31;
            if ( v246 + v107 > 0x1F )
              v35 = v246 + v107;
          }
          v108 = (char *)sub_3C460(v35 + 1);
          v245 = 22;
          v246 = v35;
          strcpy(v108, "gj_discordIcon_001.png");
          if ( v105 > 0xF )
          {
            v109 = v244[0];
            if ( v105 + 1 >= 0x1000 )
            {
              v109 = (void *)*((_QWORD *)v244[0] - 1);
              if ( (unsigned __int64)((char *)v244[0] - (char *)v109 - 8) > 0x1F )
                goto LABEL_261;
            }
            j_j_free(v109);
          }
          v35 = 0x7FFFFFFFFFFFFFFFLL;
          v244[0] = v108;
        }
        else
        {
          v106 = v244[0];
          v245 = 22;
          memmove(v244[0], "gj_discordIcon_001.png", 0x16u);
          v106[22] = 0;
        }
        v110 = v243;
        if ( v243 < 7 )
        {
          v113 = v243 >> 1;
          if ( v243 <= 0x7FFFFFFFFFFFFFFFLL - (v243 >> 1) )
          {
            v35 = 15;
            if ( v113 + v243 > 0xF )
              v35 = v113 + v243;
          }
          v114 = (_WORD *)sub_3C460(v35 + 1);
          v242 = 7;
          v243 = v35;
          qmemcpy(v114, "Discor", 6);
          v114[3] = (unsigned __int8)aDiscord[6];
          if ( v110 > 0xF )
          {
            v115 = v241[0];
            if ( v110 + 1 >= 0x1000 )
            {
              v115 = (void *)*((_QWORD *)v241[0] - 1);
              if ( (unsigned __int64)((char *)v241[0] - (char *)v115 - 8) > 0x1F )
                goto LABEL_261;
            }
            j_j_free(v115);
          }
          v241[0] = v114;
        }
        else
        {
          v111 = v241;
          if ( v243 > 0xF )
            v111 = (void **)v241[0];
          v242 = 7;
          memmove(v111, "Discord", 7u);
          *((_BYTE *)v111 + 7) = 0;
        }
        v116 = qword_905FD0;
        if ( !qword_905FD0 )
        {
          v234 = operator new(0x6E8u);
          qword_905FD0 = sub_2723A0(v234);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
          v116 = qword_905FD0;
        }
        v53 = sub_27B350(v116, &unk_732CD8, v112);
        v55 = -45.0;
        v56 = (cocos2d::CCPoint *)&v233;
        goto LABEL_231;
      case 6u:
        v171 = 0;
        v172 = 4;
        v173 = 15;
        strcpy((char *)&v171, "0024");
        v117 = qword_905FE0;
        if ( !qword_905FE0 )
        {
          v235 = operator new(0x3E8u);
          qword_905FE0 = sub_2D2B40(v235);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
          v117 = qword_905FE0;
        }
        isSpecialChestUnlocked = GameStatsManager_isSpecialChestUnlocked(v117, &v171);
        v190 = 0;
        v191 = 4;
        v192 = 15;
        strcpy((char *)&v190, "0024");
        v178 = &v190;
        v118 = qword_905FE0;
        if ( !qword_905FE0 )
        {
          v236 = operator new(0x3E8u);
          qword_905FE0 = sub_2D2B40(v236);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
          v118 = qword_905FE0;
        }
        v37 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(v118 + 368), &v190);
        sub_3C310(&v190);
        v119 = v246;
        if ( v246 < 0x11 )
        {
          v121 = v246 >> 1;
          if ( v246 <= 0x7FFFFFFFFFFFFFFFLL - (v246 >> 1) )
          {
            v122 = 31;
            if ( v246 + v121 > 0x1F )
              v122 = v246 + v121;
          }
          else
          {
            v122 = 0x7FFFFFFFFFFFFFFFLL;
          }
          v123 = (_WORD *)sub_3C460(v122 + 1);
          v245 = 17;
          v246 = v122;
          *(_OWORD *)v123 = *(_OWORD *)"gj_rdIcon_001.png";
          v123[8] = (unsigned __int8)aGjRdicon001Png[16];
          if ( v119 > 0xF )
          {
            v124 = v244[0];
            if ( v119 + 1 >= 0x1000 )
            {
              v124 = (void *)*((_QWORD *)v244[0] - 1);
              if ( (unsigned __int64)((char *)v244[0] - (char *)v124 - 8) > 0x1F )
                goto LABEL_261;
            }
            j_j_free(v124);
          }
          v244[0] = v123;
        }
        else
        {
          v120 = v244[0];
          v245 = 17;
          memmove(v244[0], "gj_rdIcon_001.png", 0x11u);
          v120[17] = 0;
        }
        v125 = v243;
        if ( v243 < 6 )
        {
          v128 = v243 >> 1;
          if ( v243 <= 0x7FFFFFFFFFFFFFFFLL - (v243 >> 1) )
          {
            v129 = 15;
            if ( v128 + v243 > 0xF )
              v129 = v128 + v243;
          }
          else
          {
            v129 = 0x7FFFFFFFFFFFFFFFLL;
          }
          v130 = (char *)sub_3C460(v129 + 1);
          v242 = 6;
          v243 = v129;
          strcpy(v130, "Reddit");
          if ( v125 > 0xF )
          {
            v131 = v241[0];
            if ( v125 + 1 >= 0x1000 )
            {
              v131 = (void *)*((_QWORD *)v241[0] - 1);
              if ( (unsigned __int64)((char *)v241[0] - (char *)v131 - 8) > 0x1F )
                goto LABEL_261;
            }
            j_j_free(v131);
          }
          v241[0] = v130;
        }
        else
        {
          v126 = v241;
          if ( v243 > 0xF )
            v126 = (void **)v241[0];
          v242 = 6;
          memmove(v126, "Reddit", 6u);
          *((_BYTE *)v126 + 6) = 0;
        }
        v132 = qword_905FD0;
        if ( !qword_905FD0 )
        {
          v237 = operator new(0x6E8u);
          qword_905FD0 = sub_2723A0(v237);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
          v132 = qword_905FD0;
        }
        v53 = sub_27B350(v132, "32", v127);
        v55 = 45.0;
        v56 = (cocos2d::CCPoint *)&v238;
        goto LABEL_231;
      case 7u:
        v171 = 0;
        v172 = 4;
        v173 = 15;
        strcpy((char *)&v171, "0025");
        v133 = qword_905FE0;
        if ( !qword_905FE0 )
        {
          v239 = operator new(0x3E8u);
          qword_905FE0 = sub_2D2B40(v239);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
          v133 = qword_905FE0;
        }
        isSpecialChestUnlocked = GameStatsManager_isSpecialChestUnlocked(v133, &v171);
        v193 = 0;
        v194 = 4;
        v195 = 15;
        strcpy((char *)&v193, "0025");
        v178 = &v193;
        v134 = qword_905FE0;
        if ( !qword_905FE0 )
        {
          v223 = operator new(0x3E8u);
          qword_905FE0 = sub_2D2B40(v223);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
          v134 = qword_905FE0;
        }
        v37 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(v134 + 368), &v193);
        sub_3C310(&v193);
        v135 = v246;
        if ( v246 < 0x11 )
        {
          v137 = v246 >> 1;
          if ( v246 <= 0x7FFFFFFFFFFFFFFFLL - (v246 >> 1) )
          {
            v138 = 31;
            if ( v246 + v137 > 0x1F )
              v138 = v246 + v137;
          }
          else
          {
            v138 = 0x7FFFFFFFFFFFFFFFLL;
          }
          v139 = (_WORD *)sub_3C460(v138 + 1);
          v245 = 17;
          v246 = v138;
          *(_OWORD *)v139 = *(_OWORD *)"gj_ytIcon_001.png";
          v139[8] = (unsigned __int8)aGjYticon001Png[16];
          if ( v135 > 0xF )
          {
            v140 = v244[0];
            if ( v135 + 1 >= 0x1000 )
            {
              v140 = (void *)*((_QWORD *)v244[0] - 1);
              if ( (unsigned __int64)((char *)v244[0] - (char *)v140 - 8) > 0x1F )
LABEL_261:
                invoke_watson(0, 0, 0, 0, 0);
            }
            j_j_free(v140);
          }
          v244[0] = v139;
        }
        else
        {
          v136 = v244[0];
          v245 = 17;
          memmove(v244[0], "gj_ytIcon_001.png", 0x11u);
          v136[17] = 0;
        }
        v141 = v243;
        if ( v243 < 9 )
        {
          v144 = v243 >> 1;
          if ( v243 <= 0x7FFFFFFFFFFFFFFFLL - (v243 >> 1) )
          {
            v145 = 15;
            if ( v144 + v243 > 0xF )
              v145 = v144 + v243;
          }
          else
          {
            v145 = 0x7FFFFFFFFFFFFFFFLL;
          }
          v146 = (_WORD *)sub_3C460(v145 + 1);
          v242 = 9;
          v243 = v145;
          *(_QWORD *)v146 = *(_QWORD *)"Spotlight";
          v146[4] = (unsigned __int8)aSpotlight[8];
          if ( v141 > 0xF )
          {
            v147 = v241[0];
            if ( v141 + 1 >= 0x1000 )
            {
              v147 = (void *)*((_QWORD *)v241[0] - 1);
              if ( (unsigned __int64)((char *)v241[0] - (char *)v147 - 8) > 0x1F )
                goto LABEL_261;
            }
            j_j_free(v147);
          }
          v241[0] = v146;
        }
        else
        {
          v142 = v241;
          if ( v243 > 0xF )
            v142 = (void **)v241[0];
          v242 = 9;
          memmove(v142, "Spotlight", 9u);
          *((_BYTE *)v142 + 9) = 0;
        }
        v148 = qword_905FD0;
        if ( !qword_905FD0 )
        {
          v224 = operator new(0x6E8u);
          qword_905FD0 = sub_2723A0(v224);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
          v148 = qword_905FD0;
        }
        v53 = sub_27B350(v148, &word_750174, v143);
        v55 = 135.0;
        v56 = (cocos2d::CCPoint *)&v225;
LABEL_231:
        v54 = -48.0;
LABEL_232:
        v36 = v53;
        cocos2d::CCPoint::CCPoint(v56, v55, v54);
        cocos2d::CCPoint::operator=(v176, v149);
LABEL_233:
        v150 = GJChestSprite_create(*(_DWORD *)(v37 + 64));
        sub_562400(v150, 2, 0);
        cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 688), v150);
        (*(void (__fastcall **)(cocos2d::CCSprite *))(*(_QWORD *)v150 + 160LL))(v150);
        v226 = operator new(0x208u);
        v151 = (_WORD *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra((__int64)v226);
        if ( !v151 )
          goto LABEL_237;
        if ( (unsigned __int8)sub_47940((_DWORD)v151, (_DWORD)v150, 0, a1, (__int64)sub_20A660) )
        {
          cocos2d::CCObject::autorelease((cocos2d::CCObject *)v151);
        }
        else
        {
          (*(void (__fastcall **)(_WORD *, __int64))(*(_QWORD *)v151 + 8LL))(v151, 1);
LABEL_237:
          v151 = 0;
        }
        v181 = 0;
        v182 = 14;
        v183 = 15;
        strcpy(Src, "chestClick.ogg");
        if ( v151 + 224 != (_WORD *)Src )
          sub_3F5A0(v151 + 224, Src, 0xEu);
        sub_3C310(Src);
        v152 = *(_QWORD *)v151;
        cocos2d::CCSize::CCSize((cocos2d::CCSize *)v227, 50.0, 40.0);
        (*(void (__fastcall **)(_WORD *, __int64))(v152 + 312))(v151, v153);
        v154 = *(_QWORD *)v150;
        v155 = *(float *)((*(__int64 (__fastcall **)(_WORD *))(*(_QWORD *)v151 + 320LL))(v151) + 4) * 0.5;
        v156 = (float *)(*(__int64 (__fastcall **)(_WORD *))(*(_QWORD *)v151 + 320LL))(v151);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v228, *v156 * 0.5, v155);
        (*(void (__fastcall **)(cocos2d::CCSprite *, __int64))(v154 + 184))(v150, v157);
        (*(void (__fastcall **)(_QWORD, _WORD *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v151);
        v151[204] = 256;
        (*(void (__fastcall **)(_WORD *, _QWORD))(*(_QWORD *)v151 + 64LL))(v151, v34);
        (*(void (__fastcall **)(cocos2d::CCSprite *, _QWORD))(*(_QWORD *)v150 + 64LL))(v150, v34);
        cocos2d::CCPoint::operator+(v205, v179, v176);
        v158 = *(_QWORD *)v151;
        cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(a1 + 552), v229, v179);
        (*(void (__fastcall **)(_WORD *, __int64))(v158 + 184))(v151, v159);
        v160 = v241;
        if ( v243 > 0xF )
          v160 = (void **)v241[0];
        v161 = cocos2d::CCLabelBMFont::create((const char *)v160, "goldFont.fnt");
        (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v161 + 160LL))(v161);
        (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))(
          *(_QWORD *)(a1 + 584),
          v161);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v240, 0.0, 42.0);
        cocos2d::CCPoint::operator+(v179, v206, v162);
        (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, _BYTE *))(*(_QWORD *)v161 + 184LL))(v161, v206);
        if ( isSpecialChestUnlocked )
        {
          FollowRewardPage_switchToOpenedState(v163, (__int64)v151);
        }
        else if ( !v36 )
        {
          v164 = v244;
          if ( v246 > 0xF )
            v164 = (void **)v244[0];
          v165 = cocos2d::CCSprite::createWithSpriteFrameName((const char *)v164);
          (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v165 + 160LL))(v165);
          (*(void (__fastcall **)(struct cocos2d::CCSprite *, _QWORD))(*(_QWORD *)v165 + 64LL))(v165, v34 + 10);
          (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
            *(_QWORD *)(a1 + 584),
            v165,
            11);
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v207, 0.0, 2.0);
          cocos2d::CCPoint::operator+(v179, &v177, v166);
          (*(void (__fastcall **)(struct cocos2d::CCSprite *, void **))(*(_QWORD *)v165 + 184LL))(v165, &v177);
          *((_BYTE *)v150 + 608) = 1;
          (**((void (__fastcall ***)(__int64, void *))v150 + 40))((__int64)v150 + 320, &unk_6FE3EC);
        }
        if ( v243 > 0xF )
        {
          v167 = v241[0];
          if ( v243 + 1 >= 0x1000 )
          {
            v167 = (void *)*((_QWORD *)v241[0] - 1);
            if ( (unsigned __int64)((char *)v241[0] - (char *)v167 - 8) > 0x1F )
              invoke_watson(0, 0, 0, 0, 0);
          }
          j_j_free(v167);
        }
        v242 = 0;
        v243 = 15;
        LOBYTE(v241[0]) = 0;
        if ( v246 > 0xF )
        {
          v168 = v244[0];
          if ( v246 + 1 >= 0x1000 )
          {
            v168 = (void *)*((_QWORD *)v244[0] - 1);
            if ( (unsigned __int64)((char *)v244[0] - (char *)v168 - 8) > 0x1F )
              invoke_watson(0, 0, 0, 0, 0);
          }
          j_j_free(v168);
        }
        if ( (int)++v34 <= 7 )
          continue;
        v169 = qword_905FD0;
        if ( !qword_905FD0 )
        {
          v207[0] = operator new(0x6E8u);
          qword_905FD0 = sub_2723A0(v207[0]);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
          v169 = qword_905FD0;
        }
        *(_QWORD *)(v169 + 976) = a1 + 672;
        result = 1;
        break;
      default:
        goto LABEL_233;
    }
    return result;
  }
}
