#include <Geode/binding/ThreadMessageOptionsPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0xd1640
// Method: ThreadMessageOptionsPopup::~ThreadMessageOptionsPopup
// Hidden C++ exception states: #wind=1
cocos2d::CCNode *__fastcall ThreadMessageOptionsPopup__dtor_ThreadMessageOptionsPopup(cocos2d::CCNode *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *(_QWORD *)Block = &ThreadMessageOptionsPopup::`vftable'; /*0xd1656*/
  *((_QWORD *)Block + 40) = &ThreadMessageOptionsPopup::`vftable'; /*0xd1660*/
  *((_QWORD *)Block + 41) = &ThreadMessageOptionsPopup::`vftable'; /*0xd166e*/
  *((_QWORD *)Block + 42) = &ThreadMessageOptionsPopup::`vftable'; /*0xd167c*/
  *((_QWORD *)Block + 43) = &ThreadMessageOptionsPopup::`vftable'; /*0xd168a*/
  *((_QWORD *)Block + 44) = &ThreadMessageOptionsPopup::`vftable'; /*0xd1698*/
  *((_QWORD *)Block + 51) = &ThreadMessageOptionsPopup::`vftable'; /*0xd16a6*/
  *((_QWORD *)Block + 54) = &ThreadMessageOptionsPopup::`vftable'; /*0xd16b4*/
  *((_QWORD *)Block + 68) = &ThreadMessageOptionsPopup::`vftable'; /*0xd16c2*/
  *((_QWORD *)Block + 83) = &ThreadMessageOptionsPopup::`vftable'; /*0xd16d0*/
  *((_QWORD *)Block + 84) = &ThreadMessageOptionsPopup::`vftable'; /*0xd16de*/
  *((_QWORD *)Block + 125) = &ThreadMessageOptionsPopup::`vftable'; /*0xd16ec*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 126); /*0xd16f3*/
  if ( v4 ) /*0xd16fd*/
    cocos2d::CCObject::release(v4); /*0xd16ff*/
  sub_3C310((char *)Block + 1024); /*0xd170c*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0xd1714*/
  if ( (a2 & 1) != 0 ) /*0xd171e*/
    j_j_free(Block); /*0xd1728*/
  return Block; /*0xd1730*/
}

// [2/2] Address: 0xe3d80
// Method: ThreadMessageOptionsPopup::FLAlert_Clicked
void __fastcall ThreadMessageOptionsPopup_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  if ( a3 ) /*0xe3d83*/
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 12 ) /*0xe3d99*/
    {
      sub_E3250(*(_QWORD *)(a1 + 16), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL)); /*0xe3dac*/
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 1000) + 1104LL))(a1 - 1000, 0); /*0xe3dc1*/
    }
  }
}
