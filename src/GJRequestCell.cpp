#include <Geode/binding/GJRequestCell.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x152ba0
// Method: GJRequestCell::onViewFriendRequest
// Hidden C++ exception states: #wind=2
char __fastcall GJRequestCell_onViewFriendRequest(__int64 a1)
{
  _DWORD *v2; // rax
  int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct cocos2d::CCScene *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  struct cocos2d::CCScene *v16; // rbx
  __int64 v17; // rcx
  cocos2d::CCDirector *v18; // rax
  _BYTE v20[40]; // [rsp+20h] [rbp-28h] BYREF
  void *v21; // [rsp+50h] [rbp+8h]
  void *v22; // [rsp+50h] [rbp+8h]

  v2 = *(_DWORD **)(a1 + 592); /*0x152bad*/
  if ( v2 ) /*0x152bb7*/
  {
    v3 = v2[99]; /*0x152bbd*/
    if ( v3 ) /*0x152bc5*/
    {
      if ( v2[115] == 3 ) /*0x152bd2*/
      {
        v4 = qword_905FD0; /*0x152bd8*/
        if ( !qword_905FD0 ) /*0x152be2*/
        {
          v21 = operator new(0x6E8u); /*0x152bee*/
          qword_905FD0 = sub_2723A0(v21); /*0x152bfc*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x152c0d*/
          v4 = qword_905FD0; /*0x152c0f*/
        }
        if ( GameManager_getGameVariable(v4, "0219") ) /*0x152c1d*/
        {
          if ( !qword_905FD0 ) /*0x152c2e*/
          {
            v22 = operator new(0x6E8u); /*0x152c3a*/
            qword_905FD0 = sub_2723A0(v22); /*0x152c48*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x152c59*/
          }
          LOBYTE(v2) = ProfilePage_showNoAccountError(); /*0x152c65*/
        }
        else
        {
          v5 = GameToolbox_intToString((__int64)v20, *(_DWORD *)(*(_QWORD *)(a1 + 592) + 396LL)); /*0x152c7c*/
          v2 = (_DWORD *)sub_18B450(v5, 0); /*0x152c86*/
          if ( v2 ) /*0x152c8e*/
            LOBYTE(v2) = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 1064LL))(v2); /*0x152ca1*/
        }
      }
      else
      {
        v6 = v2[99]; /*0x152cae*/
        if ( v3 < 0 ) /*0x152cb2*/
          v6 = -v3; /*0x152cb4*/
        v7 = GameToolbox_intToString((__int64)v20, v6); /*0x152cbb*/
        v8 = GJSearchObject_create_0(0, v7); /*0x152cca*/
        *(_DWORD *)(v8 + 464) = (unsigned int)v3 >> 31; /*0x152cd0*/
        v13 = (struct cocos2d::CCScene *)cocos2d::CCScene::create(v10, v9, v11, v12); /*0x152cdc*/
        *(_QWORD *)(cocos2d::CCApplication::sharedApplication(v14) + 232) = v13; /*0x152ce5*/
        v15 = sub_3DE4D0(v8); /*0x152cef*/
        (*(void (__fastcall **)(struct cocos2d::CCScene *, __int64))(*(_QWORD *)v13 + 464LL))(v13, v15); /*0x152d04*/
        v16 = cocos2d::CCTransitionFade::create(0.5, v13); /*0x152d18*/
        v18 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v17); /*0x152d1b*/
        LOBYTE(v2) = cocos2d::CCDirector::pushScene(v18, v16); /*0x152d27*/
      }
    }
  }
  return (char)v2; /*0x152c5b*/
}

// [2/3] Address: 0x1567f0
// Method: GJRequestCell::init
__int64 __fastcall GJRequestCell_init(__int64 a1)
{
  *(_QWORD *)(a1 + 560) = 0; /*0x1567f2*/
  *(_QWORD *)(a1 + 568) = 0; /*0x1567f9*/
  *(_BYTE *)(a1 + 576) = 0; /*0x156800*/
  return 1; /*0x156808*/
}

// [3/3] Address: 0x4ffb10
// Method: GJRequestCell::markAsRead
// Hidden C++ exception states: #wind=7
_BOOL8 __fastcall GJRequestCell_markAsRead(__int64 a1)
{
  __int64 v2; // rcx
  bool GameVariable; // al
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // ecx
  __int64 v10; // rcx
  _BOOL8 result; // rax
  void *v12; // [rsp+30h] [rbp+8h]
  void *v13; // [rsp+30h] [rbp+8h]
  void *v14; // [rsp+30h] [rbp+8h]
  void *v15; // [rsp+30h] [rbp+8h]
  void *v16; // [rsp+30h] [rbp+8h]
  void *v17; // [rsp+30h] [rbp+8h]
  void *v18; // [rsp+30h] [rbp+8h]

  if ( *(_BYTE *)(*(_QWORD *)(a1 + 2168) + 842LL) ) /*0x4ffb20*/
    goto LABEL_5; /*0x4ffb20*/
  v2 = qword_905FD0; /*0x4ffb29*/
  if ( !qword_905FD0 ) /*0x4ffb33*/
  {
    v12 = operator new(0x6E8u); /*0x4ffb3f*/
    qword_905FD0 = sub_2723A0(v12); /*0x4ffb4d*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4ffb5e*/
    v2 = qword_905FD0; /*0x4ffb60*/
  }
  GameVariable = GameManager_getGameVariable(v2, "0172"); /*0x4ffb6e*/
  if ( GameVariable ) /*0x4ffb75*/
LABEL_5:
    GameVariable = 1; /*0x4ffb77*/
  *(_BYTE *)(a1 + 13193) = GameVariable; /*0x4ffb79*/
  v4 = qword_905FD0; /*0x4ffb7f*/
  if ( !qword_905FD0 ) /*0x4ffb89*/
  {
    v13 = operator new(0x6E8u); /*0x4ffb95*/
    qword_905FD0 = sub_2723A0(v13); /*0x4ffba3*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4ffbb4*/
    v4 = qword_905FD0; /*0x4ffbb6*/
  }
  *(_BYTE *)(a1 + 15120) = GameManager_getGameVariable(v4, "0095"); /*0x4ffbc9*/
  v5 = qword_905FD0; /*0x4ffbcf*/
  if ( !qword_905FD0 ) /*0x4ffbd9*/
  {
    v14 = operator new(0x6E8u); /*0x4ffbe5*/
    qword_905FD0 = sub_2723A0(v14); /*0x4ffbf3*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4ffc04*/
    v5 = qword_905FD0; /*0x4ffc06*/
  }
  *(_BYTE *)(a1 + 15380) = GameManager_getGameVariable(v5, "0099"); /*0x4ffc19*/
  v6 = qword_905FD0; /*0x4ffc1f*/
  if ( !qword_905FD0 ) /*0x4ffc29*/
  {
    v15 = operator new(0x6E8u); /*0x4ffc35*/
    qword_905FD0 = sub_2723A0(v15); /*0x4ffc43*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4ffc54*/
    v6 = qword_905FD0; /*0x4ffc56*/
  }
  *(_BYTE *)(a1 + 15064) = GameManager_getGameVariable(v6, "0126"); /*0x4ffc69*/
  v7 = qword_905FD0; /*0x4ffc6f*/
  if ( !qword_905FD0 ) /*0x4ffc79*/
  {
    v16 = operator new(0x6E8u); /*0x4ffc85*/
    qword_905FD0 = sub_2723A0(v16); /*0x4ffc93*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4ffca4*/
    v7 = qword_905FD0; /*0x4ffca6*/
  }
  *(_BYTE *)(a1 + 14642) = GameManager_getGameVariable(v7, "0176"); /*0x4ffcb9*/
  v8 = qword_905FD0; /*0x4ffcbf*/
  if ( !qword_905FD0 ) /*0x4ffcc9*/
  {
    v17 = operator new(0x6E8u); /*0x4ffcd5*/
    qword_905FD0 = sub_2723A0(v17); /*0x4ffce3*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4ffcf4*/
    v8 = qword_905FD0; /*0x4ffcf6*/
  }
  *(_BYTE *)(a1 + 14641) = GameManager_getGameVariable(v8, "0177"); /*0x4ffd09*/
  v9 = *(_DWORD *)(*(_QWORD *)(a1 + 2168) + 1588LL); /*0x4ffd16*/
  if ( v9 == 1 ) /*0x4ffd1f*/
  {
    *(_BYTE *)(a1 + 14641) = 1; /*0x4ffd21*/
  }
  else if ( v9 == 2 ) /*0x4ffd2c*/
  {
    *(_BYTE *)(a1 + 14641) = 0; /*0x4ffd2e*/
  }
  v10 = qword_905FD0; /*0x4ffd35*/
  if ( !qword_905FD0 ) /*0x4ffd3f*/
  {
    v18 = operator new(0x6E8u); /*0x4ffd4b*/
    qword_905FD0 = sub_2723A0(v18); /*0x4ffd59*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4ffd6a*/
    v10 = qword_905FD0; /*0x4ffd6c*/
  }
  result = GameManager_getGameVariable(v10, "0072"); /*0x4ffd7a*/
  *(_BYTE *)(a1 + 15496) = result; /*0x4ffd7f*/
  return result; /*0x4ffd85*/
}
