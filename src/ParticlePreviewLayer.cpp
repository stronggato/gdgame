#include <Geode/binding/ParticlePreviewLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x5bc400
// Method: ParticlePreviewLayer::~ParticlePreviewLayer
cocos2d::CCLayerColor *__fastcall ParticlePreviewLayer__dtor_ParticlePreviewLayer(
        cocos2d::CCLayerColor *Block,
        char a2)
{
  cocos2d::CCLayerColor::~CCLayerColor(Block); /*0x5bc40f*/
  if ( (a2 & 1) != 0 ) /*0x5bc418*/
    j_j_free(Block); /*0x5bc422*/
  return Block; /*0x5bc427*/
}

// [2/3] Address: 0x5c6380
// Method: ParticlePreviewLayer::visit
void __fastcall ParticlePreviewLayer_visit(cocos2d::CCNode *a1)
{
  float *v2; // rbx
  double v3; // xmm0_8
  float v4; // xmm7_4
  double v5; // xmm0_8
  __int64 v6; // rax
  __int64 v7; // rax
  _BYTE v8[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v9[16]; // [rsp+40h] [rbp-38h] BYREF

  v2 = (float *)(*(__int64 (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)a1 + 296LL))(a1); /*0x5c63a6*/
  v3 = (*(double (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)a1 + 144LL))(a1); /*0x5c63a9*/
  v4 = *(float *)&v3 * 180.0; /*0x5c63b5*/
  v5 = (*(double (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)a1 + 128LL))(a1); /*0x5c63c7*/
  v6 = (*(__int64 (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)a1 + 296LL))(a1); /*0x5c63da*/
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v8, *v2 * -120.0, *(float *)(v6 + 4) * -180.0, *(float *)&v5 * 120.0, v4); /*0x5c6407*/
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v9, (const struct cocos2d::CCRect *)v8); /*0x5c6417*/
  sub_6C9A0(a1, v7); /*0x5c6423*/
  cocos2d::CCNode::visit(a1); /*0x5c642b*/
  glDisable(0xC11u); /*0x5c6436*/
}

// [3/3] Address: 0x5c6460
// Method: ParticlePreviewLayer::draw
void __fastcall ParticlePreviewLayer_draw(__int64 a1)
{
  int v2; // edx
  bool v3; // cl
  bool v4; // bp
  bool v5; // si
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  const struct cocos2d::CCPoint *v13; // rax
  __int64 v14; // rax
  const struct cocos2d::CCPoint *v15; // r8
  const struct cocos2d::CCPoint *v16; // rax
  double v17; // xmm0_8
  float v18; // xmm7_4
  double v19; // xmm0_8
  float v20; // xmm8_4
  float v21; // xmm6_4
  __int64 v22; // rax
  const struct cocos2d::CCPoint *v23; // r8
  float v24; // xmm6_4
  cocos2d *v25; // rax
  const struct cocos2d::CCPoint *v26; // rdx
  double v27; // xmm0_8
  float v28; // xmm8_4
  float v29; // xmm7_4
  float v30; // xmm7_4
  double v31; // xmm0_8
  float v32; // xmm10_4
  cocos2d *v33; // rax
  const struct cocos2d::CCPoint *v34; // rdx
  double v35; // xmm0_8
  cocos2d *v36; // rax
  const struct cocos2d::CCPoint *v37; // rdx
  char v38; // [rsp+E0h] [rbp+8h] BYREF
  char v39; // [rsp+E8h] [rbp+10h] BYREF
  char v40; // [rsp+F0h] [rbp+18h] BYREF
  char v41; // [rsp+F8h] [rbp+20h] BYREF

  cocos2d::CCLayerColor::draw((cocos2d::CCLayerColor *)a1); /*0x5c646c*/
  v2 = *(_DWORD *)(a1 + 544); /*0x5c6472*/
  v3 = v2 == 1 || *(_DWORD *)(a1 + 548) == 1; /*0x5c648a*/
  v4 = v2 == 2 || *(_DWORD *)(a1 + 548) == 2; /*0x5c64a7*/
  v5 = v2 == 3 || *(_DWORD *)(a1 + 548) == 3; /*0x5c64c5*/
  if ( *(_BYTE *)(a1 + 560) ) /*0x5c64c8*/
  {
    if ( v3 ) /*0x5c64f6*/
    {
      cocos2d::ccDrawColor4B(0, 0xFFu, 0, 0xFFu); /*0x5c6510*/
      v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 552) + 944LL))(*(_QWORD *)(a1 + 552)); /*0x5c6520*/
      cocos2d::CCPoint::operator-(v6, &v38); /*0x5c6531*/
      v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 552) + 200LL))(*(_QWORD *)(a1 + 552)); /*0x5c6541*/
      cocos2d::CCPoint::operator+(v7, &v40, &v38); /*0x5c655a*/
      v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 552) + 944LL))(*(_QWORD *)(a1 + 552)); /*0x5c6577*/
      v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 552) + 200LL))(*(_QWORD *)(a1 + 552)); /*0x5c657d*/
      cocos2d::CCPoint::operator+(v9, &v39, v8); /*0x5c6591*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v38, (const struct cocos2d::CCPoint *)&v39); /*0x5c65a7*/
      v11 = v10; /*0x5c65b5*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v41, (const struct cocos2d::CCPoint *)&v40); /*0x5c65c0*/
      cocos2d::ccDrawRect(v12, v11); /*0x5c65cc*/
    }
    if ( v4 ) /*0x5c65dd*/
    {
      cocos2d::ccDrawColor4B(0, 0xFFu, 0xFFu, 0xFFu); /*0x5c65f0*/
      v13 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 552) + 200LL))(*(_QWORD *)(a1 + 552)); /*0x5c6600*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v38, v13); /*0x5c6611*/
      v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 552) + 1032LL))(*(_QWORD *)(a1 + 552)); /*0x5c6621*/
      cocos2d::CCPoint::operator*(v14, &v39); /*0x5c663a*/
      cocos2d::CCPoint::operator+(&v38, &v40, &v39); /*0x5c6658*/
      cocos2d::ccDrawLine((cocos2d *)&v38, (const struct cocos2d::CCPoint *)&v40, v15); /*0x5c666e*/
    }
    if ( v5 ) /*0x5c6677*/
    {
      cocos2d::ccDrawColor4B((cocos2d *)((char *)&loc_FD + 2), 0xFFu, 0, 0xFFu); /*0x5c668a*/
      v16 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 552) + 200LL))(*(_QWORD *)(a1 + 552)); /*0x5c669a*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v38, v16); /*0x5c66ab*/
      v17 = (*(double (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 552) + 1048LL))(*(_QWORD *)(a1 + 552)); /*0x5c66bb*/
      v18 = *(float *)&v17 * 0.25; /*0x5c66cb*/
      v19 = (*(double (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 552) + 992LL))(*(_QWORD *)(a1 + 552)); /*0x5c66d6*/
      v20 = *(float *)&v19 * 0.017453292; /*0x5c66e9*/
      v21 = sinf(*(float *)&v19 * 0.017453292) * v18; /*0x5c66fe*/
      *(float *)&v19 = cosf(v20) * v18; /*0x5c6707*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v40, *(float *)&v19, v21); /*0x5c6719*/
      cocos2d::CCPoint::operator+(&v38, &v39, v22); /*0x5c6732*/
      cocos2d::ccDrawLine((cocos2d *)&v38, (const struct cocos2d::CCPoint *)&v39, v23); /*0x5c6748*/
      v24 = 180.0; /*0x5c6765*/
      if ( fabs(COERCE_FLOAT(COERCE_UNSIGNED_INT64((*(double (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 552) + 1008LL))(*(_QWORD *)(a1 + 552))))) <= 180.0 ) /*0x5c6770*/
        v24 = fabs(COERCE_FLOAT(COERCE_UNSIGNED_INT64((*(double (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 552) + 1008LL))(*(_QWORD *)(a1 + 552))))); /*0x5c6785*/
      v25 = (cocos2d *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 552) + 200LL))(*(_QWORD *)(a1 + 552)); /*0x5c67af*/
      cocos2d::ccDrawCircleSegment( /*0x5c67e8*/
        v25,
        v26,
        v20 - (float)((float)((float)(v24 * 0.017453292) + (float)(v24 * 0.017453292)) * 0.5),
        (float)(v24 * 0.017453292) + (float)(v24 * 0.017453292),
        COERCE_FLOAT(20),
        0,
        0,
        1.0);
    }
  }
  else if ( v3 || v4 || v5 ) /*0x5c67ff*/
  {
    v27 = (*(double (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 552) + 992LL))(*(_QWORD *)(a1 + 552)); /*0x5c6821*/
    v28 = (float)-*(float *)&v27 * 0.017453292; /*0x5c6842*/
    v29 = 180.0; /*0x5c6857*/
    if ( fabs(COERCE_FLOAT(COERCE_UNSIGNED_INT64((*(double (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 552) + 1008LL))(*(_QWORD *)(a1 + 552))))) <= 180.0 ) /*0x5c6862*/
      v29 = fabs(COERCE_FLOAT(COERCE_UNSIGNED_INT64((*(double (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 552) + 1008LL))(*(_QWORD *)(a1 + 552))))); /*0x5c6877*/
    v30 = (float)(v29 * 0.017453292) + (float)(v29 * 0.017453292); /*0x5c688e*/
    cocos2d::ccDrawColor4B(0, 0xFFu, 0, 0xFFu); /*0x5c6892*/
    v31 = (*(double (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 552) + 1160LL))(*(_QWORD *)(a1 + 552)); /*0x5c68a2*/
    v32 = v30 * 0.5; /*0x5c68c1*/
    if ( *(float *)&v31 > 0.0 ) /*0x5c68ca*/
    {
      v33 = (cocos2d *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 552) + 200LL))(*(_QWORD *)(a1 + 552)); /*0x5c68f9*/
      cocos2d::ccDrawCircleSegment( /*0x5c6927*/
        v33,
        v34,
        (float)((float)-v28 - v32) + 3.141592653589793,
        v30,
        COERCE_FLOAT(36),
        0,
        0,
        1.0);
    }
    cocos2d::ccDrawColor4B((cocos2d *)((char *)&loc_FD + 2), 0x96u, 0, 0xFFu); /*0x5c6939*/
    v35 = (*(double (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 552) + 1192LL))(*(_QWORD *)(a1 + 552)); /*0x5c6949*/
    if ( *(float *)&v35 > 0.0 ) /*0x5c695d*/
    {
      v36 = (cocos2d *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 552) + 200LL))(*(_QWORD *)(a1 + 552)); /*0x5c698a*/
      cocos2d::ccDrawCircleSegment( /*0x5c69b8*/
        v36,
        v37,
        (float)((float)-v28 - v32) + 3.141592653589793,
        v30,
        COERCE_FLOAT(36),
        0,
        0,
        1.0);
    }
  }
}
