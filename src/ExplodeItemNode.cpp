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

// Address: 0x4de350
// Method: ExplodeItemNode::createSprites
// Hidden C++ exception states: #wind=5
__int64 __fastcall ExplodeItemNode_createSprites(
        __int64 a1,
        int a2,
        int a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        __int64 a10,
        __int64 a11,
        char a12)
{
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rbx
  float *v14; // r15
  __int64 v15; // rax
  float v16; // xmm15_4
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  float v20; // xmm11_4
  float v21; // xmm12_4
  char v22; // r12
  float v23; // xmm7_4
  float v24; // xmm6_4
  float *v25; // rsi
  __int64 v26; // rdi
  float *v27; // rbx
  int v28; // eax
  float v29; // xmm0_4
  __int64 v30; // rdi
  float *v31; // rbx
  __int64 v32; // r14
  int v33; // eax
  float v34; // xmm0_4
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  signed __int64 v38; // rdx
  float v39; // xmm12_4
  float v40; // xmm13_4
  float *v41; // r14
  __int64 v42; // r13
  __int64 v43; // r15
  float v44; // xmm6_4
  float v45; // xmm8_4
  cocos2d::CCSprite *v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rbx
  __int64 v53; // rax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  float v57; // xmm0_4
  float v58; // xmm0_4
  struct cocos2d::CCParticleSystemQuad *v59; // rdi
  __int64 v60; // rbx
  __int64 v61; // rbx
  __int64 v62; // rbx
  __int64 v63; // rbx
  __int64 v64; // rbx
  __int64 v65; // rax
  __int64 v68; // [rsp+30h] [rbp-D0h]
  char *v69; // [rsp+38h] [rbp-C8h]
  signed __int64 v70; // [rsp+38h] [rbp-C8h]
  float v72; // [rsp+4Ch] [rbp-B4h]
  float *v73; // [rsp+50h] [rbp-B0h]
  __int128 v74; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v75; // [rsp+68h] [rbp-98h]
  __int128 v76; // [rsp+70h] [rbp-90h] BYREF
  __int64 v77; // [rsp+80h] [rbp-80h]
  __int128 v78; // [rsp+88h] [rbp-78h] BYREF
  float *v79; // [rsp+98h] [rbp-68h]
  __int128 v80; // [rsp+A0h] [rbp-60h] BYREF
  char *v81; // [rsp+B0h] [rbp-50h]
  __int64 v82; // [rsp+B8h] [rbp-48h]
  __int64 v83; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v84; // [rsp+C8h] [rbp-38h]
  cocos2d::CCSprite *v85; // [rsp+D0h] [rbp-30h]
  char v86[8]; // [rsp+D8h] [rbp-28h] BYREF
  char v87[16]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v88; // [rsp+F0h] [rbp-10h] BYREF

  v12 = a3;
  v13 = a2;
  v14 = (float *)a1;
  v82 = a10;
  v83 = a11;
  v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 320) + 888LL))(*(_QWORD *)(a1 + 320));
  v72 = *(float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 320LL))(v15);
  v16 = v72;
  v20 = v72 / (float)(int)v13;
  v21 = v72 / (float)(int)v12;
  v14[84] = fminf(v20, v21);
  v22 = 0;
  v23 = 0.0;
  v24 = 0.0;
  v80 = 0;
  v81 = 0;
  if ( (_DWORD)v13 )
  {
    if ( v13 > 0x3FFFFFFFFFFFFFFFLL )
      sub_59000(0x3FFFFFFFFFFFFFFFLL, v17, v18, v19);
    v69 = (char *)sub_3C460(4 * v13);
    *(_QWORD *)&v80 = v69;
    v81 = &v69[4 * v13];
    memset(v69, 0, 4 * v13);
    *((_QWORD *)&v80 + 1) = v81;
  }
  else
  {
    v69 = (char *)v80;
  }
  v74 = 0;
  v75 = 0;
  if ( (_DWORD)v12 )
  {
    if ( v12 > 0x3FFFFFFFFFFFFFFFLL )
      sub_59000(0x3FFFFFFFFFFFFFFFLL, v17, v18, v19);
    *(_QWORD *)&v74 = sub_3C460(4 * v12);
    v75 = 4 * v12 + v74;
    memset((void *)v74, 0, 4 * v12);
    *((_QWORD *)&v74 + 1) = v75;
  }
  v78 = 0;
  v79 = 0;
  if ( v13 )
  {
    v25 = (float *)sub_3C460(4 * v13);
    v73 = v25;
    *(_QWORD *)&v78 = v25;
    v79 = &v25[v13];
    memset(v25, 0, 4 * v13);
    *((_QWORD *)&v78 + 1) = v79;
  }
  else
  {
    v25 = (float *)v78;
    v73 = (float *)v78;
  }
  v76 = 0;
  v77 = 0;
  if ( (_DWORD)v12 )
  {
    *(_QWORD *)&v76 = sub_3C460(4 * v12);
    v77 = 4 * v12 + v76;
    memset((void *)v76, 0, 4 * v12);
    *((_QWORD *)&v76 + 1) = v77;
  }
  v26 = a2 - 1;
  if ( a2 - 1 > 0 )
  {
    v27 = (float *)v69;
    do
    {
      v28 = rand();
      v29 = roundf(
              (float)((float)((float)((float)((float)v28 / 32767.0) * 0.44999999)
                            + (float)((float)((float)v28 / 32767.0) * 0.44999999))
                    + 0.55000001)
            * v20);
      v23 = v23 + v29;
      *v27 = v29;
      *(float *)((char *)v27++ + (char *)v25 - v69 + 4) = v23;
      --v26;
    }
    while ( v26 );
  }
  v30 = (int)v12 - 1;
  if ( (int)v12 - 1 > 0 )
  {
    v31 = (float *)v74;
    v32 = v76 - v74;
    do
    {
      v33 = rand();
      v34 = roundf(
              (float)((float)((float)((float)((float)v33 / 32767.0) * 0.44999999)
                            + (float)((float)((float)v33 / 32767.0) * 0.44999999))
                    + 0.55000001)
            * v21);
      v24 = v24 + v34;
      *v31 = v34;
      *(float *)((char *)v31++ + v32 + 4) = v24;
      --v30;
    }
    while ( v30 );
  }
  v35 = a2;
  *(float *)&v69[4 * a2 - 4] = v72 - v23;
  v36 = v74;
  *(float *)(v74 + 4 * v12 - 4) = v72 - v24;
  v37 = v12;
  v84 = v12;
  v68 = v35;
  if ( v35 > 0 )
  {
    v38 = v69 - (char *)v25;
    v70 = v69 - (char *)v25;
    do
    {
      v39 = *(float *)((char *)v25 + v38);
      v40 = *v25;
      if ( v37 > 0 )
      {
        v41 = (float *)v76;
        v42 = v36 - v76;
        v43 = v37;
        do
        {
          v44 = *(float *)((char *)v41 + v42);
          v45 = *v41;
          ++v22;
          v46 = (cocos2d::CCSprite *)operator new(0x278u);
          v85 = v46;
          cocos2d::CCSprite::CCSprite(v46);
          *(_QWORD *)v46 = &ExplodeItemSprite::`vftable';
          *((_QWORD *)v46 + 40) = &ExplodeItemSprite::`vftable';
          *((_QWORD *)v46 + 43) = &ExplodeItemSprite::`vftable';
          *((_QWORD *)v46 + 75) = 0;
          *((_QWORD *)v46 + 76) = 0;
          *((_DWORD *)v46 + 154) = 0;
          *((_QWORD *)v46 + 78) = 0;
          if ( cocos2d::CCSprite::init(v46) )
          {
            cocos2d::CCObject::autorelease(v46);
          }
          else
          {
            (*(void (__fastcall **)(cocos2d::CCSprite *, __int64))(*(_QWORD *)v46 + 8LL))(v46, 1);
            v46 = 0;
          }
          v47 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 320) + 888LL))(*(_QWORD *)(a1 + 320));
          v48 = *((_QWORD *)v46 + 43);
          v49 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v47 + 344) + 16LL))(v47 + 344);
          (*(void (__fastcall **)(__int64, __int64))(v48 + 24))((__int64)v46 + 344, v49);
          v50 = *(_QWORD *)v46;
          cocos2d::CCRect::CCRect((cocos2d::CCRect *)v87, v40, v45, v39, v44);
          (*(void (__fastcall **)(cocos2d::CCSprite *, __int64))(v50 + 992))(v46, v51);
          v52 = *(_QWORD *)v46;
          cocos2d::CCPoint::CCPoint(
            (cocos2d::CCPoint *)v86,
            (float)((float)(v39 * 0.5) + v40) - (float)(v16 * 0.5),
            (float)((float)(v44 * 0.5) + v45) - (float)(v16 * 0.5));
          (*(void (__fastcall **)(cocos2d::CCSprite *, __int64))(v52 + 184))(v46, v53);
          cocos2d::CCSprite::setFlipY(v46, 1);
          (*(void (__fastcall **)(__int64, cocos2d::CCSprite *))(*(_QWORD *)a1 + 464LL))(a1, v46);
          v54 = rand();
          *((float *)v46 + 151) = (float)((float)((float)((float)((float)v54 / 32767.0) + (float)((float)v54 / 32767.0))
                                                - 1.0)
                                        * a7)
                                + a6;
          v55 = rand();
          *((float *)v46 + 150) = (float)((float)((float)((float)((float)v55 / 32767.0) + (float)((float)v55 / 32767.0))
                                                - 1.0)
                                        * a5)
                                + a4;
          v56 = rand();
          v57 = (float)((float)((float)((float)((float)v56 / 32767.0) + (float)((float)v56 / 32767.0)) - 1.0) * a9) + a8;
          *((float *)v46 + 152) = v57;
          *((float *)v46 + 153) = fminf(v57, 0.5);
          v58 = (float)rand();
          *((float *)v46 + 154) = (float)((float)((float)((float)(v58 / 32767.0) + (float)(v58 / 32767.0)) - 1.0) * 360.0)
                                / 60.0;
          cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 328), v46);
          if ( (v22 & 1) == 0 && !a12 )
          {
            v59 = cocos2d::CCParticleSystemQuad::create("fireballEffect.plist", 0);
            (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *, __int64))(*(_QWORD *)v59 + 1496LL))(v59, 10);
            v60 = *(_QWORD *)v59;
            (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *))(*(_QWORD *)v59 + 1472LL))(v59);
            (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *))(v60 + 1480))(v59);
            v61 = *(_QWORD *)v59;
            (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *))(*(_QWORD *)v59 + 1280LL))(v59);
            (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *))(v61 + 1288))(v59);
            v62 = *(_QWORD *)v59;
            (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *))(*(_QWORD *)v59 + 1312LL))(v59);
            (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *))(v62 + 1320))(v59);
            (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *))(*(_QWORD *)v59 + 1304LL))(v59);
            (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *))(*(_QWORD *)v59 + 1336LL))(v59);
            (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *, __int64))(*(_QWORD *)v59 + 1352LL))(
              v59,
              v82);
            (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *, __int64))(*(_QWORD *)v59 + 1384LL))(
              v59,
              v83);
            v88 = 0;
            (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *, __int128 *))(*(_QWORD *)v59 + 1368LL))(
              v59,
              &v88);
            v88 = 0;
            (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *, __int128 *))(*(_QWORD *)v59 + 1400LL))(
              v59,
              &v88);
            v63 = *(_QWORD *)v59;
            rand();
            (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *))(v63 + 968))(v59);
            (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *))(*(_QWORD *)v59 + 984LL))(v59);
            (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *, __int64))(*(_QWORD *)v59 + 1528LL))(v59, 1);
            (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *, _QWORD))(*(_QWORD *)v59 + 1544LL))(v59, 0);
            (*(void (__fastcall **)(__int64, struct cocos2d::CCParticleSystemQuad *, __int64))(*(_QWORD *)a1 + 456LL))(
              a1,
              v59,
              0xFFFFFFFFLL);
            *((_QWORD *)v46 + 78) = v59;
            v64 = *(_QWORD *)v59;
            v65 = (*(__int64 (__fastcall **)(cocos2d::CCSprite *))(*(_QWORD *)v46 + 200LL))(v46);
            (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *, __int64))(v64 + 184))(v59, v65);
          }
          ++v41;
          --v43;
        }
        while ( v43 );
        v16 = v72;
        v25 = v73;
        v38 = v70;
        v36 = v74;
        v35 = v68;
        v37 = v84;
      }
      v73 = ++v25;
      v68 = --v35;
    }
    while ( v35 );
    v14 = (float *)a1;
  }
  cocos2d::CCNode::scheduleUpdate((cocos2d::CCNode *)v14);
  sub_685C0(&v76);
  sub_685C0(&v78);
  sub_685C0(&v74);
  return sub_685C0(&v80);
}
