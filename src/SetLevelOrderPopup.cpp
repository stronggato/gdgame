#include <Geode/binding/SetLevelOrderPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x3a1880
// Method: SetLevelOrderPopup::~SetLevelOrderPopup
__int64 __fastcall SetLevelOrderPopup__dtor_SetLevelOrderPopup(cocos2d::CCNode *a1)
{
  *(_QWORD *)a1 = &SetIDPopup::`vftable'; /*0x3a1890*/
  *((_QWORD *)a1 + 40) = &SetIDPopup::`vftable'; /*0x3a189a*/
  *((_QWORD *)a1 + 41) = &SetIDPopup::`vftable'; /*0x3a18a8*/
  *((_QWORD *)a1 + 42) = &SetIDPopup::`vftable'; /*0x3a18b6*/
  *((_QWORD *)a1 + 43) = &SetIDPopup::`vftable'; /*0x3a18c4*/
  *((_QWORD *)a1 + 44) = &SetIDPopup::`vftable'; /*0x3a18d2*/
  *((_QWORD *)a1 + 51) = &SetIDPopup::`vftable'; /*0x3a18e0*/
  *((_QWORD *)a1 + 54) = &SetIDPopup::`vftable'; /*0x3a18ee*/
  *((_QWORD *)a1 + 68) = &SetIDPopup::`vftable'; /*0x3a18fc*/
  cocos2d::CCNode::removeAllChildrenWithCleanup(a1, 1); /*0x3a1905*/
  return StarInfoPopup__dtor_StarInfoPopup(a1); /*0x3a190e*/
}

// [3/3] Address: 0x42d200
// Method: SetLevelOrderPopup::onOrderButton
__int64 __fastcall SetLevelOrderPopup_onOrderButton(__int64 a1, __int64 a2)
{
  int v3; // eax

  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 1 ) /*0x42d215*/
    v3 = *(_DWORD *)(a1 + 684); /*0x42d217*/
  else
    v3 = 1; /*0x42d21f*/
  *(_DWORD *)(a1 + 672) = v3; /*0x42d227*/
  return sub_3A25F0(a1); /*0x42d22d*/
}

// Address: 0x42cf10
// Method: SetLevelOrderPopup::init
// Hidden C++ exception states: #wind=1
char __fastcall SetLevelOrderPopup_init(__int64 a1, int a2, int a3, int a4)
{
  char result; // al
  __int64 v7; // rcx
  __int64 v8; // rax
  struct cocos2d::CCSprite *v9; // rbx
  cocos2d::CCObject *v10; // rbx
  __int64 v11; // rax
  struct cocos2d::CCSprite *v12; // rbx
  cocos2d::CCObject *v13; // rbx
  __int64 v14; // rax
  __int128 *v15; // [rsp+60h] [rbp-29h] BYREF
  float v16[2]; // [rsp+68h] [rbp-21h] BYREF
  _BYTE v17[8]; // [rsp+70h] [rbp-19h] BYREF
  _DWORD v18[4]; // [rsp+78h] [rbp-11h] BYREF
  __int64 v19; // [rsp+88h] [rbp-1h]
  __int64 v20; // [rsp+90h] [rbp+7h]
  _BYTE v21[8]; // [rsp+98h] [rbp+Fh] BYREF
  _BYTE v22[8]; // [rsp+A0h] [rbp+17h] BYREF
  __int128 v23; // [rsp+A8h] [rbp+1Fh] BYREF
  __int64 v24; // [rsp+B8h] [rbp+2Fh]
  __int64 v25; // [rsp+C0h] [rbp+37h]

  v15 = &v23;
  v23 = 0;
  v24 = 2;
  v25 = 15;
  strcpy((char *)&v23, "OK");
  v18[3] = 0;
  v19 = 11;
  v20 = 15;
  strcpy((char *)v18, "Level Order");
  result = sub_3A1A60(a1, a3, 1, a4, (__int64)v18, (__int64)&v23, 0, 0, 0, 1, 1);
  if ( result )
  {
    *(_DWORD *)(a1 + 704) = a2;
    v8 = cocos2d::CCDirector::sharedDirector(v7);
    cocos2d::CCDirector::getWinSize(v8, v16);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v21, v16[0] * 0.5, (float)(v16[1] * 0.5) + 5.0);
    cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(a1 + 552), v17, v21);
    v9 = cocos2d::CCSprite::createWithSpriteFrameName("edit_leftBtn2_001.png");
    (**((void (__fastcall ***)(__int64, void *))v9 + 40))((__int64)v9 + 320, &unk_6FEBA4);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v9 + 160LL))(v9);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v9 + 352LL))(v9);
    v10 = CCMenuItemSpriteExtra_create((int)v9, 0, a1, (__int64)SetLevelOrderPopup_onOrderButton);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v10);
    (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, 0);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v22, -85.0, 0.0);
    cocos2d::CCPoint::operator+(v17, &v15, v11);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int128 **))(*(_QWORD *)v10 + 184LL))(v10, &v15);
    *((_DWORD *)v10 + 93) = 1068708659;
    v12 = cocos2d::CCSprite::createWithSpriteFrameName("edit_rightBtn2_001.png");
    (**((void (__fastcall ***)(__int64, void *))v12 + 40))((__int64)v12 + 320, &unk_6FEB9C);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v12 + 160LL))(v12);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v12 + 352LL))(v12);
    v13 = CCMenuItemSpriteExtra_create((int)v12, 0, a1, (__int64)SetLevelOrderPopup_onOrderButton);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v13);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v13 + 64LL))(v13, 1);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v22, 85.0, 0.0);
    cocos2d::CCPoint::operator+(v17, &v15, v14);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int128 **))(*(_QWORD *)v13 + 184LL))(v13, &v15);
    *((_DWORD *)v13 + 93) = 1068708659;
    return 1;
  }
  return result;
}
