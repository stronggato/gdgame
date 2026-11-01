#include <Geode/binding/EnhancedTriggerObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x64e220
// Method: EnhancedTriggerObject::getSaveString
// Hidden C++ exception states: #wind=2
__int64 __fastcall EnhancedTriggerObject_getSaveString(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 SaveString; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v11[16]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[40]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v13[528]; // [rsp+70h] [rbp-90h] BYREF

  *(_QWORD *)&v10 = a2; /*0x64e250*/
  fmt::BasicWriter<char>::BasicWriter<char>(v13); /*0x64e25d*/
  SaveString = EffectGameObject_getSaveString((__int64)a1, (__int64)v12, a3); /*0x64e26f*/
  v10 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v11, SaveString); /*0x64e286*/
  fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x64e295*/
  sub_3C310(v12); /*0x64e2a1*/
  if ( a1[464] ) /*0x64e2ad*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64e2b6*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64e2bb*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x64e2ca*/
    fmt::BasicWriter<char>::operator<<(v13, 516); /*0x64e2da*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64e2e0*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64e2e5*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x64e2f4*/
    fmt::BasicWriter<char>::operator<<(v13, a1[464]); /*0x64e305*/
  }
  if ( a1[465] ) /*0x64e30b*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64e314*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64e319*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x64e328*/
    fmt::BasicWriter<char>::operator<<(v13, 517); /*0x64e338*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64e33e*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64e343*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x64e352*/
    fmt::BasicWriter<char>::operator<<(v13, a1[465]); /*0x64e363*/
  }
  if ( a1[466] ) /*0x64e369*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64e372*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64e377*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x64e386*/
    fmt::BasicWriter<char>::operator<<(v13, 518); /*0x64e396*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64e39c*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64e3a1*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x64e3b0*/
    fmt::BasicWriter<char>::operator<<(v13, a1[466]); /*0x64e3c1*/
  }
  if ( a1[467] ) /*0x64e3c7*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64e3d0*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64e3d5*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x64e3e4*/
    fmt::BasicWriter<char>::operator<<(v13, 519); /*0x64e3f4*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x64e3fa*/
    *((_QWORD *)&v10 + 1) = 0; /*0x64e3ff*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x64e40e*/
    fmt::BasicWriter<char>::operator<<(v13, a1[467]); /*0x64e41f*/
  }
  v7 = fmt::BasicWriter<char>::c_str(v13); /*0x64e42a*/
  *(_OWORD *)a2 = 0; /*0x64e433*/
  *(_QWORD *)(a2 + 16) = 0; /*0x64e436*/
  *(_QWORD *)(a2 + 24) = 0; /*0x64e43a*/
  v8 = -1; /*0x64e43e*/
  do /*0x64e448*/
    ++v8; /*0x64e445*/
  while ( *(_BYTE *)(v7 + v8) ); /*0x64e448*/
  sub_3C230(a2); /*0x64e455*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v13); /*0x64e460*/
  return a2; /*0x64e469*/
}

// [2/2] Address: 0x64e490
// Method: EnhancedTriggerObject::customObjectSetup
int __fastcall EnhancedTriggerObject_customObjectSetup(_DWORD *a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  const char *v7; // rcx
  int v8; // eax
  const char *v9; // rcx
  int v10; // eax
  const char *v11; // rcx
  __int64 v12; // rax
  const char *v13; // rcx

  EffectGameObject_customObjectSetup((__int64)a1, a2, a3); /*0x64e4a8*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4128LL) ) /*0x64e4b0*/
  {
    v7 = (const char *)(*(_QWORD *)a2 + 16512LL); /*0x64e4c1*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 16536LL) > 0xFu ) /*0x64e4cd*/
      v7 = *(const char **)v7; /*0x64e4cf*/
    v6 = atoi(v7); /*0x64e4d2*/
  }
  else
  {
    v6 = 0; /*0x64e4ba*/
  }
  a1[464] = v6; /*0x64e4d8*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4136LL) ) /*0x64e4e1*/
  {
    v9 = (const char *)(*(_QWORD *)a2 + 16544LL); /*0x64e4f2*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 16568LL) > 0xFu ) /*0x64e4fe*/
      v9 = *(const char **)v9; /*0x64e500*/
    v8 = atoi(v9); /*0x64e503*/
  }
  else
  {
    v8 = 0; /*0x64e4eb*/
  }
  a1[465] = v8; /*0x64e509*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4144LL) ) /*0x64e512*/
  {
    v11 = (const char *)(*(_QWORD *)a2 + 16576LL); /*0x64e523*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 16600LL) > 0xFu ) /*0x64e52f*/
      v11 = *(const char **)v11; /*0x64e531*/
    v10 = atoi(v11); /*0x64e534*/
  }
  else
  {
    v10 = 0; /*0x64e51c*/
  }
  a1[466] = v10; /*0x64e53a*/
  v12 = *(_QWORD *)a3; /*0x64e540*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4152LL) ) /*0x64e543*/
  {
    v13 = (const char *)(*(_QWORD *)a2 + 16608LL); /*0x64e56a*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 16632LL) > 0xFu ) /*0x64e576*/
      v13 = *(const char **)v13; /*0x64e578*/
    LODWORD(v12) = atoi(v13); /*0x64e57b*/
    a1[467] = v12; /*0x64e586*/
  }
  else
  {
    a1[467] = 0; /*0x64e54d*/
  }
  return v12; /*0x64e557*/
}
