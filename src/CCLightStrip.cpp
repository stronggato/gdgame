#include <Geode/binding/CCLightStrip.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x469a0
// Method: CCLightStrip::draw
void __fastcall CCLightStrip_draw(__int64 a1)
{
  unsigned int v2; // r8d
  float v3; // xmm6_4
  float v4; // xmm1_4
  unsigned int v5; // r8d
  __int16 v6; // [rsp+20h] [rbp-78h]
  float v7[4]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v8[8]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v9[8]; // [rsp+48h] [rbp-50h] BYREF
  _BYTE v10[8]; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v11[8]; // [rsp+58h] [rbp-40h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 344LL))(a1) ) /*0x469be*/
  {
    cocos2d::ccGLBlendFunc((cocos2d *)((char *)&loc_300 + 2), 1u, v2); /*0x469e3*/
    cocos2d::ccDrawColor4B( /*0x46a08*/
      (cocos2d *)*(unsigned __int8 *)(a1 + 336),
      *(_BYTE *)(a1 + 337),
      *(_BYTE *)(a1 + 338),
      (int)*(float *)(a1 + 340));
    v3 = (float)((float)(*(float *)(a1 + 344) - *(float *)(a1 + 320)) * 0.25) + *(float *)(a1 + 320); /*0x46a3a*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v8, (float)-v3 * 0.5, 0.0); /*0x46a4c*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v9, v3 * 0.5, 0.0); /*0x46a61*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v10, *(float *)(a1 + 344) * 0.5, *(float *)(a1 + 348)); /*0x46a80*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v11, (float)-*(float *)(a1 + 344) * 0.5, *(float *)(a1 + 348)); /*0x46aa6*/
    v6 = *(_WORD *)(a1 + 336); /*0x46ac5*/
    v7[0] = (float)(unsigned __int8)v6 / 255.0; /*0x46ae2*/
    v4 = (float)*(unsigned __int8 *)(a1 + 338); /*0x46afe*/
    v7[1] = (float)HIBYTE(v6) / 255.0; /*0x46b01*/
    v7[3] = *(float *)(a1 + 340) / 255.0; /*0x46b17*/
    v7[2] = v4 / 255.0; /*0x46b1d*/
    cocos2d::ccDrawSolidPoly(v8, 4, v7); /*0x46b23*/
    cocos2d::ccGLBlendFunc((cocos2d *)((char *)sub_0 + 1), 0x303u, v5); /*0x46b33*/
  }
}

// [2/2] Address: 0x46b60
// Method: CCLightStrip::updateTweenAction
// Hidden C++ exception states: #wind=1
void __fastcall CCLightStrip_updateTweenAction(float *a1, float a2, __int64 a3)
{
  __int64 v5; // r8
  void **v6; // rcx
  char *v7; // rsi
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r14
  size_t v10; // r8
  int v11; // edi
  char *v12; // rax
  __int64 v13; // r8
  void **v14; // rcx
  char *v15; // rsi
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // r14
  size_t v18; // r8
  int v19; // edi
  char *v20; // rax
  __int64 v21; // r8
  void **v22; // rcx
  char *v23; // rdi
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // rsi
  size_t v26; // r8
  int v27; // ebx
  char *v28; // rax
  __int128 Buf2; // [rsp+30h] [rbp-39h] BYREF
  __int64 v30; // [rsp+40h] [rbp-29h]
  __int64 v31; // [rsp+48h] [rbp-21h]
  void *Buf1[2]; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int64 v33; // [rsp+60h] [rbp-9h]
  unsigned __int64 v34; // [rsp+68h] [rbp-1h]

  Buf2 = 0; /*0x46b9e*/
  v30 = 6; /*0x46ba7*/
  v31 = 15; /*0x46bab*/
  strcpy((char *)&Buf2, "height"); /*0x46bb9*/
  *(_OWORD *)Buf1 = 0; /*0x46bcb*/
  v33 = 0; /*0x46bd2*/
  v34 = 0; /*0x46bd6*/
  v5 = -1; /*0x46bda*/
  do /*0x46be4*/
    ++v5; /*0x46be1*/
  while ( *(_BYTE *)(a3 + v5) ); /*0x46be4*/
  sub_3C230(Buf1); /*0x46bf1*/
  v6 = Buf1; /*0x46bf6*/
  v7 = (char *)Buf1[0]; /*0x46bfa*/
  v8 = v34; /*0x46bfe*/
  if ( v34 > 0xF ) /*0x46c06*/
    v6 = (void **)Buf1[0]; /*0x46c06*/
  v9 = v33; /*0x46c0a*/
  v10 = v33; /*0x46c0e*/
  if ( v33 > 6 ) /*0x46c15*/
    v10 = 6; /*0x46c15*/
  v11 = memcmp(v6, &Buf2, v10); /*0x46c22*/
  if ( !v11 ) /*0x46c26*/
  {
    if ( v9 >= 6 ) /*0x46c2c*/
      v11 = v9 > 6; /*0x46c38*/
    else
      v11 = -1; /*0x46c2e*/
  }
  if ( v8 > 0xF ) /*0x46c40*/
  {
    v12 = v7; /*0x46c46*/
    if ( v8 + 1 >= 0x1000 ) /*0x46c50*/
    {
      v7 = (char *)*((_QWORD *)v7 - 1); /*0x46c56*/
      if ( (unsigned __int64)(v12 - v7 - 8) > 0x1F ) /*0x46c65*/
        invoke_watson(0, 0, 0, 0, 0); /*0x46c76*/
    }
    j_j_free(v7); /*0x46c80*/
  }
  if ( v11 ) /*0x46c88*/
  {
    Buf2 = 0; /*0x46c9c*/
    v30 = 5; /*0x46ca5*/
    v31 = 15; /*0x46ca9*/
    LODWORD(Buf2) = *(_DWORD *)"width"; /*0x46cb7*/
    WORD2(Buf2) = (unsigned __int8)aWidth[4]; /*0x46cc1*/
    *(_OWORD *)Buf1 = 0; /*0x46cc8*/
    v33 = 0; /*0x46ccc*/
    v34 = 0; /*0x46cd0*/
    v13 = -1; /*0x46cd4*/
    do /*0x46ce3*/
      ++v13; /*0x46ce0*/
    while ( *(_BYTE *)(a3 + v13) ); /*0x46ce3*/
    sub_3C230(Buf1); /*0x46cf1*/
    v14 = Buf1; /*0x46cf6*/
    v15 = (char *)Buf1[0]; /*0x46cfa*/
    v16 = v34; /*0x46cfe*/
    if ( v34 > 0xF ) /*0x46d06*/
      v14 = (void **)Buf1[0]; /*0x46d06*/
    v17 = v33; /*0x46d0a*/
    v18 = v33; /*0x46d0e*/
    if ( v33 > 5 ) /*0x46d15*/
      v18 = 5; /*0x46d15*/
    v19 = memcmp(v14, &Buf2, v18); /*0x46d22*/
    if ( !v19 ) /*0x46d26*/
    {
      if ( v17 >= 5 ) /*0x46d2c*/
        v19 = v17 > 5; /*0x46d38*/
      else
        v19 = -1; /*0x46d2e*/
    }
    if ( v16 > 0xF ) /*0x46d40*/
    {
      v20 = v15; /*0x46d46*/
      if ( v16 + 1 >= 0x1000 ) /*0x46d50*/
      {
        v15 = (char *)*((_QWORD *)v15 - 1); /*0x46d56*/
        if ( (unsigned __int64)(v20 - v15 - 8) > 0x1F ) /*0x46d65*/
          invoke_watson(0, 0, 0, 0, 0); /*0x46d76*/
      }
      j_j_free(v15); /*0x46d80*/
    }
    if ( v19 ) /*0x46d88*/
    {
      HIWORD(Buf2) = 0; /*0x46d9c*/
      v30 = 7; /*0x46da6*/
      v31 = 15; /*0x46daa*/
      qmemcpy(&Buf2, "opacit", 6); /*0x46db9*/
      *(_QWORD *)((char *)&Buf2 + 6) = (unsigned __int8)aOpacity[6]; /*0x46dce*/
      *(_OWORD *)Buf1 = 0; /*0x46dd5*/
      v33 = 0; /*0x46dd9*/
      v34 = 0; /*0x46ddd*/
      v21 = -1; /*0x46de1*/
      do /*0x46df3*/
        ++v21; /*0x46df0*/
      while ( *(_BYTE *)(a3 + v21) ); /*0x46df3*/
      sub_3C230(Buf1); /*0x46e01*/
      v22 = Buf1; /*0x46e06*/
      v23 = (char *)Buf1[0]; /*0x46e0a*/
      v24 = v34; /*0x46e0e*/
      if ( v34 > 0xF ) /*0x46e16*/
        v22 = (void **)Buf1[0]; /*0x46e16*/
      v25 = v33; /*0x46e1a*/
      v26 = v33; /*0x46e1e*/
      if ( v33 > 7 ) /*0x46e25*/
        v26 = 7; /*0x46e25*/
      v27 = memcmp(v22, &Buf2, v26); /*0x46e32*/
      if ( !v27 ) /*0x46e36*/
      {
        if ( v25 >= 7 ) /*0x46e3c*/
          v27 = v25 > 7; /*0x46e48*/
        else
          v27 = -1; /*0x46e3e*/
      }
      if ( v24 > 0xF ) /*0x46e4f*/
      {
        v28 = v23; /*0x46e55*/
        if ( v24 + 1 >= 0x1000 ) /*0x46e5f*/
        {
          v23 = (char *)*((_QWORD *)v23 - 1); /*0x46e65*/
          if ( (unsigned __int64)(v28 - v23 - 8) > 0x1F ) /*0x46e74*/
            invoke_watson(0, 0, 0, 0, 0); /*0x46e85*/
        }
        j_j_free(v23); /*0x46e8f*/
      }
      if ( !v27 ) /*0x46e97*/
        a1[85] = a2; /*0x46e99*/
    }
    else
    {
      a1[86] = a2; /*0x46d8a*/
    }
  }
  else
  {
    a1[87] = a2; /*0x46c8a*/
  }
}
