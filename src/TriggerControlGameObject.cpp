#include <Geode/binding/TriggerControlGameObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x633880
// Method: TriggerControlGameObject::~TriggerControlGameObject
cocos2d::CCSprite *__fastcall TriggerControlGameObject__dtor_TriggerControlGameObject(
        cocos2d::CCSprite *Block,
        char a2)
{
  sub_3C310((char *)Block + 1856); /*0x633896*/
  *(_QWORD *)Block = &EffectGameObject::`vftable'; /*0x6338a5*/
  *((_QWORD *)Block + 40) = &EffectGameObject::`vftable'; /*0x6338af*/
  *((_QWORD *)Block + 43) = &EffectGameObject::`vftable'; /*0x6338bd*/
  TextGameObject__dtor_TextGameObject(Block); /*0x6338c4*/
  if ( (a2 & 1) != 0 ) /*0x6338cc*/
    j_j_free(Block); /*0x6338d6*/
  return Block; /*0x6338db*/
}

// [2/4] Address: 0x65f260
// Method: TriggerControlGameObject::getSaveString
__int64 __fastcall TriggerControlGameObject_getSaveString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SaveString; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v11[16]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[40]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v13[528]; // [rsp+70h] [rbp-90h] BYREF

  *(_QWORD *)&v10 = a2; /*0x65f290*/
  fmt::BasicWriter<char>::BasicWriter<char>(v13); /*0x65f29d*/
  SaveString = EffectGameObject_getSaveString(a1, (__int64)v12, a3); /*0x65f2af*/
  v10 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v11, SaveString); /*0x65f2c6*/
  fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65f2d5*/
  sub_3C310(v12); /*0x65f2e1*/
  if ( *(_DWORD *)(a1 + 1480) ) /*0x65f2ed*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65f2f6*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65f2fb*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65f30a*/
    fmt::BasicWriter<char>::operator<<(v13, 51); /*0x65f31a*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65f320*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65f325*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65f334*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1480)); /*0x65f345*/
  }
  if ( *(_BYTE *)(a1 + 1692) ) /*0x65f34b*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65f354*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65f359*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65f368*/
    fmt::BasicWriter<char>::operator<<(v13, 535); /*0x65f378*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65f37e*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65f383*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65f392*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1692)); /*0x65f3a4*/
  }
  if ( *(_DWORD *)(a1 + 1888) ) /*0x65f3aa*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65f3b3*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65f3b8*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65f3c7*/
    fmt::BasicWriter<char>::operator<<(v13, 580); /*0x65f3d7*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65f3dd*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65f3e2*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65f3f1*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1888)); /*0x65f402*/
  }
  v7 = fmt::BasicWriter<char>::c_str(v13); /*0x65f40d*/
  *(_OWORD *)a2 = 0; /*0x65f416*/
  *(_QWORD *)(a2 + 16) = 0; /*0x65f419*/
  *(_QWORD *)(a2 + 24) = 0; /*0x65f41d*/
  v8 = -1; /*0x65f421*/
  do /*0x65f433*/
    ++v8; /*0x65f430*/
  while ( *(_BYTE *)(v7 + v8) ); /*0x65f433*/
  sub_3C230(a2); /*0x65f440*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v13); /*0x65f44b*/
  return a2; /*0x65f454*/
}

// [3/4] Address: 0x65f480
// Method: TriggerControlGameObject::customObjectSetup
void __fastcall TriggerControlGameObject_customObjectSetup(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // ebx
  int v7; // eax
  const char *v8; // rcx
  int v9; // ecx
  int v10; // eax
  const char *v11; // rcx
  const char *v12; // rcx

  EffectGameObject_customObjectSetup(a1, a2, a3); /*0x65f49e*/
  if ( !*(_QWORD *)(*(_QWORD *)a3 + 408LL) ) /*0x65f4a6*/
  {
    v6 = 0; /*0x65f4b0*/
    v7 = 0; /*0x65f4b2*/
LABEL_8:
    v9 = v7; /*0x65f4e0*/
    goto LABEL_9; /*0x65f4e0*/
  }
  v8 = (const char *)(*(_QWORD *)a2 + 1632LL); /*0x65f4b9*/
  if ( *(_QWORD *)(*(_QWORD *)a2 + 1656LL) > 0xFu ) /*0x65f4c5*/
    v8 = *(const char **)v8; /*0x65f4c7*/
  v7 = atoi(v8); /*0x65f4ca*/
  v6 = 0; /*0x65f4d0*/
  v9 = 9999; /*0x65f4d2*/
  if ( v7 < 0 ) /*0x65f4d9*/
    v7 = 0; /*0x65f4d9*/
  if ( v7 <= 9999 ) /*0x65f4de*/
    goto LABEL_8; /*0x65f4de*/
LABEL_9:
  *(_DWORD *)(a1 + 1480) = v9; /*0x65f4e2*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4280LL) ) /*0x65f4eb*/
  {
    v11 = (const char *)(*(_QWORD *)a2 + 17120LL); /*0x65f4fc*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 17144LL) > 0xFu ) /*0x65f508*/
      v11 = *(const char **)v11; /*0x65f50a*/
    v10 = atoi(v11); /*0x65f50d*/
  }
  else
  {
    v10 = 0; /*0x65f4f5*/
  }
  *(_BYTE *)(a1 + 1692) = v10 != 0; /*0x65f518*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4640LL) ) /*0x65f521*/
  {
    v12 = (const char *)(*(_QWORD *)a2 + 18560LL); /*0x65f52e*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 18584LL) > 0xFu ) /*0x65f53a*/
      v12 = *(const char **)v12; /*0x65f53c*/
    v6 = atoi(v12); /*0x65f545*/
  }
  *(_DWORD *)(a1 + 1888) = v6; /*0x65f54a*/
  GameLevelManager_updateLevelOrders((__int64 *)a1); /*0x65f565*/
}

// [4/4] Address: 0x65f570
// Method: TriggerControlGameObject::triggerObject
char __fastcall TriggerControlGameObject_triggerObject(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v4; // rdx

  v2 = *(unsigned int *)(a1 + 1888); /*0x65f570*/
  v4 = *(unsigned int *)(a1 + 1480); /*0x65f57a*/
  if ( *(_BYTE *)(a1 + 1692) ) /*0x65f580*/
    return sub_3225D0(a2, v4, v2); /*0x65f58a*/
  else
    return GJBaseGameLayer_controlTriggersInGroup(a2, v4, v2); /*0x65f590*/
}
