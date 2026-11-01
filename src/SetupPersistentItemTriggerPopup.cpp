#include <Geode/binding/SetupPersistentItemTriggerPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/2] Address: 0x601b30
// Method: SetupPersistentItemTriggerPopup::valueDidChange
void __fastcall SetupPersistentItemTriggerPopup_valueDidChange(__int64 a1, int a2, float a3)
{
  struct cocos2d::CCObject *v3; // rax
  __int64 v4; // rdx

  if ( a2 == 494 ) /*0x601b36*/
  {
    v3 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 984), 80); /*0x601b50*/
    if ( v3 ) /*0x601b59*/
    {
      v4 = 2; /*0x601b63*/
      if ( a3 != 0.0 ) /*0x601b68*/
        v4 = 4; /*0x601b6a*/
      sub_3C4E40(v3, v4); /*0x601b72*/
    }
  }
}
