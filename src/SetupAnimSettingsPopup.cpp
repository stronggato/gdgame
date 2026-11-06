#include <Geode/binding/SetupAnimSettingsPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/2] Address: 0x59d3b0
// Method: SetupAnimSettingsPopup::onClose
__int64 __fastcall SetupAnimSettingsPopup_onClose(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int i; // ebx
  struct cocos2d::CCObject *v4; // rax

  v2 = *(_QWORD *)(a1 + 680); /*0x59d3c0*/
  if ( v2 ) /*0x59d3ca*/
  {
    EnhancedGameObject_setupAnimationVariables(v2); /*0x59d3cc*/
  }
  else
  {
    for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 688)); ++i ) /*0x59d3e1*/
    {
      v4 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 688), i); /*0x59d3f9*/
      EnhancedGameObject_setupAnimationVariables((__int64)v4); /*0x59d402*/
    }
  }
  return SetupTriggerPopup_onClose(a1); /*0x59d425*/
}

// Address: 0x59cb20
// Method: SetupAnimSettingsPopup::init
// Hidden C++ exception states: #wind=3
char __fastcall SetupAnimSettingsPopup_init(_BYTE *a1, int a2, int a3, int a4)
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
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int128 v22; // [rsp+80h] [rbp-80h] BYREF
  __int64 v23; // [rsp+90h] [rbp-70h]
  __int64 v24; // [rsp+98h] [rbp-68h]
  __int128 *v25; // [rsp+A0h] [rbp-60h] BYREF
  __int128 *v26; // [rsp+A8h] [rbp-58h] BYREF
  __int128 *v27; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v28[8]; // [rsp+B8h] [rbp-48h] BYREF
  float v29[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v30; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v31; // [rsp+D8h] [rbp-28h]
  __int64 v32; // [rsp+E0h] [rbp-20h]
  char v33; // [rsp+158h] [rbp+58h] BYREF

  result = sub_6060E0((_DWORD)a1, a2, a3, a4, 1131413504, 1, 0);
  if ( result )
  {
    a1[744] = 1;
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 1096LL))(a1);
    v22 = 0;
    *(_QWORD *)&v22 = sub_3C460(32);
    v23 = 23;
    v24 = 31;
    strcpy((char *)v22, "Edit Animation Settings");
    sub_606E80(a1, &v22);
    v22 = 0;
    v23 = 2;
    v24 = 15;
    strcpy((char *)&v22, "OK");
    SetupTriggerPopup_addCloseButton((__int64)a1, (__int64 *)&v22);
    v25 = &v22;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v6 = sub_3C460(448);
    *(_QWORD *)&v22 = v6;
    v23 = 446;
    v24 = 447;
    v7 = v6;
    v8 = "<cg>Disable Anim Shine</c> removes the white flash at the start of the animation for some animated objects.\n"
         "<cy>Use Speed</c> lets you set a custom animation speed.\n"
         "Use <cl>Animate On Trigger</c> to toggle on with Animate trigger.\n"
         "<cp>Only If Active</c> only does this if the object is active.\n"
         "<cr>Single Frame</c> lets you select a specific frame of the animation.\n"
         "<co>Offset Anim</c> will offset the animation the value of <cr>single frame</c>.";
    v9 = 3;
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
    *(_BYTE *)(v6 + 446) = 0;
    v30 = 0;
    v31 = 4;
    v32 = 15;
    strcpy((char *)&v30, "Help");
    sub_6070A0(a1, &v30, &v22);
    v11 = cocos2d::CCDirector::sharedDirector(v10);
    cocos2d::CCDirector::getWinSize(v11, v29);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v28, v29[0] * 0.5, v29[1] * 0.5);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v25, -40.0, 60.0);
    cocos2d::CCPoint::operator+(v28, &v33, v12);
    v26 = &v22;
    v23 = 15;
    v24 = 15;
    strcpy((char *)&v22, "Randomize\nStart");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v27, -125.0, 0.0);
    cocos2d::CCPoint::operator+(&v33, &v25, v13);
    SetupTriggerPopup_createToggleValueControl(
      (int)a1,
      106,
      (__int64)&v22,
      (const struct cocos2d::CCPoint *)&v25,
      0,
      0,
      0,
      1.0);
    v27 = &v22;
    *((_QWORD *)&v22 + 1) = 100;
    v23 = 9;
    v24 = 15;
    *(_QWORD *)&v22 = 0x656570530A657355LL;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v26, 0.0, 0.0);
    cocos2d::CCPoint::operator+(&v33, &v25, v14);
    SetupTriggerPopup_createToggleValueControl(
      (int)a1,
      122,
      (__int64)&v22,
      (const struct cocos2d::CCPoint *)&v25,
      0,
      0,
      0,
      1.0);
    v27 = &v22;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    *(_QWORD *)&v22 = sub_3C460(32);
    v23 = 18;
    v24 = 31;
    strcpy((char *)v22, "Animate\non Trigger");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v26, 125.0, 0.0);
    cocos2d::CCPoint::operator+(&v33, &v25, v15);
    SetupTriggerPopup_createToggleValueControl(
      (int)a1,
      123,
      (__int64)&v22,
      (const struct cocos2d::CCPoint *)&v25,
      0,
      0,
      0,
      1.0);
    v27 = &v22;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    *(_QWORD *)&v22 = sub_3C460(32);
    v23 = 20;
    v24 = 31;
    strcpy((char *)v22, "Disable\ndelayed\nloop");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v26, -125.0, -40.0);
    cocos2d::CCPoint::operator+(&v33, &v25, v16);
    SetupTriggerPopup_createToggleValueControl(
      (int)a1,
      126,
      (__int64)&v22,
      (const struct cocos2d::CCPoint *)&v25,
      0,
      0,
      0,
      1.0);
    v27 = &v22;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    *(_QWORD *)&v22 = sub_3C460(32);
    v23 = 17;
    v24 = 31;
    strcpy((char *)v22, "Disable\nAnimShine");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v26, 0.0, -40.0);
    cocos2d::CCPoint::operator+(&v33, &v25, v17);
    SetupTriggerPopup_createToggleValueControl(
      (int)a1,
      127,
      (__int64)&v22,
      (const struct cocos2d::CCPoint *)&v25,
      0,
      0,
      0,
      1.0);
    v27 = &v22;
    v23 = 14;
    v24 = 15;
    strcpy((char *)&v22, "Only if\nactive");
    HIBYTE(v22) = 0;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v26, 125.0, -40.0);
    cocos2d::CCPoint::operator+(&v33, &v25, v18);
    SetupTriggerPopup_createToggleValueControl(
      (int)a1,
      214,
      (__int64)&v22,
      (const struct cocos2d::CCPoint *)&v25,
      0,
      0,
      0,
      1.0);
    v27 = &v22;
    v22 = 0;
    v23 = 6;
    v24 = 15;
    strcpy((char *)&v22, "Speed:");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v26, -100.0, -30.0);
    cocos2d::CCPoint::operator+(v28, &v25, v19);
    sub_6088F0(
      (_DWORD)a1,
      107,
      (unsigned int)&v22,
      (unsigned int)&v25,
      1061997773,
      0,
      1,
      6,
      0,
      -1073741824,
      0x40000000,
      0,
      0,
      0,
      2,
      0);
    v27 = &v22;
    v23 = 13;
    v24 = 15;
    strcpy((char *)&v22, "Single Frame:");
    HIWORD(v22) = 0;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v26, 100.0, -45.0);
    cocos2d::CCPoint::operator+(v28, &v25, v20);
    sub_6088F0(
      (_DWORD)a1,
      462,
      (unsigned int)&v22,
      (unsigned int)&v25,
      1061997773,
      1,
      3,
      3,
      1,
      0,
      1101004800,
      0,
      0,
      0,
      2,
      0);
    v27 = &v22;
    v23 = 11;
    v24 = 15;
    *(_QWORD *)&v22 = 0x410A74657366664FLL;
    *((_QWORD *)&v22 + 1) = 7170414;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v26, 125.0, -155.0);
    cocos2d::CCPoint::operator+(&v33, &v25, v21);
    SetupTriggerPopup_createToggleValueControl(
      (int)a1,
      592,
      (__int64)&v22,
      (const struct cocos2d::CCPoint *)&v25,
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
