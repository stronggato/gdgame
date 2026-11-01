#include <Geode/binding/FriendRequestPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/7] Address: 0x3959c0
// Method: FriendRequestPopup::~FriendRequestPopup
// Hidden C++ exception states: #wind=1
char *__fastcall FriendRequestPopup__dtor_FriendRequestPopup(char *Block, char a2)
{
  char *v4; // rdi
  __int64 v5; // rax
  void *v6; // rax
  cocos2d::CCObject *v7; // rcx

  *(_QWORD *)Block = &FriendRequestPopup::`vftable'; /*0x3959db*/
  *((_QWORD *)Block + 40) = &FriendRequestPopup::`vftable'; /*0x3959e5*/
  *((_QWORD *)Block + 41) = &FriendRequestPopup::`vftable'; /*0x3959f3*/
  *((_QWORD *)Block + 42) = &FriendRequestPopup::`vftable'; /*0x395a01*/
  *((_QWORD *)Block + 43) = &FriendRequestPopup::`vftable'; /*0x395a0f*/
  *((_QWORD *)Block + 44) = &FriendRequestPopup::`vftable'; /*0x395a1d*/
  *((_QWORD *)Block + 51) = &FriendRequestPopup::`vftable'; /*0x395a2b*/
  *((_QWORD *)Block + 54) = &FriendRequestPopup::`vftable'; /*0x395a39*/
  *((_QWORD *)Block + 68) = &FriendRequestPopup::`vftable'; /*0x395a47*/
  v4 = Block + 664; /*0x395a4e*/
  *((_QWORD *)Block + 83) = &FriendRequestPopup::`vftable'; /*0x395a5c*/
  *((_QWORD *)Block + 84) = &FriendRequestPopup::`vftable'; /*0x395a66*/
  *((_QWORD *)Block + 85) = &FriendRequestPopup::`vftable'; /*0x395a74*/
  v5 = *(_QWORD *)&qword_905FB0; /*0x395a7b*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x395a85*/
  {
    v6 = operator new(0x690u); /*0x395a8c*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v6); /*0x395a99*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x395aaa*/
    v5 = *(_QWORD *)&qword_905FB0; /*0x395aac*/
  }
  if ( *(char **)(v5 + 1488) == v4 ) /*0x395aba*/
    *(_QWORD *)(v5 + 1488) = 0; /*0x395abc*/
  v7 = (cocos2d::CCObject *)*((_QWORD *)Block + 87); /*0x395ac7*/
  if ( v7 ) /*0x395ad1*/
    cocos2d::CCObject::release(v7); /*0x395ad3*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x395adc*/
  if ( (a2 & 1) != 0 ) /*0x395ae6*/
    j_j_free(Block); /*0x395af0*/
  return Block; /*0x395af8*/
}

// [2/7] Address: 0x39f440
// Method: FriendRequestPopup::keyBackClicked
__int64 __fastcall FriendRequestPopup_keyBackClicked(__int64 a1)
{
  return sub_39EDE0(a1 - 336, 0);
}

// [3/7] Address: 0x39f450
// Method: FriendRequestPopup::uploadActionFinished
// Hidden C++ exception states: #wind=1
void __fastcall FriendRequestPopup_uploadActionFinished(__int64 a1, int a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // xmm0_8
  __int64 v6; // r8
  void *v7; // rcx
  __int128 v8; // [rsp+30h] [rbp-50h] BYREF
  __int64 v9; // [rsp+40h] [rbp-40h]
  __int64 v10; // [rsp+48h] [rbp-38h]
  void *Block[2]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v12; // [rsp+68h] [rbp-18h]
  unsigned __int64 v13; // [rsp+70h] [rbp-10h]

  v4 = *(_QWORD *)(a1 + 32); /*0x39f471*/
  if ( !v4 || *(_DWORD *)(v4 + 320) != a2 && *(_DWORD *)(v4 + 324) != a2 ) /*0x39f48c*/
    return; /*0x39f48c*/
  *(_BYTE *)(a1 + 24) = 1; /*0x39f492*/
  if ( !*(_QWORD *)(a1 + 56) ) /*0x39f496*/
    return; /*0x39f49b*/
  v12 = 14; /*0x39f4a8*/
  v13 = 15; /*0x39f4b5*/
  strcpy((char *)Block, "Unknown action"); /*0x39f4c1*/
  HIBYTE(Block[1]) = 0; /*0x39f4cc*/
  switch ( a3 ) /*0x39f4e2*/
  {
    case '$': /*0x39f4e2*/
      v12 = 15; /*0x39f4e4*/
      v5 = 0x2074736575716552LL; /*0x39f4e8*/
      Block[1] = (void *)0x6465766F6D6572LL; /*0x39f4f6*/
LABEL_12:
      Block[0] = (void *)v5; /*0x39f561*/
      break; /*0x39f561*/
    case '%': /*0x39f4e2*/
      v5 = 0x6120646E65697246LL; /*0x39f51a*/
      LODWORD(Block[1]) = 1684366436; /*0x39f528*/
LABEL_11:
      WORD2(Block[1]) = 33; /*0x39f552*/
      v12 = 13; /*0x39f559*/
      goto LABEL_12; /*0x39f559*/
    case '(': /*0x39f4e2*/
      v5 = 0x6F6C622072657355LL; /*0x39f53a*/
      LODWORD(Block[1]) = 1684368227; /*0x39f548*/
      goto LABEL_11; /*0x39f548*/
  }
  v8 = 0; /*0x39f566*/
  v9 = 0; /*0x39f571*/
  v10 = 0; /*0x39f579*/
  v6 = -1; /*0x39f581*/
  do /*0x39f593*/
    ++v6; /*0x39f590*/
  while ( *((_BYTE *)Block + v6) ); /*0x39f593*/
  sub_3C230(&v8); /*0x39f59e*/
  UploadActionPopup_showSuccessMessage(*(_QWORD *)(a1 + 56), &v8); /*0x39f5ab*/
  if ( v13 > 0xF ) /*0x39f5b9*/
  {
    v7 = Block[0]; /*0x39f5be*/
    if ( v13 + 1 >= 0x1000 ) /*0x39f5cc*/
    {
      v7 = (void *)*((_QWORD *)Block[0] - 1); /*0x39f5d2*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v7 - 8) > 0x1F ) /*0x39f5e1*/
        invoke_watson(0, 0, 0, 0, 0); /*0x39f5f6*/
    }
    j_j_free(v7); /*0x39f5fd*/
  }
}

// [4/7] Address: 0x39f620
// Method: FriendRequestPopup::uploadActionFailed
__int64 __fastcall FriendRequestPopup_uploadActionFailed(__int64 a1, int a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]
  __int64 v6; // [rsp+38h] [rbp-10h]

  result = *(_QWORD *)(a1 + 32); /*0x39f626*/
  if ( result && (*(_DWORD *)(result + 320) == a2 || *(_DWORD *)(result + 324) == a2) ) /*0x39f644*/
  {
    if ( *(_QWORD *)(a1 + 56) ) /*0x39f64a*/
    {
      v4 = 0; /*0x39f66f*/
      *(_QWORD *)&v4 = sub_3C460(32); /*0x39f680*/
      v5 = 31; /*0x39f688*/
      v6 = 31; /*0x39f691*/
      strcpy((char *)v4, "Failed. Please try again later."); /*0x39f69a*/
      result = sub_39D9F0(*(_QWORD *)(a1 + 56), &v4); /*0x39f6d5*/
      if ( (_BYTE)result ) /*0x39f6dc*/
        *(_QWORD *)(a1 + 56) = 0; /*0x39f6de*/
    }
  }
  return result; /*0x39f6e6*/
}

// [5/7] Address: 0x39f6f0
// Method: FriendRequestPopup::onClosePopup
__int64 __fastcall FriendRequestPopup_onClosePopup(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 result; // rax
  bool v6; // zf

  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 992LL))(a2, 0); /*0x39f708*/
  LOBYTE(v4) = 1; /*0x39f711*/
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 520LL))(a2, v4); /*0x39f716*/
  if ( a2 == *(_QWORD *)(a1 + 48) ) /*0x39f727*/
  {
    v6 = *(_BYTE *)(a1 + 16) == 0; /*0x39f729*/
    *(_QWORD *)(a1 + 48) = 0; /*0x39f72d*/
    if ( !v6 ) /*0x39f735*/
      return sub_39EDE0(a1 - 672, 0); /*0x39f739*/
  }
  return result; /*0x39f73e*/
}

// [6/7] Address: 0x39f750
// Method: FriendRequestPopup::FLAlert_Clicked
// Hidden C++ exception states: #wind=1
void __fastcall FriendRequestPopup_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+38h] [rbp-10h]
  void *v10; // [rsp+68h] [rbp+20h]

  if ( a3 ) /*0x39f753*/
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 1 ) /*0x39f775*/
    {
      v5 = *(_QWORD *)&qword_905FB0; /*0x39f77b*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x39f785*/
      {
        v10 = operator new(0x690u); /*0x39f791*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v10); /*0x39f79f*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x39f7b0*/
        v5 = *(_QWORD *)&qword_905FB0; /*0x39f7b2*/
      }
      if ( (unsigned __int8)sub_253000(v5, *(unsigned int *)(*(_QWORD *)(a1 + 16) + 324LL)) ) /*0x39f7c3*/
      {
        v7 = 0; /*0x39f7d3*/
        *(_QWORD *)&v7 = sub_3C460(32); /*0x39f7ee*/
        v8 = 16; /*0x39f7f3*/
        v9 = 31; /*0x39f7fc*/
        strcpy((char *)v7, "Blocking user..."); /*0x39f80c*/
        v6 = sub_39D2A0(a1 - 8, &v7); /*0x39f81c*/
        *(_QWORD *)(a1 + 40) = v6; /*0x39f821*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 1064LL))(v6); /*0x39f83c*/
      }
    }
    else if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 2 ) /*0x39f84b*/
    {
      sub_39F070(a1 - 680, 0); /*0x39f856*/
    }
  }
}
