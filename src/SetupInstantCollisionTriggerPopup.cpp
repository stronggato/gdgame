#include <Geode/binding/SetupInstantCollisionTriggerPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x5aaab0
// Method: SetupInstantCollisionTriggerPopup::SetupInstantCollisionTriggerPopup
_QWORD *__fastcall SetupInstantCollisionTriggerPopup_SetupInstantCollisionTriggerPopup(_QWORD *a1)
{
  SetupTriggerPopup_SetupTriggerPopup((__int64)a1); /*0x5aaab9*/
  *a1 = &SetupInstantCollisionTriggerPopup::`vftable'; /*0x5aaac5*/
  a1[40] = &SetupInstantCollisionTriggerPopup::`vftable'; /*0x5aaacf*/
  a1[41] = &SetupInstantCollisionTriggerPopup::`vftable'; /*0x5aaadd*/
  a1[42] = &SetupInstantCollisionTriggerPopup::`vftable'; /*0x5aaaeb*/
  a1[43] = &SetupInstantCollisionTriggerPopup::`vftable'; /*0x5aaaf9*/
  a1[44] = &SetupInstantCollisionTriggerPopup::`vftable'; /*0x5aab07*/
  a1[51] = &SetupInstantCollisionTriggerPopup::`vftable'; /*0x5aab15*/
  a1[54] = &SetupInstantCollisionTriggerPopup::`vftable'; /*0x5aab23*/
  a1[68] = &SetupInstantCollisionTriggerPopup::`vftable'; /*0x5aab31*/
  a1[83] = &SetupInstantCollisionTriggerPopup::`vftable'; /*0x5aab3f*/
  a1[84] = &SetupInstantCollisionTriggerPopup::`vftable'; /*0x5aab4d*/
  return a1; /*0x5aab57*/
}

// [2/5] Address: 0x5ab4d0
// Method: SetupInstantCollisionTriggerPopup::updateSpecialNodes
double __fastcall SetupInstantCollisionTriggerPopup_updateSpecialNodes(cocos2d::CCDictionary **a1)
{
  bool v2; // r14
  bool v3; // r15
  double result; // xmm0_8
  struct cocos2d::CCObject *v5; // rax
  __int64 v6; // rdx
  struct cocos2d::CCObject *v7; // rdi
  __int128 *v8; // rdx
  struct cocos2d::CCObject *v9; // rcx
  float v10; // xmm0_4
  struct cocos2d::CCObject *v11; // rax
  struct cocos2d::CCObject *v12; // rdi
  __int128 *v13; // rdx
  float v14; // xmm0_4
  __int128 v15; // [rsp+20h] [rbp-30h] BYREF
  __int64 v16; // [rsp+30h] [rbp-20h]
  __int64 v17; // [rsp+38h] [rbp-18h]

  v2 = (*((float (__fastcall **)(cocos2d::CCDictionary **, __int64))*a1 + 146))(a1, 201) != 0.0; /*0x5ab4fd*/
  v3 = (*((float (__fastcall **)(cocos2d::CCDictionary **, __int64))*a1 + 146))(a1, 138) != 0.0; /*0x5ab525*/
  *(float *)&result = (*((float (__fastcall **)(cocos2d::CCDictionary **, __int64))*a1 + 146))(a1, 200); /*0x5ab542*/
  v5 = cocos2d::CCDictionary::objectForKey(a1[95], 80); /*0x5ab568*/
  v7 = v5; /*0x5ab56e*/
  if ( v5 ) /*0x5ab57a*/
  {
    if ( v3 || *(float *)&result != 0.0 || v2 ) /*0x5ab58d*/
      v6 = 0; /*0x5ab593*/
    else
      LOBYTE(v6) = 1; /*0x5ab58f*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v5 + 920LL))(v5, v6); /*0x5ab59b*/
    if ( v2 ) /*0x5ab5a4*/
    {
      v16 = 2; /*0x5ab5a9*/
      v15 = 0; /*0x5ab5b1*/
      strcpy((char *)&v15, "P1"); /*0x5ab5be*/
      v8 = &v15; /*0x5ab5c2*/
      v17 = 15; /*0x5ab5c6*/
    }
    else
    {
      if ( v3 ) /*0x5ab5d6*/
      {
        v17 = 15; /*0x5ab5d8*/
        v8 = &v15; /*0x5ab5e3*/
        v9 = v7; /*0x5ab5e7*/
        v15 = 0; /*0x5ab5ea*/
        if ( *(float *)&result == 0.0 ) /*0x5ab5f1*/
        {
          v16 = 2; /*0x5ab610*/
          strcpy((char *)&v15, "P1"); /*0x5ab618*/
        }
        else
        {
          LOWORD(v15) = 80; /*0x5ab5fa*/
          v16 = 1; /*0x5ab5fd*/
        }
        goto LABEL_17; /*0x5ab609*/
      }
      if ( *(float *)&result == 0.0 ) /*0x5ab625*/
      {
        v10 = (*((float (__fastcall **)(cocos2d::CCDictionary **, __int64))*a1 + 146))(a1, 80); /*0x5ab658*/
        v8 = (__int128 *)GameToolbox_intToString((__int64)&v15, (int)v10); /*0x5ab66b*/
      }
      else
      {
        v16 = 2; /*0x5ab62a*/
        v15 = 0; /*0x5ab632*/
        strcpy((char *)&v15, "P2"); /*0x5ab636*/
        v8 = &v15; /*0x5ab63b*/
        v17 = 15; /*0x5ab643*/
      }
    }
    v9 = v7; /*0x5ab66e*/
LABEL_17:
    result = CCTextInputNode_setString(v9, v8); /*0x5ab671*/
  }
  v11 = cocos2d::CCDictionary::objectForKey(a1[95], 95); /*0x5ab676*/
  v12 = v11; /*0x5ab690*/
  if ( v11 ) /*0x5ab69e*/
  {
    (*(void (__fastcall **)(struct cocos2d::CCObject *, bool))(*(_QWORD *)v11 + 920LL))(v11, !v2); /*0x5ab6b4*/
    if ( v2 ) /*0x5ab6ba*/
    {
      v16 = 2; /*0x5ab6bf*/
      v15 = 0; /*0x5ab6c7*/
      strcpy((char *)&v15, "P2"); /*0x5ab6cb*/
      v13 = &v15; /*0x5ab6d0*/
      v17 = 15; /*0x5ab6d8*/
    }
    else
    {
      v14 = (*((float (__fastcall **)(cocos2d::CCDictionary **, __int64))*a1 + 146))(a1, 95); /*0x5ab6ed*/
      v13 = (__int128 *)GameToolbox_intToString((__int64)&v15, (int)v14); /*0x5ab700*/
    }
    return CCTextInputNode_setString(v12, v13); /*0x5ab706*/
  }
  return result; /*0x5ab70b*/
}

// [3/5] Address: 0x5ab740
// Method: SetupInstantCollisionTriggerPopup::create
// Hidden C++ exception states: #wind=1
cocos2d::CCObject *__fastcall SetupInstantCollisionTriggerPopup_create(__int64 a1, __int64 a2)
{
  cocos2d::CCObject *v4; // rax
  cocos2d::CCObject *v5; // rbx
  _QWORD *v7; // [rsp+40h] [rbp+18h]

  v7 = operator new(0x3E8u); /*0x5ab75f*/
  v4 = (cocos2d::CCObject *)SetupInstantCollisionTriggerPopup_SetupInstantCollisionTriggerPopup(v7); /*0x5ab767*/
  v5 = v4; /*0x5ab76c*/
  if ( v4 ) /*0x5ab772*/
  {
    if ( (unsigned __int8)sub_5AB7D0(v4, a1, a2) ) /*0x5ab77d*/
    {
      cocos2d::CCObject::autorelease(v5); /*0x5ab789*/
      return v5; /*0x5ab7a1*/
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v5 + 8LL))(v5, 1); /*0x5ab7aa*/
    return 0; /*0x5ab7ad*/
  }
  return v5; /*0x5ab792*/
}

// [4/5] Address: 0x5abfb0
// Method: SetupInstantCollisionTriggerPopup::valueDidChange
__int64 __fastcall SetupInstantCollisionTriggerPopup_valueDidChange(__int64 a1, int a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  v2 = (unsigned int)(a2 - 138); /*0x5abfb0*/
  if ( !(_DWORD)v2 ) /*0x5abfb6*/
    return sub_5ABFD0(a1, v2); /*0x5abfb6*/
  v2 = (unsigned int)(v2 - 62); /*0x5abfb8*/
  if ( (unsigned int)v2 <= 1 ) /*0x5abfbb*/
    return sub_5ABFD0(a1, v2); /*0x5abfc2*/
  return result; /*0x5abfc7*/
}

// [5/5] Address: 0x5ac1e0
// Method: SetupInstantCollisionTriggerPopup::updateDefaultTriggerValues
void __fastcall SetupInstantCollisionTriggerPopup_updateDefaultTriggerValues(struct cocos2d::CCObject **a1)
{
  __int64 v2; // rdx

  SetupTriggerPopup_updateDefaultTriggerValues(a1); /*0x5ac1e9*/
  sub_5ABFD0(a1, v2); /*0x5ac1f6*/
}
