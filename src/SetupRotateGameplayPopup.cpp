#include <Geode/binding/SetupRotateGameplayPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/3] Address: 0x5d21c0
// Method: SetupRotateGameplayPopup::onPlusButton
double __fastcall SetupRotateGameplayPopup_onPlusButton(cocos2d::CCDictionary **a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  int v4; // esi
  void *v5; // rcx
  _QWORD **v6; // rdi
  _QWORD *v7; // rcx
  _QWORD *v8; // rbx
  int v10; // [rsp+30h] [rbp-48h] BYREF
  void *v11; // [rsp+38h] [rbp-40h]
  __int64 v12; // [rsp+40h] [rbp-38h]
  void *Block[2]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v14; // [rsp+58h] [rbp-20h]
  __int64 v15; // [rsp+60h] [rbp-18h]
  __int64 v16; // [rsp+68h] [rbp-10h]
  void *v17; // [rsp+90h] [rbp+18h]

  v12 = 0; /*0x5d21d9*/
  v2 = operator new(0x18u); /*0x5d21e3*/
  *v2 = v2; /*0x5d21e8*/
  v2[1] = v2; /*0x5d21eb*/
  v11 = v2; /*0x5d21ef*/
  *(_OWORD *)Block = 0; /*0x5d21f7*/
  v14 = 0; /*0x5d21fd*/
  v15 = 7; /*0x5d2202*/
  v16 = 8; /*0x5d220b*/
  v10 = 1065353216; /*0x5d2214*/
  sub_3E200(Block, 16, v2); /*0x5d2229*/
  v3 = qword_905FD0; /*0x5d222f*/
  if ( !qword_905FD0 ) /*0x5d2239*/
  {
    v17 = operator new(0x6E8u); /*0x5d2245*/
    qword_905FD0 = sub_2723A0(v17); /*0x5d2256*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x5d2267*/
    v3 = qword_905FD0; /*0x5d2269*/
  }
  v4 = sub_3F4D10(*(_QWORD *)(v3 + 568), &v10); /*0x5d2281*/
  v5 = Block[0]; /*0x5d2283*/
  if ( Block[0] ) /*0x5d228b*/
  {
    if ( ((v14 - (unsigned __int64)Block[0]) & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 ) /*0x5d22a3*/
    {
      v5 = (void *)*((_QWORD *)Block[0] - 1); /*0x5d22a9*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v5 - 8) > 0x1F ) /*0x5d22b8*/
        invoke_watson(0, 0, 0, 0, 0); /*0x5d22c9*/
    }
    j_j_free(v5); /*0x5d22d0*/
  }
  v6 = (_QWORD **)v11; /*0x5d22d5*/
  **((_QWORD **)v11 + 1) = 0; /*0x5d22de*/
  v7 = *v6; /*0x5d22e1*/
  if ( *v6 ) /*0x5d22e1*/
  {
    do /*0x5d2303*/
    {
      v8 = (_QWORD *)*v7; /*0x5d22f0*/
      j_j_free(v7); /*0x5d22f8*/
      v7 = v8; /*0x5d22fd*/
    }
    while ( v8 ); /*0x5d2303*/
  }
  j_j_free(v6); /*0x5d230d*/
  return SetupTriggerPopup_updateValue(a1, 0xADu, (float)v4); /*0x5d2321*/
}

// [3/3] Address: 0x5d2340
// Method: SetupRotateGameplayPopup::valueDidChange
__int64 __fastcall SetupRotateGameplayPopup_valueDidChange(__int64 a1, __int64 a2, __int64 a3)
{
  float v3; // xmm2_4
  __int64 result; // rax

  if ( (_DWORD)a2 == 171 ) /*0x5d2346*/
  {
    if ( v3 == 0.0 ) /*0x5d2350*/
      return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 1088LL))(a1, a2, 0); /*0x5d2358*/
    LOBYTE(a3) = 1; /*0x5d2362*/
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 1088LL))(a1, 171, a3); /*0x5d236a*/
  }
  else if ( (_DWORD)a2 == 169 ) /*0x5d2377*/
  {
    if ( v3 == 0.0 ) /*0x5d2381*/
      return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 1088LL))(a1, a2, 0); /*0x5d2381*/
    LOBYTE(a3) = 1; /*0x5d2393*/
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 1088LL))(a1, 169, a3); /*0x5d239b*/
  }
  return result; /*0x5d23a2*/
}

// Address: 0x5d17f0
// Method: SetupRotateGameplayPopup::init
// Hidden C++ exception states: #wind=3
char __fastcall SetupRotateGameplayPopup_init(float *a1, int a2, int a3, int a4)
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
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r8
  const struct cocos2d::CCPoint *v24; // rax
  __int128 v25; // xmm0
  const struct cocos2d::CCPoint *v26; // rax
  __int128 v27; // [rsp+80h] [rbp-80h] BYREF
  __int64 v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  __int128 *v30; // [rsp+A0h] [rbp-60h] BYREF
  __int128 *v31; // [rsp+A8h] [rbp-58h] BYREF
  __int128 *v32; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v33; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v34; // [rsp+C8h] [rbp-38h]
  __int64 v35; // [rsp+D0h] [rbp-30h]
  _BYTE v36[4]; // [rsp+D8h] [rbp-28h] BYREF
  float v37; // [rsp+DCh] [rbp-24h]
  _BYTE v38[8]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v39[88]; // [rsp+E8h] [rbp-18h] BYREF
  float v40; // [rsp+168h] [rbp+68h] BYREF
  float v41; // [rsp+16Ch] [rbp+6Ch]

  result = sub_6060E0((_DWORD)a1, a2, a3, a4, 1133248512, 1, 0);
  if ( result )
  {
    *((_BYTE *)a1 + 744) = 1;
    (*(void (__fastcall **)(float *))(*(_QWORD *)a1 + 1096LL))(a1);
    v28 = 15;
    v29 = 15;
    strcpy((char *)&v27, "Rotate Gameplay");
    sub_606E80(a1, &v27);
    v27 = 0;
    v28 = 2;
    v29 = 15;
    strcpy((char *)&v27, "OK");
    SetupTriggerPopup_addCloseButton((__int64)a1, (__int64 *)&v27);
    v30 = &v27;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v6 = sub_3C460(688);
    *(_QWORD *)&v27 = v6;
    v28 = 685;
    v29 = 687;
    v7 = v6;
    v8 = "<cg>VelMod</c> modifies the velocity after switching rotation.\n"
         "<cy>Override Velocity</c> sets the velocity instead of multiplying.\n"
         "<cl>Change Channel</c> allows you to specify which channel to switch to after rotating. Triggers in a given cha"
         "nnel will only be activated when the player is in that channel. You can use <cp>Channel Only</c> to exclude gam"
         "eplay rotation.\n"
         "The <cr>Rotate Gameplay</c> trigger direction determines how the channel's triggers are sorted. Upwards means s"
         "maller Y values are triggered first, right means smaller X values are triggered first, and so on.\n"
         "<co>Instant Offset</c> makes the camera update instantly when switching gameplay to the opposite direction.";
    v9 = 5;
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
    *(_QWORD *)(v7 + 32) = *((_QWORD *)v8 + 4);
    *(_DWORD *)(v7 + 40) = *((_DWORD *)v8 + 10);
    *(_BYTE *)(v7 + 44) = v8[44];
    *(_BYTE *)(v6 + 685) = 0;
    v33 = 0;
    v34 = 4;
    v35 = 15;
    strcpy((char *)&v33, "Help");
    sub_6070A0(a1, &v33, &v27);
    v11 = cocos2d::CCDirector::sharedDirector(v10);
    cocos2d::CCDirector::getWinSize(v11, &v40);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v36, (float)(v40 * 0.5) - 25.0, (float)(v41 * 0.5) + 85.0);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v38, v40 * 0.5, v37);
    v32 = &v27;
    v28 = 13;
    v29 = 15;
    strcpy((char *)&v27, "Edit\nVelocity");
    HIWORD(v27) = 0;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v31, -60.0, 0.0);
    cocos2d::CCPoint::operator+(v36, &v30, v12);
    SetupTriggerPopup_createToggleValueControl(
      (int)a1,
      169,
      (__int64)&v27,
      (const struct cocos2d::CCPoint *)&v30,
      0,
      0,
      0,
      1.0);
    v31 = &v27;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    *(_QWORD *)&v27 = sub_3C460(32);
    v28 = 17;
    v29 = 31;
    strcpy((char *)v27, "Override\nVelocity");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v32, 60.0, 0.0);
    cocos2d::CCPoint::operator+(v36, &v30, v13);
    SetupTriggerPopup_createToggleValueControl(
      (int)a1,
      584,
      (__int64)&v27,
      (const struct cocos2d::CCPoint *)&v30,
      0,
      0,
      169,
      1.0);
    v31 = &v33;
    v34 = 8;
    v35 = 15;
    v33 = 0x3A58646F4D6C6556uLL;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v32, -80.0, -42.0);
    cocos2d::CCPoint::operator+(v38, &v30, v14);
    sub_6088F0(
      (_DWORD)a1,
      582,
      (unsigned int)&v33,
      (unsigned int)&v30,
      1060320051,
      0,
      1,
      6,
      0,
      -1082130432,
      1065353216,
      0,
      169,
      1,
      2,
      0);
    v31 = &v33;
    v33 = 0;
    v34 = 2;
    v35 = 15;
    strcpy((char *)&v33, "Y:");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v32, 80.0, -42.0);
    cocos2d::CCPoint::operator+(v38, &v30, v15);
    sub_6088F0(
      (_DWORD)a1,
      583,
      (unsigned int)&v33,
      (unsigned int)&v30,
      1060320051,
      0,
      1,
      6,
      0,
      -1082130432,
      1065353216,
      0,
      169,
      1,
      2,
      0);
    v31 = &v27;
    v28 = 14;
    v29 = 15;
    strcpy((char *)&v27, "Change\nChannel");
    HIBYTE(v27) = 0;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v32, -60.0, -84.0);
    cocos2d::CCPoint::operator+(v36, &v30, v16);
    SetupTriggerPopup_createToggleValueControl(
      (int)a1,
      171,
      (__int64)&v27,
      (const struct cocos2d::CCPoint *)&v30,
      0,
      0,
      0,
      1.0);
    v31 = &v27;
    v28 = 12;
    v29 = 15;
    strcpy((char *)&v27, "Channel\nOnly");
    BYTE13(v27) = 0;
    HIWORD(v27) = 0;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v32, 60.0, -84.0);
    cocos2d::CCPoint::operator+(v36, &v30, v17);
    SetupTriggerPopup_createToggleValueControl(
      (int)a1,
      172,
      (__int64)&v27,
      (const struct cocos2d::CCPoint *)&v30,
      0,
      0,
      171,
      1.0);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v31, 0.0, -146.0);
    cocos2d::CCPoint::operator+(v38, v39, v18);
    v31 = &v27;
    v28 = 15;
    v29 = 15;
    strcpy((char *)&v27, "Target Channel:");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v32, (const struct cocos2d::CCPoint *)v39);
    sub_6088F0((_DWORD)a1, 173, (unsigned int)&v27, v19, 1061997773, 1, 3, 6, 1, 0, 1176255488, 0, 171, 0, 2, 0);
    v31 = &v33;
    v33 = 0;
    v34 = 0;
    v35 = 15;
    LOBYTE(v33) = 0;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v32, 75.0, 0.0);
    cocos2d::CCPoint::operator+(v39, &v30, v20);
    SetupTriggerPopup_createPlusButton((__int64)a1, 0xADu, (__int64)&v30, v21, &v33, 0, 171);
    if ( (*(float (__fastcall **)(float *, __int64))(*(_QWORD *)a1 + 1168LL))(a1, 171) == 0.0 )
      v22 = 0;
    else
      LOBYTE(v22) = 1;
    (*(void (__fastcall **)(float *, __int64, __int64))(*(_QWORD *)a1 + 1088LL))(a1, 171, v22);
    if ( (*(float (__fastcall **)(float *, __int64))(*(_QWORD *)a1 + 1168LL))(a1, 169) == 0.0 )
      v23 = 0;
    else
      LOBYTE(v23) = 1;
    (*(void (__fastcall **)(float *, __int64, __int64))(*(_QWORD *)a1 + 1088LL))(a1, 169, v23);
    v31 = &v27;
    v28 = 14;
    v29 = 15;
    strcpy((char *)&v27, "Instant\nOffset");
    HIBYTE(v27) = 0;
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)&v32,
      (float)((float)(a1[183] * 0.5) + (float)(v40 * 0.5)) - 72.0,
      (float)((float)(v41 * 0.5) - (float)(a1[184] * 0.5)) + 50.0);
    SetupTriggerPopup_createToggleValueControl((int)a1, 368, (__int64)&v27, v24, 0, 0, 0, 1.0);
    v31 = &v27;
    v25 = 0;
    v28 = 10;
    v29 = 15;
    *(_QWORD *)&v25 = 0x696C530A746E6F44LL;
    v27 = v25;
    WORD4(v27) = 25956;
    BYTE10(v27) = 0;
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)&v32,
      (float)((float)(a1[183] * 0.5) + (float)(v40 * 0.5)) - 72.0,
      (float)((float)((float)(v41 * 0.5) - (float)(a1[184] * 0.5)) + 50.0) + 30.0);
    SetupTriggerPopup_createToggleValueControl((int)a1, 585, (__int64)&v27, v26, 0, 0, 0, 1.0);
    sub_607360(a1);
    (*(void (__fastcall **)(float *))(*(_QWORD *)a1 + 1136LL))(a1);
    *((_BYTE *)a1 + 744) = 0;
    return 1;
  }
  return result;
}
