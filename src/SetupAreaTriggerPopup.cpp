#include <Geode/binding/SetupAreaTriggerPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x59d8c0
// Method: SetupAreaTriggerPopup::~SetupAreaTriggerPopup
_QWORD *__fastcall SetupAreaTriggerPopup__dtor_SetupAreaTriggerPopup(_QWORD *Block, char a2)
{
  *Block = &SetupAreaTriggerPopup::`vftable'; /*0x59d8d3*/
  Block[40] = &SetupAreaTriggerPopup::`vftable'; /*0x59d8e0*/
  Block[41] = &SetupAreaTriggerPopup::`vftable'; /*0x59d8ee*/
  Block[42] = &SetupAreaTriggerPopup::`vftable'; /*0x59d8fc*/
  Block[43] = &SetupAreaTriggerPopup::`vftable'; /*0x59d90a*/
  Block[44] = &SetupAreaTriggerPopup::`vftable'; /*0x59d918*/
  Block[51] = &SetupAreaTriggerPopup::`vftable'; /*0x59d926*/
  Block[54] = &SetupAreaTriggerPopup::`vftable'; /*0x59d934*/
  Block[68] = &SetupAreaTriggerPopup::`vftable'; /*0x59d942*/
  Block[83] = &SetupAreaTriggerPopup::`vftable'; /*0x59d950*/
  Block[84] = &SetupAreaTriggerPopup::`vftable'; /*0x59d95e*/
  SetupAreaMoveTriggerPopup__dtor_SetupAreaMoveTriggerPopup(); /*0x59d965*/
  if ( (a2 & 1) != 0 ) /*0x59d96d*/
    j_j_free(Block); /*0x59d977*/
  return Block; /*0x59d97c*/
}
