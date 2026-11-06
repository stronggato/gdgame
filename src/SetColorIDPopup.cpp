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

// Address: 0x3a2890
// Method: SetColorIDPopup::init
// Hidden C++ exception states: #wind=1
char __fastcall SetColorIDPopup_init(__int64 a1, int a2)
{
  char result; // al
  int v5; // eax
  cocos2d::CCObject *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  const char *v12; // rax
  __int64 v13; // r8
  _BYTE v14[8]; // [rsp+60h] [rbp-19h] BYREF
  _QWORD v15[4]; // [rsp+68h] [rbp-11h] BYREF
  __int128 v16; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v17; // [rsp+98h] [rbp+1Fh]
  __int64 v18; // [rsp+A0h] [rbp+27h]
  __int128 *v19; // [rsp+F0h] [rbp+77h] BYREF
  char v20; // [rsp+F8h] [rbp+7Fh] BYREF

  v19 = &v16;
  v16 = 0;
  v17 = 2;
  v18 = 15;
  strcpy((char *)&v16, "OK");
  v15[2] = 12;
  v15[3] = 15;
  v15[0] = *(_QWORD *)"Color Filter";
  v15[1] = *(unsigned int *)"lter";
  result = sub_3A1A60(a1, a2, 0, 1101, (__int64)v15, (__int64)&v16, 1, 0, 0, 1, 0);
  if ( result )
  {
    v5 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_plus2Btn_001.png");
    v6 = CCMenuItemSpriteExtra_create(v5, 0, a1, (__int64)sub_3A2A70);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v6);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v20, 75.0, 0.0);
    v8 = v7;
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 664) + 200LL))(*(_QWORD *)(a1 + 664));
    cocos2d::CCPoint::operator+(v9, &v19, v8);
    v10 = *(_QWORD *)v6;
    cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(a1 + 552), v14, &v19);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v10 + 184))(v6, v11);
    if ( a2 >= 1000 )
    {
      v12 = GJSpecialColorSelect_textForColorIdx(a2);
      v16 = 0;
      v17 = 0;
      v18 = 0;
      v13 = -1;
      do
        ++v13;
      while ( v12[v13] );
      sub_3C230(&v16);
      SpriteAnimationManager_executeAnimation(*(_QWORD *)(a1 + 664), (void **)&v16);
    }
    return 1;
  }
  return result;
}
