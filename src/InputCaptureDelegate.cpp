#include <Geode/binding/InputCaptureDelegate.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x449150
// Method: InputCaptureDelegate::~InputCaptureDelegate
_QWORD *__fastcall InputCaptureDelegate__dtor_InputCaptureDelegate(_QWORD *a1, char a2)
{
  *a1 = &InputCaptureDelegate::`vftable'; /*0x449160*/
  if ( (a2 & 1) != 0 ) /*0x449166*/
    j_j_free(a1); /*0x44916d*/
  return a1; /*0x449175*/
}
