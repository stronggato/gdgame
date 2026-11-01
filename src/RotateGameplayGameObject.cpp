#include <Geode/binding/RotateGameplayGameObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x6601e0
// Method: RotateGameplayGameObject::init
char __fastcall RotateGameplayGameObject_init(__int64 a1)
{
  *(_DWORD *)(a1 + 28) = 13; /*0x6601ed*/
  if ( !cocos2d::CCSprite::initWithSpriteFrameName((cocos2d::CCSprite *)a1, "edit_eGameRotBtn_001.png") ) /*0x6601f7*/
    return 0; /*0x660243*/
  sub_287800(a1); /*0x660204*/
  *(_BYTE *)(a1 + 313) = 0; /*0x660209*/
  *(_DWORD *)(a1 + 1256) = 1; /*0x660212*/
  *(_WORD *)(a1 + 1465) = -1; /*0x66021c*/
  *(_BYTE *)(a1 + 1467) = -1; /*0x660225*/
  *(_DWORD *)(a1 + 1468) = 1056964608; /*0x66022c*/
  *(_BYTE *)(a1 + 1652) = 1; /*0x660236*/
  return 1; /*0x66023d*/
}

// [2/4] Address: 0x660250
// Method: RotateGameplayGameObject::getSaveString
// Hidden C++ exception states: #wind=2
__int64 __fastcall RotateGameplayGameObject_getSaveString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SaveString; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v11[24]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[528]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v13[32]; // [rsp+260h] [rbp+160h] BYREF

  *(_QWORD *)&v10 = a2; /*0x660288*/
  fmt::BasicWriter<char>::BasicWriter<char>(v12); /*0x660295*/
  SaveString = EffectGameObject_getSaveString(a1, (__int64)v13, a3); /*0x6602a9*/
  v10 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v11, SaveString); /*0x6602c0*/
  fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6602cf*/
  sub_3C310(v13); /*0x6602dd*/
  if ( *(_BYTE *)(a1 + 1864) ) /*0x6602e9*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6602f2*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6602f7*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x660306*/
    fmt::BasicWriter<char>::operator<<(v12, 169); /*0x660316*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x66031c*/
    *((_QWORD *)&v10 + 1) = 0; /*0x660321*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x660330*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1864)); /*0x660342*/
  }
  if ( *(_BYTE *)(a1 + 1865) ) /*0x660348*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x660351*/
    *((_QWORD *)&v10 + 1) = 0; /*0x660356*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x660365*/
    fmt::BasicWriter<char>::operator<<(v12, 584); /*0x660375*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x66037b*/
    *((_QWORD *)&v10 + 1) = 0; /*0x660380*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x66038f*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1865)); /*0x6603a1*/
  }
  if ( *(float *)(a1 + 1868) != 0.0 ) /*0x6603b7*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6603b9*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6603be*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6603cd*/
    fmt::BasicWriter<char>::operator<<(v12, 582); /*0x6603dd*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6603e3*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6603e8*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6603f7*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x66040d*/
  }
  if ( *(float *)(a1 + 1872) != 0.0 ) /*0x660420*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x660422*/
    *((_QWORD *)&v10 + 1) = 0; /*0x660427*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x660436*/
    fmt::BasicWriter<char>::operator<<(v12, 583); /*0x660446*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x66044c*/
    *((_QWORD *)&v10 + 1) = 0; /*0x660451*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x660460*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x660476*/
  }
  if ( *(_DWORD *)(a1 + 1856) ) /*0x66047c*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x660485*/
    *((_QWORD *)&v10 + 1) = 0; /*0x66048a*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x660499*/
    fmt::BasicWriter<char>::operator<<(v12, 166); /*0x6604a9*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6604af*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6604b4*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6604c3*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1856)); /*0x6604d4*/
  }
  if ( *(_DWORD *)(a1 + 1860) ) /*0x6604da*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6604e3*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6604e8*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6604f7*/
    fmt::BasicWriter<char>::operator<<(v12, 167); /*0x660507*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x66050d*/
    *((_QWORD *)&v10 + 1) = 0; /*0x660512*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x660521*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1860)); /*0x660532*/
  }
  if ( *(_BYTE *)(a1 + 1876) ) /*0x660538*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x660541*/
    *((_QWORD *)&v10 + 1) = 0; /*0x660546*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x660555*/
    fmt::BasicWriter<char>::operator<<(v12, 171); /*0x660565*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x66056b*/
    *((_QWORD *)&v10 + 1) = 0; /*0x660570*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x66057f*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1876)); /*0x660591*/
  }
  if ( *(_BYTE *)(a1 + 1877) ) /*0x660597*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6605a0*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6605a5*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6605b4*/
    fmt::BasicWriter<char>::operator<<(v12, 172); /*0x6605c4*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6605ca*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6605cf*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6605de*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1877)); /*0x6605f0*/
  }
  if ( *(_DWORD *)(a1 + 1880) ) /*0x6605f6*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6605ff*/
    *((_QWORD *)&v10 + 1) = 0; /*0x660604*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x660613*/
    fmt::BasicWriter<char>::operator<<(v12, 173); /*0x660623*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x660629*/
    *((_QWORD *)&v10 + 1) = 0; /*0x66062e*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x66063d*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1880)); /*0x66064e*/
  }
  if ( *(_BYTE *)(a1 + 1884) ) /*0x660654*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x66065d*/
    *((_QWORD *)&v10 + 1) = 0; /*0x660662*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x660671*/
    fmt::BasicWriter<char>::operator<<(v12, 368); /*0x660681*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x660687*/
    *((_QWORD *)&v10 + 1) = 0; /*0x66068c*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x66069b*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1884)); /*0x6606ad*/
  }
  if ( *(_BYTE *)(a1 + 1885) ) /*0x6606b3*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6606bc*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6606c1*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6606d0*/
    fmt::BasicWriter<char>::operator<<(v12, 585); /*0x6606e0*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6606e6*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6606eb*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6606fa*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1885)); /*0x66070c*/
  }
  v7 = fmt::BasicWriter<char>::c_str(v12); /*0x660717*/
  *(_OWORD *)a2 = 0; /*0x660720*/
  *(_QWORD *)(a2 + 16) = 0; /*0x660723*/
  *(_QWORD *)(a2 + 24) = 0; /*0x660727*/
  v8 = -1; /*0x66072b*/
  do /*0x660735*/
    ++v8; /*0x660732*/
  while ( *(_BYTE *)(v7 + v8) ); /*0x660735*/
  sub_3C230(a2); /*0x660742*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v12); /*0x66074d*/
  return a2; /*0x660756*/
}

// [3/4] Address: 0x660780
// Method: RotateGameplayGameObject::customObjectSetup
bool __fastcall RotateGameplayGameObject_customObjectSetup(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // esi
  int v7; // eax
  const char *v8; // rcx
  int v9; // eax
  const char *v10; // rcx
  float v11; // xmm6_4
  float v12; // xmm1_4
  const char *v13; // rcx
  float v14; // xmm8_4
  const char *v15; // rcx
  float v16; // xmm8_4
  int v17; // eax
  const char *v18; // rcx
  int v19; // eax
  const char *v20; // rcx
  int v21; // eax
  const char *v22; // rcx
  int v23; // eax
  const char *v24; // rcx
  int v25; // eax
  const char *v26; // rcx
  int v27; // eax
  const char *v28; // rcx
  const char *v29; // rcx

  EffectGameObject_customObjectSetup(a1, a2, a3); /*0x6607a8*/
  v6 = 0; /*0x6607b0*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1352LL) ) /*0x6607b2*/
  {
    v8 = (const char *)(*(_QWORD *)a2 + 5408LL); /*0x6607c2*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 5432LL) > 0xFu ) /*0x6607ce*/
      v8 = *(const char **)v8; /*0x6607d0*/
    v7 = atoi(v8); /*0x6607d3*/
  }
  else
  {
    v7 = 0; /*0x6607bb*/
  }
  *(_BYTE *)(a1 + 1864) = v7 != 0; /*0x6607de*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4672LL) ) /*0x6607e7*/
  {
    v10 = (const char *)(*(_QWORD *)a2 + 18688LL); /*0x6607f7*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 18712LL) > 0xFu ) /*0x660803*/
      v10 = *(const char **)v10; /*0x660805*/
    v9 = atoi(v10); /*0x660808*/
  }
  else
  {
    v9 = 0; /*0x6607f0*/
  }
  *(_BYTE *)(a1 + 1865) = v9 != 0; /*0x660821*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4656LL) ) /*0x66082a*/
  {
    v13 = (const char *)(*(_QWORD *)a2 + 18624LL); /*0x66083e*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 18648LL) > 0xFu ) /*0x66084a*/
      v13 = *(const char **)v13; /*0x66084c*/
    v14 = atof(v13); /*0x660859*/
    v11 = 0.0; /*0x660868*/
    if ( isnan(v14) ) /*0x660862*/
      v12 = 0.0; /*0x66086f*/
    else
      v12 = fminf(1000000000.0, fmaxf(-1000000000.0, v14)); /*0x660884*/
  }
  else
  {
    v11 = 0.0; /*0x660833*/
    v12 = 0.0; /*0x660836*/
  }
  *(float *)(a1 + 1868) = v12; /*0x660888*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4664LL) ) /*0x660893*/
  {
    v15 = (const char *)(*(_QWORD *)a2 + 18656LL); /*0x66089f*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 18680LL) > 0xFu ) /*0x6608ab*/
      v15 = *(const char **)v15; /*0x6608ad*/
    v16 = atof(v15); /*0x6608ba*/
    if ( !isnan(v16) ) /*0x6608c3*/
      v11 = fminf(1000000000.0, fmaxf(-1000000000.0, v16)); /*0x6608da*/
  }
  *(float *)(a1 + 1872) = v11; /*0x6608e9*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1328LL) ) /*0x6608f9*/
  {
    v18 = (const char *)(*(_QWORD *)a2 + 5312LL); /*0x660909*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 5336LL) > 0xFu ) /*0x660915*/
      v18 = *(const char **)v18; /*0x660917*/
    v17 = atoi(v18); /*0x66091a*/
  }
  else
  {
    v17 = 0; /*0x660902*/
  }
  *(_DWORD *)(a1 + 1856) = v17; /*0x660920*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1336LL) ) /*0x660929*/
  {
    v20 = (const char *)(*(_QWORD *)a2 + 5344LL); /*0x660939*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 5368LL) > 0xFu ) /*0x660945*/
      v20 = *(const char **)v20; /*0x660947*/
    v19 = atoi(v20); /*0x66094a*/
  }
  else
  {
    v19 = 0; /*0x660932*/
  }
  *(_DWORD *)(a1 + 1860) = v19; /*0x660950*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1368LL) ) /*0x660959*/
  {
    v22 = (const char *)(*(_QWORD *)a2 + 5472LL); /*0x660969*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 5496LL) > 0xFu ) /*0x660975*/
      v22 = *(const char **)v22; /*0x660977*/
    v21 = atoi(v22); /*0x66097a*/
  }
  else
  {
    v21 = 0; /*0x660962*/
  }
  *(_BYTE *)(a1 + 1876) = v21 != 0; /*0x660985*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1376LL) ) /*0x66098e*/
  {
    v24 = (const char *)(*(_QWORD *)a2 + 5504LL); /*0x66099e*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 5528LL) > 0xFu ) /*0x6609aa*/
      v24 = *(const char **)v24; /*0x6609ac*/
    v23 = atoi(v24); /*0x6609af*/
  }
  else
  {
    v23 = 0; /*0x660997*/
  }
  *(_BYTE *)(a1 + 1877) = v23 != 0; /*0x6609ba*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1384LL) ) /*0x6609c3*/
  {
    v26 = (const char *)(*(_QWORD *)a2 + 5536LL); /*0x6609d3*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 5560LL) > 0xFu ) /*0x6609df*/
      v26 = *(const char **)v26; /*0x6609e1*/
    v25 = atoi(v26); /*0x6609e4*/
  }
  else
  {
    v25 = 0; /*0x6609cc*/
  }
  *(_DWORD *)(a1 + 1880) = v25; /*0x6609ea*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2944LL) ) /*0x6609f3*/
  {
    v28 = (const char *)(*(_QWORD *)a2 + 11776LL); /*0x660a03*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 11800LL) > 0xFu ) /*0x660a0f*/
      v28 = *(const char **)v28; /*0x660a11*/
    v27 = atoi(v28); /*0x660a14*/
  }
  else
  {
    v27 = 0; /*0x6609fc*/
  }
  *(_BYTE *)(a1 + 1884) = v27 != 0; /*0x660a1f*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4680LL) ) /*0x660a2d*/
  {
    v29 = (const char *)(*(_QWORD *)a2 + 18720LL); /*0x660a39*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 18744LL) > 0xFu ) /*0x660a45*/
      v29 = *(const char **)v29; /*0x660a47*/
    v6 = atoi(v29); /*0x660a50*/
  }
  *(_BYTE *)(a1 + 1885) = v6 != 0; /*0x660a5c*/
  return v6 != 0; /*0x660a54*/
}

// [4/4] Address: 0x660a70
// Method: RotateGameplayGameObject::updateStartValues
__int64 __fastcall RotateGameplayGameObject_updateStartValues(float *a1)
{
  double v2; // xmm0_8
  float v3; // xmm6_4
  double v4; // xmm0_8
  float v5; // xmm1_4
  float v6; // xmm7_4
  __int64 v7; // rcx
  __int64 v8; // rax
  float v9; // xmm0_4
  float v10; // xmm7_4
  float v11; // xmm1_4
  __int64 result; // rax

  sub_28A130(a1); /*0x660a83*/
  *((_BYTE *)a1 + 1004) = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)a1 + 1272LL))(a1); /*0x660a94*/
  *((_BYTE *)a1 + 1005) = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)a1 + 1280LL))(a1); /*0x660aa6*/
  v2 = (*(double (__fastcall **)(float *))(*(_QWORD *)a1 + 376LL))(a1); /*0x660ab2*/
  v3 = *(float *)&v2; /*0x660abe*/
  v4 = (*(double (__fastcall **)(float *))(*(_QWORD *)a1 + 392LL))(a1); /*0x660ac1*/
  v5 = a1[170]; /*0x660ac7*/
  v6 = *(float *)&v4; /*0x660acf*/
  if ( v3 == *(float *)&v4 ) /*0x660ad7*/
  {
    if ( v5 != 0.0 ) /*0x660ae1*/
      v3 = roundf(v3 - v5); /*0x660af0*/
    a1[245] = v3; /*0x660af3*/
    v7 = (__int64)a1; /*0x660afb*/
    v8 = 984; /*0x660afe*/
  }
  else
  {
    if ( v5 == 0.0 && a1[172] == 0.0 ) /*0x660b21*/
    {
      a1[245] = v3; /*0x660b23*/
      v3 = *(float *)&v4; /*0x660b2b*/
    }
    else
    {
      v9 = roundf(v3 - v5); /*0x660b37*/
      v10 = v6 - a1[172]; /*0x660b3d*/
      a1[245] = v9; /*0x660b45*/
      v3 = roundf(v10); /*0x660b56*/
    }
    v7 = 984; /*0x660b5e*/
    v8 = (__int64)a1; /*0x660b63*/
  }
  *(float *)(v8 + v7) = v3; /*0x660b66*/
  v11 = a1[291] - a1[175]; /*0x660b86*/
  a1[247] = a1[290] - a1[174]; /*0x660b8e*/
  a1[248] = v11; /*0x660b96*/
  GameObject_determineSlopeDirection((__int64)a1); /*0x660b9e*/
  result = *((int *)a1 + 273); /*0x660ba3*/
  switch ( (int)result ) /*0x660bce*/
  {
    case 1: /*0x660bce*/
      *((_DWORD *)a1 + 464) = 1; /*0x660bd0*/
      *((_DWORD *)a1 + 465) = 4; /*0x660bda*/
      break; /*0x660be9*/
    case 2: /*0x660bce*/
      *((_DWORD *)a1 + 464) = 2; /*0x660bea*/
      *((_DWORD *)a1 + 465) = 3; /*0x660bf4*/
      break; /*0x660c03*/
    case 3: /*0x660bce*/
      *((_DWORD *)a1 + 464) = 1; /*0x660c04*/
      *((_DWORD *)a1 + 465) = 3; /*0x660c0e*/
      break; /*0x660c1d*/
    case 4: /*0x660bce*/
      *((_DWORD *)a1 + 464) = 3; /*0x660c38*/
      *((_DWORD *)a1 + 465) = 2; /*0x660c42*/
      break; /*0x660c51*/
    case 5: /*0x660bce*/
      *((_DWORD *)a1 + 464) = 4; /*0x660c52*/
      *((_DWORD *)a1 + 465) = 1; /*0x660c5c*/
      break; /*0x660c6b*/
    case 6: /*0x660bce*/
      *((_DWORD *)a1 + 464) = 3; /*0x660c1e*/
      *((_DWORD *)a1 + 465) = 1; /*0x660c28*/
      break; /*0x660c37*/
    case 7: /*0x660bce*/
      *((_DWORD *)a1 + 464) = 4; /*0x660c6c*/
      *((_DWORD *)a1 + 465) = 2; /*0x660c76*/
      break; /*0x660c85*/
    default:
      *((_DWORD *)a1 + 464) = 2; /*0x660c86*/
      *((_DWORD *)a1 + 465) = 4; /*0x660c90*/
      break; /*0x660c90*/
  }
  return result; /*0x660be4*/
}
