#include <Geode/binding/SecretLayer3.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [5/11] Address: 0x57c700
// Method: SecretLayer3::animateEyes
struct cocos2d::CCAction *__fastcall SecretLayer3_animateEyes(__int64 a1)
{
  int v2; // eax
  struct cocos2d::CCFiniteTimeAction *v3; // r15
  struct cocos2d::CCScaleTo *v4; // r14
  __int64 v5; // rbp
  struct cocos2d::CCDelayTime *v6; // rsi
  __int64 v7; // rdi
  struct cocos2d::CCScaleTo *v8; // rbx
  __int64 v9; // rax
  struct cocos2d::CCAction *v10; // rax

  v2 = rand(); /*0x57c721*/
  v3 = cocos2d::CCDelayTime::create((float)((float)((float)v2 / 32767.0) * 4.0) + 2.0); /*0x57c754*/
  v4 = cocos2d::CCScaleTo::create(0.029999999, 1.0, 0.1); /*0x57c76d*/
  v5 = cocos2d::CCHide::create(); /*0x57c77e*/
  v6 = cocos2d::CCDelayTime::create(0.1); /*0x57c787*/
  v7 = cocos2d::CCShow::create(); /*0x57c798*/
  v8 = cocos2d::CCScaleTo::create(0.02, 1.0, 1.0); /*0x57c7b6*/
  v9 = cocos2d::CCCallFunc::create(a1, SecretLayer3_animateEyes); /*0x57c7b9*/
  v10 = cocos2d::CCSequence::create(v3, v4, v5, v6, v7, v8, v9, 0); /*0x57c7e3*/
  return cocos2d::CCNode::runAction(*(cocos2d::CCNode **)(a1 + 440), v10); /*0x57c7f3*/
}

// [6/11] Address: 0x57e930
// Method: SecretLayer3::revealStep1
struct cocos2d::CCAction *__fastcall SecretLayer3_revealStep1(__int64 a1)
{
  __int64 v1; // r13
  const struct cocos2d::CCPoint *v3; // rax
  struct cocos2d::CCFiniteTimeAction *v4; // r15
  const struct cocos2d::CCPoint *v5; // rax
  struct cocos2d::CCMoveBy *v6; // r14
  const struct cocos2d::CCPoint *v7; // rax
  struct cocos2d::CCMoveBy *v8; // rbp
  const struct cocos2d::CCPoint *v9; // rax
  struct cocos2d::CCMoveBy *v10; // rsi
  const struct cocos2d::CCPoint *v11; // rax
  struct cocos2d::CCMoveBy *v12; // rdi
  const struct cocos2d::CCPoint *v13; // rax
  struct cocos2d::CCMoveBy *v14; // rbx
  const struct cocos2d::CCPoint *v15; // rax
  struct cocos2d::CCActionInterval *v16; // rax
  struct cocos2d::CCEaseElasticIn *v17; // rax
  struct cocos2d::CCAction *v18; // rax
  __int64 v19; // rbx
  struct cocos2d::CCFiniteTimeAction *v20; // rax
  struct cocos2d::CCAction *v21; // rax
  _BYTE v23[8]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v24[8]; // [rsp+48h] [rbp-70h] BYREF
  _BYTE v25[16]; // [rsp+50h] [rbp-68h] BYREF
  char v26; // [rsp+C0h] [rbp+8h] BYREF
  char v27; // [rsp+C8h] [rbp+10h] BYREF
  char v28; // [rsp+D0h] [rbp+18h] BYREF
  char v29; // [rsp+D8h] [rbp+20h] BYREF

  v1 = *(_QWORD *)(a1 + 416); /*0x57e941*/
  *(_BYTE *)(a1 + 424) = 1; /*0x57e956*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v26, -1.5, 0.0); /*0x57e96b*/
  v4 = cocos2d::CCMoveBy::create(0.079999998, v3); /*0x57e99a*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v27, 1.5, 0.0); /*0x57e99d*/
  v6 = cocos2d::CCMoveBy::create(0.079999998, v5); /*0x57e9c3*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v28, -1.5, 0.0); /*0x57e9c6*/
  v8 = cocos2d::CCMoveBy::create(0.079999998, v7); /*0x57e9ec*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v29, 1.5, 0.0); /*0x57e9ef*/
  v10 = cocos2d::CCMoveBy::create(0.079999998, v9); /*0x57ea12*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v23, -1.5, 0.0); /*0x57ea15*/
  v12 = cocos2d::CCMoveBy::create(0.079999998, v11); /*0x57ea38*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v24, 1.5, 0.0); /*0x57ea3b*/
  v14 = cocos2d::CCMoveBy::create(0.079999998, v13); /*0x57ea5e*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v25, 0.0, -130.0); /*0x57ea61*/
  v16 = cocos2d::CCMoveBy::create(2.5, v15); /*0x57ea72*/
  v17 = cocos2d::CCEaseElasticIn::create(v16, 1.6); /*0x57ea83*/
  v18 = cocos2d::CCSequence::create(v4, v6, v8, v10, v12, v14, v17, 0); /*0x57eaad*/
  cocos2d::CCNode::runAction(*(cocos2d::CCNode **)(v1 + 320), v18); /*0x57eabd*/
  v19 = cocos2d::CCCallFunc::create(a1, sub_57EB20); /*0x57eadb*/
  v20 = cocos2d::CCDelayTime::create(4.0); /*0x57eade*/
  v21 = cocos2d::CCSequence::create(v20, v19, 0); /*0x57eaed*/
  return cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v21); /*0x57eaf9*/
}

// [7/11] Address: 0x57f690
// Method: SecretLayer3::revealStep5
// Hidden C++ exception states: #wind=1
__int64 __fastcall SecretLayer3_revealStep5(__int64 a1)
{
  cocos2d::CCArray *v2; // rbx
  int v3; // r9d
  struct cocos2d::CCObject *v4; // rax
  int v5; // r9d
  struct cocos2d::CCObject *v6; // rax
  int v7; // r9d
  struct cocos2d::CCObject *v8; // rax
  int v9; // r9d
  struct cocos2d::CCObject *v10; // rax
  int v11; // r9d
  struct cocos2d::CCObject *v12; // rax
  cocos2d::CCLayerColor *DialogLayer; // rsi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 *v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rax
  _WORD v21[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v22; // [rsp+40h] [rbp-40h]
  __int64 v23; // [rsp+48h] [rbp-38h]
  __int128 v24; // [rsp+50h] [rbp-30h] BYREF
  __int64 v25; // [rsp+60h] [rbp-20h]
  __int64 v26; // [rsp+68h] [rbp-18h]
  __int128 *v27; // [rsp+A8h] [rbp+28h] BYREF
  __int16 v28; // [rsp+B0h] [rbp+30h] BYREF
  char v29; // [rsp+B2h] [rbp+32h]

  v2 = (cocos2d::CCArray *)cocos2d::CCArray::create(a1); /*0x57f6b6*/
  v27 = &v24; /*0x57f6bd*/
  v28 = -1; /*0x57f6c8*/
  v29 = -1; /*0x57f6d3*/
  v24 = 0; /*0x57f6d9*/
  v25 = 0; /*0x57f6e0*/
  v26 = 0; /*0x57f6e4*/
  *(_QWORD *)&v24 = sub_3C460(32); /*0x57f6f2*/
  v25 = 23; /*0x57f6f6*/
  v26 = 31; /*0x57f6fe*/
  strcpy((char *)v24, "Hey I heard some noi..."); /*0x57f70d*/
  v21[7] = 0; /*0x57f732*/
  v22 = 13; /*0x57f737*/
  v23 = 15; /*0x57f73f*/
  strcpy((char *)v21, "The Keymaster"); /*0x57f74f*/
  v4 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v21, (unsigned int)&v24, 2, v3, 0, (__int64)&v28); /*0x57f792*/
  cocos2d::CCArray::addObject(v2, v4); /*0x57f79d*/
  v27 = &v24; /*0x57f7a7*/
  v28 = -1; /*0x57f7b2*/
  v29 = -1; /*0x57f7bd*/
  v24 = 0; /*0x57f7c3*/
  v25 = 0; /*0x57f7c7*/
  v26 = 0; /*0x57f7cb*/
  *(_QWORD *)&v24 = sub_3C460(64); /*0x57f7dc*/
  v25 = 58; /*0x57f7e0*/
  v26 = 63; /*0x57f7e8*/
  strcpy((char *)v24, "Wait.<d010>.<d010>.<d020> Is the gate<d010>.<d010>.<d010>."); /*0x57f7f7*/
  v21[7] = 0; /*0x57f82c*/
  v22 = 13; /*0x57f831*/
  v23 = 15; /*0x57f839*/
  strcpy((char *)v21, "The Keymaster"); /*0x57f849*/
  v6 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v21, (unsigned int)&v24, 4, v5, 0, (__int64)&v28); /*0x57f884*/
  cocos2d::CCArray::addObject(v2, v6); /*0x57f88f*/
  v27 = &v24; /*0x57f899*/
  v28 = -1; /*0x57f8a4*/
  v29 = -1; /*0x57f8af*/
  v24 = 0; /*0x57f8b5*/
  v25 = 0; /*0x57f8b9*/
  v26 = 0; /*0x57f8bd*/
  *(_QWORD *)&v24 = sub_3C460(64); /*0x57f8ce*/
  v25 = 62; /*0x57f8d2*/
  v26 = 63; /*0x57f8da*/
  strcpy((char *)v24, "<d010>.<d010>.<d010>. You opened the gate<d010>.<d010>.<d010>."); /*0x57f8e9*/
  v21[7] = 0; /*0x57f927*/
  v22 = 13; /*0x57f92c*/
  v23 = 15; /*0x57f934*/
  strcpy((char *)v21, "The Keymaster"); /*0x57f944*/
  v8 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v21, (unsigned int)&v24, 17, v7, 0, (__int64)&v28); /*0x57f97f*/
  cocos2d::CCArray::addObject(v2, v8); /*0x57f98a*/
  v27 = &v24; /*0x57f994*/
  v28 = -1; /*0x57f99f*/
  v29 = -1; /*0x57f9aa*/
  v24 = 0; /*0x57f9b0*/
  v25 = 0; /*0x57f9b4*/
  v26 = 0; /*0x57f9b8*/
  *(_QWORD *)&v24 = sub_3C460(48); /*0x57f9c9*/
  v25 = 43; /*0x57f9cd*/
  v26 = 47; /*0x57f9d5*/
  strcpy((char *)v24, "YOU OPENED THE GATE!\n<d030>GAH THIS IS BAD."); /*0x57f9e4*/
  v21[7] = 0; /*0x57fa18*/
  v22 = 13; /*0x57fa1d*/
  v23 = 15; /*0x57fa25*/
  strcpy((char *)v21, "The Keymaster"); /*0x57fa35*/
  v10 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v21, (unsigned int)&v24, 18, v9, 0, (__int64)&v28); /*0x57fa70*/
  cocos2d::CCArray::addObject(v2, v10); /*0x57fa7b*/
  v27 = &v24; /*0x57fa85*/
  v28 = -1; /*0x57fa90*/
  v29 = -1; /*0x57fa9b*/
  v24 = 0; /*0x57faa1*/
  v25 = 0; /*0x57faa5*/
  v26 = 0; /*0x57faa9*/
  *(_QWORD *)&v24 = sub_3C460(80); /*0x57faba*/
  v25 = 76; /*0x57fabe*/
  v26 = 79; /*0x57fac6*/
  strcpy((char *)v24, "<cr>BAD BAD BAD BAD BAD BAD BAD BAD BAD BAD BAD BAD</c><d010>.<d010>.<d010>."); /*0x57fad5*/
  v21[7] = 0; /*0x57fb13*/
  v22 = 13; /*0x57fb18*/
  v23 = 15; /*0x57fb20*/
  strcpy((char *)v21, "The Keymaster"); /*0x57fb30*/
  v12 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v21, (unsigned int)&v24, 18, v11, 0, (__int64)&v28); /*0x57fb6b*/
  cocos2d::CCArray::addObject(v2, v12); /*0x57fb76*/
  DialogLayer = DialogLayer_createDialogLayer(0, (__int64)v2, 2u); /*0x57fb8c*/
  (*(void (__fastcall **)(__int64, cocos2d::CCLayerColor *, __int64))(*(_QWORD *)a1 + 456LL))(a1, DialogLayer, 100); /*0x57fba5*/
  v14 = a1 + 408; /*0x57fba8*/
  if ( !a1 ) /*0x57fbb2*/
    v14 = 0; /*0x57fbb2*/
  *((_QWORD *)DialogLayer + 78) = v14; /*0x57fbb6*/
  (*(void (__fastcall **)(cocos2d::CCLayerColor *, __int64))(*(_QWORD *)DialogLayer + 64LL))(DialogLayer, 5); /*0x57fbcc*/
  v16 = cocos2d::CCDirector::sharedDirector(v15); /*0x57fbcf*/
  cocos2d::CCDirector::getWinSize(v16, &v27); /*0x57fbdc*/
  v17 = (__int64 *)*((_QWORD *)DialogLayer + 70); /*0x57fbe2*/
  v18 = *v17; /*0x57fbe9*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v28, *(float *)&v27 * 0.5, *((float *)&v27 + 1) * 0.5); /*0x57fc0a*/
  (*(void (__fastcall **)(__int64 *, __int64))(v18 + 184))(v17, v19); /*0x57fc16*/
  return sub_1734F0(DialogLayer, 2); /*0x57fc24*/
}

// [8/11] Address: 0x57fc50
// Method: SecretLayer3::dialogClosed
// Hidden C++ exception states: #wind=2
struct cocos2d::CCAction *__fastcall SecretLayer3_dialogClosed(__int64 a1, __int64 a2)
{
  int v4; // ebp
  char v5; // al
  struct cocos2d::CCLayerColor *v6; // rsi
  struct cocos2d::CCFiniteTimeAction *v7; // rdi
  __int64 v8; // rax
  struct cocos2d::CCAction *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  float v14; // xmm0_4
  __int64 v15; // r8
  __int64 v16; // rcx
  struct cocos2d::CCAction *result; // rax
  __int64 v18; // rdx
  struct cocos2d::CCActionInterval *v19; // rax
  struct cocos2d::CCAction *v20; // rax
  unsigned int v21; // ebp
  struct cocos2d::CCObject *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rdx
  cocos2d::CCNode *v25; // rsi
  struct cocos2d::CCFiniteTimeAction *v26; // rdi
  struct cocos2d::CCActionInterval *v27; // rax
  struct cocos2d::CCFiniteTimeAction *v28; // rbx
  struct cocos2d::CCFiniteTimeAction *v29; // rax
  struct cocos2d::CCSpawn *v30; // rbx
  struct cocos2d::CCAction *v31; // rax
  __int64 v32; // rbx
  struct cocos2d::CCFiniteTimeAction *v33; // rax
  struct cocos2d::CCAction *v34; // rax
  __int64 v35; // r8
  __int64 v36; // rcx
  int v37; // [rsp+A8h] [rbp+10h]
  void *v38; // [rsp+A8h] [rbp+10h]
  void *v39; // [rsp+A8h] [rbp+10h]
  __int64 v40; // [rsp+B0h] [rbp+18h] BYREF

  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 4 ) /*0x57fc90*/
  {
    v4 = 0; /*0x57fc96*/
    LOWORD(v37) = -1; /*0x57fc98*/
    BYTE2(v37) = -1; /*0x57fca2*/
    v40 = 0x100000302LL; /*0x57fcaa*/
    do /*0x57fd83*/
    {
      v5 = 80; /*0x57fce0*/
      if ( !v4 ) /*0x57fce7*/
        v5 = -1; /*0x57fce7*/
      HIBYTE(v37) = v5; /*0x57fceb*/
      LODWORD(v40) = v37; /*0x57fcf9*/
      v6 = cocos2d::CCLayerColor::create((const struct cocos2d::_ccColor4B *)&v40); /*0x57fd0e*/
      (*(void (__fastcall **)(__int64, struct cocos2d::CCLayerColor *, __int64))(*(_QWORD *)(a1 - 408) + 456LL))( /*0x57fd2f*/
        a1 - 408,
        v6,
        100);
      (**((void (__fastcall ***)(__int64, __int64))v6 + 54))((__int64)v6 + 432, 0x100000302LL); /*0x57fd42*/
      v7 = cocos2d::CCFadeTo::create(2.0, 0); /*0x57fd50*/
      v8 = cocos2d::CCCallFunc::create(v6, sub_3E5B0); /*0x57fd5d*/
      v9 = cocos2d::CCSequence::create(v7, v8, 0); /*0x57fd6c*/
      cocos2d::CCNode::runAction(v6, v9); /*0x57fd78*/
      ++v4; /*0x57fd7e*/
    }
    while ( v4 < 2 ); /*0x57fd83*/
    cocos2d::CCNode::stopAllActions(*(cocos2d::CCNode **)(a1 + 32)); /*0x57fd8d*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 32) + 336LL))(*(_QWORD *)(a1 + 32), 0); /*0x57fd9c*/
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 40) + 336LL))(*(_QWORD *)(a1 + 40), 0); /*0x57fdab*/
    v11 = *(_QWORD *)(a1 + 48); /*0x57fdb1*/
    if ( v11 ) /*0x57fdb8*/
    {
      LOBYTE(v10) = 1; /*0x57fdbd*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 336LL))(v11, v10); /*0x57fdbf*/
      LOBYTE(v12) = 1; /*0x57fdcc*/
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 936LL))(*(_QWORD *)(a1 + 48), v12); /*0x57fdce*/
    }
    v13 = cocos2d::CCCallFunc::create(a1 - 408, SecretLayer3_revealStep5); /*0x57fde2*/
    v14 = 3.0; /*0x57fde8*/
    goto LABEL_19; /*0x57fdf0*/
  }
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 5 ) /*0x57fe01*/
  {
    v16 = qword_905FD0; /*0x57fe03*/
    if ( !qword_905FD0 ) /*0x57fe0d*/
    {
      v38 = operator new(0x6E8u); /*0x57fe19*/
      qword_905FD0 = sub_2723A0(v38); /*0x57fe2a*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x57fe3b*/
      v16 = qword_905FD0; /*0x57fe3d*/
    }
    LOBYTE(v15) = 1; /*0x57fe44*/
    result = (struct cocos2d::CCAction *)sub_27B1C0(v16, "13", v15); /*0x57fe4e*/
  }
  else
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 3 ) /*0x57fe64*/
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 320LL) + 40LL))( /*0x57fe76*/
        *(_QWORD *)(a1 + 40) + 320LL,
        0);
      LOBYTE(v18) = 1; /*0x57fe80*/
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 40) + 336LL))(*(_QWORD *)(a1 + 40), v18); /*0x57fe82*/
      v19 = cocos2d::CCFadeIn::create(3.0); /*0x57fe90*/
      v20 = cocos2d::CCEaseInOut::create(v19, 1.5); /*0x57fea1*/
      cocos2d::CCNode::runAction(*(cocos2d::CCNode **)(a1 + 40), v20); /*0x57feae*/
      v13 = cocos2d::CCCallFunc::create(a1 - 408, sub_57EEF0); /*0x57fec2*/
      v14 = 4.0; /*0x57fec8*/
LABEL_19:
      v32 = v13; /*0x580027*/
      v33 = cocos2d::CCDelayTime::create(v14); /*0x58002a*/
      v34 = cocos2d::CCSequence::create(v33, v32, 0); /*0x580039*/
      return cocos2d::CCNode::runAction((cocos2d::CCNode *)(a1 - 408), v34); /*0x58004f*/
    }
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 1 ) /*0x57fee1*/
    {
      v21 = 0; /*0x57fee7*/
      while ( v21 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 24)) ) /*0x57feed*/
      {
        v22 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 24), v21); /*0x57ff3c*/
        LOBYTE(v23) = 1; /*0x57ff49*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v22 + 936LL))(v22, v23); /*0x57ff4e*/
        LOBYTE(v24) = 1; /*0x57ff5b*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v22 + 336LL))(v22, v24); /*0x57ff60*/
        v25 = (cocos2d::CCNode *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v22 + 952LL))(v22); /*0x57ff72*/
        v26 = cocos2d::CCDelayTime::create((float)(int)++v21 * 0.1); /*0x57ff88*/
        v27 = cocos2d::CCScaleTo::create(0.5, 1.0); /*0x57ff93*/
        v28 = cocos2d::CCEaseBounceOut::create(v27); /*0x57ffa2*/
        v29 = cocos2d::CCFadeIn::create(0.15000001); /*0x57ffa9*/
        v30 = cocos2d::CCSpawn::createWithTwoActions(v28, v29); /*0x57ffbb*/
        (*(void (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v25 + 160LL))(v25); /*0x57ffce*/
        (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v25 + 40) + 40LL))((__int64)v25 + 320, 0); /*0x57ffe0*/
        v31 = cocos2d::CCSequence::create(v26, v30, 0); /*0x57ffec*/
        cocos2d::CCNode::runAction(v25, v31); /*0x57fff8*/
      }
      v13 = cocos2d::CCCallFunc::create(a1 - 408, sub_57CCF0); /*0x58001e*/
      v14 = 2.0; /*0x580024*/
      goto LABEL_19; /*0x580024*/
    }
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 2 ) /*0x58005d*/
    {
      v36 = qword_905FD0; /*0x58005f*/
      if ( !qword_905FD0 ) /*0x580069*/
      {
        v39 = operator new(0x6E8u); /*0x580075*/
        qword_905FD0 = sub_2723A0(v39); /*0x580086*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x580097*/
        v36 = qword_905FD0; /*0x580099*/
      }
      LOBYTE(v35) = 1; /*0x5800a0*/
      result = (struct cocos2d::CCAction *)sub_27B1C0(v36, &word_7231BC, v35); /*0x5800aa*/
    }
    else
    {
      result = (struct cocos2d::CCAction *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5800b7*/
      if ( (_DWORD)result != 6 ) /*0x5800bd*/
        return result; /*0x5800bd*/
    }
  }
  *(_BYTE *)(a1 + 16) = 0; /*0x5800bf*/
  return result; /*0x5800c4*/
}

// [9/11] Address: 0x580100
// Method: SecretLayer3::onBack
// Hidden C++ exception states: #wind=1
void __fastcall SecretLayer3_onBack(cocos2d::CCNode **a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  cocos2d::CCNode *v6; // rbx
  struct cocos2d::CCAction *v7; // rax
  __int64 v8; // rbx
  struct cocos2d::CCFiniteTimeAction *v9; // rax
  struct cocos2d::CCAction *v10; // rax
  struct cocos2d::CCScene *v11; // rax
  struct cocos2d::CCScene *v12; // rbx
  __int64 v13; // rcx
  cocos2d::CCDirector *v14; // rax
  void *v15; // [rsp+30h] [rbp+8h]

  if ( !*((_BYTE *)a1 + 424) ) /*0x58010d*/
  {
    v4 = qword_905FD0; /*0x58011a*/
    if ( !qword_905FD0 ) /*0x580124*/
    {
      v15 = operator new(0x6E8u); /*0x580130*/
      qword_905FD0 = sub_2723A0(v15); /*0x58013e*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x58014f*/
      v4 = qword_905FD0; /*0x580151*/
    }
    if ( (unsigned __int8)sub_27B350(v4, &word_7231BC, a3) ) /*0x58015f*/
    {
      (*((void (__fastcall **)(cocos2d::CCNode **, _QWORD))*a1 + 124))(a1, 0); /*0x580230*/
      v11 = (struct cocos2d::CCScene *)SecretLayer2_scene(); /*0x580236*/
      v12 = cocos2d::CCTransitionFade::create(0.5, v11); /*0x58024c*/
      v14 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v13); /*0x58024f*/
      cocos2d::CCDirector::replaceScene(v14, v12); /*0x58025b*/
    }
    else
    {
      *((_BYTE *)a1 + 424) = 1; /*0x58016c*/
      cocos2d::CCNode::stopAllActions(a1[55]); /*0x58017a*/
      (*(void (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)a1[55] + 160LL))(a1[55]); /*0x580192*/
      (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)a1[55] + 40) + 40LL))((__int64)a1[55] + 320, 0); /*0x5801ab*/
      LOBYTE(v5) = 1; /*0x5801b8*/
      (*(void (__fastcall **)(cocos2d::CCNode *, __int64))(*(_QWORD *)a1[55] + 336LL))(a1[55], v5); /*0x5801ba*/
      v6 = a1[55]; /*0x5801c0*/
      v7 = cocos2d::CCFadeIn::create(1.0); /*0x5801cf*/
      cocos2d::CCNode::runAction(v6, v7); /*0x5801db*/
      v8 = cocos2d::CCCallFunc::create(a1, sub_57C820); /*0x5801f1*/
      v9 = cocos2d::CCDelayTime::create(2.0); /*0x5801fc*/
      v10 = cocos2d::CCSequence::create(v9, v8, 0); /*0x58020b*/
      cocos2d::CCNode::runAction((cocos2d::CCNode *)a1, v10); /*0x580221*/
    }
  }
}

// [10/11] Address: 0x580270
// Method: SecretLayer3::keyBackClicked
void __fastcall SecretLayer3_keyBackClicked(__int64 a1, __int64 a2, __int64 a3)
{
  SecretLayer3_onBack((cocos2d::CCNode **)(a1 - 336), 0, a3); /*0x580279*/
}

// [11/11] Address: 0x580280
// Method: SecretLayer3::onExit
void __fastcall SecretLayer3_onExit(cocos2d::CCLayer *a1)
{
  cocos2d::CCSpriteFrameCache *v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  cocos2d::CCTextureCache *v4; // rax

  cocos2d::CCLayer::onExit(a1); /*0x580284*/
  v1 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x58028a*/
  cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(v1, "DungeonSheet.plist"); /*0x58029a*/
  v4 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v3, v2); /*0x5802a0*/
  cocos2d::CCTextureCache::removeTextureForKey(v4, "DungeonSheet.png"); /*0x5802b4*/
}
