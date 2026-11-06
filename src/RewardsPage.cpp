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

// Address: 0x55cf40
// Method: RewardsPage::init
// Hidden C++ exception states: #wind=16
bool __fastcall RewardsPage_init(__int64 a1)
{
  bool result; // al
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 *v9; // rdi
  __int64 v10; // rdx
  void (__fastcall *v11)(__int64 *, __int64); // r8
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  struct cocos2d::CCSprite *v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rax
  int i; // esi
  cocos2d::CCSprite *v20; // rdi
  float v21; // xmm6_4
  float v22; // xmm7_4
  __int64 v23; // rbx
  __int64 v24; // rax
  unsigned int v25; // ebx
  cocos2d::CCObject *v26; // rsi
  struct cocos2d::CCMenu *v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  char v38; // di
  __int64 v39; // rbx
  cocos2d::CCNode *v40; // r14
  cocos2d::CCObject *v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rax
  struct cocos2d::CCActionInterval *v46; // rax
  struct cocos2d::CCFiniteTimeAction *v47; // rbx
  struct cocos2d::CCActionInterval *v48; // rax
  struct cocos2d::CCEaseInOut *v49; // rax
  struct cocos2d::CCActionInterval *v50; // rax
  struct cocos2d::CCAction *v51; // rax
  struct cocos2d::CCLabelBMFont *v52; // rax
  __int64 v53; // rax
  struct cocos2d::CCLabelBMFont *v54; // rax
  __int64 v55; // rax
  cocos2d::CCString *v56; // rax
  const char *CString; // rax
  struct cocos2d::CCSprite *v58; // r14
  __int64 v59; // rax
  __int64 v60; // rbx
  __int64 v61; // rax
  __int64 v62; // rsi
  __int64 v63; // rbx
  __int64 v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rax
  cocos2d::CCString *v67; // rax
  const char *v68; // rax
  unsigned int v69; // edi
  float v70; // xmm6_4
  __int64 v71; // rax
  cocos2d::CCObject *v72; // rbx
  char *v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rsi
  __int64 v76; // rbx
  __int64 v77; // rdi
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rcx
  void *v83; // [rsp+30h] [rbp-D0h] BYREF
  char Src[15]; // [rsp+38h] [rbp-C8h] BYREF
  char v85; // [rsp+47h] [rbp-B9h]
  __int64 v86; // [rsp+48h] [rbp-B8h]
  __int64 v87; // [rsp+50h] [rbp-B0h]
  char v88[16]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v89; // [rsp+68h] [rbp-98h]
  __int64 v90; // [rsp+70h] [rbp-90h]
  _BYTE v91[8]; // [rsp+78h] [rbp-88h] BYREF
  __int128 *v92; // [rsp+80h] [rbp-80h] BYREF
  __int128 v93; // [rsp+88h] [rbp-78h] BYREF
  __int64 v94; // [rsp+98h] [rbp-68h]
  __int64 v95; // [rsp+A0h] [rbp-60h]
  __int128 v96; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v97; // [rsp+B8h] [rbp-48h]
  __int64 v98; // [rsp+C0h] [rbp-40h]
  __int128 v99; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v100; // [rsp+D8h] [rbp-28h]
  __int64 v101; // [rsp+E0h] [rbp-20h]
  __int128 v102; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v103; // [rsp+F8h] [rbp-8h]
  __int64 v104; // [rsp+100h] [rbp+0h]
  __int128 v105; // [rsp+108h] [rbp+8h] BYREF
  __int64 v106; // [rsp+118h] [rbp+18h]
  __int64 v107; // [rsp+120h] [rbp+20h]
  __int128 v108; // [rsp+128h] [rbp+28h] BYREF
  __int64 v109; // [rsp+138h] [rbp+38h]
  __int64 v110; // [rsp+140h] [rbp+40h]
  __int128 v111; // [rsp+148h] [rbp+48h] BYREF
  __int64 v112; // [rsp+158h] [rbp+58h]
  __int64 v113; // [rsp+160h] [rbp+60h]
  char *v114; // [rsp+228h] [rbp+128h] BYREF
  float v115; // [rsp+230h] [rbp+130h] BYREF
  float v116; // [rsp+234h] [rbp+134h]
  char v117; // [rsp+238h] [rbp+138h] BYREF

  sub_5ABA0(a1);
  LODWORD(v114) = -1778384896;
  result = cocos2d::CCLayerColor::initWithColor((cocos2d::CCLayerColor *)a1, (const struct cocos2d::_ccColor4B *)&v114);
  if ( !result )
    return result;
  LOBYTE(v3) = 1;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 920LL))(a1, v3);
  LOBYTE(v4) = 1;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 992LL))(a1, v4);
  v6 = cocos2d::CCDirector::sharedDirector(v5);
  cocos2d::CCDirector::getWinSize(v6, &v115);
  v7 = cocos2d::CCLayer::create();
  *(_QWORD *)(a1 + 584) = v7;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 464LL))(a1, v7);
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)&v93, 0.0, 0.0, 80.0, 80.0);
  v9 = (__int64 *)cocos2d::extension::CCScale9Sprite::create("GJ_square02.png", v8);
  v10 = v9[40];
  v11 = *(void (__fastcall **)(__int64 *, __int64))(v10 + 40);
  LOBYTE(v10) = -1;
  v11(v9 + 40, v10);
  v12 = *v9;
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v114, 340.0, 220.0);
  (*(void (__fastcall **)(__int64 *, __int64))(v12 + 312))(v9, v13);
  (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
    *(_QWORD *)(a1 + 584),
    v9,
    0xFFFFFFFFLL);
  v14 = *v9;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v114, v115 * 0.5, v116 * 0.5);
  (*(void (__fastcall **)(__int64 *, __int64))(v14 + 184))(v9, v15);
  v16 = cocos2d::CCSprite::createWithSpriteFrameName("rewardsLabel_001.png");
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
    *(_QWORD *)(a1 + 584),
    v16,
    20);
  v17 = *(_QWORD *)v16;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v114, v115 * 0.5, (float)((float)(v116 * 0.5) + 110.0) - 32.0);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v17 + 184))(v16, v18);
  for ( i = 0; i < 4; ++i )
  {
    v20 = cocos2d::CCSprite::createWithSpriteFrameName("rewardCorner_001.png");
    (*(void (__fastcall **)(_QWORD, cocos2d::CCSprite *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
      *(_QWORD *)(a1 + 584),
      v20,
      8);
    v21 = 145.0;
    v22 = 85.0;
    if ( i )
    {
      switch ( i )
      {
        case 1:
          v21 = -145.0;
          cocos2d::CCSprite::setFlipY(v20, 1);
          break;
        case 2:
          cocos2d::CCSprite::setFlipX(v20, 1);
          cocos2d::CCSprite::setFlipY(v20, 1);
          break;
        case 3:
          v22 = -85.0;
          cocos2d::CCSprite::setFlipX(v20, 1);
          break;
      }
    }
    else
    {
      v21 = -145.0;
      v22 = -85.0;
    }
    v23 = *(_QWORD *)v20;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v114, (float)(v115 * 0.5) + v21, (float)(v116 * 0.5) + v22);
    (*(void (__fastcall **)(cocos2d::CCSprite *, __int64))(v23 + 184))(v20, v24);
  }
  *(_DWORD *)(a1 + 640) = -1;
  v25 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_closeBtn_001.png");
  v114 = (char *)operator new(0x208u);
  v26 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra((__int64)v114);
  if ( v26 )
  {
    if ( (unsigned __int8)sub_47940((_DWORD)v26, v25, 0, a1, (__int64)UploadPopup_onClose) )
    {
      cocos2d::CCObject::autorelease(v26);
      goto LABEL_17;
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v26 + 8LL))(v26, 1);
  }
  v26 = 0;
LABEL_17:
  *((_DWORD *)v26 + 93) = 1070386381;
  v27 = cocos2d::CCMenu::create(v26, 0);
  *(_QWORD *)(a1 + 552) = v27;
  v28 = *(_QWORD *)v26;
  cocos2d::CCPoint::CCPoint(
    (cocos2d::CCPoint *)&v114,
    (float)((float)(v115 * 0.5) - 170.0) + 10.0,
    (float)((float)(v116 * 0.5) + 110.0) - 10.0);
  cocos2d::CCNode::convertToNodeSpace(v27, v91, v29);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v28 + 184))(v26, v30);
  v92 = &v93;
  v93 = 0;
  v94 = 4;
  v95 = 15;
  strcpy((char *)&v93, "0007");
  v31 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    v83 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v83);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v31 = qword_905FE0;
  }
  if ( !GameStatsManager_isSpecialChestUnlocked(v31, &v93) )
    goto LABEL_39;
  v114 = (char *)&v96;
  v96 = 0;
  v97 = 4;
  v98 = 15;
  strcpy((char *)&v96, "0008");
  v32 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    v83 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v83);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v32 = qword_905FE0;
  }
  if ( !GameStatsManager_isSpecialChestUnlocked(v32, &v96) )
    goto LABEL_39;
  v114 = (char *)&v99;
  v99 = 0;
  v100 = 4;
  v101 = 15;
  strcpy((char *)&v99, "0009");
  v33 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    v83 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v83);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v33 = qword_905FE0;
  }
  if ( !GameStatsManager_isSpecialChestUnlocked(v33, &v99) )
    goto LABEL_39;
  v114 = (char *)&v102;
  v102 = 0;
  v103 = 4;
  v104 = 15;
  strcpy((char *)&v102, "0010");
  v34 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    v83 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v83);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v34 = qword_905FE0;
  }
  if ( !GameStatsManager_isSpecialChestUnlocked(v34, &v102) )
    goto LABEL_39;
  v114 = (char *)&v105;
  v105 = 0;
  v106 = 4;
  v107 = 15;
  strcpy((char *)&v105, "0011");
  v35 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    v83 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v83);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v35 = qword_905FE0;
  }
  if ( !GameStatsManager_isSpecialChestUnlocked(v35, &v105) )
    goto LABEL_39;
  v114 = (char *)&v108;
  v108 = 0;
  v109 = 4;
  v110 = 15;
  strcpy((char *)&v108, "0024");
  v36 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    v83 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v83);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v36 = qword_905FE0;
  }
  if ( !GameStatsManager_isSpecialChestUnlocked(v36, &v108) )
    goto LABEL_39;
  v114 = (char *)&v111;
  v111 = 0;
  v112 = 4;
  v113 = 15;
  strcpy((char *)&v111, "0025");
  v37 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    v83 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v83);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v37 = qword_905FE0;
  }
  if ( GameStatsManager_isSpecialChestUnlocked(v37, &v111) )
    v38 = 0;
  else
LABEL_39:
    v38 = 1;
  v39 = qword_905FD0;
  if ( !qword_905FD0 )
  {
    v114 = (char *)operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v114);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
    v39 = qword_905FD0;
  }
  if ( !GameManager_getGameVariable(v39, "0218") && !GameManager_getGameVariable(v39, "0219") && v38 )
  {
    v40 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_freeChestBtn_001.png");
    v41 = CCMenuItemSpriteExtra_create((int)v40, 0, a1, (__int64)sub_55E800);
    *((_DWORD *)v41 + 93) = 1070386381;
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v41);
    v42 = *(_QWORD *)v41;
    v43 = *(_QWORD *)(a1 + 552);
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)&v114,
      (float)((float)(v115 * 0.5) + 170.0) - 10.0,
      (float)((float)(v116 * 0.5) + 110.0) - 10.0);
    cocos2d::CCNode::convertToNodeSpace(v43, &v83, v44);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v42 + 184))(v41, v45);
    v46 = cocos2d::CCScaleTo::create(0.5, 1.1);
    v47 = cocos2d::CCEaseInOut::create(v46, 2.0);
    v48 = cocos2d::CCScaleTo::create(0.5, 1.0);
    v49 = cocos2d::CCEaseInOut::create(v48, 2.0);
    v50 = cocos2d::CCSequence::create(v47, v49, 0);
    v51 = cocos2d::CCRepeatForever::create(v50);
    cocos2d::CCNode::runAction(v40, v51);
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
    *(_QWORD *)(a1 + 584),
    *(_QWORD *)(a1 + 552),
    10);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v117, v115 * 0.5, (float)(v116 * 0.5) - 24.0);
  v52 = cocos2d::CCLabelBMFont::create("00:00:00", (const char *)&qword_6FFF68);
  *(_QWORD *)(a1 + 680) = v52;
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
    *(_QWORD *)(a1 + 584),
    v52,
    20);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 680) + 160LL))(*(_QWORD *)(a1 + 680));
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v83, -70.0, -50.0);
  cocos2d::CCPoint::operator+(&v117, &v114, v53);
  (*(void (__fastcall **)(_QWORD, char **))(**(_QWORD **)(a1 + 680) + 184LL))(*(_QWORD *)(a1 + 680), &v114);
  v54 = cocos2d::CCLabelBMFont::create("00:00:00", (const char *)&qword_6FFF68);
  *(_QWORD *)(a1 + 688) = v54;
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
    *(_QWORD *)(a1 + 584),
    v54,
    20);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 688) + 160LL))(*(_QWORD *)(a1 + 688));
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v83, 70.0, -50.0);
  cocos2d::CCPoint::operator+(&v117, &v114, v55);
  (*(void (__fastcall **)(_QWORD, char **))(**(_QWORD **)(a1 + 688) + 184LL))(*(_QWORD *)(a1 + 688), &v114);
  v56 = cocos2d::CCString::createWithFormat("chest_%02d_%02d_001.png", 2, 1);
  CString = cocos2d::CCString::getCString(v56);
  v58 = cocos2d::CCSprite::createWithSpriteFrameName(CString);
  v114 = (char *)operator new(0x208u);
  v59 = CCMenuItemSpriteExtra_CCMenuItemSpriteExtra((__int64)v114);
  v60 = v59;
  if ( v59 )
  {
    if ( (unsigned __int8)sub_47940(v59, (_DWORD)v58, 0, a1, (__int64)RewardsPage_onReward) )
    {
      cocos2d::CCObject::autorelease((cocos2d::CCObject *)v60);
      goto LABEL_51;
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v60 + 8LL))(v60, 1);
  }
  v60 = 0;
LABEL_51:
  *(_QWORD *)(a1 + 704) = v60;
  v85 = 0;
  v86 = 14;
  v87 = 15;
  strcpy(Src, "chestClick.ogg");
  v114 = Src;
  if ( (char *)(v60 + 448) != Src )
    sub_3F5A0((void *)(v60 + 448), Src, 0xEu);
  sub_3C310(Src);
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 704) + 64LL))(*(_QWORD *)(a1 + 704), 2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 552) + 464LL))(
    *(_QWORD *)(a1 + 552),
    *(_QWORD *)(a1 + 704));
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v83, 70.0, 14.0);
  cocos2d::CCPoint::operator+(&v117, &v114, v61);
  v62 = **(_QWORD **)(a1 + 704);
  v63 = *(_QWORD *)(a1 + 552);
  v64 = *(_QWORD *)(a1 + 704);
  cocos2d::CCNode::convertToWorldSpace(*(_QWORD *)(a1 + 584), &v92, &v114);
  cocos2d::CCNode::convertToNodeSpace(v63, v91, v65);
  (*(void (__fastcall **)(__int64, __int64))(v62 + 184))(v64, v66);
  *(_DWORD *)(*(_QWORD *)(a1 + 704) + 400LL) = 1066024305;
  v67 = cocos2d::CCString::createWithFormat("chest_%02d_%02d_001.png", 1, 1);
  v68 = cocos2d::CCString::getCString(v67);
  v69 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName(v68);
  v70 = *(float *)((*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v58 + 320LL))(v58) + 4)
      * 0.19999999;
  v114 = (char *)operator new(0x208u);
  v71 = CCMenuItemSpriteExtra_CCMenuItemSpriteExtra((__int64)v114);
  v72 = (cocos2d::CCObject *)v71;
  if ( !v71 )
    goto LABEL_57;
  if ( !(unsigned __int8)sub_47940(v71, v69, 0, a1, (__int64)RewardsPage_onReward) )
  {
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v72 + 8LL))(v72, 1);
LABEL_57:
    v72 = 0;
    goto LABEL_58;
  }
  cocos2d::CCObject::autorelease(v72);
LABEL_58:
  *(_QWORD *)(a1 + 696) = v72;
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v72 + 64LL))(v72, 1);
  v88[15] = 0;
  v89 = 14;
  v90 = 15;
  strcpy(v88, "chestClick.ogg");
  v114 = v88;
  v73 = (char *)(*(_QWORD *)(a1 + 696) + 448LL);
  if ( v73 != v88 )
    sub_3F5A0(v73, v88, 0xEu);
  sub_3C310(v88);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 552) + 464LL))(
    *(_QWORD *)(a1 + 552),
    *(_QWORD *)(a1 + 696));
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v83, -70.0, 14.0 - (float)(v70 * 0.5));
  cocos2d::CCPoint::operator+(&v117, &v114, v74);
  v75 = **(_QWORD **)(a1 + 696);
  v76 = *(_QWORD *)(a1 + 552);
  v77 = *(_QWORD *)(a1 + 696);
  cocos2d::CCNode::convertToWorldSpace(*(_QWORD *)(a1 + 584), &v92, &v114);
  cocos2d::CCNode::convertToNodeSpace(v76, v91, v78);
  (*(void (__fastcall **)(__int64, __int64))(v75 + 184))(v77, v79);
  *(_DWORD *)(*(_QWORD *)(a1 + 696) + 400LL) = 1066024305;
  v80 = *(_QWORD *)&qword_905FB0;
  if ( !*(_QWORD *)&qword_905FB0 )
  {
    *(_QWORD *)&v93 = operator new(0x690u);
    *(_QWORD *)&qword_905FB0 = sub_214250(v93);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
    v80 = *(_QWORD *)&qword_905FB0;
  }
  *(_QWORD *)(v80 + 1536) = a1 + 672;
  v81 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    *(_QWORD *)&v93 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v93);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v81 = qword_905FE0;
  }
  if ( cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(v81 + 528), 1) )
  {
    sub_55E340(a1);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 680) + 336LL))(*(_QWORD *)(a1 + 680), 0);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 688) + 336LL))(*(_QWORD *)(a1 + 688), 0);
    v82 = *(_QWORD *)&qword_905FB0;
    if ( !*(_QWORD *)&qword_905FB0 )
    {
      v114 = (char *)operator new(0x690u);
      *(_QWORD *)&qword_905FB0 = sub_214250(v114);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0);
      v82 = *(_QWORD *)&qword_905FB0;
    }
    sub_2597D0(v82, 0);
  }
  cocos2d::CCNode::schedule(a1, sub_55E340);
  return 1;
}
