#include <Geode/binding/VideoOptionsLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/7] Address: 0x4c6720
// Method: VideoOptionsLayer::~VideoOptionsLayer
_QWORD *__fastcall VideoOptionsLayer__dtor_VideoOptionsLayer(_QWORD *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *Block = &VideoOptionsLayer::`vftable'; /*0x4c6736*/
  Block[40] = &VideoOptionsLayer::`vftable'; /*0x4c6740*/
  Block[41] = &VideoOptionsLayer::`vftable'; /*0x4c674e*/
  Block[42] = &VideoOptionsLayer::`vftable'; /*0x4c675c*/
  Block[43] = &VideoOptionsLayer::`vftable'; /*0x4c676a*/
  Block[44] = &VideoOptionsLayer::`vftable'; /*0x4c6778*/
  Block[51] = &VideoOptionsLayer::`vftable'; /*0x4c6786*/
  Block[54] = &VideoOptionsLayer::`vftable'; /*0x4c6794*/
  Block[68] = &VideoOptionsLayer::`vftable'; /*0x4c67a2*/
  v4 = (cocos2d::CCObject *)Block[89]; /*0x4c67a9*/
  if ( v4 ) /*0x4c67b3*/
    cocos2d::CCObject::release(v4); /*0x4c67b5*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x4c67be*/
  if ( (a2 & 1) != 0 ) /*0x4c67c8*/
    j_j_free(Block); /*0x4c67d2*/
  return Block; /*0x4c67da*/
}

// [3/7] Address: 0x4c9a20
// Method: VideoOptionsLayer::onAdvanced
// Hidden C++ exception states: #wind=1
__int64 VideoOptionsLayer_onAdvanced()
{
  _QWORD *v0; // rbx
  __int64 (__fastcall *v1)(__int64); // rdx

  v0 = operator new(0x2D8u); /*0x4c9a34*/
  FLAlertLayer_FLAlertLayer((__int64)v0); /*0x4c9a3f*/
  *v0 = &MoreVideoOptionsLayer::`vftable'; /*0x4c9a4b*/
  v0[40] = &MoreVideoOptionsLayer::`vftable'; /*0x4c9a55*/
  v0[41] = &MoreVideoOptionsLayer::`vftable'; /*0x4c9a63*/
  v0[42] = &MoreVideoOptionsLayer::`vftable'; /*0x4c9a71*/
  v0[43] = &MoreVideoOptionsLayer::`vftable'; /*0x4c9a7f*/
  v0[44] = &MoreVideoOptionsLayer::`vftable'; /*0x4c9a8d*/
  v0[51] = &MoreVideoOptionsLayer::`vftable'; /*0x4c9a9b*/
  v0[54] = &MoreVideoOptionsLayer::`vftable'; /*0x4c9aa9*/
  v0[68] = &MoreVideoOptionsLayer::`vftable'; /*0x4c9ab7*/
  *((_DWORD *)v0 + 166) = -1; /*0x4c9abe*/
  *(_QWORD *)((char *)v0 + 668) = 0; /*0x4c9aca*/
  v0[89] = 0; /*0x4c9ad1*/
  v0[90] = 0; /*0x4c9ad8*/
  if ( (unsigned __int8)MoreVideoOptionsLayer_init(v0) ) /*0x4c9af5*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v0); /*0x4c9b05*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v0 + 8LL))(v0, 1); /*0x4c9b15*/
    v0 = 0; /*0x4c9b18*/
  }
  v1 = *(__int64 (__fastcall **)(__int64))(*v0 + 1064LL); /*0x4c9b1e*/
  if ( v1 == FLAlertLayer_show ) /*0x4c9b32*/
    return FLAlertLayer_show((__int64)v0); /*0x4c9b3e*/
  else
    return v1((__int64)v0); /*0x4c9b4d*/
}

// [4/7] Address: 0x4c9bd0
// Method: VideoOptionsLayer::updateTextureQuality
void __fastcall VideoOptionsLayer_updateTextureQuality(__int64 a1, int a2)
{
  const char *v3; // rdx
  int v4; // edx
  int v5; // edx

  if ( a2 > 3 ) /*0x4c9bdc*/
  {
    *(_DWORD *)(a1 + 704) = 0; /*0x4c9bde*/
LABEL_3:
    v3 = "Auto"; /*0x4c9be8*/
    goto LABEL_4; /*0x4c9be8*/
  }
  if ( a2 < 0 ) /*0x4c9c2a*/
  {
    *(_DWORD *)(a1 + 704) = 3; /*0x4c9c2c*/
    v3 = "High"; /*0x4c9c36*/
    goto LABEL_4; /*0x4c9c3d*/
  }
  *(_DWORD *)(a1 + 704) = a2; /*0x4c9c3f*/
  if ( !a2 ) /*0x4c9c47*/
    goto LABEL_3; /*0x4c9c47*/
  v4 = a2 - 1; /*0x4c9c49*/
  if ( v4 ) /*0x4c9c4c*/
  {
    v5 = v4 - 1; /*0x4c9c4e*/
    if ( v5 ) /*0x4c9c51*/
    {
      if ( v5 != 1 ) /*0x4c9c56*/
        goto LABEL_5; /*0x4c9c56*/
      v3 = "High"; /*0x4c9c58*/
    }
    else
    {
      v3 = (const char *)&dword_755578; /*0x4c9c61*/
    }
  }
  else
  {
    v3 = "Low"; /*0x4c9c6a*/
  }
LABEL_4:
  (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 696) + 360LL))(*(_QWORD *)(a1 + 696) + 360LL, v3); /*0x4c9bef*/
LABEL_5:
  cocos2d::CCLabelBMFont::limitLabelWidth(*(cocos2d::CCLabelBMFont **)(a1 + 696), 100.0, 0.75, 0.0); /*0x4c9c02*/
}

// [5/7] Address: 0x4c9ff0
// Method: VideoOptionsLayer::onApply
// Hidden C++ exception states: #wind=12
char __fastcall VideoOptionsLayer_onApply(__int64 a1)
{
  cocos2d::CCString *v2; // rax
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rcx
  char GameVariable; // al
  char v7; // cl
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  cocos2d::CCObject *v12; // rbx
  bool v14; // r15
  char v15; // r12
  char v16; // r13
  const struct cocos2d::CCSize *v17; // rax
  const struct cocos2d::CCSize *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  struct cocos2d::CCScene *v23; // rsi
  __int64 v24; // rcx
  const struct cocos2d::CCSize *v25; // rax
  const struct cocos2d::CCSize *v26; // rbx
  char *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rbx
  struct cocos2d::CCFiniteTimeAction *v31; // rax
  struct cocos2d::CCAction *v32; // rax
  __int64 v33; // rcx
  cocos2d::CCDirector *v34; // rax
  char v35[8]; // [rsp+50h] [rbp-39h] BYREF
  char v36[8]; // [rsp+58h] [rbp-31h] BYREF
  char *v37; // [rsp+60h] [rbp-29h] BYREF
  __int128 v38; // [rsp+68h] [rbp-21h] BYREF
  __int64 v39; // [rsp+78h] [rbp-11h]
  __int64 v40; // [rsp+80h] [rbp-9h]
  char v41[88]; // [rsp+88h] [rbp-1h] BYREF
  void *v42; // [rsp+F0h] [rbp+67h]
  void *v43; // [rsp+F0h] [rbp+67h]
  void *v44; // [rsp+F0h] [rbp+67h]
  void *v45; // [rsp+F0h] [rbp+67h]
  void *v46; // [rsp+F0h] [rbp+67h]
  void *v47; // [rsp+F0h] [rbp+67h]
  char v48; // [rsp+F0h] [rbp+67h]
  int v49; // [rsp+100h] [rbp+77h]
  char v50; // [rsp+108h] [rbp+7Fh] BYREF

  v2 = cocos2d::CCArray::stringAtIndex(*(cocos2d::CCArray **)(a1 + 712), *(_DWORD *)(a1 + 756)); /*0x4ca01c*/
  v4 = cocos2d::CCString::intValue(v2); /*0x4ca02b*/
  if ( !qword_905FD0 ) /*0x4ca035*/
  {
    v42 = operator new(0x6E8u); /*0x4ca041*/
    qword_905FD0 = sub_2723A0(v42); /*0x4ca04e*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4ca05f*/
  }
  GameManager_resolutionForKey(v3, (cocos2d::CCSize *)&v50, v4); /*0x4ca068*/
  v5 = qword_905FD0; /*0x4ca06d*/
  if ( !qword_905FD0 ) /*0x4ca077*/
  {
    v43 = operator new(0x6E8u); /*0x4ca083*/
    qword_905FD0 = sub_2723A0(v43); /*0x4ca090*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4ca0a1*/
    v5 = qword_905FD0; /*0x4ca0a3*/
  }
  GameVariable = GameManager_getGameVariable(v5, "0025"); /*0x4ca0b1*/
  v7 = *(_BYTE *)(a1 + 752); /*0x4ca0b6*/
  if ( GameVariable == v7 ) /*0x4ca0bf*/
    goto LABEL_18; /*0x4ca0bf*/
  if ( !v7 ) /*0x4ca0c7*/
    goto LABEL_13; /*0x4ca0c7*/
  v8 = qword_905FD0; /*0x4ca0cd*/
  if ( !qword_905FD0 ) /*0x4ca0d7*/
  {
    v44 = operator new(0x6E8u); /*0x4ca0e3*/
    qword_905FD0 = sub_2723A0(v44); /*0x4ca0f0*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4ca101*/
    v8 = qword_905FD0; /*0x4ca103*/
  }
  if ( GameManager_getGameVariable(v8, "0170") != *(_BYTE *)(a1 + 753) ) /*0x4ca11c*/
    goto LABEL_18; /*0x4ca11c*/
  v9 = qword_905FD0; /*0x4ca122*/
  if ( !qword_905FD0 ) /*0x4ca12c*/
  {
    v45 = operator new(0x6E8u); /*0x4ca138*/
    qword_905FD0 = sub_2723A0(v45); /*0x4ca145*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4ca156*/
    v9 = qword_905FD0; /*0x4ca158*/
  }
  if ( GameManager_getGameVariable(v9, "0175") != *(_BYTE *)(a1 + 754) ) /*0x4ca171*/
  {
LABEL_18:
    v10 = qword_905FD0; /*0x4ca2a3*/
  }
  else
  {
LABEL_13:
    v10 = qword_905FD0; /*0x4ca177*/
    if ( !qword_905FD0 ) /*0x4ca181*/
    {
      v46 = operator new(0x6E8u); /*0x4ca18d*/
      qword_905FD0 = sub_2723A0(v46); /*0x4ca19a*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4ca1ab*/
      v10 = qword_905FD0; /*0x4ca1ad*/
    }
    if ( *(_DWORD *)(v10 + 1088) == v4 && *(_DWORD *)(v10 + 1092) == *(_DWORD *)(a1 + 704) ) /*0x4ca1cc*/
    {
      v38 = 0; /*0x4ca1d5*/
      *(_QWORD *)&v38 = sub_3C460(32); /*0x4ca1ed*/
      v39 = 26; /*0x4ca1f1*/
      v40 = 31; /*0x4ca1f9*/
      strcpy((char *)v38, "No changes have been made."); /*0x4ca208*/
      v11 = sub_3E4F0(v41, &v38); /*0x4ca237*/
      v12 = FLAlertLayer_create_0(0, (int)"Graphics", v11, (__int64)"OK", 0, 1132068864, 0, 0, 1065353216); /*0x4ca283*/
      sub_3C310(&v38); /*0x4ca28a*/
      return (*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v12 + 1064LL))(v12); /*0x4ca29e*/
    }
  }
  if ( !v10 ) /*0x4ca2ad*/
  {
    v47 = operator new(0x6E8u); /*0x4ca2b9*/
    qword_905FD0 = sub_2723A0(v47); /*0x4ca2c6*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4ca2d7*/
    v10 = qword_905FD0; /*0x4ca2d9*/
  }
  v14 = *(_DWORD *)(v10 + 1088) != v4; /*0x4ca2e6*/
  *(_DWORD *)(v10 + 1088) = v4; /*0x4ca2ea*/
  *(_DWORD *)(v10 + 1092) = *(_DWORD *)(a1 + 704); /*0x4ca2f6*/
  v15 = *(_BYTE *)(a1 + 754); /*0x4ca2fc*/
  v16 = *(_BYTE *)(a1 + 753); /*0x4ca304*/
  v48 = *(_BYTE *)(a1 + 752); /*0x4ca313*/
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)v35, (const struct cocos2d::CCSize *)&v50); /*0x4ca31e*/
  v18 = v17; /*0x4ca324*/
  v49 = *(_DWORD *)(a1 + 704); /*0x4ca32d*/
  v23 = (struct cocos2d::CCScene *)cocos2d::CCScene::create(v20, v19, v21, v22); /*0x4ca336*/
  *(_QWORD *)(cocos2d::CCApplication::sharedApplication(v24) + 232) = v23; /*0x4ca33f*/
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)v36, v18); /*0x4ca34d*/
  v26 = v25; /*0x4ca353*/
  v27 = (char *)operator new(0x1A8u); /*0x4ca360*/
  v37 = v27; /*0x4ca363*/
  cocos2d::CCLayer::CCLayer((cocos2d::CCLayer *)v27); /*0x4ca36a*/
  *(_QWORD *)v27 = &GraphicsReloadLayer::`vftable'; /*0x4ca378*/
  *((_QWORD *)v27 + 40) = &GraphicsReloadLayer::`vftable'; /*0x4ca382*/
  *((_QWORD *)v27 + 41) = &GraphicsReloadLayer::`vftable'; /*0x4ca390*/
  *((_QWORD *)v27 + 42) = &GraphicsReloadLayer::`vftable'; /*0x4ca39e*/
  *((_QWORD *)v27 + 43) = &GraphicsReloadLayer::`vftable'; /*0x4ca3ac*/
  *((_QWORD *)v27 + 44) = &GraphicsReloadLayer::`vftable'; /*0x4ca3ba*/
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)(v27 + 412)); /*0x4ca3c8*/
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v37, v26); /*0x4ca3d6*/
  v29 = v28; /*0x4ca3dc*/
  if ( cocos2d::CCLayer::init((cocos2d::CCLayer *)v27) ) /*0x4ca3e2*/
  {
    *((_DWORD *)v27 + 102) = v49; /*0x4ca3ef*/
    cocos2d::CCSize::operator=(v27 + 412, v29); /*0x4ca3ff*/
    v27[420] = v48; /*0x4ca409*/
    v27[421] = v16; /*0x4ca40f*/
    v27[422] = v15; /*0x4ca416*/
    v27[423] = v14; /*0x4ca41d*/
    v30 = cocos2d::CCCallFunc::create(v27, sub_4D1D50); /*0x4ca434*/
    v31 = cocos2d::CCDelayTime::create(0.1); /*0x4ca43f*/
    v32 = cocos2d::CCSequence::create(v31, v30, 0); /*0x4ca44e*/
    cocos2d::CCNode::runAction((cocos2d::CCNode *)v27, v32); /*0x4ca45a*/
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v27); /*0x4ca463*/
  }
  else
  {
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v27 + 8LL))(v27, 1); /*0x4ca476*/
    v27 = 0; /*0x4ca479*/
  }
  (*(void (__fastcall **)(struct cocos2d::CCScene *, char *))(*(_QWORD *)v23 + 464LL))(v23, v27); /*0x4ca484*/
  v34 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v33); /*0x4ca48a*/
  return cocos2d::CCDirector::replaceScene(v34, v23); /*0x4ca49c*/
}

// [6/7] Address: 0x4ca550
// Method: VideoOptionsLayer::keyBackClicked
__int64 __fastcall VideoOptionsLayer_keyBackClicked(__int64 a1)
{
  return sub_4CA4C0(a1 - 336, 0);
}

// [7/7] Address: 0x4ca560
// Method: VideoOptionsLayer::createToggleButton
// Hidden C++ exception states: #wind=1
cocos2d::CCMenuItem *__fastcall VideoOptionsLayer_createToggleButton(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        __int64 a5,
        __int64 a6,
        float a7,
        float a8,
        int a9,
        cocos2d::CCArray *a10)
{
  struct cocos2d::CCSprite *v14; // rbx
  cocos2d::CCMenuItem *v15; // r12
  __int64 v16; // rbx
  __int64 v17; // rax
  const char *v18; // rcx
  struct cocos2d::CCObject *v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rax
  float *v22; // rax
  __int64 v23; // rax
  __int64 v25; // [rsp+20h] [rbp-78h] BYREF
  __int64 v26[2]; // [rsp+28h] [rbp-70h] BYREF

  v26[1] = a2; /*0x4ca592*/
  v25 = a6; /*0x4ca5a7*/
  v26[0] = (__int64)cocos2d::CCSprite::createWithSpriteFrameName("GJ_checkOn_001.png"); /*0x4ca5cd*/
  v14 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_checkOff_001.png"); /*0x4ca5df*/
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v26[0] + 160LL))(v26[0]); /*0x4ca5f3*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v14 + 160LL))(v14); /*0x4ca606*/
  v15 = CCMenuItemToggler_create((__int64)v14, v26[0], a1, a3); /*0x4ca61a*/
  CCMenuItemToggler_toggle((__int64)v15, a4); /*0x4ca624*/
  (*(void (__fastcall **)(__int64, cocos2d::CCMenuItem *))(*(_QWORD *)a5 + 464LL))(a5, v15); /*0x4ca639*/
  v16 = *(_QWORD *)v15; /*0x4ca63c*/
  cocos2d::CCNode::convertToNodeSpace(a5, &v25, a6); /*0x4ca650*/
  (*(void (__fastcall **)(cocos2d::CCMenuItem *, __int64))(v16 + 184))(v15, v17); /*0x4ca65c*/
  *(_DWORD *)(*((_QWORD *)v15 + 47) + 372LL) = 1069547520; /*0x4ca66a*/
  *(_DWORD *)(*((_QWORD *)v15 + 48) + 372LL) = 1069547520; /*0x4ca67c*/
  CCMenuItemToggler_toggle((__int64)v15, *((unsigned __int8 *)v15 + 392)); /*0x4ca692*/
  v18 = (const char *)a2; /*0x4ca697*/
  if ( *(_QWORD *)(a2 + 24) > 0xFu ) /*0x4ca69f*/
    v18 = *(const char **)a2; /*0x4ca6a1*/
  v19 = cocos2d::CCLabelBMFont::create(v18, (const char *)&qword_6FFF68); /*0x4ca6b1*/
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *))(**(_QWORD **)(a1 + 584) + 464LL))( /*0x4ca6c8*/
    *(_QWORD *)(a1 + 584),
    v19);
  if ( a10 ) /*0x4ca6ce*/
    cocos2d::CCArray::addObject(a10, v19); /*0x4ca6d6*/
  v20 = *(_QWORD *)v19; /*0x4ca6dc*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v25, 0.0, 0.5); /*0x4ca6ef*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v20 + 288))(v19, v21); /*0x4ca6fb*/
  v22 = (float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26[0] + 320LL))(v26[0]); /*0x4ca709*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v25, (float)((float)(*v22 * 0.5) * a7) + 8.0, 0.0); /*0x4ca72f*/
  cocos2d::CCPoint::operator+(a6, v26, v23); /*0x4ca740*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64 *))(*(_QWORD *)v19 + 184LL))(v19, v26); /*0x4ca751*/
  cocos2d::CCLabelBMFont::limitLabelWidth(v19, a8, 0.0, 0.0); /*0x4ca769*/
  sub_3C310(a2); /*0x4ca773*/
  return v15; /*0x4ca77b*/
}

// Address: 0x4c86c0
// Method: VideoOptionsLayer::init
// Hidden C++ exception states: #wind=25
bool __fastcall VideoOptionsLayer_init(__int64 a1)
{
  bool result; // al
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  cocos2d::CCObject *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 *v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  struct cocos2d::CCLabelBMFont *v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // r14d
  unsigned int v30; // edi
  cocos2d::CCArray *v31; // rbx
  struct cocos2d::CCObject *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  cocos2d::CCArray *v37; // rbx
  struct cocos2d::CCObject *v38; // rax
  __in... [25873 chars total]
