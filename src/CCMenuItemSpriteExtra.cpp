#include <Geode/binding/CCMenuItemSpriteExtra.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x47740
// Method: CCMenuItemSpriteExtra::CCMenuItemSpriteExtra
// Hidden C++ exception states: #wind=3
__int64 __fastcall CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(__int64 a1)
{
  cocos2d::CCMenuItemSprite::CCMenuItemSprite((cocos2d::CCMenuItemSprite *)a1); /*0x47752*/
  *(_QWORD *)a1 = &CCMenuItemSpriteExtra::`vftable'; /*0x47760*/
  *(_QWORD *)(a1 + 320) = &CCMenuItemSpriteExtra::`vftable'; /*0x4776a*/
  *(_QWORD *)(a1 + 400) = 1065353216; /*0x47771*/
  *(_WORD *)(a1 + 408) = 0; /*0x4777e*/
  *(_DWORD *)(a1 + 412) = 1065353216; /*0x47785*/
  *(_OWORD *)(a1 + 416) = 0; /*0x47792*/
  *(_QWORD *)(a1 + 432) = 0; /*0x47799*/
  *(_QWORD *)(a1 + 440) = 15; /*0x477a0*/
  *(_BYTE *)(a1 + 416) = 0; /*0x477ab*/
  *(_OWORD *)(a1 + 448) = 0; /*0x477b2*/
  *(_QWORD *)(a1 + 464) = 0; /*0x477b9*/
  *(_QWORD *)(a1 + 472) = 15; /*0x477c0*/
  *(_BYTE *)(a1 + 448) = 0; /*0x477cb*/
  *(_DWORD *)(a1 + 480) = 1061734601; /*0x477d2*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(a1 + 484)); /*0x477e3*/
  *(_DWORD *)(a1 + 492) = 1050253722; /*0x477e9*/
  *(_QWORD *)(a1 + 496) = 1053609165; /*0x477f3*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(a1 + 504)); /*0x47805*/
  *(_DWORD *)(a1 + 512) = 0; /*0x4780b*/
  *(_BYTE *)(a1 + 516) = 0; /*0x47811*/
  return a1; /*0x4781b*/
}

// [2/5] Address: 0x478a0
// Method: CCMenuItemSpriteExtra::create
// Hidden C++ exception states: #wind=1
cocos2d::CCObject *__fastcall CCMenuItemSpriteExtra_create(int a1, int a2, int a3, __int64 a4)
{
  __int64 v8; // rax
  cocos2d::CCObject *v9; // rbx
  void *v11; // [rsp+30h] [rbp-18h]

  v11 = operator new(0x208u); /*0x478d0*/
  v8 = CCMenuItemSpriteExtra_CCMenuItemSpriteExtra((__int64)v11); /*0x478d8*/
  v9 = (cocos2d::CCObject *)v8; /*0x478dd*/
  if ( v8 ) /*0x478e3*/
  {
    if ( (unsigned __int8)sub_47940(v8, a1, a2, a3, a4) ) /*0x478f6*/
    {
      cocos2d::CCObject::autorelease(v9); /*0x47902*/
      return v9; /*0x4790b*/
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v9 + 8LL))(v9, 1); /*0x47915*/
  }
  return 0; /*0x4791a*/
}

// [3/5] Address: 0x47aa0
// Method: CCMenuItemSpriteExtra::activate
// Hidden C++ exception states: #wind=2
void __fastcall CCMenuItemSpriteExtra_activate(__int64 a1)
{
  _QWORD *v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ecx
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]
  __int64 v9; // [rsp+48h] [rbp-10h]
  void *v10; // [rsp+68h] [rbp+10h]

  if ( *(_BYTE *)(a1 + 345) ) /*0x47aa9*/
  {
    cocos2d::CCNode::stopAllActions((cocos2d::CCNode *)a1); /*0x47ab6*/
    if ( !*(_DWORD *)(a1 + 500) ) /*0x47abc*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1); /*0x47ad3*/
    if ( *(_QWORD *)(a1 + 432) ) /*0x47ad9*/
    {
      v2 = (_QWORD *)(a1 + 416); /*0x47af1*/
      if ( *(_QWORD *)(a1 + 440) > 0xFu ) /*0x47afd*/
        v2 = (_QWORD *)*v2; /*0x47aff*/
      v7 = 0; /*0x47b05*/
      v8 = 0; /*0x47b0c*/
      v9 = 0; /*0x47b11*/
      v3 = -1; /*0x47b16*/
      do /*0x47b23*/
        ++v3; /*0x47b20*/
      while ( *((_BYTE *)v2 + v3) ); /*0x47b23*/
      sub_3C230(&v7); /*0x47b2e*/
      v6 = qword_905F60; /*0x47b34*/
      if ( !qword_905F60 ) /*0x47b3e*/
      {
        v10 = operator new(0x8A8u); /*0x47b4a*/
        qword_905F60 = sub_5AE20(v10); /*0x47b58*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x47b69*/
        v6 = qword_905F60; /*0x47b6b*/
      }
      FMODAudioEngine_playEffect_0(v6, (__int64)&v7, v4, v5, *(_DWORD *)(a1 + 412)); /*0x47b90*/
    }
    cocos2d::CCMenuItem::activate((cocos2d::CCMenuItem *)a1); /*0x47b9d*/
  }
}

// [4/5] Address: 0x47bb0
// Method: CCMenuItemSpriteExtra::selected
// Hidden C++ exception states: #wind=2
void __fastcall CCMenuItemSpriteExtra_selected(__int64 a1)
{
  _QWORD *v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ecx
  void **v7; // rbx
  __int64 v8; // rax
  int v9; // eax
  struct cocos2d::CCActionInterval *v10; // rax
  struct cocos2d::CCAction *v11; // rbx
  cocos2d::CCNode *v12; // rcx
  cocos2d::CCNode *v13; // rdi
  struct cocos2d::CCActionInterval *v14; // rax
  __int128 v15; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+40h] [rbp-18h]
  __int64 v17; // [rsp+48h] [rbp-10h]
  __int128 *v18; // [rsp+60h] [rbp+8h] BYREF
  void *v19; // [rsp+68h] [rbp+10h] BYREF

  if ( *(_BYTE *)(a1 + 345) ) /*0x47bc2*/
  {
    cocos2d::CCMenuItemSprite::selected((cocos2d::CCMenuItemSprite *)a1); /*0x47bcf*/
    if ( *(_QWORD *)(a1 + 464) ) /*0x47bd5*/
    {
      v18 = &v15; /*0x47be8*/
      v2 = (_QWORD *)(a1 + 448); /*0x47bed*/
      if ( *(_QWORD *)(a1 + 472) > 0xFu ) /*0x47bf9*/
        v2 = (_QWORD *)*v2; /*0x47bfb*/
      v15 = 0; /*0x47c01*/
      v16 = 0; /*0x47c08*/
      v17 = 0; /*0x47c0d*/
      v3 = -1; /*0x47c12*/
      do /*0x47c23*/
        ++v3; /*0x47c20*/
      while ( *((_BYTE *)v2 + v3) ); /*0x47c23*/
      sub_3C230(&v15); /*0x47c2e*/
      v6 = qword_905F60; /*0x47c34*/
      if ( !qword_905F60 ) /*0x47c3e*/
      {
        v19 = operator new(0x8A8u); /*0x47c4a*/
        qword_905F60 = sub_5AE20(v19); /*0x47c58*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x47c69*/
        v6 = qword_905F60; /*0x47c6b*/
      }
      FMODAudioEngine_playEffect_0(v6, (__int64)&v15, v4, v5, *(_DWORD *)(a1 + 412)); /*0x47c90*/
    }
    if ( *(_BYTE *)(a1 + 409) ) /*0x47c95*/
    {
      if ( *(_BYTE *)(a1 + 516) ) /*0x47cae*/
      {
        LOWORD(v18) = *(_WORD *)(a1 + 517); /*0x47cbe*/
        BYTE2(v18) = *(_BYTE *)(a1 + 519); /*0x47cca*/
        v7 = (void **)&v18; /*0x47cce*/
      }
      else
      {
        LOBYTE(v18) = (int)(float)(*(float *)(a1 + 480) * 255.0); /*0x47cd9*/
        BYTE1(v18) = (_BYTE)v18; /*0x47cdd*/
        LOWORD(v19) = (_WORD)v18; /*0x47ce6*/
        BYTE2(v19) = (_BYTE)v18; /*0x47ceb*/
        v7 = &v19; /*0x47cef*/
      }
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 952LL))(a1); /*0x47cfa*/
      (**(void (__fastcall ***)(__int64, void **))(v8 + 320))(v8 + 320, v7); /*0x47d0d*/
    }
    if ( *(_BYTE *)(a1 + 408) ) /*0x47d0f*/
    {
      v9 = *(_DWORD *)(a1 + 500); /*0x47d1c*/
      if ( v9 ) /*0x47d24*/
      {
        if ( v9 != 1 ) /*0x47d72*/
          return; /*0x47d72*/
        v13 = (cocos2d::CCNode *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 952LL))(a1); /*0x47d80*/
        cocos2d::CCNode::stopActionByTag(v13, 0); /*0x47d88*/
        cocos2d::CCPoint::operator+(a1 + 504, &v18, a1 + 484); /*0x47da1*/
        v14 = cocos2d::CCMoveTo::create(*(float *)(a1 + 492), (const struct cocos2d::CCPoint *)&v18); /*0x47db4*/
        v11 = cocos2d::CCEaseInOut::create(v14, 1.5); /*0x47dcb*/
        (*(void (__fastcall **)(struct cocos2d::CCAction *, _QWORD))(*(_QWORD *)v11 + 64LL))(v11, 0); /*0x47dda*/
        v12 = v13; /*0x47ddd*/
      }
      else
      {
        cocos2d::CCNode::stopActionByTag((cocos2d::CCNode *)a1, 0); /*0x47d2b*/
        v10 = cocos2d::CCScaleTo::create(*(float *)(a1 + 492), *(float *)(a1 + 404) * *(float *)(a1 + 400)); /*0x47d49*/
        v11 = cocos2d::CCEaseBounceOut::create(v10); /*0x47d58*/
        (*(void (__fastcall **)(struct cocos2d::CCAction *, _QWORD))(*(_QWORD *)v11 + 64LL))(v11, 0); /*0x47d67*/
        v12 = (cocos2d::CCNode *)a1; /*0x47d6a*/
      }
      cocos2d::CCNode::runAction(v12, v11); /*0x47de3*/
    }
  }
}

// [5/5] Address: 0x47e00
// Method: CCMenuItemSpriteExtra::unselected
void __fastcall CCMenuItemSpriteExtra_unselected(__int64 a1)
{
  __int64 v2; // rax
  int v3; // eax
  struct cocos2d::CCActionInterval *v4; // rax
  struct cocos2d::CCAction *v5; // rbx
  cocos2d::CCNode *v6; // rdi
  struct cocos2d::CCActionInterval *v7; // rax
  struct cocos2d::CCAction *v8; // rbx

  if ( *(_BYTE *)(a1 + 345) ) /*0x47e06*/
  {
    cocos2d::CCMenuItemSprite::unselected((cocos2d::CCMenuItemSprite *)a1); /*0x47e16*/
    if ( *(_BYTE *)(a1 + 409) ) /*0x47e1c*/
    {
      v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 952LL))(a1); /*0x47e2b*/
      (**(void (__fastcall ***)(__int64, void *))(v2 + 320))(v2 + 320, &unk_6F97B0); /*0x47e42*/
    }
    if ( *(_BYTE *)(a1 + 408) ) /*0x47e44*/
    {
      v3 = *(_DWORD *)(a1 + 500); /*0x47e51*/
      if ( v3 ) /*0x47e5e*/
      {
        if ( v3 == 1 ) /*0x47eb6*/
        {
          v6 = (cocos2d::CCNode *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 952LL))(a1); /*0x47ece*/
          cocos2d::CCNode::stopActionByTag(v6, 0); /*0x47ed1*/
          v7 = cocos2d::CCMoveTo::create(*(float *)(a1 + 496), (const struct cocos2d::CCPoint *)(a1 + 504)); /*0x47ee6*/
          v8 = cocos2d::CCEaseInOut::create(v7, 2.0); /*0x47eff*/
          (*(void (__fastcall **)(struct cocos2d::CCAction *, _QWORD))(*(_QWORD *)v8 + 64LL))(v8, 0); /*0x47f0c*/
          cocos2d::CCNode::runAction(v6, v8); /*0x47f15*/
        }
      }
      else
      {
        cocos2d::CCNode::stopActionByTag((cocos2d::CCNode *)a1, 0); /*0x47e65*/
        v4 = cocos2d::CCScaleTo::create(*(float *)(a1 + 496), *(float *)(a1 + 404)); /*0x47e7b*/
        v5 = cocos2d::CCEaseBounceOut::create(v4); /*0x47e8c*/
        (*(void (__fastcall **)(struct cocos2d::CCAction *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, 0); /*0x47e99*/
        cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v5); /*0x47eac*/
      }
    }
  }
}
