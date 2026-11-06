#include <Geode/binding/SetupCheckpointPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x5f6ff0
// Method: SetupCheckpointPopup::~SetupCheckpointPopup
cocos2d::CCNode *__fastcall SetupCheckpointPopup__dtor_SetupCheckpointPopup(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &SetupCheckpointPopup::`vftable'; /*0x5f7003*/
  *((_QWORD *)Block + 40) = &SetupCheckpointPopup::`vftable'; /*0x5f7010*/
  *((_QWORD *)Block + 41) = &SetupCheckpointPopup::`vftable'; /*0x5f701e*/
  *((_QWORD *)Block + 42) = &SetupCheckpointPopup::`vftable'; /*0x5f702c*/
  *((_QWORD *)Block + 43) = &SetupCheckpointPopup::`vftable'; /*0x5f703a*/
  *((_QWORD *)Block + 44) = &SetupCheckpointPopup::`vftable'; /*0x5f7048*/
  *((_QWORD *)Block + 51) = &SetupCheckpointPopup::`vftable'; /*0x5f7056*/
  *((_QWORD *)Block + 54) = &SetupCheckpointPopup::`vftable'; /*0x5f7064*/
  *((_QWORD *)Block + 68) = &SetupCheckpointPopup::`vftable'; /*0x5f7072*/
  *((_QWORD *)Block + 83) = &SetupCheckpointPopup::`vftable'; /*0x5f7080*/
  *((_QWORD *)Block + 84) = &SetupCheckpointPopup::`vftable'; /*0x5f708e*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x5f7095*/
  if ( (a2 & 1) != 0 ) /*0x5f709d*/
    j_j_free(Block); /*0x5f70a7*/
  return Block; /*0x5f70ac*/
}

// Address: 0x5f9190
// Method: SetupCheckpointPopup::init
// Hidden C++ exception states: #wind=3
char __fastcall SetupCheckpointPopup_init(_BYTE *a1, int a2, int a3, int a4)
{
  char result; // al
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int128 *v15; // [rsp+40h] [rbp-49h] BYREF
  __int128 v16; // [rsp+48h] [rbp-41h] BYREF
  __int64 v17; // [rsp+58h] [rbp-31h]
  __int64 v18; // [rsp+60h] [rbp-29h]
  __int128 v19; // [rsp+68h] [rbp-21h] BYREF
  __int64 v20; // [rsp+78h] [rbp-11h]
  __int64 v21; // [rsp+80h] [rbp-9h]
  __int128 *v22; // [rsp+88h] [rbp-1h] BYREF
  __int128 *v23; // [rsp+90h] [rbp+7h] BYREF
  float v24[2]; // [rsp+98h] [rbp+Fh] BYREF
  _BYTE v25[64]; // [rsp+A0h] [rbp+17h] BYREF
  char v26; // [rsp+108h] [rbp+7Fh] BYREF

  result = sub_6060E0((_DWORD)a1, a2, a3, a4, 1130102784, 1, 0);
  if ( result )
  {
    a1[744] = 1;
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 1096LL))(a1);
    v17 = 14;
    v18 = 15;
    strcpy((char *)&v16, "Player Control");
    HIBYTE(v16) = 0;
    sub_606E80(a1, &v16);
    v16 = 0;
    v17 = 2;
    v18 = 15;
    strcpy((char *)&v16, "OK");
    SetupTriggerPopup_addCloseButton((__int64)a1, (__int64 *)&v16);
    v15 = &v16;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    *(_QWORD *)&v16 = sub_3C460(176);
    v17 = 170;
    v18 = 175;
    strcpy(
      (char *)v16,
      "<cg>Controls</c> player <cy>P1 or P2</c> behavior with a specified setting.\n"
      "<cl>Stop Slide</c> can be used to stop the player from sliding after a force has been applied.");
    v19 = 0;
    v20 = 4;
    v21 = 15;
    strcpy((char *)&v19, "Help");
    sub_6070A0(a1, &v19, &v16);
    sub_607360(a1);
    v7 = cocos2d::CCDirector::sharedDirector(v6);
    cocos2d::CCDirector::getWinSize(v7, v24);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v25, v24[0] * 0.5, v24[1] * 0.5);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v15, -20.0, 40.0);
    cocos2d::CCPoint::operator+(v25, &v26, v8);
    v22 = &v19;
    v19 = 0;
    v20 = 2;
    v21 = 15;
    strcpy((char *)&v19, "P1");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v23, -40.0, 20.0);
    cocos2d::CCPoint::operator+(&v26, &v15, v9);
    SetupTriggerPopup_createToggleValueControl(
      (int)a1,
      138,
      (__int64)&v19,
      (const struct cocos2d::CCPoint *)&v15,
      0,
      0,
      0,
      1.0);
    v23 = &v19;
    v19 = 0;
    v20 = 2;
    v21 = 15;
    strcpy((char *)&v19, "P2");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, 40.0, 20.0);
    cocos2d::CCPoint::operator+(&v26, &v15, v10);
    SetupTriggerPopup_createToggleValueControl(
      (int)a1,
      200,
      (__int64)&v19,
      (const struct cocos2d::CCPoint *)&v15,
      0,
      0,
      0,
      1.0);
    v23 = &v16;
    *((_QWORD *)&v16 + 1) = 112;
    v17 = 9;
    v18 = 15;
    *(_QWORD *)&v16 = 0x6D754A0A706F7453LL;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, -80.0, -20.0);
    cocos2d::CCPoint::operator+(&v26, &v15, v11);
    SetupTriggerPopup_createToggleValueControl(
      (int)a1,
      540,
      (__int64)&v16,
      (const struct cocos2d::CCPoint *)&v15,
      0,
      0,
      0,
      1.0);
    v23 = &v16;
    *((_QWORD *)&v16 + 1) = 101;
    v17 = 9;
    v18 = 15;
    *(_QWORD *)&v16 = 0x766F4D0A706F7453LL;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, 0.0, -20.0);
    cocos2d::CCPoint::operator+(&v26, &v15, v12);
    SetupTriggerPopup_createToggleValueControl(
      (int)a1,
      541,
      (__int64)&v16,
      (const struct cocos2d::CCPoint *)&v15,
      0,
      0,
      0,
      1.0);
    v23 = &v19;
    v20 = 8;
    v21 = 15;
    v19 = 0x746F520A706F7453uLL;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, 80.0, -20.0);
    cocos2d::CCPoint::operator+(&v26, &v15, v13);
    SetupTriggerPopup_createToggleValueControl(
      (int)a1,
      542,
      (__int64)&v19,
      (const struct cocos2d::CCPoint *)&v15,
      0,
      0,
      0,
      1.0);
    v23 = &v16;
    *((_QWORD *)&v16 + 1) = 25956;
    v17 = 10;
    v18 = 15;
    *(_QWORD *)&v16 = 0x696C530A706F7453LL;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, -80.0, -60.0);
    cocos2d::CCPoint::operator+(&v26, &v15, v14);
    SetupTriggerPopup_createToggleValueControl(
      (int)a1,
      543,
      (__int64)&v16,
      (const struct cocos2d::CCPoint *)&v15,
      0,
      0,
      0,
      1.0);
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 1136LL))(a1);
    a1[744] = 0;
    return 1;
  }
  return result;
}
