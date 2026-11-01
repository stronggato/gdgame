#include <Geode/binding/CommentOptionsPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0xbc7e0
// Method: CommentOptionsPopup::~CommentOptionsPopup
// Hidden C++ exception states: #wind=1
cocos2d::CCNode *__fastcall CommentOptionsPopup__dtor_CommentOptionsPopup(cocos2d::CCNode *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *(_QWORD *)Block = &CommentOptionsPopup::`vftable'; /*0xbc7f6*/
  *((_QWORD *)Block + 40) = &CommentOptionsPopup::`vftable'; /*0xbc800*/
  *((_QWORD *)Block + 41) = &CommentOptionsPopup::`vftable'; /*0xbc80e*/
  *((_QWORD *)Block + 42) = &CommentOptionsPopup::`vftable'; /*0xbc81c*/
  *((_QWORD *)Block + 43) = &CommentOptionsPopup::`vftable'; /*0xbc82a*/
  *((_QWORD *)Block + 44) = &CommentOptionsPopup::`vftable'; /*0xbc838*/
  *((_QWORD *)Block + 51) = &CommentOptionsPopup::`vftable'; /*0xbc846*/
  *((_QWORD *)Block + 54) = &CommentOptionsPopup::`vftable'; /*0xbc854*/
  *((_QWORD *)Block + 68) = &CommentOptionsPopup::`vftable'; /*0xbc862*/
  *((_QWORD *)Block + 83) = &CommentOptionsPopup::`vftable'; /*0xbc870*/
  *((_QWORD *)Block + 84) = &CommentOptionsPopup::`vftable'; /*0xbc87e*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 125); /*0xbc885*/
  if ( v4 ) /*0xbc88f*/
    cocos2d::CCObject::release(v4); /*0xbc891*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0xbc89a*/
  if ( (a2 & 1) != 0 ) /*0xbc8a4*/
    j_j_free(Block); /*0xbc8ae*/
  return Block; /*0xbc8b6*/
}
