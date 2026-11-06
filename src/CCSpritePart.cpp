#include <new>
#include <Geode/Bindings.hpp>
#include <Geode/binding/CCSpritePart.hpp>
#include <cocos2d.h>


inline __m128i Size = {0};
inline GDStub CCSpritePlus_CCSpritePlus;
using namespace cocos2d;

// [1/4] Address: 0x48580
// Method: CCSpritePart::CCSpritePart
CCSpritePart::CCSpritePart()
{
  _BYTE* a1 = (_BYTE*)this;
  uint64_t a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

//   CCSpritePlus_CCSpritePlus(a1); /*0x48589*/ // cleaned base ctor
  *(_BYTE *)(((uintptr_t)a1 + 624))  = (uintptr_t)(0); /*0x4858e*/
//   *(_QWORD *)a1 = &CCSpritePart::`vftable'; /*0x4859c*/ // cleaned vftable
//   *(_QWORD *)(((uintptr_t)a1 + 320)) = &CCSpritePart::`vftable'; /*0x485a9*/ // cleaned vftable
//   *(_QWORD *)(((uintptr_t)a1 + 344)) = &CCSpritePart::`vftable'; /*0x485b7*/ // cleaned vftable
  *(_OWORD *)(((uintptr_t)a1 + 632))  = (uintptr_t)(0); /*0x485c0*/
  *(_QWORD *)(((uintptr_t)a1 + 648))  = (uintptr_t)(0); /*0x485c7*/
  *(_QWORD *)(((uintptr_t)a1 + 656))  = (uintptr_t)(15); /*0x485ce*/
  *(_BYTE *)(((uintptr_t)a1 + 632))  = (uintptr_t)(0); /*0x485d9*/
  *(_QWORD *)(((uintptr_t)a1 + 664))  = (uintptr_t)(0); /*0x485df*/
  return; /*0x485e9*/
}

// [2/4] Address: 0x485f0
// Method: CCSpritePart::~CCSpritePart
CCSpritePart::~CCSpritePart()
{
  auto Block = (char*)this;
  _BYTE* a1 = (_BYTE*)this;
  uint64_t a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  cocos2d::CCObject *v4; // rcx

  sub_3C310((char *)Block + 632); /*0x48606*/
//   *(_QWORD *)Block = &CCSpritePlus::`vftable'; /*0x48613*/ // cleaned vftable
//   *((_QWORD *)Block + 40) = &CCSpritePlus::`vftable'; /*0x4861d*/ // cleaned vftable
//   *((_QWORD *)Block + 43) = &CCSpritePlus::`vftable'; /*0x4862b*/ // cleaned vftable
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 75); /*0x48632*/
  if ( v4 ) /*0x4863c*/
    CCObject_release(v4); /*0x4863e*/
//   cocos2d::CCSprite::~CCSprite(Block); /*0x48647*/ // cleaned base ctor/dtor
//   if ( (a2 & 1) != 0 ) /*0x48652*/
//     j_j_free(Block); /*0x4865c*/ // cleaned scalar delete
  return; /*0x48664*/
}

// [3/4] Address: 0x49710
// Method: CCSpritePart::frameChanged
void CCSpritePart::frameChanged(std::string frame)
{
  __int64 a1 = (__int64)this;
  size_t* a2 = to_gd_val<size_t*>(frame);
  uint64_t a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  __int64 v4; // rax
  void *v5; // rdx
  _BYTE v7[32]; // [rsp+28h] [rbp-40h] BYREF
  size_t *v8; // [rsp+48h] [rbp-20h]

  v8 = (decltype(  v8))(a2);
  if ( *(_QWORD *)(((uintptr_t)a1 + 664)) && (unsigned int)sub_3C160(a2, (void *)(((uintptr_t)a1 + 632))) ) /*0x49748*/
  {
    sub_3E4F0(v7, a2); /*0x49759*/
    (***(void (__fastcall ****)(_QWORD, __int64, __int64))(((uintptr_t)a1 + 664)))(*(_QWORD *)(((uintptr_t)a1 + 664)), a1, v4); /*0x49771*/
  }
  if ( (size_t *)(((uintptr_t)a1 + 632)) != a2 ) /*0x4977e*/
  {
    v5 = (decltype(    v5))(a2);
    if ( a2[3] > 0xF ) /*0x49788*/
      v5 = (void *)*a2; /*0x4978a*/
    sub_3F5A0((void *)(((uintptr_t)a1 + 632)), v5, a2[2]); /*0x49791*/
  }
  { sub_3C310(a2); return; } /*0x4979f*/
}

// [4/4] Address: 0x497c0
// Method: CCSpritePart::setVisible
void CCSpritePart::setVisible(bool visible)
{
  cocos2d::CCSprite* a1 = (cocos2d::CCSprite*)this;
  bool a2 = to_gd_val<bool>(visible);
  uint64_t a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  bool v2; // r8

  v2 = 0; /*0x497c0*/
  if ( *((_BYTE *)((uintptr_t)a1 + 624)) ) /*0x497c6*/
    v2 = (decltype(    v2))(a2);
  (((cocos2d::CCSprite*)(a1))->setVisible((bool)(v2))); /*0x497d5*/
}
