#include <Geode/binding/SFXChangelogPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x61c5d0
// Method: SFXChangelogPopup::buildContent
// Hidden C++ exception states: #wind=3
__m128 __fastcall SFXChangelogPopup_buildContent(__int64 a1, __int64 a2, float a3)
{
  double v3; // xmm0_8
  __int64 v4; // r14
  __int64 v5; // r15
  __m128 v6; // xmm6
  unsigned int v7; // esi
  __m128i si128; // xmm14
  struct cocos2d::CCObject *v9; // rax
  int v10; // ecx
  struct cocos2d::CCObject *v11; // rdi
  float v12; // xmm6_4
  cocos2d::CCArray *v13; // rcx
  int v14; // eax
  int v15; // ebx
  signed int v16; // r13d
  __int64 v17; // rdx
  __int64 v18; // r8
  struct cocos2d::CCObject *v19; // r15
  _QWORD *v20; // r14
  size_t v21; // rsi
  size_t v22; // r12
  unsigned __int64 v23; // rbx
  __int128 *p_Src; // rdi
  int v25; // edi
  _QWORD *v26; // rdx
  __int64 v27; // rax
  void *v28; // rcx
  const char *v29; // rcx
  cocos2d::CCLabelBMFont *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rax
  void *v33; // rcx
  float v34; // xmm6_4
  struct cocos2d::CCLabelBMFont *v35; // rdi
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rax
  __int16 v41; // [rsp+30h] [rbp-D0h] BYREF
  char v42; // [rsp+32h] [rbp-CEh]
  int v43; // [rsp+34h] [rbp-CCh]
  unsigned int v44; // [rsp+38h] [rbp-C8h]
  signed int v45; // [rsp+3Ch] [rbp-C4h]
  __int64 v46; // [rsp+40h] [rbp-C0h]
  struct cocos2d::CCObject *v47; // [rsp+48h] [rbp-B8h]
  __int64 v48; // [rsp+50h] [rbp-B0h]
  _BYTE v49[8]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v50[8]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v51[8]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v52[8]; // [rsp+70h] [rbp-90h] BYREF
  __int128 Src; // [rsp+78h] [rbp-88h] BYREF
  __m128i v54; // [rsp+88h] [rbp-78h]
  __int128 v55; // [rsp+98h] [rbp-68h] BYREF
  __int128 v56; // [rsp+A8h] [rbp-58h]

  v4 = a2; /*0x61c642*/
  v46 = a2; /*0x61c645*/
  v5 = a1; /*0x61c64a*/
  v48 = a1; /*0x61c64d*/
  v43 = 0; /*0x61c655*/
  v6 = 0; /*0x61c65a*/
  v7 = 0; /*0x61c65d*/
  v44 = 0; /*0x61c660*/
  if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 664)) ) /*0x61c66c*/
  {
    si128 = _mm_load_si128((const __m128i *)&Size); /*0x61c67a*/
    do /*0x61ca86*/
    {
      v9 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(v5 + 664), v7); /*0x61c6ca*/
      v11 = v9; /*0x61c6d0*/
      v47 = v9; /*0x61c6d3*/
      if ( v9 ) /*0x61c6db*/
      {
        sub_61D170(v10, v4, *((_DWORD *)v9 + 14), *((_DWORD *)v9 + 15), v6.m128_i32[0], LODWORD(a3)); /*0x61c6f9*/
        v12 = v6.m128_f32[0] - *(float *)&v3; /*0x61c6fe*/
        v13 = (cocos2d::CCArray *)*((_QWORD *)v11 + 9); /*0x61c702*/
        if ( v13 && (v14 = cocos2d::CCArray::count(v13), v15 = v14, (v45 = v14) != 0) ) /*0x61c71d*/
        {
          v16 = 0; /*0x61c723*/
          if ( v14 > 0 ) /*0x61c726*/
          {
            do /*0x61c99c*/
            {
              v19 = cocos2d::CCArray::objectAtIndex(*((cocos2d::CCArray **)v11 + 9), v16); /*0x61c73d*/
              v20 = (_QWORD *)((char *)v19 + 56); /*0x61c740*/
              v21 = *((_QWORD *)v19 + 9); /*0x61c744*/
              if ( 0x7FFFFFFFFFFFFFFFLL - v21 < 3 ) /*0x61c75c*/
                sub_8D90(0x7FFFFFFFFFFFFFFFLL - v21, v17, v18); /*0x61cb21*/
              if ( *((_QWORD *)v19 + 10) > 0xFu ) /*0x61c767*/
                v20 = (_QWORD *)*v20; /*0x61c769*/
              Src = 0; /*0x61c76f*/
              v54 = 0; /*0x61c777*/
              v22 = v21 + 3; /*0x61c77c*/
              v23 = 15; /*0x61c780*/
              p_Src = &Src; /*0x61c785*/
              if ( v21 + 3 > 0xF ) /*0x61c78d*/
              {
                v23 = v22 | 0xF; /*0x61c792*/
                if ( (v22 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x61c799*/
                {
                  if ( v23 < 0x16 ) /*0x61c7a9*/
                    v23 = 22; /*0x61c7a9*/
                }
                else
                {
                  v23 = 0x7FFFFFFFFFFFFFFFLL; /*0x61c79b*/
                }
                p_Src = (__int128 *)sub_3C460(v23 + 1); /*0x61c7b6*/
                *(_QWORD *)&Src = p_Src; /*0x61c7b9*/
              }
              v54.m128i_i64[0] = v21 + 3; /*0x61c7be*/
              v54.m128i_i64[1] = v23; /*0x61c7c2*/
              memcpy(p_Src, v20, v21); /*0x61c7cf*/
              *(_WORD *)((char *)p_Src + v21) = 8250; /*0x61c7da*/
              *((_BYTE *)p_Src + v21 + 2) = 43; /*0x61c7e5*/
              *((_BYTE *)p_Src + v22) = 0; /*0x61c7e9*/
              v25 = v43 | 1; /*0x61c7f2*/
              v26 = (_QWORD *)((char *)v19 + 88); /*0x61c7f5*/
              if ( *((_QWORD *)v19 + 14) > 0xFu ) /*0x61c7fe*/
                v26 = (_QWORD *)*v26; /*0x61c800*/
              v27 = sub_43D80(&Src, v26, *((_QWORD *)v19 + 13)); /*0x61c80c*/
              v55 = 0; /*0x61c814*/
              v56 = 0; /*0x61c81b*/
              v55 = *(_OWORD *)v27; /*0x61c823*/
              v56 = *(_OWORD *)(v27 + 16); /*0x61c82b*/
              *(_QWORD *)(v27 + 16) = 0; /*0x61c832*/
              *(_QWORD *)(v27 + 24) = 15; /*0x61c836*/
              *(_BYTE *)v27 = 0; /*0x61c83e*/
              v43 = v25 | 2; /*0x61c844*/
              if ( v54.m128i_i64[1] > 0xFuLL ) /*0x61c850*/
              {
                v28 = (void *)Src; /*0x61c855*/
                if ( (unsigned __int64)(v54.m128i_i64[1] + 1) >= 0x1000 ) /*0x61c864*/
                {
                  v28 = *(void **)(Src - 8); /*0x61c86a*/
                  if ( (unsigned __int64)(Src - (_QWORD)v28 - 8) > 0x1F ) /*0x61c879*/
                    invoke_watson(0, 0, 0, 0, 0); /*0x61cb04*/
                }
                j_j_free(v28); /*0x61c87f*/
              }
              v54 = si128; /*0x61c884*/
              LOBYTE(Src) = 0; /*0x61c88a*/
              v29 = (const char *)&v55; /*0x61c88f*/
              if ( *((_QWORD *)&v56 + 1) > 0xFu ) /*0x61c898*/
                v29 = (const char *)v55; /*0x61c898*/
              v30 = cocos2d::CCLabelBMFont::create(v29, "chatFont.fnt"); /*0x61c8aa*/
              (*(void (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v30 + 160LL))(v30); /*0x61c8be*/
              cocos2d::CCLabelBMFont::limitLabelWidth(v30, a3 - 35.0, 0.60000002, 0.34999999); /*0x61c8d8*/
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v49, 0.0, 0.5); /*0x61c8ea*/
              (*(void (__fastcall **)(cocos2d::CCLabelBMFont *, __int64))(*(_QWORD *)v30 + 288LL))(v30, v31); /*0x61c900*/
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v50, 22.0, (float)(v12 - 7.0) - (float)((float)v16 * 14.0)); /*0x61c924*/
              (*(void (__fastcall **)(cocos2d::CCLabelBMFont *, __int64))(*(_QWORD *)v30 + 184LL))(v30, v32); /*0x61c93a*/
              v4 = v46; /*0x61c93d*/
              (*(void (__fastcall **)(__int64, cocos2d::CCLabelBMFont *))(*(_QWORD *)v46 + 464LL))(v46, v30); /*0x61c94b*/
              if ( *((_QWORD *)&v56 + 1) > 0xFu ) /*0x61c95a*/
              {
                v33 = (void *)v55; /*0x61c95f*/
                if ( (unsigned __int64)(*((_QWORD *)&v56 + 1) + 1LL) >= 0x1000 ) /*0x61c96d*/
                {
                  v33 = *(void **)(v55 - 8); /*0x61c973*/
                  if ( (unsigned __int64)(v55 - (_QWORD)v33 - 8) > 0x1F ) /*0x61c982*/
                    invoke_watson(0, 0, 0, 0, 0); /*0x61cb1a*/
                }
                j_j_free(v33); /*0x61c988*/
              }
              ++v16; /*0x61c98d*/
              v15 = v45; /*0x61c990*/
              v11 = v47; /*0x61c997*/
            }
            while ( v16 < v45 ); /*0x61c99c*/
            v7 = v44; /*0x61c9a2*/
            v5 = v48; /*0x61c9a6*/
          }
          *(float *)&v3 = (float)v15 * 14.0; /*0x61c9b2*/
          v34 = v12 - *(float *)&v3; /*0x61c9b6*/
        }
        else
        {
          v35 = cocos2d::CCLabelBMFont::create("(no new sounds)", "chatFont.fnt"); /*0x61c9d3*/
          (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v35 + 160LL))(v35); /*0x61c9eb*/
          v41 = -26986; /*0x61c9ed*/
          v42 = -106; /*0x61c9f4*/
          (**((void (__fastcall ***)(__int64, __int16 *))v35 + 46))((__int64)v35 + 368, &v41); /*0x61ca0b*/
          v36 = *(_QWORD *)v35; /*0x61ca0e*/
          cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v51, 0.0, 0.5); /*0x61ca1d*/
          (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v36 + 288))(v35, v37); /*0x61ca29*/
          v38 = *(_QWORD *)v35; /*0x61ca2f*/
          v3 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v52, 22.0, v12 - 7.0); /*0x61ca43*/
          (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v38 + 184))(v35, v39); /*0x61ca4f*/
          (*(void (__fastcall **)(__int64, struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v4 + 464LL))(v4, v35); /*0x61ca5e*/
          v34 = v12 + -14.0; /*0x61ca64*/
        }
        v6.m128_f32[0] = v34 - 10.0; /*0x61ca6c*/
      }
      v44 = ++v7; /*0x61ca73*/
    }
    while ( v7 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(v5 + 664)) ); /*0x61ca86*/
  }
  return _mm_xor_ps(v6, (__m128)xmmword_831670); /*0x61ca96*/
}

// [2/2] Address: 0x61cb30
// Method: SFXChangelogPopup::~SFXChangelogPopup
void __fastcall SFXChangelogPopup__dtor_SFXChangelogPopup(_QWORD *a1)
{
  cocos2d::CCObject *v2; // rcx

  *a1 = &ScrollViewPopup::`vftable'; /*0x61cb40*/
  a1[40] = &ScrollViewPopup::`vftable'; /*0x61cb4a*/
  a1[41] = &ScrollViewPopup::`vftable'; /*0x61cb58*/
  a1[42] = &ScrollViewPopup::`vftable'; /*0x61cb66*/
  a1[43] = &ScrollViewPopup::`vftable'; /*0x61cb74*/
  a1[44] = &ScrollViewPopup::`vftable'; /*0x61cb82*/
  a1[51] = &ScrollViewPopup::`vftable'; /*0x61cb90*/
  a1[54] = &ScrollViewPopup::`vftable'; /*0x61cb9e*/
  a1[68] = &ScrollViewPopup::`vftable'; /*0x61cbac*/
  v2 = (cocos2d::CCObject *)a1[83]; /*0x61cbb3*/
  if ( v2 ) /*0x61cbbd*/
    cocos2d::CCObject::release(v2); /*0x61cbbf*/
  StarInfoPopup__dtor_StarInfoPopup((__int64)a1); /*0x61cbcd*/
}
