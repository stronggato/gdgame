#include <Geode/binding/GJUINode.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/9] Address: 0x10e400
// Method: GJUINode::~GJUINode
cocos2d::CCNode *__fastcall GJUINode__dtor_GJUINode(cocos2d::CCNode *Block, char a2)
{
  cocos2d::CCNode::~CCNode(Block); /*0x10e40f*/
  if ( (a2 & 1) != 0 ) /*0x10e418*/
    j_j_free(Block); /*0x10e422*/
  return Block; /*0x10e427*/
}

// [2/9] Address: 0x6688e0
// Method: GJUINode::create
// Hidden C++ exception states: #wind=1
cocos2d::CCNode *__fastcall GJUINode_create(__int64 a1)
{
  cocos2d::CCNode *v2; // rdi

  v2 = (cocos2d::CCNode *)operator new(0x160u); /*0x6688fc*/
  cocos2d::CCNode::CCNode(v2); /*0x668907*/
  *(_QWORD *)v2 = &TimeSpeedControl::`vftable'; /*0x668914*/
  *((_QWORD *)v2 + 40) = 0; /*0x668919*/
  *((_QWORD *)v2 + 41) = 0; /*0x668920*/
  *((_QWORD *)v2 + 42) = 0; /*0x668927*/
  *((_QWORD *)v2 + 43) = 0; /*0x66892e*/
  if ( (unsigned __int8)sub_668990(v2, a1) ) /*0x66893b*/
  {
    cocos2d::CCObject::autorelease(v2); /*0x668947*/
    return v2; /*0x66894d*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCNode *, __int64))(*(_QWORD *)v2 + 8LL))(v2, 1); /*0x66896f*/
    return 0; /*0x668972*/
  }
}

// [3/9] Address: 0x66ee00
// Method: GJUINode::init
bool __fastcall GJUINode_init(__int64 *a1, __int64 a2)
{
  bool result; // al
  const char *v5; // rbp
  const char *v6; // rcx
  struct cocos2d::CCSprite *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // r14
  cocos2d::CCSprite *v10; // rax
  _QWORD *v11; // rbp
  float v12; // xmm3_4
  float v13; // xmm5_4
  __int64 v14; // rax
  __int64 v15; // rdx
  bool v16; // zf
  _QWORD *v17; // rsi
  char v18; // al
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int8 v22; // si
  __int64 v23; // rcx
  char v24[16]; // [rsp+30h] [rbp-38h] BYREF

  result = cocos2d::CCNode::init((cocos2d::CCNode *)a1); /*0x66ee0d*/
  if ( result ) /*0x66ee15*/
  {
    (*(void (__fastcall **)(__int64 *, void *))(*a1 + 312))(a1, &unk_905EF0); /*0x66ee47*/
    v5 = "PBtn_Move_001.png"; /*0x66ee58*/
    if ( *(_BYTE *)(a2 + 36) || (v6 = "PBtn_Move_001.png", *(_BYTE *)(a2 + 38)) ) /*0x66ee61*/
      v6 = "PBtn_Jump_001.png"; /*0x66ee6a*/
    v7 = cocos2d::CCSprite::createWithSpriteFrameName(v6); /*0x66ee6d*/
    v8 = *a1; /*0x66ee73*/
    v9 = a1 + 40; /*0x66ee76*/
    a1[40] = (__int64)v7; /*0x66ee83*/
    (*(void (__fastcall **)(__int64 *, struct cocos2d::CCSprite *, __int64))(v8 + 456))(a1, v7, 1); /*0x66ee93*/
    if ( *(_BYTE *)(a2 + 36) ) /*0x66ee96*/
    {
      v11 = a1 + 40; /*0x66eee1*/
    }
    else
    {
      if ( *(_BYTE *)(a2 + 38) ) /*0x66ee9c*/
        v5 = "PBtn_Jump_001.png"; /*0x66eea0*/
      v10 = cocos2d::CCSprite::createWithSpriteFrameName(v5); /*0x66eea7*/
      a1[41] = (__int64)v10; /*0x66eeb0*/
      cocos2d::CCSprite::setFlipX(v10, 1); /*0x66eeb9*/
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 456))(a1, a1[41], 1); /*0x66eed2*/
      v11 = a1 + 40; /*0x66eed8*/
    }
    *((_BYTE *)a1 + 387) = *(_BYTE *)(a2 + 38); /*0x66eef5*/
    *((_BYTE *)a1 + 386) = *(_BYTE *)(a2 + 36); /*0x66ef02*/
    v12 = fmaxf(10.0, (float)*(int *)a2); /*0x66ef0f*/
    v13 = fmaxf(10.0, (float)*(int *)(a2 + 4)); /*0x66ef25*/
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v24, (float)-v12 * 0.5, (float)-v13 * 0.5, v12, v13); /*0x66ef49*/
    cocos2d::CCRect::operator=(a1 + 42, v14); /*0x66ef59*/
    sub_66F240(a1); /*0x66ef62*/
    *((float *)a1 + 93) = fmaxf(0.0, *(float *)(a2 + 20)); /*0x66ef72*/
    sub_66F240(a1); /*0x66ef7a*/
    v16 = a1[41] == 0; /*0x66ef7f*/
    v17 = a1 + 40; /*0x66ef87*/
    *((float *)a1 + 94) = (float)(int)*(float *)(a2 + 8); /*0x66ef9b*/
    if ( !v16 ) /*0x66efa3*/
    {
      v18 = *(_BYTE *)(a2 + 24); /*0x66efa5*/
      v19 = *v9; /*0x66efa9*/
      *((_BYTE *)a1 + 381) = v18; /*0x66efae*/
      LOBYTE(v15) = v18 == 0; /*0x66efb4*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 336LL))(v19, v15); /*0x66efba*/
      LOBYTE(v20) = *((_BYTE *)a1 + 381) == 0; /*0x66efce*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1[41] + 336LL))(a1[41], v20); /*0x66efd4*/
      sub_66F160(a1); /*0x66efdd*/
      v17 = v11; /*0x66efe2*/
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 160LL))(*v9); /*0x66f006*/
    v21 = a1[41]; /*0x66f00c*/
    if ( v21 ) /*0x66f01b*/
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 160LL))(v21); /*0x66f023*/
      v9 = v17; /*0x66f029*/
    }
    sub_66F240(a1); /*0x66f02f*/
    v22 = *(_BYTE *)(a2 + 16); /*0x66f037*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*v9 + 320LL) + 40LL))(*v9 + 320LL, v22); /*0x66f049*/
    v23 = a1[41]; /*0x66f04c*/
    if ( v23 ) /*0x66f063*/
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v23 + 320) + 40LL))(v23 + 320, v22); /*0x66f073*/
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 184))(a1, a2 + 28); /*0x66f080*/
    *((_BYTE *)a1 + 382) = *(_BYTE *)(a2 + 25); /*0x66f08f*/
    *((_BYTE *)a1 + 383) = 0; /*0x66f097*/
    return 1; /*0x66f095*/
  }
  return result; /*0x66ee17*/
}

// [4/9] Address: 0x66f0b0
// Method: GJUINode::saveToConfig
__int64 __fastcall GJUINode_saveToConfig(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 result; // rax

  *(_DWORD *)a2 = (int)*(float *)(a1 + 344); /*0x66f0c8*/
  *(_DWORD *)(a2 + 4) = (int)*(float *)(a1 + 348); /*0x66f0d2*/
  *(float *)(a2 + 12) = (*(float (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 320) + 168LL))(*(_QWORD *)(a1 + 320)); /*0x66f0e5*/
  *(_DWORD *)(a2 + 16) = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 320) + 320LL) + 32LL))(*(_QWORD *)(a1 + 320) + 320LL); /*0x66f104*/
  *(_DWORD *)(a2 + 20) = *(_DWORD *)(a1 + 372); /*0x66f10d*/
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 376); /*0x66f116*/
  *(_BYTE *)(a2 + 24) = *(_BYTE *)(a1 + 381); /*0x66f120*/
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1); /*0x66f126*/
  cocos2d::CCPoint::operator=(a2 + 28, v4); /*0x66f133*/
  *(_BYTE *)(a2 + 25) = *(_BYTE *)(a1 + 382); /*0x66f140*/
  result = *(unsigned __int8 *)(a1 + 387); /*0x66f143*/
  *(_BYTE *)(a2 + 38) = result; /*0x66f14f*/
  return result; /*0x66f14a*/
}

// [5/9] Address: 0x66f340
// Method: GJUINode::touchTest
__int64 __fastcall GJUINode_touchTest(__int64 a1, const struct cocos2d::CCPoint *a2)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  char v10; // [rsp+30h] [rbp+8h] BYREF
  char v11; // [rsp+40h] [rbp+18h] BYREF
  char v12; // [rsp+48h] [rbp+20h] BYREF

  if ( !cocos2d::CCRect::containsPoint((cocos2d::CCRect *)(a1 + 336), a2) ) /*0x66f357*/
    return 0; /*0x66f43c*/
  if ( *(_BYTE *)(a1 + 386) ) /*0x66f365*/
    return 1; /*0x66f36e*/
  if ( *(_BYTE *)(a1 + 381) && (*(_BYTE *)(a1 + 382) || !*(_BYTE *)(a1 + 383)) ) /*0x66f394*/
  {
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v11, a2); /*0x66f3a5*/
    v6 = v5; /*0x66f3bb*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v12, 0.0, 40.0); /*0x66f3be*/
    cocos2d::CCPoint::operator+(v6, &v10, v7); /*0x66f3cf*/
    (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 320) + 184LL))(*(_QWORD *)(a1 + 320), &v10); /*0x66f3e4*/
    LOBYTE(v8) = 1; /*0x66f3f1*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 320) + 336LL))(*(_QWORD *)(a1 + 320), v8); /*0x66f3f6*/
    *(_BYTE *)(a1 + 383) = 1; /*0x66f401*/
    return 5; /*0x66f3fc*/
  }
  else
  {
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v10, a2); /*0x66f41b*/
    return GJUINode_activeTouchTest(a1, v9); /*0x66f427*/
  }
}

// [6/9] Address: 0x66f450
// Method: GJUINode::activeTouchTest
__int64 __fastcall GJUINode_activeTouchTest(__int64 a1, const struct cocos2d::CCPoint *a2)
{
  float *v4; // rax
  float *v5; // rbx
  float *v6; // rax
  float *v7; // rax
  float v8; // xmm1_4
  float v9; // xmm3_4
  float v10; // xmm4_4
  float v11; // xmm1_4
  unsigned int v12; // ebx
  float v13; // xmm0_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm0_4
  __int64 *v19; // rcx
  __int64 v20; // rdx
  float v21; // [rsp+40h] [rbp+8h] BYREF
  float v22; // [rsp+44h] [rbp+Ch]
  char v23; // [rsp+50h] [rbp+18h] BYREF

  if ( *(_BYTE *)(a1 + 381) ) /*0x66f45a*/
  {
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v23, a2); /*0x66f4b4*/
    v5 = v4; /*0x66f4c1*/
    v6 = (float *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 320) + 200LL))(*(_QWORD *)(a1 + 320)); /*0x66f4c7*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v21, *v6, v5[1] + 40.0); /*0x66f4e7*/
    v7 = (float *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 320) + 200LL))(*(_QWORD *)(a1 + 320)); /*0x66f4f7*/
    v8 = *v5; /*0x66f4fd*/
    v9 = *v5 - *v7; /*0x66f50c*/
    v10 = fabs(v9); /*0x66f513*/
    if ( *(float *)(a1 + 376) <= v10 ) /*0x66f51d*/
    {
      v13 = *(float *)(a1 + 372); /*0x66f529*/
      if ( v10 <= v13 ) /*0x66f537*/
      {
        v11 = v21; /*0x66f556*/
      }
      else
      {
        if ( v9 <= 0.0 ) /*0x66f53c*/
          v11 = v8 + v13; /*0x66f54a*/
        else
          v11 = v8 - v13; /*0x66f53e*/
        v21 = v11; /*0x66f542*/
      }
      v12 = (v9 > 0.0) + 2; /*0x66f564*/
    }
    else
    {
      v11 = v21; /*0x66f51f*/
      v12 = 0; /*0x66f525*/
    }
    v14 = *(float *)(a1 + 344); /*0x66f577*/
    v15 = -v14; /*0x66f57a*/
    v16 = v14 * 0.5; /*0x66f581*/
    v17 = v15 * 0.5; /*0x66f585*/
    if ( v17 <= fminf(v16, v11) ) /*0x66f593*/
    {
      if ( v11 > v16 ) /*0x66f5a0*/
        v21 = v16; /*0x66f5a2*/
    }
    else
    {
      v21 = v17; /*0x66f595*/
    }
    v18 = *(float *)(a1 + 348) * 0.5; /*0x66f5b6*/
    if ( (float)(40.0 - v18) <= fminf(v18 + 40.0, v22) ) /*0x66f5cf*/
    {
      if ( v22 > (float)(v18 + 40.0) ) /*0x66f5dc*/
        v22 = v18 + 40.0; /*0x66f5de*/
    }
    else
    {
      v22 = 40.0 - v18; /*0x66f5d1*/
    }
    v19 = *(__int64 **)(a1 + 320); /*0x66f5e4*/
    v20 = *v19; /*0x66f5eb*/
    LOBYTE(v20) = 1; /*0x66f5f5*/
    (*(void (__fastcall **)(__int64 *, __int64))(*v19 + 336))(v19, v20); /*0x66f5f7*/
    (*(void (__fastcall **)(_QWORD, float *))(**(_QWORD **)(a1 + 320) + 184LL))(*(_QWORD *)(a1 + 320), &v21); /*0x66f610*/
    return v12; /*0x66f618*/
  }
  else if ( *(float *)(a1 + 376) <= fabs(*(float *)a2) ) /*0x66f47f*/
  {
    return (unsigned int)(*(float *)a2 >= 0.0) + 2; /*0x66f49c*/
  }
  else
  {
    return 5; /*0x66f481*/
  }
}

// [7/9] Address: 0x66f630
// Method: GJUINode::touchEnded
__int64 __fastcall GJUINode_touchEnded(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  __int16 v5; // [rsp+30h] [rbp+8h] BYREF
  char v6; // [rsp+32h] [rbp+Ah]

  *(_DWORD *)(a1 + 352) = -1; /*0x66f639*/
  v2 = *(_QWORD *)(a1 + 320); /*0x66f643*/
  if ( v2 ) /*0x66f64d*/
  {
    v5 = -1; /*0x66f65b*/
    v6 = -1; /*0x66f66e*/
    result = (**(__int64 (__fastcall ***)(__int64, __int16 *))(v2 + 320))(v2 + 320, &v5); /*0x66f675*/
  }
  if ( *(_BYTE *)(a1 + 381) ) /*0x66f677*/
  {
    if ( *(_BYTE *)(a1 + 382) ) /*0x66f680*/
    {
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 320) + 336LL))(*(_QWORD *)(a1 + 320), 0); /*0x66f695*/
      *(_DWORD *)(a1 + 388) = 0; /*0x66f69b*/
      return result; /*0x66f6aa*/
    }
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 328); /*0x66f6ab*/
    if ( v4 ) /*0x66f6b5*/
    {
      v5 = -1; /*0x66f6c3*/
      v6 = -1; /*0x66f6d6*/
      result = (**(__int64 (__fastcall ***)(__int64, __int16 *))(v4 + 320))(v4 + 320, &v5); /*0x66f6dd*/
    }
  }
  *(_DWORD *)(a1 + 388) = 0; /*0x66f6df*/
  return result; /*0x66f6a5*/
}

// [8/9] Address: 0x66f6f0
// Method: GJUINode::toggleHighlight
__int64 __fastcall GJUINode_toggleHighlight(__int64 a1, int a2, unsigned __int8 a3)
{
  char v3; // r10
  unsigned __int8 v4; // r9
  __int64 result; // rax
  __int64 v6; // rcx
  __int16 v7; // [rsp+30h] [rbp+8h] BYREF
  char v8; // [rsp+32h] [rbp+Ah]
  __int16 v9; // [rsp+38h] [rbp+10h] BYREF
  char v10; // [rsp+3Ah] [rbp+12h]

  v3 = *(_BYTE *)(a1 + 381); /*0x66f6f4*/
  v4 = 0; /*0x66f6fc*/
  result = a3; /*0x66f702*/
  if ( !v3 ) /*0x66f706*/
    v4 = a3; /*0x66f706*/
  if ( a2 != 3 || v3 ) /*0x66f712*/
    v6 = *(_QWORD *)(a1 + 320); /*0x66f71d*/
  else
    v6 = *(_QWORD *)(a1 + 328); /*0x66f714*/
  if ( v6 ) /*0x66f727*/
  {
    if ( v4 ) /*0x66f72c*/
    {
      v9 = -26986; /*0x66f735*/
      v10 = -106; /*0x66f741*/
      return (**(__int64 (__fastcall ***)(__int64, __int16 *))(v6 + 320))(v6 + 320, &v9); /*0x66f749*/
    }
    else
    {
      v7 = -1; /*0x66f75c*/
      v8 = -1; /*0x66f76f*/
      return (**(__int64 (__fastcall ***)(__int64, __int16 *))(v6 + 320))(v6 + 320, &v7); /*0x66f776*/
    }
  }
  return result; /*0x66f74b*/
}

// [9/9] Address: 0x66f780
// Method: GJUINode::draw
void __fastcall GJUINode_draw(__int64 a1, __int64 a2, __int64 a3, float a4)
{
  unsigned __int8 v5; // si
  unsigned __int8 v6; // bp
  unsigned __int8 v7; // r14
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  cocos2d *v11; // rcx
  float v12; // xmm6_4
  float v13; // xmm7_4
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  float v17; // xmm6_4
  const struct cocos2d::CCPoint *v18; // rax
  const struct cocos2d::CCPoint *v19; // rbx
  cocos2d *v20; // rax
  const struct cocos2d::CCPoint *v21; // r8
  const struct cocos2d::CCPoint *v22; // rdx
  float v23; // xmm1_4
  const struct cocos2d::CCPoint *v24; // rdx
  const struct cocos2d::CCPoint *v25; // rdx
  unsigned int v26; // [rsp+20h] [rbp-58h]
  char v27; // [rsp+80h] [rbp+8h] BYREF
  char v28; // [rsp+88h] [rbp+10h] BYREF
  char v29; // [rsp+90h] [rbp+18h] BYREF

  if ( *(_BYTE *)(a1 + 380) ) /*0x66f786*/
  {
    glLineWidth(2.0); /*0x66f7b2*/
    v5 = 0; /*0x66f7be*/
    v6 = -1; /*0x66f7c1*/
    v7 = 0; /*0x66f7c4*/
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1) - 2; /*0x66f7ca*/
    if ( v8 ) /*0x66f7cd*/
    {
      v9 = v8 - 1; /*0x66f7cf*/
      if ( v9 ) /*0x66f7d2*/
      {
        if ( v9 == 1 ) /*0x66f7d7*/
        {
          v5 = -1; /*0x66f7d9*/
          v6 = 0; /*0x66f7dd*/
          v7 = -1; /*0x66f7e0*/
        }
      }
      else
      {
        v5 = -1; /*0x66f7e6*/
      }
    }
    else
    {
      v7 = -1; /*0x66f7ec*/
    }
    cocos2d::ccDrawColor4B((cocos2d *)v5, v6, v7, 0xFFu); /*0x66f809*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v27, (const struct cocos2d::CCSize *)(a1 + 344)); /*0x66f81e*/
    cocos2d::CCPoint::operator+(a1 + 336, &v28, &v27); /*0x66f83b*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v29, (const struct cocos2d::CCPoint *)(a1 + 336)); /*0x66f850*/
    cocos2d::ccDrawRect(v10, &v28); /*0x66f861*/
    if ( *(_BYTE *)(a1 + 381) ) /*0x66f867*/
    {
      if ( *(float *)(a1 + 372) > 0.0 ) /*0x66f9b6*/
      {
        cocos2d::ccDrawColor4B((cocos2d *)((char *)&loc_FD + 2), 0x96u, 0, 0xFFu); /*0x66f9c4*/
        cocos2d::ccDrawCircle((cocos2d *)&unk_905ED8, v22, 360.0, a4, 0); /*0x66f9e7*/
      }
      v23 = *(float *)(a1 + 376); /*0x66f9ed*/
      if ( v23 > 0.0 && *(float *)(a1 + 372) > v23 ) /*0x66fa05*/
      {
        LOBYTE(v11) = -56; /*0x66fa0f*/
        cocos2d::ccDrawColor4B(v11, 0, 0, 0xFFu); /*0x66fa11*/
        cocos2d::ccDrawCircle((cocos2d *)&unk_905ED8, v24, 360.0, a4, 0); /*0x66fa34*/
      }
      cocos2d::ccDrawColor4B((cocos2d *)((char *)&loc_7D + 2), 0x7Fu, 0x7Fu, 0x7Fu); /*0x66fa48*/
      cocos2d::ccDrawFilledCircle((cocos2d *)&unk_905ED8, v25, 0.0, a4, v26); /*0x66fa66*/
    }
    else if ( *(_QWORD *)(a1 + 328) ) /*0x66f874*/
    {
      if ( *(float *)(a1 + 376) <= 0.0 ) /*0x66f893*/
      {
        cocos2d::ccDrawColor4B( /*0x66f949*/
          (cocos2d *)(unsigned int)(int)(float)((float)v5 * 0.30000001),
          (int)(float)((float)v6 * 0.30000001),
          (int)(float)((float)v7 * 0.30000001),
          0xFFu);
        v17 = *(float *)(a1 + 340); /*0x66f967*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v27, 0.0, v17 + *(float *)(a1 + 348)); /*0x66f972*/
        v19 = v18; /*0x66f986*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v28, 0.0, v17); /*0x66f989*/
        cocos2d::ccDrawLine(v20, v19, v21); /*0x66f995*/
      }
      else
      {
        LOBYTE(v11) = -56; /*0x66f89a*/
        cocos2d::ccDrawColor4B(v11, 0, 0, 0xFFu); /*0x66f89c*/
        v12 = *(float *)(a1 + 340); /*0x66f8ca*/
        v13 = -*(float *)(a1 + 376); /*0x66f8d2*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v27, *(float *)(a1 + 376), v12 + *(float *)(a1 + 348)); /*0x66f8d9*/
        v15 = v14; /*0x66f8ed*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v28, v13, v12); /*0x66f8f0*/
        cocos2d::ccDrawRect(v16, v15); /*0x66f8fc*/
      }
    }
  }
}
