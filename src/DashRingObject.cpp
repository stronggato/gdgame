#include <Geode/binding/DashRingObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x63f370
// Method: DashRingObject::customObjectSetup
int __fastcall DashRingObject_customObjectSetup(__int64 a1, __int64 a2, __int64 a3, float a4)
{
  cocos2d *v7; // rcx
  int v8; // ebp
  int v9; // eax
  const char *v10; // rcx
  int v11; // eax
  const char *v12; // rcx
  int v13; // eax
  const char *v14; // rcx
  int v15; // eax
  const char *v16; // rcx
  float v17; // xmm6_4
  const char *v18; // rcx
  float v19; // xmm8_4
  cocos2d *v20; // rcx
  const char *v21; // rcx
  float v22; // xmm8_4
  int v23; // eax
  const char *v24; // rcx
  const char *v25; // rcx
  __int64 v26; // rax
  const char *v27; // rcx
  float v28; // xmm8_4

  EffectGameObject_customObjectSetup(a1, a2, a3); /*0x63f392*/
  v8 = 0; /*0x63f397*/
  if ( *(_DWORD *)(a1 + 928) == 36 ) /*0x63f3a0*/
  {
    if ( *(_QWORD *)(*(_QWORD *)a3 + 408LL) ) /*0x63f3a9*/
    {
      v10 = (const char *)(*(_QWORD *)a2 + 1632LL); /*0x63f3b9*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 1656LL) > 0xFu ) /*0x63f3c5*/
        v10 = *(const char **)v10; /*0x63f3c7*/
      v9 = atoi(v10); /*0x63f3ca*/
    }
    else
    {
      v9 = 0; /*0x63f3b2*/
    }
    *(_DWORD *)(a1 + 1480) = v9; /*0x63f3d0*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 448LL) ) /*0x63f3d9*/
    {
      v12 = (const char *)(*(_QWORD *)a2 + 1792LL); /*0x63f3e9*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 1816LL) > 0xFu ) /*0x63f3f5*/
        v12 = *(const char **)v12; /*0x63f3f7*/
      v11 = atoi(v12); /*0x63f3fa*/
    }
    else
    {
      v11 = 0; /*0x63f3e2*/
    }
    *(_BYTE *)(a1 + 1653) = v11 != 0; /*0x63f405*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 3560LL) ) /*0x63f40e*/
    {
      v14 = (const char *)(*(_QWORD *)a2 + 14240LL); /*0x63f41e*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 14264LL) > 0xFu ) /*0x63f42a*/
        v14 = *(const char **)v14; /*0x63f42c*/
      v13 = atoi(v14); /*0x63f42f*/
    }
    else
    {
      v13 = 0; /*0x63f417*/
    }
    *(_BYTE *)(a1 + 1856) = v13 != 0; /*0x63f43a*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 4032LL) ) /*0x63f443*/
    {
      v16 = (const char *)(*(_QWORD *)a2 + 16128LL); /*0x63f453*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 16152LL) > 0xFu ) /*0x63f45f*/
        v16 = *(const char **)v16; /*0x63f461*/
      v15 = atoi(v16); /*0x63f464*/
    }
    else
    {
      v15 = 0; /*0x63f44c*/
    }
    *(_BYTE *)(a1 + 1857) = v15 != 0; /*0x63f46f*/
  }
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4688LL) ) /*0x63f48b*/
  {
    v18 = (const char *)(*(_QWORD *)a2 + 18752LL); /*0x63f49f*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 18776LL) > 0xFu ) /*0x63f4ab*/
      v18 = *(const char **)v18; /*0x63f4ad*/
    v19 = atof(v18); /*0x63f4ba*/
    v17 = 0.0; /*0x63f4c9*/
    isnan(v19); /*0x63f4c3*/
  }
  else
  {
    v17 = 0.0; /*0x63f494*/
  }
  *(float *)(a1 + 1864) = cocos2d::clampf(v7, -10000.0, 10000.0, a4); /*0x63f4ff*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4704LL) ) /*0x63f50a*/
  {
    v21 = (const char *)(*(_QWORD *)a2 + 18816LL); /*0x63f51b*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 18840LL) > 0xFu ) /*0x63f527*/
      v21 = *(const char **)v21; /*0x63f529*/
    v22 = atof(v21); /*0x63f536*/
    if ( !isnan(v22) ) /*0x63f53f*/
      a4 = fmaxf(-1000000000.0, v22); /*0x63f559*/
  }
  *(float *)(a1 + 1868) = cocos2d::clampf(v20, -10000.0, 10000.0, a4); /*0x63f578*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4696LL) ) /*0x63f583*/
  {
    v24 = (const char *)(*(_QWORD *)a2 + 18784LL); /*0x63f593*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 18808LL) > 0xFu ) /*0x63f59f*/
      v24 = *(const char **)v24; /*0x63f5a1*/
    v23 = atoi(v24); /*0x63f5a4*/
  }
  else
  {
    v23 = 0; /*0x63f58c*/
  }
  *(_BYTE *)(a1 + 1876) = v23 != 0; /*0x63f5af*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4712LL) ) /*0x63f5b8*/
  {
    v25 = (const char *)(*(_QWORD *)a2 + 18848LL); /*0x63f5c4*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 18872LL) > 0xFu ) /*0x63f5d0*/
      v25 = *(const char **)v25; /*0x63f5d2*/
    v8 = atoi(v25); /*0x63f5db*/
  }
  *(_BYTE *)(a1 + 1877) = v8 != 0; /*0x63f5e7*/
  v26 = *(_QWORD *)a3; /*0x63f5ed*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4720LL) ) /*0x63f5f5*/
  {
    v27 = (const char *)(*(_QWORD *)a2 + 18880LL); /*0x63f602*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 18904LL) > 0xFu ) /*0x63f60e*/
      v27 = *(const char **)v27; /*0x63f610*/
    v28 = atof(v27); /*0x63f61d*/
    LODWORD(v26) = isnan(v28); /*0x63f626*/
    if ( !(_DWORD)v26 ) /*0x63f62e*/
      v17 = fminf(1000000000.0, fmaxf(-1000000000.0, v28)); /*0x63f63d*/
  }
  *(float *)(a1 + 1872) = v17; /*0x63f64c*/
  return v26; /*0x63f647*/
}

// [2/2] Address: 0x63f670
// Method: DashRingObject::getSaveString
// Hidden C++ exception states: #wind=2
__int64 __fastcall DashRingObject_getSaveString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SaveString; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v11[16]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[40]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v13[528]; // [rsp+70h] [rbp-90h] BYREF

  *(_QWORD *)&v10 = a2; /*0x63f6a8*/
  fmt::BasicWriter<char>::BasicWriter<char>(v13); /*0x63f6b5*/
  SaveString = RingObject_getSaveString(a1, (__int64)v12, a3); /*0x63f6c7*/
  v10 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v11, SaveString); /*0x63f6de*/
  fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63f6ed*/
  sub_3C310(v12); /*0x63f6f9*/
  if ( *(float *)(a1 + 1864) != 0.0 ) /*0x63f715*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63f717*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63f71c*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63f72b*/
    fmt::BasicWriter<char>::operator<<(v13, 586); /*0x63f73b*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63f741*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63f746*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63f755*/
    fmt::BasicWriter<char>::operator<<(v13); /*0x63f76b*/
  }
  if ( *(float *)(a1 + 1868) != 0.0 ) /*0x63f77e*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63f780*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63f785*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63f794*/
    fmt::BasicWriter<char>::operator<<(v13, 588); /*0x63f7a4*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63f7aa*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63f7af*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63f7be*/
    fmt::BasicWriter<char>::operator<<(v13); /*0x63f7d4*/
  }
  if ( *(_BYTE *)(a1 + 1876) ) /*0x63f7da*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63f7e3*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63f7e8*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63f7f7*/
    fmt::BasicWriter<char>::operator<<(v13, 587); /*0x63f807*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63f80d*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63f812*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63f821*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1876)); /*0x63f833*/
  }
  if ( *(_BYTE *)(a1 + 1877) ) /*0x63f839*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63f842*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63f847*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63f856*/
    fmt::BasicWriter<char>::operator<<(v13, 589); /*0x63f866*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63f86c*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63f871*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63f880*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1877)); /*0x63f892*/
  }
  if ( *(float *)(a1 + 1872) != 0.0 ) /*0x63f8a5*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63f8a7*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63f8ac*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63f8bb*/
    fmt::BasicWriter<char>::operator<<(v13, 590); /*0x63f8cb*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x63f8d1*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63f8d6*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63f8e5*/
    fmt::BasicWriter<char>::operator<<(v13); /*0x63f8fb*/
  }
  v7 = fmt::BasicWriter<char>::c_str(v13); /*0x63f906*/
  *(_OWORD *)a2 = 0; /*0x63f90f*/
  *(_QWORD *)(a2 + 16) = 0; /*0x63f912*/
  *(_QWORD *)(a2 + 24) = 0; /*0x63f916*/
  v8 = -1; /*0x63f91a*/
  do /*0x63f924*/
    ++v8; /*0x63f921*/
  while ( *(_BYTE *)(v7 + v8) ); /*0x63f924*/
  sub_3C230(a2); /*0x63f931*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v13); /*0x63f93c*/
  return a2; /*0x63f945*/
}
