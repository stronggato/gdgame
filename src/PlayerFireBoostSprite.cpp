#include <Geode/binding/PlayerFireBoostSprite.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x7d610
// Method: PlayerFireBoostSprite::~PlayerFireBoostSprite
cocos2d::CCSprite *__fastcall PlayerFireBoostSprite__dtor_PlayerFireBoostSprite(cocos2d::CCSprite *Block, char a2)
{
  cocos2d::CCSprite::~CCSprite(Block); /*0x7d61f*/
  if ( (a2 & 1) != 0 ) /*0x7d628*/
    j_j_free(Block); /*0x7d632*/
  return Block; /*0x7d637*/
}

// [2/4] Address: 0x4fda60
// Method: PlayerFireBoostSprite::create
// Hidden C++ exception states: #wind=1
cocos2d::CCSprite *PlayerFireBoostSprite_create()
{
  cocos2d::CCSprite *v0; // rbx

  v0 = (cocos2d::CCSprite *)operator new(0x260u); /*0x4fda70*/
  cocos2d::CCSprite::CCSprite(v0); /*0x4fda7b*/
  *(_QWORD *)v0 = &PlayerFireBoostSprite::`vftable'; /*0x4fda88*/
  *((_QWORD *)v0 + 40) = &PlayerFireBoostSprite::`vftable'; /*0x4fda92*/
  *((_QWORD *)v0 + 43) = &PlayerFireBoostSprite::`vftable'; /*0x4fdaa0*/
  *((_DWORD *)v0 + 150) = 1065353216; /*0x4fdaa7*/
  if ( (unsigned __int8)PlayerFireBoostSprite_init(v0) ) /*0x4fdac7*/
  {
    cocos2d::CCObject::autorelease(v0); /*0x4fdad7*/
    return v0; /*0x4fdadd*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCSprite *, __int64))(*(_QWORD *)v0 + 8LL))(v0, 1); /*0x4fdaee*/
    return 0; /*0x4fdaf1*/
  }
}

// [3/4] Address: 0x4fdb00
// Method: PlayerFireBoostSprite::init
bool __fastcall PlayerFireBoostSprite_init(cocos2d::CCSprite *a1)
{
  bool result; // al
  __int64 v3; // rbx
  __int64 v4; // rax
  char v5; // [rsp+38h] [rbp+10h] BYREF

  result = cocos2d::CCSprite::initWithFile(a1, "fireBoost_001.png"); /*0x4fdb10*/
  if ( result ) /*0x4fdb18*/
  {
    v3 = *(_QWORD *)a1; /*0x4fdb3a*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v5, 0.5, 1.0); /*0x4fdb3d*/
    (*(void (__fastcall **)(cocos2d::CCSprite *, __int64))(v3 + 288))(a1, v4); /*0x4fdb49*/
    return 1; /*0x4fdb54*/
  }
  return result; /*0x4fdb1a*/
}

// [4/4] Address: 0x4fdb60
// Method: PlayerFireBoostSprite::loopFireAnimation
struct cocos2d::CCAction *__fastcall PlayerFireBoostSprite_loopFireAnimation(float *a1)
{
  struct cocos2d::CCFiniteTimeAction *v2; // rbx
  struct cocos2d::CCScaleTo *v3; // rax
  struct cocos2d::CCActionInterval *v4; // rax
  struct cocos2d::CCAction *v5; // rax

  cocos2d::CCNode::stopAllActions((cocos2d::CCNode *)a1); /*0x4fdb6d*/
  v2 = cocos2d::CCScaleTo::create(0.059999999, a1[150] * 1.2, a1[150]); /*0x4fdb9c*/
  v3 = cocos2d::CCScaleTo::create(0.059999999, a1[150] * 0.60000002, a1[150] * 1.5); /*0x4fdbba*/
  v4 = cocos2d::CCSequence::create(v2, v3, 0); /*0x4fdbc9*/
  v5 = cocos2d::CCRepeatForever::create(v4); /*0x4fdbd2*/
  return cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v5); /*0x4fdbde*/
}
