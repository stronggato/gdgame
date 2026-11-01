#include <Geode/binding/EditorPauseLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/14] Address: 0x451a0
// Method: EditorPauseLayer::init
bool __fastcall EditorPauseLayer_init(cocos2d::CCLayerColor *a1)
{
  bool result; // al
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  cocos2d::CCTouchDispatcher *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // [rsp+38h] [rbp+10h] BYREF
  char v12; // [rsp+40h] [rbp+18h] BYREF

  v11 = 2097152000; /*0x451ab*/
  result = cocos2d::CCLayerColor::initWithColor(a1, (const struct cocos2d::_ccColor4B *)&v11); /*0x451b6*/
  if ( result ) /*0x451be*/
  {
    if ( !*((_BYTE *)a1 + 545) ) /*0x451c6*/
    {
      *((_BYTE *)a1 + 545) = 1; /*0x451cf*/
      v5 = cocos2d::CCDirector::sharedDirector(v4); /*0x451d6*/
      v6 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 144LL))(v5); /*0x451e9*/
      cocos2d::CCTouchDispatcher::registerForcePrio(v6, a1, 2, 0); /*0x451fa*/
    }
    LOBYTE(v3) = 1; /*0x45203*/
    (*(void (__fastcall **)(cocos2d::CCLayerColor *, __int64))(*(_QWORD *)a1 + 920LL))(a1, v3); /*0x45208*/
    LOBYTE(v7) = 1; /*0x45211*/
    (*(void (__fastcall **)(cocos2d::CCLayerColor *, __int64))(*(_QWORD *)a1 + 992LL))(a1, v7); /*0x45216*/
    LOBYTE(v8) = 1; /*0x4521f*/
    (*(void (__fastcall **)(cocos2d::CCLayerColor *, __int64))(*(_QWORD *)a1 + 1008LL))(a1, v8); /*0x45224*/
    v10 = cocos2d::CCDirector::sharedDirector(v9); /*0x4522a*/
    cocos2d::CCDirector::getWinSize(v10, &v12); /*0x45238*/
    (*(void (__fastcall **)(cocos2d::CCLayerColor *))(*(_QWORD *)a1 + 1056LL))(a1); /*0x45244*/
    *((_BYTE *)a1 + 544) = 1; /*0x4524c*/
    return 1; /*0x4524a*/
  }
  return result; /*0x451c0*/
}

// [2/14] Address: 0x17e6c0
// Method: EditorPauseLayer::~EditorPauseLayer
// Hidden C++ exception states: #wind=1
char *__fastcall EditorPauseLayer__dtor_EditorPauseLayer(char *Block, char a2)
{
  char *v4; // rdi
  __int64 v5; // rax
  void *v6; // rax

  *(_QWORD *)Block = &EditorPauseLayer::`vftable'; /*0x17e6db*/
  *((_QWORD *)Block + 40) = &EditorPauseLayer::`vftable'; /*0x17e6e5*/
  *((_QWORD *)Block + 41) = &EditorPauseLayer::`vftable'; /*0x17e6f3*/
  *((_QWORD *)Block + 42) = &EditorPauseLayer::`vftable'; /*0x17e701*/
  *((_QWORD *)Block + 43) = &EditorPauseLayer::`vftable'; /*0x17e70f*/
  *((_QWORD *)Block + 44) = &EditorPauseLayer::`vftable'; /*0x17e71d*/
  *((_QWORD *)Block + 51) = &EditorPauseLayer::`vftable'; /*0x17e72b*/
  *((_QWORD *)Block + 54) = &EditorPauseLayer::`vftable'; /*0x17e739*/
  *((_QWORD *)Block + 69) = &EditorPauseLayer::`vftable'; /*0x17e747*/
  v4 = Block + 560; /*0x17e74e*/
  *((_QWORD *)Block + 70) = &EditorPauseLayer::`vftable'; /*0x17e75c*/
  v5 = qword_905FD0; /*0x17e75f*/
  if ( !qword_905FD0 ) /*0x17e769*/
  {
    v6 = operator new(0x6E8u); /*0x17e770*/
    qword_905FD0 = sub_2723A0(v6); /*0x17e77d*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x17e78e*/
    v5 = qword_905FD0; /*0x17e790*/
  }
  if ( *(char **)(v5 + 984) == v4 ) /*0x17e79e*/
    *(_QWORD *)(v5 + 984) = 0; /*0x17e7a0*/
  CCBlockLayer__dtor_CCBlockLayer(Block); /*0x17e7ae*/
  if ( (a2 & 1) != 0 ) /*0x17e7b8*/
    j_j_free(Block); /*0x17e7c2*/
  return Block; /*0x17e7ca*/
}

// [3/14] Address: 0x17e7e0
// Method: EditorPauseLayer::volumeChanged
// Hidden C++ exception states: #wind=2
void __fastcall EditorPauseLayer_volumeChanged(__int64 a1)
{
  void *v2; // [rsp+30h] [rbp+8h]
  void *v3; // [rsp+30h] [rbp+8h]

  if ( *(_QWORD *)(a1 + 56) ) /*0x17e7e9*/
  {
    if ( !qword_905F60 ) /*0x17e7fa*/
    {
      v2 = operator new(0x8A8u); /*0x17e806*/
      qword_905F60 = sub_5AE20(v2); /*0x17e814*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x17e825*/
    }
    sub_83840(*(_QWORD *)(a1 + 56)); /*0x17e83a*/
  }
  if ( *(_QWORD *)(a1 + 64) ) /*0x17e83f*/
  {
    if ( !qword_905F60 ) /*0x17e850*/
    {
      v3 = operator new(0x8A8u); /*0x17e85c*/
      qword_905F60 = sub_5AE20(v3); /*0x17e86a*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x17e87b*/
    }
    sub_83840(*(_QWORD *)(a1 + 64)); /*0x17e895*/
  }
}

// [5/14] Address: 0x17ffb0
// Method: EditorPauseLayer::onSaveAndPlay
void __fastcall EditorPauseLayer_onSaveAndPlay(_BYTE *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rbx
  struct cocos2d::CCFiniteTimeAction *v6; // rax
  struct cocos2d::CCAction *v7; // rax

  if ( !a1[568] ) /*0x17ffb6*/
  {
    (*(void (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x17ffcc*/
    a1[568] = 1; /*0x17ffd2*/
    v4 = sub_466AC0(v3, v2); /*0x17ffd9*/
    PlayerObject_fadeOutStreak2(v4, 30.0); /*0x17ffe9*/
    if ( *((_QWORD *)a1 + 72) ) /*0x17ffee*/
      SecretLayer3_revealStep4(); /*0x17fffa*/
    v5 = cocos2d::CCCallFunc::create(a1, EditorPauseLayer_playStep2); /*0x180012*/
    v6 = cocos2d::CCDelayTime::create(0.0); /*0x180015*/
    v7 = cocos2d::CCSequence::create(v6, v5, 0); /*0x180024*/
    cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v7); /*0x180030*/
  }
}

// [6/14] Address: 0x180050
// Method: EditorPauseLayer::playStep2
// Hidden C++ exception states: #wind=3
struct cocos2d::CCAction *__fastcall EditorPauseLayer_playStep2(cocos2d::CCNode *a1)
{
  int v2; // ebx
  int v3; // r8d
  int v4; // r9d
  int v5; // ecx
  __int64 v6; // rbx
  struct cocos2d::CCFiniteTimeAction *v7; // rax
  struct cocos2d::CCAction *v8; // rax
  _BYTE v10[40]; // [rsp+50h] [rbp-28h] BYREF
  void *v11; // [rsp+80h] [rbp+8h]
  void *v12; // [rsp+88h] [rbp+10h]

  if ( !qword_905F60 ) /*0x180067*/
  {
    v11 = operator new(0x8A8u); /*0x180073*/
    qword_905F60 = sub_5AE20(v11); /*0x180084*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x180095*/
  }
  sub_61640(); /*0x18009e*/
  v2 = sub_261160(*(_QWORD *)(*((_QWORD *)a1 + 72) + 2168LL), v10); /*0x1800c8*/
  v5 = qword_905F60; /*0x1800cb*/
  if ( !qword_905F60 ) /*0x1800d5*/
  {
    v12 = operator new(0x8A8u); /*0x1800e1*/
    qword_905F60 = sub_5AE20(v12); /*0x1800f2*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x180103*/
    v5 = qword_905F60; /*0x180105*/
  }
  FMODAudioEngine_loadMusic(v5, v2, v3, v4, 1065353216, 1, 0, 0, 0); /*0x180134*/
  v6 = cocos2d::CCCallFunc::create(a1, EditorPauseLayer_playStep3); /*0x180149*/
  v7 = cocos2d::CCDelayTime::create(0.0); /*0x18014f*/
  v8 = cocos2d::CCSequence::create(v7, v6, 0); /*0x18015e*/
  return cocos2d::CCNode::runAction(a1, v8); /*0x18016a*/
}

// [7/14] Address: 0x180180
// Method: EditorPauseLayer::playStep3
void __fastcall EditorPauseLayer_playStep3(__int64 a1)
{
  __int64 v2; // rax
  cocos2d::CCTouchDispatcher *v3; // rax
  cocos2d::CCObject *v4; // rax
  __int64 v5; // rdi
  cocos2d::CCObject *v6; // rbx
  cocos2d::CCObject *v7; // rcx

  if ( *(_BYTE *)(a1 + 545) ) /*0x18018a*/
  {
    *(_BYTE *)(a1 + 545) = 0; /*0x180196*/
    v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x18019d*/
    v3 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2); /*0x1801a9*/
    cocos2d::CCTouchDispatcher::unregisterForcePrio(v3, (struct cocos2d::CCObject *)a1); /*0x1801b5*/
  }
  v4 = (cocos2d::CCObject *)GJGameLoadingLayer_transitionToLoadingLayer(*(_QWORD *)(*(_QWORD *)(a1 + 576) + 2168LL), 0); /*0x1801cb*/
  v5 = *(_QWORD *)(a1 + 576); /*0x1801d0*/
  v6 = v4; /*0x1801d7*/
  if ( *(cocos2d::CCObject **)(v5 + 14504) != v4 ) /*0x1801e1*/
  {
    if ( v4 ) /*0x1801e6*/
      cocos2d::CCObject::retain(v4); /*0x1801eb*/
    v7 = *(cocos2d::CCObject **)(v5 + 14504); /*0x1801f1*/
    if ( v7 ) /*0x1801fb*/
      cocos2d::CCObject::release(v7); /*0x1801fd*/
    *(_QWORD *)(v5 + 14504) = v6; /*0x180203*/
  }
}

// [8/14] Address: 0x180550
// Method: EditorPauseLayer::onSaveAndExit
void __fastcall EditorPauseLayer_onSaveAndExit(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax

  if ( !*(_BYTE *)(a1 + 568) ) /*0x180556*/
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x180567*/
    *(_BYTE *)(a1 + 568) = 1; /*0x18056d*/
    v4 = sub_466AC0(v3, v2); /*0x180574*/
    PlayerObject_fadeOutStreak2(v4, 30.0); /*0x180584*/
    if ( *(_QWORD *)(a1 + 576) ) /*0x180589*/
      SecretLayer3_revealStep4(); /*0x180595*/
    sub_1805B0(a1); /*0x1805a2*/
  }
}

// [9/14] Address: 0x1806a0
// Method: EditorPauseLayer::onExitNoSave
// Hidden C++ exception states: #wind=1
void __fastcall EditorPauseLayer_onExitNoSave(__int64 a1)
{
  int v1; // ebx
  int v2; // eax
  __int64 v3; // rbx
  __int128 v4; // [rsp+50h] [rbp-48h] BYREF
  __int64 v5; // [rsp+60h] [rbp-38h]
  __int64 v6; // [rsp+68h] [rbp-30h]
  _BYTE v7[40]; // [rsp+70h] [rbp-28h] BYREF

  if ( !*(_BYTE *)(a1 + 568) ) /*0x1806a9*/
  {
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 576) + 2168LL) + 1220LL) == 2 ) /*0x1806cb*/
    {
      v1 = a1 + 552; /*0x1806da*/
      if ( !a1 ) /*0x1806e6*/
        v1 = 0; /*0x1806e6*/
      v4 = 0; /*0x1806ed*/
      *(_QWORD *)&v4 = sub_3C460(80); /*0x180709*/
      v5 = 70; /*0x18070e*/
      v6 = 79; /*0x180717*/
      strcpy((char *)v4, "<cy>Exit</c> without saving? All unsaved changes will be <cr>lost</c>!"); /*0x180727*/
      v2 = sub_3E4F0(v7, &v4); /*0x18077a*/
      v3 = FLAlertLayer_create_0( /*0x1807ce*/
             v1,
             (unsigned int)"Exit",
             v2,
             (unsigned int)&unk_734D08,
             (__int64)"YES",
             1133903872,
             0,
             0,
             1065353216);
      sub_3C310(&v4); /*0x1807d6*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 64LL))(v3, 1); /*0x1807ea*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 1064LL))(v3); /*0x1807fa*/
    }
    else
    {
      sub_1805B0(a1); /*0x1806d5*/
    }
  }
}

// [10/14] Address: 0x180810
// Method: EditorPauseLayer::FLAlert_Clicked
// Hidden C++ exception states: #wind=1
__int64 __fastcall EditorPauseLayer_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  void *v13; // [rsp+38h] [rbp+10h]

  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 1 && a3 ) /*0x18083a*/
    return sub_1805B0(a1 - 552); /*0x180852*/
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 3 && a3 ) /*0x180868*/
  {
    v9 = sub_466AC0(v8, v7); /*0x18086a*/
    result = PlayerObject_fadeOutStreak2(v9, 30.0); /*0x18087a*/
    if ( *(_QWORD *)(a1 + 24) ) /*0x18087f*/
      return SecretLayer3_revealStep4(); /*0x18089b*/
  }
  else
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x1808a6*/
    if ( (_DWORD)result == 4 && a3 ) /*0x1808b1*/
    {
      v11 = qword_905FD0; /*0x1808b3*/
      if ( !qword_905FD0 ) /*0x1808bd*/
      {
        v13 = operator new(0x6E8u); /*0x1808c9*/
        qword_905FD0 = sub_2723A0(v13); /*0x1808d7*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1808e8*/
        v11 = qword_905FD0; /*0x1808ea*/
      }
      *(_BYTE *)(v11 + 963) = 1; /*0x1808f1*/
      v12 = cocos2d::CCApplication::sharedApplication(v10); /*0x1808f8*/
      return (*(__int64 (__fastcall **)(__int64, const char *))(*(_QWORD *)v12 + 96LL))( /*0x18090f*/
               v12,
               "https://www.boomlings.com/GDEditor");
    }
  }
  return result; /*0x180843*/
}

// [11/14] Address: 0x180e10
// Method: EditorPauseLayer::keyBackClicked
__int64 __fastcall EditorPauseLayer_keyBackClicked(__int64 a1)
{
  return sub_17FF00(a1 - 336, 0);
}

// [12/14] Address: 0x180e20
// Method: EditorPauseLayer::keyDown
__int64 __fastcall EditorPauseLayer_keyDown(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 == 1009 || a2 == 27 ) /*0x180e2b*/
    return (**(__int64 (__fastcall ***)(__int64))(a1 - 8))(a1 - 8); /*0x180e35*/
  return result; /*0x180e38*/
}

// [14/14] Address: 0x3fd150
// Method: EditorPauseLayer::togglePreviewAnim
// Hidden C++ exception states: #wind=1
unsigned int __fastcall EditorPauseLayer_togglePreviewAnim(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int result; // eax
  unsigned int v4; // esi
  struct cocos2d::CCObject *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  void *v8; // [rsp+40h] [rbp+8h]

  v2 = qword_905FD0; /*0x3fd16c*/
  if ( !qword_905FD0 ) /*0x3fd176*/
  {
    v8 = operator new(0x6E8u); /*0x3fd182*/
    qword_905FD0 = sub_2723A0(v8); /*0x3fd190*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3fd1a1*/
    v2 = qword_905FD0; /*0x3fd1a3*/
  }
  result = GameManager_getGameVariable(v2, "0118"); /*0x3fd1b1*/
  if ( *(_BYTE *)(a1 + 14732) != (_BYTE)result ) /*0x3fd1bc*/
  {
    *(_BYTE *)(a1 + 14732) = result; /*0x3fd1c2*/
    v4 = 0; /*0x3fd1ca*/
    result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 3600)); /*0x3fd1d3*/
    if ( result ) /*0x3fd1db*/
    {
      do /*0x3fd2a7*/
      {
        v5 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 3600), v4); /*0x3fd1f9*/
        v6 = (__int64)v5; /*0x3fd1ff*/
        if ( *((_DWORD *)v5 + 314) == 2 ) /*0x3fd209*/
          sub_640820(v5); /*0x3fd20e*/
        if ( !*(_BYTE *)(a1 + 14732) ) /*0x3fd213*/
        {
          if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 1576LL))(v6) ) /*0x3fd229*/
          {
            *(_DWORD *)(v6 + 1380) = 0; /*0x3fd22f*/
            *(float *)(v6 + 1372) = (float)-(*(_BYTE *)(v6 + 1384) != 0); /*0x3fd247*/
            *(_DWORD *)(v6 + 1444) = 0; /*0x3fd24f*/
            (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v6 + 1696LL))(v6, v7, 0xFFFFFFFFLL); /*0x3fd26c*/
          }
          if ( !*(_BYTE *)(a1 + 14732) ) /*0x3fd272*/
          {
            if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 1584LL))(v6) ) /*0x3fd281*/
              EnhancedGameObject_updateRotateAction(v6, 0.0); /*0x3fd291*/
          }
        }
        ++v4; /*0x3fd296*/
        result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 3600)); /*0x3fd29f*/
      }
      while ( v4 < result ); /*0x3fd2a7*/
    }
  }
  return result; /*0x3fd2ad*/
}
