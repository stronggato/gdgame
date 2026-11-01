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
