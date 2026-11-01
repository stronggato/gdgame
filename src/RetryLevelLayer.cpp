#include <Geode/binding/RetryLevelLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/6] Address: 0x55c6c0
// Method: RetryLevelLayer::showLayer
struct cocos2d::CCAction *__fastcall RetryLevelLayer_showLayer(cocos2d::CCNode *a1, char a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  struct cocos2d::CCActionInterval *v8; // rax
  struct cocos2d::CCFiniteTimeAction *v9; // rbx
  __int64 v10; // rax
  struct cocos2d::CCAction *v11; // rax
  struct cocos2d::CCAction *v12; // rax

  cocos2d::CCNode::stopAllActions(*((cocos2d::CCNode **)a1 + 72)); /*0x55c6dc*/
  (*(void (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)a1 + 1096LL))(a1); /*0x55c6e8*/
  v4 = (__int64 *)*((_QWORD *)a1 + 72); /*0x55c6ee*/
  v5 = *v4; /*0x55c6f5*/
  if ( a2 ) /*0x55c6fa*/
  {
    (*(void (__fastcall **)(__int64 *, __int64))(v5 + 184))(v4, (__int64)a1 + 544); /*0x55c703*/
    LOBYTE(v6) = 100; /*0x55c717*/
    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)a1 + 51) + 40LL))((__int64)a1 + 408, v6); /*0x55c719*/
    return (struct cocos2d::CCAction *)(*(__int64 (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)a1 + 1112LL))(a1); /*0x55c731*/
  }
  else
  {
    (*(void (**)(void))(v5 + 160))(); /*0x55c740*/
    v8 = cocos2d::CCScaleTo::create(0.5, 1.0); /*0x55c756*/
    v9 = cocos2d::CCEaseElasticOut::create(v8, 0.60000002); /*0x55c777*/
    v10 = cocos2d::CCCallFunc::create(a1, sub_132EAC); /*0x55c77a*/
    v11 = cocos2d::CCSequence::create(v9, v10, 0); /*0x55c789*/
    cocos2d::CCNode::runAction(*((cocos2d::CCNode **)a1 + 72), v11); /*0x55c799*/
    (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)a1 + 51) + 40LL))((__int64)a1 + 408, 0); /*0x55c7af*/
    v12 = cocos2d::CCFadeTo::create(0.5, 0x64u); /*0x55c7bc*/
    return cocos2d::CCNode::runAction(a1, v12); /*0x55c7d7*/
  }
}

// [3/6] Address: 0x55c7e0
// Method: RetryLevelLayer::enterAnimFinished
// Hidden C++ exception states: #wind=3
void RetryLevelLayer_enterAnimFinished()
{
  void *v0; // rax

  if ( !qword_905FD0 ) /*0x55c7ec*/
  {
    v0 = operator new(0x6E8u); /*0x55c7f3*/
    qword_905FD0 = sub_2723A0(v0); /*0x55c806*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x55c81b*/
  }
}

// [4/6] Address: 0x55c830
// Method: RetryLevelLayer::rewardedVideoFinished
void __fastcall RetryLevelLayer_rewardedVideoFinished(__int64 a1)
{
  *(_BYTE *)(a1 + 17) = 0; /*0x55c830*/
}

// [5/6] Address: 0x55c910
// Method: RetryLevelLayer::keyDown
__int64 __fastcall RetryLevelLayer_keyDown(__int64 a1, int a2)
{
  __int64 v2; // r8

  v2 = (unsigned int)(a2 - 27); /*0x55c913*/
  if ( a2 != 27 ) /*0x55c917*/
  {
    v2 = (unsigned int)(a2 - 32); /*0x55c919*/
    if ( a2 == 32 ) /*0x55c91d*/
      return sub_55C840(a1 - 344, 0, v2); /*0x55c91d*/
    v2 = (unsigned int)(a2 - 1001); /*0x55c91f*/
    if ( a2 == 1001 ) /*0x55c926*/
      return sub_55C840(a1 - 344, 0, v2); /*0x55c944*/
    v2 = (unsigned int)(a2 - 1003); /*0x55c928*/
    if ( a2 != 1003 ) /*0x55c92c*/
    {
      if ( a2 != 1009 ) /*0x55c932*/
        return cocos2d::CCLayer::keyDown(a1); /*0x55c934*/
      return sub_55C840(a1 - 344, 0, v2); /*0x55c932*/
    }
  }
  return sub_55C960(a1 - 344, 0, v2);
}

// [6/6] Address: 0x55ca80
// Method: RetryLevelLayer::keyBackClicked
__int64 __fastcall RetryLevelLayer_keyBackClicked(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 288) ) /*0x55ca80*/
  {
    *(_BYTE *)(a1 + 288) = 1; /*0x55ca89*/
    return sub_55C960(a1 - 336, 0, a3); /*0x55ca99*/
  }
  return result; /*0x55ca9e*/
}
