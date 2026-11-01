#include <Geode/binding/GhostTrailEffect.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x758d0
// Method: GhostTrailEffect::~GhostTrailEffect
cocos2d::CCNode *__fastcall GhostTrailEffect__dtor_GhostTrailEffect(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &GhostTrailEffect::`vftable'; /*0x758e3*/
  cocos2d::CCNode::~CCNode(Block); /*0x758e9*/
  if ( (a2 & 1) != 0 ) /*0x758f2*/
    j_j_free(Block); /*0x758fc*/
  return Block; /*0x75901*/
}

// [2/3] Address: 0x75a00
// Method: GhostTrailEffect::init
char __fastcall GhostTrailEffect_init(__int64 a1)
{
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 336LL))(a1, 0); /*0x75a0e*/
  *(_DWORD *)(a1 + 340) = 1; /*0x75a14*/
  *(_DWORD *)(a1 + 344) = 771; /*0x75a20*/
  *(_WORD *)(a1 + 392) = -1; /*0x75a2a*/
  *(_BYTE *)(a1 + 394) = -1; /*0x75a33*/
  *(_DWORD *)(a1 + 376) = 1132396544; /*0x75a3a*/
  *(_DWORD *)(a1 + 336) = 1065353216; /*0x75a44*/
  return 1; /*0x75a4e*/
}

// [3/3] Address: 0x75a60
// Method: GhostTrailEffect::trailSnapshot
struct cocos2d::CCAction *__fastcall GhostTrailEffect_trailSnapshot(__int64 a1)
{
  cocos2d::CCSprite *v1; // rdi
  struct cocos2d::CCTexture2D *v3; // rax
  struct cocos2d::CCSprite *v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rax
  const struct cocos2d::CCPoint *v7; // rax
  __int64 v8; // rcx
  bool isFlipX; // al
  bool isFlipY; // al
  __int64 v11; // rbx
  __int64 *v12; // r15
  __int64 v13; // rbx
  int v14; // eax
  char *v15; // rcx
  void (__fastcall *v16)(char *, _QWORD); // r8
  struct cocos2d::CCFiniteTimeAction *v17; // rbx
  __int64 v18; // rax
  struct cocos2d::CCAction *v19; // rax
  struct cocos2d::CCAction *result; // rax
  float v21; // xmm6_4
  double v22; // xmm0_8
  float v23; // xmm7_4
  float v24; // xmm6_4
  float v25; // xmm7_4
  double v26; // xmm0_8
  struct cocos2d::CCAction *v27; // rax
  struct cocos2d::CCFiniteTimeAction *v28; // rdi
  struct cocos2d::CCFadeTo *v29; // rbx
  __int64 v30; // rax
  struct cocos2d::CCAction *v31; // rax
  struct cocos2d::CCFiniteTimeAction *v32; // rbx
  struct cocos2d::CCScaleTo *v33; // rax
  _BYTE v34[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v35[8]; // [rsp+28h] [rbp-50h] BYREF
  char v36; // [rsp+80h] [rbp+8h] BYREF
  char v37; // [rsp+90h] [rbp+18h] BYREF
  char v38; // [rsp+98h] [rbp+20h] BYREF

  v1 = *(cocos2d::CCSprite **)(a1 + 360); /*0x75a70*/
  if ( !v1 ) /*0x75a87*/
    v1 = *(cocos2d::CCSprite **)(a1 + 352); /*0x75a89*/
  v3 = (struct cocos2d::CCTexture2D *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 352) + 344LL) /*0x75aa1*/
                                                                         + 16LL))(*(_QWORD *)(a1 + 352) + 344LL);
  v4 = cocos2d::CCSprite::createWithTexture(v3); /*0x75ab4*/
  if ( (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 352) + 1024LL))(*(_QWORD *)(a1 + 352)) ) /*0x75aba*/
  {
    v5 = *(_QWORD *)v4; /*0x75acc*/
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 352) + 1024LL))(*(_QWORD *)(a1 + 352)); /*0x75ad2*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v5 + 1008))(v4, v6); /*0x75ade*/
  }
  (**((void (__fastcall ***)(__int64, _QWORD))v4 + 43))((__int64)v4 + 344, *(_QWORD *)(a1 + 340)); /*0x75af5*/
  v7 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(cocos2d::CCSprite *))(*(_QWORD *)v1 + 200LL))(v1); /*0x75afd*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v36, v7); /*0x75b0e*/
  if ( *(float *)(a1 + 396) != *(float *)&dword_903C00 || *(float *)(a1 + 400) != *(float *)&dword_903C04 ) /*0x75b3c*/
  {
    cocos2d::CCNode::convertToWorldSpace(*(_QWORD *)(a1 + 352), &v38, a1 + 396); /*0x75b4d*/
    cocos2d::CCNode::convertToWorldSpace(*(_QWORD *)(a1 + 352), &v37, &dword_903C00); /*0x75b69*/
    cocos2d::CCPoint::operator-(&v38, v34, &v37); /*0x75b84*/
    cocos2d::CCPoint::operator+(&v36, v35, v34); /*0x75b9c*/
    cocos2d::CCPoint::operator=(&v36, v35); /*0x75baf*/
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 352) + 128LL))(*(_QWORD *)(a1 + 352)); /*0x75bbf*/
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 352) + 144LL))(*(_QWORD *)(a1 + 352)); /*0x75bda*/
  v8 = *(_QWORD *)(a1 + 360); /*0x75be0*/
  if ( v8 ) /*0x75bf5*/
    (*(float (__fastcall **)(__int64))(*(_QWORD *)v8 + 144LL))(v8); /*0x75bfa*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, char *))(*(_QWORD *)v4 + 184LL))(v4, &v36); /*0x75c1e*/
  isFlipX = cocos2d::CCSprite::isFlipX(v1); /*0x75c27*/
  cocos2d::CCSprite::setFlipX(v4, isFlipX); /*0x75c33*/
  isFlipY = cocos2d::CCSprite::isFlipY(v1); /*0x75c3c*/
  cocos2d::CCSprite::setFlipY(v4, isFlipY); /*0x75c48*/
  v11 = *(_QWORD *)v4; /*0x75c54*/
  (*(void (__fastcall **)(cocos2d::CCSprite *))(*(_QWORD *)v1 + 360LL))(v1); /*0x75c57*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(v11 + 352))(v4); /*0x75c63*/
  (**((void (__fastcall ***)(__int64, __int64))v4 + 40))((__int64)v4 + 320, a1 + 392); /*0x75c7e*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v4 + 120LL))(v4); /*0x75c89*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v4 + 136LL))(v4); /*0x75c95*/
  v12 = *(__int64 **)(a1 + 368); /*0x75c9b*/
  if ( !v12 ) /*0x75ca5*/
    v12 = (__int64 *)(*(__int64 (__fastcall **)(cocos2d::CCSprite *))(*(_QWORD *)v1 + 504LL))(v1); /*0x75cb3*/
  v13 = *v12; /*0x75cbc*/
  v14 = (*(__int64 (__fastcall **)(cocos2d::CCSprite *))(*(_QWORD *)v1 + 96LL))(v1); /*0x75cbf*/
  (*(void (__fastcall **)(__int64 *, struct cocos2d::CCSprite *, _QWORD))(v13 + 456))(v12, v4, (unsigned int)(v14 - 1)); /*0x75ccc*/
  v15 = (char *)v4 + 320; /*0x75cd9*/
  v16 = *(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)v4 + 40) + 40LL); /*0x75ce7*/
  if ( *(_BYTE *)(a1 + 332) ) /*0x75cd2*/
  {
    v16(v15, 0); /*0x75da7*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v4 + 160LL))(v4); /*0x75dc0*/
    v28 = cocos2d::CCFadeTo::create(*(float *)(a1 + 324) * 0.5, (int)*(float *)(a1 + 376)); /*0x75df6*/
    v29 = cocos2d::CCFadeTo::create(*(float *)(a1 + 324) * 0.5, 0); /*0x75e09*/
    v30 = cocos2d::CCCallFunc::create(v4, sub_3E5B0); /*0x75e0c*/
    v31 = cocos2d::CCSequence::create(v28, v29, v30, 0); /*0x75e1e*/
    result = cocos2d::CCNode::runAction(v4, v31); /*0x75e2a*/
    if ( *(float *)(a1 + 328) == 1.0 ) /*0x75e45*/
      return result; /*0x75e45*/
    v32 = cocos2d::CCScaleTo::create(*(float *)(a1 + 324) * 0.5, 1.0); /*0x75e61*/
    v33 = cocos2d::CCScaleTo::create(*(float *)(a1 + 324) * 0.5, *(float *)(a1 + 336) * *(float *)(a1 + 328)); /*0x75e78*/
    v27 = cocos2d::CCSequence::create(v32, v33, 0); /*0x75e87*/
  }
  else
  {
    v16(v15, (unsigned int)(int)*(float *)(a1 + 376)); /*0x75cf9*/
    v17 = cocos2d::CCFadeTo::create(*(float *)(a1 + 324), 0); /*0x75d16*/
    v18 = cocos2d::CCCallFunc::create(v4, sub_3E5B0); /*0x75d19*/
    v19 = cocos2d::CCSequence::create(v17, v18, 0); /*0x75d28*/
    result = cocos2d::CCNode::runAction(v4, v19); /*0x75d34*/
    v21 = *(float *)(a1 + 328); /*0x75d3a*/
    if ( v21 == 1.0 ) /*0x75d4b*/
      return result; /*0x75d4b*/
    v22 = (*(double (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v4 + 144LL))(v4); /*0x75d57*/
    v23 = *(float *)&v22 * v21; /*0x75d66*/
    v24 = *(float *)(a1 + 328); /*0x75d6a*/
    v25 = v23 * *(float *)(a1 + 336); /*0x75d72*/
    v26 = (*(double (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v4 + 128LL))(v4); /*0x75d7a*/
    v27 = cocos2d::CCScaleTo::create(*(float *)(a1 + 324), (float)(*(float *)&v26 * v24) * *(float *)(a1 + 336), v25); /*0x75d9a*/
  }
  return cocos2d::CCNode::runAction(v4, v27); /*0x75e99*/
}
