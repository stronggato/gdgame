#include <Geode/binding/LevelListCell.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x1125b0
// Method: LevelListCell::onListInfo
char __fastcall LevelListCell_onListInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 328); /*0x1125b0*/
  if ( v2 ) /*0x1125ba*/
    return sub_7FE90(v2, a2); /*0x1125ba*/
  else
    return 0; /*0x1125c0*/
}

// [2/4] Address: 0x15bd80
// Method: LevelListCell::LevelListCell
__int64 __fastcall LevelListCell_LevelListCell(__int64 a1, __int64 a2)
{
  SmartTemplateCell_loadFromObject(a1, a2); /*0x15bd89*/
  *(_WORD *)(a1 + 568) = 0; /*0x15bd95*/
  *(_QWORD *)a1 = &LevelListCell::`vftable'; /*0x15bd9e*/
  *(_QWORD *)(a1 + 320) = &LevelListCell::`vftable'; /*0x15bda8*/
  *(_QWORD *)(a1 + 328) = &LevelListCell::`vftable'; /*0x15bdb6*/
  *(_QWORD *)(a1 + 336) = &LevelListCell::`vftable'; /*0x15bdc4*/
  *(_QWORD *)(a1 + 344) = &LevelListCell::`vftable'; /*0x15bdd2*/
  *(_QWORD *)(a1 + 352) = &LevelListCell::`vftable'; /*0x15bde0*/
  *(_QWORD *)(a1 + 560) = 0; /*0x15bdea*/
  return a1; /*0x15bdf5*/
}

// [4/4] Address: 0x15d540
// Method: LevelListCell::onViewProfile
__int64 __fastcall LevelListCell_onViewProfile(__int64 a1)
{
  __int64 result; // rax
  signed int v2; // ecx
  char *v3; // rax

  result = *(_QWORD *)(a1 + 560); /*0x15d544*/
  v2 = *(_DWORD *)(result + 364); /*0x15d54b*/
  if ( v2 > 0 ) /*0x15d553*/
  {
    v3 = ProfilePage_create(v2, 0); /*0x15d557*/
    return (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v3 + 1064LL))(v3); /*0x15d56d*/
  }
  return result; /*0x15d569*/
}

// Address: 0x15be00
// Method: LevelListCell::loadFromList
// Hidden C++ exception states: #wind=5
void __fastcall LevelListCell_loadFromList(__int64 a1, int *a2)
{
  int *v2; // rdi
  cocos2d::CCObject *v4; // rcx
  unsigned int v5; // edx
  cocos2d::CCString *v6; // rax
  const char *CString; // rax
  __int64 v8; // r8
  void **v9; // rcx
  struct cocos2d::CCSprite *v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rax
  float v13; // xmm6_4
  __int64 v14; // r12
  bool hasClaimedListReward; // r13
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  struct cocos2d::CCSprite *v20; // r15
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  struct cocos2d::CCLabelBMFont *v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rax
  struct cocos2d::CCSprite *v31; // rdi
  __int64 v32; // rbx
  __int64 v33; // rax
  const char *v34; // rcx
  cocos2d::CCLabelBMFont *v35; // r15
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rax
  int v40; // edx
  cocos2d::CCString *v41; // rax
  const char *v42; // rax
  struct cocos2d::CCLabelBMFont *v43; // rdi
  __int64 v44; // rbx
  __int64 v45; // rax
  double v46; // xmm0_8
  float v47; // xmm6_4
  const struct cocos2d::CCSize *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rbx
  __int64 v51; // rax
  char v52; // cl
  const char *v53; // rax
  const char *v54; // rcx
  cocos2d::CCObject *v55; // rdi
  cocos2d::CCObject *v56; // rax
  struct cocos2d::CCMenu *v57; // rsi
  __int64 v58; // rbx
  float v59; // xmm6_4
  float v60; // xmm0_4
  __int64 v61; // rax
  const char *v62; // rdx
  cocos2d::CCString *v63; // rax
  const char *v64; // rbx
  cocos2d::CCLabelBMFont *v65; // rdi
  float v66; // xmm6_4
  double v67; // xmm0_8
  __int64 v68; // rax
  __int64 v69; // rbx
  __int64 v70; // rax
  cocos2d::CCObject *v71; // rdi
  __int64 v72; // rbx
  __int64 v73; // rax
  struct cocos2d::CCSprite *v74; // rsi
  __int64 v75; // rdx
  void (__fastcall *v76)(char *, __int64); // r8
  __int64 v77; // rbx
  float v78; // xmm7_4
  float v79; // xmm6_4
  float v80; // xmm6_4
  __int64 v81; // rax
  struct cocos2d::CCSprite *v82; // rdi
  float v83; // xmm6_4
  __int64 v84; // rbx
  __int64 v85; // rax
  __int64 v86; // rbx
  __int64 v87; // rax
  __int64 v88; // rax
  float v89; // xmm1_4
  int v90; // r13d
  __int64 v91; // rbx
  __int64 v92; // rax
  cocos2d::CCString *v93; // rax
  const char *v94; // rax
  struct cocos2d::CCLabelBMFont *v95; // rdi
  __int64 v96; // rax
  __int64 v97; // rbx
  __int64 v98; // rax
  float v99; // xmm6_4
  struct cocos2d::CCSprite *v100; // r13
  __int64 v101; // rbx
  __int64 v102; // rax
  struct cocos2d::CCSprite *v103; // rdi
  __int64 v104; // rax
  __int64 v105; // rbx
  __int64 v106; // rax
  __int64 v107; // rax
  cocos2d::CCLabelBMFont *v108; // rsi
  __int64 v109; // rbx
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rbx
  __int64 v113; // rax
  int v114; // r12d
  void (__fastcall *v115)(struct cocos2d::CCSprite *, struct cocos2d::CCSpriteFrame *); // rbx
  __int64 v116; // rdx
  __int64 v117; // rcx
  cocos2d::CCSpriteFrameCache *v118; // rcx
  const char *v119; // rdx
  struct cocos2d::CCSpriteFrame *v120; // rax
  __int64 v121; // rbx
  float v122; // xmm8_4
  float v123; // xmm6_4
  double v124; // xmm0_8
  float v125; // xmm7_4
  __int64 v126; // rax
  __int64 v127; // rax
  cocos2d::CCLabelBMFont *v128; // r12
  __int64 v129; // rbx
  __int64 v130; // rax
  __int64 v131; // rax
  __int64 v132; // rbx
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rbx
  __int64 v136; // rax
  struct cocos2d::CCSprite *v137; // rdi
  __int64 v138; // rax
  __int64 v139; // rbx
  __int64 v140; // rax
  __int64 v141; // rdi
  struct cocos2d::CCSprite *v142; // rsi
  __int64 v143; // rax
  __int64 v144; // rbx
  __int64 v145; // rax
  __int64 v146; // rbx
  float v147; // xmm8_4
  float v148; // xmm6_4
  double v149; // xmm0_8
  float v150; // xmm7_4
  __int64 v151; // rax
  cocos2d::CCString *v152; // rax
  const char *v153; // rax
  cocos2d::CCLabelBMFont *v154; // rdi
  __int64 v155; // rbx
  __int64 v156; // rax
  __int64 v157; // rax
  __int64 v158; // rbx
  __int64 v159; // rax
  struct cocos2d::CCSprite *v160; // rsi
  __int64 v161; // rbx
  float *v162; // rax
  __int64 v163; // rax
  const char *v164; // rcx
  struct cocos2d::CCLabelBMFont *v165; // rdi
  __int64 v166; // rbx
  __int64 v167; // rax
  __int64 v168; // rax
  __int64 v169; // rbx
  __int64 v170; // rax
  struct cocos2d::CCSprite *v171; // rax
  int v172; // ebx
  cocos2d::CCObject *v173; // rdi
  struct cocos2d::CCMenu *v174; // rsi
  float v175; // xmm6_4
  double v176; // xmm0_8
  __int64 v177; // rax
  __int64 v178; // rbx
  __int64 v179; // rax
  __int64 v180; // rbx
  __int64 v181; // rax
  void *v182; // rcx
  __int16 v183; // [rsp+40h] [rbp-C0h] BYREF
  char v184; // [rsp+42h] [rbp-BEh]
  char v185; // [rsp+44h] [rbp-BCh]
  _BYTE v186[8]; // [rsp+48h] [rbp-B8h] BYREF
  bool v187; // [rsp+50h] [rbp-B0h]
  struct cocos2d::CCMenu *v188; // [rsp+58h] [rbp-A8h] BYREF
  struct cocos2d::CCSprite *v189; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v190[8]; // [rsp+68h] [rbp-98h] BYREF
  __int16 v191; // [rsp+70h] [rbp-90h] BYREF
  char v192; // [rsp+72h] [rbp-8Eh]
  int v193[3]; // [rsp+74h] [rbp-8Ch] BYREF
  _BYTE v194[8]; // [rsp+80h] [rbp-80h] BYREF
  void *Block[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v196; // [rsp+98h] [rbp-68h]
  unsigned __int64 v197; // [rsp+A0h] [rbp-60h]
  _QWORD v198[4]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v199[4]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v200[32]; // [rsp+E8h] [rbp-18h] BYREF

  v2 = a2;
  LOBYTE(a2) = 1;
  (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 544) + 576LL))(*(_QWORD *)(a1 + 544), a2);
  v4 = *(cocos2d::CCObject **)(a1 + 560);
  if ( v4 )
    cocos2d::CCObject::release(v4);
  *(_QWORD *)(a1 + 560) = v2;
  cocos2d::CCObject::retain((cocos2d::CCObject *)v2);
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 560) + 360LL);
  if ( v5 )
  {
    if ( v5 <= 0xA )
    {
      if ( v5 == 6 || v5 == 7 )
      {
        ++v5;
      }
      else if ( v5 == 8 )
      {
        v5 = 6;
      }
    }
    else
    {
      v5 = 0;
    }
    v6 = cocos2d::CCString::createWithFormat("difficulty_%02d_btn_001.png", v5);
    CString = cocos2d::CCString::getCString(v6);
    *(_OWORD *)Block = 0;
    v196 = 0;
    v197 = 0;
    v8 = -1;
    do
      ++v8;
    while ( CString[v8] );
    sub_3C230(Block);
  }
  else
  {
    *(_OWORD *)Block = 0;
    Block[0] = (void *)sub_3C460(32);
    v196 = 27;
    v197 = 31;
    strcpy((char *)Block[0], "difficulty_auto_btn_001.png");
  }
  v9 = Block;
  if ( v197 > 0xF )
    v9 = (void **)Block[0];
  v10 = cocos2d::CCSprite::createWithSpriteFrameName((const char *)v9);
  v11 = *(_QWORD *)v10;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v188, 26.0, *(float *)(a1 + 532) * 0.5);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v11 + 184))(v10, v12);
  if ( *(_BYTE *)(a1 + 569) )
    v13 = 5.0;
  else
    v13 = 0.0;
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(**(_QWORD **)(a1 + 544) + 456LL))(
    *(_QWORD *)(a1 + 544),
    v10,
    2);
  v193[0] = GJLevelList_completedLevels(*(_QWORD *)(a1 + 560));
  v14 = (__int64)(*(_QWORD *)(*(_QWORD *)(a1 + 560) + 328LL) - *(_QWORD *)(*(_QWORD *)(a1 + 560) + 320LL)) >> 2;
  v185 = 0;
  hasClaimedListReward = 0;
  v187 = 0;
  if ( v2[96] > 0 && v2[97] > 0 )
  {
    v185 = 1;
    v16 = qword_905FE0;
    if ( !qword_905FE0 )
    {
      v188 = (struct cocos2d::CCMenu *)operator new(0x3E8u);
      qword_905FE0 = sub_2D2B40(v188);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
      v16 = qword_905FE0;
    }
    hasClaimedListReward = GameStatsManager_hasClaimedListReward(v16, *(_QWORD *)(a1 + 560));
    v187 = hasClaimedListReward;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v188, 0.0, 5.0);
    v18 = v17;
    v19 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v10 + 200LL))(v10);
    cocos2d::CCPoint::operator+(v19, &v189, v18);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, struct cocos2d::CCSprite **))(*(_QWORD *)v10 + 184LL))(
      v10,
      &v189);
    v20 = cocos2d::CCSprite::createWithSpriteFrameName("diamond_small01_001.png");
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *))(**(_QWORD **)(a1 + 544) + 464LL))(
      *(_QWORD *)(a1 + 544),
      v20);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v188, 8.0, -30.0);
    v22 = v21;
    v23 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v10 + 200LL))(v10);
    cocos2d::CCPoint::operator+(v23, &v189, v22);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, struct cocos2d::CCSprite **))(*(_QWORD *)v20 + 184LL))(
      v20,
      &v189);
    v24 = GameToolbox_intToString((__int64)v199, *(_DWORD *)(*(_QWORD *)(a1 + 560) + 384LL));
    if ( *(_QWORD *)(v24 + 24) > 0xFu )
      v24 = *(_QWORD *)v24;
    v25 = cocos2d::CCLabelBMFont::create((const char *)v24, (const char *)&qword_6FFF68);
    sub_3C310(v199);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 544) + 464LL))(
      *(_QWORD *)(a1 + 544),
      v25);
    v26 = *(_QWORD *)v25;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v188, 1.0, 0.5);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v26 + 288))(v25, v27);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v188, -8.0, 0.0);
    v29 = v28;
    v30 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v20 + 200LL))(v20);
    cocos2d::CCPoint::operator+(v30, &v189, v29);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, struct cocos2d::CCSprite **))(*(_QWORD *)v25 + 184LL))(
      v25,
      &v189);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v25 + 160LL))(v25);
    if ( hasClaimedListReward )
    {
      v183 = -156;
      v184 = -1;
      (**((void (__fastcall ***)(__int64, __int16 *))v25 + 46))((__int64)v25 + 368, &v183);
    }
    else
    {
      LODWORD(v14) = *(_DWORD *)(*(_QWORD *)(a1 + 560) + 388LL);
    }
  }
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 560) + 397LL) )
  {
    v31 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_featuredCoin_001.png");
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(**(_QWORD **)(a1 + 544) + 456LL))(
      *(_QWORD *)(a1 + 544),
      v31,
      1);
    v32 = *(_QWORD *)v31;
    v33 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v10 + 200LL))(v10);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v32 + 184))(v31, v33);
  }
  sub_3E4F0(v199, *(_QWORD *)(a1 + 560) + 440LL);
  v34 = (const char *)v199;
  if ( v199[3] > 0xFu )
    v34 = (const char *)v199[0];
  v35 = cocos2d::CCLabelBMFont::create(v34, (const char *)&qword_6FFF68);
  sub_3C310(v199);
  (*(void (__fastcall **)(_QWORD, cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 544) + 464LL))(
    *(_QWORD *)(a1 + 544),
    v35);
  v36 = *(_QWORD *)v35;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v188, 0.0, 0.5);
  (*(void (__fastcall **)(cocos2d::CCLabelBMFont *, __int64))(v36 + 288))(v35, v37);
  (*(void (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v35 + 160LL))(v35);
  v38 = *(_QWORD *)v35;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v188, v13 + 50.0, (float)(*(float *)(a1 + 532) * 0.5) + 30.0);
  (*(void (__fastcall **)(cocos2d::CCLabelBMFont *, __int64))(v38 + 184))(v35, v39);
  cocos2d::CCLabelBMFont::limitLabelWidth(v35, 190.0, 0.69999999, 0.0);
  v40 = *(_DWORD *)(*(_QWORD *)(a1 + 560) + 372LL);
  if ( v40 > 0 )
  {
    v41 = cocos2d::CCString::createWithFormat("Rev. %i", v40);
    v42 = cocos2d::CCString::getCString(v41);
    v43 = cocos2d::CCLabelBMFont::create(v42, "goldFont.fnt");
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 544) + 464LL))(
      *(_QWORD *)(a1 + 544),
      v43);
    v44 = *(_QWORD *)v43;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v188, 0.0, 0.5);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v44 + 288))(v43, v45);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v43 + 160LL))(v43);
    v46 = (*(double (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v35 + 168LL))(v35);
    v47 = *(float *)&v46;
    v48 = (const struct cocos2d::CCSize *)(*(__int64 (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v35 + 320LL))(v35);
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v189, v48);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v188, (float)(*(float *)&v189 * v47) + 30.0, -1.0);
    v50 = v49;
    v51 = (*(__int64 (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v35 + 200LL))(v35);
    cocos2d::CCPoint::operator+(v51, v186, v50);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, _BYTE *))(*(_QWORD *)v43 + 184LL))(v43, v186);
  }
  v52 = *(_BYTE *)(a1 + 568);
  if ( !v52 || *(_BYTE *)(a1 + 569) )
  {
    v53 = "GJ_button_01.png";
    if ( !v52 )
    {
      v54 = "View";
      goto LABEL_43;
    }
  }
  else
  {
    v53 = "GJ_button_02.png";
  }
  v54 = "Add";
  if ( *(_BYTE *)(a1 + 569) )
    v54 = "Use";
LABEL_43:
  v55 = ButtonSprite_create((int)v54, 50, 0, 0.60000002, 0, (__int64)&qword_6FFF68, (__int64)v53, 1106247680);
  v56 = CCMenuItemSpriteExtra_create((int)v55, 0, a1, (__int64)sub_15D320);
  v57 = cocos2d::CCMenu::create(v56, 0);
  v188 = v57;
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCMenu *, __int64))(**(_QWORD **)(a1 + 544) + 456LL))(
    *(_QWORD *)(a1 + 544),
    v57,
    3);
  v58 = *(_QWORD *)v57;
  v59 = *(float *)(a1 + 532) * 0.5;
  v60 = *(float *)(*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v55 + 320LL))(v55);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v186, (float)(*(float *)(a1 + 528) - (float)(v60 * 0.5)) - 9.0, v59);
  (*(void (__fastcall **)(struct cocos2d::CCMenu *, __int64))(v58 + 184))(v57, v61);
  sub_3E4F0(v198, *(_QWORD *)(a1 + 560) + 408LL);
  v62 = (const char *)v198;
  if ( v198[3] > 0xFu )
    v62 = (const char *)v198[0];
  v63 = cocos2d::CCString::createWithFormat("By %s", v62);
  v64 = cocos2d::CCString::getCString(v63);
  sub_3C310(v198);
  v65 = cocos2d::CCLabelBMFont::create(v64, "goldFont.fnt");
  cocos2d::CCLabelBMFont::limitLabelWidth(v65, 140.0, 0.69999999, 0.0);
  v66 = *(float *)(*(__int64 (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v65 + 320LL))(v65) * 0.5;
  v67 = (*(double (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v65 + 168LL))(v65);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v186, (float)(*(float *)&v67 * v66) + 2.0, -21.0);
  v69 = v68;
  v70 = (*(__int64 (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v35 + 200LL))(v35);
  cocos2d::CCPoint::operator+(v70, v194, v69);
  v71 = CCMenuItemSpriteExtra_create((int)v65, 0, a1, (__int64)LevelListCell_onViewProfile);
  (*(void (__fastcall **)(struct cocos2d::CCMenu *, cocos2d::CCObject *))(*(_QWORD *)v57 + 464LL))(v57, v71);
  v72 = *(_QWORD *)v71;
  cocos2d::CCNode::convertToNodeSpace(v57, v186, v194);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v72 + 184))(v71, v73);
  v191 = 0;
  v192 = 0;
  v74 = cocos2d::CCSprite::create("GJ_progressBar_001.png");
  v189 = v74;
  (**((void (__fastcall ***)(__int64, __int16 *))v74 + 40))((__int64)v74 + 320, &v191);
  v75 = *((_QWORD *)v74 + 40);
  v76 = *(void (__fastcall **)(char *, __int64))(v75 + 40);
  LOBYTE(v75) = 125;
  v76((char *)v74 + 320, v75);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v74 + 136LL))(v74);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v74 + 120LL))(v74);
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(**(_QWORD **)(a1 + 544) + 456LL))(
    *(_QWORD *)(a1 + 544),
    v74,
    3);
  v77 = *(_QWORD *)v74;
  v78 = (float)(*(float *)(a1 + 532) * 0.5) - 12.0;
  v79 = (float)(*(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v74 + 320LL))(v74)
              * 0.48000002)
      * 0.5;
  v80 = v79 + *(float *)(*(__int64 (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v35 + 200LL))(v35);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v186, v80, v78);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v77 + 184))(v74, v81);
  v82 = cocos2d::CCSprite::create("GJ_progressBar_001.png");
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v82 + 120LL))(v82);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v82 + 136LL))(v82);
  if ( !v185 || hasClaimedListReward )
  {
    v183 = -16816;
    v184 = -1;
  }
  else
  {
    v183 = 21759;
    v184 = 50;
  }
  (**((void (__fastcall ***)(__int64, __int16 *))v82 + 40))((__int64)v82 + 320, &v183);
  v83 = *((float *)v82 + 108);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)v74 + 456LL))(
    v74,
    v82,
    1);
  v84 = *(_QWORD *)v82;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v186, 0.0, 0.5);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v84 + 288))(v82, v85);
  v86 = *(_QWORD *)v82;
  v87 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v74 + 320LL))(v74);
  cocos2d::CCPoint::CCPoint(
    (cocos2d::CCPoint *)v186,
    (float)(v83 - (float)(v83 * 0.97799999)) * 0.5,
    *(float *)(v87 + 4) * 0.5);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v86 + 184))(v82, v88);
  v89 = 0.0;
  v90 = v193[0];
  if ( (int)v14 > 0 )
    v89 = (float)v193[0] / (float)(int)v14;
  v91 = *(_QWORD *)v82;
  cocos2d::CCRect::CCRect(
    (cocos2d::CCRect *)v198,
    0.0,
    0.0,
    fminf(*((float *)v82 + 108), v89 * *((float *)v82 + 108)),
    *((float *)v82 + 109));
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v91 + 992))(v82, v92);
  v93 = cocos2d::CCString::createWithFormat("%i/%i", v90, v14);
  v94 = cocos2d::CCString::getCString(v93);
  v95 = cocos2d::CCLabelBMFont::create(v94, (const char *)&qword_6FFF68);
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *, __int64))(**(_QWORD **)(a1 + 544) + 456LL))(
    *(_QWORD *)(a1 + 544),
    v95,
    4);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v190, 0.0, 0.5);
  v97 = v96;
  v98 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v74 + 200LL))(v74);
  cocos2d::CCPoint::operator+(v98, v186, v97);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, _BYTE *))(*(_QWORD *)v95 + 184LL))(v95, v186);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v95 + 160LL))(v95);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 560) + 584LL) == 2 )
  {
    v160 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_infoIcon_001.png");
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *))(**(_QWORD **)(a1 + 544) + 464LL))(
      *(_QWORD *)(a1 + 544),
      v160);
    v161 = *(_QWORD *)v160;
    v162 = (float *)(*(__int64 (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v35 + 200LL))(v35);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v198, *v162 + 8.0, 14.0);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v161 + 184))(v160, v163);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v160 + 160LL))(v160);
    v164 = "Uploaded";
    if ( !*(_BYTE *)(*(_QWORD *)(a1 + 560) + 395LL) )
      v164 = "Unpublished";
    v165 = cocos2d::CCLabelBMFont::create(v164, (const char *)&qword_6FFF68);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 544) + 464LL))(
      *(_QWORD *)(a1 + 544),
      v165);
    v166 = *(_QWORD *)v165;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v190, 0.0, 0.5);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v166 + 288))(v165, v167);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v189, 13.0, 0.0);
    v169 = v168;
    v170 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v160 + 200LL))(v160);
    cocos2d::CCPoint::operator+(v170, v186, v169);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, _BYTE *))(*(_QWORD *)v165 + 184LL))(v165, v186);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v165 + 160LL))(v165);
  }
  else
  {
    v99 = *(float *)(*(__int64 (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v35 + 200LL))(v35) + 9.0;
    v100 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_downloadsIcon_001.png");
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *))(**(_QWORD **)(a1 + 544) + 464LL))(
      *(_QWORD *)(a1 + 544),
      v100);
    v101 = *(_QWORD *)v100;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v190, v99, 14.0);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v101 + 184))(v100, v102);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v100 + 160LL))(v100);
    v103 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_likesIcon_001.png");
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *))(**(_QWORD **)(a1 + 544) + 464LL))(
      *(_QWORD *)(a1 + 544),
      v103);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v190, 80.0, 0.0);
    v105 = v104;
    v106 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v100 + 200LL))(v100);
    cocos2d::CCPoint::operator+(v106, v186, v105);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, _BYTE *))(*(_QWORD *)v103 + 184LL))(v103, v186);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v103 + 160LL))(v103);
    v107 = sub_72E80(v198, *(unsigned int *)(*(_QWORD *)(a1 + 560) + 352LL), 0);
    if ( *(_QWORD *)(v107 + 24) > 0xFu )
      v107 = *(_QWORD *)v107;
    v108 = cocos2d::CCLabelBMFont::create((const char *)v107, (const char *)&qword_6FFF68);
    sub_3C310(v198);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 544) + 464LL))(
      *(_QWORD *)(a1 + 544),
      v108);
    v109 = *(_QWORD *)v108;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v190, 0.0, 0.5);
    (*(void (__fastcall **)(cocos2d::CCLabelBMFont *, __int64))(v109 + 288))(v108, v110);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v190, 9.0, 0.0);
    v112 = v111;
    v113 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v100 + 200LL))(v100);
    cocos2d::CCPoint::operator+(v113, v186, v112);
    (*(void (__fastcall **)(cocos2d::CCLabelBMFont *, _BYTE *))(*(_QWORD *)v108 + 184LL))(v108, v186);
    (*(void (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v108 + 160LL))(v108);
    cocos2d::CCLabelBMFont::limitLabelWidth(v108, 45.0, 0.40000001, 0.0);
    v114 = *(_DWORD *)(*(_QWORD *)(a1 + 560) + 356LL);
    v115 = *(void (__fastcall **)(struct cocos2d::CCSprite *, struct cocos2d::CCSpriteFrame *))(*(_QWORD *)v103 + 1008LL);
    v118 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(v117, v116);
    v119 = "GJ_likesIcon_001.png";
    if ( v114 < 0 )
      v119 = "GJ_dislikesIcon_001.png";
    v120 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v118, v119);
    v115(v103, v120);
    v121 = *(_QWORD *)v103;
    v122 = *(float *)((*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v103 + 200LL))(v103) + 4);
    v123 = *(float *)(*(__int64 (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v108 + 320LL))(v108);
    v124 = (*(double (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v108 + 168LL))(v108);
    v125 = (float)((float)(*(float *)&v124 * v123)
                 + *(float *)(*(__int64 (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v108 + 200LL))(v108))
         + 25.0;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v190, v125, v122);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v121 + 184))(v103, v126);
    v127 = sub_72E80(v200, (unsigned int)v114, 0);
    if ( *(_QWORD *)(v127 + 24) > 0xFu )
      v127 = *(_QWORD *)v127;
    v128 = cocos2d::CCLabelBMFont::create((const char *)v127, (const char *)&qword_6FFF68);
    sub_3C310(v200);
    (*(void (__fastcall **)(_QWORD, cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 544) + 464LL))(
      *(_QWORD *)(a1 + 544),
      v128);
    v129 = *(_QWORD *)v128;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v190, 0.0, 0.5);
    (*(void (__fastcall **)(cocos2d::CCLabelBMFont *, __int64))(v129 + 288))(v128, v130);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v190, 10.0, 0.0);
    v132 = v131;
    v133 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v103 + 200LL))(v103);
    cocos2d::CCPoint::operator+(v133, v186, v132);
    (*(void (__fastcall **)(cocos2d::CCLabelBMFont *, _BYTE *))(*(_QWORD *)v128 + 184LL))(v128, v186);
    (*(void (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v128 + 160LL))(v128);
    cocos2d::CCLabelBMFont::limitLabelWidth(v128, 45.0, 0.40000001, 0.0);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v198, 0.0, 1.0);
    v135 = v134;
    v136 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v103 + 200LL))(v103);
    cocos2d::CCPoint::operator+(v136, v186, v135);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, _BYTE *))(*(_QWORD *)v103 + 184LL))(v103, v186);
    if ( v185 && !v187 )
    {
      v137 = cocos2d::CCSprite::createWithSpriteFrameName("diamond_small01_001.png");
      (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(**(_QWORD **)(a1 + 544) + 456LL))(
        *(_QWORD *)(a1 + 544),
        v137,
        10);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v198, 73.0, 0.0);
      v139 = v138;
      v140 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v189 + 200LL))(v189);
      cocos2d::CCPoint::operator+(v140, v186, v139);
      (*(void (__fastcall **)(struct cocos2d::CCSprite *, _BYTE *))(*(_QWORD *)v137 + 184LL))(v137, v186);
      v141 = (__int64)(*(_QWORD *)(*(_QWORD *)(a1 + 560) + 328LL) - *(_QWORD *)(*(_QWORD *)(a1 + 560) + 320LL)) >> 2;
      v142 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_completesIcon_001.png");
      (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *))(**(_QWORD **)(a1 + 544) + 464LL))(
        *(_QWORD *)(a1 + 544),
        v142);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v190, 80.0, 0.0);
      v144 = v143;
      v145 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v100 + 200LL))(v100);
      cocos2d::CCPoint::operator+(v145, v186, v144);
      (*(void (__fastcall **)(struct cocos2d::CCSprite *, _BYTE *))(*(_QWORD *)v142 + 184LL))(v142, v186);
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v142 + 160LL))(v142);
      v146 = *(_QWORD *)v142;
      v147 = *(float *)((*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v142 + 200LL))(v142) + 4);
      v148 = *(float *)(*(__int64 (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v128 + 320LL))(v128);
      v149 = (*(double (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v128 + 168LL))(v128);
      v150 = (float)((float)(*(float *)&v149 * v148)
                   + *(float *)(*(__int64 (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v128 + 200LL))(v128))
           + 25.0;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v198, v150, v147);
      (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v146 + 184))(v142, v151);
      v152 = cocos2d::CCString::createWithFormat("%i/%i", v193[0], v141);
      v153 = cocos2d::CCString::getCString(v152);
      v154 = cocos2d::CCLabelBMFont::create(v153, (const char *)&qword_6FFF68);
      (*(void (__fastcall **)(_QWORD, cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 544) + 464LL))(
        *(_QWORD *)(a1 + 544),
        v154);
      v155 = *(_QWORD *)v154;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v189, 0.0, 0.5);
      (*(void (__fastcall **)(cocos2d::CCLabelBMFont *, __int64))(v155 + 288))(v154, v156);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v193, 10.0, 0.0);
      v158 = v157;
      v159 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v142 + 200LL))(v142);
      cocos2d::CCPoint::operator+(v159, v186, v158);
      (*(void (__fastcall **)(cocos2d::CCLabelBMFont *, _BYTE *))(*(_QWORD *)v154 + 184LL))(v154, v186);
      (*(void (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v154 + 160LL))(v154);
      cocos2d::CCLabelBMFont::limitLabelWidth(v154, 45.0, 0.40000001, 0.0);
    }
  }
  v171 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_infoIcon_001.png");
  v172 = (int)v171;
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v171 + 160LL))(v171);
  v173 = CCMenuItemSpriteExtra_create(v172, 0, a1, (__int64)sub_15D520);
  *((_DWORD *)v173 + 93) = 1067030938;
  v174 = v188;
  (*(void (__fastcall **)(struct cocos2d::CCMenu *, cocos2d::CCObject *))(*(_QWORD *)v188 + 464LL))(v188, v173);
  v175 = *(float *)(*(__int64 (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v35 + 320LL))(v35);
  v176 = (*(double (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v35 + 168LL))(v35);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v198, (float)(*(float *)&v176 * v175) + 15.0, -1.0);
  v178 = v177;
  v179 = (*(__int64 (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v35 + 200LL))(v35);
  cocos2d::CCPoint::operator+(v179, &v188, v178);
  v180 = *(_QWORD *)v173;
  cocos2d::CCNode::convertToNodeSpace(v174, v190, &v188);
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v180 + 184))(v173, v181);
  if ( v197 > 0xF )
  {
    v182 = Block[0];
    if ( v197 + 1 >= 0x1000 )
    {
      v182 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v182 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v182);
  }
}
