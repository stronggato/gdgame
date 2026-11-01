#include <Geode/binding/InvitesPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/7] Address: 0xd1ed0
// Method: InvitesPopup::~InvitesPopup
// Hidden C++ exception states: #wind=1
char *__fastcall InvitesPopup__dtor_InvitesPopup(char *Block, __int64 a2)
{
  char v2; // si
  char *v4; // rdi
  __int64 v5; // rax
  void *v6; // rax
  __int64 v7; // rax
  cocos2d::CCObject *v8; // rcx
  cocos2d::CCObject *v9; // rcx
  cocos2d::CCNotificationCenter *v10; // rax

  v2 = a2; /*0xd1edf*/
  *(_QWORD *)Block = &InvitesPopup::`vftable'; /*0xd1eeb*/
  *((_QWORD *)Block + 40) = &InvitesPopup::`vftable'; /*0xd1ef5*/
  *((_QWORD *)Block + 41) = &InvitesPopup::`vftable'; /*0xd1f03*/
  *((_QWORD *)Block + 42) = &InvitesPopup::`vftable'; /*0xd1f11*/
  *((_QWORD *)Block + 43) = &InvitesPopup::`vftable'; /*0xd1f1f*/
  *((_QWORD *)Block + 44) = &InvitesPopup::`vftable'; /*0xd1f2d*/
  *((_QWORD *)Block + 51) = &InvitesPopup::`vftable'; /*0xd1f3b*/
  *((_QWORD *)Block + 54) = &InvitesPopup::`vftable'; /*0xd1f49*/
  *((_QWORD *)Block + 68) = &InvitesPopup::`vftable'; /*0xd1f57*/
  v4 = Block + 776; /*0xd1f5e*/
  *((_QWORD *)Block + 97) = &InvitesPopup::`vftable'; /*0xd1f6c*/
  *((_QWORD *)Block + 98) = &InvitesPopup::`vftable'; /*0xd1f76*/
  v5 = *(_QWORD *)&qword_905FB0; /*0xd1f7d*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0xd1f87*/
  {
    v6 = operator new(0x690u); /*0xd1f8e*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v6); /*0xd1f9b*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xd1fac*/
    v5 = *(_QWORD *)&qword_905FB0; /*0xd1fae*/
  }
  if ( *(char **)(v5 + 1392) == v4 ) /*0xd1fbe*/
    *(_QWORD *)(v5 + 1392) = 0; /*0xd1fc0*/
  v7 = *((_QWORD *)Block + 104); /*0xd1fc7*/
  if ( v7 ) /*0xd1fd1*/
    *(_QWORD *)(v7 + 608) = 0; /*0xd1fd3*/
  v8 = (cocos2d::CCObject *)*((_QWORD *)Block + 99); /*0xd1fda*/
  if ( v8 ) /*0xd1fe4*/
    cocos2d::CCObject::release(v8); /*0xd1fe6*/
  v9 = (cocos2d::CCObject *)*((_QWORD *)Block + 100); /*0xd1fec*/
  if ( v9 ) /*0xd1ff6*/
    cocos2d::CCObject::release(v9); /*0xd1ff8*/
  v10 = (cocos2d::CCNotificationCenter *)cocos2d::CCNotificationCenter::sharedNotificationCenter(v9, a2); /*0xd1ffe*/
  cocos2d::CCNotificationCenter::postNotification(v10, "ThreadsChangedNotification", 0); /*0xd2011*/
  sub_3C310(Block + 840); /*0xd201e*/
  PagedListPopup__dtor_PagedListPopup(Block); /*0xd2026*/
  if ( (v2 & 1) != 0 ) /*0xd2030*/
    j_j_free(Block); /*0xd203a*/
  return Block; /*0xd2042*/
}

// [2/7] Address: 0xf5390
// Method: InvitesPopup::textChanged
// Hidden C++ exception states: #wind=1
__int64 __fastcall InvitesPopup_textChanged(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  char *v5; // rdi
  _QWORD *v6; // rcx
  unsigned __int8 *v7; // rsi
  char *v8; // rbx
  signed __int64 v9; // rdi
  void *v10; // rcx
  _QWORD v12[3]; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v13; // [rsp+50h] [rbp-48h]
  void *Block[2]; // [rsp+58h] [rbp-40h] BYREF
  __int128 v15; // [rsp+68h] [rbp-30h]

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a2 + 600) + 600LL) + 8LL))(*(_QWORD *)(a2 + 600) + 600LL); /*0xf53c2*/
  *(_OWORD *)Block = 0; /*0xf53c8*/
  v15 = 0; /*0xf53d0*/
  v4 = -1; /*0xf53d6*/
  do /*0xf53e3*/
    ++v4; /*0xf53e0*/
  while ( *(_BYTE *)(v3 + v4) ); /*0xf53e3*/
  sub_3C230(Block); /*0xf53f2*/
  sub_3E4F0(v12, Block); /*0xf5402*/
  v5 = (char *)v12; /*0xf5407*/
  if ( v13 > 0xF ) /*0xf5417*/
    v5 = (char *)v12[0]; /*0xf5417*/
  v6 = v12; /*0xf541b*/
  if ( v13 > 0xF ) /*0xf5420*/
    v6 = (_QWORD *)v12[0]; /*0xf5420*/
  v7 = (unsigned __int8 *)v6 + v12[2]; /*0xf5429*/
  v8 = (char *)v12; /*0xf542c*/
  if ( v13 > 0xF ) /*0xf5437*/
    v8 = (char *)v12[0]; /*0xf5437*/
  if ( v8 != (char *)v7 ) /*0xf543e*/
  {
    v9 = v5 - v8; /*0xf5440*/
    do /*0xf5455*/
    {
      v8[v9] = tolower((unsigned __int8)*v8); /*0xf544c*/
      ++v8; /*0xf544f*/
    }
    while ( v8 != (char *)v7 ); /*0xf5455*/
  }
  sub_58AD0(a1 + 296, v12); /*0xf5463*/
  sub_3C310(v12); /*0xf546d*/
  if ( *((_QWORD *)&v15 + 1) > 0xFu ) /*0xf547c*/
  {
    v10 = Block[0]; /*0xf5481*/
    if ( (unsigned __int64)(*((_QWORD *)&v15 + 1) + 1LL) >= 0x1000 ) /*0xf5490*/
    {
      v10 = (void *)*((_QWORD *)Block[0] - 1); /*0xf5496*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v10 - 8) > 0x1F ) /*0xf54a5*/
        invoke_watson(0, 0, 0, 0, 0); /*0xf54ba*/
    }
    j_j_free(v10); /*0xf54c1*/
  }
  return sub_F5A40(a1 - 544); /*0xf54d2*/
}

// [3/7] Address: 0xf5580
// Method: InvitesPopup::threadInvitesFinished
__int64 __fastcall InvitesPopup_threadInvitesFinished(__int64 a1, cocos2d::CCObject *a2)
{
  __int64 v4; // rcx
  cocos2d::CCObject *v5; // rcx

  v4 = *(_QWORD *)(a1 - 80); /*0xf5595*/
  if ( v4 ) /*0xf559c*/
    LoadingCircle_fadeAndRemove(v4); /*0xf559e*/
  v5 = *(cocos2d::CCObject **)(a1 + 16); /*0xf55a3*/
  if ( v5 ) /*0xf55aa*/
    cocos2d::CCObject::release(v5); /*0xf55ac*/
  *(_QWORD *)(a1 + 16) = a2; /*0xf55b5*/
  cocos2d::CCObject::retain(a2); /*0xf55b9*/
  return sub_F5A40(a1 - 776); /*0xf55c6*/
}

// [4/7] Address: 0xf55e0
// Method: InvitesPopup::threadInvitesFailed
__int64 __fastcall InvitesPopup_threadInvitesFailed(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx

  v1 = a1 - 776; /*0xf55e6*/
  v2 = *(_QWORD *)(a1 - 80); /*0xf55ed*/
  if ( v2 ) /*0xf55f4*/
    LoadingCircle_fadeAndRemove(v2); /*0xf55f6*/
  return sub_C1980(v1, "Something went wrong..."); /*0xf5605*/
}

// [5/7] Address: 0xf7640
// Method: InvitesPopup::FLAlert_Clicked
// Hidden C++ exception states: #wind=3
void __fastcall InvitesPopup_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  char v7; // bp
  void *v8; // r8
  __int64 v9; // rax
  void *v10; // [rsp+30h] [rbp-48h]
  void *v11; // [rsp+30h] [rbp-48h]
  void *Block[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v13; // [rsp+48h] [rbp-30h]
  unsigned __int64 v14; // [rsp+50h] [rbp-28h]

  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 6 ) /*0xf766e*/
  {
    if ( !a3 || *(int *)(a1 + 24) <= 0 ) /*0xf7680*/
      goto LABEL_17; /*0xf7680*/
    *(_OWORD *)Block = 0; /*0xf7689*/
    v5 = 0; /*0xf768e*/
    v13 = 0; /*0xf7690*/
    v14 = 15; /*0xf7695*/
    LOBYTE(Block[0]) = 0; /*0xf769e*/
    v6 = *(_QWORD *)&qword_905FB0; /*0xf76a2*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xf76ac*/
    {
      v10 = operator new(0x690u); /*0xf76b8*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v10); /*0xf76c6*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xf76d7*/
      v6 = *(_QWORD *)&qword_905FB0; /*0xf76d9*/
    }
    v7 = sub_24F190(v6, *(unsigned int *)(a1 + 24), 9, Block); /*0xf76f3*/
    if ( v14 > 0xF ) /*0xf76ff*/
    {
      v8 = Block[0]; /*0xf7704*/
      if ( v14 + 1 >= 0x1000 ) /*0xf7713*/
      {
        v8 = (void *)*((_QWORD *)Block[0] - 1); /*0xf7719*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F ) /*0xf7728*/
          invoke_watson(0, 0, 0, 0, 0); /*0xf7739*/
      }
      j_j_free(v8); /*0xf7743*/
    }
    if ( v7 ) /*0xf774b*/
    {
      if ( a1 != 784 ) /*0xf7757*/
        v5 = a1 - 8; /*0xf7759*/
      v9 = *(_QWORD *)&qword_905FB0; /*0xf775d*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0xf7767*/
      {
        v11 = operator new(0x690u); /*0xf7773*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v11); /*0xf7781*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xf7792*/
        v9 = *(_QWORD *)&qword_905FB0; /*0xf7794*/
      }
      *(_QWORD *)(v9 + 1392) = v5; /*0xf779b*/
    }
    else
    {
LABEL_17:
      *(_DWORD *)(a1 + 24) = 0; /*0xf77a6*/
    }
  }
}

// [6/7] Address: 0xf77d0
// Method: InvitesPopup::threadUpdateFinished
// Hidden C++ exception states: #wind=4
void __fastcall InvitesPopup_threadUpdateFinished(__int64 a1, int a2, int a3)
{
  char v5; // cl
  __int64 v6; // rsi
  cocos2d::CCArray *v7; // rcx
  unsigned int v8; // ebx
  struct cocos2d::CCObject *v9; // rax
  cocos2d::CCArray *v10; // rcx
  int v11; // ebp
  signed int i; // r14d
  int v13; // ebx
  __int64 v14; // rax
  __int64 *v15; // rdi
  __int64 *v16; // rsi
  char v17; // cl
  const char *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rax
  cocos2d::CCObject *v25; // rax
  signed int v26; // ebx
  cocos2d::CCArray *v27; // rax
  struct cocos2d::CCObject *v28; // rax
  __int64 v29; // rcx
  int v30; // eax
  __int128 v31; // [rsp+30h] [rbp-68h] BYREF
  __int64 v32; // [rsp+40h] [rbp-58h]
  __int64 v33; // [rsp+48h] [rbp-50h]
  __int128 v34; // [rsp+50h] [rbp-48h] BYREF
  __int64 v35; // [rsp+60h] [rbp-38h]
  __int64 v36; // [rsp+68h] [rbp-30h]
  void *v37; // [rsp+A0h] [rbp+8h]
  void *v38; // [rsp+A0h] [rbp+8h]

  if ( a2 == *(_DWORD *)(a1 + 32) ) /*0xf77e8*/
  {
    v5 = *(_BYTE *)(a1 + 36); /*0xf77ee*/
    if ( a3 == 9 - (v5 != 0) ) /*0xf77ff*/
    {
      *(_DWORD *)(a1 + 32) = 0; /*0xf7808*/
      *(_BYTE *)(a1 + 36) = 0; /*0xf780c*/
      if ( v5 ) /*0xf7812*/
      {
        v6 = a1 - 776; /*0xf7818*/
        v7 = *(cocos2d::CCArray **)(a1 - 776 + 792); /*0xf781f*/
        if ( v7 ) /*0xf7829*/
        {
          v8 = 0; /*0xf782f*/
          if ( (int)cocos2d::CCArray::count(v7) > 0 ) /*0xf783a*/
          {
            while ( 1 ) /*0xf7849*/
            {
              v9 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(v6 + 792), v8); /*0xf7849*/
              v10 = *(cocos2d::CCArray **)(v6 + 792); /*0xf784f*/
              if ( *((_DWORD *)v9 + 14) == a2 ) /*0xf7859*/
                break; /*0xf7859*/
              if ( (int)++v8 >= (int)cocos2d::CCArray::count(v10) ) /*0xf7865*/
                goto LABEL_10; /*0xf7865*/
            }
            cocos2d::CCArray::removeObjectAtIndex(v10, v8, 1); /*0xf786e*/
          }
LABEL_10:
          v11 = 0; /*0xf7874*/
          for ( i = 0; i < (int)cocos2d::CCArray::count(*(cocos2d::CCArray **)(v6 + 792)); ++i ) /*0xf7889*/
          {
            v13 = v11++; /*0xf7890*/
            if ( *((_BYTE *)cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(v6 + 792), i) + 329) ) /*0xf78a4*/
              v11 = v13; /*0xf78ab*/
          }
          v14 = *(_QWORD *)&qword_905FB0; /*0xf78c3*/
          if ( !*(_QWORD *)&qword_905FB0 ) /*0xf78cd*/
          {
            v37 = operator new(0x690u); /*0xf78d9*/
            *(_QWORD *)&qword_905FB0 = sub_214250(v37); /*0xf78ea*/
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xf78f7*/
            v14 = *(_QWORD *)&qword_905FB0; /*0xf78fa*/
          }
          *(_DWORD *)(v14 + 548) = v11; /*0xf7901*/
          sub_F5A40(a1 - 776); /*0xf790a*/
        }
        v15 = (__int64 *)(a1 + 24); /*0xf790f*/
        if ( *v15 ) /*0xf7913*/
        {
          v16 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(v7) + 272); /*0xf7923*/
          v17 = *(_BYTE *)(*v15 + 320); /*0xf793a*/
          v31 = 0; /*0xf7944*/
          v32 = 0; /*0xf7949*/
          v33 = 15; /*0xf794e*/
          LOBYTE(v31) = 0; /*0xf7957*/
          v18 = "Joined group chat"; /*0xf7963*/
          if ( v17 ) /*0xf796c*/
            v18 = "Request accepted"; /*0xf796c*/
          v34 = 0; /*0xf7970*/
          v35 = 0; /*0xf7975*/
          v36 = 0; /*0xf797a*/
          v19 = -1; /*0xf797f*/
          do /*0xf7989*/
            ++v19; /*0xf7986*/
          while ( v18[v19] ); /*0xf7989*/
          sub_3C230(&v34); /*0xf7995*/
          v20 = *v16; /*0xf799a*/
          v23 = sub_3A4CA0(&v34, v21, v22, 150, &v31); /*0xf79c2*/
          (*(void (__fastcall **)(__int64 *, __int64, __int64))(v20 + 456))(v16, v23, 1000); /*0xf79d3*/
          v24 = *v15; /*0xf79d9*/
          if ( *(_BYTE *)(*v15 + 320) ) /*0xf79dc*/
          {
            *(_BYTE *)(v24 + 321) = 0; /*0xf79e5*/
            *(_DWORD *)(*v15 + 324) = 0; /*0xf79ef*/
          }
          else
          {
            ++*(_DWORD *)(v24 + 200); /*0xf79f8*/
          }
          v25 = LevelBrowserLayer_create(*v15); /*0xf7a01*/
          (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v25 + 1064LL))(v25); /*0xf7a13*/
        }
      }
      else
      {
        v26 = 0; /*0xf7a1a*/
        v27 = *(cocos2d::CCArray **)(a1 + 16); /*0xf7a1d*/
        if ( v27 ) /*0xf7a24*/
        {
          while ( v26 < (int)cocos2d::CCArray::count(v27) ) /*0xf7a31*/
          {
            v28 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 16), v26); /*0xf7a39*/
            if ( *((_DWORD *)v28 + 14) == a2 ) /*0xf7a42*/
            {
              *((_BYTE *)v28 + 329) = 1; /*0xf7a51*/
              break; /*0xf7a51*/
            }
            ++v26; /*0xf7a44*/
            v27 = *(cocos2d::CCArray **)(a1 + 16); /*0xf7a46*/
            if ( !v27 ) /*0xf7a4d*/
              break; /*0xf7a4d*/
          }
        }
        v29 = *(_QWORD *)&qword_905FB0; /*0xf7a58*/
        if ( !*(_QWORD *)&qword_905FB0 ) /*0xf7a62*/
        {
          v38 = operator new(0x690u); /*0xf7a6e*/
          *(_QWORD *)&qword_905FB0 = sub_214250(v38); /*0xf7a7f*/
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xf7a90*/
          v29 = *(_QWORD *)&qword_905FB0; /*0xf7a92*/
        }
        v30 = *(_DWORD *)(v29 + 548); /*0xf7a99*/
        if ( v30 > 0 ) /*0xf7aa1*/
          *(_DWORD *)(v29 + 548) = v30 - 1; /*0xf7aa5*/
        sub_F5A40(a1 - 776); /*0xf7ab2*/
        v15 = (__int64 *)(a1 + 24); /*0xf7ab7*/
      }
      if ( *v15 ) /*0xf7abb*/
      {
        cocos2d::CCObject::release((cocos2d::CCObject *)*v15); /*0xf7ac3*/
        *v15 = 0; /*0xf7ac9*/
      }
    }
  }
}

// [7/7] Address: 0xf7ae0
// Method: InvitesPopup::threadUpdateFailed
// Hidden C++ exception states: #wind=3
void __fastcall InvitesPopup_threadUpdateFailed(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbx
  cocos2d::CCObject *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  _WORD v13[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v14; // [rsp+40h] [rbp-38h]
  __int64 v15; // [rsp+48h] [rbp-30h]
  __int128 v16; // [rsp+50h] [rbp-28h] BYREF
  __int64 v17; // [rsp+60h] [rbp-18h]
  __int64 v18; // [rsp+68h] [rbp-10h]
  void *v19; // [rsp+80h] [rbp+8h]
  void *v20; // [rsp+80h] [rbp+8h]

  v3 = a1; /*0xf7aef*/
  if ( a2 == *(_DWORD *)(a1 + 32) && a3 == 9 - (*(_BYTE *)(a1 + 36) != 0) ) /*0xf7b09*/
  {
    *(_DWORD *)(a1 + 32) = 0; /*0xf7b11*/
    *(_BYTE *)(a1 + 36) = 0; /*0xf7b14*/
    v4 = *(cocos2d::CCObject **)(a1 + 24); /*0xf7b18*/
    if ( v4 ) /*0xf7b1f*/
    {
      cocos2d::CCObject::release(v4); /*0xf7b21*/
      *(_QWORD *)(v3 + 24) = 0; /*0xf7b27*/
    }
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xf7b35*/
    {
      v19 = operator new(0x690u); /*0xf7b41*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v19); /*0xf7b52*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xf7b63*/
    }
    if ( (unsigned __int8)sub_24AF40() ) /*0xf7b6c*/
    {
      v6 = v3 - 776; /*0xf7b75*/
      if ( v3 == 776 ) /*0xf7b7f*/
        v3 = 0; /*0xf7b7f*/
      v7 = *(_QWORD *)&qword_905FB0; /*0xf7b83*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0xf7b8d*/
      {
        v20 = operator new(0x690u); /*0xf7b99*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v20); /*0xf7baa*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xf7bb7*/
        v7 = *(_QWORD *)&qword_905FB0; /*0xf7bba*/
      }
      *(_QWORD *)(v7 + 1392) = v3; /*0xf7bc1*/
      sub_C18E0(v6); /*0xf7bdc*/
    }
    else if ( !byte_9037D9 ) /*0xf7be8*/
    {
      v8 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(v5) + 272); /*0xf7bf4*/
      v16 = 0; /*0xf7c0b*/
      v17 = 0; /*0xf7c10*/
      v18 = 15; /*0xf7c15*/
      LOBYTE(v16) = 0; /*0xf7c1e*/
      v13[7] = 0; /*0xf7c23*/
      v14 = 13; /*0xf7c28*/
      v15 = 15; /*0xf7c31*/
      strcpy((char *)v13, "Action failed"); /*0xf7c42*/
      v9 = *v8; /*0xf7c62*/
      v12 = sub_3A4CA0(v13, v10, v11, 150, &v16); /*0xf7c8a*/
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v9 + 456))(v8, v12, 1000); /*0xf7c9b*/
    }
  }
}
