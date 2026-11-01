#include <Geode/binding/SetupMoveCommandPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/8] Address: 0x4ab40
// Method: SetupMoveCommandPopup::updateControlVisibility
cocos2d::CCRect *__fastcall SetupMoveCommandPopup_updateControlVisibility(__int64 a1, cocos2d::CCRect *a2)
{
  float *v4; // rbx
  float *v5; // rdi
  float v6; // xmm6_4
  double v7; // xmm0_8
  float v8; // xmm8_4
  float v9; // xmm6_4
  double v10; // xmm0_8
  __int64 v11; // rax

  v4 = (float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 320LL))(a1); /*0x4ab79*/
  v5 = (float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1); /*0x4ab89*/
  v6 = *(float *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 320LL))(a1) + 4); /*0x4ab96*/
  v7 = (*(double (__fastcall **)(__int64))(*(_QWORD *)a1 + 144LL))(a1); /*0x4aba5*/
  v8 = *(float *)&v7 * v6; /*0x4abae*/
  v9 = *v4; /*0x4abb6*/
  v10 = (*(double (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1); /*0x4abba*/
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1); /*0x4abcd*/
  cocos2d::CCRect::CCRect(a2, *v5, *(float *)(v11 + 4), *(float *)&v10 * v9, v8); /*0x4abe9*/
  return a2; /*0x4abef*/
}

// [2/8] Address: 0x38a840
// Method: SetupMoveCommandPopup::~SetupMoveCommandPopup
cocos2d::CCNode *__fastcall SetupMoveCommandPopup__dtor_SetupMoveCommandPopup(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &SetupMoveCommandPopup::`vftable'; /*0x38a853*/
  *((_QWORD *)Block + 40) = &SetupMoveCommandPopup::`vftable'; /*0x38a860*/
  *((_QWORD *)Block + 41) = &SetupMoveCommandPopup::`vftable'; /*0x38a86e*/
  *((_QWORD *)Block + 42) = &SetupMoveCommandPopup::`vftable'; /*0x38a87c*/
  *((_QWORD *)Block + 43) = &SetupMoveCommandPopup::`vftable'; /*0x38a88a*/
  *((_QWORD *)Block + 44) = &SetupMoveCommandPopup::`vftable'; /*0x38a898*/
  *((_QWORD *)Block + 51) = &SetupMoveCommandPopup::`vftable'; /*0x38a8a6*/
  *((_QWORD *)Block + 54) = &SetupMoveCommandPopup::`vftable'; /*0x38a8b4*/
  *((_QWORD *)Block + 68) = &SetupMoveCommandPopup::`vftable'; /*0x38a8c2*/
  *((_QWORD *)Block + 83) = &SetupMoveCommandPopup::`vftable'; /*0x38a8d0*/
  *((_QWORD *)Block + 84) = &SetupMoveCommandPopup::`vftable'; /*0x38a8de*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x38a8e5*/
  if ( (a2 & 1) != 0 ) /*0x38a8ed*/
    j_j_free(Block); /*0x38a8f7*/
  return Block; /*0x38a8fc*/
}

// [3/8] Address: 0x38be90
// Method: SetupMoveCommandPopup::triggerValueFromSliderValue
float __fastcall SetupMoveCommandPopup_triggerValueFromSliderValue(__int64 a1, int a2, float a3)
{
  if ( *(_BYTE *)(a1 + 1000) || (unsigned int)(a2 - 28) > 1 && a2 != 396 ) /*0x38beab*/
    return SetupTriggerPopup_triggerValueFromSliderValue(a1, a2, a3); /*0x38bed6*/
  else
    return floorf((float)(a3 - 0.5) * 200.0) * 3.0; /*0x38bec5*/
}

// [4/8] Address: 0x38bee0
// Method: SetupMoveCommandPopup::triggerSliderValueFromValue
__m128 __fastcall SetupMoveCommandPopup_triggerSliderValueFromValue(__int64 a1, int a2, float a3)
{
  float v3; // xmm1_4
  __m128 result; // xmm0

  if ( *(_BYTE *)(a1 + 1000) || (unsigned int)(a2 - 28) > 1 && a2 != 396 ) /*0x38befb*/
    return SetupTriggerPopup_triggerSliderValueFromValue(a1, a2, a3); /*0x38bf39*/
  v3 = fminf(1.0, (float)(floorf(a3 / 3.0) / 200.0) + 0.5); /*0x38bf25*/
  result = 0; /*0x38bf29*/
  result.m128_f32[0] = fmaxf(0.0, v3); /*0x38bf2c*/
  return result; /*0x38bf30*/
}

// [5/8] Address: 0x38bf40
// Method: SetupMoveCommandPopup::updateInputNode
struct cocos2d::CCObject *__fastcall SetupMoveCommandPopup_updateInputNode(__int64 a1, int a2, float a3)
{
  if ( !*(_BYTE *)(a1 + 1000) && ((unsigned int)(a2 - 28) <= 1 || a2 == 396) ) /*0x38bf57*/
    a3 = a3 / 3.0; /*0x38bf59*/
  return SetupTriggerPopup_updateInputNode(a1, a2, a3);
}

// [6/8] Address: 0x38bf70
// Method: SetupMoveCommandPopup::updateInputValue
__int64 __fastcall SetupMoveCommandPopup_updateInputValue(__int64 a1, int a2, float *a3)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 1000) ) /*0x38bf70*/
  {
    result = (unsigned int)(a2 - 28); /*0x38bf79*/
    if ( (unsigned int)result <= 1 || a2 == 396 ) /*0x38bf87*/
      *a3 = *a3 * 3.0; /*0x38bf96*/
  }
  return result; /*0x38bf9b*/
}

// [7/8] Address: 0x38bfa0
// Method: SetupMoveCommandPopup::valueDidChange
double __fastcall SetupMoveCommandPopup_valueDidChange(__int64 a1, int a2, float a3)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  __int64 v8; // rdx
  __int64 v9; // rdx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  __int64 v13; // rdx
  double result; // xmm0_8

  if ( a2 <= 142 ) /*0x38bfb4*/
  {
    if ( a2 == 142 ) /*0x38bfba*/
    {
      if ( a3 != 0.0 ) /*0x38c19a*/
      {
        if ( cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 752), 59) ) /*0x38c1ac*/
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 1152LL))(a1, 59, 0); /*0x38c1c5*/
        else
          sub_60A5A0(a1, 59); /*0x38c1d8*/
        v8 = 59; /*0x38c1cb*/
        goto LABEL_52; /*0x38c1d0*/
      }
    }
    else
    {
      v4 = a2 - 58; /*0x38bfc0*/
      if ( v4 ) /*0x38bfc3*/
      {
        v5 = v4 - 1; /*0x38bfc9*/
        if ( v5 ) /*0x38bfcc*/
        {
          v6 = v5 - 41; /*0x38bfd2*/
          if ( v6 ) /*0x38bfd5*/
          {
            v7 = v6 - 38; /*0x38bfdb*/
            if ( v7 ) /*0x38bfde*/
            {
              if ( v7 != 3 ) /*0x38bfe3*/
                return result; /*0x38bfe3*/
              if ( a3 == 0.0 ) /*0x38bff1*/
                goto LABEL_53; /*0x38bff1*/
              if ( cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 752), 58) ) /*0x38c003*/
                (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 1152LL))(a1, 58, 0); /*0x38c01c*/
              else
                sub_60A5A0(a1, 58); /*0x38c02f*/
              v8 = 58; /*0x38c022*/
              goto LABEL_52; /*0x38c027*/
            }
            if ( a3 == 0.0 ) /*0x38c046*/
              return result; /*0x38c046*/
            if ( cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 752), 200) ) /*0x38c058*/
              (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 1152LL))(a1, 200, 0); /*0x38c071*/
            else
              sub_60A5A0(a1, 200); /*0x38c084*/
            v9 = 200; /*0x38c077*/
LABEL_69:
            sub_60ABF0(a1, v9); /*0x38c3f5*/
            if ( cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 752), 71) ) /*0x38c40c*/
              (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 1152LL))(a1, 71, 0); /*0x38c425*/
            else
              sub_60A5A0(a1, 71); /*0x38c430*/
            v13 = 71; /*0x38c435*/
            return sub_60ABF0(a1, v13); /*0x38c440*/
          }
          if ( a3 != 0.0 ) /*0x38c09b*/
          {
            if ( cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 752), 394) ) /*0x38c0ad*/
              (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 1152LL))(a1, 394, 0); /*0x38c0c6*/
            else
              sub_60A5A0(a1, 394); /*0x38c0d9*/
            v8 = 394; /*0x38c0cc*/
LABEL_52:
            result = sub_60ABF0(a1, v8); /*0x38c2a9*/
          }
        }
        else if ( a3 != 0.0 ) /*0x38c0f0*/
        {
          if ( cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 752), 142) ) /*0x38c102*/
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 1152LL))(a1, 142, 0); /*0x38c11b*/
          else
            sub_60A5A0(a1, 142); /*0x38c12e*/
          v8 = 142; /*0x38c121*/
          goto LABEL_52; /*0x38c126*/
        }
      }
      else if ( a3 != 0.0 ) /*0x38c145*/
      {
        if ( cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 752), 141) ) /*0x38c157*/
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 1152LL))(a1, 141, 0); /*0x38c170*/
        else
          sub_60A5A0(a1, 141); /*0x38c183*/
        v8 = 141; /*0x38c176*/
        goto LABEL_52; /*0x38c17b*/
      }
    }
LABEL_53:
    sub_38C450(a1); /*0x38c2b4*/
    return result; /*0x38c2c1*/
  }
  v10 = a2 - 200; /*0x38c1e7*/
  if ( !v10 ) /*0x38c1ed*/
  {
    if ( a3 == 0.0 ) /*0x38c3b5*/
      return result; /*0x38c3b5*/
    if ( cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 752), 138) ) /*0x38c3c7*/
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 1152LL))(a1, 138, 0); /*0x38c3e0*/
    else
      sub_60A5A0(a1, 138); /*0x38c3eb*/
    v9 = 138; /*0x38c3f0*/
    goto LABEL_69; /*0x38c3f0*/
  }
  v11 = v10 - 193; /*0x38c1f3*/
  if ( !v11 ) /*0x38c1f9*/
  {
    *(_BYTE *)(a1 + 1000) = a3 != 0.0; /*0x38c2d6*/
    if ( cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 752), 28) ) /*0x38c2e8*/
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 1152LL))(a1, 28, 0); /*0x38c301*/
    else
      sub_60A5A0(a1, 28); /*0x38c30c*/
    sub_60ABF0(a1, 28); /*0x38c31c*/
    if ( cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 752), 29) ) /*0x38c32d*/
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 1152LL))(a1, 29, 0); /*0x38c346*/
    else
      sub_60A5A0(a1, 29); /*0x38c351*/
    sub_60ABF0(a1, 29); /*0x38c361*/
    if ( cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 752), 396) ) /*0x38c372*/
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 1152LL))(a1, 396, 0); /*0x38c38b*/
    else
      sub_60A5A0(a1, 396); /*0x38c39e*/
    v13 = 396; /*0x38c391*/
    return sub_60ABF0(a1, v13); /*0x38c396*/
  }
  v12 = v11 - 1; /*0x38c1ff*/
  if ( !v12 ) /*0x38c202*/
  {
    if ( a3 != 0.0 ) /*0x38c26d*/
    {
      if ( cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 752), 100) ) /*0x38c27b*/
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 1152LL))(a1, 100, 0); /*0x38c294*/
      else
        sub_60A5A0(a1, 100); /*0x38c29f*/
      v8 = 100; /*0x38c2a4*/
      goto LABEL_52; /*0x38c2a4*/
    }
    goto LABEL_53; /*0x38c26d*/
  }
  if ( v12 == 150 && a3 != 0.0 ) /*0x38c218*/
  {
    if ( cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 752), 10) ) /*0x38c22a*/
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 1152LL))(a1, 10, 0); /*0x38c243*/
    else
      sub_60A5A0(a1, 10); /*0x38c256*/
    v13 = 10; /*0x38c249*/
    return sub_60ABF0(a1, v13); /*0x38c24e*/
  }
  return result; /*0x38c2b7*/
}

// [8/8] Address: 0x38c610
// Method: SetupMoveCommandPopup::onCustomToggleTriggerValue
struct cocos2d::CCObject *__fastcall SetupMoveCommandPopup_onCustomToggleTriggerValue(
        cocos2d::CCDictionary **a1,
        __int64 a2)
{
  struct cocos2d::CCObject *result; // rax
  int v4; // ebx
  struct cocos2d::CCObject *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx

  result = (struct cocos2d::CCObject *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x38c623*/
  v4 = (int)result; /*0x38c626*/
  if ( (unsigned int)((_DWORD)result - 1) <= 1 ) /*0x38c62e*/
  {
    if ( (int)(*((float (__fastcall **)(cocos2d::CCDictionary **, __int64))*a1 + 146))(a1, 101) == (_DWORD)result ) /*0x38c655*/
      v4 = 0; /*0x38c655*/
    SetupTriggerPopup_updateValue(a1, 0x65u, (float)v4); /*0x38c65f*/
    v5 = cocos2d::CCDictionary::objectForKey(a1[97], 1); /*0x38c670*/
    if ( v5 ) /*0x38c679*/
    {
      LOBYTE(v6) = v4 == 1; /*0x38c681*/
      CCMenuItemToggler_toggle((__int64)v5, v6); /*0x38c684*/
    }
    result = cocos2d::CCDictionary::objectForKey(a1[97], 2); /*0x38c695*/
    if ( result ) /*0x38c69e*/
    {
      LOBYTE(v7) = v4 == 2; /*0x38c6a6*/
      return (struct cocos2d::CCObject *)CCMenuItemToggler_toggle((__int64)result, v7); /*0x38c6a9*/
    }
  }
  return result; /*0x38c6ae*/
}
