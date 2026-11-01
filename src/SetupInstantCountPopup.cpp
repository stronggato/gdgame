#include <Geode/binding/SetupInstantCountPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x5b28e0
// Method: SetupInstantCountPopup::~SetupInstantCountPopup
cocos2d::CCNode *__fastcall SetupInstantCountPopup__dtor_SetupInstantCountPopup(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &SetupInstantCountPopup::`vftable'; /*0x5b28f3*/
  *((_QWORD *)Block + 40) = &SetupInstantCountPopup::`vftable'; /*0x5b2900*/
  *((_QWORD *)Block + 41) = &SetupInstantCountPopup::`vftable'; /*0x5b290e*/
  *((_QWORD *)Block + 42) = &SetupInstantCountPopup::`vftable'; /*0x5b291c*/
  *((_QWORD *)Block + 43) = &SetupInstantCountPopup::`vftable'; /*0x5b292a*/
  *((_QWORD *)Block + 44) = &SetupInstantCountPopup::`vftable'; /*0x5b2938*/
  *((_QWORD *)Block + 51) = &SetupInstantCountPopup::`vftable'; /*0x5b2946*/
  *((_QWORD *)Block + 54) = &SetupInstantCountPopup::`vftable'; /*0x5b2954*/
  *((_QWORD *)Block + 68) = &SetupInstantCountPopup::`vftable'; /*0x5b2962*/
  *((_QWORD *)Block + 83) = &SetupInstantCountPopup::`vftable'; /*0x5b2970*/
  *((_QWORD *)Block + 84) = &SetupInstantCountPopup::`vftable'; /*0x5b297e*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x5b2985*/
  if ( (a2 & 1) != 0 ) /*0x5b298d*/
    j_j_free(Block); /*0x5b2997*/
  return Block; /*0x5b299c*/
}

// [2/5] Address: 0x5b37f0
// Method: SetupInstantCountPopup::determineStartValues
void __fastcall SetupInstantCountPopup_determineStartValues(__int64 a1)
{
  __int64 v2; // rcx
  cocos2d::CCArray *v3; // rsi
  unsigned int v4; // edi
  struct cocos2d::CCObject *v5; // rax
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  int v11; // ecx
  int v12; // edx
  int v13; // ecx

  SetupTriggerPopup_determineStartValues(a1); /*0x5b37fd*/
  if ( *(_QWORD *)(a1 + 680) ) /*0x5b3802*/
  {
    v3 = (cocos2d::CCArray *)cocos2d::CCArray::create(v2); /*0x5b381c*/
    cocos2d::CCArray::addObject(v3, *(struct cocos2d::CCObject **)(a1 + 680)); /*0x5b381f*/
  }
  else
  {
    v3 = *(cocos2d::CCArray **)(a1 + 688); /*0x5b3827*/
  }
  if ( v3 ) /*0x5b3831*/
  {
    v4 = 0; /*0x5b3846*/
    *(_QWORD *)(a1 + 1024) = -1; /*0x5b3848*/
    *(_DWORD *)(a1 + 1032) = 99999; /*0x5b3853*/
    *(_BYTE *)(a1 + 1036) = 1; /*0x5b385d*/
    for ( *(_DWORD *)(a1 + 1040) = -1; v4 < cocos2d::CCArray::count(v3); ++v4 ) /*0x5b386e*/
    {
      v5 = cocos2d::CCArray::objectAtIndex(v3, v4); /*0x5b3885*/
      if ( !*((_BYTE *)v5 + 1653) ) /*0x5b388b*/
        *(_BYTE *)(a1 + 1036) = 0; /*0x5b3894*/
      v6 = *(_DWORD *)(a1 + 1024); /*0x5b389b*/
      v7 = *((_DWORD *)v5 + 424); /*0x5b38a1*/
      if ( v6 == -1 ) /*0x5b38aa*/
      {
        *(_DWORD *)(a1 + 1024) = v7; /*0x5b38ac*/
      }
      else if ( v6 != v7 ) /*0x5b38b6*/
      {
        *(_DWORD *)(a1 + 1024) = 0; /*0x5b38b8*/
      }
      v8 = *(_DWORD *)(a1 + 1028); /*0x5b38be*/
      v9 = *((_DWORD *)v5 + 370); /*0x5b38c4*/
      if ( v8 == -1 ) /*0x5b38cd*/
      {
        *(_DWORD *)(a1 + 1028) = v9; /*0x5b38cf*/
      }
      else if ( v8 != v9 ) /*0x5b38d9*/
      {
        *(_DWORD *)(a1 + 1028) = 0; /*0x5b38db*/
      }
      v10 = *(_DWORD *)(a1 + 1040); /*0x5b38e1*/
      v11 = *((_DWORD *)v5 + 465); /*0x5b38e7*/
      if ( v10 == -1 ) /*0x5b38f0*/
      {
        *(_DWORD *)(a1 + 1040) = v11; /*0x5b38f2*/
      }
      else if ( v10 != v11 ) /*0x5b38fc*/
      {
        *(_DWORD *)(a1 + 1040) = 0; /*0x5b38fe*/
      }
      v12 = *(_DWORD *)(a1 + 1032); /*0x5b3904*/
      v13 = *((_DWORD *)v5 + 464); /*0x5b390a*/
      if ( v12 == 99999 ) /*0x5b3916*/
      {
        *(_DWORD *)(a1 + 1032) = v13; /*0x5b3918*/
      }
      else if ( v12 != v13 ) /*0x5b3922*/
      {
        *(_DWORD *)(a1 + 1032) = 0; /*0x5b3924*/
      }
    }
  }
}

// [3/5] Address: 0x5b3a30
// Method: SetupInstantCountPopup::textChanged
void __fastcall SetupInstantCountPopup_textChanged(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // edi
  __int64 v5; // rax
  __int64 v6; // r8
  const char *v7; // rcx
  int v8; // eax
  unsigned __int64 v9; // rdx
  char *v10; // rcx
  int v11; // ecx
  __int64 v12; // rax
  cocos2d::CCArray *v13; // rcx
  struct cocos2d::CCObject *v14; // rax
  bool v15; // zf
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r8
  const char *v19; // rcx
  int v20; // eax
  unsigned __int64 v21; // rdx
  char *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r8
  const char *v25; // rcx
  int v26; // eax
  unsigned __int64 v27; // rdx
  char *v28; // rcx
  int v29; // ecx
  __int64 v30; // rax
  cocos2d::CCArray *v31; // rcx
  unsigned int v32; // r14d
  struct cocos2d::CCObject *v33; // rax
  int v34; // ecx
  char *String[2]; // [rsp+38h] [rbp-28h] BYREF
  __int128 v36; // [rsp+48h] [rbp-18h]

  v2 = 0; /*0x5b3a53*/
  if ( !*(_BYTE *)(a1 + 200) ) /*0x5b3a5b*/
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2) ) /*0x5b3a6e*/
    {
      v15 = (*(unsigned int (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2) == 1; /*0x5b3bd6*/
      v16 = *(_QWORD *)(a2[75] + 600LL); /*0x5b3bd9*/
      if ( v15 ) /*0x5b3bdc*/
      {
        v17 = (*(__int64 (**)(void))(v16 + 8))(); /*0x5b3be2*/
        *(_OWORD *)String = 0; /*0x5b3beb*/
        v18 = -1; /*0x5b3bef*/
        v36 = 0; /*0x5b3bf6*/
        do /*0x5b3c03*/
          ++v18; /*0x5b3c00*/
        while ( *(_BYTE *)(v17 + v18) ); /*0x5b3c03*/
        sub_3C230(String); /*0x5b3c10*/
        v19 = (const char *)String; /*0x5b3c1a*/
        if ( *((_QWORD *)&v36 + 1) > 0xFu ) /*0x5b3c1e*/
          v19 = String[0]; /*0x5b3c1e*/
        v20 = atoi(v19); /*0x5b3c23*/
        v21 = *((_QWORD *)&v36 + 1); /*0x5b3c29*/
        *(_DWORD *)(a1 + 488) = v20; /*0x5b3c2d*/
        if ( v21 > 0xF ) /*0x5b3c37*/
        {
          v22 = String[0]; /*0x5b3c39*/
          if ( v21 + 1 >= 0x1000 ) /*0x5b3c4a*/
          {
            v22 = (char *)*((_QWORD *)String[0] - 1); /*0x5b3c4c*/
            if ( (unsigned __int64)(String[0] - v22 - 8) > 0x1F ) /*0x5b3c5f*/
              invoke_watson(0, 0, 0, 0, 0); /*0x5b3c70*/
          }
          j_j_free(v22); /*0x5b3c77*/
        }
        sub_5B3E60(a1 - 544); /*0x5b3c83*/
      }
      else
      {
        v23 = (*(__int64 (**)(void))(v16 + 8))(); /*0x5b3c8d*/
        *(_OWORD *)String = 0; /*0x5b3c96*/
        v24 = -1; /*0x5b3c9a*/
        v36 = 0; /*0x5b3ca1*/
        do /*0x5b3ca9*/
          ++v24; /*0x5b3ca6*/
        while ( *(_BYTE *)(v23 + v24) ); /*0x5b3ca9*/
        sub_3C230(String); /*0x5b3cb6*/
        v25 = (const char *)String; /*0x5b3cc0*/
        if ( *((_QWORD *)&v36 + 1) > 0xFu ) /*0x5b3cc4*/
          v25 = String[0]; /*0x5b3cc4*/
        v26 = atoi(v25); /*0x5b3cc9*/
        v27 = *((_QWORD *)&v36 + 1); /*0x5b3ccf*/
        *(_DWORD *)(a1 + 484) = v26; /*0x5b3cd3*/
        if ( v27 > 0xF ) /*0x5b3cdd*/
        {
          v28 = String[0]; /*0x5b3cdf*/
          if ( v27 + 1 >= 0x1000 ) /*0x5b3cf0*/
          {
            v28 = (char *)*((_QWORD *)String[0] - 1); /*0x5b3cf2*/
            if ( (unsigned __int64)(String[0] - v28 - 8) > 0x1F ) /*0x5b3d05*/
              invoke_watson(0, 0, 0, 0, 0); /*0x5b3d16*/
          }
          j_j_free(v28); /*0x5b3d1d*/
        }
        v29 = 0; /*0x5b3d2f*/
        if ( *(int *)(a1 + 484) >= 0 ) /*0x5b3d31*/
          v29 = *(_DWORD *)(a1 + 484); /*0x5b3d31*/
        v30 = *(_QWORD *)(a1 + 136); /*0x5b3d34*/
        if ( v29 > 9999 ) /*0x5b3d3d*/
          v29 = 9999; /*0x5b3d3d*/
        *(_DWORD *)(a1 + 484) = v29; /*0x5b3d40*/
        if ( v30 ) /*0x5b3d49*/
        {
          *(_DWORD *)(v30 + 1480) = v29; /*0x5b3d55*/
        }
        else
        {
          v31 = *(cocos2d::CCArray **)(a1 + 144); /*0x5b3d5d*/
          if ( v31 ) /*0x5b3d67*/
          {
            v32 = 0; /*0x5b3d69*/
            if ( cocos2d::CCArray::count(v31) ) /*0x5b3d6c*/
            {
              do /*0x5b3db9*/
              {
                v33 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 144), v32); /*0x5b3d8a*/
                v34 = *(_DWORD *)(a1 + 484); /*0x5b3d90*/
                if ( v34 < 0 ) /*0x5b3d98*/
                  v34 = 0; /*0x5b3d98*/
                if ( v34 > 9999 ) /*0x5b3d9d*/
                  v34 = 9999; /*0x5b3d9d*/
                ++v32; /*0x5b3da0*/
                *((_DWORD *)v33 + 370) = v34; /*0x5b3da3*/
              }
              while ( v32 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 144)) ); /*0x5b3db9*/
            }
          }
        }
      }
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x5b3a8a*/
      *(_OWORD *)String = 0; /*0x5b3a93*/
      v6 = -1; /*0x5b3a97*/
      v36 = 0; /*0x5b3a9e*/
      do /*0x5b3aa6*/
        ++v6; /*0x5b3aa3*/
      while ( *(_BYTE *)(v5 + v6) ); /*0x5b3aa6*/
      sub_3C230(String); /*0x5b3ab3*/
      v7 = (const char *)String; /*0x5b3abd*/
      if ( *((_QWORD *)&v36 + 1) > 0xFu ) /*0x5b3ac1*/
        v7 = String[0]; /*0x5b3ac1*/
      v8 = atoi(v7); /*0x5b3ac6*/
      v9 = *((_QWORD *)&v36 + 1); /*0x5b3acc*/
      *(_DWORD *)(a1 + 480) = v8; /*0x5b3ad0*/
      if ( v9 > 0xF ) /*0x5b3ada*/
      {
        v10 = String[0]; /*0x5b3adc*/
        if ( v9 + 1 >= 0x1000 ) /*0x5b3aed*/
        {
          v10 = (char *)*((_QWORD *)String[0] - 1); /*0x5b3aef*/
          if ( (unsigned __int64)(String[0] - v10 - 8) > 0x1F ) /*0x5b3b02*/
            invoke_watson(0, 0, 0, 0, 0); /*0x5b3b13*/
        }
        j_j_free(v10); /*0x5b3b1a*/
      }
      v11 = 0; /*0x5b3b2c*/
      if ( *(int *)(a1 + 480) >= 0 ) /*0x5b3b2e*/
        v11 = *(_DWORD *)(a1 + 480); /*0x5b3b2e*/
      v12 = *(_QWORD *)(a1 + 136); /*0x5b3b31*/
      if ( v11 > 9999 ) /*0x5b3b3a*/
        v11 = 9999; /*0x5b3b3a*/
      *(_DWORD *)(a1 + 480) = v11; /*0x5b3b3d*/
      if ( v12 ) /*0x5b3b46*/
      {
        *(_DWORD *)(v12 + 1696) = v11; /*0x5b3b48*/
        sub_607BB0(a1 - 544); /*0x5b3b55*/
      }
      else
      {
        v13 = *(cocos2d::CCArray **)(a1 + 144); /*0x5b3b5f*/
        if ( v13 && cocos2d::CCArray::count(v13) ) /*0x5b3b6b*/
        {
          do /*0x5b3bac*/
          {
            v14 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 144), v2++); /*0x5b3b89*/
            *((_DWORD *)v14 + 424) = *(_DWORD *)(a1 + 480); /*0x5b3b97*/
          }
          while ( v2 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 144)) ); /*0x5b3bac*/
        }
        sub_607BB0(a1 - 544); /*0x5b3bb5*/
      }
    }
  }
}

// [4/5] Address: 0x5b3ef0
// Method: SetupInstantCountPopup::onCountType
unsigned int __fastcall SetupInstantCountPopup_onCountType(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  unsigned int result; // eax
  __int64 v9; // rcx
  cocos2d::CCArray *v10; // rcx
  unsigned int v11; // edi
  struct cocos2d::CCObject *v12; // rax

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5b3eff*/
  v4 = *(_QWORD *)(a1 + 1048); /*0x5b3f02*/
  *(_DWORD *)(a1 + 1040) = v3; /*0x5b3f0b*/
  LOBYTE(v5) = v3 == 0; /*0x5b3f11*/
  CCMenuItemToggler_toggle(v4, v5); /*0x5b3f14*/
  LOBYTE(v6) = *(_DWORD *)(a1 + 1040) == 1; /*0x5b3f27*/
  CCMenuItemToggler_toggle(*(_QWORD *)(a1 + 1056), v6); /*0x5b3f2a*/
  LOBYTE(v7) = *(_DWORD *)(a1 + 1040) == 2; /*0x5b3f3d*/
  result = CCMenuItemToggler_toggle(*(_QWORD *)(a1 + 1064), v7); /*0x5b3f40*/
  v9 = *(_QWORD *)(a1 + 680); /*0x5b3f45*/
  if ( v9 ) /*0x5b3f4f*/
  {
    result = *(_DWORD *)(a1 + 1040); /*0x5b3f51*/
    *(_DWORD *)(v9 + 1860) = result; /*0x5b3f57*/
  }
  else
  {
    v10 = *(cocos2d::CCArray **)(a1 + 688); /*0x5b3f63*/
    if ( v10 ) /*0x5b3f6d*/
    {
      v11 = 0; /*0x5b3f74*/
      result = cocos2d::CCArray::count(v10); /*0x5b3f76*/
      if ( result ) /*0x5b3f7e*/
      {
        do /*0x5b3fac*/
        {
          v12 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 688), v11++); /*0x5b3f89*/
          *((_DWORD *)v12 + 465) = *(_DWORD *)(a1 + 1040); /*0x5b3f97*/
          result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 688)); /*0x5b3fa4*/
        }
        while ( v11 < result ); /*0x5b3fac*/
      }
    }
  }
  return result; /*0x5b3f5d*/
}

// [5/5] Address: 0x5b3fc0
// Method: SetupInstantCountPopup::onClose
__int64 __fastcall SetupInstantCountPopup_onClose(_QWORD *a1)
{
  *(_QWORD *)(a1[125] + 608LL) = 0; /*0x5b3fd9*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a1[125] + 1032LL))(a1[125], 0); /*0x5b3fee*/
  *(_QWORD *)(a1[126] + 608LL) = 0; /*0x5b3ffd*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a1[126] + 1032LL))(a1[126], 0); /*0x5b4012*/
  *(_QWORD *)(a1[127] + 608LL) = 0; /*0x5b4021*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a1[127] + 1032LL))(a1[127], 0); /*0x5b4036*/
  return SetupTriggerPopup_onClose((__int64)a1); /*0x5b4042*/
}
