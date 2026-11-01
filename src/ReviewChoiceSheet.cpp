#include <Geode/binding/ReviewChoiceSheet.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0xacf20
// Method: ReviewChoiceSheet::onClose
__int64 __fastcall ReviewChoiceSheet_onClose(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 1016); /*0xacf2a*/
  if ( v1 ) /*0xacf3a*/
  {
    *(_QWORD *)(v1 + 608) = 0; /*0xacf3c*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1016) + 1032LL))(*(_QWORD *)(a1 + 1016), 0); /*0xacf53*/
  }
  return SetupTriggerPopup_onClose(a1); /*0xacf5f*/
}
