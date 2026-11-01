#include <Geode/binding/GJValueTween.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x3078e0
// Method: GJValueTween::step
bool __fastcall GJValueTween_step(__int64 a1, float a2)
{
  float v3; // xmm6_4
  bool v4; // cf
  float v5; // xmm3_4
  __int64 v6; // rdx
  double v7; // xmm0_8
  float v8; // xmm1_4
  bool result; // al

  if ( !*(_BYTE *)(a1 + 28) && !*(_BYTE *)(a1 + 29) ) /*0x3078f7*/
  {
    v3 = a2 + *(float *)(a1 + 12); /*0x3078fd*/
    v4 = v3 < *(float *)(a1 + 8); /*0x307902*/
    *(float *)(a1 + 12) = v3; /*0x307906*/
    if ( v4 ) /*0x30790b*/
      v5 = v3 / *(float *)(a1 + 8); /*0x30791a*/
    else
      v5 = 1.0; /*0x30790d*/
    v6 = *(unsigned int *)(a1 + 20); /*0x30791f*/
    if ( (int)v6 > 0 ) /*0x307924*/
    {
      v7 = sub_720C0(a1, v6); /*0x30792e*/
      v5 = *(float *)&v7; /*0x307933*/
    }
    v8 = (float)(*(float *)(a1 + 4) - *(float *)a1) * v5; /*0x307943*/
    result = v3 >= *(float *)(a1 + 8); /*0x307947*/
    *(_BYTE *)(a1 + 28) = result; /*0x30794a*/
    *(float *)(a1 + 16) = v8 + *(float *)a1; /*0x307951*/
  }
  return result; /*0x307956*/
}
