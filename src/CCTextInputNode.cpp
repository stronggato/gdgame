#include <Geode/binding/CCTextInputNode.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/19] Address: 0x53260
// Method: CCTextInputNode::create
// Hidden C++ exception states: #wind=6
char *__fastcall CCTextInputNode_create(__int64 a1, __int64 a2, __int64 a3)
{
  char *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // r8

  v4 = (char *)operator new(0x2E0u); /*0x53297*/
  cocos2d::CCLayer::CCLayer((cocos2d::CCLayer *)v4); /*0x532a5*/
  cocos2d::CCIMEDelegate::CCIMEDelegate((cocos2d::CCIMEDelegate *)(v4 + 408)); /*0x532b3*/
  cocos2d::CCTextFieldDelegate::CCTextFieldDelegate((cocos2d::CCTextFieldDelegate *)(v4 + 416)); /*0x532c1*/
  *(_QWORD *)v4 = &CCTextInputNode::`vftable'; /*0x532ce*/
  *((_QWORD *)v4 + 40) = &CCTextInputNode::`vftable'; /*0x532d8*/
  *((_QWORD *)v4 + 41) = &CCTextInputNode::`vftable'; /*0x532e6*/
  *((_QWORD *)v4 + 42) = &CCTextInputNode::`vftable'; /*0x532f4*/
  *((_QWORD *)v4 + 43) = &CCTextInputNode::`vftable'; /*0x53302*/
  *((_QWORD *)v4 + 44) = &CCTextInputNode::`vftable'; /*0x53310*/
  *((_QWORD *)v4 + 51) = &CCTextInputNode::`vftable'; /*0x5331e*/
  *((_QWORD *)v4 + 52) = &CCTextInputNode::`vftable'; /*0x5332c*/
  v4[424] = 0; /*0x53333*/
  *((_OWORD *)v4 + 27) = 0; /*0x5333e*/
  *((_QWORD *)v4 + 56) = 0; /*0x53348*/
  *((_QWORD *)v4 + 57) = 15; /*0x5334f*/
  v4[432] = 0; /*0x5335a*/
  *((_DWORD *)v4 + 116) = 0; /*0x53361*/
  *((_WORD *)v4 + 234) = 0; /*0x53368*/
  *((_DWORD *)v4 + 118) = -1090519040; /*0x53370*/
  *((_DWORD *)v4 + 119) = 1090519040; /*0x5337b*/
  v4[480] = 0; /*0x53386*/
  *(_OWORD *)(v4 + 488) = 0; /*0x5338d*/
  *((_QWORD *)v4 + 63) = 0; /*0x53395*/
  *((_QWORD *)v4 + 64) = 15; /*0x5339c*/
  v4[488] = 0; /*0x533a7*/
  *((_QWORD *)v4 + 65) = 0; /*0x533ae*/
  *((_DWORD *)v4 + 132) = 0; /*0x533b5*/
  *((_QWORD *)v4 + 67) = 0; /*0x533bc*/
  *((_QWORD *)v4 + 68) = 0; /*0x533c3*/
  *((_QWORD *)v4 + 69) = 0; /*0x533ca*/
  *((_QWORD *)v4 + 70) = 0; /*0x533d1*/
  *((_QWORD *)v4 + 71) = 0; /*0x533d8*/
  *((_DWORD *)v4 + 144) = 0; /*0x533df*/
  *((_QWORD *)v4 + 74) = 0; /*0x533e6*/
  *((_QWORD *)v4 + 75) = 0; /*0x533ed*/
  *((_QWORD *)v4 + 76) = 0; /*0x533f4*/
  *((_DWORD *)v4 + 154) = 0; /*0x533fb*/
  *((_QWORD *)v4 + 78) = 0; /*0x53402*/
  *((_WORD *)v4 + 316) = 0; /*0x53409*/
  v4[634] = 0; /*0x53411*/
  *((_QWORD *)v4 + 80) = 0; /*0x53418*/
  *((_WORD *)v4 + 324) = 0; /*0x5341f*/
  v4[650] = 1; /*0x53427*/
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)(v4 + 652)); /*0x53436*/
  *((_QWORD *)v4 + 83) = 0; /*0x5343c*/
  *((_DWORD *)v4 + 168) = -1082130432; /*0x53443*/
  *(_QWORD *)(v4 + 676) = 0; /*0x5344e*/
  v4[684] = 0; /*0x53455*/
  *((_QWORD *)v4 + 86) = 0; /*0x5345c*/
  *((_DWORD *)v4 + 174) = 0; /*0x53463*/
  v4[700] = 0; /*0x5346a*/
  *((_QWORD *)v4 + 88) = 0; /*0x53471*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v4 + 712)); /*0x5347f*/
  *((_WORD *)v4 + 360) = 0; /*0x53485*/
  *((_DWORD *)v4 + 181) = 0; /*0x5348d*/
  *((_DWORD *)v4 + 183) = 0; /*0x53494*/
  if ( (unsigned __int8)CCTextInputNode_init(v4, v5, v6, a3) ) /*0x534bf*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v4); /*0x534cb*/
    return v4; /*0x534d1*/
  }
  else
  {
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v4 + 8LL))(v4, 1); /*0x534e5*/
    return 0; /*0x534e8*/
  }
}

// [2/19] Address: 0x53510
// Method: CCTextInputNode::init
bool __fastcall CCTextInputNode_init(__int64 *a1, float a2, float a3, _BYTE *a4, char a5, int a6, const char *a7)
{
  bool result; // al
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdi
  size_t v13; // r8
  struct cocos2d::CCTextFieldTTF *v14; // rax
  __int64 v15; // rcx
  __int64 *v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  const char *v19; // rbx
  struct cocos2d::CCLabelBMFont *v20; // rax
  __int64 v21; // rcx
  struct cocos2d::CCLabelBMFont *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int128 v25; // [rsp+20h] [rbp-48h] BYREF
  __int64 v26; // [rsp+30h] [rbp-38h]
  __int64 v27; // [rsp+38h] [rbp-30h]

  result = cocos2d::CCLayer::init((cocos2d::CCLayer *)a1); /*0x53530*/
  if ( result ) /*0x53538*/
  {
    LOBYTE(v10) = 1; /*0x53541*/
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 920))(a1, v10); /*0x53558*/
    LOBYTE(v11) = 1; /*0x53561*/
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 1024))(a1, v11); /*0x53566*/
    v12 = -1; /*0x5356c*/
    *((_BYTE *)a1 + 632) = 0; /*0x53573*/
    v13 = -1; /*0x5357a*/
    do /*0x53583*/
      ++v13; /*0x53580*/
    while ( a4[v13] ); /*0x53583*/
    sub_3F5A0(a1 + 54, a4, v13); /*0x53594*/
    v14 = cocos2d::CCTextFieldTTF::textFieldWithPlaceHolder(a4, "Thonburi", (float)a6); /*0x535af*/
    v15 = *a1; /*0x535b5*/
    a1[75] = (__int64)v14; /*0x535bb*/
    (*(void (__fastcall **)(__int64 *, struct cocos2d::CCTextFieldTTF *))(v15 + 464))(a1, v14); /*0x535cc*/
    v16 = a1 + 52; /*0x535d6*/
    if ( !a1 ) /*0x535e9*/
      v16 = 0; /*0x535e9*/
    *(_QWORD *)(a1[75] + 712) = v16; /*0x535ed*/
    v17 = *a1; /*0x535fc*/
    v18 = cocos2d::CCSize::CCSize((cocos2d::CCSize *)&a5, a2, a3); /*0x535ff*/
    (*(void (__fastcall **)(__int64 *, __int64))(v17 + 312))(a1, v18); /*0x5360b*/
    *((_WORD *)a1 + 290) = -1; /*0x5362c*/
    *(_WORD *)((char *)a1 + 583) = -1; /*0x53633*/
    *((float *)a1 + 142) = a2; /*0x53641*/
    *(__int64 *)((char *)a1 + 572) = 1065353216; /*0x53649*/
    *((_BYTE *)a1 + 582) = -1; /*0x53654*/
    *((_BYTE *)a1 + 585) = -1; /*0x5365a*/
    sub_3F5A0(a1 + 61, " abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789", 0x3Fu); /*0x53660*/
    v19 = a7; /*0x53665*/
    if ( a7 ) /*0x53670*/
    {
      v20 = cocos2d::CCLabelBMFont::create(a4, a7); /*0x53678*/
      v21 = *a1; /*0x5367e*/
      a1[78] = (__int64)v20; /*0x53684*/
      (*(void (__fastcall **)(__int64 *, struct cocos2d::CCLabelBMFont *))(v21 + 464))(a1, v20); /*0x53695*/
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1[75] + 336LL))(a1[75], 0); /*0x536a4*/
      v26 = 0; /*0x536ad*/
      v25 = 0; /*0x536b2*/
      v27 = 0; /*0x536b7*/
      do /*0x536c3*/
        ++v12; /*0x536c0*/
      while ( v19[v12] ); /*0x536c3*/
      sub_3C230(&v25); /*0x536d4*/
      CCTextInputNode_updateDefaultFontValues(a1, &v25); /*0x536e1*/
    }
    v22 = cocos2d::CCLabelBMFont::create((const char *)&word_70806C, "chatFont.fnt"); /*0x536f4*/
    v23 = *a1; /*0x536fa*/
    a1[74] = (__int64)v22; /*0x53706*/
    (*(void (__fastcall **)(__int64 *, struct cocos2d::CCLabelBMFont *, __int64))(v23 + 456))(a1, v22, 10); /*0x53717*/
    LOBYTE(v24) = -106; /*0x53721*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1[74] + 368) + 40LL))(a1[74] + 368, v24); /*0x5372d*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1[74] + 336LL))(a1[74], 0); /*0x5373c*/
    return 1; /*0x5374a*/
  }
  return result; /*0x53756*/
}

// [3/19] Address: 0x53c30
// Method: CCTextInputNode::updateDefaultFontValues
// Hidden C++ exception states: #wind=1
double __fastcall CCTextInputNode_updateDefaultFontValues(__int64 a1, unsigned __int64 *a2)
{
  const void *v4; // rcx
  unsigned __int64 v5; // rdi
  size_t v6; // r8
  char v7; // al
  int v8; // xmm0_4
  int v9; // xmm1_4
  _QWORD Buf2[5]; // [rsp+20h] [rbp-38h] BYREF

  Buf2[4] = a2; /*0x53c54*/
  Buf2[2] = 12; /*0x53c66*/
  Buf2[3] = 15; /*0x53c6b*/
  Buf2[0] = *(_QWORD *)"chatFont.fnt"; /*0x53c7c*/
  Buf2[1] = *(unsigned int *)".fnt"; /*0x53c88*/
  v4 = a2; /*0x53c91*/
  if ( a2[3] > 0xF ) /*0x53c99*/
    v4 = (const void *)*a2; /*0x53c9b*/
  v5 = a2[2]; /*0x53c9e*/
  v6 = v5; /*0x53ca2*/
  if ( v5 > 0xC ) /*0x53ca8*/
    v6 = 12; /*0x53ca8*/
  if ( !memcmp(v4, Buf2, v6) && v5 == 12 ) /*0x53cbe*/
  {
    v7 = 1; /*0x53cd6*/
    v8 = -1090519040; /*0x53cd8*/
    v9 = 1084227584; /*0x53ce0*/
  }
  else
  {
    v7 = 0; /*0x53cc2*/
    v8 = 1069547520; /*0x53cc4*/
    v9 = 1101004800; /*0x53ccc*/
  }
  *(_DWORD *)(a1 + 476) = v9; /*0x53ce8*/
  *(_DWORD *)(a1 + 472) = v8; /*0x53cf0*/
  *(_BYTE *)(a1 + 480) = v7; /*0x53cf8*/
  return sub_3C310(a2); /*0x53d06*/
}

// [4/19] Address: 0x53e40
// Method: CCTextInputNode::visit
void __fastcall CCTextInputNode_visit(cocos2d::CCNode *a1)
{
  const struct cocos2d::CCSize *v2; // rax
  _BYTE v3[24]; // [rsp+30h] [rbp-18h] BYREF
  float v4; // [rsp+50h] [rbp+8h] BYREF
  float v5; // [rsp+54h] [rbp+Ch]

  v2 = (const struct cocos2d::CCSize *)(*(__int64 (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)a1 + 320LL))(a1); /*0x53e4c*/
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v4, v2); /*0x53e5a*/
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v3, (float)-v4 * 0.5, (float)-v5 * 0.5, v4, v5); /*0x53e9b*/
  cocos2d::CCNode::visit(a1); /*0x53ea4*/
}

// [5/19] Address: 0x53eb0
// Method: CCTextInputNode::setString
// Hidden C++ exception states: #wind=1
double __fastcall CCTextInputNode_setString(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // rax
  void (__fastcall ***v5)(_QWORD, _QWORD *); // rcx
  void (__fastcall ***v6)(_QWORD, _QWORD *); // rcx
  _BYTE v8[32]; // [rsp+28h] [rbp-40h] BYREF
  _QWORD *v9; // [rsp+48h] [rbp-20h]

  v2 = a2; /*0x53ec9*/
  v9 = a2; /*0x53ecf*/
  if ( a2[3] > 0xFu ) /*0x53ed9*/
    a2 = (_QWORD *)*a2; /*0x53edb*/
  (**(void (__fastcall ***)(__int64, _QWORD *))(a1[75] + 600LL))(a1[75] + 600LL, a2); /*0x53eef*/
  v4 = sub_3E4F0(v8, v2); /*0x53ef9*/
  SpriteAnimationManager_executeAnimation(a1, v4); /*0x53f04*/
  v5 = (void (__fastcall ***)(_QWORD, _QWORD *))a1[76]; /*0x53f09*/
  if ( v5 ) /*0x53f13*/
    (**v5)(v5, a1); /*0x53f1b*/
  v6 = (void (__fastcall ***)(_QWORD, _QWORD *))a1[65]; /*0x53f1d*/
  if ( v6 ) /*0x53f27*/
    (**v6)(v6, a1); /*0x53f2f*/
  return sub_3C310(v2); /*0x53f3a*/
}

// [6/19] Address: 0x54820
// Method: CCTextInputNode::onTextFieldDeleteBackward
// Hidden C++ exception states: #wind=1
char __fastcall CCTextInputNode_onTextFieldDeleteBackward(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  int v6; // r12d
  void **v7; // r9
  void **v8; // rsi
  unsigned __int64 v9; // rax
  int v10; // r8d
  __int64 v11; // rdx
  unsigned __int8 v12; // cl
  __int64 v13; // rax
  char v14; // r11
  void **v15; // r9
  int v16; // r10d
  int v17; // r8d
  __int64 v18; // rdx
  unsigned __int8 v19; // cl
  __int64 v20; // rax
  int v21; // r9d
  unsigned __int64 v22; // r8
  _DWORD *v23; // r10
  unsigned __int64 v24; // rbx
  _DWORD *v25; // rcx
  int *v26; // rcx
  void **v27; // r9
  int v28; // r11d
  int v29; // r8d
  __int64 v30; // rdx
  unsigned __int8 v31; // cl
  __int64 v32; // rax
  int v33; // r9d
  unsigned __int64 v34; // r8
  __int64 v35; // rdx
  unsigned __int64 v36; // rdx
  int v37; // edi
  unsigned __int64 v38; // r9
  __int64 v39; // rdx
  void **v40; // rcx
  unsigned __int64 v41; // r14
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  void **v45; // rsi
  void **v46; // r15
  unsigned __int64 v47; // r13
  __int64 v48; // rbx
  _QWORD *v49; // rbx
  int v50; // r8d
  void **v51; // r9
  __int64 v52; // rdx
  int v53; // ecx
  char v54; // bl
  void **v55; // rax
  __int128 v57; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int64 v58; // [rsp+40h] [rbp-29h]
  __int64 v59; // [rsp+48h] [rbp-21h]
  _QWORD *v60; // [rsp+50h] [rbp-19h]
  __int64 v61; // [rsp+58h] [rbp-11h]
  void *Src[2]; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int64 v63; // [rsp+78h] [rbp+Fh]
  unsigned __int64 v64; // [rsp+80h] [rbp+17h]

  v61 = a2; /*0x5484d*/
  v60 = (_QWORD *)(a1 - 416); /*0x5485b*/
  *(_DWORD *)(a1 - 416 + 672) = -1082130432; /*0x5485f*/
  if ( *(int *)(a1 + 112) <= 0 || *(_QWORD *)(a1 + 120) == *(_QWORD *)(a1 + 128) ) /*0x5487e*/
    return 0; /*0x54d14*/
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2 + 600) + 8LL))(a2 + 600); /*0x5488e*/
  *(_OWORD *)Src = 0; /*0x54894*/
  v63 = 0; /*0x5489b*/
  v64 = 0; /*0x5489f*/
  v5 = -1; /*0x548a3*/
  do /*0x548b3*/
    ++v5; /*0x548b0*/
  while ( *(_BYTE *)(v4 + v5) ); /*0x548b3*/
  sub_3C230(Src); /*0x548c0*/
  v6 = *(_DWORD *)(a2 + 760); /*0x548c6*/
  v7 = Src; /*0x548cd*/
  v8 = (void **)Src[0]; /*0x548d1*/
  v9 = v64; /*0x548d5*/
  if ( v64 > 0xF ) /*0x548dd*/
    v7 = (void **)Src[0]; /*0x548dd*/
  v10 = 0; /*0x548e1*/
  if ( (int)v63 > 0 ) /*0x548ee*/
  {
    v11 = 0; /*0x548f0*/
    do /*0x5493f*/
    {
      v12 = *((_BYTE *)v7 + v11); /*0x548f3*/
      if ( v12 >= 0x80u ) /*0x548fb*/
      {
        if ( (v12 & 0xE0) == 0xC0 ) /*0x5490b*/
        {
          v13 = 2; /*0x5490d*/
        }
        else if ( (v12 & 0xF0) == 0xE0 ) /*0x5491b*/
        {
          v13 = 3; /*0x5491d*/
        }
        else
        {
          if ( (v12 & 0xF8) != 0xF0 ) /*0x5492a*/
            break; /*0x5492a*/
          v13 = 4; /*0x5492c*/
        }
      }
      else
      {
        v13 = 1; /*0x548fd*/
      }
      v11 += v13; /*0x54931*/
      if ( v11 > (int)v63 ) /*0x54937*/
        break; /*0x54937*/
      ++v10; /*0x54939*/
    }
    while ( v11 < (int)v63 ); /*0x5493f*/
    v9 = v64; /*0x54941*/
  }
  if ( v6 < 0 || v6 > v10 ) /*0x54951*/
  {
    v14 = 1; /*0x549ce*/
    v21 = v63; /*0x549d1*/
  }
  else
  {
    v14 = 0; /*0x54953*/
    v15 = Src; /*0x54956*/
    if ( v9 > 0xF ) /*0x5495e*/
      v15 = (void **)Src[0]; /*0x5495e*/
    v16 = 0; /*0x54962*/
    v17 = 0; /*0x54965*/
    if ( v6 > 0 ) /*0x5496b*/
    {
      v18 = 0; /*0x5496d*/
      while ( 1 ) /*0x54970*/
      {
        if ( v18 >= (int)v63 ) /*0x54973*/
          goto LABEL_35; /*0x54973*/
        v19 = *((_BYTE *)v15 + v18); /*0x54975*/
        if ( v19 < 0x80u ) /*0x5497d*/
          break; /*0x5497d*/
        if ( (v19 & 0xE0) == 0xC0 ) /*0x54986*/
        {
          v20 = 2; /*0x54988*/
        }
        else if ( (v19 & 0xF0) == 0xE0 ) /*0x54996*/
        {
          v20 = 3; /*0x54998*/
        }
        else
        {
          v20 = 4; /*0x549a5*/
          if ( (v19 & 0xF8) != 0xF0 ) /*0x549aa*/
            break; /*0x549aa*/
        }
LABEL_34:
        v16 += v20; /*0x549b1*/
        v18 += v20; /*0x549b7*/
        if ( ++v17 >= v6 ) /*0x549c0*/
          goto LABEL_35; /*0x549c0*/
      }
      v20 = 1; /*0x549ac*/
      goto LABEL_34; /*0x549ac*/
    }
LABEL_35:
    v21 = v63; /*0x549c2*/
    if ( v16 < (int)v63 ) /*0x549c8*/
      v21 = v16; /*0x549c8*/
  }
  v22 = 0; /*0x549d4*/
  v23 = *(_DWORD **)(a1 + 120); /*0x549de*/
  v24 = (*(_QWORD *)(a1 + 128) - (_QWORD)v23) / 24LL; /*0x54a03*/
  if ( v24 ) /*0x54a06*/
  {
    v25 = *(_DWORD **)(a1 + 120); /*0x54a08*/
    while ( *v25 + v25[2] != v21 ) /*0x54a18*/
    {
      ++v22; /*0x54a1a*/
      v25 += 6; /*0x54a1d*/
      if ( v22 >= v24 ) /*0x54a24*/
        goto LABEL_45; /*0x54a24*/
    }
    v26 = &v23[6 * v22]; /*0x54a2c*/
    if ( v26 ) /*0x54a33*/
      goto LABEL_68; /*0x54a33*/
  }
LABEL_45:
  if ( !v14 && v6 > 0 ) /*0x54a45*/
  {
    v27 = Src; /*0x54a4b*/
    if ( v64 > 0xF ) /*0x54a54*/
      v27 = (void **)Src[0]; /*0x54a54*/
    v28 = 0; /*0x54a58*/
    v29 = 0; /*0x54a5b*/
    if ( v6 - 1 > 0 ) /*0x54a65*/
    {
      v30 = 0; /*0x54a67*/
      while ( 1 ) /*0x54a70*/
      {
        if ( v30 >= (int)v63 ) /*0x54a73*/
          goto LABEL_60; /*0x54a73*/
        v31 = *((_BYTE *)v27 + v30); /*0x54a75*/
        if ( v31 < 0x80u ) /*0x54a7d*/
          break; /*0x54a7d*/
        if ( (v31 & 0xE0) == 0xC0 ) /*0x54a86*/
        {
          v32 = 2; /*0x54a88*/
        }
        else if ( (v31 & 0xF0) == 0xE0 ) /*0x54a96*/
        {
          v32 = 3; /*0x54a98*/
        }
        else
        {
          v32 = 4; /*0x54aa5*/
          if ( (v31 & 0xF8) != 0xF0 ) /*0x54aaa*/
            break; /*0x54aaa*/
        }
LABEL_59:
        v28 += v32; /*0x54ab1*/
        v30 += v32; /*0x54ab7*/
        if ( ++v29 >= v6 - 1 ) /*0x54ac0*/
          goto LABEL_60; /*0x54ac0*/
      }
      v32 = 1; /*0x54aac*/
      goto LABEL_59; /*0x54aac*/
    }
LABEL_60:
    v33 = v63; /*0x54ac2*/
    if ( v28 < (int)v63 ) /*0x54ac8*/
      v33 = v28; /*0x54ac8*/
    v34 = 0; /*0x54acc*/
    if ( v24 ) /*0x54ad2*/
    {
      while ( 1 ) /*0x54ae0*/
      {
        v35 = *(_QWORD *)(a1 + 120); /*0x54ae0*/
        if ( *v23 == v33 ) /*0x54ae7*/
          break; /*0x54ae7*/
        ++v34; /*0x54aed*/
        v23 += 6; /*0x54af0*/
        v36 = (__int64)((unsigned __int128)((*(_QWORD *)(a1 + 128) - v35) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 2; /*0x54b00*/
        if ( v34 >= (v36 >> 63) + v36 ) /*0x54b11*/
          goto LABEL_65; /*0x54b11*/
      }
      v26 = (int *)(v35 + 24 * v34); /*0x54bc1*/
    }
    else
    {
LABEL_65:
      v26 = 0; /*0x54b13*/
    }
    if ( v26 ) /*0x54b18*/
    {
      v8 = (void **)Src[0]; /*0x54b1e*/
LABEL_68:
      v37 = *v26; /*0x54b22*/
      v38 = *((_QWORD *)v26 + 1); /*0x54b24*/
      v39 = *(_QWORD *)v26; /*0x54b28*/
      if ( v63 < *(_QWORD *)v26 ) /*0x54b2e*/
        sub_3E4D0(v26, v39); /*0x54d1b*/
      if ( v63 - v39 < v38 ) /*0x54b3d*/
        v38 = v63 - v39; /*0x54b3d*/
      v40 = Src; /*0x54b41*/
      if ( v64 > 0xF ) /*0x54b4a*/
        v40 = v8; /*0x54b4a*/
      v41 = v63 - v38; /*0x54b51*/
      memmove((char *)v40 + v39, (char *)v40 + v39 + v38, v63 - v38 - v39 + 1); /*0x54b61*/
      v63 = v41; /*0x54b66*/
      v57 = 0; /*0x54b6d*/
      v58 = 0; /*0x54b73*/
      v59 = 0; /*0x54b77*/
      v45 = Src; /*0x54b7b*/
      v46 = (void **)Src[0]; /*0x54b7f*/
      v47 = v64; /*0x54b83*/
      if ( v64 > 0xF ) /*0x54b8b*/
        v45 = (void **)Src[0]; /*0x54b8b*/
      v48 = 0x7FFFFFFFFFFFFFFFLL; /*0x54b8f*/
      if ( v41 > 0x7FFFFFFFFFFFFFFFLL ) /*0x54b9c*/
        sub_8D90(v43, v42, v44); /*0x54d15*/
      if ( v41 > 0xF ) /*0x54ba6*/
      {
        if ( (v41 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x54bd4*/
        {
          v48 = v41 | 0xF; /*0x54bd6*/
          if ( (v41 | 0xF) < 0x16 ) /*0x54be1*/
            v48 = 22; /*0x54be1*/
        }
        *(_QWORD *)&v57 = sub_3C460(v48 + 1); /*0x54bee*/
        v58 = v41; /*0x54bf2*/
        v59 = v48; /*0x54bf6*/
        memcpy((void *)v57, v45, v41 + 1); /*0x54c04*/
      }
      else
      {
        v58 = v41; /*0x54ba8*/
        v59 = 15; /*0x54bac*/
        v57 = *(_OWORD *)v45; /*0x54bb7*/
      }
      v49 = v60; /*0x54c0d*/
      CCTextInputNode_setString(v60, &v57); /*0x54c14*/
      if ( v6 >= 0 ) /*0x54c1c*/
      {
        v51 = Src; /*0x54c27*/
        if ( v47 > 0xF ) /*0x54c2f*/
          v51 = v46; /*0x54c2f*/
        v50 = 0; /*0x54c33*/
        if ( v37 <= (int)v41 ) /*0x54c39*/
          LODWORD(v41) = v37; /*0x54c39*/
        if ( (int)v41 > 0 ) /*0x54c43*/
        {
          v52 = 0; /*0x54c45*/
          do /*0x54c6a*/
          {
            v53 = v50 + 1; /*0x54c57*/
            if ( (*((_BYTE *)v51 + v52) & 0xC0) == 0x80 ) /*0x54c5b*/
              v53 = v50; /*0x54c5d*/
            v50 = v53; /*0x54c61*/
            ++v52; /*0x54c64*/
          }
          while ( v52 < (int)v41 ); /*0x54c6a*/
        }
      }
      else
      {
        v50 = -1; /*0x54c1e*/
      }
      *(_DWORD *)(v61 + 760) = v50; /*0x54c70*/
      CustomSFXWidget_init(v49, *(unsigned int *)(v49[75] + 760LL)); /*0x54c87*/
      v54 = 1; /*0x54c8c*/
      goto LABEL_96; /*0x54c8e*/
    }
  }
  v54 = 0; /*0x54c90*/
  v46 = (void **)Src[0]; /*0x54c92*/
  v47 = v64; /*0x54c96*/
LABEL_96:
  if ( v47 > 0xF ) /*0x54c9e*/
  {
    v55 = v46; /*0x54ca4*/
    if ( v47 + 1 >= 0x1000 ) /*0x54cae*/
    {
      v46 = (void **)*(v46 - 1); /*0x54cb4*/
      if ( (unsigned __int64)((char *)v55 - (char *)v46 - 8) > 0x1F ) /*0x54cc3*/
        invoke_watson(0, 0, 0, 0, 0); /*0x54cd8*/
    }
    j_j_free(v46); /*0x54ce2*/
  }
  return v54; /*0x54cee*/
}

// [7/19] Address: 0x55f30
// Method: CCTextInputNode::keyboardWillShow
void __fastcall CCTextInputNode_keyboardWillShow(__int64 a1, __int64 a2)
{
  cocos2d::CCRect *v2; // rdi
  float MaxY; // xmm0_4
  bool v5; // zf
  __int64 v6; // rcx
  const struct cocos2d::CCPoint *v7; // rax
  __int64 v8; // rax
  float v9; // xmm0_4
  float v10; // xmm6_4
  __int64 v11; // rcx
  _BYTE v12[4]; // [rsp+20h] [rbp-38h] BYREF
  float v13; // [rsp+24h] [rbp-34h]
  _BYTE v14[4]; // [rsp+30h] [rbp-28h] BYREF
  float v15; // [rsp+34h] [rbp-24h]
  char v16; // [rsp+60h] [rbp+8h] BYREF

  v2 = (cocos2d::CCRect *)(a2 + 16); /*0x55f3f*/
  MaxY = cocos2d::CCRect::getMaxY((cocos2d::CCRect *)(a2 + 16)); /*0x55f49*/
  v5 = *(_BYTE *)(a1 + 226) == 0; /*0x55f4f*/
  dword_903780 = LODWORD(MaxY); /*0x55f56*/
  if ( v5 ) /*0x55f5e*/
  {
    v6 = *(_QWORD *)(a1 + 192); /*0x55f64*/
    if ( v6 ) /*0x55f6e*/
    {
      if ( *(_BYTE *)(a1 + 60) ) /*0x55f74*/
      {
        v7 = (const struct cocos2d::CCPoint *)(*(__int64 (**)(void))(*(_QWORD *)v6 + 296LL))(); /*0x55f86*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v16, v7); /*0x55f94*/
        sub_53180(v12, a1 - 408, v8); /*0x55fa9*/
        v13 = v13 + -4.0; /*0x55fbf*/
        v9 = cocos2d::CCRect::getMaxY(v2); /*0x55fc5*/
        v10 = v9 - cocos2d::CCRect::getMinY((cocos2d::CCRect *)v12); /*0x55fe3*/
        cocos2d::CCRect::CCRect((cocos2d::CCRect *)v14, (const struct cocos2d::CCRect *)v12); /*0x55fe7*/
        if ( v10 < 0.0 ) /*0x55ff3*/
          v15 = v15 + v10; /*0x55fff*/
        if ( cocos2d::CCRect::intersectsRect((cocos2d::CCRect *)v14, v2) ) /*0x5600d*/
        {
          v11 = *(_QWORD *)(a1 + 200); /*0x56017*/
          *(_BYTE *)(a1 + 61) = 1; /*0x5601e*/
          if ( v11 ) /*0x56025*/
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 24LL))(v11, a1 - 408); /*0x56034*/
        }
      }
    }
  }
}

// [8/19] Address: 0x56050
// Method: CCTextInputNode::keyboardWillHide
__int64 __fastcall CCTextInputNode_keyboardWillHide(__int64 a1)
{
  bool v1; // zf
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  v1 = *(_BYTE *)(a1 + 226) == 0; /*0x5605a*/
  result = *(unsigned __int8 *)(a1 + 60); /*0x56064*/
  dword_903780 = 0; /*0x56068*/
  if ( v1 ) /*0x56072*/
  {
    if ( (_BYTE)result && *(_QWORD *)(a1 + 192) ) /*0x560b2*/
      result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 408) + 1032LL))(a1 - 408, 0); /*0x560cc*/
    if ( *(_QWORD *)(a1 + 192) ) /*0x560d2*/
    {
      if ( *(_BYTE *)(a1 + 61) ) /*0x560dc*/
      {
        v5 = *(_QWORD *)(a1 + 200); /*0x560e2*/
        *(_BYTE *)(a1 + 61) = 0; /*0x560e9*/
        if ( v5 ) /*0x560f0*/
          return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 32LL))(v5, a1 - 408); /*0x560fc*/
      }
    }
  }
  else if ( (_BYTE)result && *(_QWORD *)(a1 + 192) ) /*0x5607c*/
  {
    v4 = *(_QWORD *)(a1 + 200); /*0x56086*/
    if ( v4 ) /*0x56090*/
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 32LL))(v4, a1 - 408); /*0x5609c*/
    *(_BYTE *)(a1 + 60) = 0; /*0x5609f*/
  }
  return result; /*0x560a3*/
}

// [9/19] Address: 0x56110
// Method: CCTextInputNode::onClickTrackNode
__int64 __fastcall CCTextInputNode_onClickTrackNode(__int64 a1, char a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 600) + 704LL); /*0x5611e*/
  if ( a2 ) /*0x56123*/
    return (*(__int64 (**)(void))(v2 + 8))(); /*0x56125*/
  else
    return (*(__int64 (**)(void))(v2 + 16))(); /*0x56129*/
}

// [10/19] Address: 0x56130
// Method: CCTextInputNode::textChanged
__int64 __fastcall CCTextInputNode_textChanged(_QWORD *a1, __int64 a2)
{
  cocos2d::CCObject *v2; // rdi
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 result; // rax
  __int64 (__fastcall ***v7)(_QWORD, __int64); // rcx
  __int64 (__fastcall ***v8)(_QWORD, __int64); // rcx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+38h] [rbp-10h]

  v2 = (cocos2d::CCObject *)a1[36]; /*0x5613f*/
  if ( v2 ) /*0x5614c*/
  {
    a1[36] = 0; /*0x5614e*/
    LOBYTE(a2) = 1; /*0x56159*/
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v2 + 520LL))(v2, a2); /*0x56161*/
    cocos2d::CCObject::release(v2); /*0x5616a*/
  }
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1[23] + 600LL) + 8LL))(a1[23] + 600LL); /*0x56181*/
  v10 = 0; /*0x56187*/
  v9 = 0; /*0x56190*/
  v11 = 0; /*0x56195*/
  v5 = -1; /*0x5619e*/
  do /*0x561a8*/
    ++v5; /*0x561a5*/
  while ( *(_BYTE *)(v4 + v5) ); /*0x561a8*/
  sub_3C230(&v9); /*0x561b7*/
  result = SpriteAnimationManager_executeAnimation(a1 - 52, &v9); /*0x561c8*/
  v7 = (__int64 (__fastcall ***)(_QWORD, __int64))a1[24]; /*0x561cd*/
  if ( v7 ) /*0x561d7*/
    result = (**v7)(v7, (__int64)(a1 - 52)); /*0x561e3*/
  v8 = (__int64 (__fastcall ***)(_QWORD, __int64))a1[13]; /*0x561e5*/
  if ( v8 ) /*0x561ec*/
    return (**v8)(v8, (__int64)(a1 - 52)); /*0x561f8*/
  return result; /*0x561fa*/
}

// [11/19] Address: 0x56210
// Method: CCTextInputNode::onTextFieldInsertText
// Hidden C++ exception states: #wind=3
char __fastcall CCTextInputNode_onTextFieldInsertText(__int64 a1, __int64 a2, _BYTE *a3, int a4, int a5)
{
  int v8; // esi
  __int64 v9; // rdi
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v14; // rbx
  void *v15; // rcx
  __int64 v16; // rax
  int v17; // ebx
  int v18; // esi
  __int128 *v19; // r11
  int v20; // r10d
  int v21; // r9d
  __int64 v22; // rdx
  unsigned __int8 v23; // cl
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int128 *v27; // r8
  int v28; // edi
  __int128 *p_Src; // r9
  int v30; // r8d
  __int64 v31; // rdx
  unsigned __int8 v32; // cl
  __int64 v33; // rax
  __int128 *v34; // r10
  int v35; // r8d
  int v36; // r9d
  __int64 v37; // rdx
  unsigned __int8 v38; // cl
  int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rdx
  __int128 *v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rdi
  int v46; // ecx
  __int128 *v47; // r10
  int v48; // r9d
  __int64 i; // r8
  int v50; // edx
  void *v51; // rcx
  __int64 v52; // r8
  bool v53; // zf
  __int64 v54; // rax
  __int64 v55; // rdi
  __int64 v56; // rcx
  __int64 v57; // rbx
  __int64 v58; // rax
  int v59; // eax
  int v60; // edx
  int v61; // ecx
  char *v62; // rax
  char v63; // cl
  __int64 v64; // rax
  void **v65; // r11
  void *v66; // r15
  unsigned __int64 v67; // r14
  int v68; // r10d
  int v69; // r8d
  __int64 v70; // rdx
  unsigned __int8 v71; // cl
  int v72; // eax
  __int64 v73; // rcx
  int v74; // r9d
  unsigned __int64 v75; // r10
  __int64 v76; // r11
  int *v77; // r8
  int v78; // ecx
  int v79; // edx
  void **v80; // r8
  __int64 v81; // r9
  __int64 v82; // rdx
  int v83; // ecx
  __int128 Src; // [rsp+38h] [rbp-99h] BYREF
  unsigned __int64 v85; // [rsp+48h] [rbp-89h]
  unsigned __int64 v86; // [rsp+50h] [rbp-81h]
  __int128 v87; // [rsp+58h] [rbp-79h] BYREF
  __int64 v88; // [rsp+68h] [rbp-69h]
  unsigned __int64 v89; // [rsp+70h] [rbp-61h]
  void *Block[2]; // [rsp+78h] [rbp-59h] BYREF
  __int128 v91; // [rsp+88h] [rbp-49h]
  void *v92[2]; // [rsp+98h] [rbp-39h] BYREF
  __int128 v93; // [rsp+A8h] [rbp-29h]
  _BYTE v94[32]; // [rsp+B8h] [rbp-19h] BYREF

  v8 = a5; /*0x56240*/
  v9 = -1; /*0x56243*/
  switch ( a5 ) /*0x56250*/
  {
    case 285: /*0x56250*/
      v8 = 37; /*0x56252*/
      *(_DWORD *)(a1 + 256) = -1082130432; /*0x56257*/
      v10 = *(_QWORD *)(a1 + 184); /*0x56261*/
      v11 = *(_DWORD *)(v10 + 760); /*0x56268*/
      goto LABEL_142; /*0x5626e*/
    case 286: /*0x56250*/
      v8 = 39; /*0x5627b*/
      *(_DWORD *)(a1 + 256) = -1082130432; /*0x56280*/
      v10 = *(_QWORD *)(a1 + 184); /*0x5628a*/
      v11 = *(_DWORD *)(v10 + 760); /*0x56291*/
      goto LABEL_5; /*0x56291*/
    case 283: /*0x56250*/
      v8 = 38; /*0x562ae*/
LABEL_9:
      v12 = 1; /*0x562b3*/
      if ( v8 == 38 ) /*0x562bb*/
        v12 = 0xFFFFFFFFLL; /*0x562bb*/
      sub_57150(a1 - 416, v12); /*0x562c5*/
      return 1; /*0x562c5*/
    case 284: /*0x56250*/
      v8 = 40; /*0x562f4*/
      goto LABEL_9; /*0x562f9*/
  }
  if ( ((a5 - 38) & 0xFFFFFFFD) == 0 ) /*0x56303*/
    goto LABEL_9; /*0x56303*/
  *(_DWORD *)(a1 + 256) = -1082130432; /*0x56305*/
  if ( ((a5 - 37) & 0xFFFFFFFD) == 0 ) /*0x56317*/
  {
    v10 = *(_QWORD *)(a1 + 184); /*0x5692e*/
    v11 = *(_DWORD *)(v10 + 760); /*0x56935*/
    if ( a5 == 37 ) /*0x5693e*/
    {
LABEL_142:
      if ( v11 >= 0 ) /*0x56946*/
      {
        if ( v11 > 0 ) /*0x56952*/
          --v11; /*0x56954*/
      }
      else
      {
        v11 = *(_DWORD *)(v10 + 720) - 1; /*0x5694e*/
      }
LABEL_149:
      if ( *(int *)(a1 + 112) > 0 && v11 >= 0 ) /*0x56974*/
      {
        v64 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v10 + 600) + 8LL))(v10 + 600); /*0x56984*/
        *(_OWORD *)v92 = 0; /*0x5698a*/
        v93 = 0; /*0x56991*/
        do /*0x56999*/
          ++v9; /*0x56996*/
        while ( *(_BYTE *)(v64 + v9) ); /*0x56999*/
        sub_3C230(v92); /*0x569a9*/
        v65 = v92; /*0x569ae*/
        v66 = v92[0]; /*0x569b2*/
        v67 = *((_QWORD *)&v93 + 1); /*0x569b6*/
        if ( *((_QWORD *)&v93 + 1) > 0xFu ) /*0x569be*/
          v65 = (void **)v92[0]; /*0x569be*/
        v68 = 0; /*0x569c2*/
        v69 = 0; /*0x569c5*/
        if ( v11 > 0 ) /*0x569ce*/
        {
          v70 = 0; /*0x569d3*/
          while ( 1 ) /*0x569e0*/
          {
            if ( v70 >= (int)v93 ) /*0x569e3*/
            {
LABEL_167:
              v67 = *((_QWORD *)&v93 + 1); /*0x56a38*/
              goto LABEL_168; /*0x56a38*/
            }
            v71 = *((_BYTE *)v65 + v70); /*0x569e5*/
            if ( v71 < 0x80u ) /*0x569ed*/
              break; /*0x569ed*/
            if ( (v71 & 0xE0) == 0xC0 ) /*0x569f6*/
            {
              v72 = 2; /*0x569f8*/
              v73 = 2; /*0x569fd*/
            }
            else if ( (v71 & 0xF0) == 0xE0 ) /*0x56a08*/
            {
              v72 = 3; /*0x56a0a*/
              v73 = 3; /*0x56a0f*/
            }
            else
            {
              if ( (v71 & 0xF8) != 0xF0 ) /*0x56a19*/
                break; /*0x56a19*/
              v72 = 4; /*0x56a1b*/
              v73 = 4; /*0x56a20*/
            }
LABEL_166:
            v68 += v72; /*0x56a2a*/
            v70 += v73; /*0x56a2d*/
            if ( ++v69 >= v11 ) /*0x56a36*/
              goto LABEL_167; /*0x56a36*/
          }
          v73 = 1; /*0x56a24*/
          v72 = 1; /*0x56a27*/
          goto LABEL_166; /*0x56a27*/
        }
LABEL_168:
        v74 = v93; /*0x56a3c*/
        if ( v68 < (int)v93 ) /*0x56a42*/
          v74 = v68; /*0x56a42*/
        v75 = 0; /*0x56a46*/
        v76 = *(_QWORD *)(a1 + 120); /*0x56a50*/
        if ( (*(_QWORD *)(a1 + 128) - v76) / 24 ) /*0x56a72*/
        {
          v77 = *(int **)(a1 + 120); /*0x56a7b*/
          while ( 1 ) /*0x56a80*/
          {
            v78 = *v77; /*0x56a80*/
            if ( v74 > *v77 ) /*0x56a86*/
            {
              v79 = v77[2]; /*0x56a88*/
              if ( v74 < v79 + v78 ) /*0x56a92*/
                break; /*0x56a92*/
            }
            ++v75; /*0x56a94*/
            v77 += 6; /*0x56a97*/
            if ( v75 >= (*(_QWORD *)(a1 + 128) - v76) / 24 ) /*0x56abf*/
              goto LABEL_188; /*0x56abf*/
          }
          if ( v77 ) /*0x56ac6*/
          {
            if ( v8 != 37 ) /*0x56acb*/
              v78 += v79; /*0x56acd*/
            v80 = v92; /*0x56acf*/
            if ( v67 > 0xF ) /*0x56ad7*/
              v80 = (void **)v92[0]; /*0x56ad7*/
            if ( v78 > (int)v93 ) /*0x56ade*/
              v78 = v93; /*0x56ade*/
            v11 = 0; /*0x56ae2*/
            v81 = v78; /*0x56ae4*/
            if ( v78 > 0 ) /*0x56ae9*/
            {
              v82 = 0; /*0x56aeb*/
              do /*0x56b07*/
              {
                v83 = v11 + 1; /*0x56af7*/
                if ( (*((_BYTE *)v80 + v82) & 0xC0) == 0x80 ) /*0x56afa*/
                  v83 = v11; /*0x56afc*/
                v11 = v83; /*0x56aff*/
                ++v82; /*0x56b01*/
              }
              while ( v82 < v81 ); /*0x56b07*/
            }
          }
        }
LABEL_188:
        if ( v67 > 0xF ) /*0x56b0d*/
        {
          if ( v67 + 1 >= 0x1000 ) /*0x56b1d*/
          {
            v66 = (void *)*((_QWORD *)v92[0] - 1); /*0x56b23*/
            if ( (unsigned __int64)((char *)v92[0] - (char *)v66 - 8) > 0x1F ) /*0x56b32*/
              invoke_watson(0, 0, 0, 0, 0); /*0x56b47*/
          }
          j_j_free(v66); /*0x56b51*/
        }
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 184) + 760LL) = v11; /*0x56b5d*/
      CustomSFXWidget_init(a1 - 416, *(unsigned int *)(*(_QWORD *)(a1 - 416 + 600) + 760LL)); /*0x56b77*/
      return 1; /*0x56b7c*/
    }
LABEL_5:
    if ( v11 < 0 ) /*0x56299*/
      v11 = -1; /*0x56958*/
    else
      ++v11; /*0x5629f*/
    if ( v11 > *(_DWORD *)(v10 + 720) - 1 ) /*0x56964*/
      v11 = -1; /*0x56964*/
    goto LABEL_149; /*0x56964*/
  }
  if ( a3 && a4 > 1 ) /*0x5632a*/
  {
    *(_OWORD *)Block = 0; /*0x56333*/
    v91 = 0; /*0x5633a*/
    sub_3C230(Block); /*0x56349*/
    if ( *(int *)(a1 + 112) > 0 ) /*0x56354*/
    {
      v14 = sub_7E1C0(v94); /*0x56367*/
      if ( Block != (void **)v14 ) /*0x56371*/
      {
        if ( *((_QWORD *)&v91 + 1) > 0xFu ) /*0x5637b*/
        {
          v15 = Block[0]; /*0x56380*/
          if ( (unsigned __int64)(*((_QWORD *)&v91 + 1) + 1LL) >= 0x1000 ) /*0x5638e*/
          {
            v15 = (void *)*((_QWORD *)Block[0] - 1); /*0x56394*/
            if ( (unsigned __int64)((char *)Block[0] - (char *)v15 - 8) > 0x1F ) /*0x563a3*/
              invoke_watson(0, 0, 0, 0, 0); /*0x563b8*/
          }
          j_j_free(v15); /*0x563bf*/
        }
        *(_OWORD *)Block = *(_OWORD *)v14; /*0x563c7*/
        v91 = *(_OWORD *)(v14 + 16); /*0x563cf*/
        *(_QWORD *)(v14 + 16) = 0; /*0x563d3*/
        *(_QWORD *)(v14 + 24) = 15; /*0x563db*/
        *(_BYTE *)v14 = 0; /*0x563e3*/
      }
      sub_3C310(v94); /*0x563ea*/
    }
    sub_52E20(&v87, *(_BYTE *)(a1 + 232)); /*0x5640f*/
    if ( !v88 ) /*0x5641a*/
      goto LABEL_105; /*0x5641a*/
    v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2 + 600) + 8LL))(a2 + 600); /*0x5642a*/
    Src = 0; /*0x56430*/
    v85 = 0; /*0x56435*/
    v86 = 0; /*0x5643e*/
    do /*0x5644a*/
      ++v9; /*0x56447*/
    while ( *(_BYTE *)(v16 + v9) ); /*0x5644a*/
    sub_3C230(&Src); /*0x5645b*/
    v17 = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 760LL); /*0x56468*/
    if ( v17 < 0 ) /*0x5647b*/
    {
      v18 = v85; /*0x5647d*/
LABEL_49:
      v26 = v18; /*0x56507*/
      if ( v18 >= (int)v85 ) /*0x5650c*/
        v26 = v85; /*0x5650c*/
      if ( v26 >= 0 ) /*0x56512*/
      {
        if ( v18 >= (int)v85 ) /*0x5651b*/
          v18 = v85; /*0x5651b*/
      }
      else
      {
        v18 = 0; /*0x56514*/
      }
      v27 = &v87; /*0x5651f*/
      if ( v89 > 0xF ) /*0x56528*/
        v27 = (__int128 *)v87; /*0x56528*/
      sub_58C00(&Src, v18, v27, v88); /*0x56539*/
      v28 = *(_DWORD *)(a1 + 200); /*0x5653e*/
      if ( v28 > 0 ) /*0x56547*/
      {
        p_Src = &Src; /*0x5654d*/
        if ( v86 > 0xF ) /*0x56560*/
          p_Src = (__int128 *)Src; /*0x56560*/
        v30 = 0; /*0x56564*/
        if ( (int)v85 > 0 ) /*0x56571*/
        {
          v31 = 0; /*0x56577*/
          do /*0x565ca*/
          {
            v32 = *((_BYTE *)p_Src + v31); /*0x56580*/
            if ( v32 >= 0x80u ) /*0x56588*/
            {
              if ( (v32 & 0xE0) == 0xC0 ) /*0x56596*/
              {
                v33 = 2; /*0x56598*/
              }
              else if ( (v32 & 0xF0) == 0xE0 ) /*0x565a6*/
              {
                v33 = 3; /*0x565a8*/
              }
              else
              {
                if ( (v32 & 0xF8) != 0xF0 ) /*0x565b5*/
                  break; /*0x565b5*/
                v33 = 4; /*0x565b7*/
              }
            }
            else
            {
              v33 = 1; /*0x5658a*/
            }
            v31 += v33; /*0x565bc*/
            if ( v31 > (int)v85 ) /*0x565c2*/
              break; /*0x565c2*/
            ++v30; /*0x565c4*/
          }
          while ( v31 < (int)v85 ); /*0x565ca*/
          if ( v30 <= v28 ) /*0x565cf*/
            goto LABEL_93; /*0x565cf*/
          v34 = &Src; /*0x565d5*/
          v35 = 0; /*0x565da*/
          v36 = 0; /*0x565dd*/
          if ( v86 > 0xF ) /*0x565e4*/
            v34 = (__int128 *)Src; /*0x565e6*/
          v37 = 0; /*0x565e9*/
          while ( 1 ) /*0x565f0*/
          {
            if ( v37 >= (int)v85 ) /*0x565f3*/
            {
LABEL_86:
              v41 = v85; /*0x56648*/
              if ( v35 < (int)v85 ) /*0x5664d*/
                v41 = v35; /*0x5664d*/
              v42 = v41; /*0x56651*/
              if ( v41 > v85 ) /*0x56657*/
              {
                sub_58D00(&Src, v41 - v85); /*0x56679*/
              }
              else
              {
                v85 = v41; /*0x56659*/
                v43 = &Src; /*0x5665e*/
                if ( v86 > 0xF ) /*0x56667*/
                  v43 = (__int128 *)Src; /*0x56667*/
                *((_BYTE *)v43 + v42) = 0; /*0x5666b*/
              }
              goto LABEL_93; /*0x5666f*/
            }
            v38 = *((_BYTE *)v34 + v37); /*0x565f5*/
            if ( v38 < 0x80u ) /*0x565fd*/
              break; /*0x565fd*/
            if ( (v38 & 0xE0) == 0xC0 ) /*0x56606*/
            {
              v39 = 2; /*0x56608*/
              v40 = 2; /*0x5660d*/
            }
            else if ( (v38 & 0xF0) == 0xE0 ) /*0x56618*/
            {
              v39 = 3; /*0x5661a*/
              v40 = 3; /*0x5661f*/
            }
            else
            {
              if ( (v38 & 0xF8) != 0xF0 ) /*0x56629*/
                break; /*0x56629*/
              v39 = 4; /*0x5662b*/
              v40 = 4; /*0x56630*/
            }
LABEL_85:
            v35 += v39; /*0x5663a*/
            v37 += v40; /*0x5663d*/
            if ( ++v36 >= v28 ) /*0x56646*/
              goto LABEL_86; /*0x56646*/
          }
          v40 = 1; /*0x56634*/
          v39 = 1; /*0x56637*/
          goto LABEL_85; /*0x56637*/
        }
      }
LABEL_93:
      v44 = (_QWORD *)sub_3E4F0(v94, &Src); /*0x5667e*/
      CCTextInputNode_setString((_QWORD *)(a1 - 416), v44); /*0x56696*/
      v45 = *(_QWORD *)(a1 + 184); /*0x5669b*/
      if ( *(int *)(v45 + 760) >= 0 ) /*0x566a9*/
      {
        v46 = v18 + v88; /*0x566ae*/
        v47 = &Src; /*0x566b0*/
        if ( v86 > 0xF ) /*0x566bb*/
          v47 = (__int128 *)Src; /*0x566bb*/
        if ( v46 > (int)v85 ) /*0x566c8*/
          v46 = v85; /*0x566c8*/
        v48 = 0; /*0x566cb*/
        if ( v46 > 0 ) /*0x566d3*/
        {
          for ( i = 0; i < v46; ++i ) /*0x566d5*/
          {
            v50 = v48 + 1; /*0x566e7*/
            if ( (*((_BYTE *)v47 + i) & 0xC0) == 0x80 ) /*0x566eb*/
              v50 = v48; /*0x566ed*/
            v48 = v50; /*0x566f1*/
          }
        }
        *(_DWORD *)(v45 + 760) = v48; /*0x566fc*/
        CustomSFXWidget_init(a1 - 416, *(unsigned int *)(*(_QWORD *)(a1 + 184) + 760LL)); /*0x56717*/
      }
      sub_3C310(&Src); /*0x56722*/
LABEL_105:
      sub_3C310(&v87); /*0x56728*/
      if ( *((_QWORD *)&v91 + 1) > 0xFu ) /*0x5673a*/
      {
        v51 = Block[0]; /*0x56743*/
        if ( (unsigned __int64)(*((_QWORD *)&v91 + 1) + 1LL) >= 0x1000 ) /*0x56751*/
        {
          v51 = (void *)*((_QWORD *)Block[0] - 1); /*0x56757*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v51 - 8) > 0x1F ) /*0x56766*/
            invoke_watson(0, 0, 0, 0, 0); /*0x5677b*/
        }
        j_j_free(v51); /*0x56782*/
      }
      return 1; /*0x56787*/
    }
    v19 = &Src; /*0x56485*/
    if ( v86 > 0xF ) /*0x56490*/
      v19 = (__int128 *)Src; /*0x56490*/
    v20 = 0; /*0x56496*/
    v21 = 0; /*0x56499*/
    if ( v17 <= 0 ) /*0x5649e*/
    {
LABEL_47:
      v18 = v85; /*0x564fd*/
      if ( v20 < (int)v85 ) /*0x56503*/
        v18 = v20; /*0x56503*/
      goto LABEL_49; /*0x56503*/
    }
    v22 = 0; /*0x564a3*/
    while ( 1 ) /*0x564a5*/
    {
      if ( v22 >= (int)v85 ) /*0x564a8*/
        goto LABEL_47; /*0x564a8*/
      v23 = *((_BYTE *)v19 + v22); /*0x564aa*/
      if ( v23 < 0x80u ) /*0x564b2*/
        break; /*0x564b2*/
      if ( (v23 & 0xE0) == 0xC0 ) /*0x564bb*/
      {
        v24 = 2; /*0x564bd*/
        v25 = 2; /*0x564c2*/
      }
      else if ( (v23 & 0xF0) == 0xE0 ) /*0x564cd*/
      {
        v24 = 3; /*0x564cf*/
        v25 = 3; /*0x564d4*/
      }
      else
      {
        if ( (v23 & 0xF8) != 0xF0 ) /*0x564de*/
          break; /*0x564de*/
        v24 = 4; /*0x564e0*/
        v25 = 4; /*0x564e5*/
      }
LABEL_46:
      v20 += v24; /*0x564ef*/
      v22 += v25; /*0x564f2*/
      if ( ++v21 >= v17 ) /*0x564fb*/
        goto LABEL_47; /*0x564fb*/
    }
    v25 = 1; /*0x564e9*/
    v24 = 1; /*0x564ec*/
    goto LABEL_46; /*0x564ec*/
  }
  v52 = (unsigned __int8)*a3; /*0x5678c*/
  if ( (_BYTE)v52 == 10 ) /*0x56794*/
  {
    if ( *(_BYTE *)(a1 + 232) ) /*0x5679a*/
    {
      if ( a5 == 13 ) /*0x567f1*/
      {
        v54 = cocos2d::CCDirector::sharedDirector(a1); /*0x567f3*/
        if ( !*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v54 + 176LL))(v54) + 152) ) /*0x5680f*/
          return 1; /*0x562eb*/
      }
      v87 = 0; /*0x56818*/
      v88 = 1; /*0x56822*/
      v89 = 15; /*0x56826*/
      LOWORD(v87) = 10; /*0x5682e*/
      GJAccountManager_backupAccount(a1 - 416, &v87); /*0x5683f*/
      return 1; /*0x56844*/
    }
    else if ( a5 != 13 || *(_DWORD *)(a1 + 308) == 5 ) /*0x567af*/
    {
      *(_BYTE *)(a1 + 284) = 1; /*0x567c2*/
      v53 = a5 == 13; /*0x567c9*/
      if ( a5 == 13 ) /*0x567cc*/
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 416) + 1032LL))(a1 - 416, 0); /*0x567de*/
        return 1; /*0x567e4*/
      }
      return v53; /*0x567e6*/
    }
    else
    {
      *(_BYTE *)(a1 + 284) = 0; /*0x567b1*/
      return 1; /*0x567ba*/
    }
  }
  else
  {
    if ( *(_BYTE *)(a1 + 233) /*0x5686b*/
      && ((unsigned __int8)v52 >= 0x80u || (unsigned __int8)sub_52D50((unsigned int)v52, *(unsigned __int8 *)(a1 + 232))) )
    {
      return 1; /*0x5686b*/
    }
    if ( *(_QWORD *)(a1 + 88) ) /*0x56878*/
    {
      v55 = a1 + 72; /*0x5687f*/
      if ( *(_QWORD *)(a1 + 96) > 0xFu ) /*0x56888*/
        v55 = *(_QWORD *)(a1 + 72); /*0x5688a*/
      v56 = *(_QWORD *)(a1 + 88); /*0x5688e*/
      if ( !v56 ) /*0x56895*/
        return 1; /*0x56895*/
      v57 = v56 + v55; /*0x5689b*/
      v58 = sub_6722F0(v55, v56 + v55, v52); /*0x568a5*/
      if ( v58 == v57 || v58 - v55 == -1 ) /*0x568ba*/
        return 1; /*0x568ba*/
    }
    v59 = *(_DWORD *)(a1 + 200); /*0x568c0*/
    v60 = *(_DWORD *)(a2 + 720); /*0x568c7*/
    if ( v60 >= v59 && v59 > 0 ) /*0x568d4*/
      return 1; /*0x568d4*/
    v61 = *(_DWORD *)(a1 + 280); /*0x568da*/
    if ( v61 > 0 && (unsigned __int8)(*a3 - 48) <= 9u && v60 >= v61 ) /*0x568f1*/
    {
      v62 = (char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2 + 600) + 8LL))(a2 + 600); /*0x568fd*/
      if ( v62 ) /*0x56903*/
      {
        v63 = *v62; /*0x56905*/
        if ( *v62 ) /*0x56905*/
        {
          while ( (unsigned __int8)(v63 - 48) <= 9u ) /*0x56916*/
          {
            v63 = *++v62; /*0x5691b*/
            if ( !*v62 ) /*0x5691b*/
              return 1; /*0x56920*/
          }
        }
      }
    }
    return 0; /*0x56927*/
  }
}

// [12/19] Address: 0x56e70
// Method: CCTextInputNode::onTextFieldDetachWithIME
// Hidden C++ exception states: #wind=1
char __fastcall CCTextInputNode_onTextFieldDetachWithIME(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  void **v8; // rcx
  size_t v9; // r14
  size_t v10; // r8
  void **v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  cocos2d::CCObject *v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int128 Buf2; // [rsp+20h] [rbp-50h] BYREF
  __int64 v23; // [rsp+30h] [rbp-40h]
  __int64 v24; // [rsp+38h] [rbp-38h]
  void *Buf1[2]; // [rsp+48h] [rbp-28h] BYREF
  size_t v26; // [rsp+58h] [rbp-18h]
  unsigned __int64 v27; // [rsp+60h] [rbp-10h]

  v4 = (_QWORD *)(a1 - 416); /*0x56e97*/
  v5 = *(_QWORD *)(a1 - 416 + 592); /*0x56e9e*/
  if ( v5 ) /*0x56ea8*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 336LL))(v5, 0); /*0x56eaf*/
  v6 = -1; /*0x56eb8*/
  if ( *(_BYTE *)(a1 + 216) ) /*0x56ebf*/
  {
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2 + 600) + 8LL))(a2 + 600); /*0x56ed6*/
    sub_527D0(Buf1, v7); /*0x56ee0*/
    Buf2 = 0; /*0x56ee9*/
    v23 = 0; /*0x56eed*/
    v24 = 15; /*0x56ef1*/
    LOBYTE(Buf2) = 0; /*0x56ef9*/
    v8 = Buf1; /*0x56efd*/
    if ( v27 > 0xF ) /*0x56f06*/
      v8 = (void **)Buf1[0]; /*0x56f06*/
    v9 = v26; /*0x56f0b*/
    v10 = v26; /*0x56f0f*/
    if ( v26 ) /*0x56f15*/
      v10 = 0; /*0x56f15*/
    if ( memcmp(v8, &Buf2, v10) || v9 ) /*0x56f29*/
    {
      v11 = Buf1; /*0x56f2b*/
      if ( v27 > 0xF ) /*0x56f34*/
        v11 = (void **)Buf1[0]; /*0x56f34*/
      Buf2 = 0; /*0x56f3c*/
      v23 = 0; /*0x56f40*/
      v24 = 0; /*0x56f44*/
      v12 = -1; /*0x56f48*/
      do /*0x56f53*/
        ++v12; /*0x56f50*/
      while ( *((_BYTE *)v11 + v12) ); /*0x56f53*/
      sub_3C230(&Buf2); /*0x56f5e*/
      CCTextInputNode_setString(v4, &Buf2); /*0x56f6a*/
    }
    sub_3C310(Buf1); /*0x56f74*/
  }
  v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 184) + 600LL) + 8LL))(*(_QWORD *)(a1 + 184) + 600LL); /*0x56f8a*/
  Buf2 = 0; /*0x56f90*/
  v23 = 0; /*0x56f94*/
  v24 = 0; /*0x56f98*/
  do /*0x56fa3*/
    ++v6; /*0x56fa0*/
  while ( *(_BYTE *)(v13 + v6) ); /*0x56fa3*/
  sub_3C230(&Buf2); /*0x56fb3*/
  SpriteAnimationManager_executeAnimation(v4, &Buf2); /*0x56fbf*/
  v18 = *(cocos2d::CCObject **)(a1 + 288); /*0x56fc4*/
  if ( v18 ) /*0x56fce*/
  {
    *(_QWORD *)(a1 + 288) = 0; /*0x56fd0*/
    LOBYTE(v14) = 1; /*0x56fda*/
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v18 + 520LL))(v18, v14); /*0x56fdf*/
    cocos2d::CCObject::release(v18); /*0x56fe8*/
  }
  *(_BYTE *)(a1 + 52) = 0; /*0x56fee*/
  if ( (_QWORD *)qword_903788 == v4 ) /*0x56ff9*/
    qword_903788 = 0; /*0x56ffb*/
  *(_WORD *)(sub_8A020(v15, v14, v16, v17) + 387) = 256; /*0x57007*/
  v19 = *(_QWORD *)(a1 + 192); /*0x57010*/
  if ( v19 ) /*0x5701a*/
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v19 + 16LL))(v19, v4); /*0x57022*/
  *(_BYTE *)(a1 + 284) = 0; /*0x57025*/
  if ( *(_BYTE *)(a1 + 218) ) /*0x5702c*/
  {
    v20 = *(_QWORD *)(a1 + 192); /*0x57035*/
    if ( v20 ) /*0x5703f*/
      (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v20 + 32LL))(v20, v4); /*0x57047*/
  }
  return 0; /*0x5704c*/
}

// [13/19] Address: 0x573c0
// Method: CCTextInputNode::updateCursorPosition
// Hidden C++ exception states: #wind=1
void __fastcall CCTextInputNode_updateCursorPosition(__int64 a1, float *a2)
{
  __int64 v2; // rsi
  signed int v3; // ebp
  __int64 v4; // rax
  __int64 v5; // r8
  void **v6; // rcx
  char *v7; // rbx
  unsigned __int64 v8; // r14
  size_t v9; // r15
  size_t v10; // r8
  int v11; // edi
  char *v12; // rax
  int v13; // r13d
  struct cocos2d::CCObject *v14; // r12
  cocos2d::CCLabelBMFont *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rax
  cocos2d::CCArray *v18; // rdi
  float v19; // xmm7_4
  int v20; // r15d
  unsigned int v21; // ebx
  unsigned __int32 v22; // xmm8_4
  float *v23; // rsi
  struct cocos2d::CCObject *v24; // r14
  float v25; // xmm6_4
  float v26; // xmm0_4
  signed int i; // ebx
  struct cocos2d::CCObject *v28; // rax
  cocos2d::CCArray *v29; // rax
  __int64 v30; // rax
  float v31; // xmm8_4
  __int64 (__fastcall *v32)(cocos2d::CCLabelBMFont *); // rdi
  __int64 v33; // rbx
  __int64 v34; // rax
  float v35; // xmm10_4
  float v36; // xmm7_4
  __int64 v37; // rbx
  char v38; // r12
  cocos2d::CCArray *v39; // r15
  int v40; // edi
  unsigned int v41; // ebx
  struct cocos2d::CCObject *v42; // rax
  char v43; // al
  int v44; // ecx
  float *v45; // rbx
  struct cocos2d::CCSprite *v46; // rax
  float v47; // xmm10_4
  struct cocos2d::CCSprite *v48; // rbx
  float v49; // xmm6_4
  unsigned int v50; // ecx
  unsigned int v51; // ecx
  int v52; // [rsp+30h] [rbp-E8h]
  __int64 v53; // [rsp+38h] [rbp-E0h] BYREF
  char v54[8]; // [rsp+40h] [rbp-D8h] BYREF
  float *v55; // [rsp+48h] [rbp-D0h]
  __int128 Buf2; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v57; // [rsp+60h] [rbp-B8h]
  __int64 v58; // [rsp+68h] [rbp-B0h]
  void *Buf1[2]; // [rsp+70h] [rbp-A8h] BYREF
  size_t v60; // [rsp+80h] [rbp-98h]
  unsigned __int64 v61; // [rsp+88h] [rbp-90h]

  v55 = a2; /*0x57408*/
  v2 = a1; /*0x5740d*/
  v53 = a1; /*0x57410*/
  *(_DWORD *)(a1 + 672) = -1082130432; /*0x57415*/
  Buf2 = 0; /*0x57422*/
  v3 = 0; /*0x57427*/
  v57 = 0; /*0x57429*/
  v58 = 15; /*0x5742e*/
  LOBYTE(Buf2) = 0; /*0x57437*/
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 600) + 600LL) + 8LL))(*(_QWORD *)(a1 + 600) + 600LL); /*0x5744d*/
  *(_OWORD *)Buf1 = 0; /*0x57453*/
  v60 = 0; /*0x57458*/
  v61 = 0; /*0x57460*/
  v5 = -1; /*0x57468*/
  do /*0x57473*/
    ++v5; /*0x57470*/
  while ( *(_BYTE *)(v4 + v5) ); /*0x57473*/
  sub_3C230(Buf1); /*0x57482*/
  v6 = Buf1; /*0x57487*/
  v7 = (char *)Buf1[0]; /*0x5748c*/
  v8 = v61; /*0x57491*/
  if ( v61 > 0xF ) /*0x5749d*/
    v6 = (void **)Buf1[0]; /*0x5749d*/
  v9 = v60; /*0x574a1*/
  v10 = v60; /*0x574a9*/
  if ( v60 ) /*0x574af*/
    v10 = 0; /*0x574af*/
  v11 = memcmp(v6, &Buf2, v10); /*0x574bd*/
  if ( !v11 ) /*0x574c1*/
    v11 = v9 != 0; /*0x574c8*/
  if ( v8 > 0xF ) /*0x574d0*/
  {
    v12 = v7; /*0x574d6*/
    if ( v8 + 1 >= 0x1000 ) /*0x574e0*/
    {
      v7 = (char *)*((_QWORD *)v7 - 1); /*0x574e6*/
      if ( (unsigned __int64)(v12 - v7 - 8) > 0x1F ) /*0x574f5*/
        invoke_watson(0, 0, 0, 0, 0); /*0x57506*/
    }
    j_j_free(v7); /*0x57510*/
  }
  if ( !v11 ) /*0x57518*/
    goto LABEL_48; /*0x57518*/
  v13 = 0; /*0x5751e*/
  v52 = 0; /*0x57521*/
  v14 = 0; /*0x57525*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v54); /*0x5752d*/
  v15 = *(cocos2d::CCLabelBMFont **)(v2 + 624); /*0x57533*/
  if ( v15 ) /*0x57541*/
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v15 + 200LL))(*(_QWORD *)(v2 + 624)); /*0x57549*/
    cocos2d::CCPoint::operator=(v54, v16); /*0x57557*/
LABEL_31:
    v31 = *v55; /*0x57696*/
    v32 = *(__int64 (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v15 + 504LL); /*0x576aa*/
    v33 = (*(__int64 (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v15 + 200LL))(v15); /*0x576b6*/
    v34 = v32(v15); /*0x576bc*/
    cocos2d::CCNode::convertToWorldSpace(v34, &v53, v33); /*0x576c9*/
    v35 = *(float *)&v53; /*0x576cf*/
    v36 = 1.0; /*0x576d6*/
    v37 = (__int64)v15; /*0x576de*/
    do /*0x57703*/
    {
      v36 = v36 * (*(float (__fastcall **)(__int64))(*(_QWORD *)v37 + 128LL))(v37); /*0x576ed*/
      v37 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 504LL))(v37); /*0x576fd*/
    }
    while ( v37 ); /*0x57703*/
    v38 = 0; /*0x57705*/
    v39 = (cocos2d::CCArray *)(*(__int64 (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v15 + 480LL))(v15); /*0x57714*/
    v40 = 0; /*0x57717*/
    v41 = 0; /*0x57719*/
    if ( !cocos2d::CCArray::count(v39) ) /*0x5771e*/
      goto LABEL_48; /*0x5771e*/
    do /*0x57761*/
    {
      v42 = cocos2d::CCArray::objectAtIndex(v39, v41); /*0x57735*/
      v43 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v42 + 344LL))(v42); /*0x57748*/
      v44 = v40 + 1; /*0x5774a*/
      if ( !v43 ) /*0x5774f*/
        v44 = v40; /*0x5774f*/
      v40 = v44; /*0x57752*/
      ++v41; /*0x57754*/
    }
    while ( v41 < cocos2d::CCArray::count(v39) ); /*0x57761*/
    if ( v40 <= 0 ) /*0x57765*/
      goto LABEL_48; /*0x57765*/
    v45 = (float *)(*(__int64 (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v15 + 296LL))(v15); /*0x57777*/
    v46 = cocos2d::CCArray::objectAtIndex(v39, v40 - 1); /*0x57780*/
    v47 = v35 - (float)((float)(cocos2d::CCLabelBMFont::getLetterPosXRight(v15, v46, 0.0, 0) * v36) * *v45); /*0x577a1*/
    while ( 1 ) /*0x577bb*/
    {
      v48 = cocos2d::CCArray::objectAtIndex(v39, v3); /*0x577bb*/
      if ( (*(unsigned __int8 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v48 + 344LL))(v48) ) /*0x577cb*/
      {
        v49 = (float)(cocos2d::CCLabelBMFont::getLetterPosXRight(v15, v48, *(float *)(v2 + 476), *(_BYTE *)(v2 + 480)) /*0x577f8*/
                    * v36)
            + v47;
        if ( v49 >= v31 ) /*0x57801*/
        {
          if ( (float)(v31 /*0x57907*/
                     - (float)((float)(cocos2d::CCLabelBMFont::getLetterPosXLeft(
                                         v15,
                                         v48,
                                         *(float *)(v2 + 476),
                                         *(_BYTE *)(v2 + 480))
                                     * v36)
                             + v47)) > (float)(v49 - v31) )
            ++v3; /*0x57909*/
          if ( v3 < v40 ) /*0x5790d*/
          {
            v51 = v3 + v13; /*0x57916*/
            if ( *(int *)(v2 + 528) > 0 ) /*0x5791f*/
              v51 = sub_54640(v2, v51); /*0x5792b*/
            *(_DWORD *)(*(_QWORD *)(v2 + 600) + 760LL) = v51; /*0x57934*/
            goto LABEL_49; /*0x5793a*/
          }
LABEL_47:
          if ( v38 ) /*0x57862*/
            return; /*0x57862*/
LABEL_48:
          *(_DWORD *)(*(_QWORD *)(v2 + 600) + 760LL) = -1; /*0x57864*/
LABEL_49:
          CustomSFXWidget_init(v2, *(unsigned int *)(*(_QWORD *)(v2 + 600) + 760LL)); /*0x57875*/
          return; /*0x57885*/
        }
        if ( v3 == v40 - 1 && v52 > 1 ) /*0x57813*/
        {
          v50 = v3 + v13 + 1; /*0x57819*/
          if ( *(int *)(v2 + 528) > 0 ) /*0x57822*/
            v50 = sub_54640(v2, v50); /*0x5782e*/
          *(_DWORD *)(*(_QWORD *)(v2 + 600) + 760LL) = v50; /*0x57837*/
          CustomSFXWidget_init(v2, *(unsigned int *)(*(_QWORD *)(v2 + 600) + 760LL)); /*0x5784d*/
          v38 = 1; /*0x57852*/
        }
      }
      if ( ++v3 >= v40 ) /*0x57859*/
        goto LABEL_47; /*0x57859*/
    }
  }
  v17 = *(_QWORD *)(v2 + 640); /*0x57562*/
  if ( v17 ) /*0x5756c*/
  {
    v18 = *(cocos2d::CCArray **)(*(_QWORD *)(v17 + 616) + 648LL); /*0x57579*/
    if ( !cocos2d::CCArray::count(v18) ) /*0x5758b*/
      goto LABEL_48; /*0x5758b*/
    if ( cocos2d::CCArray::count(v18) == 1 ) /*0x575a0*/
    {
      v14 = cocos2d::CCArray::objectAtIndex(v18, 0); /*0x575aa*/
    }
    else
    {
      v19 = -1.0; /*0x575b2*/
      v20 = 0; /*0x575ba*/
      v52 = cocos2d::CCArray::count(v18); /*0x575c3*/
      v21 = 0; /*0x575c7*/
      if ( cocos2d::CCArray::count(v18) ) /*0x575cc*/
      {
        v22 = _mm_load_si128((const __m128i *)&xmmword_831640).m128i_u32[0]; /*0x575da*/
        v23 = v55; /*0x575e3*/
        do /*0x57634*/
        {
          v24 = cocos2d::CCArray::objectAtIndex(v18, v21); /*0x575fb*/
          v25 = v23[1]; /*0x575fe*/
          LODWORD(v26) = COERCE_UNSIGNED_INT(EditorUI_sliderChanged((__int64)v24).m128_f32[0] - v25) & v22; /*0x5760f*/
          if ( v19 > v26 || v19 < 0.0 ) /*0x5761c*/
          {
            v19 = v26; /*0x5761e*/
            v14 = v24; /*0x57621*/
            v20 = v21; /*0x57624*/
          }
          ++v21; /*0x57627*/
        }
        while ( v21 < cocos2d::CCArray::count(v18) ); /*0x57634*/
        v2 = v53; /*0x57639*/
        if ( v20 > 0 ) /*0x5763e*/
        {
          for ( i = 0; i < v20; ++i ) /*0x57640*/
          {
            v28 = cocos2d::CCArray::objectAtIndex(v18, i); /*0x57647*/
            v29 = (cocos2d::CCArray *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v28 + 480LL))(v28); /*0x5765a*/
            v13 += cocos2d::CCArray::count(v29); /*0x57665*/
          }
        }
      }
    }
    v15 = v14; /*0x5766f*/
    v30 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v14 + 200LL))(v14); /*0x57679*/
    cocos2d::CCPoint::operator=(v54, v30); /*0x57687*/
    if ( v14 ) /*0x57690*/
      goto LABEL_31; /*0x57690*/
  }
}

// [14/19] Address: 0x57a90
// Method: CCTextInputNode::ccTouchBegan
char __fastcall CCTextInputNode_ccTouchBegan(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 i; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // rcx
  float *v12; // rax
  _BYTE v13[40]; // [rsp+30h] [rbp-28h] BYREF
  char v14; // [rsp+60h] [rbp+8h] BYREF
  char v15; // [rsp+78h] [rbp+20h] BYREF

  v2 = a1 - 320; /*0x57aa2*/
  if ( (unsigned __int8)sub_57A20(a1 - 320) ) /*0x57ab2*/
  {
    cocos2d::CCTouch::getLocation(a2, &v14); /*0x57ac7*/
    if ( v2 ) /*0x57ad0*/
    {
      for ( i = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 504LL))(v2); /*0x57ae4*/
            i;
            i = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)i + 504LL))(i) )
      {
        v6 = _RTDynamicCast( /*0x57b08*/
               i,
               0,
               &cocos2d::CCNode `RTTI Type Descriptor',
               &cocos2d::CCTouchClipper `RTTI Type Descriptor',
               0);
        if ( v6 ) /*0x57b10*/
        {
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 8LL))(v6, &v14) ) /*0x57b21*/
            return 0; /*0x57b26*/
        }
      }
    }
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v15, (const struct cocos2d::CCPoint *)&v14); /*0x57b4a*/
    if ( (unsigned __int8)sub_57940(v2, v7) ) /*0x57b56*/
    {
      v9 = *(_QWORD *)(a1 + 344); /*0x57b5f*/
      if ( v9 ) /*0x57b69*/
      {
        sub_80640(v9, a2); /*0x57b6e*/
LABEL_10:
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v15, (const struct cocos2d::CCPoint *)&v14); /*0x57b73*/
        return 1; /*0x57b85*/
      }
      v11 = *(_QWORD *)(a1 + 288); /*0x57b87*/
      if ( !v11 || (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 40LL))(v11, v2) ) /*0x57b99*/
      {
        LOBYTE(v8) = 1; /*0x57ba3*/
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 1032LL))(v2, v8); /*0x57ba8*/
        cocos2d::CCRect::CCRect((cocos2d::CCRect *)v13, (const struct cocos2d::CCRect *)&unk_903B68); /*0x57bba*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v15, (const struct cocos2d::CCPoint *)&v14); /*0x57bca*/
        CCTextInputNode_updateCursorPosition(v2, v12); /*0x57bd6*/
        goto LABEL_10; /*0x57bdb*/
      }
    }
  }
  return 0; /*0x57bdf*/
}

// [15/19] Address: 0x57e70
// Method: CCTextInputNode::onExit
void __fastcall CCTextInputNode_onExit(__int64 a1)
{
  bool v1; // zf
  __int64 v3; // rdi

  v1 = *(_BYTE *)(a1 + 720) == 0; /*0x57e7a*/
  *(_BYTE *)(a1 + 721) = 0; /*0x57e84*/
  if ( !v1 ) /*0x57e8b*/
  {
    *(_BYTE *)(a1 + 720) = 0; /*0x57e94*/
    cocos2d::CCNode::unschedule(a1, sub_57F10); /*0x57e9b*/
  }
  cocos2d::CCNode::unschedule(a1, sub_57FD0); /*0x57eab*/
  v3 = *(_QWORD *)(a1 + 704); /*0x57eb1*/
  if ( v3 ) /*0x57ebb*/
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v3 + 336LL))(*(_QWORD *)(a1 + 704), 0); /*0x57ec5*/
    cocos2d::CCNode::unschedule(v3, sub_4CDF0); /*0x57ed5*/
    cocos2d::CCNode::scheduleOnce(v3, sub_4CDF0); /*0x57ee8*/
  }
  cocos2d::CCLayer::onExit((cocos2d::CCLayer *)a1); /*0x57efb*/
}

// [16/19] Address: 0x58010
// Method: CCTextInputNode::rightClick
char __fastcall CCTextInputNode_rightClick(__int64 a1, float a2, float a3)
{
  __int64 v3; // rdi
  __int64 i; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  struct cocos2d::CCTouchDelegate *v10; // rbx
  cocos2d::CCTouchDispatcher *v11; // rax
  __int64 v12; // rcx
  cocos2d::CCTouchHandler *Handler; // rsi
  __int64 v14; // rax
  int v15; // ebx
  __int64 v16; // rcx
  float *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  _BYTE v21[16]; // [rsp+30h] [rbp-48h] BYREF
  char v22; // [rsp+80h] [rbp+8h] BYREF
  char v23; // [rsp+98h] [rbp+20h] BYREF

  v3 = a1 - 352; /*0x58021*/
  if ( !(unsigned __int8)sub_57A20(a1 - 352) ) /*0x58039*/
    return 0; /*0x58039*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, a2, a3); /*0x58054*/
  if ( v3 ) /*0x5805f*/
  {
    for ( i = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 504LL))(v3); /*0x58073*/
          i;
          i = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)i + 504LL))(i) )
    {
      v6 = _RTDynamicCast( /*0x5808c*/
             i,
             0,
             &cocos2d::CCNode `RTTI Type Descriptor',
             &cocos2d::CCTouchClipper `RTTI Type Descriptor',
             0);
      if ( v6 ) /*0x58094*/
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 8LL))(v6, &v22) ) /*0x580a8*/
          return 0; /*0x580ad*/
      }
    }
  }
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v23, (const struct cocos2d::CCPoint *)&v22); /*0x580d7*/
  if ( !(unsigned __int8)sub_57940(v3, v7) ) /*0x580e3*/
    return 0; /*0x580e3*/
  v9 = cocos2d::CCDirector::sharedDirector(v8); /*0x580f0*/
  v10 = (struct cocos2d::CCTouchDelegate *)(v3 + 320); /*0x580f9*/
  if ( !v3 ) /*0x58100*/
    v10 = 0; /*0x58100*/
  v11 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 144LL))(v9); /*0x58111*/
  Handler = cocos2d::CCTouchDispatcher::findHandler(v11, v10); /*0x58120*/
  if ( Handler ) /*0x58126*/
  {
    v14 = cocos2d::CCDirector::sharedDirector(v12); /*0x58128*/
    v15 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 144LL))(v14) + 128); /*0x58140*/
    if ( cocos2d::CCTouchHandler::getPriority(Handler) > v15 ) /*0x5814e*/
      return 0; /*0x5814e*/
  }
  v16 = *(_QWORD *)(a1 + 256); /*0x58154*/
  if ( v16 ) /*0x5815e*/
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 40LL))(v16, v3) ) /*0x58166*/
      return 0; /*0x581d9*/
  }
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v21, (const struct cocos2d::CCRect *)&unk_903B68); /*0x58179*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v23, (const struct cocos2d::CCPoint *)&v22); /*0x5818f*/
  CCTextInputNode_updateCursorPosition(v3, v17); /*0x5819b*/
  if ( !*(_BYTE *)(a1 + 116) ) /*0x581a0*/
  {
    LOBYTE(v18) = 1; /*0x581a9*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 1032LL))(v3, v18); /*0x581ae*/
  }
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v23, (const struct cocos2d::CCPoint *)&v22); /*0x581c4*/
  sub_582F0(v3, v19); /*0x581d0*/
  return 1; /*0x581db*/
}

// [17/19] Address: 0x588d0
// Method: CCTextInputNode::registerWithTouchDispatcher
void __fastcall CCTextInputNode_registerWithTouchDispatcher(__int64 a1)
{
  __int64 v2; // rax
  struct cocos2d::CCTouchDelegate *v3; // rdi
  cocos2d::CCTouchDispatcher *v4; // rax

  v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x588dd*/
  v3 = (struct cocos2d::CCTouchDelegate *)(a1 + 320); /*0x588e5*/
  if ( !a1 ) /*0x588ef*/
    v3 = 0; /*0x588ef*/
  v4 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2); /*0x58900*/
  cocos2d::CCTouchDispatcher::addPrioTargetedDelegate(v4, v3, -500, 0); /*0x5891c*/
}

// [18/19] Address: 0x6eba0
// Method: CCTextInputNode::refreshLabel
// Hidden C++ exception states: #wind=2
__int64 __fastcall CCTextInputNode_refreshLabel(_QWORD *a1)
{
  __int64 v2; // r14
  __int64 v3; // r8
  cocos2d::CCArray *v4; // rsi
  void *v5; // rcx
  unsigned int v6; // edi
  cocos2d::CCString *v7; // rax
  const char *CString; // rax
  const char *v9; // rbx
  struct cocos2d::CCObject *v10; // rbp
  __int64 v11; // r8
  void *v12; // rcx
  void *Block[2]; // [rsp+30h] [rbp-68h] BYREF
  __m128i si128; // [rsp+40h] [rbp-58h]
  __int128 v16; // [rsp+50h] [rbp-48h] BYREF
  __int128 v17; // [rsp+60h] [rbp-38h]

  v2 = cocos2d::CCDictionary::create(); /*0x6ebcd*/
  if ( a1[3] > 0xFu ) /*0x6ebd5*/
    a1 = (_QWORD *)*a1; /*0x6ebd7*/
  *(_OWORD *)Block = 0; /*0x6ebdd*/
  si128 = 0; /*0x6ebe5*/
  v3 = -1; /*0x6ebeb*/
  do /*0x6ebf5*/
    ++v3; /*0x6ebf2*/
  while ( *((_BYTE *)a1 + v3) ); /*0x6ebf5*/
  sub_3C230(Block); /*0x6ec04*/
  v4 = (cocos2d::CCArray *)sub_6B0D0(Block); /*0x6ec14*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x6ec20*/
  {
    v5 = Block[0]; /*0x6ec25*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x6ec34*/
    {
      v5 = (void *)*((_QWORD *)Block[0] - 1); /*0x6ec3a*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v5 - 8) > 0x1F ) /*0x6ec49*/
        invoke_watson(0, 0, 0, 0, 0); /*0x6ec5e*/
    }
    j_j_free(v5); /*0x6ec65*/
  }
  si128 = _mm_load_si128((const __m128i *)&Size); /*0x6ec72*/
  LOBYTE(Block[0]) = 0; /*0x6ec78*/
  v6 = 0; /*0x6ec7d*/
  if ( !cocos2d::CCArray::count(v4) ) /*0x6ec82*/
    return v2; /*0x6ed6b*/
  while ( cocos2d::CCArray::count(v4) >= v6 + 2 ) /*0x6ec9e*/
  {
    v7 = cocos2d::CCArray::objectAtIndex(v4, v6); /*0x6eca9*/
    CString = cocos2d::CCString::getCString(v7); /*0x6ecb2*/
    v9 = CString; /*0x6ecb8*/
    if ( CString ) /*0x6ecbe*/
    {
      if ( *CString ) /*0x6ecc4*/
      {
        v10 = cocos2d::CCArray::objectAtIndex(v4, v6 + 1); /*0x6ecd9*/
        v16 = 0; /*0x6ecdf*/
        v17 = 0; /*0x6ece7*/
        v11 = -1; /*0x6eced*/
        do /*0x6ecf7*/
          ++v11; /*0x6ecf4*/
        while ( v9[v11] ); /*0x6ecf7*/
        sub_3C230(&v16); /*0x6ed06*/
        cocos2d::CCDictionary::setObject(v2, v10, &v16); /*0x6ed17*/
        if ( *((_QWORD *)&v17 + 1) > 0xFu ) /*0x6ed27*/
        {
          v12 = (void *)v16; /*0x6ed2c*/
          if ( (unsigned __int64)(*((_QWORD *)&v17 + 1) + 1LL) >= 0x1000 ) /*0x6ed3b*/
          {
            v12 = *(void **)(v16 - 8); /*0x6ed41*/
            if ( (unsigned __int64)(v16 - (_QWORD)v12 - 8) > 0x1F ) /*0x6ed50*/
              invoke_watson(0, 0, 0, 0, 0); /*0x6eda6*/
          }
          j_j_free(v12); /*0x6ed52*/
        }
      }
    }
    v6 += 2; /*0x6ed57*/
    if ( v6 >= cocos2d::CCArray::count(v4) ) /*0x6ed65*/
      return v2; /*0x6ed65*/
  }
  return 0; /*0x6ed6e*/
}

// [19/19] Address: 0x481840
// Method: CCTextInputNode::addTextArea
struct cocos2d::CCObject *__fastcall CCTextInputNode_addTextArea(__int64 a1)
{
  cocos2d::CCObject *v2; // rax
  struct cocos2d::CCObject *v3; // rax
  int v4; // ebx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]
  __int64 v8; // [rsp+38h] [rbp-10h]

  if ( !*(_QWORD *)(a1 + 920) ) /*0x481846*/
  {
    v2 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x481857*/
    *(_QWORD *)(a1 + 920) = v2; /*0x481860*/
    cocos2d::CCObject::retain(v2); /*0x481867*/
    v7 = 6; /*0x48187b*/
    v6 = 0; /*0x481884*/
    strcpy((char *)&v6, "Custom"); /*0x481889*/
    v8 = 15; /*0x4818a1*/
    v3 = (struct cocos2d::CCObject *)sub_4936B0(1, &v6, 0); /*0x4818af*/
    *((_DWORD *)v3 + 19) = 1; /*0x4818bd*/
    cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(a1 + 920), v3, 1); /*0x4818cb*/
    if ( *(int *)(a1 + 928) <= 2 ) /*0x4818d8*/
    {
      v4 = rand() << 15; /*0x4818e7*/
      *(_DWORD *)(a1 + 928) = (v4 | rand()) % 7900000 + 100000; /*0x481920*/
    }
  }
  return cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 920), 1); /*0x481933*/
}
