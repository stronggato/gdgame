#include <Geode/binding/SecretLayer5.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/17] Address: 0x57a7a0
// Method: SecretLayer5::onExit
void __fastcall SecretLayer5_onExit(cocos2d::CCLayer *a1)
{
  cocos2d::CCSpriteFrameCache *v2; // rax
  cocos2d::CCTextureCache *v3; // rax

  cocos2d::CCLayer::onExit(a1); /*0x57a7a9*/
  if ( *((_BYTE *)a1 + 488) ) /*0x57a7af*/
  {
    v2 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x57a7b8*/
    cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(v2, "SecretSheet.plist"); /*0x57a7c8*/
    v3 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(); /*0x57a7ce*/
    cocos2d::CCTextureCache::removeTextureForKey(v3, "SecretSheet.png"); /*0x57a7e3*/
  }
}

// [2/17] Address: 0x583320
// Method: SecretLayer5::showFirstDialog
// Hidden C++ exception states: #wind=2
__int64 __fastcall SecretLayer5_showFirstDialog(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  cocos2d::CCArray *v6; // rbx
  int v7; // r9d
  struct cocos2d::CCObject *v8; // rax
  int v9; // r9d
  struct cocos2d::CCObject *v10; // rax
  int v11; // r9d
  struct cocos2d::CCObject *v12; // rax
  int v13; // r9d
  struct cocos2d::CCObject *v14; // rax
  __int64 DialogLayer; // rsi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rax
  char v22[16]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v23; // [rsp+40h] [rbp-40h]
  __int64 v24; // [rsp+48h] [rbp-38h]
  __int128 v25; // [rsp+50h] [rbp-30h] BYREF
  __int64 v26; // [rsp+60h] [rbp-20h]
  __int64 v27; // [rsp+68h] [rbp-18h]
  __int128 *v28; // [rsp+A8h] [rbp+28h] BYREF
  __int16 v29; // [rsp+B0h] [rbp+30h] BYREF
  char v30; // [rsp+B2h] [rbp+32h]

  v4 = qword_905FD0; /*0x58333a*/
  if ( !qword_905FD0 ) /*0x583344*/
  {
    v28 = (__int128 *)operator new(0x6E8u); /*0x583350*/
    qword_905FD0 = sub_2723A0(v28); /*0x58335d*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x58336e*/
    v4 = qword_905FD0; /*0x583370*/
  }
  LOBYTE(a3) = 1; /*0x583377*/
  sub_27B1C0(v4, "9", a3); /*0x583381*/
  v6 = (cocos2d::CCArray *)cocos2d::CCArray::create(v5); /*0x58338c*/
  v28 = &v25; /*0x583393*/
  v29 = -1; /*0x58339e*/
  v30 = -1; /*0x5833a9*/
  v25 = 0; /*0x5833af*/
  v26 = 0; /*0x5833b5*/
  v27 = 0; /*0x5833b9*/
  *(_QWORD *)&v25 = sub_3C460(48); /*0x5833c7*/
  v26 = 35; /*0x5833cb*/
  v27 = 47; /*0x5833d3*/
  strcpy((char *)v25, "Wait, you are not <cl>RubRub</c>..."); /*0x5833e2*/
  v22[15] = 0; /*0x583409*/
  v23 = 14; /*0x58340d*/
  v24 = 15; /*0x583415*/
  strcpy(v22, "The Gatekeeper"); /*0x583425*/
  v8 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v22, (unsigned int)&v25, 3, v7, 1, (__int64)&v29); /*0x583465*/
  cocos2d::CCArray::addObject(v6, v8); /*0x583470*/
  v28 = &v25; /*0x58347a*/
  v29 = -1; /*0x583485*/
  v30 = -1; /*0x583490*/
  v25 = 0; /*0x583496*/
  v26 = 0; /*0x58349a*/
  v27 = 0; /*0x58349e*/
  *(_QWORD *)&v25 = sub_3C460(64); /*0x5834af*/
  v26 = 57; /*0x5834b3*/
  v27 = 63; /*0x5834bb*/
  strcpy((char *)v25, "You seem to be skilled in the art of <co>deception</c>..."); /*0x5834ca*/
  v22[15] = 0; /*0x5834fe*/
  v23 = 14; /*0x583502*/
  v24 = 15; /*0x58350a*/
  strcpy(v22, "The Gatekeeper"); /*0x58351a*/
  v10 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v22, (unsigned int)&v25, 3, v9, 0, (__int64)&v29); /*0x583552*/
  cocos2d::CCArray::addObject(v6, v10); /*0x58355d*/
  v28 = &v25; /*0x583567*/
  v29 = -1; /*0x583572*/
  v30 = -1; /*0x58357d*/
  v25 = 0; /*0x583583*/
  v26 = 0; /*0x583587*/
  v27 = 0; /*0x58358b*/
  *(_QWORD *)&v25 = sub_3C460(64); /*0x583599*/
  v26 = 56; /*0x58359d*/
  v27 = 63; /*0x5835a5*/
  strcpy((char *)v25, "But it does not matter, your <cl>trickery</c> ends here."); /*0x5835b4*/
  v22[15] = 0; /*0x5835de*/
  v23 = 14; /*0x5835e2*/
  v24 = 15; /*0x5835ea*/
  strcpy(v22, "The Gatekeeper"); /*0x5835fa*/
  v12 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v22, (unsigned int)&v25, 3, v11, 0, (__int64)&v29); /*0x583632*/
  cocos2d::CCArray::addObject(v6, v12); /*0x58363d*/
  v28 = &v25; /*0x583647*/
  v29 = -1; /*0x583652*/
  v30 = -1; /*0x58365d*/
  v25 = 0; /*0x583663*/
  v26 = 0; /*0x583667*/
  v27 = 0; /*0x58366b*/
  *(_QWORD *)&v25 = sub_3C460(80); /*0x58367c*/
  v26 = 76; /*0x583680*/
  v27 = 79; /*0x583688*/
  strcpy((char *)v25, "<cr>Leave now, <d010>before you cause more problems<d010>.<d010>.<d010>.</c>"); /*0x583697*/
  v22[15] = 0; /*0x5836d5*/
  v23 = 14; /*0x5836d9*/
  v24 = 15; /*0x5836e1*/
  strcpy(v22, "The Gatekeeper"); /*0x5836f1*/
  v14 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v22, (unsigned int)&v25, 3, v13, 0, (__int64)&v29); /*0x583729*/
  cocos2d::CCArray::addObject(v6, v14); /*0x583734*/
  DialogLayer = DialogLayer_createDialogLayer(0, v6, 2); /*0x58374a*/
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 456LL))(a1, DialogLayer, 100); /*0x583763*/
  v17 = cocos2d::CCDirector::sharedDirector(v16); /*0x583766*/
  cocos2d::CCDirector::getWinSize(v17, &v28); /*0x583773*/
  v18 = **(_QWORD **)(DialogLayer + 560); /*0x583780*/
  v19 = *(_QWORD *)(DialogLayer + 560); /*0x583783*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v29, *(float *)&v28 * 0.5, *((float *)&v28 + 1) * 0.5); /*0x5837a4*/
  (*(void (__fastcall **)(__int64, __int64))(v18 + 184))(v19, v20); /*0x5837b0*/
  return sub_1734F0(DialogLayer, 2); /*0x5837be*/
}

// [3/17] Address: 0x584950
// Method: SecretLayer5::init
// Hidden C++ exception states: #wind=7
bool __fastcall SecretLayer5_init(__int64 a1)
{
  int v2; // r15d
  bool result; // al
  cocos2d::CCTextureCache *v4; // rax
  cocos2d::CCSpriteFrameCache *v5; // rax
  cocos2d::CCTextureCache *v6; // rax
  cocos2d::CCSpriteFrameCache *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  void **v13; // r12
  __int64 v14; // rdi
  char *v15; // rbx
  char *v16; // rax
  unsigned __int64 v17; // rbx
  void *v18; // rcx
  __int64 v19; // rsi
  char *v20; // rdi
  size_t v21; // rbx
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned __int64 i; // rdx
  struct cocos2d::CCSprite *v25; // rdi
  void (__fastcall *v26)(struct cocos2d::CCSprite *, __int64); // rbx
  __int64 v27; // rax
  __int64 v28; // rdi
  void (__fastcall *v29)(__int64, __int64); // rbx
  __int64 v30; // rax
  struct cocos2d::CCLabelBMFont *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  char *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  struct cocos2d::CCSprite *v43; // rax
  struct cocos2d::CCMenuItem *v44; // rdi
  struct cocos2d::CCMenu *v45; // r12
  __int64 v46; // rcx
  cocos2d::CCDirector *v47; // rax
  float v48; // xmm6_4
  __int64 v49; // rcx
  cocos2d::CCDirector *v50; // rax
  float v51; // xmm0_4
  void (__fastcall *v52)(struct cocos2d::CCMenu *, __int64); // rbx
  __int64 v53; // rax
  __int64 v54; // rcx
  void *v55; // rcx
  void *v56; // rcx
  __int64 v57; // rbx
  __int64 v58; // rsi
  void (__fastcall *v59)(__int64, __int64); // rdi
  __int64 v60; // rax
  __int64 v61; // rax
  struct cocos2d::CCSprite *v62; // rax
  __int64 v63; // rbx
  __int64 v64; // rsi
  void (__fastcall *v65)(__int64, __int64); // rdi
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rsi
  struct cocos2d::CCSprite *v71; // rax
  __int64 v72; // rbx
  void (__fastcall *v73)(__int64, __int64); // rdi
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rdi
  void (__fastcall *v77)(__int64, __int64); // rbx
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rdi
  void (__fastcall *v81)(__int64, __int64); // rbx
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rsi
  int v89; // edx
  cocos2d::CCString *v90; // rax
  const char *CString; // rbx
  __int64 v92; // rdx
  __int64 v93; // rcx
  cocos2d::CCTextureCache *v94; // rax
  cocos2d::CCString *v95; // rax
  const char *v96; // rbx
  __int64 v97; // rdx
  __int64 v98; // rcx
  cocos2d::CCTextureCache *v99; // rax
  cocos2d::CCString *v100; // rax
  const char *v101; // rbx
  __int64 v102; // rdi
  void (__fastcall *v103)(__int64, __int64); // rbx
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rcx
  cocos2d::CCObject *v107; // rax
  struct cocos2d::CCSprite *v108; // rsi
  void (__fastcall *v109)(struct cocos2d::CCSprite *, __int64); // rbx
  int v110; // eax
  __int64 v111; // rax
  __int64 v112; // rcx
  cocos2d::CCArray *v113; // rdi
  __int64 v114; // rax
  __int64 v115; // rbx
  __int64 v116; // rax
  int v117; // r9d
  cocos2d::CCArray *v118; // rbx
  struct cocos2d::CCObject *v119; // rax
  cocos2d::CCArray *v120; // rbx
  struct cocos2d::CCObject *v121; // rax
  __int64 v122; // r8
  __int64 v123; // rax
  __int64 v124; // rcx
  __int64 v125; // rbx
  struct cocos2d::CCFiniteTimeAction *v126; // rax
  struct cocos2d::CCAction *v127; // rax
  __int64 v128; // [rsp+40h] [rbp-C0h] BYREF
  void **v129; // [rsp+48h] [rbp-B8h] BYREF
  float v130; // [rsp+50h] [rbp-B0h] BYREF
  float v131; // [rsp+54h] [rbp-ACh]
  char v132[8]; // [rsp+58h] [rbp-A8h] BYREF
  char v133[8]; // [rsp+60h] [rbp-A0h] BYREF
  void *v134; // [rsp+68h] [rbp-98h] BYREF
  __int128 v135; // [rsp+70h] [rbp-90h] BYREF
  __int64 v136; // [rsp+80h] [rbp-80h]
  __int64 v137; // [rsp+88h] [rbp-78h]
  _BYTE v138[16]; // [rsp+90h] [rbp-70h] BYREF
  void *Block[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v140; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v141; // [rsp+B8h] [rbp-48h]
  _OWORD Src[4]; // [rsp+C0h] [rbp-40h] BYREF
  int v143; // [rsp+100h] [rbp+0h]
  int v144; // [rsp+110h] [rbp+10h] BYREF
  _DWORD v145[1251]; // [rsp+114h] [rbp+14h]

  v2 = 0; /*0x5849b3*/
  result = cocos2d::CCLayer::init((cocos2d::CCLayer *)a1); /*0x5849b6*/
  if ( result ) /*0x5849be*/
  {
    v4 = (cocos2d::CCTextureCache *)((__int64 (*)(void))cocos2d::CCTextureCache::sharedTextureCache)(); /*0x5849c4*/
    cocos2d::CCTextureCache::addImage(v4, "SecretSheet.png", 0); /*0x5849d7*/
    v5 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x5849dd*/
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(v5, "SecretSheet.plist"); /*0x5849ed*/
    v6 = (cocos2d::CCTextureCache *)((__int64 (*)(void))cocos2d::CCTextureCache::sharedTextureCache)(); /*0x5849f3*/
    cocos2d::CCTextureCache::addImage(v6, "TowerSheet.png", 0); /*0x584a06*/
    v7 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x584a0c*/
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(v7, "TowerSheet.plist"); /*0x584a1c*/
    v129 = Block; /*0x584a26*/
    *(_OWORD *)Block = 0; /*0x584a2e*/
    v140 = 0; /*0x584a32*/
    v141 = 0; /*0x584a36*/
    Block[0] = (void *)sub_3C460(32); /*0x584a44*/
    v140 = 16; /*0x584a48*/
    v141 = 31; /*0x584a50*/
    strcpy((char *)Block[0], "secretLoop04.ogg"); /*0x584a5f*/
    if ( !qword_905FD0 ) /*0x584a6e*/
    {
      v128 = (__int64)operator new(0x6E8u); /*0x584a7a*/
      qword_905FD0 = sub_2723A0(v128); /*0x584a88*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x584a99*/
    }
    GameManager_fadeInMusic(v8, (__int64)Block); /*0x584aa0*/
    LOBYTE(v9) = 1; /*0x584aa8*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 992LL))(a1, v9); /*0x584aad*/
    LOBYTE(v10) = 1; /*0x584ab6*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 1008LL))(a1, v10); /*0x584abb*/
    v12 = cocos2d::CCDirector::sharedDirector(v11); /*0x584ac1*/
    cocos2d::CCDirector::getWinSize(v12, &v130); /*0x584acf*/
    Src[0] = _mm_load_si128((const __m128i *)&xmmword_831290); /*0x584add*/
    Src[1] = _mm_load_si128((const __m128i *)&xmmword_831270); /*0x584aea*/
    Src[2] = _mm_load_si128((const __m128i *)&xmmword_831280); /*0x584af7*/
    Src[3] = _mm_load_si128((const __m128i *)&xmmword_831260); /*0x584b04*/
    v143 = 22349; /*0x584b09*/
    v13 = (void **)(a1 + 600); /*0x584b10*/
    v14 = *(_QWORD *)(a1 + 600); /*0x584b17*/
    if ( (unsigned __int64)((*(_QWORD *)(a1 + 616) - v14) >> 2) >= 0x11 ) /*0x584b2b*/
    {
      v17 = (*(_QWORD *)(a1 + 608) - v14) >> 2; /*0x584b5e*/
      v18 = *(void **)(a1 + 600); /*0x584b66*/
      if ( v17 >= 0x11 ) /*0x584b6d*/
      {
        memmove(v18, Src, 0x44u); /*0x584bb2*/
        v16 = (char *)(v14 + 68); /*0x584bb7*/
      }
      else
      {
        v19 = 4 * v17; /*0x584b6f*/
        memmove(v18, Src, 4 * v17); /*0x584b7a*/
        v20 = *(char **)(a1 + 608); /*0x584b7f*/
        v21 = 4 * (17 - v17); /*0x584b8c*/
        memmove(v20, (char *)Src + v19, v21); /*0x584ba1*/
        v16 = &v20[v21]; /*0x584ba6*/
      }
    }
    else
    {
      sub_98F60(a1 + 600, 17); /*0x584b35*/
      v15 = (char *)*v13; /*0x584b3a*/
      memmove(*v13, Src, 0x44u); /*0x584b4b*/
      v16 = v15 + 68; /*0x584b50*/
    }
    *(_QWORD *)(a1 + 608) = v16; /*0x584bbb*/
    v22 = time64(0); /*0x584bc2*/
    srand(v22); /*0x584bca*/
    v23 = rand(); /*0x584bd0*/
    v145[1248] = -1; /*0x584bd6*/
    v145[0] = v23; /*0x584be0*/
    for ( i = 1; i < 0x270; ++i ) /*0x584be3*/
    {
      v23 = i + 1812433253 * (v23 ^ (v23 >> 30)); /*0x584bfd*/
      v145[i] = v23; /*0x584bff*/
    }
    v144 = 624; /*0x584c0f*/
    sub_189D20(*v13, *(_QWORD *)(a1 + 608), &v144); /*0x584c23*/
    v25 = cocos2d::CCSprite::create("GJ_gradientBG.png"); /*0x584c35*/
    *(_QWORD *)(a1 + 584) = v25; /*0x584c38*/
    v26 = *(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(*(_QWORD *)v25 + 288LL); /*0x584c42*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v129, 0.0, 0.0); /*0x584c54*/
    v26(v25, v27); /*0x584c60*/
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 456LL))(a1, *(_QWORD *)(a1 + 584), 4294967293LL); /*0x584c75*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 584) + 120LL))(*(_QWORD *)(a1 + 584)); /*0x584c9b*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 584) + 136LL))(*(_QWORD *)(a1 + 584)); /*0x584cbe*/
    v28 = *(_QWORD *)(a1 + 584); /*0x584cc4*/
    v29 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 184LL); /*0x584cce*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v129, -5.0, -5.0); /*0x584ce5*/
    v29(v28, v30); /*0x584cf1*/
    LOWORD(v128) = 3613; /*0x584cff*/
    BYTE2(v128) = 47; /*0x584d04*/
    (**(void (__fastcall ***)(__int64, __int64 *))(*(_QWORD *)(a1 + 584) + 320LL))(*(_QWORD *)(a1 + 584) + 320LL, &v128); /*0x584d1f*/
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v138, 0.0, 0.0, 40.0, 40.0); /*0x584d3c*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v132, v130 * 0.5, (float)(v131 * 0.5) + 55.0); /*0x584d6b*/
    v31 = cocos2d::CCLabelBMFont::create(" ", (const char *)&qword_6FFF68); /*0x584d82*/
    *(_QWORD *)(a1 + 472) = v31; /*0x584d88*/
    (*(void (__fastcall **)(__int64, struct cocos2d::CCLabelBMFont *))(*(_QWORD *)a1 + 464LL))(a1, v31); /*0x584d9f*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v129, 0.0, 43.0); /*0x584db2*/
    cocos2d::CCPoint::operator+(v132, &v128, v32); /*0x584dc5*/
    (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 472) + 184LL))(*(_QWORD *)(a1 + 472), &v128); /*0x584dda*/
    *(_OWORD *)Block = 0; /*0x584de3*/
    v140 = 1; /*0x584de7*/
    v141 = 15; /*0x584df5*/
    LOWORD(Block[0]) = (unsigned __int8)asc_6E86E4[0]; /*0x584e00*/
    v129 = Block; /*0x584e0b*/
    (**(void (__fastcall ***)(__int64, void **))(*(_QWORD *)(a1 + 472) + 360LL))(*(_QWORD *)(a1 + 472) + 360LL, Block); /*0x584e25*/
    cocos2d::CCLabelBMFont::limitLabelWidth(*(cocos2d::CCLabelBMFont **)(a1 + 472), 320.0, 0.60000002, 0.0); /*0x584e41*/
    sub_3C310(Block); /*0x584e4c*/
    v33 = cocos2d::CCRect::CCRect((cocos2d::CCRect *)Block, (const struct cocos2d::CCRect *)v138); /*0x584e59*/
    v34 = cocos2d::extension::CCScale9Sprite::create("square02b_small.png", v33); /*0x584e69*/
    *(_QWORD *)(a1 + 632) = v34; /*0x584e6f*/
    LOBYTE(v35) = 100; /*0x584e80*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v34 + 320) + 40LL))(v34 + 320, v35); /*0x584e82*/
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)v133, 200.0, 40.0); /*0x584e95*/
    (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 632) + 312LL))(*(_QWORD *)(a1 + 632), v133); /*0x584eaa*/
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 456LL))(a1, *(_QWORD *)(a1 + 632), 4294967294LL); /*0x584ec3*/
    (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 632) + 184LL))(*(_QWORD *)(a1 + 632), v132); /*0x584ed8*/
    (**(void (__fastcall ***)(__int64, void *))(*(_QWORD *)(a1 + 632) + 320LL))( /*0x584ef6*/
      *(_QWORD *)(a1 + 632) + 320LL,
      &unk_6FF648);
    v38 = CCTextInputNode_create(v37, v36, (__int64)"..."); /*0x584f1c*/
    *(_QWORD *)(a1 + 464) = v38; /*0x584f21*/
    (*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v38, 20); /*0x584f3e*/
    *(_QWORD *)(*(_QWORD *)(a1 + 464) + 608LL) = a1 + 408; /*0x584f4f*/
    (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 464) + 184LL))(*(_QWORD *)(a1 + 464), v132); /*0x584f65*/
    v39 = *(_QWORD *)(a1 + 464); /*0x584f6b*/
    *(_DWORD *)(v39 + 572) = 1060320051; /*0x584f72*/
    sub_555B0(v39, v40); /*0x584f7c*/
    v41 = *(_QWORD *)(a1 + 464); /*0x584f81*/
    *(_DWORD *)(v41 + 568) = 1127481344; /*0x584f88*/
    sub_555B0(v41, v42); /*0x584f92*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 464) + 600LL) + 336LL))( /*0x584faa*/
      *(_QWORD *)(*(_QWORD *)(a1 + 464) + 600LL),
      0);
    *(_DWORD *)(*(_QWORD *)(a1 + 464) + 616LL) = 100; /*0x584fb7*/
    *(_OWORD *)Block = 0; /*0x584fc4*/
    v140 = 0; /*0x584fc8*/
    v141 = 0; /*0x584fcc*/
    Block[0] = (void *)sub_3C460(112); /*0x584fdd*/
    v140 = 97; /*0x584fe1*/
    v141 = 111; /*0x584fe9*/
    strcpy( /*0x584ff8*/
      (char *)Block[0],
      " abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789.,-!?:;)(/\\\"'`*=+-_%[]<>|@&^#{}%$~");
    GameManager_getMenuMusicFile(*(_DWORD **)(a1 + 464), Block); /*0x58504b*/
    sub_588160(a1, &byte_6E86E0); /*0x58505a*/
    v43 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_arrow_01_001.png"); /*0x585066*/
    v44 = (struct cocos2d::CCMenuItem *)CCMenuItemSpriteExtra_create(v43, 0, a1, SecretLayer5_onBack); /*0x585080*/
    *((_DWORD *)v44 + 93) = 1069547520; /*0x585083*/
    v45 = cocos2d::CCMenu::create(v44, 0); /*0x585098*/
    (*(void (__fastcall **)(__int64, struct cocos2d::CCMenu *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v45, 1); /*0x5850b1*/
    v47 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v46); /*0x5850b4*/
    v48 = cocos2d::CCDirector::getScreenTop(v47) - 23.0; /*0x5850c6*/
    v50 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v49); /*0x5850ce*/
    v51 = cocos2d::CCDirector::getScreenLeft(v50) + 24.0; /*0x5850dd*/
    v52 = *(void (__fastcall **)(struct cocos2d::CCMenu *, __int64))(*(_QWORD *)v45 + 184LL); /*0x5850e9*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v129, v51, v48); /*0x5850fb*/
    v52(v45, v53); /*0x585107*/
    if ( *(_BYTE *)(cocos2d::CCApplication::sharedApplication(v54) + 209) ) /*0x58510f*/
      sub_6DEB0(a1, v44); /*0x58511e*/
    *(_OWORD *)Block = 0; /*0x585126*/
    v140 = 0; /*0x58512a*/
    v141 = 0; /*0x58512e*/
    Block[0] = (void *)sub_3C460(32); /*0x58513c*/
    v140 = 22; /*0x585140*/
    v141 = 31; /*0x585148*/
    strcpy((char *)Block[0], "GJ_secretLock4_001.png"); /*0x585157*/
    *(_QWORD *)(a1 + 560) = sub_4B5B0(Block); /*0x58517b*/
    if ( v141 > 0xF ) /*0x58518a*/
    {
      v55 = Block[0]; /*0x58518f*/
      if ( v141 + 1 >= 0x1000 ) /*0x58519d*/
      {
        v55 = (void *)*((_QWORD *)Block[0] - 1); /*0x5851a3*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v55 - 8) > 0x1F ) /*0x5851b2*/
          invoke_watson(0, 0, 0, 0, 0); /*0x5851c3*/
      }
      j_j_free(v55); /*0x5851ca*/
    }
    *(_OWORD *)Block = 0; /*0x5851d2*/
    v140 = 0; /*0x5851d6*/
    v141 = 0; /*0x5851da*/
    Block[0] = (void *)sub_3C460(32); /*0x5851e8*/
    v140 = 22; /*0x5851ec*/
    v141 = 31; /*0x5851f4*/
    strcpy((char *)Block[0], "GJ_secretLock4_001.png"); /*0x585203*/
    *(_QWORD *)(a1 + 568) = sub_4C150(Block); /*0x585227*/
    if ( v141 > 0xF ) /*0x585236*/
    {
      v56 = Block[0]; /*0x58523b*/
      if ( v141 + 1 >= 0x1000 ) /*0x585249*/
      {
        v56 = (void *)*((_QWORD *)Block[0] - 1); /*0x58524f*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v56 - 8) > 0x1F ) /*0x58525e*/
          invoke_watson(0, 0, 0, 0, 0); /*0x58526f*/
      }
      j_j_free(v56); /*0x585276*/
    }
    LOWORD(v128) = 25800; /*0x585287*/
    BYTE2(v128) = -1; /*0x58528c*/
    (**(void (__fastcall ***)(__int64, __int64 *))(*(_QWORD *)(a1 + 568) + 320LL))(*(_QWORD *)(a1 + 568) + 320LL, &v128); /*0x5852a7*/
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 560) + 456LL))( /*0x5852c0*/
      *(_QWORD *)(a1 + 560),
      *(_QWORD *)(a1 + 568),
      1);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 568) + 320LL) + 40LL))( /*0x5852d9*/
      *(_QWORD *)(a1 + 568) + 320LL,
      0);
    v57 = *(_QWORD *)(a1 + 560); /*0x5852dc*/
    v58 = *(_QWORD *)(a1 + 568); /*0x5852e3*/
    v59 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v58 + 184LL); /*0x5852ed*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v129, 0.0, 0.0); /*0x5852ff*/
    v61 = cocos2d::CCNode::convertToNodeSpace(v57, &v128, v60); /*0x585310*/
    v59(v58, v61); /*0x58531c*/
    v62 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_secretLock4_eyes_001.png"); /*0x585325*/
    *(_QWORD *)(a1 + 576) = v62; /*0x58532b*/
    v128 = 0x100000302LL; /*0x585332*/
    (**((void (__fastcall ***)(__int64, __int64))v62 + 43))((__int64)v62 + 344, 0x100000302LL); /*0x585351*/
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 560) + 456LL))( /*0x58536a*/
      *(_QWORD *)(a1 + 560),
      *(_QWORD *)(a1 + 576),
      2);
    v63 = *(_QWORD *)(a1 + 560); /*0x585370*/
    v64 = *(_QWORD *)(a1 + 576); /*0x585377*/
    v65 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v64 + 184LL); /*0x585381*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v129, 0.0, 0.0); /*0x585393*/
    v67 = cocos2d::CCNode::convertToNodeSpace(v63, &v128, v66); /*0x5853a4*/
    v65(v64, v67); /*0x5853b0*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 576) + 320LL) + 40LL))( /*0x5853c5*/
      *(_QWORD *)(a1 + 576) + 320LL,
      0);
    cocos2d::CCSprite::createWithSpriteFrameName("GJ_secretLock2_2_001.png"); /*0x5853cf*/
    v70 = cocos2d::CCNode::create(v69, v68); /*0x5853db*/
    v71 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_secretLock2_2_001.png"); /*0x5853e5*/
    *(_QWORD *)(a1 + 592) = v71; /*0x5853eb*/
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)v70 + 456LL))( /*0x585408*/
      v70,
      v71,
      0xFFFFFFFFLL);
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 560) + 456LL))( /*0x585425*/
      *(_QWORD *)(a1 + 560),
      v70,
      4294967294LL);
    v72 = *(_QWORD *)(a1 + 560); /*0x585428*/
    v73 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v70 + 184LL); /*0x585432*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v129, 0.0, -30.0); /*0x585449*/
    v75 = cocos2d::CCNode::convertToNodeSpace(v72, &v128, v74); /*0x58545a*/
    v73(v70, v75); /*0x585466*/
    v76 = *(_QWORD *)(a1 + 592); /*0x585468*/
    v77 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v76 + 184LL); /*0x585472*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v129, 0.0, 25.0); /*0x58548c*/
    v77(v76, v78); /*0x585498*/
    LOWORD(v128) = 18286; /*0x5854a6*/
    BYTE2(v128) = -103; /*0x5854ab*/
    (**(void (__fastcall ***)(__int64, __int64 *))(*(_QWORD *)(a1 + 592) + 320LL))(*(_QWORD *)(a1 + 592) + 320LL, &v128); /*0x5854c6*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 560) + 160LL))(*(_QWORD *)(a1 + 560)); /*0x5854da*/
    v79 = CCMenuItemSpriteExtra_create(*(_QWORD *)(a1 + 560), 0, a1, sub_587790); /*0x5854f3*/
    *(_QWORD *)(a1 + 480) = v79; /*0x5854f8*/
    (*(void (__fastcall **)(struct cocos2d::CCMenu *, __int64))(*(_QWORD *)v45 + 464LL))(v45, v79); /*0x585510*/
    v80 = *(_QWORD *)(a1 + 480); /*0x585513*/
    v81 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v80 + 184LL); /*0x58551d*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v129, v130 * 0.5, (float)(v131 * 0.5) - 25.0); /*0x585541*/
    v83 = cocos2d::CCNode::convertToNodeSpace(v45, &v128, v82); /*0x585552*/
    v81(v80, v83); /*0x58555e*/
    *(_DWORD *)(*(_QWORD *)(a1 + 480) + 372LL) = 1060320051; /*0x585567*/
    v86 = LoadingCircleSprite_create(v85, v84); /*0x585574*/
    *(_QWORD *)(a1 + 640) = v86; /*0x585579*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v86 + 160LL))(v86); /*0x585590*/
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 456LL))(a1, *(_QWORD *)(a1 + 640), 28); /*0x5855a5*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 640) + 320LL) + 40LL))( /*0x5855be*/
      *(_QWORD *)(a1 + 640) + 320LL,
      0);
    (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 640) + 184LL))(*(_QWORD *)(a1 + 640), v132); /*0x5855d0*/
    v128 = 0x100000302LL; /*0x5855d6*/
    (**(void (__fastcall ***)(__int64, __int64))(*(_QWORD *)(a1 + 640) + 344LL))( /*0x5855fc*/
      *(_QWORD *)(a1 + 640) + 344LL,
      0x100000302LL);
    LOWORD(v128) = 25800; /*0x58560a*/
    BYTE2(v128) = -1; /*0x58560f*/
    (**(void (__fastcall ***)(__int64, __int64 *))(*(_QWORD *)(a1 + 640) + 320LL))(*(_QWORD *)(a1 + 640) + 320LL, &v128); /*0x58562a*/
    v87 = qword_905FD0; /*0x585631*/
    if ( !qword_905FD0 ) /*0x58563b*/
    {
      v129 = (void **)operator new(0x6E8u); /*0x585647*/
      qword_905FD0 = sub_2723A0(v129); /*0x585655*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x585666*/
      v87 = qword_905FD0; /*0x585668*/
    }
    v88 = v87; /*0x585672*/
    v89 = *(_DWORD *)(v87 + 1024); /*0x585675*/
    if ( v89 != 19 ) /*0x58567d*/
    {
      if ( v89 ) /*0x585681*/
      {
        v90 = cocos2d::CCString::createWithFormat("gjFont%02d.png", v89); /*0x58568a*/
        CString = cocos2d::CCString::getCString(v90); /*0x585699*/
        v94 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v93, v92); /*0x58569c*/
        cocos2d::CCTextureCache::removeTextureForKey(v94, CString); /*0x5856a8*/
      }
      v95 = cocos2d::CCString::createWithFormat("gjFont%02d.png", 19); /*0x5856b7*/
      v96 = cocos2d::CCString::getCString(v95); /*0x5856c6*/
      v99 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v98, v97); /*0x5856c9*/
      cocos2d::CCTextureCache::addImage(v99, v96, 0); /*0x5856d8*/
      v87 = qword_905FD0; /*0x5856de*/
      *(_DWORD *)(v88 + 1024) = 19; /*0x5856e5*/
    }
    v129 = (void **)&v135; /*0x5856f0*/
    v135 = 0; /*0x5856f8*/
    v136 = 1; /*0x5856fd*/
    v137 = 15; /*0x585705*/
    LOWORD(v135) = (unsigned __int8)asc_6E86E4[0]; /*0x585710*/
    if ( !v87 ) /*0x58571c*/
    {
      v134 = operator new(0x6E8u); /*0x585728*/
      qword_905FD0 = sub_2723A0(v134); /*0x585736*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x585747*/
      v87 = qword_905FD0; /*0x585749*/
    }
    GameManager_loadFont(v87, 19); /*0x585752*/
    v100 = cocos2d::CCString::createWithFormat("gjFont%02d.fnt", 19); /*0x585760*/
    v101 = cocos2d::CCString::getCString(v100); /*0x58576f*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)Block, 0.5, 1.0); /*0x585784*/
    v102 = TextArea_create(&v135, v101); /*0x5857c0*/
    *(_QWORD *)(a1 + 648) = v102; /*0x5857c3*/
    v103 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v102 + 288LL); /*0x5857cd*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)Block, 0.5, 0.5); /*0x5857de*/
    v103(v102, v104); /*0x5857ea*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 648) + 160LL))(*(_QWORD *)(a1 + 648)); /*0x5857fe*/
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 456LL))(a1, *(_QWORD *)(a1 + 648), 3); /*0x585817*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)Block, 0.0, 60.0); /*0x58582c*/
    cocos2d::CCPoint::operator+(v132, &v128, v105); /*0x58583f*/
    (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 648) + 184LL))(*(_QWORD *)(a1 + 648), &v128); /*0x585854*/
    v107 = (cocos2d::CCObject *)cocos2d::CCArray::create(v106); /*0x58585a*/
    *(_QWORD *)(a1 + 504) = v107; /*0x585860*/
    cocos2d::CCObject::retain(v107); /*0x58586a*/
    LOWORD(v128) = 23160; /*0x585870*/
    do /*0x5859e9*/
    {
      v108 = cocos2d::CCSprite::createWithSpriteFrameName("towerTorchInner_001.png"); /*0x5858ad*/
      LOWORD(v128) = 23160; /*0x5858b0*/
      BYTE2(v128) = -103; /*0x5858b6*/
      (**((void (__fastcall ***)(__int64, __int64 *))v108 + 40))((__int64)v108 + 320, &v128); /*0x5858cd*/
      (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v108, 4); /*0x5858e6*/
      v109 = *(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(*(_QWORD *)v108 + 184LL); /*0x5858ec*/
      v110 = 195; /*0x585902*/
      if ( !v2 ) /*0x58590a*/
        v110 = -195; /*0x58590a*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)Block, (float)v110 + (float)(v130 * 0.5), (float)(v131 * 0.5) + 4.0); /*0x585927*/
      v109(v108, v111); /*0x585933*/
      v113 = (cocos2d::CCArray *)cocos2d::CCArray::create(v112); /*0x58593b*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v134, 0.0, 33.0); /*0x58594a*/
      v115 = v114; /*0x585950*/
      v116 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v108 + 200LL))(v108); /*0x585960*/
      cocos2d::CCPoint::operator+(v116, &v129, v115); /*0x58596d*/
      LevelAreaLayer_addTorch(a1, (unsigned int)&v129, 2, v117, 4, 1, 1, (__int64)v113); /*0x58599e*/
      v118 = *(cocos2d::CCArray **)(a1 + 504); /*0x5859a3*/
      v119 = cocos2d::CCArray::objectAtIndex(v113, 0); /*0x5859af*/
      cocos2d::CCArray::addObject(v118, v119); /*0x5859bb*/
      v120 = *(cocos2d::CCArray **)(a1 + 504); /*0x5859c1*/
      v121 = cocos2d::CCArray::objectAtIndex(v113, 1u); /*0x5859d0*/
      cocos2d::CCArray::addObject(v120, v121); /*0x5859dc*/
      ++v2; /*0x5859e2*/
    }
    while ( v2 < 2 ); /*0x5859e9*/
    cocos2d::CCNode::scheduleUpdate((cocos2d::CCNode *)a1); /*0x5859f2*/
    v123 = *(_QWORD *)&qword_905FB0; /*0x5859ff*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x585a09*/
    {
      Block[0] = operator new(0x690u); /*0x585a15*/
      *(_QWORD *)&qword_905FB0 = sub_214250(Block[0]); /*0x585a22*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x585a2f*/
      v123 = *(_QWORD *)&qword_905FB0; /*0x585a32*/
    }
    *(_QWORD *)(v123 + 1544) = a1 + 432; /*0x585a39*/
    v124 = qword_905FD0; /*0x585a40*/
    if ( !qword_905FD0 ) /*0x585a4a*/
    {
      Block[0] = operator new(0x6E8u); /*0x585a56*/
      qword_905FD0 = sub_2723A0(Block[0]); /*0x585a63*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x585a74*/
      v124 = qword_905FD0; /*0x585a76*/
    }
    if ( !(unsigned __int8)sub_27B350(v124, &word_755558, v122) ) /*0x585a84*/
    {
      *(_BYTE *)(a1 + 552) = 1; /*0x585a8d*/
      v125 = cocos2d::CCCallFunc::create(a1, sub_588480); /*0x585aa5*/
      v126 = cocos2d::CCDelayTime::create(1.2); /*0x585ab0*/
      v127 = cocos2d::CCSequence::create(v126, v125, 0); /*0x585abf*/
      cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v127); /*0x585acb*/
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 464) + 920LL))(*(_QWORD *)(a1 + 464), 0); /*0x585add*/
    }
    return 1; /*0x585ae3*/
  }
  return result; /*0x585ae5*/
}

// [4/17] Address: 0x585b30
// Method: SecretLayer5::fadeInSubmitMessage
struct cocos2d::CCAction *__fastcall SecretLayer5_fadeInSubmitMessage(__int64 a1)
{
  __int64 v2; // rax
  int v3; // edx
  int v4; // r8d
  int *v5; // r15
  __int64 v6; // r14
  __int64 i; // rdi
  __int64 v8; // rcx
  __int64 v9; // rbx
  int *v10; // rsi
  __int64 v11; // rbp
  int v12; // eax
  void (__fastcall ***v13)(_QWORD, char *); // rcx
  double v14; // xmm0_8
  __int64 v15; // rbx
  struct cocos2d::CCFiniteTimeAction *v16; // rax
  struct cocos2d::CCAction *v17; // rax
  _BYTE v19[32]; // [rsp+30h] [rbp-78h] BYREF
  char v20; // [rsp+B0h] [rbp+8h] BYREF
  __int16 v21; // [rsp+B1h] [rbp+9h]

  v2 = sub_5841E0(v19, *(unsigned int *)(*(_QWORD *)(a1 + 600) + 4LL * *(int *)(a1 + 624))); /*0x585b62*/
  TextArea_setString(*(_QWORD *)(a1 + 648), v2); /*0x585b71*/
  v5 = *(int **)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 648) + 616LL) + 480LL))(*(_QWORD *)(*(_QWORD *)(a1 + 648) + 616LL)) /*0x585b8d*/
               + 56);
  v6 = *v5; /*0x585b91*/
  if ( v6 > 0 ) /*0x585b97*/
  {
    for ( i = 0; i < v6; ++i ) /*0x585bc5*/
    {
      v8 = *(_QWORD *)(*((_QWORD *)v5 + 2) + 8 * i); /*0x585be4*/
      v9 = 0; /*0x585bf1*/
      v10 = *(int **)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 480LL))(v8) + 56); /*0x585bf3*/
      v11 = *v10; /*0x585bf7*/
      if ( v11 > 0 ) /*0x585bfd*/
      {
        do /*0x585c51*/
        {
          v12 = rand(); /*0x585c00*/
          v21 = -256; /*0x585c06*/
          v20 = (int)(float)((float)((float)((float)v12 / 32767.0) * 25.0) + 150.0); /*0x585c30*/
          v13 = (void (__fastcall ***)(_QWORD, char *))(*(_QWORD *)(*((_QWORD *)v10 + 2) + 8 * v9) + 320LL); /*0x585c3f*/
          (**v13)(v13, &v20); /*0x585c49*/
          ++v9; /*0x585c4b*/
        }
        while ( v9 < v11 ); /*0x585c51*/
      }
    }
  }
  v14 = TextArea_fadeInCharacters(*(_QWORD *)(a1 + 648), v3, v4, 0, 1); /*0x585c9e*/
  v15 = cocos2d::CCCallFunc::create(a1, SecretLayer5_fadeOutMessage); /*0x585cba*/
  v16 = cocos2d::CCDelayTime::create(*(float *)&v14 + 0.60000002); /*0x585cc0*/
  v17 = cocos2d::CCSequence::create(v16, v15, 0); /*0x585ccf*/
  return cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v17); /*0x585cdb*/
}

// [5/17] Address: 0x585d00
// Method: SecretLayer5::fadeOutMessage
double __fastcall SecretLayer5_fadeOutMessage(__int64 a1, int a2, int a3)
{
  return TextArea_fadeInCharacters(*(_QWORD *)(a1 + 648), a2, a3, 1, 0); /*0x585d2b*/
}

// [6/17] Address: 0x585d30
// Method: SecretLayer5::animateHead
// Hidden C++ exception states: #wind=3
struct cocos2d::CCAction *__fastcall SecretLayer5_animateHead(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rcx
  void *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ecx
  struct cocos2d::CCActionInterval *v9; // rsi
  struct cocos2d::CCActionInterval *v10; // rax
  struct cocos2d::CCEaseInOut *v11; // rdi
  struct cocos2d::CCDelayTime *v12; // rbx
  struct cocos2d::CCFiniteTimeAction *v13; // rax
  struct cocos2d::CCAction *v14; // rax
  cocos2d::CCNode *v15; // rsi
  struct cocos2d::CCActionInterval *v16; // rax
  struct cocos2d::CCEaseInOut *v17; // rdi
  struct cocos2d::CCDelayTime *v18; // rbx
  struct cocos2d::CCActionInterval *v19; // rax
  struct cocos2d::CCFiniteTimeAction *v20; // rax
  struct cocos2d::CCAction *v21; // rax
  cocos2d::CCNode *v22; // rdi
  struct cocos2d::CCActionInterval *v23; // rax
  struct cocos2d::CCEaseInOut *v24; // rbx
  struct cocos2d::CCFiniteTimeAction *v25; // rax
  struct cocos2d::CCAction *v26; // rax
  cocos2d::CCNode *v27; // rsi
  struct cocos2d::CCActionInterval *v28; // rax
  struct cocos2d::CCEaseInOut *v29; // rdi
  struct cocos2d::CCDelayTime *v30; // rbx
  struct cocos2d::CCActionInterval *v31; // rax
  struct cocos2d::CCFiniteTimeAction *v32; // rax
  struct cocos2d::CCAction *v33; // rax
  cocos2d::CCNode *v34; // rdi
  struct cocos2d::CCActionInterval *v35; // rax
  struct cocos2d::CCEaseInOut *v36; // rbx
  struct cocos2d::CCActionInterval *v37; // rax
  struct cocos2d::CCFiniteTimeAction *v38; // rax
  struct cocos2d::CCAction *v39; // rax
  _BYTE v41[32]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE *v42; // [rsp+90h] [rbp+8h] BYREF
  void *v43; // [rsp+98h] [rbp+10h]

  v42 = v41; /*0x585d4f*/
  v2 = *(int *)(a1 + 624); /*0x585d53*/
  v3 = *(_QWORD *)(a1 + 600); /*0x585d5a*/
  v4 = qword_906070; /*0x585d61*/
  if ( !qword_906070 ) /*0x585d6b*/
  {
    v43 = operator new(0x3D0u); /*0x585d77*/
    qword_906070 = sub_47C350(v43); /*0x585d88*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x585d99*/
    v4 = qword_906070; /*0x585d9b*/
  }
  v5 = MusicDownloadManager_pathForSFX(v4, v41, *(_DWORD *)(v3 + 4 * v2)); /*0x585db0*/
  v8 = qword_905F60; /*0x585db3*/
  if ( !qword_905F60 ) /*0x585dbd*/
  {
    v43 = operator new(0x8A8u); /*0x585dc9*/
    qword_905F60 = sub_5AE20(v43); /*0x585dda*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x585deb*/
    v8 = qword_905F60; /*0x585ded*/
  }
  FMODAudioEngine_playEffect_0(v8, (__int64)v5, v6, v7, 1060320051); /*0x585e10*/
  v9 = cocos2d::CCActionTween::create(1.3499999, 1, 0.0, 25.0); /*0x585e38*/
  v10 = cocos2d::CCActionTween::create(1.3499999, 1, 25.0, 0.0); /*0x585e4f*/
  v11 = cocos2d::CCEaseInOut::create(v10, 2.0); /*0x585e69*/
  v12 = cocos2d::CCDelayTime::create(0.44999999); /*0x585e7a*/
  v13 = cocos2d::CCEaseInOut::create(v9, 2.0); /*0x585e83*/
  v14 = cocos2d::CCSequence::create(v13, v12, v11, 0); /*0x585e95*/
  cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v14); /*0x585ea1*/
  cocos2d::CCNode::stopAllActions(*(cocos2d::CCNode **)(a1 + 576)); /*0x585eae*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 576) + 320LL) + 40LL))( /*0x585ec7*/
    *(_QWORD *)(a1 + 576) + 320LL,
    0);
  (**(void (__fastcall ***)(__int64, __int16 *))(*(_QWORD *)(a1 + 576) + 320LL))( /*0x585ee2*/
    *(_QWORD *)(a1 + 576) + 320LL,
    &word_6FF650);
  v15 = *(cocos2d::CCNode **)(a1 + 576); /*0x585ee4*/
  v16 = cocos2d::CCFadeTo::create(1.62, 0); /*0x585ef5*/
  v17 = cocos2d::CCEaseInOut::create(v16, 2.0); /*0x585f07*/
  v18 = cocos2d::CCDelayTime::create(0.44999999); /*0x585f18*/
  v19 = cocos2d::CCFadeTo::create(1.3499999, 0xAFu); /*0x585f21*/
  v20 = cocos2d::CCEaseInOut::create(v19, 2.0); /*0x585f2d*/
  v21 = cocos2d::CCSequence::create(v20, v18, v17, 0); /*0x585f3f*/
  cocos2d::CCNode::runAction(v15, v21); /*0x585f4b*/
  LOWORD(v42) = 25800; /*0x585f63*/
  BYTE2(v42) = -1; /*0x585f6b*/
  (**(void (__fastcall ***)(__int64, _BYTE **))(*(_QWORD *)(a1 + 568) + 320LL))(*(_QWORD *)(a1 + 568) + 320LL, &v42); /*0x585f8c*/
  v22 = *(cocos2d::CCNode **)(a1 + 568); /*0x585f8e*/
  v23 = cocos2d::CCFadeTo::create(2.6999998, 0xFFu); /*0x585f9f*/
  v24 = cocos2d::CCEaseInOut::create(v23, 1.6); /*0x585fb6*/
  v25 = cocos2d::CCDelayTime::create(0.71999997); /*0x585fc1*/
  v26 = cocos2d::CCSequence::create(v25, v24, 0); /*0x585fd0*/
  cocos2d::CCNode::runAction(v22, v26); /*0x585fdc*/
  cocos2d::CCNode::stopAllActions(*(cocos2d::CCNode **)(a1 + 592)); /*0x585fe9*/
  v27 = *(cocos2d::CCNode **)(a1 + 592); /*0x585fef*/
  v28 = cocos2d::CCTintTo::create(1.3499999, 0x31u, 0x1Fu, 0x44u); /*0x586002*/
  v29 = cocos2d::CCEaseInOut::create(v28, 2.0); /*0x586014*/
  v30 = cocos2d::CCDelayTime::create(0.044999998); /*0x586025*/
  v31 = cocos2d::CCTintTo::create(1.3499999, 0xA5u, 0x47u, 0xB7u); /*0x586034*/
  v32 = cocos2d::CCEaseInOut::create(v31, 2.0); /*0x586040*/
  v33 = cocos2d::CCSequence::create(v32, v30, v29, 0); /*0x586052*/
  cocos2d::CCNode::runAction(v27, v33); /*0x58605e*/
  v34 = *(cocos2d::CCNode **)(a1 + 584); /*0x586064*/
  v35 = cocos2d::CCTintTo::create(1.8, 0x1Du, 0xEu, 0x2Fu); /*0x58607b*/
  v36 = cocos2d::CCEaseInOut::create(v35, 2.0); /*0x58608d*/
  v37 = cocos2d::CCTintTo::create(1.3499999, 0x32u, 0xEu, 0x32u); /*0x58609e*/
  v38 = cocos2d::CCEaseInOut::create(v37, 2.0); /*0x5860aa*/
  v39 = cocos2d::CCSequence::create(v38, v36, 0); /*0x5860b9*/
  return cocos2d::CCNode::runAction(v34, v39); /*0x5860c5*/
}

// [7/17] Address: 0x5860f0
// Method: SecretLayer5::updateTweenActionInt
__int64 __fastcall SecretLayer5_updateTweenActionInt(__int64 a1, float a2, int a3)
{
  __int64 i; // rcx
  __int64 result; // rax

  if ( a3 == 1 ) /*0x5860f4*/
  {
    for ( i = *(_QWORD *)(a1 + 560); a2 < 0.0; a2 = a2 + 360.0 ) /*0x58610b*/
      ; /*0x586110*/
    *(float *)(i + 600) = (float)(a2 / 360.0) * 6.283185307179586; /*0x586130*/
    return sub_4BA60(); /*0x586138*/
  }
  return result; /*0x58613d*/
}

// [8/17] Address: 0x586140
// Method: SecretLayer5::finishLoadingState
__int64 __fastcall SecretLayer5_finishLoadingState(__int64 a1)
{
  bool v1; // zf
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 516) == 0; /*0x586140*/
  *(_BYTE *)(a1 + 512) = 0; /*0x586147*/
  if ( !v1 ) /*0x58614e*/
    return SecretLayer5_handleSecretResponse(); /*0x58614e*/
  return result; /*0x586154*/
}

// [9/17] Address: 0x586160
// Method: SecretLayer5::handleSecretResponse
__int64 __fastcall SecretLayer5_handleSecretResponse(__int64 a1)
{
  __int64 v2; // rdx

  LoadingCircleSprite_fadeInCircle(*(_QWORD *)(a1 + 640)); /*0x58617b*/
  LOBYTE(v2) = 1; /*0x586187*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 480) + 936LL))(*(_QWORD *)(a1 + 480), v2); /*0x58618c*/
  if ( *(_DWORD *)(a1 + 516) == 1 ) /*0x58619c*/
    return SecretLayer5_showSuccessAnimation(a1); /*0x5861a3*/
  sub_5861C0(a1); /*0x5861a8*/
  return SecretLayer5_showTextInput(a1); /*0x58619e*/
}

// [11/17] Address: 0x587550
// Method: SecretLayer5::onlineRewardStatusFinished
// Hidden C++ exception states: #wind=6
double __fastcall SecretLayer5_onlineRewardStatusFinished(__int64 a1, size_t *a2)
{
  __int64 v4; // rbp
  __int64 v5; // rcx
  __int64 v6; // rbx
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  void *v9; // rdx
  void *v11; // [rsp+20h] [rbp-68h]
  void *v12; // [rsp+28h] [rbp-60h]
  _BYTE v13[32]; // [rsp+38h] [rbp-50h] BYREF
  size_t *v14; // [rsp+58h] [rbp-30h]

  v14 = a2; /*0x587571*/
  v4 = sub_3E4F0(v13, a2); /*0x58758a*/
  v5 = qword_905FE0; /*0x587592*/
  if ( !qword_905FE0 ) /*0x58759c*/
  {
    v12 = operator new(0x3E8u); /*0x5875a8*/
    qword_905FE0 = sub_2D2B40(v12); /*0x5875b6*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x5875c7*/
    v5 = qword_905FE0; /*0x5875c9*/
  }
  v6 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(v5 + 368), v4); /*0x5875e0*/
  sub_3C310(v4); /*0x5875e6*/
  if ( !v6 ) /*0x5875ee*/
    goto LABEL_13; /*0x5875ee*/
  v7 = (_QWORD *)sub_3E4F0(v13, a2); /*0x58760b*/
  v8 = qword_905FE0; /*0x58760e*/
  if ( !qword_905FE0 ) /*0x587618*/
  {
    v11 = operator new(0x3E8u); /*0x587624*/
    qword_905FE0 = sub_2D2B40(v11); /*0x587632*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x587643*/
    v8 = qword_905FE0; /*0x587645*/
  }
  if ( GameStatsManager_isSpecialChestUnlocked(v8, v7) ) /*0x58764f*/
  {
LABEL_13:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1); /*0x587698*/
  }
  else
  {
    *(_DWORD *)(a1 + 84) = 1; /*0x587658*/
    if ( (size_t *)(a1 + 88) != a2 ) /*0x587666*/
    {
      v9 = a2; /*0x587668*/
      if ( a2[3] > 0xF ) /*0x587670*/
        v9 = (void *)*a2; /*0x587672*/
      sub_3F5A0((void *)(a1 + 88), v9, a2[2]); /*0x587679*/
    }
    if ( !*(_BYTE *)(a1 + 80) ) /*0x58767e*/
      SecretLayer5_handleSecretResponse(a1 - 432); /*0x58768b*/
  }
  return sub_3C310(a2); /*0x5876a4*/
}

// [12/17] Address: 0x5876d0
// Method: SecretLayer5::onlineRewardStatusFailed
__int64 __fastcall SecretLayer5_onlineRewardStatusFailed(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 84) = 2; /*0x5876dd*/
  result = sub_3F5A0((void *)(a1 + 88), &byte_6E86E0, 0); /*0x5876f2*/
  if ( !*(_BYTE *)(a1 + 80) ) /*0x5876f7*/
    return SecretLayer5_handleSecretResponse(a1 - 432); /*0x587704*/
  return result; /*0x587709*/
}

// [13/17] Address: 0x587720
// Method: SecretLayer5::showTextInput
struct cocos2d::CCAction *__fastcall SecretLayer5_showTextInput(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  cocos2d::CCNode *v4; // rbx
  struct cocos2d::CCAction *v5; // rax

  LOBYTE(a2) = 1; /*0x587729*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 464) + 920LL))(*(_QWORD *)(a1 + 464), a2); /*0x587735*/
  LOBYTE(v3) = 1; /*0x587742*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 464) + 336LL))(*(_QWORD *)(a1 + 464), v3); /*0x587747*/
  cocos2d::CCNode::stopAllActions(*(cocos2d::CCNode **)(a1 + 632)); /*0x587754*/
  v4 = *(cocos2d::CCNode **)(a1 + 632); /*0x587764*/
  v5 = cocos2d::CCFadeTo::create(1.2, 0x64u); /*0x58776b*/
  return cocos2d::CCNode::runAction(v4, v5); /*0x587777*/
}

// [14/17] Address: 0x587f20
// Method: SecretLayer5::textInputOpened
void __fastcall SecretLayer5_textInputOpened(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  void **v5; // rcx
  char *v6; // rbx
  unsigned __int64 v7; // rdi
  size_t v8; // r8
  char *v9; // rax
  __int128 Buf2; // [rsp+30h] [rbp-68h] BYREF
  __int64 v11; // [rsp+40h] [rbp-58h]
  __int64 v12; // [rsp+48h] [rbp-50h]
  void *Buf1[2]; // [rsp+58h] [rbp-40h] BYREF
  size_t v14; // [rsp+68h] [rbp-30h]
  unsigned __int64 v15; // [rsp+70h] [rbp-28h]

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a2 + 600) + 600LL) + 8LL))(*(_QWORD *)(a2 + 600) + 600LL); /*0x587f56*/
  *(_OWORD *)Buf1 = 0; /*0x587f5c*/
  v14 = 0; /*0x587f61*/
  v15 = 0; /*0x587f66*/
  v4 = -1; /*0x587f6b*/
  do /*0x587f75*/
    ++v4; /*0x587f72*/
  while ( *(_BYTE *)(v3 + v4) ); /*0x587f75*/
  sub_3C230(Buf1); /*0x587f83*/
  Buf2 = 0; /*0x587f8c*/
  v11 = 0; /*0x587f91*/
  v12 = 15; /*0x587f96*/
  LOBYTE(Buf2) = 0; /*0x587f9f*/
  v5 = Buf1; /*0x587fa4*/
  v6 = (char *)Buf1[0]; /*0x587fa9*/
  v7 = v15; /*0x587fae*/
  if ( v15 > 0xF ) /*0x587fb7*/
    v5 = (void **)Buf1[0]; /*0x587fb7*/
  v8 = v14; /*0x587fbb*/
  if ( v14 ) /*0x587fc3*/
    v8 = 0; /*0x587fc3*/
  if ( !memcmp(v5, &Buf2, v8) && !v14 ) /*0x587fdb*/
  {
    Buf2 = 0; /*0x587fe0*/
    v11 = 1; /*0x587fe5*/
    v12 = 15; /*0x587fee*/
    LOWORD(Buf2) = 32; /*0x587ff7*/
    SpriteAnimationManager_executeAnimation(*(_QWORD *)(a1 + 56), &Buf2); /*0x588007*/
  }
  if ( v7 > 0xF ) /*0x588011*/
  {
    v9 = v6; /*0x588017*/
    if ( v7 + 1 >= 0x1000 ) /*0x588021*/
    {
      v6 = (char *)*((_QWORD *)v6 - 1); /*0x588027*/
      if ( (unsigned __int64)(v9 - v6 - 8) > 0x1F ) /*0x588036*/
        invoke_watson(0, 0, 0, 0, 0); /*0x588047*/
    }
    j_j_free(v6); /*0x588051*/
  }
}

// [15/17] Address: 0x588080
// Method: SecretLayer5::textChanged
void __fastcall SecretLayer5_textChanged(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  void **v5; // rdx
  void *v6; // rcx
  void *Block[2]; // [rsp+38h] [rbp-30h] BYREF
  __int128 v8; // [rsp+48h] [rbp-20h]

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a2 + 600) + 600LL) + 8LL))(*(_QWORD *)(a2 + 600) + 600LL); /*0x5880a9*/
  *(_OWORD *)Block = 0; /*0x5880af*/
  v8 = 0; /*0x5880b7*/
  v4 = -1; /*0x5880bd*/
  do /*0x5880c7*/
    ++v4; /*0x5880c4*/
  while ( *(_BYTE *)(v3 + v4) ); /*0x5880c7*/
  sub_3C230(Block); /*0x5880d6*/
  v5 = Block; /*0x5880dc*/
  if ( *((_QWORD *)&v8 + 1) > 0xFu ) /*0x5880e7*/
    v5 = (void **)Block[0]; /*0x5880e7*/
  sub_588160(a1 - 408, v5); /*0x5880f4*/
  if ( *((_QWORD *)&v8 + 1) > 0xFu ) /*0x588103*/
  {
    v6 = Block[0]; /*0x588108*/
    if ( (unsigned __int64)(*((_QWORD *)&v8 + 1) + 1LL) >= 0x1000 ) /*0x588117*/
    {
      v6 = (void *)*((_QWORD *)Block[0] - 1); /*0x58811d*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v6 - 8) > 0x1F ) /*0x58812c*/
        invoke_watson(0, 0, 0, 0, 0); /*0x588141*/
    }
    j_j_free(v6); /*0x588148*/
  }
}

// [16/17] Address: 0x588ad0
// Method: SecretLayer5::onBack
void __fastcall SecretLayer5_onBack(__int64 a1)
{
  __int64 v2; // rcx
  struct cocos2d::CCScene *v3; // rax
  struct cocos2d::CCScene *v4; // rbx
  __int64 v5; // rcx
  cocos2d::CCDirector *v6; // rax

  if ( !*(_BYTE *)(a1 + 552) ) /*0x588ad6*/
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 464) + 1032LL))(*(_QWORD *)(a1 + 464), 0); /*0x588af3*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x588b01*/
    LOBYTE(v2) = 1; /*0x588b07*/
    v3 = (struct cocos2d::CCScene *)LevelAreaInnerLayer_scene(v2); /*0x588b09*/
    v4 = cocos2d::CCTransitionFade::create(0.5, v3); /*0x588b1f*/
    v6 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v5); /*0x588b22*/
    cocos2d::CCDirector::replaceScene(v6, v4); /*0x588b2e*/
    *(_BYTE *)(a1 + 488) = 1; /*0x588b39*/
  }
}

// [17/17] Address: 0x588b50
// Method: SecretLayer5::keyBackClicked
void __fastcall SecretLayer5_keyBackClicked(__int64 a1)
{
  SecretLayer5_onBack(a1 - 336); /*0x588b59*/
}

// Address: 0x5867f0
// Method: SecretLayer5::showSuccessAnimation
// Hidden C++ exception states: #wind=9
struct cocos2d::CCAction *__fastcall SecretLayer5_showSuccessAnimation(cocos2d::CCNode *a1)
{
  __int64 v2; // rax
  cocos2d::CCNode *v3; // rdi
  struct cocos2d::CCActionInterval *v4; // rax
  struct cocos2d::CCEaseInOut *v5; // rbx
  struct cocos2d::CCFiniteTimeAction *v6; // rax
  struct cocos2d::CCAction *v7; // rax
  cocos2d::CCNode *v8; // rsi
  struct cocos2d::CCActionInterval *v9; // rax
  struct cocos2d::CCEaseInOut *v10; // rdi
  struct cocos2d::CCDelayTime *v11; // rbx
  struct cocos2d::CCActionInterval *v12; // rax
  struct cocos2d::CCFiniteTimeAction *v13; // rax
  struct cocos2d::CCAction *v14; // rax
  const struct cocos2d::CCPoint *v15; // rax
  struct cocos2d::CCMoveBy *v16; // r15
  const struct cocos2d::CCPoint *v17; // rax
  struct cocos2d::CCMoveBy *v18; // r14
  const struct cocos2d::CCPoint *v19; // rax
  struct cocos2d::CCMoveBy *v20; // rsi
  const struct cocos2d::CCPoint *v21; // rax
  struct cocos2d::CCMoveBy *v22; // rdi
  const struct cocos2d::CCPoint *v23; // rax
  struct cocos2d::CCMoveBy *v24; // rbx
  const struct cocos2d::CCPoint *v25; // rax
  struct cocos2d::CCFiniteTimeAction *v26; // rax
  unsigned int v27; // r12d
  struct cocos2d::CCAction *v28; // rax
  cocos2d::CCNode *v29; // r14
  struct cocos2d::CCActionInterval *v30; // rax
  struct cocos2d::CCEaseInOut *v31; // rsi
  struct cocos2d::CCDelayTime *v32; // rdi
  struct cocos2d::CCActionInterval *v33; // rax
  struct cocos2d::CCEaseOut *v34; // rbx
  struct cocos2d::CCFiniteTimeAction *v35; // rax
  struct cocos2d::CCAction *v36; // rax
  float v37; // xmm6_4
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rbx
  struct cocos2d::CCLayerColor *v42; // rsi
  __int64 v43; // rdi
  struct cocos2d::CCBlink *v44; // rbx
  struct cocos2d::CCFiniteTimeAction *v45; // rax
  struct cocos2d::CCAction *v46; // rax
  cocos2d::CCNode *v47; // rsi
  struct cocos2d::CCActionInterval *v48; // rax
  struct cocos2d::CCEaseInOut *v49; // rdi
  struct cocos2d::CCDelayTime *v50; // rbx
  struct cocos2d::CCActionInterval *v51; // rax
  struct cocos2d::CCFiniteTimeAction *v52; // rax
  struct cocos2d::CCAction *v53; // rax
  __int64 v54; // rcx
  void *v55; // rbx
  __int64 v56; // r8
  __int64 v57; // r9
  int v58; // ecx
  __int64 v59; // rcx
  void *v60; // rdi
  int v61; // ebx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rcx
  void *v65; // rdi
  int v66; // ebx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rcx
  void *v70; // rdi
  int v71; // ebx
  __int64 v72; // r8
  __int64 v73; // r9
  cocos2d::CCNode *v74; // rdi
  struct cocos2d::CCActionInterval *v75; // rax
  struct cocos2d::CCEaseInOut *v76; // rbx
  struct cocos2d::CCFiniteTimeAction *v77; // rax
  struct cocos2d::CCAction *v78; // rax
  struct cocos2d::CCObject *v79; // rdi
  __int64 v80; // rax
  struct cocos2d::CCActionInterval *v81; // rax
  struct cocos2d::CCEaseInOut *v82; // rbx
  struct cocos2d::CCActionInterval *v83; // rax
  struct cocos2d::CCFiniteTimeAction *v84; // rax
  struct cocos2d::CCAction *v85; // rax
  __int64 v86; // rbx
  struct cocos2d::CCFiniteTimeAction *v87; // rax
  struct cocos2d::CCAction *v88; // rax
  __int64 v89; // rbx
  struct cocos2d::CCFiniteTimeAction *v90; // rax
  struct cocos2d::CCAction *v91; // rax
  _BYTE v93[8]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v94[8]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v95[8]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v96[8]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v97[32]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v98[152]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v99; // [rsp+160h] [rbp+60h] BYREF
  float v100; // [rsp+168h] [rbp+68h] BYREF
  float v101; // [rsp+16Ch] [rbp+6Ch]
  __int64 v102; // [rsp+170h] [rbp+70h] BYREF
  char v103; // [rsp+178h] [rbp+78h] BYREF

  *((_BYTE *)a1 + 552) = 1;
  v2 = cocos2d::CCDirector::sharedDirector(a1);
  cocos2d::CCDirector::getWinSize(v2, &v100);
  LOWORD(v99) = -81;
  BYTE2(v99) = -81;
  (**(void (__fastcall ***)(__int64, _BYTE **))(*((_QWORD *)a1 + 71) + 320LL))(*((_QWORD *)a1 + 71) + 320LL, &v99);
  cocos2d::CCNode::stopAllActions(*((cocos2d::CCNode **)a1 + 71));
  v3 = (cocos2d::CCNode *)*((_QWORD *)a1 + 71);
  v4 = cocos2d::CCFadeTo::create(1.8, 0);
  v5 = cocos2d::CCEaseInOut::create(v4, 2.0);
  v6 = cocos2d::CCDelayTime::create(0.80000001);
  v7 = cocos2d::CCSequence::create(v6, v5, 0);
  cocos2d::CCNode::runAction(v3, v7);
  cocos2d::CCNode::stopAllActions(*((cocos2d::CCNode **)a1 + 72));
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*((_QWORD *)a1 + 72) + 320LL) + 40LL))(
    *((_QWORD *)a1 + 72) + 320LL,
    0);
  LOWORD(v99) = -206;
  BYTE2(v99) = 50;
  (**(void (__fastcall ***)(__int64, _BYTE **))(*((_QWORD *)a1 + 72) + 320LL))(*((_QWORD *)a1 + 72) + 320LL, &v99);
  v8 = (cocos2d::CCNode *)*((_QWORD *)a1 + 72);
  v9 = cocos2d::CCFadeTo::create(2.2, 0);
  v10 = cocos2d::CCEaseInOut::create(v9, 2.0);
  v11 = cocos2d::CCDelayTime::create(0.2);
  v12 = cocos2d::CCFadeTo::create(0.0099999998, 0xFFu);
  v13 = cocos2d::CCEaseInOut::create(v12, 2.0);
  v14 = cocos2d::CCSequence::create(v13, v11, v10, 0);
  cocos2d::CCNode::runAction(v8, v14);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v99, -2.0, 0.0);
  v16 = cocos2d::CCMoveBy::create(0.060000002, v15);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v102, 2.0, 0.0);
  v18 = cocos2d::CCMoveBy::create(0.060000002, v17);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v93, -5.0, 0.0);
  v20 = cocos2d::CCMoveBy::create(0.050000001, v19);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v94, 5.0, 0.0);
  v22 = cocos2d::CCMoveBy::create(0.050000001, v21);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v95, -5.0, 0.0);
  v24 = cocos2d::CCMoveBy::create(0.0, v23);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v96, 5.0, 0.0);
  v26 = cocos2d::CCMoveBy::create(0.0, v25);
  v27 = 0;
  v28 = cocos2d::CCSequence::create(v26, v24, v22, v20, v18, v16, 0);
  cocos2d::CCNode::runAction(*((cocos2d::CCNode **)a1 + 70), v28);
  v29 = (cocos2d::CCNode *)*((_QWORD *)a1 + 70);
  v30 = cocos2d::CCScaleTo::create(1.2, 1.2);
  v31 = cocos2d::CCEaseInOut::create(v30, 2.0);
  v32 = cocos2d::CCDelayTime::create(0.15000001);
  v33 = cocos2d::CCScaleTo::create(0.2, 1.5);
  v34 = cocos2d::CCEaseOut::create(v33, 1.8);
  v35 = cocos2d::CCDelayTime::create(0.050000001);
  v36 = cocos2d::CCSequence::create(v35, v34, v32, v31, 0);
  cocos2d::CCNode::runAction(v29, v36);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v103, v100 * 0.5, v101 + 10.0);
  v37 = (float)((float)-v101 * 0.5) - 25.0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v99, (const struct cocos2d::CCPoint *)&unk_905628);
  v39 = v38;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v102, 0.0, v37);
  v41 = cocos2d_lightningWithStrikePoint(v40, v39);
  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v41 + 184LL))(v41, &v103);
  (**(void (__fastcall ***)(__int64, void *))(v41 + 320))(v41 + 320, &unk_6FF654);
  *(_DWORD *)(v41 + 368) = 1084227584;
  *(_WORD *)(v41 + 372) = 257;
  *(_DWORD *)(v41 + 380) = 1065353216;
  (*(void (__fastcall **)(cocos2d::CCNode *, __int64, _QWORD))(*(_QWORD *)a1 + 456LL))(a1, v41, 0);
  LODWORD(v99) = 845465750;
  v42 = cocos2d::CCLayerColor::create((const struct cocos2d::_ccColor4B *)&v99);
  v102 = 0x100000302LL;
  (**((void (__fastcall ***)(__int64, __int64))v42 + 54))((__int64)v42 + 432, 0x100000302LL);
  (*(void (__fastcall **)(cocos2d::CCNode *, struct cocos2d::CCLayerColor *, __int64))(*(_QWORD *)a1 + 456LL))(
    a1,
    v42,
    10);
  v43 = cocos2d::CCCallFunc::create(v42, sub_3E5B0);
  v44 = cocos2d::CCBlink::create(0.12, 1u);
  v45 = cocos2d::CCDelayTime::create(0.079999998);
  v46 = cocos2d::CCSequence::create(v45, v44, v43, 0);
  cocos2d::CCNode::runAction(v42, v46);
  v47 = (cocos2d::CCNode *)*((_QWORD *)a1 + 73);
  v48 = cocos2d::CCTintTo::create(0.80000001, 0x1Du, 0xEu, 0x2Fu);
  v49 = cocos2d::CCEaseInOut::create(v48, 2.0);
  v50 = cocos2d::CCDelayTime::create(0.1);
  v51 = cocos2d::CCTintTo::create(0.30000001, 0x1Du, 0x2Au, 0x2Fu);
  v52 = cocos2d::CCEaseInOut::create(v51, 2.0);
  v53 = cocos2d::CCSequence::create(v52, v50, v49, 0);
  cocos2d::CCNode::runAction(v47, v53);
  v99 = v97;
  v54 = qword_906070;
  if ( !qword_906070 )
  {
    v102 = (__int64)operator new(0x3D0u);
    qword_906070 = sub_47C350(v102);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070);
    v54 = qword_906070;
  }
  v55 = MusicDownloadManager_pathForSFX(v54, v97, 0x4E6u);
  v58 = qword_905F60;
  if ( !qword_905F60 )
  {
    v102 = (__int64)operator new(0x8A8u);
    qword_905F60 = sub_5AE20(v102);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60);
    v58 = qword_905F60;
  }
  FMODAudioEngine_playEffect_0(v58, (__int64)v55, v56, v57, 1065353216);
  v99 = v98;
  v59 = qword_906070;
  if ( !qword_906070 )
  {
    v102 = (__int64)operator new(0x3D0u);
    qword_906070 = sub_47C350(v102);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070);
    v59 = qword_906070;
  }
  v60 = MusicDownloadManager_pathForSFX(v59, v98, 0x1DD4u);
  v61 = qword_905F60;
  if ( !qword_905F60 )
  {
    v102 = (__int64)operator new(0x8A8u);
    qword_905F60 = sub_5AE20(v102);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60);
    v61 = qword_905F60;
  }
  rand();
  FMODAudioEngine_playEffect_0(v61, (__int64)v60, v62, v63, 1061997773);
  v99 = v97;
  v64 = qword_906070;
  if ( !qword_906070 )
  {
    v102 = (__int64)operator new(0x3D0u);
    qword_906070 = sub_47C350(v102);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070);
    v64 = qword_906070;
  }
  v65 = MusicDownloadManager_pathForSFX(v64, v97, 0x4FDu);
  v66 = qword_905F60;
  if ( !qword_905F60 )
  {
    v102 = (__int64)operator new(0x8A8u);
    qword_905F60 = sub_5AE20(v102);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60);
    v66 = qword_905F60;
  }
  rand();
  FMODAudioEngine_playEffect_0(v66, (__int64)v65, v67, v68, 1065353216);
  v99 = v98;
  v69 = qword_906070;
  if ( !qword_906070 )
  {
    v102 = (__int64)operator new(0x3D0u);
    qword_906070 = sub_47C350(v102);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070);
    v69 = qword_906070;
  }
  v70 = MusicDownloadManager_pathForSFX(v69, v98, 0x51FAu);
  v71 = qword_905F60;
  if ( !qword_905F60 )
  {
    v102 = (__int64)operator new(0x8A8u);
    qword_905F60 = sub_5AE20(v102);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60);
    v71 = qword_905F60;
  }
  rand();
  FMODAudioEngine_playEffect_0(v71, (__int64)v70, v72, v73, 1065353216);
  qmemcpy(&v99, ",8=", 3);
  (**(void (__fastcall ***)(__int64, _BYTE **))(*((_QWORD *)a1 + 74) + 320LL))(*((_QWORD *)a1 + 74) + 320LL, &v99);
  v74 = (cocos2d::CCNode *)*((_QWORD *)a1 + 74);
  v75 = cocos2d::CCTintTo::create(2.2, 0x6Eu, 0x47u, 0x99u);
  v76 = cocos2d::CCEaseInOut::create(v75, 1.8);
  v77 = cocos2d::CCDelayTime::create(0.60000002);
  v78 = cocos2d::CCSequence::create(v77, v76, 0);
  cocos2d::CCNode::runAction(v74, v78);
  if ( cocos2d::CCArray::count(*((cocos2d::CCArray **)a1 + 63)) )
  {
    do
    {
      v79 = cocos2d::CCArray::objectAtIndex(*((cocos2d::CCArray **)a1 + 63), v27);
      v80 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v79 + 40) + 8LL))((__int64)v79 + 320);
      LOWORD(v99) = *(_WORD *)v80;
      v81 = cocos2d::CCTintTo::create(1.2, (unsigned __int8)v99, BYTE1(v99), *(_BYTE *)(v80 + 2));
      v82 = cocos2d::CCEaseInOut::create(v81, 2.0);
      v83 = cocos2d::CCTintTo::create(0.2, (v27 & 1) != 0 ? 0x96 : 0, 0xFFu, 0);
      v84 = cocos2d::CCEaseInOut::create(v83, 2.0);
      v85 = cocos2d::CCSequence::create(v84, v82, 0);
      cocos2d::CCNode::runAction(v79, v85);
      ++v27;
    }
    while ( v27 < cocos2d::CCArray::count(*((cocos2d::CCArray **)a1 + 63)) );
  }
  v86 = cocos2d::CCCallFunc::create(a1, sub_587250);
  v87 = cocos2d::CCDelayTime::create(0.30000001);
  v88 = cocos2d::CCSequence::create(v87, v86, 0);
  cocos2d::CCNode::runAction(a1, v88);
  v89 = cocos2d::CCCallFunc::create(a1, sub_587320);
  v90 = cocos2d::CCDelayTime::create(1.0);
  v91 = cocos2d::CCSequence::create(v90, v89, 0);
  return cocos2d::CCNode::runAction(a1, v91);
}
