#include <Geode/binding/SetupAnimSettingsPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/2] Address: 0x59d3b0
// Method: SetupAnimSettingsPopup::onClose
__int64 __fastcall SetupAnimSettingsPopup_onClose(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int i; // ebx
  struct cocos2d::CCObject *v4; // rax

  v2 = *(_QWORD *)(a1 + 680); /*0x59d3c0*/
  if ( v2 ) /*0x59d3ca*/
  {
    EnhancedGameObject_setupAnimationVariables(v2); /*0x59d3cc*/
  }
  else
  {
    for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 688)); ++i ) /*0x59d3e1*/
    {
      v4 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 688), i); /*0x59d3f9*/
      EnhancedGameObject_setupAnimationVariables((__int64)v4); /*0x59d402*/
    }
  }
  return SetupTriggerPopup_onClose(a1); /*0x59d425*/
}
