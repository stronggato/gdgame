#include <Geode/binding/SetupAudioTriggerPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x5d56c0
// Method: SetupAudioTriggerPopup::~SetupAudioTriggerPopup
__int64 __fastcall SetupAudioTriggerPopup__dtor_SetupAudioTriggerPopup(cocos2d::CCNode *a1)
{
  cocos2d::CCObject *v2; // rcx

  *(_QWORD *)a1 = &SetupAudioTriggerPopup::`vftable'; /*0x5d56d0*/
  *((_QWORD *)a1 + 40) = &SetupAudioTriggerPopup::`vftable'; /*0x5d56da*/
  *((_QWORD *)a1 + 41) = &SetupAudioTriggerPopup::`vftable'; /*0x5d56e8*/
  *((_QWORD *)a1 + 42) = &SetupAudioTriggerPopup::`vftable'; /*0x5d56f6*/
  *((_QWORD *)a1 + 43) = &SetupAudioTriggerPopup::`vftable'; /*0x5d5704*/
  *((_QWORD *)a1 + 44) = &SetupAudioTriggerPopup::`vftable'; /*0x5d5712*/
  *((_QWORD *)a1 + 51) = &SetupAudioTriggerPopup::`vftable'; /*0x5d5720*/
  *((_QWORD *)a1 + 54) = &SetupAudioTriggerPopup::`vftable'; /*0x5d572e*/
  *((_QWORD *)a1 + 68) = &SetupAudioTriggerPopup::`vftable'; /*0x5d573c*/
  *((_QWORD *)a1 + 83) = &SetupAudioTriggerPopup::`vftable'; /*0x5d574a*/
  *((_QWORD *)a1 + 84) = &SetupAudioTriggerPopup::`vftable'; /*0x5d5758*/
  v2 = (cocos2d::CCObject *)*((_QWORD *)a1 + 125); /*0x5d575f*/
  if ( v2 ) /*0x5d5769*/
    cocos2d::CCObject::release(v2); /*0x5d576b*/
  return UIPOptionsLayer__dtor_UIPOptionsLayer(a1); /*0x5d5774*/
}

// [3/5] Address: 0x5d6bd0
// Method: SetupAudioTriggerPopup::onProxMode
unsigned int __fastcall SetupAudioTriggerPopup_onProxMode(cocos2d::CCDictionary **a1, __int64 a2)
{
  int v3; // r14d
  unsigned int v4; // esi
  unsigned int result; // eax
  struct cocos2d::CCObject *v6; // rbx
  __int64 v7; // rdi
  int v8; // eax
  const char *v9; // rdx

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5d6bed*/
  SetupTriggerPopup_updateValue(a1, 0x1CAu, (float)v3); /*0x5d6bf7*/
  v4 = 0; /*0x5d6c03*/
  result = cocos2d::CCArray::count(a1[125]); /*0x5d6c05*/
  if ( result ) /*0x5d6c0d*/
  {
    do /*0x5d6c87*/
    {
      v6 = cocos2d::CCArray::objectAtIndex(a1[125], v4); /*0x5d6c3f*/
      v7 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v6 + 952LL))(v6); /*0x5d6c54*/
      v8 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v6 + 56LL))(v6); /*0x5d6c5e*/
      v9 = "GJ_button_04.png"; /*0x5d6c63*/
      if ( v8 == v3 ) /*0x5d6c6d*/
        v9 = "GJ_button_02.png"; /*0x5d6c6d*/
      sub_41FC0(v7, v9); /*0x5d6c71*/
      ++v4; /*0x5d6c7d*/
      result = cocos2d::CCArray::count(a1[125]); /*0x5d6c7f*/
    }
    while ( v4 < result ); /*0x5d6c87*/
  }
  return result; /*0x5d6c98*/
}

// [4/5] Address: 0x5d6cb0
// Method: SetupAudioTriggerPopup::updateSpecialGroup
__int64 __fastcall SetupAudioTriggerPopup_updateSpecialGroup(__int64 a1)
{
  __int64 v2; // r8

  LOBYTE(v2) = (*(float (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 1168LL))(a1, 138) == 0.0 /*0x5d6d06*/
            && (*(float (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 1168LL))(a1, 200) == 0.0
            && (*(float (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 1168LL))(a1, 428) == 0.0;
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 1088LL))(a1, 9, v2);
}

// [5/5] Address: 0x5d6d30
// Method: SetupAudioTriggerPopup::valueDidChange
void __fastcall SetupAudioTriggerPopup_valueDidChange(cocos2d::CCDictionary **a1, int a2, __int64 a3)
{
  float v3; // xmm2_4

  if ( a2 != 138 && a2 != 200 ) /*0x5d6d5e*/
  {
    if ( a2 != 428 ) /*0x5d6d6a*/
      return; /*0x5d6d6a*/
    if ( v3 == 0.0 ) /*0x5d6d78*/
      a3 = 0; /*0x5d6d7a*/
    else
      LOBYTE(a3) = 1; /*0x5d6d7f*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, __int64))*a1 + 136))(a1, 428, a3); /*0x5d6d8a*/
    if ( v3 != 0.0 ) /*0x5d6d95*/
    {
      if ( cocos2d::CCDictionary::objectForKey(a1[94], 138) ) /*0x5d6da7*/
        (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*a1 + 144))(a1, 138, 0); /*0x5d6dc0*/
      else
        sub_60A5A0(a1, 138); /*0x5d6dcb*/
      sub_60ABF0(a1, 138); /*0x5d6ddb*/
      if ( cocos2d::CCDictionary::objectForKey(a1[94], 200) ) /*0x5d6dec*/
        (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*a1 + 144))(a1, 200, 0); /*0x5d6e05*/
      else
        sub_60A5A0(a1, 200); /*0x5d6e10*/
      sub_60ABF0(a1, 200); /*0x5d6e20*/
    }
    goto LABEL_23; /*0x5d6e25*/
  }
  if ( v3 != 0.0 ) /*0x5d6e2f*/
  {
    if ( cocos2d::CCDictionary::objectForKey(a1[94], 428) ) /*0x5d6e3d*/
      (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*a1 + 144))(a1, 428, 0); /*0x5d6e56*/
    else
      sub_60A5A0(a1, 428); /*0x5d6e61*/
    sub_60ABF0(a1, 428); /*0x5d6e71*/
  }
  if ( a2 == 138 || a2 == 200 || a2 == 428 ) /*0x5d6e8c*/
LABEL_23:
    SetupAudioTriggerPopup_updateSpecialGroup((__int64)a1); /*0x5d6e8e*/
}
