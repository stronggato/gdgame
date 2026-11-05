#include <Geode/binding/CommunityCreditsPage.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/2] Address: 0x12cd10
// Method: CommunityCreditsPage::show
__int64 __fastcall CommunityCreditsPage_show(__int64 a1)
{
  float v3; // xmm6_4
  const struct cocos2d::CCPoint *v4; // rax
  __int64 *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  struct cocos2d::CCActionInterval *v8; // rax
  struct cocos2d::CCAction *v9; // rax
  __int64 v10; // rcx
  cocos2d::CCScene *v11; // rbx
  int v12; // eax
  struct cocos2d::CCAction *v13; // rax
  __int64 v14; // rdx
  float v15; // [rsp+50h] [rbp+8h] BYREF
  char v16; // [rsp+58h] [rbp+10h] BYREF

  if ( *(_BYTE *)(a1 + 596) ) /*0x12cd16*/
    return FLAlertLayer_show(a1); /*0x12cd22*/
  v3 = (float)(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 408) + 32LL))(a1 + 408); /*0x12cd63*/
  v4 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 584) + 200LL))(*(_QWORD *)(a1 + 584)); /*0x12cd66*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v15, v4); /*0x12cd74*/
  v5 = *(__int64 **)(a1 + 584); /*0x12cd7a*/
  v6 = *v5; /*0x12cd94*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v16, v15, 160.0); /*0x12cd97*/
  (*(void (__fastcall **)(__int64 *, __int64))(v6 + 184))(v5, v7); /*0x12cda3*/
  v8 = cocos2d::CCMoveTo::create(0.5, (const struct cocos2d::CCPoint *)&v15); /*0x12cdb6*/
  v9 = cocos2d::CCEaseElasticOut::create(v8, 0.60000002); /*0x12cdc7*/
  cocos2d::CCNode::runAction(*(cocos2d::CCNode **)(a1 + 584), v9); /*0x12cdd7*/
  v11 = *(cocos2d::CCScene **)(cocos2d::CCDirector::sharedDirector(v10) + 272); /*0x12cde8*/
  if ( *(_QWORD *)(a1 + 568) ) /*0x12cdef*/
  {
    v11 = *(cocos2d::CCScene **)(a1 + 568); /*0x12cdfb*/
  }
  else
  {
    if ( cocos2d::CCScene::getHighestChildZ(v11) + 1 >= 105 ) /*0x12ce0e*/
      v12 = cocos2d::CCScene::getHighestChildZ(v11) + 1; /*0x12ce20*/
    else
      v12 = 105; /*0x12ce10*/
    *(_DWORD *)(a1 + 592) = v12; /*0x12ce22*/
  }
  if ( !*(_DWORD *)(a1 + 592) ) /*0x12ce28*/
    *(_DWORD *)(a1 + 592) = 105; /*0x12ce34*/
  (*(void (__fastcall **)(cocos2d::CCScene *, __int64))(*(_QWORD *)v11 + 456LL))(v11, a1); /*0x12ce4d*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 408) + 40LL))(a1 + 408, 0); /*0x12ce63*/
  v13 = cocos2d::CCFadeTo::create(0.14, (int)v3); /*0x12ce72*/
  cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v13); /*0x12ce7e*/
  LOBYTE(v14) = 1; /*0x12ce87*/
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 336LL))(a1, v14); /*0x12cd27*/
}

// Address: 0x12aac0
// Method: CommunityCreditsPage::init
// Hidden C++ exception states: #wind=6
bool __fastcall CommunityCreditsPage_init(__int64 a1)
{
  bool result; // al
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // r13d
  __int64 v11; // rbx
  __int64 v12; // rax
  int i; // esi
  cocos2d::CCSprite *v14; // rdi
  float v15; // xmm6_4
  float v16; // xmm8_4
  __int64 v17; // rbx
  __int64 v18; // rax
  struct cocos2d::CCLabelBMFont *v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rax
  cocos2d::CCObject *v22; // rax
  __int64 v23; // rcx
  cocos2d::CCArray *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // r8
  char *v27; // rax
  __int64 v28; // rax
  __int64 v29; // r8
  char *v30; // rax
  __int64 v31; // rax
  __int64 v32; // r8
  char *v33; // rax
  __int64 v34; // rax
  __int64 v35; // r8
  char *v36; // rax
  __int64 v37; // rax
  __int64 v38; // r8
  char *v39; // rax
  __int64 v40; // rax
  __int64 v41; // r8
  char *v42; // rax
  __int64 v43; // rax
  __int64 v44; // r8
  char *v45; // rax
  __int64 v46; // rax
  __int64 v47; // r8
  char *v48; // rax
  __int64 v49; // rax
  __int64 v50; // r8
  char *v51; // rax
  __int64 v52; // rax
  __int64 v53; // r8
  char *v54; // rax
  __int64 v55; // rax
  __int64 v56; // r8
  char *v57; // rax
  __int64 v58; // rax
  __int64 v59; // r8
  char *v60; // rax
  __int64 v61; // rax
  __int64 v62; // r8
  char *v63; // rax
  __int64 v64; // rax
  __int64 v65; // r8
  char *v66; // rax
  __int64 v67; // rax
  __int64 v68; // r8
  char *v69; // rax
  __int64 v70; // rax
  __int64 v71; // r8
  char *v72; // rax
  __int64 v73; // rax
  __int64 v74; // r8
  char *v75; // rax
  __int64 v76; // rax
  __int64 v77; // r8
  char *v78; // rax
  __int64 v79; // rax
  __int64 v80; // r8
  char *v81; // rax
  __int64 v82; // rax
  __int64 v83; // r8
  char *v84; // rax
  __int64 v85; // rax
  __int64 v86; // r8
  char *v87; // rax
  __int64 v88; // rax
  __int64 v89; // r8
  char *v90; // rax
  __int64 v91; // rax
  __int64 v92; // r8
  char *v93; // rax
  __int64 v94; // rax
  __int64 v95; // r8
  char *v96; // rax
  __int64 v97; // r8
  char *v98; // rax
  __int64 v99; // r8
  char *v100; // rax
  __int64 v101; // r8
  char *v102; // rax
  __int64 v103; // r8
  char *v104; // rax
  __int64 v105; // r8
  char *v106; // rax
  __int64 v107; // r8
  char *v108; // rax
  __int64 v109; // r8
  char *v110; // rax
  __int64 v111; // r8
  char *v112; // rax
  __int64 v113; // r8
  char *v114; // rax
  __int64 v115; // r8
  char *v116; // rax
  __int64 v117; // r8
  char *v118; // rax
  __int64 v119; // r8
  char *v120; // rax
  __int64 v121; // r8
  char *v122; // rax
  __int64 v123; // r8
  char *v124; // rax
  __int64 v125; // r8
  char *v126; // rax
  __int64 v127; // r8
  char *v128; // rax
  __int64 v129; // r8
  char *v130; // rax
  __int64 v131; // r8
  char *v132; // rax
  __int64 v133; // r8
  char *v134; // rax
  __int64 v135; // r8
  char *v136; // rax
  __int64 v137; // r8
  char *v138; // rax
  __int64 v139; // r8
  char *v140; // rax
  __int64 v141; // r8
  char *v142; // rax
  __int64 v143; // r8
  char *v144; // rax
  __int64 v145; // r8
  char *v146; // rax
  __int64 v147; // r8
  char *v148; // rax
  __int64 v149; // r8
  char *v150; // rax
  __int64 v151; // r8
  char *v152; // rax
  __int64 v153; // r8
  char *v154; // rax
  __int64 v155; // r8
  char *v156; // rax
  __int64 v157; // r8
  char *v158; // rax
  __int64 v159; // r8
  char *v160; // rax
  __int64 v161; // r8
  char *v162; // rax
  __int64 v163; // r8
  char *v164; // rax
  __int64 v165; // r8
  char *v166; // rax
  __int64 v167; // r8
  char *v168; // rax
  __int64 v169; // r8
  char *v170; // rax
  __int64 v171; // r8
  char *v172; // rax
  __int64 v173; // r8
  char *v174; // rax
  __int64 v175; // r8
  char *v176; // rax
  __int64 v177; // r8
  char *v178; // rax
  __int64 v179; // r8
  char *v180; // rax
  __int64 v181; // r8
  char *v182; // rax
  __int64 v183; // r8
  char *v184; // rax
  __int64 v185; // r8
  char *v186; // rax
  __int64 v187; // r8
  char *v188; // rax
  __int64 v189; // r8
  char *v190; // rax
  __int64 v191; // rax
  __int64 v192; // r8
  char *v193; // rax
  signed int v194; // r15d
  __int64 v195; // rcx
  struct cocos2d::CCObject *v196; // rdi
  int v197; // ebx
  __int64 v198; // rcx
  struct cocos2d::CCObject *v199; // r12
  float v200; // xmm6_4
  float v201; // xmm6_4
  int v202; // ebx
  int v203; // edi
  char *v204; // rsi
  __int64 v205; // rax
  const char *v206; // rcx
  cocos2d::CCLabelBMFont *v207; // rdi
  __int64 v208; // rax
  __int64 v209; // rbx
  __int64 v210; // rax
  struct cocos2d::CCObject *v211; // r15
  struct cocos2d::CCObject *v212; // rdi
  __int64 v213; // rbx
  __int64 v214; // rax
  int v215; // edi
  int v216; // r12d
  cocos2d::CCString *v217; // rax
  const char *CString; // rax
  struct cocos2d::CCObject *v219; // rbx
  __int64 v220; // rax
  const char *v221; // rcx
  cocos2d::CCLabelBMFont *v222; // rsi
  __int64 v223; // rax
  struct cocos2d::CCObject *v224; // rdi
  __int64 v225; // rax
  __int64 v226; // rbx
  __int64 v227; // rax
  unsigned int v228; // edi
  cocos2d::CCObject *v229; // rbx
  struct cocos2d::CCMenu *v230; // rdi
  __int64 v231; // rbx
  __int64 v232; // rax
  __int64 v233; // rdx
  __int64 v234; // rcx
  __int64 v235; // r8
  __int64 v236; // r9
  __int64 v237; // rsi
  float v238; // xmm6_4
  unsigned int v239; // edi
  __int64 v240; // rax
  cocos2d::CCObject *v241; // rbx
  __int64 v242; // rdi
  __int64 v243; // rcx
  cocos2d::CCDirector *v244; // rax
  float v245; // xmm0_4
  __int64 v246; // rbx
  __int64 v247; // rax
  __int64 v248; // rax
  cocos2d::CCSprite *v249; // rdi
  __int64 v250; // rax
  cocos2d::CCObject *v251; // rbx
  __int64 v252; // rdi
  __int64 v253; // rcx
  cocos2d::CCDirector *v254; // rax
  float v255; // xmm0_4
  __int64 v256; // rbx
  __int64 v257; // rax
  __int64 v258; // rax
  _BYTE v259[16]; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v260; // [rsp+60h] [rbp-A0h] BYREF
  char v261; // [rsp+62h] [rbp-9Eh]
  float v262; // [rsp+70h] [rbp-90h] BYREF
  float v263; // [rsp+74h] [rbp-8Ch]
  __int16 v264; // [rsp+80h] [rbp-80h] BYREF
  char v265; // [rsp+82h] [rbp-7Eh]
  __int16 v266; // [rsp+90h] [rbp-70h]
  __int16 v267; // [rsp+A0h] [rbp-60h]
  _DWORD v268[2]; // [rsp+B0h] [rbp-50h] BYREF
  cocos2d::CCArray *v269; // [rsp+B8h] [rbp-48h] BYREF
  char v270[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v271[2]; // [rsp+C8h] [rbp-38h] BYREF
  struct cocos2d::CCObject *v272; // [rsp+D8h] [rbp-28h] BYREF
  char v273[8]; // [rsp+E0h] [rbp-20h] BYREF
  char v274[8]; // [rsp+E8h] [rbp-18h] BYREF
  char v275[8]; // [rsp+F0h] [rbp-10h] BYREF
  char *v276; // [rsp+F8h] [rbp-8h] BYREF
  char v277[8]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v278; // [rsp+108h] [rbp+8h] BYREF
  __int64 v279; // [rsp+118h] [rbp+18h]
  unsigned __int64 v280; // [rsp+120h] [rbp+20h]

  result = FLAlertLayer_init(a1, 150);
  if ( result )
  {
    v4 = cocos2d::CCDirector::sharedDirector(v3);
    cocos2d::CCDirector::getWinSize(v4, &v262);
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v271, 0.0, 0.0, 80.0, 80.0);
    v6 = (__int64 *)cocos2d::extension::CCScale9Sprite::create("GJ_square01.png", v5);
    LOBYTE(v7) = -1;
    (*(void (__fastcall **)(__int64 *, __int64))(v6[40] + 40))(v6 + 40, v7);
    v8 = *v6;
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v269, 420.0, 280.0);
    (*(void (__fastcall **)(__int64 *, __int64))(v8 + 312))(v6, v9);
    v10 = -1;
    (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
      *(_QWORD *)(a1 + 584),
      v6,
      0xFFFFFFFFLL);
    v11 = *v6;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v269, v262 * 0.5, v263 * 0.5);
    (*(void (__fastcall **)(__int64 *, __int64))(v11 + 184))(v6, v12);
    for ( i = 0; i < 4; ++i )
    {
      v14 = cocos2d::CCSprite::createWithSpriteFrameName("dailyLevelCorner_001.png");
      (*(void (__fastcall **)(_QWORD, cocos2d::CCSprite *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
        *(_QWORD *)(a1 + 584),
        v14,
        8);
      v15 = 185.0;
      v16 = 115.0;
      if ( i )
      {
        switch ( i )
        {
          case 1:
            v15 = -185.0;
            cocos2d::CCSprite::setFlipY(v14, 1);
            break;
          case 2:
            cocos2d::CCSprite::setFlipX(v14, 1);
            cocos2d::CCSprite::setFlipY(v14, 1);
            break;
          case 3:
            v16 = -115.0;
            cocos2d::CCSprite::setFlipX(v14, 1);
            break;
        }
      }
      else
      {
        v15 = -185.0;
        v16 = -115.0;
      }
      v17 = *(_QWORD *)v14;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v269, (float)(v262 * 0.5) + v15, (float)(v263 * 0.5) + v16);
      (*(void (__fastcall **)(cocos2d::CCSprite *, __int64))(v17 + 184))(v14, v18);
    }
    v19 = cocos2d::CCLabelBMFont::create("Community Credits", (const char *)&qword_6FFF68);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v19 + 160LL))(v19);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))(
      *(_QWORD *)(a1 + 584),
      v19);
    v20 = *(_QWORD *)v19;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v269, v262 * 0.5, (float)((float)(v263 * 0.5) + 140.0) - 20.0);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v20 + 184))(v19, v21);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v277, v262 * 0.5, (float)(v263 * 0.5) + 80.0);
    v22 = (cocos2d::CCObject *)cocos2d::CCDictionary::create();
    *(_QWORD *)(a1 + 664) = v22;
    cocos2d::CCObject::retain(v22);
    v24 = (cocos2d::CCArray *)cocos2d::CCArray::create(v23);
    v269 = v24;
    v25 = sub_3C1F0(&v278, "Aleck08");
    v27 = CommunityCreditNode_create(1, 117, v26, v25);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v27);
    v28 = sub_3C1F0(&v278, "Aruxd");
    v30 = CommunityCreditNode_create(1, 118, v29, v28);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v30);
    v31 = sub_3C1F0(&v278, "RadleyMCT");
    v33 = CommunityCreditNode_create(1, 119, v32, v31);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v33);
    v34 = sub_3C1F0(&v278, "Djoxy");
    v36 = CommunityCreditNode_create(1, 120, v35, v34);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v36);
    v37 = sub_3C1F0(&v278, "ghostpower");
    v39 = CommunityCreditNode_create(1, 121, v38, v37);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v39);
    v40 = sub_3C1F0(&v278, "hallymallybubu");
    v42 = CommunityCreditNode_create(1, 122, v41, v40);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v42);
    v43 = sub_3C1F0(&v278, "Ic3Fir3");
    v45 = CommunityCreditNode_create(1, 123, v44, v43);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v45);
    v46 = sub_3C1F0(&v278, "ItsJavi2504x");
    v48 = CommunityCreditNode_create(1, 124, v47, v46);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v48);
    v49 = sub_3C1F0(&v278, "LaZye");
    v51 = CommunityCreditNode_create(1, 125, v50, v49);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v51);
    v52 = sub_3C1F0(&v278, "Last67706");
    v54 = CommunityCreditNode_create(1, 126, v53, v52);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v54);
    v55 = sub_3C1F0(&v278, "luisilloRS");
    v57 = CommunityCreditNode_create(1, 127, v56, v55);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v57);
    v58 = sub_3C1F0(&v278, "luisilloRS");
    v60 = CommunityCreditNode_create(1, 128, v59, v58);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v60);
    v61 = sub_3C1F0(&v278, "NeXuSGamer");
    v63 = CommunityCreditNode_create(1, 129, v62, v61);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v63);
    v64 = sub_3C1F0(&v278, "RobBuck");
    v66 = CommunityCreditNode_create(1, 130, v65, v64);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v66);
    v67 = sub_3C1F0(&v278, "RobBuck");
    v69 = CommunityCreditNode_create(1, 131, v68, v67);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v69);
    v70 = sub_3C1F0(&v278, "RobBuck");
    v72 = CommunityCreditNode_create(1, 132, v71, v70);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v72);
    v73 = sub_3C1F0(&v278, "SenpaiShika");
    v75 = CommunityCreditNode_create(1, 133, v74, v73);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v75);
    v76 = sub_3C1F0(&v278, "SenpaiShika");
    v78 = CommunityCreditNode_create(1, 134, v77, v76);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v78);
    v79 = sub_3C1F0(&v278, "Terron");
    v81 = CommunityCreditNode_create(1, 135, v80, v79);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v81);
    v82 = sub_3C1F0(&v278, "Cygnus");
    v84 = CommunityCreditNode_create(5, 30, v83, v82);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v84);
    v85 = sub_3C1F0(&v278, "slushys");
    v87 = CommunityCreditNode_create(5, 31, v86, v85);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v87);
    v88 = sub_3C1F0(&v278, "Deraklich");
    v90 = CommunityCreditNode_create(5, 32, v89, v88);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v90);
    v91 = sub_3C1F0(&v278, "DracTheDragon");
    v93 = CommunityCreditNode_create(5, 33, v92, v91);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v93);
    v94 = sub_3C1F0(&v278, "DaRealDazzer");
    v96 = CommunityCreditNode_create(5, 34, v95, v94);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v96);
    v279 = 12;
    v280 = 15;
    strcpy((char *)&v278, "Mariolego320");
    BYTE13(v278) = 0;
    HIWORD(v278) = 0;
    v98 = CommunityCreditNode_create(5, 35, v97, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v98);
    v279 = 12;
    v280 = 15;
    strcpy((char *)&v278, "Mariolego320");
    BYTE13(v278) = 0;
    HIWORD(v278) = 0;
    v100 = CommunityCreditNode_create(5, 36, v99, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v100);
    v279 = 7;
    v280 = 15;
    v278 = 0x79746E61766552uLL;
    v102 = CommunityCreditNode_create(5, 37, v101, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v102);
    *((_QWORD *)&v278 + 1) = 51;
    v279 = 9;
    v280 = 15;
    *(_QWORD *)&v278 = 0x32366F6863656863LL;
    v104 = CommunityCreditNode_create(5, 38, v103, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v104);
    HIWORD(v278) = 0;
    v279 = 7;
    v280 = 15;
    qmemcpy(&v278, "Aleck0", 6);
    *(_QWORD *)((char *)&v278 + 6) = (unsigned __int8)aAleck08[6];
    v106 = CommunityCreditNode_create(4, 36, v105, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v106);
    v279 = 7;
    v280 = 15;
    v278 = 0x47502078656C41uLL;
    v108 = CommunityCreditNode_create(4, 37, v107, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v108);
    v279 = 7;
    v280 = 15;
    v278 = 0x78656C61696445uLL;
    v110 = CommunityCreditNode_create(4, 38, v109, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v110);
    *((_QWORD *)&v278 + 1) = 116;
    v279 = 9;
    v280 = 15;
    *(_QWORD *)&v278 = 0x65736E7553737449LL;
    v112 = CommunityCreditNode_create(4, 39, v111, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v112);
    v279 = 10;
    v280 = 15;
    *(_QWORD *)&v278 = *(_QWORD *)"luisilloRS";
    *((_QWORD *)&v278 + 1) = *(unsigned __int16 *)"RS";
    BYTE10(v278) = 0;
    v114 = CommunityCreditNode_create(4, 40, v113, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v114);
    v279 = 10;
    v280 = 15;
    *(_QWORD *)&v278 = *(_QWORD *)"luisilloRS";
    *((_QWORD *)&v278 + 1) = *(unsigned __int16 *)"RS";
    BYTE10(v278) = 0;
    v116 = CommunityCreditNode_create(4, 41, v115, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v116);
    v279 = 10;
    v280 = 15;
    *(_QWORD *)&v278 = *(_QWORD *)"NeXuSGamer";
    *((_QWORD *)&v278 + 1) = *(unsigned __int16 *)"er";
    BYTE10(v278) = 0;
    v118 = CommunityCreditNode_create(4, 42, v117, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v118);
    v278 = 0;
    v279 = 6;
    v280 = 15;
    strcpy((char *)&v278, "Plazda");
    v120 = CommunityCreditNode_create(4, 43, v119, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v120);
    v279 = 8;
    v280 = 15;
    v278 = 0x44476B6F6E676152uLL;
    v122 = CommunityCreditNode_create(4, 44, v121, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v122);
    v279 = 13;
    v280 = 15;
    strcpy((char *)&v278, "TheRailgunner");
    HIWORD(v278) = 0;
    v124 = CommunityCreditNode_create(4, 45, v123, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v124);
    HIWORD(v278) = 0;
    v279 = 7;
    v280 = 15;
    qmemcpy(&v278, "RobBuc", 6);
    *(_QWORD *)((char *)&v278 + 6) = (unsigned __int8)aRobbuck[6];
    v126 = CommunityCreditNode_create(4, 46, v125, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v126);
    v279 = 8;
    v280 = 15;
    v278 = 0x78566863726F6353uLL;
    v128 = CommunityCreditNode_create(4, 47, v127, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v128);
    *((_QWORD *)&v278 + 1) = 27745;
    v279 = 10;
    v280 = 15;
    *(_QWORD *)&v278 = 0x74656D7375726956LL;
    v130 = CommunityCreditNode_create(4, 48, v129, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v130);
    v279 = 11;
    v280 = 15;
    *(_QWORD *)&v278 = 0x6C69537265666144LL;
    *((_QWORD *)&v278 + 1) = 7497078;
    v132 = CommunityCreditNode_create(6, 29, v131, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v132);
    v279 = 11;
    v280 = 15;
    *(_QWORD *)&v278 = 0x76696172756D6153LL;
    *((_QWORD *)&v278 + 1) = 3354985;
    v134 = CommunityCreditNode_create(6, 30, v133, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v134);
    v278 = 0;
    v279 = 4;
    v280 = 15;
    strcpy((char *)&v278, "haoN");
    v136 = CommunityCreditNode_create(6, 31, v135, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v136);
    v279 = 10;
    v280 = 15;
    *(_QWORD *)&v278 = *(_QWORD *)"luisilloRS";
    *((_QWORD *)&v278 + 1) = *(unsigned __int16 *)"RS";
    BYTE10(v278) = 0;
    v138 = CommunityCreditNode_create(6, 32, v137, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v138);
    v279 = 8;
    v280 = 15;
    v278 = 0x78566863726F6353uLL;
    v140 = CommunityCreditNode_create(6, 33, v139, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v140);
    v279 = 8;
    v280 = 15;
    v278 = 0x78566863726F6353uLL;
    v142 = CommunityCreditNode_create(6, 34, v141, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v142);
    v279 = 8;
    v280 = 15;
    v278 = 0x78566863726F6353uLL;
    v144 = CommunityCreditNode_create(6, 35, v143, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v144);
    *((_QWORD *)&v278 + 1) = 28789;
    v279 = 10;
    v280 = 15;
    *(_QWORD *)&v278 = 0x7279536563617053LL;
    v146 = CommunityCreditNode_create(7, 24, v145, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v146);
    v279 = 8;
    v280 = 15;
    v278 = 0x73756E6863617241uLL;
    v148 = CommunityCreditNode_create(7, 25, v147, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v148);
    *((_QWORD *)&v278 + 1) = 116;
    v279 = 9;
    v280 = 15;
    *(_QWORD *)&v278 = 0x73614D7265767943LL;
    v150 = CommunityCreditNode_create(7, 26, v149, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v150);
    v279 = 12;
    v280 = 15;
    strcpy((char *)&v278, "lordwerthers");
    BYTE13(v278) = 0;
    HIWORD(v278) = 0;
    v152 = CommunityCreditNode_create(7, 27, v151, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v152);
    v279 = 7;
    v280 = 15;
    v278 = 0x31333278746E4AuLL;
    v154 = CommunityCreditNode_create(7, 28, v153, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v154);
    HIWORD(v278) = 0;
    v279 = 7;
    v280 = 15;
    qmemcpy(&v278, "RobBuc", 6);
    *(_QWORD *)((char *)&v278 + 6) = (unsigned __int8)aRobbuck[6];
    v156 = CommunityCreditNode_create(7, 29, v155, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v156);
    v279 = 13;
    v280 = 15;
    strcpy((char *)&v278, "DarkFireDrago");
    HIWORD(v278) = 0;
    v158 = CommunityCreditNode_create(7, 30, v157, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v158);
    v279 = 8;
    v280 = 15;
    v278 = 0x78566863726F6353uLL;
    v160 = CommunityCreditNode_create(7, 31, v159, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v160);
    *((_QWORD *)&v278 + 1) = 103;
    v279 = 9;
    v280 = 15;
    *(_QWORD *)&v278 = 0x6E696D6147534E53LL;
    v162 = CommunityCreditNode_create(7, 32, v161, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v162);
    v278 = 0;
    v279 = 6;
    v280 = 15;
    strcpy((char *)&v278, "xVexis");
    v164 = CommunityCreditNode_create(7, 33, v163, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v164);
    v278 = 0;
    v279 = 6;
    v280 = 15;
    strcpy((char *)&v278, "Splons");
    v166 = CommunityCreditNode_create(8, 18, v165, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v166);
    v279 = 7;
    v280 = 15;
    v278 = 0x796B356F76336BuLL;
    v168 = CommunityCreditNode_create(8, 19, v167, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v168);
    v279 = 10;
    v280 = 15;
    *(_QWORD *)&v278 = *(_QWORD *)"luisilloRS";
    *((_QWORD *)&v278 + 1) = *(unsigned __int16 *)"RS";
    BYTE10(v278) = 0;
    v170 = CommunityCreditNode_create(8, 20, v169, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v170);
    v279 = 12;
    v280 = 15;
    strcpy((char *)&v278, "Mariolego320");
    BYTE13(v278) = 0;
    HIWORD(v278) = 0;
    v172 = CommunityCreditNode_create(8, 21, v171, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v172);
    v279 = 8;
    v280 = 15;
    v278 = 0x78566863726F6353uLL;
    v174 = CommunityCreditNode_create(8, 22, v173, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v174);
    v279 = 8;
    v280 = 15;
    v278 = 0x78566863726F6353uLL;
    v176 = CommunityCreditNode_create(8, 23, v175, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v176);
    v278 = 0;
    v279 = 6;
    v280 = 15;
    strcpy((char *)&v278, "Shacal");
    v178 = CommunityCreditNode_create(8, 24, v177, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v178);
    v278 = 0;
    v279 = 4;
    v280 = 15;
    strcpy((char *)&v278, "Tr1a");
    v180 = CommunityCreditNode_create(8, 25, v179, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v180);
    v279 = 11;
    v280 = 15;
    *(_QWORD *)&v278 = 0x6C69537265666144LL;
    *((_QWORD *)&v278 + 1) = 7497078;
    v182 = CommunityCreditNode_create(9, 11, v181, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v182);
    v279 = 7;
    v280 = 15;
    v278 = 0x78656C61696445uLL;
    v184 = CommunityCreditNode_create(9, 12, v183, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v184);
    v279 = 7;
    v280 = 15;
    v278 = 0x78656C61696445uLL;
    v186 = CommunityCreditNode_create(9, 13, v185, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v186);
    *((_QWORD *)&v278 + 1) = 99;
    v279 = 9;
    v280 = 15;
    *(_QWORD *)&v278 = 0x69746F786574694CLL;
    v188 = CommunityCreditNode_create(9, 14, v187, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v188);
    v279 = 8;
    v280 = 15;
    v278 = 0x78566863726F6353uLL;
    v190 = CommunityCreditNode_create(9, 15, v189, (__int64)&v278);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v190);
    v191 = sub_3C1F0(&v278, &qword_72F288);
    v193 = CommunityCreditNode_create(9, 16, v192, v191);
    cocos2d::CCArray::addObject(v24, (struct cocos2d::CCObject *)v193);
    v194 = 0;
    if ( cocos2d::CCArray::count(v24) )
    {
      v266 = -1;
      v267 = -20561;
      do
      {
        v196 = cocos2d::CCArray::objectAtIndex(v24, v194);
        v272 = v196;
        v197 = (int)floorf((float)(v194 / 12));
        v199 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 664), v197);
        if ( !v199 )
        {
          v199 = (struct cocos2d::CCObject *)cocos2d::CCArray::create(v198);
          cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(a1 + 664), v199, v197);
        }
        if ( v197 > v10 )
          v10 = v197;
        v200 = (float)(v263 * 0.5) + 85.0;
        v201 = v200 - (float)((float)(int)floorf((float)(v194 % 12 / 4)) * 80.0);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v270, v262 * 0.5, v201);
        v268[0] = (int)floorf((float)(v194 % 4));
        v202 = *((_DWORD *)v196 + 81);
        v203 = *((_DWORD *)v196 + 80);
        v204 = (char *)operator new(0x278u);
        v276 = v204;
        cocos2d::CCSprite::CCSprite((cocos2d::CCSprite *)v204);
        *(_QWORD *)v204 = &GJItemIcon::`vftable';
        *((_QWORD *)v204 + 40) = &GJItemIcon::`vftable';
        *((_QWORD *)v204 + 43) = &GJItemIcon::`vftable';
        *((_QWORD *)v204 + 75) = 0;
        *((_DWORD *)v204 + 152) = 0;
        cocos2d::CCSize::CCSize((cocos2d::CCSize *)(v204 + 612));
        v204[620] = 0;
        *((_QWORD *)v204 + 78) = 0;
        v264 = v266;
        v265 = -1;
        v260 = v267;
        v261 = -81;
        if ( (unsigned __int8)sub_37FAE0((_DWORD)v204, v203, v202, (unsigned int)&v260, (__int64)&v264, 0) )
        {
          cocos2d::CCObject::autorelease((cocos2d::CCObject *)v204);
        }
        else
        {
          (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v204 + 8LL))(v204, 1);
          v204 = 0;
        }
        (*(void (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
          *(_QWORD *)(a1 + 584),
          v204,
          3);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v273, (float)((float)v268[0] - 1.5) * 85.0, -30.0);
        cocos2d::CCPoint::operator+(v270, v274, v205);
        (*(void (__fastcall **)(char *, char *))(*(_QWORD *)v204 + 184LL))(v204, v274);
        cocos2d::CCArray::addObject(v199, (struct cocos2d::CCObject *)v204);
        v206 = (char *)v272 + 336;
        if ( *((_QWORD *)v272 + 45) > 0xFu )
          v206 = *(const char **)v206;
        v207 = cocos2d::CCLabelBMFont::create(v206, "goldFont.fnt");
        cocos2d::CCLabelBMFont::limitLabelWidth(v207, 60.0, 0.60000002, 0.0);
        (*(void (__fastcall **)(_QWORD, cocos2d::CCLabelBMFont *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
          *(_QWORD *)(a1 + 584),
          v207,
          3);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v271, 0.0, 34.0);
        v209 = v208;
        v210 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v204 + 200LL))(v204);
        cocos2d::CCPoint::operator+(v210, v259, v209);
        (*(void (__fastcall **)(cocos2d::CCLabelBMFont *, _BYTE *))(*(_QWORD *)v207 + 184LL))(v207, v259);
        cocos2d::CCArray::addObject(v199, v207);
        ++v194;
        v24 = v269;
      }
      while ( v194 < cocos2d::CCArray::count(v269) );
    }
    v211 = (struct cocos2d::CCObject *)cocos2d::CCArray::create(v195);
    cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(a1 + 664), v211, v10 + 1);
    v212 = cocos2d::CCLabelBMFont::create("Special Thanks :)", (const char *)&qword_6FFF68);
    v260 = -206;
    v261 = 50;
    (**((void (__fastcall ***)(__int64, __int16 *))v212 + 46))((__int64)v212 + 368, &v260);
    (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v212 + 160LL))(v212);
    v213 = *(_QWORD *)v212;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v271, v262 * 0.5, (float)(v263 * 0.5) + 80.0);
    (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v213 + 184))(v212, v214);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *))(**(_QWORD **)(a1 + 584) + 464LL))(
      *(_QWORD *)(a1 + 584),
      v212);
    cocos2d::CCArray::addObject(v211, v212);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v275, v262 * 0.5, v263 * 0.5);
    v215 = 0;
    do
    {
      v278 = 0;
      v279 = 0;
      v280 = 15;
      LOBYTE(v278) = 0;
      if ( v215 )
      {
        if ( v215 == 1 )
        {
          v279 = 5;
          strcpy((char *)&v278, "Etzer");
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v268, (const struct cocos2d::CCPoint *)&unk_904308);
        }
        else
        {
          if ( v215 == 2 )
          {
            v279 = 8;
            strcpy((char *)&v278, "Michigun");
          }
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v268, (const struct cocos2d::CCPoint *)&unk_904308);
        }
      }
      else
      {
        v279 = 6;
        strcpy((char *)&v278, "ViPriN");
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v268, (const struct cocos2d::CCPoint *)&unk_904308);
        v268[1] = 1084227584;
      }
      v216 = v215 + 1;
      v217 = cocos2d::CCString::createWithFormat("communityIcon_%02d_001.png", v215 + 1);
      CString = cocos2d::CCString::getCString(v217);
      v219 = cocos2d::CCSprite::createWithSpriteFrameName(CString);
      (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
        *(_QWORD *)(a1 + 584),
        v219,
        3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v271, (float)(v215 - 1) * 90.0, 0.0);
      cocos2d::CCPoint::operator+(v275, v270, v220);
      cocos2d::CCPoint::operator+(v270, &v269, v268);
      (*(void (__fastcall **)(struct cocos2d::CCObject *, cocos2d::CCArray **))(*(_QWORD *)v219 + 184LL))(v219, &v269);
      cocos2d::CCArray::addObject(v211, v219);
      v221 = (const char *)&v278;
      if ( v280 > 0xF )
        v221 = (const char *)v278;
      v222 = cocos2d::CCLabelBMFont::create(v221, "goldFont.fnt");
      cocos2d::CCLabelBMFont::limitLabelWidth(v222, 60.0, 0.60000002, 0.0);
      (*(void (__fastcall **)(_QWORD, cocos2d::CCLabelBMFont *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
        *(_QWORD *)(a1 + 584),
        v222,
        3);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v273, 0.0, 40.0);
      cocos2d::CCPoint::operator+(v270, v259, v223);
      (*(void (__fastcall **)(cocos2d::CCLabelBMFont *, _BYTE *))(*(_QWORD *)v222 + 184LL))(v222, v259);
      cocos2d::CCArray::addObject(v211, v222);
      if ( v215 == 2 )
      {
        v224 = cocos2d::CCSprite::createWithSpriteFrameName("d_heart01_001.png");
        v260 = -256;
        v264 = -256;
        v265 = 0;
        (**((void (__fastcall ***)(__int64, __int16 *))v224 + 40))((__int64)v224 + 320, &v264);
        (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v224 + 160LL))(v224);
        (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
          *(_QWORD *)(a1 + 584),
          v224,
          3);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v276, 40.0, 5.0);
        v226 = v225;
        v227 = (*(__int64 (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v222 + 200LL))(v222);
        cocos2d::CCPoint::operator+(v227, &v272, v226);
        (*(void (__fastcall **)(struct cocos2d::CCObject *, struct cocos2d::CCObject **))(*(_QWORD *)v224 + 184LL))(
          v224,
          &v272);
        cocos2d::CCArray::addObject(v211, v224);
      }
      sub_3C310(&v278);
      v215 = v216;
    }
    while ( v216 < 3 );
    v228 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_closeBtn_001.png");
    v271[0] = (__int64)operator new(0x208u);
    v229 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v271[0]);
    if ( v229 )
    {
      if ( (unsigned __int8)sub_47940((_DWORD)v229, v228, 0, a1, (__int64)UploadPopup_onClose) )
      {
        cocos2d::CCObject::autorelease(v229);
        goto LABEL_42;
      }
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v229 + 8LL))(v229, 1);
    }
    v229 = 0;
LABEL_42:
    *((_DWORD *)v229 + 93) = 1070386381;
    v230 = cocos2d::CCMenu::create(v229, 0);
    *(_QWORD *)(a1 + 552) = v230;
    v231 = *(_QWORD *)v230;
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)v271,
      (float)((float)(v262 * 0.5) - 210.0) + 10.0,
      (float)((float)(v263 * 0.5) + 140.0) - 10.0);
    (*(void (__fastcall **)(struct cocos2d::CCMenu *, __int64))(v231 + 184))(v230, v232);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
      *(_QWORD *)(a1 + 584),
      *(_QWORD *)(a1 + 552),
      10);
    v237 = cocos2d::CCMenu::create(v234, v233, v235, v236);
    v238 = v263 * 0.5;
    v239 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_arrow_01_001.png");
    v271[0] = (__int64)operator new(0x208u);
    v240 = CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v271[0]);
    v241 = (cocos2d::CCObject *)v240;
    if ( v240 )
    {
      if ( (unsigned __int8)sub_47940(v240, v239, 0, a1, (__int64)sub_12CBB0) )
      {
        cocos2d::CCObject::autorelease(v241);
        goto LABEL_47;
      }
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v241 + 8LL))(v241, 1);
    }
    v241 = 0;
LABEL_47:
    *(_QWORD *)(a1 + 672) = v241;
    (*(void (__fastcall **)(__int64, cocos2d::CCObject *))(*(_QWORD *)v237 + 464LL))(v237, v241);
    v242 = **(_QWORD **)(a1 + 672);
    v244 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v243);
    v245 = cocos2d::CCDirector::getScreenLeft(v244) + 24.0;
    v246 = *(_QWORD *)(a1 + 672);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v271, v245, v238);
    cocos2d::CCNode::convertToNodeSpace(v237, v273, v247);
    (*(void (__fastcall **)(__int64, __int64))(v242 + 184))(v246, v248);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 672) + 64LL))(*(_QWORD *)(a1 + 672), 0);
    *(_DWORD *)(*(_QWORD *)(a1 + 672) + 372LL) = 1068708659;
    v249 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_arrow_01_001.png");
    cocos2d::CCSprite::setFlipX(v249, 1);
    v271[0] = (__int64)operator new(0x208u);
    v250 = CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v271[0]);
    v251 = (cocos2d::CCObject *)v250;
    if ( v250 )
    {
      if ( (unsigned __int8)sub_47940(v250, (_DWORD)v249, 0, a1, (__int64)sub_12CBB0) )
      {
        cocos2d::CCObject::autorelease(v251);
LABEL_52:
        *(_QWORD *)(a1 + 680) = v251;
        (*(void (__fastcall **)(__int64, cocos2d::CCObject *))(*(_QWORD *)v237 + 464LL))(v237, v251);
        v252 = **(_QWORD **)(a1 + 680);
        v254 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v253);
        v255 = cocos2d::CCDirector::getScreenRight(v254) - 24.0;
        v256 = *(_QWORD *)(a1 + 680);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v271, v255, v238);
        cocos2d::CCNode::convertToNodeSpace(v237, v273, v257);
        (*(void (__fastcall **)(__int64, __int64))(v252 + 184))(v256, v258);
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 680) + 64LL))(*(_QWORD *)(a1 + 680), 1);
        *(_DWORD *)(*(_QWORD *)(a1 + 680) + 372LL) = 1068708659;
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(
          *(_QWORD *)(a1 + 584),
          v237,
          10);
        LevelTools_sortSpeedObjects(a1, 0);
        return 1;
      }
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v251 + 8LL))(v251, 1);
    }
    v251 = 0;
    goto LABEL_52;
  }
  return result;
}
