#include <Geode/binding/FLAlertLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/12] Address: 0x59110
// Method: FLAlertLayer::FLAlertLayer
// Hidden C++ exception states: #wind=1
__int64 __fastcall FLAlertLayer_FLAlertLayer(__int64 a1)
{
  cocos2d::CCLayerColor::CCLayerColor((cocos2d::CCLayerColor *)a1); /*0x59122*/
  *(_QWORD *)a1 = &FLAlertLayer::`vftable'; /*0x59130*/
  *(_QWORD *)(a1 + 320) = &FLAlertLayer::`vftable'; /*0x5913a*/
  *(_QWORD *)(a1 + 328) = &FLAlertLayer::`vftable'; /*0x59148*/
  *(_QWORD *)(a1 + 336) = &FLAlertLayer::`vftable'; /*0x59156*/
  *(_QWORD *)(a1 + 344) = &FLAlertLayer::`vftable'; /*0x59164*/
  *(_QWORD *)(a1 + 352) = &FLAlertLayer::`vftable'; /*0x59172*/
  *(_QWORD *)(a1 + 408) = &FLAlertLayer::`vftable'; /*0x59180*/
  *(_QWORD *)(a1 + 432) = &FLAlertLayer::`vftable'; /*0x5918e*/
  *(_QWORD *)(a1 + 544) = &FLAlertLayer::`vftable'; /*0x5919c*/
  *(_QWORD *)(a1 + 552) = 0; /*0x591a5*/
  *(_QWORD *)(a1 + 560) = 0; /*0x591ac*/
  *(_QWORD *)(a1 + 568) = 0; /*0x591b3*/
  *(_BYTE *)(a1 + 576) = 0; /*0x591ba*/
  *(_QWORD *)(a1 + 584) = 0; /*0x591c1*/
  *(_QWORD *)(a1 + 592) = 0; /*0x591c8*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(a1 + 600)); /*0x591d6*/
  *(_QWORD *)(a1 + 608) = 0; /*0x591dc*/
  *(_QWORD *)(a1 + 616) = 0; /*0x591e3*/
  *(_QWORD *)(a1 + 624) = 0; /*0x591ea*/
  *(_DWORD *)(a1 + 632) = -1; /*0x591f1*/
  *(_WORD *)(a1 + 636) = 0; /*0x591fb*/
  *(_DWORD *)(a1 + 640) = -1; /*0x59202*/
  *(_BYTE *)(a1 + 644) = 0; /*0x5920c*/
  *(_QWORD *)(a1 + 648) = 0; /*0x59213*/
  *(_BYTE *)(a1 + 656) = 0; /*0x5921a*/
  return a1; /*0x59224*/
}

// [2/12] Address: 0x59240
// Method: FLAlertLayer::~FLAlertLayer
void *__fastcall FLAlertLayer__dtor_FLAlertLayer(void *Block, char a2)
{
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x5924f*/
  if ( (a2 & 1) != 0 ) /*0x59257*/
    j_j_free(Block); /*0x59261*/
  return Block; /*0x59266*/
}

// [3/12] Address: 0x59340
// Method: FLAlertLayer::create
// Hidden C++ exception states: #wind=1
__int64 __fastcall FLAlertLayer_create(int a1, int a2, __int64 a3, int a4, __int64 a5)
{
  int v9; // eax
  __int64 v10; // rbx
  _BYTE v12[32]; // [rsp+58h] [rbp-60h] BYREF
  __int64 v13; // [rsp+78h] [rbp-40h]

  v13 = a3; /*0x5936a*/
  v9 = sub_3E4F0(v12, a3); /*0x59377*/
  v10 = FLAlertLayer_create_0(a1, a2, v9, a4, a5, 1132068864, 0, 0, 1065353216); /*0x593c4*/
  sub_3C310(a3); /*0x593ca*/
  return v10; /*0x593d2*/
}

// [4/12] Address: 0x594a0
// Method: FLAlertLayer::create_0
// Hidden C++ exception states: #wind=2
cocos2d::CCObject *__fastcall FLAlertLayer_create_0(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        char a7,
        int a8,
        int a9)
{
  cocos2d::CCObject *v13; // rbx
  int v14; // eax
  void *v16; // [rsp+50h] [rbp-78h]
  _BYTE v17[32]; // [rsp+58h] [rbp-70h] BYREF
  __int64 v18; // [rsp+78h] [rbp-50h]

  v18 = a3; /*0x594ce*/
  v16 = operator new(0x298u); /*0x594e5*/
  v13 = (cocos2d::CCObject *)FLAlertLayer_FLAlertLayer((__int64)v16); /*0x594f2*/
  if ( v13 ) /*0x594f8*/
  {
    v14 = sub_3E4F0(v17, a3); /*0x59502*/
    if ( (unsigned __int8)GJRateLevelLayer_init((_DWORD)v13, a1, a2, v14, a4, a5, a6, a7, a8, a9) ) /*0x59556*/
    {
      cocos2d::CCObject::autorelease(v13); /*0x59562*/
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v13 + 8LL))(v13, 1); /*0x59572*/
      v13 = 0; /*0x59575*/
    }
  }
  sub_3C310(a3); /*0x5957a*/
  return v13; /*0x59582*/
}

// [5/12] Address: 0x595b0
// Method: FLAlertLayer::init
// Hidden C++ exception states: #wind=1
bool __fastcall FLAlertLayer_init(__int64 a1, char a2)
{
  bool result; // al
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int16 v8; // [rsp+38h] [rbp+10h] BYREF
  char v9; // [rsp+3Ah] [rbp+12h]
  char v10; // [rsp+3Bh] [rbp+13h]
  void *v11; // [rsp+40h] [rbp+18h]

  v8 = 0; /*0x595b9*/
  v9 = 0; /*0x595c0*/
  v10 = a2; /*0x595c5*/
  result = cocos2d::CCLayerColor::initWithColor((cocos2d::CCLayerColor *)a1, (const struct cocos2d::_ccColor4B *)&v8); /*0x595d6*/
  if ( result ) /*0x595de*/
  {
    v4 = qword_905FD0; /*0x595e6*/
    if ( !qword_905FD0 ) /*0x595f0*/
    {
      v11 = operator new(0x6E8u); /*0x595fc*/
      qword_905FD0 = sub_2723A0(v11); /*0x5960a*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x5961b*/
      v4 = qword_905FD0; /*0x5961d*/
    }
    if ( GameManager_getGameVariable(v4, "0168") ) /*0x5962b*/
      *(_BYTE *)(a1 + 596) = 1; /*0x59634*/
    sub_5ABA0(a1); /*0x5963e*/
    LOBYTE(v5) = 1; /*0x59646*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 920LL))(a1, v5); /*0x5964b*/
    LOBYTE(v6) = 1; /*0x59654*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 992LL))(a1, v6); /*0x59659*/
    v7 = cocos2d::CCLayer::create(); /*0x5965f*/
    *(_QWORD *)(a1 + 584) = v7; /*0x59665*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 464LL))(a1, v7); /*0x5967c*/
    *(_DWORD *)(a1 + 640) = -1; /*0x5967f*/
    return 1; /*0x59689*/
  }
  return result; /*0x595e0*/
}

// [6/12] Address: 0x5a350
// Method: FLAlertLayer::keyDown
void __fastcall FLAlertLayer_keyDown(__int64 a1, int a2)
{
  struct cocos2d::CCObject *v2; // rbx
  __int64 v3; // rax
  cocos2d::CCTouchDispatcher *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  void (__fastcall ***v7)(_QWORD, struct cocos2d::CCObject *, __int64); // rcx

  if ( a2 == 32 ) /*0x5a359*/
  {
    if ( !*(_BYTE *)(a1 + 293) ) /*0x5a376*/
      return; /*0x5a376*/
  }
  else if ( a2 != 1007 ) /*0x5a361*/
  {
    cocos2d::CCLayer::keyDown(a1); /*0x5a368*/
    return; /*0x5a368*/
  }
  v2 = (struct cocos2d::CCObject *)(a1 - 344); /*0x5a378*/
  v3 = cocos2d::CCDirector::sharedDirector(a1); /*0x5a37f*/
  v4 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 144LL))(v3); /*0x5a392*/
  cocos2d::CCTouchDispatcher::unregisterForcePrio(v4, v2); /*0x5a39a*/
  v7 = (void (__fastcall ***)(_QWORD, struct cocos2d::CCObject *, __int64))*((_QWORD *)v2 + 70); /*0x5a3a0*/
  if ( v7 ) /*0x5a3aa*/
  {
    LOBYTE(v6) = 1; /*0x5a3af*/
    (**v7)(v7, v2, v6); /*0x5a3b5*/
  }
  LOBYTE(v5) = 1; /*0x5a3ba*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v2 + 520LL))(v2, v5); /*0x5a3c4*/
}

// [7/12] Address: 0x5a3e0
// Method: FLAlertLayer::keyBackClicked
__int64 __fastcall FLAlertLayer_keyBackClicked(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // rax
  cocos2d::CCTouchDispatcher *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  cocos2d::CCTouchDispatcher *v8; // rax
  void (__fastcall ***v9)(_QWORD, __int64, __int64); // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  cocos2d::CCTouchDispatcher *v12; // rax

  v1 = a1 - 336; /*0x5a3ea*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 336) + 992LL))(a1 - 336, 0); /*0x5a3fc*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1 + 1008LL))(v1, 0); /*0x5a40a*/
  if ( !*(_BYTE *)(a1 + 320) ) /*0x5a417*/
  {
    if ( *(_BYTE *)(v1 + 576) ) /*0x5a43c*/
    {
      v11 = cocos2d::CCDirector::sharedDirector(v3); /*0x5a477*/
      v12 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 144LL))(v11); /*0x5a48a*/
      cocos2d::CCTouchDispatcher::unregisterForcePrio(v12, (struct cocos2d::CCObject *)v1); /*0x5a492*/
      v9 = *(void (__fastcall ****)(_QWORD, __int64, __int64))(v1 + 560); /*0x5a498*/
      if ( !v9 ) /*0x5a4a2*/
        goto LABEL_9; /*0x5a4a2*/
      LOBYTE(v10) = 1; /*0x5a4a4*/
    }
    else
    {
      v7 = cocos2d::CCDirector::sharedDirector(v3); /*0x5a445*/
      v8 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 144LL))(v7); /*0x5a458*/
      cocos2d::CCTouchDispatcher::unregisterForcePrio(v8, (struct cocos2d::CCObject *)v1); /*0x5a460*/
      v9 = *(void (__fastcall ****)(_QWORD, __int64, __int64))(v1 + 560); /*0x5a466*/
      if ( !v9 ) /*0x5a470*/
        goto LABEL_9; /*0x5a470*/
      v10 = 0; /*0x5a472*/
    }
    (**v9)(v9, v1, v10); /*0x5a4ad*/
    goto LABEL_9; /*0x5a4ad*/
  }
  v4 = cocos2d::CCDirector::sharedDirector(v3); /*0x5a419*/
  v5 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 144LL))(v4); /*0x5a42c*/
  cocos2d::CCTouchDispatcher::unregisterForcePrio(v5, (struct cocos2d::CCObject *)v1); /*0x5a434*/
LABEL_9:
  LOBYTE(v6) = 1; /*0x5a4af*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 520LL))(v1, v6);
}

// [8/12] Address: 0x5a570
// Method: FLAlertLayer::ccTouchBegan
char __fastcall FLAlertLayer_ccTouchBegan(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v8; // rcx

  if ( *(_DWORD *)(a1 + 320) == -1 /*0x5a5a7*/
    && (v6 = *(_QWORD *)(a1 + 232)) != 0
    && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v6 + 320) + 8LL))(v6 + 320) )
  {
    *(_DWORD *)(a1 + 320) = *(_DWORD *)(a2 + 56); /*0x5a5b1*/
    return 1; /*0x5a5b7*/
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 304); /*0x5a5c9*/
    if ( v8 && *(_DWORD *)(a1 + 312) == -1 ) /*0x5a5dc*/
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v8 + 320) + 8LL))( /*0x5a5ee*/
             v8 + 320,
             a2,
             a3) )
      {
        *(_DWORD *)(a1 + 312) = *(_DWORD *)(a2 + 56); /*0x5a5f8*/
      }
    }
    return 1; /*0x5a603*/
  }
}

// [9/12] Address: 0x5a610
// Method: FLAlertLayer::ccTouchEnded
__int64 __fastcall FLAlertLayer_ccTouchEnded(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a2 + 56); /*0x5a616*/
  if ( *(_DWORD *)(a1 + 320) == (_DWORD)result ) /*0x5a622*/
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 232) + 320LL) + 24LL))(*(_QWORD *)(a1 + 232) + 320LL); /*0x5a635*/
    *(_DWORD *)(a1 + 320) = -1; /*0x5a638*/
  }
  else if ( *(_DWORD *)(a1 + 312) == (_DWORD)result ) /*0x5a64e*/
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 304) + 320LL) + 24LL))(*(_QWORD *)(a1 + 304) + 320LL); /*0x5a661*/
    *(_DWORD *)(a1 + 312) = -1; /*0x5a664*/
  }
  return result; /*0x5a642*/
}

// [10/12] Address: 0x5a680
// Method: FLAlertLayer::ccTouchCancelled
__int64 __fastcall FLAlertLayer_ccTouchCancelled(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a2 + 56); /*0x5a686*/
  if ( *(_DWORD *)(a1 + 320) == (_DWORD)result ) /*0x5a692*/
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 232) + 320LL) + 32LL))(*(_QWORD *)(a1 + 232) + 320LL); /*0x5a6a5*/
    *(_DWORD *)(a1 + 320) = -1; /*0x5a6a8*/
  }
  else if ( *(_DWORD *)(a1 + 312) == (_DWORD)result ) /*0x5a6be*/
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 304) + 320LL) + 32LL))(*(_QWORD *)(a1 + 304) + 320LL); /*0x5a6d1*/
    *(_DWORD *)(a1 + 312) = -1; /*0x5a6d4*/
  }
  return result; /*0x5a6b2*/
}

// [11/12] Address: 0x5a6f0
// Method: FLAlertLayer::ccTouchMoved
__int64 __fastcall FLAlertLayer_ccTouchMoved(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a2 + 56); /*0x5a6f0*/
  if ( *(_DWORD *)(a1 + 320) == (_DWORD)result ) /*0x5a6f9*/
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 232) + 320LL) + 16LL))(*(_QWORD *)(a1 + 232) + 320LL); /*0x5a70c*/
  if ( *(_DWORD *)(a1 + 312) == (_DWORD)result ) /*0x5a716*/
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 304) + 320LL) + 16LL))(*(_QWORD *)(a1 + 304) + 320LL); /*0x5a729*/
  return result; /*0x5a72d*/
}

// [12/12] Address: 0x5a730
// Method: FLAlertLayer::show
__int64 __fastcall FLAlertLayer_show(__int64 a1)
{
  unsigned __int8 v2; // al
  float v3; // xmm6_4
  struct cocos2d::CCActionInterval *v4; // rax
  struct cocos2d::CCAction *v5; // rax
  __int64 v6; // rcx
  cocos2d::CCScene *v7; // rdi
  int v8; // eax
  int v9; // r8d
  struct cocos2d::CCAction *v10; // rax
  __int64 v11; // rdx
  cocos2d::CCScene *v12; // rdi
  int v13; // eax
  int v14; // r8d

  if ( *(_BYTE *)(a1 + 596) ) /*0x5a73a*/
  {
    v12 = *(cocos2d::CCScene **)(cocos2d::CCDirector::sharedDirector(a1) + 272); /*0x5a897*/
    if ( *(_QWORD *)(a1 + 568) ) /*0x5a89e*/
    {
      v12 = *(cocos2d::CCScene **)(a1 + 568); /*0x5a8aa*/
    }
    else
    {
      if ( cocos2d::CCScene::getHighestChildZ(v12) + 1 >= 105 ) /*0x5a8bd*/
        v13 = cocos2d::CCScene::getHighestChildZ(v12) + 1; /*0x5a8cf*/
      else
        v13 = 105; /*0x5a8bf*/
      *(_DWORD *)(a1 + 592) = v13; /*0x5a8d1*/
    }
    if ( !*(_DWORD *)(a1 + 592) ) /*0x5a8d7*/
    {
      if ( (int)(sub_6C910(*(_QWORD *)(a1 + 568)) + 1) >= 105 ) /*0x5a8f4*/
        v14 = sub_6C910(*(_QWORD *)(a1 + 568)) + 1; /*0x5a90a*/
      else
        v14 = 105; /*0x5a8f6*/
      *(_DWORD *)(a1 + 592) = v14; /*0x5a90e*/
    }
    (*(void (__fastcall **)(cocos2d::CCScene *, __int64))(*(_QWORD *)v12 + 456LL))(v12, a1); /*0x5a91e*/
  }
  else
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 408) + 32LL))(a1 + 408); /*0x5a762*/
    v3 = (float)v2; /*0x5a77e*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 584) + 160LL))(*(_QWORD *)(a1 + 584)); /*0x5a781*/
    v4 = cocos2d::CCScaleTo::create(0.5, 1.0); /*0x5a797*/
    v5 = cocos2d::CCEaseElasticOut::create(v4, 0.60000002); /*0x5a7a8*/
    cocos2d::CCNode::runAction(*(cocos2d::CCNode **)(a1 + 584), v5); /*0x5a7b8*/
    v7 = *(cocos2d::CCScene **)(cocos2d::CCDirector::sharedDirector(v6) + 272); /*0x5a7c4*/
    if ( *(_QWORD *)(a1 + 568) ) /*0x5a7cb*/
    {
      v7 = *(cocos2d::CCScene **)(a1 + 568); /*0x5a7d7*/
    }
    else
    {
      if ( cocos2d::CCScene::getHighestChildZ(v7) + 1 >= 105 ) /*0x5a7ea*/
        v8 = cocos2d::CCScene::getHighestChildZ(v7) + 1; /*0x5a7fc*/
      else
        v8 = 105; /*0x5a7ec*/
      *(_DWORD *)(a1 + 592) = v8; /*0x5a7fe*/
    }
    if ( !*(_DWORD *)(a1 + 592) ) /*0x5a804*/
    {
      if ( (int)(sub_6C910(*(_QWORD *)(a1 + 568)) + 1) >= 105 ) /*0x5a821*/
        v9 = sub_6C910(*(_QWORD *)(a1 + 568)) + 1; /*0x5a837*/
      else
        v9 = 105; /*0x5a823*/
      *(_DWORD *)(a1 + 592) = v9; /*0x5a83b*/
    }
    (*(void (__fastcall **)(cocos2d::CCScene *, __int64))(*(_QWORD *)v7 + 456LL))(v7, a1); /*0x5a84b*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 408) + 40LL))(a1 + 408, 0); /*0x5a861*/
    v10 = cocos2d::CCFadeTo::create(0.14, (int)v3); /*0x5a870*/
    cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v10); /*0x5a87c*/
  }
  LOBYTE(v11) = 1; /*0x5a927*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 336LL))(a1, v11);
}
