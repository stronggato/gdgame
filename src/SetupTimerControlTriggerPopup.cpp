#include <Geode/binding/SetupTimerControlTriggerPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x5f45a0
// Method: SetupTimerControlTriggerPopup::onCustomToggleTriggerValue
struct cocos2d::CCObject *__fastcall SetupTimerControlTriggerPopup_onCustomToggleTriggerValue(
        cocos2d::CCDictionary **a1,
        __int64 a2)
{
  int v3; // ebx
  struct cocos2d::CCObject *v4; // rax
  __int64 v5; // rdx
  struct cocos2d::CCObject *result; // rax
  __int64 v7; // rdx

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5f45be*/
  SetupTriggerPopup_updateValue(a1, 0x1D8u, (float)v3); /*0x5f45c7*/
  v4 = cocos2d::CCDictionary::objectForKey(a1[97], 0); /*0x5f45d5*/
  if ( v4 ) /*0x5f45de*/
  {
    LOBYTE(v5) = v3 == 0; /*0x5f45e5*/
    CCMenuItemToggler_toggle((__int64)v4, v5); /*0x5f45e8*/
  }
  result = cocos2d::CCDictionary::objectForKey(a1[97], 1); /*0x5f45f9*/
  if ( result ) /*0x5f4602*/
  {
    LOBYTE(v7) = v3 == 1; /*0x5f460a*/
    return (struct cocos2d::CCObject *)CCMenuItemToggler_toggle((__int64)result, v7); /*0x5f460d*/
  }
  return result; /*0x5f4612*/
}
