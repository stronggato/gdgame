#include <Geode/binding/SetupAdvFollowPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x594630
// Method: SetupAdvFollowPopup::create
// Hidden C++ exception states: #wind=1
cocos2d::CCObject *__fastcall SetupAdvFollowPopup_create(__int64 a1, __int64 a2)
{
  cocos2d::CCObject *v4; // rsi

  v4 = (cocos2d::CCObject *)operator new(0x3F0u); /*0x59464f*/
  SetupTriggerPopup_SetupTriggerPopup((__int64)v4); /*0x59465a*/
  *(_QWORD *)v4 = &SetupAdvFollowPopup::`vftable'; /*0x594666*/
  *((_QWORD *)v4 + 40) = &SetupAdvFollowPopup::`vftable'; /*0x594670*/
  *((_QWORD *)v4 + 41) = &SetupAdvFollowPopup::`vftable'; /*0x59467e*/
  *((_QWORD *)v4 + 42) = &SetupAdvFollowPopup::`vftable'; /*0x59468c*/
  *((_QWORD *)v4 + 43) = &SetupAdvFollowPopup::`vftable'; /*0x59469a*/
  *((_QWORD *)v4 + 44) = &SetupAdvFollowPopup::`vftable'; /*0x5946a8*/
  *((_QWORD *)v4 + 51) = &SetupAdvFollowPopup::`vftable'; /*0x5946b6*/
  *((_QWORD *)v4 + 54) = &SetupAdvFollowPopup::`vftable'; /*0x5946c4*/
  *((_QWORD *)v4 + 68) = &SetupAdvFollowPopup::`vftable'; /*0x5946d2*/
  *((_QWORD *)v4 + 83) = &SetupAdvFollowPopup::`vftable'; /*0x5946e0*/
  *((_QWORD *)v4 + 84) = &SetupAdvFollowPopup::`vftable'; /*0x5946ee*/
  *((_QWORD *)v4 + 125) = &SetupAdvFollowPopup::`vftable'; /*0x5946fc*/
  if ( (unsigned __int8)sub_594750(v4, a1, a2) ) /*0x59470c*/
  {
    cocos2d::CCObject::autorelease(v4); /*0x594718*/
    return v4; /*0x59471e*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v4 + 8LL))(v4, 1); /*0x594739*/
    return 0; /*0x59473c*/
  }
}

// [3/5] Address: 0x598180
// Method: SetupAdvFollowPopup::onCustomToggleTriggerValue
struct cocos2d::CCObject *__fastcall SetupAdvFollowPopup_onCustomToggleTriggerValue(
        cocos2d::CCDictionary **a1,
        __int64 a2)
{
  int v3; // ebx
  struct cocos2d::CCObject *v4; // rax
  __int64 v5; // rdx
  struct cocos2d::CCObject *v6; // rax
  __int64 v7; // rdx
  struct cocos2d::CCObject *result; // rax
  __int64 v9; // rdx

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x59819e*/
  SetupTriggerPopup_updateValue(a1, 0x23Cu, (float)v3); /*0x5981a7*/
  v4 = cocos2d::CCDictionary::objectForKey(a1[97], 0); /*0x5981b5*/
  if ( v4 ) /*0x5981be*/
  {
    LOBYTE(v5) = v3 == 0; /*0x5981c5*/
    CCMenuItemToggler_toggle((__int64)v4, v5); /*0x5981c8*/
  }
  v6 = cocos2d::CCDictionary::objectForKey(a1[97], 1); /*0x5981d9*/
  if ( v6 ) /*0x5981e2*/
  {
    LOBYTE(v7) = v3 == 1; /*0x5981ea*/
    CCMenuItemToggler_toggle((__int64)v6, v7); /*0x5981ed*/
  }
  result = cocos2d::CCDictionary::objectForKey(a1[97], 2); /*0x5981fe*/
  if ( result ) /*0x598207*/
  {
    LOBYTE(v9) = v3 == 2; /*0x59820f*/
    return (struct cocos2d::CCObject *)CCMenuItemToggler_toggle((__int64)result, v9); /*0x598212*/
  }
  return result; /*0x598217*/
}

// [4/5] Address: 0x598260
// Method: SetupAdvFollowPopup::updateMode
unsigned int __fastcall SetupAdvFollowPopup_updateMode(__int64 a1, int a2)
{
  __int64 v3; // rsi
  unsigned int v4; // edi
  cocos2d::CCObject *v5; // rbx

  SetupTriggerPopup_updateValue((cocos2d::CCDictionary **)a1, 0x16Fu, (float)a2); /*0x59827e*/
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 504LL))(a1); /*0x598295*/
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL))(a1); /*0x5982a0*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 1104LL))(a1, 0); /*0x5982ac*/
  v5 = SetupAdvFollowPopup_create(*(_QWORD *)(a1 + 680), *(_QWORD *)(a1 + 688)); /*0x5982cb*/
  (*(void (__fastcall **)(__int64, cocos2d::CCObject *, _QWORD))(*(_QWORD *)v3 + 456LL))(v3, v5, v4); /*0x5982d8*/
  return SetupTriggerPopup_goToPage((__int64)v5, 1, 0); /*0x5982e6*/
}

// [5/5] Address: 0x598440
// Method: SetupAdvFollowPopup::selectPremadeClosed
void __fastcall SetupAdvFollowPopup_selectPremadeClosed(__int64 a1, __int64 a2, int a3)
{
  cocos2d::CCDictionary **v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // r8
  struct cocos2d::CCObject *v17; // rax
  cocos2d::CCDictionary **v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // r8
  struct cocos2d::CCObject *v22; // rax

  if ( a3 ) /*0x59844e*/
  {
    if ( a3 != 1 ) /*0x598bf2*/
      return; /*0x598bf2*/
    v3 = (cocos2d::CCDictionary **)(a1 - 1000); /*0x598bf8*/
    if ( cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 - 1000 + 752), 292) ) /*0x598c0b*/
      (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*v3 + 144))(v3, 292, 0); /*0x598c24*/
    else
      sub_60A5A0(v3, 292); /*0x598c2f*/
    sub_60ABF0(v3, 292); /*0x598c3f*/
    if ( cocos2d::CCDictionary::objectForKey(v3[94], 293) ) /*0x598c50*/
      (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*v3 + 144))(v3, 293, 0); /*0x598c69*/
    else
      sub_60A5A0(v3, 293); /*0x598c74*/
    sub_60ABF0(v3, 293); /*0x598c84*/
    if ( cocos2d::CCDictionary::objectForKey(v3[94], 298) ) /*0x598c95*/
    {
      LOBYTE(v19) = 1; /*0x598cb3*/
      (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, __int64))*v3 + 144))(v3, 298, v19); /*0x598cb6*/
    }
    else
    {
      sub_60A5A0(v3, 298); /*0x598cc1*/
    }
    sub_60ABF0(v3, 298); /*0x598cd1*/
    if ( cocos2d::CCDictionary::objectForKey(v3[94], 299) ) /*0x598ce2*/
      (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*v3 + 144))(v3, 299, 0); /*0x598cfb*/
    else
      sub_60A5A0(v3, 299); /*0x598d06*/
    sub_60ABF0(v3, 299); /*0x598d16*/
    if ( cocos2d::CCDictionary::objectForKey(v3[94], 334) ) /*0x598d27*/
    {
      LOBYTE(v20) = 1; /*0x598d45*/
      (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, __int64))*v3 + 144))(v3, 334, v20); /*0x598d48*/
    }
    else
    {
      sub_60A5A0(v3, 334); /*0x598d53*/
    }
    sub_60ABF0(v3, 334); /*0x598d63*/
    if ( cocos2d::CCDictionary::objectForKey(v3[94], 335) ) /*0x598d74*/
      (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*v3 + 144))(v3, 335, 0); /*0x598d8d*/
    else
      sub_60A5A0(v3, 335); /*0x598d98*/
    sub_60ABF0(v3, 335); /*0x598da8*/
    if ( cocos2d::CCDictionary::objectForKey(v3[94], 316) ) /*0x598db9*/
    {
      LOBYTE(v21) = 1; /*0x598dd7*/
      (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, __int64))*v3 + 144))(v3, 316, v21); /*0x598dda*/
    }
    else
    {
      sub_60A5A0(v3, 316); /*0x598de5*/
    }
    sub_60ABF0(v3, 316); /*0x598df5*/
    if ( cocos2d::CCDictionary::objectForKey(v3[94], 317) ) /*0x598e06*/
      (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*v3 + 144))(v3, 317, 0); /*0x598e1f*/
    else
      sub_60A5A0(v3, 317); /*0x598e2a*/
    sub_60ABF0(v3, 317); /*0x598e3a*/
    if ( cocos2d::CCDictionary::objectForKey(v3[94], 337) ) /*0x598e4b*/
      (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*v3 + 144))(v3, 337, 0); /*0x598e64*/
    else
      sub_60A5A0(v3, 337); /*0x598e6f*/
    sub_60ABF0(v3, 337); /*0x598e7f*/
    if ( cocos2d::CCDictionary::objectForKey(v3[94], 318) ) /*0x598e90*/
      (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*v3 + 144))(v3, 318, 0); /*0x598ea9*/
    else
      sub_60A5A0(v3, 318); /*0x598eb4*/
    sub_60ABF0(v3, 318); /*0x598ec4*/
    if ( cocos2d::CCDictionary::objectForKey(v3[94], 319) ) /*0x598ed5*/
      (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*v3 + 144))(v3, 319, 0); /*0x598eee*/
    else
      sub_60A5A0(v3, 319); /*0x598ef9*/
    sub_60ABF0(v3, 319); /*0x598f09*/
    if ( cocos2d::CCDictionary::objectForKey(v3[94], 322) ) /*0x598f1a*/
      (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*v3 + 144))(v3, 322, 0); /*0x598f33*/
    else
      sub_60A5A0(v3, 322); /*0x598f3e*/
    sub_60ABF0(v3, 322); /*0x598f4e*/
    if ( cocos2d::CCDictionary::objectForKey(v3[94], 323) ) /*0x598f5f*/
      (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*v3 + 144))(v3, 323, 0); /*0x598f78*/
    else
      sub_60A5A0(v3, 323); /*0x598f83*/
    sub_60ABF0(v3, 323); /*0x598f93*/
    if ( cocos2d::CCDictionary::objectForKey(v3[94], 338) ) /*0x598fa4*/
      (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*v3 + 144))(v3, 338, 0); /*0x598fbd*/
    else
      sub_60A5A0(v3, 338); /*0x598fc8*/
    sub_60ABF0(v3, 338); /*0x598fd8*/
    if ( cocos2d::CCDictionary::objectForKey(v3[94], 320) ) /*0x598fe9*/
      (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*v3 + 144))(v3, 320, 0); /*0x599002*/
    else
      sub_60A5A0(v3, 320); /*0x59900d*/
    sub_60ABF0(v3, 320); /*0x59901d*/
    if ( cocos2d::CCDictionary::objectForKey(v3[94], 321) ) /*0x59902e*/
      (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*v3 + 144))(v3, 321, 0); /*0x599047*/
    else
      sub_60A5A0(v3, 321); /*0x599052*/
    sub_60ABF0(v3, 321); /*0x599062*/
    if ( cocos2d::CCDictionary::objectForKey(v3[94], 324) ) /*0x599073*/
      (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*v3 + 144))(v3, 324, 0); /*0x59908c*/
    else
      sub_60A5A0(v3, 324); /*0x599097*/
    sub_60ABF0(v3, 324); /*0x5990a7*/
    if ( cocos2d::CCDictionary::objectForKey(v3[94], 325) ) /*0x5990b8*/
      (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*v3 + 144))(v3, 325, 0); /*0x5990d1*/
    else
      sub_60A5A0(v3, 325); /*0x5990dc*/
    sub_60ABF0(v3, 325); /*0x5990ec*/
    if ( cocos2d::CCDictionary::objectForKey(v3[94], 326) ) /*0x5990fd*/
      (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*v3 + 144))(v3, 326, 0); /*0x599116*/
    else
      sub_60A5A0(v3, 326); /*0x599121*/
    sub_60ABF0(v3, 326); /*0x599131*/
    if ( cocos2d::CCDictionary::objectForKey(v3[94], 327) ) /*0x599142*/
      (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*v3 + 144))(v3, 327, 0); /*0x59915b*/
    else
      sub_60A5A0(v3, 327); /*0x599166*/
    sub_60ABF0(v3, 327); /*0x599176*/
    if ( cocos2d::CCDictionary::objectForKey(v3[94], 328) ) /*0x599187*/
      (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*v3 + 144))(v3, 328, 0); /*0x5991a0*/
    else
      sub_60A5A0(v3, 328); /*0x5991ab*/
    sub_60ABF0(v3, 328); /*0x5991bb*/
    if ( cocos2d::CCDictionary::objectForKey(v3[94], 329) ) /*0x5991cc*/
      (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*v3 + 144))(v3, 329, 0); /*0x5991e5*/
    else
      sub_60A5A0(v3, 329); /*0x5991f0*/
    sub_60ABF0(v3, 329); /*0x599200*/
    if ( cocos2d::CCDictionary::objectForKey(v3[94], 330) ) /*0x599211*/
      (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*v3 + 144))(v3, 330, 0); /*0x59922a*/
    else
      sub_60A5A0(v3, 330); /*0x599235*/
    sub_60ABF0(v3, 330); /*0x599245*/
    if ( cocos2d::CCDictionary::objectForKey(v3[94], 331) ) /*0x599256*/
      (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*v3 + 144))(v3, 331, 0); /*0x59926f*/
    else
      sub_60A5A0(v3, 331); /*0x59927a*/
    sub_60ABF0(v3, 331); /*0x59928a*/
    if ( cocos2d::CCDictionary::objectForKey(v3[94], 332) ) /*0x59929b*/
      (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*v3 + 144))(v3, 332, 0); /*0x5992b4*/
    else
      sub_60A5A0(v3, 332); /*0x5992bf*/
    sub_60ABF0(v3, 332); /*0x5992cf*/
    v22 = cocos2d::CCDictionary::objectForKey(v3[94], 333); /*0x5992e0*/
    v18 = v3; /*0x5992eb*/
    if ( v22 ) /*0x5992f1*/
      goto LABEL_81; /*0x5992f1*/
LABEL_159:
    sub_60A5A0(v18, 333); /*0x599301*/
    goto LABEL_160; /*0x599304*/
  }
  v3 = (cocos2d::CCDictionary **)(a1 - 1000); /*0x598454*/
  if ( cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 - 1000 + 752), 339) ) /*0x598472*/
  {
    LOBYTE(v4) = 1; /*0x598491*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, __int64))*v3 + 144))(v3, 339, v4); /*0x598494*/
  }
  else
  {
    sub_60A5A0(v3, 339); /*0x5984a0*/
  }
  sub_60ABF0(v3, 339); /*0x5984b1*/
  if ( cocos2d::CCDictionary::objectForKey(v3[94], 292) ) /*0x5984c2*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*v3 + 144))(v3, 292, 0); /*0x5984db*/
  else
    sub_60A5A0(v3, 292); /*0x5984e6*/
  sub_60ABF0(v3, 292); /*0x5984f6*/
  if ( cocos2d::CCDictionary::objectForKey(v3[94], 293) ) /*0x598507*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*v3 + 144))(v3, 293, 0); /*0x598520*/
  else
    sub_60A5A0(v3, 293); /*0x59852b*/
  sub_60ABF0(v3, 293); /*0x59853b*/
  if ( cocos2d::CCDictionary::objectForKey(v3[94], 298) ) /*0x59854c*/
  {
    LOBYTE(v5) = 1; /*0x59856a*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, __int64))*v3 + 144))(v3, 298, v5); /*0x59856d*/
  }
  else
  {
    sub_60A5A0(v3, 298); /*0x598578*/
  }
  sub_60ABF0(v3, 298); /*0x598588*/
  if ( cocos2d::CCDictionary::objectForKey(v3[94], 299) ) /*0x598599*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*v3 + 144))(v3, 299, 0); /*0x5985b2*/
  else
    sub_60A5A0(v3, 299); /*0x5985bd*/
  sub_60ABF0(v3, 299); /*0x5985cd*/
  if ( cocos2d::CCDictionary::objectForKey(v3[94], 334) ) /*0x5985de*/
  {
    LOBYTE(v6) = 1; /*0x5985fc*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, __int64))*v3 + 144))(v3, 334, v6); /*0x5985ff*/
  }
  else
  {
    sub_60A5A0(v3, 334); /*0x59860a*/
  }
  sub_60ABF0(v3, 334); /*0x59861a*/
  if ( cocos2d::CCDictionary::objectForKey(v3[94], 335) ) /*0x59862b*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*v3 + 144))(v3, 335, 0); /*0x598644*/
  else
    sub_60A5A0(v3, 335); /*0x59864f*/
  sub_60ABF0(v3, 335); /*0x59865f*/
  if ( cocos2d::CCDictionary::objectForKey(v3[94], 316) ) /*0x598670*/
  {
    LOBYTE(v7) = 1; /*0x59868e*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, __int64))*v3 + 144))(v3, 316, v7); /*0x598691*/
  }
  else
  {
    sub_60A5A0(v3, 316); /*0x59869c*/
  }
  sub_60ABF0(v3, 316); /*0x5986ac*/
  if ( cocos2d::CCDictionary::objectForKey(v3[94], 317) ) /*0x5986bd*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*v3 + 144))(v3, 317, 0); /*0x5986d6*/
  else
    sub_60A5A0(v3, 317); /*0x5986e1*/
  sub_60ABF0(v3, 317); /*0x5986f1*/
  if ( cocos2d::CCDictionary::objectForKey(v3[94], 337) ) /*0x598702*/
  {
    LOBYTE(v8) = 1; /*0x598718*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, __int64))*v3 + 144))(v3, 337, v8); /*0x59871b*/
  }
  else
  {
    sub_60A5A0(v3, 337); /*0x598727*/
  }
  sub_60ABF0(v3, 337); /*0x598738*/
  if ( cocos2d::CCDictionary::objectForKey(v3[94], 318) ) /*0x598749*/
  {
    LOBYTE(v9) = 1; /*0x59875f*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, __int64))*v3 + 144))(v3, 318, v9); /*0x598762*/
  }
  else
  {
    sub_60A5A0(v3, 318); /*0x59876d*/
  }
  sub_60ABF0(v3, 318); /*0x59877d*/
  if ( cocos2d::CCDictionary::objectForKey(v3[94], 319) ) /*0x59878e*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*v3 + 144))(v3, 319, 0); /*0x5987a7*/
  else
    sub_60A5A0(v3, 319); /*0x5987b2*/
  sub_60ABF0(v3, 319); /*0x5987c2*/
  if ( cocos2d::CCDictionary::objectForKey(v3[94], 322) ) /*0x5987d3*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*v3 + 144))(v3, 322, 0); /*0x5987ec*/
  else
    sub_60A5A0(v3, 322); /*0x5987f7*/
  sub_60ABF0(v3, 322); /*0x598807*/
  if ( cocos2d::CCDictionary::objectForKey(v3[94], 323) ) /*0x598818*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*v3 + 144))(v3, 323, 0); /*0x598831*/
  else
    sub_60A5A0(v3, 323); /*0x59883c*/
  sub_60ABF0(v3, 323); /*0x59884c*/
  if ( cocos2d::CCDictionary::objectForKey(v3[94], 338) ) /*0x59885d*/
  {
    LOBYTE(v10) = 1; /*0x598873*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, __int64))*v3 + 144))(v3, 338, v10); /*0x598876*/
  }
  else
  {
    sub_60A5A0(v3, 338); /*0x598882*/
  }
  sub_60ABF0(v3, 338); /*0x598893*/
  if ( cocos2d::CCDictionary::objectForKey(v3[94], 320) ) /*0x5988a4*/
  {
    LOBYTE(v11) = 1; /*0x5988c8*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, __int64))*v3 + 144))(v3, 320, v11); /*0x5988cb*/
  }
  else
  {
    sub_60A5A0(v3, 320); /*0x5988d6*/
  }
  sub_60ABF0(v3, 320); /*0x5988e6*/
  if ( cocos2d::CCDictionary::objectForKey(v3[94], 321) ) /*0x5988f7*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*v3 + 144))(v3, 321, 0); /*0x598910*/
  else
    sub_60A5A0(v3, 321); /*0x59891b*/
  sub_60ABF0(v3, 321); /*0x59892b*/
  if ( cocos2d::CCDictionary::objectForKey(v3[94], 324) ) /*0x59893c*/
  {
    LOBYTE(v12) = 1; /*0x59895a*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, __int64))*v3 + 144))(v3, 324, v12); /*0x59895d*/
  }
  else
  {
    sub_60A5A0(v3, 324); /*0x598968*/
  }
  sub_60ABF0(v3, 324); /*0x598978*/
  if ( cocos2d::CCDictionary::objectForKey(v3[94], 325) ) /*0x598989*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*v3 + 144))(v3, 325, 0); /*0x5989a2*/
  else
    sub_60A5A0(v3, 325); /*0x5989ad*/
  sub_60ABF0(v3, 325); /*0x5989bd*/
  if ( cocos2d::CCDictionary::objectForKey(v3[94], 326) ) /*0x5989ce*/
  {
    LOBYTE(v13) = 1; /*0x5989e4*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, __int64))*v3 + 144))(v3, 326, v13); /*0x5989e7*/
  }
  else
  {
    sub_60A5A0(v3, 326); /*0x5989f2*/
  }
  sub_60ABF0(v3, 326); /*0x598a02*/
  if ( cocos2d::CCDictionary::objectForKey(v3[94], 327) ) /*0x598a13*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*v3 + 144))(v3, 327, 0); /*0x598a2c*/
  else
    sub_60A5A0(v3, 327); /*0x598a37*/
  sub_60ABF0(v3, 327); /*0x598a47*/
  if ( cocos2d::CCDictionary::objectForKey(v3[94], 328) ) /*0x598a58*/
  {
    LOBYTE(v14) = 1; /*0x598a76*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, __int64))*v3 + 144))(v3, 328, v14); /*0x598a79*/
  }
  else
  {
    sub_60A5A0(v3, 328); /*0x598a84*/
  }
  sub_60ABF0(v3, 328); /*0x598a94*/
  if ( cocos2d::CCDictionary::objectForKey(v3[94], 329) ) /*0x598aa5*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*v3 + 144))(v3, 329, 0); /*0x598abe*/
  else
    sub_60A5A0(v3, 329); /*0x598ac9*/
  sub_60ABF0(v3, 329); /*0x598ad9*/
  if ( cocos2d::CCDictionary::objectForKey(v3[94], 330) ) /*0x598aea*/
  {
    LOBYTE(v15) = 1; /*0x598b08*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, __int64))*v3 + 144))(v3, 330, v15); /*0x598b0b*/
  }
  else
  {
    sub_60A5A0(v3, 330); /*0x598b16*/
  }
  sub_60ABF0(v3, 330); /*0x598b26*/
  if ( cocos2d::CCDictionary::objectForKey(v3[94], 331) ) /*0x598b37*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*v3 + 144))(v3, 331, 0); /*0x598b50*/
  else
    sub_60A5A0(v3, 331); /*0x598b5b*/
  sub_60ABF0(v3, 331); /*0x598b6b*/
  if ( cocos2d::CCDictionary::objectForKey(v3[94], 332) ) /*0x598b7c*/
  {
    LOBYTE(v16) = 1; /*0x598b92*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, __int64))*v3 + 144))(v3, 332, v16); /*0x598b95*/
  }
  else
  {
    sub_60A5A0(v3, 332); /*0x598ba0*/
  }
  sub_60ABF0(v3, 332); /*0x598bb0*/
  v17 = cocos2d::CCDictionary::objectForKey(v3[94], 333); /*0x598bc1*/
  v18 = v3; /*0x598bd1*/
  if ( !v17 ) /*0x598bd7*/
    goto LABEL_159; /*0x598bd7*/
LABEL_81:
  (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, _QWORD))*v3 + 144))(v18, 333, 0); /*0x598bdd*/
LABEL_160:
  sub_60ABF0(v3, 333); /*0x599309*/
  SetupAdvFollowPopup_updateMode((__int64)v3, 2); /*0x599321*/
}
