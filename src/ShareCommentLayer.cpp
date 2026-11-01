#include <Geode/binding/ShareCommentLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/13] Address: 0x76590
// Method: ShareCommentLayer::updateDescText
// Hidden C++ exception states: #wind=2
double __fastcall ShareCommentLayer_updateDescText(DS_Dictionary **a1, const char *a2)
{
  const char *v2; // rdi
  _BYTE *v4; // rbx
  bool v5; // r14
  DS_Dictionary *v6; // rbp

  v2 = a2; /*0x765b1*/
  v4 = (char *)*a1 + 353; /*0x765bf*/
  if ( *((_QWORD *)a2 + 3) > 0xFu ) /*0x765d0*/
    a2 = *(const char **)a2; /*0x765d2*/
  v5 = DS_Dictionary::saveRootSubDictToCompressedFile(a1[1], a2, 1); /*0x765e2*/
  v6 = a1[1]; /*0x765e6*/
  if ( v6 ) /*0x765ed*/
  {
    DS_Dictionary::~DS_Dictionary(a1[1]); /*0x765f2*/
    j_j_free(v6); /*0x76600*/
    a1[1] = 0; /*0x76605*/
  }
  (*(void (__fastcall **)(DS_Dictionary *, bool))(*(_QWORD *)*a1 + 912LL))(*a1, v5); /*0x76617*/
  *v4 = 0; /*0x7661e*/
  return sub_3C310(v2); /*0x76629*/
}

// [2/13] Address: 0x802b0
// Method: ShareCommentLayer::updatePercentLabel
void __fastcall ShareCommentLayer_updatePercentLabel(__int64 a1, __int64 a2)
{
  __int64 *v3; // rcx
  float v4; // xmm0_4
  __int64 v5; // rax
  float v6; // xmm7_4
  __int64 *v7; // rdi
  __int64 v8; // rbx
  float v9; // xmm4_4
  float v10; // xmm2_4
  float v11; // xmm6_4
  __int64 v12; // rax
  __int64 *v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rax
  char v16; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(__int64 **)(a1 + 488); /*0x802b9*/
  if ( v3 ) /*0x802c3*/
  {
    if ( *(_BYTE *)(a1 + 568) ) /*0x802c9*/
      v4 = *(float *)(a1 + 424); /*0x802dd*/
    else
      v4 = *(float *)(a1 + 428); /*0x802e7*/
    v5 = *v3; /*0x802fb*/
    v6 = *(float *)(a1 + 432) - v4; /*0x802fe*/
    if ( v6 > 0.0 ) /*0x80306*/
    {
      LOBYTE(a2) = 1; /*0x80326*/
      (*(void (__fastcall **)(__int64 *, __int64))(v5 + 336))(v3, a2); /*0x80332*/
      v7 = *(__int64 **)(a1 + 488); /*0x80358*/
      v8 = *v7; /*0x8035f*/
      v9 = *(float *)(a1 + 428) - 6.0; /*0x8036d*/
      v10 = fminf(v9, fmaxf(8.0, (float)(*(float *)(a1 + 428) / *(float *)(a1 + 432)) * v9)); /*0x8038c*/
      v11 = (float)(*(float *)(a1 + 428) - 3.0) /*0x803ae*/
          - (float)(fminf(1.0, fmaxf(0.0, *(float *)(a1 + 436) / v6)) * (float)(v9 - v10));
      cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v16, 3.0, v10); /*0x803b2*/
      (*(void (__fastcall **)(__int64 *, __int64))(v8 + 312))(v7, v12); /*0x803be*/
      v13 = *(__int64 **)(a1 + 488); /*0x803e1*/
      v14 = *v13; /*0x803f0*/
      cocos2d::CCPoint::CCPoint( /*0x803f6*/
        (cocos2d::CCPoint *)&v16,
        (float)(*(float *)(a1 + 424) - 2.0) + *(float *)(a1 + 500),
        v11 + *(float *)(a1 + 504));
      (*(void (__fastcall **)(__int64 *, __int64))(v14 + 184))(v13, v15); /*0x80402*/
    }
    else
    {
      (*(void (__fastcall **)(__int64 *, _QWORD))(v5 + 336))(v3, 0); /*0x8031a*/
    }
  }
}

// [3/13] Address: 0x1697a0
// Method: ShareCommentLayer::onShare
// Hidden C++ exception states: #wind=15
double __fastcall ShareCommentLayer_onShare(__int64 a1)
{
  void (__fastcall ***v2)(_QWORD, _QWORD); // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  void **v8; // r14
  unsigned __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rcx
  double result; // xmm0_8
  void *v23; // [rsp+30h] [rbp-39h]
  void *v24; // [rsp+30h] [rbp-39h]
  void *v25; // [rsp+30h] [rbp-39h]
  void *v26; // [rsp+30h] [rbp-39h]
  void *v27; // [rsp+30h] [rbp-39h]
  void *v28; // [rsp+38h] [rbp-31h]
  void *v29; // [rsp+38h] [rbp-31h]
  void *v30; // [rsp+38h] [rbp-31h]
  void *v31; // [rsp+38h] [rbp-31h]
  __int128 v32; // [rsp+40h] [rbp-29h] BYREF
  unsigned __int64 v33; // [rsp+50h] [rbp-19h]
  __int64 v34; // [rsp+58h] [rbp-11h]
  void *Src[2]; // [rsp+60h] [rbp-9h] BYREF
  unsigned __int64 v36; // [rsp+70h] [rbp+7h]
  unsigned __int64 v37; // [rsp+78h] [rbp+Fh]
  _BYTE v38[32]; // [rsp+80h] [rbp+17h] BYREF

  v2 = *(void (__fastcall ****)(_QWORD, _QWORD))(a1 + 520); /*0x1697d1*/
  if ( v2 ) /*0x1697db*/
  {
    (**v2)(v2, *(_QWORD *)(a1 + 336)); /*0x1697e7*/
  }
  else if ( *(_QWORD *)(a1 + 336) ) /*0x1697ee*/
  {
    v3 = qword_906070; /*0x1697fc*/
    if ( !qword_906070 ) /*0x169806*/
    {
      v28 = operator new(0x3D0u); /*0x169812*/
      qword_906070 = sub_47C350(v28); /*0x16981f*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x169830*/
      v3 = qword_906070; /*0x169832*/
    }
    MusicDownloadManager_pathForSong(v3, Src, *(_DWORD *)(*(_QWORD *)(a1 + 336) + 320LL)); /*0x16984b*/
    v4 = qword_905F60; /*0x169851*/
    if ( !qword_905F60 ) /*0x16985b*/
    {
      v29 = operator new(0x8A8u); /*0x169867*/
      qword_905F60 = sub_5AE20(v29); /*0x169874*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x169885*/
      v4 = qword_905F60; /*0x169887*/
    }
    if ( FMODAudioEngine_isMusicPlaying(v4, 0) ) /*0x169890*/
    {
      v32 = 0; /*0x1698ab*/
      v33 = 0; /*0x1698af*/
      v34 = 0; /*0x1698b3*/
      v8 = Src; /*0x1698b7*/
      if ( v37 > 0xF ) /*0x1698c0*/
        v8 = (void **)Src[0]; /*0x1698c0*/
      v9 = v36; /*0x1698c5*/
      v10 = 0x7FFFFFFFFFFFFFFFLL; /*0x1698c9*/
      if ( v36 > 0x7FFFFFFFFFFFFFFFLL ) /*0x1698d6*/
        sub_8D90(v6, v5, v7); /*0x169c22*/
      if ( v36 > 0xF ) /*0x1698e0*/
      {
        if ( (v36 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x169902*/
        {
          v10 = v36 | 0xF; /*0x169904*/
          if ( (v36 | 0xF) < 0x16 ) /*0x16990f*/
            v10 = 22; /*0x16990f*/
        }
        *(_QWORD *)&v32 = sub_3C460(v10 + 1); /*0x16991c*/
        v33 = v9; /*0x169920*/
        v34 = v10; /*0x169924*/
        memcpy((void *)v32, v8, v9 + 1); /*0x169932*/
      }
      else
      {
        v33 = v36; /*0x1698e2*/
        v34 = 15; /*0x1698e6*/
        v32 = *(_OWORD *)v8; /*0x1698f2*/
      }
      v11 = qword_905F60; /*0x169938*/
      if ( !qword_905F60 ) /*0x169942*/
      {
        v23 = operator new(0x8A8u); /*0x16994e*/
        qword_905F60 = sub_5AE20(v23); /*0x16995b*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x16996c*/
        v11 = qword_905F60; /*0x16996e*/
      }
      if ( !(unsigned __int8)sub_619A0(v11, &v32) ) /*0x169979*/
      {
        v12 = qword_905F60; /*0x169982*/
        if ( !qword_905F60 ) /*0x16998c*/
        {
          v24 = operator new(0x8A8u); /*0x169998*/
          qword_905F60 = sub_5AE20(v24); /*0x1699a5*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x1699b6*/
          v12 = qword_905F60; /*0x1699b8*/
        }
        v13 = *(_QWORD *)(v12 + 552); /*0x1699bf*/
        if ( v13 ) /*0x1699c9*/
          FMOD::ChannelControl::stop(v13); /*0x1699cb*/
        sub_3DB60(v12 + 1096); /*0x1699d8*/
        sub_3DB60(v12 + 1160); /*0x1699e4*/
        sub_3DB60(v12 + 1224); /*0x1699f0*/
      }
    }
    v14 = qword_905F60; /*0x1699f5*/
    if ( !qword_905F60 ) /*0x1699ff*/
    {
      v25 = operator new(0x8A8u); /*0x169a0b*/
      qword_905F60 = sub_5AE20(v25); /*0x169a18*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x169a29*/
      v14 = qword_905F60; /*0x169a2b*/
    }
    if ( FMODAudioEngine_isMusicPlaying(v14, 0) ) /*0x169a34*/
    {
      v15 = qword_905F60; /*0x169a3d*/
      if ( !qword_905F60 ) /*0x169a47*/
      {
        v26 = operator new(0x8A8u); /*0x169a53*/
        qword_905F60 = sub_5AE20(v26); /*0x169a60*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x169a71*/
        v15 = qword_905F60; /*0x169a73*/
      }
      v16 = *(_QWORD *)(v15 + 552); /*0x169a7a*/
      if ( v16 ) /*0x169a84*/
        FMOD::ChannelControl::stop(v16); /*0x169a86*/
      sub_3DB60(v15 + 1096); /*0x169a93*/
      sub_3DB60(v15 + 1160); /*0x169a9f*/
      sub_3DB60(v15 + 1224); /*0x169aab*/
    }
    else if ( *(_QWORD *)(a1 + 336) ) /*0x169ab5*/
    {
      v17 = qword_906070; /*0x169acb*/
      if ( !qword_906070 ) /*0x169ad5*/
      {
        v30 = operator new(0x3D0u); /*0x169ae1*/
        qword_906070 = sub_47C350(v30); /*0x169aee*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x169aff*/
        v17 = qword_906070; /*0x169b01*/
      }
      v18 = MusicDownloadManager_pathForSong(v17, v38, *(_DWORD *)(*(_QWORD *)(a1 + 336) + 320LL)); /*0x169b1a*/
      if ( v18[3] > 0xFu ) /*0x169b25*/
        v18 = (_QWORD *)*v18; /*0x169b27*/
      v32 = 0; /*0x169b2d*/
      v33 = 0; /*0x169b31*/
      v34 = 0; /*0x169b35*/
      v19 = -1; /*0x169b39*/
      do /*0x169b43*/
        ++v19; /*0x169b40*/
      while ( *((_BYTE *)v18 + v19) ); /*0x169b43*/
      sub_3C230(&v32); /*0x169b51*/
      v20 = qword_905F60; /*0x169b57*/
      if ( !qword_905F60 ) /*0x169b61*/
      {
        v31 = operator new(0x8A8u); /*0x169b6d*/
        qword_905F60 = sub_5AE20(v31); /*0x169b7a*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x169b8b*/
        v20 = qword_905F60; /*0x169b8d*/
      }
      FMODAudioEngine_playMusic(v20, (__int64)&v32, 0, 0.0); /*0x169b9e*/
      sub_3C310(v38); /*0x169ba8*/
    }
    v21 = qword_906070; /*0x169bad*/
    if ( !qword_906070 ) /*0x169bb7*/
    {
      v27 = operator new(0x3D0u); /*0x169bc3*/
      qword_906070 = sub_47C350(v27); /*0x169bd0*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x169be1*/
      v21 = qword_906070; /*0x169be3*/
    }
    MusicDownloadManager_songStateChanged(v21); /*0x169bea*/
    return sub_3C310(Src); /*0x169bf4*/
  }
  return result; /*0x169bf9*/
}

// [4/13] Address: 0x628d50
// Method: ShareCommentLayer::~ShareCommentLayer
// Hidden C++ exception states: #wind=1
char *__fastcall ShareCommentLayer__dtor_ShareCommentLayer(char *Block, char a2)
{
  char *v4; // rdi
  __int64 v5; // rax
  void *v6; // rax

  *(_QWORD *)Block = &ShareCommentLayer::`vftable'; /*0x628d6b*/
  *((_QWORD *)Block + 40) = &ShareCommentLayer::`vftable'; /*0x628d75*/
  *((_QWORD *)Block + 41) = &ShareCommentLayer::`vftable'; /*0x628d83*/
  *((_QWORD *)Block + 42) = &ShareCommentLayer::`vftable'; /*0x628d91*/
  *((_QWORD *)Block + 43) = &ShareCommentLayer::`vftable'; /*0x628d9f*/
  *((_QWORD *)Block + 44) = &ShareCommentLayer::`vftable'; /*0x628dad*/
  *((_QWORD *)Block + 51) = &ShareCommentLayer::`vftable'; /*0x628dbb*/
  *((_QWORD *)Block + 54) = &ShareCommentLayer::`vftable'; /*0x628dc9*/
  *((_QWORD *)Block + 68) = &ShareCommentLayer::`vftable'; /*0x628dd7*/
  v4 = Block + 664; /*0x628dde*/
  *((_QWORD *)Block + 83) = &ShareCommentLayer::`vftable'; /*0x628dec*/
  *((_QWORD *)Block + 84) = &ShareCommentLayer::`vftable'; /*0x628df6*/
  *((_QWORD *)Block + 85) = &ShareCommentLayer::`vftable'; /*0x628e04*/
  v5 = *(_QWORD *)&qword_905FB0; /*0x628e0b*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x628e15*/
  {
    v6 = operator new(0x690u); /*0x628e1c*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v6); /*0x628e29*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x628e3a*/
    v5 = *(_QWORD *)&qword_905FB0; /*0x628e3c*/
  }
  if ( *(char **)(v5 + 1488) == v4 ) /*0x628e4a*/
    *(_QWORD *)(v5 + 1488) = 0; /*0x628e4c*/
  sub_3C310(Block + 760); /*0x628e5e*/
  sub_3C310(Block + 728); /*0x628e6a*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x628e72*/
  if ( (a2 & 1) != 0 ) /*0x628e7c*/
    j_j_free(Block); /*0x628e86*/
  return Block; /*0x628e8e*/
}

// [5/13] Address: 0x628ea0
// Method: ShareCommentLayer::create
// Hidden C++ exception states: #wind=4
char *__fastcall ShareCommentLayer_create(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  char *v9; // r14
  __int64 v10; // rbx
  int v11; // eax
  char v13[32]; // [rsp+40h] [rbp-A8h] BYREF
  char v14[32]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v15; // [rsp+80h] [rbp-68h]
  __int64 v16; // [rsp+88h] [rbp-60h]

  v15 = a1; /*0x628ed3*/
  v16 = a5; /*0x628edf*/
  v9 = (char *)operator new(0x340u); /*0x628eed*/
  FLAlertLayer_FLAlertLayer((__int64)v9); /*0x628ef8*/
  *(_QWORD *)v9 = &ShareCommentLayer::`vftable'; /*0x628f04*/
  *((_QWORD *)v9 + 40) = &ShareCommentLayer::`vftable'; /*0x628f0e*/
  *((_QWORD *)v9 + 41) = &ShareCommentLayer::`vftable'; /*0x628f1c*/
  *((_QWORD *)v9 + 42) = &ShareCommentLayer::`vftable'; /*0x628f2a*/
  *((_QWORD *)v9 + 43) = &ShareCommentLayer::`vftable'; /*0x628f38*/
  *((_QWORD *)v9 + 44) = &ShareCommentLayer::`vftable'; /*0x628f46*/
  *((_QWORD *)v9 + 51) = &ShareCommentLayer::`vftable'; /*0x628f54*/
  *((_QWORD *)v9 + 54) = &ShareCommentLayer::`vftable'; /*0x628f62*/
  *((_QWORD *)v9 + 68) = &ShareCommentLayer::`vftable'; /*0x628f70*/
  *((_QWORD *)v9 + 83) = &ShareCommentLayer::`vftable'; /*0x628f7e*/
  *((_QWORD *)v9 + 84) = &ShareCommentLayer::`vftable'; /*0x628f8c*/
  *((_QWORD *)v9 + 85) = &ShareCommentLayer::`vftable'; /*0x628f9a*/
  *((_DWORD *)v9 + 174) = 0; /*0x628fa4*/
  v9[700] = 0; /*0x628fab*/
  *((_QWORD *)v9 + 88) = 0; /*0x628fb2*/
  *((_QWORD *)v9 + 89) = 0; /*0x628fb9*/
  *((_QWORD *)v9 + 90) = 0; /*0x628fc0*/
  *(_OWORD *)(v9 + 728) = 0; /*0x628fca*/
  *((_QWORD *)v9 + 93) = 0; /*0x628fd2*/
  *((_QWORD *)v9 + 94) = 15; /*0x628fd9*/
  v9[728] = 0; /*0x628fe4*/
  *(_OWORD *)(v9 + 760) = 0; /*0x628feb*/
  *((_QWORD *)v9 + 97) = 0; /*0x628ff3*/
  *((_QWORD *)v9 + 98) = 15; /*0x628ffa*/
  v9[760] = 0; /*0x629005*/
  *((_QWORD *)v9 + 99) = 0; /*0x62900c*/
  *((_QWORD *)v9 + 101) = 0; /*0x629013*/
  *((_WORD *)v9 + 408) = 0; /*0x62901a*/
  *((_DWORD *)v9 + 205) = 0; /*0x629022*/
  *((_QWORD *)v9 + 103) = 0; /*0x629029*/
  v10 = sub_3E4F0(v13, a5); /*0x629047*/
  v11 = sub_3E4F0(v14, a1); /*0x629052*/
  if ( (unsigned __int8)sub_6290D0((_DWORD)v9, v11, a2, a3, a4, v10) ) /*0x62906d*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v9); /*0x629079*/
  }
  else
  {
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v9 + 8LL))(v9, 1); /*0x629089*/
    v9 = 0; /*0x62908c*/
  }
  sub_3C310(a1); /*0x629092*/
  sub_3C310(a5); /*0x62909b*/
  return v9; /*0x6290a3*/
}

// [6/13] Address: 0x62a560
// Method: ShareCommentLayer::onClear
double __fastcall ShareCommentLayer_onClear(__int64 a1)
{
  _QWORD *v2; // rcx
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]
  __int64 v6; // [rsp+38h] [rbp-10h]

  v5 = 0; /*0x62a569*/
  v4 = 0; /*0x62a572*/
  LOBYTE(v4) = 0; /*0x62a57c*/
  v6 = 15; /*0x62a584*/
  sub_62AFD0(a1, &v4); /*0x62a58d*/
  v2 = *(_QWORD **)(a1 + 704); /*0x62a592*/
  v5 = 0; /*0x62a5a1*/
  v4 = 0; /*0x62a5aa*/
  LOBYTE(v4) = 0; /*0x62a5af*/
  v6 = 15; /*0x62a5b4*/
  return CCTextInputNode_setString(v2, &v4); /*0x62a5c2*/
}

// [7/13] Address: 0x62ace0
// Method: ShareCommentLayer::keyBackClicked
__int64 __fastcall ShareCommentLayer_keyBackClicked(__int64 a1)
{
  _QWORD **v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdx

  v1 = (_QWORD **)(a1 - 336); /*0x62ace6*/
  v2 = *(_QWORD *)(a1 + 384); /*0x62aced*/
  if ( v2 ) /*0x62acf7*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 1104LL))(v2, 0); /*0x62acfe*/
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*v1[88] + 1032LL))(v1[88], 0); /*0x62ad10*/
  ((void (__fastcall *)(_QWORD **, _QWORD))(*v1)[124])(v1, 0); /*0x62ad1e*/
  LOBYTE(v3) = 1; /*0x62ad27*/
  return ((__int64 (__fastcall *)(_QWORD **, __int64))(*v1)[65])(v1, v3);
}

// [8/13] Address: 0x62ad40
// Method: ShareCommentLayer::textInputClosed
// Hidden C++ exception states: #wind=1
void __fastcall ShareCommentLayer_textInputClosed(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // r8
  void **v6; // rdx
  void **v7; // rdx
  void *v8; // rcx
  __int128 v9; // [rsp+38h] [rbp-50h] BYREF
  __int64 v10; // [rsp+48h] [rbp-40h]
  __int64 v11; // [rsp+50h] [rbp-38h]
  void *Block[2]; // [rsp+58h] [rbp-30h] BYREF
  size_t Size; // [rsp+68h] [rbp-20h]
  unsigned __int64 v14; // [rsp+70h] [rbp-18h]

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a2 + 600) + 600LL) + 8LL))(*(_QWORD *)(a2 + 600) + 600LL); /*0x62ad77*/
  *(_OWORD *)Block = 0; /*0x62ad7d*/
  Size = 0; /*0x62ad82*/
  v14 = 0; /*0x62ad87*/
  v4 = -1; /*0x62ad8c*/
  v5 = -1; /*0x62ad93*/
  do /*0x62ad99*/
    ++v5; /*0x62ad96*/
  while ( *(_BYTE *)(v3 + v5) ); /*0x62ad99*/
  sub_3C230(Block); /*0x62ada7*/
  if ( (void **)(a1 + 184) != Block ) /*0x62adbc*/
  {
    v6 = Block; /*0x62adbe*/
    if ( v14 > 0xF ) /*0x62adc9*/
      v6 = (void **)Block[0]; /*0x62adc9*/
    sub_3F5A0((void *)(a1 + 184), v6, Size); /*0x62add4*/
  }
  v7 = Block; /*0x62add9*/
  if ( v14 > 0xF ) /*0x62ade4*/
    v7 = (void **)Block[0]; /*0x62ade4*/
  v9 = 0; /*0x62aded*/
  v10 = 0; /*0x62adf2*/
  v11 = 0; /*0x62adf7*/
  do /*0x62ae03*/
    ++v4; /*0x62ae00*/
  while ( *((_BYTE *)v7 + v4) ); /*0x62ae03*/
  sub_3C230(&v9); /*0x62ae11*/
  sub_62AFD0(a1 - 544, &v9); /*0x62ae22*/
  if ( v14 > 0xF ) /*0x62ae31*/
  {
    v8 = Block[0]; /*0x62ae36*/
    if ( v14 + 1 >= 0x1000 ) /*0x62ae45*/
    {
      v8 = (void *)*((_QWORD *)Block[0] - 1); /*0x62ae4b*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F ) /*0x62ae5a*/
        invoke_watson(0, 0, 0, 0, 0); /*0x62ae6b*/
    }
    j_j_free(v8); /*0x62ae72*/
  }
}

// [9/13] Address: 0x62aea0
// Method: ShareCommentLayer::textChanged
// Hidden C++ exception states: #wind=1
void __fastcall ShareCommentLayer_textChanged(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // r8
  void **v6; // rdx
  void *v7; // rcx
  __int128 v8; // [rsp+38h] [rbp-50h] BYREF
  __int64 v9; // [rsp+48h] [rbp-40h]
  __int64 v10; // [rsp+50h] [rbp-38h]
  void *Block[2]; // [rsp+58h] [rbp-30h] BYREF
  __int128 v12; // [rsp+68h] [rbp-20h]

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a2 + 600) + 600LL) + 8LL))(*(_QWORD *)(a2 + 600) + 600LL); /*0x62aed7*/
  *(_OWORD *)Block = 0; /*0x62aedd*/
  v12 = 0; /*0x62aee5*/
  v4 = -1; /*0x62aeeb*/
  v5 = -1; /*0x62aef2*/
  do /*0x62aef8*/
    ++v5; /*0x62aef5*/
  while ( *(_BYTE *)(v3 + v5) ); /*0x62aef8*/
  sub_3C230(Block); /*0x62af06*/
  v6 = Block; /*0x62af0c*/
  if ( *((_QWORD *)&v12 + 1) > 0xFu ) /*0x62af17*/
    v6 = (void **)Block[0]; /*0x62af17*/
  v8 = 0; /*0x62af20*/
  v9 = 0; /*0x62af25*/
  v10 = 0; /*0x62af2a*/
  do /*0x62af33*/
    ++v4; /*0x62af30*/
  while ( *((_BYTE *)v6 + v4) ); /*0x62af33*/
  sub_3C230(&v8); /*0x62af41*/
  sub_62AFD0(a1 - 544, &v8); /*0x62af52*/
  if ( *((_QWORD *)&v12 + 1) > 0xFu ) /*0x62af61*/
  {
    v7 = Block[0]; /*0x62af66*/
    if ( (unsigned __int64)(*((_QWORD *)&v12 + 1) + 1LL) >= 0x1000 ) /*0x62af75*/
    {
      v7 = (void *)*((_QWORD *)Block[0] - 1); /*0x62af7b*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v7 - 8) > 0x1F ) /*0x62af8a*/
        invoke_watson(0, 0, 0, 0, 0); /*0x62af9b*/
    }
    j_j_free(v7); /*0x62afa2*/
  }
}

// [10/13] Address: 0x62b2b0
// Method: ShareCommentLayer::emotePickerClosed
void __fastcall ShareCommentLayer_emotePickerClosed(__int64 a1)
{
  *(_QWORD *)(a1 + 40) = 0; /*0x62b2b0*/
}

// [11/13] Address: 0x62b2c0
// Method: ShareCommentLayer::uploadActionFinished
void __fastcall ShareCommentLayer_uploadActionFinished(__int64 a1, int a2)
{
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]
  __int64 v5; // [rsp+38h] [rbp-10h]

  if ( a2 == *(_DWORD *)(a1 + 28) ) /*0x62b2cc*/
  {
    if ( *(_QWORD *)(a1 + 144) ) /*0x62b2ce*/
    {
      v3 = 0; /*0x62b2e7*/
      *(_QWORD *)&v3 = sub_3C460(32); /*0x62b2fd*/
      v4 = 20; /*0x62b307*/
      v5 = 31; /*0x62b310*/
      strcpy((char *)v3, "Friend request sent!"); /*0x62b319*/
      UploadActionPopup_showSuccessMessage(*(_QWORD *)(a1 + 144), &v3); /*0x62b330*/
      *(_BYTE *)(a1 + 152) = 1; /*0x62b335*/
    }
  }
}

// [12/13] Address: 0x62b350
// Method: ShareCommentLayer::uploadActionFailed
void __fastcall ShareCommentLayer_uploadActionFailed(__int64 a1, int a2)
{
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]
  __int64 v5; // [rsp+38h] [rbp-10h]

  if ( a2 == *(_DWORD *)(a1 + 28) && *(_QWORD *)(a1 + 144) ) /*0x62b362*/
  {
    v3 = 0; /*0x62b38a*/
    *(_QWORD *)&v3 = sub_3C460(32); /*0x62b39b*/
    v4 = 31; /*0x62b3a3*/
    v5 = 31; /*0x62b3ac*/
    strcpy((char *)v3, "Failed. Please try again later."); /*0x62b3b5*/
    if ( (unsigned __int8)sub_39D9F0(*(_QWORD *)(a1 + 144), &v3) ) /*0x62b3f3*/
      *(_QWORD *)(a1 + 144) = 0; /*0x62b3fc*/
  }
}

// [13/13] Address: 0x62b410
// Method: ShareCommentLayer::onClosePopup
__int64 __fastcall ShareCommentLayer_onClosePopup(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rcx
  _QWORD **v7; // rdi
  __int64 v8; // rdx

  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 992LL))(a2, 0); /*0x62b428*/
  LOBYTE(v4) = 1; /*0x62b431*/
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 520LL))(a2, v4); /*0x62b436*/
  if ( a2 == *(_QWORD *)(a1 + 136) ) /*0x62b443*/
    *(_QWORD *)(a1 + 136) = 0; /*0x62b445*/
  if ( *(_BYTE *)(a1 + 144) ) /*0x62b450*/
  {
    v6 = *(_QWORD *)(a1 + 48); /*0x62b459*/
    v7 = (_QWORD **)(a1 - 672); /*0x62b45d*/
    if ( v6 ) /*0x62b467*/
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 1104LL))(v6, 0); /*0x62b46e*/
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v7[88] + 1032LL))(v7[88], 0); /*0x62b480*/
    ((void (__fastcall *)(_QWORD **, _QWORD))(*v7)[124])(v7, 0); /*0x62b48e*/
    LOBYTE(v8) = 1; /*0x62b497*/
    return ((__int64 (__fastcall *)(_QWORD **, __int64))(*v7)[65])(v7, v8); /*0x62b49c*/
  }
  return result; /*0x62b4a2*/
}
