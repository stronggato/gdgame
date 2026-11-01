#include <Geode/binding/CreatorSettingsPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x444950
// Method: CreatorSettingsPopup::~CreatorSettingsPopup
// Hidden C++ exception states: #wind=1
char *__fastcall CreatorSettingsPopup__dtor_CreatorSettingsPopup(char *Block, char a2)
{
  char *v4; // rdi
  __int64 v5; // rax
  void *v6; // rax
  __int64 v7; // rax

  *(_QWORD *)Block = &CreatorSettingsPopup::`vftable'; /*0x44496b*/
  *((_QWORD *)Block + 40) = &CreatorSettingsPopup::`vftable'; /*0x444975*/
  *((_QWORD *)Block + 41) = &CreatorSettingsPopup::`vftable'; /*0x444983*/
  *((_QWORD *)Block + 42) = &CreatorSettingsPopup::`vftable'; /*0x444991*/
  *((_QWORD *)Block + 43) = &CreatorSettingsPopup::`vftable'; /*0x44499f*/
  *((_QWORD *)Block + 44) = &CreatorSettingsPopup::`vftable'; /*0x4449ad*/
  *((_QWORD *)Block + 51) = &CreatorSettingsPopup::`vftable'; /*0x4449bb*/
  *((_QWORD *)Block + 54) = &CreatorSettingsPopup::`vftable'; /*0x4449c9*/
  *((_QWORD *)Block + 68) = &CreatorSettingsPopup::`vftable'; /*0x4449d7*/
  *((_QWORD *)Block + 83) = &CreatorSettingsPopup::`vftable'; /*0x4449e5*/
  *((_QWORD *)Block + 84) = &CreatorSettingsPopup::`vftable'; /*0x4449f3*/
  v4 = Block + 1000; /*0x4449fa*/
  *((_QWORD *)Block + 125) = &CreatorSettingsPopup::`vftable'; /*0x444a08*/
  *((_QWORD *)Block + 126) = &CreatorSettingsPopup::`vftable'; /*0x444a12*/
  *((_QWORD *)Block + 127) = &CreatorSettingsPopup::`vftable'; /*0x444a20*/
  v5 = *(_QWORD *)&qword_905FB0; /*0x444a27*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x444a31*/
  {
    v6 = operator new(0x690u); /*0x444a38*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v6); /*0x444a45*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x444a56*/
    v5 = *(_QWORD *)&qword_905FB0; /*0x444a58*/
  }
  if ( *(char **)(v5 + 1488) == v4 ) /*0x444a68*/
    *(_QWORD *)(v5 + 1488) = 0; /*0x444a6a*/
  v7 = *((_QWORD *)Block + 130); /*0x444a71*/
  if ( v7 ) /*0x444a7b*/
    *(_QWORD *)(v7 + 664) = 0; /*0x444a7d*/
  UIPOptionsLayer__dtor_UIPOptionsLayer((cocos2d::CCNode *)Block); /*0x444a87*/
  if ( (a2 & 1) != 0 ) /*0x444a91*/
    j_j_free(Block); /*0x444a9b*/
  return Block; /*0x444aa3*/
}

// [2/5] Address: 0x444e10
// Method: CreatorSettingsPopup::setTextPopupClosed
// Hidden C++ exception states: #wind=4
double __fastcall CreatorSettingsPopup_setTextPopupClosed(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  void **v7; // rcx
  void **v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rax
  void *v18; // [rsp+20h] [rbp-60h]
  void *Src[2]; // [rsp+28h] [rbp-58h] BYREF
  size_t Size[2]; // [rsp+38h] [rbp-48h]
  __int128 v21; // [rsp+48h] [rbp-38h] BYREF
  __int64 v22; // [rsp+58h] [rbp-28h]
  __int64 v23; // [rsp+60h] [rbp-20h]
  void *v24; // [rsp+68h] [rbp-18h]
  __int64 v25; // [rsp+70h] [rbp-10h]

  v25 = a3; /*0x444e3a*/
  if ( !a2 || !*(_BYTE *)(a2 + 681) ) /*0x444e46*/
  {
    v5 = sub_3E4F0(&v21, a3); /*0x444e5a*/
    v6 = v5; /*0x444e5f*/
    if ( *(_QWORD *)(v5 + 16) ) /*0x444e66*/
    {
      cocos2d::ZipUtils::base64URLEncode(Src, v5); /*0x444ea3*/
    }
    else
    {
      *(_OWORD *)Src = 0; /*0x444e70*/
      Size[0] = 0; /*0x444e74*/
      Size[1] = 0; /*0x444e78*/
      *(_OWORD *)Src = *(_OWORD *)v5; /*0x444e7f*/
      *(_OWORD *)Size = *(_OWORD *)(v5 + 16); /*0x444e87*/
      *(_QWORD *)(v5 + 16) = 0; /*0x444e8b*/
      *(_QWORD *)(v5 + 24) = 15; /*0x444e8f*/
      *(_BYTE *)v5 = 0; /*0x444e97*/
    }
    sub_3C310(v6); /*0x444ead*/
    v7 = (void **)(a1[1] + 376LL); /*0x444ebe*/
    if ( v7 != Src ) /*0x444ecc*/
    {
      v8 = Src; /*0x444ece*/
      if ( Size[1] > 0xF ) /*0x444ed7*/
        v8 = (void **)Src[0]; /*0x444ed7*/
      sub_3F5A0(v7, v8, Size[0]); /*0x444ee0*/
    }
    sub_3C310(Src); /*0x444eea*/
    v9 = a1[2]; /*0x444eef*/
    if ( v9 ) /*0x444ef6*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 8LL))(v9, a3); /*0x444efe*/
    if ( *(_DWORD *)(a1[1] + 328LL) - *(_DWORD *)(a1[1] + 332LL) > 0 ) /*0x444f13*/
    {
      v10 = a1 - 2; /*0x444f20*/
      if ( a1 == (_QWORD *)((char *)&loc_3F3 + 5) ) /*0x444f27*/
        v10 = 0; /*0x444f27*/
      v11 = *(_QWORD *)&qword_905FB0; /*0x444f2b*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x444f35*/
      {
        v18 = operator new(0x690u); /*0x444f41*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v18); /*0x444f4e*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x444f5f*/
        v11 = *(_QWORD *)&qword_905FB0; /*0x444f61*/
      }
      *(_QWORD *)(v11 + 1488) = v10; /*0x444f68*/
      sub_3E4F0(&v21, a1[1] + 376LL); /*0x444f86*/
      v12 = *(_DWORD *)(a1[1] + 328LL) - *(_DWORD *)(a1[1] + 332LL); /*0x444f96*/
      v13 = *(_QWORD *)&qword_905FB0; /*0x444f9c*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x444fa6*/
      {
        v24 = operator new(0x690u); /*0x444fb2*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v24); /*0x444fbf*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x444fd0*/
        v13 = *(_QWORD *)&qword_905FB0; /*0x444fd3*/
      }
      if ( (unsigned __int8)sub_2552A0(v13, v12, &v21) ) /*0x444fe0*/
      {
        v14 = a1[3]; /*0x444fed*/
        if ( v14 ) /*0x444ff4*/
        {
          *(_QWORD *)(v14 + 664) = 0; /*0x444ff6*/
          a1[3] = 0; /*0x444ffd*/
        }
        v21 = 0; /*0x445004*/
        v22 = 0; /*0x445008*/
        v23 = 0; /*0x44500c*/
        *(_QWORD *)&v21 = sub_3C460(32); /*0x44501a*/
        v22 = 23; /*0x44501e*/
        v23 = 31; /*0x445026*/
        strcpy((char *)v21, "Updating description..."); /*0x445035*/
        v15 = a1 - 1; /*0x44505a*/
        if ( a1 == (_QWORD *)((char *)&loc_3F3 + 5) ) /*0x445061*/
          v15 = 0; /*0x445061*/
        v16 = sub_39D2A0(v15, &v21); /*0x445069*/
        a1[3] = v16; /*0x44506e*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 1064LL))(v16); /*0x445078*/
      }
    }
  }
  return sub_3C310(a3); /*0x445087*/
}

// [3/5] Address: 0x4450b0
// Method: CreatorSettingsPopup::uploadActionFinished
void __fastcall CreatorSettingsPopup_uploadActionFinished(__int64 a1, int a2, int a3)
{
  __int64 v3; // r8
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  __int64 v7; // [rsp+38h] [rbp-10h]

  if ( a3 == 27 ) /*0x4450b4*/
  {
    v3 = *(_QWORD *)(a1 + 24); /*0x4450bf*/
    if ( v3 ) /*0x4450c9*/
    {
      if ( *(_DWORD *)(v3 + 328) - *(_DWORD *)(v3 + 332) == a2 ) /*0x4450df*/
      {
        if ( *(_QWORD *)(a1 + 40) ) /*0x4450e1*/
        {
          v5 = 0; /*0x445101*/
          *(_QWORD *)&v5 = sub_3C460(32); /*0x445112*/
          v6 = 20; /*0x44511c*/
          v7 = 31; /*0x445125*/
          strcpy((char *)v5, "Description updated!"); /*0x44512e*/
          UploadActionPopup_showSuccessMessage(*(_QWORD *)(a1 + 40), &v5); /*0x445142*/
          *(_QWORD *)(*(_QWORD *)(a1 + 40) + 664LL) = 0; /*0x44514b*/
          *(_QWORD *)(a1 + 40) = 0; /*0x445152*/
        }
      }
    }
  }
}

// [4/5] Address: 0x445170
// Method: CreatorSettingsPopup::uploadActionFailed
void __fastcall CreatorSettingsPopup_uploadActionFailed(__int64 a1, int a2, int a3)
{
  __int64 v3; // r8
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  __int64 v7; // [rsp+38h] [rbp-10h]

  if ( a3 == 27 ) /*0x445174*/
  {
    v3 = *(_QWORD *)(a1 + 24); /*0x44517f*/
    if ( v3 ) /*0x445189*/
    {
      if ( *(_DWORD *)(v3 + 328) - *(_DWORD *)(v3 + 332) == a2 ) /*0x44519f*/
      {
        if ( *(_QWORD *)(a1 + 40) ) /*0x4451a5*/
        {
          v5 = 0; /*0x4451c9*/
          *(_QWORD *)&v5 = sub_3C460(32); /*0x4451da*/
          v6 = 31; /*0x4451e2*/
          v7 = 31; /*0x4451eb*/
          strcpy((char *)v5, "Failed. Please try again later."); /*0x4451f4*/
          UploadActionPopup_showFailMessage(*(_QWORD *)(a1 + 40), &v5); /*0x44522f*/
          *(_QWORD *)(*(_QWORD *)(a1 + 40) + 664LL) = 0; /*0x445238*/
          *(_QWORD *)(a1 + 40) = 0; /*0x44523f*/
        }
      }
    }
  }
}

// [5/5] Address: 0x445250
// Method: CreatorSettingsPopup::onClosePopup
__int64 __fastcall CreatorSettingsPopup_onClosePopup(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 result; // rax

  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 992LL))(a2, 0); /*0x445268*/
  LOBYTE(v4) = 1; /*0x445271*/
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 520LL))(a2, v4); /*0x445276*/
  *(_QWORD *)(a1 + 32) = 0; /*0x445281*/
  return result; /*0x44527c*/
}
