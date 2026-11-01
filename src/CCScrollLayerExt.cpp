#include <Geode/binding/CCScrollLayerExt.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/14] Address: 0x40650
// Method: CCScrollLayerExt::moveToTop
__int64 __fastcall CCScrollLayerExt_moveToTop(__int64 a1)
{
  float *v2; // rbx
  float v3; // xmm6_4
  int v4; // eax
  int v5; // ebx
  cocos2d::CCArray *v6; // rcx

  v2 = (float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 320LL))(a1); /*0x40672*/
  v3 = (float)-*(float *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 504) + 200LL))(*(_QWORD *)(a1 + 504)) /*0x40695*/
     / (float)(*v2 - *(float *)(a1 + 592));
  v4 = (int)ceilf(v3); /*0x406a1*/
  v5 = v4 - 1; /*0x406a9*/
  if ( (float)((float)v4 - v3) < 0.5 ) /*0x406ba*/
    v5 = v4; /*0x406ba*/
  if ( *(_BYTE *)(a1 + 436) ) /*0x406bd*/
    return (unsigned int)v5; /*0x406bd*/
  if ( v5 < 0 ) /*0x406ca*/
    v5 = 0; /*0x406ca*/
  v6 = *(_BYTE *)(a1 + 456) ? *(cocos2d::CCArray **)(a1 + 448) : *(cocos2d::CCArray **)(a1 + 480);
  if ( (int)(cocos2d::CCArray::count(v6) - 1) >= v5 ) /*0x406ef*/
    return (unsigned int)v5; /*0x4073d*/
  if ( *(_BYTE *)(a1 + 456) ) /*0x406f1*/
    return cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 448)) - 1; /*0x40707*/
  return cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 480)) - 1; /*0x40709*/
}

// [2/14] Address: 0x49880
// Method: CCScrollLayerExt::CCScrollLayerExt
// Hidden C++ exception states: #wind=3
__int64 __fastcall CCScrollLayerExt_CCScrollLayerExt(__int64 a1, float *a2)
{
  float v4; // xmm6_4
  _QWORD *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  float v8; // xmm6_4
  __int64 v9; // rax
  struct cocos2d::CCLayerColor *v10; // rax
  __int64 v11; // rdi
  double v12; // xmm1_8
  float *ContentSize; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  float v16; // xmm6_4
  float *v17; // rax
  struct cocos2d::CCLayerColor *v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rax
  int v22; // [rsp+78h] [rbp+10h] BYREF
  _QWORD *v23; // [rsp+80h] [rbp+18h] BYREF

  cocos2d::CCLayer::CCLayer((cocos2d::CCLayer *)a1); /*0x498a6*/
  cocos2d::CCTouchClipper::CCTouchClipper((cocos2d::CCTouchClipper *)(a1 + 408)); /*0x498b4*/
  *(_QWORD *)a1 = &CCScrollLayerExt::`vftable'; /*0x498c2*/
  *(_QWORD *)(a1 + 320) = &CCScrollLayerExt::`vftable'; /*0x498cc*/
  *(_QWORD *)(a1 + 328) = &CCScrollLayerExt::`vftable'; /*0x498da*/
  *(_QWORD *)(a1 + 336) = &CCScrollLayerExt::`vftable'; /*0x498e8*/
  *(_QWORD *)(a1 + 344) = &CCScrollLayerExt::`vftable'; /*0x498f6*/
  *(_QWORD *)(a1 + 352) = &CCScrollLayerExt::`vftable'; /*0x49904*/
  *(_QWORD *)(a1 + 408) = &CCScrollLayerExt::`vftable'; /*0x49912*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(a1 + 424)); /*0x49920*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(a1 + 432)); /*0x4992d*/
  *(_BYTE *)(a1 + 488) = 1; /*0x49933*/
  *(_BYTE *)(a1 + 493) = 0; /*0x4993a*/
  cocos2d::CCLayer::setTouchEnabled((cocos2d::CCLayer *)a1, 1); /*0x49946*/
  *(_WORD *)(a1 + 491) = 0; /*0x4994c*/
  cocos2d::CCNode::setContentSize((cocos2d::CCNode *)a1, (const struct cocos2d::CCSize *)(a2 + 2)); /*0x4995c*/
  cocos2d::CCNode::setPosition((cocos2d::CCNode *)a1, (const struct cocos2d::CCPoint *)a2); /*0x49968*/
  *(_WORD *)(a1 + 489) = 0; /*0x4996e*/
  *(_QWORD *)(a1 + 472) = 0; /*0x4997a*/
  *(_DWORD *)(a1 + 504) = 1112014848; /*0x49981*/
  *(_DWORD *)(a1 + 508) = 1112014848; /*0x4998b*/
  *(_QWORD *)(a1 + 496) = 0; /*0x49995*/
  *(_QWORD *)(a1 + 416) = 0; /*0x4999c*/
  cocos2d::CCPoint::operator=(a1 + 424, &unk_903AE0); /*0x499b1*/
  cocos2d::CCPoint::operator=(a1 + 432, &unk_903AE0); /*0x499c5*/
  *(_WORD *)(a1 + 448) = 0; /*0x499cb*/
  *(_DWORD *)(a1 + 512) = 0; /*0x499d3*/
  *(_BYTE *)(a1 + 516) = 0; /*0x499da*/
  v22 = 8421504; /*0x499ed*/
  v4 = a2[2]; /*0x499f1*/
  v5 = operator new(0x220u); /*0x49a00*/
  v23 = v5; /*0x49a03*/
  memset(v5, 0, 0x220u); /*0x49a16*/
  cocos2d::CCLayerColor::CCLayerColor((cocos2d::CCLayerColor *)v5); /*0x49a1e*/
  *v5 = &CCContentLayer::`vftable'; /*0x49a2b*/
  v5[40] = &CCContentLayer::`vftable'; /*0x49a35*/
  v5[41] = &CCContentLayer::`vftable'; /*0x49a43*/
  v5[42] = &CCContentLayer::`vftable'; /*0x49a51*/
  v5[43] = &CCContentLayer::`vftable'; /*0x49a5f*/
  v5[44] = &CCContentLayer::`vftable'; /*0x49a6d*/
  v5[51] = &CCContentLayer::`vftable'; /*0x49a7b*/
  v5[54] = &CCContentLayer::`vftable'; /*0x49a89*/
  if ( cocos2d::CCLayerColor::initWithColor( /*0x49aa5*/
         (cocos2d::CCLayerColor *)v5,
         (const struct cocos2d::_ccColor4B *)&v22,
         v4,
         0.0) )
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v5); /*0x49aae*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v5 + 8LL))(v5, 1); /*0x49abe*/
    v5 = 0; /*0x49ac1*/
  }
  *(_QWORD *)(a1 + 480) = v5; /*0x49ac4*/
  v6 = *v5; /*0x49acb*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, 0.0, 0.0); /*0x49ad9*/
  (*(void (__fastcall **)(_QWORD *, __int64))(v6 + 288))(v5, v7); /*0x49ae5*/
  cocos2d::CCNode::addChild((cocos2d::CCNode *)a1, *(struct cocos2d::CCNode **)(a1 + 480)); /*0x49af5*/
  *(_QWORD *)(a1 + 456) = 0; /*0x49afb*/
  v8 = a2[3] * a2[3]; /*0x49b0e*/
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 480) + 320LL))(*(_QWORD *)(a1 + 480)); /*0x49b15*/
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v23, 4.0, v8 / *(float *)(v9 + 4)); /*0x49b33*/
  v22 = -1271778766; /*0x49b45*/
  v10 = cocos2d::CCLayerColor::create((const struct cocos2d::_ccColor4B *)&v22, *(float *)&v23, *((float *)&v23 + 1)); /*0x49b60*/
  *(_QWORD *)(a1 + 456) = v10; /*0x49b66*/
  v11 = *(_QWORD *)v10; /*0x49b6d*/
  v12 = *((float *)cocos2d::CCNode::getContentSize((cocos2d::CCNode *)a1) + 1) - *((float *)&v23 + 1) * 0.5; /*0x49b9b*/
  ContentSize = (float *)cocos2d::CCNode::getContentSize((cocos2d::CCNode *)a1); /*0x49ba6*/
  v14 = *(_QWORD *)(a1 + 456); /*0x49bac*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, *ContentSize - *(float *)&v23 * 0.5, v12); /*0x49bdb*/
  (*(void (__fastcall **)(__int64, __int64))(v11 + 184))(v14, v15); /*0x49be7*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 456) + 920LL))(*(_QWORD *)(a1 + 456), 0); /*0x49bf9*/
  cocos2d::CCNode::addChild((cocos2d::CCNode *)a1, *(struct cocos2d::CCNode **)(a1 + 456)); /*0x49c09*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 456) + 336LL))(*(_QWORD *)(a1 + 456), 0); /*0x49c1b*/
  *(_QWORD *)(a1 + 464) = 0; /*0x49c21*/
  v16 = a2[2]; /*0x49c28*/
  v17 = (float *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 480) + 320LL))(*(_QWORD *)(a1 + 480)); /*0x49c37*/
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v23, (float)(v16 * v16) / *v17, 4.0); /*0x49c58*/
  v22 = -1271778766; /*0x49c6a*/
  v18 = cocos2d::CCLayerColor::create((const struct cocos2d::_ccColor4B *)&v22, *(float *)&v23, *((float *)&v23 + 1)); /*0x49c8b*/
  *(_QWORD *)(a1 + 464) = v18; /*0x49c8e*/
  v19 = *(_QWORD *)v18; /*0x49c95*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, *(float *)&v23 * 0.5, *((float *)&v23 + 1) * 0.5); /*0x49cc7*/
  (*(void (__fastcall **)(struct cocos2d::CCLayerColor *, __int64))(v19 + 184))(v18, v20); /*0x49cd3*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 464) + 920LL))(*(_QWORD *)(a1 + 464), 0); /*0x49ce5*/
  cocos2d::CCNode::addChild((cocos2d::CCNode *)a1, *(struct cocos2d::CCNode **)(a1 + 464)); /*0x49cf5*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 464) + 336LL))(*(_QWORD *)(a1 + 464), 0); /*0x49d07*/
  cocos2d::CCNode::schedule(a1, CCScrollLayerExt_updateIndicators); /*0x49d17*/
  return a1; /*0x49d21*/
}

// [3/14] Address: 0x49d40
// Method: CCScrollLayerExt::~CCScrollLayerExt
void *__fastcall CCScrollLayerExt__dtor_CCScrollLayerExt(void *Block, char a2)
{
  sub_49ED0(); /*0x49d4f*/
  if ( (a2 & 1) != 0 ) /*0x49d57*/
    j_j_free(Block); /*0x49d61*/
  return Block; /*0x49d66*/
}

// [4/14] Address: 0x4a140
// Method: CCScrollLayerExt::scrollingEnd
void __fastcall CCScrollLayerExt_scrollingEnd(__int64 a1)
{
  __int64 v2; // rcx

  cocos2d::CCNode::stopAllActions(*(cocos2d::CCNode **)(a1 + 480)); /*0x4a150*/
  v2 = *(_QWORD *)(a1 + 472); /*0x4a156*/
  *(_BYTE *)(a1 + 449) = 0; /*0x4a15d*/
  if ( v2 ) /*0x4a167*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 8LL))(v2, a1); /*0x4a174*/
}

// [5/14] Address: 0x4a180
// Method: CCScrollLayerExt::updateIndicators
void __fastcall CCScrollLayerExt_updateIndicators(__int64 a1)
{
  const struct cocos2d::CCSize *v2; // rax
  const struct cocos2d::CCSize *v3; // rax
  __int64 v4; // rax
  float v5; // xmm6_4
  const struct cocos2d::CCPoint *v6; // rax
  float v7; // xmm6_4
  float v8; // xmm6_4
  const struct cocos2d::CCPoint *v9; // rax
  float v10; // xmm1_4
  float v11; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v12[4]; // [rsp+28h] [rbp-18h] BYREF
  float v13; // [rsp+2Ch] [rbp-14h]
  float v14; // [rsp+50h] [rbp+10h] BYREF
  float v15; // [rsp+54h] [rbp+14h]
  float v16; // [rsp+60h] [rbp+20h] BYREF
  float v17; // [rsp+64h] [rbp+24h]
  float v18; // [rsp+68h] [rbp+28h] BYREF
  float v19; // [rsp+6Ch] [rbp+2Ch]

  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 464) + 336LL))( /*0x4a1a6*/
    *(_QWORD *)(a1 + 464),
    *(unsigned __int8 *)(a1 + 489));
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 456) + 336LL))( /*0x4a1bd*/
    *(_QWORD *)(a1 + 456),
    *(unsigned __int8 *)(a1 + 490));
  v2 = (const struct cocos2d::CCSize *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 480) + 320LL))(*(_QWORD *)(a1 + 480)); /*0x4a1cd*/
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v18, v2); /*0x4a1da*/
  v3 = (const struct cocos2d::CCSize *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 320LL))(a1); /*0x4a1e6*/
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v14, v3); /*0x4a1f3*/
  if ( *(_BYTE *)(a1 + 490) ) /*0x4a1f9*/
  {
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v16, 4.0, (float)(v15 * v15) / v19); /*0x4a220*/
    (*(void (__fastcall **)(_QWORD, float *))(**(_QWORD **)(a1 + 456) + 312LL))(*(_QWORD *)(a1 + 456), &v16); /*0x4a234*/
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 480) + 200LL))(*(_QWORD *)(a1 + 480)); /*0x4a244*/
    v5 = (float)((float)(*(float *)(v4 + 4) - v15) * v17) / v15; /*0x4a263*/
    v6 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 456) + 200LL))(*(_QWORD *)(a1 + 456)); /*0x4a268*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v11, v6); /*0x4a275*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v12, v11, (float)(v15 - v5) - v17 * 0.5); /*0x4a2a8*/
    (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 456) + 184LL))(*(_QWORD *)(a1 + 456), v12); /*0x4a2bc*/
  }
  if ( *(_BYTE *)(a1 + 489) ) /*0x4a2c2*/
  {
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v16, (float)(v14 * v14) / v18, 4.0); /*0x4a2e9*/
    (*(void (__fastcall **)(_QWORD, float *))(**(_QWORD **)(a1 + 464) + 312LL))(*(_QWORD *)(a1 + 464), &v16); /*0x4a2fd*/
    v7 = *(float *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 480) + 200LL))(*(_QWORD *)(a1 + 480)); /*0x4a31a*/
    v8 = (float)((float)(v7 - v14) * v16) / v14; /*0x4a32b*/
    v9 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 464) + 200LL))(*(_QWORD *)(a1 + 464)); /*0x4a330*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v12, v9); /*0x4a33d*/
    v10 = v14 * 0.5 - v8 - v16 * 0.5; /*0x4a372*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v11, v10, v13); /*0x4a37b*/
    (*(void (__fastcall **)(_QWORD, float *))(**(_QWORD **)(a1 + 464) + 184LL))(*(_QWORD *)(a1 + 464), &v11); /*0x4a38f*/
  }
}

// [6/14] Address: 0x4a3b0
// Method: CCScrollLayerExt::registerWithTouchDispatcher
void __fastcall CCScrollLayerExt_registerWithTouchDispatcher(__int64 a1)
{
  __int64 v2; // rax
  struct cocos2d::CCTouchDelegate *v3; // rdi
  cocos2d::CCTouchDispatcher *v4; // rax

  v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x4a3bd*/
  v3 = (struct cocos2d::CCTouchDelegate *)(a1 + 320); /*0x4a3c5*/
  if ( !a1 ) /*0x4a3cf*/
    v3 = 0; /*0x4a3cf*/
  v4 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2); /*0x4a3e0*/
  cocos2d::CCTouchDispatcher::addTargetedDelegate(v4, v3, -128, 0); /*0x4a3fc*/
}

// [7/14] Address: 0x4a410
// Method: CCScrollLayerExt::ccTouchBegan
bool __fastcall CCScrollLayerExt_ccTouchBegan(__int64 a1, __int64 a2)
{
  __int64 Location; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  bool v11; // zf
  _BYTE v13[8]; // [rsp+20h] [rbp-18h] BYREF
  _BYTE v14[16]; // [rsp+28h] [rbp-10h] BYREF
  char v15; // [rsp+40h] [rbp+8h] BYREF
  char v16; // [rsp+58h] [rbp+20h] BYREF

  if ( *(_BYTE *)(a1 + 173) ) /*0x4a41f*/
    return 0; /*0x4a41f*/
  Location = cocos2d::CCTouch::getLocation(a2, &v16); /*0x4a43a*/
  if ( (unsigned __int8)sub_497E0(a1 - 320, Location) ) /*0x4a44a*/
    return 0; /*0x4a44a*/
  *(_QWORD *)(a1 + 96) = a2; /*0x4a45c*/
  cocos2d::CCTouch::getLocationInView(a2, &v15); /*0x4a463*/
  v6 = cocos2d::CCDirector::sharedDirector(v5); /*0x4a469*/
  v7 = cocos2d::CCDirector::convertToGL(v6, &v16, &v15); /*0x4a47c*/
  cocos2d::CCPoint::operator=(a1 + 104, v7); /*0x4a489*/
  cocos2d::CCPoint::operator=(a1 + 112, v8); /*0x4a496*/
  v9 = cocos2d::CCNode::convertToNodeSpace(a1 - 320, &v16, a1 + 104); /*0x4a4ac*/
  cocos2d::CCPoint::operator=(&v15, v9); /*0x4a4ba*/
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v13); /*0x4a4c5*/
  cocos2d::CCPoint::operator=(v13, &unk_903AE0); /*0x4a4d7*/
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 320) + 320LL))(a1 - 320); /*0x4a4eb*/
  cocos2d::CCSize::operator=(v14, v10); /*0x4a4f9*/
  if ( !cocos2d::CCRect::containsPoint((cocos2d::CCRect *)v13, (const struct cocos2d::CCPoint *)&v15) ) /*0x4a509*/
    return 0; /*0x4a552*/
  cocos2d::CCNode::stopAllActions(*(cocos2d::CCNode **)(a1 + 160)); /*0x4a51a*/
  cocos2d::CCTime::gettimeofdayCocos2d((struct cocos2d::cc_timeval *)(a1 + 120), 0); /*0x4a526*/
  v11 = *(_BYTE *)(a1 + 173) == 0; /*0x4a52c*/
  *(_BYTE *)(a1 + 128) = 1; /*0x4a533*/
  return v11; /*0x4a53d*/
}

// [8/14] Address: 0x4a560
// Method: CCScrollLayerExt::ccTouchEnded
double __fastcall CCScrollLayerExt_ccTouchEnded(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r14
  const struct cocos2d::CCPoint *v8; // r8
  float v9; // xmm6_4
  float v10; // xmm1_4
  float v11; // xmm8_4
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rax
  float v15; // xmm7_4
  float v16; // xmm6_4
  const struct cocos2d::CCPoint *v17; // rax
  void (__fastcall ***v18)(_QWORD, __int64); // rcx
  struct cocos2d::CCActionInterval *v19; // rax
  struct cocos2d::CCFiniteTimeAction *v20; // rbx
  __int64 v21; // rax
  struct cocos2d::CCAction *v22; // rax
  _BYTE v24[4]; // [rsp+20h] [rbp-58h] BYREF
  float v25; // [rsp+24h] [rbp-54h]
  int v26; // [rsp+80h] [rbp+8h] BYREF
  float v27; // [rsp+84h] [rbp+Ch]
  char v28; // [rsp+88h] [rbp+10h] BYREF
  char v29; // [rsp+98h] [rbp+20h] BYREF

  cocos2d::CCTouch::getLocationInView(a2, &v28); /*0x4a57a*/
  v5 = cocos2d::CCDirector::sharedDirector(v4); /*0x4a580*/
  v6 = cocos2d::CCDirector::convertToGL(v5, &v26, &v28); /*0x4a599*/
  cocos2d::CCPoint::operator=(&v28, v6); /*0x4a5aa*/
  v7 = a1 - 320; /*0x4a5b4*/
  if ( a2 != *(_QWORD *)(a1 + 96) ) /*0x4a5bb*/
    goto LABEL_16; /*0x4a5bb*/
  cocos2d::CCTime::gettimeofdayCocos2d((struct cocos2d::cc_timeval *)&v29, 0); /*0x4a5d0*/
  v9 = cocos2d::ccpDistance((cocos2d *)&v28, (const struct cocos2d::CCPoint *)(a1 + 112), v8); /*0x4a5ec*/
  v10 = cocos2d::CCTime::timersubCocos2d((struct cocos2d::cc_timeval *)(a1 + 120), (struct cocos2d::cc_timeval *)&v29); /*0x4a600*/
  if ( (float)(v9 / v10) < 0.5 ) /*0x4a60f*/
  {
    sub_49F80(a1 - 320, 0); /*0x4a7c2*/
    goto LABEL_16; /*0x4a7c2*/
  }
  cocos2d::CCNode::stopAllActions(*(cocos2d::CCNode **)(v7 + 480)); /*0x4a62f*/
  cocos2d::CCPoint::operator-(&v28, &v26, a1 + 112); /*0x4a649*/
  if ( *(_BYTE *)(a1 + 172) ) /*0x4a64f*/
  {
    v27 = 0.0; /*0x4a658*/
  }
  else if ( *(_BYTE *)(a1 + 171) ) /*0x4a665*/
  {
    v26 = 0; /*0x4a66e*/
  }
  v11 = 0.30000001; /*0x4a67f*/
  v12 = *(_QWORD *)(v7 + 480); /*0x4a688*/
  v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 320LL))(a1 - 320); /*0x4a69b*/
  v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 320LL))(v12); /*0x4a69e*/
  v15 = *(float *)(a1 + 188) + *(float *)(a1 + 180); /*0x4a6bd*/
  v16 = (float)((float)(*(float *)(v13 + 4) - *(float *)(v14 + 4)) - *(float *)(v7 + 496)) - *(float *)(a1 + 184); /*0x4a6d1*/
  v17 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 160) + 200LL))(*(_QWORD *)(a1 + 160)); /*0x4a6d9*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v24, v17); /*0x4a6e7*/
  if ( (float)(v25 + v27) > v15 ) /*0x4a70a*/
  {
    v27 = v15 - v25; /*0x4a710*/
LABEL_11:
    v11 = 0.1; /*0x4a72d*/
    goto LABEL_12; /*0x4a72d*/
  }
  if ( v16 > (float)(v25 + v27) ) /*0x4a71e*/
  {
    v27 = v16 - v25; /*0x4a724*/
    goto LABEL_11; /*0x4a724*/
  }
LABEL_12:
  v18 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 152); /*0x4a736*/
  if ( v18 ) /*0x4a745*/
    (**v18)(v18, a1 - 320); /*0x4a74d*/
  sub_49F80(a1 - 320, 0); /*0x4a754*/
  v19 = cocos2d::CCMoveBy::create(v11, (const struct cocos2d::CCPoint *)&v26); /*0x4a765*/
  v20 = cocos2d::CCEaseOut::create(v19, 2.0); /*0x4a786*/
  v21 = cocos2d::CCCallFunc::create(a1 - 320, sub_49F70); /*0x4a789*/
  v22 = cocos2d::CCSequence::create(v20, v21, 0); /*0x4a798*/
  cocos2d::CCNode::runAction(*(cocos2d::CCNode **)(a1 + 160), v22); /*0x4a7a8*/
  *(_BYTE *)(a1 + 129) = 1; /*0x4a7b4*/
LABEL_16:
  *(_BYTE *)(a1 + 128) = 0; /*0x4a7cc*/
  return cocos2d::CCPoint::operator=(a1 + 104, &unk_903AE0); /*0x4a7e4*/
}

// [9/14] Address: 0x4a7f0
// Method: CCScrollLayerExt::ccTouchCancelled
double __fastcall CCScrollLayerExt_ccTouchCancelled(__int64 a1)
{
  sub_49F80(a1 - 320, 0); /*0x4a802*/
  return cocos2d::CCPoint::operator=(a1 + 104, &unk_903AE0); /*0x4a812*/
}

// [10/14] Address: 0x4a820
// Method: CCScrollLayerExt::ccTouchMoved
void __fastcall CCScrollLayerExt_ccTouchMoved(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  char v13; // [rsp+50h] [rbp+8h] BYREF
  float v14; // [rsp+54h] [rbp+Ch]
  char v15; // [rsp+58h] [rbp+10h] BYREF
  int v16; // [rsp+68h] [rbp+20h] BYREF
  int v17; // [rsp+6Ch] [rbp+24h]

  *(_BYTE *)(a1 + 128) = 1; /*0x4a82c*/
  v3 = a1 - 320; /*0x4a833*/
  cocos2d::CCTouch::getLocationInView(a2, &v15); /*0x4a845*/
  v6 = cocos2d::CCDirector::sharedDirector(v5); /*0x4a84b*/
  v7 = cocos2d::CCDirector::convertToGL(v6, &v13, &v15); /*0x4a85e*/
  cocos2d::CCPoint::operator=(&v15, v7); /*0x4a86c*/
  if ( a2 == *(_QWORD *)(a1 + 96) ) /*0x4a876*/
  {
    cocos2d::CCPoint::operator-(&v15, &v16, a1 + 104); /*0x4a894*/
    if ( *(_BYTE *)(a1 + 172) ) /*0x4a89a*/
    {
      v17 = 0; /*0x4a8a3*/
    }
    else if ( *(_BYTE *)(a1 + 171) ) /*0x4a8ad*/
    {
      v16 = 0; /*0x4a8b6*/
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 160) + 200LL))(*(_QWORD *)(a1 + 160)); /*0x4a8c8*/
    cocos2d::CCPoint::operator+(v8, &v13, &v16); /*0x4a8db*/
    v9 = *(_QWORD *)(v3 + 480); /*0x4a8e7*/
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 320LL))(v3); /*0x4a8fa*/
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 320LL))(v9); /*0x4a8fd*/
    if ( (float)((float)((float)(*(float *)(v10 + 4) - *(float *)(v11 + 4)) - *(float *)(v3 + 496)) /*0x4a93c*/
               - *(float *)(a1 + 184)) <= v14 )
    {
      if ( v14 > (float)(*(float *)(a1 + 188) + *(float *)(a1 + 180)) ) /*0x4a949*/
        v14 = *(float *)(a1 + 188) + *(float *)(a1 + 180); /*0x4a94b*/
    }
    else
    {
      v14 = (float)((float)(*(float *)(v10 + 4) - *(float *)(v11 + 4)) - *(float *)(v3 + 496)) - *(float *)(a1 + 184); /*0x4a93e*/
    }
    (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 160) + 184LL))(*(_QWORD *)(a1 + 160), &v13); /*0x4a960*/
    *(_BYTE *)(a1 + 129) = 1; /*0x4a96b*/
    cocos2d::CCPoint::operator=(a1 + 104, &v15); /*0x4a976*/
    v12 = *(_QWORD *)(a1 + 152); /*0x4a97c*/
    if ( v12 ) /*0x4a98b*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 16LL))(v12, v3); /*0x4a993*/
  }
}

// [11/14] Address: 0x4aaf0
// Method: CCScrollLayerExt::visit
void __fastcall CCScrollLayerExt_visit(cocos2d::CCNode *a1)
{
  __int64 updated; // rax
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_BYTE *)a1 + 488) ) /*0x4aaf6*/
  {
    updated = SetupMoveCommandPopup_updateControlVisibility(a1, v3); /*0x4ab07*/
    sub_6C9A0(a1, updated); /*0x4ab12*/
  }
  cocos2d::CCNode::visit(a1); /*0x4ab1a*/
  if ( *((_BYTE *)a1 + 488) ) /*0x4ab20*/
    glDisable(0xC11u); /*0x4ab33*/
}

// [12/14] Address: 0x4ac20
// Method: CCScrollLayerExt::touchInsideClip
bool __fastcall CCScrollLayerExt_touchInsideClip(__int64 a1, const struct cocos2d::CCPoint *a2)
{
  __int64 v2; // rbx
  const struct cocos2d::CCRect *updated; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  _BYTE v9[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v10[16]; // [rsp+30h] [rbp-28h] BYREF
  char v11; // [rsp+60h] [rbp+8h] BYREF
  char v12; // [rsp+70h] [rbp+18h] BYREF
  char v13; // [rsp+78h] [rbp+20h] BYREF

  v2 = a1 - 408; /*0x4ac2b*/
  if ( !*(_BYTE *)(a1 + 80) ) /*0x4ac27*/
    return 1; /*0x4ac37*/
  updated = (const struct cocos2d::CCRect *)SetupMoveCommandPopup_updateControlVisibility(a1 - 408, v10); /*0x4ac55*/
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 200LL))(v2); /*0x4ac62*/
  cocos2d::CCPoint::operator+(v6, &v11, updated); /*0x4ac6f*/
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 504LL))(v2); /*0x4ac82*/
  if ( v7 ) /*0x4ac87*/
    cocos2d::CCNode::convertToWorldSpace(v7, &v12, &v11); /*0x4ac96*/
  else
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v13, (const struct cocos2d::CCPoint *)&v11); /*0x4aca8*/
  cocos2d::CCPoint::operator=(updated, v8); /*0x4acb4*/
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v9, updated); /*0x4acc2*/
  return cocos2d::CCRect::containsPoint((cocos2d::CCRect *)v9, a2); /*0x4ac39*/
}

// [13/14] Address: 0x4acf0
// Method: CCScrollLayerExt::preVisitWithClippingRect
__int64 __fastcall CCScrollLayerExt_preVisitWithClippingRect(__int64 a1)
{
  __int64 result; // rax
  __int64 (__fastcall *v3)(__int64); // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // [rsp+40h] [rbp+8h] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 344LL))(a1); /*0x4ad03*/
  if ( (_BYTE)result ) /*0x4ad0b*/
  {
    glEnable(0xC11u); /*0x4ad1c*/
    v3 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 504LL); /*0x4ad2f*/
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1); /*0x4ad3c*/
    v5 = v3(a1); /*0x4ad3f*/
    cocos2d::CCNode::convertToWorldSpace(v5, &v8, v4); /*0x4ad4c*/
    v7 = cocos2d::CCEGLView::sharedOpenGLView(v6); /*0x4ad52*/
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 104LL))(v7); /*0x4ad7e*/
  }
  return result; /*0x4ad8a*/
}

// [14/14] Address: 0x4ada0
// Method: CCScrollLayerExt::postVisit
void CCScrollLayerExt_postVisit()
{
  glDisable(0xC11u); /*0x4ada5*/
}
