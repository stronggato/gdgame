#include <Geode/binding/CCCircleWave.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/7] Address: 0x45470
// Method: CCCircleWave::~CCCircleWave
// Hidden C++ exception states: #wind=1
cocos2d::CCNode *__fastcall CCCircleWave__dtor_CCCircleWave(cocos2d::CCNode *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *(_QWORD *)Block = &CCCircleWave::`vftable'; /*0x45486*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 40); /*0x45489*/
  if ( v4 ) /*0x45493*/
    cocos2d::CCObject::release(v4); /*0x45495*/
  cocos2d::CCNode::~CCNode(Block); /*0x4549e*/
  if ( (a2 & 1) != 0 ) /*0x454a9*/
    j_j_free(Block); /*0x454b3*/
  return Block; /*0x454bb*/
}

// [2/7] Address: 0x454d0
// Method: CCCircleWave::create
// Hidden C++ exception states: #wind=1
cocos2d::CCObject *__fastcall CCCircleWave_create(__int64 a1, __int64 a2, __int64 a3, char a4, char a5)
{
  __int64 v6; // rax
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  cocos2d::CCObject *v10; // rbx
  void *v12; // [rsp+30h] [rbp-48h]

  v12 = operator new(0x178u); /*0x45502*/
  v6 = sub_45400(v12); /*0x4550a*/
  v10 = (cocos2d::CCObject *)v6; /*0x4550f*/
  if ( v6 ) /*0x45515*/
  {
    if ( (unsigned __int8)CCCircleWave_init(v6, v7, v8, v9, a4, a5) ) /*0x45535*/
    {
      cocos2d::CCObject::autorelease(v10); /*0x45541*/
      return v10; /*0x4554a*/
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v10 + 8LL))(v10, 1); /*0x45554*/
  }
  return 0; /*0x45559*/
}

// [3/7] Address: 0x45580
// Method: CCCircleWave::init
char __fastcall CCCircleWave_init(__int64 a1, float a2, float a3, float a4, char a5, char a6)
{
  struct cocos2d::CCActionInterval *v7; // rax
  struct cocos2d::CCFiniteTimeAction *v8; // rbx
  struct cocos2d::CCActionInterval *v9; // rax
  struct cocos2d::CCActionTween *v10; // rax
  struct cocos2d::CCFiniteTimeAction *v11; // rbx
  __int64 v12; // rax
  struct cocos2d::CCAction *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax
  cocos2d::CCActionManager *v16; // rax
  struct cocos2d::CCFiniteTimeAction *v18; // rsi
  struct cocos2d::CCFiniteTimeAction *v19; // rdi
  struct cocos2d::CCActionTween *v20; // rbx
  __int64 v21; // rax
  struct cocos2d::CCSequence *v22; // rax
  struct cocos2d::CCAction *v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rax
  cocos2d::CCActionManager *v26; // rax

  *(_WORD *)(a1 + 340) = -1; /*0x45598*/
  *(_BYTE *)(a1 + 342) = -1; /*0x455a9*/
  *(float *)(a1 + 332) = a2; /*0x455bc*/
  *(_DWORD *)(a1 + 336) = 1132396544; /*0x455c7*/
  *(_DWORD *)(a1 + 360) = 1065353216; /*0x455d4*/
  *(_DWORD *)(a1 + 352) = 0; /*0x455de*/
  *(_DWORD *)(a1 + 356) = 2; /*0x455e4*/
  *(_QWORD *)(a1 + 320) = 0; /*0x455ee*/
  *(_BYTE *)(a1 + 364) = 1; /*0x455f5*/
  if ( a5 ) /*0x45600*/
  {
    *(_DWORD *)(a1 + 336) = 0; /*0x456ea*/
    v18 = cocos2d::CCActionTween::create(a4, "radius", a2, a3); /*0x45705*/
    v19 = cocos2d::CCActionTween::create(a4 * 0.5, "opacity", *(float *)(a1 + 336), 255.0); /*0x45736*/
    v20 = cocos2d::CCActionTween::create(a4 * 0.5, "opacity", 255.0, 0.0); /*0x45749*/
    v21 = cocos2d::CCCallFunc::create(a1, sub_3E5B0); /*0x4574c*/
    v22 = cocos2d::CCSequence::create(v19, v20, v21, 0); /*0x4575e*/
    v23 = cocos2d::CCSpawn::create(v18, v22, 0); /*0x45773*/
    v25 = cocos2d::CCDirector::sharedDirector(v24); /*0x45776*/
    v26 = (cocos2d::CCActionManager *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 128LL))(v25); /*0x45789*/
    cocos2d::CCActionManager::addAction(v26, v23, (struct cocos2d::CCNode *)a1, 0); /*0x45797*/
    return 1; /*0x457a2*/
  }
  else
  {
    v7 = cocos2d::CCActionTween::create(a4, "radius", a2, a3); /*0x45606*/
    v8 = v7; /*0x45611*/
    if ( a6 ) /*0x45614*/
    {
      v8 = cocos2d::CCEaseOut::create(v7, 2.0); /*0x4563c*/
      v9 = cocos2d::CCActionTween::create(a4, "opacity", *(float *)(a1 + 336), 0.0); /*0x4563f*/
      v10 = cocos2d::CCEaseOut::create(v9, 2.0); /*0x45650*/
    }
    else
    {
      v10 = cocos2d::CCActionTween::create(a4, "opacity", *(float *)(a1 + 336), 0.0); /*0x4566d*/
    }
    v11 = cocos2d::CCSpawn::create(v8, v10, 0); /*0x4568c*/
    v12 = cocos2d::CCCallFunc::create(a1, sub_3E5B0); /*0x4568f*/
    v13 = cocos2d::CCSequence::create(v11, v12, 0); /*0x456a4*/
    v15 = cocos2d::CCDirector::sharedDirector(v14); /*0x456a7*/
    v16 = (cocos2d::CCActionManager *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 128LL))(v15); /*0x456ba*/
    cocos2d::CCActionManager::addAction(v16, v13, (struct cocos2d::CCNode *)a1, 0); /*0x456c8*/
    return 1; /*0x456ce*/
  }
}

// [4/7] Address: 0x457c0
// Method: CCCircleWave::setPosition
double __fastcall CCCircleWave_setPosition(cocos2d::CCNode *a1, __int64 a2)
{
  cocos2d::CCNode::setPosition(a1, (const struct cocos2d::CCPoint *)&unk_903960); /*0x457d7*/
  return cocos2d::CCPoint::operator=((char *)a1 + 344, a2); /*0x457e7*/
}

// [5/7] Address: 0x45800
// Method: CCCircleWave::updatePosition
void __fastcall CCCircleWave_updatePosition(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rax

  v2 = a1[40]; /*0x45809*/
  if ( v2 ) /*0x45813*/
  {
    v3 = *a1; /*0x4581d*/
    v4 = (*(__int64 (**)(void))(*(_QWORD *)v2 + 200LL))(); /*0x45820*/
    (*(void (__fastcall **)(__int64 *, __int64))(v3 + 184))(a1, v4); /*0x4582c*/
  }
}

// [6/7] Address: 0x45ae0
// Method: CCCircleWave::draw
void __fastcall CCCircleWave_draw(__int64 a1, __int64 a2, unsigned int a3, float a4)
{
  const struct cocos2d::CCPoint *v5; // rdx
  cocos2d *v6; // rcx
  unsigned int v7; // r8d

  if ( *(_BYTE *)(a1 + 364) ) /*0x45ae6*/
    cocos2d::ccGLBlendFunc((cocos2d *)((char *)&loc_300 + 2), 1u, a3); /*0x45afc*/
  if ( *(_DWORD *)(a1 + 352) ) /*0x45b02*/
    glLineWidth((float)*(int *)(a1 + 356)); /*0x45b16*/
  cocos2d::ccDrawColor4B( /*0x45b5a*/
    (cocos2d *)*(unsigned __int8 *)(a1 + 340),
    *(_BYTE *)(a1 + 341),
    *(_BYTE *)(a1 + 342),
    (int)fminf(255.0, fmaxf(0.0, *(float *)(a1 + 360) * *(float *)(a1 + 336))));
  v6 = (cocos2d *)(a1 + 344); /*0x45bc8*/
  if ( *(_DWORD *)(a1 + 352) ) /*0x45bc1*/
    cocos2d::ccDrawCircle(v6, v5, 0.0, a4, 0); /*0x45be1*/
  else
    cocos2d::ccDrawFilledCircle(v6, v5, 0.0, a4); /*0x45bd4*/
  if ( *(_BYTE *)(a1 + 364) ) /*0x45be7*/
    cocos2d::ccGLBlendFunc((cocos2d *)((char *)sub_0 + 1), 0x303u, v7); /*0x45bff*/
}

// [7/7] Address: 0x45c10
// Method: CCCircleWave::removeMeAndCleanup
void __fastcall CCCircleWave_removeMeAndCleanup(cocos2d::CCNode *a1)
{
  void (__fastcall ***v2)(_QWORD, cocos2d::CCNode *); // rcx

  v2 = (void (__fastcall ***)(_QWORD, cocos2d::CCNode *))*((_QWORD *)a1 + 46); /*0x45c19*/
  if ( v2 ) /*0x45c23*/
    (**v2)(v2, a1); /*0x45c2b*/
  cocos2d::CCNode::removeMeAndCleanup(a1); /*0x45c35*/
}
