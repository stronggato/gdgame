#include <Geode/binding/GJDropDownLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/13] Address: 0x45260
// Method: GJDropDownLayer::enterLayer
__int64 __fastcall GJDropDownLayer_enterLayer(__int64 a1)
{
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 1128LL))(a1); /*0x4526c*/
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 1080LL))(a1, 0);
}

// [2/13] Address: 0x45370
// Method: GJDropDownLayer::layerVisible
__int64 __fastcall GJDropDownLayer_layerVisible(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1; /*0x45373*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 336LL))(a1, a2);
}

// [3/13] Address: 0x453c0
// Method: GJDropDownLayer::draw
void __fastcall GJDropDownLayer_draw(cocos2d::CCLayerColor *a1)
{
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*((_QWORD *)a1 + 51) + 32LL))((_QWORD *)a1 + 51) ) /*0x453d3*/
    cocos2d::CCLayerColor::draw(a1); /*0x453e2*/
}

// [4/13] Address: 0x91760
// Method: GJDropDownLayer::GJDropDownLayer
// Hidden C++ exception states: #wind=1
__int64 __fastcall GJDropDownLayer_GJDropDownLayer(__int64 a1)
{
  cocos2d::CCLayerColor::CCLayerColor((cocos2d::CCLayerColor *)a1); /*0x9176d*/
  *(_QWORD *)a1 = &GJDropDownLayer::`vftable'; /*0x9177b*/
  *(_QWORD *)(a1 + 320) = &GJDropDownLayer::`vftable'; /*0x91785*/
  *(_QWORD *)(a1 + 328) = &GJDropDownLayer::`vftable'; /*0x91793*/
  *(_QWORD *)(a1 + 336) = &GJDropDownLayer::`vftable'; /*0x917a1*/
  *(_QWORD *)(a1 + 344) = &GJDropDownLayer::`vftable'; /*0x917af*/
  *(_QWORD *)(a1 + 352) = &GJDropDownLayer::`vftable'; /*0x917bd*/
  *(_QWORD *)(a1 + 408) = &GJDropDownLayer::`vftable'; /*0x917cb*/
  *(_QWORD *)(a1 + 432) = &GJDropDownLayer::`vftable'; /*0x917d9*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(a1 + 544)); /*0x917e7*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(a1 + 552)); /*0x917f4*/
  *(_QWORD *)(a1 + 560) = 0; /*0x917fc*/
  *(_QWORD *)(a1 + 568) = 0; /*0x91803*/
  *(_QWORD *)(a1 + 576) = 0; /*0x9180a*/
  *(_BYTE *)(a1 + 584) = 0; /*0x91811*/
  *(_QWORD *)(a1 + 592) = 0; /*0x91817*/
  *(_BYTE *)(a1 + 600) = 0; /*0x9181e*/
  return a1; /*0x91827*/
}

// [5/13] Address: 0x35be60
// Method: GJDropDownLayer::~GJDropDownLayer
void __fastcall GJDropDownLayer__dtor_GJDropDownLayer(struct cocos2d::CCObject *a1)
{
  __int64 v2; // rax
  cocos2d::CCTouchDispatcher *v3; // rax

  *(_QWORD *)a1 = &GJDropDownLayer::`vftable'; /*0x35be70*/
  *((_QWORD *)a1 + 40) = &GJDropDownLayer::`vftable'; /*0x35be7a*/
  *((_QWORD *)a1 + 41) = &GJDropDownLayer::`vftable'; /*0x35be88*/
  *((_QWORD *)a1 + 42) = &GJDropDownLayer::`vftable'; /*0x35be96*/
  *((_QWORD *)a1 + 43) = &GJDropDownLayer::`vftable'; /*0x35bea4*/
  *((_QWORD *)a1 + 44) = &GJDropDownLayer::`vftable'; /*0x35beb2*/
  *((_QWORD *)a1 + 51) = &GJDropDownLayer::`vftable'; /*0x35bec0*/
  *((_QWORD *)a1 + 54) = &GJDropDownLayer::`vftable'; /*0x35bece*/
  v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x35bed5*/
  v3 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2); /*0x35bee8*/
  cocos2d::CCTouchDispatcher::unregisterForcePrio(v3, a1); /*0x35bef0*/
  cocos2d::CCLayerColor::~CCLayerColor(a1); /*0x35befe*/
}

// [6/13] Address: 0x35bf10
// Method: GJDropDownLayer::init
bool __fastcall GJDropDownLayer_init(__int64 *a1, int a2, float a3, char a4)
{
  __int64 v7; // rax
  cocos2d::CCTouchDispatcher *v8; // rax
  bool result; // al
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // r9d
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 *v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // rax
  struct cocos2d::CCSprite *v25; // rax
  struct cocos2d::CCMenuItem *v26; // r14
  struct cocos2d::CCMenu *v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rcx
  cocos2d::CCDirector *v30; // rax
  float v31; // xmm6_4
  __int64 v32; // rcx
  cocos2d::CCDirector *v33; // rax
  float ScreenLeft; // xmm0_4
  __int64 v35; // rbx
  __int64 v36; // rax
  float v37; // xmm8_4
  struct cocos2d::CCSprite *v38; // rdi
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rax
  struct cocos2d::CCSprite *v43; // rdi
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rcx
  int v52; // [rsp+30h] [rbp-48h] BYREF
  float v53; // [rsp+38h] [rbp-40h] BYREF
  float v54; // [rsp+3Ch] [rbp-3Ch]

  v7 = cocos2d::CCDirector::sharedDirector(a1); /*0x35bf33*/
  v8 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 144LL))(v7); /*0x35bf3f*/
  cocos2d::CCTouchDispatcher::registerForcePrio(v8, (struct cocos2d::CCObject *)a1, 2, 0); /*0x35bf55*/
  v52 = 2097152000; /*0x35bf60*/
  result = cocos2d::CCLayerColor::initWithColor((cocos2d::CCLayerColor *)a1, (const struct cocos2d::_ccColor4B *)&v52); /*0x35bf6b*/
  if ( result ) /*0x35bf73*/
  {
    LOBYTE(v10) = 1; /*0x35bf7c*/
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 920))(a1, v10); /*0x35bf9b*/
    LOBYTE(v11) = 1; /*0x35bfa4*/
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 992))(a1, v11); /*0x35bfa9*/
    LOBYTE(v12) = 1; /*0x35bfb2*/
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 1008))(a1, v12); /*0x35bfb7*/
    v14 = cocos2d::CCDirector::sharedDirector(v13); /*0x35bfbd*/
    cocos2d::CCDirector::getWinSize(v14, &v53); /*0x35bfcb*/
    v15 = cocos2d::CCLayer::create(); /*0x35bfd1*/
    v16 = *a1; /*0x35bfd7*/
    a1[72] = v15; /*0x35bfdd*/
    (*(void (__fastcall **)(__int64 *, __int64))(v16 + 464))(a1, v15); /*0x35bfee*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v52, 0.0, 0.0); /*0x35bffc*/
    cocos2d::CCPoint::operator=(a1 + 68, v17); /*0x35c00c*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v52, 0.0, v54); /*0x35c020*/
    cocos2d::CCPoint::operator=(a1 + 69, v18); /*0x35c030*/
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1[72] + 184LL))(a1[72], a1 + 69); /*0x35c047*/
    v20 = GJListLayer_create(0, a2, -1275068416, v19, LODWORD(a3), 0); /*0x35c072*/
    v21 = a1[72]; /*0x35c077*/
    a1[71] = v20; /*0x35c07e*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 464LL))(v21, v20); /*0x35c092*/
    v22 = (__int64 *)a1[71]; /*0x35c0b3*/
    v23 = *v22; /*0x35c0c2*/
    cocos2d::CCPoint::CCPoint( /*0x35c0d9*/
      (cocos2d::CCPoint *)&v52,
      (float)(v53 - 356.0) * 0.5,
      (float)((float)((float)(v54 - a3) * 0.5) - 10.0) + 5.0);
    (*(void (__fastcall **)(__int64 *, __int64))(v23 + 184))(v22, v24); /*0x35c0e5*/
    v25 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_arrow_03_001.png"); /*0x35c0f2*/
    v26 = (struct cocos2d::CCMenuItem *)CCMenuItemSpriteExtra_create(v25, 0, a1, sub_35C6C8); /*0x35c111*/
    *((_DWORD *)v26 + 93) = 1070386381; /*0x35c114*/
    v27 = cocos2d::CCMenu::create(v26, 0); /*0x35c11e*/
    a1[70] = (__int64)v27; /*0x35c124*/
    v28 = *(_QWORD *)v27; /*0x35c12b*/
    v30 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v29); /*0x35c12e*/
    v31 = cocos2d::CCDirector::getScreenTop(v30) - 23.0; /*0x35c140*/
    v33 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v32); /*0x35c148*/
    ScreenLeft = cocos2d::CCDirector::getScreenLeft(v33); /*0x35c151*/
    v35 = a1[70]; /*0x35c157*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v52, ScreenLeft + 24.0, v31); /*0x35c171*/
    (*(void (__fastcall **)(__int64, __int64))(v28 + 184))(v35, v36); /*0x35c17d*/
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1[72] + 456LL))(a1[72], a1[70], 10); /*0x35c19a*/
    v37 = (float)(a3 + *(float *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1[71] + 200LL))(a1[71]) + 4)) + 12.0; /*0x35c1bd*/
    v38 = cocos2d::CCSprite::createWithSpriteFrameName("chain_01_001.png"); /*0x35c1d9*/
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1[72] + 456LL))( /*0x35c1e9*/
      a1[72],
      v38,
      0xFFFFFFFFLL);
    v39 = *(_QWORD *)v38; /*0x35c1ec*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v52, 0.5, 0.0); /*0x35c1fa*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v39 + 288))(v38, v40); /*0x35c206*/
    v41 = *(_QWORD *)v38; /*0x35c217*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v52, (float)(v53 * 0.5) - 156.0, v37); /*0x35c22a*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v41 + 184))(v38, v42); /*0x35c236*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, _QWORD))(*(_QWORD *)v38 + 64LL))(v38, 0); /*0x35c244*/
    v43 = cocos2d::CCSprite::createWithSpriteFrameName("chain_01_001.png"); /*0x35c261*/
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1[72] + 456LL))( /*0x35c271*/
      a1[72],
      v43,
      0xFFFFFFFFLL);
    v44 = *(_QWORD *)v43; /*0x35c274*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v52, 0.5, 0.0); /*0x35c282*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v44 + 288))(v43, v45); /*0x35c28e*/
    v46 = *(_QWORD *)v43; /*0x35c29f*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v52, (float)(v53 * 0.5) + 156.0, v37); /*0x35c2b2*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v46 + 184))(v43, v47); /*0x35c2be*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(*(_QWORD *)v43 + 64LL))(v43, 1); /*0x35c2cf*/
    v48 = *a1; /*0x35c2d2*/
    LOBYTE(v49) = 1; /*0x35c2d5*/
    *((_BYTE *)a1 + 584) = 0; /*0x35c2da*/
    (*(void (__fastcall **)(__int64 *, __int64))(v48 + 1088))(a1, v49); /*0x35c2e1*/
    v50 = *a1; /*0x35c2e7*/
    *((_BYTE *)a1 + 584) = 1; /*0x35c2ed*/
    (*(void (__fastcall **)(__int64 *))(v50 + 1056))(a1); /*0x35c2f4*/
    if ( *(_BYTE *)(cocos2d::CCApplication::sharedApplication(v51) + 209) ) /*0x35c312*/
    {
      if ( !a4 ) /*0x35c31e*/
        sub_6DEB0(a1[72], v26); /*0x35c32a*/
    }
    return 1; /*0x35c337*/
  }
  return result; /*0x35c339*/
}

// [7/13] Address: 0x35c350
// Method: GJDropDownLayer::disableUI
__int64 __fastcall GJDropDownLayer_disableUI(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 560) + 920LL))(*(_QWORD *)(a1 + 560), 0);
}

// [8/13] Address: 0x35c370
// Method: GJDropDownLayer::enableUI
__int64 __fastcall GJDropDownLayer_enableUI(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1; /*0x35c377*/
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 560) + 920LL))(*(_QWORD *)(a1 + 560), a2);
}

// [9/13] Address: 0x35c390
// Method: GJDropDownLayer::keyBackClicked
__int64 __fastcall GJDropDownLayer_keyBackClicked(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 336) + 1072LL))(a1 - 336, 0);
}

// [10/13] Address: 0x35c3b0
// Method: GJDropDownLayer::exitLayer
__int64 __fastcall GJDropDownLayer_exitLayer(unsigned __int8 *a1)
{
  (*(void (__fastcall **)(unsigned __int8 *, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x35c3be*/
  (*(void (__fastcall **)(unsigned __int8 *))(*(_QWORD *)a1 + 1120LL))(a1); /*0x35c3ca*/
  return (*(__int64 (__fastcall **)(unsigned __int8 *, _QWORD))(*(_QWORD *)a1 + 1088LL))(a1, a1[600]);
}

// [11/13] Address: 0x35c3f0
// Method: GJDropDownLayer::showLayer
// Hidden C++ exception states: #wind=1
struct cocos2d::CCAction *__fastcall GJDropDownLayer_showLayer(cocos2d::CCNode *a1, char a2)
{
  __int64 v4; // rcx
  struct cocos2d::CCActionInterval *v5; // rax
  struct cocos2d::CCFiniteTimeAction *v6; // rbx
  __int64 v7; // rax
  struct cocos2d::CCAction *v8; // rax
  struct cocos2d::CCAction *v9; // rax
  __int64 v11; // rdx
  void *v12; // [rsp+30h] [rbp+8h]

  cocos2d::CCNode::stopAllActions(*((cocos2d::CCNode **)a1 + 72)); /*0x35c407*/
  (*(void (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)a1 + 1096LL))(a1); /*0x35c413*/
  v4 = qword_905FD0; /*0x35c419*/
  if ( !qword_905FD0 ) /*0x35c423*/
  {
    v12 = operator new(0x6E8u); /*0x35c42f*/
    qword_905FD0 = sub_2723A0(v12); /*0x35c43d*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x35c44e*/
    v4 = qword_905FD0; /*0x35c450*/
  }
  if ( GameManager_getGameVariable(v4, "0168") || a2 ) /*0x35c46d*/
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)a1 + 72) + 184LL))(*((_QWORD *)a1 + 72), (__int64)a1 + 544); /*0x35c512*/
    LOBYTE(v11) = 125; /*0x35c522*/
    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)a1 + 51) + 40LL))((__int64)a1 + 408, v11); /*0x35c524*/
    return (struct cocos2d::CCAction *)(*(__int64 (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)a1 + 1112LL))(a1); /*0x35c537*/
  }
  else
  {
    v5 = cocos2d::CCMoveTo::create(0.5, (cocos2d::CCNode *)((char *)a1 + 544)); /*0x35c482*/
    v6 = cocos2d::CCEaseInOut::create(v5, 2.0); /*0x35c499*/
    v7 = cocos2d::CCCallFunc::create(a1, sub_132EAC); /*0x35c4a6*/
    v8 = cocos2d::CCSequence::create(v6, v7, 0); /*0x35c4b5*/
    cocos2d::CCNode::runAction(*((cocos2d::CCNode **)a1 + 72), v8); /*0x35c4c5*/
    (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)a1 + 51) + 40LL))((__int64)a1 + 408, 0); /*0x35c4d7*/
    v9 = cocos2d::CCFadeTo::create(0.5, 0x7Du); /*0x35c4e4*/
    return cocos2d::CCNode::runAction(a1, v9); /*0x35c4fa*/
  }
}

// [12/13] Address: 0x35c540
// Method: GJDropDownLayer::hideLayer
// Hidden C++ exception states: #wind=1
struct cocos2d::CCAction *__fastcall GJDropDownLayer_hideLayer(cocos2d::CCNode *a1, char a2)
{
  void (__fastcall ***v4)(_QWORD, cocos2d::CCNode *); // rcx
  __int64 v5; // rcx
  struct cocos2d::CCActionInterval *v6; // rax
  struct cocos2d::CCFiniteTimeAction *v7; // rbx
  __int64 v8; // rax
  struct cocos2d::CCAction *v9; // rax
  struct cocos2d::CCAction *v10; // rax
  void *v12; // [rsp+30h] [rbp+8h]

  if ( *((_BYTE *)a1 + 584) ) /*0x35c550*/
  {
    v4 = (void (__fastcall ***)(_QWORD, cocos2d::CCNode *))*((_QWORD *)a1 + 74); /*0x35c559*/
    if ( v4 ) /*0x35c563*/
      (**v4)(v4, a1); /*0x35c56b*/
  }
  cocos2d::CCNode::stopAllActions(*((cocos2d::CCNode **)a1 + 72)); /*0x35c574*/
  v5 = qword_905FD0; /*0x35c57a*/
  if ( !qword_905FD0 ) /*0x35c584*/
  {
    v12 = operator new(0x6E8u); /*0x35c590*/
    qword_905FD0 = sub_2723A0(v12); /*0x35c59e*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x35c5af*/
    v5 = qword_905FD0; /*0x35c5b1*/
  }
  if ( GameManager_getGameVariable(v5, "0168") || a2 ) /*0x35c5ce*/
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)a1 + 72) + 184LL))(*((_QWORD *)a1 + 72), (__int64)a1 + 552); /*0x35c660*/
    (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)a1 + 51) + 40LL))((__int64)a1 + 408, 0); /*0x35c672*/
    return (struct cocos2d::CCAction *)(*(__int64 (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)a1 + 1104LL))(a1); /*0x35c685*/
  }
  else
  {
    v6 = cocos2d::CCMoveTo::create(0.5, (cocos2d::CCNode *)((char *)a1 + 552)); /*0x35c5df*/
    v7 = cocos2d::CCEaseInOut::create(v6, 2.0); /*0x35c5f6*/
    v8 = cocos2d::CCCallFunc::create(a1, sub_9C4B8); /*0x35c603*/
    v9 = cocos2d::CCSequence::create(v7, v8, 0); /*0x35c612*/
    cocos2d::CCNode::runAction(*((cocos2d::CCNode **)a1 + 72), v9); /*0x35c622*/
    v10 = cocos2d::CCFadeTo::create(0.5, 0); /*0x35c632*/
    return cocos2d::CCNode::runAction(a1, v10); /*0x35c648*/
  }
}

// [13/13] Address: 0x35c690
// Method: GJDropDownLayer::layerHidden
__int64 __fastcall GJDropDownLayer_layerHidden(_BYTE *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = (*(__int64 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 336LL))(a1, 0); /*0x35c69e*/
  if ( a1[584] ) /*0x35c6a4*/
  {
    LOBYTE(v3) = 1; /*0x35c6b0*/
    return (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 520LL))(a1, v3); /*0x35c6ba*/
  }
  return result; /*0x35c6c1*/
}
