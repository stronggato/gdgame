#include <Geode/binding/OptionsCell.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x14eb40
// Method: OptionsCell::~OptionsCell
_QWORD *__fastcall OptionsCell__dtor_OptionsCell(_QWORD *Block, char a2)
{
  *Block = &OptionsCell::`vftable'; /*0x14eb53*/
  Block[40] = &OptionsCell::`vftable'; /*0x14eb60*/
  Block[41] = &OptionsCell::`vftable'; /*0x14eb6e*/
  Block[42] = &OptionsCell::`vftable'; /*0x14eb7c*/
  Block[43] = &OptionsCell::`vftable'; /*0x14eb8a*/
  Block[44] = &OptionsCell::`vftable'; /*0x14eb98*/
  URLCell__dtor_URLCell(Block); /*0x14eb9f*/
  if ( (a2 & 1) != 0 ) /*0x14eba7*/
    j_j_free(Block); /*0x14ebb1*/
  return Block; /*0x14ebb6*/
}

// [2/3] Address: 0x14eff0
// Method: OptionsCell::onToggleOption
__int64 __fastcall OptionsCell_onToggleOption(__int64 a1)
{
  __int64 v1; // rdx
  void (__fastcall ***v3)(_QWORD); // rcx
  __int64 result; // rax
  __int64 (__fastcall ***v5)(_QWORD, __int64, __int64, __int64, _QWORD); // rcx

  v1 = *(_QWORD *)(a1 + 560); /*0x14eff6*/
  if ( v1 ) /*0x14f003*/
  {
    v3 = *(void (__fastcall ****)(_QWORD))(v1 + 96); /*0x14f009*/
    *(_BYTE *)(v1 + 60) = *(_BYTE *)(v1 + 60) == 0; /*0x14f010*/
    if ( v3 ) /*0x14f016*/
      (**v3)(v3); /*0x14f01b*/
    result = *(_QWORD *)(a1 + 416); /*0x14f01d*/
    v5 = *(__int64 (__fastcall ****)(_QWORD, __int64, __int64, __int64, _QWORD))(result + 624); /*0x14f024*/
    if ( v5 ) /*0x14f02e*/
      return (**v5)(v5, a1, 24, 1, 0); /*0x14f04b*/
  }
  return result; /*0x14f04d*/
}

// Address: 0x1546f0
// Method: OptionsCell::loadFromObject
// Hidden C++ exception states: #wind=2
void __fastcall OptionsCell_loadFromObject(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __m128i *v4; // rbx
  void *v5; // rax
  const char *v6; // rdx
  __int64 v7; // r8
  void **v8; // rcx
  struct cocos2d::CCSprite *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  void **v12; // rcx
  struct cocos2d::CCLabelBMFont *v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  void *v18; // rcx
  void *v19; // rcx
  _BYTE v20[8]; // [rsp+30h] [rbp-39h] BYREF
  void *Block[2]; // [rsp+38h] [rbp-31h] BYREF
  __m128i si128; // [rsp+48h] [rbp-21h]
  void *v23[2]; // [rsp+58h] [rbp-11h] BYREF
  __m128i v24; // [rsp+68h] [rbp-1h]
  _BYTE v25[32]; // [rsp+78h] [rbp+Fh] BYREF

  v2 = a2;
  LOBYTE(a2) = 1;
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 544) + 576LL))(*(_QWORD *)(a1 + 544), a2);
  *(_QWORD *)(a1 + 560) = v2;
  *(_OWORD *)Block = 0;
  si128 = _mm_load_si128((const __m128i *)&Size);
  LOBYTE(Block[0]) = 0;
  if ( !*(_DWORD *)(v2 + 60) )
  {
    v4 = (__m128i *)sub_73600(v25);
    if ( Block == (void **)v4 )
      goto LABEL_14;
    if ( si128.m128i_i64[1] <= 0xFuLL )
      goto LABEL_13;
    v5 = Block[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v5 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v5 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    goto LABEL_12;
  }
  v4 = GameToolbox_pointsToString((__int64)v25, *(_DWORD *)(v2 + 56));
  if ( Block == (void **)v4 )
    goto LABEL_14;
  if ( si128.m128i_i64[1] > 0xFuLL )
  {
    v5 = Block[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v5 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v5 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
LABEL_12:
    j_j_free(v5);
  }
LABEL_13:
  si128 = _mm_load_si128((const __m128i *)&Size);
  LOBYTE(Block[0]) = 0;
  *(__m128i *)Block = *v4;
  si128 = v4[1];
  v4[1].m128i_i64[0] = 0;
  v4->m128i_i8[0] = 0;
  v4[1].m128i_i64[1] = 15;
LABEL_14:
  sub_3C310(v25);
  v6 = "GJ_timeIcon_001.png";
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 560) + 60LL) == 1 )
    v6 = "GJ_pointsIcon_001.png";
  *(_OWORD *)v23 = 0;
  v24 = 0;
  v7 = -1;
  do
    ++v7;
  while ( v6[v7] );
  sub_3C230(v23);
  v8 = v23;
  if ( v24.m128i_i64[1] > 0xFuLL )
    v8 = (void **)v23[0];
  v9 = cocos2d::CCSprite::createWithSpriteFrameName((const char *)v8);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v9 + 160LL))(v9);
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(**(_QWORD **)(a1 + 544) + 456LL))(
    *(_QWORD *)(a1 + 544),
    v9,
    20);
  v10 = *(_QWORD *)v9;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v20, 20.0, *(float *)(a1 + 532) * 0.5);
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v10 + 184))(v9, v11);
  v12 = Block;
  if ( si128.m128i_i64[1] > 0xFuLL )
    v12 = (void **)Block[0];
  v13 = cocos2d::CCLabelBMFont::create((const char *)v12, (const char *)&qword_6FFF68);
  (*(void (__fastcall **)(_QWORD, struct cocos2d::CCLabelBMFont *, __int64))(**(_QWORD **)(a1 + 544) + 456LL))(
    *(_QWORD *)(a1 + 544),
    v13,
    2);
  v14 = *(_QWORD *)v13;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v20, 0.0, 0.5);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v14 + 288))(v13, v15);
  cocos2d::CCLabelBMFont::limitLabelWidth(v13, 200.0, 0.46000001, 0.0);
  v16 = *(_QWORD *)v13;
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v20, 40.0, (float)(*(float *)(a1 + 532) * 0.5) + 0.5);
  (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v16 + 184))(v13, v17);
  if ( v24.m128i_i64[1] > 0xFuLL )
  {
    v18 = v23[0];
    if ( (unsigned __int64)(v24.m128i_i64[1] + 1) >= 0x1000 )
    {
      v18 = (void *)*((_QWORD *)v23[0] - 1);
      if ( (unsigned __int64)((char *)v23[0] - (char *)v18 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v18);
  }
  v24 = _mm_load_si128((const __m128i *)&Size);
  LOBYTE(v23[0]) = 0;
  if ( si128.m128i_i64[1] > 0xFuLL )
  {
    v19 = Block[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v19 = (void *)*((_QWORD *)Block[0] - 1);
      if ( (unsigned __int64)((char *)Block[0] - (char *)v19 - 8) > 0x1F )
        invoke_watson(0, 0, 0, 0, 0);
    }
    j_j_free(v19);
  }
}
