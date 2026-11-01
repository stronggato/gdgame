#include <Geode/binding/UIObjectSettingsPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x5fbb40
// Method: UIObjectSettingsPopup::onCustomToggleTriggerValue
struct cocos2d::CCObject *__fastcall UIObjectSettingsPopup_onCustomToggleTriggerValue(
        cocos2d::CCDictionary **a1,
        __int64 a2)
{
  int v3; // ebx
  float v4; // xmm2_4
  struct cocos2d::CCObject *v5; // rax
  __int64 v6; // rdx
  struct cocos2d::CCObject *v7; // rax
  __int64 v8; // rdx
  struct cocos2d::CCObject *v9; // rax
  __int64 v10; // rdx
  struct cocos2d::CCObject *result; // rax
  __int64 v12; // rdx
  bool v13; // zf
  struct cocos2d::CCObject *v14; // rax
  __int64 v15; // rdx
  struct cocos2d::CCObject *v16; // rax
  __int64 v17; // rdx
  struct cocos2d::CCObject *v18; // rax
  __int64 v19; // rdx

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5fbb56*/
  v4 = (float)v3; /*0x5fbb5f*/
  if ( v3 > 4 ) /*0x5fbb65*/
  {
    SetupTriggerPopup_updateValue(a1, 0x182u, v4); /*0x5fbc0c*/
    v14 = cocos2d::CCDictionary::objectForKey(a1[97], 5); /*0x5fbc1d*/
    if ( v14 ) /*0x5fbc26*/
    {
      LOBYTE(v15) = v3 == 5; /*0x5fbc2e*/
      CCMenuItemToggler_toggle((__int64)v14, v15); /*0x5fbc31*/
    }
    v16 = cocos2d::CCDictionary::objectForKey(a1[97], 6); /*0x5fbc42*/
    if ( v16 ) /*0x5fbc4b*/
    {
      LOBYTE(v17) = v3 == 6; /*0x5fbc53*/
      CCMenuItemToggler_toggle((__int64)v16, v17); /*0x5fbc56*/
    }
    v18 = cocos2d::CCDictionary::objectForKey(a1[97], 7); /*0x5fbc67*/
    if ( v18 ) /*0x5fbc70*/
    {
      LOBYTE(v19) = v3 == 7; /*0x5fbc78*/
      CCMenuItemToggler_toggle((__int64)v18, v19); /*0x5fbc7b*/
    }
    result = cocos2d::CCDictionary::objectForKey(a1[97], 8); /*0x5fbc8c*/
    if ( result ) /*0x5fbc95*/
    {
      v13 = v3 == 8; /*0x5fbc97*/
      goto LABEL_18; /*0x5fbc97*/
    }
  }
  else
  {
    SetupTriggerPopup_updateValue(a1, 0x181u, v4); /*0x5fbb70*/
    v5 = cocos2d::CCDictionary::objectForKey(a1[97], 1); /*0x5fbb81*/
    if ( v5 ) /*0x5fbb8a*/
    {
      LOBYTE(v6) = v3 == 1; /*0x5fbb92*/
      CCMenuItemToggler_toggle((__int64)v5, v6); /*0x5fbb95*/
    }
    v7 = cocos2d::CCDictionary::objectForKey(a1[97], 2); /*0x5fbba6*/
    if ( v7 ) /*0x5fbbaf*/
    {
      LOBYTE(v8) = v3 == 2; /*0x5fbbb7*/
      CCMenuItemToggler_toggle((__int64)v7, v8); /*0x5fbbba*/
    }
    v9 = cocos2d::CCDictionary::objectForKey(a1[97], 3); /*0x5fbbcb*/
    if ( v9 ) /*0x5fbbd4*/
    {
      LOBYTE(v10) = v3 == 3; /*0x5fbbdc*/
      CCMenuItemToggler_toggle((__int64)v9, v10); /*0x5fbbdf*/
    }
    result = cocos2d::CCDictionary::objectForKey(a1[97], 4); /*0x5fbbf0*/
    if ( result ) /*0x5fbbf9*/
    {
      v13 = v3 == 4; /*0x5fbbff*/
LABEL_18:
      LOBYTE(v12) = v13; /*0x5fbc9a*/
      return (struct cocos2d::CCObject *)CCMenuItemToggler_toggle((__int64)result, v12); /*0x5fbca0*/
    }
  }
  return result; /*0x5fbca5*/
}
