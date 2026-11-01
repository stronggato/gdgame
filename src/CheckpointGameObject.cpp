#include <Geode/binding/CheckpointGameObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/9] Address: 0x655ff0
// Method: CheckpointGameObject::init
char __fastcall CheckpointGameObject_init(__int64 a1)
{
  *(_DWORD *)(a1 + 28) = 13; /*0x655ffd*/
  if ( !cocos2d::CCSprite::initWithSpriteFrameName((cocos2d::CCSprite *)a1, "checkpoint_d_01_001.png") ) /*0x656007*/
    return 0; /*0x656064*/
  sub_287800(a1); /*0x656014*/
  *(_BYTE *)(a1 + 313) = 0; /*0x656019*/
  *(_DWORD *)(a1 + 1256) = 1; /*0x656022*/
  *(_WORD *)(a1 + 1465) = -1; /*0x65602c*/
  *(_BYTE *)(a1 + 1467) = -1; /*0x656035*/
  *(_DWORD *)(a1 + 1468) = 1056964608; /*0x65603c*/
  *(_BYTE *)(a1 + 1652) = 1; /*0x656046*/
  *(_DWORD *)(a1 + 928) = 20; /*0x65604d*/
  *(_BYTE *)(a1 + 1402) = 1; /*0x656057*/
  return 1; /*0x65605e*/
}

// [2/9] Address: 0x656070
// Method: CheckpointGameObject::triggerObject
__int64 __fastcall CheckpointGameObject_triggerObject(__int64 a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 1376LL))(a2, a1);
}

// [3/9] Address: 0x656090
// Method: CheckpointGameObject::triggerActivated
void __fastcall CheckpointGameObject_triggerActivated(__int64 *a1, float a2)
{
  __int64 v3; // rax
  cocos2d::CCNode *v4; // rbx
  struct cocos2d::CCActionInterval *v5; // rax
  struct cocos2d::CCAction *v6; // rax
  cocos2d::CCNode *v7; // rbx
  struct cocos2d::CCActionInterval *v8; // rax
  struct cocos2d::CCAction *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  char v24; // al
  struct cocos2d::CCSprite *v25; // r14
  __int64 v26; // rdi
  float *v27; // rbx
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdi
  struct cocos2d::CCFadeOut *v32; // rbx
  struct cocos2d::CCFiniteTimeAction *v33; // rax
  struct cocos2d::CCAction *v34; // rax
  bool v35; // zf
  char v36; // [rsp+60h] [rbp+8h] BYREF

  if ( !*((_BYTE *)a1 + 1856) ) /*0x656096*/
  {
    v3 = *a1; /*0x6560b0*/
    *((_BYTE *)a1 + 1856) = 1; /*0x6560d2*/
    v4 = (cocos2d::CCNode *)(*(__int64 (__fastcall **)(__int64 *, __int64))(v3 + 472))(a1, 1128); /*0x6560e7*/
    (*(void (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v4 + 120LL))(v4); /*0x6560f4*/
    (*(void (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v4 + 136LL))(v4); /*0x65610b*/
    v5 = cocos2d::CCScaleTo::create(0.5, 1.0); /*0x656122*/
    v6 = cocos2d::CCEaseElasticOut::create(v5, 0.30000001); /*0x656133*/
    cocos2d::CCNode::runAction(v4, v6); /*0x65613f*/
    v7 = (cocos2d::CCNode *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1[112] + 472LL))(a1[112], 1128); /*0x656162*/
    (*(void (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v7 + 120LL))(v7); /*0x65616f*/
    (*(void (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v7 + 136LL))(v7); /*0x656186*/
    v8 = cocos2d::CCScaleTo::create(0.5, 1.0); /*0x656194*/
    v9 = cocos2d::CCEaseElasticOut::create(v8, 0.30000001); /*0x6561a5*/
    cocos2d::CCNode::runAction(v7, v9); /*0x6561b1*/
    LOBYTE(v7) = *((_BYTE *)a1 + 1856); /*0x6561bf*/
    v10 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 472))(a1, 1125); /*0x6561ca*/
    LOBYTE(v11) = (_BYTE)v7 == 0; /*0x6561d2*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 336LL))(v10, v11); /*0x6561e2*/
    LOBYTE(v7) = *((_BYTE *)a1 + 1856); /*0x6561ed*/
    v12 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 472))(a1, 1126); /*0x6561f8*/
    LOBYTE(v13) = (_BYTE)v7 == 0; /*0x656200*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 336LL))(v12, v13); /*0x656210*/
    LOBYTE(v7) = *((_BYTE *)a1 + 1856); /*0x65621b*/
    v14 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 472))(a1, 1127); /*0x656226*/
    LOBYTE(v15) = (_BYTE)v7 == 0; /*0x656231*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 336LL))(v14, v15); /*0x65623e*/
    v16 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 472))(a1, 1128); /*0x65624c*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 336LL))(v16, *((unsigned __int8 *)a1 + 1856)); /*0x656267*/
    LOBYTE(v7) = *((_BYTE *)a1 + 1856); /*0x656276*/
    v17 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1[112] + 472LL))(a1[112], 1125); /*0x656281*/
    LOBYTE(v18) = (_BYTE)v7 == 0; /*0x656289*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 336LL))(v17, v18); /*0x656299*/
    LOBYTE(v7) = *((_BYTE *)a1 + 1856); /*0x6562a8*/
    v19 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1[112] + 472LL))(a1[112], 1126); /*0x6562b3*/
    LOBYTE(v20) = (_BYTE)v7 == 0; /*0x6562bb*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 336LL))(v19, v20); /*0x6562cb*/
    LOBYTE(v7) = *((_BYTE *)a1 + 1856); /*0x6562da*/
    v21 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1[112] + 472LL))(a1[112], 1127); /*0x6562e5*/
    LOBYTE(v22) = (_BYTE)v7 == 0; /*0x6562ed*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 336LL))(v21, v22); /*0x6562fd*/
    v23 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1[112] + 472LL))(a1[112], 1128); /*0x65630f*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 336LL))(v23, *((unsigned __int8 *)a1 + 1856)); /*0x65632a*/
    if ( *((_BYTE *)a1 + 1856) ) /*0x65632d*/
    {
      (*(void (__fastcall **)(__int64 *, __int16 *))(*a1 + 1344))(a1, &word_6FF6C4); /*0x656344*/
      v24 = 1; /*0x65634a*/
    }
    else
    {
      v24 = 0; /*0x65634e*/
    }
    *((_BYTE *)a1 + 644) = v24; /*0x656357*/
    v25 = cocos2d::CCSprite::createWithSpriteFrameName("checkpoint_01_shine_001.png"); /*0x65636c*/
    v26 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 472))(a1, 1128); /*0x656385*/
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)v26 + 456LL))(v26, v25, 1); /*0x656395*/
    v27 = (float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 320LL))(v26); /*0x6563aa*/
    v28 = *(_QWORD *)v25; /*0x6563ad*/
    v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 320LL))(v26); /*0x6563ba*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v36, *v27 * 0.5, *(float *)(v29 + 4) * 0.5); /*0x6563d4*/
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v28 + 184))(v25, v30); /*0x6563e0*/
    v31 = cocos2d::CCCallFunc::create(v25, sub_3E5B0); /*0x6563fa*/
    v32 = cocos2d::CCFadeOut::create(0.5); /*0x65640b*/
    v33 = cocos2d::CCDelayTime::create(0.1); /*0x65640e*/
    v34 = cocos2d::CCSequence::create(v33, v32, v31, 0); /*0x656420*/
    cocos2d::CCNode::runAction(v25, v34); /*0x65642c*/
  }
  v35 = *((_BYTE *)a1 + 1680) == 0; /*0x65644c*/
  *((float *)a1 + 418) = a2; /*0x656454*/
  if ( v35 ) /*0x65645d*/
    *((_WORD *)a1 + 730) = 257; /*0x65645f*/
}

// [4/9] Address: 0x656480
// Method: CheckpointGameObject::setupCustomSprites
// Hidden C++ exception states: #wind=3
double __fastcall CheckpointGameObject_setupCustomSprites(_BYTE *a1, __int64 a2)
{
  __int64 v4; // rax
  struct cocos2d::CCSprite *v5; // rax
  __int64 v6; // rax
  struct cocos2d::CCSprite *v7; // rax
  __int64 v8; // rax
  struct cocos2d::CCSprite *v9; // rax
  __int64 v10; // rax
  struct cocos2d::CCSprite *v11; // rbx
  __int64 v12; // rax
  struct cocos2d::CCSprite *v13; // rax
  __int64 v14; // rax
  struct cocos2d::CCSprite *v15; // rax
  __int64 v16; // rax
  struct cocos2d::CCSprite *v17; // rax
  __int64 v18; // rax
  struct cocos2d::CCSprite *v19; // rbx
  __int128 v21; // [rsp+20h] [rbp-40h] BYREF
  __int64 v22; // [rsp+30h] [rbp-30h]
  __int64 v23; // [rsp+38h] [rbp-28h]
  __int128 *v24; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v25[2]; // [rsp+48h] [rbp-18h] BYREF

  v25[1] = a2; /*0x6564a9*/
  a1[1061] = 0; /*0x6564ad*/
  a1[559] = 1; /*0x6564b4*/
  v25[0] = &v21; /*0x6564bf*/
  v21 = 0; /*0x6564c6*/
  v22 = 0; /*0x6564cd*/
  v23 = 0; /*0x6564d1*/
  *(_QWORD *)&v21 = sub_3C460(32); /*0x6564e2*/
  v22 = 23; /*0x6564e6*/
  v23 = 31; /*0x6564ee*/
  strcpy((char *)v21, "checkpoint_d_01_001.png"); /*0x6564fd*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v24, 0.0, 0.0); /*0x65652c*/
  v5 = GameObject_addCustomChild(a1, (__int64)&v21, v4, 0xFFFFFFFF); /*0x656542*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(*(_QWORD *)v5 + 64LL))(v5, 1125); /*0x656556*/
  v24 = &v21; /*0x65655d*/
  v21 = 0; /*0x656564*/
  v22 = 0; /*0x656568*/
  v23 = 0; /*0x65656c*/
  *(_QWORD *)&v21 = sub_3C460(32); /*0x65657a*/
  v22 = 23; /*0x65657e*/
  v23 = 31; /*0x656586*/
  strcpy((char *)v21, "checkpoint_d_02_001.png"); /*0x656595*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v25, 0.0, 0.0); /*0x6565c4*/
  v7 = GameObject_addCustomChild(a1, (__int64)&v21, v6, 0xFFFFFFFF); /*0x6565da*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(*(_QWORD *)v7 + 64LL))(v7, 1126); /*0x6565ee*/
  v24 = &v21; /*0x6565f5*/
  v21 = 0; /*0x6565fc*/
  v22 = 0; /*0x656600*/
  v23 = 0; /*0x656604*/
  *(_QWORD *)&v21 = sub_3C460(32); /*0x656612*/
  v22 = 23; /*0x656616*/
  v23 = 31; /*0x65661e*/
  strcpy((char *)v21, "checkpoint_d_03_001.png"); /*0x65662d*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v25, 0.0, 0.0); /*0x65665c*/
  v9 = GameObject_addCustomChild(a1, (__int64)&v21, v8, 0xFFFFFFFF); /*0x656672*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(*(_QWORD *)v9 + 64LL))(v9, 1127); /*0x656686*/
  v24 = &v21; /*0x65668d*/
  v21 = 0; /*0x656694*/
  v22 = 0; /*0x656698*/
  v23 = 0; /*0x65669c*/
  *(_QWORD *)&v21 = sub_3C460(32); /*0x6566aa*/
  v22 = 21; /*0x6566ae*/
  v23 = 31; /*0x6566b6*/
  strcpy((char *)v21, "checkpoint_01_001.png"); /*0x6566c5*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v25, 0.0, 0.0); /*0x6566e9*/
  v11 = GameObject_addCustomChild(a1, (__int64)&v21, v10, 0xFFFFFFFF); /*0x656704*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(*(_QWORD *)v11 + 64LL))(v11, 1128); /*0x656716*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, _QWORD))(*(_QWORD *)v11 + 336LL))(v11, 0); /*0x656728*/
  v21 = 0; /*0x65672e*/
  v22 = 0; /*0x656732*/
  v23 = 0; /*0x656736*/
  *(_QWORD *)&v21 = sub_3C460(32); /*0x656744*/
  v22 = 23; /*0x656748*/
  v23 = 31; /*0x656750*/
  strcpy((char *)v21, "checkpoint_d_01_001.png"); /*0x65675f*/
  *(_BYTE *)(sub_290E70(a1, &v21) + 559) = 1; /*0x656790*/
  v24 = &v21; /*0x65679b*/
  v21 = 0; /*0x6567a2*/
  v22 = 0; /*0x6567a6*/
  v23 = 0; /*0x6567aa*/
  *(_QWORD *)&v21 = sub_3C460(32); /*0x6567bb*/
  v22 = 29; /*0x6567bf*/
  v23 = 31; /*0x6567c7*/
  strcpy((char *)v21, "checkpoint_d_01_color_001.png"); /*0x6567d6*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v25, (const struct cocos2d::CCPoint *)&unk_905DD8); /*0x656808*/
  v13 = GameObject_addInternalCustomColorChild((__int64)a1, (__int64)&v21, v12, 0xFFFFFFFF); /*0x65681e*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(*(_QWORD *)v13 + 64LL))(v13, 1125); /*0x656832*/
  v24 = &v21; /*0x656839*/
  v21 = 0; /*0x656840*/
  v22 = 0; /*0x656844*/
  v23 = 0; /*0x656848*/
  *(_QWORD *)&v21 = sub_3C460(32); /*0x656856*/
  v22 = 29; /*0x65685a*/
  v23 = 31; /*0x656862*/
  strcpy((char *)v21, "checkpoint_d_02_color_001.png"); /*0x656871*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v25, (const struct cocos2d::CCPoint *)&unk_905DD8); /*0x6568a3*/
  v15 = GameObject_addInternalCustomColorChild((__int64)a1, (__int64)&v21, v14, 0xFFFFFFFF); /*0x6568b9*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(*(_QWORD *)v15 + 64LL))(v15, 1126); /*0x6568cd*/
  v24 = &v21; /*0x6568d4*/
  v21 = 0; /*0x6568db*/
  v22 = 0; /*0x6568df*/
  v23 = 0; /*0x6568e3*/
  *(_QWORD *)&v21 = sub_3C460(32); /*0x6568f1*/
  v22 = 29; /*0x6568f5*/
  v23 = 31; /*0x6568fd*/
  strcpy((char *)v21, "checkpoint_d_03_color_001.png"); /*0x65690c*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v25, (const struct cocos2d::CCPoint *)&unk_905DD8); /*0x65693e*/
  v17 = GameObject_addInternalCustomColorChild((__int64)a1, (__int64)&v21, v16, 0xFFFFFFFF); /*0x656954*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(*(_QWORD *)v17 + 64LL))(v17, 1127); /*0x656968*/
  v24 = &v21; /*0x65696f*/
  v21 = 0; /*0x656976*/
  v22 = 0; /*0x65697a*/
  v23 = 0; /*0x65697e*/
  *(_QWORD *)&v21 = sub_3C460(32); /*0x65698c*/
  v22 = 27; /*0x656990*/
  v23 = 31; /*0x656998*/
  strcpy((char *)v21, "checkpoint_01_color_001.png"); /*0x6569a7*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v25, (const struct cocos2d::CCPoint *)&unk_905DD8); /*0x6569df*/
  v19 = GameObject_addInternalCustomColorChild((__int64)a1, (__int64)&v21, v18, 0xFFFFFFFF); /*0x6569fa*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(*(_QWORD *)v19 + 64LL))(v19, 1128); /*0x656a08*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, _QWORD))(*(_QWORD *)v19 + 336LL))(v19, 0); /*0x656a1b*/
  return sub_3C310(a2); /*0x656a27*/
}

// [5/9] Address: 0x656b20
// Method: CheckpointGameObject::updateSyncedAnimation
__int64 __fastcall CheckpointGameObject_updateSyncedAnimation(__int64 a1)
{
  float *v2; // rbx
  __int64 v3; // rax
  __int64 (__fastcall *v4)(__int64, __int64); // r8
  __int64 v5; // rbx
  double v6; // xmm0_8
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  double v11; // xmm0_8
  __int64 v12; // rax
  __int64 v13; // rbx
  double v14; // xmm0_8
  __int64 v15; // rax
  __int64 v16; // rbx
  double v17; // xmm0_8
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 *v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 *v24; // rdi
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 *v28; // rdi
  __int64 v29; // rbx
  __int64 v30; // rax
  _BYTE v32[16]; // [rsp+20h] [rbp-48h] BYREF
  char v33; // [rsp+70h] [rbp+8h] BYREF
  char v34; // [rsp+88h] [rbp+20h] BYREF

  v2 = (float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 320LL))(a1); /*0x656b4e*/
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 320LL))(a1); /*0x656b51*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v33, *v2 * 0.5, *(float *)(v3 + 4) * 0.5); /*0x656b75*/
  v4 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 472LL); /*0x656b89*/
  if ( *(_BYTE *)(a1 + 1856) ) /*0x656b7b*/
  {
    v5 = v4(a1, 1128); /*0x656bb2*/
    v6 = sub_656A50(); /*0x656bbd*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v32, 0.0, *(float *)&v6 + 0.0); /*0x656bd1*/
    cocos2d::CCPoint::operator+(&v33, &v34, v7); /*0x656be7*/
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 184LL))(v5, &v34); /*0x656bfb*/
    v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 472LL))(a1, 1128); /*0x656c0c*/
    v9 = 1128; /*0x656c12*/
  }
  else
  {
    v10 = v4(a1, 1125); /*0x656c3b*/
    v11 = sub_656A50(); /*0x656c3e*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v32, -1.0, *(float *)&v11); /*0x656c53*/
    cocos2d::CCPoint::operator+(&v33, &v34, v12); /*0x656c69*/
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v10 + 184LL))(v10, &v34); /*0x656c7d*/
    v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 472LL))(a1, 1126); /*0x656cab*/
    v14 = sub_656A50(); /*0x656cae*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v32, 0.5, *(float *)&v14); /*0x656cbe*/
    cocos2d::CCPoint::operator+(&v33, &v34, v15); /*0x656cd4*/
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v13 + 184LL))(v13, &v34); /*0x656ce8*/
    v16 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 472LL))(a1, 1127); /*0x656d16*/
    v17 = sub_656A50(); /*0x656d19*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v32, 0.5, *(float *)&v17 - 1.0); /*0x656d31*/
    cocos2d::CCPoint::operator+(&v33, &v34, v18); /*0x656d47*/
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v16 + 184LL))(v16, &v34); /*0x656d5b*/
    v19 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 472LL))(a1, 1125); /*0x656d7e*/
    v20 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 896) + 472LL))( /*0x656d8e*/
                       *(_QWORD *)(a1 + 896),
                       1125);
    v21 = *v20; /*0x656d91*/
    v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 200LL))(v19); /*0x656d9e*/
    (*(void (__fastcall **)(__int64 *, __int64))(v21 + 184))(v20, v22); /*0x656da7*/
    v23 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 472LL))(a1, 1126); /*0x656dca*/
    v24 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 896) + 472LL))( /*0x656dda*/
                       *(_QWORD *)(a1 + 896),
                       1126);
    v25 = *v24; /*0x656ddd*/
    v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 200LL))(v23); /*0x656dea*/
    (*(void (__fastcall **)(__int64 *, __int64))(v25 + 184))(v24, v26); /*0x656df3*/
    v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 472LL))(a1, 1127); /*0x656e04*/
    v9 = 1127; /*0x656e0a*/
  }
  v27 = v8; /*0x656e16*/
  v28 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 896) + 472LL))( /*0x656e26*/
                     *(_QWORD *)(a1 + 896),
                     v9);
  v29 = *v28; /*0x656e29*/
  v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 200LL))(v27); /*0x656e36*/
  return (*(__int64 (__fastcall **)(__int64 *, __int64))(v29 + 184))(v28, v30); /*0x656e44*/
}

// [6/9] Address: 0x656e60
// Method: CheckpointGameObject::getSaveString
// Hidden C++ exception states: #wind=2
__int64 __fastcall CheckpointGameObject_getSaveString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SaveString; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v11[16]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[40]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v13[528]; // [rsp+70h] [rbp-90h] BYREF

  *(_QWORD *)&v10 = a2; /*0x656e90*/
  fmt::BasicWriter<char>::BasicWriter<char>(v13); /*0x656e9d*/
  SaveString = EffectGameObject_getSaveString(a1, (__int64)v12, a3); /*0x656eaf*/
  v10 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v11, SaveString); /*0x656ec6*/
  fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x656ed5*/
  sub_3C310(v12); /*0x656ee1*/
  if ( *(_DWORD *)(a1 + 1480) ) /*0x656eed*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x656ef6*/
    *((_QWORD *)&v10 + 1) = 0; /*0x656efb*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x656f0a*/
    fmt::BasicWriter<char>::operator<<(v13, 51); /*0x656f1a*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x656f20*/
    *((_QWORD *)&v10 + 1) = 0; /*0x656f25*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x656f34*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1480)); /*0x656f45*/
  }
  if ( *(_DWORD *)(a1 + 1484) ) /*0x656f4b*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x656f54*/
    *((_QWORD *)&v10 + 1) = 0; /*0x656f59*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x656f68*/
    fmt::BasicWriter<char>::operator<<(v13, 71); /*0x656f78*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x656f7e*/
    *((_QWORD *)&v10 + 1) = 0; /*0x656f83*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x656f92*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1484)); /*0x656fa3*/
  }
  if ( *(_DWORD *)(a1 + 1860) ) /*0x656fa9*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x656fb2*/
    *((_QWORD *)&v10 + 1) = 0; /*0x656fb7*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x656fc6*/
    fmt::BasicWriter<char>::operator<<(v13, 448); /*0x656fd6*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x656fdc*/
    *((_QWORD *)&v10 + 1) = 0; /*0x656fe1*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x656ff0*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1860)); /*0x657001*/
  }
  if ( *(_DWORD *)(a1 + 1864) ) /*0x657007*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x657010*/
    *((_QWORD *)&v10 + 1) = 0; /*0x657015*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x657024*/
    fmt::BasicWriter<char>::operator<<(v13, 604); /*0x657034*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65703a*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65703f*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x65704e*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1864)); /*0x65705f*/
  }
  if ( *(_BYTE *)(a1 + 1700) ) /*0x657065*/
  {
    *(_QWORD *)&v10 = &unk_709CE8; /*0x65706e*/
    *((_QWORD *)&v10 + 1) = 0; /*0x657073*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x657082*/
    fmt::BasicWriter<char>::operator<<(v13, 138); /*0x657092*/
    *(_QWORD *)&v10 = &unk_709CE8; /*0x657098*/
    *((_QWORD *)&v10 + 1) = 0; /*0x65709d*/
    fmt::BasicWriter<char>::operator<<(v13, &v10); /*0x6570ac*/
    fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1700)); /*0x6570be*/
  }
  v7 = fmt::BasicWriter<char>::c_str(v13); /*0x6570c9*/
  *(_OWORD *)a2 = 0; /*0x6570d2*/
  *(_QWORD *)(a2 + 16) = 0; /*0x6570d5*/
  *(_QWORD *)(a2 + 24) = 0; /*0x6570d9*/
  v8 = -1; /*0x6570dd*/
  do /*0x6570e7*/
    ++v8; /*0x6570e4*/
  while ( *(_BYTE *)(v7 + v8) ); /*0x6570e7*/
  sub_3C230(a2); /*0x6570f4*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v13); /*0x6570ff*/
  return a2; /*0x657108*/
}

// [7/9] Address: 0x657130
// Method: CheckpointGameObject::customObjectSetup
bool __fastcall CheckpointGameObject_customObjectSetup(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // ebp
  int v7; // ebx
  int v8; // eax
  const char *v9; // rcx
  int v10; // eax
  const char *v11; // rcx
  int v12; // eax
  const char *v13; // rcx
  int v14; // eax
  const char *v15; // rcx
  const char *v16; // rcx

  EffectGameObject_customObjectSetup(a1, a2, a3); /*0x657153*/
  v6 = 9999; /*0x65715b*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 408LL) ) /*0x657160*/
  {
    v9 = (const char *)(*(_QWORD *)a2 + 1632LL); /*0x657173*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 1656LL) > 0xFu ) /*0x65717f*/
      v9 = *(const char **)v9; /*0x657181*/
    v8 = atoi(v9); /*0x657184*/
    v7 = 0; /*0x65718a*/
    if ( v8 < 0 ) /*0x65718e*/
      v8 = 0; /*0x65718e*/
    if ( v8 > 9999 ) /*0x657193*/
      v8 = 9999; /*0x657195*/
  }
  else
  {
    v7 = 0; /*0x65716a*/
    v8 = 0; /*0x65716c*/
  }
  *(_DWORD *)(a1 + 1480) = v8; /*0x657197*/
  if ( !*(_QWORD *)(*(_QWORD *)a3 + 568LL) ) /*0x6571a0*/
  {
    v10 = 0; /*0x6571aa*/
LABEL_16:
    v6 = v10; /*0x6571d1*/
    goto LABEL_17; /*0x6571d1*/
  }
  v11 = (const char *)(*(_QWORD *)a2 + 2272LL); /*0x6571b1*/
  if ( *(_QWORD *)(*(_QWORD *)a2 + 2296LL) > 0xFu ) /*0x6571bd*/
    v11 = *(const char **)v11; /*0x6571bf*/
  v10 = atoi(v11); /*0x6571c2*/
  if ( v10 < 0 ) /*0x6571ca*/
    v10 = 0; /*0x6571ca*/
  if ( v10 <= 9999 ) /*0x6571cf*/
    goto LABEL_16; /*0x6571cf*/
LABEL_17:
  *(_DWORD *)(a1 + 1484) = v6; /*0x6571d3*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3584LL) ) /*0x6571dc*/
  {
    v13 = (const char *)(*(_QWORD *)a2 + 14336LL); /*0x6571ed*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 14360LL) > 0xFu ) /*0x6571f9*/
      v13 = *(const char **)v13; /*0x6571fb*/
    v12 = atoi(v13); /*0x6571fe*/
  }
  else
  {
    v12 = 0; /*0x6571e6*/
  }
  *(_DWORD *)(a1 + 1860) = v12; /*0x657204*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4832LL) ) /*0x65720d*/
  {
    v15 = (const char *)(*(_QWORD *)a2 + 19328LL); /*0x65721e*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 19352LL) > 0xFu ) /*0x65722a*/
      v15 = *(const char **)v15; /*0x65722c*/
    v14 = atoi(v15); /*0x65722f*/
  }
  else
  {
    v14 = 0; /*0x657217*/
  }
  *(_DWORD *)(a1 + 1864) = v14; /*0x657235*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1104LL) ) /*0x65723e*/
  {
    v16 = (const char *)(*(_QWORD *)a2 + 4416LL); /*0x65724b*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 4440LL) > 0xFu ) /*0x657257*/
      v16 = *(const char **)v16; /*0x657259*/
    v7 = atoi(v16); /*0x657262*/
  }
  *(_BYTE *)(a1 + 1700) = v7 != 0; /*0x657278*/
  return v7 != 0; /*0x65726b*/
}

// [8/9] Address: 0x657290
// Method: CheckpointGameObject::resetObject
// Hidden C++ exception states: #wind=1
__int64 __fastcall CheckpointGameObject_resetObject(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  void *v4; // [rsp+30h] [rbp+8h]

  EnhancedGameObject_resetObject(a1); /*0x657299*/
  if ( *(_BYTE *)(a1 + 653) ) /*0x65729e*/
    return sub_657310(a1); /*0x65729e*/
  v2 = qword_905FD0; /*0x6572a7*/
  if ( !qword_905FD0 ) /*0x6572b1*/
  {
    v4 = operator new(0x6E8u); /*0x6572bd*/
    qword_905FD0 = sub_2723A0(v4); /*0x6572cb*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x6572dc*/
    v2 = qword_905FD0; /*0x6572de*/
  }
  result = GameManager_getGameVariable(v2, "0146"); /*0x6572ec*/
  if ( (_BYTE)result ) /*0x6572f3*/
    return sub_657310(a1); /*0x6572fd*/
  return result; /*0x6572f8*/
}

// [9/9] Address: 0x6574d0
// Method: CheckpointGameObject::restoreObject
__int64 __fastcall CheckpointGameObject_restoreObject(__int64 a1)
{
  *(_WORD *)(a1 + 1460) = 0; /*0x6574d9*/
  sub_657310(a1); /*0x6574e2*/
  *(_WORD *)(a1 + 333) = -1; /*0x6574ee*/
  *(_BYTE *)(a1 + 335) = -1; /*0x6574fc*/
  return 255; /*0x657502*/
}
