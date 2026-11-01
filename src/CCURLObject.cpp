#include <Geode/binding/CCURLObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x272a70
// Method: CCURLObject::create
// Hidden C++ exception states: #wind=6
_OWORD *__fastcall CCURLObject_create(__int64 a1, __int64 a2)
{
  _OWORD *v4; // rsi
  size_t *v5; // rax
  size_t *v6; // rbx
  size_t *v7; // rax
  size_t *v8; // rdi
  void *v9; // rdx
  void *v10; // rdx
  char v12[32]; // [rsp+30h] [rbp-88h] BYREF
  char v13[32]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v14; // [rsp+70h] [rbp-48h]
  __int64 v15; // [rsp+78h] [rbp-40h]

  v14 = a1; /*0x272aa1*/
  v15 = a2; /*0x272aa6*/
  v4 = operator new(0x78u); /*0x272ab5*/
  *v4 = 0; /*0x272ac2*/
  v4[1] = 0; /*0x272ac5*/
  v4[2] = 0; /*0x272ac9*/
  v4[3] = 0; /*0x272acd*/
  v4[4] = 0; /*0x272ad1*/
  v4[5] = 0; /*0x272ad5*/
  v4[6] = 0; /*0x272ad9*/
  *((_QWORD *)v4 + 14) = 0; /*0x272add*/
  cocos2d::CCObject::CCObject((cocos2d::CCObject *)v4); /*0x272ae4*/
  *(_QWORD *)v4 = &CCURLObject::`vftable'; /*0x272af1*/
  *(_OWORD *)((char *)v4 + 56) = 0; /*0x272afb*/
  *((_QWORD *)v4 + 9) = 0; /*0x272b01*/
  *((_QWORD *)v4 + 10) = 15; /*0x272b05*/
  *((_BYTE *)v4 + 56) = 0; /*0x272b0d*/
  *(_OWORD *)((char *)v4 + 88) = 0; /*0x272b14*/
  *((_QWORD *)v4 + 13) = 0; /*0x272b18*/
  *((_QWORD *)v4 + 14) = 15; /*0x272b1c*/
  *((_BYTE *)v4 + 88) = 0; /*0x272b24*/
  sub_3E4F0(v12, a2); /*0x272b39*/
  v6 = v5; /*0x272b3e*/
  sub_3E4F0(v13, a1); /*0x272b4e*/
  v8 = v7; /*0x272b53*/
  if ( (size_t *)((char *)v4 + 56) != v7 ) /*0x272b5e*/
  {
    v9 = v7; /*0x272b60*/
    if ( v7[3] > 0xF ) /*0x272b68*/
      v9 = (void *)*v7; /*0x272b6a*/
    sub_3F5A0((char *)v4 + 56, v9, v7[2]); /*0x272b74*/
  }
  if ( (size_t *)((char *)v4 + 88) != v6 ) /*0x272b7c*/
  {
    v10 = v6; /*0x272b7e*/
    if ( v6[3] > 0xF ) /*0x272b86*/
      v10 = (void *)*v6; /*0x272b88*/
    sub_3F5A0((char *)v4 + 88, v10, v6[2]); /*0x272b92*/
  }
  sub_3C310(v8); /*0x272b9b*/
  sub_3C310(v6); /*0x272ba4*/
  cocos2d::CCObject::autorelease((cocos2d::CCObject *)v4); /*0x272bac*/
  sub_3C310(a1); /*0x272bb6*/
  sub_3C310(a2); /*0x272bbf*/
  return v4; /*0x272bc7*/
}

// [2/2] Address: 0x272c00
// Method: CCURLObject::~CCURLObject
cocos2d::CCObject *__fastcall CCURLObject__dtor_CCURLObject(cocos2d::CCObject *Block, char a2)
{
  sub_3C310((char *)Block + 88); /*0x272c13*/
  sub_3C310((char *)Block + 56); /*0x272c1c*/
  cocos2d::CCObject::~CCObject(Block); /*0x272c24*/
  if ( (a2 & 1) != 0 ) /*0x272c2d*/
    j_j_free(Block); /*0x272c37*/
  return Block; /*0x272c3c*/
}
