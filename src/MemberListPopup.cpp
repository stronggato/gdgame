#include <Geode/binding/MemberListPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/19] Address: 0xd1a70
// Method: MemberListPopup::~MemberListPopup
// Hidden C++ exception states: #wind=1
char *__fastcall MemberListPopup__dtor_MemberListPopup(char *Block, char a2)
{
  char *v4; // rdi
  __int64 v5; // rax
  void *v6; // rax
  cocos2d::CCObject *v7; // rcx
  cocos2d::CCObject *v8; // rcx

  *(_QWORD *)Block = &MemberListPopup::`vftable'; /*0xd1a8b*/
  *((_QWORD *)Block + 40) = &MemberListPopup::`vftable'; /*0xd1a95*/
  *((_QWORD *)Block + 41) = &MemberListPopup::`vftable'; /*0xd1aa3*/
  *((_QWORD *)Block + 42) = &MemberListPopup::`vftable'; /*0xd1ab1*/
  *((_QWORD *)Block + 43) = &MemberListPopup::`vftable'; /*0xd1abf*/
  *((_QWORD *)Block + 44) = &MemberListPopup::`vftable'; /*0xd1acd*/
  *((_QWORD *)Block + 51) = &MemberListPopup::`vftable'; /*0xd1adb*/
  *((_QWORD *)Block + 54) = &MemberListPopup::`vftable'; /*0xd1ae9*/
  *((_QWORD *)Block + 68) = &MemberListPopup::`vftable'; /*0xd1af7*/
  v4 = Block + 776; /*0xd1afe*/
  *((_QWORD *)Block + 97) = &MemberListPopup::`vftable'; /*0xd1b0c*/
  *((_QWORD *)Block + 98) = &MemberListPopup::`vftable'; /*0xd1b16*/
  *((_QWORD *)Block + 99) = &MemberListPopup::`vftable'; /*0xd1b24*/
  v5 = *(_QWORD *)&qword_905FB0; /*0xd1b2b*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0xd1b35*/
  {
    v6 = operator new(0x690u); /*0xd1b3c*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v6); /*0xd1b49*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xd1b5a*/
    v5 = *(_QWORD *)&qword_905FB0; /*0xd1b5c*/
  }
  if ( *(char **)(v5 + 1392) == v4 ) /*0xd1b6a*/
    *(_QWORD *)(v5 + 1392) = 0; /*0xd1b6c*/
  v7 = (cocos2d::CCObject *)*((_QWORD *)Block + 100); /*0xd1b77*/
  if ( v7 ) /*0xd1b81*/
    cocos2d::CCObject::release(v7); /*0xd1b83*/
  v8 = (cocos2d::CCObject *)*((_QWORD *)Block + 107); /*0xd1b89*/
  if ( v8 ) /*0xd1b93*/
    cocos2d::CCObject::release(v8); /*0xd1b95*/
  PagedListPopup__dtor_PagedListPopup(Block); /*0xd1b9e*/
  if ( (a2 & 1) != 0 ) /*0xd1ba8*/
    j_j_free(Block); /*0xd1bb2*/
  return Block; /*0xd1bba*/
}

// [2/19] Address: 0xe9ff0
// Method: MemberListPopup::threadMembersFailed
// Hidden C++ exception states: #wind=2
int __fastcall MemberListPopup_threadMembersFailed(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  void *v12; // [rsp+30h] [rbp+8h]

  v4 = a1; /*0xea004*/
  v5 = *(_QWORD *)(a1 + 24); /*0xea007*/
  if ( (_DWORD)a2 == *(_DWORD *)(v5 + 56) ) /*0xea00e*/
  {
    *(_BYTE *)(a1 + 104) = 0; /*0xea014*/
    v6 = a1 - 776; /*0xea018*/
    v7 = *(_QWORD *)(a1 - 776 + 696); /*0xea01f*/
    if ( v7 ) /*0xea029*/
      LoadingCircle_fadeAndRemove(v7, a2, a3, a4); /*0xea02b*/
    LODWORD(v5) = GJBaseGameLayer_spawnParticleTrigger(v6); /*0xea033*/
    v8 = (__int64 *)(v4 + 32); /*0xea038*/
    if ( *(_QWORD *)(v4 + 32) ) /*0xea03c*/
    {
      if ( !v6 ) /*0xea047*/
        v4 = 0; /*0xea047*/
      v9 = *(_QWORD *)&qword_905FB0; /*0xea04b*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0xea055*/
      {
        v12 = operator new(0x690u); /*0xea061*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v12); /*0xea06f*/
        LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xea080*/
        v9 = *(_QWORD *)&qword_905FB0; /*0xea082*/
      }
      if ( *(_QWORD *)(v9 + 1392) == v4 ) /*0xea090*/
      {
        v5 = *v8; /*0xea092*/
        v10 = *v8 + 672; /*0xea095*/
        if ( !*v8 ) /*0xea092*/
          v10 = 0; /*0xea09f*/
        *(_QWORD *)(v9 + 1392) = v10; /*0xea0a3*/
      }
    }
  }
  return v5; /*0xea0aa*/
}

// [3/19] Address: 0xea0c0
// Method: MemberListPopup::threadMessagesFinished
int __fastcall MemberListPopup_threadMessagesFinished(__int64 a1, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax

  v4 = *(_QWORD *)(a1 + 32); /*0xea0d4*/
  if ( v4 ) /*0xea0db*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v4 + 672) + 16LL))(v4 + 672); /*0xea0e7*/
  v5 = *(_QWORD *)(a1 + 24); /*0xea0ea*/
  if ( a2 == *(_DWORD *)(v5 + 56) && !*(_BYTE *)(a1 + 104) ) /*0xea0f3*/
    LODWORD(v5) = GJBaseGameLayer_spawnParticleTrigger(a1 - 776); /*0xea100*/
  return v5; /*0xea105*/
}

// [4/19] Address: 0xea120
// Method: MemberListPopup::threadMessagesFailed
__int64 __fastcall MemberListPopup_threadMessagesFailed(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 32); /*0xea120*/
  if ( v1 ) /*0xea127*/
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 672) + 24LL))(v1 + 672); /*0xea133*/
  return result; /*0xea137*/
}

// [5/19] Address: 0xea140
// Method: MemberListPopup::threadSearchFinished
__int64 __fastcall MemberListPopup_threadSearchFinished(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 32); /*0xea140*/
  if ( v1 ) /*0xea147*/
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 672) + 32LL))(v1 + 672); /*0xea153*/
  return result; /*0xea157*/
}

// [6/19] Address: 0xea160
// Method: MemberListPopup::threadSearchFailed
__int64 __fastcall MemberListPopup_threadSearchFailed(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 32); /*0xea160*/
  if ( v1 ) /*0xea167*/
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 672) + 40LL))(v1 + 672); /*0xea173*/
  return result; /*0xea177*/
}

// [7/19] Address: 0xea180
// Method: MemberListPopup::threadSendFinished
// Hidden C++ exception states: #wind=2
void __fastcall MemberListPopup_threadSendFinished(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // rax
  void *v5; // [rsp+30h] [rbp+8h]

  v1 = a1; /*0xea194*/
  v2 = *(_QWORD *)(a1 + 32); /*0xea197*/
  if ( v2 ) /*0xea19e*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 672) + 48LL))(v2 + 672); /*0xea1aa*/
  if ( *(_BYTE *)(v1 - 776 + 864) /*0xea1cf*/
    || *(int *)(v1 + 92) > 0
    || *(int *)(v1 + 96) > 0
    || *(int *)(v1 + 100) > 0
    || *(_BYTE *)(v1 + 72) )
  {
    v3 = v1; /*0xea1d5*/
    if ( v1 == 776 ) /*0xea1dd*/
      v3 = 0; /*0xea1dd*/
    v4 = *(_QWORD *)&qword_905FB0; /*0xea1e1*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xea1eb*/
    {
      v5 = operator new(0x690u); /*0xea1f7*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v5); /*0xea205*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xea216*/
      v4 = *(_QWORD *)&qword_905FB0; /*0xea218*/
    }
    if ( *(_QWORD *)(v4 + 1392) != v3 ) /*0xea226*/
    {
      if ( v1 == 776 ) /*0xea22b*/
        v1 = 0; /*0xea22b*/
      *(_QWORD *)(v4 + 1392) = v1; /*0xea22f*/
    }
  }
}

// [8/19] Address: 0xea250
// Method: MemberListPopup::threadSendFailed
__int64 __fastcall MemberListPopup_threadSendFailed(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 32); /*0xea250*/
  if ( v1 ) /*0xea257*/
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 672) + 56LL))(v1 + 672); /*0xea263*/
  return result; /*0xea267*/
}

// [9/19] Address: 0xeb4c0
// Method: MemberListPopup::FLAlert_Clicked
// Hidden C++ exception states: #wind=7
void __fastcall MemberListPopup_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  cocos2d::CCString *v6; // rax
  const char *CString; // rax
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rcx
  char v11; // r14
  void *v12; // rcx
  __int64 v13; // rax
  cocos2d::CCString *v14; // rax
  const char *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rcx
  char v18; // si
  void *v19; // rcx
  cocos2d::CCString *v20; // rax
  const char *v21; // rax
  __int64 v22; // r8
  __int64 v23; // rcx
  char v24; // si
  void *v25; // r8
  void *v26; // [rsp+30h] [rbp-30h]
  void *v27; // [rsp+30h] [rbp-30h]
  void *v28; // [rsp+30h] [rbp-30h]
  void *v29; // [rsp+30h] [rbp-30h]
  void *Block[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v31; // [rsp+48h] [rbp-18h]
  unsigned __int64 v32; // [rsp+50h] [rbp-10h]

  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 4 ) /*0xeb4f9*/
  {
    if ( !a3 || *(int *)(a1 + 76) <= 0 ) /*0xeb50d*/
      goto LABEL_17; /*0xeb50d*/
    v6 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8); /*0xeb51a*/
    CString = cocos2d::CCString::getCString(v6); /*0xeb523*/
    *(_OWORD *)Block = 0; /*0xeb52c*/
    v8 = 0; /*0xeb530*/
    v31 = 0; /*0xeb532*/
    v32 = 0; /*0xeb536*/
    v9 = -1; /*0xeb53a*/
    do /*0xeb544*/
      ++v9; /*0xeb541*/
    while ( CString[v9] ); /*0xeb544*/
    sub_3C230(Block); /*0xeb551*/
    v10 = *(_QWORD *)&qword_905FB0; /*0xeb557*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xeb561*/
    {
      v26 = operator new(0x690u); /*0xeb56d*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v26); /*0xeb57a*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xeb58b*/
      v10 = *(_QWORD *)&qword_905FB0; /*0xeb58d*/
    }
    v11 = sub_24F190(v10, *(unsigned int *)(*(_QWORD *)(a1 + 8) + 56LL), 6, Block); /*0xeb5aa*/
    if ( v32 <= 0xF ) /*0xeb5b6*/
    {
LABEL_12:
      if ( v11 ) /*0xeb5ec*/
      {
        if ( a1 != 792 ) /*0xeb5f8*/
          v8 = a1 - 16; /*0xeb5fa*/
        v13 = *(_QWORD *)&qword_905FB0; /*0xeb5fe*/
        if ( *(_QWORD *)&qword_905FB0 ) /*0xeb608*/
          goto LABEL_34; /*0xeb608*/
        goto LABEL_33; /*0xeb608*/
      }
LABEL_17:
      *(_DWORD *)(a1 + 76) = 0; /*0xeb62c*/
      return; /*0xeb62f*/
    }
    v12 = Block[0]; /*0xeb5bb*/
    if ( v32 + 1 < 0x1000 /*0xeb5de*/
      || (v12 = (void *)*((_QWORD *)Block[0] - 1), (unsigned __int64)((char *)Block[0] - (char *)v12 - 8) <= 0x1F) )
    {
      j_j_free(v12); /*0xeb5e4*/
      goto LABEL_12; /*0xeb5e4*/
    }
LABEL_46:
    invoke_watson(0, 0, 0, 0, 0); /*0xeb88f*/
  }
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 5 ) /*0xeb640*/
  {
    v8 = 0; /*0xeb646*/
    if ( a3 && *(int *)(a1 + 80) > 0 ) /*0xeb656*/
    {
      v14 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8); /*0xeb663*/
      v15 = cocos2d::CCString::getCString(v14); /*0xeb66c*/
      *(_OWORD *)Block = 0; /*0xeb675*/
      v31 = 0; /*0xeb679*/
      v32 = 0; /*0xeb67d*/
      v16 = -1; /*0xeb681*/
      do /*0xeb693*/
        ++v16; /*0xeb690*/
      while ( v15[v16] ); /*0xeb693*/
      sub_3C230(Block); /*0xeb6a0*/
      v17 = *(_QWORD *)&qword_905FB0; /*0xeb6a6*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0xeb6b0*/
      {
        v27 = operator new(0x690u); /*0xeb6bc*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v27); /*0xeb6c9*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xeb6da*/
        v17 = *(_QWORD *)&qword_905FB0; /*0xeb6dc*/
      }
      v18 = sub_24F190(v17, *(unsigned int *)(*(_QWORD *)(a1 + 8) + 56LL), 7, Block); /*0xeb6f9*/
      if ( v32 > 0xF ) /*0xeb704*/
      {
        v19 = Block[0]; /*0xeb709*/
        if ( v32 + 1 >= 0x1000 ) /*0xeb717*/
        {
          v19 = (void *)*((_QWORD *)Block[0] - 1); /*0xeb71d*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v19 - 8) > 0x1F ) /*0xeb72c*/
            goto LABEL_46; /*0xeb72c*/
        }
        j_j_free(v19); /*0xeb732*/
      }
      if ( v18 ) /*0xeb73a*/
      {
        if ( a1 != 792 ) /*0xeb746*/
          v8 = a1 - 16; /*0xeb748*/
        v13 = *(_QWORD *)&qword_905FB0; /*0xeb74c*/
        if ( *(_QWORD *)&qword_905FB0 ) /*0xeb756*/
          goto LABEL_34; /*0xeb756*/
        goto LABEL_33; /*0xeb756*/
      }
    }
    *(_DWORD *)(a1 + 80) = 0; /*0xeb795*/
  }
  else if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 7 ) /*0xeb7a9*/
  {
    v8 = 0; /*0xeb7af*/
    if ( a3 && *(int *)(a1 + 84) > 0 ) /*0xeb7bf*/
    {
      v20 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8); /*0xeb7cc*/
      v21 = cocos2d::CCString::getCString(v20); /*0xeb7d5*/
      *(_OWORD *)Block = 0; /*0xeb7de*/
      v31 = 0; /*0xeb7e2*/
      v32 = 0; /*0xeb7e6*/
      v22 = -1; /*0xeb7ea*/
      do /*0xeb7f4*/
        ++v22; /*0xeb7f1*/
      while ( v21[v22] ); /*0xeb7f4*/
      sub_3C230(Block); /*0xeb801*/
      v23 = *(_QWORD *)&qword_905FB0; /*0xeb807*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0xeb811*/
      {
        v29 = operator new(0x690u); /*0xeb81d*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v29); /*0xeb82a*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xeb83b*/
        v23 = *(_QWORD *)&qword_905FB0; /*0xeb83d*/
      }
      v24 = sub_24F190(v23, *(unsigned int *)(*(_QWORD *)(a1 + 8) + 56LL), 11, Block); /*0xeb85a*/
      if ( v32 > 0xF ) /*0xeb865*/
      {
        v25 = Block[0]; /*0xeb86a*/
        if ( v32 + 1 >= 0x1000 ) /*0xeb878*/
        {
          v25 = (void *)*((_QWORD *)Block[0] - 1); /*0xeb87e*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v25 - 8) > 0x1F ) /*0xeb88d*/
            goto LABEL_46; /*0xeb88d*/
        }
        j_j_free(v25); /*0xeb8a8*/
      }
      if ( v24 ) /*0xeb8b0*/
      {
        if ( a1 != 792 ) /*0xeb8bc*/
          v8 = a1 - 16; /*0xeb8be*/
        v13 = *(_QWORD *)&qword_905FB0; /*0xeb8c2*/
        if ( *(_QWORD *)&qword_905FB0 ) /*0xeb8cc*/
          goto LABEL_34; /*0xeb8cc*/
LABEL_33:
        v28 = operator new(0x690u); /*0xeb758*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v28); /*0xeb76f*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xeb780*/
        v13 = *(_QWORD *)&qword_905FB0; /*0xeb782*/
LABEL_34:
        *(_QWORD *)(v13 + 1392) = v8; /*0xeb789*/
        return; /*0xeb790*/
      }
    }
    *(_DWORD *)(a1 + 84) = 0; /*0xeb8ee*/
  }
}

// [10/19] Address: 0xeb9d0
// Method: MemberListPopup::friendPicked
// Hidden C++ exception states: #wind=1
void __fastcall MemberListPopup_friendPicked(__int64 a1, struct cocos2d::CCObject *a2)
{
  cocos2d::CCArray *v4; // rcx
  unsigned int v5; // ebx
  struct cocos2d::CCObject *v6; // rax
  cocos2d::CCArray *v7; // rcx
  int v8; // ebx
  __int64 v9; // rcx
  __int64 *v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  __int128 v15; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+40h] [rbp-38h]
  __int64 v17; // [rsp+48h] [rbp-30h]
  __int128 v18; // [rsp+50h] [rbp-28h] BYREF
  __int64 v19; // [rsp+60h] [rbp-18h]
  __int64 v20; // [rsp+68h] [rbp-10h]

  if ( a2 ) /*0xeb9d3*/
  {
    v4 = *(cocos2d::CCArray **)(a1 + 72); /*0xeb9ee*/
    if ( v4 ) /*0xeb9f5*/
    {
      v5 = 0; /*0xeb9fb*/
      if ( (int)cocos2d::CCArray::count(v4) <= 0 ) /*0xeba05*/
      {
LABEL_6:
        v8 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 200LL); /*0xeba3e*/
        if ( (int)(v8 + cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 72))) < 10 ) /*0xeba57*/
        {
          cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 72), a2); /*0xebb5a*/
        }
        else
        {
          v10 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(v9) + 272); /*0xeba63*/
          v18 = 0; /*0xeba7a*/
          v19 = 0; /*0xeba7f*/
          v20 = 15; /*0xeba88*/
          LOBYTE(v18) = 0; /*0xeba91*/
          v15 = 0; /*0xeba96*/
          *(_QWORD *)&v15 = sub_3C460(32); /*0xebab7*/
          v16 = 20; /*0xebabc*/
          v17 = 31; /*0xebac5*/
          strcpy((char *)v15, "Member limit reached"); /*0xebad5*/
          v11 = *v10; /*0xebae5*/
          v14 = sub_3A4CA0(&v15, v12, v13, 150, &v18); /*0xebb0d*/
          (*(void (__fastcall **)(__int64 *, __int64, __int64))(v11 + 456))(v10, v14, 1000); /*0xebb1e*/
        }
      }
      else
      {
        while ( 1 ) /*0xeba16*/
        {
          v6 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 72), v5); /*0xeba16*/
          v7 = *(cocos2d::CCArray **)(a1 + 72); /*0xeba1c*/
          if ( *((_DWORD *)v6 + 98) == *((_DWORD *)a2 + 98) ) /*0xeba2c*/
            break; /*0xeba2c*/
          if ( (int)++v5 >= (int)cocos2d::CCArray::count(v7) ) /*0xeba3c*/
            goto LABEL_6; /*0xeba3c*/
        }
        cocos2d::CCArray::removeObjectAtIndex(v7, v5, 1); /*0xebb4c*/
      }
    }
  }
}

// [11/19] Address: 0xebb80
// Method: MemberListPopup::isRecipientSelected
char __fastcall MemberListPopup_isRecipientSelected(__int64 a1, int a2)
{
  cocos2d::CCArray *v4; // rcx
  unsigned int v5; // ebx

  v4 = *(cocos2d::CCArray **)(a1 + 72); /*0xebb94*/
  if ( !v4 ) /*0xebb9b*/
    return 0; /*0xebb9b*/
  v5 = 0; /*0xebb9d*/
  if ( (int)cocos2d::CCArray::count(v4) <= 0 ) /*0xebba7*/
    return 0; /*0xebbd4*/
  while ( *((_DWORD *)cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 72), v5) + 98) != a2 ) /*0xebbc2*/
  {
    if ( (int)++v5 >= (int)cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 72)) ) /*0xebbd2*/
      return 0; /*0xebbd2*/
  }
  return 1; /*0xebbd6*/
}

// [12/19] Address: 0xebc00
// Method: MemberListPopup::selectedRecipientCount
unsigned int __fastcall MemberListPopup_selectedRecipientCount(__int64 a1)
{
  cocos2d::CCArray *v1; // rcx

  v1 = *(cocos2d::CCArray **)(a1 + 72); /*0xebc00*/
  if ( v1 ) /*0xebc07*/
    return cocos2d::CCArray::count(v1); /*0xebc09*/
  else
    return 0; /*0xebc10*/
}

// [13/19] Address: 0xebc20
// Method: MemberListPopup::selectedRecipients
__int64 __fastcall MemberListPopup_selectedRecipients(__int64 a1)
{
  return *(_QWORD *)(a1 + 72); /*0xebc24*/
}

// [14/19] Address: 0xebc30
// Method: MemberListPopup::pickerRowState
// Hidden C++ exception states: #wind=2
__int64 __fastcall MemberListPopup_pickerRowState(__int64 a1, int a2)
{
  __int64 v4; // rcx
  cocos2d::CCArray *v5; // rdi
  signed int i; // ebx
  signed int v7; // eax
  __int64 v9; // rcx
  cocos2d::CCArray *v10; // rdi
  signed int j; // ebx
  signed int v12; // eax
  void *v13; // [rsp+30h] [rbp+8h]
  void *v14; // [rsp+30h] [rbp+8h]

  v4 = *(_QWORD *)&qword_905FB0; /*0xebc49*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0xebc53*/
  {
    v13 = operator new(0x690u); /*0xebc5f*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v13); /*0xebc6d*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xebc7e*/
    v4 = *(_QWORD *)&qword_905FB0; /*0xebc80*/
  }
  v5 = (cocos2d::CCArray *)sub_249D20(v4, *(unsigned int *)(*(_QWORD *)(a1 + 16) + 56LL)); /*0xebc93*/
  for ( i = 0; ; ++i )
  {
    v7 = v5 ? cocos2d::CCArray::count(v5) : 0;
    if ( i >= v7 ) /*0xebcac*/
      break; /*0xebcac*/
    if ( *((_DWORD *)cocos2d::CCArray::objectAtIndex(v5, i) + 98) == a2 ) /*0xebcbf*/
      return 1; /*0xebcca*/
  }
  v9 = *(_QWORD *)&qword_905FB0; /*0xebccf*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0xebcd9*/
  {
    v14 = operator new(0x690u); /*0xebce5*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v14); /*0xebcf3*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xebd04*/
    v9 = *(_QWORD *)&qword_905FB0; /*0xebd06*/
  }
  v10 = (cocos2d::CCArray *)sub_24AE60(v9, *(unsigned int *)(*(_QWORD *)(a1 + 16) + 56LL)); /*0xebd19*/
  for ( j = 0; ; ++j )
  {
    v12 = v10 ? cocos2d::CCArray::count(v10) : 0;
    if ( j >= v12 ) /*0xebd34*/
      break; /*0xebd34*/
    if ( *((_DWORD *)cocos2d::CCArray::objectAtIndex(v10, j) + 98) == a2 ) /*0xebd47*/
      return 2; /*0xebd52*/
  }
  return 0; /*0xebd56*/
}

// [15/19] Address: 0xebd70
// Method: MemberListPopup::pickerCountBase
__int64 __fastcall MemberListPopup_pickerCountBase(__int64 a1)
{
  return *(unsigned int *)(*(_QWORD *)(a1 + 16) + 200LL); /*0xebd7a*/
}

// [16/19] Address: 0xebd80
// Method: MemberListPopup::friendPickerClosed
void __fastcall MemberListPopup_friendPickerClosed(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 72) ) /*0xebd80*/
  {
    if ( !*(_BYTE *)(a1 + 80) ) /*0xebd89*/
      cocos2d::CCArray::removeAllObjects(*(cocos2d::CCArray **)(a1 + 72)); /*0xebd92*/
  }
}

// [17/19] Address: 0xebda0
// Method: MemberListPopup::friendPickerAdd
// Hidden C++ exception states: #wind=4
void __fastcall MemberListPopup_friendPickerAdd(__int64 a1)
{
  cocos2d::CCArray *v2; // rcx
  __int64 v3; // r14
  __int64 v4; // rbp
  cocos2d::CCArray *v5; // rsi
  unsigned int v6; // r15d
  signed int i; // edi
  struct cocos2d::CCObject *v8; // rax
  cocos2d::CCString *v9; // rax
  char *CString; // rax
  size_t v11; // r8
  cocos2d::CCObject *v12; // rcx
  cocos2d::CCObject *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  void *v20; // [rsp+20h] [rbp-58h]
  void *v21; // [rsp+20h] [rbp-58h]
  void *v22; // [rsp+20h] [rbp-58h]
  __int128 Src; // [rsp+28h] [rbp-50h] BYREF
  __int64 v24; // [rsp+38h] [rbp-40h]
  __int64 v25; // [rsp+40h] [rbp-38h]

  v2 = *(cocos2d::CCArray **)(a1 + 72); /*0xebdc8*/
  if ( v2 ) /*0xebdcf*/
  {
    if ( cocos2d::CCArray::count(v2) ) /*0xebdd5*/
    {
      v3 = a1 - 784; /*0xebde3*/
      if ( !*(_BYTE *)(a1 - 784 + 864) /*0xebe16*/
        && *(int *)(a1 + 84) <= 0
        && *(int *)(a1 + 88) <= 0
        && *(int *)(a1 + 92) <= 0
        && !*(_BYTE *)(a1 + 64) )
      {
        v4 = *(_QWORD *)&qword_905FB0; /*0xebe20*/
        if ( !*(_QWORD *)&qword_905FB0 ) /*0xebe2a*/
        {
          v20 = operator new(0x690u); /*0xebe36*/
          *(_QWORD *)&qword_905FB0 = sub_214250(v20); /*0xebe44*/
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xebe55*/
          v4 = *(_QWORD *)&qword_905FB0; /*0xebe57*/
        }
        v5 = *(cocos2d::CCArray **)(a1 + 72); /*0xebe5e*/
        v6 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 56LL); /*0xebe66*/
        if ( v5 && cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 72)) ) /*0xebe76*/
        {
          Src = 0; /*0xebe87*/
          v24 = 0; /*0xebe8f*/
          v25 = 15; /*0xebe94*/
          LOBYTE(Src) = 0; /*0xebe9d*/
          for ( i = 0; i < (int)cocos2d::CCArray::count(v5); ++i ) /*0xebeb0*/
          {
            if ( i > 0 ) /*0xebeb4*/
              sub_43D80(&Src, &unk_709CE8, 1u); /*0xebec8*/
            v8 = cocos2d::CCArray::objectAtIndex(v5, i); /*0xebed2*/
            v9 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, *((unsigned int *)v8 + 98)); /*0xebee5*/
            CString = (char *)cocos2d::CCString::getCString(v9); /*0xebeee*/
            v11 = -1; /*0xebef4*/
            do /*0xebf03*/
              ++v11; /*0xebf00*/
            while ( CString[v11] ); /*0xebf03*/
            sub_43D80(&Src, CString, v11); /*0xebf12*/
          }
          if ( (unsigned __int8)sub_24F190(v4, v6, 4, &Src) ) /*0xebf37*/
          {
            v12 = *(cocos2d::CCObject **)(v4 + 784); /*0xebf4f*/
            if ( v12 ) /*0xebf59*/
              cocos2d::CCObject::release(v12); /*0xebf5b*/
            v13 = (cocos2d::CCObject *)cocos2d::CCArray::create(v12); /*0xebf61*/
            *(_QWORD *)(v4 + 784) = v13; /*0xebf67*/
            cocos2d::CCObject::retain(v13); /*0xebf71*/
            cocos2d::CCArray::addObjectsFromArray(*(cocos2d::CCArray **)(v4 + 784), v5); /*0xebf81*/
            sub_3C310(&Src); /*0xebf8d*/
            v14 = *(_QWORD *)(a1 + 24); /*0xebf92*/
            if ( v14 ) /*0xebf99*/
            {
              *(_BYTE *)(v14 + 1001) = 1; /*0xebf9b*/
              v15 = *(_QWORD *)(a1 + 24); /*0xebfa2*/
              v16 = v15 + 672; /*0xebfa6*/
              if ( !v15 ) /*0xebfb0*/
                v16 = 0; /*0xebfb0*/
              v17 = *(_QWORD *)&qword_905FB0; /*0xebfb4*/
              if ( !*(_QWORD *)&qword_905FB0 ) /*0xebfbe*/
              {
                v21 = operator new(0x690u); /*0xebfca*/
                *(_QWORD *)&qword_905FB0 = sub_214250(v21); /*0xebfd8*/
                (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xebfe5*/
                v17 = *(_QWORD *)&qword_905FB0; /*0xebfe8*/
              }
              *(_QWORD *)(v17 + 1392) = v16; /*0xebfef*/
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 1096LL))(v3, 0); /*0xebffe*/
            }
            else
            {
              *(_BYTE *)(a1 + 80) = 1; /*0xec006*/
              v18 = a1 - 8; /*0xec00a*/
              if ( !v3 ) /*0xec011*/
                v18 = 0; /*0xec011*/
              v19 = *(_QWORD *)&qword_905FB0; /*0xec015*/
              if ( !*(_QWORD *)&qword_905FB0 ) /*0xec01f*/
              {
                v22 = operator new(0x690u); /*0xec02b*/
                *(_QWORD *)&qword_905FB0 = sub_214250(v22); /*0xec039*/
                (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xec04a*/
                v19 = *(_QWORD *)&qword_905FB0; /*0xec04c*/
              }
              *(_QWORD *)(v19 + 1392) = v18; /*0xec053*/
            }
          }
          else
          {
            sub_3C310(&Src); /*0xebf45*/
          }
        }
      }
    }
  }
}

// [18/19] Address: 0xec890
// Method: MemberListPopup::threadUpdateFinished
// Hidden C++ exception states: #wind=4
void __fastcall MemberListPopup_threadUpdateFinished(__int64 a1, int a2, int a3)
{
  __int64 v5; // rcx
  cocos2d::CCArray *v6; // rax
  cocos2d::CCArray *v7; // rsi
  unsigned int v8; // ebx
  const char *v9; // rcx
  int v10; // eax
  const char *v11; // rbx
  int v12; // ecx
  __int64 v13; // rcx
  cocos2d::CCArray *v14; // rax
  cocos2d::CCArray *v15; // rsi
  unsigned int v16; // ebx
  __int64 *v17; // rsi
  __int64 v18; // r8
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rax
  cocos2d::CCNotificationCenter *v29; // rax
  __int128 v30; // [rsp+30h] [rbp-58h] BYREF
  __int64 v31; // [rsp+40h] [rbp-48h]
  __int64 v32; // [rsp+48h] [rbp-40h]
  __int128 v33; // [rsp+50h] [rbp-38h] BYREF
  __int64 v34; // [rsp+60h] [rbp-28h]
  __int64 v35; // [rsp+68h] [rbp-20h]
  void *v36; // [rsp+90h] [rbp+8h]
  void *v37; // [rsp+90h] [rbp+8h]
  void *v38; // [rsp+90h] [rbp+8h]

  if ( a2 == *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL) /*0xec8ce*/
    && (*(_BYTE *)(a1 + 88)
     || *(int *)(a1 + 92) > 0
     || *(int *)(a1 + 96) > 0
     || *(int *)(a1 + 100) > 0
     || *(_BYTE *)(a1 + 72)) )
  {
    v5 = *(_QWORD *)&qword_905FB0; /*0xec8d8*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xec8e2*/
    {
      v36 = operator new(0x690u); /*0xec8ee*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v36); /*0xec8ff*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xec910*/
      v5 = *(_QWORD *)&qword_905FB0; /*0xec912*/
    }
    v6 = (cocos2d::CCArray *)sub_249D20(v5, *(unsigned int *)(*(_QWORD *)(a1 + 24) + 56LL)); /*0xec920*/
    v7 = v6; /*0xec925*/
    if ( a3 == 4 ) /*0xec92c*/
    {
      if ( !*(_BYTE *)(a1 + 88) ) /*0xec932*/
        return; /*0xec932*/
      *(_BYTE *)(a1 + 88) = 0; /*0xec938*/
      sub_EC180(*(_QWORD *)(a1 + 24)); /*0xec940*/
    }
    else
    {
      switch ( a3 ) /*0xec94e*/
      {
        case 6: /*0xec94e*/
          if ( *(int *)(a1 + 92) <= 0 ) /*0xec958*/
            return; /*0xec958*/
          if ( v6 ) /*0xec961*/
          {
            v8 = 0; /*0xec963*/
            if ( (int)cocos2d::CCArray::count(v6) > 0 ) /*0xec970*/
            {
              while ( *((_DWORD *)cocos2d::CCArray::objectAtIndex(v7, v8) + 98) != *(_DWORD *)(a1 + 92) ) /*0xec989*/
              {
                if ( (int)++v8 >= (int)cocos2d::CCArray::count(v7) ) /*0xec995*/
                  goto LABEL_20; /*0xec995*/
              }
              cocos2d::CCArray::removeObjectAtIndex(v7, v8, 1); /*0xec99e*/
            }
          }
LABEL_20:
          v9 = *(const char **)(a1 + 24); /*0xec9a4*/
          v10 = *((_DWORD *)v9 + 50) - 1; /*0xec9ae*/
          if ( v10 < 1 ) /*0xec9b7*/
            v10 = 1; /*0xec9b7*/
          *((_DWORD *)v9 + 50) = v10; /*0xec9ba*/
          *(_DWORD *)(a1 + 92) = 0; /*0xec9c0*/
          v11 = "Member removed"; /*0xec9c7*/
          break;
        case 7: /*0xec94e*/
          v12 = *(_DWORD *)(a1 + 96); /*0xec9d9*/
          if ( v12 <= 0 ) /*0xec9de*/
            return; /*0xec9de*/
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 240LL) = v12; /*0xec9e8*/
          *(_DWORD *)(a1 + 96) = 0; /*0xec9ee*/
          CreatorLayer_checkQuestsStatus(a1 - 776); /*0xec9fc*/
          v11 = "Owner changed"; /*0xeca01*/
          break;
        case 13: /*0xec94e*/
          if ( !*(_BYTE *)(a1 + 72) ) /*0xeca17*/
            return; /*0xeca17*/
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 248LL) = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 248LL) != 1; /*0xeca2d*/
          *(_BYTE *)(a1 + 72) = 0; /*0xeca33*/
          CreatorLayer_checkQuestsStatus(a1 - 776); /*0xeca3e*/
          v9 = "Only the owner can add"; /*0xeca47*/
          v11 = "Anyone can add"; /*0xeca4e*/
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 248LL) == 1 ) /*0xeca5c*/
            v11 = "Only the owner can add"; /*0xeca5c*/
          break;
        default:
          if ( a3 != 11 || *(int *)(a1 + 100) <= 0 ) /*0xeca73*/
            return; /*0xeca73*/
          v13 = *(_QWORD *)&qword_905FB0; /*0xeca79*/
          if ( !*(_QWORD *)&qword_905FB0 ) /*0xeca83*/
          {
            v37 = operator new(0x690u); /*0xeca8f*/
            *(_QWORD *)&qword_905FB0 = sub_214250(v37); /*0xecaa0*/
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xecab1*/
            v13 = *(_QWORD *)&qword_905FB0; /*0xecab3*/
          }
          v14 = (cocos2d::CCArray *)sub_24AE60(v13, *(unsigned int *)(*(_QWORD *)(a1 + 24) + 56LL)); /*0xecac1*/
          v15 = v14; /*0xecac6*/
          if ( v14 ) /*0xecacc*/
          {
            v16 = 0; /*0xecace*/
            if ( (int)cocos2d::CCArray::count(v14) > 0 ) /*0xecadb*/
            {
              while ( *((_DWORD *)cocos2d::CCArray::objectAtIndex(v15, v16) + 98) != *(_DWORD *)(a1 + 100) ) /*0xecaf7*/
              {
                if ( (int)++v16 >= (int)cocos2d::CCArray::count(v15) ) /*0xecb03*/
                  goto LABEL_41; /*0xecb03*/
              }
              cocos2d::CCArray::removeObjectAtIndex(v15, v16, 1); /*0xecb0c*/
            }
          }
LABEL_41:
          *(_DWORD *)(a1 + 100) = 0; /*0xecb12*/
          v11 = "Invite cancelled"; /*0xecb19*/
          break;
      }
      v17 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(v9) + 272); /*0xecb26*/
      v30 = 0; /*0xecb3d*/
      v31 = 0; /*0xecb42*/
      v32 = 15; /*0xecb4b*/
      LOBYTE(v30) = 0; /*0xecb54*/
      v33 = 0; /*0xecb59*/
      v34 = 0; /*0xecb5e*/
      v35 = 0; /*0xecb67*/
      v18 = -1; /*0xecb70*/
      do /*0xecb83*/
        ++v18; /*0xecb80*/
      while ( v11[v18] ); /*0xecb83*/
      sub_3C230(&v33); /*0xecb92*/
      v19 = *v17; /*0xecb97*/
      v22 = sub_3A4CA0(&v33, v20, v21, 150, &v30); /*0xecbbf*/
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v19 + 456))(v17, v22, 1000); /*0xecbd0*/
    }
    v23 = *(_QWORD *)(a1 + 32); /*0xecbd6*/
    if ( v23 ) /*0xecbdd*/
      EndLevelLayer_playStarEffect(v23); /*0xecbdf*/
    GJBaseGameLayer_spawnParticleTrigger(a1 - 776); /*0xecbeb*/
    v26 = *(_QWORD *)(a1 + 32); /*0xecbf0*/
    if ( v26 ) /*0xecbf7*/
    {
      v27 = v26 + 672; /*0xecbf9*/
      v28 = *(_QWORD *)&qword_905FB0; /*0xecc00*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0xecc0a*/
      {
        v38 = operator new(0x690u); /*0xecc16*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v38); /*0xecc27*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xecc38*/
        v28 = *(_QWORD *)&qword_905FB0; /*0xecc3a*/
      }
      *(_QWORD *)(v28 + 1392) = v27; /*0xecc41*/
      if ( ((a3 - 4) & 0xFFFFFFFC) == 0 ) /*0xecc51*/
        EnhancedGameObject_updateUserCoin(*(_QWORD *)(a1 + 32)); /*0xecc5d*/
    }
    else
    {
      v29 = (cocos2d::CCNotificationCenter *)cocos2d::CCNotificationCenter::sharedNotificationCenter(v25, v24); /*0xecc64*/
      cocos2d::CCNotificationCenter::postNotification(v29, "ThreadsChangedNotification", 0); /*0xecc77*/
    }
  }
}

// [19/19] Address: 0xecca0
// Method: MemberListPopup::threadUpdateFailed
// Hidden C++ exception states: #wind=1
__int64 __fastcall MemberListPopup_threadUpdateFailed(__int64 a1, int a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  _WORD v9[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v10; // [rsp+40h] [rbp-38h]
  __int64 v11; // [rsp+48h] [rbp-30h]
  __int128 v12; // [rsp+50h] [rbp-28h] BYREF
  __int64 v13; // [rsp+60h] [rbp-18h]
  __int64 v14; // [rsp+68h] [rbp-10h]

  result = *(_QWORD *)(a1 + 24); /*0xeccaa*/
  if ( a2 == *(_DWORD *)(result + 56) && a3 <= 0xD ) /*0xeccbb*/
  {
    result = 10448; /*0xeccc1*/
    if ( _bittest((const int *)&result, a3) ) /*0xeccc6*/
    {
      *(_BYTE *)(a1 + 88) = 0; /*0xeccd0*/
      *(_QWORD *)(a1 + 92) = 0; /*0xeccd6*/
      *(_DWORD *)(a1 + 100) = 0; /*0xeccda*/
      *(_BYTE *)(a1 + 72) = 0; /*0xeccdd*/
      if ( !byte_9037D9 ) /*0xecce6*/
      {
        v4 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(a1) + 272); /*0xeccf2*/
        v12 = 0; /*0xecd09*/
        v13 = 0; /*0xecd0e*/
        v14 = 15; /*0xecd13*/
        LOBYTE(v12) = 0; /*0xecd1c*/
        v9[7] = 0; /*0xecd20*/
        v10 = 13; /*0xecd25*/
        v11 = 15; /*0xecd2e*/
        strcpy((char *)v9, "Action failed"); /*0xecd3f*/
        v5 = *v4; /*0xecd5e*/
        v8 = sub_3A4CA0(v9, v6, v7, 150, &v12); /*0xecd86*/
        return (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v5 + 456))(v4, v8, 1000); /*0xecd97*/
      }
    }
  }
  return result; /*0xecd9d*/
}
