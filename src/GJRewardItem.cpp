#include <Geode/binding/GJRewardItem.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/8] Address: 0x2d2e60
// Method: GJRewardItem::~GJRewardItem
cocos2d::CCObject *__fastcall GJRewardItem__dtor_GJRewardItem(cocos2d::CCObject *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *(_QWORD *)Block = &GJRewardItem::`vftable'; /*0x2d2e76*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 9); /*0x2d2e79*/
  if ( v4 ) /*0x2d2e80*/
    cocos2d::CCObject::release(v4); /*0x2d2e82*/
  cocos2d::CCObject::~CCObject(Block); /*0x2d2e8b*/
  if ( (a2 & 1) != 0 ) /*0x2d2e96*/
    j_j_free(Block); /*0x2d2ea0*/
  return Block; /*0x2d2ea8*/
}

// [2/8] Address: 0x2f51e0
// Method: GJRewardItem::create
__int64 GJRewardItem_create()
{
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF
  __int64 v2; // [rsp+30h] [rbp-18h]
  __int64 v3; // [rsp+38h] [rbp-10h]

  v2 = 0; /*0x2f51e7*/
  v1 = 0; /*0x2f51f0*/
  LOBYTE(v1) = 0; /*0x2f51fa*/
  v3 = 15; /*0x2f5201*/
  return GJRewardItem_create_0(0, 0, &v1); /*0x2f5211*/
}

// [3/8] Address: 0x2f5220
// Method: GJRewardItem::createWithObject
__int64 __fastcall GJRewardItem_createWithObject(int a1, struct cocos2d::CCObject *a2)
{
  cocos2d::CCObject *v3; // rsi
  __int64 result; // rax
  __int64 v5; // rdi
  cocos2d::CCObject *v6; // rcx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+38h] [rbp-10h]

  v8 = 0; /*0x2f523d*/
  v7 = 0; /*0x2f5246*/
  LOBYTE(v7) = 0; /*0x2f5250*/
  v9 = 15; /*0x2f5257*/
  v3 = cocos2d::CCArray::createWithObject(a2); /*0x2f5262*/
  result = GJRewardItem_create_0(0, 0, &v7); /*0x2f5265*/
  v5 = result; /*0x2f526a*/
  *(_DWORD *)(result + 64) = a1; /*0x2f526d*/
  if ( *(cocos2d::CCObject **)(result + 72) != v3 ) /*0x2f5274*/
  {
    if ( v3 ) /*0x2f5279*/
      cocos2d::CCObject::retain(v3); /*0x2f527e*/
    v6 = *(cocos2d::CCObject **)(v5 + 72); /*0x2f5284*/
    if ( v6 ) /*0x2f528b*/
      cocos2d::CCObject::release(v6); /*0x2f528d*/
    *(_QWORD *)(v5 + 72) = v3; /*0x2f5293*/
    return v5; /*0x2f5297*/
  }
  return result; /*0x2f529a*/
}

// [4/8] Address: 0x2f52b0
// Method: GJRewardItem::createWithObjects
__int64 __fastcall GJRewardItem_createWithObjects(int a1, cocos2d::CCObject *a2)
{
  __int64 result; // rax
  __int64 v5; // rdi
  cocos2d::CCObject *v6; // rcx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+38h] [rbp-10h]

  v8 = 0; /*0x2f52c3*/
  v9 = 15; /*0x2f52ce*/
  v7 = 0; /*0x2f52dc*/
  LOBYTE(v7) = 0; /*0x2f52e2*/
  result = GJRewardItem_create_0(0, 0, &v7); /*0x2f52e8*/
  v5 = result; /*0x2f52ed*/
  *(_DWORD *)(result + 64) = a1; /*0x2f52f0*/
  if ( *(cocos2d::CCObject **)(result + 72) != a2 ) /*0x2f52f7*/
  {
    if ( a2 ) /*0x2f52fc*/
      cocos2d::CCObject::retain(a2); /*0x2f5301*/
    v6 = *(cocos2d::CCObject **)(v5 + 72); /*0x2f5307*/
    if ( v6 ) /*0x2f530e*/
      cocos2d::CCObject::release(v6); /*0x2f5310*/
    *(_QWORD *)(v5 + 72) = a2; /*0x2f5316*/
    return v5; /*0x2f531a*/
  }
  return result; /*0x2f531d*/
}

// [5/8] Address: 0x2f5330
// Method: GJRewardItem::createSpecial
// Hidden C++ exception states: #wind=3
__int64 __fastcall GJRewardItem_createSpecial(
        __int64 a1,
        int a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        int a9)
{
  int v12; // r15d
  cocos2d::CCArray *v13; // rdi
  struct cocos2d::CCObject *v14; // rax
  struct cocos2d::CCObject *v15; // rax
  __int64 result; // rax
  __int64 v17; // rbx
  cocos2d::CCObject *v18; // rcx
  cocos2d::CCObject *v19; // [rsp+20h] [rbp-48h]
  cocos2d::CCObject *v20; // [rsp+20h] [rbp-48h]
  cocos2d::CCObject *v21; // [rsp+20h] [rbp-48h]
  __int128 v22; // [rsp+28h] [rbp-40h] BYREF
  __int64 v23; // [rsp+38h] [rbp-30h]
  __int64 v24; // [rsp+40h] [rbp-28h]

  v12 = a1; /*0x2f5357*/
  v13 = (cocos2d::CCArray *)cocos2d::CCArray::create(a1); /*0x2f5360*/
  if ( a2 > 0 ) /*0x2f536d*/
  {
    v19 = (cocos2d::CCObject *)operator new(0x48u); /*0x2f537c*/
    cocos2d::CCObject::CCObject(v19); /*0x2f5384*/
    *(_QWORD *)v19 = &GJRewardObject::`vftable'; /*0x2f538a*/
    *((_DWORD *)v19 + 14) = 7; /*0x2f538d*/
    *((_DWORD *)v19 + 16) = 0; /*0x2f5394*/
    *((_DWORD *)v19 + 17) = a2; /*0x2f539b*/
    cocos2d::CCObject::autorelease(v19); /*0x2f53a2*/
    cocos2d::CCArray::addObject(v13, v19); /*0x2f53ae*/
  }
  if ( a3 > 0 ) /*0x2f53b6*/
  {
    v20 = (cocos2d::CCObject *)operator new(0x48u); /*0x2f53c5*/
    cocos2d::CCObject::CCObject(v20); /*0x2f53cd*/
    *(_QWORD *)v20 = &GJRewardObject::`vftable'; /*0x2f53d3*/
    *((_DWORD *)v20 + 14) = 8; /*0x2f53d6*/
    *((_DWORD *)v20 + 16) = 0; /*0x2f53dd*/
    *((_DWORD *)v20 + 17) = a3; /*0x2f53e4*/
    cocos2d::CCObject::autorelease(v20); /*0x2f53ea*/
    cocos2d::CCArray::addObject(v13, v20); /*0x2f53f6*/
  }
  if ( a4 ) /*0x2f53fe*/
  {
    v14 = (struct cocos2d::CCObject *)GJRewardObject_create(a4, a5, 0); /*0x2f540c*/
    cocos2d::CCArray::addObject(v13, v14); /*0x2f5417*/
  }
  if ( a6 ) /*0x2f5426*/
  {
    v15 = (struct cocos2d::CCObject *)GJRewardObject_create(a6, a7, 0); /*0x2f5432*/
    cocos2d::CCArray::addObject(v13, v15); /*0x2f543d*/
  }
  if ( a8 > 0 && a9 > 0 ) /*0x2f5457*/
  {
    v21 = (cocos2d::CCObject *)operator new(0x48u); /*0x2f5466*/
    cocos2d::CCObject::CCObject(v21); /*0x2f546e*/
    *(_QWORD *)v21 = &GJRewardObject::`vftable'; /*0x2f5474*/
    *((_DWORD *)v21 + 14) = 9; /*0x2f5477*/
    *((_DWORD *)v21 + 16) = a9; /*0x2f547e*/
    *((_DWORD *)v21 + 17) = 1; /*0x2f5481*/
    cocos2d::CCObject::autorelease(v21); /*0x2f548b*/
    *((_DWORD *)v21 + 15) = a8; /*0x2f5491*/
    cocos2d::CCArray::addObject(v13, v21); /*0x2f549a*/
  }
  v22 = 0; /*0x2f54a3*/
  v23 = 0; /*0x2f54a8*/
  v24 = 15; /*0x2f54b1*/
  LOBYTE(v22) = 0; /*0x2f54ba*/
  result = GJRewardItem_create_0(0, 0, &v22); /*0x2f54c8*/
  v17 = result; /*0x2f54cd*/
  *(_DWORD *)(result + 64) = v12; /*0x2f54d0*/
  if ( *(cocos2d::CCArray **)(result + 72) != v13 ) /*0x2f54d8*/
  {
    if ( v13 ) /*0x2f54dd*/
      cocos2d::CCObject::retain(v13); /*0x2f54e2*/
    v18 = *(cocos2d::CCObject **)(v17 + 72); /*0x2f54e8*/
    if ( v18 ) /*0x2f54ef*/
      cocos2d::CCObject::release(v18); /*0x2f54f1*/
    *(_QWORD *)(v17 + 72) = v13; /*0x2f54f7*/
    return v17; /*0x2f54fb*/
  }
  return result; /*0x2f54fe*/
}

// [6/8] Address: 0x2f5520
// Method: GJRewardItem::create_0
// Hidden C++ exception states: #wind=2
cocos2d::CCObject *__fastcall GJRewardItem_create_0(unsigned int a1, unsigned int a2, __int64 a3)
{
  cocos2d::CCObject *v6; // rsi
  __int64 v7; // rax
  _BYTE v9[32]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v10; // [rsp+48h] [rbp-30h]

  v10 = a3; /*0x2f5548*/
  v6 = (cocos2d::CCObject *)operator new(0x58u); /*0x2f5557*/
  cocos2d::CCObject::CCObject(v6); /*0x2f5562*/
  *(_QWORD *)v6 = &GJRewardItem::`vftable'; /*0x2f556f*/
  *((_QWORD *)v6 + 7) = 0; /*0x2f5575*/
  *((_DWORD *)v6 + 16) = 0; /*0x2f5579*/
  *((_QWORD *)v6 + 9) = 0; /*0x2f557d*/
  *((_BYTE *)v6 + 80) = 0; /*0x2f5581*/
  v7 = sub_3E4F0(v9, a3); /*0x2f558d*/
  if ( (unsigned __int8)GJRewardItem_init(v6, a1, a2, v7, v6) ) /*0x2f559d*/
  {
    cocos2d::CCObject::autorelease(v6); /*0x2f55a9*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v6 + 8LL))(v6, 1); /*0x2f55b9*/
    v6 = 0; /*0x2f55bc*/
  }
  sub_3C310(a3); /*0x2f55c2*/
  return v6; /*0x2f55ca*/
}

// [7/8] Address: 0x2f55f0
// Method: GJRewardItem::init
// Hidden C++ exception states: #wind=4
char __fastcall GJRewardItem_init(__int64 a1, int a2, int a3, __int64 a4)
{
  cocos2d::CCArray *v6; // rbx
  cocos2d::CCString *v7; // rax
  cocos2d::CCString *v8; // rax
  int v9; // r12d
  cocos2d::CCString *v10; // rax
  unsigned int v11; // r14d
  cocos2d::CCString *v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  BOOL v15; // r13d
  int v16; // r15d
  cocos2d::CCArray *v17; // rdi
  struct cocos2d::CCObject *v18; // rax
  cocos2d::CCObject *v19; // rcx
  int v21; // [rsp+20h] [rbp-58h]
  cocos2d::CCObject *v22; // [rsp+28h] [rbp-50h]
  cocos2d::CCObject *v23; // [rsp+28h] [rbp-50h]
  cocos2d::CCObject *v24; // [rsp+28h] [rbp-50h]

  *(_DWORD *)(a1 + 56) = a2; /*0x2f561e*/
  *(_DWORD *)(a1 + 60) = a3; /*0x2f5621*/
  if ( *(_QWORD *)(a4 + 16) ) /*0x2f5625*/
  {
    v6 = (cocos2d::CCArray *)sub_D09B0(a4, &unk_709CE8); /*0x2f563f*/
    if ( cocos2d::CCArray::count(v6) >= 4 ) /*0x2f564e*/
    {
      v7 = cocos2d::CCArray::stringAtIndex(v6, 0); /*0x2f5659*/
      v21 = cocos2d::CCString::intValue(v7); /*0x2f5668*/
      v8 = cocos2d::CCArray::stringAtIndex(v6, 1u); /*0x2f5674*/
      v9 = cocos2d::CCString::intValue(v8); /*0x2f5683*/
      v10 = cocos2d::CCArray::stringAtIndex(v6, 2u); /*0x2f568e*/
      v11 = cocos2d::CCString::intValue(v10); /*0x2f569d*/
      v12 = cocos2d::CCArray::stringAtIndex(v6, 3u); /*0x2f56a8*/
      v13 = cocos2d::CCString::intValue(v12); /*0x2f56b1*/
      v15 = v11 == v13; /*0x2f56bd*/
      v16 = 0; /*0x2f56c1*/
      if ( v11 != v13 ) /*0x2f56c7*/
        v16 = v13; /*0x2f56c7*/
      v17 = (cocos2d::CCArray *)cocos2d::CCArray::create(v14); /*0x2f56d1*/
      if ( v21 > 0 ) /*0x2f56d9*/
      {
        v22 = (cocos2d::CCObject *)operator new(0x48u); /*0x2f56e8*/
        cocos2d::CCObject::CCObject(v22); /*0x2f56f0*/
        *(_QWORD *)v22 = &GJRewardObject::`vftable'; /*0x2f56fd*/
        *((_DWORD *)v22 + 14) = 7; /*0x2f5700*/
        *((_DWORD *)v22 + 16) = 0; /*0x2f5707*/
        *((_DWORD *)v22 + 17) = v21; /*0x2f5712*/
        cocos2d::CCObject::autorelease(v22); /*0x2f5718*/
        cocos2d::CCArray::addObject(v17, v22); /*0x2f5724*/
      }
      if ( v9 > 0 ) /*0x2f572d*/
      {
        v23 = (cocos2d::CCObject *)operator new(0x48u); /*0x2f573c*/
        cocos2d::CCObject::CCObject(v23); /*0x2f5744*/
        *(_QWORD *)v23 = &GJRewardObject::`vftable'; /*0x2f5751*/
        *((_DWORD *)v23 + 14) = 8; /*0x2f5754*/
        *((_DWORD *)v23 + 16) = 0; /*0x2f575b*/
        *((_DWORD *)v23 + 17) = v9; /*0x2f5762*/
        cocos2d::CCObject::autorelease(v23); /*0x2f5769*/
        cocos2d::CCArray::addObject(v17, v23); /*0x2f5775*/
      }
      if ( v11 ) /*0x2f577e*/
      {
        v18 = (struct cocos2d::CCObject *)GJRewardObject_create(v11, (unsigned int)(v15 + 1), 0); /*0x2f578a*/
        cocos2d::CCArray::addObject(v17, v18); /*0x2f5795*/
      }
      if ( v16 ) /*0x2f579e*/
      {
        v24 = (cocos2d::CCObject *)operator new(0x48u); /*0x2f57ad*/
        cocos2d::CCObject::CCObject(v24); /*0x2f57b5*/
        *(_QWORD *)v24 = &GJRewardObject::`vftable'; /*0x2f57c2*/
        *((_DWORD *)v24 + 14) = v16; /*0x2f57c5*/
        *((_DWORD *)v24 + 16) = 0; /*0x2f57c9*/
        *((_DWORD *)v24 + 17) = 1; /*0x2f57d0*/
        cocos2d::CCObject::autorelease(v24); /*0x2f57da*/
        cocos2d::CCArray::addObject(v17, v24); /*0x2f57e6*/
      }
      if ( cocos2d::CCArray::count(v17) && *(cocos2d::CCArray **)(a1 + 72) != v17 ) /*0x2f57fd*/
      {
        if ( v17 ) /*0x2f5802*/
          cocos2d::CCObject::retain(v17); /*0x2f5807*/
        v19 = *(cocos2d::CCObject **)(a1 + 72); /*0x2f580d*/
        if ( v19 ) /*0x2f5814*/
          cocos2d::CCObject::release(v19); /*0x2f5816*/
        *(_QWORD *)(a1 + 72) = v17; /*0x2f581c*/
      }
    }
  }
  sub_3C310(a4); /*0x2f5823*/
  return 1; /*0x2f582a*/
}

// [8/8] Address: 0x2f5ce0
// Method: GJRewardItem::encodeWithCoder
void __fastcall GJRewardItem_encodeWithCoder(__int64 a1, DS_Dictionary *a2)
{
  DS_Dictionary::setIntegerForKey(a2, "kCEK", 8); /*0x2f5d00*/
  DS_Dictionary::setIntegerForKey(a2, (const char *)&word_708050, *(_DWORD *)(a1 + 56)); /*0x2f5d14*/
  DS_Dictionary::setIntegerForKey(a2, (const char *)&word_708048, *(_DWORD *)(a1 + 64)); /*0x2f5d28*/
  DS_Dictionary::setArrayForKey(a2, (const char *)&word_708044, *(struct cocos2d::CCArray **)(a1 + 72)); /*0x2f5d46*/
}
