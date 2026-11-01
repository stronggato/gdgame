#include <Geode/binding/EditButtonBar.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x10fa30
// Method: EditButtonBar::loadFromItems
// Hidden C++ exception states: #wind=2
__int64 __fastcall EditButtonBar_loadFromItems(__int64 a1, _QWORD *a2, int a3, char a4, char a5, char a6)
{
  _QWORD *v7; // rdi
  __int64 v9; // rax
  __int64 v10; // r12
  unsigned __int64 v11; // r9
  int v12; // esi
  _QWORD *v13; // r15
  int *v14; // r8
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __m128i si128; // xmm1
  __m128i v18; // xmm2
  __m128i v19; // xmm1
  __m128i v20; // xmm1
  int v21; // eax
  float v22; // xmm10_4
  const char *v23; // rdx
  __int64 v24; // rdx
  int v25; // r8d
  int v26; // r9d
  int v27; // ebp
  __int64 v28; // r14
  int v29; // ebx
  float v30; // xmm6_4
  float v31; // xmm7_4
  char v32; // al
  __int16 v33; // cx
  __int64 v34; // rax
  cocos2d::CCString *v35; // rax
  const char *CString; // rax
  struct cocos2d::CCLabelBMFont *v37; // rdi
  void (__fastcall *v38)(struct cocos2d::CCLabelBMFont *, __int64); // rbx
  __int64 v39; // rax
  __int64 v40; // rbx
  float *v41; // rcx
  int v42; // ebx
  __int64 v43; // rcx
  bool GameVariable; // al
  int v45; // esi
  int v46; // edx
  int v47; // ebx
  int v48; // ebp
  int v49; // ecx
  __int64 v50; // r9
  int *v51; // r8
  __int64 v52; // r10
  int v53; // eax
  int v54; // eax
  float v55; // xmm2_4
  __int64 v56; // rcx
  __int16 v58; // [rsp+34h] [rbp-114h] BYREF
  char v59; // [rsp+36h] [rbp-112h]
  _BYTE v60[4]; // [rsp+38h] [rbp-110h] BYREF
  int v61; // [rsp+3Ch] [rbp-10Ch]
  _BYTE v62[8]; // [rsp+40h] [rbp-108h] BYREF
  __int128 v63; // [rsp+48h] [rbp-100h] BYREF
  __int64 v64; // [rsp+58h] [rbp-F0h]
  void *v65; // [rsp+150h] [rbp+8h] BYREF
  _QWORD *v66; // [rsp+158h] [rbp+10h]
  int v67; // [rsp+160h] [rbp+18h]
  __int16 v68; // [rsp+168h] [rbp+20h]

  v67 = a3; /*0x10fa33*/
  v66 = a2; /*0x10fa37*/
  v7 = a2; /*0x10fa93*/
  *(_DWORD *)(a1 + 352) = a3; /*0x10fa99*/
  v9 = *(_QWORD *)(a1 + 328); /*0x10faa0*/
  v61 = *(_DWORD *)(v9 + 436); /*0x10faaf*/
  v10 = *(_QWORD *)(v9 + 416); /*0x10fab5*/
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 568LL))(v10); /*0x10fac3*/
  v12 = 1; /*0x10fac9*/
  v13 = v7 + 1; /*0x10face*/
  if ( a4 ) /*0x10fad4*/
  {
    v12 = 100; /*0x10fad6*/
  }
  else
  {
    v14 = (int *)*v7; /*0x10fae0*/
    v15 = (__int64)(*v13 - *v7) >> 2; /*0x10fae9*/
    v16 = 0; /*0x10faed*/
    if ( v15 ) /*0x10faf2*/
    {
      if ( v15 >= 8 && dword_8F8018 >= 2 ) /*0x10fb05*/
      {
        v11 = v15 - (((__int64)(*v13 - *v7) >> 2) & 7); /*0x10fb10*/
        si128 = _mm_load_si128((const __m128i *)&xmmword_831110); /*0x10fb13*/
        v18 = si128; /*0x10fb1b*/
        do /*0x10fb3e*/
        {
          si128 = _mm_max_epi32(si128, _mm_loadu_si128((const __m128i *)&v14[v16])); /*0x10fb26*/
          v18 = _mm_max_epi32(v18, _mm_loadu_si128((const __m128i *)&v14[v16 + 4])); /*0x10fb32*/
          v16 += 8LL; /*0x10fb37*/
        }
        while ( v16 < v11 ); /*0x10fb3e*/
        v19 = _mm_max_epi32(si128, v18); /*0x10fb40*/
        v20 = _mm_max_epi32(v19, _mm_srli_si128(v19, 8)); /*0x10fb4e*/
        v12 = _mm_cvtsi128_si32(_mm_max_epi32(v20, _mm_srli_si128(v20, 4))); /*0x10fb61*/
      }
      for ( ; v16 < v15; ++v16 ) /*0x10fb68*/
      {
        v21 = v12; /*0x10fb70*/
        v12 = v14[v16]; /*0x10fb72*/
        if ( v12 <= v21 ) /*0x10fb78*/
          v12 = v21; /*0x10fb78*/
      }
    }
  }
  v22 = fmaxf(10.0, (float)(*(float *)(a1 + 324) - 32.0) - 36.0); /*0x10fba9*/
  v23 = "DEATHS"; /*0x10fbb5*/
  if ( a4 ) /*0x10fbbe*/
    v23 = "RATE %"; /*0x10fbbe*/
  MoreOptionsLayer_init(a1, (_DWORD)v23, v12, v11, LODWORD(v22), "PROGRESS (%)"); /*0x10fbdb*/
  v63 = 0; /*0x10fbe3*/
  v64 = 0; /*0x10fbe9*/
  v27 = 0; /*0x10fbf2*/
  v28 = 0; /*0x10fbf4*/
  do /*0x10fdea*/
  {
    if ( v27 >= (int)((__int64)(*v13 - *v7) >> 2) ) /*0x10fc4f*/
      break; /*0x10fc4f*/
    v29 = *(_DWORD *)(*v7 + v28); /*0x10fc55*/
    v30 = (float)((float)((float)v27 * 18.0) + 3.0) + 9.0; /*0x10fc6a*/
    if ( v29 > 0 ) /*0x10fc71*/
    {
      v31 = fmaxf(3.0, (float)((float)((float)v29 / (float)v12) * v22) - 4.0); /*0x10fcad*/
      if ( v27 == 100 ) /*0x10fcb4*/
      {
        v68 = -5351; /*0x10fcb6*/
        v32 = 45; /*0x10fcc0*/
        v33 = -5351; /*0x10fcc2*/
      }
      else
      {
        v34 = sub_10E440(v60); /*0x10fcd1*/
        v33 = *(_WORD *)v34; /*0x10fcd6*/
        v32 = *(_BYTE *)(v34 + 2); /*0x10fcd9*/
      }
      LOWORD(v65) = v33; /*0x10fcdd*/
      BYTE2(v65) = v32; /*0x10fce5*/
      sub_10E510(v10, v24, v25, v26, LODWORD(v31), (__int64)&v65); /*0x10fd0d*/
      MenuGameLayer_resetPlayer((__int64)&v63, v10, v29, v30, (float)(v31 + 35.0) + 8.0); /*0x10fd30*/
      v35 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, (unsigned int)v27); /*0x10fd3e*/
      CString = cocos2d::CCString::getCString(v35); /*0x10fd47*/
      v37 = cocos2d::CCLabelBMFont::create(CString, "chatFont.fnt"); /*0x10fd5d*/
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v37 + 160LL))(v37); /*0x10fd75*/
      v58 = -14081; /*0x10fd83*/
      v59 = 120; /*0x10fd88*/
      (**((void (__fastcall ***)(__int64, __int16 *))v37 + 46))((__int64)v37 + 368, &v58); /*0x10fd9f*/
      v38 = *(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(*(_QWORD *)v37 + 184LL); /*0x10fda4*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v62, v30, 25.0); /*0x10fdbb*/
      v38(v37, v39); /*0x10fdc7*/
      (*(void (__fastcall **)(__int64, struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v10 + 464LL))(v10, v37); /*0x10fdd3*/
      v7 = v66; /*0x10fdd9*/
    }
    else
    {
      sub_10E8B0(v10, v24, (unsigned int)v27); /*0x10fc80*/
    }
    ++v27; /*0x10fde1*/
    v28 += 4; /*0x10fde3*/
  }
  while ( v27 <= 100 ); /*0x10fdea*/
  v40 = *(_QWORD *)(a1 + 328); /*0x10fdf0*/
  *(_DWORD *)(v40 + 432) = 1155850240; /*0x10fdf7*/
  sub_7FF60(v40); /*0x10fe04*/
  sub_801A0(); /*0x10fe09*/
  sub_7FFD0(v40); /*0x10fe11*/
  if ( a5 ) /*0x10fe1e*/
  {
    v41 = *(float **)(a1 + 328); /*0x10fe20*/
    *((_DWORD *)v41 + 109) = v61; /*0x10fe2d*/
    v41[119] = 0.0; /*0x10fe37*/
  }
  else if ( a6 && (v42 = v67, v67 > 0) ) /*0x10fe55*/
  {
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v65, (const struct cocos2d::CCSize *)(*(_QWORD *)(a1 + 328) + 424LL)); /*0x10fe6d*/
    v41 = *(float **)(a1 + 328); /*0x10fe73*/
    v41[109] = (float)((float)((float)((float)v42 + 0.5) * 18.0) + 3.0) - (float)(*(float *)&v65 * 0.5); /*0x10fea8*/
    v41[119] = 0.0; /*0x10feb2*/
  }
  else
  {
    v43 = qword_905FD0; /*0x10febd*/
    if ( !qword_905FD0 ) /*0x10fec7*/
    {
      v65 = operator new(0x6E8u); /*0x10fed3*/
      qword_905FD0 = sub_2723A0(v65); /*0x10fee4*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x10fef5*/
      v43 = qword_905FD0; /*0x10fef7*/
    }
    GameVariable = GameManager_getGameVariable(v43, "0199"); /*0x10ff05*/
    v41 = *(float **)(a1 + 328); /*0x10ff0a*/
    if ( GameVariable ) /*0x10ff13*/
    {
      v41[109] = 0.0; /*0x10ff17*/
      v41[119] = 0.0; /*0x10ff1d*/
    }
    else
    {
      cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v65, (const struct cocos2d::CCSize *)(v41 + 106)); /*0x10ff37*/
      v45 = (int)(float)(*(float *)&v65 / 18.0); /*0x10ff4e*/
      if ( v45 < 1 ) /*0x10ff5a*/
        v45 = 1; /*0x10ff5a*/
      v46 = 0; /*0x10ff5d*/
      v47 = -1; /*0x10ff5f*/
      v48 = 0; /*0x10ff64*/
      v49 = 0; /*0x10ff66*/
      v50 = 0; /*0x10ff68*/
      v51 = (int *)*v7; /*0x10ff6e*/
      v52 = (__int64)(*v13 - *v7) >> 2; /*0x10ff77*/
      do /*0x10ffd4*/
      {
        if ( v49 >= (int)v52 ) /*0x10ff93*/
          v53 = 0; /*0x10ff9a*/
        else
          v53 = *v51; /*0x10ff95*/
        v46 += v53; /*0x10ff9c*/
        if ( v50 >= (unsigned __int64)(unsigned int)v45 ) /*0x10ffa1*/
        {
          if ( v49 - v45 >= (int)v52 ) /*0x10ffaa*/
            v54 = 0; /*0x10ffb2*/
          else
            v54 = v51[-v45]; /*0x10ffac*/
          v46 -= v54; /*0x10ffb4*/
        }
        if ( v49 >= v45 - 1 && v46 > v47 ) /*0x10ffbd*/
        {
          v47 = v46; /*0x10ffbf*/
          v48 = v49 + 1 - v45; /*0x10ffc5*/
        }
        ++v49; /*0x10ffc7*/
        ++v50; /*0x10ffc9*/
        ++v51; /*0x10ffcc*/
      }
      while ( v50 <= 100 ); /*0x10ffd4*/
      v55 = 0.0; /*0x10ffd6*/
      if ( v47 > 0 ) /*0x10ffdb*/
        v55 = (float)((float)((float)((float)((float)v45 * 0.5) + (float)v48) * 18.0) + 3.0) /*0x110009*/
            - (float)(*(float *)&v65 * 0.5);
      v41 = *(float **)(a1 + 328); /*0x11000d*/
      v41[109] = v55; /*0x110014*/
      v41[119] = 0.0; /*0x11001c*/
    }
  }
  sub_7FF60(v41); /*0x110026*/
  sub_7FFD0(v56); /*0x11002b*/
  return sub_58B70(&v63); /*0x11003b*/
}

// [2/3] Address: 0x174960
// Method: EditButtonBar::~EditButtonBar
// Hidden C++ exception states: #wind=1
cocos2d::CCNode *__fastcall EditButtonBar__dtor_EditButtonBar(cocos2d::CCNode *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx
  cocos2d::CCObject *v5; // rcx

  *(_QWORD *)Block = &EditButtonBar::`vftable'; /*0x174976*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 44); /*0x174979*/
  if ( v4 ) /*0x174983*/
    cocos2d::CCObject::release(v4); /*0x174985*/
  v5 = (cocos2d::CCObject *)*((_QWORD *)Block + 42); /*0x17498b*/
  if ( v5 ) /*0x174995*/
    cocos2d::CCObject::release(v5); /*0x174997*/
  cocos2d::CCNode::~CCNode(Block); /*0x1749a0*/
  if ( (a2 & 1) != 0 ) /*0x1749ab*/
    j_j_free(Block); /*0x1749b5*/
  return Block; /*0x1749bd*/
}

// [3/3] Address: 0x175570
// Method: EditButtonBar::goToPage
__int64 __fastcall EditButtonBar_goToPage(__int64 a1, int a2)
{
  __int64 v4; // rcx
  cocos2d::CCArray *v5; // rcx

  v4 = *(_QWORD *)(a1 + 344); /*0x17557f*/
  if ( *(_BYTE *)(v4 + 456) ) /*0x175586*/
    v5 = *(cocos2d::CCArray **)(v4 + 448); /*0x17558f*/
  else
    v5 = *(cocos2d::CCArray **)(v4 + 480); /*0x175598*/
  cocos2d::CCArray::count(v5); /*0x17559f*/
  BoomScrollLayer_instantMoveToPage(*(_QWORD *)(a1 + 344), a2 - 1); /*0x1755af*/
  BoomScrollLayer_instantMoveToPage(*(_QWORD *)(a1 + 344), a2); /*0x1755bd*/
  return sub_175710(a1); /*0x1755c5*/
}
