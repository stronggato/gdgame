#include <Geode/binding/SequenceTriggerGameObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/6] Address: 0x633400
// Method: SequenceTriggerGameObject::~SequenceTriggerGameObject
_QWORD *__fastcall SequenceTriggerGameObject__dtor_SequenceTriggerGameObject(_QWORD *Block, char a2)
{
  sub_3DA90(Block + 246); /*0x633416*/
  sub_3DB00(Block + 244); /*0x633422*/
  sub_3DA90(Block + 238); /*0x63342e*/
  sub_3DB00(Block + 236); /*0x63343a*/
  sub_C4C10(Block + 232); /*0x633446*/
  *Block = &EffectGameObject::`vftable'; /*0x633455*/
  Block[40] = &EffectGameObject::`vftable'; /*0x63345f*/
  Block[43] = &EffectGameObject::`vftable'; /*0x63346d*/
  TextGameObject__dtor_TextGameObject((cocos2d::CCSprite *)Block); /*0x633474*/
  if ( (a2 & 1) != 0 ) /*0x63347c*/
    j_j_free(Block); /*0x633486*/
  return Block; /*0x63348b*/
}

// [2/6] Address: 0x650e60
// Method: SequenceTriggerGameObject::init
bool __fastcall SequenceTriggerGameObject_init(__int64 a1)
{
  return EffectGameObject_init(a1, "edit_eSequenceBtn_001.png") != 0; /*0x650e75*/
}

// [3/6] Address: 0x650e80
// Method: SequenceTriggerGameObject::resetObject
double __fastcall SequenceTriggerGameObject_resetObject(__int64 a1)
{
  EnhancedGameObject_resetObject(a1); /*0x650e89*/
  sub_3DB60(a1 + 1944); /*0x650e95*/
  return sub_3DB60(a1 + 1880); /*0x650ea1*/
}

// [5/6] Address: 0x651300
// Method: SequenceTriggerGameObject::customObjectSetup
// Hidden C++ exception states: #wind=3
double __fastcall SequenceTriggerGameObject_customObjectSetup(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // ebx
  float v7; // xmm6_4
  float v8; // xmm1_4
  const char *v9; // rcx
  float v10; // xmm8_4
  int v11; // eax
  const char *v12; // rcx
  int v13; // eax
  const char *v14; // rcx
  const char *v15; // rcx
  float v16; // xmm8_4
  int v17; // eax
  const char *v18; // rcx
  void **v19; // rax
  char v20; // si
  void *v21; // rcx
  cocos2d::CCArray *v22; // rbp
  unsigned int i; // esi
  cocos2d::CCString *v24; // rax
  cocos2d::CCString *v25; // rax
  __int64 v26; // r8
  __int64 j; // rdx
  int v28; // ecx
  int v30; // [rsp+30h] [rbp-C8h] BYREF
  int v31; // [rsp+34h] [rbp-C4h] BYREF
  void *Block[2]; // [rsp+38h] [rbp-C0h] BYREF
  __m128i si128; // [rsp+48h] [rbp-B0h]
  __int128 v34; // [rsp+58h] [rbp-A0h] BYREF
  __int128 v35; // [rsp+68h] [rbp-90h]
  _BYTE v36[32]; // [rsp+78h] [rbp-80h] BYREF

  v6 = 0; /*0x651338*/
  v30 = 0; /*0x65133a*/
  EffectGameObject_customObjectSetup(a1, a2, a3); /*0x65133e*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3496LL) ) /*0x65134e*/
  {
    v9 = (const char *)(*(_QWORD *)a2 + 13984LL); /*0x651362*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 14008LL) > 0xFu ) /*0x65136e*/
      v9 = *(const char **)v9; /*0x651370*/
    v10 = atof(v9); /*0x65137d*/
    v7 = 0.0; /*0x65138c*/
    if ( isnan(v10) ) /*0x651386*/
      v8 = 0.0; /*0x651393*/
    else
      v8 = fminf(1000000000.0, fmaxf(-1000000000.0, v10)); /*0x6513a8*/
  }
  else
  {
    v7 = 0.0; /*0x651357*/
    v8 = 0.0; /*0x65135a*/
  }
  *(float *)(a1 + 2008) = v8; /*0x6513ac*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3488LL) ) /*0x6513b7*/
  {
    v12 = (const char *)(*(_QWORD *)a2 + 13952LL); /*0x6513c7*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 13976LL) > 0xFu ) /*0x6513d3*/
      v12 = *(const char **)v12; /*0x6513d5*/
    v11 = atoi(v12); /*0x6513d8*/
  }
  else
  {
    v11 = 0; /*0x6513c0*/
  }
  *(_DWORD *)(a1 + 2012) = v11; /*0x6513de*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3512LL) ) /*0x6513e7*/
  {
    v14 = (const char *)(*(_QWORD *)a2 + 14048LL); /*0x6513f7*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 14072LL) > 0xFu ) /*0x651403*/
      v14 = *(const char **)v14; /*0x651405*/
    v13 = atoi(v14); /*0x651408*/
  }
  else
  {
    v13 = 0; /*0x6513f0*/
  }
  *(_DWORD *)(a1 + 2016) = v13; /*0x65140e*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3504LL) ) /*0x651417*/
  {
    v15 = (const char *)(*(_QWORD *)a2 + 14016LL); /*0x651423*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 14040LL) > 0xFu ) /*0x65142f*/
      v15 = *(const char **)v15; /*0x651431*/
    v16 = atof(v15); /*0x65143e*/
    if ( !isnan(v16) ) /*0x651447*/
      v7 = fminf(1000000000.0, fmaxf(-1000000000.0, v16)); /*0x65145e*/
  }
  *(float *)(a1 + 2020) = v7; /*0x651462*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4040LL) ) /*0x65146d*/
  {
    v18 = (const char *)(*(_QWORD *)a2 + 16160LL); /*0x65147d*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 16184LL) > 0xFu ) /*0x651489*/
      v18 = *(const char **)v18; /*0x65148b*/
    v17 = atoi(v18); /*0x65148e*/
  }
  else
  {
    v17 = 0; /*0x651476*/
  }
  *(_BYTE *)(a1 + 2028) = v17 != 0; /*0x651499*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3480LL) ) /*0x6514a2*/
  {
    v19 = (void **)sub_3E4F0(v36, *(_QWORD *)a2 + 13920LL); /*0x6514e0*/
    v20 = 2; /*0x6514e5*/
  }
  else
  {
    *(_OWORD *)Block = 0; /*0x6514ae*/
    si128 = _mm_load_si128((const __m128i *)&Size); /*0x6514bb*/
    LOBYTE(Block[0]) = 0; /*0x6514c1*/
    v19 = Block; /*0x6514c5*/
    v20 = 1; /*0x6514ca*/
  }
  v34 = 0; /*0x6514ed*/
  v35 = 0; /*0x6514f5*/
  v34 = *(_OWORD *)v19; /*0x6514fe*/
  v35 = *((_OWORD *)v19 + 1); /*0x651507*/
  v19[2] = 0; /*0x65150c*/
  v19[3] = &loc_D + 2; /*0x651510*/
  *(_BYTE *)v19 = 0; /*0x651518*/
  if ( (v20 & 2) != 0 ) /*0x65151f*/
  {
    v20 &= ~2u; /*0x651521*/
    sub_3C310(v36); /*0x651529*/
  }
  if ( (v20 & 1) != 0 && si128.m128i_i64[1] > 0xFuLL ) /*0x65153e*/
  {
    v21 = Block[0]; /*0x651543*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x651552*/
    {
      v21 = (void *)*((_QWORD *)Block[0] - 1); /*0x651558*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v21 - 8) > 0x1F ) /*0x651567*/
        invoke_watson(0, 0, 0, 0, 0); /*0x651578*/
    }
    j_j_free(v21); /*0x65157f*/
  }
  v22 = (cocos2d::CCArray *)sub_6325A0(&v34); /*0x65158e*/
  for ( i = 0; i < cocos2d::CCArray::count(v22); i += 2 ) /*0x651596*/
  {
    v24 = cocos2d::CCArray::stringAtIndex(v22, i); /*0x6515a5*/
    v30 = cocos2d::CCString::intValue(v24); /*0x6515b4*/
    v25 = cocos2d::CCArray::stringAtIndex(v22, i + 1); /*0x6515be*/
    v31 = cocos2d::CCString::intValue(v25); /*0x6515cd*/
    sub_5CFDB0(a1 + 1856, &v30, &v31); /*0x6515e2*/
  }
  *(_DWORD *)(a1 + 2024) = 0; /*0x6515f7*/
  v26 = *(_QWORD *)(a1 + 1864); /*0x6515fd*/
  for ( j = *(_QWORD *)(a1 + 1856); j != v26; v6 = v28 ) /*0x65160e*/
  {
    v28 = v6 + *(_DWORD *)(j + 8); /*0x651613*/
    *(_DWORD *)(a1 + 2024) = v28; /*0x651615*/
    j += 16; /*0x65161b*/
  }
  return sub_3C310(&v34); /*0x651630*/
}

// [6/6] Address: 0x651670
// Method: SequenceTriggerGameObject::getSaveString
// Hidden C++ exception states: #wind=2
__int64 __fastcall SequenceTriggerGameObject_getSaveString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SaveString; // rax
  int v7; // esi
  unsigned int *v8; // r14
  unsigned int *i; // rbx
  __int64 v10; // rax
  __int64 v11; // r8
  const char *v13; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+28h] [rbp-D8h]
  __int128 v15; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v16[40]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v17[528]; // [rsp+70h] [rbp-90h] BYREF

  v13 = (const char *)a2; /*0x6516ac*/
  fmt::BasicWriter<char>::BasicWriter<char>(v17); /*0x6516b9*/
  SaveString = EffectGameObject_getSaveString(a1, (__int64)v16, a3); /*0x6516cb*/
  v15 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(&v13, SaveString); /*0x6516e2*/
  fmt::BasicWriter<char>::operator<<(v17, &v15); /*0x6516f1*/
  sub_3C310(v16); /*0x6516fd*/
  if ( *(float *)(a1 + 2008) != 0.0 ) /*0x651719*/
  {
    v13 = (const char *)&unk_709CE8; /*0x65171b*/
    v14 = 0; /*0x651720*/
    fmt::BasicWriter<char>::operator<<(v17, &v13); /*0x65172f*/
    fmt::BasicWriter<char>::operator<<(v17, 437); /*0x65173f*/
    v13 = (const char *)&unk_709CE8; /*0x651745*/
    v14 = 0; /*0x65174a*/
    fmt::BasicWriter<char>::operator<<(v17, &v13); /*0x651759*/
    fmt::BasicWriter<char>::operator<<(v17); /*0x65176f*/
  }
  if ( *(_DWORD *)(a1 + 2012) ) /*0x651775*/
  {
    v13 = (const char *)&unk_709CE8; /*0x65177e*/
    v14 = 0; /*0x651783*/
    fmt::BasicWriter<char>::operator<<(v17, &v13); /*0x651792*/
    fmt::BasicWriter<char>::operator<<(v17, 436); /*0x6517a2*/
    v13 = (const char *)&unk_709CE8; /*0x6517a8*/
    v14 = 0; /*0x6517ad*/
    fmt::BasicWriter<char>::operator<<(v17, &v13); /*0x6517bc*/
    fmt::BasicWriter<char>::operator<<(v17, *(unsigned int *)(a1 + 2012)); /*0x6517cd*/
  }
  if ( *(_DWORD *)(a1 + 2016) ) /*0x6517d3*/
  {
    v13 = (const char *)&unk_709CE8; /*0x6517dc*/
    v14 = 0; /*0x6517e1*/
    fmt::BasicWriter<char>::operator<<(v17, &v13); /*0x6517f0*/
    fmt::BasicWriter<char>::operator<<(v17, 439); /*0x651800*/
    v13 = (const char *)&unk_709CE8; /*0x651806*/
    v14 = 0; /*0x65180b*/
    fmt::BasicWriter<char>::operator<<(v17, &v13); /*0x65181a*/
    fmt::BasicWriter<char>::operator<<(v17, *(unsigned int *)(a1 + 2016)); /*0x65182b*/
  }
  if ( *(float *)(a1 + 2020) != 0.0 ) /*0x65183e*/
  {
    v13 = (const char *)&unk_709CE8; /*0x651840*/
    v14 = 0; /*0x651845*/
    fmt::BasicWriter<char>::operator<<(v17, &v13); /*0x651854*/
    fmt::BasicWriter<char>::operator<<(v17, 438); /*0x651864*/
    v13 = (const char *)&unk_709CE8; /*0x65186a*/
    v14 = 0; /*0x65186f*/
    fmt::BasicWriter<char>::operator<<(v17, &v13); /*0x65187e*/
    fmt::BasicWriter<char>::operator<<(v17); /*0x651894*/
  }
  if ( *(_BYTE *)(a1 + 2028) ) /*0x65189a*/
  {
    v13 = (const char *)&unk_709CE8; /*0x6518a3*/
    v14 = 0; /*0x6518a8*/
    fmt::BasicWriter<char>::operator<<(v17, &v13); /*0x6518b7*/
    fmt::BasicWriter<char>::operator<<(v17, 505); /*0x6518c7*/
    v13 = (const char *)&unk_709CE8; /*0x6518cd*/
    v14 = 0; /*0x6518d2*/
    fmt::BasicWriter<char>::operator<<(v17, &v13); /*0x6518e1*/
    fmt::BasicWriter<char>::operator<<(v17, *(unsigned __int8 *)(a1 + 2028)); /*0x6518f3*/
  }
  if ( *(_QWORD *)(a1 + 1856) != *(_QWORD *)(a1 + 1864) ) /*0x651907*/
  {
    v13 = (const char *)&unk_709CE8; /*0x65190d*/
    v14 = 0; /*0x651912*/
    fmt::BasicWriter<char>::operator<<(v17, &v13); /*0x651921*/
    fmt::BasicWriter<char>::operator<<(v17, 435); /*0x651931*/
    v13 = (const char *)&unk_709CE8; /*0x651937*/
    v14 = 0; /*0x65193c*/
    fmt::BasicWriter<char>::operator<<(v17, &v13); /*0x65194b*/
    v7 = 0; /*0x651951*/
    v8 = *(unsigned int **)(a1 + 1864); /*0x651954*/
    for ( i = *(unsigned int **)(a1 + 1856); i != v8; i += 4 ) /*0x651965*/
    {
      if ( v7 > 0 ) /*0x651972*/
      {
        v13 = "."; /*0x651974*/
        v14 = 0; /*0x651979*/
        fmt::BasicWriter<char>::operator<<(v17, &v13); /*0x651988*/
      }
      fmt::BasicWriter<char>::operator<<(v17, *i); /*0x651995*/
      *(_QWORD *)&v15 = "."; /*0x65199b*/
      *((_QWORD *)&v15 + 1) = 0; /*0x6519a0*/
      fmt::BasicWriter<char>::operator<<(v17, &v15); /*0x6519af*/
      fmt::BasicWriter<char>::operator<<(v17, i[2]); /*0x6519bd*/
      ++v7; /*0x6519c3*/
    }
  }
  v10 = fmt::BasicWriter<char>::c_str(v17); /*0x6519d3*/
  *(_OWORD *)a2 = 0; /*0x6519dc*/
  *(_QWORD *)(a2 + 16) = 0; /*0x6519e0*/
  *(_QWORD *)(a2 + 24) = 0; /*0x6519e4*/
  v11 = -1; /*0x6519e8*/
  do /*0x6519f3*/
    ++v11; /*0x6519f0*/
  while ( *(_BYTE *)(v10 + v11) ); /*0x6519f3*/
  sub_3C230(a2); /*0x651a00*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v17); /*0x651a0b*/
  return a2; /*0x651a14*/
}

// Address: 0x650eb0
// Method: SequenceTriggerGameObject::triggerObject
// Hidden C++ exception states: #wind=2
void __fastcall SequenceTriggerGameObject_triggerObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // r12d
  int v8; // r8d
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  float v13; // xmm6_4
  int v14; // ebx
  float v15; // xmm0_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  int i; // edx
  __int64 v19; // r8
  __int64 v20; // rcx
  int v21; // ebx
  int v22; // r14d
  int v23; // eax
  int v24; // ecx
  unsigned int *v25; // rax
  unsigned int *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  unsigned __int64 v32; // rbx
  __int64 v33; // rbx
  char *v34; // rdi
  signed __int64 v35; // rbx
  void *v36; // rcx
  void *v37; // rcx
  void *v38[2]; // [rsp+40h] [rbp-29h] BYREF
  char *v39; // [rsp+50h] [rbp-19h]
  void *Block[2]; // [rsp+58h] [rbp-11h]
  __int64 v41; // [rsp+68h] [rbp-1h]
  int v42; // [rsp+D0h] [rbp+67h] BYREF
  int v43; // [rsp+D8h] [rbp+6Fh]

  v7 = 0;
  v43 = 0;
  v8 = 0;
  v42 = 0;
  if ( *(_BYTE *)(a1 + 2028) )
  {
    if ( a4 )
    {
      v9 = *(_QWORD *)(a4 + 8);
      if ( *(_QWORD *)a4 != v9 )
      {
        v8 = -*(_DWORD *)(v9 - 4);
        v42 = v8;
      }
    }
  }
  v10 = *(_QWORD *)(a1 + 1904);
  v11 = *(_QWORD *)(v10
                  + 16
                  * (*(_QWORD *)(a1 + 1928)
                   & (0x100000001B3LL
                    * (HIBYTE(v8)
                     ^ (0x100000001B3LL
                      * (BYTE2(v8)
                       ^ (0x100000001B3LL
                        * (BYTE1(v8) ^ (0x100000001B3LL * ((unsigned __int8)v8 ^ 0xCBF29CE484222325uLL)))))))))
                  + 8);
  if ( v11 != *(_QWORD *)(a1 + 1888) )
  {
    v12 = *(_QWORD *)(v10
                    + 16
                    * (*(_QWORD *)(a1 + 1928)
                     & (0x100000001B3LL
                      * (HIBYTE(v8)
                       ^ (0x100000001B3LL
                        * (BYTE2(v8)
                         ^ (0x100000001B3LL
                          * (BYTE1(v8) ^ (0x100000001B3LL * ((unsigned __int8)v8 ^ 0xCBF29CE484222325uLL))))))))));
    if ( v8 == *(_DWORD *)(v11 + 16) )
      goto LABEL_11;
    while ( v11 != v12 )
    {
      v11 = *(_QWORD *)(v11 + 8);
      if ( v8 == *(_DWORD *)(v11 + 16) )
        goto LABEL_11;
    }
  }
  v11 = 0;
LABEL_11:
  if ( v11 )
    v13 = *(float *)(*(_QWORD *)sub_66DF0(a1 + 1880, v38, &v42) + 20LL);
  else
    v13 = -1.0;
  v14 = *(_DWORD *)(*(_QWORD *)sub_66DF0(a1 + 1944, v38, &v42) + 20LL);
  v15 = *(double *)(a2 + 984) - v13;
  v16 = *(float *)(a1 + 2008);
  if ( v16 <= 0.0 || v13 < 0.0 || v16 <= v15 )
  {
    if ( v14 > 0 )
    {
      v17 = *(float *)(a1 + 2020);
      if ( v17 > 0.0 && v13 >= 0.0 && v15 > v17 )
      {
        if ( *(_DWORD *)(a1 + 2016) )
          v14 = (int)fmaxf(0.0, (float)v14 - floorf(v15 / v17));
        else
          v14 = 0;
      }
    }
    *(float *)(*(_QWORD *)sub_66DF0(a1 + 1880, v38, &v42) + 20LL) = *(double *)(a2 + 984);
    i = *(_DWORD *)(a1 + 2024);
    if ( i == -1 )
    {
      *(_DWORD *)(a1 + 2024) = 0;
      v19 = *(_QWORD *)(a1 + 1864);
      v20 = *(_QWORD *)(a1 + 1856);
      for ( i = 0; v20 != v19; v20 += 16 )
      {
        i += *(_DWORD *)(v20 + 8);
        *(_DWORD *)(a1 + 2024) = i;
      }
    }
    v21 = v14 + 1;
    v22 = 1;
    if ( v21 > i )
    {
      v23 = *(_DWORD *)(a1 + 2012);
      switch ( v23 )
      {
        case 0:
          return;
        case 1:
          v21 = 1;
          break;
        case 2:
          v21 = i;
          break;
      }
    }
    v24 = 0;
    v25 = *(unsigned int **)(a1 + 1856);
    v26 = *(unsigned int **)(a1 + 1864);
    if ( v25 != v26 )
    {
      while ( 1 )
      {
        v24 += v25[2];
        if ( v24 >= v21 )
          break;
        v25 += 4;
        if ( v25 == v26 )
          goto LABEL_38;
      }
      v7 = *v25;
    }
LABEL_38:
    v27 = sub_66DF0(a1 + 1944, v38, &v42);
    v31 = *(_QWORD *)v27;
    *(_DWORD *)(*(_QWORD *)v27 + 20LL) = v21;
    if ( a4 )
    {
      *(_OWORD *)v38 = 0;
      v39 = 0;
      v32 = (__int64)(*(_QWORD *)(a4 + 8) - *(_QWORD *)a4) >> 2;
      if ( v32 )
      {
        if ( v32 > 0x3FFFFFFFFFFFFFFFLL )
          sub_59000(v31, v28, v29, v30);
        v33 = 4 * v32;
        v34 = (char *)sub_3C460(v33);
        v38[0] = v34;
        v38[1] = v34;
        v39 = &v34[v33];
        v35 = *(_QWORD *)(a4 + 8) - *(_QWORD *)a4;
        memmove(v34, *(const void **)a4, v35);
        v38[1] = &v34[4 * (v35 >> 2)];
      }
    }
    else
    {
      *(_OWORD *)Block = 0;
      v41 = 0;
      v22 = 2;
    }
    v43 = v22;
    if ( !*(_BYTE *)(a2 + 13712) )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a2 + 408) + 8LL))(a2 + 408, v7, 0);
    if ( (v22 & 2) != 0 )
    {
      LOBYTE(v22) = v22 & 0xFD;
      v36 = Block[0];
      if ( Block[0] )
      {
        if ( ((v41 - (unsigned __int64)Block[0]) & 0xFFFFFFFFFFFFFFFCuLL) >= 0x1000 )
        {
          v36 = (void *)*((_QWORD *)Block[0] - 1);
          if ( (unsigned __int64)((char *)Block[0] - (char *)v36 - 8) > 0x1F )
            invoke_watson(0, 0, 0, 0, 0);
        }
        j_j_free(v36);
        *(_OWORD *)Block = 0;
        v41 = 0;
      }
    }
    if ( (v22 & 1) != 0 )
    {
      v37 = v38[0];
      if ( v38[0] )
      {
        if ( ((v39 - (char *)v38[0]) & 0xFFFFFFFFFFFFFFFCuLL) >= 0x1000 )
        {
          v37 = (void *)*((_QWORD *)v38[0] - 1);
          if ( (unsigned __int64)((char *)v38[0] - (char *)v37 - 8) > 0x1F )
            invoke_watson(0, 0, 0, 0, 0);
        }
        j_j_free(v37);
      }
    }
  }
}
