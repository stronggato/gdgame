#include <Geode/binding/AccountLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/12] Address: 0x91870
// Method: AccountLayer::~AccountLayer
// Hidden C++ exception states: #wind=1
char *__fastcall AccountLayer__dtor_AccountLayer(char *Block, char a2)
{
  char *v4; // rbx
  char *v5; // r14
  char *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx

  *(_QWORD *)Block = &AccountLayer::`vftable'; /*0x91894*/
  *((_QWORD *)Block + 40) = &AccountLayer::`vftable'; /*0x9189e*/
  *((_QWORD *)Block + 41) = &AccountLayer::`vftable'; /*0x918ac*/
  *((_QWORD *)Block + 42) = &AccountLayer::`vftable'; /*0x918ba*/
  *((_QWORD *)Block + 43) = &AccountLayer::`vftable'; /*0x918c8*/
  *((_QWORD *)Block + 44) = &AccountLayer::`vftable'; /*0x918d6*/
  *((_QWORD *)Block + 51) = &AccountLayer::`vftable'; /*0x918e4*/
  *((_QWORD *)Block + 54) = &AccountLayer::`vftable'; /*0x918f2*/
  v4 = Block + 608; /*0x918f9*/
  *((_QWORD *)Block + 76) = &AccountLayer::`vftable'; /*0x91907*/
  v5 = Block + 616; /*0x9190a*/
  *((_QWORD *)Block + 77) = &AccountLayer::`vftable'; /*0x91918*/
  v6 = Block + 624; /*0x9191b*/
  *((_QWORD *)Block + 78) = &AccountLayer::`vftable'; /*0x91929*/
  *((_QWORD *)Block + 79) = &AccountLayer::`vftable'; /*0x91933*/
  v7 = GJAccountManager_sharedState(Block); /*0x9193a*/
  if ( !Block ) /*0x91945*/
    v4 = 0; /*0x91945*/
  if ( *(char **)(v7 + 424) == v4 ) /*0x91950*/
    *(_QWORD *)(GJAccountManager_sharedState(v8) + 424) = 0; /*0x91957*/
  v9 = GJAccountManager_sharedState(v8); /*0x9195e*/
  if ( !Block ) /*0x91966*/
    v5 = 0; /*0x91966*/
  if ( *(char **)(v9 + 432) == v5 ) /*0x91971*/
    *(_QWORD *)(GJAccountManager_sharedState(v10) + 432) = 0; /*0x91978*/
  v11 = GJAccountManager_sharedState(v10); /*0x9197f*/
  if ( !Block ) /*0x91987*/
    v6 = 0; /*0x91987*/
  if ( *(char **)(v11 + 440) == v6 ) /*0x91992*/
    *(_QWORD *)(GJAccountManager_sharedState(v12) + 440) = 0; /*0x91999*/
  GJDropDownLayer__dtor_GJDropDownLayer((struct cocos2d::CCObject *)Block); /*0x919a3*/
  if ( (a2 & 1) != 0 ) /*0x919ad*/
    j_j_free(Block); /*0x919b7*/
  return Block; /*0x919bf*/
}

// [2/12] Address: 0x91ae0
// Method: AccountLayer::create
// Hidden C++ exception states: #wind=1
_QWORD *AccountLayer_create()
{
  _QWORD *v0; // rbx

  v0 = operator new(0x2D0u); /*0x91af4*/
  GJDropDownLayer_GJDropDownLayer((__int64)v0); /*0x91aff*/
  *v0 = &AccountLayer::`vftable'; /*0x91b0b*/
  v0[40] = &AccountLayer::`vftable'; /*0x91b15*/
  v0[41] = &AccountLayer::`vftable'; /*0x91b23*/
  v0[42] = &AccountLayer::`vftable'; /*0x91b31*/
  v0[43] = &AccountLayer::`vftable'; /*0x91b3f*/
  v0[44] = &AccountLayer::`vftable'; /*0x91b4d*/
  v0[51] = &AccountLayer::`vftable'; /*0x91b5b*/
  v0[54] = &AccountLayer::`vftable'; /*0x91b69*/
  v0[76] = &AccountLayer::`vftable'; /*0x91b77*/
  v0[77] = &AccountLayer::`vftable'; /*0x91b85*/
  v0[78] = &AccountLayer::`vftable'; /*0x91b93*/
  v0[79] = &AccountLayer::`vftable'; /*0x91ba1*/
  v0[80] = 0; /*0x91baa*/
  v0[81] = 0; /*0x91bb1*/
  v0[82] = 0; /*0x91bb8*/
  v0[83] = 0; /*0x91bbf*/
  v0[84] = 0; /*0x91bc6*/
  v0[85] = 0; /*0x91bcd*/
  v0[86] = 0; /*0x91bd4*/
  *((_DWORD *)v0 + 178) = 0; /*0x91bdb*/
  *((_BYTE *)v0 + 716) = 0; /*0x91be1*/
  if ( GJDropDownLayer_init(v0, (int)"Account", 220.0, 0) ) /*0x91bfd*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v0); /*0x91c09*/
    return v0; /*0x91c0f*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v0 + 8LL))(v0, 1); /*0x91c2c*/
    return 0; /*0x91c2f*/
  }
}

// [4/12] Address: 0x923b0
// Method: AccountLayer::onLogin
__int64 __fastcall AccountLayer_onLogin(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rax
  _BYTE v4[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = GJAccountManager_sharedState(a1); /*0x923b4*/
  sub_3E4F0(v4, v1 + 328); /*0x923c5*/
  v2 = AccountLoginLayer_create((__int64)v4); /*0x923cf*/
  return (*(__int64 (__fastcall **)(_QWORD *))(*v2 + 1064LL))(v2); /*0x923e3*/
}

// [5/12] Address: 0x923f0
// Method: AccountLayer::onRegister
// Hidden C++ exception states: #wind=1
__int64 AccountLayer_onRegister()
{
  _QWORD *v0; // rbx
  __int64 (__fastcall *v1)(__int64); // rdx

  v0 = operator new(0x310u); /*0x92404*/
  FLAlertLayer_FLAlertLayer((__int64)v0); /*0x9240f*/
  *v0 = &AccountRegisterLayer::`vftable'; /*0x9241b*/
  v0[40] = &AccountRegisterLayer::`vftable'; /*0x92425*/
  v0[41] = &AccountRegisterLayer::`vftable'; /*0x92433*/
  v0[42] = &AccountRegisterLayer::`vftable'; /*0x92441*/
  v0[43] = &AccountRegisterLayer::`vftable'; /*0x9244f*/
  v0[44] = &AccountRegisterLayer::`vftable'; /*0x9245d*/
  v0[51] = &AccountRegisterLayer::`vftable'; /*0x9246b*/
  v0[54] = &AccountRegisterLayer::`vftable'; /*0x92479*/
  v0[68] = &AccountRegisterLayer::`vftable'; /*0x92487*/
  v0[83] = &AccountRegisterLayer::`vftable'; /*0x92495*/
  v0[84] = &AccountRegisterLayer::`vftable'; /*0x924a3*/
  v0[85] = 0; /*0x924ac*/
  v0[86] = 0; /*0x924b3*/
  v0[87] = 0; /*0x924ba*/
  v0[88] = 0; /*0x924c1*/
  v0[90] = 0; /*0x924c8*/
  v0[91] = 0; /*0x924cf*/
  v0[92] = 0; /*0x924d6*/
  v0[93] = 0; /*0x924dd*/
  v0[94] = 0; /*0x924e4*/
  v0[96] = 0; /*0x924eb*/
  *((_BYTE *)v0 + 776) = 0; /*0x924f2*/
  if ( (unsigned __int8)PlayerObject_togglePlayerScale(v0) ) /*0x9250f*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v0); /*0x9251f*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v0 + 8LL))(v0, 1); /*0x9252f*/
    v0 = 0; /*0x92532*/
  }
  v1 = *(__int64 (__fastcall **)(__int64))(*v0 + 1064LL); /*0x92538*/
  if ( v1 == FLAlertLayer_show ) /*0x9254c*/
    return FLAlertLayer_show((__int64)v0); /*0x92558*/
  else
    return v1((__int64)v0); /*0x92567*/
}

// [6/12] Address: 0x92d00
// Method: AccountLayer::accountStatusChanged
__int64 __fastcall AccountLayer_accountStatusChanged(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1; /*0x92d07*/
  return MoreSearchLayer_onClose(a1 - 608, a2);
}

// [7/12] Address: 0x930d0
// Method: AccountLayer::backupAccountFinished
// Hidden C++ exception states: #wind=1
__int64 __fastcall AccountLayer_backupAccountFinished(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  cocos2d::CCObject *v5; // rbx
  __int128 v7; // [rsp+50h] [rbp+17h] BYREF
  __int64 v8; // [rsp+60h] [rbp+27h]
  __int64 v9; // [rsp+68h] [rbp+2Fh]
  _BYTE v10[32]; // [rsp+70h] [rbp+37h] BYREF
  __int128 *v11; // [rsp+A0h] [rbp+67h] BYREF

  LOBYTE(a2) = 1; /*0x930f1*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 - 56) + 1040LL))(*(_QWORD *)(a1 - 56), a2); /*0x930f3*/
  LOBYTE(v3) = 1; /*0x93100*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 - 616) + 992LL))(a1 - 616, v3); /*0x93109*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 88) + 336LL))(*(_QWORD *)(a1 + 88), 0); /*0x93118*/
  v7 = 0; /*0x93121*/
  v8 = 0; /*0x93127*/
  v9 = 0; /*0x9312b*/
  *(_QWORD *)&v7 = sub_3C460(32); /*0x93139*/
  v8 = 17; /*0x9313d*/
  v9 = 31; /*0x93145*/
  strcpy((char *)v7, "Backup successful"); /*0x93154*/
  TextArea_setString(*(_QWORD *)(a1 + 32), &v7); /*0x9316c*/
  LOWORD(v11) = -256; /*0x93178*/
  BYTE2(v11) = 0; /*0x93183*/
  TextArea_colorAllCharactersTo(*(_QWORD *)(a1 + 32), &v11); /*0x9318e*/
  v7 = 0; /*0x93196*/
  v8 = 0; /*0x9319a*/
  v9 = 0; /*0x9319e*/
  *(_QWORD *)&v7 = sub_3C460(64); /*0x931ac*/
  v8 = 50; /*0x931b0*/
  v9 = 63; /*0x931b8*/
  strcpy((char *)v7, "Your <cg>save data</c> has been <cy>backed up</c>."); /*0x931c7*/
  v11 = &v7; /*0x931f2*/
  v4 = sub_3E4F0(v10, &v7); /*0x931fe*/
  v5 = FLAlertLayer_create_0(0, (int)"Save Data", v4, (__int64)"OK", 0, 1133903872, 0, 0, 1065353216); /*0x93249*/
  sub_3C310(&v7); /*0x93250*/
  return (*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v5 + 1064LL))(v5); /*0x93264*/
}

// [8/12] Address: 0x93280
// Method: AccountLayer::backupAccountFailed
// Hidden C++ exception states: #wind=1
void __fastcall AccountLayer_backupAccountFailed(__int64 a1, __int64 a2, int a3)
{
  int v4; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  float v8; // xmm7_4
  __int64 v9; // rcx
  float v10; // xmm1_4
  __int64 v11; // rbx
  cocos2d::CCString *v12; // rax
  char *CString; // rax
  size_t v14; // r8
  char *v15; // rax
  void **v16; // rdx
  cocos2d::CCString *v17; // rax
  const char *v18; // rax
  void **v19; // r8
  cocos2d::CCString *v20; // rax
  const char *v21; // rax
  void *v22; // rcx
  __int16 v23; // [rsp+30h] [rbp-39h] BYREF
  char v24; // [rsp+32h] [rbp-37h]
  __int128 v25; // [rsp+40h] [rbp-29h] BYREF
  __int64 v26; // [rsp+50h] [rbp-19h]
  __int64 v27; // [rsp+58h] [rbp-11h]
  void *Block[2]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v29; // [rsp+78h] [rbp+Fh]
  unsigned __int64 v30; // [rsp+80h] [rbp+17h]

  v4 = a2; /*0x932b1*/
  LOBYTE(a2) = 1; /*0x932bd*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 - 56) + 1040LL))(*(_QWORD *)(a1 - 56), a2); /*0x932bf*/
  LOBYTE(v6) = 1; /*0x932cc*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 - 616) + 992LL))(a1 - 616, v6); /*0x932d5*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 88) + 336LL))(*(_QWORD *)(a1 + 88), 0); /*0x932e4*/
  v8 = (float)*(int *)(GJAccountManager_sharedState(v7) + 456) * 0.00000095367432; /*0x932fa*/
  v10 = (float)*(int *)(GJAccountManager_sharedState(v9) + 460) * 0.00000095367432; /*0x93312*/
  *(_OWORD *)Block = 0; /*0x9331d*/
  v29 = 0; /*0x93324*/
  v30 = 15; /*0x93328*/
  LOBYTE(Block[0]) = 0; /*0x93330*/
  v11 = -1; /*0x9333b*/
  if ( (float)(v10 + v8) <= 32.0 )
  {
    v15 = (char *)sub_3C460(32); /*0x933a1*/
    v29 = 27; /*0x933a6*/
    v30 = 31; /*0x933ae*/
    strcpy(v15, "Save size is within limits."); /*0x933bd*/
    Block[0] = v15; /*0x933e6*/
  }
  else
  {
    v12 = cocos2d::CCString::createWithFormat(
            "Size: %.2f/32MB. (Profile: %.2f, Levels: %.2f)",
            (float)(v10 + v8),
            v8,
            v10);
    CString = (char *)cocos2d::CCString::getCString(v12); /*0x93373*/
    v14 = -1; /*0x93379*/
    do /*0x93383*/
      ++v14; /*0x93380*/
    while ( CString[v14] ); /*0x93383*/
    sub_3F5A0(Block, CString, v14); /*0x93391*/
    v15 = (char *)Block[0]; /*0x93396*/
  }
  if ( v4 == -3 )
  {
    v19 = Block; /*0x9349c*/
    if ( v30 > 0xF ) /*0x934a5*/
      v19 = (void **)v15; /*0x934a5*/
    v20 = cocos2d::CCString::createWithFormat("Backup failed. Error code: %i\n%s", a3, (const char *)v19);
    v21 = cocos2d::CCString::getCString(v20); /*0x934bc*/
    v25 = 0; /*0x934c5*/
    v26 = 0; /*0x934c9*/
    v27 = 0; /*0x934cd*/
    do /*0x934d4*/
      ++v11; /*0x934d1*/
    while ( v21[v11] ); /*0x934d4*/
  }
  else
  {
    if ( v4 == -2 ) /*0x933f6*/
    {
      v25 = 0; /*0x93441*/
      *(_QWORD *)&v25 = sub_3C460(64); /*0x93457*/
      v26 = 50; /*0x9345b*/
      v27 = 63; /*0x93463*/
      strcpy((char *)v25, "Login failed. Please login to verify your account."); /*0x93472*/
      goto LABEL_19; /*0x9349a*/
    }
    v16 = Block; /*0x933f8*/
    if ( v30 > 0xF ) /*0x93401*/
      v16 = (void **)v15; /*0x93401*/
    v17 = cocos2d::CCString::createWithFormat("Backup failed. Please try again later.\n%s", (const char *)v16); /*0x9340c*/
    v18 = cocos2d::CCString::getCString(v17); /*0x93415*/
    v25 = 0; /*0x9341e*/
    v26 = 0; /*0x93422*/
    v27 = 0; /*0x93426*/
    do /*0x93433*/
      ++v11; /*0x93430*/
    while ( v18[v11] ); /*0x93433*/
  }
  sub_3C230(&v25); /*0x934e4*/
LABEL_19:
  TextArea_setString(*(_QWORD *)(a1 + 32), &v25); /*0x934e9*/
  v23 = 19455; /*0x934f6*/
  v24 = 0; /*0x934fc*/
  TextArea_colorAllCharactersTo(*(_QWORD *)(a1 + 32), &v23); /*0x93508*/
  if ( v30 > 0xF ) /*0x93516*/
  {
    v22 = Block[0]; /*0x9351b*/
    if ( v30 + 1 >= 0x1000 ) /*0x93529*/
    {
      v22 = (void *)*((_QWORD *)Block[0] - 1); /*0x9352f*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v22 - 8) > 0x1F ) /*0x9353e*/
        invoke_watson(0, 0, 0, 0, 0); /*0x9354f*/
    }
    j_j_free(v22); /*0x93556*/
  }
}

// [9/12] Address: 0x93590
// Method: AccountLayer::syncAccountFinished
// Hidden C++ exception states: #wind=1
__int64 __fastcall AccountLayer_syncAccountFinished(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  cocos2d::CCObject *v5; // rbx
  __int128 v7; // [rsp+50h] [rbp+17h] BYREF
  __int64 v8; // [rsp+60h] [rbp+27h]
  __int64 v9; // [rsp+68h] [rbp+2Fh]
  _BYTE v10[32]; // [rsp+70h] [rbp+37h] BYREF
  __int128 *v11; // [rsp+A0h] [rbp+67h] BYREF

  LOBYTE(a2) = 1; /*0x935b1*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 - 64) + 1040LL))(*(_QWORD *)(a1 - 64), a2); /*0x935b3*/
  LOBYTE(v3) = 1; /*0x935c0*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 - 624) + 992LL))(a1 - 624, v3); /*0x935c9*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 80) + 336LL))(*(_QWORD *)(a1 + 80), 0); /*0x935d8*/
  v8 = 15; /*0x935de*/
  v9 = 15; /*0x935e6*/
  strcpy((char *)&v7, "Sync successful"); /*0x935f6*/
  TextArea_setString(*(_QWORD *)(a1 + 24), &v7); /*0x93625*/
  LOWORD(v11) = -256; /*0x93631*/
  BYTE2(v11) = 0; /*0x9363c*/
  TextArea_colorAllCharactersTo(*(_QWORD *)(a1 + 24), &v11); /*0x93647*/
  v7 = 0; /*0x9364f*/
  v8 = 0; /*0x93655*/
  v9 = 0; /*0x93659*/
  *(_QWORD *)&v7 = sub_3C460(48); /*0x9366a*/
  v8 = 47; /*0x9366e*/
  v9 = 47; /*0x93676*/
  strcpy((char *)v7, "<cg>Saved data</c> has been <cy>downloaded</c>."); /*0x93685*/
  v11 = &v7; /*0x936c5*/
  v4 = sub_3E4F0(v10, &v7); /*0x936d1*/
  v5 = FLAlertLayer_create_0(0, (int)"Load Data", v4, (__int64)"OK", 0, 1133903872, 0, 0, 1065353216); /*0x9371c*/
  sub_3C310(&v7); /*0x93723*/
  return (*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v5 + 1064LL))(v5); /*0x93737*/
}

// [10/12] Address: 0x93750
// Method: AccountLayer::syncAccountFailed
__int64 __fastcall AccountLayer_syncAccountFailed(__int64 a1, __int64 a2, int a3)
{
  int v4; // esi
  __int64 v6; // rdx
  cocos2d::CCString *v7; // rax
  const char *CString; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  __int128 v12; // [rsp+20h] [rbp-30h] BYREF
  __int64 v13; // [rsp+30h] [rbp-20h]
  __int64 v14; // [rsp+38h] [rbp-18h]
  __int16 v15; // [rsp+70h] [rbp+20h] BYREF
  char v16; // [rsp+72h] [rbp+22h]

  v4 = a2; /*0x93768*/
  LOBYTE(a2) = 1; /*0x9376e*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 - 64) + 1040LL))(*(_QWORD *)(a1 - 64), a2); /*0x93776*/
  LOBYTE(v6) = 1; /*0x9378a*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 - 624) + 992LL))(a1 - 624, v6); /*0x9378c*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 80) + 336LL))(*(_QWORD *)(a1 + 80), 0); /*0x9379b*/
  if ( v4 == -3 )
  {
    v7 = cocos2d::CCString::createWithFormat("Sync failed. Error code: %i", a3);
    CString = cocos2d::CCString::getCString(v7); /*0x93867*/
    v12 = 0; /*0x93872*/
    v13 = 0; /*0x93876*/
    v9 = -1; /*0x9387a*/
    v14 = 0; /*0x93881*/
    do /*0x93888*/
      ++v9; /*0x93885*/
    while ( CString[v9] ); /*0x93888*/
    sub_3C230(&v12); /*0x93895*/
  }
  else
  {
    v13 = 0; /*0x937af*/
    v14 = 0; /*0x937b3*/
    v12 = 0; /*0x937b7*/
    if ( v4 == -2 ) /*0x937be*/
    {
      *(_QWORD *)&v12 = sub_3C460(64); /*0x93816*/
      v13 = 50; /*0x9381a*/
      v14 = 63; /*0x93822*/
      strcpy((char *)v12, "Login failed. Please login to verify your account."); /*0x9382a*/
    }
    else
    {
      *(_QWORD *)&v12 = sub_3C460(48); /*0x937d1*/
      v13 = 36; /*0x937d5*/
      v14 = 47; /*0x937dd*/
      strcpy((char *)v12, "Sync failed. Please try again later."); /*0x937e5*/
    }
  }
  TextArea_setString(*(_QWORD *)(a1 + 24), &v12); /*0x938a2*/
  v10 = *(_QWORD *)(a1 + 24); /*0x938a7*/
  v15 = 19455; /*0x938af*/
  v16 = 0; /*0x938b5*/
  return TextArea_colorAllCharactersTo(v10, &v15); /*0x938be*/
}

// [11/12] Address: 0x938e0
// Method: AccountLayer::FLAlert_Clicked
__int64 __fastcall AccountLayer_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD **v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD **v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx

  result = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) - 1; /*0x938fa*/
  if ( !(_DWORD)result ) /*0x938fd*/
  {
    if ( !a3 ) /*0x9396e*/
      return result; /*0x9396e*/
    v8 = (_QWORD **)(a1 - 632); /*0x93970*/
    MoreSearchLayer_onClose(a1 - 632, 0); /*0x9397c*/
    v13 = GJAccountManager_sharedState(v12); /*0x93981*/
    if ( !(unsigned __int8)sub_303530(v13) ) /*0x93990*/
    {
      v11 = v8 + 77; /*0x939cf*/
      return ((__int64 (__fastcall *)(_QWORD **, __int64, _QWORD))(*v11)[1])(v11, 0xFFFFFFFFLL, 0); /*0x939cf*/
    }
LABEL_11:
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v8[70] + 1040LL))(v8[70], 0); /*0x93992*/
    ((void (__fastcall *)(_QWORD **, _QWORD))(*v8)[124])(v8, 0); /*0x939ac*/
    LOBYTE(v14) = 1; /*0x939b9*/
    return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v8[88] + 336LL))(v8[88], v14); /*0x939c8*/
  }
  result = (unsigned int)(result - 1); /*0x938ff*/
  if ( !(_DWORD)result ) /*0x93902*/
  {
    if ( !a3 ) /*0x9393b*/
      return result; /*0x9393b*/
    v8 = (_QWORD **)(a1 - 632); /*0x93941*/
    MoreSearchLayer_onClose(a1 - 632, 0); /*0x9394d*/
    v10 = GJAccountManager_sharedState(v9); /*0x93952*/
    if ( !(unsigned __int8)sub_3045B0(v10) ) /*0x9395a*/
    {
      v11 = v8 + 78; /*0x93963*/
      return ((__int64 (__fastcall *)(_QWORD **, __int64, _QWORD))(*v11)[1])(v11, 0xFFFFFFFFLL, 0); /*0x939e1*/
    }
    goto LABEL_11; /*0x93961*/
  }
  if ( (_DWORD)result == 3 ) /*0x93907*/
  {
    if ( a3 ) /*0x9390f*/
    {
      v7 = cocos2d::CCApplication::sharedApplication(v6); /*0x93915*/
      return (*(__int64 (__fastcall **)(__int64, const char *))(*(_QWORD *)v7 + 96LL))( /*0x93936*/
               v7,
               "https://www.boomlings.com/database/accounts/accountManagement.php");
    }
  }
  return result; /*0x9392c*/
}

// [12/12] Address: 0x939f0
// Method: AccountLayer::layerHidden
// Hidden C++ exception states: #wind=1
__int64 __fastcall AccountLayer_layerHidden(_BYTE *a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  struct cocos2d::CCAction *(__fastcall *v4)(cocos2d::CCNode *, char); // r8
  __int64 result; // rax
  __int64 v6; // rdx

  if ( *((_DWORD *)a1 + 178) == 1 ) /*0x93a04*/
  {
    v2 = operator new(0x298u); /*0x93a14*/
    GJDropDownLayer_GJDropDownLayer((__int64)v2); /*0x93a1f*/
    *v2 = &AccountHelpLayer::`vftable'; /*0x93a2b*/
    v2[40] = &AccountHelpLayer::`vftable'; /*0x93a35*/
    v2[41] = &AccountHelpLayer::`vftable'; /*0x93a43*/
    v2[42] = &AccountHelpLayer::`vftable'; /*0x93a51*/
    v2[43] = &AccountHelpLayer::`vftable'; /*0x93a5f*/
    v2[44] = &AccountHelpLayer::`vftable'; /*0x93a6d*/
    v2[51] = &AccountHelpLayer::`vftable'; /*0x93a7b*/
    v2[54] = &AccountHelpLayer::`vftable'; /*0x93a89*/
    v2[76] = &AccountHelpLayer::`vftable'; /*0x93a97*/
    v2[77] = &AccountHelpLayer::`vftable'; /*0x93aa5*/
    *((_BYTE *)v2 + 656) = 0; /*0x93aac*/
    if ( GJDropDownLayer_init(v2, (int)"Account Help", 220.0, 0) ) /*0x93ac8*/
    {
      cocos2d::CCObject::autorelease((cocos2d::CCObject *)v2); /*0x93ad4*/
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*v2 + 8LL))(v2, 1); /*0x93ae4*/
      v2 = 0; /*0x93ae7*/
    }
    v3 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 504LL))(a1); /*0x93aef*/
    (*(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)v3 + 456LL))(v3, v2, 100); /*0x93b0b*/
    v4 = *(struct cocos2d::CCAction *(__fastcall **)(cocos2d::CCNode *, char))(*v2 + 1080LL); /*0x93b11*/
    if ( v4 == GJDropDownLayer_showLayer ) /*0x93b27*/
      GJDropDownLayer_showLayer((cocos2d::CCNode *)v2, 0); /*0x93b29*/
    else
      v4((cocos2d::CCNode *)v2, 0); /*0x93b30*/
  }
  result = (*(__int64 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 336LL))(a1, 0); /*0x93b3b*/
  if ( a1[584] ) /*0x93b41*/
  {
    LOBYTE(v6) = 1; /*0x93b4d*/
    return (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 520LL))(a1, v6); /*0x93b52*/
  }
  return result; /*0x93b58*/
}
