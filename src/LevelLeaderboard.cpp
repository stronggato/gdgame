#include <Geode/binding/LevelLeaderboard.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/12] Address: 0x137190
// Method: LevelLeaderboard::onChangeMode
// Hidden C++ exception states: #wind=1
__int64 __fastcall LevelLeaderboard_onChangeMode(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rbx
  cocos2d::CCSpriteFrameCache *v8; // rax
  struct cocos2d::CCSpriteFrame *v9; // rax
  void *v10; // [rsp+38h] [rbp+10h]

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x1371a3*/
  if ( (_DWORD)result ) /*0x1371a8*/
  {
    if ( (_DWORD)result == 1 ) /*0x1371ad*/
      return CreatorLayer_onAdventureMap(a1 - 416, 0); /*0x1371c6*/
  }
  else
  {
    v5 = qword_905FD0; /*0x1371cb*/
    if ( !qword_905FD0 ) /*0x1371d5*/
    {
      v10 = operator new(0x6E8u); /*0x1371e1*/
      qword_905FD0 = sub_2723A0(v10); /*0x1371ef*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x137200*/
      v5 = qword_905FD0; /*0x137202*/
    }
    LOBYTE(v4) = 1; /*0x137209*/
    sub_27B1C0(v5, &word_708038, v4); /*0x137213*/
    v6 = **(_QWORD **)(a1 + 16); /*0x13721c*/
    v7 = *(_QWORD *)(a1 + 16); /*0x13721f*/
    v8 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x137222*/
    v9 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v8, "secretDoorBtn_open_001.png"); /*0x137232*/
    return (*(__int64 (__fastcall **)(__int64, struct cocos2d::CCSpriteFrame *))(v6 + 1008))(v7, v9); /*0x13723e*/
  }
  return result; /*0x1371bc*/
}

// [2/12] Address: 0x24e3a0
// Method: LevelLeaderboard::onUpdate
// Hidden C++ exception states: #wind=2
__int64 __fastcall LevelLeaderboard_onUpdate(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  void *v5; // [rsp+38h] [rbp+10h]
  void *v6; // [rsp+38h] [rbp+10h]

  result = GJAccountManager_sharedState(a1); /*0x24e3ad*/
  if ( *(_DWORD *)(result + 360) - *(_DWORD *)(result + 364) > 0 ) /*0x24e3c0*/
  {
    v3 = qword_905FD0; /*0x24e3c6*/
    if ( !qword_905FD0 ) /*0x24e3d0*/
    {
      v5 = operator new(0x6E8u); /*0x24e3dc*/
      qword_905FD0 = sub_2723A0(v5); /*0x24e3ea*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x24e3fb*/
      v3 = qword_905FD0; /*0x24e3fd*/
    }
    result = GameManager_getGameVariable(v3, "0241"); /*0x24e40b*/
    if ( (_BYTE)result ) /*0x24e412*/
    {
      if ( !*(_BYTE *)(a1 + 544) ) /*0x24e4be*/
      {
        *(_BYTE *)(a1 + 544) = 1; /*0x24e4c7*/
        return sub_24DBF0(a1); /*0x24e4d1*/
      }
    }
    else
    {
      v4 = qword_905FD0; /*0x24e418*/
      if ( !qword_905FD0 ) /*0x24e422*/
      {
        v6 = operator new(0x6E8u); /*0x24e42e*/
        qword_905FD0 = sub_2723A0(v6); /*0x24e43c*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x24e44d*/
        v4 = qword_905FD0; /*0x24e44f*/
      }
      result = GameManager_getGameVariable(v4, "0218"); /*0x24e460*/
      if ( !(_BYTE)result ) /*0x24e467*/
      {
        result = GameManager_getGameVariable(v4, "0219"); /*0x24e473*/
        if ( !(_BYTE)result ) /*0x24e47a*/
        {
          if ( cocos2d::CCDictionary::count(*(cocos2d::CCDictionary **)(a1 + 872)) ) /*0x24e483*/
            result = sub_24DF00(a1); /*0x24e490*/
          else
            result = sub_24DBF0(a1); /*0x24e4a7*/
          *(_BYTE *)(a1 + 544) = 1; /*0x24e495*/
        }
      }
    }
  }
  return result; /*0x24e49c*/
}

// [3/12] Address: 0x4240a0
// Method: LevelLeaderboard::~LevelLeaderboard
// Hidden C++ exception states: #wind=1
char *__fastcall LevelLeaderboard__dtor_LevelLeaderboard(char *Block, char a2)
{
  char *v4; // rdi
  __int64 v5; // rax
  void *v6; // rax
  cocos2d::CCObject *v7; // rcx

  *(_QWORD *)Block = &LevelLeaderboard::`vftable'; /*0x4240bb*/
  *((_QWORD *)Block + 40) = &LevelLeaderboard::`vftable'; /*0x4240c5*/
  *((_QWORD *)Block + 41) = &LevelLeaderboard::`vftable'; /*0x4240d3*/
  *((_QWORD *)Block + 42) = &LevelLeaderboard::`vftable'; /*0x4240e1*/
  *((_QWORD *)Block + 43) = &LevelLeaderboard::`vftable'; /*0x4240ef*/
  *((_QWORD *)Block + 44) = &LevelLeaderboard::`vftable'; /*0x4240fd*/
  *((_QWORD *)Block + 51) = &LevelLeaderboard::`vftable'; /*0x42410b*/
  *((_QWORD *)Block + 54) = &LevelLeaderboard::`vftable'; /*0x424119*/
  *((_QWORD *)Block + 68) = &LevelLeaderboard::`vftable'; /*0x424127*/
  v4 = Block + 664; /*0x42412e*/
  *((_QWORD *)Block + 83) = &LevelLeaderboard::`vftable'; /*0x42413c*/
  *((_QWORD *)Block + 84) = &LevelLeaderboard::`vftable'; /*0x424146*/
  v5 = *(_QWORD *)&qword_905FB0; /*0x42414d*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x424157*/
  {
    v6 = operator new(0x690u); /*0x42415e*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v6); /*0x42416b*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x42417c*/
    v5 = *(_QWORD *)&qword_905FB0; /*0x42417e*/
  }
  if ( *(char **)(v5 + 1424) == v4 ) /*0x42418c*/
    *(_QWORD *)(v5 + 1424) = 0; /*0x42418e*/
  v7 = (cocos2d::CCObject *)*((_QWORD *)Block + 85); /*0x424199*/
  if ( v7 ) /*0x4241a3*/
    cocos2d::CCObject::release(v7); /*0x4241a5*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x4241ae*/
  if ( (a2 & 1) != 0 ) /*0x4241b8*/
    j_j_free(Block); /*0x4241c2*/
  return Block; /*0x4241ca*/
}

// [4/12] Address: 0x4241e0
// Method: LevelLeaderboard::create
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall LevelLeaderboard_create(__int64 a1, unsigned int a2, unsigned int a3)
{
  _QWORD *v6; // r14

  v6 = operator new(0x2F0u); /*0x424204*/
  FLAlertLayer_FLAlertLayer((__int64)v6); /*0x42420f*/
  *v6 = &LevelLeaderboard::`vftable'; /*0x42421b*/
  v6[40] = &LevelLeaderboard::`vftable'; /*0x424225*/
  v6[41] = &LevelLeaderboard::`vftable'; /*0x424233*/
  v6[42] = &LevelLeaderboard::`vftable'; /*0x424241*/
  v6[43] = &LevelLeaderboard::`vftable'; /*0x42424f*/
  v6[44] = &LevelLeaderboard::`vftable'; /*0x42425d*/
  v6[51] = &LevelLeaderboard::`vftable'; /*0x42426b*/
  v6[54] = &LevelLeaderboard::`vftable'; /*0x424279*/
  v6[68] = &LevelLeaderboard::`vftable'; /*0x424287*/
  v6[83] = &LevelLeaderboard::`vftable'; /*0x424295*/
  v6[84] = &LevelLeaderboard::`vftable'; /*0x4242a3*/
  v6[85] = 0; /*0x4242ac*/
  *((_DWORD *)v6 + 172) = 0; /*0x4242b3*/
  v6[87] = 0; /*0x4242ba*/
  v6[88] = 0; /*0x4242c1*/
  v6[89] = 0; /*0x4242c8*/
  v6[90] = 0; /*0x4242cf*/
  v6[92] = 0; /*0x4242d6*/
  v6[93] = 0; /*0x4242dd*/
  if ( (unsigned __int8)LevelLeaderboard_init(v6, a1, a2, a3) ) /*0x4242f0*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v6); /*0x4242fc*/
    return v6; /*0x424302*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v6 + 8LL))(v6, 1); /*0x424316*/
    return 0; /*0x424319*/
  }
}

// [5/12] Address: 0x424330
// Method: LevelLeaderboard::init
// Hidden C++ exception states: #wind=12
bool __fastcall LevelLeaderboard_init(__int64 a1, cocos2d::CCObject *a2, int a3, int a4)
{
  bool result; // al
  int v9; // r13d
  __int64 v10; // rcx
  __int64 v11; // rax
  float v12; // xmm9_4
  __int64 v13; // rax
  __int64 *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  __int128 *v22; // rdx
  __int64 v23; // r8
  const char *p_Src; // rcx
  struct cocos2d::CCLabelBMFont *v25; // r15
  __int64 v26; // rbx
  __int64 v27; // rax
  const char *v28; // rdx
  const char *v29; // rcx
  cocos2d::CCSprite *v30; // rdi
  float v31; // xmm7_4
  float v32; // xmm6_4
  double v33; // xmm0_8
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rbx
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  int v54; // r15d
  __int64 v55; // rbx
  __int64 v56; // rax
  __int64 *v57; // rsi
  __int64 v58; // rdi
  __int64 v59; // rbx
  __int64 v60; // rax
  __int64 v61; // rax
  _DWORD *v62; // rcx
  int v63; // ebx
  __int64 v64; // rcx
  cocos2d::CCString *v65; // rax
  struct cocos2d::CCSprite *v66; // rax
  __int64 v67; // rsi
  __int64 v68; // rdi
  __int64 v69; // rbx
  __int64 v70; // rax
  __int64 v71; // rax
  struct cocos2d::CCSprite *v72; // rbx
  __int64 v73; // rax
  __int64 v74; // rsi
  __int64 v75; // rbx
  __int64 v76; // rdi
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rdi
  __int64 v82; // rbx
  __int64 v83; // rax
  __int64 v84; // r12
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rbx
  int v90; // edi
  int v91; // esi
  char *v92; // rax
  unsigned int v93; // r15d
  const char *v94; // rcx
  struct cocos2d::CCSprite *v95; // r13
  __int64 v96; // rdi
  __int64 v97; // rbx
  __int64 v98; // rax
  __int64 v99; // rax
  void *v100; // rcx
  __int64 v101; // r8
  _OWORD *v102; // rdx
  const char *v103; // rax
  __int64 *v104; // rsi
  __int64 v105; // rdi
  __int64 v106; // rbx
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // r14
  __int64 v111; // rcx
  int v112; // [rsp+40h] [rbp-C0h] BYREF
  float v113; // [rsp+48h] [rbp-B8h] BYREF
  float v114; // [rsp+4Ch] [rbp-B4h]
  __int128 *v115; // [rsp+50h] [rbp-B0h] BYREF
  __int128 *v116; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v117; // [rsp+60h] [rbp-A0h]
  int v118; // [rsp+68h] [rbp-98h] BYREF
  __int128 *v119; // [rsp+70h] [rbp-90h] BYREF
  __int128 v120; // [rsp+78h] [rbp-88h] BYREF
  __int64 v121; // [rsp+88h] [rbp-78h]
  unsigned __int64 v122; // [rsp+90h] [rbp-70h]
  __int128 v123; // [rsp+98h] [rbp-68h] BYREF
  __int64 v124; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v125; // [rsp+B0h] [rbp-50h]
  __int128 v126; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v127; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v128; // [rsp+D0h] [rbp-30h]
  __int128 Src; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v130; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v131; // [rsp+F0h] [rbp-10h]

  result = FLAlertLayer_init(a1, 150); /*0x4243a2*/
  if ( result )
  {
    if ( a3 == 3 && *((_DWORD *)a2 + 243) != 5 ) /*0x4243c0*/
      a3 = 1; /*0x4243c0*/
    v118 = *((_DWORD *)a2 + 305); /*0x4243c9*/
    if ( v118 == 2 ) /*0x4243d5*/
      a3 = 3; /*0x4243d5*/
    *(_DWORD *)(a1 + 688) = a3; /*0x4243d8*/
    *(_DWORD *)(a1 + 692) = a4; /*0x4243df*/
    *(_QWORD *)(a1 + 680) = a2; /*0x4243e6*/
    cocos2d::CCObject::retain(a2); /*0x4243f0*/
    v9 = *((_DWORD *)a2 + 243); /*0x4243f6*/
    v11 = cocos2d::CCDirector::sharedDirector(v10); /*0x4243fd*/
    cocos2d::CCDirector::getWinSize(v11, &v113); /*0x42440b*/
    v12 = 0.0; /*0x42441f*/
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)&v123, 0.0, 0.0, 80.0, 80.0); /*0x42442d*/
    v14 = (__int64 *)cocos2d::extension::CCScale9Sprite::create("GJ_square02.png", v13); /*0x424443*/
    LOBYTE(v15) = -1; /*0x424451*/
    (*(void (__fastcall **)(__int64 *, __int64))(v14[40] + 40))(v14 + 40, v15); /*0x42445a*/
    v16 = *v14; /*0x42445d*/
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v116, 440.0, 290.0); /*0x424475*/
    (*(void (__fastcall **)(__int64 *, __int64))(v16 + 312))(v14, v17); /*0x424481*/
    v18 = -1; /*0x424491*/
    (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))( /*0x42449e*/
      *(_QWORD *)(a1 + 584),
      v14,
      0xFFFFFFFFLL);
    v19 = *v14; /*0x4244a4*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v116, v113 * 0.5, v114 * 0.5); /*0x4244cb*/
    (*(void (__fastcall **)(__int64 *, __int64))(v19 + 184))(v14, v20); /*0x4244d7*/
    v21 = ((__int64 (*)(void))cocos2d::CCMenu::create)(); /*0x4244dd*/
    *(_QWORD *)(a1 + 552) = v21; /*0x4244e3*/
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v21, 10); /*0x424507*/
    sub_3E4F0(&v126, *(_QWORD *)(a1 + 680) + 344LL); /*0x42451c*/
    v22 = &v126; /*0x424522*/
    if ( v128 > 0xF ) /*0x42452b*/
      v22 = (__int128 *)v126; /*0x42452b*/
    Src = 0; /*0x424533*/
    v130 = 0; /*0x424537*/
    v131 = 0; /*0x42453b*/
    v23 = -1; /*0x42453f*/
    do /*0x424545*/
      ++v23; /*0x424542*/
    while ( *((_BYTE *)v22 + v23) ); /*0x424545*/
    sub_3C230(&Src); /*0x424550*/
    sub_3C310(&v126); /*0x42455a*/
    sub_43D80(&Src, " Leaderboard", 0xCu); /*0x424570*/
    p_Src = (const char *)&Src; /*0x424575*/
    if ( v131 > 0xF ) /*0x42457e*/
      p_Src = (const char *)Src; /*0x42457e*/
    v25 = cocos2d::CCLabelBMFont::create(p_Src, "goldFont.fnt"); /*0x424590*/
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))( /*0x4245b0*/
      *(_QWORD *)(a1 + 584),
      v25,
      20);
    v26 = *(_QWORD *)v25; /*0x4245b3*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v116, v113 * 0.5, (float)((float)(v114 * 0.5) + 145.0) - 18.0); /*0x4245e7*/
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v26 + 184))(v25, v27); /*0x4245f3*/
    cocos2d::CCLabelBMFont::limitLabelWidth(v25, 300.0, 0.80000001, 0.0); /*0x424610*/
    if ( v9 == 5 ) /*0x424635*/
    {
      v28 = "GJ_timeIcon_001.png"; /*0x424642*/
      if ( a4 == 1 ) /*0x42464d*/
        v28 = "GJ_pointsIcon_001.png"; /*0x42464d*/
      v123 = 0; /*0x424654*/
      v124 = 0; /*0x42465a*/
      v125 = 0; /*0x42465e*/
      do /*0x424665*/
        ++v18; /*0x424662*/
      while ( v28[v18] ); /*0x424665*/
      sub_3C230(&v123); /*0x424671*/
      v29 = (const char *)&v123; /*0x424677*/
      if ( v125 > 0xF ) /*0x424680*/
        v29 = (const char *)v123; /*0x424680*/
      v30 = cocos2d::CCSprite::createWithSpriteFrameName(v29); /*0x42468b*/
      v31 = *((float *)cocos2d::CCSprite::getTextureRect(v30) + 2); /*0x424697*/
      (*(void (__fastcall **)(_QWORD, cocos2d::CCSprite *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))( /*0x4246b9*/
        *(_QWORD *)(a1 + 584),
        v30,
        20);
      v32 = *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v25 + 320LL))(v25); /*0x4246cb*/
      v33 = (*(double (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v25 + 168LL))(v25); /*0x4246d5*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v115, (float)((float)(*(float *)&v33 * v32) * 0.5) + 2.5, -3.0); /*0x4246fc*/
      v35 = v34; /*0x424702*/
      v36 = (*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v25 + 200LL))(v25); /*0x424712*/
      cocos2d::CCPoint::operator+(v36, &v112, v35); /*0x42471f*/
      (*(void (__fastcall **)(cocos2d::CCSprite *, int *))(*(_QWORD *)v30 + 184LL))(v30, &v112); /*0x424730*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v115, (float)((float)-v31 * 0.5) - 2.5, 0.0); /*0x424756*/
      v38 = v37; /*0x42475c*/
      v39 = (*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v25 + 200LL))(v25); /*0x42476c*/
      cocos2d::CCPoint::operator+(v39, &v112, v38); /*0x424779*/
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, int *))(*(_QWORD *)v25 + 184LL))(v25, &v112); /*0x42478a*/
      v115 = &v120; /*0x424795*/
      v120 = 0; /*0x42479d*/
      v121 = 0; /*0x4247a4*/
      v122 = 0; /*0x4247a8*/
      *(_QWORD *)&v120 = sub_3C460(32); /*0x4247b6*/
      v121 = 19; /*0x4247bb*/
      v122 = 31; /*0x4247c3*/
      strcpy((char *)v120, "GJ_timeIcon_001.png"); /*0x4247d2*/
      v40 = *(_QWORD *)(a1 + 552); /*0x4247ee*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v112, 0.0, -0.5); /*0x424813*/
      v42 = sub_425500( /*0x424843*/
              a1,
              (unsigned int)&v120,
              (unsigned int)sub_426170,
              v40,
              1060320051,
              v41,
              2 - (unsigned int)(a4 != 0));
      *(_QWORD *)(a1 + 736) = v42; /*0x424848*/
      LOBYTE(v43) = a4 != 0; /*0x424852*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v42 + 936LL))(v42, v43); /*0x424862*/
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 736) + 64LL))(*(_QWORD *)(a1 + 736), 0); /*0x424871*/
      v115 = &v120; /*0x424879*/
      v120 = 0; /*0x424881*/
      v121 = 0; /*0x424886*/
      v122 = 0; /*0x42488a*/
      *(_QWORD *)&v120 = sub_3C460(32); /*0x424898*/
      v121 = 21; /*0x42489d*/
      v122 = 31; /*0x4248a5*/
      strcpy((char *)v120, "GJ_pointsIcon_001.png"); /*0x4248b4*/
      v44 = *(_QWORD *)(a1 + 552); /*0x4248ce*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v112, 0.0, -1.0); /*0x4248f1*/
      v46 = sub_425500( /*0x424919*/
              a1,
              (unsigned int)&v120,
              (unsigned int)sub_426170,
              v44,
              1060320051,
              v45,
              (unsigned int)(a4 == 1) + 1);
      *(_QWORD *)(a1 + 744) = v46; /*0x42491e*/
      LOBYTE(v47) = a4 != 1; /*0x424929*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v46 + 936LL))(v46, v47); /*0x424939*/
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 744) + 64LL))(*(_QWORD *)(a1 + 744), 1); /*0x42494b*/
      v48 = *(_QWORD *)(a1 + 584); /*0x42494e*/
      v49 = *(_QWORD *)(a1 + 552); /*0x424955*/
      cocos2d::CCPoint::CCPoint( /*0x424989*/
        (cocos2d::CCPoint *)&v115,
        (float)((float)(v113 * 0.5) - 220.0) + 25.0,
        (float)(v114 * 0.5) + 40.0);
      cocos2d::CCNode::convertToWorldSpace(v48, &v112, v50); /*0x42499a*/
      cocos2d::CCNode::convertToNodeSpace(v49, &v116, v51); /*0x4249ab*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v115, 0.0, 20.0); /*0x4249be*/
      cocos2d::CCPoint::operator+(&v116, &v112, v52); /*0x4249d1*/
      (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 736) + 184LL))(*(_QWORD *)(a1 + 736), &v112); /*0x4249e6*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v115, 0.0, -20.0); /*0x4249fd*/
      cocos2d::CCPoint::operator+(&v116, &v112, v53); /*0x424a10*/
      (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 744) + 184LL))(*(_QWORD *)(a1 + 744), &v112); /*0x424a25*/
      v54 = v118; /*0x424a2b*/
      if ( v118 == 2 ) /*0x424a34*/
      {
        v115 = &v120; /*0x424a3f*/
        v120 = 0; /*0x424a47*/
        v121 = 0; /*0x424a4c*/
        v122 = 0; /*0x424a50*/
        *(_QWORD *)&v120 = sub_3C460(32); /*0x424a5e*/
        v121 = 19; /*0x424a63*/
        v122 = 31; /*0x424a6b*/
        strcpy((char *)v120, "edit_delBtn_001.png"); /*0x424a7a*/
        v55 = *(_QWORD *)(a1 + 552); /*0x424a96*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v118, 0.0, -0.5); /*0x424aa9*/
        v57 = (__int64 *)sub_425500(a1, (unsigned int)&v120, (unsigned int)sub_425750, v55, 1060320051, v56, 4); /*0x424ada*/
        cocos2d::CCPoint::CCPoint( /*0x424b0f*/
          (cocos2d::CCPoint *)&v112,
          (float)((float)(v113 * 0.5) + 220.0) - 25.0,
          (float)((float)(v114 * 0.5) + 145.0) - 23.0);
        v58 = *v57; /*0x424b15*/
        v59 = *(_QWORD *)(a1 + 552); /*0x424b18*/
        cocos2d::CCNode::convertToWorldSpace(*(_QWORD *)(a1 + 584), &v115, &v112); /*0x424b30*/
        cocos2d::CCNode::convertToNodeSpace(v59, &v119, v60); /*0x424b41*/
        (*(void (__fastcall **)(__int64 *, __int64))(v58 + 184))(v57, v61); /*0x424b4d*/
      }
      sub_3C310(&v123); /*0x424b58*/
    }
    else
    {
      v54 = v118; /*0x424b5f*/
    }
    v62 = *(_DWORD **)(a1 + 680); /*0x424b64*/
    if ( v62[165] == v62[166] ) /*0x424b77*/
    {
      v63 = v62[162] - v62[163]; /*0x424b7f*/
      v64 = *(_QWORD *)&qword_905FB0; /*0x424b85*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x424b8f*/
      {
        v119 = (__int128 *)operator new(0x690u); /*0x424b9b*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v119); /*0x424ba9*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x424bba*/
        v64 = *(_QWORD *)&qword_905FB0; /*0x424bbc*/
      }
      v65 = cocos2d::CCDictionary::valueForKey(*(cocos2d::CCDictionary **)(v64 + 1080), v63); /*0x424bcd*/
      cocos2d::CCString::intValue(v65); /*0x424bd6*/
    }
    v66 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_closeBtn_001.png"); /*0x424be3*/
    v67 = CCMenuItemSpriteExtra_create(v66, 0, a1, UploadPopup_onClose); /*0x424bfd*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v67); /*0x424c17*/
    *(_DWORD *)(v67 + 372) = 1070386381; /*0x424c1a*/
    v68 = *(_QWORD *)v67; /*0x424c24*/
    v69 = *(_QWORD *)(a1 + 552); /*0x424c27*/
    cocos2d::CCPoint::CCPoint( /*0x424c63*/
      (cocos2d::CCPoint *)&v119,
      (float)((float)(v113 * 0.5) - 220.0) + 10.0,
      (float)((float)(v114 * 0.5) + 145.0) - 10.0);
    cocos2d::CCNode::convertToNodeSpace(v69, &v115, v70); /*0x424c74*/
    (*(void (__fastcall **)(__int64, __int64))(v68 + 184))(v67, v71); /*0x424c80*/
    v72 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_updateBtn_001.png"); /*0x424c93*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v72 + 160LL))(v72); /*0x424cae*/
    v73 = CCMenuItemSpriteExtra_create(v72, 0, a1, sub_4262E0); /*0x424cbf*/
    *(_QWORD *)(a1 + 728) = v73; /*0x424cc4*/
    *(_DWORD *)(v73 + 372) = 1069547520; /*0x424ccb*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 552) + 464LL))( /*0x424ce6*/
      *(_QWORD *)(a1 + 552),
      *(_QWORD *)(a1 + 728));
    v74 = **(_QWORD **)(a1 + 728); /*0x424cf3*/
    v75 = *(_QWORD *)(a1 + 552); /*0x424cf6*/
    v76 = *(_QWORD *)(a1 + 728); /*0x424cfd*/
    cocos2d::CCPoint::CCPoint( /*0x424d2d*/
      (cocos2d::CCPoint *)&v119,
      (float)((float)(v113 * 0.5) + 220.0) - 25.0,
      (float)(v114 * 0.5) + 100.0);
    cocos2d::CCNode::convertToNodeSpace(v75, &v115, v77); /*0x424d3e*/
    (*(void (__fastcall **)(__int64, __int64))(v74 + 184))(v76, v78); /*0x424d4a*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 728) + 336LL))(*(_QWORD *)(a1 + 728), 0); /*0x424d5c*/
    v79 = LoadingCircle_create(); /*0x424d62*/
    *(_QWORD *)(a1 + 712) = v79; /*0x424d67*/
    *(_QWORD *)(v79 + 552) = *(_QWORD *)(a1 + 584); /*0x424d75*/
    *(_BYTE *)(*(_QWORD *)(a1 + 712) + 560LL) = 0; /*0x424d83*/
    cocos2d::CCObject::retain(*(cocos2d::CCObject **)(a1 + 712)); /*0x424d91*/
    LoadingCircle_show(*(_QWORD *)(a1 + 712)); /*0x424d9e*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 712) + 336LL))(*(_QWORD *)(a1 + 712), 0); /*0x424daf*/
    v119 = &v120; /*0x424dba*/
    v120 = 0; /*0x424dc2*/
    v121 = 0; /*0x424dc9*/
    v122 = 0; /*0x424dcd*/
    *(_QWORD *)&v120 = sub_3C460(32); /*0x424dde*/
    v121 = 31; /*0x424de3*/
    v122 = 31; /*0x424deb*/
    strcpy((char *)v120, "No <cg>Internet</c> connection!"); /*0x424dfa*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v115, 0.5, 1.0); /*0x424e3d*/
    v80 = TextArea_create(&v120, &qword_6FFF68); /*0x424e75*/
    *(_QWORD *)(a1 + 720) = v80; /*0x424e7a*/
    *(_DWORD *)(v80 + 664) = 1106247680; /*0x424e81*/
    v81 = **(_QWORD **)(a1 + 720); /*0x424e92*/
    v82 = *(_QWORD *)(a1 + 720); /*0x424e95*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v119, v113 * 0.5, (float)(v114 * 0.5) + 10.0); /*0x424eb7*/
    (*(void (__fastcall **)(__int64, __int64))(v81 + 184))(v82, v83); /*0x424ec3*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 720) + 160LL))(*(_QWORD *)(a1 + 720)); /*0x424ed6*/
    v84 = 2; /*0x424ee6*/
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 584) + 456LL))( /*0x424ef6*/
      *(_QWORD *)(a1 + 584),
      *(_QWORD *)(a1 + 720),
      2);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 720) + 336LL))(*(_QWORD *)(a1 + 720), 0); /*0x424f08*/
    if ( v54 != 2 ) /*0x424f11*/
    {
      v89 = cocos2d::CCMenu::create(v86, v85, v87, v88); /*0x424f1d*/
      v116 = (__int128 *)v89; /*0x424f20*/
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 584) + 456LL))( /*0x424f3f*/
        *(_QWORD *)(a1 + 584),
        v89,
        2);
      if ( v9 == 5 ) /*0x424f46*/
        v12 = 15.0; /*0x424f48*/
      v90 = (v9 == 5) + 3; /*0x424f5b*/
      v112 = v90; /*0x424f5e*/
      v91 = 0; /*0x424f62*/
      while ( 1 ) /*0x424f73*/
      {
        v120 = 0; /*0x424f73*/
        v121 = 0; /*0x424f78*/
        v122 = 15; /*0x424f80*/
        LOBYTE(v120) = 0; /*0x424f88*/
        if ( !v91 ) /*0x424f91*/
          break; /*0x424f91*/
        switch ( v91 ) /*0x424f9a*/
        {
          case 1: /*0x424f9a*/
            v92 = (char *)sub_3C460(48); /*0x425043*/
            v121 = 34; /*0x425048*/
            v122 = 47; /*0x425050*/
            strcpy(v92, "levelLeaderboard_globalBtn_001.png"); /*0x42505f*/
            v93 = 1; /*0x42507c*/
            goto LABEL_40; /*0x425082*/
          case 2: /*0x424f9a*/
            v92 = (char *)sub_3C460(48); /*0x424ffb*/
            v121 = 40; /*0x425000*/
            v122 = 47; /*0x425008*/
            strcpy(v92, "levelLeaderboard_globalWeeklyBtn_001.png"); /*0x425017*/
            v93 = 2; /*0x425036*/
            goto LABEL_40; /*0x425039*/
          case 3: /*0x424f9a*/
            v92 = (char *)sub_3C460(48); /*0x424fb3*/
            v121 = 33; /*0x424fb8*/
            v122 = 47; /*0x424fc0*/
            strcpy(v92, "levelLeaderboard_localBtn_001.png"); /*0x424fcf*/
            v93 = 3; /*0x424feb*/
            goto LABEL_40; /*0x424ff1*/
        }
LABEL_46:
        if ( v122 > 0xF ) /*0x4251e4*/
        {
          v100 = (void *)v120; /*0x4251e9*/
          if ( v122 + 1 >= 0x1000 ) /*0x4251f8*/
          {
            v100 = *(void **)(v120 - 8); /*0x4251fe*/
            if ( (unsigned __int64)(v120 - (_QWORD)v100 - 8) > 0x1F ) /*0x42520d*/
              invoke_watson(0, 0, 0, 0, 0); /*0x425492*/
          }
          j_j_free(v100); /*0x425213*/
        }
        if ( ++v91 >= v90 ) /*0x42521c*/
          goto LABEL_51; /*0x42521c*/
      }
      v92 = (char *)sub_3C460(48); /*0x425089*/
      v121 = 35; /*0x42508e*/
      v122 = 47; /*0x425096*/
      strcpy(v92, "levelLeaderboard_friendsBtn_001.png"); /*0x4250a5*/
      v93 = 0; /*0x4250cc*/
LABEL_40:
      *(_QWORD *)&v120 = v92; /*0x4250cf*/
      if ( v121 ) /*0x4250d9*/
      {
        v94 = (const char *)&v120; /*0x4250df*/
        if ( v122 > 0xF ) /*0x4250e9*/
          v94 = v92; /*0x4250e9*/
        v95 = cocos2d::CCSprite::createWithSpriteFrameName(v94); /*0x4250f3*/
        v96 = CCMenuItemSpriteExtra_create(v95, 0, a1, sub_425FF0); /*0x42510a*/
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v96 + 64LL))(v96, v93); /*0x42511a*/
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v89 + 464LL))(v89, v96); /*0x42512d*/
        v97 = *(_QWORD *)v96; /*0x425130*/
        cocos2d::CCPoint::CCPoint( /*0x425170*/
          (cocos2d::CCPoint *)&v119,
          (float)((float)(v113 * 0.5) + 220.0) - 25.0,
          (float)((float)((float)(v114 * 0.5) + 42.0) - (float)((float)v91 * 42.0)) + v12);
        cocos2d::CCNode::convertToNodeSpace(v116, &v115, v98); /*0x425183*/
        (*(void (__fastcall **)(__int64, __int64))(v97 + 184))(v96, v99); /*0x42518f*/
        if ( v93 == *(_DWORD *)(a1 + 688) ) /*0x42519c*/
        {
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v96 + 936LL))(v96, 0); /*0x4251a6*/
          v117 = -26986; /*0x4251ac*/
          LOWORD(v118) = -26986; /*0x4251b8*/
          BYTE2(v118) = -106; /*0x4251bd*/
          (**((void (__fastcall ***)(__int64, int *))v95 + 40))((__int64)v95 + 320, &v118); /*0x4251d1*/
        }
        v90 = v112; /*0x4251d3*/
        v89 = (__int64)v116; /*0x4251d7*/
      }
      goto LABEL_46; /*0x4251d7*/
    }
LABEL_51:
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 680) + 932LL) - *(_DWORD *)(*(_QWORD *)(a1 + 680) + 928LL) > *(_DWORD *)(*(_QWORD *)(a1 + 680) + 948LL)
                                                                                                 - *(_DWORD *)(*(_QWORD *)(a1 + 680) + 952LL) )
    {
      v116 = &v123; /*0x42524f*/
      v123 = 0; /*0x425257*/
      v124 = 0; /*0x42525b*/
      v125 = 0; /*0x42525f*/
      v101 = sub_3C460(288); /*0x42526d*/
      *(_QWORD *)&v123 = v101; /*0x425270*/
      v124 = 276; /*0x425274*/
      v125 = 287; /*0x42527c*/
      v102 = (_OWORD *)v101; /*0x425284*/
      v103 = "<cy>Q: My score is wrong!?</c>\n"
             "A: Level leaderboards changed in update 2.11. Scores from before update 2.11 need to be replayed. You can s"
             "ee your leaderboard percentage by pressing the info button on the bottom left of the level page, or toggle "
             "the Leaderboard percent option.";
      do /*0x4252e0*/
      {
        *v102 = *(_OWORD *)v103; /*0x425293*/
        v102[1] = *((_OWORD *)v103 + 1); /*0x42529a*/
        v102[2] = *((_OWORD *)v103 + 2); /*0x4252a2*/
        v102[3] = *((_OWORD *)v103 + 3); /*0x4252aa*/
        v102[4] = *((_OWORD *)v103 + 4); /*0x4252b2*/
        v102[5] = *((_OWORD *)v103 + 5); /*0x4252ba*/
        v102[6] = *((_OWORD *)v103 + 6); /*0x4252c2*/
        v102 += 8; /*0x4252c6*/
        *(v102 - 1) = *((_OWORD *)v103 + 7); /*0x4252d1*/
        v103 += 128; /*0x4252d5*/
        --v84; /*0x4252dc*/
      }
      while ( v84 ); /*0x4252e0*/
      *v102 = *(_OWORD *)v103; /*0x4252e5*/
      *((_DWORD *)v102 + 4) = *((_DWORD *)v103 + 4); /*0x4252eb*/
      *(_BYTE *)(v101 + 276) = 0; /*0x4252ee*/
      v126 = 0; /*0x4252f8*/
      v127 = 0; /*0x4252fc*/
      v128 = 0; /*0x425300*/
      *(_QWORD *)&v126 = sub_3C460(32); /*0x42530e*/
      v127 = 18; /*0x425312*/
      v128 = 31; /*0x42531a*/
      strcpy((char *)v126, "Level Leaderboards"); /*0x425329*/
      v104 = (__int64 *)InfoAlertButton_create(&v126, &v123); /*0x425350*/
      (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v104); /*0x42536a*/
      v105 = *v104; /*0x42536d*/
      v106 = *(_QWORD *)(a1 + 552); /*0x425370*/
      cocos2d::CCPoint::CCPoint( /*0x4253ac*/
        (cocos2d::CCPoint *)&v116,
        (float)((float)(v113 * 0.5) + 220.0) - 5.0,
        (float)((float)(v114 * 0.5) + 145.0) - 5.0);
      cocos2d::CCNode::convertToNodeSpace(v106, &v112, v107); /*0x4253bd*/
      (*(void (__fastcall **)(__int64 *, __int64))(v105 + 184))(v104, v108); /*0x4253c9*/
    }
    v109 = qword_905FD0; /*0x4253cf*/
    if ( !qword_905FD0 ) /*0x4253d9*/
    {
      *(_QWORD *)&v123 = operator new(0x6E8u); /*0x4253e5*/
      qword_905FD0 = sub_2723A0(v123); /*0x4253f2*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x425403*/
      v109 = qword_905FD0; /*0x425405*/
    }
    if ( *(_BYTE *)(v109 + 688) || *(_DWORD *)(a1 + 688) == 3 ) /*0x425421*/
    {
      LevelLeaderboard_loadScores(a1); /*0x42549c*/
    }
    else
    {
      sub_426840(a1, 0); /*0x425428*/
      v110 = a1 + 664; /*0x42542d*/
      v111 = *(_QWORD *)&qword_905FB0; /*0x425434*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x42543e*/
      {
        *(_QWORD *)&v123 = operator new(0x690u); /*0x42544a*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v123); /*0x425457*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x425468*/
        v111 = *(_QWORD *)&qword_905FB0; /*0x42546a*/
      }
      *(_QWORD *)(v111 + 1424) = v110; /*0x425471*/
      GameLevelManager_updateUserScore(v111); /*0x425478*/
    }
    sub_3C310(&Src); /*0x4254a6*/
    return 1; /*0x4254ab*/
  }
  return result; /*0x4254ad*/
}

// [6/12] Address: 0x425890
// Method: LevelLeaderboard::FLAlert_Clicked
// Hidden C++ exception states: #wind=1
__int64 __fastcall LevelLeaderboard_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  __int64 *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  __int128 v15; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+40h] [rbp-38h]
  __int64 v17; // [rsp+48h] [rbp-30h]
  __int128 v18; // [rsp+50h] [rbp-28h] BYREF
  __int64 v19; // [rsp+60h] [rbp-18h]
  __int64 v20; // [rsp+68h] [rbp-10h]

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x4258ac*/
  if ( (_DWORD)result == 991 && a3 ) /*0x4258bc*/
  {
    v6 = (_QWORD *)(a1 - 672); /*0x4258c2*/
    v7 = (_QWORD *)(*(_QWORD *)(a1 - 672 + 680) + 1520LL); /*0x4258d0*/
    v7[2] = 0; /*0x4258d8*/
    if ( v7[3] > 0xFu ) /*0x4258e1*/
      v7 = (_QWORD *)*v7; /*0x4258e3*/
    *(_BYTE *)v7 = 0; /*0x4258e6*/
    v8 = (_QWORD *)(v6[85] + 1552LL); /*0x4258f0*/
    v8[2] = 0; /*0x4258f6*/
    if ( v8[3] > 0xFu ) /*0x4258ff*/
      v8 = (_QWORD *)*v8; /*0x425901*/
    *(_BYTE *)v8 = 0; /*0x425904*/
    v9 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*v6 + 504LL))(a1 - 672); /*0x425913*/
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v6 + 992LL))(v6, 0); /*0x425925*/
    v10 = *v6; /*0x425928*/
    LOBYTE(v10) = 1; /*0x425932*/
    result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v6 + 520LL))(v6, v10); /*0x425937*/
    if ( v9 ) /*0x42593d*/
    {
      v18 = 0; /*0x425953*/
      v19 = 0; /*0x425958*/
      v20 = 15; /*0x42595d*/
      LOBYTE(v18) = 0; /*0x425966*/
      v15 = 0; /*0x42596b*/
      *(_QWORD *)&v15 = sub_3C460(32); /*0x425984*/
      v16 = 19; /*0x425989*/
      v17 = 31; /*0x425992*/
      strcpy((char *)v15, "Local scores reset."); /*0x4259a2*/
      v11 = *v9; /*0x4259be*/
      v14 = sub_3A4CA0(&v15, v12, v13, 150, &v18); /*0x4259e6*/
      return (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v11 + 456))(v9, v14, 100); /*0x4259f7*/
    }
  }
  return result; /*0x4259fd*/
}

// [7/12] Address: 0x425a10
// Method: LevelLeaderboard::getLocalScores
// Hidden C++ exception states: #wind=5
cocos2d::CCArray *__fastcall LevelLeaderboard_getLocalScores(__int64 a1)
{
  __int64 v2; // rcx
  cocos2d::CCArray *v3; // r15
  __int64 v4; // rdx
  __int64 v5; // rdx
  char *v6; // rdi
  char *v7; // r12
  int v8; // r14d
  int v9; // ebx
  cocos2d::CCObject *v10; // rsi
  _DWORD *v11; // rdx
  int v12; // eax
  char *v13; // rax
  void *Block[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v16; // [rsp+40h] [rbp-48h]
  void *v17; // [rsp+98h] [rbp+10h]

  v3 = (cocos2d::CCArray *)cocos2d::CCArray::create(a1); /*0x425a2d*/
  v4 = *(_QWORD *)(a1 + 680); /*0x425a30*/
  if ( *(_DWORD *)(a1 + 692) == 1 ) /*0x425a3e*/
    v5 = v4 + 1552; /*0x425a40*/
  else
    v5 = v4 + 1520; /*0x425a49*/
  if ( *(_QWORD *)(v5 + 16) ) /*0x425a50*/
  {
    *(_OWORD *)Block = 0; /*0x425a5e*/
    v16 = 0; /*0x425a67*/
    SetupObjectControlPopup_init(v2, v5, Block); /*0x425a71*/
    v6 = (char *)Block[0]; /*0x425a76*/
    v7 = (char *)Block[1]; /*0x425a7b*/
    if ( Block[0] != Block[1] ) /*0x425a83*/
    {
      do /*0x425b5c*/
      {
        v8 = *(_DWORD *)v6; /*0x425a90*/
        v9 = *(_DWORD *)(a1 + 692); /*0x425a93*/
        v10 = (cocos2d::CCObject *)operator new(0x48u); /*0x425aa3*/
        cocos2d::CCObject::CCObject(v10); /*0x425ab1*/
        *(_QWORD *)v10 = &GJLocalScore::`vftable'; /*0x425ab7*/
        *((_BYTE *)v10 + 64) = 0; /*0x425aba*/
        *((_DWORD *)v10 + 14) = v8; /*0x425abe*/
        *((_DWORD *)v10 + 15) = v9; /*0x425ac2*/
        cocos2d::CCObject::autorelease(v10); /*0x425ac8*/
        v11 = (_DWORD *)qword_905FD0; /*0x425ace*/
        if ( !qword_905FD0 ) /*0x425ad8*/
        {
          v17 = operator new(0x6E8u); /*0x425ae4*/
          qword_905FD0 = sub_2723A0(v17); /*0x425af5*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x425b06*/
          v11 = (_DWORD *)qword_905FD0; /*0x425b08*/
        }
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 680) + 1224LL) == v11[434] /*0x425b43*/
          && ((v12 = *(_DWORD *)(a1 + 692)) == 0 && v8 == v11[435] || v12 == 1 && v8 == v11[436]) )
        {
          *((_BYTE *)v10 + 64) = 1; /*0x425b45*/
        }
        cocos2d::CCArray::addObject(v3, v10); /*0x425b4f*/
        v6 += 4; /*0x425b55*/
      }
      while ( v6 != v7 ); /*0x425b5c*/
      v6 = (char *)Block[0]; /*0x425b62*/
    }
    if ( v6 ) /*0x425b6d*/
    {
      v13 = v6; /*0x425b7b*/
      if ( ((v16 - (_QWORD)v6) & 0xFFFFFFFFFFFFFFFCuLL) >= 0x1000 ) /*0x425b85*/
      {
        v6 = (char *)*((_QWORD *)v6 - 1); /*0x425b8b*/
        if ( (unsigned __int64)(v13 - v6 - 8) > 0x1F ) /*0x425b9a*/
          invoke_watson(0, 0, 0, 0, 0); /*0x425bab*/
      }
      j_j_free(v6); /*0x425bb5*/
    }
  }
  return v3; /*0x425bbd*/
}

// [8/12] Address: 0x425be0
// Method: LevelLeaderboard::loadScores
// Hidden C++ exception states: #wind=6
void __fastcall LevelLeaderboard_loadScores(__int64 a1)
{
  int v2; // ebx
  cocos2d::CCString *v3; // rax
  const char *CString; // rax
  __int64 v5; // r8
  void **v6; // rsi
  __int64 v7; // rbx
  cocos2d::CCArray *LocalScores; // rax
  void **v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  void **v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  void *v16; // rcx
  void *v17; // [rsp+30h] [rbp-38h]
  void *v18; // [rsp+30h] [rbp-38h]
  void *v19; // [rsp+30h] [rbp-38h]
  void *v20; // [rsp+30h] [rbp-38h]
  void *Block[2]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v22; // [rsp+48h] [rbp-20h]
  unsigned __int64 v23; // [rsp+50h] [rbp-18h]

  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 680) + 328LL) - *(_DWORD *)(*(_QWORD *)(a1 + 680) + 332LL); /*0x425c13*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x425c21*/
  {
    v17 = operator new(0x690u); /*0x425c2d*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v17); /*0x425c3b*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x425c4c*/
  }
  v3 = cocos2d::CCString::createWithFormat("ll_%i_%i_%i", v2, *(_DWORD *)(a1 + 688), *(_DWORD *)(a1 + 692)); /*0x425c66*/
  CString = cocos2d::CCString::getCString(v3); /*0x425c6f*/
  *(_OWORD *)Block = 0; /*0x425c78*/
  v22 = 0; /*0x425c7d*/
  v23 = 0; /*0x425c86*/
  v5 = -1; /*0x425c8f*/
  do /*0x425c99*/
    ++v5; /*0x425c96*/
  while ( CString[v5] ); /*0x425c99*/
  sub_3C230(Block); /*0x425ca8*/
  if ( *(_DWORD *)(a1 + 688) == 3 ) /*0x425cb5*/
  {
    v6 = Block; /*0x425cb7*/
    if ( v23 > 0xF ) /*0x425cc2*/
      v6 = (void **)Block[0]; /*0x425cc2*/
    v7 = *(_QWORD *)(a1 + 664); /*0x425cc8*/
    LocalScores = LevelLeaderboard_getLocalScores(a1); /*0x425cd2*/
    (*(void (__fastcall **)(__int64, cocos2d::CCArray *, void **))(v7 + 16))(a1 + 664, LocalScores, v6); /*0x425ce4*/
  }
  else
  {
    v9 = Block; /*0x425cec*/
    if ( v23 > 0xF ) /*0x425cf7*/
      v9 = (void **)Block[0]; /*0x425cf7*/
    v10 = *(_QWORD *)&qword_905FB0; /*0x425cfd*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x425d07*/
    {
      v18 = operator new(0x690u); /*0x425d13*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v18); /*0x425d21*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x425d32*/
      v10 = *(_QWORD *)&qword_905FB0; /*0x425d35*/
    }
    v11 = sub_21E690(v10, v9); /*0x425d3f*/
    if ( v11 ) /*0x425d47*/
    {
      v12 = Block; /*0x425d49*/
      if ( v23 > 0xF ) /*0x425d54*/
        v12 = (void **)Block[0]; /*0x425d54*/
      (*(void (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)(a1 + 664) + 16LL))(a1 + 664, v11, v12); /*0x425d6b*/
    }
    else
    {
      v13 = *(_QWORD *)&qword_905FB0; /*0x425d73*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x425d7d*/
      {
        v19 = operator new(0x690u); /*0x425d89*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v19); /*0x425d97*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x425da8*/
        v13 = *(_QWORD *)&qword_905FB0; /*0x425daa*/
      }
      GameLevelManager_makeTimeStamp(v13, (__int64)"upd_ll"); /*0x425db8*/
      LOBYTE(v14) = 1; /*0x425dc7*/
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 712) + 336LL))(*(_QWORD *)(a1 + 712), v14); /*0x425dc9*/
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 720) + 336LL))(*(_QWORD *)(a1 + 720), 0); /*0x425ddb*/
      sub_426840(a1, 0); /*0x425de6*/
      v15 = *(_QWORD *)&qword_905FB0; /*0x425df2*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x425dfc*/
      {
        v20 = operator new(0x690u); /*0x425e08*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v20); /*0x425e16*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x425e27*/
        v15 = *(_QWORD *)&qword_905FB0; /*0x425e29*/
      }
      *(_QWORD *)(v15 + 1424) = a1 + 664; /*0x425e30*/
      sub_2354D0(v15, *(_QWORD *)(a1 + 680), *(unsigned int *)(a1 + 688), *(unsigned int *)(a1 + 692)); /*0x425e4c*/
    }
  }
  if ( v23 > 0xF ) /*0x425e5b*/
  {
    v16 = Block[0]; /*0x425e60*/
    if ( v23 + 1 >= 0x1000 ) /*0x425e6f*/
    {
      v16 = (void *)*((_QWORD *)Block[0] - 1); /*0x425e75*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v16 - 8) > 0x1F ) /*0x425e84*/
        invoke_watson(0, 0, 0, 0, 0); /*0x425e99*/
    }
    j_j_free(v16); /*0x425ea0*/
  }
}

// [9/12] Address: 0x425ed0
// Method: LevelLeaderboard::updateUserScoreFinished
void __fastcall LevelLeaderboard_updateUserScoreFinished(__int64 a1)
{
  LevelLeaderboard_loadScores(a1 - 664); /*0x425ed7*/
}

// [10/12] Address: 0x425ee0
// Method: LevelLeaderboard::updateUserScoreFailed
__int64 __fastcall LevelLeaderboard_updateUserScoreFailed(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 48) + 336LL))(*(_QWORD *)(a1 + 48), 0);
}

// [11/12] Address: 0x426690
// Method: LevelLeaderboard::loadLeaderboardFinished
__int64 __fastcall LevelLeaderboard_loadLeaderboardFinished(__int64 a1, cocos2d::CCObject *a2, __int64 a3)
{
  __int64 result; // rax
  cocos2d::CCObject *v6; // rcx
  __int64 v7; // rdx

  result = sub_426460(a1 - 664, a3); /*0x4266af*/
  if ( (_BYTE)result ) /*0x4266b6*/
  {
    v6 = *(cocos2d::CCObject **)(a1 + 32); /*0x4266b8*/
    if ( v6 ) /*0x4266bf*/
      cocos2d::CCObject::release(v6); /*0x4266c1*/
    *(_QWORD *)(a1 + 32) = a2; /*0x4266ca*/
    cocos2d::CCObject::retain(a2); /*0x4266ce*/
    sub_426840(a1 - 664, *(_QWORD *)(a1 + 32)); /*0x4266df*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 48) + 336LL))(*(_QWORD *)(a1 + 48), 0); /*0x4266ed*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 56) + 336LL))(*(_QWORD *)(a1 + 56), 0); /*0x4266fc*/
    LOBYTE(v7) = *(_DWORD *)(a1 + 24) != 3; /*0x42670a*/
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 336LL))(*(_QWORD *)(a1 + 64), v7); /*0x426710*/
  }
  return result; /*0x426716*/
}

// [12/12] Address: 0x426730
// Method: LevelLeaderboard::loadLeaderboardFailed
__int64 __fastcall LevelLeaderboard_loadLeaderboardFailed(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+38h] [rbp-10h]

  result = sub_426460(a1 - 664, a2); /*0x426740*/
  if ( (_BYTE)result ) /*0x426747*/
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 48) + 336LL))(*(_QWORD *)(a1 + 48), 0); /*0x426756*/
    v5 = GJAccountManager_sharedState(v4); /*0x42675c*/
    if ( *(_DWORD *)(v5 + 360) - *(_DWORD *)(v5 + 364) <= 0 ) /*0x426772*/
    {
      v8 = 0; /*0x426787*/
      *(_QWORD *)&v8 = sub_3C460(80); /*0x4267a2*/
      v9 = 71; /*0x4267aa*/
      v10 = 79; /*0x4267b3*/
      strcpy((char *)v8, "Create an <cg>account</c> to\ncompare scores\nwith <cl>other players</c>!"); /*0x4267bc*/
      TextArea_setString(*(_QWORD *)(a1 + 56), &v8); /*0x426806*/
      LOBYTE(v7) = 1; /*0x42680f*/
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 56) + 336LL))(*(_QWORD *)(a1 + 56), v7); /*0x426814*/
    }
    LOBYTE(v6) = *(_DWORD *)(a1 + 24) != 3; /*0x426822*/
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 336LL))(*(_QWORD *)(a1 + 64), v6); /*0x42682d*/
  }
  return result; /*0x426834*/
}
