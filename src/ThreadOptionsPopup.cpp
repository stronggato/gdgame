#include <Geode/binding/ThreadOptionsPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/11] Address: 0xd1d70
// Method: ThreadOptionsPopup::~ThreadOptionsPopup
// Hidden C++ exception states: #wind=1
char *__fastcall ThreadOptionsPopup__dtor_ThreadOptionsPopup(char *Block, char a2)
{
  char *v4; // rdi
  __int64 v5; // rax
  void *v6; // rax
  cocos2d::CCObject *v7; // rcx

  *(_QWORD *)Block = &ThreadOptionsPopup::`vftable'; /*0xd1d8b*/
  *((_QWORD *)Block + 40) = &ThreadOptionsPopup::`vftable'; /*0xd1d95*/
  *((_QWORD *)Block + 41) = &ThreadOptionsPopup::`vftable'; /*0xd1da3*/
  *((_QWORD *)Block + 42) = &ThreadOptionsPopup::`vftable'; /*0xd1db1*/
  *((_QWORD *)Block + 43) = &ThreadOptionsPopup::`vftable'; /*0xd1dbf*/
  *((_QWORD *)Block + 44) = &ThreadOptionsPopup::`vftable'; /*0xd1dcd*/
  *((_QWORD *)Block + 51) = &ThreadOptionsPopup::`vftable'; /*0xd1ddb*/
  *((_QWORD *)Block + 54) = &ThreadOptionsPopup::`vftable'; /*0xd1de9*/
  *((_QWORD *)Block + 68) = &ThreadOptionsPopup::`vftable'; /*0xd1df7*/
  *((_QWORD *)Block + 83) = &ThreadOptionsPopup::`vftable'; /*0xd1e05*/
  *((_QWORD *)Block + 84) = &ThreadOptionsPopup::`vftable'; /*0xd1e13*/
  v4 = Block + 1000; /*0xd1e1a*/
  *((_QWORD *)Block + 125) = &ThreadOptionsPopup::`vftable'; /*0xd1e28*/
  *((_QWORD *)Block + 126) = &ThreadOptionsPopup::`vftable'; /*0xd1e32*/
  v5 = *(_QWORD *)&qword_905FB0; /*0xd1e39*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0xd1e43*/
  {
    v6 = operator new(0x690u); /*0xd1e4a*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v6); /*0xd1e57*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xd1e68*/
    v5 = *(_QWORD *)&qword_905FB0; /*0xd1e6a*/
  }
  if ( *(char **)(v5 + 1392) == v4 ) /*0xd1e78*/
    *(_QWORD *)(v5 + 1392) = 0; /*0xd1e7a*/
  v7 = (cocos2d::CCObject *)*((_QWORD *)Block + 127); /*0xd1e85*/
  if ( v7 ) /*0xd1e8f*/
    cocos2d::CCObject::release(v7); /*0xd1e91*/
  UIPOptionsLayer__dtor_UIPOptionsLayer((cocos2d::CCNode *)Block); /*0xd1e9a*/
  if ( (a2 & 1) != 0 ) /*0xd1ea4*/
    j_j_free(Block); /*0xd1eae*/
  return Block; /*0xd1eb6*/
}

// [2/11] Address: 0xf3a90
// Method: ThreadOptionsPopup::FLAlert_Clicked
// Hidden C++ exception states: #wind=11
void __fastcall ThreadOptionsPopup_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  char v7; // si
  void *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  char v12; // si
  void *v13; // rcx
  __int64 v14; // rax
  char v15; // r14
  const char *v16; // rdx
  int v17; // ebx
  __int64 v18; // r8
  __int64 v19; // rcx
  char v20; // si
  void *v21; // r8
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rcx
  char v26; // si
  void *v27; // rcx
  __int64 v28; // rax
  cocos2d::CCString *v29; // rax
  const char *CString; // rax
  __int64 v31; // rbx
  __int64 v32; // r8
  __int64 v33; // rcx
  char v34; // si
  void *v35; // r8
  __int64 v36; // rax
  void *v37; // [rsp+30h] [rbp-30h]
  void *v38; // [rsp+30h] [rbp-30h]
  void *v39; // [rsp+30h] [rbp-30h]
  void *v40; // [rsp+30h] [rbp-30h]
  void *v41; // [rsp+30h] [rbp-30h]
  void *v42; // [rsp+30h] [rbp-30h]
  void *v43; // [rsp+30h] [rbp-30h]
  void *v44; // [rsp+30h] [rbp-30h]
  void *v45; // [rsp+30h] [rbp-30h]
  void *v46; // [rsp+30h] [rbp-30h]
  void *Block[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v48; // [rsp+48h] [rbp-18h]
  unsigned __int64 v49; // [rsp+50h] [rbp-10h]

  if ( !a3 ) /*0xf3a93*/
    return; /*0xf3a93*/
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 1 ) /*0xf3ace*/
  {
    *(_OWORD *)Block = 0; /*0xf3ad7*/
    v5 = 0; /*0xf3adb*/
    v48 = 0; /*0xf3add*/
    v49 = 15; /*0xf3ae1*/
    LOBYTE(Block[0]) = 0; /*0xf3ae9*/
    v6 = *(_QWORD *)&qword_905FB0; /*0xf3aec*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xf3af6*/
    {
      v37 = operator new(0x690u); /*0xf3b02*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v37); /*0xf3b0f*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xf3b20*/
      v6 = *(_QWORD *)&qword_905FB0; /*0xf3b22*/
    }
    v7 = sub_24F190(v6, *(unsigned int *)(*(_QWORD *)(a1 + 8) + 56LL), 1, Block); /*0xf3b3f*/
    if ( v49 <= 0xF ) /*0xf3b4a*/
      goto LABEL_9; /*0xf3b4a*/
    v8 = Block[0]; /*0xf3b4f*/
    if ( v49 + 1 < 0x1000 /*0xf3b72*/
      || (v8 = (void *)*((_QWORD *)Block[0] - 1), (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) <= 0x1F) )
    {
      j_j_free(v8); /*0xf3b78*/
LABEL_9:
      if ( v7 ) /*0xf3b80*/
      {
        if ( a1 != 1008 ) /*0xf3b90*/
          v5 = a1 - 8; /*0xf3b92*/
        v9 = *(_QWORD *)&qword_905FB0; /*0xf3b96*/
        if ( !*(_QWORD *)&qword_905FB0 ) /*0xf3ba0*/
        {
          v38 = operator new(0x690u); /*0xf3bac*/
          *(_QWORD *)&qword_905FB0 = sub_214250(v38); /*0xf3bb9*/
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xf3bca*/
          v9 = *(_QWORD *)&qword_905FB0; /*0xf3bcc*/
        }
        *(_QWORD *)(v9 + 1392) = v5; /*0xf3bd3*/
        *(_DWORD *)(a1 + 24) = 1; /*0xf3bda*/
      }
      return; /*0xf3be1*/
    }
LABEL_67:
    invoke_watson(0, 0, 0, 0, 0); /*0xf4085*/
  }
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 13 ) /*0xf3bf2*/
  {
    *(_OWORD *)Block = 0; /*0xf3bfb*/
    v10 = 0; /*0xf3bff*/
    v48 = 0; /*0xf3c01*/
    v49 = 15; /*0xf3c05*/
    LOBYTE(Block[0]) = 0; /*0xf3c0d*/
    v11 = *(_QWORD *)&qword_905FB0; /*0xf3c10*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xf3c1a*/
    {
      v39 = operator new(0x690u); /*0xf3c26*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v39); /*0xf3c33*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xf3c44*/
      v11 = *(_QWORD *)&qword_905FB0; /*0xf3c46*/
    }
    v12 = sub_24F190(v11, *(unsigned int *)(*(_QWORD *)(a1 + 8) + 56LL), 18, Block); /*0xf3c63*/
    if ( v49 > 0xF ) /*0xf3c6e*/
    {
      v13 = Block[0]; /*0xf3c73*/
      if ( v49 + 1 >= 0x1000 ) /*0xf3c81*/
      {
        v13 = (void *)*((_QWORD *)Block[0] - 1); /*0xf3c87*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v13 - 8) > 0x1F ) /*0xf3c96*/
          goto LABEL_67; /*0xf3c96*/
      }
      j_j_free(v13); /*0xf3c9c*/
    }
    if ( v12 ) /*0xf3ca4*/
    {
      if ( a1 != 1008 ) /*0xf3cb4*/
        v10 = a1 - 8; /*0xf3cb6*/
      v14 = *(_QWORD *)&qword_905FB0; /*0xf3cba*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0xf3cc4*/
      {
        v40 = operator new(0x690u); /*0xf3cd0*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v40); /*0xf3cdd*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xf3cee*/
        v14 = *(_QWORD *)&qword_905FB0; /*0xf3cf0*/
      }
      *(_QWORD *)(v14 + 1392) = v10; /*0xf3cf7*/
      *(_DWORD *)(a1 + 24) = 18; /*0xf3cfe*/
    }
  }
  else if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 11 ) /*0xf3d16*/
  {
    v15 = *(_BYTE *)(*(_QWORD *)(a1 + 8) + 328LL); /*0xf3d20*/
    v16 = "unlock"; /*0xf3d2f*/
    if ( !v15 ) /*0xf3d39*/
      v16 = "lock"; /*0xf3d39*/
    *(_OWORD *)Block = 0; /*0xf3d40*/
    v17 = 0; /*0xf3d44*/
    v48 = 0; /*0xf3d46*/
    v49 = 0; /*0xf3d4a*/
    v18 = -1; /*0xf3d4e*/
    do /*0xf3d58*/
      ++v18; /*0xf3d55*/
    while ( v16[v18] ); /*0xf3d58*/
    sub_3C230(Block); /*0xf3d62*/
    v19 = *(_QWORD *)&qword_905FB0; /*0xf3d68*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xf3d72*/
    {
      v41 = operator new(0x690u); /*0xf3d7e*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v41); /*0xf3d8b*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xf3d9c*/
      v19 = *(_QWORD *)&qword_905FB0; /*0xf3d9e*/
    }
    v20 = sub_244C90(v19, *(unsigned int *)(*(_QWORD *)(a1 + 8) + 56LL), Block, 0); /*0xf3db8*/
    if ( v49 > 0xF ) /*0xf3dc3*/
    {
      v21 = Block[0]; /*0xf3dc8*/
      if ( v49 + 1 >= 0x1000 ) /*0xf3dd6*/
      {
        v21 = (void *)*((_QWORD *)Block[0] - 1); /*0xf3ddc*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v21 - 8) > 0x1F ) /*0xf3deb*/
          invoke_watson(0, 0, 0, 0, 0); /*0xf3dfc*/
      }
      j_j_free(v21); /*0xf3e06*/
    }
    if ( v20 ) /*0xf3e0e*/
    {
      v22 = a1 - 8; /*0xf3e1e*/
      if ( a1 == 1008 ) /*0xf3e22*/
        v22 = 0; /*0xf3e24*/
      v23 = *(_QWORD *)&qword_905FB0; /*0xf3e27*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0xf3e31*/
      {
        v42 = operator new(0x690u); /*0xf3e3d*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v42); /*0xf3e4a*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xf3e5b*/
        v23 = *(_QWORD *)&qword_905FB0; /*0xf3e5d*/
      }
      *(_QWORD *)(v23 + 1392) = v22; /*0xf3e64*/
      LOBYTE(v17) = v15 != 0; /*0xf3e6e*/
      *(_DWORD *)(a1 + 24) = v17 + 101; /*0xf3e74*/
    }
  }
  else if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 3 ) /*0xf3e88*/
  {
    *(_OWORD *)Block = 0; /*0xf3e91*/
    v24 = 0; /*0xf3e95*/
    v48 = 0; /*0xf3e97*/
    v49 = 15; /*0xf3e9b*/
    LOBYTE(Block[0]) = 0; /*0xf3ea3*/
    v25 = *(_QWORD *)&qword_905FB0; /*0xf3ea6*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xf3eb0*/
    {
      v43 = operator new(0x690u); /*0xf3ebc*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v43); /*0xf3ec9*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xf3eda*/
      v25 = *(_QWORD *)&qword_905FB0; /*0xf3edc*/
    }
    v26 = sub_24F190(v25, *(unsigned int *)(*(_QWORD *)(a1 + 8) + 56LL), 5, Block); /*0xf3ef9*/
    if ( v49 > 0xF ) /*0xf3f04*/
    {
      v27 = Block[0]; /*0xf3f09*/
      if ( v49 + 1 >= 0x1000 ) /*0xf3f17*/
      {
        v27 = (void *)*((_QWORD *)Block[0] - 1); /*0xf3f1d*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v27 - 8) > 0x1F ) /*0xf3f2c*/
          goto LABEL_67; /*0xf3f2c*/
      }
      j_j_free(v27); /*0xf3f32*/
    }
    if ( v26 ) /*0xf3f3a*/
    {
      if ( a1 != 1008 ) /*0xf3f4a*/
        v24 = a1 - 8; /*0xf3f4c*/
      v28 = *(_QWORD *)&qword_905FB0; /*0xf3f50*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0xf3f5a*/
      {
        v44 = operator new(0x690u); /*0xf3f66*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v44); /*0xf3f73*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xf3f84*/
        v28 = *(_QWORD *)&qword_905FB0; /*0xf3f86*/
      }
      *(_QWORD *)(v28 + 1392) = v24; /*0xf3f8d*/
      *(_DWORD *)(a1 + 24) = 5; /*0xf3f94*/
    }
  }
  else
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) != 9 ) /*0xf3fac*/
      return; /*0xf3fac*/
    v29 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, *(unsigned int *)(*(_QWORD *)(a1 + 8) + 60LL)); /*0xf3fc0*/
    CString = cocos2d::CCString::getCString(v29); /*0xf3fc9*/
    *(_OWORD *)Block = 0; /*0xf3fd2*/
    v31 = 0; /*0xf3fd6*/
    v48 = 0; /*0xf3fd8*/
    v49 = 0; /*0xf3fdc*/
    v32 = -1; /*0xf3fe0*/
    do /*0xf3fea*/
      ++v32; /*0xf3fe7*/
    while ( CString[v32] ); /*0xf3fea*/
    sub_3C230(Block); /*0xf3ff7*/
    v33 = *(_QWORD *)&qword_905FB0; /*0xf3ffd*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xf4007*/
    {
      v45 = operator new(0x690u); /*0xf4013*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v45); /*0xf4020*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xf4031*/
      v33 = *(_QWORD *)&qword_905FB0; /*0xf4033*/
    }
    v34 = sub_24F190(v33, *(unsigned int *)(*(_QWORD *)(a1 + 8) + 56LL), 11, Block); /*0xf4050*/
    if ( v49 > 0xF ) /*0xf405b*/
    {
      v35 = Block[0]; /*0xf4060*/
      if ( v49 + 1 >= 0x1000 ) /*0xf406e*/
      {
        v35 = (void *)*((_QWORD *)Block[0] - 1); /*0xf4074*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v35 - 8) > 0x1F ) /*0xf4083*/
          goto LABEL_67; /*0xf4083*/
      }
      j_j_free(v35); /*0xf409e*/
    }
    if ( v34 ) /*0xf40a6*/
    {
      if ( a1 != 1008 ) /*0xf40b2*/
        v31 = a1 - 8; /*0xf40b4*/
      v36 = *(_QWORD *)&qword_905FB0; /*0xf40b8*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0xf40c2*/
      {
        v46 = operator new(0x690u); /*0xf40ce*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v46); /*0xf40db*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xf40ec*/
        v36 = *(_QWORD *)&qword_905FB0; /*0xf40ee*/
      }
      *(_QWORD *)(v36 + 1392) = v31; /*0xf40f5*/
      *(_DWORD *)(a1 + 24) = 11; /*0xf40fc*/
    }
  }
}

// [3/11] Address: 0xf4130
// Method: ThreadOptionsPopup::threadUpdateFinished
// Hidden C++ exception states: #wind=2
void __fastcall ThreadOptionsPopup_threadUpdateFinished(__int64 a1, int a2, unsigned int a3)
{
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rsi
  __int64 *v8; // r14
  const char *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  cocos2d::CCNotificationCenter *v17; // rax
  __int64 v18; // rcx
  __int64 *v19; // rsi
  char v20; // cl
  const char *v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 *v27; // rsi
  const char *v28; // rcx
  const char *v29; // rdx
  bool v30; // zf
  __int64 v31; // r8
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int128 v40; // [rsp+30h] [rbp-40h] BYREF
  __int64 v41; // [rsp+40h] [rbp-30h]
  __int64 v42; // [rsp+48h] [rbp-28h]
  __int128 v43; // [rsp+50h] [rbp-20h] BYREF
  __int64 v44; // [rsp+60h] [rbp-10h]
  __int64 v45; // [rsp+68h] [rbp-8h]
  void *v46; // [rsp+A0h] [rbp+30h]

  v5 = *(_QWORD *)(a1 + 16); /*0xf4149*/
  if ( a2 != *(_DWORD *)(v5 + 56) || a3 != *(_DWORD *)(a1 + 32) ) /*0xf4159*/
  {
    v39 = *(_QWORD *)(a1 + 24); /*0xf44dd*/
    if ( v39 ) /*0xf44e4*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v39 + 672) + 64LL))(v39 + 672); /*0xf44f0*/
    return; /*0xf44f0*/
  }
  *(_DWORD *)(a1 + 32) = 0; /*0xf4162*/
  if ( a3 == 10 ) /*0xf4169*/
  {
    *(_BYTE *)(v5 + 244) = *(_BYTE *)(v5 + 244) == 0; /*0xf43c7*/
    v27 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(v5) + 272); /*0xf43d3*/
    v28 = "Conversation muted"; /*0xf43de*/
    v29 = "Conversation unmuted"; /*0xf43e5*/
    v30 = *(_BYTE *)(*(_QWORD *)(a1 + 16) + 244LL) == 0; /*0xf43ec*/
LABEL_32:
    if ( !v30 ) /*0xf43f3*/
      v29 = v28; /*0xf43f3*/
    v43 = 0; /*0xf4402*/
    v44 = 0; /*0xf4406*/
    v45 = 15; /*0xf440a*/
    LOBYTE(v43) = 0; /*0xf4412*/
    v40 = 0; /*0xf4416*/
    v41 = 0; /*0xf441a*/
    v42 = 0; /*0xf441e*/
    v31 = -1; /*0xf4422*/
    do /*0xf4433*/
      ++v31; /*0xf4430*/
    while ( v29[v31] ); /*0xf4433*/
    sub_3C230(&v40); /*0xf443e*/
    v32 = *v27; /*0xf4443*/
    v35 = sub_3A4CA0(&v40, v33, v34, 150, &v43); /*0xf4469*/
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(v32 + 456))(v27, v35, 1000); /*0xf447a*/
    v36 = *(_QWORD *)(a1 + 24); /*0xf4480*/
    if ( v36 ) /*0xf4487*/
    {
      v37 = v36 + 672; /*0xf448d*/
      v38 = *(_QWORD *)&qword_905FB0; /*0xf4494*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0xf449e*/
      {
        v46 = operator new(0x690u); /*0xf44aa*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v46); /*0xf44b7*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xf44c8*/
        v38 = *(_QWORD *)&qword_905FB0; /*0xf44ca*/
      }
      *(_QWORD *)(v38 + 1392) = v37; /*0xf44d1*/
      goto LABEL_22; /*0xf44d8*/
    }
LABEL_21:
    v17 = (cocos2d::CCNotificationCenter *)cocos2d::CCNotificationCenter::sharedNotificationCenter(v16, v15); /*0xf4287*/
    cocos2d::CCNotificationCenter::postNotification(v17, "ThreadsChangedNotification", 0); /*0xf429a*/
LABEL_22:
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 1000) + 1104LL))(a1 - 1000, 0); /*0xf42a0*/
    return; /*0xf42b2*/
  }
  if ( a3 == 15 ) /*0xf4172*/
  {
    *(_BYTE *)(v5 + 330) = *(_BYTE *)(v5 + 330) == 0; /*0xf438f*/
    v27 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(v5) + 272); /*0xf439b*/
    v28 = "Conversation pinned"; /*0xf43a6*/
    v29 = "Conversation unpinned"; /*0xf43ad*/
    v30 = *(_BYTE *)(*(_QWORD *)(a1 + 16) + 330LL) == 0; /*0xf43b4*/
    goto LABEL_32; /*0xf43bb*/
  }
  if ( a3 - 101 <= 1 ) /*0xf417f*/
  {
    *(_BYTE *)(v5 + 328) = a3 == 101; /*0xf42bd*/
    v18 = *(_QWORD *)(a1 + 24); /*0xf42c3*/
    if ( v18 ) /*0xf42ca*/
      sub_D8D80(v18); /*0xf42cc*/
    v19 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(v18) + 272); /*0xf42d7*/
    v20 = *(_BYTE *)(*(_QWORD *)(a1 + 16) + 328LL); /*0xf42ea*/
    v43 = 0; /*0xf42f4*/
    v44 = 0; /*0xf42f8*/
    v45 = 15; /*0xf42fc*/
    LOBYTE(v43) = 0; /*0xf4304*/
    v21 = "Conversation unlocked"; /*0xf430f*/
    if ( v20 ) /*0xf4318*/
      v21 = "Conversation locked"; /*0xf4318*/
    v40 = 0; /*0xf431c*/
    v41 = 0; /*0xf4320*/
    v42 = 0; /*0xf4324*/
    v22 = -1; /*0xf4328*/
    do /*0xf4333*/
      ++v22; /*0xf4330*/
    while ( v21[v22] ); /*0xf4333*/
    sub_3C230(&v40); /*0xf433e*/
    v23 = *v19; /*0xf4343*/
    v26 = sub_3A4CA0(&v40, v24, v25, 150, &v43); /*0xf4369*/
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(v23 + 456))(v19, v26, 1000); /*0xf437a*/
    goto LABEL_22; /*0xf4380*/
  }
  if ( a3 <= 0x12 ) /*0xf4188*/
  {
    v6 = 264226; /*0xf418e*/
    if ( _bittest(&v6, a3) ) /*0xf4193*/
    {
      v7 = *(_QWORD *)(a1 + 24); /*0xf419c*/
      if ( v7 ) /*0xf41a3*/
      {
        sub_E0D70(*(_QWORD *)(a1 + 24), 0); /*0xf41aa*/
        *(_QWORD *)(a1 + 24) = 0; /*0xf41af*/
      }
      v8 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(v5) + 272); /*0xf41b9*/
      switch ( a3 ) /*0xf41cb*/
      {
        case 0xBu: /*0xf41cb*/
          v9 = "Request cancelled"; /*0xf41cd*/
          break;
        case 5u: /*0xf41cb*/
          v9 = "Left group chat"; /*0xf41db*/
          break;
        case 0x12u: /*0xf41cb*/
          v9 = "Group chat removed"; /*0xf41e9*/
          break;
        default:
          v9 = "Messages cleared"; /*0xf41f9*/
          if ( !*(_DWORD *)(a1 + 36) ) /*0xf4200*/
            v9 = "Left conversation"; /*0xf4204*/
          break;
      }
      v40 = 0; /*0xf420b*/
      v41 = 0; /*0xf420f*/
      v42 = 15; /*0xf4213*/
      LOBYTE(v40) = 0; /*0xf421b*/
      v43 = 0; /*0xf421f*/
      v44 = 0; /*0xf4223*/
      v45 = 0; /*0xf4227*/
      v10 = -1; /*0xf422b*/
      do /*0xf4235*/
        ++v10; /*0xf4232*/
      while ( v9[v10] ); /*0xf4235*/
      sub_3C230(&v43); /*0xf4240*/
      v11 = *v8; /*0xf4245*/
      v14 = sub_3A4CA0(&v43, v12, v13, 150, &v40); /*0xf426b*/
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v11 + 456))(v8, v14, 1000); /*0xf427c*/
      if ( v7 ) /*0xf4285*/
        goto LABEL_22; /*0xf4285*/
      goto LABEL_21; /*0xf4285*/
    }
  }
}

// [4/11] Address: 0xf4510
// Method: ThreadOptionsPopup::threadUpdateFailed
// Hidden C++ exception states: #wind=1
__int64 __fastcall ThreadOptionsPopup_threadUpdateFailed(__int64 a1, int a2, int a3)
{
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 *v8; // rbx
  __int64 *v9; // rdi
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rcx
  __int128 v16; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+40h] [rbp-38h]
  __int64 v18; // [rsp+48h] [rbp-30h]
  __int128 v19; // [rsp+50h] [rbp-28h] BYREF
  __int64 v20; // [rsp+60h] [rbp-18h]
  __int64 v21; // [rsp+68h] [rbp-10h]

  v5 = a1 - 1000; /*0xf4525*/
  result = *(_QWORD *)(v5 + 1016); /*0xf452c*/
  if ( a2 == *(_DWORD *)(result + 56) && a3 == *(_DWORD *)(a1 + 32) ) /*0xf4540*/
  {
    *(_DWORD *)(a1 + 32) = 0; /*0xf4548*/
    result = SupportLayer_onRequestAccess(v5); /*0xf454b*/
    if ( !byte_9037D9 ) /*0xf4557*/
    {
      if ( a3 == 18 ) /*0xf4560*/
      {
        v8 = (__int64 *)"Remove failed"; /*0xf4562*/
      }
      else if ( a3 == 5 || a3 == 1 && !*(_DWORD *)(a1 + 36) ) /*0xf4575*/
      {
        v8 = (__int64 *)"Leave failed"; /*0xf4591*/
      }
      else
      {
        v8 = &qword_721CD0; /*0xf4581*/
        if ( a3 == 1 ) /*0xf458b*/
          v8 = &qword_71C198; /*0xf458b*/
      }
      v9 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(v7) + 272); /*0xf459e*/
      v16 = 0; /*0xf45b5*/
      v17 = 0; /*0xf45ba*/
      v18 = 15; /*0xf45bf*/
      LOBYTE(v16) = 0; /*0xf45c8*/
      v19 = 0; /*0xf45cd*/
      v20 = 0; /*0xf45d2*/
      v21 = 0; /*0xf45d7*/
      v10 = -1; /*0xf45dc*/
      do /*0xf45e6*/
        ++v10; /*0xf45e3*/
      while ( *((_BYTE *)v8 + v10) ); /*0xf45e6*/
      sub_3C230(&v19); /*0xf45f5*/
      v11 = *v9; /*0xf45fa*/
      v14 = sub_3A4CA0(&v19, v12, v13, 150, &v16); /*0xf4622*/
      return (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v11 + 456))(v9, v14, 1000); /*0xf4633*/
    }
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 24); /*0xf464b*/
    if ( v15 ) /*0xf4652*/
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v15 + 672) + 72LL))(v15 + 672); /*0xf465e*/
  }
  return result; /*0xf4639*/
}

// [5/11] Address: 0xf4680
// Method: ThreadOptionsPopup::threadMessagesFinished
// Hidden C++ exception states: #wind=2
void __fastcall ThreadOptionsPopup_threadMessagesFinished(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rax
  void *v5; // [rsp+30h] [rbp+8h]

  v1 = a1; /*0xf4694*/
  v2 = *(_QWORD *)(a1 + 24); /*0xf4697*/
  if ( v2 ) /*0xf469e*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 672) + 16LL))(v2 + 672); /*0xf46aa*/
  if ( *(_DWORD *)(v1 + 32) ) /*0xf46ad*/
  {
    v3 = v1; /*0xf46ba*/
    if ( v1 == 1000 ) /*0xf46c2*/
      v3 = 0; /*0xf46c2*/
    v4 = *(_QWORD *)&qword_905FB0; /*0xf46c6*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xf46d0*/
    {
      v5 = operator new(0x690u); /*0xf46dc*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v5); /*0xf46ea*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xf46fb*/
      v4 = *(_QWORD *)&qword_905FB0; /*0xf46fd*/
    }
    if ( *(_QWORD *)(v4 + 1392) != v3 ) /*0xf470b*/
    {
      if ( v1 == 1000 ) /*0xf4710*/
        v1 = 0; /*0xf4710*/
      *(_QWORD *)(v4 + 1392) = v1; /*0xf4714*/
    }
  }
}

// [6/11] Address: 0xf4730
// Method: ThreadOptionsPopup::threadMessagesFailed
void __fastcall ThreadOptionsPopup_threadMessagesFailed(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rax
  void *v5; // [rsp+30h] [rbp+8h]

  v1 = a1; /*0xf4744*/
  v2 = *(_QWORD *)(a1 + 24); /*0xf4747*/
  if ( v2 ) /*0xf474e*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 672) + 24LL))(v2 + 672); /*0xf475a*/
  if ( *(_DWORD *)(v1 + 32) ) /*0xf475d*/
  {
    v3 = v1; /*0xf476a*/
    if ( v1 == 1000 ) /*0xf4772*/
      v3 = 0; /*0xf4772*/
    v4 = *(_QWORD *)&qword_905FB0; /*0xf4776*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xf4780*/
    {
      v5 = operator new(0x690u); /*0xf478c*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v5); /*0xf479a*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xf47ab*/
      v4 = *(_QWORD *)&qword_905FB0; /*0xf47ad*/
    }
    if ( *(_QWORD *)(v4 + 1392) != v3 ) /*0xf47bb*/
    {
      if ( v1 == 1000 ) /*0xf47c0*/
        v1 = 0; /*0xf47c0*/
      *(_QWORD *)(v4 + 1392) = v1; /*0xf47c4*/
    }
  }
}

// [7/11] Address: 0xf47e0
// Method: ThreadOptionsPopup::threadSearchFinished
void __fastcall ThreadOptionsPopup_threadSearchFinished(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rax
  void *v5; // [rsp+30h] [rbp+8h]

  v1 = a1; /*0xf47f4*/
  v2 = *(_QWORD *)(a1 + 24); /*0xf47f7*/
  if ( v2 ) /*0xf47fe*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 672) + 32LL))(v2 + 672); /*0xf480a*/
  if ( *(_DWORD *)(v1 + 32) ) /*0xf480d*/
  {
    v3 = v1; /*0xf481a*/
    if ( v1 == 1000 ) /*0xf4822*/
      v3 = 0; /*0xf4822*/
    v4 = *(_QWORD *)&qword_905FB0; /*0xf4826*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xf4830*/
    {
      v5 = operator new(0x690u); /*0xf483c*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v5); /*0xf484a*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xf485b*/
      v4 = *(_QWORD *)&qword_905FB0; /*0xf485d*/
    }
    if ( *(_QWORD *)(v4 + 1392) != v3 ) /*0xf486b*/
    {
      if ( v1 == 1000 ) /*0xf4870*/
        v1 = 0; /*0xf4870*/
      *(_QWORD *)(v4 + 1392) = v1; /*0xf4874*/
    }
  }
}

// [8/11] Address: 0xf4890
// Method: ThreadOptionsPopup::threadSearchFailed
void __fastcall ThreadOptionsPopup_threadSearchFailed(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rax
  void *v5; // [rsp+30h] [rbp+8h]

  v1 = a1; /*0xf48a4*/
  v2 = *(_QWORD *)(a1 + 24); /*0xf48a7*/
  if ( v2 ) /*0xf48ae*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 672) + 40LL))(v2 + 672); /*0xf48ba*/
  if ( *(_DWORD *)(v1 + 32) ) /*0xf48bd*/
  {
    v3 = v1; /*0xf48ca*/
    if ( v1 == 1000 ) /*0xf48d2*/
      v3 = 0; /*0xf48d2*/
    v4 = *(_QWORD *)&qword_905FB0; /*0xf48d6*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xf48e0*/
    {
      v5 = operator new(0x690u); /*0xf48ec*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v5); /*0xf48fa*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xf490b*/
      v4 = *(_QWORD *)&qword_905FB0; /*0xf490d*/
    }
    if ( *(_QWORD *)(v4 + 1392) != v3 ) /*0xf491b*/
    {
      if ( v1 == 1000 ) /*0xf4920*/
        v1 = 0; /*0xf4920*/
      *(_QWORD *)(v4 + 1392) = v1; /*0xf4924*/
    }
  }
}

// [9/11] Address: 0xf4940
// Method: ThreadOptionsPopup::threadSendFinished
void __fastcall ThreadOptionsPopup_threadSendFinished(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rax
  void *v5; // [rsp+30h] [rbp+8h]

  v1 = a1; /*0xf4954*/
  v2 = *(_QWORD *)(a1 + 24); /*0xf4957*/
  if ( v2 ) /*0xf495e*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 672) + 48LL))(v2 + 672); /*0xf496a*/
  if ( *(_DWORD *)(v1 + 32) ) /*0xf496d*/
  {
    v3 = v1; /*0xf497a*/
    if ( v1 == 1000 ) /*0xf4982*/
      v3 = 0; /*0xf4982*/
    v4 = *(_QWORD *)&qword_905FB0; /*0xf4986*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xf4990*/
    {
      v5 = operator new(0x690u); /*0xf499c*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v5); /*0xf49aa*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xf49bb*/
      v4 = *(_QWORD *)&qword_905FB0; /*0xf49bd*/
    }
    if ( *(_QWORD *)(v4 + 1392) != v3 ) /*0xf49cb*/
    {
      if ( v1 == 1000 ) /*0xf49d0*/
        v1 = 0; /*0xf49d0*/
      *(_QWORD *)(v4 + 1392) = v1; /*0xf49d4*/
    }
  }
}

// [10/11] Address: 0xf49f0
// Method: ThreadOptionsPopup::threadSendFailed
void __fastcall ThreadOptionsPopup_threadSendFailed(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rax
  void *v5; // [rsp+30h] [rbp+8h]

  v1 = a1; /*0xf4a04*/
  v2 = *(_QWORD *)(a1 + 24); /*0xf4a07*/
  if ( v2 ) /*0xf4a0e*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 672) + 56LL))(v2 + 672); /*0xf4a1a*/
  if ( *(_DWORD *)(v1 + 32) ) /*0xf4a1d*/
  {
    v3 = v1; /*0xf4a2a*/
    if ( v1 == 1000 ) /*0xf4a32*/
      v3 = 0; /*0xf4a32*/
    v4 = *(_QWORD *)&qword_905FB0; /*0xf4a36*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xf4a40*/
    {
      v5 = operator new(0x690u); /*0xf4a4c*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v5); /*0xf4a5a*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xf4a6b*/
      v4 = *(_QWORD *)&qword_905FB0; /*0xf4a6d*/
    }
    if ( *(_QWORD *)(v4 + 1392) != v3 ) /*0xf4a7b*/
    {
      if ( v1 == 1000 ) /*0xf4a80*/
        v1 = 0; /*0xf4a80*/
      *(_QWORD *)(v4 + 1392) = v1; /*0xf4a84*/
    }
  }
}

// [11/11] Address: 0xf4b40
// Method: ThreadOptionsPopup::onClose
__int64 __fastcall ThreadOptionsPopup_onClose(__int64 a1)
{
  __int64 v2; // rdx

  SupportLayer_onRequestAccess(a1); /*0xf4b49*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0xf4b56*/
  LOBYTE(v2) = 1; /*0xf4b5f*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 520LL))(a1, v2);
}
