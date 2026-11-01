#include <Geode/binding/ButtonSprite.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/6] Address: 0x41780
// Method: ButtonSprite::ButtonSprite
// Hidden C++ exception states: #wind=1
__int64 __fastcall ButtonSprite_ButtonSprite(__int64 a1)
{
  cocos2d::CCSprite::CCSprite((cocos2d::CCSprite *)a1); /*0x41792*/
  *(_QWORD *)a1 = &ButtonSprite::`vftable'; /*0x417a0*/
  *(_QWORD *)(a1 + 320) = &ButtonSprite::`vftable'; /*0x417aa*/
  *(_QWORD *)(a1 + 344) = &ButtonSprite::`vftable'; /*0x417b8*/
  *(_QWORD *)(a1 + 600) = 0; /*0x417c1*/
  *(_QWORD *)(a1 + 608) = 0; /*0x417c8*/
  *(_DWORD *)(a1 + 616) = 0; /*0x417cf*/
  *(_DWORD *)(a1 + 620) = 1065353216; /*0x417d5*/
  *(_BYTE *)(a1 + 624) = 0; /*0x417df*/
  *(_QWORD *)(a1 + 632) = 0; /*0x417e6*/
  *(_QWORD *)(a1 + 640) = 0; /*0x417ed*/
  *(_QWORD *)(a1 + 648) = 0; /*0x417f4*/
  *(_QWORD *)(a1 + 656) = 0; /*0x417fb*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(a1 + 664)); /*0x41809*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(a1 + 672)); /*0x41816*/
  *(_OWORD *)(a1 + 680) = 0; /*0x4181f*/
  *(_QWORD *)(a1 + 696) = 0; /*0x41826*/
  *(_QWORD *)(a1 + 704) = 15; /*0x4182d*/
  *(_BYTE *)(a1 + 680) = 0; /*0x41838*/
  return a1; /*0x41842*/
}

// [2/6] Address: 0x41850
// Method: ButtonSprite::~ButtonSprite
cocos2d::CCSprite *__fastcall ButtonSprite__dtor_ButtonSprite(cocos2d::CCSprite *Block, char a2)
{
  sub_3C310((char *)Block + 680); /*0x41866*/
  cocos2d::CCSprite::~CCSprite(Block); /*0x4186e*/
  if ( (a2 & 1) != 0 ) /*0x41877*/
    j_j_free(Block); /*0x41881*/
  return Block; /*0x41886*/
}

// [3/6] Address: 0x418a0
// Method: ButtonSprite::create_0
// Hidden C++ exception states: #wind=1
cocos2d::CCObject *__fastcall ButtonSprite_create_0(int a1, int a2, __int64 a3, float a4, int a5)
{
  cocos2d::CCObject *v7; // rbx
  int v8; // r9d
  void *v10; // [rsp+50h] [rbp-28h]

  v10 = operator new(0x2C8u); /*0x418c6*/
  v7 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite((__int64)v10); /*0x418d3*/
  if ( v7 ) /*0x418d9*/
  {
    if ( (unsigned __int8)sub_41960((_DWORD)v7, a1, a2, v8, LODWORD(a4), a5) ) /*0x41921*/
    {
      cocos2d::CCObject::autorelease(v7); /*0x4192d*/
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v7 + 8LL))(v7, 1); /*0x4193d*/
      return 0; /*0x41940*/
    }
  }
  return v7; /*0x41945*/
}

// [4/6] Address: 0x41be0
// Method: ButtonSprite::create
// Hidden C++ exception states: #wind=1
cocos2d::CCObject *__fastcall ButtonSprite_create(
        int a1,
        int a2,
        int a3,
        float a4,
        char a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  cocos2d::CCObject *v11; // rbx
  void *v13; // [rsp+50h] [rbp-28h]

  v13 = operator new(0x2C8u); /*0x41c0e*/
  v11 = (cocos2d::CCObject *)ButtonSprite_ButtonSprite((__int64)v13); /*0x41c1b*/
  if ( v11 ) /*0x41c21*/
  {
    if ( (unsigned __int8)ButtonSprite_init((_DWORD)v11, a1, a2, a3, LODWORD(a4), a5, a6, a7, a8) ) /*0x41c6a*/
    {
      cocos2d::CCObject::autorelease(v11); /*0x41c76*/
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v11 + 8LL))(v11, 1); /*0x41c86*/
      return 0; /*0x41c89*/
    }
  }
  return v11; /*0x41c8e*/
}

// [5/6] Address: 0x41cb0
// Method: ButtonSprite::init
// Hidden C++ exception states: #wind=1
bool __fastcall ButtonSprite_init(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        char a6,
        const char *a7,
        __int64 a8,
        int a9)
{
  bool result; // al
  __int64 v14; // rax
  __int64 v15; // r8
  void **v16; // rcx
  char *v17; // rsi
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rbp
  size_t v20; // r8
  int v21; // ebx
  char *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  struct cocos2d::CCLabelBMFont *v25; // rax
  __int64 v26; // rax
  __int64 *v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rax
  char v30[8]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD Buf2[4]; // [rsp+40h] [rbp-88h] BYREF
  void *Buf1[2]; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v33; // [rsp+70h] [rbp-58h]
  unsigned __int64 v34; // [rsp+78h] [rbp-50h]

  result = cocos2d::CCSprite::init((cocos2d::CCSprite *)a1); /*0x41cfa*/
  if ( result ) /*0x41d02*/
  {
    *(_DWORD *)(a1 + 600) = 1; /*0x41d08*/
    *(float *)(a1 + 604) = (float)a3; /*0x41d1a*/
    *(float *)(a1 + 608) = (float)a4; /*0x41d2a*/
    *(_DWORD *)(a1 + 612) = a5; /*0x41d3c*/
    *(_BYTE *)(a1 + 624) = a6; /*0x41d4d*/
    *(_DWORD *)(a1 + 616) = a9; /*0x41d5d*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v30, 0.0, 2.0); /*0x41d76*/
    cocos2d::CCPoint::operator=(a1 + 664, v14); /*0x41d86*/
    Buf2[2] = 11; /*0x41d99*/
    Buf2[3] = 15; /*0x41d9e*/
    Buf2[0] = 0x2E746E6F46676962LL; /*0x41daf*/
    Buf2[1] = 7630438; /*0x41dbc*/
    *(_OWORD *)Buf1 = 0; /*0x41dd4*/
    v33 = 0; /*0x41ddb*/
    v34 = 0; /*0x41de0*/
    v15 = -1; /*0x41de5*/
    do /*0x41df3*/
      ++v15; /*0x41df0*/
    while ( a7[v15] ); /*0x41df3*/
    sub_3C230(Buf1); /*0x41e01*/
    v16 = Buf1; /*0x41e06*/
    v17 = (char *)Buf1[0]; /*0x41e0b*/
    v18 = v34; /*0x41e10*/
    if ( v34 > 0xF ) /*0x41e19*/
      v16 = (void **)Buf1[0]; /*0x41e19*/
    v19 = v33; /*0x41e1d*/
    v20 = v33; /*0x41e22*/
    if ( v33 > 0xB ) /*0x41e29*/
      v20 = 11; /*0x41e29*/
    v21 = memcmp(v16, Buf2, v20); /*0x41e37*/
    if ( !v21 ) /*0x41e3b*/
    {
      if ( v19 >= 0xB ) /*0x41e41*/
        v21 = v19 > 0xB; /*0x41e50*/
      else
        v21 = -1; /*0x41e43*/
    }
    if ( v18 > 0xF ) /*0x41e57*/
    {
      v22 = v17; /*0x41e5d*/
      if ( v18 + 1 >= 0x1000 ) /*0x41e67*/
      {
        v17 = (char *)*((_QWORD *)v17 - 1); /*0x41e6d*/
        if ( (unsigned __int64)(v22 - v17 - 8) > 0x1F ) /*0x41e7c*/
          invoke_watson(0, 0, 0, 0, 0); /*0x41e91*/
      }
      j_j_free(v17); /*0x41e9b*/
    }
    if ( !v21 ) /*0x41ea3*/
    {
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v30, 0.0, 2.0); /*0x41eb5*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)Buf1, -1.0, *(float *)(v23 + 4)); /*0x41ecd*/
      cocos2d::CCPoint::operator=(a1 + 664, v24); /*0x41edd*/
    }
    v25 = cocos2d::CCLabelBMFont::create(&byte_6E86E0, a7); /*0x41eed*/
    *(_QWORD *)(a1 + 632) = v25; /*0x41ef3*/
    (*(void (__fastcall **)(__int64, struct cocos2d::CCLabelBMFont *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v25, 1); /*0x41f10*/
    cocos2d::CCRect::CCRect((cocos2d::CCRect *)Buf1, 0.0, 0.0, 40.0, 40.0); /*0x41f2c*/
    v27 = (__int64 *)cocos2d::extension::CCScale9Sprite::create(a8, v26); /*0x41f40*/
    *(_QWORD *)(a1 + 656) = v27; /*0x41f43*/
    v28 = *v27; /*0x41f4a*/
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)Buf1, 16.0, 16.0); /*0x41f5d*/
    (*(void (__fastcall **)(__int64 *, __int64))(v28 + 312))(v27, v29); /*0x41f69*/
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 456LL))(a1, *(_QWORD *)(a1 + 656), 0); /*0x41f7f*/
    ButtonSprite_setString(a1, a2); /*0x41f8b*/
    return 1; /*0x41f90*/
  }
  return result; /*0x41f92*/
}

// [6/6] Address: 0x42550
// Method: ButtonSprite::setString
_UNKNOWN **__fastcall ButtonSprite_setString(__int64 *a1, void *a2)
{
  _UNKNOWN **result; // rax
  size_t v5; // r8
  float v6; // xmm6_4
  float v7; // xmm7_4
  __int64 v8; // rbx
  float *v9; // rax
  float v10; // xmm6_4
  __int64 v11; // rbx
  float v12; // xmm6_4
  double v13; // xmm0_8
  float v14; // xmm2_4
  __int64 *v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rsi
  float *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rax
  float *v24; // rbx
  __int64 *v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rax
  float *v29; // rbx
  __int64 *v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 *v35; // rdi
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdi
  float *v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 *v43; // rdi
  __int64 v44; // rbx
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF
  char v46; // [rsp+70h] [rbp+8h] BYREF

  result = &retaddr; /*0x42550*/
  if ( *((_DWORD *)a1 + 150) == 1 ) /*0x4256a*/
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1[79] + 160LL))(a1[79]); /*0x42597*/
    (**(void (__fastcall ***)(__int64, void *))(a1[79] + 360))(a1[79] + 360, a2); /*0x425b1*/
    v5 = -1; /*0x425b3*/
    do /*0x425c3*/
      ++v5; /*0x425c0*/
    while ( *((_BYTE *)a2 + v5) ); /*0x425c3*/
    sub_3F5A0(a1 + 85, a2, v5); /*0x425d4*/
    v6 = *((float *)a1 + 151); /*0x425d9*/
    if ( v6 > 0.0 && *(float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1[79] + 320LL))(a1[79]) > v6 ) /*0x42603*/
    {
      (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1[79] + 320LL))(a1[79]); /*0x4260f*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1[79] + 160LL))(a1[79]); /*0x4262c*/
    }
    if ( *((float *)a1 + 153) > (*(float (__fastcall **)(__int64))(*(_QWORD *)a1[79] + 168LL))(a1[79]) ) /*0x4264e*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1[79] + 168LL))(a1[79]); /*0x4265a*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1[79] + 160LL))(a1[79]); /*0x4266d*/
    if ( *((_BYTE *)a1 + 624) ) /*0x42673*/
    {
      v7 = *((float *)a1 + 151); /*0x4267d*/
    }
    else
    {
      v8 = a1[79]; /*0x42688*/
      v9 = (float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 320LL))(v8); /*0x42695*/
      v7 = *((float *)a1 + 152); /*0x4269b*/
      v10 = *v9; /*0x426a7*/
      if ( v7 <= (float)((*(float (__fastcall **)(__int64))(*(_QWORD *)v8 + 168LL))(v8) * v10) ) /*0x426bb*/
      {
        v11 = a1[79]; /*0x426bd*/
        v12 = *(float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 320LL))(v11); /*0x426d3*/
        v13 = (*(double (__fastcall **)(__int64))(*(_QWORD *)v11 + 168LL))(v11); /*0x426da*/
        v7 = *(float *)&v13 * v12; /*0x426e3*/
      }
    }
    v14 = *(float *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1[79] + 320LL))(a1[79]) + 4) + 4.0; /*0x42709*/
    if ( *((float *)a1 + 154) != 0.0 ) /*0x42719*/
      v14 = *((float *)a1 + 154); /*0x4271b*/
    v15 = (__int64 *)a1[82]; /*0x42726*/
    v16 = *v15; /*0x42732*/
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v46, v7 + 16.0, v14); /*0x42738*/
    (*(void (__fastcall **)(__int64 *, __int64))(v16 + 312))(v15, v17); /*0x42744*/
    v18 = a1[82]; /*0x4274a*/
    v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 320LL))(v18); /*0x42757*/
    v20 = *a1; /*0x42763*/
    v21 = (float *)v19; /*0x42766*/
    v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 320LL))(v18); /*0x42769*/
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v46, *v21, *(float *)(v22 + 4)); /*0x4277d*/
    (*(void (__fastcall **)(__int64 *, __int64))(v20 + 312))(a1, v23); /*0x42789*/
    v24 = (float *)(*(__int64 (__fastcall **)(__int64 *))(*a1 + 320))(a1); /*0x4279e*/
    v25 = (__int64 *)a1[79]; /*0x427a1*/
    v26 = *v25; /*0x427b2*/
    v27 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 320))(a1); /*0x427b5*/
    cocos2d::CCPoint::CCPoint( /*0x427e7*/
      (cocos2d::CCPoint *)&v46,
      (float)(*v24 * 0.5) + *((float *)a1 + 166),
      (float)(*(float *)(v27 + 4) * 0.5) + *((float *)a1 + 167));
    (*(void (__fastcall **)(__int64 *, __int64))(v26 + 184))(v25, v28); /*0x427f3*/
    v29 = (float *)(*(__int64 (__fastcall **)(__int64 *))(*a1 + 320))(a1); /*0x42808*/
    v30 = (__int64 *)a1[82]; /*0x4280b*/
    v31 = *v30; /*0x4281c*/
    v32 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 320))(a1); /*0x4281f*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v46, *v29 * 0.5, *(float *)(v32 + 4) * 0.5); /*0x42837*/
    (*(void (__fastcall **)(__int64 *, __int64))(v31 + 184))(v30, v33); /*0x42843*/
    if ( (*(__int64 (__fastcall **)(__int64 *))(*a1 + 504))(a1) ) /*0x4284f*/
    {
      v34 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 504))(a1); /*0x4286e*/
      if ( _RTDynamicCast( /*0x4288f*/
             v34,
             0,
             &cocos2d::CCNode `RTTI Type Descriptor',
             &CCMenuItemSpriteExtra `RTTI Type Descriptor',
             0) )
      {
        v35 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(*a1 + 504))(a1); /*0x428a8*/
        v36 = *v35; /*0x428ab*/
        v37 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 320))(a1); /*0x428b8*/
        (*(void (__fastcall **)(__int64 *, __int64))(v36 + 312))(v35, v37); /*0x428c0*/
        v38 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 320))(a1); /*0x428cc*/
        v39 = *a1; /*0x428d2*/
        v40 = (float *)v38; /*0x428d8*/
        v41 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 320))(a1); /*0x428db*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v46, *v40 * 0.5, *(float *)(v41 + 4) * 0.5); /*0x428f7*/
        (*(void (__fastcall **)(__int64 *, __int64))(v39 + 184))(a1, v42); /*0x42903*/
      }
    }
    v43 = (__int64 *)a1[79]; /*0x42909*/
    v44 = *v43; /*0x42913*/
    (*(void (__fastcall **)(__int64 *))(*v43 + 168))(v43); /*0x42916*/
    return (_UNKNOWN **)(*(__int64 (__fastcall **)(__int64 *))(v44 + 160))(v43); /*0x4292b*/
  }
  return result; /*0x4293e*/
}
