#include <Geode/binding/SetupItemCompareTriggerPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x5fffa0
// Method: SetupItemCompareTriggerPopup::onOpButton
__int64 __fastcall SetupItemCompareTriggerPopup_onOpButton(cocos2d::CCDictionary **a1, __int64 a2)
{
  __int64 v4; // rdi
  int v5; // ebx
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rcx

  v4 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5fffcc*/
  v5 = (int)(*((float (__fastcall **)(cocos2d::CCDictionary **, __int64))*a1 + 146))(a1, v4) + 1; /*0x5fffd9*/
  if ( (_DWORD)v4 == 482 ) /*0x5fffe1*/
  {
    v6 = 0; /*0x5fffe3*/
    if ( v5 <= 5 ) /*0x5fffe8*/
      v6 = v5; /*0x5fffe8*/
    v5 = v6; /*0x5fffeb*/
  }
  else
  {
    if ( (unsigned int)(v4 - 485) <= 1 ) /*0x5ffff8*/
    {
      if ( v5 > 3 ) /*0x600021*/
        v5 = 0; /*0x600021*/
    }
    else if ( (unsigned int)(v4 - 578) <= 1 ) /*0x600003*/
    {
      v7 = 0; /*0x600010*/
      if ( v5 <= 2 ) /*0x600015*/
        v7 = v5; /*0x600015*/
      v5 = v7; /*0x600018*/
    }
    else if ( v5 > 4 ) /*0x600008*/
    {
      v5 = 0; /*0x60000c*/
    }
    if ( (unsigned int)(v4 - 480) <= 1 && v5 < 1 ) /*0x600036*/
      v5 = 1; /*0x600036*/
  }
  SetupTriggerPopup_updateValue(a1, v4, (float)v5); /*0x600045*/
  sub_600080(v8, a2, (unsigned int)v5, (unsigned int)v4); /*0x600053*/
  return sub_6005F0(a1); /*0x60005b*/
}

// [2/3] Address: 0x6003b0
// Method: SetupItemCompareTriggerPopup::onCustomToggleTriggerValue
__int64 __fastcall SetupItemCompareTriggerPopup_onCustomToggleTriggerValue(cocos2d::CCDictionary **a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebp
  int v5; // edi
  int v6; // ebx
  struct cocos2d::CCObject *v7; // rax
  __int64 v8; // rdx
  struct cocos2d::CCObject *v9; // rax
  __int64 v10; // rdx
  struct cocos2d::CCObject *v11; // rax
  __int64 v12; // rdx
  struct cocos2d::CCObject *v13; // rax
  __int64 v14; // rdx
  struct cocos2d::CCObject *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  struct cocos2d::CCObject *v18; // rax
  __int64 v19; // rdx
  struct cocos2d::CCObject *v20; // rax
  __int64 v21; // rdx
  struct cocos2d::CCObject *v22; // rax
  __int64 v23; // rdx
  struct cocos2d::CCObject *v24; // rax
  __int64 v25; // rdx
  struct cocos2d::CCObject *v26; // rax
  __int64 v27; // rdx
  struct cocos2d::CCObject *v28; // rax
  int v29; // edi

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x6003c8*/
  v4 = 0; /*0x6003cb*/
  v5 = v3; /*0x6003d0*/
  if ( v3 <= 100 ) /*0x6003d5*/
  {
    SetupTriggerPopup_updateValue(a1, 0x1DCu, (float)v3); /*0x6004e4*/
    v18 = cocos2d::CCDictionary::objectForKey(a1[97], 1); /*0x6004f5*/
    if ( v18 ) /*0x6004fe*/
    {
      LOBYTE(v19) = v5 == 1; /*0x600506*/
      CCMenuItemToggler_toggle((__int64)v18, v19); /*0x600509*/
    }
    v20 = cocos2d::CCDictionary::objectForKey(a1[97], 2); /*0x60051a*/
    if ( v20 ) /*0x600523*/
    {
      LOBYTE(v21) = v5 == 2; /*0x60052b*/
      CCMenuItemToggler_toggle((__int64)v20, v21); /*0x60052e*/
    }
    v22 = cocos2d::CCDictionary::objectForKey(a1[97], 3); /*0x60053f*/
    if ( v22 ) /*0x600548*/
    {
      LOBYTE(v23) = v5 == 3; /*0x600550*/
      CCMenuItemToggler_toggle((__int64)v22, v23); /*0x600553*/
    }
    v24 = cocos2d::CCDictionary::objectForKey(a1[97], 4); /*0x600564*/
    if ( v24 ) /*0x60056d*/
    {
      LOBYTE(v25) = v5 == 4; /*0x600575*/
      CCMenuItemToggler_toggle((__int64)v24, v25); /*0x600578*/
    }
    v26 = cocos2d::CCDictionary::objectForKey(a1[97], 5); /*0x600589*/
    if ( v26 ) /*0x600592*/
    {
      LOBYTE(v27) = v5 == 5; /*0x60059a*/
      CCMenuItemToggler_toggle((__int64)v26, v27); /*0x60059d*/
    }
    v17 = 80; /*0x6005a2*/
  }
  else
  {
    v6 = v3 - 100; /*0x6003e5*/
    v5 = 0; /*0x6003f1*/
    if ( (int)(*((float (__fastcall **)(cocos2d::CCDictionary **, __int64))*a1 + 146))(a1, 477) != v3 - 100 ) /*0x600401*/
      v5 = v6; /*0x600401*/
    SetupTriggerPopup_updateValue(a1, 0x1DDu, (float)v5); /*0x60040b*/
    v7 = cocos2d::CCDictionary::objectForKey(a1[97], 101); /*0x60041c*/
    if ( v7 ) /*0x60042a*/
    {
      LOBYTE(v8) = v5 == 1; /*0x600432*/
      CCMenuItemToggler_toggle((__int64)v7, v8); /*0x600435*/
    }
    v9 = cocos2d::CCDictionary::objectForKey(a1[97], 102); /*0x600446*/
    if ( v9 ) /*0x60044f*/
    {
      LOBYTE(v10) = v5 == 2; /*0x600457*/
      CCMenuItemToggler_toggle((__int64)v9, v10); /*0x60045a*/
    }
    v11 = cocos2d::CCDictionary::objectForKey(a1[97], 103); /*0x60046b*/
    if ( v11 ) /*0x600474*/
    {
      LOBYTE(v12) = v5 == 3; /*0x60047c*/
      CCMenuItemToggler_toggle((__int64)v11, v12); /*0x60047f*/
    }
    v13 = cocos2d::CCDictionary::objectForKey(a1[97], 104); /*0x600490*/
    if ( v13 ) /*0x600499*/
    {
      LOBYTE(v14) = v5 == 4; /*0x6004a1*/
      CCMenuItemToggler_toggle((__int64)v13, v14); /*0x6004a4*/
    }
    v15 = cocos2d::CCDictionary::objectForKey(a1[97], 105); /*0x6004b5*/
    if ( v15 ) /*0x6004be*/
    {
      LOBYTE(v16) = v5 == 5; /*0x6004c6*/
      CCMenuItemToggler_toggle((__int64)v15, v16); /*0x6004c9*/
    }
    v17 = 95; /*0x6004ce*/
  }
  v28 = cocos2d::CCDictionary::objectForKey(a1[123], v17); /*0x6005ae*/
  if ( v28 ) /*0x6005b7*/
  {
    v29 = v5 - 1; /*0x6005b9*/
    if ( v29 ) /*0x6005bc*/
    {
      if ( v29 == 1 ) /*0x6005c1*/
        v4 = 4; /*0x6005c3*/
    }
    else
    {
      v4 = 2; /*0x6005ca*/
    }
    sub_3C4E40(v28, v4); /*0x6005d4*/
  }
  return sub_6005F0(a1); /*0x6005dc*/
}

// [3/3] Address: 0x601010
// Method: SetupItemCompareTriggerPopup::valueDidChange
__int64 __fastcall SetupItemCompareTriggerPopup_valueDidChange(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  __int64 result; // rax

  v2 = a2 - 80; /*0x601010*/
  if ( !v2 ) /*0x601013*/
    return sub_6005F0(a1); /*0x601013*/
  v3 = v2 - 15; /*0x601015*/
  if ( !v3 ) /*0x601018*/
    return sub_6005F0(a1); /*0x601018*/
  v4 = v3 - 384; /*0x60101a*/
  if ( !v4 || v4 == 4 ) /*0x601025*/
    return sub_6005F0(a1); /*0x601027*/
  return result; /*0x60102c*/
}
