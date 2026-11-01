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
