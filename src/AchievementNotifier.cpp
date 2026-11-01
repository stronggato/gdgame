#include <Geode/binding/AchievementNotifier.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x3c4d0
// Method: AchievementNotifier::~AchievementNotifier
// Hidden C++ exception states: #wind=1
cocos2d::CCNode *__fastcall AchievementNotifier__dtor_AchievementNotifier(cocos2d::CCNode *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx
  __int64 v5; // rcx
  cocos2d::CCObject *v6; // rcx

  *(_QWORD *)Block = &AchievementNotifier::`vftable'; /*0x3c4e6*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 41); /*0x3c4e9*/
  if ( v4 ) /*0x3c4f3*/
    cocos2d::CCObject::release(v4); /*0x3c4f5*/
  v5 = *((_QWORD *)Block + 42); /*0x3c4fb*/
  if ( v5 ) /*0x3c505*/
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 728LL))(v5); /*0x3c50a*/
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)Block + 42) + 528LL))(*((_QWORD *)Block + 42)); /*0x3c51a*/
    v6 = (cocos2d::CCObject *)*((_QWORD *)Block + 42); /*0x3c520*/
    if ( v6 ) /*0x3c52a*/
      cocos2d::CCObject::release(v6); /*0x3c52c*/
  }
  cocos2d::CCNode::~CCNode(Block); /*0x3c535*/
  if ( (a2 & 1) != 0 ) /*0x3c540*/
    j_j_free(Block); /*0x3c54a*/
  return Block; /*0x3c552*/
}

// [2/5] Address: 0x3c560
// Method: AchievementNotifier::sharedState
// Hidden C++ exception states: #wind=1
__int64 AchievementNotifier_sharedState()
{
  __int64 result; // rax
  cocos2d::CCObject *v1; // rax
  cocos2d::CCNode *v2; // [rsp+30h] [rbp+8h]

  result = qword_905F40; /*0x3c566*/
  if ( !qword_905F40 ) /*0x3c570*/
  {
    v2 = (cocos2d::CCNode *)operator new(0x158u); /*0x3c583*/
    cocos2d::CCNode::CCNode(v2); /*0x3c58b*/
    *(_QWORD *)v2 = &AchievementNotifier::`vftable'; /*0x3c598*/
    *((_QWORD *)v2 + 40) = 0; /*0x3c59d*/
    *((_QWORD *)v2 + 41) = 0; /*0x3c5a4*/
    *((_QWORD *)v2 + 42) = 0; /*0x3c5ab*/
    qword_905F40 = (__int64)v2; /*0x3c5b2*/
    v1 = (cocos2d::CCObject *)cocos2d::CCArray::create(AchievementNotifier_init); /*0x3c5cc*/
    *((_QWORD *)v2 + 41) = v1; /*0x3c5d2*/
    cocos2d::CCObject::retain(v1); /*0x3c5dc*/
    return qword_905F40; /*0x3c5e2*/
  }
  return result; /*0x3c5e9*/
}

// [3/5] Address: 0x3c610
// Method: AchievementNotifier::init
char __fastcall AchievementNotifier_init(__int64 a1)
{
  cocos2d::CCObject *v2; // rax

  v2 = (cocos2d::CCObject *)cocos2d::CCArray::create(a1); /*0x3c619*/
  *(_QWORD *)(a1 + 328) = v2; /*0x3c622*/
  cocos2d::CCObject::retain(v2); /*0x3c629*/
  return 1; /*0x3c631*/
}

// [4/5] Address: 0x3c640
// Method: AchievementNotifier::notifyAchievement
// Hidden C++ exception states: #wind=1
void __fastcall AchievementNotifier_notifyAchievement(__int64 a1, int a2, int a3, int a4, char a5)
{
  cocos2d::CCNodeRGBA *v9; // r14

  v9 = (cocos2d::CCNodeRGBA *)operator new(0x1A0u); /*0x3c668*/
  cocos2d::CCNodeRGBA::CCNodeRGBA(v9); /*0x3c673*/
  *(_QWORD *)v9 = &AchievementBar::`vftable'; /*0x3c680*/
  *((_QWORD *)v9 + 40) = &AchievementBar::`vftable'; /*0x3c68a*/
  *((_QWORD *)v9 + 43) = 0; /*0x3c691*/
  *((_DWORD *)v9 + 88) = 0; /*0x3c69c*/
  *((_QWORD *)v9 + 45) = 0; /*0x3c6a7*/
  if ( (unsigned __int8)sub_94B30((_DWORD)v9, a2, a3, a4, a5) ) /*0x3c6c7*/
  {
    cocos2d::CCObject::autorelease(v9); /*0x3c6d3*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCNodeRGBA *, __int64))(*(_QWORD *)v9 + 8LL))(v9, 1); /*0x3c6e3*/
    v9 = 0; /*0x3c6e6*/
  }
  cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 328), v9); /*0x3c6f3*/
  if ( !*(_QWORD *)(a1 + 336) ) /*0x3c6f9*/
    sub_3C720(a1); /*0x3c706*/
}

// [5/5] Address: 0x3c880
// Method: AchievementNotifier::achievementDisplayFinished
__int64 __fastcall AchievementNotifier_achievementDisplayFinished(__int64 a1)
{
  __int64 v2; // rcx
  cocos2d::CCObject *v3; // rcx

  v2 = *(_QWORD *)(a1 + 336); /*0x3c889*/
  if ( v2 ) /*0x3c893*/
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 528LL))(v2); /*0x3c898*/
    v3 = *(cocos2d::CCObject **)(a1 + 336); /*0x3c89e*/
    if ( v3 ) /*0x3c8a8*/
      cocos2d::CCObject::release(v3); /*0x3c8aa*/
    *(_QWORD *)(a1 + 336) = 0; /*0x3c8b0*/
  }
  return sub_3C720(a1); /*0x3c8be*/
}
