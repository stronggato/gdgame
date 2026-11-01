#include <Geode/binding/SetupRandTriggerPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/6] Address: 0x5cff10
// Method: SetupRandTriggerPopup::~SetupRandTriggerPopup
cocos2d::CCNode *__fastcall SetupRandTriggerPopup__dtor_SetupRandTriggerPopup(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &SetupRandTriggerPopup::`vftable'; /*0x5cff23*/
  *((_QWORD *)Block + 40) = &SetupRandTriggerPopup::`vftable'; /*0x5cff30*/
  *((_QWORD *)Block + 41) = &SetupRandTriggerPopup::`vftable'; /*0x5cff3e*/
  *((_QWORD *)Block + 42) = &SetupRandTriggerPopup::`vftable'; /*0x5cff4c*/
  *((_QWORD *)Block + 43) = &SetupRandTriggerPopup::`vftable'; /*0x5cff5a*/
  *((_QWORD *)Block + 44) = &SetupRandTriggerPopup::`vftable'; /*0x5cff68*/
  *((_QWORD *)Block + 51) = &SetupRandTriggerPopup::`vftable'; /*0x5cff76*/
  *((_QWORD *)Block + 54) = &SetupRandTriggerPopup::`vftable'; /*0x5cff84*/
  *((_QWORD *)Block + 68) = &SetupRandTriggerPopup::`vftable'; /*0x5cff92*/
  *((_QWORD *)Block + 83) = &SetupRandTriggerPopup::`vftable'; /*0x5cffa0*/
  *((_QWORD *)Block + 84) = &SetupRandTriggerPopup::`vftable'; /*0x5cffae*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x5cffb5*/
  if ( (a2 & 1) != 0 ) /*0x5cffbd*/
    j_j_free(Block); /*0x5cffc7*/
  return Block; /*0x5cffcc*/
}

// [2/6] Address: 0x5cffe0
// Method: SetupRandTriggerPopup::create
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall SetupRandTriggerPopup_create(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rsi

  v4 = operator new(0x418u); /*0x5d0004*/
  SetupTriggerPopup_SetupTriggerPopup((__int64)v4); /*0x5d000f*/
  *v4 = &SetupRandTriggerPopup::`vftable'; /*0x5d001b*/
  v4[40] = &SetupRandTriggerPopup::`vftable'; /*0x5d0025*/
  v4[41] = &SetupRandTriggerPopup::`vftable'; /*0x5d0033*/
  v4[42] = &SetupRandTriggerPopup::`vftable'; /*0x5d0041*/
  v4[43] = &SetupRandTriggerPopup::`vftable'; /*0x5d004f*/
  v4[44] = &SetupRandTriggerPopup::`vftable'; /*0x5d005d*/
  v4[51] = &SetupRandTriggerPopup::`vftable'; /*0x5d006b*/
  v4[54] = &SetupRandTriggerPopup::`vftable'; /*0x5d0079*/
  v4[68] = &SetupRandTriggerPopup::`vftable'; /*0x5d0087*/
  v4[83] = &SetupRandTriggerPopup::`vftable'; /*0x5d0095*/
  v4[84] = &SetupRandTriggerPopup::`vftable'; /*0x5d00a3*/
  v4[125] = 0; /*0x5d00ac*/
  v4[126] = 0; /*0x5d00b3*/
  *((_DWORD *)v4 + 254) = 0; /*0x5d00ba*/
  v4[128] = 0; /*0x5d00c0*/
  v4[129] = 0; /*0x5d00c7*/
  v4[130] = 0; /*0x5d00ce*/
  if ( (unsigned __int8)sub_5D0120(v4, a1, a2) ) /*0x5d00de*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v4); /*0x5d00ea*/
    return v4; /*0x5d00f0*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v4 + 8LL))(v4, 1); /*0x5d0104*/
    return 0; /*0x5d0107*/
  }
}

// [3/6] Address: 0x5d0c10
// Method: SetupRandTriggerPopup::determineStartValues
void __fastcall SetupRandTriggerPopup_determineStartValues(__int64 a1)
{
  __int64 v2; // rcx
  cocos2d::CCArray *v3; // rdi
  unsigned int v4; // esi
  struct cocos2d::CCObject *v5; // rdx
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  float v10; // xmm1_4
  float v11; // xmm0_4

  SetupTriggerPopup_determineStartValues(a1); /*0x5d0c1d*/
  if ( *(_QWORD *)(a1 + 680) ) /*0x5d0c22*/
  {
    v3 = (cocos2d::CCArray *)cocos2d::CCArray::create(v2); /*0x5d0c3c*/
    cocos2d::CCArray::addObject(v3, *(struct cocos2d::CCObject **)(a1 + 680)); /*0x5d0c3f*/
  }
  else
  {
    v3 = *(cocos2d::CCArray **)(a1 + 688); /*0x5d0c47*/
  }
  if ( v3 ) /*0x5d0c51*/
  {
    if ( cocos2d::CCArray::count(v3) ) /*0x5d0c5a*/
    {
      v4 = 0; /*0x5d0c77*/
      *(_QWORD *)(a1 + 1040) = -1; /*0x5d0c79*/
      for ( *(_DWORD *)(a1 + 1016) = -1082130432; v4 < cocos2d::CCArray::count(v3); ++v4 ) /*0x5d0c8e*/
      {
        v5 = cocos2d::CCArray::objectAtIndex(v3, v4); /*0x5d0cbb*/
        v6 = *(_DWORD *)(a1 + 1040); /*0x5d0cbe*/
        v7 = *((_DWORD *)v5 + 370); /*0x5d0cc4*/
        if ( v6 == -1 ) /*0x5d0ccd*/
        {
          *(_DWORD *)(a1 + 1040) = v7; /*0x5d0ccf*/
        }
        else if ( v6 != v7 ) /*0x5d0cd9*/
        {
          *(_DWORD *)(a1 + 1040) = 0; /*0x5d0cdb*/
        }
        v8 = *(_DWORD *)(a1 + 1044); /*0x5d0ce1*/
        v9 = *((_DWORD *)v5 + 371); /*0x5d0ce7*/
        if ( v8 == -1 ) /*0x5d0cf0*/
        {
          *(_DWORD *)(a1 + 1044) = v9; /*0x5d0cf2*/
        }
        else if ( v8 != v9 ) /*0x5d0cfc*/
        {
          *(_DWORD *)(a1 + 1044) = 0; /*0x5d0cfe*/
        }
        v10 = *(float *)(a1 + 1016); /*0x5d0d04*/
        v11 = *((float *)v5 + 367); /*0x5d0d0f*/
        if ( v10 == -1.0 ) /*0x5d0d19*/
        {
          *(float *)(a1 + 1016) = v11; /*0x5d0d1b*/
        }
        else if ( v10 != v11 ) /*0x5d0d2a*/
        {
          *(_DWORD *)(a1 + 1016) = 0; /*0x5d0d2c*/
        }
      }
    }
  }
}

// [4/6] Address: 0x5d0d60
// Method: SetupRandTriggerPopup::sliderChanged
__int64 __fastcall SetupRandTriggerPopup_sliderChanged(__int64 a1, __int64 a2)
{
  float Value; // xmm0_4

  Value = SliderThumb_getValue(a2); /*0x5d0d6c*/
  *(float *)(a1 + 1016) = roundf(Value * 100.0); /*0x5d0d82*/
  sub_5AA230(a1); /*0x5d0d8a*/
  return sub_5D0DA0(a1); /*0x5d0d92*/
}

// [5/6] Address: 0x5d0e70
// Method: SetupRandTriggerPopup::textChanged
void __fastcall SetupRandTriggerPopup_textChanged(__int64 a1, _QWORD *a2)
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
  unsigned int v13; // esi
  struct cocos2d::CCObject *v14; // rax
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // r8
  const char *v18; // rcx
  int v19; // eax
  unsigned __int64 v20; // rdx
  char *v21; // rcx
  int v22; // ecx
  __int64 v23; // rax
  cocos2d::CCArray *v24; // rcx
  unsigned int v25; // esi
  struct cocos2d::CCObject *v26; // rax
  int v27; // edx
  __int64 v28; // rax
  __int64 v29; // r8
  const char *v30; // rcx
  float v31; // xmm6_4
  char *v32; // rcx
  cocos2d::CCString *v33; // rax
  char *String[2]; // [rsp+38h] [rbp-38h] BYREF
  __int128 v35; // [rsp+48h] [rbp-28h]

  if ( !*(_BYTE *)(a1 + 200) ) /*0x5d0e96*/
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2) == 3 ) /*0x5d0eb7*/
    {
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x5d0ece*/
      *(_OWORD *)String = 0; /*0x5d0ed7*/
      v5 = -1; /*0x5d0edb*/
      v35 = 0; /*0x5d0ee2*/
      do /*0x5d0eea*/
        ++v5; /*0x5d0ee7*/
      while ( *(_BYTE *)(v4 + v5) ); /*0x5d0eea*/
      sub_3C230(String); /*0x5d0ef7*/
      v6 = (const char *)String; /*0x5d0f01*/
      if ( *((_QWORD *)&v35 + 1) > 0xFu ) /*0x5d0f05*/
        v6 = String[0]; /*0x5d0f05*/
      v7 = atoi(v6); /*0x5d0f0a*/
      v8 = *((_QWORD *)&v35 + 1); /*0x5d0f10*/
      *(_DWORD *)(a1 + 496) = v7; /*0x5d0f14*/
      if ( v8 > 0xF ) /*0x5d0f1e*/
      {
        v9 = String[0]; /*0x5d0f20*/
        if ( v8 + 1 >= 0x1000 ) /*0x5d0f31*/
        {
          v9 = (char *)*((_QWORD *)String[0] - 1); /*0x5d0f33*/
          if ( (unsigned __int64)(String[0] - v9 - 8) > 0x1F ) /*0x5d0f46*/
            invoke_watson(0, 0, 0, 0, 0); /*0x5d0f57*/
        }
        j_j_free(v9); /*0x5d0f5e*/
      }
      v10 = 0; /*0x5d0f70*/
      if ( *(int *)(a1 + 496) >= 0 ) /*0x5d0f73*/
        v10 = *(_DWORD *)(a1 + 496); /*0x5d0f73*/
      v11 = *(_QWORD *)(a1 + 136); /*0x5d0f76*/
      if ( v10 > 9999 ) /*0x5d0f7f*/
        v10 = 9999; /*0x5d0f7f*/
      *(_DWORD *)(a1 + 496) = v10; /*0x5d0f82*/
      if ( v11 ) /*0x5d0f8b*/
      {
        *(_DWORD *)(v11 + 1480) = v10; /*0x5d0f98*/
        sub_607BB0(a1 - 544); /*0x5d0fa5*/
        return; /*0x5d0faa*/
      }
      v12 = *(cocos2d::CCArray **)(a1 + 144); /*0x5d0faf*/
      if ( v12 ) /*0x5d0fb9*/
      {
        v13 = 0; /*0x5d0fbf*/
        if ( cocos2d::CCArray::count(v12) ) /*0x5d0fc2*/
        {
          do /*0x5d1007*/
          {
            v14 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 144), v13); /*0x5d0fd9*/
            v15 = *(_DWORD *)(a1 + 496); /*0x5d0fdf*/
            if ( v15 < 0 ) /*0x5d0fe7*/
              v15 = 0; /*0x5d0fe7*/
            if ( v15 > 9999 ) /*0x5d0fed*/
              v15 = 9999; /*0x5d0fed*/
            ++v13; /*0x5d0ff0*/
            *((_DWORD *)v14 + 370) = v15; /*0x5d0ff2*/
          }
          while ( v13 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 144)) ); /*0x5d1007*/
        }
      }
      goto LABEL_25; /*0x5d1007*/
    }
    if ( (*(unsigned int (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2) == 5 ) /*0x5d1026*/
    {
      v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x5d103d*/
      *(_OWORD *)String = 0; /*0x5d1046*/
      v17 = -1; /*0x5d104a*/
      v35 = 0; /*0x5d1051*/
      do /*0x5d1059*/
        ++v17; /*0x5d1056*/
      while ( *(_BYTE *)(v16 + v17) ); /*0x5d1059*/
      sub_3C230(String); /*0x5d1066*/
      v18 = (const char *)String; /*0x5d1070*/
      if ( *((_QWORD *)&v35 + 1) > 0xFu ) /*0x5d1074*/
        v18 = String[0]; /*0x5d1074*/
      v19 = atoi(v18); /*0x5d1079*/
      v20 = *((_QWORD *)&v35 + 1); /*0x5d107f*/
      *(_DWORD *)(a1 + 500) = v19; /*0x5d1083*/
      if ( v20 > 0xF ) /*0x5d108d*/
      {
        v21 = String[0]; /*0x5d108f*/
        if ( v20 + 1 >= 0x1000 ) /*0x5d10a0*/
        {
          v21 = (char *)*((_QWORD *)String[0] - 1); /*0x5d10a2*/
          if ( (unsigned __int64)(String[0] - v21 - 8) > 0x1F ) /*0x5d10b5*/
            invoke_watson(0, 0, 0, 0, 0); /*0x5d10c6*/
        }
        j_j_free(v21); /*0x5d10cd*/
      }
      v22 = 0; /*0x5d10df*/
      if ( *(int *)(a1 + 500) >= 0 ) /*0x5d10e2*/
        v22 = *(_DWORD *)(a1 + 500); /*0x5d10e2*/
      v23 = *(_QWORD *)(a1 + 136); /*0x5d10e5*/
      if ( v22 > 9999 ) /*0x5d10ee*/
        v22 = 9999; /*0x5d10ee*/
      *(_DWORD *)(a1 + 500) = v22; /*0x5d10f1*/
      if ( !v23 ) /*0x5d10fa*/
      {
        v24 = *(cocos2d::CCArray **)(a1 + 144); /*0x5d111e*/
        if ( v24 ) /*0x5d1128*/
        {
          v25 = 0; /*0x5d112a*/
          if ( cocos2d::CCArray::count(v24) ) /*0x5d112d*/
          {
            do /*0x5d1177*/
            {
              v26 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 144), v25); /*0x5d1149*/
              v27 = *(_DWORD *)(a1 + 500); /*0x5d114f*/
              if ( v27 < 0 ) /*0x5d1157*/
                v27 = 0; /*0x5d1157*/
              if ( v27 > 9999 ) /*0x5d115d*/
                v27 = 9999; /*0x5d115d*/
              ++v25; /*0x5d1160*/
              *((_DWORD *)v26 + 371) = v27; /*0x5d1162*/
            }
            while ( v25 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 144)) ); /*0x5d1177*/
          }
        }
LABEL_25:
        sub_607BB0(a1 - 544); /*0x5d1009*/
        return; /*0x5d1015*/
      }
      *(_DWORD *)(v23 + 1484) = v22; /*0x5d1107*/
      sub_607BB0(a1 - 544); /*0x5d1114*/
    }
    else if ( (*(unsigned int (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2) == 4 ) /*0x5d1196*/
    {
      v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x5d11b2*/
      *(_OWORD *)String = 0; /*0x5d11bb*/
      v29 = -1; /*0x5d11bf*/
      v35 = 0; /*0x5d11c6*/
      do /*0x5d11d3*/
        ++v29; /*0x5d11d0*/
      while ( *(_BYTE *)(v28 + v29) ); /*0x5d11d3*/
      sub_3C230(String); /*0x5d11e0*/
      v30 = (const char *)String; /*0x5d11ea*/
      if ( *((_QWORD *)&v35 + 1) > 0xFu ) /*0x5d11ee*/
        v30 = String[0]; /*0x5d11ee*/
      v31 = atof(v30); /*0x5d1200*/
      if ( *((_QWORD *)&v35 + 1) > 0xFu ) /*0x5d1208*/
      {
        v32 = String[0]; /*0x5d120a*/
        if ( (unsigned __int64)(*((_QWORD *)&v35 + 1) + 1LL) >= 0x1000 ) /*0x5d121b*/
        {
          v32 = (char *)*((_QWORD *)String[0] - 1); /*0x5d121d*/
          if ( (unsigned __int64)(String[0] - v32 - 8) > 0x1F ) /*0x5d1230*/
            invoke_watson(0, 0, 0, 0, 0); /*0x5d1241*/
        }
        j_j_free(v32); /*0x5d1248*/
      }
      v33 = cocos2d::CCString::createWithFormat("%.04f", v31); /*0x5d125c*/
      *(float *)(a1 + 472) = cocos2d::CCString::floatValue(v33); /*0x5d1272*/
      sub_5AA230(a1 - 544); /*0x5d127a*/
    }
  }
}

// [6/6] Address: 0x5d1630
// Method: SetupRandTriggerPopup::onClose
// Hidden C++ exception states: #wind=1
__int64 __fastcall SetupRandTriggerPopup_onClose(_QWORD *a1)
{
  __int64 v2; // rax
  void *v4; // [rsp+30h] [rbp+8h]

  *(_QWORD *)(a1[128] + 608LL) = 0; /*0x5d1647*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a1[128] + 1032LL))(a1[128], 0); /*0x5d165e*/
  *(_QWORD *)(a1[129] + 608LL) = 0; /*0x5d166b*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a1[129] + 1032LL))(a1[129], 0); /*0x5d1682*/
  *(_QWORD *)(a1[125] + 608LL) = 0; /*0x5d168f*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a1[125] + 1032LL))(a1[125], 0); /*0x5d16a6*/
  v2 = qword_905FD0; /*0x5d16ac*/
  if ( !qword_905FD0 ) /*0x5d16b6*/
  {
    v4 = operator new(0x6E8u); /*0x5d16c2*/
    qword_905FD0 = sub_2723A0(v4); /*0x5d16d0*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x5d16e1*/
    v2 = qword_905FD0; /*0x5d16e3*/
  }
  *(_BYTE *)(*(_QWORD *)(v2 + 568) + 14873LL) = 1; /*0x5d16f1*/
  return SetupTriggerPopup_onClose((__int64)a1); /*0x5d16fe*/
}
