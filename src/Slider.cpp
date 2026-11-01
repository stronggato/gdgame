#include <Geode/binding/Slider.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/6] Address: 0x82de0
// Method: Slider::~Slider
cocos2d::CCLayer *__fastcall Slider__dtor_Slider(cocos2d::CCLayer *Block, char a2)
{
  cocos2d::CCLayer::~CCLayer(Block); /*0x82def*/
  if ( (a2 & 1) != 0 ) /*0x82df8*/
    j_j_free(Block); /*0x82e02*/
  return Block; /*0x82e07*/
}

// [2/6] Address: 0x83960
// Method: Slider::ccTouchBegan
__int64 __fastcall Slider_ccTouchBegan(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 320LL) + 8LL))(*(_QWORD *)(a1 + 88) + 320LL);
}

// [3/6] Address: 0x83980
// Method: Slider::ccTouchEnded
__int64 __fastcall Slider_ccTouchEnded(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 320LL) + 24LL))(*(_QWORD *)(a1 + 88) + 320LL);
}

// [4/6] Address: 0x839a0
// Method: Slider::ccTouchMoved
__int64 __fastcall Slider_ccTouchMoved(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 320LL) + 16LL))(*(_QWORD *)(a1 + 88) + 320LL);
}

// [5/6] Address: 0x839c0
// Method: Slider::setRotated
__int64 __fastcall Slider_setRotated(__int64 a1)
{
  __int64 v1; // rax
  __int64 *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  char v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 408); /*0x839cf*/
  v3 = *(__int64 **)(v1 + 456); /*0x839de*/
  *(_BYTE *)(v1 + 484) = 1; /*0x839e8*/
  SliderThumb_getValue(v3); /*0x839ef*/
  v4 = *v3; /*0x839f4*/
  *((_BYTE *)v3 + 404) = 1; /*0x839ff*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v7, 0.0, 0.0); /*0x83a0c*/
  (*(void (__fastcall **)(__int64 *, __int64))(v4 + 184))(v3, v5); /*0x83a18*/
  SliderThumb_setValue(v3); /*0x83a24*/
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 424) + 352LL))(*(_QWORD *)(a1 + 424));
}

// [6/6] Address: 0x83a60
// Method: Slider::setMaxOffset
double __fastcall Slider_setMaxOffset(__int64 a1, float a2)
{
  __int64 v2; // rbx
  float v3; // xmm0_4
  float *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  char v8; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 408); /*0x83a6a*/
  v3 = (*(float (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 456) + 168LL))(*(_QWORD *)(v2 + 456)); /*0x83a88*/
  v4 = *(float **)(v2 + 456); /*0x83a8e*/
  *(float *)(v2 + 452) = v3 * a2; /*0x83a9c*/
  SliderThumb_getValue(v4); /*0x83aa4*/
  v5 = *(_QWORD *)v4; /*0x83aa9*/
  v4[100] = a2; /*0x83ab4*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v8, 0.0, 0.0); /*0x83ac2*/
  (*(void (__fastcall **)(float *, __int64))(v5 + 184))(v4, v6); /*0x83ace*/
  return SliderThumb_setValue(v4); /*0x83ada*/
}
