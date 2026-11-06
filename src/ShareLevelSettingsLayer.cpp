#include <Geode/binding/ShareLevelSettingsLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/5] Address: 0x62b6e0
// Method: ShareLevelSettingsLayer::~ShareLevelSettingsLayer
_QWORD *__fastcall ShareLevelSettingsLayer__dtor_ShareLevelSettingsLayer(_QWORD *Block, char a2)
{
  *Block = &ShareLevelSettingsLayer::`vftable'; /*0x62b6f3*/
  Block[40] = &ShareLevelSettingsLayer::`vftable'; /*0x62b700*/
  Block[41] = &ShareLevelSettingsLayer::`vftable'; /*0x62b70e*/
  Block[42] = &ShareLevelSettingsLayer::`vftable'; /*0x62b71c*/
  Block[43] = &ShareLevelSettingsLayer::`vftable'; /*0x62b72a*/
  Block[44] = &ShareLevelSettingsLayer::`vftable'; /*0x62b738*/
  Block[51] = &ShareLevelSettingsLayer::`vftable'; /*0x62b746*/
  Block[54] = &ShareLevelSettingsLayer::`vftable'; /*0x62b754*/
  Block[68] = &ShareLevelSettingsLayer::`vftable'; /*0x62b762*/
  Block[83] = &ShareLevelSettingsLayer::`vftable'; /*0x62b770*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x62b777*/
  if ( (a2 & 1) != 0 ) /*0x62b77f*/
    j_j_free(Block); /*0x62b789*/
  return Block; /*0x62b78e*/
}

// [3/5] Address: 0x62e7f0
// Method: ShareLevelSettingsLayer::onUnlisted
// Hidden C++ exception states: #wind=3
__int64 __fastcall ShareLevelSettingsLayer_onUnlisted(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rax
  cocos2d::CCObject *v6; // rbx
  __int64 v7; // rax
  __int128 v9; // [rsp+50h] [rbp-48h] BYREF
  __int64 v10; // [rsp+60h] [rbp-38h]
  __int64 v11; // [rsp+68h] [rbp-30h]
  _BYTE v12[40]; // [rsp+70h] [rbp-28h] BYREF
  void *v13; // [rsp+A0h] [rbp+8h]
  void *v14; // [rsp+A0h] [rbp+8h]

  *(_BYTE *)(*(_QWORD *)(a1 + 680) + 688LL) = *(_BYTE *)(*(_QWORD *)(a1 + 680) + 688LL) == 0; /*0x62e811*/
  v2 = qword_905FD0; /*0x62e817*/
  if ( !qword_905FD0 ) /*0x62e821*/
  {
    v13 = operator new(0x6E8u); /*0x62e82d*/
    qword_905FD0 = sub_2723A0(v13); /*0x62e83e*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x62e84f*/
    v2 = qword_905FD0; /*0x62e851*/
  }
  if ( !GameManager_getGameVariable(v2, "0070") ) /*0x62e85f*/
  {
    v4 = qword_905FD0; /*0x62e86c*/
    if ( !qword_905FD0 ) /*0x62e876*/
    {
      v14 = operator new(0x6E8u); /*0x62e882*/
      qword_905FD0 = sub_2723A0(v14); /*0x62e893*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x62e8a4*/
      v4 = qword_905FD0; /*0x62e8a7*/
    }
    LOBYTE(v3) = 1; /*0x62e8ae*/
    sub_27ACB0(v4, "0070", v3); /*0x62e8b8*/
    v9 = 0; /*0x62e8c0*/
    *(_QWORD *)&v9 = sub_3C460(128); /*0x62e8de*/
    v10 = 119; /*0x62e8e3*/
    v11 = 127; /*0x62e8ec*/
    strcpy( /*0x62e8fc*/
      (char *)v9,
      "An unlisted level can only be found by entering its levelID. Once a level is unlisted, it cannot change back to listed.");
    v5 = sub_3E4F0(v12, &v9); /*0x62e979*/
    v6 = FLAlertLayer_create_0(0, (int)"Unlisted", v5, (__int64)"OK", 0, 1134559232, 0, 0, 1065353216); /*0x62e9c4*/
    sub_3C310(&v9); /*0x62e9cc*/
    (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v6 + 1064LL))(v6); /*0x62e9de*/
  }
  v7 = *(_QWORD *)(a1 + 680); /*0x62e9e0*/
  if ( !*(_BYTE *)(v7 + 688) ) /*0x62e9e7*/
    *(_BYTE *)(v7 + 689) = 0; /*0x62e9f0*/
  return sub_62EA30(a1); /*0x62e9fa*/
}

// [4/5] Address: 0x62eb10
// Method: ShareLevelSettingsLayer::onClose
__int64 __fastcall ShareLevelSettingsLayer_onClose(_QWORD *a1)
{
  __int64 v1; // rdi
  float v3; // xmm0_4
  __int64 v4; // rdx

  v1 = a1[85]; /*0x62eb1a*/
  if ( *(_DWORD *)(v1 + 1052) - *(_DWORD *)(v1 + 1056) == -1 ) /*0x62eb33*/
  {
    v3 = (float)((float)rand() / 32767.0) * 1000.0; /*0x62eb4a*/
    *(_DWORD *)(v1 + 1056) = (int)v3; /*0x62eb56*/
    *(_DWORD *)(v1 + 1052) = (int)v3 + 1; /*0x62eb5e*/
  }
  if ( a1[88] ) /*0x62eb64*/
    sub_62CAF0(); /*0x62eb70*/
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 992LL))(a1, 0); /*0x62eb7d*/
  LOBYTE(v4) = 1; /*0x62eb86*/
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 520LL))(a1, v4);
}

// [5/5] Address: 0x62eba0
// Method: ShareLevelSettingsLayer::keyBackClicked
__int64 __fastcall ShareLevelSettingsLayer_keyBackClicked(__int64 a1)
{
  return ShareLevelSettingsLayer_onClose((_QWORD *)(a1 - 336));
}

// Address: 0x161770
// Method: ShareLevelSettingsLayer::init
// Hidden C++ exception states: #wind=1
bool __fastcall ShareLevelSettingsLayer_init(__int64 a1, __int64 a2)
{
  bool result; // al
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 *v11; // rdi
  __int64 v12; // rdx
  void (__fastcall *v13)(__int64 *, __int64); // r8
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  struct cocos2d::CCLabelBMFont *v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rax
  int v21; // eax
  cocos2d::CCObject *v22; // rax
  struct cocos2d::CCMenu *v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rax
  int v26; // eax
  cocos2d::CCObject *v27; // r15
  __int64 v28; // rdi
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rax
  struct cocos2d::CCSprite *v32; // rax
  cocos2d::CCObject *v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rax
  struct cocos2d::CCSprite *v38; // rax
  cocos2d::CCObject *v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rax
  struct cocos2d::CCSprite *v44; // rax
  cocos2d::CCObject *v45; // rsi
  __int64 v46; // rdi
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  int v51; // eax
  cocos2d::CCObject *v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // rbx
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rcx
  struct cocos2d::CCSprite *v58; // rax
  int v59; // ebx
  cocos2d::CCObject *v60; // rsi
  __int64 v61; // rdi
  __int64 v62; // rbx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  _QWORD *v66; // rbx
  __int64 v67; // rdx
  void (__fastcall *v68)(_QWORD *, __int64); // r8
  __int64 v69; // rax
  _QWORD *v70; // rbx
  __int64 v71; // rdx
  void (__fastcall *v72)(_QWORD *, __int64); // r8
  __int64 v73; // rdx
  __int64 v74; // rcx
  char *v75; // rax
  __int64 v76; // rax
  __int64 *v77; // rdi
  __int64 v78; // rbx
  __int64 v79; // rax
  __int64 *v80; // rdi
  __int64 v81; // rbx
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rdx
  cocos2d::CCObject *v91; // rbx
  cocos2d::CCObject *v92; // rdi
  __int64 v93; // rax
  __int64 v94; // rbx
  __int64 v95; // rax
  int v96; // ebx
  unsigned int v97; // eax
  cocos2d::CCNode *v98; // rax
  __int64 v99; // rdi
  __int64 v100; // rbx
  __int64 v101; // rax
  _BYTE v102[8]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v103[8]; // [rsp+68h] [rbp-98h] BYREF
  float v104[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v105[4]; // [rsp+78h] [rbp-88h] BYREF
  float v106[2]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v107[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v108[136]; // [rsp+A8h] [rbp-58h] BYREF
  void *v109; // [rsp+170h] [rbp+70h] BYREF
  float v110; // [rsp+178h] [rbp+78h] BYREF
  float v111; // [rsp+17Ch] [rbp+7Ch]

  sub_5ABA0(a1);
  LODWORD(v109) = -1778384896;
  result = cocos2d::CCLayerColor::initWithColor((cocos2d::CCLayerColor *)a1, (const struct cocos2d::_ccColor4B *)&v109);
  if ( result )
  {
    *(_QWORD *)(a1 + 680) = a2;
    LOBYTE(v5) = 1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 920LL))(a1, v5);
    LOBYTE(v6) = 1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 992LL))(a1, v6);
    v8 = cocos2d::CCDirector::sharedDirector(v7);
    cocos2d::CCDirector::getWinSize(v8, &v110);
    v9 = cocos2d::CCLayer::create();
    *(_QWORD *)(a1 + 584) = v9;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 464LL))(a1, v9);
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v105, 0.0, 0.0, 40.0, 40.0);
    v11 = (__int64 *)cocos2d::extension::CCScale9Sprite::create("GJ_button_05.png", v10);
    v12 = v11[40];
    v13 = *(void (__fastcall **)(__int64 *, __int64))(v12 + 40);
    LOBYTE(v12) = -1;
    v13(v11 + 40, v12);
    v14 = *v11;
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v109, 440.0, 290.0);
    (*(void (__fastcall **)(__int64 *, __int64))(v14 + 312))(v11, v15);
    (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
      *(_QWORD *)(a1 + 584),
      v11,
      0xFFFFFFFFLL);
    v16 = *v11;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v109, v110 * 0.5, v111 * 0.5);
    (*(void (__fastcall **)(__int64 *, __int64))(v16 + 184))(v11, v17);
    *(_DWORD *)(a1 + 640) = -1;
    v18 = cocos2d::CCLabelBMFont::create("Custom Song Selection", "goldFont.fnt");
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v18 + 160LL))(v18);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))(
      *(_QWORD *)(a1 + 584),
      v18);
    v19 = *(_QWORD *)v18;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v109, v110 * 0.5, (float)((float)(v111 * 0.5) + 145.0) - 22.0);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v19 + 184))(v18, v20);
    v21 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_closeBtn_001.png");
    v22 = CCMenuItemSpriteExtra_create(v21, 0, a1, (__int64)CustomSongLayer_onClose);
    *((_DWORD *)v22 + 93) = 1070386381;
    v23 = cocos2d::CCMenu::create(v22, 0);
    *(_QWORD *)(a1 + 552) = v23;
    v24 = *(_QWORD *)v23;
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)&v109,
      (float)((float)(v110 * 0.5) - 220.0) + 10.0,
      (float)((float)(v111 * 0.5) + 145.0) - 10.0);
    (*(void (__fastcall **)(struct cocos2d::CCMenu *, __int64))(v24 + 184))(v23, v25);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
      *(_QWORD *)(a1 + 584),
      *(_QWORD *)(a1 + 552),
      10);
    v26 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_savedSongsBtn_001.png");
    v27 = CCMenuItemSpriteExtra_create(v26, 0, a1, (__int64)CustomSongLayer_onSongBrowser);
    *((_DWORD *)v27 + 93) = 1067030938;
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v27);
    v28 = *(_QWORD *)v27;
    v29 = *(_QWORD *)(a1 + 552);
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)&v109,
      (float)((float)(v110 * 0.5) + 220.0) - 24.0,
      (float)((float)((float)(v111 * 0.5) - 145.0) + 24.0) + 2.0);
    cocos2d::CCNode::convertToNodeSpace(v29, v102, v30);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v28 + 184))(v27, v31);
    v32 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_ncsLibraryBtn_001.png");
    LODWORD(v29) = (_DWORD)v32;
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v32 + 160LL))(v32);
    v33 = CCMenuItemSpriteExtra_create(v29, 0, a1, (__int64)sub_162AC0);
    *((_DWORD *)v33 + 93) = 1067030938;
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v33);
    v34 = *(_QWORD *)v33;
    v35 = *(_QWORD *)(a1 + 552);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v109, (float)(v110 * 0.5) + 105.0, (float)(v111 * 0.5) + 55.0);
    cocos2d::CCNode::convertToNodeSpace(v35, v102, v36);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v34 + 184))(v33, v37);
    v38 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_musicLibraryBtn_001.png");
    LODWORD(v35) = (_DWORD)v38;
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v38 + 160LL))(v38);
    v39 = CCMenuItemSpriteExtra_create(v35, 0, a1, (__int64)CustomSongLayer_onMusicBrowser);
    *((_DWORD *)v39 + 93) = 1067030938;
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v39);
    v40 = *(_QWORD *)v39;
    v41 = *(_QWORD *)(a1 + 552);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v109, v110 * 0.5, (float)(v111 * 0.5) + 55.0);
    cocos2d::CCNode::convertToNodeSpace(v41, v102, v42);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v40 + 184))(v39, v43);
    v44 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_ngBtn_001.png");
    LODWORD(v41) = (_DWORD)v44;
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v44 + 160LL))(v44);
    v45 = CCMenuItemSpriteExtra_create(v41, 0, a1, (__int64)sub_162BD0);
    *((_DWORD *)v45 + 93) = 1067030938;
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v45);
    v46 = *(_QWORD *)v45;
    v47 = *(_QWORD *)(a1 + 552);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v109, (float)(v110 * 0.5) - 105.0, (float)(v111 * 0.5) + 55.0);
    cocos2d::CCNode::convertToNodeSpace(v47, v102, v48);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v46 + 184))(v45, v49);
    v50 = *(_QWORD *)(a1 + 680);
    if ( v50 && (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v50 + 24LL))(v50) )
    {
      v51 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_createLinesBtn_001.png");
      v52 = CCMenuItemSpriteExtra_create(v51, 0, a1, (__int64)sub_162CD0);
      *((_DWORD *)v27 + 93) = 1067030938;
      (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(
        *(_QWORD *)(a1 + 552),
        v52);
      v53 = *(_QWORD *)v52;
      v54 = *(_QWORD *)(a1 + 552);
      cocos2d::CCPoint::CCPoint(
        (cocos2d::CCPoint *)&v109,
        (float)((float)(v110 * 0.5) - 220.0) + 24.0,
        (float)((float)((float)(v111 * 0.5) - 145.0) + 24.0) + 2.0);
      cocos2d::CCNode::convertToNodeSpace(v54, v102, v55);
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v53 + 184))(v52, v56);
    }
    v57 = *(_QWORD *)(a1 + 680);
    if ( v57 && (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v57 + 24LL))(v57) )
    {
      v58 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_optionsBtn02_001.png");
      v59 = (int)v58;
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v58 + 160LL))(v58);
      v60 = CCMenuItemSpriteExtra_create(v59, 0, a1, (__int64)sub_162410);
      *((_DWORD *)v60 + 93) = 0x40000000;
      (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(
        *(_QWORD *)(a1 + 552),
        v60);
      v61 = *(_QWORD *)v60;
      v62 = *(_QWORD *)(a1 + 552);
      cocos2d::CCPoint::CCPoint(
        (cocos2d::CCPoint *)&v109,
        (float)((float)(v110 * 0.5) + 220.0) - 27.0,
        (float)((float)(v111 * 0.5) + 145.0) - 27.0);
      cocos2d::CCNode::convertToNodeSpace(v62, v102, v63);
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v61 + 184))(v60, v64);
    }
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v108, 0.0, 0.0, 40.0, 40.0);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v103, (float)(v110 * 0.5) - 42.0, (float)(v111 * 0.5) - 20.0);
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v105, (const struct cocos2d::CCRect *)v108);
    v66 = (_QWORD *)cocos2d::extension::CCScale9Sprite::create("square02_small.png", v65);
    v67 = v66[40];
    v68 = *(void (__fastcall **)(_QWORD *, __int64))(v67 + 40);
    LOBYTE(v67) = 100;
    v68(v66 + 40, v67);
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)v104, 210.0, 35.0);
    (*(void (__fastcall **)(_QWORD *, float *))(*v66 + 312LL))(v66, v104);
    (*(void (__fastcall **)(_QWORD, _QWORD *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
      *(_QWORD *)(a1 + 584),
      v66,
      0xFFFFFFFFLL);
    (*(void (__fastcall **)(_QWORD *, _BYTE *))(*v66 + 184LL))(v66, v103);
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v105, (const struct cocos2d::CCRect *)v108);
    v70 = (_QWORD *)cocos2d::extension::CCScale9Sprite::create("square02_small.png", v69);
    v71 = v70[40];
    v72 = *(void (__fastcall **)(_QWORD *, __int64))(v71 + 40);
    LOBYTE(v71) = 40;
    v72(v70 + 40, v71);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v106, 7.0, 6.0);
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)v107, v104[0] - v106[0], v104[1] - v106[1]);
    (*(void (__fastcall **)(_QWORD *, _BYTE *))(*v70 + 312LL))(v70, v107);
    (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v70, 0);
    (*(void (__fastcall **)(_QWORD *, _BYTE *))(*v70 + 184LL))(v70, v103);
    v75 = CCTextInputNode_create(v74, v73, (__int64)"Enter song ID");
    *(_QWORD *)(a1 + 688) = v75;
    (*(void (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v75, 20);
    *(_QWORD *)(*(_QWORD *)(a1 + 688) + 608LL) = a1 + 544;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v102, -95.0, 0.0);
    cocos2d::CCPoint::operator+(v103, &v109, v76);
    (*(void (__fastcall **)(_QWORD, void **))(**(_QWORD **)(a1 + 688) + 184LL))(*(_QWORD *)(a1 + 688), &v109);
    v77 = *(__int64 **)(*(_QWORD *)(a1 + 688) + 600LL);
    v78 = *v77;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v109, 0.0, 0.5);
    (*(void (__fastcall **)(__int64 *, __int64))(v78 + 288))(v77, v79);
    v80 = *(__int64 **)(*(_QWORD *)(a1 + 688) + 624LL);
    v81 = *v80;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v109, 0.0, 0.5);
    (*(void (__fastcall **)(__int64 *, __int64))(v81 + 288))(v80, v82);
    v83 = *(_QWORD *)(a1 + 688);
    *(_DWORD *)(v83 + 572) = 1060320051;
    sub_555B0(v83, v84);
    v85 = *(_QWORD *)(a1 + 688);
    *(_DWORD *)(v85 + 568) = 1129447424;
    sub_555B0(v85, v86);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 688) + 600LL) + 336LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 688) + 600LL),
      0);
    *(_DWORD *)(*(_QWORD *)(a1 + 688) + 616LL) = 15;
    HIDWORD(v105[1]) = 0;
    v105[2] = 11;
    v105[3] = 15;
    strcpy((char *)v105, "0123456789-");
    GameManager_getMenuMusicFile(*(_DWORD **)(a1 + 688), v105);
    LOWORD(v109) = -21896;
    v87 = *(_QWORD *)(a1 + 688);
    *(_WORD *)(v87 + 580) = -21896;
    *(_BYTE *)(v87 + 582) = -16;
    sub_555B0(v87, v88);
    v89 = *(_QWORD *)(a1 + 688);
    *(_DWORD *)(v89 + 576) = 1056964608;
    sub_555B0(v89, v90);
    v109 = operator new(0x2C8u);
    v91 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite((__int64)v109);
    if ( v91 )
    {
      if ( ButtonSprite_init(
             (__int64)v91,
             (__int64)"Search",
             50,
             0,
             1061997773,
             1,
             "goldFont.fnt",
             (__int64)"GJ_button_04.png",
             1108082688) )
      {
        cocos2d::CCObject::autorelease(v91);
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v91 + 8LL))(v91, 1);
        LODWORD(v91) = 0;
      }
    }
    v92 = CCMenuItemSpriteExtra_create((int)v91, 0, a1, (__int64)sub_162520);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v92);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v102, 155.0, 0.0);
    cocos2d::CCPoint::operator+(v103, &v109, v93);
    v94 = *(_QWORD *)v92;
    cocos2d::CCNode::convertToNodeSpace(*(_QWORD *)(a1 + 552), v105, &v109);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v94 + 184))(v92, v95);
    v96 = 0;
    v97 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 680) + 8LL))(*(_QWORD *)(a1 + 680));
    if ( v97 )
      v96 = (unsigned int)SongInfoObject_create_0(v97);
    v98 = CustomSongWidget_create(v96, *(_QWORD *)(a1 + 680), 1u, 1, 1, 0, 0, 0, 0, 0, 0);
    *(_QWORD *)(a1 + 696) = v98;
    (*(void (__fastcall **)(_QWORD, cocos2d::CCNode *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
      *(_QWORD *)(a1 + 584),
      v98,
      2);
    v99 = **(_QWORD **)(a1 + 696);
    v100 = *(_QWORD *)(a1 + 696);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v109, v110 * 0.5, (float)((float)(v111 * 0.5) - 145.0) + 50.0);
    (*(void (__fastcall **)(__int64, __int64))(v99 + 184))(v100, v101);
    CustomSongWidget_getSongInfoIfUnloaded(*(_QWORD *)(a1 + 696));
    return 1;
  }
  return result;
}
