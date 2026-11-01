#include <Geode/binding/SFXSettingsPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x397080
// Method: SFXSettingsPopup::~SFXSettingsPopup
__int64 __fastcall SFXSettingsPopup__dtor_SFXSettingsPopup(_QWORD *a1)
{
  cocos2d::CCObject *v2; // rcx
  cocos2d::CCObject *v3; // rcx

  *a1 = &GJOptionsLayer::`vftable'; /*0x397090*/
  a1[40] = &GJOptionsLayer::`vftable'; /*0x39709a*/
  a1[41] = &GJOptionsLayer::`vftable'; /*0x3970a8*/
  a1[42] = &GJOptionsLayer::`vftable'; /*0x3970b6*/
  a1[43] = &GJOptionsLayer::`vftable'; /*0x3970c4*/
  a1[44] = &GJOptionsLayer::`vftable'; /*0x3970d2*/
  a1[51] = &GJOptionsLayer::`vftable'; /*0x3970e0*/
  a1[54] = &GJOptionsLayer::`vftable'; /*0x3970ee*/
  a1[68] = &GJOptionsLayer::`vftable'; /*0x3970fc*/
  a1[83] = &GJOptionsLayer::`vftable'; /*0x39710a*/
  a1[84] = &GJOptionsLayer::`vftable'; /*0x397118*/
  v2 = (cocos2d::CCObject *)a1[130]; /*0x39711f*/
  if ( v2 ) /*0x397129*/
    cocos2d::CCObject::release(v2); /*0x39712b*/
  v3 = (cocos2d::CCObject *)a1[129]; /*0x397131*/
  if ( v3 ) /*0x39713b*/
    cocos2d::CCObject::release(v3); /*0x39713d*/
  sub_3DA90(a1 + 137); /*0x39714a*/
  sub_65440(a1 + 135); /*0x397156*/
  return UIPOptionsLayer__dtor_UIPOptionsLayer((cocos2d::CCNode *)a1); /*0x39715e*/
}

// [2/4] Address: 0x61a920
// Method: SFXSettingsPopup::setupOptions
__int64 __fastcall SFXSettingsPopup_setupOptions(__int64 a1)
{
  return GJOptionsLayer_addGVToggle(
           a1,
           "Search Folders",
           "0147",
           "Search also matches <cy>folder</c> names and lists every sound inside a matching folder.");
}

// [3/4] Address: 0x61a940
// Method: SFXSettingsPopup::didToggleGV
double __fastcall SFXSettingsPopup_didToggleGV(__int64 a1, __int64 a2)
{
  *(_BYTE *)(a1 + 1144) = 1; /*0x61a940*/
  return sub_3C310(a2);
}

// [4/4] Address: 0x61a950
// Method: SFXSettingsPopup::onClose
__int64 __fastcall SFXSettingsPopup_onClose(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax

  if ( *(_BYTE *)(a1 + 1144) ) /*0x61a95a*/
  {
    v2 = *(_QWORD *)(a1 + 1136); /*0x61a969*/
    if ( v2 ) /*0x61a973*/
    {
      v3 = *(_QWORD *)(v2 + 712); /*0x61a975*/
      if ( v3 ) /*0x61a97f*/
      {
        if ( *(_QWORD *)(v3 + 120) ) /*0x61a981*/
        {
          *(_DWORD *)(v3 + 96) = 0; /*0x61a98b*/
          cocos2d::CCNode::scheduleOnce(v2, sub_5AB90); /*0x61a999*/
        }
      }
    }
  }
  return SetupTriggerPopup_onClose(a1); /*0x61a9a5*/
}
