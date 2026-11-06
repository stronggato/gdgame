#include <Geode/binding/SetupAreaTriggerPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x59d8c0
// Method: SetupAreaTriggerPopup::~SetupAreaTriggerPopup
_QWORD *__fastcall SetupAreaTriggerPopup__dtor_SetupAreaTriggerPopup(_QWORD *Block, char a2)
{
  *Block = &SetupAreaTriggerPopup::`vftable'; /*0x59d8d3*/
  Block[40] = &SetupAreaTriggerPopup::`vftable'; /*0x59d8e0*/
  Block[41] = &SetupAreaTriggerPopup::`vftable'; /*0x59d8ee*/
  Block[42] = &SetupAreaTriggerPopup::`vftable'; /*0x59d8fc*/
  Block[43] = &SetupAreaTriggerPopup::`vftable'; /*0x59d90a*/
  Block[44] = &SetupAreaTriggerPopup::`vftable'; /*0x59d918*/
  Block[51] = &SetupAreaTriggerPopup::`vftable'; /*0x59d926*/
  Block[54] = &SetupAreaTriggerPopup::`vftable'; /*0x59d934*/
  Block[68] = &SetupAreaTriggerPopup::`vftable'; /*0x59d942*/
  Block[83] = &SetupAreaTriggerPopup::`vftable'; /*0x59d950*/
  Block[84] = &SetupAreaTriggerPopup::`vftable'; /*0x59d95e*/
  SetupAreaMoveTriggerPopup__dtor_SetupAreaMoveTriggerPopup(); /*0x59d965*/
  if ( (a2 & 1) != 0 ) /*0x59d96d*/
    j_j_free(Block); /*0x59d977*/
  return Block; /*0x59d97c*/
}

// Address: 0x5a31a0
// Method: SetupAreaTriggerPopup::init
// Hidden C++ exception states: #wind=3
char __fastcall SetupAreaTriggerPopup_init(_BYTE *a1, int a2, int a3, int a4)
{
  char result; // al
  __int64 v6; // r9
  __int64 v7; // rcx
  const char *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  float v16[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 *v17; // [rsp+88h] [rbp-78h] BYREF
  __int128 *v18; // [rsp+90h] [rbp-70h] BYREF
  __int128 *v19; // [rsp+98h] [rbp-68h] BYREF
  __int128 v20; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v21; // [rsp+B0h] [rbp-50h]
  __int64 v22; // [rsp+B8h] [rbp-48h]
  __int128 v23; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v24; // [rsp+D0h] [rbp-30h]
  __int64 v25; // [rsp+D8h] [rbp-28h]
  char v26; // [rsp+148h] [rbp+48h] BYREF

  result = sub_6060E0((_DWORD)a1, a2, a3, a4, 1133248512, 1, 0);
  if ( result )
  {
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 1096LL))(a1);
    v21 = 12;
    v22 = 15;
    strcpy((char *)&v20, "Area Trigger");
    BYTE13(v20) = 0;
    HIWORD(v20) = 0;
    sub_606E80(a1, &v20);
    v20 = 0;
    v21 = 2;
    v22 = 15;
    strcpy((char *)&v20, "OK");
    SetupTriggerPopup_addCloseButton((__int64)a1, (__int64 *)&v20);
    v17 = &v20;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v6 = sub_3C460(320);
    *(_QWORD *)&v20 = v6;
    v21 = 318;
    v22 = 319;
    v7 = v6;
    v8 = "Alters objects using <cg>Target Group ID</c> within an area around <cy>Center Group ID</c>. The area can be spe"
         "cified by the arrow buttons and <cl>Length</c> (for size).\n"
         "You can specify how much the objects in the area are altered depending on how close they are to the center.\n"
         "Check the other pages for more settings.";
    v9 = 2;
    do
    {
      *(_OWORD *)v7 = *(_OWORD *)v8;
      *(_OWORD *)(v7 + 16) = *((_OWORD *)v8 + 1);
      *(_OWORD *)(v7 + 32) = *((_OWORD *)v8 + 2);
      *(_OWORD *)(v7 + 48) = *((_OWORD *)v8 + 3);
      *(_OWORD *)(v7 + 64) = *((_OWORD *)v8 + 4);
      *(_OWORD *)(v7 + 80) = *((_OWORD *)v8 + 5);
      *(_OWORD *)(v7 + 96) = *((_OWORD *)v8 + 6);
      v7 += 128;
      *(_OWORD *)(v7 - 16) = *((_OWORD *)v8 + 7);
      v8 += 128;
      --v9;
    }
    while ( v9 );
    *(_OWORD *)v7 = *(_OWORD *)v8;
    *(_OWORD *)(v7 + 16) = *((_OWORD *)v8 + 1);
    *(_OWORD *)(v7 + 32) = *((_OWORD *)v8 + 2);
    *(_QWORD *)(v7 + 48) = *((_QWORD *)v8 + 6);
    *(_DWORD *)(v7 + 56) = *((_DWORD *)v8 + 14);
    *(_WORD *)(v7 + 60) = *((_WORD *)v8 + 30);
    *(_BYTE *)(v6 + 318) = 0;
    v23 = 0;
    v24 = 4;
    v25 = 15;
    strcpy((char *)&v23, "Help");
    sub_6070A0(a1, &v23, &v20);
    sub_607670(a1);
    v11 = cocos2d::CCDirector::sharedDirector(v10);
    cocos2d::CCDirector::getWinSize(v11, v16);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v26, v16[0] * 0.5, (float)(v16[1] * 0.5) + 95.0);
    v18 = &v20;
    v20 = 0;
    v21 = 6;
    v22 = 15;
    strcpy((char *)&v20, "Length");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v19, -75.0, 0.0);
    cocos2d::CCPoint::operator+(&v26, &v17, v12);
    sub_6088F0(
      (_DWORD)a1,
      222,
      (unsigned int)&v20,
      (unsigned int)&v17,
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
    v19 = &v23;
    v23 = 0;
    v24 = 2;
    v25 = 15;
    strcpy((char *)&v23, "+-");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v18, 75.0, 0.0);
    cocos2d::CCPoint::operator+(&v26, &v17, v13);
    sub_6088F0(
      (_DWORD)a1,
      223,
      (unsigned int)&v23,
      (unsigned int)&v17,
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
    v19 = &v20;
    v20 = 0;
    v21 = 6;
    v22 = 15;
    strcpy((char *)&v20, "Offset");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v18, -75.0, -25.0);
    cocos2d::CCPoint::operator+(&v26, &v17, v14);
    sub_6088F0(
      (_DWORD)a1,
      220,
      (unsigned int)&v20,
      (unsigned int)&v17,
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
    v19 = &v23;
    v23 = 0;
    v24 = 2;
    v25 = 15;
    strcpy((char *)&v23, "+-");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v18, 75.0, -25.0);
    cocos2d::CCPoint::operator+(&v26, &v17, v15);
    sub_6088F0(
      (_DWORD)a1,
      221,
      (unsigned int)&v23,
      (unsigned int)&v17,
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
    sub_59EC10(a1, 0);
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 1136LL))(a1);
    sub_606600(a1);
    SetupTriggerPopup_goToPage((__int64)a1, 0, 0);
    a1[744] = 0;
    return 1;
  }
  return result;
}
