#include <Geode/binding/SetupProgressPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x605760
// Method: SetupProgressPopup::valueDidChange
__int64 __fastcall SetupProgressPopup_valueDidChange(__int64 a1, int a2, __int64 a3)
{
  float v3; // xmm2_4
  __int64 v5; // r8
  __int64 result; // rax

  if ( a2 == 605 ) /*0x605766*/
  {
    if ( v3 == 0.0 ) /*0x605785*/
      a3 = 0; /*0x605787*/
    else
      LOBYTE(a3) = 1; /*0x60578c*/
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 1088LL))(a1, 605, a3); /*0x605797*/
    if ( v3 == 0.0 ) /*0x6057a7*/
      LOBYTE(v5) = 1; /*0x6057a9*/
    else
      v5 = 0; /*0x6057ae*/
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 1088LL))(a1, 602, v5); /*0x6057bc*/
  }
  return result; /*0x6057cc*/
}
