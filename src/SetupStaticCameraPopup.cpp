#include <Geode/binding/SetupStaticCameraPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x5d2bb0
// Method: SetupStaticCameraPopup::onCustomToggleTriggerValue
double __fastcall SetupStaticCameraPopup_onCustomToggleTriggerValue(cocos2d::CCDictionary **a1, __int64 a2)
{
  int v3; // ebx
  int v4; // edi
  struct cocos2d::CCObject *v5; // rax
  __int64 v6; // rdx
  struct cocos2d::CCObject *v7; // rax
  __int64 v8; // rdx

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5d2bd1*/
  v4 = 0; /*0x5d2be9*/
  if ( (int)(*((float (__fastcall **)(cocos2d::CCDictionary **, __int64))*a1 + 146))(a1, 101) != v3 ) /*0x5d2bf6*/
    v4 = v3; /*0x5d2bf6*/
  v5 = cocos2d::CCDictionary::objectForKey(a1[97], 1); /*0x5d2bf9*/
  if ( v5 ) /*0x5d2c02*/
  {
    LOBYTE(v6) = v4 == 1; /*0x5d2c0a*/
    CCMenuItemToggler_toggle((__int64)v5, v6); /*0x5d2c0d*/
  }
  v7 = cocos2d::CCDictionary::objectForKey(a1[97], 2); /*0x5d2c1e*/
  if ( v7 ) /*0x5d2c27*/
  {
    LOBYTE(v8) = v4 == 2; /*0x5d2c2f*/
    CCMenuItemToggler_toggle((__int64)v7, v8); /*0x5d2c32*/
  }
  return SetupTriggerPopup_updateValue(a1, 0x65u, (float)v4); /*0x5d2c46*/
}

// [2/2] Address: 0x5f17a0
// Method: SetupStaticCameraPopup::valueDidChange
__int64 __fastcall SetupStaticCameraPopup_valueDidChange(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 == 212 || a2 == 453 ) /*0x5f17ae*/
    return sub_5F17C0(); /*0x5f17b0*/
  return result; /*0x5f17b5*/
}
