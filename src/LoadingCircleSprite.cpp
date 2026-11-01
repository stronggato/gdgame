#include <Geode/binding/LoadingCircleSprite.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x775c0
// Method: LoadingCircleSprite::~LoadingCircleSprite
cocos2d::CCSprite *__fastcall LoadingCircleSprite__dtor_LoadingCircleSprite(cocos2d::CCSprite *Block, char a2)
{
  *(_QWORD *)Block = &LoadingCircleSprite::`vftable'; /*0x775d3*/
  *((_QWORD *)Block + 40) = &LoadingCircleSprite::`vftable'; /*0x775e0*/
  *((_QWORD *)Block + 43) = &LoadingCircleSprite::`vftable'; /*0x775ee*/
  cocos2d::CCSprite::~CCSprite(Block); /*0x775f5*/
  if ( (a2 & 1) != 0 ) /*0x775fe*/
    j_j_free(Block); /*0x77608*/
  return Block; /*0x7760d*/
}

// [2/3] Address: 0x77a30
// Method: LoadingCircleSprite::create
// Hidden C++ exception states: #wind=1
cocos2d::CCSprite *__fastcall LoadingCircleSprite_create(float a1)
{
  cocos2d::CCSprite *v1; // rbx
  struct cocos2d::CCActionInterval *v2; // rax
  struct cocos2d::CCAction *v3; // rax

  v1 = (cocos2d::CCSprite *)operator new(0x258u); /*0x77a4c*/
  cocos2d::CCSprite::CCSprite(v1); /*0x77a57*/
  *(_QWORD *)v1 = &LoadingCircleSprite::`vftable'; /*0x77a64*/
  *((_QWORD *)v1 + 40) = &LoadingCircleSprite::`vftable'; /*0x77a6e*/
  *((_QWORD *)v1 + 43) = &LoadingCircleSprite::`vftable'; /*0x77a7c*/
  if ( cocos2d::CCSprite::initWithFile(v1, "loadingCircle.png") ) /*0x77a8d*/
  {
    (**((void (__fastcall ***)(_QWORD *, __int64))v1 + 43))((_QWORD *)v1 + 43, 0x100000302LL); /*0x77aba*/
    v2 = cocos2d::CCRotateBy::create(1.0, a1 * 360.0); /*0x77acf*/
    v3 = cocos2d::CCRepeatForever::create(v2); /*0x77ad8*/
    cocos2d::CCNode::runAction(v1, v3); /*0x77ae4*/
    cocos2d::CCObject::autorelease(v1); /*0x77aed*/
    return v1; /*0x77af3*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCSprite *, __int64))(*(_QWORD *)v1 + 8LL))(v1, 1); /*0x77b11*/
    return 0; /*0x77b14*/
  }
}

// [3/3] Address: 0x77b30
// Method: LoadingCircleSprite::fadeInCircle
struct cocos2d::CCAction *__fastcall LoadingCircleSprite_fadeInCircle(
        cocos2d::CCNode *a1,
        __int64 a2,
        float a3,
        float a4)
{
  __int64 v5; // rdx
  struct cocos2d::CCAction *v6; // rbx

  cocos2d::CCNode::stopActionByTag(a1, 0); /*0x77b4f*/
  LOBYTE(v5) = 1; /*0x77b58*/
  (*(void (__fastcall **)(cocos2d::CCNode *, __int64))(*(_QWORD *)a1 + 336LL))(a1, v5); /*0x77b5d*/
  v6 = cocos2d::CCFadeTo::create(a3, (int)a4); /*0x77b73*/
  (*(void (__fastcall **)(struct cocos2d::CCAction *, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, 0); /*0x77b7f*/
  return cocos2d::CCNode::runAction(a1, v6); /*0x77b88*/
}
