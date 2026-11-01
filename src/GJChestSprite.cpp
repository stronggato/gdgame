#include <Geode/binding/GJChestSprite.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/5] Address: 0x55cee0
// Method: GJChestSprite::~GJChestSprite
cocos2d::CCSprite *__fastcall GJChestSprite__dtor_GJChestSprite(cocos2d::CCSprite *Block, char a2)
{
  *(_QWORD *)Block = &GJChestSprite::`vftable'; /*0x55cef3*/
  *((_QWORD *)Block + 40) = &GJChestSprite::`vftable'; /*0x55cf00*/
  *((_QWORD *)Block + 43) = &GJChestSprite::`vftable'; /*0x55cf0e*/
  cocos2d::CCSprite::~CCSprite(Block); /*0x55cf15*/
  if ( (a2 & 1) != 0 ) /*0x55cf1e*/
    j_j_free(Block); /*0x55cf28*/
  return Block; /*0x55cf2d*/
}

// [3/5] Address: 0x562200
// Method: GJChestSprite::create
// Hidden C++ exception states: #wind=1
cocos2d::CCSprite *__fastcall GJChestSprite_create(int a1)
{
  cocos2d::CCSprite *v2; // rbx
  bool v3; // al
  __int64 v4; // rcx

  v2 = (cocos2d::CCSprite *)operator new(0x268u); /*0x562216*/
  cocos2d::CCSprite::CCSprite(v2); /*0x562221*/
  *(_QWORD *)v2 = &GJChestSprite::`vftable'; /*0x56222e*/
  *((_QWORD *)v2 + 40) = &GJChestSprite::`vftable'; /*0x562238*/
  *((_QWORD *)v2 + 43) = &GJChestSprite::`vftable'; /*0x562246*/
  *((_QWORD *)v2 + 75) = 0; /*0x56224d*/
  *((_BYTE *)v2 + 608) = 0; /*0x562258*/
  v3 = cocos2d::CCSprite::init(v2); /*0x562262*/
  v4 = *(_QWORD *)v2; /*0x562268*/
  if ( v3 ) /*0x56226d*/
  {
    *((_DWORD *)v2 + 150) = a1; /*0x56226f*/
    (*(void (__fastcall **)(cocos2d::CCSprite *, void *))(v4 + 312))(v2, &unk_9055A0); /*0x562286*/
    sub_562400(v2, 2, 0); /*0x562294*/
    cocos2d::CCObject::autorelease(v2); /*0x56229c*/
    return v2; /*0x5622a2*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCSprite *, __int64))(v4 + 8))(v2, 1); /*0x5622bc*/
    return 0; /*0x5622bf*/
  }
}

// [4/5] Address: 0x5622d0
// Method: GJChestSprite::setColor
int __fastcall GJChestSprite_setColor(cocos2d::CCSprite *a1, __int16 *a2)
{
  bool v2; // zf
  _BYTE *v3; // rbx
  __int16 v4; // ax
  int v5; // r8d
  cocos2d::CCArray *v6; // rax
  cocos2d::CCArray *v7; // rbx
  struct cocos2d::CCObject *v8; // rax
  __int16 v10; // [rsp+30h] [rbp+8h] BYREF
  char v11; // [rsp+32h] [rbp+Ah]

  v2 = *((_BYTE *)a1 + 288) == 0; /*0x5622d6*/
  v3 = (char *)a1 - 320; /*0x5622dd*/
  v4 = *a2; /*0x5622e4*/
  v5 = *((unsigned __int8 *)a2 + 2); /*0x5622e7*/
  v10 = *a2; /*0x5622ec*/
  v11 = v5; /*0x5622f1*/
  if ( !v2 ) /*0x5622f6*/
  {
    LOBYTE(v10) = (int)(float)((float)(unsigned __int8)v4 * 0.40000001); /*0x562312*/
    HIBYTE(v10) = (int)(float)((float)HIBYTE(v10) * 0.40000001); /*0x562332*/
    v11 = (int)(float)((float)v5 * 0.40000001); /*0x56233e*/
  }
  cocos2d::CCSprite::setColor(a1, (const struct cocos2d::_ccColor3B *)&v10); /*0x562347*/
  v6 = (cocos2d::CCArray *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v3 + 480LL))(v3); /*0x562353*/
  v7 = v6; /*0x562359*/
  if ( v6 ) /*0x56235f*/
  {
    LODWORD(v6) = cocos2d::CCArray::count(v6); /*0x562364*/
    if ( (_DWORD)v6 ) /*0x56236c*/
    {
      v8 = cocos2d::CCArray::objectAtIndex(v7, 0); /*0x562373*/
      LODWORD(v6) = (**((__int64 (__fastcall ***)(__int64, __int16 *))v8 + 40))((__int64)v8 + 320, &v10); /*0x562388*/
    }
  }
  return (int)v6; /*0x56238a*/
}

// [5/5] Address: 0x562390
// Method: GJChestSprite::setOpacity
int __fastcall GJChestSprite_setOpacity(cocos2d::CCSprite *a1, unsigned __int8 a2)
{
  cocos2d::CCArray *v4; // rax
  cocos2d::CCArray *v5; // rbx
  struct cocos2d::CCObject *v6; // rax

  cocos2d::CCSprite::setOpacity(a1, a2); /*0x5623a0*/
  v4 = (cocos2d::CCArray *)(*(__int64 (__fastcall **)(__int64))(*((_QWORD *)a1 - 40) + 480LL))((__int64)a1 - 320); /*0x5623b0*/
  v5 = v4; /*0x5623b6*/
  if ( v4 ) /*0x5623bc*/
  {
    LODWORD(v4) = cocos2d::CCArray::count(v4); /*0x5623c1*/
    if ( (_DWORD)v4 ) /*0x5623c9*/
    {
      v6 = cocos2d::CCArray::objectAtIndex(v5, 0); /*0x5623d0*/
      LODWORD(v4) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v6 + 40) + 40LL))((__int64)v6 + 320, a2); /*0x5623e4*/
    }
  }
  return (int)v4; /*0x5623e7*/
}
