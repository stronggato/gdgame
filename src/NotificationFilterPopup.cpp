#include <Geode/binding/NotificationFilterPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x475c40
// Method: NotificationFilterPopup::onClose
// Hidden C++ exception states: #wind=1
__int64 __fastcall NotificationFilterPopup_onClose(__int64 a1)
{
  int v2; // ebx
  void *v4; // [rsp+30h] [rbp+8h]

  if ( *(_QWORD *)(a1 + 1000) ) /*0x475c55*/
  {
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x475c67*/
    {
      v4 = operator new(0x690u); /*0x475c73*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v4); /*0x475c81*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x475c92*/
    }
    v2 = *(_DWORD *)(a1 + 1008); /*0x475c94*/
    if ( (unsigned int)sub_24BF20() != v2 ) /*0x475ca1*/
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 1000) + 740LL) = 0; /*0x475caa*/
      sub_4745D0(*(_QWORD *)(a1 + 1000), 0); /*0x475cbd*/
    }
  }
  return SetupTriggerPopup_onClose(a1); /*0x475cc8*/
}
