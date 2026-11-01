#include <Geode/binding/RewardsPage.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x554630
// Method: RewardsPage::show
__int64 __fastcall RewardsPage_show(__int64 a1)
{
  unsigned __int8 v3; // al
  float v4; // xmm6_4
  struct cocos2d::CCActionInterval *v5; // rax
  struct cocos2d::CCAction *v6; // rax
  __int64 v7; // rcx
  cocos2d::CCScene *v8; // rdi
  int v9; // eax
  struct cocos2d::CCAction *v10; // rax
  __int64 v11; // rdx

  if ( *(_BYTE *)(a1 + 596) ) /*0x554636*/
    return FLAlertLayer_show(a1); /*0x554647*/
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 408) + 32LL))(a1 + 408); /*0x554669*/
  v4 = (float)v3; /*0x554685*/
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 584) + 160LL))(*(_QWORD *)(a1 + 584)); /*0x554688*/
  v5 = cocos2d::CCScaleTo::create(0.30000001, 1.0); /*0x55469e*/
  v6 = cocos2d::CCEaseElasticOut::create(v5, 1.6); /*0x5546af*/
  cocos2d::CCNode::runAction(*(cocos2d::CCNode **)(a1 + 584), v6); /*0x5546bf*/
  v8 = *(cocos2d::CCScene **)(cocos2d::CCDirector::sharedDirector(v7) + 272); /*0x5546cb*/
  if ( *(_QWORD *)(a1 + 568) ) /*0x5546d2*/
  {
    v8 = *(cocos2d::CCScene **)(a1 + 568); /*0x5546de*/
  }
  else
  {
    if ( cocos2d::CCScene::getHighestChildZ(v8) + 1 >= 105 ) /*0x5546f1*/
      v9 = cocos2d::CCScene::getHighestChildZ(v8) + 1; /*0x554703*/
    else
      v9 = 105; /*0x5546f3*/
    *(_DWORD *)(a1 + 592) = v9; /*0x554705*/
  }
  if ( !*(_DWORD *)(a1 + 592) ) /*0x55470b*/
    *(_DWORD *)(a1 + 592) = 105; /*0x554717*/
  (*(void (__fastcall **)(cocos2d::CCScene *, __int64))(*(_QWORD *)v8 + 456LL))(v8, a1); /*0x554730*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 408) + 40LL))(a1 + 408, 0); /*0x554746*/
  v10 = cocos2d::CCFadeTo::create(0.14, (int)v4); /*0x554755*/
  cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v10); /*0x554761*/
  LOBYTE(v11) = 1; /*0x55476a*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 336LL))(a1, v11); /*0x554642*/
}

// [3/5] Address: 0x55de90
// Method: RewardsPage::onReward
// Hidden C++ exception states: #wind=1
struct cocos2d::CCAction *__fastcall RewardsPage_onReward(__int64 a1, __int64 a2)
{
  struct cocos2d::CCAction *result; // rax
  cocos2d::CCNode *v5; // rbx
  struct cocos2d::CCAction *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // eax
  void *v10; // [rsp+38h] [rbp+10h] BYREF

  result = (struct cocos2d::CCAction *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x55dea6*/
  if ( (_DWORD)result == 1 ) /*0x55deac*/
  {
    if ( !*(_BYTE *)(a1 + 712) ) /*0x55deae*/
    {
      v5 = *(cocos2d::CCNode **)(a1 + 680); /*0x55debb*/
      goto LABEL_7; /*0x55dec2*/
    }
  }
  else if ( (_DWORD)result == 2 && !*(_BYTE *)(a1 + 713) ) /*0x55dec9*/
  {
    v5 = *(cocos2d::CCNode **)(a1 + 688); /*0x55ded2*/
LABEL_7:
    if ( v5 ) /*0x55dedc*/
    {
      cocos2d::CCNode::stopAllActions(v5); /*0x55dee5*/
      LOWORD(v10) = 19455; /*0x55def7*/
      BYTE2(v10) = 0; /*0x55defc*/
      (**((void (__fastcall ***)(__int64, void **))v5 + 46))((__int64)v5 + 368, &v10); /*0x55df10*/
      v6 = cocos2d::CCTintTo::create(1.0, 0xFFu, 0xFFu, 0xFFu); /*0x55df25*/
      return cocos2d::CCNode::runAction(v5, v6); /*0x55df3b*/
    }
    return result; /*0x55df3b*/
  }
  if ( !*(_QWORD *)(a1 + 720) ) /*0x55df42*/
  {
    v7 = sub_55E830((unsigned int)result, a1); /*0x55df51*/
    *(_QWORD *)(a1 + 720) = v7; /*0x55df56*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 464LL))(a1, v7); /*0x55df6d*/
    v8 = *(_QWORD *)&qword_905FB0; /*0x55df70*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x55df7a*/
    {
      v10 = operator new(0x690u); /*0x55df86*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v10); /*0x55df94*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x55dfa5*/
      v8 = *(_QWORD *)&qword_905FB0; /*0x55dfa7*/
    }
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x55dfb4*/
    return (struct cocos2d::CCAction *)sub_2597D0(v8, v9); /*0x55dfbc*/
  }
  return result; /*0x55df31*/
}

// [4/5] Address: 0x55dfd0
// Method: RewardsPage::rewardsStatusFinished
// Hidden C++ exception states: #wind=5
__int64 __fastcall RewardsPage_rewardsStatusFinished(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rcx
  struct cocos2d::CCObject *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 RewardKey; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  void *v14; // [rsp+20h] [rbp-48h]
  void *v15; // [rsp+20h] [rbp-48h]
  void *v16; // [rsp+20h] [rbp-48h]
  void *v17; // [rsp+20h] [rbp-48h]
  _BYTE v18[32]; // [rsp+28h] [rbp-40h] BYREF

  v2 = a2; /*0x55dfeb*/
  if ( *(_QWORD *)(a1 + 48) && (unsigned int)(a2 - 1) <= 1 ) /*0x55e002*/
  {
    v4 = qword_905FE0; /*0x55e008*/
    if ( !qword_905FE0 ) /*0x55e012*/
    {
      v14 = operator new(0x3E8u); /*0x55e01e*/
      qword_905FE0 = sub_2D2B40(v14); /*0x55e02c*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x55e03d*/
      v4 = qword_905FE0; /*0x55e03f*/
    }
    v5 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(v4 + 528), v2); /*0x55e056*/
    if ( v5 ) /*0x55e05c*/
    {
      v6 = qword_905FE0; /*0x55e062*/
      if ( !qword_905FE0 ) /*0x55e06c*/
      {
        v15 = operator new(0x3E8u); /*0x55e078*/
        qword_905FE0 = sub_2D2B40(v15); /*0x55e086*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x55e097*/
        v6 = qword_905FE0; /*0x55e099*/
      }
      if ( !(unsigned __int8)GameStatsManager_hasRewardBeenCollected(v6, v2, *((_DWORD *)v5 + 14)) /*0x55e0c0*/
        && *((_DWORD *)v5 + 16) == *(_DWORD *)(*(_QWORD *)(a1 + 48) + 696LL) )
      {
        v7 = qword_905FE0; /*0x55e0c6*/
        if ( !qword_905FE0 ) /*0x55e0d0*/
        {
          v16 = operator new(0x3E8u); /*0x55e0dc*/
          qword_905FE0 = sub_2D2B40(v16); /*0x55e0ea*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x55e0fb*/
          v7 = qword_905FE0; /*0x55e0fd*/
        }
        GameStatsManager_preProcessReward(v7, (__int64)v5); /*0x55e107*/
        if ( RewardUnlockLayer_showCollectReward(*(_QWORD *)(a1 + 48), (__int64)v5) ) /*0x55e113*/
        {
          v8 = qword_905FE0; /*0x55e120*/
          if ( !qword_905FE0 ) /*0x55e12a*/
          {
            v17 = operator new(0x3E8u); /*0x55e136*/
            qword_905FE0 = sub_2D2B40(v17); /*0x55e144*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x55e155*/
            v8 = qword_905FE0; /*0x55e157*/
          }
          if ( !(unsigned __int8)GameStatsManager_hasRewardBeenCollected(v8, v2, *((_DWORD *)v5 + 14)) ) /*0x55e167*/
          {
            GameStatsManager_registerRewardsFromItem(v8, (__int64)v5); /*0x55e176*/
            RewardKey = GameStatsManager_getRewardKey(v9, (__int64)v18, v2, *((_DWORD *)v5 + 14)); /*0x55e187*/
            cocos2d::CCDictionary::setObject(*(_QWORD *)(v8 + 536), v5, RewardKey); /*0x55e19a*/
            sub_3C310(v18); /*0x55e1a6*/
          }
        }
      }
    }
  }
  sub_55E340(a1 - 672); /*0x55e1b5*/
  LOBYTE(v11) = 1; /*0x55e1c1*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 8) + 336LL))(*(_QWORD *)(a1 + 8), v11); /*0x55e1c3*/
  LOBYTE(v12) = 1; /*0x55e1d0*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 16) + 336LL))(*(_QWORD *)(a1 + 16), v12); /*0x55e1d2*/
  cocos2d::CCNode::unschedule(a1 - 672, sub_55E340); /*0x55e1e6*/
  return cocos2d::CCNode::schedule(a1 - 672, sub_55E340); /*0x55e208*/
}

// [5/5] Address: 0x55e230
// Method: RewardsPage::rewardsStatusFailed
// Hidden C++ exception states: #wind=1
struct cocos2d::CCAction *__fastcall RewardsPage_rewardsStatusFailed(__int64 a1)
{
  __int64 v2; // rcx
  struct cocos2d::CCAction *result; // rax
  __int64 v4; // rbx
  struct cocos2d::CCFiniteTimeAction *v5; // rax
  struct cocos2d::CCAction *v6; // rax
  void *v7; // [rsp+38h] [rbp+10h]

  v2 = qword_905FE0; /*0x55e23d*/
  if ( !qword_905FE0 ) /*0x55e247*/
  {
    v7 = operator new(0x3E8u); /*0x55e253*/
    qword_905FE0 = sub_2D2B40(v7); /*0x55e261*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x55e272*/
    v2 = qword_905FE0; /*0x55e274*/
  }
  result = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(v2 + 528), 1); /*0x55e287*/
  if ( !result ) /*0x55e290*/
  {
    v4 = cocos2d::CCCallFunc::create(a1 - 672, sub_55E2F0); /*0x55e2a6*/
    v5 = cocos2d::CCDelayTime::create(1.0); /*0x55e2b1*/
    v6 = cocos2d::CCSequence::create(v5, v4, 0); /*0x55e2c0*/
    return cocos2d::CCNode::runAction((cocos2d::CCNode *)(a1 - 672), v6); /*0x55e2d0*/
  }
  return result; /*0x55e2d6*/
}
