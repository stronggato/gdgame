#include <Geode/binding/SetColorIDPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x395f40
// Method: SetColorIDPopup::~SetColorIDPopup
cocos2d::CCNode *__fastcall SetColorIDPopup__dtor_SetColorIDPopup(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &SetColorIDPopup::`vftable'; /*0x395f53*/
  *((_QWORD *)Block + 40) = &SetColorIDPopup::`vftable'; /*0x395f60*/
  *((_QWORD *)Block + 41) = &SetColorIDPopup::`vftable'; /*0x395f6e*/
  *((_QWORD *)Block + 42) = &SetColorIDPopup::`vftable'; /*0x395f7c*/
  *((_QWORD *)Block + 43) = &SetColorIDPopup::`vftable'; /*0x395f8a*/
  *((_QWORD *)Block + 44) = &SetColorIDPopup::`vftable'; /*0x395f98*/
  *((_QWORD *)Block + 51) = &SetColorIDPopup::`vftable'; /*0x395fa6*/
  *((_QWORD *)Block + 54) = &SetColorIDPopup::`vftable'; /*0x395fb4*/
  *((_QWORD *)Block + 68) = &SetColorIDPopup::`vftable'; /*0x395fc2*/
  *((_QWORD *)Block + 88) = &SetColorIDPopup::`vftable'; /*0x395fd0*/
  SetLevelOrderPopup__dtor_SetLevelOrderPopup(Block); /*0x395fd7*/
  if ( (a2 & 1) != 0 ) /*0x395fdf*/
    j_j_free(Block); /*0x395fe9*/
  return Block; /*0x395fee*/
}

// [3/3] Address: 0x3a2ae0
// Method: SetColorIDPopup::colorSelectClosed
void __fastcall SetColorIDPopup_colorSelectClosed(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v5; // rcx
  const char *v6; // rax
  __int64 v7; // r8
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+38h] [rbp-10h]

  if ( a3 >= 1000 ) /*0x3a2ae7*/
  {
    *(_BYTE *)(a1 - 28) = 1; /*0x3a2afc*/
    *(_DWORD *)(a1 - 32) = a3; /*0x3a2b03*/
    v5 = *(_QWORD **)(a1 - 40); /*0x3a2b0d*/
    v8 = 0; /*0x3a2b15*/
    v9 = 1; /*0x3a2b19*/
    v10 = 15; /*0x3a2b21*/
    LOWORD(v8) = 48; /*0x3a2b29*/
    CCTextInputNode_setString(v5, &v8); /*0x3a2b2f*/
    v6 = GJSpecialColorSelect_textForColorIdx(a3); /*0x3a2b36*/
    v9 = 0; /*0x3a2b40*/
    v7 = -1; /*0x3a2b45*/
    v10 = 0; /*0x3a2b4c*/
    v8 = 0; /*0x3a2b51*/
    do /*0x3a2b59*/
      ++v7; /*0x3a2b56*/
    while ( v6[v7] ); /*0x3a2b59*/
    sub_3C230(&v8); /*0x3a2b67*/
    SpriteAnimationManager_executeAnimation(*(_QWORD *)(a1 - 40), (void **)&v8); /*0x3a2b75*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 - 704) + 1080LL))(a1 - 704); /*0x3a2b88*/
    *(_BYTE *)(a1 - 28) = 0; /*0x3a2b98*/
  }
}
