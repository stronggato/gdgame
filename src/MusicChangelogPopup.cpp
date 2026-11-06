#include <Geode/binding/MusicChangelogPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// Address: 0x47b870
// Method: MusicChangelogPopup::buildContent
// Hidden C++ exception states: #wind=6
__m128 __usercall MusicChangelogPopup_buildContent@<xmm0>(
        __int64 a1@<rdx>,
        __int64 a2@<rcx>,
        double a3@<xmm0>,
        float a4@<xmm2>)
{
  __int64 v4; // r14
  __int64 v5; // r15
  int v6; // r13d
  __m128 v7; // xmm8
  unsigned int v8; // edi
  struct cocos2d::CCObject *v9; // rax
  int v10; // ecx
  struct cocos2d::CCObject *v11; // rbx
  float v12; // xmm8_4
  cocos2d::CCArray *v13; // rcx
  int v14; // eax
  signed int v15; // esi
  signed int v16; // r15d
  int v17; // edi
  struct cocos2d::CCObject *v18; // rbx
  cocos2d::CCString *v19; // rax
  char *CString; // rax
  size_t v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r8
  size_t v24; // rsi
  void **v25; // r12
  size_t v26; // r14
  unsigned __int64 v27; // rbx
  __int128 *v28; // rdi
  __int64 v29; // rax
  __int128 *v30; // xmm0_8
  __m128i v31; // xmm1
  __int128 *v32; // rdx
  void *v33; // rcx
  __int64 v34; // rax
  cocos2d::CCDictionary *v35; // rcx
  struct cocos2d::CCObject *v36; // rax
  void *v37; // rdx
  const char *v38; // rcx
  cocos2d::CCLabelBMFont *v39; // rdi
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // rax
  float v44; // xmm6_4
  const char *p_Src; // rcx
  cocos2d::CCLabelBMFont *v46; // rdi
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rax
  void *v51; // rcx
  struct cocos2d::CCLabelBMFont *v53; // rdi
  __int64 v54; // rbx
  __int64 v55; // rax
  __int64 v56; // rbx
  __int64 v57; // rax
  __int16 v58; // [rsp+34h] [rbp-CCh] BYREF
  char v59; // [rsp+36h] [rbp-CAh]
  __int16 v60; // [rsp+38h] [rbp-C8h]
  __int16 v61; // [rsp+3Ch] [rbp-C4h] BYREF
  char v62; // [rsp+3Eh] [rbp-C2h]
  unsigned int i; // [rsp+40h] [rbp-C0h]
  int v64; // [rsp+44h] [rbp-BCh]
  signed int v65; // [rsp+48h] [rbp-B8h]
  __int64 v66; // [rsp+50h] [rbp-B0h]
  struct cocos2d::CCObject *v67; // [rsp+58h] [rbp-A8h]
  __int64 v68; // [rsp+60h] [rbp-A0h]
  void *v69; // [rsp+68h] [rbp-98h]
  _BYTE v70[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v71[8]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v72[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v73[8]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v74[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v75[8]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v76[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v77; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v78; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v79; // [rsp+C0h] [rbp-40h]
  __int128 Src; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v81; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v82; // [rsp+E0h] [rbp-20h]
  __int128 v83; // [rsp+E8h] [rbp-18h] BYREF
  size_t v84; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v85; // [rsp+100h] [rbp+0h]
  void *v86[2]; // [rsp+108h] [rbp+8h] BYREF
  size_t Size; // [rsp+118h] [rbp+18h]
  unsigned __int64 v88; // [rsp+120h] [rbp+20h]
  __int128 v89; // [rsp+128h] [rbp+28h] BYREF
  __m128i v90; // [rsp+138h] [rbp+38h]

  v4 = a1;
  v66 = a1;
  v5 = a2;
  v68 = a2;
  v6 = 0;
  v65 = 0;
  v7 = 0;
  v8 = 0;
  for ( i = 0; v8 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(v5 + 664)); i = v8 )
  {
    v9 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(v5 + 664), v8);
    v11 = v9;
    v67 = v9;
    if ( v9 )
    {
      sub_61D170(v10, v4, *((_DWORD *)v9 + 14), *((_DWORD *)v9 + 15), v7.m128_i32[0], LODWORD(a4));
      v12 = v7.m128_f32[0] - *(float *)&a3;
      v13 = (cocos2d::CCArray *)*((_QWORD *)v11 + 9);
      if ( v13 && (v14 = cocos2d::CCArray::count(v13), v15 = v14, (v65 = v14) != 0) )
      {
        v16 = 0;
        if ( v14 > 0 )
        {
          do
          {
            v17 = *((_DWORD *)cocos2d::CCArray::objectAtIndex(*((cocos2d::CCArray **)v11 + 9), v16) + 14);
            v64 = v17;
            Src = 0;
            v81 = 0;
            v82 = 15;
            LOBYTE(Src) = 0;
            if ( v16 < v15 )
            {
              do
              {
                v18 = cocos2d::CCArray::objectAtIndex(*((cocos2d::CCArray **)v11 + 9), v16);
                if ( *((_DWORD *)v18 + 14) != v17 )
                  break;
                if ( v81 )
                  sub_43D80(&Src, ", ", 2u);
                v19 = cocos2d::CCString::createWithFormat("+%i", *((_DWORD *)v18 + 15));
                CString = (char *)cocos2d::CCString::getCString(v19);
                v21 = -1;
                do
                  ++v21;
                while ( CString[v21] );
                sub_43D80(&Src, CString, v21);
                sub_47B6B0(v86);
                v24 = Size;
                if ( Size )
                {
                  if ( 0x7FFFFFFFFFFFFFFFLL - Size < 2 )
                    sub_8D90(0x7FFFFFFFFFFFFFFFLL, v22, v23);
                  v25 = v86;
                  if ( v88 > 0xF )
                    v25 = (void **)v86[0];
                  v83 = 0;
                  v84 = 0;
                  v85 = 0;
                  v26 = Size + 2;
                  v27 = 15;
                  v28 = &v83;
                  if ( Size + 2 > 0xF )
                  {
                    v27 = v26 | 0xF;
                    if ( (v26 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL )
                    {
                      if ( v27 < 0x16 )
                        v27 = 22;
                    }
                    else
                    {
                      v27 = 0x7FFFFFFFFFFFFFFFLL;
                    }
                    v28 = (__int128 *)sub_3C460(v27 + 1);
                    *(_QWORD *)&v83 = v28;
                  }
                  v84 = v24 + 2;
                  v85 = v27;
                  *(_WORD *)v28 = 10272;
                  memcpy((char *)v28 + 2, v25, v24);
                  *((_BYTE *)v28 + v26) = 0;
                  v29 = sub_43D80(&v83, ")", 1u);
                  v89 = *(_OWORD *)v29;
                  v30 = (__int128 *)v89;
                  v90 = *(__m128i *)(v29 + 16);
                  v31 = v90;
                  *(_QWORD *)(v29 + 16) = 0;
                  *(_QWORD *)(v29 + 24) = 15;
                  *(_BYTE *)v29 = 0;
                  v6 |= 3u;
                  v32 = &v89;
                  if ( _mm_srli_si128(v31, 8).m128i_u64[0] > 0xF )
                    v32 = v30;
                  sub_43D80(&Src, v32, v31.m128i_u64[0]);
                  sub_3C310(&v89);
                  if ( v85 > 0xF )
                  {
                    v33 = (void *)v83;
                    if ( v85 + 1 >= 0x1000 )
                    {
                      v33 = *(void **)(v83 - 8);
                      if ( (unsigned __int64)(v83 - (_QWORD)v33 - 8) > 0x1F )
                        invoke_watson(0, 0, 0, 0, 0);
                    }
                    j_j_free(v33);
                  }
                  v17 = v64;
                }
                sub_3C310(v86);
                ++v16;
                v15 = v65;
                v11 = v67;
              }
              while ( v16 < v65 );
              v4 = v66;
            }
            v78 = 7;
            v79 = 15;
            v77 = 0x6E776F6E6B6E55uLL;
            v34 = qword_906070;
            if ( !qword_906070 )
            {
              v69 = operator new(0x3D0u);
              qword_906070 = sub_47C350(v69);
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070);
              v34 = qword_906070;
            }
            v35 = *(cocos2d::CCDictionary **)(v34 + 456);
            if ( v35 )
            {
              v36 = cocos2d::CCDictionary::objectForKey(v35, v17);
              if ( v36 )
              {
                if ( &v77 != (__int128 *)((char *)v36 + 64) )
                {
                  v37 = (char *)v36 + 64;
                  if ( *((_QWORD *)v36 + 11) > 0xFu )
                    v37 = (void *)*((_QWORD *)v36 + 8);
                  sub_3F5A0(&v77, v37, *((_QWORD *)v36 + 10));
                }
              }
            }
            sub_43D80(&v77, &word_7222A8, 1u);
            v38 = (const char *)&v77;
            if ( v79 > 0xF )
              v38 = (const char *)v77;
            v39 = cocos2d::CCLabelBMFont::create(v38, "chatFont.fnt");
            (*(void (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v39 + 160LL))(v39);
            cocos2d::CCLabelBMFont::limitLabelWidth(v39, (float)(a4 - 35.0) * 0.60000002, 0.64999998, 0.34999999);
            v40 = *(_QWORD *)v39;
            cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v70, 0.0, 0.5);
            (*(void (__fastcall **)(cocos2d::CCLabelBMFont *, __int64))(v40 + 288))(v39, v41);
            v42 = *(_QWORD *)v39;
            cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v71, 22.0, v12 - 8.0);
            (*(void (__fastcall **)(cocos2d::CCLabelBMFont *, __int64))(v42 + 184))(v39, v43);
            (*(void (__fastcall **)(__int64, cocos2d::CCLabelBMFont *))(*(_QWORD *)v4 + 464LL))(v4, v39);
            v44 = *(float *)(*(__int64 (__fastcall **)(cocos2d::CCLabelBMFont *, _BYTE *))(*(_QWORD *)v39 + 328LL))(
                              v39,
                              v72);
            p_Src = (const char *)&Src;
            if ( v82 > 0xF )
              p_Src = (const char *)Src;
            v46 = cocos2d::CCLabelBMFont::create(p_Src, "chatFont.fnt");
            (*(void (__fastcall **)(cocos2d::CCLabelBMFont *))(*(_QWORD *)v46 + 160LL))(v46);
            v58 = -19276;
            v59 = -76;
            (**((void (__fastcall ***)(__int64, __int16 *))v46 + 46))((__int64)v46 + 368, &v58);
            cocos2d::CCLabelBMFont::limitLabelWidth(v46, (float)(a4 - 41.0) - v44, 0.60000002, 0.25);
            v47 = *(_QWORD *)v46;
            cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v73, 0.0, 0.5);
            (*(void (__fastcall **)(cocos2d::CCLabelBMFont *, __int64))(v47 + 288))(v46, v48);
            v49 = *(_QWORD *)v46;
            cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v74, (float)(v44 + 22.0) + 6.0, v12 - 8.0);
            (*(void (__fastcall **)(cocos2d::CCLabelBMFont *, __int64))(v49 + 184))(v46, v50);
            (*(void (__fastcall **)(__int64, cocos2d::CCLabelBMFont *))(*(_QWORD *)v4 + 464LL))(v4, v46);
            v12 = v12 + -16.0;
            if ( v79 > 0xF )
            {
              v51 = (void *)v77;
              if ( v79 + 1 >= 0x1000 )
              {
                v51 = *(void **)(v77 - 8);
                if ( (unsigned __int64)(v77 - (_QWORD)v51 - 8) > 0x1F )
                  invoke_watson(0, 0, 0, 0, 0);
              }
              j_j_free(v51);
            }
            v78 = 0;
            v79 = 15;
            LOBYTE(v77) = 0;
            a3 = sub_3C310(&Src);
            v11 = v67;
          }
          while ( v16 < v15 );
          v8 = i;
        }
        v5 = v68;
      }
      else
      {
        v53 = cocos2d::CCLabelBMFont::create("(no new songs)", "chatFont.fnt");
        (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v53 + 160LL))(v53);
        v60 = -26986;
        v61 = -26986;
        v62 = -106;
        (**((void (__fastcall ***)(__int64, __int16 *))v53 + 46))((__int64)v53 + 368, &v61);
        v54 = *(_QWORD *)v53;
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v75, 0.0, 0.5);
        (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v54 + 288))(v53, v55);
        v56 = *(_QWORD *)v53;
        a3 = cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v76, 22.0, v12 - 7.0);
        (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v56 + 184))(v53, v57);
        (*(void (__fastcall **)(__int64, struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v4 + 464LL))(v4, v53);
        v12 = v12 + -14.0;
        v8 = i;
      }
      v7.m128_f32[0] = v12 - 10.0;
    }
    ++v8;
  }
  return _mm_xor_ps(v7, (__m128)xmmword_831670);
}
