#include <Geode/binding/MultiTriggerPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// Address: 0x5fabe0
// Method: MultiTriggerPopup::init
// Hidden C++ exception states: #wind=1
char __fastcall MultiTriggerPopup_init(_BYTE *a1, int a2, int a3, int a4)
{
  char result; // al
  __int64 v6; // rcx
  __int64 v7; // rax
  const struct cocos2d::CCPoint *v8; // rax
  _BYTE v9[8]; // [rsp+40h] [rbp-19h] BYREF
  __int128 *v10; // [rsp+48h] [rbp-11h]
  _BYTE v11[8]; // [rsp+50h] [rbp-9h] BYREF
  __int128 v12; // [rsp+58h] [rbp-1h] BYREF
  __int64 v13; // [rsp+68h] [rbp+Fh]
  __int64 v14; // [rsp+70h] [rbp+17h]
  __int128 v15; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v16; // [rsp+88h] [rbp+2Fh]
  __int64 v17; // [rsp+90h] [rbp+37h]
  float v18; // [rsp+D8h] [rbp+7Fh] BYREF
  float v19; // [rsp+DCh] [rbp+83h]

  result = sub_6060E0((_DWORD)a1, a2, a3, a4, 1123024896, 1, 0);
  if ( result )
  {
    a1[744] = 1;
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 1096LL))(a1);
    v12 = 0;
    v13 = 5;
    v14 = 15;
    strcpy((char *)&v12, "Setup");
    sub_606E80(a1, &v12);
    v12 = 0;
    v13 = 2;
    v14 = 15;
    strcpy((char *)&v12, "OK");
    SetupTriggerPopup_addCloseButton((__int64)a1, (__int64 *)&v12);
    v10 = &v12;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    *(_QWORD *)&v12 = sub_3C460(80);
    v13 = 74;
    v14 = 79;
    strcpy((char *)v12, "<cy>Allow Multi</c> makes it so the object can be activated several times.");
    v15 = 0;
    v16 = 4;
    v17 = 15;
    strcpy((char *)&v15, "Help");
    sub_6070A0(a1, &v15, &v12);
    v7 = cocos2d::CCDirector::sharedDirector(v6);
    cocos2d::CCDirector::getWinSize(v7, &v18);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v9, (float)(v18 * 0.5) - 30.0, (float)(v19 * 0.5) + 10.0);
    v10 = &v12;
    v13 = 11;
    v14 = 15;
    *(_QWORD *)&v12 = 0x754D20776F6C6C41LL;
    *((_QWORD *)&v12 + 1) = 6911084;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v11, (const struct cocos2d::CCPoint *)v9);
    SetupTriggerPopup_createToggleValueControl((int)a1, 87, (__int64)&v12, v8, 0, 0, 0, 1.0);
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 1136LL))(a1);
    a1[744] = 0;
    return 1;
  }
  return result;
}
