#include <Geode/binding/GameSettingsLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/6] Address: 0x2bf110
// Method: GameSettingsLayer::~GameSettingsLayer
_QWORD *__fastcall GameSettingsLayer__dtor_GameSettingsLayer(_QWORD *Block, char a2)
{
  *Block = &GameSettingsLayer::`vftable'; /*0x2bf124*/
  Block[40] = &GameSettingsLayer::`vftable'; /*0x2bf130*/
  Block[41] = &GameSettingsLayer::`vftable'; /*0x2bf13e*/
  Block[42] = &GameSettingsLayer::`vftable'; /*0x2bf14c*/
  Block[43] = &GameSettingsLayer::`vftable'; /*0x2bf15a*/
  Block[44] = &GameSettingsLayer::`vftable'; /*0x2bf168*/
  Block[51] = &GameSettingsLayer::`vftable'; /*0x2bf176*/
  Block[54] = &GameSettingsLayer::`vftable'; /*0x2bf184*/
  Block[68] = &GameSettingsLayer::`vftable'; /*0x2bf192*/
  Block[83] = &GameSettingsLayer::`vftable'; /*0x2bf1a0*/
  Block[84] = &GameSettingsLayer::`vftable'; /*0x2bf1ae*/
  Block[134] = &GameSettingsLayer::`vftable'; /*0x2bf1bc*/
  sub_3DA90(Block + 139); /*0x2bf1ca*/
  sub_65440(Block + 137); /*0x2bf1d6*/
  sub_19C960(Block + 128); /*0x2bf1e2*/
  sub_19CA30(Block + 125); /*0x2bf1ee*/
  UIPOptionsLayer__dtor_UIPOptionsLayer((cocos2d::CCNode *)Block); /*0x2bf1f6*/
  if ( (a2 & 1) != 0 ) /*0x2bf1fe*/
    j_j_free(Block); /*0x2bf208*/
  return Block; /*0x2bf20d*/
}

// [2/6] Address: 0x2c3490
// Method: GameSettingsLayer::getValue
// Hidden C++ exception states: #wind=6
float __fastcall GameSettingsLayer_getValue(_QWORD *a1, int a2)
{
  unsigned __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // r10
  __int64 v7; // rcx
  double Value; // xmm0_8
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  cocos2d::CCString *v12; // rax
  bool v13; // bl
  __int64 v14; // rax
  __int64 v15; // rax
  void *v17; // [rsp+20h] [rbp-38h]
  void *v18; // [rsp+20h] [rbp-38h]
  void *v19; // [rsp+20h] [rbp-38h]
  void *v20; // [rsp+20h] [rbp-38h]
  void *v21; // [rsp+20h] [rbp-38h]
  _BYTE v22[32]; // [rsp+28h] [rbp-30h] BYREF

  switch ( a2 ) /*0x2c34ab*/
  {
    case -4: /*0x2c34ab*/
      v15 = qword_905FD0; /*0x2c3775*/
      if ( !qword_905FD0 ) /*0x2c377f*/
      {
        v21 = operator new(0x6E8u); /*0x2c378b*/
        qword_905FD0 = sub_2723A0(v21); /*0x2c3799*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2c37aa*/
        v15 = qword_905FD0; /*0x2c37ac*/
      }
      LODWORD(Value) = *(_DWORD *)(v15 + 1140); /*0x2c37b3*/
      break;
    case -3: /*0x2c34ab*/
      v14 = qword_905F60; /*0x2c3719*/
      if ( !qword_905F60 ) /*0x2c3723*/
      {
        v20 = operator new(0x8A8u); /*0x2c372f*/
        qword_905F60 = sub_5AE20(v20); /*0x2c373d*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x2c374e*/
        v14 = qword_905F60; /*0x2c3750*/
      }
      *(float *)&Value = (float)*(int *)(v14 + 620); /*0x2c375f*/
      break;
    case -2: /*0x2c34ab*/
      v10 = qword_905FE0; /*0x2c364c*/
      if ( !qword_905FE0 ) /*0x2c3656*/
      {
        v19 = operator new(0x3E8u); /*0x2c3662*/
        qword_905FE0 = sub_2D2B40(v19); /*0x2c3670*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x2c3681*/
        v10 = qword_905FE0; /*0x2c3683*/
      }
      if ( (unsigned __int8)sub_2E5B30(a1, 12, 17) ) /*0x2c3695*/
      {
        GameStatsManager_getRewardKey(v11, (__int64)v22, 0x11u, 0xCu); /*0x2c36ce*/
        v12 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v10 + 896), v22); /*0x2c36e0*/
        v13 = cocos2d::CCString::boolValue(v12); /*0x2c36ef*/
        sub_3C310(v22); /*0x2c36f7*/
        *(float *)&Value = (float)v13; /*0x2c3703*/
      }
      else
      {
        *(float *)&Value = (float)0; /*0x2c36a7*/
      }
      break;
    case -1: /*0x2c34ab*/
      v9 = qword_905FD0; /*0x2c35ed*/
      if ( !qword_905FD0 ) /*0x2c35f7*/
      {
        v18 = operator new(0x6E8u); /*0x2c3603*/
        qword_905FD0 = sub_2723A0(v18); /*0x2c3611*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2c3622*/
        v9 = qword_905FD0; /*0x2c3624*/
      }
      *(float *)&Value = (float)*(unsigned __int8 *)(v9 + 956); /*0x2c3636*/
      break;
    default:
      v3 = a1[142] /*0x2c3518*/
         & (0x100000001B3LL
          * (HIBYTE(a2)
           ^ (0x100000001B3LL
            * (BYTE2(a2)
             ^ (0x100000001B3LL * ((0x100000001B3LL * ((unsigned __int8)a2 ^ 0xCBF29CE484222325uLL)) ^ BYTE1(a2)))))));
      v4 = a1[139]; /*0x2c351f*/
      v5 = *(_QWORD *)(v4 /*0x2c352c*/
                     + 16
                     * (a1[142]
                      & (0x100000001B3LL
                       * (HIBYTE(a2)
                        ^ (0x100000001B3LL
                         * (BYTE2(a2)
                          ^ (0x100000001B3LL
                           * ((0x100000001B3LL * ((unsigned __int8)a2 ^ 0xCBF29CE484222325uLL)) ^ BYTE1(a2))))))))
                     + 8);
      v6 = a1[137]; /*0x2c3531*/
      if ( v5 != v6 ) /*0x2c353b*/
      {
        if ( a2 == *(_DWORD *)(v5 + 16) ) /*0x2c3547*/
        {
LABEL_11:
          if ( !v5 ) /*0x2c3565*/
            v5 = a1[137]; /*0x2c3565*/
          if ( v5 == v6 ) /*0x2c356c*/
          {
            Value = SetupTriggerPopup_getValue((__int64)a1, a2); /*0x2c35d5*/
          }
          else
          {
            v7 = qword_905FD0; /*0x2c356e*/
            if ( !qword_905FD0 ) /*0x2c3578*/
            {
              v17 = operator new(0x6E8u); /*0x2c3584*/
              qword_905FD0 = sub_2723A0(v17); /*0x2c3592*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2c35a3*/
              v7 = qword_905FD0; /*0x2c35a5*/
            }
            *(float *)&Value = (float)GameManager_getGameVariable(v7, *(_BYTE **)(v5 + 24)); /*0x2c35bc*/
          }
          break; /*0x2c35d1*/
        }
        while ( v5 != *(_QWORD *)(v4 + 16 * v3) ) /*0x2c3553*/
        {
          v5 = *(_QWORD *)(v5 + 8); /*0x2c3555*/
          if ( a2 == *(_DWORD *)(v5 + 16) ) /*0x2c355c*/
            goto LABEL_11; /*0x2c355c*/
        }
      }
      v5 = 0; /*0x2c3560*/
      goto LABEL_11; /*0x2c3560*/
  }
  return *(float *)&Value; /*0x2c35bf*/
}

// [3/6] Address: 0x2c41f0
// Method: GameSettingsLayer::onCustomButton
// Hidden C++ exception states: #wind=2
__int64 __fastcall GameSettingsLayer_onCustomButton(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  cocos2d::CCObject *v4; // rax
  cocos2d::CCObject *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  cocos2d::CCObject *v9; // rbx
  __int64 (__fastcall *v10)(__int64); // rdx
  __int64 v11; // rax
  __int128 v12; // [rsp+50h] [rbp-48h] BYREF
  __int64 v13; // [rsp+60h] [rbp-38h]
  __int64 v14; // [rsp+68h] [rbp-30h]
  _BYTE v15[32]; // [rsp+70h] [rbp-28h] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x2c420b*/
  switch ( (_DWORD)result ) /*0x2c4213*/
  {
    case 0xFFFFFC14: /*0x2c4213*/
      v9 = (cocos2d::CCObject *)operator new(0x2C0u); /*0x2c4401*/
      memset(v9, 0, 0x2C0u); /*0x2c4417*/
      FLAlertLayer_FLAlertLayer((__int64)v9); /*0x2c441f*/
      *(_QWORD *)v9 = &ClearPlatformerSavesPopup::`vftable'; /*0x2c442b*/
      *((_QWORD *)v9 + 40) = &ClearPlatformerSavesPopup::`vftable'; /*0x2c4435*/
      *((_QWORD *)v9 + 41) = &ClearPlatformerSavesPopup::`vftable'; /*0x2c4443*/
      *((_QWORD *)v9 + 42) = &ClearPlatformerSavesPopup::`vftable'; /*0x2c4451*/
      *((_QWORD *)v9 + 43) = &ClearPlatformerSavesPopup::`vftable'; /*0x2c445f*/
      *((_QWORD *)v9 + 44) = &ClearPlatformerSavesPopup::`vftable'; /*0x2c446d*/
      *((_QWORD *)v9 + 51) = &ClearPlatformerSavesPopup::`vftable'; /*0x2c447b*/
      *((_QWORD *)v9 + 54) = &ClearPlatformerSavesPopup::`vftable'; /*0x2c4489*/
      *((_QWORD *)v9 + 68) = &ClearPlatformerSavesPopup::`vftable'; /*0x2c4497*/
      *((_QWORD *)v9 + 83) = &ClearPlatformerSavesPopup::`vftable'; /*0x2c44a5*/
      *((_BYTE *)v9 + 672) = 0; /*0x2c44ac*/
      *((_QWORD *)v9 + 85) = 0; /*0x2c44b5*/
      *((_QWORD *)v9 + 86) = 0; /*0x2c44bc*/
      *((_QWORD *)v9 + 87) = 0; /*0x2c44c3*/
      if ( (unsigned __int8)ClearPlatformerSavesPopup_init(v9) ) /*0x2c44e0*/
      {
        cocos2d::CCObject::autorelease(v9); /*0x2c44f0*/
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v9 + 8LL))(v9, 1); /*0x2c4500*/
        v9 = 0; /*0x2c4503*/
      }
      v10 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 1064LL); /*0x2c4509*/
      if ( v10 == FLAlertLayer_show ) /*0x2c451a*/
        return FLAlertLayer_show((__int64)v9); /*0x2c4523*/
      return v10((__int64)v9); /*0x2c451a*/
    case 0xFFFFFC15: /*0x2c4213*/
      if ( !*(_BYTE *)(sub_384880() + 216) ) /*0x2c428c*/
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 336LL))(a1, 0); /*0x2c43be*/
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 920LL))(a1, 0); /*0x2c43cc*/
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x2c43da*/
        v11 = sub_3D1B90(a1); /*0x2c43e3*/
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 1064LL))(v11); /*0x2c43f5*/
      }
      v12 = 0; /*0x2c4295*/
      *(_QWORD *)&v12 = sub_3C460(96); /*0x2c42b3*/
      v13 = 87; /*0x2c42b8*/
      v14 = 95; /*0x2c42c1*/
      strcpy((char *)v12, "You cannot edit <cy>Global Controls</c> while <cg>Custom Level Controls</c> are active."); /*0x2c42d1*/
      v8 = sub_3E4F0(v15, &v12); /*0x2c4339*/
      v9 = FLAlertLayer_create_0(0, (int)"Keybinds", v8, (__int64)"OK", 0, 1132068864, 0, 0, 1065353216); /*0x2c4385*/
      sub_3C310(&v12); /*0x2c438d*/
      v10 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 1064LL); /*0x2c4395*/
      return v10((__int64)v9); /*0x2c439f*/
    case 0xFFFFFC17: /*0x2c4213*/
      v4 = GJSongBrowser_create(); /*0x2c422b*/
      v5 = v4; /*0x2c4230*/
      v6 = a1 + 1072; /*0x2c4233*/
      if ( !a1 ) /*0x2c423f*/
        v6 = 0; /*0x2c423f*/
      *((_QWORD *)v4 + 74) = v6; /*0x2c4243*/
      v7 = cocos2d::CCDirector::sharedDirector(v6); /*0x2c424a*/
      (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *, __int64))(**(_QWORD **)(v7 + 272) + 456LL))( /*0x2c426a*/
        *(_QWORD *)(v7 + 272),
        v5,
        106);
      return (*(__int64 (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)v5 + 1080LL))(v5, 0); /*0x2c4275*/
  }
  return result; /*0x2c43a1*/
}

// [4/6] Address: 0x2c4530
// Method: GameSettingsLayer::dropDownLayerWillClose
// Hidden C++ exception states: #wind=3
void GameSettingsLayer_dropDownLayerWillClose()
{
  __int64 v0; // rcx
  void *v1; // [rsp+40h] [rbp+18h]

  v0 = qword_905FD0; /*0x2c4534*/
  if ( !qword_905FD0 ) /*0x2c453e*/
  {
    v1 = operator new(0x6E8u); /*0x2c454a*/
    qword_905FD0 = sub_2723A0(v1); /*0x2c4558*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2c4569*/
    v0 = qword_905FD0; /*0x2c456b*/
  }
  if ( !*(_QWORD *)(v0 + 560) && !*(_QWORD *)(v0 + 568) ) /*0x2c457c*/
    sub_2732D0(); /*0x2c458a*/
}

// [5/6] Address: 0x2c45a0
// Method: GameSettingsLayer::onClose
// Hidden C++ exception states: #wind=9
__int64 __fastcall GameSettingsLayer_onClose(__int64 a1)
{
  __int64 v2; // rbx
  cocos2d::CCString *v3; // rax
  int v4; // edi
  void *v5; // r8
  __int64 v6; // rbx
  cocos2d::CCString *v7; // rax
  int v8; // ebx
  void *v9; // r8
  __int64 v10; // rcx
  char GameVariable; // al
  __int64 v12; // rbx
  unsigned int v13; // edi
  __int64 v14; // rbx
  struct cocos2d::CCString *v15; // rax
  void *v16; // rcx
  __int64 v17; // rbx
  unsigned int v18; // edi
  __int64 v19; // rbx
  struct cocos2d::CCString *v20; // rax
  void *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  void *v25; // [rsp+30h] [rbp-50h]
  void *v26; // [rsp+30h] [rbp-50h]
  void *v27; // [rsp+30h] [rbp-50h]
  void *v28; // [rsp+30h] [rbp-50h]
  void *v29; // [rsp+30h] [rbp-50h]
  void *v30; // [rsp+30h] [rbp-50h]
  void *Block[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v32; // [rsp+48h] [rbp-38h]
  unsigned __int64 v33; // [rsp+50h] [rbp-30h]
  void *Src[2]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v35; // [rsp+68h] [rbp-18h]
  unsigned __int64 v36; // [rsp+70h] [rbp-10h]

  v2 = qword_905FD0; /*0x2c45d2*/
  if ( !qword_905FD0 ) /*0x2c45dc*/
  {
    v25 = operator new(0x6E8u); /*0x2c45e8*/
    qword_905FD0 = sub_2723A0(v25); /*0x2c45f5*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2c4606*/
    v2 = qword_905FD0; /*0x2c4608*/
  }
  *(_OWORD *)Block = 0; /*0x2c4612*/
  v32 = 3; /*0x2c4616*/
  v33 = 15; /*0x2c461e*/
  LODWORD(Block[0]) = 6256231; /*0x2c462c*/
  sub_43D80(Block, "0049", 4u); /*0x2c464f*/
  v3 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v2 + 432), Block); /*0x2c465f*/
  v4 = cocos2d::CCString::intValue(v3); /*0x2c466e*/
  if ( v33 > 0xF ) /*0x2c4678*/
  {
    v5 = Block[0]; /*0x2c467d*/
    if ( v33 + 1 >= 0x1000 ) /*0x2c468b*/
    {
      v5 = (void *)*((_QWORD *)Block[0] - 1); /*0x2c4691*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v5 - 8) > 0x1F ) /*0x2c46a0*/
        invoke_watson(0, 0, 0, 0, 0); /*0x2c46b3*/
    }
    j_j_free(v5); /*0x2c46bd*/
  }
  v32 = 0; /*0x2c46c4*/
  v33 = 15; /*0x2c46c8*/
  LOBYTE(Block[0]) = 0; /*0x2c46d0*/
  v6 = qword_905FD0; /*0x2c46d4*/
  if ( !qword_905FD0 ) /*0x2c46de*/
  {
    v26 = operator new(0x6E8u); /*0x2c46ea*/
    qword_905FD0 = sub_2723A0(v26); /*0x2c46f7*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2c4708*/
    v6 = qword_905FD0; /*0x2c470a*/
  }
  *(_OWORD *)Src = 0; /*0x2c4714*/
  v35 = 3; /*0x2c4718*/
  v36 = 15; /*0x2c4720*/
  LODWORD(Src[0]) = 6256231; /*0x2c472e*/
  sub_43D80(Src, "0050", 4u); /*0x2c4751*/
  v7 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v6 + 432), Src); /*0x2c4761*/
  v8 = cocos2d::CCString::intValue(v7); /*0x2c4770*/
  if ( v36 > 0xF ) /*0x2c477a*/
  {
    v9 = Src[0]; /*0x2c477f*/
    if ( v36 + 1 >= 0x1000 ) /*0x2c478d*/
    {
      v9 = (void *)*((_QWORD *)Src[0] - 1); /*0x2c4793*/
      if ( (unsigned __int64)((char *)Src[0] - (char *)v9 - 8) > 0x1F ) /*0x2c47a2*/
        invoke_watson(0, 0, 0, 0, 0); /*0x2c47b3*/
    }
    j_j_free(v9); /*0x2c47bd*/
  }
  v35 = 0; /*0x2c47c2*/
  v36 = 15; /*0x2c47c6*/
  LOBYTE(Src[0]) = 0; /*0x2c47ce*/
  v10 = qword_905FD0; /*0x2c47d2*/
  if ( !qword_905FD0 ) /*0x2c47dc*/
  {
    v27 = operator new(0x6E8u); /*0x2c47e8*/
    qword_905FD0 = sub_2723A0(v27); /*0x2c47f5*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2c4806*/
    v10 = qword_905FD0; /*0x2c4808*/
  }
  GameVariable = GameManager_getGameVariable(v10, "0191"); /*0x2c4816*/
  if ( *(_DWORD *)(a1 + 1156) != v4 || *(_DWORD *)(a1 + 1160) != v8 || GameVariable != *(_BYTE *)(a1 + 1184) ) /*0x2c4834*/
  {
    v12 = qword_905FD0; /*0x2c483a*/
    if ( !qword_905FD0 ) /*0x2c4844*/
    {
      v28 = operator new(0x6E8u); /*0x2c4850*/
      qword_905FD0 = sub_2723A0(v28); /*0x2c485d*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2c486e*/
      v12 = qword_905FD0; /*0x2c4870*/
    }
    v13 = *(_DWORD *)(a1 + 1156); /*0x2c4877*/
    *(_OWORD *)Src = 0; /*0x2c4881*/
    v35 = 3; /*0x2c4885*/
    v36 = 15; /*0x2c488d*/
    LODWORD(Src[0]) = 6256231; /*0x2c489b*/
    sub_43D80(Src, "0049", 4u); /*0x2c48be*/
    v14 = *(_QWORD *)(v12 + 432); /*0x2c48c3*/
    v15 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v13); /*0x2c48d3*/
    cocos2d::CCDictionary::setObject(v14, v15, Src); /*0x2c48e3*/
    if ( v36 > 0xF ) /*0x2c48f2*/
    {
      v16 = Src[0]; /*0x2c48f7*/
      if ( v36 + 1 >= 0x1000 ) /*0x2c4905*/
      {
        v16 = (void *)*((_QWORD *)Src[0] - 1); /*0x2c490b*/
        if ( (unsigned __int64)((char *)Src[0] - (char *)v16 - 8) > 0x1F ) /*0x2c491a*/
          invoke_watson(0, 0, 0, 0, 0); /*0x2c492b*/
      }
      j_j_free(v16); /*0x2c4932*/
    }
    v35 = 0; /*0x2c4937*/
    v36 = 15; /*0x2c493b*/
    LOBYTE(Src[0]) = 0; /*0x2c4943*/
    v17 = qword_905FD0; /*0x2c4947*/
    if ( !qword_905FD0 ) /*0x2c4951*/
    {
      v29 = operator new(0x6E8u); /*0x2c495d*/
      qword_905FD0 = sub_2723A0(v29); /*0x2c496a*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2c497b*/
      v17 = qword_905FD0; /*0x2c497d*/
    }
    v18 = *(_DWORD *)(a1 + 1160); /*0x2c4984*/
    *(_OWORD *)Block = 0; /*0x2c498e*/
    v32 = 3; /*0x2c4992*/
    v33 = 15; /*0x2c499a*/
    LODWORD(Block[0]) = 6256231; /*0x2c49a8*/
    sub_43D80(Block, "0050", 4u); /*0x2c49cb*/
    v19 = *(_QWORD *)(v17 + 432); /*0x2c49d0*/
    v20 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v18); /*0x2c49e0*/
    cocos2d::CCDictionary::setObject(v19, v20, Block); /*0x2c49f0*/
    if ( v33 > 0xF ) /*0x2c49ff*/
    {
      v21 = Block[0]; /*0x2c4a04*/
      if ( v33 + 1 >= 0x1000 ) /*0x2c4a12*/
      {
        v21 = (void *)*((_QWORD *)Block[0] - 1); /*0x2c4a18*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v21 - 8) > 0x1F ) /*0x2c4a27*/
          invoke_watson(0, 0, 0, 0, 0); /*0x2c4a38*/
      }
      j_j_free(v21); /*0x2c4a3f*/
    }
    v32 = 0; /*0x2c4a44*/
    v33 = 15; /*0x2c4a48*/
    LOBYTE(Block[0]) = 0; /*0x2c4a50*/
    v22 = qword_905FD0; /*0x2c4a54*/
    if ( !qword_905FD0 ) /*0x2c4a5e*/
    {
      v30 = operator new(0x6E8u); /*0x2c4a6a*/
      qword_905FD0 = sub_2723A0(v30); /*0x2c4a77*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2c4a88*/
      v22 = qword_905FD0; /*0x2c4a8a*/
    }
    v23 = *(_QWORD *)(v22 + 568); /*0x2c4a91*/
    if ( v23 ) /*0x2c4a9b*/
      *(_BYTE *)(*(_QWORD *)(v23 + 14968) + 1663LL) = 1; /*0x2c4aa4*/
  }
  return SetupTriggerPopup_onClose(a1); /*0x2c4ab6*/
}

// [6/6] Address: 0x2c4ae0
// Method: GameSettingsLayer::showTab
__int64 __fastcall GameSettingsLayer_showTab(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  TabbedPopupLayer_showTab(); /*0x2c4ae9*/
  v2 = 88LL * *(int *)(a1 + 1048); /*0x2c4af5*/
  dword_8F8478 = *(_DWORD *)(a1 + 1048); /*0x2c4af9*/
  result = *(_QWORD *)(a1 + 1000); /*0x2c4aff*/
  dword_905FC4 = *(_DWORD *)(v2 + result + 68); /*0x2c4b0a*/
  return result; /*0x2c4b10*/
}
