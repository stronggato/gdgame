#include <Geode/binding/SetupSFXPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/10] Address: 0x5d5500
// Method: SetupSFXPopup::~SetupSFXPopup
_QWORD *__fastcall SetupSFXPopup__dtor_SetupSFXPopup(_QWORD *Block, char a2)
{
  *Block = &SetupSFXPopup::`vftable'; /*0x5d5513*/
  Block[40] = &SetupSFXPopup::`vftable'; /*0x5d5520*/
  Block[41] = &SetupSFXPopup::`vftable'; /*0x5d552e*/
  Block[42] = &SetupSFXPopup::`vftable'; /*0x5d553c*/
  Block[43] = &SetupSFXPopup::`vftable'; /*0x5d554a*/
  Block[44] = &SetupSFXPopup::`vftable'; /*0x5d5558*/
  Block[51] = &SetupSFXPopup::`vftable'; /*0x5d5566*/
  Block[54] = &SetupSFXPopup::`vftable'; /*0x5d5574*/
  Block[68] = &SetupSFXPopup::`vftable'; /*0x5d5582*/
  Block[83] = &SetupSFXPopup::`vftable'; /*0x5d5590*/
  Block[84] = &SetupSFXPopup::`vftable'; /*0x5d559e*/
  Block[126] = &SetupSFXPopup::`vftable'; /*0x5d55ac*/
  Block[127] = &SetupSFXPopup::`vftable'; /*0x5d55ba*/
  SetupAudioTriggerPopup__dtor_SetupAudioTriggerPopup(); /*0x5d55c1*/
  if ( (a2 & 1) != 0 ) /*0x5d55c9*/
    j_j_free(Block); /*0x5d55d3*/
  return Block; /*0x5d55d8*/
}

// [2/10] Address: 0x5d8bc0
// Method: SetupSFXPopup::pageChanged
void __fastcall SetupSFXPopup_pageChanged(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // eax

  SetupTriggerPopup_updateValue((cocos2d::CCDictionary **)a1, 0x1ABu, (float)*(int *)(a1 + 904)); /*0x5d8bd9*/
  v3 = *(_QWORD *)(a1 + 1032); /*0x5d8bde*/
  if ( v3 ) /*0x5d8be8*/
  {
    v4 = *(_DWORD *)(a1 + 904); /*0x5d8bea*/
    if ( v4 < 2 || v4 == 4 ) /*0x5d8bf8*/
    {
      LOBYTE(v2) = 1; /*0x5d8c0e*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 336LL))(v3, v2); /*0x5d8c15*/
    }
    else
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 336LL))(v3, 0); /*0x5d8c04*/
    }
  }
}

// [4/10] Address: 0x5d9670
// Method: SetupSFXPopup::getActiveSFXID
__int64 __fastcall SetupSFXPopup_getActiveSFXID(__int64 a1)
{
  return *(unsigned int *)(a1 + 16); /*0x5d9673*/
}

// [5/10] Address: 0x5d9680
// Method: SetupSFXPopup::getActiveCustomSFXID
__int64 __fastcall SetupSFXPopup_getActiveCustomSFXID(__int64 a1)
{
  return (unsigned int)(int)(*(float (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 - 1008) + 1168LL))( /*0x5d969d*/
                              a1 - 1008,
                              601);
}

// [6/10] Address: 0x5d96b0
// Method: SetupSFXPopup::overridePlaySFX
// Hidden C++ exception states: #wind=2
char __fastcall SetupSFXPopup_overridePlaySFX(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  void *v4; // [rsp+30h] [rbp+8h]
  void *v5; // [rsp+30h] [rbp+8h]

  v1 = *(_QWORD *)(a1 - 328); /*0x5d96b6*/
  if ( v1 ) /*0x5d96c0*/
  {
    if ( *(_BYTE *)(v1 + 1996) ) /*0x5d96c6*/
    {
      v2 = qword_905F60; /*0x5d96cf*/
      if ( !qword_905F60 ) /*0x5d96d9*/
      {
        v4 = operator new(0x8A8u); /*0x5d96e5*/
        qword_905F60 = sub_5AE20(v4); /*0x5d96f3*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x5d9704*/
        v2 = qword_905F60; /*0x5d9706*/
      }
      FMODAudioEngine_updateReverb(v2, *(_DWORD *)(v1 + 1992), 0); /*0x5d9716*/
    }
    if ( !qword_905FD0 ) /*0x5d9723*/
    {
      v5 = operator new(0x6E8u); /*0x5d972f*/
      qword_905FD0 = sub_2723A0(v5); /*0x5d973d*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x5d974e*/
    }
    sub_2734E0(a1, v1); /*0x5d9754*/
  }
  return 1; /*0x5d975b*/
}

// [7/10] Address: 0x5d9770
// Method: SetupSFXPopup::valueDidChange
void __fastcall SetupSFXPopup_valueDidChange(__int64 a1, int a2, float a3)
{
  __int64 v5; // rcx
  cocos2d::CCArray *v6; // rdi
  unsigned int i; // ebx
  _QWORD *v8; // rax

  SetupAudioTriggerPopup_valueDidChange(); /*0x5d978c*/
  if ( *(_QWORD *)(a1 + 680) ) /*0x5d9791*/
  {
    v6 = (cocos2d::CCArray *)cocos2d::CCArray::create(v5); /*0x5d97ab*/
    cocos2d::CCArray::addObject(v6, *(struct cocos2d::CCObject **)(a1 + 680)); /*0x5d97ae*/
  }
  else
  {
    v6 = *(cocos2d::CCArray **)(a1 + 688); /*0x5d97b6*/
  }
  if ( v6 ) /*0x5d97c0*/
  {
    if ( cocos2d::CCArray::count(v6) ) /*0x5d97c5*/
    {
      for ( i = 0; i < cocos2d::CCArray::count(v6); ++i ) /*0x5d97e2*/
      {
        v8 = (_QWORD *)((char *)cocos2d::CCArray::objectAtIndex(v6, i) + 1856); /*0x5d97fb*/
        v8[2] = 0; /*0x5d9801*/
        if ( v8[3] > 0xFu ) /*0x5d980a*/
          v8 = (_QWORD *)*v8; /*0x5d980c*/
        *(_BYTE *)v8 = 0; /*0x5d9812*/
      }
    }
  }
  switch ( a2 ) /*0x5d9836*/
  {
    case 392: /*0x5d9836*/
      *(_DWORD *)(a1 + 1024) = (int)a3; /*0x5d983c*/
LABEL_12:
      sub_5D9060(a1); /*0x5d9842*/
      return; /*0x5d9854*/
    case 601: /*0x5d9836*/
      goto LABEL_12; /*0x5d985f*/
    case 404: /*0x5d9836*/
      sub_5D8FD0(a1); /*0x5d986c*/
      break;
  }
}

// [8/10] Address: 0x5d9890
// Method: SetupSFXPopup::onPlusButton
// Hidden C++ exception states: #wind=8
double __fastcall SetupSFXPopup_onPlusButton(__int64 a1, __int64 a2)
{
  int v3; // eax
  int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // rdi
  cocos2d::CCObject *v7; // rsi
  __int64 (__fastcall *v8)(__int64); // rdx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  int v11; // r15d
  void *v12; // rcx
  _QWORD **v13; // rdi
  _QWORD *v14; // rcx
  _QWORD *v15; // rbx
  unsigned int v16; // edx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  void *v19; // rcx
  _QWORD **v20; // rdi
  _QWORD *v21; // rcx
  _QWORD *v22; // rbx
  double result; // xmm0_8
  int v24; // [rsp+30h] [rbp-40h] BYREF
  void *Block; // [rsp+38h] [rbp-38h]
  __int64 v26; // [rsp+40h] [rbp-30h]
  void *v27[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v28; // [rsp+58h] [rbp-18h]
  __int64 v29; // [rsp+60h] [rbp-10h]
  __int64 v30; // [rsp+68h] [rbp-8h]
  void *v31; // [rsp+98h] [rbp+28h]
  void *v32; // [rsp+98h] [rbp+28h]

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5d98b4*/
  if ( !v3 ) /*0x5d98b9*/
  {
    v26 = 0; /*0x5d9b01*/
    v17 = operator new(0x18u); /*0x5d9b0a*/
    *v17 = v17; /*0x5d9b0f*/
    v17[1] = v17; /*0x5d9b12*/
    Block = v17; /*0x5d9b16*/
    *(_OWORD *)v27 = 0; /*0x5d9b1d*/
    v28 = 0; /*0x5d9b22*/
    v29 = 7; /*0x5d9b26*/
    v30 = 8; /*0x5d9b2e*/
    v24 = 1065353216; /*0x5d9b36*/
    sub_3E200(v27, 16, v17); /*0x5d9b49*/
    v18 = qword_905FD0; /*0x5d9b4f*/
    if ( !qword_905FD0 ) /*0x5d9b59*/
    {
      v32 = operator new(0x6E8u); /*0x5d9b65*/
      qword_905FD0 = sub_2723A0(v32); /*0x5d9b72*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x5d9b83*/
      v18 = qword_905FD0; /*0x5d9b85*/
    }
    v11 = sub_3F56A0(*(_QWORD *)(v18 + 568), &v24); /*0x5d9b9c*/
    v19 = v27[0]; /*0x5d9b9f*/
    if ( v27[0] ) /*0x5d9ba6*/
    {
      if ( ((v28 - (unsigned __int64)v27[0]) & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 ) /*0x5d9bbd*/
      {
        v19 = (void *)*((_QWORD *)v27[0] - 1); /*0x5d9bc3*/
        if ( (unsigned __int64)((char *)v27[0] - (char *)v19 - 8) > 0x1F ) /*0x5d9bd2*/
          goto LABEL_24; /*0x5d9bd2*/
      }
      j_j_free(v19); /*0x5d9bea*/
    }
    v20 = (_QWORD **)Block; /*0x5d9bef*/
    **((_QWORD **)Block + 1) = 0; /*0x5d9bf7*/
    v21 = *v20; /*0x5d9bfa*/
    if ( *v20 ) /*0x5d9bfa*/
    {
      do /*0x5d9c15*/
      {
        v22 = (_QWORD *)*v21; /*0x5d9c02*/
        j_j_free(v21); /*0x5d9c0a*/
        v21 = v22; /*0x5d9c0f*/
      }
      while ( v22 ); /*0x5d9c15*/
    }
    j_j_free(v20); /*0x5d9c1f*/
    v16 = 416; /*0x5d9c24*/
    return SetupTriggerPopup_updateValue((cocos2d::CCDictionary **)a1, v16, (float)v11); /*0x5d9c24*/
  }
  v4 = v3 - 1; /*0x5d98bf*/
  if ( !v4 ) /*0x5d98c2*/
  {
    v26 = 0; /*0x5d99e4*/
    v9 = operator new(0x18u); /*0x5d99ed*/
    *v9 = v9; /*0x5d99f2*/
    v9[1] = v9; /*0x5d99f5*/
    Block = v9; /*0x5d99f9*/
    *(_OWORD *)v27 = 0; /*0x5d9a00*/
    v28 = 0; /*0x5d9a05*/
    v29 = 7; /*0x5d9a09*/
    v30 = 8; /*0x5d9a11*/
    v24 = 1065353216; /*0x5d9a19*/
    sub_3E200(v27, 16, v9); /*0x5d9a2c*/
    v10 = qword_905FD0; /*0x5d9a32*/
    if ( !qword_905FD0 ) /*0x5d9a3c*/
    {
      v31 = operator new(0x6E8u); /*0x5d9a48*/
      qword_905FD0 = sub_2723A0(v31); /*0x5d9a55*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x5d9a66*/
      v10 = qword_905FD0; /*0x5d9a68*/
    }
    v11 = sub_3F5910(*(_QWORD *)(v10 + 568), &v24); /*0x5d9a7f*/
    v12 = v27[0]; /*0x5d9a82*/
    if ( !v27[0] ) /*0x5d9a89*/
      goto LABEL_16; /*0x5d9a89*/
    if ( ((v28 - (unsigned __int64)v27[0]) & 0xFFFFFFFFFFFFFFF8uLL) < 0x1000 /*0x5d9ab5*/
      || (v12 = (void *)*((_QWORD *)v27[0] - 1), (unsigned __int64)((char *)v27[0] - (char *)v12 - 8) <= 0x1F) )
    {
      j_j_free(v12); /*0x5d9abb*/
LABEL_16:
      v13 = (_QWORD **)Block; /*0x5d9ac0*/
      **((_QWORD **)Block + 1) = 0; /*0x5d9ac8*/
      v14 = *v13; /*0x5d9acb*/
      if ( *v13 ) /*0x5d9acb*/
      {
        do /*0x5d9ae6*/
        {
          v15 = (_QWORD *)*v14; /*0x5d9ad3*/
          j_j_free(v14); /*0x5d9adb*/
          v14 = v15; /*0x5d9ae0*/
        }
        while ( v15 ); /*0x5d9ae6*/
      }
      j_j_free(v13); /*0x5d9af0*/
      v16 = 455; /*0x5d9af5*/
      return SetupTriggerPopup_updateValue((cocos2d::CCDictionary **)a1, v16, (float)v11); /*0x5d9c34*/
    }
LABEL_24:
    invoke_watson(0, 0, 0, 0, 0); /*0x5d9bd4*/
  }
  if ( v4 == 1 ) /*0x5d98cb*/
  {
    v5 = *(_QWORD *)(a1 + 688); /*0x5d98d1*/
    v6 = *(_QWORD *)(a1 + 680); /*0x5d98d8*/
    v7 = (cocos2d::CCObject *)operator new(0x3F0u); /*0x5d98e9*/
    SetupTriggerPopup_SetupTriggerPopup((__int64)v7); /*0x5d98f3*/
    *(_QWORD *)v7 = &SetupReverbPopup::`vftable'; /*0x5d98ff*/
    *((_QWORD *)v7 + 40) = &SetupReverbPopup::`vftable'; /*0x5d9909*/
    *((_QWORD *)v7 + 41) = &SetupReverbPopup::`vftable'; /*0x5d9917*/
    *((_QWORD *)v7 + 42) = &SetupReverbPopup::`vftable'; /*0x5d9925*/
    *((_QWORD *)v7 + 43) = &SetupReverbPopup::`vftable'; /*0x5d9933*/
    *((_QWORD *)v7 + 44) = &SetupReverbPopup::`vftable'; /*0x5d9941*/
    *((_QWORD *)v7 + 51) = &SetupReverbPopup::`vftable'; /*0x5d994f*/
    *((_QWORD *)v7 + 54) = &SetupReverbPopup::`vftable'; /*0x5d995d*/
    *((_QWORD *)v7 + 68) = &SetupReverbPopup::`vftable'; /*0x5d996b*/
    *((_QWORD *)v7 + 83) = &SetupReverbPopup::`vftable'; /*0x5d9979*/
    *((_QWORD *)v7 + 84) = &SetupReverbPopup::`vftable'; /*0x5d9987*/
    if ( (unsigned __int8)sub_5D6EB0(v7, v6, v5) ) /*0x5d9997*/
    {
      cocos2d::CCObject::autorelease(v7); /*0x5d99a3*/
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v7 + 8LL))(v7, 1); /*0x5d99b3*/
      v7 = 0; /*0x5d99b6*/
    }
    v8 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 1064LL); /*0x5d99bb*/
    if ( v8 == SetupTriggerPopup_show ) /*0x5d99cf*/
      SetupTriggerPopup_show((__int64)v7); /*0x5d99d1*/
    else
      v8((__int64)v7); /*0x5d99db*/
  }
  return result; /*0x5d9c39*/
}

// [9/10] Address: 0x5d9ce0
// Method: SetupSFXPopup::sfxBrowserClosed
double __fastcall SetupSFXPopup_sfxBrowserClosed(__int64 a1, __int64 a2)
{
  cocos2d::CCDictionary **v2; // rbx

  v2 = (cocos2d::CCDictionary **)(a1 - 1016); /*0x5d9cf2*/
  SetupTriggerPopup_updateValue((cocos2d::CCDictionary **)(a1 - 1016), 0x259u, (float)*(int *)(a2 + 1024)); /*0x5d9d07*/
  return SetupTriggerPopup_updateValue(v2, 0x188u, (float)*(int *)(a2 + 1088)); /*0x5d9d1f*/
}

// Address: 0x5e05e0
// Method: SetupSFXPopup::init
// Hidden C++ exception states: #wind=4
__int64 __fastcall SetupSFXPopup_init(float *a1)
{
  _BYTE *v2; // r9
  _BYTE *v3; // rcx
  const char *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  const struct cocos2d::CCPoint *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // edx
  void *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  bool v22; // di
  __int64 v23; // rax
  int v24; // r8d
  int v25; // r9d
  void **v27; // [rsp+80h] [rbp-80h] BYREF
  void **v28; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v29[8]; // [rsp+90h] [rbp-70h] BYREF
  void **v30; // [rsp+98h] [rbp-68h] BYREF
  __int128 v31; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  float v34; // [rsp+C0h] [rbp-40h] BYREF
  float v35; // [rsp+C4h] [rbp-3Ch]
  _BYTE v36[8]; // [rsp+C8h] [rbp-38h] BYREF
  void *Block[2]; // [rsp+D0h] [rbp-30h] BYREF
  __m128i si128; // [rsp+E0h] [rbp-20h]

  *(_OWORD *)Block = 0;
  Block[0] = (void *)sub_3C460(32);
  si128.m128i_i64[0] = 17;
  si128.m128i_i64[1] = 31;
  strcpy((char *)Block[0], "Setup Radial Blur");
  sub_606E80(a1, Block);
  v27 = Block;
  *(_OWORD *)Block = 0;
  si128 = 0u;
  v2 = (_BYTE *)sub_3C460(448);
  Block[0] = v2;
  si128.m128i_i64[0] = 435;
  si128.m128i_i64[1] = 447;
  v3 = v2;
  v4 = "Applies <cg>radial blur</c>.\n"
       "<cy>Size</c> is how much blur to apply around the center.\n"
       "<cl>FadeTime</c> is time until final state is reached.\n"
       "<cp>Intensity</c> is opacity of the blur.\n"
       "<cr>RefChannel</c> uses a color channel to reference the effect.\n"
       "<co>Fade</c> sets how much blur fades out at the edges.\n"
       "<ca>Screen OffX and OffY</c> offsets the center of the effect.\n"
       "<cj>Target</c> lets you set a specific target object as the center.";
  v5 = 3;
  do
  {
    *(_OWORD *)v3 = *(_OWORD *)v4;
    *((_OWORD *)v3 + 1) = *((_OWORD *)v4 + 1);
    *((_OWORD *)v3 + 2) = *((_OWORD *)v4 + 2);
    *((_OWORD *)v3 + 3) = *((_OWORD *)v4 + 3);
    *((_OWORD *)v3 + 4) = *((_OWORD *)v4 + 4);
    *((_OWORD *)v3 + 5) = *((_OWORD *)v4 + 5);
    *((_OWORD *)v3 + 6) = *((_OWORD *)v4 + 6);
    v3 += 128;
    *((_OWORD *)v3 - 1) = *((_OWORD *)v4 + 7);
    v4 += 128;
    --v5;
  }
  while ( v5 );
  *(_OWORD *)v3 = *(_OWORD *)v4;
  *((_OWORD *)v3 + 1) = *((_OWORD *)v4 + 1);
  *((_OWORD *)v3 + 2) = *((_OWORD *)v4 + 2);
  *((_WORD *)v3 + 24) = *((_WORD *)v4 + 24);
  v3[50] = v4[50];
  v2[435] = 0;
  v31 = 0;
  v32 = 4;
  v33 = 15;
  strcpy((char *)&v31, "Help");
  sub_6070A0(a1, &v31, Block);
  v7 = cocos2d::CCDirector::sharedDirector(v6);
  cocos2d::CCDirector::getWinSize(v7, &v34);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v29, v34 * 0.5, (float)(v35 * 0.5) + 85.0);
  v30 = Block;
  *(_OWORD *)Block = 0;
  si128.m128i_i64[0] = 5;
  si128.m128i_i64[1] = 15;
  LODWORD(Block[0]) = *(_DWORD *)"Size:";
  WORD2(Block[0]) = (unsigned __int8)aSize[4];
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v28, -130.0, 0.0);
  cocos2d::CCPoint::operator+(v29, &v27, v8);
  SetupTriggerPopup_createValueControl(
    (int)a1,
    179,
    (__int64)Block,
    (const struct cocos2d::CCPoint *)&v27,
    1058642330,
    0,
    0x40000000);
  v28 = Block;
  Block[1] = algn_34 + 6;
  si128.m128i_i64[0] = 9;
  si128.m128i_i64[1] = 15;
  Block[0] = (void *)0x656D695465646146LL;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v30, 0.0, 0.0);
  cocos2d::CCPoint::operator+(v29, &v27, v9);
  SetupTriggerPopup_createValueControl(
    (int)a1,
    10,
    (__int64)Block,
    (const struct cocos2d::CCPoint *)&v27,
    1058642330,
    0,
    0);
  v28 = Block;
  Block[1] = &loc_3A73 + 6;
  si128.m128i_i64[0] = 10;
  si128.m128i_i64[1] = 15;
  Block[0] = (void *)0x7469736E65746E49LL;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v30, -130.0, -50.0);
  cocos2d::CCPoint::operator+(v29, &v27, v10);
  SetupTriggerPopup_createValueControl(
    (int)a1,
    176,
    (__int64)Block,
    (const struct cocos2d::CCPoint *)&v27,
    1058642330,
    0,
    1084227584);
  v28 = Block;
  si128.m128i_i64[0] = 12;
  si128.m128i_i64[1] = 15;
  strcpy((char *)Block, "Ref\nChannel:");
  BYTE5(Block[1]) = 0;
  HIWORD(Block[1]) = 0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v30, 0.0, -55.0);
  cocos2d::CCPoint::operator+(v29, &v27, v11);
  sub_6088F0((_DWORD)a1, 71, (unsigned int)Block, (unsigned int)&v27, 1058642330, 1, 2, 6, 0, 0, 0, 0, 0, 0, 2, 0);
  v28 = Block;
  *(_OWORD *)Block = 0;
  si128.m128i_i64[0] = 5;
  si128.m128i_i64[1] = 15;
  strcpy((char *)Block, "Fade:");
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v30, -130.0, -100.0);
  cocos2d::CCPoint::operator+(v29, &v27, v12);
  SetupTriggerPopup_createValueControl(
    (int)a1,
    181,
    (__int64)Block,
    (const struct cocos2d::CCPoint *)&v27,
    1058642330,
    -1082130432,
    1065353216);
  cocos2d::CCPoint::CCPoint(
    (cocos2d::CCPoint *)v36,
    (float)((float)(v34 * 0.5) - (float)(a1[183] * 0.5)) + 20.0,
    (float)((float)((float)(v35 * 0.5) - (float)(a1[184] * 0.5)) + 20.0) + 30.0);
  v28 = Block;
  *(_OWORD *)Block = 0;
  si128.m128i_i64[0] = 6;
  si128.m128i_i64[1] = 15;
  strcpy((char *)Block, "Target");
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v30, (const struct cocos2d::CCPoint *)v36);
  SetupTriggerPopup_createToggleValueControl((int)a1, 188, (__int64)Block, v13, 0, 0, 0, 1.0);
  v28 = Block;
  Block[1] = &loc_73 + 6;
  si128.m128i_i64[0] = 9;
  si128.m128i_i64[1] = 15;
  Block[0] = (void *)0x6C6E4F7974706D45LL;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v30, 90.0, 0.0);
  cocos2d::CCPoint::operator+(v36, &v27, v14);
  SetupTriggerPopup_createToggleValueControl(
    (int)a1,
    515,
    (__int64)Block,
    (const struct cocos2d::CCPoint *)&v27,
    0,
    0,
    0,
    1.0);
  v28 = Block;
  si128.m128i_i64[0] = 12;
  si128.m128i_i64[1] = 15;
  strcpy((char *)Block, "Screen\nOffX:");
  BYTE5(Block[1]) = 0;
  HIWORD(Block[1]) = 0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v30, 130.0, 0.0);
  cocos2d::CCPoint::operator+(v29, &v27, v15);
  sub_6088F0(
    (_DWORD)a1,
    290,
    (unsigned int)Block,
    (unsigned int)&v27,
    1058642330,
    0,
    1,
    6,
    0,
    -1082130432,
    1065353216,
    0,
    101,
    0,
    2,
    0);
  v28 = Block;
  si128.m128i_i64[0] = 12;
  si128.m128i_i64[1] = 15;
  strcpy((char *)Block, "Screen\nOffY:");
  BYTE5(Block[1]) = 0;
  HIWORD(Block[1]) = 0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v30, 130.0, -50.0);
  cocos2d::CCPoint::operator+(v29, &v27, v16);
  sub_6088F0(
    (_DWORD)a1,
    291,
    (unsigned int)Block,
    (unsigned int)&v27,
    1058642330,
    0,
    1,
    6,
    0,
    -1082130432,
    1065353216,
    0,
    101,
    0,
    2,
    0);
  Block[1] = algn_34 + 6;
  si128 = _mm_load_si128((const __m128i *)&xmmword_830F60);
  Block[0] = (void *)0x44497265746E6543LL;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v28, 130.0, 0.0);
  cocos2d::CCPoint::operator+(v29, &v27, v17);
  v18 = (_DWORD)a1 + 544;
  if ( !a1 )
    v18 = 0;
  sub_3C3E00((_DWORD)a1, v18, 1, 51, (__int64)Block, (__int64)&v27, 1058642330, 6, 100, 0, 0);
  if ( si128.m128i_i64[1] > 0xFuLL )
  {
    v19 = Block[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v19 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v19 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v19);
  }
  v28 = (void **)&v31;
  v31 = 0;
  v32 = 2;
  v33 = 15;
  strcpy((char *)&v31, "P1");
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v30, 90.0, -40.0);
  cocos2d::CCPoint::operator+(v29, &v27, v20);
  SetupTriggerPopup_createToggleValueControl(
    (int)a1,
    138,
    (__int64)&v31,
    (const struct cocos2d::CCPoint *)&v27,
    0,
    0,
    100,
    1.0);
  v28 = (void **)&v31;
  v31 = 0;
  v32 = 2;
  v33 = 15;
  strcpy((char *)&v31, "P2");
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v30, 160.0, -40.0);
  cocos2d::CCPoint::operator+(v29, &v27, v21);
  SetupTriggerPopup_createToggleValueControl(
    (int)a1,
    200,
    (__int64)&v31,
    (const struct cocos2d::CCPoint *)&v27,
    0,
    0,
    100,
    1.0);
  v22 = (*(float (__fastcall **)(float *, __int64))(*(_QWORD *)a1 + 1168LL))(a1, 188) != 0.0;
  (*(void (__fastcall **)(float *, __int64, bool))(*(_QWORD *)a1 + 1088LL))(a1, 100, v22);
  (*(void (__fastcall **)(float *, __int64, bool))(*(_QWORD *)a1 + 1088LL))(a1, 101, !v22);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v28, 65.0, -100.0);
  cocos2d::CCPoint::operator+(v29, &v27, v23);
  return sub_60EDA0((_DWORD)a1, (unsigned int)&v27, v24, v25, 0);
}

// Address: 0x5d8c30
// Method: SetupSFXPopup::onClose
// Hidden C++ exception states: #wind=9
__int64 __fastcall SetupSFXPopup_onClose(__int64 a1)
{
  unsigned int v2; // r14d
  __int64 v3; // rcx
  struct cocos2d::CCObject *v4; // rcx
  cocos2d::CCArray *v5; // r12
  unsigned int i; // r15d
  struct cocos2d::CCObject *v7; // rdi
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // r14d
  __int64 v11; // rax
  void *v12; // rdx
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rbx
  __int64 v18; // rcx
  int v19; // eax
  int v20; // esi
  int v21; // ebx
  float v22; // xmm0_4
  void *v24; // [rsp+30h] [rbp-69h]
  void *v25; // [rsp+30h] [rbp-69h]
  void *v26; // [rsp+40h] [rbp-59h]
  void *v27; // [rsp+48h] [rbp-51h]
  void *v28; // [rsp+50h] [rbp-49h]
  void *v29; // [rsp+58h] [rbp-41h]
  _BYTE Src[32]; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v31[32]; // [rsp+80h] [rbp-19h] BYREF

  v2 = 0;
  v3 = qword_905F60;
  if ( !qword_905F60 )
  {
    v24 = operator new(0x8A8u);
    qword_905F60 = sub_5AE20(v24);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60);
    v3 = qword_905F60;
  }
  sub_613B0(v3);
  v4 = *(struct cocos2d::CCObject **)(a1 + 680);
  if ( v4 )
    v5 = cocos2d::CCArray::createWithObject(v4);
  else
    v5 = *(cocos2d::CCArray **)(a1 + 688);
  for ( i = 0; i < cocos2d::CCArray::count(v5); ++i )
  {
    v7 = cocos2d::CCArray::objectAtIndex(v5, i);
    v8 = qword_906070;
    if ( !qword_906070 )
    {
      v25 = operator new(0x3D0u);
      qword_906070 = sub_47C350(v25);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070);
      v8 = qword_906070;
    }
    if ( *(_QWORD *)(v8 + 408) )
    {
      cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(v8 + 408), *((int *)v7 + 472));
      v8 = qword_906070;
    }
    if ( !v8 )
    {
      v26 = operator new(0x3D0u);
      qword_906070 = sub_47C350(v26);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070);
      v8 = qword_906070;
    }
    v9 = *((_DWORD *)v7 + 472);
    sub_480830(v8, Src);
    v10 = v2 | 1;
    sub_43D80(Src, &unk_70802C, 1u);
    v11 = GameToolbox_intToString((__int64)v31, v9);
    v12 = (void *)v11;
    if ( *(_QWORD *)(v11 + 24) > 0xFu )
      v12 = *(void **)v11;
    sub_43D80(Src, v12, *(_QWORD *)(v11 + 16));
    sub_3C310(v31);
    sub_43D80(Src, ".ogg", 4u);
    sub_3E4F0(v31, Src);
    v14 = v13;
    v15 = qword_905F60;
    if ( !qword_905F60 )
    {
      v27 = operator new(0x8A8u);
      qword_905F60 = sub_5AE20(v27);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60);
      v15 = qword_905F60;
    }
    FMODAudioEngine_preloadEffect(v15, v14);
    sub_3E4F0(v31, Src);
    v17 = v16;
    v18 = qword_905F60;
    if ( !qword_905F60 )
    {
      v28 = operator new(0x8A8u);
      qword_905F60 = sub_5AE20(v28);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60);
      v18 = qword_905F60;
    }
    v19 = FMODAudioEngine_lengthForSound(v18, v17);
    v20 = *((_DWORD *)v7 + 478);
    v21 = *((_DWORD *)v7 + 480);
    if ( !v21 || v21 < v20 )
      v21 = v19;
    v22 = 1.0;
    if ( *((_DWORD *)v7 + 475) )
    {
      if ( !qword_905F60 )
      {
        v29 = operator new(0x8A8u);
        qword_905F60 = sub_5AE20(v29);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60);
      }
      v22 = FMODAudioEngine_pitchForIdx(*((_DWORD *)v7 + 475));
    }
    *((float *)v7 + 500) = (float)(int)(float)((float)(v21 - v20) / v22) / 1000.0;
    v2 = v10 & 0xFFFFFFFE;
    sub_3C310(Src);
  }
  return SetupTriggerPopup_onClose(a1);
}
