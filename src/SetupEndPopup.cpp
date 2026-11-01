#include <Geode/binding/SetupEndPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x5a6550
// Method: SetupEndPopup::onClose
__int64 __fastcall SetupEndPopup_onClose(__int64 a1)
{
  *(_QWORD *)(*(_QWORD *)(a1 + 1000) + 608LL) = 0; /*0x5a6569*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1000) + 1032LL))(*(_QWORD *)(a1 + 1000), 0); /*0x5a657e*/
  return SetupTriggerPopup_onClose(a1); /*0x5a658a*/
}

// [2/5] Address: 0x5acfa0
// Method: SetupEndPopup::~SetupEndPopup
cocos2d::CCNode *__fastcall SetupEndPopup__dtor_SetupEndPopup(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &SetupEndPopup::`vftable'; /*0x5acfb3*/
  *((_QWORD *)Block + 40) = &SetupEndPopup::`vftable'; /*0x5acfc0*/
  *((_QWORD *)Block + 41) = &SetupEndPopup::`vftable'; /*0x5acfce*/
  *((_QWORD *)Block + 42) = &SetupEndPopup::`vftable'; /*0x5acfdc*/
  *((_QWORD *)Block + 43) = &SetupEndPopup::`vftable'; /*0x5acfea*/
  *((_QWORD *)Block + 44) = &SetupEndPopup::`vftable'; /*0x5acff8*/
  *((_QWORD *)Block + 51) = &SetupEndPopup::`vftable'; /*0x5ad006*/
  *((_QWORD *)Block + 54) = &SetupEndPopup::`vftable'; /*0x5ad014*/
  *((_QWORD *)Block + 68) = &SetupEndPopup::`vftable'; /*0x5ad022*/
  *((_QWORD *)Block + 83) = &SetupEndPopup::`vftable'; /*0x5ad030*/
  *((_QWORD *)Block + 84) = &SetupEndPopup::`vftable'; /*0x5ad03e*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x5ad045*/
  if ( (a2 & 1) != 0 ) /*0x5ad04d*/
    j_j_free(Block); /*0x5ad057*/
  return Block; /*0x5ad05c*/
}

// [3/5] Address: 0x5ad140
// Method: SetupEndPopup::create
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall SetupEndPopup_create(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rsi

  v4 = operator new(0x400u); /*0x5ad15f*/
  SetupTriggerPopup_SetupTriggerPopup((__int64)v4); /*0x5ad16a*/
  *v4 = &SetupEndPopup::`vftable'; /*0x5ad176*/
  v4[40] = &SetupEndPopup::`vftable'; /*0x5ad180*/
  v4[41] = &SetupEndPopup::`vftable'; /*0x5ad18e*/
  v4[42] = &SetupEndPopup::`vftable'; /*0x5ad19c*/
  v4[43] = &SetupEndPopup::`vftable'; /*0x5ad1aa*/
  v4[44] = &SetupEndPopup::`vftable'; /*0x5ad1b8*/
  v4[51] = &SetupEndPopup::`vftable'; /*0x5ad1c6*/
  v4[54] = &SetupEndPopup::`vftable'; /*0x5ad1d4*/
  v4[68] = &SetupEndPopup::`vftable'; /*0x5ad1e2*/
  v4[83] = &SetupEndPopup::`vftable'; /*0x5ad1f0*/
  v4[84] = &SetupEndPopup::`vftable'; /*0x5ad1fe*/
  *((_WORD *)v4 + 504) = 0; /*0x5ad205*/
  *((_DWORD *)v4 + 253) = 0; /*0x5ad20e*/
  *((_BYTE *)v4 + 1016) = 0; /*0x5ad218*/
  if ( (unsigned __int8)sub_5AD280(v4, a1, a2) ) /*0x5ad228*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v4); /*0x5ad234*/
    return v4; /*0x5ad23a*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v4 + 8LL))(v4, 1); /*0x5ad25c*/
    return 0; /*0x5ad25f*/
  }
}

// [4/5] Address: 0x5ada00
// Method: SetupEndPopup::determineStartValues
void __fastcall SetupEndPopup_determineStartValues(__int64 a1)
{
  __int64 v2; // rcx
  cocos2d::CCArray *v3; // rdi
  unsigned int v4; // esi
  struct cocos2d::CCObject *v5; // rax
  int v6; // edx
  int v7; // ecx

  SetupTriggerPopup_determineStartValues(a1); /*0x5ada0d*/
  if ( *(_QWORD *)(a1 + 680) ) /*0x5ada12*/
  {
    v3 = (cocos2d::CCArray *)cocos2d::CCArray::create(v2); /*0x5ada2c*/
    cocos2d::CCArray::addObject(v3, *(struct cocos2d::CCObject **)(a1 + 680)); /*0x5ada2f*/
  }
  else
  {
    v3 = *(cocos2d::CCArray **)(a1 + 688); /*0x5ada37*/
  }
  if ( v3 ) /*0x5ada41*/
  {
    if ( cocos2d::CCArray::count(v3) ) /*0x5ada4a*/
    {
      v4 = 0; /*0x5ada67*/
      *(_WORD *)(a1 + 1008) = 257; /*0x5ada69*/
      for ( *(_DWORD *)(a1 + 1012) = -1; v4 < cocos2d::CCArray::count(v3); ++v4 ) /*0x5ada7c*/
      {
        v5 = cocos2d::CCArray::objectAtIndex(v3, v4); /*0x5ada95*/
        if ( !*((_BYTE *)v5 + 1777) ) /*0x5ada9b*/
          *(_BYTE *)(a1 + 1008) = 0; /*0x5adaa4*/
        if ( !*((_BYTE *)v5 + 1521) ) /*0x5adaab*/
          *(_BYTE *)(a1 + 1009) = 0; /*0x5adab4*/
        v6 = *(_DWORD *)(a1 + 1012); /*0x5adabb*/
        v7 = *((_DWORD *)v5 + 370); /*0x5adac1*/
        if ( v6 == -1 ) /*0x5adaca*/
        {
          *(_DWORD *)(a1 + 1012) = v7; /*0x5adacc*/
        }
        else if ( v6 != v7 ) /*0x5adad6*/
        {
          *(_DWORD *)(a1 + 1012) = 0; /*0x5adad8*/
        }
      }
    }
  }
}

// [5/5] Address: 0x5adc60
// Method: SetupEndPopup::textChanged
void __fastcall SetupEndPopup_textChanged(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  const char *v5; // rcx
  int v6; // eax
  unsigned __int64 v7; // rdx
  char *v8; // rcx
  int v9; // ecx
  __int64 v10; // rax
  cocos2d::CCArray *v11; // rcx
  unsigned int v12; // edi
  struct cocos2d::CCObject *v13; // rax
  int v14; // edx
  char *String[2]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v16; // [rsp+48h] [rbp-30h]

  if ( !*(_BYTE *)(a1 + 200) ) /*0x5adc7c*/
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a2 + 600) + 600LL) + 8LL))(*(_QWORD *)(a2 + 600) + 600LL); /*0x5adc9a*/
    *(_OWORD *)String = 0; /*0x5adca3*/
    v4 = -1; /*0x5adca8*/
    v16 = 0; /*0x5adcaf*/
    do /*0x5adcb8*/
      ++v4; /*0x5adcb5*/
    while ( *(_BYTE *)(v3 + v4) ); /*0x5adcb8*/
    sub_3C230(String); /*0x5adcc6*/
    v5 = (const char *)String; /*0x5adcd1*/
    if ( *((_QWORD *)&v16 + 1) > 0xFu ) /*0x5adcd6*/
      v5 = String[0]; /*0x5adcd6*/
    v6 = atoi(v5); /*0x5adcdc*/
    v7 = *((_QWORD *)&v16 + 1); /*0x5adce2*/
    *(_DWORD *)(a1 + 468) = v6; /*0x5adce7*/
    if ( v7 > 0xF ) /*0x5adcf1*/
    {
      v8 = String[0]; /*0x5adcf3*/
      if ( v7 + 1 >= 0x1000 ) /*0x5add05*/
      {
        v8 = (char *)*((_QWORD *)String[0] - 1); /*0x5add07*/
        if ( (unsigned __int64)(String[0] - v8 - 8) > 0x1F ) /*0x5add1a*/
          invoke_watson(0, 0, 0, 0, 0); /*0x5add2b*/
      }
      j_j_free(v8); /*0x5add32*/
    }
    v9 = 0; /*0x5add3d*/
    if ( *(int *)(a1 + 468) >= 0 ) /*0x5add4f*/
      v9 = *(_DWORD *)(a1 + 468); /*0x5add4f*/
    v10 = *(_QWORD *)(a1 + 136); /*0x5add52*/
    if ( v9 > 9999 ) /*0x5add5c*/
      v9 = 9999; /*0x5add5c*/
    *(_DWORD *)(a1 + 468) = v9; /*0x5add60*/
    if ( v10 ) /*0x5add69*/
    {
      *(_DWORD *)(v10 + 1480) = v9; /*0x5add77*/
    }
    else
    {
      v11 = *(cocos2d::CCArray **)(a1 + 144); /*0x5add7f*/
      if ( v11 ) /*0x5add89*/
      {
        v12 = 0; /*0x5add93*/
        if ( cocos2d::CCArray::count(v11) ) /*0x5add95*/
        {
          do /*0x5addd8*/
          {
            v13 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 144), v12); /*0x5adda9*/
            v14 = *(_DWORD *)(a1 + 468); /*0x5addaf*/
            if ( v14 < 0 ) /*0x5addb7*/
              v14 = 0; /*0x5addb7*/
            if ( v14 > 9999 ) /*0x5addbd*/
              v14 = 9999; /*0x5addbd*/
            ++v12; /*0x5addc1*/
            *((_DWORD *)v13 + 370) = v14; /*0x5addc3*/
          }
          while ( v12 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 144)) ); /*0x5addd8*/
        }
      }
    }
    sub_607BB0(a1 - 544); /*0x5adde9*/
  }
}
