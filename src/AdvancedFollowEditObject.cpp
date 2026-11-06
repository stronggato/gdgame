#include <new>
#include <Geode/Bindings.hpp>
#include <Geode/binding/AdvancedFollowEditObject.hpp>
#include <cocos2d.h>


inline __m128i Size = {0};
inline GDStub AdvancedFollowTriggerObject_customObjectSetup;
inline GDStub AdvancedFollowTriggerObject_getSaveString;
inline GDStub TextGameObject__dtor_TextGameObject;
using namespace cocos2d;

// [1/3] Address: 0x633010
// Method: AdvancedFollowEditObject::~AdvancedFollowEditObject
AdvancedFollowEditObject::~AdvancedFollowEditObject()
{
  auto Block = (char*)this;
  _BYTE* a1 = (_BYTE*)this;
  uint64_t a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

//   *(_QWORD *)Block  = (uintptr_t)(&EffectGameObject::`vftable'); /*0x633023*/ // cleaned vftable
//   *((_QWORD *)Block + 40) = &EffectGameObject::`vftable'; /*0x633030*/ // cleaned vftable
//   *((_QWORD *)Block + 43) = &EffectGameObject::`vftable'; /*0x63303e*/ // cleaned vftable
//   TextGameObject__dtor_TextGameObject(Block); /*0x633045*/ // cleaned dtor call
//   if ( (a2 & 1) != 0 ) /*0x63304d*/
//     j_j_free(Block); /*0x633057*/ // cleaned scalar delete
  return; /*0x63305c*/
}

// [2/3] Address: 0x63b7e0
// Method: AdvancedFollowEditObject::getSaveString
std::string AdvancedFollowEditObject::getSaveString(GJBaseGameLayer* layer)
{
  __int64 a1 = (__int64)this;
  __int64 a2 = (__int64)to_gd_arg(layer);
  __int64 a3 = (__int64)to_gd_arg(0);
  uint64_t a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  __int64 SaveString; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v11[16]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[40]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v13[528]; // [rsp+70h] [rbp-90h] BYREF

  *(_QWORD *)&v10  = (uintptr_t)(a2); /*0x63b818*/
//   fmt::BasicWriter<char>::BasicWriter<char>(v13); /*0x63b825*/ // cleaned fmt call
  SaveString = AdvancedFollowTriggerObject_getSaveString(a1, (__int64)v12, a3); /*0x63b837*/
//   v10 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v11, SaveString); /*0x63b84e*/ // cleaned fmt call
//   fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63b85d*/ // cleaned fmt call
  sub_3C310(v12); /*0x63b869*/
  if ( *(float *)(a1 + 2104) != 0.0 ) /*0x63b885*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x63b887*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63b88c*/
//     fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63b89b*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v13, 566); /*0x63b8ab*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x63b8b1*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63b8b6*/
//     fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63b8c5*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v13); /*0x63b8db*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 2108) != 0.0 ) /*0x63b8ee*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x63b8f0*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63b8f5*/
//     fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63b904*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v13, 567); /*0x63b914*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x63b91a*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63b91f*/
//     fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63b92e*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v13); /*0x63b944*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 2112) != 0.0 ) /*0x63b957*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x63b959*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63b95e*/
//     fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63b96d*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v13, 568); /*0x63b97d*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x63b983*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63b988*/
//     fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63b997*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v13); /*0x63b9ad*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 2116) != 0.0 ) /*0x63b9c0*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x63b9c2*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63b9c7*/
//     fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63b9d6*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v13, 569); /*0x63b9e6*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x63b9ec*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63b9f1*/
//     fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63ba00*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v13); /*0x63ba16*/ // cleaned fmt call
  }
  if ( *(_BYTE *)(a1 + 2120) ) /*0x63ba1c*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x63ba25*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63ba2a*/
//     fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63ba39*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v13, 570); /*0x63ba49*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x63ba4f*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63ba54*/
//     fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63ba63*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 2120)); /*0x63ba75*/ // cleaned fmt call
  }
  if ( *(_BYTE *)(a1 + 1692) ) /*0x63ba7b*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x63ba84*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63ba89*/
//     fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63ba98*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v13, 535); /*0x63baa8*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x63baae*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63bab3*/
//     fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x63bac2*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1692)); /*0x63bad4*/ // cleaned fmt call
  }
//   v7 = fmt::BasicWriter<char>::c_str(v13); /*0x63badf*/ // cleaned fmt call
  *(_OWORD *)a2 = 0; /*0x63bae8*/
  *(_QWORD *)(a2 + 16)  = (uintptr_t)(0); /*0x63baeb*/
  *(_QWORD *)(a2 + 24)  = (uintptr_t)(0); /*0x63baef*/
  v8 = -1; /*0x63baf3*/
  do /*0x63bb03*/
    ++v8; /*0x63bb00*/
  while ( *(_BYTE *)(v7 + v8) ); /*0x63bb03*/
  sub_3C230(a2); /*0x63bb10*/
//   fmt::BasicWriter<char>::~BasicWriter<char>(v13); /*0x63bb1b*/ // cleaned fmt call
  return {}; /*0x63bb24*/
}

// [3/3] Address: 0x63bb50
// Method: AdvancedFollowEditObject::customObjectSetup
void AdvancedFollowEditObject::customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists)
{
  __int64 a1 = (__int64)this;
  __int64 a2 = (__int64)to_gd_arg(values);
  __int64 a3 = (__int64)to_gd_arg(exists);
  uint64_t a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  float v6; // xmm6_4
  float v7; // xmm1_4
  const char *v8; // rcx
  float v9; // xmm8_4
  float v10; // xmm1_4
  const char *v11; // rcx
  float v12; // xmm8_4
  float v13; // xmm1_4
  const char *v14; // rcx
  float v15; // xmm8_4
  const char *v16; // rcx
  float v17; // xmm8_4
  int v18; // ebx
  int v19; // eax
  const char *v20; // rcx
  const char *v21; // rcx

  AdvancedFollowTriggerObject_customObjectSetup(a1, a2, a3); /*0x63bb80*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4528LL) ) /*0x63bb99*/
  {
    v8 = (const char *)(*(_QWORD *)a2 + 18112LL); /*0x63bbae*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 18136LL) > 0xFu ) /*0x63bbba*/
      v8 = *(const char **)v8; /*0x63bbbc*/
    v9 = atof(v8); /*0x63bbc9*/
    v6 = 0.0; /*0x63bbd8*/
    if ( isnan(v9) ) /*0x63bbd2*/
      v7 = 0.0; /*0x63bbdf*/
    else
      v7 = fminf(1000000000.0, fmaxf(-1000000000.0, v9)); /*0x63bbf0*/
  }
  else
  {
    v6 = 0.0; /*0x63bba3*/
    v7 = 0.0; /*0x63bba6*/
  }
  *(float *)(a1 + 2104) = v7; /*0x63bbf4*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4536LL) ) /*0x63bbff*/
  {
    v11 = (const char *)(*(_QWORD *)a2 + 18144LL); /*0x63bc11*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 18168LL) > 0xFu ) /*0x63bc1d*/
      v11 = *(const char **)v11; /*0x63bc1f*/
    v12 = atof(v11); /*0x63bc2c*/
    if ( isnan(v12) ) /*0x63bc35*/
      v10 = 0.0; /*0x63bc3f*/
    else
      v10 = fminf(1000000000.0, fmaxf(-1000000000.0, v12)); /*0x63bc50*/
  }
  else
  {
    v10 = 0.0; /*0x63bc09*/
  }
  *(float *)(a1 + 2108) = v10; /*0x63bc54*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4544LL) ) /*0x63bc5f*/
  {
    v14 = (const char *)(*(_QWORD *)a2 + 18176LL); /*0x63bc71*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 18200LL) > 0xFu ) /*0x63bc7d*/
      v14 = *(const char **)v14; /*0x63bc7f*/
    v15 = atof(v14); /*0x63bc8c*/
    if ( isnan(v15) ) /*0x63bc95*/
      v13 = 0.0; /*0x63bc9f*/
    else
      v13 = fminf(1000000000.0, fmaxf(-1000000000.0, v15)); /*0x63bcb0*/
  }
  else
  {
    v13 = 0.0; /*0x63bc69*/
  }
  *(float *)(a1 + 2112) = v13; /*0x63bcb4*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4552LL) ) /*0x63bcbf*/
  {
    v16 = (const char *)(*(_QWORD *)a2 + 18208LL); /*0x63bccc*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 18232LL) > 0xFu ) /*0x63bcd8*/
      v16 = *(const char **)v16; /*0x63bcda*/
    v17 = atof(v16); /*0x63bce7*/
    if ( !isnan(v17) ) /*0x63bcf0*/
      v6 = fminf(1000000000.0, fmaxf(-1000000000.0, v17)); /*0x63bd03*/
  }
  v18 = 0; /*0x63bd0d*/
  *(float *)(a1 + 2116) = v6; /*0x63bd1a*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4560LL) ) /*0x63bd2a*/
  {
    v20 = (const char *)(*(_QWORD *)a2 + 18240LL); /*0x63bd3a*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 18264LL) > 0xFu ) /*0x63bd46*/
      v20 = *(const char **)v20; /*0x63bd48*/
    v19 = atoi(v20); /*0x63bd4b*/
  }
  else
  {
    v19 = 0; /*0x63bd33*/
  }
  *(_BYTE *)(a1 + 2120) = v19 != 0; /*0x63bd56*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4280LL) ) /*0x63bd64*/
  {
    v21 = (const char *)(*(_QWORD *)a2 + 17120LL); /*0x63bd70*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 17144LL) > 0xFu ) /*0x63bd7c*/
      v21 = *(const char **)v21; /*0x63bd7e*/
    v18 = atoi(v21); /*0x63bd87*/
  }
  *(_BYTE *)(a1 + 1692) = v18 != 0; /*0x63bd93*/
  { v18 != 0; return; } /*0x63bd8b*/
}
