#include <Geode/binding/GJPFollowCommandLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x377830
// Method: GJPFollowCommandLayer::valueDidChange
__int64 __fastcall GJPFollowCommandLayer_valueDidChange(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 == 51 ) /*0x377833*/
    return sub_607BB0(a1); /*0x377833*/
  return result; /*0x377839*/
}
