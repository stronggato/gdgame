#include <Geode/binding/SetupReverbPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x5d7590
// Method: SetupReverbPopup::onReverb
__int64 __fastcall SetupReverbPopup_onReverb(cocos2d::CCDictionary **a1, __int64 a2)
{
  int v4; // ebx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx

  v4 = (int)(*((float (__fastcall **)(cocos2d::CCDictionary **, __int64))*a1 + 146))(a1, 502); /*0x5d75b9*/
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5d75bd*/
  v6 = 1; /*0x5d75c0*/
  if ( v5 != 1 ) /*0x5d75d2*/
    v6 = -1; /*0x5d75d2*/
  v7 = v6 + v4; /*0x5d75d6*/
  v8 = 22; /*0x5d75d9*/
  if ( v7 < 22 ) /*0x5d75e0*/
    v8 = v7; /*0x5d75e0*/
  if ( v8 < 0 ) /*0x5d75e7*/
    v8 = 0; /*0x5d75e7*/
  SetupTriggerPopup_updateValue(a1, 0x1F6u, (float)v8); /*0x5d75f4*/
  return sub_5D7610(a1); /*0x5d75fc*/
}

// [2/2] Address: 0x5d7780
// Method: SetupReverbPopup::onClose
// Hidden C++ exception states: #wind=1
__int64 __fastcall SetupReverbPopup_onClose(__int64 a1)
{
  void *v3; // [rsp+40h] [rbp+18h]

  if ( !qword_905F60 ) /*0x5d779a*/
  {
    v3 = operator new(0x8A8u); /*0x5d77a6*/
    qword_905F60 = sub_5AE20(v3); /*0x5d77b4*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x5d77c5*/
  }
  sub_613B0(); /*0x5d77ce*/
  return SetupTriggerPopup_onClose(a1); /*0x5d77d9*/
}
