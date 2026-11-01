#include <Geode/binding/GJScoreCell.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x14de30
// Method: GJScoreCell::init
char __fastcall GJScoreCell_init(__int64 a1)
{
  *(_QWORD *)(a1 + 568) = 0; /*0x14de30*/
  return 1; /*0x14de3d*/
}

// [2/4] Address: 0x152d40
// Method: GJScoreCell::~GJScoreCell
_QWORD *__fastcall GJScoreCell__dtor_GJScoreCell(_QWORD *Block, char a2)
{
  *Block = &GJScoreCell::`vftable'; /*0x152d53*/
  Block[40] = &GJScoreCell::`vftable'; /*0x152d60*/
  Block[41] = &GJScoreCell::`vftable'; /*0x152d6e*/
  Block[42] = &GJScoreCell::`vftable'; /*0x152d7c*/
  Block[43] = &GJScoreCell::`vftable'; /*0x152d8a*/
  Block[44] = &GJScoreCell::`vftable'; /*0x152d98*/
  Block[70] = &GJScoreCell::`vftable'; /*0x152da6*/
  URLCell__dtor_URLCell(Block); /*0x152dad*/
  if ( (a2 & 1) != 0 ) /*0x152db5*/
    j_j_free(Block); /*0x152dbf*/
  return Block; /*0x152dc4*/
}

// [3/4] Address: 0x154600
// Method: GJScoreCell::FLAlert_Clicked
// Hidden C++ exception states: #wind=1
void __fastcall GJScoreCell_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  void *v3; // rax

  if ( a3 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 101 && !*(_QWORD *)&qword_905FB0 ) /*0x15461f*/
  {
    v3 = operator new(0x690u); /*0x154626*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v3); /*0x154639*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x15464e*/
  }
}

// [4/4] Address: 0x1981f0
// Method: GJScoreCell::loadFromScore
// Hidden C++ exception states: #wind=11
char __fastcall GJScoreCell_loadFromScore(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  float v9; // xmm7_4
  float v10; // xmm0_4
  float v11; // xmm11_4
  float v12; // xmm8_4
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  const char *v18; // rcx
  cocos2d::CCLabelBMFont *v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rax
  cocos2d::CCLabelBMFont *v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // rdi
  __int64 v36; // rax
  _BYTE *v37; // rbx
  unsigned __int64 v38; // rcx
  __int64 v39; // rbx
  _WORD *v40; // rsi
  void *v41; // rcx
  __int64 v42; // r12
  unsigned __int64 v43; // rbx
  unsigned __int64 v44; // rsi
  char *v45; // r8
  signed __int64 v46; // rcx
  unsigned __int64 v47; // rdx
  __int64 v48; // rdi
  size_t v49; // r8
  void **v50; // rdx
  __int64 v51; // rax
  size_t v52; // rax
  size_t v53; // r8
  void **v54; // rdx
  void *v55; // rcx
  void **v56; // rcx
  cocos2d::CCLabelBMFont *v57; // rdi
  __int64 v58; // rbx
  __int64 v59; // rax
  __int64 v60; // rcx
  bool v61; // al
  cocos2d::CCArray *v62; // r14
  __int64 v63; // rbx
  __int64 v64; // rdi
  unsigned __int8 v65; // si
  __int64 v66; // rax
  __int64 v67; // rcx
  cocos2d::CCArray *v68; // r14
  __int64 v69; // rbx
  __int64 v70; // rdi
  unsigned __int8 v71; // si
  __int64 v72; // rax
  __int64 v73; // rax
  int v74; // ecx
  _DWORD *v75; // rax
  bool v76; // r14
  cocos2d::CCObject *v77; // rbx
  cocos2d::CCObject *v78; // rdi
  float v79; // xmm8_4
  __int64 v80; // rsi
  __int64 v81; // rbx
  __int64 v82; // rax
  __int64 v83; // rax
  cocos2d::CCString *v84; // rax
  const char *CString; // rax
  __int128 *v86; // rdi
  cocos2d::CCObject *v87; // rbx
  cocos2d::CCObject *v88; // rsi
  __int64 v89; // rdi
  __int64 v90; // rbx
  __int64 v91; // rax
  __int64 v92; // rax
  cocos2d::CCObject *v93; // rbx
  cocos2d::CCObject *v94; // rsi
  __int64 v95; // rdi
  __int64 v96; // rbx
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  cocos2d::CCObject *v101; // rbx
  cocos2d::CCObject *v102; // rsi
  __int64 v103; // rdi
  __int64 v104; // rbx
  __int64 v105; // rax
  __int64 v106; // rax
  struct cocos2d::CCSprite *v107; // rax
  int v108; // ebx
  cocos2d::CCObject *v109; // rsi
  __int64 v110; // rdi
  __int64 v111; // rbx
  __int64 v112; // rax
  __int64 v113; // rax
  void *v114; // r8
  void *v115; // rcx
  __int128 *v117; // [rsp+50h] [rbp-B0h] BYREF
  void *v118[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v119; // [rsp+68h] [rbp-98h]
  float v120; // [rsp+70h] [rbp-90h] BYREF
  float v121; // [rsp+74h] [rbp-8Ch]
  void *Block[2]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v123; // [rsp+88h] [rbp-78h]
  __int128 Src; // [rsp+98h] [rbp-68h] BYREF
  __int128 v125; // [rsp+A8h] [rbp-58h]
  __int128 v126; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v127; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v128; // [rsp+D0h] [rbp-30h]
  _QWORD v129[4]; // [rsp+D8h] [rbp-28h] BYREF

  LODWORD(v117) = 0; /*0x19825d*/
  if ( !a2 || !(unsigned __int8)sub_6060E0(a1, 0, 0, a4, 1131413504, 1, 0) ) /*0x198299*/
    return 0; /*0x199214*/
  *(_QWORD *)(a1 + 1048) = a2; /*0x1982a6*/
  *(_QWORD *)(a1 + 1112) = a3; /*0x1982ad*/
  *(_BYTE *)(a1 + 744) = 1; /*0x1982b4*/
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 1096LL))(a1); /*0x1982c2*/
  *(_BYTE *)(a1 + 596) = 1; /*0x1982c8*/
  v8 = cocos2d::CCDirector::sharedDirector(v7); /*0x1982d0*/
  cocos2d::CCDirector::getWinSize(v8, &v120); /*0x1982de*/
  v9 = v120 * 0.5; /*0x1982f3*/
  v10 = *(float *)(a1 + 736) * 0.5; /*0x198301*/
  v11 = (float)(v121 * 0.5) + v10; /*0x198316*/
  v12 = (float)(v121 * 0.5) - v10; /*0x19831b*/
  v17 = cocos2d::CCMenu::create(v14, v13, v15, v16); /*0x198320*/
  *(_QWORD *)(a1 + 552) = v17; /*0x198326*/
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 584) + 456LL))(*(_QWORD *)(a1 + 584), v17, 10); /*0x198347*/
  Src = 0; /*0x19834d*/
  v125 = 0u; /*0x198351*/
  *(_QWORD *)&Src = sub_3C460(32); /*0x198363*/
  *(_QWORD *)&v125 = 17; /*0x198367*/
  *((_QWORD *)&v125 + 1) = 31; /*0x19836f*/
  strcpy((char *)Src, "Upload Sound Pack"); /*0x19837e*/
  sub_606E80(a1, &Src); /*0x198396*/
  sub_3E4F0(v129, *(_QWORD *)(a1 + 1048) + 384LL); /*0x1983ad*/
  if ( !v129[2] ) /*0x1983b7*/
    sub_3F5A0(v129, &word_709BFC, 1u); /*0x1983ca*/
  v18 = (const char *)v129; /*0x1983cf*/
  if ( v129[3] > 0xFu ) /*0x1983d8*/
    v18 = (const char *)v129[0]; /*0x1983d8*/
  v19 = cocos2d::CCLabelBMFont::create(v18, "goldFont.fnt"); /*0x1983ea*/
  (*(void (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v19 + 160LL))(v19); /*0x198405*/
  cocos2d::CCLabelBMFont::limitLabelWidth(v19, *(float *)(a1 + 732) - 60.0, 0.80000001, 0.30000001); /*0x19842c*/
  v20 = *(_QWORD *)v19; /*0x198432*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v117, v9, v11 - 48.0); /*0x198449*/
  (*(void (__fastcall **)(cocos2d::CCLabelBMFont *, __int64))(v20 + 184))(v19, v21); /*0x198455*/
  (*(void (__fastcall **)(_QWORD, cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))( /*0x198468*/
    *(_QWORD *)(a1 + 584),
    v19);
  v22 = cocos2d::CCLabelBMFont::create("You cannot change the name once it is shared.", "chatFont.fnt"); /*0x198482*/
  (*(void (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v22 + 160LL))(v22); /*0x198496*/
  LOWORD(v117) = -5121; /*0x1984a4*/
  BYTE2(v117) = 120; /*0x1984a9*/
  (**((void (__fastcall ***)(__int64, __int128 **))v22 + 46))((__int64)v22 + 368, &v117); /*0x1984c0*/
  cocos2d::CCLabelBMFont::limitLabelWidth(v22, *(float *)(a1 + 732) - 50.0, 0.5, 0.25); /*0x1984e2*/
  v23 = *(_QWORD *)v22; /*0x1984e8*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v117, v9, v11 - 70.0); /*0x1984ff*/
  (*(void (__fastcall **)(cocos2d::CCLabelBMFont *, __int64))(v23 + 184))(v22, v24); /*0x19850b*/
  (*(void (__fastcall **)(_QWORD, cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))( /*0x19851e*/
    *(_QWORD *)(a1 + 584),
    v22);
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)&Src, 0.0, 0.0, 40.0, 40.0); /*0x19853f*/
  v26 = cocos2d::extension::CCScale9Sprite::create("square02_small.png", v25); /*0x198555*/
  v27 = *(_QWORD *)v26; /*0x198558*/
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v117, *(float *)(a1 + 732) - 40.0, 52.0); /*0x198575*/
  (*(void (__fastcall **)(__int64, __int64))(v27 + 312))(v26, v28); /*0x198581*/
  (**(void (__fastcall ***)(__int64, void *))(v26 + 320))(v26 + 320, &unk_6FDFA0); /*0x19859c*/
  LOBYTE(v29) = 90; /*0x1985a5*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v26 + 320) + 40LL))(v26 + 320, v29); /*0x1985ae*/
  v30 = *(_QWORD *)v26; /*0x1985b1*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v117, v9, v11 - 108.0); /*0x1985cb*/
  (*(void (__fastcall **)(__int64, __int64))(v30 + 184))(v26, v31); /*0x1985d7*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 584) + 464LL))(*(_QWORD *)(a1 + 584), v26); /*0x1985ea*/
  v33 = *(_QWORD *)(a1 + 1048); /*0x1985f0*/
  if ( *(_QWORD *)(v33 + 432) ) /*0x1985f7*/
  {
    sub_3E4F0(&v126, v33 + 416); /*0x19862a*/
    sub_463F60(Block, v36); /*0x198637*/
    v35 = *((_QWORD *)&v123 + 1); /*0x19863c*/
    v34 = v123; /*0x198640*/
  }
  else
  {
    *(_OWORD *)Block = 0; /*0x198604*/
    v34 = 0; /*0x198609*/
    *(_QWORD *)&v123 = 0; /*0x19860c*/
    v35 = 15; /*0x198610*/
    *((_QWORD *)&v123 + 1) = 15; /*0x198615*/
    LOBYTE(Block[0]) = 0; /*0x198619*/
  }
  if ( !v34 ) /*0x198647*/
  {
    if ( v35 < 0x19 ) /*0x198651*/
    {
      v38 = v35 >> 1; /*0x19868b*/
      v39 = 0x7FFFFFFFFFFFFFFFLL; /*0x19868e*/
      if ( v35 <= 0x7FFFFFFFFFFFFFFFLL - (v35 >> 1) ) /*0x1986a1*/
      {
        v39 = 31; /*0x1986a7*/
        if ( v35 + v38 > 0x1F ) /*0x1986af*/
          v39 = v35 + v38; /*0x1986af*/
      }
      v40 = (_WORD *)sub_3C460(v39 + 1); /*0x1986bc*/
      *(_QWORD *)&v123 = 25; /*0x1986bf*/
      *((_QWORD *)&v123 + 1) = v39; /*0x1986c7*/
      qmemcpy(v40, "(No description provided", 24); /*0x1986d2*/
      v32 = (unsigned __int8)aNoDescriptionP[24]; /*0x1986e2*/
      v40[12] = (unsigned __int8)aNoDescriptionP[24]; /*0x1986e9*/
      if ( v35 > 0xF ) /*0x1986f4*/
      {
        v41 = Block[0]; /*0x1986fa*/
        if ( v35 + 1 >= 0x1000 ) /*0x198709*/
        {
          v41 = (void *)*((_QWORD *)Block[0] - 1); /*0x19870f*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v41 - 8) > 0x1F ) /*0x19871e*/
LABEL_84:
            invoke_watson(0, 0, 0, 0, 0); /*0x19917c*/
        }
        j_j_free(v41); /*0x198724*/
      }
      Block[0] = v40; /*0x198729*/
    }
    else
    {
      v37 = Block[0]; /*0x19865c*/
      *(_QWORD *)&v123 = 25; /*0x198662*/
      memmove(Block[0], "(No description provided)", 0x19u); /*0x19867a*/
      v37[25] = 0; /*0x19867f*/
    }
  }
  *(_OWORD *)v118 = 0; /*0x198731*/
  v119 = 0; /*0x198737*/
  SetupSmartBlockLayer_onCreateAll(v32); /*0x19873c*/
  sub_7E840(Block, v118, (unsigned int)dword_8F83A4); /*0x198752*/
  v42 = -1; /*0x198761*/
  if ( v118[0] != v118[1] ) /*0x198772*/
  {
    Src = 0; /*0x19877b*/
    *(_QWORD *)&v125 = 0; /*0x19877f*/
    *((_QWORD *)&v125 + 1) = 15; /*0x198783*/
    LOBYTE(Src) = 0; /*0x19878b*/
    LODWORD(v117) = 7; /*0x19878f*/
    sub_58940(&Src); /*0x19879f*/
    v43 = 0; /*0x1987a4*/
    v44 = 0; /*0x1987a7*/
    v45 = (char *)v118[0]; /*0x1987af*/
    v46 = (char *)v118[1] - (char *)v118[0]; /*0x1987b4*/
    v47 = ((char *)v118[1] - (char *)v118[0]) / 24; /*0x1987c8*/
    if ( v47 ) /*0x1987cb*/
    {
      v48 = 0; /*0x1987d1*/
      do /*0x198894*/
      {
        if ( (unsigned __int64)v123 < v43 ) /*0x1987e7*/
          goto LABEL_93; /*0x1987e7*/
        v49 = *(_QWORD *)&v45[v48] - v43; /*0x1987f1*/
        if ( (unsigned __int64)v123 - v43 < v49 ) /*0x1987fa*/
          v49 = v123 - v43; /*0x1987fa*/
        v50 = Block; /*0x1987fe*/
        if ( *((_QWORD *)&v123 + 1) > 0xFu ) /*0x198808*/
          v50 = (void **)Block[0]; /*0x198808*/
        sub_43D80(&Src, (char *)v50 + v43, v49); /*0x198815*/
        v43 = *(_QWORD *)((char *)v118[0] + v48) + *(_QWORD *)((char *)v118[0] + v48 + 8); /*0x198824*/
        *(_QWORD *)((char *)v118[0] + v48) = v125; /*0x19882c*/
        *(_QWORD *)((char *)v118[0] + v48 + 8) = 1; /*0x198835*/
        GJGameLevel_getListSnapshot(*(_QWORD *)((char *)v118[0] + v48 + 16), 0.0); /*0x19884c*/
        sub_3CBD0(&Src); /*0x198864*/
        ++v44; /*0x198869*/
        v48 += 24; /*0x19886c*/
        v45 = (char *)v118[0]; /*0x198875*/
        v46 = (char *)v118[1] - (char *)v118[0]; /*0x19887a*/
        v47 = ((char *)v118[1] - (char *)v118[0]) / 24; /*0x19888e*/
      }
      while ( v44 < v47 ); /*0x198894*/
      v51 = v123; /*0x19889a*/
      if ( (unsigned __int64)v123 < v43 ) /*0x1988a1*/
LABEL_93:
        sub_3E4D0(v46, v47); /*0x19926b*/
    }
    else
    {
      v51 = v123; /*0x1988a9*/
    }
    v52 = v51 - v43; /*0x1988ad*/
    v53 = -1; /*0x1988b0*/
    if ( v52 != -1 ) /*0x1988b6*/
      v53 = v52; /*0x1988b6*/
    v54 = Block; /*0x1988ba*/
    if ( *((_QWORD *)&v123 + 1) > 0xFu ) /*0x1988c4*/
      v54 = (void **)Block[0]; /*0x1988c4*/
    sub_43D80(&Src, (char *)v54 + v43, v53); /*0x1988d1*/
    if ( *((_QWORD *)&v123 + 1) > 0xFu ) /*0x1988de*/
    {
      v55 = Block[0]; /*0x1988e3*/
      if ( (unsigned __int64)(*((_QWORD *)&v123 + 1) + 1LL) >= 0x1000 ) /*0x1988f2*/
      {
        v55 = (void *)*((_QWORD *)Block[0] - 1); /*0x1988f8*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v55 - 8) > 0x1F ) /*0x198907*/
          invoke_watson(0, 0, 0, 0, 0); /*0x198918*/
      }
      j_j_free(v55); /*0x19891f*/
    }
    *(_OWORD *)Block = Src; /*0x198928*/
    v123 = v125; /*0x198931*/
  }
  v56 = Block; /*0x198935*/
  if ( *((_QWORD *)&v123 + 1) > 0xFu ) /*0x19893f*/
    v56 = (void **)Block[0]; /*0x19893f*/
  v57 = cocos2d::CCLabelBMFont::create((const char *)v56, "chatFont.fnt"); /*0x198952*/
  (*(void (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v57 + 160LL))(v57); /*0x19896f*/
  cocos2d::CCLabelBMFont::limitLabelWidth(v57, *(float *)(a1 + 732) - 56.0, 0.55000001, 0.2); /*0x198991*/
  v58 = *(_QWORD *)v57; /*0x198997*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v117, v9, v11 - 108.0); /*0x1989a5*/
  (*(void (__fastcall **)(cocos2d::CCLabelBMFont *, __int64))(v58 + 184))(v57, v59); /*0x1989b1*/
  (*(void (__fastcall **)(_QWORD, cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 584) + 464LL))( /*0x1989c4*/
    *(_QWORD *)(a1 + 584),
    v57);
  sub_7EFD0(v57, *(_QWORD *)(a1 + 584), v118); /*0x1989dd*/
  v60 = *(unsigned int *)(*(_QWORD *)(a1 + 1048) + 364LL); /*0x1989e9*/
  v61 = (_DWORD)v60 == 3 || (_DWORD)v60 == 4; /*0x1989fd*/
  *(_BYTE *)(a1 + 1088) = v61; /*0x1989ff*/
  *(_BYTE *)(a1 + 1089) = (_DWORD)v60 == 3; /*0x198a0c*/
  v62 = (cocos2d::CCArray *)cocos2d::CCArray::create(v60); /*0x198a25*/
  v117 = &v126; /*0x198a2c*/
  v127 = 8; /*0x198a38*/
  v128 = 15; /*0x198a40*/
  v126 = *(unsigned __int64 *)"Unlisted"; /*0x198a4f*/
  v63 = *(_QWORD *)(a1 + 584); /*0x198a57*/
  v64 = *(_QWORD *)(a1 + 552); /*0x198a5e*/
  v65 = *(_BYTE *)(a1 + 1088); /*0x198a65*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&Src, v9 - 120.0, v11 - 155.0); /*0x198a7f*/
  *(_QWORD *)(a1 + 1056) = sub_6D2C0( /*0x198ab1*/
                             (unsigned int)&v126,
                             (unsigned int)sub_199490,
                             v65,
                             v64,
                             v66,
                             a1,
                             v63,
                             (__int64)v62);
  *(_QWORD *)(a1 + 1072) = cocos2d::CCArray::objectAtIndex(v62, 1u); /*0x198ac6*/
  v68 = (cocos2d::CCArray *)cocos2d::CCArray::create(v67); /*0x198ad3*/
  *(_QWORD *)&Src = &v126; /*0x198ada*/
  v127 = 12; /*0x198ae5*/
  v128 = 15; /*0x198aed*/
  *(_QWORD *)&v126 = *(_QWORD *)"Friends Only"; /*0x198afd*/
  *((_QWORD *)&v126 + 1) = *(unsigned int *)"Only"; /*0x198b08*/
  v69 = *(_QWORD *)(a1 + 584); /*0x198b0f*/
  v70 = *(_QWORD *)(a1 + 552); /*0x198b16*/
  v71 = *(_BYTE *)(a1 + 1089); /*0x198b1d*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v117, v9 + 20.0, v11 - 155.0); /*0x198b38*/
  *(_QWORD *)(a1 + 1064) = sub_6D2C0( /*0x198b6a*/
                             (unsigned int)&v126,
                             (unsigned int)sub_1996A0,
                             v71,
                             v70,
                             v72,
                             a1,
                             v69,
                             (__int64)v68);
  *(_QWORD *)(a1 + 1080) = cocos2d::CCArray::objectAtIndex(v68, 1u); /*0x198b7f*/
  sub_1992C0(a1); /*0x198b89*/
  if ( GJAccountManager_sharedState() ) /*0x198b8e*/
  {
    v73 = GJAccountManager_sharedState(); /*0x198b98*/
    v74 = *(_DWORD *)(v73 + 360) - *(_DWORD *)(v73 + 364); /*0x198ba3*/
  }
  else
  {
    v74 = 0; /*0x198bab*/
  }
  v75 = *(_DWORD **)(a1 + 1048); /*0x198bae*/
  v76 = !v75[80] && (int)v75[85] > 0 && v74 > 0 && v74 == v75[86]; /*0x198bd8*/
  *(_QWORD *)&Src = operator new(0x2C8u); /*0x198be5*/
  v77 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite(Src); /*0x198bf1*/
  if ( v77 ) /*0x198c0f*/
  {
    if ( ButtonSprite_init( /*0x198c47*/
           (__int64)v77,
           (__int64)"Cancel",
           60,
           0,
           1060320051,
           1,
           (const char *)&qword_6FFF68,
           (__int64)"GJ_button_06.png",
           1106247680) )
    {
      cocos2d::CCObject::autorelease(v77); /*0x198c53*/
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v77 + 8LL))(v77, 1); /*0x198c63*/
      LODWORD(v77) = 0; /*0x198c66*/
    }
  }
  v78 = CCMenuItemSpriteExtra_create((int)v77, 0, a1, (__int64)CCBlockLayer_hideLayer); /*0x198c7d*/
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v78); /*0x198c94*/
  *(_QWORD *)(a1 + 1032) = v78; /*0x198c97*/
  v79 = v12 + 25.0; /*0x198c9e*/
  v80 = *(_QWORD *)v78; /*0x198ca7*/
  v81 = *(_QWORD *)(a1 + 552); /*0x198caa*/
  if ( v76 ) /*0x198cbf*/
  {
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&Src, v9 - 110.0, v79); /*0x198cd3*/
    cocos2d::CCNode::convertToNodeSpace(v81, &v117, v82); /*0x198ce4*/
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v80 + 184))(v78, v83); /*0x198cf0*/
    v84 = cocos2d::CCString::createWithFormat("Update #%d", *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 340LL)); /*0x198d0a*/
    CString = cocos2d::CCString::getCString(v84); /*0x198d13*/
    v126 = 0; /*0x198d1c*/
    v127 = 0; /*0x198d20*/
    v128 = 0; /*0x198d24*/
    do /*0x198d33*/
      ++v42; /*0x198d30*/
    while ( CString[v42] ); /*0x198d33*/
    sub_3C230(&v126); /*0x198d44*/
    v86 = &v126; /*0x198d4a*/
    if ( v128 > 0xF ) /*0x198d53*/
      v86 = (__int128 *)v126; /*0x198d53*/
    *(_QWORD *)&Src = operator new(0x2C8u); /*0x198d62*/
    v87 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite(Src); /*0x198d6e*/
    if ( v87 ) /*0x198d74*/
    {
      if ( ButtonSprite_init( /*0x198daf*/
             (__int64)v87,
             (__int64)v86,
             90,
             0,
             1057803469,
             1,
             "goldFont.fnt",
             (__int64)"GJ_button_01.png",
             1106247680) )
      {
        cocos2d::CCObject::autorelease(v87); /*0x198dbb*/
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v87 + 8LL))(v87, 1); /*0x198dcb*/
        LODWORD(v87) = 0; /*0x198dce*/
      }
    }
    v88 = CCMenuItemSpriteExtra_create((int)v87, 0, a1, (__int64)sub_1992A0); /*0x198de5*/
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v88); /*0x198dfc*/
    v89 = *(_QWORD *)v88; /*0x198dff*/
    v90 = *(_QWORD *)(a1 + 552); /*0x198e02*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&Src, v9, v79); /*0x198e14*/
    cocos2d::CCNode::convertToNodeSpace(v90, &v117, v91); /*0x198e25*/
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v89 + 184))(v88, v92); /*0x198e31*/
    *(_QWORD *)(a1 + 1024) = v88; /*0x198e37*/
    *(_QWORD *)&Src = operator new(0x2C8u); /*0x198e48*/
    v93 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite(Src); /*0x198e54*/
    if ( v93 ) /*0x198e5a*/
    {
      if ( ButtonSprite_init( /*0x198e99*/
             (__int64)v93,
             (__int64)"Upload as New",
             90,
             0,
             1057803469,
             1,
             (const char *)&qword_6FFF68,
             (__int64)"GJ_button_02.png",
             1106247680) )
      {
        cocos2d::CCObject::autorelease(v93); /*0x198ea5*/
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v93 + 8LL))(v93, 1); /*0x198eb5*/
        LODWORD(v93) = 0; /*0x198eb8*/
      }
    }
    v94 = CCMenuItemSpriteExtra_create((int)v93, 0, a1, (__int64)sub_199280); /*0x198ecf*/
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v94); /*0x198ee6*/
    v95 = *(_QWORD *)v94; /*0x198ee9*/
    v96 = *(_QWORD *)(a1 + 552); /*0x198eec*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&Src, v9 + 110.0, v79); /*0x198f03*/
    cocos2d::CCNode::convertToNodeSpace(v96, &v117, v97); /*0x198f14*/
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v95 + 184))(v94, v98); /*0x198f20*/
    *(_QWORD *)(a1 + 1016) = v94; /*0x198f26*/
    sub_3C310(&v126); /*0x198f31*/
  }
  else
  {
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&Src, v9 - 60.0, v79); /*0x198f40*/
    cocos2d::CCNode::convertToNodeSpace(v81, &v117, v99); /*0x198f51*/
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v80 + 184))(v78, v100); /*0x198f5d*/
    *(_QWORD *)&Src = operator new(0x2C8u); /*0x198f6d*/
    v101 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite(Src); /*0x198f79*/
    if ( v101 ) /*0x198f7f*/
    {
      if ( ButtonSprite_init( /*0x198fbe*/
             (__int64)v101,
             (__int64)"Upload",
             60,
             0,
             1060320051,
             1,
             "goldFont.fnt",
             (__int64)"GJ_button_01.png",
             1106247680) )
      {
        cocos2d::CCObject::autorelease(v101); /*0x198fca*/
      }
      else
      {
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v101 + 8LL))(v101, 1); /*0x198fda*/
        LODWORD(v101) = 0; /*0x198fdd*/
      }
    }
    v102 = CCMenuItemSpriteExtra_create((int)v101, 0, a1, (__int64)sub_199280); /*0x198ff4*/
    (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v102); /*0x19900b*/
    v103 = *(_QWORD *)v102; /*0x19900e*/
    v104 = *(_QWORD *)(a1 + 552); /*0x199011*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&Src, v9 + 60.0, v79); /*0x199028*/
    cocos2d::CCNode::convertToNodeSpace(v104, &v117, v105); /*0x199039*/
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v103 + 184))(v102, v106); /*0x199045*/
    *(_QWORD *)(a1 + 1016) = v102; /*0x19904b*/
  }
  v107 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_closeBtn_001.png"); /*0x199059*/
  v108 = (int)v107; /*0x19905f*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v107 + 160LL))(v107); /*0x199073*/
  v109 = CCMenuItemSpriteExtra_create(v108, 0, a1, (__int64)sub_9C4B8); /*0x199089*/
  *((_DWORD *)v109 + 93) = 1067030938; /*0x19908c*/
  (*(void (__fastcall **)(_QWORD, cocos2d::CCObject *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v109); /*0x1990aa*/
  v110 = *(_QWORD *)v109; /*0x1990ad*/
  v111 = *(_QWORD *)(a1 + 552); /*0x1990b0*/
  cocos2d::CCPoint::CCPoint( /*0x1990e5*/
    (cocos2d::CCPoint *)&Src,
    (float)(v9 - (float)(*(float *)(a1 + 732) * 0.5)) + 10.0,
    v11 - 10.0);
  cocos2d::CCNode::convertToNodeSpace(v111, &v117, v112); /*0x1990f6*/
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v110 + 184))(v109, v113); /*0x199102*/
  *(_QWORD *)(a1 + 1096) = v109; /*0x199108*/
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 1136LL))(a1); /*0x19911c*/
  *(_BYTE *)(a1 + 744) = 0; /*0x19911e*/
  v114 = v118[0]; /*0x199126*/
  if ( v118[0] ) /*0x19912e*/
  {
    if ( (unsigned __int64)(24 * ((signed __int64)(v119 - (unsigned __int64)v118[0]) / 24)) >= 0x1000 ) /*0x199165*/
    {
      v114 = (void *)*((_QWORD *)v118[0] - 1); /*0x19916b*/
      if ( (unsigned __int64)((char *)v118[0] - (char *)v114 - 8) > 0x1F ) /*0x19917a*/
        goto LABEL_84; /*0x19917a*/
    }
    j_j_free(v114); /*0x199195*/
    *(_OWORD *)v118 = 0; /*0x19919d*/
    v119 = 0; /*0x1991a3*/
  }
  if ( *((_QWORD *)&v123 + 1) > 0xFu ) /*0x1991b0*/
  {
    v115 = Block[0]; /*0x1991b5*/
    if ( (unsigned __int64)(*((_QWORD *)&v123 + 1) + 1LL) >= 0x1000 ) /*0x1991c4*/
    {
      v115 = (void *)*((_QWORD *)Block[0] - 1); /*0x1991ca*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v115 - 8) > 0x1F ) /*0x1991d9*/
        invoke_watson(0, 0, 0, 0, 0); /*0x1991ea*/
    }
    j_j_free(v115); /*0x1991f1*/
  }
  *(_QWORD *)&v123 = 0; /*0x1991f6*/
  *((_QWORD *)&v123 + 1) = 15; /*0x1991fa*/
  LOBYTE(Block[0]) = 0; /*0x199202*/
  sub_3C310(v129); /*0x19920b*/
  return 1; /*0x199216*/
}
