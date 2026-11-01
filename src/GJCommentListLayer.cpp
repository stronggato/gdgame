#include <Geode/binding/GJCommentListLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x3954d0
// Method: GJCommentListLayer::~GJCommentListLayer
// Hidden C++ exception states: #wind=1
struct cocos2d::CCObject *__fastcall GJCommentListLayer__dtor_GJCommentListLayer(
        struct cocos2d::CCObject *Block,
        char a2)
{
  __int64 v4; // rax
  cocos2d::CCTouchDispatcher *v5; // rax

  *(_QWORD *)Block = &GJCommentListLayer::`vftable'; /*0x3954e6*/
  *((_QWORD *)Block + 40) = &GJCommentListLayer::`vftable'; /*0x3954f0*/
  *((_QWORD *)Block + 41) = &GJCommentListLayer::`vftable'; /*0x3954fe*/
  *((_QWORD *)Block + 42) = &GJCommentListLayer::`vftable'; /*0x39550c*/
  *((_QWORD *)Block + 43) = &GJCommentListLayer::`vftable'; /*0x39551a*/
  *((_QWORD *)Block + 44) = &GJCommentListLayer::`vftable'; /*0x395528*/
  *((_QWORD *)Block + 51) = &GJCommentListLayer::`vftable'; /*0x395536*/
  *((_QWORD *)Block + 54) = &GJCommentListLayer::`vftable'; /*0x395544*/
  v4 = cocos2d::CCDirector::sharedDirector(Block); /*0x39554b*/
  v5 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 144LL))(v4); /*0x39555e*/
  cocos2d::CCTouchDispatcher::unregisterForcePrio(v5, Block); /*0x395566*/
  cocos2d::CCLayerColor::~CCLayerColor(Block); /*0x39556f*/
  if ( (a2 & 1) != 0 ) /*0x395579*/
    j_j_free(Block); /*0x395583*/
  return Block; /*0x39558b*/
}

// [2/3] Address: 0x3989b0
// Method: GJCommentListLayer::create
// Hidden C++ exception states: #wind=1
cocos2d::CCLayerColor *__fastcall GJCommentListLayer_create(int a1, __int64 a2, int a3, float a4, int a5, char a6)
{
  cocos2d::CCLayerColor *v8; // rsi
  int v9; // r8d

  v8 = (cocos2d::CCLayerColor *)operator new(0x228u); /*0x3989dc*/
  cocos2d::CCLayerColor::CCLayerColor(v8); /*0x3989e7*/
  *(_QWORD *)v8 = &GJCommentListLayer::`vftable'; /*0x3989f4*/
  *((_QWORD *)v8 + 40) = &GJCommentListLayer::`vftable'; /*0x3989fe*/
  *((_QWORD *)v8 + 41) = &GJCommentListLayer::`vftable'; /*0x398a0c*/
  *((_QWORD *)v8 + 42) = &GJCommentListLayer::`vftable'; /*0x398a1a*/
  *((_QWORD *)v8 + 43) = &GJCommentListLayer::`vftable'; /*0x398a28*/
  *((_QWORD *)v8 + 44) = &GJCommentListLayer::`vftable'; /*0x398a36*/
  *((_QWORD *)v8 + 51) = &GJCommentListLayer::`vftable'; /*0x398a44*/
  *((_QWORD *)v8 + 54) = &GJCommentListLayer::`vftable'; /*0x398a52*/
  *((_QWORD *)v8 + 68) = 0; /*0x398a59*/
  if ( (unsigned __int8)GJCommentListLayer_init((_DWORD)v8, a1, v9, a3, LODWORD(a4), a5, a6) ) /*0x398a8e*/
  {
    cocos2d::CCObject::autorelease(v8); /*0x398a9a*/
    return v8; /*0x398aa0*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCLayerColor *, __int64))(*(_QWORD *)v8 + 8LL))(v8, 1); /*0x398ab4*/
    return 0; /*0x398ab7*/
  }
}
