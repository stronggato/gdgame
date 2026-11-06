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

// Address: 0x5e5820
// Method: SetupShakePopup::init
// Hidden C++ exception states: #wind=3
char __fastcall SetupShakePopup_init(__int64 a1, int a2, int a3, int a4)
{
  char result; // al
  __int64 v6; // rcx
  __int64 v7; // rax
  struct cocos2d::CCLabelBMFont *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  cocos2d::CCObject *v11; // rbx
  cocos2d::CCObject *v12; // rax
  char *v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  int i; // r15d
  unsigned __int64 v19; // rdi
  void **v20; // rbx
  float v21; // xmm6_4
  unsigned __int64 v22; // rcx
  __int64 v23; // rbx
  char *v24; // rsi
  void *v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // rdi
  void **v28; // rbx
  unsigned __int64 v29; // rcx
  __int64 v30; // rbx
  char *v31; // rsi
  void *v32; // rcx
  __int64 v33; // rax
  unsigned __int64 v34; // rdi
  void **v35; // rbx
  unsigned __int64 v36; // rcx
  __int64 v37; // rbx
  char *v38; // rsi
  void *v39; // rcx
  void **v40; // rcx
  struct cocos2d::CCLabelBMFont *v41; // rdi
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rsi
  __int64 v46; // rdx
  void (__fastcall *v47)(_QWORD *, __int64); // r8
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  const char *v51; // r8
  char *v52; // rdi
  __int64 v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rdx
  int v59; // r8d
  __int64 v60; // rsi
  __int64 v61; // rax
  float v62; // xmm1_4
  float Value; // xmm0_4
  float v64; // xmm3_4
  cocos2d::CCRect *v65; // rcx
  float v66; // xmm1_4
  float v67; // xmm0_4
  __int64 v68; // rdi
  __int64 v69; // rbx
  __int64 v70; // rax
  void *v71; // rcx
  float v72; // [rsp+58h] [rbp-A8h] BYREF
  float v73; // [rsp+5Ch] [rbp-A4h]
  _BYTE v74[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 *v75; // [rsp+68h] [rbp-98h] BYREF
  __int128 v76; // [rsp+70h] [rbp-90h] BYREF
  __int64 v77; // [rsp+80h] [rbp-80h]
  __int64 v78; // [rsp+88h] [rbp-78h]
  _BYTE v79[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v80[8]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v81[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v82[8]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v83[8]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v84[8]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v85[8]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v86[8]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v87[16]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v88[8]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v89[16]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v90[16]; // [rsp+F8h] [rbp-8h] BYREF
  char v91; // [rsp+108h] [rbp+8h] BYREF
  char v92; // [rsp+118h] [rbp+18h] BYREF
  void *v93[2]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v94; // [rsp+138h] [rbp+38h]
  unsigned __int64 v95; // [rsp+140h] [rbp+40h]

  result = sub_6060E0(a1, a2, a3, a4, 1133412352, 1, 0);
  if ( result )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 1096LL))(a1);
    v7 = cocos2d::CCDirector::sharedDirector(v6);
    cocos2d::CCDirector::getWinSize(v7, &v72);
    v8 = cocos2d::CCLabelBMFont::create("Setup Shake", (const char *)&qword_6FFF68);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))(
      *(_QWORD *)(a1 + 584),
      v8);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v8 + 160LL))(v8);
    v9 = *(_QWORD *)v8;
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)&v75,
      v72 * 0.5,
      (float)((float)(v73 * 0.5) + (float)(*(float *)(a1 + 736) * 0.5)) - 14.0);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v9 + 184))(v8, v10);
    v75 = (__int128 *)operator new(0x2C8u);
    v11 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite((__int64)v75);
    if ( v11 )
    {
      if ( ButtonSprite_init(
             (__int64)v11,
             (__int64)"OK",
             40,
             0,
             1061997773,
             1,
             "goldFont.fnt",
             (__int64)"GJ_button_01.png",
             1106247680) )
      {
        cocos2d::CCObject::autorelease(v11);
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v11 + 8LL))(v11, 1);
        LODWORD(v11) = 0;
      }
    }
    v12 = CCMenuItemSpriteExtra_create((int)v11, 0, a1, (__int64)sub_9C4B8);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v12);
    v75 = &v76;
    v76 = 0;
    v77 = 0;
    v78 = 0;
    *(_QWORD *)&v76 = sub_3C460(256);
    v77 = 247;
    v78 = 255;
    strcpy(
      (char *)v76,
      "<cg>Shakes</c> the screen for a set duration.\n"
      "<cy>Strength</c> is how intense the shake is.\n"
      "<cl>Interval</c> is how often the screen shakes. Leaving this at 0 means that every frame shakes.\n"
      "Avoid overusing this effect as it can cause bad gameplay.");
    *(_OWORD *)v93 = 0;
    v94 = 4;
    v95 = 15;
    strcpy((char *)v93, "Help");
    v13 = InfoAlertButton_create((__int64)v93, (__int64)&v76);
    (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v13);
    v14 = *(_QWORD *)v13;
    v15 = *(_QWORD *)(a1 + 552);
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)&v75,
      (float)((float)(v72 * 0.5) - (float)(*(float *)(a1 + 732) * 0.5)) + 18.0,
      (float)((float)(*(float *)(a1 + 736) * 0.5) + (float)(v73 * 0.5)) - 18.0);
    cocos2d::CCNode::convertToNodeSpace(v15, v80, v16);
    (*(void (__fastcall **)(char *, __int64))(v14 + 184))(v13, v17);
    sub_607360(a1);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v79, v72 * 0.5, (float)(v73 * 0.5) + 95.0);
    for ( i = 0; i < 3; ++i )
    {
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v74);
      *(_OWORD *)v93 = 0;
      v94 = 0;
      v95 = 15;
      LOBYTE(v93[0]) = 0;
      if ( i )
      {
        if ( i == 1 )
        {
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v84, 0.0, -60.0);
          cocos2d::CCPoint::operator+(v79, v81, v26);
          cocos2d::CCPoint::operator=(v74, v81);
          v27 = v95;
          if ( v95 < 0xA )
          {
            v29 = v95 >> 1;
            if ( v95 <= 0x7FFFFFFFFFFFFFFFLL - (v95 >> 1) )
            {
              v30 = 15;
              if ( v29 + v95 > 0xF )
                v30 = v29 + v95;
            }
            else
            {
              v30 = 0x7FFFFFFFFFFFFFFFLL;
            }
            v31 = (char *)sub_3C460(v30 + 1);
            v94 = 10;
            v95 = v30;
            strcpy(v31, "Interval: ");
            if ( v27 > 0xF )
            {
              v32 = v93[0];
              if ( v27 + 1 >= 0x1000 )
              {
                v32 = (void *)*((_QWORD *)v93[0] - 1);
                if ( (unsigned __int64)((char *)v93[0] - (char *)v32 - 8) > 0x1F )
                  goto LABEL_74;
              }
              j_j_free(v32);
            }
            v93[0] = v31;
            v21 = *(float *)(a1 + 1064);
          }
          else
          {
            v28 = v93;
            if ( v95 > 0xF )
              v28 = (void **)v93[0];
            v94 = 10;
            memmove(v28, "Interval: ", 0xAu);
            *((_BYTE *)v28 + 10) = 0;
            v21 = *(float *)(a1 + 1064);
          }
        }
        else
        {
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v85, 0.0, -120.0);
          cocos2d::CCPoint::operator+(v79, v82, v33);
          cocos2d::CCPoint::operator=(v74, v82);
          v34 = v95;
          if ( v95 < 0xA )
          {
            v36 = v95 >> 1;
            if ( v95 <= 0x7FFFFFFFFFFFFFFFLL - (v95 >> 1) )
            {
              v37 = 15;
              if ( v95 + v36 > 0xF )
                v37 = v95 + v36;
            }
            else
            {
              v37 = 0x7FFFFFFFFFFFFFFFLL;
            }
            v38 = (char *)sub_3C460(v37 + 1);
            v94 = 10;
            v95 = v37;
            strcpy(v38, "Duration: ");
            if ( v34 > 0xF )
            {
              v39 = v93[0];
              if ( v34 + 1 >= 0x1000 )
              {
                v39 = (void *)*((_QWORD *)v93[0] - 1);
                if ( (unsigned __int64)((char *)v93[0] - (char *)v39 - 8) > 0x1F )
LABEL_74:
                  invoke_watson(0, 0, 0, 0, 0);
              }
              j_j_free(v39);
            }
            v93[0] = v38;
          }
          else
          {
            v35 = v93;
            if ( v95 > 0xF )
              v35 = (void **)v93[0];
            v94 = 10;
            memmove(v35, "Duration: ", 0xAu);
            *((_BYTE *)v35 + 10) = 0;
          }
          v21 = *(float *)(a1 + 1016);
        }
      }
      else
      {
        cocos2d::CCPoint::operator=(v74, v79);
        v19 = v95;
        if ( v95 < 0xA )
        {
          v22 = v95 >> 1;
          if ( v95 <= 0x7FFFFFFFFFFFFFFFLL - (v95 >> 1) )
          {
            v23 = 15;
            if ( v22 + v95 > 0xF )
              v23 = v22 + v95;
          }
          else
          {
            v23 = 0x7FFFFFFFFFFFFFFFLL;
          }
          v24 = (char *)sub_3C460(v23 + 1);
          v94 = 10;
          v95 = v23;
          strcpy(v24, "Strength: ");
          if ( v19 > 0xF )
          {
            v25 = v93[0];
            if ( v19 + 1 >= 0x1000 )
            {
              v25 = (void *)*((_QWORD *)v93[0] - 1);
              if ( (unsigned __int64)((char *)v93[0] - (char *)v25 - 8) > 0x1F )
                goto LABEL_74;
            }
            j_j_free(v25);
          }
          v93[0] = v24;
          v21 = *(float *)(a1 + 1040);
        }
        else
        {
          v20 = v93;
          if ( v95 > 0xF )
            v20 = (void **)v93[0];
          v94 = 10;
          memmove(v20, "Strength: ", 0xAu);
          *((_BYTE *)v20 + 10) = 0;
          v21 = *(float *)(a1 + 1040);
        }
      }
      v40 = v93;
      if ( v95 > 0xF )
        v40 = (void **)v93[0];
      v41 = cocos2d::CCLabelBMFont::create((const char *)v40, "goldFont.fnt");
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v41 + 160LL))(v41);
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, _BYTE *))(*(_QWORD *)v41 + 184LL))(v41, v74);
      v42 = *(_QWORD *)v41;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v86, 1.0, 0.5);
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v42 + 288))(v41, v43);
      (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))(
        *(_QWORD *)(a1 + 584),
        v41);
      cocos2d::CCRect::CCRect((cocos2d::CCRect *)v89, 0.0, 0.0, 40.0, 40.0);
      cocos2d::CCRect::CCRect((cocos2d::CCRect *)v90, (const struct cocos2d::CCRect *)v89);
      v45 = (_QWORD *)cocos2d::extension::CCScale9Sprite::create("square02_small.png", v44);
      v46 = v45[40];
      v47 = *(void (__fastcall **)(_QWORD *, __int64))(v46 + 40);
      LOBYTE(v46) = 100;
      v47(v45 + 40, v46);
      cocos2d::CCSize::CCSize((cocos2d::CCSize *)v83, 70.0, 30.0);
      (*(void (__fastcall **)(_QWORD *, _BYTE *))(*v45 + 312LL))(v45, v83);
      (*(void (__fastcall **)(_QWORD, _QWORD *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
        *(_QWORD *)(a1 + 584),
        v45,
        0xFFFFFFFFLL);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v87, 45.0, 0.0);
      cocos2d::CCPoint::operator+(v74, v80, v48);
      (*(void (__fastcall **)(_QWORD *, _BYTE *))(*v45 + 184LL))(v45, v80);
      v51 = "Num";
      if ( v21 == -99999.0 )
        v51 = "Mixed";
      v52 = CCTextInputNode_create(v50, v49, (__int64)v51);
      (*(void (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
        *(_QWORD *)(a1 + 584),
        v52,
        20);
      v53 = *(_QWORD *)v52;
      v54 = (*(__int64 (__fastcall **)(_QWORD *))(*v45 + 200LL))(v45);
      (*(void (__fastcall **)(char *, __int64))(v53 + 184))(v52, v54);
      *((_DWORD *)v52 + 143) = 1058642330;
      sub_555B0(v52, v55);
      *((_DWORD *)v52 + 142) = 1128792064;
      sub_555B0(v52, v56);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v52 + 75) + 336LL))(*((_QWORD *)v52 + 75), 0);
      *((_DWORD *)v52 + 154) = 4;
      v77 = 11;
      v78 = 15;
      *(_QWORD *)&v76 = 0x3736353433323130LL;
      *((_QWORD *)&v76 + 1) = 3029304;
      GameManager_getMenuMusicFile(v52, &v76);
      *((_WORD *)v52 + 290) = -21896;
      v52[582] = -16;
      sub_555B0(v52, v57);
      *((_DWORD *)v52 + 144) = 1056964608;
      sub_555B0(v52, v58);
      v52[424] = 1;
      *((_QWORD *)v52 + 76) = a1 + 544;
      v60 = sub_83590(
              a1,
              (unsigned int)SetupShakePopup_sliderChanged,
              v59,
              (unsigned int)"slidergroove.png",
              (__int64)"sliderthumb.png",
              (__int64)"sliderthumbsel.png",
              1061997773);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v60 + 416) + 336LL))(*(_QWORD *)(v60 + 416), 0);
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 584) + 464LL))(*(_QWORD *)(a1 + 584), v60);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v88, 0.0, -32.0);
      cocos2d::CCPoint::operator+(v74, &v75, v61);
      (*(void (__fastcall **)(__int64, __int128 **))(*(_QWORD *)v60 + 184LL))(v60, &v75);
      if ( i )
      {
        if ( i == 1 )
        {
          *(_QWORD *)(a1 + 1048) = v52;
          (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v52 + 64LL))(v52, 8);
          *(_QWORD *)(a1 + 1056) = v60;
          (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(v60 + 408) + 456LL) + 64LL))(
            *(_QWORD *)(*(_QWORD *)(v60 + 408) + 456LL),
            7);
          v62 = fminf(1.0, v21 / 0.1);
          if ( v62 < 0.0 )
            v62 = 0.0;
          SliderThumb_setValue(*(float **)(*(_QWORD *)(v60 + 408) + 456LL), v62);
          Value = SliderThumb_getValue(*(float **)(*(_QWORD *)(v60 + 408) + 456LL));
          v64 = *(float *)(v60 + 432);
          if ( (float)(Value * v64) <= v64 )
            v64 = Value * v64;
          v65 = (cocos2d::CCRect *)&v91;
        }
        else
        {
          *(_QWORD *)(a1 + 1000) = v52;
          (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v52 + 64LL))(v52, 5);
          *(_QWORD *)(a1 + 1008) = v60;
          (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(v60 + 408) + 456LL) + 64LL))(
            *(_QWORD *)(*(_QWORD *)(v60 + 408) + 456LL),
            3);
          v66 = fminf(1.0, v21 * 0.5);
          if ( v66 < 0.0 )
            v66 = 0.0;
          SliderThumb_setValue(*(float **)(*(_QWORD *)(v60 + 408) + 456LL), v66);
          v67 = SliderThumb_getValue(*(float **)(*(_QWORD *)(v60 + 408) + 456LL));
          v64 = *(float *)(v60 + 432);
          if ( (float)(v67 * v64) <= v64 )
            v64 = v64 * v67;
          v65 = (cocos2d::CCRect *)&v92;
        }
        v68 = **(_QWORD **)(v60 + 416);
        v69 = *(_QWORD *)(v60 + 416);
        cocos2d::CCRect::CCRect(v65, 0.0, 0.0, v64, *(float *)(v60 + 436));
        (*(void (__fastcall **)(__int64, __int64))(v68 + 992))(v69, v70);
      }
      else
      {
        *(_QWORD *)(a1 + 1024) = v52;
        (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v52 + 64LL))(v52, 6);
        *(_QWORD *)(a1 + 1032) = v60;
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(v60 + 408) + 456LL) + 64LL))(
          *(_QWORD *)(*(_QWORD *)(v60 + 408) + 456LL),
          4);
        sub_83840(v60);
      }
      if ( v95 > 0xF )
      {
        v71 = v93[0];
        if ( v95 + 1 >= 0x1000 )
        {
          v71 = (void *)*((_QWORD *)v93[0] - 1);
          if ( (unsigned __int64)((char *)v93[0] - (char *)v71 - 8) > 0x1F )
            invoke_watson(0, 0, 0, 0, 0);
        }
        j_j_free(v71);
      }
    }
    sub_5E6980(a1, 0);
    sub_5A98C0(a1, 0);
    sub_5E6AD0(a1, 0);
    *(_BYTE *)(a1 + 744) = 0;
    return 1;
  }
  return result;
}
