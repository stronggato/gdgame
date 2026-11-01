#include <Geode/binding/ProgressGameObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x65edd0
// Method: ProgressGameObject::init
char __fastcall ProgressGameObject_init(__int64 a1)
{
  *(_DWORD *)(a1 + 28) = 13; /*0x65eddd*/
  if ( !cocos2d::CCSprite::initWithSpriteFrameName((cocos2d::CCSprite *)a1, "edit_eProgressBtn_001.png") ) /*0x65ede7*/
    return 0; /*0x65ee33*/
  sub_287800(a1); /*0x65edf4*/
  *(_BYTE *)(a1 + 313) = 0; /*0x65edf9*/
  *(_DWORD *)(a1 + 1256) = 1; /*0x65ee02*/
  *(_WORD *)(a1 + 1465) = -1; /*0x65ee0c*/
  *(_BYTE *)(a1 + 1467) = -1; /*0x65ee15*/
  *(_DWORD *)(a1 + 1468) = 1056964608; /*0x65ee1c*/
  *(_BYTE *)(a1 + 1652) = 1; /*0x65ee26*/
  return 1; /*0x65ee2d*/
}

// [2/3] Address: 0x65ee40
// Method: ProgressGameObject::getSaveString
// Hidden C++ exception states: #wind=2
__int64 __fastcall ProgressGameObject_getSaveString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SaveString; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v11[16]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[40]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v13[528]; // [rsp+70h] [rbp-90h] BYREF

  *(_QWORD *)&v10 = a2; /*0x65ee70*/
  fmt::BasicWriter<char>::BasicWriter<char>(v13); /*0x65ee7d*/
  SaveString = EffectGameObject_getSaveString(a1, (__int64)v12, a3); /*0x65ee8f*/
  v10 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v11, SaveString); /*0x65eea6*/
  fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65eeb5*/
  sub_3C310(v12); /*0x65eec1*/
  if ( *(_DWORD *)(a1 + 1856) ) /*0x65eecd*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65eed6*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65eedb*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65eeea*/
    fmt::BasicWriter<char>::operator<<(v13, 602); /*0x65eefa*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65ef00*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65ef05*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65ef14*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1856)); /*0x65ef25*/
  }
  if ( *(_BYTE *)(a1 + 1860) ) /*0x65ef2b*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65ef34*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65ef39*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65ef48*/
    fmt::BasicWriter<char>::operator<<(v13, 603); /*0x65ef58*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65ef5e*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65ef63*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65ef72*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1860)); /*0x65ef84*/
  }
  if ( *(_BYTE *)(a1 + 1861) ) /*0x65ef8a*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65ef93*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65ef98*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65efa7*/
    fmt::BasicWriter<char>::operator<<(v13, 605); /*0x65efb7*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65efbd*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65efc2*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65efd1*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1861)); /*0x65efe3*/
  }
  if ( *(_DWORD *)(a1 + 1696) ) /*0x65efe9*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65eff2*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65eff7*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65f006*/
    fmt::BasicWriter<char>::operator<<(v13, 80); /*0x65f016*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65f01c*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65f021*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65f030*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1696)); /*0x65f041*/
  }
  if ( *(_DWORD *)(a1 + 1684) ) /*0x65f047*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65f050*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65f055*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65f064*/
    fmt::BasicWriter<char>::operator<<(v13, 95); /*0x65f074*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65f07a*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65f07f*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65f08e*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1684)); /*0x65f09f*/
  }
  v7 = fmt::BasicWriter<char>::c_str(v13); /*0x65f0aa*/
  *(_OWORD *)a2 = 0; /*0x65f0b3*/
  *(_QWORD *)(a2 + 16) = 0; /*0x65f0b6*/
  *(_QWORD *)(a2 + 24) = 0; /*0x65f0ba*/
  v8 = -1; /*0x65f0be*/
  do /*0x65f0c8*/
    ++v8; /*0x65f0c5*/
  while ( *(_BYTE *)(v7 + v8) ); /*0x65f0c8*/
  sub_3C230(a2); /*0x65f0d5*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v13); /*0x65f0e0*/
  return a2; /*0x65f0e9*/
}

// [3/3] Address: 0x65f110
// Method: ProgressGameObject::customObjectSetup
int __fastcall ProgressGameObject_customObjectSetup(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  const char *v7; // rcx
  int v8; // eax
  const char *v9; // rcx
  int v10; // eax
  const char *v11; // rcx
  int v12; // eax
  const char *v13; // rcx
  __int64 v14; // rax
  const char *v15; // rcx

  EffectGameObject_customObjectSetup(a1, a2, a3); /*0x65f128*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4816LL) ) /*0x65f130*/
  {
    v7 = (const char *)(*(_QWORD *)a2 + 19264LL); /*0x65f141*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 19288LL) > 0xFu ) /*0x65f14d*/
      v7 = *(const char **)v7; /*0x65f14f*/
    v6 = atoi(v7); /*0x65f152*/
  }
  else
  {
    v6 = 0; /*0x65f13a*/
  }
  *(_DWORD *)(a1 + 1856) = v6; /*0x65f158*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4824LL) ) /*0x65f161*/
  {
    v9 = (const char *)(*(_QWORD *)a2 + 19296LL); /*0x65f172*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 19320LL) > 0xFu ) /*0x65f17e*/
      v9 = *(const char **)v9; /*0x65f180*/
    v8 = atoi(v9); /*0x65f183*/
  }
  else
  {
    v8 = 0; /*0x65f16b*/
  }
  *(_BYTE *)(a1 + 1860) = v8 != 0; /*0x65f18e*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4840LL) ) /*0x65f197*/
  {
    v11 = (const char *)(*(_QWORD *)a2 + 19360LL); /*0x65f1a8*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 19384LL) > 0xFu ) /*0x65f1b4*/
      v11 = *(const char **)v11; /*0x65f1b6*/
    v10 = atoi(v11); /*0x65f1b9*/
  }
  else
  {
    v10 = 0; /*0x65f1a1*/
  }
  *(_BYTE *)(a1 + 1861) = v10 != 0; /*0x65f1c4*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 640LL) ) /*0x65f1cd*/
  {
    v13 = (const char *)(*(_QWORD *)a2 + 2560LL); /*0x65f1de*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 2584LL) > 0xFu ) /*0x65f1ea*/
      v13 = *(const char **)v13; /*0x65f1ec*/
    v12 = atoi(v13); /*0x65f1ef*/
  }
  else
  {
    v12 = 0; /*0x65f1d7*/
  }
  *(_DWORD *)(a1 + 1696) = v12; /*0x65f1f5*/
  v14 = *(_QWORD *)a3; /*0x65f1fb*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 760LL) ) /*0x65f1fe*/
  {
    v15 = (const char *)(*(_QWORD *)a2 + 3040LL); /*0x65f225*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 3064LL) > 0xFu ) /*0x65f231*/
      v15 = *(const char **)v15; /*0x65f233*/
    LODWORD(v14) = atoi(v15); /*0x65f236*/
    *(_DWORD *)(a1 + 1684) = v14; /*0x65f241*/
  }
  else
  {
    *(_DWORD *)(a1 + 1684) = 0; /*0x65f208*/
  }
  return v14; /*0x65f212*/
}
