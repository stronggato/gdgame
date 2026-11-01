#include <Geode/binding/SetupSFXEditPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x5d55f0
// Method: SetupSFXEditPopup::~SetupSFXEditPopup
cocos2d::CCNode *__fastcall SetupSFXEditPopup__dtor_SetupSFXEditPopup(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &SetupSFXEditPopup::`vftable'; /*0x5d5603*/
  *((_QWORD *)Block + 40) = &SetupSFXEditPopup::`vftable'; /*0x5d5610*/
  *((_QWORD *)Block + 41) = &SetupSFXEditPopup::`vftable'; /*0x5d561e*/
  *((_QWORD *)Block + 42) = &SetupSFXEditPopup::`vftable'; /*0x5d562c*/
  *((_QWORD *)Block + 43) = &SetupSFXEditPopup::`vftable'; /*0x5d563a*/
  *((_QWORD *)Block + 44) = &SetupSFXEditPopup::`vftable'; /*0x5d5648*/
  *((_QWORD *)Block + 51) = &SetupSFXEditPopup::`vftable'; /*0x5d5656*/
  *((_QWORD *)Block + 54) = &SetupSFXEditPopup::`vftable'; /*0x5d5664*/
  *((_QWORD *)Block + 68) = &SetupSFXEditPopup::`vftable'; /*0x5d5672*/
  *((_QWORD *)Block + 83) = &SetupSFXEditPopup::`vftable'; /*0x5d5680*/
  *((_QWORD *)Block + 84) = &SetupSFXEditPopup::`vftable'; /*0x5d568e*/
  SetupAudioTriggerPopup__dtor_SetupAudioTriggerPopup(Block); /*0x5d5695*/
  if ( (a2 & 1) != 0 ) /*0x5d569d*/
    j_j_free(Block); /*0x5d56a7*/
  return Block; /*0x5d56ac*/
}
