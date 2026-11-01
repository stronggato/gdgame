#include <Geode/binding/SpawnParticleGameObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x632dc0
// Method: SpawnParticleGameObject::~SpawnParticleGameObject
cocos2d::CCSprite *__fastcall SpawnParticleGameObject__dtor_SpawnParticleGameObject(cocos2d::CCSprite *Block, char a2)
{
  *(_QWORD *)Block = &EffectGameObject::`vftable'; /*0x632dd3*/
  *((_QWORD *)Block + 40) = &EffectGameObject::`vftable'; /*0x632de0*/
  *((_QWORD *)Block + 43) = &EffectGameObject::`vftable'; /*0x632dee*/
  TextGameObject__dtor_TextGameObject(Block); /*0x632df5*/
  if ( (a2 & 1) != 0 ) /*0x632dfd*/
    j_j_free(Block); /*0x632e07*/
  return Block; /*0x632e0c*/
}

// [2/4] Address: 0x65f790
// Method: SpawnParticleGameObject::init
char __fastcall SpawnParticleGameObject_init(__int64 a1)
{
  *(_DWORD *)(a1 + 28) = 13; /*0x65f79d*/
  if ( !cocos2d::CCSprite::initWithSpriteFrameName((cocos2d::CCSprite *)a1, "edit_eSpawnParticleBtn_001.png") ) /*0x65f7a7*/
    return 0; /*0x65f7f3*/
  sub_287800(a1); /*0x65f7b4*/
  *(_BYTE *)(a1 + 313) = 0; /*0x65f7b9*/
  *(_DWORD *)(a1 + 1256) = 1; /*0x65f7c2*/
  *(_WORD *)(a1 + 1465) = -1; /*0x65f7cc*/
  *(_BYTE *)(a1 + 1467) = -1; /*0x65f7d5*/
  *(_DWORD *)(a1 + 1468) = 1056964608; /*0x65f7dc*/
  *(_BYTE *)(a1 + 1652) = 1; /*0x65f7e6*/
  return 1; /*0x65f7ed*/
}

// [3/4] Address: 0x65f800
// Method: SpawnParticleGameObject::getSaveString
// Hidden C++ exception states: #wind=2
__int64 __fastcall SpawnParticleGameObject_getSaveString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SaveString; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v11[24]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[528]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v13[32]; // [rsp+260h] [rbp+160h] BYREF

  *(_QWORD *)&v10 = a2; /*0x65f838*/
  fmt::BasicWriter<char>::BasicWriter<char>(v12); /*0x65f845*/
  SaveString = EffectGameObject_getSaveString(a1, (__int64)v13, a3); /*0x65f859*/
  v10 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v11, SaveString); /*0x65f870*/
  fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65f87f*/
  sub_3C310(v13); /*0x65f88d*/
  if ( *(_DWORD *)(a1 + 1480) ) /*0x65f899*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65f8a2*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65f8a7*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65f8b6*/
    fmt::BasicWriter<char>::operator<<(v12, 51); /*0x65f8c6*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65f8cc*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65f8d1*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65f8e0*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1480)); /*0x65f8f1*/
  }
  if ( *(_DWORD *)(a1 + 1484) ) /*0x65f8f7*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65f900*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65f905*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65f914*/
    fmt::BasicWriter<char>::operator<<(v12, 71); /*0x65f924*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65f92a*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65f92f*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65f93e*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1484)); /*0x65f94f*/
  }
  if ( *(float *)(a1 + 1856) != 0.0 ) /*0x65f965*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65f967*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65f96c*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65f97b*/
    fmt::BasicWriter<char>::operator<<(v12, 547); /*0x65f98b*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65f991*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65f996*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65f9a5*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x65f9bb*/
  }
  if ( *(float *)(a1 + 1860) != 0.0 ) /*0x65f9ce*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65f9d0*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65f9d5*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65f9e4*/
    fmt::BasicWriter<char>::operator<<(v12, 548); /*0x65f9f4*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65f9fa*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65f9ff*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65fa0e*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x65fa24*/
  }
  if ( *(float *)(a1 + 1864) != 0.0 ) /*0x65fa37*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65fa39*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65fa3e*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65fa4d*/
    fmt::BasicWriter<char>::operator<<(v12, 549); /*0x65fa5d*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65fa63*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65fa68*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65fa77*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x65fa8d*/
  }
  if ( *(float *)(a1 + 1868) != 0.0 ) /*0x65faa0*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65faa2*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65faa7*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65fab6*/
    fmt::BasicWriter<char>::operator<<(v12, 550); /*0x65fac6*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65facc*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65fad1*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65fae0*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x65faf6*/
  }
  if ( *(_BYTE *)(a1 + 1872) ) /*0x65fafc*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65fb05*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65fb0a*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65fb19*/
    fmt::BasicWriter<char>::operator<<(v12, 551); /*0x65fb29*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65fb2f*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65fb34*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65fb43*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1872)); /*0x65fb55*/
  }
  if ( *(float *)(a1 + 1876) != 0.0 ) /*0x65fb68*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65fb6a*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65fb6f*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65fb7e*/
    fmt::BasicWriter<char>::operator<<(v12, 552); /*0x65fb8e*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65fb94*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65fb99*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65fba8*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x65fbbe*/
  }
  if ( *(float *)(a1 + 1880) != 0.0 ) /*0x65fbd1*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65fbd3*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65fbd8*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65fbe7*/
    fmt::BasicWriter<char>::operator<<(v12, 553); /*0x65fbf7*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65fbfd*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65fc02*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65fc11*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x65fc27*/
  }
  if ( *(float *)(a1 + 1884) != 0.0 ) /*0x65fc3a*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65fc3c*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65fc41*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65fc50*/
    fmt::BasicWriter<char>::operator<<(v12, 554); /*0x65fc60*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65fc66*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65fc6b*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65fc7a*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x65fc90*/
  }
  if ( *(float *)(a1 + 1888) != 0.0 ) /*0x65fca3*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65fca5*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65fcaa*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65fcb9*/
    fmt::BasicWriter<char>::operator<<(v12, 555); /*0x65fcc9*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65fccf*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65fcd4*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65fce3*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x65fcf9*/
  }
  v7 = fmt::BasicWriter<char>::c_str(v12); /*0x65fd04*/
  *(_OWORD *)a2 = 0; /*0x65fd0d*/
  *(_QWORD *)(a2 + 16) = 0; /*0x65fd10*/
  *(_QWORD *)(a2 + 24) = 0; /*0x65fd14*/
  v8 = -1; /*0x65fd18*/
  do /*0x65fd23*/
    ++v8; /*0x65fd20*/
  while ( *(_BYTE *)(v7 + v8) ); /*0x65fd23*/
  sub_3C230(a2); /*0x65fd30*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v12); /*0x65fd3b*/
  return a2; /*0x65fd44*/
}

// [4/4] Address: 0x65fd70
// Method: SpawnParticleGameObject::customObjectSetup
int __fastcall SpawnParticleGameObject_customObjectSetup(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // esi
  int v7; // r14d
  int v8; // eax
  const char *v9; // rcx
  int v10; // eax
  const char *v11; // rcx
  float v12; // xmm6_4
  float v13; // xmm8_4
  const char *v14; // rcx
  float v15; // xmm8_4
  float v16; // xmm1_4
  const char *v17; // rcx
  float v18; // xmm10_4
  __int64 v19; // rax
  float v20; // xmm8_4
  const char *v21; // rcx
  float v22; // xmm8_4
  float v23; // xmm1_4
  const char *v24; // rcx
  float v25; // xmm10_4
  __int64 v26; // rax
  const char *v27; // rcx
  float v28; // xmm1_4
  const char *v29; // rcx
  float v30; // xmm8_4
  float v31; // xmm1_4
  const char *v32; // rcx
  float v33; // xmm8_4
  float v34; // xmm1_4
  const char *v35; // rcx
  float v36; // xmm8_4
  __int64 v37; // rax
  const char *v38; // rcx
  float v39; // xmm8_4
  char v41; // [rsp+90h] [rbp+8h] BYREF

  EffectGameObject_customObjectSetup(a1, a2, a3); /*0x65fd9c*/
  v6 = 9999; /*0x65fda4*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 408LL) ) /*0x65fda9*/
  {
    v9 = (const char *)(*(_QWORD *)a2 + 1632LL); /*0x65fdbe*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 1656LL) > 0xFu ) /*0x65fdca*/
      v9 = *(const char **)v9; /*0x65fdcc*/
    v8 = atoi(v9); /*0x65fdcf*/
    v7 = 0; /*0x65fdd5*/
    if ( v8 < 0 ) /*0x65fdda*/
      v8 = 0; /*0x65fdda*/
    if ( v8 > 9999 ) /*0x65fde0*/
      v8 = 9999; /*0x65fde2*/
  }
  else
  {
    v7 = 0; /*0x65fdb3*/
    v8 = 0; /*0x65fdb6*/
  }
  *(_DWORD *)(a1 + 1480) = v8; /*0x65fde4*/
  if ( !*(_QWORD *)(*(_QWORD *)a3 + 568LL) ) /*0x65fded*/
  {
    v10 = 0; /*0x65fdf7*/
LABEL_16:
    v6 = v10; /*0x65fe20*/
    goto LABEL_17; /*0x65fe20*/
  }
  v11 = (const char *)(*(_QWORD *)a2 + 2272LL); /*0x65fdff*/
  if ( *(_QWORD *)(*(_QWORD *)a2 + 2296LL) > 0xFu ) /*0x65fe0b*/
    v11 = *(const char **)v11; /*0x65fe0d*/
  v10 = atoi(v11); /*0x65fe10*/
  if ( v10 < 0 ) /*0x65fe18*/
    v10 = 0; /*0x65fe18*/
  if ( v10 <= 9999 ) /*0x65fe1e*/
    goto LABEL_16; /*0x65fe1e*/
LABEL_17:
  *(_DWORD *)(a1 + 1484) = v6; /*0x65fe22*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4384LL) ) /*0x65fe49*/
  {
    v14 = (const char *)(*(_QWORD *)a2 + 17536LL); /*0x65fe5f*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 17560LL) > 0xFu ) /*0x65fe6b*/
      v14 = *(const char **)v14; /*0x65fe6d*/
    v15 = atof(v14); /*0x65fe7a*/
    v12 = 0.0; /*0x65fe89*/
    if ( isnan(v15) ) /*0x65fe83*/
      v13 = 0.0; /*0x65fe90*/
    else
      v13 = fminf(1000000000.0, fmaxf(-1000000000.0, v15)); /*0x65fea2*/
  }
  else
  {
    v12 = 0.0; /*0x65fe53*/
    v13 = 0.0; /*0x65fe56*/
  }
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4376LL) ) /*0x65feb0*/
  {
    v17 = (const char *)(*(_QWORD *)a2 + 17504LL); /*0x65fec2*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 17528LL) > 0xFu ) /*0x65fece*/
      v17 = *(const char **)v17; /*0x65fed0*/
    v18 = atof(v17); /*0x65fedd*/
    if ( isnan(v18) ) /*0x65fee6*/
      v16 = 0.0; /*0x65fef0*/
    else
      v16 = fminf(1000000000.0, fmaxf(-1000000000.0, v18)); /*0x65ff01*/
  }
  else
  {
    v16 = 0.0; /*0x65feba*/
  }
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v41, v16, v13); /*0x65ff11*/
  cocos2d::CCPoint::operator=(a1 + 1856, v19); /*0x65ff21*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4400LL) ) /*0x65ff2a*/
  {
    v21 = (const char *)(*(_QWORD *)a2 + 17600LL); /*0x65ff3d*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 17624LL) > 0xFu ) /*0x65ff49*/
      v21 = *(const char **)v21; /*0x65ff4b*/
    v22 = atof(v21); /*0x65ff58*/
    if ( isnan(v22) ) /*0x65ff61*/
      v20 = 0.0; /*0x65ff6b*/
    else
      v20 = fminf(1000000000.0, fmaxf(-1000000000.0, v22)); /*0x65ff7d*/
  }
  else
  {
    v20 = 0.0; /*0x65ff34*/
  }
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4392LL) ) /*0x65ff85*/
  {
    v24 = (const char *)(*(_QWORD *)a2 + 17568LL); /*0x65ff97*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 17592LL) > 0xFu ) /*0x65ffa3*/
      v24 = *(const char **)v24; /*0x65ffa5*/
    v25 = atof(v24); /*0x65ffb2*/
    if ( isnan(v25) ) /*0x65ffbb*/
      v23 = 0.0; /*0x65ffc5*/
    else
      v23 = fminf(1000000000.0, fmaxf(-1000000000.0, v25)); /*0x65ffd6*/
  }
  else
  {
    v23 = 0.0; /*0x65ff8f*/
  }
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v41, v23, v20); /*0x65ffe6*/
  cocos2d::CCPoint::operator=(a1 + 1864, v26); /*0x65fff6*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4408LL) ) /*0x660005*/
  {
    v27 = (const char *)(*(_QWORD *)a2 + 17632LL); /*0x660012*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 17656LL) > 0xFu ) /*0x66001e*/
      v27 = *(const char **)v27; /*0x660020*/
    v7 = atoi(v27); /*0x660029*/
  }
  *(_BYTE *)(a1 + 1872) = v7 != 0; /*0x660037*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4416LL) ) /*0x660040*/
  {
    v29 = (const char *)(*(_QWORD *)a2 + 17664LL); /*0x660052*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 17688LL) > 0xFu ) /*0x66005e*/
      v29 = *(const char **)v29; /*0x660060*/
    v30 = atof(v29); /*0x66006d*/
    if ( isnan(v30) ) /*0x660076*/
      v28 = 0.0; /*0x660080*/
    else
      v28 = fminf(1000000000.0, fmaxf(-1000000000.0, v30)); /*0x660091*/
  }
  else
  {
    v28 = 0.0; /*0x66004a*/
  }
  *(float *)(a1 + 1876) = v28; /*0x660095*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4424LL) ) /*0x6600a0*/
  {
    v32 = (const char *)(*(_QWORD *)a2 + 17696LL); /*0x6600b2*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 17720LL) > 0xFu ) /*0x6600be*/
      v32 = *(const char **)v32; /*0x6600c0*/
    v33 = atof(v32); /*0x6600cd*/
    if ( isnan(v33) ) /*0x6600d6*/
      v31 = 0.0; /*0x6600e0*/
    else
      v31 = fminf(1000000000.0, fmaxf(-1000000000.0, v33)); /*0x6600f1*/
  }
  else
  {
    v31 = 0.0; /*0x6600aa*/
  }
  *(float *)(a1 + 1880) = v31; /*0x6600f5*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4432LL) ) /*0x660100*/
  {
    v35 = (const char *)(*(_QWORD *)a2 + 17728LL); /*0x660112*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 17752LL) > 0xFu ) /*0x66011e*/
      v35 = *(const char **)v35; /*0x660120*/
    v36 = atof(v35); /*0x66012d*/
    if ( isnan(v36) ) /*0x660136*/
      v34 = 0.0; /*0x660140*/
    else
      v34 = fminf(1000000000.0, fmaxf(-1000000000.0, v36)); /*0x660151*/
  }
  else
  {
    v34 = 0.0; /*0x66010a*/
  }
  *(float *)(a1 + 1884) = v34; /*0x660155*/
  v37 = *(_QWORD *)a3; /*0x66015d*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4440LL) ) /*0x660168*/
  {
    v38 = (const char *)(*(_QWORD *)a2 + 17760LL); /*0x660175*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 17784LL) > 0xFu ) /*0x660181*/
      v38 = *(const char **)v38; /*0x660183*/
    v39 = atof(v38); /*0x660190*/
    LODWORD(v37) = isnan(v39); /*0x660199*/
    if ( !(_DWORD)v37 ) /*0x6601a1*/
      v12 = fminf(1000000000.0, fmaxf(-1000000000.0, v39)); /*0x6601ac*/
  }
  *(float *)(a1 + 1888) = v12; /*0x6601c1*/
  return v37; /*0x6601b0*/
}
