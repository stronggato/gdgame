#include <Geode/binding/GJActionManager.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x301e90
// Method: GJActionManager::init
bool __fastcall GJActionManager_init(cocos2d::CCNode *a1)
{
  bool result; // al
  cocos2d::CCObject *v3; // rax

  result = cocos2d::CCNode::init(a1); /*0x301e99*/
  if ( result ) /*0x301ea1*/
  {
    v3 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x301ea9*/
    *((_QWORD *)a1 + 40) = v3; /*0x301eb2*/
    cocos2d::CCObject::retain(v3); /*0x301eb9*/
    return 1; /*0x301ebf*/
  }
  return result; /*0x301ea3*/
}
