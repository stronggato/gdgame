#include <Geode/binding/SetLevelOrderPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x3a1880
// Method: SetLevelOrderPopup::~SetLevelOrderPopup
__int64 __fastcall SetLevelOrderPopup__dtor_SetLevelOrderPopup(cocos2d::CCNode *a1)
{
  *(_QWORD *)a1 = &SetIDPopup::`vftable'; /*0x3a1890*/
  *((_QWORD *)a1 + 40) = &SetIDPopup::`vftable'; /*0x3a189a*/
  *((_QWORD *)a1 + 41) = &SetIDPopup::`vftable'; /*0x3a18a8*/
  *((_QWORD *)a1 + 42) = &SetIDPopup::`vftable'; /*0x3a18b6*/
  *((_QWORD *)a1 + 43) = &SetIDPopup::`vftable'; /*0x3a18c4*/
  *((_QWORD *)a1 + 44) = &SetIDPopup::`vftable'; /*0x3a18d2*/
  *((_QWORD *)a1 + 51) = &SetIDPopup::`vftable'; /*0x3a18e0*/
  *((_QWORD *)a1 + 54) = &SetIDPopup::`vftable'; /*0x3a18ee*/
  *((_QWORD *)a1 + 68) = &SetIDPopup::`vftable'; /*0x3a18fc*/
  cocos2d::CCNode::removeAllChildrenWithCleanup(a1, 1); /*0x3a1905*/
  return StarInfoPopup__dtor_StarInfoPopup(a1); /*0x3a190e*/
}

// [3/3] Address: 0x42d200
// Method: SetLevelOrderPopup::onOrderButton
__int64 __fastcall SetLevelOrderPopup_onOrderButton(__int64 a1, __int64 a2)
{
  int v3; // eax

  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 1 ) /*0x42d215*/
    v3 = *(_DWORD *)(a1 + 684); /*0x42d217*/
  else
    v3 = 1; /*0x42d21f*/
  *(_DWORD *)(a1 + 672) = v3; /*0x42d227*/
  return sub_3A25F0(a1); /*0x42d22d*/
}
