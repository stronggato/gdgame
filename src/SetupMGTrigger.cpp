#include <Geode/binding/SetupMGTrigger.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/8] Address: 0x5a90c0
// Method: SetupMGTrigger::onEasingRate
// Hidden C++ exception states: #wind=1
__int64 __fastcall SetupMGTrigger_onEasingRate(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rax
  _DWORD v5[4]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v6; // [rsp+50h] [rbp-38h]
  __int64 v7; // [rsp+58h] [rbp-30h]
  __int128 v8; // [rsp+60h] [rbp-28h] BYREF
  __int64 v9; // [rsp+70h] [rbp-18h]
  __int64 v10; // [rsp+78h] [rbp-10h]

  v2 = a1 + 664; /*0x5a90d5*/
  if ( !a1 ) /*0x5a90e2*/
    v2 = 0; /*0x5a90e2*/
  v8 = 0; /*0x5a90e9*/
  v9 = 0; /*0x5a90ee*/
  v10 = 15; /*0x5a90f2*/
  LOBYTE(v8) = 0; /*0x5a90fa*/
  v5[3] = 0; /*0x5a90fe*/
  v6 = 11; /*0x5a9102*/
  v7 = 15; /*0x5a910a*/
  strcpy((char *)v5, "Easing Rate"); /*0x5a911a*/
  v3 = ConfigureValuePopup_create(v2, (__int64)v5, (__int64)&v8, 0); /*0x5a9168*/
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 1064LL))(v3); /*0x5a917c*/
}

// [3/8] Address: 0x5a9190
// Method: SetupMGTrigger::valuePopupClosed
__int64 __fastcall SetupMGTrigger_valuePopupClosed(__int64 a1, __int64 a2, float a3)
{
  cocos2d::CCString *v4; // rax
  float v5; // xmm1_4
  int v6; // xmm0_4
  __int64 v7; // rax
  unsigned int i; // ebx
  struct cocos2d::CCObject *v9; // rax

  v4 = cocos2d::CCString::createWithFormat("%.02f", a3); /*0x5a91b0*/
  v5 = fminf(20.0, cocos2d::CCString::floatValue(v4)); /*0x5a91c7*/
  v6 = 1036831949; /*0x5a91cb*/
  if ( v5 >= 0.1 ) /*0x5a91d6*/
    v6 = LODWORD(v5); /*0x5a91d8*/
  *(_DWORD *)(a1 + 372) = v6; /*0x5a91db*/
  v7 = *(_QWORD *)(a1 + 16); /*0x5a91e3*/
  if ( v7 ) /*0x5a91ea*/
  {
    *(_DWORD *)(v7 + 1516) = v6; /*0x5a91ec*/
  }
  else
  {
    for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 24)); *((_DWORD *)v9 + 379) = *(_DWORD *)(a1 + 372) ) /*0x5a9201*/
      v9 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 24), i++); /*0x5a9216*/
  }
  return sub_5A9260(a1 - 664); /*0x5a9244*/
}

// [4/8] Address: 0x5a9800
// Method: SetupMGTrigger::sliderChanged
void __fastcall SetupMGTrigger_sliderChanged(__int64 a1, __int64 a2)
{
  float v3; // xmm0_4
  const char *CString; // rax
  cocos2d::CCString *v5; // rax
  __int64 v6; // r8
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+38h] [rbp-10h]

  *(float *)(a1 + 1016) = SliderThumb_getValue(a2) * 10.0; /*0x5a981c*/
  sub_5AA230(a1); /*0x5a9824*/
  v3 = *(float *)(a1 + 1016); /*0x5a9829*/
  CString = "Mixed"; /*0x5a9831*/
  *(_BYTE *)(a1 + 744) = 1; /*0x5a983f*/
  if ( v3 != -99999.0 ) /*0x5a9848*/
  {
    v5 = cocos2d::CCString::createWithFormat("%.02f", v3); /*0x5a9859*/
    CString = cocos2d::CCString::getCString(v5); /*0x5a9862*/
  }
  v7 = 0; /*0x5a986d*/
  v8 = 0; /*0x5a9872*/
  v6 = -1; /*0x5a9877*/
  v9 = 0; /*0x5a987e*/
  do /*0x5a9886*/
    ++v6; /*0x5a9883*/
  while ( CString[v6] ); /*0x5a9886*/
  sub_3C230(&v7); /*0x5a9894*/
  CCTextInputNode_setString(*(_QWORD **)(a1 + 1000), &v7); /*0x5a98a5*/
  *(_BYTE *)(a1 + 744) = 0; /*0x5a98aa*/
}

// [5/8] Address: 0x5b7810
// Method: SetupMGTrigger::~SetupMGTrigger
cocos2d::CCNode *__fastcall SetupMGTrigger__dtor_SetupMGTrigger(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &SetupMGTrigger::`vftable'; /*0x5b7823*/
  *((_QWORD *)Block + 40) = &SetupMGTrigger::`vftable'; /*0x5b7830*/
  *((_QWORD *)Block + 41) = &SetupMGTrigger::`vftable'; /*0x5b783e*/
  *((_QWORD *)Block + 42) = &SetupMGTrigger::`vftable'; /*0x5b784c*/
  *((_QWORD *)Block + 43) = &SetupMGTrigger::`vftable'; /*0x5b785a*/
  *((_QWORD *)Block + 44) = &SetupMGTrigger::`vftable'; /*0x5b7868*/
  *((_QWORD *)Block + 51) = &SetupMGTrigger::`vftable'; /*0x5b7876*/
  *((_QWORD *)Block + 54) = &SetupMGTrigger::`vftable'; /*0x5b7884*/
  *((_QWORD *)Block + 68) = &SetupMGTrigger::`vftable'; /*0x5b7892*/
  *((_QWORD *)Block + 83) = &SetupMGTrigger::`vftable'; /*0x5b78a0*/
  *((_QWORD *)Block + 84) = &SetupMGTrigger::`vftable'; /*0x5b78ae*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x5b78b5*/
  if ( (a2 & 1) != 0 ) /*0x5b78bd*/
    j_j_free(Block); /*0x5b78c7*/
  return Block; /*0x5b78cc*/
}

// [6/8] Address: 0x5b8ad0
// Method: SetupMGTrigger::determineStartValues
void __fastcall SetupMGTrigger_determineStartValues(__int64 a1)
{
  __int64 v2; // rcx
  cocos2d::CCArray *v3; // rbp
  int v4; // edi
  int v5; // esi
  char v6; // r12
  char v7; // r13
  unsigned int v8; // r14d
  char v9; // r15
  float v10; // xmm7_4
  float v11; // xmm8_4
  char v12; // bl
  struct cocos2d::CCObject *v13; // rax
  struct cocos2d::CCObject *v14; // rdx
  int v15; // eax
  const struct cocos2d::CCPoint *v16; // rdx
  char v18; // [rsp+98h] [rbp+10h] BYREF
  float v19; // [rsp+9Ch] [rbp+14h]
  char v20; // [rsp+A0h] [rbp+18h] BYREF
  float v21; // [rsp+A4h] [rbp+1Ch]

  SetupTriggerPopup_determineStartValues(a1); /*0x5b8ade*/
  if ( *(_QWORD *)(a1 + 680) ) /*0x5b8ae3*/
  {
    v3 = (cocos2d::CCArray *)cocos2d::CCArray::create(v2); /*0x5b8afd*/
    cocos2d::CCArray::addObject(v3, *(struct cocos2d::CCObject **)(a1 + 680)); /*0x5b8b00*/
  }
  else
  {
    v3 = *(cocos2d::CCArray **)(a1 + 688); /*0x5b8b08*/
  }
  *(_DWORD *)(a1 + 1016) = -943501440; /*0x5b8b0f*/
  *(_DWORD *)(a1 + 1032) = -99999; /*0x5b8b19*/
  *(_DWORD *)(a1 + 1072) = -99999; /*0x5b8b23*/
  *(_DWORD *)(a1 + 1036) = -943501440; /*0x5b8b2d*/
  if ( v3 ) /*0x5b8b3a*/
  {
    if ( cocos2d::CCArray::count(v3) ) /*0x5b8b43*/
    {
      v4 = -99999; /*0x5b8b61*/
      v5 = -99999; /*0x5b8b6b*/
      v6 = 0; /*0x5b8b72*/
      v7 = 0; /*0x5b8b7a*/
      v8 = 0; /*0x5b8b82*/
      v9 = 0; /*0x5b8b8a*/
      v10 = -99999.0; /*0x5b8b9a*/
      v11 = -99999.0; /*0x5b8ba3*/
      if ( cocos2d::CCArray::count(v3) ) /*0x5b8ba7*/
      {
        v12 = 0; /*0x5b8bb5*/
        do /*0x5b8c9f*/
        {
          v13 = cocos2d::CCArray::objectAtIndex(v3, v8); /*0x5b8bc6*/
          v14 = v13; /*0x5b8bcc*/
          if ( !v12 ) /*0x5b8bd1*/
          {
            if ( v11 == -99999.0 ) /*0x5b8be1*/
            {
              v11 = *((float *)v13 + 367); /*0x5b8be3*/
            }
            else if ( v11 != *((float *)v13 + 367) ) /*0x5b8bef*/
            {
              v11 = -99999.0; /*0x5b8bf1*/
              v12 = 1; /*0x5b8bf5*/
            }
          }
          if ( !v6 ) /*0x5b8bfa*/
          {
            v15 = *((_DWORD *)v13 + 378); /*0x5b8bfc*/
            if ( v4 == -99999 ) /*0x5b8c08*/
            {
              v4 = v15; /*0x5b8c0a*/
            }
            else if ( v4 != v15 ) /*0x5b8c10*/
            {
              v4 = -99999; /*0x5b8c12*/
              v6 = 1; /*0x5b8c17*/
            }
          }
          if ( !v7 ) /*0x5b8c1d*/
          {
            if ( v10 == -99999.0 ) /*0x5b8c2c*/
            {
              v10 = *((float *)v14 + 379); /*0x5b8c2e*/
            }
            else if ( v10 != *((float *)v14 + 379) ) /*0x5b8c38*/
            {
              v10 = -99999.0; /*0x5b8c3a*/
              v7 = 1; /*0x5b8c3d*/
            }
          }
          if ( !v9 ) /*0x5b8c43*/
          {
            v16 = (struct cocos2d::CCObject *)((char *)v14 + 1504); /*0x5b8c45*/
            if ( v5 == -99999 ) /*0x5b8c52*/
            {
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v18, v16); /*0x5b8c5c*/
              v5 = (int)v19; /*0x5b8c62*/
            }
            else
            {
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v20, v16); /*0x5b8c75*/
              if ( v5 != (int)v21 ) /*0x5b8c86*/
              {
                v5 = -99999; /*0x5b8c88*/
                v9 = 1; /*0x5b8c8d*/
              }
            }
          }
          ++v8; /*0x5b8c93*/
        }
        while ( v8 < cocos2d::CCArray::count(v3) ); /*0x5b8c9f*/
        if ( v11 != -99999.0 ) /*0x5b8cb3*/
          *(float *)(a1 + 1016) = v11; /*0x5b8cb5*/
        if ( v4 != -99999 ) /*0x5b8cc4*/
          *(_DWORD *)(a1 + 1032) = v4; /*0x5b8cc6*/
        if ( v10 != -99999.0 ) /*0x5b8cd1*/
          *(float *)(a1 + 1036) = v10; /*0x5b8cd3*/
        if ( v5 != -99999 ) /*0x5b8ce1*/
          *(_DWORD *)(a1 + 1072) = v5; /*0x5b8ce3*/
      }
    }
  }
}

// [7/8] Address: 0x5b8e30
// Method: SetupMGTrigger::textChanged
void __fastcall SetupMGTrigger_textChanged(__int64 a1, _QWORD *a2)
{
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // r8
  const char *v7; // rcx
  float v8; // xmm6_4
  char *v9; // rcx
  cocos2d::CCString *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r8
  const char *v14; // rcx
  int v15; // ebx
  char *v16; // r8
  char *String[2]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v18; // [rsp+48h] [rbp-30h]

  if ( !*(_BYTE *)(a1 + 200) ) /*0x5b8e4e*/
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2) - 1; /*0x5b8e6f*/
    if ( v4 ) /*0x5b8e72*/
    {
      if ( v4 != 2 ) /*0x5b8e7b*/
        return; /*0x5b8e7b*/
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x5b8e92*/
      *(_OWORD *)String = 0; /*0x5b8e9b*/
      v6 = -1; /*0x5b8ea0*/
      v18 = 0; /*0x5b8ea7*/
      do /*0x5b8eb3*/
        ++v6; /*0x5b8eb0*/
      while ( *(_BYTE *)(v5 + v6) ); /*0x5b8eb3*/
      sub_3C230(String); /*0x5b8ec2*/
      v7 = (const char *)String; /*0x5b8ecd*/
      if ( *((_QWORD *)&v18 + 1) > 0xFu ) /*0x5b8ed2*/
        v7 = String[0]; /*0x5b8ed2*/
      v8 = atof(v7); /*0x5b8ee6*/
      if ( *((_QWORD *)&v18 + 1) > 0xFu ) /*0x5b8eee*/
      {
        v9 = String[0]; /*0x5b8ef0*/
        if ( (unsigned __int64)(*((_QWORD *)&v18 + 1) + 1LL) >= 0x1000 ) /*0x5b8f02*/
        {
          v9 = (char *)*((_QWORD *)String[0] - 1); /*0x5b8f04*/
          if ( (unsigned __int64)(String[0] - v9 - 8) > 0x1F ) /*0x5b8f17*/
            invoke_watson(0, 0, 0, 0, 0); /*0x5b8f2c*/
        }
        j_j_free(v9); /*0x5b8f33*/
      }
      v10 = cocos2d::CCString::createWithFormat("%.02f", v8); /*0x5b8f47*/
      *(float *)(a1 + 472) = cocos2d::CCString::floatValue(v10); /*0x5b8f5d*/
      sub_5AA230(a1 - 544); /*0x5b8f65*/
      v11 = *(_QWORD *)(a1 + 464); /*0x5b8f7d*/
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x5b8faa*/
      *(_OWORD *)String = 0; /*0x5b8fb3*/
      v13 = -1; /*0x5b8fb8*/
      v18 = 0; /*0x5b8fbf*/
      do /*0x5b8fc8*/
        ++v13; /*0x5b8fc5*/
      while ( *(_BYTE *)(v12 + v13) ); /*0x5b8fc8*/
      sub_3C230(String); /*0x5b8fd7*/
      v14 = (const char *)String; /*0x5b8fe2*/
      if ( *((_QWORD *)&v18 + 1) > 0xFu ) /*0x5b8fe7*/
        v14 = String[0]; /*0x5b8fe7*/
      v15 = atoi(v14); /*0x5b8ff8*/
      if ( *((_QWORD *)&v18 + 1) > 0xFu ) /*0x5b8ffe*/
      {
        v16 = String[0]; /*0x5b9000*/
        if ( (unsigned __int64)(*((_QWORD *)&v18 + 1) + 1LL) >= 0x1000 ) /*0x5b9012*/
        {
          v16 = (char *)*((_QWORD *)String[0] - 1); /*0x5b9014*/
          if ( (unsigned __int64)(String[0] - v16 - 8) > 0x1F ) /*0x5b9027*/
            invoke_watson(0, 0, 0, 0, 0); /*0x5b903c*/
        }
        j_j_free(v16); /*0x5b9046*/
      }
      *(_DWORD *)(a1 + 528) = (int)(float)((float)v15 * 3.0); /*0x5b9065*/
      sub_5B90F0(a1 - 544); /*0x5b906b*/
      floorf((float)*(int *)(a1 + 528) / 3.0); /*0x5b9083*/
      v11 = *(_QWORD *)(a1 + 520); /*0x5b90b6*/
    }
    sub_83840(v11); /*0x5b90c0*/
  }
}

// [8/8] Address: 0x5b91e0
// Method: SetupMGTrigger::onClose
__int64 __fastcall SetupMGTrigger_onClose(__int64 a1)
{
  *(_QWORD *)(*(_QWORD *)(a1 + 1000) + 608LL) = 0; /*0x5b91f9*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1000) + 1032LL))(*(_QWORD *)(a1 + 1000), 0); /*0x5b920e*/
  *(_QWORD *)(*(_QWORD *)(a1 + 1056) + 608LL) = 0; /*0x5b921d*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1056) + 1032LL))(*(_QWORD *)(a1 + 1056), 0); /*0x5b9232*/
  return SetupTriggerPopup_onClose(a1); /*0x5b923e*/
}
