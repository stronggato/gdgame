#include <Geode/binding/LoadingCircle.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/7] Address: 0x77510
// Method: LoadingCircle::~LoadingCircle
cocos2d::CCLayerColor *__fastcall LoadingCircle__dtor_LoadingCircle(cocos2d::CCLayerColor *Block, char a2)
{
  *(_QWORD *)Block = &LoadingCircle::`vftable'; /*0x77523*/
  *((_QWORD *)Block + 40) = &LoadingCircle::`vftable'; /*0x77530*/
  *((_QWORD *)Block + 41) = &LoadingCircle::`vftable'; /*0x7753e*/
  *((_QWORD *)Block + 42) = &LoadingCircle::`vftable'; /*0x7754c*/
  *((_QWORD *)Block + 43) = &LoadingCircle::`vftable'; /*0x7755a*/
  *((_QWORD *)Block + 44) = &LoadingCircle::`vftable'; /*0x77568*/
  *((_QWORD *)Block + 51) = &LoadingCircle::`vftable'; /*0x77576*/
  *((_QWORD *)Block + 54) = &LoadingCircle::`vftable'; /*0x77584*/
  cocos2d::CCLayerColor::~CCLayerColor(Block); /*0x7758b*/
  if ( (a2 & 1) != 0 ) /*0x77594*/
    j_j_free(Block); /*0x7759e*/
  return Block; /*0x775a3*/
}

// [2/7] Address: 0x77620
// Method: LoadingCircle::create
// Hidden C++ exception states: #wind=1
cocos2d::CCLayerColor *LoadingCircle_create()
{
  cocos2d::CCLayerColor *v0; // rbx

  v0 = (cocos2d::CCLayerColor *)operator new(0x238u); /*0x77630*/
  cocos2d::CCLayerColor::CCLayerColor(v0); /*0x7763b*/
  *(_QWORD *)v0 = &LoadingCircle::`vftable'; /*0x77648*/
  *((_QWORD *)v0 + 40) = &LoadingCircle::`vftable'; /*0x77652*/
  *((_QWORD *)v0 + 41) = &LoadingCircle::`vftable'; /*0x77660*/
  *((_QWORD *)v0 + 42) = &LoadingCircle::`vftable'; /*0x7766e*/
  *((_QWORD *)v0 + 43) = &LoadingCircle::`vftable'; /*0x7767c*/
  *((_QWORD *)v0 + 44) = &LoadingCircle::`vftable'; /*0x7768a*/
  *((_QWORD *)v0 + 51) = &LoadingCircle::`vftable'; /*0x77698*/
  *((_QWORD *)v0 + 54) = &LoadingCircle::`vftable'; /*0x776a6*/
  *((_QWORD *)v0 + 68) = 0; /*0x776ad*/
  *((_QWORD *)v0 + 69) = 0; /*0x776b8*/
  *((_BYTE *)v0 + 560) = 0; /*0x776c3*/
  if ( (unsigned __int8)LoadingCircle_init(v0) ) /*0x776e0*/
  {
    cocos2d::CCObject::autorelease(v0); /*0x776f0*/
    return v0; /*0x776f6*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCLayerColor *, __int64))(*(_QWORD *)v0 + 8LL))(v0, 1); /*0x7770e*/
    return 0; /*0x77711*/
  }
}

// [3/7] Address: 0x77720
// Method: LoadingCircle::init
bool __fastcall LoadingCircle_init(cocos2d::CCLayerColor *a1)
{
  bool result; // al
  __int64 v3; // rcx
  __int64 v4; // rax
  struct cocos2d::CCSprite *v5; // rax
  float v6; // xmm1_4
  struct cocos2d::CCSprite *v7; // rdi
  float v8; // xmm2_4
  __int64 v9; // rbx
  __int64 v10; // rax
  void (__fastcall ***v11)(_QWORD, __int64); // rcx
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF
  float v13; // [rsp+40h] [rbp+18h] BYREF
  float v14; // [rsp+44h] [rbp+1Ch]

  LODWORD(v12) = 0; /*0x7772b*/
  result = cocos2d::CCLayerColor::initWithColor(a1, (const struct cocos2d::_ccColor4B *)&v12); /*0x77736*/
  if ( result ) /*0x7773e*/
  {
    v4 = cocos2d::CCDirector::sharedDirector(v3); /*0x77750*/
    cocos2d::CCDirector::getWinSize(v4, &v13); /*0x7775e*/
    v5 = cocos2d::CCSprite::create("loadingCircle.png"); /*0x7776b*/
    v6 = v13; /*0x7777c*/
    v7 = v5; /*0x77782*/
    v8 = v14 * 0.5; /*0x77785*/
    *((_QWORD *)a1 + 68) = v5; /*0x7778d*/
    v9 = *(_QWORD *)v5; /*0x7779c*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v12, v6 * 0.5, v8); /*0x7779f*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v9 + 184))(v7, v10); /*0x777ab*/
    v11 = (void (__fastcall ***)(_QWORD, __int64))(*((_QWORD *)a1 + 68) + 344LL); /*0x777b8*/
    v12 = 0x100000302LL; /*0x777bf*/
    (**v11)(v11, 0x100000302LL); /*0x777d7*/
    (*(void (__fastcall **)(cocos2d::CCLayerColor *, _QWORD))(*(_QWORD *)a1 + 464LL))(a1, *((_QWORD *)a1 + 68)); /*0x777e6*/
    return 1; /*0x777f1*/
  }
  return result; /*0x77740*/
}

// [4/7] Address: 0x77800
// Method: LoadingCircle::show
struct cocos2d::CCAction *__fastcall LoadingCircle_show(__int64 a1)
{
  __int64 v2; // rcx
  struct cocos2d::CCAction *v3; // rbx
  struct cocos2d::CCActionInterval *v4; // rax
  struct cocos2d::CCAction *v5; // rax
  struct cocos2d::CCAction *v6; // rbx

  v2 = *(_QWORD *)(cocos2d::CCDirector::sharedDirector(a1) + 272); /*0x7781c*/
  if ( *(_QWORD *)(a1 + 552) ) /*0x77823*/
    v2 = *(_QWORD *)(a1 + 552); /*0x7782d*/
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v2 + 456LL))(v2, a1, 105); /*0x77834*/
  if ( *(_BYTE *)(a1 + 560) ) /*0x7783a*/
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 408) + 40LL))(a1 + 408, 0); /*0x7784f*/
    v3 = cocos2d::CCFadeTo::create(0.40000001, 0x96u); /*0x77867*/
    (*(void (__fastcall **)(struct cocos2d::CCAction *, __int64))(*(_QWORD *)v3 + 64LL))(v3, 1); /*0x77874*/
    cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v3); /*0x7787d*/
  }
  v4 = cocos2d::CCRotateBy::create(1.0, 360.0); /*0x77893*/
  v5 = cocos2d::CCRepeatForever::create(v4); /*0x7789c*/
  cocos2d::CCNode::runAction(*(cocos2d::CCNode **)(a1 + 544), v5); /*0x778ac*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 544) + 320LL) + 40LL))( /*0x778c5*/
    *(_QWORD *)(a1 + 544) + 320LL,
    0);
  v6 = cocos2d::CCFadeTo::create(0.40000001, 0xC8u); /*0x778da*/
  (*(void (__fastcall **)(struct cocos2d::CCAction *, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, 0); /*0x778e7*/
  return cocos2d::CCNode::runAction(*(cocos2d::CCNode **)(a1 + 544), v6); /*0x778f4*/
}

// [5/7] Address: 0x77910
// Method: LoadingCircle::fadeAndRemove
struct cocos2d::CCAction *__fastcall LoadingCircle_fadeAndRemove(__int64 a1)
{
  struct cocos2d::CCFiniteTimeAction *v2; // rbx
  __int64 v3; // rax
  struct cocos2d::CCAction *v4; // rax
  struct cocos2d::CCAction *result; // rax
  struct cocos2d::CCAction *v6; // rax

  cocos2d::CCNode::stopActionByTag(*(cocos2d::CCNode **)(a1 + 544), 0); /*0x77926*/
  v2 = cocos2d::CCFadeTo::create(0.30000001, 0); /*0x77946*/
  v3 = cocos2d::CCCallFunc::create(a1, sub_3E5B0); /*0x77949*/
  v4 = cocos2d::CCSequence::create(v2, v3, 0); /*0x77958*/
  result = cocos2d::CCNode::runAction(*(cocos2d::CCNode **)(a1 + 544), v4); /*0x77968*/
  if ( *(_BYTE *)(a1 + 560) ) /*0x7796e*/
  {
    cocos2d::CCNode::stopActionByTag((cocos2d::CCNode *)a1, 1); /*0x7797f*/
    v6 = cocos2d::CCFadeTo::create(0.30000001, 0); /*0x7798f*/
    return cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v6); /*0x7799b*/
  }
  return result; /*0x779a1*/
}

// [6/7] Address: 0x779b0
// Method: LoadingCircle::draw
void __fastcall LoadingCircle_draw(cocos2d::CCLayerColor *a1)
{
  if ( *((_BYTE *)a1 + 560) ) /*0x779b0*/
    cocos2d::CCLayerColor::draw(a1); /*0x779b9*/
}

// [7/7] Address: 0x779d0
// Method: LoadingCircle::registerWithTouchDispatcher
void __fastcall LoadingCircle_registerWithTouchDispatcher(__int64 a1)
{
  __int64 v2; // rax
  struct cocos2d::CCTouchDelegate *v3; // rdi
  cocos2d::CCTouchDispatcher *v4; // rax

  v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x779dd*/
  v3 = (struct cocos2d::CCTouchDelegate *)(a1 + 320); /*0x779e5*/
  if ( !a1 ) /*0x779ef*/
    v3 = 0; /*0x779ef*/
  v4 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2); /*0x77a00*/
  cocos2d::CCTouchDispatcher::addTargetedDelegate(v4, v3, -2147483647, 1); /*0x77a1c*/
}
