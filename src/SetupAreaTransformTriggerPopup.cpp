#include <Geode/binding/SetupAreaTransformTriggerPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x59d540
// Method: SetupAreaTransformTriggerPopup::~SetupAreaTransformTriggerPopup
_QWORD *__fastcall SetupAreaTransformTriggerPopup__dtor_SetupAreaTransformTriggerPopup(_QWORD *Block, char a2)
{
  *Block = &SetupAreaTransformTriggerPopup::`vftable'; /*0x59d553*/
  Block[40] = &SetupAreaTransformTriggerPopup::`vftable'; /*0x59d560*/
  Block[41] = &SetupAreaTransformTriggerPopup::`vftable'; /*0x59d56e*/
  Block[42] = &SetupAreaTransformTriggerPopup::`vftable'; /*0x59d57c*/
  Block[43] = &SetupAreaTransformTriggerPopup::`vftable'; /*0x59d58a*/
  Block[44] = &SetupAreaTransformTriggerPopup::`vftable'; /*0x59d598*/
  Block[51] = &SetupAreaTransformTriggerPopup::`vftable'; /*0x59d5a6*/
  Block[54] = &SetupAreaTransformTriggerPopup::`vftable'; /*0x59d5b4*/
  Block[68] = &SetupAreaTransformTriggerPopup::`vftable'; /*0x59d5c2*/
  Block[83] = &SetupAreaTransformTriggerPopup::`vftable'; /*0x59d5d0*/
  Block[84] = &SetupAreaTransformTriggerPopup::`vftable'; /*0x59d5de*/
  SetupAreaMoveTriggerPopup__dtor_SetupAreaMoveTriggerPopup(); /*0x59d5e5*/
  if ( (a2 & 1) != 0 ) /*0x59d5ed*/
    j_j_free(Block); /*0x59d5f7*/
  return Block; /*0x59d5fc*/
}

// Address: 0x5a0940
// Method: SetupAreaTransformTriggerPopup::init
// Hidden C++ exception states: #wind=3
char __fastcall SetupAreaTransformTriggerPopup_init(_BYTE *a1, int a2, int a3, int a4)
{
  char result; // al
  __int64 v6; // r8
  _OWORD *v7; // rcx
  const char *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  float v20[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 *v21; // [rsp+88h] [rbp-78h] BYREF
  __int128 *v22; // [rsp+90h] [rbp-70h] BYREF
  __int128 *v23; // [rsp+98h] [rbp-68h] BYREF
  __int128 v24; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v25; // [rsp+B0h] [rbp-50h]
  __int64 v26; // [rsp+B8h] [rbp-48h]
  __int128 v27; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v28; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  char v30; // [rsp+168h] [rbp+68h] BYREF

  result = sub_6060E0((_DWORD)a1, a2, a3, a4, 1133248512, 1, 0);
  if ( result )
  {
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 1096LL))(a1);
    v24 = 0;
    *(_QWORD *)&v24 = sub_3C460(32);
    v25 = 22;
    v26 = 31;
    strcpy((char *)v24, "Area Transform Trigger");
    sub_606E80(a1, &v24);
    v24 = 0;
    v25 = 2;
    v26 = 15;
    strcpy((char *)&v24, "OK");
    SetupTriggerPopup_addCloseButton((__int64)a1, (__int64 *)&v24);
    v21 = &v24;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v6 = sub_3C460(320);
    *(_QWORD *)&v24 = v6;
    v25 = 312;
    v26 = 319;
    v7 = (_OWORD *)v6;
    v8 = "Scales objects using <cg>Target Group ID</c> within an area around <cy>Center Group ID</c>. The area can be spe"
         "cified by the arrow buttons and <cl>Length</c> (for size).\n"
         "You can specify how much the objects in the area scale depending on how close they are to the center.\n"
         "Check the other pages for more settings.";
    v9 = 2;
    do
    {
      *v7 = *(_OWORD *)v8;
      v7[1] = *((_OWORD *)v8 + 1);
      v7[2] = *((_OWORD *)v8 + 2);
      v7[3] = *((_OWORD *)v8 + 3);
      v7[4] = *((_OWORD *)v8 + 4);
      v7[5] = *((_OWORD *)v8 + 5);
      v7[6] = *((_OWORD *)v8 + 6);
      v7 += 8;
      *(v7 - 1) = *((_OWORD *)v8 + 7);
      v8 += 128;
      --v9;
    }
    while ( v9 );
    *v7 = *(_OWORD *)v8;
    v7[1] = *((_OWORD *)v8 + 1);
    v7[2] = *((_OWORD *)v8 + 2);
    *((_QWORD *)v7 + 6) = *((_QWORD *)v8 + 6);
    *(_BYTE *)(v6 + 312) = 0;
    v27 = 0;
    v28 = 4;
    v29 = 15;
    strcpy((char *)&v27, "Help");
    sub_6070A0(a1, &v27, &v24);
    sub_607670(a1);
    v11 = cocos2d::CCDirector::sharedDirector(v10);
    cocos2d::CCDirector::getWinSize(v11, v20);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v30, v20[0] * 0.5, (float)(v20[1] * 0.5) + 95.0);
    v22 = &v24;
    v24 = 0;
    v25 = 6;
    v26 = 15;
    strcpy((char *)&v24, "Length");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v23, -75.0, 0.0);
    cocos2d::CCPoint::operator+(&v30, &v21, v12);
    sub_6088F0(
      (_DWORD)a1,
      222,
      (unsigned int)&v24,
      (unsigned int)&v21,
      1059481190,
      0,
      2,
      6,
      0,
      0,
      1120403456,
      0,
      0,
      1,
      2,
      0);
    v23 = &v27;
    v27 = 0;
    v28 = 2;
    v29 = 15;
    strcpy((char *)&v27, "+-");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, 75.0, 0.0);
    cocos2d::CCPoint::operator+(&v30, &v21, v13);
    sub_6088F0(
      (_DWORD)a1,
      223,
      (unsigned int)&v27,
      (unsigned int)&v21,
      1059481190,
      0,
      2,
      6,
      0,
      0,
      1120403456,
      0,
      0,
      1,
      2,
      0);
    v23 = &v24;
    v24 = 0;
    v25 = 6;
    v26 = 15;
    strcpy((char *)&v24, "Offset");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, -75.0, -25.0);
    cocos2d::CCPoint::operator+(&v30, &v21, v14);
    sub_6088F0(
      (_DWORD)a1,
      220,
      (unsigned int)&v24,
      (unsigned int)&v21,
      1059481190,
      0,
      2,
      6,
      0,
      -1027080192,
      1120403456,
      0,
      0,
      1,
      2,
      0);
    v23 = &v27;
    v27 = 0;
    v28 = 2;
    v29 = 15;
    strcpy((char *)&v27, "+-");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, 75.0, -25.0);
    cocos2d::CCPoint::operator+(&v30, &v21, v15);
    sub_6088F0(
      (_DWORD)a1,
      221,
      (unsigned int)&v27,
      (unsigned int)&v21,
      1059481190,
      0,
      2,
      6,
      0,
      -1027080192,
      1120403456,
      0,
      0,
      1,
      2,
      0);
    v23 = &v24;
    v24 = 0;
    v25 = 6;
    v26 = 15;
    strcpy((char *)&v24, "ScaleX");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, -75.0, -50.0);
    cocos2d::CCPoint::operator+(&v30, &v21, v16);
    sub_6088F0(
      (_DWORD)a1,
      233,
      (unsigned int)&v24,
      (unsigned int)&v21,
      1059481190,
      0,
      1,
      6,
      0,
      0,
      1082130432,
      0,
      0,
      1,
      2,
      0);
    v23 = &v27;
    v27 = 0;
    v28 = 2;
    v29 = 15;
    strcpy((char *)&v27, "+-");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, 75.0, -50.0);
    cocos2d::CCPoint::operator+(&v30, &v21, v17);
    sub_6088F0(
      (_DWORD)a1,
      234,
      (unsigned int)&v27,
      (unsigned int)&v21,
      1059481190,
      0,
      1,
      6,
      0,
      0,
      1082130432,
      0,
      0,
      1,
      2,
      0);
    v23 = &v24;
    v24 = 0;
    v25 = 6;
    v26 = 15;
    strcpy((char *)&v24, "ScaleY");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, -75.0, -75.0);
    cocos2d::CCPoint::operator+(&v30, &v21, v18);
    sub_6088F0(
      (_DWORD)a1,
      235,
      (unsigned int)&v24,
      (unsigned int)&v21,
      1059481190,
      0,
      1,
      6,
      0,
      0,
      1082130432,
      0,
      0,
      1,
      2,
      0);
    v23 = &v27;
    v27 = 0;
    v28 = 2;
    v29 = 15;
    strcpy((char *)&v27, "+-");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, 75.0, -75.0);
    cocos2d::CCPoint::operator+(&v30, &v21, v19);
    sub_6088F0(
      (_DWORD)a1,
      236,
      (unsigned int)&v27,
      (unsigned int)&v21,
      1059481190,
      0,
      1,
      6,
      0,
      0,
      1082130432,
      0,
      0,
      1,
      2,
      0);
    sub_59EC10(a1, 3008);
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 1136LL))(a1);
    sub_606600(a1);
    SetupTriggerPopup_goToPage((__int64)a1, 0, 0);
    a1[744] = 0;
    return 1;
  }
  return result;
}
