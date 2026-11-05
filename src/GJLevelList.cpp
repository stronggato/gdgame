#include <Geode/binding/GJLevelList.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/11] Address: 0x215400
// Method: GJLevelList::~GJLevelList
cocos2d::CCNode *__fastcall GJLevelList__dtor_GJLevelList(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &GJLevelList::`vftable'; /*0x215414*/
  sub_3C310((char *)Block + 536); /*0x215420*/
  sub_3C310((char *)Block + 504); /*0x21542c*/
  sub_3C310((char *)Block + 472); /*0x215438*/
  sub_3C310((char *)Block + 440); /*0x215444*/
  sub_3C310((char *)Block + 408); /*0x215450*/
  sub_685C0((char *)Block + 320); /*0x21545c*/
  cocos2d::CCNode::~CCNode(Block); /*0x215464*/
  if ( (a2 & 1) != 0 ) /*0x21546d*/
    j_j_free(Block); /*0x215477*/
  return Block; /*0x21547c*/
}

// [2/11] Address: 0x25e210
// Method: GJLevelList::updateLevelsString
// Hidden C++ exception states: #wind=4
__int64 __fastcall GJLevelList_updateLevelsString(_QWORD *a1, char a2)
{
  __int64 v4; // r15
  _QWORD *v5; // rdx
  __int64 v6; // r8
  cocos2d::CCArray *v7; // rbp
  void *v8; // r8
  __int64 v9; // r8
  void *v10; // rcx
  unsigned int v11; // edi
  cocos2d::CCString *v12; // rax
  const char *CString; // rbx
  struct cocos2d::CCObject *v14; // r14
  __int64 v15; // r8
  void *v16; // rcx
  void *Block[2]; // [rsp+38h] [rbp-80h] BYREF
  __m128i v19; // [rsp+48h] [rbp-70h]
  void *v20[2]; // [rsp+58h] [rbp-60h] BYREF
  __m128i si128; // [rsp+68h] [rbp-50h]
  __int128 v22; // [rsp+78h] [rbp-40h] BYREF
  __int128 v23; // [rsp+88h] [rbp-30h]

  v4 = cocos2d::CCDictionary::create(); /*0x25e24e*/
  v5 = a1; /*0x25e251*/
  if ( a2 ) /*0x25e256*/
  {
    if ( a1[3] > 0xFu ) /*0x25e31c*/
      v5 = (_QWORD *)*a1; /*0x25e31e*/
    *(_OWORD *)v20 = 0; /*0x25e324*/
    si128 = 0; /*0x25e32c*/
    v9 = -1; /*0x25e332*/
    do /*0x25e343*/
      ++v9; /*0x25e340*/
    while ( *((_BYTE *)v5 + v9) ); /*0x25e343*/
    sub_3C230(v20); /*0x25e34f*/
    v7 = (cocos2d::CCArray *)sub_D09B0(v20, "~"); /*0x25e366*/
    if ( si128.m128i_i64[1] > 0xFuLL ) /*0x25e372*/
    {
      v10 = v20[0]; /*0x25e377*/
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x25e386*/
      {
        v10 = (void *)*((_QWORD *)v20[0] - 1); /*0x25e38c*/
        if ( (unsigned __int64)((char *)v20[0] - (char *)v10 - 8) > 0x1F ) /*0x25e39b*/
          invoke_watson(0, 0, 0, 0, 0); /*0x25e3b0*/
      }
      j_j_free(v10); /*0x25e3b7*/
    }
    si128 = _mm_load_si128((const __m128i *)&Size); /*0x25e3c4*/
    LOBYTE(v20[0]) = 0; /*0x25e3ca*/
  }
  else
  {
    if ( a1[3] > 0xFu ) /*0x25e261*/
      v5 = (_QWORD *)*a1; /*0x25e263*/
    *(_OWORD *)Block = 0; /*0x25e269*/
    v19 = 0; /*0x25e271*/
    v6 = -1; /*0x25e277*/
    do /*0x25e283*/
      ++v6; /*0x25e280*/
    while ( *((_BYTE *)v5 + v6) ); /*0x25e283*/
    sub_3C230(Block); /*0x25e28f*/
    v7 = (cocos2d::CCArray *)sub_D09B0(Block, &word_7222A8); /*0x25e2a6*/
    if ( v19.m128i_i64[1] > 0xFuLL ) /*0x25e2b2*/
    {
      v8 = Block[0]; /*0x25e2b7*/
      if ( (unsigned __int64)(v19.m128i_i64[1] + 1) >= 0x1000 ) /*0x25e2c6*/
      {
        v8 = (void *)*((_QWORD *)Block[0] - 1); /*0x25e2cc*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F ) /*0x25e2db*/
          invoke_watson(0, 0, 0, 0, 0); /*0x25e2f0*/
      }
      j_j_free(v8); /*0x25e2fa*/
    }
    v19 = _mm_load_si128((const __m128i *)&Size); /*0x25e307*/
    LOBYTE(Block[0]) = 0; /*0x25e30d*/
  }
  if ( cocos2d::CCArray::count(v7) > 1 ) /*0x25e3db*/
  {
    v11 = 1; /*0x25e3e1*/
    do /*0x25e4b7*/
    {
      v12 = cocos2d::CCArray::objectAtIndex(v7, v11 - 1); /*0x25e3f6*/
      CString = cocos2d::CCString::getCString(v12); /*0x25e405*/
      v14 = cocos2d::CCArray::objectAtIndex(v7, v11); /*0x25e413*/
      if ( v14 ) /*0x25e419*/
      {
        if ( CString ) /*0x25e422*/
        {
          v22 = 0; /*0x25e42b*/
          v23 = 0; /*0x25e433*/
          v15 = -1; /*0x25e43c*/
          do /*0x25e446*/
            ++v15; /*0x25e443*/
          while ( CString[v15] ); /*0x25e446*/
          sub_3C230(&v22); /*0x25e455*/
          cocos2d::CCDictionary::setObject(v4, v14, &v22); /*0x25e466*/
          if ( *((_QWORD *)&v23 + 1) > 0xFu ) /*0x25e479*/
          {
            v16 = (void *)v22; /*0x25e47e*/
            if ( (unsigned __int64)(*((_QWORD *)&v23 + 1) + 1LL) >= 0x1000 ) /*0x25e48d*/
            {
              v16 = *(void **)(v22 - 8); /*0x25e493*/
              if ( (unsigned __int64)(v22 - (_QWORD)v16 - 8) > 0x1F ) /*0x25e4a2*/
                invoke_watson(0, 0, 0, 0, 0); /*0x25e508*/
            }
            j_j_free(v16); /*0x25e4a4*/
          }
        }
      }
      v11 += 2; /*0x25e4a9*/
    }
    while ( v11 < cocos2d::CCArray::count(v7) ); /*0x25e4b7*/
  }
  sub_3C310(a1); /*0x25e4c0*/
  return v4; /*0x25e4c8*/
}

// [3/11] Address: 0x26ee00
// Method: GJLevelList::create
// Hidden C++ exception states: #wind=1
char *GJLevelList_create()
{
  char *v0; // rbx
  __int64 (__fastcall *v1)(char *); // rdx
  char v2; // al

  v0 = (char *)operator new(0x250u); /*0x26ee14*/
  cocos2d::CCNode::CCNode((cocos2d::CCNode *)v0); /*0x26ee1f*/
  *(_QWORD *)v0 = &GJLevelList::`vftable'; /*0x26ee2c*/
  *((_QWORD *)v0 + 40) = 0; /*0x26ee31*/
  *((_QWORD *)v0 + 41) = 0; /*0x26ee38*/
  *((_QWORD *)v0 + 42) = 0; /*0x26ee3f*/
  *((_QWORD *)v0 + 43) = 0; /*0x26ee46*/
  *((_QWORD *)v0 + 44) = 0; /*0x26ee4d*/
  *((_DWORD *)v0 + 90) = -1; /*0x26ee54*/
  *(_QWORD *)(v0 + 364) = 0; /*0x26ee5e*/
  *(_QWORD *)(v0 + 372) = 0; /*0x26ee65*/
  *(_QWORD *)(v0 + 380) = 0; /*0x26ee6c*/
  *(_QWORD *)(v0 + 388) = 0; /*0x26ee73*/
  *((_DWORD *)v0 + 99) = 0; /*0x26ee7a*/
  *((_WORD *)v0 + 200) = 0; /*0x26ee80*/
  *(_OWORD *)(v0 + 408) = 0; /*0x26ee8a*/
  *((_QWORD *)v0 + 53) = 0; /*0x26ee91*/
  *((_QWORD *)v0 + 54) = 15; /*0x26ee98*/
  v0[408] = 0; /*0x26eea3*/
  *(_OWORD *)(v0 + 440) = 0; /*0x26eeaa*/
  *((_QWORD *)v0 + 57) = 0; /*0x26eeb1*/
  *((_QWORD *)v0 + 58) = 15; /*0x26eeb8*/
  v0[440] = 0; /*0x26eec3*/
  *(_OWORD *)(v0 + 472) = 0; /*0x26eeca*/
  *((_QWORD *)v0 + 61) = 0; /*0x26eed1*/
  *((_QWORD *)v0 + 62) = 15; /*0x26eed8*/
  v0[472] = 0; /*0x26eee3*/
  *(_OWORD *)(v0 + 504) = 0; /*0x26eeea*/
  *((_QWORD *)v0 + 65) = 0; /*0x26eef1*/
  *((_QWORD *)v0 + 66) = 15; /*0x26eef8*/
  v0[504] = 0; /*0x26ef03*/
  *(_OWORD *)(v0 + 536) = 0; /*0x26ef0a*/
  *((_QWORD *)v0 + 69) = 0; /*0x26ef11*/
  *((_QWORD *)v0 + 70) = 15; /*0x26ef18*/
  v0[536] = 0; /*0x26ef23*/
  *((_QWORD *)v0 + 72) = 0; /*0x26ef2a*/
  *((_QWORD *)v0 + 73) = 0; /*0x26ef31*/
  v1 = *(__int64 (__fastcall **)(char *))(*(_QWORD *)v0 + 72LL); /*0x26ef3b*/
  if ( (char *)v1 == (char *)GJLevelList_init ) /*0x26ef4c*/
    v2 = GJLevelList_init(v0); /*0x26ef4e*/
  else
    v2 = v1(v0); /*0x26ef55*/
  if ( v2 ) /*0x26ef59*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v0); /*0x26ef5e*/
    return v0; /*0x26ef64*/
  }
  else
  {
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v0 + 8LL))(v0, 1); /*0x26ef81*/
    return 0; /*0x26ef84*/
  }
}

// [4/11] Address: 0x26efa0
// Method: GJLevelList::init
bool __fastcall GJLevelList_init(__int64 a1)
{
  bool result; // al
  cocos2d::CCObject *v3; // rax
  cocos2d::CCObject *v4; // rdi
  cocos2d::CCObject *v5; // rcx
  int v6; // eax

  result = cocos2d::CCNode::init((cocos2d::CCNode *)a1); /*0x26efa9*/
  if ( result ) /*0x26efb1*/
  {
    v3 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x26efbe*/
    v4 = v3; /*0x26efc4*/
    if ( *(cocos2d::CCObject **)(a1 + 576) != v3 ) /*0x26efce*/
    {
      if ( v3 ) /*0x26efd3*/
        cocos2d::CCObject::retain(v3); /*0x26efd8*/
      v5 = *(cocos2d::CCObject **)(a1 + 576); /*0x26efde*/
      if ( v5 ) /*0x26efe8*/
        cocos2d::CCObject::release(v5); /*0x26efea*/
      *(_QWORD *)(a1 + 576) = v4; /*0x26eff0*/
    }
    v6 = dword_905FB8; /*0x26eff7*/
    *(_DWORD *)(a1 + 588) = dword_905FB8; /*0x26f002*/
    dword_905FB8 = v6 + 1; /*0x26f00a*/
    return 1; /*0x26f010*/
  }
  return result; /*0x26efb3*/
}

// [5/11] Address: 0x26f020
// Method: GJLevelList::hasMatchingLevels
// Hidden C++ exception states: #wind=2
char __fastcall GJLevelList_hasMatchingLevels(__int64 a1, __int64 a2)
{
  _QWORD *v5; // rsi
  __int64 v6; // r9
  int *v7; // rdi
  int *i; // rbp
  int v9; // ebx
  __int64 *v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // r8
  __int64 *v13; // rax
  _DWORD *v14; // rax
  int *v15; // r8
  int *v16; // r9
  int v17; // edx
  _QWORD *v18; // rcx
  __int64 *v19; // rax
  char v20; // bl
  _QWORD *v21; // [rsp+20h] [rbp-58h] BYREF
  __int64 v22; // [rsp+28h] [rbp-50h]
  void **v23; // [rsp+30h] [rbp-48h]
  __int64 v24; // [rsp+38h] [rbp-40h]
  __int64 *v25; // [rsp+40h] [rbp-38h] BYREF
  int v26; // [rsp+48h] [rbp-30h]

  if ( (((*(_QWORD *)(a1 + 328) - *(_QWORD *)(a1 + 320)) /*0x26f06a*/
       ^ (*(_QWORD *)(a2 + 328) - *(_QWORD *)(a2 + 320)))
      & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    return 0; /*0x26f06c*/
  v22 = 0; /*0x26f07b*/
  v5 = operator new(0x20u); /*0x26f08a*/
  *v5 = v5; /*0x26f08d*/
  v5[1] = v5; /*0x26f090*/
  v5[2] = v5; /*0x26f094*/
  *((_WORD *)v5 + 12) = 257; /*0x26f098*/
  v21 = v5; /*0x26f09e*/
  v7 = *(int **)(a1 + 320); /*0x26f0a3*/
  for ( i = *(int **)(a1 + 328); v7 != i; ++v7 ) /*0x26f0b4*/
  {
    v9 = *v7; /*0x26f0d0*/
    v10 = (__int64 *)v5[1]; /*0x26f0d2*/
    v11 = 0; /*0x26f0d6*/
    v12 = v5; /*0x26f0d9*/
    if ( !*((_BYTE *)v10 + 25) ) /*0x26f0dc*/
    {
      v13 = (__int64 *)v5[1]; /*0x26f0e2*/
      do /*0x26f105*/
      {
        v10 = v13; /*0x26f0e5*/
        if ( *((_DWORD *)v13 + 7) >= v9 ) /*0x26f0eb*/
        {
          v11 = 1; /*0x26f0f6*/
          v12 = v13; /*0x26f0fb*/
        }
        else
        {
          v11 = 0; /*0x26f0ed*/
          v13 += 2; /*0x26f0f0*/
        }
        v13 = (__int64 *)*v13; /*0x26f0fe*/
      }
      while ( !*((_BYTE *)v13 + 25) ); /*0x26f105*/
    }
    v25 = v10; /*0x26f107*/
    v26 = v11; /*0x26f10c*/
    if ( *((_BYTE *)v12 + 25) || v9 < *((_DWORD *)v12 + 7) ) /*0x26f123*/
    {
      if ( v22 == 0x7FFFFFFFFFFFFFFLL ) /*0x26f12a*/
        sub_5AC20(v11, v10, v12, v6); /*0x26f222*/
      v23 = (void **)&v21; /*0x26f135*/
      v24 = 0; /*0x26f13a*/
      v14 = operator new(0x20u); /*0x26f144*/
      v14[7] = v9; /*0x26f14a*/
      *(_QWORD *)v14 = v5; /*0x26f14d*/
      *((_QWORD *)v14 + 1) = v5; /*0x26f150*/
      *((_QWORD *)v14 + 2) = v5; /*0x26f154*/
      *((_WORD *)v14 + 12) = 0; /*0x26f158*/
      v24 = 0; /*0x26f15e*/
      sub_69600(&v21, &v25, v14); /*0x26f17a*/
      v5 = v21; /*0x26f17f*/
    }
  }
  v15 = *(int **)(a2 + 320); /*0x26f191*/
  v16 = *(int **)(a2 + 328); /*0x26f198*/
  if ( v15 == v16 ) /*0x26f1a2*/
  {
LABEL_25:
    v20 = 1; /*0x26f1eb*/
  }
  else
  {
    while ( 1 ) /*0x26f1b0*/
    {
      v17 = *v15; /*0x26f1b0*/
      v18 = v5; /*0x26f1b3*/
      if ( !*(_BYTE *)(v5[1] + 25LL) ) /*0x26f1a8*/
      {
        v19 = (__int64 *)v5[1]; /*0x26f1bb*/
        do /*0x26f1d5*/
        {
          if ( *((_DWORD *)v19 + 7) >= v17 ) /*0x26f1c3*/
            v18 = v19; /*0x26f1cb*/
          else
            v19 += 2; /*0x26f1c5*/
          v19 = (__int64 *)*v19; /*0x26f1ce*/
        }
        while ( !*((_BYTE *)v19 + 25) ); /*0x26f1d5*/
      }
      if ( *((_BYTE *)v18 + 25) || v17 < *((_DWORD *)v18 + 7) ) /*0x26f1e0*/
        break; /*0x26f1e0*/
      if ( ++v15 == v16 ) /*0x26f1e9*/
        goto LABEL_25; /*0x26f1e9*/
    }
    v20 = 0; /*0x26f21e*/
  }
  sub_BB6F0(&v21, &v21); /*0x26f1f7*/
  return v20; /*0x26f1ff*/
}

// [6/11] Address: 0x26f4e0
// Method: GJLevelList::addLevelToList
// Hidden C++ exception states: #wind=2
void __fastcall GJLevelList_addLevelToList(__int64 a1, __int64 a2)
{
  int *v4; // rax
  int *v5; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rax
  void *v12; // rcx
  int v13; // [rsp+30h] [rbp-268h] BYREF
  void *Block[2]; // [rsp+38h] [rbp-260h] BYREF
  __int128 v15; // [rsp+48h] [rbp-250h]
  _BYTE v16[528]; // [rsp+60h] [rbp-238h] BYREF

  v4 = *(int **)(a1 + 320); /*0x26f507*/
  v5 = *(int **)(a1 + 328); /*0x26f50e*/
  if ( v4 == v5 ) /*0x26f518*/
  {
LABEL_4:
    v6 = *(_DWORD *)(a2 + 328) - *(_DWORD *)(a2 + 332); /*0x26f537*/
    v13 = v6; /*0x26f543*/
    if ( v5 == *(int **)(a1 + 336) ) /*0x26f552*/
    {
      sub_689C0(a1 + 320, v5, &v13); /*0x26f562*/
    }
    else
    {
      *v5 = v6; /*0x26f554*/
      *(_QWORD *)(a1 + 328) += 4LL; /*0x26f556*/
    }
    sub_26FDC0(a1); /*0x26f56a*/
    v7 = *(_DWORD *)(a2 + 328) - *(_DWORD *)(a2 + 332); /*0x26f575*/
    fmt::BasicWriter<char>::BasicWriter<char>(v16); /*0x26f580*/
    fmt::BasicWriter<char>::operator<<(v16, v7); /*0x26f58e*/
    v8 = fmt::BasicWriter<char>::c_str(v16); /*0x26f599*/
    *(_OWORD *)Block = 0; /*0x26f5a2*/
    v15 = 0; /*0x26f5aa*/
    v9 = -1; /*0x26f5b0*/
    do /*0x26f5c3*/
      ++v9; /*0x26f5c0*/
    while ( *(_BYTE *)(v8 + v9) ); /*0x26f5c3*/
    sub_3C230(Block); /*0x26f5d2*/
    fmt::BasicWriter<char>::~BasicWriter<char>(v16); /*0x26f5dd*/
    v10 = *(_QWORD *)(a1 + 576); /*0x26f5e4*/
    v11 = sub_264050(a2); /*0x26f5ee*/
    cocos2d::CCDictionary::setObject(v10, v11, Block); /*0x26f5fe*/
    if ( *((_QWORD *)&v15 + 1) > 0xFu ) /*0x26f60e*/
    {
      v12 = Block[0]; /*0x26f613*/
      if ( (unsigned __int64)(*((_QWORD *)&v15 + 1) + 1LL) >= 0x1000 ) /*0x26f622*/
      {
        v12 = (void *)*((_QWORD *)Block[0] - 1); /*0x26f628*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v12 - 8) > 0x1F ) /*0x26f637*/
          invoke_watson(0, 0, 0, 0, 0); /*0x26f64c*/
      }
      j_j_free(v12); /*0x26f653*/
    }
    *(_BYTE *)(a1 + 399) = 1; /*0x26f658*/
  }
  else
  {
    while ( *v4 != *(_DWORD *)(a2 + 328) - *(_DWORD *)(a2 + 332) ) /*0x26f528*/
    {
      if ( ++v4 == v5 ) /*0x26f535*/
        goto LABEL_4; /*0x26f535*/
    }
  }
}

// [8/11] Address: 0x26fed0
// Method: GJLevelList::completedLevels
// Hidden C++ exception states: #wind=1
__int64 __fastcall GJLevelList_completedLevels(__int64 a1)
{
  __int64 result; // rax
  unsigned int *v2; // rbx
  unsigned int *i; // rsi
  unsigned int v4; // edi
  __int64 v5; // rcx
  char v6; // cl
  void *v7; // [rsp+30h] [rbp+8h]

  result = 0; /*0x26fedf*/
  v2 = *(unsigned int **)(a1 + 320); /*0x26fee1*/
  for ( i = *(unsigned int **)(a1 + 328); v2 != i; ++v2 ) /*0x26fef2*/
  {
    v4 = result; /*0x26ff00*/
    v5 = qword_905FE0; /*0x26ff02*/
    if ( !qword_905FE0 ) /*0x26ff0c*/
    {
      v7 = operator new(0x3E8u); /*0x26ff18*/
      qword_905FE0 = sub_2D2B40(v7); /*0x26ff26*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x26ff37*/
      v5 = qword_905FE0; /*0x26ff39*/
    }
    v6 = sub_2DDF10(v5, *v2); /*0x26ff47*/
    result = v4 + 1; /*0x26ff4a*/
    if ( !v6 ) /*0x26ff4f*/
      result = v4; /*0x26ff4f*/
  }
  return result; /*0x26ff5b*/
}

// [9/11] Address: 0x2703e0
// Method: GJLevelList::dataLoaded
__int64 __fastcall GJLevelList_dataLoaded(__int64 a1, DS_Dictionary *a2)
{
  __int64 StringForKey; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  cocos2d::CCObject *DictForKey; // rax
  cocos2d::CCObject *v8; // rdi
  cocos2d::CCObject *v9; // rcx
  __int64 v10; // rax
  _BYTE v12[32]; // [rsp+28h] [rbp-30h] BYREF

  *(_DWORD *)(a1 + 344) = DS_Dictionary::getIntegerForKey(a2, "k1"); /*0x27041e*/
  *(_DWORD *)(a1 + 368) = DS_Dictionary::getIntegerForKey(a2, "k84"); /*0x270439*/
  StringForKey = DS_Dictionary::getStringForKey(a2, v12, "k2"); /*0x27043f*/
  sub_58AD0(a1 + 440, StringForKey); /*0x27044f*/
  sub_3C310(v12); /*0x270459*/
  v5 = DS_Dictionary::getStringForKey(a2, v12, "k3"); /*0x27046d*/
  sub_58AD0(a1 + 536, v5); /*0x27047d*/
  sub_3C310(v12); /*0x270487*/
  v6 = DS_Dictionary::getStringForKey(a2, v12, "k5"); /*0x27049b*/
  sub_58AD0(a1 + 408, v6); /*0x2704ab*/
  sub_3C310(v12); /*0x2704b5*/
  *(_DWORD *)(a1 + 364) = DS_Dictionary::getIntegerForKey(a2, "k60"); /*0x2704d4*/
  *(_DWORD *)(a1 + 360) = DS_Dictionary::getIntegerForKey(a2, "k7"); /*0x2704ea*/
  *(_DWORD *)(a1 + 352) = DS_Dictionary::getIntegerForKey(a2, "k11"); /*0x270500*/
  *(_BYTE *)(a1 + 395) = DS_Dictionary::getBoolForKey(a2, "k15"); /*0x270516*/
  *(_DWORD *)(a1 + 356) = DS_Dictionary::getIntegerForKey(a2, "k22"); /*0x27052c*/
  *(_DWORD *)(a1 + 584) = DS_Dictionary::getIntegerForKey(a2, "k21"); /*0x270542*/
  *(_DWORD *)(a1 + 348) = DS_Dictionary::getIntegerForKey(a2, "k16"); /*0x270558*/
  *(_BYTE *)(a1 + 393) = DS_Dictionary::getBoolForKey(a2, "k79"); /*0x27056e*/
  *(_BYTE *)(a1 + 394) = DS_Dictionary::getBoolForKey(a2, "k94"); /*0x270584*/
  *(_DWORD *)(a1 + 372) = DS_Dictionary::getIntegerForKey(a2, "k46"); /*0x27059a*/
  *(_BYTE *)(a1 + 399) = DS_Dictionary::getBoolForKey(a2, "k47"); /*0x2705a6*/
  *(_DWORD *)(a1 + 376) = DS_Dictionary::getIntegerForKey(a2, "k83"); /*0x2705c6*/
  *(_BYTE *)(a1 + 396) = DS_Dictionary::getBoolForKey(a2, "k82"); /*0x2705dc*/
  *(_BYTE *)(a1 + 397) = DS_Dictionary::getBoolForKey(a2, "k27"); /*0x2705f2*/
  *(_DWORD *)(a1 + 568) = DS_Dictionary::getIntegerForKey(a2, "k98"); /*0x270608*/
  *(_DWORD *)(a1 + 572) = DS_Dictionary::getIntegerForKey(a2, "k99"); /*0x27061e*/
  *(_DWORD *)(a1 + 380) = DS_Dictionary::getIntegerForKey(a2, "k42"); /*0x270634*/
  *(_BYTE *)(a1 + 398) = DS_Dictionary::getBoolForKey(a2, "k100"); /*0x27064a*/
  *(_DWORD *)(a1 + 384) = DS_Dictionary::getIntegerForKey(a2, "k113"); /*0x270660*/
  *(_DWORD *)(a1 + 388) = DS_Dictionary::getIntegerForKey(a2, "k114"); /*0x270679*/
  DictForKey = DS_Dictionary::getDictForKey(a2, "k97", 0); /*0x27067f*/
  v8 = DictForKey; /*0x270685*/
  if ( *(cocos2d::CCObject **)(a1 + 576) != DictForKey ) /*0x27068f*/
  {
    if ( DictForKey ) /*0x270694*/
      cocos2d::CCObject::retain(DictForKey); /*0x270699*/
    v9 = *(cocos2d::CCObject **)(a1 + 576); /*0x27069f*/
    if ( v9 ) /*0x2706a9*/
      cocos2d::CCObject::release(v9); /*0x2706ab*/
    *(_QWORD *)(a1 + 576) = v8; /*0x2706b1*/
  }
  v10 = DS_Dictionary::getStringForKey(a2, v12, &unk_7559DC); /*0x2706c7*/
  return sub_26F230(a1, v10); /*0x2706d8*/
}

// [10/11] Address: 0x270700
// Method: GJLevelList::encodeWithCoder
void __fastcall GJLevelList_encodeWithCoder(__int64 a1, DS_Dictionary *a2)
{
  DS_Dictionary::setIntegerForKey(a2, "kCEK", 12); /*0x270720*/
  DS_Dictionary::setIntegerForKey(a2, "k1", *(_DWORD *)(a1 + 344)); /*0x270737*/
  DS_Dictionary::setStringForKey(a2, "k2", a1 + 440); /*0x27074e*/
  DS_Dictionary::setStringForKey(a2, "k3", a1 + 536); /*0x270765*/
  DS_Dictionary::setStringForKey(a2, "k5", a1 + 408); /*0x27077c*/
  DS_Dictionary::setIntegerForKey(a2, "k60", *(_DWORD *)(a1 + 364)); /*0x270793*/
  DS_Dictionary::setIntegerForKey(a2, "k7", *(_DWORD *)(a1 + 360)); /*0x2707aa*/
  DS_Dictionary::setIntegerForKey(a2, "k11", *(_DWORD *)(a1 + 352)); /*0x2707c1*/
  DS_Dictionary::setIntegerForKey(a2, "k15", *(unsigned __int8 *)(a1 + 395)); /*0x2707d9*/
  DS_Dictionary::setIntegerForKey(a2, "k22", *(_DWORD *)(a1 + 356)); /*0x2707f0*/
  DS_Dictionary::setIntegerForKey(a2, "k21", *(_DWORD *)(a1 + 584)); /*0x270807*/
  DS_Dictionary::setIntegerForKey(a2, "k16", *(_DWORD *)(a1 + 348)); /*0x27081e*/
  DS_Dictionary::setBoolForKey(a2, "k79", *(_BYTE *)(a1 + 393)); /*0x270836*/
  DS_Dictionary::setBoolForKey(a2, "k94", *(_BYTE *)(a1 + 394)); /*0x27084e*/
  DS_Dictionary::setIntegerForKey(a2, "k46", *(_DWORD *)(a1 + 372)); /*0x270865*/
  DS_Dictionary::setBoolForKey(a2, "k47", *(_BYTE *)(a1 + 399)); /*0x27087d*/
  DS_Dictionary::setIntegerForKey(a2, "k83", *(_DWORD *)(a1 + 376)); /*0x270894*/
  DS_Dictionary::setStringForKey(a2, &unk_7559DC, a1 + 504); /*0x2708ab*/
  DS_Dictionary::setBoolForKey(a2, "k82", *(_BYTE *)(a1 + 396)); /*0x2708c3*/
  DS_Dictionary::setBoolForKey(a2, "k27", *(_BYTE *)(a1 + 397)); /*0x2708db*/
  DS_Dictionary::setIntegerForKey(a2, "k42", *(_DWORD *)(a1 + 380)); /*0x2708f2*/
  DS_Dictionary::setIntegerForKey(a2, "k98", *(_DWORD *)(a1 + 568)); /*0x270909*/
  DS_Dictionary::setIntegerForKey(a2, "k99", *(_DWORD *)(a1 + 572)); /*0x270920*/
  DS_Dictionary::setIntegerForKey(a2, "k113", *(_DWORD *)(a1 + 384)); /*0x270937*/
  DS_Dictionary::setIntegerForKey(a2, "k114", *(_DWORD *)(a1 + 388)); /*0x27094e*/
  DS_Dictionary::setBoolForKey(a2, "k100", *(_BYTE *)(a1 + 398)); /*0x270966*/
  DS_Dictionary::setDictForKey(a2, "k97", *(struct cocos2d::CCDictionary **)(a1 + 576)); /*0x270987*/
}

// [11/11] Address: 0x51d720
// Method: GJLevelList::parseListLevels
// Hidden C++ exception states: #wind=3
__int64 __fastcall GJLevelList_parseListLevels(__int64 a1, __int64 a2)
{
  __int64 **v4; // rsi
  __int64 *i; // rbx
  char v6; // di
  __int16 *v7; // rax
  __int64 v8; // rax
  __int64 v9; // r8
  void *v10; // rcx
  __int128 v12; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v13; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v14[16]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v15[16]; // [rsp+68h] [rbp-98h] BYREF
  void *Block[2]; // [rsp+78h] [rbp-88h] BYREF
  __m128i si128; // [rsp+88h] [rbp-78h]
  _BYTE v18[528]; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v19[2]; // [rsp+2B0h] [rbp+1B0h] BYREF

  fmt::BasicWriter<char>::BasicWriter<char>(v18); /*0x51d75f*/
  v19[0] = 0; /*0x51d769*/
  v19[1] = _mm_load_si128((const __m128i *)&xmmword_830EE0); /*0x51d778*/
  LOWORD(v19[0]) = 124; /*0x51d780*/
  fmt::BasicWriter<char>::operator<<(v18, *(unsigned int *)(a2 + 16)); /*0x51d790*/
  v13 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(&v12, v19); /*0x51d7ab*/
  fmt::BasicWriter<char>::operator<<(v18, &v13); /*0x51d7b9*/
  v4 = *(__int64 ***)(a2 + 8); /*0x51d7bf*/
  for ( i = *v4; i != (__int64 *)v4; i = (__int64 *)*i ) /*0x51d7c9*/
  {
    v6 = *((_BYTE *)i + 20); /*0x51d7e0*/
    fmt::BasicWriter<char>::operator<<(v18, *((unsigned int *)i + 4)); /*0x51d7eb*/
    v12 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v15, v19); /*0x51d806*/
    fmt::BasicWriter<char>::operator<<(v18, &v12); /*0x51d814*/
    v7 = (__int16 *)"0"; /*0x51d81a*/
    if ( v6 ) /*0x51d824*/
      v7 = &word_708050; /*0x51d824*/
    v13 = (unsigned __int64)v7; /*0x51d828*/
    fmt::BasicWriter<char>::operator<<(v18, &v13); /*0x51d83b*/
    v12 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v14, v19); /*0x51d856*/
    fmt::BasicWriter<char>::operator<<(v18, &v12); /*0x51d864*/
  }
  v8 = fmt::BasicWriter<char>::c_str(v18); /*0x51d87a*/
  *(_OWORD *)Block = 0; /*0x51d883*/
  si128 = 0; /*0x51d88b*/
  v9 = -1; /*0x51d890*/
  do /*0x51d8a3*/
    ++v9; /*0x51d8a0*/
  while ( *(_BYTE *)(v8 + v9) ); /*0x51d8a3*/
  sub_3C230(Block); /*0x51d8b2*/
  v12 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v14, Block); /*0x51d8cb*/
  fmt::BasicWriter<char>::operator<<(a1, &v12); /*0x51d8d8*/
  v12 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v14, a1 + 528); /*0x51d8f3*/
  fmt::BasicWriter<char>::operator<<(a1, &v12); /*0x51d900*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x51d90f*/
  {
    v10 = Block[0]; /*0x51d914*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x51d923*/
    {
      v10 = (void *)*((_QWORD *)Block[0] - 1); /*0x51d929*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v10 - 8) > 0x1F ) /*0x51d938*/
        invoke_watson(0, 0, 0, 0, 0); /*0x51d949*/
    }
    j_j_free(v10); /*0x51d950*/
  }
  si128 = _mm_load_si128((const __m128i *)&Size); /*0x51d95d*/
  LOBYTE(Block[0]) = 0; /*0x51d962*/
  sub_3C310(v19); /*0x51d96e*/
  return fmt::BasicWriter<char>::~BasicWriter<char>(v18); /*0x51d97d*/
}

// Address: 0x26f790
// Method: GJLevelList::getListLevelsArray
// Hidden C++ exception states: #wind=9
cocos2d::CCArray *__fastcall GJLevelList_getListLevelsArray(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  unsigned int *v8; // rdi
  __int64 v9; // rax
  __int64 *v10; // rdi
  __int64 *i; // rsi
  __int64 v12; // rbx
  __int64 v13; // rax
  cocos2d::CCArray *v14; // rbx
  int v15; // r12d
  unsigned __int8 *v16; // r15
  _QWORD *v17; // r13
  _QWORD *v18; // r14
  __int64 v19; // rcx
  __int64 v20; // rdi
  unsigned int v21; // ebx
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rbx
  __int64 v25; // rax
  void *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdi
  unsigned int v29; // ebx
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // rbx
  void *v33; // rcx
  __int64 v34; // rax
  unsigned int v35; // ebx
  float v36; // xmm0_4
  unsigned int v37; // ebx
  __int64 v38; // rax
  __int64 v39; // r8
  void **v40; // rdx
  cocos2d::CCArray *v42; // [rsp+30h] [rbp-D0h] BYREF
  void *Src[2]; // [rsp+38h] [rbp-C8h] BYREF
  size_t Size; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v45; // [rsp+50h] [rbp-B0h]
  int v46; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v47[2]; // [rsp+68h] [rbp-98h] BYREF
  void *Block[3]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v49; // [rsp+90h] [rbp-70h]
  __int64 v50; // [rsp+98h] [rbp-68h]
  unsigned __int8 *v51; // [rsp+A0h] [rbp-60h]
  void **v52; // [rsp+A8h] [rbp-58h] BYREF
  void *v53; // [rsp+B8h] [rbp-48h]
  void *v54; // [rsp+C0h] [rbp-40h]
  _BYTE v55[16]; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v56; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v57; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v58; // [rsp+F0h] [rbp-10h]
  __int128 v59; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v60; // [rsp+108h] [rbp+8h]
  unsigned __int64 v61; // [rsp+110h] [rbp+10h]
  _BYTE v62[528]; // [rsp+120h] [rbp+20h] BYREF

  v47[1] = 0;
  v4 = operator new(0x20u);
  *v4 = v4;
  v4[1] = v4;
  v47[0] = v4;
  v49 = 7;
  v50 = 8;
  v46 = 1065353216;
  v5 = operator new(0x80u);
  v6 = 0;
  Block[0] = v5;
  v7 = v5 + 16;
  Block[1] = v5 + 16;
  Block[2] = v5 + 16;
  do
    *v5++ = v4;
  while ( v5 != v7 );
  if ( a2 )
  {
    v8 = *(unsigned int **)(a2 + 56);
    v9 = *v8;
    if ( (_DWORD)v9 )
    {
      v10 = (__int64 *)*((_QWORD *)v8 + 2);
      for ( i = &v10[v9 - 1]; v10 <= i; ++v10 )
      {
        v12 = *v10;
        if ( !*v10 )
          break;
        LODWORD(v42) = *(_DWORD *)(v12 + 328) - *(_DWORD *)(v12 + 332);
        v13 = sub_66670(&v46, &v52, &v42);
        v6 = *(_QWORD *)v13;
        *(_QWORD *)(*(_QWORD *)v13 + 24LL) = v12;
      }
    }
  }
  v14 = (cocos2d::CCArray *)cocos2d::CCArray::create(v6);
  v42 = v14;
  v15 = 1;
  v16 = (unsigned __int8 *)a1[40];
  v51 = (unsigned __int8 *)a1[41];
  if ( v16 != v51 )
  {
    v17 = a1 + 72;
    v18 = a1 + 72;
    do
    {
      v19 = *((_QWORD *)Block[0]
            + 2
            * (v49
             & (0x100000001B3LL
              * (v16[3]
               ^ (0x100000001B3LL
                * (v16[2] ^ (0x100000001B3LL * (v16[1] ^ (0x100000001B3LL * (*v16 ^ 0xCBF29CE484222325uLL)))))))))
            + 1);
      if ( v19 == v47[0] )
      {
        v19 = 0;
      }
      else
      {
        if ( *(_DWORD *)v16 != *(_DWORD *)(v19 + 16) )
        {
          while ( v19 != *((_QWORD *)Block[0]
                         + 2
                         * (v49
                          & (0x100000001B3LL
                           * (v16[3]
                            ^ (0x100000001B3LL
                             * (v16[2]
                              ^ (0x100000001B3LL * (v16[1] ^ (0x100000001B3LL * (*v16 ^ 0xCBF29CE484222325uLL)))))))))) )
          {
            v19 = *(_QWORD *)(v19 + 8);
            if ( *(_DWORD *)v16 == *(_DWORD *)(v19 + 16) )
              goto LABEL_15;
          }
          v19 = 0;
        }
LABEL_15:
        v18 = v17;
      }
      if ( v19 )
      {
        v20 = *(_QWORD *)(*(_QWORD *)sub_66670(&v46, v55, v16) + 24LL);
        v21 = *(_DWORD *)(v20 + 328) - *(_DWORD *)(v20 + 332);
        fmt::BasicWriter<char>::BasicWriter<char>(v62);
        fmt::BasicWriter<char>::operator<<(v62, v21);
        v22 = fmt::BasicWriter<char>::c_str(v62);
        v56 = 0;
        v57 = 0;
        v58 = 0;
        v23 = -1;
        do
          ++v23;
        while ( *(_BYTE *)(v22 + v23) );
        sub_3C230(&v56);
        fmt::BasicWriter<char>::~BasicWriter<char>(v62);
        v24 = *v18;
        v25 = sub_264050(v20);
        cocos2d::CCDictionary::setObject(v24, v25, &v56);
        if ( v58 > 0xF )
        {
          v26 = (void *)v56;
          if ( v58 + 1 >= 0x1000 )
          {
            v26 = *(void **)(v56 - 8);
            if ( (unsigned __int64)(v56 - (_QWORD)v26 - 8) > 0x1F )
              invoke_watson(0, 0, 0, 0, 0);
          }
          j_j_free(v26);
        }
        v57 = 0;
        v58 = 15;
        LOBYTE(v56) = 0;
      }
      v27 = *(_QWORD *)&qword_905FB0;
      if ( !*(_QWORD *)&qword_905FB0 )
      {
        v53 = operator new(0x690u);
        *(_QWORD *)&qword_905FB0 = sub_214250(v53);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
        v27 = *(_QWORD *)&qword_905FB0;
      }
      v28 = sub_21D5C0(v27, *(unsigned int *)v16);
      v29 = *(_DWORD *)v16;
      fmt::BasicWriter<char>::BasicWriter<char>(v62);
      fmt::BasicWriter<char>::operator<<(v62, v29);
      v30 = fmt::BasicWriter<char>::c_str(v62);
      v59 = 0;
      v60 = 0;
      v61 = 0;
      v31 = -1;
      do
        ++v31;
      while ( *(_BYTE *)(v30 + v31) );
      sub_3C230(&v59);
      fmt::BasicWriter<char>::~BasicWriter<char>(v62);
      v32 = cocos2d::CCDictionary::objectForKey(*v18, &v59);
      if ( v61 > 0xF )
      {
        v33 = (void *)v59;
        if ( v61 + 1 >= 0x1000 )
        {
          v33 = *(void **)(v59 - 8);
          if ( (unsigned __int64)(v59 - (_QWORD)v33 - 8) > 0x1F )
            invoke_watson(0, 0, 0, 0, 0);
        }
        j_j_free(v33);
      }
      v60 = 0;
      v61 = 15;
      LOBYTE(v59) = 0;
      if ( !v28 || *(_BYTE *)(v28 + 1185) )
      {
        if ( v32 )
        {
          v28 = v32;
        }
        else if ( !v28 )
        {
          v54 = operator new(0x840u);
          v34 = GJGameLevel_GJGameLevel((__int64)v54);
          v28 = v34;
          if ( v34 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v34 + 72LL))(v34) )
            {
              cocos2d::CCObject::autorelease((cocos2d::CCObject *)v28);
            }
            else
            {
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 8LL))(v28, 1);
              v28 = 0;
            }
          }
          v35 = *(_DWORD *)v16;
          *(_DWORD *)(v28 + 336) = *(_DWORD *)v16;
          v36 = (float)((float)rand() / 32767.0) * 1000.0;
          *(_DWORD *)(v28 + 332) = (int)v36;
          *(_DWORD *)(v28 + 328) = v35 + (int)v36;
          v37 = *(_DWORD *)v16;
          fmt::BasicWriter<char>::BasicWriter<char>(v62);
          fmt::BasicWriter<char>::operator<<(v62, v37);
          v38 = fmt::BasicWriter<char>::c_str(v62);
          *(_OWORD *)Src = 0;
          Size = 0;
          v45 = 0;
          v39 = -1;
          do
            ++v39;
          while ( *(_BYTE *)(v38 + v39) );
          sub_3C230(Src);
          fmt::BasicWriter<char>::~BasicWriter<char>(v62);
          v52 = Src;
          if ( (void **)(v28 + 344) != Src )
          {
            v40 = Src;
            if ( v45 > 0xF )
              v40 = (void **)Src[0];
            sub_3F5A0((void *)(v28 + 344), v40, Size);
          }
          sub_3C310(Src);
        }
      }
      *(_DWORD *)(v28 + 1340) = v15++;
      v14 = v42;
      cocos2d::CCArray::addObject(v42, (struct cocos2d::CCObject *)v28);
      v16 += 4;
    }
    while ( v16 != v51 );
  }
  sub_3DA90(Block);
  sub_65440(v47);
  return v14;
}
