#include <Geode/binding/CCLightFlash.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x460c0
// Method: CCLightFlash::playEffect
// Hidden C++ exception states: #wind=1
struct cocos2d::CCAction *__fastcall CCLightFlash_playEffect(
        cocos2d::CCNode *a1,
        __int64 a2,
        __int64 a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11,
        float a12,
        float a13,
        float a14,
        float a15,
        float a16,
        float a17,
        int a18,
        int a19,
        int a20,
        float a21)
{
  cocos2d::CCObject *v22; // rax
  float v23; // xmm12_4
  __int64 v24; // rcx
  cocos2d::CCArray *v25; // r15
  int v26; // ebp
  int v27; // ebx
  struct cocos2d::CCObject *v28; // rax
  float v29; // xmm11_4
  float v30; // xmm11_4
  float v31; // xmm8_4
  float v32; // xmm8_4
  int v33; // eax
  float v34; // xmm7_4
  int v35; // eax
  float v36; // xmm6_4
  float *v37; // r14
  struct cocos2d::CCFiniteTimeAction *v38; // rsi
  __int64 v39; // rdi
  struct cocos2d::CCActionInterval *v40; // rax
  struct cocos2d::CCFiniteTimeAction *v41; // rbx
  struct cocos2d::CCActionInterval *v42; // rax
  struct cocos2d::CCEaseOut *v43; // rax
  struct cocos2d::CCSpawn *v44; // rax
  struct cocos2d::CCAction *v45; // rbx
  __int64 v46; // rcx
  __int64 v47; // rax
  cocos2d::CCActionManager *v48; // rax
  int v49; // ebx
  float v50; // xmm1_4
  unsigned int v51; // ebx
  cocos2d::CCString *v52; // rax
  __int64 v53; // rbx
  int v54; // eax
  struct cocos2d::CCFiniteTimeAction *v55; // rbx
  __int64 v56; // rax
  struct cocos2d::CCAction *v57; // rax

  v22 = (cocos2d::CCObject *)cocos2d::CCArray::create(a1); /*0x4611f*/
  *((_QWORD *)a1 + 40) = v22; /*0x46125*/
  cocos2d::CCObject::retain(v22); /*0x4612f*/
  v23 = 0.0; /*0x46135*/
  *((_BYTE *)a1 + 336) = 0; /*0x46139*/
  v25 = (cocos2d::CCArray *)cocos2d::CCArray::create(v24); /*0x46147*/
  v26 = 0; /*0x46185*/
  v27 = 0; /*0x46187*/
  if ( a18 > 0 ) /*0x4618c*/
  {
    do /*0x461d6*/
    {
      v28 = cocos2d::CCString::createWithFormat( /*0x461bf*/
              "%0.1f",
              (float)((float)((float)v27 * (float)((float)((float)(a14 + a15) - (float)(a14 - a15)) / (float)a18))
                    + (float)(a14 - a15)));
      cocos2d::CCArray::addObject(v25, v28); /*0x461cb*/
      ++v27; /*0x461d1*/
    }
    while ( v27 < a18 ); /*0x461d6*/
    do /*0x46546*/
    {
      v29 = (float)rand(); /*0x46210*/
      v30 = (float)((float)((float)((float)(v29 / 32767.0) + (float)(v29 / 32767.0)) - 1.0) * a13) /*0x46246*/
          + (float)((float)((float)v26 * a11) + a12);
      v31 = (float)rand(); /*0x46256*/
      v32 = (float)((float)((float)((float)(v31 / 32767.0) + (float)(v31 / 32767.0)) - 1.0) * a10) + a9; /*0x46273*/
      v33 = rand(); /*0x4627d*/
      v34 = (float)((float)((float)((float)((float)v33 / 32767.0) + (float)((float)v33 / 32767.0)) - 1.0) * a7) + a6; /*0x462a1*/
      v35 = rand(); /*0x462aa*/
      v36 = (float)((float)((float)((float)((float)v35 / 32767.0) + (float)((float)v35 / 32767.0)) - 1.0) * a5) + a4; /*0x462ce*/
      v37 = (float *)operator new(0x160u); /*0x462e1*/
      cocos2d::CCNode::CCNode((cocos2d::CCNode *)v37); /*0x462ef*/
      *(_QWORD *)v37 = &CCLightStrip::`vftable'; /*0x462f5*/
      v37[80] = v36; /*0x462f8*/
      v37[81] = v34; /*0x46301*/
      v37[82] = a8; /*0x46313*/
      v37[83] = v32; /*0x4631c*/
      v37[86] = v36; /*0x46325*/
      v37[87] = 1.0; /*0x4632e*/
      v37[85] = 255.0; /*0x46339*/
      cocos2d::CCNode::setVisible((cocos2d::CCNode *)v37, 0); /*0x46350*/
      v38 = cocos2d::CCDelayTime::create(v30); /*0x4635c*/
      v39 = cocos2d::CCShow::create(); /*0x46365*/
      v40 = cocos2d::CCActionTween::create(v32, "height", v37[87], a8); /*0x4637f*/
      v41 = cocos2d::CCEaseOut::create(v40, 2.0); /*0x46399*/
      v42 = cocos2d::CCActionTween::create(v32, "width", v37[86], v37[81]); /*0x463b9*/
      v43 = cocos2d::CCEaseOut::create(v42, 2.0); /*0x463c5*/
      v44 = cocos2d::CCSpawn::create(v41, v43, 0); /*0x463d4*/
      v45 = cocos2d::CCSequence::create(v38, v39, v44, 0); /*0x463ec*/
      v47 = cocos2d::CCDirector::sharedDirector(v46); /*0x463ef*/
      v48 = (cocos2d::CCActionManager *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 128LL))(v47); /*0x46402*/
      cocos2d::CCActionManager::addAction(v48, v45, (struct cocos2d::CCNode *)v37, 0); /*0x46410*/
      cocos2d::CCObject::autorelease((cocos2d::CCObject *)v37); /*0x46419*/
      (*(void (__fastcall **)(cocos2d::CCNode *, float *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v37, 1); /*0x4642f*/
      (*(void (__fastcall **)(float *, __int64))(*(_QWORD *)v37 + 184LL))(v37, a2); /*0x46443*/
      v49 = cocos2d::CCArray::count(v25); /*0x46452*/
      if ( v49 > 0 ) /*0x46456*/
      {
        v50 = (float)rand() / 32767.0; /*0x46465*/
        if ( v50 == 1.0 ) /*0x46470*/
          v50 = 0.0; /*0x46472*/
        v51 = (int)floorf((float)v49 * v50); /*0x46485*/
        v52 = cocos2d::CCArray::objectAtIndex(v25, v51); /*0x4648e*/
        cocos2d::CCString::floatValue(v52); /*0x46497*/
        cocos2d::CCArray::removeObjectAtIndex(v25, v51, 1); /*0x464a8*/
        v53 = *(_QWORD *)v37; /*0x464ae*/
        rand(); /*0x464b1*/
        (*(void (__fastcall **)(float *))(v53 + 352))(v37); /*0x464cf*/
      }
      v54 = rand(); /*0x464d5*/
      v37[85] = (float)((float)((float)((float)((float)v54 / 32767.0) + (float)((float)v54 / 32767.0)) - 1.0) * a17) /*0x464fa*/
              + a16;
      *((_WORD *)v37 + 168) = *(_WORD *)a3; /*0x4650e*/
      *((_BYTE *)v37 + 338) = *(_BYTE *)(a3 + 2); /*0x4651a*/
      cocos2d::CCArray::addObject(*((cocos2d::CCArray **)a1 + 40), (struct cocos2d::CCObject *)v37); /*0x4652b*/
      v23 = fmaxf(v30, v23); /*0x46536*/
      ++v26; /*0x4653a*/
    }
    while ( v26 < a18 ); /*0x46546*/
  }
  v55 = cocos2d::CCDelayTime::create(v23 + a21); /*0x46560*/
  v56 = cocos2d::CCCallFunc::create(a1, CCLightFlash_showFlash); /*0x4656d*/
  v57 = cocos2d::CCSequence::create(v55, v56, 0); /*0x4657c*/
  return cocos2d::CCNode::runAction(a1, v57); /*0x46588*/
}

// [2/4] Address: 0x465e0
// Method: CCLightFlash::showFlash
struct cocos2d::CCAction *__fastcall CCLightFlash_showFlash(__int64 a1)
{
  unsigned int v2; // r15d
  float i; // xmm8_4
  float *v4; // rsi
  float v5; // xmm7_4
  float v6; // xmm6_4
  float v7; // xmm6_4
  struct cocos2d::CCFiniteTimeAction *v8; // rdi
  struct cocos2d::CCActionTween *v9; // rbx
  __int64 v10; // rax
  struct cocos2d::CCAction *v11; // rax
  struct cocos2d::CCFiniteTimeAction *v12; // rbx
  __int64 v13; // rax
  struct cocos2d::CCAction *v14; // rax
  struct cocos2d::CCLayerColor *v16; // rax
  struct cocos2d::CCActionInterval *v17; // rax
  struct cocos2d::CCFiniteTimeAction *v18; // rbp
  __int64 v19; // rsi
  struct cocos2d::CCDelayTime *v20; // rdi
  struct cocos2d::CCActionInterval *v21; // rax
  struct cocos2d::CCEaseInOut *v22; // rbx
  __int64 v23; // rax
  struct cocos2d::CCAction *v24; // rax
  __int64 v25; // [rsp+D0h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 336) ) /*0x465f7*/
  {
    if ( !*(_QWORD *)(a1 + 344) ) /*0x467b9*/
      *(_QWORD *)(a1 + 344) = a1; /*0x467cb*/
    LODWORD(v25) = 0xFFFFFF; /*0x467da*/
    v16 = cocos2d::CCLayerColor::create((const struct cocos2d::_ccColor4B *)&v25); /*0x467e5*/
    *(_QWORD *)(a1 + 328) = v16; /*0x467eb*/
    v25 = 0x100000302LL; /*0x467f2*/
    (**((void (__fastcall ***)(__int64, __int64))v16 + 54))((__int64)v16 + 432, 0x100000302LL); /*0x4681a*/
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 344) + 456LL))( /*0x46834*/
      *(_QWORD *)(a1 + 344),
      *(_QWORD *)(a1 + 328),
      *(unsigned int *)(a1 + 352));
    v17 = cocos2d::CCFadeIn::create(0.30000001); /*0x46842*/
    v18 = cocos2d::CCEaseIn::create(v17, 2.0); /*0x46866*/
    v19 = cocos2d::CCCallFunc::create(a1, CCLightFlash_removeLights); /*0x46877*/
    v20 = cocos2d::CCDelayTime::create(0.5); /*0x46888*/
    v21 = cocos2d::CCFadeOut::create(1.5); /*0x4688b*/
    v22 = cocos2d::CCEaseInOut::create(v21, 2.0); /*0x468a7*/
    v23 = cocos2d::CCCallFunc::create(a1, CCLightFlash_cleanupFlash); /*0x468aa*/
    v24 = cocos2d::CCSequence::create(v18, v19, v20, v22, v23, 0); /*0x468c9*/
    return cocos2d::CCNode::runAction(*(cocos2d::CCNode **)(a1 + 328), v24); /*0x468d9*/
  }
  else
  {
    v2 = 0; /*0x46612*/
    for ( i = 0.0; v2 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 320)); i = fmaxf(v7 + v5, i) ) /*0x4661e*/
    {
      v4 = (float *)cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 320), v2); /*0x46690*/
      v5 = (float)((float)rand() / 32767.0) * 0.2; /*0x466a5*/
      v6 = (float)rand(); /*0x466b7*/
      v7 = (float)((float)((float)((float)(v6 / 32767.0) + (float)(v6 / 32767.0)) - 1.0) * 0.1) + 0.5; /*0x466cd*/
      v8 = cocos2d::CCDelayTime::create(v5); /*0x466ed*/
      v9 = cocos2d::CCActionTween::create(v7, "opacity", v4[85], 0.0); /*0x46700*/
      v10 = cocos2d::CCCallFunc::create(v4, sub_3E5B0); /*0x46703*/
      v11 = cocos2d::CCSequence::create(v8, v9, v10, 0); /*0x46715*/
      cocos2d::CCNode::runAction((cocos2d::CCNode *)v4, v11); /*0x46721*/
      ++v2; /*0x46732*/
    }
    v12 = cocos2d::CCDelayTime::create(i); /*0x46787*/
    v13 = cocos2d::CCCallFunc::create(a1, sub_3E5B0); /*0x4678a*/
    v14 = cocos2d::CCSequence::create(v12, v13, 0); /*0x46799*/
    return cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v14); /*0x467a5*/
  }
}

// [3/4] Address: 0x46910
// Method: CCLightFlash::removeLights
unsigned int __fastcall CCLightFlash_removeLights(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int result; // eax
  struct cocos2d::CCObject *v4; // rax
  __int64 v5; // rdx

  v2 = 0; /*0x4691d*/
  result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 320)); /*0x46926*/
  if ( result ) /*0x4692e*/
  {
    do /*0x46962*/
    {
      v4 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 320), v2); /*0x46939*/
      LOBYTE(v5) = 1; /*0x4693f*/
      (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v4 + 520LL))(v4, v5); /*0x4694e*/
      ++v2; /*0x46958*/
      result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 320)); /*0x4695a*/
    }
    while ( v2 < result ); /*0x46962*/
  }
  return result; /*0x46964*/
}

// [4/4] Address: 0x46970
// Method: CCLightFlash::cleanupFlash
__int64 __fastcall CCLightFlash_cleanupFlash(_QWORD **a1, __int64 a2)
{
  __int64 v3; // rdx

  LOBYTE(a2) = 1; /*0x46979*/
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1[41] + 520LL))(a1[41], a2); /*0x46985*/
  LOBYTE(v3) = 1; /*0x4698e*/
  return ((__int64 (__fastcall *)(_QWORD **, __int64))(*a1)[65])(a1, v3);
}
