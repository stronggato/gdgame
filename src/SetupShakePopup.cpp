#include <Geode/binding/SetupShakePopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/7] Address: 0x5e5610
// Method: SetupShakePopup::~SetupShakePopup
cocos2d::CCNode *__fastcall SetupShakePopup__dtor_SetupShakePopup(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &SetupShakePopup::`vftable'; /*0x5e5623*/
  *((_QWORD *)Block + 40) = &SetupShakePopup::`vftable'; /*0x5e5630*/
  *((_QWORD *)Block + 41) = &SetupShakePopup::`vftable'; /*0x5e563e*/
  *((_QWORD *)Block + 42) = &SetupShakePopup::`vftable'; /*0x5e564c*/
  *((_QWORD *)Block + 43) = &SetupShakePopup::`vftable'; /*0x5e565a*/
  *((_QWORD *)Block + 44) = &SetupShakePopup::`vftable'; /*0x5e5668*/
  *((_QWORD *)Block + 51) = &SetupShakePopup::`vftable'; /*0x5e5676*/
  *((_QWORD *)Block + 54) = &SetupShakePopup::`vftable'; /*0x5e5684*/
  *((_QWORD *)Block + 68) = &SetupShakePopup::`vftable'; /*0x5e5692*/
  *((_QWORD *)Block + 83) = &SetupShakePopup::`vftable'; /*0x5e56a0*/
  *((_QWORD *)Block + 84) = &SetupShakePopup::`vftable'; /*0x5e56ae*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x5e56b5*/
  if ( (a2 & 1) != 0 ) /*0x5e56bd*/
    j_j_free(Block); /*0x5e56c7*/
  return Block; /*0x5e56cc*/
}

// [2/7] Address: 0x5e56e0
// Method: SetupShakePopup::create
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall SetupShakePopup_create(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rsi

  v4 = operator new(0x430u); /*0x5e56ff*/
  SetupTriggerPopup_SetupTriggerPopup((__int64)v4); /*0x5e570a*/
  *v4 = &SetupShakePopup::`vftable'; /*0x5e5716*/
  v4[40] = &SetupShakePopup::`vftable'; /*0x5e5720*/
  v4[41] = &SetupShakePopup::`vftable'; /*0x5e572e*/
  v4[42] = &SetupShakePopup::`vftable'; /*0x5e573c*/
  v4[43] = &SetupShakePopup::`vftable'; /*0x5e574a*/
  v4[44] = &SetupShakePopup::`vftable'; /*0x5e5758*/
  v4[51] = &SetupShakePopup::`vftable'; /*0x5e5766*/
  v4[54] = &SetupShakePopup::`vftable'; /*0x5e5774*/
  v4[68] = &SetupShakePopup::`vftable'; /*0x5e5782*/
  v4[83] = &SetupShakePopup::`vftable'; /*0x5e5790*/
  v4[84] = &SetupShakePopup::`vftable'; /*0x5e579e*/
  *((_DWORD *)v4 + 254) = 0; /*0x5e57a5*/
  *((_DWORD *)v4 + 260) = 0; /*0x5e57af*/
  *((_DWORD *)v4 + 266) = 0; /*0x5e57b9*/
  if ( (unsigned __int8)SetupShakePopup_init(v4, a1, a2) ) /*0x5e57cc*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v4); /*0x5e57d8*/
    return v4; /*0x5e57de*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v4 + 8LL))(v4, 1); /*0x5e5800*/
    return 0; /*0x5e5803*/
  }
}

// [4/7] Address: 0x5e6590
// Method: SetupShakePopup::determineStartValues
void __fastcall SetupShakePopup_determineStartValues(__int64 a1)
{
  __int64 v2; // rcx
  cocos2d::CCArray *v3; // rbx
  char v4; // bp
  unsigned int v5; // esi
  char v6; // r14
  char v7; // r15
  float v8; // xmm7_4
  float v9; // xmm8_4
  float v10; // xmm9_4
  float *v11; // rax

  SetupTriggerPopup_determineStartValues(a1); /*0x5e659a*/
  if ( *(_QWORD *)(a1 + 680) ) /*0x5e659f*/
  {
    v3 = (cocos2d::CCArray *)cocos2d::CCArray::create(v2); /*0x5e65b9*/
    cocos2d::CCArray::addObject(v3, *(struct cocos2d::CCObject **)(a1 + 680)); /*0x5e65bc*/
  }
  else
  {
    v3 = *(cocos2d::CCArray **)(a1 + 688); /*0x5e65c4*/
  }
  if ( v3 ) /*0x5e65ce*/
  {
    if ( cocos2d::CCArray::count(v3) ) /*0x5e65d7*/
    {
      v4 = 0; /*0x5e65f8*/
      v5 = 0; /*0x5e6603*/
      v6 = 0; /*0x5e660a*/
      v7 = 0; /*0x5e6612*/
      v8 = -99999.0; /*0x5e6622*/
      v9 = -99999.0; /*0x5e662b*/
      v10 = -99999.0; /*0x5e6635*/
      if ( cocos2d::CCArray::count(v3) ) /*0x5e6639*/
      {
        do /*0x5e66e2*/
        {
          v11 = (float *)cocos2d::CCArray::objectAtIndex(v3, v5); /*0x5e6655*/
          if ( !v7 ) /*0x5e665e*/
          {
            if ( v10 == -99999.0 ) /*0x5e666e*/
            {
              v10 = v11[367]; /*0x5e6670*/
            }
            else if ( v10 != v11[367] ) /*0x5e667c*/
            {
              v10 = -99999.0; /*0x5e667e*/
              v7 = 1; /*0x5e6682*/
            }
          }
          if ( !v6 ) /*0x5e6688*/
          {
            if ( v9 == -99999.0 ) /*0x5e6698*/
            {
              v9 = v11[373]; /*0x5e669a*/
            }
            else if ( v9 != v11[373] ) /*0x5e66a6*/
            {
              v9 = -99999.0; /*0x5e66a8*/
              v6 = 1; /*0x5e66ac*/
            }
          }
          if ( !v4 ) /*0x5e66b2*/
          {
            if ( v8 == -99999.0 ) /*0x5e66c1*/
            {
              v8 = v11[374]; /*0x5e66c3*/
            }
            else if ( v8 != v11[374] ) /*0x5e66cd*/
            {
              v8 = -99999.0; /*0x5e66cf*/
              v4 = 1; /*0x5e66d2*/
            }
          }
          ++v5; /*0x5e66d8*/
        }
        while ( v5 < cocos2d::CCArray::count(v3) ); /*0x5e66e2*/
        if ( v10 != -99999.0 ) /*0x5e66ee*/
          *(float *)(a1 + 1016) = v10; /*0x5e66f0*/
        if ( v9 != -99999.0 ) /*0x5e66ff*/
          *(float *)(a1 + 1040) = v9; /*0x5e6701*/
        if ( v8 != -99999.0 ) /*0x5e670f*/
          *(float *)(a1 + 1064) = v8; /*0x5e6711*/
      }
    }
  }
}

// [5/7] Address: 0x5e6760
// Method: SetupShakePopup::sliderChanged
void __fastcall SetupShakePopup_sliderChanged(__int64 a1, __int64 a2)
{
  float Value; // xmm0_4
  float v5; // xmm0_4
  const char *CString; // rax
  cocos2d::CCString *v7; // rax
  __int64 v8; // r8
  _QWORD *v9; // rcx
  float v10; // xmm0_4
  const char *v11; // rax
  cocos2d::CCString *v12; // rax
  __int64 v13; // r8
  float v14; // xmm0_4
  const char *v15; // rax
  cocos2d::CCString *v16; // rax
  __int64 v17; // r8
  __int128 v18; // [rsp+20h] [rbp-38h] BYREF
  __int64 v19; // [rsp+30h] [rbp-28h]
  __int64 v20; // [rsp+38h] [rbp-20h]

  Value = SliderThumb_getValue(a2); /*0x5e6778*/
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 3 ) /*0x5e678c*/
  {
    *(float *)(a1 + 1016) = Value + Value; /*0x5e6799*/
    sub_5AA230(a1); /*0x5e67a1*/
    v5 = *(float *)(a1 + 1016); /*0x5e67a6*/
    CString = "Mixed"; /*0x5e67ae*/
    *(_BYTE *)(a1 + 744) = 1; /*0x5e67bc*/
    if ( v5 != -99999.0 ) /*0x5e67c5*/
    {
      v7 = cocos2d::CCString::createWithFormat("%.02f", v5); /*0x5e67d6*/
      CString = cocos2d::CCString::getCString(v7); /*0x5e67df*/
    }
    v18 = 0; /*0x5e67ea*/
    v19 = 0; /*0x5e67ef*/
    v8 = -1; /*0x5e67f4*/
    v20 = 0; /*0x5e67fb*/
    do /*0x5e6803*/
      ++v8; /*0x5e6800*/
    while ( CString[v8] ); /*0x5e6803*/
    sub_3C230(&v18); /*0x5e6811*/
    v9 = *(_QWORD **)(a1 + 1000); /*0x5e6816*/
  }
  else if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 7 ) /*0x5e6831*/
  {
    *(float *)(a1 + 1064) = Value * 0.1; /*0x5e683f*/
    sub_5E6BA0(a1); /*0x5e6847*/
    v10 = *(float *)(a1 + 1064); /*0x5e684c*/
    v11 = "Mixed"; /*0x5e6854*/
    *(_BYTE *)(a1 + 744) = 1; /*0x5e6862*/
    if ( v10 != -99999.0 ) /*0x5e686b*/
    {
      v12 = cocos2d::CCString::createWithFormat("%.02f", v10); /*0x5e687c*/
      v11 = cocos2d::CCString::getCString(v12); /*0x5e6885*/
    }
    v18 = 0; /*0x5e6890*/
    v19 = 0; /*0x5e6895*/
    v13 = -1; /*0x5e689a*/
    v20 = 0; /*0x5e68a1*/
    do /*0x5e68a9*/
      ++v13; /*0x5e68a6*/
    while ( v11[v13] ); /*0x5e68a9*/
    sub_3C230(&v18); /*0x5e68b7*/
    v9 = *(_QWORD **)(a1 + 1048); /*0x5e68bc*/
  }
  else
  {
    *(float *)(a1 + 1040) = Value * 5.0; /*0x5e68d0*/
    sub_5E6A50(a1); /*0x5e68d8*/
    v14 = *(float *)(a1 + 1040); /*0x5e68dd*/
    v15 = "Mixed"; /*0x5e68e5*/
    *(_BYTE *)(a1 + 744) = 1; /*0x5e68f3*/
    if ( v14 != -99999.0 ) /*0x5e68fc*/
    {
      v16 = cocos2d::CCString::createWithFormat("%.02f", v14); /*0x5e690d*/
      v15 = cocos2d::CCString::getCString(v16); /*0x5e6916*/
    }
    v18 = 0; /*0x5e6921*/
    v19 = 0; /*0x5e6926*/
    v17 = -1; /*0x5e692b*/
    v20 = 0; /*0x5e6932*/
    do /*0x5e693a*/
      ++v17; /*0x5e6937*/
    while ( v15[v17] ); /*0x5e693a*/
    sub_3C230(&v18); /*0x5e6948*/
    v9 = *(_QWORD **)(a1 + 1024); /*0x5e694d*/
  }
  CCTextInputNode_setString(v9, &v18); /*0x5e6959*/
  *(_BYTE *)(a1 + 744) = 0; /*0x5e6963*/
}

// [6/7] Address: 0x5e6c20
// Method: SetupShakePopup::textChanged
void __fastcall SetupShakePopup_textChanged(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  const char *v6; // rcx
  float v7; // xmm6_4
  char *v8; // rcx
  cocos2d::CCString *v9; // rax
  bool v10; // zf
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  const char *v14; // rcx
  float v15; // xmm6_4
  char *v16; // rcx
  cocos2d::CCString *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r8
  const char *v21; // rcx
  float v22; // xmm6_4
  char *v23; // rcx
  cocos2d::CCString *v24; // rax
  char *String[2]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v26; // [rsp+48h] [rbp-38h]

  if ( !*(_BYTE *)(a1 + 200) ) /*0x5e6c4f*/
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2) == 5 ) /*0x5e6c6d*/
    {
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x5e6c84*/
      *(_OWORD *)String = 0; /*0x5e6c8d*/
      v5 = -1; /*0x5e6c91*/
      v26 = 0; /*0x5e6c98*/
      do /*0x5e6ca3*/
        ++v5; /*0x5e6ca0*/
      while ( *(_BYTE *)(v4 + v5) ); /*0x5e6ca3*/
      sub_3C230(String); /*0x5e6cb0*/
      v6 = (const char *)String; /*0x5e6cba*/
      if ( *((_QWORD *)&v26 + 1) > 0xFu ) /*0x5e6cbe*/
        v6 = String[0]; /*0x5e6cbe*/
      v7 = atof(v6); /*0x5e6cd0*/
      if ( *((_QWORD *)&v26 + 1) > 0xFu ) /*0x5e6cd8*/
      {
        v8 = String[0]; /*0x5e6cda*/
        if ( (unsigned __int64)(*((_QWORD *)&v26 + 1) + 1LL) >= 0x1000 ) /*0x5e6ceb*/
        {
          v8 = (char *)*((_QWORD *)String[0] - 1); /*0x5e6ced*/
          if ( (unsigned __int64)(String[0] - v8 - 8) > 0x1F ) /*0x5e6d00*/
            invoke_watson(0, 0, 0, 0, 0); /*0x5e6d11*/
        }
        j_j_free(v8); /*0x5e6d18*/
      }
      v9 = cocos2d::CCString::createWithFormat("%.02f", v7); /*0x5e6d31*/
      *(float *)(a1 + 472) = fminf(10.0, fmaxf(0.0, cocos2d::CCString::floatValue(v9))); /*0x5e6d60*/
      sub_5AA230(a1 - 544); /*0x5e6d68*/
      sub_83840(*(_QWORD *)(a1 + 464)); /*0x5e6d93*/
    }
    else
    {
      v10 = (*(unsigned int (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2) == 8; /*0x5e6db9*/
      v11 = *(_QWORD *)(a2[75] + 600LL); /*0x5e6dbc*/
      if ( v10 ) /*0x5e6dbf*/
      {
        v12 = (*(__int64 (**)(void))(v11 + 8))(); /*0x5e6dc5*/
        *(_OWORD *)String = 0; /*0x5e6dce*/
        v13 = -1; /*0x5e6dd2*/
        v26 = 0; /*0x5e6dd9*/
        do /*0x5e6de3*/
          ++v13; /*0x5e6de0*/
        while ( *(_BYTE *)(v12 + v13) ); /*0x5e6de3*/
        sub_3C230(String); /*0x5e6df0*/
        v14 = (const char *)String; /*0x5e6dfa*/
        if ( *((_QWORD *)&v26 + 1) > 0xFu ) /*0x5e6dfe*/
          v14 = String[0]; /*0x5e6dfe*/
        v15 = atof(v14); /*0x5e6e10*/
        if ( *((_QWORD *)&v26 + 1) > 0xFu ) /*0x5e6e18*/
        {
          v16 = String[0]; /*0x5e6e1a*/
          if ( (unsigned __int64)(*((_QWORD *)&v26 + 1) + 1LL) >= 0x1000 ) /*0x5e6e2b*/
          {
            v16 = (char *)*((_QWORD *)String[0] - 1); /*0x5e6e2d*/
            if ( (unsigned __int64)(String[0] - v16 - 8) > 0x1F ) /*0x5e6e40*/
              invoke_watson(0, 0, 0, 0, 0); /*0x5e6e51*/
          }
          j_j_free(v16); /*0x5e6e58*/
        }
        v17 = cocos2d::CCString::createWithFormat("%.02f", v15); /*0x5e6e6c*/
        *(float *)(a1 + 520) = fminf(0.2, fmaxf(0.0, cocos2d::CCString::floatValue(v17))); /*0x5e6e98*/
        sub_5E6BA0(a1 - 544); /*0x5e6ea0*/
        v18 = *(_QWORD *)(a1 + 512); /*0x5e6eb5*/
      }
      else
      {
        v19 = (*(__int64 (**)(void))(v11 + 8))(); /*0x5e6ec1*/
        *(_OWORD *)String = 0; /*0x5e6eca*/
        v20 = -1; /*0x5e6ece*/
        v26 = 0; /*0x5e6ed5*/
        do /*0x5e6ee3*/
          ++v20; /*0x5e6ee0*/
        while ( *(_BYTE *)(v19 + v20) ); /*0x5e6ee3*/
        sub_3C230(String); /*0x5e6ef0*/
        v21 = (const char *)String; /*0x5e6efa*/
        if ( *((_QWORD *)&v26 + 1) > 0xFu ) /*0x5e6efe*/
          v21 = String[0]; /*0x5e6efe*/
        v22 = atof(v21); /*0x5e6f10*/
        if ( *((_QWORD *)&v26 + 1) > 0xFu ) /*0x5e6f18*/
        {
          v23 = String[0]; /*0x5e6f1a*/
          if ( (unsigned __int64)(*((_QWORD *)&v26 + 1) + 1LL) >= 0x1000 ) /*0x5e6f2b*/
          {
            v23 = (char *)*((_QWORD *)String[0] - 1); /*0x5e6f2d*/
            if ( (unsigned __int64)(String[0] - v23 - 8) > 0x1F ) /*0x5e6f40*/
              invoke_watson(0, 0, 0, 0, 0); /*0x5e6f51*/
          }
          j_j_free(v23); /*0x5e6f58*/
        }
        v24 = cocos2d::CCString::createWithFormat("%.02f", v22); /*0x5e6f6c*/
        *(float *)(a1 + 496) = fminf(100.0, fmaxf(0.0, cocos2d::CCString::floatValue(v24))); /*0x5e6f98*/
        sub_5E6A50(a1 - 544); /*0x5e6fa0*/
        v18 = *(_QWORD *)(a1 + 488); /*0x5e6fb5*/
      }
      sub_83840(v18); /*0x5e6fcf*/
    }
  }
}

// [7/7] Address: 0x5e7000
// Method: SetupShakePopup::onClose
__int64 __fastcall SetupShakePopup_onClose(_QWORD *a1)
{
  *(_QWORD *)(a1[128] + 608LL) = 0; /*0x5e7019*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a1[128] + 1032LL))(a1[128], 0); /*0x5e702e*/
  *(_QWORD *)(a1[125] + 608LL) = 0; /*0x5e703d*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a1[125] + 1032LL))(a1[125], 0); /*0x5e7052*/
  *(_QWORD *)(a1[131] + 608LL) = 0; /*0x5e7061*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a1[131] + 1032LL))(a1[131], 0); /*0x5e7076*/
  return SetupTriggerPopup_onClose((__int64)a1); /*0x5e7082*/
}
