#include <Geode/binding/SelectSFXSortLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/2] Address: 0x61c460
// Method: SelectSFXSortLayer::onSelect
__int64 __fastcall SelectSFXSortLayer_onSelect(__int64 a1, __int64 a2)
{
  int v3; // eax
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  __int64 v5; // rdx

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x61c46f*/
  v4 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 672); /*0x61c472*/
  *(_DWORD *)(a1 + 664) = v3; /*0x61c479*/
  if ( v4 ) /*0x61c482*/
    (**v4)(v4, a1); /*0x61c48a*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x61c494*/
  LOBYTE(v5) = 1; /*0x61c49d*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 520LL))(a1, v5);
}
