#include <Geode/binding/GradientTriggerObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x6362a0
// Method: GradientTriggerObject::init
char __fastcall GradientTriggerObject_init(__int64 a1)
{
  *(_DWORD *)(a1 + 28) = 13; /*0x6362ad*/
  if ( !cocos2d::CCSprite::initWithSpriteFrameName((cocos2d::CCSprite *)a1, "edit_eGradientBtn_001.png") ) /*0x6362b7*/
    return 0; /*0x63630d*/
  sub_287800(a1); /*0x6362c4*/
  *(_BYTE *)(a1 + 313) = 0; /*0x6362c9*/
  *(_DWORD *)(a1 + 1256) = 1; /*0x6362d2*/
  *(_WORD *)(a1 + 1465) = -1; /*0x6362dc*/
  *(_BYTE *)(a1 + 1467) = -1; /*0x6362e5*/
  *(_DWORD *)(a1 + 1468) = 1056964608; /*0x6362ec*/
  *(_BYTE *)(a1 + 1652) = 1; /*0x6362f6*/
  *(_DWORD *)(a1 + 1856) = 1; /*0x6362fd*/
  return 1; /*0x636307*/
}

// [2/3] Address: 0x636320
// Method: GradientTriggerObject::getSaveString
// Hidden C++ exception states: #wind=2
__int64 __fastcall GradientTriggerObject_getSaveString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SaveString; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v11[24]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[528]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v13[32]; // [rsp+260h] [rbp+160h] BYREF

  *(_QWORD *)&v10 = a2; /*0x636350*/
  fmt::BasicWriter<char>::BasicWriter<char>(v12); /*0x63635d*/
  SaveString = EffectGameObject_getSaveString(a1, (__int64)v13, a3); /*0x636371*/
  v10 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v11, SaveString); /*0x636388*/
  fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x636397*/
  sub_3C310(v13); /*0x6363a5*/
  if ( *(_DWORD *)(a1 + 1860) ) /*0x6363b1*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6363ba*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6363bf*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6363ce*/
    fmt::BasicWriter<char>::operator<<(v12, 174); /*0x6363de*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6363e4*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6363e9*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6363f8*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1860)); /*0x636409*/
  }
  if ( *(_DWORD *)(a1 + 1856) ) /*0x63640f*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x636418*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63641d*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63642c*/
    fmt::BasicWriter<char>::operator<<(v12, 202); /*0x63643c*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x636442*/
    *((_QWORD *)&v10 + 1) = 0; /*0x636447*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x636456*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1856)); /*0x636467*/
  }
  if ( *(_DWORD *)(a1 + 1868) ) /*0x63646d*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x636476*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63647b*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63648a*/
    fmt::BasicWriter<char>::operator<<(v12, 203); /*0x63649a*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6364a0*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6364a5*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6364b4*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1868)); /*0x6364c5*/
  }
  if ( *(_DWORD *)(a1 + 1872) ) /*0x6364cb*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6364d4*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6364d9*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6364e8*/
    fmt::BasicWriter<char>::operator<<(v12, 204); /*0x6364f8*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6364fe*/
    *((_QWORD *)&v10 + 1) = 0; /*0x636503*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x636512*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1872)); /*0x636523*/
  }
  if ( *(_DWORD *)(a1 + 1876) ) /*0x636529*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x636532*/
    *((_QWORD *)&v10 + 1) = 0; /*0x636537*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x636546*/
    fmt::BasicWriter<char>::operator<<(v12, 205); /*0x636556*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63655c*/
    *((_QWORD *)&v10 + 1) = 0; /*0x636561*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x636570*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1876)); /*0x636581*/
  }
  if ( *(_DWORD *)(a1 + 1880) ) /*0x636587*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x636590*/
    *((_QWORD *)&v10 + 1) = 0; /*0x636595*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6365a4*/
    fmt::BasicWriter<char>::operator<<(v12, 206); /*0x6365b4*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6365ba*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6365bf*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6365ce*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1880)); /*0x6365df*/
  }
  if ( *(_BYTE *)(a1 + 1884) ) /*0x6365e5*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6365ee*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6365f3*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x636602*/
    fmt::BasicWriter<char>::operator<<(v12, 207); /*0x636612*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x636618*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63661d*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63662c*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1884)); /*0x63663e*/
  }
  if ( *(_BYTE *)(a1 + 1885) ) /*0x636644*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63664d*/
    *((_QWORD *)&v10 + 1) = 0; /*0x636652*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x636661*/
    fmt::BasicWriter<char>::operator<<(v12, 208); /*0x636671*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x636677*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63667c*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63668b*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1885)); /*0x63669d*/
  }
  if ( *(_BYTE *)(a1 + 1886) ) /*0x6366a3*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6366ac*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6366b1*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6366c0*/
    fmt::BasicWriter<char>::operator<<(v12, 508); /*0x6366d0*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6366d6*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6366db*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6366ea*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1886)); /*0x6366fc*/
  }
  if ( *(_DWORD *)(a1 + 1864) ) /*0x636702*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63670b*/
    *((_QWORD *)&v10 + 1) = 0; /*0x636710*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63671f*/
    fmt::BasicWriter<char>::operator<<(v12, 209); /*0x63672f*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x636735*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63673a*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x636749*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1864)); /*0x63675a*/
  }
  if ( *(float *)(a1 + 1888) != 0.0 ) /*0x636770*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x636772*/
    *((_QWORD *)&v10 + 1) = 0; /*0x636777*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x636786*/
    fmt::BasicWriter<char>::operator<<(v12, 456); /*0x636796*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63679c*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6367a1*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6367b0*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x6367c6*/
  }
  v7 = fmt::BasicWriter<char>::c_str(v12); /*0x6367d1*/
  *(_OWORD *)a2 = 0; /*0x6367da*/
  *(_QWORD *)(a2 + 16) = 0; /*0x6367dd*/
  *(_QWORD *)(a2 + 24) = 0; /*0x6367e1*/
  v8 = -1; /*0x6367e5*/
  do /*0x6367f3*/
    ++v8; /*0x6367f0*/
  while ( *(_BYTE *)(v7 + v8) ); /*0x6367f3*/
  sub_3C230(a2); /*0x636800*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v12); /*0x63680b*/
  return a2; /*0x636814*/
}

// [3/3] Address: 0x636840
// Method: GradientTriggerObject::customObjectSetup
int __fastcall GradientTriggerObject_customObjectSetup(__int64 a1, __int64 a2, __int64 a3)
{
  float v6; // xmm6_4
  float v7; // xmm1_4
  const char *v8; // rcx
  float v9; // xmm7_4
  int v10; // edi
  int v11; // eax
  const char *v12; // rcx
  int v13; // eax
  const char *v14; // rcx
  int v15; // eax
  const char *v16; // rcx
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
  const char *v27; // rcx
  __int64 v28; // rax
  const char *v29; // rcx
  float v30; // xmm7_4
  bool v31; // cc

  EffectGameObject_customObjectSetup(a1, a2, a3); /*0x63686e*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1392LL) ) /*0x63687f*/
  {
    v8 = (const char *)(*(_QWORD *)a2 + 5568LL); /*0x636894*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 5592LL) > 0xFu ) /*0x6368a0*/
      v8 = *(const char **)v8; /*0x6368a2*/
    v9 = atof(v8); /*0x6368ae*/
    v6 = 0.0; /*0x6368bb*/
    if ( isnan(v9) ) /*0x6368b5*/
      v7 = 0.0; /*0x6368c2*/
    else
      v7 = fminf(1000000000.0, fmaxf(-1000000000.0, v9)); /*0x6368d7*/
  }
  else
  {
    v6 = 0.0; /*0x636889*/
    v7 = 0.0; /*0x63688c*/
  }
  v10 = 0; /*0x6368df*/
  *(_DWORD *)(a1 + 1860) = (int)v7; /*0x6368e1*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1616LL) ) /*0x6368ea*/
  {
    v12 = (const char *)(*(_QWORD *)a2 + 6464LL); /*0x6368fa*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 6488LL) > 0xFu ) /*0x636906*/
      v12 = *(const char **)v12; /*0x636908*/
    v11 = atoi(v12); /*0x63690b*/
  }
  else
  {
    v11 = 0; /*0x6368f3*/
  }
  *(_DWORD *)(a1 + 1856) = v11; /*0x636911*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1624LL) ) /*0x63691a*/
  {
    v14 = (const char *)(*(_QWORD *)a2 + 6496LL); /*0x63692a*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 6520LL) > 0xFu ) /*0x636936*/
      v14 = *(const char **)v14; /*0x636938*/
    v13 = atoi(v14); /*0x63693b*/
  }
  else
  {
    v13 = 0; /*0x636923*/
  }
  *(_DWORD *)(a1 + 1868) = v13; /*0x636941*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1632LL) ) /*0x63694a*/
  {
    v16 = (const char *)(*(_QWORD *)a2 + 6528LL); /*0x63695a*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 6552LL) > 0xFu ) /*0x636966*/
      v16 = *(const char **)v16; /*0x636968*/
    v15 = atoi(v16); /*0x63696b*/
  }
  else
  {
    v15 = 0; /*0x636953*/
  }
  *(_DWORD *)(a1 + 1872) = v15; /*0x636971*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1640LL) ) /*0x63697a*/
  {
    v18 = (const char *)(*(_QWORD *)a2 + 6560LL); /*0x63698a*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 6584LL) > 0xFu ) /*0x636996*/
      v18 = *(const char **)v18; /*0x636998*/
    v17 = atoi(v18); /*0x63699b*/
  }
  else
  {
    v17 = 0; /*0x636983*/
  }
  *(_DWORD *)(a1 + 1876) = v17; /*0x6369a1*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1648LL) ) /*0x6369aa*/
  {
    v20 = (const char *)(*(_QWORD *)a2 + 6592LL); /*0x6369ba*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 6616LL) > 0xFu ) /*0x6369c6*/
      v20 = *(const char **)v20; /*0x6369c8*/
    v19 = atoi(v20); /*0x6369cb*/
  }
  else
  {
    v19 = 0; /*0x6369b3*/
  }
  *(_DWORD *)(a1 + 1880) = v19; /*0x6369d1*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1656LL) ) /*0x6369da*/
  {
    v22 = (const char *)(*(_QWORD *)a2 + 6624LL); /*0x6369ea*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 6648LL) > 0xFu ) /*0x6369f6*/
      v22 = *(const char **)v22; /*0x6369f8*/
    v21 = atoi(v22); /*0x6369fb*/
  }
  else
  {
    v21 = 0; /*0x6369e3*/
  }
  *(_BYTE *)(a1 + 1884) = v21 != 0; /*0x636a06*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1664LL) ) /*0x636a0f*/
  {
    v24 = (const char *)(*(_QWORD *)a2 + 6656LL); /*0x636a1f*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 6680LL) > 0xFu ) /*0x636a2b*/
      v24 = *(const char **)v24; /*0x636a2d*/
    v23 = atoi(v24); /*0x636a30*/
  }
  else
  {
    v23 = 0; /*0x636a18*/
  }
  *(_BYTE *)(a1 + 1885) = v23 != 0; /*0x636a3b*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4064LL) ) /*0x636a44*/
  {
    v26 = (const char *)(*(_QWORD *)a2 + 16256LL); /*0x636a54*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 16280LL) > 0xFu ) /*0x636a60*/
      v26 = *(const char **)v26; /*0x636a62*/
    v25 = atoi(v26); /*0x636a65*/
  }
  else
  {
    v25 = 0; /*0x636a4d*/
  }
  *(_BYTE *)(a1 + 1886) = v25 != 0; /*0x636a70*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1672LL) ) /*0x636a79*/
  {
    v27 = (const char *)(*(_QWORD *)a2 + 6688LL); /*0x636a85*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 6712LL) > 0xFu ) /*0x636a91*/
      v27 = *(const char **)v27; /*0x636a93*/
    v10 = atoi(v27); /*0x636a9c*/
  }
  *(_DWORD *)(a1 + 1864) = v10; /*0x636a9e*/
  v28 = *(_QWORD *)a3; /*0x636aa4*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3648LL) ) /*0x636ab1*/
  {
    v29 = (const char *)(*(_QWORD *)a2 + 14592LL); /*0x636abe*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 14616LL) > 0xFu ) /*0x636aca*/
      v29 = *(const char **)v29; /*0x636acc*/
    v30 = atof(v29); /*0x636ad8*/
    LODWORD(v28) = isnan(v30); /*0x636adf*/
    if ( !(_DWORD)v28 ) /*0x636ae7*/
      v6 = fminf(1000000000.0, fmaxf(-1000000000.0, v30)); /*0x636af6*/
  }
  v31 = *(_DWORD *)(a1 + 1856) <= 0; /*0x636afb*/
  *(float *)(a1 + 1888) = v6; /*0x636b12*/
  if ( v31 ) /*0x636b1f*/
    *(_DWORD *)(a1 + 1856) = 1; /*0x636b21*/
  return v28; /*0x636b2b*/
}
