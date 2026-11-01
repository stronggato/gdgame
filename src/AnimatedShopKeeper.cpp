#include <Geode/binding/AnimatedShopKeeper.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x33b2f0
// Method: AnimatedShopKeeper::startAnimating
__int64 __fastcall AnimatedShopKeeper_startAnimating(__int64 a1, float a2, float a3, int a4, int a5, int a6, int a7)
{
  __int64 v8; // rcx
  __int64 result; // rax
  int v10; // [rsp+68h] [rbp+10h] BYREF

  v8 = a1 + 424; /*0x33b2fc*/
  *(float *)(v8 + 16) = a2; /*0x33b306*/
  if ( a3 > 0.0 ) /*0x33b30b*/
    return GJGameState_tweenValue(v8, *(float *)(a1 + 432), a2, 15, SLODWORD(a3), a4, a5, a6, a7); /*0x33b34e*/
  v10 = 15; /*0x33b360*/
  sub_351620(a1 + 1064, &v10); /*0x33b36d*/
  result = *(unsigned int *)(a1 + 440); /*0x33b372*/
  *(_DWORD *)(a1 + 432) = result; /*0x33b378*/
  return result; /*0x33b353*/
}

// [2/3] Address: 0x3abd10
// Method: AnimatedShopKeeper::~AnimatedShopKeeper
cocos2d::CCSprite *__fastcall AnimatedShopKeeper__dtor_AnimatedShopKeeper(cocos2d::CCSprite *Block, char a2)
{
  *(_QWORD *)Block = &AnimatedShopKeeper::`vftable'; /*0x3abd23*/
  *((_QWORD *)Block + 40) = &AnimatedShopKeeper::`vftable'; /*0x3abd30*/
  *((_QWORD *)Block + 43) = &AnimatedShopKeeper::`vftable'; /*0x3abd3e*/
  CCAnimatedSprite__dtor_CCAnimatedSprite(Block); /*0x3abd45*/
  if ( (a2 & 1) != 0 ) /*0x3abd4d*/
    j_j_free(Block); /*0x3abd57*/
  return Block; /*0x3abd5c*/
}

// [3/3] Address: 0x3b2810
// Method: AnimatedShopKeeper::animationFinished
// Hidden C++ exception states: #wind=6
double __fastcall AnimatedShopKeeper_animationFinished(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // r8
  void **v6; // rcx
  char *v7; // r15
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r12
  size_t v10; // r8
  int v11; // r14d
  char *v12; // rax
  __int64 v13; // r8
  __int128 *p_Buf2; // rcx
  char *v15; // r14
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r15
  size_t v18; // r8
  bool v19; // r15
  char *v20; // rax
  void *v21; // rax
  __int64 v22; // r8
  __int128 *v23; // rcx
  char *v24; // r14
  unsigned __int64 v25; // r13
  unsigned __int64 v26; // r15
  size_t v27; // r8
  bool v28; // r15
  char *v29; // rax
  void *v30; // rax
  void *v31; // rax
  double result; // xmm0_8
  __int128 *v33; // rcx
  char *v34; // rbx
  unsigned __int64 v35; // r14
  unsigned __int64 v36; // rdi
  size_t v37; // r8
  bool v38; // di
  char *v39; // rax
  void *v40; // rax
  void *v41; // rax
  void *Buf1[2]; // [rsp+40h] [rbp-29h] BYREF
  unsigned __int64 v43; // [rsp+50h] [rbp-19h]
  unsigned __int64 v44; // [rsp+58h] [rbp-11h]
  __int128 Buf2; // [rsp+60h] [rbp-9h] BYREF
  unsigned __int64 v46; // [rsp+70h] [rbp+7h]
  unsigned __int64 v47; // [rsp+78h] [rbp+Fh]

  --*(_DWORD *)(a1 + 748); /*0x3b2845*/
  --*(_DWORD *)(a1 + 752); /*0x3b284b*/
  v46 = 7; /*0x3b285e*/
  v47 = 15; /*0x3b2862*/
  Buf2 = 0x31307463616572uLL; /*0x3b2871*/
  *(_OWORD *)Buf1 = 0; /*0x3b288c*/
  v43 = 0; /*0x3b2890*/
  v44 = 0; /*0x3b2894*/
  v4 = -1; /*0x3b2898*/
  v5 = -1; /*0x3b289f*/
  do /*0x3b28a5*/
    ++v5; /*0x3b28a2*/
  while ( *(_BYTE *)(a2 + v5) ); /*0x3b28a5*/
  sub_3C230(Buf1); /*0x3b28b0*/
  v6 = Buf1; /*0x3b28b5*/
  v7 = (char *)Buf1[0]; /*0x3b28b9*/
  v8 = v44; /*0x3b28bd*/
  if ( v44 > 0xF ) /*0x3b28c5*/
    v6 = (void **)Buf1[0]; /*0x3b28c5*/
  v9 = v43; /*0x3b28c9*/
  v10 = v43; /*0x3b28cd*/
  if ( v43 > 7 ) /*0x3b28d4*/
    v10 = 7; /*0x3b28d4*/
  v11 = memcmp(v6, &Buf2, v10); /*0x3b28e1*/
  if ( !v11 ) /*0x3b28e6*/
  {
    if ( v9 >= 7 ) /*0x3b28ec*/
      v11 = v9 > 7; /*0x3b28fa*/
    else
      v11 = -1; /*0x3b28ee*/
  }
  if ( v8 > 0xF ) /*0x3b2902*/
  {
    v12 = v7; /*0x3b2908*/
    if ( v8 + 1 >= 0x1000 ) /*0x3b2912*/
    {
      v7 = (char *)*((_QWORD *)v7 - 1); /*0x3b2918*/
      if ( (unsigned __int64)(v12 - v7 - 8) > 0x1F ) /*0x3b2927*/
        invoke_watson(0, 0, 0, 0, 0); /*0x3b293c*/
    }
    j_j_free(v7); /*0x3b2946*/
  }
  if ( !v11 ) /*0x3b294f*/
    *(_BYTE *)(a1 + 757) = 0; /*0x3b2951*/
  *(_OWORD *)Buf1 = 0; /*0x3b295b*/
  v43 = 6; /*0x3b295f*/
  v44 = 15; /*0x3b2967*/
  strcpy((char *)Buf1, "idle03"); /*0x3b2975*/
  Buf2 = 0; /*0x3b298e*/
  v46 = 0; /*0x3b2995*/
  v47 = 0; /*0x3b2999*/
  v13 = -1; /*0x3b299d*/
  do /*0x3b29a3*/
    ++v13; /*0x3b29a0*/
  while ( *(_BYTE *)(a2 + v13) ); /*0x3b29a3*/
  sub_3C230(&Buf2); /*0x3b29b0*/
  p_Buf2 = &Buf2; /*0x3b29b5*/
  v15 = (char *)Buf2; /*0x3b29b9*/
  v16 = v47; /*0x3b29bd*/
  if ( v47 > 0xF ) /*0x3b29c5*/
    p_Buf2 = (__int128 *)Buf2; /*0x3b29c5*/
  v17 = v46; /*0x3b29c9*/
  v18 = v46; /*0x3b29cd*/
  if ( v46 > 6 ) /*0x3b29d9*/
    v18 = 6; /*0x3b29d9*/
  v19 = (memcmp(p_Buf2, Buf1, v18) || v17 != 6) && *(int *)(a1 + 752) <= 0 && *(_DWORD *)(a1 + 744) != 4; /*0x3b2a07*/
  if ( v16 > 0xF ) /*0x3b2a0e*/
  {
    v20 = v15; /*0x3b2a14*/
    if ( v16 + 1 >= 0x1000 ) /*0x3b2a1e*/
    {
      v15 = (char *)*((_QWORD *)v15 - 1); /*0x3b2a24*/
      if ( (unsigned __int64)(v20 - v15 - 8) > 0x1F ) /*0x3b2a33*/
        invoke_watson(0, 0, 0, 0, 0); /*0x3b2a44*/
    }
    j_j_free(v15); /*0x3b2a4e*/
  }
  if ( v19 ) /*0x3b2a57*/
  {
    *(_BYTE *)(a1 + 756) = 0; /*0x3b2a5d*/
    *(_DWORD *)(a1 + 752) = (int)(float)((float)((float)((float)rand() / 32767.0) * 5.0) + 10.0); /*0x3b2a8d*/
    *(_OWORD *)Buf1 = 0; /*0x3b2a96*/
    v43 = 6; /*0x3b2a9f*/
    v44 = 15; /*0x3b2aa3*/
    strcpy((char *)Buf1, "idle03"); /*0x3b2ab1*/
    sub_86290(*(_QWORD *)(a1 + 664)); /*0x3b2ad2*/
    sub_3E4F0(&Buf2, Buf1); /*0x3b2adf*/
    SpriteAnimationManager_runAnimation(*(_QWORD *)(a1 + 664), v21); /*0x3b2aee*/
    return sub_3C310(Buf1); /*0x3b2ee2*/
  }
  *(_OWORD *)Buf1 = 0; /*0x3b2afc*/
  v43 = 6; /*0x3b2b05*/
  v44 = 15; /*0x3b2b09*/
  strcpy((char *)Buf1, "idle00"); /*0x3b2b17*/
  Buf2 = 0; /*0x3b2b30*/
  v46 = 0; /*0x3b2b34*/
  v47 = 0; /*0x3b2b38*/
  v22 = -1; /*0x3b2b3c*/
  do /*0x3b2b43*/
    ++v22; /*0x3b2b40*/
  while ( *(_BYTE *)(a2 + v22) ); /*0x3b2b43*/
  sub_3C230(&Buf2); /*0x3b2b51*/
  v23 = &Buf2; /*0x3b2b56*/
  v24 = (char *)Buf2; /*0x3b2b5a*/
  v25 = v47; /*0x3b2b5e*/
  if ( v47 > 0xF ) /*0x3b2b66*/
    v23 = (__int128 *)Buf2; /*0x3b2b66*/
  v26 = v46; /*0x3b2b6a*/
  v27 = v46; /*0x3b2b6e*/
  if ( v46 > 6 ) /*0x3b2b7a*/
    v27 = 6; /*0x3b2b7a*/
  v28 = !memcmp(v23, Buf1, v27) && v26 == 6 && *(int *)(a1 + 748) <= 0; /*0x3b2b99*/
  if ( v25 > 0xF ) /*0x3b2ba5*/
  {
    v29 = v24; /*0x3b2bab*/
    if ( v25 + 1 >= 0x1000 ) /*0x3b2bb5*/
    {
      v24 = (char *)*((_QWORD *)v24 - 1); /*0x3b2bbb*/
      if ( (unsigned __int64)(v29 - v24 - 8) > 0x1F ) /*0x3b2bca*/
        invoke_watson(0, 0, 0, 0, 0); /*0x3b2bdb*/
    }
    j_j_free(v24); /*0x3b2be5*/
  }
  if ( !v28 ) /*0x3b2bee*/
  {
    *(_OWORD *)Buf1 = 0; /*0x3b2d1f*/
    v43 = 6; /*0x3b2d29*/
    v44 = 15; /*0x3b2d2d*/
    strcpy((char *)Buf1, "idle03"); /*0x3b2d3b*/
    Buf2 = 0; /*0x3b2d54*/
    v46 = 0; /*0x3b2d58*/
    v47 = 0; /*0x3b2d5c*/
    do /*0x3b2d63*/
      ++v4; /*0x3b2d60*/
    while ( *(_BYTE *)(a2 + v4) ); /*0x3b2d63*/
    sub_3C230(&Buf2); /*0x3b2d73*/
    v33 = &Buf2; /*0x3b2d78*/
    v34 = (char *)Buf2; /*0x3b2d7c*/
    v35 = v47; /*0x3b2d80*/
    if ( v47 > 0xF ) /*0x3b2d88*/
      v33 = (__int128 *)Buf2; /*0x3b2d88*/
    v36 = v46; /*0x3b2d8c*/
    v37 = v46; /*0x3b2d90*/
    if ( v46 > 6 ) /*0x3b2d97*/
      v37 = 6; /*0x3b2d97*/
    v38 = !memcmp(v33, Buf1, v37) && v36 == 6 && !*(_BYTE *)(a1 + 756) && (float)((float)rand() / 32767.0) > 0.60000002; /*0x3b2dd4*/
    if ( v35 > 0xF ) /*0x3b2de0*/
    {
      v39 = v34; /*0x3b2de6*/
      if ( v35 + 1 >= 0x1000 ) /*0x3b2df0*/
      {
        v34 = (char *)*((_QWORD *)v34 - 1); /*0x3b2df6*/
        if ( (unsigned __int64)(v39 - v34 - 8) > 0x1F ) /*0x3b2e05*/
          invoke_watson(0, 0, 0, 0, 0); /*0x3b2e16*/
      }
      j_j_free(v34); /*0x3b2e20*/
    }
    v43 = 6; /*0x3b2e29*/
    v44 = 15; /*0x3b2e2d*/
    *(_OWORD *)Buf1 = 0; /*0x3b2e35*/
    BYTE6(Buf1[0]) = 0; /*0x3b2e39*/
    if ( v38 ) /*0x3b2e40*/
    {
      qmemcpy(Buf1, "idle03", 6); /*0x3b2e48*/
      sub_86290(*(_QWORD *)(a1 + 664)); /*0x3b2e65*/
      sub_3E4F0(&Buf2, Buf1); /*0x3b2e72*/
      SpriteAnimationManager_runAnimation(*(_QWORD *)(a1 + 664), v40); /*0x3b2e81*/
      result = sub_3C310(Buf1); /*0x3b2e8b*/
      *(_BYTE *)(a1 + 756) = 1; /*0x3b2e90*/
      return result; /*0x3b2e97*/
    }
    qmemcpy(Buf1, "idle00", 6); /*0x3b2e9f*/
    sub_86290(*(_QWORD *)(a1 + 664)); /*0x3b2ebc*/
    sub_3E4F0(&Buf2, Buf1); /*0x3b2ec9*/
    SpriteAnimationManager_runAnimation(*(_QWORD *)(a1 + 664), v41); /*0x3b2ed8*/
    return sub_3C310(Buf1); /*0x3b2ed8*/
  }
  if ( (float)((float)rand() / 32767.0) <= 0.89999998 || *(_DWORD *)(a1 + 744) == 4 ) /*0x3b2c19*/
  {
    *(_OWORD *)Buf1 = 0; /*0x3b2c81*/
    v43 = 6; /*0x3b2c8a*/
    v44 = 15; /*0x3b2c8e*/
    strcpy((char *)Buf1, "idle02"); /*0x3b2c9c*/
    sub_86290(*(_QWORD *)(a1 + 664)); /*0x3b2cbd*/
    sub_3E4F0(&Buf2, Buf1); /*0x3b2cca*/
    SpriteAnimationManager_runAnimation(*(_QWORD *)(a1 + 664), v31); /*0x3b2cd9*/
  }
  else
  {
    *(_OWORD *)Buf1 = 0; /*0x3b2c1e*/
    v43 = 6; /*0x3b2c27*/
    v44 = 15; /*0x3b2c2b*/
    strcpy((char *)Buf1, "idle01"); /*0x3b2c39*/
    sub_86290(*(_QWORD *)(a1 + 664)); /*0x3b2c5a*/
    sub_3E4F0(&Buf2, Buf1); /*0x3b2c67*/
    SpriteAnimationManager_runAnimation(*(_QWORD *)(a1 + 664), v30); /*0x3b2c76*/
  }
  sub_3C310(Buf1); /*0x3b2ce3*/
  *(_QWORD *)&result = COERCE_UNSIGNED_INT((float)rand()); /*0x3b2cf2*/
  *(float *)&result = (float)((float)(*(float *)&result / 32767.0) * 3.0) + 2.0; /*0x3b2d05*/
  *(_DWORD *)(a1 + 748) = (int)*(float *)&result; /*0x3b2d11*/
  return result; /*0x3b2ee7*/
}
