#include <Geode/binding/SetupObjectControlPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/1] Address: 0x261950
// Method: SetupObjectControlPopup::init
// Hidden C++ exception states: #wind=2
void __fastcall SetupObjectControlPopup_init(__int64 a1, __int64 a2, __int64 a3)
{
  __m128i si128; // xmm6
  __int64 v5; // r8
  __int64 v6; // rax
  const char *v7; // rcx
  int v8; // eax
  __int64 v9; // r8
  int *v10; // rdx
  __int64 v11; // rax
  char *v12; // rcx
  _DWORD v13[4]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v14[3]; // [rsp+40h] [rbp-C0h] BYREF
  void **v15; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v16[120]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v17[104]; // [rsp+D8h] [rbp-28h] BYREF
  char *String[2]; // [rsp+140h] [rbp+40h] BYREF
  __m128i v19; // [rsp+150h] [rbp+50h]

  if ( *(_QWORD *)(a2 + 16) ) /*0x26197b*/
  {
    sub_10CF30(v14); /*0x26198b*/
    *(_OWORD *)String = 0; /*0x261994*/
    si128 = _mm_load_si128((const __m128i *)&Size); /*0x261998*/
    v19 = si128; /*0x2619a0*/
    LOBYTE(String[0]) = 0; /*0x2619a5*/
    LOBYTE(v5) = 44; /*0x2619a9*/
    v6 = sub_10D630(v14, String, v5); /*0x2619b5*/
    if ( (unsigned __int8)std::ios_base::operator bool(v6 + *(int *)(*(_QWORD *)v6 + 4LL)) ) /*0x2619c4*/
    {
      do /*0x261a23*/
      {
        v7 = (const char *)String; /*0x2619d0*/
        if ( v19.m128i_i64[1] > 0xFuLL ) /*0x2619d9*/
          v7 = String[0]; /*0x2619d9*/
        v8 = atoi(v7); /*0x2619de*/
        v13[0] = v8; /*0x2619e4*/
        v10 = *(int **)(a3 + 8); /*0x2619e8*/
        if ( v10 == *(int **)(a3 + 16) ) /*0x2619f0*/
        {
          sub_689C0(a3, v10, v13); /*0x261a03*/
        }
        else
        {
          *v10 = v8; /*0x2619f2*/
          *(_QWORD *)(a3 + 8) += 4LL; /*0x2619f4*/
        }
        LOBYTE(v9) = 44; /*0x261a08*/
        v11 = sub_10D630(v14, String, v9); /*0x261a14*/
      }
      while ( (unsigned __int8)std::ios_base::operator bool(v11 + *(int *)(*(_QWORD *)v11 + 4LL)) ); /*0x261a23*/
      si128 = _mm_load_si128((const __m128i *)&Size); /*0x261a2d*/
    }
    if ( v19.m128i_i64[1] > 0xFuLL ) /*0x261a3d*/
    {
      v12 = String[0]; /*0x261a42*/
      if ( (unsigned __int64)(v19.m128i_i64[1] + 1) >= 0x1000 ) /*0x261a50*/
      {
        v12 = (char *)*((_QWORD *)String[0] - 1); /*0x261a56*/
        if ( (unsigned __int64)(String[0] - v12 - 8) > 0x1F ) /*0x261a65*/
          invoke_watson(0, 0, 0, 0, 0); /*0x261a7a*/
      }
      j_j_free(v12); /*0x261a81*/
      si128 = _mm_load_si128((const __m128i *)&Size); /*0x261a86*/
    }
    v19 = si128; /*0x261a8e*/
    LOBYTE(String[0]) = 0; /*0x261a93*/
    *(_QWORD *)((char *)v14 + *(int *)(v14[0] + 4LL)) = &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vftable'; /*0x261aa7*/
    *(_DWORD *)((char *)&v13[3] + *(int *)(v14[0] + 4LL)) = *(_DWORD *)(v14[0] + 4LL) - 152; /*0x261abb*/
    v15 = &std::stringbuf::`vftable'; /*0x261ac6*/
    sub_10D860(&v15); /*0x261ad0*/
    std::streambuf::~streambuf<char,std::char_traits<char>>(&v15); /*0x261ada*/
    std::iostream::~iostream<char,std::char_traits<char>>(v16); /*0x261ae5*/
    std::ios::~ios<char,std::char_traits<char>>(v17); /*0x261aef*/
  }
}
