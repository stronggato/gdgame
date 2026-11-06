#include <Geode/binding/SetupPlatformerEndPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/2] Address: 0x5ad070
// Method: SetupPlatformerEndPopup::~SetupPlatformerEndPopup
cocos2d::CCNode *__fastcall SetupPlatformerEndPopup__dtor_SetupPlatformerEndPopup(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &SetupPlatformerEndPopup::`vftable'; /*0x5ad083*/
  *((_QWORD *)Block + 40) = &SetupPlatformerEndPopup::`vftable'; /*0x5ad090*/
  *((_QWORD *)Block + 41) = &SetupPlatformerEndPopup::`vftable'; /*0x5ad09e*/
  *((_QWORD *)Block + 42) = &SetupPlatformerEndPopup::`vftable'; /*0x5ad0ac*/
  *((_QWORD *)Block + 43) = &SetupPlatformerEndPopup::`vftable'; /*0x5ad0ba*/
  *((_QWORD *)Block + 44) = &SetupPlatformerEndPopup::`vftable'; /*0x5ad0c8*/
  *((_QWORD *)Block + 51) = &SetupPlatformerEndPopup::`vftable'; /*0x5ad0d6*/
  *((_QWORD *)Block + 54) = &SetupPlatformerEndPopup::`vftable'; /*0x5ad0e4*/
  *((_QWORD *)Block + 68) = &SetupPlatformerEndPopup::`vftable'; /*0x5ad0f2*/
  *((_QWORD *)Block + 83) = &SetupPlatformerEndPopup::`vftable'; /*0x5ad100*/
  *((_QWORD *)Block + 84) = &SetupPlatformerEndPopup::`vftable'; /*0x5ad10e*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x5ad115*/
  if ( (a2 & 1) != 0 ) /*0x5ad11d*/
    j_j_free(Block); /*0x5ad127*/
  return Block; /*0x5ad12c*/
}

// Address: 0x5aa460
// Method: SetupPlatformerEndPopup::init
// Hidden C++ exception states: #wind=3
char __fastcall SetupPlatformerEndPopup_init(_BYTE *a1, int a2, int a3, int a4)
{
  char result; // al
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // r8d
  int v14; // r9d
  float v15[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 *v16; // [rsp+88h] [rbp-78h] BYREF
  __int128 *v17; // [rsp+90h] [rbp-70h] BYREF
  __int128 *v18; // [rsp+98h] [rbp-68h] BYREF
  __int128 v19; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v20; // [rsp+B0h] [rbp-50h]
  __int64 v21; // [rsp+B8h] [rbp-48h]
  __int128 v22; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v23; // [rsp+D0h] [rbp-30h]
  __int64 v24; // [rsp+D8h] [rbp-28h]
  char v25; // [rsp+148h] [rbp+48h] BYREF

  result = sub_6060E0((_DWORD)a1, a2, a3, a4, 1132593152, 1, 0);
  if ( result )
  {
    a1[744] = 1;
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 1096LL))(a1);
    v19 = 0;
    *(_QWORD *)&v19 = sub_3C460(32);
    v20 = 21;
    v21 = 31;
    strcpy((char *)v19, "Setup Camera Rotation");
    sub_606E80(a1, &v19);
    v19 = 0;
    v20 = 2;
    v21 = 15;
    strcpy((char *)&v19, "OK");
    SetupTriggerPopup_addCloseButton((__int64)a1, (__int64 *)&v19);
    v16 = &v19;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    *(_QWORD *)&v19 = sub_3C460(256);
    v20 = 244;
    v21 = 255;
    strcpy(
      (char *)v19,
      "<cg>Rotates</c> the camera to the target value.\n"
      "<cy>Move Time</c> is how fast the rotate happens.\n"
      "<cl>Easing</c> changes the method used.\n"
      "<cg>Add</c> the rotation to the current camera rotation.\n"
      "<cp>Snap360</c> converts rotation to closest 360.");
    v22 = 0;
    v23 = 4;
    v24 = 15;
    strcpy((char *)&v22, "Help");
    sub_6070A0(a1, &v22, &v19);
    sub_607360(a1);
    v7 = cocos2d::CCDirector::sharedDirector(v6);
    cocos2d::CCDirector::getWinSize(v7, v15);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v25, v15[0] * 0.5, v15[1] * 0.5);
    v17 = &v22;
    v23 = 8;
    v24 = 15;
    v22 = 0x3A73656572676544uLL;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v18, -100.0, 60.0);
    cocos2d::CCPoint::operator+(&v25, &v16, v8);
    sub_6088F0(
      (_DWORD)a1,
      68,
      (unsigned int)&v22,
      (unsigned int)&v16,
      1061997773,
      0,
      1,
      10,
      0,
      -1011613696,
      1135869952,
      0,
      0,
      0,
      2,
      0);
    v18 = &v19;
    v19 = 0;
    v20 = 3;
    v21 = 15;
    LOWORD(v19) = *(_WORD *)"Add";
    WORD1(v19) = (unsigned __int8)aAdd[2];
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v17, 60.0, 70.0);
    cocos2d::CCPoint::operator+(&v25, &v16, v9);
    SetupTriggerPopup_createToggleValueControl(
      (int)a1,
      70,
      (__int64)&v19,
      (const struct cocos2d::CCPoint *)&v16,
      0,
      0,
      0,
      1.0);
    v18 = &v19;
    v20 = 7;
    v21 = 15;
    v19 = 0x30363370616E53uLL;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v17, 60.0, 30.0);
    cocos2d::CCPoint::operator+(&v25, &v16, v10);
    SetupTriggerPopup_createToggleValueControl(
      (int)a1,
      394,
      (__int64)&v19,
      (const struct cocos2d::CCPoint *)&v16,
      0,
      0,
      0,
      1.0);
    v18 = &v19;
    *((_QWORD *)&v19 + 1) = 14949;
    v20 = 10;
    v21 = 15;
    *(_QWORD *)&v19 = 0x6D69542065766F4DLL;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v17, -100.0, -10.0);
    cocos2d::CCPoint::operator+(&v25, &v16, v11);
    sub_6088F0(
      (_DWORD)a1,
      10,
      (unsigned int)&v19,
      (unsigned int)&v16,
      1061997773,
      0,
      1,
      10,
      0,
      0,
      1092616192,
      0,
      0,
      0,
      2,
      0);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v18, 95.0, -10.0);
    cocos2d::CCPoint::operator+(&v25, &v16, v12);
    sub_60EDA0((_DWORD)a1, (unsigned int)&v16, v13, v14, 0);
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 1136LL))(a1);
    a1[744] = 0;
    return 1;
  }
  return result;
}
