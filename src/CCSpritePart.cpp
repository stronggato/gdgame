#include <Geode/binding/CCSpritePart.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x48580
// Method: CCSpritePart::CCSpritePart
__int64 __fastcall CCSpritePart_CCSpritePart(__int64 a1)
{
  CCSpritePlus_CCSpritePlus(a1); /*0x48589*/
  *(_BYTE *)(a1 + 624) = 0; /*0x4858e*/
  *(_QWORD *)a1 = &CCSpritePart::`vftable'; /*0x4859c*/
  *(_QWORD *)(a1 + 320) = &CCSpritePart::`vftable'; /*0x485a9*/
  *(_QWORD *)(a1 + 344) = &CCSpritePart::`vftable'; /*0x485b7*/
  *(_OWORD *)(a1 + 632) = 0; /*0x485c0*/
  *(_QWORD *)(a1 + 648) = 0; /*0x485c7*/
  *(_QWORD *)(a1 + 656) = 15; /*0x485ce*/
  *(_BYTE *)(a1 + 632) = 0; /*0x485d9*/
  *(_QWORD *)(a1 + 664) = 0; /*0x485df*/
  return a1; /*0x485e9*/
}

// [2/4] Address: 0x485f0
// Method: CCSpritePart::~CCSpritePart
// Hidden C++ exception states: #wind=1
cocos2d::CCSprite *__fastcall CCSpritePart__dtor_CCSpritePart(cocos2d::CCSprite *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  sub_3C310((char *)Block + 632); /*0x48606*/
  *(_QWORD *)Block = &CCSpritePlus::`vftable'; /*0x48613*/
  *((_QWORD *)Block + 40) = &CCSpritePlus::`vftable'; /*0x4861d*/
  *((_QWORD *)Block + 43) = &CCSpritePlus::`vftable'; /*0x4862b*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 75); /*0x48632*/
  if ( v4 ) /*0x4863c*/
    cocos2d::CCObject::release(v4); /*0x4863e*/
  cocos2d::CCSprite::~CCSprite(Block); /*0x48647*/
  if ( (a2 & 1) != 0 ) /*0x48652*/
    j_j_free(Block); /*0x4865c*/
  return Block; /*0x48664*/
}

// [3/4] Address: 0x49710
// Method: CCSpritePart::frameChanged
// Hidden C++ exception states: #wind=1
double __fastcall CCSpritePart_frameChanged(__int64 a1, size_t *a2)
{
  __int64 v4; // rax
  void *v5; // rdx
  _BYTE v7[32]; // [rsp+28h] [rbp-40h] BYREF
  size_t *v8; // [rsp+48h] [rbp-20h]

  v8 = a2; /*0x4972f*/
  if ( *(_QWORD *)(a1 + 664) && (unsigned int)sub_3C160(a2, (void *)(a1 + 632)) ) /*0x49748*/
  {
    sub_3E4F0(v7, a2); /*0x49759*/
    (***(void (__fastcall ****)(_QWORD, __int64, __int64))(a1 + 664))(*(_QWORD *)(a1 + 664), a1, v4); /*0x49771*/
  }
  if ( (size_t *)(a1 + 632) != a2 ) /*0x4977e*/
  {
    v5 = a2; /*0x49780*/
    if ( a2[3] > 0xF ) /*0x49788*/
      v5 = (void *)*a2; /*0x4978a*/
    sub_3F5A0((void *)(a1 + 632), v5, a2[2]); /*0x49791*/
  }
  return sub_3C310(a2); /*0x4979f*/
}

// [4/4] Address: 0x497c0
// Method: CCSpritePart::setVisible
void __fastcall CCSpritePart_setVisible(cocos2d::CCSprite *a1, bool a2)
{
  bool v2; // r8

  v2 = 0; /*0x497c0*/
  if ( *((_BYTE *)a1 + 624) ) /*0x497c6*/
    v2 = a2; /*0x497cd*/
  cocos2d::CCSprite::setVisible(a1, v2); /*0x497d5*/
}
