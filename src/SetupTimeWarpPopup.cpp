#include <Geode/binding/SetupTimeWarpPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x5f4620
// Method: SetupTimeWarpPopup::~SetupTimeWarpPopup
cocos2d::CCNode *__fastcall SetupTimeWarpPopup__dtor_SetupTimeWarpPopup(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &SetupTimeWarpPopup::`vftable'; /*0x5f4633*/
  *((_QWORD *)Block + 40) = &SetupTimeWarpPopup::`vftable'; /*0x5f4640*/
  *((_QWORD *)Block + 41) = &SetupTimeWarpPopup::`vftable'; /*0x5f464e*/
  *((_QWORD *)Block + 42) = &SetupTimeWarpPopup::`vftable'; /*0x5f465c*/
  *((_QWORD *)Block + 43) = &SetupTimeWarpPopup::`vftable'; /*0x5f466a*/
  *((_QWORD *)Block + 44) = &SetupTimeWarpPopup::`vftable'; /*0x5f4678*/
  *((_QWORD *)Block + 51) = &SetupTimeWarpPopup::`vftable'; /*0x5f4686*/
  *((_QWORD *)Block + 54) = &SetupTimeWarpPopup::`vftable'; /*0x5f4694*/
  *((_QWORD *)Block + 68) = &SetupTimeWarpPopup::`vftable'; /*0x5f46a2*/
  *((_QWORD *)Block + 83) = &SetupTimeWarpPopup::`vftable'; /*0x5f46b0*/
  *((_QWORD *)Block + 84) = &SetupTimeWarpPopup::`vftable'; /*0x5f46be*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x5f46c5*/
  if ( (a2 & 1) != 0 ) /*0x5f46cd*/
    j_j_free(Block); /*0x5f46d7*/
  return Block; /*0x5f46dc*/
}

// [2/4] Address: 0x5f46f0
// Method: SetupTimeWarpPopup::create
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall SetupTimeWarpPopup_create(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rsi

  v4 = operator new(0x400u); /*0x5f470f*/
  SetupTriggerPopup_SetupTriggerPopup((__int64)v4); /*0x5f471a*/
  *v4 = &SetupTimeWarpPopup::`vftable'; /*0x5f4726*/
  v4[40] = &SetupTimeWarpPopup::`vftable'; /*0x5f4730*/
  v4[41] = &SetupTimeWarpPopup::`vftable'; /*0x5f473e*/
  v4[42] = &SetupTimeWarpPopup::`vftable'; /*0x5f474c*/
  v4[43] = &SetupTimeWarpPopup::`vftable'; /*0x5f475a*/
  v4[44] = &SetupTimeWarpPopup::`vftable'; /*0x5f4768*/
  v4[51] = &SetupTimeWarpPopup::`vftable'; /*0x5f4776*/
  v4[54] = &SetupTimeWarpPopup::`vftable'; /*0x5f4784*/
  v4[68] = &SetupTimeWarpPopup::`vftable'; /*0x5f4792*/
  v4[83] = &SetupTimeWarpPopup::`vftable'; /*0x5f47a0*/
  v4[84] = &SetupTimeWarpPopup::`vftable'; /*0x5f47ae*/
  *((_DWORD *)v4 + 254) = 1065353216; /*0x5f47b5*/
  if ( (unsigned __int8)sub_5F4810(v4, a1, a2) ) /*0x5f47c8*/
  {
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v4); /*0x5f47d4*/
    return v4; /*0x5f47da*/
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v4 + 8LL))(v4, 1); /*0x5f47f5*/
    return 0; /*0x5f47f8*/
  }
}

// [3/4] Address: 0x5f4cc0
// Method: SetupTimeWarpPopup::determineStartValues
void __fastcall SetupTimeWarpPopup_determineStartValues(__int64 a1)
{
  __int64 v2; // rcx
  cocos2d::CCArray *v3; // rbx
  unsigned int v4; // edi
  float v5; // xmm6_4
  struct cocos2d::CCObject *v6; // rax

  SetupTriggerPopup_determineStartValues(a1); /*0x5f4ccd*/
  if ( *(_QWORD *)(a1 + 680) ) /*0x5f4cd2*/
  {
    v3 = (cocos2d::CCArray *)cocos2d::CCArray::create(v2); /*0x5f4cec*/
    cocos2d::CCArray::addObject(v3, *(struct cocos2d::CCObject **)(a1 + 680)); /*0x5f4cef*/
  }
  else
  {
    v3 = *(cocos2d::CCArray **)(a1 + 688); /*0x5f4cf7*/
  }
  if ( v3 ) /*0x5f4d01*/
  {
    if ( cocos2d::CCArray::count(v3) ) /*0x5f4d0a*/
    {
      v4 = 0; /*0x5f4d25*/
      v5 = -1.0; /*0x5f4d36*/
      *(_DWORD *)(a1 + 1016) = 1065353216; /*0x5f4d3a*/
      if ( cocos2d::CCArray::count(v3) ) /*0x5f4d44*/
      {
        do /*0x5f4d97*/
        {
          v6 = cocos2d::CCArray::objectAtIndex(v3, v4); /*0x5f4d65*/
          if ( v5 == -1.0 ) /*0x5f4d79*/
          {
            v5 = *((float *)v6 + 445); /*0x5f4d7b*/
          }
          else if ( v5 != *((float *)v6 + 445) ) /*0x5f4d85*/
          {
            v5 = -2.0; /*0x5f4d87*/
          }
          ++v4; /*0x5f4d8d*/
        }
        while ( v4 < cocos2d::CCArray::count(v3) ); /*0x5f4d97*/
        if ( v5 > 0.0 ) /*0x5f4da4*/
          *(float *)(a1 + 1016) = v5; /*0x5f4da6*/
      }
    }
  }
}

// [4/4] Address: 0x5f4dd0
// Method: SetupTimeWarpPopup::sliderChanged
__int64 __fastcall SetupTimeWarpPopup_sliderChanged(__int64 a1, float *a2)
{
  float v3; // xmm0_4
  float v4; // xmm0_4
  __int64 v5; // rax
  cocos2d::CCArray *v7; // rcx
  unsigned int v8; // ebx
  struct cocos2d::CCObject *v9; // rax

  v3 = (float)(SliderThumb_getValue(a2) * 1.9) + 0.1; /*0x5f4de9*/
  *(float *)(a1 + 1016) = v3; /*0x5f4df1*/
  v4 = roundf(v3 * 100.0) / 100.0; /*0x5f4e07*/
  v5 = *(_QWORD *)(a1 + 680); /*0x5f4e0f*/
  *(float *)(a1 + 1016) = v4; /*0x5f4e16*/
  if ( v5 ) /*0x5f4e21*/
  {
    *(float *)(v5 + 1780) = v4; /*0x5f4e26*/
    return sub_5F4EA0(a1); /*0x5f4e33*/
  }
  else
  {
    v7 = *(cocos2d::CCArray **)(a1 + 688); /*0x5f4e38*/
    if ( v7 ) /*0x5f4e42*/
    {
      v8 = 0; /*0x5f4e49*/
      if ( cocos2d::CCArray::count(v7) ) /*0x5f4e4b*/
      {
        do /*0x5f4e8c*/
        {
          v9 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 688), v8++); /*0x5f4e69*/
          *((_DWORD *)v9 + 445) = *(_DWORD *)(a1 + 1016); /*0x5f4e77*/
        }
        while ( v8 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 688)) ); /*0x5f4e8c*/
      }
    }
    return sub_5F4EA0(a1); /*0x5f4e9b*/
  }
}
