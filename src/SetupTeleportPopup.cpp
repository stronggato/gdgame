#include <Geode/binding/SetupTeleportPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/6] Address: 0x5f1840
// Method: SetupTeleportPopup::~SetupTeleportPopup
cocos2d::CCNode *__fastcall SetupTeleportPopup__dtor_SetupTeleportPopup(cocos2d::CCNode *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *(_QWORD *)Block = &SetupTeleportPopup::`vftable'; /*0x5f1856*/
  *((_QWORD *)Block + 40) = &SetupTeleportPopup::`vftable'; /*0x5f1860*/
  *((_QWORD *)Block + 41) = &SetupTeleportPopup::`vftable'; /*0x5f186e*/
  *((_QWORD *)Block + 42) = &SetupTeleportPopup::`vftable'; /*0x5f187c*/
  *((_QWORD *)Block + 43) = &SetupTeleportPopup::`vftable'; /*0x5f188a*/
  *((_QWORD *)Block + 44) = &SetupTeleportPopup::`vftable'; /*0x5f1898*/
  *((_QWORD *)Block + 51) = &SetupTeleportPopup::`vftable'; /*0x5f18a6*/
  *((_QWORD *)Block + 54) = &SetupTeleportPopup::`vftable'; /*0x5f18b4*/
  *((_QWORD *)Block + 68) = &SetupTeleportPopup::`vftable'; /*0x5f18c2*/
  *((_QWORD *)Block + 83) = &SetupTeleportPopup::`vftable'; /*0x5f18d0*/
  *((_QWORD *)Block + 84) = &SetupTeleportPopup::`vftable'; /*0x5f18de*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 125); /*0x5f18e5*/
  if ( v4 ) /*0x5f18ef*/
    cocos2d::CCObject::release(v4); /*0x5f18f1*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x5f18fa*/
  if ( (a2 & 1) != 0 ) /*0x5f1904*/
    j_j_free(Block); /*0x5f190e*/
  return Block; /*0x5f1916*/
}

// [2/6] Address: 0x5f1930
// Method: SetupTeleportPopup::create
// Hidden C++ exception states: #wind=1
cocos2d::CCObject *__fastcall SetupTeleportPopup_create(int a1, int a2, int a3, char a4)
{
  cocos2d::CCObject *v8; // r14

  v8 = (cocos2d::CCObject *)operator new(0x3F0u); /*0x5f1961*/
  SetupTriggerPopup_SetupTriggerPopup((__int64)v8); /*0x5f196c*/
  *(_QWORD *)v8 = &SetupTeleportPopup::`vftable'; /*0x5f1978*/
  *((_QWORD *)v8 + 40) = &SetupTeleportPopup::`vftable'; /*0x5f1982*/
  *((_QWORD *)v8 + 41) = &SetupTeleportPopup::`vftable'; /*0x5f1990*/
  *((_QWORD *)v8 + 42) = &SetupTeleportPopup::`vftable'; /*0x5f199e*/
  *((_QWORD *)v8 + 43) = &SetupTeleportPopup::`vftable'; /*0x5f19ac*/
  *((_QWORD *)v8 + 44) = &SetupTeleportPopup::`vftable'; /*0x5f19ba*/
  *((_QWORD *)v8 + 51) = &SetupTeleportPopup::`vftable'; /*0x5f19c8*/
  *((_QWORD *)v8 + 54) = &SetupTeleportPopup::`vftable'; /*0x5f19d6*/
  *((_QWORD *)v8 + 68) = &SetupTeleportPopup::`vftable'; /*0x5f19e4*/
  *((_QWORD *)v8 + 83) = &SetupTeleportPopup::`vftable'; /*0x5f19f2*/
  *((_QWORD *)v8 + 84) = &SetupTeleportPopup::`vftable'; /*0x5f1a00*/
  *((_QWORD *)v8 + 125) = 0; /*0x5f1a07*/
  if ( (unsigned __int8)sub_5F1A70((_DWORD)v8, a1, a2, a3, a4) ) /*0x5f1a22*/
  {
    cocos2d::CCObject::autorelease(v8); /*0x5f1a2e*/
    return v8; /*0x5f1a34*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v8 + 8LL))(v8, 1); /*0x5f1a48*/
    return 0; /*0x5f1a4b*/
  }
}

// [3/6] Address: 0x5f2d20
// Method: SetupTeleportPopup::updateDefaultTriggerValues
__int64 __fastcall SetupTeleportPopup_updateDefaultTriggerValues(struct cocos2d::CCObject **a1)
{
  float v2; // xmm0_4

  SetupTriggerPopup_updateDefaultTriggerValues(a1); /*0x5f2d29*/
  v2 = (*((float (__fastcall **)(struct cocos2d::CCObject **, __int64))*a1 + 146))(a1, 354); /*0x5f2d39*/
  return SetupTeleportPopup_updateTeleportGravityState(a1, (unsigned int)(int)v2); /*0x5f2d46*/
}

// [4/6] Address: 0x5f2d50
// Method: SetupTeleportPopup::valueDidChange
void __fastcall SetupTeleportPopup_valueDidChange(cocos2d::CCDictionary **a1, int a2, float a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8

  v4 = (unsigned int)(a2 - 345); /*0x5f2d5e*/
  if ( (_DWORD)v4 ) /*0x5f2d64*/
  {
    if ( (_DWORD)v4 != 2 ) /*0x5f2d69*/
      return; /*0x5f2d69*/
    if ( a3 == 0.0 ) /*0x5f2d77*/
    {
      v5 = 0; /*0x5f2d79*/
    }
    else
    {
      if ( cocos2d::CCDictionary::objectForKey(a1[94], 345) ) /*0x5f2d8d*/
        (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*a1 + 144))(a1, 345, 0); /*0x5f2da6*/
      else
        sub_60A5A0(a1, 345); /*0x5f2db1*/
      sub_60ABF0(a1, 345); /*0x5f2dc1*/
      LOBYTE(v5) = 1; /*0x5f2dc6*/
      v4 = 2; /*0x5f2dc9*/
    }
  }
  else
  {
    if ( a3 == 0.0 ) /*0x5f2dd8*/
    {
      v5 = 0; /*0x5f2dda*/
    }
    else
    {
      if ( cocos2d::CCDictionary::objectForKey(a1[94], 347) ) /*0x5f2deb*/
        (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*a1 + 144))(a1, 347, 0); /*0x5f2e04*/
      else
        sub_60A5A0(a1, 347); /*0x5f2e0f*/
      sub_60ABF0(a1, 347); /*0x5f2e1f*/
      LOBYTE(v5) = 1; /*0x5f2e24*/
    }
    v4 = 1; /*0x5f2e27*/
  }
  (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, __int64))*a1 + 136))(a1, v4, v5); /*0x5f2e32*/
}

// [5/6] Address: 0x5f2e50
// Method: SetupTeleportPopup::onTeleportGravity
__int64 __fastcall SetupTeleportPopup_onTeleportGravity(_QWORD *a1, __int64 a2)
{
  int v4; // ebx
  int v5; // eax
  int v6; // edi
  bool v7; // zf
  cocos2d::CCDictionary *v8; // rbx
  struct cocos2d::CCObject *v9; // rax

  v4 = (int)(*(float (__fastcall **)(_QWORD *, __int64))(*a1 + 1168LL))(a1, 354); /*0x5f2e7e*/
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5f2e82*/
  v6 = 0; /*0x5f2e85*/
  v7 = v4 == v5; /*0x5f2e87*/
  v8 = (cocos2d::CCDictionary *)a1[104]; /*0x5f2e89*/
  if ( !v7 ) /*0x5f2e90*/
    v6 = v5; /*0x5f2e90*/
  v9 = cocos2d::CCFloat::create((float)v6); /*0x5f2e9d*/
  cocos2d::CCDictionary::setObject(v8, v9, 354); /*0x5f2eaf*/
  sub_60ABF0(a1, 354); /*0x5f2ec0*/
  return SetupTeleportPopup_updateTeleportGravityState(a1, (unsigned int)v6); /*0x5f2eca*/
}

// [6/6] Address: 0x5f2ef0
// Method: SetupTeleportPopup::updateTeleportGravityState
__int64 __fastcall SetupTeleportPopup_updateTeleportGravityState(__int64 a1, int a2)
{
  __int64 result; // rax
  unsigned int *v4; // rdi
  __int64 *v5; // rdi
  __int64 *i; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdx

  result = *(_QWORD *)(a1 + 1000); /*0x5f2ef6*/
  if ( result ) /*0x5f2f02*/
  {
    v4 = *(unsigned int **)(result + 56); /*0x5f2f09*/
    result = *v4; /*0x5f2f0d*/
    if ( (_DWORD)result ) /*0x5f2f11*/
    {
      v5 = (__int64 *)*((_QWORD *)v4 + 2); /*0x5f2f13*/
      for ( i = &v5[result - 1]; v5 <= i; ++v5 ) /*0x5f2f27*/
      {
        v7 = *v5; /*0x5f2f30*/
        if ( !*v5 ) /*0x5f2f30*/
          break; /*0x5f2f36*/
        LOBYTE(v8) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(*v5) == a2; /*0x5f2f46*/
        result = CCMenuItemToggler_toggle(v7, v8); /*0x5f2f49*/
      }
    }
  }
  return result; /*0x5f2f66*/
}
