#include <Geode/binding/DeathMarkerSettingsPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x11b0d0
// Method: DeathMarkerSettingsPopup::FLAlert_Clicked
// Hidden C++ exception states: #wind=9
void __fastcall DeathMarkerSettingsPopup_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 *v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  __int128 v15; // [rsp+38h] [rbp-50h] BYREF
  __int64 v16; // [rsp+48h] [rbp-40h]
  __int64 v17; // [rsp+50h] [rbp-38h]
  __int128 v18; // [rsp+58h] [rbp-30h] BYREF
  __int64 v19; // [rsp+68h] [rbp-20h]
  __int64 v20; // [rsp+70h] [rbp-18h]
  void *v21; // [rsp+A8h] [rbp+20h]
  void *v22; // [rsp+A8h] [rbp+20h]
  void *v23; // [rsp+A8h] [rbp+20h]

  if ( a3 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 1 ) /*0x11b0f5*/
  {
    v5 = *(_QWORD *)&qword_905FB0; /*0x11b0fb*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x11b105*/
    {
      v21 = operator new(0x690u); /*0x11b111*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v21); /*0x11b122*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x11b133*/
      v5 = *(_QWORD *)&qword_905FB0; /*0x11b135*/
    }
    LOBYTE(v4) = 1; /*0x11b13c*/
    sub_2259A0(v5, *(_QWORD *)(a1 + 40), v4); /*0x11b143*/
    v6 = qword_905FD0; /*0x11b148*/
    if ( !qword_905FD0 ) /*0x11b152*/
    {
      v22 = operator new(0x6E8u); /*0x11b15e*/
      qword_905FD0 = sub_2723A0(v22); /*0x11b16f*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x11b180*/
      v6 = qword_905FD0; /*0x11b182*/
    }
    v7 = *(_QWORD *)(v6 + 560); /*0x11b189*/
    if ( v7 ) /*0x11b195*/
    {
      v8 = *(_QWORD *)(v7 + 15160); /*0x11b19b*/
      if ( v8 != *(_QWORD *)(v7 + 15168) ) /*0x11b1a9*/
        *(_QWORD *)(v7 + 15168) = v8; /*0x11b1ab*/
      *(_BYTE *)(*(_QWORD *)(v6 + 560) + 15184LL) = 0; /*0x11b1b9*/
      v9 = *(_QWORD *)(*(_QWORD *)(v6 + 560) + 2176LL); /*0x11b1c6*/
      if ( v9 ) /*0x11b1d0*/
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 512LL))(v9); /*0x11b1d8*/
        v6 = qword_905FD0; /*0x11b1de*/
        if ( !qword_905FD0 ) /*0x11b1e8*/
        {
          v23 = operator new(0x6E8u); /*0x11b1f4*/
          qword_905FD0 = sub_2723A0(v23); /*0x11b205*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x11b216*/
          v6 = qword_905FD0; /*0x11b218*/
        }
        *(_QWORD *)(*(_QWORD *)(v6 + 560) + 2176LL) = 0; /*0x11b226*/
      }
      sub_51A430(*(_QWORD *)(v6 + 560)); /*0x11b234*/
    }
    v10 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(v6) + 272); /*0x11b23f*/
    v18 = 0; /*0x11b256*/
    v19 = 0; /*0x11b25b*/
    v20 = 15; /*0x11b260*/
    LOBYTE(v18) = 0; /*0x11b269*/
    v15 = 0; /*0x11b26e*/
    *(_QWORD *)&v15 = sub_3C460(32); /*0x11b287*/
    v16 = 21; /*0x11b28c*/
    v17 = 31; /*0x11b295*/
    strcpy((char *)v15, "Death markers cleared"); /*0x11b2a5*/
    v11 = *v10; /*0x11b2bf*/
    v14 = sub_3A4CA0(&v15, v12, v13, 150, &v18); /*0x11b2e7*/
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(v11 + 456))(v10, v14, 1000); /*0x11b2f8*/
  }
}
