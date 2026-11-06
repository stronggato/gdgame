#include <Geode/binding/MapPackCell.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0xf5610
// Method: MapPackCell::playCompleteEffect
// Hidden C++ exception states: #wind=2
unsigned __int64 __fastcall MapPackCell_playCompleteEffect(
        void (__fastcall ***a1)(_QWORD, _QWORD),
        _QWORD *a2,
        float a3)
{
  _QWORD *v3; // rdi
  float v5; // xmm6_4
  float v6; // xmm0_4
  __int64 v7; // rcx
  float v8; // xmm1_4
  float v9; // xmm0_4
  __int64 v10; // rax
  float v11; // xmm1_4
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __m128i si128; // xmm8
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int128 *v17; // rdx
  void *v18; // rcx
  void *v19; // rcx
  float v20; // xmm6_4
  __int128 v22; // [rsp+38h] [rbp-A0h] BYREF
  __m128i v23; // [rsp+48h] [rbp-90h]
  __int128 Src; // [rsp+58h] [rbp-80h] BYREF
  __int128 v25; // [rsp+68h] [rbp-70h]

  v3 = a2; /*0xf563f*/
  if ( a2[3] > 0xFu ) /*0xf564c*/
    a2 = (_QWORD *)*a2; /*0xf564e*/
  (*a1[45])(a1 + 45, a2); /*0xf565f*/
  v5 = *(float *)((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD)))(*a1)[40])(a1); /*0xf566d*/
  v6 = ((float (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD)))(*a1)[21])(a1) * v5; /*0xf567d*/
  if ( a3 >= v6 ) /*0xf5684*/
    return v3[2]; /*0xf5684*/
  v7 = v3[2]; /*0xf568a*/
  if ( !v7 ) /*0xf5691*/
    return v3[2]; /*0xf58ac*/
  v8 = a3 / v6; /*0xf569a*/
  if ( v7 < 0 ) /*0xf56a1*/
  {
    v10 = v3[2] & 1LL | ((unsigned __int64)v7 >> 1); /*0xf56b3*/
    v9 = (float)(int)v10 + (float)(int)v10; /*0xf56bb*/
  }
  else
  {
    v9 = (float)(int)v7; /*0xf56a3*/
  }
  v11 = v8 * v9; /*0xf56bf*/
  v12 = 0; /*0xf56c3*/
  if ( v11 >= 9.223372e18 ) /*0xf56d0*/
  {
    v11 = v11 - 9.223372e18; /*0xf56d2*/
    if ( v11 < 9.223372e18 ) /*0xf56d9*/
      v12 = 0x8000000000000000uLL; /*0xf56e5*/
  }
  v13 = v12 + (unsigned int)(int)v11; /*0xf56ed*/
  si128 = _mm_load_si128((const __m128i *)&Size); /*0xf56f0*/
  while ( 1 ) /*0xf5700*/
  {
    for ( ; v13; --v13 ) /*0xf5703*/
    {
      v15 = v3; /*0xf5710*/
      if ( v3[3] > 0xFu ) /*0xf5717*/
        v15 = (_QWORD *)*v3; /*0xf5719*/
      if ( (*((_BYTE *)v15 + v13) & 0xC0) != 0x80 ) /*0xf5722*/
        break; /*0xf5724*/
    }
    Src = 0; /*0xf572f*/
    v25 = 0; /*0xf5737*/
    sub_3C230(&Src); /*0xf575b*/
    v16 = sub_43D80(&Src, "...", 3u); /*0xf5773*/
    v22 = 0; /*0xf577b*/
    v23 = 0; /*0xf5783*/
    v22 = *(_OWORD *)v16; /*0xf578c*/
    v23 = *(__m128i *)(v16 + 16); /*0xf5795*/
    *(_QWORD *)(v16 + 16) = 0; /*0xf579a*/
    *(_QWORD *)(v16 + 24) = 15; /*0xf579e*/
    *(_BYTE *)v16 = 0; /*0xf57a6*/
    v17 = &v22; /*0xf57a9*/
    if ( v23.m128i_i64[1] > 0xFuLL ) /*0xf57b4*/
      v17 = (__int128 *)v22; /*0xf57b4*/
    (*a1[45])(a1 + 45, v17); /*0xf57c8*/
    if ( v23.m128i_i64[1] > 0xFuLL ) /*0xf57d4*/
    {
      v18 = (void *)v22; /*0xf57d9*/
      if ( (unsigned __int64)(v23.m128i_i64[1] + 1) >= 0x1000 ) /*0xf57e8*/
      {
        v18 = *(void **)(v22 - 8); /*0xf57ee*/
        if ( (unsigned __int64)(v22 - (_QWORD)v18 - 8) > 0x1F ) /*0xf57fd*/
          invoke_watson(0, 0, 0, 0, 0); /*0xf588a*/
      }
      j_j_free(v18); /*0xf57ff*/
    }
    v23 = si128; /*0xf5804*/
    LOBYTE(v22) = 0; /*0xf580b*/
    if ( *((_QWORD *)&v25 + 1) > 0xFu ) /*0xf5819*/
    {
      v19 = (void *)Src; /*0xf581e*/
      if ( (unsigned __int64)(*((_QWORD *)&v25 + 1) + 1LL) >= 0x1000 ) /*0xf582d*/
      {
        v19 = *(void **)(Src - 8); /*0xf5833*/
        if ( (unsigned __int64)(Src - (_QWORD)v19 - 8) > 0x1F ) /*0xf5842*/
          invoke_watson(0, 0, 0, 0, 0); /*0xf58a0*/
      }
      j_j_free(v19); /*0xf5844*/
    }
    if ( !v13 ) /*0xf584c*/
      break; /*0xf584c*/
    v20 = *(float *)((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD)))(*a1)[40])(a1); /*0xf585a*/
    if ( a3 >= (float)(((float (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD)))(*a1)[21])(a1) * v20) ) /*0xf5871*/
      break; /*0xf5871*/
    --v13; /*0xf5873*/
  }
  return v13; /*0xf58b0*/
}

// [2/4] Address: 0x14b1d0
// Method: MapPackCell::init
__int64 __fastcall MapPackCell_init(_QWORD *a1)
{
  cocos2d::CCObject *v2; // rax
  __int64 v3; // rcx
  cocos2d::CCObject *v4; // rax

  v2 = (cocos2d::CCObject *)cocos2d::CCArray::create(a1); /*0x14b1d9*/
  a1[74] = v2; /*0x14b1e2*/
  cocos2d::CCObject::retain(v2); /*0x14b1e9*/
  v4 = (cocos2d::CCObject *)cocos2d::CCArray::create(v3); /*0x14b1ef*/
  a1[73] = v4; /*0x14b1f8*/
  cocos2d::CCObject::retain(v4); /*0x14b1ff*/
  a1[70] = 0; /*0x14b207*/
  a1[71] = 0; /*0x14b20e*/
  a1[72] = 0; /*0x14b215*/
  return 1; /*0x14b21e*/
}

// [4/4] Address: 0x14bd90
// Method: MapPackCell::onClick
// Hidden C++ exception states: #wind=2
double __fastcall MapPackCell_onClick(__int64 a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rax
  struct cocos2d::CCScene *v6; // rax
  struct cocos2d::CCScene *v7; // rbx
  __int64 v8; // rcx
  cocos2d::CCDirector *v9; // rax
  void *v11; // [rsp+20h] [rbp-58h]
  __int128 v12; // [rsp+28h] [rbp-50h] BYREF
  __int64 v13; // [rsp+38h] [rbp-40h]
  __int64 v14; // [rsp+40h] [rbp-38h]
  _QWORD v15[4]; // [rsp+48h] [rbp-30h] BYREF

  v2 = *(_QWORD *)&qword_905FB0; /*0x14bda8*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x14bdb2*/
  {
    v11 = operator new(0x690u); /*0x14bdbe*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v11); /*0x14bdcc*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x14bddd*/
    v2 = *(_QWORD *)&qword_905FB0; /*0x14bddf*/
  }
  *(_DWORD *)(v2 + 1612) = *(_DWORD *)(*(_QWORD *)(a1 + 560) + 328LL); /*0x14bdf3*/
  sub_3E4F0(v15, *(_QWORD *)(a1 + 560) + 376LL); /*0x14be0c*/
  v3 = v15; /*0x14be12*/
  if ( v15[3] > 0xFu ) /*0x14be1d*/
    v3 = (_QWORD *)v15[0]; /*0x14be1d*/
  v12 = 0; /*0x14be26*/
  v13 = 0; /*0x14be2b*/
  v14 = 0; /*0x14be34*/
  v4 = -1; /*0x14be3d*/
  do /*0x14be47*/
    ++v4; /*0x14be44*/
  while ( *((_BYTE *)v3 + v4) ); /*0x14be47*/
  sub_3C230(&v12); /*0x14be53*/
  v5 = GJSearchObject_create_0(10, (__int64)&v12); /*0x14be62*/
  v6 = (struct cocos2d::CCScene *)LevelBrowserLayer_scene(v5); /*0x14be6a*/
  v7 = cocos2d::CCTransitionFade::create(0.5, v6); /*0x14be80*/
  v9 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v8); /*0x14be83*/
  cocos2d::CCDirector::pushScene(v9, v7); /*0x14be8f*/
  return sub_3C310(v15); /*0x14bea0*/
}

// Address: 0x14b230
// Method: MapPackCell::loadFromMapPack
// Hidden C++ exception states: #wind=2
void __fastcall MapPackCell_loadFromMapPack(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v4; // r14d
  cocos2d::CCString *v5; // rax
  const char *CString; // rax
  const char *v7; // rcx
  struct cocos2d::CCSprite *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  const char *v11; // rcx
  struct cocos2d::CCLabelBMFont *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rbx
  cocos2d::CCObject *v17; // rdi
  cocos2d::CCObject *v18; // rax
  struct cocos2d::CCMenu *v19; // r15
  __int64 v20; // rbx
  float v21; // xmm6_4
  float *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  char v25; // r12
  cocos2d::CCArray *v26; // rcx
  signed int v27; // ebx
  int v28; // eax
  cocos2d::CCObject *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rbx
  __int64 v32; // rax
  struct cocos2d::CCSprite *v33; // r13
  __int64 v34; // rdx
  void (__fastcall *v35)(char *, __int64); // r8
  __int64 v36; // rbx
  __int64 v37; // rax
  struct cocos2d::CCSprite *v38; // rdi
  __int64 v39; // rcx
  float v40; // xmm6_4
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rax
  cocos2d::CCArray *v46; // rcx
  int v47; // ebx
  int v48; // eax
  float v49; // xmm0_4
  __int64 v50; // rbx
  __int64 v51; // rax
  cocos2d::CCArray *v52; // rcx
  unsigned int v53; // ebx
  int v54; // eax
  cocos2d::CCString *v55; // rax
  const char *v56; // rax
  struct cocos2d::CCLabelBMFont *v57; // rdi
  __int64 v58; // rbx
  __int64 v59; // rax
  float v60; // xmm6_4
  __int64 v61; // rax
  int v62; // ecx
  unsigned int v63; // r15d
  struct cocos2d::CCObject *v64; // rdi
  float v65; // xmm1_4
  void (__fastcall *v66)(struct cocos2d::CCObject *, __int64); // rbx
  __int64 v67; // rax
  cocos2d::CCString *v68; // rax
  const char *v69; // rax
  struct cocos2d::CCLabelBMFont *v70; // r14
  __int64 v71; // rbx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rbx
  __int64 v75; // rax
  struct cocos2d::CCObject *v76; // rdi
  float v77; // xmm1_4
  void (__fastcall *v78)(struct cocos2d::CCObject *, __int64); // rbx
  __int64 v79; // rax
  cocos2d::CCString *v80; // rax
  const char *v81; // rax
  struct cocos2d::CCLabelBMFont *v82; // r14
  __int64 v83; // rbx
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rbx
  __int64 v87; // rax
  struct cocos2d::CCSprite *v88; // rdi
  __int64 v89; // rax
  __int64 v90; // rbx
  __int64 v91; // rax
  __int16 v92; // [rsp+40h] [rbp-39h] BYREF
  char v93; // [rsp+42h] [rbp-37h]
  _BYTE v94[8]; // [rsp+44h] [rbp-35h] BYREF
  __int16 v95; // [rsp+4Ch] [rbp-2Dh] BYREF
  char v96; // [rsp+4Eh] [rbp-2Bh]
  _QWORD v97[4]; // [rsp+50h] [rbp-29h] BYREF

  v2 = a2;
  v4 = 0;
  LOBYTE(a2) = 1;
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 544) + 576LL))(*(_QWORD *)(a1 + 544), a2);
  cocos2d::CCArray::removeAllObjects(*(cocos2d::CCArray **)(a1 + 592));
  cocos2d::CCArray::removeAllObjects(*(cocos2d::CCArray **)(a1 + 584));
  *(_QWORD *)(a1 + 560) = v2;
  LODWORD(v2) = *(_DWORD *)(v2 + 332);
  v5 = cocos2d::CCString::createWithFormat("difficulty_%02d_btn_001.png", v2);
  CString = cocos2d::CCString::getCString(v5);
  v7 = "difficulty_auto_btn_001.png";
  if ( (_DWORD)v2 )
    v7 = CString;
  v8 = cocos2d::CCSprite::createWithSpriteFrameName(v7);
  v9 = *(_QWORD *)v8;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v94, 31.0, *(float *)(a1 + 532) * 0.5);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v9 + 184))(v8, v10);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v8 + 160LL))(v8);
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v8, 2);
  sub_3E4F0(v97, *(_QWORD *)(a1 + 560) + 344LL);
  v11 = (const char *)v97;
  if ( v97[3] > 0xFu )
    v11 = (const char *)v97[0];
  v12 = cocos2d::CCLabelBMFont::create(v11, (const char *)&qword_6FFF68);
  sub_3C310(v97);
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 544) + 464LL))(
    *(_QWORD *)(a1 + 544),
    v12);
  v13 = *(_QWORD *)(a1 + 560);
  v92 = *(_WORD *)(v13 + 411);
  v93 = *(_BYTE *)(v13 + 413);
  (**((void (__fastcall ***)(__int64, __int16 *))v12 + 46))((__int64)v12 + 368, &v92);
  v14 = *(_QWORD *)v12;
  cocos2d::CCPoint::CCPoint(
    (cocos2d::CCPoint *)v94,
    (float)((float)(*(float *)(a1 + 528) * 0.5) - 14.0) - 2.0,
    (float)(*(float *)(a1 + 532) * 0.5) + 30.0);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v14 + 184))(v12, v15);
  if ( *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v12 + 320LL))(v12) > 205.0 )
  {
    v16 = *(_QWORD *)v12;
    (*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v12 + 320LL))(v12);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(v16 + 160))(v12);
  }
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v12 + 168LL))(v12);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v12 + 160LL))(v12);
  v17 = ButtonSprite_create(
          (int)"View",
          50,
          0,
          0.60000002,
          0,
          (__int64)&qword_6FFF68,
          (__int64)"GJ_button_01.png",
          1112014848);
  v18 = CCMenuItemSpriteExtra_create((int)v17, 0, a1, (__int64)MapPackCell_onClick);
  *(_QWORD *)(a1 + 568) = v18;
  *((_DWORD *)v18 + 93) = 1069547520;
  v19 = cocos2d::CCMenu::create(*(struct cocos2d::CCMenuItem **)(a1 + 568), 0);
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCMenu *))(**(_QWORD **)(a1 + 544) + 464LL))(
    *(_QWORD *)(a1 + 544),
    v19);
  v20 = *(_QWORD *)v19;
  v21 = *(float *)(a1 + 532) * 0.5;
  v22 = (float *)(*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v17 + 320LL))(v17);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v94, (float)(*(float *)(a1 + 528) - (float)(*v22 * 0.5)) - 9.0, v21);
  (*(void (__fastcall **)(struct cocos2d::CCMenu *, __int64))(v20 + 184))(v19, v23);
  v24 = qword_905FE0;
  if ( !qword_905FE0 )
  {
    v97[0] = operator new(0x3E8u);
    qword_905FE0 = sub_2D2B40(v97[0]);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
    v24 = qword_905FE0;
  }
  v25 = sub_2DEF50(v24, *(unsigned int *)(*(_QWORD *)(a1 + 560) + 328LL));
  if ( !v25 )
  {
    v26 = *(cocos2d::CCArray **)(*(_QWORD *)(a1 + 560) + 320LL);
    v27 = v26 ? cocos2d::CCArray::count(v26) : 0;
    if ( (int)GJMapPack_completedMaps(*(_QWORD *)(a1 + 560)) >= v27 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 568) + 336LL))(*(_QWORD *)(a1 + 568), 0);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 568) + 936LL))(*(_QWORD *)(a1 + 568), 0);
      v28 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_rewardBtn_001.png");
      v29 = CCMenuItemSpriteExtra_create(v28, 0, a1, (__int64)sub_14BEC0);
      *(_QWORD *)(a1 + 576) = v29;
      *((_DWORD *)v29 + 93) = 1069547520;
      (*(void (__fastcall **)(struct cocos2d::CCMenu *, _QWORD))(*(_QWORD *)v19 + 464LL))(v19, *(_QWORD *)(a1 + 576));
      v30 = **(_QWORD **)(a1 + 576);
      v31 = *(_QWORD *)(a1 + 576);
      v32 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 568) + 200LL))(*(_QWORD *)(a1 + 568));
      (*(void (__fastcall **)(__int64, __int64))(v30 + 184))(v31, v32);
    }
  }
  v95 = 0;
  v96 = 0;
  v33 = cocos2d::CCSprite::create("GJ_progressBar_001.png");
  (**((void (__fastcall ***)(__int64, __int16 *))v33 + 40))((__int64)v33 + 320, &v95);
  v34 = *((_QWORD *)v33 + 40);
  v35 = *(void (__fastcall **)(char *, __int64))(v34 + 40);
  LOBYTE(v34) = 125;
  v35((char *)v33 + 320, v34);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v33 + 136LL))(v33);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v33 + 120LL))(v33);
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(**(_QWORD **)(a1 + 544) + 456LL))(
    *(_QWORD *)(a1 + 544),
    v33,
    3);
  v36 = *(_QWORD *)v33;
  cocos2d::CCPoint::CCPoint(
    (cocos2d::CCPoint *)v97,
    (float)(*(float *)(a1 + 528) * 0.5) - 14.0,
    (float)(*(float *)(a1 + 532) * 0.5) - 2.0);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v36 + 184))(v33, v37);
  v38 = cocos2d::CCSprite::create("GJ_progressBar_001.png");
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v38 + 120LL))(v38);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v38 + 136LL))(v38);
  v39 = *(_QWORD *)(a1 + 560);
  v92 = *(_WORD *)(v39 + 408);
  v93 = *(_BYTE *)(v39 + 410);
  (**((void (__fastcall ***)(__int64, __int16 *))v38 + 40))((__int64)v38 + 320, &v92);
  v40 = *((float *)v38 + 108);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)v33 + 456LL))(
    v33,
    v38,
    1);
  v41 = *(_QWORD *)v38;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v97, 0.0, 0.5);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v41 + 288))(v38, v42);
  v43 = *(_QWORD *)v38;
  v44 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v33 + 320LL))(v33);
  cocos2d::CCPoint::CCPoint(
    (cocos2d::CCPoint *)v97,
    (float)(v40 - (float)(v40 * 0.98500001)) * 0.5,
    *(float *)(v44 + 4) * 0.5);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v43 + 184))(v38, v45);
  v46 = *(cocos2d::CCArray **)(*(_QWORD *)(a1 + 560) + 320LL);
  if ( v46 )
    v47 = cocos2d::CCArray::count(v46);
  else
    v47 = 0;
  v48 = GJMapPack_completedMaps(*(_QWORD *)(a1 + 560));
  v49 = (float)v47;
  v50 = *(_QWORD *)v38;
  cocos2d::CCRect::CCRect(
    (cocos2d::CCRect *)v97,
    0.0,
    0.0,
    fminf(*((float *)v38 + 108), *((float *)v38 + 108) * (float)((float)v48 / v49)),
    *((float *)v38 + 109));
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v50 + 992))(v38, v51);
  v52 = *(cocos2d::CCArray **)(*(_QWORD *)(a1 + 560) + 320LL);
  if ( v52 )
    v53 = cocos2d::CCArray::count(v52);
  else
    v53 = 0;
  v54 = GJMapPack_completedMaps(*(_QWORD *)(a1 + 560));
  v55 = cocos2d::CCString::createWithFormat("%i/%i", v54, v53);
  v56 = cocos2d::CCString::getCString(v55);
  v57 = cocos2d::CCLabelBMFont::create(v56, (const char *)&qword_6FFF68);
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *, __int64))(**(_QWORD **)(a1 + 544) + 456LL))(
    *(_QWORD *)(a1 + 544),
    v57,
    4);
  v58 = *(_QWORD *)v57;
  v59 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v33 + 200LL))(v33);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v58 + 184))(v57, v59);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v57 + 160LL))(v57);
  v60 = (float)(*(float *)(a1 + 532) * 0.5) - 30.0;
  v61 = *(_QWORD *)(a1 + 560);
  v62 = *(_DWORD *)(v61 + 336);
  LOBYTE(v4) = v62 > 0;
  v63 = v4 + (*(_DWORD *)(v61 + 340) > 0);
  if ( v62 > 0 )
  {
    v64 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_starsIcon_001.png");
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *, __int64))(**(_QWORD **)(a1 + 544) + 456LL))(
      *(_QWORD *)(a1 + 544),
      v64,
      2);
    v65 = (float)(*(float *)(a1 + 528) * 0.5) - 4.0;
    v66 = *(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v64 + 184LL);
    if ( v63 > 1 )
      v65 = v65 - 40.0;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v97, v65, v60);
    v66(v64, v67);
    v68 = cocos2d::CCString::createWithFormat(
            (const char *)&word_6E86F8,
            *(unsigned int *)(*(_QWORD *)(a1 + 560) + 336LL));
    v69 = cocos2d::CCString::getCString(v68);
    v70 = cocos2d::CCLabelBMFont::create(v69, (const char *)&qword_6FFF68);
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *, __int64))(**(_QWORD **)(a1 + 544) + 456LL))(
      *(_QWORD *)(a1 + 544),
      v70,
      1);
    v71 = *(_QWORD *)v70;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v97, 1.0, 0.5);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v71 + 288))(v70, v72);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v97, -17.0, 0.0);
    v74 = v73;
    v75 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v64 + 200LL))(v64);
    cocos2d::CCPoint::operator+(v75, v94, v74);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, _BYTE *))(*(_QWORD *)v70 + 184LL))(v70, v94);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v70 + 160LL))(v70);
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 592), v64);
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 584), v70);
    if ( v25 )
    {
      v92 = -1;
      v93 = 50;
      (**((void (__fastcall ***)(__int64, __int16 *))v70 + 46))((__int64)v70 + 368, &v92);
    }
  }
  if ( *(int *)(*(_QWORD *)(a1 + 560) + 340LL) <= 0 )
  {
    if ( !v25 )
      return;
    goto LABEL_32;
  }
  v76 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_coinsIcon_001.png");
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *, __int64))(**(_QWORD **)(a1 + 544) + 456LL))(
    *(_QWORD *)(a1 + 544),
    v76,
    2);
  v77 = (float)(*(float *)(a1 + 528) * 0.5) - 4.0;
  v78 = *(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v76 + 184LL);
  if ( v63 > 1 )
    v77 = v77 + 40.0;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v97, v77, v60);
  v78(v76, v79);
  v80 = cocos2d::CCString::createWithFormat(
          (const char *)&word_6E86F8,
          *(unsigned int *)(*(_QWORD *)(a1 + 560) + 340LL));
  v81 = cocos2d::CCString::getCString(v80);
  v82 = cocos2d::CCLabelBMFont::create(v81, (const char *)&qword_6FFF68);
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *, __int64))(**(_QWORD **)(a1 + 544) + 456LL))(
    *(_QWORD *)(a1 + 544),
    v82,
    1);
  v83 = *(_QWORD *)v82;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v97, 1.0, 0.5);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v83 + 288))(v82, v84);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v97, -19.0, 0.0);
  v86 = v85;
  v87 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v76 + 200LL))(v76);
  cocos2d::CCPoint::operator+(v87, v94, v86);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, _BYTE *))(*(_QWORD *)v82 + 184LL))(v82, v94);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v82 + 160LL))(v82);
  cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 592), v76);
  cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 584), v82);
  if ( v25 )
  {
    v92 = -1;
    v93 = 50;
    (**((void (__fastcall ***)(__int64, __int16 *))v82 + 46))((__int64)v82 + 368, &v92);
LABEL_32:
    v88 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_completesIcon_001.png");
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(**(_QWORD **)(a1 + 544) + 456LL))(
      *(_QWORD *)(a1 + 544),
      v88,
      5);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v88 + 160LL))(v88);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v97, 86.0, 1.0);
    v90 = v89;
    v91 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v33 + 200LL))(v33);
    cocos2d::CCPoint::operator+(v91, v94, v90);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, _BYTE *))(*(_QWORD *)v88 + 184LL))(v88, v94);
  }
}
