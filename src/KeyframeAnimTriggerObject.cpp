#include <Geode/binding/KeyframeAnimTriggerObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x64db50
// Method: KeyframeAnimTriggerObject::init
char __fastcall KeyframeAnimTriggerObject_init(__int64 a1)
{
  *(_DWORD *)(a1 + 28) = 13; /*0x64db5d*/
  if ( !cocos2d::CCSprite::initWithSpriteFrameName((cocos2d::CCSprite *)a1, "edit_eKeyframeBtn_001.png") ) /*0x64db67*/
    return 0; /*0x64dbb3*/
  sub_287800(a1); /*0x64db74*/
  *(_BYTE *)(a1 + 313) = 0; /*0x64db79*/
  *(_DWORD *)(a1 + 1256) = 1; /*0x64db82*/
  *(_WORD *)(a1 + 1465) = -1; /*0x64db8c*/
  *(_BYTE *)(a1 + 1467) = -1; /*0x64db95*/
  *(_DWORD *)(a1 + 1468) = 1056964608; /*0x64db9c*/
  *(_BYTE *)(a1 + 1652) = 1; /*0x64dba6*/
  return 1; /*0x64dbad*/
}

// [2/3] Address: 0x64dbc0
// Method: KeyframeAnimTriggerObject::getSaveString
// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyframeAnimTriggerObject_getSaveString(float *a1, __int64 a2, __int64 a3)
{
  __int64 SaveString; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v11[16]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[40]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v13[528]; // [rsp+70h] [rbp-90h] BYREF

  *(_QWORD *)&v10 = a2; /*0x64dbf8*/
  fmt::BasicWriter<char>::BasicWriter<char>(v13); /*0x64dc05*/
  SaveString = EffectGameObject_getSaveString((__int64)a1, (__int64)v12, a3); /*0x64dc17*/
  v10 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v11, SaveString); /*0x64dc2e*/
  fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x64dc3d*/
  sub_3C310(v12); /*0x64dc49*/
  if ( a1[464] != 0.0 ) /*0x64dc65*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64dc67*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64dc6c*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x64dc7b*/
    fmt::BasicWriter<char>::operator<<(v13, 520); /*0x64dc8b*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64dc91*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64dc96*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x64dca5*/
    fmt::BasicWriter<char>::operator<<(v13); /*0x64dcbb*/
  }
  if ( a1[465] != 0.0 ) /*0x64dcce*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64dcd0*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64dcd5*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x64dce4*/
    fmt::BasicWriter<char>::operator<<(v13, 521); /*0x64dcf4*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64dcfa*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64dcff*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x64dd0e*/
    fmt::BasicWriter<char>::operator<<(v13); /*0x64dd24*/
  }
  if ( a1[466] != 0.0 ) /*0x64dd37*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64dd39*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64dd3e*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x64dd4d*/
    fmt::BasicWriter<char>::operator<<(v13, 545); /*0x64dd5d*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64dd63*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64dd68*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x64dd77*/
    fmt::BasicWriter<char>::operator<<(v13); /*0x64dd8d*/
  }
  if ( a1[467] != 0.0 ) /*0x64dda0*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64dda2*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64dda7*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x64ddb6*/
    fmt::BasicWriter<char>::operator<<(v13, 522); /*0x64ddc6*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64ddcc*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64ddd1*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x64dde0*/
    fmt::BasicWriter<char>::operator<<(v13); /*0x64ddf6*/
  }
  if ( a1[468] != 0.0 ) /*0x64de09*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64de0b*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64de10*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x64de1f*/
    fmt::BasicWriter<char>::operator<<(v13, 523); /*0x64de2f*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64de35*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64de3a*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x64de49*/
    fmt::BasicWriter<char>::operator<<(v13); /*0x64de5f*/
  }
  if ( a1[469] != 0.0 ) /*0x64de72*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64de74*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64de79*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x64de88*/
    fmt::BasicWriter<char>::operator<<(v13, 546); /*0x64de98*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64de9e*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64dea3*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x64deb2*/
    fmt::BasicWriter<char>::operator<<(v13); /*0x64dec8*/
  }
  v7 = fmt::BasicWriter<char>::c_str(v13); /*0x64ded3*/
  *(_OWORD *)a2 = 0; /*0x64dedc*/
  *(_QWORD *)(a2 + 16) = 0; /*0x64dedf*/
  *(_QWORD *)(a2 + 24) = 0; /*0x64dee3*/
  v8 = -1; /*0x64dee7*/
  do /*0x64def3*/
    ++v8; /*0x64def0*/
  while ( *(_BYTE *)(v7 + v8) ); /*0x64def3*/
  sub_3C230(a2); /*0x64df00*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v13); /*0x64df0b*/
  return a2; /*0x64df14*/
}

// [3/3] Address: 0x64df40
// Method: KeyframeAnimTriggerObject::customObjectSetup
int __fastcall KeyframeAnimTriggerObject_customObjectSetup(float *a1, __int64 a2, __int64 a3)
{
  float v6; // xmm1_4
  const char *v7; // rcx
  float v8; // xmm9_4
  float v9; // xmm1_4
  const char *v10; // rcx
  float v11; // xmm9_4
  float v12; // xmm1_4
  const char *v13; // rcx
  float v14; // xmm9_4
  float v15; // xmm1_4
  const char *v16; // rcx
  float v17; // xmm9_4
  float v18; // xmm1_4
  const char *v19; // rcx
  float v20; // xmm9_4
  __int64 v21; // rax
  float v22; // xmm7_4
  const char *v23; // rcx
  float v24; // xmm9_4
  float v25; // xmm0_4

  EffectGameObject_customObjectSetup((__int64)a1, a2, a3); /*0x64df6f*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4160LL) ) /*0x64df88*/
  {
    v7 = (const char *)(*(_QWORD *)a2 + 16640LL); /*0x64df9d*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 16664LL) > 0xFu ) /*0x64dfa9*/
      v7 = *(const char **)v7; /*0x64dfab*/
    v8 = atof(v7); /*0x64dfb8*/
    if ( isnan(v8) ) /*0x64dfc1*/
      v6 = 0.0; /*0x64dfce*/
    else
      v6 = fminf(1000000000.0, fmaxf(-1000000000.0, v8)); /*0x64dfdf*/
  }
  else
  {
    v6 = 0.0; /*0x64df95*/
  }
  a1[464] = v6; /*0x64dfe3*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4168LL) ) /*0x64dfee*/
  {
    v10 = (const char *)(*(_QWORD *)a2 + 16672LL); /*0x64e000*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 16696LL) > 0xFu ) /*0x64e00c*/
      v10 = *(const char **)v10; /*0x64e00e*/
    v11 = atof(v10); /*0x64e01b*/
    if ( isnan(v11) ) /*0x64e024*/
      v9 = 0.0; /*0x64e02e*/
    else
      v9 = fminf(1000000000.0, fmaxf(-1000000000.0, v11)); /*0x64e03f*/
  }
  else
  {
    v9 = 0.0; /*0x64dff8*/
  }
  a1[465] = v9; /*0x64e043*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4360LL) ) /*0x64e04e*/
  {
    v13 = (const char *)(*(_QWORD *)a2 + 17440LL); /*0x64e060*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 17464LL) > 0xFu ) /*0x64e06c*/
      v13 = *(const char **)v13; /*0x64e06e*/
    v14 = atof(v13); /*0x64e07b*/
    if ( isnan(v14) ) /*0x64e084*/
      v12 = 0.0; /*0x64e08e*/
    else
      v12 = fminf(1000000000.0, fmaxf(-1000000000.0, v14)); /*0x64e09f*/
  }
  else
  {
    v12 = 0.0; /*0x64e058*/
  }
  a1[466] = v12; /*0x64e0a3*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4176LL) ) /*0x64e0ae*/
  {
    v16 = (const char *)(*(_QWORD *)a2 + 16704LL); /*0x64e0c0*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 16728LL) > 0xFu ) /*0x64e0cc*/
      v16 = *(const char **)v16; /*0x64e0ce*/
    v17 = atof(v16); /*0x64e0db*/
    if ( isnan(v17) ) /*0x64e0e4*/
      v15 = 0.0; /*0x64e0ee*/
    else
      v15 = fminf(1000000000.0, fmaxf(-1000000000.0, v17)); /*0x64e0ff*/
  }
  else
  {
    v15 = 0.0; /*0x64e0b8*/
  }
  a1[467] = v15; /*0x64e103*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4184LL) ) /*0x64e10e*/
  {
    v19 = (const char *)(*(_QWORD *)a2 + 16736LL); /*0x64e120*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 16760LL) > 0xFu ) /*0x64e12c*/
      v19 = *(const char **)v19; /*0x64e12e*/
    v20 = atof(v19); /*0x64e13b*/
    if ( isnan(v20) ) /*0x64e144*/
      v18 = 0.0; /*0x64e14e*/
    else
      v18 = fminf(1000000000.0, fmaxf(-1000000000.0, v20)); /*0x64e15f*/
  }
  else
  {
    v18 = 0.0; /*0x64e118*/
  }
  a1[468] = v18; /*0x64e163*/
  v21 = *(_QWORD *)a3; /*0x64e16b*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4368LL) ) /*0x64e173*/
  {
    v23 = (const char *)(*(_QWORD *)a2 + 17472LL); /*0x64e185*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 17496LL) > 0xFu ) /*0x64e191*/
      v23 = *(const char **)v23; /*0x64e193*/
    v24 = atof(v23); /*0x64e1a0*/
    LODWORD(v21) = isnan(v24); /*0x64e1a9*/
    if ( (_DWORD)v21 ) /*0x64e1b1*/
      v22 = 0.0; /*0x64e1b3*/
    else
      v22 = fminf(1000000000.0, fmaxf(-1000000000.0, v24)); /*0x64e1bd*/
  }
  else
  {
    v22 = 0.0; /*0x64e17d*/
  }
  v25 = a1[466]; /*0x64e1c2*/
  a1[469] = v22; /*0x64e1de*/
  if ( v25 == 0.0 ) /*0x64e1e8*/
  {
    *(float *)&v21 = a1[465]; /*0x64e1ea*/
    *((_DWORD *)a1 + 466) = v21; /*0x64e1f0*/
  }
  if ( v22 == 0.0 ) /*0x64e205*/
  {
    *(float *)&v21 = a1[468]; /*0x64e207*/
    *((_DWORD *)a1 + 469) = v21; /*0x64e20d*/
  }
  return v21; /*0x64e213*/
}
