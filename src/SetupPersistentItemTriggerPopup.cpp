#include <Geode/binding/SetupPersistentItemTriggerPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/2] Address: 0x601b30
// Method: SetupPersistentItemTriggerPopup::valueDidChange
void __fastcall SetupPersistentItemTriggerPopup_valueDidChange(__int64 a1, int a2, float a3)
{
  struct cocos2d::CCObject *v3; // rax
  __int64 v4; // rdx

  if ( a2 == 494 ) /*0x601b36*/
  {
    v3 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 984), 80); /*0x601b50*/
    if ( v3 ) /*0x601b59*/
    {
      v4 = 2; /*0x601b63*/
      if ( a3 != 0.0 ) /*0x601b68*/
        v4 = 4; /*0x601b6a*/
      sub_3C4E40(v3, v4); /*0x601b72*/
    }
  }
}

// Address: 0x5b9b20
// Method: SetupPersistentItemTriggerPopup::init
// Hidden C++ exception states: #wind=3
char __fastcall SetupPersistentItemTriggerPopup_init(_BYTE *a1, int a2, int a3, int a4)
{
  char result; // al
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  float v12[2]; // [rsp+80h] [rbp-29h] BYREF
  __int128 *v13; // [rsp+88h] [rbp-21h] BYREF
  __int128 *v14; // [rsp+90h] [rbp-19h] BYREF
  __int128 *v15; // [rsp+98h] [rbp-11h] BYREF
  __int128 v16; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v17; // [rsp+B0h] [rbp+7h]
  __int64 v18; // [rsp+B8h] [rbp+Fh]
  __int128 v19; // [rsp+C0h] [rbp+17h] BYREF
  __int64 v20; // [rsp+D0h] [rbp+27h]
  __int64 v21; // [rsp+D8h] [rbp+2Fh]
  char v22; // [rsp+128h] [rbp+7Fh] BYREF

  result = sub_6060E0((_DWORD)a1, a2, a3, a4, 1131413504, 1, 0);
  if ( result )
  {
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 1096LL))(a1);
    v17 = 15;
    v18 = 15;
    strcpy((char *)&v16, "Gravity Trigger");
    sub_606E80(a1, &v16);
    v16 = 0;
    v17 = 2;
    v18 = 15;
    strcpy((char *)&v16, "OK");
    SetupTriggerPopup_addCloseButton((__int64)a1, (__int64 *)&v16);
    v13 = &v16;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    *(_QWORD *)&v16 = sub_3C460(160);
    v17 = 144;
    v18 = 159;
    strcpy(
      (char *)v16,
      "Changes the gameplay <cg>gravity</c>.\n"
      "<cy>P1</c> is player 1 and <cl>P2</c> is player 2.\n"
      "<cp>PT</c> targets the player that touches the trigger.");
    v19 = 0;
    v20 = 4;
    v21 = 15;
    strcpy((char *)&v19, "Help");
    sub_6070A0(a1, &v19, &v16);
    sub_607360(a1);
    v7 = cocos2d::CCDirector::sharedDirector(v6);
    cocos2d::CCDirector::getWinSize(v7, v12);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, v12[0] * 0.5, (float)(v12[1] * 0.5) + 50.0);
    v14 = &v16;
    v17 = 7;
    v18 = 15;
    v16 = 0x79746976617247uLL;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v15, 0.0, 0.0);
    cocos2d::CCPoint::operator+(&v22, &v13, v8);
    sub_6088F0(
      (_DWORD)a1,
      148,
      (unsigned int)&v16,
      (unsigned int)&v13,
      1059481190,
      0,
      1,
      6,
      0,
      1036831949,
      0x40000000,
      0,
      0,
      0,
      2,
      0);
    v15 = &v19;
    v19 = 0;
    v20 = 2;
    v21 = 15;
    strcpy((char *)&v19, "P1");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v14, -75.0, -60.0);
    cocos2d::CCPoint::operator+(&v22, &v13, v9);
    SetupTriggerPopup_createToggleValueControl(
      (int)a1,
      138,
      (__int64)&v19,
      (const struct cocos2d::CCPoint *)&v13,
      0,
      0,
      0,
      1.0);
    v15 = &v19;
    v19 = 0;
    v20 = 2;
    v21 = 15;
    strcpy((char *)&v19, "P2");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v14, 0.0, -60.0);
    cocos2d::CCPoint::operator+(&v22, &v13, v10);
    SetupTriggerPopup_createToggleValueControl(
      (int)a1,
      200,
      (__int64)&v19,
      (const struct cocos2d::CCPoint *)&v13,
      0,
      0,
      0,
      1.0);
    v15 = &v19;
    v19 = 0;
    v20 = 2;
    v21 = 15;
    strcpy((char *)&v19, "PT");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v14, 75.0, -60.0);
    cocos2d::CCPoint::operator+(&v22, &v13, v11);
    SetupTriggerPopup_createToggleValueControl(
      (int)a1,
      201,
      (__int64)&v19,
      (const struct cocos2d::CCPoint *)&v13,
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
