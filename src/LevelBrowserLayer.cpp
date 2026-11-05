#include <Geode/binding/LevelBrowserLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/30] Address: 0xd72f0
// Method: LevelBrowserLayer::create
// Hidden C++ exception states: #wind=1
cocos2d::CCObject *__fastcall LevelBrowserLayer_create(__int64 a1)
{
  __int64 v2; // rax
  cocos2d::CCObject *v3; // rbx
  void *v5; // [rsp+38h] [rbp+10h]

  v5 = operator new(0x4D8u); /*0xd7307*/
  v2 = sub_D0E70(v5); /*0xd730f*/
  v3 = (cocos2d::CCObject *)v2; /*0xd7314*/
  if ( v2 ) /*0xd731a*/
  {
    if ( (unsigned __int8)CustomSongWidget_init(v2, a1) ) /*0xd7322*/
    {
      cocos2d::CCObject::autorelease(v3); /*0xd732e*/
      return v3; /*0xd7341*/
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v3 + 8LL))(v3, 1); /*0xd734a*/
    return 0; /*0xd734d*/
  }
  return v3; /*0xd7337*/
}

// [2/30] Address: 0x1273e0
// Method: LevelBrowserLayer::onToggleAllObjects
char __fastcall LevelBrowserLayer_onToggleAllObjects(__int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // rcx
  cocos2d::CCArray *v4; // rcx
  unsigned int v5; // edi
  struct cocos2d::CCObject *v6; // rax

  LOBYTE(v2) = *(_BYTE *)(a1 + 1145) == 0; /*0x1273f0*/
  *(_BYTE *)(a1 + 1145) = v2; /*0x1273f3*/
  v3 = *(_QWORD *)(a1 + 680); /*0x1273f9*/
  if ( v3 ) /*0x127403*/
  {
    *(_BYTE *)(v3 + 1500) = v2; /*0x127405*/
  }
  else
  {
    v4 = *(cocos2d::CCArray **)(a1 + 688); /*0x127411*/
    if ( v4 ) /*0x12741b*/
    {
      v5 = 0; /*0x127422*/
      v2 = cocos2d::CCArray::count(v4); /*0x127424*/
      if ( v2 ) /*0x12742c*/
      {
        do /*0x12745d*/
        {
          v6 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 688), v5++); /*0x127439*/
          *((_BYTE *)v6 + 1500) = *(_BYTE *)(a1 + 1145); /*0x127448*/
          v2 = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 688)); /*0x127455*/
        }
        while ( v5 < v2 ); /*0x12745d*/
      }
    }
  }
  return v2; /*0x12740b*/
}

// [3/30] Address: 0x213ba0
// Method: LevelBrowserLayer::getSearchTitle
// Hidden C++ exception states: #wind=4
double __fastcall LevelBrowserLayer_getSearchTitle(__int64 a1, __int64 a2)
{
  cocos2d::CCObject *v4; // rcx
  cocos2d::CCArray *v5; // rcx
  char *v6; // rdi
  _QWORD *v7; // rcx
  unsigned __int8 *v8; // rsi
  char *v9; // rbx
  signed __int64 v10; // rdi
  cocos2d::CCObject *v11; // rax
  __int64 v12; // rsi
  unsigned int *v13; // rsi
  __int64 v14; // rax
  struct cocos2d::CCObject **v15; // rsi
  struct cocos2d::CCObject **i; // r12
  struct cocos2d::CCObject *v17; // r15
  char *v18; // rdi
  _QWORD *v19; // rcx
  unsigned __int8 *v20; // r14
  char *v21; // rbx
  signed __int64 v22; // rdi
  _QWORD *v23; // r9
  _QWORD *v24; // rcx
  double result; // xmm0_8
  _QWORD v26[2]; // [rsp+38h] [rbp-41h] BYREF
  __int64 v27; // [rsp+48h] [rbp-31h]
  unsigned __int64 v28; // [rsp+50h] [rbp-29h]
  _QWORD v29[2]; // [rsp+58h] [rbp-21h] BYREF
  __int64 v30; // [rsp+68h] [rbp-11h]
  unsigned __int64 v31; // [rsp+70h] [rbp-9h]
  _BYTE v32[32]; // [rsp+78h] [rbp-1h] BYREF

  v4 = *(cocos2d::CCObject **)(a1 + 864); /*0x213bd2*/
  if ( v4 ) /*0x213bdc*/
  {
    cocos2d::CCObject::release(v4); /*0x213bde*/
    *(_QWORD *)(a1 + 864) = 0; /*0x213be4*/
  }
  v5 = *(cocos2d::CCArray **)(a1 + 856); /*0x213beb*/
  if ( v5 && cocos2d::CCArray::count(v5) && *(_QWORD *)(a2 + 16) ) /*0x213c09*/
  {
    sub_3E4F0(v29, a2); /*0x213c1a*/
    v6 = (char *)v29; /*0x213c1f*/
    if ( v31 > 0xF ) /*0x213c2c*/
      v6 = (char *)v29[0]; /*0x213c2c*/
    v7 = v29; /*0x213c30*/
    if ( v31 > 0xF ) /*0x213c34*/
      v7 = (_QWORD *)v29[0]; /*0x213c34*/
    v8 = (unsigned __int8 *)v7 + v30; /*0x213c3c*/
    v9 = (char *)v29; /*0x213c3f*/
    if ( v31 > 0xF ) /*0x213c48*/
      v9 = (char *)v29[0]; /*0x213c48*/
    if ( v9 != (char *)v8 ) /*0x213c4f*/
    {
      v10 = v6 - v9; /*0x213c51*/
      do /*0x213c66*/
      {
        v9[v10] = tolower((unsigned __int8)*v9); /*0x213c5d*/
        ++v9; /*0x213c60*/
      }
      while ( v9 != (char *)v8 ); /*0x213c66*/
    }
    v11 = (cocos2d::CCObject *)cocos2d::CCArray::create(v7); /*0x213c68*/
    *(_QWORD *)(a1 + 864) = v11; /*0x213c6e*/
    cocos2d::CCObject::retain(v11); /*0x213c78*/
    v12 = *(_QWORD *)(a1 + 856); /*0x213c7e*/
    if ( v12 ) /*0x213c88*/
    {
      v13 = *(unsigned int **)(v12 + 56); /*0x213c8e*/
      v14 = *v13; /*0x213c92*/
      if ( (_DWORD)v14 ) /*0x213c96*/
      {
        v15 = (struct cocos2d::CCObject **)*((_QWORD *)v13 + 2); /*0x213c9c*/
        for ( i = &v15[v14 - 1]; v15 <= i; ++v15 ) /*0x213cab*/
        {
          v17 = *v15; /*0x213cb1*/
          if ( !*v15 ) /*0x213cb1*/
            break; /*0x213cb7*/
          sub_3E4F0(v32, (char *)v17 + 320); /*0x213cc8*/
          sub_3E4F0(v26, v32); /*0x213cd6*/
          v18 = (char *)v26; /*0x213cdb*/
          if ( v28 > 0xF ) /*0x213ce8*/
            v18 = (char *)v26[0]; /*0x213ce8*/
          v19 = v26; /*0x213cec*/
          if ( v28 > 0xF ) /*0x213cf0*/
            v19 = (_QWORD *)v26[0]; /*0x213cf0*/
          v20 = (unsigned __int8 *)v19 + v27; /*0x213cf8*/
          v21 = (char *)v26; /*0x213cfb*/
          if ( v28 > 0xF ) /*0x213d04*/
            v21 = (char *)v26[0]; /*0x213d04*/
          if ( v21 != (char *)v20 ) /*0x213d0b*/
          {
            v22 = v18 - v21; /*0x213d0d*/
            do /*0x213d22*/
            {
              v21[v22] = tolower((unsigned __int8)*v21); /*0x213d19*/
              ++v21; /*0x213d1c*/
            }
            while ( v21 != (char *)v20 ); /*0x213d22*/
          }
          sub_3C310(v32); /*0x213d28*/
          v23 = v29; /*0x213d2d*/
          if ( v31 > 0xF ) /*0x213d36*/
            LODWORD(v23) = v29[0]; /*0x213d36*/
          v24 = v26; /*0x213d3b*/
          if ( v28 > 0xF ) /*0x213d44*/
            LODWORD(v24) = v26[0]; /*0x213d44*/
          if ( sub_3DFB0((_DWORD)v24, v27, 0, (_DWORD)v23, v30) != -1 ) /*0x213d62*/
            cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 864), v17); /*0x213d6e*/
          sub_3C310(v26); /*0x213d79*/
        }
      }
    }
    return sub_3C310(v29); /*0x213d8f*/
  }
  return result; /*0x213d94*/
}

// [4/30] Address: 0x2240a0
// Method: LevelBrowserLayer::getItemsMatchingSearch
// Hidden C++ exception states: #wind=7
double __fastcall LevelBrowserLayer_getItemsMatchingSearch(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  int v6; // esi
  void *v7; // rcx
  _BYTE *v8; // rax
  unsigned __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // r15
  char *v12; // rdi
  char *v13; // rbx
  unsigned int v14; // ebx
  const char *v15; // rcx
  int v16; // eax
  _BYTE *v17; // rdx
  bool v18; // cl
  cocos2d::CCString *v19; // rax
  const char *v20; // rax
  __int64 v21; // r8
  __int64 v22; // rax
  cocos2d::CCString *v23; // rax
  const char *CString; // rax
  __int64 v25; // r8
  __int64 v26; // rbx
  void *v27; // rcx
  char *v28; // rdi
  char *v29; // rax
  __int128 v31; // [rsp+38h] [rbp-71h] BYREF
  __int64 v32; // [rsp+48h] [rbp-61h]
  __int64 v33; // [rsp+50h] [rbp-59h]
  __int64 v34; // [rsp+58h] [rbp-51h]
  __int64 v35; // [rsp+60h] [rbp-49h]
  void *Block[2]; // [rsp+68h] [rbp-41h] BYREF
  __m128i si128; // [rsp+78h] [rbp-31h]
  __int128 v38; // [rsp+88h] [rbp-21h] BYREF
  __int128 v39; // [rsp+98h] [rbp-11h]
  _OWORD v40[2]; // [rsp+A8h] [rbp-1h] BYREF

  v3 = a3; /*0x2240ca*/
  v33 = a3; /*0x2240cd*/
  v34 = a2; /*0x2240d7*/
  v35 = a3; /*0x2240db*/
  v6 = 0; /*0x2240e1*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_830FC0); /*0x2240f5*/
  strcpy((char *)Block, "UploadDeathData"); /*0x224102*/
  cocos2d::CCDictionary::removeObjectForKey(a1[149], Block); /*0x224134*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x224143*/
  {
    v7 = Block[0]; /*0x224148*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x224156*/
    {
      v7 = (void *)*((_QWORD *)Block[0] - 1); /*0x22415c*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v7 - 8) > 0x1F ) /*0x22416b*/
        invoke_watson(0, 0, 0, 0, 0); /*0x22417c*/
    }
    j_j_free(v7); /*0x224183*/
  }
  if ( !*(_QWORD *)(a2 + 16) ) /*0x224188*/
    goto LABEL_57; /*0x224188*/
  v8 = (_BYTE *)a2; /*0x224194*/
  if ( *(_QWORD *)(a2 + 24) > 0xFu ) /*0x22419d*/
    v8 = *(_BYTE **)a2; /*0x22419f*/
  if ( *v8 != 49 ) /*0x2241a6*/
    goto LABEL_57; /*0x2241a6*/
  v31 = 0; /*0x2241af*/
  v32 = 0; /*0x2241b4*/
  sub_1C2580(v3, &unk_709CE8, &v31); /*0x2241c6*/
  v9 = 0; /*0x2241cb*/
  v10 = v31; /*0x2241d2*/
  if ( !((__int64)(*((_QWORD *)&v31 + 1) - v31) >> 5) ) /*0x2241e0*/
    goto LABEL_56; /*0x2241e0*/
  v11 = 0; /*0x2241e6*/
  do /*0x224462*/
  {
    *(_OWORD *)Block = 0; /*0x2241f3*/
    si128.m128i_i64[0] = 0; /*0x2241f8*/
    sub_1C2580(v11 + v10, &word_7222A8, Block); /*0x22420a*/
    v12 = (char *)Block[1]; /*0x22420f*/
    v13 = (char *)Block[0]; /*0x224216*/
    if ( (unsigned __int64)(((char *)Block[1] - (char *)Block[0]) >> 5) < 3 ) /*0x224225*/
    {
      if ( !Block[0] ) /*0x22422a*/
        goto LABEL_51; /*0x22422a*/
      if ( Block[0] != Block[1] ) /*0x224233*/
      {
        do /*0x22424f*/
        {
          sub_3C310(v13); /*0x224243*/
          v13 += 32; /*0x224248*/
        }
        while ( v13 != v12 ); /*0x22424f*/
        goto LABEL_47; /*0x22424f*/
      }
      goto LABEL_48; /*0x224233*/
    }
    if ( *((_QWORD *)Block[0] + 3) > 0xFu ) /*0x22425b*/
      v13 = *(char **)Block[0]; /*0x22425d*/
    v14 = atoi(v13); /*0x224269*/
    v15 = (char *)Block[0] + 32; /*0x22426f*/
    if ( *((_QWORD *)Block[0] + 7) > 0xFu ) /*0x224278*/
      v15 = *(const char **)v15; /*0x22427a*/
    v16 = atoi(v15); /*0x22427d*/
    v17 = (char *)Block[0] + 64; /*0x224287*/
    if ( *((_QWORD *)Block[0] + 11) > 0xFu ) /*0x224290*/
      v17 = (_BYTE *)*((_QWORD *)Block[0] + 8); /*0x224292*/
    v18 = *((_QWORD *)Block[0] + 10) == 1 && *v17 == 49; /*0x2242a4*/
    if ( v16 <= 0 ) /*0x2242a9*/
    {
      if ( v18 ) /*0x224314*/
      {
        v23 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v14); /*0x22431d*/
        CString = cocos2d::CCString::getCString(v23); /*0x224326*/
        memset(v40, 0, sizeof(v40)); /*0x22432f*/
        v25 = -1; /*0x22433b*/
        do /*0x224345*/
          ++v25; /*0x224342*/
        while ( CString[v25] ); /*0x224345*/
        sub_3C230(v40); /*0x224353*/
        v6 |= 2u; /*0x224359*/
        v22 = cocos2d::CCDictionary::objectForKey(a1[129], v40); /*0x22436a*/
      }
      else
      {
        v22 = sub_21D5C0(a1, v14); /*0x224375*/
      }
    }
    else
    {
      v19 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, (unsigned int)v16); /*0x2242b4*/
      v20 = cocos2d::CCString::getCString(v19); /*0x2242bd*/
      v38 = 0; /*0x2242c6*/
      v39 = 0; /*0x2242cd*/
      v21 = -1; /*0x2242d2*/
      do /*0x2242e3*/
        ++v21; /*0x2242e0*/
      while ( v20[v21] ); /*0x2242e3*/
      sub_3C230(&v38); /*0x2242f1*/
      v6 |= 1u; /*0x2242f7*/
      v22 = cocos2d::CCDictionary::objectForKey(a1[118], &v38); /*0x224308*/
    }
    v26 = v22; /*0x22437b*/
    if ( (v6 & 2) != 0 ) /*0x224382*/
    {
      v6 &= ~2u; /*0x224384*/
      sub_3C310(v40); /*0x22438e*/
    }
    if ( (v6 & 1) != 0 ) /*0x224398*/
    {
      v6 &= ~1u; /*0x22439a*/
      if ( *((_QWORD *)&v39 + 1) > 0xFu ) /*0x2243a8*/
      {
        v27 = (void *)v38; /*0x2243ad*/
        if ( (unsigned __int64)(*((_QWORD *)&v39 + 1) + 1LL) >= 0x1000 ) /*0x2243bb*/
        {
          v27 = *(void **)(v38 - 8); /*0x2243c1*/
          if ( (unsigned __int64)(v38 - (_QWORD)v27 - 8) > 0x1F ) /*0x2243d0*/
            invoke_watson(0, 0, 0, 0, 0); /*0x22447e*/
        }
        j_j_free(v27); /*0x2243d6*/
      }
    }
    if ( v26 ) /*0x2243de*/
      *(_BYTE *)(v26 + 1976) = 0; /*0x2243e0*/
    v13 = (char *)Block[0]; /*0x2243e7*/
    if ( Block[0] ) /*0x2243ee*/
    {
      v28 = (char *)Block[1]; /*0x2243f0*/
      if ( Block[0] != Block[1] ) /*0x2243f7*/
      {
        do /*0x22440f*/
        {
          sub_3C310(v13); /*0x224403*/
          v13 += 32; /*0x224408*/
        }
        while ( v13 != v28 ); /*0x22440f*/
LABEL_47:
        v13 = (char *)Block[0]; /*0x224411*/
      }
LABEL_48:
      v29 = v13; /*0x224415*/
      if ( ((si128.m128i_i64[0] - (_QWORD)v13) & 0xFFFFFFFFFFFFFFE0uLL) >= 0x1000 ) /*0x22442a*/
      {
        v13 = (char *)*((_QWORD *)v13 - 1); /*0x22442c*/
        if ( (unsigned __int64)(v29 - v13 - 8) > 0x1F ) /*0x22443f*/
          invoke_watson(0, 0, 0, 0, 0); /*0x224498*/
      }
      j_j_free(v13); /*0x224444*/
    }
LABEL_51:
    ++v9; /*0x224449*/
    v11 += 32; /*0x22444c*/
    v10 = v31; /*0x224454*/
  }
  while ( v9 < (__int64)(*((_QWORD *)&v31 + 1) - v31) >> 5 ); /*0x224462*/
  v3 = v33; /*0x22449f*/
LABEL_56:
  sub_74F50(&v31); /*0x2244a3*/
LABEL_57:
  sub_3C310(a2); /*0x2244ad*/
  return sub_3C310(v3); /*0x2244be*/
}

// [5/30] Address: 0x34f940
// Method: LevelBrowserLayer::onEnterTransitionDidFinish
// attributes: thunk
void __fastcall LevelBrowserLayer_onEnterTransitionDidFinish(cocos2d::CCLayer *this)
{
  cocos2d::CCLayer::onEnterTransitionDidFinish(this); /*0x34f940*/
}

// [6/30] Address: 0x360d00
// Method: LevelBrowserLayer::onNew
void __fastcall LevelBrowserLayer_onNew(__int64 a1)
{
  cocos2d::CCObject *v2; // rcx
  cocos2d::CCObject *v3; // rcx
  cocos2d::CCObject *v4; // rcx
  cocos2d::CCObject *v5; // rcx
  cocos2d::CCObject *v6; // rcx
  void **v7; // rbp
  void **i; // rsi
  char *v9; // rbx
  void **v10; // rbp
  void **j; // rsi
  char *v12; // rbx
  cocos2d::CCObject **v13; // rsi
  cocos2d::CCObject **k; // rbx
  _QWORD *v15; // rsi
  _QWORD *m; // rbx
  cocos2d::CCObject *v17; // rcx
  _QWORD *v18; // rsi
  _QWORD *n; // rbx
  cocos2d::CCObject *v20; // rcx
  _QWORD *v21; // rsi
  _QWORD *ii; // rbx
  cocos2d::CCObject *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rcx
  _QWORD *v30; // rcx
  _QWORD *v31; // rcx
  _QWORD *v32; // rcx
  _QWORD *v33; // rcx
  _QWORD *v34; // rcx
  void *v35; // rcx

  *(_QWORD *)a1 = &GJEffectManager::`vftable'; /*0x360d26*/
  v2 = *(cocos2d::CCObject **)(a1 + 328); /*0x360d29*/
  if ( v2 ) /*0x360d33*/
    cocos2d::CCObject::release(v2); /*0x360d35*/
  v3 = *(cocos2d::CCObject **)(a1 + 336); /*0x360d3b*/
  if ( v3 ) /*0x360d45*/
    cocos2d::CCObject::release(v3); /*0x360d47*/
  v4 = *(cocos2d::CCObject **)(a1 + 1272); /*0x360d4d*/
  if ( v4 ) /*0x360d57*/
    cocos2d::CCObject::release(v4); /*0x360d59*/
  v5 = *(cocos2d::CCObject **)(a1 + 640); /*0x360d5f*/
  if ( v5 ) /*0x360d69*/
    cocos2d::CCObject::release(v5); /*0x360d6b*/
  v6 = *(cocos2d::CCObject **)(a1 + 632); /*0x360d71*/
  if ( v6 ) /*0x360d7b*/
    cocos2d::CCObject::release(v6); /*0x360d7d*/
  v7 = *(void ***)(a1 + 1512); /*0x360d8a*/
  for ( i = *(void ***)(a1 + 1504); i != v7; ++i ) /*0x360d94*/
  {
    v9 = (char *)*i; /*0x360d96*/
    if ( *i ) /*0x360d96*/
    {
      sub_685C0(v9 + 488); /*0x360da5*/
      sub_35E650(v9 + 440); /*0x360db1*/
      j_j_free(v9); /*0x360dbe*/
    }
  }
  if ( *(_QWORD *)(a1 + 1504) != *(_QWORD *)(a1 + 1512) ) /*0x360dd3*/
    *(_QWORD *)(a1 + 1512) = *(_QWORD *)(a1 + 1504); /*0x360dd5*/
  v10 = *(void ***)(a1 + 1488); /*0x360de0*/
  for ( j = *(void ***)(a1 + 1480); j != v10; ++j ) /*0x360dea*/
  {
    v12 = (char *)*j; /*0x360df0*/
    if ( *j ) /*0x360df0*/
    {
      sub_685C0(v12 + 488); /*0x360dff*/
      sub_35E650(v12 + 440); /*0x360e0b*/
      j_j_free(v12); /*0x360e18*/
    }
  }
  if ( *(_QWORD *)(a1 + 1480) != *(_QWORD *)(a1 + 1488) ) /*0x360e2d*/
    *(_QWORD *)(a1 + 1488) = *(_QWORD *)(a1 + 1480); /*0x360e2f*/
  v13 = *(cocos2d::CCObject ***)(a1 + 1536); /*0x360e33*/
  for ( k = *(cocos2d::CCObject ***)(a1 + 1528); k != v13; ++k ) /*0x360e44*/
  {
    if ( *k ) /*0x360e46*/
      cocos2d::CCObject::release(*k); /*0x360e4e*/
  }
  v15 = *(_QWORD **)(a1 + 1760); /*0x360e69*/
  for ( m = (_QWORD *)*v15; m != v15; m = (_QWORD *)*m ) /*0x360e72*/
  {
    v17 = (cocos2d::CCObject *)m[3]; /*0x360e74*/
    if ( v17 ) /*0x360e7b*/
      cocos2d::CCObject::release(v17); /*0x360e7d*/
  }
  v18 = *(_QWORD **)(a1 + 1824); /*0x360e8b*/
  for ( n = (_QWORD *)*v18; n != v18; n = (_QWORD *)*n ) /*0x360e98*/
  {
    v20 = (cocos2d::CCObject *)n[3]; /*0x360ea0*/
    if ( v20 ) /*0x360ea7*/
      cocos2d::CCObject::release(v20); /*0x360ea9*/
  }
  v21 = *(_QWORD **)(a1 + 1888); /*0x360eb7*/
  for ( ii = (_QWORD *)*v21; ii != v21; ii = (_QWORD *)*ii ) /*0x360ec4*/
  {
    v23 = (cocos2d::CCObject *)ii[3]; /*0x360ec6*/
    if ( v23 ) /*0x360ecd*/
      cocos2d::CCObject::release(v23); /*0x360ecf*/
  }
  sub_654A0(a1 + 1752); /*0x360ee4*/
  sub_654A0(a1 + 1816); /*0x360ef0*/
  sub_654A0(a1 + 1880); /*0x360efc*/
  v24 = *(_QWORD *)(a1 + 1944); /*0x360f01*/
  if ( v24 != *(_QWORD *)(a1 + 1952) ) /*0x360f0f*/
    *(_QWORD *)(a1 + 1952) = v24; /*0x360f11*/
  v25 = *(_QWORD *)(a1 + 1968); /*0x360f18*/
  if ( v25 != *(_QWORD *)(a1 + 1976) ) /*0x360f26*/
    *(_QWORD *)(a1 + 1976) = v25; /*0x360f28*/
  v26 = *(_QWORD *)(a1 + 1992); /*0x360f2f*/
  if ( v26 != *(_QWORD *)(a1 + 2000) ) /*0x360f3d*/
    *(_QWORD *)(a1 + 2000) = v26; /*0x360f3f*/
  v27 = *(_QWORD *)(a1 + 1640); /*0x360f46*/
  if ( v27 != *(_QWORD *)(a1 + 1648) ) /*0x360f54*/
    *(_QWORD *)(a1 + 1648) = v27; /*0x360f56*/
  v28 = *(_QWORD *)(a1 + 1528); /*0x360f5d*/
  if ( v28 != *(_QWORD *)(a1 + 1536) ) /*0x360f6b*/
    *(_QWORD *)(a1 + 1536) = v28; /*0x360f6d*/
  sub_284F60(a1 + 2040, a1 + 2040, *(_QWORD *)(*(_QWORD *)(a1 + 2040) + 8LL)); /*0x360f8d*/
  j_j_free(*(void **)(a1 + 2040)); /*0x360f9e*/
  sub_58B70(a1 + 2016); /*0x360faa*/
  v29 = *(_QWORD **)(a1 + 1992); /*0x360faf*/
  if ( v29 ) /*0x360fbb*/
  {
    if ( ((*(_QWORD *)(a1 + 2008) - (_QWORD)v29) & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 ) /*0x360fd2*/
    {
      if ( (unsigned __int64)v29 - *(v29 - 1) - 8 > 0x1F ) /*0x360fe7*/
        goto LABEL_85; /*0x360fe7*/
      v29 = (_QWORD *)*(v29 - 1); /*0x360fed*/
    }
    j_j_free(v29); /*0x360ff0*/
    *(_QWORD *)(a1 + 1992) = 0; /*0x360ff5*/
    *(_QWORD *)(a1 + 2000) = 0; /*0x360ffc*/
    *(_QWORD *)(a1 + 2008) = 0; /*0x361003*/
  }
  v30 = *(_QWORD **)(a1 + 1968); /*0x36100a*/
  if ( v30 ) /*0x361014*/
  {
    if ( ((*(_QWORD *)(a1 + 1984) - (_QWORD)v30) & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 ) /*0x36102b*/
    {
      if ( (unsigned __int64)v30 - *(v30 - 1) - 8 > 0x1F ) /*0x361040*/
        goto LABEL_85; /*0x361040*/
      v30 = (_QWORD *)*(v30 - 1); /*0x361046*/
    }
    j_j_free(v30); /*0x361049*/
    *(_QWORD *)(a1 + 1968) = 0; /*0x36104e*/
    *(_QWORD *)(a1 + 1976) = 0; /*0x361055*/
    *(_QWORD *)(a1 + 1984) = 0; /*0x36105c*/
  }
  v31 = *(_QWORD **)(a1 + 1944); /*0x361063*/
  if ( v31 ) /*0x36106d*/
  {
    if ( ((*(_QWORD *)(a1 + 1960) - (_QWORD)v31) & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 ) /*0x361084*/
    {
      if ( (unsigned __int64)v31 - *(v31 - 1) - 8 > 0x1F ) /*0x361099*/
        goto LABEL_85; /*0x361099*/
      v31 = (_QWORD *)*(v31 - 1); /*0x36109f*/
    }
    j_j_free(v31); /*0x3610a2*/
    *(_QWORD *)(a1 + 1944) = 0; /*0x3610a7*/
    *(_QWORD *)(a1 + 1952) = 0; /*0x3610ae*/
    *(_QWORD *)(a1 + 1960) = 0; /*0x3610b5*/
  }
  sub_3DA90((void *)(a1 + 1904)); /*0x3610c3*/
  sub_65440(a1 + 1888); /*0x3610cf*/
  sub_3DA90((void *)(a1 + 1840)); /*0x3610db*/
  sub_65440(a1 + 1824); /*0x3610e7*/
  sub_3DA90((void *)(a1 + 1776)); /*0x3610f3*/
  sub_65440(a1 + 1760); /*0x3610fd*/
  sub_3DA90((void *)(a1 + 1728)); /*0x361109*/
  sub_3DA90((void *)(a1 + 1688)); /*0x361115*/
  sub_350870(a1 + 1672); /*0x361121*/
  sub_3DA90((void *)(a1 + 1640)); /*0x36112d*/
  sub_3DA90((void *)(a1 + 1600)); /*0x361139*/
  sub_36C0A0(a1 + 1584); /*0x361145*/
  sub_36F1C0(a1 + 1552); /*0x361151*/
  v32 = *(_QWORD **)(a1 + 1528); /*0x361156*/
  if ( v32 ) /*0x361160*/
  {
    if ( ((*(_QWORD *)(a1 + 1544) - (_QWORD)v32) & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 ) /*0x361177*/
    {
      if ( (unsigned __int64)v32 - *(v32 - 1) - 8 > 0x1F ) /*0x36118c*/
        goto LABEL_85; /*0x36118c*/
      v32 = (_QWORD *)*(v32 - 1); /*0x361192*/
    }
    j_j_free(v32); /*0x361195*/
    *(_QWORD *)(a1 + 1528) = 0; /*0x36119a*/
    *(_QWORD *)(a1 + 1536) = 0; /*0x3611a1*/
    *(_QWORD *)(a1 + 1544) = 0; /*0x3611a8*/
  }
  sub_3DA90((void *)(a1 + 1504)); /*0x3611b2*/
  sub_3DA90((void *)(a1 + 1480)); /*0x3611ba*/
  sub_36F480(a1 + 1456); /*0x3611c6*/
  sub_3DA90((void *)(a1 + 1416)); /*0x3611d2*/
  sub_3DB00(a1 + 1400); /*0x3611de*/
  sub_7F2E0(a1 + 1376); /*0x3611ea*/
  sub_3DA90((void *)(a1 + 1336)); /*0x3611f6*/
  sub_3DB00(a1 + 1320); /*0x361202*/
  sub_685C0(a1 + 1280); /*0x36120e*/
  sub_3DA90((void *)(a1 + 1232)); /*0x36121a*/
  sub_36BD20(a1 + 1216); /*0x361226*/
  sub_3DA90((void *)(a1 + 1168)); /*0x361232*/
  sub_36BEE0(a1 + 1152); /*0x36123e*/
  sub_3DA90((void *)(a1 + 1104)); /*0x36124a*/
  sub_3DB00(a1 + 1088); /*0x361256*/
  sub_3DA90((void *)(a1 + 1040)); /*0x361262*/
  sub_3DB00(a1 + 1024); /*0x36126e*/
  sub_3DA90((void *)(a1 + 968)); /*0x36127a*/
  sub_3DB00(a1 + 952); /*0x361286*/
  sub_3DA90((void *)(a1 + 904)); /*0x361292*/
  sub_3DB00(a1 + 888); /*0x36129e*/
  sub_3DA90((void *)(a1 + 840)); /*0x3612aa*/
  sub_3DB00(a1 + 824); /*0x3612b6*/
  sub_685C0(a1 + 784); /*0x3612c2*/
  v33 = *(_QWORD **)(a1 + 760); /*0x3612c7*/
  if ( v33 ) /*0x3612d1*/
  {
    if ( ((*(_QWORD *)(a1 + 776) - (_QWORD)v33) & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 ) /*0x3612e8*/
    {
      if ( (unsigned __int64)v33 - *(v33 - 1) - 8 > 0x1F ) /*0x3612fd*/
        goto LABEL_85; /*0x3612fd*/
      v33 = (_QWORD *)*(v33 - 1); /*0x361303*/
    }
    j_j_free(v33); /*0x361306*/
    *(_QWORD *)(a1 + 760) = 0; /*0x36130b*/
    *(_QWORD *)(a1 + 768) = 0; /*0x361312*/
    *(_QWORD *)(a1 + 776) = 0; /*0x361319*/
  }
  v34 = *(_QWORD **)(a1 + 736); /*0x361320*/
  if ( v34 ) /*0x36132a*/
  {
    if ( ((*(_QWORD *)(a1 + 752) - (_QWORD)v34) & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 ) /*0x361341*/
    {
      if ( (unsigned __int64)v34 - *(v34 - 1) - 8 > 0x1F ) /*0x361356*/
        goto LABEL_85; /*0x361356*/
      v34 = (_QWORD *)*(v34 - 1); /*0x36135c*/
    }
    j_j_free(v34); /*0x36135f*/
    *(_QWORD *)(a1 + 736) = 0; /*0x361364*/
    *(_QWORD *)(a1 + 744) = 0; /*0x36136b*/
    *(_QWORD *)(a1 + 752) = 0; /*0x361372*/
  }
  sub_3DA90((void *)(a1 + 696)); /*0x361380*/
  sub_3DB00(a1 + 680); /*0x36138c*/
  v35 = *(void **)(a1 + 648); /*0x361391*/
  if ( v35 ) /*0x36139b*/
  {
    if ( ((*(_QWORD *)(a1 + 664) - (_QWORD)v35) & 0xFFFFFFFFFFFFFFF8uLL) < 0x1000 ) /*0x3613b2*/
    {
LABEL_83:
      j_j_free(v35); /*0x3613d0*/
      *(_QWORD *)(a1 + 648) = 0; /*0x3613d5*/
      *(_QWORD *)(a1 + 656) = 0; /*0x3613dc*/
      *(_QWORD *)(a1 + 664) = 0; /*0x3613e3*/
      goto LABEL_84; /*0x3613e3*/
    }
    if ( (unsigned __int64)v35 - *((_QWORD *)v35 - 1) - 8 <= 0x1F ) /*0x3613c7*/
    {
      v35 = (void *)*((_QWORD *)v35 - 1); /*0x3613cd*/
      goto LABEL_83; /*0x3613cd*/
    }
LABEL_85:
    invoke_watson(0, 0, 0, 0, 0); /*0x361488*/
  }
LABEL_84:
  sub_36F550(a1 + 608); /*0x3613ea*/
  sub_36F620(a1 + 584); /*0x3613fd*/
  sub_3DA90((void *)(a1 + 544)); /*0x361409*/
  sub_36C380(a1 + 528); /*0x361415*/
  sub_36F620(a1 + 496); /*0x361421*/
  sub_3DA90((void *)(a1 + 456)); /*0x36142d*/
  sub_3515C0(a1 + 440); /*0x361439*/
  sub_3DA90((void *)(a1 + 392)); /*0x361445*/
  sub_36C540(a1 + 376); /*0x361451*/
  sub_36FF20(a1 + 344); /*0x36145d*/
  cocos2d::CCNode::~CCNode((cocos2d::CCNode *)a1); /*0x361481*/
}

// [7/30] Address: 0x3de210
// Method: LevelBrowserLayer::updateResultArray
__int64 __fastcall LevelBrowserLayer_updateResultArray(__int64 a1, __int64 a2)
{
  return a2; /*0x3de213*/
}

// [8/30] Address: 0x3de260
// Method: LevelBrowserLayer::~LevelBrowserLayer
void __fastcall LevelBrowserLayer__dtor_LevelBrowserLayer(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  cocos2d::CCTouchDispatcher *v4; // rax
  cocos2d::CCNotificationCenter *v5; // rax
  cocos2d::CCNotificationCenter *v6; // rax
  cocos2d::CCObject *v7; // rcx
  cocos2d::CCObject *v8; // rcx
  cocos2d::CCObject *v9; // rcx
  cocos2d::CCObject *v10; // rcx
  __int64 v11; // rax
  void *v12; // rax
  __int64 v13; // rax
  void *v14; // rax

  *(_QWORD *)a1 = &LevelBrowserLayer::`vftable'; /*0x3de274*/
  *(_QWORD *)(a1 + 320) = &LevelBrowserLayer::`vftable'; /*0x3de27e*/
  *(_QWORD *)(a1 + 328) = &LevelBrowserLayer::`vftable'; /*0x3de28c*/
  *(_QWORD *)(a1 + 336) = &LevelBrowserLayer::`vftable'; /*0x3de29a*/
  *(_QWORD *)(a1 + 344) = &LevelBrowserLayer::`vftable'; /*0x3de2a8*/
  *(_QWORD *)(a1 + 352) = &LevelBrowserLayer::`vftable'; /*0x3de2b6*/
  *(_QWORD *)(a1 + 408) = &LevelBrowserLayer::`vftable'; /*0x3de2c4*/
  *(_QWORD *)(a1 + 432) = &LevelBrowserLayer::`vftable'; /*0x3de2d2*/
  v2 = a1 + 544; /*0x3de2d9*/
  *(_QWORD *)(a1 + 544) = &LevelBrowserLayer::`vftable'; /*0x3de2e7*/
  *(_QWORD *)(a1 + 552) = &LevelBrowserLayer::`vftable'; /*0x3de2f1*/
  *(_QWORD *)(a1 + 560) = &LevelBrowserLayer::`vftable'; /*0x3de2ff*/
  *(_QWORD *)(a1 + 568) = &LevelBrowserLayer::`vftable'; /*0x3de30d*/
  *(_QWORD *)(a1 + 576) = &LevelBrowserLayer::`vftable'; /*0x3de31b*/
  *(_QWORD *)(a1 + 584) = &LevelBrowserLayer::`vftable'; /*0x3de329*/
  if ( *(_BYTE *)(a1 + 748) ) /*0x3de330*/
  {
    v3 = cocos2d::CCDirector::sharedDirector(a1); /*0x3de339*/
    v4 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 144LL))(v3); /*0x3de34c*/
    cocos2d::CCTouchDispatcher::unregisterForcePrio(v4, (struct cocos2d::CCObject *)a1); /*0x3de354*/
  }
  v5 = (cocos2d::CCNotificationCenter *)cocos2d::CCNotificationCenter::sharedNotificationCenter(); /*0x3de35a*/
  cocos2d::CCNotificationCenter::removeObserver(v5, (struct cocos2d::CCObject *)a1, "LevelSelectionChangedNotification"); /*0x3de36d*/
  v6 = (cocos2d::CCNotificationCenter *)cocos2d::CCNotificationCenter::sharedNotificationCenter(); /*0x3de373*/
  cocos2d::CCNotificationCenter::removeObserver(v6, (struct cocos2d::CCObject *)a1, "LevelsImportedNotification"); /*0x3de386*/
  v7 = *(cocos2d::CCObject **)(a1 + 656); /*0x3de38c*/
  if ( v7 ) /*0x3de396*/
    cocos2d::CCObject::release(v7); /*0x3de398*/
  v8 = *(cocos2d::CCObject **)(a1 + 736); /*0x3de39e*/
  if ( v8 ) /*0x3de3a8*/
    cocos2d::CCObject::release(v8); /*0x3de3aa*/
  v9 = *(cocos2d::CCObject **)(a1 + 664); /*0x3de3b0*/
  if ( v9 ) /*0x3de3ba*/
    cocos2d::CCObject::release(v9); /*0x3de3bc*/
  v10 = *(cocos2d::CCObject **)(a1 + 832); /*0x3de3c2*/
  if ( v10 ) /*0x3de3cc*/
    cocos2d::CCObject::release(v10); /*0x3de3ce*/
  if ( !*(_BYTE *)(a1 + 748) ) /*0x3de3d4*/
  {
    v11 = qword_905FD0; /*0x3de3dd*/
    if ( !qword_905FD0 ) /*0x3de3e7*/
    {
      v12 = operator new(0x6E8u); /*0x3de3ee*/
      qword_905FD0 = sub_2723A0(v12); /*0x3de3fb*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3de40c*/
      v11 = qword_905FD0; /*0x3de40e*/
    }
    *(_DWORD *)(v11 + 740) = 7; /*0x3de415*/
  }
  v13 = *(_QWORD *)&qword_905FB0; /*0x3de41f*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x3de429*/
  {
    v14 = operator new(0x690u); /*0x3de430*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v14); /*0x3de43d*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x3de44e*/
    v13 = *(_QWORD *)&qword_905FB0; /*0x3de450*/
  }
  if ( *(_QWORD *)(v13 + 1352) == v2 ) /*0x3de45e*/
    *(_QWORD *)(v13 + 1352) = 0; /*0x3de460*/
  cocos2d::CCLayerColor::~CCLayerColor((cocos2d::CCLayerColor *)a1); /*0x3de478*/
}

// [9/30] Address: 0x3de480
// Method: LevelBrowserLayer::scene
__int64 __fastcall LevelBrowserLayer_scene(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax

  v2 = cocos2d::CCScene::create(); /*0x3de493*/
  *(_QWORD *)(cocos2d::CCApplication::sharedApplication() + 232) = v2; /*0x3de49f*/
  v3 = sub_3DE4D0(a1); /*0x3de4a6*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 464LL))(v2, v3); /*0x3de4bb*/
  return v2; /*0x3de4be*/
}

// [11/30] Address: 0x3e2550
// Method: LevelBrowserLayer::loadLevelsFinished
__int64 __fastcall LevelBrowserLayer_loadLevelsFinished(__int64 a1, cocos2d::CCObject *a2, __int64 a3)
{
  __int64 result; // rax
  cocos2d::CCObject *v6; // rcx
  __int64 v7; // rcx
  char v8; // dl
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // rax
  unsigned int *v13; // rcx
  __int64 v14; // rax
  __int64 *v15; // rcx
  __int64 *i; // r8
  __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // r11
  __int64 v20; // rdx
  __int64 v21; // rcx

  result = sub_3E05D0(a1 - 544, a3); /*0x3e256f*/
  if ( (_BYTE)result ) /*0x3e2576*/
  {
    v6 = *(cocos2d::CCObject **)(a1 + 112); /*0x3e257c*/
    if ( v6 ) /*0x3e2583*/
      cocos2d::CCObject::release(v6); /*0x3e2585*/
    *(_QWORD *)(a1 + 112) = a2; /*0x3e258e*/
    cocos2d::CCObject::retain(a2); /*0x3e2592*/
    if ( *(_QWORD *)(a1 + 120) && (unsigned __int8)GJSearchObject_isLevelSearchObject() ) /*0x3e25a1*/
    {
      v8 = 0; /*0x3e25aa*/
      if ( *(_QWORD *)(a1 + 168) ) /*0x3e25ac*/
      {
        v9 = *(_DWORD *)(v7 + 320) - 98; /*0x3e25bc*/
        if ( !v9 || (v10 = v9 - 1) == 0 || (v11 = v10 - 1) == 0 || (unsigned int)(v11 - 2) <= 1 ) /*0x3e25ce*/
          v8 = 1; /*0x3e25d5*/
      }
      v12 = *(_QWORD *)(a1 + 112); /*0x3e25d7*/
      if ( v12 ) /*0x3e25de*/
      {
        v13 = *(unsigned int **)(v12 + 56); /*0x3e25e0*/
        v14 = *v13; /*0x3e25e4*/
        if ( (_DWORD)v14 ) /*0x3e25e8*/
        {
          v15 = (__int64 *)*((_QWORD *)v13 + 2); /*0x3e25ea*/
          for ( i = &v15[v14 - 1]; v15 <= i; *(_BYTE *)(v17 + 844) = v8 ) /*0x3e25f9*/
          {
            v17 = *v15; /*0x3e2600*/
            if ( !*v15 ) /*0x3e2600*/
              break; /*0x3e2606*/
            ++v15; /*0x3e2608*/
            *(_BYTE *)(v17 + 843) = 0; /*0x3e260c*/
          }
        }
      }
    }
    if ( *(_QWORD *)(a1 + 168) ) /*0x3e261e*/
    {
      v18 = sub_3E6780(a1 - 544); /*0x3e2631*/
      sub_3A56E0(v19, v18); /*0x3e263b*/
    }
    sub_3E1980(a1 - 544, *(_QWORD *)(a1 + 112)); /*0x3e264b*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 192) + 336LL))(*(_QWORD *)(a1 + 192), 0); /*0x3e265c*/
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 56) + 336LL))(*(_QWORD *)(a1 + 56), 0); /*0x3e266b*/
    v21 = *(_QWORD *)(a1 + 104); /*0x3e2671*/
    if ( v21 ) /*0x3e2678*/
    {
      LOBYTE(v20) = 1; /*0x3e267d*/
      return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 336LL))(v21, v20); /*0x3e267f*/
    }
  }
  return result; /*0x3e2685*/
}

// [12/30] Address: 0x3e26f0
// Method: LevelBrowserLayer::setupPageInfo
// Hidden C++ exception states: #wind=2
double __fastcall LevelBrowserLayer_setupPageInfo(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rsi
  _QWORD *v6; // rdx
  __int64 v7; // r8
  cocos2d::CCArray *v8; // rbp
  void *v9; // r8
  cocos2d::CCString *v10; // rax
  cocos2d::CCString *v11; // rax
  cocos2d::CCString *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  int v15; // r9d
  int v16; // edx
  int v17; // r8d
  cocos2d::CCString *v18; // rax
  const char *CString; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  void *Block[2]; // [rsp+38h] [rbp-40h] BYREF
  __m128i si128; // [rsp+48h] [rbp-30h]

  v5 = a1 - 544; /*0x3e2716*/
  if ( !*(_BYTE *)(a1 - 544 + 764) && (unsigned __int8)sub_3E05D0(a1 - 544, a3) ) /*0x3e2730*/
  {
    v6 = a2; /*0x3e273d*/
    if ( a2[3] > 0xFu ) /*0x3e2745*/
      v6 = (_QWORD *)*a2; /*0x3e2747*/
    *(_OWORD *)Block = 0; /*0x3e274d*/
    si128 = 0; /*0x3e2755*/
    v7 = -1; /*0x3e275b*/
    do /*0x3e2765*/
      ++v7; /*0x3e2762*/
    while ( *((_BYTE *)v6 + v7) ); /*0x3e2765*/
    sub_3C230(Block); /*0x3e2771*/
    v8 = (cocos2d::CCArray *)sub_20BF00(Block); /*0x3e2781*/
    if ( si128.m128i_i64[1] > 0xFuLL ) /*0x3e278d*/
    {
      v9 = Block[0]; /*0x3e2792*/
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x3e27a1*/
      {
        v9 = (void *)*((_QWORD *)Block[0] - 1); /*0x3e27a7*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v9 - 8) > 0x1F ) /*0x3e27b6*/
          invoke_watson(0, 0, 0, 0, 0); /*0x3e27cb*/
      }
      j_j_free(v9); /*0x3e27d5*/
    }
    si128 = _mm_load_si128((const __m128i *)&Size); /*0x3e27e2*/
    LOBYTE(Block[0]) = 0; /*0x3e27e8*/
    if ( cocos2d::CCArray::count(v8) >= 3 ) /*0x3e27f9*/
    {
      v10 = cocos2d::CCArray::objectAtIndex(v8, 0); /*0x3e2804*/
      *(_DWORD *)(a1 + 176) = cocos2d::CCString::intValue(v10); /*0x3e2813*/
      v11 = cocos2d::CCArray::objectAtIndex(v8, 1u); /*0x3e2821*/
      *(_DWORD *)(a1 + 180) = cocos2d::CCString::intValue(v11); /*0x3e2830*/
      v12 = cocos2d::CCArray::objectAtIndex(v8, 2u); /*0x3e283e*/
      *(_DWORD *)(a1 + 184) = cocos2d::CCString::intValue(v12); /*0x3e284d*/
      if ( *(_DWORD *)(a1 + 180) ) /*0x3e285a*/
        LOBYTE(v13) = 1; /*0x3e2867*/
      else
        v13 = 0; /*0x3e2863*/
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 80) + 336LL))(*(_QWORD *)(a1 + 80), v13); /*0x3e2869*/
      if ( *(_DWORD *)(a1 + 184) + *(_DWORD *)(a1 + 180) < *(_DWORD *)(a1 + 176) ) /*0x3e2888*/
        LOBYTE(v14) = 1; /*0x3e288e*/
      else
        v14 = 0; /*0x3e288a*/
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 72) + 336LL))(*(_QWORD *)(a1 + 72), v14); /*0x3e2890*/
      v15 = *(_DWORD *)(v5 + 720); /*0x3e2897*/
      v16 = *(_DWORD *)(v5 + 724); /*0x3e289e*/
      v17 = v16 + *(_DWORD *)(v5 + 728); /*0x3e28ab*/
      if ( v17 >= v15 ) /*0x3e28b1*/
        v17 = *(_DWORD *)(v5 + 720); /*0x3e28b1*/
      v18 = cocos2d::CCString::createWithFormat("%i to %i of %i", v16 + 1, v17, v15); /*0x3e28be*/
      CString = cocos2d::CCString::getCString(v18); /*0x3e28c7*/
      (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(v5 + 672) + 360LL))( /*0x3e28e4*/
        *(_QWORD *)(v5 + 672) + 360LL,
        CString);
      cocos2d::CCLabelBMFont::limitLabelWidth(*(cocos2d::CCLabelBMFont **)(v5 + 672), 100.0, 0.60000002, 0.0); /*0x3e2901*/
      sub_3E2F60(v5); /*0x3e290a*/
      v20 = *(_QWORD *)(a1 + 120); /*0x3e290f*/
      if ( v20 ) /*0x3e2916*/
        *(_DWORD *)(v20 + 432) = *(_DWORD *)(a1 + 176); /*0x3e291e*/
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 72) + 344LL))(*(_QWORD *)(a1 + 72)) /*0x3e293c*/
        || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 344LL))(*(_QWORD *)(a1 + 80)) )
      {
        LOBYTE(v21) = 1; /*0x3e294a*/
      }
      else
      {
        v21 = 0; /*0x3e2946*/
      }
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 144) + 336LL))(*(_QWORD *)(a1 + 144), v21); /*0x3e2956*/
    }
  }
  return sub_3C310(a2); /*0x3e2965*/
}

// [13/30] Address: 0x3e2a10
// Method: LevelBrowserLayer::onGoToPage
// Hidden C++ exception states: #wind=1
void __fastcall LevelBrowserLayer_onGoToPage(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  _QWORD v5[4]; // [rsp+50h] [rbp-48h] BYREF
  __int128 v6; // [rsp+70h] [rbp-28h] BYREF
  __int64 v7; // [rsp+80h] [rbp-18h]
  __int64 v8; // [rsp+88h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 664); /*0x3e2a22*/
  if ( v2 ) /*0x3e2a2c*/
  {
    v6 = 0; /*0x3e2a3d*/
    v7 = 2; /*0x3e2a42*/
    v8 = 15; /*0x3e2a4a*/
    strcpy((char *)&v6, "Go"); /*0x3e2a57*/
    v5[1] = 25959; /*0x3e2a61*/
    v5[2] = 10; /*0x3e2a66*/
    v5[3] = 15; /*0x3e2a6e*/
    v5[0] = 0x6150206F74206F47LL; /*0x3e2a7e*/
    v3 = (_QWORD *)SetIDPopup_create( /*0x3e2ad9*/
                     *(_DWORD *)(v2 + 424) + 1,
                     1,
                     1000,
                     (unsigned int)v5,
                     (__int64)&v6,
                     1,
                     1,
                     1114636288,
                     0);
    (*(void (__fastcall **)(_QWORD *, __int64))(*v3 + 64LL))(v3, 3); /*0x3e2aeb*/
    v4 = a1 + 560; /*0x3e2aee*/
    if ( !a1 ) /*0x3e2afa*/
      v4 = 0; /*0x3e2afa*/
    v3[87] = v4; /*0x3e2afe*/
    (*(void (__fastcall **)(_QWORD *))(*v3 + 1064LL))(v3); /*0x3e2b12*/
  }
}

// [14/30] Address: 0x3e2bf0
// Method: LevelBrowserLayer::setIDPopupClosed
// Hidden C++ exception states: #wind=7
void __fastcall LevelBrowserLayer_setIDPopupClosed(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rbx
  struct cocos2d::CCString *v9; // rax
  void *v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rbx
  struct cocos2d::CCString *v13; // rax
  int v14; // edi
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 PageObject; // rax
  void *v19; // [rsp+30h] [rbp-30h]
  void *v20; // [rsp+30h] [rbp-30h]
  void *v21; // [rsp+30h] [rbp-30h]
  void *v22; // [rsp+30h] [rbp-30h]
  void *Block[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v24; // [rsp+48h] [rbp-18h]
  unsigned __int64 v25; // [rsp+50h] [rbp-10h]

  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 4 ) /*0x3e2c1f*/
  {
    if ( a3 >= 0 ) /*0x3e2c29*/
    {
      if ( a3 > 999 ) /*0x3e2c36*/
        a3 = 999; /*0x3e2c36*/
    }
    else
    {
      a3 = 0; /*0x3e2c2b*/
    }
    if ( *(_QWORD *)(a1 + 104) ) /*0x3e2c39*/
    {
      v5 = qword_905FD0; /*0x3e2c43*/
      if ( !qword_905FD0 ) /*0x3e2c4d*/
      {
        v19 = operator new(0x6E8u); /*0x3e2c59*/
        qword_905FD0 = sub_2723A0(v19); /*0x3e2c66*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3e2c77*/
        v5 = qword_905FD0; /*0x3e2c79*/
      }
      *(_QWORD *)(v5 + 996) = 0; /*0x3e2c80*/
      *(_DWORD *)(*(_QWORD *)(a1 + 104) + 452LL) = a3; /*0x3e2c8b*/
      *(_DWORD *)(*(_QWORD *)(a1 + 104) + 424LL) = 0; /*0x3e2c95*/
      LevelBrowserLayer_loadPage(a1 - 560, *(_QWORD *)(a1 + 104)); /*0x3e2ca6*/
      v6 = *(_QWORD *)(a1 + 104); /*0x3e2cab*/
      if ( v6 && *(_DWORD *)(v6 + 320) == 99 ) /*0x3e2cbf*/
      {
        v7 = qword_905FD0; /*0x3e2cc5*/
        if ( !qword_905FD0 ) /*0x3e2ccf*/
        {
          v20 = operator new(0x6E8u); /*0x3e2cdb*/
          qword_905FD0 = sub_2723A0(v20); /*0x3e2ce8*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3e2cf9*/
          v7 = qword_905FD0; /*0x3e2cfb*/
        }
        *(_OWORD *)Block = 0; /*0x3e2d05*/
        v24 = 3; /*0x3e2d09*/
        v25 = 15; /*0x3e2d11*/
        LODWORD(Block[0]) = 6256231; /*0x3e2d1f*/
        sub_43D80(Block, "0092", 4u); /*0x3e2d42*/
        v8 = *(_QWORD *)(v7 + 432); /*0x3e2d47*/
        v9 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, (unsigned int)a3); /*0x3e2d57*/
        cocos2d::CCDictionary::setObject(v8, v9, Block); /*0x3e2d67*/
        if ( v25 > 0xF ) /*0x3e2d76*/
        {
          v10 = Block[0]; /*0x3e2d7f*/
          if ( v25 + 1 >= 0x1000 ) /*0x3e2d8d*/
          {
            v10 = (void *)*((_QWORD *)Block[0] - 1); /*0x3e2d97*/
            if ( (unsigned __int64)((char *)Block[0] - (char *)v10 - 8) > 0x1F ) /*0x3e2da6*/
              invoke_watson(0, 0, 0, 0, 0); /*0x3e2dbb*/
          }
LABEL_23:
          j_j_free(v10); /*0x3e2eb7*/
        }
      }
      else
      {
        v11 = qword_905FD0; /*0x3e2dc2*/
        if ( !qword_905FD0 ) /*0x3e2dcc*/
        {
          v21 = operator new(0x6E8u); /*0x3e2dd8*/
          qword_905FD0 = sub_2723A0(v21); /*0x3e2de5*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3e2df6*/
          v11 = qword_905FD0; /*0x3e2df8*/
        }
        *(_OWORD *)Block = 0; /*0x3e2e02*/
        v24 = 3; /*0x3e2e06*/
        v25 = 15; /*0x3e2e0e*/
        LODWORD(Block[0]) = 6256231; /*0x3e2e1c*/
        sub_43D80(Block, "0091", 4u); /*0x3e2e3f*/
        v12 = *(_QWORD *)(v11 + 432); /*0x3e2e44*/
        v13 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, (unsigned int)a3); /*0x3e2e54*/
        cocos2d::CCDictionary::setObject(v12, v13, Block); /*0x3e2e64*/
        if ( v25 > 0xF ) /*0x3e2e73*/
        {
          v10 = Block[0]; /*0x3e2e7c*/
          if ( v25 + 1 >= 0x1000 ) /*0x3e2e8a*/
          {
            v10 = (void *)*((_QWORD *)Block[0] - 1); /*0x3e2e90*/
            if ( (unsigned __int64)((char *)Block[0] - (char *)v10 - 8) > 0x1F ) /*0x3e2e9f*/
              invoke_watson(0, 0, 0, 0, 0); /*0x3e2eb0*/
          }
          goto LABEL_23; /*0x3e2e9f*/
        }
      }
    }
  }
  else
  {
    v14 = a3 - 1; /*0x3e2ec1*/
    v15 = *(_DWORD *)(a1 + 184); /*0x3e2ec3*/
    if ( v15 > 0 && v15 < v14 ) /*0x3e2ecf*/
      v14 = *(_DWORD *)(a1 + 184); /*0x3e2ecf*/
    v16 = *(_QWORD *)(a1 + 104); /*0x3e2ed2*/
    if ( v16 && *(_DWORD *)(v16 + 424) != v14 ) /*0x3e2ee1*/
    {
      v17 = qword_905FD0; /*0x3e2ee3*/
      if ( !qword_905FD0 ) /*0x3e2eed*/
      {
        v22 = operator new(0x6E8u); /*0x3e2ef9*/
        qword_905FD0 = sub_2723A0(v22); /*0x3e2f06*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3e2f17*/
        v17 = qword_905FD0; /*0x3e2f19*/
      }
      *(_QWORD *)(v17 + 996) = 0; /*0x3e2f22*/
      PageObject = GJSearchObject_getPageObject(*(_QWORD *)(a1 + 104), (unsigned int)v14); /*0x3e2f2f*/
      LevelBrowserLayer_loadPage(a1 - 560, PageObject); /*0x3e2f3e*/
    }
  }
}

// [15/30] Address: 0x3e3190
// Method: LevelBrowserLayer::onBack
// Hidden C++ exception states: #wind=1
char __fastcall LevelBrowserLayer_onBack(struct cocos2d::CCObject *a1)
{
  __int64 v2; // rax
  cocos2d::CCTouchDispatcher *v3; // rax
  __int64 v4; // rdx
  void *v6; // [rsp+30h] [rbp+8h]

  if ( *((_BYTE *)a1 + 748) ) /*0x3e3199*/
  {
    v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x3e31a2*/
    v3 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2); /*0x3e31ae*/
    cocos2d::CCTouchDispatcher::unregisterForcePrio(v3, a1); /*0x3e31ba*/
    LOBYTE(v4) = 1; /*0x3e31c3*/
    return (*(__int64 (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)a1 + 520LL))(a1, v4); /*0x3e31cd*/
  }
  else
  {
    (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x3e31d9*/
    if ( !qword_905FD0 ) /*0x3e31e7*/
    {
      v6 = operator new(0x6E8u); /*0x3e31f3*/
      qword_905FD0 = sub_2723A0(v6); /*0x3e3201*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3e3212*/
    }
    return GameManager_safePopScene(); /*0x3e3219*/
  }
}

// [16/30] Address: 0x3e3220
// Method: LevelBrowserLayer::keyBackClicked
__int64 __fastcall LevelBrowserLayer_keyBackClicked(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 336) + 1056LL))(a1 - 336, 0);
}

// [17/30] Address: 0x3e3240
// Method: LevelBrowserLayer::keyDown
void __fastcall LevelBrowserLayer_keyDown(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rcx

  v2 = (unsigned int)(a2 - 37); /*0x3e3249*/
  if ( (_DWORD)a2 != 37 ) /*0x3e324d*/
  {
    v2 = (unsigned int)(a2 - 39); /*0x3e324f*/
    if ( (_DWORD)a2 == 39 ) /*0x3e3253*/
    {
LABEL_6:
      v3 = a1 - 344; /*0x3e3270*/
      v4 = *(_QWORD *)(a1 + 272); /*0x3e3277*/
      if ( v4 ) /*0x3e3281*/
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 344LL))(v4, a2, v2) ) /*0x3e3286*/
          sub_3E3090(v3, 0); /*0x3e329a*/
      }
      return; /*0x3e329a*/
    }
    v2 = (unsigned int)(a2 - 1025); /*0x3e3255*/
    if ( (_DWORD)a2 != 1025 ) /*0x3e325c*/
    {
      if ( (_DWORD)a2 != 1027 ) /*0x3e3262*/
      {
        cocos2d::CCLayer::keyDown(); /*0x3e3269*/
        return; /*0x3e3269*/
      }
      goto LABEL_6; /*0x3e3262*/
    }
  }
  v5 = a1 - 344; /*0x3e329f*/
  v6 = *(_QWORD *)(a1 + 280); /*0x3e32a6*/
  if ( v6 && (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v6 + 344LL))(v6, a2, v2) ) /*0x3e32b5*/
    sub_3E3110(v5, 0); /*0x3e32c9*/
}

// [18/30] Address: 0x3e32e0
// Method: LevelBrowserLayer::onInfo
// Hidden C++ exception states: #wind=3
void __fastcall LevelBrowserLayer_onInfo(__int64 a1)
{
  _BYTE *v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rdi
  _BYTE *v5; // rbx
  _BYTE *v6; // r8
  const char *v7; // r9
  __int64 v8; // r10
  unsigned __int64 v9; // r14
  void **v10; // rbx
  unsigned __int64 v11; // rcx
  _WORD *v12; // rbx
  void *v13; // rcx
  _BYTE *v14; // rbx
  _BYTE *v15; // rcx
  const char *v16; // rdx
  __int64 v17; // r10
  unsigned __int64 v18; // rbx
  char *v19; // rax
  unsigned __int64 v20; // rcx
  char *v21; // r14
  void *v22; // rcx
  unsigned __int64 v23; // rbx
  char *v24; // rax
  unsigned __int64 v25; // rcx
  __int64 v26; // r14
  char *v27; // r15
  void *v28; // rcx
  unsigned __int64 v29; // rbx
  char *v30; // rax
  unsigned __int64 v31; // rcx
  char *v32; // r14
  void *v33; // rcx
  unsigned __int64 v34; // r14
  void **v35; // rbx
  unsigned __int64 v36; // rcx
  _WORD *v37; // rbx
  void *v38; // rcx
  unsigned __int64 v39; // r14
  void **v40; // rbx
  unsigned __int64 v41; // rcx
  _WORD *v42; // rbx
  void *v43; // rcx
  unsigned __int64 v44; // rbx
  char *v45; // rax
  unsigned __int64 v46; // rcx
  char *v47; // r14
  void *v48; // rcx
  _BYTE *v49; // rbx
  _BYTE *v50; // rcx
  const char *v51; // r8
  __int64 v52; // r9
  unsigned __int64 v53; // r14
  void **v54; // rbx
  unsigned __int64 v55; // rcx
  _WORD *v56; // rbx
  void *v57; // rcx
  unsigned __int64 v58; // r14
  void **v59; // rbx
  unsigned __int64 v60; // rcx
  char *v61; // rbx
  void *v62; // rcx
  void **v63; // rbx
  int v64; // edi
  void **v65; // rdx
  __int64 v66; // r8
  void **v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rbx
  void *v70; // rcx
  void *v71; // rcx
  void *v72; // rcx
  __int128 v73; // [rsp+30h] [rbp-59h] BYREF
  __int64 v74; // [rsp+40h] [rbp-49h]
  __int64 v75; // [rsp+48h] [rbp-41h]
  void *Block[2]; // [rsp+58h] [rbp-31h] BYREF
  __int64 v77; // [rsp+68h] [rbp-21h]
  unsigned __int64 v78; // [rsp+70h] [rbp-19h]
  void *v79[2]; // [rsp+78h] [rbp-11h] BYREF
  __int64 v80; // [rsp+88h] [rbp-1h]
  unsigned __int64 v81; // [rsp+90h] [rbp+7h]
  void *v82[2]; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v83; // [rsp+A8h] [rbp+1Fh]
  unsigned __int64 v84; // [rsp+B0h] [rbp+27h]

  *(_OWORD *)Block = 0; /*0x3e3318*/
  v77 = 4; /*0x3e331c*/
  v78 = 15; /*0x3e3324*/
  strcpy((char *)Block, "Info"); /*0x3e332c*/
  *(_OWORD *)v79 = 0; /*0x3e3337*/
  v2 = (_BYTE *)sub_3C460(160); /*0x3e3345*/
  v79[0] = v2; /*0x3e3348*/
  v80 = 145; /*0x3e334c*/
  v81 = 159; /*0x3e3354*/
  strcpy( /*0x3e3363*/
    v2,
    "<cg>Green</c> users are unregistered.\n"
    "<cy>Gold</c> users are unique registered.\n"
    "<cl>Blue</c> songs are official.\n"
    "<cp>Purple</c> songs are custom.");
  *(_OWORD *)v82 = 0; /*0x3e33d8*/
  v83 = 0; /*0x3e33df*/
  v84 = 15; /*0x3e33e3*/
  LOBYTE(v82[0]) = 0; /*0x3e33eb*/
  v3 = *(_QWORD *)(a1 + 664); /*0x3e33ef*/
  if ( !v3 ) /*0x3e33f9*/
    goto LABEL_134; /*0x3e33f9*/
  v4 = 0x7FFFFFFFFFFFFFFFLL; /*0x3e33ff*/
  if ( *(_DWORD *)(v3 + 464) != 1 ) /*0x3e3414*/
  {
    v77 = 6; /*0x3e36cb*/
    memmove(Block, "Levels", 6u); /*0x3e36e3*/
    BYTE6(Block[0]) = 0; /*0x3e36e8*/
    v14 = (_BYTE *)sub_3C460(384); /*0x3e378c*/
    v80 = 373; /*0x3e378f*/
    v81 = 383; /*0x3e3797*/
    v15 = v14; /*0x3e379f*/
    v16 = "A <co>level</c> rewards <cy>Stars</c> if it is rated by RobTop. For unrated levels, the difficulty face is set" /*0x3e37a2*/
          " by community votes on each level's page. This is also how <cr>Demon</c> difficulties are decided.\n"
          "Usernames are <cy>gold</c> for registered users and <cg>green</c> for unregistered users. A song is <cl>blue</"
          "c> if it is official and <cp>pink</c> if it is custom.";
    v17 = 2; /*0x3e37a9*/
    do /*0x3e3800*/
    {
      *(_OWORD *)v15 = *(_OWORD *)v16; /*0x3e37b3*/
      *((_OWORD *)v15 + 1) = *((_OWORD *)v16 + 1); /*0x3e37ba*/
      *((_OWORD *)v15 + 2) = *((_OWORD *)v16 + 2); /*0x3e37c2*/
      *((_OWORD *)v15 + 3) = *((_OWORD *)v16 + 3); /*0x3e37ca*/
      *((_OWORD *)v15 + 4) = *((_OWORD *)v16 + 4); /*0x3e37d2*/
      *((_OWORD *)v15 + 5) = *((_OWORD *)v16 + 5); /*0x3e37da*/
      *((_OWORD *)v15 + 6) = *((_OWORD *)v16 + 6); /*0x3e37e2*/
      v15 += 128; /*0x3e37e6*/
      *((_OWORD *)v15 - 1) = *((_OWORD *)v16 + 7); /*0x3e37f1*/
      v16 += 128; /*0x3e37f5*/
      --v17; /*0x3e37fc*/
    }
    while ( v17 ); /*0x3e3800*/
    *(_OWORD *)v15 = *(_OWORD *)v16; /*0x3e3805*/
    *((_OWORD *)v15 + 1) = *((_OWORD *)v16 + 1); /*0x3e380c*/
    *((_OWORD *)v15 + 2) = *((_OWORD *)v16 + 2); /*0x3e3814*/
    *((_OWORD *)v15 + 3) = *((_OWORD *)v16 + 3); /*0x3e381c*/
    *((_OWORD *)v15 + 4) = *((_OWORD *)v16 + 4); /*0x3e3824*/
    *((_OWORD *)v15 + 5) = *((_OWORD *)v16 + 5); /*0x3e382c*/
    *((_OWORD *)v15 + 6) = *((_OWORD *)v16 + 6); /*0x3e3834*/
    *((_DWORD *)v15 + 28) = *((_DWORD *)v16 + 28); /*0x3e383b*/
    v15[116] = v16[116]; /*0x3e3842*/
    v14[373] = 0; /*0x3e3845*/
    j_j_free(v2); /*0x3e3854*/
    v2 = v14; /*0x3e3859*/
    v79[0] = v14; /*0x3e385c*/
    switch ( *(_DWORD *)(*(_QWORD *)(a1 + 664) + 320LL) ) /*0x3e3895*/
    {
      case 3: /*0x3e3895*/
        v18 = v78; /*0x3e3897*/
        if ( v78 < 8 ) /*0x3e389f*/
        {
          v20 = v78 >> 1; /*0x3e38cf*/
          if ( v78 <= 0x7FFFFFFFFFFFFFFFLL - (v78 >> 1) ) /*0x3e38db*/
          {
            v4 = 15; /*0x3e38e1*/
            if ( v78 + v20 > 0xF ) /*0x3e38e9*/
              v4 = v78 + v20; /*0x3e38e9*/
          }
          v21 = (char *)sub_3C460(v4 + 1); /*0x3e38f6*/
          v77 = 8; /*0x3e38f9*/
          v78 = v4; /*0x3e3901*/
          strcpy(v21, "Trending"); /*0x3e390f*/
          if ( v18 > 0xF ) /*0x3e391a*/
          {
            v22 = Block[0]; /*0x3e3920*/
            if ( v18 + 1 >= 0x1000 ) /*0x3e392e*/
            {
              v22 = (void *)*((_QWORD *)Block[0] - 1); /*0x3e3934*/
              if ( (unsigned __int64)((char *)Block[0] - (char *)v22 - 8) > 0x1F ) /*0x3e3943*/
                goto LABEL_125; /*0x3e3943*/
            }
            j_j_free(v22); /*0x3e3949*/
          }
          Block[0] = v21; /*0x3e394e*/
        }
        else
        {
          v19 = (char *)Block; /*0x3e38a1*/
          if ( v78 > 0xF ) /*0x3e38a9*/
            v19 = (char *)Block[0]; /*0x3e38a9*/
          v77 = 8; /*0x3e38ae*/
          strcpy(v19, "Trending"); /*0x3e38c0*/
        }
        v80 = 156; /*0x3e3952*/
        memmove( /*0x3e396a*/
          v2,
          "New <co>popular</c> levels from the last few days.\n"
          "Only creators with a <ct>rated</c> level, or a level <cg>sent</c> by a <cy>Rating Advisor</c>, can trend.",
          0x9Cu);
        v2[156] = 0; /*0x3e396f*/
        goto LABEL_129; /*0x3e3976*/
      case 6: /*0x3e3895*/
        v23 = v84; /*0x3e397b*/
        if ( v84 < 4 ) /*0x3e3983*/
        {
          v25 = v84 >> 1; /*0x3e39ac*/
          if ( v84 <= 0x7FFFFFFFFFFFFFFFLL - (v84 >> 1) ) /*0x3e39b8*/
          {
            v26 = 15; /*0x3e39c3*/
            if ( v84 + v25 > 0xF ) /*0x3e39cc*/
              v26 = v84 + v25; /*0x3e39cc*/
          }
          else
          {
            v26 = 0x7FFFFFFFFFFFFFFFLL; /*0x3e39ba*/
          }
          v27 = (char *)sub_3C460(v26 + 1); /*0x3e39d9*/
          v83 = 4; /*0x3e39dc*/
          v84 = v26; /*0x3e39e4*/
          strcpy(v27, "Info"); /*0x3e39e8*/
          if ( v23 > 0xF ) /*0x3e39f6*/
          {
            v28 = v82[0]; /*0x3e39fc*/
            if ( v23 + 1 >= 0x1000 ) /*0x3e3a0a*/
            {
              v28 = (void *)*((_QWORD *)v82[0] - 1); /*0x3e3a10*/
              if ( (unsigned __int64)((char *)v82[0] - (char *)v28 - 8) > 0x1F ) /*0x3e3a1f*/
                goto LABEL_125; /*0x3e3a1f*/
            }
            j_j_free(v28); /*0x3e3a25*/
          }
          v82[0] = v27; /*0x3e3a2a*/
        }
        else
        {
          v24 = (char *)v82; /*0x3e3985*/
          if ( v84 > 0xF ) /*0x3e398d*/
            v24 = (char *)v82[0]; /*0x3e398d*/
          v83 = 4; /*0x3e3992*/
          strcpy(v24, "Info"); /*0x3e399a*/
        }
        v29 = v78; /*0x3e3a2e*/
        if ( v78 < 8 ) /*0x3e3a36*/
        {
          v31 = v78 >> 1; /*0x3e3a66*/
          if ( v78 <= 0x7FFFFFFFFFFFFFFFLL - (v78 >> 1) ) /*0x3e3a72*/
          {
            v4 = 15; /*0x3e3a78*/
            if ( v78 + v31 > 0xF ) /*0x3e3a80*/
              v4 = v78 + v31; /*0x3e3a80*/
          }
          v32 = (char *)sub_3C460(v4 + 1); /*0x3e3a8d*/
          v77 = 8; /*0x3e3a90*/
          v78 = v4; /*0x3e3a98*/
          strcpy(v32, "Featured"); /*0x3e3aa6*/
          if ( v29 > 0xF ) /*0x3e3ab1*/
          {
            v33 = Block[0]; /*0x3e3ab7*/
            if ( v29 + 1 >= 0x1000 ) /*0x3e3ac5*/
            {
              v33 = (void *)*((_QWORD *)Block[0] - 1); /*0x3e3acb*/
              if ( (unsigned __int64)((char *)Block[0] - (char *)v33 - 8) > 0x1F ) /*0x3e3ada*/
                goto LABEL_125; /*0x3e3ada*/
            }
            j_j_free(v33); /*0x3e3ae0*/
          }
          Block[0] = v32; /*0x3e3ae5*/
        }
        else
        {
          v30 = (char *)Block; /*0x3e3a38*/
          if ( v78 > 0xF ) /*0x3e3a40*/
            v30 = (char *)Block[0]; /*0x3e3a40*/
          v77 = 8; /*0x3e3a45*/
          strcpy(v30, "Featured"); /*0x3e3a57*/
        }
        v80 = 252; /*0x3e3ae9*/
        memmove( /*0x3e3b01*/
          v2,
          "Levels on this list have been rated and featured by RobTop. The extra visual around the difficulty face indica"
          "tes how much he likes a specific level. In order of increasing quality:\n"
          "<cy>Featured</c>, <co>Epic</c>, <cp>Legendary</c>, and <cj>Mythic</c>.",
          0xFCu);
        v2[252] = 0; /*0x3e3b06*/
        goto LABEL_129; /*0x3e3b0d*/
      case 9: /*0x3e3895*/
        v39 = v78; /*0x3e3c03*/
        if ( v78 < 9 ) /*0x3e3c0b*/
        {
          v41 = v78 >> 1; /*0x3e3c43*/
          if ( v78 <= 0x7FFFFFFFFFFFFFFFLL - (v78 >> 1) ) /*0x3e3c4f*/
          {
            v4 = 15; /*0x3e3c55*/
            if ( v78 + v41 > 0xF ) /*0x3e3c5d*/
              v4 = v78 + v41; /*0x3e3c5d*/
          }
          v42 = (_WORD *)sub_3C460(v4 + 1); /*0x3e3c6a*/
          v77 = 9; /*0x3e3c6d*/
          v78 = v4; /*0x3e3c75*/
          *(_QWORD *)v42 = *(_QWORD *)"Map Packs"; /*0x3e3c81*/
          v42[4] = (unsigned __int8)aMapPacks[8]; /*0x3e3c8c*/
          if ( v39 > 0xF ) /*0x3e3c97*/
          {
            v43 = Block[0]; /*0x3e3c9d*/
            if ( v39 + 1 >= 0x1000 ) /*0x3e3cab*/
            {
              v43 = (void *)*((_QWORD *)Block[0] - 1); /*0x3e3cb1*/
              if ( (unsigned __int64)((char *)Block[0] - (char *)v43 - 8) > 0x1F ) /*0x3e3cc0*/
                goto LABEL_125; /*0x3e3cc0*/
            }
            j_j_free(v43); /*0x3e3cc6*/
          }
          Block[0] = v42; /*0x3e3ccb*/
        }
        else
        {
          v40 = Block; /*0x3e3c0d*/
          if ( v78 > 0xF ) /*0x3e3c15*/
            v40 = (void **)Block[0]; /*0x3e3c15*/
          v77 = 9; /*0x3e3c1a*/
          memmove(v40, "Map Packs", 9u); /*0x3e3c32*/
          *((_BYTE *)v40 + 9) = 0; /*0x3e3c37*/
        }
        v80 = 156; /*0x3e3ccf*/
        memmove( /*0x3e3ce7*/
          v2,
          "<cg>Map Packs</c> are collections of 3 rated levels of similar difficulty set by RobTop. Once completed, they "
          "reward <cy>Stars</c> and <cl>Secret Coins</c>.",
          0x9Cu);
        v2[156] = 0; /*0x3e3cec*/
        goto LABEL_129; /*0x3e3cf3*/
      case 0x15: /*0x3e3895*/
      case 0x16: /*0x3e3895*/
      case 0x17: /*0x3e3895*/
      case 0x20: /*0x3e3895*/
      case 0x21: /*0x3e3895*/
      case 0x22: /*0x3e3895*/
        v44 = v78; /*0x3e3cf8*/
        if ( v78 < 8 ) /*0x3e3d00*/
        {
          v46 = v78 >> 1; /*0x3e3d30*/
          if ( v78 <= 0x7FFFFFFFFFFFFFFFLL - (v78 >> 1) ) /*0x3e3d3c*/
          {
            v4 = 15; /*0x3e3d42*/
            if ( v78 + v46 > 0xF ) /*0x3e3d4a*/
              v4 = v78 + v46; /*0x3e3d4a*/
          }
          v47 = (char *)sub_3C460(v4 + 1); /*0x3e3d57*/
          v77 = 8; /*0x3e3d5a*/
          v78 = v4; /*0x3e3d62*/
          strcpy(v47, "The Safe"); /*0x3e3d70*/
          if ( v44 > 0xF ) /*0x3e3d7b*/
          {
            v48 = Block[0]; /*0x3e3d81*/
            if ( v44 + 1 >= 0x1000 ) /*0x3e3d8f*/
            {
              v48 = (void *)*((_QWORD *)Block[0] - 1); /*0x3e3d95*/
              if ( (unsigned __int64)((char *)Block[0] - (char *)v48 - 8) > 0x1F ) /*0x3e3da4*/
                goto LABEL_125; /*0x3e3da4*/
            }
            j_j_free(v48); /*0x3e3daa*/
          }
          Block[0] = v47; /*0x3e3daf*/
        }
        else
        {
          v45 = (char *)Block; /*0x3e3d02*/
          if ( v78 > 0xF ) /*0x3e3d0a*/
            v45 = (char *)Block[0]; /*0x3e3d0a*/
          v77 = 8; /*0x3e3d0f*/
          strcpy(v45, "The Safe"); /*0x3e3d21*/
        }
        v49 = (_BYTE *)sub_3C460(575); /*0x3e3dbd*/
        v80 = 407; /*0x3e3dc0*/
        v81 = 574; /*0x3e3dc8*/
        v50 = v49; /*0x3e3dd0*/
        v51 = "Every past <cl>Daily</c>, <cg>Weekly</c>, and <cp>Event</c> level.\n" /*0x3e3dd3*/
              "<cy>Safe:</c> Unlock a past level with <cj>Demon Keys</c> and play it as it originally appeared. Dailies g"
              "ive <cy>Stars</c> only, with no diamonds or orbs. <cg>Weekly</c> and <cp>Event</c> levels still give their"
              " <cg>chest</c> rewards.\n"
              "<cy>Check:</c> Show only levels you have not beaten.\n"
              "<cy>Clock:</c> Play levels as normal online levels.";
        v52 = 3; /*0x3e3dda*/
        do /*0x3e3e38*/
        {
          *(_OWORD *)v50 = *(_OWORD *)v51; /*0x3e3de4*/
          *((_OWORD *)v50 + 1) = *((_OWORD *)v51 + 1); /*0x3e3dec*/
          *((_OWORD *)v50 + 2) = *((_OWORD *)v51 + 2); /*0x3e3df5*/
          *((_OWORD *)v50 + 3) = *((_OWORD *)v51 + 3); /*0x3e3dfe*/
          *((_OWORD *)v50 + 4) = *((_OWORD *)v51 + 4); /*0x3e3e07*/
          *((_OWORD *)v50 + 5) = *((_OWORD *)v51 + 5); /*0x3e3e10*/
          *((_OWORD *)v50 + 6) = *((_OWORD *)v51 + 6); /*0x3e3e19*/
          v50 += 128; /*0x3e3e1d*/
          *((_OWORD *)v50 - 1) = *((_OWORD *)v51 + 7); /*0x3e3e29*/
          v51 += 128; /*0x3e3e2d*/
          --v52; /*0x3e3e34*/
        }
        while ( v52 ); /*0x3e3e38*/
        *(_OWORD *)v50 = *(_OWORD *)v51; /*0x3e3e3e*/
        *((_DWORD *)v50 + 4) = *((_DWORD *)v51 + 4); /*0x3e3e45*/
        *((_WORD *)v50 + 10) = *((_WORD *)v51 + 10); /*0x3e3e4d*/
        v50[22] = v51[22]; /*0x3e3e56*/
        v49[407] = 0; /*0x3e3e59*/
        j_j_free(v2); /*0x3e3e68*/
        v2 = v49; /*0x3e3e6d*/
        v79[0] = v49; /*0x3e3e70*/
        goto LABEL_130; /*0x3e3e74*/
      case 0x1C: /*0x3e3895*/
        v53 = v78; /*0x3e3e79*/
        if ( v78 < 0xD ) /*0x3e3e81*/
        {
          v55 = v78 >> 1; /*0x3e3eb9*/
          if ( v78 <= 0x7FFFFFFFFFFFFFFFLL - (v78 >> 1) ) /*0x3e3ec5*/
          {
            v4 = 15; /*0x3e3ecb*/
            if ( v78 + v55 > 0xF ) /*0x3e3ed3*/
              v4 = v78 + v55; /*0x3e3ed3*/
          }
          v56 = (_WORD *)sub_3C460(v4 + 1); /*0x3e3ee0*/
          v77 = 13; /*0x3e3ee3*/
          v78 = v4; /*0x3e3eeb*/
          qmemcpy(v56, "Weekly Level", 12); /*0x3e3ef7*/
          v56[6] = (unsigned __int8)aWeeklyLevels[12]; /*0x3e3f0b*/
          if ( v53 > 0xF ) /*0x3e3f16*/
          {
            v57 = Block[0]; /*0x3e3f1c*/
            if ( v53 + 1 >= 0x1000 ) /*0x3e3f2a*/
            {
              v57 = (void *)*((_QWORD *)Block[0] - 1); /*0x3e3f30*/
              if ( (unsigned __int64)((char *)Block[0] - (char *)v57 - 8) > 0x1F ) /*0x3e3f3f*/
                goto LABEL_125; /*0x3e3f3f*/
            }
            j_j_free(v57); /*0x3e3f45*/
          }
          Block[0] = v56; /*0x3e3f4a*/
        }
        else
        {
          v54 = Block; /*0x3e3e83*/
          if ( v78 > 0xF ) /*0x3e3e8b*/
            v54 = (void **)Block[0]; /*0x3e3e8b*/
          v77 = 13; /*0x3e3e90*/
          memmove(v54, "Weekly Levels", 0xDu); /*0x3e3ea8*/
          *((_BYTE *)v54 + 13) = 0; /*0x3e3ead*/
        }
        v80 = 94; /*0x3e3f4e*/
        memmove( /*0x3e3f66*/
          v2,
          "New <cg>levels</c> are released every <cy>week</c>.\n<cl>Check back later for more updates!</c>",
          0x5Eu);
        v2[94] = 0; /*0x3e3f6b*/
        goto LABEL_129; /*0x3e3f6f*/
      case 0x1D: /*0x3e3895*/
        v58 = v78; /*0x3e3f74*/
        if ( v78 < 0xC ) /*0x3e3f7c*/
        {
          v60 = v78 >> 1; /*0x3e3fb4*/
          if ( v78 <= 0x7FFFFFFFFFFFFFFFLL - (v78 >> 1) ) /*0x3e3fc0*/
          {
            v4 = 15; /*0x3e3fc6*/
            if ( v78 + v60 > 0xF ) /*0x3e3fce*/
              v4 = v78 + v60; /*0x3e3fce*/
          }
          v61 = (char *)sub_3C460(v4 + 1); /*0x3e3fdb*/
          v77 = 12; /*0x3e3fde*/
          v78 = v4; /*0x3e3fe6*/
          strcpy(v61, "Bonus Levels"); /*0x3e3ff2*/
          if ( v58 > 0xF ) /*0x3e4007*/
          {
            v62 = Block[0]; /*0x3e400d*/
            if ( v58 + 1 >= 0x1000 ) /*0x3e401b*/
            {
              v62 = (void *)*((_QWORD *)Block[0] - 1); /*0x3e4021*/
              if ( (unsigned __int64)((char *)Block[0] - (char *)v62 - 8) > 0x1F ) /*0x3e4030*/
                goto LABEL_125; /*0x3e4030*/
            }
            j_j_free(v62); /*0x3e4048*/
          }
          Block[0] = v61; /*0x3e404d*/
        }
        else
        {
          v59 = Block; /*0x3e3f7e*/
          if ( v78 > 0xF ) /*0x3e3f86*/
            v59 = (void **)Block[0]; /*0x3e3f86*/
          v77 = 12; /*0x3e3f8b*/
          memmove(v59, "Bonus Levels", 0xCu); /*0x3e3fa3*/
          *((_BYTE *)v59 + 12) = 0; /*0x3e3fa8*/
        }
        v80 = 93; /*0x3e4051*/
        memmove( /*0x3e4069*/
          v2,
          "New <cg>levels</c> are released from time to time.\n<cl>Check back later for more updates!</c>",
          0x5Du);
        v2[93] = 0; /*0x3e406e*/
        goto LABEL_129; /*0x3e406e*/
      case 0x1F: /*0x3e3895*/
        v34 = v78; /*0x3e3b12*/
        if ( v78 < 5 ) /*0x3e3b1a*/
        {
          v36 = v78 >> 1; /*0x3e3b52*/
          if ( v78 <= 0x7FFFFFFFFFFFFFFFLL - (v78 >> 1) ) /*0x3e3b5e*/
          {
            v4 = 15; /*0x3e3b64*/
            if ( v78 + v36 > 0xF ) /*0x3e3b6c*/
              v4 = v78 + v36; /*0x3e3b6c*/
          }
          v37 = (_WORD *)sub_3C460(v4 + 1); /*0x3e3b79*/
          v77 = 5; /*0x3e3b7c*/
          v78 = v4; /*0x3e3b84*/
          *(_DWORD *)v37 = *(_DWORD *)"Hyped"; /*0x3e3b8e*/
          v37[2] = (unsigned __int8)aHyped_1[4]; /*0x3e3b97*/
          if ( v34 > 0xF ) /*0x3e3ba2*/
          {
            v38 = Block[0]; /*0x3e3ba8*/
            if ( v34 + 1 >= 0x1000 ) /*0x3e3bb6*/
            {
              v38 = (void *)*((_QWORD *)Block[0] - 1); /*0x3e3bbc*/
              if ( (unsigned __int64)((char *)Block[0] - (char *)v38 - 8) > 0x1F ) /*0x3e3bcb*/
                goto LABEL_125; /*0x3e3bcb*/
            }
            j_j_free(v38); /*0x3e3bd1*/
          }
          Block[0] = v37; /*0x3e3bd6*/
        }
        else
        {
          v35 = Block; /*0x3e3b1c*/
          if ( v78 > 0xF ) /*0x3e3b24*/
            v35 = (void **)Block[0]; /*0x3e3b24*/
          v77 = 5; /*0x3e3b29*/
          memmove(v35, "Hyped", 5u); /*0x3e3b41*/
          *((_BYTE *)v35 + 5) = 0; /*0x3e3b46*/
        }
        v80 = 179; /*0x3e3bda*/
        memmove( /*0x3e3bf2*/
          v2,
          "Levels sent by <cy>Rating Advisors</c> enter the\n"
          "<ct>Hyped</c> list for about a week.\n"
          "The list reshuffles <cy>every hour</c>, so every level has a <co>chance</c> to be at the top.",
          0xB3u);
        v2[179] = 0; /*0x3e3bf7*/
        goto LABEL_129; /*0x3e3bfe*/
      default:
        goto LABEL_130;
    }
  }
  v77 = 5; /*0x3e342d*/
  memmove(Block, "Lists", 5u); /*0x3e3445*/
  BYTE5(Block[0]) = 0; /*0x3e344a*/
  v5 = (_BYTE *)sub_3C460(288); /*0x3e34ed*/
  v80 = 286; /*0x3e34f0*/
  v81 = 287; /*0x3e34f8*/
  v6 = v5; /*0x3e3500*/
  v7 = "A <co>list</c> may have rewards if it is rated by RobTop. The difficulty face is manually set by the creator of t" /*0x3e3503*/
       "he list.\n"
       "Usernames are <cy>gold</c> for registered users and <cg>green</c> for unregistered users. A song is <cl>blue</c> "
       "if it is official and <cp>pink</c> if it is custom.";
  v8 = 2; /*0x3e350a*/
  do /*0x3e3570*/
  {
    *(_OWORD *)v6 = *(_OWORD *)v7; /*0x3e3514*/
    *((_OWORD *)v6 + 1) = *((_OWORD *)v7 + 1); /*0x3e351d*/
    *((_OWORD *)v6 + 2) = *((_OWORD *)v7 + 2); /*0x3e3527*/
    *((_OWORD *)v6 + 3) = *((_OWORD *)v7 + 3); /*0x3e3531*/
    *((_OWORD *)v6 + 4) = *((_OWORD *)v7 + 4); /*0x3e353b*/
    *((_OWORD *)v6 + 5) = *((_OWORD *)v7 + 5); /*0x3e3545*/
    *((_OWORD *)v6 + 6) = *((_OWORD *)v7 + 6); /*0x3e354f*/
    v6 += 128; /*0x3e3554*/
    *((_OWORD *)v6 - 1) = *((_OWORD *)v7 + 7); /*0x3e3560*/
    v7 += 128; /*0x3e3565*/
    --v8; /*0x3e356c*/
  }
  while ( v8 ); /*0x3e3570*/
  *(_OWORD *)v6 = *(_OWORD *)v7; /*0x3e3576*/
  *((_QWORD *)v6 + 2) = *((_QWORD *)v7 + 2); /*0x3e357e*/
  *((_DWORD *)v6 + 6) = *((_DWORD *)v7 + 6); /*0x3e3586*/
  *((_WORD *)v6 + 14) = *((_WORD *)v7 + 14); /*0x3e358f*/
  v5[286] = 0; /*0x3e3594*/
  j_j_free(v2); /*0x3e35a3*/
  v2 = v5; /*0x3e35a8*/
  v79[0] = v5; /*0x3e35ab*/
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 664) + 320LL) == 6 ) /*0x3e35bd*/
  {
    v9 = v78; /*0x3e35c3*/
    if ( v78 >= 9 ) /*0x3e35cb*/
    {
      v10 = Block; /*0x3e35cd*/
      if ( v78 > 0xF ) /*0x3e35d5*/
        v10 = (void **)Block[0]; /*0x3e35d5*/
      v77 = 9; /*0x3e35da*/
      memmove(v10, "Top Lists", 9u); /*0x3e35f2*/
      *((_BYTE *)v10 + 9) = 0; /*0x3e35f7*/
      goto LABEL_18; /*0x3e35fb*/
    }
    v11 = v78 >> 1; /*0x3e3603*/
    if ( v78 <= 0x7FFFFFFFFFFFFFFFLL - (v78 >> 1) ) /*0x3e360f*/
    {
      v4 = 15; /*0x3e3615*/
      if ( v11 + v78 > 0xF ) /*0x3e361d*/
        v4 = v11 + v78; /*0x3e361d*/
    }
    v12 = (_WORD *)sub_3C460(v4 + 1); /*0x3e362a*/
    v77 = 9; /*0x3e362d*/
    v78 = v4; /*0x3e3635*/
    *(_QWORD *)v12 = *(_QWORD *)"Top Lists"; /*0x3e3641*/
    v12[4] = (unsigned __int8)aTopLists[8]; /*0x3e364c*/
    if ( v9 <= 0xF ) /*0x3e3657*/
    {
LABEL_17:
      Block[0] = v12; /*0x3e368b*/
LABEL_18:
      v80 = 216; /*0x3e368f*/
      memmove( /*0x3e36a7*/
        v2,
        "These <co>lists</c> have been rated by RobTop. The rewards for each one are also decided by him and are variable"
        " from list to list. Note that rated lists can only be <cy>Featured</c> and do not reward Creator Points.",
        0xD8u);
      v2[216] = 0; /*0x3e36ac*/
LABEL_129:
      v2 = v79[0]; /*0x3e4072*/
      goto LABEL_130; /*0x3e4072*/
    }
    v13 = Block[0]; /*0x3e365d*/
    if ( v9 + 1 < 0x1000 /*0x3e3680*/
      || (v13 = (void *)*((_QWORD *)Block[0] - 1), (unsigned __int64)((char *)Block[0] - (char *)v13 - 8) <= 0x1F) )
    {
      j_j_free(v13); /*0x3e3686*/
      goto LABEL_17; /*0x3e3686*/
    }
LABEL_125:
    invoke_watson(0, 0, 0, 0, 0); /*0x3e4032*/
  }
LABEL_130:
  if ( !v83 ) /*0x3e407b*/
  {
LABEL_134:
    v63 = 0; /*0x3e408d*/
    goto LABEL_135; /*0x3e408d*/
  }
  v63 = v82; /*0x3e407d*/
  if ( v84 > 0xF ) /*0x3e4086*/
    v63 = (void **)v82[0]; /*0x3e4086*/
LABEL_135:
  v64 = a1 + 552; /*0x3e4090*/
  if ( !a1 ) /*0x3e409a*/
    v64 = 0; /*0x3e409a*/
  v65 = v79; /*0x3e409e*/
  if ( v81 > 0xF ) /*0x3e40a7*/
    v65 = (void **)v2; /*0x3e40a7*/
  v73 = 0; /*0x3e40ae*/
  v74 = 0; /*0x3e40b2*/
  v75 = 0; /*0x3e40b6*/
  v66 = -1; /*0x3e40ba*/
  do /*0x3e40c4*/
    ++v66; /*0x3e40c1*/
  while ( *((_BYTE *)v65 + v66) ); /*0x3e40c4*/
  sub_3C230(&v73); /*0x3e40cf*/
  v67 = Block; /*0x3e40d4*/
  if ( v78 > 0xF ) /*0x3e40dd*/
    LODWORD(v67) = Block[0]; /*0x3e40dd*/
  v68 = sub_593F0(v64, (_DWORD)v67, (unsigned int)&v73, (unsigned int)"OK", (__int64)v63, 1136525312); /*0x3e4103*/
  v69 = v68; /*0x3e4108*/
  if ( v83 ) /*0x3e4110*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v68 + 64LL))(v68, 6); /*0x3e4121*/
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 1064LL))(v69); /*0x3e4131*/
  if ( v84 > 0xF ) /*0x3e413c*/
  {
    v70 = v82[0]; /*0x3e4141*/
    if ( v84 + 1 >= 0x1000 ) /*0x3e414f*/
    {
      v70 = (void *)*((_QWORD *)v82[0] - 1); /*0x3e4155*/
      if ( (unsigned __int64)((char *)v82[0] - (char *)v70 - 8) > 0x1F ) /*0x3e4164*/
        invoke_watson(0, 0, 0, 0, 0); /*0x3e4175*/
    }
    j_j_free(v70); /*0x3e417c*/
  }
  v83 = 0; /*0x3e4181*/
  v84 = 15; /*0x3e4185*/
  LOBYTE(v82[0]) = 0; /*0x3e418d*/
  if ( v81 > 0xF ) /*0x3e4199*/
  {
    v71 = v79[0]; /*0x3e419e*/
    if ( v81 + 1 >= 0x1000 ) /*0x3e41ac*/
    {
      v71 = (void *)*((_QWORD *)v79[0] - 1); /*0x3e41b2*/
      if ( (unsigned __int64)((char *)v79[0] - (char *)v71 - 8) > 0x1F ) /*0x3e41c1*/
        invoke_watson(0, 0, 0, 0, 0); /*0x3e41d2*/
    }
    j_j_free(v71); /*0x3e41d9*/
  }
  if ( v78 > 0xF ) /*0x3e41e7*/
  {
    v72 = Block[0]; /*0x3e41ec*/
    if ( v78 + 1 >= 0x1000 ) /*0x3e41fa*/
    {
      v72 = (void *)*((_QWORD *)Block[0] - 1); /*0x3e4200*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v72 - 8) > 0x1F ) /*0x3e420f*/
        invoke_watson(0, 0, 0, 0, 0); /*0x3e4220*/
    }
    j_j_free(v72); /*0x3e4227*/
  }
}

// [19/30] Address: 0x3e4680
// Method: LevelBrowserLayer::onSavedMode
// Hidden C++ exception states: #wind=1
void __fastcall LevelBrowserLayer_onSavedMode(_QWORD *a1)
{
  int v2; // edi
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rax
  struct cocos2d::CCScene *v6; // rax
  struct cocos2d::CCScene *v7; // rbx
  __int64 v8; // rcx
  cocos2d::CCDirector *v9; // rax
  void *v10; // [rsp+30h] [rbp+8h]

  if ( a1[83] ) /*0x3e468d*/
  {
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 992LL))(a1, 0); /*0x3e46a0*/
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 1008LL))(a1, 0); /*0x3e46ae*/
    v2 = *(_DWORD *)(a1[83] + 320LL); /*0x3e46bb*/
    v3 = 99; /*0x3e46c1*/
    if ( v2 == 99 ) /*0x3e46cd*/
      v3 = 103; /*0x3e46cd*/
    v4 = qword_905FD0; /*0x3e46d0*/
    if ( !qword_905FD0 ) /*0x3e46da*/
    {
      v10 = operator new(0x6E8u); /*0x3e46e6*/
      qword_905FD0 = sub_2723A0(v10); /*0x3e46f4*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3e4701*/
      v4 = qword_905FD0; /*0x3e4704*/
    }
    *(_DWORD *)(v4 + 1300) = v3; /*0x3e470b*/
    v5 = GJSearchObject_create(v3); /*0x3e4713*/
    if ( v2 == 99 ) /*0x3e471b*/
      *(_DWORD *)(v5 + 464) = 1; /*0x3e471d*/
    v6 = (struct cocos2d::CCScene *)LevelBrowserLayer_scene(v5); /*0x3e472a*/
    v7 = cocos2d::CCTransitionFade::create(0.5, v6); /*0x3e4740*/
    v9 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v8); /*0x3e4743*/
    cocos2d::CCDirector::replaceScene(v9, v7); /*0x3e474f*/
  }
}

// [20/30] Address: 0x3e4760
// Method: LevelBrowserLayer::onLocalMode
void __fastcall LevelBrowserLayer_onLocalMode(_QWORD *a1)
{
  int v2; // edi
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rax
  struct cocos2d::CCScene *v6; // rax
  struct cocos2d::CCScene *v7; // rbx
  __int64 v8; // rcx
  cocos2d::CCDirector *v9; // rax
  void *v10; // [rsp+30h] [rbp+8h]

  if ( a1[83] ) /*0x3e476d*/
  {
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 992LL))(a1, 0); /*0x3e4780*/
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 1008LL))(a1, 0); /*0x3e478e*/
    v2 = *(_DWORD *)(a1[83] + 320LL); /*0x3e479b*/
    v3 = 98; /*0x3e47a1*/
    if ( v2 == 98 ) /*0x3e47ad*/
      v3 = 102; /*0x3e47ad*/
    v4 = qword_905FD0; /*0x3e47b0*/
    if ( !qword_905FD0 ) /*0x3e47ba*/
    {
      v10 = operator new(0x6E8u); /*0x3e47c6*/
      qword_905FD0 = sub_2723A0(v10); /*0x3e47d4*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3e47e1*/
      v4 = qword_905FD0; /*0x3e47e4*/
    }
    *(_DWORD *)(v4 + 1296) = v3; /*0x3e47eb*/
    v5 = GJSearchObject_create(v3); /*0x3e47f3*/
    if ( v2 == 98 ) /*0x3e47fb*/
      *(_DWORD *)(v5 + 464) = 1; /*0x3e47fd*/
    v6 = (struct cocos2d::CCScene *)LevelBrowserLayer_scene(v5); /*0x3e480a*/
    v7 = cocos2d::CCTransitionFade::create(0.5, v6); /*0x3e4820*/
    v9 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v8); /*0x3e4823*/
    cocos2d::CCDirector::replaceScene(v9, v7); /*0x3e482f*/
  }
}

// [21/30] Address: 0x3e4840
// Method: LevelBrowserLayer::shareCommentClosed
// Hidden C++ exception states: #wind=3
double __fastcall LevelBrowserLayer_shareCommentClosed(__int64 a1, size_t *a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rcx
  void *v7; // rdx
  void *v9; // [rsp+20h] [rbp-28h]
  void *v10; // [rsp+20h] [rbp-28h]

  if ( *(_DWORD *)(a3 + 696) == 5 ) /*0x3e4871*/
  {
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x3e487f*/
    {
      v9 = operator new(0x690u); /*0x3e488b*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v9); /*0x3e4899*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x3e48aa*/
    }
    v5 = sub_2199F0(a1, a2); /*0x3e48b1*/
    v6 = *(_QWORD *)&qword_905FB0; /*0x3e48b4*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x3e48be*/
    {
      v10 = operator new(0x690u); /*0x3e48ca*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v10); /*0x3e48d8*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x3e48e9*/
      v6 = *(_QWORD *)&qword_905FB0; /*0x3e48eb*/
    }
    *(_BYTE *)(v6 + 1344) = 1; /*0x3e48f2*/
    if ( (size_t *)(v5 + 440) != a2 ) /*0x3e4903*/
    {
      v7 = a2; /*0x3e4905*/
      if ( a2[3] > 0xF ) /*0x3e490d*/
        v7 = (void *)*a2; /*0x3e490f*/
      sub_3F5A0((void *)(v5 + 440), v7, a2[2]); /*0x3e4916*/
    }
    LevelBrowserLayer_loadPage(a1 - 584, *(_QWORD *)(a1 + 80)); /*0x3e4926*/
  }
  return sub_3C310(a2); /*0x3e4934*/
}

// [22/30] Address: 0x3e4960
// Method: LevelBrowserLayer::onMyOnlineLevels
// Hidden C++ exception states: #wind=3
bool __fastcall LevelBrowserLayer_onMyOnlineLevels(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // r8
  struct cocos2d::CCScene *v10; // rax
  struct cocos2d::CCScene *v11; // rbx
  __int64 v12; // rcx
  cocos2d::CCDirector *v13; // rax
  void *v15; // [rsp+20h] [rbp-98h]
  __int128 v16; // [rsp+28h] [rbp-90h] BYREF
  __int64 v17; // [rsp+38h] [rbp-80h]
  __int64 v18; // [rsp+40h] [rbp-78h]
  __int128 v19; // [rsp+48h] [rbp-70h] BYREF
  __int64 v20; // [rsp+58h] [rbp-60h]
  __int64 v21; // [rsp+60h] [rbp-58h]
  _BYTE v22[32]; // [rsp+68h] [rbp-50h] BYREF
  _BYTE v23[32]; // [rsp+88h] [rbp-30h] BYREF

  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 992LL))(a1, 0); /*0x3e4983*/
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 1008LL))(a1, 0); /*0x3e4991*/
  if ( *(_DWORD *)(a1[83] + 320LL) == 102 ) /*0x3e49a5*/
  {
    v3 = GJAccountManager_sharedState(v2); /*0x3e49ab*/
    v4 = (_QWORD *)GameToolbox_intToString(v22, (unsigned int)(*(_DWORD *)(v3 + 360) - *(_DWORD *)(v3 + 364))); /*0x3e49c1*/
    if ( v4[3] > 0xFu ) /*0x3e49cc*/
      v4 = (_QWORD *)*v4; /*0x3e49ce*/
    v16 = 0; /*0x3e49d4*/
    v17 = 0; /*0x3e49db*/
    v18 = 0; /*0x3e49e0*/
    v5 = -1; /*0x3e49e5*/
    do /*0x3e49f3*/
      ++v5; /*0x3e49f0*/
    while ( *((_BYTE *)v4 + v5) ); /*0x3e49f3*/
    sub_3C230(&v16); /*0x3e4a01*/
    v6 = GJSearchObject_create_0(5, &v16); /*0x3e4a15*/
    sub_3C310(v22); /*0x3e4a1d*/
    *(_DWORD *)(v6 + 464) = 1; /*0x3e4a22*/
  }
  else
  {
    v7 = qword_905FD0; /*0x3e4a31*/
    if ( !qword_905FD0 ) /*0x3e4a3b*/
    {
      v15 = operator new(0x6E8u); /*0x3e4a47*/
      qword_905FD0 = sub_2723A0(v15); /*0x3e4a55*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3e4a66*/
      v7 = qword_905FD0; /*0x3e4a68*/
    }
    v8 = (_QWORD *)GameToolbox_intToString(v23, (unsigned int)(*(_DWORD *)(v7 + 692) - *(_DWORD *)(v7 + 696))); /*0x3e4a83*/
    if ( v8[3] > 0xFu ) /*0x3e4a8e*/
      v8 = (_QWORD *)*v8; /*0x3e4a90*/
    v19 = 0; /*0x3e4a96*/
    v20 = 0; /*0x3e4a9d*/
    v21 = 0; /*0x3e4aa2*/
    v9 = -1; /*0x3e4aa7*/
    do /*0x3e4ab3*/
      ++v9; /*0x3e4ab0*/
    while ( *((_BYTE *)v8 + v9) ); /*0x3e4ab3*/
    sub_3C230(&v19); /*0x3e4ac1*/
    v6 = GJSearchObject_create_0(5, &v19); /*0x3e4ad5*/
    sub_3C310(v23); /*0x3e4ae0*/
  }
  v10 = (struct cocos2d::CCScene *)LevelBrowserLayer_scene(v6); /*0x3e4ae8*/
  v11 = cocos2d::CCTransitionFade::create(0.5, v10); /*0x3e4afe*/
  v13 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v12); /*0x3e4b01*/
  return cocos2d::CCDirector::replaceScene(v13, v11); /*0x3e4b13*/
}

// [23/30] Address: 0x3e5190
// Method: LevelBrowserLayer::onRefresh
// Hidden C++ exception states: #wind=2
void __fastcall LevelBrowserLayer_onRefresh(__int64 a1)
{
  __int64 v2; // rcx
  __int64 Key; // rax
  __int64 v4; // r8
  void **v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  void *v8; // rcx
  void *v9; // [rsp+30h] [rbp-38h]
  void *Block[2]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v11; // [rsp+48h] [rbp-20h]
  unsigned __int64 v12; // [rsp+50h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 664); /*0x3e51ac*/
  if ( v2 ) /*0x3e51b6*/
  {
    Key = GJSearchObject_getKey(v2); /*0x3e51bc*/
    *(_OWORD *)Block = 0; /*0x3e51c4*/
    v11 = 0; /*0x3e51c9*/
    v12 = 0; /*0x3e51d2*/
    v4 = -1; /*0x3e51db*/
    do /*0x3e51e5*/
      ++v4; /*0x3e51e2*/
    while ( *(_BYTE *)(Key + v4) ); /*0x3e51e5*/
    sub_3C230(Block); /*0x3e51f4*/
    v5 = Block; /*0x3e51fa*/
    if ( v12 > 0xF ) /*0x3e5205*/
      v5 = (void **)Block[0]; /*0x3e5205*/
    v6 = *(_QWORD *)&qword_905FB0; /*0x3e520b*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x3e5215*/
    {
      v9 = operator new(0x690u); /*0x3e5221*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v9); /*0x3e522f*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x3e5240*/
      v6 = *(_QWORD *)&qword_905FB0; /*0x3e5243*/
    }
    sub_21EF80(v6, v5); /*0x3e524d*/
    LevelBrowserLayer_loadPage(a1, *(_QWORD *)(a1 + 664)); /*0x3e525c*/
    v7 = *(_QWORD *)(a1 + 648); /*0x3e5261*/
    if ( v7 ) /*0x3e526b*/
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 336LL))(v7, 0); /*0x3e5272*/
    if ( v12 > 0xF ) /*0x3e5282*/
    {
      v8 = Block[0]; /*0x3e5287*/
      if ( v12 + 1 >= 0x1000 ) /*0x3e5296*/
      {
        v8 = (void *)*((_QWORD *)Block[0] - 1); /*0x3e529c*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F ) /*0x3e52ab*/
          invoke_watson(0, 0, 0, 0, 0); /*0x3e52c0*/
      }
      j_j_free(v8); /*0x3e52c7*/
    }
  }
}

// [24/30] Address: 0x3e52f0
// Method: LevelBrowserLayer::onClearSearch
// Hidden C++ exception states: #wind=1
__int64 __fastcall LevelBrowserLayer_onClearSearch(__int64 a1)
{
  __int64 result; // rax
  __int128 Src; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]
  __int64 v5; // [rsp+38h] [rbp-10h]

  result = *(_QWORD *)(a1 + 664); /*0x3e52f9*/
  if ( result ) /*0x3e5303*/
  {
    Src = 0; /*0x3e5308*/
    v4 = 0; /*0x3e530d*/
    v5 = 15; /*0x3e5316*/
    LOBYTE(Src) = 0; /*0x3e531f*/
    if ( (__int128 *)(result + 328) != &Src ) /*0x3e533d*/
      sub_3F5A0((void *)(result + 328), &Src, 0); /*0x3e5347*/
    sub_3C310(&Src); /*0x3e5352*/
    *(_DWORD *)(*(_QWORD *)(a1 + 664) + 424LL) = 0; /*0x3e535e*/
    return LevelBrowserLayer_loadPage(a1, *(_QWORD *)(a1 + 664)); /*0x3e5377*/
  }
  return result; /*0x3e5372*/
}

// [25/30] Address: 0x3e5640
// Method: LevelBrowserLayer::setTextPopupClosed
// Hidden C++ exception states: #wind=2
double __fastcall LevelBrowserLayer_setTextPopupClosed(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  void *v7; // rcx
  void *v8; // rdx
  _BYTE v10[32]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v11; // [rsp+48h] [rbp-30h]

  v11 = a3; /*0x3e5661*/
  if ( *(_QWORD *)(a1 + 96) ) /*0x3e5666*/
  {
    v5 = sub_3E4F0(v10, a3); /*0x3e5675*/
    v6 = v5; /*0x3e567a*/
    v7 = (void *)(*(_QWORD *)(a1 + 96) + 328LL); /*0x3e5686*/
    if ( v7 != (void *)v5 ) /*0x3e5690*/
    {
      v8 = (void *)v5; /*0x3e5692*/
      if ( *(_QWORD *)(v5 + 24) > 0xFu ) /*0x3e569a*/
        v8 = *(void **)v5; /*0x3e569c*/
      sub_3F5A0(v7, v8, *(_QWORD *)(v5 + 16)); /*0x3e56a3*/
    }
    sub_3C310(v6); /*0x3e56ac*/
    *(_DWORD *)(*(_QWORD *)(a1 + 96) + 424LL) = 0; /*0x3e56b5*/
    LevelBrowserLayer_loadPage(a1 - 568, *(_QWORD *)(a1 + 96)); /*0x3e56ca*/
  }
  return sub_3C310(a3); /*0x3e56d8*/
}

// [26/30] Address: 0x3e67e0
// Method: LevelBrowserLayer::FLAlert_Clicked
// Hidden C++ exception states: #wind=10
void __fastcall LevelBrowserLayer_FLAlert_Clicked(_QWORD *a1, __int64 a2, char a3)
{
  unsigned int v5; // edi
  char v6; // r14
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  cocos2d::CCObject *v12; // rsi
  int v13; // ebx
  __int64 v14; // r13
  int v15; // r14d
  int Stat; // eax
  cocos2d::CCString *v17; // rax
  const char *CString; // rax
  __int64 v19; // r8
  __int64 v20; // rbx
  struct cocos2d::CCString *v21; // rax
  void *v22; // rcx
  int v23; // ecx
  __int64 v24; // rdx
  _QWORD *i; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  unsigned int *v31; // rcx
  __int64 v32; // rax
  _QWORD *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned int v36; // ebx
  __int64 v37; // rcx
  cocos2d::CCArray *v38; // rbx
  unsigned int *v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // rbx
  struct cocos2d::CCScene *v42; // rdi
  __int64 v43; // rax
  struct cocos2d::CCScene *v44; // rbx
  __int64 v45; // rcx
  cocos2d::CCDirector *v46; // rax
  __int64 v47; // rcx
  cocos2d::CCArray *v48; // rbx
  __int64 v49; // rdx
  bool v50; // si
  __int64 v51; // rax
  unsigned int v52; // ebx
  __int64 v53; // rcx
  cocos2d::CCArray *v54; // rsi
  __int64 v55; // rdx
  bool v56; // bl
  struct cocos2d::CCObject *v57; // rbx
  __int64 v58; // rcx
  void *v59; // [rsp+30h] [rbp-29h]
  void *v60; // [rsp+30h] [rbp-29h]
  void *v61; // [rsp+30h] [rbp-29h]
  void *v62; // [rsp+30h] [rbp-29h]
  void *v63; // [rsp+30h] [rbp-29h]
  void *v64; // [rsp+30h] [rbp-29h]
  void *v65; // [rsp+30h] [rbp-29h]
  void *v66; // [rsp+38h] [rbp-21h]
  _WORD v67[8]; // [rsp+40h] [rbp-19h] BYREF
  __int64 v68; // [rsp+50h] [rbp-9h]
  __int64 v69; // [rsp+58h] [rbp-1h]
  void *Block[2]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v71; // [rsp+70h] [rbp+17h]
  unsigned __int64 v72; // [rsp+78h] [rbp+1Fh]

  v5 = 0; /*0x3e6813*/
  v6 = 0; /*0x3e6815*/
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) - 1; /*0x3e6824*/
  if ( !v7 ) /*0x3e6827*/
  {
    if ( !a3 ) /*0x3e6db8*/
      return; /*0x3e6db8*/
    v51 = a1[14]; /*0x3e6dbe*/
    if ( v51 ) /*0x3e6dc5*/
      v52 = *(_DWORD *)(v51 + 452); /*0x3e6dc7*/
    else
      v52 = 0; /*0x3e6dcf*/
    v53 = *(_QWORD *)&qword_905FB0; /*0x3e6dd1*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x3e6ddb*/
    {
      v63 = operator new(0x690u); /*0x3e6de7*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v63); /*0x3e6df4*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x3e6e05*/
      v53 = *(_QWORD *)&qword_905FB0; /*0x3e6e07*/
    }
    v54 = (cocos2d::CCArray *)sub_21BE00(v53, 0, v52); /*0x3e6e18*/
    v55 = a1[14]; /*0x3e6e1b*/
    v56 = 0; /*0x3e6e41*/
    if ( v55 ) /*0x3e6e22*/
    {
      sub_3E4F0(v67, v55 + 328); /*0x3e6e2f*/
      v6 = 5; /*0x3e6e34*/
      if ( v68 ) /*0x3e6e3f*/
        v56 = 1; /*0x3e6e22*/
    }
    if ( (v6 & 1) != 0 ) /*0x3e6e4b*/
      sub_3C310(v67); /*0x3e6e51*/
    if ( v56 ) /*0x3e6e58*/
    {
      sub_3E4F0(v67, a1[14] + 328LL); /*0x3e6e69*/
      v54 = (cocos2d::CCArray *)sub_3E5700(a1 - 69, v54, v67); /*0x3e6e81*/
    }
    if ( cocos2d::CCArray::count(v54) ) /*0x3e6e87*/
    {
      do /*0x3e6efa*/
      {
        v57 = cocos2d::CCArray::objectAtIndex(v54, v5); /*0x3e6e9c*/
        if ( !*((_BYTE *)v57 + 984) ) /*0x3e6e9f*/
        {
          v58 = *(_QWORD *)&qword_905FB0; /*0x3e6ea8*/
          if ( !*(_QWORD *)&qword_905FB0 ) /*0x3e6eb2*/
          {
            v64 = operator new(0x690u); /*0x3e6ebe*/
            *(_QWORD *)&qword_905FB0 = sub_214250(v64); /*0x3e6ecb*/
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x3e6edc*/
            v58 = *(_QWORD *)&qword_905FB0; /*0x3e6ede*/
          }
          sub_219730(v58, v57); /*0x3e6ee8*/
        }
        ++v5; /*0x3e6eed*/
      }
      while ( v5 < cocos2d::CCArray::count(v54) ); /*0x3e6efa*/
    }
    if ( !qword_906070 ) /*0x3e6f06*/
    {
      v65 = operator new(0x3D0u); /*0x3e6f12*/
      qword_906070 = sub_47C350(v65); /*0x3e6f1f*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x3e6f30*/
    }
    MusicDownloadManager_clearUnusedSongs(); /*0x3e6f39*/
    goto LABEL_89; /*0x3e6f39*/
  }
  v9 = v7 - 1; /*0x3e682d*/
  if ( !v9 ) /*0x3e6830*/
  {
    if ( !a3 ) /*0x3e6b56*/
      return; /*0x3e6b56*/
    v35 = a1[14]; /*0x3e6b5c*/
    if ( v35 ) /*0x3e6b63*/
    {
      v36 = *(_DWORD *)(v35 + 452); /*0x3e6b69*/
      if ( *(_DWORD *)(v35 + 320) == 103 ) /*0x3e6b76*/
      {
        v37 = *(_QWORD *)&qword_905FB0; /*0x3e6b7c*/
        if ( !*(_QWORD *)&qword_905FB0 ) /*0x3e6b86*/
        {
          v60 = operator new(0x690u); /*0x3e6b92*/
          *(_QWORD *)&qword_905FB0 = sub_214250(v60); /*0x3e6b9f*/
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x3e6bb0*/
          v37 = *(_QWORD *)&qword_905FB0; /*0x3e6bb2*/
        }
        v38 = (cocos2d::CCArray *)sub_21BFE0(v37, v36); /*0x3e6bc0*/
        if ( cocos2d::CCArray::count(v38) ) /*0x3e6bc6*/
        {
          do /*0x3e6c30*/
          {
            v39 = (unsigned int *)cocos2d::CCArray::objectAtIndex(v38, v5); /*0x3e6bdb*/
            v40 = *(_QWORD *)&qword_905FB0; /*0x3e6bde*/
            if ( !*(_QWORD *)&qword_905FB0 ) /*0x3e6be8*/
            {
              v61 = operator new(0x690u); /*0x3e6bf4*/
              *(_QWORD *)&qword_905FB0 = sub_214250(v61); /*0x3e6c01*/
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x3e6c12*/
              v40 = *(_QWORD *)&qword_905FB0; /*0x3e6c14*/
            }
            GameLevelManager_deleteLevelList(v40, v39); /*0x3e6c1e*/
            ++v5; /*0x3e6c23*/
          }
          while ( v5 < cocos2d::CCArray::count(v38) ); /*0x3e6c30*/
        }
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*(a1 - 69) + 992LL))(a1 - 69, 0); /*0x3e6c42*/
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*(a1 - 69) + 1008LL))(a1 - 69, 0); /*0x3e6c58*/
        v41 = a1[14]; /*0x3e6c5e*/
        v42 = (struct cocos2d::CCScene *)cocos2d::CCScene::create(); /*0x3e6c68*/
        *(_QWORD *)(cocos2d::CCApplication::sharedApplication() + 232) = v42; /*0x3e6c71*/
        v43 = sub_3DE4D0(v41); /*0x3e6c7b*/
        (*(void (__fastcall **)(struct cocos2d::CCScene *, __int64))(*(_QWORD *)v42 + 464LL))(v42, v43); /*0x3e6c90*/
        v44 = cocos2d::CCTransitionFade::create(0.5, v42); /*0x3e6ca4*/
        v46 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v45); /*0x3e6ca7*/
        cocos2d::CCDirector::replaceScene(v46, v44); /*0x3e6cb3*/
        return; /*0x3e6cb9*/
      }
    }
    else
    {
      v36 = 0; /*0x3e6cbe*/
    }
    v47 = *(_QWORD *)&qword_905FB0; /*0x3e6cc0*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x3e6cca*/
    {
      v62 = operator new(0x690u); /*0x3e6cd6*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v62); /*0x3e6ce3*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x3e6cf4*/
      v47 = *(_QWORD *)&qword_905FB0; /*0x3e6cf6*/
    }
    LOBYTE(v8) = 1; /*0x3e6d00*/
    v48 = (cocos2d::CCArray *)sub_21BE00(v47, v8, v36); /*0x3e6d07*/
    v49 = a1[14]; /*0x3e6d0a*/
    v50 = 0; /*0x3e6d30*/
    if ( v49 ) /*0x3e6d11*/
    {
      sub_3E4F0(v67, v49 + 328); /*0x3e6d1e*/
      v6 = 18; /*0x3e6d23*/
      if ( v68 ) /*0x3e6d2e*/
        v50 = 1; /*0x3e6d11*/
    }
    if ( (v6 & 2) != 0 ) /*0x3e6d3c*/
      sub_3C310(v67); /*0x3e6d42*/
    if ( v50 ) /*0x3e6d4a*/
    {
      sub_3E4F0(v67, a1[14] + 328LL); /*0x3e6d5b*/
      v48 = (cocos2d::CCArray *)sub_3E5700(a1 - 69, v48, v67); /*0x3e6d73*/
    }
    if ( cocos2d::CCArray::count(v48) ) /*0x3e6d79*/
    {
      do /*0x3e6daf*/
        *((_BYTE *)cocos2d::CCArray::objectAtIndex(v48, v5++) + 984) = 0; /*0x3e6d9b*/
      while ( v5 < cocos2d::CCArray::count(v48) ); /*0x3e6daf*/
    }
LABEL_89:
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*(a1 - 69) + 992LL))(a1 - 69, 0); /*0x3e6f3e*/
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*(a1 - 69) + 1008LL))(a1 - 69, 0); /*0x3e6f64*/
    sub_3E4C10(a1 - 69, 0); /*0x3e6f73*/
    return; /*0x3e6f73*/
  }
  v10 = v9 - 3; /*0x3e6836*/
  if ( v10 ) /*0x3e6839*/
  {
    v11 = v10 - 1; /*0x3e683f*/
    if ( v11 ) /*0x3e6842*/
    {
      if ( v11 == 1 ) /*0x3e684b*/
      {
        v12 = (cocos2d::CCObject *)a1[35]; /*0x3e6851*/
        if ( v12 ) /*0x3e685b*/
        {
          if ( a3 ) /*0x3e6863*/
          {
            v13 = *((_DWORD *)v12 + 248) - *((_DWORD *)v12 + 249); /*0x3e686f*/
            v14 = qword_905FE0; /*0x3e6875*/
            if ( !qword_905FE0 ) /*0x3e687f*/
            {
              v66 = operator new(0x3E8u); /*0x3e688b*/
              qword_905FE0 = sub_2D2B40(v66); /*0x3e6898*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x3e68a9*/
              v14 = qword_905FE0; /*0x3e68ab*/
            }
            if ( v13 > 0 && !(unsigned __int8)sub_2E3740(v14, (unsigned int)v13) ) /*0x3e68bf*/
            {
              if ( v13 <= 200000 ) /*0x3e68d2*/
              {
                v15 = 1; /*0x3e68e1*/
                if ( v13 > 100000 ) /*0x3e68ed*/
                  v15 = 3; /*0x3e68ed*/
              }
              else
              {
                v15 = 5; /*0x3e68d4*/
              }
              Stat = GameStatsManager_getStat(v14, (const char *)&word_732410); /*0x3e68fb*/
              if ( Stat >= v15 ) /*0x3e6903*/
              {
                sub_2D7950(v14, &word_732410, (unsigned int)(Stat - v15)); /*0x3e6919*/
                v17 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, (unsigned int)v13); /*0x3e6927*/
                CString = cocos2d::CCString::getCString(v17); /*0x3e6930*/
                *(_OWORD *)Block = 0; /*0x3e6939*/
                v71 = 0; /*0x3e693d*/
                v72 = 0; /*0x3e6941*/
                v19 = -1; /*0x3e6945*/
                do /*0x3e6953*/
                  ++v19; /*0x3e6950*/
                while ( CString[v19] ); /*0x3e6953*/
                sub_3C230(Block); /*0x3e6961*/
                v20 = *(_QWORD *)(v14 + 856); /*0x3e6967*/
                v21 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, (unsigned int)v15); /*0x3e6978*/
                cocos2d::CCDictionary::setObject(v20, v21, Block); /*0x3e6988*/
                if ( v72 > 0xF ) /*0x3e6997*/
                {
                  v22 = Block[0]; /*0x3e699c*/
                  if ( v72 + 1 >= 0x1000 ) /*0x3e69aa*/
                  {
                    v22 = (void *)*((_QWORD *)Block[0] - 1); /*0x3e69b0*/
                    if ( (unsigned __int64)((char *)Block[0] - (char *)v22 - 8) > 0x1F ) /*0x3e69bf*/
                      invoke_watson(0, 0, 0, 0, 0); /*0x3e69d0*/
                  }
                  j_j_free(v22); /*0x3e69d7*/
                }
                v71 = 0; /*0x3e69dc*/
                v72 = 15; /*0x3e69e0*/
                LOBYTE(Block[0]) = 0; /*0x3e69e8*/
                v67[7] = 0; /*0x3e69f4*/
                v68 = 13; /*0x3e69f8*/
                v69 = 15; /*0x3e6a00*/
                strcpy((char *)v67, "buyItem03.ogg"); /*0x3e6a10*/
                v23 = qword_905F60; /*0x3e6a2c*/
                if ( !qword_905F60 ) /*0x3e6a36*/
                {
                  v59 = operator new(0x8A8u); /*0x3e6a42*/
                  qword_905F60 = sub_5AE20(v59); /*0x3e6a4f*/
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x3e6a60*/
                  v23 = qword_905F60; /*0x3e6a62*/
                }
                FMODAudioEngine_playEffect(v23, (__int64)v67); /*0x3e6a6d*/
                v26 = (unsigned int)(*((_DWORD *)v12 + 248) - *((_DWORD *)v12 + 249)); /*0x3e6a79*/
                v27 = a1[7]; /*0x3e6a80*/
                if ( v27 ) /*0x3e6a87*/
                {
                  v28 = *(_QWORD *)(v27 + 544); /*0x3e6a89*/
                  if ( v28 ) /*0x3e6a93*/
                  {
                    v29 = *(_QWORD *)(v28 + 424); /*0x3e6a95*/
                    if ( v29 ) /*0x3e6a9f*/
                    {
                      v30 = *(_QWORD *)(v29 + 584); /*0x3e6aa1*/
                      if ( v30 ) /*0x3e6aab*/
                      {
                        v31 = *(unsigned int **)(v30 + 56); /*0x3e6aad*/
                        v32 = *v31; /*0x3e6ab1*/
                        if ( (_DWORD)v32 ) /*0x3e6ab5*/
                        {
                          v33 = (_QWORD *)*((_QWORD *)v31 + 2); /*0x3e6ab7*/
                          for ( i = &v33[v32 - 1]; v33 <= i; ++v33 ) /*0x3e6ac6*/
                          {
                            v24 = *v33; /*0x3e6ac8*/
                            if ( !*v33 ) /*0x3e6ac8*/
                              break; /*0x3e6ac8*/
                            if ( *(_DWORD *)(*(_QWORD *)(v24 + 568) + 1412LL) == (_DWORD)v26 ) /*0x3e6ade*/
                            {
                              sub_146800(*v33); /*0x3e6b0d*/
                              goto LABEL_36; /*0x3e6b12*/
                            }
                          }
                        }
                      }
                    }
                  }
                }
                sub_3E7A90(a1 - 69, v24, i, v26); /*0x3e6ae9*/
              }
            }
          }
LABEL_36:
          a1[35] = 0; /*0x3e6af5*/
          cocos2d::CCObject::release(v12); /*0x3e6aff*/
        }
      }
    }
    else if ( a3 ) /*0x3e6b16*/
    {
      v34 = cocos2d::CCApplication::sharedApplication(); /*0x3e6b1c*/
      (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)v34 + 96LL))(v34, "https://www.boomlings.com/GDRating"); /*0x3e6b33*/
    }
  }
  else if ( a3 ) /*0x3e6b3d*/
  {
    sub_3E6370(a1 - 69); /*0x3e6b4a*/
  }
}

// [27/30] Address: 0x3e6fa0
// Method: LevelBrowserLayer::onEnter
void __fastcall LevelBrowserLayer_onEnter(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // ecx

  cocos2d::CCLayer::onEnter((cocos2d::CCLayer *)a1); /*0x3e6fa9*/
  if ( *(_BYTE *)(a1 + 592) ) /*0x3e6faf*/
  {
    v2 = *(_QWORD *)(a1 + 664); /*0x3e6fb8*/
    if ( v2 ) /*0x3e6fc2*/
    {
      v3 = *(_DWORD *)(v2 + 320); /*0x3e6fc4*/
      if ( v3 == 25 || v3 == 26 ) /*0x3e6fd2*/
      {
        sub_3E1980(a1, 0); /*0x3e7022*/
      }
      else if ( ((v3 - 98) & 0xFFFFFFFB) != 0 ) /*0x3e6fdc*/
      {
        if ( v3 != 9 ) /*0x3e6fe1*/
        {
          LevelBrowserLayer_loadPage(a1, v2); /*0x3e6fe6*/
          *(_BYTE *)(a1 + 592) = 1; /*0x3e6feb*/
          return; /*0x3e6ff7*/
        }
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 608) + 544LL) ) /*0x3e6fff*/
        {
          CustomListView_reloadAll(); /*0x3e700b*/
          *(_BYTE *)(a1 + 592) = 1; /*0x3e7010*/
          return; /*0x3e701c*/
        }
      }
    }
  }
  *(_BYTE *)(a1 + 592) = 1; /*0x3e7027*/
}

// [28/30] Address: 0x3e7040
// Method: LevelBrowserLayer::cellPerformedAction
// Hidden C++ exception states: #wind=4
char __fastcall LevelBrowserLayer_cellPerformedAction(_QWORD *a1, __int64 a2, int a3, int a4)
{
  __int64 v6; // rcx
  __int64 v8; // rax
  void (__fastcall *v9)(cocos2d::CCObject *); // rdx
  cocos2d::CCObject *v10; // rcx
  __int64 (__fastcall ***v11)(_QWORD); // rcx
  cocos2d::CCObject *v12; // r14
  int v13; // edi
  int v14; // esi
  __int64 v15; // rcx
  int Stat; // eax
  const char *v17; // r8
  cocos2d::CCString *v18; // rax
  char *CString; // rax
  __int64 v20; // rbx
  size_t v21; // r8
  void **v22; // rdx
  int v23; // eax
  __int64 v24; // rbx
  void *v25; // rcx
  cocos2d::CCObject *v26; // rcx
  _QWORD *v27; // rsi
  cocos2d::CCObject *v28; // rbx
  void *v29; // [rsp+50h] [rbp-51h]
  __int128 v30; // [rsp+60h] [rbp-41h] BYREF
  __int64 v31; // [rsp+70h] [rbp-31h]
  __int64 v32; // [rsp+78h] [rbp-29h]
  _BYTE v33[32]; // [rsp+80h] [rbp-21h] BYREF
  void *Block[2]; // [rsp+A0h] [rbp-1h] BYREF
  __int64 v35; // [rsp+B0h] [rbp+Fh]
  unsigned __int64 v36; // [rsp+B8h] [rbp+17h]

  if ( a3 == 20 ) /*0x3e706b*/
  {
    if ( a4 == 1 ) /*0x3e7075*/
    {
      v6 = a1[4]; /*0x3e7077*/
      if ( v6 ) /*0x3e707e*/
      {
        if ( *(_QWORD *)(v6 + 544) ) /*0x3e7080*/
          CustomListView_reloadAll(); /*0x3e708c*/
      }
      return 0; /*0x3e708c*/
    }
    if ( a4 == 6 ) /*0x3e7099*/
    {
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*(a1 - 72) + 1056LL))(a1 - 72, 0); /*0x3e70a7*/
      *(_DWORD *)(*(_QWORD *)(a2 + 560) + 204LL) = 0; /*0x3e70b6*/
      v8 = SetupSmartTemplateLayer_create(*(_QWORD *)(a2 + 560)); /*0x3e70c3*/
      v9 = *(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v8 + 1064LL); /*0x3e70cb*/
      v10 = (cocos2d::CCObject *)v8; /*0x3e70d2*/
LABEL_9:
      v9(v10); /*0x3e70d5*/
      return 1; /*0x3e70f2*/
    }
    return 0; /*0x3e7099*/
  }
  if ( a4 == 9 ) /*0x3e70f7*/
  {
    v12 = (cocos2d::CCObject *)sub_146790(a2); /*0x3e7134*/
    v13 = *((_DWORD *)v12 + 248) - *((_DWORD *)v12 + 249); /*0x3e713d*/
    if ( v13 <= 200000 ) /*0x3e7149*/
    {
      v14 = 1; /*0x3e7152*/
      if ( v13 > 100000 ) /*0x3e7162*/
        v14 = 3; /*0x3e7162*/
    }
    else
    {
      v14 = 5; /*0x3e714b*/
    }
    v15 = qword_905FE0; /*0x3e7165*/
    if ( !qword_905FE0 ) /*0x3e716f*/
    {
      v29 = operator new(0x3E8u); /*0x3e717b*/
      qword_905FE0 = sub_2D2B40(v29); /*0x3e7188*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x3e7199*/
      v15 = qword_905FE0; /*0x3e719b*/
    }
    Stat = GameStatsManager_getStat(v15, (const char *)&word_732410); /*0x3e71a9*/
    if ( Stat < v14 ) /*0x3e71b0*/
    {
      if ( v13 <= 200000 ) /*0x3e71bc*/
      {
        v17 = "<cs>Daily</c> Level"; /*0x3e71ce*/
        if ( v13 > 100000 ) /*0x3e71db*/
          v17 = "<cr>Weekly</c> Demon"; /*0x3e71db*/
      }
      else
      {
        v17 = "<cd>Event</c> Level"; /*0x3e71be*/
      }
      *(_OWORD *)Block = 0; /*0x3e71e2*/
      v35 = 0; /*0x3e71e8*/
      v36 = 15; /*0x3e71ec*/
      LOBYTE(Block[0]) = 0; /*0x3e71f4*/
      if ( v14 == 1 ) /*0x3e71fb*/
        v18 = cocos2d::CCString::createWithFormat("You need a <cy>key</c> to\nunlock this %s", v17); /*0x3e7207*/
      else
        v18 = cocos2d::CCString::createWithFormat( /*0x3e721a*/
                "You need <cl>%i</c> more <cy>keys</c> to\nunlock this %s",
                v14 - Stat,
                v17);
      CString = (char *)cocos2d::CCString::getCString(v18); /*0x3e7223*/
      v20 = -1; /*0x3e7230*/
      v21 = -1; /*0x3e7237*/
      do /*0x3e7243*/
        ++v21; /*0x3e7240*/
      while ( CString[v21] ); /*0x3e7243*/
      sub_3F5A0(Block, CString, v21); /*0x3e724a*/
      v22 = Block; /*0x3e724f*/
      if ( v36 > 0xF ) /*0x3e7258*/
        v22 = (void **)Block[0]; /*0x3e7258*/
      v30 = 0; /*0x3e7260*/
      v31 = 0; /*0x3e7264*/
      v32 = 0; /*0x3e7268*/
      do /*0x3e7273*/
        ++v20; /*0x3e7270*/
      while ( *((_BYTE *)v22 + v20) ); /*0x3e7273*/
      sub_3C230(&v30); /*0x3e7280*/
      v23 = sub_3E4F0(v33, &v30); /*0x3e7295*/
      v24 = FLAlertLayer_create_0(0, (unsigned int)"Locked", v23, (unsigned int)"OK", 0, 1133903872, 0, 0, 1065353216); /*0x3e72e1*/
      sub_3C310(&v30); /*0x3e72e8*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 1064LL))(v24); /*0x3e72fa*/
      if ( v36 > 0xF ) /*0x3e7305*/
      {
        v25 = Block[0]; /*0x3e730e*/
        if ( v36 + 1 >= 0x1000 ) /*0x3e731c*/
        {
          v25 = (void *)*((_QWORD *)Block[0] - 1); /*0x3e7322*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v25 - 8) > 0x1F ) /*0x3e7331*/
            invoke_watson(0, 0, 0, 0, 0); /*0x3e7342*/
        }
        j_j_free(v25); /*0x3e7349*/
      }
      return 1; /*0x3e734e*/
    }
    cocos2d::CCObject::retain(v12); /*0x3e7356*/
    v26 = (cocos2d::CCObject *)a1[32]; /*0x3e735c*/
    if ( v26 ) /*0x3e7366*/
      cocos2d::CCObject::release(v26); /*0x3e7368*/
    a1[32] = v12; /*0x3e736e*/
    v27 = a1 - 3; /*0x3e7381*/
    if ( a1 == (_QWORD *)((char *)&loc_23D + 3) ) /*0x3e7385*/
      v27 = 0; /*0x3e7387*/
    v28 = (cocos2d::CCObject *)operator new(0x298u); /*0x3e7393*/
    FLAlertLayer_FLAlertLayer(v28); /*0x3e739d*/
    *(_QWORD *)v28 = &DailyRecallUnlockPopup::`vftable'; /*0x3e73a9*/
    *((_QWORD *)v28 + 40) = &DailyRecallUnlockPopup::`vftable'; /*0x3e73b3*/
    *((_QWORD *)v28 + 41) = &DailyRecallUnlockPopup::`vftable'; /*0x3e73c1*/
    *((_QWORD *)v28 + 42) = &DailyRecallUnlockPopup::`vftable'; /*0x3e73cf*/
    *((_QWORD *)v28 + 43) = &DailyRecallUnlockPopup::`vftable'; /*0x3e73dd*/
    *((_QWORD *)v28 + 44) = &DailyRecallUnlockPopup::`vftable'; /*0x3e73eb*/
    *((_QWORD *)v28 + 51) = &DailyRecallUnlockPopup::`vftable'; /*0x3e73f9*/
    *((_QWORD *)v28 + 54) = &DailyRecallUnlockPopup::`vftable'; /*0x3e7407*/
    *((_QWORD *)v28 + 68) = &DailyRecallUnlockPopup::`vftable'; /*0x3e7415*/
    if ( (unsigned __int8)SetGroupIDLayer_init(v28, v27, v12) ) /*0x3e7425*/
    {
      cocos2d::CCObject::autorelease(v28); /*0x3e7431*/
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v28 + 8LL))(v28, 1); /*0x3e7441*/
      v28 = 0; /*0x3e7444*/
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v28 + 64LL))(v28, 7); /*0x3e7452*/
    v9 = *(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v28 + 1064LL); /*0x3e7458*/
    v10 = v28; /*0x3e7466*/
    if ( (char *)v9 == (char *)FLAlertLayer_show ) /*0x3e746c*/
    {
      FLAlertLayer_show(v28); /*0x3e7472*/
      return 1; /*0x3e7477*/
    }
    goto LABEL_9; /*0x3e746c*/
  }
  if ( a4 == 10 ) /*0x3e70fd*/
  {
    sub_3E7790(a1 - 72); /*0x3e7125*/
    return 1; /*0x3e712a*/
  }
  v11 = (__int64 (__fastcall ***)(_QWORD))a1[26]; /*0x3e70ff*/
  if ( !v11 ) /*0x3e7109*/
    return 0; /*0x3e7093*/
  return (**v11)(v11); /*0x3e70d9*/
}

// [29/30] Address: 0x3e7b10
// Method: LevelBrowserLayer::registerWithTouchDispatcher
void __fastcall LevelBrowserLayer_registerWithTouchDispatcher(_BYTE *a1)
{
  __int64 v2; // rax
  struct cocos2d::CCTouchDelegate *v3; // rbx
  cocos2d::CCTouchDispatcher *v4; // rax

  if ( a1[748] ) /*0x3e7b16*/
  {
    v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x3e7b27*/
    v3 = (struct cocos2d::CCTouchDelegate *)(a1 + 320); /*0x3e7b2f*/
    if ( !a1 ) /*0x3e7b39*/
      v3 = 0; /*0x3e7b39*/
    v4 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2); /*0x3e7b4a*/
    cocos2d::CCTouchDispatcher::addTargetedDelegate(v4, v3, -500, 1); /*0x3e7b66*/
  }
  else
  {
    cocos2d::CCLayer::registerWithTouchDispatcher((cocos2d::CCLayer *)a1); /*0x3e7b72*/
  }
}

// [30/30] Address: 0x44d7e0
// Method: LevelBrowserLayer::onDeleteSelected
// Hidden C++ exception states: #wind=5
double __fastcall LevelBrowserLayer_onDeleteSelected(__int64 *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  double result; // xmm0_8
  __int128 v16; // [rsp+50h] [rbp-29h] BYREF
  __int64 v17; // [rsp+60h] [rbp-19h]
  __int64 v18; // [rsp+68h] [rbp-11h]
  __int128 *v19; // [rsp+70h] [rbp-9h]
  __int128 *v20; // [rsp+78h] [rbp-1h]
  __int128 v21; // [rsp+80h] [rbp+7h] BYREF
  __int64 v22; // [rsp+90h] [rbp+17h]
  __int64 v23; // [rsp+98h] [rbp+1Fh]
  _BYTE v24[16]; // [rsp+A0h] [rbp+27h] BYREF
  __int64 v25; // [rsp+B0h] [rbp+37h]

  v2 = a1[129]; /*0x44d80d*/
  if ( v2 && *(_DWORD *)(v2 + 328) - *(_DWORD *)(v2 + 332) > 0 ) /*0x44d82b*/
  {
    sub_44C5F0(a1); /*0x44d834*/
    sub_44CD20(a1); /*0x44d83c*/
    sub_262F00(a1[129], v24); /*0x44d84c*/
    if ( v25 ) /*0x44d857*/
    {
      v9 = *(_QWORD *)&qword_905FB0; /*0x44da17*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x44da21*/
      {
        v19 = (__int128 *)operator new(0x690u); /*0x44da2d*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v19); /*0x44da3a*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x44da4b*/
        v9 = *(_QWORD *)&qword_905FB0; /*0x44da4d*/
      }
      *(_QWORD *)(v9 + 1488) = a1 + 125; /*0x44da54*/
      v19 = &v21; /*0x44da5f*/
      v10 = sub_3E4F0(&v21, v24); /*0x44da70*/
      v11 = *(_DWORD *)(a1[129] + 328) - *(_DWORD *)(a1[129] + 332); /*0x44da80*/
      v12 = *(_QWORD *)&qword_905FB0; /*0x44da86*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x44da90*/
      {
        v20 = (__int128 *)operator new(0x690u); /*0x44da9c*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v20); /*0x44daa9*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x44daba*/
        v12 = *(_QWORD *)&qword_905FB0; /*0x44dabd*/
      }
      if ( (unsigned __int8)sub_2558A0(v12, v11, v10) ) /*0x44dac9*/
      {
        v13 = a1[148]; /*0x44dad6*/
        if ( v13 ) /*0x44dae2*/
        {
          *(_QWORD *)(v13 + 664) = 0; /*0x44dae4*/
          a1[148] = 0; /*0x44daeb*/
        }
        v16 = 0; /*0x44daf5*/
        *(_QWORD *)&v16 = sub_3C460(32); /*0x44db0b*/
        v17 = 21; /*0x44db0f*/
        v18 = 31; /*0x44db17*/
        strcpy((char *)v16, "Uploading controls..."); /*0x44db26*/
        v14 = sub_39D2A0(a1 + 126, &v16); /*0x44db4b*/
        a1[148] = v14; /*0x44db50*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 1064LL))(v14); /*0x44db64*/
      }
    }
    else if ( *(_QWORD *)(a1[129] + 2040) ) /*0x44d867*/
    {
      v16 = 0; /*0x44d875*/
      *(_QWORD *)&v16 = sub_3C460(64); /*0x44d890*/
      v17 = 63; /*0x44d894*/
      v18 = 63; /*0x44d89c*/
      strcpy((char *)v16, "Nothing selected. Remove the uploaded controls from this level?"); /*0x44d8ab*/
      v20 = &v16; /*0x44d8f7*/
      v3 = sub_3E4F0(&v21, &v16); /*0x44d903*/
      v4 = FLAlertLayer_create_0( /*0x44d95b*/
             (int)a1 + 1024,
             (unsigned int)"Remove Controls",
             v3,
             (unsigned int)"Cancel",
             (__int64)"Remove",
             1132068864,
             0,
             0,
             1065353216);
      sub_3C310(&v16); /*0x44d962*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 1064LL))(v4); /*0x44d974*/
    }
    else
    {
      v19 = &v21; /*0x44d97d*/
      v21 = 0; /*0x44d981*/
      v22 = 0; /*0x44d987*/
      v23 = 15; /*0x44d98b*/
      LOBYTE(v21) = 0; /*0x44d993*/
      v16 = 0; /*0x44d996*/
      *(_QWORD *)&v16 = sub_3C460(32); /*0x44d9ac*/
      v17 = 16; /*0x44d9b0*/
      v18 = 31; /*0x44d9b8*/
      strcpy((char *)v16, "Nothing selected"); /*0x44d9c7*/
      v5 = *a1; /*0x44d9ce*/
      v8 = sub_3A4CA0(&v16, v6, v7, 150, &v21); /*0x44d9f4*/
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v5 + 456))(a1, v8, 100); /*0x44da05*/
    }
    return sub_3C310(v24); /*0x44db6b*/
  }
  return result; /*0x44db70*/
}

// Address: 0x3e07d0
// Method: LevelBrowserLayer::loadPage
// Hidden C++ exception states: #wind=20
double __fastcall LevelBrowserLayer_loadPage(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rcx
  cocos2d::CCObject *v5; // rcx
  __int64 Key; // rax
  __int64 v7; // r15
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r13
  unsigned int v14; // r14d
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  const char *SearchKey; // rbx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int128 *v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int128 *v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r8
  __int128 *v30; // r8
  __int128 *v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int128 *v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rax
  void **v37; // rdx
  __int128 *v38; // rdx
  __int64 v39; // rax
  void **v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r13
  cocos2d::CCArray *v46; // rdi
  __int64 v47; // rax
  unsigned int *v48; // rbx
  __int64 v49; // rax
  struct cocos2d::CCObject **v50; // rbx
  struct cocos2d::CCObject **v51; // r13
  struct cocos2d::CCObject *v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // r13
  __int64 v56; // rax
  unsigned int *v57; // rbx
  __int64 v58; // rax
  struct cocos2d::CCObject **v59; // rbx
  struct cocos2d::CCObject **v60; // r13
  struct cocos2d::CCObject *v61; // rdx
  __int64 v62; // rbx
  __int64 v63; // rcx
  __int64 v64; // rax
  bool v65; // bl
  __int64 v66; // rcx
  __int64 v67; // rdx
  cocos2d::CCArray *v68; // r13
  __int64 v69; // rcx
  int v70; // ebx
  signed int v71; // r12d
  int v72; // eax
  unsigned int v73; // ebx
  struct cocos2d::CCObject *v74; // rax
  unsigned int v75; // ebx
  __int64 v76; // rdx
  cocos2d::CCString *v77; // rax
  const char *CString; // rax
  __int64 v79; // r8
  __int128 *v80; // r8
  __int128 *v81; // r8
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rax
  const struct cocos2d::CCPoint *v85; // rax
  char *v86; // rdi
  __int64 v87; // rbx
  const struct cocos2d::CCPoint *v88; // rax
  const struct cocos2d::CCPoint *v89; // rax
  const struct cocos2d::CCPoint *v90; // rax
  __int64 v91; // rax
  void **v93; // [rsp+B0h] [rbp-80h] BYREF
  void **v94; // [rsp+B8h] [rbp-78h] BYREF
  int v95; // [rsp+C0h] [rbp-70h]
  __int128 v96; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v97; // [rsp+D8h] [rbp-58h]
  __int64 v98; // [rsp+E0h] [rbp-50h]
  void *v99; // [rsp+E8h] [rbp-48h] BYREF
  void *Src[2]; // [rsp+F0h] [rbp-40h] BYREF
  size_t Size; // [rsp+100h] [rbp-30h]
  unsigned __int64 v102; // [rsp+108h] [rbp-28h]
  void *v103[2]; // [rsp+110h] [rbp-20h] BYREF
  size_t v104; // [rsp+120h] [rbp-10h]
  unsigned __int64 v105; // [rsp+128h] [rbp-8h]
  char v106[32]; // [rsp+130h] [rbp+0h] BYREF
  __int128 v107; // [rsp+150h] [rbp+20h] BYREF
  __int64 v108; // [rsp+160h] [rbp+30h]
  __int64 v109; // [rsp+168h] [rbp+38h]
  __int128 v110; // [rsp+170h] [rbp+40h] BYREF
  __int64 v111; // [rsp+180h] [rbp+50h]
  unsigned __int64 v112; // [rsp+188h] [rbp+58h]

  v4 = *(_QWORD *)(a1 + 664);
  if ( (unsigned int *)v4 != a2 )
  {
    if ( a2 )
      cocos2d::CCObject::retain((cocos2d::CCObject *)a2);
    v5 = *(cocos2d::CCObject **)(a1 + 664);
    if ( v5 )
      cocos2d::CCObject::release(v5);
    *(_QWORD *)(a1 + 664) = a2;
    v4 = (__int64)a2;
  }
  Key = GJSearchObject_getKey(v4);
  v110 = 0;
  v111 = 0;
  v112 = 0;
  v7 = -1;
  v8 = -1;
  do
    ++v8;
  while ( *(_BYTE *)(Key + v8) );
  sub_3C230(&v110);
  LOBYTE(v9) = 1;
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 736) + 336LL))(*(_QWORD *)(a1 + 736), v9);
  v11 = *(_QWORD *)(a1 + 648);
  if ( v11 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 336LL))(v11, 0);
  v12 = *(_QWORD *)(a1 + 640);
  if ( v12 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 336LL))(v12, 0);
  if ( !*(_BYTE *)(a1 + 764) )
  {
    if ( *(int *)(*(_QWORD *)(a1 + 664) + 424LL) <= 0 )
      v10 = 0;
    else
      LOBYTE(v10) = 1;
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 624) + 336LL))(*(_QWORD *)(a1 + 624), v10);
  }
  v13 = *(_QWORD *)(a1 + 664);
  v14 = *(_DWORD *)(v13 + 320);
  switch ( v14 )
  {
    case 'c':
      v42 = *(_QWORD *)&qword_905FB0;
      if ( !*(_QWORD *)&qword_905FB0 )
      {
        v93 = (void **)operator new(0x690u);
        *(_QWORD *)&qword_905FB0 = sub_214250(v93);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
        v42 = *(_QWORD *)&qword_905FB0;
      }
      v10 = 0;
      goto LABEL_121;
    case 'b':
      v95 = *(_DWORD *)(v13 + 452);
      v53 = sub_466AC0(v12, v10);
      v55 = v53;
      if ( v95 <= 0 )
      {
        v46 = *(cocos2d::CCArray **)(v53 + 368);
        goto LABEL_123;
      }
      v46 = (cocos2d::CCArray *)cocos2d::CCArray::create(v54);
      v56 = *(_QWORD *)(v55 + 368);
      if ( !v56 )
        goto LABEL_123;
      v57 = *(unsigned int **)(v56 + 56);
      v58 = *v57;
      if ( !(_DWORD)v58 )
        goto LABEL_123;
      v59 = (struct cocos2d::CCObject **)*((_QWORD *)v57 + 2);
      v60 = &v59[v58 - 1];
      if ( v59 > v60 )
        goto LABEL_123;
      while ( 1 )
      {
        v61 = *v59;
        if ( !*v59 )
          break;
        if ( *((_DWORD *)v61 + 247) == v95 )
          cocos2d::CCArray::addObject(v46, v61);
        if ( ++v59 > v60 )
        {
          v7 = -1;
          goto LABEL_123;
        }
      }
LABEL_100:
      v7 = -1;
      goto LABEL_123;
    case 'f':
      v95 = *(_DWORD *)(v13 + 452);
      v43 = sub_466AC0(v12, v10);
      v45 = v43;
      if ( v95 <= 0 )
      {
        v46 = *(cocos2d::CCArray **)(v43 + 376);
        goto LABEL_123;
      }
      v46 = (cocos2d::CCArray *)cocos2d::CCArray::create(v44);
      v47 = *(_QWORD *)(v45 + 376);
      if ( !v47 )
        goto LABEL_123;
      v48 = *(unsigned int **)(v47 + 56);
      v49 = *v48;
      if ( !(_DWORD)v49 )
        goto LABEL_123;
      v50 = (struct cocos2d::CCObject **)*((_QWORD *)v48 + 2);
      v51 = &v50[v49 - 1];
      if ( v50 > v51 )
        goto LABEL_123;
      do
      {
        v52 = *v50;
        if ( !*v50 )
          break;
        if ( *((_DWORD *)v52 + 92) == v95 )
          cocos2d::CCArray::addObject(v46, v52);
        ++v50;
      }
      while ( v50 <= v51 );
      goto LABEL_100;
  }
  if ( v14 != 100 )
  {
    if ( v14 == 101 )
    {
      v62 = *(_QWORD *)&qword_905FB0;
      if ( !*(_QWORD *)&qword_905FB0 )
      {
        v93 = (void **)operator new(0x690u);
        *(_QWORD *)&qword_905FB0 = sub_214250(v93);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
        v62 = *(_QWORD *)&qword_905FB0;
      }
      v46 = (cocos2d::CCArray *)cocos2d::CCArray::create(v12);
      cocos2d::CCArray::addObjectsFromArray(v46, *(struct cocos2d::CCArray **)(v62 + 1656));
      goto LABEL_123;
    }
    if ( v14 != 103 )
    {
      if ( !*(_BYTE *)(a1 + 764) )
      {
        v93 = (void **)&v107;
        v94 = (void **)&v96;
        sub_3E4F0(&v107, v13 + 392);
        v16 = v15;
        sub_3E4F0(&v96, v13 + 360);
        v18 = v17;
        sub_3E4F0(v106, v13 + 328);
        SearchKey = GJSearchObject_getSearchKey(
                      *(_DWORD *)(v13 + 320),
                      v19,
                      v18,
                      v16,
                      *(_DWORD *)(v13 + 424) + 1,
                      *(_BYTE *)(v13 + 428),
                      *(_BYTE *)(v13 + 436),
                      *(_BYTE *)(v13 + 438),
                      *(_DWORD *)(v13 + 456),
                      *(_BYTE *)(v13 + 439),
                      *(_BYTE *)(v13 + 440),
                      *(_BYTE *)(v13 + 460),
                      *(_BYTE *)(v13 + 461),
                      *(_BYTE *)(v13 + 429),
                      *(_BYTE *)(v13 + 441),
                      *(_BYTE *)(v13 + 442),
                      *(_BYTE *)(v13 + 443),
                      *(_BYTE *)(v13 + 444),
                      *(_BYTE *)(v13 + 437),
                      *(_DWORD *)(v13 + 448),
                      *(_DWORD *)(v13 + 452),
                      *(_DWORD *)(v13 + 464));
        v21 = *(_QWORD *)&qword_905FB0;
        if ( !*(_QWORD *)&qword_905FB0 )
        {
          v93 = (void **)operator new(0x690u);
          *(_QWORD *)&qword_905FB0 = sub_214250(v93);
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
          v21 = *(_QWORD *)&qword_905FB0;
        }
        if ( sub_21E690(v21, SearchKey) )
          LOBYTE(v22) = 1;
        else
          v22 = 0;
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 616) + 336LL))(*(_QWORD *)(a1 + 616), v22);
      }
      v23 = &v110;
      if ( v112 > 0xF )
        v23 = (__int128 *)v110;
      v24 = *(_QWORD *)&qword_905FB0;
      if ( !*(_QWORD *)&qword_905FB0 )
      {
        v93 = (void **)operator new(0x690u);
        *(_QWORD *)&qword_905FB0 = sub_214250(v93);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
        v24 = *(_QWORD *)&qword_905FB0;
      }
      v25 = sub_21E690(v24, v23);
      if ( v25 )
      {
        v26 = &v110;
        if ( v112 > 0xF )
          v26 = (__int128 *)v110;
        v27 = *(_QWORD *)&qword_905FB0;
        if ( !*(_QWORD *)&qword_905FB0 )
        {
          v93 = (void **)operator new(0x690u);
          *(_QWORD *)&qword_905FB0 = sub_214250(v93);
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
          v27 = *(_QWORD *)&qword_905FB0;
        }
        v28 = sub_21E790(v27, v26);
        v107 = 0;
        v108 = 0;
        v109 = 0;
        v29 = -1;
        do
          ++v29;
        while ( *(_BYTE *)(v28 + v29) );
        sub_3C230(&v107);
        v30 = &v110;
        if ( v112 > 0xF )
          v30 = (__int128 *)v110;
        (*(void (__fastcall **)(__int64, __int128 *, __int128 *))(*(_QWORD *)(a1 + 544) + 32LL))(a1 + 544, &v107, v30);
        v31 = &v110;
        if ( v112 > 0xF )
          v31 = (__int128 *)v110;
        (**(void (__fastcall ***)(__int64, __int64, __int128 *, _QWORD))(a1 + 544))(a1 + 544, v25, v31, v14);
      }
      else
      {
        if ( !*(_BYTE *)(a1 + 792) )
          sub_3E1980(a1, 0);
        v32 = *(_QWORD *)&qword_905FB0;
        if ( !*(_QWORD *)&qword_905FB0 )
        {
          v93 = (void **)operator new(0x690u);
          *(_QWORD *)&qword_905FB0 = sub_214250(v93);
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
          v32 = *(_QWORD *)&qword_905FB0;
        }
        *(_QWORD *)(v32 + 1352) = a1 + 544;
        if ( v14 == 14 )
        {
          GameLevelManager_getUsers(v32, (__int64)a2);
        }
        else if ( v14 == 9 )
        {
          GameLevelManager_getMapPacks(v32, (__int64)a2);
        }
        else if ( *(_DWORD *)(*(_QWORD *)(a1 + 664) + 464LL) == 1 )
        {
          sub_22A840(v32, a2);
        }
        else
        {
          sub_2278C0(v32, a2);
        }
        v33 = *(_QWORD *)(a1 + 672);
        if ( v33 )
          (**(void (__fastcall ***)(__int64, const char *))(v33 + 360))(v33 + 360, " ");
      }
      goto LABEL_60;
    }
    v63 = *(_QWORD *)&qword_905FB0;
    if ( !*(_QWORD *)&qword_905FB0 )
    {
      v93 = (void **)operator new(0x690u);
      *(_QWORD *)&qword_905FB0 = sub_214250(v93);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
      v63 = *(_QWORD *)&qword_905FB0;
    }
    v64 = sub_21BFE0(v63, a2[113]);
    goto LABEL_122;
  }
  v42 = *(_QWORD *)&qword_905FB0;
  if ( !*(_QWORD *)&qword_905FB0 )
  {
    v93 = (void **)operator new(0x690u);
    *(_QWORD *)&qword_905FB0 = sub_214250(v93);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
    v42 = *(_QWORD *)&qword_905FB0;
  }
  LOBYTE(v10) = 1;
LABEL_121:
  v64 = sub_21BE00(v42, v10, a2[113]);
LABEL_122:
  v46 = (cocos2d::CCArray *)v64;
LABEL_123:
  sub_3E4F0(&v107, *(_QWORD *)(a1 + 664) + 328LL);
  v65 = v108 != 0;
  sub_3C310(&v107);
  if ( v65 )
  {
    sub_3E4F0(&v107, a2 + 82);
    v46 = (cocos2d::CCArray *)sub_3E5700(a1, v46, &v107);
    v66 = *(_QWORD *)(a1 + 640);
    if ( v66 )
    {
      LOBYTE(v67) = 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v66 + 336LL))(v66, v67);
    }
  }
  v68 = (cocos2d::CCArray *)cocos2d::CCArray::create(v66);
  v93 = (void **)v68;
  LODWORD(v99) = *(_DWORD *)(*(_QWORD *)(a1 + 664) + 424LL);
  v69 = qword_905FD0;
  if ( !qword_905FD0 )
  {
    v94 = (void **)operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v94);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
    v69 = qword_905FD0;
  }
  v70 = 10;
  if ( GameManager_getGameVariable(v69, "0093") )
    v70 = 20;
  v95 = v70;
  LODWORD(v94) = cocos2d::CCArray::count(v46);
  v71 = (_DWORD)v99 * v70;
  v72 = cocos2d::CCArray::count(v46);
  *(_DWORD *)(a1 + 744) = (int)(float)(ceilf((float)v72 / (float)v70) - 1.0);
  if ( v46 && cocos2d::CCArray::count(v46) )
  {
    v73 = v71;
    if ( v71 < v71 + v95 )
    {
      do
      {
        if ( v73 > cocos2d::CCArray::count(v46) - 1 )
          break;
        v74 = cocos2d::CCArray::objectAtIndex(v46, v73);
        cocos2d::CCArray::addObject((cocos2d::CCArray *)v93, v74);
        ++v73;
      }
      while ( (int)v73 < v71 + v95 );
      v7 = -1;
    }
    v68 = (cocos2d::CCArray *)v93;
  }
  if ( !*(_BYTE *)(a1 + 764) )
  {
    v75 = cocos2d::CCArray::count(v68) + v71;
    if ( v75 >= cocos2d::CCArray::count(v46) )
      v76 = 0;
    else
      LOBYTE(v76) = 1;
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 616) + 336LL))(*(_QWORD *)(a1 + 616), v76);
  }
  if ( !*(_QWORD *)&qword_905FB0 )
  {
    v93 = (void **)operator new(0x690u);
    *(_QWORD *)&qword_905FB0 = sub_214250(v93);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
  }
  v77 = cocos2d::CCString::createWithFormat(
          "%i%s%i%s%i",
          (_DWORD)v94,
          (const char *)&word_7222A8,
          v71,
          (const char *)&word_7222A8,
          v95);
  CString = cocos2d::CCString::getCString(v77);
  v107 = 0;
  v108 = 0;
  v109 = 0;
  v79 = -1;
  do
    ++v79;
  while ( CString[v79] );
  sub_3C230(&v107);
  v80 = &v110;
  if ( v112 > 0xF )
    v80 = (__int128 *)v110;
  (*(void (__fastcall **)(__int64, __int128 *, __int128 *))(*(_QWORD *)(a1 + 544) + 32LL))(a1 + 544, &v107, v80);
  v81 = &v110;
  if ( v112 > 0xF )
    v81 = (__int128 *)v110;
  (**(void (__fastcall ***)(__int64, cocos2d::CCArray *, __int128 *, _QWORD))(a1 + 544))(a1 + 544, v68, v81, v14);
  v83 = *(_QWORD *)(a1 + 672);
  if ( *(_DWORD *)(a1 + 720) )
  {
    if ( v83 )
    {
      LOBYTE(v82) = 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v83 + 336LL))(v83, v82);
    }
  }
  else
  {
    if ( v83 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v83 + 336LL))(v83, 0);
    v84 = cocos2d::CCDirector::sharedDirector(v83);
    cocos2d::CCDirector::getWinSize(v84, &v94);
    if ( v14 == 99 )
    {
      v93 = (void **)&v107;
      v107 = 0;
      v108 = 1;
      v109 = 15;
      LOWORD(v107) = (unsigned __int8)asc_6E86E4[0];
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v99, 0.5, 1.0);
      v86 = TextArea_create((__int64)&v107, &qword_6FFF68, 1.0, 600.0, v85, 1101004800, 0, 0);
      *((_DWORD *)v86 + 166) = 1109393408;
      v96 = 0;
      v97 = 0;
      v98 = 0;
      *(_QWORD *)&v96 = sub_3C460(64);
      v97 = 55;
      v98 = 63;
      strcpy((char *)v96, "You have not <cg>downloaded</c> any <cl>levels</c> yet!");
      TextArea_setString((__int64 *)v86, (const void **)&v96);
      v87 = *(_QWORD *)v86;
    }
    else if ( v14 == 103 )
    {
      v93 = (void **)&v107;
      v107 = 0;
      v108 = 1;
      v109 = 15;
      LOWORD(v107) = (unsigned __int8)asc_6E86E4[0];
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v99, 0.5, 1.0);
      v86 = TextArea_create((__int64)&v107, &qword_6FFF68, 1.0, 600.0, v88, 1101004800, 0, 0);
      *((_DWORD *)v86 + 166) = 1109393408;
      v96 = 0;
      v97 = 0;
      v98 = 0;
      *(_QWORD *)&v96 = sub_3C460(64);
      v97 = 53;
      v98 = 63;
      strcpy((char *)v96, "You have not <cg>favorited</c>\nany <cl>lists</c> yet!");
      TextArea_setString((__int64 *)v86, (const void **)&v96);
      v87 = *(_QWORD *)v86;
    }
    else if ( v14 == 100 )
    {
      v93 = (void **)&v107;
      v107 = 0;
      v108 = 1;
      v109 = 15;
      LOWORD(v107) = (unsigned __int8)asc_6E86E4[0];
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v99, 0.5, 1.0);
      v86 = TextArea_create((__int64)&v107, &qword_6FFF68, 1.0, 600.0, v89, 1101004800, 0, 0);
      *((_DWORD *)v86 + 166) = 1109393408;
      v96 = 0;
      v97 = 0;
      v98 = 0;
      *(_QWORD *)&v96 = sub_3C460(64);
      v97 = 52;
      v98 = 63;
      strcpy((char *)v96, "Levels marked as <cg>Favorite</c> will show up here!");
      TextArea_setString((__int64 *)v86, (const void **)&v96);
      v87 = *(_QWORD *)v86;
    }
    else
    {
      if ( v14 == 98 )
      {
        v93 = (void **)&v96;
        v96 = 0;
        v97 = 0;
        v98 = 0;
        *(_QWORD *)&v96 = sub_3C460(48);
        v97 = 42;
        v98 = 47;
        strcpy((char *)v96, "Tap <cg>New</c> to create a <cl>level</c>!");
      }
      else
      {
        v93 = (void **)&v96;
        v96 = 0;
        v97 = 0;
        v98 = 0;
        *(_QWORD *)&v96 = sub_3C460(48);
        if ( v14 == 102 )
        {
          v97 = 41;
          v98 = 47;
          strcpy((char *)v96, "Tap <cg>New</c> to create a <cl>list</c>!");
        }
        else
        {
          v97 = 45;
          v98 = 47;
          strcpy((char *)v96, "Tap <cg>New</c> to create a <cl>Template</c>!");
        }
      }
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v99, 0.5, 1.0);
      v86 = TextArea_create((__int64)&v96, &qword_6FFF68, 1.0, 600.0, v90, 1101004800, 0, 0);
      v87 = *(_QWORD *)v86;
    }
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)&v93,
      *(float *)&v94 * 0.5,
      (float)(*((float *)&v94 + 1) * 0.5) + 10.0);
    (*(void (__fastcall **)(char *, __int64))(v87 + 184))(v86, v91);
    (*(void (__fastcall **)(char *))(*(_QWORD *)v86 + 160LL))(v86);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 464LL))(a1, v86);
  }
LABEL_60:
  if ( !*(_BYTE *)(a1 + 748) )
  {
    v93 = Src;
    v34 = &v110;
    if ( v112 > 0xF )
      v34 = (__int128 *)v110;
    *(_OWORD *)Src = 0;
    Size = 0;
    v102 = 0;
    v35 = -1;
    do
      ++v35;
    while ( *((_BYTE *)v34 + v35) );
    sub_3C230(Src);
    v94 = Src;
    v36 = *(_QWORD *)&qword_905FB0;
    if ( !*(_QWORD *)&qword_905FB0 )
    {
      v99 = operator new(0x690u);
      *(_QWORD *)&qword_905FB0 = sub_214250(v99);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
      v36 = *(_QWORD *)&qword_905FB0;
    }
    if ( (void **)(v36 + 1272) != Src )
    {
      v37 = Src;
      if ( v102 > 0xF )
        v37 = (void **)Src[0];
      sub_3F5A0((void *)(v36 + 1272), v37, Size);
    }
    sub_3C310(Src);
  }
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 664) + 320LL) == 9 )
  {
    v93 = v103;
    v38 = &v110;
    if ( v112 > 0xF )
      v38 = (__int128 *)v110;
    *(_OWORD *)v103 = 0;
    v104 = 0;
    v105 = 0;
    do
      ++v7;
    while ( *((_BYTE *)v38 + v7) );
    sub_3C230(v103);
    v94 = v103;
    v39 = *(_QWORD *)&qword_905FB0;
    if ( !*(_QWORD *)&qword_905FB0 )
    {
      v99 = operator new(0x690u);
      *(_QWORD *)&qword_905FB0 = sub_214250(v99);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
      v39 = *(_QWORD *)&qword_905FB0;
    }
    if ( (void **)(v39 + 1304) != v103 )
    {
      v40 = v103;
      if ( v105 > 0xF )
        v40 = (void **)v103[0];
      sub_3F5A0((void *)(v39 + 1304), v40, v104);
    }
    sub_3C310(v103);
  }
  if ( !*(_BYTE *)(a1 + 764) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 616) + 344LL))(*(_QWORD *)(a1 + 616))
      || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 624) + 344LL))(*(_QWORD *)(a1 + 624)) )
    {
      LOBYTE(v41) = 1;
    }
    else
    {
      v41 = 0;
    }
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 688) + 336LL))(*(_QWORD *)(a1 + 688), v41);
  }
  return sub_3C310(&v110);
}
