#include <Geode/binding/AchievementBar.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x94ae0
// Method: AchievementBar::~AchievementBar
cocos2d::CCNodeRGBA *__fastcall AchievementBar__dtor_AchievementBar(cocos2d::CCNodeRGBA *Block, char a2)
{
  *(_QWORD *)Block = &AchievementBar::`vftable'; /*0x94af3*/
  *((_QWORD *)Block + 40) = &AchievementBar::`vftable'; /*0x94b00*/
  cocos2d::CCNodeRGBA::~CCNodeRGBA(Block); /*0x94b07*/
  if ( (a2 & 1) != 0 ) /*0x94b10*/
    j_j_free(Block); /*0x94b1a*/
  return Block; /*0x94b1f*/
}

// [2/3] Address: 0x961c0
// Method: AchievementBar::show
struct cocos2d::CCAction *__fastcall AchievementBar_show(cocos2d::CCNode **a1)
{
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

  v2 = *(cocos2d::CCScene **)(cocos2d::CCDirector::sharedDirector(a1) + 272); /*0x961de*/
  if ( a1[45] ) /*0x961e5*/
    v2 = a1[45]; /*0x961ef*/
  if ( cocos2d::CCScene::getHighestChildZ(v2) + 1 >= 1000 ) /*0x96207*/
    cocos2d::CCScene::getHighestChildZ(v2); /*0x9620c*/
  (*(void (__fastcall **)(cocos2d::CCScene *, cocos2d::CCNode **))(*(_QWORD *)v2 + 456LL))(v2, a1); /*0x9621f*/
  (*(void (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)a1[43] + 160LL))(a1[43]); /*0x96237*/
  v3 = cocos2d::CCScaleTo::create(0.40000001, 1.0); /*0x9624d*/
  v4 = cocos2d::CCEaseInOut::create(v3, 2.0); /*0x96263*/
  cocos2d::CCNode::runAction(a1[43], v4); /*0x96273*/
  v6 = cocos2d::CCDirector::sharedDirector(v5); /*0x96279*/
  cocos2d::CCDirector::getWinSize(v6, &v28); /*0x96287*/
  v7 = a1[43]; /*0x962a6*/
  v8 = *(_QWORD *)v7; /*0x962bd*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v30, v28 * 0.5, (float)(v29 - 40.0) - 8.0); /*0x962c0*/
  (*(void (__fastcall **)(cocos2d::CCNode *, __int64))(v8 + 184))(v7, v9); /*0x962cc*/
  v10 = cocos2d::CCDelayTime::create(3.2); /*0x962e0*/
  v11 = AchievementNotifier_sharedState(); /*0x962e3*/
  v12 = cocos2d::CCCallFunc::create(v11, AchievementNotifier_achievementDisplayFinished); /*0x962f2*/
  v13 = cocos2d::CCSequence::create(v10, v12, 0); /*0x96301*/
  cocos2d::CCNode::runAction(a1[43], v13); /*0x96311*/
  v14 = cocos2d::CCDelayTime::create(2.4000001); /*0x9632d*/
  v15 = cocos2d::CCFadeOut::create(0.80000001); /*0x96330*/
  v16 = cocos2d::CCEaseIn::create(v15, 2.0); /*0x9633d*/
  v17 = cocos2d::CCSequence::create(v14, v16, 0); /*0x9634c*/
  cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v17); /*0x96358*/
  LOBYTE(v18) = -1; /*0x96365*/
  (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)a1[47] + 40) + 40LL))((__int64)a1[47] + 320, v18); /*0x96371*/
  v19 = cocos2d::CCFadeOut::create(0.89999998); /*0x9637c*/
  v20 = cocos2d::CCEaseInOut::create(v19, 1.8); /*0x9638d*/
  cocos2d::CCNode::runAction(a1[47], v20); /*0x9639d*/
  (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)a1[48] + 40) + 40LL))((__int64)a1[48] + 320, 0); /*0x963b6*/
  v21 = cocos2d::CCFadeIn::create(0.34999999); /*0x963c1*/
  v22 = cocos2d::CCEaseInOut::create(v21, 2.0); /*0x963dc*/
  v23 = cocos2d::CCDelayTime::create(0.5); /*0x963ed*/
  v24 = cocos2d::CCFadeOut::create(2.4000001); /*0x963f0*/
  v25 = cocos2d::CCEaseInOut::create(v24, 2.0); /*0x963fd*/
  v26 = cocos2d::CCSequence::create(v22, v23, v25, 0); /*0x9640f*/
  return cocos2d::CCNode::runAction(a1[48], v26); /*0x96425*/
}

// [3/3] Address: 0x96440
// Method: AchievementBar::setOpacity
__int64 __fastcall AchievementBar_setOpacity(_QWORD *a1, unsigned __int8 a2)
{
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1[6] + 320LL) + 40LL))(a1[6] + 320LL); /*0x9645e*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1[9] + 320LL) + 40LL))(a1[9] + 320LL, a2); /*0x96473*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1[10] + 368LL) + 40LL))(a1[10] + 368LL, a2); /*0x96488*/
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1[11] + 320LL) + 40LL))(a1[11] + 320LL, a2);
}
