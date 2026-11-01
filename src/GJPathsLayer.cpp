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
