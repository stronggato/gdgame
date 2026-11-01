#include <Geode/binding/GJComment.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x17aa70
// Method: GJComment::create
// Hidden C++ exception states: #wind=2
void __fastcall GJComment_create(__int64 a1)
{
  int v2; // r14d
  __int64 v3; // rbx
  __int64 v4; // rbx
  void **v5; // rcx
  void **v6; // rdx
  void **v7; // rcx
  char *v8; // rcx
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // rcx
  cocos2d::CCArray *v14; // rsi
  unsigned int i; // edi
  struct cocos2d::CCObject *v16; // r15
  int v17; // ebx
  unsigned int j; // edi
  int v19; // ebx
  char v20[8]; // [rsp+28h] [rbp-61h] BYREF
  __int64 v21; // [rsp+30h] [rbp-59h]
  __int64 v22; // [rsp+38h] [rbp-51h]
  __int64 v23; // [rsp+40h] [rbp-49h]
  void *Src[5]; // [rsp+48h] [rbp-41h] BYREF
  _BYTE Buf1[16]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v26; // [rsp+80h] [rbp-9h]
  _BYTE v27[32]; // [rsp+90h] [rbp+7h] BYREF

  v2 = 0; /*0x17aaa5*/
  sub_3E4F0(Buf1, *(_QWORD *)(a1 + 472) + 344LL); /*0x17aaba*/
  v3 = v26; /*0x17aabf*/
  sub_3C310(Buf1); /*0x17aac7*/
  if ( !v3 ) /*0x17aacf*/
  {
    sub_3E4F0(Buf1, *(_QWORD *)(a1 + 472) + 1232LL); /*0x17aae8*/
    v4 = v26; /*0x17aaed*/
    sub_3C310(Buf1); /*0x17aaf5*/
    if ( v4 ) /*0x17aafd*/
    {
      sub_3E4F0(Src, *(_QWORD *)(a1 + 472) + 1232LL); /*0x17ab12*/
      v5 = (void **)(*(_QWORD *)(a1 + 472) + 344LL); /*0x17ab27*/
      if ( v5 != Src ) /*0x17ab35*/
      {
        v6 = Src; /*0x17ab37*/
        if ( Src[3] > (char *)&loc_D + 2 ) /*0x17ab40*/
          v6 = (void **)Src[0]; /*0x17ab40*/
        sub_3F5A0(v5, v6, (size_t)Src[2]); /*0x17ab49*/
      }
      v7 = Src; /*0x17ab4f*/
    }
    else
    {
      v21 = 0; /*0x17ab55*/
      v22 = 7; /*0x17ab59*/
      v23 = 15; /*0x17ab61*/
      strcpy(v20, "Unknown"); /*0x17ab70*/
      v8 = (char *)(*(_QWORD *)(a1 + 472) + 344LL); /*0x17ab9c*/
      if ( v8 != v20 ) /*0x17abaa*/
        sub_3F5A0(v8, v20, 7u); /*0x17abb6*/
      v7 = (void **)v20; /*0x17abbc*/
    }
    sub_3C310(v7); /*0x17abc0*/
  }
  sub_3E4F0(Buf1, *(_QWORD *)(a1 + 472) + 344LL); /*0x17abd8*/
  v9 = sub_3C160(Buf1, (void *)(a1 + 504)); /*0x17abee*/
  sub_3C310(Buf1); /*0x17abf4*/
  if ( v9 ) /*0x17abfb*/
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 472) + 684LL) = 0; /*0x17ac09*/
    sub_3E4F0(Buf1, *(_QWORD *)(a1 + 472) + 344LL); /*0x17ac2b*/
    Src[4] = Buf1; /*0x17ac34*/
    v12 = sub_466AC0(v11, v10); /*0x17ac3d*/
    v14 = (cocos2d::CCArray *)cocos2d::CCArray::create(v13); /*0x17ac46*/
    for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(v12 + 368)); ++i ) /*0x17ac53*/
    {
      v16 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(v12 + 368), i); /*0x17ac6f*/
      sub_3E4F0(v27, (char *)v16 + 344); /*0x17ac7d*/
      v17 = sub_3C160(v27, Buf1); /*0x17ac8f*/
      sub_3C310(v27); /*0x17ac95*/
      if ( !v17 ) /*0x17ac9c*/
        cocos2d::CCArray::addObject(v14, v16); /*0x17aca4*/
    }
    sub_3C310(Buf1); /*0x17acc1*/
    if ( cocos2d::CCArray::count(v14) > 1 ) /*0x17acd2*/
    {
      for ( j = 0; j < cocos2d::CCArray::count(v14); v2 = v19 ) /*0x17acda*/
      {
        v19 = *((_DWORD *)cocos2d::CCArray::objectAtIndex(v14, j) + 171); /*0x17acef*/
        if ( v2 > v19 ) /*0x17acf8*/
          v19 = v2; /*0x17acf8*/
        ++j; /*0x17acfc*/
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 472) + 684LL) = v2 + 1; /*0x17ad1a*/
    }
  }
}

// [2/2] Address: 0x26e2b0
// Method: GJComment::init
char __fastcall GJComment_init(__int64 a1)
{
  sub_3F5A0((void *)(a1 + 320), &byte_6E86E0, 0); /*0x26e2ca*/
  sub_3F5A0((void *)(a1 + 408), &byte_6E86E0, 0); /*0x26e2e0*/
  return 1; /*0x26e2e7*/
}
