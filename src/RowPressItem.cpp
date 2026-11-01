#include <Geode/binding/RowPressItem.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x156f10
// Method: RowPressItem::~RowPressItem
cocos2d::CCMenuItemSprite *__fastcall RowPressItem__dtor_RowPressItem(cocos2d::CCMenuItemSprite *Block, char a2)
{
  *(_QWORD *)Block = &CCMenuItemSpriteExtra::`vftable'; /*0x156f24*/
  *((_QWORD *)Block + 40) = &CCMenuItemSpriteExtra::`vftable'; /*0x156f30*/
  sub_3C310((char *)Block + 448); /*0x156f3e*/
  sub_3C310((char *)Block + 416); /*0x156f4a*/
  cocos2d::CCMenuItemSprite::~CCMenuItemSprite(Block); /*0x156f52*/
  if ( (a2 & 1) != 0 ) /*0x156f5b*/
    j_j_free(Block); /*0x156f65*/
  return Block; /*0x156f6a*/
}

// [2/3] Address: 0x156f80
// Method: RowPressItem::selected
void __fastcall RowPressItem_selected(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  CCMenuItemSpriteExtra_selected(a1); /*0x156f89*/
  v3 = *(_QWORD *)(a1 + 520); /*0x156f8e*/
  if ( v3 ) /*0x156f98*/
  {
    LOBYTE(v2) = 1; /*0x156f9d*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 336LL))(v3, v2); /*0x156fa4*/
  }
}

// [3/3] Address: 0x156fc0
// Method: RowPressItem::unselected
void __fastcall RowPressItem_unselected(__int64 a1)
{
  __int64 v2; // rax
  int v3; // eax
  struct cocos2d::CCActionInterval *v4; // rax
  struct cocos2d::CCAction *v5; // rbx
  cocos2d::CCNode *v6; // rdi
  struct cocos2d::CCActionInterval *v7; // rax
  struct cocos2d::CCAction *v8; // rbx
  __int64 v9; // rcx

  if ( *(_BYTE *)(a1 + 345) ) /*0x156fc4*/
  {
    cocos2d::CCMenuItemSprite::unselected((cocos2d::CCMenuItemSprite *)a1); /*0x156fd9*/
    if ( *(_BYTE *)(a1 + 409) ) /*0x156fdf*/
    {
      v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 952LL))(a1); /*0x156fee*/
      (**(void (__fastcall ***)(__int64, void *))(v2 + 320))(v2 + 320, &unk_6F97B0); /*0x157005*/
    }
    if ( *(_BYTE *)(a1 + 408) ) /*0x157007*/
    {
      v3 = *(_DWORD *)(a1 + 500); /*0x157014*/
      if ( v3 ) /*0x157021*/
      {
        if ( v3 == 1 ) /*0x157070*/
        {
          v6 = (cocos2d::CCNode *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 952LL))(a1); /*0x157088*/
          cocos2d::CCNode::stopActionByTag(v6, 0); /*0x15708b*/
          v7 = cocos2d::CCMoveTo::create(*(float *)(a1 + 496), (const struct cocos2d::CCPoint *)(a1 + 504)); /*0x1570a0*/
          v8 = cocos2d::CCEaseInOut::create(v7, 2.0); /*0x1570b9*/
          (*(void (__fastcall **)(struct cocos2d::CCAction *, _QWORD))(*(_QWORD *)v8 + 64LL))(v8, 0); /*0x1570c6*/
          cocos2d::CCNode::runAction(v6, v8); /*0x1570cf*/
        }
      }
      else
      {
        cocos2d::CCNode::stopActionByTag((cocos2d::CCNode *)a1, 0); /*0x157028*/
        v4 = cocos2d::CCScaleTo::create(*(float *)(a1 + 496), *(float *)(a1 + 404)); /*0x15703e*/
        v5 = cocos2d::CCEaseBounceOut::create(v4); /*0x15704f*/
        (*(void (__fastcall **)(struct cocos2d::CCAction *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, 0); /*0x15705c*/
        cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v5); /*0x157065*/
      }
    }
  }
  v9 = *(_QWORD *)(a1 + 520); /*0x1570df*/
  if ( v9 ) /*0x1570ee*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 336LL))(v9, 0); /*0x1570f9*/
}
