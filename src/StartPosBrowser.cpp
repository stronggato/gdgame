#include <Geode/binding/StartPosBrowser.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x4d2320
// Method: StartPosBrowser::~StartPosBrowser
_QWORD *__fastcall StartPosBrowser__dtor_StartPosBrowser(_QWORD *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *Block = &StartPosBrowser::`vftable'; /*0x4d2336*/
  Block[40] = &StartPosBrowser::`vftable'; /*0x4d2340*/
  Block[41] = &StartPosBrowser::`vftable'; /*0x4d234e*/
  Block[42] = &StartPosBrowser::`vftable'; /*0x4d235c*/
  Block[43] = &StartPosBrowser::`vftable'; /*0x4d236a*/
  Block[44] = &StartPosBrowser::`vftable'; /*0x4d2378*/
  Block[51] = &StartPosBrowser::`vftable'; /*0x4d2386*/
  Block[54] = &StartPosBrowser::`vftable'; /*0x4d2394*/
  Block[68] = &StartPosBrowser::`vftable'; /*0x4d23a2*/
  Block[83] = &StartPosBrowser::`vftable'; /*0x4d23b0*/
  Block[84] = &StartPosBrowser::`vftable'; /*0x4d23be*/
  v4 = (cocos2d::CCObject *)Block[85]; /*0x4d23c5*/
  if ( v4 ) /*0x4d23cf*/
    cocos2d::CCObject::release(v4); /*0x4d23d1*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x4d23da*/
  if ( (a2 & 1) != 0 ) /*0x4d23e4*/
    j_j_free(Block); /*0x4d23ee*/
  return Block; /*0x4d23f6*/
}

// [2/4] Address: 0x4d7bd0
// Method: StartPosBrowser::cellPerformedAction
char __fastcall StartPosBrowser_cellPerformedAction(__int64 a1, __int64 a2, int a3, int a4)
{
  int v5; // eax
  struct cocos2d::CCObject *v6; // rbp
  int v7; // edi
  cocos2d::CCArray *v8; // rcx
  void (__fastcall ***v9)(_QWORD, __int64, _QWORD, struct cocos2d::CCObject *); // rcx

  if ( a3 != 24 || a4 != 1 ) /*0x4d7be7*/
    return 0; /*0x4d7c7c*/
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 560) + 56LL))(*(_QWORD *)(a2 + 560)); /*0x4d7c06*/
  v6 = 0; /*0x4d7c09*/
  *(_DWORD *)(a1 + 32) = v5; /*0x4d7c0b*/
  v7 = v5; /*0x4d7c0e*/
  if ( v5 > 0 ) /*0x4d7c12*/
  {
    v8 = *(cocos2d::CCArray **)(a1 + 16); /*0x4d7c14*/
    if ( v8 ) /*0x4d7c1b*/
    {
      if ( v5 <= cocos2d::CCArray::count(v8) ) /*0x4d7c25*/
        v6 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 16), v7 - 1); /*0x4d7c34*/
    }
  }
  v9 = *(void (__fastcall ****)(_QWORD, __int64, _QWORD, struct cocos2d::CCObject *))(a1 + 48); /*0x4d7c37*/
  if ( v9 ) /*0x4d7c43*/
    (**v9)(v9, a1 - 664, *(unsigned int *)(a1 + 32), v6); /*0x4d7c59*/
  sub_4D7CA0(a1 - 664, 0); /*0x4d7c65*/
  return 1; /*0x4d7c76*/
}

// [3/4] Address: 0x4d7c90
// Method: StartPosBrowser::getSelectedCellIdx
__int64 __fastcall StartPosBrowser_getSelectedCellIdx(__int64 a1)
{
  return *(unsigned int *)(a1 + 32); /*0x4d7c93*/
}

// [4/4] Address: 0x4d7d20
// Method: StartPosBrowser::keyBackClicked
__int64 __fastcall StartPosBrowser_keyBackClicked(__int64 a1)
{
  return sub_4D7CA0(a1 - 336, 0);
}
