#include <Geode/binding/RenameThreadPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/10] Address: 0xd2130
// Method: RenameThreadPopup::~RenameThreadPopup
char *__fastcall RenameThreadPopup__dtor_RenameThreadPopup(char *Block, char a2)
{
  char *v4; // rdi
  __int64 v5; // rax
  void *v6; // rax
  cocos2d::CCObject *v7; // rcx
  __int64 v8; // rax

  *(_QWORD *)Block = &RenameThreadPopup::`vftable'; /*0xd214b*/
  *((_QWORD *)Block + 40) = &RenameThreadPopup::`vftable'; /*0xd2155*/
  *((_QWORD *)Block + 41) = &RenameThreadPopup::`vftable'; /*0xd2163*/
  *((_QWORD *)Block + 42) = &RenameThreadPopup::`vftable'; /*0xd2171*/
  *((_QWORD *)Block + 43) = &RenameThreadPopup::`vftable'; /*0xd217f*/
  *((_QWORD *)Block + 44) = &RenameThreadPopup::`vftable'; /*0xd218d*/
  *((_QWORD *)Block + 51) = &RenameThreadPopup::`vftable'; /*0xd219b*/
  *((_QWORD *)Block + 54) = &RenameThreadPopup::`vftable'; /*0xd21a9*/
  *((_QWORD *)Block + 68) = &RenameThreadPopup::`vftable'; /*0xd21b7*/
  *((_QWORD *)Block + 83) = &RenameThreadPopup::`vftable'; /*0xd21c5*/
  *((_QWORD *)Block + 84) = &RenameThreadPopup::`vftable'; /*0xd21d3*/
  v4 = Block + 1000; /*0xd21da*/
  *((_QWORD *)Block + 125) = &RenameThreadPopup::`vftable'; /*0xd21e8*/
  v5 = *(_QWORD *)&qword_905FB0; /*0xd21eb*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0xd21f5*/
  {
    v6 = operator new(0x690u); /*0xd21fc*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v6); /*0xd2209*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xd221a*/
    v5 = *(_QWORD *)&qword_905FB0; /*0xd221c*/
  }
  if ( *(char **)(v5 + 1392) == v4 ) /*0xd222a*/
    *(_QWORD *)(v5 + 1392) = 0; /*0xd222c*/
  v7 = (cocos2d::CCObject *)*((_QWORD *)Block + 126); /*0xd2237*/
  if ( v7 ) /*0xd2241*/
    cocos2d::CCObject::release(v7); /*0xd2243*/
  v8 = *((_QWORD *)Block + 128); /*0xd2249*/
  if ( v8 ) /*0xd2253*/
    *(_QWORD *)(v8 + 608) = 0; /*0xd2255*/
  sub_3C310(Block + 1032); /*0xd2267*/
  UIPOptionsLayer__dtor_UIPOptionsLayer((cocos2d::CCNode *)Block); /*0xd226f*/
  if ( (a2 & 1) != 0 ) /*0xd2279*/
    j_j_free(Block); /*0xd2283*/
  return Block; /*0xd228b*/
}

// [2/10] Address: 0xf8650
// Method: RenameThreadPopup::threadUpdateFinished
// Hidden C++ exception states: #wind=4
void __fastcall RenameThreadPopup_threadUpdateFinished(__int64 a1, int a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  void **v7; // rcx
  void **v8; // rdx
  __int64 v9; // rax
  void **v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  cocos2d::CCNotificationCenter *v14; // rax
  __int64 v15; // rcx
  void *v16; // [rsp+20h] [rbp-38h]
  void *v17; // [rsp+20h] [rbp-38h]
  void *Src[2]; // [rsp+28h] [rbp-30h] BYREF
  size_t Size; // [rsp+38h] [rbp-20h]
  unsigned __int64 v20; // [rsp+40h] [rbp-18h]

  if ( a3 == 2 && a2 == *(_DWORD *)(*(_QWORD *)(a1 + 8) + 56LL) && *(_BYTE *)(a1 + 64) ) /*0xf8683*/
  {
    *(_BYTE *)(a1 + 64) = 0; /*0xf868d*/
    v4 = *(_QWORD *)&qword_905FB0; /*0xf8691*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xf869b*/
    {
      v16 = operator new(0x690u); /*0xf86a7*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v16); /*0xf86b5*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xf86c6*/
      v4 = *(_QWORD *)&qword_905FB0; /*0xf86c8*/
    }
    v5 = a1 + 32; /*0xf86d7*/
    if ( *(_QWORD *)(v4 + 632) ) /*0xf86cf*/
      v5 = v4 + 616; /*0xf86dd*/
    sub_3E4F0(Src, v5); /*0xf86e9*/
    if ( Size ) /*0xf86f7*/
    {
      v7 = (void **)(*(_QWORD *)(a1 + 8) + 96LL); /*0xf86fd*/
      if ( v7 != Src ) /*0xf8709*/
      {
        v8 = Src; /*0xf870b*/
        if ( v20 > 0xF ) /*0xf8716*/
          v8 = (void **)Src[0]; /*0xf8716*/
        sub_3F5A0(v7, v8, Size); /*0xf871c*/
      }
      v9 = *(_QWORD *)(a1 + 16); /*0xf8721*/
      if ( v9 ) /*0xf8728*/
      {
        v7 = *(void ***)(v9 + 880); /*0xf872a*/
        if ( v7 ) /*0xf8734*/
        {
          v10 = Src; /*0xf8736*/
          if ( v20 > 0xF ) /*0xf8741*/
            v10 = (void **)Src[0]; /*0xf8741*/
          (*(void (__fastcall **)(void **, void **))v7[45])(v7 + 45, v10); /*0xf8751*/
          sub_E0F80(*(_QWORD *)(a1 + 16)); /*0xf8757*/
        }
      }
    }
    v11 = *(_QWORD *)(a1 + 16); /*0xf875c*/
    if ( v11 ) /*0xf8763*/
    {
      v12 = v11 + 672; /*0xf8765*/
      v13 = *(_QWORD *)&qword_905FB0; /*0xf876c*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0xf8776*/
      {
        v17 = operator new(0x690u); /*0xf8782*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v17); /*0xf8790*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xf87a1*/
        v13 = *(_QWORD *)&qword_905FB0; /*0xf87a3*/
      }
      *(_QWORD *)(v13 + 1392) = v12; /*0xf87aa*/
    }
    else
    {
      v14 = (cocos2d::CCNotificationCenter *)cocos2d::CCNotificationCenter::sharedNotificationCenter(v7, v6); /*0xf87b3*/
      cocos2d::CCNotificationCenter::postNotification(v14, "ThreadsChangedNotification", 0); /*0xf87c6*/
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 1000) + 1104LL))(a1 - 1000, 0); /*0xf87d8*/
    sub_3C310(Src); /*0xf87e4*/
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 16); /*0xf87eb*/
    if ( v15 ) /*0xf87f2*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v15 + 672) + 64LL))(v15 + 672); /*0xf87fe*/
  }
}

// [3/10] Address: 0xf8820
// Method: RenameThreadPopup::threadUpdateFailed
// Hidden C++ exception states: #wind=1
void __fastcall RenameThreadPopup_threadUpdateFailed(__int64 a1, int a2, int a3)
{
  __int64 v3; // rcx
  __int64 *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  _WORD v10[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v11; // [rsp+40h] [rbp-38h]
  __int64 v12; // [rsp+48h] [rbp-30h]
  __int128 v13; // [rsp+50h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp-18h]
  __int64 v15; // [rsp+68h] [rbp-10h]

  if ( a3 == 2 && a2 == *(_DWORD *)(*(_QWORD *)(a1 + 8) + 56LL) && *(_BYTE *)(a1 + 64) ) /*0xf8841*/
  {
    *(_BYTE *)(a1 + 64) = 0; /*0xf884b*/
    sub_F8D70(a1 - 1000); /*0xf8856*/
    if ( !byte_9037D9 ) /*0xf8862*/
    {
      v4 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(v3) + 272); /*0xf886e*/
      v13 = 0; /*0xf8885*/
      v14 = 0; /*0xf888c*/
      v15 = 15; /*0xf8891*/
      LOBYTE(v13) = 0; /*0xf889a*/
      v10[7] = 0; /*0xf889e*/
      v11 = 13; /*0xf88a3*/
      v12 = 15; /*0xf88ac*/
      strcpy((char *)v10, "Rename failed"); /*0xf88bd*/
      v5 = *v4; /*0xf88dd*/
      v8 = sub_3A4CA0(v10, v6, v7, 150, &v13); /*0xf8905*/
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v5 + 456))(v4, v8, 1000); /*0xf8916*/
    }
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 16); /*0xf892a*/
    if ( v9 ) /*0xf8931*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v9 + 672) + 72LL))(v9 + 672); /*0xf893d*/
  }
}

// [4/10] Address: 0xf8950
// Method: RenameThreadPopup::threadMessagesFinished
void __fastcall RenameThreadPopup_threadMessagesFinished(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rax
  void *v5; // [rsp+30h] [rbp+8h]

  v1 = a1; /*0xf8964*/
  v2 = *(_QWORD *)(a1 + 16); /*0xf8967*/
  if ( v2 ) /*0xf896e*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 672) + 16LL))(v2 + 672); /*0xf897a*/
  if ( *(_BYTE *)(v1 + 64) ) /*0xf897d*/
  {
    v3 = v1; /*0xf898a*/
    if ( v1 == 1000 ) /*0xf8992*/
      v3 = 0; /*0xf8992*/
    v4 = *(_QWORD *)&qword_905FB0; /*0xf8996*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xf89a0*/
    {
      v5 = operator new(0x690u); /*0xf89ac*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v5); /*0xf89ba*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xf89cb*/
      v4 = *(_QWORD *)&qword_905FB0; /*0xf89cd*/
    }
    if ( *(_QWORD *)(v4 + 1392) != v3 ) /*0xf89db*/
    {
      if ( v1 == 1000 ) /*0xf89e0*/
        v1 = 0; /*0xf89e0*/
      *(_QWORD *)(v4 + 1392) = v1; /*0xf89e4*/
    }
  }
}

// [5/10] Address: 0xf8a00
// Method: RenameThreadPopup::threadMessagesFailed
void __fastcall RenameThreadPopup_threadMessagesFailed(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rax
  void *v5; // [rsp+30h] [rbp+8h]

  v1 = a1; /*0xf8a14*/
  v2 = *(_QWORD *)(a1 + 16); /*0xf8a17*/
  if ( v2 ) /*0xf8a1e*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 672) + 24LL))(v2 + 672); /*0xf8a2a*/
  if ( *(_BYTE *)(v1 + 64) ) /*0xf8a2d*/
  {
    v3 = v1; /*0xf8a3a*/
    if ( v1 == 1000 ) /*0xf8a42*/
      v3 = 0; /*0xf8a42*/
    v4 = *(_QWORD *)&qword_905FB0; /*0xf8a46*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xf8a50*/
    {
      v5 = operator new(0x690u); /*0xf8a5c*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v5); /*0xf8a6a*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xf8a7b*/
      v4 = *(_QWORD *)&qword_905FB0; /*0xf8a7d*/
    }
    if ( *(_QWORD *)(v4 + 1392) != v3 ) /*0xf8a8b*/
    {
      if ( v1 == 1000 ) /*0xf8a90*/
        v1 = 0; /*0xf8a90*/
      *(_QWORD *)(v4 + 1392) = v1; /*0xf8a94*/
    }
  }
}

// [6/10] Address: 0xf8ab0
// Method: RenameThreadPopup::threadSearchFinished
void __fastcall RenameThreadPopup_threadSearchFinished(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rax
  void *v5; // [rsp+30h] [rbp+8h]

  v1 = a1; /*0xf8ac4*/
  v2 = *(_QWORD *)(a1 + 16); /*0xf8ac7*/
  if ( v2 ) /*0xf8ace*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 672) + 32LL))(v2 + 672); /*0xf8ada*/
  if ( *(_BYTE *)(v1 + 64) ) /*0xf8add*/
  {
    v3 = v1; /*0xf8aea*/
    if ( v1 == 1000 ) /*0xf8af2*/
      v3 = 0; /*0xf8af2*/
    v4 = *(_QWORD *)&qword_905FB0; /*0xf8af6*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xf8b00*/
    {
      v5 = operator new(0x690u); /*0xf8b0c*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v5); /*0xf8b1a*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xf8b2b*/
      v4 = *(_QWORD *)&qword_905FB0; /*0xf8b2d*/
    }
    if ( *(_QWORD *)(v4 + 1392) != v3 ) /*0xf8b3b*/
    {
      if ( v1 == 1000 ) /*0xf8b40*/
        v1 = 0; /*0xf8b40*/
      *(_QWORD *)(v4 + 1392) = v1; /*0xf8b44*/
    }
  }
}

// [7/10] Address: 0xf8b60
// Method: RenameThreadPopup::threadSearchFailed
void __fastcall RenameThreadPopup_threadSearchFailed(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rax
  void *v5; // [rsp+30h] [rbp+8h]

  v1 = a1; /*0xf8b74*/
  v2 = *(_QWORD *)(a1 + 16); /*0xf8b77*/
  if ( v2 ) /*0xf8b7e*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 672) + 40LL))(v2 + 672); /*0xf8b8a*/
  if ( *(_BYTE *)(v1 + 64) ) /*0xf8b8d*/
  {
    v3 = v1; /*0xf8b9a*/
    if ( v1 == 1000 ) /*0xf8ba2*/
      v3 = 0; /*0xf8ba2*/
    v4 = *(_QWORD *)&qword_905FB0; /*0xf8ba6*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xf8bb0*/
    {
      v5 = operator new(0x690u); /*0xf8bbc*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v5); /*0xf8bca*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xf8bdb*/
      v4 = *(_QWORD *)&qword_905FB0; /*0xf8bdd*/
    }
    if ( *(_QWORD *)(v4 + 1392) != v3 ) /*0xf8beb*/
    {
      if ( v1 == 1000 ) /*0xf8bf0*/
        v1 = 0; /*0xf8bf0*/
      *(_QWORD *)(v4 + 1392) = v1; /*0xf8bf4*/
    }
  }
}

// [8/10] Address: 0xf8c10
// Method: RenameThreadPopup::threadSendFinished
void __fastcall RenameThreadPopup_threadSendFinished(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rax
  void *v5; // [rsp+30h] [rbp+8h]

  v1 = a1; /*0xf8c24*/
  v2 = *(_QWORD *)(a1 + 16); /*0xf8c27*/
  if ( v2 ) /*0xf8c2e*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 672) + 48LL))(v2 + 672); /*0xf8c3a*/
  if ( *(_BYTE *)(v1 + 64) ) /*0xf8c3d*/
  {
    v3 = v1; /*0xf8c4a*/
    if ( v1 == 1000 ) /*0xf8c52*/
      v3 = 0; /*0xf8c52*/
    v4 = *(_QWORD *)&qword_905FB0; /*0xf8c56*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xf8c60*/
    {
      v5 = operator new(0x690u); /*0xf8c6c*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v5); /*0xf8c7a*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xf8c8b*/
      v4 = *(_QWORD *)&qword_905FB0; /*0xf8c8d*/
    }
    if ( *(_QWORD *)(v4 + 1392) != v3 ) /*0xf8c9b*/
    {
      if ( v1 == 1000 ) /*0xf8ca0*/
        v1 = 0; /*0xf8ca0*/
      *(_QWORD *)(v4 + 1392) = v1; /*0xf8ca4*/
    }
  }
}

// [9/10] Address: 0xf8cc0
// Method: RenameThreadPopup::threadSendFailed
void __fastcall RenameThreadPopup_threadSendFailed(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rax
  void *v5; // [rsp+30h] [rbp+8h]

  v1 = a1; /*0xf8cd4*/
  v2 = *(_QWORD *)(a1 + 16); /*0xf8cd7*/
  if ( v2 ) /*0xf8cde*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 672) + 56LL))(v2 + 672); /*0xf8cea*/
  if ( *(_BYTE *)(v1 + 64) ) /*0xf8ced*/
  {
    v3 = v1; /*0xf8cfa*/
    if ( v1 == 1000 ) /*0xf8d02*/
      v3 = 0; /*0xf8d02*/
    v4 = *(_QWORD *)&qword_905FB0; /*0xf8d06*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xf8d10*/
    {
      v5 = operator new(0x690u); /*0xf8d1c*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v5); /*0xf8d2a*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xf8d3b*/
      v4 = *(_QWORD *)&qword_905FB0; /*0xf8d3d*/
    }
    if ( *(_QWORD *)(v4 + 1392) != v3 ) /*0xf8d4b*/
    {
      if ( v1 == 1000 ) /*0xf8d50*/
        v1 = 0; /*0xf8d50*/
      *(_QWORD *)(v4 + 1392) = v1; /*0xf8d54*/
    }
  }
}

// [10/10] Address: 0xf8e10
// Method: RenameThreadPopup::onClose
__int64 __fastcall RenameThreadPopup_onClose(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  sub_F8D70(a1); /*0xf8e19*/
  v2 = a1[128]; /*0xf8e1e*/
  if ( v2 ) /*0xf8e28*/
  {
    *(_QWORD *)(v2 + 608) = 0; /*0xf8e2a*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a1[128] + 1032LL))(a1[128], 0); /*0xf8e41*/
  }
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 992LL))(a1, 0); /*0xf8e4f*/
  LOBYTE(v3) = 1; /*0xf8e58*/
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 520LL))(a1, v3);
}
