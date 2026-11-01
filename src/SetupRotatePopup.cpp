#include <Geode/binding/SetupRotatePopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/3] Address: 0x5d3370
// Method: SetupRotatePopup::onClose
__int64 __fastcall SetupRotatePopup_onClose(__int64 a1)
{
  struct cocos2d::CCObject *v2; // rcx
  struct cocos2d::CCArray *v3; // rax
  unsigned int *v4; // rbx
  __int64 v5; // rax
  float **v6; // rbx
  float **i; // rdi

  v2 = *(struct cocos2d::CCObject **)(a1 + 680); /*0x5d3380*/
  if ( v2 ) /*0x5d338a*/
    v3 = cocos2d::CCArray::createWithObject(v2); /*0x5d338c*/
  else
    v3 = *(struct cocos2d::CCArray **)(a1 + 688); /*0x5d3394*/
  if ( v3 ) /*0x5d339e*/
  {
    v4 = (unsigned int *)*((_QWORD *)v3 + 7); /*0x5d33a5*/
    v5 = *v4; /*0x5d33a9*/
    if ( (_DWORD)v5 ) /*0x5d33ad*/
    {
      v6 = (float **)*((_QWORD *)v4 + 2); /*0x5d33af*/
      for ( i = &v6[v5 - 1]; v6 <= i; ++v6 ) /*0x5d33c3*/
      {
        if ( !*v6 ) /*0x5d33c5*/
          break; /*0x5d33cb*/
        EnhancedGameObject_createRotateAction(*v6, (*v6)[353], 0); /*0x5d33d8*/
      }
    }
  }
  return SetupTriggerPopup_onClose(a1); /*0x5d33f6*/
}

// [3/3] Address: 0x5d3410
// Method: SetupRotatePopup::onCustomToggleTriggerValue
struct cocos2d::CCObject *__fastcall SetupRotatePopup_onCustomToggleTriggerValue(
        cocos2d::CCDictionary **a1,
        __int64 a2)
{
  int v3; // edi
  __int64 v4; // r8
  struct cocos2d::CCObject *v5; // rax
  __int64 v6; // rdx
  struct cocos2d::CCObject *v7; // rax
  struct cocos2d::CCObject *result; // rax
  __int64 v9; // rdx

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5d3437*/
  if ( cocos2d::CCDictionary::objectForKey(a1[94], 97) ) /*0x5d3439*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*a1 + 144))(a1, 97, 0); /*0x5d3459*/
  else
    sub_60A5A0(a1, 97); /*0x5d3464*/
  sub_60ABF0(a1, 97); /*0x5d3474*/
  if ( v3 ) /*0x5d347d*/
  {
    if ( v3 == 1 ) /*0x5d3482*/
    {
      if ( cocos2d::CCDictionary::objectForKey(a1[94], 98) ) /*0x5d34c6*/
      {
        LOBYTE(v4) = 1; /*0x5d34dc*/
        (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, __int64))*a1 + 144))(a1, 98, v4); /*0x5d34df*/
        goto LABEL_12; /*0x5d34ed*/
      }
LABEL_11:
      sub_60A5A0(a1, 98); /*0x5d3506*/
      goto LABEL_12; /*0x5d3509*/
    }
    if ( v3 != 2 ) /*0x5d3487*/
      goto LABEL_13; /*0x5d3487*/
  }
  if ( !cocos2d::CCDictionary::objectForKey(a1[94], 98) ) /*0x5d34aa*/
    goto LABEL_11; /*0x5d34aa*/
  (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*a1 + 144))(a1, 98, 0); /*0x5d34b2*/
LABEL_12:
  sub_60ABF0(a1, 98); /*0x5d3511*/
LABEL_13:
  (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, bool))*a1 + 136))(a1, 2, v3 == 2); /*0x5d351e*/
  v5 = cocos2d::CCDictionary::objectForKey(a1[97], 0); /*0x5d3543*/
  if ( v5 ) /*0x5d354c*/
  {
    LOBYTE(v6) = v3 == 0; /*0x5d3553*/
    CCMenuItemToggler_toggle((__int64)v5, v6); /*0x5d3556*/
  }
  v7 = cocos2d::CCDictionary::objectForKey(a1[97], 2); /*0x5d3567*/
  if ( v7 ) /*0x5d3570*/
    CCMenuItemToggler_toggle((__int64)v7, v3 == 2); /*0x5d3579*/
  result = cocos2d::CCDictionary::objectForKey(a1[97], 1); /*0x5d358a*/
  if ( result ) /*0x5d3593*/
  {
    LOBYTE(v9) = v3 == 1; /*0x5d359b*/
    return (struct cocos2d::CCObject *)CCMenuItemToggler_toggle((__int64)result, v9); /*0x5d359e*/
  }
  return result; /*0x5d35a3*/
}
