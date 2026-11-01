#include <Geode/binding/GJMapPack.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x268560
// Method: GJMapPack::init
__int64 __fastcall GJMapPack_init(__int64 a1)
{
  int v2; // eax

  sub_3F5A0((void *)(a1 + 344), &byte_6E86E0, 0); /*0x26857a*/
  v2 = dword_905FBC; /*0x26857f*/
  *(_DWORD *)(a1 + 416) = dword_905FBC; /*0x268585*/
  dword_905FBC = v2 + 1; /*0x26858d*/
  *(_QWORD *)(a1 + 320) = 0; /*0x268595*/
  *(_QWORD *)(a1 + 336) = 0; /*0x26859c*/
  *(_DWORD *)(a1 + 328) = 0; /*0x2685a3*/
  return 1; /*0x2685ab*/
}

// [2/3] Address: 0x2688a0
// Method: GJMapPack::completedMaps
// Hidden C++ exception states: #wind=2
__int64 __fastcall GJMapPack_completedMaps(__int64 a1)
{
  cocos2d::CCArray *v2; // rcx
  unsigned int v4; // ebx
  unsigned int v5; // edi
  unsigned int v6; // r14d
  cocos2d::CCString *v7; // rax
  unsigned int v8; // ebp
  __int64 v9; // rcx
  void *v10; // [rsp+40h] [rbp+8h]
  void *v11; // [rsp+48h] [rbp+10h]

  v2 = *(cocos2d::CCArray **)(a1 + 320); /*0x2688b5*/
  if ( !v2 ) /*0x2688bf*/
    return 0; /*0x2688c1*/
  v4 = 0; /*0x2688c8*/
  v5 = 0; /*0x2688ca*/
  if ( cocos2d::CCArray::count(v2) ) /*0x2688cc*/
  {
    do /*0x2689aa*/
    {
      v6 = v4; /*0x2688e0*/
      v7 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 320), v5); /*0x2688ec*/
      v8 = cocos2d::CCString::intValue(v7); /*0x2688fb*/
      v9 = qword_905FE0; /*0x2688fd*/
      if ( *(_BYTE *)(a1 + 420) ) /*0x268904*/
      {
        if ( !qword_905FE0 ) /*0x268910*/
        {
          v10 = operator new(0x3E8u); /*0x26891c*/
          qword_905FE0 = sub_2D2B40(v10); /*0x26892a*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x26893b*/
          v9 = qword_905FE0; /*0x26893d*/
        }
        ++v4; /*0x26894b*/
        if ( !(unsigned __int8)sub_2DE050(v9, v8) ) /*0x268946*/
          v4 = v6; /*0x26894f*/
      }
      else
      {
        if ( !qword_905FE0 ) /*0x268958*/
        {
          v11 = operator new(0x3E8u); /*0x268964*/
          qword_905FE0 = sub_2D2B40(v11); /*0x268972*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x268983*/
          v9 = qword_905FE0; /*0x268985*/
        }
        if ( (unsigned __int8)sub_2DDF10(v9, v8) ) /*0x26898e*/
          ++v4; /*0x268997*/
      }
      ++v5; /*0x268999*/
    }
    while ( v5 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 320)) ); /*0x2689aa*/
  }
  return v4; /*0x2689b2*/
}

// [3/3] Address: 0x3c1930
// Method: GJMapPack::parsePackColors
void __fastcall GJMapPack_parsePackColors(char *a1, char *a2, __int64 a3, __int64 a4)
{
  char *v6; // rdi
  char *v7; // r14
  char *v8; // rbp
  char *v9; // r15
  char *v10; // r13
  _DWORD *v11; // r12
  unsigned int v12; // r15d
  __int128 v13; // xmm1
  char *v14; // rsi
  __int128 v15; // xmm0
  __int64 v16; // r8
  _DWORD *v17; // rdi
  _DWORD *v18; // rcx
  __int64 v19; // rbp
  __int64 v20; // rsi
  char *v21; // rdi
  __int128 v22; // xmm1
  unsigned int v23; // eax
  __int128 v24; // xmm0
  char *v25; // rdi
  __int64 v26; // rsi
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  int v29; // eax
  unsigned int v30; // ebp
  char *i; // rdi
  char *v32; // [rsp+30h] [rbp-98h]
  char *v33; // [rsp+38h] [rbp-90h] BYREF
  char *v34; // [rsp+40h] [rbp-88h]
  unsigned int v35; // [rsp+48h] [rbp-80h] BYREF
  __int128 v36; // [rsp+50h] [rbp-78h] BYREF
  __int128 v37; // [rsp+60h] [rbp-68h]

  v32 = a2; /*0x3c1954*/
  v6 = a2; /*0x3c1962*/
  v7 = a1; /*0x3c1965*/
  if ( a2 - a1 < 1320 ) /*0x3c196e*/
  {
LABEL_7:
    if ( v7 != v6 ) /*0x3c1a2d*/
    {
      v10 = v7 + 40; /*0x3c1a3b*/
      if ( v7 + 40 != v6 ) /*0x3c1a42*/
      {
        v11 = v7 + 48; /*0x3c1a48*/
        do /*0x3c1cc6*/
        {
          v12 = *(_DWORD *)v10; /*0x3c1a50*/
          v13 = *(_OWORD *)v11; /*0x3c1a57*/
          v14 = v10; /*0x3c1a5f*/
          v15 = *((_OWORD *)v11 + 1); /*0x3c1a62*/
          *((_QWORD *)v11 + 2) = 0; /*0x3c1a68*/
          *((_QWORD *)v11 + 3) = 15; /*0x3c1a71*/
          *(_BYTE *)v11 = 0; /*0x3c1a7a*/
          v16 = *(unsigned int *)v7; /*0x3c1a7f*/
          v36 = v13; /*0x3c1a82*/
          v35 = v12; /*0x3c1a87*/
          v37 = v15; /*0x3c1a8c*/
          if ( (unsigned __int8)sub_3C3CB0(a4, v12, v16) ) /*0x3c1a91*/
          {
            if ( v10 != v7 ) /*0x3c1aa1*/
            {
              v17 = v11; /*0x3c1aa3*/
              do /*0x3c1acc*/
              {
                v18 = v17; /*0x3c1ab0*/
                v17 -= 10; /*0x3c1ab3*/
                v17[8] = *(v17 - 2); /*0x3c1ac1*/
                sub_58AD0(v18, v17); /*0x3c1ac4*/
              }
              while ( v17 - 2 != (_DWORD *)v7 ); /*0x3c1acc*/
              v6 = v32; /*0x3c1ace*/
            }
            *(_DWORD *)v7 = v12; /*0x3c1ad3*/
            v14 = v7; /*0x3c1ad6*/
          }
          else
          {
            v30 = *(v11 - 12); /*0x3c1c48*/
            for ( i = (char *)(v11 - 12); (unsigned __int8)sub_3C3CB0(a4, v12, v30); i -= 40 ) /*0x3c1c5b*/
            {
              *(_DWORD *)v14 = v30; /*0x3c1c74*/
              sub_58AD0(v14 + 8, i + 8); /*0x3c1c7a*/
              v30 = *((_DWORD *)i - 10); /*0x3c1c7f*/
              v14 = i; /*0x3c1c82*/
            }
            v6 = v32; /*0x3c1c9b*/
            *(_DWORD *)v14 = v12; /*0x3c1ca0*/
          }
          sub_58AD0(v14 + 8, &v36); /*0x3c1cac*/
          sub_3C310(&v36); /*0x3c1cb6*/
          v10 += 40; /*0x3c1cbb*/
          v11 += 10; /*0x3c1cbf*/
        }
        while ( v10 != v6 ); /*0x3c1cc6*/
      }
    }
  }
  else
  {
    while ( a3 > 0 ) /*0x3c1983*/
    {
      sub_3C24D0(&v33, v7, v6, a4); /*0x3c1997*/
      v8 = v34; /*0x3c199c*/
      v9 = v33; /*0x3c19a4*/
      a3 = (a3 >> 2) + (a3 >> 1); /*0x3c19b6*/
      if ( (v33 - v7) / 40 >= (v6 - v34) / 40 ) /*0x3c19f3*/
      {
        GJMapPack_parsePackColors(v34, v6, a3, a4); /*0x3c1a0b*/
        v6 = v9; /*0x3c1a10*/
        v32 = v9; /*0x3c1a13*/
      }
      else
      {
        GJMapPack_parsePackColors(v7, v33, a3, a4); /*0x3c19fb*/
        v7 = v8; /*0x3c1a00*/
      }
      if ( v6 - v7 < 1320 ) /*0x3c1a24*/
        goto LABEL_7; /*0x3c1a24*/
    }
    v19 = (v6 - v7) / 40; /*0x3c1af8*/
    v20 = v19 >> 1; /*0x3c1afe*/
    if ( v19 >> 1 > 0 ) /*0x3c1b04*/
    {
      v21 = &v7[32 * v20 + 8 + 8 * v20]; /*0x3c1b11*/
      do /*0x3c1b78*/
      {
        v22 = *(_OWORD *)(v21 - 40); /*0x3c1b20*/
        v23 = *((_DWORD *)v21 - 12); /*0x3c1b24*/
        v21 -= 40; /*0x3c1b27*/
        v24 = *((_OWORD *)v21 + 1); /*0x3c1b2b*/
        --v20; /*0x3c1b2f*/
        v35 = v23; /*0x3c1b32*/
        *((_QWORD *)v21 + 2) = 0; /*0x3c1b3b*/
        *((_QWORD *)v21 + 3) = 15; /*0x3c1b46*/
        *v21 = 0; /*0x3c1b51*/
        v36 = v22; /*0x3c1b5c*/
        v37 = v24; /*0x3c1b61*/
        sub_3C3220((_DWORD)v7, v20, v19, (unsigned int)&v35, a4); /*0x3c1b66*/
        sub_3C310(&v36); /*0x3c1b70*/
      }
      while ( v20 > 0 ); /*0x3c1b78*/
      v6 = v32; /*0x3c1b7a*/
    }
    if ( v19 >= 2 ) /*0x3c1b83*/
    {
      v25 = v6 - 16; /*0x3c1b90*/
      v26 = 16LL - (_QWORD)v7; /*0x3c1b9c*/
      do /*0x3c1c3d*/
      {
        if ( (__int64)&v25[v26] / 40 >= 2 ) /*0x3c1bbc*/
        {
          v27 = *((_OWORD *)v25 - 1); /*0x3c1bc5*/
          v35 = *((_DWORD *)v25 - 6); /*0x3c1bc8*/
          v28 = *(_OWORD *)v25; /*0x3c1bd0*/
          *(_QWORD *)v25 = 0; /*0x3c1bd4*/
          *((_QWORD *)v25 + 1) = 15; /*0x3c1bdb*/
          *(v25 - 16) = 0; /*0x3c1be3*/
          v29 = *(_DWORD *)v7; /*0x3c1be6*/
          v36 = v27; /*0x3c1be9*/
          *((_DWORD *)v25 - 6) = v29; /*0x3c1bee*/
          v37 = v28; /*0x3c1bf1*/
          sub_58AD0(v25 - 16, v7 + 8); /*0x3c1bf6*/
          sub_3C3220((_DWORD)v7, 0, (__int64)&v25[-24LL - (_QWORD)v7] / 40, (unsigned int)&v35, a4); /*0x3c1c22*/
          sub_3C310(&v36); /*0x3c1c2c*/
        }
        v25 -= 40; /*0x3c1c31*/
      }
      while ( (__int64)&v25[v26] >= 80 ); /*0x3c1c3d*/
    }
  }
}
