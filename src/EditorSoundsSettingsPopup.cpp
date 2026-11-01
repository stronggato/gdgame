#include <Geode/binding/EditorSoundsSettingsPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x3d1670
// Method: EditorSoundsSettingsPopup::FLAlert_Clicked
__int64 __fastcall EditorSoundsSettingsPopup_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx

  result = *(unsigned __int8 *)(a1 + 16); /*0x3d1676*/
  *(_BYTE *)(a1 + 16) = 0; /*0x3d167d*/
  if ( (_BYTE)result && a3 ) /*0x3d1688*/
  {
    v5 = sub_182B60(a1); /*0x3d168a*/
    sub_1837B0(v5); /*0x3d1692*/
    v6 = *(_QWORD *)(a1 + 8); /*0x3d1697*/
    if ( v6 ) /*0x3d169e*/
      cocos2d::CCNode::scheduleOnce(v6, sub_5AB90); /*0x3d16aa*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 664) + 992LL))(a1 - 664, 0); /*0x3d16c0*/
    LOBYTE(v7) = 1; /*0x3d16d4*/
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 - 664) + 520LL))(a1 - 664, v7); /*0x3d16db*/
  }
  return result; /*0x3d16e2*/
}
