#include <Geode/binding/GJGradientLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x34f640
// Method: GJGradientLayer::init
bool __fastcall GJGradientLayer_init(cocos2d::CCLayerGradient *a1)
{
  bool result; // al
  __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // [rsp+38h] [rbp+10h] BYREF
  int v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = -16777216; /*0x34f64b*/
  v6 = -1; /*0x34f658*/
  result = cocos2d::CCLayerGradient::initWithColor( /*0x34f663*/
             a1,
             (const struct cocos2d::_ccColor4B *)&v6,
             (const struct cocos2d::_ccColor4B *)&v5);
  if ( result ) /*0x34f66b*/
  {
    v3 = *(_QWORD *)a1; /*0x34f67d*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v5, 0.0, 0.0); /*0x34f686*/
    (*(void (__fastcall **)(cocos2d::CCLayerGradient *, __int64))(v3 + 288))(a1, v4); /*0x34f692*/
    return 1; /*0x34f69d*/
  }
  return result; /*0x34f66d*/
}
