#include <Geode/binding/CCSpritePlus.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/15] Address: 0x48400
// Method: CCSpritePlus::CCSpritePlus
__int64 __fastcall CCSpritePlus_CCSpritePlus(__int64 a1)
{
  cocos2d::CCSprite::CCSprite((cocos2d::CCSprite *)a1); /*0x48409*/
  *(_QWORD *)a1 = &CCSpritePlus::`vftable'; /*0x48416*/
  *(_QWORD *)(a1 + 320) = &CCSpritePlus::`vftable'; /*0x48420*/
  *(_QWORD *)(a1 + 344) = &CCSpritePlus::`vftable'; /*0x4842e*/
  *(_QWORD *)(a1 + 600) = 0; /*0x48437*/
  *(_QWORD *)(a1 + 608) = 0; /*0x4843e*/
  *(_WORD *)(a1 + 616) = 0; /*0x48445*/
  *(_BYTE *)(a1 + 618) = 0; /*0x4844c*/
  return a1; /*0x48455*/
}

// [2/15] Address: 0x48460
// Method: CCSpritePlus::~CCSpritePlus
// Hidden C++ exception states: #wind=1
cocos2d::CCSprite *__fastcall CCSpritePlus__dtor_CCSpritePlus(cocos2d::CCSprite *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *(_QWORD *)Block = &CCSpritePlus::`vftable'; /*0x48476*/
  *((_QWORD *)Block + 40) = &CCSpritePlus::`vftable'; /*0x48480*/
  *((_QWORD *)Block + 43) = &CCSpritePlus::`vftable'; /*0x4848e*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 75); /*0x48495*/
  if ( v4 ) /*0x4849f*/
    cocos2d::CCObject::release(v4); /*0x484a1*/
  cocos2d::CCSprite::~CCSprite(Block); /*0x484aa*/
  if ( (a2 & 1) != 0 ) /*0x484b5*/
    j_j_free(Block); /*0x484bf*/
  return Block; /*0x484c7*/
}

// [3/15] Address: 0x4ae20
// Method: CCSpritePlus::createWithSpriteFrameName
// Hidden C++ exception states: #wind=1
cocos2d::CCObject *__fastcall CCSpritePlus_createWithSpriteFrameName(const char *a1)
{
  cocos2d::CCSpriteFrameCache *v2; // rax
  struct cocos2d::CCSpriteFrame *v3; // rdi
  __int64 v4; // rax
  cocos2d::CCObject *v5; // rbx
  void *v7; // [rsp+38h] [rbp+10h]

  v2 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x4ae2d*/
  v3 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v2, a1); /*0x4ae3f*/
  v7 = operator new(0x270u); /*0x4ae4c*/
  v4 = CCSpritePlus_CCSpritePlus((__int64)v7); /*0x4ae54*/
  v5 = (cocos2d::CCObject *)v4; /*0x4ae59*/
  if ( v4 ) /*0x4ae5f*/
  {
    if ( v3 /*0x4ae76*/
      && (*(unsigned __int8 (__fastcall **)(__int64, struct cocos2d::CCSpriteFrame *))(*(_QWORD *)v4 + 912LL))(v4, v3) )
    {
      cocos2d::CCObject::autorelease(v5); /*0x4ae80*/
      return v5; /*0x4ae93*/
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v5 + 8LL))(v5, 1); /*0x4ae9f*/
  }
  return 0; /*0x4ae89*/
}

// [4/15] Address: 0x4aeb0
// Method: CCSpritePlus::initWithSpriteFrameName
bool __fastcall CCSpritePlus_initWithSpriteFrameName(cocos2d::CCSprite *a1, const char *a2)
{
  *((_DWORD *)a1 + 7) = 13; /*0x4aeb0*/
  return cocos2d::CCSprite::initWithSpriteFrameName(a1, a2);
}

// [5/15] Address: 0x4aec0
// Method: CCSpritePlus::initWithTexture
bool __fastcall CCSpritePlus_initWithTexture(cocos2d::CCSprite *a1, struct cocos2d::CCTexture2D *a2)
{
  *((_DWORD *)a1 + 7) = 13; /*0x4aec7*/
  return cocos2d::CCSprite::initWithTexture(a1, a2, (const struct cocos2d::CCRect *)&unk_903B08);
}

// [6/15] Address: 0x4aee0
// Method: CCSpritePlus::setPosition
void __fastcall CCSpritePlus_setPosition(__int64 a1, const struct cocos2d::CCPoint *a2)
{
  unsigned int i; // edi
  struct cocos2d::CCObject *v5; // rax

  cocos2d::CCSprite::setPosition((cocos2d::CCSprite *)a1, a2); /*0x4aef0*/
  if ( *(_BYTE *)(a1 + 616) ) /*0x4aef6*/
  {
    for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 600)); ++i ) /*0x4af0d*/
    {
      v5 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 600), i); /*0x4af29*/
      (*(void (__fastcall **)(struct cocos2d::CCObject *, const struct cocos2d::CCPoint *))(*(_QWORD *)v5 + 184LL))( /*0x4af3f*/
        v5,
        a2);
    }
  }
}

// [7/15] Address: 0x4af70
// Method: CCSpritePlus::setRotation
void __fastcall CCSpritePlus_setRotation(__int64 a1, float a2)
{
  unsigned int i; // edi
  struct cocos2d::CCObject *v4; // rax

  cocos2d::CCSprite::setRotation((cocos2d::CCSprite *)a1, a2); /*0x4af81*/
  if ( *(_BYTE *)(a1 + 616) ) /*0x4af87*/
  {
    for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 600)); ++i ) /*0x4af9e*/
    {
      v4 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 600), i); /*0x4afb9*/
      (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v4 + 352LL))(v4); /*0x4afcf*/
    }
  }
}

// [8/15] Address: 0x4b000
// Method: CCSpritePlus::setRotationX
void __fastcall CCSpritePlus_setRotationX(__int64 a1, float a2)
{
  unsigned int i; // edi
  struct cocos2d::CCObject *v4; // rax

  cocos2d::CCSprite::setRotationX((cocos2d::CCSprite *)a1, a2); /*0x4b011*/
  if ( *(_BYTE *)(a1 + 616) ) /*0x4b017*/
  {
    for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 600)); ++i ) /*0x4b02e*/
    {
      v4 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 600), i); /*0x4b049*/
      (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v4 + 368LL))(v4); /*0x4b05f*/
    }
  }
}

// [9/15] Address: 0x4b090
// Method: CCSpritePlus::setRotationY
void __fastcall CCSpritePlus_setRotationY(__int64 a1, float a2)
{
  unsigned int i; // edi
  struct cocos2d::CCObject *v4; // rax

  cocos2d::CCSprite::setRotationY((cocos2d::CCSprite *)a1, a2); /*0x4b0a1*/
  if ( *(_BYTE *)(a1 + 616) ) /*0x4b0a7*/
  {
    for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 600)); ++i ) /*0x4b0be*/
    {
      v4 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 600), i); /*0x4b0d9*/
      (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v4 + 384LL))(v4); /*0x4b0ef*/
    }
  }
}

// [10/15] Address: 0x4b120
// Method: CCSpritePlus::setFlipX
void __fastcall CCSpritePlus_setFlipX(__int64 a1, bool a2)
{
  unsigned int v4; // edi
  cocos2d::CCArray *v5; // rcx
  unsigned int v6; // esi
  cocos2d::CCSprite *v7; // rax
  cocos2d::CCSprite *v8; // rax

  cocos2d::CCSprite::setFlipX((cocos2d::CCSprite *)a1, a2); /*0x4b135*/
  v4 = 0; /*0x4b13b*/
  if ( *(_BYTE *)(a1 + 618) ) /*0x4b13d*/
  {
    v5 = *(cocos2d::CCArray **)(a1 + 208); /*0x4b146*/
    if ( v5 ) /*0x4b150*/
    {
      v6 = 0; /*0x4b157*/
      if ( cocos2d::CCArray::count(v5) ) /*0x4b159*/
      {
        do /*0x4b19d*/
        {
          v7 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 208), v6); /*0x4b179*/
          cocos2d::CCSprite::setFlipX(v7, a2); /*0x4b186*/
          ++v6; /*0x4b193*/
        }
        while ( v6 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 208)) ); /*0x4b19d*/
      }
    }
  }
  if ( *(_BYTE *)(a1 + 616) && cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 600)) ) /*0x4b1b4*/
  {
    do /*0x4b1ed*/
    {
      v8 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 600), v4); /*0x4b1c9*/
      cocos2d::CCSprite::setFlipX(v8, a2); /*0x4b1d6*/
      ++v4; /*0x4b1e3*/
    }
    while ( v4 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 600)) ); /*0x4b1ed*/
  }
}

// [11/15] Address: 0x4b200
// Method: CCSpritePlus::setFlipY
void __fastcall CCSpritePlus_setFlipY(__int64 a1, bool a2)
{
  unsigned int v4; // edi
  cocos2d::CCArray *v5; // rcx
  unsigned int v6; // esi
  cocos2d::CCSprite *v7; // rax
  cocos2d::CCSprite *v8; // rax

  cocos2d::CCSprite::setFlipY((cocos2d::CCSprite *)a1, a2); /*0x4b215*/
  v4 = 0; /*0x4b21b*/
  if ( *(_BYTE *)(a1 + 618) ) /*0x4b21d*/
  {
    v5 = *(cocos2d::CCArray **)(a1 + 208); /*0x4b226*/
    if ( v5 ) /*0x4b230*/
    {
      v6 = 0; /*0x4b237*/
      if ( cocos2d::CCArray::count(v5) ) /*0x4b239*/
      {
        do /*0x4b27d*/
        {
          v7 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 208), v6); /*0x4b259*/
          cocos2d::CCSprite::setFlipY(v7, a2); /*0x4b266*/
          ++v6; /*0x4b273*/
        }
        while ( v6 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 208)) ); /*0x4b27d*/
      }
    }
  }
  if ( *(_BYTE *)(a1 + 616) && cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 600)) ) /*0x4b294*/
  {
    do /*0x4b2cd*/
    {
      v8 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 600), v4); /*0x4b2a9*/
      cocos2d::CCSprite::setFlipY(v8, a2); /*0x4b2b6*/
      ++v4; /*0x4b2c3*/
    }
    while ( v4 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 600)) ); /*0x4b2cd*/
  }
}

// [12/15] Address: 0x4b2e0
// Method: CCSpritePlus::setScaleX
void __fastcall CCSpritePlus_setScaleX(__int64 a1, float a2)
{
  unsigned int i; // edi
  struct cocos2d::CCObject *v4; // rax

  cocos2d::CCSprite::setScaleX((cocos2d::CCSprite *)a1, a2); /*0x4b2f1*/
  if ( *(_BYTE *)(a1 + 616) ) /*0x4b2f7*/
  {
    if ( *(_BYTE *)(a1 + 617) ) /*0x4b300*/
    {
      for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 600)); ++i ) /*0x4b317*/
      {
        v4 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 600), i); /*0x4b32a*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v4 + 120LL))(v4); /*0x4b33d*/
      }
    }
  }
}

// [13/15] Address: 0x4b370
// Method: CCSpritePlus::setScaleY
void __fastcall CCSpritePlus_setScaleY(__int64 a1, float a2)
{
  unsigned int i; // edi
  struct cocos2d::CCObject *v4; // rax

  cocos2d::CCSprite::setScaleY((cocos2d::CCSprite *)a1, a2); /*0x4b381*/
  if ( *(_BYTE *)(a1 + 616) ) /*0x4b387*/
  {
    if ( *(_BYTE *)(a1 + 617) ) /*0x4b390*/
    {
      for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 600)); ++i ) /*0x4b3a7*/
      {
        v4 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 600), i); /*0x4b3ba*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v4 + 136LL))(v4); /*0x4b3d0*/
      }
    }
  }
}

// [14/15] Address: 0x4b400
// Method: CCSpritePlus::setScale
void __fastcall CCSpritePlus_setScale(__int64 a1, float a2)
{
  unsigned int i; // edi
  struct cocos2d::CCObject *v4; // rax

  cocos2d::CCSprite::setScale((cocos2d::CCSprite *)a1, a2); /*0x4b411*/
  if ( *(_BYTE *)(a1 + 616) ) /*0x4b417*/
  {
    if ( *(_BYTE *)(a1 + 617) ) /*0x4b420*/
    {
      for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 600)); ++i ) /*0x4b437*/
      {
        v4 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 600), i); /*0x4b44a*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v4 + 160LL))(v4); /*0x4b460*/
      }
    }
  }
}

// [15/15] Address: 0x4b490
// Method: CCSpritePlus::removeFollower
void __fastcall CCSpritePlus_removeFollower(struct cocos2d::CCObject *a1)
{
  __int64 v1; // rbx

  v1 = *((_QWORD *)a1 + 76); /*0x4b496*/
  if ( v1 && *(_QWORD *)(v1 + 600) ) /*0x4b4a2*/
  {
    cocos2d::CCArray::removeObject(*(cocos2d::CCArray **)(v1 + 600), a1, 1); /*0x4b4b7*/
    if ( !cocos2d::CCArray::count(*(cocos2d::CCArray **)(v1 + 600)) ) /*0x4b4c4*/
      *(_BYTE *)(v1 + 616) = 0; /*0x4b4ce*/
  }
}
