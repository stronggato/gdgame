#include <Geode/binding/GJRateLevelLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/12] Address: 0x416270
// Method: GJRateLevelLayer::onCustomButton
// Hidden C++ exception states: #wind=3
__int64 __fastcall GJRateLevelLayer_onCustomButton(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // ebx
  __int64 v5; // rax
  cocos2d::CCObject *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int128 v10; // [rsp+50h] [rbp-48h] BYREF
  __int64 v11; // [rsp+60h] [rbp-38h]
  __int64 v12; // [rsp+68h] [rbp-30h]
  _BYTE v13[40]; // [rsp+70h] [rbp-28h] BYREF
  void *v14; // [rsp+A8h] [rbp+10h]
  void *v15; // [rsp+A8h] [rbp+10h]

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x416286*/
  if ( (_DWORD)result == -4 ) /*0x41628c*/
  {
    result = (unsigned int)(int)(*(float (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 1168LL))(a1, 0xFFFFFFFFLL); /*0x4163cf*/
    if ( (int)result > 0 && *(int *)(a1 + 1096) > 0 ) /*0x4163e2*/
    {
      v7 = *(_QWORD *)&qword_905FB0; /*0x4163e8*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x4163f2*/
      {
        v14 = operator new(0x690u); /*0x4163fe*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v14); /*0x41640f*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x41641c*/
        v7 = *(_QWORD *)&qword_905FB0; /*0x41641f*/
      }
      if ( !v7 ) /*0x416430*/
      {
        v15 = operator new(0x690u); /*0x41643c*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v15); /*0x41644d*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x41645e*/
        v7 = *(_QWORD *)&qword_905FB0; /*0x416460*/
      }
      *(_QWORD *)(v7 + 1488) = a1 + 1008; /*0x416467*/
      v8 = *(_QWORD *)(a1 + 1080); /*0x41646e*/
      if ( v8 ) /*0x41647a*/
        *(_QWORD *)(v8 + 664) = 0; /*0x41647c*/
      v10 = 0; /*0x416486*/
      *(_QWORD *)&v10 = sub_3C460(32); /*0x41649f*/
      v11 = 16; /*0x4164a4*/
      v12 = 31; /*0x4164ad*/
      strcpy((char *)v10, "Updating rank..."); /*0x4164bd*/
      v9 = sub_39D2A0(a1 + 1000, &v10); /*0x4164d0*/
      *(_QWORD *)(a1 + 1080) = v9; /*0x4164d5*/
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 1064LL))(v9); /*0x4164e9*/
    }
  }
  else if ( (_DWORD)result == -2 ) /*0x416295*/
  {
    v4 = a1 + 1024; /*0x41629b*/
    if ( !a1 ) /*0x4162a7*/
      v4 = 0; /*0x4162a7*/
    v10 = 0; /*0x4162ae*/
    *(_QWORD *)&v10 = sub_3C460(48); /*0x4162c7*/
    v11 = 33; /*0x4162cc*/
    v12 = 47; /*0x4162d5*/
    strcpy((char *)v10, "Do you want to unrate this level?"); /*0x4162e5*/
    v5 = sub_3E4F0(v13, &v10); /*0x416318*/
    v6 = FLAlertLayer_create_0( /*0x41636c*/
           v4,
           (int)"Unrate Level",
           v5,
           (__int64)"Cancel",
           (__int64)"Unrate",
           1136525312,
           0,
           0,
           1065353216);
    sub_3C310(&v10); /*0x416374*/
    sub_41FC0(*((_QWORD *)v6 + 77), "GJ_button_06.png"); /*0x416387*/
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v6 + 64LL))(v6, 4294967293LL); /*0x41639b*/
    return (*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v6 + 1064LL))(v6); /*0x4163ab*/
  }
  return result; /*0x4163ad*/
}

// [3/12] Address: 0x416500
// Method: GJRateLevelLayer::FLAlert_Clicked
// Hidden C++ exception states: #wind=2
void __fastcall GJRateLevelLayer_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+38h] [rbp-10h]
  void *v12; // [rsp+68h] [rbp+20h]
  void *v13; // [rsp+68h] [rbp+20h]

  if ( a3 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == -3 ) /*0x41652c*/
  {
    v4 = *(_QWORD *)&qword_905FB0; /*0x416532*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x41653c*/
    {
      v12 = operator new(0x690u); /*0x416548*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v12); /*0x416556*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x416567*/
      v4 = *(_QWORD *)&qword_905FB0; /*0x416569*/
    }
    v5 = a1 - 16; /*0x416577*/
    if ( a1 == 1024 ) /*0x416580*/
      v5 = 0; /*0x416580*/
    if ( !v4 ) /*0x416587*/
    {
      v13 = operator new(0x690u); /*0x416593*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v13); /*0x4165a1*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x4165b2*/
      v4 = *(_QWORD *)&qword_905FB0; /*0x4165b4*/
    }
    *(_QWORD *)(v4 + 1488) = v5; /*0x4165bb*/
    v6 = *(_QWORD *)(a1 + 56); /*0x4165c2*/
    if ( v6 ) /*0x4165c9*/
      *(_QWORD *)(v6 + 664) = 0; /*0x4165cb*/
    v9 = 0; /*0x4165d5*/
    *(_QWORD *)&v9 = sub_3C460(32); /*0x4165ee*/
    v10 = 17; /*0x4165f3*/
    v11 = 31; /*0x4165fc*/
    strcpy((char *)v9, "Unrating level..."); /*0x41660c*/
    v7 = a1 - 24; /*0x41661d*/
    if ( a1 == 1024 ) /*0x416624*/
      v7 = 0; /*0x416624*/
    v8 = sub_39D2A0(v7, &v9); /*0x41662d*/
    *(_QWORD *)(a1 + 56) = v8; /*0x416632*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 1064LL))(v8); /*0x416643*/
  }
}

// [4/12] Address: 0x416660
// Method: GJRateLevelLayer::onToggleCoins
__int64 __fastcall GJRateLevelLayer_onToggleCoins(__int64 a1)
{
  char v1; // dl
  __int16 *v2; // rdx
  _BYTE v4[3]; // [rsp+30h] [rbp+8h] BYREF
  __int16 v5; // [rsp+40h] [rbp+18h] BYREF
  char v6; // [rsp+42h] [rbp+1Ah]

  v1 = *(_BYTE *)(a1 + 1068); /*0x416664*/
  *(_BYTE *)(a1 + 1068) = v1 == 0; /*0x416670*/
  if ( v1 ) /*0x416678*/
  {
    memset(v4, 50, sizeof(v4)); /*0x416698*/
    v2 = (__int16 *)v4; /*0x41669f*/
  }
  else
  {
    v2 = &v5; /*0x416681*/
    v5 = -1; /*0x416686*/
    v6 = -1; /*0x416692*/
  }
  return (**(__int64 (__fastcall ***)(__int64, __int16 *))(*(_QWORD *)(a1 + 1072) + 320LL))( /*0x4166bc*/
           *(_QWORD *)(a1 + 1072) + 320LL,
           v2);
}

// [5/12] Address: 0x4166d0
// Method: GJRateLevelLayer::onFeature
__int64 __fastcall GJRateLevelLayer_onFeature(__int64 a1)
{
  int v1; // r8d
  __int64 v2; // rdx
  __int64 v4; // r8

  v1 = *(_DWORD *)(a1 + 1096); /*0x4166d6*/
  v2 = 0; /*0x4166dd*/
  if ( v1 < 4 ) /*0x4166ea*/
    v2 = (unsigned int)(v1 + 1); /*0x4166ea*/
  *(_DWORD *)(a1 + 1096) = v2; /*0x4166ed*/
  GauntletSelectLayer_playUnlockAnimation(*(_QWORD *)(a1 + 1088), v2); /*0x4166fa*/
  LOBYTE(v4) = *(_DWORD *)(a1 + 1096) != 0; /*0x416711*/
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 1088LL))(a1, 1, v4);
}

// [7/12] Address: 0x417300
// Method: GJRateLevelLayer::createStatPillar
// Hidden C++ exception states: #wind=1
double __fastcall GJRateLevelLayer_createStatPillar(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v11; // r14
  int v12; // r12d
  float v13; // xmm7_4
  __int64 v14; // r14
  struct cocos2d::CCSprite *v15; // rsi
  struct cocos2d::CCSprite *v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rbx
  void (__fastcall *v20)(struct cocos2d::CCSprite *); // rbx
  float v21; // xmm6_4
  float v22; // xmm0_4
  __int64 v23; // rax
  const char *v24; // rcx
  struct cocos2d::CCLabelBMFont *v25; // rdi
  __int64 v26; // rdx
  void (__fastcall *v27)(char *, __int64); // rax
  __int64 v28; // rbx
  __int64 v29; // rax
  float v31[2]; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v32; // [rsp+28h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+30h] [rbp-C8h]
  __int64 v34; // [rsp+38h] [rbp-C0h]
  _BYTE v35[8]; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v36[8]; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+50h] [rbp-A8h]

  v32 = a6; /*0x417361*/
  v33 = a7; /*0x41736e*/
  v11 = a8; /*0x417373*/
  v34 = a8; /*0x41737b*/
  v37 = a8; /*0x417380*/
  if ( a4 > 0 ) /*0x417388*/
  {
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v31); /*0x417393*/
    v12 = 0; /*0x417399*/
    v13 = (float)a3; /*0x4173a9*/
    v14 = v32; /*0x4173c7*/
    do /*0x417572*/
    {
      v15 = cocos2d::CCSprite::createWithSpriteFrameName("whiteSquare60_001.png"); /*0x4173dd*/
      v16 = cocos2d::CCSprite::createWithSpriteFrameName("whiteSquare60_001.png"); /*0x4173ed*/
      (*(void (__fastcall **)(struct cocos2d::CCSprite *, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)v15 + 456LL))( /*0x417406*/
        v15,
        v16,
        1);
      v17 = *(_QWORD *)v16; /*0x417409*/
      cocos2d::CCNode::convertToNodeSpace(v15, v36, &unk_904F38); /*0x41741b*/
      (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v17 + 184))(v16, v18); /*0x417427*/
      (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))( /*0x417440*/
        *(_QWORD *)(a1 + 584),
        v15,
        3);
      (**((void (__fastcall ***)(__int64, __int64))v15 + 40))((__int64)v15 + 320, v14); /*0x417453*/
      (**((void (__fastcall ***)(__int64, __int64))v16 + 40))((__int64)v16 + 320, a5); /*0x417462*/
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v15 + 320LL))(v15); /*0x41746a*/
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v15 + 120LL))(v15); /*0x41747e*/
      v19 = *(_QWORD *)v15; /*0x417481*/
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v15 + 320LL))(v15); /*0x417487*/
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(v19 + 136))(v15); /*0x417498*/
      v20 = *(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v15 + 144LL); /*0x4174a8*/
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v15 + 128LL))(v15); /*0x4174b2*/
      v20(v15); /*0x4174ba*/
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v16 + 120LL))(v16); /*0x4174ca*/
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v16 + 136LL))(v16); /*0x4174db*/
      v21 = *(float *)((*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v15 + 320LL))(v15) + 4); /*0x4174ed*/
      v22 = (float)((*(float (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v15 + 144LL))(v15) * v21) /*0x417513*/
          * 0.25
          * 0.5;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v35, 0.0, (float)(v13 - v22) * (float)v12); /*0x417532*/
      cocos2d::CCPoint::operator+(v33, &v32, v23); /*0x417545*/
      cocos2d::CCPoint::operator=(v31, &v32); /*0x417555*/
      (*(void (__fastcall **)(struct cocos2d::CCSprite *, float *))(*(_QWORD *)v15 + 184LL))(v15, v31); /*0x417566*/
      ++v12; /*0x41756c*/
    }
    while ( v12 < a4 ); /*0x417572*/
    v11 = v34; /*0x417578*/
    if ( *(_QWORD *)(v34 + 16) ) /*0x41757d*/
    {
      v24 = (const char *)v34; /*0x417588*/
      if ( *(_QWORD *)(v34 + 24) > 0xFu ) /*0x417590*/
        v24 = *(const char **)v34; /*0x417592*/
      v25 = cocos2d::CCLabelBMFont::create(v24, "chatFont.fnt"); /*0x4175a2*/
      (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))( /*0x4175bf*/
        *(_QWORD *)(a1 + 584),
        v25,
        3);
      (**((void (__fastcall ***)(__int64, void *))v25 + 46))((__int64)v25 + 368, &unk_6FEB84); /*0x4175da*/
      v26 = *((_QWORD *)v25 + 46); /*0x4175dd*/
      v27 = *(void (__fastcall **)(char *, __int64))(v26 + 40); /*0x4175e4*/
      LOBYTE(v26) = 125; /*0x4175e8*/
      v27((char *)v25 + 368, v26); /*0x4175f1*/
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v25 + 160LL))(v25); /*0x417601*/
      v28 = *(_QWORD *)v25; /*0x417607*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v35, v31[0], v31[1] + 13.0); /*0x417623*/
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v28 + 184))(v25, v29); /*0x41762f*/
    }
  }
  return sub_3C310(v11); /*0x41763e*/
}

// [8/12] Address: 0x417a20
// Method: GJRateLevelLayer::rateInfoFinished
// Hidden C++ exception states: #wind=1
double __fastcall GJRateLevelLayer_rateInfoFinished(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  _BYTE v7[32]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v8; // [rsp+48h] [rbp-20h]

  v8 = a3; /*0x417a3c*/
  v4 = a1 - 1016; /*0x417a41*/
  if ( *(_DWORD *)(*(_QWORD *)(a1 - 1016 + 1032) + 328LL) - *(_DWORD *)(*(_QWORD *)(a1 - 1016 + 1032) + 332LL) == a2 ) /*0x417a60*/
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 88) + 336LL))(*(_QWORD *)(a1 + 88), 0); /*0x417a6b*/
    v5 = sub_3E4F0(v7, a3); /*0x417a79*/
    GJRateLevelLayer_setupRateInfo(v4, v5); /*0x417a84*/
  }
  return sub_3C310(a3); /*0x417a92*/
}

// [9/12] Address: 0x417ab0
// Method: GJRateLevelLayer::rateInfoFailed
__int64 __fastcall GJRateLevelLayer_rateInfoFailed(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 16); /*0x417ab0*/
  if ( *(_DWORD *)(result + 328) - *(_DWORD *)(result + 332) == a2 ) /*0x417ac5*/
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 88) + 336LL))(*(_QWORD *)(a1 + 88), 0); /*0x417ad0*/
  return result; /*0x417ad7*/
}

// [10/12] Address: 0x417ae0
// Method: GJRateLevelLayer::uploadActionFinished
__int64 __fastcall GJRateLevelLayer_uploadActionFinished(__int64 a1, int a2)
{
  __int64 result; // rax
  bool v4; // zf
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  __int64 v7; // [rsp+38h] [rbp-10h]

  result = *(_QWORD *)(a1 + 24); /*0x417ae6*/
  if ( a2 == *(_DWORD *)(result + 328) - *(_DWORD *)(result + 332) ) /*0x417afe*/
  {
    v4 = *(_QWORD *)(a1 + 72) == 0; /*0x417b00*/
    *(_BYTE *)(a1 + 32) = 1; /*0x417b05*/
    if ( !v4 ) /*0x417b09*/
    {
      v5 = 0; /*0x417b1a*/
      *(_QWORD *)&v5 = sub_3C460(32); /*0x417b30*/
      v6 = 17; /*0x417b3a*/
      v7 = 31; /*0x417b43*/
      strcpy((char *)v5, "Rating submitted!"); /*0x417b4c*/
      return UploadActionPopup_showSuccessMessage(*(_QWORD *)(a1 + 72), &v5); /*0x417b61*/
    }
  }
  return result; /*0x417b66*/
}

// [11/12] Address: 0x417b70
// Method: GJRateLevelLayer::uploadActionFailed
__int64 __fastcall GJRateLevelLayer_uploadActionFailed(__int64 a1, int a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]
  __int64 v6; // [rsp+38h] [rbp-10h]

  result = *(_QWORD *)(a1 + 24); /*0x417b76*/
  if ( a2 == *(_DWORD *)(result + 328) - *(_DWORD *)(result + 332) ) /*0x417b8e*/
  {
    if ( *(_QWORD *)(a1 + 72) ) /*0x417b94*/
    {
      v4 = 0; /*0x417bb8*/
      *(_QWORD *)&v4 = sub_3C460(32); /*0x417bc9*/
      v5 = 31; /*0x417bd1*/
      v6 = 31; /*0x417bda*/
      strcpy((char *)v4, "Failed. Please try again later."); /*0x417be3*/
      UploadActionPopup_showFailMessage(*(_QWORD *)(a1 + 72), &v4); /*0x417c1e*/
      result = *(_QWORD *)(a1 + 72); /*0x417c23*/
      *(_QWORD *)(result + 664) = 0; /*0x417c27*/
      *(_QWORD *)(a1 + 72) = 0; /*0x417c2e*/
    }
  }
  return result; /*0x417c37*/
}

// [12/12] Address: 0x417c40
// Method: GJRateLevelLayer::onClosePopup
__int64 __fastcall GJRateLevelLayer_onClosePopup(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 result; // rax
  bool v6; // zf

  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 992LL))(a2, 0); /*0x417c58*/
  LOBYTE(v4) = 1; /*0x417c61*/
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 520LL))(a2, v4); /*0x417c66*/
  v6 = *(_BYTE *)(a1 + 40) == 0; /*0x417c6c*/
  *(_QWORD *)(a1 - 1000 + 1080) = 0; /*0x417c77*/
  if ( !v6 ) /*0x417c82*/
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 1000) + 1104LL))(a1 - 1000, 0); /*0x417c89*/
  return result; /*0x417c8f*/
}

// Address: 0x596a0
// Method: GJRateLevelLayer::init
// Hidden C++ exception states: #wind=4
char __fastcall GJRateLevelLayer_init(
        cocos2d::CCLayerColor *a1,
        __int64 a2,
        const char *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        float a7,
        char a8,
        int a9,
        float a10)
{
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  cocos2d::CCObject *v21; // r12
  float *v22; // rsi
  __int64 v23; // rcx
  int v24; // edi
  __int64 v25; // rax
  __int64 v26; // rbx
  const struct cocos2d::CCPoint *v27; // rax
  float v28; // xmm9_4
  float v29; // xmm6_4
  __int64 v30; // rax
  __int64 v31; // rbx
  const struct cocos2d::CCPoint *v32; // rax
  float *v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // rax
  float v36; // xmm11_4
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rbx
  struct cocos2d::CCLayerColor *v44; // r13
  __int64 v45; // rbx
  __int64 v46; // rax
  struct cocos2d::CCLayerColor *v47; // rdi
  __int64 v48; // rbx
  float v49; // xmm7_4
  float *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 *v53; // rdi
  __int64 v54; // rbx
  __int64 v55; // rax
  __int64 v56; // rbx
  __int64 v57; // rax
  struct cocos2d::CCLabelBMFont *v58; // rdi
  __int64 v59; // rbx
  __int64 v60; // rax
  __int64 v61; // rbx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rbx
  __int64 v69; // rax
  __int64 v70; // rbx
  float v71; // xmm9_4
  __int64 v72; // rax
  __int64 v73; // rax
  cocos2d::CCObject *v74; // rax
  cocos2d::CCObject *v75; // r13
  float v76; // xmm6_4
  cocos2d::CCObject *v77; // rax
  cocos2d::CCArray *v78; // rax
  __int64 v79; // rdi
  __int64 v80; // rax
  __int64 v81; // rbx
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rbx
  __int64 v85; // rax
  struct cocos2d::CCSprite *v86; // rsi
  __int64 v87; // rbx
  __int64 v88; // rdi
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rbx
  __int64 v92; // rax
  struct cocos2d::CCSprite *v93; // rdi
  __int64 v94; // rbx
  __int64 v95; // rax
  _BYTE v96[8]; // [rsp+40h] [rbp-C0h] BYREF
  int v97; // [rsp+48h] [rbp-B8h] BYREF
  float v98; // [rsp+4Ch] [rbp-B4h]
  float v99; // [rsp+58h] [rbp-A8h] BYREF
  float v100; // [rsp+5Ch] [rbp-A4h]
  float v101; // [rsp+60h] [rbp-A0h] BYREF
  struct cocos2d::CCLayerColor *v102; // [rsp+68h] [rbp-98h] BYREF
  _BYTE *v103; // [rsp+70h] [rbp-90h] BYREF
  const char *v104; // [rsp+78h] [rbp-88h]
  __int64 v105; // [rsp+80h] [rbp-80h]
  __int64 v106; // [rsp+88h] [rbp-78h]
  _BYTE v107[32]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v108; // [rsp+B0h] [rbp-50h]

  v104 = a3;
  v108 = a4;
  v105 = a5;
  v106 = a6;
  v97 = -1778384896;
  if ( cocos2d::CCLayerColor::initWithColor(a1, (const struct cocos2d::_ccColor4B *)&v97) )
  {
    v14 = qword_905FD0;
    if ( !qword_905FD0 )
    {
      v102 = (struct cocos2d::CCLayerColor *)operator new(0x6E8u);
      qword_905FD0 = sub_2723A0(v102);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
      v14 = qword_905FD0;
    }
    if ( GameManager_getGameVariable(v14, "0168") )
      *((_BYTE *)a1 + 596) = 1;
    *((float *)a1 + 162) = a7;
    *((_DWORD *)a1 + 163) = a9;
    *((_BYTE *)a1 + 636) = a8;
    *((_QWORD *)a1 + 70) = a2;
    *((_BYTE *)a1 + 576) = 0;
    sub_5ABA0(a1);
    LOBYTE(v15) = 1;
    (*(void (__fastcall **)(cocos2d::CCLayerColor *, __int64))(*(_QWORD *)a1 + 920LL))(a1, v15);
    LOBYTE(v16) = 1;
    (*(void (__fastcall **)(cocos2d::CCLayerColor *, __int64))(*(_QWORD *)a1 + 992LL))(a1, v16);
    LOBYTE(v17) = 1;
    (*(void (__fastcall **)(cocos2d::CCLayerColor *, __int64))(*(_QWORD *)a1 + 1008LL))(a1, v17);
    v19 = cocos2d::CCDirector::sharedDirector(v18);
    cocos2d::CCDirector::getWinSize(v19, &v99);
    v20 = cocos2d::CCLayer::create();
    *((_QWORD *)a1 + 73) = v20;
    (*(void (__fastcall **)(cocos2d::CCLayerColor *, __int64))(*(_QWORD *)a1 + 464LL))(a1, v20);
    v21 = 0;
    v22 = 0;
    SetupSmartBlockLayer_onCreateAll(v23);
    v24 = dword_8F83A4;
    if ( *((_BYTE *)a1 + 636) )
    {
      cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v101, 370.0, 180.0);
      v29 = (float)((float)(v101 - 60.0) * 1.1) / 0.80000001;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v97, v99 * 0.5, v100 * 0.5);
      v103 = v107;
      sub_3E4F0(v107, a4);
      v31 = v30;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v102, 0.5, 1.0);
      v33 = (float *)TextArea_create(v31, "chatFont.fnt", a10, v29, v32, 1101004800, 0, v24);
      v34 = *(_QWORD *)v33;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v103, 0.5, 0.5);
      (*(void (__fastcall **)(float *, __int64))(v34 + 288))(v33, v35);
      (*(void (__fastcall **)(float *))(*(_QWORD *)v33 + 160LL))(v33);
      (*(void (__fastcall **)(float *, int *))(*(_QWORD *)v33 + 184LL))(v33, &v97);
      v28 = 280.0;
      v36 = (float)((float)(a10 * v33[109]) * 0.5) + 10.0;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v103, (const struct cocos2d::CCPoint *)&v97);
      v38 = v37;
      cocos2d::CCSize::CCSize((cocos2d::CCSize *)v96, (const struct cocos2d::CCSize *)&v101);
      v40 = sub_82740(v39, v38);
      *((_QWORD *)a1 + 78) = v40;
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)a1 + 73) + 456LL))(*((_QWORD *)a1 + 73), v40, 10);
      *(_QWORD *)(*((_QWORD *)a1 + 78) + 600LL) = *((_QWORD *)a1 + 73);
      (*(void (__fastcall **)(_QWORD, float *))(**(_QWORD **)(*((_QWORD *)a1 + 78) + 592LL) + 464LL))(
        *(_QWORD *)(*((_QWORD *)a1 + 78) + 592LL),
        v33);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v96, 0.0, (float)-v36 * 0.5);
      v42 = v41;
      v43 = *((_QWORD *)a1 + 78);
      cocos2d::CCPoint::operator=(v43 + 576, v41);
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v43 + 592) + 184LL))(*(_QWORD *)(v43 + 592), v42);
    }
    else
    {
      v102 = (struct cocos2d::CCLayerColor *)v107;
      sub_3E4F0(v107, a4);
      v26 = v25;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v103, 0.5, 0.5);
      v22 = (float *)TextArea_create(
                       v26,
                       "chatFont.fnt",
                       1.0,
                       (float)((float)(a7 - 60.0) * 1.1) / a10,
                       v27,
                       1101004800,
                       0,
                       v24);
      (*(void (__fastcall **)(_QWORD, float *, __int64))(**((_QWORD **)a1 + 73) + 456LL))(*((_QWORD *)a1 + 73), v22, 3);
      v28 = fmaxf(140.0, (float)(a10 * v22[109]) + 120.0);
      if ( a10 != 1.0 )
        (*(void (__fastcall **)(float *))(*(_QWORD *)v22 + 160LL))(v22);
    }
    *((float *)a1 + 163) = v28;
    v97 = -16777216;
    v101 = -1.7014118e38;
    v44 = cocos2d::CCLayerColor::create((const struct cocos2d::_ccColor4B *)&v101, a7, v28);
    v102 = v44;
    v45 = *(_QWORD *)v44;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v96, (float)(v99 - a7) * 0.5, (float)(v100 - v28) * 0.5);
    (*(void (__fastcall **)(struct cocos2d::CCLayerColor *, __int64))(v45 + 184))(v44, v46);
    (*(void (__fastcall **)(struct cocos2d::CCLayerColor *, _QWORD))(*(_QWORD *)v44 + 336LL))(v44, 0);
    v97 = -6908266;
    v47 = cocos2d::CCLayerColor::create((const struct cocos2d::_ccColor4B *)&v97, a7 + 16.0, v28 + 16.0);
    v48 = *(_QWORD *)v47;
    v49 = *(float *)((*(__int64 (__fastcall **)(struct cocos2d::CCLayerColor *))(*(_QWORD *)v44 + 200LL))(v44) + 4)
        - 8.0;
    v50 = (float *)(*(__int64 (__fastcall **)(struct cocos2d::CCLayerColor *))(*(_QWORD *)v44 + 200LL))(v44);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v96, *v50 - 8.0, v49);
    (*(void (__fastcall **)(struct cocos2d::CCLayerColor *, __int64))(v48 + 184))(v47, v51);
    (*(void (__fastcall **)(struct cocos2d::CCLayerColor *, _QWORD))(*(_QWORD *)v47 + 336LL))(v47, 0);
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)&v97, 0.0, 0.0, 94.0, 94.0);
    v53 = (__int64 *)cocos2d::extension::CCScale9Sprite::create("square01_001.png", v52);
    v54 = *v53;
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)v96, a7, v28);
    (*(void (__fastcall **)(__int64 *, __int64))(v54 + 312))(v53, v55);
    (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(**((_QWORD **)a1 + 73) + 456LL))(*((_QWORD *)a1 + 73), v53, 1);
    v56 = *v53;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v96, v99 * 0.5, v100 * 0.5);
    (*(void (__fastcall **)(__int64 *, __int64))(v56 + 184))(v53, v57);
    v58 = cocos2d::CCLabelBMFont::create(v104, "goldFont.fnt");
    v59 = *(_QWORD *)v58;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v96, 0.5, 1.0);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v59 + 288))(v58, v60);
    v61 = *(_QWORD *)v58;
    v62 = (*(__int64 (__fastcall **)(struct cocos2d::CCLayerColor *))(*(_QWORD *)v44 + 200LL))(v44);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v96, v99 * 0.5, (float)(v28 + *(float *)(v62 + 4)) - 15.0);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v61 + 184))(v58, v63);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *, __int64))(**((_QWORD **)a1 + 73) + 456LL))(
      *((_QWORD *)a1 + 73),
      v58,
      3);
    cocos2d::CCLabelBMFont::limitLabelWidth(v58, a7 - 30.0, 0.89999998, 0.40000001);
    if ( !*((_BYTE *)a1 + 636) )
    {
      v68 = *(_QWORD *)v22;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v96, 0.5, 0.5);
      (*(void (__fastcall **)(float *, __int64))(v68 + 288))(v22, v69);
      v70 = *(_QWORD *)v22;
      v71 = (float)((float)(v28 * 0.5)
                  + *(float *)((*(__int64 (__fastcall **)(struct cocos2d::CCLayerColor *))(*(_QWORD *)v44 + 200LL))(v44)
                             + 4))
          + 5.0;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v96, v99 * 0.5, v71);
      (*(void (__fastcall **)(float *, __int64))(v70 + 184))(v22, v72);
    }
    v73 = cocos2d::CCMenu::create(v65, v64, v66, v67);
    *((_QWORD *)a1 + 69) = v73;
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)a1 + 73) + 456LL))(*((_QWORD *)a1 + 73), v73, 2);
    v74 = ButtonSprite_create(v105, 90, 0, 1.0, 0, (__int64)"goldFont.fnt", (__int64)"GJ_button_01.png", 0);
    *((_QWORD *)a1 + 76) = v74;
    v75 = CCMenuItemSpriteExtra_create((int)v74, 0, (int)a1, (__int64)sub_5A4D0);
    (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)v75 + 64LL))(v75, 0);
    v76 = *(float *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 76) + 320LL))(*((_QWORD *)a1 + 76)) + 0.0;
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**((_QWORD **)a1 + 69) + 464LL))(*((_QWORD *)a1 + 69), v75);
    if ( v106 )
    {
      v77 = ButtonSprite_create(v106, 90, 0, 1.0, 0, (__int64)"goldFont.fnt", (__int64)"GJ_button_01.png", 0);
      *((_QWORD *)a1 + 77) = v77;
      v21 = CCMenuItemSpriteExtra_create((int)v77, 0, (int)a1, (__int64)sub_5A4D0);
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v21 + 64LL))(v21, 1);
      v76 = v76 + *(float *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 77) + 320LL))(*((_QWORD *)a1 + 77));
      (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**((_QWORD **)a1 + 69) + 464LL))(*((_QWORD *)a1 + 69), v21);
    }
    else
    {
      *((_BYTE *)a1 + 637) = 1;
    }
    if ( (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 69) + 480LL))(*((_QWORD *)a1 + 69)) )
    {
      v78 = (cocos2d::CCArray *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 69) + 480LL))(*((_QWORD *)a1 + 69));
      if ( cocos2d::CCArray::count(v78) > 1 )
        cocos2d::CCMenu::alignItemsHorizontallyWithPadding(
          *((cocos2d::CCMenu **)a1 + 69),
          fminf(15.0, (float)(a7 - v76) * 0.5));
    }
    v79 = **((_QWORD **)a1 + 69);
    v80 = (*(__int64 (__fastcall **)(struct cocos2d::CCLayerColor *))(*(_QWORD *)v102 + 200LL))(v102);
    v81 = *((_QWORD *)a1 + 69);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v96, v99 * 0.5, *(float *)(v80 + 4) + 30.0);
    (*(void (__fastcall **)(__int64, __int64))(v79 + 184))(v81, v82);
    if ( *(_BYTE *)(cocos2d::CCApplication::sharedApplication(v83) + 209) )
    {
      v84 = *((_QWORD *)a1 + 73);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v96, v99 * 0.5, v100 * 0.5);
      cocos2d::CCNode::convertToNodeSpace(v84, &v101, v85);
      v86 = cocos2d::CCSprite::createWithSpriteFrameName("controllerBtn_B_001.png");
      (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(**((_QWORD **)a1 + 73) + 456LL))(
        *((_QWORD *)a1 + 73),
        v86,
        10);
      v87 = *((_QWORD *)a1 + 69);
      v88 = *((_QWORD *)a1 + 73);
      v89 = (*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v75 + 200LL))(v75);
      cocos2d::CCNode::convertToWorldSpace(v87, v96, v89);
      cocos2d::CCNode::convertToNodeSpace(v88, &v97, v90);
      v91 = *(_QWORD *)v86;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v96, v101 - 116.0, v98);
      (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v91 + 184))(v86, v92);
      if ( v21 )
      {
        v93 = cocos2d::CCSprite::createWithSpriteFrameName("controllerBtn_X_001.png");
        (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(**((_QWORD **)a1 + 73) + 456LL))(
          *((_QWORD *)a1 + 73),
          v93,
          10);
        v94 = *(_QWORD *)v93;
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v96, v101 + 116.0, v98);
        (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v94 + 184))(v93, v95);
      }
    }
    *((_DWORD *)a1 + 160) = -1;
    sub_3C310(a4);
    return 1;
  }
  else
  {
    sub_3C310(a4);
    return 0;
  }
}

// Address: 0x416730
// Method: GJRateLevelLayer::setupRateInfo
// Hidden C++ exception states: #wind=6
double __fastcall GJRateLevelLayer_setupRateInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  cocos2d::CCString *v3; // rax
  const char *CString; // rax
  size_t v5; // rsi
  __int64 v6; // r8
  cocos2d::CCArray *v7; // r12
  void *v8; // rcx
  float v9; // xmm7_4
  int v10; // ebx
  unsigned int i; // edi
  cocos2d::CCString *v12; // rax
  const char *v13; // rax
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // r14
  cocos2d::CCString *v17; // rax
  const char *v18; // rax
  int v19; // edi
  __int64 v20; // rax
  float v21; // xmm6_4
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  char v27; // r14
  void **v28; // rax
  void **v29; // r15
  char *v30; // rsi
  unsigned __int64 v31; // r13
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // rbx
  __int64 v34; // rax
  char *v35; // rax
  struct cocos2d::CCSprite *v36; // rdi
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // r12
  __int64 v40; // rax
  cocos2d::CCString *v41; // rax
  const char *v42; // rax
  __int64 v43; // r8
  cocos2d::CCArray *v44; // r15
  float v45; // xmm7_4
  int v46; // ebx
  unsigned int k; // edi
  cocos2d::CCString *v48; // rax
  const char *v49; // rax
  int v50; // eax
  unsigned int v51; // r14d
  cocos2d::CCArray *v52; // rbx
  cocos2d::CCString *v53; // rax
  const char *v54; // rax
  int v55; // r12d
  __int64 v56; // rax
  float v57; // xmm6_4
  char v58; // r13
  __int64 v59; // rbx
  char v60; // si
  __int64 v61; // rax
  unsigned int v62; // eax
  __int64 v63; // r14
  _DWORD *v64; // rax
  float v65; // xmm9_4
  float v66; // xmm8_4
  float v67; // xmm6_4
  float v68; // xmm7_4
  cocos2d::CCString *v69; // rax
  char *v70; // rax
  const char *v71; // rcx
  struct cocos2d::CCLabelBMFont *v72; // rdi
  __int64 v73; // rbx
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rax
  __int16 v78; // [rsp+50h] [rbp-B0h]
  __int16 v79; // [rsp+50h] [rbp-B0h]
  __int16 v80; // [rsp+54h] [rbp-ACh] BYREF
  char v81; // [rsp+56h] [rbp-AAh]
  char v82; // [rsp+58h] [rbp-A8h]
  __int16 v83; // [rsp+60h] [rbp-A0h] BYREF
  char v84; // [rsp+62h] [rbp-9Eh]
  __int16 v85; // [rsp+70h] [rbp-90h] BYREF
  char v86; // [rsp+72h] [rbp-8Eh]
  _BYTE v87[4]; // [rsp+80h] [rbp-80h] BYREF
  float v88; // [rsp+84h] [rbp-7Ch]
  int v89; // [rsp+88h] [rbp-78h]
  cocos2d::CCArray *v90; // [rsp+90h] [rbp-70h] BYREF
  __int128 v91; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v92; // [rsp+A8h] [rbp-58h]
  __int64 v93; // [rsp+B0h] [rbp-50h]
  __int64 v94; // [rsp+B8h] [rbp-48h]
  __int64 v95; // [rsp+C0h] [rbp-40h]
  char v96[8]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 j; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v98; // [rsp+D8h] [rbp-28h]
  char v99[8]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 *v100; // [rsp+E8h] [rbp-18h]
  __int64 v101; // [rsp+F0h] [rbp-10h]
  void *Src[2]; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int64 v103; // [rsp+108h] [rbp+8h]
  unsigned __int64 v104; // [rsp+110h] [rbp+10h]
  void *Block[2]; // [rsp+118h] [rbp+18h] BYREF
  __m128i si128; // [rsp+128h] [rbp+28h]
  __int128 v107; // [rsp+138h] [rbp+38h] BYREF
  __m128i v108; // [rsp+148h] [rbp+48h]
  _BYTE v109[528]; // [rsp+160h] [rbp+60h] BYREF

  v98 = a2;
  v2 = a1;
  v95 = a1;
  v101 = a2;
  v90 = (cocos2d::CCArray *)sub_D09B0(a2, &word_7222A8);
  v3 = cocos2d::CCArray::stringAtIndex(v90, 0);
  CString = cocos2d::CCString::getCString(v3);
  *(_OWORD *)Block = 0;
  si128 = 0;
  v5 = -1;
  v6 = -1;
  do
    ++v6;
  while ( CString[v6] );
  sub_3C230(Block);
  v7 = (cocos2d::CCArray *)sub_D09B0(Block, &unk_709CE8);
  if ( si128.m128i_i64[1] > 0xFuLL )
  {
    v8 = Block[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v8 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v8);
  }
  si128 = _mm_load_si128((const __m128i *)&Size);
  LOBYTE(Block[0]) = 0;
  v9 = 10.0;
  v10 = 0;
  for ( i = 0; i < cocos2d::CCArray::count(v7); ++i )
  {
    v12 = cocos2d::CCArray::stringAtIndex(v7, i);
    v13 = cocos2d::CCString::getCString(v12);
    v14 = atoi(v13);
    if ( v14 > v10 )
      v10 = v14;
  }
  if ( (float)((float)v10 * 10.0) > 100.0 )
    v9 = 100.0 / (float)v10;
  v15 = 0;
  if ( cocos2d::CCArray::count(v7) )
  {
    v16 = v2 + 1112;
    for ( j = v16; ; v16 = j )
    {
      v17 = cocos2d::CCArray::stringAtIndex(v7, v15);
      v18 = cocos2d::CCString::getCString(v17);
      v19 = atoi(v18);
      v89 = v19;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v99, (float)(int)(15 * (v15 - 8)), -42.0);
      cocos2d::CCPoint::operator+(v16, v87, v20);
      v21 = v9;
      v80 = 0;
      v82 = 0;
      fmt::BasicWriter<char>::BasicWriter<char>(v109);
      LODWORD(v94) = v15 + 1;
      fmt::BasicWriter<char>::operator<<(v109, v15 + 1);
      v22 = fmt::BasicWriter<char>::c_str(v109);
      *(_OWORD *)Src = 0;
      v103 = 0;
      v104 = 0;
      v23 = -1;
      do
        ++v23;
      while ( *(_BYTE *)(v22 + v23) );
      sub_3C230(Src);
      fmt::BasicWriter<char>::~BasicWriter<char>(v109);
      if ( v19 <= 0 )
      {
        v89 = 1;
        v78 = 12371;
        v27 = 23;
        v80 = 8247;
        v82 = 16;
        v28 = Src;
        if ( v104 > 0xF )
          v28 = (void **)Src[0];
        v103 = 0;
        *(_BYTE *)v28 = 0;
        if ( v9 >= 10.0 )
        {
          v21 = v9 * 0.5;
          v88 = v88 - (float)((float)(v9 * 0.5) * 0.5);
        }
      }
      else
      {
        switch ( v15 )
        {
          case 0u:
            v78 = -11517;
            v27 = -1;
            break;
          case 1u:
            v78 = -27904;
            v27 = -1;
            break;
          case 2u:
            v78 = -1536;
            v27 = 60;
            break;
          case 3u:
            v78 = -10146;
            v27 = 0;
            break;
          case 4u:
            v78 = -4610;
            v27 = 20;
            break;
          case 5u:
            v78 = -18433;
            v27 = 0;
            break;
          case 6u:
            v78 = 30975;
            v27 = 0;
            break;
          case 7u:
            v78 = 30207;
            v27 = -21;
            break;
          case 8u:
            v78 = 11775;
            v27 = -20;
            break;
          case 9u:
            v78 = 11775;
            v27 = 0;
            break;
          default:
            v78 = -26986;
            v27 = -106;
            break;
        }
      }
      v100 = &v91;
      v91 = 0;
      v92 = 0;
      v93 = 0;
      v29 = Src;
      v30 = (char *)Src[0];
      v31 = v104;
      if ( v104 > 0xF )
        v29 = (void **)Src[0];
      v32 = v103;
      if ( v103 > 0x7FFFFFFFFFFFFFFFLL )
        sub_8D90(v25, v24, v26);
      if ( v103 > 0xF )
      {
        v33 = v103 | 0xF;
        if ( (v103 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL )
        {
          if ( v33 < 0x16 )
            v33 = 22;
        }
        else
        {
          v33 = 0x7FFFFFFFFFFFFFFFLL;
        }
        *(_QWORD *)&v91 = sub_3C460(v33 + 1);
        v92 = v32;
        v93 = v33;
        memcpy((void *)v91, v29, v32 + 1);
      }
      else
      {
        v92 = v103;
        v93 = 15;
        v91 = *(_OWORD *)v29;
      }
      v83 = v80;
      v84 = v82;
      v85 = v78;
      v86 = v27;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v96, (const struct cocos2d::CCPoint *)v87);
      v2 = v95;
      GJRateLevelLayer_createStatPillar(v95, 10, (int)v21, v89, (__int64)&v85, (__int64)&v83, v34, (__int64)&v91);
      if ( v31 > 0xF )
      {
        v35 = v30;
        if ( v31 + 1 >= 0x1000 )
        {
          v30 = (char *)*((_QWORD *)v30 - 1);
          if ( (unsigned __int64)(v35 - v30 - 8) > 0x1F )
            invoke_watson(0, 0, 0, 0, 0);
        }
        j_j_free(v30);
      }
      v15 = v94;
      v5 = -1;
      if ( v15 >= cocos2d::CCArray::count(v7) )
        break;
    }
  }
  v36 = cocos2d::CCSprite::createWithSpriteFrameName("whiteSquare60_001.png");
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v36 + 120LL))(v36);
  v37 = *(_QWORD *)v36;
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v36 + 320LL))(v36);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(v37 + 136))(v36);
  v80 = 11086;
  v81 = 24;
  (**((void (__fastcall ***)(__int64, __int16 *))v36 + 40))((__int64)v36 + 320, &v80);
  LOBYTE(v38) = -56;
  (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v36 + 40) + 40LL))((__int64)v36 + 320, v38);
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(**(_QWORD **)(v2 + 584) + 456LL))(
    *(_QWORD *)(v2 + 584),
    v36,
    3);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v96, 38.0, 0.0);
  v39 = v2 + 1112;
  v94 = v2 + 1112;
  cocos2d::CCPoint::operator+(v2 + 1112, &j, v40);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64 *))(*(_QWORD *)v36 + 184LL))(v36, &j);
  v41 = cocos2d::CCArray::stringAtIndex(v90, 1u);
  v42 = cocos2d::CCString::getCString(v41);
  *(_OWORD *)Block = 0;
  si128 = 0;
  v43 = -1;
  do
    ++v43;
  while ( v42[v43] );
  sub_3C230(Block);
  v44 = (cocos2d::CCArray *)sub_D09B0(Block, &unk_709CE8);
  sub_3C310(Block);
  v45 = 10.0;
  v46 = 0;
  for ( k = 0; k < cocos2d::CCArray::count(v44); ++k )
  {
    v48 = cocos2d::CCArray::stringAtIndex(v44, k);
    v49 = cocos2d::CCString::getCString(v48);
    v50 = atoi(v49);
    if ( v50 > v46 )
      v46 = v50;
  }
  if ( (float)((float)v46 * 10.0) > 100.0 )
    v45 = 100.0 / (float)v46;
  v51 = 0;
  if ( cocos2d::CCArray::count(v44) )
  {
    v52 = (cocos2d::CCArray *)(v95 + 1112);
    v90 = (cocos2d::CCArray *)(v95 + 1112);
    do
    {
      v53 = cocos2d::CCArray::stringAtIndex(v44, v51);
      v54 = cocos2d::CCString::getCString(v53);
      v55 = atoi(v54);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v96, (float)(int)(15 * (v51 + 4)), -42.0);
      cocos2d::CCPoint::operator+(v52, v87, v56);
      v57 = v45;
      v80 = 0;
      v58 = 0;
      *(_OWORD *)Src = 0;
      v104 = 15;
      if ( v55 <= 0 )
      {
        v55 = 1;
        v79 = 12371;
        v60 = 23;
        v80 = 8247;
        v58 = 16;
        v59 = 0;
        v103 = 0;
        LOBYTE(Src[0]) = 0;
        if ( v45 >= 10.0 )
        {
          v57 = v45 * 0.5;
          v88 = v88 - (float)((float)(v45 * 0.5) * 0.5);
        }
      }
      else
      {
        v59 = 1;
        v103 = 1;
        switch ( v51 )
        {
          case 1u:
            v79 = -1;
            v60 = 0;
            LOWORD(Src[0]) = 70;
            break;
          case 2u:
            v79 = 32255;
            v60 = 0;
            LOWORD(Src[0]) = 69;
            break;
          case 3u:
            v79 = 255;
            v60 = -1;
            LOWORD(Src[0]) = 76;
            break;
          case 4u:
            v79 = -256;
            v60 = -1;
            LOWORD(Src[0]) = 77;
            break;
          default:
            v79 = -26986;
            v60 = -106;
            LOWORD(Src[0]) = 82;
            break;
        }
      }
      v100 = &v91;
      v92 = v59;
      v93 = 15;
      v91 = *(_OWORD *)Src;
      v85 = v80;
      v86 = v58;
      v83 = v79;
      v84 = v60;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v99, (const struct cocos2d::CCPoint *)v87);
      GJRateLevelLayer_createStatPillar(v95, 10, (int)v57, v55, (__int64)&v83, (__int64)&v85, v61, (__int64)&v91);
      ++v51;
      v62 = cocos2d::CCArray::count(v44);
      v52 = v90;
    }
    while ( v51 < v62 );
    v5 = -1;
    v39 = v94;
  }
  v107 = 0;
  v108 = _mm_load_si128((const __m128i *)&Size);
  LOBYTE(v107) = 0;
  v63 = v95;
  v64 = *(_DWORD **)(v95 + 1032);
  v65 = (float)(int)v64[281];
  if ( v65 <= 0.0 )
  {
    v69 = cocos2d::CCString::createWithFormat("Req: %i", v64[279]);
  }
  else
  {
    v66 = (float)(int)v64[282];
    v67 = (float)(int)v64[283];
    v68 = (float)(int)v64[284];
    v69 = cocos2d::CCString::createWithFormat(
            "R: %i (%i- / %i+)\n%.1f | +%.1f | -%.1f | +-%.1f\nReq: %i",
            (int)v65,
            (int)v68,
            (int)v67,
            (float)(v66 / v65),
            (float)((float)(v66 - v68) / (float)(v65 - v68)),
            (float)((float)(v66 - (float)(v67 * 10.0)) / (float)(v65 - v67)),
            (float)((float)((float)(v66 - (float)(v67 * 10.0)) - v68) / (float)((float)(v65 - v67) - v68)),
            v64[279]);
  }
  v70 = (char *)cocos2d::CCString::getCString(v69);
  do
    ++v5;
  while ( v70[v5] );
  sub_3F5A0(&v107, v70, v5);
  v71 = (const char *)&v107;
  if ( v108.m128i_i64[1] > 0xFuLL )
    v71 = (const char *)v107;
  v72 = cocos2d::CCLabelBMFont::create(v71, "chatFont.fnt");
  v73 = *(_QWORD *)v72;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v96, 0.0, 1.0);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v73 + 288))(v72, v74);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v72 + 160LL))(v72);
  (**((void (__fastcall ***)(__int64, void *))v72 + 46))((__int64)v72 + 368, &unk_6FEB84);
  LOBYTE(v75) = -31;
  (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v72 + 46) + 40LL))((__int64)v72 + 368, v75);
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *, __int64))(**(_QWORD **)(v63 + 584) + 456LL))(
    *(_QWORD *)(v63 + 584),
    v72,
    2);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v96, -130.0, 48.0);
  cocos2d::CCPoint::operator+(v39, &v90, v76);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, cocos2d::CCArray **))(*(_QWORD *)v72 + 184LL))(v72, &v90);
  sub_3C310(&v107);
  return sub_3C310(v98);
}
