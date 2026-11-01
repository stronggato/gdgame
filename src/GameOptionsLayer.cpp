#include <Geode/binding/GameOptionsLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x99cf0
// Method: GameOptionsLayer::onUIPOptions
// Hidden C++ exception states: #wind=2
cocos2d::CCObject *GameOptionsLayer_onUIPOptions()
{
  cocos2d::CCObject *v0; // rbx
  __int64 (__fastcall *v1)(cocos2d::CCObject *); // rdx
  char v2; // al

  v0 = (cocos2d::CCObject *)operator new(0x420u); /*0x99d00*/
  SetupTriggerPopup_SetupTriggerPopup((__int64)v0); /*0x99d0b*/
  *(_QWORD *)v0 = &AutoSaveSettingsLayer::`vftable'; /*0x99d18*/
  *((_QWORD *)v0 + 40) = &AutoSaveSettingsLayer::`vftable'; /*0x99d22*/
  *((_QWORD *)v0 + 41) = &AutoSaveSettingsLayer::`vftable'; /*0x99d30*/
  *((_QWORD *)v0 + 42) = &AutoSaveSettingsLayer::`vftable'; /*0x99d3e*/
  *((_QWORD *)v0 + 43) = &AutoSaveSettingsLayer::`vftable'; /*0x99d4c*/
  *((_QWORD *)v0 + 44) = &AutoSaveSettingsLayer::`vftable'; /*0x99d5a*/
  *((_QWORD *)v0 + 51) = &AutoSaveSettingsLayer::`vftable'; /*0x99d68*/
  *((_QWORD *)v0 + 54) = &AutoSaveSettingsLayer::`vftable'; /*0x99d76*/
  *((_QWORD *)v0 + 68) = &AutoSaveSettingsLayer::`vftable'; /*0x99d84*/
  *((_QWORD *)v0 + 83) = &AutoSaveSettingsLayer::`vftable'; /*0x99d92*/
  *((_QWORD *)v0 + 84) = &AutoSaveSettingsLayer::`vftable'; /*0x99da0*/
  *((_QWORD *)v0 + 125) = 0; /*0x99da9*/
  *((_QWORD *)v0 + 126) = 0; /*0x99db0*/
  *(_OWORD *)((char *)v0 + 1016) = 0; /*0x99dba*/
  *((_QWORD *)v0 + 129) = 0; /*0x99dc1*/
  *((_QWORD *)v0 + 130) = 15; /*0x99dc8*/
  *((_BYTE *)v0 + 1016) = 0; /*0x99dd3*/
  *((_QWORD *)v0 + 131) = 0; /*0x99dd9*/
  v1 = *(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v0 + 72LL); /*0x99de3*/
  if ( (char *)v1 == (char *)SetupMGTrigger_init ) /*0x99df4*/
    v2 = SetupMGTrigger_init(v0); /*0x99df6*/
  else
    v2 = v1(v0); /*0x99dfd*/
  if ( v2 ) /*0x99e04*/
  {
    cocos2d::CCObject::autorelease(v0); /*0x99e06*/
    return v0; /*0x99e0c*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v0 + 8LL))(v0, 1); /*0x99e1d*/
    return 0; /*0x99e20*/
  }
}
