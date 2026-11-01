#include <Geode/binding/SetupPickupTriggerPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x5c7d50
// Method: SetupPickupTriggerPopup::updateState
__int64 __fastcall SetupPickupTriggerPopup_updateState(__int64 a1)
{
  bool v2; // bl

  v2 = (*(float (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 1168LL))(a1, 88) != 0.0; /*0x5c7d73*/
  (*(void (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)a1 + 1088LL))(a1, 1, !v2); /*0x5c7d8e*/
  return (*(__int64 (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)a1 + 1088LL))(a1, 2, v2);
}

// [2/2] Address: 0x5c7dc0
// Method: SetupPickupTriggerPopup::onCustomToggleTriggerValue
__int64 __fastcall SetupPickupTriggerPopup_onCustomToggleTriggerValue(cocos2d::CCDictionary **a1, __int64 a2)
{
  int v3; // ebx
  int v4; // esi
  struct cocos2d::CCObject *v5; // rax
  __int64 v6; // rdx
  struct cocos2d::CCObject *v7; // rax
  __int64 v8; // rdx

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5c7de1*/
  v4 = 0; /*0x5c7df9*/
  if ( (int)(*((float (__fastcall **)(cocos2d::CCDictionary **, __int64))*a1 + 146))(a1, 88) != v3 ) /*0x5c7e06*/
    v4 = v3; /*0x5c7e06*/
  v5 = cocos2d::CCDictionary::objectForKey(a1[97], 1); /*0x5c7e09*/
  if ( v5 ) /*0x5c7e12*/
  {
    LOBYTE(v6) = v4 == 1; /*0x5c7e1a*/
    CCMenuItemToggler_toggle((__int64)v5, v6); /*0x5c7e1d*/
  }
  v7 = cocos2d::CCDictionary::objectForKey(a1[97], 2); /*0x5c7e2e*/
  if ( v7 ) /*0x5c7e37*/
  {
    LOBYTE(v8) = v4 == 2; /*0x5c7e3f*/
    CCMenuItemToggler_toggle((__int64)v7, v8); /*0x5c7e42*/
  }
  SetupTriggerPopup_updateValue(a1, 0x58u, (float)v4); /*0x5c7e56*/
  return SetupPickupTriggerPopup_updateState((__int64)a1); /*0x5c7e5e*/
}
