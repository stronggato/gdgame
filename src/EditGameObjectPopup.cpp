#include <Geode/binding/EditGameObjectPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x395c90
// Method: EditGameObjectPopup::~EditGameObjectPopup
cocos2d::CCNode *__fastcall EditGameObjectPopup__dtor_EditGameObjectPopup(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &EditGameObjectPopup::`vftable'; /*0x395ca3*/
  *((_QWORD *)Block + 40) = &EditGameObjectPopup::`vftable'; /*0x395cb0*/
  *((_QWORD *)Block + 41) = &EditGameObjectPopup::`vftable'; /*0x395cbe*/
  *((_QWORD *)Block + 42) = &EditGameObjectPopup::`vftable'; /*0x395ccc*/
  *((_QWORD *)Block + 43) = &EditGameObjectPopup::`vftable'; /*0x395cda*/
  *((_QWORD *)Block + 44) = &EditGameObjectPopup::`vftable'; /*0x395ce8*/
  *((_QWORD *)Block + 51) = &EditGameObjectPopup::`vftable'; /*0x395cf6*/
  *((_QWORD *)Block + 54) = &EditGameObjectPopup::`vftable'; /*0x395d04*/
  *((_QWORD *)Block + 68) = &EditGameObjectPopup::`vftable'; /*0x395d12*/
  *((_QWORD *)Block + 83) = &EditGameObjectPopup::`vftable'; /*0x395d20*/
  *((_QWORD *)Block + 84) = &EditGameObjectPopup::`vftable'; /*0x395d2e*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x395d35*/
  if ( (a2 & 1) != 0 ) /*0x395d3d*/
    j_j_free(Block); /*0x395d47*/
  return Block; /*0x395d4c*/
}

// [2/2] Address: 0x3a1640
// Method: EditGameObjectPopup::init
// Hidden C++ exception states: #wind=2
char __fastcall EditGameObjectPopup_init(_BYTE *a1, int a2, int a3, int a4)
{
  char v4; // di
  char result; // al
  __int64 v7; // rcx
  __int64 v8; // rax
  const struct cocos2d::CCPoint *v9; // rax
  const struct cocos2d::CCPoint *v10; // rax
  float v11[2]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v12[8]; // [rsp+48h] [rbp-38h] BYREF
  __int128 *v13; // [rsp+50h] [rbp-30h] BYREF
  __int128 *v14; // [rsp+58h] [rbp-28h] BYREF
  __int128 v15; // [rsp+60h] [rbp-20h] BYREF
  __int64 v16; // [rsp+70h] [rbp-10h]
  __int64 v17; // [rsp+78h] [rbp-8h]

  v4 = a4; /*0x3a1655*/
  result = sub_6060E0((_DWORD)a1, a2, a3, a4, 1124859904, 1, 0); /*0x3a1683*/
  if ( result ) /*0x3a168a*/
  {
    a1[744] = 1; /*0x3a1690*/
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 1096LL))(a1); /*0x3a169d*/
    v16 = 12; /*0x3a16aa*/
    v17 = 15; /*0x3a16b2*/
    strcpy((char *)&v15, "Setup Object"); /*0x3a16c2*/
    BYTE13(v15) = 0; /*0x3a16cd*/
    HIWORD(v15) = 0; /*0x3a16cd*/
    sub_606E80(a1, &v15); /*0x3a16db*/
    v15 = 0; /*0x3a16e3*/
    v16 = 2; /*0x3a16e7*/
    v17 = 15; /*0x3a16ef*/
    strcpy((char *)&v15, "OK"); /*0x3a16fc*/
    SetupTriggerPopup_addCloseButton((__int64)a1, (__int64 *)&v15); /*0x3a170b*/
    v8 = cocos2d::CCDirector::sharedDirector(v7); /*0x3a1710*/
    cocos2d::CCDirector::getWinSize(v8, v11); /*0x3a171d*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v12, (float)(v11[0] * 0.5) - 50.0, v11[1] * 0.5); /*0x3a1749*/
    if ( v4 ) /*0x3a1756*/
    {
      v13 = &v15; /*0x3a1758*/
      v15 = 0; /*0x3a175f*/
      v16 = 0; /*0x3a1765*/
      v17 = 0; /*0x3a1769*/
      *(_QWORD *)&v15 = sub_3C460(32); /*0x3a1777*/
      v16 = 17; /*0x3a177b*/
      v17 = 31; /*0x3a1783*/
      strcpy((char *)v15, "NO Multi\nActivate"); /*0x3a1792*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v14, (const struct cocos2d::CCPoint *)v12); /*0x3a17ab*/
      SetupTriggerPopup_createToggleValueControl((int)a1, 444, (__int64)&v15, v9, 0, 0, 0, 1.0); /*0x3a17d4*/
    }
    else
    {
      v14 = &v15; /*0x3a17d6*/
      v16 = 14; /*0x3a17e0*/
      v17 = 15; /*0x3a17e8*/
      strcpy((char *)&v15, "Multi\nActivate"); /*0x3a17f8*/
      HIBYTE(v15) = 0; /*0x3a1803*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v13, (const struct cocos2d::CCPoint *)v12); /*0x3a1819*/
      SetupTriggerPopup_createToggleValueControl((int)a1, 99, (__int64)&v15, v10, 0, 0, 0, 1.0); /*0x3a184b*/
    }
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 1136LL))(a1); /*0x3a1856*/
    a1[744] = 0; /*0x3a185c*/
    return 1; /*0x3a1863*/
  }
  return result; /*0x3a1865*/
}
