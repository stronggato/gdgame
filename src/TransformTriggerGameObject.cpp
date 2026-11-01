#include <Geode/binding/TransformTriggerGameObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x632ca0
// Method: TransformTriggerGameObject::~TransformTriggerGameObject
cocos2d::CCSprite *__fastcall TransformTriggerGameObject__dtor_TransformTriggerGameObject(
        cocos2d::CCSprite *Block,
        char a2)
{
  *(_QWORD *)Block = &EffectGameObject::`vftable'; /*0x632cb3*/
  *((_QWORD *)Block + 40) = &EffectGameObject::`vftable'; /*0x632cc0*/
  *((_QWORD *)Block + 43) = &EffectGameObject::`vftable'; /*0x632cce*/
  TextGameObject__dtor_TextGameObject(Block); /*0x632cd5*/
  if ( (a2 & 1) != 0 ) /*0x632cdd*/
    j_j_free(Block); /*0x632ce7*/
  return Block; /*0x632cec*/
}

// [2/4] Address: 0x658390
// Method: TransformTriggerGameObject::triggerObject
void __fastcall TransformTriggerGameObject_triggerObject(__int64 a1, _QWORD *a2, unsigned int a3, __int64 a4)
{
  if ( *(_DWORD *)(a1 + 1036) == 2067 ) /*0x65839d*/
    GJBaseGameLayer_triggerTransformCommand((__int64)a2, a1); /*0x6583a9*/
  else
    EffectGameObject_triggerObject(a1, a2, a3, a4); /*0x65839d*/
}

// [3/4] Address: 0x6583b0
// Method: TransformTriggerGameObject::customObjectSetup
char __fastcall TransformTriggerGameObject_customObjectSetup(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al
  int v7; // ebp
  int v8; // eax
  const char *v9; // rcx
  int v10; // eax
  const char *v11; // rcx
  float v12; // xmm1_4
  const char *v13; // rcx
  float v14; // xmm9_4
  int v15; // eax
  const char *v16; // rcx
  float v17; // xmm1_4
  const char *v18; // rcx
  float v19; // xmm9_4
  float v20; // xmm1_4
  const char *v21; // rcx
  float v22; // xmm9_4
  float v23; // xmm7_4
  const char *v24; // rcx
  float v25; // xmm9_4
  int v26; // eax
  const char *v27; // rcx
  int v28; // eax
  const char *v29; // rcx
  int v30; // eax
  const char *v31; // rcx
  int v32; // eax
  const char *v33; // rcx
  const char *v34; // rcx
  float v35; // xmm0_4

  result = EffectGameObject_customObjectSetup(a1, a2, a3); /*0x6583c8*/
  if ( *(_DWORD *)(a1 + 1036) == 2067 ) /*0x6583d7*/
  {
    v7 = 0; /*0x6583e5*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 408LL) ) /*0x6583f7*/
    {
      v9 = (const char *)(*(_QWORD *)a2 + 1632LL); /*0x658407*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 1656LL) > 0xFu ) /*0x658413*/
        v9 = *(const char **)v9; /*0x658415*/
      v8 = atoi(v9); /*0x658418*/
    }
    else
    {
      v8 = 0; /*0x658400*/
    }
    *(_DWORD *)(a1 + 1480) = v8; /*0x65841e*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 568LL) ) /*0x658427*/
    {
      v11 = (const char *)(*(_QWORD *)a2 + 2272LL); /*0x658437*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 2296LL) > 0xFu ) /*0x658443*/
        v11 = *(const char **)v11; /*0x658445*/
      v10 = atoi(v11); /*0x658448*/
    }
    else
    {
      v10 = 0; /*0x658430*/
    }
    *(_DWORD *)(a1 + 1484) = v10; /*0x65845f*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 80LL) ) /*0x65846e*/
    {
      v13 = (const char *)(*(_QWORD *)a2 + 320LL); /*0x65847f*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 344LL) > 0xFu ) /*0x65848b*/
        v13 = *(const char **)v13; /*0x65848d*/
      v14 = atof(v13); /*0x65849a*/
      if ( isnan(v14) ) /*0x6584a3*/
        v12 = 0.0; /*0x6584b0*/
      else
        v12 = fminf(1000000000.0, fmaxf(-1000000000.0, v14)); /*0x6584c1*/
    }
    else
    {
      v12 = 0.0; /*0x658477*/
    }
    *(float *)(a1 + 1468) = v12; /*0x6584c5*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 240LL) ) /*0x6584d0*/
    {
      v16 = (const char *)(*(_QWORD *)a2 + 960LL); /*0x6584e0*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 984LL) > 0xFu ) /*0x6584ec*/
        v16 = *(const char **)v16; /*0x6584ee*/
      v15 = atoi(v16); /*0x6584f1*/
    }
    else
    {
      v15 = 0; /*0x6584d9*/
    }
    *(_DWORD *)(a1 + 1512) = v15; /*0x6584f7*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 680LL) ) /*0x658500*/
    {
      v18 = (const char *)(*(_QWORD *)a2 + 2720LL); /*0x658511*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 2744LL) > 0xFu ) /*0x65851d*/
        v18 = *(const char **)v18; /*0x65851f*/
      v19 = atof(v18); /*0x65852c*/
      if ( isnan(v19) ) /*0x658535*/
        v17 = 0.0; /*0x65853f*/
      else
        v17 = fminf(1000000000.0, fmaxf(-1000000000.0, v19)); /*0x658550*/
    }
    else
    {
      v17 = 0.0; /*0x658509*/
    }
    *(float *)(a1 + 1516) = v17; /*0x658554*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 1200LL) ) /*0x65855f*/
    {
      v21 = (const char *)(*(_QWORD *)a2 + 4800LL); /*0x658570*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 4824LL) > 0xFu ) /*0x65857c*/
        v21 = *(const char **)v21; /*0x65857e*/
      v22 = atof(v21); /*0x65858b*/
      if ( isnan(v22) ) /*0x658594*/
        v20 = 0.0; /*0x65859e*/
      else
        v20 = fminf(1000000000.0, fmaxf(-1000000000.0, v22)); /*0x6585af*/
    }
    else
    {
      v20 = 0.0; /*0x658568*/
    }
    *(float *)(a1 + 1856) = v20; /*0x6585b3*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 1208LL) ) /*0x6585be*/
    {
      v24 = (const char *)(*(_QWORD *)a2 + 4832LL); /*0x6585cf*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 4856LL) > 0xFu ) /*0x6585db*/
        v24 = *(const char **)v24; /*0x6585dd*/
      v25 = atof(v24); /*0x6585ea*/
      if ( isnan(v25) ) /*0x6585f3*/
        v23 = 0.0; /*0x6585fd*/
      else
        v23 = fminf(1000000000.0, fmaxf(-1000000000.0, v25)); /*0x658607*/
    }
    else
    {
      v23 = 0.0; /*0x6585c7*/
    }
    *(float *)(a1 + 1860) = v23; /*0x658618*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 1064LL) ) /*0x658628*/
    {
      v27 = (const char *)(*(_QWORD *)a2 + 4256LL); /*0x658638*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 4280LL) > 0xFu ) /*0x658644*/
        v27 = *(const char **)v27; /*0x658646*/
      v26 = atoi(v27); /*0x658649*/
    }
    else
    {
      v26 = 0; /*0x658631*/
    }
    *(_BYTE *)(a1 + 1872) = v26 != 0; /*0x658654*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 3616LL) ) /*0x65865d*/
    {
      v29 = (const char *)(*(_QWORD *)a2 + 14464LL); /*0x65866d*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 14488LL) > 0xFu ) /*0x658679*/
        v29 = *(const char **)v29; /*0x65867b*/
      v28 = atoi(v29); /*0x65867e*/
    }
    else
    {
      v28 = 0; /*0x658666*/
    }
    *(_BYTE *)(a1 + 1875) = v28 != 0; /*0x658689*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 4616LL) ) /*0x658692*/
    {
      v31 = (const char *)(*(_QWORD *)a2 + 18464LL); /*0x6586a2*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 18488LL) > 0xFu ) /*0x6586ae*/
        v31 = *(const char **)v31; /*0x6586b0*/
      v30 = atoi(v31); /*0x6586b3*/
    }
    else
    {
      v30 = 0; /*0x65869b*/
    }
    *(_BYTE *)(a1 + 1876) = v30 != 0; /*0x6586be*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 1224LL) ) /*0x6586c7*/
    {
      v33 = (const char *)(*(_QWORD *)a2 + 4896LL); /*0x6586d7*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 4920LL) > 0xFu ) /*0x6586e3*/
        v33 = *(const char **)v33; /*0x6586e5*/
      v32 = atoi(v33); /*0x6586e8*/
    }
    else
    {
      v32 = 0; /*0x6586d0*/
    }
    *(_BYTE *)(a1 + 1873) = v32 != 0; /*0x6586f3*/
    if ( *(_QWORD *)(*(_QWORD *)a3 + 1232LL) ) /*0x6586fc*/
    {
      v34 = (const char *)(*(_QWORD *)a2 + 4928LL); /*0x658708*/
      if ( *(_QWORD *)(*(_QWORD *)a2 + 4952LL) > 0xFu ) /*0x658714*/
        v34 = *(const char **)v34; /*0x658716*/
      v7 = atoi(v34); /*0x65871f*/
    }
    v35 = *(float *)(a1 + 1856); /*0x658721*/
    result = v7 != 0; /*0x658730*/
    *(_BYTE *)(a1 + 1874) = v7 != 0; /*0x658736*/
    if ( v35 == 0.0 ) /*0x65873e*/
      *(_DWORD *)(a1 + 1856) = 1065353216; /*0x658740*/
    if ( *(float *)(a1 + 1860) == 0.0 ) /*0x65875c*/
      *(_DWORD *)(a1 + 1860) = 1065353216; /*0x65875e*/
  }
  return result; /*0x658768*/
}

// [4/4] Address: 0x658780
// Method: TransformTriggerGameObject::getSaveString
// Hidden C++ exception states: #wind=2
__int64 __fastcall TransformTriggerGameObject_getSaveString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SaveString; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v11[24]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[528]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v13[32]; // [rsp+260h] [rbp+160h] BYREF

  *(_QWORD *)&v10 = a2; /*0x6587b8*/
  fmt::BasicWriter<char>::BasicWriter<char>(v12); /*0x6587c5*/
  SaveString = EffectGameObject_getSaveString(a1, (__int64)v13, a3); /*0x6587d9*/
  v10 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v11, SaveString); /*0x6587f0*/
  fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6587ff*/
  sub_3C310(v13); /*0x65880d*/
  if ( *(_DWORD *)(a1 + 1036) == 2067 ) /*0x65881c*/
  {
    if ( *(_DWORD *)(a1 + 1480) ) /*0x658829*/
    {
      *(_QWORD *)&v10 = &unk_709CE8; /*0x658832*/
      *((_QWORD *)&v10 + 1) = 0; /*0x658837*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x658846*/
      fmt::BasicWriter<char>::operator<<(v12, 51); /*0x658856*/
      *(_QWORD *)&v10 = &unk_709CE8; /*0x65885c*/
      *((_QWORD *)&v10 + 1) = 0; /*0x658861*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x658870*/
      fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1480)); /*0x658881*/
    }
    if ( *(_DWORD *)(a1 + 1484) ) /*0x658887*/
    {
      *(_QWORD *)&v10 = &unk_709CE8; /*0x658890*/
      *((_QWORD *)&v10 + 1) = 0; /*0x658895*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6588a4*/
      fmt::BasicWriter<char>::operator<<(v12, 71); /*0x6588b4*/
      *(_QWORD *)&v10 = &unk_709CE8; /*0x6588ba*/
      *((_QWORD *)&v10 + 1) = 0; /*0x6588bf*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6588ce*/
      fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1484)); /*0x6588df*/
    }
    if ( *(float *)(a1 + 1468) != 0.0 ) /*0x6588f5*/
    {
      *(_QWORD *)&v10 = &unk_709CE8; /*0x6588f7*/
      *((_QWORD *)&v10 + 1) = 0; /*0x6588fc*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65890b*/
      fmt::BasicWriter<char>::operator<<(v12, 10); /*0x65891b*/
      *(_QWORD *)&v10 = &unk_709CE8; /*0x658921*/
      *((_QWORD *)&v10 + 1) = 0; /*0x658926*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x658935*/
      fmt::BasicWriter<char>::operator<<(v12); /*0x65894b*/
    }
    if ( *(_DWORD *)(a1 + 1512) ) /*0x658951*/
    {
      *(_QWORD *)&v10 = &unk_709CE8; /*0x65895a*/
      *((_QWORD *)&v10 + 1) = 0; /*0x65895f*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x65896e*/
      fmt::BasicWriter<char>::operator<<(v12, 30); /*0x65897e*/
      *(_QWORD *)&v10 = &unk_709CE8; /*0x658984*/
      *((_QWORD *)&v10 + 1) = 0; /*0x658989*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x658998*/
      fmt::BasicWriter<char>::operator<<(v12, *(unsigned int *)(a1 + 1512)); /*0x6589a9*/
    }
    if ( *(float *)(a1 + 1516) != 0.0 ) /*0x6589bc*/
    {
      *(_QWORD *)&v10 = &unk_709CE8; /*0x6589be*/
      *((_QWORD *)&v10 + 1) = 0; /*0x6589c3*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6589d2*/
      fmt::BasicWriter<char>::operator<<(v12, 85); /*0x6589e2*/
      *(_QWORD *)&v10 = &unk_709CE8; /*0x6589e8*/
      *((_QWORD *)&v10 + 1) = 0; /*0x6589ed*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x6589fc*/
      fmt::BasicWriter<char>::operator<<(v12); /*0x658a12*/
    }
    if ( *(float *)(a1 + 1856) != 0.0 ) /*0x658a25*/
    {
      *(_QWORD *)&v10 = &unk_709CE8; /*0x658a27*/
      *((_QWORD *)&v10 + 1) = 0; /*0x658a2c*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x658a3b*/
      fmt::BasicWriter<char>::operator<<(v12, 150); /*0x658a4b*/
      *(_QWORD *)&v10 = &unk_709CE8; /*0x658a51*/
      *((_QWORD *)&v10 + 1) = 0; /*0x658a56*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x658a65*/
      fmt::BasicWriter<char>::operator<<(v12); /*0x658a7b*/
    }
    if ( *(float *)(a1 + 1860) != 0.0 ) /*0x658a8e*/
    {
      *(_QWORD *)&v10 = &unk_709CE8; /*0x658a90*/
      *((_QWORD *)&v10 + 1) = 0; /*0x658a95*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x658aa4*/
      fmt::BasicWriter<char>::operator<<(v12, 151); /*0x658ab4*/
      *(_QWORD *)&v10 = &unk_709CE8; /*0x658aba*/
      *((_QWORD *)&v10 + 1) = 0; /*0x658abf*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x658ace*/
      fmt::BasicWriter<char>::operator<<(v12); /*0x658ae4*/
    }
    if ( *(float *)(a1 + 1864) != 0.0 ) /*0x658af7*/
    {
      *(_QWORD *)&v10 = &unk_709CE8; /*0x658af9*/
      *((_QWORD *)&v10 + 1) = 0; /*0x658afe*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x658b0d*/
      fmt::BasicWriter<char>::operator<<(v12, 450); /*0x658b1d*/
      *(_QWORD *)&v10 = &unk_709CE8; /*0x658b23*/
      *((_QWORD *)&v10 + 1) = 0; /*0x658b28*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x658b37*/
      fmt::BasicWriter<char>::operator<<(v12); /*0x658b4d*/
    }
    if ( *(float *)(a1 + 1868) != 0.0 ) /*0x658b60*/
    {
      *(_QWORD *)&v10 = &unk_709CE8; /*0x658b62*/
      *((_QWORD *)&v10 + 1) = 0; /*0x658b67*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x658b76*/
      fmt::BasicWriter<char>::operator<<(v12, 451); /*0x658b86*/
      *(_QWORD *)&v10 = &unk_709CE8; /*0x658b8c*/
      *((_QWORD *)&v10 + 1) = 0; /*0x658b91*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x658ba0*/
      fmt::BasicWriter<char>::operator<<(v12); /*0x658bb6*/
    }
    if ( *(_BYTE *)(a1 + 1873) ) /*0x658bbc*/
    {
      *(_QWORD *)&v10 = &unk_709CE8; /*0x658bc5*/
      *((_QWORD *)&v10 + 1) = 0; /*0x658bca*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x658bd9*/
      fmt::BasicWriter<char>::operator<<(v12, 153); /*0x658be9*/
      *(_QWORD *)&v10 = &unk_709CE8; /*0x658bef*/
      *((_QWORD *)&v10 + 1) = 0; /*0x658bf4*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x658c03*/
      fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1873)); /*0x658c15*/
    }
    if ( *(_BYTE *)(a1 + 1874) ) /*0x658c1b*/
    {
      *(_QWORD *)&v10 = &unk_709CE8; /*0x658c24*/
      *((_QWORD *)&v10 + 1) = 0; /*0x658c29*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x658c38*/
      fmt::BasicWriter<char>::operator<<(v12, 154); /*0x658c48*/
      *(_QWORD *)&v10 = &unk_709CE8; /*0x658c4e*/
      *((_QWORD *)&v10 + 1) = 0; /*0x658c53*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x658c62*/
      fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1874)); /*0x658c74*/
    }
    if ( *(_BYTE *)(a1 + 1872) ) /*0x658c7a*/
    {
      *(_QWORD *)&v10 = &unk_709CE8; /*0x658c83*/
      *((_QWORD *)&v10 + 1) = 0; /*0x658c88*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x658c97*/
      fmt::BasicWriter<char>::operator<<(v12, 133); /*0x658ca7*/
      *(_QWORD *)&v10 = &unk_709CE8; /*0x658cad*/
      *((_QWORD *)&v10 + 1) = 0; /*0x658cb2*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x658cc1*/
      fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1872)); /*0x658cd3*/
    }
    if ( *(_BYTE *)(a1 + 1875) ) /*0x658cd9*/
    {
      *(_QWORD *)&v10 = &unk_709CE8; /*0x658ce2*/
      *((_QWORD *)&v10 + 1) = 0; /*0x658ce7*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x658cf6*/
      fmt::BasicWriter<char>::operator<<(v12, 452); /*0x658d06*/
      *(_QWORD *)&v10 = &unk_709CE8; /*0x658d0c*/
      *((_QWORD *)&v10 + 1) = 0; /*0x658d11*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x658d20*/
      fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1875)); /*0x658d32*/
    }
    if ( *(_BYTE *)(a1 + 1876) ) /*0x658d38*/
    {
      *(_QWORD *)&v10 = &unk_709CE8; /*0x658d41*/
      *((_QWORD *)&v10 + 1) = 0; /*0x658d46*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x658d55*/
      fmt::BasicWriter<char>::operator<<(v12, 577); /*0x658d65*/
      *(_QWORD *)&v10 = &unk_709CE8; /*0x658d6b*/
      *((_QWORD *)&v10 + 1) = 0; /*0x658d70*/
      fmt::BasicWriter<char>::operator<<(v12, &v10); /*0x658d7f*/
      fmt::BasicWriter<char>::operator<<(v12, *(unsigned __int8 *)(a1 + 1876)); /*0x658d91*/
    }
  }
  v7 = fmt::BasicWriter<char>::c_str(v12); /*0x658d9c*/
  *(_OWORD *)a2 = 0; /*0x658da5*/
  *(_QWORD *)(a2 + 16) = 0; /*0x658da8*/
  *(_QWORD *)(a2 + 24) = 0; /*0x658dac*/
  v8 = -1; /*0x658db0*/
  do /*0x658dc3*/
    ++v8; /*0x658dc0*/
  while ( *(_BYTE *)(v7 + v8) ); /*0x658dc3*/
  sub_3C230(a2); /*0x658dd0*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v12); /*0x658ddb*/
  return a2; /*0x658de4*/
}
