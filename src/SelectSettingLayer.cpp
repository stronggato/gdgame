#include <Geode/binding/SelectSettingLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x4536f0
// Method: SelectSettingLayer::~SelectSettingLayer
_QWORD *__fastcall SelectSettingLayer__dtor_SelectSettingLayer(_QWORD *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *Block = &SelectSettingLayer::`vftable'; /*0x453706*/
  Block[40] = &SelectSettingLayer::`vftable'; /*0x453710*/
  Block[41] = &SelectSettingLayer::`vftable'; /*0x45371e*/
  Block[42] = &SelectSettingLayer::`vftable'; /*0x45372c*/
  Block[43] = &SelectSettingLayer::`vftable'; /*0x45373a*/
  Block[44] = &SelectSettingLayer::`vftable'; /*0x453748*/
  Block[51] = &SelectSettingLayer::`vftable'; /*0x453756*/
  Block[54] = &SelectSettingLayer::`vftable'; /*0x453764*/
  Block[68] = &SelectSettingLayer::`vftable'; /*0x453772*/
  v4 = (cocos2d::CCObject *)Block[83]; /*0x453779*/
  if ( v4 ) /*0x453783*/
    cocos2d::CCObject::release(v4); /*0x453785*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x45378e*/
  if ( (a2 & 1) != 0 ) /*0x453798*/
    j_j_free(Block); /*0x4537a2*/
  return Block; /*0x4537aa*/
}

// [2/5] Address: 0x457f70
// Method: SelectSettingLayer::onSelect
unsigned int __fastcall SelectSettingLayer_onSelect(__int64 a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // ebp
  unsigned int result; // eax
  char *v7; // rcx
  void (__fastcall *v8)(char *, _BYTE *); // r8
  _BYTE *v9; // rdx
  _BYTE v10[3]; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 ) /*0x457f85*/
    *(_DWORD *)(a1 + 680) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x457f90*/
  v3 = *(_DWORD *)(a1 + 688); /*0x457f96*/
  v4 = 0; /*0x457f9c*/
  if ( !v3 || (v5 = 0, v3 == 1) ) /*0x457fac*/
    v5 = 1; /*0x457fae*/
  result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 664)); /*0x457fba*/
  if ( result ) /*0x457fc2*/
  {
    do /*0x458025*/
    {
      v7 = (char *)cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 664), v4) + 320; /*0x457fdf*/
      v8 = **(void (__fastcall ***)(char *, _BYTE *))v7; /*0x457fe9*/
      if ( *(_DWORD *)(a1 + 680) == v4 + v5 ) /*0x457ff5*/
      {
        v9 = &unk_6FF4AC; /*0x45800a*/
      }
      else
      {
        memset(v10, 125, sizeof(v10)); /*0x457ff7*/
        v9 = v10; /*0x457ffe*/
      }
      v8(v7, v9); /*0x458011*/
      ++v4; /*0x45801b*/
      result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 664)); /*0x45801d*/
    }
    while ( v4 < result ); /*0x458025*/
  }
  return result; /*0x458027*/
}

// [4/5] Address: 0x4589f0
// Method: SelectSettingLayer::frameForItem
__int64 __fastcall SelectSettingLayer_frameForItem(__int64 a1, unsigned int a2, int a3)
{
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d
  char *v7; // rax
  __int64 result; // rax
  char *v9; // rax
  char *v10; // rax
  char *v11; // rax
  char *v12; // rax
  char *v13; // rax
  char *v14; // rax
  char *v15; // rax
  char *v16; // rax
  char *v17; // rax
  char *v18; // rax
  char *v19; // rax
  char *v20; // rax

  if ( a2 <= 1 ) /*0x4589ff*/
  {
    switch ( a3 ) /*0x458b67*/
    {
      case 0: /*0x458b67*/
        *(_OWORD *)a1 = 0; /*0x458b71*/
        *(_QWORD *)(a1 + 16) = 0; /*0x458b74*/
        *(_QWORD *)(a1 + 24) = 0; /*0x458b78*/
        v13 = (char *)sub_3C460(32); /*0x458b7c*/
        *(_QWORD *)a1 = v13; /*0x458b81*/
        *(_QWORD *)(a1 + 16) = 22; /*0x458b84*/
        *(_QWORD *)(a1 + 24) = 31; /*0x458b8c*/
        strcpy(v13, "gj_iconBtn_off_001.png"); /*0x458b9b*/
        result = a1; /*0x458bb6*/
        break; /*0x458bbe*/
      case 1: /*0x458b67*/
        *(_OWORD *)a1 = 0; /*0x458bc7*/
        *(_QWORD *)(a1 + 16) = 0; /*0x458bca*/
        *(_QWORD *)(a1 + 24) = 0; /*0x458bce*/
        v14 = (char *)sub_3C460(32); /*0x458bd2*/
        *(_QWORD *)a1 = v14; /*0x458bd7*/
        *(_QWORD *)(a1 + 16) = 22; /*0x458bda*/
        *(_QWORD *)(a1 + 24) = 31; /*0x458be2*/
        strcpy(v14, "gj_shipBtn_off_001.png"); /*0x458bf1*/
        result = a1; /*0x458c0c*/
        break; /*0x458c14*/
      case 2: /*0x458b67*/
        *(_OWORD *)a1 = 0; /*0x458c1d*/
        *(_QWORD *)(a1 + 16) = 0; /*0x458c20*/
        *(_QWORD *)(a1 + 24) = 0; /*0x458c24*/
        v15 = (char *)sub_3C460(32); /*0x458c28*/
        *(_QWORD *)a1 = v15; /*0x458c2d*/
        *(_QWORD *)(a1 + 16) = 22; /*0x458c30*/
        *(_QWORD *)(a1 + 24) = 31; /*0x458c38*/
        strcpy(v15, "gj_ballBtn_off_001.png"); /*0x458c47*/
        result = a1; /*0x458c62*/
        break; /*0x458c6a*/
      case 3: /*0x458b67*/
        *(_OWORD *)a1 = 0; /*0x458c73*/
        *(_QWORD *)(a1 + 16) = 0; /*0x458c76*/
        *(_QWORD *)(a1 + 24) = 0; /*0x458c7a*/
        v16 = (char *)sub_3C460(32); /*0x458c7e*/
        *(_QWORD *)a1 = v16; /*0x458c83*/
        *(_QWORD *)(a1 + 16) = 22; /*0x458c86*/
        *(_QWORD *)(a1 + 24) = 31; /*0x458c8e*/
        strcpy(v16, "gj_birdBtn_off_001.png"); /*0x458c9d*/
        result = a1; /*0x458cb8*/
        break; /*0x458cc0*/
      case 4: /*0x458b67*/
        *(_OWORD *)a1 = 0; /*0x458cc9*/
        *(_QWORD *)(a1 + 16) = 0; /*0x458ccc*/
        *(_QWORD *)(a1 + 24) = 0; /*0x458cd0*/
        v17 = (char *)sub_3C460(32); /*0x458cd4*/
        *(_QWORD *)a1 = v17; /*0x458cd9*/
        *(_QWORD *)(a1 + 16) = 22; /*0x458cdc*/
        *(_QWORD *)(a1 + 24) = 31; /*0x458ce4*/
        strcpy(v17, "gj_dartBtn_off_001.png"); /*0x458cf3*/
        result = a1; /*0x458d0e*/
        break; /*0x458d16*/
      case 5: /*0x458b67*/
        *(_OWORD *)a1 = 0; /*0x458d1f*/
        *(_QWORD *)(a1 + 16) = 0; /*0x458d22*/
        *(_QWORD *)(a1 + 24) = 0; /*0x458d26*/
        v18 = (char *)sub_3C460(32); /*0x458d2a*/
        *(_QWORD *)a1 = v18; /*0x458d2f*/
        *(_QWORD *)(a1 + 16) = 23; /*0x458d35*/
        *(_QWORD *)(a1 + 24) = 31; /*0x458d3d*/
        strcpy(v18, "gj_robotBtn_off_001.png"); /*0x458d4c*/
        result = a1; /*0x458d6d*/
        break; /*0x458d79*/
      case 6: /*0x458b67*/
        *(_OWORD *)a1 = 0; /*0x458d82*/
        *(_QWORD *)(a1 + 16) = 0; /*0x458d85*/
        *(_QWORD *)(a1 + 24) = 0; /*0x458d89*/
        v19 = (char *)sub_3C460(32); /*0x458d8d*/
        *(_QWORD *)a1 = v19; /*0x458d92*/
        *(_QWORD *)(a1 + 16) = 24; /*0x458d95*/
        *(_QWORD *)(a1 + 24) = 31; /*0x458d9d*/
        strcpy(v19, "gj_spiderBtn_off_001.png"); /*0x458dac*/
        result = a1; /*0x458dc0*/
        break; /*0x458dc8*/
      case 7: /*0x458b67*/
        *(_OWORD *)a1 = 0; /*0x458dd1*/
        *(_QWORD *)(a1 + 16) = 0; /*0x458dd4*/
        *(_QWORD *)(a1 + 24) = 0; /*0x458dd8*/
        v20 = (char *)sub_3C460(32); /*0x458ddc*/
        *(_QWORD *)a1 = v20; /*0x458de1*/
        *(_QWORD *)(a1 + 16) = 23; /*0x458de7*/
        *(_QWORD *)(a1 + 24) = 31; /*0x458def*/
        strcpy(v20, "gj_swingBtn_off_001.png"); /*0x458dfe*/
        result = a1; /*0x458e1f*/
        break; /*0x458e2b*/
      default:
        *(_OWORD *)a1 = 0; /*0x458e32*/
        *(_QWORD *)(a1 + 16) = 0; /*0x458e35*/
        *(_QWORD *)(a1 + 24) = 15; /*0x458e39*/
        *(_BYTE *)a1 = 0; /*0x458e41*/
        result = a1; /*0x458e2f*/
        break; /*0x458e2f*/
    }
  }
  else
  {
    *(_OWORD *)a1 = 0; /*0x458a08*/
    *(_QWORD *)(a1 + 16) = 0; /*0x458a0b*/
    if ( a2 == 2 ) /*0x458a12*/
    {
      *(_QWORD *)(a1 + 24) = 0; /*0x458a18*/
      if ( a3 ) /*0x458a24*/
      {
        v4 = a3 - 1; /*0x458a2a*/
        if ( v4 ) /*0x458a2e*/
        {
          v5 = v4 - 1; /*0x458a34*/
          if ( !v5 ) /*0x458a38*/
          {
            v10 = (char *)sub_3C460(32); /*0x458aa8*/
            *(_QWORD *)a1 = v10; /*0x458aad*/
            *(_QWORD *)(a1 + 16) = 16; /*0x458ab0*/
            *(_QWORD *)(a1 + 24) = 31; /*0x458ab8*/
            strcpy(v10, "boost_03_001.png"); /*0x458ac7*/
            return a1; /*0x458ad6*/
          }
          v6 = v5 - 1; /*0x458a3a*/
          if ( !v6 ) /*0x458a3e*/
          {
            v9 = (char *)sub_3C460(32); /*0x458a79*/
            *(_QWORD *)a1 = v9; /*0x458a7e*/
            *(_QWORD *)(a1 + 16) = 16; /*0x458a81*/
            *(_QWORD *)(a1 + 24) = 31; /*0x458a89*/
            strcpy(v9, "boost_04_001.png"); /*0x458a98*/
            return a1; /*0x458aa7*/
          }
          if ( v6 == 1 ) /*0x458a44*/
          {
            v7 = (char *)sub_3C460(32); /*0x458a4a*/
            *(_QWORD *)a1 = v7; /*0x458a4f*/
            *(_QWORD *)(a1 + 16) = 16; /*0x458a52*/
            *(_QWORD *)(a1 + 24) = 31; /*0x458a5a*/
            strcpy(v7, "boost_05_001.png"); /*0x458a69*/
            return a1; /*0x458a78*/
          }
        }
        v11 = (char *)sub_3C460(32); /*0x458ad7*/
        *(_QWORD *)a1 = v11; /*0x458adc*/
        *(_QWORD *)(a1 + 16) = 16; /*0x458adf*/
        *(_QWORD *)(a1 + 24) = 31; /*0x458ae7*/
        strcpy(v11, "boost_02_001.png"); /*0x458af6*/
        return a1; /*0x458afd*/
      }
      else
      {
        v12 = (char *)sub_3C460(32); /*0x458b06*/
        *(_QWORD *)a1 = v12; /*0x458b0b*/
        *(_QWORD *)(a1 + 16) = 16; /*0x458b0e*/
        *(_QWORD *)(a1 + 24) = 31; /*0x458b16*/
        strcpy(v12, "boost_01_001.png"); /*0x458b25*/
        return a1; /*0x458b2c*/
      }
    }
    else
    {
      *(_QWORD *)(a1 + 24) = 15; /*0x458b35*/
      *(_BYTE *)a1 = 0; /*0x458b40*/
      return a1; /*0x458b3d*/
    }
  }
  return result; /*0x458a73*/
}

// [5/5] Address: 0x458f70
// Method: SelectSettingLayer::keyBackClicked
__int64 __fastcall SelectSettingLayer_keyBackClicked(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 (__fastcall ***v4)(_QWORD, _QWORD *); // rcx

  v1 = (_QWORD *)(a1 - 336); /*0x458f76*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 336) + 992LL))(a1 - 336, 0); /*0x458f85*/
  LOBYTE(v2) = 1; /*0x458f8e*/
  result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v1 + 520LL))(v1, v2); /*0x458f93*/
  v4 = (__int64 (__fastcall ***)(_QWORD, _QWORD *))v1[85]; /*0x458f99*/
  if ( v4 ) /*0x458fa3*/
    return (**v4)(v4, v1); /*0x458fb0*/
  return result; /*0x458fb3*/
}
