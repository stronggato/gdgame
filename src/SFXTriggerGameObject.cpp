#include <Geode/binding/SFXTriggerGameObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x6335a0
// Method: SFXTriggerGameObject::SFXTriggerGameObject
__int64 __fastcall SFXTriggerGameObject_SFXTriggerGameObject(__int64 a1)
{
  EffectGameObject_EffectGameObject(a1); /*0x6335a9*/
  *(_QWORD *)a1 = &SFXTriggerGameObject::`vftable'; /*0x6335b8*/
  *(_QWORD *)(a1 + 320) = &SFXTriggerGameObject::`vftable'; /*0x6335c2*/
  *(_QWORD *)(a1 + 344) = &SFXTriggerGameObject::`vftable'; /*0x6335d0*/
  *(_OWORD *)(a1 + 1856) = 0; /*0x6335d9*/
  *(_QWORD *)(a1 + 1872) = 0; /*0x6335e0*/
  *(_QWORD *)(a1 + 1880) = 15; /*0x6335e7*/
  *(_BYTE *)(a1 + 1856) = 0; /*0x6335f2*/
  *(_QWORD *)(a1 + 1888) = 0; /*0x6335f8*/
  *(_QWORD *)(a1 + 1896) = 0; /*0x6335ff*/
  *(_DWORD *)(a1 + 1904) = 0; /*0x633606*/
  *(_QWORD *)(a1 + 1916) = 0; /*0x63360c*/
  *(_QWORD *)(a1 + 1924) = 0; /*0x633613*/
  *(_WORD *)(a1 + 1932) = 0; /*0x63361a*/
  *(_BYTE *)(a1 + 1934) = 0; /*0x633621*/
  *(_DWORD *)(a1 + 1936) = 0; /*0x633627*/
  *(_QWORD *)(a1 + 1952) = 0; /*0x63362d*/
  *(_QWORD *)(a1 + 1960) = 0; /*0x633634*/
  *(_WORD *)(a1 + 1968) = 0; /*0x63363b*/
  *(_BYTE *)(a1 + 1970) = 0; /*0x633642*/
  *(_QWORD *)(a1 + 1972) = 0; /*0x633648*/
  *(_WORD *)(a1 + 1980) = 0; /*0x63364f*/
  *(_BYTE *)(a1 + 1982) = 0; /*0x633656*/
  *(_QWORD *)(a1 + 1984) = 0; /*0x63365c*/
  *(_DWORD *)(a1 + 1992) = 0; /*0x633663*/
  *(_BYTE *)(a1 + 1996) = 0; /*0x633669*/
  *(_DWORD *)(a1 + 2000) = 0; /*0x63366f*/
  *(_BYTE *)(a1 + 2004) = 0; /*0x633675*/
  *(_QWORD *)(a1 + 2008) = 0; /*0x63367b*/
  *(_DWORD *)(a1 + 2016) = 0; /*0x633682*/
  *(_BYTE *)(a1 + 2020) = 0; /*0x633688*/
  *(_QWORD *)(a1 + 1908) = 1065353216; /*0x63368e*/
  *(_DWORD *)(a1 + 1940) = 1065353216; /*0x633699*/
  *(_QWORD *)(a1 + 1944) = 1056964608; /*0x6336a3*/
  *(_OWORD *)(a1 + 2024) = 0; /*0x6336ae*/
  *(_QWORD *)(a1 + 2040) = 0; /*0x6336b5*/
  *(_QWORD *)(a1 + 2048) = 15; /*0x6336bc*/
  *(_BYTE *)(a1 + 2024) = 0; /*0x6336c7*/
  return a1; /*0x6336d0*/
}

// [2/4] Address: 0x652ad0
// Method: SFXTriggerGameObject::~SFXTriggerGameObject
void __fastcall SFXTriggerGameObject__dtor_SFXTriggerGameObject(cocos2d::CCSprite *a1)
{
  *(_QWORD *)a1 = &SFXTriggerGameObject::`vftable'; /*0x652ae0*/
  *((_QWORD *)a1 + 40) = &SFXTriggerGameObject::`vftable'; /*0x652aea*/
  *((_QWORD *)a1 + 43) = &SFXTriggerGameObject::`vftable'; /*0x652af8*/
  sub_3C310((char *)a1 + 2024); /*0x652b06*/
  sub_3C310((char *)a1 + 1856); /*0x652b12*/
  *(_QWORD *)a1 = &EffectGameObject::`vftable'; /*0x652b21*/
  *((_QWORD *)a1 + 40) = &EffectGameObject::`vftable'; /*0x652b2b*/
  *((_QWORD *)a1 + 43) = &EffectGameObject::`vftable'; /*0x652b39*/
  TextGameObject__dtor_TextGameObject(a1); /*0x652b45*/
}

// [3/4] Address: 0x652b50
// Method: SFXTriggerGameObject::getSaveString
// Hidden C++ exception states: #wind=2
__int64 __fastcall SFXTriggerGameObject_getSaveString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SaveString; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v11[24]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[528]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v13[32]; // [rsp+260h] [rbp+160h] BYREF

  *(_QWORD *)&v10 = a2; /*0x652b88*/
  fmt::BasicWriter<char>::BasicWriter<char>(v12); /*0x652b95*/
  SaveString = EffectGameObject_getSaveString(a1, (__int64)v13, a3); /*0x652ba9*/
  v10 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v11, SaveString); /*0x652bc0*/
  fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x652bcf*/
  sub_3C310(v13); /*0x652bdd*/
  if ( *(_DWORD *)(a1 + 1888) ) /*0x652be9*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x652bf2*/
    *((_QWORD *)&v10 + 1) = 0; /*0x652bf7*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x652c06*/
    fmt::BasicWriter<char>::operator<<(v12, 392); /*0x652c16*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x652c1c*/
    *((_QWORD *)&v10 + 1) = 0; /*0x652c21*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x652c30*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1888)); /*0x652c41*/
  }
  if ( *(_DWORD *)(a1 + 1892) ) /*0x652c47*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x652c50*/
    *((_QWORD *)&v10 + 1) = 0; /*0x652c55*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x652c64*/
    fmt::BasicWriter<char>::operator<<(v12, 601); /*0x652c74*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x652c7a*/
    *((_QWORD *)&v10 + 1) = 0; /*0x652c7f*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x652c8e*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1892)); /*0x652c9f*/
  }
  if ( *(_DWORD *)(a1 + 1900) ) /*0x652ca5*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x652cae*/
    *((_QWORD *)&v10 + 1) = 0; /*0x652cb3*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x652cc2*/
    fmt::BasicWriter<char>::operator<<(v12, 404); /*0x652cd2*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x652cd8*/
    *((_QWORD *)&v10 + 1) = 0; /*0x652cdd*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x652cec*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1900)); /*0x652cfd*/
  }
  if ( *(_DWORD *)(a1 + 1904) ) /*0x652d03*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x652d0c*/
    *((_QWORD *)&v10 + 1) = 0; /*0x652d11*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x652d20*/
    fmt::BasicWriter<char>::operator<<(v12, 405); /*0x652d30*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x652d36*/
    *((_QWORD *)&v10 + 1) = 0; /*0x652d3b*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x652d4a*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1904)); /*0x652d5b*/
  }
  if ( *(float *)(a1 + 1908) != 0.0 ) /*0x652d71*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x652d73*/
    *((_QWORD *)&v10 + 1) = 0; /*0x652d78*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x652d87*/
    fmt::BasicWriter<char>::operator<<(v12, 406); /*0x652d97*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x652d9d*/
    *((_QWORD *)&v10 + 1) = 0; /*0x652da2*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x652db1*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x652dc7*/
  }
  if ( *(_BYTE *)(a1 + 1928) ) /*0x652dcd*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x652dd6*/
    *((_QWORD *)&v10 + 1) = 0; /*0x652ddb*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x652dea*/
    fmt::BasicWriter<char>::operator<<(v12, 407); /*0x652dfa*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x652e00*/
    *((_QWORD *)&v10 + 1) = 0; /*0x652e05*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x652e14*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1928)); /*0x652e26*/
  }
  if ( *(_BYTE *)(a1 + 1929) ) /*0x652e2c*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x652e35*/
    *((_QWORD *)&v10 + 1) = 0; /*0x652e3a*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x652e49*/
    fmt::BasicWriter<char>::operator<<(v12, 412); /*0x652e59*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x652e5f*/
    *((_QWORD *)&v10 + 1) = 0; /*0x652e64*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x652e73*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1929)); /*0x652e85*/
  }
  if ( *(_BYTE *)(a1 + 1930) ) /*0x652e8b*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x652e94*/
    *((_QWORD *)&v10 + 1) = 0; /*0x652e99*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x652ea8*/
    fmt::BasicWriter<char>::operator<<(v12, 413); /*0x652eb8*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x652ebe*/
    *((_QWORD *)&v10 + 1) = 0; /*0x652ec3*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x652ed2*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1930)); /*0x652ee4*/
  }
  if ( *(_BYTE *)(a1 + 1931) ) /*0x652eea*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x652ef3*/
    *((_QWORD *)&v10 + 1) = 0; /*0x652ef8*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x652f07*/
    fmt::BasicWriter<char>::operator<<(v12, 414); /*0x652f17*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x652f1d*/
    *((_QWORD *)&v10 + 1) = 0; /*0x652f22*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x652f31*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1931)); /*0x652f43*/
  }
  if ( *(_BYTE *)(a1 + 1933) ) /*0x652f49*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x652f52*/
    *((_QWORD *)&v10 + 1) = 0; /*0x652f57*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x652f66*/
    fmt::BasicWriter<char>::operator<<(v12, 415); /*0x652f76*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x652f7c*/
    *((_QWORD *)&v10 + 1) = 0; /*0x652f81*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x652f90*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1933)); /*0x652fa2*/
  }
  if ( *(_DWORD *)(a1 + 1936) ) /*0x652fa8*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x652fb1*/
    *((_QWORD *)&v10 + 1) = 0; /*0x652fb6*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x652fc5*/
    fmt::BasicWriter<char>::operator<<(v12, 416); /*0x652fd5*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x652fdb*/
    *((_QWORD *)&v10 + 1) = 0; /*0x652fe0*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x652fef*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1936)); /*0x653000*/
  }
  if ( *(_BYTE *)(a1 + 1934) ) /*0x653006*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65300f*/
    *((_QWORD *)&v10 + 1) = 0; /*0x653014*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x653023*/
    fmt::BasicWriter<char>::operator<<(v12, 420); /*0x653033*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x653039*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65303e*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65304d*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1934)); /*0x65305f*/
  }
  if ( *(_DWORD *)(a1 + 1912) ) /*0x653065*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65306e*/
    *((_QWORD *)&v10 + 1) = 0; /*0x653073*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x653082*/
    fmt::BasicWriter<char>::operator<<(v12, 408); /*0x653092*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x653098*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65309d*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6530ac*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1912)); /*0x6530bd*/
  }
  if ( *(_DWORD *)(a1 + 1916) ) /*0x6530c3*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6530cc*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6530d1*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6530e0*/
    fmt::BasicWriter<char>::operator<<(v12, 409); /*0x6530f0*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6530f6*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6530fb*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65310a*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1916)); /*0x65311b*/
  }
  if ( *(_DWORD *)(a1 + 1920) ) /*0x653121*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65312a*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65312f*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65313e*/
    fmt::BasicWriter<char>::operator<<(v12, 410); /*0x65314e*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x653154*/
    *((_QWORD *)&v10 + 1) = 0; /*0x653159*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x653168*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1920)); /*0x653179*/
  }
  if ( *(_DWORD *)(a1 + 1924) ) /*0x65317f*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x653188*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65318d*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65319c*/
    fmt::BasicWriter<char>::operator<<(v12, 411); /*0x6531ac*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6531b2*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6531b7*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6531c6*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1924)); /*0x6531d7*/
  }
  if ( *(_BYTE *)(a1 + 1980) ) /*0x6531dd*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6531e6*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6531eb*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6531fa*/
    fmt::BasicWriter<char>::operator<<(v12, 417); /*0x65320a*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x653210*/
    *((_QWORD *)&v10 + 1) = 0; /*0x653215*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x653224*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1980)); /*0x653236*/
  }
  if ( *(_BYTE *)(a1 + 1981) ) /*0x65323c*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x653245*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65324a*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x653259*/
    fmt::BasicWriter<char>::operator<<(v12, 418); /*0x653269*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65326f*/
    *((_QWORD *)&v10 + 1) = 0; /*0x653274*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x653283*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1981)); /*0x653295*/
  }
  if ( *(_BYTE *)(a1 + 1982) ) /*0x65329b*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6532a4*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6532a9*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6532b8*/
    fmt::BasicWriter<char>::operator<<(v12, 419); /*0x6532c8*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6532ce*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6532d3*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6532e2*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1982)); /*0x6532f4*/
  }
  if ( *(_DWORD *)(a1 + 1480) ) /*0x6532fa*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x653303*/
    *((_QWORD *)&v10 + 1) = 0; /*0x653308*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x653317*/
    fmt::BasicWriter<char>::operator<<(v12, 51); /*0x653327*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65332d*/
    *((_QWORD *)&v10 + 1) = 0; /*0x653332*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x653341*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1480)); /*0x653352*/
  }
  if ( *(_DWORD *)(a1 + 1484) ) /*0x653358*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x653361*/
    *((_QWORD *)&v10 + 1) = 0; /*0x653366*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x653375*/
    fmt::BasicWriter<char>::operator<<(v12, 71); /*0x653385*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65338b*/
    *((_QWORD *)&v10 + 1) = 0; /*0x653390*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65339f*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1484)); /*0x6533b0*/
  }
  if ( *(float *)(a1 + 1940) != 0.0 ) /*0x6533c3*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6533c5*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6533ca*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6533d9*/
    fmt::BasicWriter<char>::operator<<(v12, 421); /*0x6533e9*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6533ef*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6533f4*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x653403*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x653419*/
  }
  if ( *(float *)(a1 + 1944) != 0.0 ) /*0x65342c*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65342e*/
    *((_QWORD *)&v10 + 1) = 0; /*0x653433*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x653442*/
    fmt::BasicWriter<char>::operator<<(v12, 422); /*0x653452*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x653458*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65345d*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65346c*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x653482*/
  }
  if ( *(float *)(a1 + 1948) != 0.0 ) /*0x653495*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x653497*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65349c*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6534ab*/
    fmt::BasicWriter<char>::operator<<(v12, 423); /*0x6534bb*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6534c1*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6534c6*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6534d5*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x6534eb*/
  }
  if ( *(_DWORD *)(a1 + 1952) ) /*0x6534f1*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6534fa*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6534ff*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65350e*/
    fmt::BasicWriter<char>::operator<<(v12, 424); /*0x65351e*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x653524*/
    *((_QWORD *)&v10 + 1) = 0; /*0x653529*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x653538*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1952)); /*0x653549*/
  }
  if ( *(_DWORD *)(a1 + 1956) ) /*0x65354f*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x653558*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65355d*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65356c*/
    fmt::BasicWriter<char>::operator<<(v12, 425); /*0x65357c*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x653582*/
    *((_QWORD *)&v10 + 1) = 0; /*0x653587*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x653596*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1956)); /*0x6535a7*/
  }
  if ( *(_DWORD *)(a1 + 1960) ) /*0x6535ad*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6535b6*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6535bb*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6535ca*/
    fmt::BasicWriter<char>::operator<<(v12, 426); /*0x6535da*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6535e0*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6535e5*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6535f4*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1960)); /*0x653605*/
  }
  if ( *(_DWORD *)(a1 + 1964) ) /*0x65360b*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x653614*/
    *((_QWORD *)&v10 + 1) = 0; /*0x653619*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x653628*/
    fmt::BasicWriter<char>::operator<<(v12, 458); /*0x653638*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65363e*/
    *((_QWORD *)&v10 + 1) = 0; /*0x653643*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x653652*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1964)); /*0x653663*/
  }
  if ( *(_BYTE *)(a1 + 1968) ) /*0x653669*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x653672*/
    *((_QWORD *)&v10 + 1) = 0; /*0x653677*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x653686*/
    fmt::BasicWriter<char>::operator<<(v12, 428); /*0x653696*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65369c*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6536a1*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6536b0*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1968)); /*0x6536c2*/
  }
  if ( *(_BYTE *)(a1 + 1700) ) /*0x6536c8*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6536d1*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6536d6*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6536e5*/
    fmt::BasicWriter<char>::operator<<(v12, 138); /*0x6536f5*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6536fb*/
    *((_QWORD *)&v10 + 1) = 0; /*0x653700*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65370f*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1700)); /*0x653721*/
  }
  if ( *(_BYTE *)(a1 + 1701) ) /*0x653727*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x653730*/
    *((_QWORD *)&v10 + 1) = 0; /*0x653735*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x653744*/
    fmt::BasicWriter<char>::operator<<(v12, 200); /*0x653754*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65375a*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65375f*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65376e*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1701)); /*0x653780*/
  }
  if ( *(_BYTE *)(a1 + 1970) ) /*0x653786*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65378f*/
    *((_QWORD *)&v10 + 1) = 0; /*0x653794*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6537a3*/
    fmt::BasicWriter<char>::operator<<(v12, 489); /*0x6537b3*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6537b9*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6537be*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6537cd*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1970)); /*0x6537df*/
  }
  if ( *(float *)(a1 + 1468) != 0.0 ) /*0x6537f2*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6537f4*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6537f9*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x653808*/
    fmt::BasicWriter<char>::operator<<(v12, 10); /*0x653818*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65381e*/
    *((_QWORD *)&v10 + 1) = 0; /*0x653823*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x653832*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x653848*/
  }
  if ( *(_BYTE *)(a1 + 1969) ) /*0x65384e*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x653857*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65385c*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65386b*/
    fmt::BasicWriter<char>::operator<<(v12, 433); /*0x65387b*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x653881*/
    *((_QWORD *)&v10 + 1) = 0; /*0x653886*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x653895*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1969)); /*0x6538a7*/
  }
  if ( *(float *)(a1 + 1972) != 0.0 ) /*0x6538ba*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6538bc*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6538c1*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6538d0*/
    fmt::BasicWriter<char>::operator<<(v12, 434); /*0x6538e0*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6538e6*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6538eb*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6538fa*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x653910*/
  }
  if ( *(_DWORD *)(a1 + 1976) ) /*0x653916*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65391f*/
    *((_QWORD *)&v10 + 1) = 0; /*0x653924*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x653933*/
    fmt::BasicWriter<char>::operator<<(v12, 455); /*0x653943*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x653949*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65394e*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65395d*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1976)); /*0x65396e*/
  }
  if ( *(_DWORD *)(a1 + 1984) ) /*0x653974*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65397d*/
    *((_QWORD *)&v10 + 1) = 0; /*0x653982*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x653991*/
    fmt::BasicWriter<char>::operator<<(v12, 457); /*0x6539a1*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6539a7*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6539ac*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6539bb*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1984)); /*0x6539cc*/
  }
  if ( *(float *)(a1 + 2000) != 0.0 ) /*0x6539df*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6539e1*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6539e6*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6539f5*/
    fmt::BasicWriter<char>::operator<<(v12, 490); /*0x653a05*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x653a0b*/
    *((_QWORD *)&v10 + 1) = 0; /*0x653a10*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x653a1f*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x653a35*/
  }
  if ( *(_DWORD *)(a1 + 1992) ) /*0x653a3b*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x653a44*/
    *((_QWORD *)&v10 + 1) = 0; /*0x653a49*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x653a58*/
    fmt::BasicWriter<char>::operator<<(v12, 502); /*0x653a68*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x653a6e*/
    *((_QWORD *)&v10 + 1) = 0; /*0x653a73*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x653a82*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1992)); /*0x653a93*/
  }
  if ( *(_BYTE *)(a1 + 1996) ) /*0x653a99*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x653aa2*/
    *((_QWORD *)&v10 + 1) = 0; /*0x653aa7*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x653ab6*/
    fmt::BasicWriter<char>::operator<<(v12, 503); /*0x653ac6*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x653acc*/
    *((_QWORD *)&v10 + 1) = 0; /*0x653ad1*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x653ae0*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1996)); /*0x653af2*/
  }
  if ( *(_BYTE *)(a1 + 1932) ) /*0x653af8*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x653b01*/
    *((_QWORD *)&v10 + 1) = 0; /*0x653b06*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x653b15*/
    fmt::BasicWriter<char>::operator<<(v12, 595); /*0x653b25*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x653b2b*/
    *((_QWORD *)&v10 + 1) = 0; /*0x653b30*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x653b3f*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1932)); /*0x653b51*/
  }
  if ( *(_DWORD *)(a1 + 2008) ) /*0x653b57*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x653b60*/
    *((_QWORD *)&v10 + 1) = 0; /*0x653b65*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x653b74*/
    fmt::BasicWriter<char>::operator<<(v12, 596); /*0x653b84*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x653b8a*/
    *((_QWORD *)&v10 + 1) = 0; /*0x653b8f*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x653b9e*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 2008)); /*0x653baf*/
  }
  if ( *(_DWORD *)(a1 + 2012) ) /*0x653bb5*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x653bbe*/
    *((_QWORD *)&v10 + 1) = 0; /*0x653bc3*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x653bd2*/
    fmt::BasicWriter<char>::operator<<(v12, 597); /*0x653be2*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x653be8*/
    *((_QWORD *)&v10 + 1) = 0; /*0x653bed*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x653bfc*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 2012)); /*0x653c0d*/
  }
  if ( *(float *)(a1 + 2016) != 0.0 ) /*0x653c20*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x653c22*/
    *((_QWORD *)&v10 + 1) = 0; /*0x653c27*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x653c36*/
    fmt::BasicWriter<char>::operator<<(v12, 598); /*0x653c46*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x653c4c*/
    *((_QWORD *)&v10 + 1) = 0; /*0x653c51*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x653c60*/
    fmt::BasicWriter<char>::operator<<(v12); /*0x653c76*/
  }
  if ( *(_BYTE *)(a1 + 2020) ) /*0x653c7c*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x653c85*/
    *((_QWORD *)&v10 + 1) = 0; /*0x653c8a*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x653c99*/
    fmt::BasicWriter<char>::operator<<(v12, 599); /*0x653ca9*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x653caf*/
    *((_QWORD *)&v10 + 1) = 0; /*0x653cb4*/
    fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x653cc3*/
    fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 2020)); /*0x653cd5*/
  }
  v7 = fmt::BasicWriter<char>::c_str(v12); /*0x653ce0*/
  *(_OWORD *)a2 = 0; /*0x653ce9*/
  *(_QWORD *)(a2 + 16) = 0; /*0x653cec*/
  *(_QWORD *)(a2 + 24) = 0; /*0x653cf0*/
  v8 = -1; /*0x653cf4*/
  do /*0x653d03*/
    ++v8; /*0x653d00*/
  while ( *(_BYTE *)(v7 + v8) ); /*0x653d03*/
  sub_3C230(a2); /*0x653d10*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v12); /*0x653d1b*/
  return a2; /*0x653d24*/
}

// [4/4] Address: 0x653d50
// Method: SFXTriggerGameObject::customObjectSetup
bool __fastcall SFXTriggerGameObject_customObjectSetup(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // edi
  int v7; // eax
  const char *v8; // rcx
  int v9; // eax
  const char *v10; // rcx
  int v11; // eax
  const char *v12; // rcx
  int v13; // eax
  const char *v14; // rcx
  float v15; // xmm7_4
  float v16; // xmm1_4
  const char *v17; // rcx
  float v18; // xmm6_4
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
  int v29; // eax
  const char *v30; // rcx
  int v31; // eax
  const char *v32; // rcx
  int v33; // eax
  const char *v34; // rcx
  int v35; // eax
  const char *v36; // rcx
  int v37; // eax
  const char *v38; // rcx
  int v39; // eax
  const char *v40; // rcx
  int v41; // eax
  const char *v42; // rcx
  int v43; // eax
  const char *v44; // rcx
  int v45; // eax
  const char *v46; // rcx
  int v47; // ebp
  int v48; // eax
  const char *v49; // rcx
  int v50; // eax
  const char *v51; // rcx
  float v52; // xmm1_4
  const char *v53; // rcx
  float v54; // xmm6_4
  float v55; // xmm1_4
  const char *v56; // rcx
  float v57; // xmm6_4
  float v58; // xmm1_4
  const char *v59; // rcx
  float v60; // xmm6_4
  const char *v61; // rcx
  int v62; // eax
  const char *v63; // rcx
  const char *v64; // rcx
  int v65; // eax
  const char *v66; // rcx
  const char *v67; // rcx
  int v68; // eax
  const char *v69; // rcx
  int v70; // eax
  const char *v71; // rcx
  int v72; // eax
  const char *v73; // rcx
  int v74; // eax
  const char *v75; // rcx
  int v76; // eax
  const char *v77; // rcx
  int v78; // eax
  const char *v79; // rcx
  float v80; // xmm1_4
  const char *v81; // rcx
  float v82; // xmm6_4
  int v83; // eax
  const char *v84; // rcx
  float v85; // xmm1_4
  const char *v86; // rcx
  float v87; // xmm6_4
  int v88; // eax
  const char *v89; // rcx
  int v90; // eax
  const char *v91; // rcx
  float v92; // xmm1_4
  const char *v93; // rcx
  float v94; // xmm6_4
  int v95; // eax
  const char *v96; // rcx
  int v97; // eax
  const char *v98; // rcx
  int v99; // eax
  const char *v100; // rcx
  int v101; // eax
  const char *v102; // rcx
  int v103; // eax
  const char *v104; // rcx
  const char *v105; // rcx
  float v106; // xmm6_4
  const char *v107; // rcx

  EffectGameObject_customObjectSetup(a1, a2, a3); /*0x653d80*/
  v6 = 0; /*0x653d88*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3136LL) ) /*0x653d8a*/
  {
    v8 = (const char *)(*(_QWORD *)a2 + 12544LL); /*0x653d9a*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 12568LL) > 0xFu ) /*0x653da6*/
      v8 = *(const char **)v8; /*0x653da8*/
    v7 = atoi(v8); /*0x653dab*/
  }
  else
  {
    v7 = 0; /*0x653d93*/
  }
  *(_DWORD *)(a1 + 1888) = v7; /*0x653db1*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4808LL) ) /*0x653dba*/
  {
    v10 = (const char *)(*(_QWORD *)a2 + 19232LL); /*0x653dca*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 19256LL) > 0xFu ) /*0x653dd6*/
      v10 = *(const char **)v10; /*0x653dd8*/
    v9 = atoi(v10); /*0x653ddb*/
  }
  else
  {
    v9 = 0; /*0x653dc3*/
  }
  *(_DWORD *)(a1 + 1892) = v9; /*0x653de1*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3232LL) ) /*0x653dea*/
  {
    v12 = (const char *)(*(_QWORD *)a2 + 12928LL); /*0x653dfa*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 12952LL) > 0xFu ) /*0x653e06*/
      v12 = *(const char **)v12; /*0x653e08*/
    v11 = atoi(v12); /*0x653e0b*/
  }
  else
  {
    v11 = 0; /*0x653df3*/
  }
  *(_DWORD *)(a1 + 1900) = v11; /*0x653e11*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3240LL) ) /*0x653e1a*/
  {
    v14 = (const char *)(*(_QWORD *)a2 + 12960LL); /*0x653e2a*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 12984LL) > 0xFu ) /*0x653e36*/
      v14 = *(const char **)v14; /*0x653e38*/
    v13 = atoi(v14); /*0x653e3b*/
  }
  else
  {
    v13 = 0; /*0x653e23*/
  }
  *(_DWORD *)(a1 + 1904) = v13; /*0x653e53*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3248LL) ) /*0x653e61*/
  {
    v17 = (const char *)(*(_QWORD *)a2 + 12992LL); /*0x653e75*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 13016LL) > 0xFu ) /*0x653e81*/
      v17 = *(const char **)v17; /*0x653e83*/
    v18 = atof(v17); /*0x653e8f*/
    v15 = 0.0; /*0x653e9c*/
    if ( isnan(v18) ) /*0x653e96*/
      v16 = 0.0; /*0x653ea3*/
    else
      v16 = fminf(1000000000.0, fmaxf(-1000000000.0, v18)); /*0x653eb4*/
  }
  else
  {
    v15 = 0.0; /*0x653e6a*/
    v16 = 0.0; /*0x653e6d*/
  }
  *(float *)(a1 + 1908) = v16; /*0x653eb8*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3256LL) ) /*0x653ec3*/
  {
    v20 = (const char *)(*(_QWORD *)a2 + 13024LL); /*0x653ed3*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 13048LL) > 0xFu ) /*0x653edf*/
      v20 = *(const char **)v20; /*0x653ee1*/
    v19 = atoi(v20); /*0x653ee4*/
  }
  else
  {
    v19 = 0; /*0x653ecc*/
  }
  *(_BYTE *)(a1 + 1928) = v19 != 0; /*0x653eef*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3296LL) ) /*0x653ef8*/
  {
    v22 = (const char *)(*(_QWORD *)a2 + 13184LL); /*0x653f08*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 13208LL) > 0xFu ) /*0x653f14*/
      v22 = *(const char **)v22; /*0x653f16*/
    v21 = atoi(v22); /*0x653f19*/
  }
  else
  {
    v21 = 0; /*0x653f01*/
  }
  *(_BYTE *)(a1 + 1929) = v21 != 0; /*0x653f24*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3304LL) ) /*0x653f2d*/
  {
    v24 = (const char *)(*(_QWORD *)a2 + 13216LL); /*0x653f3d*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 13240LL) > 0xFu ) /*0x653f49*/
      v24 = *(const char **)v24; /*0x653f4b*/
    v23 = atoi(v24); /*0x653f4e*/
  }
  else
  {
    v23 = 0; /*0x653f36*/
  }
  *(_BYTE *)(a1 + 1930) = v23 != 0; /*0x653f59*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3312LL) ) /*0x653f62*/
  {
    v26 = (const char *)(*(_QWORD *)a2 + 13248LL); /*0x653f72*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 13272LL) > 0xFu ) /*0x653f7e*/
      v26 = *(const char **)v26; /*0x653f80*/
    v25 = atoi(v26); /*0x653f83*/
  }
  else
  {
    v25 = 0; /*0x653f6b*/
  }
  *(_BYTE *)(a1 + 1931) = v25 != 0; /*0x653f8e*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3320LL) ) /*0x653f97*/
  {
    v28 = (const char *)(*(_QWORD *)a2 + 13280LL); /*0x653fa7*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 13304LL) > 0xFu ) /*0x653fb3*/
      v28 = *(const char **)v28; /*0x653fb5*/
    v27 = atoi(v28); /*0x653fb8*/
  }
  else
  {
    v27 = 0; /*0x653fa0*/
  }
  *(_BYTE *)(a1 + 1933) = v27 != 0; /*0x653fc3*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3328LL) ) /*0x653fcc*/
  {
    v30 = (const char *)(*(_QWORD *)a2 + 13312LL); /*0x653fdc*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 13336LL) > 0xFu ) /*0x653fe8*/
      v30 = *(const char **)v30; /*0x653fea*/
    v29 = atoi(v30); /*0x653fed*/
  }
  else
  {
    v29 = 0; /*0x653fd5*/
  }
  *(_DWORD *)(a1 + 1936) = v29; /*0x653ff3*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3360LL) ) /*0x653ffc*/
  {
    v32 = (const char *)(*(_QWORD *)a2 + 13440LL); /*0x65400c*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 13464LL) > 0xFu ) /*0x654018*/
      v32 = *(const char **)v32; /*0x65401a*/
    v31 = atoi(v32); /*0x65401d*/
  }
  else
  {
    v31 = 0; /*0x654005*/
  }
  *(_BYTE *)(a1 + 1934) = v31 != 0; /*0x654028*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3264LL) ) /*0x654031*/
  {
    v34 = (const char *)(*(_QWORD *)a2 + 13056LL); /*0x654041*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 13080LL) > 0xFu ) /*0x65404d*/
      v34 = *(const char **)v34; /*0x65404f*/
    v33 = atoi(v34); /*0x654052*/
  }
  else
  {
    v33 = 0; /*0x65403a*/
  }
  *(_DWORD *)(a1 + 1912) = v33; /*0x654058*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3272LL) ) /*0x654061*/
  {
    v36 = (const char *)(*(_QWORD *)a2 + 13088LL); /*0x654071*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 13112LL) > 0xFu ) /*0x65407d*/
      v36 = *(const char **)v36; /*0x65407f*/
    v35 = atoi(v36); /*0x654082*/
  }
  else
  {
    v35 = 0; /*0x65406a*/
  }
  *(_DWORD *)(a1 + 1916) = v35; /*0x654088*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3280LL) ) /*0x654091*/
  {
    v38 = (const char *)(*(_QWORD *)a2 + 13120LL); /*0x6540a1*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 13144LL) > 0xFu ) /*0x6540ad*/
      v38 = *(const char **)v38; /*0x6540af*/
    v37 = atoi(v38); /*0x6540b2*/
  }
  else
  {
    v37 = 0; /*0x65409a*/
  }
  *(_DWORD *)(a1 + 1920) = v37; /*0x6540b8*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3288LL) ) /*0x6540c1*/
  {
    v40 = (const char *)(*(_QWORD *)a2 + 13152LL); /*0x6540d1*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 13176LL) > 0xFu ) /*0x6540dd*/
      v40 = *(const char **)v40; /*0x6540df*/
    v39 = atoi(v40); /*0x6540e2*/
  }
  else
  {
    v39 = 0; /*0x6540ca*/
  }
  *(_DWORD *)(a1 + 1924) = v39; /*0x6540e8*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3336LL) ) /*0x6540f1*/
  {
    v42 = (const char *)(*(_QWORD *)a2 + 13344LL); /*0x654101*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 13368LL) > 0xFu ) /*0x65410d*/
      v42 = *(const char **)v42; /*0x65410f*/
    v41 = atoi(v42); /*0x654112*/
  }
  else
  {
    v41 = 0; /*0x6540fa*/
  }
  *(_BYTE *)(a1 + 1980) = v41 != 0; /*0x65411d*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3344LL) ) /*0x654126*/
  {
    v44 = (const char *)(*(_QWORD *)a2 + 13376LL); /*0x654136*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 13400LL) > 0xFu ) /*0x654142*/
      v44 = *(const char **)v44; /*0x654144*/
    v43 = atoi(v44); /*0x654147*/
  }
  else
  {
    v43 = 0; /*0x65412f*/
  }
  *(_BYTE *)(a1 + 1981) = v43 != 0; /*0x654152*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3352LL) ) /*0x65415b*/
  {
    v46 = (const char *)(*(_QWORD *)a2 + 13408LL); /*0x65416b*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 13432LL) > 0xFu ) /*0x654177*/
      v46 = *(const char **)v46; /*0x654179*/
    v45 = atoi(v46); /*0x65417c*/
  }
  else
  {
    v45 = 0; /*0x654164*/
  }
  v47 = 9999; /*0x654184*/
  *(_BYTE *)(a1 + 1982) = v45 != 0; /*0x65418c*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 408LL) ) /*0x654195*/
  {
    v49 = (const char *)(*(_QWORD *)a2 + 1632LL); /*0x6541a5*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 1656LL) > 0xFu ) /*0x6541b1*/
      v49 = *(const char **)v49; /*0x6541b3*/
    v48 = atoi(v49); /*0x6541b6*/
    if ( v48 < 0 ) /*0x6541be*/
      v48 = 0; /*0x6541be*/
    if ( v48 > 9999 ) /*0x6541c3*/
      v48 = 9999; /*0x6541c5*/
  }
  else
  {
    v48 = 0; /*0x65419e*/
  }
  *(_DWORD *)(a1 + 1480) = v48; /*0x6541c7*/
  if ( !*(_QWORD *)(*(_QWORD *)a3 + 568LL) ) /*0x6541d0*/
  {
    v50 = 0; /*0x6541d9*/
LABEL_113:
    v47 = v50; /*0x654200*/
    goto LABEL_114; /*0x654200*/
  }
  v51 = (const char *)(*(_QWORD *)a2 + 2272LL); /*0x6541e0*/
  if ( *(_QWORD *)(*(_QWORD *)a2 + 2296LL) > 0xFu ) /*0x6541ec*/
    v51 = *(const char **)v51; /*0x6541ee*/
  v50 = atoi(v51); /*0x6541f1*/
  if ( v50 < 0 ) /*0x6541f9*/
    v50 = 0; /*0x6541f9*/
  if ( v50 <= 9999 ) /*0x6541fe*/
    goto LABEL_113; /*0x6541fe*/
LABEL_114:
  *(_DWORD *)(a1 + 1484) = v47; /*0x654202*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3368LL) ) /*0x654210*/
  {
    v53 = (const char *)(*(_QWORD *)a2 + 13472LL); /*0x654221*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 13496LL) > 0xFu ) /*0x65422d*/
      v53 = *(const char **)v53; /*0x65422f*/
    v54 = atof(v53); /*0x65423b*/
    if ( isnan(v54) ) /*0x654242*/
      v52 = 0.0; /*0x65424c*/
    else
      v52 = fminf(1000000000.0, fmaxf(-1000000000.0, v54)); /*0x65425d*/
  }
  else
  {
    v52 = 0.0; /*0x654219*/
  }
  *(float *)(a1 + 1940) = v52; /*0x654261*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3376LL) ) /*0x65426c*/
  {
    v56 = (const char *)(*(_QWORD *)a2 + 13504LL); /*0x65427d*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 13528LL) > 0xFu ) /*0x654289*/
      v56 = *(const char **)v56; /*0x65428b*/
    v57 = atof(v56); /*0x654297*/
    if ( isnan(v57) ) /*0x65429e*/
      v55 = 0.0; /*0x6542a8*/
    else
      v55 = fminf(1000000000.0, fmaxf(-1000000000.0, v57)); /*0x6542b9*/
  }
  else
  {
    v55 = 0.0; /*0x654275*/
  }
  *(float *)(a1 + 1944) = v55; /*0x6542bd*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3384LL) ) /*0x6542c8*/
  {
    v59 = (const char *)(*(_QWORD *)a2 + 13536LL); /*0x6542d9*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 13560LL) > 0xFu ) /*0x6542e5*/
      v59 = *(const char **)v59; /*0x6542e7*/
    v60 = atof(v59); /*0x6542f3*/
    if ( isnan(v60) ) /*0x6542fa*/
      v58 = 0.0; /*0x654304*/
    else
      v58 = fminf(1000000000.0, fmaxf(-1000000000.0, v60)); /*0x654315*/
  }
  else
  {
    v58 = 0.0; /*0x6542d1*/
  }
  *(float *)(a1 + 1948) = v58; /*0x654319*/
  if ( !*(_QWORD *)(*(_QWORD *)a3 + 3392LL) ) /*0x654324*/
    goto LABEL_263; /*0x654324*/
  v61 = (const char *)(*(_QWORD *)a2 + 13568LL); /*0x654330*/
  if ( *(_QWORD *)(*(_QWORD *)a2 + 13592LL) > 0xFu ) /*0x65433c*/
    v61 = *(const char **)v61; /*0x65433e*/
  if ( atoi(v61) < 0 ) /*0x654349*/
  {
    v62 = 0; /*0x65434b*/
  }
  else
  {
LABEL_263:
    if ( *(_QWORD *)(*(_QWORD *)a3 + 3392LL) ) /*0x654352*/
    {
      v63 = (const char *)(*(_QWORD *)a2 + 13568LL); /*0x654362*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 13592LL) > 0xFu ) /*0x65436e*/
        v63 = *(const char **)v63; /*0x654370*/
      v62 = atoi(v63); /*0x654373*/
    }
    else
    {
      v62 = 0; /*0x65435b*/
    }
  }
  *(_DWORD *)(a1 + 1952) = v62; /*0x654379*/
  if ( !*(_QWORD *)(*(_QWORD *)a3 + 3400LL) ) /*0x654382*/
    goto LABEL_264; /*0x654382*/
  v64 = (const char *)(*(_QWORD *)a2 + 13600LL); /*0x65438e*/
  if ( *(_QWORD *)(*(_QWORD *)a2 + 13624LL) > 0xFu ) /*0x65439a*/
    v64 = *(const char **)v64; /*0x65439c*/
  if ( atoi(v64) < 0 ) /*0x6543a7*/
  {
    v65 = 0; /*0x6543a9*/
  }
  else
  {
LABEL_264:
    if ( *(_QWORD *)(*(_QWORD *)a3 + 3400LL) ) /*0x6543b0*/
    {
      v66 = (const char *)(*(_QWORD *)a2 + 13600LL); /*0x6543c0*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 13624LL) > 0xFu ) /*0x6543cc*/
        v66 = *(const char **)v66; /*0x6543ce*/
      v65 = atoi(v66); /*0x6543d1*/
    }
    else
    {
      v65 = 0; /*0x6543b9*/
    }
  }
  *(_DWORD *)(a1 + 1956) = v65; /*0x6543d7*/
  if ( !*(_QWORD *)(*(_QWORD *)a3 + 3408LL) ) /*0x6543e0*/
    goto LABEL_265; /*0x6543e0*/
  v67 = (const char *)(*(_QWORD *)a2 + 13632LL); /*0x6543ec*/
  if ( *(_QWORD *)(*(_QWORD *)a2 + 13656LL) > 0xFu ) /*0x6543f8*/
    v67 = *(const char **)v67; /*0x6543fa*/
  if ( atoi(v67) < 0 ) /*0x654405*/
  {
    v68 = 0; /*0x654407*/
  }
  else
  {
LABEL_265:
    if ( *(_QWORD *)(*(_QWORD *)a3 + 3408LL) ) /*0x65440e*/
    {
      v69 = (const char *)(*(_QWORD *)a2 + 13632LL); /*0x65441e*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 13656LL) > 0xFu ) /*0x65442a*/
        v69 = *(const char **)v69; /*0x65442c*/
      v68 = atoi(v69); /*0x65442f*/
    }
    else
    {
      v68 = 0; /*0x654417*/
    }
  }
  *(_DWORD *)(a1 + 1960) = v68; /*0x654435*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3664LL) ) /*0x65443e*/
  {
    v71 = (const char *)(*(_QWORD *)a2 + 14656LL); /*0x65444e*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 14680LL) > 0xFu ) /*0x65445a*/
      v71 = *(const char **)v71; /*0x65445c*/
    v70 = atoi(v71); /*0x65445f*/
  }
  else
  {
    v70 = 0; /*0x654447*/
  }
  *(_DWORD *)(a1 + 1964) = v70; /*0x654465*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1104LL) ) /*0x65446e*/
  {
    v73 = (const char *)(*(_QWORD *)a2 + 4416LL); /*0x65447e*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 4440LL) > 0xFu ) /*0x65448a*/
      v73 = *(const char **)v73; /*0x65448c*/
    v72 = atoi(v73); /*0x65448f*/
  }
  else
  {
    v72 = 0; /*0x654477*/
  }
  *(_BYTE *)(a1 + 1700) = v72 != 0; /*0x65449a*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1600LL) ) /*0x6544a3*/
  {
    v75 = (const char *)(*(_QWORD *)a2 + 6400LL); /*0x6544b3*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 6424LL) > 0xFu ) /*0x6544bf*/
      v75 = *(const char **)v75; /*0x6544c1*/
    v74 = atoi(v75); /*0x6544c4*/
  }
  else
  {
    v74 = 0; /*0x6544ac*/
  }
  *(_BYTE *)(a1 + 1701) = v74 != 0; /*0x6544cf*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3424LL) ) /*0x6544d8*/
  {
    v77 = (const char *)(*(_QWORD *)a2 + 13696LL); /*0x6544e8*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 13720LL) > 0xFu ) /*0x6544f4*/
      v77 = *(const char **)v77; /*0x6544f6*/
    v76 = atoi(v77); /*0x6544f9*/
  }
  else
  {
    v76 = 0; /*0x6544e1*/
  }
  *(_BYTE *)(a1 + 1968) = v76 != 0; /*0x654504*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3912LL) ) /*0x65450d*/
  {
    v79 = (const char *)(*(_QWORD *)a2 + 15648LL); /*0x65451d*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 15672LL) > 0xFu ) /*0x654529*/
      v79 = *(const char **)v79; /*0x65452b*/
    v78 = atoi(v79); /*0x65452e*/
  }
  else
  {
    v78 = 0; /*0x654516*/
  }
  *(_BYTE *)(a1 + 1970) = v78 != 0; /*0x654539*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 80LL) ) /*0x654542*/
  {
    v81 = (const char *)(*(_QWORD *)a2 + 320LL); /*0x654550*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 344LL) > 0xFu ) /*0x65455c*/
      v81 = *(const char **)v81; /*0x65455e*/
    v82 = atof(v81); /*0x65456a*/
    if ( isnan(v82) ) /*0x654571*/
      v80 = 0.0; /*0x65457b*/
    else
      v80 = fminf(1000000000.0, fmaxf(-1000000000.0, v82)); /*0x65458c*/
  }
  else
  {
    v80 = 0.0; /*0x654548*/
  }
  *(float *)(a1 + 1468) = v80; /*0x654590*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3464LL) ) /*0x65459b*/
  {
    v84 = (const char *)(*(_QWORD *)a2 + 13856LL); /*0x6545ab*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 13880LL) > 0xFu ) /*0x6545b7*/
      v84 = *(const char **)v84; /*0x6545b9*/
    v83 = atoi(v84); /*0x6545bc*/
  }
  else
  {
    v83 = 0; /*0x6545a4*/
  }
  *(_BYTE *)(a1 + 1969) = v83 != 0; /*0x6545c7*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3472LL) ) /*0x6545d0*/
  {
    v86 = (const char *)(*(_QWORD *)a2 + 13888LL); /*0x6545e1*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 13912LL) > 0xFu ) /*0x6545ed*/
      v86 = *(const char **)v86; /*0x6545ef*/
    v87 = atof(v86); /*0x6545fb*/
    if ( isnan(v87) ) /*0x654602*/
      v85 = 0.0; /*0x65460c*/
    else
      v85 = fminf(1000000000.0, fmaxf(-1000000000.0, v87)); /*0x65461d*/
  }
  else
  {
    v85 = 0.0; /*0x6545d9*/
  }
  *(float *)(a1 + 1972) = v85; /*0x654621*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3640LL) ) /*0x65462c*/
  {
    v89 = (const char *)(*(_QWORD *)a2 + 14560LL); /*0x65463c*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 14584LL) > 0xFu ) /*0x654648*/
      v89 = *(const char **)v89; /*0x65464a*/
    v88 = atoi(v89); /*0x65464d*/
  }
  else
  {
    v88 = 0; /*0x654635*/
  }
  *(_DWORD *)(a1 + 1976) = v88; /*0x654653*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3656LL) ) /*0x65465c*/
  {
    v91 = (const char *)(*(_QWORD *)a2 + 14624LL); /*0x65466c*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 14648LL) > 0xFu ) /*0x654678*/
      v91 = *(const char **)v91; /*0x65467a*/
    v90 = atoi(v91); /*0x65467d*/
  }
  else
  {
    v90 = 0; /*0x654665*/
  }
  *(_DWORD *)(a1 + 1984) = v90; /*0x654683*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3920LL) ) /*0x65468c*/
  {
    v93 = (const char *)(*(_QWORD *)a2 + 15680LL); /*0x65469d*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 15704LL) > 0xFu ) /*0x6546a9*/
      v93 = *(const char **)v93; /*0x6546ab*/
    v94 = atof(v93); /*0x6546b7*/
    if ( isnan(v94) ) /*0x6546be*/
      v92 = 0.0; /*0x6546c8*/
    else
      v92 = fminf(1000000000.0, fmaxf(-1000000000.0, v94)); /*0x6546d9*/
  }
  else
  {
    v92 = 0.0; /*0x654695*/
  }
  *(float *)(a1 + 2000) = v92; /*0x6546dd*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4016LL) ) /*0x6546e8*/
  {
    v96 = (const char *)(*(_QWORD *)a2 + 16064LL); /*0x6546f8*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 16088LL) > 0xFu ) /*0x654704*/
      v96 = *(const char **)v96; /*0x654706*/
    v95 = atoi(v96); /*0x654709*/
  }
  else
  {
    v95 = 0; /*0x6546f1*/
  }
  *(_DWORD *)(a1 + 1992) = v95; /*0x65470f*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4024LL) ) /*0x654718*/
  {
    v98 = (const char *)(*(_QWORD *)a2 + 16096LL); /*0x654728*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 16120LL) > 0xFu ) /*0x654734*/
      v98 = *(const char **)v98; /*0x654736*/
    v97 = atoi(v98); /*0x654739*/
  }
  else
  {
    v97 = 0; /*0x654721*/
  }
  *(_BYTE *)(a1 + 1996) = v97 != 0; /*0x654744*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4760LL) ) /*0x65474d*/
  {
    v100 = (const char *)(*(_QWORD *)a2 + 19040LL); /*0x65475d*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 19064LL) > 0xFu ) /*0x654769*/
      v100 = *(const char **)v100; /*0x65476b*/
    v99 = atoi(v100); /*0x65476e*/
  }
  else
  {
    v99 = 0; /*0x654756*/
  }
  *(_BYTE *)(a1 + 1932) = v99 != 0; /*0x654779*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4768LL) ) /*0x654782*/
  {
    v102 = (const char *)(*(_QWORD *)a2 + 19072LL); /*0x654792*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 19096LL) > 0xFu ) /*0x65479e*/
      v102 = *(const char **)v102; /*0x6547a0*/
    v101 = atoi(v102); /*0x6547a3*/
  }
  else
  {
    v101 = 0; /*0x65478b*/
  }
  *(_DWORD *)(a1 + 2008) = v101; /*0x6547a9*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4776LL) ) /*0x6547b2*/
  {
    v104 = (const char *)(*(_QWORD *)a2 + 19104LL); /*0x6547c2*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 19128LL) > 0xFu ) /*0x6547ce*/
      v104 = *(const char **)v104; /*0x6547d0*/
    v103 = atoi(v104); /*0x6547d3*/
  }
  else
  {
    v103 = 0; /*0x6547bb*/
  }
  *(_DWORD *)(a1 + 2012) = v103; /*0x6547d9*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4784LL) ) /*0x6547e2*/
  {
    v105 = (const char *)(*(_QWORD *)a2 + 19136LL); /*0x6547ee*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 19160LL) > 0xFu ) /*0x6547fa*/
      v105 = *(const char **)v105; /*0x6547fc*/
    v106 = atof(v105); /*0x654808*/
    if ( !isnan(v106) ) /*0x65480f*/
      v15 = fminf(1000000000.0, fmaxf(-1000000000.0, v106)); /*0x654822*/
  }
  *(float *)(a1 + 2016) = v15; /*0x654838*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4792LL) ) /*0x65484d*/
  {
    v107 = (const char *)(*(_QWORD *)a2 + 19168LL); /*0x654859*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 19192LL) > 0xFu ) /*0x654865*/
      v107 = *(const char **)v107; /*0x654867*/
    v6 = atoi(v107); /*0x654870*/
  }
  *(_BYTE *)(a1 + 2020) = v6 != 0; /*0x654880*/
  return v6 != 0; /*0x654874*/
}
