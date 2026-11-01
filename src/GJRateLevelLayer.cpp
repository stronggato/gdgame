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
