#include <Geode/binding/URLViewLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x396330
// Method: URLViewLayer::~URLViewLayer
struct cocos2d::CCObject *__fastcall URLViewLayer__dtor_URLViewLayer(struct cocos2d::CCObject *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *(_QWORD *)Block = &URLViewLayer::`vftable'; /*0x396346*/
  *((_QWORD *)Block + 40) = &URLViewLayer::`vftable'; /*0x396350*/
  *((_QWORD *)Block + 41) = &URLViewLayer::`vftable'; /*0x39635e*/
  *((_QWORD *)Block + 42) = &URLViewLayer::`vftable'; /*0x39636c*/
  *((_QWORD *)Block + 43) = &URLViewLayer::`vftable'; /*0x39637a*/
  *((_QWORD *)Block + 44) = &URLViewLayer::`vftable'; /*0x396388*/
  *((_QWORD *)Block + 51) = &URLViewLayer::`vftable'; /*0x396396*/
  *((_QWORD *)Block + 54) = &URLViewLayer::`vftable'; /*0x3963a4*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 76); /*0x3963ab*/
  if ( v4 ) /*0x3963b5*/
    cocos2d::CCObject::release(v4); /*0x3963b7*/
  GJDropDownLayer__dtor_GJDropDownLayer(Block); /*0x3963c0*/
  if ( (a2 & 1) != 0 ) /*0x3963ca*/
    j_j_free(Block); /*0x3963d4*/
  return Block; /*0x3963dc*/
}

// [2/2] Address: 0x3a6f50
// Method: URLViewLayer::create
// Hidden C++ exception states: #wind=3
void *__fastcall URLViewLayer_create(__int64 a1, cocos2d::CCObject *a2)
{
  void *v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rbx
  __int64 v12; // [rsp+20h] [rbp-68h]
  _BYTE v13[8]; // [rsp+48h] [rbp-40h] BYREF
  _BYTE v14[32]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v15; // [rsp+70h] [rbp-18h]

  v15 = a1; /*0x3a6f7c*/
  v4 = operator new(0x268u); /*0x3a6f8b*/
  GJDropDownLayer_GJDropDownLayer((__int64)v4); /*0x3a6f96*/
  *(_QWORD *)v4 = &URLViewLayer::`vftable'; /*0x3a6fa2*/
  *((_QWORD *)v4 + 40) = &URLViewLayer::`vftable'; /*0x3a6fac*/
  *((_QWORD *)v4 + 41) = &URLViewLayer::`vftable'; /*0x3a6fba*/
  *((_QWORD *)v4 + 42) = &URLViewLayer::`vftable'; /*0x3a6fc8*/
  *((_QWORD *)v4 + 43) = &URLViewLayer::`vftable'; /*0x3a6fd6*/
  *((_QWORD *)v4 + 44) = &URLViewLayer::`vftable'; /*0x3a6fe4*/
  *((_QWORD *)v4 + 51) = &URLViewLayer::`vftable'; /*0x3a6ff2*/
  *((_QWORD *)v4 + 54) = &URLViewLayer::`vftable'; /*0x3a7000*/
  sub_3E4F0(v14, a1); /*0x3a700f*/
  v6 = v5; /*0x3a7014*/
  LODWORD(v7) = (_DWORD)v5; /*0x3a701c*/
  if ( v5[3] > 0xFu ) /*0x3a7024*/
    v7 = *v5; /*0x3a7026*/
  if ( GJDropDownLayer_init((__int64 *)v4, v7, 220.0, 0) ) /*0x3a7037*/
  {
    if ( a2 ) /*0x3a7060*/
    {
      *((_QWORD *)v4 + 76) = a2; /*0x3a7062*/
      cocos2d::CCObject::retain(a2); /*0x3a706c*/
    }
    v9 = cocos2d::CCDirector::sharedDirector(v8); /*0x3a7072*/
    cocos2d::CCDirector::getWinSize(v9, v13); /*0x3a7080*/
    v10 = CustomListView_create(*((cocos2d::CCObject **)v4 + 76), 0, 220.0, 356.0, v12, 32); /*0x3a70b5*/
    (*(void (__fastcall **)(_QWORD *, __int64))(*v10 + 64LL))(v10, 9); /*0x3a70c3*/
    (*(void (__fastcall **)(_QWORD, _QWORD *, __int64))(**((_QWORD **)v4 + 71) + 456LL))(*((_QWORD *)v4 + 71), v10, 6); /*0x3a70d9*/
    sub_3C310(v6); /*0x3a70e3*/
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v4); /*0x3a70eb*/
  }
  else
  {
    sub_3C310(v6); /*0x3a7043*/
    (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v4 + 8LL))(v4, 1); /*0x3a7053*/
    v4 = 0; /*0x3a7056*/
  }
  sub_3C310(a1); /*0x3a70f5*/
  return v4; /*0x3a70fd*/
}
