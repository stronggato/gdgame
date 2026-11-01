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
