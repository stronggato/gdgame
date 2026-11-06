#include <Geode/binding/MenuGameLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/10] Address: 0x10ec60
// Method: MenuGameLayer::resetPlayer
// Hidden C++ exception states: #wind=1
double __fastcall MenuGameLayer_resetPlayer(__int64 a1, __int64 a2, int a3, float a4, float a5)
{
  cocos2d::CCString *v7; // rax
  int v8; // r8d
  char *CString; // rax
  size_t v10; // r8
  const char *v11; // rcx
  struct cocos2d::CCLabelBMFont *v12; // rax
  struct cocos2d::CCLabelBMFont *v13; // rsi
  int v14; // xmm6_4
  __int64 v15; // rbx
  __int64 v16; // rax
  int v17; // r8d
  int v18; // r9d
  __m128d *v19; // r10
  __int64 v20; // r9
  __int64 v21; // rdx
  float *v22; // rcx
  __m128d v23; // xmm1
  _BYTE v25[24]; // [rsp+30h] [rbp-A8h] BYREF
  char v26; // [rsp+48h] [rbp-90h] BYREF
  __int128 v27; // [rsp+58h] [rbp-80h] BYREF
  __m128i si128; // [rsp+68h] [rbp-70h]

  v27 = 0; /*0x10eca1*/
  si128 = _mm_load_si128((const __m128i *)&Size); /*0x10ecae*/
  LOBYTE(v27) = 0; /*0x10ecb4*/
  if ( a3 < 10000 ) /*0x10ecc0*/
  {
    if ( a3 < 1000 ) /*0x10ecea*/
    {
      v7 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, (unsigned int)a3); /*0x10ed49*/
    }
    else
    {
      v8 = (a3 + 50) / 100; /*0x10ed04*/
      if ( v8 < 100 ) /*0x10ed1d*/
        v7 = cocos2d::CCString::createWithFormat("%i.%ik", v8 / 10, v8 % 10); /*0x10ed37*/
      else
        v7 = cocos2d::CCString::createWithFormat("%ik", (unsigned int)(v8 / 10)); /*0x10ed26*/
    }
  }
  else
  {
    v7 = cocos2d::CCString::createWithFormat("%ik", (unsigned int)((a3 + 500) / 1000)); /*0x10ece1*/
  }
  CString = (char *)cocos2d::CCString::getCString(v7); /*0x10ed52*/
  v10 = -1; /*0x10ed58*/
  do /*0x10ed63*/
    ++v10; /*0x10ed60*/
  while ( CString[v10] ); /*0x10ed63*/
  sub_3F5A0(&v27, CString, v10); /*0x10ed72*/
  v11 = (const char *)&v27; /*0x10ed77*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x10ed82*/
    v11 = (const char *)v27; /*0x10ed82*/
  v12 = cocos2d::CCLabelBMFont::create(v11, (const char *)&qword_6FFF68); /*0x10ed8f*/
  v13 = v12; /*0x10ed95*/
  if ( si128.m128i_i64[0] > 2uLL ) /*0x10ed9e*/
    v14 = 1048911544; /*0x10edaa*/
  else
    v14 = 1050924810; /*0x10eda0*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v12 + 160LL))(v12); /*0x10edbb*/
  v15 = *(_QWORD *)v13; /*0x10edc1*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v25, a4, a5); /*0x10edd0*/
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v15 + 184))(v13, v16); /*0x10eddc*/
  (*(void (__fastcall **)(__int64, struct cocos2d::CCLabelBMFont *, __int64))(*(_QWORD *)a2 + 456LL))(a2, v13, 1); /*0x10edf1*/
  v19 = (__m128d *)sub_10EB90((unsigned int)&v26, (_DWORD)v13, v17, v18, v14); /*0x10ee11*/
  *(__m128d *)v25 = *v19; /*0x10ee17*/
  v20 = *(_QWORD *)(a1 + 8); /*0x10ee1c*/
  LODWORD(v21) = (*(_DWORD *)(a1 + 8) - *(_DWORD *)a1) / 24 - 1; /*0x10ee44*/
  if ( (int)v21 >= 0 ) /*0x10ee47*/
  {
    v21 = (int)v21; /*0x10ee49*/
    v22 = (float *)(*(_QWORD *)a1 + 8 * ((int)v21 + 2 * ((int)v21 + 1LL))); /*0x10ee54*/
    while ( *(float *)v25 < *(v22 - 1) ) /*0x10ee74*/
    {
      if ( *(float *)&v25[12] > *v22 && v22[1] > *(float *)&v25[8] ) /*0x10ee83*/
      {
        (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, _QWORD))(*(_QWORD *)v13 + 336LL))(v13, 0); /*0x10eec5*/
        return sub_3C310(&v27); /*0x10eecb*/
      }
      v22 -= 6; /*0x10ee85*/
      if ( --v21 < 0 ) /*0x10ee8d*/
        break; /*0x10ee8d*/
    }
  }
  *(_QWORD *)v25 = v13; /*0x10ee8f*/
  v23 = *v19; /*0x10ee94*/
  *(__m128d *)&v25[8] = *v19; /*0x10ee98*/
  if ( v20 == *(_QWORD *)(a1 + 16) ) /*0x10eea1*/
  {
    sub_7F650(a1, v20, v25); /*0x10eed8*/
  }
  else
  {
    *(_OWORD *)v20 = *(_OWORD *)v25; /*0x10eea8*/
    *(_QWORD *)(v20 + 16) = *(_OWORD *)&_mm_unpackhi_pd(v23, v23); /*0x10eeb0*/
    *(_QWORD *)(a1 + 8) += 24LL; /*0x10eeb6*/
  }
  return sub_3C310(&v27); /*0x10eee8*/
}

// [2/10] Address: 0x46b820
// Method: MenuGameLayer::~MenuGameLayer
cocos2d::CCLayer *__fastcall MenuGameLayer__dtor_MenuGameLayer(cocos2d::CCLayer *Block, char a2)
{
  *(_QWORD *)Block = &MenuGameLayer::`vftable'; /*0x46b833*/
  *((_QWORD *)Block + 40) = &MenuGameLayer::`vftable'; /*0x46b840*/
  *((_QWORD *)Block + 41) = &MenuGameLayer::`vftable'; /*0x46b84e*/
  *((_QWORD *)Block + 42) = &MenuGameLayer::`vftable'; /*0x46b85c*/
  *((_QWORD *)Block + 43) = &MenuGameLayer::`vftable'; /*0x46b86a*/
  *((_QWORD *)Block + 44) = &MenuGameLayer::`vftable'; /*0x46b878*/
  cocos2d::CCLayer::~CCLayer(Block); /*0x46b87f*/
  if ( (a2 & 1) != 0 ) /*0x46b888*/
    j_j_free(Block); /*0x46b892*/
  return Block; /*0x46b897*/
}

// [4/10] Address: 0x46c000
// Method: MenuGameLayer::updateColor
struct cocos2d::CCAction *__fastcall MenuGameLayer_updateColor(__int64 a1)
{
  cocos2d::CCNode *v2; // rcx
  struct cocos2d::CCAction *v3; // rax
  __int64 v4; // rcx
  float v5; // xmm6_4
  struct cocos2d::CCAction *v6; // rax
  struct cocos2d::CCAction *result; // rax
  cocos2d::CCNode *v8; // rcx
  struct cocos2d::CCAction *v9; // rax
  unsigned __int8 v10; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int8 v11; // [rsp+41h] [rbp+9h]
  unsigned __int8 v12; // [rsp+42h] [rbp+Ah]

  MenuGameLayer_getBGColor(a1, &v10, *(unsigned int *)(a1 + 420)); /*0x46c01a*/
  v2 = *(cocos2d::CCNode **)(a1 + 440); /*0x46c01f*/
  ++*(_DWORD *)(a1 + 420); /*0x46c026*/
  cocos2d::CCNode::stopAllActions(v2); /*0x46c02c*/
  v3 = cocos2d::CCTintTo::create(4.0, v10, v11, v12); /*0x46c04b*/
  cocos2d::CCNode::runAction(*(cocos2d::CCNode **)(a1 + 440), v3); /*0x46c05b*/
  v4 = *(_QWORD *)(a1 + 448); /*0x46c061*/
  if ( *(_QWORD *)(v4 + 416) ) /*0x46c068*/
    v5 = 0.60000002; /*0x46c072*/
  else
    v5 = 0.80000001; /*0x46c07c*/
  cocos2d::CCNode::stopAllActions(*(cocos2d::CCNode **)(v4 + 408)); /*0x46c08b*/
  v6 = cocos2d::CCTintTo::create( /*0x46c0d7*/
         4.0,
         (int)(float)((float)v10 * v5),
         (int)(float)((float)v11 * v5),
         (int)(float)((float)v12 * v5));
  cocos2d::CCNode::runAction(*(cocos2d::CCNode **)(*(_QWORD *)(a1 + 448) + 408LL), v6); /*0x46c0ee*/
  result = *(struct cocos2d::CCAction **)(a1 + 448); /*0x46c0f4*/
  v8 = (cocos2d::CCNode *)*((_QWORD *)result + 52); /*0x46c0fb*/
  if ( v8 ) /*0x46c105*/
  {
    cocos2d::CCNode::stopAllActions(v8); /*0x46c107*/
    v9 = cocos2d::CCTintTo::create(4.0, v10, v11, v12); /*0x46c126*/
    return cocos2d::CCNode::runAction(*(cocos2d::CCNode **)(*(_QWORD *)(a1 + 448) + 416LL), v9); /*0x46c13d*/
  }
  return result; /*0x46c143*/
}

// [5/10] Address: 0x46c150
// Method: MenuGameLayer::getBGColor
// Hidden C++ exception states: #wind=7
char *__fastcall MenuGameLayer_getBGColor(__int64 a1, char *a2, int a3)
{
  char *result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  void *v13; // [rsp+48h] [rbp+20h]
  void *v14; // [rsp+48h] [rbp+20h]
  void *v15; // [rsp+48h] [rbp+20h]
  void *v16; // [rsp+48h] [rbp+20h]
  void *v17; // [rsp+48h] [rbp+20h]
  void *v18; // [rsp+48h] [rbp+20h]
  void *v19; // [rsp+48h] [rbp+20h]

  switch ( a3 ) /*0x46c178*/
  {
    case 0: /*0x46c178*/
      *(_WORD *)a2 = 26112; /*0x46c187*/
      a2[2] = -1; /*0x46c18a*/
      result = a2; /*0x46c18e*/
      break; /*0x46c196*/
    case 1: /*0x46c178*/
      v5 = qword_905FD0; /*0x46c197*/
      if ( !qword_905FD0 ) /*0x46c1a1*/
      {
        v13 = operator new(0x6E8u); /*0x46c1ad*/
        qword_905FD0 = sub_2723A0(v13); /*0x46c1bb*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x46c1cc*/
        v5 = qword_905FD0; /*0x46c1ce*/
      }
      GameManager_colorForIdx(v5, a2, 7); /*0x46c1de*/
      result = a2; /*0x46c1e3*/
      break; /*0x46c1eb*/
    case 2: /*0x46c178*/
      v6 = qword_905FD0; /*0x46c1ec*/
      if ( !qword_905FD0 ) /*0x46c1f6*/
      {
        v14 = operator new(0x6E8u); /*0x46c202*/
        qword_905FD0 = sub_2723A0(v14); /*0x46c210*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x46c221*/
        v6 = qword_905FD0; /*0x46c223*/
      }
      GameManager_colorForIdx(v6, a2, 8); /*0x46c233*/
      result = a2; /*0x46c238*/
      break; /*0x46c240*/
    case 3: /*0x46c178*/
      v7 = qword_905FD0; /*0x46c241*/
      if ( !qword_905FD0 ) /*0x46c24b*/
      {
        v15 = operator new(0x6E8u); /*0x46c257*/
        qword_905FD0 = sub_2723A0(v15); /*0x46c265*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x46c276*/
        v7 = qword_905FD0; /*0x46c278*/
      }
      GameManager_colorForIdx(v7, a2, 9); /*0x46c288*/
      result = a2; /*0x46c28d*/
      break; /*0x46c295*/
    case 4: /*0x46c178*/
      v8 = qword_905FD0; /*0x46c296*/
      if ( !qword_905FD0 ) /*0x46c2a0*/
      {
        v16 = operator new(0x6E8u); /*0x46c2ac*/
        qword_905FD0 = sub_2723A0(v16); /*0x46c2ba*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x46c2cb*/
        v8 = qword_905FD0; /*0x46c2cd*/
      }
      GameManager_colorForIdx(v8, a2, 10); /*0x46c2dd*/
      result = a2; /*0x46c2e2*/
      break; /*0x46c2ea*/
    case 5: /*0x46c178*/
      v9 = qword_905FD0; /*0x46c2eb*/
      if ( !qword_905FD0 ) /*0x46c2f5*/
      {
        v17 = operator new(0x6E8u); /*0x46c301*/
        qword_905FD0 = sub_2723A0(v17); /*0x46c30f*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x46c320*/
        v9 = qword_905FD0; /*0x46c322*/
      }
      GameManager_colorForIdx(v9, a2, 11); /*0x46c332*/
      result = a2; /*0x46c337*/
      break; /*0x46c33f*/
    case 6: /*0x46c178*/
      v10 = qword_905FD0; /*0x46c340*/
      if ( !qword_905FD0 ) /*0x46c34a*/
      {
        v18 = operator new(0x6E8u); /*0x46c356*/
        qword_905FD0 = sub_2723A0(v18); /*0x46c364*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x46c375*/
        v10 = qword_905FD0; /*0x46c377*/
      }
      GameManager_colorForIdx(v10, a2, 1); /*0x46c387*/
      result = a2; /*0x46c38c*/
      break; /*0x46c394*/
    case 7: /*0x46c178*/
      v11 = qword_905FD0; /*0x46c395*/
      if ( !qword_905FD0 ) /*0x46c39f*/
      {
        v19 = operator new(0x6E8u); /*0x46c3ab*/
        qword_905FD0 = sub_2723A0(v19); /*0x46c3b9*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x46c3ca*/
        v11 = qword_905FD0; /*0x46c3cc*/
      }
      GameManager_colorForIdx(v11, a2, 3); /*0x46c3dc*/
      result = a2; /*0x46c3e1*/
      break; /*0x46c3e9*/
    default:
      v12 = a3 & 0x80000007; /*0x46c3ea*/
      if ( (int)v12 < 0 ) /*0x46c3f1*/
        v12 = ((unsigned __int8)(v12 - 1) | 0xFFFFFFF8) + 1; /*0x46c3fa*/
      MenuGameLayer_getBGColor(a1, a2, v12); /*0x46c400*/
      result = a2; /*0x46c405*/
      break; /*0x46c405*/
  }
  return result; /*0x46c191*/
}

// [6/10] Address: 0x46c430
// Method: MenuGameLayer::tryJump
void __fastcall MenuGameLayer_tryJump(__int64 a1)
{
  __int64 v2; // rax
  float v3; // xmm6_4
  _BYTE *v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rcx
  cocos2d::CCDirector *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  cocos2d::CCDirector *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  cocos2d::CCDirector *v13; // rax
  __int64 v14; // rax
  _BYTE *v15; // rcx
  _BYTE *v16; // rcx
  _BYTE *v17; // rbx
  bool v18; // zf
  int v19; // [rsp+40h] [rbp+8h] BYREF
  char v20; // [rsp+50h] [rbp+18h] BYREF
  float v21; // [rsp+54h] [rbp+1Ch]

  v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x46c43e*/
  cocos2d::CCDirector::getWinSize(v2, &v20); /*0x46c44c*/
  v3 = 0.2; /*0x46c459*/
  if ( *(_BYTE *)(a1 + 416) ) /*0x46c452*/
    v3 = 0.40000001; /*0x46c463*/
  v4 = *(_BYTE **)(a1 + 432); /*0x46c46b*/
  if ( !v4[2497] ) /*0x46c47e*/
  {
    if ( v4[2499] || v4[2502] ) /*0x46c4d7*/
    {
      v3 = -1.0; /*0x46c615*/
      goto LABEL_25; /*0x46c615*/
    }
    if ( v4[2498] ) /*0x46c4e4*/
    {
      v8 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v4 + 200LL))(v4); /*0x46c4f6*/
      v10 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v9); /*0x46c4f9*/
      if ( (float)((float)((float)(cocos2d::CCDirector::getScreenBottom(v10) + 90.0) + 15.0) + 200.0) > *(float *)(v8 + 4) ) /*0x46c524*/
      {
        v3 = 0.40000001; /*0x46c526*/
        goto LABEL_25; /*0x46c52e*/
      }
    }
    else if ( v4[2500] ) /*0x46c533*/
    {
      v11 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v4 + 200LL))(v4); /*0x46c545*/
      v13 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v12); /*0x46c548*/
      if ( (float)((float)(cocos2d::CCDirector::getScreenBottom(v13) + 90.0) + 75.0) > *(float *)(v11 + 4) ) /*0x46c56f*/
      {
        v3 = 1.0; /*0x46c571*/
        goto LABEL_25; /*0x46c579*/
      }
      v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 432) + 200LL))(*(_QWORD *)(a1 + 432)); /*0x46c588*/
      if ( *(float *)(v14 + 4) <= (float)(v21 - 75.0) ) /*0x46c5a0*/
      {
        v3 = 0.5; /*0x46c5a7*/
        goto LABEL_25; /*0x46c5af*/
      }
    }
    else
    {
      if ( !v4[2508] ) /*0x46c5b8*/
        goto LABEL_25; /*0x46c5b8*/
      if ( !v4[2503] && *(float *)((*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v4 + 200LL))(v4) + 4) < 150.0 ) /*0x46c5d8*/
      {
        v3 = 0.89999998; /*0x46c5da*/
        goto LABEL_25; /*0x46c5e2*/
      }
      v15 = *(_BYTE **)(a1 + 432); /*0x46c5e4*/
      if ( v15[2503] && *(float *)((*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v15 + 200LL))(v15) + 4) > 210.0 ) /*0x46c609*/
      {
        v3 = 0.89999998; /*0x46c60b*/
        goto LABEL_25; /*0x46c613*/
      }
    }
LABEL_15:
    v3 = 0.0; /*0x46c5a2*/
    goto LABEL_25; /*0x46c5a5*/
  }
  v5 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v4 + 200LL))(v4); /*0x46c489*/
  v7 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v6); /*0x46c48c*/
  if ( (float)((float)((float)(cocos2d::CCDirector::getScreenBottom(v7) + 90.0) + 15.0) + 100.0) <= *(float *)(v5 + 4) ) /*0x46c4b7*/
    goto LABEL_15; /*0x46c4b7*/
  v3 = 0.30000001; /*0x46c4bd*/
LABEL_25:
  if ( v3 >= (float)((float)rand() / 32767.0) /*0x46c667*/
    && ((v16 = *(_BYTE **)(a1 + 432), v16[2580]) || v16[2497] || v16[2498] || v16[2500] || v16[2508]) )
  {
    PlayerObject_pushButton((__int64)v16, 1u); /*0x46c675*/
  }
  else
  {
    v17 = *(_BYTE **)(a1 + 432); /*0x46c685*/
    if ( !v17[3024] ) /*0x46c68c*/
    {
      v19 = 1; /*0x46c69c*/
      *(_BYTE *)sub_16C910(v17 + 3008, &v19) = 0; /*0x46c6ae*/
    }
    if ( !v17[2611] ) /*0x46c6b1*/
    {
      if ( v17[2445] ) /*0x46c6ba*/
        sub_4FA2B0(v17); /*0x46c6c6*/
      v18 = v17[2540] == 0; /*0x46c6cb*/
      *(_WORD *)(v17 + 2445) = 0; /*0x46c6d2*/
      v17[2468] = 1; /*0x46c6db*/
      if ( !v18 ) /*0x46c6e2*/
        PlayerObject_stopDashing((__int64)v17); /*0x46c6e7*/
    }
  }
}

// [7/10] Address: 0x46c700
// Method: MenuGameLayer::update
double __fastcall MenuGameLayer_update(__int64 a1, float a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  cocos2d::CCArray *v6; // rax
  unsigned int v7; // ebx
  cocos2d::CCArray *v8; // rbp
  unsigned int v9; // edi
  struct cocos2d::CCObject *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  cocos2d::CCArray *v14; // rax
  cocos2d::CCArray *v15; // rdi
  struct cocos2d::CCObject *v16; // rax
  const struct cocos2d::CCPoint *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  float v20; // xmm6_4
  __int64 v21; // rax
  float v22; // xmm0_4
  float v23; // xmm8_4
  cocos2d::CCDirector *v24; // rax
  float v25; // xmm7_4
  float *v26; // rax
  __int64 *v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rax
  float *v30; // rax
  __int64 v31; // rax
  float v32; // xmm0_4
  float v33; // xmm1_4
  float v34; // xmm0_4
  float v35; // xmm2_4
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rcx
  float v41[4]; // [rsp+20h] [rbp-78h] BYREF
  __int16 v42; // [rsp+A0h] [rbp+8h] BYREF
  char v43; // [rsp+A2h] [rbp+Ah]
  float v44; // [rsp+B0h] [rbp+18h] BYREF
  float v45; // [rsp+B8h] [rbp+20h] BYREF

  v3 = cocos2d::CCDirector::sharedDirector(a1); /*0x46c732*/
  cocos2d::CCDirector::getWinSize(v3, v41); /*0x46c740*/
  v4 = *(_QWORD *)(a1 + 448); /*0x46c746*/
  *(float *)(a1 + 412) = a2 + *(float *)(a1 + 412); /*0x46c766*/
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v4 + 408) + 320LL) + 8LL))(*(_QWORD *)(v4 + 408) + 320LL); /*0x46c77f*/
  v42 = *(_WORD *)v5; /*0x46c785*/
  v43 = *(_BYTE *)(v5 + 2); /*0x46c791*/
  v6 = (cocos2d::CCArray *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 448) + 408LL) + 480LL))(*(_QWORD *)(*(_QWORD *)(a1 + 448) + 408LL)); /*0x46c7a9*/
  v7 = 0; /*0x46c7af*/
  v8 = v6; /*0x46c7b1*/
  if ( v6 ) /*0x46c7b7*/
  {
    v9 = 0; /*0x46c7bc*/
    if ( cocos2d::CCArray::count(v6) ) /*0x46c7be*/
    {
      do /*0x46c7fc*/
      {
        v10 = cocos2d::CCArray::objectAtIndex(v8, v9); /*0x46c7d5*/
        (**((void (__fastcall ***)(__int64, __int16 *))v10 + 40))((__int64)v10 + 320, &v42); /*0x46c7ed*/
        ++v9; /*0x46c7f2*/
      }
      while ( v9 < cocos2d::CCArray::count(v8) ); /*0x46c7fc*/
    }
  }
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 448) + 416LL); /*0x46c805*/
  if ( v11 ) /*0x46c80f*/
  {
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v11 + 320) + 8LL))(v11 + 320); /*0x46c81f*/
    v42 = *(_WORD *)v12; /*0x46c825*/
    v43 = *(_BYTE *)(v12 + 2); /*0x46c831*/
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 448) + 416LL); /*0x46c83f*/
    if ( v13 ) /*0x46c849*/
    {
      v14 = (cocos2d::CCArray *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 480LL))(v13); /*0x46c84e*/
      v15 = v14; /*0x46c854*/
      if ( v14 ) /*0x46c85a*/
      {
        if ( cocos2d::CCArray::count(v14) ) /*0x46c85f*/
        {
          do /*0x46c89c*/
          {
            v16 = cocos2d::CCArray::objectAtIndex(v15, v7); /*0x46c875*/
            (**((void (__fastcall ***)(__int64, __int16 *))v16 + 40))((__int64)v16 + 320, &v42); /*0x46c88d*/
            ++v7; /*0x46c892*/
          }
          while ( v7 < cocos2d::CCArray::count(v15) ); /*0x46c89c*/
        }
      }
    }
  }
  v17 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 432) + 200LL))(*(_QWORD *)(a1 + 432)); /*0x46c8a8*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v42, v17); /*0x46c8b9*/
  cocos2d::CCPoint::operator=(*(_QWORD *)(a1 + 432) + 2560LL, v18); /*0x46c8d0*/
  PlayerObject_updateInternalActions(*(_QWORD *)(a1 + 432)); /*0x46c8e1*/
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 432) + 32LL))(*(_QWORD *)(a1 + 432)); /*0x46c8f4*/
  v20 = 0.0; /*0x46c8ff*/
  *(double *)(*(_QWORD *)(a1 + 432) + 2728LL) = *(float *)(a1 + 412); /*0x46c914*/
  v21 = *(_QWORD *)(a1 + 432); /*0x46c91c*/
  v22 = *(float *)(v21 + 2552); /*0x46c923*/
  v23 = *(float *)(v21 + 2744); /*0x46c92e*/
  if ( v22 != 1.0 ) /*0x46c939*/
    v20 = (float)((float)(1.0 - v22) * v23) * 0.5; /*0x46c947*/
  v24 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v19); /*0x46c94f*/
  v25 = (float)((float)(cocos2d::CCDirector::getScreenBottom(v24) + 90.0) + (float)(v23 * 0.5)) - v20; /*0x46c981*/
  if ( v25 > *(float *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 432) + 200LL))(*(_QWORD *)(a1 + 432)) + 4) ) /*0x46c98f*/
  {
    v26 = (float *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 432) + 200LL))(*(_QWORD *)(a1 + 432)); /*0x46c99b*/
    v27 = *(__int64 **)(a1 + 432); /*0x46c9a1*/
    v28 = *v27; /*0x46c9b7*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v42, *v26, v25); /*0x46c9ba*/
    (*(void (__fastcall **)(__int64 *, __int64))(v28 + 184))(v27, v29); /*0x46c9c6*/
    PlayerObject_hitGround(*(_QWORD *)(a1 + 432), 0, 0); /*0x46c9d8*/
  }
  PlayerObject_updateRotation(*(__int64 **)(a1 + 432)); /*0x46c9e8*/
  v30 = (float *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 432) + 200LL))(*(_QWORD *)(a1 + 432)); /*0x46c9f7*/
  if ( *v30 > (float)(v41[0] + 100.0) ) /*0x46ca12*/
    sub_46CBD0(a1); /*0x46ca17*/
  cocos2d::CCPoint::CCPoint( /*0x46ca46*/
    (cocos2d::CCPoint *)&v42,
    (float)((float)((float)(a2 * 60.0) * 5.7700019) * 0.89999998) + *(float *)(a1 + 424),
    0.0);
  cocos2d::CCPoint::operator=(a1 + 424, v31); /*0x46ca56*/
  cocos2d::CCPoint::CCPoint( /*0x46ca92*/
    (cocos2d::CCPoint *)&v44,
    (float)-*(float *)(a1 + 424) * 0.1,
    (float)-*(float *)(a1 + 428) * 0.1);
  v32 = v44; /*0x46caa0*/
  v33 = -*(float *)(a1 + 456); /*0x46caac*/
  if ( v33 > v44 ) /*0x46cab2*/
  {
    do /*0x46cabb*/
      v32 = v32 + *(float *)(a1 + 456); /*0x46cab4*/
    while ( v33 > v32 ); /*0x46cabb*/
    v44 = v32; /*0x46cabd*/
  }
  (*(void (__fastcall **)(_QWORD, float *))(**(_QWORD **)(a1 + 440) + 184LL))(*(_QWORD *)(a1 + 440), &v44); /*0x46cad8*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v45, -*(float *)(a1 + 424), 0.0); /*0x46caf4*/
  v34 = v45; /*0x46cb01*/
  v35 = *(float *)(*(_QWORD *)(a1 + 448) + 424LL); /*0x46cb0a*/
  if ( (float)-v35 > v45 ) /*0x46cb1b*/
  {
    do /*0x46cb27*/
      v34 = v34 + v35; /*0x46cb20*/
    while ( (float)-v35 > v34 ); /*0x46cb27*/
    v45 = v34; /*0x46cb29*/
  }
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v42, (const struct cocos2d::CCPoint *)&v45); /*0x46cb42*/
  v36 = *(_QWORD *)(a1 + 448); /*0x46cb48*/
  v38 = v37; /*0x46cb4f*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v36 + 408) + 184LL))(*(_QWORD *)(v36 + 408), v37); /*0x46cb66*/
  v39 = *(_QWORD *)(v36 + 416); /*0x46cb69*/
  if ( v39 ) /*0x46cb73*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v39 + 184LL))(v39, v38); /*0x46cb82*/
  return sub_3BC0A0(*(_QWORD *)(*(_QWORD *)(a1 + 432) + 1976LL)); /*0x46cb9c*/
}

// [8/10] Address: 0x46d480
// Method: MenuGameLayer::destroyPlayer
// Hidden C++ exception states: #wind=3
__int64 __fastcall MenuGameLayer_destroyPlayer(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // ecx
  cocos2d::CCParticleSystem *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // edx
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int16 v20; // [rsp+30h] [rbp-68h]
  char v21[16]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v22; // [rsp+50h] [rbp-48h]
  __int64 v23; // [rsp+58h] [rbp-40h]
  char *v24; // [rsp+60h] [rbp-38h]
  void *v25; // [rsp+68h] [rbp-30h] BYREF
  float v26; // [rsp+70h] [rbp-28h]
  int v27; // [rsp+74h] [rbp-24h]

  *(_BYTE *)(a1 + 416) = 1; /*0x46d4ac*/
  v2 = qword_905FE0; /*0x46d4b3*/
  if ( !qword_905FE0 ) /*0x46d4bd*/
  {
    v24 = (char *)operator new(0x3E8u); /*0x46d4c9*/
    qword_905FE0 = sub_2D2B40(v24); /*0x46d4d7*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x46d4e8*/
    v2 = qword_905FE0; /*0x46d4ea*/
  }
  GameStatsManager_incrementStat(v2, "9", 1u); /*0x46d4fe*/
  v24 = v21; /*0x46d508*/
  v21[15] = 0; /*0x46d50d*/
  v22 = 14; /*0x46d514*/
  v23 = 15; /*0x46d51d*/
  strcpy(v21, "explode_11.ogg"); /*0x46d52e*/
  v5 = qword_905F60; /*0x46d54a*/
  if ( !qword_905F60 ) /*0x46d554*/
  {
    v25 = operator new(0x8A8u); /*0x46d560*/
    qword_905F60 = sub_5AE20(v25); /*0x46d56e*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x46d57f*/
    v5 = qword_905F60; /*0x46d581*/
  }
  FMODAudioEngine_playEffect_0(v5, (__int64)v21, v3, v4, 1056964608); /*0x46d5a6*/
  v6 = cocos2d::CCParticleSystemQuad::create("explodeEffect.plist", 0); /*0x46d5ba*/
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __int64))(*(_QWORD *)v6 + 1528LL))(v6, 2); /*0x46d5cf*/
  (*(void (__fastcall **)(__int64, cocos2d::CCParticleSystem *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v6, 1); /*0x46d5e8*/
  LOBYTE(v7) = 1; /*0x46d5f5*/
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __int64))(*(_QWORD *)v6 + 1544LL))(v6, v7); /*0x46d5fa*/
  v8 = *(_QWORD *)v6; /*0x46d5fd*/
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 432) + 200LL))(*(_QWORD *)(a1 + 432)); /*0x46d60a*/
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *, __int64))(v8 + 184))(v6, v9); /*0x46d616*/
  v10 = *(_QWORD *)(a1 + 432); /*0x46d61c*/
  v20 = *(_WORD *)(v10 + 2706); /*0x46d62a*/
  v11 = *(unsigned __int8 *)(v10 + 2708); /*0x46d62f*/
  *(float *)&v25 = (float)(unsigned __int8)v20 / 255.0; /*0x46d64c*/
  *((float *)&v25 + 1) = (float)HIBYTE(v20) / 255.0; /*0x46d662*/
  v26 = (float)v11 / 255.0; /*0x46d673*/
  v27 = 1065353216; /*0x46d679*/
  (*(void (__fastcall **)(cocos2d::CCParticleSystem *, void **))(*(_QWORD *)v6 + 1352LL))(v6, &v25); /*0x46d68c*/
  cocos2d::CCParticleSystem::resetSystem(v6); /*0x46d695*/
  v15 = CCCircleWave_create(v13, v12, v14, 0, 1); /*0x46d6bb*/
  v16 = *(_QWORD *)(a1 + 432); /*0x46d6be*/
  *(_WORD *)(v15 + 340) = *(_WORD *)(v16 + 2706); /*0x46d6cc*/
  *(_BYTE *)(v15 + 342) = *(_BYTE *)(v16 + 2708); /*0x46d6da*/
  v17 = *(_QWORD *)v15; /*0x46d6e0*/
  v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 432) + 200LL))(*(_QWORD *)(a1 + 432)); /*0x46d6ed*/
  (*(void (__fastcall **)(__int64, __int64))(v17 + 184))(v15, v18); /*0x46d6f9*/
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 456LL))(a1, v15, 0); /*0x46d70b*/
  return sub_46CBD0(a1); /*0x46d719*/
}

// [9/10] Address: 0x46d740
// Method: MenuGameLayer::ccTouchBegan
// Hidden C++ exception states: #wind=3
char __fastcall MenuGameLayer_ccTouchBegan(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rax
  cocos2d *v5; // rax
  const struct cocos2d::CCPoint *v6; // r8
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rbx
  cocos2d::CCString *v11; // rax
  int v12; // ebx
  void *v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rax
  const char *v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rbx
  cocos2d::CCString *v19; // rax
  int v20; // ebx
  void *v21; // r8
  __int64 v22; // rcx
  float v24; // [rsp+30h] [rbp-40h] BYREF
  void *v25; // [rsp+38h] [rbp-38h] BYREF
  void *Block[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v27; // [rsp+50h] [rbp-20h]
  unsigned __int64 v28; // [rsp+58h] [rbp-18h]

  cocos2d::CCTouch::getLocation(a2, &v24); /*0x46d770*/
  v3 = a1 - 320; /*0x46d776*/
  cocos2d::CCNode::convertToNodeSpace(a1 - 320, &v25, &v24); /*0x46d788*/
  cocos2d::CCPoint::operator=(&v24, v4); /*0x46d795*/
  if ( v24 > 50.0 ) /*0x46d7a7*/
  {
    v5 = (cocos2d *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 112) + 200LL))(*(_QWORD *)(a1 + 112)); /*0x46d7b4*/
    if ( cocos2d::ccpDistance(v5, (const struct cocos2d::CCPoint *)&v24, v6) <= 30.0 ) /*0x46d7d2*/
    {
      v7 = *(_QWORD *)(a1 + 112); /*0x46d7d8*/
      if ( !*(_BYTE *)(v7 + 2497) /*0x46d83f*/
        && !*(_BYTE *)(v7 + 2498)
        && !*(_BYTE *)(v7 + 2500)
        && !*(_BYTE *)(v7 + 2508)
        && !*(_BYTE *)(v7 + 2499)
        && !*(_BYTE *)(v7 + 2501)
        && *(float *)(v7 + 2552) == 1.0 )
      {
        v8 = *(unsigned int *)(v7 + 1568); /*0x46d845*/
        if ( (_DWORD)v8 == 55 ) /*0x46d84e*/
        {
          v9 = qword_905FD0; /*0x46d854*/
          if ( !qword_905FD0 ) /*0x46d85e*/
          {
            v25 = operator new(0x6E8u); /*0x46d86a*/
            qword_905FD0 = sub_2723A0(v25); /*0x46d877*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x46d888*/
            v9 = qword_905FD0; /*0x46d88a*/
          }
          v10 = AchievementManager_sharedState(v8); /*0x46d896*/
          *(_OWORD *)Block = 0; /*0x46d89c*/
          v27 = 0; /*0x46d8a2*/
          v28 = 0; /*0x46d8a6*/
          Block[0] = (void *)sub_3C460(32); /*0x46d8b4*/
          v27 = 21; /*0x46d8b8*/
          v28 = 31; /*0x46d8c0*/
          strcpy((char *)Block[0], "geometry.ach.secret11"); /*0x46d8cf*/
          v11 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v10 + 352), Block); /*0x46d8f4*/
          v12 = cocos2d::CCString::intValue(v11); /*0x46d903*/
          if ( v28 > 0xF ) /*0x46d90d*/
          {
            v13 = Block[0]; /*0x46d912*/
            if ( v28 + 1 >= 0x1000 ) /*0x46d920*/
            {
              v13 = (void *)*((_QWORD *)Block[0] - 1); /*0x46d926*/
              if ( (unsigned __int64)((char *)Block[0] - (char *)v13 - 8) > 0x1F ) /*0x46d935*/
                invoke_watson(0, 0, 0, 0, 0); /*0x46d946*/
            }
            j_j_free(v13); /*0x46d950*/
          }
          if ( v12 >= 100 ) /*0x46d958*/
            goto LABEL_31; /*0x46d958*/
          *(_OWORD *)Block = 0; /*0x46d961*/
          v27 = 0; /*0x46d965*/
          v28 = 0; /*0x46d969*/
          Block[0] = (void *)sub_3C460(32); /*0x46d977*/
          v27 = 21; /*0x46d97b*/
          v28 = 31; /*0x46d983*/
          strcpy((char *)Block[0], "geometry.ach.secret11"); /*0x46d992*/
          sub_274AD0(v9, Block); /*0x46d9b3*/
          v15 = AchievementManager_sharedState(v14); /*0x46d9b8*/
          v16 = "geometry.ach.secret11"; /*0x46d9bd*/
        }
        else
        {
          if ( (_DWORD)v8 != 50 ) /*0x46d9cc*/
            goto LABEL_31; /*0x46d9cc*/
          v17 = qword_905FD0; /*0x46d9d2*/
          if ( !qword_905FD0 ) /*0x46d9dc*/
          {
            v25 = operator new(0x6E8u); /*0x46d9e8*/
            qword_905FD0 = sub_2723A0(v25); /*0x46d9f5*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x46da06*/
            v17 = qword_905FD0; /*0x46da08*/
          }
          v18 = AchievementManager_sharedState(v8); /*0x46da14*/
          *(_OWORD *)Block = 0; /*0x46da1a*/
          v27 = 0; /*0x46da20*/
          v28 = 0; /*0x46da24*/
          Block[0] = (void *)sub_3C460(32); /*0x46da32*/
          v27 = 21; /*0x46da36*/
          v28 = 31; /*0x46da3e*/
          strcpy((char *)Block[0], "geometry.ach.secret12"); /*0x46da4d*/
          v19 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v18 + 352), Block); /*0x46da72*/
          v20 = cocos2d::CCString::intValue(v19); /*0x46da81*/
          if ( v28 > 0xF ) /*0x46da8b*/
          {
            v21 = Block[0]; /*0x46da90*/
            if ( v28 + 1 >= 0x1000 ) /*0x46da9e*/
            {
              v21 = (void *)*((_QWORD *)Block[0] - 1); /*0x46daa4*/
              if ( (unsigned __int64)((char *)Block[0] - (char *)v21 - 8) > 0x1F ) /*0x46dab3*/
                invoke_watson(0, 0, 0, 0, 0); /*0x46dac4*/
            }
            j_j_free(v21); /*0x46dace*/
          }
          if ( v20 >= 100 ) /*0x46dad6*/
            goto LABEL_31; /*0x46dad6*/
          *(_OWORD *)Block = 0; /*0x46dadb*/
          v27 = 0; /*0x46dadf*/
          v28 = 0; /*0x46dae3*/
          Block[0] = (void *)sub_3C460(32); /*0x46daf1*/
          v27 = 21; /*0x46daf5*/
          v28 = 31; /*0x46dafd*/
          strcpy((char *)Block[0], "geometry.ach.secret12"); /*0x46db0c*/
          sub_274AD0(v17, Block); /*0x46db2d*/
          v15 = AchievementManager_sharedState(v22); /*0x46db32*/
          v16 = "geometry.ach.secret12"; /*0x46db37*/
        }
        GameManager_isColorUnlocked(v15, (__int64)v16, 100); /*0x46db47*/
      }
LABEL_31:
      MenuGameLayer_destroyPlayer(v3); /*0x46db4c*/
    }
  }
  return 1; /*0x46db56*/
}

// [10/10] Address: 0x46db80
// Method: MenuGameLayer::registerWithTouchDispatcher
void __fastcall MenuGameLayer_registerWithTouchDispatcher(__int64 a1)
{
  __int64 v2; // rax
  struct cocos2d::CCTouchDelegate *v3; // rdi
  cocos2d::CCTouchDispatcher *v4; // rax

  v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x46db8d*/
  v3 = (struct cocos2d::CCTouchDelegate *)(a1 + 320); /*0x46db95*/
  if ( !a1 ) /*0x46db9f*/
    v3 = 0; /*0x46db9f*/
  v4 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2); /*0x46dbb0*/
  cocos2d::CCTouchDispatcher::addTargetedDelegate(v4, v3, 1, 1); /*0x46dbcc*/
}

// Address: 0x46b8b0
// Method: MenuGameLayer::init
// Hidden C++ exception states: #wind=21
bool __fastcall MenuGameLayer_init(__int64 a1)
{
  bool result; // al
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rbx
  int v8; // ecx
  int v9; // ebx
  cocos2d::CCString *v10; // rax
  const char *CString; // rax
  struct cocos2d::CCSprite *v12; // rax
  cocos2d::CCTexture2D *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  cocos2d::CCDirector *v19; // rax
  float v20; // xmm0_4
  float v21; // xmm1_4
  __int64 v22; // rcx
  cocos2d::CCObject *v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rbx
  int v28; // r14d
  char v29; // r12
  float v30; // xmm0_4
  __int64 v31; // rax
  cocos2d::CCObject *v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // r15
  void (__fastcall **v37)(__int64, char *); // rdi
  int v38; // eax
  __int64 v39; // rbx
  char *v40; // rax
  __int64 v41; // rdi
  int v42; // eax
  _QWORD *v43; // rbx
  char *v44; // rax
  __int64 v45; // rbx
  float v46; // xmm0_4
  __int64 v47; // rax
  __int64 v48; // rbx
  __int64 v49; // rbx
  __int16 v50[2]; // [rsp+30h] [rbp-29h] BYREF
  __int16 v51; // [rsp+34h] [rbp-25h] BYREF
  char v52; // [rsp+36h] [rbp-23h]
  void *v53; // [rsp+38h] [rbp-21h] BYREF
  void *v54; // [rsp+40h] [rbp-19h] BYREF
  char v55[8]; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v56[8]; // [rsp+50h] [rbp-9h] BYREF
  float v57; // [rsp+58h] [rbp-1h]
  _BYTE v58[8]; // [rsp+60h] [rbp+7h] BYREF
  _DWORD v59[4]; // [rsp+68h] [rbp+Fh] BYREF

  result = cocos2d::CCLayer::init((cocos2d::CCLayer *)a1);
  if ( result )
  {
    LOBYTE(v3) = 1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 920LL))(a1, v3);
    v5 = cocos2d::CCDirector::sharedDirector(v4);
    cocos2d::CCDirector::getWinSize(v5, v58);
    v6 = qword_905FD0;
    if ( !qword_905FD0 )
    {
      v54 = operator new(0x6E8u);
      qword_905FD0 = sub_2723A0(v54);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
      v6 = qword_905FD0;
    }
    v7 = v6;
    if ( !v6 )
    {
      v54 = operator new(0x6E8u);
      qword_905FD0 = sub_2723A0(v54);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
      v6 = qword_905FD0;
    }
    v8 = 59;
    if ( *(int *)(v7 + 1012) < 59 )
      v8 = *(_DWORD *)(v7 + 1012);
    v9 = 1;
    if ( v8 > 1 )
      v9 = v8;
    GameManager_loadBackground(v6, v9);
    v10 = cocos2d::CCString::createWithFormat("game_bg_%02d_001.png", v9);
    CString = cocos2d::CCString::getCString(v10);
    v12 = cocos2d::CCSprite::create(CString);
    *(_QWORD *)(a1 + 440) = v12;
    v59[0] = 9729;
    v59[1] = 9729;
    v59[2] = 10497;
    v59[3] = 10497;
    v13 = (cocos2d::CCTexture2D *)(*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v12 + 43) + 16LL))((__int64)v12 + 344);
    cocos2d::CCTexture2D::setTexParameters(v13, (struct cocos2d::_ccTexParams *)v59);
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 456LL))(a1, *(_QWORD *)(a1 + 440), 4294967196LL);
    v14 = **(_QWORD **)(a1 + 440);
    v15 = *(_QWORD *)(a1 + 440);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v54, 0.0, 0.0);
    (*(void (__fastcall **)(__int64, __int64))(v14 + 288))(v15, v16);
    cocos2d::CCApplication::sharedApplication(v17);
    v19 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v18);
    cocos2d::CCDirector::getScreenScaleFactorMax(v19);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 440) + 160LL))(*(_QWORD *)(a1 + 440));
    v50[0] = 26112;
    v51 = 26112;
    v52 = -1;
    ++*(_DWORD *)(a1 + 420);
    (**(void (__fastcall ***)(__int64, __int16 *))(*(_QWORD *)(a1 + 440) + 320LL))(*(_QWORD *)(a1 + 440) + 320LL, &v51);
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)v56, (const struct cocos2d::CCRect *)(*(_QWORD *)(a1 + 440) + 424LL));
    v20 = (*(float (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 440) + 168LL))(*(_QWORD *)(a1 + 440));
    v21 = v57;
    *(float *)(a1 + 456) = v20 * v57;
    v57 = v21 * 2.0;
    (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 440) + 992LL))(*(_QWORD *)(a1 + 440), v56);
    v22 = qword_905FD0;
    if ( !qword_905FD0 )
    {
      v54 = operator new(0x6E8u);
      qword_905FD0 = sub_2723A0(v54);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
      v22 = qword_905FD0;
    }
    v23 = GJGroundLayer_create(*(_DWORD *)(v22 + 1016), 1u);
    *(_QWORD *)(a1 + 448) = v23;
    (*(void (__fastcall **)(__int64, cocos2d::CCObject *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v23, 100);
    v24 = **(_QWORD **)(a1 + 448);
    v25 = *(_QWORD *)(a1 + 448);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v54, 0.0, 90.0);
    (*(void (__fastcall **)(__int64, __int64))(v24 + 184))(v25, v26);
    v27 = qword_905FD0;
    if ( !qword_905FD0 )
    {
      v53 = operator new(0x6E8u);
      qword_905FD0 = sub_2723A0(v53);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
      v27 = qword_905FD0;
    }
    v28 = *(_DWORD *)(v27 + 880) - *(_DWORD *)(v27 + 884);
    v29 = *(_BYTE *)(v27 + 944);
    *(_DWORD *)(v27 + 888) = 1;
    v30 = (float)((float)rand() / 32767.0) * 1000.0;
    *(_DWORD *)(v27 + 884) = (int)v30;
    *(_DWORD *)(v27 + 880) = (int)v30 + 1;
    v31 = qword_905FD0;
    if ( !qword_905FD0 )
    {
      v53 = operator new(0x6E8u);
      qword_905FD0 = sub_2723A0(v53);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
      v31 = qword_905FD0;
    }
    *(_BYTE *)(v31 + 944) = 0;
    v32 = PlayerObject_create(1, 1, 0, a1, 0);
    *(_QWORD *)(a1 + 432) = v32;
    (*(void (__fastcall **)(__int64, cocos2d::CCObject *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v32, 60);
    PlayerObject_addAllParticles(*(_QWORD *)(a1 + 432));
    v33 = **(_QWORD **)(a1 + 432);
    v34 = *(_QWORD *)(a1 + 432);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v53, 0.0, 105.0);
    (*(void (__fastcall **)(__int64, __int64))(v33 + 184))(v34, v35);
    v36 = qword_905FD0;
    if ( !qword_905FD0 )
    {
      v54 = operator new(0x6E8u);
      qword_905FD0 = sub_2723A0(v54);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
      v36 = qword_905FD0;
    }
    v37 = *(void (__fastcall ***)(__int64, char *))(*(_QWORD *)(a1 + 432) + 320LL);
    v38 = rand();
    v39 = *(_QWORD *)(a1 + 432);
    v40 = GameManager_colorForIdx(v36, (char *)v50, (int)(float)((float)((float)v38 / 32767.0) * 108.0));
    (*v37)(v39 + 320, v40);
    v41 = qword_905FD0;
    if ( !qword_905FD0 )
    {
      v53 = operator new(0x6E8u);
      qword_905FD0 = sub_2723A0(v53);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
      v41 = qword_905FD0;
    }
    v42 = rand();
    v43 = *(_QWORD **)(a1 + 432);
    v44 = GameManager_colorForIdx(v41, v55, (int)(float)((float)((float)v42 / 32767.0) * 108.0));
    PlayerObject_setSecondColor(v43, (__int64)v44);
    sub_4F6EE0(*(_QWORD *)(a1 + 432));
    *(_DWORD *)(*(_QWORD *)(a1 + 432) + 2740LL) = 1056964608;
    v45 = qword_905FD0;
    if ( !qword_905FD0 )
    {
      v53 = operator new(0x6E8u);
      qword_905FD0 = sub_2723A0(v53);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
      v45 = qword_905FD0;
    }
    if ( !*(_BYTE *)(v45 + 1124) )
    {
      *(_BYTE *)(v45 + 1124) = 1;
      PlayerObject_toggleDartMode(*(_QWORD *)(a1 + 432), 1, 0);
      PlayerObject_toggleDartMode(*(_QWORD *)(a1 + 432), 0, 0);
      v45 = qword_905FD0;
    }
    if ( !v45 )
    {
      v53 = operator new(0x6E8u);
      qword_905FD0 = sub_2723A0(v53);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
      v45 = qword_905FD0;
    }
    *(_DWORD *)(v45 + 888) = v28;
    v46 = (float)((float)rand() / 32767.0) * 1000.0;
    *(_DWORD *)(v45 + 884) = (int)v46;
    *(_DWORD *)(v45 + 880) = v28 + (int)v46;
    v47 = qword_905FD0;
    if ( !qword_905FD0 )
    {
      v53 = operator new(0x6E8u);
      qword_905FD0 = sub_2723A0(v53);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
      v47 = qword_905FD0;
    }
    *(_BYTE *)(v47 + 944) = v29;
    cocos2d::CCNode::scheduleUpdate((cocos2d::CCNode *)a1);
    cocos2d::CCNode::schedule(a1, MenuGameLayer_tryJump);
    cocos2d::CCNode::schedule(a1, MenuGameLayer_updateColor);
    MenuGameLayer_updateColor(a1);
    v48 = *(_QWORD *)(a1 + 432);
    cocos2d::CCNode::stopActionByTag(*(cocos2d::CCNode **)(v48 + 1976), 8);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v48 + 1976) + 320LL) + 40LL))(
      *(_QWORD *)(v48 + 1976) + 320LL,
      0);
    v49 = *(_QWORD *)(v48 + 1976);
    cocos2d::CCNode::unschedule(v49, sub_3BC0A0);
    *(_BYTE *)(v49 + 442) = 0;
    cocos2d::CCDrawNode::clear((cocos2d::CCDrawNode *)v49);
    cocos2d::CCArray::removeAllObjects(*(cocos2d::CCArray **)(v49 + 416));
    sub_46CBD0(a1);
    return 1;
  }
  return result;
}
