#include <Geode/binding/EnterEffectObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x632d60
// Method: EnterEffectObject::~EnterEffectObject
cocos2d::CCSprite *__fastcall EnterEffectObject__dtor_EnterEffectObject(cocos2d::CCSprite *Block, char a2)
{
  *(_QWORD *)Block = &EffectGameObject::`vftable'; /*0x632d73*/
  *((_QWORD *)Block + 40) = &EffectGameObject::`vftable'; /*0x632d80*/
  *((_QWORD *)Block + 43) = &EffectGameObject::`vftable'; /*0x632d8e*/
  TextGameObject__dtor_TextGameObject(Block); /*0x632d95*/
  if ( (a2 & 1) != 0 ) /*0x632d9d*/
    j_j_free(Block); /*0x632da7*/
  return Block; /*0x632dac*/
}

// [2/4] Address: 0x6338f0
// Method: EnterEffectObject::getSaveString
// Hidden C++ exception states: #wind=2
__int64 __fastcall EnterEffectObject_getSaveString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SaveString; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r8
  __int128 v11; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v12[24]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v13[528]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v14[32]; // [rsp+260h] [rbp+160h] BYREF

  *(_QWORD *)&v11 = a2; /*0x633928*/
  fmt::BasicWriter<char>::BasicWriter<char>(v13); /*0x633935*/
  SaveString = EffectGameObject_getSaveString(a1, (__int64)v14, a3); /*0x633949*/
  v11 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v12, SaveString); /*0x633960*/
  fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x63396f*/
  sub_3C310(v14); /*0x63397d*/
  if ( *(_DWORD *)(a1 + 1856) ) /*0x633989*/
  {
    *(_QWORD *)&v11 = &unk_709CE8; /*0x633992*/
    *((_QWORD *)&v11 + 1) = 0; /*0x633997*/
    fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x6339a6*/
    fmt::BasicWriter<char>::operator<<(v13, 217); /*0x6339b6*/
    *(_QWORD *)&v11 = &unk_709CE8; /*0x6339bc*/
    *((_QWORD *)&v11 + 1) = 0; /*0x6339c1*/
    fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x6339d0*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1856)); /*0x6339e1*/
  }
  if ( *(_DWORD *)(a1 + 2048) ) /*0x6339e7*/
  {
    *(_QWORD *)&v11 = &unk_709CE8; /*0x6339f0*/
    *((_QWORD *)&v11 + 1) = 0; /*0x6339f5*/
    fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x633a04*/
    fmt::BasicWriter<char>::operator<<(v13, 344); /*0x633a14*/
    *(_QWORD *)&v11 = &unk_709CE8; /*0x633a1a*/
    *((_QWORD *)&v11 + 1) = 0; /*0x633a1f*/
    fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x633a2e*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 2048)); /*0x633a3f*/
  }
  switch ( *(_DWORD *)(a1 + 1036) ) /*0x633a74*/
  {
    case 0xBBE: /*0x633a74*/
    case 0xBBF: /*0x633a74*/
    case 0xBC0: /*0x633a74*/
    case 0xBC1: /*0x633a74*/
    case 0xBC2: /*0x633a74*/
    case 0xBC3: /*0x633a74*/
    case 0xBC4: /*0x633a74*/
    case 0xBC5: /*0x633a74*/
    case 0xBC6: /*0x633a74*/
    case 0xBC7: /*0x633a74*/
    case 0xBC9: /*0x633a74*/
    case 0xBCA: /*0x633a74*/
    case 0xBCB: /*0x633a74*/
    case 0xBCC: /*0x633a74*/
    case 0xBCD: /*0x633a74*/
    case 0xBCF: /*0x633a74*/
    case 0xBD0: /*0x633a74*/
      if ( *(_DWORD *)(a1 + 1860) ) /*0x633a76*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x633a7f*/
        *((_QWORD *)&v11 + 1) = 0; /*0x633a84*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x633a93*/
        fmt::BasicWriter<char>::operator<<(v13, 222); /*0x633aa3*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x633aa9*/
        *((_QWORD *)&v11 + 1) = 0; /*0x633aae*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x633abd*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1860)); /*0x633ace*/
      }
      if ( *(_DWORD *)(a1 + 1864) ) /*0x633ad4*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x633add*/
        *((_QWORD *)&v11 + 1) = 0; /*0x633ae2*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x633af1*/
        fmt::BasicWriter<char>::operator<<(v13, 223); /*0x633b01*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x633b07*/
        *((_QWORD *)&v11 + 1) = 0; /*0x633b0c*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x633b1b*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1864)); /*0x633b2c*/
      }
      if ( *(_DWORD *)(a1 + 1868) ) /*0x633b32*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x633b3b*/
        *((_QWORD *)&v11 + 1) = 0; /*0x633b40*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x633b4f*/
        fmt::BasicWriter<char>::operator<<(v13, 220); /*0x633b5f*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x633b65*/
        *((_QWORD *)&v11 + 1) = 0; /*0x633b6a*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x633b79*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1868)); /*0x633b8a*/
      }
      if ( *(_DWORD *)(a1 + 1872) ) /*0x633b90*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x633b99*/
        *((_QWORD *)&v11 + 1) = 0; /*0x633b9e*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x633bad*/
        fmt::BasicWriter<char>::operator<<(v13, 221); /*0x633bbd*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x633bc3*/
        *((_QWORD *)&v11 + 1) = 0; /*0x633bc8*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x633bd7*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1872)); /*0x633be8*/
      }
      if ( *(_DWORD *)(a1 + 1876) ) /*0x633bee*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x633bf7*/
        *((_QWORD *)&v11 + 1) = 0; /*0x633bfc*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x633c0b*/
        fmt::BasicWriter<char>::operator<<(v13, 252); /*0x633c1b*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x633c21*/
        *((_QWORD *)&v11 + 1) = 0; /*0x633c26*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x633c35*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1876)); /*0x633c46*/
      }
      if ( *(_DWORD *)(a1 + 1880) ) /*0x633c4c*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x633c55*/
        *((_QWORD *)&v11 + 1) = 0; /*0x633c5a*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x633c69*/
        fmt::BasicWriter<char>::operator<<(v13, 253); /*0x633c79*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x633c7f*/
        *((_QWORD *)&v11 + 1) = 0; /*0x633c84*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x633c93*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1880)); /*0x633ca4*/
      }
      if ( *(_DWORD *)(a1 + 1884) ) /*0x633caa*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x633cb3*/
        *((_QWORD *)&v11 + 1) = 0; /*0x633cb8*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x633cc7*/
        fmt::BasicWriter<char>::operator<<(v13, 218); /*0x633cd7*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x633cdd*/
        *((_QWORD *)&v11 + 1) = 0; /*0x633ce2*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x633cf1*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1884)); /*0x633d02*/
      }
      if ( *(_DWORD *)(a1 + 1888) ) /*0x633d08*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x633d11*/
        *((_QWORD *)&v11 + 1) = 0; /*0x633d16*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x633d25*/
        fmt::BasicWriter<char>::operator<<(v13, 219); /*0x633d35*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x633d3b*/
        *((_QWORD *)&v11 + 1) = 0; /*0x633d40*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x633d4f*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1888)); /*0x633d60*/
      }
      if ( *(_DWORD *)(a1 + 1960) ) /*0x633d66*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x633d6f*/
        *((_QWORD *)&v11 + 1) = 0; /*0x633d74*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x633d83*/
        fmt::BasicWriter<char>::operator<<(v13, 237); /*0x633d93*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x633d99*/
        *((_QWORD *)&v11 + 1) = 0; /*0x633d9e*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x633dad*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1960)); /*0x633dbe*/
      }
      if ( *(_DWORD *)(a1 + 1964) ) /*0x633dc4*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x633dcd*/
        *((_QWORD *)&v11 + 1) = 0; /*0x633dd2*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x633de1*/
        fmt::BasicWriter<char>::operator<<(v13, 238); /*0x633df1*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x633df7*/
        *((_QWORD *)&v11 + 1) = 0; /*0x633dfc*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x633e0b*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1964)); /*0x633e1c*/
      }
      if ( *(_DWORD *)(a1 + 1968) ) /*0x633e22*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x633e2b*/
        *((_QWORD *)&v11 + 1) = 0; /*0x633e30*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x633e3f*/
        fmt::BasicWriter<char>::operator<<(v13, 239); /*0x633e4f*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x633e55*/
        *((_QWORD *)&v11 + 1) = 0; /*0x633e5a*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x633e69*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1968)); /*0x633e7a*/
      }
      if ( *(_DWORD *)(a1 + 1972) ) /*0x633e80*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x633e89*/
        *((_QWORD *)&v11 + 1) = 0; /*0x633e8e*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x633e9d*/
        fmt::BasicWriter<char>::operator<<(v13, 240); /*0x633ead*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x633eb3*/
        *((_QWORD *)&v11 + 1) = 0; /*0x633eb8*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x633ec7*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1972)); /*0x633ed8*/
      }
      if ( *(_DWORD *)(a1 + 1936) ) /*0x633ede*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x633ee7*/
        *((_QWORD *)&v11 + 1) = 0; /*0x633eec*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x633efb*/
        fmt::BasicWriter<char>::operator<<(v13, 242); /*0x633f0b*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x633f11*/
        *((_QWORD *)&v11 + 1) = 0; /*0x633f16*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x633f25*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1936)); /*0x633f36*/
      }
      if ( *(float *)(a1 + 1940) != 0.0 ) /*0x633f4c*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x633f4e*/
        *((_QWORD *)&v11 + 1) = 0; /*0x633f53*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x633f62*/
        fmt::BasicWriter<char>::operator<<(v13, 243); /*0x633f72*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x633f78*/
        *((_QWORD *)&v11 + 1) = 0; /*0x633f7d*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x633f8c*/
        fmt::BasicWriter<char>::operator<<(v13); /*0x633fa2*/
      }
      if ( *(_DWORD *)(a1 + 1948) ) /*0x633fa8*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x633fb1*/
        *((_QWORD *)&v11 + 1) = 0; /*0x633fb6*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x633fc5*/
        fmt::BasicWriter<char>::operator<<(v13, 248); /*0x633fd5*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x633fdb*/
        *((_QWORD *)&v11 + 1) = 0; /*0x633fe0*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x633fef*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1948)); /*0x634000*/
      }
      if ( *(float *)(a1 + 1952) != 0.0 ) /*0x634013*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634015*/
        *((_QWORD *)&v11 + 1) = 0; /*0x63401a*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634029*/
        fmt::BasicWriter<char>::operator<<(v13, 249); /*0x634039*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x63403f*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634044*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634053*/
        fmt::BasicWriter<char>::operator<<(v13); /*0x634069*/
      }
      if ( *(_DWORD *)(a1 + 1908) ) /*0x63406f*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634078*/
        *((_QWORD *)&v11 + 1) = 0; /*0x63407d*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x63408c*/
        fmt::BasicWriter<char>::operator<<(v13, 231); /*0x63409c*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x6340a2*/
        *((_QWORD *)&v11 + 1) = 0; /*0x6340a7*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x6340b6*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1908)); /*0x6340c7*/
      }
      if ( *(_DWORD *)(a1 + 1912) ) /*0x6340cd*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x6340d6*/
        *((_QWORD *)&v11 + 1) = 0; /*0x6340db*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x6340ea*/
        fmt::BasicWriter<char>::operator<<(v13, 232); /*0x6340fa*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634100*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634105*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634114*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1912)); /*0x634125*/
      }
      if ( *(_BYTE *)(a1 + 1928) ) /*0x63412b*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634134*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634139*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634148*/
        fmt::BasicWriter<char>::operator<<(v13, 287); /*0x634158*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x63415e*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634163*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634172*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1928)); /*0x634184*/
      }
      if ( *(float *)(a1 + 1932) != 0.0 ) /*0x634197*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634199*/
        *((_QWORD *)&v11 + 1) = 0; /*0x63419e*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x6341ad*/
        fmt::BasicWriter<char>::operator<<(v13, 288); /*0x6341bd*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x6341c3*/
        *((_QWORD *)&v11 + 1) = 0; /*0x6341c8*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x6341d7*/
        fmt::BasicWriter<char>::operator<<(v13); /*0x6341ed*/
      }
      if ( *(float *)(a1 + 1892) != 0.0 ) /*0x634200*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634202*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634207*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634216*/
        fmt::BasicWriter<char>::operator<<(v13, 233); /*0x634226*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x63422c*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634231*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634240*/
        fmt::BasicWriter<char>::operator<<(v13); /*0x634256*/
      }
      if ( *(float *)(a1 + 1896) != 0.0 ) /*0x634269*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x63426b*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634270*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x63427f*/
        fmt::BasicWriter<char>::operator<<(v13, 234); /*0x63428f*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634295*/
        *((_QWORD *)&v11 + 1) = 0; /*0x63429a*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x6342a9*/
        fmt::BasicWriter<char>::operator<<(v13); /*0x6342bf*/
      }
      if ( *(float *)(a1 + 1900) != 0.0 ) /*0x6342d2*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x6342d4*/
        *((_QWORD *)&v11 + 1) = 0; /*0x6342d9*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x6342e8*/
        fmt::BasicWriter<char>::operator<<(v13, 235); /*0x6342f8*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x6342fe*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634303*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634312*/
        fmt::BasicWriter<char>::operator<<(v13); /*0x634328*/
      }
      if ( *(float *)(a1 + 1904) != 0.0 ) /*0x63433b*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x63433d*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634342*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634351*/
        fmt::BasicWriter<char>::operator<<(v13, 236); /*0x634361*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634367*/
        *((_QWORD *)&v11 + 1) = 0; /*0x63436c*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x63437b*/
        fmt::BasicWriter<char>::operator<<(v13); /*0x634391*/
      }
      if ( *(_DWORD *)(a1 + 1976) ) /*0x634397*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x6343a0*/
        *((_QWORD *)&v11 + 1) = 0; /*0x6343a5*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x6343b4*/
        fmt::BasicWriter<char>::operator<<(v13, 260); /*0x6343c4*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x6343ca*/
        *((_QWORD *)&v11 + 1) = 0; /*0x6343cf*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x6343de*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1976)); /*0x6343ef*/
      }
      if ( *(_DWORD *)(a1 + 1980) ) /*0x6343f5*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x6343fe*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634403*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634412*/
        fmt::BasicWriter<char>::operator<<(v13, 224); /*0x634422*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634428*/
        *((_QWORD *)&v11 + 1) = 0; /*0x63442d*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x63443c*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1980)); /*0x63444d*/
      }
      if ( *(_DWORD *)(a1 + 1984) ) /*0x634453*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x63445c*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634461*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634470*/
        fmt::BasicWriter<char>::operator<<(v13, 262); /*0x634480*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634486*/
        *((_QWORD *)&v11 + 1) = 0; /*0x63448b*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x63449a*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1984)); /*0x6344ab*/
      }
      if ( *(_DWORD *)(a1 + 1480) ) /*0x6344b1*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x6344ba*/
        *((_QWORD *)&v11 + 1) = 0; /*0x6344bf*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x6344ce*/
        fmt::BasicWriter<char>::operator<<(v13, 51); /*0x6344de*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x6344e4*/
        *((_QWORD *)&v11 + 1) = 0; /*0x6344e9*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x6344f8*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1480)); /*0x634509*/
      }
      if ( *(_DWORD *)(a1 + 1484) ) /*0x63450f*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634518*/
        *((_QWORD *)&v11 + 1) = 0; /*0x63451d*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x63452c*/
        fmt::BasicWriter<char>::operator<<(v13, 71); /*0x63453c*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634542*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634547*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634556*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1484)); /*0x634567*/
      }
      if ( *(_DWORD *)(a1 + 1556) ) /*0x63456d*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634576*/
        *((_QWORD *)&v11 + 1) = 0; /*0x63457b*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x63458a*/
        fmt::BasicWriter<char>::operator<<(v13, 538); /*0x63459a*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x6345a0*/
        *((_QWORD *)&v11 + 1) = 0; /*0x6345a5*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x6345b4*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1556)); /*0x6345c5*/
      }
      if ( *(_BYTE *)(a1 + 1988) ) /*0x6345cb*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x6345d4*/
        *((_QWORD *)&v11 + 1) = 0; /*0x6345d9*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x6345e8*/
        fmt::BasicWriter<char>::operator<<(v13, 241); /*0x6345f8*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x6345fe*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634603*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634612*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1988)); /*0x634624*/
      }
      if ( *(_BYTE *)(a1 + 1989) ) /*0x63462a*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634633*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634638*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634647*/
        fmt::BasicWriter<char>::operator<<(v13, 261); /*0x634657*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x63465d*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634662*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634671*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1989)); /*0x634683*/
      }
      if ( *(float *)(a1 + 1992) != 0.0 ) /*0x634696*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634698*/
        *((_QWORD *)&v11 + 1) = 0; /*0x63469d*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x6346ac*/
        fmt::BasicWriter<char>::operator<<(v13, 263); /*0x6346bc*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x6346c2*/
        *((_QWORD *)&v11 + 1) = 0; /*0x6346c7*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x6346d6*/
        fmt::BasicWriter<char>::operator<<(v13); /*0x6346ec*/
      }
      if ( *(float *)(a1 + 1996) != 0.0 ) /*0x6346ff*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634701*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634706*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634715*/
        fmt::BasicWriter<char>::operator<<(v13, 264); /*0x634725*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x63472b*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634730*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x63473f*/
        fmt::BasicWriter<char>::operator<<(v13); /*0x634755*/
      }
      if ( *(float *)(a1 + 2000) != 0.0 ) /*0x634768*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x63476a*/
        *((_QWORD *)&v11 + 1) = 0; /*0x63476f*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x63477e*/
        fmt::BasicWriter<char>::operator<<(v13, 265); /*0x63478e*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634794*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634799*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x6347a8*/
        fmt::BasicWriter<char>::operator<<(v13); /*0x6347be*/
      }
      if ( *(float *)(a1 + 2004) != 0.0 ) /*0x6347d1*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x6347d3*/
        *((_QWORD *)&v11 + 1) = 0; /*0x6347d8*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x6347e7*/
        fmt::BasicWriter<char>::operator<<(v13, 285); /*0x6347f7*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x6347fd*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634802*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634811*/
        fmt::BasicWriter<char>::operator<<(v13); /*0x634827*/
      }
      if ( *(_DWORD *)(a1 + 2008) ) /*0x63482d*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634836*/
        *((_QWORD *)&v11 + 1) = 0; /*0x63483b*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x63484a*/
        fmt::BasicWriter<char>::operator<<(v13, 225); /*0x63485a*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634860*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634865*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634874*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 2008)); /*0x634885*/
      }
      if ( *(float *)(a1 + 2012) != 0.0 ) /*0x634898*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x63489a*/
        *((_QWORD *)&v11 + 1) = 0; /*0x63489f*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x6348ae*/
        fmt::BasicWriter<char>::operator<<(v13, 270); /*0x6348be*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x6348c4*/
        *((_QWORD *)&v11 + 1) = 0; /*0x6348c9*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x6348d8*/
        fmt::BasicWriter<char>::operator<<(v13); /*0x6348ee*/
      }
      if ( *(float *)(a1 + 2016) != 0.0 ) /*0x634901*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634903*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634908*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634917*/
        fmt::BasicWriter<char>::operator<<(v13, 271); /*0x634927*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x63492d*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634932*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634941*/
        fmt::BasicWriter<char>::operator<<(v13); /*0x634957*/
      }
      if ( *(float *)(a1 + 2020) != 0.0 ) /*0x63496a*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x63496c*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634971*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634980*/
        fmt::BasicWriter<char>::operator<<(v13, 275); /*0x634990*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634996*/
        *((_QWORD *)&v11 + 1) = 0; /*0x63499b*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x6349aa*/
        fmt::BasicWriter<char>::operator<<(v13); /*0x6349c0*/
      }
      if ( *(float *)(a1 + 2024) != 0.0 ) /*0x6349d3*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x6349d5*/
        *((_QWORD *)&v11 + 1) = 0; /*0x6349da*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x6349e9*/
        fmt::BasicWriter<char>::operator<<(v13, 286); /*0x6349f9*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x6349ff*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634a04*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634a13*/
        fmt::BasicWriter<char>::operator<<(v13); /*0x634a29*/
      }
      if ( *(_BYTE *)(a1 + 2028) ) /*0x634a2f*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634a38*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634a3d*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634a4c*/
        fmt::BasicWriter<char>::operator<<(v13, 276); /*0x634a5c*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634a62*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634a67*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634a76*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 2028)); /*0x634a88*/
      }
      if ( *(_BYTE *)(a1 + 1700) ) /*0x634a8e*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634a97*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634a9c*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634aab*/
        fmt::BasicWriter<char>::operator<<(v13, 138); /*0x634abb*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634ac1*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634ac6*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634ad5*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1700)); /*0x634ae7*/
      }
      if ( *(_BYTE *)(a1 + 1701) ) /*0x634aed*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634af6*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634afb*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634b0a*/
        fmt::BasicWriter<char>::operator<<(v13, 200); /*0x634b1a*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634b20*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634b25*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634b34*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1701)); /*0x634b46*/
      }
      if ( *(_BYTE *)(a1 + 1702) ) /*0x634b4c*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634b55*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634b5a*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634b69*/
        fmt::BasicWriter<char>::operator<<(v13, 201); /*0x634b79*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634b7f*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634b84*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634b93*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1702)); /*0x634ba5*/
      }
      if ( *(_BYTE *)(a1 + 1649) ) /*0x634bab*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634bb4*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634bb9*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634bc8*/
        fmt::BasicWriter<char>::operator<<(v13, 65); /*0x634bd8*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634bde*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634be3*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634bf2*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1649)); /*0x634c04*/
      }
      if ( *(_BYTE *)(a1 + 1650) ) /*0x634c0a*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634c13*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634c18*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634c27*/
        fmt::BasicWriter<char>::operator<<(v13, 66); /*0x634c37*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634c3d*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634c42*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634c51*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1650)); /*0x634c63*/
      }
      if ( *(float *)(a1 + 2032) != 0.0 ) /*0x634c76*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634c78*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634c7d*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634c8c*/
        fmt::BasicWriter<char>::operator<<(v13, 282); /*0x634c9c*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634ca2*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634ca7*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634cb6*/
        fmt::BasicWriter<char>::operator<<(v13); /*0x634ccc*/
      }
      if ( *(_BYTE *)(a1 + 2036) ) /*0x634cd2*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634cdb*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634ce0*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634cef*/
        fmt::BasicWriter<char>::operator<<(v13, 283); /*0x634cff*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634d05*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634d0a*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634d19*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 2036)); /*0x634d2b*/
      }
      if ( *(_DWORD *)(a1 + 2040) ) /*0x634d31*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634d3a*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634d3f*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634d4e*/
        fmt::BasicWriter<char>::operator<<(v13, 341); /*0x634d5e*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634d64*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634d69*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634d78*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 2040)); /*0x634d89*/
      }
      if ( *(_BYTE *)(a1 + 2029) ) /*0x634d8f*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634d98*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634d9d*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634dac*/
        fmt::BasicWriter<char>::operator<<(v13, 278); /*0x634dbc*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634dc2*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634dc7*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634dd6*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 2029)); /*0x634de8*/
      }
      if ( *(float *)(a1 + 1468) != 0.0 ) /*0x634dfb*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634dfd*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634e02*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634e11*/
        fmt::BasicWriter<char>::operator<<(v13, 10); /*0x634e21*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634e27*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634e2c*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634e3b*/
        fmt::BasicWriter<char>::operator<<(v13); /*0x634e51*/
      }
      if ( *(_BYTE *)(a1 + 2052) ) /*0x634e57*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634e60*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634e65*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634e74*/
        fmt::BasicWriter<char>::operator<<(v13, 355); /*0x634e84*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634e8a*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634e8f*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634e9e*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 2052)); /*0x634eb0*/
      }
      if ( *(_BYTE *)(a1 + 2037) ) /*0x634eb6*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634ebf*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634ec4*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634ed3*/
        fmt::BasicWriter<char>::operator<<(v13, 539); /*0x634ee3*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634ee9*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634eee*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634efd*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 2037)); /*0x634f0f*/
      }
      if ( *(_BYTE *)(a1 + 2029) /*0x634f68*/
        && (*(float *)(a1 + 1628) != *(float *)&xmmword_8F8610
         || *(float *)(a1 + 1632) != *((float *)&xmmword_8F8610 + 1)
         || *(float *)(a1 + 1636) != *((float *)&xmmword_8F8610 + 2)
         || *(_WORD *)(a1 + 1640) != WORD6(xmmword_8F8610)) )
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634f7d*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634f82*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634f91*/
        fmt::BasicWriter<char>::operator<<(v13, 49); /*0x634fa1*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x634fa7*/
        *((_QWORD *)&v11 + 1) = 0; /*0x634fac*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634fbb*/
        v11 = *(_OWORD *)(a1 + 1628); /*0x634fc8*/
        v7 = GameToolbox_saveParticleToString((__int64)v14, (__int64)&v11); /*0x634fd9*/
        v11 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v12, v7); /*0x634ff0*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x634fff*/
        sub_3C310(v14); /*0x63500d*/
      }
      break; /*0x63500d*/
    default:
      break;
  }
  v8 = fmt::BasicWriter<char>::c_str(v13); /*0x635012*/
  *(_OWORD *)a2 = 0; /*0x635020*/
  *(_QWORD *)(a2 + 16) = 0; /*0x635023*/
  *(_QWORD *)(a2 + 24) = 0; /*0x635027*/
  v9 = -1; /*0x63502b*/
  do /*0x635035*/
    ++v9; /*0x635032*/
  while ( *(_BYTE *)(v8 + v9) ); /*0x635035*/
  sub_3C230(a2); /*0x635042*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v13); /*0x63504d*/
  return a2; /*0x635056*/
}

// [3/4] Address: 0x6350a0
// Method: EnterEffectObject::customSetup
char __fastcall EnterEffectObject_customSetup(_DWORD *a1)
{
  char result; // al

  result = EffectGameObject_customSetup((__int64)a1); /*0x6350a9*/
  if ( a1[259] == 3011 || a1[259] == 3012 || a1[259] == 3013 || (unsigned int)(a1[259] - 3014) <= 1 ) /*0x6350c9*/
  {
    a1[465] = -99; /*0x6350d4*/
    a1[466] = -99; /*0x6350de*/
    a1[467] = -99; /*0x6350e8*/
    a1[468] = -99; /*0x6350f2*/
    a1[469] = -99; /*0x6350fc*/
    a1[470] = -99; /*0x635106*/
    a1[498] = -1027211264; /*0x635110*/
    a1[499] = -1027211264; /*0x63511a*/
    a1[508] = -1027211264; /*0x635124*/
    a1[471] = -99; /*0x63512e*/
    a1[472] = -99; /*0x635138*/
    a1[477] = -99; /*0x635142*/
    a1[478] = -99; /*0x63514c*/
    a1[490] = -99; /*0x635156*/
    a1[491] = -99; /*0x635160*/
    a1[492] = -99; /*0x63516a*/
    a1[493] = -99; /*0x635174*/
    a1[473] = -1027211264; /*0x63517e*/
    a1[474] = -1027211264; /*0x635188*/
    a1[475] = -1027211264; /*0x635192*/
    a1[476] = -1027211264; /*0x63519c*/
    a1[503] = -1027211264; /*0x6351a6*/
    a1[504] = -1027211264; /*0x6351b0*/
    a1[500] = -1027211264; /*0x6351ba*/
    a1[501] = -1027211264; /*0x6351c4*/
    a1[505] = -1027211264; /*0x6351ce*/
    a1[506] = -1027211264; /*0x6351d8*/
    a1[483] = -1027211264; /*0x6351e2*/
  }
  return result; /*0x6351ec*/
}

// [4/4] Address: 0x635200
// Method: EnterEffectObject::customObjectSetup
// Hidden C++ exception states: #wind=2
int __fastcall EnterEffectObject_customObjectSetup(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // ebp
  int v7; // eax
  const char *v8; // rcx
  const char *v9; // rcx
  const char *v10; // rcx
  int v11; // eax
  const char *v12; // rcx
  const char *v13; // rcx
  int v14; // eax
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
  float v41; // xmm6_4
  float v42; // xmm1_4
  const char *v43; // rcx
  float v44; // xmm7_4
  int v45; // eax
  const char *v46; // rcx
  float v47; // xmm1_4
  const char *v48; // rcx
  float v49; // xmm8_4
  int v50; // eax
  const char *v51; // rcx
  int v52; // eax
  const char *v53; // rcx
  int v54; // eax
  const char *v55; // rcx
  float v56; // xmm1_4
  const char *v57; // rcx
  float v58; // xmm7_4
  float v59; // xmm1_4
  const char *v60; // rcx
  float v61; // xmm7_4
  float v62; // xmm1_4
  const char *v63; // rcx
  float v64; // xmm7_4
  float v65; // xmm1_4
  const char *v66; // rcx
  float v67; // xmm7_4
  float v68; // xmm1_4
  const char *v69; // rcx
  float v70; // xmm7_4
  int v71; // eax
  const char *v72; // rcx
  int v73; // eax
  const char *v74; // rcx
  int v75; // eax
  const char *v76; // rcx
  int v77; // eax
  const char *v78; // rcx
  int v79; // eax
  const char *v80; // rcx
  int v81; // eax
  const char *v82; // rcx
  int v83; // eax
  const char *v84; // rcx
  int v85; // eax
  const char *v86; // rcx
  float v87; // xmm1_4
  const char *v88; // rcx
  float v89; // xmm7_4
  float v90; // xmm1_4
  const char *v91; // rcx
  float v92; // xmm7_4
  float v93; // xmm1_4
  const char *v94; // rcx
  float v95; // xmm7_4
  float v96; // xmm1_4
  const char *v97; // rcx
  float v98; // xmm7_4
  int v99; // eax
  const char *v100; // rcx
  float v101; // xmm1_4
  const char *v102; // rcx
  float v103; // xmm7_4
  float v104; // xmm1_4
  const char *v105; // rcx
  float v106; // xmm7_4
  float v107; // xmm1_4
  const char *v108; // rcx
  float v109; // xmm7_4
  float v110; // xmm1_4
  const char *v111; // rcx
  float v112; // xmm7_4
  int v113; // eax
  const char *v114; // rcx
  int v115; // eax
  const char *v116; // rcx
  int v117; // eax
  const char *v118; // rcx
  int v119; // eax
  const char *v120; // rcx
  int v121; // eax
  const char *v122; // rcx
  int v123; // eax
  const char *v124; // rcx
  int v125; // ecx
  const char *v126; // rcx
  void **v127; // rax
  char v128; // r14
  void *v129; // rcx
  float v130; // xmm1_4
  const char *v131; // rcx
  float v132; // xmm7_4
  int v133; // eax
  const char *v134; // rcx
  int v135; // eax
  const char *v136; // rcx
  const char *v137; // rcx
  float v138; // xmm7_4
  int v139; // eax
  const char *v140; // rcx
  const char *v141; // rcx
  const char *v142; // rcx
  int v143; // eax
  __int64 v144; // rax
  const char *v145; // rcx
  _BYTE v147[16]; // [rsp+38h] [rbp-D0h] BYREF
  void *Block[2]; // [rsp+48h] [rbp-C0h] BYREF
  __m128i si128; // [rsp+58h] [rbp-B0h]
  _BYTE v150[32]; // [rsp+68h] [rbp-A0h] BYREF

  v6 = 0; /*0x635242*/
  EffectGameObject_customObjectSetup(a1, a2, a3); /*0x635248*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1736LL) ) /*0x635250*/
  {
    v8 = (const char *)(*(_QWORD *)a2 + 6944LL); /*0x635260*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 6968LL) > 0xFu ) /*0x63526c*/
      v8 = *(const char **)v8; /*0x63526e*/
    v7 = atoi(v8); /*0x635271*/
  }
  else
  {
    v7 = 0; /*0x635259*/
  }
  *(_DWORD *)(a1 + 1856) = v7; /*0x635277*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 2752LL) ) /*0x635280*/
  {
    v9 = (const char *)(*(_QWORD *)a2 + 11008LL); /*0x63528c*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 11032LL) > 0xFu ) /*0x635298*/
      v9 = *(const char **)v9; /*0x63529a*/
    if ( atoi(v9) >= 100 ) /*0x6352a6*/
      goto LABEL_18; /*0x6352a6*/
  }
  if ( !*(_QWORD *)(*(_QWORD *)a3 + 2752LL) ) /*0x6352ab*/
    goto LABEL_18; /*0x6352ab*/
  v10 = (const char *)(*(_QWORD *)a2 + 11008LL); /*0x6352b7*/
  if ( *(_QWORD *)(*(_QWORD *)a2 + 11032LL) > 0xFu ) /*0x6352c3*/
    v10 = *(const char **)v10; /*0x6352c5*/
  if ( atoi(v10) >= 0 ) /*0x6352d0*/
  {
LABEL_18:
    if ( !*(_QWORD *)(*(_QWORD *)a3 + 2752LL) ) /*0x6352d9*/
      goto LABEL_356; /*0x6352d9*/
    v12 = (const char *)(*(_QWORD *)a2 + 11008LL); /*0x6352e5*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 11032LL) > 0xFu ) /*0x6352f1*/
      v12 = *(const char **)v12; /*0x6352f3*/
    if ( atoi(v12) >= 100 ) /*0x6352ff*/
    {
      v11 = 100; /*0x635301*/
    }
    else
    {
LABEL_356:
      if ( *(_QWORD *)(*(_QWORD *)a3 + 2752LL) ) /*0x63530b*/
      {
        v13 = (const char *)(*(_QWORD *)a2 + 11008LL); /*0x63531b*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 11032LL) > 0xFu ) /*0x635327*/
          v13 = *(const char **)v13; /*0x635329*/
        v11 = atoi(v13); /*0x63532c*/
      }
      else
      {
        v11 = 0; /*0x635314*/
      }
    }
  }
  else
  {
    v11 = 0; /*0x6352d2*/
  }
  *(_DWORD *)(a1 + 2048) = v11; /*0x635332*/
  v14 = *(_DWORD *)(a1 + 1036); /*0x635338*/
  switch ( v14 ) /*0x635367*/
  {
    case 3006: /*0x635367*/
    case 3007: /*0x635367*/
    case 3008: /*0x635367*/
    case 3009: /*0x635367*/
    case 3010: /*0x635367*/
    case 3011: /*0x635367*/
    case 3012: /*0x635367*/
    case 3013: /*0x635367*/
    case 3014: /*0x635367*/
    case 3015: /*0x635367*/
    case 3017: /*0x635367*/
    case 3018: /*0x635367*/
    case 3019: /*0x635367*/
    case 3020: /*0x635367*/
    case 3021: /*0x635367*/
    case 3023: /*0x635367*/
    case 3024: /*0x635367*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 1776LL) ) /*0x63536c*/
      {
        v16 = (const char *)(*(_QWORD *)a2 + 7104LL); /*0x63537c*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 7128LL) > 0xFu ) /*0x635388*/
          v16 = *(const char **)v16; /*0x63538a*/
        v15 = atoi(v16); /*0x63538d*/
      }
      else
      {
        v15 = 0; /*0x635375*/
      }
      *(_DWORD *)(a1 + 1860) = v15; /*0x635393*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 1784LL) ) /*0x63539c*/
      {
        v18 = (const char *)(*(_QWORD *)a2 + 7136LL); /*0x6353ac*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 7160LL) > 0xFu ) /*0x6353b8*/
          v18 = *(const char **)v18; /*0x6353ba*/
        v17 = atoi(v18); /*0x6353bd*/
      }
      else
      {
        v17 = 0; /*0x6353a5*/
      }
      *(_DWORD *)(a1 + 1864) = v17; /*0x6353c3*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 1760LL) ) /*0x6353cc*/
      {
        v20 = (const char *)(*(_QWORD *)a2 + 7040LL); /*0x6353dc*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 7064LL) > 0xFu ) /*0x6353e8*/
          v20 = *(const char **)v20; /*0x6353ea*/
        v19 = atoi(v20); /*0x6353ed*/
      }
      else
      {
        v19 = 0; /*0x6353d5*/
      }
      *(_DWORD *)(a1 + 1868) = v19; /*0x6353f3*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 1768LL) ) /*0x6353fc*/
      {
        v22 = (const char *)(*(_QWORD *)a2 + 7072LL); /*0x63540c*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 7096LL) > 0xFu ) /*0x635418*/
          v22 = *(const char **)v22; /*0x63541a*/
        v21 = atoi(v22); /*0x63541d*/
      }
      else
      {
        v21 = 0; /*0x635405*/
      }
      *(_DWORD *)(a1 + 1872) = v21; /*0x635423*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 2016LL) ) /*0x63542c*/
      {
        v24 = (const char *)(*(_QWORD *)a2 + 8064LL); /*0x63543c*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 8088LL) > 0xFu ) /*0x635448*/
          v24 = *(const char **)v24; /*0x63544a*/
        v23 = atoi(v24); /*0x63544d*/
      }
      else
      {
        v23 = 0; /*0x635435*/
      }
      *(_DWORD *)(a1 + 1876) = v23; /*0x635453*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 2024LL) ) /*0x63545c*/
      {
        v26 = (const char *)(*(_QWORD *)a2 + 8096LL); /*0x63546c*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 8120LL) > 0xFu ) /*0x635478*/
          v26 = *(const char **)v26; /*0x63547a*/
        v25 = atoi(v26); /*0x63547d*/
      }
      else
      {
        v25 = 0; /*0x635465*/
      }
      *(_DWORD *)(a1 + 1880) = v25; /*0x635483*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 1744LL) ) /*0x63548c*/
      {
        v28 = (const char *)(*(_QWORD *)a2 + 6976LL); /*0x63549c*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 7000LL) > 0xFu ) /*0x6354a8*/
          v28 = *(const char **)v28; /*0x6354aa*/
        v27 = atoi(v28); /*0x6354ad*/
      }
      else
      {
        v27 = 0; /*0x635495*/
      }
      *(_DWORD *)(a1 + 1884) = v27; /*0x6354b3*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 1752LL) ) /*0x6354bc*/
      {
        v30 = (const char *)(*(_QWORD *)a2 + 7008LL); /*0x6354cc*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 7032LL) > 0xFu ) /*0x6354d8*/
          v30 = *(const char **)v30; /*0x6354da*/
        v29 = atoi(v30); /*0x6354dd*/
      }
      else
      {
        v29 = 0; /*0x6354c5*/
      }
      *(_DWORD *)(a1 + 1888) = v29; /*0x6354e3*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 1896LL) ) /*0x6354ec*/
      {
        v32 = (const char *)(*(_QWORD *)a2 + 7584LL); /*0x6354fc*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 7608LL) > 0xFu ) /*0x635508*/
          v32 = *(const char **)v32; /*0x63550a*/
        v31 = atoi(v32); /*0x63550d*/
      }
      else
      {
        v31 = 0; /*0x6354f5*/
      }
      *(_DWORD *)(a1 + 1960) = v31; /*0x635513*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 1904LL) ) /*0x63551c*/
      {
        v34 = (const char *)(*(_QWORD *)a2 + 7616LL); /*0x63552c*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 7640LL) > 0xFu ) /*0x635538*/
          v34 = *(const char **)v34; /*0x63553a*/
        v33 = atoi(v34); /*0x63553d*/
      }
      else
      {
        v33 = 0; /*0x635525*/
      }
      *(_DWORD *)(a1 + 1964) = v33; /*0x635543*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 1912LL) ) /*0x63554c*/
      {
        v36 = (const char *)(*(_QWORD *)a2 + 7648LL); /*0x63555c*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 7672LL) > 0xFu ) /*0x635568*/
          v36 = *(const char **)v36; /*0x63556a*/
        v35 = atoi(v36); /*0x63556d*/
      }
      else
      {
        v35 = 0; /*0x635555*/
      }
      *(_DWORD *)(a1 + 1968) = v35; /*0x635573*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 1920LL) ) /*0x63557c*/
      {
        v38 = (const char *)(*(_QWORD *)a2 + 7680LL); /*0x63558c*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 7704LL) > 0xFu ) /*0x635598*/
          v38 = *(const char **)v38; /*0x63559a*/
        v37 = atoi(v38); /*0x63559d*/
      }
      else
      {
        v37 = 0; /*0x635585*/
      }
      *(_DWORD *)(a1 + 1972) = v37; /*0x6355a3*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 1936LL) ) /*0x6355ac*/
      {
        v40 = (const char *)(*(_QWORD *)a2 + 7744LL); /*0x6355bc*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 7768LL) > 0xFu ) /*0x6355c8*/
          v40 = *(const char **)v40; /*0x6355ca*/
        v39 = atoi(v40); /*0x6355cd*/
      }
      else
      {
        v39 = 0; /*0x6355b5*/
      }
      *(_DWORD *)(a1 + 1936) = v39; /*0x6355d3*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 1944LL) ) /*0x6355ee*/
      {
        v43 = (const char *)(*(_QWORD *)a2 + 7776LL); /*0x635602*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 7800LL) > 0xFu ) /*0x63560e*/
          v43 = *(const char **)v43; /*0x635610*/
        v44 = atof(v43); /*0x63561c*/
        v41 = 0.0; /*0x635629*/
        if ( isnan(v44) ) /*0x635623*/
          v42 = 0.0; /*0x635630*/
        else
          v42 = fminf(1000000000.0, fmaxf(-1000000000.0, v44)); /*0x635641*/
      }
      else
      {
        v41 = 0.0; /*0x6355f7*/
        v42 = 0.0; /*0x6355fa*/
      }
      *(float *)(a1 + 1940) = (float)(int)(float)(v42 * 100.0) / 100.0; /*0x635660*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 1984LL) ) /*0x63566b*/
      {
        v46 = (const char *)(*(_QWORD *)a2 + 7936LL); /*0x63567b*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 7960LL) > 0xFu ) /*0x635687*/
          v46 = *(const char **)v46; /*0x635689*/
        v45 = atoi(v46); /*0x63568c*/
      }
      else
      {
        v45 = 0; /*0x635674*/
      }
      *(_DWORD *)(a1 + 1948) = v45; /*0x635692*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 1992LL) ) /*0x63569b*/
      {
        v48 = (const char *)(*(_QWORD *)a2 + 7968LL); /*0x6356ac*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 7992LL) > 0xFu ) /*0x6356b8*/
          v48 = *(const char **)v48; /*0x6356ba*/
        v49 = atof(v48); /*0x6356c7*/
        if ( isnan(v49) ) /*0x6356d0*/
          v47 = 0.0; /*0x6356da*/
        else
          v47 = fminf(1000000000.0, fmaxf(-1000000000.0, v49)); /*0x6356ec*/
      }
      else
      {
        v47 = 0.0; /*0x6356a4*/
      }
      *(float *)(a1 + 1952) = (float)(int)(float)(v47 * 100.0) / 100.0; /*0x635703*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 1848LL) ) /*0x63570e*/
      {
        v51 = (const char *)(*(_QWORD *)a2 + 7392LL); /*0x63571e*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 7416LL) > 0xFu ) /*0x63572a*/
          v51 = *(const char **)v51; /*0x63572c*/
        v50 = atoi(v51); /*0x63572f*/
      }
      else
      {
        v50 = 0; /*0x635717*/
      }
      *(_DWORD *)(a1 + 1908) = v50; /*0x635735*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 1856LL) ) /*0x63573e*/
      {
        v53 = (const char *)(*(_QWORD *)a2 + 7424LL); /*0x63574e*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 7448LL) > 0xFu ) /*0x63575a*/
          v53 = *(const char **)v53; /*0x63575c*/
        v52 = atoi(v53); /*0x63575f*/
      }
      else
      {
        v52 = 0; /*0x635747*/
      }
      *(_DWORD *)(a1 + 1912) = v52; /*0x635765*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 2296LL) ) /*0x63576e*/
      {
        v55 = (const char *)(*(_QWORD *)a2 + 9184LL); /*0x63577e*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 9208LL) > 0xFu ) /*0x63578a*/
          v55 = *(const char **)v55; /*0x63578c*/
        v54 = atoi(v55); /*0x63578f*/
      }
      else
      {
        v54 = 0; /*0x635777*/
      }
      *(_BYTE *)(a1 + 1928) = v54 != 0; /*0x63579a*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 2304LL) ) /*0x6357a3*/
      {
        v57 = (const char *)(*(_QWORD *)a2 + 9216LL); /*0x6357b4*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 9240LL) > 0xFu ) /*0x6357c0*/
          v57 = *(const char **)v57; /*0x6357c2*/
        v58 = atof(v57); /*0x6357ce*/
        if ( isnan(v58) ) /*0x6357d5*/
          v56 = 0.0; /*0x6357df*/
        else
          v56 = fminf(1000000000.0, fmaxf(-1000000000.0, v58)); /*0x6357f0*/
      }
      else
      {
        v56 = 0.0; /*0x6357ac*/
      }
      *(float *)(a1 + 1932) = v56; /*0x6357f4*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 1864LL) ) /*0x6357ff*/
      {
        v60 = (const char *)(*(_QWORD *)a2 + 7456LL); /*0x635810*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 7480LL) > 0xFu ) /*0x63581c*/
          v60 = *(const char **)v60; /*0x63581e*/
        v61 = atof(v60); /*0x63582a*/
        if ( isnan(v61) ) /*0x635831*/
          v59 = 0.0; /*0x63583b*/
        else
          v59 = fminf(1000000000.0, fmaxf(-1000000000.0, v61)); /*0x63584c*/
      }
      else
      {
        v59 = 0.0; /*0x635808*/
      }
      *(float *)(a1 + 1892) = v59; /*0x635850*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 1872LL) ) /*0x63585b*/
      {
        v63 = (const char *)(*(_QWORD *)a2 + 7488LL); /*0x63586c*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 7512LL) > 0xFu ) /*0x635878*/
          v63 = *(const char **)v63; /*0x63587a*/
        v64 = atof(v63); /*0x635886*/
        if ( isnan(v64) ) /*0x63588d*/
          v62 = 0.0; /*0x635897*/
        else
          v62 = fminf(1000000000.0, fmaxf(-1000000000.0, v64)); /*0x6358a8*/
      }
      else
      {
        v62 = 0.0; /*0x635864*/
      }
      *(float *)(a1 + 1896) = v62; /*0x6358ac*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 1880LL) ) /*0x6358b7*/
      {
        v66 = (const char *)(*(_QWORD *)a2 + 7520LL); /*0x6358c8*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 7544LL) > 0xFu ) /*0x6358d4*/
          v66 = *(const char **)v66; /*0x6358d6*/
        v67 = atof(v66); /*0x6358e2*/
        if ( isnan(v67) ) /*0x6358e9*/
          v65 = 0.0; /*0x6358f3*/
        else
          v65 = fminf(1000000000.0, fmaxf(-1000000000.0, v67)); /*0x635904*/
      }
      else
      {
        v65 = 0.0; /*0x6358c0*/
      }
      *(float *)(a1 + 1900) = v65; /*0x635908*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 1888LL) ) /*0x635913*/
      {
        v69 = (const char *)(*(_QWORD *)a2 + 7552LL); /*0x635924*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 7576LL) > 0xFu ) /*0x635930*/
          v69 = *(const char **)v69; /*0x635932*/
        v70 = atof(v69); /*0x63593e*/
        if ( isnan(v70) ) /*0x635945*/
          v68 = 0.0; /*0x63594f*/
        else
          v68 = fminf(1000000000.0, fmaxf(-1000000000.0, v70)); /*0x635960*/
      }
      else
      {
        v68 = 0.0; /*0x63591c*/
      }
      *(float *)(a1 + 1904) = v68; /*0x635964*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 2080LL) ) /*0x63596f*/
      {
        v72 = (const char *)(*(_QWORD *)a2 + 8320LL); /*0x63597f*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 8344LL) > 0xFu ) /*0x63598b*/
          v72 = *(const char **)v72; /*0x63598d*/
        v71 = atoi(v72); /*0x635990*/
      }
      else
      {
        v71 = 0; /*0x635978*/
      }
      *(_DWORD *)(a1 + 1976) = v71; /*0x635996*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 1792LL) ) /*0x63599f*/
      {
        v74 = (const char *)(*(_QWORD *)a2 + 7168LL); /*0x6359af*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 7192LL) > 0xFu ) /*0x6359bb*/
          v74 = *(const char **)v74; /*0x6359bd*/
        v73 = atoi(v74); /*0x6359c0*/
      }
      else
      {
        v73 = 0; /*0x6359a8*/
      }
      *(_DWORD *)(a1 + 1980) = v73; /*0x6359c6*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 2096LL) ) /*0x6359cf*/
      {
        v76 = (const char *)(*(_QWORD *)a2 + 8384LL); /*0x6359df*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 8408LL) > 0xFu ) /*0x6359eb*/
          v76 = *(const char **)v76; /*0x6359ed*/
        v75 = atoi(v76); /*0x6359f0*/
      }
      else
      {
        v75 = 0; /*0x6359d8*/
      }
      *(_DWORD *)(a1 + 1984) = v75; /*0x6359f6*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 408LL) ) /*0x6359ff*/
      {
        v78 = (const char *)(*(_QWORD *)a2 + 1632LL); /*0x635a0f*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 1656LL) > 0xFu ) /*0x635a1b*/
          v78 = *(const char **)v78; /*0x635a1d*/
        v77 = atoi(v78); /*0x635a20*/
      }
      else
      {
        v77 = 0; /*0x635a08*/
      }
      *(_DWORD *)(a1 + 1480) = v77; /*0x635a26*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 568LL) ) /*0x635a2f*/
      {
        v80 = (const char *)(*(_QWORD *)a2 + 2272LL); /*0x635a3f*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 2296LL) > 0xFu ) /*0x635a4b*/
          v80 = *(const char **)v80; /*0x635a4d*/
        v79 = atoi(v80); /*0x635a50*/
      }
      else
      {
        v79 = 0; /*0x635a38*/
      }
      *(_DWORD *)(a1 + 1484) = v79; /*0x635a56*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 4304LL) ) /*0x635a5f*/
      {
        v82 = (const char *)(*(_QWORD *)a2 + 17216LL); /*0x635a6f*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 17240LL) > 0xFu ) /*0x635a7b*/
          v82 = *(const char **)v82; /*0x635a7d*/
        v81 = atoi(v82); /*0x635a80*/
      }
      else
      {
        v81 = 0; /*0x635a68*/
      }
      *(_DWORD *)(a1 + 1556) = v81; /*0x635a86*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 1928LL) ) /*0x635a8f*/
      {
        v84 = (const char *)(*(_QWORD *)a2 + 7712LL); /*0x635a9f*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 7736LL) > 0xFu ) /*0x635aab*/
          v84 = *(const char **)v84; /*0x635aad*/
        v83 = atoi(v84); /*0x635ab0*/
      }
      else
      {
        v83 = 0; /*0x635a98*/
      }
      *(_BYTE *)(a1 + 1988) = v83 != 0; /*0x635abb*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 2088LL) ) /*0x635ac4*/
      {
        v86 = (const char *)(*(_QWORD *)a2 + 8352LL); /*0x635ad4*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 8376LL) > 0xFu ) /*0x635ae0*/
          v86 = *(const char **)v86; /*0x635ae2*/
        v85 = atoi(v86); /*0x635ae5*/
      }
      else
      {
        v85 = 0; /*0x635acd*/
      }
      *(_BYTE *)(a1 + 1989) = v85 != 0; /*0x635af0*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 2104LL) ) /*0x635af9*/
      {
        v88 = (const char *)(*(_QWORD *)a2 + 8416LL); /*0x635b0a*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 8440LL) > 0xFu ) /*0x635b16*/
          v88 = *(const char **)v88; /*0x635b18*/
        v89 = atof(v88); /*0x635b24*/
        if ( isnan(v89) ) /*0x635b2b*/
          v87 = 0.0; /*0x635b35*/
        else
          v87 = fminf(1000000000.0, fmaxf(-1000000000.0, v89)); /*0x635b46*/
      }
      else
      {
        v87 = 0.0; /*0x635b02*/
      }
      *(float *)(a1 + 1992) = v87; /*0x635b4a*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 2112LL) ) /*0x635b55*/
      {
        v91 = (const char *)(*(_QWORD *)a2 + 8448LL); /*0x635b66*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 8472LL) > 0xFu ) /*0x635b72*/
          v91 = *(const char **)v91; /*0x635b74*/
        v92 = atof(v91); /*0x635b80*/
        if ( isnan(v92) ) /*0x635b87*/
          v90 = 0.0; /*0x635b91*/
        else
          v90 = fminf(1000000000.0, fmaxf(-1000000000.0, v92)); /*0x635ba2*/
      }
      else
      {
        v90 = 0.0; /*0x635b5e*/
      }
      *(float *)(a1 + 1996) = v90; /*0x635ba6*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 2120LL) ) /*0x635bb1*/
      {
        v94 = (const char *)(*(_QWORD *)a2 + 8480LL); /*0x635bc2*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 8504LL) > 0xFu ) /*0x635bce*/
          v94 = *(const char **)v94; /*0x635bd0*/
        v95 = atof(v94); /*0x635bdc*/
        if ( isnan(v95) ) /*0x635be3*/
          v93 = 0.0; /*0x635bed*/
        else
          v93 = fminf(1000000000.0, fmaxf(-1000000000.0, v95)); /*0x635bfe*/
      }
      else
      {
        v93 = 0.0; /*0x635bba*/
      }
      *(float *)(a1 + 2000) = v93; /*0x635c02*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 2280LL) ) /*0x635c0d*/
      {
        v97 = (const char *)(*(_QWORD *)a2 + 9120LL); /*0x635c1e*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 9144LL) > 0xFu ) /*0x635c2a*/
          v97 = *(const char **)v97; /*0x635c2c*/
        v98 = atof(v97); /*0x635c38*/
        if ( isnan(v98) ) /*0x635c3f*/
          v96 = 0.0; /*0x635c49*/
        else
          v96 = fminf(1000000000.0, fmaxf(-1000000000.0, v98)); /*0x635c5a*/
      }
      else
      {
        v96 = 0.0; /*0x635c16*/
      }
      *(float *)(a1 + 2004) = v96; /*0x635c5e*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 1800LL) ) /*0x635c69*/
      {
        v100 = (const char *)(*(_QWORD *)a2 + 7200LL); /*0x635c79*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 7224LL) > 0xFu ) /*0x635c85*/
          v100 = *(const char **)v100; /*0x635c87*/
        v99 = atoi(v100); /*0x635c8a*/
      }
      else
      {
        v99 = 0; /*0x635c72*/
      }
      *(_DWORD *)(a1 + 2008) = v99; /*0x635c90*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 2160LL) ) /*0x635c99*/
      {
        v102 = (const char *)(*(_QWORD *)a2 + 8640LL); /*0x635caa*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 8664LL) > 0xFu ) /*0x635cb6*/
          v102 = *(const char **)v102; /*0x635cb8*/
        v103 = atof(v102); /*0x635cc4*/
        if ( isnan(v103) ) /*0x635ccb*/
          v101 = 0.0; /*0x635cd5*/
        else
          v101 = fminf(1000000000.0, fmaxf(-1000000000.0, v103)); /*0x635ce6*/
      }
      else
      {
        v101 = 0.0; /*0x635ca2*/
      }
      *(float *)(a1 + 2012) = v101; /*0x635cea*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 2168LL) ) /*0x635cf5*/
      {
        v105 = (const char *)(*(_QWORD *)a2 + 8672LL); /*0x635d06*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 8696LL) > 0xFu ) /*0x635d12*/
          v105 = *(const char **)v105; /*0x635d14*/
        v106 = atof(v105); /*0x635d20*/
        if ( isnan(v106) ) /*0x635d27*/
          v104 = 0.0; /*0x635d31*/
        else
          v104 = fminf(1000000000.0, fmaxf(-1000000000.0, v106)); /*0x635d42*/
      }
      else
      {
        v104 = 0.0; /*0x635cfe*/
      }
      *(float *)(a1 + 2016) = v104; /*0x635d46*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 2200LL) ) /*0x635d51*/
      {
        v108 = (const char *)(*(_QWORD *)a2 + 8800LL); /*0x635d62*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 8824LL) > 0xFu ) /*0x635d6e*/
          v108 = *(const char **)v108; /*0x635d70*/
        v109 = atof(v108); /*0x635d7c*/
        if ( isnan(v109) ) /*0x635d83*/
          v107 = 0.0; /*0x635d8d*/
        else
          v107 = fminf(1000000000.0, fmaxf(-1000000000.0, v109)); /*0x635d9e*/
      }
      else
      {
        v107 = 0.0; /*0x635d5a*/
      }
      *(float *)(a1 + 2020) = v107; /*0x635da2*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 2288LL) ) /*0x635dad*/
      {
        v111 = (const char *)(*(_QWORD *)a2 + 9152LL); /*0x635dbe*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 9176LL) > 0xFu ) /*0x635dca*/
          v111 = *(const char **)v111; /*0x635dcc*/
        v112 = atof(v111); /*0x635dd8*/
        if ( isnan(v112) ) /*0x635ddf*/
          v110 = 0.0; /*0x635de9*/
        else
          v110 = fminf(1000000000.0, fmaxf(-1000000000.0, v112)); /*0x635dfa*/
      }
      else
      {
        v110 = 0.0; /*0x635db6*/
      }
      *(float *)(a1 + 2024) = v110; /*0x635dfe*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 2208LL) ) /*0x635e09*/
      {
        v114 = (const char *)(*(_QWORD *)a2 + 8832LL); /*0x635e19*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 8856LL) > 0xFu ) /*0x635e25*/
          v114 = *(const char **)v114; /*0x635e27*/
        v113 = atoi(v114); /*0x635e2a*/
      }
      else
      {
        v113 = 0; /*0x635e12*/
      }
      *(_BYTE *)(a1 + 2028) = v113 != 0; /*0x635e35*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 1104LL) ) /*0x635e3e*/
      {
        v116 = (const char *)(*(_QWORD *)a2 + 4416LL); /*0x635e4e*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 4440LL) > 0xFu ) /*0x635e5a*/
          v116 = *(const char **)v116; /*0x635e5c*/
        v115 = atoi(v116); /*0x635e5f*/
      }
      else
      {
        v115 = 0; /*0x635e47*/
      }
      *(_BYTE *)(a1 + 1700) = v115 != 0; /*0x635e6a*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 1600LL) ) /*0x635e73*/
      {
        v118 = (const char *)(*(_QWORD *)a2 + 6400LL); /*0x635e83*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 6424LL) > 0xFu ) /*0x635e8f*/
          v118 = *(const char **)v118; /*0x635e91*/
        v117 = atoi(v118); /*0x635e94*/
      }
      else
      {
        v117 = 0; /*0x635e7c*/
      }
      *(_BYTE *)(a1 + 1701) = v117 != 0; /*0x635e9f*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 1608LL) ) /*0x635ea8*/
      {
        v120 = (const char *)(*(_QWORD *)a2 + 6432LL); /*0x635eb8*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 6456LL) > 0xFu ) /*0x635ec4*/
          v120 = *(const char **)v120; /*0x635ec6*/
        v119 = atoi(v120); /*0x635ec9*/
      }
      else
      {
        v119 = 0; /*0x635eb1*/
      }
      *(_BYTE *)(a1 + 1702) = v119 != 0; /*0x635ed4*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 520LL) ) /*0x635edd*/
      {
        v122 = (const char *)(*(_QWORD *)a2 + 2080LL); /*0x635eed*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 2104LL) > 0xFu ) /*0x635ef9*/
          v122 = *(const char **)v122; /*0x635efb*/
        v121 = atoi(v122); /*0x635efe*/
      }
      else
      {
        v121 = 0; /*0x635ee6*/
      }
      *(_BYTE *)(a1 + 1649) = v121 != 0; /*0x635f09*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 528LL) ) /*0x635f12*/
      {
        v124 = (const char *)(*(_QWORD *)a2 + 2112LL); /*0x635f22*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 2136LL) > 0xFu ) /*0x635f2e*/
          v124 = *(const char **)v124; /*0x635f30*/
        v123 = atoi(v124); /*0x635f33*/
      }
      else
      {
        v123 = 0; /*0x635f1b*/
      }
      *(_BYTE *)(a1 + 1650) = v123 != 0; /*0x635f3e*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 2224LL) ) /*0x635f47*/
      {
        v126 = (const char *)(*(_QWORD *)a2 + 8896LL); /*0x635f57*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 8920LL) > 0xFu ) /*0x635f63*/
          v126 = *(const char **)v126; /*0x635f65*/
        v125 = atoi(v126); /*0x635f6e*/
      }
      else
      {
        v125 = 0; /*0x635f50*/
      }
      *(_BYTE *)(a1 + 2029) = v125 != 0; /*0x635f75*/
      if ( v125 ) /*0x635f7d*/
      {
        if ( *(_QWORD *)(*(_QWORD *)a3 + 392LL) ) /*0x635f86*/
        {
          sub_3E4F0(v150, *(_QWORD *)a2 + 1568LL); /*0x635fc6*/
          v128 = 2; /*0x635fcc*/
        }
        else
        {
          *(_OWORD *)Block = 0; /*0x635f92*/
          si128 = _mm_load_si128((const __m128i *)&Size); /*0x635f9f*/
          LOBYTE(Block[0]) = 0; /*0x635fa5*/
          v127 = Block; /*0x635faa*/
          v128 = 1; /*0x635faf*/
        }
        *(_OWORD *)(a1 + 1628) = *(_OWORD *)sub_6E590(v147, v127); /*0x635fe7*/
        if ( (v128 & 2) != 0 ) /*0x635ff2*/
        {
          v128 &= ~2u; /*0x635ff4*/
          sub_3C310(v150); /*0x635ffd*/
        }
        if ( (v128 & 1) != 0 && si128.m128i_i64[1] > 0xFuLL ) /*0x636012*/
        {
          v129 = Block[0]; /*0x636017*/
          if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x636026*/
          {
            v129 = (void *)*((_QWORD *)Block[0] - 1); /*0x63602c*/
            if ( (unsigned __int64)((char *)Block[0] - (char *)v129 - 8) > 0x1F ) /*0x63603b*/
              invoke_watson(0, 0, 0, 0, 0); /*0x63604c*/
          }
          j_j_free(v129); /*0x636053*/
        }
      }
      if ( *(_QWORD *)(*(_QWORD *)a3 + 2256LL) ) /*0x63605b*/
      {
        v131 = (const char *)(*(_QWORD *)a2 + 9024LL); /*0x63606d*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 9048LL) > 0xFu ) /*0x636079*/
          v131 = *(const char **)v131; /*0x63607b*/
        v132 = atof(v131); /*0x636087*/
        if ( isnan(v132) ) /*0x63608e*/
          v130 = 0.0; /*0x636098*/
        else
          v130 = fminf(1000000000.0, fmaxf(-1000000000.0, v132)); /*0x6360a9*/
      }
      else
      {
        v130 = 0.0; /*0x636065*/
      }
      *(float *)(a1 + 2032) = v130; /*0x6360ad*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 2264LL) ) /*0x6360b8*/
      {
        v134 = (const char *)(*(_QWORD *)a2 + 9056LL); /*0x6360c9*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 9080LL) > 0xFu ) /*0x6360d5*/
          v134 = *(const char **)v134; /*0x6360d7*/
        v133 = atoi(v134); /*0x6360da*/
      }
      else
      {
        v133 = 0; /*0x6360c2*/
      }
      *(_BYTE *)(a1 + 2036) = v133 != 0; /*0x6360e5*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 2728LL) ) /*0x6360ee*/
      {
        v136 = (const char *)(*(_QWORD *)a2 + 10912LL); /*0x6360ff*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 10936LL) > 0xFu ) /*0x63610b*/
          v136 = *(const char **)v136; /*0x63610d*/
        v135 = atoi(v136); /*0x636110*/
      }
      else
      {
        v135 = 0; /*0x6360f8*/
      }
      *(_DWORD *)(a1 + 2040) = v135; /*0x636116*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 80LL) ) /*0x63611f*/
      {
        v137 = (const char *)(*(_QWORD *)a2 + 320LL); /*0x636129*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 344LL) > 0xFu ) /*0x636135*/
          v137 = *(const char **)v137; /*0x636137*/
        v138 = atof(v137); /*0x636143*/
        if ( !isnan(v138) ) /*0x63614a*/
          v41 = fminf(1000000000.0, fmaxf(-1000000000.0, v138)); /*0x63615d*/
      }
      *(float *)(a1 + 1468) = v41; /*0x636162*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 2840LL) ) /*0x63616d*/
      {
        v140 = (const char *)(*(_QWORD *)a2 + 11360LL); /*0x63617e*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 11384LL) > 0xFu ) /*0x63618a*/
          v140 = *(const char **)v140; /*0x63618c*/
        v139 = atoi(v140); /*0x63618f*/
      }
      else
      {
        v139 = 0; /*0x636177*/
      }
      *(_BYTE *)(a1 + 2052) = v139 != 0; /*0x63619a*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 4312LL) ) /*0x6361a3*/
      {
        v141 = (const char *)(*(_QWORD *)a2 + 17248LL); /*0x6361b0*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 17272LL) > 0xFu ) /*0x6361bc*/
          v141 = *(const char **)v141; /*0x6361be*/
        v6 = atoi(v141); /*0x6361c7*/
      }
      *(_BYTE *)(a1 + 2037) = v6 != 0; /*0x6361ce*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 1808LL) ) /*0x6361d7*/
      {
        v142 = (const char *)(*(_QWORD *)a2 + 7232LL); /*0x6361e4*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 7256LL) > 0xFu ) /*0x6361f0*/
          v142 = *(const char **)v142; /*0x6361f2*/
        v143 = atoi(v142); /*0x6361f5*/
        if ( v143 ) /*0x6361fd*/
          *(_DWORD *)(a1 + 1480) = v143; /*0x6361ff*/
      }
      v144 = *(_QWORD *)a3; /*0x636205*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 2736LL) ) /*0x636208*/
      {
        v145 = (const char *)(*(_QWORD *)a2 + 10944LL); /*0x636215*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 10968LL) > 0xFu ) /*0x636221*/
          v145 = *(const char **)v145; /*0x636223*/
        LODWORD(v144) = atoi(v145); /*0x636226*/
        if ( (_DWORD)v144 ) /*0x63622e*/
        {
          if ( (int)v144 >= 0 ) /*0x636230*/
            *(_DWORD *)(a1 + 1484) = v144; /*0x63623a*/
          else
            *(_DWORD *)(a1 + 1556) = v144; /*0x636232*/
        }
      }
      break; /*0x636238*/
    default:
      LODWORD(v144) = v14 - 3006; /*0xf1c0000000000004*/
      break; /*0xf1c0000000000004*/
  }
  return v144; /*0x636240*/
}
