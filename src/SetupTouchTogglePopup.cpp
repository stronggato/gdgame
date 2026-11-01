#include <Geode/binding/SetupTouchTogglePopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/7] Address: 0x3d4290
// Method: SetupTouchTogglePopup::onControlMode
__int64 __fastcall SetupTouchTogglePopup_onControlMode(_QWORD *a1, __int64 a2)
{
  unsigned int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // edi

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x3d42a3*/
  v4 = a1[137]; /*0x3d42a6*/
  v5 = v3; /*0x3d42ad*/
  if ( v4 ) /*0x3d42b2*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 1032LL))(v4, 0); /*0x3d42c0*/
  return (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 1232LL))(a1, v5, 0); /*0x3d42d5*/
}

// [2/7] Address: 0x5f4f10
// Method: SetupTouchTogglePopup::~SetupTouchTogglePopup
cocos2d::CCNode *__fastcall SetupTouchTogglePopup__dtor_SetupTouchTogglePopup(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &SetupTouchTogglePopup::`vftable'; /*0x5f4f23*/
  *((_QWORD *)Block + 40) = &SetupTouchTogglePopup::`vftable'; /*0x5f4f30*/
  *((_QWORD *)Block + 41) = &SetupTouchTogglePopup::`vftable'; /*0x5f4f3e*/
  *((_QWORD *)Block + 42) = &SetupTouchTogglePopup::`vftable'; /*0x5f4f4c*/
  *((_QWORD *)Block + 43) = &SetupTouchTogglePopup::`vftable'; /*0x5f4f5a*/
  *((_QWORD *)Block + 44) = &SetupTouchTogglePopup::`vftable'; /*0x5f4f68*/
  *((_QWORD *)Block + 51) = &SetupTouchTogglePopup::`vftable'; /*0x5f4f76*/
  *((_QWORD *)Block + 54) = &SetupTouchTogglePopup::`vftable'; /*0x5f4f84*/
  *((_QWORD *)Block + 68) = &SetupTouchTogglePopup::`vftable'; /*0x5f4f92*/
  *((_QWORD *)Block + 83) = &SetupTouchTogglePopup::`vftable'; /*0x5f4fa0*/
  *((_QWORD *)Block + 84) = &SetupTouchTogglePopup::`vftable'; /*0x5f4fae*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x5f4fb5*/
  if ( (a2 & 1) != 0 ) /*0x5f4fbd*/
    j_j_free(Block); /*0x5f4fc7*/
  return Block; /*0x5f4fcc*/
}

// [3/7] Address: 0x5f4fe0
// Method: SetupTouchTogglePopup::create
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall SetupTouchTogglePopup_create(__int64 a1)
{
  _QWORD *v2; // rdi

  v2 = operator new(0x428u); /*0x5f5001*/
  SetupTriggerPopup_SetupTriggerPopup((__int64)v2); /*0x5f500c*/
  *v2 = &SetupTouchTogglePopup::`vftable'; /*0x5f5018*/
  v2[40] = &SetupTouchTogglePopup::`vftable'; /*0x5f5022*/
  v2[41] = &SetupTouchTogglePopup::`vftable'; /*0x5f5030*/
  v2[42] = &SetupTouchTogglePopup::`vftable'; /*0x5f503e*/
  v2[43] = &SetupTouchTogglePopup::`vftable'; /*0x5f504c*/
  v2[44] = &SetupTouchTogglePopup::`vftable'; /*0x5f505a*/
  v2[51] = &SetupTouchTogglePopup::`vftable'; /*0x5f5068*/
  v2[54] = &SetupTouchTogglePopup::`vftable'; /*0x5f5076*/
  v2[68] = &SetupTouchTogglePopup::`vftable'; /*0x5f5084*/
  v2[83] = &SetupTouchTogglePopup::`vftable'; /*0x5f5092*/
  v2[84] = &SetupTouchTogglePopup::`vftable'; /*0x5f50a0*/
  *((_DWORD *)v2 + 252) = 0; /*0x5f50a9*/
  *((_BYTE *)v2 + 1012) = 0; /*0x5f50af*/
  v2[127] = 0; /*0x5f50b6*/
  *((_BYTE *)v2 + 1040) = 0; /*0x5f50bd*/
  v2[131] = 0; /*0x5f50c4*/
  v2[132] = 0; /*0x5f50cb*/
  if ( (unsigned __int8)sub_5F5130(v2, a1) ) /*0x5f50d8*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v2); /*0x5f50e4*/
    return v2; /*0x5f50ea*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v2 + 8LL))(v2, 1); /*0x5f510c*/
    return 0; /*0x5f510f*/
  }
}

// [4/7] Address: 0x5f5af0
// Method: SetupTouchTogglePopup::determineStartValues
void __fastcall SetupTouchTogglePopup_determineStartValues(__int64 a1)
{
  __int64 v2; // rcx
  cocos2d::CCArray *v3; // rdi
  unsigned int v4; // esi
  struct cocos2d::CCObject *v5; // rax
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  int v11; // ecx

  SetupTriggerPopup_determineStartValues(a1); /*0x5f5afd*/
  if ( *(_QWORD *)(a1 + 680) ) /*0x5f5b02*/
  {
    v3 = (cocos2d::CCArray *)cocos2d::CCArray::create(v2); /*0x5f5b1c*/
    cocos2d::CCArray::addObject(v3, *(struct cocos2d::CCObject **)(a1 + 680)); /*0x5f5b1f*/
  }
  else
  {
    v3 = *(cocos2d::CCArray **)(a1 + 688); /*0x5f5b27*/
  }
  if ( v3 ) /*0x5f5b31*/
  {
    if ( cocos2d::CCArray::count(v3) ) /*0x5f5b3a*/
    {
      v4 = 0; /*0x5f5b57*/
      *(_BYTE *)(a1 + 1012) = 1; /*0x5f5b59*/
      *(_DWORD *)(a1 + 1008) = -1; /*0x5f5b60*/
      *(_BYTE *)(a1 + 1040) = 1; /*0x5f5b6a*/
      for ( *(_QWORD *)(a1 + 1016) = -1; v4 < cocos2d::CCArray::count(v3); ++v4 ) /*0x5f5b7c*/
      {
        v5 = cocos2d::CCArray::objectAtIndex(v3, v4); /*0x5f5b95*/
        if ( !*((_BYTE *)v5 + 1654) ) /*0x5f5b9b*/
          *(_BYTE *)(a1 + 1012) = 0; /*0x5f5ba4*/
        if ( !*((_BYTE *)v5 + 1664) ) /*0x5f5bab*/
          *(_BYTE *)(a1 + 1040) = 0; /*0x5f5bb4*/
        v6 = *(_DWORD *)(a1 + 1008); /*0x5f5bbb*/
        v7 = *((_DWORD *)v5 + 370); /*0x5f5bc1*/
        if ( v6 == -1 ) /*0x5f5bca*/
        {
          *(_DWORD *)(a1 + 1008) = v7; /*0x5f5bcc*/
        }
        else if ( v6 != v7 ) /*0x5f5bd6*/
        {
          *(_DWORD *)(a1 + 1008) = 0; /*0x5f5bd8*/
        }
        v8 = *(_DWORD *)(a1 + 1016); /*0x5f5bde*/
        v9 = *((_DWORD *)v5 + 414); /*0x5f5be4*/
        if ( v8 == -1 ) /*0x5f5bed*/
        {
          *(_DWORD *)(a1 + 1016) = v9; /*0x5f5bef*/
        }
        else if ( v8 != v9 ) /*0x5f5bf9*/
        {
          *(_DWORD *)(a1 + 1016) = 0; /*0x5f5bfb*/
        }
        v10 = *(_DWORD *)(a1 + 1020); /*0x5f5c01*/
        v11 = *((_DWORD *)v5 + 415); /*0x5f5c07*/
        if ( v10 == -1 ) /*0x5f5c10*/
        {
          *(_DWORD *)(a1 + 1020) = v11; /*0x5f5c12*/
        }
        else if ( v10 != v11 ) /*0x5f5c1c*/
        {
          *(_DWORD *)(a1 + 1020) = 0; /*0x5f5c1e*/
        }
      }
    }
  }
}

// [5/7] Address: 0x5f5d70
// Method: SetupTouchTogglePopup::onTouchMode
__int64 __fastcall SetupTouchTogglePopup_onTouchMode(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  bool v4; // zf
  __int64 v5; // rdx
  __int64 v6; // rax
  int v7; // ecx
  cocos2d::CCArray *v8; // rcx
  struct cocos2d::CCObject *v9; // rax
  __int64 v10; // rdx

  v3 = 0; /*0x5f5d86*/
  v4 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 1; /*0x5f5d88*/
  v6 = *(_QWORD *)(a1 + 680); /*0x5f5d8d*/
  v7 = !v4 + 1; /*0x5f5d97*/
  if ( *(_DWORD *)(a1 + 1016) == v7 ) /*0x5f5d9f*/
    v7 = 0; /*0x5f5d9f*/
  *(_DWORD *)(a1 + 1016) = v7; /*0x5f5da2*/
  if ( v6 ) /*0x5f5dab*/
  {
    *(_DWORD *)(v6 + 1656) = v7; /*0x5f5dad*/
  }
  else
  {
    v8 = *(cocos2d::CCArray **)(a1 + 688); /*0x5f5db5*/
    if ( v8 && cocos2d::CCArray::count(v8) ) /*0x5f5dc1*/
    {
      do /*0x5f5dfc*/
      {
        v9 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 688), v3++); /*0x5f5dd9*/
        *((_DWORD *)v9 + 414) = *(_DWORD *)(a1 + 1016); /*0x5f5de7*/
      }
      while ( v3 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 688)) ); /*0x5f5dfc*/
    }
  }
  LOBYTE(v5) = *(_DWORD *)(a1 + 1016) == 1; /*0x5f5e0c*/
  CCMenuItemToggler_toggle(*(_QWORD *)(a1 + 1024), v5); /*0x5f5e0f*/
  LOBYTE(v10) = *(_DWORD *)(a1 + 1016) == 2; /*0x5f5e22*/
  return CCMenuItemToggler_toggle(*(_QWORD *)(a1 + 1032), v10); /*0x5f5e25*/
}

// [6/7] Address: 0x5f5f00
// Method: SetupTouchTogglePopup::textChanged
void __fastcall SetupTouchTogglePopup_textChanged(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  const char *v6; // rcx
  int v7; // eax
  unsigned __int64 v8; // rdx
  char *v9; // rcx
  int v10; // ecx
  __int64 v11; // rax
  cocos2d::CCArray *v12; // rcx
  unsigned int v13; // edi
  struct cocos2d::CCObject *v14; // rax
  int v15; // edx
  char *String[2]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v17; // [rsp+48h] [rbp-30h]

  if ( !*(_BYTE *)(a1 + 200) && (*(unsigned int (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2) == 3 ) /*0x5f5f3e*/
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x5f5f55*/
    *(_OWORD *)String = 0; /*0x5f5f5e*/
    v5 = -1; /*0x5f5f63*/
    v17 = 0; /*0x5f5f6a*/
    do /*0x5f5f73*/
      ++v5; /*0x5f5f70*/
    while ( *(_BYTE *)(v4 + v5) ); /*0x5f5f73*/
    sub_3C230(String); /*0x5f5f81*/
    v6 = (const char *)String; /*0x5f5f8c*/
    if ( *((_QWORD *)&v17 + 1) > 0xFu ) /*0x5f5f91*/
      v6 = String[0]; /*0x5f5f91*/
    v7 = atoi(v6); /*0x5f5f97*/
    v8 = *((_QWORD *)&v17 + 1); /*0x5f5f9d*/
    *(_DWORD *)(a1 + 464) = v7; /*0x5f5fa2*/
    if ( v8 > 0xF ) /*0x5f5fac*/
    {
      v9 = String[0]; /*0x5f5fae*/
      if ( v8 + 1 >= 0x1000 ) /*0x5f5fc0*/
      {
        v9 = (char *)*((_QWORD *)String[0] - 1); /*0x5f5fc2*/
        if ( (unsigned __int64)(String[0] - v9 - 8) > 0x1F ) /*0x5f5fd5*/
          invoke_watson(0, 0, 0, 0, 0); /*0x5f5fe6*/
      }
      j_j_free(v9); /*0x5f5fed*/
    }
    v10 = 0; /*0x5f5ff8*/
    if ( *(int *)(a1 + 464) >= 0 ) /*0x5f600a*/
      v10 = *(_DWORD *)(a1 + 464); /*0x5f600a*/
    v11 = *(_QWORD *)(a1 + 136); /*0x5f600d*/
    if ( v10 > 9999 ) /*0x5f6016*/
      v10 = 9999; /*0x5f6016*/
    *(_DWORD *)(a1 + 464) = v10; /*0x5f6019*/
    if ( v11 ) /*0x5f6022*/
    {
      *(_DWORD *)(v11 + 1480) = v10; /*0x5f602f*/
    }
    else
    {
      v12 = *(cocos2d::CCArray **)(a1 + 144); /*0x5f6037*/
      if ( v12 ) /*0x5f6041*/
      {
        v13 = 0; /*0x5f6043*/
        if ( cocos2d::CCArray::count(v12) ) /*0x5f6046*/
        {
          do /*0x5f6087*/
          {
            v14 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 144), v13); /*0x5f6059*/
            v15 = *(_DWORD *)(a1 + 464); /*0x5f605f*/
            if ( v15 < 0 ) /*0x5f6067*/
              v15 = 0; /*0x5f6067*/
            if ( v15 > 9999 ) /*0x5f606d*/
              v15 = 9999; /*0x5f606d*/
            ++v13; /*0x5f6070*/
            *((_DWORD *)v14 + 370) = v15; /*0x5f6072*/
          }
          while ( v13 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 144)) ); /*0x5f6087*/
        }
      }
    }
    sub_607BB0(a1 - 544); /*0x5f6090*/
  }
}

// [7/7] Address: 0x5f60c0
// Method: SetupTouchTogglePopup::onClose
// Hidden C++ exception states: #wind=1
__int64 __fastcall SetupTouchTogglePopup_onClose(__int64 a1)
{
  __int64 v2; // rax
  void *v4; // [rsp+30h] [rbp+8h]

  *(_QWORD *)(*(_QWORD *)(a1 + 1000) + 608LL) = 0; /*0x5f60d7*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1000) + 1032LL))(*(_QWORD *)(a1 + 1000), 0); /*0x5f60ee*/
  v2 = qword_905FD0; /*0x5f60f4*/
  if ( !qword_905FD0 ) /*0x5f60fe*/
  {
    v4 = operator new(0x6E8u); /*0x5f610a*/
    qword_905FD0 = sub_2723A0(v4); /*0x5f6118*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x5f6129*/
    v2 = qword_905FD0; /*0x5f612b*/
  }
  *(_BYTE *)(*(_QWORD *)(v2 + 568) + 14873LL) = 1; /*0x5f6139*/
  return SetupTriggerPopup_onClose(a1); /*0x5f6146*/
}
