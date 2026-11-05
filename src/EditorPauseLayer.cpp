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

// Address: 0x17ef70
// Method: EditorPauseLayer::customSetup
// Hidden C++ exception states: #wind=3
__int64 __fastcall EditorPauseLayer_customSetup(__int64 *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  cocos2d::CCMenu *v9; // rbx
  int v10; // eax
  cocos2d::CCObject *v11; // rax
  cocos2d::CCObject *v12; // rdi
  cocos2d::CCObject *v13; // r14
  cocos2d::CCObject *v14; // r15
  cocos2d::CCObject *v15; // r12
  cocos2d::CCObject *v16; // r13
  int v17; // eax
  cocos2d::CCObject *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rcx
  cocos2d::CCDirector *v26; // rax
  float v27; // xmm0_4
  __int64 v28; // rax
  __int64 v29; // rcx
  cocos2d::CCDirector *v30; // rax
  float v31; // xmm9_4
  __int64 v32; // rcx
  cocos2d::CCDirector *v33; // rax
  float v34; // xmm10_4
  __int64 v35; // rcx
  cocos2d::CCDirector *v36; // rax
  __int64 v37; // rcx
  char v38; // al
  int v39; // r15d
  const char **v40; // r14
  __int64 v41; // rax
  _QWORD *v42; // r13
  __int64 v43; // rbx
  __int64 v44; // rax
  const struct cocos2d::CCSize *v45; // rax
  cocos2d::CCLabelBMFont *v46; // r12
  float *v47; // rbx
  float v48; // xmm6_4
  double v49; // xmm0_8
  float v50; // xmm7_4
  float v51; // xmm6_4
  float v52; // xmm7_4
  __int64 v53; // rbx
  float v54; // xmm6_4
  __int64 v55; // rax
  cocos2d::CCObject *v56; // r12
  __int64 v57; // rbx
  __int64 v58; // rax
  cocos2d::CCObject *v59; // r12
  __int64 v60; // rbx
  __int64 v61; // rax
  __int64 v62; // rax
  float v63; // xmm9_4
  cocos2d::CCDirector *v64; // rax
  float v65; // xmm7_4
  __int64 v66; // rcx
  int v67; // r15d
  __int64 (__fastcall **v68)(__int64, __int64); // r14
  __int64 v69; // r12
  float v70; // xmm6_4
  struct cocos2d::CCLabelBMFont *v71; // rdi
  __int64 v72; // rbx
  __int64 v73; // rax
  __int64 v74; // rbx
  __int64 v75; // rax
  int v76; // r8d
  __int64 v77; // rdi
  __int64 v78; // rdx
  __int64 v79; // rbx
  __int64 v80; // rax
  __int64 v81; // rax
  cocos2d::CCNode *v82; // rdi
  __int64 v83; // rbx
  float v84; // xmm6_4
  __int64 v85; // rcx
  cocos2d::CCDirector *v86; // rax
  float v87; // xmm0_4
  __int64 v88; // rax
  _WORD v90[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v91; // [rsp+44h] [rbp-BCh]
  __int16 v92; // [rsp+46h] [rbp-BAh]
  float v93; // [rsp+50h] [rbp-B0h] BYREF
  float v94; // [rsp+54h] [rbp-ACh]
  cocos2d::CCObject *v95; // [rsp+58h] [rbp-A8h]
  void *v96; // [rsp+60h] [rbp-A0h] BYREF
  int v97; // [rsp+68h] [rbp-98h]
  float v98[2]; // [rsp+70h] [rbp-90h] BYREF
  float v99[4]; // [rsp+78h] [rbp-88h] BYREF
  cocos2d::CCLabelBMFont *v100; // [rsp+88h] [rbp-78h] BYREF
  char v101[8]; // [rsp+90h] [rbp-70h] BYREF
  char v102[8]; // [rsp+98h] [rbp-68h] BYREF
  const char *v103; // [rsp+A0h] [rbp-60h]
  __int64 (__fastcall *v104)(__int64, __int64); // [rsp+A8h] [rbp-58h] BYREF
  int v105; // [rsp+B0h] [rbp-50h]
  __int64 *v106; // [rsp+B8h] [rbp-48h]
  const char *v107; // [rsp+C0h] [rbp-40h]
  void (__fastcall *v108)(__int64, __int64); // [rsp+C8h] [rbp-38h]
  int v109; // [rsp+D0h] [rbp-30h]
  __int64 *v110; // [rsp+D8h] [rbp-28h]
  const char *v111; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v112)(); // [rsp+E8h] [rbp-18h]
  int v113; // [rsp+F0h] [rbp-10h]
  __int64 *v114; // [rsp+F8h] [rbp-8h]
  char v115[8]; // [rsp+100h] [rbp+0h] BYREF
  char v116[8]; // [rsp+108h] [rbp+8h] BYREF
  char v117[8]; // [rsp+110h] [rbp+10h] BYREF
  char v118[24]; // [rsp+118h] [rbp+18h] BYREF
  const char *v119; // [rsp+130h] [rbp+30h]
  const char *v120; // [rsp+138h] [rbp+38h] BYREF
  char v121[8]; // [rsp+140h] [rbp+40h] BYREF
  int v122; // [rsp+148h] [rbp+48h]
  __int64 (__fastcall *v123)(); // [rsp+150h] [rbp+50h]
  const char *v124; // [rsp+158h] [rbp+58h]
  const char *v125; // [rsp+160h] [rbp+60h]
  char v126[8]; // [rsp+168h] [rbp+68h] BYREF
  int v127; // [rsp+170h] [rbp+70h]
  __int64 (__fastcall *v128)(); // [rsp+178h] [rbp+78h]
  const char *v129; // [rsp+180h] [rbp+80h]
  const char *v130; // [rsp+188h] [rbp+88h]
  char v131[8]; // [rsp+190h] [rbp+90h] BYREF
  int v132; // [rsp+198h] [rbp+98h]
  __int64 (__fastcall *v133)(); // [rsp+1A0h] [rbp+A0h]
  const char *v134; // [rsp+1A8h] [rbp+A8h]
  const char *v135; // [rsp+1B0h] [rbp+B0h]
  char v136[8]; // [rsp+1B8h] [rbp+B8h] BYREF
  int v137; // [rsp+1C0h] [rbp+C0h]
  __int64 (__fastcall *v138)(); // [rsp+1C8h] [rbp+C8h]
  __int64 *v139; // [rsp+1D0h] [rbp+D0h]
  const char *v140; // [rsp+1D8h] [rbp+D8h]
  char v141[8]; // [rsp+1E0h] [rbp+E0h] BYREF
  int v142; // [rsp+1E8h] [rbp+E8h]
  __int64 (__fastcall *v143)(); // [rsp+1F0h] [rbp+F0h]
  const char *v144; // [rsp+1F8h] [rbp+F8h]
  const char *v145; // [rsp+200h] [rbp+100h]
  char v146[8]; // [rsp+208h] [rbp+108h] BYREF
  int v147; // [rsp+210h] [rbp+110h]
  double (__fastcall *v148)(__int64); // [rsp+218h] [rbp+118h]
  const char *v149; // [rsp+220h] [rbp+120h]
  const char *v150; // [rsp+228h] [rbp+128h]
  char v151[8]; // [rsp+230h] [rbp+130h] BYREF
  int v152; // [rsp+238h] [rbp+138h]
  __int64 (__fastcall *v153)(); // [rsp+240h] [rbp+140h]
  const char *v154; // [rsp+248h] [rbp+148h]
  const char *v155; // [rsp+250h] [rbp+150h]
  char v156[8]; // [rsp+258h] [rbp+158h] BYREF
  int v157; // [rsp+260h] [rbp+160h]
  __int64 (__fastcall *v158)(); // [rsp+268h] [rbp+168h]

  LOBYTE(a2) = -81;
  (*(void (__fastcall **)(__int64 *, __int64))(a1[51] + 40))(a1 + 51, a2);
  v4 = cocos2d::CCDirector::sharedDirector(v3);
  cocos2d::CCDirector::getWinSize(v4, v98);
  v9 = (cocos2d::CCMenu *)cocos2d::CCMenu::create(v6, v5, v7, v8);
  (*(void (__fastcall **)(__int64 *, cocos2d::CCMenu *))(*a1 + 464))(a1, v9);
  v10 = (unsigned int)ButtonSprite_create(
                        (int)"Resume",
                        180,
                        0,
                        0.80000001,
                        1,
                        (__int64)"goldFont.fnt",
                        (__int64)"GJ_button_01.png",
                        1105199104);
  v11 = CCMenuItemSpriteExtra_create(v10, 0, (int)a1, (__int64)sub_17FF00);
  (*(void (__fastcall **)(cocos2d::CCMenu *, cocos2d::CCObject *))(*(_QWORD *)v9 + 464LL))(v9, v11);
  v12 = ButtonSprite_create(
          (int)"Save and Play",
          180,
          0,
          0.80000001,
          1,
          (__int64)"goldFont.fnt",
          (__int64)"GJ_button_01.png",
          1105199104);
  v13 = CCMenuItemSpriteExtra_create((int)v12, 0, (int)a1, (__int64)EditorPauseLayer_onSaveAndPlay);
  (*(void (__fastcall **)(cocos2d::CCMenu *, cocos2d::CCObject *))(*(_QWORD *)v9 + 464LL))(v9, v13);
  v14 = ButtonSprite_create(
          (int)"Save and Exit",
          180,
          0,
          0.80000001,
          1,
          (__int64)"goldFont.fnt",
          (__int64)"GJ_button_01.png",
          1105199104);
  v15 = CCMenuItemSpriteExtra_create((int)v14, 0, (int)a1, (__int64)EditorPauseLayer_onSaveAndExit);
  (*(void (__fastcall **)(cocos2d::CCMenu *, cocos2d::CCObject *))(*(_QWORD *)v9 + 464LL))(v9, v15);
  v16 = ButtonSprite_create(
          (int)"Save",
          180,
          0,
          0.80000001,
          1,
          (__int64)"goldFont.fnt",
          (__int64)"GJ_button_01.png",
          1105199104);
  v95 = CCMenuItemSpriteExtra_create((int)v16, 0, (int)a1, (__int64)LevelListLayer_confirmClone);
  (*(void (__fastcall **)(cocos2d::CCMenu *, cocos2d::CCObject *))(*(_QWORD *)v9 + 464LL))(v9, v95);
  v17 = (unsigned int)ButtonSprite_create(
                        (int)"Exit",
                        180,
                        0,
                        0.80000001,
                        1,
                        (__int64)"goldFont.fnt",
                        (__int64)"GJ_button_01.png",
                        1105199104);
  v18 = CCMenuItemSpriteExtra_create(v17, 0, (int)a1, (__int64)EditorPauseLayer_onExitNoSave);
  (*(void (__fastcall **)(cocos2d::CCMenu *, cocos2d::CCObject *))(*(_QWORD *)v9 + 464LL))(v9, v18);
  cocos2d::CCMenu::alignItemsVerticallyWithPadding(v9, 14.0);
  v22 = *(_QWORD *)(a1[72] + 2168);
  v97 = *(_DWORD *)(v22 + 1220);
  if ( v97 != 2 )
  {
    memset(v90, 75, 3);
    (**(void (__fastcall ***)(__int64, _WORD *))(*((_QWORD *)v12 + 82) + 320LL))(*((_QWORD *)v12 + 82) + 320LL, v90);
    (**(void (__fastcall ***)(__int64, _WORD *))(*((_QWORD *)v12 + 79) + 368LL))(*((_QWORD *)v12 + 79) + 368LL, v90);
    (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)v13 + 936LL))(v13, 0);
    (**(void (__fastcall ***)(__int64, _WORD *))(*((_QWORD *)v14 + 82) + 320LL))(*((_QWORD *)v14 + 82) + 320LL, v90);
    (**(void (__fastcall ***)(__int64, _WORD *))(*((_QWORD *)v14 + 79) + 368LL))(*((_QWORD *)v14 + 79) + 368LL, v90);
    (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)v15 + 936LL))(v15, 0);
    (**(void (__fastcall ***)(__int64, _WORD *))(*((_QWORD *)v16 + 82) + 320LL))(*((_QWORD *)v16 + 82) + 320LL, v90);
    (**(void (__fastcall ***)(__int64, _WORD *))(*((_QWORD *)v16 + 79) + 368LL))(*((_QWORD *)v16 + 79) + 368LL, v90);
    (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)v95 + 936LL))(v95, 0);
  }
  v23 = cocos2d::CCMenu::create(v22, v19, v20, v21);
  (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 464))(a1, v23);
  v24 = *(_QWORD *)v23;
  v26 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v25);
  v27 = cocos2d::CCDirector::getScreenBottom(v26) + 28.0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v100, v98[0] * 0.5, v27);
  (*(void (__fastcall **)(__int64, __int64))(v24 + 184))(v23, v28);
  v30 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v29);
  v31 = (float)(cocos2d::CCDirector::getScreenRight(v30) - 50.0) - 0.0;
  v33 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v32);
  v34 = cocos2d::CCDirector::getScreenTop(v33) - 20.0;
  v36 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v35);
  cocos2d::CCDirector::getScreenLeft(v36);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v115, 8.0, 0.0);
  v119 = "Settings";
  v120 = "GJ_sSettingsIcon_001.png";
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v121, -0.75, 1.0);
  v122 = 1065353216;
  v123 = sub_17FCE0;
  v124 = "Export";
  v125 = "GJ_sExportIcon_001.png";
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v126, -1.0, 1.0);
  v127 = 1065353216;
  v128 = sub_180350;
  v129 = "Editor SFX";
  v130 = "GJ_sSFXIcon_001.png";
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v131, -0.5, 0.5);
  v132 = 1064514355;
  v133 = sub_180BF0;
  v134 = "Auto-Save";
  v135 = "GJ_sSaveIcon_001.png";
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v136, -1.0, 0.5);
  v137 = 1064514355;
  v138 = sub_180BD0;
  v139 = &qword_72BBF8;
  v140 = "GJ_sMarkerIcon_001.png";
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v141, -0.5, 0.5);
  v142 = 1064514355;
  v143 = sub_180A70;
  v144 = "Get Audio";
  v145 = "GJ_sAudioDLIcon_001.png";
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v146, -0.5, 0.5);
  v147 = 1064514355;
  v148 = GJPathsLayer_onPath;
  v149 = "Help";
  v150 = "GJ_sHelpIcon_001.png";
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v151, -0.5, 0.5);
  v152 = 1065353216;
  v153 = sub_180930;
  v154 = "Controls";
  v155 = "controllerBtn_DPad_None_001.png";
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v156, -0.5, 0.5);
  v157 = 1057803469;
  v158 = sub_17FED0;
  v37 = *(_QWORD *)(a1[72] + 3592);
  v38 = *(_BYTE *)(v37 + 341);
  v91 = v38;
  v39 = 0;
  v40 = &v120;
  do
  {
    if ( v38 || v40[3] != (char *)sub_17FED0 )
    {
      cocos2d::CCRect::CCRect((cocos2d::CCRect *)v118, 0.0, 0.0, 40.0, 40.0);
      v42 = (_QWORD *)cocos2d::extension::CCScale9Sprite::create("GJ_button_05.png", v41);
      v43 = *v42;
      cocos2d::CCSize::CCSize((cocos2d::CCSize *)v116, 82.0, 26.0);
      (*(void (__fastcall **)(_QWORD *, __int64))(v43 + 312))(v42, v44);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v99, -1.0, 1.0);
      v45 = (const struct cocos2d::CCSize *)(*(__int64 (__fastcall **)(_QWORD *))(*v42 + 320LL))(v42);
      cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v93, v45);
      v46 = cocos2d::CCLabelBMFont::create(*(v40 - 1), (const char *)&qword_6FFF68);
      v100 = v46;
      (*(void (__fastcall **)(_QWORD *, cocos2d::CCLabelBMFont *, __int64))(*v42 + 456LL))(v42, v46, 1);
      cocos2d::CCLabelBMFont::limitLabelWidth(v46, 50.0, 0.44999999, 0.0);
      v47 = (float *)cocos2d::CCSprite::createWithSpriteFrameName(*v40);
      v95 = (cocos2d::CCObject *)v47;
      (*(void (__fastcall **)(_QWORD *, float *, __int64))(*v42 + 456LL))(v42, v47, 1);
      (*(void (__fastcall **)(float *))(*(_QWORD *)v47 + 160LL))(v47);
      v48 = v47[108];
      v49 = (*(double (__fastcall **)(float *))(*(_QWORD *)v47 + 168LL))(v47);
      v50 = *(float *)&v49 * v48;
      v51 = *(float *)(*(__int64 (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v46 + 320LL))(v46);
      *(float *)&v49 = (float)((*(float (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v46 + 168LL))(v46) * v51)
                     + 5.0;
      v52 = v50 * 0.5;
      v53 = *(_QWORD *)v46;
      v54 = (float)((float)(v52 + *(float *)&v49) + 8.0) * 0.5;
      cocos2d::CCPoint::CCPoint(
        (cocos2d::CCPoint *)v117,
        (float)((float)((float)(v93 * 0.5) - v54) + (float)(*(float *)&v49 * 0.5)) + v99[0],
        (float)(v94 * 0.5) + v99[1]);
      (*(void (__fastcall **)(cocos2d::CCLabelBMFont *, __int64))(v53 + 184))(v46, v55);
      v56 = v95;
      v57 = *(_QWORD *)v95;
      cocos2d::CCPoint::CCPoint(
        (cocos2d::CCPoint *)v101,
        (float)((float)((float)(v93 * 0.5) + v54) - v52) + *((float *)v40 + 2),
        (float)(v94 * 0.5) + *((float *)v40 + 3));
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v57 + 184))(v56, v58);
      v59 = CCMenuItemSpriteExtra_create((int)v42, 0, (int)a1, (__int64)v40[3]);
      (*(void (__fastcall **)(__int64, cocos2d::CCObject *))(*(_QWORD *)v23 + 464LL))(v23, v59);
      v60 = *(_QWORD *)v59;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v102, v31, v34 - (float)((float)v39 * 32.0));
      cocos2d::CCNode::convertToNodeSpace(v23, &v96, v61);
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v60 + 184))(v59, v62);
      if ( v97 != 2 && v40[3] == (char *)sub_180350 )
      {
        v92 = 19275;
        memset(v90, 75, 3);
        (*(void (__fastcall **)(_QWORD *, _WORD *))v42[40])(v42 + 40, v90);
        (**((void (__fastcall ***)(__int64, _WORD *))v100 + 46))((__int64)v100 + 368, v90);
        (**((void (__fastcall ***)(__int64, _WORD *))v95 + 40))((__int64)v95 + 320, v90);
        (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)v59 + 936LL))(v59, 0);
      }
      v38 = v91;
    }
    ++v39;
    v40 += 5;
  }
  while ( v39 < 8 );
  v63 = v98[0] * 0.5;
  v64 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v37);
  v65 = cocos2d::CCDirector::getScreenBottom(v64) + 22.0;
  v103 = "Music";
  v104 = PauseLayer_musicSliderChanged;
  v66 = qword_905F60;
  if ( !qword_905F60 )
  {
    v96 = operator new(0x8A8u);
    qword_905F60 = sub_5AE20(v96);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60);
    v66 = qword_905F60;
  }
  v105 = *(_DWORD *)(v66 + 512);
  v106 = a1 + 77;
  v107 = "SFX";
  v108 = PauseLayer_sfxSliderChanged;
  v109 = *(_DWORD *)(v66 + 516);
  v110 = a1 + 78;
  v111 = "Editor SFX";
  v112 = sub_17FE60;
  v113 = *(_DWORD *)(sub_182B60(v66) + 264);
  v114 = a1 + 79;
  v67 = -1;
  v68 = &v104;
  v69 = 3;
  do
  {
    v70 = (float)((float)v67 * 160.0) + v63;
    v71 = cocos2d::CCLabelBMFont::create((const char *)*(v68 - 1), (const char *)&qword_6FFF68);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v71 + 160LL))(v71);
    v72 = *(_QWORD *)v71;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v96, 0.5, 0.5);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v72 + 288))(v71, v73);
    v74 = *(_QWORD *)v71;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v102, v70, v65 + 20.0);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v74 + 184))(v71, v75);
    (*(void (__fastcall **)(__int64 *, struct cocos2d::CCLabelBMFont *, __int64))(*a1 + 456))(a1, v71, 1);
    v77 = sub_83590(
            (_DWORD)a1,
            (unsigned int)*v68,
            v76,
            (unsigned int)"slidergroove.png",
            (__int64)"sliderthumb.png",
            (__int64)"sliderthumbsel.png",
            1057803469);
    LOBYTE(v78) = 1;
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v77 + 416) + 336LL))(*(_QWORD *)(v77 + 416), v78);
    v79 = *(_QWORD *)v77;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v101, v70, v65);
    (*(void (__fastcall **)(__int64, __int64))(v79 + 184))(v77, v80);
    sub_83840(v77);
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 456))(a1, v77, 1);
    *(_QWORD *)v68[2] = v77;
    ++v67;
    v68 += 4;
    --v69;
  }
  while ( v69 );
  v81 = qword_905FD0;
  if ( !qword_905FD0 )
  {
    v96 = operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v96);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
    v81 = qword_905FD0;
  }
  *(_QWORD *)(v81 + 984) = a1 + 70;
  v82 = GJUINode_create(a1[72]);
  (*(void (__fastcall **)(__int64 *, cocos2d::CCNode *, __int64))(*a1 + 456))(a1, v82, 1);
  v83 = *(_QWORD *)v82;
  v84 = (float)(v98[1] * 0.5) + 14.0;
  v86 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v85);
  v87 = (float)(cocos2d::CCDirector::getScreenLeft(v86) + 40.0) + 0.0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v96, v87, v84);
  return (*(__int64 (__fastcall **)(cocos2d::CCNode *, __int64))(v83 + 184))(v82, v88);
}

// Address: 0x2fd070
// Method: EditorPauseLayer::saveLevel
// Hidden C++ exception states: #wind=3
void __fastcall EditorPauseLayer_saveLevel(__int64 a1)
{
  struct cocos2d::CCObject *v2; // r12
  __int64 v3; // rcx
  __int64 v4; // rax
  void *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  cocos2d::CCParticleSystem *v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 (__fastcall *v12)(struct cocos2d::CCObject *); // rdi
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rdi
  _BYTE *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rcx
  __int64 v23; // rbx
  char *v24; // rsi
  void *v25; // rcx
  cocos2d::CCParticleSystem *v26; // r14
  __int64 v27; // rsi
  __int64 (__fastcall *v28)(struct cocos2d::CCObject *); // rdi
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rax
  int v35; // ecx
  int v36; // ecx
  void *v37; // rcx
  __int16 v38; // [rsp+30h] [rbp-D0h]
  __int16 v39; // [rsp+30h] [rbp-D0h]
  __int16 v40; // [rsp+30h] [rbp-D0h]
  __int16 v41; // [rsp+30h] [rbp-D0h]
  _BYTE v42[8]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v43[8]; // [rsp+48h] [rbp-B8h] BYREF
  void *v44; // [rsp+50h] [rbp-B0h] BYREF
  float v45; // [rsp+58h] [rbp-A8h]
  int v46; // [rsp+5Ch] [rbp-A4h]
  void *Block[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v48; // [rsp+70h] [rbp-90h]
  unsigned __int64 v49; // [rsp+78h] [rbp-88h]
  float v50[3]; // [rsp+80h] [rbp-80h] BYREF
  int v51; // [rsp+8Ch] [rbp-74h]
  float v52[4]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v53[66]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v54[40]; // [rsp+1A8h] [rbp+A8h] BYREF

  v2 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 496), *(int *)(a1 + 508));
  v4 = cocos2d::CCDirector::sharedDirector(v3);
  cocos2d::CCDirector::getWinSize(v4, v43);
  *(_OWORD *)Block = 0;
  v48 = 0;
  v49 = 0;
  v5 = (void *)sub_3C460(208);
  Block[0] = v5;
  v48 = 194;
  v49 = 207;
  strcpy(
    (char *)v5,
    "100a0a0.88a0.21a-1a90a180a5a5a48a82a0a0a0a0a0a0a7a2a0a360a0.411765a1a1a1a0a1a1a0a3a2a0a60a0a0a0.737255a0a0.160784a0a"
    "1a0a0.16a0.1a0.51a0.12a0a0a0a0a0a0a0a2a1a1a0a0a166a0a0a0a0a0a0a0a0a1a1a0a0a0a0");
  if ( v48 )
  {
    sub_6AE20(v53, v5, v6, v7);
    KeyframeObject_setupSpline((__int64 *)Block, (__int64)v53);
    v8 = GameToolbox_particleFromStruct(v53, 0, 0);
    sub_3C310(v54);
  }
  else
  {
    v8 = 0;
  }
  LOBYTE(v5) = 1;
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *, void *))(*(_QWORD *)v8 + 1544LL))(v8, v5);
  (*(void (__fastcall **)(__int64, cocos2d::CCParticleSystem *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v8, 15);
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *))(*(_QWORD *)v8 + 160LL))(v8);
  v9 = *(_QWORD *)v8;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v42, 30.0, 70.0);
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __int64))(v9 + 952))(v8, v10);
  cocos2d::CCParticleSystem::resetSystem(v8);
  v11 = *(_QWORD *)v8;
  v12 = *(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v2 + 504LL);
  v13 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v2 + 200LL))(v2);
  v14 = v12(v2);
  cocos2d::CCNode::convertToWorldSpace(v14, v42, v13);
  cocos2d::CCNode::convertToNodeSpace(a1, &v44, v15);
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __int64))(v11 + 184))(v8, v16);
  v38 = *((_WORD *)v2 + 168);
  *(float *)&v44 = (float)(unsigned __int8)v38 / 255.0;
  *((float *)&v44 + 1) = (float)HIBYTE(v38) / 255.0;
  v45 = (float)*((unsigned __int8 *)v2 + 338) / 255.0;
  v46 = 1065353216;
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *, void **))(*(_QWORD *)v8 + 1352LL))(v8, &v44);
  v39 = *((_WORD *)v2 + 168);
  *(float *)&v44 = (float)(unsigned __int8)v39 / 255.0;
  *((float *)&v44 + 1) = (float)HIBYTE(v39) / 255.0;
  v45 = (float)*((unsigned __int8 *)v2 + 338) / 255.0;
  v46 = 1065353216;
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *, void **))(*(_QWORD *)v8 + 1384LL))(v8, &v44);
  v17 = v49;
  if ( v49 < 0xC4 )
  {
    v22 = v49 >> 1;
    v23 = 0x7FFFFFFFFFFFFFFFLL;
    if ( v49 <= 0x7FFFFFFFFFFFFFFFLL - (v49 >> 1) )
    {
      v23 = 207;
      if ( v22 + v49 > 0xCF )
        v23 = v22 + v49;
    }
    v24 = (char *)sub_3C460(v23 + 1);
    v48 = 196;
    v49 = v23;
    strcpy(
      v24,
      "30a0a1.15a0.3a-1a110a97a0a8a44a71a0a0a0a0a0a0a75a12a0a0a1a0.4a0.890196a0.4a0a0.4a0.51a0.22a-5a1a0a0a1a0a0a0a0.0784"
      "314a0a0a0a0.16a0a0.25a0a0a0a0a0a0a0a0a2a0a0a0a0a159a0a0.35a0a0a0a0a1a0a1a0a0a0a0a0");
    if ( v17 > 0xF )
    {
      v25 = Block[0];
      if ( v17 + 1 >= 0x1000 )
      {
        v25 = (void *)*((_QWORD *)Block[0] - 1);
        if ( (unsigned __int64)((char *)Block[0] - (char *)v25 - 8) > 0x1F )
          invoke_watson(0, 0, 0, 0, 0);
      }
      j_j_free(v25);
    }
    Block[0] = v24;
  }
  else
  {
    v18 = Block[0];
    v48 = 196;
    memmove(
      Block[0],
      "30a0a1.15a0.3a-1a110a97a0a8a44a71a0a0a0a0a0a0a75a12a0a0a1a0.4a0.890196a0.4a0a0.4a0.51a0.22a-5a1a0a0a1a0a0a0a0.0784"
      "314a0a0a0a0.16a0a0.25a0a0a0a0a0a0a0a0a2a0a0a0a0a159a0a0.35a0a0a0a0a1a0a1a0a0a0a0a0",
      0xC4u);
    v18[196] = 0;
  }
  if ( v48 )
  {
    sub_6AE20(v53, v19, v20, v21);
    KeyframeObject_setupSpline((__int64 *)Block, (__int64)v53);
    v26 = GameToolbox_particleFromStruct(v53, 0, 0);
    sub_3C310(v54);
  }
  else
  {
    v26 = 0;
  }
  LOBYTE(v19) = 1;
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __int64))(*(_QWORD *)v26 + 1544LL))(v26, v19);
  (*(void (__fastcall **)(__int64, cocos2d::CCParticleSystem *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v26, 16);
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *))(*(_QWORD *)v26 + 160LL))(v26);
  cocos2d::CCParticleSystem::resetSystem(v26);
  v27 = *(_QWORD *)v26;
  v28 = *(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v2 + 504LL);
  v29 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v2 + 200LL))(v2);
  v30 = v28(v2);
  cocos2d::CCNode::convertToWorldSpace(v30, &v44, v29);
  cocos2d::CCNode::convertToNodeSpace(a1, v42, v31);
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __int64))(v27 + 184))(v26, v32);
  v33 = *(_QWORD *)v26;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v44, 10.0, 40.0);
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __int64))(v33 + 952))(v26, v34);
  v40 = *((_WORD *)v2 + 168);
  v35 = *((unsigned __int8 *)v2 + 338);
  v50[0] = (float)(unsigned __int8)v40 / 255.0;
  v50[1] = (float)HIBYTE(v40) / 255.0;
  v50[2] = (float)v35 / 255.0;
  v51 = 1065353216;
  v41 = *((_WORD *)v2 + 168);
  v36 = *((unsigned __int8 *)v2 + 338);
  v52[0] = (float)(unsigned __int8)v41 / 255.0;
  v52[1] = (float)HIBYTE(v41) / 255.0;
  v52[2] = (float)v36 / 255.0;
  v51 = 1008981770;
  v52[3] = 0.0;
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *, float *))(*(_QWORD *)v26 + 1352LL))(v26, v50);
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *, float *))(*(_QWORD *)v26 + 1384LL))(v26, v52);
  if ( !qword_905FD0 )
  {
    v44 = operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v44);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
  }
  sub_2732D0();
  if ( v49 > 0xF )
  {
    v37 = Block[0];
    if ( v49 + 1 >= 0x1000 )
    {
      v37 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v37 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v37);
  }
}
