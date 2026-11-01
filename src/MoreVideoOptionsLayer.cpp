#include <Geode/binding/MoreVideoOptionsLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/4] Address: 0xcabf0
// Method: MoreVideoOptionsLayer::onClose
__int64 __fastcall MoreVideoOptionsLayer_onClose(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx

  v2 = a1[116]; /*0xcabf9*/
  if ( v2 ) /*0xcac03*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 1032LL))(v2, 0); /*0xcac0a*/
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 992LL))(a1, 0); /*0xcac18*/
  LOBYTE(v3) = 1; /*0xcac21*/
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 520LL))(a1, v3);
}

// [4/4] Address: 0x4cd1b0
// Method: MoreVideoOptionsLayer::keyBackClicked
__int64 __fastcall MoreVideoOptionsLayer_keyBackClicked(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdx

  v1 = a1 - 336; /*0x4cd1b6*/
  v2 = *(_QWORD *)(a1 + 376); /*0x4cd1bd*/
  if ( v2 ) /*0x4cd1c7*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 1032LL))(v2, 0); /*0x4cd1ce*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1 + 992LL))(v1, 0); /*0x4cd1dc*/
  LOBYTE(v3) = 1; /*0x4cd1e5*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 520LL))(v1, v3);
}
