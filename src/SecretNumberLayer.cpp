#include <Geode/binding/SecretNumberLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x416e0
// Method: SecretNumberLayer::init
bool __fastcall SecretNumberLayer_init(cocos2d::CCLayer *a1)
{
  return cocos2d::CCLayer::init(a1); /*0x416ef*/
}

// [2/4] Address: 0x15dcc0
// Method: SecretNumberLayer::playNumberEffect
// Hidden C++ exception states: #wind=5
bool __fastcall SecretNumberLayer_playNumberEffect(
        __int64 a1,
        cocos2d::CCObject *a2,
        __int64 a3,
        char a4,
        int a5,
        int a6,
        int a7,
        unsigned __int8 a8,
        char a9,
        char a10)
{
  bool result; // al
  struct cocos2d::CCObject *v15; // rcx
  cocos2d::CCObject *v16; // rcx
  int v17; // r13d
  __int64 v18; // rbx
  __int64 v19; // rax
  cocos2d::CCDictionary *v20; // rcx
  struct cocos2d::CCObject *v21; // rax
  char v22; // al
  bool v23; // al
  __int64 v24; // rax
  __int64 v25; // rax
  char v26; // r12
  int v27; // ebx
  __int64 v28; // rcx
  int v29; // ebx
  char v30; // cl
  unsigned __int64 v31; // rdi
  _QWORD *v32; // rbx
  __int64 v33; // rax
  _QWORD *v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rbx
  __int64 v37; // rax
  float v38; // xmm6_4
  struct cocos2d::CCSprite *v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // rax
  cocos2d::CCTouchDispatcher *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  struct cocos2d::CCLabelBMFont *v46; // rax
  void *v47; // rdx
  __int64 v48; // rdx
  struct cocos2d::CCLabelBMFont *v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rdi
  __int64 v54; // rbx
  __int64 v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rdi
  __int64 v60; // rbx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rbx
  __int64 v64; // rax
  __int64 v65; // rax
  struct cocos2d::CCSprite *v66; // rax
  int v67; // ebx
  cocos2d::CCObject *v68; // rax
  struct cocos2d::CCSprite *v69; // rax
  int v70; // ebx
  cocos2d::CCObject *v71; // rax
  struct cocos2d::CCSprite *v72; // rax
  int v73; // ebx
  cocos2d::CCObject *v74; // rax
  struct cocos2d::CCSprite *v75; // rax
  int v76; // ebx
  cocos2d::CCObject *v77; // rax
  struct cocos2d::CCSprite *v78; // rax
  int v79; // ebx
  cocos2d::CCObject *v80; // rax
  __int64 v81; // rbx
  __int64 v82; // rdi
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rsi
  __int64 v86; // rbx
  __int64 v87; // rdi
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rdi
  __int64 v93; // rbx
  __int64 v94; // rax
  __int64 v95; // rdi
  __int64 v96; // rbx
  __int64 v97; // rax
  float v98; // xmm9_4
  __int64 v99; // rax
  __int64 v100; // rbx
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rbx
  __int64 v104; // rax
  __int64 v105; // rcx
  struct cocos2d::CCSprite *v106; // rdi
  __int64 v107; // rbx
  cocos2d::CCObject *v108; // rax
  struct cocos2d::CCSprite *v109; // rax
  int v110; // ebx
  cocos2d::CCObject *v111; // rax
  __int64 v112; // rax
  __int64 v113; // rbx
  __int64 v114; // rax
  struct cocos2d::CCSprite *v115; // rdi
  __int64 v116; // rbx
  cocos2d::CCObject *v117; // rax
  int v118; // edi
  __int64 v119; // rax
  __int64 v120; // rbx
  __int64 v121; // rax
  __int64 v122; // rcx
  char v123; // al
  const char *v124; // rcx
  struct cocos2d::CCSprite *v125; // rax
  int v126; // ebx
  cocos2d::CCObject *v127; // rax
  __int64 v128; // rax
  __int64 v129; // rbx
  __int64 v130; // rax
  struct cocos2d::CCSprite *v131; // rax
  int v132; // ebx
  cocos2d::CCObject *v133; // rdi
  void (__fastcall *v134)(cocos2d::CCObject *, __int64); // rsi
  __int64 v135; // rbx
  float v136; // xmm1_4
  struct cocos2d::CCSprite *v137; // rax
  int v138; // ebx
  cocos2d::CCObject *v139; // rax
  __int64 v140; // rax
  __int64 v141; // rbx
  __int64 v142; // rax
  __int64 v143; // rcx
  __int64 v144; // rax
  __int64 v145; // rax
  cocos2d::CCSprite *v146; // rbx
  cocos2d::CCObject *v147; // rdi
  __int64 v148; // rax
  __int64 v149; // rbx
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rbx
  __int64 v153; // rax
  struct cocos2d::CCSprite *v154; // rax
  __int64 v155; // rdx
  _QWORD *v156; // rsi
  __int64 v157; // rax
  __int64 *v158; // rdi
  __int64 v159; // rbx
  __int64 v160; // rax
  void (__fastcall *v161)(_QWORD *, __int64 *); // r8
  struct cocos2d::CCSprite *v162; // rax
  struct cocos2d::CCSprite *v163; // rax
  cocos2d::CCTexture2D *v164; // rax
  __int64 v165; // rdi
  __int64 v166; // rbx
  __int64 v167; // rax
  __int64 v168; // rdi
  __int64 v169; // rbx
  __int64 v170; // rax
  __int64 v171; // rdi
  __int64 v172; // rax
  __int64 v173; // rbx
  __int64 v174; // rax
  __int64 v175; // rdi
  __int64 v176; // rbx
  __int64 v177; // rax
  cocos2d::CCObject *v178; // rax
  cocos2d::CCObject *v179; // rcx
  __int64 v180; // rcx
  __int64 v181; // rcx
  __int64 v182; // [rsp+30h] [rbp-D0h] BYREF
  char v183; // [rsp+38h] [rbp-C8h]
  char v184; // [rsp+39h] [rbp-C7h]
  struct cocos2d::CCSprite *v185; // [rsp+40h] [rbp-C0h] BYREF
  void *v186; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v187; // [rsp+50h] [rbp-B0h]
  _BYTE v188[16]; // [rsp+58h] [rbp-A8h] BYREF
  char v189[8]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v190[16]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v191[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v192; // [rsp+90h] [rbp-70h]
  __int64 v193; // [rsp+98h] [rbp-68h]
  _DWORD v194[4]; // [rsp+A0h] [rbp-60h] BYREF

  result = cocos2d::CCNode::init((cocos2d::CCNode *)a1); /*0x15dd33*/
  if ( !result ) /*0x15dd3b*/
    return result; /*0x15dd3b*/
  v15 = *(struct cocos2d::CCObject **)(a1 + 336); /*0x15dd41*/
  if ( v15 != a2 ) /*0x15dd4b*/
  {
    if ( a2 ) /*0x15dd50*/
      cocos2d::CCObject::retain(a2); /*0x15dd55*/
    v16 = *(cocos2d::CCObject **)(a1 + 336); /*0x15dd5b*/
    if ( v16 ) /*0x15dd65*/
      cocos2d::CCObject::release(v16); /*0x15dd67*/
    *(_QWORD *)(a1 + 336) = a2; /*0x15dd6d*/
    v15 = a2; /*0x15dd74*/
  }
  *(_QWORD *)(a1 + 480) = a3; /*0x15dd77*/
  *(_BYTE *)(a1 + 488) = a4; /*0x15dd7e*/
  *(_WORD *)(a1 + 489) = 257; /*0x15dd85*/
  *(_BYTE *)(a1 + 492) = a8; /*0x15dd96*/
  *(_BYTE *)(a1 + 494) = a10; /*0x15dda4*/
  v17 = 0; /*0x15ddab*/
  if ( !v15 ) /*0x15ddb1*/
    goto LABEL_17; /*0x15ddb1*/
  v18 = *((int *)v15 + 19); /*0x15ddb3*/
  if ( (int)v18 <= 0 ) /*0x15ddb9*/
    goto LABEL_17; /*0x15ddb9*/
  v19 = qword_906070; /*0x15ddbb*/
  if ( !qword_906070 ) /*0x15ddc5*/
  {
    v185 = (struct cocos2d::CCSprite *)operator new(0x3D0u); /*0x15ddd1*/
    qword_906070 = sub_47C350(v185); /*0x15dddf*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x15ddf0*/
    v19 = qword_906070; /*0x15ddf2*/
  }
  v20 = *(cocos2d::CCDictionary **)(v19 + 920); /*0x15ddf9*/
  v21 = v20 ? cocos2d::CCDictionary::objectForKey(v20, v18) : 0LL;
  v15 = *(struct cocos2d::CCObject **)(a1 + 336); /*0x15de13*/
  if ( v21 == v15 ) /*0x15de1d*/
    v22 = 1; /*0x15de1f*/
  else
LABEL_17:
    v22 = 0; /*0x15de23*/
  v183 = v22; /*0x15de25*/
  v23 = a9 && v15 && !*((_BYTE *)v15 + 72) && (!*((_DWORD *)v15 + 19) || v22); /*0x15de47*/
  *(_BYTE *)(a1 + 493) = v23; /*0x15de4d*/
  v24 = cocos2d::CCDirector::sharedDirector(v15); /*0x15de54*/
  cocos2d::CCDirector::getWinSize(v24, v189); /*0x15de62*/
  v25 = *(_QWORD *)(a1 + 336); /*0x15de68*/
  if ( v25 && *(_BYTE *)(v25 + 72) ) /*0x15de74*/
  {
    v26 = 1; /*0x15de7a*/
  }
  else
  {
    v26 = 0; /*0x15de7f*/
    if ( !v25 ) /*0x15de85*/
      goto LABEL_34; /*0x15de85*/
  }
  v27 = *(_DWORD *)(v25 + 56); /*0x15de87*/
  if ( v27 > 0 ) /*0x15de8c*/
  {
    v28 = *(_QWORD *)(a1 + 480); /*0x15de8e*/
    if ( v28 ) /*0x15de98*/
    {
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28) == v27 ) /*0x15dea2*/
      {
        v29 = *(_DWORD *)(*(_QWORD *)(a1 + 336) + 76LL); /*0x15deb2*/
        if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 480) + 16LL))(*(_QWORD *)(a1 + 480)) == v29 ) /*0x15debd*/
        {
          v30 = 1; /*0x15debf*/
          goto LABEL_35; /*0x15dec1*/
        }
      }
    }
  }
LABEL_34:
  v30 = 0; /*0x15dec3*/
LABEL_35:
  v184 = v30; /*0x15dec5*/
  v187 = 0; /*0x15dec9*/
  if ( !a8 ) /*0x15dede*/
  {
    v31 = 15; /*0x15dee8*/
    v192 = 15; /*0x15deed*/
    v193 = 15; /*0x15def1*/
    strcpy((char *)v191, "GJ_square01.png"); /*0x15defd*/
    if ( v26 || v30 ) /*0x15df2b*/
    {
      v192 = 15; /*0x15df31*/
      memmove(v191, "GJ_square06.png", 0xFu); /*0x15df42*/
      HIBYTE(v191[1]) = 0; /*0x15df47*/
      v31 = v193; /*0x15df4b*/
    }
    v32 = v191; /*0x15df4f*/
    if ( v31 > 0xF ) /*0x15df57*/
      v32 = (_QWORD *)v191[0]; /*0x15df57*/
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v190, 0.0, 0.0, 80.0, 80.0); /*0x15df72*/
    v34 = (_QWORD *)cocos2d::extension::CCScale9Sprite::create(v32, v33); /*0x15df84*/
    v187 = v34; /*0x15df87*/
    LOBYTE(v35) = -1; /*0x15df97*/
    (*(void (__fastcall **)(_QWORD *, __int64))(v34[40] + 40LL))(v34 + 40, v35); /*0x15dfa0*/
    v36 = *v34; /*0x15dfa3*/
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v185, 320.0, 50.0); /*0x15dfbb*/
    (*(void (__fastcall **)(_QWORD *, __int64))(v36 + 312))(v34, v37); /*0x15dfc7*/
    (*(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v34, 4294967294LL); /*0x15dfdc*/
    sub_3C310(v191); /*0x15dfe7*/
  }
  v38 = (float)(v26 != 0 ? 0x32 : 0);
  v39 = (struct cocos2d::CCSprite *)operator new(0x1C0u); /*0x15e008*/
  v185 = v39; /*0x15e00b*/
  memset(v39, 0, 0x1C0u); /*0x15e01b*/
  cocos2d::CCMenu::CCMenu(v39); /*0x15e023*/
  *(_QWORD *)v39 = &CustomSFXRowMenu::`vftable'; /*0x15e030*/
  *((_QWORD *)v39 + 40) = &CustomSFXRowMenu::`vftable'; /*0x15e03a*/
  *((_QWORD *)v39 + 41) = &CustomSFXRowMenu::`vftable'; /*0x15e048*/
  *((_QWORD *)v39 + 42) = &CustomSFXRowMenu::`vftable'; /*0x15e056*/
  *((_QWORD *)v39 + 43) = &CustomSFXRowMenu::`vftable'; /*0x15e064*/
  *((_QWORD *)v39 + 44) = &CustomSFXRowMenu::`vftable'; /*0x15e072*/
  *((_QWORD *)v39 + 51) = &CustomSFXRowMenu::`vftable'; /*0x15e080*/
  if ( cocos2d::CCMenu::init(v39) ) /*0x15e091*/
  {
    cocos2d::CCObject::autorelease(v39); /*0x15e09a*/
  }
  else
  {
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(*(_QWORD *)v39 + 8LL))(v39, 1); /*0x15e0aa*/
    v39 = 0; /*0x15e0ad*/
  }
  *(_QWORD *)(a1 + 344) = v39; /*0x15e0b0*/
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *))(*(_QWORD *)a1 + 464LL))(a1, v39); /*0x15e0c0*/
  v41 = cocos2d::CCDirector::sharedDirector(v40); /*0x15e0c6*/
  v42 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 144LL))(v41); /*0x15e0d9*/
  if ( cocos2d::CCTouchDispatcher::isUsingForcePrio(v42) ) /*0x15e0de*/
  {
    v44 = cocos2d::CCDirector::sharedDirector(v43); /*0x15e0e8*/
    v45 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v44 + 144LL))(v44); /*0x15e0fb*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 344) + 944LL))( /*0x15e10f*/
      *(_QWORD *)(a1 + 344),
      (unsigned int)(*(_DWORD *)(v45 + 128) - 1));
  }
  *(_QWORD *)(a1 + 352) = cocos2d::CCLabelBMFont::create("SFX Title", (const char *)&qword_6FFF68); /*0x15e129*/
  v46 = cocos2d::CCLabelBMFont::create("SFX ID", "chatFont.fnt"); /*0x15e13e*/
  *(_QWORD *)(a1 + 360) = v46; /*0x15e144*/
  v47 = &unk_6FDF6C; /*0x15e159*/
  if ( v26 ) /*0x15e163*/
    v47 = &unk_6FDF70; /*0x15e163*/
  (**((void (__fastcall ***)(__int64, void *))v46 + 46))((__int64)v46 + 368, v47); /*0x15e16a*/
  LOBYTE(v48) = -56; /*0x15e17d*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 360) + 368LL) + 40LL))( /*0x15e17f*/
    *(_QWORD *)(a1 + 360) + 368LL,
    v48);
  v49 = cocos2d::CCLabelBMFont::create("Error", (const char *)&qword_6FFF68); /*0x15e190*/
  *(_QWORD *)(a1 + 368) = v49; /*0x15e196*/
  LOWORD(v182) = 13055; /*0x15e1a9*/
  BYTE2(v182) = 25; /*0x15e1ae*/
  (**((void (__fastcall ***)(__int64, __int64 *))v49 + 46))((__int64)v49 + 368, &v182); /*0x15e1c2*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 368) + 336LL))(*(_QWORD *)(a1 + 368), 0); /*0x15e1d0*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 464LL))(a1, *(_QWORD *)(a1 + 352)); /*0x15e1e3*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 464LL))(a1, *(_QWORD *)(a1 + 360)); /*0x15e1f6*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 464LL))(a1, *(_QWORD *)(a1 + 368)); /*0x15e209*/
  v50 = **(_QWORD **)(a1 + 352); /*0x15e216*/
  v51 = *(_QWORD *)(a1 + 352); /*0x15e219*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v185, 0.0, 0.5); /*0x15e231*/
  (*(void (__fastcall **)(__int64, __int64))(v50 + 288))(v51, v52); /*0x15e23d*/
  v53 = **(_QWORD **)(a1 + 368); /*0x15e24a*/
  v54 = *(_QWORD *)(a1 + 368); /*0x15e24d*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v185, 0.0, 0.5); /*0x15e25c*/
  (*(void (__fastcall **)(__int64, __int64))(v53 + 288))(v54, v55); /*0x15e268*/
  v56 = **(_QWORD **)(a1 + 360); /*0x15e275*/
  v57 = *(_QWORD *)(a1 + 360); /*0x15e278*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v185, 0.0, 0.5); /*0x15e287*/
  (*(void (__fastcall **)(__int64, __int64))(v56 + 288))(v57, v58); /*0x15e293*/
  v59 = **(_QWORD **)(a1 + 352); /*0x15e2a0*/
  v60 = *(_QWORD *)(a1 + 352); /*0x15e2ac*/
  if ( a8 ) /*0x15e2b7*/
  {
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v185, -160.0, 0.0); /*0x15e39d*/
  }
  else
  {
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v185, v38 - 150.0, 9.0); /*0x15e2d0*/
    (*(void (__fastcall **)(__int64, __int64))(v59 + 184))(v60, v61); /*0x15e2dc*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v185, 1.0, -18.0); /*0x15e2f7*/
    v63 = v62; /*0x15e2fd*/
    v64 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 352) + 200LL))(*(_QWORD *)(a1 + 352)); /*0x15e314*/
    cocos2d::CCPoint::operator+(v64, &v182, v63); /*0x15e321*/
    (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 368) + 184LL))(*(_QWORD *)(a1 + 368), &v182); /*0x15e336*/
    v59 = **(_QWORD **)(a1 + 360); /*0x15e343*/
    v60 = *(_QWORD *)(a1 + 360); /*0x15e346*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v185, v38 - 149.0, -9.0); /*0x15e361*/
  }
  (*(void (__fastcall **)(__int64, __int64))(v59 + 184))(v60, v65); /*0x15e36d*/
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 360) + 160LL))(*(_QWORD *)(a1 + 360)); /*0x15e381*/
  v66 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_downloadBtn_001.png"); /*0x15e3e3*/
  v67 = (int)v66; /*0x15e3e9*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v66 + 160LL))(v66); /*0x15e3fd*/
  v68 = CCMenuItemSpriteExtra_create(v67, 0, a1, (__int64)CustomSFXWidget_onDownload); /*0x15e40e*/
  *(_QWORD *)(a1 + 376) = v68; /*0x15e413*/
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 344) + 464LL))(*(_QWORD *)(a1 + 344), v68); /*0x15e431*/
  *(_DWORD *)(*(_QWORD *)(a1 + 376) + 372LL) = 1066192077; /*0x15e43b*/
  v69 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_cancelDownloadBtn_001.png"); /*0x15e44c*/
  v70 = (int)v69; /*0x15e452*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v69 + 160LL))(v69); /*0x15e466*/
  v71 = CCMenuItemSpriteExtra_create(v70, 0, a1, (__int64)sub_15F860); /*0x15e477*/
  *(_QWORD *)(a1 + 384) = v71; /*0x15e47c*/
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 344) + 464LL))(*(_QWORD *)(a1 + 344), v71); /*0x15e49a*/
  *(_DWORD *)(*(_QWORD *)(a1 + 384) + 372LL) = 1066192077; /*0x15e4a4*/
  v72 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_trashBtn_001.png"); /*0x15e4b5*/
  v73 = (int)v72; /*0x15e4bb*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v72 + 160LL))(v72); /*0x15e4cf*/
  v74 = CCMenuItemSpriteExtra_create(v73, 0, a1, (__int64)sub_15F2E0); /*0x15e4e0*/
  *(_QWORD *)(a1 + 408) = v74; /*0x15e4e5*/
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 344) + 464LL))(*(_QWORD *)(a1 + 344), v74); /*0x15e503*/
  *(_DWORD *)(*(_QWORD *)(a1 + 408) + 372LL) = 1067030938; /*0x15e50d*/
  v75 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_selectSongBtn_001.png"); /*0x15e51e*/
  v76 = (int)v75; /*0x15e524*/
  v185 = v75; /*0x15e527*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v75 + 160LL))(v75); /*0x15e53d*/
  v77 = CCMenuItemSpriteExtra_create(v76, 0, a1, (__int64)CustomSFXWidget_onSelect); /*0x15e54e*/
  *(_QWORD *)(a1 + 392) = v77; /*0x15e553*/
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 344) + 464LL))(*(_QWORD *)(a1 + 344), v77); /*0x15e571*/
  *(_DWORD *)(*(_QWORD *)(a1 + 392) + 372LL) = 1067030938; /*0x15e57b*/
  v78 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_playMusicBtn_001.png"); /*0x15e58c*/
  v79 = (int)v78; /*0x15e592*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v78 + 160LL))(v78); /*0x15e5a6*/
  v80 = CCMenuItemSpriteExtra_create(v79, 0, a1, (__int64)sub_15FCF0); /*0x15e5b7*/
  *(_QWORD *)(a1 + 400) = v80; /*0x15e5bc*/
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 344) + 464LL))(*(_QWORD *)(a1 + 344), v80); /*0x15e5da*/
  v182 = **(_QWORD **)(a1 + 376); /*0x15e5e7*/
  v81 = *(_QWORD *)(a1 + 344); /*0x15e5ec*/
  v82 = *(_QWORD *)(a1 + 376); /*0x15e5f3*/
  if ( a8 ) /*0x15e600*/
  {
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v186, 155.0, 0.0); /*0x15e69b*/
    cocos2d::CCNode::convertToNodeSpace(v81, v188, v90); /*0x15e6ac*/
    (*(void (__fastcall **)(__int64, __int64))(v182 + 184))(v82, v91); /*0x15e6bd*/
    v92 = **(_QWORD **)(a1 + 400); /*0x15e6ca*/
    v93 = *(_QWORD *)(a1 + 400); /*0x15e6d4*/
    v94 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 376) + 200LL))(*(_QWORD *)(a1 + 376)); /*0x15e6da*/
    (*(void (__fastcall **)(__int64, __int64))(v92 + 184))(v93, v94); /*0x15e6e6*/
  }
  else
  {
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v188, 141.0, 0.0); /*0x15e616*/
    cocos2d::CCNode::convertToNodeSpace(v81, &v186, v83); /*0x15e627*/
    (*(void (__fastcall **)(__int64, __int64))(v182 + 184))(v82, v84); /*0x15e638*/
    v85 = **(_QWORD **)(a1 + 400); /*0x15e645*/
    v86 = *(_QWORD *)(a1 + 344); /*0x15e648*/
    v87 = *(_QWORD *)(a1 + 400); /*0x15e64f*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v186, 141.0, 1.0); /*0x15e662*/
    cocos2d::CCNode::convertToNodeSpace(v86, v188, v88); /*0x15e673*/
    (*(void (__fastcall **)(__int64, __int64))(v85 + 184))(v87, v89); /*0x15e67f*/
  }
  v95 = **(_QWORD **)(a1 + 384); /*0x15e6f3*/
  v96 = *(_QWORD *)(a1 + 384); /*0x15e6fd*/
  v97 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 376) + 200LL))(*(_QWORD *)(a1 + 376)); /*0x15e703*/
  (*(void (__fastcall **)(__int64, __int64))(v95 + 184))(v96, v97); /*0x15e70f*/
  v98 = -(float)(8 * (a8 ^ 1) + 20); /*0x15e715*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v186, v98 + v98, 0.0); /*0x15e732*/
  v100 = v99; /*0x15e738*/
  v101 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 376) + 200LL))(*(_QWORD *)(a1 + 376)); /*0x15e74f*/
  cocos2d::CCPoint::operator+(v101, &v182, v100); /*0x15e75c*/
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 408) + 184LL))(*(_QWORD *)(a1 + 408), &v182); /*0x15e771*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v186, v98, 0.0); /*0x15e783*/
  v103 = v102; /*0x15e789*/
  v104 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 376) + 200LL))(*(_QWORD *)(a1 + 376)); /*0x15e7a0*/
  cocos2d::CCPoint::operator+(v104, &v182, v103); /*0x15e7ad*/
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 392) + 184LL))(*(_QWORD *)(a1 + 392), &v182); /*0x15e7c2*/
  if ( !v26 ) /*0x15e7cb*/
  {
    v105 = *(_QWORD *)(a1 + 480); /*0x15e7d1*/
    if ( v105 ) /*0x15e7db*/
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v105 + 72LL))(v105) ) /*0x15e7e4*/
      {
        v106 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_infoIcon_001.png"); /*0x15e7fc*/
        v107 = *(_QWORD *)v106; /*0x15e7ff*/
        (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 360) + 320LL))(*(_QWORD *)(a1 + 360)); /*0x15e816*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 360) + 168LL))(*(_QWORD *)(a1 + 360)); /*0x15e831*/
        (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v106 + 320LL))(v106); /*0x15e848*/
        (*(void (__fastcall **)(struct cocos2d::CCSprite *))(v107 + 160))(v106); /*0x15e859*/
        v108 = CCMenuItemSpriteExtra_create((int)v106, 0, a1, (__int64)sub_160C00); /*0x15e86e*/
        *(_QWORD *)(a1 + 448) = v108; /*0x15e873*/
        (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 344) + 464LL))( /*0x15e891*/
          *(_QWORD *)(a1 + 344),
          v108);
        *(_DWORD *)(*(_QWORD *)(a1 + 448) + 372LL) = 1068708659; /*0x15e89b*/
      }
    }
  }
  if ( *(_BYTE *)(a1 + 493) ) /*0x15e8a5*/
  {
    v109 = cocos2d::CCSprite::createWithSpriteFrameName("gj_heartOff_001.png"); /*0x15e8ba*/
    v110 = (int)v109; /*0x15e8c0*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v109 + 160LL))(v109); /*0x15e8dc*/
    v111 = CCMenuItemSpriteExtra_create(v110, 0, a1, (__int64)InfoLayer_onCopyLevelID); /*0x15e8f1*/
    *(_QWORD *)(a1 + 416) = v111; /*0x15e8f6*/
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 344) + 464LL))(*(_QWORD *)(a1 + 344), v111); /*0x15e914*/
    *(_DWORD *)(*(_QWORD *)(a1 + 416) + 372LL) = 1067030938; /*0x15e91e*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v186, v98 + v98, 0.0); /*0x15e934*/
    v113 = v112; /*0x15e93a*/
    v114 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 376) + 200LL))(*(_QWORD *)(a1 + 376)); /*0x15e951*/
    cocos2d::CCPoint::operator+(v114, &v182, v113); /*0x15e95e*/
    (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 416) + 184LL))(*(_QWORD *)(a1 + 416), &v182); /*0x15e973*/
  }
  if ( !*(_BYTE *)(a1 + 494) || !*(_QWORD *)(a1 + 336) ) /*0x15e98f*/
  {
LABEL_69:
    if ( !v26 ) /*0x15ebc4*/
      goto LABEL_80; /*0x15ebc4*/
    goto LABEL_70; /*0x15ebc4*/
  }
  if ( v183 ) /*0x15e9a2*/
  {
    LODWORD(v182) = (*(_BYTE *)(a1 + 493) != 0) + 2; /*0x15e9b8*/
    v115 = cocos2d::CCSprite::createWithSpriteFrameName("sideBtn_options_001.png"); /*0x15e9c9*/
    v116 = *(_QWORD *)v115; /*0x15e9cc*/
    (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v185 + 320LL))(v185); /*0x15e9e1*/
    (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v115 + 320LL))(v115); /*0x15e9f6*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(v116 + 160))(v115); /*0x15ea05*/
    v117 = CCMenuItemSpriteExtra_create((int)v115, 0, a1, (__int64)sub_15FC90); /*0x15ea1a*/
    *(_QWORD *)(a1 + 432) = v117; /*0x15ea1f*/
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 344) + 464LL))(*(_QWORD *)(a1 + 344), v117); /*0x15ea3d*/
    *(_DWORD *)(*(_QWORD *)(a1 + 432) + 372LL) = 1067030938; /*0x15ea47*/
    v118 = v182; /*0x15ea51*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v186, (float)(int)v182 * v98, 0.0); /*0x15ea69*/
    v120 = v119; /*0x15ea6f*/
    v121 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 376) + 200LL))(*(_QWORD *)(a1 + 376)); /*0x15ea86*/
    cocos2d::CCPoint::operator+(v121, &v185, v120); /*0x15ea93*/
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite **))(**(_QWORD **)(a1 + 432) + 184LL))( /*0x15eaa8*/
      *(_QWORD *)(a1 + 432),
      &v185);
    v122 = *(_QWORD *)(a1 + 480); /*0x15eaae*/
    if ( v122 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v122 + 64LL))(v122) ) /*0x15eac1*/
    {
      v123 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 480) + 56LL))( /*0x15eae0*/
               *(_QWORD *)(a1 + 480),
               *(unsigned int *)(*(_QWORD *)(a1 + 336) + 76LL));
      v124 = "GJ_checkOff_001.png"; /*0x15eaea*/
      if ( v123 ) /*0x15eaf3*/
        v124 = "GJ_checkOn_001.png"; /*0x15eaf3*/
      v125 = cocos2d::CCSprite::createWithSpriteFrameName(v124); /*0x15eaf7*/
      v126 = (int)v125; /*0x15eafd*/
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v125 + 160LL))(v125); /*0x15eb19*/
      v127 = CCMenuItemSpriteExtra_create(v126, 0, a1, (__int64)CustomSongWidget_onSelect); /*0x15eb2e*/
      *(_QWORD *)(a1 + 440) = v127; /*0x15eb33*/
      (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 344) + 464LL))( /*0x15eb51*/
        *(_QWORD *)(a1 + 344),
        v127);
      *(_DWORD *)(*(_QWORD *)(a1 + 440) + 372LL) = 1067030938; /*0x15eb5b*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v186, (float)(v118 + 1) * v98, 0.0); /*0x15eb7c*/
      v129 = v128; /*0x15eb82*/
      v130 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 376) + 200LL))(*(_QWORD *)(a1 + 376)); /*0x15eb99*/
      cocos2d::CCPoint::operator+(v130, &v185, v129); /*0x15eba6*/
      (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite **))(**(_QWORD **)(a1 + 440) + 184LL))( /*0x15ebbb*/
        *(_QWORD *)(a1 + 440),
        &v185);
    }
    goto LABEL_69; /*0x15ebbb*/
  }
  if ( !v26 ) /*0x15ec5f*/
  {
    v137 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_plusBtn_001.png"); /*0x15ec6c*/
    v138 = (int)v137; /*0x15ec72*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v137 + 160LL))(v137); /*0x15ec92*/
    v139 = CCMenuItemSpriteExtra_create(v138, 0, a1, (__int64)sub_15FC70); /*0x15eca7*/
    *(_QWORD *)(a1 + 424) = v139; /*0x15ecac*/
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 344) + 464LL))(*(_QWORD *)(a1 + 344), v139); /*0x15ecca*/
    *(_DWORD *)(*(_QWORD *)(a1 + 424) + 372LL) = 1067030938; /*0x15ecd4*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v186, v98 * 3.0, 0.0); /*0x15ecf3*/
    v141 = v140; /*0x15ecf9*/
    v142 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 376) + 200LL))(*(_QWORD *)(a1 + 376)); /*0x15ed10*/
    cocos2d::CCPoint::operator+(v142, &v185, v141); /*0x15ed1d*/
    v143 = *(_QWORD *)(a1 + 424); /*0x15ed23*/
LABEL_79:
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite **))(*(_QWORD *)v143 + 184LL))(v143, &v185); /*0x15ee72*/
    goto LABEL_80; /*0x15ee7a*/
  }
LABEL_70:
  v131 = cocos2d::CCSprite::createWithSpriteFrameName("folderIcon_001.png"); /*0x15ebca*/
  v132 = (int)v131; /*0x15ebd7*/
  if ( *(_BYTE *)(a1 + 492) ) /*0x15ebda*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v131 + 160LL))(v131); /*0x15ebf5*/
  v133 = CCMenuItemSpriteExtra_create(v132, 0, a1, (__int64)CustomSFXWidget_onSelect); /*0x15ec0b*/
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 344) + 464LL))(*(_QWORD *)(a1 + 344), v133); /*0x15ec25*/
  v134 = *(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v133 + 184LL); /*0x15ec2b*/
  v135 = *(_QWORD *)(a1 + 344); /*0x15ec32*/
  if ( *(_BYTE *)(a1 + 492) ) /*0x15ec41*/
    v136 = -150.0; /*0x15ec4f*/
  else
    v136 = -130.0; /*0x15ed2f*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v186, v136, 2.0); /*0x15ed37*/
  cocos2d::CCNode::convertToNodeSpace(v135, v188, v144); /*0x15ed48*/
  v134(v133, v145); /*0x15ed54*/
  v146 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_arrow_01_001.png"); /*0x15ed63*/
  cocos2d::CCSprite::setFlipX(v146, 1); /*0x15ed6b*/
  (*(void (__fastcall **)(cocos2d::CCSprite *))(*(_QWORD *)v146 + 160LL))(v146); /*0x15ed8f*/
  v147 = CCMenuItemSpriteExtra_create((int)v146, 0, a1, (__int64)CustomSFXWidget_onSelect); /*0x15eda9*/
  *((_DWORD *)v147 + 93) = 1067030938; /*0x15edac*/
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 344) + 464LL))(*(_QWORD *)(a1 + 344), v147); /*0x15edcd*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v186, 0.0, 1.0); /*0x15ede0*/
  v149 = v148; /*0x15ede6*/
  v150 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 376) + 200LL))(*(_QWORD *)(a1 + 376)); /*0x15edfd*/
  cocos2d::CCPoint::operator+(v150, &v185, v149); /*0x15ee0a*/
  (*(void (__fastcall **)(cocos2d::CCObject *, struct cocos2d::CCSprite **))(*(_QWORD *)v147 + 184LL))(v147, &v185); /*0x15ee1b*/
  if ( *(_BYTE *)(a1 + 492) ) /*0x15ee21*/
  {
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v186, 28.0, 0.0); /*0x15ee3b*/
    v152 = v151; /*0x15ee41*/
    v153 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 352) + 200LL))(*(_QWORD *)(a1 + 352)); /*0x15ee58*/
    cocos2d::CCPoint::operator+(v153, &v185, v152); /*0x15ee65*/
    v143 = *(_QWORD *)(a1 + 352); /*0x15ee6b*/
    goto LABEL_79; /*0x15ee6b*/
  }
LABEL_80:
  v154 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_timeIcon_001.png"); /*0x15ee80*/
  *(_QWORD *)(a1 + 472) = v154; /*0x15ee90*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v154 + 160LL))(v154); /*0x15eeb6*/
  LOBYTE(v155) = -106; /*0x15eecd*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 472) + 320LL) + 40LL))( /*0x15eecf*/
    *(_QWORD *)(a1 + 472) + 320LL,
    v155);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 472) + 336LL))(*(_QWORD *)(a1 + 472), 0); /*0x15eede*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 464LL))(a1, *(_QWORD *)(a1 + 472)); /*0x15eef1*/
  v156 = v187; /*0x15eef7*/
  if ( v187 && (v26 || v184) ) /*0x15ef0f*/
  {
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v188, 0.0, 0.0, 80.0, 80.0); /*0x15ef2b*/
    v158 = (__int64 *)cocos2d::extension::CCScale9Sprite::create("GJ_square07.png", v157); /*0x15ef41*/
    v159 = *v158; /*0x15ef44*/
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v186, 320.0, 50.0); /*0x15ef5c*/
    (*(void (__fastcall **)(__int64 *, __int64))(v159 + 312))(v158, v160); /*0x15ef68*/
    (*(void (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v158, 0xFFFFFFFFLL); /*0x15ef84*/
    v161 = *(void (__fastcall **)(_QWORD *, __int64 *))v156[40]; /*0x15ef91*/
    if ( v26 ) /*0x15ef9c*/
    {
      LOWORD(v182) = -28202; /*0x15ef9e*/
      BYTE2(v182) = 96; /*0x15efa5*/
    }
    else
    {
      LOWORD(v182) = -19713; /*0x15efac*/
      BYTE2(v182) = 61; /*0x15efb3*/
    }
    v161(v156 + 40, &v182); /*0x15efc2*/
  }
  v162 = cocos2d::CCSprite::create("slidergroove.png"); /*0x15efcc*/
  *(_QWORD *)(a1 + 456) = v162; /*0x15efd2*/
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v162, 3); /*0x15efef*/
  v163 = cocos2d::CCSprite::create("sliderBar.png"); /*0x15eff9*/
  *(_QWORD *)(a1 + 464) = v163; /*0x15efff*/
  v194[0] = 9729; /*0x15f006*/
  v194[1] = 9729; /*0x15f00d*/
  v194[2] = 10497; /*0x15f014*/
  v194[3] = 10497; /*0x15f01b*/
  v164 = (cocos2d::CCTexture2D *)(*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v163 + 43) + 16LL))((__int64)v163 + 344); /*0x15f02c*/
  cocos2d::CCTexture2D::setTexParameters(v164, (struct cocos2d::_ccTexParams *)v194); /*0x15f036*/
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 456) + 456LL))( /*0x15f053*/
    *(_QWORD *)(a1 + 456),
    *(_QWORD *)(a1 + 464),
    0xFFFFFFFFLL);
  v165 = **(_QWORD **)(a1 + 464); /*0x15f060*/
  v166 = *(_QWORD *)(a1 + 464); /*0x15f063*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v186, 0.0, 0.0); /*0x15f071*/
  (*(void (__fastcall **)(__int64, __int64))(v165 + 288))(v166, v167); /*0x15f07d*/
  v168 = **(_QWORD **)(a1 + 464); /*0x15f08a*/
  v169 = *(_QWORD *)(a1 + 464); /*0x15f08d*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v186, 2.0, 4.0); /*0x15f0a3*/
  (*(void (__fastcall **)(__int64, __int64))(v168 + 184))(v169, v170); /*0x15f0af*/
  v171 = **(_QWORD **)(a1 + 456); /*0x15f0bc*/
  v172 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 368) + 200LL))(*(_QWORD *)(a1 + 368)); /*0x15f0c9*/
  v173 = *(_QWORD *)(a1 + 456); /*0x15f0cf*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v186, 0.0, *(float *)(v172 + 4)); /*0x15f0e3*/
  (*(void (__fastcall **)(__int64, __int64))(v171 + 184))(v173, v174); /*0x15f0ef*/
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 456) + 136LL))(*(_QWORD *)(a1 + 456)); /*0x15f107*/
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 456) + 120LL))(*(_QWORD *)(a1 + 456)); /*0x15f11b*/
  v175 = **(_QWORD **)(a1 + 464); /*0x15f138*/
  v176 = *(_QWORD *)(a1 + 464); /*0x15f13b*/
  cocos2d::CCRect::CCRect( /*0x15f163*/
    (cocos2d::CCRect *)v190,
    0.0,
    0.0,
    fminf(
      *(float *)(*(_QWORD *)(a1 + 456) + 432LL) - 4.0,
      (float)(*(float *)(*(_QWORD *)(a1 + 456) + 432LL) - 4.0) * 0.0),
    8.0);
  (*(void (__fastcall **)(__int64, __int64))(v175 + 992))(v176, v177); /*0x15f16f*/
  sub_15F7C0(a1); /*0x15f178*/
  if ( !a2 ) /*0x15f180*/
    goto LABEL_95; /*0x15f180*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 368) + 336LL))(*(_QWORD *)(a1 + 368), 0); /*0x15f18e*/
  v178 = *(cocos2d::CCObject **)(a1 + 336); /*0x15f194*/
  if ( v178 != a2 ) /*0x15f19e*/
  {
    cocos2d::CCObject::retain(a2); /*0x15f1a3*/
    v179 = *(cocos2d::CCObject **)(a1 + 336); /*0x15f1a9*/
    if ( v179 ) /*0x15f1b3*/
      cocos2d::CCObject::release(v179); /*0x15f1b5*/
    *(_QWORD *)(a1 + 336) = a2; /*0x15f1bb*/
    goto LABEL_93; /*0x15f1c2*/
  }
  a2 = *(cocos2d::CCObject **)(a1 + 336); /*0x15f1c4*/
  if ( v178 ) /*0x15f1ca*/
LABEL_93:
    v17 = *((_DWORD *)a2 + 14); /*0x15f1cc*/
  *(_DWORD *)(a1 + 496) = v17; /*0x15f1d0*/
LABEL_95:
  sub_1600C0(a1); /*0x15f1d7*/
  v180 = qword_906070; /*0x15f1df*/
  if ( !qword_906070 ) /*0x15f1e9*/
  {
    v186 = operator new(0x3D0u); /*0x15f1f5*/
    qword_906070 = sub_47C350(v186); /*0x15f203*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x15f214*/
    v180 = qword_906070; /*0x15f217*/
  }
  MusicDownloadManager_addMusicDownloadDelegate(v180, a1 + 320); /*0x15f225*/
  if ( *(_DWORD *)(a1 + 496) ) /*0x15f22a*/
  {
    v181 = qword_906070; /*0x15f234*/
    if ( !qword_906070 ) /*0x15f23e*/
    {
      v186 = operator new(0x3D0u); /*0x15f24a*/
      qword_906070 = sub_47C350(v186); /*0x15f258*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x15f265*/
      v181 = qword_906070; /*0x15f268*/
    }
    if ( MusicDownloadManager_isRunningActionForSongID(v181, *(_DWORD *)(a1 + 496)) ) /*0x15f276*/
      sub_15FA80(a1); /*0x15f282*/
  }
  return 1; /*0x15f289*/
}

// [3/4] Address: 0x572e10
// Method: SecretNumberLayer::~SecretNumberLayer
cocos2d::CCLayer *__fastcall SecretNumberLayer__dtor_SecretNumberLayer(cocos2d::CCLayer *Block, char a2)
{
  *(_QWORD *)Block = &SecretNumberLayer::`vftable'; /*0x572e23*/
  *((_QWORD *)Block + 40) = &SecretNumberLayer::`vftable'; /*0x572e30*/
  *((_QWORD *)Block + 41) = &SecretNumberLayer::`vftable'; /*0x572e3e*/
  *((_QWORD *)Block + 42) = &SecretNumberLayer::`vftable'; /*0x572e4c*/
  *((_QWORD *)Block + 43) = &SecretNumberLayer::`vftable'; /*0x572e5a*/
  *((_QWORD *)Block + 44) = &SecretNumberLayer::`vftable'; /*0x572e68*/
  cocos2d::CCLayer::~CCLayer(Block); /*0x572e6f*/
  if ( (a2 & 1) != 0 ) /*0x572e78*/
    j_j_free(Block); /*0x572e82*/
  return Block; /*0x572e87*/
}

// [4/4] Address: 0x57a7f0
// Method: SecretNumberLayer::create
// Hidden C++ exception states: #wind=1
cocos2d::CCLayer *SecretNumberLayer_create()
{
  cocos2d::CCLayer *v0; // rbx

  v0 = (cocos2d::CCLayer *)operator new(0x198u); /*0x57a800*/
  cocos2d::CCLayer::CCLayer(v0); /*0x57a80b*/
  *(_QWORD *)v0 = &SecretNumberLayer::`vftable'; /*0x57a818*/
  *((_QWORD *)v0 + 40) = &SecretNumberLayer::`vftable'; /*0x57a822*/
  *((_QWORD *)v0 + 41) = &SecretNumberLayer::`vftable'; /*0x57a830*/
  *((_QWORD *)v0 + 42) = &SecretNumberLayer::`vftable'; /*0x57a83e*/
  *((_QWORD *)v0 + 43) = &SecretNumberLayer::`vftable'; /*0x57a84c*/
  *((_QWORD *)v0 + 44) = &SecretNumberLayer::`vftable'; /*0x57a85a*/
  if ( cocos2d::CCLayer::init(v0) ) /*0x57a877*/
  {
    cocos2d::CCObject::autorelease(v0); /*0x57a888*/
    return v0; /*0x57a88e*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCLayer *, __int64))(*(_QWORD *)v0 + 8LL))(v0, 1); /*0x57a89f*/
    return 0; /*0x57a8a2*/
  }
}
