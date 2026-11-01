#include <Geode/binding/SetupAreaTintTriggerPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/6] Address: 0x59d7b0
// Method: SetupAreaTintTriggerPopup::SetupAreaTintTriggerPopup
__int64 __fastcall SetupAreaTintTriggerPopup_SetupAreaTintTriggerPopup(__int64 a1)
{
  sub_59D440(a1); /*0x59d7b9*/
  *(_QWORD *)(a1 + 1024) = 0; /*0x59d7c5*/
  *(_QWORD *)a1 = &SetupAreaTintTriggerPopup::`vftable'; /*0x59d7d0*/
  *(_QWORD *)(a1 + 320) = &SetupAreaTintTriggerPopup::`vftable'; /*0x59d7da*/
  *(_QWORD *)(a1 + 328) = &SetupAreaTintTriggerPopup::`vftable'; /*0x59d7e8*/
  *(_QWORD *)(a1 + 336) = &SetupAreaTintTriggerPopup::`vftable'; /*0x59d7f6*/
  *(_QWORD *)(a1 + 344) = &SetupAreaTintTriggerPopup::`vftable'; /*0x59d804*/
  *(_QWORD *)(a1 + 352) = &SetupAreaTintTriggerPopup::`vftable'; /*0x59d812*/
  *(_QWORD *)(a1 + 408) = &SetupAreaTintTriggerPopup::`vftable'; /*0x59d820*/
  *(_QWORD *)(a1 + 432) = &SetupAreaTintTriggerPopup::`vftable'; /*0x59d82e*/
  *(_QWORD *)(a1 + 544) = &SetupAreaTintTriggerPopup::`vftable'; /*0x59d83c*/
  *(_QWORD *)(a1 + 664) = &SetupAreaTintTriggerPopup::`vftable'; /*0x59d84a*/
  *(_QWORD *)(a1 + 672) = &SetupAreaTintTriggerPopup::`vftable'; /*0x59d858*/
  *(_QWORD *)(a1 + 1016) = &SetupAreaTintTriggerPopup::`vftable'; /*0x59d866*/
  *(_BYTE *)(a1 + 1048) = 0; /*0x59d870*/
  return a1; /*0x59d877*/
}

// [2/6] Address: 0x5a20d0
// Method: SetupAreaTintTriggerPopup::~SetupAreaTintTriggerPopup
__int64 __fastcall SetupAreaTintTriggerPopup__dtor_SetupAreaTintTriggerPopup(_QWORD *a1)
{
  *a1 = &SetupAreaTintTriggerPopup::`vftable'; /*0x5a20d7*/
  a1[40] = &SetupAreaTintTriggerPopup::`vftable'; /*0x5a20e1*/
  a1[41] = &SetupAreaTintTriggerPopup::`vftable'; /*0x5a20ef*/
  a1[42] = &SetupAreaTintTriggerPopup::`vftable'; /*0x5a20fd*/
  a1[43] = &SetupAreaTintTriggerPopup::`vftable'; /*0x5a210b*/
  a1[44] = &SetupAreaTintTriggerPopup::`vftable'; /*0x5a2119*/
  a1[51] = &SetupAreaTintTriggerPopup::`vftable'; /*0x5a2127*/
  a1[54] = &SetupAreaTintTriggerPopup::`vftable'; /*0x5a2135*/
  a1[68] = &SetupAreaTintTriggerPopup::`vftable'; /*0x5a2143*/
  a1[83] = &SetupAreaTintTriggerPopup::`vftable'; /*0x5a2151*/
  a1[84] = &SetupAreaTintTriggerPopup::`vftable'; /*0x5a215f*/
  a1[127] = &SetupAreaTintTriggerPopup::`vftable'; /*0x5a216d*/
  return SetupAreaMoveTriggerPopup__dtor_SetupAreaMoveTriggerPopup();
}

// [3/6] Address: 0x5a2bf0
// Method: SetupAreaTintTriggerPopup::valueDidChange
void __fastcall SetupAreaTintTriggerPopup_valueDidChange(cocos2d::CCDictionary **a1, int a2, __int64 a3)
{
  float v3; // xmm2_4
  int v5; // edx
  int v6; // edx
  __int64 v7; // rdx

  if ( a2 == 241 ) /*0x5a2c0e*/
  {
    LOBYTE(a3) = v3 == 0.0; /*0x5a2d5b*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, __int64))*a1 + 136))(a1, 1, a3); /*0x5a2d70*/
    if ( v3 == 0.0 ) /*0x5a2d7b*/
    {
      a3 = 0; /*0x5a2d7d*/
      goto LABEL_28; /*0x5a2d80*/
    }
LABEL_27:
    LOBYTE(a3) = 1; /*0x5a2d82*/
    goto LABEL_28; /*0x5a2d82*/
  }
  if ( a2 == 261 ) /*0x5a2c17*/
  {
    if ( v3 == 0.0 ) /*0x5a2d3d*/
      a3 = 0; /*0x5a2d3f*/
    else
      LOBYTE(a3) = 1; /*0x5a2d49*/
    v7 = 9; /*0x5a2d42*/
    goto LABEL_29; /*0x5a2d47*/
  }
  v5 = a2 - 65; /*0x5a2c1d*/
  if ( v5 ) /*0x5a2c20*/
  {
    v6 = v5 - 1; /*0x5a2c26*/
    if ( v6 ) /*0x5a2c29*/
    {
      if ( v6 != 212 ) /*0x5a2c31*/
        return; /*0x5a2c31*/
      if ( v3 == 0.0 ) /*0x5a2c3f*/
        LOBYTE(a3) = 1; /*0x5a2c41*/
      else
        a3 = 0; /*0x5a2c46*/
      (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, __int64))*a1 + 136))(a1, 1, a3); /*0x5a2c54*/
      if ( v3 == 0.0 ) /*0x5a2c63*/
      {
        a3 = 0; /*0x5a2c69*/
LABEL_28:
        v7 = 2; /*0x5a2d85*/
LABEL_29:
        (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, __int64))*a1 + 136))(a1, v7, a3); /*0x5a2d8a*/
        return; /*0x5a2d90*/
      }
      goto LABEL_27; /*0x5a2c63*/
    }
    if ( v3 != 0.0 ) /*0x5a2c79*/
    {
      if ( cocos2d::CCDictionary::objectForKey(a1[94], 65) ) /*0x5a2c8b*/
        (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*a1 + 144))(a1, 65, 0); /*0x5a2ca4*/
      else
        sub_60A5A0(a1, 65); /*0x5a2caf*/
      sub_60ABF0(a1, 65); /*0x5a2cce*/
    }
  }
  else if ( v3 != 0.0 ) /*0x5a2cdb*/
  {
    if ( cocos2d::CCDictionary::objectForKey(a1[94], 66) ) /*0x5a2ced*/
      (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*a1 + 144))(a1, 66, 0); /*0x5a2d06*/
    else
      sub_60A5A0(a1, 66); /*0x5a2d11*/
    sub_60ABF0(a1, 66); /*0x5a2d30*/
  }
}

// [4/6] Address: 0x5a2db0
// Method: SetupAreaTintTriggerPopup::determineStartValues
void __fastcall SetupAreaTintTriggerPopup_determineStartValues(__int64 a1)
{
  __int64 v2; // rcx
  cocos2d::CCArray *v3; // rsi
  char v4; // bp
  unsigned int v5; // edi
  char i; // r14
  struct cocos2d::CCObject *v7; // rax
  __m128 v8; // xmm2
  __m128i v9; // xmm2
  __m128 v10; // xmm1
  __m128 v11; // [rsp+20h] [rbp-28h]
  float v12; // [rsp+3Ch] [rbp-Ch]

  SetupTriggerPopup_determineStartValues(a1); /*0x5a2dbd*/
  if ( *(_QWORD *)(a1 + 680) ) /*0x5a2dc2*/
  {
    v3 = (cocos2d::CCArray *)cocos2d::CCArray::create(v2); /*0x5a2ddc*/
    cocos2d::CCArray::addObject(v3, *(struct cocos2d::CCObject **)(a1 + 680)); /*0x5a2ddf*/
  }
  else
  {
    v3 = *(cocos2d::CCArray **)(a1 + 688); /*0x5a2de7*/
  }
  if ( v3 ) /*0x5a2df1*/
  {
    if ( cocos2d::CCArray::count(v3) ) /*0x5a2dfa*/
    {
      v4 = 1; /*0x5a2e1c*/
      v5 = 0; /*0x5a2e24*/
      *(_OWORD *)(a1 + 1032) = xmmword_8F85C0; /*0x5a2e26*/
      for ( i = 0; v5 < cocos2d::CCArray::count(v3); ++v5 ) /*0x5a2e30*/
      {
        v7 = cocos2d::CCArray::objectAtIndex(v3, v5); /*0x5a2e45*/
        if ( !i ) /*0x5a2e4e*/
        {
          if ( v4 ) /*0x5a2e57*/
          {
            *(_OWORD *)(a1 + 1032) = *(_OWORD *)((char *)v7 + 1628); /*0x5a2e60*/
          }
          else
          {
            v8 = *(__m128 *)((char *)v7 + 1628); /*0x5a2e6c*/
            if ( *(float *)(a1 + 1032) != v8.m128_f32[0] /*0x5a2ed1*/
              || *(float *)(a1 + 1036) != _mm_shuffle_ps(v8, v8, 85).m128_f32[0]
              || *(float *)(a1 + 1040) != _mm_shuffle_ps(v8, v8, 170).m128_f32[0]
              || (v9 = _mm_srli_si128((__m128i)v8, 8), *(_BYTE *)(a1 + 1044) != v9.m128i_i8[4])
              || *(_BYTE *)(a1 + 1045) != v9.m128i_i8[5] )
            {
              v11.m128_i32[0] = -1165815185; /*0x5a2ed3*/
              i = 1; /*0x5a2edb*/
              *(unsigned __int64 *)((char *)v11.m128_u64 + 4) = 0; /*0x5a2ede*/
              LOWORD(v12) = 0; /*0x5a2eec*/
              v10 = _mm_shuffle_ps(v11, v11, 147); /*0x5a2ef9*/
              v10.m128_f32[0] = v12; /*0x5a2efd*/
              v11 = _mm_shuffle_ps(v10, v10, 57); /*0x5a2f05*/
              *(__m128 *)(a1 + 1032) = v11; /*0x5a2f0a*/
            }
          }
          v4 = 0; /*0x5a2f11*/
        }
      }
    }
  }
}

// [5/6] Address: 0x5a2ff0
// Method: SetupAreaTintTriggerPopup::hsvPopupClosed
__int64 __fastcall SetupAreaTintTriggerPopup_hsvPopupClosed(__int64 a1, __int64 a2, _OWORD *a3)
{
  *(_OWORD *)(a1 - 1016 + 1032) = *a3; /*0x5a2ffe*/
  *(_BYTE *)(a1 + 32) = 1; /*0x5a3005*/
  return sub_5A3010();
}

// [6/6] Address: 0x5a30f0
// Method: SetupAreaTintTriggerPopup::onClose
__int64 __fastcall SetupAreaTintTriggerPopup_onClose(__int64 a1)
{
  __int64 v2; // rax
  cocos2d::CCArray *v3; // rcx
  unsigned int v4; // edi
  struct cocos2d::CCObject *v5; // rax

  if ( *(_BYTE *)(a1 + 1048) ) /*0x5a30fa*/
  {
    v2 = *(_QWORD *)(a1 + 680); /*0x5a3109*/
    if ( v2 ) /*0x5a3113*/
    {
      *(_OWORD *)(v2 + 1628) = *(_OWORD *)(a1 + 1032); /*0x5a311c*/
    }
    else
    {
      v3 = *(cocos2d::CCArray **)(a1 + 688); /*0x5a3125*/
      if ( v3 ) /*0x5a312f*/
      {
        v4 = 0; /*0x5a3136*/
        if ( cocos2d::CCArray::count(v3) ) /*0x5a3138*/
        {
          do /*0x5a317e*/
          {
            v5 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 688), v4++); /*0x5a3159*/
            *(_OWORD *)((char *)v5 + 1628) = *(_OWORD *)(a1 + 1032); /*0x5a3168*/
          }
          while ( v4 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 688)) ); /*0x5a317e*/
        }
      }
    }
  }
  return SetupTriggerPopup_onClose(a1); /*0x5a318b*/
}
