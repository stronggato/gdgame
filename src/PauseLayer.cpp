#include <Geode/binding/PauseLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/21] Address: 0xe85b0
// Method: PauseLayer::goEdit
// Hidden C++ exception states: #wind=1
void __fastcall PauseLayer_goEdit(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rcx
  void *v4; // [rsp+30h] [rbp+8h]

  if ( *(_BYTE *)(a1 + 808) ) /*0xe85bd*/
  {
    if ( *(_QWORD *)(a1 + 856) ) /*0xe85c6*/
    {
      v2 = (_QWORD *)(a1 + 840); /*0xe85d0*/
      if ( *(_QWORD *)(a1 + 864) > 0xFu ) /*0xe85dc*/
        v2 = (_QWORD *)*v2; /*0xe85de*/
      v3 = *(_QWORD *)&qword_905FB0; /*0xe85e1*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0xe85eb*/
      {
        v4 = operator new(0x690u); /*0xe85f7*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v4); /*0xe8605*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xe8616*/
        v3 = *(_QWORD *)&qword_905FB0; /*0xe8619*/
      }
      sub_21EF80(v3, v2); /*0xe8623*/
    }
    sub_C1780(a1, *(unsigned int *)(a1 + 680)); /*0xe8631*/
  }
}

// [2/21] Address: 0x17fd10
// Method: PauseLayer::musicSliderChanged
// Hidden C++ exception states: #wind=1
__int64 __fastcall PauseLayer_musicSliderChanged(__int64 a1, __int64 a2)
{
  float Value; // xmm6_4
  __int64 result; // rax
  __int64 v4; // rcx
  void *v5; // [rsp+48h] [rbp+10h]

  Value = SliderThumb_getValue(a2); /*0x17fd21*/
  if ( Value < 0.029999999 ) /*0x17fd2f*/
    Value = 0.0; /*0x17fd31*/
  result = qword_905F60; /*0x17fd34*/
  if ( !qword_905F60 ) /*0x17fd3e*/
  {
    v5 = operator new(0x8A8u); /*0x17fd4a*/
    qword_905F60 = sub_5AE20(v5); /*0x17fd58*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x17fd69*/
    result = qword_905F60; /*0x17fd6b*/
  }
  *(_DWORD *)(result + 524) = 0; /*0x17fd72*/
  *(float *)(result + 512) = Value; /*0x17fd7c*/
  v4 = *(_QWORD *)(result + 552); /*0x17fd84*/
  if ( v4 ) /*0x17fd8e*/
    return FMOD::ChannelControl::setVolume(v4); /*0x17fd93*/
  return result; /*0x17fd99*/
}

// [3/21] Address: 0x17fdb0
// Method: PauseLayer::sfxSliderChanged
// Hidden C++ exception states: #wind=1
void __fastcall PauseLayer_sfxSliderChanged(__int64 a1, __int64 a2)
{
  float Value; // xmm6_4
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  void *v6; // [rsp+48h] [rbp+10h]

  Value = SliderThumb_getValue(a2); /*0x17fdc3*/
  if ( Value < 0.029999999 ) /*0x17fdd1*/
    Value = 0.0; /*0x17fdd3*/
  v3 = qword_905F60; /*0x17fdd6*/
  if ( !qword_905F60 ) /*0x17fde0*/
  {
    v6 = operator new(0x8A8u); /*0x17fdec*/
    qword_905F60 = sub_5AE20(v6); /*0x17fdfa*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x17fe0b*/
    v3 = qword_905F60; /*0x17fe0d*/
  }
  *(float *)(v3 + 516) = Value; /*0x17fe14*/
  v4 = *(_QWORD *)(v3 + 584); /*0x17fe1c*/
  if ( v4 ) /*0x17fe26*/
    FMOD::ChannelControl::setVolume(v4); /*0x17fe2b*/
  v5 = *(_QWORD *)(v3 + 600); /*0x17fe31*/
  if ( v5 ) /*0x17fe3b*/
    FMOD::ChannelControl::setVolume(v5); /*0x17fe40*/
}

// [4/21] Address: 0x4d2410
// Method: PauseLayer::~PauseLayer
char *__fastcall PauseLayer__dtor_PauseLayer(char *Block, char a2)
{
  char *v4; // rdi
  __int64 v5; // rax
  void *v6; // rax
  cocos2d::CCObject *v7; // rcx

  *(_QWORD *)Block = &PauseLayer::`vftable'; /*0x4d242b*/
  *((_QWORD *)Block + 40) = &PauseLayer::`vftable'; /*0x4d2435*/
  *((_QWORD *)Block + 41) = &PauseLayer::`vftable'; /*0x4d2443*/
  *((_QWORD *)Block + 42) = &PauseLayer::`vftable'; /*0x4d2451*/
  *((_QWORD *)Block + 43) = &PauseLayer::`vftable'; /*0x4d245f*/
  *((_QWORD *)Block + 44) = &PauseLayer::`vftable'; /*0x4d246d*/
  *((_QWORD *)Block + 51) = &PauseLayer::`vftable'; /*0x4d247b*/
  *((_QWORD *)Block + 54) = &PauseLayer::`vftable'; /*0x4d2489*/
  *((_QWORD *)Block + 69) = &PauseLayer::`vftable'; /*0x4d2497*/
  *((_QWORD *)Block + 70) = &PauseLayer::`vftable'; /*0x4d24a5*/
  *((_QWORD *)Block + 71) = &PauseLayer::`vftable'; /*0x4d24b3*/
  v4 = Block + 576; /*0x4d24ba*/
  *((_QWORD *)Block + 72) = &PauseLayer::`vftable'; /*0x4d24c8*/
  v5 = qword_905FD0; /*0x4d24cb*/
  if ( !qword_905FD0 ) /*0x4d24d5*/
  {
    v6 = operator new(0x6E8u); /*0x4d24dc*/
    qword_905FD0 = sub_2723A0(v6); /*0x4d24e9*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4d24fa*/
    v5 = qword_905FD0; /*0x4d24fc*/
  }
  if ( *(char **)(v5 + 984) == v4 ) /*0x4d250a*/
    *(_QWORD *)(v5 + 984) = 0; /*0x4d250c*/
  v7 = (cocos2d::CCObject *)*((_QWORD *)Block + 76); /*0x4d2517*/
  if ( v7 ) /*0x4d2521*/
    cocos2d::CCObject::release(v7); /*0x4d2523*/
  CCBlockLayer__dtor_CCBlockLayer(Block); /*0x4d252c*/
  if ( (a2 & 1) != 0 ) /*0x4d2536*/
    j_j_free(Block); /*0x4d2540*/
  return Block; /*0x4d2548*/
}

// [5/21] Address: 0x4d2630
// Method: PauseLayer::volumeChanged
void __fastcall PauseLayer_volumeChanged(__int64 a1)
{
  void *v2; // [rsp+30h] [rbp+8h]
  void *v3; // [rsp+30h] [rbp+8h]

  if ( *(_QWORD *)(a1 + 64) ) /*0x4d2639*/
  {
    if ( !qword_905F60 ) /*0x4d264a*/
    {
      v2 = operator new(0x8A8u); /*0x4d2656*/
      qword_905F60 = sub_5AE20(v2); /*0x4d2664*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x4d2675*/
    }
    sub_83840(*(_QWORD *)(a1 + 64)); /*0x4d268a*/
  }
  if ( *(_QWORD *)(a1 + 72) ) /*0x4d268f*/
  {
    if ( !qword_905F60 ) /*0x4d26a0*/
    {
      v3 = operator new(0x8A8u); /*0x4d26ac*/
      qword_905F60 = sub_5AE20(v3); /*0x4d26ba*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x4d26cb*/
    }
    sub_83840(*(_QWORD *)(a1 + 72)); /*0x4d26e5*/
  }
}

// [7/21] Address: 0x4d5060
// Method: PauseLayer::startPosSelected
__int64 __fastcall PauseLayer_startPosSelected(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rcx

  v3 = a1 - 560; /*0x4d5060*/
  *(_DWORD *)(v3 + 600) = a3; /*0x4d5069*/
  return sub_4D5160(v3, 0);
}

// [8/21] Address: 0x4d5080
// Method: PauseLayer::createStartPosPopupClosed
// Hidden C++ exception states: #wind=1
__int64 __fastcall PauseLayer_createStartPosPopupClosed(__int64 a1)
{
  unsigned int v2; // ebx
  struct cocos2d::CCObject *v3; // rsi
  cocos2d::CCArray *v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // edx
  cocos2d::CCObject *v7; // rcx
  __int64 v8; // rcx
  cocos2d::CCObject *v9; // rax
  char v10; // bl
  __int64 result; // rax
  void *v12; // [rsp+30h] [rbp+8h]

  v2 = 0; /*0x4d5092*/
  v3 = 0; /*0x4d5094*/
  if ( *(int *)(a1 + 32) > 0 ) /*0x4d5099*/
  {
    v4 = *(cocos2d::CCArray **)(a1 + 40); /*0x4d509b*/
    if ( v4 ) /*0x4d50a2*/
    {
      v5 = cocos2d::CCArray::count(v4); /*0x4d50a4*/
      v6 = *(_DWORD *)(a1 + 32); /*0x4d50aa*/
      if ( v6 <= v5 ) /*0x4d50af*/
        v3 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 40), v6 - 1); /*0x4d50bd*/
    }
  }
  v7 = *(cocos2d::CCObject **)(a1 + 40); /*0x4d50c0*/
  if ( v7 ) /*0x4d50c7*/
    cocos2d::CCObject::release(v7); /*0x4d50c9*/
  v8 = qword_905FD0; /*0x4d50cf*/
  if ( !qword_905FD0 ) /*0x4d50d9*/
  {
    v12 = operator new(0x6E8u); /*0x4d50e5*/
    qword_905FD0 = sub_2723A0(v12); /*0x4d50f5*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4d50ff*/
    v8 = qword_905FD0; /*0x4d5102*/
  }
  v9 = (cocos2d::CCObject *)sub_3157A0(*(_QWORD *)(v8 + 560)); /*0x4d5110*/
  *(_QWORD *)(a1 + 40) = v9; /*0x4d5115*/
  cocos2d::CCObject::retain(v9); /*0x4d511c*/
  if ( v3 ) /*0x4d5125*/
    v2 = cocos2d::CCArray::indexOfObject(*(cocos2d::CCArray **)(a1 + 40), v3) + 1; /*0x4d5134*/
  *(_DWORD *)(a1 + 32) = v2; /*0x4d5137*/
  v10 = *(_BYTE *)(a1 + 48); /*0x4d513a*/
  result = sub_4D5160(a1 - 568, 0); /*0x4d5147*/
  *(_BYTE *)(a1 + 48) = v10; /*0x4d514c*/
  return result; /*0x4d514f*/
}

// [9/21] Address: 0x4d6480
// Method: PauseLayer::onPracticeMode
// Hidden C++ exception states: #wind=4
__int64 __fastcall PauseLayer_onPracticeMode(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // rdx
  void *v6; // [rsp+40h] [rbp+18h]

  v2 = qword_905FD0; /*0x4d648d*/
  if ( !qword_905FD0 ) /*0x4d6497*/
  {
    v6 = operator new(0x6E8u); /*0x4d64a3*/
    qword_905FD0 = sub_2723A0(v6); /*0x4d64b1*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4d64c2*/
    v2 = qword_905FD0; /*0x4d64c4*/
  }
  *(_BYTE *)(v2 + 962) = 1; /*0x4d64cb*/
  v3 = *(_QWORD *)(v2 + 560); /*0x4d64d2*/
  if ( *(_BYTE *)(v3 + 13088) != 1 ) /*0x4d64e0*/
  {
    sub_513570(v3); /*0x4d64e5*/
    *(_BYTE *)(v3 + 13088) = 1; /*0x4d64ea*/
    sub_5014C0(v3); /*0x4d64f4*/
    LOBYTE(v4) = 1; /*0x4d64f9*/
    UILayer_toggleCheckpointsMenu(*(_QWORD *)(v3 + 13952), v4); /*0x4d6502*/
    if ( !*(_BYTE *)(v3 + 13089) ) /*0x4d6507*/
      sub_515470(); /*0x4d6510*/
    if ( *(_BYTE *)(v3 + 13088) ) /*0x4d6515*/
      cocos2d::CCNode::stopActionByTag((cocos2d::CCNode *)v3, 31); /*0x4d6526*/
  }
  return PauseLayer_onResume(a1, 0); /*0x4d6531*/
}

// [10/21] Address: 0x4d6540
// Method: PauseLayer::onNormalMode
// Hidden C++ exception states: #wind=3
__int64 __fastcall PauseLayer_onNormalMode(__int64 a1)
{
  __int64 v2; // rcx
  void *v4; // [rsp+40h] [rbp+18h]

  v2 = qword_905FD0; /*0x4d6549*/
  if ( !qword_905FD0 ) /*0x4d6553*/
  {
    v4 = operator new(0x6E8u); /*0x4d655f*/
    qword_905FD0 = sub_2723A0(v4); /*0x4d656d*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4d657e*/
    v2 = qword_905FD0; /*0x4d6580*/
  }
  sub_5153A0(*(_QWORD *)(v2 + 560), 0); /*0x4d6590*/
  return PauseLayer_onResume(a1, 0); /*0x4d659a*/
}

// [11/21] Address: 0x4d65b0
// Method: PauseLayer::onResume
// Hidden C++ exception states: #wind=3
void __fastcall PauseLayer_onResume(struct cocos2d::CCObject *a1)
{
  __int64 v2; // rcx
  cocos2d::CCObject *v3; // rdi
  char v4; // si
  __int64 v5; // rax
  cocos2d::CCTouchDispatcher *v6; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rbx
  cocos2d::CCObject *v9; // rcx
  __int64 v10; // rdx
  void *v11; // [rsp+30h] [rbp+8h]
  void *v12; // [rsp+30h] [rbp+8h]
  void *v13; // [rsp+30h] [rbp+8h]

  v3 = (cocos2d::CCObject *)sub_4D4D30(); /*0x4d65c7*/
  if ( !*((_BYTE *)a1 + 616) ) /*0x4d65ca*/
    goto LABEL_6; /*0x4d65ca*/
  if ( !qword_905FD0 ) /*0x4d65db*/
  {
    v11 = operator new(0x6E8u); /*0x4d65e7*/
    qword_905FD0 = sub_2723A0(v11); /*0x4d65f5*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4d6606*/
  }
  v2 = *(_QWORD *)(qword_905FD0 + 560); /*0x4d660f*/
  if ( v3 == *(cocos2d::CCObject **)(v2 + 12976) ) /*0x4d661d*/
LABEL_6:
    v4 = 0; /*0x4d6624*/
  else
    v4 = 1; /*0x4d661f*/
  if ( *((_BYTE *)a1 + 545) ) /*0x4d6627*/
  {
    *((_BYTE *)a1 + 545) = 0; /*0x4d6630*/
    v5 = cocos2d::CCDirector::sharedDirector(v2); /*0x4d6637*/
    v6 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 144LL))(v5); /*0x4d664a*/
    cocos2d::CCTouchDispatcher::unregisterForcePrio(v6, a1); /*0x4d6652*/
  }
  if ( !qword_905FD0 ) /*0x4d6660*/
  {
    v12 = operator new(0x6E8u); /*0x4d666c*/
    qword_905FD0 = sub_2723A0(v12); /*0x4d667a*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4d668b*/
  }
  sub_515DA0(*(_QWORD *)(qword_905FD0 + 560)); /*0x4d669b*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)a1 + 528LL))(a1); /*0x4d66a6*/
  if ( v4 ) /*0x4d66af*/
  {
    v7 = qword_905FD0; /*0x4d66b5*/
    if ( !qword_905FD0 ) /*0x4d66bf*/
    {
      v13 = operator new(0x6E8u); /*0x4d66cb*/
      qword_905FD0 = sub_2723A0(v13); /*0x4d66d9*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4d66ea*/
      v7 = qword_905FD0; /*0x4d66ec*/
    }
    v8 = *(_QWORD **)(v7 + 560); /*0x4d66f3*/
    if ( (cocos2d::CCObject *)v8[1622] == v3 ) /*0x4d6701*/
    {
      (*(void (__fastcall **)(_QWORD *))(*v8 + 1456LL))(v8); /*0x4d6709*/
    }
    else
    {
      if ( v3 ) /*0x4d6714*/
        cocos2d::CCObject::retain(v3); /*0x4d6719*/
      v9 = (cocos2d::CCObject *)v8[1622]; /*0x4d671f*/
      if ( v9 ) /*0x4d6729*/
        cocos2d::CCObject::release(v9); /*0x4d672b*/
      v8[1622] = v3; /*0x4d6731*/
      *((_BYTE *)v8 + 13160) = v3 != 0; /*0x4d673e*/
      sub_513E00(v8); /*0x4d6747*/
      (*(void (__fastcall **)(_QWORD *))(*v8 + 1072LL))(v8); /*0x4d6755*/
      GJBaseGameLayer_updateCamera(v8); /*0x4d6761*/
      PlayLayer_updateTestModeLabel((__int64)v8, v10); /*0x4d6769*/
    }
    PlayLayer_startMusic((__int64)v8); /*0x4d6771*/
  }
}

// [12/21] Address: 0x4d6790
// Method: PauseLayer::onRestart
// Hidden C++ exception states: #wind=2
void __fastcall PauseLayer_onRestart(struct cocos2d::CCObject *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  cocos2d::CCTouchDispatcher *v5; // rax
  __int64 v6; // rcx
  void *v7; // [rsp+30h] [rbp+8h]
  void *v8; // [rsp+30h] [rbp+8h]

  if ( !*((_BYTE *)a1 + 616) ) /*0x4d67a5*/
    goto LABEL_13; /*0x4d67a5*/
  v2 = qword_905FD0; /*0x4d67ae*/
  if ( !qword_905FD0 ) /*0x4d67b8*/
  {
    v7 = operator new(0x6E8u); /*0x4d67c4*/
    qword_905FD0 = sub_2723A0(v7); /*0x4d67d2*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4d67e3*/
    v2 = qword_905FD0; /*0x4d67e5*/
  }
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 560) + 12976LL); /*0x4d67f3*/
  if ( sub_4D4D30(a1) == v3 ) /*0x4d6805*/
  {
LABEL_13:
    if ( *((_BYTE *)a1 + 545) ) /*0x4d6821*/
    {
      *((_BYTE *)a1 + 545) = 0; /*0x4d682a*/
      v4 = cocos2d::CCDirector::sharedDirector(a1); /*0x4d6831*/
      v5 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 144LL))(v4); /*0x4d683d*/
      cocos2d::CCTouchDispatcher::unregisterForcePrio(v5, a1); /*0x4d6849*/
    }
    v6 = qword_905FD0; /*0x4d684f*/
    if ( !qword_905FD0 ) /*0x4d6859*/
    {
      v8 = operator new(0x6E8u); /*0x4d6865*/
      qword_905FD0 = sub_2723A0(v8); /*0x4d6873*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4d6884*/
      v6 = qword_905FD0; /*0x4d6886*/
    }
    PlayLayer_resumeAndRestart(*(_QWORD *)(v6 + 560), 0); /*0x4d6896*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)a1 + 528LL))(a1); /*0x4d68b0*/
  }
  else
  {
    PauseLayer_onResume(a1); /*0x4d681c*/
  }
}

// [13/21] Address: 0x4d68c0
// Method: PauseLayer::onRestartFull
void __fastcall PauseLayer_onRestartFull(struct cocos2d::CCObject *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  cocos2d::CCTouchDispatcher *v5; // rax
  __int64 v6; // rcx
  void *v7; // [rsp+30h] [rbp+8h]
  void *v8; // [rsp+30h] [rbp+8h]

  if ( !*((_BYTE *)a1 + 616) ) /*0x4d68d5*/
    goto LABEL_13; /*0x4d68d5*/
  v2 = qword_905FD0; /*0x4d68de*/
  if ( !qword_905FD0 ) /*0x4d68e8*/
  {
    v7 = operator new(0x6E8u); /*0x4d68f4*/
    qword_905FD0 = sub_2723A0(v7); /*0x4d6902*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4d6913*/
    v2 = qword_905FD0; /*0x4d6915*/
  }
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 560) + 12976LL); /*0x4d6923*/
  if ( sub_4D4D30(a1) == v3 ) /*0x4d6935*/
  {
LABEL_13:
    if ( *((_BYTE *)a1 + 545) ) /*0x4d6951*/
    {
      *((_BYTE *)a1 + 545) = 0; /*0x4d695a*/
      v4 = cocos2d::CCDirector::sharedDirector(a1); /*0x4d6961*/
      v5 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 144LL))(v4); /*0x4d696d*/
      cocos2d::CCTouchDispatcher::unregisterForcePrio(v5, a1); /*0x4d6979*/
    }
    v6 = qword_905FD0; /*0x4d697f*/
    if ( !qword_905FD0 ) /*0x4d6989*/
    {
      v8 = operator new(0x6E8u); /*0x4d6995*/
      qword_905FD0 = sub_2723A0(v8); /*0x4d69a3*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4d69b4*/
      v6 = qword_905FD0; /*0x4d69b6*/
    }
    PlayLayer_resumeAndRestart(*(_QWORD *)(v6 + 560), 1); /*0x4d69c6*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)a1 + 528LL))(a1); /*0x4d69e0*/
  }
  else
  {
    PauseLayer_onResume(a1); /*0x4d694c*/
  }
}

// [14/21] Address: 0x4d69f0
// Method: PauseLayer::onTryEdit
// Hidden C++ exception states: #wind=2
__int64 __fastcall PauseLayer_onTryEdit(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ebx
  int v4; // eax
  __int64 v5; // rbx
  __int128 v7; // [rsp+50h] [rbp-48h] BYREF
  __int64 v8; // [rsp+60h] [rbp-38h]
  __int64 v9; // [rsp+68h] [rbp-30h]
  _BYTE v10[40]; // [rsp+70h] [rbp-28h] BYREF
  void *v11; // [rsp+B0h] [rbp+18h]

  v2 = qword_905FD0; /*0x4d6a00*/
  if ( !qword_905FD0 ) /*0x4d6a0a*/
  {
    v11 = operator new(0x6E8u); /*0x4d6a16*/
    qword_905FD0 = sub_2723A0(v11); /*0x4d6a27*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4d6a38*/
    v2 = qword_905FD0; /*0x4d6a3a*/
  }
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 560) + 2168LL) + 1220LL) == 2 ) /*0x4d6a56*/
    return PauseLayer_onEdit(a1); /*0x4d6ba1*/
  v3 = a1 + 552; /*0x4d6a5c*/
  if ( !a1 ) /*0x4d6a68*/
    v3 = 0; /*0x4d6a68*/
  v7 = 0; /*0x4d6a6f*/
  *(_QWORD *)&v7 = sub_3C460(80); /*0x4d6a8b*/
  v8 = 69; /*0x4d6a90*/
  v9 = 79; /*0x4d6a99*/
  strcpy((char *)v7, "Are you sure you want to <cg>open</c> the editor?\n<cr>(Read-Only)</c>"); /*0x4d6aa9*/
  v4 = sub_3E4F0(v10, &v7); /*0x4d6afb*/
  v5 = FLAlertLayer_create_0( /*0x4d6b4f*/
         v3,
         (unsigned int)"Edit Level",
         v4,
         (unsigned int)"Cancel",
         (__int64)"Open",
         1136525312,
         0,
         0,
         1065353216);
  sub_3C310(&v7); /*0x4d6b57*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 64LL))(v5, 1); /*0x4d6b6b*/
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 1064LL))(v5); /*0x4d6b7d*/
}

// [15/21] Address: 0x4d6bb0
// Method: PauseLayer::onEdit
// Hidden C++ exception states: #wind=6
struct cocos2d::CCAction *__fastcall PauseLayer_onEdit(cocos2d::CCNode *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct cocos2d::CCAction *result; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rbx
  struct cocos2d::CCFiniteTimeAction *v10; // rax
  struct cocos2d::CCAction *v11; // rax
  void *v12; // [rsp+38h] [rbp+10h]
  void *v13; // [rsp+38h] [rbp+10h]
  void *v14; // [rsp+38h] [rbp+10h]
  void *v15; // [rsp+38h] [rbp+10h]
  void *v16; // [rsp+38h] [rbp+10h]

  v2 = qword_905FD0; /*0x4d6bc2*/
  if ( !qword_905FD0 ) /*0x4d6bcc*/
  {
    v12 = operator new(0x6E8u); /*0x4d6bd8*/
    qword_905FD0 = sub_2723A0(v12); /*0x4d6be6*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4d6bf7*/
    v2 = qword_905FD0; /*0x4d6bf9*/
  }
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 560) + 2168LL); /*0x4d6c07*/
  if ( *(_DWORD *)(v3 + 1220) == 2 /*0x4d6c25*/
    || (result = (struct cocos2d::CCAction *)(unsigned int)(*(_DWORD *)(v2 + 1064) - *(_DWORD *)(v2 + 1068)),
        *(_DWORD *)(v2 + 1064) - *(_DWORD *)(v2 + 1068) > 0) )
  {
    v5 = cocos2d::CCDirector::sharedDirector(v3); /*0x4d6c2b*/
    *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 112LL))(v5) + 56) = 1065353216; /*0x4d6c3d*/
    v6 = qword_905FD0; /*0x4d6c44*/
    if ( !qword_905FD0 ) /*0x4d6c4e*/
    {
      v13 = operator new(0x6E8u); /*0x4d6c5a*/
      qword_905FD0 = sub_2723A0(v13); /*0x4d6c68*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4d6c79*/
      v6 = qword_905FD0; /*0x4d6c7b*/
    }
    cocos2d::CCNode::stopActionByTag(*(cocos2d::CCNode **)(v6 + 560), 31); /*0x4d6c8e*/
    v7 = qword_905FD0; /*0x4d6c94*/
    if ( !qword_905FD0 ) /*0x4d6c9e*/
    {
      v14 = operator new(0x6E8u); /*0x4d6caa*/
      qword_905FD0 = sub_2723A0(v14); /*0x4d6cb8*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4d6cc9*/
      v7 = qword_905FD0; /*0x4d6ccb*/
    }
    cocos2d::CCNode::stopAllActions(*(cocos2d::CCNode **)(v7 + 560)); /*0x4d6cd9*/
    v8 = qword_905FD0; /*0x4d6cdf*/
    if ( !qword_905FD0 ) /*0x4d6ce9*/
    {
      v15 = operator new(0x6E8u); /*0x4d6cf5*/
      qword_905FD0 = sub_2723A0(v15); /*0x4d6d03*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4d6d10*/
      v8 = qword_905FD0; /*0x4d6d13*/
    }
    cocos2d::CCNode::unscheduleAllSelectors(*(cocos2d::CCNode **)(v8 + 560)); /*0x4d6d21*/
    if ( !qword_905FD0 ) /*0x4d6d2f*/
    {
      v16 = operator new(0x6E8u); /*0x4d6d3b*/
      qword_905FD0 = sub_2723A0(v16); /*0x4d6d49*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4d6d5a*/
    }
    GJBaseGameLayer_resetAudio(); /*0x4d6d5c*/
    v9 = cocos2d::CCCallFunc::create(a1, sub_4D6DB0); /*0x4d6d71*/
    v10 = cocos2d::CCDelayTime::create(0.0); /*0x4d6d77*/
    v11 = cocos2d::CCSequence::create(v10, v9, 0); /*0x4d6d86*/
    return cocos2d::CCNode::runAction(a1, v11); /*0x4d6d92*/
  }
  return result; /*0x4d6d98*/
}

// [16/21] Address: 0x4d6e80
// Method: PauseLayer::tryQuit
// Hidden C++ exception states: #wind=2
__int64 __fastcall PauseLayer_tryQuit(__int64 a1)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rbx
  __int128 v7; // [rsp+50h] [rbp-48h] BYREF
  __int64 v8; // [rsp+60h] [rbp-38h]
  __int64 v9; // [rsp+68h] [rbp-30h]
  _BYTE v10[40]; // [rsp+70h] [rbp-28h] BYREF
  void *v11; // [rsp+A0h] [rbp+8h]

  if ( *(_BYTE *)(a1 + 586) ) /*0x4d6e8c*/
  {
    *(_BYTE *)(a1 + 585) = 0; /*0x4d6e95*/
    return sub_4D5960(a1, 0); /*0x4d6ea6*/
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 624); /*0x4d6eab*/
    if ( v3 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 344LL))(v3) ) /*0x4d6eba*/
    {
      return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 624) + 336LL))(*(_QWORD *)(a1 + 624), 0); /*0x4d6ed8*/
    }
    else
    {
      v4 = qword_905FD0; /*0x4d6edf*/
      if ( !qword_905FD0 ) /*0x4d6ee9*/
      {
        v11 = operator new(0x6E8u); /*0x4d6ef5*/
        qword_905FD0 = sub_2723A0(v11); /*0x4d6f06*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4d6f17*/
        v4 = qword_905FD0; /*0x4d6f19*/
      }
      if ( GameManager_getGameVariable(v4, "0167") ) /*0x4d6f27*/
      {
        v7 = 0; /*0x4d6f37*/
        *(_QWORD *)&v7 = sub_3C460(48); /*0x4d6f52*/
        v8 = 38; /*0x4d6f57*/
        v9 = 47; /*0x4d6f60*/
        strcpy((char *)v7, "Are you sure you want to <cr>exit</c>?"); /*0x4d6f70*/
        v5 = sub_3E4F0(v10, &v7); /*0x4d6fad*/
        v6 = FLAlertLayer_create_0( /*0x4d7005*/
               (int)a1 + 552,
               (unsigned int)"Exit Level",
               v5,
               (unsigned int)"Cancel",
               (__int64)"Exit",
               1133903872,
               0,
               0,
               1065353216);
        sub_3C310(&v7); /*0x4d700d*/
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, 0); /*0x4d701e*/
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 1064LL))(v6); /*0x4d702e*/
      }
      else
      {
        return PauseLayer_onQuit(a1); /*0x4d7044*/
      }
    }
  }
}

// [17/21] Address: 0x4d7050
// Method: PauseLayer::FLAlert_Clicked
struct cocos2d::CCAction *__fastcall PauseLayer_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  struct cocos2d::CCAction *result; // rax

  result = (struct cocos2d::CCAction *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x4d7067*/
  if ( (_DWORD)result ) /*0x4d706c*/
  {
    if ( (_DWORD)result == 1 ) /*0x4d7071*/
    {
      if ( a3 ) /*0x4d7075*/
        return PauseLayer_onEdit((cocos2d::CCNode *)(a1 - 552)); /*0x4d7088*/
    }
  }
  else if ( a3 ) /*0x4d708f*/
  {
    return (struct cocos2d::CCAction *)PauseLayer_onQuit(a1 - 552); /*0x4d70a2*/
  }
  else
  {
    *(_BYTE *)(a1 + 33) = 0; /*0x4d70a7*/
  }
  return result; /*0x4d707e*/
}

// [18/21] Address: 0x4d70c0
// Method: PauseLayer::onQuit
// Hidden C++ exception states: #wind=3
__int64 __fastcall PauseLayer_onQuit(struct cocos2d::CCObject *a1)
{
  __int64 v2; // rax
  cocos2d::CCTouchDispatcher *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ecx
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]
  __int64 v11; // [rsp+48h] [rbp-10h]
  void *v12; // [rsp+60h] [rbp+8h]
  void *v13; // [rsp+68h] [rbp+10h]

  if ( *((_BYTE *)a1 + 545) ) /*0x4d70cd*/
  {
    *((_BYTE *)a1 + 545) = 0; /*0x4d70d6*/
    v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x4d70dd*/
    v3 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2); /*0x4d70e9*/
    cocos2d::CCTouchDispatcher::unregisterForcePrio(v3, a1); /*0x4d70f5*/
  }
  cocos2d::CCNode::unscheduleAllSelectors(a1); /*0x4d70fe*/
  v4 = qword_905FD0; /*0x4d7104*/
  if ( !qword_905FD0 ) /*0x4d710e*/
  {
    v13 = operator new(0x6E8u); /*0x4d711a*/
    qword_905FD0 = sub_2723A0(v13); /*0x4d7128*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4d7139*/
    v4 = qword_905FD0; /*0x4d713b*/
  }
  PlayLayer_onQuit(*(_QWORD *)(v4 + 560)); /*0x4d7149*/
  v9 = 0; /*0x4d715b*/
  *(_QWORD *)&v9 = sub_3C460(32); /*0x4d7176*/
  v10 = 16; /*0x4d717b*/
  v11 = 31; /*0x4d7184*/
  strcpy((char *)v9, "quitSound_01.ogg"); /*0x4d7194*/
  v7 = qword_905F60; /*0x4d719b*/
  if ( !qword_905F60 ) /*0x4d71a5*/
  {
    v12 = operator new(0x8A8u); /*0x4d71b1*/
    qword_905F60 = sub_5AE20(v12); /*0x4d71bf*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x4d71d0*/
    v7 = qword_905F60; /*0x4d71d2*/
  }
  return FMODAudioEngine_playEffect_0(v7, (__int64)&v9, v5, v6, 1060320051); /*0x4d71fc*/
}

// [19/21] Address: 0x4d7210
// Method: PauseLayer::handleAction
char __fastcall PauseLayer_handleAction(__int64 a1, int a2, char a3)
{
  struct cocos2d::CCObject *v4; // rcx

  if ( a2 != 10009 ) /*0x4d721a*/
    return 0; /*0x4d7222*/
  if ( a3 ) /*0x4d7226*/
  {
    v4 = (struct cocos2d::CCObject *)(a1 - 344); /*0x4d7228*/
    if ( *((_BYTE *)v4 + 586) ) /*0x4d7231*/
    {
      sub_4D5960(v4, 0); /*0x4d7239*/
      return 1; /*0x4d7244*/
    }
    PauseLayer_onResume(v4); /*0x4d7245*/
  }
  return 1; /*0x4d721e*/
}

// [20/21] Address: 0x4d7260
// Method: PauseLayer::keyDown
// Hidden C++ exception states: #wind=4
void __fastcall PauseLayer_keyDown(__int64 a1, int a2)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rcx
  void *v9; // [rsp+30h] [rbp+8h]

  if ( *(_BYTE *)(a1 + 242) && (a2 == 32 || a2 == 1007 || a2 == 1009) ) /*0x4d7288*/
  {
    sub_4D5960(a1 - 344, 0); /*0x4d7298*/
    return; /*0x4d7298*/
  }
  v3 = a2 - 27; /*0x4d729d*/
  if ( !v3 ) /*0x4d72a0*/
    goto LABEL_17; /*0x4d72a0*/
  v4 = v3 - 5; /*0x4d72a6*/
  if ( !v4 ) /*0x4d72a9*/
  {
LABEL_11:
    PauseLayer_onResume((struct cocos2d::CCObject *)(a1 - 344)); /*0x4d72c5*/
    return; /*0x4d72d3*/
  }
  v5 = v4 - 971; /*0x4d72ab*/
  if ( v5 ) /*0x4d72b1*/
  {
    v6 = v5 - 4; /*0x4d72b7*/
    if ( v6 ) /*0x4d72ba*/
    {
      if ( v6 != 2 ) /*0x4d72bf*/
        return; /*0x4d72bf*/
      goto LABEL_11; /*0x4d72bf*/
    }
    v7 = qword_905FD0; /*0x4d72d8*/
    if ( !qword_905FD0 ) /*0x4d72e2*/
    {
      v9 = operator new(0x6E8u); /*0x4d72ee*/
      qword_905FD0 = sub_2723A0(v9); /*0x4d72fc*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4d730d*/
      v7 = qword_905FD0; /*0x4d730f*/
    }
    v8 = *(_QWORD *)(v7 + 560); /*0x4d7316*/
    if ( *(_BYTE *)(v8 + 13088) ) /*0x4d731d*/
    {
      sub_5153A0(v8, 0); /*0x4d733b*/
      PauseLayer_onResume((struct cocos2d::CCObject *)(a1 - 344)); /*0x4d734e*/
    }
    else
    {
      PauseLayer_onPracticeMode(a1 - 344); /*0x4d7334*/
    }
  }
  else
  {
LABEL_17:
    PauseLayer_tryQuit(a1 - 344); /*0x4d7361*/
  }
}

// [21/21] Address: 0x4d7370
// Method: PauseLayer::keyBackClicked
__int64 __fastcall PauseLayer_keyBackClicked(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 249) ) /*0x4d7370*/
  {
    *(_BYTE *)(a1 + 249) = 1; /*0x4d7379*/
    return PauseLayer_tryQuit(a1 - 336); /*0x4d7389*/
  }
  return result; /*0x4d738e*/
}

// Address: 0x4d26f0
// Method: PauseLayer::customSetup
// Hidden C++ exception states: #wind=37
__int64 __fastcall PauseLayer_customSetup(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  cocos2d::CCDirector *v7; // rax
  float ScreenRight; // xmm0_4
  __int64 v9; // rcx
  cocos2d::CCDirector *v10; // rax
  float v11; // xmm7_4
  __int64 v12; // rcx
  cocos2d::CCDirector *v13; // rax
  float ScreenTop; // xmm0_4
  __int64 v15; // rcx
  cocos2d::CCDirector *v16; // rax
  float v17; // xmm13_4
  __int64 v18; // rax
  _QWORD *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  void **v24; // rcx
  struct cocos2d::CCLabelBMFont *v25; // rdi
  __int64 v26; // rbx
  float v27; // xmm13_4
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  cocos2d::CCMenu *v34; // r12
  struct cocos2d::CCSprite *v35; // r15
  __int64 v36; // rdx
  struct cocos2d:... [53601 chars total]
