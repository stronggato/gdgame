#include <Geode/binding/GJPromoPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x2f9990
// Method: GJPromoPopup::init
// Hidden C++ exception states: #wind=2
double __fastcall GJPromoPopup_init(int *a1)
{
  _QWORD *v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r14
  void *v5; // r8
  float v6; // xmm2_4
  float *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  struct cocos2d::CCSprite *v11; // rsi
  float *v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int16 v17; // [rsp+30h] [rbp-88h] BYREF
  char v18; // [rsp+32h] [rbp-86h]
  _BYTE v19[12]; // [rsp+34h] [rbp-84h] BYREF
  void *Block[2]; // [rsp+40h] [rbp-78h] BYREF
  __m128i si128; // [rsp+50h] [rbp-68h]
  _QWORD v22[4]; // [rsp+60h] [rbp-58h] BYREF

  GauntletNode_frameForType((__int64)v22, a1[80]); /*0x2f99ce*/
  v2 = v22; /*0x2f99d4*/
  if ( v22[3] > 0xFu ) /*0x2f99df*/
    v2 = (_QWORD *)v22[0]; /*0x2f99df*/
  *(_OWORD *)Block = 0; /*0x2f99e8*/
  si128 = 0; /*0x2f99f0*/
  v3 = -1; /*0x2f99f6*/
  do /*0x2f9a03*/
    ++v3; /*0x2f9a00*/
  while ( *((_BYTE *)v2 + v3) ); /*0x2f9a03*/
  sub_3C230(Block); /*0x2f9a0f*/
  v4 = sub_4C150(Block); /*0x2f9a1f*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x2f9a2b*/
  {
    v5 = Block[0]; /*0x2f9a30*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x2f9a3f*/
    {
      v5 = (void *)*((_QWORD *)Block[0] - 1); /*0x2f9a45*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v5 - 8) > 0x1F ) /*0x2f9a54*/
        invoke_watson(0, 0, 0, 0, 0); /*0x2f9a69*/
    }
    j_j_free(v5); /*0x2f9a73*/
  }
  si128 = _mm_load_si128((const __m128i *)&Size); /*0x2f9a80*/
  LOBYTE(Block[0]) = 0; /*0x2f9a86*/
  v17 = -256; /*0x2f9a8b*/
  v18 = -1; /*0x2f9a92*/
  (**(void (__fastcall ***)(__int64, __int16 *))(v4 + 320))(v4 + 320, &v17); /*0x2f9aaa*/
  (*(void (__fastcall **)(int *, __int64))(*(_QWORD *)a1 + 464LL))(a1, v4); /*0x2f9ab5*/
  switch ( a1[80] ) /*0x2f9ae3*/
  {
    case 1: /*0x2f9ae3*/
      v6 = 1.1; /*0x2f9ae5*/
      break; /*0x2f9aed*/
    case 2: /*0x2f9ae3*/
    case 6: /*0x2f9ae3*/
      v6 = 0.89999998; /*0x2f9aef*/
      break; /*0x2f9af7*/
    case 4: /*0x2f9ae3*/
      v6 = 1.6; /*0x2f9af9*/
      break; /*0x2f9b01*/
    case 5: /*0x2f9ae3*/
      v6 = 1.3; /*0x2f9b03*/
      break; /*0x2f9b0b*/
    case 7: /*0x2f9ae3*/
      v6 = 1.5; /*0x2f9b0d*/
      break; /*0x2f9b15*/
    case 12: /*0x2f9ae3*/
    case 61: /*0x2f9ae3*/
      v6 = 0.80000001; /*0x2f9b17*/
      break; /*0x2f9b17*/
    default:
      v6 = 1.0; /*0x2f9b21*/
      break; /*0xf1c0000000000004*/
  }
  *(float *)(v4 + 604) = v6 * 0.20999999; /*0x2f9b34*/
  *(float *)(v4 + 608) = v6 * 0.72000003; /*0x2f9b48*/
  *(float *)(v4 + 612) = v6 * 0.07; /*0x2f9b59*/
  v7 = (float *)(*(__int64 (__fastcall **)(int *))(*(_QWORD *)a1 + 320LL))(a1); /*0x2f9b6e*/
  v8 = *(_QWORD *)v4; /*0x2f9b71*/
  v9 = (*(__int64 (__fastcall **)(int *))(*(_QWORD *)a1 + 320LL))(a1); /*0x2f9b7a*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v19, *v7 * 0.5, *(float *)(v9 + 4) * 0.5); /*0x2f9b9e*/
  (*(void (__fastcall **)(__int64, __int64))(v8 + 184))(v4, v10); /*0x2f9baa*/
  v17 = -7711; /*0x2f9bb0*/
  v18 = -31; /*0x2f9bb7*/
  (**(void (__fastcall ***)(__int64, __int16 *))(v4 + 320))(v4 + 320, &v17); /*0x2f9bcf*/
  v11 = cocos2d::CCSprite::createWithSpriteFrameName("gauntletLock_001.png"); /*0x2f9bde*/
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)v4 + 456LL))(v4, v11, 1); /*0x2f9bf7*/
  v12 = (float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 320LL))(v4); /*0x2f9c09*/
  v13 = *(_QWORD *)v11; /*0x2f9c0c*/
  v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 320LL))(v4); /*0x2f9c1c*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v19, *v12 * 0.5, *(float *)(v14 + 4) * 0.5); /*0x2f9c34*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v13 + 184))(v11, v15); /*0x2f9c40*/
  return sub_3C310(v22); /*0x2f9c51*/
}

// [2/4] Address: 0x38f660
// Method: GJPromoPopup::onClose
__int64 __fastcall GJPromoPopup_onClose(struct cocos2d::CCObject *a1)
{
  __int64 v2; // rax
  cocos2d::CCTouchDispatcher *v3; // rax
  __int64 v4; // rdx

  v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x38f669*/
  v3 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2); /*0x38f675*/
  cocos2d::CCTouchDispatcher::unregisterForcePrio(v3, a1); /*0x38f681*/
  cocos2d::CCNode::stopAllActions(a1); /*0x38f68a*/
  cocos2d::CCNode::unscheduleAllSelectors(a1); /*0x38f693*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x38f6a1*/
  LOBYTE(v4) = 1; /*0x38f6aa*/
  return (*(__int64 (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)a1 + 520LL))(a1, v4);
}

// [3/4] Address: 0x38f6c0
// Method: GJPromoPopup::keyBackClicked
__int64 __fastcall GJPromoPopup_keyBackClicked(__int64 a1)
{
  struct cocos2d::CCObject *v1; // rbx
  __int64 v2; // rax
  cocos2d::CCTouchDispatcher *v3; // rax
  __int64 v4; // rdx

  v1 = (struct cocos2d::CCObject *)(a1 - 336); /*0x38f6c6*/
  v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x38f6cd*/
  v3 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2); /*0x38f6e0*/
  cocos2d::CCTouchDispatcher::unregisterForcePrio(v3, v1); /*0x38f6e8*/
  cocos2d::CCNode::stopAllActions(v1); /*0x38f6f1*/
  cocos2d::CCNode::unscheduleAllSelectors(v1); /*0x38f6fa*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v1 + 992LL))(v1, 0); /*0x38f708*/
  LOBYTE(v4) = 1; /*0x38f711*/
  return (*(__int64 (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v1 + 520LL))(v1, v4);
}

// [4/4] Address: 0x3a7410
// Method: GJPromoPopup::onExit
void __fastcall GJPromoPopup_onExit(cocos2d::CCLayer *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  char *v4; // rbx
  cocos2d::CCTextureCache *v5; // rax

  cocos2d::CCLayer::onExit(a1); /*0x3a7419*/
  v4 = (char *)a1 + 664; /*0x3a741f*/
  if ( *((_QWORD *)v4 + 3) > 0xFu ) /*0x3a742b*/
    v4 = *(char **)v4; /*0x3a742d*/
  v5 = (cocos2d::CCTextureCache *)cocos2d::CCTextureCache::sharedTextureCache(v3, v2); /*0x3a7430*/
  cocos2d::CCTextureCache::removeTextureForKey(v5, v4); /*0x3a7441*/
}
