#include <Geode/binding/EditLevelLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/18] Address: 0x175d90
// Method: EditLevelLayer::scene
// Hidden C++ exception states: #wind=1
__int64 __fastcall EditLevelLayer_scene(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rcx
  char *v4; // rdi

  v2 = cocos2d::CCScene::create(); /*0x175dad*/
  *(_QWORD *)(cocos2d::CCApplication::sharedApplication(v3) + 232) = v2; /*0x175db6*/
  v4 = (char *)operator new(0x258u); /*0x175dc7*/
  cocos2d::CCLayer::CCLayer((cocos2d::CCLayer *)v4); /*0x175dd2*/
  *(_QWORD *)v4 = &EditLevelLayer::`vftable'; /*0x175ddf*/
  *((_QWORD *)v4 + 40) = &EditLevelLayer::`vftable'; /*0x175de9*/
  *((_QWORD *)v4 + 41) = &EditLevelLayer::`vftable'; /*0x175df7*/
  *((_QWORD *)v4 + 42) = &EditLevelLayer::`vftable'; /*0x175e05*/
  *((_QWORD *)v4 + 43) = &EditLevelLayer::`vftable'; /*0x175e13*/
  *((_QWORD *)v4 + 44) = &EditLevelLayer::`vftable'; /*0x175e21*/
  *((_QWORD *)v4 + 51) = &EditLevelLayer::`vftable'; /*0x175e2f*/
  *((_QWORD *)v4 + 52) = &EditLevelLayer::`vftable'; /*0x175e3d*/
  *((_QWORD *)v4 + 53) = &EditLevelLayer::`vftable'; /*0x175e4b*/
  *((_QWORD *)v4 + 54) = &EditLevelLayer::`vftable'; /*0x175e59*/
  *((_QWORD *)v4 + 55) = &EditLevelLayer::`vftable'; /*0x175e67*/
  *((_QWORD *)v4 + 56) = &EditLevelLayer::`vftable'; /*0x175e75*/
  *((_QWORD *)v4 + 57) = &EditLevelLayer::`vftable'; /*0x175e83*/
  *((_QWORD *)v4 + 58) = 0; /*0x175e8c*/
  *((_QWORD *)v4 + 59) = 0; /*0x175e93*/
  *((_QWORD *)v4 + 60) = 0; /*0x175e9a*/
  *((_QWORD *)v4 + 61) = 0; /*0x175ea1*/
  v4[496] = 0; /*0x175ea8*/
  *((_DWORD *)v4 + 125) = 0; /*0x175eaf*/
  *(_OWORD *)(v4 + 504) = 0; /*0x175eb8*/
  *((_QWORD *)v4 + 65) = 0; /*0x175ebf*/
  *((_QWORD *)v4 + 66) = 15; /*0x175ec6*/
  v4[504] = 0; /*0x175ed1*/
  *((_QWORD *)v4 + 67) = 0; /*0x175ed8*/
  v4[544] = 0; /*0x175edf*/
  *((_QWORD *)v4 + 69) = 0; /*0x175ee6*/
  *((_QWORD *)v4 + 70) = 0; /*0x175eed*/
  *(_OWORD *)(v4 + 568) = 0; /*0x175ef4*/
  *((_QWORD *)v4 + 73) = 0; /*0x175efb*/
  *((_QWORD *)v4 + 74) = 15; /*0x175f02*/
  v4[568] = 0; /*0x175f0d*/
  if ( (unsigned __int8)sub_175F70(v4, a1) ) /*0x175f1a*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v4); /*0x175f26*/
  }
  else
  {
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v4 + 8LL))(v4, 1); /*0x175f36*/
    v4 = 0; /*0x175f39*/
  }
  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v2 + 464LL))(v2, v4); /*0x175f45*/
  return v2; /*0x175f4e*/
}

// [3/18] Address: 0x178790
// Method: EditLevelLayer::textInputOpened
// Hidden C++ exception states: #wind=1
void __fastcall EditLevelLayer_textInputOpened(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  int v5; // eax
  unsigned __int64 v6; // rsi
  char *v7; // rbx
  void **v8; // rcx
  size_t v9; // r8
  char *v10; // rax
  __int128 Buf2; // [rsp+30h] [rbp-58h] BYREF
  __int64 v12; // [rsp+40h] [rbp-48h]
  __int64 v13; // [rsp+48h] [rbp-40h]
  void *Buf1[2]; // [rsp+58h] [rbp-30h] BYREF
  size_t v15; // [rsp+68h] [rbp-20h]
  unsigned __int64 v16; // [rsp+70h] [rbp-18h]

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x1787ce*/
  *(_OWORD *)Buf1 = 0; /*0x1787d4*/
  v15 = 0; /*0x1787d9*/
  v16 = 0; /*0x1787de*/
  v4 = -1; /*0x1787e3*/
  do /*0x1787f3*/
    ++v4; /*0x1787f0*/
  while ( *(_BYTE *)(v3 + v4) ); /*0x1787f3*/
  sub_3C230(Buf1); /*0x178801*/
  v5 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2); /*0x17880d*/
  v6 = v16; /*0x178810*/
  v7 = (char *)Buf1[0]; /*0x178815*/
  if ( v5 == 1 ) /*0x17881d*/
  {
    Buf2 = 0; /*0x178822*/
    v12 = 0; /*0x178827*/
    v13 = 15; /*0x17882c*/
    LOBYTE(Buf2) = 0; /*0x178835*/
    v8 = Buf1; /*0x17883a*/
    if ( v16 > 0xF ) /*0x178843*/
      v8 = (void **)Buf1[0]; /*0x178843*/
    v9 = v15; /*0x178847*/
    if ( v15 ) /*0x17884f*/
      v9 = 0; /*0x17884f*/
    if ( !memcmp(v8, &Buf2, v9) && !v15 ) /*0x178867*/
    {
      Buf2 = 0; /*0x17886c*/
      v12 = 1; /*0x178871*/
      v13 = 15; /*0x17887a*/
      LOWORD(Buf2) = 32; /*0x178883*/
      SpriteAnimationManager_executeAnimation(a2, &Buf2); /*0x178892*/
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2); /*0x17889f*/
  }
  if ( v6 > 0xF ) /*0x1788a7*/
  {
    v10 = v7; /*0x1788ad*/
    if ( v6 + 1 >= 0x1000 ) /*0x1788b7*/
    {
      v7 = (char *)*((_QWORD *)v7 - 1); /*0x1788bd*/
      if ( (unsigned __int64)(v10 - v7 - 8) > 0x1F ) /*0x1788cc*/
        invoke_watson(0, 0, 0, 0, 0); /*0x1788dd*/
    }
    j_j_free(v7); /*0x1788e7*/
  }
}

// [4/18] Address: 0x178920
// Method: EditLevelLayer::textChanged
// Hidden C++ exception states: #wind=3
double __fastcall EditLevelLayer_textChanged(__int64 a1, _QWORD *a2)
{
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rbx
  double result; // xmm0_8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  void *v11; // rcx
  void **v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r8
  __int128 *v16; // rdx
  void **v17; // rcx
  void **v18; // rdx
  void *v19[2]; // [rsp+38h] [rbp-21h] BYREF
  size_t v20; // [rsp+48h] [rbp-11h]
  unsigned __int64 v21; // [rsp+50h] [rbp-9h]
  void *Src[2]; // [rsp+58h] [rbp-1h] BYREF
  size_t Size; // [rsp+68h] [rbp+Fh]
  unsigned __int64 v24; // [rsp+70h] [rbp+17h]
  __int128 v25; // [rsp+78h] [rbp+1Fh] BYREF
  __int128 v26; // [rsp+88h] [rbp+2Fh]

  v4 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2) - 1; /*0x17895a*/
  if ( v4 ) /*0x17895d*/
  {
    if ( v4 != 1 ) /*0x178966*/
      return result; /*0x178966*/
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x17897d*/
    *(_OWORD *)Src = 0; /*0x178983*/
    Size = 0; /*0x178987*/
    v24 = 0; /*0x17898b*/
    v6 = -1; /*0x17898f*/
    do /*0x178999*/
      ++v6; /*0x178996*/
    while ( *(_BYTE *)(v5 + v6) ); /*0x178999*/
    result = sub_3C230(Src); /*0x1789a9*/
    SetupSmartBlockLayer_onCreateAll(v9, v8); /*0x1789af*/
    if ( (int)sub_7EAA0(Src, (unsigned int)dword_8F83A4) > 180 ) /*0x1789cf*/
    {
      v10 = sub_3E4F0(&v25, a1 + 160); /*0x1789d8*/
      CCTextInputNode_setString(a2, v10); /*0x1789e3*/
      if ( v24 <= 0xF ) /*0x1789f1*/
        return result; /*0x1789f1*/
      v11 = Src[0]; /*0x1789f6*/
      if ( v24 + 1 < 0x1000 ) /*0x178a04*/
        goto LABEL_9; /*0x178a04*/
      v11 = (void *)*((_QWORD *)Src[0] - 1); /*0x178a0a*/
      if ( (unsigned __int64)((char *)Src[0] - (char *)v11 - 8) <= 0x1F ) /*0x178a19*/
        goto LABEL_9; /*0x178a19*/
LABEL_18:
      invoke_watson(0, 0, 0, 0, 0); /*0x178a9e*/
    }
    if ( (void **)(a1 + 160) != Src ) /*0x178a4f*/
    {
      v12 = Src; /*0x178a51*/
      if ( v24 > 0xF ) /*0x178a5a*/
        v12 = (void **)Src[0]; /*0x178a5a*/
      sub_3F5A0((void *)(a1 + 160), v12, Size); /*0x178a66*/
    }
    if ( v24 > 0xF ) /*0x178a74*/
    {
      v11 = Src[0]; /*0x178a79*/
      if ( v24 + 1 >= 0x1000 ) /*0x178a87*/
      {
        v11 = (void *)*((_QWORD *)Src[0] - 1); /*0x178a8d*/
        if ( (unsigned __int64)((char *)Src[0] - (char *)v11 - 8) > 0x1F ) /*0x178a9c*/
          goto LABEL_18; /*0x178a9c*/
      }
LABEL_9:
      j_j_free(v11); /*0x178a1f*/
    }
  }
  else
  {
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x178ac5*/
    v25 = 0; /*0x178acb*/
    v26 = 0; /*0x178ad2*/
    v14 = -1; /*0x178ad7*/
    v15 = -1; /*0x178ade*/
    do /*0x178ae4*/
      ++v15; /*0x178ae1*/
    while ( *(_BYTE *)(v13 + v15) ); /*0x178ae4*/
    sub_3C230(&v25); /*0x178af1*/
    v16 = &v25; /*0x178af7*/
    if ( *((_QWORD *)&v26 + 1) > 0xFu ) /*0x178b00*/
      v16 = (__int128 *)v25; /*0x178b00*/
    *(_OWORD *)v19 = 0; /*0x178b08*/
    v20 = 0; /*0x178b0c*/
    v21 = 0; /*0x178b10*/
    do /*0x178b17*/
      ++v14; /*0x178b14*/
    while ( *((_BYTE *)v16 + v14) ); /*0x178b17*/
    sub_3C230(v19); /*0x178b24*/
    v17 = (void **)(*(_QWORD *)(a1 + 64) + 344LL); /*0x178b35*/
    if ( v17 != v19 ) /*0x178b43*/
    {
      v18 = v19; /*0x178b45*/
      if ( v21 > 0xF ) /*0x178b4e*/
        v18 = (void **)v19[0]; /*0x178b4e*/
      sub_3F5A0(v17, v18, v20); /*0x178b57*/
    }
    result = sub_3C310(v19); /*0x178b61*/
    if ( *((_QWORD *)&v26 + 1) > 0xFu ) /*0x178b6f*/
    {
      v11 = (void *)v25; /*0x178b78*/
      if ( (unsigned __int64)(*((_QWORD *)&v26 + 1) + 1LL) >= 0x1000 ) /*0x178b86*/
      {
        v11 = *(void **)(v25 - 8); /*0x178b90*/
        if ( (unsigned __int64)(v25 - (_QWORD)v11 - 8) > 0x1F ) /*0x178b9f*/
          invoke_watson(0, 0, 0, 0, 0); /*0x178bb4*/
      }
      goto LABEL_9; /*0x178b9f*/
    }
  }
  return result; /*0x178a24*/
}

// [5/18] Address: 0x178bc0
// Method: EditLevelLayer::onPlay
// Hidden C++ exception states: #wind=4
struct cocos2d::CCAction *__fastcall EditLevelLayer_onPlay(__int64 a1)
{
  struct cocos2d::CCAction *result; // rax
  __int64 v3; // rcx
  int v4; // eax
  _BYTE *v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ecx
  __int64 v11; // rbx
  struct cocos2d::CCFiniteTimeAction *v12; // rax
  struct cocos2d::CCAction *v13; // rax
  __int128 v14; // [rsp+50h] [rbp+17h] BYREF
  __int64 v15; // [rsp+60h] [rbp+27h]
  __int64 v16; // [rsp+68h] [rbp+2Fh]
  _BYTE v17[32]; // [rsp+70h] [rbp+37h] BYREF
  void *v18; // [rsp+B0h] [rbp+77h]
  void *v19; // [rsp+B8h] [rbp+7Fh]

  result = (struct cocos2d::CCAction *)cocos2d::CCDirector::sharedDirector(a1); /*0x178bda*/
  if ( !*((_BYTE *)result + 176) && !*(_BYTE *)(a1 + 496) ) /*0x178bed*/
  {
    v3 = *(_QWORD *)(a1 + 472); /*0x178bfa*/
    if ( *(_QWORD *)(v3 + 1648) && *(_QWORD *)(v3 + 1696) != (*(unsigned int *)(v3 + 860) | 0x300000000LL) ) /*0x178c17*/
      sub_260AB0(v3); /*0x178c22*/
    if ( *(_BYTE *)(a1 + 544) || !*(_QWORD *)(*(_QWORD *)(a1 + 472) + 1648LL) ) /*0x178c3b*/
    {
      sub_178100(a1); /*0x178d7c*/
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x178d89*/
      *(_BYTE *)(a1 + 496) = 1; /*0x178d8f*/
      v6 = qword_905F60; /*0x178d96*/
      if ( !qword_905F60 ) /*0x178da0*/
      {
        v18 = operator new(0x8A8u); /*0x178dac*/
        qword_905F60 = sub_5AE20(v18); /*0x178db9*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x178dca*/
        v6 = qword_905F60; /*0x178dcc*/
      }
      v7 = *(_QWORD *)(v6 + 552); /*0x178dd3*/
      if ( v7 ) /*0x178ddd*/
        FMOD::ChannelControl::stop(v7); /*0x178ddf*/
      sub_3DB60(v6 + 1096); /*0x178dec*/
      sub_3DB60(v6 + 1160); /*0x178df8*/
      sub_3DB60(v6 + 1224); /*0x178e04*/
      v14 = 0; /*0x178e14*/
      *(_QWORD *)&v14 = sub_3C460(32); /*0x178e2c*/
      v15 = 16; /*0x178e30*/
      v16 = 31; /*0x178e38*/
      strcpy((char *)v14, "playSound_01.ogg"); /*0x178e47*/
      v10 = qword_905F60; /*0x178e4e*/
      if ( !qword_905F60 ) /*0x178e58*/
      {
        v19 = operator new(0x8A8u); /*0x178e64*/
        qword_905F60 = sub_5AE20(v19); /*0x178e71*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x178e82*/
        v10 = qword_905F60; /*0x178e84*/
      }
      FMODAudioEngine_playEffect_0(v10, (__int64)&v14, v8, v9, 1050253722); /*0x178ea8*/
      GJComment_create(a1); /*0x178eb0*/
      v11 = cocos2d::CCCallFunc::create(a1, sub_178F10); /*0x178ec5*/
      v12 = cocos2d::CCDelayTime::create(0.0); /*0x178ecb*/
      v13 = cocos2d::CCSequence::create(v12, v11, 0); /*0x178eda*/
      return cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v13); /*0x178ee6*/
    }
    else
    {
      v14 = 0; /*0x178c4c*/
      v15 = 0; /*0x178c52*/
      v16 = 0; /*0x178c56*/
      *(_QWORD *)&v14 = sub_3C460(96); /*0x178c67*/
      v15 = 91; /*0x178c6b*/
      v16 = 95; /*0x178c73*/
      strcpy( /*0x178c82*/
        (char *)v14,
        "There is a <cg>saved</c> <cy>checkpoint</c> for this level.\nDo you want to <cl>load</c> it?");
      v4 = sub_3E4F0(v17, &v14); /*0x178ce7*/
      v5 = (_BYTE *)FLAlertLayer_create_0( /*0x178d38*/
                      (int)a1 + 416,
                      (unsigned int)"Load Save",
                      v4,
                      (unsigned int)"New Game",
                      (__int64)"Load Save",
                      1136525312,
                      0,
                      0,
                      1065353216);
      sub_3C310(&v14); /*0x178d3f*/
      GameToolbox_addBackButton(v5); /*0x178d47*/
      v5[656] = 1; /*0x178d4c*/
      (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v5 + 64LL))(v5, 11); /*0x178d62*/
      return (struct cocos2d::CCAction *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v5 + 1064LL))(v5); /*0x178d72*/
    }
  }
  return result; /*0x178eec*/
}

// [6/18] Address: 0x179110
// Method: EditLevelLayer::creatorDescriptionChanged
__int64 __fastcall EditLevelLayer_creatorDescriptionChanged(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // r8
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]
  __int64 v8; // [rsp+38h] [rbp-10h]

  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 - 448) + 472LL))(a1 - 448, 2); /*0x17912c*/
  v4 = result; /*0x179132*/
  if ( result ) /*0x179138*/
  {
    if ( a2[3] > 0xFu ) /*0x17913f*/
      a2 = (_QWORD *)*a2; /*0x179141*/
    v6 = 0; /*0x179149*/
    v7 = 0; /*0x17914e*/
    v5 = -1; /*0x179153*/
    v8 = 0; /*0x17915a*/
    do /*0x179163*/
      ++v5; /*0x179160*/
    while ( *((_BYTE *)a2 + v5) ); /*0x179163*/
    sub_3C230(&v6); /*0x179171*/
    return CCTextInputNode_setString(v4, &v6); /*0x17917e*/
  }
  return result; /*0x179183*/
}

// [7/18] Address: 0x1792c0
// Method: EditLevelLayer::emotePickerClosed
void __fastcall EditLevelLayer_emotePickerClosed(__int64 a1)
{
  *(_QWORD *)(a1 + 104) = 0; /*0x1792c0*/
}

// [8/18] Address: 0x1792d0
// Method: EditLevelLayer::onEdit
// Hidden C++ exception states: #wind=3
char __fastcall EditLevelLayer_onEdit(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  int v4; // edi
  int v5; // r8d
  int v6; // r9d
  int v7; // ecx
  __int64 v8; // rbx
  struct cocos2d::CCScene *v9; // rdi
  __int64 v10; // rcx
  cocos2d::CCObject *v11; // rax
  struct cocos2d::CCScene *v12; // rbx
  __int64 v13; // rcx
  cocos2d::CCDirector *v14; // rax
  _BYTE v16[40]; // [rsp+50h] [rbp-28h] BYREF
  void *v17; // [rsp+90h] [rbp+18h]
  void *v18; // [rsp+98h] [rbp+20h]

  v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x1792dd*/
  if ( !*(_BYTE *)(v2 + 176) && !*(_BYTE *)(a1 + 496) ) /*0x1792f0*/
  {
    sub_178100(a1); /*0x179300*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x17930d*/
    *(_BYTE *)(a1 + 496) = 1; /*0x179313*/
    v3 = qword_905FD0; /*0x17931a*/
    if ( !qword_905FD0 ) /*0x179324*/
    {
      v17 = operator new(0x6E8u); /*0x179330*/
      qword_905FD0 = sub_2723A0(v17); /*0x179341*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x179352*/
      v3 = qword_905FD0; /*0x179354*/
    }
    *(_DWORD *)(v3 + 740) = 3; /*0x17935b*/
    GJComment_create(a1); /*0x179368*/
    v4 = sub_261160(*(_QWORD *)(a1 + 472), v16); /*0x17938b*/
    v7 = qword_905F60; /*0x17938e*/
    if ( !qword_905F60 ) /*0x179398*/
    {
      v18 = operator new(0x8A8u); /*0x1793a4*/
      qword_905F60 = sub_5AE20(v18); /*0x1793b5*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x1793c6*/
      v7 = qword_905F60; /*0x1793c8*/
    }
    FMODAudioEngine_loadMusic(v7, v4, v5, v6, 1065353216, 1, 0, 0, 0); /*0x1793f7*/
    v8 = *(_QWORD *)(a1 + 472); /*0x1793fc*/
    v9 = (struct cocos2d::CCScene *)cocos2d::CCScene::create(); /*0x179409*/
    *(_QWORD *)(cocos2d::CCApplication::sharedApplication(v10) + 232) = v9; /*0x179412*/
    v11 = LevelEditorLayer_create(v8, 0); /*0x17941e*/
    (*(void (__fastcall **)(struct cocos2d::CCScene *, cocos2d::CCObject *))(*(_QWORD *)v9 + 464LL))(v9, v11); /*0x179433*/
    *((_DWORD *)v9 + 7) = 6; /*0x179436*/
    v12 = cocos2d::CCTransitionFade::create(0.5, v9); /*0x17944e*/
    v14 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v13); /*0x179451*/
    LOBYTE(v2) = cocos2d::CCDirector::replaceScene(v14, v12); /*0x17945d*/
  }
  return v2; /*0x179463*/
}

// [9/18] Address: 0x179c90
// Method: EditLevelLayer::FLAlert_Clicked
// Hidden C++ exception states: #wind=7
char __fastcall EditLevelLayer_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  _DWORD *NewLevel; // rdi
  int v12; // ebx
  float v13; // xmm0_4
  struct cocos2d::CCScene *v14; // rax
  struct cocos2d::CCScene *v15; // rbx
  __int64 v16; // rcx
  cocos2d::CCDirector *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct cocos2d::CCObject *v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rax
  unsigned int v29; // edi
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int128 v35; // [rsp+20h] [rbp-38h] BYREF
  __int64 v36; // [rsp+30h] [rbp-28h]
  __int64 v37; // [rsp+38h] [rbp-20h]
  void *v38; // [rsp+68h] [rbp+10h]
  void *v39; // [rsp+68h] [rbp+10h]
  void *v40; // [rsp+68h] [rbp+10h]
  void *v41; // [rsp+68h] [rbp+10h]
  void *v42; // [rsp+68h] [rbp+10h]
  void *v43; // [rsp+78h] [rbp+20h]

  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 4 && a3 ) /*0x179cb9*/
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 48) + 1040LL))(*(_QWORD *)(a1 + 48), 0); /*0x179cc4*/
    v6 = *(_QWORD *)&qword_905FB0; /*0x179cca*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x179cd4*/
    {
      v38 = operator new(0x690u); /*0x179ce0*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v38); /*0x179cee*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x179cfb*/
      v6 = *(_QWORD *)&qword_905FB0; /*0x179cfe*/
    }
    sub_219730(v6, *(_QWORD *)(a1 + 56)); /*0x179d09*/
    LOBYTE(v7) = EditLevelLayer_onBack(a1 - 416, 0); /*0x179d23*/
    return v7; /*0x179d23*/
  }
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 7 && a3 ) /*0x179d3d*/
  {
    v9 = a1 - 416; /*0x179d43*/
    v7 = cocos2d::CCDirector::sharedDirector(v8); /*0x179d4a*/
    if ( !*(_BYTE *)(v7 + 176) && !*(_BYTE *)(v9 + 496) ) /*0x179d5d*/
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 992LL))(v9, 0); /*0x179d72*/
      *(_BYTE *)(v9 + 496) = 1; /*0x179d78*/
      v10 = qword_905FD0; /*0x179d7f*/
      if ( !qword_905FD0 ) /*0x179d89*/
      {
        v39 = operator new(0x6E8u); /*0x179d95*/
        qword_905FD0 = sub_2723A0(v39); /*0x179da3*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x179db4*/
        v10 = qword_905FD0; /*0x179db6*/
      }
      *(_DWORD *)(v10 + 740) = 2; /*0x179dbd*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x179dcf*/
      {
        v40 = operator new(0x690u); /*0x179ddb*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v40); /*0x179de9*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x179dfa*/
      }
      NewLevel = (_DWORD *)GameLevelManager_createNewLevel(); /*0x179e01*/
      sub_2639E0(NewLevel, *(_QWORD *)(v9 + 472)); /*0x179e0e*/
      GJComment_create(v9); /*0x179e16*/
      v12 = *(_DWORD *)(*(_QWORD *)(v9 + 472) + 1060LL) - *(_DWORD *)(*(_QWORD *)(v9 + 472) + 1064LL); /*0x179e28*/
      NewLevel[267] = v12; /*0x179e2e*/
      v13 = (float)((float)rand() / 32767.0) * 1000.0; /*0x179e49*/
      NewLevel[266] = (int)v13; /*0x179e55*/
      NewLevel[265] = v12 + (int)v13; /*0x179e5d*/
      v14 = (struct cocos2d::CCScene *)EditLevelLayer_scene((__int64)NewLevel); /*0x179e66*/
      v15 = cocos2d::CCTransitionFade::create(0.5, v14); /*0x179e7c*/
      v17 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v16); /*0x179e7f*/
      LOBYTE(v7) = cocos2d::CCDirector::replaceScene(v17, v15); /*0x179e97*/
    }
    return v7; /*0x179e97*/
  }
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 8 && a3 ) /*0x179eaf*/
  {
    v20 = *(struct cocos2d::CCObject **)(a1 + 56); /*0x179eb1*/
    v7 = sub_466AC0(v19, v18); /*0x179eb5*/
    v21 = v7; /*0x179eba*/
    if ( !v20 ) /*0x179ec0*/
      return v7; /*0x179ec0*/
    LOBYTE(v7) = cocos2d::CCArray::containsObject(*(cocos2d::CCArray **)(v7 + 368), v20); /*0x179ed0*/
    if ( !(_BYTE)v7 ) /*0x179ed8*/
      return v7; /*0x179ed8*/
    cocos2d::CCObject::retain(v20); /*0x179ee1*/
    cocos2d::CCArray::removeObject(*(cocos2d::CCArray **)(v21 + 368), v20, 1); /*0x179ef4*/
    cocos2d::CCArray::insertObject(*(cocos2d::CCArray **)(v21 + 368), v20, 0); /*0x179f07*/
    goto LABEL_25; /*0x179f0d*/
  }
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 12 && a3 ) /*0x179f20*/
  {
    v20 = *(struct cocos2d::CCObject **)(a1 + 56); /*0x179f22*/
    v7 = sub_466AC0(v23, v22); /*0x179f26*/
    v21 = v7; /*0x179f2b*/
    if ( !v20 ) /*0x179f31*/
      return v7; /*0x179f31*/
    LOBYTE(v7) = cocos2d::CCArray::containsObject(*(cocos2d::CCArray **)(v7 + 368), v20); /*0x179f41*/
    if ( !(_BYTE)v7 ) /*0x179f49*/
      return v7; /*0x179f49*/
    cocos2d::CCObject::retain(v20); /*0x179f52*/
    cocos2d::CCArray::removeObject(*(cocos2d::CCArray **)(v21 + 368), v20, 1); /*0x179f65*/
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(v21 + 368), v20); /*0x179f75*/
LABEL_25:
    cocos2d::CCObject::release(v20); /*0x179f7b*/
    LOBYTE(v7) = sub_467550(v21); /*0x179f93*/
    return v7; /*0x179f93*/
  }
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 10 ) /*0x179fa4*/
  {
    LOBYTE(v7) = std::numpunct<wchar_t>::_Init(a1 - 416, 0); /*0x179fbb*/
  }
  else if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 5 ) /*0x179fcc*/
  {
    if ( a3 ) /*0x179fd5*/
    {
      v25 = qword_905FD0; /*0x179fd7*/
      if ( !qword_905FD0 ) /*0x179fe1*/
      {
        v41 = operator new(0x6E8u); /*0x179fed*/
        qword_905FD0 = sub_2723A0(v41); /*0x179ffb*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x17a00c*/
        v25 = qword_905FD0; /*0x17a00e*/
      }
      *(_BYTE *)(v25 + 963) = 1; /*0x17a015*/
      v26 = cocos2d::CCApplication::sharedApplication(v24); /*0x17a01c*/
      LOBYTE(v7) = (*(__int64 (__fastcall **)(__int64, const char *))(*(_QWORD *)v26 + 96LL))( /*0x17a03f*/
                     v26,
                     "https://www.boomlings.com/GDEditor");
    }
    else
    {
      LOBYTE(v7) = EditLevelLayer_onEdit(a1 - 416); /*0x17a057*/
    }
  }
  else if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 9 && a3 ) /*0x17a071*/
  {
    sub_178100(a1 - 416); /*0x17a081*/
    v27 = a1 + 8; /*0x17a086*/
    if ( a1 == 416 ) /*0x17a08d*/
      v27 = 0; /*0x17a08d*/
    v28 = *(_QWORD *)&qword_905FB0; /*0x17a091*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x17a09b*/
    {
      v42 = operator new(0x690u); /*0x17a0a7*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v42); /*0x17a0b5*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x17a0c6*/
      v28 = *(_QWORD *)&qword_905FB0; /*0x17a0c8*/
    }
    *(_QWORD *)(v28 + 1488) = v27; /*0x17a0cf*/
    sub_3E4F0(&v35, *(_QWORD *)(a1 + 56) + 376LL); /*0x17a0f0*/
    v29 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 328LL) - *(_DWORD *)(*(_QWORD *)(a1 + 56) + 332LL); /*0x17a100*/
    v30 = *(_QWORD *)&qword_905FB0; /*0x17a106*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x17a110*/
    {
      v43 = operator new(0x690u); /*0x17a11c*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v43); /*0x17a12a*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x17a13b*/
      v30 = *(_QWORD *)&qword_905FB0; /*0x17a13e*/
    }
    LOBYTE(v7) = sub_2552A0(v30, v29, &v35); /*0x17a14c*/
    if ( (_BYTE)v7 ) /*0x17a153*/
    {
      v31 = *(_QWORD *)(a1 + 120); /*0x17a159*/
      if ( v31 ) /*0x17a160*/
      {
        *(_QWORD *)(v31 + 664) = 0; /*0x17a162*/
        *(_QWORD *)(a1 + 120) = 0; /*0x17a169*/
      }
      v35 = 0; /*0x17a170*/
      v36 = 0; /*0x17a175*/
      v37 = 0; /*0x17a17a*/
      *(_QWORD *)&v35 = sub_3C460(32); /*0x17a189*/
      v36 = 23; /*0x17a18e*/
      v37 = 31; /*0x17a197*/
      strcpy((char *)v35, "Updating description..."); /*0x17a1a7*/
      v32 = a1 + 16; /*0x17a1cc*/
      if ( a1 == 416 ) /*0x17a1d3*/
        v32 = 0; /*0x17a1d3*/
      v33 = sub_39D2A0(v32, &v35); /*0x17a1dc*/
      *(_QWORD *)(a1 + 120) = v33; /*0x17a1e1*/
      LOBYTE(v7) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 1064LL))(v33); /*0x17a1fe*/
    }
  }
  else
  {
    LODWORD(v7) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x17a207*/
    if ( (_DWORD)v7 == 11 ) /*0x17a20d*/
    {
      if ( a3 ) /*0x17a212*/
        *(_BYTE *)(a1 + 128) = 1; /*0x17a214*/
      else
        sub_260AB0(*(_QWORD *)(a1 + 56)); /*0x17a221*/
      LOBYTE(v7) = (unsigned __int8)EditLevelLayer_onPlay(a1 - 416); /*0x17a22f*/
    }
  }
  return v7; /*0x179d17*/
}

// [10/18] Address: 0x17a5d0
// Method: EditLevelLayer::onSetFolder
void __fastcall EditLevelLayer_onSetFolder(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 472); /*0x17a5d9*/
  if ( v3 ) /*0x17a5e3*/
  {
    v6[2] = 10; /*0x17a5f4*/
    v6[1] = 29285; /*0x17a5fd*/
    LOBYTE(a2) = 1; /*0x17a602*/
    v6[3] = 15; /*0x17a604*/
    v6[0] = 0x646C6F4620746553LL; /*0x17a615*/
    v4 = (_QWORD *)SetFolderPopup_create(*(unsigned int *)(v3 + 988), a2, v6); /*0x17a62b*/
    v5 = a1 + 440; /*0x17a632*/
    if ( !a1 ) /*0x17a63c*/
      v5 = 0; /*0x17a63c*/
    v4[87] = v5; /*0x17a640*/
    (*(void (__fastcall **)(_QWORD *))(*v4 + 1064LL))(v4); /*0x17a654*/
  }
}

// [11/18] Address: 0x17a660
// Method: EditLevelLayer::setIDPopupClosed
void __fastcall EditLevelLayer_setIDPopupClosed(__int64 a1, __int64 a2, int a3)
{
  int v3; // edx
  cocos2d::CCString *v5; // rax
  const char *CString; // rax

  v3 = 0; /*0x17a666*/
  if ( a3 >= 0 ) /*0x17a673*/
    v3 = a3; /*0x17a673*/
  if ( v3 > 999 ) /*0x17a679*/
    v3 = 999; /*0x17a679*/
  *(_DWORD *)(*(_QWORD *)(a1 + 32) + 988LL) = v3; /*0x17a687*/
  v5 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8); /*0x17a68d*/
  CString = cocos2d::CCString::getCString(v5); /*0x17a696*/
  (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 48) + 360LL))( /*0x17a6b0*/
    *(_QWORD *)(a1 + 48) + 360LL,
    CString);
  cocos2d::CCLabelBMFont::limitLabelWidth(*(cocos2d::CCLabelBMFont **)(a1 + 48), 24.0, 0.55000001, 0.0); /*0x17a6cf*/
}

// [12/18] Address: 0x17a8c0
// Method: EditLevelLayer::onBack
// Hidden C++ exception states: #wind=5
char __fastcall EditLevelLayer_onBack(__int64 a1)
{
  struct cocos2d::CCScene *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  struct cocos2d::CCScene *v9; // rbx
  __int64 v10; // rcx
  cocos2d::CCDirector *v11; // rax
  void *v13; // [rsp+20h] [rbp-38h]
  void *v14; // [rsp+20h] [rbp-38h]
  void *v15; // [rsp+20h] [rbp-38h]
  _QWORD v16[4]; // [rsp+28h] [rbp-30h] BYREF

  v2 = 0; /*0x17a8dc*/
  v3 = cocos2d::CCDirector::sharedDirector(a1); /*0x17a8de*/
  if ( !*(_BYTE *)(v3 + 176) ) /*0x17a8e4*/
  {
    sub_178100(a1); /*0x17a8f3*/
    GJComment_create(a1); /*0x17a8fb*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x17a908*/
    v4 = *(_QWORD *)&qword_905FB0; /*0x17a90e*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x17a918*/
    {
      v13 = operator new(0x690u); /*0x17a924*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v13); /*0x17a932*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x17a943*/
      v4 = *(_QWORD *)&qword_905FB0; /*0x17a945*/
    }
    sub_3E4F0(v16, v4 + 1272); /*0x17a958*/
    v5 = v16; /*0x17a95e*/
    if ( v16[3] > 0xFu ) /*0x17a969*/
      v5 = (_QWORD *)v16[0]; /*0x17a969*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x17a977*/
    {
      v14 = operator new(0x690u); /*0x17a983*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v14); /*0x17a991*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x17a99e*/
    }
    v6 = GJSearchObject_createFromKey(v5); /*0x17a9a4*/
    if ( v6 ) /*0x17a9ac*/
      v2 = (struct cocos2d::CCScene *)LevelBrowserLayer_scene(v6); /*0x17a9b6*/
    sub_3C310(v16); /*0x17a9be*/
    v7 = *(_QWORD *)&qword_905FB0; /*0x17a9c3*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x17a9cd*/
    {
      v15 = operator new(0x690u); /*0x17a9d9*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v15); /*0x17a9e7*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x17a9f8*/
      v7 = *(_QWORD *)&qword_905FB0; /*0x17a9fa*/
    }
    if ( *(_BYTE *)(v7 + 1344) || !v2 ) /*0x17aa0d*/
    {
      *(_BYTE *)(v7 + 1344) = 0; /*0x17aa0f*/
      v8 = GJSearchObject_create(98); /*0x17aa1b*/
      v2 = (struct cocos2d::CCScene *)LevelBrowserLayer_scene(v8); /*0x17aa28*/
    }
    v9 = cocos2d::CCTransitionFade::create(0.5, v2); /*0x17aa3c*/
    v11 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v10); /*0x17aa3f*/
    LOBYTE(v3) = cocos2d::CCDirector::replaceScene(v11, v9); /*0x17aa4b*/
  }
  return v3; /*0x17aa51*/
}

// [13/18] Address: 0x17ad50
// Method: EditLevelLayer::keyBackClicked
char __fastcall EditLevelLayer_keyBackClicked(__int64 a1)
{
  return EditLevelLayer_onBack(a1 - 336);
}

// [14/18] Address: 0x17ad60
// Method: EditLevelLayer::keyDown
struct cocos2d::CCAction *__fastcall EditLevelLayer_keyDown(__int64 a1, int a2)
{
  if ( a2 == 32 || a2 == 1009 ) /*0x17ad6b*/
    return EditLevelLayer_onPlay(a1 - 344); /*0x17ad7d*/
  else
    return (struct cocos2d::CCAction *)cocos2d::CCLayer::keyDown(); /*0x17ad6d*/
}

// [15/18] Address: 0x17ad90
// Method: EditLevelLayer::onClosePopup
__int64 __fastcall EditLevelLayer_onClosePopup(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 result; // rax

  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 992LL))(a2, 0); /*0x17ada8*/
  LOBYTE(v4) = 1; /*0x17adb1*/
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 520LL))(a2, v4); /*0x17adb6*/
  *(_QWORD *)(a1 + 104) = 0; /*0x17adc1*/
  return result; /*0x17adbc*/
}

// [16/18] Address: 0x17add0
// Method: EditLevelLayer::uploadActionFinished
// Hidden C++ exception states: #wind=1
void __fastcall EditLevelLayer_uploadActionFinished(__int64 a1, int a2)
{
  __int64 v3; // rcx
  void *v4; // rdx
  __int64 v5; // r8
  void *v6; // rcx
  __int128 v7; // [rsp+30h] [rbp-58h] BYREF
  __int64 v8; // [rsp+40h] [rbp-48h]
  __int64 v9; // [rsp+48h] [rbp-40h]
  void *Block[2]; // [rsp+50h] [rbp-38h]
  __m128i si128; // [rsp+60h] [rbp-28h]

  v3 = *(_QWORD *)(a1 + 48); /*0x17ade0*/
  if ( v3 ) /*0x17ade7*/
  {
    if ( *(_DWORD *)(v3 + 328) - *(_DWORD *)(v3 + 332) == a2 ) /*0x17adfb*/
    {
      if ( *(_QWORD *)(a1 + 112) ) /*0x17ae01*/
      {
        *(_OWORD *)Block = 0; /*0x17ae0f*/
        v4 = (void *)sub_3C460(32); /*0x17ae1e*/
        Block[0] = v4; /*0x17ae21*/
        si128 = _mm_load_si128((const __m128i *)&xmmword_831010); /*0x17ae2e*/
        strcpy((char *)v4, "Description updated!"); /*0x17ae3b*/
        v7 = 0; /*0x17ae4e*/
        v8 = 0; /*0x17ae55*/
        v9 = 0; /*0x17ae5a*/
        v5 = -1; /*0x17ae5f*/
        do /*0x17ae69*/
          ++v5; /*0x17ae66*/
        while ( *((_BYTE *)v4 + v5) ); /*0x17ae69*/
        sub_3C230(&v7); /*0x17ae74*/
        UploadActionPopup_showSuccessMessage(*(_QWORD *)(a1 + 112), &v7); /*0x17ae82*/
        *(_QWORD *)(*(_QWORD *)(a1 + 112) + 664LL) = 0; /*0x17ae8b*/
        *(_QWORD *)(a1 + 112) = 0; /*0x17ae92*/
        if ( si128.m128i_i64[1] > 0xFuLL ) /*0x17ae9f*/
        {
          v6 = Block[0]; /*0x17aea4*/
          if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x17aeb3*/
          {
            v6 = (void *)*((_QWORD *)Block[0] - 1); /*0x17aeb9*/
            if ( (unsigned __int64)((char *)Block[0] - (char *)v6 - 8) > 0x1F ) /*0x17aec8*/
              invoke_watson(0, 0, 0, 0, 0); /*0x17aed9*/
          }
          j_j_free(v6); /*0x17aee0*/
        }
      }
    }
  }
}

// [17/18] Address: 0x17af00
// Method: EditLevelLayer::uploadActionFailed
void __fastcall EditLevelLayer_uploadActionFailed(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]
  __int64 v6; // [rsp+38h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 48); /*0x17af06*/
  if ( v2 && *(_DWORD *)(v2 + 328) - *(_DWORD *)(v2 + 332) == a2 ) /*0x17af26*/
  {
    if ( *(_QWORD *)(a1 + 112) ) /*0x17af2c*/
    {
      v4 = 0; /*0x17af50*/
      *(_QWORD *)&v4 = sub_3C460(32); /*0x17af61*/
      v5 = 31; /*0x17af69*/
      v6 = 31; /*0x17af72*/
      strcpy((char *)v4, "Failed. Please try again later."); /*0x17af7b*/
      UploadActionPopup_showFailMessage(*(_QWORD *)(a1 + 112), &v4); /*0x17afb6*/
      *(_QWORD *)(*(_QWORD *)(a1 + 112) + 664LL) = 0; /*0x17afbf*/
      *(_QWORD *)(a1 + 112) = 0; /*0x17afc6*/
    }
  }
}

// [18/18] Address: 0x213380
// Method: EditLevelLayer::verifyLevelName
// Hidden C++ exception states: #wind=10
void __fastcall EditLevelLayer_verifyLevelName(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // r8
  void **v6; // rax
  char v7; // bl
  void *v8; // rcx
  void *v9; // rcx
  _OWORD *v10; // rcx
  __int128 *v11; // r14
  uintptr_t v12; // xmm1_8
  unsigned __int64 v13; // r15
  uintptr_t v14; // rsi
  _BYTE *v15; // rax
  char *v16; // rax
  __int64 v17; // r13
  __int64 v18; // rbx
  void *v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  void *v25; // rcx
  cocos2d::CCString *v26; // rax
  const char *CString; // rax
  cocos2d::CCString *v28; // rax
  char *v29; // rax
  size_t v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int128 *v34; // r15
  __int64 v35; // rbx
  __int128 v36; // xmm0
  uintptr_t *v37; // rdx
  void *v38; // rcx
  _QWORD *v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rcx
  void *Src[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v43; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v44; // [rsp+60h] [rbp-A0h]
  void **v45; // [rsp+68h] [rbp-98h]
  void *Block[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v47; // [rsp+80h] [rbp-80h]
  unsigned __int64 v48; // [rsp+88h] [rbp-78h]
  __int128 v49; // [rsp+90h] [rbp-70h] BYREF
  __int64 v50; // [rsp+A0h] [rbp-60h]
  __int64 v51; // [rsp+A8h] [rbp-58h]
  void *v52[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v53; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v54; // [rsp+C8h] [rbp-38h]
  uintptr_t v55[2]; // [rsp+D0h] [rbp-30h] BYREF
  size_t Size[2]; // [rsp+E0h] [rbp-20h]
  _QWORD v57[4]; // [rsp+F0h] [rbp-10h] BYREF
  _OWORD v58[2]; // [rsp+110h] [rbp+10h] BYREF

  LODWORD(v44) = 0; /*0x2133b7*/
  v2 = *(_QWORD *)(a1 + 920); /*0x2133bb*/
  v3 = -1; /*0x2133c2*/
  if ( v2 ) /*0x2133cc*/
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v2 + 600) + 600LL) + 8LL))(*(_QWORD *)(v2 + 600) + 600LL); /*0x2133df*/
    *(_OWORD *)v52 = 0; /*0x2133e5*/
    v53 = 0; /*0x2133e9*/
    v54 = 0; /*0x2133ed*/
    v5 = -1; /*0x2133f1*/
    do /*0x2133f7*/
      ++v5; /*0x2133f4*/
    while ( *(_BYTE *)(v4 + v5) ); /*0x2133f7*/
    sub_3C230(v52); /*0x213404*/
    v6 = v52; /*0x213409*/
    v7 = 5; /*0x21340d*/
  }
  else
  {
    *(_OWORD *)Block = 0; /*0x213417*/
    v47 = 0; /*0x21341c*/
    v48 = 15; /*0x213420*/
    LOBYTE(Block[0]) = 0; /*0x213428*/
    v6 = Block; /*0x21342d*/
    v7 = 2; /*0x213432*/
  }
  *(_OWORD *)Src = *(_OWORD *)v6; /*0x21343a*/
  v58[0] = *(_OWORD *)Src; /*0x21343f*/
  *(_OWORD *)v55 = *((_OWORD *)v6 + 1); /*0x213447*/
  v58[1] = *(_OWORD *)v55; /*0x21344b*/
  v6[2] = 0; /*0x21344f*/
  v6[3] = &loc_D + 2; /*0x213453*/
  *(_BYTE *)v6 = 0; /*0x21345b*/
  if ( (v7 & 2) != 0 ) /*0x213461*/
  {
    v7 &= ~2u; /*0x213463*/
    if ( v48 > 0xF ) /*0x21346e*/
    {
      v8 = Block[0]; /*0x213473*/
      if ( v48 + 1 >= 0x1000 ) /*0x213482*/
      {
        v8 = (void *)*((_QWORD *)Block[0] - 1); /*0x213488*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F ) /*0x213497*/
          invoke_watson(0, 0, 0, 0, 0); /*0x2134a8*/
      }
      j_j_free(v8); /*0x2134af*/
    }
  }
  if ( (v7 & 1) != 0 && v54 > 0xF ) /*0x2134c2*/
  {
    v9 = v52[0]; /*0x2134c7*/
    if ( v54 + 1 >= 0x1000 ) /*0x2134d5*/
    {
      v9 = (void *)*((_QWORD *)v52[0] - 1); /*0x2134db*/
      if ( (unsigned __int64)((char *)v52[0] - (char *)v9 - 8) > 0x1F ) /*0x2134ea*/
        invoke_watson(0, 0, 0, 0, 0); /*0x2134fb*/
    }
    j_j_free(v9); /*0x213502*/
  }
  v10 = v58; /*0x213507*/
  v11 = (__int128 *)Src[0]; /*0x21350b*/
  v12 = v55[0]; /*0x213510*/
  v13 = _mm_srli_si128(*(__m128i *)v55, 8).m128i_u64[0]; /*0x21351d*/
  v44 = v13; /*0x213522*/
  if ( v13 > 0xF ) /*0x21352b*/
    v10 = Src[0]; /*0x21352b*/
  v14 = v55[0]; /*0x21352f*/
  if ( v55[0] ) /*0x213537*/
  {
    v15 = v10; /*0x21353d*/
    if ( v10 < (_OWORD *)((char *)v10 + v55[0]) ) /*0x213543*/
    {
      while ( *v15 == 32 ) /*0x213548*/
      {
        if ( ++v15 >= (_BYTE *)v10 + v55[0] ) /*0x213550*/
          goto LABEL_24; /*0x213550*/
      }
      if ( v15 - (_BYTE *)v10 != -1 ) /*0x2135a8*/
      {
        v17 = *(_QWORD *)&qword_905FB0; /*0x2135aa*/
        if ( !*(_QWORD *)&qword_905FB0 ) /*0x2135b4*/
        {
          v45 = (void **)operator new(0x690u); /*0x2135c0*/
          *(_QWORD *)&qword_905FB0 = sub_214250(v45); /*0x2135ce*/
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x2135df*/
          v17 = *(_QWORD *)&qword_905FB0; /*0x2135e1*/
        }
        if ( v12 ) /*0x2135eb*/
        {
          *(_OWORD *)v52 = 0; /*0x2135f4*/
          v53 = 0; /*0x2135fa*/
          v54 = 0; /*0x2135fe*/
          sub_3C230(v52); /*0x213613*/
          v18 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(v17 + 1200), v52); /*0x21362a*/
          if ( v54 > 0xF ) /*0x213635*/
          {
            v19 = v52[0]; /*0x21363a*/
            if ( v54 + 1 >= 0x1000 ) /*0x213648*/
            {
              v19 = (void *)*((_QWORD *)v52[0] - 1); /*0x21364e*/
              if ( (unsigned __int64)((char *)v52[0] - (char *)v19 - 8) > 0x1F ) /*0x21365d*/
                invoke_watson(0, 0, 0, 0, 0); /*0x213672*/
            }
            j_j_free(v19); /*0x21367c*/
          }
          if ( !v18 ) /*0x213684*/
          {
            *(_OWORD *)v52 = 0; /*0x21368d*/
            v53 = 0; /*0x213694*/
            v54 = 0; /*0x213698*/
            sub_3C230(v52); /*0x2136ad*/
            v20 = *(_QWORD *)(v17 + 1200); /*0x2136b3*/
            v23 = cocos2d::CCNode::create(v22, v21); /*0x2136ba*/
            cocos2d::CCDictionary::setObject(v20, v23, v52); /*0x2136ca*/
            if ( v54 > 0xF ) /*0x2136d9*/
            {
              v25 = v52[0]; /*0x2136de*/
              if ( v54 + 1 >= 0x1000 ) /*0x2136ec*/
              {
                v25 = (void *)*((_QWORD *)v52[0] - 1); /*0x2136f2*/
                if ( (unsigned __int64)((char *)v52[0] - (char *)v25 - 8) > 0x1F ) /*0x213701*/
                  invoke_watson(0, 0, 0, 0, 0); /*0x213712*/
              }
              j_j_free(v25); /*0x213719*/
            }
            GameLevelManager_getBasePostString(v24, v57); /*0x213722*/
            v26 = cocos2d::CCString::createWithFormat( /*0x21375e*/
                    "%c%s%s%c%c%s",
                    87,
                    "mfd",
                    "2893",
                    103,
                    98,
                    (const char *)&word_708030);
            CString = cocos2d::CCString::getCString(v26); /*0x213767*/
            v28 = cocos2d::CCString::createWithFormat("&secret=%s&str=", CString); /*0x213777*/
            v29 = (char *)cocos2d::CCString::getCString(v28); /*0x213780*/
            v30 = -1; /*0x213786*/
            do /*0x213793*/
              ++v30; /*0x213790*/
            while ( v29[v30] ); /*0x213793*/
            sub_43D80(v57, v29, v30); /*0x2137a1*/
            *(_OWORD *)Src = 0; /*0x2137a9*/
            v43 = 0u; /*0x2137ae*/
            v34 = v58; /*0x2137b8*/
            if ( v44 > 0xF ) /*0x2137c2*/
              v34 = v11; /*0x2137c2*/
            v35 = 0x7FFFFFFFFFFFFFFFLL; /*0x2137c6*/
            if ( v12 > 0x7FFFFFFFFFFFFFFFLL ) /*0x2137d3*/
              sub_8D90(v32, v31, v33); /*0x213ab9*/
            if ( v12 > 0xF ) /*0x2137dd*/
            {
              if ( (v12 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x213802*/
              {
                v35 = v14 | 0xF; /*0x213804*/
                if ( (v12 | 0xF) < 0x16 ) /*0x21380f*/
                  v35 = 22; /*0x21380f*/
              }
              Src[0] = (void *)sub_3C460(v35 + 1); /*0x21381c*/
              *(_QWORD *)&v43 = v12; /*0x213821*/
              *((_QWORD *)&v43 + 1) = v35; /*0x213826*/
              memcpy(Src[0], v34, v12 + 1); /*0x213835*/
              v14 = v12; /*0x21383a*/
              v36 = *(_OWORD *)Src; /*0x21383f*/
            }
            else
            {
              *(_QWORD *)&v43 = v12; /*0x2137df*/
              *((_QWORD *)&v43 + 1) = 15; /*0x2137e4*/
              v36 = *v34; /*0x2137ed*/
              *(_OWORD *)Src = *v34; /*0x2137f1*/
            }
            v45 = Src; /*0x213849*/
            if ( v14 ) /*0x213851*/
            {
              cocos2d::ZipUtils::base64URLEncode(v55, Src); /*0x213888*/
            }
            else
            {
              *(_OWORD *)v55 = v36; /*0x213853*/
              *(_OWORD *)Size = v43; /*0x21385c*/
              *(_QWORD *)&v43 = 0; /*0x213860*/
              *((_QWORD *)&v43 + 1) = 15; /*0x213865*/
              LOBYTE(Src[0]) = 0; /*0x21386e*/
            }
            sub_3C310(Src); /*0x213878*/
            v37 = v55; /*0x21389b*/
            if ( Size[1] > 0xF ) /*0x2138a4*/
              v37 = (uintptr_t *)v55[0]; /*0x2138a4*/
            sub_43D80(v57, v37, Size[0]); /*0x2138b1*/
            if ( Size[1] > 0xF ) /*0x2138bf*/
            {
              v38 = (void *)v55[0]; /*0x2138c4*/
              if ( Size[1] + 1 >= 0x1000 ) /*0x2138d2*/
              {
                v38 = *(void **)(v55[0] - 8); /*0x2138d8*/
                if ( v55[0] - (unsigned __int64)v38 - 8 > 0x1F ) /*0x2138e7*/
                  invoke_watson(0, 0, 0, 0, 0); /*0x2138f8*/
              }
              j_j_free(v38); /*0x2138ff*/
            }
            v45 = v52; /*0x213908*/
            v55[0] = (uintptr_t)&v49; /*0x213911*/
            *(_OWORD *)v52 = 0; /*0x213918*/
            v53 = 0; /*0x21391c*/
            v54 = 0; /*0x213920*/
            sub_3C230(v52); /*0x213935*/
            v39 = v57; /*0x21393b*/
            if ( v57[3] > 0xFu ) /*0x213944*/
              v39 = (_QWORD *)v57[0]; /*0x213944*/
            v49 = 0; /*0x21394c*/
            v50 = 0; /*0x213950*/
            v51 = 0; /*0x213954*/
            do /*0x213963*/
              ++v3; /*0x213960*/
            while ( *((_BYTE *)v39 + v3) ); /*0x213963*/
            sub_3C230(&v49); /*0x213970*/
            *(_OWORD *)Block = 0; /*0x213979*/
            v47 = 0; /*0x21397e*/
            v48 = 0; /*0x213982*/
            Block[0] = (void *)sub_3C460(64); /*0x213993*/
            v47 = 54; /*0x213998*/
            v48 = 63; /*0x2139a0*/
            strcpy((char *)Block[0], "https://www.boomlings.com/database/getGJUserSearch.php"); /*0x2139af*/
            sub_216210(v17, Block, &v49, v52, 96); /*0x2139f8*/
            sub_3C310(v57); /*0x213a02*/
            v40 = *(_QWORD *)&qword_905FB0; /*0x213a0f*/
            if ( !*(_QWORD *)&qword_905FB0 ) /*0x213a19*/
            {
              Src[0] = operator new(0x690u); /*0x213a25*/
              *(_QWORD *)&qword_905FB0 = sub_214250(Src[0]); /*0x213a33*/
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x213a44*/
              v40 = *(_QWORD *)&qword_905FB0; /*0x213a46*/
            }
            *(_QWORD *)(v40 + 1496) = a1 + 808; /*0x213a4d*/
            v41 = *(_QWORD *)(a1 + 760); /*0x213a54*/
            if ( v41 ) /*0x213a5f*/
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 512LL))(v41); /*0x213a64*/
              *(_QWORD *)(a1 + 760) = 0; /*0x213a6a*/
            }
            sub_C18E0(a1); /*0x213a75*/
            v13 = v44; /*0x213a7a*/
          }
        }
      }
    }
  }
LABEL_24:
  if ( v13 > 0xF ) /*0x213558*/
  {
    v16 = (char *)v11; /*0x213562*/
    if ( v13 + 1 >= 0x1000 ) /*0x21356c*/
    {
      v11 = (__int128 *)*((_QWORD *)v11 - 1); /*0x213576*/
      if ( (unsigned __int64)(v16 - (char *)v11 - 8) > 0x1F ) /*0x213585*/
        invoke_watson(0, 0, 0, 0, 0); /*0x21359a*/
    }
    j_j_free(v11); /*0x213a87*/
  }
}

// Address: 0x177890
// Method: EditLevelLayer::setupLevelInfo
// Hidden C++ exception states: #wind=3
void __fastcall EditLevelLayer_setupLevelInfo(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct cocos2d::CCObject *v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct cocos2d::CCObject *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct cocos2d::CCObject *v12; // rbx
  __int64 v13; // rax
  struct cocos2d::CCLabelBMFont *v14; // r15
  _OWORD *SongName; // rax
  struct cocos2d::CCObject *v16; // r12
  unsigned __int64 v17; // rdi
  __int64 v18; // rcx
  char *v19; // rax
  char v20; // bl
  int *v21; // rcx
  int *v22; // rcx
  const char *p_Src; // rcx
  cocos2d::CCLabelBMFont *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  struct cocos2d::CCObject *v28; // rbx
  struct cocos2d::CCObject *v29; // rdx
  cocos2d::CCArray *v30; // r15
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  cocos2d::CCDirector *v35; // rax
  float v36; // xmm0_4
  __int64 v37; // rax
  cocos2d::CCString *v38; // rax
  const char *CString; // rax
  struct cocos2d::CCLabelBMFont *v40; // rdi
  const char *v41; // rax
  int v42; // edx
  cocos2d::CCString *v43; // rax
  int v44; // r8d
  cocos2d::CCString *v45; // rax
  struct cocos2d::CCLabelBMFont *v46; // rbx
  __int64 v47; // rcx
  cocos2d::CCDirector *v48; // rax
  float ScreenBottom; // xmm0_4
  __int64 v50; // rax
  __int64 v51; // rax
  void *v52; // rcx
  _BYTE v53[8]; // [rsp+30h] [rbp-99h] BYREF
  struct cocos2d::CCObject *v54; // [rsp+38h] [rbp-91h] BYREF
  struct cocos2d::CCObject *v55; // [rsp+40h] [rbp-89h] BYREF
  cocos2d::CCArray *v56; // [rsp+48h] [rbp-81h]
  struct cocos2d::CCObject *v57; // [rsp+50h] [rbp-79h]
  struct cocos2d::CCSprite *v58; // [rsp+58h] [rbp-71h]
  float v59; // [rsp+60h] [rbp-69h] BYREF
  _BYTE v60[8]; // [rsp+68h] [rbp-61h] BYREF
  struct cocos2d::CCObject *v61; // [rsp+70h] [rbp-59h]
  __int128 Src; // [rsp+78h] [rbp-51h] BYREF
  __int64 v63; // [rsp+88h] [rbp-41h]
  unsigned __int64 v64; // [rsp+90h] [rbp-39h]
  _BYTE v65[32]; // [rsp+98h] [rbp-31h] BYREF
  _OWORD v66[2]; // [rsp+B8h] [rbp-11h] BYREF

  v2 = cocos2d::CCDirector::sharedDirector(a1);
  cocos2d::CCDirector::getWinSize(v2, &v59);
  v56 = (cocos2d::CCArray *)cocos2d::CCArray::create(v3);
  v6 = (struct cocos2d::CCObject *)cocos2d::CCNode::create(v5, v4);
  (*(void (__fastcall **)(__int64 *, struct cocos2d::CCObject *))(*a1 + 464))(a1, v6);
  v9 = (struct cocos2d::CCObject *)cocos2d::CCNode::create(v8, v7);
  v55 = v9;
  (*(void (__fastcall **)(__int64 *, struct cocos2d::CCObject *))(*a1 + 464))(a1, v9);
  v12 = (struct cocos2d::CCObject *)cocos2d::CCNode::create(v11, v10);
  v57 = v12;
  (*(void (__fastcall **)(__int64 *, struct cocos2d::CCObject *))(*a1 + 464))(a1, v12);
  v61 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_timeIcon_001.png");
  (*(void (__fastcall **)(struct cocos2d::CCObject *, struct cocos2d::CCObject *))(*(_QWORD *)v6 + 464LL))(v6, v61);
  v54 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_noteIcon_001.png");
  (*(void (__fastcall **)(struct cocos2d::CCObject *, struct cocos2d::CCObject *))(*(_QWORD *)v9 + 464LL))(v9, v54);
  v58 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_infoIcon_001.png");
  (*(void (__fastcall **)(struct cocos2d::CCObject *, struct cocos2d::CCSprite *))(*(_QWORD *)v12 + 464LL))(v12, v58);
  v13 = sub_260E90(v65, *(unsigned int *)(a1[59] + 972));
  if ( *(_QWORD *)(v13 + 24) > 0xFu )
    v13 = *(_QWORD *)v13;
  v14 = cocos2d::CCLabelBMFont::create((const char *)v13, (const char *)&qword_6FFF68);
  sub_3C310(v65);
  (*(void (__fastcall **)(struct cocos2d::CCObject *, struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v6 + 464LL))(v6, v14);
  fminf(
    100.0 / *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v14 + 320LL))(v14),
    0.5);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v14 + 160LL))(v14);
  SongName = GJGameLevel_getSongName(a1[59], v66);
  if ( *((_QWORD *)SongName + 3) > 0xFu )
    SongName = *(_OWORD **)SongName;
  v16 = cocos2d::CCLabelBMFont::create((const char *)SongName, (const char *)&qword_6FFF68);
  sub_3C310(v66);
  (*(void (__fastcall **)(struct cocos2d::CCObject *, struct cocos2d::CCObject *))(*(_QWORD *)v9 + 464LL))(v9, v16);
  fminf(100.0 / *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v16 + 320LL))(v16), 0.5);
  (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v16 + 160LL))(v16);
  Src = 0;
  v63 = 0;
  v17 = 15;
  v64 = 15;
  LOBYTE(Src) = 0;
  v18 = a1[59];
  if ( *(_BYTE *)(v18 + 857) )
  {
    v63 = 8;
    strcpy((char *)&Src, "Uploaded");
  }
  else if ( *(_DWORD *)(v18 + 848) - *(_DWORD *)(v18 + 852) == 1 )
  {
    v63 = 8;
    strcpy((char *)&Src, "Verified");
  }
  else
  {
    v63 = 10;
    strcpy((char *)&Src, "Unverified");
    if ( *(int *)(v18 + 1036) > 0 )
    {
      v19 = (char *)sub_3C460(32);
      v63 = 23;
      v64 = 31;
      strcpy(v19, "Unverified\nReq. Coins: ");
      *(_QWORD *)&Src = v19;
      v9 = v55;
      v20 = 1;
      if ( *(_DWORD *)(a1[59] + 1080) - *(_DWORD *)(a1[59] + 1084) != 1 )
      {
        v20 = 0;
        sub_43D80(&Src, &word_708050, 1u);
      }
      v21 = (int *)a1[59];
      if ( v21[259] >= 2 && v21[273] - v21[274] != 1 )
      {
        if ( !v20 )
          sub_43D80(&Src, ", ", 2u);
        v20 = 0;
        sub_43D80(&Src, &word_708048, 1u);
      }
      v22 = (int *)a1[59];
      if ( v22[259] >= 3 && v22[276] - v22[277] != 1 )
      {
        if ( !v20 )
          sub_43D80(&Src, ", ", 2u);
        sub_43D80(&Src, &word_708044, 1u);
      }
      v12 = v57;
      v17 = v64;
    }
  }
  p_Src = (const char *)&Src;
  if ( v17 > 0xF )
    p_Src = (const char *)Src;
  v24 = cocos2d::CCLabelBMFont::create(p_Src, (const char *)&qword_6FFF68);
  (*(void (__fastcall **)(struct cocos2d::CCObject *, cocos2d::CCLabelBMFont *))(*(_QWORD *)v12 + 464LL))(v12, v24);
  cocos2d::CCLabelBMFont::limitLabelWidth(v24, 100.0, 0.5, 0.0);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v53, 0.0, 2.0);
  v26 = v25;
  v27 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v58 + 200LL))(v58);
  cocos2d::CCPoint::operator+(v27, &v55, v26);
  v28 = v58;
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, struct cocos2d::CCObject **))(*(_QWORD *)v58 + 184LL))(v58, &v55);
  cocos2d::CCArray::removeAllObjects(v56);
  cocos2d::CCArray::addObject(v56, v61);
  v29 = v14;
  v30 = v56;
  cocos2d::CCArray::addObject(v56, v29);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v53, (const struct cocos2d::CCPoint *)&unk_904508);
  GameToolbox_alignItemsHorisontally((__int64)v30, 4.0, v31, 0);
  cocos2d::CCArray::removeAllObjects(v30);
  cocos2d::CCArray::addObject(v30, v54);
  cocos2d::CCArray::addObject(v30, v16);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v53, (const struct cocos2d::CCPoint *)&unk_904508);
  GameToolbox_alignItemsHorisontally((__int64)v30, 4.0, v32, 0);
  cocos2d::CCArray::removeAllObjects(v30);
  cocos2d::CCArray::addObject(v30, v28);
  cocos2d::CCArray::addObject(v30, v24);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v53, (const struct cocos2d::CCPoint *)&unk_904508);
  GameToolbox_alignItemsHorisontally((__int64)v30, 4.0, v33, 0);
  cocos2d::CCArray::removeAllObjects(v30);
  cocos2d::CCArray::addObject(v30, v6);
  cocos2d::CCArray::addObject(v30, v9);
  cocos2d::CCArray::addObject(v30, v57);
  v35 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v34);
  v36 = cocos2d::CCDirector::getScreenBottom(v35) + 55.0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v53, v59 * 0.5, v36);
  GameToolbox_alignItemsHorisontally((__int64)v30, 140.0, v37, 0);
  v38 = cocos2d::CCString::createWithFormat("Version: %i", *(_DWORD *)(a1[59] + 860));
  CString = cocos2d::CCString::getCString(v38);
  v40 = cocos2d::CCLabelBMFont::create(CString, "goldFont.fnt");
  (*(void (__fastcall **)(__int64 *, struct cocos2d::CCLabelBMFont *))(*a1 + 464))(a1, v40);
  v41 = "ID: na";
  v42 = *(_DWORD *)(a1[59] + 328) - *(_DWORD *)(a1[59] + 332);
  if ( v42 )
  {
    v43 = cocos2d::CCString::createWithFormat("ID: %i", v42);
    v41 = cocos2d::CCString::getCString(v43);
  }
  v44 = *(_DWORD *)(a1[59] + 1060) - *(_DWORD *)(a1[59] + 1064);
  if ( v44 )
  {
    v45 = cocos2d::CCString::createWithFormat("%s (%i)", v41, v44);
    v41 = cocos2d::CCString::getCString(v45);
  }
  v46 = cocos2d::CCLabelBMFont::create(v41, "goldFont.fnt");
  (*(void (__fastcall **)(__int64 *, struct cocos2d::CCLabelBMFont *))(*a1 + 464))(a1, v46);
  v48 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v47);
  ScreenBottom = cocos2d::CCDirector::getScreenBottom(v48);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v60, v59 * 0.5, ScreenBottom + 14.0);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v53, -75.0, 0.0);
  cocos2d::CCPoint::operator+(v60, &v54, v50);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, struct cocos2d::CCObject **))(*(_QWORD *)v40 + 184LL))(
    v40,
    &v54);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v53, 75.0, 0.0);
  cocos2d::CCPoint::operator+(v60, &v54, v51);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, struct cocos2d::CCObject **))(*(_QWORD *)v46 + 184LL))(
    v46,
    &v54);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v40 + 160LL))(v40);
  if ( *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v46 + 320LL))(v46) > 150.0 )
  {
    (*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v46 + 320LL))(v46);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v46 + 160LL))(v46);
  }
  fminf(
    0.60000002,
    COERCE_FLOAT(COERCE_UNSIGNED_INT64((*(double (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v46 + 168LL))(v46))));
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v46 + 160LL))(v46);
  if ( v64 > 0xF )
  {
    v52 = (void *)Src;
    if ( v64 + 1 >= 0x1000 )
    {
      v52 = *(void **)(Src - 8);
      if ( (unsigned __int64)(Src - (_QWORD)v52 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v52);
  }
}
