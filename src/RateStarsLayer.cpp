#include <Geode/binding/RateStarsLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/8] Address: 0xe9980
// Method: RateStarsLayer::create
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall RateStarsLayer_create(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  _QWORD *v6; // r14

  v6 = operator new(0x378u); /*0xe99a6*/
  PlayLayer_PlayLayer((__int64)v6); /*0xe99b1*/
  *v6 = &MemberListPopup::`vftable'; /*0xe99bd*/
  v6[40] = &MemberListPopup::`vftable'; /*0xe99c7*/
  v6[41] = &MemberListPopup::`vftable'; /*0xe99d5*/
  v6[42] = &MemberListPopup::`vftable'; /*0xe99e3*/
  v6[43] = &MemberListPopup::`vftable'; /*0xe99f1*/
  v6[44] = &MemberListPopup::`vftable'; /*0xe99ff*/
  v6[51] = &MemberListPopup::`vftable'; /*0xe9a0d*/
  v6[54] = &MemberListPopup::`vftable'; /*0xe9a1b*/
  v6[68] = &MemberListPopup::`vftable'; /*0xe9a29*/
  v6[97] = &MemberListPopup::`vftable'; /*0xe9a37*/
  v6[98] = &MemberListPopup::`vftable'; /*0xe9a45*/
  v6[99] = &MemberListPopup::`vftable'; /*0xe9a53*/
  v6[100] = 0; /*0xe9a5c*/
  v6[101] = 0; /*0xe9a63*/
  *((_BYTE *)v6 + 816) = 0; /*0xe9a6a*/
  v6[103] = 0; /*0xe9a71*/
  v6[104] = 0; /*0xe9a78*/
  v6[105] = 0; /*0xe9a7f*/
  *((_BYTE *)v6 + 848) = 0; /*0xe9a86*/
  v6[107] = 0; /*0xe9a8d*/
  *((_BYTE *)v6 + 864) = 0; /*0xe9a94*/
  *(_QWORD *)((char *)v6 + 868) = 0; /*0xe9a9b*/
  *((_DWORD *)v6 + 219) = 0; /*0xe9aa2*/
  *((_BYTE *)v6 + 880) = 0; /*0xe9aa9*/
  if ( (unsigned __int8)sub_E9B00(v6, a1, a2, a3) ) /*0xe9abd*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v6); /*0xe9ac9*/
    return v6; /*0xe9acf*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v6 + 8LL))(v6, 1); /*0xe9ae3*/
    return 0; /*0xe9ae6*/
  }
}

// [2/8] Address: 0x559650
// Method: RateStarsLayer::~RateStarsLayer
char *__fastcall RateStarsLayer__dtor_RateStarsLayer(char *Block, char a2)
{
  char *v4; // rdi
  __int64 v5; // rax
  void *v6; // rax
  cocos2d::CCObject *v7; // rcx

  *(_QWORD *)Block = &RateStarsLayer::`vftable'; /*0x55966b*/
  *((_QWORD *)Block + 40) = &RateStarsLayer::`vftable'; /*0x559675*/
  *((_QWORD *)Block + 41) = &RateStarsLayer::`vftable'; /*0x559683*/
  *((_QWORD *)Block + 42) = &RateStarsLayer::`vftable'; /*0x559691*/
  *((_QWORD *)Block + 43) = &RateStarsLayer::`vftable'; /*0x55969f*/
  *((_QWORD *)Block + 44) = &RateStarsLayer::`vftable'; /*0x5596ad*/
  *((_QWORD *)Block + 51) = &RateStarsLayer::`vftable'; /*0x5596bb*/
  *((_QWORD *)Block + 54) = &RateStarsLayer::`vftable'; /*0x5596c9*/
  *((_QWORD *)Block + 68) = &RateStarsLayer::`vftable'; /*0x5596d7*/
  *((_QWORD *)Block + 83) = &RateStarsLayer::`vftable'; /*0x5596e5*/
  v4 = Block + 672; /*0x5596ec*/
  *((_QWORD *)Block + 84) = &RateStarsLayer::`vftable'; /*0x5596fa*/
  v5 = *(_QWORD *)&qword_905FB0; /*0x5596fd*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x559707*/
  {
    v6 = operator new(0x690u); /*0x55970e*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v6); /*0x55971b*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x55972c*/
    v5 = *(_QWORD *)&qword_905FB0; /*0x55972e*/
  }
  if ( *(char **)(v5 + 1488) == v4 ) /*0x55973c*/
    *(_QWORD *)(v5 + 1488) = 0; /*0x55973e*/
  v7 = (cocos2d::CCObject *)*((_QWORD *)Block + 87); /*0x559749*/
  if ( v7 ) /*0x559753*/
    cocos2d::CCObject::release(v7); /*0x559755*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x55975e*/
  if ( (a2 & 1) != 0 ) /*0x559768*/
    j_j_free(Block); /*0x559772*/
  return Block; /*0x55977a*/
}

// [4/8] Address: 0x559f70
// Method: RateStarsLayer::onFeature
double __fastcall RateStarsLayer_onFeature(__int64 a1)
{
  int v1; // r8d
  __int64 v2; // rdx

  v1 = *(_DWORD *)(a1 + 744); /*0x559f70*/
  v2 = 0; /*0x559f77*/
  if ( v1 < 4 ) /*0x559f81*/
    v2 = (unsigned int)(v1 + 1); /*0x559f81*/
  *(_DWORD *)(a1 + 744) = v2; /*0x559f84*/
  return GauntletSelectLayer_playUnlockAnimation(*(_QWORD *)(a1 + 736), v2);
}

// [5/8] Address: 0x55a3b0
// Method: RateStarsLayer::uploadActionFinished
void __fastcall RateStarsLayer_uploadActionFinished(__int64 a1, int a2)
{
  bool v3; // zf
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]
  __int64 v6; // [rsp+38h] [rbp-10h]

  if ( a2 == *(_DWORD *)(a1 + 32) ) /*0x55a3bc*/
  {
    v3 = *(_QWORD *)(a1 + 56) == 0; /*0x55a3be*/
    *(_BYTE *)(a1 + 8) = 1; /*0x55a3c3*/
    if ( !v3 ) /*0x55a3c7*/
    {
      v4 = 0; /*0x55a3d8*/
      *(_QWORD *)&v4 = sub_3C460(32); /*0x55a3ee*/
      v5 = 17; /*0x55a3f8*/
      v6 = 31; /*0x55a401*/
      strcpy((char *)v4, "Rating submitted!"); /*0x55a40a*/
      UploadActionPopup_showSuccessMessage(*(_QWORD *)(a1 + 56), &v4); /*0x55a41f*/
    }
  }
}

// [6/8] Address: 0x55a430
// Method: RateStarsLayer::uploadActionFailed
void __fastcall RateStarsLayer_uploadActionFailed(__int64 a1, int a2)
{
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]
  __int64 v5; // [rsp+38h] [rbp-10h]

  if ( a2 == *(_DWORD *)(a1 + 32) ) /*0x55a43c*/
  {
    if ( *(_QWORD *)(a1 + 56) ) /*0x55a442*/
    {
      v3 = 0; /*0x55a466*/
      *(_QWORD *)&v3 = sub_3C460(32); /*0x55a477*/
      v4 = 31; /*0x55a47f*/
      v5 = 31; /*0x55a488*/
      strcpy((char *)v3, "Failed. Please try again later."); /*0x55a491*/
      UploadActionPopup_showFailMessage(*(_QWORD *)(a1 + 56), &v3); /*0x55a4cc*/
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 664LL) = 0; /*0x55a4d5*/
      *(_QWORD *)(a1 + 56) = 0; /*0x55a4dc*/
    }
  }
}

// [7/8] Address: 0x55a4f0
// Method: RateStarsLayer::onClosePopup
__int64 __fastcall RateStarsLayer_onClosePopup(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 result; // rax
  bool v6; // zf
  __int64 v7; // rdx
  __int64 (__fastcall ***v8)(_QWORD); // rcx

  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 992LL))(a2, 0); /*0x55a508*/
  LOBYTE(v4) = 1; /*0x55a511*/
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 520LL))(a2, v4); /*0x55a516*/
  v6 = *(_BYTE *)(a1 + 16) == 0; /*0x55a51c*/
  *(_QWORD *)(a1 + 64) = 0; /*0x55a520*/
  if ( !v6 ) /*0x55a528*/
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 664) + 992LL))(a1 - 664, 0); /*0x55a53a*/
    LOBYTE(v7) = 1; /*0x55a54e*/
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 - 664) + 520LL))(a1 - 664, v7); /*0x55a550*/
    v8 = *(__int64 (__fastcall ****)(_QWORD))(a1 + 88); /*0x55a556*/
    if ( v8 ) /*0x55a55d*/
      return (**v8)(v8); /*0x55a562*/
  }
  return result; /*0x55a564*/
}

// [8/8] Address: 0x55a5b0
// Method: RateStarsLayer::keyBackClicked
__int64 __fastcall RateStarsLayer_keyBackClicked(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 (__fastcall ***v4)(_QWORD); // rcx

  v1 = (_QWORD *)(a1 - 336); /*0x55a5b6*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 336) + 992LL))(a1 - 336, 0); /*0x55a5c5*/
  LOBYTE(v2) = 1; /*0x55a5ce*/
  result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v1 + 520LL))(v1, v2); /*0x55a5d3*/
  v4 = (__int64 (__fastcall ***)(_QWORD))v1[94]; /*0x55a5d9*/
  if ( v4 ) /*0x55a5e3*/
    return (**v4)(v4); /*0x55a5ed*/
  return result; /*0x55a5f0*/
}
