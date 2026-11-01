#include <Geode/binding/SetupEnterEffectPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/10] Address: 0x5a0880
// Method: SetupEnterEffectPopup::triggerValueFromSliderValue
float __fastcall SetupEnterEffectPopup_triggerValueFromSliderValue(__int64 a1, unsigned int a2, float a3)
{
  float result; // xmm0_4

  result = SetupTriggerPopup_triggerValueFromSliderValue(a1, a2, a3); /*0x5a0888*/
  if ( (unsigned __int8)sub_5A0820(a2) ) /*0x5a088f*/
    return floorf(result) * 3.0; /*0x5a089d*/
  return result; /*0x5a08a5*/
}

// [3/10] Address: 0x5a08b0
// Method: SetupEnterEffectPopup::triggerSliderValueFromValue
__m128 __fastcall SetupEnterEffectPopup_triggerSliderValueFromValue(__int64 a1, unsigned int a2, float a3)
{
  int v3; // r8d
  __int64 v4; // r9

  if ( (unsigned __int8)sub_5A0820(a2) ) /*0x5a08bc*/
    a3 = a3 / 3.0; /*0x5a08cb*/
  return SetupTriggerPopup_triggerSliderValueFromValue(v4, v3, a3); /*0x5a08d3*/
}

// [4/10] Address: 0x5a08e0
// Method: SetupEnterEffectPopup::updateInputNode
struct cocos2d::CCObject *__fastcall SetupEnterEffectPopup_updateInputNode(__int64 a1, unsigned int a2, float a3)
{
  int v3; // r8d
  __int64 v4; // r9

  if ( (unsigned __int8)sub_5A0820(a2) ) /*0x5a08ec*/
    a3 = a3 / 3.0; /*0x5a08f5*/
  return SetupTriggerPopup_updateInputNode(v4, v3, a3); /*0x5a0903*/
}

// [5/10] Address: 0x5a0910
// Method: SetupEnterEffectPopup::updateInputValue
__int64 __fastcall SetupEnterEffectPopup_updateInputValue(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  float *v3; // r8

  result = sub_5A0820(a2); /*0x5a0916*/
  if ( (_BYTE)result ) /*0x5a091d*/
    *v3 = *v3 * 3.0; /*0x5a092c*/
  return result; /*0x5a0931*/
}

// [6/10] Address: 0x5ae560
// Method: SetupEnterEffectPopup::~SetupEnterEffectPopup
cocos2d::CCNode *__fastcall SetupEnterEffectPopup__dtor_SetupEnterEffectPopup(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &SetupEnterEffectPopup::`vftable'; /*0x5ae573*/
  *((_QWORD *)Block + 40) = &SetupEnterEffectPopup::`vftable'; /*0x5ae580*/
  *((_QWORD *)Block + 41) = &SetupEnterEffectPopup::`vftable'; /*0x5ae58e*/
  *((_QWORD *)Block + 42) = &SetupEnterEffectPopup::`vftable'; /*0x5ae59c*/
  *((_QWORD *)Block + 43) = &SetupEnterEffectPopup::`vftable'; /*0x5ae5aa*/
  *((_QWORD *)Block + 44) = &SetupEnterEffectPopup::`vftable'; /*0x5ae5b8*/
  *((_QWORD *)Block + 51) = &SetupEnterEffectPopup::`vftable'; /*0x5ae5c6*/
  *((_QWORD *)Block + 54) = &SetupEnterEffectPopup::`vftable'; /*0x5ae5d4*/
  *((_QWORD *)Block + 68) = &SetupEnterEffectPopup::`vftable'; /*0x5ae5e2*/
  *((_QWORD *)Block + 83) = &SetupEnterEffectPopup::`vftable'; /*0x5ae5f0*/
  *((_QWORD *)Block + 84) = &SetupEnterEffectPopup::`vftable'; /*0x5ae5fe*/
  *((_QWORD *)Block + 125) = &SetupEnterEffectPopup::`vftable'; /*0x5ae60c*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x5ae613*/
  if ( (a2 & 1) != 0 ) /*0x5ae61b*/
    j_j_free(Block); /*0x5ae625*/
  return Block; /*0x5ae62a*/
}

// [7/10] Address: 0x5b08f0
// Method: SetupEnterEffectPopup::determineStartValues
void __fastcall SetupEnterEffectPopup_determineStartValues(__int64 a1)
{
  __int64 v2; // rcx
  cocos2d::CCArray *v3; // rdi
  bool v4; // zf
  char v5; // si
  bool v6; // r14
  unsigned int v7; // ebp
  struct cocos2d::CCObject *v8; // rax
  int v9; // edx
  int v10; // ecx
  __m128 v11; // xmm2
  __m128i v12; // xmm2
  __m128 v13; // xmm1
  __m128 v14; // [rsp+20h] [rbp-38h]
  float v15; // [rsp+3Ch] [rbp-1Ch]

  SetupTriggerPopup_determineStartValues(a1); /*0x5b08fa*/
  if ( *(_QWORD *)(a1 + 680) ) /*0x5b08ff*/
  {
    v3 = (cocos2d::CCArray *)cocos2d::CCArray::create(v2); /*0x5b0919*/
    cocos2d::CCArray::addObject(v3, *(struct cocos2d::CCObject **)(a1 + 680)); /*0x5b091c*/
  }
  else
  {
    v3 = *(cocos2d::CCArray **)(a1 + 688); /*0x5b0924*/
  }
  if ( v3 ) /*0x5b092e*/
  {
    if ( cocos2d::CCArray::count(v3) ) /*0x5b0937*/
    {
      v4 = *(_DWORD *)(a1 + 1008) == 3021; /*0x5b0945*/
      v5 = 1; /*0x5b095c*/
      *(_DWORD *)(a1 + 1032) = -1; /*0x5b095f*/
      v6 = !v4; /*0x5b0975*/
      v7 = 0; /*0x5b0981*/
      for ( *(_OWORD *)(a1 + 1048) = xmmword_8F85D0; v7 < cocos2d::CCArray::count(v3); ++v7 ) /*0x5b098b*/
      {
        v8 = cocos2d::CCArray::objectAtIndex(v3, v7); /*0x5b09a5*/
        v9 = *(_DWORD *)(a1 + 1032); /*0x5b09ab*/
        v10 = *((_DWORD *)v8 + 464); /*0x5b09b1*/
        if ( v9 >= 0 ) /*0x5b09b9*/
        {
          if ( v9 != v10 ) /*0x5b09c5*/
            *(_DWORD *)(a1 + 1032) = 0; /*0x5b09c7*/
        }
        else
        {
          *(_DWORD *)(a1 + 1032) = v10; /*0x5b09bb*/
        }
        if ( !v6 ) /*0x5b09d1*/
        {
          if ( v5 ) /*0x5b09da*/
          {
            *(_OWORD *)(a1 + 1048) = *(_OWORD *)((char *)v8 + 1628); /*0x5b09e3*/
          }
          else
          {
            v11 = *(__m128 *)((char *)v8 + 1628); /*0x5b09ef*/
            if ( *(float *)(a1 + 1048) != v11.m128_f32[0] /*0x5b0a54*/
              || *(float *)(a1 + 1052) != _mm_shuffle_ps(v11, v11, 85).m128_f32[0]
              || *(float *)(a1 + 1056) != _mm_shuffle_ps(v11, v11, 170).m128_f32[0]
              || (v12 = _mm_srli_si128((__m128i)v11, 8), *(_BYTE *)(a1 + 1060) != v12.m128i_i8[4])
              || *(_BYTE *)(a1 + 1061) != v12.m128i_i8[5] )
            {
              v14.m128_i32[0] = -1165815185; /*0x5b0a56*/
              v6 = 1; /*0x5b0a5e*/
              *(unsigned __int64 *)((char *)v14.m128_u64 + 4) = 0; /*0x5b0a61*/
              LOWORD(v15) = 0; /*0x5b0a6b*/
              v13 = _mm_shuffle_ps(v14, v14, 147); /*0x5b0a77*/
              v13.m128_f32[0] = v15; /*0x5b0a7b*/
              v14 = _mm_shuffle_ps(v13, v13, 57); /*0x5b0a83*/
              *(__m128 *)(a1 + 1048) = v14; /*0x5b0a88*/
            }
          }
          v5 = 0; /*0x5b0a8f*/
        }
      }
    }
  }
}

// [8/10] Address: 0x5b0ac0
// Method: SetupEnterEffectPopup::valueDidChange
double __fastcall SetupEnterEffectPopup_valueDidChange(cocos2d::CCDictionary **a1, int a2, __int64 a3)
{
  float v3; // xmm2_4
  int v5; // edx
  int v6; // edx
  int v7; // edx
  __int64 v8; // r8
  __int64 v9; // rdx
  double result; // xmm0_8

  v5 = a2 - 65; /*0x5b0ad6*/
  if ( !v5 ) /*0x5b0ad9*/
  {
    if ( v3 == 0.0 ) /*0x5b0bb0*/
      return result; /*0x5b0bb0*/
    if ( cocos2d::CCDictionary::objectForKey(a1[94], 66) ) /*0x5b0bbe*/
      (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*a1 + 144))(a1, 66, 0); /*0x5b0bd7*/
    else
      sub_60A5A0(a1, 66); /*0x5b0be2*/
    v9 = 66; /*0x5b0be7*/
    return sub_60ABF0(a1, v9); /*0x5b0be7*/
  }
  v6 = v5 - 1; /*0x5b0adf*/
  if ( !v6 ) /*0x5b0ae2*/
  {
    if ( v3 == 0.0 ) /*0x5b0b61*/
      return result; /*0x5b0b61*/
    if ( cocos2d::CCDictionary::objectForKey(a1[94], 65) ) /*0x5b0b73*/
      (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*a1 + 144))(a1, 65, 0); /*0x5b0b8c*/
    else
      sub_60A5A0(a1, 65); /*0x5b0b9c*/
    v9 = 65; /*0x5b0b92*/
    return sub_60ABF0(a1, v9); /*0x5b0bf2*/
  }
  v7 = v6 - 175; /*0x5b0ae4*/
  if ( v7 ) /*0x5b0aea*/
  {
    if ( v7 != 37 ) /*0x5b0aef*/
      return result; /*0x5b0aef*/
    if ( v3 == 0.0 ) /*0x5b0afd*/
      LOBYTE(a3) = 1; /*0x5b0aff*/
    else
      a3 = 0; /*0x5b0b04*/
  }
  else
  {
    LOBYTE(a3) = v3 == 0.0; /*0x5b0b11*/
  }
  (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, __int64))*a1 + 136))(a1, 1, a3); /*0x5b0b23*/
  if ( v3 == 0.0 ) /*0x5b0b2e*/
    v8 = 0; /*0x5b0b30*/
  else
    LOBYTE(v8) = 1; /*0x5b0b35*/
  (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, __int64))*a1 + 136))(a1, 2, v8); /*0x5b0b52*/
  return result; /*0x5b0bf7*/
}

// [9/10] Address: 0x5b0f20
// Method: SetupEnterEffectPopup::hsvPopupClosed
__int64 __fastcall SetupEnterEffectPopup_hsvPopupClosed(__int64 a1, __int64 a2, _OWORD *a3)
{
  *(_OWORD *)(a1 - 1000 + 1048) = *a3; /*0x5b0f2e*/
  *(_BYTE *)(a1 + 64) = 1; /*0x5b0f35*/
  return sub_5B0F40();
}

// [10/10] Address: 0x5b1020
// Method: SetupEnterEffectPopup::onClose
__int64 __fastcall SetupEnterEffectPopup_onClose(__int64 a1)
{
  __int64 v2; // rax
  cocos2d::CCArray *v3; // rcx
  unsigned int v4; // edi
  struct cocos2d::CCObject *v5; // rax

  if ( *(_DWORD *)(a1 + 1008) == 3021 && *(_BYTE *)(a1 + 1064) ) /*0x5b103c*/
  {
    v2 = *(_QWORD *)(a1 + 680); /*0x5b1045*/
    if ( v2 ) /*0x5b104f*/
    {
      *(_OWORD *)(v2 + 1628) = *(_OWORD *)(a1 + 1048); /*0x5b1058*/
    }
    else
    {
      v3 = *(cocos2d::CCArray **)(a1 + 688); /*0x5b1061*/
      if ( v3 ) /*0x5b106b*/
      {
        v4 = 0; /*0x5b1072*/
        if ( cocos2d::CCArray::count(v3) ) /*0x5b1074*/
        {
          do /*0x5b10ae*/
          {
            v5 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 688), v4++); /*0x5b1089*/
            *(_OWORD *)((char *)v5 + 1628) = *(_OWORD *)(a1 + 1048); /*0x5b1098*/
          }
          while ( v4 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 688)) ); /*0x5b10ae*/
        }
      }
    }
  }
  return SetupTriggerPopup_onClose(a1); /*0x5b10bb*/
}
