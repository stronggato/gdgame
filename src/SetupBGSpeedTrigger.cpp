#include <Geode/binding/SetupBGSpeedTrigger.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x5b78e0
// Method: SetupBGSpeedTrigger::~SetupBGSpeedTrigger
cocos2d::CCNode *__fastcall SetupBGSpeedTrigger__dtor_SetupBGSpeedTrigger(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &SetupBGSpeedTrigger::`vftable'; /*0x5b78f3*/
  *((_QWORD *)Block + 40) = &SetupBGSpeedTrigger::`vftable'; /*0x5b7900*/
  *((_QWORD *)Block + 41) = &SetupBGSpeedTrigger::`vftable'; /*0x5b790e*/
  *((_QWORD *)Block + 42) = &SetupBGSpeedTrigger::`vftable'; /*0x5b791c*/
  *((_QWORD *)Block + 43) = &SetupBGSpeedTrigger::`vftable'; /*0x5b792a*/
  *((_QWORD *)Block + 44) = &SetupBGSpeedTrigger::`vftable'; /*0x5b7938*/
  *((_QWORD *)Block + 51) = &SetupBGSpeedTrigger::`vftable'; /*0x5b7946*/
  *((_QWORD *)Block + 54) = &SetupBGSpeedTrigger::`vftable'; /*0x5b7954*/
  *((_QWORD *)Block + 68) = &SetupBGSpeedTrigger::`vftable'; /*0x5b7962*/
  *((_QWORD *)Block + 83) = &SetupBGSpeedTrigger::`vftable'; /*0x5b7970*/
  *((_QWORD *)Block + 84) = &SetupBGSpeedTrigger::`vftable'; /*0x5b797e*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x5b7985*/
  if ( (a2 & 1) != 0 ) /*0x5b798d*/
    j_j_free(Block); /*0x5b7997*/
  return Block; /*0x5b799c*/
}

// [2/3] Address: 0x5b9250
// Method: SetupBGSpeedTrigger::create
// Hidden C++ exception states: #wind=1
cocos2d::CCObject *__fastcall SetupBGSpeedTrigger_create(__int64 a1, __int64 a2, unsigned int a3)
{
  cocos2d::CCObject *v6; // r14

  v6 = (cocos2d::CCObject *)operator new(0x3E8u); /*0x5b9278*/
  SetupTriggerPopup_SetupTriggerPopup((__int64)v6); /*0x5b9283*/
  *(_QWORD *)v6 = &SetupBGSpeedTrigger::`vftable'; /*0x5b928f*/
  *((_QWORD *)v6 + 40) = &SetupBGSpeedTrigger::`vftable'; /*0x5b9299*/
  *((_QWORD *)v6 + 41) = &SetupBGSpeedTrigger::`vftable'; /*0x5b92a7*/
  *((_QWORD *)v6 + 42) = &SetupBGSpeedTrigger::`vftable'; /*0x5b92b5*/
  *((_QWORD *)v6 + 43) = &SetupBGSpeedTrigger::`vftable'; /*0x5b92c3*/
  *((_QWORD *)v6 + 44) = &SetupBGSpeedTrigger::`vftable'; /*0x5b92d1*/
  *((_QWORD *)v6 + 51) = &SetupBGSpeedTrigger::`vftable'; /*0x5b92df*/
  *((_QWORD *)v6 + 54) = &SetupBGSpeedTrigger::`vftable'; /*0x5b92ed*/
  *((_QWORD *)v6 + 68) = &SetupBGSpeedTrigger::`vftable'; /*0x5b92fb*/
  *((_QWORD *)v6 + 83) = &SetupBGSpeedTrigger::`vftable'; /*0x5b9309*/
  *((_QWORD *)v6 + 84) = &SetupBGSpeedTrigger::`vftable'; /*0x5b9317*/
  if ( (unsigned __int8)SetupBGSpeedTrigger_init(v6, a1, a2, a3) ) /*0x5b932a*/
  {
    cocos2d::CCObject::autorelease(v6); /*0x5b9336*/
    return v6; /*0x5b933c*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v6 + 8LL))(v6, 1); /*0x5b9349*/
    return 0; /*0x5b934c*/
  }
}

// [3/3] Address: 0x5b9370
// Method: SetupBGSpeedTrigger::init
// Hidden C++ exception states: #wind=4
char __fastcall SetupBGSpeedTrigger_init(_BYTE *a1, int a2, int a3, int a4)
{
  char result; // al
  __int64 v7; // rcx
  __int64 v8; // rax
  const char *v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  void **v15; // r12
  char *v16; // r15
  unsigned __int64 v17; // r13
  __int64 v18; // rdi
  unsigned __int64 v19; // rsi
  void *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  void *v23; // rcx
  char *v24; // rax
  __int128 v25; // [rsp+80h] [rbp-80h] BYREF
  __int64 v26; // [rsp+90h] [rbp-70h]
  __int64 v27; // [rsp+98h] [rbp-68h]
  int v28; // [rsp+A0h] [rbp-60h] BYREF
  __int128 *v29; // [rsp+A8h] [rbp-58h] BYREF
  float v30[2]; // [rsp+B0h] [rbp-50h] BYREF
  char v31[8]; // [rsp+B8h] [rbp-48h] BYREF
  __int128 *v32; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v33; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v34; // [rsp+D8h] [rbp-28h]
  __int64 v35; // [rsp+E0h] [rbp-20h]
  void *Block[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v37; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v38; // [rsp+100h] [rbp+0h]
  void *Src[2]; // [rsp+108h] [rbp+8h] BYREF
  unsigned __int64 v40; // [rsp+118h] [rbp+18h]
  unsigned __int64 v41; // [rsp+120h] [rbp+20h]

  v28 = a4; /*0x5b93a9*/
  result = sub_6060E0((_DWORD)a1, a2, a3, a4, 1131413504, 1, 0); /*0x5b93d8*/
  if ( result )
  {
    a1[744] = 1; /*0x5b93e5*/
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 1096LL))(a1); /*0x5b93f3*/
    v8 = cocos2d::CCDirector::sharedDirector(v7); /*0x5b93f9*/
    cocos2d::CCDirector::getWinSize(v8, v30); /*0x5b9406*/
    v9 = "Change BG Speed"; /*0x5b9413*/
    if ( a4 == 3612 ) /*0x5b9420*/
      v9 = "Change MG Speed"; /*0x5b9420*/
    *(_OWORD *)Src = 0; /*0x5b9427*/
    v40 = 0; /*0x5b942d*/
    v41 = 0; /*0x5b9431*/
    v10 = -1; /*0x5b9435*/
    v11 = -1; /*0x5b943c*/
    do /*0x5b9443*/
      ++v11; /*0x5b9440*/
    while ( v9[v11] ); /*0x5b9443*/
    sub_3C230(Src); /*0x5b944d*/
    *(_OWORD *)Block = 0; /*0x5b9456*/
    v37 = 0; /*0x5b945a*/
    v38 = 0; /*0x5b945e*/
    v15 = Src; /*0x5b9462*/
    v16 = (char *)Src[0]; /*0x5b9466*/
    v17 = v41; /*0x5b946a*/
    if ( v41 > 0xF ) /*0x5b9472*/
      v15 = (void **)Src[0]; /*0x5b9472*/
    v18 = 0x7FFFFFFFFFFFFFFFLL; /*0x5b9476*/
    v19 = v40; /*0x5b9480*/
    if ( v40 > 0x7FFFFFFFFFFFFFFFLL ) /*0x5b9487*/
      sub_8D90(v13, v12, v14); /*0x5b991b*/
    if ( v40 > 0xF ) /*0x5b9491*/
    {
      if ( (v40 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x5b94b4*/
      {
        v18 = v40 | 0xF; /*0x5b94b6*/
        if ( (v40 | 0xF) < 0x16 ) /*0x5b94c1*/
          v18 = 22; /*0x5b94c1*/
      }
      Block[0] = (void *)sub_3C460(v18 + 1); /*0x5b94ce*/
      v37 = v19; /*0x5b94d2*/
      v38 = v18; /*0x5b94d6*/
      memcpy(Block[0], v15, v19 + 1); /*0x5b94e4*/
    }
    else
    {
      v37 = v40; /*0x5b9493*/
      v38 = 15; /*0x5b9497*/
      *(_OWORD *)Block = *(_OWORD *)v15; /*0x5b94a4*/
    }
    sub_606E80(a1, Block); /*0x5b94f0*/
    v25 = 0; /*0x5b94f8*/
    v26 = 2; /*0x5b94fc*/
    v27 = 15; /*0x5b9504*/
    strcpy((char *)&v25, "OK"); /*0x5b9511*/
    SetupTriggerPopup_addCloseButton((__int64)a1, (__int64 *)&v25); /*0x5b9520*/
    *(_OWORD *)Block = 0; /*0x5b9528*/
    v37 = 0; /*0x5b952e*/
    v38 = 15; /*0x5b9532*/
    LOBYTE(Block[0]) = 0; /*0x5b953a*/
    v20 = (void *)sub_3C460(112); /*0x5b9543*/
    v38 = 111; /*0x5b954b*/
    Block[0] = v20; /*0x5b9553*/
    if ( v28 == 3612 )
    {
      v37 = 103; /*0x5b9560*/
      strcpy(
        (char *)v20,
        "Lets you change the speed of the <cg>middle ground</c> during gameplay movement. Default X: 0.3, Y: 0.5");
    }
    else
    {
      v37 = 100; /*0x5b95cd*/
      strcpy(
        (char *)v20,
        "Lets you change the speed of the <cg>background</c> during gameplay movement. Default X: 0.1, Y: 0.1");
    }
    v29 = &v33; /*0x5b9627*/
    v33 = 0; /*0x5b962e*/
    v34 = 0; /*0x5b9632*/
    v35 = 0; /*0x5b9636*/
    do /*0x5b9643*/
      ++v10; /*0x5b9640*/
    while ( *((_BYTE *)v20 + v10) ); /*0x5b9643*/
    sub_3C230(&v33); /*0x5b9650*/
    v25 = 0; /*0x5b9659*/
    v26 = 4; /*0x5b965d*/
    v27 = 15; /*0x5b9665*/
    strcpy((char *)&v25, "Help"); /*0x5b966d*/
    sub_6070A0(a1, &v25, &v33); /*0x5b968e*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v31, v30[0] * 0.5, v30[1] * 0.5); /*0x5b96b1*/
    v29 = &v25; /*0x5b96bb*/
    v25 = 0; /*0x5b96c2*/
    v26 = 6; /*0x5b96c6*/
    v27 = 15; /*0x5b96ce*/
    strcpy((char *)&v25, "Mod X:"); /*0x5b96dc*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v32, 0.0, 60.0); /*0x5b96fe*/
    cocos2d::CCPoint::operator+(v31, &v28, v21); /*0x5b970f*/
    sub_6088F0( /*0x5b9774*/
      (_DWORD)a1,
      143,
      (unsigned int)&v25,
      (unsigned int)&v28,
      1061997773,
      0,
      1,
      10,
      0,
      0,
      1065353216,
      0,
      0,
      0,
      2,
      0);
    v32 = &v25; /*0x5b977d*/
    v25 = 0; /*0x5b9784*/
    v26 = 6; /*0x5b9788*/
    v27 = 15; /*0x5b9790*/
    strcpy((char *)&v25, "Mod Y:"); /*0x5b979e*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v29, 0.0, -10.0); /*0x5b97c0*/
    cocos2d::CCPoint::operator+(v31, &v28, v22); /*0x5b97d1*/
    sub_6088F0( /*0x5b982e*/
      (_DWORD)a1,
      144,
      (unsigned int)&v25,
      (unsigned int)&v28,
      1061997773,
      0,
      1,
      10,
      0,
      0,
      1065353216,
      0,
      0,
      0,
      2,
      0);
    sub_607360(a1); /*0x5b9836*/
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 1136LL))(a1); /*0x5b9841*/
    a1[744] = 0; /*0x5b9847*/
    if ( v38 > 0xF ) /*0x5b9857*/
    {
      v23 = Block[0]; /*0x5b985c*/
      if ( v38 + 1 >= 0x1000 ) /*0x5b986a*/
      {
        v23 = (void *)*((_QWORD *)Block[0] - 1); /*0x5b9870*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v23 - 8) > 0x1F ) /*0x5b987f*/
          invoke_watson(0, 0, 0, 0, 0); /*0x5b9890*/
      }
      j_j_free(v23); /*0x5b9897*/
    }
    if ( v17 > 0xF ) /*0x5b98a1*/
    {
      v24 = v16; /*0x5b98a7*/
      if ( v17 + 1 >= 0x1000 ) /*0x5b98b1*/
      {
        v16 = (char *)*((_QWORD *)v16 - 1); /*0x5b98b7*/
        if ( (unsigned __int64)(v24 - v16 - 8) > 0x1F ) /*0x5b98c6*/
          invoke_watson(0, 0, 0, 0, 0); /*0x5b98d7*/
      }
      j_j_free(v16); /*0x5b98e1*/
    }
    return 1; /*0x5b98e6*/
  }
  return result; /*0x5b98e8*/
}
