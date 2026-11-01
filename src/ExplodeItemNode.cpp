#include <Geode/binding/ExplodeItemNode.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x4d8a20
// Method: ExplodeItemNode::~ExplodeItemNode
cocos2d::CCNode *__fastcall ExplodeItemNode__dtor_ExplodeItemNode(cocos2d::CCNode *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx
  cocos2d::CCObject *v5; // rcx

  *(_QWORD *)Block = &ExplodeItemNode::`vftable'; /*0x4d8a36*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 40); /*0x4d8a39*/
  if ( v4 ) /*0x4d8a43*/
    cocos2d::CCObject::release(v4); /*0x4d8a45*/
  v5 = (cocos2d::CCObject *)*((_QWORD *)Block + 41); /*0x4d8a4b*/
  if ( v5 ) /*0x4d8a55*/
    cocos2d::CCObject::release(v5); /*0x4d8a57*/
  cocos2d::CCNode::~CCNode(Block); /*0x4d8a60*/
  if ( (a2 & 1) != 0 ) /*0x4d8a6b*/
    j_j_free(Block); /*0x4d8a75*/
  return Block; /*0x4d8a7d*/
}

// [2/4] Address: 0x4de280
// Method: ExplodeItemNode::create
// Hidden C++ exception states: #wind=1
cocos2d::CCNode *__fastcall ExplodeItemNode_create(cocos2d::CCObject *a1)
{
  cocos2d::CCNode *v2; // rbx
  __int64 v3; // rcx
  cocos2d::CCObject *v4; // rax

  v2 = (cocos2d::CCNode *)operator new(0x160u); /*0x4de297*/
  cocos2d::CCNode::CCNode(v2); /*0x4de2a2*/
  *(_QWORD *)v2 = &ExplodeItemNode::`vftable'; /*0x4de2af*/
  *((_QWORD *)v2 + 40) = 0; /*0x4de2b2*/
  *((_QWORD *)v2 + 42) = 0; /*0x4de2bd*/
  *((_BYTE *)v2 + 344) = 0; /*0x4de2c8*/
  if ( cocos2d::CCNode::init(v2) ) /*0x4de2d2*/
  {
    *((_DWORD *)v2 + 85) = 1119092736; /*0x4de2dc*/
    *((_QWORD *)v2 + 40) = a1; /*0x4de2e6*/
    cocos2d::CCObject::retain(a1); /*0x4de2f0*/
    v4 = (cocos2d::CCObject *)cocos2d::CCArray::create(v3); /*0x4de2f6*/
    *((_QWORD *)v2 + 41) = v4; /*0x4de2fc*/
    cocos2d::CCObject::retain(v4); /*0x4de306*/
    cocos2d::CCObject::autorelease(v2); /*0x4de30f*/
    return v2; /*0x4de315*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCNode *, __int64))(*(_QWORD *)v2 + 8LL))(v2, 1); /*0x4de332*/
    return 0; /*0x4de335*/
  }
}

// [4/4] Address: 0x4dec30
// Method: ExplodeItemNode::update
unsigned int __fastcall ExplodeItemNode_update(cocos2d::CCNode *a1, float a2)
{
  float v3; // xmm7_4
  float v5; // xmm10_4
  unsigned int v6; // ebp
  float v7; // xmm13_4
  struct cocos2d::CCObject *v8; // rdi
  const struct cocos2d::CCPoint *v9; // rax
  float v10; // xmm0_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  __int64 v13; // rax
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  __int64 v17; // rbx
  float v18; // xmm1_4
  float v19; // xmm0_4
  __int64 v20; // rcx
  char v21; // cl
  __int64 *v22; // r14
  __int64 v23; // rbx
  __int64 v24; // rax
  cocos2d::CCParticleSystem *v25; // rcx
  unsigned int v26; // eax
  unsigned int result; // eax
  char v28; // [rsp+F0h] [rbp+8h] BYREF
  float v29; // [rsp+F4h] [rbp+Ch]
  char v30; // [rsp+100h] [rbp+18h] BYREF
  char v31; // [rsp+108h] [rbp+20h] BYREF

  v3 = a2 * 54.0; /*0x4dec54*/
  v5 = (float)(a2 * 54.0) * 0.5; /*0x4dec8d*/
  if ( *((_BYTE *)a1 + 344) ) /*0x4dec3b*/
    v5 = 0.0; /*0x4dec94*/
  v6 = 0; /*0x4decb4*/
  v7 = *((float *)a1 + 85) - *(float *)((*(__int64 (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)a1 + 200LL))(a1) + 4); /*0x4decb7*/
  if ( cocos2d::CCArray::count(*((cocos2d::CCArray **)a1 + 41)) ) /*0x4decbd*/
  {
    do /*0x4def62*/
    {
      v8 = cocos2d::CCArray::objectAtIndex(*((cocos2d::CCArray **)a1 + 41), v6); /*0x4ded2f*/
      v9 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v8 + 200LL))(v8); /*0x4ded3f*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v30, v9); /*0x4ded4c*/
      v10 = *((float *)v8 + 152) - a2; /*0x4ded5a*/
      *((float *)v8 + 152) = v10; /*0x4ded63*/
      if ( v10 <= 0.0 ) /*0x4ded6b*/
      {
        v25 = (cocos2d::CCParticleSystem *)*((_QWORD *)v8 + 78); /*0x4def00*/
        if ( v25 ) /*0x4def0a*/
        {
          cocos2d::CCParticleSystem::stopSystem(v25); /*0x4def0c*/
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v8 + 78) + 528LL))(*((_QWORD *)v8 + 78)); /*0x4def1c*/
          *((_QWORD *)v8 + 78) = 0; /*0x4def22*/
        }
        cocos2d::CCArray::removeObjectAtIndex(*((cocos2d::CCArray **)a1 + 41), v6, 1); /*0x4def35*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v8 + 528LL))(v8); /*0x4def41*/
        v21 = 1; /*0x4def47*/
      }
      else
      {
        v11 = *((float *)v8 + 151) - v5; /*0x4ded89*/
        *((float *)v8 + 151) = v11; /*0x4ded92*/
        v12 = (float)((float)((float)(1.0 - v3) * 0.02) + 0.98000002) * *((float *)v8 + 150); /*0x4dedae*/
        *((float *)v8 + 150) = v12; /*0x4dedb6*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v31, v12 * v3, v11 * v3); /*0x4dedc2*/
        cocos2d::CCPoint::operator+(&v30, &v28, v13); /*0x4deddb*/
        v14 = (float)(fminf(*((float *)v8 + 108), *((float *)v8 + 109)) * 0.5) + v7; /*0x4dedf6*/
        if ( v14 > v29 ) /*0x4dee03*/
        {
          v15 = *((float *)v8 + 151); /*0x4dee05*/
          if ( v15 < 0.0 ) /*0x4dee11*/
          {
            v16 = v15 * -0.80000001; /*0x4dee13*/
            v29 = v14; /*0x4dee18*/
            *((float *)v8 + 151) = v16; /*0x4dee25*/
            if ( v16 < 1.5 ) /*0x4dee2d*/
              *((_DWORD *)v8 + 151) = 1069547520; /*0x4dee2f*/
          }
        }
        (*(void (__fastcall **)(struct cocos2d::CCObject *, char *))(*(_QWORD *)v8 + 184LL))(v8, &v28); /*0x4dee47*/
        v17 = *(_QWORD *)v8; /*0x4dee4d*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v8 + 360LL))(v8); /*0x4dee5e*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *))(v17 + 352))(v8); /*0x4dee6e*/
        v18 = *((float *)v8 + 153); /*0x4dee74*/
        v19 = *((float *)v8 + 152); /*0x4dee7c*/
        if ( v18 > v19 ) /*0x4dee87*/
        {
          (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v8 + 40) + 40LL))( /*0x4deea0*/
            (__int64)v8 + 320,
            (unsigned int)(int)(float)((float)(v19 / v18) * 255.0));
          v20 = *((_QWORD *)v8 + 78); /*0x4deea3*/
          if ( v20 ) /*0x4deead*/
            *(_BYTE *)(v20 + 838) = (int)(float)((float)(*((float *)v8 + 152) / *((float *)v8 + 153)) * 255.0); /*0x4deec8*/
        }
        v21 = 0; /*0x4deece*/
        if ( v8 ) /*0x4deed3*/
        {
          v22 = (__int64 *)*((_QWORD *)v8 + 78); /*0x4deed5*/
          if ( v22 ) /*0x4deedf*/
          {
            v23 = *v22; /*0x4deee7*/
            v24 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v8 + 200LL))(v8); /*0x4deeea*/
            (*(void (__fastcall **)(__int64 *, __int64))(v23 + 184))(v22, v24); /*0x4deef6*/
            v21 = 0; /*0x4deefc*/
          }
        }
      }
      v26 = v6 + 1; /*0x4def4b*/
      if ( v21 ) /*0x4def55*/
        v26 = v6; /*0x4def55*/
      v6 = v26; /*0x4def58*/
    }
    while ( v26 < cocos2d::CCArray::count(*((cocos2d::CCArray **)a1 + 41)) ); /*0x4def62*/
  }
  result = cocos2d::CCArray::count(*((cocos2d::CCArray **)a1 + 41)); /*0x4defa4*/
  if ( !result ) /*0x4defe5*/
  {
    cocos2d::CCNode::unscheduleUpdate(a1); /*0x4defea*/
    return (*(__int64 (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)a1 + 528LL))(a1); /*0x4deff6*/
  }
  return result; /*0x4deffc*/
}
