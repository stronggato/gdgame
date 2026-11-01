#include <Geode/binding/SetupForceBlockPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x603340
// Method: SetupForceBlockPopup::valueDidChange
__int64 __fastcall SetupForceBlockPopup_valueDidChange(__int64 a1, int a2, __int64 a3)
{
  float v3; // xmm2_4
  __int64 v5; // r8
  __int64 result; // rax

  if ( a2 == 529 ) /*0x603346*/
  {
    if ( v3 == 0.0 ) /*0x603365*/
      a3 = 0; /*0x603367*/
    else
      LOBYTE(a3) = 1; /*0x60336c*/
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 1088LL))(a1, 529, a3); /*0x603377*/
    LOBYTE(v5) = v3 == 0.0; /*0x603387*/
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 1088LL))(a1, 149, v5); /*0x60339c*/
  }
  return result; /*0x6033ac*/
}
