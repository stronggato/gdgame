#include <Geode/binding/SetupStopTriggerPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x604a10
// Method: SetupStopTriggerPopup::onCustomToggleTriggerValue
struct cocos2d::CCObject *__fastcall SetupStopTriggerPopup_onCustomToggleTriggerValue(
        cocos2d::CCDictionary **a1,
        __int64 a2)
{
  int v3; // ebx
  struct cocos2d::CCObject *v4; // rax
  __int64 v5; // rdx
  struct cocos2d::CCObject *v6; // rax
  __int64 v7; // rdx
  struct cocos2d::CCObject *result; // rax
  __int64 v9; // rdx

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x604a2e*/
  SetupTriggerPopup_updateValue(a1, 0x244u, (float)v3); /*0x604a37*/
  v4 = cocos2d::CCDictionary::objectForKey(a1[97], 0); /*0x604a45*/
  if ( v4 ) /*0x604a4e*/
  {
    LOBYTE(v5) = v3 == 0; /*0x604a55*/
    CCMenuItemToggler_toggle((__int64)v4, v5); /*0x604a58*/
  }
  v6 = cocos2d::CCDictionary::objectForKey(a1[97], 1); /*0x604a69*/
  if ( v6 ) /*0x604a72*/
  {
    LOBYTE(v7) = v3 == 1; /*0x604a7a*/
    CCMenuItemToggler_toggle((__int64)v6, v7); /*0x604a7d*/
  }
  result = cocos2d::CCDictionary::objectForKey(a1[97], 2); /*0x604a8e*/
  if ( result ) /*0x604a97*/
  {
    LOBYTE(v9) = v3 == 2; /*0x604a9f*/
    return (struct cocos2d::CCObject *)CCMenuItemToggler_toggle((__int64)result, v9); /*0x604aa2*/
  }
  return result; /*0x604aa7*/
}

// [2/3] Address: 0x604ac0
// Method: SetupStopTriggerPopup::valueDidChange
void __fastcall SetupStopTriggerPopup_valueDidChange(__int64 a1, int a2, float a3)
{
  struct cocos2d::CCObject *v3; // rax
  __int64 v4; // rdx

  if ( a2 == 535 ) /*0x604ac6*/
  {
    v3 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 984), 51); /*0x604ae0*/
    if ( v3 ) /*0x604ae9*/
    {
      v4 = 1; /*0x604af3*/
      if ( a3 != 0.0 ) /*0x604af8*/
        v4 = 6; /*0x604afa*/
      sub_3C4E40(v3, v4); /*0x604b02*/
    }
  }
}

// [3/3] Address: 0x604b20
// Method: SetupStopTriggerPopup::onClose
__int64 __fastcall SetupStopTriggerPopup_onClose(__int64 a1)
{
  struct cocos2d::CCObject *v2; // rcx
  cocos2d::CCArray *v3; // rdi
  unsigned int i; // ebx
  __int64 *v5; // rax

  v2 = *(struct cocos2d::CCObject **)(a1 + 680); /*0x604b3a*/
  if ( v2 ) /*0x604b44*/
    v3 = cocos2d::CCArray::createWithObject(v2); /*0x604b4c*/
  else
    v3 = *(cocos2d::CCArray **)(a1 + 688); /*0x604b51*/
  for ( i = 0; i < cocos2d::CCArray::count(v3); ++i ) /*0x604b5d*/
  {
    v5 = (__int64 *)cocos2d::CCArray::objectAtIndex(v3, i); /*0x604b75*/
    GameLevelManager_updateLevelOrders(v5); /*0x604b7e*/
  }
  return SetupTriggerPopup_onClose(a1); /*0x604b98*/
}
