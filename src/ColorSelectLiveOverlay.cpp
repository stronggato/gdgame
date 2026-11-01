#include <Geode/binding/ColorSelectLiveOverlay.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/4] Address: 0x122670
// Method: ColorSelectLiveOverlay::~ColorSelectLiveOverlay
// Hidden C++ exception states: #wind=1
cocos2d::CCNode *__fastcall ColorSelectLiveOverlay__dtor_ColorSelectLiveOverlay(cocos2d::CCNode *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx
  cocos2d::CCObject *v5; // rcx
  cocos2d::CCObject *v6; // rcx
  cocos2d::CCObject *v7; // rcx
  cocos2d::CCObject *v8; // rcx

  *(_QWORD *)Block = &ColorSelectLiveOverlay::`vftable'; /*0x122686*/
  *((_QWORD *)Block + 40) = &ColorSelectLiveOverlay::`vftable'; /*0x122690*/
  *((_QWORD *)Block + 41) = &ColorSelectLiveOverlay::`vftable'; /*0x12269e*/
  *((_QWORD *)Block + 42) = &ColorSelectLiveOverlay::`vftable'; /*0x1226ac*/
  *((_QWORD *)Block + 43) = &ColorSelectLiveOverlay::`vftable'; /*0x1226ba*/
  *((_QWORD *)Block + 44) = &ColorSelectLiveOverlay::`vftable'; /*0x1226c8*/
  *((_QWORD *)Block + 51) = &ColorSelectLiveOverlay::`vftable'; /*0x1226d6*/
  *((_QWORD *)Block + 54) = &ColorSelectLiveOverlay::`vftable'; /*0x1226e4*/
  *((_QWORD *)Block + 68) = &ColorSelectLiveOverlay::`vftable'; /*0x1226f2*/
  cocos2d::CCNode::removeAllChildrenWithCleanup(Block, 1); /*0x1226fb*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 86); /*0x122701*/
  if ( v4 ) /*0x12270b*/
    cocos2d::CCObject::release(v4); /*0x12270d*/
  v5 = (cocos2d::CCObject *)*((_QWORD *)Block + 87); /*0x122713*/
  if ( v5 ) /*0x12271d*/
    cocos2d::CCObject::release(v5); /*0x12271f*/
  v6 = (cocos2d::CCObject *)*((_QWORD *)Block + 85); /*0x122725*/
  if ( v6 ) /*0x12272f*/
    cocos2d::CCObject::release(v6); /*0x122731*/
  v7 = (cocos2d::CCObject *)*((_QWORD *)Block + 84); /*0x122737*/
  if ( v7 ) /*0x122741*/
    cocos2d::CCObject::release(v7); /*0x122743*/
  v8 = (cocos2d::CCObject *)*((_QWORD *)Block + 83); /*0x122749*/
  if ( v8 ) /*0x122753*/
    cocos2d::CCObject::release(v8); /*0x122755*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x12275e*/
  if ( (a2 & 1) != 0 ) /*0x122768*/
    j_j_free(Block); /*0x122772*/
  return Block; /*0x12277a*/
}

// [3/4] Address: 0x123c20
// Method: ColorSelectLiveOverlay::onSelectTab
__int64 __fastcall ColorSelectLiveOverlay_onSelectTab(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned int i; // ebp
  struct cocos2d::CCObject *v8; // rdi
  int v9; // ebx
  int v10; // eax
  const char *v11; // rdx
  __int64 v12; // rdx
  __int16 v13; // [rsp+40h] [rbp+8h] BYREF
  char v14; // [rsp+42h] [rbp+Ah]

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x123c34*/
  if ( *(_BYTE *)(a1 + 856) != ((_DWORD)result != 1) ) /*0x123c43*/
  {
    *(_BYTE *)(a1 + 856) = (_DWORD)result != 1; /*0x123c49*/
    v5 = 696; /*0x123c5c*/
    if ( (_DWORD)result == 1 ) /*0x123c61*/
      v5 = 688; /*0x123c61*/
    v6 = *(_QWORD *)(v5 + a1); /*0x123c64*/
    *(_DWORD *)(a1 + 728) = *(_DWORD *)(v6 + 96); /*0x123c6e*/
    v13 = *(_WORD *)(v6 + 72); /*0x123c78*/
    v14 = *(_BYTE *)(v6 + 74); /*0x123c86*/
    sub_123E10(a1, &v13); /*0x123c8a*/
    for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 680)); ++i ) /*0x123c98*/
    {
      v8 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 680), i); /*0x123cd2*/
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x123ce1*/
      v10 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v8 + 56LL))(v8); /*0x123cea*/
      v11 = "GJ_button_04.png"; /*0x123cee*/
      if ( v9 == v10 ) /*0x123cf8*/
        v11 = "GJ_button_01.png"; /*0x123cf8*/
      sub_41FC0(v8, v11); /*0x123cfc*/
    }
    v12 = 707; /*0x123d36*/
    if ( !*(_BYTE *)(a1 + 856) ) /*0x123d3b*/
      v12 = 704; /*0x123d42*/
    (**(void (__fastcall ***)(__int64, __int64))(*(_QWORD *)(a1 + 792) + 320LL))( /*0x123d4b*/
      *(_QWORD *)(a1 + 792) + 320LL,
      a1 + v12);
    return sub_1240B0(a1); /*0x123d50*/
  }
  return result; /*0x123d5a*/
}

// [4/4] Address: 0x123d70
// Method: ColorSelectLiveOverlay::keyBackClicked
__int64 __fastcall ColorSelectLiveOverlay_keyBackClicked(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdx
  void (__fastcall ***v3)(_QWORD, _QWORD *); // rcx

  v1 = (_QWORD *)(a1 - 336); /*0x123d76*/
  *(_BYTE *)(a1 - 336 + 857) = 0; /*0x123d82*/
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*v1 + 992LL))(v1, 0); /*0x123d8c*/
  v3 = (void (__fastcall ***)(_QWORD, _QWORD *))v1[92]; /*0x123d92*/
  if ( v3 ) /*0x123d9c*/
    (**v3)(v3, v1); /*0x123da4*/
  LOBYTE(v2) = 1; /*0x123da9*/
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v1 + 520LL))(v1, v2);
}
