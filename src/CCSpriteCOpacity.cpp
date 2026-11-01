#include <Geode/binding/CCSpriteCOpacity.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x4b4e0
// Method: CCSpriteCOpacity::setOpacity
__int64 __fastcall CCSpriteCOpacity_setOpacity(cocos2d::CCSprite *a1, unsigned __int8 a2)
{
  cocos2d::CCSprite::setOpacity(a1, a2); /*0x4b4f0*/
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*((_QWORD *)a1 - 40) + 952LL))((__int64)a1 - 320, a2);
}
