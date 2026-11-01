#include <Geode/binding/MoreOptionsLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x6efe0
// Method: MoreOptionsLayer::onClose
// Hidden C++ exception states: #wind=1
void __fastcall MoreOptionsLayer_onClose(void **a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rcx
  _BYTE *v4; // rax
  unsigned __int64 v5; // r8
  unsigned __int8 v6; // r9
  unsigned __int64 v7; // rsi
  __int64 v8; // rdx
  _BYTE *v9; // rax
  _BYTE *v10; // rax
  void *v11; // rax
  size_t v12; // rax
  size_t v13; // r8
  _BYTE *v14; // rax
  __int128 v15; // xmm2
  __m128i v16; // xmm3
  void *v17; // rcx
  void *Block[2]; // [rsp+30h] [rbp-38h] BYREF
  __m128i si128; // [rsp+40h] [rbp-28h]

  *(_OWORD *)Block = 0; /*0x6f004*/
  si128 = _mm_load_si128((const __m128i *)&Size); /*0x6f011*/
  LOBYTE(Block[0]) = 0; /*0x6f017*/
  sub_58940(Block); /*0x6f025*/
  v2 = 0; /*0x6f02a*/
  v3 = (unsigned __int64)a1[2]; /*0x6f02c*/
  if ( v3 ) /*0x6f033*/
  {
    do /*0x6f040*/
    {
      v4 = a1; /*0x6f040*/
      v5 = (unsigned __int64)a1[3]; /*0x6f043*/
      if ( v5 > 0xF ) /*0x6f04b*/
        v4 = *a1; /*0x6f04d*/
      v6 = v4[v2]; /*0x6f050*/
      v7 = 1; /*0x6f055*/
      if ( (v6 & 0xE0) == 0xC0 ) /*0x6f062*/
      {
        v7 = 2; /*0x6f064*/
      }
      else if ( (v6 & 0xF0) == 0xE0 ) /*0x6f082*/
      {
        v7 = 3; /*0x6f084*/
      }
      else if ( (v6 & 0xF8) == 0xF0 ) /*0x6f093*/
      {
        v7 = 4; /*0x6f095*/
      }
      else if ( v6 >= 0x80u ) /*0x6f0a0*/
      {
        goto LABEL_13; /*0x6f0a0*/
      }
      if ( v7 + v2 <= v3 ) /*0x6f070*/
      {
        v8 = 1; /*0x6f0aa*/
        if ( v7 <= 1 ) /*0x6f0b2*/
        {
LABEL_19:
          if ( v7 != 2 || v6 != 0xC2 ) /*0x6f0e1*/
            goto LABEL_24; /*0x6f0e1*/
          v10 = a1; /*0x6f0e3*/
          if ( v5 > 0xF ) /*0x6f0ea*/
            v10 = *a1; /*0x6f0ec*/
          if ( v10[v2 + 1] != 0xA0 ) /*0x6f0f4*/
          {
LABEL_24:
            v11 = a1[2]; /*0x6f0f6*/
            if ( (unsigned __int64)v11 < v2 ) /*0x6f0fd*/
              sub_3E4D0(v3, v8); /*0x6f1da*/
            v12 = (size_t)v11 - v2; /*0x6f103*/
            v13 = v7; /*0x6f106*/
            if ( v12 < v7 ) /*0x6f10c*/
              v13 = v12; /*0x6f10c*/
            v14 = a1; /*0x6f110*/
            if ( (unsigned __int64)a1[3] > 0xF ) /*0x6f118*/
              v14 = *a1; /*0x6f11a*/
            sub_43D80(Block, &v14[v2], v13); /*0x6f126*/
          }
          v2 += v7; /*0x6f12b*/
          goto LABEL_31; /*0x6f12b*/
        }
        while ( 1 ) /*0x6f0b4*/
        {
          v9 = a1; /*0x6f0b4*/
          if ( v5 > 0xF ) /*0x6f0bb*/
            v9 = *a1; /*0x6f0bd*/
          v3 = (unsigned __int8)v9[v8 + v2]; /*0x6f0c3*/
          LOBYTE(v3) = v3 & 0xC0; /*0x6f0c7*/
          if ( (_BYTE)v3 != 0x80 ) /*0x6f0ca*/
            break; /*0x6f0ca*/
          if ( ++v8 >= v7 ) /*0x6f0d5*/
            goto LABEL_19; /*0x6f0d5*/
        }
LABEL_13:
        ++v2; /*0x6f0a2*/
        goto LABEL_31; /*0x6f0a5*/
      }
      ++v2; /*0x6f072*/
LABEL_31:
      v3 = (unsigned __int64)a1[2]; /*0x6f12e*/
    }
    while ( v2 < v3 ); /*0x6f040*/
  }
  if ( a1 != Block ) /*0x6f143*/
  {
    v15 = *(_OWORD *)a1; /*0x6f145*/
    v16 = *((__m128i *)a1 + 1); /*0x6f148*/
    *(_OWORD *)a1 = *(_OWORD *)Block; /*0x6f151*/
    *((__m128i *)a1 + 1) = si128; /*0x6f159*/
    *(_OWORD *)Block = v15; /*0x6f15d*/
    si128 = v16; /*0x6f162*/
  }
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x6f170*/
  {
    v17 = Block[0]; /*0x6f175*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x6f184*/
    {
      v17 = (void *)*((_QWORD *)Block[0] - 1); /*0x6f18a*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v17 - 8) > 0x1F ) /*0x6f199*/
        invoke_watson(0, 0, 0, 0, 0); /*0x6f1ae*/
    }
    j_j_free(v17); /*0x6f1b5*/
  }
}
