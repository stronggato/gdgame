#include <Geode/binding/SmartTemplateCell.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x88940
// Method: SmartTemplateCell::loadFromObject
// Hidden C++ exception states: #wind=4
__int64 __fastcall SmartTemplateCell_loadFromObject(__int64 a1, __int64 a2, float a3, float a4)
{
  struct cocos2d::CCNode *v6; // rax
  __int64 v7; // rbx
  struct cocos2d::CCNode *v8; // rax
  void **v9; // rdx
  void *v10; // rcx
  int v12; // [rsp+30h] [rbp-78h] BYREF
  __int64 v13; // [rsp+38h] [rbp-70h]
  void *Block[2]; // [rsp+40h] [rbp-68h] BYREF
  size_t Size; // [rsp+50h] [rbp-58h]
  unsigned __int64 v16; // [rsp+58h] [rbp-50h]

  v13 = a1; /*0x88979*/
  cocos2d::CCLayer::CCLayer((cocos2d::CCLayer *)a1); /*0x8897e*/
  *(_QWORD *)a1 = &TableViewCell::`vftable'; /*0x8898c*/
  *(_QWORD *)(a1 + 320) = &TableViewCell::`vftable'; /*0x88996*/
  *(_QWORD *)(a1 + 328) = &TableViewCell::`vftable'; /*0x889a4*/
  *(_QWORD *)(a1 + 336) = &TableViewCell::`vftable'; /*0x889b2*/
  *(_QWORD *)(a1 + 344) = &TableViewCell::`vftable'; /*0x889c0*/
  *(_QWORD *)(a1 + 352) = &TableViewCell::`vftable'; /*0x889ce*/
  cocos2d::CCObject::CCObject((cocos2d::CCObject *)(a1 + 424)); /*0x889dc*/
  *(_QWORD *)(a1 + 424) = &CCIndexPath::`vftable'; /*0x889e9*/
  *(_QWORD *)(a1 + 480) = 0; /*0x889f2*/
  *(_OWORD *)(a1 + 496) = 0; /*0x88a03*/
  *(_QWORD *)(a1 + 512) = 0; /*0x88a07*/
  *(_QWORD *)(a1 + 520) = 15; /*0x88a0b*/
  *(_BYTE *)(a1 + 496) = 0; /*0x88a13*/
  *(float *)(a1 + 528) = a3; /*0x88a16*/
  *(float *)(a1 + 532) = a4; /*0x88a1e*/
  v12 = 0; /*0x88a26*/
  v6 = cocos2d::CCLayerColor::create((const struct cocos2d::_ccColor4B *)&v12, a3, a4); /*0x88a35*/
  *(_QWORD *)(a1 + 536) = v6; /*0x88a3b*/
  v7 = -1; /*0x88a42*/
  cocos2d::CCNode::addChild((cocos2d::CCNode *)a1, v6, -1); /*0x88a52*/
  v8 = (struct cocos2d::CCNode *)cocos2d::CCLayer::create(); /*0x88a58*/
  *(_QWORD *)(a1 + 544) = v8; /*0x88a5e*/
  cocos2d::CCNode::addChild((cocos2d::CCNode *)a1, v8); /*0x88a6b*/
  *(_OWORD *)Block = 0; /*0x88a74*/
  Size = 0; /*0x88a79*/
  v16 = 0; /*0x88a7e*/
  do /*0x88a86*/
    ++v7; /*0x88a83*/
  while ( *(_BYTE *)(a2 + v7) ); /*0x88a86*/
  sub_3C230(Block); /*0x88a97*/
  if ( (void **)(a1 + 496) != Block ) /*0x88aa5*/
  {
    v9 = Block; /*0x88aa7*/
    if ( v16 > 0xF ) /*0x88ab2*/
      v9 = (void **)Block[0]; /*0x88ab2*/
    sub_3F5A0((void *)(a1 + 496), v9, Size); /*0x88ac0*/
  }
  *(_BYTE *)(a1 + 488) = 0; /*0x88ac5*/
  *(_QWORD *)(a1 + 416) = 0; /*0x88acc*/
  if ( v16 > 0xF ) /*0x88adc*/
  {
    v10 = Block[0]; /*0x88ae1*/
    if ( v16 + 1 >= 0x1000 ) /*0x88af0*/
    {
      v10 = (void *)*((_QWORD *)Block[0] - 1); /*0x88af6*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v10 - 8) > 0x1F ) /*0x88b05*/
        invoke_watson(0, 0, 0, 0, 0); /*0x88b16*/
    }
    j_j_free(v10); /*0x88b1d*/
  }
  return a1; /*0x88b26*/
}

// [2/2] Address: 0x15b680
// Method: SmartTemplateCell::~SmartTemplateCell
_QWORD *__fastcall SmartTemplateCell__dtor_SmartTemplateCell(_QWORD *Block, char a2)
{
  *Block = &SmartTemplateCell::`vftable'; /*0x15b693*/
  Block[40] = &SmartTemplateCell::`vftable'; /*0x15b6a0*/
  Block[41] = &SmartTemplateCell::`vftable'; /*0x15b6ae*/
  Block[42] = &SmartTemplateCell::`vftable'; /*0x15b6bc*/
  Block[43] = &SmartTemplateCell::`vftable'; /*0x15b6ca*/
  Block[44] = &SmartTemplateCell::`vftable'; /*0x15b6d8*/
  URLCell__dtor_URLCell(Block); /*0x15b6df*/
  if ( (a2 & 1) != 0 ) /*0x15b6e7*/
    j_j_free(Block); /*0x15b6f1*/
  return Block; /*0x15b6f6*/
}
