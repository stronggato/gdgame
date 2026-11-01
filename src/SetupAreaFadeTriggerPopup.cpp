#include <Geode/binding/SetupAreaFadeTriggerPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x59d6e0
// Method: SetupAreaFadeTriggerPopup::~SetupAreaFadeTriggerPopup
_QWORD *__fastcall SetupAreaFadeTriggerPopup__dtor_SetupAreaFadeTriggerPopup(_QWORD *Block, char a2)
{
  *Block = &SetupAreaFadeTriggerPopup::`vftable'; /*0x59d6f3*/
  Block[40] = &SetupAreaFadeTriggerPopup::`vftable'; /*0x59d700*/
  Block[41] = &SetupAreaFadeTriggerPopup::`vftable'; /*0x59d70e*/
  Block[42] = &SetupAreaFadeTriggerPopup::`vftable'; /*0x59d71c*/
  Block[43] = &SetupAreaFadeTriggerPopup::`vftable'; /*0x59d72a*/
  Block[44] = &SetupAreaFadeTriggerPopup::`vftable'; /*0x59d738*/
  Block[51] = &SetupAreaFadeTriggerPopup::`vftable'; /*0x59d746*/
  Block[54] = &SetupAreaFadeTriggerPopup::`vftable'; /*0x59d754*/
  Block[68] = &SetupAreaFadeTriggerPopup::`vftable'; /*0x59d762*/
  Block[83] = &SetupAreaFadeTriggerPopup::`vftable'; /*0x59d770*/
  Block[84] = &SetupAreaFadeTriggerPopup::`vftable'; /*0x59d77e*/
  SetupAreaMoveTriggerPopup__dtor_SetupAreaMoveTriggerPopup(); /*0x59d785*/
  if ( (a2 & 1) != 0 ) /*0x59d78d*/
    j_j_free(Block); /*0x59d797*/
  return Block; /*0x59d79c*/
}
