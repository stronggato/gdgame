#include <Geode/binding/OptionsLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/8] Address: 0x11ba70
// Method: OptionsLayer::onMenuMusic
// Hidden C++ exception states: #wind=9
__int64 __fastcall OptionsLayer_onMenuMusic(__int64 a1)
{
  __int64 result; // rax
  char v2; // bl
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  void *v7; // [rsp+40h] [rbp+18h]
  void *v8; // [rsp+40h] [rbp+18h]
  void *v9; // [rsp+40h] [rbp+18h]
  void *v10; // [rsp+40h] [rbp+18h]

  if ( !qword_905FD0 ) /*0x11ba7e*/
  {
    v7 = operator new(0x6E8u); /*0x11ba8a*/
    qword_905FD0 = sub_2723A0(v7); /*0x11ba98*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x11baa9*/
  }
  result = GameManager_toggleGameVariable(a1, "0207"); /*0x11bab2*/
  v2 = result; /*0x11bab7*/
  v3 = qword_905FD0; /*0x11baba*/
  if ( !qword_905FD0 ) /*0x11bac4*/
  {
    v8 = operator new(0x6E8u); /*0x11bad0*/
    qword_905FD0 = sub_2723A0(v8); /*0x11bade*/
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x11baef*/
    v3 = qword_905FD0; /*0x11baf1*/
  }
  v4 = *(_QWORD *)(v3 + 560); /*0x11baf8*/
  if ( v4 ) /*0x11bb02*/
  {
    if ( v2 ) /*0x11bb0a*/
    {
      v5 = *(_QWORD *)(v4 + 2176); /*0x11bb10*/
      if ( v5 ) /*0x11bb1c*/
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 512LL))(v5); /*0x11bb24*/
        v3 = qword_905FD0; /*0x11bb2a*/
        if ( !qword_905FD0 ) /*0x11bb34*/
        {
          v9 = operator new(0x6E8u); /*0x11bb40*/
          qword_905FD0 = sub_2723A0(v9); /*0x11bb4e*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x11bb5f*/
          v3 = qword_905FD0; /*0x11bb61*/
        }
        *(_QWORD *)(*(_QWORD *)(v3 + 560) + 2176LL) = 0; /*0x11bb6f*/
      }
      v6 = *(_QWORD *)(*(_QWORD *)(v3 + 560) + 2184LL); /*0x11bb7d*/
      if ( v6 ) /*0x11bb87*/
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 512LL))(v6); /*0x11bb8f*/
        v3 = qword_905FD0; /*0x11bb95*/
        if ( !qword_905FD0 ) /*0x11bb9f*/
        {
          v10 = operator new(0x6E8u); /*0x11bbab*/
          qword_905FD0 = sub_2723A0(v10); /*0x11bbb9*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x11bbca*/
          v3 = qword_905FD0; /*0x11bbcc*/
        }
        *(_QWORD *)(*(_QWORD *)(v3 + 560) + 2184LL) = 0; /*0x11bbda*/
      }
    }
    return sub_51A430(*(_QWORD *)(v3 + 560)); /*0x11bbed*/
  }
  return result; /*0x11bbe8*/
}

// [2/8] Address: 0x4c6600
// Method: OptionsLayer::~OptionsLayer
char *__fastcall OptionsLayer__dtor_OptionsLayer(char *Block, char a2)
{
  char *v4; // rdi
  __int64 v5; // rax
  void *v6; // rax

  *(_QWORD *)Block = &OptionsLayer::`vftable'; /*0x4c661b*/
  *((_QWORD *)Block + 40) = &OptionsLayer::`vftable'; /*0x4c6625*/
  *((_QWORD *)Block + 41) = &OptionsLayer::`vftable'; /*0x4c6633*/
  *((_QWORD *)Block + 42) = &OptionsLayer::`vftable'; /*0x4c6641*/
  *((_QWORD *)Block + 43) = &OptionsLayer::`vftable'; /*0x4c664f*/
  *((_QWORD *)Block + 44) = &OptionsLayer::`vftable'; /*0x4c665d*/
  *((_QWORD *)Block + 51) = &OptionsLayer::`vftable'; /*0x4c666b*/
  *((_QWORD *)Block + 54) = &OptionsLayer::`vftable'; /*0x4c6679*/
  *((_QWORD *)Block + 76) = &OptionsLayer::`vftable'; /*0x4c6687*/
  v4 = Block + 616; /*0x4c668e*/
  *((_QWORD *)Block + 77) = &OptionsLayer::`vftable'; /*0x4c669c*/
  v5 = qword_905FD0; /*0x4c669f*/
  if ( !qword_905FD0 ) /*0x4c66a9*/
  {
    v6 = operator new(0x6E8u); /*0x4c66b0*/
    qword_905FD0 = sub_2723A0(v6); /*0x4c66bd*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4c66ce*/
    v5 = qword_905FD0; /*0x4c66d0*/
  }
  if ( *(char **)(v5 + 984) == v4 ) /*0x4c66de*/
    *(_QWORD *)(v5 + 984) = 0; /*0x4c66e0*/
  GJDropDownLayer__dtor_GJDropDownLayer((struct cocos2d::CCObject *)Block); /*0x4c66ee*/
  if ( (a2 & 1) != 0 ) /*0x4c66f8*/
    j_j_free(Block); /*0x4c6702*/
  return Block; /*0x4c670a*/
}

// [3/8] Address: 0x4c6bb0
// Method: OptionsLayer::volumeChanged
void __fastcall OptionsLayer_volumeChanged(__int64 a1)
{
  void *v2; // [rsp+30h] [rbp+8h]
  void *v3; // [rsp+30h] [rbp+8h]

  if ( *(_QWORD *)(a1 + 32) ) /*0x4c6bb9*/
  {
    if ( !qword_905F60 ) /*0x4c6bca*/
    {
      v2 = operator new(0x8A8u); /*0x4c6bd6*/
      qword_905F60 = sub_5AE20(v2); /*0x4c6be4*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x4c6bf5*/
    }
    sub_83840(*(_QWORD *)(a1 + 32)); /*0x4c6c0a*/
  }
  if ( *(_QWORD *)(a1 + 40) ) /*0x4c6c0f*/
  {
    if ( !qword_905F60 ) /*0x4c6c20*/
    {
      v3 = operator new(0x8A8u); /*0x4c6c2c*/
      qword_905F60 = sub_5AE20(v3); /*0x4c6c3a*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x4c6c4b*/
    }
    sub_83840(*(_QWORD *)(a1 + 40)); /*0x4c6c65*/
  }
}

// [5/8] Address: 0x4c7930
// Method: OptionsLayer::musicSliderChanged
// Hidden C++ exception states: #wind=3
__int64 __fastcall OptionsLayer_musicSliderChanged(__int64 a1, __int64 a2)
{
  float Value; // xmm6_4
  __int64 result; // rax
  float v4; // xmm8_4
  __int64 v5; // rcx
  __int64 v6; // rcx
  void *v7; // [rsp+68h] [rbp+10h]
  void *v8; // [rsp+68h] [rbp+10h]

  Value = SliderThumb_getValue(a2); /*0x4c794c*/
  if ( Value < 0.029999999 ) /*0x4c795d*/
    Value = 0.0; /*0x4c795f*/
  result = qword_905F60; /*0x4c7962*/
  if ( !qword_905F60 ) /*0x4c796c*/
  {
    v7 = operator new(0x8A8u); /*0x4c7978*/
    qword_905F60 = sub_5AE20(v7); /*0x4c7986*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x4c7997*/
    result = qword_905F60; /*0x4c7999*/
  }
  v4 = *(float *)(result + 512); /*0x4c79a0*/
  *(_DWORD *)(result + 524) = 0; /*0x4c79a9*/
  *(float *)(result + 512) = Value; /*0x4c79b3*/
  v5 = *(_QWORD *)(result + 552); /*0x4c79bb*/
  if ( v5 ) /*0x4c79c5*/
    result = FMOD::ChannelControl::setVolume(v5); /*0x4c79ca*/
  if ( v4 <= 0.0 && Value > 0.0 ) /*0x4c79d9*/
  {
    v6 = qword_905FD0; /*0x4c79db*/
    if ( !qword_905FD0 ) /*0x4c79e5*/
    {
      v8 = operator new(0x6E8u); /*0x4c79f1*/
      qword_905FD0 = sub_2723A0(v8); /*0x4c79ff*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4c7a10*/
      v6 = qword_905FD0; /*0x4c7a12*/
    }
    return GameManager_playMenuMusic(v6); /*0x4c7a19*/
  }
  return result; /*0x4c7a1e*/
}

// [6/8] Address: 0x4c7b40
// Method: OptionsLayer::onSecretVault
// Hidden C++ exception states: #wind=4
void __fastcall OptionsLayer_onSecretVault(_DWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  struct cocos2d::CCScene *v7; // rdi
  __int64 v8; // rcx
  char *v9; // rbx
  struct cocos2d::CCScene *v10; // rbx
  __int64 v11; // rcx
  cocos2d::CCDirector *v12; // rax
  unsigned __int64 v13; // r14
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // rdi
  char *v20; // rax
  char *v21; // rax
  char *v22; // rax
  void **v23; // rbx
  __int64 v24; // rax
  cocos2d::CCLayerColor *DialogLayer; // rsi
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rbx
  __int64 v30; // rax
  void *v31; // rcx
  __int16 v32; // [rsp+30h] [rbp-59h] BYREF
  char v33; // [rsp+32h] [rbp-57h]
  char *v34; // [rsp+40h] [rbp-49h] BYREF
  __int128 v35; // [rsp+48h] [rbp-41h] BYREF
  unsigned __int64 v36; // [rsp+58h] [rbp-31h]
  __int64 v37; // [rsp+60h] [rbp-29h]
  _QWORD v38[4]; // [rsp+68h] [rbp-21h] BYREF
  char v39[8]; // [rsp+88h] [rbp-1h] BYREF
  void *Src[2]; // [rsp+90h] [rbp+7h] BYREF
  unsigned __int64 v41; // [rsp+A0h] [rbp+17h]
  __int64 v42; // [rsp+A8h] [rbp+1Fh]

  v2 = qword_905FE0; /*0x4c7b75*/
  if ( !qword_905FE0 ) /*0x4c7b7f*/
  {
    v34 = (char *)operator new(0x3E8u); /*0x4c7b8b*/
    qword_905FE0 = sub_2D2B40(v34); /*0x4c7b98*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x4c7ba9*/
    v2 = qword_905FE0; /*0x4c7bab*/
  }
  if ( (int)GameStatsManager_getStat(v2, (const char *)&word_7231BC) < 10 ) /*0x4c7bc1*/
  {
    *(_OWORD *)Src = 0; /*0x4c7d16*/
    v41 = 3; /*0x4c7d1a*/
    v13 = 15; /*0x4c7d22*/
    v42 = 15; /*0x4c7d28*/
    LOWORD(Src[0]) = *(_WORD *)"zzz"; /*0x4c7d32*/
    WORD1(Src[0]) = (unsigned __int8)aZzz[2]; /*0x4c7d3d*/
    v14 = a1[166]; /*0x4c7d44*/
    if ( v14 >= 0 ) /*0x4c7d4e*/
    {
      v16 = v14 + 1; /*0x4c7d79*/
    }
    else
    {
      v15 = rand(); /*0x4c7d50*/
      v16 = (int)roundf((float)((float)v15 / 32767.0) * 10.0); /*0x4c7d73*/
    }
    v17 = (__int64)(a1 + 166); /*0x4c7d7b*/
    v18 = (unsigned int)v16; /*0x4c7d83*/
    a1[166] = v16; /*0x4c7d85*/
    v19 = 0x7FFFFFFFFFFFFFFFLL; /*0x4c7d8a*/
    if ( v16 <= 10 ) /*0x4c7d9d*/
    {
      if ( (unsigned int)v16 <= 0xA ) /*0x4c7dc6*/
      {
        v17 = -4096; /*0x4c7dce*/
        switch ( v16 ) /*0x4c7ddf*/
        {
          case 0: /*0x4c7ddf*/
            goto LABEL_13;
          case 1: /*0x4c7ddf*/
            v41 = 3; /*0x4c7de5*/
            memmove(Src, &unk_7CBC44, 3u); /*0x4c7dfd*/
            BYTE3(Src[0]) = 0; /*0x4c7e02*/
            goto LABEL_26; /*0x4c7e06*/
          case 2: /*0x4c7ddf*/
            v13 = 31; /*0x4c7e25*/
            v20 = (char *)sub_3C460(32); /*0x4c7e36*/
            v41 = 16; /*0x4c7e3b*/
            v42 = 31; /*0x4c7e43*/
            strcpy(v20, "It's a secret..."); /*0x4c7e4e*/
            Src[0] = v20; /*0x4c7e55*/
            break; /*0x4c7e59*/
          case 3: /*0x4c7ddf*/
            v18 = (unsigned __int64)Src; /*0x4c7e5e*/
            v41 = 8; /*0x4c7e62*/
            strcpy((char *)Src, "Stop it!"); /*0x4c7e71*/
            goto LABEL_26; /*0x4c7e78*/
          case 4: /*0x4c7ddf*/
            v41 = 12; /*0x4c7e81*/
            memmove(Src, "Not allowed!", 0xCu); /*0x4c7e99*/
            BYTE4(Src[1]) = 0; /*0x4c7e9e*/
            goto LABEL_26; /*0x4c7ea2*/
          case 5: /*0x4c7ddf*/
            v41 = 12; /*0x4c7eab*/
            memmove(Src, "Why u click?", 0xCu); /*0x4c7ec3*/
            BYTE4(Src[1]) = 0; /*0x4c7ec8*/
            goto LABEL_26; /*0x4c7ecc*/
          case 6: /*0x4c7ddf*/
            v13 = 31; /*0x4c7eeb*/
            v21 = (char *)sub_3C460(32); /*0x4c7efc*/
            v41 = 22; /*0x4c7f01*/
            v42 = 31; /*0x4c7f05*/
            strcpy(v21, "Nothing to see here..."); /*0x4c7f10*/
            v18 = 11822; /*0x4c7f1c*/
            Src[0] = v21; /*0x4c7f2b*/
            break; /*0x4c7f2f*/
          case 7: /*0x4c7ddf*/
            v41 = 12; /*0x4c7f38*/
            memmove(Src, "Don't touch!", 0xCu); /*0x4c7f50*/
            BYTE4(Src[1]) = 0; /*0x4c7f55*/
            goto LABEL_26; /*0x4c7f59*/
          case 8: /*0x4c7ddf*/
            v41 = 11; /*0x4c7f62*/
            memmove(Src, "Just, stop.", 0xBu); /*0x4c7f7a*/
            BYTE3(Src[1]) = 0; /*0x4c7f7f*/
            goto LABEL_26; /*0x4c7f83*/
          case 9: /*0x4c7ddf*/
            v13 = 31; /*0x4c7fa2*/
            v22 = (char *)sub_3C460(32); /*0x4c7fb3*/
            v41 = 24; /*0x4c7fb8*/
            v42 = 31; /*0x4c7fc0*/
            strcpy(v22, "No one seems to be home."); /*0x4c7fcb*/
            Src[0] = v22; /*0x4c7fdf*/
            break; /*0x4c7fe3*/
          case 10: /*0x4c7ddf*/
            v41 = 9; /*0x4c7fe9*/
            memmove(Src, "zzzZZZ...", 9u); /*0x4c8001*/
            BYTE1(Src[1]) = 0; /*0x4c8006*/
            goto LABEL_26; /*0x4c8006*/
        }
      }
    }
    else
    {
      a1[166] = 0; /*0x4c7d9f*/
LABEL_13:
      v18 = (unsigned __int64)Src; /*0x4c7da7*/
      v41 = 8; /*0x4c7dab*/
      strcpy((char *)Src, "Go away!"); /*0x4c7dba*/
LABEL_26:
      v13 = v42; /*0x4c800a*/
    }
    v34 = (char *)&v35; /*0x4c8012*/
    v32 = -1; /*0x4c801d*/
    v33 = -1; /*0x4c8028*/
    v35 = 0; /*0x4c802e*/
    v36 = 0; /*0x4c8032*/
    v37 = 0; /*0x4c8036*/
    v23 = Src; /*0x4c803a*/
    if ( v13 > 0xF ) /*0x4c8042*/
      v23 = (void **)Src[0]; /*0x4c8042*/
    if ( v41 > 0x7FFFFFFFFFFFFFFFLL ) /*0x4c804b*/
      sub_8D90(v18, v17, v5); /*0x4c8207*/
    if ( v41 > 0xF ) /*0x4c8059*/
    {
      if ( (v41 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x4c807b*/
      {
        v19 = v41 | 0xF; /*0x4c807d*/
        if ( (v41 | 0xF) < 0x16 ) /*0x4c8083*/
          v19 = 22; /*0x4c8083*/
      }
      *(_QWORD *)&v35 = sub_3C460(v19 + 1); /*0x4c8090*/
      v36 = v41; /*0x4c8098*/
      v37 = v19; /*0x4c809c*/
      memcpy((void *)v35, v23, v41 + 1); /*0x4c80a9*/
    }
    else
    {
      v36 = v41; /*0x4c805b*/
      v37 = 15; /*0x4c805f*/
      v35 = *(_OWORD *)v23; /*0x4c806a*/
    }
    v38[1] = 100; /*0x4c80b2*/
    v38[2] = 9; /*0x4c80b6*/
    v38[3] = 15; /*0x4c80be*/
    v38[0] = 0x7261754720656854LL; /*0x4c80ce*/
    v24 = sub_1723F0((unsigned int)v38, (unsigned int)&v35, 1, v6, 0, (__int64)&v32); /*0x4c8105*/
    DialogLayer = DialogLayer_createDialogLayer(v24, 0, 1u); /*0x4c811a*/
    (*(void (__fastcall **)(_DWORD *, cocos2d::CCLayerColor *, __int64))(*(_QWORD *)a1 + 456LL))(a1, DialogLayer, 100); /*0x4c8134*/
    v27 = cocos2d::CCDirector::sharedDirector(v26); /*0x4c8137*/
    cocos2d::CCDirector::getWinSize(v27, &v34); /*0x4c8144*/
    v28 = **((_QWORD **)DialogLayer + 70); /*0x4c8151*/
    v29 = *((_QWORD *)DialogLayer + 70); /*0x4c8154*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v39, *(float *)&v34 * 0.5, *((float *)&v34 + 1) * 0.5); /*0x4c8175*/
    (*(void (__fastcall **)(__int64, __int64))(v28 + 184))(v29, v30); /*0x4c8181*/
    sub_173300(DialogLayer); /*0x4c818a*/
    if ( v13 > 0xF ) /*0x4c8194*/
    {
      v31 = Src[0]; /*0x4c819a*/
      if ( v13 + 1 >= 0x1000 ) /*0x4c81a8*/
      {
        v31 = (void *)*((_QWORD *)Src[0] - 1); /*0x4c81ae*/
        if ( (unsigned __int64)((char *)Src[0] - (char *)v31 - 8) > 0x1F ) /*0x4c81bd*/
          invoke_watson(0, 0, 0, 0, 0); /*0x4c81ce*/
      }
      j_j_free(v31); /*0x4c81d5*/
    }
  }
  else
  {
    v7 = (struct cocos2d::CCScene *)cocos2d::CCScene::create(v4, v3, v5, v6); /*0x4c7bcd*/
    *(_QWORD *)(cocos2d::CCApplication::sharedApplication(v8) + 232) = v7; /*0x4c7bd6*/
    v9 = (char *)operator new(0x1E8u); /*0x4c7be7*/
    v34 = v9; /*0x4c7bea*/
    cocos2d::CCLayer::CCLayer((cocos2d::CCLayer *)v9); /*0x4c7bf1*/
    *(_QWORD *)v9 = &SecretLayer::`vftable'; /*0x4c7bfe*/
    *((_QWORD *)v9 + 40) = &SecretLayer::`vftable'; /*0x4c7c08*/
    *((_QWORD *)v9 + 41) = &SecretLayer::`vftable'; /*0x4c7c16*/
    *((_QWORD *)v9 + 42) = &SecretLayer::`vftable'; /*0x4c7c24*/
    *((_QWORD *)v9 + 43) = &SecretLayer::`vftable'; /*0x4c7c32*/
    *((_QWORD *)v9 + 44) = &SecretLayer::`vftable'; /*0x4c7c40*/
    *((_QWORD *)v9 + 51) = &SecretLayer::`vftable'; /*0x4c7c4e*/
    *((_QWORD *)v9 + 52) = &SecretLayer::`vftable'; /*0x4c7c5c*/
    *((_DWORD *)v9 + 106) = -1; /*0x4c7c63*/
    *(_QWORD *)(v9 + 428) = 0; /*0x4c7c70*/
    *(_QWORD *)(v9 + 436) = 0; /*0x4c7c77*/
    *((_QWORD *)v9 + 56) = 0; /*0x4c7c7e*/
    *((_QWORD *)v9 + 57) = 0; /*0x4c7c85*/
    *((_QWORD *)v9 + 59) = 0; /*0x4c7c8c*/
    *((_DWORD *)v9 + 120) = -1; /*0x4c7c93*/
    if ( (unsigned __int8)SecretLayer_init(v9) ) /*0x4c7cb3*/
    {
      cocos2d::CCObject::autorelease((cocos2d::CCObject *)v9); /*0x4c7cc3*/
    }
    else
    {
      (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v9 + 8LL))(v9, 1); /*0x4c7cd3*/
      v9 = 0; /*0x4c7cd6*/
    }
    (*(void (__fastcall **)(struct cocos2d::CCScene *, char *))(*(_QWORD *)v7 + 464LL))(v7, v9); /*0x4c7ce2*/
    v10 = cocos2d::CCTransitionFade::create(0.5, v7); /*0x4c7cf9*/
    v12 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v11); /*0x4c7cfc*/
    cocos2d::CCDirector::replaceScene(v12, v10); /*0x4c7d08*/
  }
}

// [7/8] Address: 0x4c8300
// Method: OptionsLayer::onRate
// Hidden C++ exception states: #wind=2
__int64 __fastcall OptionsLayer_onRate(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 result; // rax
  void *v4; // [rsp+40h] [rbp+18h]

  v1 = qword_905FD0; /*0x4c8306*/
  if ( !qword_905FD0 ) /*0x4c8310*/
  {
    v4 = operator new(0x6E8u); /*0x4c831c*/
    qword_905FD0 = sub_2723A0(v4); /*0x4c832a*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4c833b*/
    v1 = qword_905FD0; /*0x4c833d*/
  }
  v2 = cocos2d::CCApplication::sharedApplication(a1); /*0x4c8344*/
  result = (*(__int64 (__fastcall **)(__int64, const char *))(*(_QWORD *)v2 + 96LL))( /*0x4c835b*/
             v2,
             "https://store.steampowered.com/recommended/recommendgame/322170");
  *(_BYTE *)(v1 + 716) = 1; /*0x4c835e*/
  *(_BYTE *)(v1 + 1056) = 1; /*0x4c8365*/
  return result; /*0x4c836c*/
}

// [8/8] Address: 0x4c83a0
// Method: OptionsLayer::layerHidden
// Hidden C++ exception states: #wind=1
__int64 __fastcall OptionsLayer_layerHidden(_BYTE *a1)
{
  int v2; // ecx
  int v3; // ecx
  cocos2d::CCNode *v4; // rax
  cocos2d::CCObject *v5; // rbx
  __int64 v6; // rax
  struct cocos2d::CCAction *(__fastcall *v7)(cocos2d::CCNode *, char); // r8
  cocos2d::CCNode *v8; // rcx
  cocos2d::CCNode *v9; // rbx
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rdx

  v2 = *((_DWORD *)a1 + 160) - 1; /*0x4c83b3*/
  if ( !v2 ) /*0x4c83b6*/
  {
    v4 = (cocos2d::CCNode *)SongsLayer_create(); /*0x4c850c*/
LABEL_11:
    v9 = v4; /*0x4c8511*/
    v10 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 504LL))(a1); /*0x4c8521*/
    (*(void (__fastcall **)(__int64, cocos2d::CCNode *, __int64))(*(_QWORD *)v10 + 456LL))(v10, v9, 100); /*0x4c8539*/
    v7 = *(struct cocos2d::CCAction *(__fastcall **)(cocos2d::CCNode *, char))(*(_QWORD *)v9 + 1080LL); /*0x4c853f*/
    v8 = v9; /*0x4c8548*/
    goto LABEL_12; /*0x4c8548*/
  }
  v3 = v2 - 1; /*0x4c83bc*/
  if ( v3 ) /*0x4c83bf*/
  {
    if ( v3 != 1 ) /*0x4c83c4*/
      goto LABEL_13; /*0x4c83c4*/
    v4 = (cocos2d::CCNode *)AccountLayer_create(); /*0x4c83ca*/
    goto LABEL_11; /*0x4c83cf*/
  }
  v5 = (cocos2d::CCObject *)operator new(0x280u); /*0x4c83de*/
  GJDropDownLayer_GJDropDownLayer((__int64)v5); /*0x4c83e9*/
  *(_QWORD *)v5 = &SupportLayer::`vftable'; /*0x4c83f5*/
  *((_QWORD *)v5 + 40) = &SupportLayer::`vftable'; /*0x4c83ff*/
  *((_QWORD *)v5 + 41) = &SupportLayer::`vftable'; /*0x4c840d*/
  *((_QWORD *)v5 + 42) = &SupportLayer::`vftable'; /*0x4c841b*/
  *((_QWORD *)v5 + 43) = &SupportLayer::`vftable'; /*0x4c8429*/
  *((_QWORD *)v5 + 44) = &SupportLayer::`vftable'; /*0x4c8437*/
  *((_QWORD *)v5 + 51) = &SupportLayer::`vftable'; /*0x4c8445*/
  *((_QWORD *)v5 + 54) = &SupportLayer::`vftable'; /*0x4c8453*/
  *((_QWORD *)v5 + 76) = &SupportLayer::`vftable'; /*0x4c8461*/
  *((_QWORD *)v5 + 77) = &SupportLayer::`vftable'; /*0x4c846f*/
  *((_QWORD *)v5 + 78) = &SupportLayer::`vftable'; /*0x4c847d*/
  *((_QWORD *)v5 + 79) = 0; /*0x4c8484*/
  if ( GJDropDownLayer_init((__int64 *)v5, (int)"Support", 220.0, 0) ) /*0x4c84a4*/
  {
    cocos2d::CCObject::autorelease(v5); /*0x4c84b0*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v5 + 8LL))(v5, 1); /*0x4c84c0*/
    v5 = 0; /*0x4c84c3*/
  }
  v6 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 504LL))(a1); /*0x4c84cb*/
  (*(void (__fastcall **)(__int64, cocos2d::CCObject *, __int64))(*(_QWORD *)v6 + 456LL))(v6, v5, 100); /*0x4c84e7*/
  v7 = *(struct cocos2d::CCAction *(__fastcall **)(cocos2d::CCNode *, char))(*(_QWORD *)v5 + 1080LL); /*0x4c84ed*/
  v8 = v5; /*0x4c84fd*/
  if ( v7 == GJDropDownLayer_showLayer ) /*0x4c8503*/
  {
    GJDropDownLayer_showLayer(v5, 0); /*0x4c8505*/
    goto LABEL_13; /*0x4c850a*/
  }
LABEL_12:
  v7(v8, 0); /*0x4c854b*/
LABEL_13:
  result = (*(__int64 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 336LL))(a1, 0); /*0x4c854e*/
  if ( a1[584] ) /*0x4c855c*/
  {
    LOBYTE(v12) = 1; /*0x4c8568*/
    return (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 520LL))(a1, v12); /*0x4c856d*/
  }
  return result; /*0x4c8573*/
}
