#include <Geode/binding/DialogLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/11] Address: 0x1725b0
// Method: DialogLayer::createDialogLayer
// Hidden C++ exception states: #wind=1
cocos2d::CCLayerColor *__fastcall DialogLayer_createDialogLayer(__int64 a1, __int64 a2, unsigned int a3)
{
  cocos2d::CCLayerColor *v6; // r14

  v6 = (cocos2d::CCLayerColor *)operator new(0x288u); /*0x1725d5*/
  cocos2d::CCLayerColor::CCLayerColor(v6); /*0x1725e0*/
  *(_QWORD *)v6 = &DialogLayer::`vftable'; /*0x1725ed*/
  *((_QWORD *)v6 + 40) = &DialogLayer::`vftable'; /*0x1725f7*/
  *((_QWORD *)v6 + 41) = &DialogLayer::`vftable'; /*0x172605*/
  *((_QWORD *)v6 + 42) = &DialogLayer::`vftable'; /*0x172613*/
  *((_QWORD *)v6 + 43) = &DialogLayer::`vftable'; /*0x172621*/
  *((_QWORD *)v6 + 44) = &DialogLayer::`vftable'; /*0x17262f*/
  *((_QWORD *)v6 + 51) = &DialogLayer::`vftable'; /*0x17263d*/
  *((_QWORD *)v6 + 54) = &DialogLayer::`vftable'; /*0x17264b*/
  *((_QWORD *)v6 + 68) = &DialogLayer::`vftable'; /*0x172659*/
  *((_QWORD *)v6 + 69) = 0; /*0x172662*/
  *((_QWORD *)v6 + 71) = 0; /*0x172669*/
  *((_QWORD *)v6 + 72) = 0; /*0x172670*/
  *((_QWORD *)v6 + 73) = 0; /*0x172677*/
  *((_QWORD *)v6 + 74) = 0; /*0x17267e*/
  *((_DWORD *)v6 + 150) = -1; /*0x172685*/
  *((_WORD *)v6 + 308) = 0; /*0x172690*/
  *((_QWORD *)v6 + 78) = 0; /*0x172698*/
  *((_BYTE *)v6 + 632) = 0; /*0x17269f*/
  *((_DWORD *)v6 + 159) = 1; /*0x1726a6*/
  *((_BYTE *)v6 + 640) = 0; /*0x1726b1*/
  if ( (unsigned __int8)sub_172710(v6, a1, a2, a3) ) /*0x1726c4*/
  {
    cocos2d::CCObject::autorelease(v6); /*0x1726d0*/
    return v6; /*0x1726d6*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCLayerColor *, __int64))(*(_QWORD *)v6 + 8LL))(v6, 1); /*0x1726ea*/
    return 0; /*0x1726ed*/
  }
}

// [2/11] Address: 0x172b80
// Method: DialogLayer::displayNextObject
unsigned int __fastcall DialogLayer_displayNextObject(__int64 a1)
{
  unsigned int result; // eax
  struct cocos2d::CCObject *v3; // rax

  result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 592)); /*0x172b90*/
  if ( result ) /*0x172b98*/
  {
    v3 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 592), 0); /*0x172ba3*/
    MusicBrowser_setupList(a1, (__int64)v3); /*0x172baf*/
    cocos2d::CCArray::removeObjectAtIndex(*(cocos2d::CCArray **)(a1 + 592), 0, 1); /*0x172bc0*/
    return DialogLayer_updateNavButtonFrame(a1); /*0x172bce*/
  }
  return result; /*0x172bc9*/
}

// [3/11] Address: 0x172f30
// Method: DialogLayer::updateNavButtonFrame
__int64 __fastcall DialogLayer_updateNavButtonFrame(__int64 a1)
{
  cocos2d::CCArray *v2; // rcx
  __int64 *v3; // rdi
  __int64 v4; // rbx
  cocos2d::CCSpriteFrameCache *v5; // rax
  const char *v6; // rdx
  struct cocos2d::CCSpriteFrame *v7; // rax

  v2 = *(cocos2d::CCArray **)(a1 + 592); /*0x172f3d*/
  if ( v2 && cocos2d::CCArray::count(v2) ) /*0x172f49*/
  {
    v3 = *(__int64 **)(a1 + 608); /*0x172f53*/
    v4 = *v3; /*0x172f5a*/
    v5 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x172f5d*/
    v6 = "GJ_chatBtn_01_001.png"; /*0x172f63*/
  }
  else
  {
    v3 = *(__int64 **)(a1 + 608); /*0x172f6c*/
    v4 = *v3; /*0x172f73*/
    v5 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x172f76*/
    v6 = "GJ_chatBtn_02_001.png"; /*0x172f7c*/
  }
  v7 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v5, v6); /*0x172f86*/
  return (*(__int64 (__fastcall **)(__int64 *, struct cocos2d::CCSpriteFrame *))(v4 + 1008))(v3, v7); /*0x172f99*/
}

// [4/11] Address: 0x173130
// Method: DialogLayer::addToMainScene
__int64 __fastcall DialogLayer_addToMainScene(__int64 a1)
{
  cocos2d::CCScene *v2; // rbx

  v2 = *(cocos2d::CCScene **)(cocos2d::CCDirector::sharedDirector(a1) + 272); /*0x173143*/
  if ( cocos2d::CCScene::getHighestChildZ(v2) + 1 >= 1000 ) /*0x17315e*/
    cocos2d::CCScene::getHighestChildZ(v2); /*0x173163*/
  return (*(__int64 (__fastcall **)(cocos2d::CCScene *, __int64))(*(_QWORD *)v2 + 456LL))(v2, a1);
}

// [5/11] Address: 0x173190
// Method: DialogLayer::keyBackClicked
__int64 __fastcall DialogLayer_keyBackClicked(__int64 a1)
{
  return DialogLayer_onClose(a1 - 336);
}

// [6/11] Address: 0x1731a0
// Method: DialogLayer::onClose
__int64 __fastcall DialogLayer_onClose(_QWORD *a1)
{
  void (__fastcall ***v2)(_QWORD, _QWORD *); // rcx
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // rdx

  v2 = (void (__fastcall ***)(_QWORD, _QWORD *))a1[78]; /*0x1731a9*/
  if ( v2 ) /*0x1731b3*/
    (**v2)(v2, a1); /*0x1731bb*/
  v3 = a1[72]; /*0x1731bd*/
  a1[78] = 0; /*0x1731c6*/
  if ( v3 ) /*0x1731d0*/
    *(_QWORD *)(v3 + 712) = 0; /*0x1731d2*/
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 992LL))(a1, 0); /*0x1731e1*/
  result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 1008LL))(a1, 0); /*0x1731ef*/
  if ( !*((_BYTE *)a1 + 640) ) /*0x1731f5*/
  {
    LOBYTE(v5) = 1; /*0x173201*/
    return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 520LL))(a1, v5); /*0x17320b*/
  }
  return result; /*0x173212*/
}

// [7/11] Address: 0x173220
// Method: DialogLayer::ccTouchBegan
char __fastcall DialogLayer_ccTouchBegan(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a1 + 280) == -1 ) /*0x17322b*/
  {
    *(_DWORD *)(a1 + 280) = *(_DWORD *)(a2 + 56); /*0x173230*/
    sub_172FB0(a1 - 320); /*0x17323d*/
  }
  return 1; /*0x173244*/
}

// [8/11] Address: 0x173250
// Method: DialogLayer::ccTouchEnded
__int64 __fastcall DialogLayer_ccTouchEnded(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a2 + 56); /*0x173250*/
  if ( *(_DWORD *)(a1 + 280) == (_DWORD)result ) /*0x173259*/
    *(_DWORD *)(a1 + 280) = -1; /*0x17325b*/
  return result; /*0x173265*/
}

// [9/11] Address: 0x173270
// Method: DialogLayer::ccTouchCancelled
__int64 __fastcall DialogLayer_ccTouchCancelled(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a2 + 56); /*0x173270*/
  if ( a1[70] == (_DWORD)result ) /*0x173279*/
    return (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 24LL))(a1); /*0x17327e*/
  return result; /*0x173282*/
}

// [10/11] Address: 0x173290
// Method: DialogLayer::fadeInTextFinished
struct cocos2d::CCAction *__fastcall DialogLayer_fadeInTextFinished(__int64 a1)
{
  cocos2d::CCArray *v2; // rcx
  float v3; // xmm0_4
  struct cocos2d::CCAction *v4; // rax

  *(_BYTE *)(a1 + 72) = 0; /*0x173299*/
  cocos2d::CCNode::stopAllActions(*(cocos2d::CCNode **)(a1 + 64)); /*0x1732a1*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 320LL) + 40LL))( /*0x1732b7*/
    *(_QWORD *)(a1 + 64) + 320LL,
    0);
  v2 = *(cocos2d::CCArray **)(a1 + 48); /*0x1732ba*/
  if ( v2 && cocos2d::CCArray::count(v2) ) /*0x1732c3*/
    v3 = 0.30000001; /*0x1732cd*/
  else
    v3 = 0.5; /*0x1732d7*/
  v4 = cocos2d::CCFadeIn::create(v3); /*0x1732df*/
  return cocos2d::CCNode::runAction(*(cocos2d::CCNode **)(a1 + 64), v4); /*0x1732ec*/
}

// [11/11] Address: 0x173750
// Method: DialogLayer::keyDown
__int64 __fastcall DialogLayer_keyDown(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  int v3; // edx

  if ( (int)a2 <= 1001 ) /*0x173756*/
  {
    if ( (_DWORD)a2 != 1001 ) /*0x173758*/
    {
      if ( (unsigned int)a2 > 0x26 ) /*0x17375d*/
        return result; /*0x17375d*/
      result = 0x4108000000LL; /*0x17375f*/
      if ( !_bittest64(&result, a2) ) /*0x17376d*/
        return result; /*0x17376d*/
    }
    return sub_172FB0(a1 - 344); /*0x173784*/
  }
  v3 = a2 - 1013; /*0x173770*/
  if ( !v3 || v3 == 2 ) /*0x17377b*/
    return sub_172FB0(a1 - 344); /*0x17377b*/
  return result; /*0x17376f*/
}
