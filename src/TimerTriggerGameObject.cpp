#include <Geode/binding/TimerTriggerGameObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x633820
// Method: TimerTriggerGameObject::~TimerTriggerGameObject
cocos2d::CCSprite *__fastcall TimerTriggerGameObject__dtor_TimerTriggerGameObject(cocos2d::CCSprite *Block, char a2)
{
  *(_QWORD *)Block = &EffectGameObject::`vftable'; /*0x633833*/
  *((_QWORD *)Block + 40) = &EffectGameObject::`vftable'; /*0x633840*/
  *((_QWORD *)Block + 43) = &EffectGameObject::`vftable'; /*0x63384e*/
  TextGameObject__dtor_TextGameObject(Block); /*0x633855*/
  if ( (a2 & 1) != 0 ) /*0x63385d*/
    j_j_free(Block); /*0x633867*/
  return Block; /*0x63386c*/
}

// [2/4] Address: 0x65b280
// Method: TimerTriggerGameObject::triggerObject
// Hidden C++ exception states: #wind=2
void __fastcall TimerTriggerGameObject_triggerObject(__int64 a1, _QWORD *a2, unsigned int a3, __int64 a4)
{
  void **v6; // rax
  char v7; // bl
  void *v8; // rcx
  void *Block[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-28h]
  _BYTE v11[32]; // [rsp+48h] [rbp-20h] BYREF

  if ( *(_DWORD *)(a1 + 1036) == 3614 || *(_DWORD *)(a1 + 1036) == 3615 || *(_DWORD *)(a1 + 1036) == 3617 ) /*0x65b2b7*/
  {
    if ( a4 ) /*0x65b2d3*/
    {
      v6 = (void **)sub_18A9D0(v11, a4); /*0x65b2dd*/
      v7 = 1; /*0x65b2e3*/
    }
    else
    {
      *(_OWORD *)Block = 0; /*0x65b2ed*/
      v10 = 0; /*0x65b2f3*/
      v6 = Block; /*0x65b2fc*/
      v7 = 2; /*0x65b301*/
    }
    GJBaseGameLayer_activateTimerTrigger((__int64)a2, a1, (__int64)v6); /*0x65b313*/
    if ( (v7 & 2) != 0 ) /*0x65b31c*/
    {
      v7 &= ~2u; /*0x65b31e*/
      v8 = Block[0]; /*0x65b321*/
      if ( Block[0] ) /*0x65b329*/
      {
        if ( ((v10 - (unsigned __int64)Block[0]) & 0xFFFFFFFFFFFFFFFCuLL) >= 0x1000 ) /*0x65b341*/
        {
          v8 = (void *)*((_QWORD *)Block[0] - 1); /*0x65b347*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F ) /*0x65b356*/
            invoke_watson(0, 0, 0, 0, 0); /*0x65b36b*/
        }
        j_j_free(v8); /*0x65b372*/
      }
    }
    if ( (v7 & 1) != 0 ) /*0x65b37b*/
      sub_685C0(v11); /*0x65b382*/
  }
  else
  {
    EffectGameObject_triggerObject(a1, a2, a3, a4); /*0x65b2cb*/
  }
}

// [3/4] Address: 0x65b3a0
// Method: TimerTriggerGameObject::getSaveString
// Hidden C++ exception states: #wind=2
__int64 __fastcall TimerTriggerGameObject_getSaveString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SaveString; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r8
  __int128 v12; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v13[24]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v14[528]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v15[32]; // [rsp+260h] [rbp+160h] BYREF

  *(_QWORD *)&v12 = a2; /*0x65b3d8*/
  fmt::BasicWriter<char>::BasicWriter<char>(v14); /*0x65b3e5*/
  SaveString = EffectGameObject_getSaveString(a1, (__int64)v15, a3); /*0x65b3f9*/
  v12 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v13, SaveString); /*0x65b410*/
  fmt::BasicWriter<char>::operator<<(v14, &v12); /*0x65b41f*/
  sub_3C310(v15); /*0x65b42d*/
  if ( *(_DWORD *)(a1 + 1696) ) /*0x65b439*/
  {
    *(_QWORD *)&v12 = &unk_709CE8; /*0x65b442*/
    *((_QWORD *)&v12 + 1) = 0; /*0x65b447*/
    fmt::BasicWriter<char>::operator<<(v14, &v12); /*0x65b456*/
    fmt::BasicWriter<char>::operator<<(v14, 80); /*0x65b466*/
    *(_QWORD *)&v12 = &unk_709CE8; /*0x65b46c*/
    *((_QWORD *)&v12 + 1) = 0; /*0x65b471*/
    fmt::BasicWriter<char>::operator<<(v14, &v12); /*0x65b480*/
    fmt::BasicWriter<char>::operator<<(v14, *(unsigned int *)(a1 + 1696)); /*0x65b491*/
  }
  if ( *(_DWORD *)(a1 + 1036) == 3614 ) /*0x65b4a3*/
  {
    if ( *(double *)(a1 + 1856) != 0.0 ) /*0x65b5eb*/
    {
      *(_QWORD *)&v12 = &unk_709CE8; /*0x65b5ed*/
      *((_QWORD *)&v12 + 1) = 0; /*0x65b5f2*/
      fmt::BasicWriter<char>::operator<<(v14, &v12); /*0x65b601*/
      fmt::BasicWriter<char>::operator<<(v14, 467); /*0x65b611*/
      *(_QWORD *)&v12 = &unk_709CE8; /*0x65b617*/
      *((_QWORD *)&v12 + 1) = 0; /*0x65b61c*/
      fmt::BasicWriter<char>::operator<<(v14, &v12); /*0x65b62b*/
      fmt::BasicWriter<char>::operator<<(v14); /*0x65b63e*/
    }
    if ( *(double *)(a1 + 1864) != 0.0 ) /*0x65b652*/
    {
      *(_QWORD *)&v12 = &unk_709CE8; /*0x65b654*/
      *((_QWORD *)&v12 + 1) = 0; /*0x65b659*/
      fmt::BasicWriter<char>::operator<<(v14, &v12); /*0x65b668*/
      fmt::BasicWriter<char>::operator<<(v14, 473); /*0x65b678*/
      *(_QWORD *)&v12 = &unk_709CE8; /*0x65b67e*/
      *((_QWORD *)&v12 + 1) = 0; /*0x65b683*/
      fmt::BasicWriter<char>::operator<<(v14, &v12); /*0x65b692*/
      fmt::BasicWriter<char>::operator<<(v14); /*0x65b6a5*/
    }
    if ( *(_BYTE *)(a1 + 1872) ) /*0x65b6ab*/
    {
      *(_QWORD *)&v12 = &unk_709CE8; /*0x65b6b4*/
      *((_QWORD *)&v12 + 1) = 0; /*0x65b6b9*/
      fmt::BasicWriter<char>::operator<<(v14, &v12); /*0x65b6c8*/
      fmt::BasicWriter<char>::operator<<(v14, 474); /*0x65b6d8*/
      *(_QWORD *)&v12 = &unk_709CE8; /*0x65b6de*/
      *((_QWORD *)&v12 + 1) = 0; /*0x65b6e3*/
      fmt::BasicWriter<char>::operator<<(v14, &v12); /*0x65b6f2*/
      fmt::BasicWriter<char>::operator<<(v14, *(unsigned __int8 *)(a1 + 1872)); /*0x65b704*/
    }
    if ( *(_BYTE *)(a1 + 1873) ) /*0x65b70a*/
    {
      *(_QWORD *)&v12 = &unk_709CE8; /*0x65b713*/
      *((_QWORD *)&v12 + 1) = 0; /*0x65b718*/
      fmt::BasicWriter<char>::operator<<(v14, &v12); /*0x65b727*/
      fmt::BasicWriter<char>::operator<<(v14, 468); /*0x65b737*/
      *(_QWORD *)&v12 = &unk_709CE8; /*0x65b73d*/
      *((_QWORD *)&v12 + 1) = 0; /*0x65b742*/
      fmt::BasicWriter<char>::operator<<(v14, &v12); /*0x65b751*/
      fmt::BasicWriter<char>::operator<<(v14, *(unsigned __int8 *)(a1 + 1873)); /*0x65b763*/
    }
    if ( *(_BYTE *)(a1 + 1874) ) /*0x65b769*/
    {
      *(_QWORD *)&v12 = &unk_709CE8; /*0x65b772*/
      *((_QWORD *)&v12 + 1) = 0; /*0x65b777*/
      fmt::BasicWriter<char>::operator<<(v14, &v12); /*0x65b786*/
      fmt::BasicWriter<char>::operator<<(v14, 469); /*0x65b796*/
      *(_QWORD *)&v12 = &unk_709CE8; /*0x65b79c*/
      *((_QWORD *)&v12 + 1) = 0; /*0x65b7a1*/
      fmt::BasicWriter<char>::operator<<(v14, &v12); /*0x65b7b0*/
      fmt::BasicWriter<char>::operator<<(v14, *(unsigned __int8 *)(a1 + 1874)); /*0x65b7c2*/
    }
    if ( *(float *)(a1 + 1876) != 0.0 ) /*0x65b7d8*/
    {
      *(_QWORD *)&v12 = &unk_709CE8; /*0x65b7da*/
      *((_QWORD *)&v12 + 1) = 0; /*0x65b7df*/
      fmt::BasicWriter<char>::operator<<(v14, &v12); /*0x65b7ee*/
      fmt::BasicWriter<char>::operator<<(v14, 470); /*0x65b7fe*/
      *(_QWORD *)&v12 = &unk_709CE8; /*0x65b804*/
      *((_QWORD *)&v12 + 1) = 0; /*0x65b809*/
      fmt::BasicWriter<char>::operator<<(v14, &v12); /*0x65b818*/
      fmt::BasicWriter<char>::operator<<(v14); /*0x65b82e*/
    }
    if ( *(_BYTE *)(a1 + 1880) ) /*0x65b834*/
    {
      *(_QWORD *)&v12 = &unk_709CE8; /*0x65b83d*/
      *((_QWORD *)&v12 + 1) = 0; /*0x65b842*/
      fmt::BasicWriter<char>::operator<<(v14, &v12); /*0x65b851*/
      fmt::BasicWriter<char>::operator<<(v14, 471); /*0x65b861*/
      *(_QWORD *)&v12 = &unk_709CE8; /*0x65b867*/
      *((_QWORD *)&v12 + 1) = 0; /*0x65b86c*/
      fmt::BasicWriter<char>::operator<<(v14, &v12); /*0x65b87b*/
      v8 = *(unsigned __int8 *)(a1 + 1880); /*0x65b881*/
      goto LABEL_26; /*0x65b881*/
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 1036) != 3615 ) /*0x65b4ac*/
    {
      if ( *(_DWORD *)(a1 + 1036) == 3617 && *(_DWORD *)(a1 + 1884) ) /*0x65b4b7*/
      {
        *(_QWORD *)&v12 = &unk_709CE8; /*0x65b4c4*/
        *((_QWORD *)&v12 + 1) = 0; /*0x65b4c9*/
        fmt::BasicWriter<char>::operator<<(v14, &v12); /*0x65b4d8*/
        fmt::BasicWriter<char>::operator<<(v14, 472); /*0x65b4e8*/
        *(_QWORD *)&v12 = &unk_709CE8; /*0x65b4ee*/
        *((_QWORD *)&v12 + 1) = 0; /*0x65b4f3*/
        fmt::BasicWriter<char>::operator<<(v14, &v12); /*0x65b502*/
        v7 = *(unsigned int *)(a1 + 1884); /*0x65b508*/
LABEL_29:
        fmt::BasicWriter<char>::operator<<(v14, v7); /*0x65b8e6*/
        goto LABEL_30; /*0x65b8eb*/
      }
      goto LABEL_30; /*0x65b4be*/
    }
    if ( *(double *)(a1 + 1864) != 0.0 ) /*0x65b524*/
    {
      *(_QWORD *)&v12 = &unk_709CE8; /*0x65b526*/
      *((_QWORD *)&v12 + 1) = 0; /*0x65b52b*/
      fmt::BasicWriter<char>::operator<<(v14, &v12); /*0x65b53a*/
      fmt::BasicWriter<char>::operator<<(v14, 473); /*0x65b54a*/
      *(_QWORD *)&v12 = &unk_709CE8; /*0x65b550*/
      *((_QWORD *)&v12 + 1) = 0; /*0x65b555*/
      fmt::BasicWriter<char>::operator<<(v14, &v12); /*0x65b564*/
      fmt::BasicWriter<char>::operator<<(v14); /*0x65b577*/
    }
    if ( *(_BYTE *)(a1 + 1881) ) /*0x65b57d*/
    {
      *(_QWORD *)&v12 = &unk_709CE8; /*0x65b58a*/
      *((_QWORD *)&v12 + 1) = 0; /*0x65b58f*/
      fmt::BasicWriter<char>::operator<<(v14, &v12); /*0x65b59e*/
      fmt::BasicWriter<char>::operator<<(v14, 475); /*0x65b5ae*/
      *(_QWORD *)&v12 = &unk_709CE8; /*0x65b5b4*/
      *((_QWORD *)&v12 + 1) = 0; /*0x65b5b9*/
      fmt::BasicWriter<char>::operator<<(v14, &v12); /*0x65b5c8*/
      v8 = *(unsigned __int8 *)(a1 + 1881); /*0x65b5ce*/
LABEL_26:
      fmt::BasicWriter<char>::operator<<(v14, v8); /*0x65b888*/
    }
  }
  if ( *(_DWORD *)(a1 + 1480) ) /*0x65b893*/
  {
    *(_QWORD *)&v12 = &unk_709CE8; /*0x65b89c*/
    *((_QWORD *)&v12 + 1) = 0; /*0x65b8a1*/
    fmt::BasicWriter<char>::operator<<(v14, &v12); /*0x65b8b0*/
    fmt::BasicWriter<char>::operator<<(v14, 51); /*0x65b8c0*/
    *(_QWORD *)&v12 = &unk_709CE8; /*0x65b8c6*/
    *((_QWORD *)&v12 + 1) = 0; /*0x65b8cb*/
    fmt::BasicWriter<char>::operator<<(v14, &v12); /*0x65b8da*/
    v7 = *(unsigned int *)(a1 + 1480); /*0x65b8e0*/
    goto LABEL_29; /*0x65b8e0*/
  }
LABEL_30:
  v9 = fmt::BasicWriter<char>::c_str(v14); /*0x65b8f1*/
  *(_OWORD *)a2 = 0; /*0x65b8ff*/
  *(_QWORD *)(a2 + 16) = 0; /*0x65b902*/
  *(_QWORD *)(a2 + 24) = 0; /*0x65b906*/
  v10 = -1; /*0x65b90a*/
  do /*0x65b914*/
    ++v10; /*0x65b911*/
  while ( *(_BYTE *)(v9 + v10) ); /*0x65b914*/
  sub_3C230(a2); /*0x65b921*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v14); /*0x65b92c*/
  return a2; /*0x65b935*/
}

// [4/4] Address: 0x65b960
// Method: TimerTriggerGameObject::customObjectSetup
int __fastcall TimerTriggerGameObject_customObjectSetup(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // edi
  __int64 v7; // rax
  const char *v8; // rcx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  const char *v12; // rcx
  float v13; // xmm1_4
  const char *v14; // rcx
  float v15; // xmm6_4
  const char *v16; // rcx
  float v17; // xmm6_4
  float v18; // xmm1_4
  const char *v19; // rcx
  float v20; // xmm8_4
  float v21; // xmm1_4
  const char *v22; // rcx
  float v23; // xmm8_4
  int v24; // eax
  const char *v25; // rcx
  int v26; // eax
  const char *v27; // rcx
  int v28; // eax
  const char *v29; // rcx
  const char *v30; // rcx
  float v31; // xmm8_4
  int v32; // eax
  const char *v33; // rcx
  const char *v34; // rcx

  EffectGameObject_customObjectSetup(a1, a2, a3); /*0x65b97e*/
  v6 = 0; /*0x65b986*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 640LL) ) /*0x65b988*/
  {
    v8 = (const char *)(*(_QWORD *)a2 + 2560LL); /*0x65b998*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 2584LL) > 0xFu ) /*0x65b9a4*/
      v8 = *(const char **)v8; /*0x65b9a6*/
    LODWORD(v7) = atoi(v8); /*0x65b9a9*/
  }
  else
  {
    LODWORD(v7) = 0; /*0x65b991*/
  }
  v9 = *(_DWORD *)(a1 + 1036); /*0x65b9af*/
  *(_DWORD *)(a1 + 1696) = v7; /*0x65b9ba*/
  v10 = v9 - 3614; /*0x65b9c0*/
  if ( v10 ) /*0x65b9c6*/
  {
    v11 = v10 - 1; /*0x65b9cc*/
    if ( v11 ) /*0x65b9cf*/
    {
      if ( v11 == 2 ) /*0x65b9d4*/
      {
        v7 = *(_QWORD *)a3; /*0x65b9da*/
        if ( *(_QWORD *)(*(_QWORD *)a3 + 3776LL) ) /*0x65b9dd*/
        {
          v12 = (const char *)(*(_QWORD *)a2 + 15104LL); /*0x65b9e9*/
          if ( *(_QWORD *)(*(_QWORD *)a2 + 15128LL) > 0xFu ) /*0x65b9f5*/
            v12 = *(const char **)v12; /*0x65b9f7*/
          LODWORD(v7) = atoi(v12); /*0x65b9fa*/
          v6 = v7; /*0x65ba00*/
        }
        *(_DWORD *)(a1 + 1884) = v6; /*0x65ba02*/
      }
      return v7; /*0x65ba08*/
    }
    if ( *(_QWORD *)(*(_QWORD *)a3 + 3784LL) ) /*0x65ba10*/
    {
      v14 = (const char *)(*(_QWORD *)a2 + 15136LL); /*0x65ba21*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 15160LL) > 0xFu ) /*0x65ba2d*/
        v14 = *(const char **)v14; /*0x65ba2f*/
      v15 = atof(v14); /*0x65ba3b*/
      if ( isnan(v15) ) /*0x65ba42*/
        v13 = 0.0; /*0x65ba4c*/
      else
        v13 = fminf(1000000000.0, fmaxf(-1000000000.0, v15)); /*0x65ba65*/
    }
    else
    {
      v13 = 0.0; /*0x65ba19*/
    }
    *(double *)(a1 + 1864) = v13; /*0x65ba6c*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 3800LL) ) /*0x65ba77*/
    {
      v16 = (const char *)(*(_QWORD *)a2 + 15200LL); /*0x65ba95*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 15224LL) > 0xFu ) /*0x65baa1*/
        v16 = *(const char **)v16; /*0x65baa3*/
      *(_BYTE *)(a1 + 1881) = atoi(v16) != 0; /*0x65bab1*/
    }
    else
    {
      *(_BYTE *)(a1 + 1881) = 0; /*0x65ba87*/
    }
  }
  else
  {
    if ( *(_QWORD *)(*(_QWORD *)a3 + 3736LL) ) /*0x65bad2*/
    {
      v19 = (const char *)(*(_QWORD *)a2 + 14944LL); /*0x65bae6*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 14968LL) > 0xFu ) /*0x65baf2*/
        v19 = *(const char **)v19; /*0x65baf4*/
      v20 = atof(v19); /*0x65bb01*/
      v17 = 0.0; /*0x65bb10*/
      if ( isnan(v20) ) /*0x65bb0a*/
        v18 = 0.0; /*0x65bb17*/
      else
        v18 = fminf(1000000000.0, fmaxf(-1000000000.0, v20)); /*0x65bb2c*/
    }
    else
    {
      v17 = 0.0; /*0x65badb*/
      v18 = 0.0; /*0x65bade*/
    }
    *(double *)(a1 + 1856) = v18; /*0x65bb33*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 3784LL) ) /*0x65bb3e*/
    {
      v22 = (const char *)(*(_QWORD *)a2 + 15136LL); /*0x65bb4f*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 15160LL) > 0xFu ) /*0x65bb5b*/
        v22 = *(const char **)v22; /*0x65bb5d*/
      v23 = atof(v22); /*0x65bb6a*/
      if ( isnan(v23) ) /*0x65bb73*/
        v21 = 0.0; /*0x65bb7d*/
      else
        v21 = fminf(1000000000.0, fmaxf(-1000000000.0, v23)); /*0x65bb92*/
    }
    else
    {
      v21 = 0.0; /*0x65bb47*/
    }
    *(double *)(a1 + 1864) = v21; /*0x65bb99*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 3792LL) ) /*0x65bba4*/
    {
      v25 = (const char *)(*(_QWORD *)a2 + 15168LL); /*0x65bbb4*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 15192LL) > 0xFu ) /*0x65bbc0*/
        v25 = *(const char **)v25; /*0x65bbc2*/
      v24 = atoi(v25); /*0x65bbc5*/
    }
    else
    {
      v24 = 0; /*0x65bbad*/
    }
    *(_BYTE *)(a1 + 1872) = v24 != 0; /*0x65bbd0*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 3744LL) ) /*0x65bbd9*/
    {
      v27 = (const char *)(*(_QWORD *)a2 + 14976LL); /*0x65bbe9*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 15000LL) > 0xFu ) /*0x65bbf5*/
        v27 = *(const char **)v27; /*0x65bbf7*/
      v26 = atoi(v27); /*0x65bbfa*/
    }
    else
    {
      v26 = 0; /*0x65bbe2*/
    }
    *(_BYTE *)(a1 + 1873) = v26 != 0; /*0x65bc05*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 3752LL) ) /*0x65bc0e*/
    {
      v29 = (const char *)(*(_QWORD *)a2 + 15008LL); /*0x65bc1e*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 15032LL) > 0xFu ) /*0x65bc2a*/
        v29 = *(const char **)v29; /*0x65bc2c*/
      v28 = atoi(v29); /*0x65bc2f*/
    }
    else
    {
      v28 = 0; /*0x65bc17*/
    }
    *(_BYTE *)(a1 + 1874) = v28 != 0; /*0x65bc3a*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 3760LL) ) /*0x65bc43*/
    {
      v30 = (const char *)(*(_QWORD *)a2 + 15040LL); /*0x65bc4f*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 15064LL) > 0xFu ) /*0x65bc5b*/
        v30 = *(const char **)v30; /*0x65bc5d*/
      v31 = atof(v30); /*0x65bc6a*/
      if ( !isnan(v31) ) /*0x65bc73*/
        v17 = fminf(1000000000.0, fmaxf(-1000000000.0, v31)); /*0x65bc8a*/
    }
    *(float *)(a1 + 1876) = v17; /*0x65bc99*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 3768LL) ) /*0x65bca4*/
    {
      v33 = (const char *)(*(_QWORD *)a2 + 15072LL); /*0x65bcb4*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 15096LL) > 0xFu ) /*0x65bcc0*/
        v33 = *(const char **)v33; /*0x65bcc2*/
      v32 = atoi(v33); /*0x65bcc5*/
    }
    else
    {
      v32 = 0; /*0x65bcad*/
    }
    *(_BYTE *)(a1 + 1880) = v32 != 0; /*0x65bcd0*/
  }
  v7 = *(_QWORD *)a3; /*0x65bcd6*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 408LL) ) /*0x65bcd9*/
  {
    v34 = (const char *)(*(_QWORD *)a2 + 1632LL); /*0x65bce5*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 1656LL) > 0xFu ) /*0x65bcf1*/
      v34 = *(const char **)v34; /*0x65bcf3*/
    LODWORD(v7) = atoi(v34); /*0x65bcf6*/
    v6 = v7; /*0x65bcfc*/
  }
  *(_DWORD *)(a1 + 1480) = v6; /*0x65bcfe*/
  return v7; /*0x65bd04*/
}
