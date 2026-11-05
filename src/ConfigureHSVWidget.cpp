#include <Geode/binding/ConfigureHSVWidget.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/6] Address: 0x12cf70
// Method: ConfigureHSVWidget::~ConfigureHSVWidget
// Hidden C++ exception states: #wind=1
cocos2d::CCNode *__fastcall ConfigureHSVWidget__dtor_ConfigureHSVWidget(cocos2d::CCNode *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *(_QWORD *)Block = &ConfigureHSVWidget::`vftable'; /*0x12cf86*/
  *((_QWORD *)Block + 40) = &ConfigureHSVWidget::`vftable'; /*0x12cf90*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 52); /*0x12cf97*/
  if ( v4 ) /*0x12cfa1*/
    cocos2d::CCObject::release(v4); /*0x12cfa3*/
  cocos2d::CCNode::~CCNode(Block); /*0x12cfac*/
  if ( (a2 & 1) != 0 ) /*0x12cfb7*/
    j_j_free(Block); /*0x12cfc1*/
  return Block; /*0x12cfc9*/
}

// [2/6] Address: 0x12e1c0
// Method: ConfigureHSVWidget::textInputShouldOffset
__int64 __fastcall ConfigureHSVWidget_textInputShouldOffset(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = sub_12E240(a1 - 320); /*0x12e1d8*/
  if ( result ) /*0x12e1e0*/
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(result + 544) + 24LL))(result + 544, a2); /*0x12e1f2*/
  return result; /*0x12e1f5*/
}

// [3/6] Address: 0x12e200
// Method: ConfigureHSVWidget::textInputReturn
__int64 __fastcall ConfigureHSVWidget_textInputReturn(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = sub_12E240(a1 - 320); /*0x12e210*/
  if ( result ) /*0x12e218*/
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(result + 544) + 32LL))(result + 544, a2); /*0x12e22c*/
  return result; /*0x12e230*/
}

// [4/6] Address: 0x12e690
// Method: ConfigureHSVWidget::sliderChanged
__int64 __fastcall ConfigureHSVWidget_sliderChanged(__int64 a1, __int64 a2)
{
  float Value; // xmm0_4
  int v5; // eax
  int v6; // eax
  cocos2d::CCString *v7; // rax
  float v8; // xmm0_4
  float v9; // xmm0_4
  cocos2d::CCString *v10; // rax
  float v11; // xmm0_4
  float v12; // xmm0_4
  __int64 result; // rax
  __int64 v14; // rcx

  Value = SliderThumb_getValue(a2); /*0x12e6a8*/
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) - 1; /*0x12e6b9*/
  if ( v5 ) /*0x12e6bc*/
  {
    v6 = v5 - 1; /*0x12e6c2*/
    if ( v6 ) /*0x12e6c5*/
    {
      if ( v6 == 1 ) /*0x12e6ca*/
      {
        v7 = cocos2d::CCString::createWithFormat("%0.2f", Value); /*0x12e6e3*/
        v8 = cocos2d::CCString::floatValue(v7); /*0x12e6ec*/
        v9 = v8 + v8; /*0x12e6f9*/
        if ( *(_BYTE *)(a1 + 389) ) /*0x12e6f2*/
          v9 = v9 - 1.0; /*0x12e6ff*/
        *(float *)(a1 + 384) = v9; /*0x12e707*/
      }
    }
    else
    {
      v10 = cocos2d::CCString::createWithFormat("%0.2f", Value); /*0x12e724*/
      v11 = cocos2d::CCString::floatValue(v10); /*0x12e72d*/
      v12 = v11 + v11; /*0x12e73a*/
      if ( *(_BYTE *)(a1 + 388) ) /*0x12e733*/
        v12 = v12 - 1.0; /*0x12e740*/
      *(float *)(a1 + 380) = v12; /*0x12e748*/
    }
  }
  else
  {
    *(float *)(a1 + 376) = (float)(int)(float)((float)(Value * 360.0) - 180.0); /*0x12e76d*/
  }
  ConfigureHSVWidget_updateLabels(a1); /*0x12e778*/
  result = sub_12F300(a1); /*0x12e780*/
  v14 = *(_QWORD *)(a1 + 400); /*0x12e785*/
  if ( v14 ) /*0x12e78f*/
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 8LL))(v14, a1); /*0x12e797*/
  return result; /*0x12e79a*/
}

// [5/6] Address: 0x12e8b0
// Method: ConfigureHSVWidget::onResetHSV
__int64 __fastcall ConfigureHSVWidget_onResetHSV(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  *(_OWORD *)(a1 + 376) = unk_8F8400; /*0x12e8c8*/
  sub_83840(*(_QWORD *)(a1 + 352)); /*0x12e8d6*/
  sub_83840(*(_QWORD *)(a1 + 360)); /*0x12e8ea*/
  sub_83840(*(_QWORD *)(a1 + 368)); /*0x12e8fe*/
  ConfigureHSVWidget_updateLabels(a1); /*0x12e906*/
  result = sub_12F300(a1); /*0x12e90e*/
  v3 = *(_QWORD *)(a1 + 400); /*0x12e913*/
  if ( v3 ) /*0x12e91d*/
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 8LL))(v3, a1); /*0x12e92a*/
  return result; /*0x12e92e*/
}

// Address: 0x12e940
// Method: ConfigureHSVWidget::updateLabels
// Hidden C++ exception states: #wind=3
void __fastcall ConfigureHSVWidget_updateLabels(__int64 a1)
{
  struct cocos2d::CCObject *v2; // r14
  cocos2d::CCString *v3; // rax
  const char *CString; // rax
  __int64 v5; // rbx
  __int64 v6; // r8
  struct cocos2d::CCObject *v7; // r14
  cocos2d::CCString *v8; // rax
  const char *v9; // rax
  __int64 v10; // r8
  struct cocos2d::CCObject *v11; // r14
  cocos2d::CCString *v12; // rax
  const char *v13; // rax
  cocos2d::CCString *v14; // rax
  char *v15; // rax
  size_t v16; // rbx
  size_t v17; // r8
  __int128 *p_Src; // rdx
  float *v19; // rsi
  cocos2d::CCString *v20; // rax
  char *v21; // rax
  size_t v22; // r8
  void **v23; // rdx
  float *v24; // rsi
  cocos2d::CCString *v25; // rax
  char *v26; // rax
  void **v27; // rdx
  void *v28; // rcx
  __m128i v29; // xmm0
  void *v30; // rcx
  void *v31; // rcx
  __int128 Src; // [rsp+38h] [rbp-31h] BYREF
  __m128i si128; // [rsp+48h] [rbp-21h]
  void *Block[2]; // [rsp+58h] [rbp-11h] BYREF
  __m128i v35; // [rsp+68h] [rbp-1h]
  void *v36[2]; // [rsp+78h] [rbp+Fh] BYREF
  __m128i v37; // [rsp+88h] [rbp+1Fh]

  if ( *(_BYTE *)(a1 + 408) )
  {
    *(_BYTE *)(a1 + 409) = 1;
    v2 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 416), 1);
    v3 = cocos2d::CCString::createWithFormat("%.0f", *(float *)(a1 + 376));
    CString = cocos2d::CCString::getCString(v3);
    Src = 0;
    si128 = 0u;
    v5 = -1;
    v6 = -1;
    do
      ++v6;
    while ( CString[v6] );
    sub_3C230(&Src);
    CCTextInputNode_setString(v2, &Src);
    v7 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 416), 2);
    v8 = cocos2d::CCString::createWithFormat("%.2f", *(float *)(a1 + 380));
    v9 = cocos2d::CCString::getCString(v8);
    Src = 0;
    si128 = 0u;
    v10 = -1;
    do
      ++v10;
    while ( v9[v10] );
    sub_3C230(&Src);
    CCTextInputNode_setString(v7, &Src);
    v11 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 416), 3);
    v12 = cocos2d::CCString::createWithFormat("%.2f", *(float *)(a1 + 384));
    v13 = cocos2d::CCString::getCString(v12);
    Src = 0;
    si128 = 0u;
    do
      ++v5;
    while ( v13[v5] );
    sub_3C230(&Src);
    CCTextInputNode_setString(v11, &Src);
    *(_BYTE *)(a1 + 409) = 0;
  }
  else
  {
    Src = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_830F20);
    strcpy((char *)&Src, "Hue: ");
    if ( *(float *)(a1 + 376) > 0.0 )
      sub_43D80(&Src, "+", 1u);
    v14 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, (unsigned int)(int)*(float *)(a1 + 376));
    v15 = (char *)cocos2d::CCString::getCString(v14);
    v16 = -1;
    v17 = -1;
    do
      ++v17;
    while ( v15[v17] );
    sub_43D80(&Src, v15, v17);
    p_Src = &Src;
    if ( si128.m128i_i64[1] > 0xFuLL )
      p_Src = (__int128 *)Src;
    (**(void (__fastcall ***)(__int64, __int128 *))(*(_QWORD *)(a1 + 328) + 360LL))(
      *(_QWORD *)(a1 + 328) + 360LL,
      p_Src);
    v37 = _mm_load_si128((const __m128i *)&xmmword_830F90);
    strcpy((char *)v36, "Saturation: ");
    BYTE5(v36[1]) = 0;
    HIWORD(v36[1]) = 0;
    if ( *(_BYTE *)(a1 + 388) )
    {
      v19 = (float *)(a1 + 380);
      if ( *(float *)(a1 + 380) > 0.0 )
        sub_43D80(v36, "+", 1u);
    }
    else
    {
      sub_43D80(v36, "x", 1u);
      v19 = (float *)(a1 + 380);
    }
    v20 = cocos2d::CCString::createWithFormat("%.02f", *v19);
    v21 = (char *)cocos2d::CCString::getCString(v20);
    v22 = -1;
    do
      ++v22;
    while ( v21[v22] );
    sub_43D80(v36, v21, v22);
    v23 = v36;
    if ( v37.m128i_i64[1] > 0xFuLL )
      v23 = (void **)v36[0];
    (**(void (__fastcall ***)(__int64, void **))(*(_QWORD *)(a1 + 336) + 360LL))(*(_QWORD *)(a1 + 336) + 360LL, v23);
    v35 = _mm_load_si128((const __m128i *)&xmmword_830F90);
    strcpy((char *)Block, "Brightness: ");
    BYTE5(Block[1]) = 0;
    HIWORD(Block[1]) = 0;
    if ( *(_BYTE *)(a1 + 389) )
    {
      v24 = (float *)(a1 + 384);
      if ( *(float *)(a1 + 384) > 0.0 )
        sub_43D80(Block, "+", 1u);
    }
    else
    {
      sub_43D80(Block, "x", 1u);
      v24 = (float *)(a1 + 384);
    }
    v25 = cocos2d::CCString::createWithFormat("%.02f", *v24);
    v26 = (char *)cocos2d::CCString::getCString(v25);
    do
      ++v16;
    while ( v26[v16] );
    sub_43D80(Block, v26, v16);
    v27 = Block;
    if ( v35.m128i_i64[1] > 0xFuLL )
      v27 = (void **)Block[0];
    (**(void (__fastcall ***)(__int64, void **))(*(_QWORD *)(a1 + 344) + 360LL))(*(_QWORD *)(a1 + 344) + 360LL, v27);
    if ( v35.m128i_i64[1] > 0xFuLL )
    {
      v28 = Block[0];
      if ( (unsigned __int64)(v35.m128i_i64[1] + 1) >= 0x1000 )
      {
        v28 = (void *)*((_QWORD *)Block[0] - 1);
        if ( (unsigned __int64)((char *)Block[0] - (char *)v28 - 8) > 0x1F )
          invoke_watson(0, 0, 0, 0, 0);
      }
      j_j_free(v28);
    }
    v29 = _mm_load_si128((const __m128i *)&Size);
    v35 = v29;
    LOBYTE(Block[0]) = 0;
    if ( v37.m128i_i64[1] > 0xFuLL )
    {
      v30 = v36[0];
      if ( (unsigned __int64)(v37.m128i_i64[1] + 1) >= 0x1000 )
      {
        v30 = (void *)*((_QWORD *)v36[0] - 1);
        if ( (unsigned __int64)((char *)v36[0] - (char *)v30 - 8) > 0x1F )
          invoke_watson(0, 0, 0, 0, 0);
      }
      j_j_free(v30);
      v29 = _mm_load_si128((const __m128i *)&Size);
    }
    v37 = v29;
    LOBYTE(v36[0]) = 0;
    if ( si128.m128i_i64[1] > 0xFuLL )
    {
      v31 = (void *)Src;
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
      {
        v31 = *(void **)(Src - 8);
        if ( (unsigned __int64)(Src - (_QWORD)v31 - 8) > 0x1F )
          invoke_watson(0, 0, 0, 0, 0);
      }
      j_j_free(v31);
    }
  }
  *(_BYTE *)(a1 + 392) = 0;
}
