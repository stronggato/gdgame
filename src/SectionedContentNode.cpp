#include <Geode/binding/SectionedContentNode.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x7fb10
// Method: SectionedContentNode::addChild
void __fastcall SectionedContentNode_addChild(
        __int64 *a1,
        struct cocos2d::CCNode *a2,
        unsigned int a3,
        unsigned int a4)
{
  if ( a1[40] ) /*0x7fb10*/
    EditorUI_selectObjects(a1[40], a2, a3, a4); /*0x7fb1f*/
  else
    cocos2d::CCNode::addChild((cocos2d::CCNode *)a1, a2, a3, a4); /*0x7fb24*/
}

// [2/3] Address: 0x7fb30
// Method: SectionedContentNode::removeAllChildrenWithCleanup
void __fastcall SectionedContentNode_removeAllChildrenWithCleanup(cocos2d::CCNode *a1, bool a2)
{
  _QWORD *v2; // rbp
  _QWORD *v5; // rsi
  _QWORD *v6; // rbx
  void *v7; // rcx
  _QWORD *v8; // rdi
  _QWORD *v9; // rbx
  void *v10; // rcx

  v2 = (_QWORD *)*((_QWORD *)a1 + 40); /*0x7fb3a*/
  if ( v2 ) /*0x7fb4b*/
  {
    v5 = (_QWORD *)v2[66]; /*0x7fb5b*/
    v6 = (_QWORD *)v5[1]; /*0x7fb67*/
    while ( !*((_BYTE *)v6 + 25) ) /*0x7fb6b*/
    {
      sub_82610(v2 + 66, v2 + 66, v6[2]); /*0x7fb83*/
      v7 = v6; /*0x7fb88*/
      v6 = (_QWORD *)*v6; /*0x7fb90*/
      j_j_free(v7); /*0x7fb93*/
    }
    v5[1] = v5; /*0x7fb9e*/
    *v5 = v5; /*0x7fba2*/
    v5[2] = v5; /*0x7fba5*/
    v2[67] = 0; /*0x7fba9*/
    v8 = (_QWORD *)v2[68]; /*0x7fbb4*/
    v9 = (_QWORD *)v8[1]; /*0x7fbbb*/
    while ( !*((_BYTE *)v9 + 25) ) /*0x7fbbf*/
    {
      sub_82610(v2 + 68, v2 + 68, v9[2]); /*0x7fbd7*/
      v10 = v9; /*0x7fbdc*/
      v9 = (_QWORD *)*v9; /*0x7fbe4*/
      j_j_free(v10); /*0x7fbe7*/
    }
    v8[1] = v8; /*0x7fbf2*/
    *v8 = v8; /*0x7fbf9*/
    v8[2] = v8; /*0x7fbfc*/
    v2[69] = 0; /*0x7fc00*/
    v2[70] = 0; /*0x7fc0b*/
    sub_82040(v2); /*0x7fc16*/
  }
  cocos2d::CCNode::removeAllChildrenWithCleanup(a1, a2); /*0x7fc3a*/
}

// [3/3] Address: 0x7fc50
// Method: SectionedContentNode::~SectionedContentNode
cocos2d::CCNode *__fastcall SectionedContentNode__dtor_SectionedContentNode(cocos2d::CCNode *Block, char a2)
{
  cocos2d::CCNode::~CCNode(Block); /*0x7fc5f*/
  if ( (a2 & 1) != 0 ) /*0x7fc68*/
    j_j_free(Block); /*0x7fc72*/
  return Block; /*0x7fc77*/
}
