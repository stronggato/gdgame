#include <Geode/binding/SetupZoomTriggerPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x3968c0
// Method: SetupZoomTriggerPopup::determineStartValues
// attributes: thunk
void __fastcall SetupZoomTriggerPopup_determineStartValues(__int64 a1)
{
  SetupTriggerPopup_determineStartValues(a1); /*0x3968c0*/
}

// [2/3] Address: 0x3968d0
// Method: SetupZoomTriggerPopup::onClose
// attributes: thunk
__int64 __fastcall SetupZoomTriggerPopup_onClose(__int64 a1)
{
  return SetupTriggerPopup_onClose(a1);
}

// [3/3] Address: 0x610ea0
// Method: SetupZoomTriggerPopup::~SetupZoomTriggerPopup
cocos2d::CCNode *__fastcall SetupZoomTriggerPopup__dtor_SetupZoomTriggerPopup(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &SetupZoomTriggerPopup::`vftable'; /*0x610eb3*/
  *((_QWORD *)Block + 40) = &SetupZoomTriggerPopup::`vftable'; /*0x610ec0*/
  *((_QWORD *)Block + 41) = &SetupZoomTriggerPopup::`vftable'; /*0x610ece*/
  *((_QWORD *)Block + 42) = &SetupZoomTriggerPopup::`vftable'; /*0x610edc*/
  *((_QWORD *)Block + 43) = &SetupZoomTriggerPopup::`vftable'; /*0x610eea*/
  *((_QWORD *)Block + 44) = &SetupZoomTriggerPopup::`vftable'; /*0x610ef8*/
  *((_QWORD *)Block + 51) = &SetupZoomTriggerPopup::`vftable'; /*0x610f06*/
  *((_QWORD *)Block + 54) = &SetupZoomTriggerPopup::`vftable'; /*0x610f14*/
  *((_QWORD *)Block + 68) = &SetupZoomTriggerPopup::`vftable'; /*0x610f22*/
  *((_QWORD *)Block + 83) = &SetupZoomTriggerPopup::`vftable'; /*0x610f30*/
  *((_QWORD *)Block + 84) = &SetupZoomTriggerPopup::`vftable'; /*0x610f3e*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x610f45*/
  if ( (a2 & 1) != 0 ) /*0x610f4d*/
    j_j_free(Block); /*0x610f57*/
  return Block; /*0x610f5c*/
}
