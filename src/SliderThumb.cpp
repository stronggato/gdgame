#include <Geode/binding/SliderThumb.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x82da0
// Method: SliderThumb::~SliderThumb
cocos2d::CCMenuItemImage *__fastcall SliderThumb__dtor_SliderThumb(cocos2d::CCMenuItemImage *Block, char a2)
{
  cocos2d::CCMenuItemImage::~CCMenuItemImage(Block); /*0x82daf*/
  if ( (a2 & 1) != 0 ) /*0x82db8*/
    j_j_free(Block); /*0x82dc2*/
  return Block; /*0x82dc7*/
}

// [2/4] Address: 0x82e20
// Method: SliderThumb::getRawValue
__m128 __fastcall SliderThumb_getRawValue(float *a1)
{
  __int128 v1; // xmm0
  __int64 (*v3)(void); // rdx
  float *v4; // rax
  float v5; // xmm6_4
  __int128 v6; // xmm7
  float v7; // xmm6_4

  v3 = *(__int64 (**)(void))(*(_QWORD *)a1 + 200LL); /*0x82e3d*/
  if ( *((_BYTE *)a1 + 404) ) /*0x82e26*/
    v4 = (float *)(v3() + 4); /*0x82e48*/
  else
    v4 = (float *)v3(); /*0x82e4e*/
  v5 = *v4; /*0x82e50*/
  *(double *)&v1 = (*(double (__fastcall **)(float *))(*(_QWORD *)a1 + 168LL))(a1); /*0x82e5a*/
  v6 = v1; /*0x82e66*/
  *(float *)&v6 = (float)((float)(*(float *)&v1 * a1[100]) * 0.5) + v5; /*0x82e79*/
  v7 = a1[100]; /*0x82e7d*/
  *(float *)&v6 = *(float *)&v6 / (float)((*(float (__fastcall **)(float *))(*(_QWORD *)a1 + 168LL))(a1) * v7); /*0x82e94*/
  return (__m128)v6; /*0x82e9b*/
}

// [3/4] Address: 0x82eb0
// Method: SliderThumb::getValue
float __fastcall SliderThumb_getValue(float *a1)
{
  float result; // xmm0_4
  float v3; // xmm2_4
  float v4; // xmm3_4
  float v5; // xmm7_4

  LODWORD(result) = SliderThumb_getRawValue(a1).m128_u32[0]; /*0x82ebe*/
  v3 = a1[102]; /*0x82ec3*/
  if ( v3 >= 0.0 ) /*0x82ed1*/
  {
    v4 = a1[103]; /*0x82ed3*/
    if ( v4 > 0.0 && v4 > fabs(result - v3) ) /*0x82ef1*/
      return a1[102]; /*0x82ef3*/
  }
  v5 = a1[104]; /*0x82f06*/
  if ( v5 > 0.0 ) /*0x82f11*/
    return fminf(1.0, fmaxf(0.0, roundf(result / v5) * v5)); /*0x82f2d*/
  return result; /*0x82ef6*/
}

// [4/4] Address: 0x82f50
// Method: SliderThumb::setValue
__int64 __fastcall SliderThumb_setValue(float *a1, float a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  float v6; // xmm6_4
  float *v7; // rbx
  double v8; // xmm0_8
  float v9; // xmm7_4
  float v10; // xmm6_4
  float v11; // xmm7_4
  __int64 v12; // rax
  __int64 v14; // rax
  float v15; // xmm6_4
  float v16; // xmm8_4
  double v17; // xmm0_8
  float v18; // xmm7_4
  float v19; // xmm6_4
  float v20; // xmm7_4
  __int64 v21; // rax
  char v22; // [rsp+70h] [rbp+8h] BYREF

  v3 = *(_QWORD *)a1; /*0x82f64*/
  if ( *((_BYTE *)a1 + 404) ) /*0x82f5a*/
  {
    v4 = (*(__int64 (**)(void))(v3 + 200))(); /*0x82f82*/
    v5 = *(_QWORD *)a1; /*0x82f88*/
    v6 = a1[100]; /*0x82f8e*/
    v7 = (float *)v4; /*0x82f96*/
    v8 = (*(double (__fastcall **)(float *))(*(_QWORD *)a1 + 168LL))(a1); /*0x82f99*/
    v9 = *(float *)&v8 * v6; /*0x82fa5*/
    v10 = a1[100]; /*0x82fa9*/
    v11 = (float)(v9 * a2) /*0x82fd7*/
        - (float)((float)((*(float (__fastcall **)(float *))(*(_QWORD *)a1 + 168LL))(a1) * v10) * 0.5);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, *v7, v11); /*0x82fde*/
    return (*(__int64 (__fastcall **)(float *, __int64))(v5 + 184))(a1, v12); /*0x82fea*/
  }
  else
  {
    v14 = (*(__int64 (**)(void))(v3 + 200))(); /*0x82ffd*/
    v15 = a1[100]; /*0x83003*/
    v16 = *(float *)(v14 + 4); /*0x8300e*/
    v17 = (*(double (__fastcall **)(float *))(*(_QWORD *)a1 + 168LL))(a1); /*0x83017*/
    v18 = *(float *)&v17 * v15; /*0x83026*/
    v19 = a1[100]; /*0x8302a*/
    v20 = (float)(v18 * a2) /*0x83052*/
        - (float)((float)((*(float (__fastcall **)(float *))(*(_QWORD *)a1 + 168LL))(a1) * v19) * 0.5);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, v20, v16); /*0x83059*/
    return (*(__int64 (__fastcall **)(float *, __int64))(v3 + 184))(a1, v21); /*0x83065*/
  }
}
