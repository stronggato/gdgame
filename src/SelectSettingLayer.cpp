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

// Address: 0x4582c0
// Method: SelectSettingLayer::init
// Hidden C++ exception states: #wind=4
char __fastcall SelectSettingLayer_init(__int64 a1, int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // r14d
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned int v21; // eax
  const char *v22; // r15
  int v23; // r13d
  float v24; // xmm7_4
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 *v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rax
  struct cocos2d::CCLabelBMFont *v32; // rdi
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rcx
  cocos2d::CCObject *v36; // rax
  __int64 v37; // rcx
  unsigned int i; // r15d
  const char *v39; // rcx
  struct cocos2d::CCSprite *v40; // rbx
  cocos2d::CCObject *v41; // rdi
  __int64 v42; // rdx
  float v43; // xmm0_4
  __int64 v44; // rax
  cocos2d::CCObject *v45; // rbx
  cocos2d::CCObject *v46; // r15
  __int64 v47; // rdi
  __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rax
  char *v51; // rcx
  void (__fastcall **v52)(char *, cocos2d::CCArray **); // r8
  cocos2d::CCArray **v53; // rdx
  cocos2d::CCArray *v55; // [rsp+50h] [rbp-B0h] BYREF
  float v56; // [rsp+58h] [rbp-A8h] BYREF
  float v57; // [rsp+5Ch] [rbp-A4h]
  __int16 v58; // [rsp+60h] [rbp-A0h]
  _BYTE v59[12]; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v60[2]; // [rsp+70h] [rbp-90h] BYREF
  char v61[8]; // [rsp+80h] [rbp-80h] BYREF
  void *v62; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v63[4]; // [rsp+90h] [rbp-70h] BYREF

  LODWORD(v55) = -1778384896;
  if ( !cocos2d::CCLayerColor::initWithColor((cocos2d::CCLayerColor *)a1, (const struct cocos2d::_ccColor4B *)&v55) )
    return 0;
  sub_5ABA0(a1);
  v6 = cocos2d::CCLayer::create();
  *(_QWORD *)(a1 + 584) = v6;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 464LL))(a1, v6);
  v11 = cocos2d::CCMenu::create(v8, v7, v9, v10);
  *(_QWORD *)(a1 + 552) = v11;
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v11, 10);
  *(_DWORD *)(a1 + 676) = a2;
  v13 = 0;
  if ( a2 != 2 )
    goto LABEL_13;
  if ( a3 )
  {
    v14 = a3 - 1;
    if ( !v14 )
    {
      a3 = 0;
      goto LABEL_13;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      a3 = 2;
      goto LABEL_13;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      a3 = 3;
      goto LABEL_13;
    }
    if ( v16 == 1 )
    {
      a3 = 4;
      goto LABEL_13;
    }
  }
  a3 = 1;
LABEL_13:
  *(_DWORD *)(a1 + 672) = a3;
  v17 = cocos2d::CCDirector::sharedDirector(v12);
  cocos2d::CCDirector::getWinSize(v17, &v56);
  v18 = *(_QWORD *)(a1 + 552);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v59, v56 * 0.5, (float)(v57 * 0.5) + 5.0);
  cocos2d::CCNode::convertToNodeSpace(v18, v61, v19);
  v21 = *(_DWORD *)(a1 + 676);
  if ( v21 < 2 )
  {
    v22 = "Select Mode";
    v23 = 8;
    v24 = 42.0;
    goto LABEL_17;
  }
  if ( v21 != 2 )
    return 0;
  v22 = "Select Speed";
  v23 = 5;
  v24 = 60.0;
LABEL_17:
  LOBYTE(v20) = 1;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 920LL))(a1, v20);
  LOBYTE(v25) = 1;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 992LL))(a1, v25);
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v60, 0.0, 0.0, 80.0, 80.0);
  v27 = (__int64 *)cocos2d::extension::CCScale9Sprite::create("GJ_square01.png", v26);
  v28 = *v27;
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)v59, 360.0, 160.0);
  (*(void (__fastcall **)(__int64 *, __int64))(v28 + 312))(v27, v29);
  (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
    *(_QWORD *)(a1 + 584),
    v27,
    0xFFFFFFFFLL);
  v30 = *v27;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v59, v56 * 0.5, v57 * 0.5);
  (*(void (__fastcall **)(__int64 *, __int64))(v30 + 184))(v27, v31);
  v32 = cocos2d::CCLabelBMFont::create(v22, (const char *)&qword_6FFF68);
  v33 = *(_QWORD *)v32;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v59, v56 * 0.5, (float)((float)(v57 * 0.5) + 80.0) - 20.0);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v33 + 184))(v32, v34);
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))(
    *(_QWORD *)(a1 + 584),
    v32);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v32 + 160LL))(v32);
  v36 = (cocos2d::CCObject *)cocos2d::CCArray::create(v35);
  *(_QWORD *)(a1 + 664) = v36;
  cocos2d::CCObject::retain(v36);
  v55 = (cocos2d::CCArray *)cocos2d::CCArray::create(v37);
  for ( i = 0; (int)i < v23; ++i )
  {
    SelectSettingLayer_frameForItem((__int64)v63, *(_DWORD *)(a1 + 676), i);
    v39 = (const char *)v63;
    if ( v63[3] > 0xFu )
      v39 = (const char *)v63[0];
    v40 = cocos2d::CCSprite::createWithSpriteFrameName(v39);
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 664), v40);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v40 + 160LL))(v40);
    v62 = operator new(0x208u);
    v41 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra((__int64)v62);
    if ( !v41 )
      goto LABEL_24;
    if ( !(unsigned __int8)sub_47940((_DWORD)v41, (_DWORD)v40, 0, a1, (__int64)sub_458E70) )
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v41 + 8LL))(v41, 1);
LABEL_24:
      v41 = 0;
      goto LABEL_25;
    }
    cocos2d::CCObject::autorelease(v41);
LABEL_25:
    if ( a2 == 1 && (i == 4 || i == 7) )
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)v41 + 936LL))(v41, 0);
      LOBYTE(v42) = 125;
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v40 + 40) + 40LL))((__int64)v40 + 320, v42);
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)v41 + 64LL))(v41, i);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v41);
    cocos2d::CCArray::addObject(v55, v41);
    v43 = floorf((float)(int)(i / v23)) * -35.0;
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)v60,
      (float)((float)((float)(int)(i % v23) * v24) - (float)((float)((float)v23 * 0.5) * v24)) + (float)(v24 * 0.5),
      v43);
    cocos2d::CCPoint::operator+(v61, v59, v44);
    (*(void (__fastcall **)(cocos2d::CCObject *, _BYTE *))(*(_QWORD *)v41 + 184LL))(v41, v59);
    sub_3C310(v63);
  }
  *(_DWORD *)(a1 + 640) = -1;
  cocos2d::CCArray::removeAllObjects(v55);
  v60[0] = (__int64)operator new(0x2C8u);
  v45 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite(v60[0]);
  if ( v45 )
  {
    if ( ButtonSprite_init(
           (__int64)v45,
           (__int64)"OK",
           40,
           0,
           1061997773,
           1,
           "goldFont.fnt",
           (__int64)"GJ_button_01.png",
           1106247680) )
    {
      cocos2d::CCObject::autorelease(v45);
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v45 + 8LL))(v45, 1);
      LODWORD(v45) = 0;
    }
  }
  v60[0] = (__int64)operator new(0x208u);
  v46 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v60[0]);
  if ( v46 )
  {
    if ( (unsigned __int8)sub_47940((_DWORD)v46, (_DWORD)v45, 0, a1, (__int64)sub_458F20) )
    {
      cocos2d::CCObject::autorelease(v46);
      goto LABEL_39;
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v46 + 8LL))(v46, 1);
  }
  v46 = 0;
LABEL_39:
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v46);
  v47 = *(_QWORD *)v46;
  v48 = *(_QWORD *)(a1 + 552);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v60, v56 * 0.5, (float)((float)(v57 * 0.5) - 80.0) + 25.0);
  cocos2d::CCNode::convertToNodeSpace(v48, &v62, v49);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v47 + 184))(v46, v50);
  if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 664)) )
  {
    do
    {
      v51 = (char *)cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 664), v13) + 320;
      v52 = *(void (__fastcall ***)(char *, cocos2d::CCArray **))v51;
      if ( *(_DWORD *)(a1 + 672) == v13 )
      {
        v53 = (cocos2d::CCArray **)&unk_6FF4AC;
      }
      else
      {
        v58 = 32125;
        memset(&v55, 125, 3);
        v53 = &v55;
      }
      (*v52)(v51, v53);
      ++v13;
    }
    while ( v13 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 664)) );
  }
  *(_BYTE *)(a1 + 596) = 1;
  return 1;
}
