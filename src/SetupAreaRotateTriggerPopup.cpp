#include <Geode/binding/SetupAreaRotateTriggerPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x59d610
// Method: SetupAreaRotateTriggerPopup::~SetupAreaRotateTriggerPopup
_QWORD *__fastcall SetupAreaRotateTriggerPopup__dtor_SetupAreaRotateTriggerPopup(_QWORD *Block, char a2)
{
  *Block = &SetupAreaRotateTriggerPopup::`vftable'; /*0x59d623*/
  Block[40] = &SetupAreaRotateTriggerPopup::`vftable'; /*0x59d630*/
  Block[41] = &SetupAreaRotateTriggerPopup::`vftable'; /*0x59d63e*/
  Block[42] = &SetupAreaRotateTriggerPopup::`vftable'; /*0x59d64c*/
  Block[43] = &SetupAreaRotateTriggerPopup::`vftable'; /*0x59d65a*/
  Block[44] = &SetupAreaRotateTriggerPopup::`vftable'; /*0x59d668*/
  Block[51] = &SetupAreaRotateTriggerPopup::`vftable'; /*0x59d676*/
  Block[54] = &SetupAreaRotateTriggerPopup::`vftable'; /*0x59d684*/
  Block[68] = &SetupAreaRotateTriggerPopup::`vftable'; /*0x59d692*/
  Block[83] = &SetupAreaRotateTriggerPopup::`vftable'; /*0x59d6a0*/
  Block[84] = &SetupAreaRotateTriggerPopup::`vftable'; /*0x59d6ae*/
  SetupAreaMoveTriggerPopup__dtor_SetupAreaMoveTriggerPopup(); /*0x59d6b5*/
  if ( (a2 & 1) != 0 ) /*0x59d6bd*/
    j_j_free(Block); /*0x59d6c7*/
  return Block; /*0x59d6cc*/
}

// Address: 0x5a1200
// Method: SetupAreaRotateTriggerPopup::init
// Hidden C++ exception states: #wind=3
char __fastcall SetupAreaRotateTriggerPopup_init(_BYTE *a1, int a2, int a3, int a4)
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
  __int64 v16; // rax
  __int64 v17; // rax
  float v18[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 *v19; // [rsp+88h] [rbp-78h] BYREF
  __int128 *v20; // [rsp+90h] [rbp-70h] BYREF
  __int128 *v21; // [rsp+98h] [rbp-68h] BYREF
  __int128 v22; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v23; // [rsp+B0h] [rbp-50h]
  __int64 v24; // [rsp+B8h] [rbp-48h]
  __int128 v25; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v26; // [rsp+D0h] [rbp-30h]
  __int64 v27; // [rsp+D8h] [rbp-28h]
  char v28; // [rsp+148h] [rbp+48h] BYREF

  result = sub_6060E0((_DWORD)a1, a2, a3, a4, 1133248512, 1, 0);
  if ( result )
  {
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 1096LL))(a1);
    v22 = 0;
    *(_QWORD *)&v22 = sub_3C460(32);
    v23 = 19;
    v24 = 31;
    strcpy((char *)v22, "Area Rotate Trigger");
    sub_606E80(a1, &v22);
    v22 = 0;
    v23 = 2;
    v24 = 15;
    strcpy((char *)&v22, "OK");
    SetupTriggerPopup_addCloseButton((__int64)a1, (__int64 *)&v22);
    v19 = &v22;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v6 = sub_3C460(320);
    *(_QWORD *)&v22 = v6;
    v23 = 314;
    v24 = 319;
    v7 = v6;
    v8 = "Rotates objects using <cg>Target Group ID</c> within an area around <cy>Center Group ID</c>. The area can be sp"
         "ecified by the arrow buttons and <cl>Length</c> (for size).\n"
         "You can specify how much the objects in the area rotate depending on how close they are to the center.\n"
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
    *(_WORD *)(v7 + 56) = *((_WORD *)v8 + 28);
    *(_BYTE *)(v6 + 314) = 0;
    v25 = 0;
    v26 = 4;
    v27 = 15;
    strcpy((char *)&v25, "Help");
    sub_6070A0(a1, &v25, &v22);
    sub_607670(a1);
    v11 = cocos2d::CCDirector::sharedDirector(v10);
    cocos2d::CCDirector::getWinSize(v11, v18);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v28, v18[0] * 0.5, (float)(v18[1] * 0.5) + 95.0);
    v20 = &v22;
    v22 = 0;
    v23 = 6;
    v24 = 15;
    strcpy((char *)&v22, "Length");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v21, -75.0, 0.0);
    cocos2d::CCPoint::operator+(&v28, &v19, v12);
    sub_6088F0(
      (_DWORD)a1,
      222,
      (unsigned int)&v22,
      (unsigned int)&v19,
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
    v21 = &v25;
    v25 = 0;
    v26 = 2;
    v27 = 15;
    strcpy((char *)&v25, "+-");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v20, 75.0, 0.0);
    cocos2d::CCPoint::operator+(&v28, &v19, v13);
    sub_6088F0(
      (_DWORD)a1,
      223,
      (unsigned int)&v25,
      (unsigned int)&v19,
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
    v21 = &v22;
    v22 = 0;
    v23 = 6;
    v24 = 15;
    strcpy((char *)&v22, "Offset");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v20, -75.0, -25.0);
    cocos2d::CCPoint::operator+(&v28, &v19, v14);
    sub_6088F0(
      (_DWORD)a1,
      220,
      (unsigned int)&v22,
      (unsigned int)&v19,
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
    v21 = &v25;
    v25 = 0;
    v26 = 2;
    v27 = 15;
    strcpy((char *)&v25, "+-");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v20, 75.0, -25.0);
    cocos2d::CCPoint::operator+(&v28, &v19, v15);
    sub_6088F0(
      (_DWORD)a1,
      221,
      (unsigned int)&v25,
      (unsigned int)&v19,
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
    v21 = &v25;
    v26 = 8;
    v27 = 15;
    v25 = 0x6E6F697461746F52uLL;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v20, -75.0, -50.0);
    cocos2d::CCPoint::operator+(&v28, &v19, v16);
    sub_6088F0(
      (_DWORD)a1,
      270,
      (unsigned int)&v25,
      (unsigned int)&v19,
      1059481190,
      0,
      1,
      6,
      0,
      -1011613696,
      1135869952,
      0,
      0,
      1,
      2,
      0);
    v21 = &v25;
    v25 = 0;
    v26 = 2;
    v27 = 15;
    strcpy((char *)&v25, "+-");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v20, 75.0, -50.0);
    cocos2d::CCPoint::operator+(&v28, &v19, v17);
    sub_6088F0(
      (_DWORD)a1,
      271,
      (unsigned int)&v25,
      (unsigned int)&v19,
      1059481190,
      0,
      1,
      6,
      0,
      0,
      1127481344,
      0,
      0,
      1,
      2,
      0);
    sub_59EC10(a1, 3007);
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 1136LL))(a1);
    sub_606600(a1);
    SetupTriggerPopup_goToPage((__int64)a1, 0, 0);
    a1[744] = 0;
    return 1;
  }
  return result;
}
