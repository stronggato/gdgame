#include <Geode/binding/TutorialLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/6] Address: 0x66a230
// Method: TutorialLayer::~TutorialLayer
_QWORD *__fastcall TutorialLayer__dtor_TutorialLayer(_QWORD *Block, char a2)
{
  *Block = &TutorialLayer::`vftable'; /*0x66a243*/
  Block[40] = &TutorialLayer::`vftable'; /*0x66a250*/
  Block[41] = &TutorialLayer::`vftable'; /*0x66a25e*/
  Block[42] = &TutorialLayer::`vftable'; /*0x66a26c*/
  Block[43] = &TutorialLayer::`vftable'; /*0x66a27a*/
  Block[44] = &TutorialLayer::`vftable'; /*0x66a288*/
  Block[51] = &TutorialLayer::`vftable'; /*0x66a296*/
  Block[54] = &TutorialLayer::`vftable'; /*0x66a2a4*/
  Block[68] = &TutorialLayer::`vftable'; /*0x66a2b2*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x66a2b9*/
  if ( (a2 & 1) != 0 ) /*0x66a2c1*/
    j_j_free(Block); /*0x66a2cb*/
  return Block; /*0x66a2d0*/
}

// [2/6] Address: 0x66a400
// Method: TutorialLayer::init
// Hidden C++ exception states: #wind=2
bool __fastcall TutorialLayer_init(__int64 a1)
{
  bool result; // al
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 *v10; // rdi
  __int64 v11; // rdx
  void (__fastcall *v12)(__int64 *, __int64); // r8
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  struct cocos2d::CCLabelBMFont *v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rbx
  struct cocos2d::CCSprite *v21; // rax
  struct cocos2d::CCMenuItem *v22; // rax
  struct cocos2d::CCMenu *v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  cocos2d::CCObject *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  cocos2d::CCObject *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rbx
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rbx
  __int64 v39; // rax
  _BYTE v40[32]; // [rsp+50h] [rbp-58h] BYREF
  void *v41; // [rsp+B8h] [rbp+10h] BYREF
  float v42; // [rsp+C0h] [rbp+18h] BYREF
  float v43; // [rsp+C4h] [rbp+1Ch]
  char v44; // [rsp+C8h] [rbp+20h] BYREF

  LODWORD(v41) = -1778384896; /*0x66a436*/
  result = cocos2d::CCLayerColor::initWithColor((cocos2d::CCLayerColor *)a1, (const struct cocos2d::_ccColor4B *)&v41); /*0x66a43e*/
  if ( result ) /*0x66a446*/
  {
    LOBYTE(v3) = 1; /*0x66a44f*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 920LL))(a1, v3); /*0x66a454*/
    LOBYTE(v4) = 1; /*0x66a45d*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 992LL))(a1, v4); /*0x66a462*/
    v6 = cocos2d::CCDirector::sharedDirector(v5); /*0x66a468*/
    cocos2d::CCDirector::getWinSize(v6, &v42); /*0x66a479*/
    v7 = cocos2d::CCLayer::create(); /*0x66a47f*/
    *(_QWORD *)(a1 + 584) = v7; /*0x66a485*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 464LL))(a1, v7); /*0x66a49c*/
    v8 = cocos2d::CCLayer::create(); /*0x66a49f*/
    *(_QWORD *)(a1 + 664) = v8; /*0x66a4a5*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 584) + 464LL))(*(_QWORD *)(a1 + 584), v8); /*0x66a4c0*/
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v40, 0.0, 0.0, 80.0, 80.0); /*0x66a4dc*/
    v10 = (__int64 *)cocos2d::extension::CCScale9Sprite::create("GJ_square01.png", v9); /*0x66a4f2*/
    v11 = v10[40]; /*0x66a4fc*/
    v12 = *(void (__fastcall **)(__int64 *, __int64))(v11 + 40); /*0x66a4ff*/
    LOBYTE(v11) = -1; /*0x66a503*/
    v12(v10 + 40, v11); /*0x66a505*/
    v13 = *v10; /*0x66a508*/
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v41, 420.0, 260.0); /*0x66a523*/
    (*(void (__fastcall **)(__int64 *, __int64))(v13 + 312))(v10, v14); /*0x66a52f*/
    (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))( /*0x66a548*/
      *(_QWORD *)(a1 + 584),
      v10,
      0xFFFFFFFFLL);
    v15 = *v10; /*0x66a54e*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v41, v42 * 0.5, v43 * 0.5); /*0x66a57e*/
    (*(void (__fastcall **)(__int64 *, __int64))(v15 + 184))(v10, v16); /*0x66a58a*/
    v17 = cocos2d::CCLabelBMFont::create("How To Play", (const char *)&qword_6FFF68); /*0x66a5a7*/
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))( /*0x66a5c4*/
      *(_QWORD *)(a1 + 584),
      v17,
      20);
    v18 = *(_QWORD *)v17; /*0x66a5c7*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v41, v42 * 0.5, (float)((float)(v43 * 0.5) + 130.0) - 25.0); /*0x66a5fe*/
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v18 + 184))(v17, v19); /*0x66a60a*/
    if ( *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v17 + 320LL))(v17) > 300.0 ) /*0x66a62b*/
    {
      v20 = *(_QWORD *)v17; /*0x66a62d*/
      (*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v17 + 320LL))(v17); /*0x66a633*/
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(v20 + 160))(v17); /*0x66a643*/
    }
    *(_DWORD *)(a1 + 640) = -1; /*0x66a649*/
    v21 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_closeBtn_001.png"); /*0x66a65b*/
    v22 = (struct cocos2d::CCMenuItem *)CCMenuItemSpriteExtra_create(v21, 0, a1, TutorialLayer_onClose); /*0x66a670*/
    *((_DWORD *)v22 + 93) = 1070386381; /*0x66a675*/
    v23 = cocos2d::CCMenu::create(v22, 0); /*0x66a68a*/
    *(_QWORD *)(a1 + 552) = v23; /*0x66a68d*/
    v24 = *(_QWORD *)v23; /*0x66a694*/
    cocos2d::CCPoint::CCPoint( /*0x66a6db*/
      (cocos2d::CCPoint *)&v41,
      (float)((float)(v42 * 0.5) - 210.0) + 10.0,
      (float)((float)(v43 * 0.5) + 130.0) - 10.0);
    (*(void (__fastcall **)(struct cocos2d::CCMenu *, __int64))(v24 + 184))(v23, v25); /*0x66a6e7*/
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 584) + 456LL))( /*0x66a704*/
      *(_QWORD *)(a1 + 584),
      *(_QWORD *)(a1 + 552),
      10);
    v41 = operator new(0x2C8u); /*0x66a714*/
    v26 = ButtonSprite_ButtonSprite(v41); /*0x66a71f*/
    v27 = (cocos2d::CCObject *)v26; /*0x66a724*/
    if ( v26 ) /*0x66a741*/
    {
      if ( (unsigned __int8)ButtonSprite_init( /*0x66a771*/
                              v26,
                              (unsigned int)"Next",
                              220,
                              0,
                              1058642330,
                              0,
                              (__int64)&qword_6FFF68,
                              (__int64)"GJ_button_01.png",
                              1109393408) )
      {
        cocos2d::CCObject::autorelease(v27); /*0x66a77d*/
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v27 + 8LL))(v27, 1); /*0x66a78d*/
        v27 = 0; /*0x66a790*/
      }
    }
    v28 = CCMenuItemSpriteExtra_create(v27, 0, a1, TutorialLayer_onNext); /*0x66a7a1*/
    *(_QWORD *)(a1 + 680) = v28; /*0x66a7a6*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v28); /*0x66a7c1*/
    v41 = operator new(0x2C8u); /*0x66a7ce*/
    v29 = ButtonSprite_ButtonSprite(v41); /*0x66a7d9*/
    v30 = (cocos2d::CCObject *)v29; /*0x66a7de*/
    if ( v29 ) /*0x66a7e4*/
    {
      if ( (unsigned __int8)ButtonSprite_init( /*0x66a814*/
                              v29,
                              (unsigned int)"Exit",
                              220,
                              0,
                              1058642330,
                              0,
                              (__int64)&qword_6FFF68,
                              (__int64)"GJ_button_01.png",
                              1109393408) )
      {
        cocos2d::CCObject::autorelease(v30); /*0x66a820*/
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v30 + 8LL))(v30, 1); /*0x66a830*/
        v30 = 0; /*0x66a833*/
      }
    }
    v31 = CCMenuItemSpriteExtra_create(v30, 0, a1, TutorialLayer_onClose); /*0x66a844*/
    *(_QWORD *)(a1 + 688) = v31; /*0x66a849*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v31); /*0x66a864*/
    v32 = **(_QWORD **)(a1 + 680); /*0x66a86e*/
    v33 = *(_QWORD *)(a1 + 552); /*0x66a871*/
    v34 = *(_QWORD *)(a1 + 680); /*0x66a878*/
    cocos2d::CCPoint::CCPoint( /*0x66a8bf*/
      (cocos2d::CCPoint *)&v41,
      (float)((float)(v42 * 0.5) + 210.0) - 52.0,
      (float)((float)(v43 * 0.5) - 130.0) + 50.0);
    cocos2d::CCNode::convertToNodeSpace(v33, &v44, v35); /*0x66a8d3*/
    (*(void (__fastcall **)(__int64, __int64))(v32 + 184))(v34, v36); /*0x66a8df*/
    v37 = **(_QWORD **)(a1 + 688); /*0x66a8ec*/
    v38 = *(_QWORD *)(a1 + 688); /*0x66a8f6*/
    v39 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 680) + 200LL))(*(_QWORD *)(a1 + 680)); /*0x66a8fc*/
    (*(void (__fastcall **)(__int64, __int64))(v37 + 184))(v38, v39); /*0x66a908*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 688) + 336LL))(*(_QWORD *)(a1 + 688), 0); /*0x66a91a*/
    *(_DWORD *)(a1 + 672) = 0; /*0x66a920*/
    TutorialLayer_loadPage(a1, 1); /*0x66a933*/
    return 1; /*0x66a938*/
  }
  return result; /*0x66a93a*/
}

// [3/6] Address: 0x66a960
// Method: TutorialLayer::onNext
__int64 __fastcall TutorialLayer_onNext(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(a1 + 672); /*0x66a960*/
  if ( v1 < 5 ) /*0x66a969*/
    return TutorialLayer_loadPage(a1, (unsigned int)(v1 + 1)); /*0x66a974*/
  else
    return TutorialLayer_onClose(a1, 0); /*0x66a96d*/
}

// [5/6] Address: 0x66afd0
// Method: TutorialLayer::onClose
void __fastcall TutorialLayer_onClose(_DWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  int v4; // edx
  cocos2d::CCString *v5; // rax
  const char *CString; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  cocos2d::CCTextureCache *v9; // rax

  (*(void (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x66afde*/
  LOBYTE(v2) = 1; /*0x66afeb*/
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)a1 + 83) + 576LL))(*((_QWORD *)a1 + 83), v2); /*0x66aff0*/
  LOBYTE(v3) = 1; /*0x66aff9*/
  (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a1 + 520LL))(a1, v3); /*0x66affe*/
  v4 = a1[168]; /*0x66b004*/
  if ( v4 ) /*0x66b00c*/
  {
    v5 = cocos2d::CCString::createWithFormat("tutorial_%02d.png", v4); /*0x66b015*/
    CString = cocos2d::CCString::getCString(v5); /*0x66b024*/
    v9 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v8, v7); /*0x66b027*/
    cocos2d::CCTextureCache::removeTextureForKey(v9, CString); /*0x66b038*/
  }
}

// [6/6] Address: 0x66b050
// Method: TutorialLayer::keyBackClicked
void __fastcall TutorialLayer_keyBackClicked(__int64 a1)
{
  TutorialLayer_onClose((_DWORD *)(a1 - 336)); /*0x66b059*/
}

// Address: 0x66a980
// Method: TutorialLayer::loadPage
// Hidden C++ exception states: #wind=2
void __fastcall TutorialLayer_loadPage(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 v4; // rcx
  int v5; // edx
  cocos2d::CCString *v6; // rax
  const char *CString; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  cocos2d::CCTextureCache *v10; // rax
  __int64 v11; // rax
  cocos2d::CCString *v12; // rax
  const char *v13; // rax
  struct cocos2d::CCSprite *v14; // r14
  __int64 v15; // rbx
  float v16; // xmm7_4
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rax
  float v21; // xmm8_4
  int v22; // xmm10_4
  unsigned __int64 v23; // rdx
  int v24; // edi
  int v25; // edi
  int v26; // edi
  int v27; // edi
  char *v28; // rcx
  void **v29; // rax
  __int64 v30; // r8
  const struct cocos2d::CCPoint *v31; // rax
  char *v32; // rdi
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rdx
  void *v41; // rcx
  float v42; // [rsp+40h] [rbp-59h] BYREF
  float v43; // [rsp+44h] [rbp-55h]
  __int128 *v44; // [rsp+48h] [rbp-51h] BYREF
  __int128 v45; // [rsp+50h] [rbp-49h] BYREF
  __int64 v46; // [rsp+60h] [rbp-39h]
  __int64 v47; // [rsp+68h] [rbp-31h]
  _BYTE v48[8]; // [rsp+70h] [rbp-29h] BYREF
  void *Block[2]; // [rsp+78h] [rbp-21h] BYREF
  __int64 v50; // [rsp+88h] [rbp-11h]
  unsigned __int64 v51; // [rsp+90h] [rbp-9h]

  v2 = a2;
  LOBYTE(a2) = 1;
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 664) + 576LL))(*(_QWORD *)(a1 + 664), a2);
  v5 = *(_DWORD *)(a1 + 672);
  if ( v5 )
  {
    v6 = cocos2d::CCString::createWithFormat("tutorial_%02d.png", v5);
    CString = cocos2d::CCString::getCString(v6);
    v10 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v9, v8);
    cocos2d::CCTextureCache::removeTextureForKey(v10, CString);
  }
  *(_DWORD *)(a1 + 672) = v2;
  v11 = cocos2d::CCDirector::sharedDirector(v4);
  cocos2d::CCDirector::getWinSize(v11, &v42);
  v12 = cocos2d::CCString::createWithFormat("tutorial_%02d.png", v2);
  v13 = cocos2d::CCString::getCString(v12);
  v14 = cocos2d::CCSprite::create(v13);
  v15 = *(_QWORD *)v14;
  v16 = 0.0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v44, 0.0, 0.0);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v15 + 288))(v14, v17);
  if ( *(_BYTE *)(cocos2d::CCApplication::sharedApplication(v18) + 244) )
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v14 + 160LL))(v14);
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *))(**(_QWORD **)(a1 + 664) + 464LL))(
    *(_QWORD *)(a1 + 664),
    v14);
  v19 = *(_QWORD *)v14;
  cocos2d::CCPoint::CCPoint(
    (cocos2d::CCPoint *)&v44,
    (float)((float)(v42 * 0.5) - 210.0) + 10.0,
    (float)((float)(v43 * 0.5) - 130.0) + 10.0);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v19 + 184))(v14, v20);
  v21 = 0.69999999;
  v22 = 1109393408;
  *(_OWORD *)Block = 0;
  v50 = 0;
  v23 = 15;
  v51 = 15;
  LOBYTE(Block[0]) = 0;
  v24 = v2 - 1;
  if ( !v24 )
  {
    v28 = (char *)sub_3C460(80);
    v50 = 66;
    v23 = 79;
    strcpy(v28, "<cg>Tap</c> the screen to jump.\n<cg>Hold</c> down to keep jumping.");
    goto LABEL_17;
  }
  v25 = v24 - 1;
  if ( !v25 )
  {
    v28 = (char *)sub_3C460(64);
    v50 = 52;
    v23 = 63;
    strcpy(v28, "<cg>Hold</c> to fly up.\n<cg>Release</c> to fly down.");
    goto LABEL_17;
  }
  v26 = v25 - 1;
  if ( v26 )
  {
    v27 = v26 - 1;
    if ( !v27 )
    {
      v28 = (char *)sub_3C460(128);
      v50 = 125;
      v23 = 127;
      strcpy(
        v28,
        "You can place checkpoints manually, or use the auto-checkpoint feature.\n"
        "Tap the delete button to remove your last checkpoint.");
      v21 = 0.55000001;
      v16 = -13.0;
      v22 = 1110704128;
      goto LABEL_17;
    }
    if ( v27 != 1 )
    {
      v28 = (char *)Block[0];
      goto LABEL_18;
    }
    v28 = (char *)sub_3C460(144);
    v50 = 129;
    v23 = 143;
    strcpy(
      v28,
      "<cy>Jump Orbs</c> activate when you are on top of them.\n"
      "<cg>Tap</c> while touching an orb to interact with it and use its effect.");
  }
  else
  {
    v28 = (char *)sub_3C460(112);
    v50 = 106;
    v23 = 111;
    strcpy(
      v28,
      "You can enter <cl>practice mode</c> from the pause menu.\nPractice mode lets you place <cg>checkpoints</c>.");
  }
  v21 = 0.60000002;
  v16 = -13.0;
LABEL_17:
  v51 = v23;
  Block[0] = v28;
LABEL_18:
  v44 = &v45;
  v29 = Block;
  if ( v23 > 0xF )
    v29 = (void **)v28;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v30 = -1;
  do
    ++v30;
  while ( *((_BYTE *)v29 + v30) );
  sub_3C230(&v45);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v48, 0.5, 1.0);
  v32 = TextArea_create((__int64)&v45, &qword_6FFF68, 1.0, 400.0 / v21, v31, v22, 0, 0);
  (*(void (__fastcall **)(char *))(*(_QWORD *)v32 + 160LL))(v32);
  (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 664) + 464LL))(*(_QWORD *)(a1 + 664), v32);
  v33 = *(_QWORD *)v32;
  cocos2d::CCPoint::CCPoint(
    (cocos2d::CCPoint *)&v44,
    v42 * 0.5,
    (float)((float)((float)(v43 * 0.5) + 130.0) - 75.0) + v16);
  (*(void (__fastcall **)(char *, __int64))(v33 + 184))(v32, v34);
  v36 = *(__int64 **)(a1 + 680);
  v37 = *v36;
  if ( *(int *)(a1 + 672) < 5 )
  {
    LOBYTE(v35) = 1;
    (*(void (__fastcall **)(__int64 *, __int64))(v37 + 336))(v36, v35);
    LOBYTE(v40) = 1;
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 680) + 936LL))(*(_QWORD *)(a1 + 680), v40);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 688) + 336LL))(*(_QWORD *)(a1 + 688), 0);
    v39 = 0;
  }
  else
  {
    (*(void (__fastcall **)(__int64 *, _QWORD))(v37 + 336))(v36, 0);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 680) + 936LL))(*(_QWORD *)(a1 + 680), 0);
    LOBYTE(v38) = 1;
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 688) + 336LL))(*(_QWORD *)(a1 + 688), v38);
    LOBYTE(v39) = 1;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 688) + 936LL))(*(_QWORD *)(a1 + 688), v39);
  if ( v51 > 0xF )
  {
    v41 = Block[0];
    if ( v51 + 1 >= 0x1000 )
    {
      v41 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v41 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v41);
  }
}
