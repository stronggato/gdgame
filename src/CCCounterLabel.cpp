#include <Geode/binding/CCCounterLabel.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x45de0
// Method: CCCounterLabel::~CCCounterLabel
cocos2d::CCLabelBMFont *__fastcall CCCounterLabel__dtor_CCCounterLabel(cocos2d::CCLabelBMFont *Block, char a2)
{
  *(_QWORD *)Block = &CCCounterLabel::`vftable'; /*0x45df3*/
  *((_QWORD *)Block + 40) = &CCCounterLabel::`vftable'; /*0x45e00*/
  *((_QWORD *)Block + 45) = &CCCounterLabel::`vftable'; /*0x45e0e*/
  *((_QWORD *)Block + 46) = &CCCounterLabel::`vftable'; /*0x45e1c*/
  cocos2d::CCLabelBMFont::~CCLabelBMFont(Block); /*0x45e23*/
  if ( (a2 & 1) != 0 ) /*0x45e2c*/
    j_j_free(Block); /*0x45e36*/
  return Block; /*0x45e3b*/
}

// [2/3] Address: 0x45e50
// Method: CCCounterLabel::setTargetCount
__int64 __fastcall CCCounterLabel_setTargetCount(__int64 a1, int a2)
{
  int v2; // eax
  float v3; // xmm0_4
  float v4; // xmm1_4
  float v5; // xmm2_4
  bool v6; // zf
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 552); /*0x45e58*/
  v3 = (float)*(int *)(a1 + 544); /*0x45e5e*/
  *(_DWORD *)(a1 + 540) = a2; /*0x45e61*/
  v4 = (float)a2 - v3; /*0x45e6e*/
  v5 = fabs(v4); /*0x45e7c*/
  if ( (float)v2 > v5 ) /*0x45e86*/
    v2 = (int)v5; /*0x45e88*/
  v6 = *(_BYTE *)(a1 + 548) == 0; /*0x45e8c*/
  result = (unsigned int)(int)(float)(v4 / (float)v2); /*0x45e9e*/
  *(_DWORD *)(a1 + 536) = result; /*0x45ea2*/
  if ( v6 ) /*0x45ea8*/
  {
    v6 = *(_BYTE *)(a1 + 556) == 0; /*0x45eaa*/
    *(_BYTE *)(a1 + 548) = 1; /*0x45eb1*/
    if ( v6 ) /*0x45eb8*/
      return cocos2d::CCNode::schedule(a1, sub_45EE0); /*0x45ec9*/
  }
  return result; /*0x45ed0*/
}

// [3/3] Address: 0x45f60
// Method: CCCounterLabel::updateString
// Hidden C++ exception states: #wind=1
double __fastcall CCCounterLabel_updateString(__int64 a1)
{
  signed int v2; // edx
  double result; // xmm0_8
  cocos2d::CCString *v4; // rax
  __int64 v5; // rdi
  void (__fastcall **v6)(__int64, const char *); // rbx
  const char *CString; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  _BYTE v10[32]; // [rsp+20h] [rbp-38h] BYREF

  v2 = *(_DWORD *)(a1 + 544); /*0x45f7c*/
  if ( *(_DWORD *)(a1 + 560) == 1 ) /*0x45f89*/
  {
    *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)v2); /*0x45f8f*/
    *(float *)&result = *(float *)&result / 100.0; /*0x45f92*/
    v4 = cocos2d::CCString::createWithFormat("%.2f", *(float *)&result); /*0x45fa9*/
    v5 = a1 + 360; /*0x45faf*/
    v6 = *(void (__fastcall ***)(__int64, const char *))(a1 + 360); /*0x45fb6*/
    CString = cocos2d::CCString::getCString(v4); /*0x45fbc*/
    (*v6)(v5, CString); /*0x45fc8*/
  }
  else
  {
    v8 = (_QWORD *)GameToolbox_intToString((__int64)v10, v2); /*0x45fd1*/
    v9 = v8; /*0x45fd6*/
    if ( v8[3] > 0xFu ) /*0x45fde*/
      v9 = (_QWORD *)*v8; /*0x45fe0*/
    (**(void (__fastcall ***)(__int64, _QWORD *))(a1 + 360))(a1 + 360, v9); /*0x45fed*/
    return sub_3C310(v10); /*0x45ff5*/
  }
  return result; /*0x45ffa*/
}
