#include <Geode/binding/InfoAlertButton.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x3c9af0
// Method: InfoAlertButton::~InfoAlertButton
cocos2d::CCMenuItemSprite *__fastcall InfoAlertButton__dtor_InfoAlertButton(cocos2d::CCMenuItemSprite *Block, char a2)
{
  sub_3C310((char *)Block + 552); /*0x3c9b06*/
  sub_3C310((char *)Block + 520); /*0x3c9b12*/
  *(_QWORD *)Block = &CCMenuItemSpriteExtra::`vftable'; /*0x3c9b1e*/
  *((_QWORD *)Block + 40) = &CCMenuItemSpriteExtra::`vftable'; /*0x3c9b2f*/
  sub_3C310((char *)Block + 448); /*0x3c9b36*/
  sub_3C310((char *)Block + 416); /*0x3c9b42*/
  cocos2d::CCMenuItemSprite::~CCMenuItemSprite(Block); /*0x3c9b4a*/
  if ( (a2 & 1) != 0 ) /*0x3c9b53*/
    j_j_free(Block); /*0x3c9b5d*/
  return Block; /*0x3c9b62*/
}

// [2/3] Address: 0x3c9b70
// Method: InfoAlertButton::create
// Hidden C++ exception states: #wind=6
char *__fastcall InfoAlertButton_create(__int64 a1, __int64 a2)
{
  char *v4; // r14
  size_t *v5; // rax
  size_t *v6; // rdi
  size_t *v7; // rax
  size_t *v8; // rsi
  struct cocos2d::CCSprite *v9; // rbx
  void *v10; // rdx
  void *v11; // rdx
  char v13[32]; // [rsp+40h] [rbp-A8h] BYREF
  char v14[32]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v15; // [rsp+80h] [rbp-68h]
  __int64 v16; // [rsp+88h] [rbp-60h]

  v15 = a1; /*0x3c9ba9*/
  v16 = a2; /*0x3c9bad*/
  v4 = (char *)operator new(0x250u); /*0x3c9bbb*/
  CCMenuItemSpriteExtra_CCMenuItemSpriteExtra((__int64)v4); /*0x3c9bc6*/
  *(_QWORD *)v4 = &InfoAlertButton::`vftable'; /*0x3c9bd2*/
  *((_QWORD *)v4 + 40) = &InfoAlertButton::`vftable'; /*0x3c9bdc*/
  *(_OWORD *)(v4 + 520) = 0; /*0x3c9bed*/
  *((_QWORD *)v4 + 67) = 0; /*0x3c9bf3*/
  *((_QWORD *)v4 + 68) = 15; /*0x3c9bf7*/
  v4[520] = 0; /*0x3c9bff*/
  *(_OWORD *)(v4 + 552) = 0; /*0x3c9c09*/
  *((_QWORD *)v4 + 71) = 0; /*0x3c9c0d*/
  *((_QWORD *)v4 + 72) = 15; /*0x3c9c11*/
  v4[552] = 0; /*0x3c9c19*/
  *((_DWORD *)v4 + 146) = 1065353216; /*0x3c9c1c*/
  v4[588] = 0; /*0x3c9c27*/
  sub_3E4F0(v13, a2); /*0x3c9c40*/
  v6 = v5; /*0x3c9c45*/
  sub_3E4F0(v14, a1); /*0x3c9c55*/
  v8 = v7; /*0x3c9c5a*/
  v9 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_infoIcon_001.png"); /*0x3c9c6f*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v9 + 160LL))(v9); /*0x3c9c7b*/
  if ( (unsigned __int8)sub_47940((_DWORD)v4, (_DWORD)v9, 0, 0, 0) ) /*0x3c9c96*/
  {
    *((_DWORD *)v4 + 93) = 1069547520; /*0x3c9cc3*/
    if ( v4 + 520 != (char *)v8 ) /*0x3c9cd1*/
    {
      v10 = v8; /*0x3c9cd3*/
      if ( v8[3] > 0xF ) /*0x3c9cdb*/
        v10 = (void *)*v8; /*0x3c9cdd*/
      sub_3F5A0(v4 + 520, v10, v8[2]); /*0x3c9ce7*/
    }
    if ( v4 + 552 != (char *)v6 ) /*0x3c9cef*/
    {
      v11 = v6; /*0x3c9cf1*/
      if ( v6[3] > 0xF ) /*0x3c9cf9*/
        v11 = (void *)*v6; /*0x3c9cfb*/
      sub_3F5A0(v4 + 552, v11, v6[2]); /*0x3c9d05*/
    }
    sub_3C310(v8); /*0x3c9d0e*/
    sub_3C310(v6); /*0x3c9d17*/
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v4); /*0x3c9d1f*/
  }
  else
  {
    sub_3C310(v8); /*0x3c9ca2*/
    sub_3C310(v6); /*0x3c9cab*/
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v4 + 8LL))(v4, 1); /*0x3c9cbb*/
    v4 = 0; /*0x3c9cbe*/
  }
  sub_3C310(a1); /*0x3c9d29*/
  sub_3C310(a2); /*0x3c9d32*/
  return v4; /*0x3c9d3a*/
}

// [3/3] Address: 0x3c9d70
// Method: InfoAlertButton::activate
void __fastcall InfoAlertButton_activate(__int64 a1)
{
  _QWORD *v2; // rdx
  __int64 v3; // r8
  _QWORD *v4; // rdx
  cocos2d::CCObject *v5; // rax
  __int128 v6; // [rsp+50h] [rbp-28h] BYREF
  __int64 v7; // [rsp+60h] [rbp-18h]
  __int64 v8; // [rsp+68h] [rbp-10h]

  if ( *(_BYTE *)(a1 + 345) ) /*0x3c9d76*/
  {
    v2 = (_QWORD *)(a1 + 552); /*0x3c9d86*/
    if ( *(_QWORD *)(a1 + 576) > 0xFu ) /*0x3c9d92*/
      v2 = (_QWORD *)*v2; /*0x3c9d94*/
    v7 = 0; /*0x3c9d9a*/
    v6 = 0; /*0x3c9da3*/
    v8 = 0; /*0x3c9da8*/
    v3 = -1; /*0x3c9db1*/
    do /*0x3c9dc3*/
      ++v3; /*0x3c9dc0*/
    while ( *((_BYTE *)v2 + v3) ); /*0x3c9dc3*/
    sub_3C230(&v6); /*0x3c9dcf*/
    v4 = (_QWORD *)(a1 + 520); /*0x3c9dd4*/
    if ( *(_QWORD *)(a1 + 544) > 0xFu ) /*0x3c9de0*/
      v4 = (_QWORD *)*v4; /*0x3c9de2*/
    v5 = FLAlertLayer_create_0( /*0x3c9e2c*/
           0,
           (int)v4,
           (__int64)&v6,
           (__int64)"OK",
           0,
           1138163712,
           *(_BYTE *)(a1 + 588),
           0,
           *(_DWORD *)(a1 + 584));
    (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v5 + 1064LL))(v5); /*0x3c9e3e*/
  }
}
