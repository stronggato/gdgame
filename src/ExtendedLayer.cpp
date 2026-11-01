#include <Geode/binding/ExtendedLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x3f920
// Method: ExtendedLayer::~ExtendedLayer
cocos2d::CCLayer *__fastcall ExtendedLayer__dtor_ExtendedLayer(cocos2d::CCLayer *Block, char a2)
{
  cocos2d::CCLayer::~CCLayer(Block); /*0x3f92f*/
  if ( (a2 & 1) != 0 ) /*0x3f938*/
    j_j_free(Block); /*0x3f942*/
  return Block; /*0x3f947*/
}

// [2/2] Address: 0x41700
// Method: ExtendedLayer::setPosition
void __fastcall ExtendedLayer_setPosition(cocos2d::CCNode *a1, const struct cocos2d::CCPoint *a2)
{
  __int64 *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  char v7; // [rsp+30h] [rbp+8h] BYREF

  cocos2d::CCNode::setPosition(a1, a2); /*0x41715*/
  v4 = (__int64 *)*((_QWORD *)a1 + 51); /*0x4171b*/
  if ( v4 ) /*0x41725*/
  {
    v5 = *v4; /*0x41727*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v7, a2); /*0x41732*/
    (*(void (__fastcall **)(__int64 *, __int64))(v5 + 16))(v4, v6); /*0x4173e*/
  }
}
