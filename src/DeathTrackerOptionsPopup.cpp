#include <Geode/binding/DeathTrackerOptionsPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x11dd00
// Method: DeathTrackerOptionsPopup::FLAlert_Clicked
// Hidden C++ exception states: #wind=2
void __fastcall DeathTrackerOptionsPopup_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  __int128 v12; // [rsp+38h] [rbp-50h] BYREF
  __int64 v13; // [rsp+48h] [rbp-40h]
  __int64 v14; // [rsp+50h] [rbp-38h]
  __int128 v15; // [rsp+58h] [rbp-30h] BYREF
  __int64 v16; // [rsp+68h] [rbp-20h]
  __int64 v17; // [rsp+70h] [rbp-18h]
  void *v18; // [rsp+A8h] [rbp+20h]

  if ( a3 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 1 && *(_QWORD *)(a1 + 8) ) /*0x11dd30*/
  {
    v4 = *(_QWORD *)&qword_905FB0; /*0x11dd3b*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x11dd45*/
    {
      v18 = operator new(0x690u); /*0x11dd51*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v18); /*0x11dd62*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x11dd73*/
      v4 = *(_QWORD *)&qword_905FB0; /*0x11dd75*/
    }
    sub_2259A0(v4, *(_QWORD *)(a1 + 8), 0); /*0x11dd83*/
    v6 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(v5) + 272); /*0x11dd8e*/
    v15 = 0; /*0x11dda5*/
    v16 = 0; /*0x11ddac*/
    v17 = 15; /*0x11ddb1*/
    LOBYTE(v15) = 0; /*0x11ddba*/
    v12 = 0; /*0x11ddbe*/
    *(_QWORD *)&v12 = sub_3C460(32); /*0x11ddd7*/
    v13 = 18; /*0x11dddc*/
    v14 = 31; /*0x11dde5*/
    strcpy((char *)v12, "Death data cleared"); /*0x11ddf5*/
    v7 = *v6; /*0x11de07*/
    v10 = sub_3A4CA0(&v12, v8, v9, 150, &v15); /*0x11de2f*/
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(v7 + 456))(v6, v10, 1000); /*0x11de40*/
    v11 = *(_QWORD *)(a1 + 16); /*0x11de46*/
    if ( v11 ) /*0x11de4d*/
      sub_10C2C0(v11, 0); /*0x11de51*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 1000) + 1104LL))(a1 - 1000, 0); /*0x11de62*/
  }
}
