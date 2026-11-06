#include <Geode/binding/MoreOptionsLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x6efe0
// Method: MoreOptionsLayer::onClose
// Hidden C++ exception states: #wind=1
void __fastcall MoreOptionsLayer_onClose(void **a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rcx
  _BYTE *v4; // rax
  unsigned __int64 v5; // r8
  unsigned __int8 v6; // r9
  unsigned __int64 v7; // rsi
  __int64 v8; // rdx
  _BYTE *v9; // rax
  _BYTE *v10; // rax
  void *v11; // rax
  size_t v12; // rax
  size_t v13; // r8
  _BYTE *v14; // rax
  __int128 v15; // xmm2
  __m128i v16; // xmm3
  void *v17; // rcx
  void *Block[2]; // [rsp+30h] [rbp-38h] BYREF
  __m128i si128; // [rsp+40h] [rbp-28h]

  *(_OWORD *)Block = 0; /*0x6f004*/
  si128 = _mm_load_si128((const __m128i *)&Size); /*0x6f011*/
  LOBYTE(Block[0]) = 0; /*0x6f017*/
  sub_58940(Block); /*0x6f025*/
  v2 = 0; /*0x6f02a*/
  v3 = (unsigned __int64)a1[2]; /*0x6f02c*/
  if ( v3 ) /*0x6f033*/
  {
    do /*0x6f040*/
    {
      v4 = a1; /*0x6f040*/
      v5 = (unsigned __int64)a1[3]; /*0x6f043*/
      if ( v5 > 0xF ) /*0x6f04b*/
        v4 = *a1; /*0x6f04d*/
      v6 = v4[v2]; /*0x6f050*/
      v7 = 1; /*0x6f055*/
      if ( (v6 & 0xE0) == 0xC0 ) /*0x6f062*/
      {
        v7 = 2; /*0x6f064*/
      }
      else if ( (v6 & 0xF0) == 0xE0 ) /*0x6f082*/
      {
        v7 = 3; /*0x6f084*/
      }
      else if ( (v6 & 0xF8) == 0xF0 ) /*0x6f093*/
      {
        v7 = 4; /*0x6f095*/
      }
      else if ( v6 >= 0x80u ) /*0x6f0a0*/
      {
        goto LABEL_13; /*0x6f0a0*/
      }
      if ( v7 + v2 <= v3 ) /*0x6f070*/
      {
        v8 = 1; /*0x6f0aa*/
        if ( v7 <= 1 ) /*0x6f0b2*/
        {
LABEL_19:
          if ( v7 != 2 || v6 != 0xC2 ) /*0x6f0e1*/
            goto LABEL_24; /*0x6f0e1*/
          v10 = a1; /*0x6f0e3*/
          if ( v5 > 0xF ) /*0x6f0ea*/
            v10 = *a1; /*0x6f0ec*/
          if ( v10[v2 + 1] != 0xA0 ) /*0x6f0f4*/
          {
LABEL_24:
            v11 = a1[2]; /*0x6f0f6*/
            if ( (unsigned __int64)v11 < v2 ) /*0x6f0fd*/
              sub_3E4D0(v3, v8); /*0x6f1da*/
            v12 = (size_t)v11 - v2; /*0x6f103*/
            v13 = v7; /*0x6f106*/
            if ( v12 < v7 ) /*0x6f10c*/
              v13 = v12; /*0x6f10c*/
            v14 = a1; /*0x6f110*/
            if ( (unsigned __int64)a1[3] > 0xF ) /*0x6f118*/
              v14 = *a1; /*0x6f11a*/
            sub_43D80(Block, &v14[v2], v13); /*0x6f126*/
          }
          v2 += v7; /*0x6f12b*/
          goto LABEL_31; /*0x6f12b*/
        }
        while ( 1 ) /*0x6f0b4*/
        {
          v9 = a1; /*0x6f0b4*/
          if ( v5 > 0xF ) /*0x6f0bb*/
            v9 = *a1; /*0x6f0bd*/
          v3 = (unsigned __int8)v9[v8 + v2]; /*0x6f0c3*/
          LOBYTE(v3) = v3 & 0xC0; /*0x6f0c7*/
          if ( (_BYTE)v3 != 0x80 ) /*0x6f0ca*/
            break; /*0x6f0ca*/
          if ( ++v8 >= v7 ) /*0x6f0d5*/
            goto LABEL_19; /*0x6f0d5*/
        }
LABEL_13:
        ++v2; /*0x6f0a2*/
        goto LABEL_31; /*0x6f0a5*/
      }
      ++v2; /*0x6f072*/
LABEL_31:
      v3 = (unsigned __int64)a1[2]; /*0x6f12e*/
    }
    while ( v2 < v3 ); /*0x6f040*/
  }
  if ( a1 != Block ) /*0x6f143*/
  {
    v15 = *(_OWORD *)a1; /*0x6f145*/
    v16 = *((__m128i *)a1 + 1); /*0x6f148*/
    *(_OWORD *)a1 = *(_OWORD *)Block; /*0x6f151*/
    *((__m128i *)a1 + 1) = si128; /*0x6f159*/
    *(_OWORD *)Block = v15; /*0x6f15d*/
    si128 = v16; /*0x6f162*/
  }
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x6f170*/
  {
    v17 = Block[0]; /*0x6f175*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x6f184*/
    {
      v17 = (void *)*((_QWORD *)Block[0] - 1); /*0x6f18a*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v17 - 8) > 0x1F ) /*0x6f199*/
        invoke_watson(0, 0, 0, 0, 0); /*0x6f1ae*/
    }
    j_j_free(v17); /*0x6f1b5*/
  }
}

// Address: 0x10f270
// Method: MoreOptionsLayer::init
__int64 MoreOptionsLayer_init(__int64 a1, const char *a2, int a3, float a4, float a5, const char *a6, ...)
{
  cocos2d::CCDrawNode *v7; // rcx
  float v10; // xmm10_4
  struct cocos2d::CCLabelBMFont *v11; // rdi
  void (__fastcall **v12)(__int64, __int16 *); // rdx
  __int64 v13; // rbx
  __int64 v14; // rax
  float v15; // xmm6_4
  double v16; // xmm0_8
  float v17; // xmm9_4
  struct cocos2d::CCSprite *v18; // rsi
  void (__fastcall **v19)(__int64, __int16 *); // rax
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rax
  struct cocos2d::CCSprite *v23; // rdi
  void (__fastcall **v24)(__int64, __int16 *); // rax
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // rax
  double v28; // xmm0_8
  float v29; // xmm6_4
  double v30; // xmm0_8
  __int64 v31; // rax
  double v32; // xmm0_8
  float v33; // xmm6_4
  __int64 v34; // rax
  struct cocos2d::CCLabelBMFont *v35; // rdi
  __int64 v36; // rbx
  __int64 v37; // rax
  void (__fastcall **v38)(__int64, __int16 *); // rax
  __int64 v39; // rbx
  __int64 v40; // rax
  float v41; // xmm8_4
  cocos2d::CCDrawNode *v42; // rdi
  float v43; // xmm6_4
  const struct cocos2d::CCPoint *v44; // rax
  const struct cocos2d::CCPoint *v45; // rbx
  const struct cocos2d::CCPoint *v46; // rax
  __int64 result; // rax
  int v48; // esi
  unsigned __int64 v49; // rcx
  int v50; // r14d
  float v51; // xmm7_4
  cocos2d::CCDrawNode *v52; // rdi
  const struct cocos2d::CCPoint *v53; // rax
  const struct cocos2d::CCPoint *v54; // rbx
  const struct cocos2d::CCPoint *v55; // rax
  cocos2d::CCString *v56; // rax
  float i; // xmm6_4
  cocos2d::CCDrawNode *v58; // rdi
  const struct cocos2d::CCPoint *v59; // rax
  const struct cocos2d::CCPoint *v60; // rbx
  const struct cocos2d::CCPoint *v61; // rax
  int v62; // ecx
  const char *CString; // rax
  struct cocos2d::CCLabelBMFont *v64; // rdi
  __int64 v65; // rbx
  __int64 v66; // rax
  void (__fastcall **v67)(__int64, __int16 *); // rax
  __int64 v68; // rbx
  __int64 v69; // rax
  __int16 v70; // [rsp+30h] [rbp-D0h] BYREF
  char v71; // [rsp+32h] [rbp-CEh]
  _BYTE v72[8]; // [rsp+34h] [rbp-CCh] BYREF
  float v73; // [rsp+3Ch] [rbp-C4h]
  float v74; // [rsp+40h] [rbp-C0h]
  _BYTE v75[8]; // [rsp+44h] [rbp-BCh] BYREF
  _BYTE v76[16]; // [rsp+4Ch] [rbp-B4h] BYREF
  _BYTE v77[8]; // [rsp+5Ch] [rbp-A4h] BYREF
  _BYTE v78[8]; // [rsp+64h] [rbp-9Ch] BYREF
  _BYTE v79[12]; // [rsp+6Ch] [rbp-94h] BYREF
  __m128i v80; // [rsp+78h] [rbp-88h] BYREF
  __m128i si128; // [rsp+88h] [rbp-78h] BYREF

  v7 = *(cocos2d::CCDrawNode **)(a1 + 336);
  v73 = a4;
  v74 = a5;
  cocos2d::CCDrawNode::clear(v7);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 344) + 568LL))(*(_QWORD *)(a1 + 344));
  v10 = (float)((float)(*(float *)(a1 + 320) - 22.0) * 0.5) + 22.0;
  v11 = cocos2d::CCLabelBMFont::create(a6, (const char *)&qword_6FFF68);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v11 + 160LL))(v11);
  v70 = -14081;
  v12 = (void (__fastcall **)(__int64, __int16 *))*((_QWORD *)v11 + 46);
  v71 = 120;
  (*v12)((__int64)v11 + 368, &v70);
  v13 = *(_QWORD *)v11;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v72, v10, 12.0);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v13 + 184))(v11, v14);
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 344) + 464LL))(
    *(_QWORD *)(a1 + 344),
    v11);
  v15 = *(float *)(*(__int64 (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v11 + 320LL))(v11);
  v16 = (*(double (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v11 + 168LL))(v11);
  v17 = (float)(*(float *)&v16 * v15) * 0.5;
  v18 = cocos2d::CCSprite::createWithSpriteFrameName("edit_leftBtn_001.png");
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v18 + 120LL))(v18);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v18 + 136LL))(v18);
  v19 = (void (__fastcall **)(__int64, __int16 *))*((_QWORD *)v18 + 40);
  v70 = -14081;
  v71 = 120;
  (*v19)((__int64)v18 + 320, &v70);
  LOBYTE(v20) = 100;
  (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v18 + 40) + 40LL))((__int64)v18 + 320, v20);
  v21 = *(_QWORD *)v18;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v72, (float)(v10 - v17) - 16.0, 12.0);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v21 + 184))(v18, v22);
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *))(**(_QWORD **)(a1 + 344) + 464LL))(
    *(_QWORD *)(a1 + 344),
    v18);
  v23 = cocos2d::CCSprite::createWithSpriteFrameName("edit_rightBtn_001.png");
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v23 + 120LL))(v23);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v23 + 136LL))(v23);
  v24 = (void (__fastcall **)(__int64, __int16 *))*((_QWORD *)v23 + 40);
  v70 = -14081;
  v71 = 120;
  (*v24)((__int64)v23 + 320, &v70);
  LOBYTE(v25) = 100;
  (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v23 + 40) + 40LL))((__int64)v23 + 320, v25);
  v26 = *(_QWORD *)v23;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v72, (float)(v10 + v17) + 16.0, 12.0);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v26 + 184))(v23, v27);
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *))(**(_QWORD **)(a1 + 344) + 464LL))(
    *(_QWORD *)(a1 + 344),
    v23);
  v28 = (*(double (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v18 + 232LL))(v18);
  v29 = *(float *)&v28 - 10.0;
  v30 = (*(double (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v18 + 216LL))(v18);
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v76, *(float *)&v30 - 10.0, v29, 20.0, 20.0);
  cocos2d::CCRect::operator=(a1 + 356, v31);
  v32 = (*(double (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v23 + 232LL))(v23);
  v33 = *(float *)&v32 - 10.0;
  *(float *)&v32 = (*(float (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v23 + 216LL))(v23);
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v76, *(float *)&v32 - 10.0, v33, 20.0, 20.0);
  cocos2d::CCRect::operator=(a1 + 372, v34);
  v35 = cocos2d::CCLabelBMFont::create(a2, (const char *)&qword_6FFF68);
  v36 = *(_QWORD *)v35;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v72, 0.0, 0.5);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v36 + 288))(v35, v37);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v35 + 160LL))(v35);
  v70 = -14081;
  v38 = (void (__fastcall **)(__int64, __int16 *))*((_QWORD *)v35 + 46);
  v71 = 120;
  (*v38)((__int64)v35 + 368, &v70);
  v39 = *(_QWORD *)v35;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v72, 12.0, (float)(a5 + a4) + 19.0);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v39 + 184))(v35, v40);
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 344) + 464LL))(
    *(_QWORD *)(a1 + 344),
    v35);
  v41 = *(float *)(a1 + 320) - 4.0;
  v42 = *(cocos2d::CCDrawNode **)(a1 + 336);
  si128 = _mm_load_si128((const __m128i *)&xmmword_8312D0);
  v80 = _mm_load_si128((const __m128i *)&xmmword_8312F0);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v72, 22.0, (float)(a5 + a4) + 6.0);
  v43 = v73;
  v45 = v44;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v75, 22.0, v73);
  cocos2d::CCDrawNode::drawSegment(v42, v46, v45, 0.5, (const struct cocos2d::_ccColor4F *)&v80);
  result = (unsigned int)(a3 / 4);
  if ( (int)result < 1 )
    result = 1;
  v48 = 0;
  v49 = 0;
  while ( 1 )
  {
    v50 = *(_DWORD *)((char *)&unk_72A7F8 + v49);
    if ( v50 >= (int)result )
      break;
    v49 += 4LL;
    if ( v49 >= 0x34 )
    {
      v50 = 10000;
      break;
    }
  }
  if ( a3 >= 0 )
  {
    do
    {
      v51 = (float)((float)((float)v48 / (float)a3) * v74) + v43;
      if ( v48 )
      {
        for ( i = 25.0; v41 > i; i = i + 5.0 )
        {
          v58 = *(cocos2d::CCDrawNode **)(a1 + 336);
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v77, fminf(i + 2.0, v41), v51);
          v60 = v59;
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v78, i, v51);
          cocos2d::CCDrawNode::drawSegment(v58, v61, v60, 0.5, (const struct cocos2d::_ccColor4F *)&si128);
        }
        if ( v48 >= 1000 )
        {
          v62 = v48 / 1000;
          if ( v48 == 1000 * (v48 / 1000) )
            v56 = cocos2d::CCString::createWithFormat("%ik", v62);
          else
            v56 = cocos2d::CCString::createWithFormat("%i.%ik", v62, v48 % 1000 / 100);
        }
        else
        {
          v56 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, (unsigned int)v48);
        }
      }
      else
      {
        v52 = *(cocos2d::CCDrawNode **)(a1 + 336);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v75, v41, v51);
        v54 = v53;
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v72, 22.0, v51);
        cocos2d::CCDrawNode::drawSegment(v52, v55, v54, 0.5, (const struct cocos2d::_ccColor4F *)&v80);
        v56 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, 0);
      }
      CString = cocos2d::CCString::getCString(v56);
      v64 = cocos2d::CCLabelBMFont::create(CString, "chatFont.fnt");
      v65 = *(_QWORD *)v64;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v79, 1.0, 0.5);
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v65 + 288))(v64, v66);
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v64 + 160LL))(v64);
      v70 = -14081;
      v67 = (void (__fastcall **)(__int64, __int16 *))*((_QWORD *)v64 + 46);
      v71 = 120;
      (*v67)((__int64)v64 + 368, &v70);
      v68 = *(_QWORD *)v64;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v76, 18.0, v51);
      (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v68 + 184))(v64, v69);
      result = (*(__int64 (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *))(**(_QWORD **)(a1 + 344) + 464LL))(
                 *(_QWORD *)(a1 + 344),
                 v64);
      v43 = v73;
      v48 += v50;
    }
    while ( v48 <= a3 );
  }
  return result;
}
