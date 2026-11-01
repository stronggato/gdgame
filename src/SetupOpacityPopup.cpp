#include <Geode/binding/SetupOpacityPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/6] Address: 0x59c990
// Method: SetupOpacityPopup::onClose
__int64 __fastcall SetupOpacityPopup_onClose(__int64 a1)
{
  *(_QWORD *)(*(_QWORD *)(a1 + 1000) + 608LL) = 0; /*0x59c9a9*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1000) + 1032LL))(*(_QWORD *)(a1 + 1000), 0); /*0x59c9be*/
  *(_QWORD *)(*(_QWORD *)(a1 + 1008) + 608LL) = 0; /*0x59c9cd*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1008) + 1032LL))(*(_QWORD *)(a1 + 1008), 0); /*0x59c9e2*/
  return SetupTriggerPopup_onClose(a1); /*0x59c9ee*/
}

// [2/6] Address: 0x5bad30
// Method: SetupOpacityPopup::~SetupOpacityPopup
cocos2d::CCNode *__fastcall SetupOpacityPopup__dtor_SetupOpacityPopup(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &SetupOpacityPopup::`vftable'; /*0x5bad43*/
  *((_QWORD *)Block + 40) = &SetupOpacityPopup::`vftable'; /*0x5bad50*/
  *((_QWORD *)Block + 41) = &SetupOpacityPopup::`vftable'; /*0x5bad5e*/
  *((_QWORD *)Block + 42) = &SetupOpacityPopup::`vftable'; /*0x5bad6c*/
  *((_QWORD *)Block + 43) = &SetupOpacityPopup::`vftable'; /*0x5bad7a*/
  *((_QWORD *)Block + 44) = &SetupOpacityPopup::`vftable'; /*0x5bad88*/
  *((_QWORD *)Block + 51) = &SetupOpacityPopup::`vftable'; /*0x5bad96*/
  *((_QWORD *)Block + 54) = &SetupOpacityPopup::`vftable'; /*0x5bada4*/
  *((_QWORD *)Block + 68) = &SetupOpacityPopup::`vftable'; /*0x5badb2*/
  *((_QWORD *)Block + 83) = &SetupOpacityPopup::`vftable'; /*0x5badc0*/
  *((_QWORD *)Block + 84) = &SetupOpacityPopup::`vftable'; /*0x5badce*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x5badd5*/
  if ( (a2 & 1) != 0 ) /*0x5baddd*/
    j_j_free(Block); /*0x5bade7*/
  return Block; /*0x5badec*/
}

// [3/6] Address: 0x5bae00
// Method: SetupOpacityPopup::create
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall SetupOpacityPopup_create(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rsi

  v4 = operator new(0x420u); /*0x5bae1f*/
  SetupTriggerPopup_SetupTriggerPopup((__int64)v4); /*0x5bae2a*/
  *v4 = &SetupOpacityPopup::`vftable'; /*0x5bae36*/
  v4[40] = &SetupOpacityPopup::`vftable'; /*0x5bae40*/
  v4[41] = &SetupOpacityPopup::`vftable'; /*0x5bae4e*/
  v4[42] = &SetupOpacityPopup::`vftable'; /*0x5bae5c*/
  v4[43] = &SetupOpacityPopup::`vftable'; /*0x5bae6a*/
  v4[44] = &SetupOpacityPopup::`vftable'; /*0x5bae78*/
  v4[51] = &SetupOpacityPopup::`vftable'; /*0x5bae86*/
  v4[54] = &SetupOpacityPopup::`vftable'; /*0x5bae94*/
  v4[68] = &SetupOpacityPopup::`vftable'; /*0x5baea2*/
  v4[83] = &SetupOpacityPopup::`vftable'; /*0x5baeb0*/
  v4[84] = &SetupOpacityPopup::`vftable'; /*0x5baebe*/
  v4[130] = 1065353216; /*0x5baec5*/
  *((_DWORD *)v4 + 262) = 0; /*0x5baed0*/
  if ( (unsigned __int8)sub_5BAF30(v4, a1, a2) ) /*0x5baee3*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v4); /*0x5baeef*/
    return v4; /*0x5baef5*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v4 + 8LL))(v4, 1); /*0x5baf17*/
    return 0; /*0x5baf1a*/
  }
}

// [4/6] Address: 0x5bba00
// Method: SetupOpacityPopup::determineStartValues
void __fastcall SetupOpacityPopup_determineStartValues(__int64 a1)
{
  __int64 v2; // rcx
  cocos2d::CCArray *v3; // rdi
  unsigned int v4; // esi
  float v5; // xmm7_4
  float v6; // xmm6_4
  struct cocos2d::CCObject *v7; // rax
  int v8; // ecx
  int v9; // eax

  SetupTriggerPopup_determineStartValues(a1); /*0x5bba0d*/
  if ( *(_QWORD *)(a1 + 680) ) /*0x5bba12*/
  {
    v3 = (cocos2d::CCArray *)cocos2d::CCArray::create(v2); /*0x5bba2c*/
    cocos2d::CCArray::addObject(v3, *(struct cocos2d::CCObject **)(a1 + 680)); /*0x5bba2f*/
  }
  else
  {
    v3 = *(cocos2d::CCArray **)(a1 + 688); /*0x5bba37*/
  }
  if ( v3 ) /*0x5bba41*/
  {
    if ( cocos2d::CCArray::count(v3) ) /*0x5bba4a*/
    {
      v4 = 0; /*0x5bba6c*/
      v5 = -99999.0; /*0x5bba82*/
      *(_DWORD *)(a1 + 1040) = 1065353216; /*0x5bba86*/
      v6 = -99999.0; /*0x5bba90*/
      *(_DWORD *)(a1 + 1048) = -99999; /*0x5bba94*/
      if ( cocos2d::CCArray::count(v3) ) /*0x5bba9e*/
      {
        do /*0x5bbb3e*/
        {
          v7 = cocos2d::CCArray::objectAtIndex(v3, v4); /*0x5bbac5*/
          if ( v5 == -99999.0 ) /*0x5bbad9*/
          {
            v5 = *((float *)v7 + 367); /*0x5bbadb*/
          }
          else if ( v5 != *((float *)v7 + 367) ) /*0x5bbae5*/
          {
            v5 = -2.0; /*0x5bbae7*/
          }
          if ( v6 == -99999.0 ) /*0x5bbaf9*/
          {
            v6 = *((float *)v7 + 368); /*0x5bbafb*/
          }
          else if ( v6 != *((float *)v7 + 368) ) /*0x5bbb05*/
          {
            v6 = -2.0; /*0x5bbb07*/
          }
          v8 = *(_DWORD *)(a1 + 1048); /*0x5bbb0b*/
          v9 = *((_DWORD *)v7 + 370); /*0x5bbb11*/
          if ( v8 == -99999 ) /*0x5bbb1d*/
          {
            *(_DWORD *)(a1 + 1048) = v9; /*0x5bbb1f*/
          }
          else if ( v8 != v9 ) /*0x5bbb29*/
          {
            *(_DWORD *)(a1 + 1048) = 0; /*0x5bbb2b*/
          }
          ++v4; /*0x5bbb34*/
        }
        while ( v4 < cocos2d::CCArray::count(v3) ); /*0x5bbb3e*/
        if ( v5 >= 0.0 ) /*0x5bbb4c*/
          *(float *)(a1 + 1044) = v5; /*0x5bbb4e*/
        if ( v6 >= 0.0 ) /*0x5bbb59*/
          *(float *)(a1 + 1040) = v6; /*0x5bbb5b*/
      }
    }
  }
}

// [5/6] Address: 0x5bbb90
// Method: SetupOpacityPopup::sliderChanged
void __fastcall SetupOpacityPopup_sliderChanged(__int64 a1, __int64 a2)
{
  float Value; // xmm0_4
  cocos2d::CCString *v5; // rax
  float v6; // xmm0_4
  unsigned int v7; // edi
  __int64 v8; // rax
  cocos2d::CCArray *v9; // rcx
  struct cocos2d::CCObject *v10; // rax
  cocos2d::CCString *v11; // rax
  float v12; // xmm0_4
  const char *CString; // rax
  cocos2d::CCString *v14; // rax
  __int64 v15; // r8
  __int128 v16; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+30h] [rbp-28h]
  __int64 v18; // [rsp+38h] [rbp-20h]

  Value = SliderThumb_getValue(a2); /*0x5bbba8*/
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 2 ) /*0x5bbbbc*/
  {
    v5 = cocos2d::CCString::createWithFormat("%.02f", Value); /*0x5bbbd5*/
    v6 = cocos2d::CCString::floatValue(v5); /*0x5bbbde*/
    v7 = 0; /*0x5bbbec*/
    *(float *)(a1 + 1040) = v6; /*0x5bbbf1*/
    if ( v6 > 0.02 ) /*0x5bbbf9*/
    {
      if ( v6 >= 0.98000002 ) /*0x5bbc0d*/
      {
        v6 = 1.0; /*0x5bbc0f*/
        *(_DWORD *)(a1 + 1040) = 1065353216; /*0x5bbc17*/
      }
    }
    else
    {
      *(_DWORD *)(a1 + 1040) = 0; /*0x5bbbfb*/
      v6 = 0.0; /*0x5bbc01*/
    }
    v8 = *(_QWORD *)(a1 + 680); /*0x5bbc21*/
    if ( v8 ) /*0x5bbc2b*/
    {
      *(float *)(v8 + 1472) = v6; /*0x5bbc30*/
      sub_5BC170(a1); /*0x5bbc47*/
    }
    else
    {
      v9 = *(cocos2d::CCArray **)(a1 + 688); /*0x5bbc4c*/
      if ( v9 && cocos2d::CCArray::count(v9) ) /*0x5bbc58*/
      {
        do /*0x5bbc9c*/
        {
          v10 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 688), v7++); /*0x5bbc79*/
          *((_DWORD *)v10 + 368) = *(_DWORD *)(a1 + 1040); /*0x5bbc87*/
        }
        while ( v7 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 688)) ); /*0x5bbc9c*/
      }
      sub_5BC170(a1); /*0x5bbcb0*/
    }
  }
  else if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 1 ) /*0x5bbcc1*/
  {
    v11 = cocos2d::CCString::createWithFormat("%.02f", (float)(Value * 10.0)); /*0x5bbce2*/
    *(float *)(a1 + 1044) = cocos2d::CCString::floatValue(v11); /*0x5bbcf4*/
    sub_5BC1D0(a1); /*0x5bbcfc*/
    v12 = *(float *)(a1 + 1044); /*0x5bbd01*/
    CString = "Mixed"; /*0x5bbd09*/
    *(_BYTE *)(a1 + 744) = 1; /*0x5bbd17*/
    if ( v12 != -99999.0 ) /*0x5bbd20*/
    {
      v14 = cocos2d::CCString::createWithFormat("%.02f", v12); /*0x5bbd31*/
      CString = cocos2d::CCString::getCString(v14); /*0x5bbd3a*/
    }
    v16 = 0; /*0x5bbd45*/
    v17 = 0; /*0x5bbd4a*/
    v15 = -1; /*0x5bbd4f*/
    v18 = 0; /*0x5bbd56*/
    do /*0x5bbd63*/
      ++v15; /*0x5bbd60*/
    while ( CString[v15] ); /*0x5bbd63*/
    sub_3C230(&v16); /*0x5bbd71*/
    CCTextInputNode_setString(*(_QWORD **)(a1 + 1008), &v16); /*0x5bbd82*/
    *(_BYTE *)(a1 + 744) = 0; /*0x5bbd87*/
  }
}

// [6/6] Address: 0x5bbda0
// Method: SetupOpacityPopup::textChanged
void __fastcall SetupOpacityPopup_textChanged(__int64 a1, _QWORD *a2)
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
  unsigned int v13; // edi
  struct cocos2d::CCObject *v14; // rax
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // r8
  const char *v18; // rcx
  float v19; // xmm6_4
  char *v20; // rcx
  cocos2d::CCString *v21; // rax
  char *String[2]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v23; // [rsp+48h] [rbp-40h]

  if ( !*(_BYTE *)(a1 + 200) ) /*0x5bbdc3*/
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2) == 3 ) /*0x5bbddc*/
    {
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x5bbdf3*/
      *(_OWORD *)String = 0; /*0x5bbdfc*/
      v5 = -1; /*0x5bbe01*/
      v23 = 0; /*0x5bbe08*/
      do /*0x5bbe13*/
        ++v5; /*0x5bbe10*/
      while ( *(_BYTE *)(v4 + v5) ); /*0x5bbe13*/
      sub_3C230(String); /*0x5bbe21*/
      v6 = (const char *)String; /*0x5bbe2c*/
      if ( *((_QWORD *)&v23 + 1) > 0xFu ) /*0x5bbe31*/
        v6 = String[0]; /*0x5bbe31*/
      v7 = atoi(v6); /*0x5bbe37*/
      v8 = *((_QWORD *)&v23 + 1); /*0x5bbe3d*/
      *(_DWORD *)(a1 + 504) = v7; /*0x5bbe42*/
      if ( v8 > 0xF ) /*0x5bbe4c*/
      {
        v9 = String[0]; /*0x5bbe4e*/
        if ( v8 + 1 >= 0x1000 ) /*0x5bbe60*/
        {
          v9 = (char *)*((_QWORD *)String[0] - 1); /*0x5bbe62*/
          if ( (unsigned __int64)(String[0] - v9 - 8) > 0x1F ) /*0x5bbe75*/
            invoke_watson(0, 0, 0, 0, 0); /*0x5bbe86*/
        }
        j_j_free(v9); /*0x5bbe8d*/
      }
      v10 = 0; /*0x5bbe98*/
      if ( *(int *)(a1 + 504) >= 0 ) /*0x5bbeaa*/
        v10 = *(_DWORD *)(a1 + 504); /*0x5bbeaa*/
      v11 = *(_QWORD *)(a1 + 136); /*0x5bbead*/
      if ( v10 > 9999 ) /*0x5bbeb7*/
        v10 = 9999; /*0x5bbeb7*/
      *(_DWORD *)(a1 + 504) = v10; /*0x5bbebb*/
      if ( v11 ) /*0x5bbec4*/
      {
        *(_DWORD *)(v11 + 1480) = v10; /*0x5bbed2*/
      }
      else
      {
        v12 = *(cocos2d::CCArray **)(a1 + 144); /*0x5bbeda*/
        if ( v12 ) /*0x5bbee4*/
        {
          v13 = 0; /*0x5bbee6*/
          if ( cocos2d::CCArray::count(v12) ) /*0x5bbee8*/
          {
            do /*0x5bbf38*/
            {
              v14 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 144), v13); /*0x5bbf09*/
              v15 = *(_DWORD *)(a1 + 504); /*0x5bbf0f*/
              if ( v15 < 0 ) /*0x5bbf17*/
                v15 = 0; /*0x5bbf17*/
              if ( v15 > 9999 ) /*0x5bbf1d*/
                v15 = 9999; /*0x5bbf1d*/
              ++v13; /*0x5bbf21*/
              *((_DWORD *)v14 + 370) = v15; /*0x5bbf23*/
            }
            while ( v13 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 144)) ); /*0x5bbf38*/
          }
        }
      }
      sub_607BB0(a1 - 544); /*0x5bbf41*/
    }
    else if ( (*(unsigned int (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2) == 4 ) /*0x5bbf5f*/
    {
      v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x5bbf7b*/
      *(_OWORD *)String = 0; /*0x5bbf84*/
      v17 = -1; /*0x5bbf89*/
      v23 = 0; /*0x5bbf90*/
      do /*0x5bbf99*/
        ++v17; /*0x5bbf96*/
      while ( *(_BYTE *)(v16 + v17) ); /*0x5bbf99*/
      sub_3C230(String); /*0x5bbfa7*/
      v18 = (const char *)String; /*0x5bbfb2*/
      if ( *((_QWORD *)&v23 + 1) > 0xFu ) /*0x5bbfb7*/
        v18 = String[0]; /*0x5bbfb7*/
      v19 = atof(v18); /*0x5bbfcb*/
      if ( *((_QWORD *)&v23 + 1) > 0xFu ) /*0x5bbfd3*/
      {
        v20 = String[0]; /*0x5bbfd5*/
        if ( (unsigned __int64)(*((_QWORD *)&v23 + 1) + 1LL) >= 0x1000 ) /*0x5bbfe7*/
        {
          v20 = (char *)*((_QWORD *)String[0] - 1); /*0x5bbfe9*/
          if ( (unsigned __int64)(String[0] - v20 - 8) > 0x1F ) /*0x5bbffc*/
            invoke_watson(0, 0, 0, 0, 0); /*0x5bc00d*/
        }
        j_j_free(v20); /*0x5bc014*/
      }
      v21 = cocos2d::CCString::createWithFormat("%.02f", v19); /*0x5bc028*/
      *(float *)(a1 + 500) = cocos2d::CCString::floatValue(v21); /*0x5bc03e*/
      sub_5BC1D0(a1 - 544); /*0x5bc046*/
      sub_83840(*(_QWORD *)(a1 + 480)); /*0x5bc079*/
    }
  }
}
