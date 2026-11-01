#include <Geode/binding/AudioLineGuideGameObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x65d2c0
// Method: AudioLineGuideGameObject::init
char __fastcall AudioLineGuideGameObject_init(__int64 a1)
{
  *(_DWORD *)(a1 + 28) = 13; /*0x65d2cd*/
  if ( !cocos2d::CCSprite::initWithSpriteFrameName((cocos2d::CCSprite *)a1, "edit_eBPMBtn_001.png") ) /*0x65d2d7*/
    return 0; /*0x65d323*/
  sub_287800(a1); /*0x65d2e4*/
  *(_BYTE *)(a1 + 313) = 0; /*0x65d2e9*/
  *(_DWORD *)(a1 + 1256) = 1; /*0x65d2f2*/
  *(_WORD *)(a1 + 1465) = -1; /*0x65d2fc*/
  *(_BYTE *)(a1 + 1467) = -1; /*0x65d305*/
  *(_BYTE *)(a1 + 1652) = 1; /*0x65d30c*/
  *(_DWORD *)(a1 + 1468) = 1114636288; /*0x65d313*/
  return 1; /*0x65d31d*/
}

// [2/2] Address: 0x65d330
// Method: AudioLineGuideGameObject::getSaveString
// Hidden C++ exception states: #wind=2
__int64 __fastcall AudioLineGuideGameObject_getSaveString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SaveString; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v11[16]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[40]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v13[528]; // [rsp+70h] [rbp-90h] BYREF

  *(_QWORD *)&v10 = a2; /*0x65d360*/
  fmt::BasicWriter<char>::BasicWriter<char>(v13); /*0x65d36d*/
  SaveString = EffectGameObject_getSaveString(a1, (__int64)v12, a3); /*0x65d37f*/
  v10 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v11, SaveString); /*0x65d396*/
  fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65d3a5*/
  sub_3C310(v12); /*0x65d3b1*/
  if ( *(_DWORD *)(a1 + 1856) ) /*0x65d3bd*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65d3c6*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65d3cb*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65d3da*/
    fmt::BasicWriter<char>::operator<<(v13, 498); /*0x65d3ea*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65d3f0*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65d3f5*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65d404*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1856)); /*0x65d415*/
  }
  if ( *(_DWORD *)(a1 + 1860) ) /*0x65d41b*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65d424*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65d429*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65d438*/
    fmt::BasicWriter<char>::operator<<(v13, 501); /*0x65d448*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65d44e*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65d453*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65d462*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1860)); /*0x65d473*/
  }
  if ( *(_DWORD *)(a1 + 1864) ) /*0x65d479*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65d482*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65d487*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65d496*/
    fmt::BasicWriter<char>::operator<<(v13, 499); /*0x65d4a6*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65d4ac*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65d4b1*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65d4c0*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1864)); /*0x65d4d1*/
  }
  if ( *(_BYTE *)(a1 + 1868) ) /*0x65d4d7*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65d4e0*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65d4e5*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65d4f4*/
    fmt::BasicWriter<char>::operator<<(v13, 500); /*0x65d504*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65d50a*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65d50f*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65d51e*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1868)); /*0x65d530*/
  }
  if ( *(float *)(a1 + 1468) != 0.0 ) /*0x65d546*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65d548*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65d54d*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65d55c*/
    fmt::BasicWriter<char>::operator<<(v13, 10); /*0x65d56c*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65d572*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65d577*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65d586*/
    fmt::BasicWriter<char>::operator<<(v13); /*0x65d59c*/
  }
  v7 = fmt::BasicWriter<char>::c_str(v13); /*0x65d5a7*/
  *(_OWORD *)a2 = 0; /*0x65d5b0*/
  *(_QWORD *)(a2 + 16) = 0; /*0x65d5b3*/
  *(_QWORD *)(a2 + 24) = 0; /*0x65d5b7*/
  v8 = -1; /*0x65d5bb*/
  do /*0x65d5c5*/
    ++v8; /*0x65d5c2*/
  while ( *(_BYTE *)(v7 + v8) ); /*0x65d5c5*/
  sub_3C230(a2); /*0x65d5d2*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v13); /*0x65d5dd*/
  return a2; /*0x65d5e6*/
}
