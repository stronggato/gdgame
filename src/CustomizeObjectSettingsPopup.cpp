#include <Geode/binding/CustomizeObjectSettingsPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x142120
// Method: CustomizeObjectSettingsPopup::onCustomToggleTriggerValue
struct cocos2d::CCObject *__fastcall CustomizeObjectSettingsPopup_onCustomToggleTriggerValue(__int64 a1, __int64 a2)
{
  int v3; // ebx
  struct cocos2d::CCObject *v4; // rax
  __int64 v5; // rdx
  struct cocos2d::CCObject *v6; // rax
  __int64 v7; // rdx
  struct cocos2d::CCObject *result; // rax
  __int64 v9; // rdx

  *(_BYTE *)(a1 + 1008) = 1; /*0x14212a*/
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x142145*/
  SetupTriggerPopup_updateValue((cocos2d::CCDictionary **)a1, 0x1F1u, (float)v3); /*0x14214e*/
  v4 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 776), 0); /*0x14215c*/
  if ( v4 ) /*0x142165*/
  {
    LOBYTE(v5) = v3 == 0; /*0x14216c*/
    CCMenuItemToggler_toggle((__int64)v4, v5); /*0x14216f*/
  }
  v6 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 776), 1); /*0x142180*/
  if ( v6 ) /*0x142189*/
  {
    LOBYTE(v7) = v3 == 1; /*0x142191*/
    CCMenuItemToggler_toggle((__int64)v6, v7); /*0x142194*/
  }
  result = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 776), 2); /*0x1421a5*/
  if ( result ) /*0x1421ae*/
  {
    LOBYTE(v9) = v3 == 2; /*0x1421b6*/
    return (struct cocos2d::CCObject *)CCMenuItemToggler_toggle((__int64)result, v9); /*0x1421b9*/
  }
  return result; /*0x1421be*/
}

// [2/2] Address: 0x1421d0
// Method: CustomizeObjectSettingsPopup::onClose
void __fastcall CustomizeObjectSettingsPopup_onClose(__int64 a1)
{
  bool v2; // di
  __int64 v3; // rax
  cocos2d::CCTouchDispatcher *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  cocos2d::CCObject *v7; // rdi
  cocos2d::CCObject *v8; // rbx
  __int64 v9; // rax
  cocos2d::CCTouchDispatcher *v10; // rax
  _QWORD *v11; // rax

  v2 = *(_QWORD *)(a1 + 1000) && *(_BYTE *)(a1 + 1008); /*0x1421f8*/
  v3 = cocos2d::CCDirector::sharedDirector(a1); /*0x142200*/
  v4 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 144LL))(v3); /*0x142213*/
  cocos2d::CCTouchDispatcher::unregisterForcePrio(v4, (struct cocos2d::CCObject *)a1); /*0x14221b*/
  SetupTriggerPopup_onClose(a1); /*0x142227*/
  if ( v2 ) /*0x14222f*/
  {
    v6 = *(_QWORD *)(a1 + 1000); /*0x142235*/
    v7 = *(cocos2d::CCObject **)(v6 + 688); /*0x14223c*/
    v8 = *(cocos2d::CCObject **)(v6 + 696); /*0x142243*/
    if ( v7 ) /*0x14224d*/
      cocos2d::CCObject::retain(*(cocos2d::CCObject **)(v6 + 688)); /*0x142252*/
    if ( v8 ) /*0x14225b*/
      cocos2d::CCObject::retain(v8); /*0x142260*/
    v9 = cocos2d::CCDirector::sharedDirector(v5); /*0x142266*/
    v10 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 144LL))(v9); /*0x142272*/
    cocos2d::CCTouchDispatcher::unregisterForcePrio(v10, (struct cocos2d::CCObject *)v6); /*0x14227e*/
    CustomizeObjectLayer_onClose(v6); /*0x142289*/
    v11 = CustomizeObjectLayer_create((__int64)v7, (__int64)v8); /*0x142294*/
    (*(void (__fastcall **)(_QWORD *))(*v11 + 1064LL))(v11); /*0x14229f*/
    if ( v7 ) /*0x1422a8*/
      cocos2d::CCObject::release(v7); /*0x1422ad*/
    if ( v8 ) /*0x1422b6*/
      cocos2d::CCObject::release(v8); /*0x1422bb*/
  }
}
