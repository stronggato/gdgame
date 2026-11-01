#include <Geode/binding/AutoBackupPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0xc79e0
// Method: AutoBackupPopup::~AutoBackupPopup
char *__fastcall AutoBackupPopup__dtor_AutoBackupPopup(char *Block, char a2)
{
  sub_3DA90(Block + 968); /*0xc79f6*/
  sub_CDA30(Block + 952); /*0xc7a02*/
  sub_7F340(Block + 912); /*0xc7a0e*/
  sub_3C310(Block + 880); /*0xc7a1a*/
  sub_CDC80(Block + 856); /*0xc7a26*/
  sub_CDC80(Block + 832); /*0xc7a32*/
  sub_3C310(Block + 800); /*0xc7a3e*/
  PagedListPopup__dtor_PagedListPopup(Block); /*0xc7a46*/
  if ( (a2 & 1) != 0 ) /*0xc7a4e*/
    j_j_free(Block); /*0xc7a58*/
  return Block; /*0xc7a5d*/
}

// [2/5] Address: 0xc89c0
// Method: AutoBackupPopup::backupsChanged
__int64 __fastcall AutoBackupPopup_backupsChanged(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 - 784; /*0xc89c6*/
  sub_C8230(a1 - 784); /*0xc89d0*/
  return sub_C8D50(v1); /*0xc89d8*/
}

// [3/5] Address: 0xc89f0
// Method: AutoBackupPopup::textChanged
// Hidden C++ exception states: #wind=2
void __fastcall AutoBackupPopup_textChanged(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  size_t v9; // r14
  void **v10; // r15
  char *v11; // r12
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rdi
  size_t v14; // rbx
  void *v15; // rsi
  size_t v16; // r15
  __int128 *v17; // rax
  __int128 *v18; // rbx
  __int128 *v19; // rax
  const void **v20; // r14
  const void *v21; // rdx
  __int128 *v22; // rcx
  __int128 *v23; // rdx
  _BYTE *v24; // rax
  char *v25; // rax
  _QWORD *v26; // [rsp+30h] [rbp-29h]
  __int128 v28; // [rsp+40h] [rbp-19h] BYREF
  size_t v29; // [rsp+50h] [rbp-9h]
  __int64 v30; // [rsp+58h] [rbp-1h]
  void *Src[2]; // [rsp+60h] [rbp+7h] BYREF
  size_t Size; // [rsp+70h] [rbp+17h]
  unsigned __int64 v33; // [rsp+78h] [rbp+1Fh]

  v26 = a1 - 68; /*0xc8a32*/
  v3 = a1[48]; /*0xc8a36*/
  if ( a2 == v3 ) /*0xc8a40*/
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v3 + 600) + 600LL) + 8LL))(*(_QWORD *)(v3 + 600) + 600LL); /*0xc8a57*/
    *(_OWORD *)Src = 0; /*0xc8a5d*/
    Size = 0; /*0xc8a61*/
    v33 = 0; /*0xc8a65*/
    v5 = -1; /*0xc8a69*/
    do /*0xc8a73*/
      ++v5; /*0xc8a70*/
    while ( *(_BYTE *)(v4 + v5) ); /*0xc8a73*/
    sub_3C230(Src); /*0xc8a80*/
    v8 = a1[49]; /*0xc8a86*/
    v9 = Size; /*0xc8a8d*/
    if ( v8 ) /*0xc8a94*/
    {
      LOBYTE(v6) = Size != 0; /*0xc8a99*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 336LL))(v8, v6); /*0xc8a9f*/
    }
    v28 = 0; /*0xc8aa8*/
    v29 = 0; /*0xc8aac*/
    v30 = 0; /*0xc8ab0*/
    v10 = Src; /*0xc8ab4*/
    v11 = (char *)Src[0]; /*0xc8ab8*/
    v12 = v33; /*0xc8abc*/
    if ( v33 > 0xF ) /*0xc8ac4*/
      v10 = (void **)Src[0]; /*0xc8ac4*/
    v13 = 0x7FFFFFFFFFFFFFFFLL; /*0xc8ac8*/
    if ( v9 > 0x7FFFFFFFFFFFFFFFLL ) /*0xc8ad5*/
      sub_8D90(v8, v6, v7); /*0xc8cdc*/
    if ( v9 > 0xF ) /*0xc8adf*/
    {
      if ( (v9 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0xc8b0a*/
      {
        v13 = v9 | 0xF; /*0xc8b0c*/
        if ( (v9 | 0xF) < 0x16 ) /*0xc8b17*/
          v13 = 22; /*0xc8b17*/
      }
      v15 = (void *)sub_3C460(v13 + 1); /*0xc8b24*/
      *(_QWORD *)&v28 = v15; /*0xc8b27*/
      v14 = v9; /*0xc8b2b*/
      v29 = v9; /*0xc8b2e*/
      v30 = v13; /*0xc8b32*/
      memcpy(v15, v10, v9 + 1); /*0xc8b40*/
    }
    else
    {
      v14 = v9; /*0xc8ae1*/
      v29 = v9; /*0xc8ae4*/
      v13 = 15; /*0xc8ae8*/
      v30 = 15; /*0xc8aed*/
      v28 = *(_OWORD *)v10; /*0xc8af5*/
      v15 = (void *)v28; /*0xc8af9*/
    }
    v16 = 0; /*0xc8b45*/
    if ( v9 ) /*0xc8b4b*/
    {
      do /*0xc8b85*/
      {
        v17 = &v28; /*0xc8b50*/
        if ( v13 > 0xF ) /*0xc8b58*/
          v17 = (__int128 *)v15; /*0xc8b58*/
        v18 = &v28; /*0xc8b5c*/
        if ( v13 > 0xF ) /*0xc8b60*/
          v18 = (__int128 *)v15; /*0xc8b60*/
        *((_BYTE *)v18 + v16) = tolower(*((unsigned __int8 *)v17 + v16)); /*0xc8b6f*/
        ++v16; /*0xc8b73*/
        v14 = v29; /*0xc8b76*/
        v13 = v30; /*0xc8b7a*/
        v15 = (void *)v28; /*0xc8b7e*/
      }
      while ( v16 < v29 ); /*0xc8b85*/
    }
    if ( (int)v14 < 2 ) /*0xc8b8d*/
    {
      v29 = 0; /*0xc8b8f*/
      v19 = &v28; /*0xc8b93*/
      if ( v13 > 0xF ) /*0xc8b9b*/
        v19 = (__int128 *)v15; /*0xc8b9b*/
      *(_BYTE *)v19 = 0; /*0xc8b9f*/
      v13 = v30; /*0xc8ba2*/
      v14 = v29; /*0xc8ba6*/
      v15 = (void *)v28; /*0xc8baa*/
    }
    v20 = (const void **)(a1 + 42); /*0xc8bb2*/
    v21 = a1 + 42; /*0xc8bb9*/
    if ( a1[45] > 0xFu ) /*0xc8bc1*/
      v21 = *v20; /*0xc8bc3*/
    v22 = &v28; /*0xc8bc6*/
    if ( v13 > 0xF ) /*0xc8bce*/
      v22 = (__int128 *)v15; /*0xc8bce*/
    if ( v14 != a1[44] || v14 && memcmp(v22, v21, v14) ) /*0xc8be0*/
    {
      if ( v20 != (const void **)&v28 ) /*0xc8bf0*/
      {
        v23 = &v28; /*0xc8bf2*/
        if ( v13 > 0xF ) /*0xc8bfa*/
          v23 = (__int128 *)v15; /*0xc8bfa*/
        sub_3F5A0(v20, v23, v14); /*0xc8c04*/
        v13 = v30; /*0xc8c09*/
        v15 = (void *)v28; /*0xc8c0d*/
      }
      sub_C8D50(v26); /*0xc8c15*/
    }
    if ( v13 > 0xF ) /*0xc8c1f*/
    {
      v24 = v15; /*0xc8c25*/
      if ( v13 + 1 >= 0x1000 ) /*0xc8c2f*/
      {
        v15 = (void *)*((_QWORD *)v15 - 1); /*0xc8c35*/
        if ( (unsigned __int64)(v24 - (_BYTE *)v15 - 8) > 0x1F ) /*0xc8c44*/
          invoke_watson(0, 0, 0, 0, 0); /*0xc8c55*/
      }
      j_j_free(v15); /*0xc8c5f*/
    }
    if ( v12 > 0xF ) /*0xc8c69*/
    {
      v25 = v11; /*0xc8c6f*/
      if ( v12 + 1 >= 0x1000 ) /*0xc8c79*/
      {
        v11 = (char *)*((_QWORD *)v11 - 1); /*0xc8c7f*/
        if ( (unsigned __int64)(v25 - v11 - 8) > 0x1F ) /*0xc8c8f*/
          invoke_watson(0, 0, 0, 0, 0); /*0xc8ca0*/
      }
      j_j_free(v11); /*0xc8caa*/
    }
  }
}

// [4/5] Address: 0xc8d30
// Method: AutoBackupPopup::clearPageContent
double __fastcall AutoBackupPopup_clearPageContent(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 968); /*0xc8d30*/
  if ( v2 != *(_QWORD *)(a1 + 976) ) /*0xc8d3e*/
    *(_QWORD *)(a1 + 976) = v2; /*0xc8d40*/
  return PagedListPopup_clearPageContent(a1, a2);
}

// [5/5] Address: 0xca4c0
// Method: AutoBackupPopup::FLAlert_Clicked
unsigned __int64 __fastcall AutoBackupPopup_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 result; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rax
  __int64 **v9; // rdx
  __int64 i; // rax
  __int64 *j; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rax
  _BYTE v16[32]; // [rsp+20h] [rbp-48h] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0xca4e3*/
  if ( (_DWORD)result == 3 ) /*0xca4e9*/
  {
    if ( a3 ) /*0xca4f1*/
    {
      v6 = *(_QWORD **)(a1 + 176); /*0xca4f7*/
      v7 = (_QWORD *)*v6; /*0xca503*/
      if ( (_QWORD *)*v6 != v6 ) /*0xca509*/
      {
        do /*0xca5a6*/
        {
          v8 = sub_746F0(v16, (void *)(a1 + 24), v7 + 4); /*0xca52d*/
          if ( *(_QWORD *)(v8 + 24) > 0xFu ) /*0xca537*/
            v8 = *(_QWORD *)v8; /*0xca539*/
          remove((const char *)v8); /*0xca53f*/
          sub_3C310(v16); /*0xca54a*/
          v9 = (__int64 **)v7[2]; /*0xca54f*/
          if ( *((_BYTE *)v9 + 25) ) /*0xca553*/
          {
            for ( i = v7[1]; !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 8) ) /*0xca55d*/
            {
              if ( v7 != *(_QWORD **)(i + 16) ) /*0xca567*/
                break; /*0xca567*/
              v7 = (_QWORD *)i; /*0xca569*/
            }
            v7 = (_QWORD *)i; /*0xca576*/
          }
          else
          {
            v7 = (_QWORD *)v7[2]; /*0xca57b*/
            for ( j = *v9; !*((_BYTE *)j + 25); j = (__int64 *)*j ) /*0xca581*/
              v7 = j; /*0xca593*/
          }
        }
        while ( v7 != *(_QWORD **)(a1 + 176) ); /*0xca5a6*/
      }
      sub_CD8A0(a1 + 176); /*0xca5bb*/
      return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1 + 8); /*0xca5c8*/
    }
  }
  else
  {
    v12 = *(int *)(a1 + 168); /*0xca5d4*/
    *(_DWORD *)(a1 + 168) = -1; /*0xca5db*/
    if ( a3 ) /*0xca5e7*/
    {
      if ( (int)v12 >= 0 ) /*0xca5ec*/
      {
        v13 = *(_QWORD *)(a1 + 80); /*0xca5ee*/
        v14 = *(_QWORD *)(a1 + 88) - v13; /*0xca600*/
        result = (unsigned __int64)(v14 + ((unsigned __int128)(v14 * (__int128)(__int64)0xC30C30C30C30C30DuLL) >> 64)) >> 63; /*0xca610*/
        if ( (int)v12 < (int)(v14 / 168) ) /*0xca61a*/
        {
          v15 = sub_746F0(v16, (void *)(a1 + 24), (void *)(v13 + 168 * v12)); /*0xca62f*/
          if ( *(_QWORD *)(v15 + 24) > 0xFu ) /*0xca639*/
            v15 = *(_QWORD *)v15; /*0xca63b*/
          remove((const char *)v15); /*0xca641*/
          sub_3C310(v16); /*0xca64c*/
          return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1 + 8); /*0xca659*/
        }
      }
    }
  }
  return result; /*0xca65b*/
}
