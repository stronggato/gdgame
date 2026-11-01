#include <Geode/binding/GJGameLoadingLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x306c80
// Method: GJGameLoadingLayer::~GJGameLoadingLayer
cocos2d::CCLayer *__fastcall GJGameLoadingLayer__dtor_GJGameLoadingLayer(cocos2d::CCLayer *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *(_QWORD *)Block = &GJGameLoadingLayer::`vftable'; /*0x306c96*/
  *((_QWORD *)Block + 40) = &GJGameLoadingLayer::`vftable'; /*0x306ca0*/
  *((_QWORD *)Block + 41) = &GJGameLoadingLayer::`vftable'; /*0x306cae*/
  *((_QWORD *)Block + 42) = &GJGameLoadingLayer::`vftable'; /*0x306cbc*/
  *((_QWORD *)Block + 43) = &GJGameLoadingLayer::`vftable'; /*0x306cca*/
  *((_QWORD *)Block + 44) = &GJGameLoadingLayer::`vftable'; /*0x306cd8*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 51); /*0x306cdf*/
  if ( v4 ) /*0x306ce9*/
    cocos2d::CCObject::release(v4); /*0x306ceb*/
  cocos2d::CCLayer::~CCLayer(Block); /*0x306cf4*/
  if ( (a2 & 1) != 0 ) /*0x306cff*/
    j_j_free(Block); /*0x306d09*/
  return Block; /*0x306d11*/
}

// [2/3] Address: 0x34f6b0
// Method: GJGameLoadingLayer::transitionToLoadingLayer
// Hidden C++ exception states: #wind=1
cocos2d::CCLayer *__fastcall GJGameLoadingLayer_transitionToLoadingLayer(
        cocos2d::CCObject *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // di
  struct cocos2d::CCScene *v6; // r14
  __int64 v7; // rcx
  cocos2d::CCLayer *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  struct cocos2d::CCLabelBMFont *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  struct cocos2d::CCScene *v16; // rbx
  __int64 v17; // rcx
  cocos2d::CCDirector *v18; // rax
  cocos2d::CCLayer *v20; // [rsp+50h] [rbp+18h] BYREF
  char v21; // [rsp+58h] [rbp+20h] BYREF

  v4 = a2; /*0x34f6bd*/
  v6 = (struct cocos2d::CCScene *)cocos2d::CCScene::create(a1, a2, a3, a4); /*0x34f6c9*/
  *(_QWORD *)(cocos2d::CCApplication::sharedApplication(v7) + 232) = v6; /*0x34f6d2*/
  v8 = (cocos2d::CCLayer *)operator new(0x1A8u); /*0x34f6e3*/
  v20 = v8; /*0x34f6e6*/
  cocos2d::CCLayer::CCLayer(v8); /*0x34f6ee*/
  *(_QWORD *)v8 = &GJGameLoadingLayer::`vftable'; /*0x34f6fb*/
  *((_QWORD *)v8 + 40) = &GJGameLoadingLayer::`vftable'; /*0x34f705*/
  *((_QWORD *)v8 + 41) = &GJGameLoadingLayer::`vftable'; /*0x34f713*/
  *((_QWORD *)v8 + 42) = &GJGameLoadingLayer::`vftable'; /*0x34f721*/
  *((_QWORD *)v8 + 43) = &GJGameLoadingLayer::`vftable'; /*0x34f72f*/
  *((_QWORD *)v8 + 44) = &GJGameLoadingLayer::`vftable'; /*0x34f73d*/
  *((_QWORD *)v8 + 51) = 0; /*0x34f744*/
  *((_BYTE *)v8 + 416) = 0; /*0x34f74f*/
  if ( cocos2d::CCLayer::init(v8) ) /*0x34f759*/
  {
    if ( a1 ) /*0x34f76a*/
    {
      *((_QWORD *)v8 + 51) = a1; /*0x34f76c*/
      cocos2d::CCObject::retain(a1); /*0x34f776*/
    }
    *((_BYTE *)v8 + 416) = v4; /*0x34f77c*/
    v10 = cocos2d::CCDirector::sharedDirector(v9); /*0x34f783*/
    cocos2d::CCDirector::getWinSize(v10, &v20); /*0x34f791*/
    v11 = cocos2d::CCLabelBMFont::create("Loading...", (const char *)&qword_6FFF68); /*0x34f7ab*/
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v11 + 160LL))(v11); /*0x34f7c3*/
    (*(void (__fastcall **)(cocos2d::CCLayer *, struct cocos2d::CCLabelBMFont *, __int64))(*(_QWORD *)v8 + 456LL))( /*0x34f7db*/
      v8,
      v11,
      1);
    v12 = *(_QWORD *)v11; /*0x34f7de*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v21, 1.0, 0.0); /*0x34f7f1*/
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v12 + 288))(v11, v13); /*0x34f7fd*/
    v14 = *(_QWORD *)v11; /*0x34f803*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v21, *(float *)&v20 - 20.0, 20.0); /*0x34f81d*/
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v14 + 184))(v11, v15); /*0x34f829*/
    cocos2d::CCObject::autorelease(v8); /*0x34f832*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCLayer *, __int64))(*(_QWORD *)v8 + 8LL))(v8, 1); /*0x34f845*/
    v8 = 0; /*0x34f848*/
  }
  (*(void (__fastcall **)(struct cocos2d::CCScene *, cocos2d::CCLayer *))(*(_QWORD *)v6 + 464LL))(v6, v8); /*0x34f85a*/
  *((_DWORD *)v6 + 7) = 5; /*0x34f85d*/
  v16 = cocos2d::CCTransitionFade::create(0.1, v6); /*0x34f876*/
  v18 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v17); /*0x34f879*/
  cocos2d::CCDirector::replaceScene(v18, v16); /*0x34f885*/
  return v8; /*0x34f88e*/
}

// [3/3] Address: 0x34f8a0
// Method: GJGameLoadingLayer::loadLevel
bool __fastcall GJGameLoadingLayer_loadLevel(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  struct cocos2d::CCScene *v5; // rbx
  __int64 v6; // rcx
  cocos2d::CCObject *v7; // rax
  struct cocos2d::CCScene *v8; // rdx
  struct cocos2d::CCScene *v9; // rbx
  __int64 v10; // rcx
  cocos2d::CCDirector *v11; // rax

  v4 = *(_QWORD *)(a1 + 408); /*0x34f8b1*/
  if ( *(_BYTE *)(a1 + 416) ) /*0x34f8aa*/
  {
    v5 = (struct cocos2d::CCScene *)cocos2d::CCScene::create(a1, a2, a3, a4); /*0x34f8c0*/
    *(_QWORD *)(cocos2d::CCApplication::sharedApplication(v6) + 232) = v5; /*0x34f8ce*/
    v7 = LevelEditorLayer_create(v4, 0); /*0x34f8d5*/
    (*(void (__fastcall **)(struct cocos2d::CCScene *, cocos2d::CCObject *))(*(_QWORD *)v5 + 464LL))(v5, v7); /*0x34f8ea*/
    v8 = v5; /*0x34f8ed*/
    *((_DWORD *)v5 + 7) = 6; /*0x34f8f0*/
  }
  else
  {
    v8 = (struct cocos2d::CCScene *)TeleportPortalObject_create(*(_QWORD *)(a1 + 408), 0, a3, a4); /*0x34f903*/
  }
  v9 = cocos2d::CCTransitionFade::create(0.40000001, v8); /*0x34f914*/
  v11 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v10); /*0x34f917*/
  return cocos2d::CCDirector::replaceScene(v11, v9); /*0x34f923*/
}
