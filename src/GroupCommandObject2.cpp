#include <Geode/binding/GroupCommandObject2.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x35e0f0
// Method: GroupCommandObject2::GroupCommandObject2
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall GroupCommandObject2_GroupCommandObject2(_QWORD *a1)
{
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)((char *)a1 + 4)); /*0x35e106*/
  a1[55] = 0; /*0x35e10e*/
  a1[56] = 0; /*0x35e115*/
  a1[57] = 0; /*0x35e11c*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(a1 + 58)); /*0x35e12a*/
  a1[61] = 0; /*0x35e130*/
  a1[62] = 0; /*0x35e137*/
  a1[63] = 0; /*0x35e13e*/
  GroupCommandObject2_reset(a1); /*0x35e148*/
  return a1; /*0x35e151*/
}

// [2/3] Address: 0x35e160
// Method: GroupCommandObject2::reset
__int64 __fastcall GroupCommandObject2_reset(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax

  v1 = dword_8F847C; /*0x35e16c*/
  *(_DWORD *)a1 = dword_8F847C; /*0x35e172*/
  *(_DWORD *)(a1 + 12) = 0; /*0x35e179*/
  *(_QWORD *)(a1 + 16) = 0; /*0x35e17c*/
  *(_QWORD *)(a1 + 24) = 0; /*0x35e180*/
  *(_QWORD *)(a1 + 32) = 0; /*0x35e184*/
  *(_QWORD *)(a1 + 40) = 0; /*0x35e188*/
  *(_QWORD *)(a1 + 48) = 0; /*0x35e18c*/
  *(_QWORD *)(a1 + 56) = 0; /*0x35e190*/
  *(_QWORD *)(a1 + 64) = 0; /*0x35e194*/
  *(_QWORD *)(a1 + 72) = 0; /*0x35e198*/
  *(_QWORD *)(a1 + 80) = 0; /*0x35e19c*/
  *(_QWORD *)(a1 + 88) = 0; /*0x35e1a0*/
  *(_QWORD *)(a1 + 96) = 0; /*0x35e1a4*/
  *(_QWORD *)(a1 + 104) = 0; /*0x35e1a8*/
  *(_QWORD *)(a1 + 112) = 0; /*0x35e1ac*/
  *(_BYTE *)(a1 + 120) = 0; /*0x35e1b0*/
  *(_QWORD *)(a1 + 144) = 0; /*0x35e1b4*/
  *(_QWORD *)(a1 + 152) = 0; /*0x35e1bb*/
  *(_QWORD *)(a1 + 160) = 0; /*0x35e1c2*/
  *(_QWORD *)(a1 + 168) = 0; /*0x35e1c9*/
  *(_QWORD *)(a1 + 176) = 0; /*0x35e1d0*/
  *(_BYTE *)(a1 + 184) = 0; /*0x35e1d7*/
  *(_DWORD *)(a1 + 188) = 0; /*0x35e1de*/
  *(_DWORD *)(a1 + 208) = 0; /*0x35e1e4*/
  *(_QWORD *)(a1 + 232) = 0; /*0x35e1ea*/
  *(_QWORD *)(a1 + 240) = 0; /*0x35e1f1*/
  *(_QWORD *)(a1 + 248) = 0; /*0x35e1f8*/
  *(_QWORD *)(a1 + 256) = 0; /*0x35e1ff*/
  *(_QWORD *)(a1 + 264) = 0; /*0x35e206*/
  *(_QWORD *)(a1 + 272) = 0; /*0x35e20d*/
  *(_QWORD *)(a1 + 280) = 0; /*0x35e214*/
  *(_WORD *)(a1 + 288) = 0; /*0x35e21b*/
  *(_BYTE *)(a1 + 290) = 0; /*0x35e222*/
  *(_QWORD *)(a1 + 296) = 0; /*0x35e229*/
  *(_QWORD *)(a1 + 304) = 0; /*0x35e230*/
  *(_QWORD *)(a1 + 312) = 0; /*0x35e237*/
  *(_QWORD *)(a1 + 320) = 0; /*0x35e23e*/
  *(_DWORD *)(a1 + 328) = 0; /*0x35e245*/
  *(_QWORD *)(a1 + 336) = 0; /*0x35e24b*/
  *(_QWORD *)(a1 + 344) = 0; /*0x35e252*/
  *(_QWORD *)(a1 + 352) = 0; /*0x35e259*/
  *(_QWORD *)(a1 + 360) = 0; /*0x35e260*/
  *(_QWORD *)(a1 + 368) = 0; /*0x35e267*/
  *(_QWORD *)(a1 + 376) = 0; /*0x35e26e*/
  *(_QWORD *)(a1 + 384) = 0; /*0x35e275*/
  *(_QWORD *)(a1 + 392) = 0; /*0x35e27c*/
  *(_QWORD *)(a1 + 400) = 0; /*0x35e283*/
  *(_QWORD *)(a1 + 408) = 0; /*0x35e28a*/
  *(_QWORD *)(a1 + 416) = 0; /*0x35e291*/
  *(_BYTE *)(a1 + 424) = 0; /*0x35e298*/
  *(_DWORD *)(a1 + 428) = 0; /*0x35e29f*/
  *(_WORD *)(a1 + 432) = 1; /*0x35e2a5*/
  dword_8F847C = v1 + 1; /*0x35e2ae*/
  *(_QWORD *)(a1 + 128) = 0x3FF0000000000000LL; /*0x35e2be*/
  *(_QWORD *)(a1 + 136) = 0x3FF0000000000000LL; /*0x35e2c5*/
  *(_QWORD *)(a1 + 192) = 0x3FF0000000000000LL; /*0x35e2cc*/
  *(_QWORD *)(a1 + 200) = 0x3FF0000000000000LL; /*0x35e2d3*/
  *(_QWORD *)(a1 + 216) = 0x3FF0000000000000LL; /*0x35e2da*/
  *(_QWORD *)(a1 + 224) = 0x3FF0000000000000LL; /*0x35e2e1*/
  if ( *(_QWORD *)(a1 + 440) != *(_QWORD *)(a1 + 448) ) /*0x35e2f9*/
  {
    sub_35E5A0(); /*0x35e2fb*/
    *(_QWORD *)(a1 + 448) = *(_QWORD *)(a1 + 440); /*0x35e307*/
  }
  result = *(_QWORD *)(a1 + 488); /*0x35e30e*/
  if ( result != *(_QWORD *)(a1 + 496) ) /*0x35e31c*/
    *(_QWORD *)(a1 + 496) = result; /*0x35e31e*/
  *(_QWORD *)(a1 + 464) = 0; /*0x35e325*/
  *(_QWORD *)(a1 + 472) = 0; /*0x35e32c*/
  *(_DWORD *)(a1 + 480) = 0; /*0x35e333*/
  *(_BYTE *)(a1 + 512) = 0; /*0x35e339*/
  *(_DWORD *)(a1 + 516) = 0; /*0x35e340*/
  return result; /*0x35e346*/
}

// [3/3] Address: 0x35e360
// Method: GroupCommandObject2::step
__int64 __fastcall GroupCommandObject2_step(__int64 a1, float a2)
{
  bool v3; // zf
  double v4; // xmm2_8
  double v5; // xmm0_8
  __int64 result; // rax
  float v7; // xmm1_4

  if ( !*(_BYTE *)(a1 + 113) ) /*0x35e366*/
  {
    v3 = *(_BYTE *)(a1 + 112) == 0; /*0x35e373*/
    v4 = a2 + *(double *)(a1 + 32); /*0x35e37e*/
    *(double *)(a1 + 32) = v4; /*0x35e383*/
    if ( v3 ) /*0x35e388*/
    {
      if ( *(_BYTE *)(a1 + 432) ) /*0x35e38e*/
        *(_BYTE *)(a1 + 432) = 0; /*0x35e397*/
      else
        *(float *)(a1 + 428) = a2 + *(float *)(a1 + 428); /*0x35e3a8*/
      if ( *(_DWORD *)(a1 + 400) ) /*0x35e3b0*/
      {
        result = ((__int64 (*)(void))sub_35E430)(); /*0x35e3e7*/
        if ( *(_DWORD *)(a1 + 404) ) /*0x35e3ec*/
          result = sub_35E430(a1); /*0x35e405*/
        v7 = *(float *)(a1 + 428); /*0x35e40a*/
        if ( v7 > 0.0 && v7 >= *(double *)(a1 + 24) ) /*0x35e422*/
          *(_BYTE *)(a1 + 112) = 1; /*0x35e424*/
      }
      else
      {
        v5 = *(double *)(a1 + 24); /*0x35e3ba*/
        if ( v4 >= v5 && v5 != -1.0 ) /*0x35e3cf*/
          *(_BYTE *)(a1 + 112) = 1; /*0x35e3d1*/
      }
    }
  }
  return result; /*0x35e3d5*/
}
