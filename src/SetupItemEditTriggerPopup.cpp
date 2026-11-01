#include <Geode/binding/SetupItemEditTriggerPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x5fd4a0
// Method: SetupItemEditTriggerPopup::onOpButton
__int64 __fastcall SetupItemEditTriggerPopup_onOpButton(cocos2d::CCDictionary **a1, __int64 a2)
{
  __int64 v4; // rdi
  int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx

  v4 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5fd4cc*/
  v5 = (int)(*((float (__fastcall **)(cocos2d::CCDictionary **, __int64))*a1 + 146))(a1, v4) + 1; /*0x5fd4df*/
  if ( (unsigned int)(v4 - 485) <= 1 ) /*0x5fd4e4*/
  {
    if ( v5 > 3 ) /*0x5fd50d*/
      v5 = 0; /*0x5fd50d*/
  }
  else if ( (unsigned int)(v4 - 578) <= 1 ) /*0x5fd4ef*/
  {
    v6 = 0; /*0x5fd4fc*/
    if ( v5 <= 2 ) /*0x5fd501*/
      v6 = v5; /*0x5fd501*/
    v5 = v6; /*0x5fd504*/
  }
  else if ( v5 > 4 ) /*0x5fd4f4*/
  {
    v5 = 0; /*0x5fd4f8*/
  }
  if ( (_DWORD)v4 == 481 ) /*0x5fd516*/
  {
    if ( v5 < 1 ) /*0x5fd51b*/
      v5 = 1; /*0x5fd51d*/
  }
  else if ( (_DWORD)v4 == 482 && v5 < 3 ) /*0x5fd533*/
  {
    v5 = 3; /*0x5fd533*/
  }
  SetupTriggerPopup_updateValue(a1, v4, (float)v5); /*0x5fd542*/
  sub_5FD8F0(v7, a2, (unsigned int)v5, (unsigned int)v4); /*0x5fd550*/
  return sub_5FDB70(a1); /*0x5fd558*/
}

// [2/3] Address: 0x5fe790
// Method: SetupItemEditTriggerPopup::onCustomToggleTriggerValue
__int64 __fastcall SetupItemEditTriggerPopup_onCustomToggleTriggerValue(cocos2d::CCDictionary **a1, __int64 a2)
{
  unsigned int v3; // ebp
  int v4; // edi
  int v5; // edi
  struct cocos2d::CCObject *v6; // rax
  __int64 v7; // rdx
  struct cocos2d::CCObject *v8; // rax
  __int64 v9; // rdx
  struct cocos2d::CCObject *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  float (__fastcall *v13)(cocos2d::CCDictionary **, __int64); // r8
  int v14; // ebx
  struct cocos2d::CCObject *v15; // rax
  __int64 v16; // rdx
  struct cocos2d::CCObject *v17; // rax
  __int64 v18; // rdx
  struct cocos2d::CCObject *v19; // rax
  __int64 v20; // rdx
  struct cocos2d::CCObject *v21; // rax
  __int64 v22; // rdx
  struct cocos2d::CCObject *v23; // rax
  __int64 v24; // rdx
  float v25; // xmm0_4
  int v26; // ecx
  struct cocos2d::CCObject *v27; // rax
  __int64 v28; // rdx
  struct cocos2d::CCObject *v29; // rax
  __int64 v30; // rdx
  struct cocos2d::CCObject *v31; // rax
  __int64 v32; // rdx
  struct cocos2d::CCObject *v33; // rax
  __int64 v34; // rdx
  struct cocos2d::CCObject *v35; // rax
  __int64 v36; // rdx
  struct cocos2d::CCObject *v37; // rax
  int v38; // edi

  v3 = 0; /*0x5fe7ab*/
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5fe7b0*/
  if ( v4 <= 1000 ) /*0x5fe7b7*/
  {
    v13 = (float (__fastcall *)(cocos2d::CCDictionary **, __int64))*((_QWORD *)*a1 + 146); /*0x5fe850*/
    if ( v4 <= 100 ) /*0x5fe85a*/
    {
      v25 = v13(a1, 476); /*0x5fe95c*/
      v26 = 0; /*0x5fe963*/
      if ( (int)v25 != v4 ) /*0x5fe96c*/
        v26 = v4; /*0x5fe96c*/
      v5 = v26; /*0x5fe96f*/
      SetupTriggerPopup_updateValue(a1, 0x1DCu, (float)v26); /*0x5fe97b*/
      v27 = cocos2d::CCDictionary::objectForKey(a1[97], 1); /*0x5fe98c*/
      if ( v27 ) /*0x5fe995*/
      {
        LOBYTE(v28) = v5 == 1; /*0x5fe99d*/
        CCMenuItemToggler_toggle((__int64)v27, v28); /*0x5fe9a0*/
      }
      v29 = cocos2d::CCDictionary::objectForKey(a1[97], 2); /*0x5fe9b1*/
      if ( v29 ) /*0x5fe9ba*/
      {
        LOBYTE(v30) = v5 == 2; /*0x5fe9c2*/
        CCMenuItemToggler_toggle((__int64)v29, v30); /*0x5fe9c5*/
      }
      v31 = cocos2d::CCDictionary::objectForKey(a1[97], 3); /*0x5fe9d6*/
      if ( v31 ) /*0x5fe9df*/
      {
        LOBYTE(v32) = v5 == 3; /*0x5fe9e7*/
        CCMenuItemToggler_toggle((__int64)v31, v32); /*0x5fe9ea*/
      }
      v33 = cocos2d::CCDictionary::objectForKey(a1[97], 4); /*0x5fe9fb*/
      if ( v33 ) /*0x5fea04*/
      {
        LOBYTE(v34) = v5 == 4; /*0x5fea0c*/
        CCMenuItemToggler_toggle((__int64)v33, v34); /*0x5fea0f*/
      }
      v35 = cocos2d::CCDictionary::objectForKey(a1[97], 5); /*0x5fea20*/
      if ( v35 ) /*0x5fea29*/
      {
        LOBYTE(v36) = v5 == 5; /*0x5fea31*/
        CCMenuItemToggler_toggle((__int64)v35, v36); /*0x5fea34*/
      }
      v12 = 80; /*0x5fea39*/
    }
    else
    {
      v14 = v4 - 100; /*0x5fe86a*/
      v5 = 0; /*0x5fe874*/
      if ( (int)v13(a1, 477) != v14 ) /*0x5fe880*/
        v5 = v14; /*0x5fe880*/
      SetupTriggerPopup_updateValue(a1, 0x1DDu, (float)v5); /*0x5fe88a*/
      v15 = cocos2d::CCDictionary::objectForKey(a1[97], 101); /*0x5fe89b*/
      if ( v15 ) /*0x5fe8a9*/
      {
        LOBYTE(v16) = v5 == 1; /*0x5fe8b1*/
        CCMenuItemToggler_toggle((__int64)v15, v16); /*0x5fe8b4*/
      }
      v17 = cocos2d::CCDictionary::objectForKey(a1[97], 102); /*0x5fe8c5*/
      if ( v17 ) /*0x5fe8ce*/
      {
        LOBYTE(v18) = v5 == 2; /*0x5fe8d6*/
        CCMenuItemToggler_toggle((__int64)v17, v18); /*0x5fe8d9*/
      }
      v19 = cocos2d::CCDictionary::objectForKey(a1[97], 103); /*0x5fe8ea*/
      if ( v19 ) /*0x5fe8f3*/
      {
        LOBYTE(v20) = v5 == 3; /*0x5fe8fb*/
        CCMenuItemToggler_toggle((__int64)v19, v20); /*0x5fe8fe*/
      }
      v21 = cocos2d::CCDictionary::objectForKey(a1[97], 104); /*0x5fe90f*/
      if ( v21 ) /*0x5fe918*/
      {
        LOBYTE(v22) = v5 == 4; /*0x5fe920*/
        CCMenuItemToggler_toggle((__int64)v21, v22); /*0x5fe923*/
      }
      v23 = cocos2d::CCDictionary::objectForKey(a1[97], 105); /*0x5fe934*/
      if ( v23 ) /*0x5fe93d*/
      {
        LOBYTE(v24) = v5 == 5; /*0x5fe945*/
        CCMenuItemToggler_toggle((__int64)v23, v24); /*0x5fe948*/
      }
      v12 = 95; /*0x5fe94d*/
    }
  }
  else
  {
    v5 = v4 - 1000; /*0x5fe7bd*/
    SetupTriggerPopup_updateValue(a1, 0x1DEu, (float)v5); /*0x5fe7cf*/
    v6 = cocos2d::CCDictionary::objectForKey(a1[97], 1001); /*0x5fe7e0*/
    if ( v6 ) /*0x5fe7e9*/
    {
      LOBYTE(v7) = v5 == 1; /*0x5fe7f1*/
      CCMenuItemToggler_toggle((__int64)v6, v7); /*0x5fe7f4*/
    }
    v8 = cocos2d::CCDictionary::objectForKey(a1[97], 1002); /*0x5fe805*/
    if ( v8 ) /*0x5fe80e*/
    {
      LOBYTE(v9) = v5 == 2; /*0x5fe816*/
      CCMenuItemToggler_toggle((__int64)v8, v9); /*0x5fe819*/
    }
    v10 = cocos2d::CCDictionary::objectForKey(a1[97], 1003); /*0x5fe82a*/
    if ( v10 ) /*0x5fe833*/
    {
      LOBYTE(v11) = v5 == 3; /*0x5fe83b*/
      CCMenuItemToggler_toggle((__int64)v10, v11); /*0x5fe83e*/
    }
    v12 = 51; /*0x5fe843*/
  }
  v37 = cocos2d::CCDictionary::objectForKey(a1[123], v12); /*0x5fea45*/
  if ( v37 ) /*0x5fea4e*/
  {
    v38 = v5 - 1; /*0x5fea50*/
    if ( v38 ) /*0x5fea53*/
    {
      if ( v38 == 1 ) /*0x5fea58*/
        v3 = 4; /*0x5fea5a*/
    }
    else
    {
      v3 = 2; /*0x5fea61*/
    }
    sub_3C4E40(v37, v3); /*0x5fea6b*/
  }
  return sub_5FDB70(a1); /*0x5fea73*/
}

// [3/3] Address: 0x5fea90
// Method: SetupItemEditTriggerPopup::valueDidChange
unsigned __int64 __fastcall SetupItemEditTriggerPopup_valueDidChange(__int64 a1, int a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // r8

  result = (unsigned int)(a2 - 51); /*0x5fea90*/
  if ( (unsigned int)result <= 0x2C ) /*0x5fea96*/
  {
    v3 = 0x100020000001LL; /*0x5fea98*/
    if ( _bittest64(&v3, result) ) /*0x5feaa6*/
      return sub_5FDB70(a1); /*0x5feaa6*/
  }
  if ( a2 == 479 ) /*0x5feaae*/
    return sub_5FDB70(a1); /*0x5feab0*/
  return result; /*0x5feab5*/
}
