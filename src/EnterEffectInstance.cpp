#include <Geode/binding/EnterEffectInstance.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x206880
// Method: EnterEffectInstance::loadValuesFromObject
double __fastcall EnterEffectInstance_loadValuesFromObject(__int64 a1, __int64 a2)
{
  *(float *)(a1 + 16) = (float)*(int *)(a2 + 1860); /*0x20688b*/
  *(float *)(a1 + 20) = (float)*(int *)(a2 + 1864); /*0x20689b*/
  *(float *)(a1 + 24) = (float)*(int *)(a2 + 1868); /*0x2068ab*/
  *(float *)(a1 + 28) = (float)*(int *)(a2 + 1872); /*0x2068bb*/
  *(float *)(a1 + 32) = (float)*(int *)(a2 + 1876); /*0x2068cb*/
  *(float *)(a1 + 36) = (float)*(int *)(a2 + 1880); /*0x2068db*/
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 1992); /*0x2068e6*/
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 1996); /*0x2068ef*/
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 2032); /*0x2068f8*/
  *(float *)(a1 + 52) = (float)*(int *)(a2 + 1884); /*0x206906*/
  *(float *)(a1 + 56) = (float)*(int *)(a2 + 1888); /*0x206916*/
  *(float *)(a1 + 60) = (float)*(int *)(a2 + 1908); /*0x206926*/
  *(float *)(a1 + 64) = (float)*(int *)(a2 + 1912); /*0x206936*/
  *(float *)(a1 + 68) = (float)*(int *)(a2 + 1960); /*0x206946*/
  *(float *)(a1 + 72) = (float)*(int *)(a2 + 1964); /*0x206956*/
  *(float *)(a1 + 76) = (float)*(int *)(a2 + 1968); /*0x206966*/
  *(float *)(a1 + 80) = (float)*(int *)(a2 + 1972); /*0x206976*/
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 1892); /*0x206981*/
  *(_DWORD *)(a1 + 92) = *(_DWORD *)(a2 + 1896); /*0x20698a*/
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 1900); /*0x206993*/
  *(_DWORD *)(a1 + 100) = *(_DWORD *)(a2 + 1904); /*0x20699c*/
  *(_DWORD *)(a1 + 104) = *(_DWORD *)(a2 + 2012); /*0x2069a5*/
  *(_DWORD *)(a1 + 108) = *(_DWORD *)(a2 + 2016); /*0x2069ae*/
  *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 2000); /*0x2069b7*/
  *(_DWORD *)(a1 + 116) = *(_DWORD *)(a2 + 2004); /*0x2069c0*/
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(a2 + 2020); /*0x2069c9*/
  *(_DWORD *)(a1 + 124) = *(_DWORD *)(a2 + 2024); /*0x2069d2*/
  *(_DWORD *)(a1 + 84) = *(_DWORD *)(a2 + 1932); /*0x2069db*/
  *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 1628); /*0x2069e5*/
  *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 128); /*0x2069f2*/
  *(_DWORD *)(a1 + 148) = *(_DWORD *)(a1 + 132); /*0x2069fe*/
  *(_DWORD *)(a1 + 152) = *(_DWORD *)(a1 + 136); /*0x206a0a*/
  return sub_662D0(a1);
}

// [2/4] Address: 0x206a20
// Method: EnterEffectInstance::loadTransitions
__int64 __fastcall EnterEffectInstance_loadTransitions(int a1, __int64 a2, int a3, int a4)
{
  _DWORD *v4; // rsi
  _DWORD *v6; // rbp
  _DWORD *v8; // r14
  _DWORD *v9; // r15
  _DWORD *v10; // r12
  _DWORD *v11; // r13
  _DWORD *v12; // r12
  _DWORD *v13; // r13
  _DWORD *v14; // r12
  _DWORD *v15; // r13
  _DWORD *v16; // r12
  _DWORD *v17; // r13
  _DWORD *v18; // r12
  _DWORD *v19; // r13
  _DWORD *v20; // r12
  _DWORD *v21; // r13
  _DWORD *v22; // r12
  _DWORD *v23; // r13
  _DWORD *v24; // r12
  _DWORD *v25; // r13
  __int64 result; // rax
  _DWORD *v27; // r12
  _DWORD *v28; // r13
  int v29; // r8d
  int v30; // r9d
  int v31; // r8d
  int v32; // r9d
  _DWORD *v33; // [rsp+98h] [rbp+10h]
  _DWORD *v34; // [rsp+98h] [rbp+10h]
  _DWORD *v35; // [rsp+98h] [rbp+10h]
  _DWORD *v36; // [rsp+98h] [rbp+10h]
  _DWORD *v37; // [rsp+98h] [rbp+10h]
  _DWORD *v38; // [rsp+98h] [rbp+10h]
  _DWORD *v39; // [rsp+98h] [rbp+10h]
  _DWORD *v40; // [rsp+98h] [rbp+10h]
  _DWORD *v41; // [rsp+98h] [rbp+10h]
  _DWORD *v42; // [rsp+A8h] [rbp+20h]
  _DWORD *v43; // [rsp+A8h] [rbp+20h]
  _DWORD *v44; // [rsp+A8h] [rbp+20h]
  _DWORD *v45; // [rsp+A8h] [rbp+20h]
  _DWORD *v46; // [rsp+A8h] [rbp+20h]
  _DWORD *v47; // [rsp+A8h] [rbp+20h]
  _DWORD *v48; // [rsp+A8h] [rbp+20h]
  _DWORD *v49; // [rsp+A8h] [rbp+20h]
  _DWORD *v50; // [rsp+A8h] [rbp+20h]

  v4 = (_DWORD *)(a2 + 1944); /*0x206a3a*/
  v6 = (_DWORD *)(a2 + 1940); /*0x206a49*/
  v8 = (_DWORD *)(a2 + 1936); /*0x206a53*/
  v9 = (_DWORD *)(a2 + 1468); /*0x206a5a*/
  if ( *(_DWORD *)(a2 + 1860) != -99 ) /*0x206a64*/
    sub_207600(a1, 0, a3, a4, *v9, *v8, *v6, *v4); /*0x206a97*/
  if ( *(_DWORD *)(a2 + 1864) != -99 ) /*0x206aa5*/
    sub_207600(a1, 1, a3, a4, *v9, *v8, *v6, *v4); /*0x206ade*/
  v10 = v4; /*0x206ae9*/
  v33 = v8; /*0x206aec*/
  v11 = v6; /*0x206af4*/
  v42 = v9; /*0x206af7*/
  if ( *(_DWORD *)(a2 + 1868) != -99 ) /*0x206b02*/
  {
    sub_207600(a1, 2, a3, a4, *v9, *v8, *v6, *v4); /*0x206b3b*/
    v33 = (_DWORD *)(a2 + 1936); /*0x206b47*/
    v10 = (_DWORD *)(a2 + 1944); /*0x206b4f*/
    v42 = (_DWORD *)(a2 + 1468); /*0x206b5d*/
    v11 = (_DWORD *)(a2 + 1940); /*0x206b65*/
  }
  if ( *(_DWORD *)(a2 + 1872) != -99 ) /*0x206b75*/
  {
    sub_207600(a1, 3, a3, a4, *v9, *v8, *v6, *v4); /*0x206bae*/
    v8 = v33; /*0x206bb3*/
    v4 = v10; /*0x206bbb*/
    v9 = v42; /*0x206bbe*/
    v6 = v11; /*0x206bc6*/
  }
  if ( *(float *)(a2 + 1992) != -99.0 ) /*0x206bde*/
    sub_207600(a1, 4, a3, a4, *v9, *v8, *v6, *v4); /*0x206c10*/
  v12 = v4; /*0x206c1d*/
  v13 = v6; /*0x206c23*/
  v34 = v8; /*0x206c26*/
  v43 = v9; /*0x206c2e*/
  if ( *(float *)(a2 + 1996) != -99.0 ) /*0x206c38*/
  {
    sub_207600(a1, 5, a3, a4, *v9, *v8, *v6, *v4); /*0x206c6a*/
    v34 = (_DWORD *)(a2 + 1936); /*0x206c76*/
    v12 = (_DWORD *)(a2 + 1944); /*0x206c7e*/
    v43 = (_DWORD *)(a2 + 1468); /*0x206c8c*/
    v13 = (_DWORD *)(a2 + 1940); /*0x206c94*/
  }
  if ( *(float *)(a2 + 2032) != -99.0 ) /*0x206ca8*/
  {
    sub_207600(a1, 6, a3, a4, *v9, *v8, *v6, *v4); /*0x206cda*/
    v8 = v34; /*0x206cdf*/
    v4 = v12; /*0x206ce7*/
    v9 = v43; /*0x206cea*/
    v6 = v13; /*0x206cf2*/
  }
  if ( *(_DWORD *)(a2 + 1884) != -99 ) /*0x206cfe*/
    sub_207600(a1, 7, a3, a4, *v9, *v8, *v6, *v4); /*0x206d37*/
  v14 = v4; /*0x206d42*/
  v35 = v8; /*0x206d45*/
  v15 = v6; /*0x206d4d*/
  v44 = v9; /*0x206d50*/
  if ( *(_DWORD *)(a2 + 1888) != -99 ) /*0x206d5b*/
  {
    sub_207600(a1, 8, a3, a4, *v9, *v8, *v6, *v4); /*0x206d94*/
    v35 = (_DWORD *)(a2 + 1936); /*0x206da0*/
    v14 = (_DWORD *)(a2 + 1944); /*0x206da8*/
    v44 = (_DWORD *)(a2 + 1468); /*0x206db6*/
    v15 = (_DWORD *)(a2 + 1940); /*0x206dbe*/
  }
  if ( *(_DWORD *)(a2 + 1908) != -99 ) /*0x206dce*/
  {
    sub_207600(a1, 9, a3, a4, *v9, *v8, *v6, *v4); /*0x206e07*/
    v8 = v35; /*0x206e0c*/
    v4 = v14; /*0x206e14*/
    v9 = v44; /*0x206e17*/
    v6 = v15; /*0x206e1f*/
  }
  if ( *(_DWORD *)(a2 + 1912) != -99 ) /*0x206e2b*/
    sub_207600(a1, 10, a3, a4, *v9, *v8, *v6, *v4); /*0x206e64*/
  v16 = v4; /*0x206e6f*/
  v36 = v8; /*0x206e72*/
  v17 = v6; /*0x206e7a*/
  v45 = v9; /*0x206e7d*/
  if ( *(_DWORD *)(a2 + 1960) != -99 ) /*0x206e88*/
  {
    sub_207600(a1, 11, a3, a4, *v9, *v8, *v6, *v4); /*0x206ec1*/
    v36 = (_DWORD *)(a2 + 1936); /*0x206ecd*/
    v16 = (_DWORD *)(a2 + 1944); /*0x206ed5*/
    v45 = (_DWORD *)(a2 + 1468); /*0x206ee3*/
    v17 = (_DWORD *)(a2 + 1940); /*0x206eeb*/
  }
  if ( *(_DWORD *)(a2 + 1964) != -99 ) /*0x206efb*/
  {
    sub_207600(a1, 12, a3, a4, *v9, *v8, *v6, *v4); /*0x206f34*/
    v8 = v36; /*0x206f39*/
    v4 = v16; /*0x206f41*/
    v9 = v45; /*0x206f44*/
    v6 = v17; /*0x206f4c*/
  }
  if ( *(_DWORD *)(a2 + 1968) != -99 ) /*0x206f58*/
    sub_207600(a1, 13, a3, a4, *v9, *v8, *v6, *v4); /*0x206f91*/
  v18 = v4; /*0x206f9c*/
  v37 = v8; /*0x206f9f*/
  v19 = v6; /*0x206fa7*/
  v46 = v9; /*0x206faa*/
  if ( *(_DWORD *)(a2 + 1972) != -99 ) /*0x206fb5*/
  {
    sub_207600(a1, 14, a3, a4, *v9, *v8, *v6, *v4); /*0x206fee*/
    v37 = (_DWORD *)(a2 + 1936); /*0x206ffa*/
    v18 = (_DWORD *)(a2 + 1944); /*0x207002*/
    v46 = (_DWORD *)(a2 + 1468); /*0x207010*/
    v19 = (_DWORD *)(a2 + 1940); /*0x207018*/
  }
  if ( *(float *)(a2 + 1892) != -99.0 ) /*0x20702c*/
  {
    sub_207600(a1, 15, a3, a4, *v9, *v8, *v6, *v4); /*0x20705e*/
    v8 = v37; /*0x207063*/
    v4 = v18; /*0x20706b*/
    v9 = v46; /*0x20706e*/
    v6 = v19; /*0x207076*/
  }
  if ( *(float *)(a2 + 1896) != -99.0 ) /*0x207086*/
    sub_207600(a1, 16, a3, a4, *v9, *v8, *v6, *v4); /*0x2070b8*/
  v20 = v4; /*0x2070c5*/
  v21 = v6; /*0x2070cb*/
  v38 = v8; /*0x2070ce*/
  v47 = v9; /*0x2070d6*/
  if ( *(float *)(a2 + 1900) != -99.0 ) /*0x2070e0*/
  {
    sub_207600(a1, 17, a3, a4, *v9, *v8, *v6, *v4); /*0x207112*/
    v38 = (_DWORD *)(a2 + 1936); /*0x20711e*/
    v20 = (_DWORD *)(a2 + 1944); /*0x207126*/
    v47 = (_DWORD *)(a2 + 1468); /*0x207134*/
    v21 = (_DWORD *)(a2 + 1940); /*0x20713c*/
  }
  if ( *(float *)(a2 + 1904) != -99.0 ) /*0x207150*/
  {
    sub_207600(a1, 18, a3, a4, *v9, *v8, *v6, *v4); /*0x207182*/
    v8 = v38; /*0x207187*/
    v4 = v20; /*0x20718f*/
    v9 = v47; /*0x207192*/
    v6 = v21; /*0x20719a*/
  }
  if ( *(float *)(a2 + 2012) != -99.0 ) /*0x2071aa*/
    sub_207600(a1, 19, a3, a4, *v9, *v8, *v6, *v4); /*0x2071dc*/
  v22 = v4; /*0x2071e9*/
  v23 = v6; /*0x2071ef*/
  v39 = v8; /*0x2071f2*/
  v48 = v9; /*0x2071fa*/
  if ( *(float *)(a2 + 2016) != -99.0 ) /*0x207204*/
  {
    sub_207600(a1, 20, a3, a4, *v9, *v8, *v6, *v4); /*0x207236*/
    v39 = (_DWORD *)(a2 + 1936); /*0x207242*/
    v22 = (_DWORD *)(a2 + 1944); /*0x20724a*/
    v48 = (_DWORD *)(a2 + 1468); /*0x207258*/
    v23 = (_DWORD *)(a2 + 1940); /*0x207260*/
  }
  if ( *(float *)(a2 + 2000) != -99.0 ) /*0x207274*/
  {
    sub_207600(a1, 21, a3, a4, *v9, *v8, *v6, *v4); /*0x2072a6*/
    v8 = v39; /*0x2072ab*/
    v4 = v22; /*0x2072b3*/
    v9 = v48; /*0x2072b6*/
    v6 = v23; /*0x2072be*/
  }
  if ( *(float *)(a2 + 2004) != -99.0 ) /*0x2072ce*/
    sub_207600(a1, 22, a3, a4, *v9, *v8, *v6, *v4); /*0x207300*/
  v24 = v4; /*0x20730d*/
  v25 = v6; /*0x207313*/
  v40 = v8; /*0x207316*/
  v49 = v9; /*0x20731e*/
  if ( *(float *)(a2 + 2020) != -99.0 ) /*0x207328*/
  {
    sub_207600(a1, 23, a3, a4, *v9, *v8, *v6, *v4); /*0x20735a*/
    v40 = (_DWORD *)(a2 + 1936); /*0x207366*/
    v24 = (_DWORD *)(a2 + 1944); /*0x20736e*/
    v49 = (_DWORD *)(a2 + 1468); /*0x20737c*/
    v25 = (_DWORD *)(a2 + 1940); /*0x207384*/
  }
  if ( *(float *)(a2 + 2024) != -99.0 ) /*0x207398*/
  {
    sub_207600(a1, 24, a3, a4, *v9, *v8, *v6, *v4); /*0x2073ca*/
    v8 = v40; /*0x2073cf*/
    v4 = v24; /*0x2073d7*/
    v9 = v49; /*0x2073da*/
    v6 = v25; /*0x2073e2*/
  }
  if ( *(_DWORD *)(a2 + 1876) != -99 ) /*0x2073ee*/
    sub_207600(a1, 25, a3, a4, *v9, *v8, *v6, *v4); /*0x207427*/
  result = *(unsigned int *)(a2 + 1880); /*0x20742c*/
  v27 = v4; /*0x207432*/
  v41 = v8; /*0x207435*/
  v28 = v6; /*0x20743d*/
  v50 = v9; /*0x207440*/
  if ( (_DWORD)result != -99 ) /*0x20744b*/
  {
    sub_207600(a1, 26, a3, a4, *v9, *v8, *v6, *v4); /*0x207484*/
    v41 = (_DWORD *)(a2 + 1936); /*0x207490*/
    v27 = (_DWORD *)(a2 + 1944); /*0x207498*/
    result = a2 + 1468; /*0x20749f*/
    v50 = (_DWORD *)(a2 + 1468); /*0x2074a6*/
    v28 = (_DWORD *)(a2 + 1940); /*0x2074ae*/
  }
  if ( *(float *)(a2 + 1932) != -99.0 ) /*0x2074c2*/
  {
    result = sub_207600(a1, 27, a3, a4, *v9, *v8, *v6, *v4); /*0x2074f4*/
    v8 = v41; /*0x2074f9*/
    v4 = v27; /*0x207501*/
    v9 = v50; /*0x207504*/
    v6 = v28; /*0x20750c*/
  }
  if ( *(_BYTE *)(a2 + 2029) ) /*0x20750f*/
  {
    sub_207600(a1, 28, a3, a4, *v9, *v8, *v6, *v4); /*0x207556*/
    sub_207600(a1, 29, v29, v30, *v9, *v8, *v6, *v4); /*0x207596*/
    return sub_207600(a1, 30, v31, v32, *v9, *v8, *v6, *v4); /*0x2075d6*/
  }
  return result; /*0x2075db*/
}

// [3/4] Address: 0x207750
// Method: EnterEffectInstance::updateTransitions
__int64 __fastcall EnterEffectInstance_updateTransitions(__int64 **a1, float a2)
{
  __int64 *v3; // rbx
  float v4; // xmm3_4
  __int64 **v5; // rcx
  __int64 *v6; // rdx
  __int64 *k; // rax
  __int64 *m; // rcx
  __int64 v9; // rcx
  __int64 **v10; // rcx
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 result; // rax

  v3 = (__int64 *)**a1; /*0x207770*/
  while ( v3 != *a1 ) /*0x207776*/
  {
    v4 = a2 + *((float *)v3 + 12); /*0x2077b3*/
    *((float *)v3 + 12) = v4; /*0x2077b8*/
    if ( v4 < *((float *)v3 + 11) ) /*0x2077c5*/
    {
      v9 = *((unsigned int *)v3 + 15); /*0x20783c*/
      if ( (_DWORD)v9 == -2 ) /*0x207846*/
        sub_720C0(v9, *((unsigned int *)v3 + 13)); /*0x207858*/
      EnterEffectInstance_setValue(a1, *((unsigned int *)v3 + 8)); /*0x2078c3*/
      v10 = (__int64 **)v3[2]; /*0x2078c8*/
      if ( *((_BYTE *)v10 + 25) ) /*0x2078cc*/
      {
        for ( i = (__int64 *)v3[1]; !*((_BYTE *)i + 25); i = (__int64 *)i[1] ) /*0x2078d6*/
        {
          if ( v3 != (__int64 *)i[2] ) /*0x2078e4*/
            break; /*0x2078e4*/
          v3 = i; /*0x2078e6*/
        }
        v3 = i; /*0x2078f3*/
      }
      else
      {
        v3 = (__int64 *)v3[2]; /*0x2078f8*/
        for ( j = *v10; !*((_BYTE *)j + 25); j = (__int64 *)*j ) /*0x2078fe*/
          v3 = j; /*0x207913*/
      }
    }
    else
    {
      EnterEffectInstance_setValue(a1, *((unsigned int *)v3 + 8)); /*0x2077d2*/
      v5 = (__int64 **)v3[2]; /*0x2077d7*/
      v6 = v3; /*0x2077db*/
      if ( *((_BYTE *)v5 + 25) ) /*0x2077de*/
      {
        for ( k = (__int64 *)v3[1]; !*((_BYTE *)k + 25); k = (__int64 *)k[1] ) /*0x2077e8*/
        {
          if ( v3 != (__int64 *)k[2] ) /*0x2077f4*/
            break; /*0x2077f4*/
          v3 = k; /*0x2077f6*/
        }
        v3 = k; /*0x207806*/
        sub_68550(a1, v6); /*0x207809*/
      }
      else
      {
        v3 = (__int64 *)v3[2]; /*0x207813*/
        for ( m = *v5; !*((_BYTE *)m + 25); m = (__int64 *)*m ) /*0x207819*/
          v3 = m; /*0x207823*/
        sub_68550(a1, v6); /*0x207832*/
      }
    }
  }
  *((_DWORD *)a1 + 32) = *((_DWORD *)a1 + 36); /*0x20794e*/
  *((_DWORD *)a1 + 33) = *((_DWORD *)a1 + 37); /*0x20795a*/
  result = *((unsigned int *)a1 + 38); /*0x207960*/
  *((_DWORD *)a1 + 34) = result; /*0x207966*/
  return result; /*0x20793f*/
}

// [4/4] Address: 0x207980
// Method: EnterEffectInstance::setValue
__int64 __fastcall EnterEffectInstance_setValue(float *a1, int a2, float a3)
{
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // kr08_8

  v5 = v3; /*0x207989*/
  result = a2; /*0x207989*/
  switch ( a2 ) /*0x20799e*/
  {
    case 0: /*0x20799e*/
      a1[4] = a3; /*0x2079a0*/
      break; /*0x2079a5*/
    case 1: /*0x20799e*/
      a1[5] = a3; /*0x2079a6*/
      break; /*0x2079ab*/
    case 2: /*0x20799e*/
      a1[6] = a3; /*0x2079ac*/
      break; /*0x2079b1*/
    case 3: /*0x20799e*/
      a1[7] = a3; /*0x2079b2*/
      break; /*0x2079b7*/
    case 4: /*0x20799e*/
      a1[10] = a3; /*0x2079b8*/
      break; /*0x2079bd*/
    case 5: /*0x20799e*/
      a1[11] = a3; /*0x2079be*/
      break; /*0x2079c3*/
    case 6: /*0x20799e*/
      a1[12] = a3; /*0x2079c4*/
      break; /*0x2079c9*/
    case 7: /*0x20799e*/
      a1[13] = a3; /*0x2079ca*/
      break; /*0x2079cf*/
    case 8: /*0x20799e*/
      a1[14] = a3; /*0x2079d0*/
      break; /*0x2079d5*/
    case 9: /*0x20799e*/
      a1[15] = a3; /*0x2079d6*/
      break; /*0x2079db*/
    case 10: /*0x20799e*/
      a1[16] = a3; /*0x2079dc*/
      break; /*0x2079e1*/
    case 11: /*0x20799e*/
      a1[17] = a3; /*0x2079e2*/
      break; /*0x2079e7*/
    case 12: /*0x20799e*/
      a1[18] = a3; /*0x2079e8*/
      break; /*0x2079ed*/
    case 13: /*0x20799e*/
      a1[19] = a3; /*0x2079ee*/
      break; /*0x2079f3*/
    case 14: /*0x20799e*/
      a1[20] = a3; /*0x2079f4*/
      break; /*0x2079f9*/
    case 15: /*0x20799e*/
      a1[22] = a3; /*0x2079fa*/
      break; /*0x2079ff*/
    case 16: /*0x20799e*/
      a1[23] = a3; /*0x207a00*/
      break; /*0x207a05*/
    case 17: /*0x20799e*/
      a1[24] = a3; /*0x207a06*/
      break; /*0x207a0b*/
    case 18: /*0x20799e*/
      a1[25] = a3; /*0x207a0c*/
      break; /*0x207a11*/
    case 19: /*0x20799e*/
      a1[26] = a3; /*0x207a12*/
      break; /*0x207a17*/
    case 20: /*0x20799e*/
      a1[27] = a3; /*0x207a18*/
      break; /*0x207a1d*/
    case 21: /*0x20799e*/
      a1[28] = a3; /*0x207a1e*/
      break; /*0x207a23*/
    case 22: /*0x20799e*/
      a1[29] = a3; /*0x207a24*/
      break; /*0x207a29*/
    case 23: /*0x20799e*/
      a1[30] = a3; /*0x207a2a*/
      break; /*0x207a2f*/
    case 24: /*0x20799e*/
      a1[31] = a3; /*0x207a30*/
      break; /*0x207a35*/
    case 25: /*0x20799e*/
      a1[8] = a3; /*0x207a36*/
      break; /*0x207a3b*/
    case 26: /*0x20799e*/
      a1[9] = a3; /*0x207a3c*/
      break; /*0x207a41*/
    case 27: /*0x20799e*/
      a1[21] = a3; /*0x207a42*/
      break; /*0x207a47*/
    case 28: /*0x20799e*/
      a1[36] = a3; /*0x207a48*/
      break; /*0x207a50*/
    case 29: /*0x20799e*/
      a1[37] = a3; /*0x207a51*/
      break; /*0x207a59*/
    case 30: /*0x20799e*/
      a1[38] = a3; /*0x207a5a*/
      break; /*0x207a5a*/
    default:
      result = v5; /*0xf1c0000000000004*/
      break; /*0xf1c0000000000004*/
  }
  return result; /*0x2079a5*/
}
