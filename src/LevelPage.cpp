#include <Geode/binding/LevelPage.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x43f010
// Method: LevelPage::init
bool __fastcall LevelPage_init(__int64 *a1, __int64 a2)
{
  bool result; // al
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  cocos2d::CCObject *v9; // rax
  __int64 v10; // rcx
  cocos2d::CCObject *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 *v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 *v24; // rdi
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // r13
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 *v32; // r14
  float *v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  struct cocos2d::CCObject *v38; // r14
  __int64 v39; // rdx
  void (__fastcall *v40)(char *, __int64); // r8
  __int64 v41; // rbx
  __int64 v42; // rax
  struct cocos2d::CCSprite *v43; // rax
  __int64 v44; // rdx
  float v45; // xmm6_4
  __int64 *v46; // rdi
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rax
  void (__fastcall *v51)(__int64, __int64); // rbx
  __int64 v52; // rax
  struct cocos2d::CCObject *v53; // rsi
  __int64 v54; // rdx
  void (__fastcall *v55)(char *, __int64); // r9
  __int64 v56; // rax
  __int64 v57; // rbx
  __int64 v58; // rax
  struct cocos2d::CCSprite *v59; // rax
  void (__fastcall ***v60)(_QWORD, __int16 *); // rcx
  __int64 *v61; // rdi
  __int64 v62; // rbx
  __int64 v63; // rax
  __int64 *v64; // rdi
  __int64 v65; // rbx
  __int64 v66; // rax
  struct cocos2d::CCLabelBMFont *v67; // rax
  __int64 v68; // rcx
  __int64 *v69; // rdi
  __int64 v70; // rbx
  __int64 v71; // rax
  struct cocos2d::CCLabelBMFont *v72; // rax
  __int64 v73; // rcx
  __int64 *v74; // rdi
  __int64 v75; // rbx
  __int64 v76; // rax
  struct cocos2d::CCObject *v77; // rdi
  __int64 v78; // rax
  __int64 v79; // rbx
  __int64 v80; // rax
  struct cocos2d::CCObject *v81; // rdi
  __int64 v82; // rax
  __int64 v83; // rbx
  __int64 v84; // rax
  struct cocos2d::CCLabelBMFont *v85; // rax
  struct cocos2d::CCLabelBMFont *v86; // rdi
  __int64 v87; // rbx
  __int64 v88; // rax
  struct cocos2d::CCSprite *v89; // rax
  __int64 v90; // rcx
  struct cocos2d::CCSprite *v91; // rax
  __int64 v92; // rcx
  __int64 *v93; // rdi
  __int64 v94; // rbx
  __int64 v95; // rax
  struct cocos2d::CCLabelBMFont *v96; // rax
  __int64 v97; // rcx
  __int64 *v98; // rdi
  __int64 v99; // rbx
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rbx
  __int64 v103; // rax
  __int64 v104; // rcx
  cocos2d::CCObject *v105; // rax
  int i; // edi
  struct cocos2d::CCObject *v107; // rbx
  __int64 v108; // rax
  __int64 v109; // rcx
  cocos2d::CCObject *v110; // rax
  __int64 v111; // rcx
  struct cocos2d::CCObject *v112; // rdi
  __int64 v113; // rax
  __int64 v114; // rbx
  __int64 v115; // rax
  _BYTE v116[8]; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v117[24]; // [rsp+38h] [rbp-21h] BYREF
  __int64 v118; // [rsp+C8h] [rbp+6Fh] BYREF
  __int16 v119; // [rsp+D0h] [rbp+77h] BYREF
  char v120; // [rsp+D2h] [rbp+79h]
  float v121; // [rsp+D8h] [rbp+7Fh] BYREF
  float v122; // [rsp+DCh] [rbp+83h]

  v118 = a2; /*0x43f010*/
  result = cocos2d::CCLayer::init((cocos2d::CCLayer *)a1); /*0x43f027*/
  if ( result ) /*0x43f02f*/
  {
    LOBYTE(v4) = 1; /*0x43f040*/
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 920))(a1, v4); /*0x43f086*/
    v6 = cocos2d::CCDirector::sharedDirector(v5); /*0x43f08c*/
    cocos2d::CCDirector::getWinSize(v6, &v121); /*0x43f099*/
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v119, 340.0, 95.0); /*0x43f0b3*/
    cocos2d::CCSize::operator=(a1 + 65, v7); /*0x43f0c4*/
    v9 = (cocos2d::CCObject *)cocos2d::CCArray::create(v8); /*0x43f0ca*/
    a1[69] = (__int64)v9; /*0x43f0d3*/
    cocos2d::CCObject::retain(v9); /*0x43f0db*/
    v11 = (cocos2d::CCObject *)cocos2d::CCArray::create(v10); /*0x43f0e1*/
    a1[68] = (__int64)v11; /*0x43f0ea*/
    cocos2d::CCObject::retain(v11); /*0x43f0f2*/
    v16 = cocos2d::CCMenu::create(v13, v12, v14, v15); /*0x43f0f8*/
    v17 = *a1; /*0x43f0fe*/
    a1[54] = v16; /*0x43f10b*/
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(v17 + 456))(a1, v16, 0xFFFFFFFFLL); /*0x43f11d*/
    v18 = (__int64 *)a1[54]; /*0x43f13a*/
    v19 = *v18; /*0x43f14c*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v119, v121 * 0.5, (float)(v122 * 0.5) + 60.0); /*0x43f157*/
    (*(void (__fastcall **)(__int64 *, __int64))(v19 + 184))(v18, v20); /*0x43f163*/
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v117, 0.0, 0.0, 80.0, 80.0); /*0x43f181*/
    v22 = cocos2d::extension::CCScale9Sprite::create("square02_001.png", v21); /*0x43f191*/
    a1[55] = v22; /*0x43f197*/
    LOBYTE(v23) = 125; /*0x43f19f*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v22 + 320) + 40LL))(v22 + 320, v23); /*0x43f1ab*/
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1[55] + 312LL))(a1[55], a1 + 65); /*0x43f1c1*/
    v24 = (__int64 *)a1[55]; /*0x43f1d8*/
    v25 = *v24; /*0x43f1ea*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v119, v121 * 0.5, (float)(v122 * 0.5) + 50.0); /*0x43f1f5*/
    (*(void (__fastcall **)(__int64 *, __int64))(v25 + 184))(v24, v26); /*0x43f201*/
    v27 = cocos2d::CCSprite::create(); /*0x43f215*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 464LL))(v27, a1[55]); /*0x43f225*/
    v28 = *(_QWORD *)v27; /*0x43f230*/
    v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1[55] + 320LL))(a1[55]); /*0x43f237*/
    (*(void (__fastcall **)(__int64, __int64))(v28 + 312))(v27, v29); /*0x43f243*/
    v30 = a1[55]; /*0x43f249*/
    v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 320LL))(v30); /*0x43f257*/
    v32 = (__int64 *)a1[55]; /*0x43f25d*/
    v33 = (float *)v31; /*0x43f26b*/
    v34 = *v32; /*0x43f26e*/
    v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 320LL))(v30); /*0x43f271*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v119, *v33 * 0.5, *(float *)(v35 + 4) * 0.5); /*0x43f28e*/
    (*(void (__fastcall **)(__int64 *, __int64))(v34 + 184))(v32, v36); /*0x43f29a*/
    v37 = CCMenuItemSpriteExtra_create(v27, 0, a1, LevelPage_onPlay); /*0x43f2af*/
    *(_DWORD *)(v37 + 400) = 1066192077; /*0x43f2b4*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1[54] + 464LL))(a1[54], v37); /*0x43f2d3*/
    cocos2d::CCArray::addObject((cocos2d::CCArray *)a1[69], (struct cocos2d::CCObject *)a1[54]); /*0x43f2e6*/
    LOWORD(v118) = 0; /*0x43f2fa*/
    BYTE2(v118) = 0; /*0x43f305*/
    v38 = cocos2d::CCSprite::create("GJ_progressBar_001.png"); /*0x43f30e*/
    (**((void (__fastcall ***)(__int64, __int64 *))v38 + 40))((__int64)v38 + 320, &v118); /*0x43f326*/
    v39 = *((_QWORD *)v38 + 40); /*0x43f329*/
    v40 = *(void (__fastcall **)(char *, __int64))(v39 + 40); /*0x43f337*/
    LOBYTE(v39) = 125; /*0x43f33b*/
    v40((char *)v38 + 320, v39); /*0x43f33d*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v38 + 160LL))(v38); /*0x43f35a*/
    (*(void (__fastcall **)(__int64 *, struct cocos2d::CCObject *, __int64))(*a1 + 456))(a1, v38, 3); /*0x43f36c*/
    v41 = *(_QWORD *)v38; /*0x43f37a*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v119, v121 * 0.5, (float)(v122 * 0.5) - 30.0); /*0x43f398*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v41 + 184))(v38, v42); /*0x43f3a4*/
    cocos2d::CCArray::addObject((cocos2d::CCArray *)a1[69], v38); /*0x43f3b5*/
    v43 = cocos2d::CCSprite::create("GJ_progressBar_001.png"); /*0x43f3c2*/
    a1[61] = (__int64)v43; /*0x43f3d0*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v43 + 120LL))(v43); /*0x43f3e2*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1[61] + 136LL))(a1[61]); /*0x43f3f7*/
    (**(void (__fastcall ***)(__int64, void *))(a1[61] + 320))(a1[61] + 320, &unk_6FEBBC); /*0x43f416*/
    v44 = a1[61]; /*0x43f418*/
    *((_DWORD *)a1 + 120) = *(_DWORD *)(v44 + 432); /*0x43f42f*/
    v45 = *(float *)(v44 + 432); /*0x43f43a*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64, __int64))(*(_QWORD *)v38 + 456LL))(v38, v44, 1); /*0x43f442*/
    v46 = (__int64 *)a1[61]; /*0x43f448*/
    v47 = *v46; /*0x43f45b*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v119, 0.0, 0.5); /*0x43f45e*/
    (*(void (__fastcall **)(__int64 *, __int64))(v47 + 288))(v46, v48); /*0x43f46a*/
    v49 = a1[61]; /*0x43f476*/
    v50 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v38 + 320LL))(v38); /*0x43f47e*/
    v51 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v49 + 184LL); /*0x43f4a4*/
    cocos2d::CCPoint::CCPoint( /*0x43f4b3*/
      (cocos2d::CCPoint *)&v119,
      (float)(v45 - (float)(v45 * 0.99199998)) * 0.5,
      *(float *)(v50 + 4) * 0.5);
    v51(v49, v52); /*0x43f4bf*/
    v53 = cocos2d::CCSprite::create("GJ_progressBar_001.png"); /*0x43f4ce*/
    (**((void (__fastcall ***)(__int64, __int64 *))v53 + 40))((__int64)v53 + 320, &v118); /*0x43f4e6*/
    v54 = *((_QWORD *)v53 + 40); /*0x43f4e9*/
    v55 = *(void (__fastcall **)(char *, __int64))(v54 + 40); /*0x43f4f7*/
    LOBYTE(v54) = 125; /*0x43f4fb*/
    v55((char *)v53 + 320, v54); /*0x43f4fd*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v53 + 160LL))(v53); /*0x43f511*/
    (*(void (__fastcall **)(__int64 *, struct cocos2d::CCObject *, __int64))(*a1 + 456))(a1, v53, 3); /*0x43f523*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v117, 0.0, -50.0); /*0x43f538*/
    v57 = v56; /*0x43f541*/
    v58 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v38 + 200LL))(v38); /*0x43f54e*/
    cocos2d::CCPoint::operator+(v58, &v119, v57); /*0x43f55a*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *, __int16 *))(*(_QWORD *)v53 + 184LL))(v53, &v119); /*0x43f56a*/
    cocos2d::CCArray::addObject((cocos2d::CCArray *)a1[69], v53); /*0x43f57b*/
    v59 = cocos2d::CCSprite::create("GJ_progressBar_001.png"); /*0x43f588*/
    a1[62] = (__int64)v59; /*0x43f596*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v59 + 120LL))(v59); /*0x43f5a8*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1[62] + 136LL))(a1[62]); /*0x43f5bd*/
    v60 = (void (__fastcall ***)(_QWORD, __int16 *))(a1[62] + 320); /*0x43f5cf*/
    v119 = -256; /*0x43f5d6*/
    v120 = -1; /*0x43f5dc*/
    (**v60)(v60, &v119); /*0x43f5e3*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64, __int64))(*(_QWORD *)v53 + 456LL))(v53, a1[62], 1); /*0x43f5f9*/
    v61 = (__int64 *)a1[62]; /*0x43f5ff*/
    v62 = *v61; /*0x43f612*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v119, 0.0, 0.5); /*0x43f615*/
    (*(void (__fastcall **)(__int64 *, __int64))(v62 + 288))(v61, v63); /*0x43f621*/
    v64 = (__int64 *)a1[62]; /*0x43f62f*/
    v65 = *v64; /*0x43f63a*/
    v66 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1[61] + 200LL))(a1[61]); /*0x43f63d*/
    (*(void (__fastcall **)(__int64 *, __int64))(v65 + 184))(v64, v66); /*0x43f649*/
    v67 = cocos2d::CCLabelBMFont::create(" ", (const char *)&qword_6FFF68); /*0x43f65d*/
    v68 = *a1; /*0x43f663*/
    a1[56] = (__int64)v67; /*0x43f670*/
    (*(void (__fastcall **)(__int64 *, struct cocos2d::CCLabelBMFont *, __int64))(v68 + 456))(a1, v67, 4); /*0x43f682*/
    v69 = (__int64 *)a1[56]; /*0x43f685*/
    v70 = *v69; /*0x43f693*/
    v71 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v38 + 200LL))(v38); /*0x43f696*/
    (*(void (__fastcall **)(__int64 *, __int64))(v70 + 184))(v69, v71); /*0x43f6a2*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1[56] + 160LL))(a1[56]); /*0x43f6b7*/
    cocos2d::CCArray::addObject((cocos2d::CCArray *)a1[69], (struct cocos2d::CCObject *)a1[56]); /*0x43f6cd*/
    v72 = cocos2d::CCLabelBMFont::create(" ", (const char *)&qword_6FFF68); /*0x43f6e1*/
    v73 = *a1; /*0x43f6e7*/
    a1[57] = (__int64)v72; /*0x43f6f4*/
    (*(void (__fastcall **)(__int64 *, struct cocos2d::CCLabelBMFont *, __int64))(v73 + 456))(a1, v72, 4); /*0x43f706*/
    v74 = (__int64 *)a1[57]; /*0x43f709*/
    v75 = *v74; /*0x43f717*/
    v76 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v53 + 200LL))(v53); /*0x43f71a*/
    (*(void (__fastcall **)(__int64 *, __int64))(v75 + 184))(v74, v76); /*0x43f726*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1[57] + 160LL))(a1[57]); /*0x43f73b*/
    cocos2d::CCArray::addObject((cocos2d::CCArray *)a1[69], (struct cocos2d::CCObject *)a1[57]); /*0x43f751*/
    v77 = cocos2d::CCLabelBMFont::create("Normal Mode", (const char *)&qword_6FFF68); /*0x43f778*/
    (*(void (__fastcall **)(__int64 *, struct cocos2d::CCObject *, __int64))(*a1 + 456))(a1, v77, 4); /*0x43f785*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v117, 0.0, 20.0); /*0x43f79a*/
    v79 = v78; /*0x43f7a3*/
    v80 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v38 + 200LL))(v38); /*0x43f7b0*/
    cocos2d::CCPoint::operator+(v80, &v119, v79); /*0x43f7bc*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *, __int16 *))(*(_QWORD *)v77 + 184LL))(v77, &v119); /*0x43f7cc*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v77 + 160LL))(v77); /*0x43f7dc*/
    cocos2d::CCArray::addObject((cocos2d::CCArray *)a1[69], v77); /*0x43f7ed*/
    v81 = cocos2d::CCLabelBMFont::create("Practice Mode", (const char *)&qword_6FFF68); /*0x43f814*/
    (*(void (__fastcall **)(__int64 *, struct cocos2d::CCObject *, __int64))(*a1 + 456))(a1, v81, 4); /*0x43f821*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v117, 0.0, 20.0); /*0x43f82e*/
    v83 = v82; /*0x43f837*/
    v84 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v53 + 200LL))(v53); /*0x43f844*/
    cocos2d::CCPoint::operator+(v84, &v119, v83); /*0x43f850*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *, __int16 *))(*(_QWORD *)v81 + 184LL))(v81, &v119); /*0x43f860*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v81 + 160LL))(v81); /*0x43f870*/
    cocos2d::CCArray::addObject((cocos2d::CCArray *)a1[69], v81); /*0x43f881*/
    v85 = cocos2d::CCLabelBMFont::create(" ", (const char *)&qword_6FFF68); /*0x43f895*/
    a1[58] = (__int64)v85; /*0x43f89b*/
    v86 = v85; /*0x43f8ae*/
    v87 = *(_QWORD *)v85; /*0x43f8b1*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v119, 0.0, 0.5); /*0x43f8b4*/
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v87 + 288))(v86, v88); /*0x43f8c0*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1[55] + 464LL))(a1[55], a1[58]); /*0x43f8d9*/
    cocos2d::CCArray::addObject((cocos2d::CCArray *)a1[68], (struct cocos2d::CCObject *)a1[58]); /*0x43f8ef*/
    v89 = cocos2d::CCSprite::createWithSpriteFrameName("diffIcon_01_btn_001.png"); /*0x43f8fc*/
    v90 = a1[55]; /*0x43f902*/
    a1[63] = (__int64)v89; /*0x43f90a*/
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *))(*(_QWORD *)v90 + 464LL))(v90, v89); /*0x43f91f*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1[63] + 160LL))(a1[63]); /*0x43f935*/
    cocos2d::CCArray::addObject((cocos2d::CCArray *)a1[68], (struct cocos2d::CCObject *)a1[63]); /*0x43f94b*/
    v91 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_starsIcon_001.png"); /*0x43f958*/
    v92 = a1[55]; /*0x43f95e*/
    a1[64] = (__int64)v91; /*0x43f966*/
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *))(*(_QWORD *)v92 + 464LL))(v92, v91); /*0x43f97b*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1[64] + 160LL))(a1[64]); /*0x43f991*/
    v93 = (__int64 *)a1[64]; /*0x43f9af*/
    v94 = *v93; /*0x43f9c7*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v119, *((float *)a1 + 130) - 15.0, *((float *)a1 + 131) - 13.0); /*0x43f9ca*/
    (*(void (__fastcall **)(__int64 *, __int64))(v94 + 184))(v93, v95); /*0x43f9d6*/
    cocos2d::CCArray::addObject((cocos2d::CCArray *)a1[68], (struct cocos2d::CCObject *)a1[64]); /*0x43f9ec*/
    v96 = cocos2d::CCLabelBMFont::create(" ", (const char *)&qword_6FFF68); /*0x43fa00*/
    v97 = a1[55]; /*0x43fa06*/
    a1[59] = (__int64)v96; /*0x43fa0e*/
    (*(void (__fastcall **)(__int64, struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v97 + 464LL))(v97, v96); /*0x43fa23*/
    v98 = (__int64 *)a1[59]; /*0x43fa26*/
    v99 = *v98; /*0x43fa3a*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v119, 1.0, 0.5); /*0x43fa3d*/
    (*(void (__fastcall **)(__int64 *, __int64))(v99 + 288))(v98, v100); /*0x43fa49*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v117, -12.0, 0.5); /*0x43fa5f*/
    v102 = v101; /*0x43fa6d*/
    v103 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1[64] + 200LL))(a1[64]); /*0x43fa73*/
    cocos2d::CCPoint::operator+(v103, &v119, v102); /*0x43fa83*/
    (*(void (__fastcall **)(__int64, __int16 *))(*(_QWORD *)a1[59] + 184LL))(a1[59], &v119); /*0x43fa98*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1[59] + 160LL))(a1[59]); /*0x43faad*/
    cocos2d::CCArray::addObject((cocos2d::CCArray *)a1[68], (struct cocos2d::CCObject *)a1[59]); /*0x43fac3*/
    v105 = (cocos2d::CCObject *)cocos2d::CCArray::create(v104); /*0x43fac9*/
    a1[66] = (__int64)v105; /*0x43fad2*/
    cocos2d::CCObject::retain(v105); /*0x43fada*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v116, *((float *)a1 + 130) - 16.0, 16.0); /*0x43fafa*/
    for ( i = 2; i >= 0; --i ) /*0x43fb08*/
    {
      v107 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_coinsIcon_001.png"); /*0x43fb45*/
      (*(void (__fastcall **)(__int64, struct cocos2d::CCObject *))(*(_QWORD *)a1[55] + 464LL))(a1[55], v107); /*0x43fb55*/
      (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v107 + 160LL))(v107); /*0x43fb69*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v117, (float)i * -26.0, 0.0); /*0x43fb7d*/
      cocos2d::CCPoint::operator+(v116, &v119, v108); /*0x43fb8e*/
      (*(void (__fastcall **)(struct cocos2d::CCObject *, __int16 *))(*(_QWORD *)v107 + 184LL))(v107, &v119); /*0x43fb9e*/
      cocos2d::CCArray::addObject((cocos2d::CCArray *)a1[66], v107); /*0x43fbaf*/
      cocos2d::CCArray::addObject((cocos2d::CCArray *)a1[68], v107); /*0x43fbc0*/
    }
    v110 = (cocos2d::CCObject *)cocos2d::CCArray::create(v109); /*0x43fbda*/
    a1[67] = (__int64)v110; /*0x43fbe3*/
    cocos2d::CCObject::retain(v110); /*0x43fbeb*/
    if ( *(_BYTE *)(cocos2d::CCApplication::sharedApplication(v111) + 209) ) /*0x43fbf7*/
    {
      v112 = cocos2d::CCSprite::createWithSpriteFrameName("controllerBtn_Start_001.png"); /*0x43fc1e*/
      (*(void (__fastcall **)(__int64, struct cocos2d::CCObject *, __int64))(*(_QWORD *)v27 + 456LL))(v27, v112, 10); /*0x43fc2b*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v117, 0.0, -35.0); /*0x43fc3d*/
      v114 = v113; /*0x43fc4b*/
      v115 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1[55] + 200LL))(a1[55]); /*0x43fc51*/
      cocos2d::CCPoint::operator+(v115, &v119, v114); /*0x43fc61*/
      (*(void (__fastcall **)(struct cocos2d::CCObject *, __int16 *))(*(_QWORD *)v112 + 184LL))(v112, &v119); /*0x43fc71*/
      cocos2d::CCArray::addObject((cocos2d::CCArray *)a1[68], v112); /*0x43fc82*/
    }
    return 1; /*0x43fc90*/
  }
  return result; /*0x43f031*/
}

// [3/5] Address: 0x442b20
// Method: LevelPage::dialogClosed
// Hidden C++ exception states: #wind=1
__int64 __fastcall LevelPage_dialogClosed(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 *v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rbx
  cocos2d::CCSpriteFrameCache *v10; // rax
  struct cocos2d::CCSpriteFrame *v11; // rax
  void *v12; // [rsp+38h] [rbp+10h]

  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 2 ) /*0x442b41*/
  {
    v5 = qword_905FD0; /*0x442b47*/
    if ( !qword_905FD0 ) /*0x442b51*/
    {
      v12 = operator new(0x6E8u); /*0x442b5d*/
      qword_905FD0 = sub_2723A0(v12); /*0x442b6b*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x442b7c*/
      v5 = qword_905FD0; /*0x442b7e*/
    }
    LOBYTE(v4) = 1; /*0x442b85*/
    result = sub_27B1C0(v5, &word_708028, v4); /*0x442b8f*/
    v7 = *(__int64 **)(a1 + 160); /*0x442b94*/
    if ( v7 ) /*0x442b9e*/
    {
      v8 = *v7; /*0x442ba0*/
      v9 = *(_QWORD *)(a1 + 160); /*0x442ba3*/
      v10 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x442baa*/
      v11 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v10, "secretDoorBtn2_open_001.png"); /*0x442bba*/
      return (*(__int64 (__fastcall **)(__int64, struct cocos2d::CCSpriteFrame *))(v8 + 1008))(v9, v11); /*0x442bdc*/
    }
  }
  else
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x442be5*/
    if ( (_DWORD)result == 1 ) /*0x442beb*/
      return sub_441100(a1 - 408, 0); /*0x442bf6*/
  }
  return result; /*0x442bcd*/
}

// [4/5] Address: 0x442c10
// Method: LevelPage::onPlay
// Hidden C++ exception states: #wind=7
void __fastcall LevelPage_onPlay(__int64 a1)
{
  __int64 v2; // rcx
  int Stat; // eax
  _DWORD *v4; // rcx
  int v5; // edx
  cocos2d::CCString *v6; // rax
  const char *CString; // rax
  __int64 v8; // rbx
  __int64 v9; // r8
  void **v10; // rdx
  __int64 v11; // rax
  cocos2d::CCObject *v12; // rbx
  void *v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // ecx
  __int64 v19; // rbx
  struct cocos2d::CCFiniteTimeAction *v20; // rax
  struct cocos2d::CCAction *v21; // rax
  void *v22; // [rsp+50h] [rbp-29h]
  void *v23; // [rsp+50h] [rbp-29h]
  __int128 v24; // [rsp+58h] [rbp-21h] BYREF
  __int64 v25; // [rsp+68h] [rbp-11h]
  __int64 v26; // [rsp+70h] [rbp-9h]
  __int128 *v27; // [rsp+78h] [rbp-1h]
  _BYTE v28[32]; // [rsp+80h] [rbp+7h] BYREF
  void *Block[2]; // [rsp+A0h] [rbp+27h] BYREF
  __int64 v30; // [rsp+B0h] [rbp+37h]
  unsigned __int64 v31; // [rsp+B8h] [rbp+3Fh]

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 424) + 328LL) - *(_DWORD *)(*(_QWORD *)(a1 + 424) + 332LL) != -1 ) /*0x442c53*/
  {
    v2 = qword_905FE0; /*0x442c59*/
    if ( !qword_905FE0 ) /*0x442c63*/
    {
      v22 = operator new(0x3E8u); /*0x442c6f*/
      qword_905FE0 = sub_2D2B40(v22); /*0x442c7c*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x442c8d*/
      v2 = qword_905FE0; /*0x442c8f*/
    }
    Stat = GameStatsManager_getStat(v2, (const char *)&word_708028); /*0x442c9d*/
    v4 = *(_DWORD **)(a1 + 424); /*0x442ca2*/
    if ( v4[82] - v4[83] == -2 ) /*0x442cb8*/
    {
      sub_441100(a1, 0); /*0x442cbf*/
    }
    else
    {
      v5 = v4[297]; /*0x442cc9*/
      if ( v5 <= Stat ) /*0x442cd1*/
      {
        if ( !*(_BYTE *)(a1 + 416) ) /*0x442e26*/
        {
          *(_BYTE *)(a1 + 416) = 1; /*0x442e33*/
          byte_9037A4 = 1; /*0x442e3a*/
          v14 = qword_905F60; /*0x442e41*/
          if ( !qword_905F60 ) /*0x442e4b*/
          {
            v27 = (__int128 *)operator new(0x8A8u); /*0x442e57*/
            qword_905F60 = sub_5AE20(v27); /*0x442e64*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x442e75*/
            v14 = qword_905F60; /*0x442e77*/
          }
          v15 = *(_QWORD *)(v14 + 552); /*0x442e7e*/
          if ( v15 ) /*0x442e88*/
            FMOD::ChannelControl::stop(v15); /*0x442e8a*/
          sub_3DB60(v14 + 1096); /*0x442e97*/
          sub_3DB60(v14 + 1160); /*0x442ea3*/
          sub_3DB60(v14 + 1224); /*0x442eaf*/
          v27 = &v24; /*0x442eb8*/
          v24 = 0; /*0x442ebf*/
          v25 = 0; /*0x442ec5*/
          v26 = 0; /*0x442ec9*/
          *(_QWORD *)&v24 = sub_3C460(32); /*0x442ed7*/
          v25 = 16; /*0x442edb*/
          v26 = 31; /*0x442ee3*/
          strcpy((char *)v24, "playSound_01.ogg"); /*0x442ef2*/
          v18 = qword_905F60; /*0x442ef9*/
          if ( !qword_905F60 ) /*0x442f03*/
          {
            v23 = operator new(0x8A8u); /*0x442f0f*/
            qword_905F60 = sub_5AE20(v23); /*0x442f1c*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x442f2d*/
            v18 = qword_905F60; /*0x442f2f*/
          }
          FMODAudioEngine_playEffect_0(v18, (__int64)&v24, v16, v17, 1050253722); /*0x442f53*/
          v19 = cocos2d::CCCallFunc::create(a1, sub_442FC0); /*0x442f68*/
          v20 = cocos2d::CCDelayTime::create(0.0); /*0x442f6e*/
          v21 = cocos2d::CCSequence::create(v20, v19, 0); /*0x442f7d*/
          cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v21); /*0x442f89*/
        }
      }
      else
      {
        v6 = cocos2d::CCString::createWithFormat( /*0x442ce0*/
               "Collect %i more <cy>Secret Coins</c> to unlock this <cl>level</c>!",
               v5 - Stat);
        CString = cocos2d::CCString::getCString(v6); /*0x442ce9*/
        *(_OWORD *)Block = 0; /*0x442cf2*/
        v30 = 0; /*0x442cf8*/
        v31 = 0; /*0x442cfc*/
        v8 = -1; /*0x442d00*/
        v9 = -1; /*0x442d07*/
        do /*0x442d13*/
          ++v9; /*0x442d10*/
        while ( CString[v9] ); /*0x442d13*/
        sub_3C230(Block); /*0x442d20*/
        v10 = Block; /*0x442d26*/
        if ( v31 > 0xF ) /*0x442d2f*/
          v10 = (void **)Block[0]; /*0x442d2f*/
        v24 = 0; /*0x442d37*/
        v25 = 0; /*0x442d3b*/
        v26 = 0; /*0x442d3f*/
        do /*0x442d46*/
          ++v8; /*0x442d43*/
        while ( *((_BYTE *)v10 + v8) ); /*0x442d46*/
        sub_3C230(&v24); /*0x442d53*/
        v11 = sub_3E4F0(v28, &v24); /*0x442d68*/
        v12 = FLAlertLayer_create_0(0, (int)"Locked", v11, (__int64)"OK", 0, 1133903872, 0, 0, 1065353216); /*0x442db4*/
        sub_3C310(&v24); /*0x442dbb*/
        (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v12 + 1064LL))(v12); /*0x442dcd*/
        if ( v31 > 0xF ) /*0x442dd8*/
        {
          v13 = Block[0]; /*0x442de1*/
          if ( v31 + 1 >= 0x1000 ) /*0x442def*/
          {
            v13 = (void *)*((_QWORD *)Block[0] - 1); /*0x442df5*/
            if ( (unsigned __int64)((char *)Block[0] - (char *)v13 - 8) > 0x1F ) /*0x442e04*/
              invoke_watson(0, 0, 0, 0, 0); /*0x442e15*/
          }
          j_j_free(v13); /*0x442e1c*/
        }
      }
    }
  }
}

// [5/5] Address: 0x4436e0
// Method: LevelPage::ccTouchBegan
// Hidden C++ exception states: #wind=4
char __fastcall LevelPage_ccTouchBegan(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  cocos2d *v6; // rax
  const struct cocos2d::CCPoint *v7; // r8
  __int64 v8; // rdi
  __int64 v9; // rbx
  cocos2d::CCString *v10; // rax
  int v11; // ebx
  void *v12; // r8
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  void *v17; // [rsp+30h] [rbp-19h] BYREF
  _BYTE v18[8]; // [rsp+38h] [rbp-11h] BYREF
  __int128 v19; // [rsp+40h] [rbp-9h] BYREF
  __int64 v20; // [rsp+50h] [rbp+7h]
  __int64 v21; // [rsp+58h] [rbp+Fh]
  void *Block[2]; // [rsp+60h] [rbp+17h] BYREF
  __int64 v23; // [rsp+70h] [rbp+27h]
  unsigned __int64 v24; // [rsp+78h] [rbp+2Fh]

  v4 = *(_QWORD *)(a1 + 104); /*0x443708*/
  if ( !v4 || !*(_QWORD *)(a1 + 240) || *(_DWORD *)(v4 + 328) - *(_DWORD *)(v4 + 332) != -1 ) /*0x443732*/
    return 0; /*0x4439da*/
  cocos2d::CCTouch::getLocation(a2, v18); /*0x44373f*/
  cocos2d::CCNode::convertToNodeSpace(a1 - 320, &v17, v18); /*0x443754*/
  cocos2d::CCPoint::operator=(v18, v5); /*0x443761*/
  v6 = (cocos2d *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 240) + 200LL))(*(_QWORD *)(a1 + 240)); /*0x443771*/
  if ( cocos2d::ccpDistance(v6, (const struct cocos2d::CCPoint *)v18, v7) <= 30.0 ) /*0x44378f*/
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 320) + 920LL))(a1 - 320, 0); /*0x4437a5*/
    sub_441A10(a1 - 320); /*0x4437b2*/
    v8 = qword_905FD0; /*0x4437b7*/
    if ( !qword_905FD0 ) /*0x4437c1*/
    {
      v17 = operator new(0x6E8u); /*0x4437cd*/
      qword_905FD0 = sub_2723A0(v17); /*0x4437da*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x4437eb*/
      v8 = qword_905FD0; /*0x4437ed*/
    }
    v9 = AchievementManager_sharedState(); /*0x4437f9*/
    *(_OWORD *)Block = 0; /*0x4437ff*/
    v23 = 0; /*0x443805*/
    v24 = 0; /*0x443809*/
    Block[0] = (void *)sub_3C460(32); /*0x443817*/
    v23 = 21; /*0x44381b*/
    v24 = 31; /*0x443823*/
    strcpy((char *)Block[0], "geometry.ach.secret04"); /*0x443832*/
    v10 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v9 + 352), Block); /*0x443857*/
    v11 = cocos2d::CCString::intValue(v10); /*0x443866*/
    if ( v24 > 0xF ) /*0x443870*/
    {
      v12 = Block[0]; /*0x443875*/
      if ( v24 + 1 >= 0x1000 ) /*0x443883*/
      {
        v12 = (void *)*((_QWORD *)Block[0] - 1); /*0x443889*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v12 - 8) > 0x1F ) /*0x443898*/
          invoke_watson(0, 0, 0, 0, 0); /*0x4438a9*/
      }
      j_j_free(v12); /*0x4438b3*/
    }
    v23 = 0; /*0x4438b8*/
    v24 = 15; /*0x4438bc*/
    LOBYTE(Block[0]) = 0; /*0x4438c4*/
    if ( v11 < 100 ) /*0x4438cb*/
    {
      v19 = 0; /*0x4438d0*/
      v20 = 0; /*0x4438d4*/
      v21 = 0; /*0x4438d8*/
      *(_QWORD *)&v19 = sub_3C460(32); /*0x4438e6*/
      v20 = 21; /*0x4438ea*/
      v21 = 31; /*0x4438f2*/
      strcpy((char *)v19, "geometry.ach.secret04"); /*0x443901*/
      sub_274AD0(v8, &v19); /*0x443922*/
      v13 = AchievementManager_sharedState(); /*0x443927*/
      GameManager_isColorUnlocked(v13, (__int64)"geometry.ach.secret04", 100); /*0x44393c*/
    }
    v14 = qword_905FE0; /*0x443941*/
    if ( !qword_905FE0 ) /*0x44394b*/
    {
      v17 = operator new(0x3E8u); /*0x443957*/
      qword_905FE0 = sub_2D2B40(v17); /*0x443964*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x443971*/
      v14 = qword_905FE0; /*0x443974*/
    }
    GameStatsManager_storeSecretCoin(v14, "secret04"); /*0x443982*/
    v15 = qword_905FE0; /*0x443987*/
    if ( !qword_905FE0 ) /*0x443991*/
    {
      v17 = operator new(0x3E8u); /*0x44399d*/
      qword_905FE0 = sub_2D2B40(v17); /*0x4439aa*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x4439bb*/
      v15 = qword_905FE0; /*0x4439bd*/
    }
    GameStatsManager_incrementStat(v15, (const char *)&word_708028, 1u); /*0x4439d1*/
  }
  return 1; /*0x4439dc*/
}

// Address: 0x43fcb0
// Method: LevelPage::updateDynamicPage
// Hidden C++ exception states: #wind=12
void __fastcall LevelPage_updateDynamicPage(__int64 a1, cocos2d::CCObject *a2)
{
  cocos2d::CCParticleSystem *v4; // r14
  cocos2d::CCObject *v5; // rcx
  unsigned int i; // ebx
  struct cocos2d::CCObject *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int j; // ebx
  struct cocos2d::CCObject *v11; // rax
  __int64 v12; // rdx
  unsigned int k; // ebx
  struct cocos2d::CCObject *v14; // rax
  __int64 v15; // rdx
  float v16; // xmm1_4
  float v17; // xmm3_4
  float *v18; // rax
  __int64 v19; // rdi
  __int64 *v20; // rbx
  __int64 v21; // rax
  float *v22; // rdx
  __int64 v23; // rdi
  __int64 *v24; // rbx
  __int64 v25; // rax
  cocos2d::CCString *v26; // rax
  const char *CString; // rax
  cocos2d::CCString *v28; // rax
  const char *v29; // rax
  __int64 v30; // rcx
  __int128 *v31; // rdx
  __int64 *v32; // rcx
  __int64 v33; // rbx
  int v34; // ecx
  int v35; // r13d
  int v36; // edx
  cocos2d::CCString *v37; // rax
  const char *v38; // rdi
  _QWORD *v39; // rcx
  __int64 v40; // rsi
  _QWORD *v41; // rbx
  __int64 v42; // rdx
  cocos2d::CCSpriteFrameCache *v43; // rax
  struct cocos2d::CCSpriteFrame *v44; // rax
  float *v45; // rbx
  double v46; // xmm0_8
  float v47; // xmm9_4
  float v48; // xmm6_4
  __int64 v49; // rdi
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rdi
  float v53; // xmm6_4
  float *v54; // rax
  __int64 v55; // rbx
  __int64 v56; // rax
  void (__fastcall **v57)(__int64, const char *); // rdi
  __int64 v58; // rbx
  cocos2d::CCString *v59; // rax
  const char *v60; // rax
  __int64 v61; // rcx
  char v62; // al
  void (__fastcall ***v63)(_QWORD, __int16 *); // rcx
  __int16 *v64; // rdx
  __int64 v65; // rbx
  __int64 v66; // rax
  char v67; // si
  __int64 v68; // rdx
  __int64 v69; // rcx
  struct cocos2d::CCObject *v70; // r12
  __int64 v71; // rdi
  const char *v72; // rbx
  cocos2d::CCSpriteFrameCache *v73; // rax
  struct cocos2d::CCSpriteFrame *v74; // rax
  __int16 *v75; // rdx
  int v76; // edi
  int v77; // r12d
  unsigned int v78; // r14d
  struct cocos2d::CCObject *v79; // rax
  struct cocos2d::CCSprite *v80; // r14
  __int64 v81; // rbx
  __int64 v82; // rax
  struct cocos2d::CCObject *v83; // rsi
  __int64 v84; // rbx
  __int64 v85; // rax
  cocos2d::CCString *v86; // rax
  const char *v87; // rax
  struct cocos2d::CCObject *v88; // rdi
  __int64 v89; // rbx
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rbx
  __int64 v93; // rax
  __int64 v94; // rcx
  int v95; // edi
  __int64 v96; // rbx
  __int64 v97; // rcx
  int v98; // ebx
  cocos2d::CCString *v99; // rax
  const char *v100; // rax
  __int64 v101; // rbx
  __int64 v102; // rax
  __int64 v103; // rbx
  __int64 v104; // rax
  __int64 v105; // rbx
  float v106; // xmm8_4
  float v107; // xmm6_4
  double v108; // xmm0_8
  float v109; // xmm7_4
  __int64 v110; // rax
  cocos2d::CCArray *v111; // rcx
  unsigned int v112; // ebx
  struct cocos2d::CCObject *v113; // rax
  cocos2d::CCNode *v114; // rsi
  cocos2d::CCObject *v115; // rbx
  struct cocos2d::CCMenu *v116; // rdi
  __int64 v117; // rbx
  __int64 v118; // rax
  struct cocos2d::CCSprite *v119; // rdi
  __int64 v120; // rbx
  float v121; // xmm6_4
  float *v122; // rax
  __int64 v123; // rax
  const struct cocos2d::CCPoint *v124; // rax
  struct cocos2d::CCActionInterval *v125; // rax
  struct cocos2d::CCFiniteTimeAction *v126; // rbx
  const struct cocos2d::CCPoint *v127; // rax
  struct cocos2d::CCActionInterval *v128; // rax
  struct cocos2d::CCEaseInOut *v129; // rax
  struct cocos2d::CCActionInterval *v130; // rax
  struct cocos2d::CCAction *v131; // rax
  _WORD *v132; // r8
  __int64 v133; // r9
  cocos2d::CCParticleSystem *v134; // r12
  __int64 v135; // rbx
  float v136; // xmm6_4
  float *v137; // rax
  __int64 v138; // rax
  _WORD *v139; // r8
  __int64 v140; // r9
  cocos2d::CCParticleSystem *v141; // rdi
  __int64 v142; // rbx
  float v143; // xmm6_4
  float *v144; // rax
  __int64 v145; // rax
  char *v146; // rdx
  __int64 v147; // r8
  __int64 v148; // r9
  __int64 v149; // rbx
  float v150; // xmm6_4
  float *v151; // rax
  __int64 v152; // rax
  __int64 v153; // rbx
  struct cocos2d::CCObject *v154; // rax
  struct cocos2d::CCLabelBMFont *v155; // rdi
  __int64 v156; // rbx
  __int64 v157; // rax
  __int64 v158; // rcx
  __int64 v159; // rdx
  __int16 v160; // [rsp+30h] [rbp-D0h] BYREF
  char v161; // [rsp+32h] [rbp-CEh]
  __int64 v162[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v163; // [rsp+48h] [rbp-B8h] BYREF
  char v164; // [rsp+4Ah] [rbp-B6h]
  __int16 v165; // [rsp+4Ch] [rbp-B4h]
  __int16 v166; // [rsp+50h] [rbp-B0h] BYREF
  char v167; // [rsp+52h] [rbp-AEh]
  void *v168; // [rsp+58h] [rbp-A8h] BYREF
  float v169; // [rsp+60h] [rbp-A0h] BYREF
  float v170; // [rsp+64h] [rbp-9Ch]
  int Stat; // [rsp+68h] [rbp-98h]
  __int128 v172; // [rsp+70h] [rbp-90h] BYREF
  __int64 v173; // [rsp+80h] [rbp-80h]
  unsigned __int64 v174; // [rsp+88h] [rbp-78h]
  __int128 v175; // [rsp+90h] [rbp-70h] BYREF
  __int64 v176; // [rsp+A0h] [rbp-60h]
  __int64 v177; // [rsp+A8h] [rbp-58h]
  __int128 v178; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v179; // [rsp+C0h] [rbp-40h]
  __int64 v180; // [rsp+C8h] [rbp-38h]
  unsigned int v181[66]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v182[40]; // [rsp+1D8h] [rbp+D8h] BYREF
  unsigned int v183[66]; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v184[40]; // [rsp+308h] [rbp+208h] BYREF
  unsigned int v185[66]; // [rsp+330h] [rbp+230h] BYREF
  _BYTE v186[40]; // [rsp+438h] [rbp+338h] BYREF

  v4 = 0;
  if ( *(_BYTE *)(a1 + 416) )
    return;
  v5 = *(cocos2d::CCObject **)(a1 + 424);
  if ( v5 )
  {
    if ( *((_DWORD *)a2 + 82) - *((_DWORD *)a2 + 83) == *((_DWORD *)v5 + 82) - *((_DWORD *)v5 + 83) )
      return;
    cocos2d::CCObject::release(v5);
    *(_QWORD *)(a1 + 424) = 0;
  }
  for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 536)); ++i )
  {
    v7 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 536), i);
    (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v7 + 512LL))(v7);
  }
  cocos2d::CCArray::removeAllObjects(*(cocos2d::CCArray **)(a1 + 536));
  *(_QWORD *)(a1 + 568) = 0;
  *(_QWORD *)(a1 + 424) = a2;
  cocos2d::CCObject::retain(a2);
  v9 = cocos2d::CCDirector::sharedDirector(v8);
  cocos2d::CCDirector::getWinSize(v9, &v169);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 424) + 328LL) - *(_DWORD *)(*(_QWORD *)(a1 + 424) + 332LL) <= 0 )
  {
    v111 = *(cocos2d::CCArray **)(a1 + 552);
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 424) + 328LL) - *(_DWORD *)(*(_QWORD *)(a1 + 424) + 332LL) != -2 )
    {
      if ( cocos2d::CCArray::count(v111) )
      {
        do
        {
          v154 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 552), (unsigned int)v4);
          (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v154 + 336LL))(v154, 0);
          LODWORD(v4) = (_DWORD)v4 + 1;
        }
        while ( (unsigned int)v4 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 552)) );
      }
      v155 = cocos2d::CCLabelBMFont::create("Coming Soon!", (const char *)&qword_6FFF68);
      (*(void (__fastcall **)(__int64, struct cocos2d::CCLabelBMFont *))(*(_QWORD *)a1 + 464LL))(a1, v155);
      v156 = *(_QWORD *)v155;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v162, v169 * 0.5, (float)(v170 * 0.5) + 50.0);
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v156 + 184))(v155, v157);
      cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 536), v155);
      sub_441EF0(a1);
      goto LABEL_71;
    }
    v112 = 0;
    if ( cocos2d::CCArray::count(v111) )
    {
      do
      {
        v113 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 552), v112);
        (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v113 + 336LL))(v113, 0);
        ++v112;
      }
      while ( v112 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 552)) );
    }
    v114 = cocos2d::CCSprite::createWithSpriteFrameName("theTowerDoor_001.png");
    v162[0] = (__int64)operator new(0x208u);
    v115 = (cocos2d::CCObject *)CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v162[0]);
    if ( v115 )
    {
      if ( (unsigned __int8)sub_47940((_DWORD)v115, (_DWORD)v114, 0, a1, (__int64)sub_441100) )
      {
        cocos2d::CCObject::autorelease(v115);
LABEL_57:
        v116 = cocos2d::CCMenu::createWithItem(v115);
        (*(void (__fastcall **)(__int64, struct cocos2d::CCMenu *))(*(_QWORD *)a1 + 464LL))(a1, v116);
        v117 = *(_QWORD *)v116;
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v162, v169 * 0.5, (float)(v170 * 0.5) - 5.0);
        (*(void (__fastcall **)(struct cocos2d::CCMenu *, __int64))(v117 + 184))(v116, v118);
        cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 536), v116);
        v119 = cocos2d::CCSprite::createWithSpriteFrameName("theTowerLabel_001.png");
        (*(void (__fastcall **)(cocos2d::CCNode *, struct cocos2d::CCSprite *))(*(_QWORD *)v114 + 464LL))(v114, v119);
        v120 = *(_QWORD *)v119;
        v121 = *(float *)((*(__int64 (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v114 + 320LL))(v114) + 4) + 23.0;
        v122 = (float *)(*(__int64 (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v114 + 320LL))(v114);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v162, *v122 * 0.5, v121);
        (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v120 + 184))(v119, v123);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v162, 0.0, 5.0);
        v125 = cocos2d::CCMoveBy::create(2.5, v124);
        v126 = cocos2d::CCEaseInOut::create(v125, 1.8);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v162, 0.0, -5.0);
        v128 = cocos2d::CCMoveBy::create(2.5, v127);
        v129 = cocos2d::CCEaseInOut::create(v128, 1.8);
        v130 = cocos2d::CCSequence::create(v126, v129, 0);
        v131 = cocos2d::CCRepeatForever::create(v130);
        cocos2d::CCNode::runAction(v114, v131);
        v172 = 0;
        v173 = 0;
        v174 = 0;
        v132 = (_WORD *)sub_3C460(192);
        *(_QWORD *)&v172 = v132;
        v173 = 189;
        v174 = 191;
        qmemcpy(
          v132,
          "30a-1a2.2a0.48a11a90a180a29a0a11a0a0a0a0a0a0a0a5a1a0a0a0.0745098a0a0a0a0.611765a0a1a0a2a1a0a0a0a0a0.937255a0a1"
          "a0a1a0a0.54a0a0.57a0a56a0a11a0a-25a17a1a2a1a0a0a1a0a0a0a0a0a0a0a0a0a0a0a0a0a0a",
          188);
        v132[94] = (unsigned __int8)a30a1a22a048a11[188];
        if ( v173 )
        {
          sub_6AE20(v181, v132 + 64, v132, v133);
          KeyframeObject_setupSpline((__int64 *)&v172, (__int64)v181);
          v134 = GameToolbox_particleFromStruct(v181, 0, 0);
          sub_3C310(v182);
        }
        else
        {
          v134 = 0;
        }
        (*(void (__fastcall **)(cocos2d::CCNode *, cocos2d::CCParticleSystem *, __int64))(*(_QWORD *)v114 + 456LL))(
          v114,
          v134,
          11);
        (*(void (__fastcall **)(cocos2d::CCParticleSystem *))(*(_QWORD *)v134 + 160LL))(v134);
        cocos2d::CCParticleSystem::resetSystem(v134);
        v135 = *(_QWORD *)v134;
        v136 = *(float *)((*(__int64 (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v114 + 320LL))(v114) + 4) * 0.5;
        v137 = (float *)(*(__int64 (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v114 + 320LL))(v114);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v162, *v137 * 0.5, v136);
        (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __int64))(v135 + 184))(v134, v138);
        v178 = 0;
        v179 = 0;
        v180 = 0;
        v139 = (_WORD *)sub_3C460(192);
        *(_QWORD *)&v178 = v139;
        v179 = 183;
        v180 = 191;
        qmemcpy(
          v139,
          "20a-1a2a0.3a8a90a90a0a2a27a30a0a0a0a0a0a0a75a28a0a360a0a0a0.839216a0a1a0a0.05a0a0a0a0a0a0.184314a0a0a0a1a0a0.0"
          "5a0a0.73a0a0.71a0a0a0a0a0a0a0a0a2a1a1a0a0a184a0a0a0a0a0a0a1a0a0a0a0a0a0a",
          182);
        v139[91] = (unsigned __int8)a20a1a2a03a8a90[182];
        if ( v179 )
        {
          sub_6AE20(v183, v139 + 64, v139, v140);
          KeyframeObject_setupSpline((__int64 *)&v178, (__int64)v183);
          v141 = GameToolbox_particleFromStruct(v183, 0, 0);
          sub_3C310(v184);
        }
        else
        {
          v141 = 0;
        }
        (*(void (__fastcall **)(cocos2d::CCNode *, cocos2d::CCParticleSystem *, __int64))(*(_QWORD *)v114 + 456LL))(
          v114,
          v141,
          11);
        (*(void (__fastcall **)(cocos2d::CCParticleSystem *))(*(_QWORD *)v141 + 160LL))(v141);
        cocos2d::CCParticleSystem::resetSystem(v141);
        v142 = *(_QWORD *)v141;
        v143 = *(float *)((*(__int64 (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v114 + 320LL))(v114) + 4) * 0.5;
        v144 = (float *)(*(__int64 (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v114 + 320LL))(v114);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v162, *v144 * 0.5, v143);
        (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __int64))(v142 + 184))(v141, v145);
        v175 = 0;
        v176 = 0;
        v177 = 0;
        v146 = (char *)sub_3C460(192);
        *(_QWORD *)&v175 = v146;
        v176 = 178;
        v177 = 191;
        strcpy(
          v146,
          "3a-1a3a0.3a1a90a90a0a2a11a13a0a0a0a0a0a0a15a5a0a0a0a0a0.839216a0a1a0a0.15a0.16a0a0a0a0a0.184314a0a0a0a1a0a0.21"
          "a0.07a1a0a1a0a0a0a0a0a0a0a0a2a1a1a0a0a34a0a0a0a0a0a0a1a0a0a0a0a0a0a0");
        if ( v176 )
        {
          sub_6AE20(v185, v146, v147, v148);
          KeyframeObject_setupSpline((__int64 *)&v175, (__int64)v185);
          v4 = GameToolbox_particleFromStruct(v185, 0, 0);
          sub_3C310(v186);
        }
        (*(void (__fastcall **)(cocos2d::CCNode *, cocos2d::CCParticleSystem *, __int64))(*(_QWORD *)v114 + 456LL))(
          v114,
          v4,
          11);
        (*(void (__fastcall **)(cocos2d::CCParticleSystem *))(*(_QWORD *)v4 + 160LL))(v4);
        cocos2d::CCParticleSystem::resetSystem(v4);
        v149 = *(_QWORD *)v4;
        v150 = *(float *)((*(__int64 (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v114 + 320LL))(v114) + 4) * 0.5;
        v151 = (float *)(*(__int64 (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v114 + 320LL))(v114);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v162, *v151 * 0.5, v150);
        (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __int64))(v149 + 184))(v4, v152);
        v153 = 20;
        do
        {
          (*(void (__fastcall **)(cocos2d::CCParticleSystem *))(*(_QWORD *)v134 + 32LL))(v134);
          (*(void (__fastcall **)(cocos2d::CCParticleSystem *))(*(_QWORD *)v141 + 32LL))(v141);
          --v153;
        }
        while ( v153 );
        sub_3C310(&v175);
        sub_3C310(&v178);
        sub_3C310(&v172);
        goto LABEL_71;
      }
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v115 + 8LL))(v115, 1);
    }
    v115 = 0;
    goto LABEL_57;
  }
  for ( j = 0; j < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 552)); ++j )
  {
    v11 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 552), j);
    LOBYTE(v12) = 1;
    (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v11 + 336LL))(v11, v12);
  }
  for ( k = 0; k < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 544)); ++k )
  {
    v14 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 544), k);
    LOBYTE(v15) = 1;
    (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v14 + 336LL))(v14, v15);
  }
  v16 = (float)(*(_DWORD *)(*(_QWORD *)(a1 + 424) + 932LL) - *(_DWORD *)(*(_QWORD *)(a1 + 424) + 928LL)) / 100.0;
  v17 = *(float *)(a1 + 480);
  if ( (float)(v17 * v16) <= v17 )
    v17 = v17 * v16;
  v18 = *(float **)(a1 + 488);
  v19 = *(_QWORD *)v18;
  v20 = (__int64 *)v18;
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v162, 0.0, 0.0, v17, v18[109]);
  (*(void (__fastcall **)(__int64 *, __int64))(v19 + 992))(v20, v21);
  v22 = *(float **)(a1 + 496);
  v23 = *(_QWORD *)v22;
  v24 = (__int64 *)v22;
  cocos2d::CCRect::CCRect(
    (cocos2d::CCRect *)v162,
    0.0,
    0.0,
    fminf(*(float *)(a1 + 480), (float)((float)*(int *)(*(_QWORD *)(a1 + 424) + 960LL) / 100.0) * *(float *)(a1 + 480)),
    v22[109]);
  (*(void (__fastcall **)(__int64 *, __int64))(v23 + 992))(v24, v25);
  v26 = cocos2d::CCString::createWithFormat(
          "%i%%",
          *(_DWORD *)(*(_QWORD *)(a1 + 424) + 932LL) - *(_DWORD *)(*(_QWORD *)(a1 + 424) + 928LL));
  CString = cocos2d::CCString::getCString(v26);
  (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 448) + 360LL))(
    *(_QWORD *)(a1 + 448) + 360LL,
    CString);
  v28 = cocos2d::CCString::createWithFormat("%i%%", *(_DWORD *)(*(_QWORD *)(a1 + 424) + 960LL));
  v29 = cocos2d::CCString::getCString(v28);
  (**(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 456) + 360LL))(*(_QWORD *)(a1 + 456) + 360LL, v29);
  v30 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    v168 = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v168);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v30 = qword_905FE0;
  }
  Stat = GameStatsManager_getStat(v30, (const char *)&word_708028);
  LODWORD(v168) = *(_DWORD *)(*(_QWORD *)(a1 + 424) + 1188LL);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 464) + 160LL))(*(_QWORD *)(a1 + 464));
  sub_3E4F0(&v172, *(_QWORD *)(a1 + 424) + 344LL);
  v31 = &v172;
  if ( v174 > 0xF )
    v31 = (__int128 *)v172;
  (**(void (__fastcall ***)(__int64, __int128 *))(*(_QWORD *)(a1 + 464) + 360LL))(*(_QWORD *)(a1 + 464) + 360LL, v31);
  sub_3C310(&v172);
  if ( *(float *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 464) + 320LL))(*(_QWORD *)(a1 + 464)) > 250.0 )
  {
    v32 = *(__int64 **)(a1 + 464);
    v33 = *v32;
    (*(__int64 (__fastcall **)(__int64 *))(*v32 + 320))(v32);
    (*(void (__fastcall **)(_QWORD))(v33 + 160))(*(_QWORD *)(a1 + 464));
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 464) + 168LL))(*(_QWORD *)(a1 + 464));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 464) + 160LL))(*(_QWORD *)(a1 + 464));
  v34 = *(_DWORD *)(*(_QWORD *)(a1 + 424) + 672LL);
  v35 = 1;
  if ( v34 <= 1 )
  {
    v36 = 1;
  }
  else
  {
    v36 = 6;
    if ( v34 < 6 )
      v36 = *(_DWORD *)(*(_QWORD *)(a1 + 424) + 672LL);
  }
  v37 = cocos2d::CCString::createWithFormat("diffIcon_%02d_btn_001.png", v36);
  v38 = cocos2d::CCString::getCString(v37);
  v39 = *(_QWORD **)(a1 + 504);
  v40 = *v39;
  v41 = v39;
  v43 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(v39, v42);
  v44 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v43, v38);
  (*(void (__fastcall **)(_QWORD *, struct cocos2d::CCSpriteFrame *))(v40 + 1008))(v41, v44);
  v45 = *(float **)(a1 + 504);
  v46 = (*(double (__fastcall **)(float *))(*(_QWORD *)v45 + 168LL))(v45);
  v47 = *(float *)&v46 * v45[108];
  v48 = *(float *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 464) + 320LL))(*(_QWORD *)(a1 + 464));
  *(float *)&v46 = (*(float (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 464) + 168LL))(*(_QWORD *)(a1 + 464));
  v49 = **(_QWORD **)(a1 + 504);
  v50 = *(_QWORD *)(a1 + 504);
  cocos2d::CCPoint::CCPoint(
    (cocos2d::CCPoint *)v162,
    (float)((float)(*(float *)(a1 + 520) * 0.5)
          - (float)((float)((float)((float)((float)(*(float *)&v46 * v48) + 5.0) + (float)(v47 * 0.5)) + 30.0) * 0.5))
  + (float)(v47 * 0.5),
    (float)(*(float *)(a1 + 524) * 0.5) + 3.0);
  (*(void (__fastcall **)(__int64, __int64))(v49 + 184))(v50, v51);
  v52 = **(_QWORD **)(a1 + 464);
  v53 = (float)(*(float *)(a1 + 524) * 0.5) + 3.0;
  v54 = (float *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 504) + 200LL))(*(_QWORD *)(a1 + 504));
  v55 = *(_QWORD *)(a1 + 464);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v162, *v54 + 30.0, v53);
  (*(void (__fastcall **)(__int64, __int64))(v52 + 184))(v55, v56);
  v57 = *(void (__fastcall ***)(__int64, const char *))(*(_QWORD *)(a1 + 472) + 360LL);
  v58 = *(_QWORD *)(a1 + 472);
  v59 = cocos2d::CCString::createWithFormat(
          (const char *)&word_6E86F8,
          (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 424) + 1020LL) - *(_DWORD *)(*(_QWORD *)(a1 + 424) + 1024LL)));
  v60 = cocos2d::CCString::getCString(v59);
  (*v57)(v58 + 360, v60);
  v61 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    v162[0] = (__int64)operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v162[0]);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v61 = qword_905FE0;
  }
  v62 = sub_2DE190(v61, *(_QWORD *)(a1 + 424));
  v63 = (void (__fastcall ***)(_QWORD, __int16 *))(*(_QWORD *)(a1 + 472) + 368LL);
  if ( v62 )
  {
    v160 = -1;
    v161 = 50;
    v64 = &v160;
  }
  else
  {
    v64 = &word_6FEBC0;
  }
  (**v63)(v63, v64);
  do
  {
    v65 = qword_905FE0;
    if ( !qword_905FE0 )
    {
      v162[0] = (__int64)operator new(0x3E8u);
      qword_905FE0 = sub_2D2B40(v162[0]);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
      v65 = qword_905FE0;
    }
    v66 = sub_261000(
            *(_QWORD *)(a1 + 424),
            (unsigned int)v35,
            (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 424) + 992LL) - *(_DWORD *)(*(_QWORD *)(a1 + 424) + 996LL)));
    v67 = sub_2DFF60(v65, v66);
    v70 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 528), v35 - 1);
    v71 = *(_QWORD *)v70;
    v72 = "GJ_coinsIcon_001.png";
    if ( !v67 )
      v72 = "GJ_coinsIcon_gray_001.png";
    v73 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(v69, v68);
    v74 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v73, v72);
    (*(void (__fastcall **)(struct cocos2d::CCObject *, struct cocos2d::CCSpriteFrame *))(v71 + 1008))(v70, v74);
    if ( v67 )
    {
      v163 = -1;
      v164 = -1;
      v75 = &v163;
    }
    else
    {
      v165 = -7711;
      v166 = -7711;
      v167 = -31;
      v75 = &v166;
    }
    (**((void (__fastcall ***)(__int64, __int16 *))v70 + 40))((__int64)v70 + 320, v75);
    ++v35;
  }
  while ( v35 <= 3 );
  v76 = Stat;
  v77 = (int)v168;
  v78 = 0;
  if ( (int)v168 <= Stat )
  {
    v94 = qword_905FE0;
    if ( !qword_905FE0 )
    {
      v162[0] = (__int64)operator new(0x3E8u);
      qword_905FE0 = sub_2D2B40(v162[0]);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
      v94 = qword_905FE0;
    }
    v95 = sub_2E0550(v94, *(_QWORD *)(a1 + 424));
    v96 = *(_QWORD *)(a1 + 424);
    v97 = qword_905FE0;
    if ( !qword_905FE0 )
    {
      v162[0] = (__int64)operator new(0x3E8u);
      qword_905FE0 = sub_2D2B40(v162[0]);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
      v97 = qword_905FE0;
    }
    v98 = sub_2E0820(v97, v96, (unsigned int)(*(_DWORD *)(v96 + 992) - *(_DWORD *)(v96 + 996)));
    v83 = cocos2d::CCSprite::createWithSpriteFrameName((const char *)&xmmword_716E08);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *))(**(_QWORD **)(a1 + 440) + 464LL))(
      *(_QWORD *)(a1 + 440),
      v83);
    (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v83 + 160LL))(v83);
    v99 = cocos2d::CCString::createWithFormat("%i/%i", v98, (int)(float)((float)v95 * 0.25) + v95);
    v100 = cocos2d::CCString::getCString(v99);
    v88 = cocos2d::CCLabelBMFont::create(v100, (const char *)&qword_6FFF68);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *))(**(_QWORD **)(a1 + 440) + 464LL))(
      *(_QWORD *)(a1 + 440),
      v88);
    v101 = *(_QWORD *)v88;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v162, 0.0, 0.5);
    (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v101 + 288))(v88, v102);
    v103 = *(_QWORD *)v88;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v162, 8.0, 12.0);
    (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v103 + 184))(v88, v104);
    (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v88 + 160LL))(v88);
    v105 = *(_QWORD *)v83;
    v106 = *(float *)((*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v88 + 200LL))(v88) + 4) - 0.5;
    v107 = *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v88 + 320LL))(v88);
    v108 = (*(double (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v88 + 168LL))(v88);
    v109 = (float)((float)(*(float *)&v108 * v107)
                 + *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v88 + 200LL))(v88))
         + 9.0;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v162, v109, v106);
    (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v105 + 184))(v83, v110);
  }
  else
  {
    if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 544)) )
    {
      do
      {
        v79 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 544), v78);
        (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v79 + 336LL))(v79, 0);
        ++v78;
      }
      while ( v78 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 544)) );
    }
    v80 = cocos2d::CCSprite::createWithSpriteFrameName("GJLargeLock_001.png");
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *))(**(_QWORD **)(a1 + 440) + 464LL))(
      *(_QWORD *)(a1 + 440),
      v80);
    v81 = *(_QWORD *)v80;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v162, *(float *)(a1 + 520) * 0.5, *(float *)(a1 + 524) * 0.5);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v81 + 184))(v80, v82);
    v83 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_coinsIcon_001.png");
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *))(**(_QWORD **)(a1 + 440) + 464LL))(
      *(_QWORD *)(a1 + 440),
      v83);
    (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v83 + 160LL))(v83);
    v84 = *(_QWORD *)v83;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v162, *(float *)(a1 + 520) - 15.0, 15.0);
    (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v84 + 184))(v83, v85);
    v86 = cocos2d::CCString::createWithFormat("%i/%i", v76, v77);
    v87 = cocos2d::CCString::getCString(v86);
    v88 = cocos2d::CCLabelBMFont::create(v87, (const char *)&qword_6FFF68);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *))(**(_QWORD **)(a1 + 440) + 464LL))(
      *(_QWORD *)(a1 + 440),
      v88);
    v89 = *(_QWORD *)v88;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v162, 1.0, 0.5);
    (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v89 + 288))(v88, v90);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v162, -15.0, 0.5);
    v92 = v91;
    v93 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v83 + 200LL))(v83);
    cocos2d::CCPoint::operator+(v93, &v168, v92);
    (*(void (__fastcall **)(struct cocos2d::CCObject *, void **))(*(_QWORD *)v88 + 184LL))(v88, &v168);
    (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v88 + 160LL))(v88);
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 536), v80);
  }
  cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 536), v83);
  cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 536), v88);
LABEL_71:
  v158 = *(_QWORD *)(a1 + 560);
  if ( v158 )
  {
    v159 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 424) + 328LL) - *(_DWORD *)(*(_QWORD *)(a1 + 424) + 332LL));
    LOBYTE(v159) = (_DWORD)v159 == -1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v158 + 336LL))(v158, v159);
  }
  *(_BYTE *)(a1 + 416) = 0;
}
