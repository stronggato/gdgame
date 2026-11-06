#include <new>
#include <Geode/Bindings.hpp>
#include <Geode/binding/AdvancedFollowTriggerObject.hpp>
#include <cocos2d.h>


inline __m128i Size = {0};
inline GDStub EffectGameObject_EffectGameObject;
inline GDStub EffectGameObject_customObjectSetup;
inline GDStub EffectGameObject_getSaveString;
inline GDStub LABEL_16;
inline GDStub LABEL_17;
inline GDStub TextGameObject__dtor_TextGameObject;
using namespace cocos2d;

// [1/4] Address: 0x632e80
// Method: AdvancedFollowTriggerObject::AdvancedFollowTriggerObject
AdvancedFollowTriggerObject::AdvancedFollowTriggerObject()
{
  _BYTE* a1 = (_BYTE*)this;
  uint64_t a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

//   EffectGameObject_EffectGameObject(a1); /*0x632e89*/ // cleaned base ctor
//   *(_QWORD *)a1  = (uintptr_t)(&AdvancedFollowTriggerObject::`vftable'); /*0x632e95*/ // cleaned vftable
//   *(_QWORD *)(a1 + 320)  = (uintptr_t)(&AdvancedFollowTriggerObject::`vftable'); /*0x632e9f*/ // cleaned vftable
//   *(_QWORD *)(a1 + 344)  = (uintptr_t)(&AdvancedFollowTriggerObject::`vftable'); /*0x632ead*/ // cleaned vftable
  *(_QWORD *)(a1 + 1856)  = (uintptr_t)(0); /*0x632eb6*/
  *(_QWORD *)(a1 + 1864)  = (uintptr_t)(0); /*0x632ebd*/
  *(_QWORD *)(a1 + 1872)  = (uintptr_t)(0); /*0x632ec4*/
  *(_QWORD *)(a1 + 1880)  = (uintptr_t)(0); /*0x632ecb*/
  *(_QWORD *)(a1 + 1888)  = (uintptr_t)(0); /*0x632ed2*/
  *(_WORD *)(a1 + 1896) = 0; /*0x632ed9*/
  *(_QWORD *)(a1 + 1900)  = (uintptr_t)(0); /*0x632ee0*/
  *(_QWORD *)(a1 + 1908)  = (uintptr_t)(0); /*0x632ee7*/
  *(_QWORD *)(a1 + 1916)  = (uintptr_t)(0); /*0x632eee*/
  *(_QWORD *)(a1 + 1924)  = (uintptr_t)(0); /*0x632ef5*/
  *(_QWORD *)(a1 + 1932)  = (uintptr_t)(0); /*0x632efc*/
  *(_QWORD *)(a1 + 1940)  = (uintptr_t)(0); /*0x632f03*/
  *(_BYTE *)(a1 + 1948) = 0; /*0x632f0a*/
  *(_QWORD *)(a1 + 1952)  = (uintptr_t)(0); /*0x632f10*/
  *(_BYTE *)(a1 + 1960) = 0; /*0x632f17*/
  *(_QWORD *)(a1 + 1964)  = (uintptr_t)(0); /*0x632f1d*/
  *(_QWORD *)(a1 + 1972)  = (uintptr_t)(0); /*0x632f24*/
  *(_QWORD *)(a1 + 1980)  = (uintptr_t)(0); /*0x632f2b*/
  *(_QWORD *)(a1 + 1988)  = (uintptr_t)(0); /*0x632f32*/
  *(_QWORD *)(a1 + 1996)  = (uintptr_t)(0); /*0x632f39*/
  *(_QWORD *)(a1 + 2004)  = (uintptr_t)(0); /*0x632f40*/
  *(_QWORD *)(a1 + 2012)  = (uintptr_t)(0); /*0x632f47*/
  *(_WORD *)(a1 + 2020) = 0; /*0x632f4e*/
  *(_BYTE *)(a1 + 2022) = 0; /*0x632f55*/
  *(_QWORD *)(a1 + 2024)  = (uintptr_t)(0); /*0x632f5b*/
  *(_QWORD *)(a1 + 2032)  = (uintptr_t)(0); /*0x632f62*/
  *(_QWORD *)(a1 + 2040)  = (uintptr_t)(0); /*0x632f69*/
  *(_QWORD *)(a1 + 2048)  = (uintptr_t)(0); /*0x632f70*/
  *(_QWORD *)(a1 + 2056)  = (uintptr_t)(0); /*0x632f77*/
  *(_QWORD *)(a1 + 2064)  = (uintptr_t)(0); /*0x632f7e*/
  *(_QWORD *)(a1 + 2072)  = (uintptr_t)(0); /*0x632f85*/
  *(_QWORD *)(a1 + 2080)  = (uintptr_t)(0); /*0x632f8c*/
  *(_DWORD *)(a1 + 2088) = 0; /*0x632f93*/
  *(_BYTE *)(a1 + 2092) = 0; /*0x632f99*/
  *(_DWORD *)(a1 + 2096) = 0; /*0x632f9f*/
  return; /*0x632fa8*/
}

// [2/4] Address: 0x632fb0
// Method: AdvancedFollowTriggerObject::~AdvancedFollowTriggerObject
AdvancedFollowTriggerObject::~AdvancedFollowTriggerObject()
{
  auto Block = (char*)this;
  _BYTE* a1 = (_BYTE*)this;
  uint64_t a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

//   *(_QWORD *)Block  = (uintptr_t)(&EffectGameObject::`vftable'); /*0x632fc3*/ // cleaned vftable
//   *((_QWORD *)Block + 40) = &EffectGameObject::`vftable'; /*0x632fd0*/ // cleaned vftable
//   *((_QWORD *)Block + 43) = &EffectGameObject::`vftable'; /*0x632fde*/ // cleaned vftable
//   TextGameObject__dtor_TextGameObject(Block); /*0x632fe5*/ // cleaned dtor call
//   if ( (a2 & 1) != 0 ) /*0x632fed*/
//     j_j_free(Block); /*0x632ff7*/ // cleaned scalar delete
  return; /*0x632ffc*/
}

// [3/4] Address: 0x638540
// Method: AdvancedFollowTriggerObject::getSaveString
std::string AdvancedFollowTriggerObject::getSaveString(GJBaseGameLayer* layer)
{
  __int64 a1 = (__int64)this;
  __int64 a2 = (__int64)to_gd_arg(layer);
  __int64 a3 = (__int64)to_gd_arg(0);
  uint64_t a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  __int64 SaveString; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v11[24]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[528]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v13[32]; // [rsp+260h] [rbp+160h] BYREF

  *(_QWORD *)&v10  = (uintptr_t)(a2); /*0x638578*/
//   fmt::BasicWriter<char>::BasicWriter<char>(v12); /*0x638585*/ // cleaned fmt call
  SaveString = EffectGameObject_getSaveString(a1, (__int64)v13, a3); /*0x638599*/
//   v10 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v11, SaveString); /*0x6385b0*/ // cleaned fmt call
//   fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6385bf*/ // cleaned fmt call
  sub_3C310(v13); /*0x6385cd*/
  if ( *(_DWORD *)(a1 + 1480) ) /*0x6385d9*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x6385e2*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6385e7*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6385f6*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 51); /*0x638606*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x63860c*/
    *((_QWORD *)&v10 + 1) = 0; /*0x638611*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x638620*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1480)); /*0x638631*/ // cleaned fmt call
  }
  if ( *(_DWORD *)(a1 + 1484) ) /*0x638637*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x638640*/
    *((_QWORD *)&v10 + 1) = 0; /*0x638645*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x638654*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 71); /*0x638664*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x63866a*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63866f*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63867e*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1484)); /*0x63868f*/ // cleaned fmt call
  }
  if ( *(_BYTE *)(a1 + 1700) ) /*0x638695*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x63869e*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6386a3*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6386b2*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 138); /*0x6386c2*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x6386c8*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6386cd*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6386dc*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1700)); /*0x6386ee*/ // cleaned fmt call
  }
  if ( *(_BYTE *)(a1 + 1701) ) /*0x6386f4*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x6386fd*/
    *((_QWORD *)&v10 + 1) = 0; /*0x638702*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x638711*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 200); /*0x638721*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x638727*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63872c*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63873b*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1701)); /*0x63874d*/ // cleaned fmt call
  }
  if ( *(_BYTE *)(a1 + 1702) ) /*0x638753*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x63875c*/
    *((_QWORD *)&v10 + 1) = 0; /*0x638761*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x638770*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 201); /*0x638780*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x638786*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63878b*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63879a*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1702)); /*0x6387ac*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 1856) != 0.0 ) /*0x6387c2*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x6387c4*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6387c9*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6387d8*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 292); /*0x6387e8*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x6387ee*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6387f3*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x638802*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x638818*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 1860) != 0.0 ) /*0x63882b*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x63882d*/
    *((_QWORD *)&v10 + 1) = 0; /*0x638832*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x638841*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 293); /*0x638851*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x638857*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63885c*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63886b*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x638881*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 1888) != 0.0 ) /*0x638894*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x638896*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63889b*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6388aa*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 298); /*0x6388ba*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x6388c0*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6388c5*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6388d4*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x6388ea*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 1892) != 0.0 ) /*0x6388fd*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x6388ff*/
    *((_QWORD *)&v10 + 1) = 0; /*0x638904*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x638913*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 299); /*0x638923*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x638929*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63892e*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63893d*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x638953*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 2052) != 0.0 ) /*0x638966*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x638968*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63896d*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63897c*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 558); /*0x63898c*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x638992*/
    *((_QWORD *)&v10 + 1) = 0; /*0x638997*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6389a6*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x6389bc*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 2056) != 0.0 ) /*0x6389cf*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x6389d1*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6389d6*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6389e5*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 559); /*0x6389f5*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x6389fb*/
    *((_QWORD *)&v10 + 1) = 0; /*0x638a00*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x638a0f*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x638a25*/ // cleaned fmt call
  }
  if ( *(_BYTE *)(a1 + 1896) ) /*0x638a2b*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x638a34*/
    *((_QWORD *)&v10 + 1) = 0; /*0x638a39*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x638a48*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 306); /*0x638a58*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x638a5e*/
    *((_QWORD *)&v10 + 1) = 0; /*0x638a63*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x638a72*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1896)); /*0x638a84*/ // cleaned fmt call
  }
  if ( *(_BYTE *)(a1 + 1897) ) /*0x638a8a*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x638a93*/
    *((_QWORD *)&v10 + 1) = 0; /*0x638a98*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x638aa7*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 307); /*0x638ab7*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x638abd*/
    *((_QWORD *)&v10 + 1) = 0; /*0x638ac2*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x638ad1*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1897)); /*0x638ae3*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 1900) != 0.0 ) /*0x638af6*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x638af8*/
    *((_QWORD *)&v10 + 1) = 0; /*0x638afd*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x638b0c*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 308); /*0x638b1c*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x638b22*/
    *((_QWORD *)&v10 + 1) = 0; /*0x638b27*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x638b36*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x638b4c*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 1904) != 0.0 ) /*0x638b5f*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x638b61*/
    *((_QWORD *)&v10 + 1) = 0; /*0x638b66*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x638b75*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 309); /*0x638b85*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x638b8b*/
    *((_QWORD *)&v10 + 1) = 0; /*0x638b90*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x638b9f*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x638bb5*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 1908) != 0.0 ) /*0x638bc8*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x638bca*/
    *((_QWORD *)&v10 + 1) = 0; /*0x638bcf*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x638bde*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 310); /*0x638bee*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x638bf4*/
    *((_QWORD *)&v10 + 1) = 0; /*0x638bf9*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x638c08*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x638c1e*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 1912) != 0.0 ) /*0x638c31*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x638c33*/
    *((_QWORD *)&v10 + 1) = 0; /*0x638c38*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x638c47*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 311); /*0x638c57*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x638c5d*/
    *((_QWORD *)&v10 + 1) = 0; /*0x638c62*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x638c71*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x638c87*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 1916) != 0.0 ) /*0x638c9a*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x638c9c*/
    *((_QWORD *)&v10 + 1) = 0; /*0x638ca1*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x638cb0*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 334); /*0x638cc0*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x638cc6*/
    *((_QWORD *)&v10 + 1) = 0; /*0x638ccb*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x638cda*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x638cf0*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 1920) != 0.0 ) /*0x638d03*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x638d05*/
    *((_QWORD *)&v10 + 1) = 0; /*0x638d0a*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x638d19*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 335); /*0x638d29*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x638d2f*/
    *((_QWORD *)&v10 + 1) = 0; /*0x638d34*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x638d43*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x638d59*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 1924) != 0.0 ) /*0x638d6c*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x638d6e*/
    *((_QWORD *)&v10 + 1) = 0; /*0x638d73*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x638d82*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 312); /*0x638d92*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x638d98*/
    *((_QWORD *)&v10 + 1) = 0; /*0x638d9d*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x638dac*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x638dc2*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 1928) != 0.0 ) /*0x638dd5*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x638dd7*/
    *((_QWORD *)&v10 + 1) = 0; /*0x638ddc*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x638deb*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 313); /*0x638dfb*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x638e01*/
    *((_QWORD *)&v10 + 1) = 0; /*0x638e06*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x638e15*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x638e2b*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 1932) != 0.0 ) /*0x638e3e*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x638e40*/
    *((_QWORD *)&v10 + 1) = 0; /*0x638e45*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x638e54*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 314); /*0x638e64*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x638e6a*/
    *((_QWORD *)&v10 + 1) = 0; /*0x638e6f*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x638e7e*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x638e94*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 1936) != 0.0 ) /*0x638ea7*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x638ea9*/
    *((_QWORD *)&v10 + 1) = 0; /*0x638eae*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x638ebd*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 315); /*0x638ecd*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x638ed3*/
    *((_QWORD *)&v10 + 1) = 0; /*0x638ed8*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x638ee7*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x638efd*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 1940) != 0.0 ) /*0x638f10*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x638f12*/
    *((_QWORD *)&v10 + 1) = 0; /*0x638f17*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x638f26*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 316); /*0x638f36*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x638f3c*/
    *((_QWORD *)&v10 + 1) = 0; /*0x638f41*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x638f50*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x638f66*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 1944) != 0.0 ) /*0x638f79*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x638f7b*/
    *((_QWORD *)&v10 + 1) = 0; /*0x638f80*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x638f8f*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 317); /*0x638f9f*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x638fa5*/
    *((_QWORD *)&v10 + 1) = 0; /*0x638faa*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x638fb9*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x638fcf*/ // cleaned fmt call
  }
  if ( *(_BYTE *)(a1 + 1948) ) /*0x638fd5*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x638fde*/
    *((_QWORD *)&v10 + 1) = 0; /*0x638fe3*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x638ff2*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 337); /*0x639002*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639008*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63900d*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63901c*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1948)); /*0x63902e*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 1952) != 0.0 ) /*0x639041*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639043*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639048*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639057*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 318); /*0x639067*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x63906d*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639072*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639081*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x639097*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 1956) != 0.0 ) /*0x6390aa*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x6390ac*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6390b1*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6390c0*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 319); /*0x6390d0*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x6390d6*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6390db*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6390ea*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x639100*/ // cleaned fmt call
  }
  if ( *(_BYTE *)(a1 + 1960) ) /*0x639106*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x63910f*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639114*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639123*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 338); /*0x639133*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639139*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63913e*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63914d*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1960)); /*0x63915f*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 1964) != 0.0 ) /*0x639172*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639174*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639179*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639188*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 320); /*0x639198*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x63919e*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6391a3*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6391b2*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x6391c8*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 1968) != 0.0 ) /*0x6391db*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x6391dd*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6391e2*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6391f1*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 321); /*0x639201*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639207*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63920c*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63921b*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x639231*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 1972) != 0.0 ) /*0x639244*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639246*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63924b*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63925a*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 322); /*0x63926a*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639270*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639275*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639284*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x63929a*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 1976) != 0.0 ) /*0x6392ad*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x6392af*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6392b4*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6392c3*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 323); /*0x6392d3*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x6392d9*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6392de*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6392ed*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x639303*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 1980) != 0.0 ) /*0x639316*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639318*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63931d*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63932c*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 324); /*0x63933c*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639342*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639347*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639356*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x63936c*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 1984) != 0.0 ) /*0x63937f*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639381*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639386*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639395*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 325); /*0x6393a5*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x6393ab*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6393b0*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6393bf*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x6393d5*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 1864) != 0.0 ) /*0x6393e8*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x6393ea*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6393ef*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6393fe*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 300); /*0x63940e*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639414*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639419*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639428*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x63943e*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 1868) != 0.0 ) /*0x639451*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639453*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639458*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639467*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 301); /*0x639477*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x63947d*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639482*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639491*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x6394a7*/ // cleaned fmt call
  }
  if ( *(_DWORD *)(a1 + 1872) ) /*0x6394ad*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x6394b6*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6394bb*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6394ca*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 560); /*0x6394da*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x6394e0*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6394e5*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6394f4*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1872)); /*0x639505*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 1876) != 0.0 ) /*0x639518*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x63951a*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63951f*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63952e*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 563); /*0x63953e*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639544*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639549*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639558*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x63956e*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 1880) != 0.0 ) /*0x639581*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639583*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639588*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639597*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 564); /*0x6395a7*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x6395ad*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6395b2*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6395c1*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x6395d7*/ // cleaned fmt call
  }
  if ( *(_DWORD *)(a1 + 1884) ) /*0x6395dd*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x6395e6*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6395eb*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6395fa*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 565); /*0x63960a*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639610*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639615*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639624*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1884)); /*0x639635*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 1988) != 0.0 ) /*0x639648*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x63964a*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63964f*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63965e*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 326); /*0x63966e*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639674*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639679*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639688*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x63969e*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 1992) != 0.0 ) /*0x6396b1*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x6396b3*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6396b8*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6396c7*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 327); /*0x6396d7*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x6396dd*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6396e2*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6396f1*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x639707*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 1996) != 0.0 ) /*0x63971a*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x63971c*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639721*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639730*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 328); /*0x639740*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639746*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63974b*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63975a*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x639770*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 2000) != 0.0 ) /*0x639783*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639785*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63978a*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639799*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 329); /*0x6397a9*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x6397af*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6397b4*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6397c3*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x6397d9*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 2004) != 0.0 ) /*0x6397ec*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x6397ee*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6397f3*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639802*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 330); /*0x639812*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639818*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63981d*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63982c*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x639842*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 2008) != 0.0 ) /*0x639855*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639857*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63985c*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63986b*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 331); /*0x63987b*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639881*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639886*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639895*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x6398ab*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 2012) != 0.0 ) /*0x6398be*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x6398c0*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6398c5*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6398d4*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 332); /*0x6398e4*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x6398ea*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6398ef*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6398fe*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x639914*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 2016) != 0.0 ) /*0x639927*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639929*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63992e*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63993d*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 333); /*0x63994d*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639953*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639958*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639967*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x63997d*/ // cleaned fmt call
  }
  if ( *(_BYTE *)(a1 + 2020) ) /*0x639983*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x63998c*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639991*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6399a0*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 305); /*0x6399b0*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x6399b6*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6399bb*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6399ca*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 2020)); /*0x6399dc*/ // cleaned fmt call
  }
  if ( *(_BYTE *)(a1 + 2021) ) /*0x6399e2*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x6399eb*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6399f0*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6399ff*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 336); /*0x639a0f*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639a15*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639a1a*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639a29*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 2021)); /*0x639a3b*/ // cleaned fmt call
  }
  if ( *(_BYTE *)(a1 + 2022) ) /*0x639a41*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639a4a*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639a4f*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639a5e*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 339); /*0x639a6e*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639a74*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639a79*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639a88*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 2022)); /*0x639a9a*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 2024) != 0.0 ) /*0x639aad*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639aaf*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639ab4*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639ac3*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 340); /*0x639ad3*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639ad9*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639ade*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639aed*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x639b03*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 2028) != 0.0 ) /*0x639b16*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639b18*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639b1d*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639b2c*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 357); /*0x639b3c*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639b42*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639b47*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639b56*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x639b6c*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 2032) != 0.0 ) /*0x639b7f*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639b81*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639b86*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639b95*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 358); /*0x639ba5*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639bab*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639bb0*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639bbf*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x639bd5*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 2036) != 0.0 ) /*0x639be8*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639bea*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639bef*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639bfe*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 359); /*0x639c0e*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639c14*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639c19*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639c28*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x639c3e*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 2040) != 0.0 ) /*0x639c51*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639c53*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639c58*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639c67*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 360); /*0x639c77*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639c7d*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639c82*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639c91*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x639ca7*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 2044) != 0.0 ) /*0x639cba*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639cbc*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639cc1*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639cd0*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 561); /*0x639ce0*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639ce6*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639ceb*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639cfa*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x639d10*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 2048) != 0.0 ) /*0x639d23*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639d25*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639d2a*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639d39*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 562); /*0x639d49*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639d4f*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639d54*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639d63*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x639d79*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 2060) != 0.0 ) /*0x639d8c*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639d8e*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639d93*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639da2*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 361); /*0x639db2*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639db8*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639dbd*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639dcc*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x639de2*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 2064) != 0.0 ) /*0x639df5*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639df7*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639dfc*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639e0b*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 362); /*0x639e1b*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639e21*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639e26*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639e35*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x639e4b*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 2068) != 0.0 ) /*0x639e5e*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639e60*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639e65*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639e74*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 363); /*0x639e84*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639e8a*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639e8f*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639e9e*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x639eb4*/ // cleaned fmt call
  }
  if ( *(float *)(a1 + 2072) != 0.0 ) /*0x639ec7*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639ec9*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639ece*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639edd*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 364); /*0x639eed*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639ef3*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639ef8*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639f07*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12); /*0x639f1d*/ // cleaned fmt call
  }
  if ( *(_DWORD *)(a1 + 2076) ) /*0x639f23*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639f2c*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639f31*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639f40*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 365); /*0x639f50*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639f56*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639f5b*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639f6a*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 2076)); /*0x639f7b*/ // cleaned fmt call
  }
  if ( *(_DWORD *)(a1 + 2084) ) /*0x639f81*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639f8a*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639f8f*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639f9e*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 366); /*0x639fae*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639fb4*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639fb9*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639fc8*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 2084)); /*0x639fd9*/ // cleaned fmt call
  }
  if ( *(_DWORD *)(a1 + 2088) ) /*0x639fdf*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x639fe8*/
    *((_QWORD *)&v10 + 1) = 0; /*0x639fed*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x639ffc*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 367); /*0x63a00c*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x63a012*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63a017*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63a026*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 2088)); /*0x63a037*/ // cleaned fmt call
  }
  if ( *(_BYTE *)(a1 + 2092) ) /*0x63a03d*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x63a046*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63a04b*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63a05a*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 571); /*0x63a06a*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x63a070*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63a075*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63a084*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 2092)); /*0x63a096*/ // cleaned fmt call
  }
  if ( *(_DWORD *)(a1 + 2096) ) /*0x63a09c*/
  {
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x63a0a5*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63a0aa*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63a0b9*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, 572); /*0x63a0c9*/ // cleaned fmt call
    *(_QWORD *)&v10  = (uintptr_t)(&unk_709CE8); /*0x63a0cf*/
    *((_QWORD *)&v10 + 1) = 0; /*0x63a0d4*/
//     fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x63a0e3*/ // cleaned fmt call
//     fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 2096)); /*0x63a0f4*/ // cleaned fmt call
  }
//   v7 = fmt::BasicWriter<char>::c_str(v12); /*0x63a0ff*/ // cleaned fmt call
  *(_OWORD *)a2 = 0; /*0x63a108*/
  *(_QWORD *)(a2 + 16)  = (uintptr_t)(0); /*0x63a10b*/
  *(_QWORD *)(a2 + 24)  = (uintptr_t)(0); /*0x63a10f*/
  v8 = -1; /*0x63a113*/
  do /*0x63a123*/
    ++v8; /*0x63a120*/
  while ( *(_BYTE *)(v7 + v8) ); /*0x63a123*/
  sub_3C230(a2); /*0x63a130*/
//   fmt::BasicWriter<char>::~BasicWriter<char>(v12); /*0x63a13b*/ // cleaned fmt call
  return {}; /*0x63a144*/
}

// [4/4] Address: 0x63a170
// Method: AdvancedFollowTriggerObject::customObjectSetup
void AdvancedFollowTriggerObject::customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists)
{
  __int64 a1 = (__int64)this;
  __int64 a2 = (__int64)to_gd_arg(values);
  __int64 a3 = (__int64)to_gd_arg(exists);
  uint64_t a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  int v6; // ebp
  int v7; // eax
  const char *v8; // rcx
  int v9; // eax
  const char *v10; // rcx
  int v11; // eax
  const char *v12; // rcx
  int v13; // eax
  const char *v14; // rcx
  int v15; // eax
  const char *v16; // rcx
  float v17; // xmm6_4
  float v18; // xmm1_4
  const char *v19; // rcx
  float v20; // xmm7_4
  float v21; // xmm1_4
  const char *v22; // rcx
  float v23; // xmm7_4
  float v24; // xmm1_4
  const char *v25; // rcx
  float v26; // xmm7_4
  float v27; // xmm1_4
  const char *v28; // rcx
  float v29; // xmm7_4
  float v30; // xmm1_4
  const char *v31; // rcx
  float v32; // xmm7_4
  float v33; // xmm1_4
  const char *v34; // rcx
  float v35; // xmm7_4
  int v36; // eax
  const char *v37; // rcx
  int v38; // eax
  const char *v39; // rcx
  float v40; // xmm1_4
  const char *v41; // rcx
  float v42; // xmm7_4
  float v43; // xmm1_4
  const char *v44; // rcx
  float v45; // xmm7_4
  float v46; // xmm1_4
  const char *v47; // rcx
  float v48; // xmm7_4
  float v49; // xmm1_4
  const char *v50; // rcx
  float v51; // xmm7_4
  float v52; // xmm1_4
  const char *v53; // rcx
  float v54; // xmm7_4
  float v55; // xmm1_4
  const char *v56; // rcx
  float v57; // xmm7_4
  float v58; // xmm1_4
  const char *v59; // rcx
  float v60; // xmm7_4
  float v61; // xmm1_4
  const char *v62; // rcx
  float v63; // xmm7_4
  float v64; // xmm1_4
  const char *v65; // rcx
  float v66; // xmm7_4
  float v67; // xmm1_4
  const char *v68; // rcx
  float v69; // xmm7_4
  float v70; // xmm1_4
  const char *v71; // rcx
  float v72; // xmm7_4
  float v73; // xmm1_4
  const char *v74; // rcx
  float v75; // xmm7_4
  int v76; // eax
  const char *v77; // rcx
  float v78; // xmm1_4
  const char *v79; // rcx
  float v80; // xmm7_4
  float v81; // xmm1_4
  const char *v82; // rcx
  float v83; // xmm7_4
  int v84; // eax
  const char *v85; // rcx
  float v86; // xmm1_4
  const char *v87; // rcx
  float v88; // xmm7_4
  float v89; // xmm1_4
  const char *v90; // rcx
  float v91; // xmm7_4
  float v92; // xmm1_4
  const char *v93; // rcx
  float v94; // xmm7_4
  float v95; // xmm1_4
  const char *v96; // rcx
  float v97; // xmm7_4
  float v98; // xmm1_4
  const char *v99; // rcx
  float v100; // xmm7_4
  float v101; // xmm1_4
  const char *v102; // rcx
  float v103; // xmm7_4
  float v104; // xmm1_4
  const char *v105; // rcx
  float v106; // xmm7_4
  float v107; // xmm1_4
  const char *v108; // rcx
  float v109; // xmm7_4
  int v110; // eax
  const char *v111; // rcx
  float v112; // xmm1_4
  const char *v113; // rcx
  float v114; // xmm7_4
  float v115; // xmm1_4
  const char *v116; // rcx
  float v117; // xmm7_4
  int v118; // eax
  const char *v119; // rcx
  float v120; // xmm1_4
  const char *v121; // rcx
  float v122; // xmm7_4
  float v123; // xmm1_4
  const char *v124; // rcx
  float v125; // xmm7_4
  float v126; // xmm1_4
  const char *v127; // rcx
  float v128; // xmm7_4
  float v129; // xmm1_4
  const char *v130; // rcx
  float v131; // xmm7_4
  float v132; // xmm1_4
  const char *v133; // rcx
  float v134; // xmm7_4
  float v135; // xmm1_4
  const char *v136; // rcx
  float v137; // xmm7_4
  float v138; // xmm1_4
  const char *v139; // rcx
  float v140; // xmm7_4
  float v141; // xmm1_4
  const char *v142; // rcx
  float v143; // xmm7_4
  int v144; // eax
  const char *v145; // rcx
  int v146; // eax
  const char *v147; // rcx
  int v148; // eax
  const char *v149; // rcx
  float v150; // xmm1_4
  const char *v151; // rcx
  float v152; // xmm7_4
  float v153; // xmm1_4
  const char *v154; // rcx
  float v155; // xmm7_4
  float v156; // xmm1_4
  const char *v157; // rcx
  float v158; // xmm7_4
  float v159; // xmm1_4
  const char *v160; // rcx
  float v161; // xmm7_4
  float v162; // xmm1_4
  const char *v163; // rcx
  float v164; // xmm7_4
  float v165; // xmm1_4
  const char *v166; // rcx
  float v167; // xmm7_4
  float v168; // xmm1_4
  const char *v169; // rcx
  float v170; // xmm7_4
  float v171; // xmm1_4
  const char *v172; // rcx
  float v173; // xmm7_4
  float v174; // xmm1_4
  const char *v175; // rcx
  float v176; // xmm7_4
  float v177; // xmm1_4
  const char *v178; // rcx
  float v179; // xmm7_4
  const char *v180; // rcx
  float v181; // xmm7_4
  int v182; // eax
  const char *v183; // rcx
  int v184; // eax
  const char *v185; // rcx
  int v186; // eax
  const char *v187; // rcx
  int v188; // eax
  const char *v189; // rcx
  __int64 v190; // rax
  const char *v191; // rcx

  EffectGameObject_customObjectSetup(a1, a2, a3); /*0x63a1a0*/
  v6 = 9999; /*0x63a1a8*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 408LL) ) /*0x63a1ad*/
  {
    v8 = (const char *)(*(_QWORD *)a2 + 1632LL); /*0x63a1c2*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 1656LL) > 0xFu ) /*0x63a1ce*/
      v8 = *(const char **)v8; /*0x63a1d0*/
    v7 = atoi(v8); /*0x63a1d3*/
    if ( v7 < 0 ) /*0x63a1de*/
      v7 = 0; /*0x63a1de*/
    if ( v7 > 9999 ) /*0x63a1e4*/
      v7 = 9999; /*0x63a1e6*/
  }
  else
  {
    v7 = 0; /*0x63a1ba*/
  }
  *(_DWORD *)(a1 + 1480) = v7; /*0x63a1e8*/
  if ( !*(_QWORD *)(*(_QWORD *)a3 + 568LL) ) /*0x63a1f1*/
  {
    v9 = 0; /*0x63a1fb*/
LABEL_16:
    v6 = v9; /*0x63a224*/
    goto LABEL_17; /*0x63a224*/
  }
  v10 = (const char *)(*(_QWORD *)a2 + 2272LL); /*0x63a203*/
  if ( *(_QWORD *)(*(_QWORD *)a2 + 2296LL) > 0xFu ) /*0x63a20f*/
    v10 = *(const char **)v10; /*0x63a211*/
  v9 = atoi(v10); /*0x63a214*/
  if ( v9 < 0 ) /*0x63a21c*/
    v9 = 0; /*0x63a21c*/
  if ( v9 <= 9999 ) /*0x63a222*/
    goto LABEL_16; /*0x63a222*/
LABEL_17:
  *(_DWORD *)(a1 + 1484) = v6; /*0x63a226*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1104LL) ) /*0x63a234*/
  {
    v12 = (const char *)(*(_QWORD *)a2 + 4416LL); /*0x63a246*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 4440LL) > 0xFu ) /*0x63a252*/
      v12 = *(const char **)v12; /*0x63a254*/
    v11 = atoi(v12); /*0x63a257*/
  }
  else
  {
    v11 = 0; /*0x63a23e*/
  }
  *(_BYTE *)(a1 + 1700) = v11 != 0; /*0x63a262*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1600LL) ) /*0x63a26b*/
  {
    v14 = (const char *)(*(_QWORD *)a2 + 6400LL); /*0x63a27d*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 6424LL) > 0xFu ) /*0x63a289*/
      v14 = *(const char **)v14; /*0x63a28b*/
    v13 = atoi(v14); /*0x63a28e*/
  }
  else
  {
    v13 = 0; /*0x63a275*/
  }
  *(_BYTE *)(a1 + 1701) = v13 != 0; /*0x63a299*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1608LL) ) /*0x63a2a2*/
  {
    v16 = (const char *)(*(_QWORD *)a2 + 6432LL); /*0x63a2b4*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 6456LL) > 0xFu ) /*0x63a2c0*/
      v16 = *(const char **)v16; /*0x63a2c2*/
    v15 = atoi(v16); /*0x63a2c5*/
  }
  else
  {
    v15 = 0; /*0x63a2ac*/
  }
  *(_BYTE *)(a1 + 1702) = v15 != 0; /*0x63a2e7*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2336LL) ) /*0x63a2f0*/
  {
    v19 = (const char *)(*(_QWORD *)a2 + 9344LL); /*0x63a305*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 9368LL) > 0xFu ) /*0x63a311*/
      v19 = *(const char **)v19; /*0x63a313*/
    v20 = atof(v19); /*0x63a31f*/
    v17 = 0.0; /*0x63a32c*/
    if ( isnan(v20) ) /*0x63a326*/
      v18 = 0.0; /*0x63a333*/
    else
      v18 = fminf(1000000000.0, fmaxf(-1000000000.0, v20)); /*0x63a344*/
  }
  else
  {
    v17 = 0.0; /*0x63a2fa*/
    v18 = 0.0; /*0x63a2fd*/
  }
  *(float *)(a1 + 1856) = v18; /*0x63a348*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2344LL) ) /*0x63a353*/
  {
    v22 = (const char *)(*(_QWORD *)a2 + 9376LL); /*0x63a365*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 9400LL) > 0xFu ) /*0x63a371*/
      v22 = *(const char **)v22; /*0x63a373*/
    v23 = atof(v22); /*0x63a37f*/
    if ( isnan(v23) ) /*0x63a386*/
      v21 = 0.0; /*0x63a390*/
    else
      v21 = fminf(1000000000.0, fmaxf(-1000000000.0, v23)); /*0x63a3a1*/
  }
  else
  {
    v21 = 0.0; /*0x63a35d*/
  }
  *(float *)(a1 + 1860) = v21; /*0x63a3a5*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2384LL) ) /*0x63a3b0*/
  {
    v25 = (const char *)(*(_QWORD *)a2 + 9536LL); /*0x63a3c2*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 9560LL) > 0xFu ) /*0x63a3ce*/
      v25 = *(const char **)v25; /*0x63a3d0*/
    v26 = atof(v25); /*0x63a3dc*/
    if ( isnan(v26) ) /*0x63a3e3*/
      v24 = 0.0; /*0x63a3ed*/
    else
      v24 = fminf(1000000000.0, fmaxf(-1000000000.0, v26)); /*0x63a3fe*/
  }
  else
  {
    v24 = 0.0; /*0x63a3ba*/
  }
  *(float *)(a1 + 1888) = v24; /*0x63a402*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2392LL) ) /*0x63a40d*/
  {
    v28 = (const char *)(*(_QWORD *)a2 + 9568LL); /*0x63a41f*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 9592LL) > 0xFu ) /*0x63a42b*/
      v28 = *(const char **)v28; /*0x63a42d*/
    v29 = atof(v28); /*0x63a439*/
    if ( isnan(v29) ) /*0x63a440*/
      v27 = 0.0; /*0x63a44a*/
    else
      v27 = fminf(1000000000.0, fmaxf(-1000000000.0, v29)); /*0x63a45b*/
  }
  else
  {
    v27 = 0.0; /*0x63a417*/
  }
  *(float *)(a1 + 1892) = v27; /*0x63a45f*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4464LL) ) /*0x63a46a*/
  {
    v31 = (const char *)(*(_QWORD *)a2 + 17856LL); /*0x63a47c*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 17880LL) > 0xFu ) /*0x63a488*/
      v31 = *(const char **)v31; /*0x63a48a*/
    v32 = atof(v31); /*0x63a496*/
    if ( isnan(v32) ) /*0x63a49d*/
      v30 = 0.0; /*0x63a4a7*/
    else
      v30 = fminf(1000000000.0, fmaxf(-1000000000.0, v32)); /*0x63a4b8*/
  }
  else
  {
    v30 = 0.0; /*0x63a474*/
  }
  *(float *)(a1 + 2052) = v30; /*0x63a4bc*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4472LL) ) /*0x63a4c7*/
  {
    v34 = (const char *)(*(_QWORD *)a2 + 17888LL); /*0x63a4d9*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 17912LL) > 0xFu ) /*0x63a4e5*/
      v34 = *(const char **)v34; /*0x63a4e7*/
    v35 = atof(v34); /*0x63a4f3*/
    if ( isnan(v35) ) /*0x63a4fa*/
      v33 = 0.0; /*0x63a504*/
    else
      v33 = fminf(1000000000.0, fmaxf(-1000000000.0, v35)); /*0x63a515*/
  }
  else
  {
    v33 = 0.0; /*0x63a4d1*/
  }
  *(float *)(a1 + 2056) = v33; /*0x63a519*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2448LL) ) /*0x63a524*/
  {
    v37 = (const char *)(*(_QWORD *)a2 + 9792LL); /*0x63a536*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 9816LL) > 0xFu ) /*0x63a542*/
      v37 = *(const char **)v37; /*0x63a544*/
    v36 = atoi(v37); /*0x63a547*/
  }
  else
  {
    v36 = 0; /*0x63a52e*/
  }
  *(_BYTE *)(a1 + 1896) = v36 != 0; /*0x63a552*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2456LL) ) /*0x63a55b*/
  {
    v39 = (const char *)(*(_QWORD *)a2 + 9824LL); /*0x63a56d*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 9848LL) > 0xFu ) /*0x63a579*/
      v39 = *(const char **)v39; /*0x63a57b*/
    v38 = atoi(v39); /*0x63a57e*/
  }
  else
  {
    v38 = 0; /*0x63a565*/
  }
  *(_BYTE *)(a1 + 1897) = v38 != 0; /*0x63a589*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2464LL) ) /*0x63a592*/
  {
    v41 = (const char *)(*(_QWORD *)a2 + 9856LL); /*0x63a5a4*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 9880LL) > 0xFu ) /*0x63a5b0*/
      v41 = *(const char **)v41; /*0x63a5b2*/
    v42 = atof(v41); /*0x63a5be*/
    if ( isnan(v42) ) /*0x63a5c5*/
      v40 = 0.0; /*0x63a5cf*/
    else
      v40 = fminf(1000000000.0, fmaxf(-1000000000.0, v42)); /*0x63a5e0*/
  }
  else
  {
    v40 = 0.0; /*0x63a59c*/
  }
  *(float *)(a1 + 1900) = v40; /*0x63a5e4*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2472LL) ) /*0x63a5ef*/
  {
    v44 = (const char *)(*(_QWORD *)a2 + 9888LL); /*0x63a601*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 9912LL) > 0xFu ) /*0x63a60d*/
      v44 = *(const char **)v44; /*0x63a60f*/
    v45 = atof(v44); /*0x63a61b*/
    if ( isnan(v45) ) /*0x63a622*/
      v43 = 0.0; /*0x63a62c*/
    else
      v43 = fminf(1000000000.0, fmaxf(-1000000000.0, v45)); /*0x63a63d*/
  }
  else
  {
    v43 = 0.0; /*0x63a5f9*/
  }
  *(float *)(a1 + 1904) = v43; /*0x63a641*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2480LL) ) /*0x63a64c*/
  {
    v47 = (const char *)(*(_QWORD *)a2 + 9920LL); /*0x63a65e*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 9944LL) > 0xFu ) /*0x63a66a*/
      v47 = *(const char **)v47; /*0x63a66c*/
    v48 = atof(v47); /*0x63a678*/
    if ( isnan(v48) ) /*0x63a67f*/
      v46 = 0.0; /*0x63a689*/
    else
      v46 = fminf(1000000000.0, fmaxf(-1000000000.0, v48)); /*0x63a69a*/
  }
  else
  {
    v46 = 0.0; /*0x63a656*/
  }
  *(float *)(a1 + 1908) = v46; /*0x63a69e*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2488LL) ) /*0x63a6a9*/
  {
    v50 = (const char *)(*(_QWORD *)a2 + 9952LL); /*0x63a6bb*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 9976LL) > 0xFu ) /*0x63a6c7*/
      v50 = *(const char **)v50; /*0x63a6c9*/
    v51 = atof(v50); /*0x63a6d5*/
    if ( isnan(v51) ) /*0x63a6dc*/
      v49 = 0.0; /*0x63a6e6*/
    else
      v49 = fminf(1000000000.0, fmaxf(-1000000000.0, v51)); /*0x63a6f7*/
  }
  else
  {
    v49 = 0.0; /*0x63a6b3*/
  }
  *(float *)(a1 + 1912) = v49; /*0x63a6fb*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2672LL) ) /*0x63a706*/
  {
    v53 = (const char *)(*(_QWORD *)a2 + 10688LL); /*0x63a718*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 10712LL) > 0xFu ) /*0x63a724*/
      v53 = *(const char **)v53; /*0x63a726*/
    v54 = atof(v53); /*0x63a732*/
    if ( isnan(v54) ) /*0x63a739*/
      v52 = 0.0; /*0x63a743*/
    else
      v52 = fminf(1000000000.0, fmaxf(-1000000000.0, v54)); /*0x63a754*/
  }
  else
  {
    v52 = 0.0; /*0x63a710*/
  }
  *(float *)(a1 + 1916) = v52; /*0x63a758*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2680LL) ) /*0x63a763*/
  {
    v56 = (const char *)(*(_QWORD *)a2 + 10720LL); /*0x63a775*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 10744LL) > 0xFu ) /*0x63a781*/
      v56 = *(const char **)v56; /*0x63a783*/
    v57 = atof(v56); /*0x63a78f*/
    if ( isnan(v57) ) /*0x63a796*/
      v55 = 0.0; /*0x63a7a0*/
    else
      v55 = fminf(1000000000.0, fmaxf(-1000000000.0, v57)); /*0x63a7b1*/
  }
  else
  {
    v55 = 0.0; /*0x63a76d*/
  }
  *(float *)(a1 + 1920) = v55; /*0x63a7b5*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2496LL) ) /*0x63a7c0*/
  {
    v59 = (const char *)(*(_QWORD *)a2 + 9984LL); /*0x63a7d2*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 10008LL) > 0xFu ) /*0x63a7de*/
      v59 = *(const char **)v59; /*0x63a7e0*/
    v60 = atof(v59); /*0x63a7ec*/
    if ( isnan(v60) ) /*0x63a7f3*/
      v58 = 0.0; /*0x63a7fd*/
    else
      v58 = fminf(1000000000.0, fmaxf(-1000000000.0, v60)); /*0x63a80e*/
  }
  else
  {
    v58 = 0.0; /*0x63a7ca*/
  }
  *(float *)(a1 + 1924) = v58; /*0x63a812*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2504LL) ) /*0x63a81d*/
  {
    v62 = (const char *)(*(_QWORD *)a2 + 10016LL); /*0x63a82f*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 10040LL) > 0xFu ) /*0x63a83b*/
      v62 = *(const char **)v62; /*0x63a83d*/
    v63 = atof(v62); /*0x63a849*/
    if ( isnan(v63) ) /*0x63a850*/
      v61 = 0.0; /*0x63a85a*/
    else
      v61 = fminf(1000000000.0, fmaxf(-1000000000.0, v63)); /*0x63a86b*/
  }
  else
  {
    v61 = 0.0; /*0x63a827*/
  }
  *(float *)(a1 + 1928) = v61; /*0x63a86f*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2512LL) ) /*0x63a87a*/
  {
    v65 = (const char *)(*(_QWORD *)a2 + 10048LL); /*0x63a88c*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 10072LL) > 0xFu ) /*0x63a898*/
      v65 = *(const char **)v65; /*0x63a89a*/
    v66 = atof(v65); /*0x63a8a6*/
    if ( isnan(v66) ) /*0x63a8ad*/
      v64 = 0.0; /*0x63a8b7*/
    else
      v64 = fminf(1000000000.0, fmaxf(-1000000000.0, v66)); /*0x63a8c8*/
  }
  else
  {
    v64 = 0.0; /*0x63a884*/
  }
  *(float *)(a1 + 1932) = v64; /*0x63a8cc*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2520LL) ) /*0x63a8d7*/
  {
    v68 = (const char *)(*(_QWORD *)a2 + 10080LL); /*0x63a8e9*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 10104LL) > 0xFu ) /*0x63a8f5*/
      v68 = *(const char **)v68; /*0x63a8f7*/
    v69 = atof(v68); /*0x63a903*/
    if ( isnan(v69) ) /*0x63a90a*/
      v67 = 0.0; /*0x63a914*/
    else
      v67 = fminf(1000000000.0, fmaxf(-1000000000.0, v69)); /*0x63a925*/
  }
  else
  {
    v67 = 0.0; /*0x63a8e1*/
  }
  *(float *)(a1 + 1936) = v67; /*0x63a929*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2528LL) ) /*0x63a934*/
  {
    v71 = (const char *)(*(_QWORD *)a2 + 10112LL); /*0x63a946*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 10136LL) > 0xFu ) /*0x63a952*/
      v71 = *(const char **)v71; /*0x63a954*/
    v72 = atof(v71); /*0x63a960*/
    if ( isnan(v72) ) /*0x63a967*/
      v70 = 0.0; /*0x63a971*/
    else
      v70 = fminf(1000000000.0, fmaxf(-1000000000.0, v72)); /*0x63a982*/
  }
  else
  {
    v70 = 0.0; /*0x63a93e*/
  }
  *(float *)(a1 + 1940) = v70; /*0x63a986*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2536LL) ) /*0x63a991*/
  {
    v74 = (const char *)(*(_QWORD *)a2 + 10144LL); /*0x63a9a3*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 10168LL) > 0xFu ) /*0x63a9af*/
      v74 = *(const char **)v74; /*0x63a9b1*/
    v75 = atof(v74); /*0x63a9bd*/
    if ( isnan(v75) ) /*0x63a9c4*/
      v73 = 0.0; /*0x63a9ce*/
    else
      v73 = fminf(1000000000.0, fmaxf(-1000000000.0, v75)); /*0x63a9df*/
  }
  else
  {
    v73 = 0.0; /*0x63a99b*/
  }
  *(float *)(a1 + 1944) = v73; /*0x63a9e3*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2696LL) ) /*0x63a9ee*/
  {
    v77 = (const char *)(*(_QWORD *)a2 + 10784LL); /*0x63aa00*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 10808LL) > 0xFu ) /*0x63aa0c*/
      v77 = *(const char **)v77; /*0x63aa0e*/
    v76 = atoi(v77); /*0x63aa11*/
  }
  else
  {
    v76 = 0; /*0x63a9f8*/
  }
  *(_BYTE *)(a1 + 1948) = v76 != 0; /*0x63aa1c*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2544LL) ) /*0x63aa25*/
  {
    v79 = (const char *)(*(_QWORD *)a2 + 10176LL); /*0x63aa37*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 10200LL) > 0xFu ) /*0x63aa43*/
      v79 = *(const char **)v79; /*0x63aa45*/
    v80 = atof(v79); /*0x63aa51*/
    if ( isnan(v80) ) /*0x63aa58*/
      v78 = 0.0; /*0x63aa62*/
    else
      v78 = fminf(1000000000.0, fmaxf(-1000000000.0, v80)); /*0x63aa73*/
  }
  else
  {
    v78 = 0.0; /*0x63aa2f*/
  }
  *(float *)(a1 + 1952) = v78; /*0x63aa77*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2552LL) ) /*0x63aa82*/
  {
    v82 = (const char *)(*(_QWORD *)a2 + 10208LL); /*0x63aa94*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 10232LL) > 0xFu ) /*0x63aaa0*/
      v82 = *(const char **)v82; /*0x63aaa2*/
    v83 = atof(v82); /*0x63aaae*/
    if ( isnan(v83) ) /*0x63aab5*/
      v81 = 0.0; /*0x63aabf*/
    else
      v81 = fminf(1000000000.0, fmaxf(-1000000000.0, v83)); /*0x63aad0*/
  }
  else
  {
    v81 = 0.0; /*0x63aa8c*/
  }
  *(float *)(a1 + 1956) = v81; /*0x63aad4*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2704LL) ) /*0x63aadf*/
  {
    v85 = (const char *)(*(_QWORD *)a2 + 10816LL); /*0x63aaf1*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 10840LL) > 0xFu ) /*0x63aafd*/
      v85 = *(const char **)v85; /*0x63aaff*/
    v84 = atoi(v85); /*0x63ab02*/
  }
  else
  {
    v84 = 0; /*0x63aae9*/
  }
  *(_BYTE *)(a1 + 1960) = v84 != 0; /*0x63ab0d*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2560LL) ) /*0x63ab16*/
  {
    v87 = (const char *)(*(_QWORD *)a2 + 10240LL); /*0x63ab28*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 10264LL) > 0xFu ) /*0x63ab34*/
      v87 = *(const char **)v87; /*0x63ab36*/
    v88 = atof(v87); /*0x63ab42*/
    if ( isnan(v88) ) /*0x63ab49*/
      v86 = 0.0; /*0x63ab53*/
    else
      v86 = fminf(1000000000.0, fmaxf(-1000000000.0, v88)); /*0x63ab64*/
  }
  else
  {
    v86 = 0.0; /*0x63ab20*/
  }
  *(float *)(a1 + 1964) = v86; /*0x63ab68*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2568LL) ) /*0x63ab73*/
  {
    v90 = (const char *)(*(_QWORD *)a2 + 10272LL); /*0x63ab85*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 10296LL) > 0xFu ) /*0x63ab91*/
      v90 = *(const char **)v90; /*0x63ab93*/
    v91 = atof(v90); /*0x63ab9f*/
    if ( isnan(v91) ) /*0x63aba6*/
      v89 = 0.0; /*0x63abb0*/
    else
      v89 = fminf(1000000000.0, fmaxf(-1000000000.0, v91)); /*0x63abc1*/
  }
  else
  {
    v89 = 0.0; /*0x63ab7d*/
  }
  *(float *)(a1 + 1968) = v89; /*0x63abc5*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2576LL) ) /*0x63abd0*/
  {
    v93 = (const char *)(*(_QWORD *)a2 + 10304LL); /*0x63abe2*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 10328LL) > 0xFu ) /*0x63abee*/
      v93 = *(const char **)v93; /*0x63abf0*/
    v94 = atof(v93); /*0x63abfc*/
    if ( isnan(v94) ) /*0x63ac03*/
      v92 = 0.0; /*0x63ac0d*/
    else
      v92 = fminf(1000000000.0, fmaxf(-1000000000.0, v94)); /*0x63ac1e*/
  }
  else
  {
    v92 = 0.0; /*0x63abda*/
  }
  *(float *)(a1 + 1972) = v92; /*0x63ac22*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2584LL) ) /*0x63ac2d*/
  {
    v96 = (const char *)(*(_QWORD *)a2 + 10336LL); /*0x63ac3f*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 10360LL) > 0xFu ) /*0x63ac4b*/
      v96 = *(const char **)v96; /*0x63ac4d*/
    v97 = atof(v96); /*0x63ac59*/
    if ( isnan(v97) ) /*0x63ac60*/
      v95 = 0.0; /*0x63ac6a*/
    else
      v95 = fminf(1000000000.0, fmaxf(-1000000000.0, v97)); /*0x63ac7b*/
  }
  else
  {
    v95 = 0.0; /*0x63ac37*/
  }
  *(float *)(a1 + 1976) = v95; /*0x63ac7f*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2592LL) ) /*0x63ac8a*/
  {
    v99 = (const char *)(*(_QWORD *)a2 + 10368LL); /*0x63ac9c*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 10392LL) > 0xFu ) /*0x63aca8*/
      v99 = *(const char **)v99; /*0x63acaa*/
    v100 = atof(v99); /*0x63acb6*/
    if ( isnan(v100) ) /*0x63acbd*/
      v98 = 0.0; /*0x63acc7*/
    else
      v98 = fminf(1000000000.0, fmaxf(-1000000000.0, v100)); /*0x63acd8*/
  }
  else
  {
    v98 = 0.0; /*0x63ac94*/
  }
  *(float *)(a1 + 1980) = v98; /*0x63acdc*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2600LL) ) /*0x63ace7*/
  {
    v102 = (const char *)(*(_QWORD *)a2 + 10400LL); /*0x63acf9*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 10424LL) > 0xFu ) /*0x63ad05*/
      v102 = *(const char **)v102; /*0x63ad07*/
    v103 = atof(v102); /*0x63ad13*/
    if ( isnan(v103) ) /*0x63ad1a*/
      v101 = 0.0; /*0x63ad24*/
    else
      v101 = fminf(1000000000.0, fmaxf(-1000000000.0, v103)); /*0x63ad35*/
  }
  else
  {
    v101 = 0.0; /*0x63acf1*/
  }
  *(float *)(a1 + 1984) = v101; /*0x63ad39*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2400LL) ) /*0x63ad44*/
  {
    v105 = (const char *)(*(_QWORD *)a2 + 9600LL); /*0x63ad56*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 9624LL) > 0xFu ) /*0x63ad62*/
      v105 = *(const char **)v105; /*0x63ad64*/
    v106 = atof(v105); /*0x63ad70*/
    if ( isnan(v106) ) /*0x63ad77*/
      v104 = 0.0; /*0x63ad81*/
    else
      v104 = fminf(1000000000.0, fmaxf(-1000000000.0, v106)); /*0x63ad92*/
  }
  else
  {
    v104 = 0.0; /*0x63ad4e*/
  }
  *(float *)(a1 + 1864) = v104; /*0x63ad96*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2408LL) ) /*0x63ada1*/
  {
    v108 = (const char *)(*(_QWORD *)a2 + 9632LL); /*0x63adb3*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 9656LL) > 0xFu ) /*0x63adbf*/
      v108 = *(const char **)v108; /*0x63adc1*/
    v109 = atof(v108); /*0x63adcd*/
    if ( isnan(v109) ) /*0x63add4*/
      v107 = 0.0; /*0x63adde*/
    else
      v107 = fminf(1000000000.0, fmaxf(-1000000000.0, v109)); /*0x63adef*/
  }
  else
  {
    v107 = 0.0; /*0x63adab*/
  }
  *(float *)(a1 + 1868) = v107; /*0x63adf3*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4480LL) ) /*0x63adfe*/
  {
    v111 = (const char *)(*(_QWORD *)a2 + 17920LL); /*0x63ae10*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 17944LL) > 0xFu ) /*0x63ae1c*/
      v111 = *(const char **)v111; /*0x63ae1e*/
    v110 = atoi(v111); /*0x63ae21*/
  }
  else
  {
    v110 = 0; /*0x63ae08*/
  }
  *(_DWORD *)(a1 + 1872) = v110; /*0x63ae27*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4504LL) ) /*0x63ae30*/
  {
    v113 = (const char *)(*(_QWORD *)a2 + 18016LL); /*0x63ae42*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 18040LL) > 0xFu ) /*0x63ae4e*/
      v113 = *(const char **)v113; /*0x63ae50*/
    v114 = atof(v113); /*0x63ae5c*/
    if ( isnan(v114) ) /*0x63ae63*/
      v112 = 0.0; /*0x63ae6d*/
    else
      v112 = fminf(1000000000.0, fmaxf(-1000000000.0, v114)); /*0x63ae7e*/
  }
  else
  {
    v112 = 0.0; /*0x63ae3a*/
  }
  *(float *)(a1 + 1876) = v112; /*0x63ae82*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4512LL) ) /*0x63ae8d*/
  {
    v116 = (const char *)(*(_QWORD *)a2 + 18048LL); /*0x63ae9f*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 18072LL) > 0xFu ) /*0x63aeab*/
      v116 = *(const char **)v116; /*0x63aead*/
    v117 = atof(v116); /*0x63aeb9*/
    if ( isnan(v117) ) /*0x63aec0*/
      v115 = 0.0; /*0x63aeca*/
    else
      v115 = fminf(1000000000.0, fmaxf(-1000000000.0, v117)); /*0x63aedb*/
  }
  else
  {
    v115 = 0.0; /*0x63ae97*/
  }
  *(float *)(a1 + 1880) = v115; /*0x63aedf*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4520LL) ) /*0x63aeea*/
  {
    v119 = (const char *)(*(_QWORD *)a2 + 18080LL); /*0x63aefc*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 18104LL) > 0xFu ) /*0x63af08*/
      v119 = *(const char **)v119; /*0x63af0a*/
    v118 = atoi(v119); /*0x63af0d*/
  }
  else
  {
    v118 = 0; /*0x63aef4*/
  }
  *(_DWORD *)(a1 + 1884) = v118; /*0x63af13*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2608LL) ) /*0x63af1c*/
  {
    v121 = (const char *)(*(_QWORD *)a2 + 10432LL); /*0x63af2e*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 10456LL) > 0xFu ) /*0x63af3a*/
      v121 = *(const char **)v121; /*0x63af3c*/
    v122 = atof(v121); /*0x63af48*/
    if ( isnan(v122) ) /*0x63af4f*/
      v120 = 0.0; /*0x63af59*/
    else
      v120 = fminf(1000000000.0, fmaxf(-1000000000.0, v122)); /*0x63af6a*/
  }
  else
  {
    v120 = 0.0; /*0x63af26*/
  }
  *(float *)(a1 + 1988) = v120; /*0x63af6e*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2616LL) ) /*0x63af79*/
  {
    v124 = (const char *)(*(_QWORD *)a2 + 10464LL); /*0x63af8b*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 10488LL) > 0xFu ) /*0x63af97*/
      v124 = *(const char **)v124; /*0x63af99*/
    v125 = atof(v124); /*0x63afa5*/
    if ( isnan(v125) ) /*0x63afac*/
      v123 = 0.0; /*0x63afb6*/
    else
      v123 = fminf(1000000000.0, fmaxf(-1000000000.0, v125)); /*0x63afc7*/
  }
  else
  {
    v123 = 0.0; /*0x63af83*/
  }
  *(float *)(a1 + 1992) = v123; /*0x63afcb*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2624LL) ) /*0x63afd6*/
  {
    v127 = (const char *)(*(_QWORD *)a2 + 10496LL); /*0x63afe8*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 10520LL) > 0xFu ) /*0x63aff4*/
      v127 = *(const char **)v127; /*0x63aff6*/
    v128 = atof(v127); /*0x63b002*/
    if ( isnan(v128) ) /*0x63b009*/
      v126 = 0.0; /*0x63b013*/
    else
      v126 = fminf(1000000000.0, fmaxf(-1000000000.0, v128)); /*0x63b024*/
  }
  else
  {
    v126 = 0.0; /*0x63afe0*/
  }
  *(float *)(a1 + 1996) = v126; /*0x63b028*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2632LL) ) /*0x63b033*/
  {
    v130 = (const char *)(*(_QWORD *)a2 + 10528LL); /*0x63b045*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 10552LL) > 0xFu ) /*0x63b051*/
      v130 = *(const char **)v130; /*0x63b053*/
    v131 = atof(v130); /*0x63b05f*/
    if ( isnan(v131) ) /*0x63b066*/
      v129 = 0.0; /*0x63b070*/
    else
      v129 = fminf(1000000000.0, fmaxf(-1000000000.0, v131)); /*0x63b081*/
  }
  else
  {
    v129 = 0.0; /*0x63b03d*/
  }
  *(float *)(a1 + 2000) = v129; /*0x63b085*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2640LL) ) /*0x63b090*/
  {
    v133 = (const char *)(*(_QWORD *)a2 + 10560LL); /*0x63b0a2*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 10584LL) > 0xFu ) /*0x63b0ae*/
      v133 = *(const char **)v133; /*0x63b0b0*/
    v134 = atof(v133); /*0x63b0bc*/
    if ( isnan(v134) ) /*0x63b0c3*/
      v132 = 0.0; /*0x63b0cd*/
    else
      v132 = fminf(1000000000.0, fmaxf(-1000000000.0, v134)); /*0x63b0de*/
  }
  else
  {
    v132 = 0.0; /*0x63b09a*/
  }
  *(float *)(a1 + 2004) = v132; /*0x63b0e2*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2648LL) ) /*0x63b0ed*/
  {
    v136 = (const char *)(*(_QWORD *)a2 + 10592LL); /*0x63b0ff*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 10616LL) > 0xFu ) /*0x63b10b*/
      v136 = *(const char **)v136; /*0x63b10d*/
    v137 = atof(v136); /*0x63b119*/
    if ( isnan(v137) ) /*0x63b120*/
      v135 = 0.0; /*0x63b12a*/
    else
      v135 = fminf(1000000000.0, fmaxf(-1000000000.0, v137)); /*0x63b13b*/
  }
  else
  {
    v135 = 0.0; /*0x63b0f7*/
  }
  *(float *)(a1 + 2008) = v135; /*0x63b13f*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2656LL) ) /*0x63b14a*/
  {
    v139 = (const char *)(*(_QWORD *)a2 + 10624LL); /*0x63b15c*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 10648LL) > 0xFu ) /*0x63b168*/
      v139 = *(const char **)v139; /*0x63b16a*/
    v140 = atof(v139); /*0x63b176*/
    if ( isnan(v140) ) /*0x63b17d*/
      v138 = 0.0; /*0x63b187*/
    else
      v138 = fminf(1000000000.0, fmaxf(-1000000000.0, v140)); /*0x63b198*/
  }
  else
  {
    v138 = 0.0; /*0x63b154*/
  }
  *(float *)(a1 + 2012) = v138; /*0x63b19c*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2664LL) ) /*0x63b1a7*/
  {
    v142 = (const char *)(*(_QWORD *)a2 + 10656LL); /*0x63b1b9*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 10680LL) > 0xFu ) /*0x63b1c5*/
      v142 = *(const char **)v142; /*0x63b1c7*/
    v143 = atof(v142); /*0x63b1d3*/
    if ( isnan(v143) ) /*0x63b1da*/
      v141 = 0.0; /*0x63b1e4*/
    else
      v141 = fminf(1000000000.0, fmaxf(-1000000000.0, v143)); /*0x63b1f5*/
  }
  else
  {
    v141 = 0.0; /*0x63b1b1*/
  }
  *(float *)(a1 + 2016) = v141; /*0x63b1f9*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2440LL) ) /*0x63b204*/
  {
    v145 = (const char *)(*(_QWORD *)a2 + 9760LL); /*0x63b216*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 9784LL) > 0xFu ) /*0x63b222*/
      v145 = *(const char **)v145; /*0x63b224*/
    v144 = atoi(v145); /*0x63b227*/
  }
  else
  {
    v144 = 0; /*0x63b20e*/
  }
  *(_BYTE *)(a1 + 2020) = v144 != 0; /*0x63b232*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2688LL) ) /*0x63b23b*/
  {
    v147 = (const char *)(*(_QWORD *)a2 + 10752LL); /*0x63b24d*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 10776LL) > 0xFu ) /*0x63b259*/
      v147 = *(const char **)v147; /*0x63b25b*/
    v146 = atoi(v147); /*0x63b25e*/
  }
  else
  {
    v146 = 0; /*0x63b245*/
  }
  *(_BYTE *)(a1 + 2021) = v146 != 0; /*0x63b269*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2712LL) ) /*0x63b272*/
  {
    v149 = (const char *)(*(_QWORD *)a2 + 10848LL); /*0x63b284*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 10872LL) > 0xFu ) /*0x63b290*/
      v149 = *(const char **)v149; /*0x63b292*/
    v148 = atoi(v149); /*0x63b295*/
  }
  else
  {
    v148 = 0; /*0x63b27c*/
  }
  *(_BYTE *)(a1 + 2022) = v148 != 0; /*0x63b2a0*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2720LL) ) /*0x63b2a9*/
  {
    v151 = (const char *)(*(_QWORD *)a2 + 10880LL); /*0x63b2bb*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 10904LL) > 0xFu ) /*0x63b2c7*/
      v151 = *(const char **)v151; /*0x63b2c9*/
    v152 = atof(v151); /*0x63b2d5*/
    if ( isnan(v152) ) /*0x63b2dc*/
      v150 = 0.0; /*0x63b2e6*/
    else
      v150 = fminf(1000000000.0, fmaxf(-1000000000.0, v152)); /*0x63b2f7*/
  }
  else
  {
    v150 = 0.0; /*0x63b2b3*/
  }
  *(float *)(a1 + 2024) = v150; /*0x63b2fb*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2856LL) ) /*0x63b306*/
  {
    v154 = (const char *)(*(_QWORD *)a2 + 11424LL); /*0x63b318*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 11448LL) > 0xFu ) /*0x63b324*/
      v154 = *(const char **)v154; /*0x63b326*/
    v155 = atof(v154); /*0x63b332*/
    if ( isnan(v155) ) /*0x63b339*/
      v153 = 0.0; /*0x63b343*/
    else
      v153 = fminf(1000000000.0, fmaxf(-1000000000.0, v155)); /*0x63b354*/
  }
  else
  {
    v153 = 0.0; /*0x63b310*/
  }
  *(float *)(a1 + 2028) = v153; /*0x63b358*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2864LL) ) /*0x63b363*/
  {
    v157 = (const char *)(*(_QWORD *)a2 + 11456LL); /*0x63b375*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 11480LL) > 0xFu ) /*0x63b381*/
      v157 = *(const char **)v157; /*0x63b383*/
    v158 = atof(v157); /*0x63b38f*/
    if ( isnan(v158) ) /*0x63b396*/
      v156 = 0.0; /*0x63b3a0*/
    else
      v156 = fminf(1000000000.0, fmaxf(-1000000000.0, v158)); /*0x63b3b1*/
  }
  else
  {
    v156 = 0.0; /*0x63b36d*/
  }
  *(float *)(a1 + 2032) = v156; /*0x63b3b5*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2872LL) ) /*0x63b3c0*/
  {
    v160 = (const char *)(*(_QWORD *)a2 + 11488LL); /*0x63b3d2*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 11512LL) > 0xFu ) /*0x63b3de*/
      v160 = *(const char **)v160; /*0x63b3e0*/
    v161 = atof(v160); /*0x63b3ec*/
    if ( isnan(v161) ) /*0x63b3f3*/
      v159 = 0.0; /*0x63b3fd*/
    else
      v159 = fminf(1000000000.0, fmaxf(-1000000000.0, v161)); /*0x63b40e*/
  }
  else
  {
    v159 = 0.0; /*0x63b3ca*/
  }
  *(float *)(a1 + 2036) = v159; /*0x63b412*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2880LL) ) /*0x63b41d*/
  {
    v163 = (const char *)(*(_QWORD *)a2 + 11520LL); /*0x63b42f*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 11544LL) > 0xFu ) /*0x63b43b*/
      v163 = *(const char **)v163; /*0x63b43d*/
    v164 = atof(v163); /*0x63b449*/
    if ( isnan(v164) ) /*0x63b450*/
      v162 = 0.0; /*0x63b45a*/
    else
      v162 = fminf(1000000000.0, fmaxf(-1000000000.0, v164)); /*0x63b46b*/
  }
  else
  {
    v162 = 0.0; /*0x63b427*/
  }
  *(float *)(a1 + 2040) = v162; /*0x63b46f*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4488LL) ) /*0x63b47a*/
  {
    v166 = (const char *)(*(_QWORD *)a2 + 17952LL); /*0x63b48c*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 17976LL) > 0xFu ) /*0x63b498*/
      v166 = *(const char **)v166; /*0x63b49a*/
    v167 = atof(v166); /*0x63b4a6*/
    if ( isnan(v167) ) /*0x63b4ad*/
      v165 = 0.0; /*0x63b4b7*/
    else
      v165 = fminf(1000000000.0, fmaxf(-1000000000.0, v167)); /*0x63b4c8*/
  }
  else
  {
    v165 = 0.0; /*0x63b484*/
  }
  *(float *)(a1 + 2044) = v165; /*0x63b4cc*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4496LL) ) /*0x63b4d7*/
  {
    v169 = (const char *)(*(_QWORD *)a2 + 17984LL); /*0x63b4e9*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 18008LL) > 0xFu ) /*0x63b4f5*/
      v169 = *(const char **)v169; /*0x63b4f7*/
    v170 = atof(v169); /*0x63b503*/
    if ( isnan(v170) ) /*0x63b50a*/
      v168 = 0.0; /*0x63b514*/
    else
      v168 = fminf(1000000000.0, fmaxf(-1000000000.0, v170)); /*0x63b525*/
  }
  else
  {
    v168 = 0.0; /*0x63b4e1*/
  }
  *(float *)(a1 + 2048) = v168; /*0x63b529*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2888LL) ) /*0x63b534*/
  {
    v172 = (const char *)(*(_QWORD *)a2 + 11552LL); /*0x63b546*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 11576LL) > 0xFu ) /*0x63b552*/
      v172 = *(const char **)v172; /*0x63b554*/
    v173 = atof(v172); /*0x63b560*/
    if ( isnan(v173) ) /*0x63b567*/
      v171 = 0.0; /*0x63b571*/
    else
      v171 = fminf(1000000000.0, fmaxf(-1000000000.0, v173)); /*0x63b582*/
  }
  else
  {
    v171 = 0.0; /*0x63b53e*/
  }
  *(float *)(a1 + 2060) = v171; /*0x63b586*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2896LL) ) /*0x63b591*/
  {
    v175 = (const char *)(*(_QWORD *)a2 + 11584LL); /*0x63b5a3*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 11608LL) > 0xFu ) /*0x63b5af*/
      v175 = *(const char **)v175; /*0x63b5b1*/
    v176 = atof(v175); /*0x63b5bd*/
    if ( isnan(v176) ) /*0x63b5c4*/
      v174 = 0.0; /*0x63b5ce*/
    else
      v174 = fminf(1000000000.0, fmaxf(-1000000000.0, v176)); /*0x63b5df*/
  }
  else
  {
    v174 = 0.0; /*0x63b59b*/
  }
  *(float *)(a1 + 2064) = v174; /*0x63b5e3*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2904LL) ) /*0x63b5ee*/
  {
    v178 = (const char *)(*(_QWORD *)a2 + 11616LL); /*0x63b600*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 11640LL) > 0xFu ) /*0x63b60c*/
      v178 = *(const char **)v178; /*0x63b60e*/
    v179 = atof(v178); /*0x63b61a*/
    if ( isnan(v179) ) /*0x63b621*/
      v177 = 0.0; /*0x63b62b*/
    else
      v177 = fminf(1000000000.0, fmaxf(-1000000000.0, v179)); /*0x63b63c*/
  }
  else
  {
    v177 = 0.0; /*0x63b5f8*/
  }
  *(float *)(a1 + 2068) = v177; /*0x63b640*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2912LL) ) /*0x63b64b*/
  {
    v180 = (const char *)(*(_QWORD *)a2 + 11648LL); /*0x63b658*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 11672LL) > 0xFu ) /*0x63b664*/
      v180 = *(const char **)v180; /*0x63b666*/
    v181 = atof(v180); /*0x63b672*/
    if ( !isnan(v181) ) /*0x63b679*/
      v17 = fminf(1000000000.0, fmaxf(-1000000000.0, v181)); /*0x63b68c*/
  }
  *(float *)(a1 + 2072) = v17; /*0x63b6a2*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2920LL) ) /*0x63b6b2*/
  {
    v183 = (const char *)(*(_QWORD *)a2 + 11680LL); /*0x63b6c4*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 11704LL) > 0xFu ) /*0x63b6d0*/
      v183 = *(const char **)v183; /*0x63b6d2*/
    v182 = atoi(v183); /*0x63b6d5*/
  }
  else
  {
    v182 = 0; /*0x63b6bc*/
  }
  *(_DWORD *)(a1 + 2076) = v182; /*0x63b6db*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2928LL) ) /*0x63b6e4*/
  {
    v185 = (const char *)(*(_QWORD *)a2 + 11712LL); /*0x63b6f6*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 11736LL) > 0xFu ) /*0x63b702*/
      v185 = *(const char **)v185; /*0x63b704*/
    v184 = atoi(v185); /*0x63b707*/
  }
  else
  {
    v184 = 0; /*0x63b6ee*/
  }
  *(_DWORD *)(a1 + 2084) = v184; /*0x63b70d*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2936LL) ) /*0x63b716*/
  {
    v187 = (const char *)(*(_QWORD *)a2 + 11744LL); /*0x63b728*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 11768LL) > 0xFu ) /*0x63b734*/
      v187 = *(const char **)v187; /*0x63b736*/
    v186 = atoi(v187); /*0x63b739*/
  }
  else
  {
    v186 = 0; /*0x63b720*/
  }
  *(_DWORD *)(a1 + 2088) = v186; /*0x63b73f*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4568LL) ) /*0x63b748*/
  {
    v189 = (const char *)(*(_QWORD *)a2 + 18272LL); /*0x63b75a*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 18296LL) > 0xFu ) /*0x63b766*/
      v189 = *(const char **)v189; /*0x63b768*/
    v188 = atoi(v189); /*0x63b76b*/
  }
  else
  {
    v188 = 0; /*0x63b752*/
  }
  *(_BYTE *)(a1 + 2092) = v188 != 0; /*0x63b776*/
  v190 = *(_QWORD *)a3; /*0x63b77c*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4576LL) ) /*0x63b784*/
  {
    v191 = (const char *)(*(_QWORD *)a2 + 18304LL); /*0x63b7ab*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 18328LL) > 0xFu ) /*0x63b7b7*/
      v191 = *(const char **)v191; /*0x63b7b9*/
    LODWORD(v190) = atoi(v191); /*0x63b7bc*/
    *(_DWORD *)(a1 + 2096) = v190; /*0x63b7c7*/
  }
  else
  {
    *(_DWORD *)(a1 + 2096) = 0; /*0x63b78e*/
  }
  { v190; return; } /*0x63b795*/
}
