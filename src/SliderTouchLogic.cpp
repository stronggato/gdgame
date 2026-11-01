#include <Geode/binding/SliderTouchLogic.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x832a0
// Method: SliderTouchLogic::~SliderTouchLogic
cocos2d::CCMenu *__fastcall SliderTouchLogic__dtor_SliderTouchLogic(cocos2d::CCMenu *Block, char a2)
{
  cocos2d::CCMenu::~CCMenu(Block); /*0x832af*/
  if ( (a2 & 1) != 0 ) /*0x832b8*/
    j_j_free(Block); /*0x832c2*/
  return Block; /*0x832c7*/
}

// [2/5] Address: 0x832e0
// Method: SliderTouchLogic::ccTouchBegan
char __fastcall SliderTouchLogic_ccTouchBegan(__int64 a1, struct cocos2d::CCTouch *a2, struct cocos2d::CCEvent *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  void (__fastcall ***v7)(_QWORD); // rcx
  char v9; // [rsp+30h] [rbp+8h] BYREF
  char v10; // [rsp+48h] [rbp+20h] BYREF

  if ( !cocos2d::CCMenu::ccTouchBegan((cocos2d::CCMenu *)a1, a2, a3) ) /*0x832f0*/
    return 0; /*0x8337a*/
  *(_BYTE *)(a1 - 320 + 472) = 1; /*0x83309*/
  cocos2d::CCNode::convertTouchToNodeSpace(a1 - 320, &v9, a2); /*0x83310*/
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 136) + 200LL))(*(_QWORD *)(a1 + 136)); /*0x83320*/
  cocos2d::CCPoint::operator-(&v9, &v10, v5); /*0x83333*/
  cocos2d::CCPoint::operator=(a1 + 156, &v10); /*0x83345*/
  v6 = *(_QWORD *)(a1 + 144); /*0x8334b*/
  if ( v6 ) /*0x83355*/
  {
    v7 = *(void (__fastcall ****)(_QWORD))(v6 + 440); /*0x83357*/
    if ( v7 ) /*0x83361*/
      (**v7)(v7); /*0x83366*/
  }
  return 1; /*0x8336a*/
}

// [3/5] Address: 0x83390
// Method: SliderTouchLogic::ccTouchEnded
void __fastcall SliderTouchLogic_ccTouchEnded(__int64 a1, struct cocos2d::CCTouch *a2, struct cocos2d::CCEvent *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx

  *(_BYTE *)(a1 + 152) = 0; /*0x83399*/
  cocos2d::CCMenu::ccTouchEnded((cocos2d::CCMenu *)a1, a2, a3); /*0x833a0*/
  v4 = *(_QWORD *)(a1 + 144); /*0x833a6*/
  if ( v4 ) /*0x833b0*/
  {
    v5 = *(_QWORD *)(v4 + 440); /*0x833b2*/
    if ( v5 ) /*0x833bc*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5); /*0x833c6*/
  }
}

// [4/5] Address: 0x833d0
// Method: SliderTouchLogic::ccTouchMoved
void __fastcall SliderTouchLogic_ccTouchMoved(__int64 a1, __int64 a2)
{
  char v3; // al
  float v4; // xmm0_4
  float v5; // xmm2_4
  float v6; // xmm1_4
  __int64 v7; // rax
  float Value; // xmm0_4
  float v9; // [rsp+40h] [rbp+8h] BYREF
  float v10; // [rsp+44h] [rbp+Ch]
  char v11; // [rsp+58h] [rbp+20h] BYREF

  cocos2d::CCNode::convertTouchToNodeSpace(a1 - 320, &v9, a2); /*0x833ed*/
  cocos2d::CCPoint::operator-(&v9, &v11, a1 + 156); /*0x83404*/
  cocos2d::CCPoint::operator=(&v9, &v11); /*0x83414*/
  v3 = *(_BYTE *)(a1 + 164); /*0x8341a*/
  if ( v3 ) /*0x83423*/
    v4 = v10; /*0x83425*/
  else
    v4 = v9; /*0x8342d*/
  v5 = (float)-*(float *)(a1 + 132) * 0.5; /*0x8344d*/
  if ( v5 <= v4 ) /*0x83454*/
  {
    v6 = *(float *)(a1 + 132) * 0.5; /*0x8346d*/
    if ( v4 <= v6 ) /*0x83474*/
    {
      if ( v3 ) /*0x83489*/
      {
        v5 = v4; /*0x8348b*/
        v4 = 0.0; /*0x8348e*/
      }
      else
      {
        v5 = 0.0; /*0x83493*/
      }
      v6 = v4; /*0x83496*/
    }
    else if ( v3 ) /*0x83478*/
    {
      v5 = *(float *)(a1 + 132) * 0.5; /*0x8347a*/
      v6 = 0.0; /*0x8347d*/
    }
    else
    {
      v5 = 0.0; /*0x83482*/
    }
  }
  else if ( v3 ) /*0x83458*/
  {
    v6 = 0.0; /*0x8345d*/
  }
  else
  {
    v6 = (float)-*(float *)(a1 + 132) * 0.5; /*0x83465*/
    v5 = 0.0; /*0x83468*/
  }
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v11, v6, v5); /*0x8349e*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 136) + 184LL))(*(_QWORD *)(a1 + 136), v7); /*0x834b8*/
  Value = SliderThumb_getValue(*(_QWORD *)(a1 + 136)); /*0x834c2*/
  if ( Value != SliderThumb_getRawValue(*(_QWORD *)(a1 + 136)) ) /*0x834db*/
    SliderThumb_setValue(*(_QWORD *)(a1 + 136)); /*0x834e7*/
  if ( *(_BYTE *)(a1 + 152) ) /*0x834ec*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 136) + 888LL))(*(_QWORD *)(a1 + 136)); /*0x834ff*/
  if ( *(_QWORD *)(a1 + 144) ) /*0x83505*/
    sub_838E0(); /*0x83511*/
}

// [5/5] Address: 0x83530
// Method: SliderTouchLogic::registerWithTouchDispatcher
void __fastcall SliderTouchLogic_registerWithTouchDispatcher(__int64 a1)
{
  __int64 v2; // rax
  struct cocos2d::CCTouchDelegate *v3; // rdi
  cocos2d::CCTouchDispatcher *v4; // rax

  v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x8353d*/
  v3 = (struct cocos2d::CCTouchDelegate *)(a1 + 320); /*0x83545*/
  if ( !a1 ) /*0x8354f*/
    v3 = 0; /*0x8354f*/
  v4 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2); /*0x83560*/
  cocos2d::CCTouchDispatcher::addPrioTargetedDelegate(v4, v3, -500, 1); /*0x8357c*/
}
