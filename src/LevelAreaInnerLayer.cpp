#include <Geode/binding/LevelAreaInnerLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/12] Address: 0x178ff0
// Method: LevelAreaInnerLayer::playStep1
// Hidden C++ exception states: #wind=1
bool __fastcall LevelAreaInnerLayer_playStep1(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  struct cocos2d::CCScene *v6; // rax
  struct cocos2d::CCScene *v7; // rdi
  cocos2d::CCArray *v8; // rax
  struct cocos2d::CCObject *v9; // rax
  struct cocos2d::CCScene *v10; // rbx
  __int64 v11; // rcx
  cocos2d::CCDirector *v12; // rax
  void *v14; // [rsp+30h] [rbp+8h]

  v5 = qword_905FD0; /*0x178ffd*/
  if ( !qword_905FD0 ) /*0x179007*/
  {
    v14 = operator new(0x6E8u); /*0x179013*/
    qword_905FD0 = sub_2723A0(v14); /*0x179021*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x179032*/
    v5 = qword_905FD0; /*0x179034*/
  }
  *(_DWORD *)(v5 + 740) = 3; /*0x17903b*/
  v6 = (struct cocos2d::CCScene *)TeleportPortalObject_create(*(_QWORD *)(a1 + 472), 0, a3, a4); /*0x17904e*/
  v7 = v6; /*0x179053*/
  if ( *(_BYTE *)(a1 + 544) ) /*0x179056*/
  {
    v8 = (cocos2d::CCArray *)(*(__int64 (__fastcall **)(struct cocos2d::CCScene *))(*(_QWORD *)v6 + 480LL))(v6); /*0x17906c*/
    v9 = cocos2d::CCArray::objectAtIndex(v8, 0); /*0x179073*/
    sub_513750(v9, *(_QWORD *)(a1 + 472) + 1632LL); /*0x17908a*/
    *(_BYTE *)(a1 + 544) = 0; /*0x17908f*/
  }
  v10 = cocos2d::CCTransitionFade::create(0.5, v7); /*0x1790a7*/
  v12 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v11); /*0x1790aa*/
  return cocos2d::CCDirector::replaceScene(v12, v10); /*0x1790b6*/
}

// [2/12] Address: 0x3d9a10
// Method: LevelAreaInnerLayer::~LevelAreaInnerLayer
cocos2d::CCLayer *__fastcall LevelAreaInnerLayer__dtor_LevelAreaInnerLayer(cocos2d::CCLayer *Block, char a2)
{
  *(_QWORD *)Block = &LevelAreaInnerLayer::`vftable'; /*0x3d9a23*/
  *((_QWORD *)Block + 40) = &LevelAreaInnerLayer::`vftable'; /*0x3d9a30*/
  *((_QWORD *)Block + 41) = &LevelAreaInnerLayer::`vftable'; /*0x3d9a3e*/
  *((_QWORD *)Block + 42) = &LevelAreaInnerLayer::`vftable'; /*0x3d9a4c*/
  *((_QWORD *)Block + 43) = &LevelAreaInnerLayer::`vftable'; /*0x3d9a5a*/
  *((_QWORD *)Block + 44) = &LevelAreaInnerLayer::`vftable'; /*0x3d9a68*/
  *((_QWORD *)Block + 51) = &LevelAreaInnerLayer::`vftable'; /*0x3d9a76*/
  cocos2d::CCLayer::~CCLayer(Block); /*0x3d9a7d*/
  if ( (a2 & 1) != 0 ) /*0x3d9a86*/
    j_j_free(Block); /*0x3d9a90*/
  return Block; /*0x3d9a95*/
}

// [3/12] Address: 0x3dbc40
// Method: LevelAreaInnerLayer::scene
// Hidden C++ exception states: #wind=1
__int64 __fastcall LevelAreaInnerLayer_scene(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // bl
  __int64 v5; // rsi
  __int64 v6; // rcx
  cocos2d::CCLayer *v7; // rdi

  v4 = a1; /*0x3dbc4f*/
  v5 = cocos2d::CCScene::create(a1, a2, a3, a4); /*0x3dbc58*/
  *(_QWORD *)(cocos2d::CCApplication::sharedApplication(v6) + 232) = v5; /*0x3dbc61*/
  v7 = (cocos2d::CCLayer *)operator new(0x1B8u); /*0x3dbc72*/
  cocos2d::CCLayer::CCLayer(v7); /*0x3dbc7d*/
  *(_QWORD *)v7 = &LevelAreaInnerLayer::`vftable'; /*0x3dbc8a*/
  *((_QWORD *)v7 + 40) = &LevelAreaInnerLayer::`vftable'; /*0x3dbc94*/
  *((_QWORD *)v7 + 41) = &LevelAreaInnerLayer::`vftable'; /*0x3dbca2*/
  *((_QWORD *)v7 + 42) = &LevelAreaInnerLayer::`vftable'; /*0x3dbcb0*/
  *((_QWORD *)v7 + 43) = &LevelAreaInnerLayer::`vftable'; /*0x3dbcbe*/
  *((_QWORD *)v7 + 44) = &LevelAreaInnerLayer::`vftable'; /*0x3dbccc*/
  *((_QWORD *)v7 + 51) = &LevelAreaInnerLayer::`vftable'; /*0x3dbcda*/
  *((_QWORD *)v7 + 52) = 0; /*0x3dbce1*/
  *((_BYTE *)v7 + 424) = 0; /*0x3dbcec*/
  *((_DWORD *)v7 + 107) = 0; /*0x3dbcf3*/
  *((_BYTE *)v7 + 432) = 0; /*0x3dbcfd*/
  if ( (unsigned __int8)LevelAreaInnerLayer_init(v7, v4) ) /*0x3dbd0a*/
  {
    cocos2d::CCObject::autorelease(v7); /*0x3dbd16*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCLayer *, __int64))(*(_QWORD *)v7 + 8LL))(v7, 1); /*0x3dbd26*/
    v7 = 0; /*0x3dbd29*/
  }
  (*(void (__fastcall **)(__int64, cocos2d::CCLayer *))(*(_QWORD *)v5 + 464LL))(v5, v7); /*0x3dbd34*/
  return v5; /*0x3dbd3d*/
}

// [4/12] Address: 0x3dbd50
// Method: LevelAreaInnerLayer::init
// Hidden C++ exception states: #wind=11
bool __fastcall LevelAreaInnerLayer_init(cocos2d::CCLayer *a1, char a2)
{
  cocos2d::CCLayer *v2; // r12
  bool result; // al
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  cocos2d::CCTextureCache *v10; // rax
  cocos2d::CCSpriteFrameCache *v11; // rax
  struct cocos2d::CCSprite *v12; // rbx
  struct cocos2d::CCMenuItem *v13; // rdi
  struct cocos2d::CCAction *v14; // rax
  struct cocos2d::CCMenu *v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // rcx
  cocos2d::CCDirector *v18; // rax
  float v19; // xmm6_4
  __int64 v20; // rcx
  cocos2d::CCDirector *v21; // rax
  float v22; // xmm0_4
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  cocos2d::CCNode *v27; // r15
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  struct cocos2d::CCSprite *v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // edi
  int v40; // ebx
  __int64 v41; // rcx
  unsigned int v42; // r13d
  __int64 MainLevel; // r14
  __int64 v44; // rcx
  char v45; // si
  __int64 v46; // rcx
  char v47; // bl
  unsigned __int64 v48; // rdi
  _BYTE *v49; // rbx
  unsigned __int64 v50; // rcx
  __int64 v51; // rsi
  char *v52; // rax
  _BYTE *v53; // rbx
  unsigned __int64 v54; // rcx
  __int64 v55; // rsi
  char *v56; // rbx
  void *v57; // rcx
  void **v58; // rcx
  cocos2d::CCObject *v59; // rdi
  __int64 v60; // rbx
  _BYTE *v61; // r13
  __int64 v62; // rax
  __int64 v63; // rax
  int i; // edi
  __int64 v65; // rbx
  __int64 v66; // rax
  struct cocos2d::CCSprite *v67; // rbx
  __int16 *v68; // rsi
  int v69; // eax
  __int64 v70; // rax
  unsigned int v71; // edi
  cocos2d::CCObject *v72; // rbx
  __int64 v73; // rsi
  __int64 v74; // rdi
  __int64 v75; // rbx
  __int64 v76; // rax
  __int64 v77; // rax
  int j; // esi
  struct cocos2d::CCSprite *v79; // rdi
  __int64 v80; // rbx
  int v81; // ecx
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rbx
  __int64 v85; // rax
  int v86; // r9d
  struct cocos2d::CCActionInterval *v87; // rax
  struct cocos2d::CCAction *v88; // rax
  struct cocos2d::CCSprite *v89; // rsi
  struct cocos2d::CCFadeTo *v90; // rbx
  struct cocos2d::CCFiniteTimeAction *v91; // rax
  struct cocos2d::CCAction *v92; // rax
  cocos2d::CCObject *v93; // rdi
  struct cocos2d::CCMenu *v94; // r14
  __int64 v95; // rbx
  __int64 v96; // rcx
  cocos2d::CCDirector *v97; // rax
  float v98; // xmm0_4
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rbx
  __int64 v103; // rax
  const struct cocos2d::CCPoint *v104; // rax
  struct cocos2d::CCActionInterval *v105; // rax
  struct cocos2d::CCFiniteTimeAction *v106; // rbx
  const struct cocos2d::CCPoint *v107; // rax
  struct cocos2d::CCActionInterval *v108; // rax
  struct cocos2d::CCEaseInOut *v109; // rax
  struct cocos2d::CCActionInterval *v110; // rax
  struct cocos2d::CCAction *v111; // rax
  __int64 v112; // rbx
  struct cocos2d::CCFiniteTimeAction *v113; // rax
  struct cocos2d::CCAction *v114; // rax
  cocos2d::CCNode *v115; // rsi
  struct cocos2d::CCFadeTo *v116; // rbx
  struct cocos2d::CCFiniteTimeAction *v117; // rax
  struct cocos2d::CCAction *v118; // rax
  cocos2d::CCObject *v119; // rdi
  __int64 v120; // rbx
  __int64 v121; // rcx
  cocos2d::CCDirector *v122; // rax
  float v123; // xmm6_4
  __int64 v124; // rcx
  cocos2d::CCDirector *v125; // rax
  float v126; // xmm0_4
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // r8
  __int64 v130; // rcx
  __int64 v131; // rbx
  struct cocos2d::CCFiniteTimeAction *v132; // rax
  struct cocos2d::CCAction *v133; // rax
  __int64 v134; // rax
  char v135; // [rsp+40h] [rbp-C0h]
  char v136; // [rsp+41h] [rbp-BFh]
  void *v138; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v139; // [rsp+50h] [rbp-B0h]
  __int16 v140; // [rsp+54h] [rbp-ACh] BYREF
  char v141; // [rsp+56h] [rbp-AAh]
  __int16 v142; // [rsp+57h] [rbp-A9h] BYREF
  char v143; // [rsp+59h] [rbp-A7h]
  __int16 v144; // [rsp+5Ah] [rbp-A6h]
  __int16 v145; // [rsp+5Eh] [rbp-A2h] BYREF
  char v146; // [rsp+60h] [rbp-A0h]
  int v147; // [rsp+64h] [rbp-9Ch]
  int v148; // [rsp+68h] [rbp-98h]
  _BYTE v149[12]; // [rsp+6Ch] [rbp-94h] BYREF
  void *v150; // [rsp+78h] [rbp-88h] BYREF
  __int64 v151; // [rsp+80h] [rbp-80h]
  cocos2d::CCLayer *v152; // [rsp+88h] [rbp-78h] BYREF
  struct cocos2d::CCMenu *v153; // [rsp+90h] [rbp-70h] BYREF
  float v154[2]; // [rsp+98h] [rbp-68h] BYREF
  struct cocos2d::CCSprite *v155; // [rsp+A0h] [rbp-60h]
  char v156[8]; // [rsp+A8h] [rbp-58h] BYREF
  void *v157; // [rsp+B0h] [rbp-50h] BYREF
  char v158[8]; // [rsp+B8h] [rbp-48h] BYREF
  void *v159; // [rsp+C0h] [rbp-40h]
  void *v160; // [rsp+C8h] [rbp-38h]
  void *v161; // [rsp+D0h] [rbp-30h]
  void *v162; // [rsp+D8h] [rbp-28h]
  char v163[8]; // [rsp+E0h] [rbp-20h] BYREF
  void *v164[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v165; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v166; // [rsp+100h] [rbp+0h]
  _BYTE v167[8]; // [rsp+108h] [rbp+8h] BYREF
  char v168[8]; // [rsp+110h] [rbp+10h] BYREF
  char v169[8]; // [rsp+118h] [rbp+18h] BYREF
  char v170[8]; // [rsp+120h] [rbp+20h] BYREF

  v2 = a1; /*0x3dbd98*/
  v152 = a1; /*0x3dbd9b*/
  result = cocos2d::CCLayer::init(a1); /*0x3dbd9f*/
  if ( !result ) /*0x3dbda7*/
    return result; /*0x3dbda7*/
  LOBYTE(v4) = 1; /*0x3dbdb1*/
  (*(void (__fastcall **)(cocos2d::CCLayer *, __int64))(*(_QWORD *)v2 + 992LL))(v2, v4); /*0x3dbdb6*/
  LOBYTE(v5) = 1; /*0x3dbdc0*/
  (*(void (__fastcall **)(cocos2d::CCLayer *, __int64))(*(_QWORD *)v2 + 1008LL))(v2, v5); /*0x3dbdc5*/
  v7 = cocos2d::CCDirector::sharedDirector(v6); /*0x3dbdcb*/
  cocos2d::CCDirector::getWinSize(v7, v154); /*0x3dbdd8*/
  v10 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v9, v8); /*0x3dbdde*/
  cocos2d::CCTextureCache::addImage(v10, "TowerSheet.png", 0); /*0x3dbdf1*/
  v11 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x3dbdf7*/
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(v11, "TowerSheet.plist"); /*0x3dbe07*/
  v12 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_arrow_03_001.png"); /*0x3dbe1a*/
  (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v12 + 40) + 40LL))((__int64)v12 + 320, 0); /*0x3dbe2d*/
  v13 = (struct cocos2d::CCMenuItem *)CCMenuItemSpriteExtra_create(v12, 0, v2, LevelAreaInnerLayer_onBack); /*0x3dbe44*/
  *((_DWORD *)v13 + 93) = 1070386381; /*0x3dbe47*/
  v14 = cocos2d::CCFadeIn::create(0.30000001); /*0x3dbe59*/
  cocos2d::CCNode::runAction(v12, v14); /*0x3dbe65*/
  v15 = cocos2d::CCMenu::create(v13, 0); /*0x3dbe76*/
  v153 = v15; /*0x3dbe79*/
  (*(void (__fastcall **)(cocos2d::CCLayer *, struct cocos2d::CCMenu *, __int64))(*(_QWORD *)v2 + 456LL))(v2, v15, 1); /*0x3dbe94*/
  v16 = *(_QWORD *)v15; /*0x3dbe97*/
  v18 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v17); /*0x3dbe9a*/
  v19 = cocos2d::CCDirector::getScreenTop(v18) - 23.0; /*0x3dbeac*/
  v21 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v20); /*0x3dbeb4*/
  v22 = cocos2d::CCDirector::getScreenLeft(v21) + 24.0; /*0x3dbec3*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v149, v22, v19); /*0x3dbed6*/
  (*(void (__fastcall **)(struct cocos2d::CCMenu *, __int64))(v16 + 184))(v15, v23); /*0x3dbee2*/
  if ( *(_BYTE *)(cocos2d::CCApplication::sharedApplication(v24) + 209) ) /*0x3dbeee*/
    sub_6DEB0(v2, v13); /*0x3dbefd*/
  v27 = (cocos2d::CCNode *)cocos2d::CCNode::create(v26, v25); /*0x3dbf08*/
  (*(void (__fastcall **)(cocos2d::CCLayer *, cocos2d::CCNode *))(*(_QWORD *)v2 + 464LL))(v2, v27); /*0x3dbf1c*/
  v151 = cocos2d::CCMenu::create(v29, v28, v30, v31); /*0x3dbf25*/
  v32 = cocos2d::CCSprite::createWithSpriteFrameName("towerBG_01_001.png"); /*0x3dbf30*/
  (*(void (__fastcall **)(cocos2d::CCNode *, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)v27 + 456LL))(v27, v32, 1); /*0x3dbf4c*/
  v33 = *(_QWORD *)v27; /*0x3dbf4f*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v149, v154[0] * 0.5, v154[1] * 0.5); /*0x3dbf71*/
  (*(void (__fastcall **)(cocos2d::CCNode *, __int64))(v33 + 184))(v27, v34); /*0x3dbf7d*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v167); /*0x3dbf87*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v168); /*0x3dbf91*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v169); /*0x3dbf9b*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v170); /*0x3dbfa5*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v149, -95.5, -89.25); /*0x3dbfc3*/
  cocos2d::CCPoint::operator=(v167, v35); /*0x3dbfd0*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v149, 103.75, -33.5); /*0x3dbfeb*/
  cocos2d::CCPoint::operator=(v168, v36); /*0x3dbff8*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v149, -95.5, 21.25); /*0x3dc00e*/
  cocos2d::CCPoint::operator=(v169, v37); /*0x3dc01b*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v158, 57.5, 75.5); /*0x3dc035*/
  cocos2d::CCPoint::operator=(v170, v38); /*0x3dc042*/
  v39 = 0; /*0x3dc048*/
  v148 = 0; /*0x3dc04a*/
  v40 = 0; /*0x3dc04e*/
  v147 = 0; /*0x3dc050*/
  while ( 1 ) /*0x3dc070*/
  {
    v41 = *(_QWORD *)&qword_905FB0; /*0x3dc070*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x3dc07a*/
    {
      v159 = operator new(0x690u); /*0x3dc086*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v159); /*0x3dc093*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x3dc0a4*/
      v41 = *(_QWORD *)&qword_905FB0; /*0x3dc0a6*/
    }
    v42 = v40 + 5001; /*0x3dc0ad*/
    MainLevel = GameLevelManager_getMainLevel(v41, v40 + 5001, 1u); /*0x3dc0bf*/
    v44 = qword_905FE0; /*0x3dc0c2*/
    if ( !qword_905FE0 ) /*0x3dc0cc*/
    {
      v160 = operator new(0x3E8u); /*0x3dc0d8*/
      qword_905FE0 = sub_2D2B40(v160); /*0x3dc0e5*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x3dc0f6*/
      v44 = qword_905FE0; /*0x3dc0f8*/
    }
    v45 = sub_2DDD20(v44, v42); /*0x3dc107*/
    v136 = v45; /*0x3dc10a*/
    if ( !v40 ) /*0x3dc110*/
      goto LABEL_14; /*0x3dc110*/
    v46 = qword_905FE0; /*0x3dc112*/
    if ( !qword_905FE0 ) /*0x3dc11c*/
    {
      v161 = operator new(0x3E8u); /*0x3dc128*/
      qword_905FE0 = sub_2D2B40(v161); /*0x3dc135*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x3dc146*/
      v46 = qword_905FE0; /*0x3dc148*/
    }
    if ( (unsigned __int8)sub_2DDD20(v46, (unsigned int)(v40 + 5000)) ) /*0x3dc153*/
LABEL_14:
      v47 = 1; /*0x3dc160*/
    else
      v47 = 0; /*0x3dc15c*/
    v135 = v47; /*0x3dc162*/
    if ( v45 ) /*0x3dc169*/
      v148 = v39 + 1; /*0x3dc16d*/
    *(_OWORD *)v164 = 0; /*0x3dc174*/
    v165 = 0; /*0x3dc17a*/
    v166 = 0; /*0x3dc17e*/
    v164[0] = (void *)sub_3C460(32); /*0x3dc18c*/
    v165 = 24; /*0x3dc190*/
    v166 = 31; /*0x3dc198*/
    strcpy((char *)v164[0], "towerDoor_locked_001.png"); /*0x3dc1a7*/
    if ( v45 ) /*0x3dc1be*/
    {
      v48 = v166; /*0x3dc1c4*/
      if ( v166 < 0x16 ) /*0x3dc1cc*/
      {
        v50 = v166 >> 1; /*0x3dc204*/
        if ( v166 <= 0x7FFFFFFFFFFFFFFFLL - (v166 >> 1) ) /*0x3dc21a*/
        {
          v51 = 31; /*0x3dc225*/
          if ( v50 + v166 > 0x1F ) /*0x3dc22d*/
            v51 = v50 + v166; /*0x3dc22d*/
        }
        else
        {
          v51 = 0x7FFFFFFFFFFFFFFFLL; /*0x3dc21c*/
        }
        v52 = (char *)sub_3C460(v51 + 1); /*0x3dc235*/
        v165 = 22; /*0x3dc23a*/
        v166 = v51; /*0x3dc242*/
        strcpy(v52, "towerDoor_open_001.png"); /*0x3dc24d*/
LABEL_33:
        v56 = v52; /*0x3dc31d*/
        if ( v48 > 0xF ) /*0x3dc324*/
        {
          v57 = v164[0]; /*0x3dc32a*/
          if ( v48 + 1 >= 0x1000 ) /*0x3dc338*/
          {
            v57 = (void *)*((_QWORD *)v164[0] - 1); /*0x3dc33a*/
            if ( (unsigned __int64)((char *)v164[0] - (char *)v57 - 8) > 0x1F ) /*0x3dc34d*/
              invoke_watson(0, 0, 0, 0, 0); /*0x3dc630*/
          }
          j_j_free(v57); /*0x3dc353*/
        }
        v45 = v136; /*0x3dc358*/
        v164[0] = v56; /*0x3dc35d*/
        goto LABEL_38; /*0x3dc35d*/
      }
      v49 = v164[0]; /*0x3dc1d6*/
      v165 = 22; /*0x3dc1db*/
      memmove(v164[0], "towerDoor_open_001.png", 0x16u); /*0x3dc1f3*/
      v49[22] = 0; /*0x3dc1f8*/
    }
    else
    {
      if ( !v47 ) /*0x3dc26f*/
        goto LABEL_39; /*0x3dc26f*/
      v48 = v166; /*0x3dc275*/
      if ( v166 < 0x1A ) /*0x3dc27d*/
      {
        v54 = v166 >> 1; /*0x3dc2b5*/
        if ( v166 <= 0x7FFFFFFFFFFFFFFFLL - (v166 >> 1) ) /*0x3dc2cb*/
        {
          v55 = 31; /*0x3dc2d6*/
          if ( v166 + v54 > 0x1F ) /*0x3dc2de*/
            v55 = v166 + v54; /*0x3dc2de*/
        }
        else
        {
          v55 = 0x7FFFFFFFFFFFFFFFLL; /*0x3dc2cd*/
        }
        v52 = (char *)sub_3C460(v55 + 1); /*0x3dc2e6*/
        v165 = 26; /*0x3dc2eb*/
        v166 = v55; /*0x3dc2f3*/
        strcpy(v52, "towerDoor_unlocked_001.png"); /*0x3dc2fe*/
        goto LABEL_33; /*0x3dc2fe*/
      }
      v53 = v164[0]; /*0x3dc287*/
      v165 = 26; /*0x3dc28c*/
      memmove(v164[0], "towerDoor_unlocked_001.png", 0x1Au); /*0x3dc2a4*/
      v53[26] = 0; /*0x3dc2a9*/
    }
LABEL_38:
    v47 = v135; /*0x3dc361*/
LABEL_39:
    v58 = v164; /*0x3dc366*/
    if ( v166 > 0xF ) /*0x3dc36f*/
      v58 = (void **)v164[0]; /*0x3dc36f*/
    v155 = cocos2d::CCSprite::createWithSpriteFrameName((const char *)v58); /*0x3dc37a*/
    v162 = operator new(0x208u); /*0x3dc388*/
    v59 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v162); /*0x3dc394*/
    if ( !v59 ) /*0x3dc39a*/
      goto LABEL_45; /*0x3dc39a*/
    if ( !(unsigned __int8)sub_47940((_DWORD)v59, (_DWORD)v155, 0, (_DWORD)v2, (__int64)LevelAreaInnerLayer_onDoor) ) /*0x3dc3bf*/
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v59 + 8LL))(v59, 1); /*0x3dc3d1*/
LABEL_45:
      v59 = 0; /*0x3dc3d4*/
      goto LABEL_46; /*0x3dc3d4*/
    }
    cocos2d::CCObject::autorelease(v59); /*0x3dc3c1*/
LABEL_46:
    *((_WORD *)v59 + 204) = 256; /*0x3dc3d6*/
    (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)v59 + 64LL))(v59, v42); /*0x3dc3e8*/
    (*(void (__fastcall **)(__int64, cocos2d::CCObject *))(*(_QWORD *)v151 + 464LL))(v151, v59); /*0x3dc3f5*/
    if ( !v45 && !v47 ) /*0x3dc402*/
    {
      v139 = -6703; /*0x3dc404*/
      v140 = -6703; /*0x3dc410*/
      v141 = -1; /*0x3dc415*/
      (**((void (__fastcall ***)(__int64, __int16 *))v155 + 40))((__int64)v155 + 320, &v140); /*0x3dc42d*/
      (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)v59 + 936LL))(v59, 0); /*0x3dc437*/
    }
    v60 = *(_QWORD *)v59; /*0x3dc43d*/
    v61 = &v167[8 * v147]; /*0x3dc449*/
    cocos2d::CCNode::convertToNodeSpace(v151, v163, v61); /*0x3dc459*/
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v60 + 184))(v59, v62); /*0x3dc465*/
    if ( v45 ) /*0x3dc46e*/
    {
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v157, 0.0, 32.0); /*0x3dc47e*/
      cocos2d::CCPoint::operator+(v61, v156, v63); /*0x3dc48e*/
      for ( i = 1; i <= 3; ++i ) /*0x3dc494*/
      {
        v65 = qword_905FE0; /*0x3dc4a2*/
        if ( !qword_905FE0 ) /*0x3dc4ac*/
        {
          v150 = operator new(0x3E8u); /*0x3dc4b8*/
          qword_905FE0 = sub_2D2B40(v150); /*0x3dc4c6*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x3dc4d7*/
          v65 = qword_905FE0; /*0x3dc4d9*/
        }
        v66 = sub_261000( /*0x3dc4f3*/
                MainLevel,
                (unsigned int)i,
                (unsigned int)(*(_DWORD *)(MainLevel + 992) - *(_DWORD *)(MainLevel + 996)));
        if ( (unsigned __int8)sub_2DFF60(v65, v66) ) /*0x3dc4fe*/
        {
          v67 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_coinsIcon_001.png"); /*0x3dc514*/
          v142 = -1; /*0x3dc51e*/
          v143 = -1; /*0x3dc52a*/
          v68 = &v142; /*0x3dc52e*/
        }
        else
        {
          v144 = -7711; /*0x3dc535*/
          v145 = -7711; /*0x3dc541*/
          v146 = -31; /*0x3dc546*/
          v68 = &v145; /*0x3dc54b*/
          v67 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_coinsIcon_gray_001.png"); /*0x3dc55d*/
        }
        (**((void (__fastcall ***)(__int64, __int16 *))v67 + 40))((__int64)v67 + 320, v68); /*0x3dc56d*/
        (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v67 + 160LL))(v67); /*0x3dc580*/
        (*(void (__fastcall **)(cocos2d::CCNode *, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)v27 + 456LL))( /*0x3dc598*/
          v27,
          v67,
          10);
        v69 = 0; /*0x3dc59a*/
        if ( i == 2 ) /*0x3dc5a0*/
          v69 = 8; /*0x3dc5a0*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v138, (float)(i - 2) * 20.0, (float)v69); /*0x3dc5bf*/
        cocos2d::CCPoint::operator+(v156, v149, v70); /*0x3dc5d1*/
        (*(void (__fastcall **)(struct cocos2d::CCSprite *, _BYTE *))(*(_QWORD *)v67 + 184LL))(v67, v149); /*0x3dc5e2*/
      }
      v2 = v152; /*0x3dc5f3*/
    }
    sub_3C310(v164); /*0x3dc600*/
    v40 = v147 + 1; /*0x3dc609*/
    v147 = v40; /*0x3dc60b*/
    if ( v40 >= 4 ) /*0x3dc612*/
      break; /*0x3dc612*/
    v39 = v148; /*0x3dc614*/
  }
  v71 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("towerLockedArrow_001.png"); /*0x3dc644*/
  v138 = operator new(0x208u); /*0x3dc651*/
  v72 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v138); /*0x3dc65e*/
  if ( !v72 ) /*0x3dc664*/
  {
LABEL_67:
    v72 = 0; /*0x3dc69d*/
    goto LABEL_68; /*0x3dc69d*/
  }
  if ( !(unsigned __int8)sub_47940((_DWORD)v72, v71, 0, (_DWORD)v2, (__int64)LevelAreaInnerLayer_onNextFloor) ) /*0x3dc688*/
  {
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v72 + 8LL))(v72, 1); /*0x3dc69a*/
    goto LABEL_67; /*0x3dc69a*/
  }
  cocos2d::CCObject::autorelease(v72); /*0x3dc68a*/
LABEL_68:
  *((_QWORD *)v2 + 52) = v72; /*0x3dc6a0*/
  v73 = v151; /*0x3dc6a8*/
  (*(void (__fastcall **)(__int64, cocos2d::CCObject *))(*(_QWORD *)v151 + 464LL))(v151, v72); /*0x3dc6b5*/
  v74 = **((_QWORD **)v2 + 52); /*0x3dc6c3*/
  v75 = *((_QWORD *)v2 + 52); /*0x3dc6c6*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v138, -96.0, 108.0); /*0x3dc6de*/
  cocos2d::CCNode::convertToNodeSpace(v73, &v150, v76); /*0x3dc6ef*/
  (*(void (__fastcall **)(__int64, __int64))(v74 + 184))(v75, v77); /*0x3dc6fb*/
  (*(void (__fastcall **)(cocos2d::CCNode *, __int64, __int64))(*(_QWORD *)v27 + 456LL))(v27, v73, 2); /*0x3dc710*/
  for ( j = 0; j < 2; ++j ) /*0x3dc716*/
  {
    v79 = cocos2d::CCSprite::createWithSpriteFrameName("towerTorchInner_001.png"); /*0x3dc74d*/
    (*(void (__fastcall **)(cocos2d::CCNode *, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)v27 + 456LL))( /*0x3dc766*/
      v27,
      v79,
      4);
    v80 = *(_QWORD *)v79; /*0x3dc769*/
    v81 = 195; /*0x3dc76c*/
    if ( !j ) /*0x3dc773*/
      v81 = -195; /*0x3dc773*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v138, (float)v81, 4.0); /*0x3dc787*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v80 + 184))(v79, v82); /*0x3dc793*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v150, 0.0, 33.0); /*0x3dc7a4*/
    v84 = v83; /*0x3dc7aa*/
    v85 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v79 + 200LL))(v79); /*0x3dc7ba*/
    cocos2d::CCPoint::operator+(v85, &v152, v84); /*0x3dc7c6*/
    LevelAreaLayer_addTorch((_DWORD)v27, (unsigned int)&v152, 2, v86, 4, 1, 0, 0); /*0x3dc7f3*/
  }
  if ( !a2 ) /*0x3dc808*/
  {
    (*(void (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v27 + 160LL))(v27); /*0x3dc818*/
    v87 = cocos2d::CCScaleTo::create(1.0, 1.0); /*0x3dc824*/
    v88 = cocos2d::CCEaseExponentialOut::create(v87); /*0x3dc82d*/
    cocos2d::CCNode::runAction(v27, v88); /*0x3dc839*/
  }
  v89 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_secretLock4_small_001.png"); /*0x3dc84c*/
  (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v89 + 40) + 40LL))((__int64)v89 + 320, 0); /*0x3dc85f*/
  v90 = cocos2d::CCFadeTo::create(2.0, 0xC8u); /*0x3dc875*/
  v91 = cocos2d::CCDelayTime::create(0.5); /*0x3dc880*/
  v92 = cocos2d::CCSequence::create(v91, v90, 0); /*0x3dc88f*/
  cocos2d::CCNode::runAction(v89, v92); /*0x3dc89b*/
  v138 = operator new(0x208u); /*0x3dc8ab*/
  v93 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v138); /*0x3dc8b8*/
  if ( v93 ) /*0x3dc8be*/
  {
    if ( (unsigned __int8)sub_47940((_DWORD)v93, (_DWORD)v89, 0, (_DWORD)v2, (__int64)LevelAreaInnerLayer_onOnlineVault) ) /*0x3dc8d8*/
    {
      cocos2d::CCObject::autorelease(v93); /*0x3dc8e4*/
      goto LABEL_79; /*0x3dc8ea*/
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v93 + 8LL))(v93, 1); /*0x3dc8f4*/
  }
  v93 = 0; /*0x3dc8f7*/
LABEL_79:
  v94 = v153; /*0x3dc8fa*/
  (*(void (__fastcall **)(struct cocos2d::CCMenu *, cocos2d::CCObject *))(*(_QWORD *)v153 + 464LL))(v153, v93); /*0x3dc907*/
  v95 = *(_QWORD *)v93; /*0x3dc90d*/
  v97 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v96); /*0x3dc910*/
  v98 = cocos2d::CCDirector::getScreenRight(v97) - 22.0; /*0x3dc91f*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v138, v98, 23.0); /*0x3dc937*/
  cocos2d::CCNode::convertToNodeSpace(v94, &v150, v99); /*0x3dc948*/
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v95 + 184))(v93, v100); /*0x3dc954*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v138, 0.0, -2.0); /*0x3dc96a*/
  v102 = v101; /*0x3dc970*/
  v103 = (*(__int64 (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v27 + 200LL))(v27); /*0x3dc980*/
  cocos2d::CCPoint::operator+(v103, &v153, v102); /*0x3dc98c*/
  (*(void (__fastcall **)(cocos2d::CCNode *, struct cocos2d::CCMenu **))(*(_QWORD *)v27 + 184LL))(v27, &v153); /*0x3dc99c*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v138, 0.0, 4.0); /*0x3dc9ae*/
  v105 = cocos2d::CCMoveBy::create(2.0, v104); /*0x3dc9ba*/
  v106 = cocos2d::CCEaseInOut::create(v105, 2.0); /*0x3dc9cc*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v138, 0.0, -4.0); /*0x3dc9df*/
  v108 = cocos2d::CCMoveBy::create(2.0, v107); /*0x3dc9eb*/
  v109 = cocos2d::CCEaseInOut::create(v108, 2.0); /*0x3dc9f7*/
  v110 = cocos2d::CCSequence::create(v106, v109, 0); /*0x3dca06*/
  v111 = cocos2d::CCRepeatForever::create(v110); /*0x3dca0f*/
  cocos2d::CCNode::runAction(v27, v111); /*0x3dca1b*/
  v112 = cocos2d::CCCallFunc::create(v2, LevelAreaInnerLayer_tryResumeTowerMusic); /*0x3dca31*/
  v113 = cocos2d::CCDelayTime::create(0.0); /*0x3dca37*/
  v114 = cocos2d::CCSequence::create(v113, v112, 0); /*0x3dca46*/
  cocos2d::CCNode::runAction(v2, v114); /*0x3dca52*/
  *(_OWORD *)v164 = 0; /*0x3dca5b*/
  v165 = 0; /*0x3dca5f*/
  v166 = 0; /*0x3dca63*/
  v164[0] = (void *)sub_3C460(32); /*0x3dca71*/
  v165 = 19; /*0x3dca75*/
  v166 = 31; /*0x3dca7d*/
  strcpy((char *)v164[0], "GJ_infoIcon_001.png"); /*0x3dca8c*/
  v115 = (cocos2d::CCNode *)sub_4C150(v164); /*0x3dcab1*/
  sub_3C310(v164); /*0x3dcab8*/
  (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v115 + 40) + 40LL))((__int64)v115 + 320, 0); /*0x3dcacd*/
  (*(void (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v115 + 160LL))(v115); /*0x3dcae5*/
  v116 = cocos2d::CCFadeTo::create(1.0, 0xC8u); /*0x3dcaf2*/
  v117 = cocos2d::CCDelayTime::create(0.1); /*0x3dcafd*/
  v118 = cocos2d::CCSequence::create(v117, v116, 0); /*0x3dcb0c*/
  cocos2d::CCNode::runAction(v115, v118); /*0x3dcb18*/
  v138 = operator new(0x208u); /*0x3dcb28*/
  v119 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v138); /*0x3dcb35*/
  if ( v119 ) /*0x3dcb3b*/
  {
    if ( (unsigned __int8)sub_47940((_DWORD)v119, (_DWORD)v115, 0, (_DWORD)v2, (__int64)sub_3DD4A0) ) /*0x3dcb55*/
    {
      cocos2d::CCObject::autorelease(v119); /*0x3dcb61*/
      goto LABEL_84; /*0x3dcb67*/
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v119 + 8LL))(v119, 1); /*0x3dcb71*/
  }
  v119 = 0; /*0x3dcb74*/
LABEL_84:
  (*(void (__fastcall **)(struct cocos2d::CCMenu *, cocos2d::CCObject *))(*(_QWORD *)v94 + 464LL))(v94, v119); /*0x3dcb77*/
  v120 = *(_QWORD *)v119; /*0x3dcb86*/
  v122 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v121); /*0x3dcb89*/
  v123 = cocos2d::CCDirector::getScreenTop(v122) - 20.0; /*0x3dcb9b*/
  v125 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v124); /*0x3dcba0*/
  v126 = cocos2d::CCDirector::getScreenRight(v125) - 20.0; /*0x3dcbaf*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v138, v126, v123); /*0x3dcbbf*/
  cocos2d::CCNode::convertToNodeSpace(v94, &v150, v127); /*0x3dcbd0*/
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v120 + 184))(v119, v128); /*0x3dcbdc*/
  if ( v148 == 4 ) /*0x3dcbe7*/
  {
    v130 = qword_905FD0; /*0x3dcbed*/
    if ( !qword_905FD0 ) /*0x3dcbf7*/
    {
      v157 = operator new(0x6E8u); /*0x3dcc03*/
      qword_905FD0 = sub_2723A0(v157); /*0x3dcc10*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3dcc21*/
      v130 = qword_905FD0; /*0x3dcc23*/
    }
    if ( !(unsigned __int8)sub_27B350(v130, &word_75558C, v129) ) /*0x3dcc31*/
    {
      *((_BYTE *)v2 + 424) = 1; /*0x3dcc3a*/
      v131 = cocos2d::CCCallFunc::create(v2, sub_3DCE40); /*0x3dcc53*/
      v132 = cocos2d::CCDelayTime::create(1.0); /*0x3dcc59*/
      v133 = cocos2d::CCSequence::create(v132, v131, 0); /*0x3dcc68*/
      cocos2d::CCNode::runAction(v2, v133); /*0x3dcc74*/
      goto LABEL_90; /*0x3dcc7a*/
    }
  }
  else if ( v148 < 4 ) /*0x3dcc7c*/
  {
LABEL_90:
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v2 + 52) + 936LL))(*((_QWORD *)v2 + 52), 0); /*0x3dcc7e*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v2 + 52) + 336LL))(*((_QWORD *)v2 + 52), 0); /*0x3dcc9e*/
  }
  if ( !*((_BYTE *)v2 + 424) ) /*0x3dcca4*/
  {
    v134 = qword_905FD0; /*0x3dccaf*/
    if ( !qword_905FD0 ) /*0x3dccb9*/
    {
      v138 = operator new(0x6E8u); /*0x3dccc5*/
      qword_905FD0 = sub_2723A0(v138); /*0x3dccd3*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3dcce4*/
      v134 = qword_905FD0; /*0x3dcce6*/
    }
    *(_BYTE *)(v134 + 1096) = 0; /*0x3dcced*/
  }
  return 1; /*0x3dccf6*/
}

// [5/12] Address: 0x3dcd40
// Method: LevelAreaInnerLayer::onNextFloor
// Hidden C++ exception states: #wind=1
void __fastcall LevelAreaInnerLayer_onNextFloor(__int64 a1)
{
  __int64 v1; // rax
  cocos2d::CCObject *v2; // rbx
  __int128 v3; // [rsp+50h] [rbp-48h] BYREF
  __int64 v4; // [rsp+60h] [rbp-38h]
  __int64 v5; // [rsp+68h] [rbp-30h]
  _BYTE v6[40]; // [rsp+70h] [rbp-28h] BYREF

  if ( !*(_BYTE *)(a1 + 424) ) /*0x3dcd49*/
  {
    v3 = 0; /*0x3dcd59*/
    *(_QWORD *)&v3 = sub_3C460(64); /*0x3dcd74*/
    v4 = 48; /*0x3dcd79*/
    v5 = 63; /*0x3dcd82*/
    strcpy((char *)v3, "The Tower Second Floor is...\n<cg>Coming Soon</c>"); /*0x3dcd92*/
    v1 = sub_3E4F0(v6, &v3); /*0x3dcdc5*/
    v2 = FLAlertLayer_create_0(0, (int)"Locked", v1, (__int64)"OK", 0, 1132068864, 0, 0, 1065353216); /*0x3dce10*/
    sub_3C310(&v3); /*0x3dce18*/
    (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v2 + 1064LL))(v2); /*0x3dce2a*/
  }
}

// [6/12] Address: 0x3dd420
// Method: LevelAreaInnerLayer::dialogClosed
__int64 __fastcall LevelAreaInnerLayer_dialogClosed(__int64 a1)
{
  __int64 v2; // rax
  struct cocos2d::CCAction *v3; // rbx
  cocos2d::CCNode *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx

  *(_BYTE *)(a1 + 16) = 0; /*0x3dd42a*/
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 952LL))(*(_QWORD *)(a1 + 8)); /*0x3dd438*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v2 + 320) + 40LL))(v2 + 320, 0); /*0x3dd44a*/
  v3 = cocos2d::CCFadeIn::create(1.0); /*0x3dd45f*/
  v4 = (cocos2d::CCNode *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 952LL))(*(_QWORD *)(a1 + 8)); /*0x3dd465*/
  cocos2d::CCNode::runAction(v4, v3); /*0x3dd471*/
  LOBYTE(v5) = 1; /*0x3dd47b*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 8) + 936LL))(*(_QWORD *)(a1 + 8), v5); /*0x3dd480*/
  LOBYTE(v6) = 1; /*0x3dd48a*/
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 8) + 336LL))(*(_QWORD *)(a1 + 8), v6);
}

// [7/12] Address: 0x3dd990
// Method: LevelAreaInnerLayer::tryResumeTowerMusic
// Hidden C++ exception states: #wind=2
__int64 __fastcall LevelAreaInnerLayer_tryResumeTowerMusic(__int64 a1)
{
  _DWORD v2[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h]
  __int64 v4; // [rsp+38h] [rbp-10h]
  void *v5; // [rsp+60h] [rbp+18h]

  v2[3] = 0; /*0x3dd99e*/
  v3 = 11; /*0x3dd9a6*/
  v4 = 15; /*0x3dd9af*/
  strcpy((char *)v2, "tower01.mp3"); /*0x3dd9c0*/
  if ( !qword_905FD0 ) /*0x3dd9ea*/
  {
    v5 = operator new(0x6E8u); /*0x3dd9f6*/
    qword_905FD0 = sub_2723A0(v5); /*0x3dda04*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3dda15*/
  }
  return GameManager_fadeInMusic(a1, (__int64)v2); /*0x3dda22*/
}

// [8/12] Address: 0x3dda30
// Method: LevelAreaInnerLayer::onDoor
// Hidden C++ exception states: #wind=3
void __fastcall LevelAreaInnerLayer_onDoor(_BYTE *a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // ecx
  cocos2d::CCNode *v6; // rbx
  struct cocos2d::CCAction *v7; // rax
  __int64 v8; // rcx
  struct cocos2d::CCFiniteTimeAction *v9; // rbx
  __int64 v10; // rax
  struct cocos2d::CCAction *v11; // rax
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]
  __int64 v14; // [rsp+48h] [rbp-10h]
  __int128 *v15; // [rsp+60h] [rbp+8h] BYREF
  void *v16; // [rsp+70h] [rbp+18h]

  if ( !a1[424] ) /*0x3dda3d*/
  {
    a1[424] = 1; /*0x3dda4a*/
    *((_DWORD *)a1 + 107) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x3dda5a*/
    v15 = &v12; /*0x3dda65*/
    v12 = 0; /*0x3dda6d*/
    v13 = 0; /*0x3dda74*/
    v14 = 0; /*0x3dda79*/
    *(_QWORD *)&v12 = sub_3C460(32); /*0x3dda88*/
    v13 = 16; /*0x3dda8d*/
    v14 = 31; /*0x3dda96*/
    strcpy((char *)v12, "playSound_01.ogg"); /*0x3ddaa6*/
    v5 = qword_905F60; /*0x3ddaad*/
    if ( !qword_905F60 ) /*0x3ddab7*/
    {
      v16 = operator new(0x8A8u); /*0x3ddac3*/
      qword_905F60 = sub_5AE20(v16); /*0x3ddad1*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x3ddae2*/
      v5 = qword_905F60; /*0x3ddae4*/
    }
    FMODAudioEngine_playEffect_0(v5, (__int64)&v12, v3, v4, 1050253722); /*0x3ddb09*/
    LODWORD(v15) = 0; /*0x3ddb1a*/
    v6 = cocos2d::CCLayerColor::create((const struct cocos2d::_ccColor4B *)&v15); /*0x3ddb29*/
    (*(void (__fastcall **)(_BYTE *, cocos2d::CCNode *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v6, 90); /*0x3ddb42*/
    v7 = cocos2d::CCFadeIn::create(0.5); /*0x3ddb4d*/
    cocos2d::CCNode::runAction(v6, v7); /*0x3ddb59*/
    v8 = qword_905F60; /*0x3ddb5f*/
    if ( !qword_905F60 ) /*0x3ddb69*/
    {
      v15 = (__int128 *)operator new(0x8A8u); /*0x3ddb75*/
      qword_905F60 = sub_5AE20(v15); /*0x3ddb83*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x3ddb94*/
      v8 = qword_905F60; /*0x3ddb96*/
    }
    FMODAudioEngine_fadeOutMusic(v8, 0.5); /*0x3ddba5*/
    v9 = cocos2d::CCDelayTime::create(0.5); /*0x3ddbb8*/
    v10 = cocos2d::CCCallFunc::create(a1, sub_3DDC00); /*0x3ddbc5*/
    v11 = cocos2d::CCSequence::create(v9, v10, 0); /*0x3ddbd4*/
    cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v11); /*0x3ddbe0*/
  }
}

// [9/12] Address: 0x3ddd40
// Method: LevelAreaInnerLayer::onOnlineVault
// Hidden C++ exception states: #wind=1
bool __fastcall LevelAreaInnerLayer_onOnlineVault(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct cocos2d::CCScene *v4; // rdi
  __int64 v5; // rcx
  char *v6; // rbx
  bool (__fastcall *v7)(__int64); // rdx
  bool v8; // al
  struct cocos2d::CCScene *v9; // rbx
  __int64 v10; // rcx
  cocos2d::CCDirector *v11; // rax

  v4 = (struct cocos2d::CCScene *)cocos2d::CCScene::create(a1, a2, a3, a4); /*0x3ddd55*/
  *(_QWORD *)(cocos2d::CCApplication::sharedApplication(v5) + 232) = v4; /*0x3ddd5e*/
  v6 = (char *)operator new(0x290u); /*0x3ddd6f*/
  cocos2d::CCLayer::CCLayer((cocos2d::CCLayer *)v6); /*0x3ddd7a*/
  *(_QWORD *)v6 = &SecretLayer5::`vftable'; /*0x3ddd87*/
  *((_QWORD *)v6 + 40) = &SecretLayer5::`vftable'; /*0x3ddd91*/
  *((_QWORD *)v6 + 41) = &SecretLayer5::`vftable'; /*0x3ddd9f*/
  *((_QWORD *)v6 + 42) = &SecretLayer5::`vftable'; /*0x3dddad*/
  *((_QWORD *)v6 + 43) = &SecretLayer5::`vftable'; /*0x3dddbb*/
  *((_QWORD *)v6 + 44) = &SecretLayer5::`vftable'; /*0x3dddc9*/
  *((_QWORD *)v6 + 51) = &SecretLayer5::`vftable'; /*0x3dddd7*/
  *((_QWORD *)v6 + 52) = &SecretLayer5::`vftable'; /*0x3ddde5*/
  *((_QWORD *)v6 + 53) = &SecretLayer5::`vftable'; /*0x3dddf3*/
  *((_QWORD *)v6 + 54) = &SecretLayer5::`vftable'; /*0x3dde01*/
  *((_QWORD *)v6 + 55) = -1; /*0x3dde08*/
  *((_QWORD *)v6 + 56) = 0; /*0x3dde15*/
  *((_DWORD *)v6 + 114) = 0; /*0x3dde1c*/
  *((_DWORD *)v6 + 115) = -1; /*0x3dde22*/
  *((_QWORD *)v6 + 58) = 0; /*0x3dde2c*/
  *((_QWORD *)v6 + 59) = 0; /*0x3dde33*/
  v6[488] = 0; /*0x3dde3a*/
  *((_QWORD *)v6 + 63) = 0; /*0x3dde41*/
  v6[512] = 0; /*0x3dde48*/
  *((_DWORD *)v6 + 129) = 0; /*0x3dde4f*/
  *(_OWORD *)(v6 + 520) = 0; /*0x3dde58*/
  *((_QWORD *)v6 + 67) = 0; /*0x3dde5f*/
  *((_QWORD *)v6 + 68) = 15; /*0x3dde66*/
  v6[520] = 0; /*0x3dde71*/
  v6[552] = 0; /*0x3dde78*/
  *((_QWORD *)v6 + 75) = 0; /*0x3dde7f*/
  *((_QWORD *)v6 + 76) = 0; /*0x3dde86*/
  *((_QWORD *)v6 + 77) = 0; /*0x3dde8d*/
  *((_DWORD *)v6 + 156) = -1; /*0x3dde94*/
  v7 = *(bool (__fastcall **)(__int64))(*(_QWORD *)v6 + 72LL); /*0x3ddea1*/
  if ( v7 == SecretLayer5_init ) /*0x3ddeb2*/
    v8 = SecretLayer5_init((__int64)v6); /*0x3ddeb4*/
  else
    v8 = v7((__int64)v6); /*0x3ddebb*/
  if ( v8 ) /*0x3ddec2*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v6); /*0x3ddec4*/
  }
  else
  {
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v6 + 8LL))(v6, 1); /*0x3dded4*/
    v6 = 0; /*0x3dded7*/
  }
  (*(void (__fastcall **)(struct cocos2d::CCScene *, char *))(*(_QWORD *)v4 + 464LL))(v4, v6); /*0x3ddee3*/
  v9 = cocos2d::CCTransitionFade::create(1.0, v4); /*0x3ddefa*/
  v11 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v10); /*0x3ddefd*/
  return cocos2d::CCDirector::replaceScene(v11, v9); /*0x3ddf09*/
}

// [10/12] Address: 0x3ddf20
// Method: LevelAreaInnerLayer::onBack
void __fastcall LevelAreaInnerLayer_onBack(_BYTE *a1)
{
  struct cocos2d::CCScene *v1; // rax
  struct cocos2d::CCScene *v2; // rbx
  __int64 v3; // rcx
  cocos2d::CCDirector *v4; // rax

  if ( !a1[424] ) /*0x3ddf24*/
  {
    (*(void (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x3ddf37*/
    v1 = (struct cocos2d::CCScene *)LevelAreaLayer_scene(); /*0x3ddf3d*/
    v2 = cocos2d::CCTransitionFade::create(0.5, v1); /*0x3ddf53*/
    v4 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v3); /*0x3ddf56*/
    cocos2d::CCDirector::replaceScene(v4, v2); /*0x3ddf6b*/
  }
}

// [11/12] Address: 0x3ddf80
// Method: LevelAreaInnerLayer::onExit
void __fastcall LevelAreaInnerLayer_onExit(cocos2d::CCLayer *a1)
{
  cocos2d::CCSpriteFrameCache *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  cocos2d::CCTextureCache *v5; // rax

  cocos2d::CCLayer::onExit(a1); /*0x3ddf89*/
  if ( *((_BYTE *)a1 + 432) ) /*0x3ddf8f*/
  {
    v2 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x3ddf98*/
    cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(v2, "TowerSheet.plist"); /*0x3ddfa8*/
    v5 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v4, v3); /*0x3ddfae*/
    cocos2d::CCTextureCache::removeTextureForKey(v5, "TowerSheet.png"); /*0x3ddfc3*/
  }
}

// [12/12] Address: 0x3ddfd0
// Method: LevelAreaInnerLayer::keyBackClicked
void __fastcall LevelAreaInnerLayer_keyBackClicked(__int64 a1)
{
  _BYTE *v1; // rcx
  struct cocos2d::CCScene *v2; // rax
  struct cocos2d::CCScene *v3; // rbx
  __int64 v4; // rcx
  cocos2d::CCDirector *v5; // rax

  v1 = (_BYTE *)(a1 - 336); /*0x3ddfd4*/
  if ( !v1[424] ) /*0x3ddfdb*/
  {
    (*(void (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v1 + 992LL))(v1, 0); /*0x3ddfee*/
    v2 = (struct cocos2d::CCScene *)LevelAreaLayer_scene(); /*0x3ddff4*/
    v3 = cocos2d::CCTransitionFade::create(0.5, v2); /*0x3de00a*/
    v5 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v4); /*0x3de00d*/
    cocos2d::CCDirector::replaceScene(v5, v3); /*0x3de022*/
  }
}
