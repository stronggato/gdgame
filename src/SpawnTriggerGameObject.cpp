#include <Geode/binding/SpawnTriggerGameObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/6] Address: 0x6334a0
// Method: SpawnTriggerGameObject::~SpawnTriggerGameObject
cocos2d::CCSprite *__fastcall SpawnTriggerGameObject__dtor_SpawnTriggerGameObject(cocos2d::CCSprite *Block, char a2)
{
  *(_QWORD *)Block = &SpawnTriggerGameObject::`vftable'; /*0x6334b4*/
  *((_QWORD *)Block + 40) = &SpawnTriggerGameObject::`vftable'; /*0x6334c0*/
  *((_QWORD *)Block + 43) = &SpawnTriggerGameObject::`vftable'; /*0x6334ce*/
  sub_685C0((char *)Block + 1888); /*0x6334dc*/
  sub_C4C10((char *)Block + 1856); /*0x6334e8*/
  *(_QWORD *)Block = &EffectGameObject::`vftable'; /*0x6334f7*/
  *((_QWORD *)Block + 40) = &EffectGameObject::`vftable'; /*0x633501*/
  *((_QWORD *)Block + 43) = &EffectGameObject::`vftable'; /*0x63350f*/
  TextGameObject__dtor_TextGameObject(Block); /*0x633516*/
  if ( (a2 & 1) != 0 ) /*0x63351e*/
    j_j_free(Block); /*0x633528*/
  return Block; /*0x63352d*/
}

// [2/6] Address: 0x655330
// Method: SpawnTriggerGameObject::init
char __fastcall SpawnTriggerGameObject_init(__int64 a1)
{
  *(_DWORD *)(a1 + 28) = 13; /*0x65533d*/
  if ( !cocos2d::CCSprite::initWithSpriteFrameName((cocos2d::CCSprite *)a1, "edit_eSpawnBtn_001.png") ) /*0x655347*/
    return 0; /*0x655393*/
  sub_287800(a1); /*0x655354*/
  *(_BYTE *)(a1 + 313) = 0; /*0x655359*/
  *(_DWORD *)(a1 + 1256) = 1; /*0x655362*/
  *(_WORD *)(a1 + 1465) = -1; /*0x65536c*/
  *(_BYTE *)(a1 + 1467) = -1; /*0x655375*/
  *(_DWORD *)(a1 + 1468) = 1056964608; /*0x65537c*/
  *(_BYTE *)(a1 + 1652) = 1; /*0x655386*/
  return 1; /*0x65538d*/
}

// [3/6] Address: 0x6553a0
// Method: SpawnTriggerGameObject::updateRemapKeys
void __fastcall SpawnTriggerGameObject_updateRemapKeys(__int64 a1, _QWORD *a2)
{
  _DWORD *v2; // r8
  __int64 v5; // rdi
  _DWORD *v6; // rdx
  _DWORD *v7; // rax
  int *v8; // rdx
  int v9; // eax
  int v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_DWORD *)(a1 + 1880); /*0x6553aa*/
  if ( *(int *)(a1 + 1880) <= 0 ) /*0x6553bb*/
  {
    if ( !*(_BYTE *)(a1 + 1928) ) /*0x65547b*/
      sub_98E50(a1 + 1888, a2); /*0x65548b*/
  }
  else
  {
    v5 = a1 + 1888; /*0x6553c6*/
    v6 = *(_DWORD **)(a1 + 1896); /*0x6553cd*/
    v7 = *(_DWORD **)(a1 + 1888); /*0x6553d1*/
    if ( v7 != v6 ) /*0x6553d7*/
    {
      *(_QWORD *)(a1 + 1896) = v7; /*0x6553d9*/
      v6 = v7; /*0x6553dd*/
    }
    if ( v6 == *(_DWORD **)(a1 + 1904) ) /*0x6553e4*/
    {
      sub_689C0(a1 + 1888, v6, v2); /*0x6553f5*/
    }
    else
    {
      *v6 = *v2; /*0x6553e9*/
      *(_QWORD *)(a1 + 1896) += 4LL; /*0x6553eb*/
    }
    if ( !*(_BYTE *)(a1 + 1928) ) /*0x6553fa*/
      sub_660CC0(v5, *(_QWORD *)(a1 + 1896), *a2, (__int64)(a2[1] - *a2) >> 2); /*0x65541b*/
    if ( *a2 == a2[1] || *(_BYTE *)(a1 + 1928) ) /*0x65542e*/
    {
      v8 = *(int **)(a1 + 1896); /*0x655444*/
      v9 = -*(_DWORD *)(a1 + 924); /*0x655448*/
      v10 = v9; /*0x65544a*/
      if ( v8 == *(int **)(a1 + 1904) ) /*0x655452*/
      {
        sub_689C0(a1 + 1888, v8, &v10); /*0x65546b*/
      }
      else
      {
        *v8 = v9; /*0x655454*/
        *(_QWORD *)(a1 + 1896) += 4LL; /*0x655456*/
      }
    }
  }
}

// [4/6] Address: 0x6554a0
// Method: SpawnTriggerGameObject::triggerObject
__int64 __fastcall SpawnTriggerGameObject_triggerObject(__int64 a1, __int64 a2)
{
  float v2; // xmm3_4
  float v5; // xmm2_4
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  float v9; // xmm2_4

  v2 = *(float *)(a1 + 1924); /*0x6554aa*/
  v5 = *(float *)(a1 + 1920); /*0x6554be*/
  if ( v2 != 0.0 && a2 && (!*(_BYTE *)(a2 + 12732) || *(_DWORD *)(a2 + 2204) == 1) ) /*0x6554df*/
  {
    qword_905F68 = 214013 * qword_905F68 + 2531011; /*0x6554f5*/
    result = ((unsigned __int64)qword_905F68 >> 16) & 0x7FFF; /*0x655500*/
    v5 = fmaxf( /*0x655529*/
           0.0,
           (float)((float)((float)((float)((float)(int)result / 32767.0) + (float)((float)(int)result / 32767.0)) - 1.0)
                 * v2)
         + v5);
  }
  v7 = *(unsigned __int8 *)(a1 + 1682); /*0x65554a*/
  v8 = *(unsigned int *)(a1 + 1480); /*0x655552*/
  v9 = v5 - *(double *)(a1 + 1912); /*0x655563*/
  if ( *(_BYTE *)(a2 + 13712) ) /*0x65552d*/
  {
    *(_QWORD *)(a1 + 1912) = 0; /*0x6555d9*/
  }
  else
  {
    if ( v9 > 0.0 ) /*0x65557b*/
      result = GJEffectManager_spawnGroup( /*0x6555b9*/
                 *(_QWORD *)(a2 + 2472),
                 v8,
                 v9,
                 v7,
                 a1 + 1888,
                 *(_DWORD *)(a1 + 924),
                 *(_DWORD *)(a1 + 1688));
    else
      result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(a2 + 408) + 8LL))(a2 + 408, v8, v7); /*0x655595*/
    *(_QWORD *)(a1 + 1912) = 0; /*0x655598*/
  }
  return result; /*0x6555a3*/
}

// [5/6] Address: 0x655840
// Method: SpawnTriggerGameObject::customObjectSetup
// Hidden C++ exception states: #wind=3
double __fastcall SpawnTriggerGameObject_customObjectSetup(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  int v7; // eax
  const char *v8; // rcx
  float v9; // xmm6_4
  float v10; // xmm1_4
  const char *v11; // rcx
  float v12; // xmm9_4
  const char *v13; // rcx
  float v14; // xmm9_4
  int v15; // eax
  const char *v16; // rcx
  int v17; // eax
  const char *v18; // rcx
  int v19; // eax
  const char *v20; // rcx
  void **v21; // rax
  char v22; // di
  void *v23; // rcx
  cocos2d::CCArray *v24; // rdi
  cocos2d::CCString *v25; // rax
  cocos2d::CCString *v26; // rax
  int v28; // [rsp+30h] [rbp-B8h] BYREF
  int v29; // [rsp+34h] [rbp-B4h] BYREF
  void *Block[2]; // [rsp+38h] [rbp-B0h] BYREF
  __m128i si128; // [rsp+48h] [rbp-A0h]
  __int128 v32; // [rsp+58h] [rbp-90h] BYREF
  __int128 v33; // [rsp+68h] [rbp-80h]
  _BYTE v34[32]; // [rsp+78h] [rbp-70h] BYREF

  v6 = 0; /*0x65587a*/
  v28 = 0; /*0x65587c*/
  EffectGameObject_customObjectSetup(a1, a2, a3); /*0x655880*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 408LL) ) /*0x655888*/
  {
    v8 = (const char *)(*(_QWORD *)a2 + 1632LL); /*0x655898*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 1656LL) > 0xFu ) /*0x6558a4*/
      v8 = *(const char **)v8; /*0x6558a6*/
    v7 = atoi(v8); /*0x6558a9*/
  }
  else
  {
    v7 = 0; /*0x655891*/
  }
  *(_DWORD *)(a1 + 1480) = v7; /*0x6558af*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 504LL) ) /*0x6558c0*/
  {
    v11 = (const char *)(*(_QWORD *)a2 + 2016LL); /*0x6558d4*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 2040LL) > 0xFu ) /*0x6558e0*/
      v11 = *(const char **)v11; /*0x6558e2*/
    v12 = atof(v11); /*0x6558ef*/
    v9 = 0.0; /*0x6558fe*/
    if ( isnan(v12) ) /*0x6558f8*/
      v10 = 0.0; /*0x655905*/
    else
      v10 = fminf(1000000000.0, fmaxf(-1000000000.0, v12)); /*0x65591a*/
  }
  else
  {
    v9 = 0.0; /*0x6558c9*/
    v10 = 0.0; /*0x6558cc*/
  }
  *(float *)(a1 + 1920) = v10; /*0x65591e*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4448LL) ) /*0x655929*/
  {
    v13 = (const char *)(*(_QWORD *)a2 + 17792LL); /*0x655935*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 17816LL) > 0xFu ) /*0x655941*/
      v13 = *(const char **)v13; /*0x655943*/
    v14 = atof(v13); /*0x655950*/
    if ( !isnan(v14) ) /*0x655959*/
      v9 = fminf(1000000000.0, fmaxf(-1000000000.0, v14)); /*0x655970*/
  }
  *(float *)(a1 + 1924) = v9; /*0x655974*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 816LL) ) /*0x65597f*/
  {
    v16 = (const char *)(*(_QWORD *)a2 + 3264LL); /*0x65598f*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 3288LL) > 0xFu ) /*0x65599b*/
      v16 = *(const char **)v16; /*0x65599d*/
    v15 = atoi(v16); /*0x6559a0*/
  }
  else
  {
    v15 = 0; /*0x655988*/
  }
  *(_BYTE *)(a1 + 1681) = v15 != 0; /*0x6559ab*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3528LL) ) /*0x6559b4*/
  {
    v18 = (const char *)(*(_QWORD *)a2 + 14112LL); /*0x6559c4*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 14136LL) > 0xFu ) /*0x6559d0*/
      v18 = *(const char **)v18; /*0x6559d2*/
    v17 = atoi(v18); /*0x6559d5*/
  }
  else
  {
    v17 = 0; /*0x6559bd*/
  }
  *(_BYTE *)(a1 + 1682) = v17 != 0; /*0x6559e0*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4648LL) ) /*0x6559e9*/
  {
    v20 = (const char *)(*(_QWORD *)a2 + 18592LL); /*0x6559f9*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 18616LL) > 0xFu ) /*0x655a05*/
      v20 = *(const char **)v20; /*0x655a07*/
    v19 = atoi(v20); /*0x655a0a*/
  }
  else
  {
    v19 = 0; /*0x6559f2*/
  }
  *(_BYTE *)(a1 + 1928) = v19 != 0; /*0x655a15*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3536LL) ) /*0x655a1e*/
  {
    v21 = (void **)sub_3E4F0(v34, *(_QWORD *)a2 + 14144LL); /*0x655a5c*/
    v22 = 2; /*0x655a61*/
  }
  else
  {
    *(_OWORD *)Block = 0; /*0x655a2a*/
    si128 = _mm_load_si128((const __m128i *)&Size); /*0x655a37*/
    LOBYTE(Block[0]) = 0; /*0x655a3d*/
    v21 = Block; /*0x655a41*/
    v22 = 1; /*0x655a46*/
  }
  v32 = 0; /*0x655a69*/
  v33 = 0u; /*0x655a6e*/
  v32 = *(_OWORD *)v21; /*0x655a7b*/
  v33 = *((_OWORD *)v21 + 1); /*0x655a84*/
  v21[2] = 0; /*0x655a89*/
  v21[3] = &loc_D + 2; /*0x655a8d*/
  *(_BYTE *)v21 = 0; /*0x655a95*/
  if ( (v22 & 2) != 0 ) /*0x655a9c*/
  {
    v22 &= ~2u; /*0x655a9e*/
    sub_3C310(v34); /*0x655aa6*/
  }
  if ( (v22 & 1) != 0 && si128.m128i_i64[1] > 0xFuLL ) /*0x655abb*/
  {
    v23 = Block[0]; /*0x655ac0*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x655acf*/
    {
      v23 = (void *)*((_QWORD *)Block[0] - 1); /*0x655ad5*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v23 - 8) > 0x1F ) /*0x655ae4*/
        invoke_watson(0, 0, 0, 0, 0); /*0x655af5*/
    }
    j_j_free(v23); /*0x655afc*/
  }
  if ( (_QWORD)v33 ) /*0x655b07*/
  {
    v24 = (cocos2d::CCArray *)sub_6325A0(&v32); /*0x655b13*/
    if ( cocos2d::CCArray::count(v24) ) /*0x655b19*/
    {
      do /*0x655b78*/
      {
        v25 = cocos2d::CCArray::stringAtIndex(v24, v6); /*0x655b28*/
        v28 = cocos2d::CCString::intValue(v25); /*0x655b37*/
        v26 = cocos2d::CCArray::stringAtIndex(v24, v6 + 1); /*0x655b41*/
        v29 = cocos2d::CCString::intValue(v26); /*0x655b50*/
        sub_5CFDB0(a1 + 1856, &v28, &v29); /*0x655b65*/
        v6 += 2; /*0x655b6a*/
      }
      while ( v6 < cocos2d::CCArray::count(v24) ); /*0x655b78*/
    }
  }
  return sub_3C310(&v32); /*0x655b84*/
}

// [6/6] Address: 0x655bc0
// Method: SpawnTriggerGameObject::getSaveString
// Hidden C++ exception states: #wind=2
__int64 __fastcall SpawnTriggerGameObject_getSaveString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SaveString; // rax
  int v7; // esi
  unsigned int *v8; // r14
  unsigned int *i; // rbx
  __int64 v10; // rax
  __int64 v11; // r8
  const char *v13; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+28h] [rbp-D8h]
  _OWORD v15[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v16[528]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v17[32]; // [rsp+260h] [rbp+160h] BYREF

  v13 = (const char *)a2; /*0x655bfc*/
  fmt::BasicWriter<char>::BasicWriter<char>(v16); /*0x655c09*/
  SaveString = EffectGameObject_getSaveString(a1, (__int64)v17, a3); /*0x655c1d*/
  v15[0] = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(&v13, SaveString); /*0x655c34*/
  fmt::BasicWriter<char>::operator<<(v16, v15); /*0x655c43*/
  sub_3C310(v17); /*0x655c51*/
  if ( *(_DWORD *)(a1 + 1480) ) /*0x655c5d*/
  {
    v13 = (const char *)&unk_709CE8; /*0x655c66*/
    v14 = 0; /*0x655c6b*/
    fmt::BasicWriter<char>::operator<<(v16, &v13); /*0x655c7a*/
    fmt::BasicWriter<char>::operator<<(v16, 51); /*0x655c8a*/
    v13 = (const char *)&unk_709CE8; /*0x655c90*/
    v14 = 0; /*0x655c95*/
    fmt::BasicWriter<char>::operator<<(v16, &v13); /*0x655ca4*/
    fmt::BasicWriter<char>::operator<<(v16, *(unsigned int *)(a1 + 1480)); /*0x655cb5*/
  }
  if ( *(float *)(a1 + 1920) != 0.0 ) /*0x655ccb*/
  {
    v13 = (const char *)&unk_709CE8; /*0x655ccd*/
    v14 = 0; /*0x655cd2*/
    fmt::BasicWriter<char>::operator<<(v16, &v13); /*0x655ce1*/
    fmt::BasicWriter<char>::operator<<(v16, 63); /*0x655cf1*/
    v13 = (const char *)&unk_709CE8; /*0x655cf7*/
    v14 = 0; /*0x655cfc*/
    fmt::BasicWriter<char>::operator<<(v16, &v13); /*0x655d0b*/
    fmt::BasicWriter<char>::operator<<(v16); /*0x655d21*/
  }
  if ( *(float *)(a1 + 1924) != 0.0 ) /*0x655d34*/
  {
    v13 = (const char *)&unk_709CE8; /*0x655d36*/
    v14 = 0; /*0x655d3b*/
    fmt::BasicWriter<char>::operator<<(v16, &v13); /*0x655d4a*/
    fmt::BasicWriter<char>::operator<<(v16, 556); /*0x655d5a*/
    v13 = (const char *)&unk_709CE8; /*0x655d60*/
    v14 = 0; /*0x655d65*/
    fmt::BasicWriter<char>::operator<<(v16, &v13); /*0x655d74*/
    fmt::BasicWriter<char>::operator<<(v16); /*0x655d8a*/
  }
  if ( *(_BYTE *)(a1 + 1681) ) /*0x655d90*/
  {
    v13 = (const char *)&unk_709CE8; /*0x655d99*/
    v14 = 0; /*0x655d9e*/
    fmt::BasicWriter<char>::operator<<(v16, &v13); /*0x655dad*/
    fmt::BasicWriter<char>::operator<<(v16, 102); /*0x655dbd*/
    v13 = (const char *)&unk_709CE8; /*0x655dc3*/
    v14 = 0; /*0x655dc8*/
    fmt::BasicWriter<char>::operator<<(v16, &v13); /*0x655dd7*/
    fmt::BasicWriter<char>::operator<<(v16, *(unsigned __int8 *)(a1 + 1681)); /*0x655de9*/
  }
  if ( *(_BYTE *)(a1 + 1682) ) /*0x655def*/
  {
    v13 = (const char *)&unk_709CE8; /*0x655df8*/
    v14 = 0; /*0x655dfd*/
    fmt::BasicWriter<char>::operator<<(v16, &v13); /*0x655e0c*/
    fmt::BasicWriter<char>::operator<<(v16, 441); /*0x655e1c*/
    v13 = (const char *)&unk_709CE8; /*0x655e22*/
    v14 = 0; /*0x655e27*/
    fmt::BasicWriter<char>::operator<<(v16, &v13); /*0x655e36*/
    fmt::BasicWriter<char>::operator<<(v16, *(unsigned __int8 *)(a1 + 1682)); /*0x655e48*/
  }
  if ( *(_BYTE *)(a1 + 1928) ) /*0x655e4e*/
  {
    v13 = (const char *)&unk_709CE8; /*0x655e57*/
    v14 = 0; /*0x655e5c*/
    fmt::BasicWriter<char>::operator<<(v16, &v13); /*0x655e6b*/
    fmt::BasicWriter<char>::operator<<(v16, 581); /*0x655e7b*/
    v13 = (const char *)&unk_709CE8; /*0x655e81*/
    v14 = 0; /*0x655e86*/
    fmt::BasicWriter<char>::operator<<(v16, &v13); /*0x655e95*/
    fmt::BasicWriter<char>::operator<<(v16, *(unsigned __int8 *)(a1 + 1928)); /*0x655ea7*/
  }
  if ( *(_QWORD *)(a1 + 1856) != *(_QWORD *)(a1 + 1864) ) /*0x655ebb*/
  {
    v13 = (const char *)&unk_709CE8; /*0x655ec1*/
    v14 = 0; /*0x655ec6*/
    fmt::BasicWriter<char>::operator<<(v16, &v13); /*0x655ed5*/
    fmt::BasicWriter<char>::operator<<(v16, 442); /*0x655ee5*/
    v13 = (const char *)&unk_709CE8; /*0x655eeb*/
    v14 = 0; /*0x655ef0*/
    fmt::BasicWriter<char>::operator<<(v16, &v13); /*0x655eff*/
    v7 = 0; /*0x655f05*/
    v8 = *(unsigned int **)(a1 + 1864); /*0x655f08*/
    for ( i = *(unsigned int **)(a1 + 1856); i != v8; i += 4 ) /*0x655f19*/
    {
      if ( v7 > 0 ) /*0x655f24*/
      {
        v13 = "."; /*0x655f26*/
        v14 = 0; /*0x655f2b*/
        fmt::BasicWriter<char>::operator<<(v16, &v13); /*0x655f3a*/
      }
      fmt::BasicWriter<char>::operator<<(v16, *i); /*0x655f47*/
      *(_QWORD *)&v15[0] = "."; /*0x655f4d*/
      *((_QWORD *)&v15[0] + 1) = 0; /*0x655f52*/
      fmt::BasicWriter<char>::operator<<(v16, v15); /*0x655f61*/
      fmt::BasicWriter<char>::operator<<(v16, i[2]); /*0x655f6f*/
      ++v7; /*0x655f75*/
    }
  }
  v10 = fmt::BasicWriter<char>::c_str(v16); /*0x655f85*/
  *(_OWORD *)a2 = 0; /*0x655f8e*/
  *(_QWORD *)(a2 + 16) = 0; /*0x655f92*/
  *(_QWORD *)(a2 + 24) = 0; /*0x655f96*/
  v11 = -1; /*0x655f9a*/
  do /*0x655fa4*/
    ++v11; /*0x655fa1*/
  while ( *(_BYTE *)(v10 + v11) ); /*0x655fa4*/
  sub_3C230(a2); /*0x655fb1*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v16); /*0x655fbc*/
  return a2; /*0x655fc5*/
}
