#include <Geode/binding/ConfigureHSVWidget.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/6] Address: 0x12cf70
// Method: ConfigureHSVWidget::~ConfigureHSVWidget
// Hidden C++ exception states: #wind=1
cocos2d::CCNode *__fastcall ConfigureHSVWidget__dtor_ConfigureHSVWidget(cocos2d::CCNode *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *(_QWORD *)Block = &ConfigureHSVWidget::`vftable'; /*0x12cf86*/
  *((_QWORD *)Block + 40) = &ConfigureHSVWidget::`vftable'; /*0x12cf90*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 52); /*0x12cf97*/
  if ( v4 ) /*0x12cfa1*/
    cocos2d::CCObject::release(v4); /*0x12cfa3*/
  cocos2d::CCNode::~CCNode(Block); /*0x12cfac*/
  if ( (a2 & 1) != 0 ) /*0x12cfb7*/
    j_j_free(Block); /*0x12cfc1*/
  return Block; /*0x12cfc9*/
}

// [2/6] Address: 0x12e1c0
// Method: ConfigureHSVWidget::textInputShouldOffset
__int64 __fastcall ConfigureHSVWidget_textInputShouldOffset(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = sub_12E240(a1 - 320); /*0x12e1d8*/
  if ( result ) /*0x12e1e0*/
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(result + 544) + 24LL))(result + 544, a2); /*0x12e1f2*/
  return result; /*0x12e1f5*/
}

// [3/6] Address: 0x12e200
// Method: ConfigureHSVWidget::textInputReturn
__int64 __fastcall ConfigureHSVWidget_textInputReturn(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = sub_12E240(a1 - 320); /*0x12e210*/
  if ( result ) /*0x12e218*/
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(result + 544) + 32LL))(result + 544, a2); /*0x12e22c*/
  return result; /*0x12e230*/
}

// [4/6] Address: 0x12e690
// Method: ConfigureHSVWidget::sliderChanged
__int64 __fastcall ConfigureHSVWidget_sliderChanged(__int64 a1, __int64 a2)
{
  float Value; // xmm0_4
  int v5; // eax
  int v6; // eax
  cocos2d::CCString *v7; // rax
  float v8; // xmm0_4
  float v9; // xmm0_4
  cocos2d::CCString *v10; // rax
  float v11; // xmm0_4
  float v12; // xmm0_4
  __int64 result; // rax
  __int64 v14; // rcx

  Value = SliderThumb_getValue(a2); /*0x12e6a8*/
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) - 1; /*0x12e6b9*/
  if ( v5 ) /*0x12e6bc*/
  {
    v6 = v5 - 1; /*0x12e6c2*/
    if ( v6 ) /*0x12e6c5*/
    {
      if ( v6 == 1 ) /*0x12e6ca*/
      {
        v7 = cocos2d::CCString::createWithFormat("%0.2f", Value); /*0x12e6e3*/
        v8 = cocos2d::CCString::floatValue(v7); /*0x12e6ec*/
        v9 = v8 + v8; /*0x12e6f9*/
        if ( *(_BYTE *)(a1 + 389) ) /*0x12e6f2*/
          v9 = v9 - 1.0; /*0x12e6ff*/
        *(float *)(a1 + 384) = v9; /*0x12e707*/
      }
    }
    else
    {
      v10 = cocos2d::CCString::createWithFormat("%0.2f", Value); /*0x12e724*/
      v11 = cocos2d::CCString::floatValue(v10); /*0x12e72d*/
      v12 = v11 + v11; /*0x12e73a*/
      if ( *(_BYTE *)(a1 + 388) ) /*0x12e733*/
        v12 = v12 - 1.0; /*0x12e740*/
      *(float *)(a1 + 380) = v12; /*0x12e748*/
    }
  }
  else
  {
    *(float *)(a1 + 376) = (float)(int)(float)((float)(Value * 360.0) - 180.0); /*0x12e76d*/
  }
  ConfigureHSVWidget_updateLabels(a1); /*0x12e778*/
  result = sub_12F300(a1); /*0x12e780*/
  v14 = *(_QWORD *)(a1 + 400); /*0x12e785*/
  if ( v14 ) /*0x12e78f*/
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 8LL))(v14, a1); /*0x12e797*/
  return result; /*0x12e79a*/
}

// [5/6] Address: 0x12e8b0
// Method: ConfigureHSVWidget::onResetHSV
__int64 __fastcall ConfigureHSVWidget_onResetHSV(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  *(_OWORD *)(a1 + 376) = unk_8F8400; /*0x12e8c8*/
  sub_83840(*(_QWORD *)(a1 + 352)); /*0x12e8d6*/
  sub_83840(*(_QWORD *)(a1 + 360)); /*0x12e8ea*/
  sub_83840(*(_QWORD *)(a1 + 368)); /*0x12e8fe*/
  ConfigureHSVWidget_updateLabels(a1); /*0x12e906*/
  result = sub_12F300(a1); /*0x12e90e*/
  v3 = *(_QWORD *)(a1 + 400); /*0x12e913*/
  if ( v3 ) /*0x12e91d*/
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 8LL))(v3, a1); /*0x12e92a*/
  return result; /*0x12e92e*/
}
