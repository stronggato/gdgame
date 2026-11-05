#include <Geode/binding/GJPathsLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x180c30
// Method: GJPathsLayer::onPath
// Hidden C++ exception states: #wind=3
double __fastcall GJPathsLayer_onPath(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  int v4; // ebx
  int v5; // edi
  cocos2d::CCObject *v6; // rsi
  __int64 (__fastcall *v7)(__int64); // rdx
  double result; // xmm0_8
  _BYTE v9[8]; // [rsp+30h] [rbp-68h] BYREF
  cocos2d::CCObject *v10; // [rsp+38h] [rbp-60h]
  _BYTE v11[32]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v12[32]; // [rsp+60h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 576); /*0x180c57*/
  v3 = *(_QWORD *)(v2 + 2168); /*0x180c5e*/
  if ( v3 ) /*0x180c68*/
  {
    v9[0] = 0; /*0x180c6e*/
    sub_3EFAF0(v2, v12, v9); /*0x180c7d*/
    sub_3F0530(*(_QWORD *)(a1 + 576), v11); /*0x180c8f*/
    v4 = *(_DWORD *)(v3 + 676); /*0x180c95*/
    v5 = *(_DWORD *)(v3 + 680); /*0x180c9b*/
    v6 = (cocos2d::CCObject *)operator new(0x3F8u); /*0x180cab*/
    v10 = v6; /*0x180cae*/
    SetupTriggerPopup_SetupTriggerPopup((__int64)v6); /*0x180cb6*/
    *(_QWORD *)v6 = &AudioAssetsPopup::`vftable'; /*0x180cc2*/
    *((_QWORD *)v6 + 40) = &AudioAssetsPopup::`vftable'; /*0x180ccc*/
    *((_QWORD *)v6 + 41) = &AudioAssetsPopup::`vftable'; /*0x180cda*/
    *((_QWORD *)v6 + 42) = &AudioAssetsPopup::`vftable'; /*0x180ce8*/
    *((_QWORD *)v6 + 43) = &AudioAssetsPopup::`vftable'; /*0x180cf6*/
    *((_QWORD *)v6 + 44) = &AudioAssetsPopup::`vftable'; /*0x180d04*/
    *((_QWORD *)v6 + 51) = &AudioAssetsPopup::`vftable'; /*0x180d12*/
    *((_QWORD *)v6 + 54) = &AudioAssetsPopup::`vftable'; /*0x180d20*/
    *((_QWORD *)v6 + 68) = &AudioAssetsPopup::`vftable'; /*0x180d2e*/
    *((_QWORD *)v6 + 83) = &AudioAssetsPopup::`vftable'; /*0x180d3c*/
    *((_QWORD *)v6 + 84) = &AudioAssetsPopup::`vftable'; /*0x180d4a*/
    *((_QWORD *)v6 + 125) = &AudioAssetsPopup::`vftable'; /*0x180d58*/
    *((_QWORD *)v6 + 126) = 0; /*0x180d5f*/
    if ( (unsigned __int8)ColorSelectLiveOverlay_init((_DWORD)v6, v5, v4, (unsigned int)v12, (__int64)v11) ) /*0x180d81*/
    {
      cocos2d::CCObject::autorelease(v6); /*0x180d8d*/
      if ( v6 ) /*0x180d96*/
      {
        v7 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 1064LL); /*0x180d9b*/
        if ( v7 == SetupTriggerPopup_show ) /*0x180daf*/
          SetupTriggerPopup_show((__int64)v6); /*0x180db1*/
        else
          v7((__int64)v6); /*0x180db8*/
      }
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v6 + 8LL))(v6, 1); /*0x180dc4*/
    }
    sub_3C310(v11); /*0x180dcd*/
    return sub_3C310(v12); /*0x180dd8*/
  }
  return result; /*0x180ddd*/
}

// [2/4] Address: 0x38e700
// Method: GJPathsLayer::~GJPathsLayer
_QWORD *__fastcall GJPathsLayer__dtor_GJPathsLayer(_QWORD *Block, char a2)
{
  *Block = &GJPathsLayer::`vftable'; /*0x38e713*/
  Block[40] = &GJPathsLayer::`vftable'; /*0x38e720*/
  Block[41] = &GJPathsLayer::`vftable'; /*0x38e72e*/
  Block[42] = &GJPathsLayer::`vftable'; /*0x38e73c*/
  Block[43] = &GJPathsLayer::`vftable'; /*0x38e74a*/
  Block[44] = &GJPathsLayer::`vftable'; /*0x38e758*/
  Block[51] = &GJPathsLayer::`vftable'; /*0x38e766*/
  Block[54] = &GJPathsLayer::`vftable'; /*0x38e774*/
  Block[68] = &GJPathsLayer::`vftable'; /*0x38e782*/
  Block[83] = &GJPathsLayer::`vftable'; /*0x38e790*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x38e797*/
  if ( (a2 & 1) != 0 ) /*0x38e79f*/
    j_j_free(Block); /*0x38e7a9*/
  return Block; /*0x38e7ae*/
}

// [4/4] Address: 0x38f3b0
// Method: GJPathsLayer::onExit
void __fastcall GJPathsLayer_onExit(cocos2d::CCLayer *a1)
{
  cocos2d::CCSpriteFrameCache *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  cocos2d::CCTextureCache *v5; // rax

  cocos2d::CCLayer::onExit(a1); /*0x38f3b9*/
  if ( *((_BYTE *)a1 + 680) ) /*0x38f3bf*/
  {
    v2 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x38f3c8*/
    cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(v2, "GJ_PathSheet.plist"); /*0x38f3d8*/
    v5 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v4, v3); /*0x38f3de*/
    cocos2d::CCTextureCache::removeTextureForKey(v5, "GJ_PathSheet.png"); /*0x38f3f3*/
  }
}

// Address: 0x38ee70
// Method: GJPathsLayer::init
// Hidden C++ exception states: #wind=2
bool __fastcall GJPathsLayer_init(__int64 a1, __int64 a2)
{
  cocos2d::CCTextureCache *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  cocos2d::CCSpriteFrameCache *v6; // rax
  __int64 v7; // rcx
  bool result; // al
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  struct cocos2d::CCSprite *v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rax
  struct cocos2d::CCSprite *v17; // rax
  cocos2d::CCObject *v18; // rax
  struct cocos2d::CCMenu *v19; // rax
  __int64 v20; // rdi
  struct cocos2d::CCMenu *v21; // rbx
  __int64 v22; // rax
  struct cocos2d::CCSprite *v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rax
  struct cocos2d::CCSprite *v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // rax
  struct cocos2d::CCSprite *v29; // rdi
  __int64 v30; // rbx
  __int64 v31; // rax
  int v32; // ebx
  int v33; // r14d
  _DWORD *v34; // r15
  __int64 v35; // rax
  cocos2d::CCObject *v36; // rdi
  float v37; // xmm6_4
  float v38; // xmm7_4
  float v39; // xmm0_4
  __int64 v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rax
  _BYTE v43[8]; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v44[8]; // [rsp+38h] [rbp-41h] BYREF
  void *v45; // [rsp+E0h] [rbp+67h] BYREF
  float v46; // [rsp+E8h] [rbp+6Fh] BYREF
  float v47; // [rsp+ECh] [rbp+73h]
  char v48; // [rsp+F0h] [rbp+77h] BYREF
  void *v49; // [rsp+F8h] [rbp+7Fh]

  v3 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(a1, a2);
  cocos2d::CCTextureCache::addImage(v3, "GJ_PathSheet.png", 0);
  v6 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(v5, v4);
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(v6, "GJ_PathSheet.plist");
  *(_BYTE *)(a1 + 680) = 1;
  v7 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    v45 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v45);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v7 = qword_905FE0;
  }
  sub_2D6CB0(v7);
  sub_5ABA0(a1);
  LODWORD(v45) = -1358954496;
  result = cocos2d::CCLayerColor::initWithColor((cocos2d::CCLayerColor *)a1, (const struct cocos2d::_ccColor4B *)&v45);
  if ( result )
  {
    LOBYTE(v9) = 1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 920LL))(a1, v9);
    LOBYTE(v10) = 1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 992LL))(a1, v10);
    v12 = cocos2d::CCDirector::sharedDirector(v11);
    cocos2d::CCDirector::getWinSize(v12, &v46);
    v13 = cocos2d::CCLayer::create();
    *(_QWORD *)(a1 + 584) = v13;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 464LL))(a1, v13);
    v14 = cocos2d::CCSprite::createWithSpriteFrameName("pathSelectBG_001.png");
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
      *(_QWORD *)(a1 + 584),
      v14,
      0xFFFFFFFFLL);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v14 + 160LL))(v14);
    v15 = *(_QWORD *)v14;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v45, v46 * 0.5, v47 * 0.5);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v15 + 184))(v14, v16);
    *(_DWORD *)(a1 + 640) = -1;
    v17 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_closeBtn_001.png");
    *(_QWORD *)(a1 + 672) = v17;
    v18 = CCMenuItemSpriteExtra_create((int)v17, 0, a1, (__int64)GJPromoPopup_onClose);
    *((_DWORD *)v18 + 93) = 1070386381;
    v19 = cocos2d::CCMenu::create(v18, 0);
    *(_QWORD *)(a1 + 552) = v19;
    v20 = *(_QWORD *)v19;
    v21 = v19;
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)&v45,
      (float)((float)(v46 * 0.5) - 130.0) + 10.0,
      (float)((float)(v47 * 0.5) + 130.0) - 10.0);
    (*(void (__fastcall **)(struct cocos2d::CCMenu *, __int64))(v20 + 184))(v21, v22);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
      *(_QWORD *)(a1 + 584),
      *(_QWORD *)(a1 + 552),
      10);
    v23 = cocos2d::CCSprite::createWithSpriteFrameName("label_paths_001.png");
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
      *(_QWORD *)(a1 + 584),
      v23,
      20);
    v24 = *(_QWORD *)v23;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v45, v46 * 0.5, (float)(v47 * 0.5) + 29.0);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v24 + 184))(v23, v25);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v23 + 160LL))(v23);
    v26 = cocos2d::CCSprite::createWithSpriteFrameName("label_of_001.png");
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
      *(_QWORD *)(a1 + 584),
      v26,
      20);
    v27 = *(_QWORD *)v26;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v45, v46 * 0.5, v47 * 0.5);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v27 + 184))(v26, v28);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v26 + 160LL))(v26);
    v29 = cocos2d::CCSprite::createWithSpriteFrameName("label_power_001.png");
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
      *(_QWORD *)(a1 + 584),
      v29,
      20);
    v30 = *(_QWORD *)v29;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v45, v46 * 0.5, (float)(v47 * 0.5) - 34.0);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v30 + 184))(v29, v31);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v29 + 160LL))(v29);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v48, v46 * 0.5, v47 * 0.5);
    v32 = 0;
    while ( 1 )
    {
      v33 = v32 + 1;
      v34 = GJPathSprite_create(v32 + 1);
      GJPathSprite_updateState(v34);
      v49 = operator new(0x208u);
      v35 = CCMenuItemSpriteExtra_CCMenuItemSpriteExtra((__int64)v49);
      v36 = (cocos2d::CCObject *)v35;
      if ( !v35 )
        goto LABEL_9;
      if ( !(unsigned __int8)sub_47940(v35, (_DWORD)v34, 0, a1, (__int64)sub_38F400) )
        break;
      cocos2d::CCObject::autorelease(v36);
LABEL_10:
      (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)v36 + 64LL))(v36, (unsigned int)v33);
      (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(
        *(_QWORD *)(a1 + 552),
        v36);
      v37 = (float)(90.0 - (float)((float)v32 * 36.0)) * 0.0174532925199433;
      v38 = sinf(v37) * 100.0;
      v39 = cosf(v37) * 100.0;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v43, v39, v38);
      cocos2d::CCPoint::operator+(&v48, &v45, v40);
      v41 = *(_QWORD *)v36;
      cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(a1 + 552), v44, &v45);
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v41 + 184))(v36, v42);
      v32 = v33;
      if ( v33 >= 10 )
        return 1;
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v36 + 8LL))(v36, 1);
LABEL_9:
    v36 = 0;
    goto LABEL_10;
  }
  return result;
}
