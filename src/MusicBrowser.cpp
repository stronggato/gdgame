#include <Geode/binding/MusicBrowser.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/16] Address: 0xda6c0
// Method: MusicBrowser::onPlaybackControl
__int64 __fastcall MusicBrowser_onPlaybackControl(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char *v3; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0xda6ca*/
  if ( (int)result > 0 ) /*0xda6cf*/
  {
    v3 = ProfilePage_create(result, 0); /*0xda6d5*/
    return (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v3 + 1064LL))(v3); /*0xda6eb*/
  }
  return result; /*0xda6e7*/
}

// [3/16] Address: 0x172be0
// Method: MusicBrowser::setupList
// Hidden C++ exception states: #wind=3
double __fastcall MusicBrowser_setupList(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int128 *v6; // rdx
  int v7; // eax
  int v8; // edx
  cocos2d::CCString *v9; // rax
  const char *CString; // rax
  struct cocos2d::CCSprite *v11; // rax
  __int64 *v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // r8
  __int64 *v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 *v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rax
  int v24; // edx
  int v25; // r8d
  double result; // xmm0_8
  __int128 *v27; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v28[8]; // [rsp+48h] [rbp-31h] BYREF
  __int128 v29; // [rsp+50h] [rbp-29h] BYREF
  __int64 v30; // [rsp+60h] [rbp-19h]
  unsigned __int64 v31; // [rsp+68h] [rbp-11h]
  _QWORD v32[4]; // [rsp+70h] [rbp-9h] BYREF

  if ( a2 ) /*0x172be3*/
  {
    *(_BYTE *)(a1 + 616) = 1; /*0x172c20*/
    *(_BYTE *)(a1 + 617) = *(_BYTE *)(a2 + 132); /*0x172c2e*/
    cocos2d::CCNode::stopAllActions(*(cocos2d::CCNode **)(a1 + 608)); /*0x172c3b*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 608) + 320LL) + 40LL))( /*0x172c54*/
      *(_QWORD *)(a1 + 608) + 320LL,
      0);
    v4 = *(_QWORD *)(a1 + 584); /*0x172c57*/
    if ( v4 ) /*0x172c61*/
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 528LL))(v4); /*0x172c66*/
      *(_QWORD *)(a1 + 584) = 0; /*0x172c6c*/
    }
    v5 = *(_QWORD *)(a1 + 576); /*0x172c73*/
    if ( v5 ) /*0x172c7d*/
    {
      *(_QWORD *)(v5 + 712) = 0; /*0x172c7f*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 576) + 528LL))(*(_QWORD *)(a1 + 576)); /*0x172c90*/
      *(_QWORD *)(a1 + 576) = 0; /*0x172c96*/
    }
    sub_3E4F0(&v29, a2 + 88); /*0x172ca5*/
    v6 = &v29; /*0x172cab*/
    if ( v31 > 0xF ) /*0x172cb4*/
      v6 = (__int128 *)v29; /*0x172cb4*/
    (**(void (__fastcall ***)(__int64, __int128 *))(*(_QWORD *)(a1 + 568) + 360LL))(*(_QWORD *)(a1 + 568) + 360LL, v6); /*0x172cca*/
    sub_3C310(&v29); /*0x172cd1*/
    LOWORD(v27) = *(_WORD *)(a2 + 124); /*0x172cdb*/
    BYTE2(v27) = *(_BYTE *)(a2 + 126); /*0x172ce4*/
    (**(void (__fastcall ***)(__int64, __int128 **))(*(_QWORD *)(a1 + 568) + 368LL))( /*0x172cfc*/
      *(_QWORD *)(a1 + 568) + 368LL,
      &v27);
    v7 = *(_DWORD *)(a2 + 120); /*0x172cfe*/
    if ( v7 > 0 ) /*0x172d04*/
    {
      v8 = 56; /*0x172d06*/
      if ( v7 < 56 ) /*0x172d0d*/
        v8 = *(_DWORD *)(a2 + 120); /*0x172d0d*/
      v9 = cocos2d::CCString::createWithFormat("dialogIcon_%03d.png", v8); /*0x172d17*/
      CString = cocos2d::CCString::getCString(v9); /*0x172d20*/
      v11 = cocos2d::CCSprite::create(CString); /*0x172d29*/
      *(_QWORD *)(a1 + 584) = v11; /*0x172d2f*/
      (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(**(_QWORD **)(a1 + 560) + 456LL))( /*0x172d53*/
        *(_QWORD *)(a1 + 560),
        v11,
        2);
      v12 = *(__int64 **)(a1 + 584); /*0x172d56*/
      v13 = *v12; /*0x172d5d*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v27, -143.0, 0.0); /*0x172d6f*/
      (*(void (__fastcall **)(__int64 *, __int64))(v13 + 184))(v12, v14); /*0x172d7b*/
    }
    v27 = &v29; /*0x172d8e*/
    sub_3E4F0(v32, a2 + 56); /*0x172d9a*/
    v15 = v32; /*0x172da0*/
    if ( v32[3] > 0xFu ) /*0x172da9*/
      v15 = (_QWORD *)v32[0]; /*0x172da9*/
    v29 = 0; /*0x172db1*/
    v30 = 0; /*0x172db5*/
    v31 = 0; /*0x172db9*/
    v16 = -1; /*0x172dbd*/
    do /*0x172dc7*/
      ++v16; /*0x172dc4*/
    while ( *((_BYTE *)v15 + v16) ); /*0x172dc7*/
    sub_3C230(&v29); /*0x172dd2*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v28, 0.0, 1.0); /*0x172de7*/
    *(_QWORD *)(a1 + 576) = TextArea_create(&v29, "chatFont.fnt"); /*0x172e2e*/
    sub_3C310(v32); /*0x172e39*/
    v17 = *(__int64 **)(a1 + 576); /*0x172e3e*/
    v18 = *v17; /*0x172e45*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v28, 0.0, 0.5); /*0x172e57*/
    (*(void (__fastcall **)(__int64 *, __int64))(v18 + 288))(v17, v19); /*0x172e63*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 576) + 160LL))(*(_QWORD *)(a1 + 576)); /*0x172e76*/
    v20 = a1 + 544; /*0x172e7c*/
    if ( !a1 ) /*0x172e86*/
      v20 = 0; /*0x172e86*/
    *(_QWORD *)(*(_QWORD *)(a1 + 576) + 712LL) = v20; /*0x172e91*/
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 560) + 456LL))( /*0x172eaf*/
      *(_QWORD *)(a1 + 560),
      *(_QWORD *)(a1 + 576),
      3);
    v21 = *(__int64 **)(a1 + 576); /*0x172eb5*/
    v22 = *v21; /*0x172ebc*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v28, -92.0, 0.0); /*0x172ece*/
    (*(void (__fastcall **)(__int64 *, __int64))(v22 + 184))(v21, v23); /*0x172eda*/
    return TextArea_fadeInCharacters(*(_QWORD *)(a1 + 576), v24, v25, 0, 0); /*0x172eff*/
  }
  return result; /*0x172f2e*/
}

// [4/16] Address: 0x475cf0
// Method: MusicBrowser::~MusicBrowser
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall MusicBrowser__dtor_MusicBrowser(_QWORD *Block, char a2)
{
  __int64 v4; // rcx
  void *v5; // rax
  cocos2d::CCObject *v6; // rcx

  *Block = &MusicBrowser::`vftable'; /*0x475d0b*/
  Block[40] = &MusicBrowser::`vftable'; /*0x475d15*/
  Block[41] = &MusicBrowser::`vftable'; /*0x475d23*/
  Block[42] = &MusicBrowser::`vftable'; /*0x475d31*/
  Block[43] = &MusicBrowser::`vftable'; /*0x475d3f*/
  Block[44] = &MusicBrowser::`vftable'; /*0x475d4d*/
  Block[51] = &MusicBrowser::`vftable'; /*0x475d5b*/
  Block[54] = &MusicBrowser::`vftable'; /*0x475d69*/
  Block[68] = &MusicBrowser::`vftable'; /*0x475d77*/
  Block[83] = &MusicBrowser::`vftable'; /*0x475d85*/
  Block[84] = &MusicBrowser::`vftable'; /*0x475d93*/
  Block[85] = &MusicBrowser::`vftable'; /*0x475da1*/
  Block[86] = &MusicBrowser::`vftable'; /*0x475daf*/
  Block[87] = &MusicBrowser::`vftable'; /*0x475dbd*/
  v4 = qword_906070; /*0x475dc4*/
  if ( !qword_906070 ) /*0x475dce*/
  {
    v5 = operator new(0x3D0u); /*0x475dd5*/
    qword_906070 = sub_47C350(v5); /*0x475de2*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x475df3*/
    v4 = qword_906070; /*0x475df6*/
  }
  MusicDownloadManager_removeMusicDownloadDelegate(v4, (__int64)(Block + 83)); /*0x475e04*/
  v6 = (cocos2d::CCObject *)Block[89]; /*0x475e09*/
  if ( v6 ) /*0x475e13*/
    cocos2d::CCObject::release(v6); /*0x475e15*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x475e1e*/
  if ( (a2 & 1) != 0 ) /*0x475e28*/
    j_j_free(Block); /*0x475e32*/
  return Block; /*0x475e3a*/
}

// [5/16] Address: 0x475f50
// Method: MusicBrowser::create
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall MusicBrowser_create(unsigned int a1, unsigned int a2)
{
  _QWORD *v4; // rsi

  v4 = operator new(0x398u); /*0x475f72*/
  FLAlertLayer_FLAlertLayer(v4); /*0x475f7d*/
  *v4 = &MusicBrowser::`vftable'; /*0x475f89*/
  v4[40] = &MusicBrowser::`vftable'; /*0x475f93*/
  v4[41] = &MusicBrowser::`vftable'; /*0x475fa1*/
  v4[42] = &MusicBrowser::`vftable'; /*0x475faf*/
  v4[43] = &MusicBrowser::`vftable'; /*0x475fbd*/
  v4[44] = &MusicBrowser::`vftable'; /*0x475fcb*/
  v4[51] = &MusicBrowser::`vftable'; /*0x475fd9*/
  v4[54] = &MusicBrowser::`vftable'; /*0x475fe7*/
  v4[68] = &MusicBrowser::`vftable'; /*0x475ff5*/
  v4[83] = &MusicBrowser::`vftable'; /*0x476003*/
  v4[84] = &MusicBrowser::`vftable'; /*0x476011*/
  v4[85] = &MusicBrowser::`vftable'; /*0x47601f*/
  v4[86] = &MusicBrowser::`vftable'; /*0x47602d*/
  v4[87] = &MusicBrowser::`vftable'; /*0x47603b*/
  *((_DWORD *)v4 + 176) = -1; /*0x476042*/
  v4[89] = 0; /*0x47604e*/
  v4[90] = 0; /*0x476055*/
  v4[91] = 0; /*0x47605c*/
  v4[92] = 0; /*0x476063*/
  v4[93] = 0; /*0x47606a*/
  v4[94] = 0; /*0x476071*/
  v4[95] = 0; /*0x476078*/
  v4[96] = 0; /*0x47607f*/
  v4[97] = 0; /*0x476086*/
  v4[98] = 0; /*0x47608d*/
  v4[99] = 0; /*0x476094*/
  *((_BYTE *)v4 + 800) = 0; /*0x47609b*/
  v4[101] = 0; /*0x4760a2*/
  v4[102] = 0; /*0x4760a9*/
  v4[103] = 0; /*0x4760b0*/
  v4[104] = 0; /*0x4760b7*/
  v4[105] = 0; /*0x4760be*/
  v4[106] = 0; /*0x4760c5*/
  v4[107] = 0; /*0x4760cc*/
  *((_DWORD *)v4 + 217) = 0; /*0x4760d3*/
  *((_WORD *)v4 + 436) = 0; /*0x4760d9*/
  v4[110] = 0; /*0x4760e0*/
  v4[111] = 0; /*0x4760e7*/
  v4[112] = 0; /*0x4760ee*/
  v4[113] = 0; /*0x4760f5*/
  *((_BYTE *)v4 + 912) = 0; /*0x4760fc*/
  if ( (unsigned __int8)sub_476150(v4, a1, a2) ) /*0x47610b*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v4); /*0x476117*/
    return v4; /*0x47611d*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v4 + 8LL))(v4, 1); /*0x476131*/
    return 0; /*0x476134*/
  }
}

// [6/16] Address: 0x477900
// Method: MusicBrowser::update
// Hidden C++ exception states: #wind=3
__int64 __fastcall MusicBrowser_update(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int MusicTimeMS; // ebp
  __int64 v9; // rcx
  unsigned int MusicLengthMS; // r14d
  void (__fastcall **v11)(__int64, const char *); // rdi
  __int64 v12; // rbx
  cocos2d::CCString *v13; // rax
  const char *CString; // rax
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  void *v19; // [rsp+50h] [rbp+18h] BYREF
  __int16 v20; // [rsp+58h] [rbp+20h]

  v2 = qword_905F60; /*0x477915*/
  if ( !qword_905F60 ) /*0x47791f*/
  {
    v19 = operator new(0x8A8u); /*0x47792b*/
    qword_905F60 = sub_5AE20(v19); /*0x477939*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x47794a*/
    v2 = qword_905F60; /*0x47794c*/
  }
  if ( FMODAudioEngine_isMusicPlaying(v2, 0) ) /*0x477955*/
  {
    v4 = *(_QWORD *)(a1 + 888); /*0x477962*/
    if ( !*(_BYTE *)(v4 + 448) ) /*0x477969*/
    {
      *(_BYTE *)(v4 + 448) = 1; /*0x477972*/
      LOBYTE(v3) = 1; /*0x477983*/
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 408) + 920LL))(*(_QWORD *)(v4 + 408), v3); /*0x477985*/
      (**(void (__fastcall ***)(__int64, void *))(*(_QWORD *)(v4 + 416) + 320LL))( /*0x4779a3*/
        *(_QWORD *)(v4 + 416) + 320LL,
        &unk_6FD4B4);
      (**(void (__fastcall ***)(__int64, void *))(*(_QWORD *)(v4 + 424) + 320LL))( /*0x4779bd*/
        *(_QWORD *)(v4 + 424) + 320LL,
        &unk_6FD4B4);
      v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v4 + 408) + 456LL) + 952LL))(*(_QWORD *)(*(_QWORD *)(v4 + 408) + 456LL)); /*0x4779d0*/
      if ( v5 ) /*0x4779d9*/
        (**(void (__fastcall ***)(__int64, void *))(v5 + 320))(v5 + 320, &unk_6FD4B4); /*0x4779ec*/
    }
    LOBYTE(v3) = 1; /*0x4779f8*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 896) + 336LL))(*(_QWORD *)(a1 + 896), v3); /*0x4779fa*/
    LOBYTE(v6) = 1; /*0x477a0a*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 904) + 336LL))(*(_QWORD *)(a1 + 904), v6); /*0x477a0c*/
    v7 = qword_905F60; /*0x477a12*/
    if ( !qword_905F60 ) /*0x477a1c*/
    {
      v19 = operator new(0x8A8u); /*0x477a28*/
      qword_905F60 = sub_5AE20(v19); /*0x477a36*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x477a43*/
      v7 = qword_905F60; /*0x477a46*/
    }
    MusicTimeMS = FMODAudioEngine_getMusicTimeMS(v7); /*0x477a52*/
    v9 = qword_905F60; /*0x477a54*/
    if ( !qword_905F60 ) /*0x477a5e*/
    {
      v19 = operator new(0x8A8u); /*0x477a6a*/
      qword_905F60 = sub_5AE20(v19); /*0x477a78*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x477a89*/
      v9 = qword_905F60; /*0x477a8b*/
    }
    MusicLengthMS = FMODAudioEngine_getMusicLengthMS(v9); /*0x477a97*/
    v11 = *(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 896) + 360LL); /*0x477aa1*/
    v12 = *(_QWORD *)(a1 + 896); /*0x477aa8*/
    v13 = cocos2d::CCString::createWithFormat("%i/%is", MusicTimeMS / 0x3E8, MusicLengthMS / 0x3E8); /*0x477acb*/
    CString = cocos2d::CCString::getCString(v13); /*0x477ad4*/
    (*v11)(v12 + 360, CString); /*0x477ae4*/
    v15 = *(_QWORD *)(a1 + 888); /*0x477ae6*/
    result = *(_QWORD *)(v15 + 408); /*0x477aed*/
    if ( !*(_BYTE *)(result + 472) ) /*0x477af4*/
      return sub_83840(v15); /*0x477b15*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 896) + 336LL))(*(_QWORD *)(a1 + 896), 0); /*0x477b2b*/
    v17 = *(_QWORD *)(a1 + 888); /*0x477b31*/
    if ( *(_BYTE *)(v17 + 448) ) /*0x477b38*/
    {
      *(_BYTE *)(v17 + 448) = 0; /*0x477b45*/
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v17 + 408) + 920LL))(*(_QWORD *)(v17 + 408), 0); /*0x477b58*/
      sub_83840(v17); /*0x477b64*/
      v20 = -26986; /*0x477b69*/
      LOWORD(v19) = -26986; /*0x477b75*/
      BYTE2(v19) = -106; /*0x477b7a*/
      (**(void (__fastcall ***)(__int64, void **))(*(_QWORD *)(v17 + 416) + 320LL))( /*0x477b95*/
        *(_QWORD *)(v17 + 416) + 320LL,
        &v19);
      (**(void (__fastcall ***)(__int64, void **))(*(_QWORD *)(v17 + 424) + 320LL))( /*0x477bad*/
        *(_QWORD *)(v17 + 424) + 320LL,
        &v19);
      v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v17 + 408) + 456LL) + 952LL))(*(_QWORD *)(*(_QWORD *)(v17 + 408) + 456LL)); /*0x477bc0*/
      if ( v18 ) /*0x477bc9*/
        (**(void (__fastcall ***)(__int64, void **))(v18 + 320))(v18 + 320, &v19); /*0x477bda*/
    }
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 904) + 336LL))(*(_QWORD *)(a1 + 904), 0); /*0x477be8*/
  }
  return result; /*0x477bee*/
}

// [7/16] Address: 0x477f70
// Method: MusicBrowser::sliderEnded
// Hidden C++ exception states: #wind=3
char __fastcall MusicBrowser_sliderEnded(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  char result; // al
  float Value; // xmm6_4
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rcx
  void *v9; // [rsp+50h] [rbp+18h]
  void *v10; // [rsp+50h] [rbp+18h]
  void *v11; // [rsp+50h] [rbp+18h]

  v3 = qword_905F60; /*0x477f7e*/
  if ( !qword_905F60 ) /*0x477f88*/
  {
    v9 = operator new(0x8A8u); /*0x477f94*/
    qword_905F60 = sub_5AE20(v9); /*0x477fa2*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x477fb3*/
    v3 = qword_905F60; /*0x477fb5*/
  }
  result = FMODAudioEngine_isMusicPlaying(v3, 0); /*0x477fbe*/
  if ( result ) /*0x477fc5*/
  {
    Value = SliderThumb_getValue(*(_QWORD *)(*(_QWORD *)(a2 + 408) + 456LL)); /*0x477fde*/
    v6 = qword_905F60; /*0x477fe1*/
    if ( !qword_905F60 ) /*0x477feb*/
    {
      v10 = operator new(0x8A8u); /*0x477ff7*/
      qword_905F60 = sub_5AE20(v10); /*0x478005*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x478016*/
      v6 = qword_905F60; /*0x478018*/
    }
    v7 = (int)(float)((float)(int)FMODAudioEngine_getMusicLengthMS(v6) * Value); /*0x478032*/
    v8 = qword_905F60; /*0x478037*/
    if ( !qword_905F60 ) /*0x478041*/
    {
      v11 = operator new(0x8A8u); /*0x47804d*/
      qword_905F60 = sub_5AE20(v11); /*0x47805b*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x47806c*/
      v8 = qword_905F60; /*0x47806f*/
    }
    return FMODAudioEngine_setMusicTimeMS(v8, v7, 0, 0); /*0x47807e*/
  }
  return result; /*0x478083*/
}

// [8/16] Address: 0x478670
// Method: MusicBrowser::musicActionFinished
// Hidden C++ exception states: #wind=3
void __fastcall MusicBrowser_musicActionFinished(__int64 a1, int a2)
{
  cocos2d::CCObject *v3; // rcx
  void *v4; // [rsp+40h] [rbp+18h]

  if ( a2 == 2 && *(_BYTE *)(a1 + 208) ) /*0x47867e*/
  {
    *(_BYTE *)(a1 + 248) = 1; /*0x478687*/
    v3 = (cocos2d::CCObject *)qword_906070; /*0x47868e*/
    if ( !qword_906070 ) /*0x478698*/
    {
      v4 = operator new(0x3D0u); /*0x4786a4*/
      qword_906070 = sub_47C350(v4); /*0x4786b2*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x4786c3*/
      v3 = (cocos2d::CCObject *)qword_906070; /*0x4786c5*/
    }
    if ( *((_QWORD *)v3 + 48) ) /*0x4786cc*/
    {
      *(_BYTE *)(a1 + 208) = 0; /*0x4786e7*/
      sub_4884C0(); /*0x4786f3*/
    }
    else
    {
      *(_BYTE *)(a1 + 208) = 1; /*0x4786d6*/
      MusicDownloadManager_getCustomContentURL(v3); /*0x4786e2*/
    }
  }
  else
  {
    sub_478110(a1 - 664); /*0x478704*/
  }
}

// [9/16] Address: 0x478710
// Method: MusicBrowser::musicActionFailed
// Hidden C++ exception states: #wind=1
__int64 __fastcall MusicBrowser_musicActionFailed(__int64 a1, int a2)
{
  cocos2d::CCNode *v4; // rbx
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  __int128 v10; // [rsp+30h] [rbp-68h] BYREF
  __int64 v11; // [rsp+40h] [rbp-58h]
  __int64 v12; // [rsp+48h] [rbp-50h]
  __int128 v13; // [rsp+50h] [rbp-48h] BYREF
  __int64 v14; // [rsp+60h] [rbp-38h]
  __int64 v15; // [rsp+68h] [rbp-30h]

  v4 = *(cocos2d::CCNode **)(a1 + 192); /*0x478725*/
  cocos2d::CCNode::stopActionByTag(v4, 0); /*0x478731*/
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*((_QWORD *)v4 + 40) + 40LL))((_QWORD *)v4 + 40, 0); /*0x478743*/
  result = (*(__int64 (__fastcall **)(cocos2d::CCNode *, _QWORD))(*(_QWORD *)v4 + 336LL))(v4, 0); /*0x47874e*/
  if ( a2 == 6 && !*(_BYTE *)(a1 + 248) ) /*0x47875d*/
  {
    v10 = 0; /*0x47877a*/
    v11 = 0; /*0x478781*/
    v12 = 15; /*0x478786*/
    LOBYTE(v10) = 0; /*0x47878f*/
    v13 = 0; /*0x478793*/
    v14 = 0; /*0x478798*/
    v15 = 0; /*0x47879d*/
    *(_QWORD *)&v13 = sub_3C460(48); /*0x4787ac*/
    v14 = 36; /*0x4787b1*/
    v15 = 47; /*0x4787ba*/
    strcpy((char *)v13, "Music Library is the latest version."); /*0x4787ca*/
    v6 = *(_QWORD *)(a1 - 664); /*0x4787e5*/
    v9 = sub_3A4CA0(&v13, v7, v8, 150, &v10); /*0x478811*/
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v6 + 456))(a1 - 664, v9, 100); /*0x478826*/
  }
  return result; /*0x47882c*/
}

// [10/16] Address: 0x4790e0
// Method: MusicBrowser::cellPerformedAction
// Hidden C++ exception states: #wind=1
char __fastcall MusicBrowser_cellPerformedAction(__int64 a1, __int64 a2, int a3, int a4)
{
  _QWORD *v5; // rbp
  char *v6; // rbx
  __int64 v7; // rax
  char *v8; // rax
  char *v9; // rsi
  size_t v10; // rdi
  int *v11; // rbx
  int *v12; // rcx
  int v13; // edi
  _DWORD *v14; // rax
  void *v16; // [rsp+20h] [rbp-18h]
  int v17; // [rsp+50h] [rbp+18h] BYREF

  if ( a3 != 14 || a4 != 1 ) /*0x479105*/
    return 0; /*0x47925f*/
  *(_DWORD *)(a1 + 192) = *(_DWORD *)(*(_QWORD *)(a2 + 568) + 320LL); /*0x479118*/
  *(_BYTE *)(a1 + 201) = 1; /*0x47911e*/
  v5 = (_QWORD *)qword_906070; /*0x479125*/
  if ( !qword_906070 ) /*0x47912f*/
  {
    v16 = operator new(0x3D0u); /*0x47913b*/
    qword_906070 = sub_47C350(v16); /*0x479149*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x47915a*/
    v5 = (_QWORD *)qword_906070; /*0x47915c*/
  }
  v17 = *(_DWORD *)(a1 + 192); /*0x47916a*/
  if ( v17 > 0 ) /*0x479172*/
  {
    v6 = (char *)v5[109]; /*0x479178*/
    v7 = sub_672300(v5[108], v6); /*0x479189*/
    if ( (char *)v7 != v6 ) /*0x479191*/
    {
      v8 = (char *)sub_6723D0(v7, v6, (unsigned int)v17); /*0x47919e*/
      v9 = v8; /*0x4791a3*/
      if ( v8 != v6 ) /*0x4791a9*/
      {
        v10 = v5[109] - (_QWORD)v6; /*0x4791b2*/
        memmove(v8, v6, v10); /*0x4791be*/
        v5[109] = &v9[v10]; /*0x4791c7*/
      }
    }
    v11 = (int *)v5[108]; /*0x4791d5*/
    v12 = (int *)v5[109]; /*0x4791d8*/
    if ( v12 == (int *)v5[110] ) /*0x4791e0*/
    {
      sub_689C0(v5 + 108, v5[108], &v17); /*0x479226*/
    }
    else if ( v11 == v12 ) /*0x4791e5*/
    {
      *v12 = v17; /*0x4791eb*/
      v5[109] += 4LL; /*0x4791ed*/
    }
    else
    {
      v13 = v17; /*0x4791f4*/
      *v12 = *(v12 - 1); /*0x4791fb*/
      v5[109] += 4LL; /*0x4791fd*/
      memmove(v11 + 1, v11, (char *)v12 - (char *)v11 - 4); /*0x479212*/
      *v11 = v13; /*0x479217*/
    }
    if ( (int)((__int64)(v5[109] - v5[108]) >> 2) > 20 ) /*0x479239*/
      sub_82220(v5 + 108, 20); /*0x479243*/
    v14 = (_DWORD *)sub_10C920(v5 + 113, &v17); /*0x479254*/
    ++*v14; /*0x479259*/
  }
  return 1; /*0x479261*/
}

// [11/16] Address: 0x479280
// Method: MusicBrowser::getSelectedCellIdx
__int64 __fastcall MusicBrowser_getSelectedCellIdx(__int64 a1)
{
  return *(unsigned int *)(a1 + 192); /*0x479286*/
}

// [12/16] Address: 0x479290
// Method: MusicBrowser::onPage
void __fastcall MusicBrowser_onPage(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned int v5; // eax
  int v6; // ebp
  int v7; // ebx
  int v8; // eax
  int v9; // ecx
  int v10; // edx

  v4 = *(_QWORD *)(a1 + 712); /*0x4792a0*/
  if ( v4 ) /*0x4792aa*/
  {
    v5 = cocos2d::CCArray::count(*(cocos2d::CCArray **)(v4 + 64)); /*0x4792be*/
    v6 = (int)ceilf((float)(v5 / 0xA)); /*0x4792eb*/
    v7 = *(_DWORD *)(*(_QWORD *)(a1 + 712) + 96LL); /*0x4792ef*/
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x4792f5*/
    v9 = 1; /*0x4792f8*/
    if ( v8 != 1 ) /*0x479304*/
      v9 = -1; /*0x479304*/
    v10 = v9 + v7; /*0x479307*/
    if ( v9 + v7 >= 0 && v10 <= v6 ) /*0x479315*/
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 712) + 96LL) = v10; /*0x479321*/
      sub_478840(a1, *(_QWORD *)(a1 + 712)); /*0x47932b*/
    }
  }
}

// [13/16] Address: 0x479590
// Method: MusicBrowser::textChanged
// Hidden C++ exception states: #wind=1
void __fastcall MusicBrowser_textChanged(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // r8
  void **v6; // rsi
  const void *v7; // rdx
  void **v8; // rcx
  void **v9; // rbx
  unsigned __int64 v10; // rbp
  size_t v11; // r14
  void **v12; // rdx
  void **v13; // rax
  void *Buf1[2]; // [rsp+38h] [rbp-50h] BYREF
  size_t Size; // [rsp+48h] [rbp-40h]
  unsigned __int64 v16; // [rsp+50h] [rbp-38h]

  if ( *(_BYTE *)(a1 + 256) ) /*0x4795bb*/
  {
    v3 = *(_QWORD *)(a1 + 232); /*0x4795c8*/
    if ( a2 == v3 ) /*0x4795d2*/
    {
      if ( *(_QWORD *)(a1 + 168) ) /*0x4795d8*/
      {
        v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v3 + 600) + 600LL) + 8LL))(*(_QWORD *)(v3 + 600) + 600LL); /*0x4795f6*/
        *(_OWORD *)Buf1 = 0; /*0x4795fc*/
        Size = 0; /*0x479601*/
        v16 = 0; /*0x479606*/
        v5 = -1; /*0x47960b*/
        do /*0x479615*/
          ++v5; /*0x479612*/
        while ( *(_BYTE *)(v4 + v5) ); /*0x479615*/
        sub_3C230(Buf1); /*0x479623*/
        v6 = (void **)(*(_QWORD *)(a1 + 168) + 104LL); /*0x479630*/
        v7 = v6; /*0x479634*/
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 168) + 128LL) > 0xFu ) /*0x47963c*/
          v7 = *v6; /*0x47963e*/
        v8 = Buf1; /*0x479641*/
        v9 = (void **)Buf1[0]; /*0x479646*/
        v10 = v16; /*0x47964b*/
        if ( v16 > 0xF ) /*0x479654*/
          v8 = (void **)Buf1[0]; /*0x479654*/
        v11 = Size; /*0x479658*/
        if ( Size != *(_QWORD *)(*(_QWORD *)(a1 + 168) + 120LL) || Size && memcmp(v8, v7, Size) ) /*0x47966b*/
        {
          if ( v6 != Buf1 ) /*0x47967c*/
          {
            v12 = Buf1; /*0x47967e*/
            if ( v10 > 0xF ) /*0x479687*/
              v12 = v9; /*0x479687*/
            sub_3F5A0(v6, v12, v11); /*0x479691*/
            v10 = v16; /*0x479696*/
            v9 = (void **)Buf1[0]; /*0x47969b*/
          }
          *(_DWORD *)(*(_QWORD *)(a1 + 168) + 96LL) = 0; /*0x4796a7*/
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 168) + 72LL))( /*0x4796bb*/
            *(_QWORD *)(a1 + 168),
            *(unsigned int *)(*(_QWORD *)(a1 + 168) + 136LL));
          sub_478840(a1 - 544, *(_QWORD *)(a1 + 168)); /*0x4796cc*/
        }
        if ( v10 > 0xF ) /*0x4796d6*/
        {
          v13 = v9; /*0x4796dc*/
          if ( v10 + 1 >= 0x1000 ) /*0x4796e6*/
          {
            v9 = (void **)*(v9 - 1); /*0x4796ec*/
            if ( (unsigned __int64)((char *)v13 - (char *)v9 - 8) > 0x1F ) /*0x4796fb*/
              invoke_watson(0, 0, 0, 0, 0); /*0x47970c*/
          }
          j_j_free(v9); /*0x479716*/
        }
      }
    }
  }
}

// [14/16] Address: 0x479d50
// Method: MusicBrowser::sortSelectClosed
__int64 __fastcall MusicBrowser_sortSelectClosed(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rcx
  __int64 result; // rax

  v3 = *(_DWORD **)(a1 + 16); /*0x479d5d*/
  if ( v3 ) /*0x479d64*/
  {
    if ( v3[34] != *(_DWORD *)(a2 + 664) ) /*0x479d72*/
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v3 + 72LL))(v3); /*0x479d77*/
      *(_DWORD *)(*(_QWORD *)(a1 + 16) + 96LL) = 0; /*0x479d85*/
      return sub_478840(a1 - 696, *(_QWORD *)(a1 + 16)); /*0x479d90*/
    }
  }
  return result; /*0x479d95*/
}

// [15/16] Address: 0x479da0
// Method: MusicBrowser::FLAlert_Clicked
__int64 __fastcall MusicBrowser_FLAlert_Clicked(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) /*0x479dc9*/
    || (result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2), (_DWORD)result == 1) )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + 96LL) = 0; /*0x479dd6*/
    return sub_478840(a1 - 680, *(_QWORD *)(a1 + 32)); /*0x479de1*/
  }
  return result; /*0x479de6*/
}

// [16/16] Address: 0x47a160
// Method: MusicBrowser::keyBackClicked
__int64 __fastcall MusicBrowser_keyBackClicked(__int64 a1)
{
  return sub_479E00(a1 - 336, 0);
}
