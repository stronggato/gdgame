#include <Geode/binding/GJChestSprite.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/5] Address: 0x55cee0
// Method: GJChestSprite::~GJChestSprite
cocos2d::CCSprite *__fastcall GJChestSprite__dtor_GJChestSprite(cocos2d::CCSprite *Block, char a2)
{
  *(_QWORD *)Block = &GJChestSprite::`vftable'; /*0x55cef3*/
  *((_QWORD *)Block + 40) = &GJChestSprite::`vftable'; /*0x55cf00*/
  *((_QWORD *)Block + 43) = &GJChestSprite::`vftable'; /*0x55cf0e*/
  cocos2d::CCSprite::~CCSprite(Block); /*0x55cf15*/
  if ( (a2 & 1) != 0 ) /*0x55cf1e*/
    j_j_free(Block); /*0x55cf28*/
  return Block; /*0x55cf2d*/
}

// [3/5] Address: 0x562200
// Method: GJChestSprite::create
// Hidden C++ exception states: #wind=1
cocos2d::CCSprite *__fastcall GJChestSprite_create(int a1)
{
  cocos2d::CCSprite *v2; // rbx
  bool v3; // al
  __int64 v4; // rcx

  v2 = (cocos2d::CCSprite *)operator new(0x268u); /*0x562216*/
  cocos2d::CCSprite::CCSprite(v2); /*0x562221*/
  *(_QWORD *)v2 = &GJChestSprite::`vftable'; /*0x56222e*/
  *((_QWORD *)v2 + 40) = &GJChestSprite::`vftable'; /*0x562238*/
  *((_QWORD *)v2 + 43) = &GJChestSprite::`vftable'; /*0x562246*/
  *((_QWORD *)v2 + 75) = 0; /*0x56224d*/
  *((_BYTE *)v2 + 608) = 0; /*0x562258*/
  v3 = cocos2d::CCSprite::init(v2); /*0x562262*/
  v4 = *(_QWORD *)v2; /*0x562268*/
  if ( v3 ) /*0x56226d*/
  {
    *((_DWORD *)v2 + 150) = a1; /*0x56226f*/
    (*(void (__fastcall **)(cocos2d::CCSprite *, void *))(v4 + 312))(v2, &unk_9055A0); /*0x562286*/
    sub_562400(v2, 2, 0); /*0x562294*/
    cocos2d::CCObject::autorelease(v2); /*0x56229c*/
    return v2; /*0x5622a2*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCSprite *, __int64))(v4 + 8))(v2, 1); /*0x5622bc*/
    return 0; /*0x5622bf*/
  }
}

// [4/5] Address: 0x5622d0
// Method: GJChestSprite::setColor
int __fastcall GJChestSprite_setColor(cocos2d::CCSprite *a1, __int16 *a2)
{
  bool v2; // zf
  _BYTE *v3; // rbx
  __int16 v4; // ax
  int v5; // r8d
  cocos2d::CCArray *v6; // rax
  cocos2d::CCArray *v7; // rbx
  struct cocos2d::CCObject *v8; // rax
  __int16 v10; // [rsp+30h] [rbp+8h] BYREF
  char v11; // [rsp+32h] [rbp+Ah]

  v2 = *((_BYTE *)a1 + 288) == 0; /*0x5622d6*/
  v3 = (char *)a1 - 320; /*0x5622dd*/
  v4 = *a2; /*0x5622e4*/
  v5 = *((unsigned __int8 *)a2 + 2); /*0x5622e7*/
  v10 = *a2; /*0x5622ec*/
  v11 = v5; /*0x5622f1*/
  if ( !v2 ) /*0x5622f6*/
  {
    LOBYTE(v10) = (int)(float)((float)(unsigned __int8)v4 * 0.40000001); /*0x562312*/
    HIBYTE(v10) = (int)(float)((float)HIBYTE(v10) * 0.40000001); /*0x562332*/
    v11 = (int)(float)((float)v5 * 0.40000001); /*0x56233e*/
  }
  cocos2d::CCSprite::setColor(a1, (const struct cocos2d::_ccColor3B *)&v10); /*0x562347*/
  v6 = (cocos2d::CCArray *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v3 + 480LL))(v3); /*0x562353*/
  v7 = v6; /*0x562359*/
  if ( v6 ) /*0x56235f*/
  {
    LODWORD(v6) = cocos2d::CCArray::count(v6); /*0x562364*/
    if ( (_DWORD)v6 ) /*0x56236c*/
    {
      v8 = cocos2d::CCArray::objectAtIndex(v7, 0); /*0x562373*/
      LODWORD(v6) = (**((__int64 (__fastcall ***)(__int64, __int16 *))v8 + 40))((__int64)v8 + 320, &v10); /*0x562388*/
    }
  }
  return (int)v6; /*0x56238a*/
}

// [5/5] Address: 0x562390
// Method: GJChestSprite::setOpacity
int __fastcall GJChestSprite_setOpacity(cocos2d::CCSprite *a1, unsigned __int8 a2)
{
  cocos2d::CCArray *v4; // rax
  cocos2d::CCArray *v5; // rbx
  struct cocos2d::CCObject *v6; // rax

  cocos2d::CCSprite::setOpacity(a1, a2); /*0x5623a0*/
  v4 = (cocos2d::CCArray *)(*(__int64 (__fastcall **)(__int64))(*((_QWORD *)a1 - 40) + 480LL))((__int64)a1 - 320); /*0x5623b0*/
  v5 = v4; /*0x5623b6*/
  if ( v4 ) /*0x5623bc*/
  {
    LODWORD(v4) = cocos2d::CCArray::count(v4); /*0x5623c1*/
    if ( (_DWORD)v4 ) /*0x5623c9*/
    {
      v6 = cocos2d::CCArray::objectAtIndex(v5, 0); /*0x5623d0*/
      LODWORD(v4) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v6 + 40) + 40LL))((__int64)v6 + 320, a2); /*0x5623e4*/
    }
  }
  return (int)v4; /*0x5623e7*/
}

// Address: 0x10a970
// Method: GJChestSprite::switchToState
// Hidden C++ exception states: #wind=1
void __fastcall GJChestSprite_switchToState(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // r14
  __int64 v7; // r15
  float v8; // xmm7_4
  float v9; // xmm6_4
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  cocos2d::CCString *v14; // rax
  const char *CString; // rax
  __int64 v16; // rsi
  __int64 v17; // r8
  void **v18; // rcx
  struct cocos2d::CCLabelBMFont *v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  void *v24; // rcx
  cocos2d::CCString *v25; // rax
  const char *v26; // rax
  void **v27; // rcx
  struct cocos2d::CCLabelBMFont *v28; // rdi
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rax
  void *v33; // rcx
  struct cocos2d::CCSprite *v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rbx
  __int64 v37; // rax
  cocos2d::CCString *v38; // rax
  const char *v39; // rax
  struct cocos2d::CCLabelBMFont *v40; // rdi
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rax
  float v44; // xmm1_4
  cocos2d::CCString *v45; // rax
  const char *v46; // rax
  __int64 v47; // rsi
  __int64 v48; // r8
  void **v49; // rcx
  struct cocos2d::CCLabelBMFont *v50; // rdi
  __int64 v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rbx
  __int64 v54; // rax
  void *v55; // rcx
  cocos2d::CCString *v56; // rax
  const char *v57; // rax
  struct cocos2d::CCLabelBMFont *v58; // rdi
  __int64 v59; // rax
  __int64 v60; // rbx
  __int64 v61; // rax
  int v62; // ecx
  const char *v63; // rdx
  float v64; // xmm6_4
  void **v65; // rcx
  struct cocos2d::CCLabelBMFont *v66; // rdi
  __int64 v67; // rbx
  __int64 v68; // rax
  __int64 v69; // rbx
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rbx
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rbx
  __int64 v76; // rax
  __int64 v77; // rbx
  __int64 v78; // rax
  __int16 v79; // [rsp+30h] [rbp-89h] BYREF
  char v80; // [rsp+32h] [rbp-87h]
  __int16 v81; // [rsp+40h] [rbp-79h] BYREF
  char v82; // [rsp+42h] [rbp-77h]
  _BYTE v83[12]; // [rsp+44h] [rbp-75h] BYREF
  __int16 v84; // [rsp+50h] [rbp-69h] BYREF
  char v85; // [rsp+52h] [rbp-67h]
  __int16 v86; // [rsp+60h] [rbp-59h] BYREF
  char v87; // [rsp+62h] [rbp-57h]
  void *Block[2]; // [rsp+68h] [rbp-51h] BYREF
  __int128 v89; // [rsp+78h] [rbp-41h]

  v6 = 56LL * (int)a2;
  v7 = *(_QWORD *)(a1 + 328);
  v8 = *(float *)(v6 + v7 + 4) - 8.0;
  v86 = -14081;
  v87 = 120;
  v81 = -29536;
  v82 = 120;
  v9 = *(float *)(a1 + 32) * 0.5;
  v10 = *(_DWORD *)(v6 + v7);
  if ( !v10 )
  {
    v74 = v6 + v7 + 24;
    if ( *(_QWORD *)(v74 + 24) > 0xFu )
      v74 = *(_QWORD *)v74;
    v40 = cocos2d::CCLabelBMFont::create((const char *)v74, "goldFont.fnt");
    v75 = *(_QWORD *)v40;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v83, 0.0, 0.5);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v75 + 288))(v40, v76);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v40 + 160LL))(v40);
    v44 = 10.0;
    goto LABEL_52;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v71 = v6 + v7 + 24;
    if ( *(_QWORD *)(v71 + 24) > 0xFu )
      v71 = *(_QWORD *)v71;
    v40 = cocos2d::CCLabelBMFont::create((const char *)v71, "goldFont.fnt");
    v72 = *(_QWORD *)v40;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v83, 0.0, 0.5);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v72 + 288))(v40, v73);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v40 + 160LL))(v40);
    (**((void (__fastcall ***)(__int64, __int16 *))v40 + 46))((__int64)v40 + 368, &v81);
    v44 = (float)*(int *)(v6 + v7 + 8);
    goto LABEL_52;
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      if ( v13 == 1 )
      {
        v79 = -26986;
        v80 = -106;
        sub_10B310(1, a3, v6 + v7 + 24, a4, (__int64)&v79, 1058642330);
      }
      return;
    }
    sub_101EA0(a3, a2, a3, *(unsigned int *)(v6 + v7 + 20));
    v14 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, *(unsigned int *)(v6 + v7 + 8));
    CString = cocos2d::CCString::getCString(v14);
    *(_OWORD *)Block = 0;
    v89 = 0;
    v16 = -1;
    v17 = -1;
    do
      ++v17;
    while ( CString[v17] );
    sub_3C230(Block);
    v79 = v81;
    v80 = v82;
    v18 = Block;
    if ( *((_QWORD *)&v89 + 1) > 0xFu )
      v18 = (void **)Block[0];
    v19 = cocos2d::CCLabelBMFont::create((const char *)v18, "chatFont.fnt");
    v20 = *(_QWORD *)v19;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v83, 1.0, 0.5);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v20 + 288))(v19, v21);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v19 + 160LL))(v19);
    (**((void (__fastcall ***)(__int64, __int16 *))v19 + 46))((__int64)v19 + 368, &v79);
    v22 = *(_QWORD *)v19;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v83, 34.0, v8);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v22 + 184))(v19, v23);
    (*(void (__fastcall **)(__int64, struct cocos2d::CCLabelBMFont *))(*(_QWORD *)a3 + 464LL))(a3, v19);
    if ( *((_QWORD *)&v89 + 1) > 0xFu )
    {
      v24 = Block[0];
      if ( (unsigned __int64)(*((_QWORD *)&v89 + 1) + 1LL) >= 0x1000 )
      {
        v24 = (void *)*((_QWORD *)Block[0] - 1);
        if ( (unsigned __int64)((char *)Block[0] - (char *)v24 - 8) > 0x1F )
          invoke_watson(0, 0, 0, 0, 0);
      }
      j_j_free(v24);
    }
    v25 = cocos2d::CCString::createWithFormat("%i%%", *(_DWORD *)(v6 + v7 + 12));
    v26 = cocos2d::CCString::getCString(v25);
    *(_OWORD *)Block = 0;
    v89 = 0;
    do
      ++v16;
    while ( v26[v16] );
    sub_3C230(Block);
    v79 = v81;
    v80 = v82;
    v27 = Block;
    if ( *((_QWORD *)&v89 + 1) > 0xFu )
      v27 = (void **)Block[0];
    v28 = cocos2d::CCLabelBMFont::create((const char *)v27, (const char *)&qword_6FFF68);
    v29 = *(_QWORD *)v28;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v83, 1.0, 0.5);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v29 + 288))(v28, v30);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v28 + 160LL))(v28);
    (**((void (__fastcall ***)(__int64, __int16 *))v28 + 46))((__int64)v28 + 368, &v79);
    v31 = *(_QWORD *)v28;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v83, v9 - 12.0, v8);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v31 + 184))(v28, v32);
    (*(void (__fastcall **)(__int64, struct cocos2d::CCLabelBMFont *))(*(_QWORD *)a3 + 464LL))(a3, v28);
    if ( *((_QWORD *)&v89 + 1) > 0xFu )
    {
      v33 = Block[0];
      if ( (unsigned __int64)(*((_QWORD *)&v89 + 1) + 1LL) >= 0x1000 )
      {
        v33 = (void *)*((_QWORD *)Block[0] - 1);
        if ( (unsigned __int64)((char *)Block[0] - (char *)v33 - 8) > 0x1F )
          invoke_watson(0, 0, 0, 0, 0);
      }
      j_j_free(v33);
    }
    v34 = cocos2d::CCSprite::createWithSpriteFrameName("edit_rightBtn_001.png");
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v34 + 120LL))(v34);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v34 + 136LL))(v34);
    (**((void (__fastcall ***)(__int64, __int16 *))v34 + 40))((__int64)v34 + 320, &v86);
    LOBYTE(v35) = 120;
    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v34 + 40) + 40LL))((__int64)v34 + 320, v35);
    v36 = *(_QWORD *)v34;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v83, v9, v8);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v36 + 184))(v34, v37);
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *))(*(_QWORD *)a3 + 464LL))(a3, v34);
    v38 = cocos2d::CCString::createWithFormat("%i%%", *(_DWORD *)(v6 + v7 + 16));
    v39 = cocos2d::CCString::getCString(v38);
    v40 = cocos2d::CCLabelBMFont::create(v39, (const char *)&qword_6FFF68);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v40 + 160LL))(v40);
    v41 = *(_QWORD *)v40;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v83, 0.0, 0.5);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v41 + 288))(v40, v42);
    v43 = sub_101DC0(&v84);
    v79 = *(_WORD *)v43;
    v80 = *(_BYTE *)(v43 + 2);
    (**((void (__fastcall ***)(__int64, __int16 *))v40 + 46))((__int64)v40 + 368, &v79);
    v44 = v9 + 12.0;
LABEL_52:
    v77 = *(_QWORD *)v40;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v83, v44, v8);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v77 + 184))(v40, v78);
    (*(void (__fastcall **)(__int64, struct cocos2d::CCLabelBMFont *))(*(_QWORD *)a3 + 464LL))(a3, v40);
    return;
  }
  sub_101EA0(a3, a2, a3, *(unsigned int *)(v6 + v7 + 20));
  v45 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, *(unsigned int *)(v6 + v7 + 8));
  v46 = cocos2d::CCString::getCString(v45);
  *(_OWORD *)Block = 0;
  v89 = 0;
  v47 = -1;
  v48 = -1;
  do
    ++v48;
  while ( v46[v48] );
  sub_3C230(Block);
  v79 = v81;
  v80 = v82;
  v49 = Block;
  if ( *((_QWORD *)&v89 + 1) > 0xFu )
    v49 = (void **)Block[0];
  v50 = cocos2d::CCLabelBMFont::create((const char *)v49, "chatFont.fnt");
  v51 = *(_QWORD *)v50;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v83, 1.0, 0.5);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v51 + 288))(v50, v52);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v50 + 160LL))(v50);
  (**((void (__fastcall ***)(__int64, __int16 *))v50 + 46))((__int64)v50 + 368, &v79);
  v53 = *(_QWORD *)v50;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v83, 34.0, v8);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v53 + 184))(v50, v54);
  (*(void (__fastcall **)(__int64, struct cocos2d::CCLabelBMFont *))(*(_QWORD *)a3 + 464LL))(a3, v50);
  if ( *((_QWORD *)&v89 + 1) > 0xFu )
  {
    v55 = Block[0];
    if ( (unsigned __int64)(*((_QWORD *)&v89 + 1) + 1LL) >= 0x1000 )
    {
      v55 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v55 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v55);
  }
  v56 = cocos2d::CCString::createWithFormat("%i%%", *(_DWORD *)(v6 + v7 + 12));
  v57 = cocos2d::CCString::getCString(v56);
  v58 = cocos2d::CCLabelBMFont::create(v57, (const char *)&qword_6FFF68);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v58 + 160LL))(v58);
  v59 = sub_101DC0(&v84);
  v79 = *(_WORD *)v59;
  v80 = *(_BYTE *)(v59 + 2);
  (**((void (__fastcall ***)(__int64, __int16 *))v58 + 46))((__int64)v58 + 368, &v79);
  v60 = *(_QWORD *)v58;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v83, v9, v8);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v60 + 184))(v58, v61);
  (*(void (__fastcall **)(__int64, struct cocos2d::CCLabelBMFont *))(*(_QWORD *)a3 + 464LL))(a3, v58);
  v62 = *(_DWORD *)(v6 + v7 + 16);
  if ( v62 > 0 )
  {
    if ( v62 == 2 )
    {
      v79 = -1;
      v80 = -1;
    }
    else
    {
      v79 = -24396;
      v80 = -126;
    }
    v63 = "Session Best";
    if ( v62 == 2 )
      v63 = "New Best!";
    *(_OWORD *)Block = 0;
    v89 = 0;
    do
      ++v47;
    while ( v63[v47] );
    sub_3C230(Block);
    v84 = v79;
    v85 = v80;
    v64 = *(float *)(a1 + 32) - 14.0;
    v65 = Block;
    if ( *((_QWORD *)&v89 + 1) > 0xFu )
      v65 = (void **)Block[0];
    v66 = cocos2d::CCLabelBMFont::create((const char *)v65, "goldFont.fnt");
    v67 = *(_QWORD *)v66;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v83, 1.0, 0.5);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v67 + 288))(v66, v68);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v66 + 160LL))(v66);
    (**((void (__fastcall ***)(__int64, __int16 *))v66 + 46))((__int64)v66 + 368, &v84);
    v69 = *(_QWORD *)v66;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v83, v64, v8);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v69 + 184))(v66, v70);
    (*(void (__fastcall **)(__int64, struct cocos2d::CCLabelBMFont *))(*(_QWORD *)a3 + 464LL))(a3, v66);
    sub_3C310(Block);
  }
}
