#include <Geode/binding/SelectFontLayer2.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x588b70
// Method: SelectFontLayer2::~SelectFontLayer2
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall SelectFontLayer2__dtor_SelectFontLayer2(_QWORD *Block, char a2)
{
  cocos2d::CCSpriteFrameCache *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  cocos2d::CCTextureCache *v7; // rax

  *Block = &SelectFontLayer2::`vftable'; /*0x588b86*/
  Block[40] = &SelectFontLayer2::`vftable'; /*0x588b90*/
  Block[41] = &SelectFontLayer2::`vftable'; /*0x588b9e*/
  Block[42] = &SelectFontLayer2::`vftable'; /*0x588bac*/
  Block[43] = &SelectFontLayer2::`vftable'; /*0x588bba*/
  Block[44] = &SelectFontLayer2::`vftable'; /*0x588bc8*/
  Block[51] = &SelectFontLayer2::`vftable'; /*0x588bd6*/
  Block[54] = &SelectFontLayer2::`vftable'; /*0x588be4*/
  Block[68] = &SelectFontLayer2::`vftable'; /*0x588bf2*/
  Block[83] = &SelectFontLayer2::`vftable'; /*0x588c00*/
  if ( *((_BYTE *)Block + 688) ) /*0x588c07*/
  {
    v4 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x588c10*/
    cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(v4, "GJ_FontSheet.plist"); /*0x588c20*/
    v7 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v6, v5); /*0x588c26*/
    cocos2d::CCTextureCache::removeTextureForKey(v7, "GJ_FontSheet.png"); /*0x588c36*/
    *((_BYTE *)Block + 688) = 0; /*0x588c3c*/
  }
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x588c46*/
  if ( (a2 & 1) != 0 ) /*0x588c50*/
    j_j_free(Block); /*0x588c5a*/
  return Block; /*0x588c62*/
}

// [2/3] Address: 0x589580
// Method: SelectFontLayer2::cellPerformedAction
char __fastcall SelectFontLayer2_cellPerformedAction(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdx

  if ( a3 != 33 || a4 != 1 ) /*0x58958e*/
    return 0; /*0x5895d3*/
  v4 = a1 - 664; /*0x58959b*/
  sub_3F9E80(*(_QWORD *)(a1 + 8), *(unsigned int *)(a2 + 564)); /*0x5895a6*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 992LL))(v4, 0); /*0x5895b3*/
  LOBYTE(v5) = 1; /*0x5895bc*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 520LL))(v4, v5); /*0x5895c1*/
  return 1; /*0x5895ce*/
}

// [3/3] Address: 0x5895e0
// Method: SelectFontLayer2::getSelectedCellIdx
__int64 __fastcall SelectFontLayer2_getSelectedCellIdx(__int64 a1)
{
  return *(unsigned int *)(a1 + 28); /*0x5895e3*/
}
