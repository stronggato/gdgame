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

// Address: 0x99e30
// Method: SetupMGTrigger::init
// Hidden C++ exception states: #wind=7
char __fastcall SetupMGTrigger_init(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char result; // al
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  char *v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  cocos2d::CCObject *v18; // rbx
  cocos2d::CCObject *v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  float v24; // xmm10_4
  float v25; // xmm1_4
  float v26; // xmm13_4
  float v27; // xmm14_4
  float v28; // xmm11_4
  struct cocos2d::CCLabelBMFont *v29; // rdi
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rdx
  const struct cocos2d::CCPoint *v39; // rax
  __int64 v40; // rax
  struct cocos2d::CCLabelBMFont *v41; // rdi
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rbx
  float v49; // xmm10_4
  float v50; // xmm6_4
  float v51; // xmm11_4
  __int64 v52; // rax
  __int64 v53; // rdx
  const struct cocos2d::CCPoint *v54; // rax
  __int64 v55; // rbx
  __int64 v56; // rax
  struct cocos2d::CCSprite *v57; // rax
  cocos2d::CCObject *v58; // rsi
  __int64 v59; // rdi
  __int64 v60; // rbx
  __int64 v61; // rax
  __int64 v62; // rax
  float v63; // xmm10_4
  cocos2d::CCObject *v64; // rbx
  cocos2d::CCObject *v65; // rsi
  __int64 v66; // rdi
  __int64 v67; // rbx
  __int64 v68; // rax
  __int64 v69; // rax
  cocos2d::CCObject *v70; // rbx
  cocos2d::CCObject *v71; // rsi
  __int64 v72; // rdi
  __int64 v73; // rbx
  __int64 v74; // rax
  __int64 v75; // rax
  float v76; // xmm7_4
  struct cocos2d::CCLabelBMFont *v77; // rax
  __int64 v78; // rdi
  __int64 v79; // rbx
  __int64 v80; // rax
  __int64 v81; // rax
  struct cocos2d::CCLabelBMFont *v82; // rax
  __int64 v83; // rdi
  __int64 v84; // rbx
  __int64 v85; // rax
  __int64 v86; // rdi
  __int64 v87; // rbx
  __int64 v88; // rax
  __int64 v89[2]; // [rsp+50h] [rbp-B0h] BYREF
  float v90; // [rsp+60h] [rbp-A0h] BYREF
  float v91; // [rsp+64h] [rbp-9Ch]
  float v92; // [rsp+68h] [rbp-98h]
  float v93; // [rsp+70h] [rbp-90h] BYREF
  __int128 v94; // [rsp+78h] [rbp-88h] BYREF
  __int64 v95; // [rsp+88h] [rbp-78h]
  __int64 v96; // [rsp+90h] [rbp-70h]
  __int128 v97; // [rsp+98h] [rbp-68h] BYREF
  __int64 v98; // [rsp+A8h] [rbp-58h]
  __int64 v99; // [rsp+B0h] [rbp-50h]
  int v100; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v101[32]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v102[8]; // [rsp+E8h] [rbp-18h] BYREF
  int v103; // [rsp+F0h] [rbp-10h]
  char v104; // [rsp+F4h] [rbp-Ch]
  int v105; // [rsp+F8h] [rbp-8h]
  int v106; // [rsp+FCh] [rbp-4h]
  char v107; // [rsp+100h] [rbp+0h]
  int v108; // [rsp+104h] [rbp+4h]
  int v109; // [rsp+108h] [rbp+8h]
  int v110; // [rsp+10Ch] [rbp+Ch]
  int v111; // [rsp+110h] [rbp+10h]
  int v112; // [rsp+114h] [rbp+14h]
  int v113; // [rsp+118h] [rbp+18h]
  char v114; // [rsp+11Ch] [rbp+1Ch]
  char v115; // [rsp+11Dh] [rbp+1Dh]
  int v116; // [rsp+120h] [rbp+20h]
  _BYTE v117[32]; // [rsp+128h] [rbp+28h] BYREF
  int v118; // [rsp+148h] [rbp+48h]
  _BYTE v119[32]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v120[176]; // [rsp+170h] [rbp+70h] BYREF

  result = sub_6060E0(a1, 0, 0, a4, 1133248512, 1, 0);
  if ( result )
  {
    *(_BYTE *)(a1 + 744) = 1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 1096LL))(a1);
    *(_BYTE *)(a1 + 596) = 1;
    v7 = cocos2d::CCDirector::sharedDirector(v6);
    cocos2d::CCDirector::getWinSize(v7, &v90);
    v12 = cocos2d::CCMenu::create(v9, v8, v10, v11);
    *(_QWORD *)(a1 + 552) = v12;
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v12, 10);
    v89[0] = (__int64)&v97;
    v97 = 0;
    v98 = 0;
    v99 = 0;
    *(_QWORD *)&v97 = sub_3C460(256);
    v98 = 251;
    v99 = 255;
    strcpy(
      (char *)v97,
      "<cg>Auto-Save:</c> saves your level at a set interval while editing.\n"
      "<cy>Auto-Backup:</c> keeps timestamped copies of your level based on active editing time, so you can go back to an"
      " older version. The options button sets how many are kept per level.");
    v94 = 0;
    v95 = 0;
    v96 = 0;
    *(_QWORD *)&v94 = sub_3C460(32);
    v95 = 18;
    v96 = 31;
    strcpy((char *)v94, "Auto-Save Settings");
    v13 = InfoAlertButton_create((__int64)&v94, (__int64)&v97);
    (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v13);
    v14 = *(_QWORD *)v13;
    v15 = *(_QWORD *)(a1 + 552);
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)v89,
      (float)((float)(*(float *)(a1 + 732) * 0.5) + (float)(v90 * 0.5)) - 2.0,
      (float)((float)(*(float *)(a1 + 736) * 0.5) + (float)(v91 * 0.5)) - 2.0);
    cocos2d::CCNode::convertToNodeSpace(v15, &v93, v16);
    (*(void (__fastcall **)(char *, __int64))(v14 + 184))(v13, v17);
    v89[0] = (__int64)operator new(0x2C8u);
    v18 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite(v89[0]);
    if ( v18 )
    {
      if ( ButtonSprite_init(
             (__int64)v18,
             (__int64)"OK",
             40,
             0,
             1061997773,
             1,
             "goldFont.fnt",
             (__int64)"GJ_button_01.png",
             1106247680) )
      {
        cocos2d::CCObject::autorelease(v18);
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v18 + 8LL))(v18, 1);
        LODWORD(v18) = 0;
      }
    }
    v19 = CCMenuItemSpriteExtra_create((int)v18, 0, a1, (__int64)sub_9C4B8);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v19);
    v20 = *(_QWORD *)v19;
    v21 = *(_QWORD *)(a1 + 552);
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)v89,
      v90 * 0.5,
      (float)((float)(v91 * 0.5) - (float)(*(float *)(a1 + 736) * 0.5)) + 25.0);
    cocos2d::CCNode::convertToNodeSpace(v21, &v93, v22);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v20 + 184))(v19, v23);
    v24 = v90 * 0.5;
    v92 = v90 * 0.5;
    v25 = (float)((float)(v91 * 0.5) + (float)(*(float *)(a1 + 736) * 0.5)) - 12.0;
    v26 = (float)(v90 * 0.5) - 100.0;
    v27 = (float)(v90 * 0.5) + 60.0;
    v93 = v25 - 133.0;
    v28 = *(float *)(a1 + 732) - 30.0;
    v29 = cocos2d::CCLabelBMFont::create("Auto-Save", "goldFont.fnt");
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v29 + 160LL))(v29);
    v30 = *(_QWORD *)v29;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v89, v24, (float)(v25 - 50.0) + 47.0);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v30 + 184))(v29, v31);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))(
      *(_QWORD *)(a1 + 584),
      v29);
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)&v94, 0.0, 0.0, 40.0, 40.0);
    v33 = cocos2d::extension::CCScale9Sprite::create("square02_small.png", v32);
    v34 = *(_QWORD *)v33;
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)v89, v28, 50.0);
    (*(void (__fastcall **)(__int64, __int64))(v34 + 312))(v33, v35);
    v36 = *(_QWORD *)v33;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v89, v92, (float)(v25 - 50.0) + 6.0);
    (*(void (__fastcall **)(__int64, __int64))(v36 + 184))(v33, v37);
    (**(void (__fastcall ***)(__int64, void *))(v33 + 320))(v33 + 320, &unk_6FDD14);
    LOBYTE(v38) = 50;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v33 + 320) + 40LL))(v33 + 320, v38);
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
      *(_QWORD *)(a1 + 584),
      v33,
      0xFFFFFFFFLL);
    v89[0] = (__int64)&v97;
    v98 = 7;
    v99 = 15;
    v97 = 0x64656C62616E45uLL;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v94, v26, v25 - 50.0);
    SetupTriggerPopup_createToggleValueControl(a1, -1, (__int64)&v97, v39, 1, 0, 0, 1.0);
    sub_9ACF0(&v100);
    v100 = -2;
    sub_3F5A0(v101, "Interval (min):", 0xFu);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v94, v27, v25 - 50.0);
    cocos2d::CCPoint::operator=(v102, v40);
    v103 = 1058642330;
    v104 = 1;
    v107 = 1;
    v115 = 1;
    v118 = 1057803469;
    v105 = 3;
    v106 = 4;
    v108 = 1065353216;
    v109 = 1114636288;
    sub_608A30(a1, &v100);
    LODWORD(v89[0]) = -2;
    *(_BYTE *)sub_16C910(a1 + 872, v89) = 1;
    LODWORD(v89[0]) = -2;
    *(_BYTE *)sub_16C910(a1 + 856, v89) = 1;
    v41 = cocos2d::CCLabelBMFont::create("Auto-Backup", "goldFont.fnt");
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v41 + 160LL))(v41);
    v42 = *(_QWORD *)v41;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v94, v92, v93 + 47.0);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v42 + 184))(v41, v43);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))(
      *(_QWORD *)(a1 + 584),
      v41);
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v89, 0.0, 0.0, 40.0, 40.0);
    v45 = cocos2d::extension::CCScale9Sprite::create("square02_small.png", v44);
    v46 = *(_QWORD *)v45;
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v94, v28, 50.0);
    (*(void (__fastcall **)(__int64, __int64))(v46 + 312))(v45, v47);
    v48 = *(_QWORD *)v45;
    v49 = v93;
    v50 = v93 + 6.0;
    v51 = v92;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v94, v92, v93 + 6.0);
    (*(void (__fastcall **)(__int64, __int64))(v48 + 184))(v45, v52);
    (**(void (__fastcall ***)(__int64, void *))(v45 + 320))(v45 + 320, &unk_6FDD14);
    LOBYTE(v53) = 50;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v45 + 320) + 40LL))(v45 + 320, v53);
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
      *(_QWORD *)(a1 + 584),
      v45,
      0xFFFFFFFFLL);
    *(_QWORD *)&v94 = &v97;
    v98 = 7;
    v99 = 15;
    v97 = 0x64656C62616E45uLL;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v89, v26, v49);
    SetupTriggerPopup_createToggleValueControl(a1, -3, (__int64)&v97, v54, 1, 0, 0, 1.0);
    memset(v120, 0, sizeof(v120));
    v55 = sub_9ACF0(v120);
    v100 = *(_DWORD *)v55;
    sub_58AD0(v101, v55 + 8);
    cocos2d::CCPoint::operator=(v102, v55 + 40);
    v103 = *(_DWORD *)(v55 + 48);
    v104 = *(_BYTE *)(v55 + 52);
    v105 = *(_DWORD *)(v55 + 56);
    v106 = *(_DWORD *)(v55 + 60);
    v107 = *(_BYTE *)(v55 + 64);
    v108 = *(_DWORD *)(v55 + 68);
    v109 = *(_DWORD *)(v55 + 72);
    v110 = *(_DWORD *)(v55 + 76);
    v111 = *(_DWORD *)(v55 + 80);
    v112 = *(_DWORD *)(v55 + 84);
    v113 = *(_DWORD *)(v55 + 88);
    v114 = *(_BYTE *)(v55 + 92);
    v115 = *(_BYTE *)(v55 + 93);
    v116 = *(_DWORD *)(v55 + 96);
    sub_58AD0(v117, v55 + 104);
    v118 = *(_DWORD *)(v55 + 136);
    sub_58AD0(v119, v55 + 144);
    sub_3C310(&v120[144]);
    sub_3C310(&v120[104]);
    sub_3C310(&v120[8]);
    v100 = -4;
    sub_3F5A0(v101, "Interval (min):", 0xFu);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v94, v27, v49);
    cocos2d::CCPoint::operator=(v102, v56);
    v103 = 1058642330;
    v104 = 1;
    v107 = 1;
    v115 = 1;
    v118 = 1057803469;
    v105 = 3;
    v106 = 4;
    v108 = 1092616192;
    v109 = 1133903872;
    sub_608A30(a1, &v100);
    LODWORD(v89[0]) = -4;
    *(_BYTE *)sub_16C910(a1 + 872, v89) = 1;
    LODWORD(v89[0]) = -4;
    *(_BYTE *)sub_16C910(a1 + 856, v89) = 1;
    v57 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_optionsBtn_001.png");
    LODWORD(v55) = (_DWORD)v57;
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v57 + 160LL))(v57);
    v58 = CCMenuItemSpriteExtra_create(v55, 0, a1, (__int64)sub_9C0F0);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v58);
    v59 = *(_QWORD *)v58;
    v60 = *(_QWORD *)(a1 + 552);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v94, v51 + 150.0, v50);
    cocos2d::CCNode::convertToNodeSpace(v60, v89, v61);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v59 + 184))(v58, v62);
    v63 = v49 - 45.0;
    *(_QWORD *)&v94 = operator new(0x2C8u);
    v64 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite(v94);
    if ( v64 )
    {
      if ( ButtonSprite_init(
             (__int64)v64,
             (__int64)"Select Folder",
             90,
             0,
             1055286886,
             1,
             (const char *)&qword_6FFF68,
             (__int64)"GJ_button_04.png",
             1101004800) )
      {
        cocos2d::CCObject::autorelease(v64);
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v64 + 8LL))(v64, 1);
        LODWORD(v64) = 0;
      }
    }
    v65 = CCMenuItemSpriteExtra_create((int)v64, 0, a1, (__int64)GJPathSprite_changeToLockedArt);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v65);
    v66 = *(_QWORD *)v65;
    v67 = *(_QWORD *)(a1 + 552);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v94, (float)(v90 * 0.5) - 62.0, v63);
    cocos2d::CCNode::convertToNodeSpace(v67, v89, v68);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v66 + 184))(v65, v69);
    *(_QWORD *)&v94 = operator new(0x2C8u);
    v70 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite(v94);
    if ( v70 )
    {
      if ( ButtonSprite_init(
             (__int64)v70,
             (__int64)"Open Folder",
             90,
             0,
             1055286886,
             1,
             (const char *)&qword_6FFF68,
             (__int64)"GJ_button_04.png",
             1101004800) )
      {
        cocos2d::CCObject::autorelease(v70);
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v70 + 8LL))(v70, 1);
        LODWORD(v70) = 0;
      }
    }
    v71 = CCMenuItemSpriteExtra_create((int)v70, 0, a1, (__int64)sub_9B6C0);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v71);
    v72 = *(_QWORD *)v71;
    v73 = *(_QWORD *)(a1 + 552);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v94, (float)(v90 * 0.5) + 62.0, v63);
    cocos2d::CCNode::convertToNodeSpace(v73, v89, v74);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v72 + 184))(v71, v75);
    v76 = (float)(v91 * 0.5) - 80.0;
    v77 = cocos2d::CCLabelBMFont::create("Backup Directory:", "goldFont.fnt");
    *(_QWORD *)(a1 + 1000) = v77;
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v77 + 160LL))(v77);
    v78 = **(_QWORD **)(a1 + 1000);
    v79 = *(_QWORD *)(a1 + 1000);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v94, v51, v76 + 8.0);
    (*(void (__fastcall **)(__int64, __int64))(v78 + 184))(v79, v80);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 584) + 464LL))(
      *(_QWORD *)(a1 + 584),
      *(_QWORD *)(a1 + 1000));
    v81 = sub_9BE10(&v97);
    sub_58AD0(a1 + 1016, v81);
    sub_3C310(&v97);
    v82 = cocos2d::CCLabelBMFont::create(&byte_6E86E0, "chatFont.fnt");
    *(_QWORD *)(a1 + 1008) = v82;
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v82 + 160LL))(v82);
    v83 = **(_QWORD **)(a1 + 1008);
    v84 = *(_QWORD *)(a1 + 1008);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v94, 0.5, 0.5);
    (*(void (__fastcall **)(__int64, __int64))(v83 + 288))(v84, v85);
    v86 = **(_QWORD **)(a1 + 1008);
    v87 = *(_QWORD *)(a1 + 1008);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v94, v51, v76 - 8.0);
    (*(void (__fastcall **)(__int64, __int64))(v86 + 184))(v87, v88);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 584) + 464LL))(
      *(_QWORD *)(a1 + 584),
      *(_QWORD *)(a1 + 1008));
    sub_9B860(a1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 1136LL))(a1);
    *(_BYTE *)(a1 + 744) = 0;
    sub_3C310(v119);
    sub_3C310(v117);
    sub_3C310(v101);
    return 1;
  }
  return result;
}
