#include <Geode/binding/LevelSettingsLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/21] Address: 0xc49d0
// Method: LevelSettingsLayer::onClose
__int64 __fastcall LevelSettingsLayer_onClose(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v3; // rdx

  v1 = a1[91]; /*0xc49d6*/
  if ( v1 ) /*0xc49e3*/
  {
    *(_QWORD *)(v1 + 608) = 0; /*0xc49e5*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a1[91] + 1032LL))(a1[91], 0); /*0xc49fc*/
  }
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 992LL))(a1, 0); /*0xc4a0a*/
  LOBYTE(v3) = 1; /*0xc4a13*/
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 520LL))(a1, v3);
}

// [2/21] Address: 0x4534e0
// Method: LevelSettingsLayer::~LevelSettingsLayer
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall LevelSettingsLayer__dtor_LevelSettingsLayer(_QWORD *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx
  cocos2d::CCObject *v5; // rcx
  cocos2d::CCObject *v6; // rcx

  *Block = &LevelSettingsLayer::`vftable'; /*0x4534f6*/
  Block[40] = &LevelSettingsLayer::`vftable'; /*0x453500*/
  Block[41] = &LevelSettingsLayer::`vftable'; /*0x45350e*/
  Block[42] = &LevelSettingsLayer::`vftable'; /*0x45351c*/
  Block[43] = &LevelSettingsLayer::`vftable'; /*0x45352a*/
  Block[44] = &LevelSettingsLayer::`vftable'; /*0x453538*/
  Block[51] = &LevelSettingsLayer::`vftable'; /*0x453546*/
  Block[54] = &LevelSettingsLayer::`vftable'; /*0x453554*/
  Block[68] = &LevelSettingsLayer::`vftable'; /*0x453562*/
  Block[83] = &LevelSettingsLayer::`vftable'; /*0x453570*/
  Block[84] = &LevelSettingsLayer::`vftable'; /*0x45357e*/
  Block[85] = &LevelSettingsLayer::`vftable'; /*0x45358c*/
  Block[86] = &LevelSettingsLayer::`vftable'; /*0x45359a*/
  Block[87] = &LevelSettingsLayer::`vftable'; /*0x4535a8*/
  v4 = (cocos2d::CCObject *)Block[102]; /*0x4535af*/
  if ( v4 ) /*0x4535b9*/
    cocos2d::CCObject::release(v4); /*0x4535bb*/
  v5 = (cocos2d::CCObject *)Block[104]; /*0x4535c1*/
  if ( v5 ) /*0x4535cb*/
    cocos2d::CCObject::release(v5); /*0x4535cd*/
  v6 = (cocos2d::CCObject *)Block[105]; /*0x4535d3*/
  if ( v6 ) /*0x4535dd*/
    cocos2d::CCObject::release(v6); /*0x4535df*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x4535e8*/
  if ( (a2 & 1) != 0 ) /*0x4535f2*/
    j_j_free(Block); /*0x4535fc*/
  return Block; /*0x453604*/
}

// [3/21] Address: 0x455fe0
// Method: LevelSettingsLayer::onGameplayMode
__int64 __fastcall LevelSettingsLayer_onGameplayMode(__int64 a1, __int64 a2)
{
  *(_BYTE *)(*(_QWORD *)(a1 + 816) + 341LL) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 4; /*0x456002*/
  return LevelSettingsLayer_updateGameplayModeButtons(a1); /*0x456008*/
}

// [4/21] Address: 0x456020
// Method: LevelSettingsLayer::updateGameplayModeButtons
__int64 __fastcall LevelSettingsLayer_updateGameplayModeButtons(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  unsigned __int8 v4; // si
  const char *v5; // rbx
  const char *v6; // rdx
  __int64 v7; // rdx

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 880) + 952LL))(*(_QWORD *)(a1 + 880)); /*0x456052*/
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 888) + 952LL))(*(_QWORD *)(a1 + 888)); /*0x456065*/
  v4 = *(_BYTE *)(*(_QWORD *)(a1 + 816) + 341LL); /*0x456068*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 880) + 936LL))(*(_QWORD *)(a1 + 880), v4); /*0x456084*/
  v5 = "GJ_button_01.png"; /*0x456087*/
  v6 = "GJ_button_01.png"; /*0x456091*/
  if ( v4 ) /*0x45609b*/
    v6 = "GJ_button_04.png"; /*0x45609b*/
  sub_41FC0(v2, v6); /*0x4560a2*/
  LOBYTE(v7) = v4 == 0; /*0x4560b1*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 888) + 936LL))(*(_QWORD *)(a1 + 888), v7); /*0x4560b7*/
  if ( !v4 ) /*0x4560c3*/
    v5 = "GJ_button_04.png"; /*0x4560c3*/
  return sub_41FC0(v3, v5); /*0x4560ca*/
}

// [5/21] Address: 0x4560f0
// Method: LevelSettingsLayer::onSettings
// Hidden C++ exception states: #wind=1
__int64 __fastcall LevelSettingsLayer_onSettings(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  cocos2d::CCObject *v3; // rbx
  void *v5; // [rsp+30h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 816); /*0x4560fa*/
  v5 = operator new(0x478u); /*0x45610b*/
  v2 = sub_4537C0(v5); /*0x456113*/
  v3 = (cocos2d::CCObject *)v2; /*0x456118*/
  if ( v2 ) /*0x45611e*/
  {
    if ( (unsigned __int8)sub_459060(v2, v1) ) /*0x456126*/
    {
      cocos2d::CCObject::autorelease(v3); /*0x456132*/
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v3 + 8LL))(v3, 1); /*0x456142*/
      v3 = 0; /*0x456145*/
    }
  }
  return (*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v3 + 1064LL))(v3);
}

// [6/21] Address: 0x4561b0
// Method: LevelSettingsLayer::onMode
__int64 __fastcall LevelSettingsLayer_onMode(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  v2 = (__int64 *)sub_4581A0( /*0x4561d7*/
                    *(_BYTE *)(*(_QWORD *)(a1 + 816) + 341LL) != 0,
                    *(unsigned int *)(*(_QWORD *)(a1 + 816) + 328LL));
  v3 = a1 + 680; /*0x4561df*/
  if ( !a1 ) /*0x4561e6*/
    v3 = 0; /*0x4561e6*/
  v4 = *v2; /*0x4561ea*/
  v2[85] = v3; /*0x4561ed*/
  return (*(__int64 (__fastcall **)(__int64 *))(v4 + 1064))(v2); /*0x4561fe*/
}

// [7/21] Address: 0x456210
// Method: LevelSettingsLayer::selectSettingClosed
// Hidden C++ exception states: #wind=1
__int64 __fastcall LevelSettingsLayer_selectSettingClosed(__int64 a1, __int64 a2)
{
  int v3; // edi
  __int64 result; // rax
  unsigned int v5; // esi
  const char *v6; // rbx
  cocos2d::CCSpriteFrameCache *v7; // rax
  struct cocos2d::CCSpriteFrame *v8; // rax
  const char *v9; // rbx
  cocos2d::CCSpriteFrameCache *v10; // rax
  struct cocos2d::CCSpriteFrame *v11; // rax
  _QWORD v12[3]; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-18h]

  v3 = 0; /*0x456236*/
  result = *(unsigned int *)(a2 + 676); /*0x456238*/
  v5 = *(_DWORD *)(a2 + 672); /*0x45623e*/
  if ( (unsigned int)result < 2 ) /*0x456246*/
  {
    SelectSettingLayer_frameForItem(v12, (unsigned int)result, v5); /*0x45630a*/
    v9 = (const char *)v12; /*0x456310*/
    if ( v13 > 0xF ) /*0x45631b*/
      v9 = (const char *)v12[0]; /*0x45631b*/
    v10 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x456321*/
    v11 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v10, v9); /*0x45632d*/
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSpriteFrame *))(**(_QWORD **)(a1 + 128) + 1008LL))( /*0x456347*/
      *(_QWORD *)(a1 + 128),
      v11);
    sub_3C310(v12); /*0x456350*/
    result = *(_QWORD *)(a1 + 136); /*0x456355*/
    *(_DWORD *)(result + 328) = v5; /*0x45635c*/
  }
  else if ( (_DWORD)result == 2 ) /*0x456254*/
  {
    if ( v5 ) /*0x45625a*/
    {
      if ( v5 != 1 ) /*0x45625f*/
      {
        switch ( v5 ) /*0x456264*/
        {
          case 2u: /*0x456264*/
            v3 = 2; /*0x45627e*/
            break;
          case 3u: /*0x456264*/
            v3 = 3; /*0x456277*/
            break;
          case 4u: /*0x456264*/
            v3 = 4; /*0x456270*/
            break;
        }
      }
    }
    else
    {
      v3 = 1; /*0x456285*/
    }
    SelectSettingLayer_frameForItem(v12, 2, v5); /*0x4562a9*/
    v6 = (const char *)v12; /*0x4562af*/
    if ( v13 > 0xF ) /*0x4562ba*/
      v6 = (const char *)v12[0]; /*0x4562ba*/
    v7 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x4562c0*/
    v8 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v7, v6); /*0x4562cc*/
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSpriteFrame *))(**(_QWORD **)(a1 + 120) + 1008LL))( /*0x4562e3*/
      *(_QWORD *)(a1 + 120),
      v8);
    sub_3C310(v12); /*0x4562ec*/
    result = *(_QWORD *)(a1 + 136); /*0x4562f1*/
    *(_DWORD *)(result + 332) = v3; /*0x4562f8*/
  }
  return result; /*0x456362*/
}

// [8/21] Address: 0x456390
// Method: LevelSettingsLayer::registerWithTouchDispatcher
void __fastcall LevelSettingsLayer_registerWithTouchDispatcher(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rax
  struct cocos2d::CCTouchDelegate *v6; // rbx
  int v7; // edi
  cocos2d::CCTouchDispatcher *v8; // rax

  v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x4563ad*/
  v4 = cocos2d::CCDirector::sharedDirector(v3); /*0x4563bc*/
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2); /*0x4563bf*/
  v6 = (struct cocos2d::CCTouchDelegate *)(a1 + 320); /*0x4563c8*/
  v7 = *(_DWORD *)(v5 + 128); /*0x4563cf*/
  if ( !a1 ) /*0x4563e4*/
    v6 = 0; /*0x4563e4*/
  v8 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 144LL))(v4); /*0x4563e8*/
  cocos2d::CCTouchDispatcher::addTargetedDelegate(v8, v6, v7 - 1, 1); /*0x45640c*/
}

// [9/21] Address: 0x456420
// Method: LevelSettingsLayer::createToggleButton
// Hidden C++ exception states: #wind=1
double __fastcall LevelSettingsLayer_createToggleButton(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        __int64 a5,
        __int64 a6)
{
  struct cocos2d::CCSprite *v9; // rbp
  struct cocos2d::CCSprite *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  const char *v14; // rcx
  struct cocos2d::CCLabelBMFont *v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rax
  float *v18; // rax
  __int64 v19; // rax
  _BYTE v21[8]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v22[8]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v23; // [rsp+30h] [rbp-58h]

  v23 = a2; /*0x456452*/
  v9 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_checkOn_001.png"); /*0x456474*/
  v10 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_checkOff_001.png"); /*0x456484*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v9 + 160LL))(v9); /*0x45649d*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v10 + 160LL))(v10); /*0x4564b5*/
  v11 = CCMenuItemToggler_create(v9, v10, a1, sub_456680); /*0x4564cd*/
  CCMenuItemToggler_toggle(v11, a4); /*0x4564d7*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a5 + 464LL))(a5, v11); /*0x4564ec*/
  v12 = *(_QWORD *)v11; /*0x4564ef*/
  v13 = cocos2d::CCNode::convertToNodeSpace(a5, v21, a6); /*0x4564fd*/
  (*(void (__fastcall **)(__int64, __int64))(v12 + 184))(v11, v13); /*0x456509*/
  *(_DWORD *)(*(_QWORD *)(v11 + 376) + 372LL) = 1069547520; /*0x456516*/
  *(_DWORD *)(*(_QWORD *)(v11 + 384) + 372LL) = 1069547520; /*0x456527*/
  CCMenuItemToggler_toggle(v11, *(unsigned __int8 *)(v11 + 392)); /*0x45653b*/
  if ( *(_QWORD *)(a2 + 16) ) /*0x456540*/
  {
    v14 = (const char *)a2; /*0x45654b*/
    if ( *(_QWORD *)(a2 + 24) > 0xFu ) /*0x456553*/
      v14 = *(const char **)a2; /*0x456555*/
    v15 = cocos2d::CCLabelBMFont::create(v14, (const char *)&qword_6FFF68); /*0x456565*/
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))( /*0x45657c*/
      *(_QWORD *)(a1 + 584),
      v15);
    v16 = *(_QWORD *)v15; /*0x45657f*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v21, 0.0, 0.5); /*0x456595*/
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v16 + 288))(v15, v17); /*0x4565a1*/
    v18 = (float *)(*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v9 + 320LL))(v9); /*0x4565ae*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v22, (float)((float)(*v18 * 0.5) * 0.80000001) + 6.0, 0.0); /*0x4565d4*/
    cocos2d::CCPoint::operator+(a6, v21, v19); /*0x4565e5*/
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, _BYTE *))(*(_QWORD *)v15 + 184LL))(v15, v21); /*0x4565f6*/
    if ( *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v15 + 320LL))(v15) > 110.0 ) /*0x456617*/
    {
      (*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v15 + 320LL))(v15); /*0x45661f*/
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v15 + 160LL))(v15); /*0x456632*/
    }
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v15 + 160LL))(v15); /*0x456646*/
  }
  return sub_3C310(a2); /*0x456655*/
}

// [10/21] Address: 0x4566a0
// Method: LevelSettingsLayer::onOptionToggle
char __fastcall LevelSettingsLayer_onOptionToggle(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rcx

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x4566af*/
  if ( v3 == 1 ) /*0x4566b5*/
  {
    v4 = *(_QWORD *)(a1 + 816); /*0x4566b7*/
    LOBYTE(v3) = *(_BYTE *)(v4 + 448) == 0; /*0x4566c5*/
    *(_BYTE *)(v4 + 448) = v3; /*0x4566c8*/
  }
  return v3; /*0x4566ce*/
}

// [11/21] Address: 0x4566e0
// Method: LevelSettingsLayer::textChanged
void __fastcall LevelSettingsLayer_textChanged(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  const char *v6; // rcx
  int v7; // ebx
  char *v8; // r8
  __int64 v9; // rax
  __int64 v10; // r8
  const char *v11; // rcx
  int v12; // ebx
  char *v13; // r8
  char *String[2]; // [rsp+38h] [rbp-30h] BYREF
  __int128 v15; // [rsp+48h] [rbp-20h]

  if ( !*(_BYTE *)(a1 + 352) ) /*0x4566f9*/
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2) == 1 ) /*0x456718*/
    {
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x45672f*/
      *(_OWORD *)String = 0; /*0x456738*/
      v5 = -1; /*0x45673d*/
      v15 = 0; /*0x456744*/
      do /*0x456753*/
        ++v5; /*0x456750*/
      while ( *(_BYTE *)(v4 + v5) ); /*0x456753*/
      sub_3C230(String); /*0x456762*/
      v6 = (const char *)String; /*0x45676d*/
      if ( *((_QWORD *)&v15 + 1) > 0xFu ) /*0x456772*/
        v6 = String[0]; /*0x456772*/
      v7 = atoi(v6); /*0x456783*/
      if ( *((_QWORD *)&v15 + 1) > 0xFu ) /*0x456789*/
      {
        v8 = String[0]; /*0x45678b*/
        if ( (unsigned __int64)(*((_QWORD *)&v15 + 1) + 1LL) >= 0x1000 ) /*0x45679d*/
        {
          v8 = (char *)*((_QWORD *)String[0] - 1); /*0x45679f*/
          if ( (unsigned __int64)(String[0] - v8 - 8) > 0x1F ) /*0x4567b2*/
            invoke_watson(0, 0, 0, 0, 0); /*0x4567c7*/
        }
        j_j_free(v8); /*0x4567d1*/
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 272) + 372LL) = v7; /*0x4567dd*/
    }
    else if ( (*(unsigned int (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2) == 2 ) /*0x4567f4*/
    {
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x45680b*/
      *(_OWORD *)String = 0; /*0x456814*/
      v10 = -1; /*0x456819*/
      v15 = 0; /*0x456820*/
      do /*0x456829*/
        ++v10; /*0x456826*/
      while ( *(_BYTE *)(v9 + v10) ); /*0x456829*/
      sub_3C230(String); /*0x456838*/
      v11 = (const char *)String; /*0x456843*/
      if ( *((_QWORD *)&v15 + 1) > 0xFu ) /*0x456848*/
        v11 = String[0]; /*0x456848*/
      v12 = atoi(v11); /*0x456859*/
      if ( *((_QWORD *)&v15 + 1) > 0xFu ) /*0x45685f*/
      {
        v13 = String[0]; /*0x456861*/
        if ( (unsigned __int64)(*((_QWORD *)&v15 + 1) + 1LL) >= 0x1000 ) /*0x456873*/
        {
          v13 = (char *)*((_QWORD *)String[0] - 1); /*0x456875*/
          if ( (unsigned __int64)(String[0] - v13 - 8) > 0x1F ) /*0x456888*/
            invoke_watson(0, 0, 0, 0, 0); /*0x45689d*/
        }
        j_j_free(v13); /*0x4568a7*/
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 272) + 376LL) = v12; /*0x4568b3*/
    }
  }
}

// [12/21] Address: 0x456a20
// Method: LevelSettingsLayer::onLiveEdit
__int64 __fastcall LevelSettingsLayer_onLiveEdit(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  unsigned int v5; // eax

  sub_4568E0(a1, 0); /*0x456a32*/
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 856) + 14968LL); /*0x456a41*/
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x456a4b*/
  return EditorUI_showLiveColorSelectForMode(v4, v5); /*0x456a53*/
}

// [13/21] Address: 0x456a70
// Method: LevelSettingsLayer::onShowPicker
__int64 __fastcall LevelSettingsLayer_onShowPicker(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // rcx

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 816) + 320LL); /*0x456a87*/
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x456a91*/
  v5 = sub_3624A0(v3, v4); /*0x456a99*/
  v6 = (_QWORD *)ColorSelectPopup_create(0, 0, v5); /*0x456aa5*/
  v7 = a1 + 664; /*0x456aac*/
  if ( !a1 ) /*0x456ab6*/
    v7 = 0; /*0x456ab6*/
  v6[138] = v7; /*0x456aba*/
  return (*(__int64 (__fastcall **)(_QWORD *))(*v6 + 1064LL))(v6); /*0x456ace*/
}

// [14/21] Address: 0x456b10
// Method: LevelSettingsLayer::colorSelectClosed
__int64 __fastcall LevelSettingsLayer_colorSelectClosed(__int64 a1)
{
  return LevelSettingsLayer_updateColorSprites(a1 - 664);
}

// [15/21] Address: 0x456b20
// Method: LevelSettingsLayer::updateColorSprites
__int64 __fastcall LevelSettingsLayer_updateColorSprites(_QWORD *a1)
{
  LevelSettingsLayer_updateColorSprite(a1, a1[90]); /*0x456b30*/
  LevelSettingsLayer_updateColorSprite(a1, a1[91]); /*0x456b3f*/
  LevelSettingsLayer_updateColorSprite(a1, a1[92]); /*0x456b4e*/
  LevelSettingsLayer_updateColorSprite(a1, a1[93]); /*0x456b5d*/
  LevelSettingsLayer_updateColorSprite(a1, a1[94]); /*0x456b6c*/
  return LevelSettingsLayer_updateColorSprite(a1, a1[95]); /*0x456b7b*/
}

// [16/21] Address: 0x456b90
// Method: LevelSettingsLayer::updateColorSprite
void __fastcall LevelSettingsLayer_updateColorSprite(__int64 a1, __int64 a2)
{
  int v4; // r8d
  unsigned int v5; // r9d
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdi
  bool v9; // zf
  __int16 *v10; // rdx
  __int64 v11; // rcx
  __int16 v12; // [rsp+30h] [rbp+8h] BYREF
  char v13; // [rsp+32h] [rbp+Ah]

  if ( *(_QWORD *)(a1 + 856) ) /*0x456b9a*/
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x456bbe*/
    v5 = v4; /*0x456bc1*/
    if ( v4 < 0 ) /*0x456bd0*/
      v4 = 0; /*0x456bd0*/
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 856) + 3592LL) + 320LL); /*0x456bdc*/
    if ( v4 > 1101 ) /*0x456be3*/
      v4 = 1101; /*0x456be3*/
    if ( !*(_QWORD *)(*(_QWORD *)(v6 + 736) + 8LL * v4) ) /*0x456bf6*/
    {
      v10 = (__int16 *)&unk_6FF4AC; /*0x456cd1*/
LABEL_17:
      (**(void (__fastcall ***)(__int64, __int16 *))(a2 + 320))(a2 + 320, v10); /*0x456cd8*/
      return; /*0x456ce2*/
    }
    v7 = sub_3624A0(v6, v5); /*0x456bff*/
    v8 = v7; /*0x456c04*/
    if ( v7 ) /*0x456c0a*/
    {
      sub_35F410(a2, *(unsigned int *)(v7 + 120), *(unsigned __int8 *)(v7 + 126)); /*0x456c17*/
      ColorChannelSprite_updateOpacity(a2); /*0x456c24*/
      sub_35F730(a2, *(unsigned __int8 *)(v8 + 84)); /*0x456c30*/
      v9 = *(_DWORD *)(v8 + 120) == 0; /*0x456c35*/
      v12 = *(_WORD *)(v8 + 72); /*0x456c3d*/
      v13 = *(_BYTE *)(v8 + 74); /*0x456c46*/
      if ( !v9 && !*(_BYTE *)(v8 + 126) ) /*0x456c4c*/
      {
        v12 = -22874; /*0x456c59*/
        v13 = -90; /*0x456c65*/
      }
      v10 = &v12; /*0x456c69*/
      goto LABEL_17; /*0x456c6e*/
    }
    (**(void (__fastcall ***)(__int64, __int16 *))(a2 + 320))(a2 + 320, &word_6FE460); /*0x456c81*/
    v11 = *(_QWORD *)(a2 + 600); /*0x456c83*/
    if ( v11 ) /*0x456c8d*/
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 336LL))(v11, 0); /*0x456c94*/
    ColorChannelSprite_updateOpacity(a2); /*0x456ca5*/
    if ( *(_QWORD *)(a2 + 616) ) /*0x456caa*/
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a2 + 616) + 336LL))(*(_QWORD *)(a2 + 616), 0); /*0x456cca*/
  }
}

// [17/21] Address: 0x456cf0
// Method: LevelSettingsLayer::onBGArt
__int64 __fastcall LevelSettingsLayer_onBGArt(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  v2 = (__int64 *)sub_4572A0(0, *(unsigned int *)(*(_QWORD *)(a1 + 816) + 352LL)); /*0x456d08*/
  v3 = a1 + 672; /*0x456d0f*/
  if ( !a1 ) /*0x456d19*/
    v3 = 0; /*0x456d19*/
  v4 = *v2; /*0x456d1d*/
  v2[87] = v3; /*0x456d20*/
  return (*(__int64 (__fastcall **)(__int64 *))(v4 + 1064))(v2); /*0x456d31*/
}

// [18/21] Address: 0x456d40
// Method: LevelSettingsLayer::onGArt
__int64 __fastcall LevelSettingsLayer_onGArt(__int64 a1)
{
  __int64 v2; // rax
  __int64 *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax

  v2 = sub_4572A0(1, *(unsigned int *)(*(_QWORD *)(a1 + 816) + 356LL)); /*0x456d5f*/
  v3 = (__int64 *)v2; /*0x456d64*/
  if ( *(_QWORD *)(v2 + 672) ) /*0x456d67*/
  {
    *(_DWORD *)(v2 + 684) = *(_DWORD *)(*(_QWORD *)(a1 + 816) + 432LL); /*0x456d84*/
    SelectArtLayer_onSelectCustom(v2, 0); /*0x456d8b*/
  }
  v4 = a1 + 672; /*0x456d92*/
  if ( !a1 ) /*0x456d9c*/
    v4 = 0; /*0x456d9c*/
  v5 = *v3; /*0x456da0*/
  v3[87] = v4; /*0x456da3*/
  return (*(__int64 (__fastcall **)(__int64 *))(v5 + 1064))(v3);
}

// [19/21] Address: 0x456f30
// Method: LevelSettingsLayer::selectArtClosed
// Hidden C++ exception states: #wind=3
void __fastcall LevelSettingsLayer_selectArtClosed(__int64 a1, int *a2)
{
  int v4; // eax
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdi
  cocos2d::CCString *v10; // rax
  const char *v11; // rbx
  cocos2d::CCSpriteFrameCache *v12; // rax
  struct cocos2d::CCSpriteFrame *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rdi
  cocos2d::CCString *v20; // rax
  const char *CString; // rbx
  cocos2d::CCSpriteFrameCache *v22; // rax
  struct cocos2d::CCSpriteFrame *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rdi
  cocos2d::CCString *v30; // rax
  const char *v31; // rbx
  cocos2d::CCSpriteFrameCache *v32; // rax
  struct cocos2d::CCSpriteFrame *v33; // rax
  __int64 v34; // rcx
  void *v35; // [rsp+38h] [rbp+10h]
  void *v36; // [rsp+38h] [rbp+10h]
  void *v37; // [rsp+38h] [rbp+10h]

  v4 = a2[172]; /*0x456f4a*/
  if ( v4 ) /*0x456f52*/
  {
    if ( v4 == 1 ) /*0x45704f*/
    {
      v15 = *(_QWORD *)(a1 + 184); /*0x457055*/
      if ( v15 ) /*0x45705f*/
      {
        v16 = *(_QWORD *)(v15 + 4400); /*0x457061*/
        if ( v16 ) /*0x45706b*/
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 512LL))(v16); /*0x457070*/
          *(_QWORD *)(v15 + 4400) = 0; /*0x457078*/
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v15 + 4408) + 512LL))(*(_QWORD *)(v15 + 4408)); /*0x457089*/
          *(_QWORD *)(v15 + 4408) = 0; /*0x45708f*/
        }
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 144) + 356LL) = a2[170]; /*0x4570a3*/
      *(_DWORD *)(*(_QWORD *)(a1 + 144) + 432LL) = a2[171]; /*0x4570b6*/
      v17 = qword_905FD0; /*0x4570bc*/
      if ( !qword_905FD0 ) /*0x4570c6*/
      {
        v36 = operator new(0x6E8u); /*0x4570d2*/
        qword_905FD0 = sub_2723A0(v36); /*0x4570e0*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4570f1*/
        v17 = qword_905FD0; /*0x4570f3*/
      }
      GameManager_loadGround(v17, a2[170]); /*0x457100*/
      v18 = **(_QWORD **)(a1 + 112); /*0x457109*/
      v19 = *(_QWORD *)(a1 + 112); /*0x45710c*/
      v20 = cocos2d::CCString::createWithFormat("gIcon_%02d_001.png", a2[170]); /*0x45711c*/
      CString = cocos2d::CCString::getCString(v20); /*0x45712b*/
      v22 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x45712e*/
      v23 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v22, CString); /*0x45713a*/
      (*(void (__fastcall **)(__int64, struct cocos2d::CCSpriteFrame *))(v18 + 1008))(v19, v23); /*0x457146*/
      v24 = *(_QWORD *)(a1 + 184); /*0x45714c*/
      if ( v24 ) /*0x457156*/
        GJBaseGameLayer_createGroundLayer( /*0x457170*/
          v24,
          *(_DWORD *)(*(_QWORD *)(a1 + 144) + 356LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 144) + 432LL));
    }
    else if ( v4 == 2 ) /*0x45717d*/
    {
      v25 = *(_QWORD *)(a1 + 184); /*0x457183*/
      if ( v25 ) /*0x45718d*/
      {
        v26 = *(_QWORD *)(v25 + 4416); /*0x45718f*/
        if ( v26 ) /*0x457199*/
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 512LL))(v26); /*0x45719e*/
          *(_QWORD *)(v25 + 4416) = 0; /*0x4571a6*/
        }
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 144) + 364LL) = a2[170]; /*0x4571ba*/
      v27 = qword_905FD0; /*0x4571c0*/
      if ( !qword_905FD0 ) /*0x4571ca*/
      {
        v37 = operator new(0x6E8u); /*0x4571d6*/
        qword_905FD0 = sub_2723A0(v37); /*0x4571e4*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4571f5*/
        v27 = qword_905FD0; /*0x4571f7*/
      }
      GameManager_loadMiddleground(v27, a2[170]); /*0x457204*/
      v28 = **(_QWORD **)(a1 + 120); /*0x45720d*/
      v29 = *(_QWORD *)(a1 + 120); /*0x457210*/
      v30 = cocos2d::CCString::createWithFormat("mgIcon_%02d_001.png", a2[170]); /*0x457220*/
      v31 = cocos2d::CCString::getCString(v30); /*0x45722f*/
      v32 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x457232*/
      v33 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v32, v31); /*0x45723e*/
      (*(void (__fastcall **)(__int64, struct cocos2d::CCSpriteFrame *))(v28 + 1008))(v29, v33); /*0x45724a*/
      v34 = *(_QWORD *)(a1 + 184); /*0x457250*/
      if ( v34 ) /*0x45725a*/
        GJBaseGameLayer_createMiddleground(v34, *(_DWORD *)(*(_QWORD *)(a1 + 144) + 364LL)); /*0x457269*/
    }
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 184); /*0x456f58*/
    if ( v5 ) /*0x456f62*/
    {
      v6 = *(_QWORD *)(v5 + 4384); /*0x456f64*/
      if ( v6 ) /*0x456f6e*/
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 512LL))(v6); /*0x456f73*/
        *(_QWORD *)(v5 + 4384) = 0; /*0x456f7b*/
      }
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 144) + 352LL) = a2[170]; /*0x456f8f*/
    v7 = qword_905FD0; /*0x456f95*/
    if ( !qword_905FD0 ) /*0x456f9f*/
    {
      v35 = operator new(0x6E8u); /*0x456fab*/
      qword_905FD0 = sub_2723A0(v35); /*0x456fb9*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x456fca*/
      v7 = qword_905FD0; /*0x456fcc*/
    }
    GameManager_loadBackground(v7, a2[170]); /*0x456fd9*/
    v8 = **(_QWORD **)(a1 + 104); /*0x456fe2*/
    v9 = *(_QWORD *)(a1 + 104); /*0x456fe5*/
    v10 = cocos2d::CCString::createWithFormat("bgIcon_%02d_001.png", a2[170]); /*0x456ff5*/
    v11 = cocos2d::CCString::getCString(v10); /*0x457004*/
    v12 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x457007*/
    v13 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v12, v11); /*0x457013*/
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSpriteFrame *))(v8 + 1008))(v9, v13); /*0x45701f*/
    v14 = *(_QWORD *)(a1 + 184); /*0x457025*/
    if ( v14 ) /*0x45702f*/
      GJBaseGameLayer_createBackground(v14, *(_DWORD *)(*(_QWORD *)(a1 + 144) + 352LL)); /*0x457042*/
  }
}

// [20/21] Address: 0x457290
// Method: LevelSettingsLayer::keyBackClicked
__int64 __fastcall LevelSettingsLayer_keyBackClicked(__int64 a1)
{
  return sub_4568E0(a1 - 336, 0);
}
