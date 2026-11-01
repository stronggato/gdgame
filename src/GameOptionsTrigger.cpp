#include <Geode/binding/GameOptionsTrigger.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x63bdb0
// Method: GameOptionsTrigger::getSaveString
// Hidden C++ exception states: #wind=2
__int64 __fastcall GameOptionsTrigger_getSaveString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SaveString; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v11[24]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[528]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v13[32]; // [rsp+260h] [rbp+160h] BYREF

  *(_QWORD *)&v10 = a2; /*0x63bde0*/
  fmt::BasicWriter<char>::BasicWriter<char>(v12); /*0x63bded*/
  SaveString = EffectGameObject_getSaveString(a1, (__int64)v13, a3); /*0x63be01*/
  v10 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v11, SaveString); /*0x63be18*/
  fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63be27*/
  sub_3C310(v13); /*0x63be35*/
  if ( *(_DWORD *)(a1 + 1856) ) /*0x63be41*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63be4a*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63be4f*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63be5e*/
    fmt::BasicWriter<char>::operator<<(v12, 159); /*0x63be6e*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63be74*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63be79*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63be88*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1856)); /*0x63be99*/
  }
  if ( *(_DWORD *)(a1 + 1860) ) /*0x63be9f*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63bea8*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63bead*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63bebc*/
    fmt::BasicWriter<char>::operator<<(v12, 160); /*0x63becc*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63bed2*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63bed7*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63bee6*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1860)); /*0x63bef7*/
  }
  if ( *(_DWORD *)(a1 + 1864) ) /*0x63befd*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63bf06*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63bf0b*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63bf1a*/
    fmt::BasicWriter<char>::operator<<(v12, 161); /*0x63bf2a*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63bf30*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63bf35*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63bf44*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1864)); /*0x63bf55*/
  }
  if ( *(_DWORD *)(a1 + 1868) ) /*0x63bf5b*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63bf64*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63bf69*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63bf78*/
    fmt::BasicWriter<char>::operator<<(v12, 162); /*0x63bf88*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63bf8e*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63bf93*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63bfa2*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1868)); /*0x63bfb3*/
  }
  if ( *(_DWORD *)(a1 + 1872) ) /*0x63bfb9*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63bfc2*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63bfc7*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63bfd6*/
    fmt::BasicWriter<char>::operator<<(v12, 163); /*0x63bfe6*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63bfec*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63bff1*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63c000*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1872)); /*0x63c011*/
  }
  if ( *(_DWORD *)(a1 + 1876) ) /*0x63c017*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63c020*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63c025*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63c034*/
    fmt::BasicWriter<char>::operator<<(v12, 165); /*0x63c044*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63c04a*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63c04f*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63c05e*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1876)); /*0x63c06f*/
  }
  if ( *(_DWORD *)(a1 + 1880) ) /*0x63c075*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63c07e*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63c083*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63c092*/
    fmt::BasicWriter<char>::operator<<(v12, 199); /*0x63c0a2*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63c0a8*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63c0ad*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63c0bc*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1880)); /*0x63c0cd*/
  }
  if ( *(_DWORD *)(a1 + 1884) ) /*0x63c0d3*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63c0dc*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63c0e1*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63c0f0*/
    fmt::BasicWriter<char>::operator<<(v12, 195); /*0x63c100*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63c106*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63c10b*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63c11a*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1884)); /*0x63c12b*/
  }
  if ( *(_DWORD *)(a1 + 1888) ) /*0x63c131*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63c13a*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63c13f*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63c14e*/
    fmt::BasicWriter<char>::operator<<(v12, 532); /*0x63c15e*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63c164*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63c169*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63c178*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1888)); /*0x63c189*/
  }
  if ( *(_DWORD *)(a1 + 1892) ) /*0x63c18f*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63c198*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63c19d*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63c1ac*/
    fmt::BasicWriter<char>::operator<<(v12, 573); /*0x63c1bc*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63c1c2*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63c1c7*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63c1d6*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1892)); /*0x63c1e7*/
  }
  if ( *(float *)(a1 + 1896) != 0.0 ) /*0x63c1fd*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63c1ff*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63c204*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63c213*/
    fmt::BasicWriter<char>::operator<<(v12, 574); /*0x63c223*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63c229*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63c22e*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63c23d*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x63c253*/
  }
  if ( *(_DWORD *)(a1 + 1900) ) /*0x63c259*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63c262*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63c267*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63c276*/
    fmt::BasicWriter<char>::operator<<(v12, 575); /*0x63c286*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63c28c*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63c291*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63c2a0*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1900)); /*0x63c2b1*/
  }
  if ( *(_DWORD *)(a1 + 1904) ) /*0x63c2b7*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63c2c0*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63c2c5*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63c2d4*/
    fmt::BasicWriter<char>::operator<<(v12, 576); /*0x63c2e4*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63c2ea*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63c2ef*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63c2fe*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1904)); /*0x63c30f*/
  }
  if ( *(_DWORD *)(a1 + 1908) ) /*0x63c315*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63c31e*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63c323*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63c332*/
    fmt::BasicWriter<char>::operator<<(v12, 593); /*0x63c342*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63c348*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63c34d*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63c35c*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1908)); /*0x63c36d*/
  }
  v7 = fmt::BasicWriter<char>::c_str(v12); /*0x63c378*/
  *(_OWORD *)a2 = 0; /*0x63c381*/
  *(_QWORD *)(a2 + 16) = 0; /*0x63c384*/
  *(_QWORD *)(a2 + 24) = 0; /*0x63c388*/
  v8 = -1; /*0x63c38c*/
  do /*0x63c396*/
    ++v8; /*0x63c393*/
  while ( *(_BYTE *)(v7 + v8) ); /*0x63c396*/
  sub_3C230(a2); /*0x63c3a3*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v12); /*0x63c3ae*/
  return a2; /*0x63c3b7*/
}

// [2/2] Address: 0x63c3e0
// Method: GameOptionsTrigger::customObjectSetup
int __fastcall GameOptionsTrigger_customObjectSetup(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  const char *v7; // rcx
  int v8; // eax
  const char *v9; // rcx
  int v10; // eax
  const char *v11; // rcx
  int v12; // eax
  const char *v13; // rcx
  int v14; // eax
  const char *v15; // rcx
  int v16; // eax
  const char *v17; // rcx
  int v18; // eax
  const char *v19; // rcx
  int v20; // eax
  const char *v21; // rcx
  int v22; // eax
  const char *v23; // rcx
  int v24; // eax
  const char *v25; // rcx
  float v26; // xmm1_4
  const char *v27; // rcx
  float v28; // xmm6_4
  int v29; // eax
  const char *v30; // rcx
  int v31; // eax
  const char *v32; // rcx
  __int64 v33; // rax
  const char *v34; // rcx

  EffectGameObject_customObjectSetup(a1, a2, a3); /*0x63c3f8*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1272LL) ) /*0x63c400*/
  {
    v7 = (const char *)(*(_QWORD *)a2 + 5088LL); /*0x63c411*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 5112LL) > 0xFu ) /*0x63c41d*/
      v7 = *(const char **)v7; /*0x63c41f*/
    v6 = atoi(v7); /*0x63c422*/
  }
  else
  {
    v6 = 0; /*0x63c40a*/
  }
  *(_DWORD *)(a1 + 1856) = v6; /*0x63c428*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1280LL) ) /*0x63c431*/
  {
    v9 = (const char *)(*(_QWORD *)a2 + 5120LL); /*0x63c442*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 5144LL) > 0xFu ) /*0x63c44e*/
      v9 = *(const char **)v9; /*0x63c450*/
    v8 = atoi(v9); /*0x63c453*/
  }
  else
  {
    v8 = 0; /*0x63c43b*/
  }
  *(_DWORD *)(a1 + 1860) = v8; /*0x63c459*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1288LL) ) /*0x63c462*/
  {
    v11 = (const char *)(*(_QWORD *)a2 + 5152LL); /*0x63c473*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 5176LL) > 0xFu ) /*0x63c47f*/
      v11 = *(const char **)v11; /*0x63c481*/
    v10 = atoi(v11); /*0x63c484*/
  }
  else
  {
    v10 = 0; /*0x63c46c*/
  }
  *(_DWORD *)(a1 + 1864) = v10; /*0x63c48a*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1296LL) ) /*0x63c493*/
  {
    v13 = (const char *)(*(_QWORD *)a2 + 5184LL); /*0x63c4a4*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 5208LL) > 0xFu ) /*0x63c4b0*/
      v13 = *(const char **)v13; /*0x63c4b2*/
    v12 = atoi(v13); /*0x63c4b5*/
  }
  else
  {
    v12 = 0; /*0x63c49d*/
  }
  *(_DWORD *)(a1 + 1868) = v12; /*0x63c4bb*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1304LL) ) /*0x63c4c4*/
  {
    v15 = (const char *)(*(_QWORD *)a2 + 5216LL); /*0x63c4d5*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 5240LL) > 0xFu ) /*0x63c4e1*/
      v15 = *(const char **)v15; /*0x63c4e3*/
    v14 = atoi(v15); /*0x63c4e6*/
  }
  else
  {
    v14 = 0; /*0x63c4ce*/
  }
  *(_DWORD *)(a1 + 1872) = v14; /*0x63c4ec*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1320LL) ) /*0x63c4f5*/
  {
    v17 = (const char *)(*(_QWORD *)a2 + 5280LL); /*0x63c506*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 5304LL) > 0xFu ) /*0x63c512*/
      v17 = *(const char **)v17; /*0x63c514*/
    v16 = atoi(v17); /*0x63c517*/
  }
  else
  {
    v16 = 0; /*0x63c4ff*/
  }
  *(_DWORD *)(a1 + 1876) = v16; /*0x63c51d*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1592LL) ) /*0x63c526*/
  {
    v19 = (const char *)(*(_QWORD *)a2 + 6368LL); /*0x63c537*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 6392LL) > 0xFu ) /*0x63c543*/
      v19 = *(const char **)v19; /*0x63c545*/
    v18 = atoi(v19); /*0x63c548*/
  }
  else
  {
    v18 = 0; /*0x63c530*/
  }
  *(_DWORD *)(a1 + 1880) = v18; /*0x63c54e*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1560LL) ) /*0x63c557*/
  {
    v21 = (const char *)(*(_QWORD *)a2 + 6240LL); /*0x63c568*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 6264LL) > 0xFu ) /*0x63c574*/
      v21 = *(const char **)v21; /*0x63c576*/
    v20 = atoi(v21); /*0x63c579*/
  }
  else
  {
    v20 = 0; /*0x63c561*/
  }
  *(_DWORD *)(a1 + 1884) = v20; /*0x63c57f*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4256LL) ) /*0x63c588*/
  {
    v23 = (const char *)(*(_QWORD *)a2 + 17024LL); /*0x63c599*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 17048LL) > 0xFu ) /*0x63c5a5*/
      v23 = *(const char **)v23; /*0x63c5a7*/
    v22 = atoi(v23); /*0x63c5aa*/
  }
  else
  {
    v22 = 0; /*0x63c592*/
  }
  *(_DWORD *)(a1 + 1888) = v22; /*0x63c5b0*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4584LL) ) /*0x63c5b9*/
  {
    v25 = (const char *)(*(_QWORD *)a2 + 18336LL); /*0x63c5ca*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 18360LL) > 0xFu ) /*0x63c5d6*/
      v25 = *(const char **)v25; /*0x63c5d8*/
    v24 = atoi(v25); /*0x63c5db*/
  }
  else
  {
    v24 = 0; /*0x63c5c3*/
  }
  *(_DWORD *)(a1 + 1892) = v24; /*0x63c5e1*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4592LL) ) /*0x63c5ea*/
  {
    v27 = (const char *)(*(_QWORD *)a2 + 18368LL); /*0x63c5fc*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 18392LL) > 0xFu ) /*0x63c60d*/
      v27 = *(const char **)v27; /*0x63c60f*/
    v28 = atof(v27); /*0x63c61b*/
    if ( isnan(v28) ) /*0x63c622*/
      v26 = 0.0; /*0x63c62c*/
    else
      v26 = fminf(1000000000.0, fmaxf(-1000000000.0, v28)); /*0x63c645*/
  }
  else
  {
    v26 = 0.0; /*0x63c5f4*/
  }
  *(float *)(a1 + 1896) = v26; /*0x63c64e*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4600LL) ) /*0x63c659*/
  {
    v30 = (const char *)(*(_QWORD *)a2 + 18400LL); /*0x63c66a*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 18424LL) > 0xFu ) /*0x63c676*/
      v30 = *(const char **)v30; /*0x63c678*/
    v29 = atoi(v30); /*0x63c67b*/
  }
  else
  {
    v29 = 0; /*0x63c663*/
  }
  *(_DWORD *)(a1 + 1900) = v29; /*0x63c681*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4608LL) ) /*0x63c68a*/
  {
    v32 = (const char *)(*(_QWORD *)a2 + 18432LL); /*0x63c69b*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 18456LL) > 0xFu ) /*0x63c6a7*/
      v32 = *(const char **)v32; /*0x63c6a9*/
    v31 = atoi(v32); /*0x63c6ac*/
  }
  else
  {
    v31 = 0; /*0x63c694*/
  }
  *(_DWORD *)(a1 + 1904) = v31; /*0x63c6b2*/
  v33 = *(_QWORD *)a3; /*0x63c6b8*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4744LL) ) /*0x63c6c0*/
  {
    v34 = (const char *)(*(_QWORD *)a2 + 18976LL); /*0x63c6e2*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 19000LL) > 0xFu ) /*0x63c6ee*/
      v34 = *(const char **)v34; /*0x63c6f0*/
    LODWORD(v33) = atoi(v34); /*0x63c6f3*/
    *(_DWORD *)(a1 + 1908) = v33; /*0x63c6f9*/
  }
  else
  {
    *(_DWORD *)(a1 + 1908) = 0; /*0x63c6ca*/
  }
  return v33; /*0x63c6d4*/
}
