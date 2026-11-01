#include <Geode/binding/SetupAreaRotateTriggerPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x59d610
// Method: SetupAreaRotateTriggerPopup::~SetupAreaRotateTriggerPopup
_QWORD *__fastcall SetupAreaRotateTriggerPopup__dtor_SetupAreaRotateTriggerPopup(_QWORD *Block, char a2)
{
  *Block = &SetupAreaRotateTriggerPopup::`vftable'; /*0x59d623*/
  Block[40] = &SetupAreaRotateTriggerPopup::`vftable'; /*0x59d630*/
  Block[41] = &SetupAreaRotateTriggerPopup::`vftable'; /*0x59d63e*/
  Block[42] = &SetupAreaRotateTriggerPopup::`vftable'; /*0x59d64c*/
  Block[43] = &SetupAreaRotateTriggerPopup::`vftable'; /*0x59d65a*/
  Block[44] = &SetupAreaRotateTriggerPopup::`vftable'; /*0x59d668*/
  Block[51] = &SetupAreaRotateTriggerPopup::`vftable'; /*0x59d676*/
  Block[54] = &SetupAreaRotateTriggerPopup::`vftable'; /*0x59d684*/
  Block[68] = &SetupAreaRotateTriggerPopup::`vftable'; /*0x59d692*/
  Block[83] = &SetupAreaRotateTriggerPopup::`vftable'; /*0x59d6a0*/
  Block[84] = &SetupAreaRotateTriggerPopup::`vftable'; /*0x59d6ae*/
  SetupAreaMoveTriggerPopup__dtor_SetupAreaMoveTriggerPopup(); /*0x59d6b5*/
  if ( (a2 & 1) != 0 ) /*0x59d6bd*/
    j_j_free(Block); /*0x59d6c7*/
  return Block; /*0x59d6cc*/
}
