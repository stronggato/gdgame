#include <Geode/binding/GJGameLevel.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/11] Address: 0x7ebd0
// Method: GJGameLevel::getListSnapshot
// Hidden C++ exception states: #wind=2
bool __fastcall GJGameLevel_getListSnapshot(__int64 a1, float a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rax
  __int64 i; // rcx
  float v6; // xmm6_4
  cocos2d::CCString *v7; // rax
  const char *CString; // rbx
  cocos2d::CCSpriteFrameCache *v9; // rax
  struct cocos2d::CCSpriteFrame *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  float v14; // xmm0_4
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  _DWORD *v18; // rax
  __int128 v20; // [rsp+20h] [rbp-68h] BYREF
  __int128 v21; // [rsp+30h] [rbp-58h]

  if ( dword_907458 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + 4LL) ) /*0x7ec1a*/
  {
    sub_672D2C(&dword_907458); /*0x7ec23*/
    if ( dword_907458 == -1 ) /*0x7ec2f*/
    {
      qword_907460 = 0; /*0x7ec31*/
      qword_907468 = 0; /*0x7ec38*/
      v3 = operator new(0x28u); /*0x7ec44*/
      *v3 = v3; /*0x7ec49*/
      v3[1] = v3; /*0x7ec4c*/
      v3[2] = v3; /*0x7ec50*/
      *((_WORD *)v3 + 12) = 257; /*0x7ec54*/
      qword_907460 = (__int64)v3; /*0x7ec5a*/
      atexit(sub_6C7F80); /*0x7ec68*/
      Init_thread_footer(&dword_907458); /*0x7ec75*/
    }
  }
  v4 = *(_QWORD *)(qword_907460 + 8); /*0x7ec81*/
  for ( i = qword_907460; !*(_BYTE *)(v4 + 25); v4 = *(_QWORD *)v4 ) /*0x7ec88*/
  {
    if ( *(_DWORD *)(v4 + 28) >= *(_DWORD *)(a1 + 8) ) /*0x7ec94*/
      i = v4; /*0x7ec9c*/
    else
      v4 += 16; /*0x7ec96*/
  }
  if ( *(_BYTE *)(i + 25) || *(_DWORD *)(a1 + 8) < *(_DWORD *)(i + 28) ) /*0x7ecb4*/
    i = qword_907460; /*0x7ecb6*/
  if ( i == qword_907460 ) /*0x7ecbf*/
  {
    v6 = 1.0; /*0x7ecc5*/
    v7 = cocos2d::CCString::createWithFormat("particle_%02d_001.png", *(_DWORD *)(a1 + 8)); /*0x7ecd7*/
    CString = cocos2d::CCString::getCString(v7); /*0x7ece6*/
    v9 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x7ece9*/
    v10 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v9, CString); /*0x7ecf5*/
    if ( v10 ) /*0x7ecfe*/
    {
      v14 = *((float *)v10 + 26); /*0x7ed00*/
      if ( v14 > 0.0 ) /*0x7ed08*/
        v6 = *((float *)v10 + 25) / v14; /*0x7ed0f*/
    }
    v15 = qword_907460; /*0x7ed13*/
    v16 = *(_QWORD *)(qword_907460 + 8); /*0x7ed1a*/
    *(_QWORD *)&v21 = v16; /*0x7ed1e*/
    DWORD2(v21) = 0; /*0x7ed23*/
    v17 = qword_907460; /*0x7ed27*/
    if ( !*(_BYTE *)(v16 + 25) ) /*0x7ed2a*/
    {
      v11 = *(unsigned int *)(a1 + 8); /*0x7ed30*/
      do /*0x7ed59*/
      {
        *(_QWORD *)&v21 = v16; /*0x7ed33*/
        if ( *(_DWORD *)(v16 + 28) >= (int)v11 ) /*0x7ed3b*/
        {
          DWORD2(v21) = 1; /*0x7ed47*/
          v17 = v16; /*0x7ed4f*/
        }
        else
        {
          DWORD2(v21) = 0; /*0x7ed3d*/
          v16 += 16; /*0x7ed41*/
        }
        v16 = *(_QWORD *)v16; /*0x7ed52*/
      }
      while ( !*(_BYTE *)(v16 + 25) ); /*0x7ed59*/
    }
    if ( *(_BYTE *)(v17 + 25) || *(_DWORD *)(a1 + 8) < *(_DWORD *)(v17 + 28) ) /*0x7ed67*/
    {
      if ( qword_907468 == 0x666666666666666LL ) /*0x7ed7a*/
        sub_5AC20(v17, v11, v12, v13); /*0x7ee21*/
      *(_QWORD *)&v20 = &qword_907460; /*0x7ed87*/
      *((_QWORD *)&v20 + 1) = 0; /*0x7ed8c*/
      v18 = operator new(0x28u); /*0x7ed96*/
      v18[7] = *(_DWORD *)(a1 + 8); /*0x7ed9f*/
      v18[8] = 0; /*0x7eda2*/
      *(_QWORD *)v18 = v15; /*0x7eda5*/
      *((_QWORD *)v18 + 1) = v15; /*0x7eda8*/
      *((_QWORD *)v18 + 2) = v15; /*0x7edac*/
      *((_WORD *)v18 + 12) = 0; /*0x7edb0*/
      v20 = v21; /*0x7edbb*/
      v17 = sub_69600(&qword_907460, &v20, v18); /*0x7edd0*/
    }
    *(float *)(v17 + 32) = v6; /*0x7edd3*/
  }
  else
  {
    v6 = *(float *)(i + 32); /*0x7edda*/
  }
  if ( a2 > 0.0 ) /*0x7ede3*/
    v6 = fminf(v6, a2); /*0x7ede5*/
  return (float)(v6 * *(float *)(a1 + 12)) > 1.1; /*0x7edf9*/
}

// [2/11] Address: 0xaa9b0
// Method: GJGameLevel::savePercentage
// Hidden C++ exception states: #wind=2
__int64 __fastcall GJGameLevel_savePercentage(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  size_t v6; // r14
  _QWORD *v7; // rdi
  size_t v8; // rbp
  unsigned __int64 v9; // rbx
  void **v10; // r15
  void **v11; // rdx
  __int64 v12; // rax
  __int128 v13; // xmm6
  __int128 v14; // xmm7
  void *v15; // rcx
  void *v16; // rcx
  void *Block[2]; // [rsp+40h] [rbp-98h] BYREF
  size_t Size[2]; // [rsp+50h] [rbp-88h]
  void *Src[2]; // [rsp+60h] [rbp-78h] BYREF
  __int128 v21; // [rsp+70h] [rbp-68h]

  sub_3E4F0(Block, a2 + 144); /*0xaa9fe*/
  v6 = *(_QWORD *)(a2 + 128); /*0xaaa04*/
  if ( v6 ) /*0xaaa0e*/
  {
    v7 = (_QWORD *)(a2 + 112); /*0xaaa14*/
    if ( 0x7FFFFFFFFFFFFFFFLL - v6 < 2 ) /*0xaaa2c*/
      sub_8D90(0x7FFFFFFFFFFFFFFFLL, v4, v5); /*0xaabe7*/
    if ( v7[3] > 0xFu ) /*0xaaa37*/
      v7 = (_QWORD *)*v7; /*0xaaa39*/
    *(_OWORD *)Src = 0; /*0xaaa3f*/
    v21 = 0; /*0xaaa47*/
    v8 = v6 + 2; /*0xaaa4d*/
    v9 = 15; /*0xaaa51*/
    v10 = Src; /*0xaaa56*/
    if ( v6 + 2 > 0xF ) /*0xaaa5e*/
    {
      v9 = v8 | 0xF; /*0xaaa63*/
      if ( (v8 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0xaaa6a*/
      {
        if ( v9 < 0x16 ) /*0xaaa79*/
          v9 = 22; /*0xaaa79*/
      }
      else
      {
        v9 = 0x7FFFFFFFFFFFFFFFLL; /*0xaaa6c*/
      }
      v10 = (void **)sub_3C460(v9 + 1); /*0xaaa86*/
      Src[0] = v10; /*0xaaa89*/
    }
    *(_QWORD *)&v21 = v6 + 2; /*0xaaa8e*/
    *((_QWORD *)&v21 + 1) = v9; /*0xaaa93*/
    memcpy(v10, v7, v6); /*0xaaaa1*/
    *(_WORD *)((char *)v10 + v6) = 8250; /*0xaaaa6*/
    *((_BYTE *)v10 + v8) = 0; /*0xaaaad*/
    v11 = Block; /*0xaaab2*/
    if ( Size[1] > 0xF ) /*0xaaabd*/
      v11 = (void **)Block[0]; /*0xaaabd*/
    v12 = sub_43D80(Src, v11, Size[0]); /*0xaaacd*/
    v13 = *(_OWORD *)v12; /*0xaaad2*/
    v14 = *(_OWORD *)(v12 + 16); /*0xaaad5*/
    *(_QWORD *)(v12 + 16) = 0; /*0xaaad9*/
    *(_QWORD *)(v12 + 24) = 15; /*0xaaadd*/
    *(_BYTE *)v12 = 0; /*0xaaae5*/
    if ( Size[1] > 0xF ) /*0xaaaf1*/
    {
      v15 = Block[0]; /*0xaaaf6*/
      if ( Size[1] + 1 >= 0x1000 ) /*0xaab05*/
      {
        v15 = (void *)*((_QWORD *)Block[0] - 1); /*0xaab0b*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v15 - 8) > 0x1F ) /*0xaab1a*/
          invoke_watson(0, 0, 0, 0, 0); /*0xaab2b*/
      }
      j_j_free(v15); /*0xaab32*/
    }
    *(_OWORD *)Block = v13; /*0xaab37*/
    *(_OWORD *)Size = v14; /*0xaab3c*/
    if ( *((_QWORD *)&v21 + 1) > 0xFu ) /*0xaab4a*/
    {
      v16 = Src[0]; /*0xaab4f*/
      if ( (unsigned __int64)(*((_QWORD *)&v21 + 1) + 1LL) >= 0x1000 ) /*0xaab5e*/
      {
        v16 = (void *)*((_QWORD *)Src[0] - 1); /*0xaab64*/
        if ( (unsigned __int64)((char *)Src[0] - (char *)v16 - 8) > 0x1F ) /*0xaab73*/
          invoke_watson(0, 0, 0, 0, 0); /*0xaab84*/
      }
      j_j_free(v16); /*0xaab8b*/
    }
  }
  sub_6F1E0(a1, Block, 80); /*0xaab9e*/
  sub_3C310(Block); /*0xaaba9*/
  return a1; /*0xaabb1*/
}

// [3/11] Address: 0x214760
// Method: GJGameLevel::GJGameLevel
// Hidden C++ exception states: #wind=11
__int64 __fastcall GJGameLevel_GJGameLevel(__int64 a1)
{
  cocos2d::CCNode::CCNode((cocos2d::CCNode *)a1); /*0x214772*/
  *(_QWORD *)a1 = &GJGameLevel::`vftable'; /*0x214780*/
  *(_QWORD *)(a1 + 320) = 0; /*0x214785*/
  *(_QWORD *)(a1 + 328) = 0; /*0x21478c*/
  *(_DWORD *)(a1 + 336) = 0; /*0x214793*/
  *(_OWORD *)(a1 + 344) = 0; /*0x21479c*/
  *(_QWORD *)(a1 + 360) = 0; /*0x2147a3*/
  *(_QWORD *)(a1 + 368) = 15; /*0x2147aa*/
  *(_BYTE *)(a1 + 344) = 0; /*0x2147b5*/
  *(_OWORD *)(a1 + 376) = 0; /*0x2147bc*/
  *(_QWORD *)(a1 + 392) = 0; /*0x2147c3*/
  *(_QWORD *)(a1 + 400) = 15; /*0x2147ca*/
  *(_BYTE *)(a1 + 376) = 0; /*0x2147d5*/
  *(_OWORD *)(a1 + 408) = 0; /*0x2147dc*/
  *(_QWORD *)(a1 + 424) = 0; /*0x2147e3*/
  *(_QWORD *)(a1 + 432) = 15; /*0x2147ea*/
  *(_BYTE *)(a1 + 408) = 0; /*0x2147f5*/
  *(_OWORD *)(a1 + 440) = 0; /*0x2147fc*/
  *(_QWORD *)(a1 + 456) = 0; /*0x214803*/
  *(_QWORD *)(a1 + 464) = 15; /*0x21480a*/
  *(_BYTE *)(a1 + 440) = 0; /*0x214815*/
  *(_OWORD *)(a1 + 472) = 0; /*0x21481c*/
  *(_QWORD *)(a1 + 488) = 0; /*0x214823*/
  *(_QWORD *)(a1 + 496) = 15; /*0x21482a*/
  *(_BYTE *)(a1 + 472) = 0; /*0x214835*/
  *(_OWORD *)(a1 + 504) = 0; /*0x21483c*/
  *(_QWORD *)(a1 + 520) = 0; /*0x214843*/
  *(_QWORD *)(a1 + 528) = 15; /*0x21484a*/
  *(_BYTE *)(a1 + 504) = 0; /*0x214855*/
  *(_OWORD *)(a1 + 536) = 0; /*0x21485c*/
  *(_QWORD *)(a1 + 552) = 0; /*0x214863*/
  *(_QWORD *)(a1 + 560) = 15; /*0x21486a*/
  *(_BYTE *)(a1 + 536) = 0; /*0x214875*/
  *(_QWORD *)(a1 + 568) = 0; /*0x21487c*/
  *(_OWORD *)(a1 + 576) = 0; /*0x214883*/
  *(_QWORD *)(a1 + 592) = 0; /*0x21488a*/
  *(_QWORD *)(a1 + 600) = 15; /*0x214891*/
  *(_BYTE *)(a1 + 576) = 0; /*0x21489c*/
  *(_OWORD *)(a1 + 608) = 0; /*0x2148a3*/
  *(_QWORD *)(a1 + 624) = 0; /*0x2148aa*/
  *(_QWORD *)(a1 + 632) = 15; /*0x2148b1*/
  *(_BYTE *)(a1 + 608) = 0; /*0x2148bc*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(a1 + 640)); /*0x2148ca*/
  *(_QWORD *)(a1 + 648) = 0; /*0x2148d0*/
  *(_QWORD *)(a1 + 656) = 0; /*0x2148d7*/
  *(_QWORD *)(a1 + 664) = 0; /*0x2148de*/
  *(_QWORD *)(a1 + 672) = 0; /*0x2148e5*/
  *(_QWORD *)(a1 + 680) = 0; /*0x2148ec*/
  *(_DWORD *)(a1 + 688) = 0; /*0x2148f3*/
  *(_QWORD *)(a1 + 692) = 0; /*0x2148f9*/
  *(_QWORD *)(a1 + 700) = 0; /*0x214900*/
  *(_QWORD *)(a1 + 708) = 0; /*0x214907*/
  *(_DWORD *)(a1 + 716) = 0; /*0x21490e*/
  *(_WORD *)(a1 + 720) = 0; /*0x214914*/
  *(_BYTE *)(a1 + 722) = 0; /*0x21491b*/
  *(_QWORD *)(a1 + 724) = 0; /*0x214922*/
  *(_QWORD *)(a1 + 736) = 0; /*0x214929*/
  *(_QWORD *)(a1 + 744) = 0; /*0x214930*/
  *(_QWORD *)(a1 + 752) = 0; /*0x214937*/
  *(_QWORD *)(a1 + 760) = 0; /*0x21493e*/
  *(_QWORD *)(a1 + 768) = 0; /*0x214945*/
  *(_DWORD *)(a1 + 776) = 0; /*0x21494c*/
  *(_QWORD *)(a1 + 784) = 0; /*0x214952*/
  *(_QWORD *)(a1 + 792) = 0; /*0x214959*/
  *(_OWORD *)(a1 + 800) = 0; /*0x214963*/
  *(_OWORD *)(a1 + 816) = 0; /*0x21496a*/
  *(_DWORD *)(a1 + 832) = -1; /*0x214971*/
  *(_DWORD *)(a1 + 840) = 0; /*0x21497b*/
  *(_BYTE *)(a1 + 844) = 0; /*0x214981*/
  *(_QWORD *)(a1 + 848) = 0; /*0x214988*/
  *(_WORD *)(a1 + 856) = 0; /*0x21498f*/
  *(_BYTE *)(a1 + 858) = 0; /*0x214996*/
  *(_QWORD *)(a1 + 860) = 0; /*0x21499d*/
  *(_QWORD *)(a1 + 868) = 0; /*0x2149a4*/
  *(_QWORD *)(a1 + 876) = 0; /*0x2149ab*/
  *(_QWORD *)(a1 + 884) = 0; /*0x2149b2*/
  *(_QWORD *)(a1 + 892) = 0; /*0x2149b9*/
  *(_QWORD *)(a1 + 900) = 0; /*0x2149c0*/
  *(_QWORD *)(a1 + 908) = 0; /*0x2149c7*/
  *(_WORD *)(a1 + 920) = 0; /*0x2149ce*/
  *(_QWORD *)(a1 + 924) = 0; /*0x2149d5*/
  *(_QWORD *)(a1 + 932) = 0; /*0x2149dc*/
  *(_QWORD *)(a1 + 940) = 0; /*0x2149e3*/
  *(_QWORD *)(a1 + 948) = 0; /*0x2149ea*/
  *(_QWORD *)(a1 + 956) = 0; /*0x2149f1*/
  *(_QWORD *)(a1 + 964) = 0; /*0x2149f8*/
  *(_QWORD *)(a1 + 972) = 0; /*0x2149ff*/
  *(_DWORD *)(a1 + 980) = 0; /*0x214a06*/
  *(_BYTE *)(a1 + 984) = 0; /*0x214a0c*/
  *(_QWORD *)(a1 + 988) = 0; /*0x214a13*/
  *(_QWORD *)(a1 + 996) = 0; /*0x214a1a*/
  *(_QWORD *)(a1 + 1004) = 0; /*0x214a21*/
  *(_DWORD *)(a1 + 1012) = 0; /*0x214a28*/
  *(_QWORD *)(a1 + 1016) = 4; /*0x214a2e*/
  *(_QWORD *)(a1 + 1024) = 0; /*0x214a39*/
  *(_BYTE *)(a1 + 1032) = 0; /*0x214a40*/
  *(_QWORD *)(a1 + 1036) = 0; /*0x214a47*/
  *(_QWORD *)(a1 + 1044) = 0; /*0x214a4e*/
  *(_QWORD *)(a1 + 1052) = 0; /*0x214a55*/
  *(_QWORD *)(a1 + 1060) = 0; /*0x214a5c*/
  *(_DWORD *)(a1 + 1068) = 0; /*0x214a63*/
  *(_BYTE *)(a1 + 1072) = 0; /*0x214a69*/
  *(_QWORD *)(a1 + 1076) = 0; /*0x214a70*/
  *(_QWORD *)(a1 + 1084) = 0; /*0x214a77*/
  *(_QWORD *)(a1 + 1092) = 0; /*0x214a7e*/
  *(_QWORD *)(a1 + 1100) = 0; /*0x214a85*/
  *(_QWORD *)(a1 + 1108) = 0; /*0x214a8c*/
  *(_DWORD *)(a1 + 1116) = 0; /*0x214a93*/
  *(_BYTE *)(a1 + 1120) = 0; /*0x214a99*/
  *(_QWORD *)(a1 + 1124) = 0; /*0x214aa0*/
  *(_QWORD *)(a1 + 1132) = 0; /*0x214aa7*/
  *(_QWORD *)(a1 + 1140) = 0; /*0x214aae*/
  *(_BYTE *)(a1 + 1148) = 0; /*0x214ab5*/
  *(_OWORD *)(a1 + 1152) = 0; /*0x214abc*/
  *(_QWORD *)(a1 + 1168) = 0; /*0x214ac3*/
  *(_QWORD *)(a1 + 1176) = 15; /*0x214aca*/
  *(_BYTE *)(a1 + 1152) = 0; /*0x214ad5*/
  *(_WORD *)(a1 + 1184) = 0; /*0x214adc*/
  *(_DWORD *)(a1 + 1188) = 0; /*0x214ae3*/
  *(_BYTE *)(a1 + 1192) = 0; /*0x214ae9*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)(a1 + 1196)); /*0x214af7*/
  *(_QWORD *)(a1 + 1204) = 0; /*0x214afd*/
  *(_QWORD *)(a1 + 1212) = 0; /*0x214b04*/
  *(_QWORD *)(a1 + 1220) = 0; /*0x214b0b*/
  *(_OWORD *)(a1 + 1232) = 0; /*0x214b15*/
  *(_QWORD *)(a1 + 1248) = 0; /*0x214b1c*/
  *(_QWORD *)(a1 + 1256) = 15; /*0x214b23*/
  *(_BYTE *)(a1 + 1232) = 0; /*0x214b2e*/
  *(_OWORD *)(a1 + 1264) = 0; /*0x214b35*/
  *(_QWORD *)(a1 + 1280) = 0; /*0x214b3c*/
  *(_QWORD *)(a1 + 1288) = 15; /*0x214b43*/
  *(_BYTE *)(a1 + 1264) = 0; /*0x214b4e*/
  *(_WORD *)(a1 + 1296) = 0; /*0x214b55*/
  *(_OWORD *)(a1 + 1304) = 0; /*0x214b5c*/
  *(_QWORD *)(a1 + 1320) = 0; /*0x214b63*/
  *(_QWORD *)(a1 + 1328) = 15; /*0x214b6a*/
  *(_BYTE *)(a1 + 1304) = 0; /*0x214b75*/
  *(_QWORD *)(a1 + 1336) = 0; /*0x214b7c*/
  *(_OWORD *)(a1 + 1344) = 0; /*0x214b83*/
  *(_QWORD *)(a1 + 1360) = 0; /*0x214b8a*/
  *(_QWORD *)(a1 + 1368) = 15; /*0x214b91*/
  *(_BYTE *)(a1 + 1344) = 0; /*0x214b9c*/
  *(_OWORD *)(a1 + 1376) = 0; /*0x214ba3*/
  *(_QWORD *)(a1 + 1392) = 0; /*0x214baa*/
  *(_QWORD *)(a1 + 1400) = 15; /*0x214bb1*/
  *(_BYTE *)(a1 + 1376) = 0; /*0x214bbc*/
  *(_QWORD *)(a1 + 1408) = 0; /*0x214bc3*/
  *(_QWORD *)(a1 + 1416) = 0; /*0x214bca*/
  *(_QWORD *)(a1 + 1424) = 0; /*0x214bd1*/
  *(_OWORD *)(a1 + 1432) = 0; /*0x214bd8*/
  *(_QWORD *)(a1 + 1448) = 0; /*0x214bdf*/
  *(_QWORD *)(a1 + 1456) = 15; /*0x214be6*/
  *(_BYTE *)(a1 + 1432) = 0; /*0x214bf1*/
  *(_QWORD *)(a1 + 1464) = 0; /*0x214bf8*/
  *(_QWORD *)(a1 + 1472) = 0; /*0x214bff*/
  *(_OWORD *)(a1 + 1480) = 0; /*0x214c06*/
  *(_QWORD *)(a1 + 1496) = 0; /*0x214c0d*/
  *(_QWORD *)(a1 + 1504) = 15; /*0x214c14*/
  *(_BYTE *)(a1 + 1480) = 0; /*0x214c1f*/
  *(_OWORD *)(a1 + 1520) = 0; /*0x214c26*/
  *(_QWORD *)(a1 + 1536) = 0; /*0x214c2d*/
  *(_QWORD *)(a1 + 1544) = 15; /*0x214c34*/
  *(_BYTE *)(a1 + 1520) = 0; /*0x214c3f*/
  *(_OWORD *)(a1 + 1552) = 0; /*0x214c46*/
  *(_QWORD *)(a1 + 1568) = 0; /*0x214c4d*/
  *(_QWORD *)(a1 + 1576) = 15; /*0x214c54*/
  *(_BYTE *)(a1 + 1552) = 0; /*0x214c5f*/
  *(_WORD *)(a1 + 1584) = 0; /*0x214c66*/
  *(_DWORD *)(a1 + 1588) = 0; /*0x214c6d*/
  *(_OWORD *)(a1 + 1592) = 0; /*0x214c73*/
  *(_QWORD *)(a1 + 1608) = 0; /*0x214c7a*/
  *(_QWORD *)(a1 + 1616) = 15; /*0x214c81*/
  *(_BYTE *)(a1 + 1592) = 0; /*0x214c8c*/
  *(_DWORD *)(a1 + 1624) = 0; /*0x214c93*/
  *(_OWORD *)(a1 + 1632) = 0; /*0x214c99*/
  *(_QWORD *)(a1 + 1648) = 0; /*0x214ca0*/
  *(_QWORD *)(a1 + 1656) = 15; /*0x214ca7*/
  *(_BYTE *)(a1 + 1632) = 0; /*0x214cb2*/
  *(_OWORD *)(a1 + 1664) = 0; /*0x214cb9*/
  *(_QWORD *)(a1 + 1680) = 0; /*0x214cc0*/
  *(_QWORD *)(a1 + 1688) = 15; /*0x214cc7*/
  *(_BYTE *)(a1 + 1664) = 0; /*0x214cd2*/
  *(_QWORD *)(a1 + 1696) = 0; /*0x214cd9*/
  *(_BYTE *)(a1 + 1704) = 0; /*0x214ce0*/
  *(_QWORD *)(a1 + 1708) = 0; /*0x214ce7*/
  *(_OWORD *)(a1 + 1720) = 0; /*0x214cee*/
  *(_QWORD *)(a1 + 1736) = 0; /*0x214cf5*/
  *(_QWORD *)(a1 + 1744) = 15; /*0x214cfc*/
  *(_BYTE *)(a1 + 1720) = 0; /*0x214d07*/
  *(_OWORD *)(a1 + 1752) = 0; /*0x214d0e*/
  *(_QWORD *)(a1 + 1768) = 0; /*0x214d15*/
  *(_QWORD *)(a1 + 1776) = 15; /*0x214d1c*/
  *(_BYTE *)(a1 + 1752) = 0; /*0x214d27*/
  *(_OWORD *)(a1 + 1784) = 0; /*0x214d2e*/
  *(_QWORD *)(a1 + 1800) = 0; /*0x214d35*/
  *(_QWORD *)(a1 + 1808) = 15; /*0x214d3c*/
  *(_BYTE *)(a1 + 1784) = 0; /*0x214d47*/
  *(_OWORD *)(a1 + 1816) = 0; /*0x214d4e*/
  *(_QWORD *)(a1 + 1832) = 0; /*0x214d55*/
  *(_QWORD *)(a1 + 1840) = 15; /*0x214d5c*/
  *(_BYTE *)(a1 + 1816) = 0; /*0x214d67*/
  *(_QWORD *)(a1 + 1848) = 0; /*0x214d6e*/
  *(_QWORD *)(a1 + 1856) = 0; /*0x214d75*/
  *(_DWORD *)(a1 + 1864) = 0; /*0x214d7c*/
  *(_OWORD *)(a1 + 1872) = 0; /*0x214d82*/
  *(_QWORD *)(a1 + 1888) = 0; /*0x214d89*/
  *(_QWORD *)(a1 + 1896) = 15; /*0x214d90*/
  *(_BYTE *)(a1 + 1872) = 0; /*0x214d9b*/
  *(_OWORD *)(a1 + 1904) = 0; /*0x214da2*/
  *(_QWORD *)(a1 + 1920) = 0; /*0x214da9*/
  *(_QWORD *)(a1 + 1928) = 15; /*0x214db0*/
  *(_BYTE *)(a1 + 1904) = 0; /*0x214dbb*/
  *(_BYTE *)(a1 + 1936) = 0; /*0x214dc2*/
  *(_OWORD *)(a1 + 1944) = 0; /*0x214dc9*/
  *(_QWORD *)(a1 + 1960) = 0; /*0x214dd0*/
  *(_QWORD *)(a1 + 1968) = 15; /*0x214dd7*/
  *(_BYTE *)(a1 + 1944) = 0; /*0x214de2*/
  *(_BYTE *)(a1 + 1976) = 0; /*0x214de9*/
  *(_QWORD *)(a1 + 1980) = 1000; /*0x214df0*/
  *(_DWORD *)(a1 + 1988) = 0; /*0x214dfb*/
  *(_OWORD *)(a1 + 1992) = 0; /*0x214e01*/
  *(_QWORD *)(a1 + 2008) = 0; /*0x214e08*/
  *(_QWORD *)(a1 + 2016) = 15; /*0x214e0f*/
  *(_BYTE *)(a1 + 1992) = 0; /*0x214e1a*/
  *(_OWORD *)(a1 + 2024) = 0; /*0x214e21*/
  *(_QWORD *)(a1 + 2040) = 0; /*0x214e28*/
  *(_QWORD *)(a1 + 2048) = 15; /*0x214e2f*/
  *(_BYTE *)(a1 + 2024) = 0; /*0x214e3a*/
  *(_DWORD *)(a1 + 2056) = 0; /*0x214e41*/
  *(_OWORD *)(a1 + 2064) = 0; /*0x214e47*/
  *(_QWORD *)(a1 + 2080) = 0; /*0x214e4e*/
  *(_QWORD *)(a1 + 2088) = 15; /*0x214e55*/
  *(_BYTE *)(a1 + 2064) = 0; /*0x214e60*/
  *(_DWORD *)(a1 + 2096) = 0; /*0x214e67*/
  *(_BYTE *)(a1 + 2100) = 0; /*0x214e6d*/
  *(_DWORD *)(a1 + 2104) = 0; /*0x214e74*/
  return a1; /*0x214e7d*/
}

// [4/11] Address: 0x2608a0
// Method: GJGameLevel::init
char __fastcall GJGameLevel_init(__int64 a1)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  float v13; // xmm0_4
  cocos2d::CCObject *v14; // rax
  cocos2d::CCObject *v15; // rdi
  cocos2d::CCObject *v16; // rcx

  sub_3F5A0((void *)(a1 + 344), &byte_6E86E0, 0); /*0x2608c8*/
  sub_3F5A0((void *)(a1 + 376), &byte_6E86E0, 0); /*0x2608de*/
  sub_3F5A0((void *)(a1 + 408), &byte_6E86E0, 0); /*0x2608f4*/
  sub_3F5A0((void *)(a1 + 1304), &byte_6E86E0, 0); /*0x26090a*/
  v2 = dword_905F9C; /*0x26090f*/
  *(_DWORD *)(a1 + 1224) = dword_905F9C; /*0x260917*/
  dword_905F9C = v2 + 1; /*0x26091f*/
  *(_DWORD *)(a1 + 860) = 1; /*0x260925*/
  *(_DWORD *)(a1 + 1220) = 0; /*0x26092f*/
  *(_DWORD *)(a1 + 876) = 0; /*0x260935*/
  v3 = rand(); /*0x26093b*/
  *(_DWORD *)(a1 + 888) = 0; /*0x260951*/
  v4 = (int)(float)((float)((float)v3 / 32767.0) * 1000.0); /*0x260966*/
  *(_DWORD *)(a1 + 872) = v4; /*0x26096a*/
  *(_DWORD *)(a1 + 868) = v4; /*0x260970*/
  v5 = rand(); /*0x260976*/
  *(_DWORD *)(a1 + 900) = 0; /*0x26097c*/
  v6 = (int)(float)((float)((float)v5 / 32767.0) * 1000.0); /*0x260991*/
  *(_DWORD *)(a1 + 884) = v6; /*0x260995*/
  *(_DWORD *)(a1 + 880) = v6; /*0x26099b*/
  v7 = rand(); /*0x2609a1*/
  *(_DWORD *)(a1 + 912) = 0; /*0x2609a7*/
  v8 = (int)(float)((float)((float)v7 / 32767.0) * 1000.0); /*0x2609bc*/
  *(_DWORD *)(a1 + 896) = v8; /*0x2609c0*/
  *(_DWORD *)(a1 + 892) = v8; /*0x2609c6*/
  v9 = rand(); /*0x2609cc*/
  *(_DWORD *)(a1 + 916) = 0; /*0x2609d2*/
  *(_DWORD *)(a1 + 1036) = 0; /*0x2609d8*/
  *(_DWORD *)(a1 + 1028) = 0; /*0x2609de*/
  v10 = (int)(float)((float)((float)v9 / 32767.0) * 1000.0); /*0x2609f3*/
  *(_DWORD *)(a1 + 908) = v10; /*0x2609f7*/
  *(_DWORD *)(a1 + 904) = v10; /*0x2609fd*/
  v11 = rand(); /*0x260a03*/
  *(_DWORD *)(a1 + 1012) = 0; /*0x260a09*/
  v12 = (int)(float)((float)((float)v11 / 32767.0) * 1000.0); /*0x260a1e*/
  *(_DWORD *)(a1 + 1024) = v12; /*0x260a22*/
  *(_DWORD *)(a1 + 1020) = v12; /*0x260a28*/
  v13 = (float)((float)rand() / 32767.0) * 1000.0; /*0x260a3f*/
  *(_WORD *)(a1 + 1184) = 0; /*0x260a47*/
  *(_DWORD *)(a1 + 1008) = (int)v13; /*0x260a4e*/
  *(_DWORD *)(a1 + 1004) = (int)v13; /*0x260a54*/
  v14 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x260a5a*/
  v15 = v14; /*0x260a60*/
  if ( *(cocos2d::CCObject **)(a1 + 320) != v14 ) /*0x260a6a*/
  {
    if ( v14 ) /*0x260a6f*/
      cocos2d::CCObject::retain(v14); /*0x260a74*/
    v16 = *(cocos2d::CCObject **)(a1 + 320); /*0x260a7a*/
    if ( v16 ) /*0x260a84*/
      cocos2d::CCObject::release(v16); /*0x260a86*/
    *(_QWORD *)(a1 + 320) = v15; /*0x260a8c*/
  }
  return 1; /*0x260a93*/
}

// [5/11] Address: 0x261260
// Method: GJGameLevel::getSongName
// Hidden C++ exception states: #wind=1
_OWORD *__fastcall GJGameLevel_getSongName(__int64 a1, _OWORD *a2)
{
  unsigned int v3; // eax
  __int64 v4; // rax
  __int128 v5; // xmm6
  __m128i v6; // xmm7
  __int128 v8; // [rsp+30h] [rbp-78h]
  __m128i v9; // [rsp+40h] [rbp-68h]
  __int128 v10; // [rsp+50h] [rbp-58h] BYREF
  __m128i si128; // [rsp+60h] [rbp-48h]

  v3 = *(_DWORD *)(a1 + 680); /*0x261290*/
  if ( v3 ) /*0x261298*/
  {
    v8 = 0; /*0x2612a1*/
    v9.m128i_i64[1] = 15; /*0x2612ab*/
    v4 = SongInfoObject_create_0(v3); /*0x2612bb*/
    if ( !v4 || *(_BYTE *)(v4 + 472) ) /*0x2612c5*/
    {
      v9.m128i_i64[0] = 7; /*0x261308*/
      *(_QWORD *)&v8 = 0x6E776F6E6B6E55LL; /*0x261318*/
      v6 = v9; /*0x261338*/
      v5 = v8; /*0x26133d*/
    }
    else
    {
      sub_3E4F0(&v10, v4 + 328); /*0x2612da*/
      v5 = v10; /*0x2612df*/
      v6 = si128; /*0x2612e4*/
      si128 = _mm_load_si128((const __m128i *)&Size); /*0x2612f1*/
      LOBYTE(v10) = 0; /*0x2612f7*/
      sub_3C310(&v10); /*0x261301*/
    }
    *a2 = v5; /*0x261342*/
    a2[1] = v6; /*0x261345*/
  }
  else
  {
    LevelTools_getAudioTitle(a2, *(unsigned int *)(a1 + 676)); /*0x261354*/
  }
  return a2; /*0x26135c*/
}

// [6/11] Address: 0x2614e0
// Method: GJGameLevel::saveNewScore
// Hidden C++ exception states: #wind=1
__int64 __fastcall GJGameLevel_saveNewScore(
        __int64 a1,
        int a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        size_t *a7,
        char a8)
{
  unsigned __int8 v11; // bp
  int v12; // eax
  void *v13; // rdx
  int v14; // eax
  void *v15; // rdx

  v11 = 0; /*0x26150f*/
  if ( a3 ) /*0x261515*/
  {
    if ( a2 ) /*0x2615cd*/
    {
      v14 = *(_DWORD *)(a1 + 1464); /*0x2615d3*/
      if ( a2 > v14 || !v14 || a8 ) /*0x2615e9*/
      {
        *(_DWORD *)(a1 + 1464) = a2; /*0x2615ef*/
        *(_DWORD *)(a1 + 1468) = a4; /*0x2615f5*/
        *(_DWORD *)(a1 + 1472) = a5; /*0x261603*/
        *(_DWORD *)(a1 + 1476) = a6; /*0x261610*/
        *(_DWORD *)(a1 + 1512) = sub_261390( /*0x261646*/
                                   *(_DWORD *)(a1 + 1416),
                                   a2,
                                   *(_DWORD *)(a1 + 1424),
                                   *(_DWORD *)(a1 + 1420),
                                   *(_DWORD *)(a1 + 1428),
                                   a5,
                                   a4,
                                   a6);
        if ( (size_t *)(a1 + 1480) != a7 ) /*0x261656*/
        {
          v15 = a7; /*0x261658*/
          if ( a7[3] > 0xF ) /*0x261660*/
            v15 = (void *)*a7; /*0x261662*/
          sub_3F5A0((void *)(a1 + 1480), v15, a7[2]); /*0x261669*/
        }
        *(_BYTE *)(a1 + 1585) = 1; /*0x26166e*/
        goto LABEL_20; /*0x26166e*/
      }
    }
  }
  else if ( a2 > 0 ) /*0x26151d*/
  {
    v12 = *(_DWORD *)(a1 + 1416); /*0x261523*/
    if ( a2 < v12 || !v12 || a8 ) /*0x261539*/
    {
      *(_DWORD *)(a1 + 1416) = a2; /*0x26153f*/
      *(_DWORD *)(a1 + 1420) = a4; /*0x261545*/
      *(_DWORD *)(a1 + 1424) = a5; /*0x261554*/
      *(_DWORD *)(a1 + 1428) = a6; /*0x261562*/
      *(_DWORD *)(a1 + 1512) = sub_261390( /*0x261597*/
                                 a2,
                                 *(_DWORD *)(a1 + 1464),
                                 a5,
                                 a4,
                                 a6,
                                 *(_DWORD *)(a1 + 1472),
                                 *(_DWORD *)(a1 + 1468),
                                 *(_DWORD *)(a1 + 1476));
      if ( (size_t *)(a1 + 1432) != a7 ) /*0x2615a7*/
      {
        v13 = a7; /*0x2615a9*/
        if ( a7[3] > 0xF ) /*0x2615b1*/
          v13 = (void *)*a7; /*0x2615b3*/
        sub_3F5A0((void *)(a1 + 1432), v13, a7[2]); /*0x2615ba*/
      }
      *(_BYTE *)(a1 + 1584) = 1; /*0x2615bf*/
LABEL_20:
      v11 = 1; /*0x261675*/
    }
  }
  sub_2616B0(a1, (unsigned int)a2, a3); /*0x261678*/
  sub_3C310(a7); /*0x261689*/
  return v11; /*0x261692*/
}

// [7/11] Address: 0x265a90
// Method: GJGameLevel::encodeWithCoder
// Hidden C++ exception states: #wind=15
void __fastcall GJGameLevel_encodeWithCoder(__int64 a1, DS_Dictionary *a2)
{
  int v4; // r8d
  char v5; // r8
  char v6; // r8
  int v7; // r8d
  int v8; // r8d
  __int64 v9; // rcx
  bool v10; // al
  char v11; // r8
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  int v17; // r8d
  void **v18; // rax
  char v19; // bl
  void *v20; // rcx
  char v21; // r8
  int v22; // eax
  __int64 v23; // rdi
  __int64 v24; // rbx
  void *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  void *v30; // rcx
  void *v31; // rcx
  int v32; // r8d
  char v33; // r8
  int v34; // r8d
  void *v35; // rcx
  __int64 *v36; // rdx
  size_t v37; // r8
  char v38; // bl
  _DWORD *v39; // r8
  int v40; // edx
  char v41; // di
  __int64 v42; // rax
  void *v43; // rcx
  int v44; // eax
  int v45; // r8d
  float v46; // xmm2_4
  int v47; // r8d
  int v48; // r8d
  __int64 v49; // rax
  __int64 v50; // rax
  int v51; // r8d
  void *v52; // [rsp+38h] [rbp-C8h]
  void *v53; // [rsp+38h] [rbp-C8h]
  void *v54; // [rsp+38h] [rbp-C8h]
  void *Block[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v56; // [rsp+50h] [rbp-B0h]
  void *v57[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v58; // [rsp+70h] [rbp-90h]
  _BYTE Src[32]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v60[32]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v61[32]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v62[32]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v63[32]; // [rsp+100h] [rbp+0h] BYREF

  DS_Dictionary::setIntegerForKey(a2, "kCEK", 4); /*0x265ad4*/
  DS_Dictionary::setIntegerForKey(a2, "k1", *(_DWORD *)(a1 + 328) - *(_DWORD *)(a1 + 332)); /*0x265af2*/
  DS_Dictionary::setBoolForKey(a2, "k35", *(_BYTE *)(a1 + 1185)); /*0x265b0a*/
  DS_Dictionary::setIntegerForKey(a2, "k18", *(_DWORD *)(a1 + 868) - *(_DWORD *)(a1 + 872)); /*0x265b28*/
  v4 = *(_DWORD *)(a1 + 1708); /*0x265b2e*/
  if ( v4 > 0 ) /*0x265b38*/
    DS_Dictionary::setIntegerForKey(a2, "k154", v4); /*0x265b44*/
  DS_Dictionary::setIntegerForKey(a2, "k36", *(_DWORD *)(a1 + 880) - *(_DWORD *)(a1 + 884)); /*0x265b62*/
  DS_Dictionary::setIntegerForKey(a2, "k85", *(_DWORD *)(a1 + 892) - *(_DWORD *)(a1 + 896)); /*0x265b80*/
  DS_Dictionary::setIntegerForKey(a2, "k86", *(_DWORD *)(a1 + 904) - *(_DWORD *)(a1 + 908)); /*0x265b9e*/
  DS_Dictionary::setIntegerForKey(a2, "k87", *(_DWORD *)(a1 + 916)); /*0x265bb5*/
  sub_3E4F0(v57, a1 + 1304); /*0x265bc7*/
  DS_Dictionary::setStringForKey(a2, "k88", v57); /*0x265be3*/
  sub_3C310(v57); /*0x265bef*/
  DS_Dictionary::setBoolForKey(a2, "k89", *(_BYTE *)(a1 + 920)); /*0x265c06*/
  DS_Dictionary::setIntegerForKey(a2, "k23", *(_DWORD *)(a1 + 972)); /*0x265c1d*/
  DS_Dictionary::setIntegerForKey(a2, "k19", *(_DWORD *)(a1 + 932) - *(_DWORD *)(a1 + 928)); /*0x265c3b*/
  DS_Dictionary::setIntegerForKey(a2, "k71", *(_DWORD *)(a1 + 936) - *(_DWORD *)(a1 + 940)); /*0x265c59*/
  DS_Dictionary::setIntegerForKey(a2, "k90", *(_DWORD *)(a1 + 948) - *(_DWORD *)(a1 + 952)); /*0x265c77*/
  DS_Dictionary::setIntegerForKey(a2, "k20", *(_DWORD *)(a1 + 960)); /*0x265c8e*/
  if ( *(_DWORD *)(a1 + 1004) - *(_DWORD *)(a1 + 1008) == 1 ) /*0x265ca3*/
  {
    DS_Dictionary::setBoolForKey(a2, "k25", 1); /*0x265cb3*/
    DS_Dictionary::setIntegerForKey(a2, "k76", *(_DWORD *)(a1 + 1016)); /*0x265cca*/
  }
  if ( *(_DWORD *)(a1 + 1020) - *(_DWORD *)(a1 + 1024) > 0 ) /*0x265ce1*/
    DS_Dictionary::setIntegerForKey(a2, "k26", *(_DWORD *)(a1 + 1020) - *(_DWORD *)(a1 + 1024)); /*0x265ced*/
  v5 = *(_BYTE *)(a1 + 921); /*0x265cf3*/
  if ( v5 ) /*0x265cfe*/
    DS_Dictionary::setBoolForKey(a2, "k68", v5); /*0x265d0a*/
  DS_Dictionary::setIntegerForKey(a2, "k74", *(_DWORD *)(a1 + 992) - *(_DWORD *)(a1 + 996)); /*0x265d28*/
  DS_Dictionary::setBoolForKey(a2, "k77", *(_BYTE *)(a1 + 721)); /*0x265d40*/
  DS_Dictionary::setBoolForKey(a2, "k78", *(_BYTE *)(a1 + 722)); /*0x265d58*/
  v6 = *(_BYTE *)(a1 + 984); /*0x265d5e*/
  if ( v6 ) /*0x265d69*/
    DS_Dictionary::setBoolForKey(a2, "k82", v6); /*0x265d75*/
  v7 = *(_DWORD *)(a1 + 988); /*0x265d7b*/
  if ( v7 > 0 ) /*0x265d85*/
    DS_Dictionary::setIntegerForKey(a2, "k84", v7); /*0x265d91*/
  v8 = *(_DWORD *)(a1 + 1416); /*0x265d97*/
  if ( v8 > 0 || *(_DWORD *)(a1 + 1464) ) /*0x265da3*/
  {
    DS_Dictionary::setIntegerForKey(a2, "k107", v8); /*0x265dba*/
    DS_Dictionary::setIntegerForKey(a2, "k115", *(_DWORD *)(a1 + 1420)); /*0x265dd1*/
    DS_Dictionary::setIntegerForKey(a2, "k117", *(_DWORD *)(a1 + 1424)); /*0x265de8*/
    DS_Dictionary::setIntegerForKey(a2, "k121", *(_DWORD *)(a1 + 1428)); /*0x265dff*/
    if ( *(_BYTE *)(a1 + 1584) ) /*0x265e05*/
      DS_Dictionary::setStringForKey(a2, "k119", a1 + 1432); /*0x265e1f*/
    DS_Dictionary::setIntegerForKey(a2, "k108", *(_DWORD *)(a1 + 1464)); /*0x265e36*/
    DS_Dictionary::setIntegerForKey(a2, "k116", *(_DWORD *)(a1 + 1468)); /*0x265e4d*/
    DS_Dictionary::setIntegerForKey(a2, "k118", *(_DWORD *)(a1 + 1472)); /*0x265e64*/
    DS_Dictionary::setIntegerForKey(a2, "k122", *(_DWORD *)(a1 + 1476)); /*0x265e7b*/
    if ( *(_BYTE *)(a1 + 1585) ) /*0x265e81*/
      DS_Dictionary::setStringForKey(a2, "k120", a1 + 1480); /*0x265e9b*/
    DS_Dictionary::setIntegerForKey(a2, "k111", *(_DWORD *)(a1 + 1512)); /*0x265eb2*/
    DS_Dictionary::setBoolForKey(a2, "k123", *(_BYTE *)(a1 + 1584)); /*0x265eca*/
    DS_Dictionary::setBoolForKey(a2, "k124", *(_BYTE *)(a1 + 1585)); /*0x265ee2*/
  }
  v9 = qword_905FD0; /*0x265ee8*/
  if ( !qword_905FD0 ) /*0x265ef2*/
  {
    v52 = operator new(0x6E8u); /*0x265efe*/
    qword_905FD0 = sub_2723A0(v52); /*0x265f0c*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x265f1d*/
    v9 = qword_905FD0; /*0x265f1f*/
  }
  v10 = !*(_BYTE *)(v9 + 448) || *(_BYTE *)(a1 + 984) && !GameManager_getGameVariable(v9, "0237"); /*0x265f48*/
  if ( *(_QWORD *)(a1 + 1648) ) /*0x265f4e*/
  {
    if ( v10 ) /*0x265f5a*/
    {
      DS_Dictionary::setStringForKey(a2, "k128", a1 + 1632); /*0x265f6d*/
      DS_Dictionary::setIntegerForKey(a2, "k130", *(_DWORD *)(a1 + 1696)); /*0x265f84*/
      DS_Dictionary::setIntegerForKey(a2, "k132", *(_DWORD *)(a1 + 1700)); /*0x265f9b*/
      if ( *(_QWORD *)(a1 + 1680) ) /*0x265fa1*/
        DS_Dictionary::setStringForKey(a2, "k131", a1 + 1664); /*0x265fbc*/
    }
  }
  v11 = *(_BYTE *)(a1 + 1704); /*0x265fc2*/
  if ( v11 ) /*0x265fcd*/
    DS_Dictionary::setBoolForKey(a2, "k129", v11); /*0x265fd9*/
  if ( *(_QWORD *)(a1 + 1536) ) /*0x265fdf*/
    DS_Dictionary::setStringForKey(a2, "k109", a1 + 1520); /*0x265ffa*/
  if ( *(_QWORD *)(a1 + 1568) ) /*0x266000*/
    DS_Dictionary::setStringForKey(a2, "k110", a1 + 1552); /*0x26601b*/
  v12 = *(_DWORD *)(a1 + 1712); /*0x266021*/
  if ( v12 > 0 ) /*0x26602b*/
  {
    DS_Dictionary::setIntegerForKey(a2, "k133", v12); /*0x26603b*/
    if ( *(_QWORD *)(a1 + 1736) ) /*0x266041*/
      DS_Dictionary::setStringForKey(a2, "k134", a1 + 1720); /*0x26605c*/
    if ( *(_QWORD *)(a1 + 1768) ) /*0x266062*/
      DS_Dictionary::setStringForKey(a2, "k135", a1 + 1752); /*0x26607d*/
    if ( *(_QWORD *)(a1 + 1800) ) /*0x266083*/
      DS_Dictionary::setStringForKey(a2, "k136", a1 + 1784); /*0x26609e*/
    if ( *(_QWORD *)(a1 + 1832) ) /*0x2660a4*/
      DS_Dictionary::setStringForKey(a2, "k137", a1 + 1816); /*0x2660bf*/
    v13 = *(_DWORD *)(a1 + 1848); /*0x2660c5*/
    if ( v13 > 0 ) /*0x2660cf*/
      DS_Dictionary::setIntegerForKey(a2, "k138", v13); /*0x2660db*/
    v14 = *(_DWORD *)(a1 + 1852); /*0x2660e1*/
    if ( v14 > 0 ) /*0x2660eb*/
      DS_Dictionary::setIntegerForKey(a2, "k139", v14); /*0x2660f7*/
    v15 = *(_DWORD *)(a1 + 1856); /*0x2660fd*/
    if ( v15 > 0 ) /*0x266107*/
      DS_Dictionary::setIntegerForKey(a2, "k142", v15); /*0x266113*/
    v16 = *(_DWORD *)(a1 + 1860); /*0x266119*/
    if ( v16 > 0 ) /*0x266123*/
      DS_Dictionary::setIntegerForKey(a2, "k143", v16); /*0x26612f*/
    v17 = *(_DWORD *)(a1 + 1864); /*0x266135*/
    if ( v17 > 0 ) /*0x26613f*/
      DS_Dictionary::setIntegerForKey(a2, "k145", v17); /*0x26614b*/
    if ( *(_BYTE *)(a1 + 1936) ) /*0x266151*/
    {
      if ( *(_QWORD *)(a1 + 1888) ) /*0x26615e*/
      {
        v18 = (void **)cocos2d::ZipUtils::compressString(Src, a1 + 1872, 0, 0xFFFFFFFFLL, 0); /*0x2661a8*/
        v19 = 6; /*0x2661ae*/
      }
      else
      {
        *(_OWORD *)Block = 0; /*0x26616b*/
        *(_QWORD *)&v56 = 0; /*0x266170*/
        *((_QWORD *)&v56 + 1) = 15; /*0x266175*/
        LOBYTE(Block[0]) = 0; /*0x26617e*/
        v18 = Block; /*0x266183*/
        v19 = 5; /*0x266188*/
      }
      sub_58AD0(a1 + 1904, v18); /*0x2661bd*/
      if ( (v19 & 2) != 0 ) /*0x2661c5*/
      {
        v19 &= ~2u; /*0x2661c7*/
        sub_3C310(Src); /*0x2661ce*/
      }
      if ( (v19 & 1) != 0 && *((_QWORD *)&v56 + 1) > 0xFu ) /*0x2661e2*/
      {
        v20 = Block[0]; /*0x2661e7*/
        if ( (unsigned __int64)(*((_QWORD *)&v56 + 1) + 1LL) >= 0x1000 ) /*0x2661f6*/
        {
          v20 = (void *)*((_QWORD *)Block[0] - 1); /*0x2661fc*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v20 - 8) > 0x1F ) /*0x26620b*/
            invoke_watson(0, 0, 0, 0, 0); /*0x26621c*/
        }
        j_j_free(v20); /*0x266223*/
      }
      *(_BYTE *)(a1 + 1936) = 0; /*0x266228*/
    }
    if ( *(_QWORD *)(a1 + 1920) ) /*0x26622f*/
      DS_Dictionary::setStringForKey(a2, "k146", a1 + 1904); /*0x26624a*/
    if ( *(_QWORD *)(a1 + 1960) ) /*0x266250*/
      DS_Dictionary::setStringForKey(a2, "k140", a1 + 1944); /*0x26626b*/
    v21 = *(_BYTE *)(a1 + 1976); /*0x266271*/
    if ( v21 ) /*0x26627c*/
      DS_Dictionary::setBoolForKey(a2, "k141", v21); /*0x266288*/
  }
  v22 = *(_DWORD *)(a1 + 1980); /*0x26628e*/
  if ( v22 != 1000 ) /*0x26629d*/
    DS_Dictionary::setIntegerForKey(a2, "k151", 1000 - v22); /*0x2662ac*/
  if ( *(_QWORD *)(a1 + 2008) ) /*0x2662b2*/
  {
    v23 = cocos2d::ZipUtils::compressString(v60, a1 + 1992, 0, 0xFFFFFFFFLL, 0); /*0x2662df*/
    v24 = GameToolbox_intToString((__int64)v63, *(_DWORD *)(a1 + 1988)); /*0x2662f1*/
    v25 = (void *)GameToolbox_intToString((__int64)v62, *(_DWORD *)(a1 + 1984)); /*0x2662fe*/
    v26 = sub_43D80(v25, &unk_709CE8, 1u); /*0x266314*/
    *(_OWORD *)v57 = *(_OWORD *)v26; /*0x26631c*/
    v58 = *(_OWORD *)(v26 + 16); /*0x266325*/
    *(_QWORD *)(v26 + 16) = 0; /*0x26632a*/
    *(_QWORD *)(v26 + 24) = 15; /*0x26632e*/
    *(_BYTE *)v26 = 0; /*0x266336*/
    sub_74FF0(Src, v27, v57, v24); /*0x266345*/
    v28 = sub_43D80(Src, &unk_709CE8, 1u); /*0x26635c*/
    *(_OWORD *)Block = *(_OWORD *)v28; /*0x266364*/
    v56 = *(_OWORD *)(v28 + 16); /*0x26636d*/
    *(_QWORD *)(v28 + 16) = 0; /*0x266372*/
    *(_QWORD *)(v28 + 24) = 15; /*0x266376*/
    *(_BYTE *)v28 = 0; /*0x26637e*/
    sub_74FF0(v61, v29, Block, v23); /*0x26638d*/
    DS_Dictionary::setStringForKey(a2, "k152", v61); /*0x2663a1*/
    sub_3C310(v61); /*0x2663ac*/
    if ( *((_QWORD *)&v56 + 1) > 0xFu ) /*0x2663bb*/
    {
      v30 = Block[0]; /*0x2663c0*/
      if ( (unsigned __int64)(*((_QWORD *)&v56 + 1) + 1LL) >= 0x1000 ) /*0x2663cf*/
      {
        v30 = (void *)*((_QWORD *)Block[0] - 1); /*0x2663d5*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v30 - 8) > 0x1F ) /*0x2663e4*/
          invoke_watson(0, 0, 0, 0, 0); /*0x2663f5*/
      }
      j_j_free(v30); /*0x2663fc*/
    }
    sub_3C310(Src); /*0x266406*/
    if ( *((_QWORD *)&v58 + 1) > 0xFu ) /*0x266415*/
    {
      v31 = v57[0]; /*0x26641a*/
      if ( (unsigned __int64)(*((_QWORD *)&v58 + 1) + 1LL) >= 0x1000 ) /*0x266429*/
      {
        v31 = (void *)*((_QWORD *)v57[0] - 1); /*0x26642f*/
        if ( (unsigned __int64)((char *)v57[0] - (char *)v31 - 8) > 0x1F ) /*0x26643e*/
          invoke_watson(0, 0, 0, 0, 0); /*0x26644f*/
      }
      j_j_free(v31); /*0x266456*/
    }
    sub_3C310(v62); /*0x266460*/
    sub_3C310(v63); /*0x26646a*/
    sub_3C310(v60); /*0x266474*/
  }
  if ( *(_QWORD *)(a1 + 2080) ) /*0x266479*/
    DS_Dictionary::setStringForKey(a2, "k149", a1 + 2064); /*0x266494*/
  v32 = *(_DWORD *)(a1 + 2096); /*0x26649a*/
  if ( v32 ) /*0x2664a4*/
    DS_Dictionary::setIntegerForKey(a2, "k150", v32); /*0x2664b0*/
  v33 = *(_BYTE *)(a1 + 2100); /*0x2664b6*/
  if ( v33 ) /*0x2664c1*/
    DS_Dictionary::setBoolForKey(a2, "k153", v33); /*0x2664cd*/
  v34 = *(_DWORD *)(a1 + 2104); /*0x2664d3*/
  if ( v34 ) /*0x2664dd*/
    DS_Dictionary::setIntegerForKey(a2, "k155", v34); /*0x2664e9*/
  if ( !*(_BYTE *)(a1 + 1185) ) /*0x2664ef*/
  {
    if ( *(_QWORD *)(a1 + 360) ) /*0x2664fc*/
      goto LABEL_106; /*0x266504*/
    v35 = (void *)(a1 + 344); /*0x266506*/
    if ( *(_QWORD *)(a1 + 1248) ) /*0x26650d*/
    {
      if ( v35 == (void *)(a1 + 1232) ) /*0x266521*/
        goto LABEL_106; /*0x266521*/
      v36 = (__int64 *)(a1 + 1232); /*0x266523*/
      if ( *(_QWORD *)(a1 + 1256) > 0xFu ) /*0x26652b*/
        v36 = *(__int64 **)(a1 + 1232); /*0x26652d*/
      v37 = *(_QWORD *)(a1 + 1248); /*0x266530*/
    }
    else
    {
      v37 = 7; /*0x266536*/
      v36 = &qword_742E10; /*0x26653c*/
    }
    sub_3F5A0(v35, v36, v37); /*0x266543*/
LABEL_106:
    DS_Dictionary::setStringForKey(a2, "k2", a1 + 344); /*0x266548*/
    v38 = 0; /*0x26655f*/
    if ( *(_DWORD *)(a1 + 992) - *(_DWORD *)(a1 + 996) <= 0 ) /*0x26656f*/
    {
LABEL_114:
      v41 = 0; /*0x2665f9*/
      goto LABEL_115; /*0x2665f9*/
    }
    v39 = *(_DWORD **)&qword_905FB0; /*0x266575*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x26657f*/
    {
      v53 = operator new(0x690u); /*0x26658b*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v53); /*0x266599*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x2665aa*/
      v39 = *(_DWORD **)&qword_905FB0; /*0x2665ac*/
    }
    v40 = *(_DWORD *)(a1 + 992) - *(_DWORD *)(a1 + 996); /*0x2665b9*/
    if ( v40 <= 0 ) /*0x2665c1*/
    {
LABEL_133:
      v41 = 1; /*0x266726*/
LABEL_115:
      if ( !*(_BYTE *)(a1 + 1185) && !*(_BYTE *)(a1 + 1184) && *(_DWORD *)(a1 + 1220) != 1 && !v41 ) /*0x26661a*/
      {
        v42 = qword_905FD0; /*0x26661c*/
        if ( !qword_905FD0 ) /*0x266626*/
        {
          v54 = operator new(0x6E8u); /*0x266632*/
          qword_905FD0 = sub_2723A0(v54); /*0x266640*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x266651*/
          v42 = qword_905FD0; /*0x266653*/
        }
        if ( !*(_BYTE *)(v42 + 354) ) /*0x26665a*/
          goto LABEL_135; /*0x26665a*/
      }
      if ( *(_DWORD *)(a1 + 1220) != 2 && (!v41 || *(_BYTE *)(a1 + 1184)) ) /*0x266679*/
      {
        *(_OWORD *)Block = 0; /*0x266689*/
        *(_QWORD *)&v56 = 0; /*0x26668e*/
        *((_QWORD *)&v56 + 1) = 15; /*0x266693*/
        LOBYTE(Block[0]) = 0; /*0x26669c*/
        DS_Dictionary::setStringForKey(a2, "k4", Block); /*0x2666b0*/
        if ( *((_QWORD *)&v56 + 1) > 0xFu ) /*0x2666c0*/
        {
          v43 = Block[0]; /*0x2666c9*/
          if ( (unsigned __int64)(*((_QWORD *)&v56 + 1) + 1LL) >= 0x1000 ) /*0x2666d8*/
          {
            v43 = (void *)*((_QWORD *)Block[0] - 1); /*0x2666de*/
            if ( (unsigned __int64)((char *)Block[0] - (char *)v43 - 8) > 0x1F ) /*0x2666ed*/
              invoke_watson(0, 0, 0, 0, 0); /*0x2666fe*/
          }
          j_j_free(v43); /*0x26672e*/
        }
      }
      else
      {
LABEL_135:
        DS_Dictionary::setStringForKey(a2, "k4", a1 + 408); /*0x266746*/
        v38 = 1; /*0x26674c*/
        DS_Dictionary::setStringForKey(a2, "k3", a1 + 376); /*0x26675f*/
      }
      DS_Dictionary::setStringForKey(a2, "k5", a1 + 440); /*0x266776*/
      if ( *(_QWORD *)(a1 + 2040) ) /*0x26677c*/
        DS_Dictionary::setStringForKey(a2, "k147", a1 + 2024); /*0x266797*/
      v45 = *(_DWORD *)(a1 + 2056); /*0x26679d*/
      if ( v45 > 0 ) /*0x2667a7*/
        DS_Dictionary::setIntegerForKey(a2, "k148", v45); /*0x2667b3*/
      DS_Dictionary::setIntegerForKey(a2, "k95", *(_DWORD *)(a1 + 1336)); /*0x2667ca*/
      DS_Dictionary::setIntegerForKey(a2, "k98", *(_DWORD *)(a1 + 568)); /*0x2667e1*/
      DS_Dictionary::setIntegerForKey(a2, "k99", *(_DWORD *)(a1 + 572)); /*0x2667f8*/
      DS_Dictionary::setStringForKey(a2, "k91", a1 + 576); /*0x26680f*/
      DS_Dictionary::setStringForKey(a2, "k101", a1 + 608); /*0x266826*/
      DS_Dictionary::setIntegerForKey(a2, "k125", *(_DWORD *)(a1 + 1588)); /*0x26683d*/
      v46 = *(float *)(a1 + 640); /*0x266843*/
      if ( v46 != 0.0 || *(float *)(a1 + 644) != 0.0 ) /*0x266862*/
      {
        DS_Dictionary::setIntegerForKey(a2, "k102", (int)v46); /*0x266873*/
        DS_Dictionary::setIntegerForKey(a2, "k103", (int)*(float *)(a1 + 644)); /*0x26688c*/
      }
      if ( v38 ) /*0x266894*/
        DS_Dictionary::setIntegerForKey(a2, "k6", *(_DWORD *)(a1 + 648) - *(_DWORD *)(a1 + 652)); /*0x2668ae*/
      DS_Dictionary::setIntegerForKey(a2, "k60", *(_DWORD *)(a1 + 660) - *(_DWORD *)(a1 + 664)); /*0x2668cc*/
      DS_Dictionary::setIntegerForKey(a2, "k7", *(_DWORD *)(a1 + 672)); /*0x2668e3*/
      DS_Dictionary::setIntegerForKey(a2, "k8", *(_DWORD *)(a1 + 676)); /*0x2668fa*/
      DS_Dictionary::setIntegerForKey(a2, "k9", *(_DWORD *)(a1 + 708)); /*0x266911*/
      DS_Dictionary::setIntegerForKey(a2, "k10", *(_DWORD *)(a1 + 712)); /*0x266928*/
      DS_Dictionary::setIntegerForKey(a2, "k11", *(_DWORD *)(a1 + 716)); /*0x26693f*/
      DS_Dictionary::setBoolForKey(a2, "k13", *(_BYTE *)(a1 + 720)); /*0x266957*/
      DS_Dictionary::setBoolForKey(a2, "k14", *(_DWORD *)(a1 + 848) - *(_DWORD *)(a1 + 852) == 1); /*0x26697a*/
      DS_Dictionary::setBoolForKey(a2, "k15", *(_BYTE *)(a1 + 857)); /*0x266992*/
      DS_Dictionary::setIntegerForKey(a2, "k22", *(_DWORD *)(a1 + 964)); /*0x2669a9*/
      DS_Dictionary::setIntegerForKey(a2, "k24", *(_DWORD *)(a1 + 968)); /*0x2669c0*/
      DS_Dictionary::setIntegerForKey(a2, "k21", *(_DWORD *)(a1 + 1220)); /*0x2669d7*/
      DS_Dictionary::setIntegerForKey(a2, "k16", *(_DWORD *)(a1 + 860)); /*0x2669ee*/
      if ( v38 ) /*0x2669f6*/
        DS_Dictionary::setIntegerForKey(a2, "k17", *(_DWORD *)(a1 + 864)); /*0x266a09*/
      DS_Dictionary::setBoolForKey(a2, "k69", *(_BYTE *)(a1 + 1296)); /*0x266a21*/
      DS_Dictionary::setBoolForKey(a2, "k93", *(_BYTE *)(a1 + 1297)); /*0x266a39*/
      v47 = *(_DWORD *)(a1 + 724); /*0x266a3f*/
      if ( v47 > 0 ) /*0x266a49*/
        DS_Dictionary::setIntegerForKey(a2, "k80", v47); /*0x266a55*/
      v48 = *(_DWORD *)(a1 + 728); /*0x266a5b*/
      if ( v48 > 0 ) /*0x266a65*/
        DS_Dictionary::setIntegerForKey(a2, "k81", v48); /*0x266a71*/
      if ( *(_DWORD *)(a1 + 1220) == 2 && (*(int *)(a1 + 776) > 0 || *(_DWORD *)(a1 + 792)) ) /*0x266a89*/
      {
        v49 = sub_2632F0(a1 + 736, v60); /*0x266a9d*/
        DS_Dictionary::setStringForKey(a2, "k156", v49); /*0x266ab0*/
        sub_3C310(v60); /*0x266abb*/
      }
      if ( v38 ) /*0x266ac2*/
        DS_Dictionary::setBoolForKey(a2, "k72", *(_BYTE *)(a1 + 840)); /*0x266ad6*/
      DS_Dictionary::setBoolForKey(a2, "k73", *(_BYTE *)(a1 + 841)); /*0x266aee*/
      DS_Dictionary::setBoolForKey(a2, "k112", *(_BYTE *)(a1 + 842)); /*0x266b06*/
      DS_Dictionary::setIntegerForKey(a2, "k83", *(_DWORD *)(a1 + 704)); /*0x266b1d*/
      DS_Dictionary::setIntegerForKey(a2, "k64", *(_DWORD *)(a1 + 1036)); /*0x266b34*/
      DS_Dictionary::setBoolForKey(a2, "k65", *(_DWORD *)(a1 + 1040) - *(_DWORD *)(a1 + 1044) == 1); /*0x266b57*/
      DS_Dictionary::setIntegerForKey(a2, "k27", *(_DWORD *)(a1 + 976)); /*0x266b6e*/
      DS_Dictionary::setIntegerForKey(a2, "k75", *(_DWORD *)(a1 + 980)); /*0x266b85*/
      DS_Dictionary::setBoolForKey(a2, "k33", *(_BYTE *)(a1 + 1032)); /*0x266b9d*/
      DS_Dictionary::setBoolForKey(a2, "k79", *(_BYTE *)(a1 + 688)); /*0x266bb5*/
      DS_Dictionary::setBoolForKey(a2, "k94", *(_BYTE *)(a1 + 689)); /*0x266bcd*/
      if ( v38 ) /*0x266bd5*/
      {
        DS_Dictionary::setIntegerForKey(a2, "k41", *(_DWORD *)(a1 + 1052) - *(_DWORD *)(a1 + 1056)); /*0x266bef*/
        DS_Dictionary::setIntegerForKey(a2, "k42", *(_DWORD *)(a1 + 1060) - *(_DWORD *)(a1 + 1064)); /*0x266c0d*/
      }
      DS_Dictionary::setBoolForKey(a2, "k43", *(_BYTE *)(a1 + 1072)); /*0x266c25*/
      DS_Dictionary::setIntegerForKey(a2, "k45", *(_DWORD *)(a1 + 680)); /*0x266c3c*/
      DS_Dictionary::setIntegerForKey(a2, "k50", 51); /*0x266c52*/
      DS_Dictionary::setIntegerForKey(a2, "k46", *(_DWORD *)(a1 + 684)); /*0x266c69*/
      DS_Dictionary::setBoolForKey(a2, "k47", *(_BYTE *)(a1 + 858)); /*0x266c81*/
      DS_Dictionary::setIntegerForKey(a2, "k48", *(_DWORD *)(a1 + 692) - *(_DWORD *)(a1 + 696)); /*0x266c9f*/
      if ( v38 ) /*0x266ca7*/
        DS_Dictionary::setStringForKey(a2, "k67", a1 + 1264); /*0x266cba*/
      DS_Dictionary::setStringForKey(a2, "k104", a1 + 1344); /*0x266cd1*/
      DS_Dictionary::setStringForKey(a2, "k105", a1 + 1376); /*0x266ce8*/
      DS_Dictionary::setIntegerForKey(a2, "k106", *(_DWORD *)(a1 + 1408)); /*0x266cff*/
      DS_Dictionary::setIntegerForKey(a2, "k66", *(_DWORD *)(a1 + 1116)); /*0x266d16*/
      if ( *(_DWORD *)(a1 + 1220) == 1 ) /*0x266d23*/
      {
        DS_Dictionary::setBoolForKey(a2, "k38", *(_BYTE *)(a1 + 1192)); /*0x266d37*/
        DS_Dictionary::setIntegerForKey(a2, "k37", *(_DWORD *)(a1 + 1188)); /*0x266d4e*/
      }
      if ( *(_DWORD *)(a1 + 1220) == 2 ) /*0x266d5b*/
      {
        DS_Dictionary::setFloatForKey(a2, "kI1", *(float *)(a1 + 1196)); /*0x266d73*/
        DS_Dictionary::setFloatForKey(a2, "kI2", *(float *)(a1 + 1200)); /*0x266d8b*/
        DS_Dictionary::setFloatForKey(a2, "kI3", *(float *)(a1 + 1204)); /*0x266da3*/
        DS_Dictionary::setIntegerForKey(a2, "kI4", *(_DWORD *)(a1 + 1212)); /*0x266dba*/
        DS_Dictionary::setIntegerForKey(a2, "kI5", *(_DWORD *)(a1 + 1208)); /*0x266dd1*/
        DS_Dictionary::setIntegerForKey(a2, "kI7", *(_DWORD *)(a1 + 1216)); /*0x266de8*/
        DS_Dictionary::setDictForKey(a2, "kI6", *(struct cocos2d::CCDictionary **)(a1 + 320)); /*0x266dff*/
        DS_Dictionary::setBoolForKey(a2, "k61", *(_DWORD *)(a1 + 1080) - *(_DWORD *)(a1 + 1084) == 1); /*0x266e22*/
        DS_Dictionary::setBoolForKey(a2, "k62", *(_DWORD *)(a1 + 1092) - *(_DWORD *)(a1 + 1096) == 1); /*0x266e45*/
        DS_Dictionary::setBoolForKey(a2, "k63", *(_DWORD *)(a1 + 1104) - *(_DWORD *)(a1 + 1108) == 1); /*0x266e68*/
        DS_Dictionary::setStringForKey(a2, "k34", a1 + 472); /*0x266e7f*/
        if ( !*(_QWORD *)(a1 + 1608) ) /*0x266e85*/
        {
          v50 = sub_6F810(v60); /*0x266e98*/
          sub_58AD0(a1 + 1592, v50); /*0x266ea7*/
          sub_3C310(v60); /*0x266eb0*/
        }
        sub_3E4F0(Src, a1 + 1592); /*0x266ec0*/
        DS_Dictionary::setStringForKey(a2, "k126", Src); /*0x266ed4*/
        sub_3C310(Src); /*0x266edf*/
        v51 = *(_DWORD *)(a1 + 1624); /*0x266ee4*/
        if ( v51 > 0 ) /*0x266eee*/
          DS_Dictionary::setIntegerForKey(a2, "k127", v51); /*0x266efa*/
      }
      return; /*0x266efa*/
    }
    if ( v40 <= 200000 ) /*0x2665cd*/
    {
      if ( v40 <= 100000 ) /*0x2665e1*/
      {
        v44 = v39[240]; /*0x26670e*/
        goto LABEL_132; /*0x266715*/
      }
      if ( v40 > 100000 ) /*0x2665dc*/
      {
        v44 = v39[243]; /*0x266705*/
        goto LABEL_132; /*0x26670c*/
      }
      if ( v40 > 100000 != 2 ) /*0x2665f3*/
        goto LABEL_114; /*0x2665f3*/
    }
    v44 = v39[246]; /*0x266717*/
LABEL_132:
    if ( v40 != v44 ) /*0x266720*/
      goto LABEL_114; /*0x266720*/
    goto LABEL_133; /*0x266720*/
  }
}

// [8/11] Address: 0x267020
// Method: GJGameLevel::handleStatsConflict
// Hidden C++ exception states: #wind=1
__int64 __fastcall GJGameLevel_handleStatsConflict(__int64 a1, _QWORD *a2)
{
  int v4; // ebx
  float v5; // xmm0_4
  int v6; // ebx
  float v7; // xmm0_4
  int v8; // ebx
  float v9; // xmm0_4
  int v10; // ebx
  float v11; // xmm0_4
  int v12; // ebx
  float v13; // xmm0_4
  int v14; // ebp
  int v15; // ebx
  size_t *v16; // rax
  size_t *v17; // rax
  float v18; // xmm0_4
  int v19; // ebx
  float v20; // xmm0_4
  int v21; // ebx
  float v22; // xmm0_4
  void **v23; // rdx
  int v24; // eax
  int v25; // eax
  int v26; // ecx
  __int64 result; // rax
  int v28; // ecx
  void *v29; // rdx
  void *v30; // rdx
  void *v31; // rdx
  void *v32; // rdx
  void *v33; // rdx
  void *v34; // rdx
  void *v35; // rdx
  _QWORD *v36; // rcx
  size_t v37; // r8
  _QWORD *v38; // rdx
  _QWORD *v39; // rcx
  size_t v40; // r8
  _QWORD *v41; // rdx
  _QWORD *v42; // rcx
  size_t v43; // r8
  _QWORD *v44; // rdx
  _QWORD *v45; // rdx
  void *v46; // rdx
  void *Src[4]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v48[64]; // [rsp+60h] [rbp-48h] BYREF

  v4 = *(_DWORD *)(a1 + 868) - *(_DWORD *)(a1 + 872); /*0x267057*/
  if ( v4 <= *((_DWORD *)a2 + 217) - *((_DWORD *)a2 + 218) ) /*0x26705f*/
    v4 = *((_DWORD *)a2 + 217) - *((_DWORD *)a2 + 218); /*0x26705f*/
  *(_DWORD *)(a1 + 876) = v4; /*0x267062*/
  v5 = (float)((float)rand() / 32767.0) * 1000.0; /*0x267089*/
  *(_DWORD *)(a1 + 872) = (int)v5; /*0x267091*/
  *(_DWORD *)(a1 + 868) = v4 + (int)v5; /*0x267099*/
  v6 = *(_DWORD *)(a1 + 880) - *(_DWORD *)(a1 + 884); /*0x2670b1*/
  if ( v6 <= *((_DWORD *)a2 + 220) - *((_DWORD *)a2 + 221) ) /*0x2670b9*/
    v6 = *((_DWORD *)a2 + 220) - *((_DWORD *)a2 + 221); /*0x2670b9*/
  *(_DWORD *)(a1 + 888) = v6; /*0x2670bc*/
  v7 = (float)((float)rand() / 32767.0) * 1000.0; /*0x2670d3*/
  *(_DWORD *)(a1 + 884) = (int)v7; /*0x2670db*/
  *(_DWORD *)(a1 + 880) = v6 + (int)v7; /*0x2670e3*/
  v8 = *(_DWORD *)(a1 + 892) - *(_DWORD *)(a1 + 896); /*0x2670fb*/
  if ( v8 <= *((_DWORD *)a2 + 223) - *((_DWORD *)a2 + 224) ) /*0x267103*/
    v8 = *((_DWORD *)a2 + 223) - *((_DWORD *)a2 + 224); /*0x267103*/
  *(_DWORD *)(a1 + 900) = v8; /*0x267106*/
  v9 = (float)((float)rand() / 32767.0) * 1000.0; /*0x26711d*/
  *(_DWORD *)(a1 + 896) = (int)v9; /*0x267125*/
  *(_DWORD *)(a1 + 892) = v8 + (int)v9; /*0x26712d*/
  v10 = *(_DWORD *)(a1 + 932) - *(_DWORD *)(a1 + 928); /*0x267145*/
  if ( v10 <= *((_DWORD *)a2 + 233) - *((_DWORD *)a2 + 232) ) /*0x26714d*/
    v10 = *((_DWORD *)a2 + 233) - *((_DWORD *)a2 + 232); /*0x26714d*/
  *(_DWORD *)(a1 + 924) = v10; /*0x267150*/
  v11 = (float)((float)rand() / 32767.0) * 1000.0; /*0x267167*/
  *(_DWORD *)(a1 + 928) = (int)v11; /*0x26716f*/
  *(_DWORD *)(a1 + 932) = v10 + (int)v11; /*0x267177*/
  v12 = *(_DWORD *)(a1 + 936) - *(_DWORD *)(a1 + 940); /*0x26718f*/
  if ( v12 <= *((_DWORD *)a2 + 234) - *((_DWORD *)a2 + 235) ) /*0x267197*/
    v12 = *((_DWORD *)a2 + 234) - *((_DWORD *)a2 + 235); /*0x267197*/
  *(_DWORD *)(a1 + 944) = v12; /*0x26719a*/
  v13 = (float)((float)rand() / 32767.0) * 1000.0; /*0x2671b1*/
  *(_DWORD *)(a1 + 940) = (int)v13; /*0x2671b9*/
  *(_DWORD *)(a1 + 936) = v12 + (int)v13; /*0x2671c1*/
  v14 = *(_DWORD *)(a1 + 948) - *(_DWORD *)(a1 + 952); /*0x2671cd*/
  v15 = *((_DWORD *)a2 + 237) - *((_DWORD *)a2 + 238); /*0x2671d9*/
  v16 = (size_t *)sub_3E4F0(v48, a2 + 179); /*0x2671eb*/
  if ( (unsigned __int8)GJGameLevel_saveNewScore( /*0x267221*/
                          a1,
                          *((_DWORD *)a2 + 354),
                          0,
                          *((_DWORD *)a2 + 355),
                          *((_DWORD *)a2 + 356),
                          *((_DWORD *)a2 + 357),
                          v16,
                          0) )
    *(_BYTE *)(a1 + 1584) = *((_BYTE *)a2 + 1584); /*0x267231*/
  v17 = (size_t *)sub_3E4F0(v48, a2 + 185); /*0x267243*/
  if ( (unsigned __int8)GJGameLevel_saveNewScore( /*0x26727c*/
                          a1,
                          *((_DWORD *)a2 + 366),
                          1u,
                          *((_DWORD *)a2 + 367),
                          *((_DWORD *)a2 + 368),
                          *((_DWORD *)a2 + 369),
                          v17,
                          0) )
    *(_BYTE *)(a1 + 1585) = *((_BYTE *)a2 + 1585); /*0x26728c*/
  if ( v15 > v14 ) /*0x267294*/
  {
    *(_DWORD *)(a1 + 956) = v15; /*0x26729a*/
    v18 = (float)((float)rand() / 32767.0) * 1000.0; /*0x2672b1*/
    *(_DWORD *)(a1 + 952) = (int)v18; /*0x2672b9*/
    *(_DWORD *)(a1 + 948) = v15 + (int)v18; /*0x2672c1*/
    v19 = *((_DWORD *)a2 + 223) - *((_DWORD *)a2 + 224); /*0x2672cd*/
    *(_DWORD *)(a1 + 900) = v19; /*0x2672d3*/
    v20 = (float)((float)rand() / 32767.0) * 1000.0; /*0x2672ea*/
    *(_DWORD *)(a1 + 896) = (int)v20; /*0x2672f2*/
    *(_DWORD *)(a1 + 892) = v19 + (int)v20; /*0x2672fa*/
    v21 = *((_DWORD *)a2 + 226) - *((_DWORD *)a2 + 227); /*0x267306*/
    *(_DWORD *)(a1 + 912) = v21; /*0x26730c*/
    v22 = (float)((float)rand() / 32767.0) * 1000.0; /*0x267323*/
    *(_DWORD *)(a1 + 908) = (int)v22; /*0x26732b*/
    *(_DWORD *)(a1 + 904) = v21 + (int)v22; /*0x267333*/
    *(_DWORD *)(a1 + 916) = *((_DWORD *)a2 + 229); /*0x26733f*/
    sub_3E4F0(Src, a2 + 163); /*0x267351*/
    if ( (void **)(a1 + 1304) != Src ) /*0x267372*/
    {
      v23 = Src; /*0x267374*/
      if ( Src[3] > (char *)&loc_D + 2 ) /*0x26737f*/
        v23 = (void **)Src[0]; /*0x26737f*/
      sub_3F5A0((void *)(a1 + 1304), v23, (size_t)Src[2]); /*0x26738a*/
    }
    sub_3C310(Src); /*0x267395*/
    *(_BYTE *)(a1 + 920) = *((_BYTE *)a2 + 920); /*0x2673a1*/
  }
  v24 = *(_DWORD *)(a1 + 960); /*0x2673ad*/
  if ( v24 <= *((_DWORD *)a2 + 240) ) /*0x2673b5*/
    v24 = *((_DWORD *)a2 + 240); /*0x2673b5*/
  *(_DWORD *)(a1 + 960) = v24; /*0x2673b8*/
  v25 = *(_DWORD *)(a1 + 1708); /*0x2673c4*/
  if ( v25 <= *((_DWORD *)a2 + 427) ) /*0x2673cc*/
    v25 = *((_DWORD *)a2 + 427); /*0x2673cc*/
  *(_DWORD *)(a1 + 1708) = v25; /*0x2673cf*/
  v26 = *((_DWORD *)a2 + 176); /*0x2673d5*/
  result = *(unsigned int *)(a1 + 704); /*0x2673db*/
  if ( (int)result <= v26 ) /*0x2673e3*/
    result = (unsigned int)v26; /*0x2673e3*/
  *(_DWORD *)(a1 + 704) = result; /*0x2673e6*/
  if ( *((_BYTE *)a2 + 984) ) /*0x2673ec*/
    *(_BYTE *)(a1 + 984) = 1; /*0x2673f5*/
  v28 = *((_DWORD *)a2 + 428); /*0x2673fc*/
  if ( v28 > 0 ) /*0x267404*/
  {
    if ( !*(_DWORD *)(a1 + 1712) || (result = *(unsigned int *)(a1 + 1852), *((_DWORD *)a2 + 463) > (int)result) ) /*0x26741f*/
    {
      *(_DWORD *)(a1 + 1712) = v28; /*0x267425*/
      if ( (_QWORD *)(a1 + 1720) != a2 + 215 ) /*0x26743c*/
      {
        v29 = a2 + 215; /*0x26743e*/
        if ( a2[218] > 0xFu ) /*0x267446*/
          v29 = (void *)a2[215]; /*0x267448*/
        sub_3F5A0((void *)(a1 + 1720), v29, a2[217]); /*0x26744f*/
      }
      if ( (_QWORD *)(a1 + 1752) != a2 + 219 ) /*0x267465*/
      {
        v30 = a2 + 219; /*0x267467*/
        if ( a2[222] > 0xFu ) /*0x26746f*/
          v30 = (void *)a2[219]; /*0x267471*/
        sub_3F5A0((void *)(a1 + 1752), v30, a2[221]); /*0x267478*/
      }
      if ( (_QWORD *)(a1 + 1784) != a2 + 223 ) /*0x26748e*/
      {
        v31 = a2 + 223; /*0x267490*/
        if ( a2[226] > 0xFu ) /*0x267498*/
          v31 = (void *)a2[223]; /*0x26749a*/
        sub_3F5A0((void *)(a1 + 1784), v31, a2[225]); /*0x2674a1*/
      }
      if ( (_QWORD *)(a1 + 1816) != a2 + 227 ) /*0x2674b7*/
      {
        v32 = a2 + 227; /*0x2674b9*/
        if ( a2[230] > 0xFu ) /*0x2674c1*/
          v32 = (void *)a2[227]; /*0x2674c3*/
        sub_3F5A0((void *)(a1 + 1816), v32, a2[229]); /*0x2674ca*/
      }
      *(_DWORD *)(a1 + 1848) = *((_DWORD *)a2 + 462); /*0x2674d5*/
      *(_DWORD *)(a1 + 1852) = *((_DWORD *)a2 + 463); /*0x2674e1*/
      *(_DWORD *)(a1 + 1856) = *((_DWORD *)a2 + 464); /*0x2674ed*/
      *(_DWORD *)(a1 + 1860) = *((_DWORD *)a2 + 465); /*0x2674f9*/
      *(_DWORD *)(a1 + 1864) = *((_DWORD *)a2 + 466); /*0x267505*/
      if ( (_QWORD *)(a1 + 1872) != a2 + 234 ) /*0x26751c*/
      {
        v33 = a2 + 234; /*0x26751e*/
        if ( a2[237] > 0xFu ) /*0x267526*/
          v33 = (void *)a2[234]; /*0x267528*/
        sub_3F5A0((void *)(a1 + 1872), v33, a2[236]); /*0x26752f*/
      }
      if ( (_QWORD *)(a1 + 1904) != a2 + 238 ) /*0x267545*/
      {
        v34 = a2 + 238; /*0x267547*/
        if ( a2[241] > 0xFu ) /*0x26754f*/
          v34 = (void *)a2[238]; /*0x267551*/
        sub_3F5A0((void *)(a1 + 1904), v34, a2[240]); /*0x267558*/
      }
      *(_BYTE *)(a1 + 1936) = *((_BYTE *)a2 + 1936); /*0x267564*/
      result = *(unsigned int *)(a1 + 860); /*0x26756a*/
      if ( *((_DWORD *)a2 + 215) == (_DWORD)result ) /*0x267576*/
      {
        if ( *(_DWORD *)(a1 + 1220) != 2 || (result = sub_3C160((void *)(a1 + 408), a2 + 51), !(_DWORD)result) ) /*0x267596*/
        {
          if ( (_QWORD *)(a1 + 1944) != a2 + 243 ) /*0x2675a9*/
          {
            v35 = a2 + 243; /*0x2675ab*/
            if ( a2[246] > 0xFu ) /*0x2675b3*/
              v35 = (void *)a2[243]; /*0x2675b5*/
            sub_3F5A0((void *)(a1 + 1944), v35, a2[245]); /*0x2675bc*/
          }
          result = *((unsigned __int8 *)a2 + 1976); /*0x2675c1*/
          *(_BYTE *)(a1 + 1976) = result; /*0x2675c8*/
        }
      }
    }
  }
  v36 = (_QWORD *)(a1 + 1992); /*0x2675ce*/
  if ( !*(_QWORD *)(a1 + 2008) ) /*0x2675d5*/
  {
    v37 = a2[251]; /*0x2675dc*/
    if ( v37 ) /*0x2675e6*/
    {
      v38 = a2 + 249; /*0x2675e8*/
      if ( v36 != a2 + 249 ) /*0x2675f2*/
      {
        if ( a2[252] > 0xFu ) /*0x2675f9*/
          v38 = (_QWORD *)*v38; /*0x2675fb*/
        sub_3F5A0(v36, v38, v37); /*0x2675fe*/
      }
      *(_DWORD *)(a1 + 1984) = *((_DWORD *)a2 + 496); /*0x267609*/
      result = *((unsigned int *)a2 + 497); /*0x26760f*/
      *(_DWORD *)(a1 + 1988) = result; /*0x267615*/
    }
  }
  v39 = (_QWORD *)(a1 + 2064); /*0x26761b*/
  if ( !*(_QWORD *)(a1 + 2080) ) /*0x267622*/
  {
    v40 = a2[260]; /*0x267629*/
    if ( v40 ) /*0x267633*/
    {
      v41 = a2 + 258; /*0x267635*/
      if ( v39 != a2 + 258 ) /*0x26763f*/
      {
        if ( a2[261] > 0xFu ) /*0x267646*/
          v41 = (_QWORD *)*v41; /*0x267648*/
        sub_3F5A0(v39, v41, v40); /*0x26764b*/
      }
      *(_DWORD *)(a1 + 2096) = *((_DWORD *)a2 + 524); /*0x267656*/
      *(_BYTE *)(a1 + 2100) = *((_BYTE *)a2 + 2100); /*0x267663*/
      result = *((unsigned int *)a2 + 526); /*0x267669*/
      *(_DWORD *)(a1 + 2104) = result; /*0x26766f*/
    }
  }
  v42 = (_QWORD *)(a1 + 2024); /*0x267675*/
  if ( !*(_QWORD *)(a1 + 2040) ) /*0x26767c*/
  {
    v43 = a2[255]; /*0x267683*/
    if ( v43 ) /*0x26768d*/
    {
      v44 = a2 + 253; /*0x26768f*/
      if ( v42 != a2 + 253 ) /*0x267699*/
      {
        if ( a2[256] > 0xFu ) /*0x2676a0*/
          v44 = (_QWORD *)*v44; /*0x2676a2*/
        sub_3F5A0(v42, v44, v43); /*0x2676a5*/
      }
      result = *((unsigned int *)a2 + 514); /*0x2676aa*/
      *(_DWORD *)(a1 + 2056) = result; /*0x2676b0*/
    }
  }
  if ( !*(_QWORD *)(a1 + 1648) ) /*0x2676bd*/
  {
    if ( a2[206] ) /*0x2676c8*/
    {
      result = *(unsigned int *)(a1 + 860); /*0x2676d6*/
      if ( *((_DWORD *)a2 + 424) == (_DWORD)result ) /*0x2676e2*/
      {
        if ( *(_DWORD *)(a1 + 1220) != 2 || (result = sub_3C160((void *)(a1 + 408), a2 + 51), !(_DWORD)result) ) /*0x267706*/
        {
          v45 = a2 + 204; /*0x267708*/
          if ( (_QWORD *)(a1 + 1632) != a2 + 204 ) /*0x267712*/
          {
            if ( a2[207] > 0xFu ) /*0x267719*/
              v45 = (_QWORD *)*v45; /*0x26771b*/
            sub_3F5A0((void *)(a1 + 1632), v45, a2[206]); /*0x267728*/
          }
          *(_DWORD *)(a1 + 1696) = *((_DWORD *)a2 + 424); /*0x267733*/
          *(_DWORD *)(a1 + 1700) = *((_DWORD *)a2 + 425); /*0x26773f*/
          if ( (_QWORD *)(a1 + 1664) != a2 + 208 ) /*0x267756*/
          {
            v46 = a2 + 208; /*0x267758*/
            if ( a2[211] > 0xFu ) /*0x267760*/
              v46 = (void *)a2[208]; /*0x267762*/
            sub_3F5A0((void *)(a1 + 1664), v46, a2[210]); /*0x267769*/
          }
          result = *((unsigned __int8 *)a2 + 841); /*0x26776e*/
          *(_BYTE *)(a1 + 841) = result; /*0x267775*/
        }
      }
    }
  }
  return result; /*0x26777b*/
}

// [9/11] Address: 0x2677a0
// Method: GJGameLevel::areCoinsVerified
bool __fastcall GJGameLevel_areCoinsVerified(_DWORD *a1)
{
  int v1; // r10d

  v1 = a1[259]; /*0x2677a0*/
  return v1 <= 0 || v1 <= (a1[270] - a1[271] == 1) + (a1[273] - a1[274] == 1) + (a1[276] - a1[277] == 1); /*0x2677fc*/
}

// [10/11] Address: 0x267800
// Method: GJGameLevel::unverifyCoins
__int64 __fastcall GJGameLevel_unverifyCoins(_DWORD *a1)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  __int64 result; // rax

  a1[272] = 0; /*0x267809*/
  v2 = rand(); /*0x267813*/
  a1[275] = 0; /*0x267819*/
  v3 = (int)(float)((float)((float)v2 / 32767.0) * 1000.0); /*0x26783a*/
  a1[271] = v3; /*0x26783e*/
  a1[270] = v3; /*0x267844*/
  v4 = rand(); /*0x26784a*/
  a1[278] = 0; /*0x267850*/
  v5 = (int)(float)((float)((float)v4 / 32767.0) * 1000.0); /*0x267871*/
  a1[274] = v5; /*0x267875*/
  a1[273] = v5; /*0x26787b*/
  result = (unsigned int)(int)(float)((float)((float)rand() / 32767.0) * 1000.0); /*0x26789e*/
  a1[277] = result; /*0x2678a2*/
  a1[276] = result; /*0x2678a8*/
  return result; /*0x2678ae*/
}

// [11/11] Address: 0x523cc0
// Method: GJGameLevel::copyLevelInfo
// Hidden C++ exception states: #wind=3
void __fastcall GJGameLevel_copyLevelInfo(__int64 *a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  size_t *v6; // r8
  void *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  const char *v11; // rcx
  __int64 v12; // rcx
  const char *v13; // rcx
  void *v14; // rcx
  int v15; // [rsp+30h] [rbp-29h] BYREF
  __int128 v16; // [rsp+38h] [rbp-21h] BYREF
  __int64 v17; // [rsp+48h] [rbp-11h]
  int v18; // [rsp+50h] [rbp-9h]
  __int64 v19; // [rsp+58h] [rbp-1h]
  _BYTE v20[16]; // [rsp+60h] [rbp+7h] BYREF
  void *Block[2]; // [rsp+70h] [rbp+17h] BYREF
  __m128i si128; // [rsp+80h] [rbp+27h]

  *(_OWORD *)Block = 0; /*0x523ceb*/
  si128 = _mm_load_si128((const __m128i *)&Size); /*0x523cf7*/
  LOBYTE(Block[0]) = 0; /*0x523cfc*/
  v4 = *a1; /*0x523d00*/
  v5 = *((int *)a1 + 6); /*0x523d03*/
  if ( (int)v5 < (int)((a1[1] - *a1) >> 5) ) /*0x523d14*/
  {
    *((_DWORD *)a1 + 6) = v5 + 1; /*0x523d1c*/
    v6 = (size_t *)(32 * v5 + v4); /*0x523d23*/
    if ( Block != (void **)v6 ) /*0x523d2d*/
    {
      v7 = v6; /*0x523d2f*/
      if ( v6[3] > 0xF ) /*0x523d37*/
        v7 = (void *)*v6; /*0x523d39*/
      sub_3F5A0(Block, v7, v6[2]); /*0x523d44*/
    }
  }
  v8 = a1[4]; /*0x523d49*/
  v16 = 0; /*0x523d50*/
  v17 = 0; /*0x523d57*/
  v18 = 0; /*0x523d5b*/
  v19 = v8; /*0x523d5e*/
  sub_1C2580(Block, &word_70806C, &v16); /*0x523d71*/
  v9 = 0; /*0x523d77*/
  v10 = v18; /*0x523d88*/
  if ( v18 < (int)((__int64)(*((_QWORD *)&v16 + 1) - v16) >> 5) ) /*0x523d8e*/
  {
    ++v18; /*0x523d95*/
    v11 = (const char *)(32 * v10 + v16); /*0x523d9c*/
    if ( *((_QWORD *)v11 + 3) > 0xFu ) /*0x523da5*/
      v11 = *(const char **)v11; /*0x523da7*/
    v9 = (unsigned int)atoi(v11); /*0x523db0*/
  }
  sub_3DB60(a2); /*0x523db5*/
  if ( (int)v9 > 0 ) /*0x523dbc*/
  {
    do /*0x523e11*/
    {
      v15 = 0; /*0x523dc0*/
      v12 = v18; /*0x523dd2*/
      if ( v18 < (int)((__int64)(*((_QWORD *)&v16 + 1) - v16) >> 5) ) /*0x523dd8*/
      {
        ++v18; /*0x523ddf*/
        v13 = (const char *)(32 * v12 + v16); /*0x523de6*/
        if ( *((_QWORD *)v13 + 3) > 0xFu ) /*0x523def*/
          v13 = *(const char **)v13; /*0x523df1*/
        v15 = atoi(v13); /*0x523dfa*/
      }
      sub_67020(a2, v20, &v15); /*0x523e08*/
      --v9; /*0x523e0d*/
    }
    while ( v9 ); /*0x523e11*/
  }
  sub_74F50(&v16); /*0x523e17*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x523e25*/
  {
    v14 = Block[0]; /*0x523e2a*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x523e38*/
    {
      v14 = (void *)*((_QWORD *)Block[0] - 1); /*0x523e3e*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v14 - 8) > 0x1F ) /*0x523e4d*/
        invoke_watson(0, 0, 0, 0, 0); /*0x523e5e*/
    }
    j_j_free(v14); /*0x523e65*/
  }
}
