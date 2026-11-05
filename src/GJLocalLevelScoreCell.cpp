#include <Geode/binding/GJLocalLevelScoreCell.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [2/2] Address: 0x154660
// Method: GJLocalLevelScoreCell::~GJLocalLevelScoreCell
_QWORD *__fastcall GJLocalLevelScoreCell__dtor_GJLocalLevelScoreCell(_QWORD *Block, char a2)
{
  *Block = &GJLocalLevelScoreCell::`vftable'; /*0x154673*/
  Block[40] = &GJLocalLevelScoreCell::`vftable'; /*0x154680*/
  Block[41] = &GJLocalLevelScoreCell::`vftable'; /*0x15468e*/
  Block[42] = &GJLocalLevelScoreCell::`vftable'; /*0x15469c*/
  Block[43] = &GJLocalLevelScoreCell::`vftable'; /*0x1546aa*/
  Block[44] = &GJLocalLevelScoreCell::`vftable'; /*0x1546b8*/
  URLCell__dtor_URLCell(Block); /*0x1546bf*/
  if ( (a2 & 1) != 0 ) /*0x1546c7*/
    j_j_free(Block); /*0x1546d1*/
  return Block; /*0x1546d6*/
}

// Address: 0xbd3e0
// Method: GJLocalLevelScoreCell::loadFromScore
// Hidden C++ exception states: #wind=1
char *__fastcall GJLocalLevelScoreCell_loadFromScore(__int64 a1)
{
  __m128i si128; // xmm6
  unsigned __int64 v3; // xmm0_8
  void *v4; // rcx
  char *v5; // rdi
  char *v6; // rbx
  char *v7; // rax
  char *v8; // rbx
  char v9; // [rsp+38h] [rbp-C8h] BYREF
  __m128i Src; // [rsp+50h] [rbp-B0h] BYREF
  __m128i v11; // [rsp+60h] [rbp-A0h]
  _DWORD v12[4]; // [rsp+70h] [rbp-90h] BYREF
  __m128i v13; // [rsp+80h] [rbp-80h] BYREF
  __m128i v14; // [rsp+90h] [rbp-70h]
  _OWORD v15[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v16; // [rsp+C0h] [rbp-40h]
  __int128 v17; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v18; // [rsp+D8h] [rbp-28h]
  __int64 v19; // [rsp+E0h] [rbp-20h]
  char *v20; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v21; // [rsp+F0h] [rbp-10h]

  if ( !a1 )
    return 0;
  v12[2] = 0;
  v13 = 0;
  si128 = _mm_load_si128((const __m128i *)&Size);
  v14 = si128;
  v13.m128i_i8[0] = 0;
  v15[0] = 0;
  v15[1] = si128;
  LOBYTE(v15[0]) = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 15;
  LOBYTE(v17) = 0;
  v20 = 0;
  v21 = 0;
  v12[0] = 0;
  v12[1] = *(_DWORD *)(a1 + 392);
  sub_3E4F0(&Src, a1 + 320);
  v3 = _mm_srli_si128(si128, 8).m128i_u64[0];
  if ( v3 > 0xF )
  {
    v4 = (void *)v13.m128i_i64[0];
    if ( v3 + 1 >= 0x1000 )
    {
      v4 = *(void **)(v13.m128i_i64[0] - 8);
      if ( (unsigned __int64)(v13.m128i_i64[0] - (_QWORD)v4 - 8) > 0x1F )
LABEL_12:
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v4);
    si128 = _mm_load_si128((const __m128i *)&Size);
  }
  v13 = Src;
  v14 = v11;
  v11 = si128;
  Src.m128i_i8[0] = 0;
  sub_3C310(&Src);
  Src = _mm_load_si128((const __m128i *)&xmmword_831130);
  v11.m128i_i64[0] = 0x500000004LL;
  v11.m128i_i32[2] = 7;
  v5 = (char *)sub_3C460(28);
  v6 = v5 + 28;
  memmove(v5, &Src, 0x1Cu);
  if ( &v20 != (char **)&v9 )
  {
    v20 = v5;
    *(_QWORD *)&v21 = v5 + 28;
    *((_QWORD *)&v21 + 1) = v5 + 28;
    v5 = 0;
    v6 = 0;
  }
  if ( v5 )
  {
    v7 = v5;
    if ( ((v6 - v5) & 0xFFFFFFFFFFFFFFFCuLL) >= 0x1000 )
    {
      v5 = (char *)*((_QWORD *)v5 - 1);
      if ( (unsigned __int64)(v7 - v5 - 8) > 0x1F )
        goto LABEL_12;
    }
    j_j_free(v5);
  }
  v8 = GJMessagePopup_create((__int64)v12);
  sub_685C0(&v20);
  sub_3C310(&v17);
  sub_3C310(v15);
  sub_3C310(&v13);
  return v8;
}
