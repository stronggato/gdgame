#include <new>
#include <Geode/Bindings.hpp>
#include <Geode/binding/AchievementBar.hpp>
#include <cocos2d.h>


inline __m128i Size = {0};

using namespace cocos2d;

// [1/3] Address: 0x94ae0
// Method: AchievementBar::~AchievementBar
AchievementBar::~AchievementBar()
{
  auto Block = (char*)this;
  _BYTE* a1 = (_BYTE*)this;
  uint64_t a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

//   *(_QWORD *)Block = &AchievementBar::`vftable'; /*0x94af3*/ // cleaned vftable
//   *((_QWORD *)Block + 40) = &AchievementBar::`vftable'; /*0x94b00*/ // cleaned vftable
//   cocos2d::CCNodeRGBA::~CCNodeRGBA(Block); /*0x94b07*/ // cleaned base ctor/dtor
//   if ( (a2 & 1) != 0 ) /*0x94b10*/
//     j_j_free(Block); /*0x94b1a*/ // cleaned scalar delete
  return; /*0x94b1f*/
}

// [2/3] Address: 0x961c0
// Method: AchievementBar::show
void AchievementBar::show()
{
  cocos2d::CCNode** a1 = (cocos2d::CCNode**)this;
  uint64_t a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  cocos2d::CCScene *v2; // rbx
  struct cocos2d::CCActionInterval *v3; // rax
  struct cocos2d::CCAction *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  cocos2d::CCNode *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  struct cocos2d::CCFiniteTimeAction *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  struct cocos2d::CCAction *v13; // rax
  struct cocos2d::CCFiniteTimeAction *v14; // rbx
  struct cocos2d::CCActionInterval *v15; // rax
  struct cocos2d::CCEaseIn *v16; // rax
  struct cocos2d::CCAction *v17; // rax
  __int64 v18; // rdx
  struct cocos2d::CCActionInterval *v19; // rax
  struct cocos2d::CCAction *v20; // rax
  struct cocos2d::CCActionInterval *v21; // rax
  struct cocos2d::CCFiniteTimeAction *v22; // rdi
  struct cocos2d::CCDelayTime *v23; // rbx
  struct cocos2d::CCActionInterval *v24; // rax
  struct cocos2d::CCEaseInOut *v25; // rax
  struct cocos2d::CCAction *v26; // rax
  float v28; // [rsp+40h] [rbp+8h] BYREF
  float v29; // [rsp+44h] [rbp+Ch]
  char v30; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(cocos2d::CCScene **)(((uintptr_t)cocos2d::CCDirector::sharedDirector()) + 272); /*0x961de*/
  if ( a1[45] ) /*0x961e5*/
    v2 = (decltype(    v2))(a1[45]);
  if ( (((cocos2d::CCScene*)(v2))->getHighestChildZ()) + 1 >= 1000 ) /*0x96207*/
    (((cocos2d::CCScene*)(v2))->getHighestChildZ()); /*0x9620c*/
  (*(void (__fastcall **)(cocos2d::CCScene *, cocos2d::CCNode **))(*(_QWORD *)v2 + 456LL))(v2, a1); /*0x9621f*/
  (*(void (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)a1[43] + 160LL))(a1[43]); /*0x96237*/
  v3 = (decltype(  v3))(uintptr_t)(cocos2d::CCScaleTo::create(0.40000001, 1.0)); /*0x9624d*/
  v4 = (decltype(  v4))(uintptr_t)(cocos2d::CCEaseInOut::create(v3, 2.0)); /*0x96263*/
  (((cocos2d::CCNode*)(a1[43]))->runAction((cocos2d::CCAction*)(v4))); /*0x96273*/
  v6 = ((uintptr_t)cocos2d::CCDirector::sharedDirector()); /*0x96279*/
  *(cocos2d::CCSize*)(&v28) = cocos2d::CCDirector::sharedDirector()->getWinSize(); /*0x96287*/
  v7 = (decltype(  v7))(a1[43]);
  v8 = *(_QWORD *)v7; /*0x962bd*/
//   new ((cocos2d::CCPoint*)&v30) cocos2d::CCPoint(v28 * 0.5, (float)(v29 - 40.0) - 8.0); /*0x962c0*/ // cleaned base ctor/dtor
  (*(void (__fastcall **)(cocos2d::CCNode *, __int64))(v8 + 184))(v7, v9); /*0x962cc*/
  v10 = (decltype(  v10))(uintptr_t)(cocos2d::CCDelayTime::create(3.2)); /*0x962e0*/
  v11 = ((uintptr_t)AchievementNotifier::sharedState()); /*0x962e3*/
  v12 = (decltype(  v12))(uintptr_t)(cocos2d::CCCallFunc::create((cocos2d::CCObject*)to_gd_arg(v11), nullptr)); /*0x962f2*/
  v13 = (decltype(  v13))(uintptr_t)(cocos2d::CCSequence::create(v10, v12, 0)); /*0x96301*/
  (((cocos2d::CCNode*)(a1[43]))->runAction((cocos2d::CCAction*)(v13))); /*0x96311*/
  v14 = (decltype(  v14))(uintptr_t)(cocos2d::CCDelayTime::create(2.4000001)); /*0x9632d*/
  v15 = (decltype(  v15))(uintptr_t)(cocos2d::CCFadeOut::create(0.80000001)); /*0x96330*/
  v16 = (decltype(  v16))(uintptr_t)(cocos2d::CCEaseIn::create(v15, 2.0)); /*0x9633d*/
  v17 = (decltype(  v17))(uintptr_t)(cocos2d::CCSequence::create(v14, v16, 0)); /*0x9634c*/
  (((cocos2d::CCNode*)((cocos2d::CCNode *)a1))->runAction((cocos2d::CCAction*)(v17))); /*0x96358*/
  LOBYTE(v18) = -1; /*0x96365*/
  (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)a1[47] + 40) + 40LL))((__int64)a1[47] + 320, v18); /*0x96371*/
  v19 = (decltype(  v19))(uintptr_t)(cocos2d::CCFadeOut::create(0.89999998)); /*0x9637c*/
  v20 = (decltype(  v20))(uintptr_t)(cocos2d::CCEaseInOut::create(v19, 1.8)); /*0x9638d*/
  (((cocos2d::CCNode*)(a1[47]))->runAction((cocos2d::CCAction*)(v20))); /*0x9639d*/
  (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)a1[48] + 40) + 40LL))((__int64)a1[48] + 320, 0); /*0x963b6*/
  v21 = (decltype(  v21))(uintptr_t)(cocos2d::CCFadeIn::create(0.34999999)); /*0x963c1*/
  v22 = (decltype(  v22))(uintptr_t)(cocos2d::CCEaseInOut::create(v21, 2.0)); /*0x963dc*/
  v23 = (decltype(  v23))(uintptr_t)(cocos2d::CCDelayTime::create(0.5)); /*0x963ed*/
  v24 = (decltype(  v24))(uintptr_t)(cocos2d::CCFadeOut::create(2.4000001)); /*0x963f0*/
  v25 = (decltype(  v25))(uintptr_t)(cocos2d::CCEaseInOut::create(v24, 2.0)); /*0x963fd*/
  v26 = (decltype(  v26))(uintptr_t)(cocos2d::CCSequence::create(v22, v23, v25, 0)); /*0x9640f*/
  { (((cocos2d::CCNode*)(a1[48]))->runAction((cocos2d::CCAction*)(v26))); return; } /*0x96425*/
}

// [3/3] Address: 0x96440
// Method: AchievementBar::setOpacity
void AchievementBar::setOpacity(unsigned char opacity)
{
  _QWORD* a1 = (_QWORD*)this;
  unsigned __int8 a2 = to_gd_val<unsigned __int8>(opacity);
  uint64_t a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1[6] + 320LL) + 40LL))(a1[6] + 320LL); /*0x9645e*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1[9] + 320LL) + 40LL))(a1[9] + 320LL, a2); /*0x96473*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1[10] + 368LL) + 40LL))(a1[10] + 368LL, a2); /*0x96488*/
  { (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1[11] + 320LL) + 40LL))(a1[11] + 320LL, a2); return; }
}
