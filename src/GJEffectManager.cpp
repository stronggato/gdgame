#include <Geode/binding/GJEffectManager.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/36] Address: 0x10ef20
// Method: GJEffectManager::getColorAction
unsigned __int64 __fastcall GJEffectManager_getColorAction(__int64 *a1, float a2, float *a3, float a4)
{
  __int64 v4; // r9
  unsigned __int64 v6; // rsi
  unsigned __int64 result; // rax
  __int64 v10; // r8
  __int64 v11; // rdi
  float v12; // xmm1_4
  __int64 v13; // rcx
  float *v14; // rax
  char v15; // dl
  bool v16; // al
  __int64 v17; // rcx

  v4 = *a1; /*0x10ef35*/
  v6 = 0; /*0x10ef5f*/
  result = (unsigned __int64)((unsigned __int128)((a1[1] - *a1) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63; /*0x10ef6e*/
  if ( (a1[1] - *a1) / 24 ) /*0x10ef72*/
  {
    v10 = *a1; /*0x10ef80*/
    v11 = 0; /*0x10ef83*/
    do /*0x10ef90*/
    {
      v12 = *(float *)(v11 + v4 + 8); /*0x10ef90*/
      v13 = v11 + v4; /*0x10ef97*/
      v14 = (float *)(v11 + v4 + 12); /*0x10ef9e*/
      if ( a2 > (float)(v12 - a4) ) /*0x10efa9*/
      {
        if ( (float)(a4 + *v14) > a2 ) /*0x10efb5*/
        {
          v15 = 1; /*0x10efb7*/
          goto LABEL_8; /*0x10efb9*/
        }
        v4 = v10; /*0x10efbb*/
      }
      v15 = 0; /*0x10efbe*/
LABEL_8:
      v16 = a3[1] > v12 && *v14 > *a3 && a3[3] > *(float *)(v13 + 16) && *(float *)(v13 + 20) > a3[2]; /*0x10efed*/
      if ( v15 || v16 ) /*0x10eff5*/
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v11 + v4) + 336LL))( /*0x10f000*/
          *(_QWORD *)(v11 + v4),
          0,
          v10);
      v4 = *a1; /*0x10f006*/
      ++v6; /*0x10f010*/
      v17 = a1[1] - *a1; /*0x10f013*/
      v11 += 24; /*0x10f016*/
      v10 = *a1; /*0x10f01d*/
      result = (unsigned __int64)((unsigned __int128)(v17 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63; /*0x10f027*/
    }
    while ( v6 < v17 / 24 ); /*0x10ef90*/
  }
  return result; /*0x10f03c*/
}

// [2/36] Address: 0x1bb870
// Method: GJEffectManager::processInheritedColors
// Hidden C++ exception states: #wind=1
__int64 __fastcall GJEffectManager_processInheritedColors(_QWORD *a1)
{
  unsigned int SelectedObjects; // r13d
  __int64 v3; // rcx
  __int64 v4; // rcx
  unsigned int *v5; // rbx
  __int64 v6; // rcx
  __int64 *v7; // rbx
  __int64 *i; // rsi
  __int64 v9; // rcx
  char v10; // r14
  __int16 v11; // bp
  __int16 v12; // r15
  char v13; // r12
  __int64 v14; // rbx
  _QWORD *v15; // rsi
  _QWORD *v17; // [rsp+70h] [rbp+8h] BYREF
  __int64 v18; // [rsp+78h] [rbp+10h] BYREF
  __int64 v19; // [rsp+80h] [rbp+18h] BYREF

  sub_1BBB00(a1); /*0x1bb887*/
  sub_1BB800(a1); /*0x1bb88f*/
  SelectedObjects = 0; /*0x1bb896*/
  v3 = a1[196]; /*0x1bb899*/
  if ( v3 ) /*0x1bb8a3*/
  {
    *(_BYTE *)(v3 + 1141) = 0; /*0x1bb8a5*/
    GameObject_updateObjectEditorColor((_QWORD *)v3); /*0x1bb8ac*/
  }
  else
  {
    SelectedObjects = (unsigned int)EditorUI_getSelectedObjects((__int64)a1); /*0x1bb8bb*/
    v4 = a1[118]; /*0x1bb8be*/
    if ( v4 ) /*0x1bb8c8*/
    {
      v5 = *(unsigned int **)(v4 + 56); /*0x1bb8ca*/
      v6 = *v5; /*0x1bb8ce*/
      if ( (_DWORD)v6 ) /*0x1bb8d2*/
      {
        v7 = (__int64 *)*((_QWORD *)v5 + 2); /*0x1bb8d4*/
        for ( i = &v7[v6 - 1]; v7 <= i; ++v7 ) /*0x1bb8e3*/
        {
          v9 = *v7; /*0x1bb8e5*/
          if ( !*v7 ) /*0x1bb8e5*/
            break; /*0x1bb8eb*/
          *(_BYTE *)(v9 + 1141) = 0; /*0x1bb8ed*/
          GameObject_updateObjectEditorColor((_QWORD *)v9); /*0x1bb8f4*/
        }
      }
    }
  }
  v17 = 0; /*0x1bb902*/
  v18 = 0; /*0x1bb907*/
  v19 = 0; /*0x1bb90c*/
  EditorUI_getEditColorTargets((__int64)a1, (__int64 *)&v17, &v18, &v19); /*0x1bb929*/
  v10 = -1; /*0x1bb92e*/
  v11 = -1; /*0x1bb936*/
  if ( v17 ) /*0x1bb945*/
  {
    v12 = *((_WORD *)v17 + 36); /*0x1bb947*/
    v13 = *((_BYTE *)v17 + 74); /*0x1bb94c*/
  }
  else
  {
    v12 = -1; /*0x1bb953*/
    v13 = -1; /*0x1bb957*/
  }
  if ( v18 ) /*0x1bb963*/
  {
    v11 = *(_WORD *)(v18 + 72); /*0x1bb965*/
    v10 = *(_BYTE *)(v18 + 74); /*0x1bb969*/
  }
  v14 = a1[196]; /*0x1bb96e*/
  v15 = operator new(0x2E8u); /*0x1bb97f*/
  v17 = v15; /*0x1bb982*/
  FLAlertLayer_FLAlertLayer(v15); /*0x1bb98a*/
  *v15 = &HSVLiveOverlay::`vftable'; /*0x1bb996*/
  v15[40] = &HSVLiveOverlay::`vftable'; /*0x1bb9a0*/
  v15[41] = &HSVLiveOverlay::`vftable'; /*0x1bb9ae*/
  v15[42] = &HSVLiveOverlay::`vftable'; /*0x1bb9bc*/
  v15[43] = &HSVLiveOverlay::`vftable'; /*0x1bb9ca*/
  v15[44] = &HSVLiveOverlay::`vftable'; /*0x1bb9d8*/
  v15[51] = &HSVLiveOverlay::`vftable'; /*0x1bb9e6*/
  v15[54] = &HSVLiveOverlay::`vftable'; /*0x1bb9f4*/
  v15[68] = &HSVLiveOverlay::`vftable'; /*0x1bba02*/
  v15[83] = &HSVLiveOverlay::`vftable'; /*0x1bba10*/
  v15[84] = 0; /*0x1bba19*/
  v15[85] = 0; /*0x1bba20*/
  v15[87] = 0; /*0x1bba27*/
  v15[88] = 0; /*0x1bba2e*/
  *((_DWORD *)v15 + 178) = -1; /*0x1bba35*/
  v15[90] = 0; /*0x1bba3f*/
  *((_WORD *)v15 + 364) = 0; /*0x1bba46*/
  *((_BYTE *)v15 + 730) = 0; /*0x1bba4d*/
  LOWORD(v17) = v11; /*0x1bba53*/
  BYTE2(v17) = v10; /*0x1bba58*/
  LOWORD(v19) = v12; /*0x1bba5d*/
  BYTE2(v19) = v13; /*0x1bba66*/
  if ( (unsigned __int8)SetupAreaAnimTriggerPopup_init( /*0x1bba89*/
                          (_DWORD)v15,
                          v14,
                          SelectedObjects,
                          (unsigned int)&v19,
                          (__int64)&v17) )
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v15); /*0x1bba95*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v15 + 8LL))(v15, 1); /*0x1bbaa5*/
    v15 = 0; /*0x1bbaa8*/
  }
  a1[203] = v15; /*0x1bbaaa*/
  v15[88] = a1 + 52; /*0x1bbab8*/
  *(_QWORD *)(a1[203] + 568LL) = a1; /*0x1bbac6*/
  return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)a1[203] + 1064LL))(a1[203]);
}

// [3/36] Address: 0x2bf220
// Method: GJEffectManager::getColorSprite
// Hidden C++ exception states: #wind=4
char *__fastcall GJEffectManager_getColorSprite(__int64 a1, unsigned int a2)
{
  char *v4; // rdi
  _QWORD *v5; // rax
  int v6; // r9d
  __int64 v7; // rax
  __int64 v8; // r9
  char *v10; // [rsp+78h] [rbp+20h] BYREF

  v4 = (char *)operator new(0x4A8u); /*0x2bf241*/
  memset(v4, 0, 0x4A8u); /*0x2bf254*/
  SetupAreaMoveTriggerPopup_SetupAreaMoveTriggerPopup(v4); /*0x2bf25c*/
  *(_QWORD *)v4 = &GameSettingsLayer::`vftable'; /*0x2bf269*/
  *((_QWORD *)v4 + 40) = &GameSettingsLayer::`vftable'; /*0x2bf273*/
  *((_QWORD *)v4 + 41) = &GameSettingsLayer::`vftable'; /*0x2bf281*/
  *((_QWORD *)v4 + 42) = &GameSettingsLayer::`vftable'; /*0x2bf28f*/
  *((_QWORD *)v4 + 43) = &GameSettingsLayer::`vftable'; /*0x2bf29d*/
  *((_QWORD *)v4 + 44) = &GameSettingsLayer::`vftable'; /*0x2bf2ab*/
  *((_QWORD *)v4 + 51) = &GameSettingsLayer::`vftable'; /*0x2bf2b9*/
  *((_QWORD *)v4 + 54) = &GameSettingsLayer::`vftable'; /*0x2bf2c7*/
  *((_QWORD *)v4 + 68) = &GameSettingsLayer::`vftable'; /*0x2bf2d5*/
  *((_QWORD *)v4 + 83) = &GameSettingsLayer::`vftable'; /*0x2bf2e3*/
  *((_QWORD *)v4 + 84) = &GameSettingsLayer::`vftable'; /*0x2bf2f1*/
  *((_QWORD *)v4 + 134) = &GameSettingsLayer::`vftable'; /*0x2bf2ff*/
  *((_QWORD *)v4 + 135) = 0; /*0x2bf309*/
  v10 = v4 + 1088; /*0x2bf317*/
  *((_DWORD *)v4 + 272) = 0; /*0x2bf31c*/
  *((_QWORD *)v4 + 137) = 0; /*0x2bf31f*/
  *((_QWORD *)v4 + 138) = 0; /*0x2bf323*/
  v5 = operator new(0x20u); /*0x2bf32c*/
  *v5 = v5; /*0x2bf331*/
  v5[1] = v5; /*0x2bf334*/
  *((_QWORD *)v4 + 137) = v5; /*0x2bf338*/
  *((_QWORD *)v4 + 139) = 0; /*0x2bf340*/
  *((_QWORD *)v4 + 140) = 0; /*0x2bf343*/
  *((_QWORD *)v4 + 141) = 0; /*0x2bf347*/
  *((_QWORD *)v4 + 142) = 7; /*0x2bf34b*/
  *((_QWORD *)v4 + 143) = 8; /*0x2bf353*/
  *((_DWORD *)v4 + 272) = 1065353216; /*0x2bf35b*/
  sub_3E200(v4 + 1112, 16, *((_QWORD *)v4 + 137)); /*0x2bf36a*/
  *((_QWORD *)v4 + 144) = 0; /*0x2bf370*/
  *((_DWORD *)v4 + 290) = 0; /*0x2bf377*/
  *((_QWORD *)v4 + 146) = 0; /*0x2bf37e*/
  *((_QWORD *)v4 + 147) = 0; /*0x2bf385*/
  v4[1184] = 0; /*0x2bf38c*/
  if ( (unsigned __int8)sub_6060E0((_DWORD)v4, 0, 0, v6, 1133248512, 7, 0) ) /*0x2bf3c2*/
  {
    *((_QWORD *)v4 + 135) = a1; /*0x2bf3cf*/
    v4[744] = 1; /*0x2bf3d6*/
    (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 1096LL))(v4); /*0x2bf3e3*/
    qmemcpy(&v10, "PWi", 3); /*0x2bf3f5*/
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v4 + 73) + 472LL))(*((_QWORD *)v4 + 73), 3); /*0x2bf40e*/
    if ( v7 ) /*0x2bf417*/
      (**(void (__fastcall ***)(__int64, char **))(v7 + 320))(v7 + 320, &v10); /*0x2bf428*/
    v4[596] = 1; /*0x2bf42a*/
    sub_6674A0(v4); /*0x2bf434*/
    UnDecorator::getZName(v4); /*0x2bf43c*/
    sub_2BF9D0(v4); /*0x2bf444*/
    sub_2C1970(v4); /*0x2bf44c*/
    (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 1136LL))(v4); /*0x2bf457*/
    v4[744] = 0; /*0x2bf45d*/
    if ( dword_8F8478 >= 0 ) /*0x2bf46e*/
    {
      v8 = *((_QWORD *)v4 + 125); /*0x2bf470*/
      if ( dword_8F8478 < (int)((*((_QWORD *)v4 + 126) - v8) / 88) ) /*0x2bf49f*/
      {
        a2 = dword_8F8478; /*0x2bf4a1*/
        *(_DWORD *)(88LL * dword_8F8478 + v8 + 68) = dword_905FC4; /*0x2bf4ae*/
      }
    }
    (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)v4 + 1200LL))(v4, a2); /*0x2bf4c2*/
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v4); /*0x2bf4c8*/
    return v4; /*0x2bf4ce*/
  }
  else
  {
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v4 + 8LL))(v4, 1); /*0x2bf4e2*/
    return 0; /*0x2bf4e5*/
  }
}

// [4/36] Address: 0x345640
// Method: GJEffectManager::prepareMoveActions
void __fastcall GJEffectManager_prepareMoveActions(
        __int64 a1,
        _DWORD *a2,
        char a3,
        char a4,
        int a5,
        float a6,
        int a7,
        int a8)
{
  float v8; // xmm3_4
  float *v9; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // edx
  int v17; // r8d
  float v18; // xmm6_4
  int v19; // xmm0_4
  cocos2d *v20; // rcx
  float v21; // xmm0_4
  int v22; // xmm1_4
  _DWORD *v23; // rbp
  int v24; // xmm0_4
  cocos2d *v25; // rcx
  float v26; // xmm0_4
  int v27; // xmm1_4
  _DWORD *v28; // rsi
  int v29; // xmm7_4
  int v30; // edi
  int v31; // r14d
  int v32; // [rsp+50h] [rbp-88h] BYREF
  int v33; // [rsp+54h] [rbp-84h]
  float v34[2]; // [rsp+58h] [rbp-80h] BYREF
  __int64 v35; // [rsp+60h] [rbp-78h]
  int v36; // [rsp+E0h] [rbp+8h] BYREF
  char v37; // [rsp+F0h] [rbp+18h]

  v37 = a3; /*0x345643*/
  v9 = (float *)(a1 + 424); /*0x34565d*/
  v35 = a1 + 424; /*0x345675*/
  *(_BYTE *)(a1 + 672) = 0; /*0x34567d*/
  v14 = cocos2d::CCDirector::sharedDirector(a1); /*0x345687*/
  cocos2d::CCDirector::getWinSize(v14, v34); /*0x345695*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v36, (float)(v34[0] * 0.5) / *v9, (float)(v34[1] * 0.5) / *v9); /*0x3456c7*/
  cocos2d::CCPoint::operator+(a1 + 1292, &v32, v15); /*0x3456dc*/
  cocos2d::CCPoint::operator-(&v32, &v36, v9 + 2); /*0x3456f3*/
  cocos2d::CCPoint::operator=(&v32, &v36); /*0x345706*/
  v18 = a6; /*0x34570c*/
  if ( a3 ) /*0x345729*/
  {
    v19 = v32; /*0x34572b*/
    *(_DWORD *)(a1 + 568) = 1065353216; /*0x345739*/
    *(_DWORD *)(a1 + 480) = v19; /*0x34574a*/
    *(_DWORD *)(a1 + 496) = 0; /*0x345752*/
    v36 = 12; /*0x34575c*/
    sub_351620(a1 + 1064, &v36); /*0x345767*/
    v21 = cocos2d::clampf(v20, -10000.0, 10000.0, v8); /*0x34577b*/
    v22 = v32; /*0x345781*/
    *(float *)(a1 + 512) = v21; /*0x345787*/
    *(float *)(a1 + 520) = v18; /*0x34578f*/
    *(_DWORD *)(a1 + 472) = v22; /*0x345797*/
    *(_DWORD *)(a1 + 488) = *a2; /*0x3457a3*/
  }
  v23 = (_DWORD *)(a1 + 484); /*0x3457b1*/
  if ( a4 ) /*0x3457bb*/
  {
    v24 = v33; /*0x3457c1*/
    *(_DWORD *)(a1 + 572) = 1065353216; /*0x3457cf*/
    *v23 = v24; /*0x3457e0*/
    *(_DWORD *)(a1 + 500) = 0; /*0x3457e5*/
    v36 = 13; /*0x3457ef*/
    sub_351620(a1 + 1064, &v36); /*0x3457fa*/
    v26 = cocos2d::clampf(v25, -10000.0, 10000.0, v8); /*0x34580e*/
    v27 = v33; /*0x345814*/
    v28 = (_DWORD *)(a1 + 492); /*0x34581a*/
    *(float *)(a1 + 516) = v26; /*0x345821*/
    *(float *)(a1 + 524) = v18; /*0x345829*/
    *(_DWORD *)(a1 + 476) = v27; /*0x345831*/
    *(_DWORD *)(a1 + 492) = a2[1]; /*0x34583d*/
  }
  else
  {
    v28 = (_DWORD *)(a1 + 492); /*0x345841*/
  }
  if ( !(_BYTE)a5 ) /*0x34585d*/
  {
    if ( v18 <= 0.0 ) /*0x345869*/
    {
      if ( v37 ) /*0x345926*/
      {
        a5 = 10; /*0x345930*/
        sub_351620(a1 + 1064, &a5); /*0x345942*/
        *(_DWORD *)(a1 + 480) = *(_DWORD *)(a1 + 488); /*0x34594d*/
      }
      if ( a4 ) /*0x345956*/
      {
        a5 = 11; /*0x345960*/
        sub_351620(a1 + 1064, &a5); /*0x34596e*/
        *v23 = *v28; /*0x345975*/
      }
    }
    else
    {
      v29 = a8; /*0x345877*/
      v30 = a7; /*0x345880*/
      if ( v37 ) /*0x345887*/
      {
        v31 = a1 + 424; /*0x345891*/
        GJGameState_tweenValue(a1 + 424, v16, v17, 10, LODWORD(v18), a7, a8, -1, -1); /*0x3458c9*/
      }
      else
      {
        v31 = v35; /*0x3458d7*/
      }
      if ( a4 ) /*0x3458df*/
        GJGameState_tweenValue(v31, v16, v17, 11, LODWORD(v18), v30, v29, -1, -1); /*0x345917*/
    }
  }
}

// [5/36] Address: 0x3614a0
// Method: GJEffectManager::create
// Hidden C++ exception states: #wind=1
cocos2d::CCObject *GJEffectManager_create()
{
  __int64 v0; // rax
  cocos2d::CCObject *v1; // rbx
  void *v3; // [rsp+30h] [rbp+8h]

  v3 = operator new(0x828u); /*0x3614b0*/
  v0 = sub_35EAD0(v3); /*0x3614b8*/
  v1 = (cocos2d::CCObject *)v0; /*0x3614bd*/
  if ( v0 ) /*0x3614c3*/
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v0 + 72LL))(v0) ) /*0x3614cf*/
    {
      cocos2d::CCObject::autorelease(v1); /*0x3614d8*/
      return v1; /*0x3614e6*/
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v1 + 8LL))(v1, 1); /*0x3614ef*/
    return 0; /*0x3614f2*/
  }
  return v1; /*0x3614e1*/
}

// [6/36] Address: 0x361500
// Method: GJEffectManager::init
bool __fastcall GJEffectManager_init(__int64 a1)
{
  bool result; // al
  cocos2d::CCObject *v3; // rax
  cocos2d::CCObject *v4; // rax
  __int64 v5; // rcx
  cocos2d::CCObject *v6; // rax
  cocos2d::CCObject *v7; // rax
  cocos2d::CCObject *v8; // rax
  const void **v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // r14
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  char *v17; // rbx
  const void **v18; // rdi
  __int64 v19; // r15
  __int64 v20; // rax
  unsigned __int64 v21; // r14
  __int64 v22; // rax
  unsigned __int64 v23; // r15
  char *v24; // rbx
  __int64 v25; // rbx
  unsigned __int64 v26; // r9
  __int64 v27; // r10
  char v28; // r8
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  const void **v31; // rax
  const void **v32; // rcx
  unsigned __int64 v33; // r9
  unsigned __int64 v34; // r8
  __int64 i; // rcx
  __int64 v36; // rdx
  __int64 v37; // r8

  result = cocos2d::CCNode::init((cocos2d::CCNode *)a1); /*0x361509*/
  if ( !result ) /*0x361511*/
    return result; /*0x361511*/
  v3 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x36153d*/
  *(_QWORD *)(a1 + 328) = v3; /*0x361546*/
  cocos2d::CCObject::retain(v3); /*0x36154d*/
  v4 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x361553*/
  *(_QWORD *)(a1 + 336) = v4; /*0x36155c*/
  cocos2d::CCObject::retain(v4); /*0x361563*/
  v6 = (cocos2d::CCObject *)cocos2d::CCArray::create(v5); /*0x361569*/
  *(_QWORD *)(a1 + 1272) = v6; /*0x361572*/
  cocos2d::CCObject::retain(v6); /*0x361579*/
  v7 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x36157f*/
  *(_QWORD *)(a1 + 640) = v7; /*0x361588*/
  cocos2d::CCObject::retain(v7); /*0x36158f*/
  v8 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x361595*/
  *(_QWORD *)(a1 + 632) = v8; /*0x36159e*/
  cocos2d::CCObject::retain(v8); /*0x3615a5*/
  v9 = (const void **)(a1 + 760); /*0x3615ab*/
  v10 = *(_QWORD *)(a1 + 768); /*0x3615b7*/
  v11 = *(_QWORD *)(a1 + 760); /*0x3615c5*/
  v12 = (v10 - v11) >> 3; /*0x3615ce*/
  if ( v12 <= 0x44E ) /*0x3615d5*/
  {
    if ( v12 >= 0x44E ) /*0x3615e2*/
      goto LABEL_14; /*0x3615e2*/
    v14 = (*(_QWORD *)(a1 + 776) - v11) >> 3; /*0x3615ef*/
    if ( v14 < 0x44E ) /*0x3615f6*/
    {
      v15 = v14 >> 1; /*0x3615fe*/
      if ( v14 <= 0x1FFFFFFFFFFFFFFFLL - (v14 >> 1) ) /*0x361607*/
      {
        v16 = v14 + v15; /*0x36160e*/
        if ( v14 + v15 >= 0x44E ) /*0x361615*/
        {
          if ( v16 > 0x1FFFFFFFFFFFFFFFLL ) /*0x36161f*/
            goto LABEL_48; /*0x36161f*/
        }
        else
        {
          v16 = 1102; /*0x361617*/
        }
      }
      else
      {
        v16 = 0x1FFFFFFFFFFFFFFFLL; /*0x361609*/
      }
      v17 = (char *)sub_3C460(8 * v16); /*0x36163a*/
      memset(&v17[8 * v12], 0, 8 * (1102 - v12)); /*0x361645*/
      memmove(v17, *v9, *(_QWORD *)(a1 + 768) - (_QWORD)*v9); /*0x361657*/
      sub_BBD70(a1 + 760, v17, 1102, v16); /*0x361668*/
      goto LABEL_14; /*0x36166d*/
    }
    memset(*(void **)(a1 + 768), 0, 8 * (1102 - v12)); /*0x361685*/
    v13 = 8 * (1102 - v12) + v10; /*0x36168a*/
  }
  else
  {
    v13 = v11 + 8816; /*0x3615d7*/
  }
  *(_QWORD *)(a1 + 768) = v13; /*0x36168e*/
LABEL_14:
  v18 = (const void **)(a1 + 736); /*0x361692*/
  v19 = *(_QWORD *)(a1 + 744); /*0x361699*/
  v20 = *(_QWORD *)(a1 + 736); /*0x36169d*/
  v21 = (v19 - v20) >> 3; /*0x3616a6*/
  if ( v21 > 0x44E ) /*0x3616ad*/
  {
    v22 = v20 + 8816; /*0x3616af*/
LABEL_26:
    *(_QWORD *)(a1 + 744) = v22; /*0x361763*/
    goto LABEL_27; /*0x361763*/
  }
  if ( v21 < 0x44E ) /*0x3616ba*/
  {
    v14 = (*(_QWORD *)(a1 + 752) - v20) >> 3; /*0x3616c7*/
    if ( v14 >= 0x44E ) /*0x3616ce*/
    {
      memset(*(void **)(a1 + 744), 0, 8 * (1102 - v21)); /*0x36175a*/
      v22 = 8 * (1102 - v21) + v19; /*0x36175f*/
      goto LABEL_26; /*0x36175f*/
    }
    v15 = v14 >> 1; /*0x3616d6*/
    if ( v14 > 0x1FFFFFFFFFFFFFFFLL - (v14 >> 1) ) /*0x3616df*/
    {
      v23 = 0x1FFFFFFFFFFFFFFFLL; /*0x3616e1*/
LABEL_20:
      v24 = (char *)sub_3C460(8 * v23); /*0x3616e4*/
      memset(&v24[8 * v21], 0, 8 * (1102 - v21)); /*0x361704*/
      memmove(v24, *v18, *(_QWORD *)(a1 + 744) - (_QWORD)*v18); /*0x361716*/
      sub_BBD70(a1 + 736, v24, 1102, v23); /*0x361727*/
      goto LABEL_27; /*0x36172c*/
    }
    v23 = v15 + v14; /*0x36172e*/
    if ( v15 + v14 < 0x44E ) /*0x361735*/
    {
      v23 = 1102; /*0x361737*/
      goto LABEL_20; /*0x36173a*/
    }
    if ( v23 <= 0x1FFFFFFFFFFFFFFFLL ) /*0x36173f*/
      goto LABEL_20; /*0x36173f*/
LABEL_48:
    sub_8CF0(v14, v15); /*0x36193c*/
  }
LABEL_27:
  v25 = 10000; /*0x361767*/
  sub_351790(a1 + 1280, 10000); /*0x361775*/
  sub_353F50(a1 + 648); /*0x361781*/
  sub_351790(a1 + 784, 10000); /*0x36178f*/
  v26 = 0; /*0x361797*/
  v27 = 0; /*0x36179a*/
  do /*0x3617ef*/
  {
    v27 += 8; /*0x3617a7*/
    v28 = v26 & 0x1F; /*0x3617ae*/
    *(_QWORD *)(v27 + *(_QWORD *)(a1 + 648) - 8) = 0; /*0x3617b2*/
    v29 = v26++; /*0x3617b7*/
    v30 = 4 * (v29 >> 5); /*0x3617c8*/
    *(_DWORD *)(*(_QWORD *)(a1 + 784) + v30) &= ~(1 << v28); /*0x3617d7*/
    *(_DWORD *)(*(_QWORD *)(a1 + 1280) + v30) |= 1 << v28; /*0x3617e8*/
    --v25; /*0x3617eb*/
  }
  while ( v25 ); /*0x3617ef*/
  v31 = (const void **)*v18; /*0x3617f1*/
  v32 = (const void **)*v9; /*0x3617f4*/
  v33 = (unsigned __int64)*v18 + 8808; /*0x3617f7*/
  v34 = (unsigned __int64)*v9 + 8808; /*0x3617fe*/
  if ( ((unsigned __int64)*v18 > v34 || v33 < (unsigned __int64)v32) /*0x361844*/
    && (v31 > v18 || v33 < (unsigned __int64)v18)
    && (v31 > v9 || v33 < (unsigned __int64)v9)
    && (v32 > v18 || v34 < (unsigned __int64)v18)
    && (v32 > v9 || v34 < (unsigned __int64)v9) )
  {
    v36 = 137; /*0x361880*/
    v37 = 137; /*0x361885*/
    do /*0x3618b7*/
    {
      *v32 = 0; /*0x361890*/
      v32[1] = 0; /*0x361893*/
      v32[2] = 0; /*0x361897*/
      v32 += 8; /*0x36189b*/
      *(v32 - 5) = 0; /*0x36189f*/
      *(v32 - 4) = 0; /*0x3618a3*/
      *(v32 - 3) = 0; /*0x3618a7*/
      *(v32 - 2) = 0; /*0x3618ab*/
      *(v32 - 1) = 0; /*0x3618af*/
      --v37; /*0x3618b3*/
    }
    while ( v37 ); /*0x3618b7*/
    *v32 = 0; /*0x3618b9*/
    v32[1] = 0; /*0x3618bc*/
    v32[2] = 0; /*0x3618c0*/
    v32[3] = 0; /*0x3618c4*/
    v32[4] = 0; /*0x3618c8*/
    v32[5] = 0; /*0x3618cc*/
    do /*0x3618f7*/
    {
      *v31 = 0; /*0x3618d0*/
      v31[1] = 0; /*0x3618d3*/
      v31[2] = 0; /*0x3618d7*/
      v31 += 8; /*0x3618db*/
      *(v31 - 5) = 0; /*0x3618df*/
      *(v31 - 4) = 0; /*0x3618e3*/
      *(v31 - 3) = 0; /*0x3618e7*/
      *(v31 - 2) = 0; /*0x3618eb*/
      *(v31 - 1) = 0; /*0x3618ef*/
      --v36; /*0x3618f3*/
    }
    while ( v36 ); /*0x3618f7*/
    *v31 = 0; /*0x3618f9*/
    v31[1] = 0; /*0x3618fc*/
    v31[2] = 0; /*0x361900*/
    v31[3] = 0; /*0x361904*/
    v31[4] = 0; /*0x361908*/
    v31[5] = 0; /*0x36190c*/
  }
  else
  {
    for ( i = 0; i <= 8808; i += 8 ) /*0x361853*/
    {
      *(_QWORD *)((char *)*v9 + i) = 0; /*0x361863*/
      *(_QWORD *)((char *)*v18 + i) = 0; /*0x36186a*/
    }
  }
  return 1; /*0x361513*/
}

// [7/36] Address: 0x361950
// Method: GJEffectManager::reset
__int64 __fastcall GJEffectManager_reset(__int64 a1)
{
  _QWORD *v2; // rdx
  _QWORD *v3; // rax
  __int64 i; // rcx
  __int64 v5; // rcx
  char *v6; // rdx
  char *v7; // rcx
  __int64 j; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 k; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 result; // rax

  sub_3DB60(a1 + 672); /*0x361969*/
  cocos2d::CCDictionary::removeAllObjects(*(cocos2d::CCDictionary **)(a1 + 632)); /*0x361975*/
  cocos2d::CCDictionary::removeAllObjects(*(cocos2d::CCDictionary **)(a1 + 640)); /*0x361982*/
  cocos2d::CCDictionary::removeAllObjects(*(cocos2d::CCDictionary **)(a1 + 328)); /*0x36198f*/
  v2 = (_QWORD *)(a1 + 736); /*0x361995*/
  v3 = *(_QWORD **)(a1 + 736); /*0x36199e*/
  if ( (unsigned __int64)v3 > a1 + 736 || v3 + 1101 < v2 ) /*0x3619b0*/
  {
    v5 = 137; /*0x3619d6*/
    do /*0x361a07*/
    {
      *v3 = 0; /*0x3619e0*/
      v3[1] = 0; /*0x3619e3*/
      v3[2] = 0; /*0x3619e7*/
      v3 += 8; /*0x3619eb*/
      *(v3 - 5) = 0; /*0x3619ef*/
      *(v3 - 4) = 0; /*0x3619f3*/
      *(v3 - 3) = 0; /*0x3619f7*/
      *(v3 - 2) = 0; /*0x3619fb*/
      *(v3 - 1) = 0; /*0x3619ff*/
      --v5; /*0x361a03*/
    }
    while ( v5 ); /*0x361a07*/
    *v3 = 0; /*0x361a09*/
    v3[1] = 0; /*0x361a0c*/
    v3[2] = 0; /*0x361a10*/
    v3[3] = 0; /*0x361a14*/
    v3[4] = 0; /*0x361a18*/
    v3[5] = 0; /*0x361a1c*/
  }
  else
  {
    for ( i = 0; i <= 8808; i += 8 ) /*0x3619b2*/
      *(_QWORD *)(i + *v2) = 0; /*0x3619c3*/
  }
  v6 = (char *)(a1 + 648); /*0x361a20*/
  v7 = *(char **)(a1 + 648); /*0x361a27*/
  if ( (unsigned __int64)v7 > a1 + 648 || v7 + 79992 < v6 ) /*0x361a39*/
  {
    memset(v7, 0, 0x13880u); /*0x361a61*/
  }
  else
  {
    for ( j = 0; j <= 79992; j += 8 ) /*0x361a3b*/
      *(_QWORD *)(j + *(_QWORD *)v6) = 0; /*0x361a46*/
  }
  v9 = *(_QWORD *)(a1 + 336); /*0x361a66*/
  if ( v9 ) /*0x361a70*/
  {
    v10 = *(_QWORD *)(v9 + 56); /*0x361a72*/
    if ( v10 ) /*0x361a79*/
    {
      for ( k = *(_QWORD *)(v10 + 288); ; k = *(_QWORD *)(k + 288) ) /*0x361a7b*/
      {
        v12 = *(_QWORD *)(v10 + 264); /*0x361a89*/
        *(_WORD *)(v12 + 324) = -1; /*0x361a90*/
        *(_BYTE *)(v12 + 326) = -1; /*0x361a9e*/
        *(_WORD *)(v12 + 327) = -1; /*0x361aab*/
        *(_BYTE *)(v12 + 329) = -1; /*0x361ab9*/
        *(_DWORD *)(v12 + 320) = 1132396544; /*0x361abf*/
        *(_QWORD *)(v12 + 344) = 0; /*0x361ac9*/
        v10 = k; /*0x361ad0*/
        if ( !k ) /*0x361ad6*/
          break; /*0x361ad6*/
      }
    }
  }
  GJEffectManager_resetEffects(a1); /*0x361ae4*/
  v13 = *(_QWORD *)(a1 + 1560); /*0x361ae9*/
  v14 = *(_QWORD *)(a1 + 1552); /*0x361af0*/
  if ( v14 != v13 ) /*0x361afa*/
  {
    do /*0x361b22*/
    {
      sub_685C0(v14 + 488); /*0x361b07*/
      sub_35E650(v14 + 440); /*0x361b13*/
      v14 += 520; /*0x361b18*/
    }
    while ( v14 != v13 ); /*0x361b22*/
    *(_QWORD *)(a1 + 1560) = *(_QWORD *)(a1 + 1552); /*0x361b2b*/
  }
  sub_36C100(a1 + 1576); /*0x361b39*/
  sub_654A0(a1 + 1752); /*0x361b45*/
  result = *(_QWORD *)(a1 + 1944); /*0x361b4a*/
  if ( result != *(_QWORD *)(a1 + 1952) ) /*0x361b58*/
    *(_QWORD *)(a1 + 1952) = result; /*0x361b5a*/
  return result; /*0x361b61*/
}

// [8/36] Address: 0x361b80
// Method: GJEffectManager::getAllColorActions
__int64 __fastcall GJEffectManager_getAllColorActions(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  cocos2d::CCArray *v4; // rdi
  __int64 v5; // rdx
  __int64 i; // rbx

  result = cocos2d::CCArray::create(a1); /*0x361b8d*/
  v3 = *(_QWORD *)(a1 + 328); /*0x361b93*/
  v4 = (cocos2d::CCArray *)result; /*0x361b9a*/
  if ( v3 ) /*0x361ba0*/
  {
    v5 = *(_QWORD *)(v3 + 56); /*0x361ba2*/
    if ( v5 ) /*0x361ba9*/
    {
      for ( i = *(_QWORD *)(v5 + 288); ; i = *(_QWORD *)(i + 288) ) /*0x361bab*/
      {
        cocos2d::CCArray::addObject(v4, *(struct cocos2d::CCObject **)(v5 + 264)); /*0x361bca*/
        v5 = i; /*0x361bd0*/
        if ( !i ) /*0x361bd6*/
          break; /*0x361bd6*/
      }
      return (__int64)v4; /*0x361be1*/
    }
  }
  return result; /*0x361be4*/
}

// [9/36] Address: 0x361bf0
// Method: GJEffectManager::processColors
void __fastcall GJEffectManager_processColors(__int64 a1)
{
  __int64 v2; // r8
  int v3; // ebp
  __int64 v4; // r14
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  char v9; // [rsp+40h] [rbp+8h] BYREF

  sub_361D10(a1); /*0x361bfc*/
  v2 = *(_QWORD *)(a1 + 344); /*0x361c01*/
  v3 = 0; /*0x361c1f*/
  if ( (*(_QWORD *)(a1 + 352) - v2) / 72 ) /*0x361c2f*/
  {
    v4 = 0; /*0x361c42*/
    do /*0x361cd5*/
    {
      v5 = v4 + v2; /*0x361c55*/
      v6 = sub_3624A0(a1, *(unsigned int *)(v4 + v2 + 20)); /*0x361c5c*/
      if ( !*(_DWORD *)(v5 + 52) && (!v6 || !*(_DWORD *)(v6 + 120)) ) /*0x361c6c*/
      {
        v7 = *(_QWORD *)(v6 + 144); /*0x361c72*/
        v8 = sub_368560(a1, &v9, v7 + 327, v5); /*0x361c8b*/
        *(_WORD *)(v7 + 327) = *(_WORD *)v8; /*0x361c93*/
        *(_BYTE *)(v7 + 329) = *(_BYTE *)(v8 + 2); /*0x361c9e*/
      }
      v2 = *(_QWORD *)(a1 + 344); /*0x361ca4*/
      ++v3; /*0x361cab*/
      v4 += 72; /*0x361cba*/
    }
    while ( v3 < (unsigned __int64)((*(_QWORD *)(a1 + 352) - v2) / 72) ); /*0x361cd5*/
  }
  sub_361DD0(a1); /*0x361ced*/
  LevelEditorLayer_updateEditorMode(a1); /*0x361cfd*/
}

// [11/36] Address: 0x362470
// Method: GJEffectManager::wouldCreateLoop
char __fastcall GJEffectManager_wouldCreateLoop(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax

  if ( *(_DWORD *)(a2 + 56) == a3 ) /*0x362474*/
  {
LABEL_4:
    LOBYTE(v3) = 1; /*0x362492*/
  }
  else
  {
    while ( 1 ) /*0x362480*/
    {
      v3 = *(_QWORD *)(a2 + 64); /*0x362480*/
      a2 = v3; /*0x362484*/
      if ( !v3 ) /*0x36248a*/
        break; /*0x36248a*/
      if ( *(_DWORD *)(v3 + 56) == a3 ) /*0x362490*/
        goto LABEL_4; /*0x362490*/
    }
  }
  return v3; /*0x362494*/
}

// [12/36] Address: 0x3626b0
// Method: GJEffectManager::setColorAction
__int64 __fastcall GJEffectManager_setColorAction(__int64 a1, __int64 a2, int a3)
{
  int v3; // esi
  __int64 result; // rax

  v3 = a3; /*0x3626c6*/
  if ( a3 < 0 ) /*0x3626d2*/
    v3 = 0; /*0x3626d2*/
  if ( v3 > 1101 ) /*0x3626dc*/
    v3 = 1101; /*0x3626dc*/
  *(_DWORD *)(a2 + 92) = v3; /*0x3626df*/
  cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(a1 + 328), (struct cocos2d::CCObject *)a2, v3); /*0x3626ef*/
  *(_QWORD *)(*(_QWORD *)(a1 + 736) + 8LL * v3) = a2; /*0x362701*/
  result = sub_362560(a1, (unsigned int)v3); /*0x362705*/
  *(_QWORD *)(a2 + 144) = result; /*0x362714*/
  *(_QWORD *)(result + 344) = a2; /*0x36271b*/
  return result; /*0x36270a*/
}

// [13/36] Address: 0x362730
// Method: GJEffectManager::updateEffects
__int64 __fastcall GJEffectManager_updateEffects(__int64 a1, float a2)
{
  __int64 v2; // r10
  __int64 v4; // r10
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 *v9; // rcx
  __int64 result; // rax
  float v11; // xmm4_4
  float v12; // xmm2_4
  float v13; // xmm2_4
  float v14; // xmm3_4
  float *v15; // rdx
  float v16; // xmm0_4
  char v17; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 328); /*0x362736*/
  if ( v2 ) /*0x362752*/
  {
    v4 = *(_QWORD *)(v2 + 56); /*0x362754*/
    if ( v4 ) /*0x36275b*/
    {
      do /*0x3627c0*/
      {
        sub_35F9A0(*(_QWORD *)(v4 + 264)); /*0x36277e*/
        if ( !*(_DWORD *)(v5 + 120) ) /*0x362783*/
        {
          v7 = *(_QWORD *)(v5 + 144); /*0x36278f*/
          *(_WORD *)(v7 + 324) = *(_WORD *)(v5 + 58); /*0x362796*/
          *(_BYTE *)(v7 + 326) = *(_BYTE *)(v5 + 60); /*0x3627a2*/
          *(float *)(v7 + 320) = *(float *)(v5 + 64) * 255.0; /*0x3627b2*/
        }
        v4 = v6; /*0x3627ba*/
      }
      while ( v6 ); /*0x3627c0*/
    }
  }
  sub_367EB0(a1); /*0x3627d2*/
  v9 = *(__int64 **)(a1 + 440); /*0x3627d7*/
  result = *v9; /*0x3627de*/
  if ( (__int64 *)*v9 != v9 )
  {
    do
    {
      if ( *(_BYTE *)(result + 32) )
      {
        v15 = (float *)(result + 44); /*0x362869*/
      }
      else
      {
        if ( *(_BYTE *)(result + 33) ) /*0x362806*/
          goto LABEL_19; /*0x362806*/
        v11 = *(float *)(result + 20); /*0x36280c*/
        v12 = a2 + *(float *)(result + 36); /*0x362815*/
        *(float *)(result + 36) = v12; /*0x36281a*/
        v13 = v12 + *(float *)(result + 56); /*0x36281f*/
        if ( v13 < v11 )
          v14 = v13 <= 0.0 ? 0.0 : v13 / v11;
        else
          v14 = 1.0; /*0x362829*/
        v15 = (float *)(result + 44); /*0x362844*/
        v16 = (float)(*(float *)(result + 28) - *(float *)(result + 24)) * v14; /*0x362850*/
        *(_BYTE *)(result + 32) = v13 >= v11; /*0x362857*/
        *(float *)(result + 44) = v16 + *(float *)(result + 24); /*0x36285f*/
        if ( v13 < v11 ) /*0x362865*/
          goto LABEL_19; /*0x362865*/
      }
      if ( *v15 >= 1.0 ) /*0x362874*/
        result = sub_34FB90(a1 + 432, &v17, result, v8); /*0x362885*/
LABEL_19:
      result = *(_QWORD *)result; /*0x36288a*/
    }
    while ( result != *(_QWORD *)(a1 + 440) );
  }
  return result; /*0x36289f*/
}

// [14/36] Address: 0x3628b0
// Method: GJEffectManager::resetEffects
_QWORD *__fastcall GJEffectManager_resetEffects(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // r10
  unsigned __int64 v4; // r9
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  char v7; // cl
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rdi
  unsigned int *v15; // rdx
  unsigned int *v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdi
  _QWORD *result; // rax
  _QWORD *v21; // r10
  _QWORD *v22; // r10
  char v23; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 344); /*0x3628b9*/
  if ( v1 != *(_QWORD *)(a1 + 352) ) /*0x3628cf*/
    *(_QWORD *)(a1 + 352) = v1; /*0x3628d1*/
  sub_36C5B0(a1 + 368); /*0x3628df*/
  v3 = 10000; /*0x3628e7*/
  v4 = 0; /*0x3628ed*/
  do /*0x362916*/
  {
    v5 = *(_QWORD *)(a1 + 784); /*0x3628f0*/
    v6 = v4 >> 5; /*0x3628fa*/
    v7 = v4++ & 0x1F; /*0x362901*/
    *(_DWORD *)(v5 + 4 * v6) &= ~(1 << v7); /*0x36290e*/
    --v3; /*0x362912*/
  }
  while ( v3 ); /*0x362916*/
  sub_3586D0(a1 + 432, v5, v6, v4); /*0x36291f*/
  v8 = *(_QWORD *)(a1 + 504); /*0x362924*/
  v9 = *(_QWORD *)(a1 + 496); /*0x36292b*/
  if ( v9 != v8 ) /*0x362935*/
  {
    do /*0x362947*/
    {
      sub_685C0(v9 + 32); /*0x36293b*/
      v9 += 56; /*0x362940*/
    }
    while ( v9 != v8 ); /*0x362947*/
    *(_QWORD *)(a1 + 504) = *(_QWORD *)(a1 + 496); /*0x362950*/
  }
  v10 = *(_QWORD *)(a1 + 616); /*0x362957*/
  v11 = *(_QWORD *)(a1 + 608); /*0x36295e*/
  if ( v11 != v10 ) /*0x362968*/
  {
    do /*0x362980*/
    {
      sub_685C0(v11 + 24); /*0x362974*/
      v11 += 48; /*0x362979*/
    }
    while ( v11 != v10 ); /*0x362980*/
    *(_QWORD *)(a1 + 616) = *(_QWORD *)(a1 + 608); /*0x362989*/
  }
  v12 = *(_QWORD *)(a1 + 592); /*0x362990*/
  v13 = *(_QWORD *)(a1 + 584); /*0x362997*/
  if ( v13 != v12 ) /*0x3629a1*/
  {
    do /*0x3629b3*/
    {
      sub_685C0(v13 + 32); /*0x3629a7*/
      v13 += 56; /*0x3629ac*/
    }
    while ( v13 != v12 ); /*0x3629b3*/
    *(_QWORD *)(a1 + 592) = *(_QWORD *)(a1 + 584); /*0x3629bc*/
  }
  v14 = *(_QWORD *)(a1 + 1304); /*0x3629c3*/
  v15 = *(unsigned int **)(a1 + 1280); /*0x3629ca*/
  if ( v14 >= 0 ) /*0x3629d4*/
    v16 = &v15[(unsigned __int64)v14 >> 5]; /*0x3629ff*/
  else
    v16 = &v15[-((unsigned __int64)~v14 >> 5) - 1]; /*0x3629f3*/
  v17 = *(_QWORD *)(a1 + 1304) & 0x1FLL; /*0x362a08*/
  if ( v15 != v16 || v17 ) /*0x362a13*/
  {
    if ( v15 == v16 ) /*0x362a22*/
    {
      *v15 = (0xFFFFFFFF >> (32 - v17)) | *v15 & ~(0xFFFFFFFF >> (32 - v17)); /*0x362a36*/
    }
    else
    {
      *v15 = -1; /*0x362a3e*/
      memset(v15 + 1, 255, (char *)v16 - (char *)(v15 + 1)); /*0x362a4b*/
      if ( v17 ) /*0x362a53*/
        *v16 = (0xFFFFFFFF >> (32 - v17)) | *v16 & ~(0xFFFFFFFF >> (32 - v17)); /*0x362a67*/
    }
  }
  sub_3DB60(a1 + 1312); /*0x362a75*/
  sub_3DB60(a1 + 816); /*0x362a81*/
  LevelEditorLayer_getLastObjectX(a1); /*0x362a89*/
  *(_DWORD *)(a1 + 1008) = 0; /*0x362a95*/
  sub_16C8A0(a1 + 1376); /*0x362a9c*/
  v18 = *(_QWORD *)(a1 + 1464); /*0x362aa1*/
  v19 = *(_QWORD *)(a1 + 1456); /*0x362aa8*/
  if ( v19 != v18 ) /*0x362ab2*/
  {
    do /*0x362ac4*/
    {
      sub_685C0(v19 + 48); /*0x362ab8*/
      v19 += 72; /*0x362abd*/
    }
    while ( v19 != v18 ); /*0x362ac4*/
    *(_QWORD *)(a1 + 1464) = *(_QWORD *)(a1 + 1456); /*0x362acd*/
  }
  sub_3DB60(a1 + 1392); /*0x362adb*/
  sub_36C3F0(a1 + 520); /*0x362ae7*/
  sub_36BD90(a1 + 1208); /*0x362af3*/
  result = *(_QWORD **)(a1 + 1152); /*0x362af8*/
  v21 = (_QWORD *)*result; /*0x362b04*/
  if ( (_QWORD *)*result != result ) /*0x362b0a*/
  {
    do /*0x362b48*/
    {
      result = (_QWORD *)sub_659E0(a1 + 944, v21 + 2); /*0x362b1b*/
      if ( result ) /*0x362b23*/
      {
        v21 = (_QWORD *)*v22; /*0x362b3e*/
      }
      else
      {
        result = (_QWORD *)sub_36B760(a1 + 1144, &v23, v22); /*0x362b34*/
        v21 = (_QWORD *)*result; /*0x362b39*/
      }
    }
    while ( v21 != *(_QWORD **)(a1 + 1152) ); /*0x362b48*/
  }
  *(_QWORD *)(a1 + 2056) = 0; /*0x362b4a*/
  *(_QWORD *)(a1 + 2064) = 0; /*0x362b51*/
  *(_QWORD *)(a1 + 2072) = 0; /*0x362b58*/
  return result; /*0x362b5f*/
}

// [15/36] Address: 0x362b70
// Method: GJEffectManager::postCollisionCheck
void __fastcall GJEffectManager_postCollisionCheck(_QWORD *a1)
{
  _BYTE **v1; // rax
  _BYTE *v3; // rbx
  _QWORD *v4; // rdx
  _BYTE *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rsi

  v1 = (_BYTE **)a1[85]; /*0x362b7a*/
  v3 = *v1; /*0x362b84*/
  if ( *v1 != (_BYTE *)v1 ) /*0x362b8a*/
  {
    do /*0x362c9b*/
    {
      if ( v3[20] ) /*0x362bb3*/
      {
        v3 = *(_BYTE **)v3; /*0x362c91*/
      }
      else
      {
        GJEffectManager_handleObjectCollision(a1, 0, (unsigned int)((*((_DWORD *)v3 + 4) - 10000000) / 10000)); /*0x362bf0*/
        v4 = (_QWORD *)(a1[87] /*0x362c2c*/
                      + 16
                      * (a1[90]
                       & (0x100000001B3LL
                        * ((unsigned __int8)v3[19]
                         ^ (0x100000001B3LL
                          * ((unsigned __int8)v3[18]
                           ^ (0x100000001B3LL
                            * ((unsigned __int8)v3[17]
                             ^ (0x100000001B3LL * ((unsigned __int8)v3[16] ^ 0xCBF29CE484222325uLL))))))))));
        v5 = (_BYTE *)*v4; /*0x362c33*/
        if ( (_BYTE *)v4[1] == v3 ) /*0x362c3a*/
        {
          if ( v5 == v3 ) /*0x362c3f*/
          {
            v6 = a1[85]; /*0x362c41*/
            *v4 = v6; /*0x362c48*/
          }
          else
          {
            v6 = *((_QWORD *)v3 + 1); /*0x362c51*/
          }
          v4[1] = v6; /*0x362c4b*/
        }
        else if ( v5 == v3 ) /*0x362c5e*/
        {
          *v4 = *(_QWORD *)v3; /*0x362c63*/
        }
        v7 = *(_QWORD *)v3; /*0x362c66*/
        --a1[86]; /*0x362c6e*/
        **((_QWORD **)v3 + 1) = v7; /*0x362c7c*/
        *(_QWORD *)(v7 + 8) = *((_QWORD *)v3 + 1); /*0x362c83*/
        j_j_free(v3); /*0x362c87*/
        v3 = (_BYTE *)v7; /*0x362c8c*/
      }
    }
    while ( v3 != (_BYTE *)a1[85] ); /*0x362c9b*/
  }
}

// [16/36] Address: 0x362cc0
// Method: GJEffectManager::registerCollisionTrigger
// Hidden C++ exception states: #wind=1
__int64 __fastcall GJEffectManager_registerCollisionTrigger(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 a5,
        char a6,
        __int64 a7,
        int a8,
        int a9)
{
  unsigned int v10; // esi
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 result; // rax
  int v14; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v15; // [rsp+90h] [rbp+18h] BYREF
  unsigned int v16; // [rsp+98h] [rbp+20h] BYREF

  v16 = a4; /*0x362cc3*/
  v15 = a3; /*0x362cc7*/
  v14 = a2; /*0x362ccb*/
  v10 = a3; /*0x362cda*/
  v11 = a1 + 584; /*0x362cdd*/
  v12 = *(_QWORD *)(a1 + 592); /*0x362ce4*/
  if ( v12 == *(_QWORD *)(a1 + 600) ) /*0x362cec*/
    return sub_370790( /*0x362dbb*/
             (int)a1 + 584,
             v12,
             (unsigned int)&v14,
             (unsigned int)&v15,
             (__int64)&v16,
             (__int64)&a6,
             (__int64)&a5,
             a7,
             (__int64)&a8,
             (__int64)&a9);
  *(_BYTE *)v12 = 0; /*0x362cf2*/
  *(_QWORD *)(v12 + 4) = 0; /*0x362cf7*/
  *(_QWORD *)(v12 + 32) = 0; /*0x362cff*/
  *(_QWORD *)(v12 + 40) = 0; /*0x362d02*/
  *(_QWORD *)(v12 + 48) = 0; /*0x362d06*/
  *(_DWORD *)(v12 + 12) = a2; /*0x362d0a*/
  *(_DWORD *)(v12 + 24) = a8; /*0x362d11*/
  *(_DWORD *)(v12 + 28) = a9; /*0x362d18*/
  *(_BYTE *)(v12 + 20) = a6; /*0x362d20*/
  *(_DWORD *)(v12 + 16) = a5; /*0x362d28*/
  sub_98E50(v12 + 32, a7); /*0x362d33*/
  result = a4; /*0x362d39*/
  if ( (int)v10 < (int)a4 ) /*0x362d3d*/
  {
    result = v10; /*0x362d3d*/
    v10 = a4; /*0x362d40*/
  }
  *(_DWORD *)(v12 + 4) = v10; /*0x362d43*/
  *(_DWORD *)(v12 + 8) = result; /*0x362d46*/
  *(_QWORD *)(v11 + 8) += 56LL; /*0x362d49*/
  return result; /*0x362d4e*/
}

// [17/36] Address: 0x362dd0
// Method: GJEffectManager::handleObjectCollision
// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall GJEffectManager_handleObjectCollision(__int64 a1, unsigned __int8 a2, int a3, int a4)
{
  int v6; // r12d
  int v8; // ebp
  __int64 v9; // rdi
  __int64 v10; // r10
  unsigned __int64 result; // rax
  __int64 v12; // rsi
  int v13; // eax
  int *v14; // r8
  char v15; // dl
  int v16; // eax
  __int64 v17; // rcx
  char v18[16]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v19[32]; // [rsp+40h] [rbp-48h] BYREF
  int v20; // [rsp+90h] [rbp+8h] BYREF

  v6 = a2; /*0x362df2*/
  v8 = 0; /*0x362dfb*/
  v9 = *(_QWORD *)(a1 + 584); /*0x362dfd*/
  v10 = *(_QWORD *)(a1 + 592) - v9; /*0x362e0b*/
  result = (unsigned __int64)((unsigned __int128)(v10 * (__int128)0x4924924924924925LL) >> 64) >> 63; /*0x362e25*/
  if ( v10 / 56 ) /*0x362e29*/
  {
    v12 = 0; /*0x362e32*/
    do /*0x362f69*/
    {
      if ( !*(_BYTE *)(v12 + v9) /*0x362e65*/
        && *(_DWORD *)(v12 + v9 + 16) != v6
        && *(_DWORD *)(v12 + v9 + 4) == a3
        && *(_DWORD *)(v12 + v9 + 8) == a4 )
      {
        if ( *(_QWORD *)(a1 + 320) ) /*0x362e6b*/
        {
          sub_18A9D0(v19, v12 + v9 + 32); /*0x362e81*/
          (***(void (__fastcall ****)(_QWORD, _QWORD, _QWORD, _BYTE *, _DWORD, _DWORD))(a1 + 320))( /*0x362eb3*/
            *(_QWORD *)(a1 + 320),
            *(unsigned int *)(v12 + v9 + 12),
            *(unsigned __int8 *)(v12 + v9 + 20),
            v19,
            *(_DWORD *)(v12 + v9 + 24),
            *(_DWORD *)(v12 + v9 + 28));
          sub_685C0(v19); /*0x362ebc*/
        }
        else
        {
          v13 = *(_DWORD *)(v12 + v9 + 12); /*0x362ec3*/
          if ( v13 < 0 ) /*0x362ec9*/
            v13 = 0; /*0x362ec9*/
          if ( v13 > 9999 ) /*0x362ece*/
            v13 = 9999; /*0x362ece*/
          v20 = v13; /*0x362ed1*/
          v14 = (int *)(*(_QWORD *)(a1 + 1280) + 4 * ((unsigned __int64)v13 >> 5)); /*0x362ee9*/
          v15 = v13 & 0x1F; /*0x362eed*/
          v16 = *v14; /*0x362ef0*/
          v17 = a1 + 1312; /*0x362ef3*/
          if ( *(_BYTE *)(v12 + v9 + 20) ) /*0x362efa*/
          {
            *v14 = v16 | (1 << v15); /*0x362f04*/
            sub_658F0(v17, &v20); /*0x362f0f*/
          }
          else
          {
            *v14 = v16 & ~(1 << v15); /*0x362f19*/
            sub_67020(v17, v18, &v20); /*0x362f29*/
          }
        }
      }
      ++v8; /*0x362f2e*/
      v12 += 56; /*0x362f30*/
      v9 = *(_QWORD *)(a1 + 584); /*0x362f34*/
      result = v8; /*0x362f59*/
    }
    while ( v8 < (unsigned __int64)((*(_QWORD *)(a1 + 592) - v9) / 56) ); /*0x362f69*/
  }
  return result; /*0x362f6f*/
}

// [18/36] Address: 0x362f90
// Method: GJEffectManager::createMoveCommand
void __fastcall GJEffectManager_createMoveCommand(
        __int64 a1,
        float *a2,
        int a3,
        float a4,
        int a5,
        float a6,
        char a7,
        char a8,
        char a9,
        char a10,
        float a11,
        float a12,
        int a13,
        int a14)
{
  char v15; // r14
  char v17; // si
  char v19; // r15
  char v20; // bp
  __int64 v21; // rdx
  __int64 v22; // rbx
  float *v23; // rax
  float *v24; // rdi
  float v25; // xmm1_4
  bool v26; // zf
  double v27; // xmm0_8
  double v28; // xmm1_8
  float v29; // xmm2_4
  bool v30; // cl
  bool v31; // al
  char v32; // [rsp+68h] [rbp+10h] BYREF

  v15 = a10; /*0x362fb5*/
  v17 = a9; /*0x362fc1*/
  v19 = a8; /*0x362fcc*/
  v20 = a7; /*0x362fd5*/
  if ( (*a2 != *(float *)&dword_904B10 || a2[1] != *(float *)&dword_904B14 || a7 || a8 || a9 || a10) && a3 > 0 ) /*0x363014*/
  {
    v21 = *(_QWORD *)(a1 + 1560); /*0x36301a*/
    if ( v21 == *(_QWORD *)(a1 + 1568) ) /*0x36302d*/
    {
      sub_3709B0(a1 + 1552); /*0x36304b*/
    }
    else
    {
      GroupCommandObject2_GroupCommandObject2(v21); /*0x363032*/
      *(_QWORD *)(a1 + 1560) += 520LL; /*0x363037*/
    }
    v22 = *(_QWORD *)(a1 + 1560); /*0x363050*/
    *(_DWORD *)(v22 - 176) = a13; /*0x363066*/
    *(_DWORD *)(v22 - 172) = a14; /*0x363073*/
    *(_DWORD *)(v22 - 480) = a3; /*0x363079*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v32, (const struct cocos2d::CCPoint *)a2); /*0x363080*/
    *(_DWORD *)(v22 - 312) = 0; /*0x36308d*/
    v24 = v23; /*0x36309a*/
    cocos2d::CCPoint::operator=(v22 - 516, v23); /*0x36309d*/
    v25 = a11; /*0x3630a3*/
    v26 = a11 == 0.0; /*0x3630b9*/
    *(_DWORD *)(v22 - 508) = a5; /*0x3630bc*/
    *(_BYTE *)(v22 - 405) = v20; /*0x3630c2*/
    *(_BYTE *)(v22 - 404) = v19; /*0x3630c9*/
    *(_BYTE *)(v22 - 403) = v17; /*0x3630d0*/
    *(_BYTE *)(v22 - 402) = v15; /*0x3630d7*/
    *(double *)(v22 - 496) = a4; /*0x3630e2*/
    *(double *)(v22 - 504) = a6; /*0x3630f6*/
    v27 = 1.0; /*0x3630fe*/
    if ( v26 ) /*0x363108*/
      v28 = 1.0; /*0x36310a*/
    else
      v28 = v25; /*0x36310f*/
    v29 = a12; /*0x363112*/
    v26 = a12 == 0.0; /*0x36311b*/
    *(double *)(v22 - 392) = v28; /*0x36311e*/
    if ( !v26 ) /*0x363128*/
      v27 = v29; /*0x36312a*/
    *(double *)(v22 - 384) = v27; /*0x36312d*/
    v30 = v20 || v17; /*0x363143*/
    *(_BYTE *)(v22 - 401) = v30; /*0x363145*/
    v31 = v19 || v15; /*0x363159*/
    *(_BYTE *)(v22 - 400) = v31; /*0x36315b*/
    if ( *v24 != *(float *)&dword_904AF0 || v24[1] != *(float *)&dword_904AF4 || v30 || v31 ) /*0x363186*/
    {
      if ( *v24 != 0.0 && !v30 ) /*0x3631a1*/
      {
        *(_DWORD *)(v22 - 120) = 1; /*0x3631a3*/
        *(double *)(v22 - 112) = *v24; /*0x3631b1*/
      }
      if ( v24[1] != 0.0 && !v31 ) /*0x3631c4*/
      {
        if ( *(_DWORD *)(v22 - 120) ) /*0x3631c6*/
        {
          *(_DWORD *)(v22 - 116) = 2; /*0x3631e2*/
          *(double *)(v22 - 104) = v24[1]; /*0x3631f1*/
        }
        else
        {
          *(_DWORD *)(v22 - 120) = 2; /*0x3631cc*/
          *(double *)(v22 - 112) = v24[1]; /*0x3631db*/
        }
      }
    }
    else
    {
      *(_BYTE *)(v22 - 408) = 1; /*0x363188*/
      *(_BYTE *)(v22 - 406) = 1; /*0x36318f*/
    }
  }
}

// [19/36] Address: 0x363220
// Method: GJEffectManager::createRotateCommand
__int64 __fastcall GJEffectManager_createRotateCommand(
        __int64 a1,
        float a2,
        float a3,
        int a4,
        int a5,
        int a6,
        float a7,
        unsigned __int8 a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  __int64 v14; // rcx
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 1560) == *(_QWORD *)(a1 + 1568) ) /*0x363253*/
  {
    sub_3709B0(a1 + 1552); /*0x363271*/
  }
  else
  {
    GroupCommandObject2_GroupCommandObject2(*(_QWORD *)(a1 + 1560)); /*0x363258*/
    *(_QWORD *)(a1 + 1560) += 520LL; /*0x36325d*/
  }
  v14 = *(_QWORD *)(a1 + 1560); /*0x363276*/
  *(_DWORD *)(v14 - 476) = a5; /*0x36328b*/
  *(_DWORD *)(v14 - 176) = a11; /*0x363298*/
  *(double *)(v14 - 496) = a3; /*0x3632a5*/
  *(_DWORD *)(v14 - 172) = a12; /*0x3632b9*/
  *(_DWORD *)(v14 - 508) = a6; /*0x3632c3*/
  result = a8; /*0x3632c9*/
  *(_DWORD *)(v14 - 480) = a4; /*0x3632d1*/
  *(_DWORD *)(v14 - 312) = 1; /*0x3632db*/
  *(_BYTE *)(v14 - 336) = a8; /*0x3632e5*/
  *(_DWORD *)(v14 - 332) = 0; /*0x3632eb*/
  *(double *)(v14 - 504) = a7; /*0x3632f5*/
  *(double *)(v14 - 344) = a2; /*0x363304*/
  if ( a2 == 0.0 ) /*0x36330e*/
  {
    *(_BYTE *)(v14 - 408) = 1; /*0x363310*/
    *(_BYTE *)(v14 - 406) = 1; /*0x363317*/
  }
  else
  {
    *(double *)(v14 - 112) = a2; /*0x363320*/
    *(_DWORD *)(v14 - 120) = 3; /*0x363325*/
  }
  return result; /*0x36332c*/
}

// [20/36] Address: 0x363350
// Method: GJEffectManager::createFollowCommand
__int64 __fastcall GJEffectManager_createFollowCommand(
        __int64 a1,
        float a2,
        float a3,
        float a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8)
{
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 1560) == *(_QWORD *)(a1 + 1568) ) /*0x363385*/
  {
    sub_3709B0(a1 + 1552); /*0x3633a3*/
  }
  else
  {
    GroupCommandObject2_GroupCommandObject2(*(_QWORD *)(a1 + 1560)); /*0x36338a*/
    *(_QWORD *)(a1 + 1560) += 520LL; /*0x36338f*/
  }
  v9 = *(_QWORD *)(a1 + 1560); /*0x3633a8*/
  v10 = v9 - 520; /*0x3633af*/
  GroupCommandObject2_reset(v9 - 520); /*0x3633b9*/
  *(_DWORD *)(v10 + 40) = a5; /*0x3633cc*/
  *(_DWORD *)(v10 + 44) = a6; /*0x3633d6*/
  *(_DWORD *)(v10 + 344) = a7; /*0x3633e3*/
  result = a8; /*0x3633e9*/
  *(_DWORD *)(v10 + 348) = a8; /*0x3633f4*/
  *(_DWORD *)(v10 + 208) = 2; /*0x3633fa*/
  *(double *)(v10 + 192) = a2; /*0x363404*/
  *(double *)(v10 + 200) = a3; /*0x363414*/
  *(double *)(v10 + 24) = a4; /*0x363422*/
  if ( a2 == 0.0 && a3 == 0.0 ) /*0x363430*/
  {
    *(_BYTE *)(v9 - 408) = 1; /*0x363432*/
    *(_BYTE *)(v9 - 406) = 1; /*0x363439*/
  }
  return result; /*0x363440*/
}

// [21/36] Address: 0x363580
// Method: GJEffectManager::createKeyframeCommand
// Hidden C++ exception states: #wind=4
__int64 __fastcall GJEffectManager_createKeyframeCommand(
        _QWORD *a1,
        int a2,
        cocos2d::CCArray *a3,
        __int64 a4,
        int a5,
        int a6,
        char a7,
        float a8,
        float a9,
        float a10,
        float a11,
        float a12,
        float a13,
        __int64 a14)
{
  _QWORD *v18; // rbx
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 *v21; // rax
  cocos2d::CCArray *v22; // rdi
  unsigned __int64 v23; // rsi
  _QWORD *v24; // r13
  __int64 v25; // r8
  __int64 v26; // rdi
  __int64 v27; // rbx
  unsigned int v28; // r12d
  const struct cocos2d::CCPoint *v29; // r8
  unsigned __int64 v30; // xmm10_8
  float v31; // xmm15_4
  struct cocos2d::CCObject *v32; // rsi
  __int64 v33; // r14
  double v34; // xmm7_8
  double v35; // xmm8_8
  double v36; // xmm6_8
  double v37; // xmm1_8
  double v38; // xmm2_8
  float v39; // xmm0_4
  double v40; // xmm7_8
  double v41; // xmm8_8
  double v42; // xmm10_8
  char v43; // bl
  __int64 v44; // r15
  __int64 (__fastcall *v45)(__int64, char *); // rdi
  const struct cocos2d::CCPoint *v46; // rbx
  cocos2d::CCPoint *v47; // rax
  bool v48; // al
  bool v49; // al
  bool v50; // al
  double v51; // xmm2_8
  double v52; // xmm0_8
  double v53; // xmm2_8
  float v54; // xmm0_4
  float v55; // xmm0_4
  unsigned int v56; // eax
  __int64 v57; // r13
  double v58; // xmm6_8
  __int64 v59; // r15
  __int64 v60; // rax
  char *v61; // rdi
  char *v62; // rbx
  __int64 v63; // rsi
  unsigned __int64 v64; // r14
  unsigned __int64 v65; // rcx
  unsigned __int64 v66; // rdx
  unsigned __int64 v67; // rcx
  unsigned __int64 v68; // rax
  __int64 v69; // r12
  char *v70; // rdx
  char *v71; // rcx
  size_t v72; // r8
  void *v73; // rcx
  double v74; // xmm7_8
  int v75; // eax
  __int64 v76; // rdx
  double v77; // xmm1_8
  __int64 v78; // rdx
  double v79; // xmm6_8
  __int64 v80; // rdx
  double v81; // xmm0_8
  double v82; // xmm8_8
  int v83; // r14d
  __int64 v84; // rsi
  double *v85; // rbx
  double v86; // xmm1_8
  __int64 v87; // rdx
  double *v88; // rcx
  double v89; // xmm0_8
  __int64 v90; // rsi
  unsigned __int64 v91; // r14
  unsigned __int64 v92; // rcx
  unsigned __int64 v93; // rax
  __int64 v94; // r12
  char *v95; // rdx
  char *v96; // rcx
  size_t v97; // r8
  void *v98; // rcx
  __int64 v99; // rsi
  unsigned __int64 v100; // r14
  unsigned __int64 v101; // rcx
  unsigned __int64 v102; // rax
  __int64 v103; // r12
  char *v104; // rdx
  char *v105; // rcx
  size_t v106; // r8
  void *v107; // rcx
  __int64 v108; // r9
  __int64 v109; // r10
  double v110; // xmm0_8
  __int64 v111; // r8
  char *v112; // r8
  unsigned __int64 v113; // rcx
  int v114; // r12d
  char *v115; // rbx
  __int64 v116; // rdx
  char *v117; // rdi
  __int64 v118; // r14
  __int64 v119; // rsi
  unsigned __int64 v120; // r15
  unsigned __int64 v121; // r8
  unsigned __int64 v122; // rcx
  __int64 v123; // r13
  char *v124; // rdx
  char *v125; // rcx
  char *v126; // r8
  void *v127; // rcx
  unsigned __int64 v128; // rsi
  _QWORD *v129; // rbx
  unsigned __int64 v130; // r15
  unsigned __int64 v131; // r8
  __int64 v132; // r13
  char *v133; // rdx
  _QWORD *v134; // rcx
  char *v135; // r8
  void *v136; // rcx
  char *v137; // rax
  char *v138; // rax
  char v139; // [rsp+30h] [rbp-D0h]
  char v140; // [rsp+31h] [rbp-CFh]
  void *Src[2]; // [rsp+38h] [rbp-C8h]
  char *v142; // [rsp+48h] [rbp-B8h]
  void *Block[2]; // [rsp+50h] [rbp-B0h] BYREF
  char *v144; // [rsp+60h] [rbp-A0h]
  __int64 v145; // [rsp+68h] [rbp-98h] BYREF
  float v146; // [rsp+70h] [rbp-90h] BYREF
  float v147; // [rsp+74h] [rbp-8Ch]
  __int64 v148; // [rsp+78h] [rbp-88h]
  float v149; // [rsp+80h] [rbp-80h]
  float v150; // [rsp+84h] [rbp-7Ch]
  float v151; // [rsp+88h] [rbp-78h]
  signed int v152; // [rsp+8Ch] [rbp-74h]
  float v153; // [rsp+90h] [rbp-70h]
  float v154; // [rsp+94h] [rbp-6Ch]
  float v155; // [rsp+98h] [rbp-68h]
  float v156; // [rsp+A0h] [rbp-60h] BYREF
  float v157; // [rsp+A4h] [rbp-5Ch]
  char v158[8]; // [rsp+A8h] [rbp-58h] BYREF
  void *v159; // [rsp+B0h] [rbp-50h] BYREF
  char v160[8]; // [rsp+B8h] [rbp-48h] BYREF
  char v161[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v162; // [rsp+C8h] [rbp-38h]
  __int64 v163; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v164; // [rsp+D8h] [rbp-28h]
  __int64 v166; // [rsp+1C0h] [rbp+C0h]
  unsigned __int64 v167; // [rsp+1C0h] [rbp+C0h]

  if ( !a3 ) /*0x3635f2*/
    return 0; /*0x3635f6*/
  v151 = fmaxf(0.000099999997, a13); /*0x36360b*/
  if ( a7 ) /*0x363617*/
  {
    v20 = a1[189]; /*0x363666*/
    if ( a1[188] == v20 ) /*0x363674*/
    {
      v159 = operator new(0x208u); /*0x363695*/
      v19 = GroupCommandObject2_GroupCommandObject2(v159); /*0x3636a1*/
      v148 = v19; /*0x3636a4*/
    }
    else
    {
      v21 = (__int64 *)(v20 - 8); /*0x363676*/
      v19 = *v21; /*0x36367a*/
      v148 = *v21; /*0x36367d*/
      a1[189] = v21; /*0x363682*/
    }
    v145 = v19; /*0x3636a9*/
    sub_BB550(a1 + 185, &v145); /*0x3636ba*/
  }
  else
  {
    v18 = a1 + 194; /*0x363619*/
    if ( a1[195] == a1[196] ) /*0x363628*/
    {
      sub_3709B0(v18); /*0x36364f*/
    }
    else
    {
      GroupCommandObject2_GroupCommandObject2(a1[195]); /*0x36362d*/
      v18[1] += 520LL; /*0x363632*/
    }
    v19 = v18[1] - 520LL; /*0x36363e*/
    v148 = v19; /*0x363645*/
  }
  *(_DWORD *)(v19 + 208) = 5; /*0x3636bf*/
  *(_DWORD *)(v19 + 344) = a5; /*0x3636d0*/
  *(_DWORD *)(v19 + 348) = a6; /*0x3636dd*/
  *(_DWORD *)(v19 + 40) = a2; /*0x3636e4*/
  *(_DWORD *)(v19 + 44) = a2; /*0x3636e8*/
  sub_98E50(v19 + 488, a14); /*0x3636fa*/
  *(_QWORD *)(v19 + 472) = a4; /*0x3636ff*/
  if ( a4 ) /*0x363709*/
    *(float *)(v19 + 480) = (*(float (__fastcall **)(__int64))(*(_QWORD *)a4 + 360LL))(a4); /*0x363717*/
  v145 = 0; /*0x363720*/
  v22 = a3; /*0x363729*/
  v23 = cocos2d::CCArray::count(a3) + 1; /*0x363739*/
  v24 = (_QWORD *)(v19 + 440); /*0x36373c*/
  v25 = *(_QWORD *)(v19 + 440); /*0x363743*/
  if ( v23 > (*(_QWORD *)(v19 + 456) - v25) / 448 ) /*0x36376f*/
  {
    v26 = (*(_QWORD *)(v19 + 448) - v25) / 448; /*0x36378c*/
    v27 = sub_3C460(448 * v23); /*0x36379b*/
    v162 = v19 + 440; /*0x36379e*/
    v163 = v27; /*0x3637a2*/
    v164 = v23; /*0x3637a6*/
    sub_372590(*v24, *(_QWORD *)(v19 + 448), v27, v19 + 440); /*0x3637b8*/
    sub_373480(v19 + 440, v27, v26, (unsigned int)v23); /*0x3637c9*/
    v22 = a3; /*0x3637cf*/
  }
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v156); /*0x3637da*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v158); /*0x3637e4*/
  v140 = 0; /*0x3637ea*/
  v28 = 0; /*0x3637ef*/
  if ( cocos2d::CCArray::count(v22) ) /*0x3637f5*/
  {
    v30 = _mm_load_si128((const __m128i *)&xmmword_831650).m128i_u64[0]; /*0x363807*/
    v31 = *(float *)&a3; /*0x363834*/
    while ( 1 ) /*0x36384c*/
    {
      v32 = cocos2d::CCArray::objectAtIndex(v22, v28); /*0x36384c*/
      if ( v24[1] == v24[2] ) /*0x363857*/
      {
        sub_370BE0(v24); /*0x36386b*/
      }
      else
      {
        sub_373620(); /*0x363859*/
        v24[1] += 448LL; /*0x36385e*/
      }
      v33 = v24[1]; /*0x363870*/
      *(_DWORD *)(v33 - 60) = *((_DWORD *)v32 + 231); /*0x36387a*/
      (*(void (__fastcall **)(struct cocos2d::CCObject *, float *))(*(_QWORD *)v32 + 1208LL))(v32, &v146); /*0x363889*/
      v34 = (*(float (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v32 + 128LL))(v32); /*0x36389e*/
      v35 = (*(float (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v32 + 144LL))(v32); /*0x3638b2*/
      v36 = (*(float (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v32 + 376LL))(v32); /*0x3638c6*/
      v37 = (*(float (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v32 + 392LL))(v32); /*0x3638d9*/
      *(_QWORD *)&v38 = COERCE_UNSIGNED_INT64(v36 - v37) & v30; /*0x3638e4*/
      if ( v38 > 179.999 && v38 < 180.001 ) /*0x3638fe*/
        break; /*0x3638fe*/
      if ( v34 < 0.0 && v35 < 0.0 ) /*0x363939*/
      {
        if ( v36 <= 0.0 ) /*0x363940*/
          v36 = v36 + 180.0; /*0x363949*/
        else
          v36 = v36 + -180.0; /*0x363942*/
        v34 = v34 * -1.0; /*0x36394e*/
LABEL_34:
        v35 = v35 * -1.0; /*0x363953*/
      }
LABEL_35:
      if ( v28 ) /*0x36395b*/
      {
        if ( a8 != 1.0 ) /*0x3639a3*/
          v146 = (float)((float)(v146 - v156) * a8) + v156; /*0x3639b9*/
        if ( a9 != 1.0 ) /*0x3639cd*/
          v147 = (float)((float)(v147 - v157) * a9) + v157; /*0x3639e3*/
        if ( a11 != 1.0 ) /*0x3639f7*/
          v34 = (v34 - v31) * a11 + v31; /*0x363a0c*/
        if ( a12 != 1.0 ) /*0x363a1e*/
          v35 = (v35 - v149) * a12 + v149; /*0x363a35*/
        if ( a10 != 1.0 ) /*0x363a4f*/
          v36 = (v36 - v150) * a10 + v150; /*0x363a64*/
        v40 = v34 / v31; /*0x363a70*/
        v41 = v35 / v149; /*0x363a77*/
      }
      else
      {
        cocos2d::CCPoint::operator=(&v156, &v146); /*0x363966*/
        v39 = v36; /*0x36396c*/
        v150 = v39; /*0x363970*/
        v31 = v34; /*0x363975*/
        v149 = v35; /*0x36397f*/
        v40 = 1.0; /*0x363984*/
        v41 = 1.0; /*0x36398c*/
      }
      cocos2d::CCPoint::operator=(v33 - 56, &v146); /*0x363a85*/
      cocos2d::CCPoint::operator=(v33 - 48, &v146); /*0x363a94*/
      *(double *)(v33 - 40) = v40; /*0x363a9a*/
      *(double *)(v33 - 32) = v41; /*0x363aa0*/
      v42 = (double)(360 * *((_DWORD *)v32 + 476)); /*0x363ab5*/
      *(double *)(v33 - 24) = v42 + v36; /*0x363ac2*/
      *(double *)(v33 - 448) = (float)(v151 * *((float *)v32 + 367)); /*0x363ad8*/
      *(_DWORD *)(v33 - 440) = *((_DWORD *)v32 + 378); /*0x363ae7*/
      *(_DWORD *)(v33 - 436) = *((_DWORD *)v32 + 379); /*0x363af4*/
      *(_BYTE *)(v33 - 418) = *((_BYTE *)v32 + 1882); /*0x363b02*/
      *(_DWORD *)(v33 - 64) = *((_DWORD *)v32 + 471); /*0x363b0f*/
      *(float *)(v33 - 8) = (float)((float)*((unsigned __int8 *)v32 + 1336) / 255.0) * *((float *)v32 + 477); /*0x363b31*/
      v43 = *((_BYTE *)v32 + 1883); /*0x363b37*/
      v139 = v43; /*0x363b3e*/
      v44 = 0; /*0x363b42*/
      if ( v145 ) /*0x363b4d*/
      {
        v44 = *v24 + 448LL * v152; /*0x363b5a*/
        v45 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v145 + 1208LL); /*0x363b6b*/
        v46 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *, char *))(*(_QWORD *)v32 + 1208LL))( /*0x363b7c*/
                                                 v32,
                                                 v160);
        v47 = (cocos2d::CCPoint *)v45(v145, v161); /*0x363b88*/
        v48 = cocos2d::CCPoint::equals(v47, v46); /*0x363b90*/
        v43 = v139; /*0x363b96*/
        v22 = a3; /*0x363b9b*/
        if ( v48 ) /*0x363ba4*/
          *(_BYTE *)(v44 + 30) = 0; /*0x363ba6*/
      }
      v49 = (int)v28 > 0 && (v43 || v28 < cocos2d::CCArray::count(v22) - 1); /*0x363bc4*/
      v50 = *((_BYTE *)v32 + 1880) && v49; /*0x363bd7*/
      *(_BYTE *)(v33 - 432) = v50; /*0x363bdd*/
      if ( !v145 ) /*0x363bea*/
        goto LABEL_71; /*0x363bea*/
      cocos2d::CCPoint::operator-(v33 - 56, &v159, v158); /*0x363bfc*/
      cocos2d::CCPoint::operator=(v33 - 56, &v159); /*0x363c0a*/
      *(double *)(v33 - 40) = *(double *)(v33 - 40) - v154; /*0x363c22*/
      *(double *)(v33 - 32) = *(double *)(v33 - 32) - v155; /*0x363c3a*/
      v51 = *(double *)(v33 - 24) - v153; /*0x363c4e*/
      *(double *)(v33 - 24) = v51; /*0x363c52*/
      v52 = v51 - v42; /*0x363c5b*/
      if ( v51 - v42 > 180.0 || v52 > 0.0 && *((_DWORD *)v32 + 475) == 2 ) /*0x363c75*/
      {
        v53 = v51 - 360.0; /*0x363c98*/
      }
      else
      {
        if ( v52 >= -180.0 && (v52 >= 0.0 || *((_DWORD *)v32 + 475) != 1) ) /*0x363c8c*/
          goto LABEL_70; /*0x363c8c*/
        v53 = v51 + 360.0; /*0x363c8e*/
      }
      *(double *)(v33 - 24) = v53; /*0x363ca0*/
LABEL_70:
      *(_DWORD *)(v44 + 20) = *((_DWORD *)v32 + 371); /*0x363ca6*/
      *(_BYTE *)(v44 + 28) = *((_BYTE *)v32 + 1881); /*0x363cb7*/
      *(_DWORD *)(v44 + 24) = *((_DWORD *)v32 + 473); /*0x363cc1*/
LABEL_71:
      v152 = v28; /*0x363cc5*/
      v145 = (__int64)v32; /*0x363cc9*/
      cocos2d::CCPoint::operator=(v158, &v146); /*0x363cd7*/
      v54 = v36; /*0x363cdd*/
      v153 = v54; /*0x363ce1*/
      v55 = v40; /*0x363ce6*/
      v154 = v55; /*0x363cea*/
      v155 = v41; /*0x363cf4*/
      if ( !v140 ) /*0x363cfe*/
      {
        if ( v28 == cocos2d::CCArray::count(v22) - 1 && v43 ) /*0x363d12*/
        {
          v28 = -1; /*0x363d14*/
          v140 = 1; /*0x363d1a*/
        }
        ++v28; /*0x363d1f*/
        v56 = cocos2d::CCArray::count(v22); /*0x363d25*/
        v30 = _mm_load_si128((const __m128i *)&xmmword_831650).m128i_u64[0]; /*0x363d2e*/
        if ( v28 < v56 ) /*0x363d37*/
          continue; /*0x363d37*/
      }
      v19 = v148; /*0x363d3d*/
      goto LABEL_77; /*0x363d3d*/
    }
    if ( COERCE_DOUBLE(*(_QWORD *)&v36 & v30) <= COERCE_DOUBLE(*(_QWORD *)&v37 & v30) ) /*0x36390f*/
    {
      v34 = v34 * -1.0; /*0x363926*/
      goto LABEL_35; /*0x36392b*/
    }
    if ( v36 <= 0.0 ) /*0x363916*/
      v36 = v36 + 180.0; /*0x36391f*/
    else
      v36 = v36 + -180.0; /*0x363918*/
    goto LABEL_34; /*0x36391d*/
  }
LABEL_77:
  v57 = 0; /*0x363d42*/
  v58 = 0.0; /*0x363d45*/
  *(_OWORD *)Src = 0; /*0x363d4c*/
  v142 = 0; /*0x363d52*/
  v59 = *(_QWORD *)(v19 + 440); /*0x363d57*/
  v60 = *(_QWORD *)(v19 + 448); /*0x363d5e*/
  v166 = v60; /*0x363d65*/
  v61 = 0; /*0x363d76*/
  if ( v59 == v60 ) /*0x363d7e*/
    goto LABEL_160; /*0x363d7e*/
  v62 = 0; /*0x363d84*/
  do /*0x36430f*/
  {
    if ( !*(_BYTE *)(v59 + 16) ) /*0x363d90*/
    {
      if ( v61 == v62 ) /*0x363d9e*/
      {
LABEL_121:
        v57 = v59; /*0x364095*/
        v58 = 0.0; /*0x364098*/
        if ( v61 != v62 ) /*0x36409f*/
        {
          v62 = v61; /*0x3640a5*/
          Src[1] = v61; /*0x3640a8*/
        }
        goto LABEL_158; /*0x3640ad*/
      }
      if ( v62 == v142 ) /*0x363da9*/
      {
        v63 = (v62 - v61) >> 3; /*0x363dc7*/
        if ( v63 == 0x1FFFFFFFFFFFFFFFLL ) /*0x363dce*/
          goto LABEL_226; /*0x363dce*/
        v64 = v63 + 1; /*0x363dd4*/
        v65 = (v142 - v61) >> 3; /*0x363de0*/
        v66 = v65 >> 1; /*0x363de7*/
        if ( v65 <= 0x1FFFFFFFFFFFFFFFLL - (v65 >> 1) ) /*0x363df3*/
        {
          v68 = v65 + v66; /*0x363dfa*/
          v67 = v63 + 1; /*0x363dfe*/
          if ( v68 >= v64 ) /*0x363e04*/
            v67 = v68; /*0x363e04*/
          if ( v67 > 0x1FFFFFFFFFFFFFFFLL ) /*0x363e0b*/
            goto LABEL_225; /*0x363e0b*/
        }
        else
        {
          v67 = 0x1FFFFFFFFFFFFFFFLL; /*0x363df5*/
        }
        v69 = 8 * v67; /*0x363e11*/
        v61 = (char *)sub_3C460(8 * v67); /*0x363e21*/
        *(_QWORD *)&v61[8 * v63] = v59; /*0x363e24*/
        v70 = (char *)Src[0]; /*0x363e2d*/
        v71 = v61; /*0x363e32*/
        if ( v62 == Src[1] ) /*0x363e38*/
        {
          v72 = (char *)Src[1] - (char *)Src[0]; /*0x363e3a*/
        }
        else
        {
          memmove(v61, Src[0], v62 - (char *)Src[0]); /*0x363e45*/
          v72 = (char *)Src[1] - (char *)v62; /*0x363e4f*/
          v71 = &v61[8 * v63 + 8]; /*0x363e56*/
          v70 = v62; /*0x363e5a*/
        }
        memmove(v71, v70, v72); /*0x363e5d*/
        v73 = Src[0]; /*0x363e62*/
        if ( Src[0] ) /*0x363e6a*/
        {
          if ( ((v142 - (char *)Src[0]) & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 ) /*0x363e82*/
          {
            v73 = (void *)*((_QWORD *)Src[0] - 1); /*0x363e88*/
            if ( (unsigned __int64)((char *)Src[0] - (char *)v73 - 8) > 0x1F ) /*0x363e97*/
              goto LABEL_216; /*0x363e97*/
          }
          j_j_free(v73); /*0x363e9d*/
        }
        Src[0] = v61; /*0x363ea2*/
        v62 = &v61[8 * v64]; /*0x363ea7*/
        v142 = &v61[v69]; /*0x363eaf*/
      }
      else
      {
        *(_QWORD *)v62 = v59; /*0x363dab*/
        v62 = (char *)Src[1] + 8; /*0x363db3*/
        v61 = (char *)Src[0]; /*0x363db7*/
      }
      Src[1] = v62; /*0x363eb4*/
      v74 = *(double *)v57; /*0x363eb9*/
      v75 = *(_DWORD *)(v57 + 384); /*0x363ebf*/
      if ( v75 == 1 ) /*0x363ec9*/
      {
        v76 = ((v62 - v61) >> 3) - 1; /*0x363ed9*/
        if ( v76 < 0 ) /*0x363ee0*/
          v77 = (double)(int)(v76 & 1 | ((unsigned __int64)v76 >> 1)) /*0x363efd*/
              + (double)(int)(v76 & 1 | ((unsigned __int64)v76 >> 1));
        else
          v77 = (double)(int)v76; /*0x363ee2*/
        v29 = 0; /*0x363f08*/
        if ( (v62 - v61) >> 3 != 1 ) /*0x363f0e*/
        {
          v78 = 0; /*0x363f14*/
          do /*0x363f4c*/
          {
            **(double **)&v61[v78] = v74 / v77; /*0x363f24*/
            v29 = (const struct cocos2d::CCPoint *)(unsigned int)((_DWORD)v29 + 1); /*0x363f28*/
            v78 += 8; /*0x363f2b*/
            v62 = (char *)Src[1]; /*0x363f2f*/
            v61 = (char *)Src[0]; /*0x363f37*/
          }
          while ( (int)v29 < (unsigned __int64)((((char *)Src[1] - (char *)Src[0]) >> 3) - 1) ); /*0x363f4c*/
        }
      }
      else
      {
        if ( v75 != 2 ) /*0x363f56*/
          goto LABEL_119; /*0x363f56*/
        v79 = 0.0; /*0x363f5c*/
        v80 = ((v62 - v61) >> 3) - 1; /*0x363f6a*/
        if ( v80 < 0 ) /*0x363f71*/
          v81 = (double)(int)(v80 & 1 | ((unsigned __int64)v80 >> 1)) /*0x363f8e*/
              + (double)(int)(v80 & 1 | ((unsigned __int64)v80 >> 1));
        else
          v81 = (double)(int)v80; /*0x363f73*/
        v82 = v74 / v81; /*0x363f96*/
        v83 = 0; /*0x363f9b*/
        if ( (v62 - v61) >> 3 != 1 ) /*0x363fa1*/
        {
          v84 = 0; /*0x363fa3*/
          do /*0x364000*/
          {
            v85 = *(double **)&v61[v84]; /*0x363fb0*/
            v86 = cocos2d::ccpDistance( /*0x363fd0*/
                    (cocos2d *)(v85 + 50),
                    (const struct cocos2d::CCPoint *)(*(_QWORD *)&v61[v84 + 8] + 400LL),
                    v29);
            v79 = v79 + v86; /*0x363fd4*/
            *v85 = v86; /*0x363fd8*/
            ++v83; /*0x363fdc*/
            v84 += 8; /*0x363fdf*/
            v62 = (char *)Src[1]; /*0x363fe3*/
            v61 = (char *)Src[0]; /*0x363feb*/
          }
          while ( v83 < (unsigned __int64)((((char *)Src[1] - (char *)Src[0]) >> 3) - 1) ); /*0x364000*/
        }
        v29 = 0; /*0x364002*/
        if ( (v62 - v61) >> 3 != 1 ) /*0x364013*/
        {
          v87 = 0; /*0x364015*/
          do /*0x36406a*/
          {
            v88 = *(double **)&v61[v87]; /*0x364024*/
            if ( v79 == 0.0 ) /*0x36402e*/
              v89 = v82; /*0x364030*/
            else
              v89 = *v88 / v79 * v74; /*0x36403e*/
            *v88 = v89; /*0x364042*/
            v29 = (const struct cocos2d::CCPoint *)(unsigned int)((_DWORD)v29 + 1); /*0x364046*/
            v87 += 8; /*0x364049*/
            v62 = (char *)Src[1]; /*0x36404d*/
            v61 = (char *)Src[0]; /*0x364055*/
          }
          while ( (int)v29 < (unsigned __int64)((((char *)Src[1] - (char *)Src[0]) >> 3) - 1) ); /*0x36406a*/
        }
      }
      v58 = 0.0; /*0x36406c*/
LABEL_119:
      v60 = v166; /*0x364070*/
      if ( *(int *)(v57 + 8) > 0 ) /*0x36407c*/
      {
        *(double *)(v57 + 376) = v74 + v58; /*0x364082*/
        v62 = (char *)Src[1]; /*0x36408b*/
        v61 = (char *)Src[0]; /*0x364090*/
      }
      goto LABEL_121; /*0x364090*/
    }
    if ( v61 == v62 ) /*0x3640b5*/
    {
      if ( v62 == v142 ) /*0x3640c0*/
      {
        v90 = (v62 - v61) >> 3; /*0x3640de*/
        if ( v90 == 0x1FFFFFFFFFFFFFFFLL ) /*0x3640e5*/
          goto LABEL_226; /*0x3640e5*/
        v91 = v90 + 1; /*0x3640eb*/
        v92 = (v142 - v61) >> 3; /*0x3640f7*/
        v66 = v92 >> 1; /*0x3640fe*/
        if ( v92 <= 0x1FFFFFFFFFFFFFFFLL - (v92 >> 1) ) /*0x36410a*/
        {
          v93 = v92 + v66; /*0x364111*/
          v67 = v90 + 1; /*0x364115*/
          if ( v93 >= v91 ) /*0x36411b*/
            v67 = v93; /*0x36411b*/
          if ( v67 > 0x1FFFFFFFFFFFFFFFLL ) /*0x364122*/
LABEL_225:
            sub_8CF0(v67, v66); /*0x36481c*/
        }
        else
        {
          v67 = 0x1FFFFFFFFFFFFFFFLL; /*0x36410c*/
        }
        v94 = 8 * v67; /*0x364128*/
        v61 = (char *)sub_3C460(8 * v67); /*0x364138*/
        *(_QWORD *)&v61[8 * v90] = v57; /*0x36413b*/
        v95 = (char *)Src[0]; /*0x364144*/
        v96 = v61; /*0x364149*/
        if ( v62 == Src[1] ) /*0x36414f*/
        {
          v97 = (char *)Src[1] - (char *)Src[0]; /*0x364151*/
        }
        else
        {
          memmove(v61, Src[0], v62 - (char *)Src[0]); /*0x36415c*/
          v97 = (char *)Src[1] - (char *)v62; /*0x364166*/
          v96 = &v61[8 * v90 + 8]; /*0x36416d*/
          v95 = v62; /*0x364171*/
        }
        memmove(v96, v95, v97); /*0x364174*/
        v98 = Src[0]; /*0x364179*/
        if ( Src[0] ) /*0x364181*/
        {
          if ( ((v142 - (char *)Src[0]) & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 ) /*0x364199*/
          {
            v98 = (void *)*((_QWORD *)Src[0] - 1); /*0x36419f*/
            if ( (unsigned __int64)((char *)Src[0] - (char *)v98 - 8) > 0x1F ) /*0x3641ae*/
              goto LABEL_216; /*0x3641ae*/
          }
          j_j_free(v98); /*0x3641b4*/
        }
        Src[0] = v61; /*0x3641b9*/
        v62 = &v61[8 * v91]; /*0x3641be*/
        v142 = &v61[v94]; /*0x3641c6*/
      }
      else
      {
        *(_QWORD *)v62 = v57; /*0x3640c2*/
        v62 = (char *)Src[1] + 8; /*0x3640ca*/
        v61 = (char *)Src[0]; /*0x3640ce*/
      }
      Src[1] = v62; /*0x3641d5*/
    }
    if ( v62 == v142 ) /*0x3641df*/
    {
      v99 = (v62 - v61) >> 3; /*0x3641fd*/
      if ( v99 == 0x1FFFFFFFFFFFFFFFLL ) /*0x364204*/
LABEL_226:
        ((void (__noreturn *)(void))sub_59000)(); /*0x364822*/
      v100 = v99 + 1; /*0x36420a*/
      v101 = (v142 - v61) >> 3; /*0x364216*/
      v66 = v101 >> 1; /*0x36421d*/
      if ( v101 <= 0x1FFFFFFFFFFFFFFFLL - (v101 >> 1) ) /*0x364229*/
      {
        v102 = v101 + v66; /*0x364230*/
        v67 = v99 + 1; /*0x364234*/
        if ( v102 >= v100 ) /*0x36423a*/
          v67 = v102; /*0x36423a*/
        if ( v67 > 0x1FFFFFFFFFFFFFFFLL ) /*0x364241*/
          goto LABEL_225; /*0x364241*/
      }
      else
      {
        v67 = 0x1FFFFFFFFFFFFFFFLL; /*0x36422b*/
      }
      v103 = 8 * v67; /*0x364247*/
      v61 = (char *)sub_3C460(8 * v67); /*0x364257*/
      *(_QWORD *)&v61[8 * v99] = v59; /*0x36425a*/
      v104 = (char *)Src[0]; /*0x364263*/
      v105 = v61; /*0x364268*/
      if ( v62 == Src[1] ) /*0x36426e*/
      {
        v106 = (char *)Src[1] - (char *)Src[0]; /*0x364270*/
      }
      else
      {
        memmove(v61, Src[0], v62 - (char *)Src[0]); /*0x36427b*/
        v106 = (char *)Src[1] - (char *)v62; /*0x364285*/
        v105 = &v61[8 * v99 + 8]; /*0x36428c*/
        v104 = v62; /*0x364290*/
      }
      memmove(v105, v104, v106); /*0x364293*/
      v107 = Src[0]; /*0x364298*/
      if ( Src[0] ) /*0x3642a0*/
      {
        if ( ((v142 - (char *)Src[0]) & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 ) /*0x3642b8*/
        {
          v107 = (void *)*((_QWORD *)Src[0] - 1); /*0x3642be*/
          if ( (unsigned __int64)((char *)Src[0] - (char *)v107 - 8) > 0x1F ) /*0x3642cd*/
            goto LABEL_216; /*0x3642cd*/
        }
        j_j_free(v107); /*0x3642d3*/
      }
      Src[0] = v61; /*0x3642d8*/
      v62 = &v61[8 * v100]; /*0x3642dd*/
      v142 = &v61[v103]; /*0x3642e5*/
    }
    else
    {
      *(_QWORD *)v62 = v59; /*0x3641e1*/
      v62 = (char *)Src[1] + 8; /*0x3641e9*/
      v61 = (char *)Src[0]; /*0x3641ed*/
    }
    Src[1] = v62; /*0x3642ea*/
    v58 = v58 + *(double *)v59; /*0x3642ef*/
    v60 = v166; /*0x3642f4*/
LABEL_158:
    v59 += 448; /*0x3642fb*/
  }
  while ( v59 != v60 ); /*0x36430f*/
  v19 = v148; /*0x364315*/
LABEL_160:
  v108 = 0; /*0x36431a*/
  v109 = *(_QWORD *)(v19 + 440); /*0x36431d*/
  if ( ((__int64)((unsigned __int128)((*(_QWORD *)(v19 + 448) - v109) * (__int128)0x4924924924924925LL) >> 64) >> 7) /*0x36434c*/
     + ((unsigned __int64)((unsigned __int128)((*(_QWORD *)(v19 + 448) - v109) * (__int128)0x4924924924924925LL) >> 64) >> 63)
     - 1 )
  {
    v110 = *(double *)(v19 + 24); /*0x364351*/
    v111 = 0; /*0x364357*/
    do /*0x36439d*/
    {
      v110 = v110 + *(double *)(v109 + v111); /*0x364360*/
      *(double *)(v19 + 24) = v110; /*0x364366*/
      v108 = (unsigned int)(v108 + 1); /*0x36436c*/
      v111 += 448; /*0x36436f*/
    }
    while ( (int)v108 < ((__int64)((unsigned __int128)((*(_QWORD *)(v19 + 448) - v109) * (__int128)0x4924924924924925LL) >> 64) >> 7) /*0x36439d*/
                      + ((unsigned __int64)((unsigned __int128)((*(_QWORD *)(v19 + 448) - v109)
                                                              * (__int128)0x4924924924924925LL) >> 64) >> 63)
                      - 1 );
    v61 = (char *)Src[0]; /*0x36439f*/
  }
  *(_OWORD *)Block = 0; /*0x3643a7*/
  v112 = 0; /*0x3643ad*/
  v144 = 0; /*0x3643b0*/
  v113 = (*(_QWORD *)(v19 + 448) - *(_QWORD *)(v19 + 440)) / 448LL; /*0x3643d7*/
  v167 = v113; /*0x3643da*/
  v114 = 0; /*0x3643e1*/
  v115 = 0; /*0x3643e4*/
  if ( v113 ) /*0x3643e9*/
  {
    v116 = 0; /*0x3643ef*/
    v145 = 0; /*0x3643f1*/
    v117 = (char *)Block[1]; /*0x3643f6*/
    while ( 1 ) /*0x364407*/
    {
      v118 = v116 + *(_QWORD *)(v19 + 440); /*0x364407*/
      if ( *(_BYTE *)(v118 + 30) ) /*0x36440a*/
      {
        if ( v114 < --v113 ) /*0x36441e*/
        {
          if ( v117 != v112 ) /*0x364427*/
          {
            *(_QWORD *)v117 = v118; /*0x364429*/
            v117 = (char *)Block[1] + 8; /*0x364431*/
            Block[1] = (char *)Block[1] + 8; /*0x364435*/
            v115 = (char *)Block[0]; /*0x36443a*/
            goto LABEL_207; /*0x36443f*/
          }
          v119 = (v117 - v115) >> 3; /*0x36444a*/
          if ( v119 == 0x1FFFFFFFFFFFFFFFLL ) /*0x364451*/
            goto LABEL_224; /*0x364451*/
          v120 = v119 + 1; /*0x364457*/
          v121 = (v112 - v115) >> 3; /*0x36445e*/
          if ( v121 <= 0x1FFFFFFFFFFFFFFFLL - (v121 >> 1) ) /*0x364471*/
          {
            v122 = v119 + 1; /*0x36447c*/
            if ( (v121 >> 1) + v121 >= v120 ) /*0x364482*/
              v122 = (v121 >> 1) + v121; /*0x364482*/
            if ( v122 > 0x1FFFFFFFFFFFFFFFLL ) /*0x364489*/
              goto LABEL_227; /*0x364489*/
          }
          else
          {
            v122 = 0x1FFFFFFFFFFFFFFFLL; /*0x364473*/
          }
          v123 = 8 * v122; /*0x36448f*/
          v115 = (char *)sub_3C460(8 * v122); /*0x36449f*/
          *(_QWORD *)&v115[8 * v119] = v118; /*0x3644a2*/
          v124 = (char *)Block[0]; /*0x3644ab*/
          v125 = v115; /*0x3644b0*/
          if ( v117 == Block[1] ) /*0x3644b6*/
          {
            v126 = (char *)((char *)Block[1] - (char *)Block[0]); /*0x3644b8*/
          }
          else
          {
            memmove(v115, Block[0], v117 - (char *)Block[0]); /*0x3644c3*/
            v126 = (char *)((char *)Block[1] - (char *)v117); /*0x3644cd*/
            v125 = &v115[8 * v119 + 8]; /*0x3644d4*/
            v124 = v117; /*0x3644d8*/
          }
          memmove(v125, v124, (size_t)v126); /*0x3644db*/
          v127 = Block[0]; /*0x3644e0*/
          if ( Block[0] ) /*0x3644e8*/
          {
            if ( ((v144 - (char *)Block[0]) & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 ) /*0x364500*/
            {
              v127 = (void *)*((_QWORD *)Block[0] - 1); /*0x364506*/
              if ( (unsigned __int64)((char *)Block[0] - (char *)v127 - 8) > 0x1F ) /*0x364515*/
                goto LABEL_211; /*0x364515*/
            }
            j_j_free(v127); /*0x36451b*/
          }
          Block[0] = v115; /*0x364520*/
          v117 = &v115[8 * v120]; /*0x364525*/
          Block[1] = v117; /*0x364529*/
          v112 = &v115[v123]; /*0x36452e*/
          v144 = &v115[v123]; /*0x364532*/
          v116 = v145; /*0x364537*/
LABEL_208:
          v113 = v167; /*0x3646ac*/
          goto LABEL_209; /*0x3646ac*/
        }
        v113 = v167; /*0x364541*/
      }
      if ( v115 != v117 ) /*0x36454b*/
      {
        v128 = (v117 - v115) >> 3; /*0x364557*/
        if ( v128 < 2 ) /*0x36455f*/
        {
          do /*0x36468e*/
          {
            *(_BYTE *)(*(_QWORD *)v115 + 30LL) = 0; /*0x364683*/
            v115 += 8; /*0x364687*/
          }
          while ( v115 != v117 ); /*0x36468e*/
        }
        else
        {
          if ( v117 == v112 ) /*0x364568*/
          {
            if ( v128 == 0x1FFFFFFFFFFFFFFFLL ) /*0x364580*/
LABEL_224:
              sub_59000(v113, v116, v112, v108); /*0x364816*/
            v130 = v128 + 1; /*0x364586*/
            v131 = (v112 - v115) >> 3; /*0x36458d*/
            if ( v131 <= 0x1FFFFFFFFFFFFFFFLL - (v131 >> 1) ) /*0x3645a0*/
            {
              v122 = v128 + 1; /*0x3645ab*/
              if ( (v131 >> 1) + v131 >= v130 ) /*0x3645b1*/
                v122 = (v131 >> 1) + v131; /*0x3645b1*/
              if ( v122 > 0x1FFFFFFFFFFFFFFFLL ) /*0x3645b8*/
LABEL_227:
                sub_8CF0(v122, v116); /*0x364828*/
            }
            else
            {
              v122 = 0x1FFFFFFFFFFFFFFFLL; /*0x3645a2*/
            }
            v132 = v122; /*0x3645be*/
            v129 = (_QWORD *)sub_3C460(8 * v122); /*0x3645ce*/
            v129[v128] = v118; /*0x3645d1*/
            v133 = (char *)Block[0]; /*0x3645da*/
            v134 = v129; /*0x3645df*/
            if ( v117 == Block[1] ) /*0x3645e5*/
            {
              v135 = (char *)((char *)Block[1] - (char *)Block[0]); /*0x3645e7*/
            }
            else
            {
              memmove(v129, Block[0], v117 - (char *)Block[0]); /*0x3645f2*/
              v135 = (char *)((char *)Block[1] - (char *)v117); /*0x3645fc*/
              v134 = &v129[v128 + 1]; /*0x364603*/
              v133 = v117; /*0x364607*/
            }
            memmove(v134, v133, (size_t)v135); /*0x36460a*/
            v136 = Block[0]; /*0x36460f*/
            if ( Block[0] ) /*0x364617*/
            {
              if ( ((v144 - (char *)Block[0]) & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 ) /*0x36462f*/
              {
                v136 = (void *)*((_QWORD *)Block[0] - 1); /*0x364635*/
                if ( (unsigned __int64)((char *)Block[0] - (char *)v136 - 8) > 0x1F ) /*0x364644*/
LABEL_211:
                  invoke_watson(0, 0, 0, 0, 0); /*0x3646de*/
              }
              j_j_free(v136); /*0x36464a*/
            }
            Block[0] = v129; /*0x36464f*/
            Block[1] = &v129[v130]; /*0x364658*/
            v144 = (char *)&v129[v132]; /*0x364661*/
          }
          else
          {
            *(_QWORD *)v117 = v118; /*0x36456a*/
            Block[1] = (char *)Block[1] + 8; /*0x36456d*/
            v129 = Block[0]; /*0x364573*/
          }
          sub_3D6450(*v129, Block, v112, v108); /*0x36466e*/
          v116 = v145; /*0x364673*/
        }
        v115 = (char *)Block[0]; /*0x364690*/
        v117 = (char *)Block[1]; /*0x364695*/
        if ( Block[0] != Block[1] ) /*0x36469d*/
        {
          v117 = (char *)Block[0]; /*0x36469f*/
          Block[1] = Block[0]; /*0x3646a2*/
        }
LABEL_207:
        v112 = v144; /*0x3646a7*/
        goto LABEL_208; /*0x3646a7*/
      }
LABEL_209:
      ++v114; /*0x3646b3*/
      v116 += 448; /*0x3646b6*/
      v145 = v116; /*0x3646bd*/
      v19 = v148; /*0x3646c5*/
      if ( v114 >= v113 ) /*0x3646cd*/
      {
        v61 = (char *)Src[0]; /*0x3646f8*/
        break; /*0x3646f8*/
      }
    }
  }
  if ( v115 ) /*0x364700*/
  {
    v137 = v115; /*0x364709*/
    if ( ((v112 - v115) & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 ) /*0x364713*/
    {
      v115 = (char *)*((_QWORD *)v115 - 1); /*0x364719*/
      if ( (unsigned __int64)(v137 - v115 - 8) > 0x1F ) /*0x364728*/
LABEL_216:
        invoke_watson(0, 0, 0, 0, 0); /*0x36472a*/
    }
    j_j_free(v115); /*0x36474a*/
    *(_OWORD *)Block = 0; /*0x364752*/
    v144 = 0; /*0x364758*/
    v61 = (char *)Src[0]; /*0x364761*/
  }
  if ( v61 ) /*0x364769*/
  {
    v138 = v61; /*0x364777*/
    if ( ((v142 - v61) & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 ) /*0x364781*/
    {
      v61 = (char *)*((_QWORD *)v61 - 1); /*0x364787*/
      if ( (unsigned __int64)(v138 - v61 - 8) > 0x1F ) /*0x364796*/
        invoke_watson(0, 0, 0, 0, 0); /*0x3647ab*/
    }
    j_j_free(v61); /*0x3647b5*/
  }
  return v19; /*0x3647bd*/
}

// [22/36] Address: 0x364830
// Method: GJEffectManager::controlActionsForControlID
unsigned __int64 __fastcall GJEffectManager_controlActionsForControlID(_QWORD *a1, int a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // r13
  int v5; // ebp
  __int64 v6; // rcx
  int v7; // r10d
  __int64 i; // rax
  __int64 **v9; // rcx
  __int64 *j; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // r13
  _BYTE *v14; // r14
  int v15; // r12d
  __int64 v16; // rdx
  __int64 v17; // r15
  _BYTE *v18; // rsi
  _BYTE *v19; // rcx
  _BYTE *v20; // rdi
  __int64 v21; // r8
  int v22; // r14d
  __int64 v23; // rsi
  _BYTE *v24; // r15
  _BYTE *v25; // rdi
  _BYTE *v26; // rcx
  _BYTE *v27; // rbx
  __int64 v28; // r8
  int v29; // r14d
  __int64 v30; // rsi
  _BYTE *v31; // r15
  _BYTE *v32; // rdi
  _BYTE *v33; // rcx
  _BYTE *v34; // rbx
  __int64 v35; // r8
  int v36; // r14d
  __int64 v37; // rsi
  _BYTE *v38; // r15
  _BYTE *v39; // rdi
  _BYTE *v40; // rcx
  _BYTE *v41; // rbx
  __int64 v42; // r8
  int v43; // edi
  __int64 v44; // rbx
  __int64 v45; // r8
  int v46; // edi
  __int64 v47; // rbx
  _QWORD *v48; // r14
  _QWORD *v49; // rbx
  __int64 v50; // r8
  __int64 v51; // r9
  int v52; // esi
  __int64 v53; // rdi
  unsigned __int64 *v54; // rcx
  unsigned __int64 result; // rax
  _QWORD *v56; // r13
  _QWORD *v57; // rbx
  __int64 v58; // r9
  _BYTE *v59; // r14
  __int64 v60; // r8
  int v61; // r12d
  __int64 v62; // r15
  _BYTE *v63; // rsi
  _BYTE *v64; // rcx
  _BYTE *v65; // rdi
  _QWORD *v66; // [rsp+60h] [rbp+8h] BYREF
  int v67; // [rsp+68h] [rbp+10h]

  v67 = a2; /*0x364830*/
  v66 = a1; /*0x364834*/
  v4 = a1; /*0x364848*/
  v5 = a3; /*0x36484b*/
  v6 = a1[195]; /*0x36484e*/
  v7 = a2; /*0x364855*/
  for ( i = v4[194]; i != v6; i += 520 ) /*0x364862*/
  {
    if ( *(_DWORD *)(i + 348) == a2 ) /*0x36486a*/
    {
      if ( (_DWORD)a3 ) /*0x36486e*/
      {
        if ( (_DWORD)a3 == 1 ) /*0x364879*/
        {
          *(_BYTE *)(i + 113) = 1; /*0x36487b*/
        }
        else if ( (_DWORD)a3 == 2 ) /*0x364884*/
        {
          *(_BYTE *)(i + 113) = 0; /*0x364886*/
        }
      }
      else
      {
        *(_BYTE *)(i + 114) = 1; /*0x364870*/
      }
    }
  }
  v9 = (__int64 **)v4[55]; /*0x364895*/
  for ( j = *v9; j != (__int64 *)v9; j = (__int64 *)*j ) /*0x3648a2*/
  {
    if ( *((_DWORD *)j + 13) == a2 ) /*0x3648a7*/
    {
      if ( (_DWORD)a3 ) /*0x3648ab*/
      {
        if ( (_DWORD)a3 == 1 ) /*0x3648b6*/
        {
          *((_BYTE *)j + 33) = 1; /*0x3648b8*/
        }
        else if ( (_DWORD)a3 == 2 ) /*0x3648c1*/
        {
          *((_BYTE *)j + 33) = 0; /*0x3648c3*/
        }
      }
      else
      {
        *((_BYTE *)j + 32) = 1; /*0x3648ad*/
      }
    }
  }
  v11 = (_QWORD *)v4[66]; /*0x3648cf*/
  v12 = (_QWORD *)*v11; /*0x3648db*/
  if ( (_QWORD *)*v11 != v11 ) /*0x3648e1*/
  {
    v13 = (_QWORD *)v4[66]; /*0x3648e7*/
    while ( 1 ) /*0x3648f0*/
    {
      v14 = (_BYTE *)v12[4]; /*0x3648f0*/
      v15 = 0; /*0x3648f4*/
      v16 = v12[3]; /*0x3648f7*/
      if ( (__int64)&v14[-v16] >> 6 ) /*0x364901*/
        break; /*0x364901*/
LABEL_36:
      v12 = (_QWORD *)*v12; /*0x3649ea*/
      if ( v12 == v13 ) /*0x3649f0*/
      {
        v4 = v66; /*0x3649f6*/
        goto LABEL_38; /*0x3649f6*/
      }
    }
    v17 = 0; /*0x36490e*/
    while ( 1 ) /*0x364911*/
    {
      if ( *(_DWORD *)(v17 + v16 + 24) == v7 ) /*0x364916*/
      {
        switch ( v5 ) /*0x36491e*/
        {
          case 0: /*0x36491e*/
            v18 = (_BYTE *)(v16 + ((v15 + 1LL) << 6)); /*0x36492e*/
            if ( v18 != v14 ) /*0x364934*/
            {
              v19 = v18 - 56; /*0x364936*/
              do /*0x364991*/
              {
                v20 = v19 + 64; /*0x364943*/
                *(v19 - 8) = *v18; /*0x364947*/
                *((_DWORD *)v19 - 1) = *((_DWORD *)v19 + 15); /*0x364951*/
                *(_DWORD *)v19 = *((_DWORD *)v19 + 16); /*0x364956*/
                *((_DWORD *)v19 + 1) = *((_DWORD *)v19 + 17); /*0x36495b*/
                v19[8] = v19[72]; /*0x364962*/
                *((_DWORD *)v19 + 3) = *((_DWORD *)v19 + 19); /*0x364968*/
                *((_DWORD *)v19 + 4) = *((_DWORD *)v19 + 20); /*0x36496e*/
                *((_DWORD *)v19 + 5) = *((_DWORD *)v19 + 21); /*0x364974*/
                v19[24] = v19[88]; /*0x36497b*/
                sub_C0B90(v19 + 32, v19 + 96, a3, a4); /*0x364982*/
                v18 += 64; /*0x364987*/
                v19 = v20; /*0x36498b*/
              }
              while ( v18 != v14 ); /*0x364991*/
            }
            sub_685C0(v12[4] - 24LL); /*0x36499b*/
            v12[4] -= 64LL; /*0x3649a0*/
            v14 = (_BYTE *)v12[4]; /*0x3649a5*/
            v7 = v67; /*0x3649a9*/
            goto LABEL_35; /*0x3649ae*/
          case 1: /*0x36491e*/
            *(_BYTE *)(v17 + v16) = 1; /*0x3649b5*/
            break;
          case 2: /*0x36491e*/
            *(_BYTE *)(v17 + v16) = 0; /*0x3649c0*/
            break;
        }
        v14 = (_BYTE *)v12[4]; /*0x3649c5*/
      }
      ++v15; /*0x3649c9*/
      v17 += 64; /*0x3649cc*/
LABEL_35:
      v16 = v12[3]; /*0x3649d0*/
      if ( v15 >= (unsigned __int64)((__int64)&v14[-v16] >> 6) ) /*0x3649e4*/
        goto LABEL_36; /*0x3649e4*/
    }
  }
LABEL_38:
  v21 = v4[62]; /*0x3649fb*/
  v22 = 0; /*0x364a19*/
  if ( (v4[63] - v21) / 56 ) /*0x364a2a*/
  {
    v23 = 0; /*0x364a33*/
    do /*0x364a35*/
    {
      if ( *(_DWORD *)(v21 + v23 + 24) == v7 ) /*0x364a3a*/
      {
        switch ( v5 ) /*0x364a42*/
        {
          case 0: /*0x364a42*/
            v24 = (_BYTE *)v4[63]; /*0x364a48*/
            v25 = (_BYTE *)(v21 + 56 * (v22 + 1LL)); /*0x364a59*/
            if ( v25 != v24 ) /*0x364a5f*/
            {
              v26 = v25 - 48; /*0x364a61*/
              do /*0x364abb*/
              {
                v27 = v26 + 56; /*0x364a73*/
                *(v26 - 8) = *v25; /*0x364a77*/
                *((_DWORD *)v26 - 1) = *((_DWORD *)v26 + 13); /*0x364a81*/
                *v26 = v26[56]; /*0x364a87*/
                *((_DWORD *)v26 + 1) = *((_DWORD *)v26 + 15); /*0x364a8c*/
                *((_DWORD *)v26 + 2) = *((_DWORD *)v26 + 16); /*0x364a92*/
                *((_DWORD *)v26 + 3) = *((_DWORD *)v26 + 17); /*0x364a98*/
                *((_DWORD *)v26 + 4) = *((_DWORD *)v26 + 18); /*0x364a9e*/
                v26[20] = v26[76]; /*0x364aa5*/
                sub_C0B90(v26 + 24, v26 + 80, v21, a4); /*0x364aac*/
                v25 += 56; /*0x364ab1*/
                v26 = v27; /*0x364ab5*/
              }
              while ( v25 != v24 ); /*0x364abb*/
            }
            sub_685C0(v4[63] - 24LL); /*0x364ac8*/
            v4[63] -= 56LL; /*0x364acd*/
            v7 = v67; /*0x364ad5*/
            goto LABEL_51; /*0x364ada*/
          case 1: /*0x364a42*/
            *(_BYTE *)(v21 + v23) = 1; /*0x364ae1*/
            break;
          case 2: /*0x364a42*/
            *(_BYTE *)(v21 + v23) = 0; /*0x364aec*/
            break;
        }
      }
      ++v22; /*0x364af1*/
      v23 += 56; /*0x364af4*/
LABEL_51:
      v21 = v4[62]; /*0x364af8*/
    }
    while ( v22 < (unsigned __int64)((v4[63] - v21) / 56) ); /*0x364a35*/
  }
  v28 = v4[73]; /*0x364b29*/
  v29 = 0; /*0x364b3a*/
  if ( (v4[74] - v28) / 56 ) /*0x364b4e*/
  {
    v30 = 0; /*0x364b57*/
    do /*0x364b60*/
    {
      if ( *(_DWORD *)(v28 + v30 + 28) == v7 ) /*0x364b65*/
      {
        switch ( v5 ) /*0x364b6d*/
        {
          case 0: /*0x364b6d*/
            v31 = (_BYTE *)v4[74]; /*0x364b73*/
            v32 = (_BYTE *)(v28 + 56 * (v29 + 1LL)); /*0x364b84*/
            if ( v32 != v31 ) /*0x364b8a*/
            {
              v33 = v32 - 48; /*0x364b8c*/
              do /*0x364bda*/
              {
                v34 = v33 + 56; /*0x364b93*/
                *(v33 - 8) = *v32; /*0x364b97*/
                *((_DWORD *)v33 - 1) = *((_DWORD *)v33 + 13); /*0x364ba1*/
                *(_DWORD *)v33 = *((_DWORD *)v33 + 14); /*0x364ba6*/
                *((_DWORD *)v33 + 1) = *((_DWORD *)v33 + 15); /*0x364bab*/
                *((_DWORD *)v33 + 2) = *((_DWORD *)v33 + 16); /*0x364bb1*/
                v33[12] = v33[68]; /*0x364bb8*/
                *((_DWORD *)v33 + 4) = *((_DWORD *)v33 + 18); /*0x364bbe*/
                *((_DWORD *)v33 + 5) = *((_DWORD *)v33 + 19); /*0x364bc4*/
                sub_C0B90(v33 + 24, v33 + 80, v28, a4); /*0x364bcb*/
                v32 += 56; /*0x364bd0*/
                v33 = v34; /*0x364bd4*/
              }
              while ( v32 != v31 ); /*0x364bda*/
            }
            sub_685C0(v4[74] - 24LL); /*0x364be7*/
            v4[74] -= 56LL; /*0x364bec*/
            v7 = v67; /*0x364bf4*/
            goto LABEL_65; /*0x364bf9*/
          case 1: /*0x364b6d*/
            *(_BYTE *)(v28 + v30) = 1; /*0x364c00*/
            break;
          case 2: /*0x364b6d*/
            *(_BYTE *)(v28 + v30) = 0; /*0x364c0b*/
            break;
        }
      }
      ++v29; /*0x364c10*/
      v30 += 56; /*0x364c13*/
LABEL_65:
      v28 = v4[73]; /*0x364c17*/
    }
    while ( v29 < (unsigned __int64)((v4[74] - v28) / 56) ); /*0x364b60*/
  }
  v35 = v4[76]; /*0x364c48*/
  v36 = 0; /*0x364c66*/
  if ( (v4[77] - v35) / 48 ) /*0x364c77*/
  {
    v37 = 0; /*0x364c80*/
    do /*0x364c82*/
    {
      if ( *(_DWORD *)(v37 + v35 + 16) == v7 ) /*0x364c87*/
      {
        switch ( v5 ) /*0x364c8f*/
        {
          case 0: /*0x364c8f*/
            v38 = (_BYTE *)v4[77]; /*0x364c95*/
            v39 = (_BYTE *)(v35 + 48 * (v36 + 1LL)); /*0x364caa*/
            if ( v39 != v38 ) /*0x364cb0*/
            {
              v40 = v39 - 40; /*0x364cb2*/
              do /*0x364cf8*/
              {
                v41 = v40 + 48; /*0x364cc3*/
                *(v40 - 8) = *v39; /*0x364cc7*/
                *((_DWORD *)v40 - 1) = *((_DWORD *)v40 + 11); /*0x364cd1*/
                *v40 = v40[48]; /*0x364cd7*/
                *((_DWORD *)v40 + 1) = *((_DWORD *)v40 + 13); /*0x364cdc*/
                *((_DWORD *)v40 + 2) = *((_DWORD *)v40 + 14); /*0x364ce2*/
                sub_C0B90(v40 + 16, v40 + 64, v35, a4); /*0x364ce9*/
                v39 += 48; /*0x364cee*/
                v40 = v41; /*0x364cf2*/
              }
              while ( v39 != v38 ); /*0x364cf8*/
            }
            sub_685C0(v4[77] - 24LL); /*0x364d05*/
            v4[77] -= 48LL; /*0x364d0a*/
            v7 = v67; /*0x364d12*/
            goto LABEL_79; /*0x364d17*/
          case 1: /*0x364c8f*/
            *(_BYTE *)(v37 + v35) = 1; /*0x364d1e*/
            break;
          case 2: /*0x364c8f*/
            *(_BYTE *)(v37 + v35) = 0; /*0x364d29*/
            break;
        }
      }
      ++v36; /*0x364d2e*/
      v37 += 48; /*0x364d31*/
LABEL_79:
      v35 = v4[76]; /*0x364d35*/
    }
    while ( v36 < (unsigned __int64)((v4[77] - v35) / 48) ); /*0x364c82*/
  }
  v42 = v4[182]; /*0x364d66*/
  v43 = 0; /*0x364d84*/
  if ( (v4[183] - v42) / 72 ) /*0x364d94*/
  {
    v44 = 0; /*0x364d9d*/
    while ( 1 ) /*0x364da0*/
    {
      if ( *(_DWORD *)(v44 + v42 + 32) != v7 ) /*0x364da5*/
        goto LABEL_89; /*0x364da5*/
      if ( v5 ) /*0x364da9*/
        break; /*0x364da9*/
      sub_36D640(v42 + 72LL * v43 + 72, v4[183]); /*0x364dc1*/
      sub_685C0(v4[183] - 24LL); /*0x364dd1*/
      v4[183] -= 72LL; /*0x364dd6*/
      v7 = v67; /*0x364dde*/
LABEL_90:
      v42 = v4[182]; /*0x364e02*/
      if ( v43 >= (unsigned __int64)((v4[183] - v42) / 72) ) /*0x364e2d*/
        goto LABEL_91; /*0x364e2d*/
    }
    if ( v5 == 1 ) /*0x364de8*/
    {
      *(_BYTE *)(v44 + v42 + 1) = 1; /*0x364dea*/
    }
    else if ( v5 == 2 ) /*0x364df4*/
    {
      *(_BYTE *)(v44 + v42 + 1) = 0; /*0x364df6*/
    }
LABEL_89:
    ++v43; /*0x364dfc*/
    v44 += 72; /*0x364dfe*/
    goto LABEL_90; /*0x364dfe*/
  }
LABEL_91:
  v45 = v4[43]; /*0x364e33*/
  v46 = 0; /*0x364e44*/
  if ( (v4[44] - v45) / 72 ) /*0x364e57*/
  {
    v47 = 0; /*0x364e60*/
    while ( 1 ) /*0x364e62*/
    {
      if ( *(_DWORD *)(v47 + v45 + 64) != v7 ) /*0x364e67*/
        goto LABEL_100; /*0x364e67*/
      if ( v5 ) /*0x364e6b*/
        break; /*0x364e6b*/
      memmove((void *)(v45 + 72LL * v46), (const void *)(v45 + 72LL * v46 + 72), v4[44] - (v45 + 72LL * v46 + 72)); /*0x364e86*/
      v4[44] -= 72LL; /*0x364e8b*/
      v7 = v67; /*0x364e93*/
LABEL_101:
      v45 = v4[43]; /*0x364eb5*/
      if ( v46 >= (unsigned __int64)((v4[44] - v45) / 72) ) /*0x364ee0*/
        goto LABEL_102; /*0x364ee0*/
    }
    if ( v5 == 1 ) /*0x364e9d*/
    {
      *(_BYTE *)(v47 + v45) = 1; /*0x364e9f*/
    }
    else if ( v5 == 2 ) /*0x364ea8*/
    {
      *(_BYTE *)(v47 + v45) = 0; /*0x364eaa*/
    }
LABEL_100:
    ++v46; /*0x364eaf*/
    v47 += 72; /*0x364eb1*/
    goto LABEL_101; /*0x364eb1*/
  }
LABEL_102:
  v48 = (_QWORD *)v4[47]; /*0x364ee2*/
  v49 = (_QWORD *)*v48; /*0x364ee9*/
  if ( (_QWORD *)*v48 != v48 ) /*0x364eef*/
  {
    while ( 1 ) /*0x364f00*/
    {
      v50 = v49[4]; /*0x364f00*/
      v51 = v49[3]; /*0x364f07*/
      v52 = 0; /*0x364f11*/
      if ( (v50 - v51) / 72 ) /*0x364f21*/
        break; /*0x364f21*/
LABEL_115:
      v49 = (_QWORD *)*v49; /*0x364f9f*/
      if ( v49 == v48 ) /*0x364fa5*/
        goto LABEL_116; /*0x364fa5*/
    }
    v53 = 0; /*0x364f26*/
    while ( 1 ) /*0x364f28*/
    {
      if ( *(_DWORD *)(v53 + v51 + 64) != v7 ) /*0x364f2d*/
        goto LABEL_113; /*0x364f2d*/
      if ( v5 ) /*0x364f31*/
        break; /*0x364f31*/
      memmove((void *)(v51 + 72LL * v52), (const void *)(v51 + 72LL * v52 + 72), v50 - (v51 + 72LL * v52 + 72)); /*0x364f45*/
      v49[4] -= 72LL; /*0x364f4a*/
      v50 = v49[4]; /*0x364f4f*/
      v7 = v67; /*0x364f53*/
LABEL_114:
      v51 = v49[3]; /*0x364f79*/
      if ( v52 >= (unsigned __int64)((v50 - v51) / 72) ) /*0x364f9d*/
        goto LABEL_115; /*0x364f9d*/
    }
    if ( v5 == 1 ) /*0x364f5d*/
    {
      *(_BYTE *)(v53 + v51) = 1; /*0x364f5f*/
    }
    else if ( v5 == 2 ) /*0x364f68*/
    {
      *(_BYTE *)(v53 + v51) = 0; /*0x364f6a*/
    }
    v50 = v49[4]; /*0x364f6f*/
LABEL_113:
    ++v52; /*0x364f73*/
    v53 += 72; /*0x364f75*/
    goto LABEL_114; /*0x364f75*/
  }
LABEL_116:
  v54 = (unsigned __int64 *)v4[144]; /*0x364fab*/
  result = *v54; /*0x364fb2*/
  if ( (unsigned __int64 *)*v54 != v54 ) /*0x364fb8*/
  {
    do /*0x365003*/
    {
      if ( *(_DWORD *)(result + 76) == v7 ) /*0x364fc4*/
      {
        if ( v5 ) /*0x364fc8*/
        {
          if ( v5 == 1 ) /*0x364fe8*/
          {
            *(_BYTE *)(result + 104) = 1; /*0x364fea*/
          }
          else if ( v5 == 2 ) /*0x364ff3*/
          {
            *(_BYTE *)(result + 104) = 0; /*0x364ff5*/
          }
        }
        else
        {
          result = sub_36B760(v4 + 143, &v66, result); /*0x364fd9*/
          v7 = v67; /*0x364fde*/
        }
      }
      result = *(_QWORD *)result; /*0x364ff9*/
    }
    while ( result != v4[144] ); /*0x365003*/
  }
  v56 = (_QWORD *)v4[152]; /*0x365005*/
  v57 = (_QWORD *)*v56; /*0x36500c*/
  if ( (_QWORD *)*v56 != v56 ) /*0x365013*/
  {
    v58 = 0x4924924924924925LL; /*0x365019*/
    while ( 1 ) /*0x365030*/
    {
      v59 = (_BYTE *)v57[4]; /*0x365030*/
      v60 = v57[3]; /*0x365037*/
      v61 = 0; /*0x365041*/
      result = (unsigned __int64)((unsigned __int128)((__int64)&v59[-v60] * (__int128)0x4924924924924925LL) >> 64) >> 63; /*0x36504e*/
      if ( (__int64)&v59[-v60] / 56 ) /*0x365052*/
        break; /*0x365052*/
LABEL_142:
      v57 = (_QWORD *)*v57; /*0x36514d*/
      if ( v57 == v56 ) /*0x365153*/
        return result; /*0x365153*/
    }
    v62 = 0; /*0x36505b*/
    while ( 1 ) /*0x365060*/
    {
      if ( *(_DWORD *)(v60 + v62 + 20) == v7 ) /*0x365065*/
      {
        switch ( v5 ) /*0x36506d*/
        {
          case 0: /*0x36506d*/
            v63 = (_BYTE *)(v60 + 56 * (v61 + 1LL)); /*0x36507d*/
            if ( v63 != v59 ) /*0x365083*/
            {
              v64 = v63 - 48; /*0x365085*/
              do /*0x3650da*/
              {
                v65 = v64 + 56; /*0x365093*/
                *(v64 - 8) = *v63; /*0x365097*/
                *((_DWORD *)v64 - 1) = *((_DWORD *)v64 + 13); /*0x3650a1*/
                *(_DWORD *)v64 = *((_DWORD *)v64 + 14); /*0x3650a6*/
                *((_DWORD *)v64 + 1) = *((_DWORD *)v64 + 15); /*0x3650ab*/
                *((_DWORD *)v64 + 2) = *((_DWORD *)v64 + 16); /*0x3650b1*/
                *((_DWORD *)v64 + 3) = *((_DWORD *)v64 + 17); /*0x3650b7*/
                *((_DWORD *)v64 + 4) = *((_DWORD *)v64 + 18); /*0x3650bd*/
                v64[20] = v64[76]; /*0x3650c4*/
                sub_C0B90(v64 + 24, v64 + 80, v60, v58); /*0x3650cb*/
                v63 += 56; /*0x3650d0*/
                v64 = v65; /*0x3650d4*/
              }
              while ( v63 != v59 ); /*0x3650da*/
            }
            sub_685C0(v57[4] - 24LL); /*0x3650e4*/
            v57[4] -= 56LL; /*0x3650e9*/
            v58 = 0x4924924924924925LL; /*0x3650ee*/
            v59 = (_BYTE *)v57[4]; /*0x3650f8*/
            v7 = v67; /*0x3650fc*/
            goto LABEL_141; /*0x365101*/
          case 1: /*0x36506d*/
            *(_BYTE *)(v60 + v62) = 1; /*0x365108*/
            break;
          case 2: /*0x36506d*/
            *(_BYTE *)(v60 + v62) = 0; /*0x365113*/
            break;
        }
        v59 = (_BYTE *)v57[4]; /*0x365118*/
      }
      ++v61; /*0x36511c*/
      v62 += 56; /*0x36511f*/
LABEL_141:
      v60 = v57[3]; /*0x365123*/
      result = v61; /*0x365141*/
      if ( v61 >= (unsigned __int64)((__int64)&v59[-v60] / 56) ) /*0x365147*/
        goto LABEL_142; /*0x365147*/
    }
  }
  return result; /*0x365159*/
}

// [23/36] Address: 0x365c70
// Method: GJEffectManager::getMoveCommandObject
// Hidden C++ exception states: #wind=1
cocos2d::CCObject *__fastcall GJEffectManager_getMoveCommandObject(__int64 a1)
{
  __int64 v1; // rax
  __int64 *v2; // rax
  __int64 v3; // rdx
  cocos2d::CCObject *v5; // [rsp+30h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 1536); /*0x365c76*/
  if ( *(_QWORD *)(a1 + 1528) == v1 ) /*0x365c84*/
  {
    v5 = (cocos2d::CCObject *)operator new(0xF0u); /*0x365caa*/
    cocos2d::CCObject::CCObject(v5); /*0x365cb2*/
    *(_QWORD *)v5 = &CCMoveCNode::`vftable'; /*0x365cbf*/
    *((_QWORD *)v5 + 7) = 0; /*0x365cc4*/
    *((_QWORD *)v5 + 8) = 0; /*0x365cc8*/
    *((_QWORD *)v5 + 9) = 0; /*0x365ccc*/
    *((_QWORD *)v5 + 11) = 0; /*0x365cd0*/
    *((_QWORD *)v5 + 12) = 0; /*0x365cd4*/
    *((_QWORD *)v5 + 13) = 0; /*0x365cd8*/
    *((_WORD *)v5 + 56) = 0; /*0x365cdc*/
    *((_DWORD *)v5 + 29) = 0; /*0x365ce0*/
    *((_BYTE *)v5 + 120) = 0; /*0x365ce3*/
    *((_DWORD *)v5 + 31) = 0; /*0x365ce6*/
    *((_QWORD *)v5 + 16) = 0x3FF0000000000000LL; /*0x365cf3*/
    *((_QWORD *)v5 + 17) = 0x3FF0000000000000LL; /*0x365cfa*/
    *((_QWORD *)v5 + 18) = 0; /*0x365d01*/
    *((_QWORD *)v5 + 19) = 0; /*0x365d08*/
    *((_QWORD *)v5 + 20) = 0; /*0x365d0f*/
    *((_QWORD *)v5 + 21) = 0; /*0x365d16*/
    *((_QWORD *)v5 + 22) = 0; /*0x365d1d*/
    *((_DWORD *)v5 + 46) = 0; /*0x365d24*/
    *((_QWORD *)v5 + 24) = 0; /*0x365d2a*/
    *((_QWORD *)v5 + 25) = 0; /*0x365d31*/
    *((_WORD *)v5 + 104) = 0; /*0x365d38*/
    *((_QWORD *)v5 + 27) = 0; /*0x365d3f*/
    *((_QWORD *)v5 + 28) = 0; /*0x365d46*/
    *((_QWORD *)v5 + 29) = 0; /*0x365d4d*/
    cocos2d::CCObject::autorelease(v5); /*0x365d57*/
    cocos2d::CCObject::retain(v5); /*0x365d60*/
    return v5; /*0x365d66*/
  }
  else
  {
    v2 = (__int64 *)(v1 - 8); /*0x365c86*/
    v3 = *v2; /*0x365c8a*/
    *(_QWORD *)(a1 + 1536) = v2; /*0x365c8d*/
    return (cocos2d::CCObject *)v3; /*0x365c94*/
  }
}

// [24/36] Address: 0x3674e0
// Method: GJEffectManager::postMoveActions
__int64 __fastcall GJEffectManager_postMoveActions(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  int v4; // eax
  double v5; // xmm6_8
  double v6; // xmm7_8
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 i; // rdi
  __int64 v11; // rdi
  _BYTE v12[16]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v13[16]; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 1552); /*0x3674ea*/
  result = *(_QWORD *)(a1 + 1560); /*0x3674f4*/
  while ( v1 != result ) /*0x3674fe*/
  {
    if ( *(_BYTE *)(v1 + 433) ) /*0x367520*/
    {
      v4 = *(_DWORD *)(v1 + 208); /*0x36752d*/
      if ( !v4 || v4 == 2 ) /*0x36753a*/
      {
        v5 = *(double *)(v1 + 48); /*0x367540*/
        v6 = *(double *)(v1 + 56); /*0x367545*/
        if ( *(_BYTE *)(v1 + 119) ) /*0x36753c*/
          v5 = *(double *)(v1 + 96); /*0x36754c*/
        if ( *(_BYTE *)(v1 + 120) ) /*0x367551*/
          v6 = *(double *)(v1 + 104); /*0x367557*/
        v7 = sub_36CF10(a1 + 1576, v12, v1 + 40); /*0x36756c*/
        *(double *)(*(_QWORD *)v7 + 24LL) = v5 + *(double *)(*(_QWORD *)v7 + 24LL); /*0x367584*/
        v8 = sub_36CF10(a1 + 1576, v13, v1 + 40); /*0x36758e*/
        *(double *)(*(_QWORD *)v8 + 32LL) = v6 + *(double *)(*(_QWORD *)v8 + 32LL); /*0x36759b*/
      }
      v9 = *(_QWORD *)(a1 + 1560); /*0x3675a0*/
      for ( i = v1 + 520; i != v9; i += 520 ) /*0x3675b1*/
        sub_36FFB0(i - 520, i); /*0x3675ca*/
      v11 = *(_QWORD *)(a1 + 1560); /*0x3675db*/
      sub_685C0(v11 - 32); /*0x3675e6*/
      sub_35E650(v11 - 80); /*0x3675ef*/
      *(_QWORD *)(a1 + 1560) -= 520LL; /*0x3675f4*/
      result = *(_QWORD *)(a1 + 1560); /*0x3675ff*/
    }
    else
    {
      v1 += 520; /*0x367608*/
    }
  }
  return result; /*0x36762c*/
}

// [25/36] Address: 0x367640
// Method: GJEffectManager::getLoadedMoveOffset
// Hidden C++ exception states: #wind=1
void __fastcall GJEffectManager_getLoadedMoveOffset(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 i; // rbx
  double v7; // xmm6_8
  double v8; // xmm7_8
  __int64 v9; // rax
  __int64 v10; // rax
  _BYTE v11[16]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v12[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+70h] [rbp+8h] BYREF

  if ( a2 != a1 + 1576 ) /*0x367669*/
  {
    v13 = a2; /*0x36766b*/
    *(_DWORD *)a2 = *(_DWORD *)(a1 + 1576); /*0x367672*/
    sub_372A10(a2 + 8, **(_QWORD **)(a1 + 1584), *(_QWORD *)(a1 + 1584)); /*0x367682*/
    v4 = sub_69540(a2, *(_QWORD *)(a2 + 16)); /*0x36768e*/
    sub_3E310(a2, v4); /*0x367699*/
  }
  v5 = *(_QWORD *)(a1 + 1560); /*0x36769f*/
  for ( i = *(_QWORD *)(a1 + 1552); i != v5; i += 520 ) /*0x3676b0*/
  {
    v7 = *(double *)(i + 48); /*0x3676c0*/
    v8 = *(double *)(i + 56); /*0x3676c5*/
    if ( *(_BYTE *)(i + 119) ) /*0x3676ca*/
      v7 = *(double *)(i + 96); /*0x3676d0*/
    if ( *(_BYTE *)(i + 120) ) /*0x3676d5*/
      v8 = *(double *)(i + 104); /*0x3676db*/
    LODWORD(v13) = *(_DWORD *)(i + 40); /*0x3676e3*/
    v9 = sub_36D140(a2, v11, &v13); /*0x3676f4*/
    *(double *)(*(_QWORD *)v9 + 24LL) = v7 + *(double *)(*(_QWORD *)v9 + 24LL); /*0x367701*/
    LODWORD(v13) = *(_DWORD *)(i + 40); /*0x367709*/
    v10 = sub_36D140(a2, v12, &v13); /*0x36771a*/
    *(double *)(*(_QWORD *)v10 + 32LL) = v8 + *(double *)(*(_QWORD *)v10 + 32LL); /*0x367727*/
  }
}

// [26/36] Address: 0x367760
// Method: GJEffectManager::runOpacityActionOnGroup
__int64 __fastcall GJEffectManager_runOpacityActionOnGroup(__int64 a1, __int64 a2, float a3, float a4, int a5, int a6)
{
  __int64 v6; // rbx
  float v7; // xmm6_4
  _BYTE v9[16]; // [rsp+20h] [rbp-78h] BYREF
  _DWORD v10[3]; // [rsp+30h] [rbp-68h] BYREF
  __int16 v11; // [rsp+3Ch] [rbp-5Ch]
  int v12; // [rsp+40h] [rbp-58h]
  int v13; // [rsp+44h] [rbp-54h]
  float v14; // [rsp+48h] [rbp-50h]
  int v15; // [rsp+4Ch] [rbp-4Ch]
  int v16; // [rsp+50h] [rbp-48h]
  __int64 v17; // [rsp+54h] [rbp-44h]
  int v18; // [rsp+A8h] [rbp+10h] BYREF

  if ( (int)a2 < 0 ) /*0x367781*/
    a2 = 0; /*0x367781*/
  if ( (int)a2 > 9999 ) /*0x367792*/
    a2 = 9999; /*0x367792*/
  v18 = a2; /*0x367795*/
  v6 = a1 + 432; /*0x36779e*/
  v7 = sub_367870(a1, a2); /*0x3677b0*/
  sub_351620(v6, &v18); /*0x3677b3*/
  v13 = v18; /*0x3677c5*/
  v15 = a5; /*0x3677d0*/
  v16 = a6; /*0x3677db*/
  v11 = 0; /*0x3677df*/
  v12 = 0; /*0x3677e6*/
  *(float *)v10 = a3; /*0x3677ee*/
  *(float *)&v10[1] = v7; /*0x3677f4*/
  *(float *)&v10[2] = a4; /*0x3677fa*/
  v14 = v7; /*0x367801*/
  v17 = 0; /*0x367807*/
  if ( a3 <= 0.0 ) /*0x367810*/
  {
    v14 = a4; /*0x367812*/
    LOBYTE(v11) = 1; /*0x367819*/
  }
  sub_36B840(v6, v9, &v18, v10); /*0x367833*/
  return *(_QWORD *)sub_36E1B0(v6, v9, &v18) + 20LL; /*0x36784d*/
}

// [28/36] Address: 0x368aa0
// Method: GJEffectManager::spawnGroup
// Hidden C++ exception states: #wind=1
__int64 __fastcall GJEffectManager_spawnGroup(
        __int64 a1,
        int a2,
        float a3,
        char a4,
        __int64 a5,
        int a6,
        unsigned int a7)
{
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 result; // rax
  int v10; // [rsp+68h] [rbp+10h] BYREF
  float v11; // [rsp+70h] [rbp+18h] BYREF
  char v12; // [rsp+78h] [rbp+20h] BYREF

  if ( a2 > 0 ) /*0x368aa2*/
  {
    v12 = a4; /*0x368aad*/
    v11 = a3; /*0x368ab2*/
    v10 = a2; /*0x368ab8*/
    v7 = a1 + 1456; /*0x368ac1*/
    v8 = *(_QWORD *)(a1 + 1464); /*0x368ac8*/
    if ( v8 == *(_QWORD *)(a1 + 1472) ) /*0x368ad0*/
    {
      return sub_3714F0( /*0x368b7e*/
               (int)a1 + 1456,
               v8,
               (unsigned int)&v10,
               (unsigned int)&v11,
               (__int64)&v12,
               a5,
               (__int64)&a6,
               (__int64)&a7);
    }
    else
    {
      *(_WORD *)v8 = 0; /*0x368ade*/
      *(_QWORD *)(v8 + 16) = 0; /*0x368ae5*/
      *(_QWORD *)(v8 + 28) = 0; /*0x368ae9*/
      *(_QWORD *)(v8 + 40) = 0; /*0x368aed*/
      *(_QWORD *)(v8 + 48) = 0; /*0x368af5*/
      *(_QWORD *)(v8 + 56) = 0; /*0x368af8*/
      *(_QWORD *)(v8 + 64) = 0; /*0x368afc*/
      *(_DWORD *)(v8 + 24) = a2; /*0x368b00*/
      *(double *)(v8 + 8) = a3; /*0x368b03*/
      *(_BYTE *)(v8 + 36) = a4; /*0x368b08*/
      sub_98E50(v8 + 48, a5); /*0x368b14*/
      *(_DWORD *)(v8 + 28) = a6; /*0x368b20*/
      result = a7; /*0x368b23*/
      *(_DWORD *)(v8 + 32) = a7; /*0x368b2a*/
      *(_QWORD *)(v7 + 8) += 72LL; /*0x368b2d*/
    }
  }
  return result; /*0x368b32*/
}

// [29/36] Address: 0x368b90
// Method: GJEffectManager::updateSpawnTriggers
// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall GJEffectManager_updateSpawnTriggers(_QWORD *a1, float a2, __int64 a3, __int64 a4)
{
  unsigned __int64 result; // rax
  unsigned __int64 v6; // r14
  int v7; // esi
  __int64 v8; // rbx
  __int64 v9; // rdi
  double v10; // xmm0_8
  bool v11; // al
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 *v14; // rcx
  __int64 v15; // r10
  __int64 v16; // rsi
  __int64 v17; // rbx
  __int64 i; // rdi
  unsigned __int64 v19; // rsi
  __int64 v20; // rdi
  unsigned __int64 j; // rbx
  _BYTE v22[32]; // [rsp+40h] [rbp-48h] BYREF

  result = (unsigned __int64)((unsigned __int128)((__int64)(a1[183] - a1[182]) * (__int128)0xE38E38E38E38E39LL) >> 64) >> 63; /*0x368be2*/
  v6 = (a1[183] - a1[182]) / 72LL; /*0x368be6*/
  v7 = 0; /*0x368be9*/
  if ( !v6 ) /*0x368bee*/
    goto LABEL_15; /*0x368bee*/
  v8 = 0; /*0x368bf4*/
  while ( 1 ) /*0x368c00*/
  {
    v9 = a1[182]; /*0x368c00*/
    if ( !*(_BYTE *)(v9 + v8) ) /*0x368c07*/
    {
      if ( *(_BYTE *)(v9 + v8 + 1) ) /*0x368c0f*/
        goto LABEL_12; /*0x368c0f*/
      v10 = a2 + *(double *)(v9 + v8 + 16); /*0x368c20*/
      *(double *)(v9 + v8 + 16) = v10; /*0x368c26*/
      v11 = v10 >= *(double *)(v9 + v8 + 8); /*0x368c32*/
      *(_BYTE *)(v9 + v8) = v11; /*0x368c35*/
      if ( !v11 ) /*0x368c3a*/
        goto LABEL_12; /*0x368c3a*/
    }
    if ( !a1[40] ) /*0x368c40*/
      goto LABEL_12; /*0x368c48*/
    sub_18A9D0(v22, v8 + v9 + 48); /*0x368c66*/
    v13 = *(_QWORD *)(v9 + v8 + 40); /*0x368c6c*/
    v14 = (__int64 *)a1[40]; /*0x368c71*/
    v15 = *v14; /*0x368c78*/
    if ( v13 ) /*0x368c7e*/
      (*(void (__fastcall **)(__int64 *, __int64, __int64, _BYTE *))(v15 + 16))(v14, v13, v12, v22); /*0x368c88*/
    else
      (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v15 + 8))( /*0x368cb5*/
        v14,
        *(unsigned int *)(v9 + v8 + 24),
        *(unsigned __int8 *)(v9 + v8 + 36));
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)a1[40] + 24LL))(a1[40]) ) /*0x368cc3*/
      break; /*0x368cc3*/
    sub_685C0(v22); /*0x368cd0*/
LABEL_12:
    ++v7; /*0x368cd5*/
    v8 += 72; /*0x368cd7*/
    result = v7; /*0x368cdb*/
    if ( v7 >= v6 ) /*0x368ce1*/
      goto LABEL_15; /*0x368ce1*/
  }
  result = sub_685C0(v22); /*0x368ce9*/
LABEL_15:
  v16 = a1[183]; /*0x368cee*/
  v17 = a1[182]; /*0x368cf5*/
  if ( v17 != v16 ) /*0x368cff*/
  {
    do /*0x368d11*/
    {
      if ( *(_BYTE *)v17 ) /*0x368d05*/
        break; /*0x368d08*/
      v17 += 72; /*0x368d0a*/
    }
    while ( v17 != v16 ); /*0x368d11*/
    if ( v17 != v16 ) /*0x368d16*/
    {
      for ( i = v17 + 72; i != v16; i += 72 ) /*0x368d23*/
      {
        if ( !*(_BYTE *)i ) /*0x368d25*/
        {
          *(_BYTE *)v17 = 0; /*0x368d2a*/
          *(_BYTE *)(v17 + 1) = *(_BYTE *)(i + 1); /*0x368d31*/
          *(_QWORD *)(v17 + 8) = *(_QWORD *)(i + 8); /*0x368d38*/
          *(_QWORD *)(v17 + 16) = *(_QWORD *)(i + 16); /*0x368d40*/
          *(_DWORD *)(v17 + 24) = *(_DWORD *)(i + 24); /*0x368d47*/
          *(_DWORD *)(v17 + 28) = *(_DWORD *)(i + 28); /*0x368d4d*/
          *(_DWORD *)(v17 + 32) = *(_DWORD *)(i + 32); /*0x368d53*/
          *(_BYTE *)(v17 + 36) = *(_BYTE *)(i + 36); /*0x368d5a*/
          *(_QWORD *)(v17 + 40) = *(_QWORD *)(i + 40); /*0x368d61*/
          result = sub_C0B90(v17 + 48, i + 48, a3, a4); /*0x368d6d*/
          v17 += 72; /*0x368d72*/
        }
      }
      if ( v17 != v16 ) /*0x368d82*/
      {
        result = sub_36D640(v16, a1[183]); /*0x368d91*/
        v19 = result; /*0x368d96*/
        v20 = a1[183]; /*0x368d99*/
        for ( j = result; j != v20; j += 72LL ) /*0x368da6*/
          result = sub_685C0(j + 48); /*0x368db4*/
        a1[183] = v19; /*0x368dc2*/
      }
    }
  }
  return result; /*0x368dc9*/
}

// [30/36] Address: 0x368ec0
// Method: GJEffectManager::playerButton
// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall GJEffectManager_playerButton(__int64 a1, unsigned __int8 a2, char a3)
{
  int v6; // r12d
  __int64 v7; // rsi
  __int64 v8; // r9
  unsigned __int64 result; // rax
  __int64 v10; // r14
  int v11; // eax
  int v12; // r8d
  int v13; // eax
  __int64 v14; // r9
  unsigned int v15; // ecx
  int v16; // eax
  unsigned __int8 v17; // bl
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  int *v21; // rdx
  char v22; // cl
  int v23; // eax
  char v24[16]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v25[32]; // [rsp+40h] [rbp-48h] BYREF
  int v26; // [rsp+90h] [rbp+8h] BYREF

  v6 = 0; /*0x368eea*/
  v7 = *(_QWORD *)(a1 + 496); /*0x368eed*/
  v8 = *(_QWORD *)(a1 + 504) - v7; /*0x368efb*/
  result = (unsigned __int64)((unsigned __int128)(v8 * (__int128)0x4924924924924925LL) >> 64) >> 63; /*0x368f12*/
  if ( v8 / 56 ) /*0x368f16*/
  {
    v10 = 0; /*0x368f1f*/
    do /*0x368f30*/
    {
      if ( !*(_BYTE *)(v10 + v7) && (!*(_BYTE *)(v10 + v7 + 28) || !a3) ) /*0x368f46*/
      {
        v11 = *(_DWORD *)(v10 + v7 + 16); /*0x368f4c*/
        if ( !v11 ) /*0x368f53*/
          goto LABEL_12; /*0x368f53*/
        if ( v11 == 1 ) /*0x368f58*/
        {
          if ( a3 ) /*0x368f5d*/
            goto LABEL_12; /*0x368f5d*/
        }
        else if ( v11 == 2 && !a3 ) /*0x368f70*/
        {
LABEL_12:
          if ( a2 || *(_BYTE *)(v10 + v7 + 8) ) /*0x368f7b*/
          {
            v12 = *(_DWORD *)(v10 + v7 + 4); /*0x368f86*/
            v13 = v12; /*0x368f8b*/
            if ( v12 < 0 ) /*0x368f91*/
              v13 = 0; /*0x368f91*/
            if ( v13 > 9999 ) /*0x368f98*/
              v13 = 9999; /*0x368f98*/
            v14 = *(_QWORD *)(a1 + 1280); /*0x368f9c*/
            v15 = v13 & 0x1F; /*0x368fab*/
            v16 = *(_DWORD *)(v14 + 4 * ((unsigned __int64)v13 >> 5)); /*0x368fb2*/
            v17 = !_bittest(&v16, v15); /*0x368fb9*/
            if ( *(_BYTE *)(v10 + v7 + 8) && (v18 = *(_DWORD *)(v10 + v7 + 12)) != 0 ) /*0x368fcb*/
            {
              v17 = a2; /*0x368fd3*/
              if ( v18 != 1 ) /*0x368fdc*/
                v17 = a2 ^ 1; /*0x368fdc*/
            }
            else
            {
              v19 = *(_DWORD *)(v10 + v7 + 12); /*0x368fe1*/
              if ( v19 ) /*0x368fe8*/
                v17 = v19 == 1; /*0x368fed*/
            }
            if ( *(_QWORD *)(a1 + 320) ) /*0x368ff0*/
            {
              sub_18A9D0(v25, v10 + v7 + 32); /*0x369006*/
              (***(void (__fastcall ****)(_QWORD, _QWORD, _QWORD, _BYTE *, _DWORD, _DWORD))(a1 + 320))( /*0x369039*/
                *(_QWORD *)(a1 + 320),
                *(unsigned int *)(v10 + v7 + 4),
                v17,
                v25,
                *(_DWORD *)(v10 + v7 + 20),
                *(_DWORD *)(v10 + v7 + 24));
              sub_685C0(v25); /*0x369042*/
            }
            else
            {
              v20 = *(_DWORD *)(v10 + v7 + 4); /*0x369049*/
              if ( v12 < 0 ) /*0x36904f*/
                v20 = 0; /*0x36904f*/
              if ( v20 <= 9999 ) /*0x369056*/
              {
                if ( v12 < 0 ) /*0x369060*/
                  v12 = 0; /*0x369060*/
              }
              else
              {
                v12 = 9999; /*0x369058*/
              }
              v26 = v12; /*0x369064*/
              v21 = (int *)(v14 + 4 * ((unsigned __int64)v12 >> 5)); /*0x369076*/
              v22 = v12 & 0x1F; /*0x36907a*/
              v23 = *v21; /*0x36907d*/
              if ( v17 ) /*0x369081*/
              {
                *v21 = v23 | (1 << v22); /*0x369086*/
                sub_658F0(a1 + 1312, &v26); /*0x369097*/
              }
              else
              {
                *v21 = v23 & ~(1 << v22); /*0x3690a1*/
                sub_67020(a1 + 1312, v24, &v26); /*0x3690b7*/
              }
            }
          }
        }
      }
      ++v6; /*0x3690bf*/
      v10 += 56; /*0x3690c2*/
      v7 = *(_QWORD *)(a1 + 496); /*0x3690c6*/
      result = v6; /*0x3690f2*/
    }
    while ( v6 < (unsigned __int64)((*(_QWORD *)(a1 + 504) - v7) / 56) ); /*0x368f30*/
  }
  return result; /*0x3690fe*/
}

// [31/36] Address: 0x3691e0
// Method: GJEffectManager::updateCountForItem
// Hidden C++ exception states: #wind=1
__int64 __fastcall GJEffectManager_updateCountForItem(__int64 a1, __int64 a2, int a3)
{
  int v5; // ebx
  __int64 v6; // rcx
  int v7; // edx
  unsigned __int8 v8; // r8
  unsigned __int8 v9; // r9
  unsigned __int8 v10; // r10
  __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 (__fastcall *v18)(); // r9
  __int64 v19; // r8
  int v20; // ebx
  __int64 v21; // r14
  __int64 v22; // r15
  char v23; // di
  int v24; // ecx
  int v25; // eax
  bool v26; // cc
  int v27; // ebp
  __int64 v28; // r9
  __int64 v29; // rdi
  __int64 v30; // r15
  __int64 i; // rbx
  int *v32; // r8
  char v33; // dl
  int v34; // eax
  __int64 v35; // rcx
  int v36; // [rsp+30h] [rbp-88h]
  _QWORD v37[2]; // [rsp+38h] [rbp-80h] BYREF
  char v38[16]; // [rsp+48h] [rbp-70h] BYREF
  _BYTE v39[96]; // [rsp+58h] [rbp-60h] BYREF
  int v40; // [rsp+C0h] [rbp+8h]
  int v41; // [rsp+C8h] [rbp+10h] BYREF
  int v42; // [rsp+D0h] [rbp+18h] BYREF
  int v43; // [rsp+D8h] [rbp+20h]

  if ( (int)a2 < 0 ) /*0x3691fb*/
    a2 = 0; /*0x3691fb*/
  if ( (int)a2 > 9999 ) /*0x369205*/
    a2 = 9999; /*0x369205*/
  v41 = a2; /*0x369208*/
  v5 = sub_369120(a1, a2); /*0x369214*/
  v6 = a1 + 816; /*0x369216*/
  if ( a3 ) /*0x369220*/
    *(_DWORD *)(*(_QWORD *)sub_66DF0(v6, v37, &v41) + 20LL) = a3; /*0x369246*/
  else
    sub_658F0(v6, &v41); /*0x36922a*/
  v7 = v41; /*0x36924a*/
  v8 = BYTE1(v41); /*0x36926f*/
  v9 = BYTE2(v41); /*0x36927f*/
  v10 = HIBYTE(v41); /*0x36928f*/
  v11 = (__int64 *)(*(_QWORD *)(a1 + 904) /*0x3692aa*/
                  + 16
                  * (*(_QWORD *)(a1 + 928)
                   & (0x100000001B3LL
                    * (HIBYTE(v41)
                     ^ (0x100000001B3LL
                      * (BYTE2(v41)
                       ^ (0x100000001B3LL
                        * (BYTE1(v41) ^ (0x100000001B3LL * ((unsigned __int8)v41 ^ 0xCBF29CE484222325uLL))))))))));
  v12 = v11[1]; /*0x3692b1*/
  if ( v12 != *(_QWORD *)(a1 + 888) ) /*0x3692bc*/
  {
    v13 = *v11; /*0x3692be*/
    if ( v41 == *(_DWORD *)(v12 + 16) ) /*0x3692c4*/
      goto LABEL_14; /*0x3692c4*/
    while ( v12 != v13 ) /*0x3692c9*/
    {
      v12 = *(_QWORD *)(v12 + 8); /*0x3692cb*/
      if ( v41 == *(_DWORD *)(v12 + 16) ) /*0x3692d2*/
        goto LABEL_14; /*0x3692d2*/
    }
  }
  v12 = 0; /*0x3692d6*/
LABEL_14:
  if ( v12 ) /*0x3692dc*/
  {
    *(_DWORD *)(*(_QWORD *)sub_66DF0(a1 + 880, v37, &v41) + 20LL) = a3; /*0x3692fa*/
    v7 = v41; /*0x3692fe*/
    v10 = HIBYTE(v41); /*0x369305*/
    v9 = BYTE2(v41); /*0x36930e*/
    v8 = BYTE1(v41); /*0x369317*/
  }
  v14 = 2 /*0x369352*/
      * (*(_QWORD *)(a1 + 568)
       & (0x100000001B3LL
        * (v10
         ^ (0x100000001B3LL
          * (v9 ^ (0x100000001B3LL * (v8 ^ (0x100000001B3LL * ((unsigned __int8)v7 ^ 0xCBF29CE484222325uLL)))))))));
  result = *(_QWORD *)(a1 + 544); /*0x369355*/
  v16 = *(_QWORD *)(result /*0x36935c*/
                  + 16
                  * (*(_QWORD *)(a1 + 568)
                   & (0x100000001B3LL
                    * (v10
                     ^ (0x100000001B3LL
                      * (v9
                       ^ (0x100000001B3LL * (v8 ^ (0x100000001B3LL * ((unsigned __int8)v7 ^ 0xCBF29CE484222325uLL)))))))))
                  + 8);
  v17 = *(_QWORD *)(a1 + 528); /*0x369361*/
  if ( v16 != v17 ) /*0x36936b*/
  {
    result = *(_QWORD *)(result + 8 * v14); /*0x36936d*/
    if ( v7 == *(_DWORD *)(v16 + 16) ) /*0x369374*/
      goto LABEL_22; /*0x369374*/
    while ( v16 != result ) /*0x369379*/
    {
      v16 = *(_QWORD *)(v16 + 8); /*0x36937b*/
      if ( v7 == *(_DWORD *)(v16 + 16) ) /*0x369382*/
        goto LABEL_22; /*0x369382*/
    }
  }
  v16 = 0; /*0x369386*/
LABEL_22:
  if ( v16 && v16 != v17 ) /*0x369395*/
  {
    v18 = sub_35F310; /*0x3693a3*/
    if ( v5 > a3 ) /*0x3693b4*/
      v18 = sub_35F320; /*0x3693b4*/
    sub_36C7C0( /*0x3693c2*/
      *(_QWORD *)(v16 + 24),
      *(_QWORD *)(v16 + 32),
      (__int64)(*(_QWORD *)(v16 + 32) - *(_QWORD *)(v16 + 24)) >> 6,
      v18);
    v20 = 0; /*0x3693c7*/
    v40 = 0; /*0x3693c9*/
    v21 = *(_QWORD *)(v16 + 24); /*0x3693d0*/
    result = (*(_QWORD *)(v16 + 32) - v21) >> 6; /*0x3693db*/
    if ( result ) /*0x3693e2*/
    {
      v22 = 0; /*0x3693e8*/
      v37[0] = 0; /*0x3693eb*/
      do /*0x3693f0*/
      {
        v23 = 0; /*0x3693f0*/
        if ( !*(_BYTE *)(v22 + v21) ) /*0x3693f3*/
        {
          v24 = *(_DWORD *)(v22 + v21 + 4); /*0x3693fd*/
          if ( v24 != a3 ) /*0x369405*/
          {
            v25 = *(_DWORD *)(v22 + v21 + 8); /*0x36940b*/
            *(_DWORD *)(v22 + v21 + 4) = a3; /*0x369410*/
            v26 = v24 <= v25; /*0x369415*/
            if ( v24 < v25 ) /*0x369417*/
            {
              if ( a3 >= v25 ) /*0x36941c*/
                goto LABEL_35; /*0x36941c*/
              v26 = v24 <= v25; /*0x36941e*/
            }
            if ( !v26 && a3 <= v25 ) /*0x369429*/
            {
LABEL_35:
              v27 = *(_DWORD *)(v22 + v21 + 12); /*0x36942f*/
              v28 = *(unsigned __int8 *)(v22 + v21 + 16); /*0x369434*/
              LOBYTE(v42) = *(_BYTE *)(v22 + v21 + 16); /*0x36943a*/
              v36 = *(_DWORD *)(v22 + v21 + 20); /*0x369447*/
              v43 = *(_DWORD *)(v22 + v21 + 24); /*0x369450*/
              if ( !*(_BYTE *)(v22 + v21 + 32) ) /*0x369457*/
              {
                v29 = *(_QWORD *)(v16 + 24) + ((__int64)v20 << 6); /*0x369469*/
                v30 = *(_QWORD *)(v16 + 32); /*0x36946d*/
                for ( i = v29 + 64; i != v30; i += 64 ) /*0x369478*/
                {
                  *(_BYTE *)v29 = *(_BYTE *)i; /*0x369483*/
                  *(_DWORD *)(v29 + 4) = *(_DWORD *)(i + 4); /*0x369488*/
                  *(_DWORD *)(v29 + 8) = *(_DWORD *)(i + 8); /*0x36948e*/
                  *(_DWORD *)(v29 + 12) = *(_DWORD *)(i + 12); /*0x369494*/
                  *(_BYTE *)(v29 + 16) = *(_BYTE *)(i + 16); /*0x36949b*/
                  *(_DWORD *)(v29 + 20) = *(_DWORD *)(i + 20); /*0x3694a1*/
                  *(_DWORD *)(v29 + 24) = *(_DWORD *)(i + 24); /*0x3694a7*/
                  *(_DWORD *)(v29 + 28) = *(_DWORD *)(i + 28); /*0x3694ad*/
                  *(_BYTE *)(v29 + 32) = *(_BYTE *)(i + 32); /*0x3694b4*/
                  sub_C0B90(v29 + 40, i + 40, v19, v28); /*0x3694bf*/
                  v29 += 64; /*0x3694c4*/
                }
                sub_685C0(*(_QWORD *)(v16 + 32) - 24LL); /*0x3694d9*/
                *(_QWORD *)(v16 + 32) -= 64LL; /*0x3694de*/
                v23 = 1; /*0x3694e3*/
                v20 = v40; /*0x3694e6*/
                v22 = v37[0]; /*0x3694ed*/
                LOBYTE(v28) = v42; /*0x3694f2*/
              }
              if ( *(_QWORD *)(a1 + 320) ) /*0x3694fb*/
              {
                sub_18A9D0(v39, v22 + v21 + 40); /*0x369511*/
                (***(void (__fastcall ****)(_QWORD, _QWORD, _QWORD, _BYTE *, int, int))(a1 + 320))( /*0x369544*/
                  *(_QWORD *)(a1 + 320),
                  (unsigned int)v27,
                  (unsigned __int8)v42,
                  v39,
                  v36,
                  v43);
                sub_685C0(v39); /*0x36954c*/
              }
              else
              {
                if ( v27 < 0 ) /*0x36955a*/
                  v27 = 0; /*0x36955a*/
                if ( v27 > 9999 ) /*0x369564*/
                  v27 = 9999; /*0x369564*/
                v42 = v27; /*0x369567*/
                v32 = (int *)(*(_QWORD *)(a1 + 1280) + 4 * ((unsigned __int64)v27 >> 5)); /*0x36957f*/
                v33 = v27 & 0x1F; /*0x369583*/
                v34 = *v32; /*0x369586*/
                v35 = a1 + 1312; /*0x369589*/
                if ( (_BYTE)v28 ) /*0x369593*/
                {
                  *v32 = v34 | (1 << v33); /*0x369598*/
                  sub_658F0(v35, &v42); /*0x3695a3*/
                }
                else
                {
                  *v32 = v34 & ~(1 << v33); /*0x3695ad*/
                  sub_67020(v35, v38, &v42); /*0x3695bd*/
                }
              }
              if ( v23 ) /*0x3695c5*/
                goto LABEL_50; /*0x3695c5*/
            }
          }
        }
        v40 = ++v20; /*0x3695c9*/
        v22 += 64; /*0x3695d0*/
        v37[0] = v22; /*0x3695d4*/
LABEL_50:
        v21 = *(_QWORD *)(v16 + 24); /*0x3695d9*/
        result = v20; /*0x3695e8*/
      }
      while ( v20 < (unsigned __int64)((*(_QWORD *)(v16 + 32) - v21) >> 6) ); /*0x3693f0*/
    }
  }
  return result; /*0x3695f4*/
}

// [32/36] Address: 0x369610
// Method: GJEffectManager::getPersistentStateString
// Hidden C++ exception states: #wind=3
__int64 __fastcall GJEffectManager_getPersistentStateString(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  char v7; // r12
  unsigned __int64 v8; // rdi
  void *v9; // rbx
  _QWORD **v10; // rdi
  _QWORD *v11; // rbx
  char *i; // rdx
  _DWORD *v13; // r8
  unsigned __int8 *v14; // rdi
  unsigned __int8 *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rdx
  unsigned int v19; // ebx
  __int64 v20; // rax
  __int64 v21; // rax
  char v22; // r15
  unsigned __int64 v23; // rax
  __int64 v24; // rbx
  char *v25; // rdi
  void *v26; // rcx
  char *v27; // rdx
  char *v28; // rax
  _QWORD **v29; // rsi
  _QWORD *v30; // rbx
  _DWORD *v31; // r8
  unsigned __int8 *v32; // rdi
  unsigned __int8 *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // r8
  char v42; // [rsp+30h] [rbp-D0h]
  void *Src[2]; // [rsp+38h] [rbp-C8h] BYREF
  char *v44; // [rsp+48h] [rbp-B8h]
  __int16 *v45; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v46; // [rsp+58h] [rbp-A8h]
  __int16 *v47; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v48; // [rsp+68h] [rbp-98h]
  __int64 v49; // [rsp+70h] [rbp-90h]
  __int128 v50; // [rsp+80h] [rbp-80h] BYREF
  char v51[16]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v52[32]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v53[528]; // [rsp+C0h] [rbp-40h] BYREF

  v2 = a2; /*0x369640*/
  v49 = a2; /*0x369643*/
  v47 = (__int16 *)a2; /*0x36964b*/
  if ( !a1[112] && !a1[120] ) /*0x36965c*/
  {
    *(_OWORD *)a2 = 0; /*0x369668*/
    *(_QWORD *)(a2 + 16) = 0; /*0x36966b*/
    *(_QWORD *)(a2 + 24) = 15; /*0x36966f*/
    *(_BYTE *)a2 = 0; /*0x369677*/
    return v2; /*0x36967a*/
  }
  fmt::BasicWriter<char>::BasicWriter<char>(v53); /*0x369683*/
  v7 = 0; /*0x36968a*/
  v42 = 0; /*0x36968d*/
  v8 = a1[112]; /*0x369692*/
  if ( v8 ) /*0x3696a6*/
  {
    *(_OWORD *)Src = 0; /*0x3696af*/
    v44 = 0; /*0x3696b5*/
    if ( v8 > 0x3FFFFFFFFFFFFFFFLL ) /*0x3696bd*/
      sub_59000(0x3FFFFFFFFFFFFFFFLL, v4, v5, v6); /*0x369bd9*/
    v9 = (void *)sub_3C460(4 * v8); /*0x3696d0*/
    memmove(v9, Src[0], (char *)Src[1] - (char *)Src[0]); /*0x3696e3*/
    sub_6A6D0(Src, v9, 0, v8); /*0x3696f6*/
    v10 = (_QWORD **)a1[111]; /*0x3696fb*/
    v11 = *v10; /*0x369702*/
    for ( i = (char *)Src[1]; v11 != v10; v11 = (_QWORD *)*v11 ) /*0x36970d*/
    {
      v13 = v11 + 2; /*0x369710*/
      if ( i == v44 ) /*0x369719*/
      {
        sub_689C0(Src, i, v13); /*0x369735*/
        i = (char *)Src[1]; /*0x36973a*/
      }
      else
      {
        *(_DWORD *)i = *v13; /*0x36971e*/
        i = (char *)Src[1] + 4; /*0x369725*/
        Src[1] = (char *)Src[1] + 4; /*0x369729*/
      }
    }
    sub_271790(Src[0], i, (i - (char *)Src[0]) >> 2, 0); /*0x369759*/
    v14 = (unsigned __int8 *)Src[0]; /*0x36975e*/
    v15 = (unsigned __int8 *)Src[1]; /*0x369763*/
    if ( Src[0] != Src[1] ) /*0x36976b*/
    {
      while ( 1 ) /*0x3697c9*/
      {
        v16 = a1[113]; /*0x3697c9*/
        v17 = *(_QWORD *)(v16 /*0x3697d0*/
                        + 16
                        * (a1[116]
                         & (0x100000001B3LL
                          * (v14[3]
                           ^ (0x100000001B3LL
                            * (v14[2] ^ (0x100000001B3LL * (v14[1] ^ (0x100000001B3LL * (*v14 ^ 0xCBF29CE484222325uLL)))))))))
                        + 8);
        v18 = a1[111]; /*0x3697d5*/
        if ( v17 != v18 ) /*0x3697df*/
        {
          if ( *(_DWORD *)v14 == *(_DWORD *)(v17 + 16) ) /*0x3697ea*/
            goto LABEL_18; /*0x3697ea*/
          while ( v17 != *(_QWORD *)(v16 /*0x3697f3*/
                                   + 16
                                   * (a1[116]
                                    & (0x100000001B3LL
                                     * (v14[3]
                                      ^ (0x100000001B3LL
                                       * (v14[2]
                                        ^ (0x100000001B3LL
                                         * (v14[1] ^ (0x100000001B3LL * (*v14 ^ 0xCBF29CE484222325uLL)))))))))) )
          {
            v17 = *(_QWORD *)(v17 + 8); /*0x3697f5*/
            if ( *(_DWORD *)v14 == *(_DWORD *)(v17 + 16) ) /*0x3697fc*/
              goto LABEL_18; /*0x3697fc*/
          }
        }
        v17 = 0; /*0x369800*/
LABEL_18:
        if ( v17 && v17 != v18 && *(_DWORD *)(v17 + 20) ) /*0x36980d*/
        {
          if ( v7 ) /*0x369816*/
          {
            v47 = &word_70806C; /*0x369818*/
            v48 = 0; /*0x36981d*/
            fmt::BasicWriter<char>::operator<<(v53, &v47); /*0x36982b*/
          }
          v45 = &word_70806C; /*0x369831*/
          v46 = 0; /*0x369836*/
          v19 = *(_DWORD *)(v17 + 20); /*0x36983b*/
          v20 = fmt::BasicWriter<char>::operator<<(v53, *(unsigned int *)v14); /*0x369844*/
          fmt::BasicWriter<char>::operator<<(v20, &v45); /*0x369852*/
          fmt::BasicWriter<char>::operator<<(v21, v19); /*0x36985d*/
          v7 = 1; /*0x369863*/
        }
        v14 += 4; /*0x369866*/
        if ( v14 == v15 ) /*0x36986d*/
        {
          v42 = v7; /*0x369873*/
          v2 = v49; /*0x369878*/
          break; /*0x369878*/
        }
      }
    }
    v45 = (__int16 *)&unk_7687A4; /*0x36987d*/
    v46 = 0; /*0x369889*/
    fmt::BasicWriter<char>::operator<<(v53, &v45); /*0x369897*/
    sub_685C0(Src); /*0x3698a3*/
  }
  v22 = 0; /*0x3698b2*/
  v23 = a1[120]; /*0x3698b5*/
  if ( v23 ) /*0x3698bf*/
  {
    *(_OWORD *)Src = 0; /*0x3698c8*/
    v44 = 0; /*0x3698d0*/
    if ( v23 > 0x3FFFFFFFFFFFFFFFLL ) /*0x3698d8*/
      sub_59000(0x3FFFFFFFFFFFFFFFLL, v4, v5, v6); /*0x369bd3*/
    v24 = 4 * v23; /*0x3698de*/
    v25 = (char *)sub_3C460(4 * v23); /*0x3698ee*/
    memmove(v25, Src[0], (char *)Src[1] - (char *)Src[0]); /*0x369901*/
    v26 = Src[0]; /*0x369906*/
    if ( Src[0] ) /*0x36990e*/
    {
      if ( ((v44 - (char *)Src[0]) & 0xFFFFFFFFFFFFFFFCuLL) >= 0x1000 ) /*0x369926*/
      {
        v26 = (void *)*((_QWORD *)Src[0] - 1); /*0x36992c*/
        if ( (unsigned __int64)((char *)Src[0] - (char *)v26 - 8) > 0x1F ) /*0x36993b*/
          invoke_watson(0, 0, 0, 0, 0); /*0x36994c*/
      }
      j_j_free(v26); /*0x369953*/
    }
    Src[0] = v25; /*0x369958*/
    v27 = v25; /*0x36995d*/
    Src[1] = v25; /*0x369960*/
    v28 = &v25[v24]; /*0x369965*/
    v44 = &v25[v24]; /*0x369969*/
    v29 = (_QWORD **)a1[119]; /*0x36996e*/
    v30 = *v29; /*0x369975*/
    if ( *v29 != v29 ) /*0x36997b*/
    {
      while ( 1 ) /*0x369980*/
      {
        v31 = v30 + 2; /*0x369980*/
        if ( v27 == v28 ) /*0x369987*/
        {
          sub_689C0(Src, v27, v31); /*0x3699a3*/
          v27 = (char *)Src[1]; /*0x3699a8*/
        }
        else
        {
          *(_DWORD *)v27 = *v31; /*0x36998c*/
          v27 = (char *)Src[1] + 4; /*0x369993*/
          Src[1] = (char *)Src[1] + 4; /*0x369997*/
        }
        v30 = (_QWORD *)*v30; /*0x3699ad*/
        if ( v30 == v29 ) /*0x3699b3*/
          break; /*0x3699b3*/
        v28 = v44; /*0x3699b5*/
      }
      v25 = (char *)Src[0]; /*0x3699bc*/
    }
    sub_271790(v25, v27, (v27 - v25) >> 2, 0); /*0x3699d1*/
    v32 = (unsigned __int8 *)Src[0]; /*0x3699d6*/
    v33 = (unsigned __int8 *)Src[1]; /*0x3699db*/
    if ( Src[0] != Src[1] ) /*0x3699e3*/
    {
      while ( 1 ) /*0x369a45*/
      {
        v34 = a1[146]; /*0x369a45*/
        v35 = *(_QWORD *)(v34 /*0x369a4c*/
                        + 16
                        * (a1[149]
                         & (0x100000001B3LL
                          * (v32[3]
                           ^ (0x100000001B3LL
                            * (v32[2] ^ (0x100000001B3LL * (v32[1] ^ (0x100000001B3LL * (*v32 ^ 0xCBF29CE484222325uLL)))))))))
                        + 8);
        if ( v35 != a1[144] ) /*0x369a58*/
        {
          if ( *(_DWORD *)v32 == *(_DWORD *)(v35 + 16) ) /*0x369a63*/
            goto LABEL_48; /*0x369a63*/
          while ( v35 != *(_QWORD *)(v34 /*0x369a68*/
                                   + 16
                                   * (a1[149]
                                    & (0x100000001B3LL
                                     * (v32[3]
                                      ^ (0x100000001B3LL
                                       * (v32[2]
                                        ^ (0x100000001B3LL
                                         * (v32[1] ^ (0x100000001B3LL * (*v32 ^ 0xCBF29CE484222325uLL)))))))))) )
          {
            v35 = *(_QWORD *)(v35 + 8); /*0x369a6a*/
            if ( *(_DWORD *)v32 == *(_DWORD *)(v35 + 16) ) /*0x369a71*/
              goto LABEL_48; /*0x369a71*/
          }
        }
        v35 = 0; /*0x369a75*/
LABEL_48:
        if ( v35 && v35 != a1[144] ) /*0x369a87*/
        {
          if ( v22 ) /*0x369a90*/
          {
            v45 = &word_70806C; /*0x369a92*/
            v46 = 0; /*0x369a97*/
            fmt::BasicWriter<char>::operator<<(v53, &v45); /*0x369aa9*/
          }
          v36 = sub_35F010(v52, v35 + 24); /*0x369ab7*/
          v50 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v51, v36); /*0x369acd*/
          v47 = &word_70806C; /*0x369ad1*/
          v48 = 0; /*0x369ad6*/
          v37 = fmt::BasicWriter<char>::operator<<(v53, *(unsigned int *)v32); /*0x369ae5*/
          fmt::BasicWriter<char>::operator<<(v37, &v47); /*0x369af3*/
          fmt::BasicWriter<char>::operator<<(v38, &v50); /*0x369b00*/
          sub_3C310(v52); /*0x369b0b*/
          v22 = 1; /*0x369b10*/
        }
        v32 += 4; /*0x369b1d*/
        if ( v32 == v33 ) /*0x369b24*/
        {
          v2 = v49; /*0x369b2a*/
          v7 = v42; /*0x369b2f*/
          break; /*0x369b2f*/
        }
      }
    }
    sub_685C0(Src); /*0x369b35*/
  }
  if ( v7 || v22 ) /*0x369b47*/
  {
    v39 = fmt::BasicWriter<char>::c_str(v53); /*0x369b69*/
    *(_OWORD *)v2 = 0; /*0x369b72*/
    *(_QWORD *)(v2 + 16) = 0; /*0x369b78*/
    *(_QWORD *)(v2 + 24) = 0; /*0x369b7c*/
    v40 = -1; /*0x369b80*/
    do /*0x369b8a*/
      ++v40; /*0x369b87*/
    while ( *(_BYTE *)(v39 + v40) ); /*0x369b8a*/
    sub_3C230(v2); /*0x369b96*/
  }
  else
  {
    *(_OWORD *)v2 = 0; /*0x369b4c*/
    *(_QWORD *)(v2 + 16) = 0; /*0x369b50*/
    *(_QWORD *)(v2 + 24) = 15; /*0x369b58*/
    *(_BYTE *)v2 = 0; /*0x369b60*/
  }
  fmt::BasicWriter<char>::~BasicWriter<char>(v53); /*0x369ba0*/
  return v2; /*0x369ba9*/
}

// [34/36] Address: 0x36a820
// Method: GJEffectManager::calculateLightBGColor
__int64 __fastcall GJEffectManager_calculateLightBGColor(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int16 v5; // bx
  unsigned __int8 v6; // di
  float v7; // xmm6_4
  __int16 v8; // si
  int v9; // ebp
  float v10; // xmm5_4
  __int16 v11; // cx
  float v12; // xmm5_4
  float v13; // xmm4_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  __int64 v16; // rax
  __int64 result; // rax
  __int16 v18; // [rsp+20h] [rbp-68h]
  _DWORD v19[7]; // [rsp+30h] [rbp-58h] BYREF
  int v20; // [rsp+4Ch] [rbp-3Ch]
  __int16 v21; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int8 v22; // [rsp+A2h] [rbp+1Ah]
  __int16 v23; // [rsp+A8h] [rbp+20h] BYREF
  unsigned __int8 v24; // [rsp+AAh] [rbp+22h]

  v4 = sub_362560(a1, 1000); /*0x36a840*/
  if ( v4 ) /*0x36a848*/
  {
    v5 = *(_WORD *)(v4 + 327); /*0x36a84a*/
    v6 = *(_BYTE *)(v4 + 329); /*0x36a851*/
  }
  else
  {
    v5 = -1; /*0x36a85a*/
    v6 = -1; /*0x36a861*/
  }
  LOWORD(v20) = 257; /*0x36a868*/
  v19[3] = v20; /*0x36a88a*/
  v22 = v6; /*0x36a890*/
  v7 = 0.0; /*0x36a898*/
  v21 = v5; /*0x36a89b*/
  v19[0] = 0; /*0x36a8a3*/
  v19[1] = -1102263091; /*0x36a8ab*/
  v19[2] = 1045220557; /*0x36a8b3*/
  GameToolbox_transformColor(&v23, &v21, v19); /*0x36a8bb*/
  v8 = v23; /*0x36a8d0*/
  LOBYTE(v9) = v24; /*0x36a8d8*/
  v10 = (float)((unsigned __int8)v5 + HIBYTE(v21) + v6); /*0x36a8f4*/
  if ( v10 < 150.0 ) /*0x36a8fa*/
  {
    v11 = *(_WORD *)a2; /*0x36a900*/
    v12 = v10 / 150.0; /*0x36a912*/
    v21 = *(_WORD *)a2; /*0x36a91a*/
    v13 = fminf((float)((float)v24 * v12) + (float)((float)*(unsigned __int8 *)(a2 + 2) * (float)(1.0 - v12)), 255.0); /*0x36a98e*/
    if ( v13 < 0.0 ) /*0x36a995*/
      v13 = 0.0; /*0x36a997*/
    v14 = fminf((float)((float)HIBYTE(v23) * v12) + (float)((float)HIBYTE(v11) * (float)(1.0 - v12)), 255.0); /*0x36a99a*/
    if ( v14 < 0.0 ) /*0x36a9a1*/
      v14 = 0.0; /*0x36a9a3*/
    v15 = fminf( /*0x36a9a6*/
            (float)((float)(unsigned __int8)v23 * v12) + (float)((float)(unsigned __int8)v11 * (float)(1.0 - v12)),
            255.0);
    if ( v15 >= 0.0 ) /*0x36a9ad*/
      v7 = v15; /*0x36a9af*/
    v9 = (int)v13; /*0x36a9b6*/
    LOBYTE(v18) = (int)v7; /*0x36a9ba*/
    HIBYTE(v18) = (int)v14; /*0x36a9c2*/
    v8 = v18; /*0x36a9c6*/
  }
  v16 = sub_362560(a1, 1007); /*0x36a9d3*/
  *(_WORD *)(v16 + 324) = v8; /*0x36a9e0*/
  *(_BYTE *)(v16 + 326) = v9; /*0x36a9e7*/
  result = sub_362560(a1, 1007); /*0x36a9ee*/
  *(_WORD *)(result + 327) = v8; /*0x36aa00*/
  *(_BYTE *)(result + 329) = v9; /*0x36aa07*/
  return result; /*0x36a9f3*/
}

// [35/36] Address: 0x36aa20
// Method: GJEffectManager::setupFromString
// Hidden C++ exception states: #wind=3
double __fastcall GJEffectManager_setupFromString(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  cocos2d::CCArray *v3; // rdi
  void *v4; // r8
  unsigned int v5; // r15d
  cocos2d::CCString *v6; // rax
  const char *CString; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r14
  void **v16; // r12
  char *v17; // rsi
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rbx
  int v21; // r8d
  char *v22; // rax
  __int128 v24; // [rsp+30h] [rbp-69h] BYREF
  unsigned __int64 v25; // [rsp+40h] [rbp-59h]
  __int64 v26; // [rsp+48h] [rbp-51h]
  __int64 v27; // [rsp+50h] [rbp-49h]
  cocos2d::CCArray *v28; // [rsp+58h] [rbp-41h]
  _QWORD *v29; // [rsp+60h] [rbp-39h]
  _QWORD *v30; // [rsp+70h] [rbp-29h]
  void *Block[2]; // [rsp+78h] [rbp-21h] BYREF
  __m128i si128; // [rsp+88h] [rbp-11h]
  void *Src[2]; // [rsp+98h] [rbp-1h] BYREF
  unsigned __int64 v34; // [rsp+A8h] [rbp+Fh]
  unsigned __int64 v35; // [rsp+B0h] [rbp+17h]

  v29 = a2; /*0x36aa4a*/
  v27 = a1; /*0x36aa4e*/
  v30 = a2; /*0x36aa52*/
  if ( a2[3] > 0xFu ) /*0x36aa5b*/
    a2 = (_QWORD *)*a2; /*0x36aa5d*/
  *(_OWORD *)Block = 0; /*0x36aa63*/
  si128 = 0; /*0x36aa6a*/
  v2 = -1; /*0x36aa6f*/
  do /*0x36aa79*/
    ++v2; /*0x36aa76*/
  while ( *((_BYTE *)a2 + v2) ); /*0x36aa79*/
  sub_3C230(Block); /*0x36aa84*/
  v3 = (cocos2d::CCArray *)sub_35E6F0(Block); /*0x36aa93*/
  v28 = v3; /*0x36aa96*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x36aaa2*/
  {
    v4 = Block[0]; /*0x36aaa7*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x36aab5*/
    {
      v4 = (void *)*((_QWORD *)Block[0] - 1); /*0x36aabb*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v4 - 8) > 0x1F ) /*0x36aaca*/
        invoke_watson(0, 0, 0, 0, 0); /*0x36aadf*/
    }
    j_j_free(v4); /*0x36aae9*/
  }
  si128 = _mm_load_si128((const __m128i *)&Size); /*0x36aaf6*/
  LOBYTE(Block[0]) = 0; /*0x36aafb*/
  v5 = 0; /*0x36ab01*/
  if ( cocos2d::CCArray::count(v3) ) /*0x36ab07*/
  {
    do /*0x36ac76*/
    {
      v6 = cocos2d::CCArray::stringAtIndex(v3, v5); /*0x36ab26*/
      CString = cocos2d::CCString::getCString(v6); /*0x36ab2f*/
      *(_OWORD *)Src = 0; /*0x36ab38*/
      v34 = 0; /*0x36ab3c*/
      v35 = 0; /*0x36ab40*/
      v8 = -1; /*0x36ab44*/
      do /*0x36ab53*/
        ++v8; /*0x36ab50*/
      while ( CString[v8] ); /*0x36ab53*/
      sub_3C230(Src); /*0x36ab61*/
      v15 = ColorAction_create(v10, v9, v11); /*0x36ab6c*/
      v24 = 0; /*0x36ab72*/
      v25 = 0; /*0x36ab76*/
      v26 = 0; /*0x36ab7a*/
      v16 = Src; /*0x36ab7e*/
      v17 = (char *)Src[0]; /*0x36ab82*/
      v18 = v35; /*0x36ab86*/
      if ( v35 > 0xF ) /*0x36ab8e*/
        v16 = (void **)Src[0]; /*0x36ab8e*/
      v19 = v34; /*0x36ab92*/
      if ( v34 > 0x7FFFFFFFFFFFFFFFLL ) /*0x36aba3*/
        sub_8D90(v13, v12, v14); /*0x36acc2*/
      if ( v34 > 0xF ) /*0x36abad*/
      {
        v20 = v34 | 0xF; /*0x36abc9*/
        if ( (v34 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x36abd0*/
        {
          if ( v20 < 0x16 ) /*0x36abe0*/
            v20 = 22; /*0x36abe0*/
        }
        else
        {
          v20 = 0x7FFFFFFFFFFFFFFFLL; /*0x36abd2*/
        }
        *(_QWORD *)&v24 = sub_3C460(v20 + 1); /*0x36abed*/
        v25 = v19; /*0x36abf1*/
        v26 = v20; /*0x36abf5*/
        memcpy((void *)v24, v16, v19 + 1); /*0x36ac03*/
      }
      else
      {
        v25 = v34; /*0x36abaf*/
        v26 = 15; /*0x36abb3*/
        v24 = *(_OWORD *)v16; /*0x36abc0*/
      }
      ColorAction_setupFromString(v15, &v24); /*0x36ac11*/
      v21 = *(_DWORD *)(v15 + 92); /*0x36ac16*/
      if ( v21 <= 1101 ) /*0x36ac21*/
        GJEffectManager_setColorAction(v27, v15, v21); /*0x36ac2a*/
      if ( v18 > 0xF ) /*0x36ac34*/
      {
        v22 = v17; /*0x36ac3a*/
        if ( v18 + 1 >= 0x1000 ) /*0x36ac44*/
        {
          v17 = (char *)*((_QWORD *)v17 - 1); /*0x36ac4a*/
          if ( (unsigned __int64)(v22 - v17 - 8) > 0x1F ) /*0x36ac59*/
            invoke_watson(0, 0, 0, 0, 0); /*0x36acbb*/
        }
        j_j_free(v17); /*0x36ac5e*/
      }
      ++v5; /*0x36ac63*/
      v3 = v28; /*0x36ac66*/
    }
    while ( v5 < cocos2d::CCArray::count(v28) ); /*0x36ac76*/
  }
  return sub_3C310(v29); /*0x36ac85*/
}

// [36/36] Address: 0x36b170
// Method: GJEffectManager::loadFromState
// Hidden C++ exception states: #wind=4
__int64 __fastcall GJEffectManager_loadFromState(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdx
  int v11; // r8d
  cocos2d::CCDictionary *v12; // rcx
  __int64 v13; // rax
  __int64 ***v14; // r10
  __int64 **i; // rax
  __int64 ***v16; // r10
  __int64 **j; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // r10
  _QWORD *v22; // r10
  __int64 **v23; // r12
  __int64 *k; // rbx
  __int64 v25; // rdi
  __int64 v26; // rax
  _BYTE v28[56]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v29; // [rsp+60h] [rbp+8h] BYREF

  GJEffectManager_reset(a1); /*0x36b18c*/
  sub_36F8F0(a1 + 1392, a2 + 79); /*0x36b19f*/
  v5 = a2[1] - *a2; /*0x36b1a8*/
  v6 = v5 / 68; /*0x36b1c3*/
  v7 = (int)(v5 / 68); /*0x36b1c6*/
  if ( (int)(v5 / 68) > 0 ) /*0x36b1cb*/
  {
    v8 = 0; /*0x36b1d1*/
    do /*0x36b2b8*/
    {
      v9 = ColorAction_create(v4, v6, v5); /*0x36b1d8*/
      v10 = *a2; /*0x36b1db*/
      *(_WORD *)(v9 + 72) = *(_WORD *)(v8 + *a2); /*0x36b1e2*/
      *(_BYTE *)(v9 + 74) = *(_BYTE *)(v8 + v10 + 2); /*0x36b1eb*/
      *(_WORD *)(v9 + 75) = *(_WORD *)(v8 + v10 + 3); /*0x36b1f3*/
      *(_BYTE *)(v9 + 77) = *(_BYTE *)(v8 + v10 + 5); /*0x36b1fc*/
      *(_WORD *)(v9 + 58) = *(_WORD *)(v8 + v10 + 6); /*0x36b204*/
      *(_BYTE *)(v9 + 60) = *(_BYTE *)(v8 + v10 + 8); /*0x36b20d*/
      *(_BYTE *)(v9 + 57) = *(_BYTE *)(v8 + v10 + 9); /*0x36b215*/
      *(_DWORD *)(v9 + 88) = *(_DWORD *)(v8 + v10 + 16); /*0x36b21c*/
      *(_DWORD *)(v9 + 80) = *(_DWORD *)(v8 + v10 + 32); /*0x36b223*/
      v11 = *(_DWORD *)(v8 + v10 + 20); /*0x36b226*/
      *(_DWORD *)(v9 + 92) = v11; /*0x36b22b*/
      *(_BYTE *)(v9 + 84) = *(_BYTE *)(v8 + v10 + 10); /*0x36b234*/
      *(_DWORD *)(v9 + 96) = *(_DWORD *)(v8 + v10 + 36); /*0x36b23b*/
      *(_DWORD *)(v9 + 100) = *(_DWORD *)(v8 + v10 + 40); /*0x36b242*/
      *(_BYTE *)(v9 + 125) = *(_BYTE *)(v8 + v10 + 11); /*0x36b24a*/
      *(_DWORD *)(v9 + 120) = *(_DWORD *)(v8 + v10 + 24); /*0x36b251*/
      *(_OWORD *)(v9 + 104) = *(_OWORD *)(v8 + v10 + 52); /*0x36b259*/
      *(_DWORD *)(v9 + 68) = *(_DWORD *)(v8 + v10 + 44); /*0x36b261*/
      *(_DWORD *)(v9 + 128) = *(_DWORD *)(v8 + v10 + 28); /*0x36b268*/
      *(_BYTE *)(v9 + 136) = *(_BYTE *)(v8 + v10 + 12); /*0x36b273*/
      *(_DWORD *)(v9 + 64) = *(_DWORD *)(v8 + v10 + 48); /*0x36b27d*/
      GJEffectManager_setColorAction(a1, v9, v11); /*0x36b286*/
      v12 = *(cocos2d::CCDictionary **)(a1 + 632); /*0x36b28b*/
      if ( *(int *)(v9 + 120) <= 0 ) /*0x36b29a*/
        cocos2d::CCDictionary::removeObjectForKey(v12, *(int *)(v9 + 92)); /*0x36b2aa*/
      else
        cocos2d::CCDictionary::setObject(v12, (struct cocos2d::CCObject *)v9, *(int *)(v9 + 92)); /*0x36b2a2*/
      v8 += 68; /*0x36b2b0*/
      --v7; /*0x36b2b4*/
    }
    while ( v7 ); /*0x36b2b8*/
  }
  if ( (__int64 *)(a1 + 344) != a2 + 3 ) /*0x36b2d6*/
    sub_36E850(a1 + 344, a2[3], (a2[4] - a2[3]) / 72); /*0x36b2f9*/
  if ( (__int64 *)(a1 + 368) != a2 + 6 ) /*0x36b30c*/
  {
    v29 = a1 + 368; /*0x36b30e*/
    *(_DWORD *)(a1 + 368) = *((_DWORD *)a2 + 12); /*0x36b315*/
    sub_372DE0(a1 + 376, *(_QWORD *)a2[7], a2[7]); /*0x36b325*/
    v13 = sub_69540(a1 + 368, *(_QWORD *)(a1 + 384)); /*0x36b331*/
    sub_3E310(a1 + 368, v13); /*0x36b33c*/
  }
  v14 = *(__int64 ****)(a1 + 376); /*0x36b342*/
  for ( i = *v14; i != (__int64 **)v14; i = (__int64 **)*i ) /*0x36b34f*/
    *(_DWORD *)(*(_QWORD *)(a1 + 784) + 4 * ((unsigned __int64)*((int *)i + 4) >> 5)) |= 1 << ((_BYTE)i[2] & 0x1F); /*0x36b36f*/
  sub_36F6E0(a1 + 432, a2 + 32); /*0x36b389*/
  sub_36F8F0(a1 + 1312, a2 + 22); /*0x36b39c*/
  v16 = *(__int64 ****)(a1 + 1320); /*0x36b3a1*/
  for ( j = *v16; j != (__int64 **)v16; j = (__int64 **)*j ) /*0x36b3ae*/
    *(_DWORD *)(*(_QWORD *)(a1 + 1280) + 4 * ((unsigned __int64)*((int *)j + 4) >> 5)) &= ~(1 << ((_BYTE)j[2] & 0x1F)); /*0x36b3ce*/
  sub_36C270(a1 + 1376, a2 + 30); /*0x36b3e8*/
  if ( (__int64 *)(a1 + 1456) != a2 + 49 ) /*0x36b3fe*/
    sub_36D6D0(a1 + 1456, a2[49], (a2[50] - a2[49]) / 72); /*0x36b421*/
  if ( (__int64 *)(a1 + 1552) != a2 + 68 ) /*0x36b437*/
    sub_36D370(a1 + 1552, a2[68], (a2[69] - a2[68]) / 520); /*0x36b461*/
  if ( (__int64 *)(a1 + 1576) != a2 + 71 ) /*0x36b477*/
  {
    v29 = a1 + 1576; /*0x36b479*/
    *(_DWORD *)(a1 + 1576) = *((_DWORD *)a2 + 142); /*0x36b480*/
    sub_372A10(a1 + 1584, *(_QWORD *)a2[72], a2[72]); /*0x36b490*/
    v18 = sub_69540(a1 + 1576, *(_QWORD *)(a1 + 1592)); /*0x36b49c*/
    sub_3E310(a1 + 1576, v18); /*0x36b4a7*/
  }
  if ( (__int64 *)(a1 + 496) != a2 + 40 ) /*0x36b4c8*/
    sub_36DE40(a1 + 496, a2[40], (a2[41] - a2[40]) / 56); /*0x36b4eb*/
  if ( (__int64 *)(a1 + 520) != a2 + 14 ) /*0x36b4fe*/
  {
    v29 = a1 + 520; /*0x36b500*/
    *(_DWORD *)(a1 + 520) = *((_DWORD *)a2 + 28); /*0x36b507*/
    sub_372BE0(a1 + 528, *(_QWORD *)a2[15], a2[15]); /*0x36b517*/
    v19 = sub_69540(a1 + 520, *(_QWORD *)(a1 + 536)); /*0x36b523*/
    sub_3E310(a1 + 520, v19); /*0x36b52e*/
  }
  if ( (__int64 *)(a1 + 608) != a2 + 46 ) /*0x36b545*/
    sub_36D8A0(a1 + 608, a2[46], (a2[47] - a2[46]) / 48); /*0x36b56f*/
  if ( (__int64 *)(a1 + 584) != a2 + 43 ) /*0x36b585*/
    sub_36DAD0(a1 + 584, a2[43], (a2[44] - a2[43]) / 56); /*0x36b5a8*/
  sub_36F2A0(a1 + 672, a2 + 60); /*0x36b5bb*/
  sub_681F0(a1 + 816, a2 + 52); /*0x36b5ce*/
  LevelEditorLayer_getLastObjectX(a1); /*0x36b5d6*/
  *(_DWORD *)(a1 + 1008) = *((_DWORD *)a2 + 206); /*0x36b5e2*/
  v20 = *(_QWORD **)(a1 + 1152); /*0x36b5e8*/
  v21 = (_QWORD *)*v20; /*0x36b5ef*/
  if ( (_QWORD *)*v20 != v20 ) /*0x36b5fc*/
  {
    do /*0x36b634*/
    {
      if ( sub_659E0(a1 + 944, v21 + 2) ) /*0x36b607*/
        v21 = (_QWORD *)*v22; /*0x36b62a*/
      else
        v21 = *(_QWORD **)sub_36B760(a1 + 1144, &v29, v22); /*0x36b625*/
    }
    while ( v21 != *(_QWORD **)(a1 + 1152) ); /*0x36b634*/
  }
  v23 = (__int64 **)a2[88]; /*0x36b636*/
  for ( k = *v23; k != (__int64 *)v23; k = (__int64 *)*k ) /*0x36b644*/
  {
    if ( !sub_659E0(a1 + 944, k + 2) ) /*0x36b657*/
    {
      v25 = *(_QWORD *)sub_36CCC0(a1 + 1144, v28, k + 2); /*0x36b676*/
      *(_DWORD *)(v25 + 24) = *((_DWORD *)k + 6); /*0x36b67c*/
      *(_QWORD *)(v25 + 32) = k[4]; /*0x36b683*/
      *(_BYTE *)(v25 + 40) = *((_BYTE *)k + 40); /*0x36b68b*/
      *(_DWORD *)(v25 + 44) = *((_DWORD *)k + 11); /*0x36b691*/
      *(_BYTE *)(v25 + 48) = *((_BYTE *)k + 48); /*0x36b698*/
      *(_QWORD *)(v25 + 56) = k[7]; /*0x36b69f*/
      *(_BYTE *)(v25 + 64) = *((_BYTE *)k + 64); /*0x36b6a7*/
      *(_DWORD *)(v25 + 68) = *((_DWORD *)k + 17); /*0x36b6ad*/
      *(_DWORD *)(v25 + 72) = *((_DWORD *)k + 18); /*0x36b6b3*/
      *(_DWORD *)(v25 + 76) = *((_DWORD *)k + 19); /*0x36b6b9*/
      sub_98E50(v25 + 80, k + 10); /*0x36b6c4*/
      *(_BYTE *)(v25 + 104) = *((_BYTE *)k + 104); /*0x36b6cd*/
    }
  }
  if ( (__int64 *)(a1 + 1208) != a2 + 95 ) /*0x36b6ed*/
  {
    v29 = a1 + 1208; /*0x36b6ef*/
    *(_DWORD *)(a1 + 1208) = *((_DWORD *)a2 + 190); /*0x36b6f6*/
    sub_372600(a1 + 1216, *(_QWORD *)a2[96], a2[96]); /*0x36b706*/
    v26 = sub_69540(a1 + 1208, *(_QWORD *)(a1 + 1224)); /*0x36b712*/
    sub_3E310(a1 + 1208, v26); /*0x36b71d*/
  }
  GJEffectManager_updateEffects(a1, 0.0); /*0x36b729*/
  sub_361D10(a1); /*0x36b731*/
  return sub_361DD0(a1); /*0x36b739*/
}

// Address: 0x3620f0
// Method: GJEffectManager::calculateInheritedColor
void __fastcall GJEffectManager_calculateInheritedColor(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  float v7; // xmm6_4
  float v8; // xmm2_4
  __int64 v9; // r15
  unsigned __int16 v10; // r9
  int v11; // r10d
  float v12; // xmm7_4
  float v13; // xmm0_4
  float v14; // xmm3_4
  float v15; // xmm4_4
  unsigned __int16 v16; // ax
  int v17; // r8d
  __m128 v18; // xmm4
  float v19; // xmm1_4
  float v20; // xmm3_4
  unsigned __int64 v21; // xmm0_8
  float v22; // xmm6_4
  float v23; // xmm3_4
  __m128i v24; // xmm0
  float v25; // xmm5_4
  float v26; // xmm4_4
  float v27; // xmm1_4
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 i; // rbx
  __int64 v31; // rax
  float v32; // xmm0_4
  float v33; // xmm0_4
  unsigned __int16 v34; // [rsp+20h] [rbp-29h] BYREF
  char v35; // [rsp+22h] [rbp-27h]
  unsigned __int16 v36; // [rsp+30h] [rbp-19h]
  _WORD v37[8]; // [rsp+40h] [rbp-9h] BYREF
  __int128 v38; // [rsp+50h] [rbp+7h] BYREF

  if ( a3 )
  {
    if ( !*(_BYTE *)(a3 + 124) )
    {
      v5 = *(unsigned int *)(a3 + 120);
      if ( (_DWORD)v5 )
      {
        v6 = sub_362560(a1, v5);
        v7 = *(float *)(a3 + 80);
        v8 = 0.0;
        v9 = *(_QWORD *)(a3 + 144);
        v10 = *(_WORD *)(v6 + 327);
        LOBYTE(v11) = *(_BYTE *)(v6 + 329);
        v34 = v10;
        v35 = v11;
        v12 = *(float *)(v6 + 320);
        if ( v7 > 0.0 )
        {
          v13 = *(float *)(a3 + 164) + *(float *)(a3 + 68);
          if ( v7 > v13 )
          {
            v14 = fminf(1.0, v13 / v7);
            if ( v14 < 0.0 )
              v14 = 0.0;
            v10 = *(_WORD *)(v6 + 327);
            v11 = *(unsigned __int8 *)(v6 + 329);
            v15 = fminf(1.0, v14);
            v16 = *(_WORD *)(a3 + 72);
            v37[0] = v10;
            v36 = v16;
            if ( v15 <= 0.0 )
            {
              LOBYTE(v11) = *(_BYTE *)(a3 + 74);
              v10 = v16;
            }
            else if ( v15 != 1.0 )
            {
              v17 = *(unsigned __int8 *)(a3 + 74);
              LOBYTE(v36) = (int)(float)((float)((float)((unsigned __int8)v10 - (unsigned __int8)v16) * v15)
                                       + (float)(unsigned __int8)v16);
              HIBYTE(v36) = (int)(float)((float)((float)(HIBYTE(v37[0]) - HIBYTE(v36)) * v15) + (float)HIBYTE(v36));
              v10 = v36;
              v11 = (int)(float)((float)((float)(v11 - v17) * v15) + (float)v17);
            }
            v34 = v10;
            v35 = v11;
            v12 = (float)((float)((float)(1.0 - v14) * *(float *)(a3 + 96)) + (float)((float)(v12 / 255.0) * v14))
                * 255.0;
          }
        }
        v18 = *(__m128 *)(a3 + 104);
        LODWORD(v19) = _mm_shuffle_ps(v18, v18, 170).m128_u32[0];
        LODWORD(v20) = _mm_shuffle_ps(v18, v18, 85).m128_u32[0];
        if ( v18.m128_f32[0] != *(float *)&xmmword_8F8490
          || v20 != *((float *)&xmmword_8F8490 + 1)
          || v19 != *((float *)&xmmword_8F8490 + 2)
          || (v21 = _mm_srli_si128((__m128i)v18, 8).m128i_u64[0], BYTE4(v21) != BYTE12(xmmword_8F8490))
          || BYTE5(v21) != BYTE13(xmmword_8F8490) )
        {
          if ( *(_BYTE *)(a3 + 136)
            && v7 > 0.0
            && ((v22 = fminf(1.0, (float)(*(float *)(a3 + 68) - *(float *)(a3 + 160)) / v7), v22 < 0.0)
             || (v8 = v22, v22 < 1.0)) )
          {
            v23 = v20 * v8;
            v24 = (__m128i)_mm_shuffle_ps(v18, v18, 255);
            v25 = 1.0 - v8;
            HIDWORD(v38) = v24.m128i_i32[0];
            v26 = v18.m128_f32[0] * v8;
            if ( !v24.m128i_i8[0] )
              v23 = v23 + v25;
            v27 = v19 * v8;
            if ( !((unsigned __int16)_mm_cvtsi128_si32(v24) >> 8) )
              v27 = v27 + v25;
            *(_QWORD *)&v38 = __PAIR64__(LODWORD(v23), LODWORD(v26));
            *((_QWORD *)&v38 + 1) = __PAIR64__(v24.m128i_u32[0], LODWORD(v27));
          }
          else
          {
            v38 = *(_OWORD *)(a3 + 104);
          }
          v28 = GameToolbox_transformColor((__int64)v37, &v34, (float *)&v38);
          LOBYTE(v11) = *(_BYTE *)(v28 + 2);
          v10 = *(_WORD *)v28;
          v35 = v11;
          v34 = v10;
        }
        v29 = *(_QWORD *)(a1 + 352);
        for ( i = *(_QWORD *)(a1 + 344); i != v29; i += 72 )
        {
          if ( *(_DWORD *)(i + 20) == *(_DWORD *)(a3 + 92) && !*(_DWORD *)(i + 52) )
          {
            v31 = sub_368560(a1, v37, &v34, i);
            v10 = *(_WORD *)v31;
            LOBYTE(v11) = *(_BYTE *)(v31 + 2);
            v34 = *(_WORD *)v31;
            v35 = v11;
          }
        }
        *(_WORD *)(v9 + 327) = v10;
        *(_WORD *)(v9 + 324) = v10;
        *(_BYTE *)(v9 + 329) = v11;
        *(_BYTE *)(v9 + 326) = v11;
        v32 = *(float *)(a3 + 64);
        if ( *(_BYTE *)(a3 + 125) )
          v33 = v32 * v12;
        else
          v33 = v32 * 255.0;
        *(float *)(v9 + 320) = v33;
      }
    }
    *(_BYTE *)(a3 + 124) = 1;
  }
}

// Address: 0x367930
// Method: GJEffectManager::runPulseEffect
__int64 __fastcall GJEffectManager_runPulseEffect(
        _QWORD *a1,
        int a2,
        char a3,
        float a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int128 *a9,
        int a10,
        char a11,
        char a12,
        char a13,
        char a14,
        int a15,
        int a16)
{
  int v16; // r9d
  __int64 v18; // r8
  int v19; // ebx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // xmm1_4
  __int128 *v24; // rax
  __int128 v25; // xmm0
  __int64 v26; // rax
  __int64 v27; // rdx
  _DWORD *v28; // r8
  unsigned __int64 v29; // rcx
  _DWORD *v30; // r10
  _QWORD *v31; // rbx
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // r10
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // xmm0_4
  int v39; // xmm1_4
  __int128 *v40; // rax
  __int128 v41; // xmm0
  __int64 result; // rax
  float v43; // xmm2_4
  float v44; // xmm1_4
  float v45; // xmm1_4
  float v46; // xmm5_4
  _BYTE v47[16]; // [rsp+80h] [rbp-39h] BYREF
  int v48; // [rsp+D8h] [rbp+1Fh] BYREF
  float v49; // [rsp+E8h] [rbp+2Fh] BYREF

  v49 = a4;
  v16 = a2;
  if ( a2 < 0 )
    v16 = 0;
  if ( v16 > 9999 )
    v16 = 9999;
  v48 = v16;
  if ( a13 )
  {
    if ( !a3 )
    {
      v18 = a1[43];
      v19 = 0;
      if ( (a1[44] - v18) / 72 )
      {
        v20 = 0;
        do
        {
          if ( *(_DWORD *)(v20 + v18 + 20) == v16 )
          {
            memmove((void *)(v18 + 72LL * v19), (const void *)(v18 + 72LL * v19 + 72), a1[44] - (v18 + 72LL * v19 + 72));
            a1[44] -= 72LL;
            v16 = v48;
          }
          else
          {
            ++v19;
            v20 += 72;
          }
          v18 = a1[43];
        }
        while ( v19 < (unsigned __int64)((a1[44] - v18) / 72) );
      }
      goto LABEL_13;
    }
    v27 = a1[49];
    v28 = (_DWORD *)a1[47];
    v29 = 2
        * (a1[52]
         & (0x100000001B3LL
          * (HIBYTE(v16)
           ^ (0x100000001B3LL
            * (BYTE2(v16)
             ^ (0x100000001B3LL * (BYTE1(v16) ^ (0x100000001B3LL * ((unsigned __int8)v16 ^ 0xCBF29CE484222325uLL)))))))));
    v30 = *(_DWORD **)(v27
                     + 16
                     * (a1[52]
                      & (0x100000001B3LL
                       * (HIBYTE(v16)
                        ^ (0x100000001B3LL
                         * (BYTE2(v16)
                          ^ (0x100000001B3LL
                           * (BYTE1(v16) ^ (0x100000001B3LL * ((unsigned __int8)v16 ^ 0xCBF29CE484222325uLL)))))))))
                     + 8);
    v31 = v30;
    if ( v30 != v28 )
    {
      if ( v16 == v30[4] )
        goto LABEL_22;
      while ( v31 != *(_QWORD **)(v27 + 8 * v29) )
      {
        v31 = (_QWORD *)v31[1];
        if ( v16 == *((_DWORD *)v31 + 4) )
          goto LABEL_22;
      }
    }
    v31 = 0;
LABEL_22:
    if ( v31 )
    {
      v32 = *(_QWORD **)(v27 + 8 * v29);
      if ( v30 == (_DWORD *)v31 )
      {
        if ( v32 == v31 )
          *(_QWORD *)(v27 + 8 * v29) = v28;
        else
          v28 = (_DWORD *)v31[1];
        *(_QWORD *)(v27 + 8 * v29 + 8) = v28;
      }
      else if ( v32 == v31 )
      {
        *(_QWORD *)(v27 + 8 * v29) = *v31;
      }
      v33 = *v31;
      --a1[48];
      *(_QWORD *)v31[1] = v33;
      *(_QWORD *)(v33 + 8) = v31[1];
      sub_36FF20(v31 + 3);
      j_j_free(v31);
      v16 = v48;
    }
    goto LABEL_31;
  }
  if ( a3 )
  {
LABEL_31:
    *(_DWORD *)(a1[98] + 4 * ((unsigned __int64)v16 >> 5)) |= 1 << (v16 & 0x1F);
    v34 = sub_36E620(a1 + 46, v47, &v48);
    v35 = *(_QWORD *)v34;
    v36 = *(_QWORD *)(*(_QWORD *)v34 + 32LL);
    if ( v36 == *(_QWORD *)(*(_QWORD *)v34 + 40LL) )
    {
      sub_371290(v35 + 24, v36, &v49, &a5, &a6, &a7, &v48, a8, a9, &a10, &a11, &a12, &a14, &a15, &a16);
    }
    else
    {
      v37 = a8;
      v38 = a5;
      v39 = a6;
      *(_DWORD *)(v36 + 20) = v48;
      *(_WORD *)(v36 + 28) = *(_WORD *)v37;
      *(_BYTE *)(v36 + 30) = *(_BYTE *)(v37 + 2);
      *(_DWORD *)(v36 + 32) = a7;
      v40 = a9;
      *(_DWORD *)(v36 + 8) = v38;
      *(float *)(v36 + 4) = a4;
      *(_DWORD *)(v36 + 12) = v39;
      v41 = *v40;
      *(_DWORD *)(v36 + 52) = a10;
      *(_BYTE *)(v36 + 56) = a11;
      *(_BYTE *)(v36 + 57) = a12;
      *(_BYTE *)(v36 + 58) = a14;
      *(_DWORD *)(v36 + 60) = a15;
      *(_DWORD *)(v36 + 64) = a16;
      *(_BYTE *)v36 = 0;
      *(_DWORD *)(v36 + 16) = 0;
      *(_DWORD *)(v36 + 24) = 0;
      *(_DWORD *)(v36 + 68) = 0;
      *(_OWORD *)(v36 + 36) = v41;
      *(_QWORD *)(v35 + 32) += 72LL;
    }
    v26 = *(_QWORD *)(*(_QWORD *)sub_36E620(a1 + 46, v47, &v48) + 32LL);
    goto LABEL_38;
  }
LABEL_13:
  v21 = a1[44];
  if ( v21 == a1[45] )
  {
    sub_371290(a1 + 43, v21, &v49, &a5, &a6, &a7, &v48, a8, a9, &a10, &a11, &a12, &a14, &a15, &a16);
  }
  else
  {
    v22 = a8;
    v23 = a6;
    *(_DWORD *)(v21 + 8) = a5;
    *(_WORD *)(v21 + 28) = *(_WORD *)v22;
    *(_BYTE *)(v21 + 30) = *(_BYTE *)(v22 + 2);
    *(_DWORD *)(v21 + 32) = a7;
    v24 = a9;
    *(float *)(v21 + 4) = a4;
    *(_DWORD *)(v21 + 12) = v23;
    *(_BYTE *)v21 = 0;
    v25 = *v24;
    *(_DWORD *)(v21 + 52) = a10;
    *(_BYTE *)(v21 + 56) = a11;
    *(_BYTE *)(v21 + 57) = a12;
    *(_BYTE *)(v21 + 58) = a14;
    *(_DWORD *)(v21 + 60) = a15;
    *(_DWORD *)(v21 + 64) = a16;
    *(_DWORD *)(v21 + 16) = 0;
    *(_DWORD *)(v21 + 24) = 0;
    *(_DWORD *)(v21 + 68) = 0;
    *(_DWORD *)(v21 + 20) = v16;
    *(_OWORD *)(v21 + 36) = v25;
    a1[44] += 72LL;
  }
  v26 = a1[44];
LABEL_38:
  result = v26 - 72;
  if ( !*(_BYTE *)result )
  {
    v43 = *(float *)(result + 4);
    v44 = *(float *)(result + 16) + 0.0;
    *(float *)(result + 16) = v44;
    v45 = v44 + *(float *)(result + 68);
    if ( v43 <= v45 )
    {
      if ( (float)(*(float *)(result + 8) + v43) < v45 )
      {
        v46 = *(float *)(result + 12);
        if ( v46 <= 0.0 )
          *(_DWORD *)(result + 24) = 0;
        else
          *(float *)(result + 24) = 1.0 - (float)((float)((float)(v45 - v43) - *(float *)(result + 8)) / v46);
      }
      else
      {
        *(_DWORD *)(result + 24) = 1065353216;
      }
    }
    else
    {
      *(float *)(result + 24) = v45 / v43;
    }
  }
  return result;
}

// Address: 0x369ce0
// Method: GJEffectManager::startTimer
// Hidden C++ exception states: #wind=1
__int64 __fastcall GJEffectManager_startTimer(
        _QWORD *a1,
        int a2,
        double a3,
        double a4,
        char a5,
        char a6,
        char a7,
        int a8,
        char a9,
        int a10,
        __int64 a11,
        int a12,
        unsigned int a13)
{
  _QWORD *v14; // rbx
  unsigned __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  float v19; // xmm0_4
  float v20; // xmm0_4
  __int64 result; // rax
  __int64 v22; // rcx
  _BYTE v23[16]; // [rsp+20h] [rbp-81h] BYREF
  int v24; // [rsp+30h] [rbp-71h] BYREF
  double v25; // [rsp+38h] [rbp-69h]
  char v26; // [rsp+40h] [rbp-61h]
  int v27; // [rsp+44h] [rbp-5Dh]
  char v28; // [rsp+48h] [rbp-59h]
  double v29; // [rsp+50h] [rbp-51h]
  char v30; // [rsp+58h] [rbp-49h]
  int v31; // [rsp+5Ch] [rbp-45h]
  int v32; // [rsp+60h] [rbp-41h]
  unsigned int v33; // [rsp+64h] [rbp-3Dh]
  __int128 v34; // [rsp+68h] [rbp-39h] BYREF
  __int64 v35; // [rsp+78h] [rbp-29h]
  char v36; // [rsp+80h] [rbp-21h]
  int v37; // [rsp+C8h] [rbp+27h] BYREF

  v37 = a2;
  v14 = a1 + 143;
  v15 = 2
      * (a1[149]
       & (0x100000001B3LL
        * (HIBYTE(a2)
         ^ (0x100000001B3LL
          * (BYTE2(a2)
           ^ (0x100000001B3LL * (BYTE1(a2) ^ (0x100000001B3LL * ((unsigned __int8)a2 ^ 0xCBF29CE484222325uLL)))))))));
  v16 = a1[146];
  v17 = *(_QWORD *)(v16 + 8 * v15 + 8);
  if ( v17 != a1[144] )
  {
    v18 = *(_QWORD *)(v16 + 8 * v15);
    if ( a2 == *(_DWORD *)(v17 + 16) )
      goto LABEL_7;
    while ( v17 != v18 )
    {
      v17 = *(_QWORD *)(v17 + 8);
      if ( a2 == *(_DWORD *)(v17 + 16) )
        goto LABEL_7;
    }
  }
  v17 = 0;
LABEL_7:
  if ( v17 )
  {
    v22 = *(_QWORD *)sub_36CCC0(v14, v23, &v37);
    *(_BYTE *)(v22 + 40) = a6;
    *(_DWORD *)(v22 + 44) = a8;
    *(_BYTE *)(v22 + 48) = a9;
    *(double *)(v22 + 56) = a4;
    *(_BYTE *)(v22 + 64) = a5;
    *(_DWORD *)(v22 + 68) = a10;
    *(_DWORD *)(v22 + 72) = a12;
    result = a13;
    *(_DWORD *)(v22 + 76) = a13;
    *(_BYTE *)(v22 + 104) = 0;
    if ( !a7 )
      *(double *)(v22 + 32) = a3;
  }
  else
  {
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v24 = a2;
    v19 = a3;
    v25 = v19;
    v27 = a8;
    v26 = a6;
    v28 = a9;
    v20 = a4;
    v29 = v20;
    v30 = a5;
    v31 = a10;
    v32 = a12;
    v33 = a13;
    sub_98E50(&v34, a11);
    v36 = 0;
    sub_36BA80(v14, v23, &v37, &v24);
    return sub_685C0(&v34);
  }
  return result;
}
