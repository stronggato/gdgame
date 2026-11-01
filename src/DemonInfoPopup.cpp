#include <Geode/binding/DemonInfoPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x556130
// Method: DemonInfoPopup::create
// Hidden C++ exception states: #wind=1
cocos2d::CCObject *__fastcall DemonInfoPopup_create(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  cocos2d::CCObject *v16; // r14

  v16 = (cocos2d::CCObject *)operator new(0x298u); /*0x556161*/
  FLAlertLayer_FLAlertLayer((__int64)v16); /*0x55616c*/
  *(_QWORD *)v16 = &DemonInfoPopup::`vftable'; /*0x556178*/
  *((_QWORD *)v16 + 40) = &DemonInfoPopup::`vftable'; /*0x556182*/
  *((_QWORD *)v16 + 41) = &DemonInfoPopup::`vftable'; /*0x556190*/
  *((_QWORD *)v16 + 42) = &DemonInfoPopup::`vftable'; /*0x55619e*/
  *((_QWORD *)v16 + 43) = &DemonInfoPopup::`vftable'; /*0x5561ac*/
  *((_QWORD *)v16 + 44) = &DemonInfoPopup::`vftable'; /*0x5561ba*/
  *((_QWORD *)v16 + 51) = &DemonInfoPopup::`vftable'; /*0x5561c8*/
  *((_QWORD *)v16 + 54) = &DemonInfoPopup::`vftable'; /*0x5561d6*/
  *((_QWORD *)v16 + 68) = &DemonInfoPopup::`vftable'; /*0x5561e4*/
  if ( (unsigned __int8)sub_5562A0((_DWORD)v16, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12) ) /*0x556252*/
  {
    cocos2d::CCObject::autorelease(v16); /*0x55625e*/
    return v16; /*0x556264*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v16 + 8LL))(v16, 1); /*0x556271*/
    return 0; /*0x556274*/
  }
}
