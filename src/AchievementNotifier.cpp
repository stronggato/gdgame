#include <new>
#include <Geode/Bindings.hpp>
#include <Geode/binding/AchievementNotifier.hpp>
#include <cocos2d.h>


inline __m128i Size = {0};
inline GDStub AchievementNotifier_init;
using namespace cocos2d;

// [1/5] Address: 0x3c4d0
// Method: AchievementNotifier::~AchievementNotifier
AchievementNotifier::~AchievementNotifier()
{
  auto Block = (char*)this;
  _BYTE* a1 = (_BYTE*)this;
  uint64_t a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  cocos2d::CCObject *v4; // rcx
  __int64 v5; // rcx
  cocos2d::CCObject *v6; // rcx

//   *(_QWORD *)Block   = (uintptr_t)((uintptr_t)(&AchievementNotifier::`vftable')); /*0x3c4e6*/ // cleaned vftable
  v4 = (decltype(v4))((cocos2d::CCObject *)*((_QWORD *)Block + 41)); /*0x3c4e9*/
  if ( v4 ) /*0x3c4f3*/
    CCObject_release(v4); /*0x3c4f5*/
  v5 = *((_QWORD *)Block + 42); /*0x3c4fb*/
  if ( v5 ) /*0x3c505*/
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 728LL))(v5); /*0x3c50a*/
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)Block + 42) + 528LL))(*((_QWORD *)Block + 42)); /*0x3c51a*/
    v6 = (decltype(v6))((cocos2d::CCObject *)*((_QWORD *)Block + 42)); /*0x3c520*/
    if ( v6 ) /*0x3c52a*/
      CCObject_release(v6); /*0x3c52c*/
  }
//   cocos2d::CCNode::~CCNode(Block); /*0x3c535*/ // cleaned base ctor/dtor
//   if ( (a2 & 1) != 0 ) /*0x3c540*/
//     j_j_free(Block); /*0x3c54a*/ // cleaned scalar delete
  return; /*0x3c552*/
}

// [2/5] Address: 0x3c560
// Method: AchievementNotifier::sharedState
AchievementNotifier* AchievementNotifier::sharedState()
{
  uint64_t a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  __int64 result; // rax
  cocos2d::CCObject *v1; // rax
  cocos2d::CCNode *v2; // [rsp+30h] [rbp+8h]

  result = qword_905F40; /*0x3c566*/
  if ( !qword_905F40 ) /*0x3c570*/
  {
    v2 = (decltype(v2))((cocos2d::CCNode *)operator new(0x158u)); /*0x3c583*/
//     cocos2d::CCNode::CCNode(v2); /*0x3c58b*/ // cleaned base ctor/dtor
//     *(_QWORD *)v2   = (uintptr_t)((uintptr_t)(&AchievementNotifier::`vftable')); /*0x3c598*/ // cleaned vftable
    *((_QWORD *)v2 + 40)  = (uintptr_t)(0); /*0x3c59d*/
    *((_QWORD *)v2 + 41)  = (uintptr_t)(0); /*0x3c5a4*/
    *((_QWORD *)v2 + 42)  = (uintptr_t)(0); /*0x3c5ab*/
    qword_905F40 = (__int64)v2; /*0x3c5b2*/
    v1 = (decltype(v1))((cocos2d::CCObject *)cocos2d::CCArray::createWithCapacity((unsigned int)(AchievementNotifier_init))); /*0x3c5cc*/
    *((_QWORD *)v2 + 41)  = (uintptr_t)(v1); /*0x3c5d2*/
    CCObject_retain(v1); /*0x3c5dc*/
    return (AchievementNotifier*)qword_905F40; /*0x3c5e2*/
  }
  return (AchievementNotifier*)result; /*0x3c5e9*/
}

// [3/5] Address: 0x3c610
// Method: AchievementNotifier::init
bool AchievementNotifier::init()
{
  __int64 a1 = (__int64)this;
  uint64_t a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  cocos2d::CCObject *v2; // rax

  v2 = (decltype(v2))((cocos2d::CCObject *)cocos2d::CCArray::createWithCapacity((unsigned int)(a1))); /*0x3c619*/
  *(_QWORD *)(a1 + 328)   = (uintptr_t)((uintptr_t)(v2)); /*0x3c622*/
  CCObject_retain(v2); /*0x3c629*/
  return 1; /*0x3c631*/
}

// [4/5] Address: 0x3c640
// Method: AchievementNotifier::notifyAchievement
void AchievementNotifier::notifyAchievement(char const* title, char const* desc, char const* icon, bool quest)
{
  __int64 a1 = (__int64)this;
  int a2 = (int)to_gd_arg(title);
  int a3 = (int)to_gd_arg(desc);
  int a4 = (int)to_gd_arg(icon);
  char a5 = (char)to_gd_arg(quest);
  uint64_t a6 = 0, a7 = 0, a8 = 0;

  cocos2d::CCNodeRGBA *v9; // r14

  v9 = (decltype(v9))((cocos2d::CCNodeRGBA *)operator new(0x1A0u)); /*0x3c668*/
//   cocos2d::CCNodeRGBA::CCNodeRGBA(v9); /*0x3c673*/ // cleaned base ctor/dtor
//   *(_QWORD *)v9   = (uintptr_t)((uintptr_t)(&AchievementBar::`vftable')); /*0x3c680*/ // cleaned vftable
//   *((_QWORD *)v9 + 40)  = (uintptr_t)(&AchievementBar::`vftable'); /*0x3c68a*/ // cleaned vftable
  *((_QWORD *)v9 + 43)  = (uintptr_t)(0); /*0x3c691*/
  *((_DWORD *)v9 + 88)  = (uintptr_t)(0); /*0x3c69c*/
  *((_QWORD *)v9 + 45)  = (uintptr_t)(0); /*0x3c6a7*/
  if ( (unsigned __int8)sub_94B30((_DWORD)v9, a2, a3, a4, a5) ) /*0x3c6c7*/
  {
    CCObject_autorelease(v9); /*0x3c6d3*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCNodeRGBA *, __int64))(*(_QWORD *)v9 + 8LL))(v9, 1); /*0x3c6e3*/
    v9 = 0; /*0x3c6e6*/
  }
  (((cocos2d::CCArray*)(*(cocos2d::CCArray **)(a1 + 328)))->addObject((cocos2d::CCObject*)(v9))); /*0x3c6f3*/
  if ( !*(_QWORD *)(a1 + 336) ) /*0x3c6f9*/
    sub_3C720(a1); /*0x3c706*/
}

// [5/5] Address: 0x3c880
// Method: AchievementNotifier::achievementDisplayFinished
void AchievementNotifier::achievementDisplayFinished()
{
  __int64 a1 = (__int64)this;
  uint64_t a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  __int64 v2; // rcx
  cocos2d::CCObject *v3; // rcx

  v2 = *(_QWORD *)(a1 + 336); /*0x3c889*/
  if ( v2 ) /*0x3c893*/
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 528LL))(v2); /*0x3c898*/
    v3 = *(cocos2d::CCObject **)(a1 + 336); /*0x3c89e*/
    if ( v3 ) /*0x3c8a8*/
      CCObject_release(v3); /*0x3c8aa*/
    *(_QWORD *)(a1 + 336)   = (uintptr_t)((uintptr_t)(0)); /*0x3c8b0*/
  }
  { sub_3C720(a1); return; } /*0x3c8be*/
}
