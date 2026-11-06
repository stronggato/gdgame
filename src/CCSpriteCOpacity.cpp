#include <new>
#include <Geode/Bindings.hpp>
#include <Geode/binding/CCSpriteCOpacity.hpp>
#include <cocos2d.h>


inline __m128i Size = {0};

using namespace cocos2d;

// [1/1] Address: 0x4b4e0
// Method: CCSpriteCOpacity::setOpacity
void CCSpriteCOpacity::setOpacity(unsigned char opacity)
{
  cocos2d::CCSprite* a1 = (cocos2d::CCSprite*)this;
  unsigned __int8 a2 = to_gd_val<unsigned __int8>(opacity);
  uint64_t a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  (((cocos2d::CCSprite*)(a1))->setOpacity((cocos2d::GLubyte)(a2))); /*0x4b4f0*/
  { (*(__int64 (__fastcall **)(__int64, _QWORD))(*((_QWORD *)((uintptr_t)a1 - 40)) + 952LL))((__int64)((uintptr_t)a1 - 320), a2); return; }
}
