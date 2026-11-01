#include <Geode/binding/OBB2D.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x7a140
// Method: OBB2D::create
// Hidden C++ exception states: #wind=2
char *__fastcall OBB2D_create(const struct cocos2d::CCPoint *a1, __int64 a2, __int64 a3, float X)
{
  char *v5; // rsi
  const struct cocos2d::CCPoint *v6; // rax
  const struct cocos2d::CCPoint *v7; // rbx
  int v8; // eax
  int v9; // r8d
  int v10; // r9d
  char *v12; // [rsp+30h] [rbp-48h] BYREF
  char v13[8]; // [rsp+38h] [rbp-40h] BYREF

  v5 = (char *)operator new(0x1B8u); /*0x7a176*/
  v12 = v5; /*0x7a179*/
  memset(v5, 0, 0x1B8u); /*0x7a189*/
  cocos2d::CCNode::CCNode((cocos2d::CCNode *)v5); /*0x7a191*/
  *(_QWORD *)v5 = &OBB2D::`vftable'; /*0x7a19f*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v5 + 320)); /*0x7a1a9*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v5 + 328)); /*0x7a1b6*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v5 + 336)); /*0x7a1c3*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v5 + 344)); /*0x7a1d0*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v5 + 352)); /*0x7a1dd*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v5 + 360)); /*0x7a1ea*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v5 + 368)); /*0x7a1f7*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v5 + 376)); /*0x7a204*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v5 + 384)); /*0x7a211*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v5 + 392)); /*0x7a21e*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v5 + 400)); /*0x7a22b*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v5 + 408)); /*0x7a238*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(v5 + 432)); /*0x7a245*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v12, a1); /*0x7a254*/
  v7 = v6; /*0x7a25a*/
  if ( cocos2d::CCNode::init((cocos2d::CCNode *)v5) ) /*0x7a260*/
  {
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v13, v7); /*0x7a272*/
    sub_7A310((int)v5, v8, v9, v10, X); /*0x7a28b*/
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v5); /*0x7a293*/
    return v5; /*0x7a299*/
  }
  else
  {
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v5 + 8LL))(v5, 1); /*0x7a2a9*/
    return 0; /*0x7a2ac*/
  }
}

// [2/4] Address: 0x7a2d0
// Method: OBB2D::~OBB2D
cocos2d::CCNode *__fastcall OBB2D__dtor_OBB2D(cocos2d::CCNode *Block, char a2)
{
  cocos2d::CCNode::~CCNode(Block); /*0x7a2df*/
  if ( (a2 & 1) != 0 ) /*0x7a2e8*/
    j_j_free(Block); /*0x7a2f2*/
  return Block; /*0x7a2f7*/
}

// [3/4] Address: 0x7a620
// Method: OBB2D::orderCorners
double __fastcall OBB2D_orderCorners(float *a1)
{
  __int64 v2; // rax
  float v3; // xmm0_4
  float *v4; // rcx
  float v5; // xmm1_4
  float v6; // xmm0_4
  float *v7; // rdx
  float *v8; // rcx
  float v9; // xmm0_4
  float *v10; // rdx
  float *v11; // rcx
  float v12; // xmm0_4
  float *v13; // rdx
  float *v14; // rcx
  float *v15; // rcx
  float *v16; // rdx
  __int64 v17; // rax
  float v18; // xmm2_4
  float *v19; // rcx
  float v20; // xmm1_4
  float v21; // xmm2_4
  float *v22; // rdx
  float *v23; // rcx
  float v24; // xmm2_4
  float *v25; // rdx
  float *v26; // rcx
  float v27; // xmm2_4
  float *v28; // rdx
  float *v29; // rcx
  float *v30; // rcx
  float *v31; // rdx
  float v33; // [rsp+50h] [rbp+28h] BYREF
  float v34; // [rsp+54h] [rbp+2Ch]
  float v35; // [rsp+58h] [rbp+30h] BYREF
  float v36; // [rsp+5Ch] [rbp+34h]
  float v37; // [rsp+60h] [rbp+38h] BYREF
  float v38; // [rsp+64h] [rbp+3Ch]
  float v39; // [rsp+68h] [rbp+40h] BYREF
  float v40; // [rsp+6Ch] [rbp+44h]

  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v37); /*0x7a633*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v33); /*0x7a63d*/
  cocos2d::CCPoint::operator=(&v33, a1 + 80); /*0x7a64e*/
  cocos2d::CCPoint::operator=(&v37, v2); /*0x7a65b*/
  v3 = a1[81]; /*0x7a661*/
  if ( v3 > v38 ) /*0x7a66d*/
  {
    cocos2d::CCPoint::operator=(&v33, &v37); /*0x7a677*/
    v4 = &v37; /*0x7a67d*/
LABEL_7:
    cocos2d::CCPoint::operator=(v4, a1 + 80); /*0x7a6a6*/
    v5 = v34; /*0x7a6b3*/
    goto LABEL_8; /*0x7a6b3*/
  }
  v5 = v34; /*0x7a683*/
  if ( v3 > v34 || v3 == v34 && v33 > a1[80] ) /*0x7a6a0*/
  {
    v4 = &v33; /*0x7a6a2*/
    goto LABEL_7; /*0x7a6a2*/
  }
LABEL_8:
  v6 = a1[83]; /*0x7a6b8*/
  if ( v6 > v38 ) /*0x7a6c4*/
  {
    cocos2d::CCPoint::operator=(&v33, &v37); /*0x7a6ce*/
    v7 = a1 + 82; /*0x7a6d4*/
    v8 = &v37; /*0x7a6db*/
LABEL_16:
    cocos2d::CCPoint::operator=(v8, v7); /*0x7a70b*/
    v5 = v34; /*0x7a711*/
    goto LABEL_17; /*0x7a711*/
  }
  if ( v6 > v5 ) /*0x7a6e4*/
  {
    v7 = a1 + 82; /*0x7a700*/
LABEL_15:
    v8 = &v33; /*0x7a707*/
    goto LABEL_16; /*0x7a707*/
  }
  if ( v6 == v5 ) /*0x7a6eb*/
  {
    v7 = a1 + 82; /*0x7a6f2*/
    if ( v33 > a1[82] ) /*0x7a6fc*/
      goto LABEL_15; /*0x7a6fc*/
  }
LABEL_17:
  v9 = a1[85]; /*0x7a716*/
  if ( v9 > v38 ) /*0x7a722*/
  {
    cocos2d::CCPoint::operator=(&v33, &v37); /*0x7a72c*/
    v10 = a1 + 84; /*0x7a732*/
    v11 = &v37; /*0x7a739*/
LABEL_25:
    cocos2d::CCPoint::operator=(v11, v10); /*0x7a769*/
    v5 = v34; /*0x7a76f*/
    goto LABEL_26; /*0x7a76f*/
  }
  if ( v9 > v5 ) /*0x7a742*/
  {
    v10 = a1 + 84; /*0x7a75e*/
LABEL_24:
    v11 = &v33; /*0x7a765*/
    goto LABEL_25; /*0x7a765*/
  }
  if ( v9 == v5 ) /*0x7a749*/
  {
    v10 = a1 + 84; /*0x7a750*/
    if ( v33 > a1[84] ) /*0x7a75a*/
      goto LABEL_24; /*0x7a75a*/
  }
LABEL_26:
  v12 = a1[87]; /*0x7a774*/
  if ( v12 <= v38 ) /*0x7a780*/
  {
    if ( v12 > v5 ) /*0x7a7a0*/
    {
      v13 = a1 + 86; /*0x7a7bc*/
    }
    else
    {
      if ( v12 != v5 ) /*0x7a7a7*/
        goto LABEL_35; /*0x7a7a7*/
      v13 = a1 + 86; /*0x7a7ae*/
      if ( v33 <= a1[86] ) /*0x7a7b8*/
        goto LABEL_35; /*0x7a7b8*/
    }
    v14 = &v33; /*0x7a7c3*/
  }
  else
  {
    cocos2d::CCPoint::operator=(&v33, &v37); /*0x7a78a*/
    v13 = a1 + 86; /*0x7a790*/
    v14 = &v37; /*0x7a797*/
  }
  cocos2d::CCPoint::operator=(v14, v13); /*0x7a7c7*/
LABEL_35:
  v15 = a1 + 88; /*0x7a7cd*/
  if ( v37 <= v33 ) /*0x7a7e1*/
  {
    cocos2d::CCPoint::operator=(v15, &v37); /*0x7a7f7*/
    v16 = &v33; /*0x7a7fd*/
  }
  else
  {
    cocos2d::CCPoint::operator=(v15, &v33); /*0x7a7e7*/
    v16 = &v37; /*0x7a7ed*/
  }
  cocos2d::CCPoint::operator=(a1 + 90, v16); /*0x7a804*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v39); /*0x7a80e*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v35); /*0x7a818*/
  cocos2d::CCPoint::operator=(&v35, a1 + 80); /*0x7a829*/
  cocos2d::CCPoint::operator=(&v39, v17); /*0x7a836*/
  v18 = a1[81]; /*0x7a83c*/
  if ( v40 > v18 ) /*0x7a84c*/
  {
    cocos2d::CCPoint::operator=(&v35, &v39); /*0x7a856*/
    v19 = &v39; /*0x7a85c*/
LABEL_44:
    cocos2d::CCPoint::operator=(v19, a1 + 80); /*0x7a885*/
    v20 = v36; /*0x7a892*/
    goto LABEL_45; /*0x7a892*/
  }
  v20 = v36; /*0x7a862*/
  if ( v36 > v18 || v18 == v36 && a1[80] > v35 ) /*0x7a87f*/
  {
    v19 = &v35; /*0x7a881*/
    goto LABEL_44; /*0x7a881*/
  }
LABEL_45:
  v21 = a1[83]; /*0x7a897*/
  if ( v40 > v21 ) /*0x7a8a7*/
  {
    cocos2d::CCPoint::operator=(&v35, &v39); /*0x7a8b1*/
    v22 = a1 + 82; /*0x7a8b7*/
    v23 = &v39; /*0x7a8be*/
LABEL_53:
    cocos2d::CCPoint::operator=(v23, v22); /*0x7a8ee*/
    v20 = v36; /*0x7a8f4*/
    goto LABEL_54; /*0x7a8f4*/
  }
  if ( v20 > v21 ) /*0x7a8c7*/
  {
    v22 = a1 + 82; /*0x7a8e3*/
LABEL_52:
    v23 = &v35; /*0x7a8ea*/
    goto LABEL_53; /*0x7a8ea*/
  }
  if ( v21 == v20 ) /*0x7a8ce*/
  {
    v22 = a1 + 82; /*0x7a8d0*/
    if ( a1[82] > v35 ) /*0x7a8df*/
      goto LABEL_52; /*0x7a8df*/
  }
LABEL_54:
  v24 = a1[85]; /*0x7a8f9*/
  if ( v40 > v24 ) /*0x7a909*/
  {
    cocos2d::CCPoint::operator=(&v35, &v39); /*0x7a913*/
    v25 = a1 + 84; /*0x7a919*/
    v26 = &v39; /*0x7a920*/
LABEL_62:
    cocos2d::CCPoint::operator=(v26, v25); /*0x7a950*/
    v20 = v36; /*0x7a956*/
    goto LABEL_63; /*0x7a956*/
  }
  if ( v20 > v24 ) /*0x7a929*/
  {
    v25 = a1 + 84; /*0x7a945*/
LABEL_61:
    v26 = &v35; /*0x7a94c*/
    goto LABEL_62; /*0x7a94c*/
  }
  if ( v24 == v20 ) /*0x7a930*/
  {
    v25 = a1 + 84; /*0x7a932*/
    if ( a1[84] > v35 ) /*0x7a941*/
      goto LABEL_61; /*0x7a941*/
  }
LABEL_63:
  v27 = a1[87]; /*0x7a95b*/
  if ( v40 <= v27 ) /*0x7a96b*/
  {
    if ( v20 > v27 ) /*0x7a98b*/
    {
      v28 = a1 + 86; /*0x7a9a7*/
    }
    else
    {
      if ( v27 != v20 ) /*0x7a992*/
        goto LABEL_72; /*0x7a992*/
      v28 = a1 + 86; /*0x7a994*/
      if ( a1[86] <= v35 ) /*0x7a9a3*/
        goto LABEL_72; /*0x7a9a3*/
    }
    v29 = &v35; /*0x7a9ae*/
  }
  else
  {
    cocos2d::CCPoint::operator=(&v35, &v39); /*0x7a975*/
    v28 = a1 + 86; /*0x7a97b*/
    v29 = &v39; /*0x7a982*/
  }
  cocos2d::CCPoint::operator=(v29, v28); /*0x7a9b2*/
LABEL_72:
  v30 = a1 + 92; /*0x7a9b8*/
  if ( v39 <= v35 ) /*0x7a9c8*/
  {
    cocos2d::CCPoint::operator=(v30, &v35); /*0x7a9de*/
    v31 = &v39; /*0x7a9e4*/
  }
  else
  {
    cocos2d::CCPoint::operator=(v30, &v39); /*0x7a9ce*/
    v31 = &v35; /*0x7a9d4*/
  }
  return cocos2d::CCPoint::operator=(a1 + 94, v31); /*0x7a9f5*/
}

// [4/4] Address: 0x7abc0
// Method: OBB2D::getBoundingRect
cocos2d::CCRect *__fastcall OBB2D_getBoundingRect(__int64 a1, cocos2d::CCRect *a2)
{
  const struct cocos2d::CCPoint *v2; // rbx
  float v4; // xmm7_4
  float v5; // xmm6_4
  float v6; // xmm10_4
  float v7; // xmm9_4
  __int64 v8; // rdi
  float v9; // xmm0_4
  float v11; // [rsp+98h] [rbp+10h] BYREF
  float v12; // [rsp+9Ch] [rbp+14h]

  v2 = (const struct cocos2d::CCPoint *)(a1 + 320); /*0x7abd7*/
  v4 = 0.0; /*0x7abea*/
  v5 = 0.0; /*0x7abfb*/
  v6 = 0.0; /*0x7abfe*/
  v7 = 0.0; /*0x7ac02*/
  v8 = 4; /*0x7ac06*/
  do /*0x7ac73*/
  {
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v11, v2); /*0x7ac1b*/
    v6 = fmaxf(v11, v6); /*0x7ac35*/
    if ( v4 > v11 || v4 == 0.0 ) /*0x7ac41*/
      v4 = v11; /*0x7ac43*/
    v9 = fmaxf(v12, v7); /*0x7ac55*/
    v7 = v9; /*0x7ac5a*/
    if ( v5 > v12 || v5 == 0.0 ) /*0x7ac66*/
      v5 = v12; /*0x7ac68*/
    v2 = (const struct cocos2d::CCPoint *)((char *)v2 + 8); /*0x7ac6b*/
    --v8; /*0x7ac6f*/
  }
  while ( v8 ); /*0x7ac73*/
  cocos2d::CCRect::CCRect(a2, v4, v5, v6 - v4, v9 - v5); /*0x7ac93*/
  return a2; /*0x7ac99*/
}
