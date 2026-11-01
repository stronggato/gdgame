#include <Geode/binding/SetupAreaTransformTriggerPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x59d540
// Method: SetupAreaTransformTriggerPopup::~SetupAreaTransformTriggerPopup
_QWORD *__fastcall SetupAreaTransformTriggerPopup__dtor_SetupAreaTransformTriggerPopup(_QWORD *Block, char a2)
{
  *Block = &SetupAreaTransformTriggerPopup::`vftable'; /*0x59d553*/
  Block[40] = &SetupAreaTransformTriggerPopup::`vftable'; /*0x59d560*/
  Block[41] = &SetupAreaTransformTriggerPopup::`vftable'; /*0x59d56e*/
  Block[42] = &SetupAreaTransformTriggerPopup::`vftable'; /*0x59d57c*/
  Block[43] = &SetupAreaTransformTriggerPopup::`vftable'; /*0x59d58a*/
  Block[44] = &SetupAreaTransformTriggerPopup::`vftable'; /*0x59d598*/
  Block[51] = &SetupAreaTransformTriggerPopup::`vftable'; /*0x59d5a6*/
  Block[54] = &SetupAreaTransformTriggerPopup::`vftable'; /*0x59d5b4*/
  Block[68] = &SetupAreaTransformTriggerPopup::`vftable'; /*0x59d5c2*/
  Block[83] = &SetupAreaTransformTriggerPopup::`vftable'; /*0x59d5d0*/
  Block[84] = &SetupAreaTransformTriggerPopup::`vftable'; /*0x59d5de*/
  SetupAreaMoveTriggerPopup__dtor_SetupAreaMoveTriggerPopup(); /*0x59d5e5*/
  if ( (a2 & 1) != 0 ) /*0x59d5ed*/
    j_j_free(Block); /*0x59d5f7*/
  return Block; /*0x59d5fc*/
}
