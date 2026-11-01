#include <Geode/binding/ReportPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0xbc720
// Method: ReportPopup::~ReportPopup
char *__fastcall ReportPopup__dtor_ReportPopup(char *Block, char a2)
{
  sub_3DA90(Block + 1152); /*0xbc736*/
  sub_685C0(Block + 1128); /*0xbc742*/
  sub_3C310(Block + 1096); /*0xbc74e*/
  sub_3C310(Block + 1056); /*0xbc75a*/
  sub_3C310(Block + 1024); /*0xbc766*/
  UIPOptionsLayer__dtor_UIPOptionsLayer((cocos2d::CCNode *)Block); /*0xbc76e*/
  if ( (a2 & 1) != 0 ) /*0xbc776*/
    j_j_free(Block); /*0xbc780*/
  return Block; /*0xbc785*/
}

// [2/2] Address: 0xbff80
// Method: ReportPopup::FLAlert_Clicked
// Hidden C++ exception states: #wind=3
void __fastcall ReportPopup_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rsi
  int v5; // ecx
  __int64 v6; // rcx
  __int64 *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  _QWORD v12[3]; // [rsp+30h] [rbp-68h] BYREF
  char v13[16]; // [rsp+48h] [rbp-50h] BYREF
  __int64 v14; // [rsp+58h] [rbp-40h]
  __int64 v15; // [rsp+60h] [rbp-38h]
  __int128 v16; // [rsp+68h] [rbp-30h] BYREF
  __int64 v17; // [rsp+78h] [rbp-20h]
  __int64 v18; // [rsp+80h] [rbp-18h]
  void *v19; // [rsp+B8h] [rbp+20h]

  if ( a3 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 1 ) /*0xbffaa*/
  {
    v4 = a1 - 1000; /*0xbffb0*/
    sub_BF510(a1 - 1000, v12); /*0xbffbf*/
    if ( v12[0] != v12[1] ) /*0xbffcf*/
    {
      v5 = qword_905FB0; /*0xbffd5*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0xbffdf*/
      {
        v19 = operator new(0x690u); /*0xbffeb*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v19); /*0xbfffc*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xc000d*/
        v5 = qword_905FB0; /*0xc000f*/
      }
      sub_25DAD0( /*0xc0034*/
        v5,
        *(_DWORD *)(a1 + 8),
        *(_DWORD *)(a1 + 12),
        *(_DWORD *)(a1 + 16),
        (__int64)v12,
        *(_QWORD *)(a1 + 88));
      v7 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(v6) + 272); /*0xc003f*/
      v16 = 0; /*0xc0056*/
      v17 = 0; /*0xc005b*/
      v18 = 15; /*0xc0064*/
      LOBYTE(v16) = 0; /*0xc0070*/
      v14 = 15; /*0xc0075*/
      v15 = 15; /*0xc007e*/
      strcpy(v13, "Report received"); /*0xc008f*/
      v8 = *v7; /*0xc00bb*/
      v11 = sub_3A4CA0(v13, v9, v10, 150, &v16); /*0xc00e3*/
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v8 + 456))(v7, v11, 1000); /*0xc00f4*/
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 1104LL))(v4, 0); /*0xc0102*/
    }
    sub_685C0(v12); /*0xc010e*/
  }
}
