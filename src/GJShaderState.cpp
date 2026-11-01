#include <Geode/binding/GJShaderState.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x61d6d0
// Method: GJShaderState::updateTweenAction
__int64 __fastcall GJShaderState_updateTweenAction(__int64 a1, float a2, int a3)
{
  __int64 v3; // rax
  int v4; // r8d
  __int64 result; // rax
  __int64 v6; // kr10_8

  v4 = a3 - 1; /*0x61d6d0*/
  v6 = v3; /*0x61d6dd*/
  result = v4; /*0x61d6dd*/
  switch ( v4 ) /*0x61d6f2*/
  {
    case 0: /*0x61d6f2*/
      *(float *)(a1 + 364) = a2; /*0x61d6f4*/
      break; /*0x61d6fc*/
    case 1: /*0x61d6f2*/
      *(float *)(a1 + 368) = a2; /*0x61d6fd*/
      break; /*0x61d705*/
    case 2: /*0x61d6f2*/
      *(float *)(a1 + 388) = a2; /*0x61d706*/
      break; /*0x61d70e*/
    case 3: /*0x61d6f2*/
      *(float *)(a1 + 392) = a2; /*0x61d70f*/
      break; /*0x61d717*/
    case 4: /*0x61d6f2*/
      *(float *)(a1 + 400) = a2; /*0x61d718*/
      break; /*0x61d720*/
    case 5: /*0x61d6f2*/
      *(float *)(a1 + 404) = a2; /*0x61d721*/
      break; /*0x61d729*/
    case 6: /*0x61d6f2*/
      *(float *)(a1 + 396) = a2; /*0x61d72a*/
      break; /*0x61d732*/
    case 7: /*0x61d6f2*/
      *(float *)(a1 + 384) = a2; /*0x61d733*/
      break; /*0x61d73b*/
    case 8: /*0x61d6f2*/
      *(float *)(a1 + 412) = a2; /*0x61d73c*/
      break; /*0x61d744*/
    case 9: /*0x61d6f2*/
      *(float *)(a1 + 416) = a2; /*0x61d745*/
      break; /*0x61d74d*/
    case 10: /*0x61d6f2*/
      *(float *)(a1 + 424) = a2; /*0x61d74e*/
      break; /*0x61d756*/
    case 11: /*0x61d6f2*/
      *(float *)(a1 + 428) = a2; /*0x61d757*/
      break; /*0x61d75f*/
    case 12: /*0x61d6f2*/
      *(float *)(a1 + 432) = a2; /*0x61d760*/
      break; /*0x61d768*/
    case 13: /*0x61d6f2*/
      *(float *)(a1 + 460) = a2; /*0x61d769*/
      break; /*0x61d771*/
    case 14: /*0x61d6f2*/
      *(float *)(a1 + 464) = a2; /*0x61d772*/
      break; /*0x61d77a*/
    case 15: /*0x61d6f2*/
      *(float *)(a1 + 468) = a2; /*0x61d77b*/
      break; /*0x61d783*/
    case 16: /*0x61d6f2*/
      *(float *)(a1 + 492) = a2; /*0x61d784*/
      break; /*0x61d78c*/
    case 17: /*0x61d6f2*/
      *(float *)(a1 + 496) = a2; /*0x61d78d*/
      break; /*0x61d795*/
    case 18: /*0x61d6f2*/
      *(float *)(a1 + 500) = a2; /*0x61d796*/
      break; /*0x61d79e*/
    case 19: /*0x61d6f2*/
      *(float *)(a1 + 504) = a2; /*0x61d79f*/
      break; /*0x61d7a7*/
    case 20: /*0x61d6f2*/
      *(float *)(a1 + 536) = a2; /*0x61d7a8*/
      break; /*0x61d7b0*/
    case 21: /*0x61d6f2*/
      *(float *)(a1 + 560) = a2; /*0x61d7b1*/
      break; /*0x61d7b9*/
    case 22: /*0x61d6f2*/
      *(float *)(a1 + 564) = a2; /*0x61d7ba*/
      break; /*0x61d7c2*/
    case 23: /*0x61d6f2*/
      *(float *)(a1 + 548) = a2; /*0x61d7c3*/
      break; /*0x61d7cb*/
    case 24: /*0x61d6f2*/
      *(float *)(a1 + 568) = a2; /*0x61d7cc*/
      break; /*0x61d7d4*/
    case 25: /*0x61d6f2*/
      *(float *)(a1 + 572) = a2; /*0x61d7d5*/
      break; /*0x61d7dd*/
    case 26: /*0x61d6f2*/
      *(float *)(a1 + 596) = a2; /*0x61d7de*/
      break; /*0x61d7e6*/
    case 27: /*0x61d6f2*/
      *(float *)(a1 + 600) = a2; /*0x61d7e7*/
      break; /*0x61d7ef*/
    case 28: /*0x61d6f2*/
      *(float *)(a1 + 608) = a2; /*0x61d7f0*/
      break; /*0x61d7f8*/
    case 29: /*0x61d6f2*/
      *(float *)(a1 + 612) = a2; /*0x61d7f9*/
      break; /*0x61d801*/
    case 30: /*0x61d6f2*/
      *(float *)(a1 + 616) = a2; /*0x61d802*/
      break; /*0x61d80a*/
    case 31: /*0x61d6f2*/
      *(float *)(a1 + 620) = a2; /*0x61d80b*/
      break; /*0x61d813*/
    case 32: /*0x61d6f2*/
      *(float *)(a1 + 636) = a2; /*0x61d814*/
      break; /*0x61d81c*/
    case 33: /*0x61d6f2*/
      *(float *)(a1 + 640) = a2; /*0x61d81d*/
      break; /*0x61d825*/
    case 34: /*0x61d6f2*/
      *(float *)(a1 + 644) = a2; /*0x61d826*/
      break; /*0x61d82e*/
    case 35: /*0x61d6f2*/
      *(float *)(a1 + 648) = a2; /*0x61d82f*/
      break; /*0x61d837*/
    case 36: /*0x61d6f2*/
      *(float *)(a1 + 652) = a2; /*0x61d838*/
      break; /*0x61d840*/
    case 37: /*0x61d6f2*/
      *(float *)(a1 + 660) = a2; /*0x61d841*/
      break; /*0x61d849*/
    case 38: /*0x61d6f2*/
      *(float *)(a1 + 664) = a2; /*0x61d84a*/
      break; /*0x61d852*/
    case 39: /*0x61d6f2*/
      *(float *)(a1 + 668) = a2; /*0x61d853*/
      break; /*0x61d85b*/
    case 40: /*0x61d6f2*/
      *(float *)(a1 + 672) = a2; /*0x61d85c*/
      break; /*0x61d864*/
    case 41: /*0x61d6f2*/
      *(float *)(a1 + 676) = a2; /*0x61d865*/
      break; /*0x61d86d*/
    case 42: /*0x61d6f2*/
      *(float *)(a1 + 680) = a2; /*0x61d86e*/
      break; /*0x61d876*/
    case 43: /*0x61d6f2*/
      *(float *)(a1 + 684) = a2; /*0x61d877*/
      break; /*0x61d87f*/
    case 44: /*0x61d6f2*/
      *(double *)(a1 + 688) = a2; /*0x61d887*/
      break; /*0x61d88f*/
    case 45: /*0x61d6f2*/
      *(double *)(a1 + 696) = a2; /*0x61d897*/
      break; /*0x61d89f*/
    case 46: /*0x61d6f2*/
      *(float *)(a1 + 164) = a2; /*0x61d8a0*/
      break; /*0x61d8a8*/
    case 47: /*0x61d6f2*/
      *(float *)(a1 + 472) = a2; /*0x61d8a9*/
      break; /*0x61d8b1*/
    case 48: /*0x61d6f2*/
      *(float *)(a1 + 336) = a2; /*0x61d8b2*/
      break; /*0x61d8ba*/
    case 49: /*0x61d6f2*/
      *(float *)(a1 + 188) = a2; /*0x61d8bb*/
      break; /*0x61d8c3*/
    case 50: /*0x61d6f2*/
      *(float *)(a1 + 192) = a2; /*0x61d8c4*/
      break; /*0x61d8cc*/
    case 51: /*0x61d6f2*/
      *(float *)(a1 + 196) = a2; /*0x61d8cd*/
      break; /*0x61d8d5*/
    case 52: /*0x61d6f2*/
      *(float *)(a1 + 200) = a2; /*0x61d8d6*/
      break; /*0x61d8de*/
    case 53: /*0x61d6f2*/
      *(float *)(a1 + 204) = a2; /*0x61d8df*/
      break; /*0x61d8e7*/
    case 54: /*0x61d6f2*/
      *(float *)(a1 + 208) = a2; /*0x61d8e8*/
      break; /*0x61d8f0*/
    case 55: /*0x61d6f2*/
      *(float *)(a1 + 216) = a2; /*0x61d8f1*/
      break; /*0x61d8f9*/
    case 56: /*0x61d6f2*/
      *(float *)(a1 + 236) = a2; /*0x61d8fa*/
      break; /*0x61d902*/
    case 57: /*0x61d6f2*/
      *(float *)(a1 + 240) = a2; /*0x61d903*/
      break; /*0x61d90b*/
    case 58: /*0x61d6f2*/
      *(float *)(a1 + 220) = a2; /*0x61d90c*/
      break; /*0x61d914*/
    case 59: /*0x61d6f2*/
      *(float *)(a1 + 232) = a2; /*0x61d915*/
      break; /*0x61d91d*/
    case 60: /*0x61d6f2*/
      *(float *)(a1 + 184) = a2; /*0x61d91e*/
      break; /*0x61d926*/
    case 61: /*0x61d6f2*/
      *(float *)(a1 + 272) = a2; /*0x61d927*/
      break; /*0x61d92f*/
    case 62: /*0x61d6f2*/
      *(float *)(a1 + 300) = a2; /*0x61d930*/
      break; /*0x61d938*/
    case 63: /*0x61d6f2*/
      *(float *)(a1 + 284) = a2; /*0x61d939*/
      break; /*0x61d941*/
    case 64: /*0x61d6f2*/
      *(float *)(a1 + 288) = a2; /*0x61d942*/
      break; /*0x61d94a*/
    case 65: /*0x61d6f2*/
      *(float *)(a1 + 292) = a2; /*0x61d94b*/
      break; /*0x61d953*/
    case 66: /*0x61d6f2*/
      *(float *)(a1 + 296) = a2; /*0x61d954*/
      break; /*0x61d95c*/
    case 67: /*0x61d6f2*/
      *(float *)(a1 + 280) = a2; /*0x61d95d*/
      break; /*0x61d965*/
    case 68: /*0x61d6f2*/
      *(float *)(a1 + 312) = a2; /*0x61d966*/
      break; /*0x61d96e*/
    case 69: /*0x61d6f2*/
      *(float *)(a1 + 268) = a2; /*0x61d96f*/
      break; /*0x61d96f*/
    default:
      result = v6; /*0xf1c0000000000004*/
      break; /*0xf1c0000000000004*/
  }
  return result; /*0x61d6fc*/
}
