#include <Geode/binding/SongTriggerGameObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x633720
// Method: SongTriggerGameObject::~SongTriggerGameObject
cocos2d::CCSprite *__fastcall SongTriggerGameObject__dtor_SongTriggerGameObject(cocos2d::CCSprite *Block, char a2)
{
  *(_QWORD *)Block = &SongTriggerGameObject::`vftable'; /*0x633733*/
  *((_QWORD *)Block + 40) = &SongTriggerGameObject::`vftable'; /*0x633740*/
  *((_QWORD *)Block + 43) = &SongTriggerGameObject::`vftable'; /*0x63374e*/
  SFXTriggerGameObject__dtor_SFXTriggerGameObject(Block); /*0x633755*/
  if ( (a2 & 1) != 0 ) /*0x63375d*/
    j_j_free(Block); /*0x633767*/
  return Block; /*0x63376c*/
}

// [2/3] Address: 0x654890
// Method: SongTriggerGameObject::getSaveString
// Hidden C++ exception states: #wind=2
__int64 __fastcall SongTriggerGameObject_getSaveString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SaveString; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v11[16]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[40]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v13[528]; // [rsp+70h] [rbp-90h] BYREF

  *(_QWORD *)&v10 = a2; /*0x6548c0*/
  fmt::BasicWriter<char>::BasicWriter<char>(v13); /*0x6548cd*/
  SaveString = SFXTriggerGameObject_getSaveString(a1, (__int64)v12, a3); /*0x6548df*/
  v10 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v11, SaveString); /*0x6548f6*/
  fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x654905*/
  sub_3C310(v12); /*0x654911*/
  if ( *(_BYTE *)(a1 + 2057) ) /*0x65491d*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x654926*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65492b*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65493a*/
    fmt::BasicWriter<char>::operator<<(v13, 399); /*0x65494a*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x654950*/
    *((_QWORD *)&v10 + 1) = 0; /*0x654955*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x654964*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 2057)); /*0x654976*/
  }
  if ( *(_BYTE *)(a1 + 2058) ) /*0x65497c*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x654985*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65498a*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x654999*/
    fmt::BasicWriter<char>::operator<<(v13, 400); /*0x6549a9*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6549af*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6549b4*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x6549c3*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 2058)); /*0x6549d5*/
  }
  if ( *(_DWORD *)(a1 + 2060) ) /*0x6549db*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x6549e4*/
    *((_QWORD *)&v10 + 1) = 0; /*0x6549e9*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x6549f8*/
    fmt::BasicWriter<char>::operator<<(v13, 432); /*0x654a08*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x654a0e*/
    *((_QWORD *)&v10 + 1) = 0; /*0x654a13*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x654a22*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 2060)); /*0x654a33*/
  }
  v7 = fmt::BasicWriter<char>::c_str(v13); /*0x654a3e*/
  *(_OWORD *)a2 = 0; /*0x654a47*/
  *(_QWORD *)(a2 + 16) = 0; /*0x654a4a*/
  *(_QWORD *)(a2 + 24) = 0; /*0x654a4e*/
  v8 = -1; /*0x654a52*/
  do /*0x654a63*/
    ++v8; /*0x654a60*/
  while ( *(_BYTE *)(v7 + v8) ); /*0x654a63*/
  sub_3C230(a2); /*0x654a70*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v13); /*0x654a7b*/
  return a2; /*0x654a84*/
}

// [3/3] Address: 0x654ab0
// Method: SongTriggerGameObject::customObjectSetup
int __fastcall SongTriggerGameObject_customObjectSetup(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  const char *v7; // rcx
  int v8; // eax
  const char *v9; // rcx
  __int64 v10; // rax
  const char *v11; // rcx

  SFXTriggerGameObject_customObjectSetup(a1, a2, a3); /*0x654ac8*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3192LL) ) /*0x654ad0*/
  {
    v7 = (const char *)(*(_QWORD *)a2 + 12768LL); /*0x654ae1*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 12792LL) > 0xFu ) /*0x654aed*/
      v7 = *(const char **)v7; /*0x654aef*/
    v6 = atoi(v7); /*0x654af2*/
  }
  else
  {
    v6 = 0; /*0x654ada*/
  }
  *(_BYTE *)(a1 + 2057) = v6 != 0; /*0x654afd*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3200LL) ) /*0x654b06*/
  {
    v9 = (const char *)(*(_QWORD *)a2 + 12800LL); /*0x654b17*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 12824LL) > 0xFu ) /*0x654b23*/
      v9 = *(const char **)v9; /*0x654b25*/
    v8 = atoi(v9); /*0x654b28*/
  }
  else
  {
    v8 = 0; /*0x654b10*/
  }
  *(_BYTE *)(a1 + 2058) = v8 != 0; /*0x654b33*/
  v10 = *(_QWORD *)a3; /*0x654b39*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3456LL) ) /*0x654b3c*/
  {
    v11 = (const char *)(*(_QWORD *)a2 + 13824LL); /*0x654b63*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 13848LL) > 0xFu ) /*0x654b6f*/
      v11 = *(const char **)v11; /*0x654b71*/
    LODWORD(v10) = atoi(v11); /*0x654b74*/
    *(_DWORD *)(a1 + 2060) = v10; /*0x654b7f*/
  }
  else
  {
    *(_DWORD *)(a1 + 2060) = 0; /*0x654b46*/
  }
  return v10; /*0x654b50*/
}
