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
