#include <Geode/binding/ChallengesPage.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/9] Address: 0x9d290
// Method: ChallengesPage::updateDots
// Hidden C++ exception states: #wind=1
__int64 __fastcall ChallengesPage_updateDots(__int64 a1)
{
  int i; // edi
  __int64 v3; // rcx
  bool v4; // bl
  struct cocos2d::CCObject *v5; // rax
  __int64 result; // rax
  void *v7; // [rsp+38h] [rbp+10h]

  for ( i = 1; i <= 3; ++i ) /*0x9d2a2*/
  {
    v3 = qword_905FE0; /*0x9d2b0*/
    if ( !qword_905FE0 ) /*0x9d2ba*/
    {
      v7 = operator new(0x3E8u); /*0x9d2c6*/
      qword_905FE0 = sub_2D2B40(v7); /*0x9d2d4*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x9d2e5*/
      v3 = qword_905FE0; /*0x9d2e7*/
    }
    v4 = sub_2E1FD0(v3, (unsigned int)i) != 0; /*0x9d2f8*/
    v5 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 688), i - 1); /*0x9d305*/
    result = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *, bool))(*(_QWORD *)v5 + 336LL))(v5, v4); /*0x9d31b*/
  }
  return result; /*0x9d325*/
}

// [3/9] Address: 0x9d340
// Method: ChallengesPage::challengeStatusFinished
// Hidden C++ exception states: #wind=1
__int64 __fastcall ChallengesPage_challengeStatusFinished(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  int v4; // ebx
  __int64 v5; // rsi
  unsigned int v6; // ebp
  struct cocos2d::CCObject *v7; // rax
  int v8; // r9d
  __int64 v9; // rcx
  __int64 ChallengeNode; // rax
  __int64 v11; // rcx
  void *v13; // [rsp+80h] [rbp+8h]

  v2 = a1 - 672; /*0x9d365*/
  ChallengesPage_updateTimers(a1 - 672); /*0x9d372*/
  LODWORD(v3) = 0; /*0x9d377*/
  v4 = 1; /*0x9d379*/
  v5 = 1; /*0x9d37e*/
  do /*0x9d43e*/
  {
    v6 = v3; /*0x9d391*/
    v7 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 56), v5); /*0x9d3a6*/
    if ( v7 && *((_BYTE *)v7 + 352) ) /*0x9d3b1*/
    {
      v9 = qword_905FE0; /*0x9d3ba*/
      if ( !qword_905FE0 ) /*0x9d3c4*/
      {
        v13 = operator new(0x3E8u); /*0x9d3d0*/
        qword_905FE0 = sub_2D2B40(v13); /*0x9d3e1*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x9d3f2*/
        v9 = qword_905FE0; /*0x9d3f4*/
      }
      if ( sub_2E1FD0(v9, (unsigned int)v4) ) /*0x9d3fd*/
        ChallengesPage_exitNodeAtSlot(v2, (unsigned int)v4); /*0x9d40f*/
    }
    ChallengeNode = ChallengesPage_createChallengeNode(v2, v4, 0, v8, 0); /*0x9d428*/
    v3 = v6 + 1; /*0x9d42d*/
    if ( !ChallengeNode ) /*0x9d433*/
      v3 = v6; /*0x9d433*/
    ++v4; /*0x9d436*/
    ++v5; /*0x9d438*/
  }
  while ( v4 <= 3 ); /*0x9d43e*/
  LOBYTE(v3) = 1; /*0x9d44b*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 24) + 336LL))(*(_QWORD *)(a1 + 24), v3); /*0x9d44d*/
  ChallengesPage_updateTimers(v2); /*0x9d459*/
  cocos2d::CCNode::unschedule(v2, ChallengesPage_updateTimers); /*0x9d468*/
  cocos2d::CCNode::schedule(v2, ChallengesPage_updateTimers); /*0x9d480*/
  v11 = *(_QWORD *)(a1 + 32); /*0x9d486*/
  if ( v11 ) /*0x9d48d*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 336LL))(v11, 0); /*0x9d494*/
  return ChallengesPage_updateDots(v2); /*0x9d49d*/
}

// [4/9] Address: 0x9d4d0
// Method: ChallengesPage::challengeStatusFailed
// Hidden C++ exception states: #wind=1
struct cocos2d::CCAction *__fastcall ChallengesPage_challengeStatusFailed(__int64 a1)
{
  struct cocos2d::CCAction *result; // rax
  __int64 v3; // rbx
  struct cocos2d::CCFiniteTimeAction *v4; // rax
  struct cocos2d::CCAction *v5; // rax
  __int64 v6; // rcx
  void *v7; // [rsp+30h] [rbp+8h]

  result = (struct cocos2d::CCAction *)qword_905FE0; /*0x9d4e2*/
  if ( !qword_905FE0 ) /*0x9d4ec*/
  {
    v7 = operator new(0x3E8u); /*0x9d4f8*/
    qword_905FE0 = sub_2D2B40(v7); /*0x9d506*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x9d517*/
    result = (struct cocos2d::CCAction *)qword_905FE0; /*0x9d519*/
  }
  if ( *((double *)result + 71) <= 0.0 ) /*0x9d52f*/
  {
    v3 = cocos2d::CCCallFunc::create(a1 - 672, ChallengesPage_tryGetChallenges); /*0x9d545*/
    v4 = cocos2d::CCDelayTime::create(5.0); /*0x9d550*/
    v5 = cocos2d::CCSequence::create(v4, v3, 0); /*0x9d55f*/
    result = cocos2d::CCNode::runAction((cocos2d::CCNode *)(a1 - 672), v5); /*0x9d56f*/
  }
  v6 = *(_QWORD *)(a1 + 32); /*0x9d575*/
  if ( v6 ) /*0x9d57c*/
  {
    if ( *(_BYTE *)(a1 + 40) ) /*0x9d57e*/
      return (struct cocos2d::CCAction *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 336LL))(v6, 0); /*0x9d589*/
  }
  return result; /*0x9d58f*/
}

// [5/9] Address: 0x9d5a0
// Method: ChallengesPage::tryGetChallenges
// Hidden C++ exception states: #wind=1
void __fastcall ChallengesPage_tryGetChallenges(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  void *v3; // [rsp+30h] [rbp+8h]

  if ( *(_BYTE *)(a1 + 712) ) /*0x9d5a4*/
  {
    v1 = *(_QWORD *)(a1 + 704); /*0x9d5ad*/
    if ( v1 ) /*0x9d5b7*/
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1 + 336LL))(v1, 0); /*0x9d5c2*/
  }
  else
  {
    *(_BYTE *)(a1 + 712) = 1; /*0x9d5c9*/
    v2 = *(_QWORD *)&qword_905FB0; /*0x9d5d0*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x9d5da*/
    {
      v3 = operator new(0x690u); /*0x9d5e6*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v3); /*0x9d5f4*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x9d605*/
      v2 = *(_QWORD *)&qword_905FB0; /*0x9d607*/
    }
    GameLevelManager_getGJChallenges(v2); /*0x9d612*/
  }
}

// [6/9] Address: 0x9d620
// Method: ChallengesPage::createChallengeNode
// Hidden C++ exception states: #wind=5
char *__fastcall ChallengesPage_createChallengeNode(__int64 a1, int a2, char a3, float a4, unsigned __int8 a5)
{
  __int64 v6; // rsi
  __int64 v8; // rcx
  __int64 v10; // rax
  unsigned __int8 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rbx
  char *v16; // rdi
  __int64 v17; // rax
  const struct cocos2d::CCPoint *v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rcx
  cocos2d::CCDirector *v21; // rax
  float v22; // xmm0_4
  __int64 v23; // rax
  struct cocos2d::CCFiniteTimeAction *v24; // rbx
  struct cocos2d::CCActionInterval *v25; // rax
  struct cocos2d::CCEaseElasticOut *v26; // rax
  struct cocos2d::CCAction *v27; // rax
  char *v28; // [rsp+20h] [rbp-58h] BYREF
  char v29[8]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v30[16]; // [rsp+30h] [rbp-48h] BYREF
  float v31; // [rsp+80h] [rbp+8h] BYREF
  float v32; // [rsp+84h] [rbp+Ch]

  v6 = a2; /*0x9d642*/
  if ( cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 728), a2) ) /*0x9d652*/
    return 0; /*0x9d65d*/
  v10 = cocos2d::CCDirector::sharedDirector(v8); /*0x9d664*/
  cocos2d::CCDirector::getWinSize(v10, &v31); /*0x9d675*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v29, v31 * 0.5, (float)((float)(v32 * 0.5) + 80.0) + 5.0); /*0x9d6b2*/
  v11 = a5; /*0x9d6b8*/
  v12 = qword_905FE0; /*0x9d6c1*/
  if ( !qword_905FE0 ) /*0x9d6cb*/
  {
    v28 = (char *)operator new(0x3E8u); /*0x9d6d7*/
    qword_905FE0 = sub_2D2B40(v28); /*0x9d6e5*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x9d6f6*/
    v12 = qword_905FE0; /*0x9d6f8*/
  }
  if ( !sub_2E1EF0(v12, (unsigned int)v6) ) /*0x9d701*/
  {
    v13 = qword_905FE0; /*0x9d70b*/
    if ( !qword_905FE0 ) /*0x9d715*/
    {
      v28 = (char *)operator new(0x3E8u); /*0x9d721*/
      qword_905FE0 = sub_2D2B40(v28); /*0x9d72f*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x9d740*/
      v13 = qword_905FE0; /*0x9d742*/
    }
    GameStatsManager_processChallengeQueue(v13, v6); /*0x9d74b*/
    v11 = 1; /*0x9d750*/
  }
  v14 = qword_905FE0; /*0x9d753*/
  if ( !qword_905FE0 ) /*0x9d75d*/
  {
    v28 = (char *)operator new(0x3E8u); /*0x9d769*/
    qword_905FE0 = sub_2D2B40(v28); /*0x9d777*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x9d788*/
    v14 = qword_905FE0; /*0x9d78a*/
  }
  v15 = sub_2E1EF0(v14, (unsigned int)v6); /*0x9d798*/
  v16 = (char *)operator new(0x168u); /*0x9d7a5*/
  v28 = v16; /*0x9d7a8*/
  cocos2d::CCNode::CCNode((cocos2d::CCNode *)v16); /*0x9d7b0*/
  *(_QWORD *)v16 = &ChallengeNode::`vftable'; /*0x9d7be*/
  *((_QWORD *)v16 + 41) = 0; /*0x9d7c1*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v16 + 336)); /*0x9d7d3*/
  *((_QWORD *)v16 + 43) = 0; /*0x9d7d9*/
  v16[352] = 0; /*0x9d7e4*/
  if ( (unsigned __int8)sub_9E2C0(v16, v15, a1, v11, v28) ) /*0x9d7f8*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v16); /*0x9d804*/
  }
  else
  {
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v16 + 8LL))(v16, 1); /*0x9d814*/
    v16 = 0; /*0x9d817*/
  }
  (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 584) + 464LL))(*(_QWORD *)(a1 + 584), v16); /*0x9d826*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v30, 0.0, (float)(v6 - 1) * -80.0); /*0x9d846*/
  cocos2d::CCPoint::operator+(v29, &v28, v17); /*0x9d859*/
  (*(void (__fastcall **)(char *, char **))(*(_QWORD *)v16 + 184LL))(v16, &v28); /*0x9d86a*/
  cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(a1 + 728), (struct cocos2d::CCObject *)v16, v6); /*0x9d87d*/
  if ( !a3 ) /*0x9d886*/
  {
    v18 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v16 + 200LL))(v16); /*0x9d892*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v28, v18); /*0x9d8a0*/
    v19 = *(_QWORD *)v16; /*0x9d8a6*/
    v21 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v20); /*0x9d8a9*/
    v22 = cocos2d::CCDirector::getScreenRight(v21) + 160.0; /*0x9d8b8*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v30, v22, *((float *)&v28 + 1)); /*0x9d8ce*/
    (*(void (__fastcall **)(char *, __int64))(v19 + 184))(v16, v23); /*0x9d8da*/
    v24 = cocos2d::CCDelayTime::create(a4); /*0x9d8e9*/
    v25 = cocos2d::CCMoveTo::create(0.5, (const struct cocos2d::CCPoint *)&v28); /*0x9d8f9*/
    v26 = cocos2d::CCEaseElasticOut::create(v25, 0.60000002); /*0x9d90a*/
    v27 = cocos2d::CCSequence::create(v24, v26, 0); /*0x9d919*/
    cocos2d::CCNode::runAction((cocos2d::CCNode *)v16, v27); /*0x9d925*/
  }
  return v16; /*0x9d92e*/
}

// [7/9] Address: 0x9d950
// Method: ChallengesPage::exitNodeAtSlot
void __fastcall ChallengesPage_exitNodeAtSlot(__int64 a1, int a2, float a3)
{
  __int64 v3; // r14
  cocos2d::CCNode *v5; // rsi
  struct cocos2d::CCFiniteTimeAction *v6; // rdi
  __int64 v7; // rax
  const struct cocos2d::CCPoint *v8; // rax
  struct cocos2d::CCActionInterval *v9; // rax
  struct cocos2d::CCEaseElasticIn *v10; // rbx
  __int64 v11; // rax
  struct cocos2d::CCAction *v12; // rax
  char v13; // [rsp+50h] [rbp+8h] BYREF

  v3 = a2; /*0x9d959*/
  v5 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 728), a2); /*0x9d977*/
  if ( v5 ) /*0x9d97d*/
  {
    v6 = cocos2d::CCDelayTime::create(a3); /*0x9d999*/
    v7 = (*(__int64 (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v5 + 200LL))(v5); /*0x9d9a6*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v13, -160.0, *(float *)(v7 + 4)); /*0x9d9ba*/
    v9 = cocos2d::CCMoveTo::create(0.5, v8); /*0x9d9cb*/
    v10 = cocos2d::CCEaseElasticIn::create(v9, 1.2); /*0x9d9ec*/
    v11 = cocos2d::CCCallFunc::create(v5, sub_3E5B0); /*0x9d9ef*/
    v12 = cocos2d::CCSequence::create(v6, v10, v11, 0); /*0x9da01*/
    cocos2d::CCNode::runAction(v5, v12); /*0x9da0d*/
    cocos2d::CCDictionary::removeObjectForKey(*(cocos2d::CCDictionary **)(a1 + 728), v3); /*0x9da1d*/
  }
}

// [8/9] Address: 0x9da40
// Method: ChallengesPage::updateTimers
// Hidden C++ exception states: #wind=6
double __fastcall ChallengesPage_updateTimers(__int64 a1)
{
  __int64 v2; // rax
  double result; // xmm0_8
  double v4; // xmm6_8
  __int64 v5; // rax
  int v6; // r14d
  const char *v7; // rdx
  void (__fastcall **v8)(__int64, const char *); // rdi
  __int64 v9; // rbx
  cocos2d::CCString *v10; // rax
  const char *CString; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 i; // rsi
  __int64 v16; // rbx
  _QWORD *v17; // rax
  _QWORD *v18; // rdi
  __int64 v19; // rcx
  _QWORD *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  void *v24; // [rsp+20h] [rbp-78h]
  void *v25; // [rsp+20h] [rbp-78h]
  void *v26; // [rsp+20h] [rbp-78h]
  void *v27; // [rsp+20h] [rbp-78h]
  _QWORD v28[4]; // [rsp+28h] [rbp-70h] BYREF
  struct __timeb64 Time; // [rsp+48h] [rbp-50h] BYREF

  v2 = qword_905FE0; /*0x9da72*/
  if ( !qword_905FE0 ) /*0x9da7c*/
  {
    v24 = operator new(0x3E8u); /*0x9da88*/
    qword_905FE0 = sub_2D2B40(v24); /*0x9da96*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x9daa7*/
    v2 = qword_905FE0; /*0x9daa9*/
  }
  result = 0.0; /*0x9dab8*/
  if ( *(double *)(v2 + 568) > 0.0 )
  {
    ftime64(&Time); /*0x9daca*/
    v4 = (double)Time.millitm / 1000.0 + (double)SLODWORD(Time.time); /*0x9daef*/
    v5 = qword_905FE0; /*0x9daf3*/
    if ( !qword_905FE0 ) /*0x9dafd*/
    {
      v25 = operator new(0x3E8u); /*0x9db09*/
      qword_905FE0 = sub_2D2B40(v25); /*0x9db17*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x9db28*/
      v5 = qword_905FE0; /*0x9db2a*/
    }
    v6 = (int)(*(double *)(v5 + 568) - v4); /*0x9db3d*/
    if ( v6 < 0 ) /*0x9db48*/
      v6 = 0; /*0x9db48*/
    GameToolbox_getTimeString((__int64)v28, v6, 0); /*0x9db57*/
    v7 = (const char *)v28; /*0x9db5d*/
    if ( v28[3] > 0xFu ) /*0x9db68*/
      v7 = (const char *)v28[0]; /*0x9db68*/
    v8 = *(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 696) + 360LL); /*0x9db75*/
    v9 = *(_QWORD *)(a1 + 696); /*0x9db7c*/
    v10 = cocos2d::CCString::createWithFormat("New quests in: %s", v7);
    CString = cocos2d::CCString::getCString(v10); /*0x9db8f*/
    (*v8)(v9 + 360, CString); /*0x9db9f*/
    v13 = *(_QWORD *)(a1 + 728); /*0x9dba1*/
    if ( v13 ) /*0x9dbab*/
    {
      v14 = *(_QWORD *)(v13 + 56); /*0x9dbad*/
      if ( v14 ) /*0x9dbb4*/
      {
        for ( i = *(_QWORD *)(v14 + 288); ; i = *(_QWORD *)(i + 288) ) /*0x9dbb6*/
        {
          v16 = *(_QWORD *)(v14 + 264); /*0x9dbc0*/
          v17 = (_QWORD *)sub_3E4F0(&Time, v28); /*0x9dbd1*/
          v18 = v17; /*0x9dbd6*/
          v19 = *(_QWORD *)(v16 + 344); /*0x9dbde*/
          if ( v19 ) /*0x9dbe8*/
          {
            v20 = v17; /*0x9dbea*/
            if ( v17[3] > 0xFu ) /*0x9dbf2*/
              v20 = (_QWORD *)*v17; /*0x9dbf4*/
            (**(void (__fastcall ***)(__int64, _QWORD *))(v19 + 360))(v19 + 360, v20); /*0x9dc01*/
          }
          sub_3C310(v18); /*0x9dc07*/
          v14 = i; /*0x9dc0c*/
          if ( !i ) /*0x9dc12*/
            break; /*0x9dc12*/
        }
      }
    }
    if ( v6 <= 0 && !*(_BYTE *)(a1 + 713) ) /*0x9dc26*/
    {
      LOBYTE(v12) = 1; /*0x9dc3d*/
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 704) + 336LL))(*(_QWORD *)(a1 + 704), v12); /*0x9dc3f*/
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 696) + 336LL))(*(_QWORD *)(a1 + 696), 0); /*0x9dc51*/
      *(_WORD *)(a1 + 712) = 256; /*0x9dc57*/
      v21 = qword_905FE0; /*0x9dc60*/
      if ( !qword_905FE0 ) /*0x9dc6a*/
      {
        v26 = operator new(0x3E8u); /*0x9dc76*/
        qword_905FE0 = sub_2D2B40(v26); /*0x9dc84*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x9dc95*/
        v21 = qword_905FE0; /*0x9dc97*/
      }
      *(_QWORD *)(v21 + 568) = 0; /*0x9dc9e*/
      if ( *(_BYTE *)(a1 + 712) ) /*0x9dca5*/
      {
        v22 = *(_QWORD *)(a1 + 704); /*0x9dcae*/
        if ( v22 ) /*0x9dcb8*/
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v22 + 336LL))(v22, 0); /*0x9dcbf*/
      }
      else
      {
        *(_BYTE *)(a1 + 712) = 1; /*0x9dcc7*/
        v23 = *(_QWORD *)&qword_905FB0; /*0x9dcce*/
        if ( !*(_QWORD *)&qword_905FB0 ) /*0x9dcd8*/
        {
          v27 = operator new(0x690u); /*0x9dce4*/
          *(_QWORD *)&qword_905FB0 = sub_214250(v27); /*0x9dcf2*/
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x9dd03*/
          v23 = *(_QWORD *)&qword_905FB0; /*0x9dd05*/
        }
        GameLevelManager_getGJChallenges(v23); /*0x9dd0c*/
      }
    }
    return sub_3C310(v28); /*0x9dd17*/
  }
  return result; /*0x9dd1c*/
}

// [9/9] Address: 0x9e2a0
// Method: ChallengesPage::currencyWillExit
__int64 __fastcall ChallengesPage_currencyWillExit(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 40); /*0x9e2a0*/
  if ( result ) /*0x9e2a7*/
  {
    if ( result == a2 ) /*0x9e2ac*/
      *(_QWORD *)(a1 + 40) = 0; /*0x9e2ae*/
  }
  return result; /*0x9e2b6*/
}
