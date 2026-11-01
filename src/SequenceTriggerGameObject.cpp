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
