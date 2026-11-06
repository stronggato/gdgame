#include <Geode/binding/SetupRotatePopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/3] Address: 0x5d3370
// Method: SetupRotatePopup::onClose
__int64 __fastcall SetupRotatePopup_onClose(__int64 a1)
{
  struct cocos2d::CCObject *v2; // rcx
  struct cocos2d::CCArray *v3; // rax
  unsigned int *v4; // rbx
  __int64 v5; // rax
  float **v6; // rbx
  float **i; // rdi

  v2 = *(struct cocos2d::CCObject **)(a1 + 680); /*0x5d3380*/
  if ( v2 ) /*0x5d338a*/
    v3 = cocos2d::CCArray::createWithObject(v2); /*0x5d338c*/
  else
    v3 = *(struct cocos2d::CCArray **)(a1 + 688); /*0x5d3394*/
  if ( v3 ) /*0x5d339e*/
  {
    v4 = (unsigned int *)*((_QWORD *)v3 + 7); /*0x5d33a5*/
    v5 = *v4; /*0x5d33a9*/
    if ( (_DWORD)v5 ) /*0x5d33ad*/
    {
      v6 = (float **)*((_QWORD *)v4 + 2); /*0x5d33af*/
      for ( i = &v6[v5 - 1]; v6 <= i; ++v6 ) /*0x5d33c3*/
      {
        if ( !*v6 ) /*0x5d33c5*/
          break; /*0x5d33cb*/
        EnhancedGameObject_createRotateAction(*v6, (*v6)[353], 0); /*0x5d33d8*/
      }
    }
  }
  return SetupTriggerPopup_onClose(a1); /*0x5d33f6*/
}

// [3/3] Address: 0x5d3410
// Method: SetupRotatePopup::onCustomToggleTriggerValue
struct cocos2d::CCObject *__fastcall SetupRotatePopup_onCustomToggleTriggerValue(
        cocos2d::CCDictionary **a1,
        __int64 a2)
{
  int v3; // edi
  __int64 v4; // r8
  struct cocos2d::CCObject *v5; // rax
  __int64 v6; // rdx
  struct cocos2d::CCObject *v7; // rax
  struct cocos2d::CCObject *result; // rax
  __int64 v9; // rdx

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5d3437*/
  if ( cocos2d::CCDictionary::objectForKey(a1[94], 97) ) /*0x5d3439*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*a1 + 144))(a1, 97, 0); /*0x5d3459*/
  else
    sub_60A5A0(a1, 97); /*0x5d3464*/
  sub_60ABF0(a1, 97); /*0x5d3474*/
  if ( v3 ) /*0x5d347d*/
  {
    if ( v3 == 1 ) /*0x5d3482*/
    {
      if ( cocos2d::CCDictionary::objectForKey(a1[94], 98) ) /*0x5d34c6*/
      {
        LOBYTE(v4) = 1; /*0x5d34dc*/
        (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, __int64))*a1 + 144))(a1, 98, v4); /*0x5d34df*/
        goto LABEL_12; /*0x5d34ed*/
      }
LABEL_11:
      sub_60A5A0(a1, 98); /*0x5d3506*/
      goto LABEL_12; /*0x5d3509*/
    }
    if ( v3 != 2 ) /*0x5d3487*/
      goto LABEL_13; /*0x5d3487*/
  }
  if ( !cocos2d::CCDictionary::objectForKey(a1[94], 98) ) /*0x5d34aa*/
    goto LABEL_11; /*0x5d34aa*/
  (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*a1 + 144))(a1, 98, 0); /*0x5d34b2*/
LABEL_12:
  sub_60ABF0(a1, 98); /*0x5d3511*/
LABEL_13:
  (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, bool))*a1 + 136))(a1, 2, v3 == 2); /*0x5d351e*/
  v5 = cocos2d::CCDictionary::objectForKey(a1[97], 0); /*0x5d3543*/
  if ( v5 ) /*0x5d354c*/
  {
    LOBYTE(v6) = v3 == 0; /*0x5d3553*/
    CCMenuItemToggler_toggle((__int64)v5, v6); /*0x5d3556*/
  }
  v7 = cocos2d::CCDictionary::objectForKey(a1[97], 2); /*0x5d3567*/
  if ( v7 ) /*0x5d3570*/
    CCMenuItemToggler_toggle((__int64)v7, v3 == 2); /*0x5d3579*/
  result = cocos2d::CCDictionary::objectForKey(a1[97], 1); /*0x5d358a*/
  if ( result ) /*0x5d3593*/
  {
    LOBYTE(v9) = v3 == 1; /*0x5d359b*/
    return (struct cocos2d::CCObject *)CCMenuItemToggler_toggle((__int64)result, v9); /*0x5d359e*/
  }
  return result; /*0x5d35a3*/
}

// Address: 0x5d2e10
// Method: SetupRotatePopup::init
// Hidden C++ exception states: #wind=3
char __fastcall SetupRotatePopup_init(_BYTE *a1, int a2, int a3, int a4)
{
  char result; // al
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int8 v8; // di
  double v9; // xmm0_8
  float v10; // xmm7_4
  unsigned __int8 v11; // si
  __int64 v12; // rax
  __int64 v13; // r9
  unsigned __int8 v14; // si
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // r8
  float v21[2]; // [rsp+80h] [rbp-39h] BYREF
  __int128 *v22; // [rsp+88h] [rbp-31h] BYREF
  __int128 *v23; // [rsp+90h] [rbp-29h] BYREF
  __int128 *v24; // [rsp+98h] [rbp-21h] BYREF
  __int128 v25; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-9h]
  __int64 v27; // [rsp+B8h] [rbp-1h]
  __int128 v28; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v29; // [rsp+D0h] [rbp+17h]
  __int64 v30; // [rsp+D8h] [rbp+1Fh]
  char v31; // [rsp+138h] [rbp+7Fh] BYREF

  result = sub_6060E0((_DWORD)a1, a2, a3, a4, 1131413504, 1, 0);
  if ( result )
  {
    a1[744] = 1;
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 1096LL))(a1);
    v25 = 0;
    v27 = 0;
    *(_QWORD *)&v25 = sub_3C460(32);
    v26 = 18;
    v27 = 31;
    strcpy((char *)v25, "Edit Rotate Action");
    sub_606E80(a1, &v25);
    v25 = 0;
    v26 = 2;
    v27 = 15;
    strcpy((char *)&v25, "OK");
    SetupTriggerPopup_addCloseButton((__int64)a1, (__int64 *)&v25);
    v22 = &v25;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    *(_QWORD *)&v25 = sub_3C460(160);
    v26 = 144;
    v27 = 159;
    strcpy(
      (char *)v25,
      "<cg>Default</c> uses the default rotation values.\n"
      "<cy>Custom</c> lets you specify degrees per second.\n"
      "<cl>Disable</c> stops rotation completely.");
    v28 = 0;
    v29 = 4;
    v30 = 15;
    strcpy((char *)&v28, "Help");
    sub_6070A0(a1, &v28, &v25);
    v7 = cocos2d::CCDirector::sharedDirector(v6);
    cocos2d::CCDirector::getWinSize(v7, v21);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v31, v21[0] * 0.5, (float)(v21[1] * 0.5) + 50.0);
    v8 = (*(float (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 1168LL))(a1, 98) != 0.0;
    v9 = (*(double (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 1168LL))(a1, 97);
    v10 = *(float *)&v9;
    v23 = &v25;
    v11 = !v8 && *(float *)&v9 == 0.0;
    HIWORD(v25) = 0;
    v26 = 7;
    v27 = 15;
    qmemcpy(&v25, "Defaul", 6);
    *(_QWORD *)((char *)&v25 + 6) = (unsigned __int8)aDefault[6];
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v24, -70.0, 0.0);
    cocos2d::CCPoint::operator+(&v31, &v22, v12);
    SetupTriggerPopup_createCustomToggleValueControl(
      (__int64)a1,
      0,
      v11,
      v13,
      (__int64)&v25,
      (const struct cocos2d::CCPoint *)&v22,
      1,
      0,
      0);
    v24 = &v25;
    v14 = !v8 && v10 != 0.0;
    v25 = 0;
    v26 = 6;
    v27 = 15;
    strcpy((char *)&v25, "Custom");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v23, 0.0, 0.0);
    cocos2d::CCPoint::operator+(&v31, &v22, v15);
    SetupTriggerPopup_createCustomToggleValueControl(
      (__int64)a1,
      2u,
      v14,
      v16,
      (__int64)&v25,
      (const struct cocos2d::CCPoint *)&v22,
      1,
      0,
      0);
    v24 = &v25;
    HIWORD(v25) = 0;
    v26 = 7;
    v27 = 15;
    qmemcpy(&v25, "Disabl", 6);
    *(_QWORD *)((char *)&v25 + 6) = (unsigned __int8)aDisable[6];
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v23, 70.0, 0.0);
    cocos2d::CCPoint::operator+(&v31, &v22, v17);
    SetupTriggerPopup_createCustomToggleValueControl(
      (__int64)a1,
      1u,
      v8,
      v18,
      (__int64)&v25,
      (const struct cocos2d::CCPoint *)&v22,
      1,
      0,
      0);
    v24 = &v25;
    *((_QWORD *)&v25 + 1) = 14963;
    v26 = 10;
    v27 = 15;
    *(_QWORD *)&v25 = 0x2F73656572676544LL;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v23, 0.0, -60.0);
    cocos2d::CCPoint::operator+(&v31, &v22, v19);
    sub_6088F0(
      (_DWORD)a1,
      97,
      (unsigned int)&v25,
      (unsigned int)&v22,
      1061997773,
      0,
      2,
      4,
      0,
      -1011613696,
      1135869952,
      0,
      2,
      0,
      3,
      0);
    if ( v8 || v10 == 0.0 )
      v20 = 0;
    else
      LOBYTE(v20) = 1;
    (*(void (__fastcall **)(_BYTE *, __int64, __int64))(*(_QWORD *)a1 + 1088LL))(a1, 2, v20);
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 1136LL))(a1);
    a1[744] = 0;
    return 1;
  }
  return result;
}
