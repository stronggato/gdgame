#include <Geode/binding/SetIDPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/6] Address: 0x395e40
// Method: SetIDPopup::SetIDPopup
__int64 __fastcall SetIDPopup_SetIDPopup(__int64 a1)
{
  FLAlertLayer_FLAlertLayer(a1); /*0x395e49*/
  *(_QWORD *)(a1 + 684) = 1000; /*0x395e55*/
  *(_QWORD *)a1 = &SetIDPopup::`vftable'; /*0x395e60*/
  *(_QWORD *)(a1 + 320) = &SetIDPopup::`vftable'; /*0x395e6a*/
  *(_QWORD *)(a1 + 328) = &SetIDPopup::`vftable'; /*0x395e78*/
  *(_QWORD *)(a1 + 336) = &SetIDPopup::`vftable'; /*0x395e86*/
  *(_QWORD *)(a1 + 344) = &SetIDPopup::`vftable'; /*0x395e94*/
  *(_QWORD *)(a1 + 352) = &SetIDPopup::`vftable'; /*0x395ea2*/
  *(_QWORD *)(a1 + 408) = &SetIDPopup::`vftable'; /*0x395eb0*/
  *(_QWORD *)(a1 + 432) = &SetIDPopup::`vftable'; /*0x395ebe*/
  *(_QWORD *)(a1 + 544) = &SetIDPopup::`vftable'; /*0x395ecc*/
  *(_QWORD *)(a1 + 664) = 0; /*0x395ed5*/
  *(_DWORD *)(a1 + 672) = 0; /*0x395edc*/
  *(_WORD *)(a1 + 676) = 0; /*0x395ee2*/
  *(_DWORD *)(a1 + 680) = 0; /*0x395ee9*/
  *(_QWORD *)(a1 + 696) = 0; /*0x395eef*/
  return a1; /*0x395ef9*/
}

// [3/6] Address: 0x3a1920
// Method: SetIDPopup::create
// Hidden C++ exception states: #wind=4
cocos2d::CCObject *__fastcall SetIDPopup_create(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        int a7,
        int a8,
        char a9)
{
  cocos2d::CCObject *v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rax
  void *v17; // [rsp+60h] [rbp-A8h]
  _BYTE v18[32]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v19[32]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v20; // [rsp+B0h] [rbp-58h]
  __int64 v21; // [rsp+B8h] [rbp-50h]

  v20 = a4; /*0x3a1952*/
  v21 = a5; /*0x3a195e*/
  v17 = operator new(0x2C0u); /*0x3a196c*/
  v13 = (cocos2d::CCObject *)SetIDPopup_SetIDPopup((__int64)v17); /*0x3a1979*/
  if ( v13 ) /*0x3a197f*/
  {
    v14 = sub_3E4F0(v18, a5); /*0x3a199c*/
    v15 = sub_3E4F0(v19, a4); /*0x3a19aa*/
    if ( (unsigned __int8)sub_3A1A60((_DWORD)v13, a1, a2, a3, v15, v14, a6, a7, a8, a9, 0) ) /*0x3a19fd*/
    {
      cocos2d::CCObject::autorelease(v13); /*0x3a1a09*/
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v13 + 8LL))(v13, 1); /*0x3a1a19*/
      v13 = 0; /*0x3a1a1c*/
    }
  }
  sub_3C310(a4); /*0x3a1a21*/
  sub_3C310(a5); /*0x3a1a2a*/
  return v13; /*0x3a1a32*/
}

// [4/6] Address: 0x3a24b0
// Method: SetIDPopup::textChanged
void __fastcall SetIDPopup_textChanged(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  const char *v5; // rcx
  int v6; // eax
  unsigned __int64 v7; // rdx
  char *v8; // rcx
  int v9; // edx
  int v10; // r8d
  int v11; // eax
  int v12; // ecx
  __int64 v13; // rax
  char *String[2]; // [rsp+38h] [rbp-30h] BYREF
  __int128 v15; // [rsp+48h] [rbp-20h]

  if ( !*(_BYTE *)(a1 + 132) ) /*0x3a24c9*/
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a2 + 600) + 600LL) + 8LL))(*(_QWORD *)(a2 + 600) + 600LL); /*0x3a24ea*/
    *(_OWORD *)String = 0; /*0x3a24f3*/
    v4 = -1; /*0x3a24f8*/
    v15 = 0; /*0x3a24ff*/
    do /*0x3a2508*/
      ++v4; /*0x3a2505*/
    while ( *(_BYTE *)(v3 + v4) ); /*0x3a2508*/
    sub_3C230(String); /*0x3a2517*/
    v5 = (const char *)String; /*0x3a2522*/
    if ( *((_QWORD *)&v15 + 1) > 0xFu ) /*0x3a2527*/
      v5 = String[0]; /*0x3a2527*/
    v6 = atoi(v5); /*0x3a252d*/
    v7 = *((_QWORD *)&v15 + 1); /*0x3a2533*/
    *(_DWORD *)(a1 + 128) = v6; /*0x3a2538*/
    if ( v7 > 0xF ) /*0x3a2542*/
    {
      v8 = String[0]; /*0x3a2544*/
      if ( v7 + 1 >= 0x1000 ) /*0x3a2556*/
      {
        v8 = (char *)*((_QWORD *)String[0] - 1); /*0x3a2558*/
        if ( (unsigned __int64)(String[0] - v8 - 8) > 0x1F ) /*0x3a256b*/
          invoke_watson(0, 0, 0, 0, 0); /*0x3a2580*/
      }
      j_j_free(v8); /*0x3a2587*/
    }
    v9 = *(_DWORD *)(a1 + 128); /*0x3a258c*/
    v10 = *(_DWORD *)(a1 + 140); /*0x3a2592*/
    v11 = v10; /*0x3a2599*/
    v12 = *(_DWORD *)(a1 + 136); /*0x3a259c*/
    if ( v10 >= v9 ) /*0x3a25a5*/
      v11 = *(_DWORD *)(a1 + 128); /*0x3a25a5*/
    if ( v12 <= v11 ) /*0x3a25aa*/
    {
      v12 = *(_DWORD *)(a1 + 128); /*0x3a25af*/
      if ( v10 < v9 ) /*0x3a25b1*/
        v12 = *(_DWORD *)(a1 + 140); /*0x3a25b1*/
    }
    v13 = *(_QWORD *)(a1 - 544); /*0x3a25b5*/
    *(_DWORD *)(a1 + 128) = v12; /*0x3a25bc*/
    (*(void (__fastcall **)(__int64))(v13 + 1080))(a1 - 544); /*0x3a25c9*/
  }
}

// [5/6] Address: 0x3a26a0
// Method: SetIDPopup::show
__int64 __fastcall SetIDPopup_show(__int64 a1)
{
  cocos2d::CCScene *v2; // rbx
  int v3; // eax

  v2 = *(cocos2d::CCScene **)(cocos2d::CCDirector::sharedDirector(a1) + 272); /*0x3a26b3*/
  if ( *(_QWORD *)(a1 + 568) ) /*0x3a26ba*/
  {
    v2 = *(cocos2d::CCScene **)(a1 + 568); /*0x3a26c6*/
  }
  else
  {
    if ( cocos2d::CCScene::getHighestChildZ(v2) + 1 >= 105 ) /*0x3a26d9*/
      v3 = cocos2d::CCScene::getHighestChildZ(v2) + 1; /*0x3a26eb*/
    else
      v3 = 105; /*0x3a26db*/
    *(_DWORD *)(a1 + 592) = v3; /*0x3a26ed*/
  }
  if ( !*(_DWORD *)(a1 + 592) ) /*0x3a26f3*/
    *(_DWORD *)(a1 + 592) = 105; /*0x3a26ff*/
  return (*(__int64 (__fastcall **)(cocos2d::CCScene *, __int64))(*(_QWORD *)v2 + 456LL))(v2, a1);
}

// [6/6] Address: 0x3a2880
// Method: SetIDPopup::keyBackClicked
__int64 __fastcall SetIDPopup_keyBackClicked(__int64 a1)
{
  return sub_3A27E0(a1 - 336, 0);
}
