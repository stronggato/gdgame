#include <Geode/binding/PlatformerControlsPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/8] Address: 0x44c180
// Method: PlatformerControlsPopup::~PlatformerControlsPopup
// Hidden C++ exception states: #wind=1
char *__fastcall PlatformerControlsPopup__dtor_PlatformerControlsPopup(char *Block, char a2)
{
  char *v4; // rsi
  char *v5; // rdi
  __int64 v6; // rax
  void *v7; // rax
  __int64 v8; // rax
  cocos2d::CCObject *v9; // rcx

  *(_QWORD *)Block = &PlatformerControlsPopup::`vftable'; /*0x44c1a0*/
  *((_QWORD *)Block + 40) = &PlatformerControlsPopup::`vftable'; /*0x44c1aa*/
  *((_QWORD *)Block + 41) = &PlatformerControlsPopup::`vftable'; /*0x44c1b8*/
  *((_QWORD *)Block + 42) = &PlatformerControlsPopup::`vftable'; /*0x44c1c6*/
  *((_QWORD *)Block + 43) = &PlatformerControlsPopup::`vftable'; /*0x44c1d4*/
  *((_QWORD *)Block + 44) = &PlatformerControlsPopup::`vftable'; /*0x44c1e2*/
  *((_QWORD *)Block + 51) = &PlatformerControlsPopup::`vftable'; /*0x44c1f0*/
  *((_QWORD *)Block + 54) = &PlatformerControlsPopup::`vftable'; /*0x44c1fe*/
  *((_QWORD *)Block + 68) = &PlatformerControlsPopup::`vftable'; /*0x44c20c*/
  *((_QWORD *)Block + 83) = &PlatformerControlsPopup::`vftable'; /*0x44c21a*/
  *((_QWORD *)Block + 84) = &PlatformerControlsPopup::`vftable'; /*0x44c228*/
  v4 = Block + 1000; /*0x44c22f*/
  *((_QWORD *)Block + 125) = &PlatformerControlsPopup::`vftable'; /*0x44c23d*/
  *((_QWORD *)Block + 126) = &PlatformerControlsPopup::`vftable'; /*0x44c247*/
  v5 = Block + 1016; /*0x44c24e*/
  *((_QWORD *)Block + 127) = &PlatformerControlsPopup::`vftable'; /*0x44c25c*/
  *((_QWORD *)Block + 128) = &PlatformerControlsPopup::`vftable'; /*0x44c266*/
  v6 = *(_QWORD *)&qword_905FB0; /*0x44c26d*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x44c277*/
  {
    v7 = operator new(0x690u); /*0x44c27e*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v7); /*0x44c28b*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x44c29c*/
    v6 = *(_QWORD *)&qword_905FB0; /*0x44c29e*/
  }
  if ( *(char **)(v6 + 816) == v5 ) /*0x44c2ae*/
    *(_QWORD *)(v6 + 816) = 0; /*0x44c2b0*/
  if ( *(char **)(v6 + 1488) == v4 ) /*0x44c2be*/
    *(_QWORD *)(v6 + 1488) = 0; /*0x44c2c0*/
  v8 = *((_QWORD *)Block + 148); /*0x44c2c7*/
  if ( v8 ) /*0x44c2d1*/
    *(_QWORD *)(v8 + 664) = 0; /*0x44c2d3*/
  v9 = (cocos2d::CCObject *)*((_QWORD *)Block + 131); /*0x44c2da*/
  if ( v9 ) /*0x44c2e4*/
    cocos2d::CCObject::release(v9); /*0x44c2e6*/
  sub_3C310(Block + 1056); /*0x44c2f3*/
  UIPOptionsLayer__dtor_UIPOptionsLayer((cocos2d::CCNode *)Block); /*0x44c2fb*/
  if ( (a2 & 1) != 0 ) /*0x44c305*/
    j_j_free(Block); /*0x44c30f*/
  return Block; /*0x44c317*/
}

// [2/8] Address: 0x44d060
// Method: PlatformerControlsPopup::update
void __fastcall PlatformerControlsPopup_update(__int64 a1)
{
  _QWORD *v1; // r9
  int v2; // r8d
  int v3; // eax

  v1 = *(_QWORD **)(a1 + 1048); /*0x44d060*/
  if ( v1 ) /*0x44d06a*/
  {
    v2 = (v1[11] != 0) | 2; /*0x44d07f*/
    if ( v1[17] == v1[18] ) /*0x44d08a*/
      v2 = v1[11] != 0; /*0x44d08a*/
    v3 = v2 | 4; /*0x44d091*/
    if ( !v1[15] ) /*0x44d094*/
      v3 = v2; /*0x44d099*/
    if ( v3 != *(_DWORD *)(a1 + 1292) ) /*0x44d0a3*/
      sub_44CD20(a1); /*0x44d0a3*/
  }
}

// [3/8] Address: 0x44d320
// Method: PlatformerControlsPopup::onLevelControlsRefreshed
// Hidden C++ exception states: #wind=1
void __fastcall PlatformerControlsPopup_onLevelControlsRefreshed(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  const char *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rax
  bool v15; // bl
  __int64 v16; // rcx
  __int128 v17; // [rsp+30h] [rbp-58h] BYREF
  __int64 v18; // [rsp+40h] [rbp-48h]
  __int64 v19; // [rsp+48h] [rbp-40h]
  __int128 v20; // [rsp+50h] [rbp-38h] BYREF
  __int64 v21; // [rsp+60h] [rbp-28h]
  __int64 v22; // [rsp+68h] [rbp-20h]

  v5 = *(_QWORD *)(a1 + 16); /*0x44d332*/
  if ( v5 && *(_DWORD *)(v5 + 328) - *(_DWORD *)(v5 + 332) == (_DWORD)a2 ) /*0x44d34d*/
  {
    v6 = *(_QWORD *)(a1 + 160); /*0x44d353*/
    if ( v6 ) /*0x44d35d*/
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 336LL))(v6, 0); /*0x44d364*/
    v7 = *(_QWORD *)(a1 + 152); /*0x44d36a*/
    if ( v7 ) /*0x44d374*/
    {
      LOBYTE(a2) = 1; /*0x44d379*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 336LL))(v7, a2); /*0x44d37b*/
    }
    v8 = "Update failed"; /*0x44d381*/
    if ( a3 ) /*0x44d38c*/
    {
      if ( a3 == 1 ) /*0x44d391*/
      {
        v8 = (const char *)&xmmword_721678; /*0x44d3a1*/
      }
      else if ( a3 == 2 ) /*0x44d396*/
      {
        v8 = "No controls found"; /*0x44d398*/
      }
    }
    else
    {
      v8 = "Creator controls updated"; /*0x44d3aa*/
    }
    v17 = 0; /*0x44d3c1*/
    v18 = 0; /*0x44d3c8*/
    v19 = 15; /*0x44d3cd*/
    LOBYTE(v17) = 0; /*0x44d3d6*/
    v20 = 0; /*0x44d3da*/
    v21 = 0; /*0x44d3df*/
    v22 = 0; /*0x44d3e4*/
    v9 = -1; /*0x44d3e9*/
    do /*0x44d3f3*/
      ++v9; /*0x44d3f0*/
    while ( v8[v9] ); /*0x44d3f3*/
    sub_3C230(&v20); /*0x44d3ff*/
    v10 = *(_QWORD *)(a1 - 1016); /*0x44d404*/
    v13 = sub_3A4CA0(&v20, v11, v12, 150, &v17); /*0x44d430*/
    (*(void (__fastcall **)(__int64, __int64, __int64))(v10 + 456))(a1 - 1016, v13, 100); /*0x44d445*/
    if ( (a3 & 0xFFFFFFFD) == 0 ) /*0x44d451*/
    {
      *(_BYTE *)(a1 + 72) = 1; /*0x44d453*/
      sub_44C7B0(); /*0x44d457*/
    }
    sub_44C8C0(a1 - 1016); /*0x44d463*/
    v14 = *(_QWORD *)(a1 + 16); /*0x44d468*/
    v15 = v14 && *(_QWORD *)(v14 + 2040); /*0x44d47b*/
    v16 = *(_QWORD *)(a1 + 144); /*0x44d481*/
    if ( v16 ) /*0x44d48b*/
    {
      (*(void (__fastcall **)(__int64, bool))(*(_QWORD *)v16 + 336LL))(v16, v15); /*0x44d493*/
      (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 144) + 936LL))(*(_QWORD *)(a1 + 144), v15); /*0x44d4a6*/
    }
  }
}

// [4/8] Address: 0x44dba0
// Method: PlatformerControlsPopup::onClose
__int64 __fastcall PlatformerControlsPopup_onClose(__int64 a1)
{
  sub_44C5F0(a1); /*0x44dbb0*/
  sub_44CD20(a1); /*0x44dbb8*/
  sub_44C7B0(); /*0x44dbbd*/
  return SetupTriggerPopup_onClose(a1); /*0x44dbc8*/
}

// [5/8] Address: 0x44dbe0
// Method: PlatformerControlsPopup::uploadActionFinished
void __fastcall PlatformerControlsPopup_uploadActionFinished(__int64 a1, int a2, int a3)
{
  __int64 v4; // rcx
  bool v5; // zf
  __int64 v6; // rax
  bool v7; // di
  __int64 v8; // rcx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+38h] [rbp-10h]

  v4 = *(_QWORD *)(a1 + 32); /*0x44dbed*/
  if ( !v4 || *(_DWORD *)(v4 + 328) - *(_DWORD *)(v4 + 332) != a2 ) /*0x44dc08*/
    return; /*0x44dc08*/
  if ( a3 == 28 ) /*0x44dc17*/
  {
    if ( !*(_QWORD *)(a1 + 184) ) /*0x44dc21*/
      goto LABEL_10; /*0x44dc21*/
    v9 = 0; /*0x44dc36*/
    *(_QWORD *)&v9 = sub_3C460(32); /*0x44dc4c*/
    v10 = 18; /*0x44dc51*/
    v11 = 31; /*0x44dc5a*/
    strcpy((char *)v9, "Controls uploaded!"); /*0x44dc63*/
  }
  else
  {
    if ( a3 != 29 ) /*0x44dc7b*/
      return; /*0x44dc7b*/
    v5 = *(_QWORD *)(a1 + 184) == 0; /*0x44dc81*/
    *(_BYTE *)(a1 + 88) = 1; /*0x44dc89*/
    if ( v5 ) /*0x44dc8d*/
      goto LABEL_10; /*0x44dc8d*/
    v9 = 0; /*0x44dc9e*/
    *(_QWORD *)&v9 = sub_3C460(32); /*0x44dcb4*/
    v10 = 17; /*0x44dcb9*/
    v11 = 31; /*0x44dcc2*/
    strcpy((char *)v9, "Controls removed!"); /*0x44dccb*/
  }
  UploadActionPopup_showSuccessMessage(*(_QWORD *)(a1 + 184), &v9); /*0x44dce8*/
  *(_QWORD *)(*(_QWORD *)(a1 + 184) + 664LL) = 0; /*0x44dcf4*/
  *(_QWORD *)(a1 + 184) = 0; /*0x44dcfb*/
LABEL_10:
  sub_44C8C0(a1 - 1000); /*0x44dd02*/
  v6 = *(_QWORD *)(a1 + 32); /*0x44dd0e*/
  v7 = v6 && *(_QWORD *)(v6 + 2040); /*0x44dd21*/
  v8 = *(_QWORD *)(a1 + 160); /*0x44dd29*/
  if ( v8 ) /*0x44dd33*/
  {
    (*(void (__fastcall **)(__int64, bool))(*(_QWORD *)v8 + 336LL))(v8, v7); /*0x44dd3c*/
    (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 160) + 936LL))(*(_QWORD *)(a1 + 160), v7); /*0x44dd50*/
  }
}

// [6/8] Address: 0x44dd70
// Method: PlatformerControlsPopup::uploadActionFailed
__int64 __fastcall PlatformerControlsPopup_uploadActionFailed(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // r8
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]
  __int64 v8; // [rsp+38h] [rbp-10h]

  result = (unsigned int)(a3 - 28); /*0x44dd76*/
  if ( (unsigned int)result <= 1 ) /*0x44dd80*/
  {
    v5 = *(_QWORD *)(a1 + 32); /*0x44dd86*/
    if ( v5 ) /*0x44dd8d*/
    {
      result = (unsigned int)(*(_DWORD *)(v5 + 328) - *(_DWORD *)(v5 + 332)); /*0x44dd9a*/
      if ( (_DWORD)result == a2 ) /*0x44dda3*/
      {
        if ( *(_QWORD *)(a1 + 184) ) /*0x44dda9*/
        {
          v6 = 0; /*0x44ddd0*/
          *(_QWORD *)&v6 = sub_3C460(32); /*0x44dde1*/
          v7 = 31; /*0x44dde9*/
          v8 = 31; /*0x44ddf2*/
          strcpy((char *)v6, "Failed. Please try again later."); /*0x44ddfb*/
          UploadActionPopup_showFailMessage(*(_QWORD *)(a1 + 184), &v6); /*0x44de39*/
          result = *(_QWORD *)(a1 + 184); /*0x44de3e*/
          *(_QWORD *)(result + 664) = 0; /*0x44de45*/
          *(_QWORD *)(a1 + 184) = 0; /*0x44de4c*/
        }
      }
    }
  }
  return result; /*0x44de58*/
}

// [7/8] Address: 0x44de60
// Method: PlatformerControlsPopup::FLAlert_Clicked
// Hidden C++ exception states: #wind=2
void __fastcall PlatformerControlsPopup_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]
  __int64 v12; // [rsp+38h] [rbp-10h]
  void *v13; // [rsp+68h] [rbp+20h]

  if ( a3 && *(_QWORD *)(a1 + 8) ) /*0x44de80*/
  {
    v4 = a1 - 1024; /*0x44de8b*/
    v5 = a1 - 24; /*0x44de92*/
    if ( a1 == 1024 ) /*0x44de9b*/
      v5 = 0; /*0x44de9b*/
    v6 = *(_QWORD *)&qword_905FB0; /*0x44de9f*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x44dea9*/
    {
      v13 = operator new(0x690u); /*0x44deb5*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v13); /*0x44dec3*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x44ded4*/
      v6 = *(_QWORD *)&qword_905FB0; /*0x44ded6*/
    }
    *(_QWORD *)(v6 + 1488) = v5; /*0x44dedd*/
    if ( (unsigned __int8)sub_256020( /*0x44def4*/
                            v6,
                            (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 8) + 328LL)
                                         - *(_DWORD *)(*(_QWORD *)(a1 + 8) + 332LL))) )
    {
      v7 = *(_QWORD *)(a1 + 160); /*0x44df01*/
      if ( v7 ) /*0x44df0b*/
      {
        *(_QWORD *)(v7 + 664) = 0; /*0x44df0d*/
        *(_QWORD *)(a1 + 160) = 0; /*0x44df14*/
      }
      v10 = 0; /*0x44df1e*/
      *(_QWORD *)&v10 = sub_3C460(32); /*0x44df37*/
      v11 = 20; /*0x44df3c*/
      v12 = 31; /*0x44df45*/
      strcpy((char *)v10, "Removing controls..."); /*0x44df55*/
      v8 = a1 - 16; /*0x44df65*/
      if ( !v4 ) /*0x44df6c*/
        v8 = 0; /*0x44df6c*/
      v9 = sub_39D2A0(v8, &v10); /*0x44df75*/
      *(_QWORD *)(a1 + 160) = v9; /*0x44df7a*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 1064LL))(v9); /*0x44df8e*/
    }
  }
}

// [8/8] Address: 0x44dfb0
// Method: PlatformerControlsPopup::onClosePopup
__int64 __fastcall PlatformerControlsPopup_onClosePopup(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 result; // rax

  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 992LL))(a2, 0); /*0x44dfc8*/
  LOBYTE(v4) = 1; /*0x44dfd1*/
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 520LL))(a2, v4); /*0x44dfd6*/
  *(_QWORD *)(a1 + 176) = 0; /*0x44dfe1*/
  return result; /*0x44dfdc*/
}
