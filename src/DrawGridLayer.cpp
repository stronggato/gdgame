#include <Geode/binding/DrawGridLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x1f31e0
// Method: DrawGridLayer::loadTimeMarkers
// Hidden C++ exception states: #wind=3
cocos2d::CCArray *__fastcall DrawGridLayer_loadTimeMarkers(__int64 a1)
{
  __int64 v2; // rcx
  cocos2d::CCArray *v3; // r14
  __int64 v4; // rcx
  struct cocos2d::CCArray *v5; // rsi
  __int64 v6; // rcx
  signed int v7; // r15d
  signed int i; // ebx
  cocos2d::CCString *v9; // rax
  unsigned int v10; // edi
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  __int64 v13; // r8
  struct cocos2d::CCObject *v14; // rax
  cocos2d::CCObject *v15; // rax
  const struct cocos2d::CCPoint *v16; // rax
  const struct cocos2d::CCPoint *v17; // rsi
  int v18; // eax
  __int64 v19; // r8
  cocos2d::CCObject *v20; // rdi
  __int64 v21; // rdx
  struct cocos2d::CCObject *v22; // rbx
  __int64 v23; // rax
  const struct cocos2d::CCPoint *v24; // rax
  const struct cocos2d::CCPoint *v25; // rsi
  int v26; // eax
  __int64 v27; // r8
  cocos2d::CCObject *v28; // rdi
  __int64 v29; // rdx
  struct cocos2d::CCObject *v30; // rbx
  __int64 v31; // rax
  const struct cocos2d::CCPoint *v32; // rax
  const struct cocos2d::CCPoint *v33; // rsi
  int v34; // eax
  __int64 v35; // r8
  cocos2d::CCObject *v36; // rdi
  __int64 v37; // rdx
  struct cocos2d::CCObject *v38; // rbx
  __int64 v39; // rax
  const struct cocos2d::CCPoint *v40; // rax
  const struct cocos2d::CCPoint *v41; // rsi
  int v42; // eax
  __int64 v43; // r8
  cocos2d::CCObject *v44; // rdi
  __int64 v45; // rdx
  struct cocos2d::CCObject *v46; // rbx
  __int64 v47; // rax
  void *v49; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE v50[8]; // [rsp+58h] [rbp-C0h] BYREF
  __int128 v51; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v52; // [rsp+70h] [rbp-A8h]
  __int64 v53; // [rsp+78h] [rbp-A0h]
  _QWORD v54[4]; // [rsp+80h] [rbp-98h] BYREF

  cocos2d::CCArray::removeAllObjects(*(cocos2d::CCArray **)(a1 + 1408)); /*0x1f3228*/
  v3 = (cocos2d::CCArray *)cocos2d::CCArray::create(v2); /*0x1f3234*/
  v4 = qword_905FD0; /*0x1f3237*/
  if ( !qword_905FD0 ) /*0x1f3241*/
  {
    v49 = operator new(0x6E8u); /*0x1f324d*/
    qword_905FD0 = sub_2723A0(v49); /*0x1f325b*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1f326c*/
    v4 = qword_905FD0; /*0x1f326e*/
  }
  v5 = cocos2d::CCDictionary::allKeys(*(cocos2d::CCDictionary **)(v4 + 464)); /*0x1f3282*/
  if ( cocos2d::CCArray::count(v5) ) /*0x1f3288*/
    qsort(*(void **)(*((_QWORD *)v5 + 7) + 16LL), **((unsigned int **)v5 + 7), 8u, sub_272A40); /*0x1f32a9*/
  v7 = cocos2d::CCArray::count(v5); /*0x1f32b8*/
  for ( i = 0; i < v7; ++i ) /*0x1f32c3*/
  {
    v9 = cocos2d::CCArray::stringAtIndex(v5, i); /*0x1f32d5*/
    v10 = cocos2d::CCString::intValue(v9); /*0x1f32e4*/
    v11 = qword_905FD0; /*0x1f32e6*/
    if ( !qword_905FD0 ) /*0x1f32f0*/
    {
      v49 = operator new(0x6E8u); /*0x1f32fc*/
      qword_905FD0 = sub_2723A0(v49); /*0x1f330a*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1f331b*/
      v11 = qword_905FD0; /*0x1f331d*/
    }
    GameManager_stringForCustomObject(v11, (__int64)v54, v10); /*0x1f332f*/
    if ( v54[2] ) /*0x1f333e*/
    {
      v12 = v54; /*0x1f3340*/
      if ( v54[3] > 0xFu ) /*0x1f3351*/
        v12 = (_QWORD *)v54[0]; /*0x1f3351*/
      v51 = 0; /*0x1f335d*/
      v52 = 0; /*0x1f3362*/
      v53 = 0; /*0x1f3367*/
      v13 = -1; /*0x1f336c*/
      do /*0x1f3376*/
        ++v13; /*0x1f3373*/
      while ( *((_BYTE *)v12 + v13) ); /*0x1f3376*/
      sub_3C230(&v51); /*0x1f3382*/
      v14 = (struct cocos2d::CCObject *)sub_1EE380(a1, &v51, v10); /*0x1f3392*/
      cocos2d::CCArray::addObject(v3, v14); /*0x1f339d*/
    }
    sub_3C310(v54); /*0x1f33ac*/
  }
  if ( !*(_QWORD *)(a1 + 960) ) /*0x1f33bc*/
  {
    v15 = (cocos2d::CCObject *)cocos2d::CCArray::create(v6); /*0x1f33ca*/
    *(_QWORD *)(a1 + 960) = v15; /*0x1f33d0*/
    cocos2d::CCObject::retain(v15); /*0x1f33da*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v50, (const struct cocos2d::CCPoint *)&unk_904768); /*0x1f33ec*/
    v17 = v16; /*0x1f33f2*/
    v18 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("edit_upBtn_001.png"); /*0x1f33fc*/
    v20 = ButtonSprite_create_0(v18, 32, v19, 32.0, 1065353216); /*0x1f3446*/
    v22 = (struct cocos2d::CCObject *)sub_19CD20(v20, v21, a1, sub_1F30C0); /*0x1f345b*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v22 + 160LL))(v22); /*0x1f3476*/
    *((_DWORD *)v22 + 101) = 1063675494; /*0x1f3478*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v49, v17); /*0x1f348a*/
    cocos2d::CCPoint::operator=((char *)v20 + 672, v23); /*0x1f349a*/
    sub_420E0(v20); /*0x1f34a3*/
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 960), v22); /*0x1f34b2*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v50, (const struct cocos2d::CCPoint *)&unk_904768); /*0x1f34c4*/
    v25 = v24; /*0x1f34ca*/
    v26 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("edit_downBtn_001.png"); /*0x1f34d4*/
    v28 = ButtonSprite_create_0(v26, 32, v27, 32.0, 1065353216); /*0x1f3502*/
    v30 = (struct cocos2d::CCObject *)sub_19CD20(v28, v29, a1, sub_1F3150); /*0x1f3517*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v30 + 160LL))(v30); /*0x1f352a*/
    *((_DWORD *)v30 + 101) = 1063675494; /*0x1f352c*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v49, v25); /*0x1f353e*/
    cocos2d::CCPoint::operator=((char *)v28 + 672, v31); /*0x1f354e*/
    sub_420E0(v28); /*0x1f3557*/
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 960), v30); /*0x1f3566*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v50, (const struct cocos2d::CCPoint *)&unk_904768); /*0x1f3578*/
    v33 = v32; /*0x1f357e*/
    v34 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("edit_addCBtn_001.png"); /*0x1f3588*/
    v36 = ButtonSprite_create_0(v34, 32, v35, 32.0, 1065353216); /*0x1f35bd*/
    v38 = (struct cocos2d::CCObject *)sub_19CD20(v36, v37, a1, EditorUI_onNewCustomItem); /*0x1f35d2*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v38 + 160LL))(v38); /*0x1f35e5*/
    *((_DWORD *)v38 + 101) = 1063675494; /*0x1f35e8*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v49, v33); /*0x1f35fa*/
    cocos2d::CCPoint::operator=((char *)v36 + 672, v39); /*0x1f360a*/
    sub_420E0(v36); /*0x1f3613*/
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 960), v38); /*0x1f3622*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v50, (const struct cocos2d::CCPoint *)&unk_904768); /*0x1f3634*/
    v41 = v40; /*0x1f363a*/
    v42 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("edit_delCBtn_001.png"); /*0x1f3644*/
    v44 = ButtonSprite_create_0(v42, 32, v43, 32.0, 1065353216); /*0x1f3679*/
    v46 = (struct cocos2d::CCObject *)sub_19CD20(v44, v45, a1, sub_1F2F70); /*0x1f368e*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v46 + 160LL))(v46); /*0x1f36a1*/
    *((_DWORD *)v46 + 101) = 1063675494; /*0x1f36a3*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v49, v41); /*0x1f36b5*/
    cocos2d::CCPoint::operator=((char *)v44 + 672, v47); /*0x1f36c5*/
    sub_420E0(v44); /*0x1f36ce*/
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 960), v46); /*0x1f36dd*/
  }
  cocos2d::CCArray::addObjectsFromArray(v3, *(struct cocos2d::CCArray **)(a1 + 960)); /*0x1f36ed*/
  return v3; /*0x1f36f6*/
}

// [2/4] Address: 0x3e8eb0
// Method: DrawGridLayer::~DrawGridLayer
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall DrawGridLayer__dtor_DrawGridLayer(_QWORD *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx
  cocos2d::CCObject *v5; // rcx
  cocos2d::CCObject *v6; // rcx
  cocos2d::CCObject *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx

  *Block = &DrawGridLayer::`vftable'; /*0x3e8ecb*/
  Block[40] = &DrawGridLayer::`vftable'; /*0x3e8ed5*/
  Block[41] = &DrawGridLayer::`vftable'; /*0x3e8ee3*/
  Block[42] = &DrawGridLayer::`vftable'; /*0x3e8ef1*/
  Block[43] = &DrawGridLayer::`vftable'; /*0x3e8eff*/
  Block[44] = &DrawGridLayer::`vftable'; /*0x3e8f0d*/
  v4 = (cocos2d::CCObject *)Block[71]; /*0x3e8f14*/
  if ( v4 ) /*0x3e8f1e*/
    cocos2d::CCObject::release(v4); /*0x3e8f20*/
  v5 = (cocos2d::CCObject *)Block[72]; /*0x3e8f26*/
  if ( v5 ) /*0x3e8f30*/
    cocos2d::CCObject::release(v5); /*0x3e8f32*/
  v6 = (cocos2d::CCObject *)Block[73]; /*0x3e8f38*/
  if ( v6 ) /*0x3e8f42*/
    cocos2d::CCObject::release(v6); /*0x3e8f44*/
  v7 = (cocos2d::CCObject *)Block[74]; /*0x3e8f4a*/
  if ( v7 ) /*0x3e8f54*/
    cocos2d::CCObject::release(v7); /*0x3e8f56*/
  v8 = (void *)Block[51]; /*0x3e8f5c*/
  if ( v8 ) /*0x3e8f68*/
  {
    j_j_free(v8); /*0x3e8f6a*/
    Block[51] = 0; /*0x3e8f6f*/
  }
  v9 = (void *)Block[52]; /*0x3e8f76*/
  if ( v9 ) /*0x3e8f80*/
  {
    j_j_free(v9); /*0x3e8f82*/
    Block[52] = 0; /*0x3e8f87*/
  }
  v10 = (void *)Block[53]; /*0x3e8f8e*/
  if ( v10 ) /*0x3e8f98*/
  {
    j_j_free(v10); /*0x3e8f9a*/
    Block[53] = 0; /*0x3e8f9f*/
  }
  sub_654A0(Block + 54); /*0x3e8fad*/
  sub_3C310(Block + 66); /*0x3e8fb9*/
  sub_3DA90(Block + 57); /*0x3e8fc5*/
  sub_65440(Block + 55); /*0x3e8fd1*/
  cocos2d::CCLayer::~CCLayer((cocos2d::CCLayer *)Block); /*0x3e8fd9*/
  if ( (a2 & 1) != 0 ) /*0x3e8fe4*/
    j_j_free(Block); /*0x3e8fee*/
  return Block; /*0x3e8ff6*/
}

// [3/4] Address: 0x406960
// Method: DrawGridLayer::update
// Hidden C++ exception states: #wind=2
__int64 __fastcall DrawGridLayer_update(__int64 a1, float a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  float *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  bool isMusicPlaying; // r15
  float *v9; // rbx
  float v10; // xmm6_4
  __int64 v11; // rcx
  float v12; // xmm1_4
  void *v13; // [rsp+A0h] [rbp+8h] BYREF
  void *v14; // [rsp+B0h] [rbp+18h]

  *(_DWORD *)(a1 + 504) = *(_DWORD *)(a1 + 500); /*0x406986*/
  result = *(_QWORD *)(a1 + 520); /*0x40698c*/
  v4 = *(_QWORD *)(result + 14968); /*0x406993*/
  if ( v4 && *(_BYTE *)(v4 + 716) ) /*0x4069a3*/
  {
    v5 = (float *)(a1 + 500); /*0x4069b0*/
    v6 = qword_905F60; /*0x4069b7*/
    if ( !qword_905F60 ) /*0x4069c1*/
    {
      v13 = operator new(0x8A8u); /*0x4069cd*/
      qword_905F60 = sub_5AE20(v13); /*0x4069de*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x4069ef*/
      v5 = (float *)(a1 + 500); /*0x4069f1*/
      v6 = qword_905F60; /*0x4069f8*/
    }
    isMusicPlaying = FMODAudioEngine_isMusicPlaying(v6, 0); /*0x406a06*/
    v9 = (float *)(a1 + 496); /*0x406a0a*/
    if ( *(float *)(a1 + 496) == -1.0 ) /*0x406a1e*/
    {
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 520) + 14968LL); /*0x406a27*/
      *v9 = *(float *)(v7 + 720); /*0x406a34*/
    }
    else
    {
      v5 = (float *)(a1 + 500); /*0x406a3f*/
    }
    result = sub_463590( /*0x406a92*/
               (unsigned int)&v13,
               v7,
               *(_QWORD *)(a1 + 592),
               *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 520) + 3592LL) + 332LL),
               *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 520) + 3592LL) + 341LL),
               0,
               1,
               *(_QWORD *)(a1 + 520) + 832LL);
    v10 = a2 * *(float *)&dword_8F84A4; /*0x406a97*/
    if ( isMusicPlaying ) /*0x406aaa*/
    {
      v11 = qword_905F60; /*0x406aac*/
      if ( !qword_905F60 ) /*0x406ab6*/
      {
        v14 = operator new(0x8A8u); /*0x406ac2*/
        qword_905F60 = sub_5AE20(v14); /*0x406ad3*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x406ae4*/
        v9 = (float *)(a1 + 496); /*0x406ae6*/
        v11 = qword_905F60; /*0x406ae9*/
      }
      result = (unsigned int)FMODAudioEngine_getMusicTimeMS(v11); /*0x406af5*/
      v12 = (float)(int)result / 1000.0; /*0x406aff*/
    }
    else
    {
      v12 = v10 + *v9; /*0x406b08*/
      v9 = (float *)(a1 + 496); /*0x406b0c*/
    }
    if ( *v9 == -1.0 || fabs(v12 - *v9) >= 1000.0 ) /*0x406b2f*/
      *v5 = v12; /*0x406b3b*/
    else
      *v5 = v10 + *v5; /*0x406b35*/
    *v9 = v12; /*0x406b3f*/
  }
  return result; /*0x406b43*/
}

// Address: 0x406b70
// Method: DrawGridLayer::draw
// Hidden C++ exception states: #wind=4
void __fastcall DrawGridLayer_draw(__int64 a1)
{
  __int64 v2; // rax
  float v3; // ecx
  bool v4; // r15
  bool v5; // bl
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned int v8; // r8d
  cocos2d::CCArray *v9; // rcx
  int v10; // esi
  int v11; // eax
  float v12; // xmm13_4
  char v13; // r12
  const struct cocos2d::CCPoint *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  float *v19; // rax
  float v20; // xmm14_4
  float v21; // xmm0_4
  float v22; // xmm12_4
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  float v26; // xmm11_4
  float v27; // xmm0_4
  float v28; // xmm9_4
  int v29; // edi
  float v30; // xmm6_4
  int v31; // r14d
  float v32; // xmm6_4
  const struct cocos2d::CCPoint *v33; // rax
  const struct cocos2d::CCPoint *v34; // rbx
  cocos2d *v35; // rax
  const struct cocos2d::CCPoint *v36; // r8
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rax
  float v40; // xmm6_4
  float v41; // xmm7_4
  int v42; // r14d
  int v43; // esi
  float v44; // xmm6_4
  const struct cocos2d::CCPoint *v45; // rax
  const struct cocos2d::CCPoint *v46; // rbx
  cocos2d *v47; // rax
  const struct cocos2d::CCPoint *v48; // r8
  __int64 v49; // rax
  __int64 v50; // rbx
  __int64 v51; // rax
  unsigned int v52; // r8d
  const struct cocos2d::CCPoint *v53; // rax
  const struct cocos2d::CCPoint *v54; // rbx
  cocos2d *v55; // rax
  const struct cocos2d::CCPoint *v56; // r8
  int v57; // r12d
  int v58; // ebx
  cocos2d::CCArray *v59; // rcx
  unsigned int v60; // edi
  int v61; // esi
  int v62; // r14d
  int v63; // r15d
  cocos2d::CCString *v64; // rax
  cocos2d *v65; // rcx
  float v66; // xmm0_4
  float v67; // xmm6_4
  cocos2d::CCString *v68; // rax
  float v69; // xmm0_4
  __int64 v70; // rax
  __int64 v71; // rbx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rbx
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rbx
  __int64 v78; // rax
  unsigned int v79; // r8d
  unsigned int v80; // r8d
  unsigned int v81; // ebx
  unsigned int v82; // r8d
  __int64 *v83; // rdi
  __int64 *v84; // rbx
  float v85; // xmm15_4
  __int64 v86; // r15
  int v87; // edx
  float v88; // xmm7_4
  int v89; // eax
  float v90; // xmm9_4
  float v91; // xmm6_4
  float v92; // xmm10_4
  int v93; // r12d
  float v94; // xmm7_4
  float v95; // xmm11_4
  int v96; // edi
  int v97; // esi
  int v98; // ebx
  int v99; // r14d
  int v100; // ecx
  unsigned int v101; // ebx
  unsigned int v102; // r8d
  unsigned int v103; // r8d
  int v104; // r14d
  float v105; // r12d
  float v106; // xmm7_4
  __int64 v107; // rdi
  unsigned int *v108; // rdi
  __int64 v109; // rax
  _QWORD *v110; // rdi
  _QWORD *v111; // r15
  int v112; // esi
  _BYTE *v113; // rbx
  float *v114; // rax
  float v115; // xmm6_4
  __int64 v116; // rax
  __int64 v117; // rbx
  __int64 v118; // rax
  unsigned int v119; // r8d
  unsigned int i; // edi
  struct cocos2d::CCObject *v121; // rax
  struct cocos2d::CCObject *v122; // rbx
  float v123; // xmm6_4
  __int64 v124; // rax
  float v125; // xmm1_4
  float v126; // xmm7_4
  float v127; // xmm6_4
  const struct cocos2d::CCPoint *v128; // rax
  const struct cocos2d::CCPoint *v129; // rbx
  cocos2d *v130; // rax
  const struct cocos2d::CCPoint *v131; // r8
  const struct cocos2d::CCPoint *v132; // rax
  const struct cocos2d::CCPoint *v133; // rbx
  cocos2d *v134; // rax
  const struct cocos2d::CCPoint *v135; // r8
  __int64 *v136; // rdi
  __int64 v137; // rax
  int v138; // edx
  float v139; // xmm0_4
  float v140; // xmm1_4
  float v141; // xmm7_4
  const struct cocos2d::CCPoint *v142; // rax
  float v143; // xmm9_4
  float v144; // xmm2_4
  const struct cocos2d::CCPoint *v145; // rbx
  cocos2d *v146; // rax
  const struct cocos2d::CCPoint *v147; // r8
  __int64 v148; // rcx
  float v149; // xmm6_4
  const struct cocos2d::CCPoint *v150; // rax
  const struct cocos2d::CCPoint *v151; // rbx
  cocos2d *v152; // rax
  const struct cocos2d::CCPoint *v153; // r8
  __int64 v154; // rcx
  __int64 v155; // rbx
  __int64 v156; // rax
  float v157; // xmm10_4
  const struct cocos2d::CCPoint *v158; // rax
  const struct cocos2d::CCPoint *v159; // rbx
  cocos2d *v160; // rax
  const struct cocos2d::CCPoint *v161; // r8
  const struct cocos2d::CCPoint *v162; // rax
  const struct cocos2d::CCPoint *v163; // rbx
  cocos2d *v164; // rax
  const struct cocos2d::CCPoint *v165; // r8
  __int64 v166; // rcx
  _BYTE *v167; // rax
  __int64 *v168; // r14
  float MinPortalY; // xmm6_4
  float MaxPortalY; // xmm7_4
  const struct cocos2d::CCPoint *v171; // rax
  const struct cocos2d::CCPoint *v172; // rbx
  cocos2d *v173; // rax
  const struct cocos2d::CCPoint *v174; // r8
  const struct cocos2d::CCPoint *v175; // rax
  const struct cocos2d::CCPoint *v176; // rbx
  cocos2d *v177; // rax
  const struct cocos2d::CCPoint *v178; // r8
  __int64 v179; // rcx
  int v180; // edi
  unsigned int *v181; // r12
  __int64 v182; // rax
  __int64 *v183; // r12
  __int64 *v184; // r15
  __int64 v185; // rsi
  float v186; // xmm6_4
  int v187; // eax
  float v188; // xmm1_4
  __int64 v189; // rcx
  int v190; // r15d
  char v191; // bl
  int v192; // edi
  int v193; // esi
  __int64 v194; // r14
  int v195; // eax
  char v196; // bl
  int v197; // edx
  __int64 v198; // rax
  __int64 v199; // rsi
  __int64 v200; // rax
  __int64 v201; // rbx
  __int64 v202; // rax
  unsigned int v203; // r8d
  int v204; // [rsp+50h] [rbp-B0h]
  int v205; // [rsp+50h] [rbp-B0h]
  __int64 *v206; // [rsp+58h] [rbp-A8h] BYREF
  float v207; // [rsp+60h] [rbp-A0h]
  float v208; // [rsp+68h] [rbp-98h] BYREF
  float v209; // [rsp+6Ch] [rbp-94h]
  char v210; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v211; // [rsp+78h] [rbp-88h] BYREF
  int v212; // [rsp+80h] [rbp-80h]
  __int64 *v213; // [rsp+88h] [rbp-78h] BYREF
  float v214; // [rsp+90h] [rbp-70h] BYREF
  float v215; // [rsp+94h] [rbp-6Ch]
  char v216; // [rsp+98h] [rbp-68h] BYREF
  char v217; // [rsp+A0h] [rbp-60h] BYREF
  void *v218; // [rsp+A8h] [rbp-58h] BYREF
  char v219; // [rsp+B0h] [rbp-50h] BYREF
  char v220; // [rsp+B8h] [rbp-48h] BYREF
  void *v221; // [rsp+C0h] [rbp-40h] BYREF
  char v222; // [rsp+C8h] [rbp-38h] BYREF
  char v223; // [rsp+D0h] [rbp-30h] BYREF
  char v224; // [rsp+D8h] [rbp-28h] BYREF
  char v225; // [rsp+E0h] [rbp-20h] BYREF
  char v226; // [rsp+E8h] [rbp-18h] BYREF
  char v227; // [rsp+F0h] [rbp-10h] BYREF
  void *v228; // [rsp+1F0h] [rbp+F0h]
  bool GameVariable; // [rsp+1F0h] [rbp+F0h]
  void *v230; // [rsp+1F8h] [rbp+F8h]
  bool v231; // [rsp+1F8h] [rbp+F8h]
  float v232; // [rsp+200h] [rbp+100h] BYREF
  float v233; // [rsp+204h] [rbp+104h]
  float v234; // [rsp+208h] [rbp+108h] BYREF
  float v235; // [rsp+20Ch] [rbp+10Ch]

  v2 = *(_QWORD *)(a1 + 520);
  if ( !*(_QWORD *)(v2 + 14968) )
    return;
  v3 = *(float *)(v2 + 2204);
  v208 = v3;
  v4 = *(_BYTE *)(v2 + 14721) && (LODWORD(v3) != 1 || !*(_BYTE *)(v2 + 14722));
  v5 = *(_BYTE *)(v2 + 14723) && LODWORD(v3) != 1;
  LOBYTE(v232) = v5;
  v6 = qword_905FD0;
  if ( !qword_905FD0 )
  {
    v228 = operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v228);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
    v6 = qword_905FD0;
  }
  GameVariable = GameManager_getGameVariable(v6, "0121");
  v7 = qword_905FD0;
  if ( !qword_905FD0 )
  {
    v230 = operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v230);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
    v7 = qword_905FD0;
  }
  v231 = GameManager_getGameVariable(v7, "0209");
  if ( v5 )
  {
    if ( *(_BYTE *)(a1 + 516) )
    {
      *(_BYTE *)(a1 + 516) = 0;
      v9 = *(cocos2d::CCArray **)(a1 + 576);
      if ( v9 )
      {
        if ( cocos2d::CCArray::count(v9) )
          qsort(
            *(void **)(*(_QWORD *)(*(_QWORD *)(a1 + 576) + 56LL) + 16LL),
            **(unsigned int **)(*(_QWORD *)(a1 + 576) + 56LL),
            8u,
            sub_3078A0);
      }
    }
  }
  v10 = 1;
  v212 = 1;
  cocos2d::ccGLBlendFunc((cocos2d *)((char *)sub_0 + 1), 0x303u, v8);
  v11 = 80;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 520) + 3592LL) + 461LL) )
    v11 = 1000;
  v12 = (float)((float)v11 * 30.0) + 90.0;
  cocos2d::ccDrawColor4B(0, 0, 0, 0x96u);
  glLineWidth(1.0);
  v13 = *(_BYTE *)(*(_QWORD *)(a1 + 520) + 14724LL);
  v14 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 560) + 200LL))(*(_QWORD *)(a1 + 560));
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v222, v14);
  v16 = cocos2d::CCDirector::sharedDirector(v15);
  cocos2d::CCDirector::getWinSize(v16, &v214);
  v17 = *(_QWORD *)(a1 + 560);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v234, 0.0, 0.0);
  cocos2d::CCNode::convertToNodeSpace(v17, &v211, v18);
  v20 = *v19;
  v21 = (*(float (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 560) + 168LL))(*(_QWORD *)(a1 + 560));
  v22 = (float)(v214 / v21) + v20;
  v23 = *(_QWORD *)(a1 + 560);
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v234, 0.0, 0.0);
  cocos2d::CCNode::convertToNodeSpace(v23, &v211, v24);
  v207 = *(float *)(v25 + 4);
  v26 = v207;
  v27 = (*(float (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 560) + 168LL))(*(_QWORD *)(a1 + 560));
  v28 = (float)(v215 / v27) + v207;
  v234 = v28;
  v29 = 0;
  v30 = *(float *)(a1 + 636);
  v31 = (int)floorf(v20 / v30);
  if ( v22 > (float)((float)v31 * v30) )
  {
    do
    {
      v32 = (float)v31 * *(float *)(a1 + 636);
      if ( v32 >= -3000.0 && v32 <= 240000.0 )
      {
        if ( v32 == 0.0 || v32 == 240000.0 )
        {
          cocos2d::ccDrawColor4B((cocos2d *)((char *)&loc_FD + 2), 0xFFu, 0xFFu, 0x96u);
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v211, v32, fminf(v12, v28));
          v34 = v33;
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v213, v32, fmaxf(-3000.0, v207));
          cocos2d::ccDrawLine(v35, v34, v36);
        }
        else if ( v4 && v10 + 1 < 1200 )
        {
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v216, v32, fmaxf(-3000.0, v207));
          cocos2d::CCPoint::operator=(*(_QWORD *)(a1 + 408) + 8LL * v29, v37);
          v38 = *(_QWORD *)(a1 + 408) + 8LL * v10;
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v217, v32, fminf(v12, v28));
          cocos2d::CCPoint::operator=(v38, v39);
          v29 += 2;
          v10 += 2;
        }
      }
      ++v31;
    }
    while ( v22 > v32 );
  }
  v40 = *(float *)(a1 + 636);
  v41 = fmodf(90.0, v40);
  v42 = (int)floorf((float)(v207 - v41) / v40);
  if ( v28 > (float)((float)((float)v42 * v40) + v41) )
  {
    v43 = v29 + 1;
    do
    {
      v44 = (float)((float)v42 * *(float *)(a1 + 636)) + v41;
      if ( v44 >= -3000.0 && v12 >= v44 && v44 != 90.0 )
      {
        if ( v44 == v12 )
        {
          cocos2d::ccDrawColor4B((cocos2d *)((char *)&loc_FD + 2), 0xFFu, 0xFFu, 0x96u);
          glLineWidth(2.0);
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v216, fminf(240000.0, v22), v44);
          v46 = v45;
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v223, fmaxf(-3000.0, v20), v44);
          cocos2d::ccDrawLine(v47, v46, v48);
        }
        else if ( v4 && v43 + 1 < 1200 )
        {
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v206, fmaxf(-3000.0, v20), v44);
          cocos2d::CCPoint::operator=(*(_QWORD *)(a1 + 408) + 8LL * v29, v49);
          v50 = *(_QWORD *)(a1 + 408) + 8LL * v43;
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v224, fminf(240000.0, v22), v44);
          cocos2d::CCPoint::operator=(v50, v51);
          v29 += 2;
          v43 += 2;
        }
      }
      ++v42;
    }
    while ( v28 > v44 );
  }
  if ( v4 && v29 > 0 )
  {
    cocos2d::ccDrawColor4B(0, 0, 0, 0x96u);
    glLineWidth(1.0);
    cocos2d::ccDrawLines(*(cocos2d **)(a1 + 408), (const struct cocos2d::CCPoint *)(unsigned int)v29, v52);
  }
  if ( !v13 && v26 <= 90.0 && v28 >= 90.0 )
  {
    cocos2d::ccDrawColor4B((cocos2d *)((char *)&loc_FD + 2), 0xFFu, 0xFFu, 0x96u);
    glLineWidth(2.0);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v225, fminf(240000.0, v22), 90.0);
    v54 = v53;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v226, fmaxf(-3000.0, v20), 90.0);
    cocos2d::ccDrawLine(v55, v54, v56);
  }
  v57 = 0;
  v58 = 0;
  v204 = 0;
  LODWORD(v206) = 0;
  if ( !qword_905FD0 )
  {
    v221 = operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v221);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
  }
  if ( *(_BYTE *)(qword_905FD0 + 953) )
  {
    v59 = *(cocos2d::CCArray **)(a1 + 568);
    if ( v59 )
    {
      v60 = 0;
      if ( cocos2d::CCArray::count(v59) )
      {
        v61 = 1;
        v62 = 1;
        v63 = 1;
        while ( 1 )
        {
          v64 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 568), v60);
          v66 = cocos2d::CCString::floatValue(v64);
          v67 = v66;
          if ( v66 >= -3000.0 )
            break;
LABEL_69:
          v60 += 2;
          if ( v60 >= cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 568)) )
          {
LABEL_70:
            if ( v57 > 0 )
            {
              cocos2d::ccDrawColor4B((cocos2d *)((char *)&loc_FD + 2), 0x7Fu, 0, 0xFFu);
              glLineWidth(1.0);
              cocos2d::ccDrawLines(*(cocos2d **)(a1 + 408), (const struct cocos2d::CCPoint *)(unsigned int)v57, v79);
            }
            if ( v58 > 0 )
            {
              cocos2d::ccDrawColor4B((cocos2d *)((char *)&loc_FD + 2), 0xFFu, 0, 0xFFu);
              glLineWidth(1.0);
              cocos2d::ccDrawLines(*(cocos2d **)(a1 + 416), (const struct cocos2d::CCPoint *)(unsigned int)v58, v80);
            }
            v81 = (unsigned int)v206;
            if ( (int)v206 > 0 )
            {
              LOBYTE(v65) = 127;
              cocos2d::ccDrawColor4B(v65, 0xFFu, 0, 0xFFu);
              glLineWidth(1.0);
              cocos2d::ccDrawLines(*(cocos2d **)(a1 + 424), (const struct cocos2d::CCPoint *)v81, v82);
            }
            goto LABEL_76;
          }
        }
        if ( v66 >= v20 && v22 >= v66 )
        {
          v68 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 568), v60 + 1);
          v69 = cocos2d::CCString::floatValue(v68);
          if ( v69 == 0.89999998 )
          {
            if ( v63 + 1 < 1200 )
            {
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v221, v67, fmaxf(-3000.0, v26));
              cocos2d::CCPoint::operator=(*(_QWORD *)(a1 + 416) + 8LL * v58, v70);
              v71 = *(_QWORD *)(a1 + 416) + 8LL * v63;
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v227, v67, fminf(v12, v28));
              cocos2d::CCPoint::operator=(v71, v72);
              v58 = v204 + 2;
              v204 += 2;
              v63 += 2;
            }
          }
          else
          {
            if ( v69 == 1.0 )
            {
              if ( v62 + 1 >= 1200 )
                goto LABEL_68;
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v219, v67, fmaxf(-3000.0, v26));
              cocos2d::CCPoint::operator=(*(_QWORD *)(a1 + 424) + 8LL * (int)v206, v73);
              v74 = *(_QWORD *)(a1 + 424) + 8LL * v62;
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v220, v67, fminf(v12, v28));
              cocos2d::CCPoint::operator=(v74, v75);
              LODWORD(v206) = (_DWORD)v206 + 2;
              v62 += 2;
            }
            else
            {
              if ( v61 + 1 >= 1200 )
                goto LABEL_68;
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v218, v67, fmaxf(-3000.0, v26));
              cocos2d::CCPoint::operator=(*(_QWORD *)(a1 + 408) + 8LL * v57, v76);
              v77 = *(_QWORD *)(a1 + 408) + 8LL * v61;
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v210, v67, fminf(v12, v28));
              cocos2d::CCPoint::operator=(v77, v78);
              v57 += 2;
              v61 += 2;
            }
            v58 = v204;
          }
        }
LABEL_68:
        if ( v67 > v22 )
          goto LABEL_70;
        goto LABEL_69;
      }
    }
  }
LABEL_76:
  if ( !qword_905FD0 )
  {
    v218 = operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v218);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
  }
  if ( *(_BYTE *)(qword_905FD0 + 954) )
  {
    LODWORD(v206) = 0;
    v205 = 0;
    v83 = *(__int64 **)(a1 + 440);
    v211 = v83;
    v84 = (__int64 *)*v83;
    v213 = v84;
    if ( v84 != v83 )
    {
      v85 = v234;
      do
      {
        v86 = v84[3];
        if ( !*(_BYTE *)(v86 + 1868) )
        {
          v87 = *(_DWORD *)(v86 + 1856);
          if ( v87 > 0
            && ((!GameVariable || !*(_BYTE *)(v86 + 1302)) && (!v231 || !*(_BYTE *)(v86 + 1267))
             || *(_BYTE *)(v86 + 1141)) )
          {
            v88 = *(float *)(a1 + 616);
            switch ( *(_DWORD *)(v86 + 1864) )
            {
              case 1:
                v88 = *(float *)(a1 + 612);
                break;
              case 2:
                v88 = *(float *)(a1 + 620);
                break;
              case 3:
                v88 = *(float *)(a1 + 624);
                break;
              case 4:
                v88 = *(float *)(a1 + 628);
                break;
            }
            v89 = *(_DWORD *)(v86 + 1860);
            if ( v89 > 0 )
              v87 *= v89;
            v90 = (float)(60.0 / (float)v87) * v88;
            v91 = *(float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v86 + 200LL))(v84[3]);
            v92 = fminf(v22, (float)(v88 * *(float *)(v86 + 1468)) + v91);
            v93 = 0;
            if ( v20 > v91 )
            {
              v93 = (int)ceilf((float)(v20 - v91) / v90);
              v91 = v91 + (float)((float)v93 * v90);
            }
            if ( v92 > v91 )
            {
              v94 = fmaxf(-3000.0, v26);
              v95 = fminf(v12, v85);
              v96 = (int)v206;
              v97 = (_DWORD)v206 + 1;
              v98 = v205;
              v99 = v205 + 1;
              do
              {
                cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v217, v91, v94);
                cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v216, v91, v95);
                v100 = *(_DWORD *)(v86 + 1860);
                if ( v100 > 0 && v93 % v100 )
                {
                  if ( v99 + 1 < 1200 )
                  {
                    cocos2d::CCPoint::operator=(*(_QWORD *)(a1 + 416) + 8LL * v98, &v217);
                    cocos2d::CCPoint::operator=(*(_QWORD *)(a1 + 416) + 8LL * v99, &v216);
                    v98 += 2;
                    v99 += 2;
                  }
                }
                else if ( v97 + 1 < 1200 )
                {
                  cocos2d::CCPoint::operator=(*(_QWORD *)(a1 + 408) + 8LL * v96, &v217);
                  cocos2d::CCPoint::operator=(*(_QWORD *)(a1 + 408) + 8LL * v97, &v216);
                  v96 += 2;
                  v97 += 2;
                }
                v91 = v91 + v90;
                ++v93;
              }
              while ( v92 > v91 );
              v205 = v98;
              LODWORD(v206) = v96;
              v84 = v213;
              v26 = v207;
              v83 = v211;
            }
          }
        }
        v84 = (__int64 *)*v84;
        v213 = v84;
      }
      while ( v84 != v83 );
      v101 = (unsigned int)v206;
      if ( (int)v206 > 0 )
      {
        cocos2d::ccDrawColor4B((cocos2d *)((char *)&loc_FD + 2), 0xFFu, 0, 0xFFu);
        glLineWidth(1.0);
        cocos2d::ccDrawLines(*(cocos2d **)(a1 + 408), (const struct cocos2d::CCPoint *)v101, v102);
      }
      if ( v205 > 0 )
      {
        cocos2d::ccDrawColor4B((cocos2d *)((char *)&loc_FD + 2), 0x7Fu, 0, 0xFFu);
        glLineWidth(1.0);
        cocos2d::ccDrawLines(*(cocos2d **)(a1 + 416), (const struct cocos2d::CCPoint *)(unsigned int)v205, v103);
      }
      v28 = v234;
    }
  }
  glLineWidth(1.0);
  v104 = 0;
  v105 = v208;
  if ( LODWORD(v208) != 1 )
  {
    if ( LOBYTE(v232) )
    {
      cocos2d::ccDrawColor4B(0, 0xFFu, 0xFFu, 0x96u);
      v106 = -1.0;
      v107 = *(_QWORD *)(a1 + 576);
      if ( v107 )
      {
        v108 = *(unsigned int **)(v107 + 56);
        v109 = *v108;
        if ( (_DWORD)v109 )
        {
          v110 = (_QWORD *)*((_QWORD *)v108 + 2);
          v111 = &v110[v109 - 1];
          if ( v110 <= v111 )
          {
            v112 = 1;
            do
            {
              v113 = (_BYTE *)*v110;
              if ( !*v110 )
                break;
              v114 = (float *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v113 + 200LL))(*v110);
              v115 = *v114;
              if ( *v114 < v20 || v22 < v115 )
              {
                if ( v115 > v22 )
                  break;
              }
              else if ( (!v113[654] && (!GameVariable || !v113[1302]) && (!v231 || !v113[1267]) || v113[1141])
                     && !v113[1488]
                     && !v113[1489]
                     && v115 > v106 )
              {
                v106 = *v114;
                if ( v112 + 1 < 1200 )
                {
                  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v232, v115, fmaxf(-3000.0, v26));
                  cocos2d::CCPoint::operator=(*(_QWORD *)(a1 + 408) + 8LL * v104, v116);
                  v117 = *(_QWORD *)(a1 + 408) + 8LL * v112;
                  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v210, v115, fminf(v12, v28));
                  cocos2d::CCPoint::operator=(v117, v118);
                  v104 += 2;
                  v112 += 2;
                }
              }
              ++v110;
            }
            while ( v110 <= v111 );
            if ( v104 > 0 )
            {
              cocos2d::ccDrawColor4B(0, 0xFFu, 0xFFu, 0x96u);
              cocos2d::ccDrawLines(*(cocos2d **)(a1 + 408), (const struct cocos2d::CCPoint *)(unsigned int)v104, v119);
            }
          }
        }
      }
    }
    glLineWidth(2.0);
    cocos2d::ccDrawColor4B(0, 0xFFu, 0xFFu, 0xFFu);
    for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 584)); ++i )
    {
      v121 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 584), i);
      v122 = v121;
      if ( (!GameVariable || !*((_BYTE *)v121 + 1302)) && (!v231 || !*((_BYTE *)v121 + 1267)) || *((_BYTE *)v121 + 1141) )
      {
        if ( (*(unsigned int (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v121 + 1648LL))(v121) == 16 )
        {
          v123 = 240.0;
        }
        else if ( (*(unsigned int (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v122 + 1648LL))(v122) == 33 )
        {
          v123 = 270.0;
        }
        else
        {
          v123 = 300.0;
        }
        v124 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v122 + 200LL))(v122);
        v125 = fmaxf(90.0, floorf((float)((float)(*(float *)(v124 + 4) - (float)(v123 * 0.5)) + 0.0) / 30.0) * 30.0);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v232, v125, (float)(v123 + v125) - 0.0);
        v126 = v232;
        v127 = v233;
        if ( v232 >= -3000.0 && v12 >= v232 )
        {
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v210, fminf(240000.0, v22), v232);
          v129 = v128;
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v218, fmaxf(-3000.0, v20), v126);
          cocos2d::ccDrawLine(v130, v129, v131);
        }
        if ( v127 >= -3000.0 && v12 >= v127 )
        {
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v220, fminf(240000.0, v22), v127);
          v133 = v132;
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v219, fmaxf(-3000.0, v20), v127);
          cocos2d::ccDrawLine(v134, v133, v135);
        }
      }
    }
  }
  v136 = (__int64 *)(a1 + 520);
  v137 = *(_QWORD *)(a1 + 520);
  if ( *(_DWORD *)(v137 + 2204) )
  {
    *(_QWORD *)(a1 + 508) = 0;
    v143 = v207;
    goto LABEL_181;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v137 + 14968) + 716LL) )
  {
    cocos2d::ccDrawColor4B((cocos2d *)((char *)&loc_2D + 5), 0xFFu, 0x32u, 0xFFu);
    glLineWidth(5.0);
    sub_463590(
      (unsigned int)&v232,
      v138,
      *(_QWORD *)(a1 + 592),
      *(_DWORD *)(*(_QWORD *)(*v136 + 3592) + 332LL),
      *(_BYTE *)(*(_QWORD *)(*v136 + 3592) + 341LL),
      1,
      1,
      *v136 + 832);
    if ( v232 <= 0.0 )
    {
      v139 = v233;
      if ( v233 > 0.0 )
      {
        *(_DWORD *)(a1 + 508) = 0;
        *(float *)(a1 + 512) = v139;
      }
    }
    else
    {
      *(float *)(a1 + 508) = v232;
      *(_DWORD *)(a1 + 512) = 0;
    }
  }
  else
  {
    cocos2d::ccDrawColor4B((cocos2d *)((char *)&loc_2D + 5), 0xFFu, 0x32u, 0x64u);
    glLineWidth(3.0);
    *(_DWORD *)(a1 + 496) = -1082130432;
  }
  v140 = *(float *)(a1 + 508);
  if ( v140 <= 0.0 || v140 < v20 || v22 < v140 )
  {
    v144 = *(float *)(a1 + 512);
    v143 = v207;
    v141 = v234;
    if ( v144 <= 0.0 || v144 < v207 || v234 < v144 )
      goto LABEL_174;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v232, fminf(240000.0, v22), v144);
    v140 = fmaxf(-3000.0, v20);
  }
  else
  {
    v141 = v234;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v232, v140, fminf(v12, v234));
    v143 = v207;
    v144 = fmaxf(-3000.0, v207);
  }
  v145 = v142;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v210, v140, v144);
  cocos2d::ccDrawLine(v146, v145, v147);
LABEL_174:
  v148 = *(_QWORD *)(a1 + 520);
  v149 = *(float *)(v148 + 15336);
  if ( v149 != 0.0 || (v136 = (__int64 *)(a1 + 520), *(float *)(v148 + 15340) != 0.0) )
  {
    v136 = (__int64 *)(a1 + 520);
    if ( v149 > 0.0 )
    {
      v136 = (__int64 *)(a1 + 520);
      if ( v149 >= v20 )
      {
        v136 = (__int64 *)(a1 + 520);
        if ( v22 >= v149 )
        {
          cocos2d::ccDrawColor4B((cocos2d *)((char *)&loc_FD + 2), 0x96u, 0, 0xFFu);
          glLineWidth(2.0);
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v232, v149, fminf(v12, v141));
          v151 = v150;
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v210, v149, fmaxf(-3000.0, v143));
          cocos2d::ccDrawLine(v152, v151, v153);
          v136 = (__int64 *)(a1 + 520);
        }
      }
    }
  }
LABEL_181:
  v154 = *v136;
  v206 = v136;
  if ( *(_DWORD *)(v154 + 2204) == 1 || (v206 = v136, !*(_BYTE *)(v154 + 15017)) )
  {
    v157 = v234;
  }
  else
  {
    v155 = *(_QWORD *)(v154 + 4360);
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)&v210,
      v214 * 0.5,
      (float)(*(float *)(*(_QWORD *)(v154 + 14968) + 904LL) * 0.5) + (float)(v215 * 0.5));
    cocos2d::CCNode::convertToNodeSpace(v155, &v232, v156);
    cocos2d::ccDrawColor4B(0, 0, 0, 0x32u);
    glLineWidth(2.0);
    v157 = v234;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v234, v232, fminf(v12, v234));
    v159 = v158;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v210, v232, fmaxf(-3000.0, v143));
    cocos2d::ccDrawLine(v160, v159, v161);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v234, fminf(240000.0, v22), v233);
    v163 = v162;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v210, fmaxf(-3000.0, v20), v233);
    cocos2d::ccDrawLine(v164, v163, v165);
    v206 = (__int64 *)(a1 + 520);
  }
  v166 = *v136;
  if ( !*(_DWORD *)(*v136 + 2204) )
  {
    v168 = v206;
    goto LABEL_199;
  }
  if ( *(_BYTE *)(v166 + 1058) )
  {
LABEL_195:
    v168 = v136;
    v206 = v136;
    MinPortalY = GJBaseGameLayer_getMinPortalY(v166);
    MaxPortalY = GJBaseGameLayer_getMaxPortalY(*v136);
    glLineWidth(2.0);
    cocos2d::ccDrawColor4B((cocos2d *)((char *)&loc_FD + 2), 0xAFu, 0x32u, 0xFFu);
    if ( MinPortalY != 90.0 )
    {
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v232, fminf(240000.0, v22), MinPortalY);
      v172 = v171;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v234, fmaxf(-3000.0, v20), MinPortalY);
      cocos2d::ccDrawLine(v173, v172, v174);
    }
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v232, fminf(240000.0, v22), MaxPortalY);
    v176 = v175;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v234, fmaxf(-3000.0, v20), MaxPortalY);
    cocos2d::ccDrawLine(v177, v176, v178);
    goto LABEL_199;
  }
  v167 = *(_BYTE **)(v166 + 3576);
  if ( v167[2497] || v167[2498] || v167[2500] || v167[2508] )
  {
    v136 = (__int64 *)(a1 + 520);
    goto LABEL_195;
  }
  v168 = (__int64 *)(a1 + 520);
  v206 = (__int64 *)(a1 + 520);
  v136 = (__int64 *)(a1 + 520);
  if ( v167[2499] || v167[2502] )
    goto LABEL_195;
LABEL_199:
  if ( LODWORD(v105) != 1 )
  {
    if ( *(_BYTE *)(*v168 + 14725) )
    {
      v179 = *(_QWORD *)(*v168 + 14752);
      *(float *)&v180 = 0.0;
      v232 = 0.0;
      if ( v179 )
      {
        v181 = *(unsigned int **)(v179 + 56);
        v182 = *v181;
        if ( (_DWORD)v182 )
        {
          v183 = (__int64 *)*((_QWORD *)v181 + 2);
          v184 = &v183[v182 - 1];
          v213 = v184;
          if ( v183 <= v184 )
          {
            do
            {
              v185 = *v183;
              if ( !*v183 )
                break;
              if ( (!GameVariable || !*(_BYTE *)(v185 + 1302)) && (!v231 || !*(_BYTE *)(v185 + 1267))
                || *(_BYTE *)(v185 + 1141) )
              {
                if ( *(_BYTE *)(a1 + 632) )
                  cocos2d::CCPoint::operator=(v185 + 1816, &dword_904F10);
                v186 = *(float *)(v185 + 1468);
                v187 = *(_DWORD *)(v185 + 1036);
                if ( v187 == 1006 )
                {
                  v186 = (float)(*(float *)(v185 + 1612) + *(float *)(v185 + 1608)) + *(float *)(v185 + 1616);
                }
                else if ( v187 == 3602 )
                {
                  v186 = *(float *)(v185 + 2000);
                }
                if ( v186 > 0.0 )
                {
                  (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)v185 + 1208LL))(v185, &v208);
                  if ( v22 >= v208 && v12 >= v209 && (!*(_BYTE *)(v185 + 654) || *(_BYTE *)(v185 + 1141)) )
                  {
                    v211 = (_QWORD *)(v185 + 1816);
                    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v234, (const struct cocos2d::CCPoint *)(v185 + 1816));
                    if ( *(_BYTE *)(v185 + 1489) )
                    {
                      v235 = v209;
                      v188 = (float)(v186 * 311.58011) + v208;
                      v234 = v188;
                    }
                    else
                    {
                      v188 = v234;
                      if ( v234 == 0.0 && v235 == 0.0 )
                      {
                        v189 = *(_QWORD *)(*v168 + 3592);
                        v190 = *(_DWORD *)(v189 + 332);
                        v191 = *(_BYTE *)(v189 + 341);
                        v192 = *(_DWORD *)(v185 + 1792);
                        v193 = *(_DWORD *)(v185 + 1788);
                        v194 = *(_QWORD *)(a1 + 592);
                        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v210, (const struct cocos2d::CCPoint *)&v208);
                        LevelTools_timeForPos(v195, v194, v190, v193, v192, 0, v191, 1, 0, 0);
                        v196 = byte_9037DF;
                        v168 = v206;
                        v198 = sub_463590(
                                 (unsigned int)&v218,
                                 v197,
                                 *(_QWORD *)(a1 + 592),
                                 *(_DWORD *)(*(_QWORD *)(*v206 + 3592) + 332LL),
                                 *(_BYTE *)(*(_QWORD *)(*v206 + 3592) + 341LL),
                                 0,
                                 1,
                                 *v206 + 832);
                        cocos2d::CCPoint::operator=(&v234, v198);
                        if ( v196 == byte_9037DF )
                        {
                          if ( v196 )
                            v234 = v208;
                          else
                            v235 = v209;
                        }
                        cocos2d::CCPoint::operator=(v211, &v234);
                        v188 = v234;
                        *(float *)&v180 = v232;
                        v184 = v213;
                      }
                    }
                    if ( v188 >= v20 && v235 >= v143 )
                    {
                      v199 = v212;
                      if ( v212 + 1 < 1200 )
                      {
                        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v220, fmaxf(v20, v208), fmaxf(v143, v209));
                        cocos2d::CCPoint::operator=(*(_QWORD *)(a1 + 408) + 8LL * v180, v200);
                        v201 = *(_QWORD *)(a1 + 408) + 8 * v199;
                        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v219, fminf(v22, v234), fminf(v157, v235));
                        cocos2d::CCPoint::operator=(v201, v202);
                        v180 += 2;
                        v232 = *(float *)&v180;
                        v212 = v199 + 2;
                      }
                    }
                  }
                }
              }
              ++v183;
            }
            while ( v183 <= v184 );
            if ( v180 > 0 )
            {
              glLineWidth(2.0);
              cocos2d::ccDrawColor4B((cocos2d *)&locret_64, 0x64u, 0x64u, 0x4Bu);
              cocos2d::ccDrawLines(*(cocos2d **)(a1 + 408), (const struct cocos2d::CCPoint *)(unsigned int)v180, v203);
            }
          }
        }
      }
    }
  }
  glLineWidth(1.0);
  *(_BYTE *)(a1 + 632) = 0;
}
