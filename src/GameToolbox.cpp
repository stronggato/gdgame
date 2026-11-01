#include <Geode/binding/GameToolbox.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/15] Address: 0x5a230
// Method: GameToolbox::addBackButton
_DWORD *__fastcall GameToolbox_addBackButton(__int64 a1)
{
  __int64 v2; // rax
  struct cocos2d::CCSprite *v3; // rbx
  _DWORD *v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  float v10; // [rsp+40h] [rbp+8h] BYREF
  float v11; // [rsp+44h] [rbp+Ch]
  char v12; // [rsp+48h] [rbp+10h] BYREF
  char v13; // [rsp+50h] [rbp+18h] BYREF

  v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x5a240*/
  cocos2d::CCDirector::getWinSize(v2, &v10); /*0x5a24e*/
  v3 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_closeBtn_001.png"); /*0x5a26c*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v3 + 160LL))(v3); /*0x5a272*/
  v4 = (_DWORD *)CCMenuItemSpriteExtra_create(v3, 0, a1, sub_5A4D0); /*0x5a28c*/
  v4[93] = 1067030938; /*0x5a28f*/
  (*(void (__fastcall **)(_QWORD, _DWORD *))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v4); /*0x5a2ad*/
  v5 = *(_QWORD *)v4; /*0x5a2d1*/
  v6 = *(_QWORD *)(a1 + 552); /*0x5a2d4*/
  cocos2d::CCPoint::CCPoint( /*0x5a30b*/
    (cocos2d::CCPoint *)&v12,
    (float)((float)(v10 * 0.5) - (float)(*(float *)(a1 + 648) * 0.5)) + 5.0,
    (float)((float)(*(float *)(a1 + 652) * 0.5) + (float)(v11 * 0.5)) - 5.0);
  v8 = cocos2d::CCNode::convertToNodeSpace(v6, &v13, v7); /*0x5a31c*/
  (*(void (__fastcall **)(_DWORD *, __int64))(v5 + 184))(v4, v8); /*0x5a328*/
  (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v4 + 64LL))(v4, 2); /*0x5a339*/
  return v4; /*0x5a33c*/
}

// [2/15] Address: 0x6b5d0
// Method: GameToolbox::alignItemsHorisontally
void __fastcall GameToolbox_alignItemsHorisontally(__int64 a1, float a2, __int64 a3, char a4)
{
  float v6; // xmm6_4
  unsigned int *v8; // rdi
  __int64 v9; // rax
  _QWORD *v10; // rdi
  _QWORD *i; // rsi
  __int64 v12; // rbx
  const struct cocos2d::CCSize *v13; // rax
  float v14; // xmm0_4
  float v15; // xmm6_4
  unsigned int *v16; // rsi
  __int64 v17; // rax
  __int64 **v18; // rsi
  __int64 **j; // r14
  __int64 *v20; // rdi
  const struct cocos2d::CCSize *v21; // rax
  __int64 v22; // rbx
  double v23; // xmm0_8
  __int64 v24; // rax
  __int64 v25; // rax
  float v26; // xmm0_4
  _BYTE v27[8]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v28[8]; // [rsp+28h] [rbp-60h] BYREF
  float v29; // [rsp+90h] [rbp+8h] BYREF

  v6 = -a2; /*0x6b613*/
  if ( a1 )
  {
    v8 = *(unsigned int **)(a1 + 56); /*0x6b61f*/
    v9 = *v8; /*0x6b623*/
    if ( (_DWORD)v9 )
    {
      v10 = (_QWORD *)*((_QWORD *)v8 + 2); /*0x6b629*/
      for ( i = &v10[v9 - 1]; v10 <= i; v6 = v6 + (float)((float)(v14 * v29) + a2) )
      {
        v12 = *v10; /*0x6b640*/
        if ( !*v10 ) /*0x6b640*/
          break; /*0x6b646*/
        v13 = a4
            ? (const struct cocos2d::CCSize *)&unk_903BF8
            : (const struct cocos2d::CCSize *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 320LL))(*v10);
        cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v29, v13); /*0x6b669*/
        v14 = (*(float (__fastcall **)(__int64))(*(_QWORD *)v12 + 128LL))(v12); /*0x6b675*/
        ++v10; /*0x6b684*/
      }
    }
  }
  v15 = (float)-v6 * 0.5; /*0x6b6a2*/
  if ( a1 )
  {
    v16 = *(unsigned int **)(a1 + 56); /*0x6b6b0*/
    v17 = *v16; /*0x6b6b4*/
    if ( (_DWORD)v17 )
    {
      v18 = (__int64 **)*((_QWORD *)v16 + 2); /*0x6b6be*/
      for ( j = &v18[v17 - 1]; v18 <= j; v15 = v15 + (float)((float)(v26 * v29) + a2) )
      {
        v20 = *v18; /*0x6b6d3*/
        if ( !*v18 ) /*0x6b6d3*/
          break; /*0x6b6d9*/
        v21 = a4
            ? (const struct cocos2d::CCSize *)&unk_903BF8
            : (const struct cocos2d::CCSize *)(*(__int64 (__fastcall **)(__int64 *))(*v20 + 320))(*v18);
        cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v29, v21); /*0x6b700*/
        v22 = *v20; /*0x6b706*/
        v23 = (*(double (__fastcall **)(__int64 *))(*v20 + 128))(v20); /*0x6b70c*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v28, (float)((float)(*(float *)&v23 * v29) * 0.5) + v15, 0.0); /*0x6b72f*/
        (*(void (__fastcall **)(__int64 *, __int64))(v22 + 184))(v20, v24); /*0x6b73b*/
        v25 = (*(__int64 (__fastcall **)(__int64 *))(*v20 + 200))(v20); /*0x6b747*/
        cocos2d::CCPoint::operator+(a3, v27, v25); /*0x6b758*/
        (*(void (__fastcall **)(__int64 *, _BYTE *))(*v20 + 184))(v20, v27); /*0x6b769*/
        v26 = (*(float (__fastcall **)(__int64 *))(*v20 + 128))(v20); /*0x6b775*/
        ++v18; /*0x6b784*/
      }
    }
  }
}

// [3/15] Address: 0x6d740
// Method: GameToolbox::getRelativeOffset
cocos2d::CCPoint *__fastcall GameToolbox_getRelativeOffset(cocos2d::CCPoint *a1, __int64 a2, cocos2d::CCPoint *a3)
{
  char v6; // si
  char v7; // r14
  double v8; // xmm0_8
  float v9; // xmm1_4
  float v10; // xmm0_4
  int v11; // eax
  float v12; // xmm0_4

  if ( cocos2d::CCPoint::equals(a3, (const struct cocos2d::CCPoint *)&unk_903BE0) ) /*0x6d762*/
    goto LABEL_33; /*0x6d76a*/
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 1280LL))(a2); /*0x6d789*/
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 1272LL))(a2); /*0x6d79b*/
  v8 = (*(double (__fastcall **)(__int64))(*(_QWORD *)a2 + 360LL))(a2); /*0x6d7a9*/
  v9 = *(float *)&v8; /*0x6d7b3*/
  v10 = fabs(*(float *)&v8); /*0x6d7b6*/
  if ( v10 == 90.0 || v10 == 270.0 ) /*0x6d7d1*/
  {
    v11 = *((_DWORD *)a3 + 1); /*0x6d7d7*/
    *((_DWORD *)a3 + 1) = *(_DWORD *)a3; /*0x6d7da*/
    *(_DWORD *)a3 = v11; /*0x6d7df*/
  }
  if ( v9 < 0.0 ) /*0x6d7e7*/
    v9 = v9 + 360.0; /*0x6d7e9*/
  if ( v7 ) /*0x6d7f9*/
  {
    if ( !v6 ) /*0x6d8a1*/
    {
      if ( v9 != 0.0 && v9 != 270.0 || (*(float *)a3 = *(float *)a3 * -1.0, v9 != 270.0) ) /*0x6d8ca*/
      {
        if ( v9 != 180.0 ) /*0x6d8d5*/
          goto LABEL_33; /*0x6d8d5*/
      }
      v12 = *((float *)a3 + 1) * -1.0; /*0x6d8dc*/
LABEL_32:
      *((float *)a3 + 1) = v12; /*0x6d91b*/
      goto LABEL_33; /*0x6d91b*/
    }
    if ( v9 == 0.0 || v9 == 90.0 ) /*0x6d8f6*/
      *(float *)a3 = *(float *)a3 * -1.0; /*0x6d900*/
    if ( v9 == 0.0 || v9 == 270.0 ) /*0x6d910*/
    {
      v12 = *((float *)a3 + 1) * -1.0; /*0x6d917*/
      goto LABEL_32; /*0x6d917*/
    }
  }
  else
  {
    if ( !v6 ) /*0x6d802*/
    {
      if ( (v9 == 90.0 || v9 == 180.0) && (*((float *)a3 + 1) = *((float *)a3 + 1) * -1.0, v9 == 180.0) || v9 == 270.0 ) /*0x6d840*/
        *(float *)a3 = *(float *)a3 * -1.0; /*0x6d84e*/
      goto LABEL_33; /*0x6d852*/
    }
    if ( v9 == 90.0 || v9 == 180.0 ) /*0x6d86f*/
      *(float *)a3 = *(float *)a3 * -1.0; /*0x6d879*/
    if ( v9 == 0.0 || v9 == 90.0 ) /*0x6d88d*/
    {
      v12 = *((float *)a3 + 1) * -1.0; /*0x6d898*/
      goto LABEL_32; /*0x6d89c*/
    }
  }
LABEL_33:
  cocos2d::CCPoint::CCPoint(a1, a3); /*0x6d925*/
  return a1; /*0x6d931*/
}

// [4/15] Address: 0x6df90
// Method: GameToolbox::addRThumbScrollButton
__int64 __fastcall GameToolbox_addRThumbScrollButton(__int64 a1)
{
  __int64 v2; // rax
  struct cocos2d::CCSprite *v3; // r14
  __int64 v4; // rbx
  float v5; // xmm6_4
  __int64 v6; // rcx
  cocos2d::CCDirector *v7; // rax
  float v8; // xmm0_4
  __int64 v9; // rax
  struct cocos2d::CCSprite *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  struct cocos2d::CCSprite *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  char v19; // [rsp+50h] [rbp+8h] BYREF
  float v20; // [rsp+54h] [rbp+Ch]
  char v21; // [rsp+58h] [rbp+10h] BYREF
  char v22; // [rsp+60h] [rbp+18h] BYREF

  v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x6dfa5*/
  cocos2d::CCDirector::getWinSize(v2, &v19); /*0x6dfb3*/
  v3 = cocos2d::CCSprite::createWithSpriteFrameName("controllerBtn_RThumb_001.png"); /*0x6dfcc*/
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *))(*(_QWORD *)a1 + 464LL))(a1, v3); /*0x6dfd9*/
  v4 = *(_QWORD *)v3; /*0x6dfea*/
  v5 = (float)(v20 * 0.5) + 80.0; /*0x6dfed*/
  v7 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v6); /*0x6dff5*/
  v8 = cocos2d::CCDirector::getScreenRight(v7) - 24.0; /*0x6e00c*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v21, v8, v5); /*0x6e017*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v4 + 184))(v3, v9); /*0x6e023*/
  v10 = cocos2d::CCSprite::createWithSpriteFrameName("edit_upBtn_001.png"); /*0x6e03c*/
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *))(*(_QWORD *)a1 + 464LL))(a1, v10); /*0x6e049*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, 0.0, 22.0); /*0x6e05c*/
  v12 = v11; /*0x6e065*/
  v13 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v3 + 200LL))(v3); /*0x6e072*/
  cocos2d::CCPoint::operator+(v13, &v21, v12); /*0x6e07f*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, char *))(*(_QWORD *)v10 + 184LL))(v10, &v21); /*0x6e090*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v10 + 160LL))(v10); /*0x6e0a7*/
  v14 = cocos2d::CCSprite::createWithSpriteFrameName("edit_downBtn_001.png"); /*0x6e0c0*/
  (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *))(*(_QWORD *)a1 + 464LL))(a1, v14); /*0x6e0cd*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, 0.0, -22.0); /*0x6e0e0*/
  v16 = v15; /*0x6e0e9*/
  v17 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v3 + 200LL))(v3); /*0x6e0f6*/
  cocos2d::CCPoint::operator+(v17, &v21, v16); /*0x6e103*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, char *))(*(_QWORD *)v14 + 184LL))(v14, &v21); /*0x6e114*/
  return (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v14 + 160LL))(v14); /*0x6e129*/
}

// [5/15] Address: 0x6e370
// Method: GameToolbox::transformColor
__int64 __fastcall GameToolbox_transformColor(__int64 a1, unsigned __int16 *a2, float *a3)
{
  __m128 v4; // xmm7
  unsigned int v6; // eax
  __m128i v7; // xmm1
  int v8; // eax
  __int64 v9; // rax
  __m128d v10; // xmm2
  __m128d v11; // xmm1
  double v12; // xmm0_8
  double v13; // xmm2_8
  double v14; // xmm0_8
  __m128d v15; // xmm2
  double v16; // xmm0_8
  double v17; // xmm0_8
  double v18; // xmm6_8
  __m128d *v19; // rax
  double v20; // xmm2_8
  double v21; // xmm3_8
  __m128d v23; // [rsp+20h] [rbp-68h] BYREF
  double v24; // [rsp+30h] [rbp-58h]
  __int64 v25; // [rsp+38h] [rbp-50h]
  __m128d v26; // [rsp+40h] [rbp-48h] BYREF
  double v27; // [rsp+50h] [rbp-38h]

  v4 = (__m128)*(unsigned int *)a3; /*0x6e385*/
  if ( v4.m128_f32[0] == *(float *)&xmmword_8F8360 /*0x6e3c5*/
    && a3[1] == *((float *)&xmmword_8F8360 + 1)
    && a3[2] == *((float *)&xmmword_8F8360 + 2)
    && *((_WORD *)a3 + 6) == WORD6(xmmword_8F8360) )
  {
    *(_WORD *)a1 = *a2; /*0x6e3d7*/
    *(_BYTE *)(a1 + 2) = *((_BYTE *)a2 + 2); /*0x6e3de*/
  }
  else
  {
    v6 = *a2; /*0x6e3e6*/
    v25 = 0x3FF0000000000000LL; /*0x6e3fe*/
    v7 = _mm_cvtsi32_si128(v6); /*0x6e404*/
    v8 = *((unsigned __int8 *)a2 + 2); /*0x6e408*/
    v23 = _mm_cvtps_pd( /*0x6e435*/
            _mm_mul_ps(
              _mm_cvtepi32_ps(_mm_unpacklo_epi16(_mm_unpacklo_epi8(v7, (__m128i)0LL), (__m128i)0LL)),
              (__m128)xmmword_8312C0));
    v24 = (float)((float)v8 * 0.0039215689); /*0x6e43d*/
    v9 = cocos2d::extension::CCControlUtils::HSVfromRGB(&v26, &v23); /*0x6e443*/
    v10 = *(__m128d *)v9; /*0x6e44e*/
    v24 = *(double *)(v9 + 16); /*0x6e451*/
    v11 = v10; /*0x6e45d*/
    if ( v4.m128_f32[0] != 0.0 ) /*0x6e462*/
    {
      v11 = _mm_cvtps_pd(v4); /*0x6e464*/
      v11.m128d_f64[0] = v11.m128d_f64[0] + v10.m128d_f64[0]; /*0x6e467*/
      if ( v11.m128d_f64[0] >= 0.0 ) /*0x6e46f*/
      {
        if ( v11.m128d_f64[0] > 360.0 ) /*0x6e483*/
          v11 = (__m128d)COERCE_UNSIGNED_INT64((double)((int)v11.m128d_f64[0] % 360)); /*0x6e4a8*/
      }
      else
      {
        v11.m128d_f64[0] = v11.m128d_f64[0] + 360.0; /*0x6e471*/
      }
    }
    v12 = a3[1]; /*0x6e4b5*/
    *(_QWORD *)&v13 = *(_OWORD *)&_mm_unpackhi_pd(v10, v10); /*0x6e4b8*/
    if ( *((_BYTE *)a3 + 12) ) /*0x6e4ac*/
      v14 = v12 + v13; /*0x6e4be*/
    else
      v14 = v12 * v13; /*0x6e4c4*/
    v15.m128d_f64[1] = 0.0; /*0x6e4d0*/
    v15.m128d_f64[0] = fmin(1.0, v14); /*0x6e4d3*/
    if ( v15.m128d_f64[0] < 0.00009999999747378752 ) /*0x6e4db*/
      v15 = (__m128d)0x3F1A36E2E0000000uLL; /*0x6e4dd*/
    v16 = a3[2]; /*0x6e4e9*/
    if ( *((_BYTE *)a3 + 13) ) /*0x6e4e0*/
      v17 = v16 + v24; /*0x6e4ee*/
    else
      v17 = v16 * v24; /*0x6e4f6*/
    v18 = fmin(1.0, v17); /*0x6e4fc*/
    if ( v18 >= 0.00009999999747378752 ) /*0x6e504*/
      v24 = v18; /*0x6e50e*/
    else
      v24 = 0.00009999999747378752; /*0x6e506*/
    v26 = _mm_unpacklo_pd(v11, v15); /*0x6e528*/
    v27 = v24; /*0x6e52d*/
    v19 = (__m128d *)cocos2d::extension::CCControlUtils::RGBfromHSV(&v23, &v26); /*0x6e533*/
    v20 = _mm_unpackhi_pd(*v19, *v19).m128d_f64[0]; /*0x6e54b*/
    v21 = v19[1].m128d_f64[0] * 255.0; /*0x6e557*/
    *(_BYTE *)a1 = (int)(v19->m128d_f64[0] * 255.0); /*0x6e55f*/
    *(_BYTE *)(a1 + 1) = (int)(v20 * 255.0); /*0x6e565*/
    *(_BYTE *)(a1 + 2) = (int)v21; /*0x6e56c*/
  }
  return a1; /*0x6e574*/
}

// [6/15] Address: 0x6e7d0
// Method: GameToolbox::saveParticleToString
// Hidden C++ exception states: #wind=1
__int64 __fastcall GameToolbox_saveParticleToString(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  void *v7; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v8; // [rsp+28h] [rbp-D8h]
  _BYTE v9[528]; // [rsp+40h] [rbp-C0h] BYREF

  fmt::BasicWriter<char>::BasicWriter<char>(v9); /*0x6e811*/
  fmt::BasicWriter<char>::operator<<(v9); /*0x6e824*/
  v7 = &unk_708034; /*0x6e831*/
  v8 = 0; /*0x6e836*/
  fmt::BasicWriter<char>::operator<<(v9, &v7); /*0x6e845*/
  fmt::BasicWriter<char>::operator<<(v9); /*0x6e858*/
  v7 = &unk_708034; /*0x6e85e*/
  v8 = 0; /*0x6e863*/
  fmt::BasicWriter<char>::operator<<(v9, &v7); /*0x6e872*/
  fmt::BasicWriter<char>::operator<<(v9); /*0x6e885*/
  v7 = &unk_708034; /*0x6e88b*/
  v8 = 0; /*0x6e890*/
  fmt::BasicWriter<char>::operator<<(v9, &v7); /*0x6e89f*/
  fmt::BasicWriter<char>::operator<<(v9, *(unsigned __int8 *)(a2 + 12)); /*0x6e8ae*/
  v7 = &unk_708034; /*0x6e8b4*/
  v8 = 0; /*0x6e8b9*/
  fmt::BasicWriter<char>::operator<<(v9, &v7); /*0x6e8c8*/
  fmt::BasicWriter<char>::operator<<(v9, *(unsigned __int8 *)(a2 + 13)); /*0x6e8d7*/
  v4 = fmt::BasicWriter<char>::c_str(v9); /*0x6e8e2*/
  *(_OWORD *)a1 = 0; /*0x6e8eb*/
  *(_QWORD *)(a1 + 16) = 0; /*0x6e8ee*/
  *(_QWORD *)(a1 + 24) = 0; /*0x6e8f2*/
  v5 = -1; /*0x6e8f6*/
  do /*0x6e903*/
    ++v5; /*0x6e900*/
  while ( *(_BYTE *)(v4 + v5) ); /*0x6e903*/
  sub_3C230(a1); /*0x6e910*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v9); /*0x6e91b*/
  return a1; /*0x6e924*/
}

// [7/15] Address: 0x6edc0
// Method: GameToolbox::getTimeString
__int64 __fastcall GameToolbox_getTimeString(__int64 a1, int a2, char a3)
{
  float v5; // xmm7_4
  int v6; // edi
  float v7; // xmm7_4
  int v8; // esi
  float v9; // xmm7_4
  int v10; // ecx
  int v11; // r8d
  cocos2d::CCString *v12; // rax
  const char *v13; // rax
  __int64 v14; // r8
  cocos2d::CCString *v15; // rax
  const char *v16; // rax
  __int64 v17; // r8
  cocos2d::CCString *v18; // rax
  const char *v19; // rax
  __int64 v20; // r8
  cocos2d::CCString *v21; // rax
  const char *v22; // rax
  __int64 v23; // r8
  cocos2d::CCString *v24; // rax
  const char *CString; // rax
  __int64 v26; // r8

  v5 = (float)a2; /*0x6edea*/
  v6 = (int)floorf((float)a2 / 86400.0); /*0x6ee00*/
  v7 = v5 - (float)((float)v6 * 86400.0); /*0x6ee13*/
  v8 = (int)floorf(v7 / 3600.0); /*0x6ee27*/
  v9 = v7 - (float)(3600 * v8); /*0x6ee38*/
  v10 = (int)floorf(v9 / 60.0); /*0x6ee4c*/
  v11 = (int)(float)(v9 - (float)(60 * v10)); /*0x6ee63*/
  if ( v6 + v10 + v8 > 0 ) /*0x6ee6a*/
  {
    if ( v8 + v6 > 0 ) /*0x6eeb3*/
    {
      if ( v6 > 0 ) /*0x6ef30*/
      {
        v24 = cocos2d::CCString::createWithFormat("%idays %ih", v6, v8); /*0x6ef79*/
        CString = cocos2d::CCString::getCString(v24); /*0x6ef82*/
        v26 = -1; /*0x6ef8b*/
        *(_OWORD *)a1 = 0; /*0x6ef92*/
        *(_QWORD *)(a1 + 16) = 0; /*0x6ef95*/
        *(_QWORD *)(a1 + 24) = 0; /*0x6ef99*/
        do /*0x6efa3*/
          ++v26; /*0x6efa0*/
        while ( CString[v26] ); /*0x6efa3*/
      }
      else
      {
        v21 = cocos2d::CCString::createWithFormat("%ih %imin", v8, v10); /*0x6ef3e*/
        v22 = cocos2d::CCString::getCString(v21); /*0x6ef47*/
        v23 = -1; /*0x6ef50*/
        *(_OWORD *)a1 = 0; /*0x6ef57*/
        *(_QWORD *)(a1 + 16) = 0; /*0x6ef5a*/
        *(_QWORD *)(a1 + 24) = 0; /*0x6ef5e*/
        do /*0x6ef65*/
          ++v23; /*0x6ef62*/
        while ( v22[v23] ); /*0x6ef65*/
      }
    }
    else if ( a3 ) /*0x6eeba*/
    {
      v15 = cocos2d::CCString::createWithFormat("%imin", v10); /*0x6eec3*/
      v16 = cocos2d::CCString::getCString(v15); /*0x6eecc*/
      v17 = -1; /*0x6eed5*/
      *(_OWORD *)a1 = 0; /*0x6eedc*/
      *(_QWORD *)(a1 + 16) = 0; /*0x6eedf*/
      *(_QWORD *)(a1 + 24) = 0; /*0x6eee3*/
      do /*0x6eeea*/
        ++v17; /*0x6eee7*/
      while ( v16[v17] ); /*0x6eeea*/
    }
    else
    {
      v18 = cocos2d::CCString::createWithFormat("%imin %02dsec", v10, v11); /*0x6eefc*/
      v19 = cocos2d::CCString::getCString(v18); /*0x6ef05*/
      v20 = -1; /*0x6ef0e*/
      *(_OWORD *)a1 = 0; /*0x6ef15*/
      *(_QWORD *)(a1 + 16) = 0; /*0x6ef18*/
      *(_QWORD *)(a1 + 24) = 0; /*0x6ef1c*/
      do /*0x6ef23*/
        ++v20; /*0x6ef20*/
      while ( v19[v20] ); /*0x6ef23*/
    }
  }
  else
  {
    v12 = cocos2d::CCString::createWithFormat("%isec", v11); /*0x6ee76*/
    v13 = cocos2d::CCString::getCString(v12); /*0x6ee7f*/
    v14 = -1; /*0x6ee88*/
    *(_OWORD *)a1 = 0; /*0x6ee8f*/
    *(_QWORD *)(a1 + 16) = 0; /*0x6ee92*/
    *(_QWORD *)(a1 + 24) = 0; /*0x6ee96*/
    do /*0x6eea3*/
      ++v14; /*0x6eea0*/
    while ( v13[v14] ); /*0x6eea3*/
  }
  sub_3C230(a1); /*0x6efaf*/
  return a1; /*0x6efb4*/
}

// [8/15] Address: 0x71590
// Method: GameToolbox::particleFromStruct
struct cocos2d::CCParticleSystemQuad *__fastcall GameToolbox_particleFromStruct(
        unsigned int *a1,
        struct cocos2d::CCParticleSystemQuad *a2,
        bool a3)
{
  struct cocos2d::CCParticleSystemQuad *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned int v10; // xmm1_4
  __int64 v11; // rax
  unsigned int v12; // xmm0_4
  unsigned int v13; // xmm1_4
  unsigned int v14; // xmm1_4
  __int64 v15; // rax
  unsigned int v16; // xmm0_4
  unsigned int v17; // xmm1_4
  unsigned int v18; // xmm1_4
  __int64 v19; // rax
  unsigned int v20; // xmm0_4
  unsigned int v21; // xmm1_4
  unsigned int v22; // xmm1_4
  __int64 v23; // rax
  unsigned int v24; // xmm0_4
  unsigned int v25; // xmm1_4
  const char *v26; // rbx
  cocos2d::CCSpriteFrameCache *v27; // rax
  struct cocos2d::CCSpriteFrame *v28; // rax
  unsigned int v30; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v31; // [rsp+24h] [rbp-34h]
  unsigned int v32; // [rsp+28h] [rbp-30h]
  unsigned int v33; // [rsp+2Ch] [rbp-2Ch]

  v5 = a2; /*0x715b1*/
  if ( a2 ) /*0x715b7*/
    (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *, _QWORD))(*(_QWORD *)a2 + 1496LL))(a2, *a1); /*0x715d2*/
  else
    v5 = cocos2d::CCParticleSystemQuad::createWithTotalParticles(*a1, a3); /*0x715c5*/
  (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *))(*(_QWORD *)v5 + 920LL))(v5); /*0x715e3*/
  (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *))(*(_QWORD *)v5 + 968LL))(v5); /*0x715f4*/
  (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *))(*(_QWORD *)v5 + 984LL))(v5); /*0x71605*/
  (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *))(*(_QWORD *)v5 + 1480LL))(v5); /*0x71619*/
  (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *))(*(_QWORD *)v5 + 1000LL))(v5); /*0x7162d*/
  (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *))(*(_QWORD *)v5 + 1016LL))(v5); /*0x71641*/
  (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *))(*(_QWORD *)v5 + 1056LL))(v5); /*0x71655*/
  (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *))(*(_QWORD *)v5 + 1072LL))(v5); /*0x71669*/
  v6 = *(_QWORD *)v5; /*0x7167e*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v30, (float)(int)a1[9], (float)(int)a1[10]); /*0x71687*/
  (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *, __int64))(v6 + 952))(v5, v7); /*0x71693*/
  v8 = *(_QWORD *)v5; /*0x716a8*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v30, (float)(int)a1[11], (float)(int)a1[12]); /*0x716b1*/
  (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *, __int64))(v8 + 1040))(v5, v9); /*0x716bd*/
  (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *))(*(_QWORD *)v5 + 1120LL))(v5); /*0x716d1*/
  (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *))(*(_QWORD *)v5 + 1136LL))(v5); /*0x716e5*/
  (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *))(*(_QWORD *)v5 + 1088LL))(v5); /*0x716f9*/
  (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *))(*(_QWORD *)v5 + 1104LL))(v5); /*0x7170d*/
  (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *))(*(_QWORD *)v5 + 1288LL))(v5); /*0x71721*/
  (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *))(*(_QWORD *)v5 + 1304LL))(v5); /*0x71735*/
  (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *))(*(_QWORD *)v5 + 1416LL))(v5); /*0x71749*/
  (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *))(*(_QWORD *)v5 + 1432LL))(v5); /*0x7175d*/
  v10 = a1[23]; /*0x7176d*/
  v11 = *(_QWORD *)v5; /*0x71775*/
  v30 = a1[21]; /*0x71778*/
  v12 = a1[25]; /*0x7177e*/
  v31 = v10; /*0x71783*/
  v13 = a1[27]; /*0x71789*/
  v32 = v12; /*0x7178e*/
  v33 = v13; /*0x71794*/
  (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *, unsigned int *))(v11 + 1352))(v5, &v30); /*0x7179a*/
  v14 = a1[24]; /*0x717aa*/
  v15 = *(_QWORD *)v5; /*0x717b2*/
  v30 = a1[22]; /*0x717b5*/
  v16 = a1[26]; /*0x717bb*/
  v31 = v14; /*0x717c0*/
  v17 = a1[28]; /*0x717c6*/
  v32 = v16; /*0x717cb*/
  v33 = v17; /*0x717d1*/
  (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *, unsigned int *))(v15 + 1368))(v5, &v30); /*0x717d7*/
  (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *))(*(_QWORD *)v5 + 1320LL))(v5); /*0x717eb*/
  (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *))(*(_QWORD *)v5 + 1336LL))(v5); /*0x717ff*/
  (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *))(*(_QWORD *)v5 + 1448LL))(v5); /*0x71813*/
  (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *))(*(_QWORD *)v5 + 1464LL))(v5); /*0x7182a*/
  v18 = a1[35]; /*0x7183d*/
  v19 = *(_QWORD *)v5; /*0x71848*/
  v30 = a1[33]; /*0x7184b*/
  v20 = a1[37]; /*0x71851*/
  v31 = v18; /*0x71859*/
  v21 = a1[39]; /*0x7185f*/
  v32 = v20; /*0x71867*/
  v33 = v21; /*0x7186d*/
  (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *, unsigned int *))(v19 + 1384))(v5, &v30); /*0x71873*/
  v22 = a1[36]; /*0x71881*/
  v23 = *(_QWORD *)v5; /*0x71889*/
  v30 = a1[34]; /*0x7188c*/
  v24 = a1[38]; /*0x71892*/
  v31 = v22; /*0x7189a*/
  v25 = a1[40]; /*0x718a0*/
  v32 = v24; /*0x718a8*/
  v33 = v25; /*0x718ae*/
  (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *, unsigned int *))(v23 + 1400))(v5, &v30); /*0x718bc*/
  *((_DWORD *)v5 + 126) = a1[41]; /*0x718cb*/
  *((_DWORD *)v5 + 127) = a1[42]; /*0x718d7*/
  *((_DWORD *)v5 + 128) = a1[43]; /*0x718e3*/
  *((_DWORD *)v5 + 129) = a1[44]; /*0x718ef*/
  (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *))(*(_QWORD *)v5 + 1168LL))(v5); /*0x71903*/
  (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *))(*(_QWORD *)v5 + 1184LL))(v5); /*0x7191a*/
  (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *))(*(_QWORD *)v5 + 1200LL))(v5); /*0x71931*/
  (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *))(*(_QWORD *)v5 + 1216LL))(v5); /*0x71948*/
  (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *))(*(_QWORD *)v5 + 1232LL))(v5); /*0x7195f*/
  (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *))(*(_QWORD *)v5 + 1248LL))(v5); /*0x71976*/
  (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *, _QWORD))(*(_QWORD *)v5 + 1560LL))(v5, a1[51]); /*0x71988*/
  (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *, _QWORD))(*(_QWORD *)v5 + 1528LL))(v5, a1[52]); /*0x7199a*/
  (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *, _QWORD))(*(_QWORD *)v5 + 1272LL))( /*0x719ad*/
    v5,
    *((unsigned __int8 *)a1 + 212));
  *((_BYTE *)v5 + 552) = *((_BYTE *)a1 + 213); /*0x719bd*/
  (*(void (__fastcall **)(struct cocos2d::CCParticleSystemQuad *, _QWORD))(*(_QWORD *)v5 + 1152LL))( /*0x719cd*/
    v5,
    *((unsigned __int8 *)a1 + 214));
  v26 = (const char *)(a1 + 66); /*0x719da*/
  *((_BYTE *)v5 + 555) = *((_BYTE *)a1 + 215); /*0x719e1*/
  if ( *((_QWORD *)a1 + 36) > 0xFu ) /*0x719ec*/
    v26 = *(const char **)v26; /*0x719ee*/
  v27 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x719f1*/
  v28 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v27, v26); /*0x719fd*/
  cocos2d::CCParticleSystemQuad::setDisplayFrame(v5, v28); /*0x71a09*/
  *((_WORD *)v5 + 418) = *((_WORD *)a1 + 108); /*0x71a16*/
  *((_BYTE *)v5 + 748) = *((_BYTE *)a1 + 220); /*0x71a24*/
  *((_DWORD *)v5 + 130) = a1[56]; /*0x71a30*/
  *((_DWORD *)v5 + 131) = a1[57]; /*0x71a3c*/
  *((_DWORD *)v5 + 136) = a1[58]; /*0x71a48*/
  *((_DWORD *)v5 + 137) = a1[59]; /*0x71a54*/
  *((_BYTE *)v5 + 556) = *((_BYTE *)a1 + 240); /*0x71a61*/
  *((_BYTE *)v5 + 553) = *((_BYTE *)a1 + 241); /*0x71a6e*/
  *((_BYTE *)v5 + 554) = *((_BYTE *)a1 + 242); /*0x71a7b*/
  *((_BYTE *)v5 + 557) = *((_BYTE *)a1 + 243); /*0x71a88*/
  *((_BYTE *)v5 + 558) = *((_BYTE *)a1 + 244); /*0x71a95*/
  *((_DWORD *)v5 + 132) = a1[62]; /*0x71aa1*/
  *((_DWORD *)v5 + 133) = a1[63]; /*0x71aad*/
  *((_DWORD *)v5 + 134) = a1[64]; /*0x71ab9*/
  *((_DWORD *)v5 + 135) = a1[65]; /*0x71ac5*/
  if ( a2 ) /*0x71ace*/
    cocos2d::CCParticleSystem::resetSystem(v5); /*0x71ad3*/
  cocos2d::CCParticleSystem::saveDefaults(v5); /*0x71adc*/
  return v5; /*0x71ae5*/
}

// [9/15] Address: 0x71b00
// Method: GameToolbox::easeToText
__int64 __fastcall GameToolbox_easeToText(__int64 a1, int a2)
{
  __int64 result; // rax
  char *v4; // rax

  switch ( a2 ) /*0x71b2b*/
  {
    case 1: /*0x71b2b*/
      *(_OWORD *)a1 = 0; /*0x71b30*/
      *(_QWORD *)(a1 + 16) = 11; /*0x71b33*/
      *(_QWORD *)(a1 + 24) = 15; /*0x71b3b*/
      strcpy((char *)a1, "Ease In Out"); /*0x71b4b*/
      result = a1; /*0x71b64*/
      break; /*0x71b70*/
    case 2: /*0x71b2b*/
      *(_OWORD *)a1 = 0; /*0x71b74*/
      *(_QWORD *)(a1 + 16) = 7; /*0x71b77*/
      *(_QWORD *)(a1 + 24) = 15; /*0x71b7f*/
      *(_DWORD *)a1 = 1702060357; /*0x71b8e*/
      *(_WORD *)(a1 + 4) = 18720; /*0x71b97*/
      *(_BYTE *)(a1 + 6) = 110; /*0x71ba2*/
      *(_BYTE *)(a1 + 7) = 0; /*0x71ba8*/
      result = a1; /*0x71ba5*/
      break; /*0x71bb1*/
    case 3: /*0x71b2b*/
      *(_OWORD *)a1 = 0; /*0x71bbf*/
      *(_QWORD *)(a1 + 16) = 8; /*0x71bc2*/
      *(_QWORD *)(a1 + 24) = 15; /*0x71bca*/
      strcpy((char *)a1, "Ease Out"); /*0x71bd2*/
      result = a1; /*0x71bd5*/
      break; /*0x71be1*/
    case 4: /*0x71b2b*/
      *(_OWORD *)a1 = 0; /*0x71be5*/
      *(_QWORD *)(a1 + 16) = 14; /*0x71be8*/
      *(_QWORD *)(a1 + 24) = 15; /*0x71bf0*/
      strcpy((char *)a1, "Elastic In Out"); /*0x71c00*/
      result = a1; /*0x71c18*/
      break; /*0x71c24*/
    case 5: /*0x71b2b*/
      *(_OWORD *)a1 = 0; /*0x71c28*/
      *(_QWORD *)(a1 + 16) = 10; /*0x71c2b*/
      *(_QWORD *)(a1 + 24) = 15; /*0x71c33*/
      strcpy((char *)a1, "Elastic In"); /*0x71c43*/
      result = a1; /*0x71c52*/
      break; /*0x71c5e*/
    case 6: /*0x71b2b*/
      *(_OWORD *)a1 = 0; /*0x71c62*/
      *(_QWORD *)(a1 + 16) = 11; /*0x71c65*/
      *(_QWORD *)(a1 + 24) = 15; /*0x71c6d*/
      strcpy((char *)a1, "Elastic Out"); /*0x71c7d*/
      result = a1; /*0x71c96*/
      break; /*0x71ca2*/
    case 7: /*0x71b2b*/
      *(_OWORD *)a1 = 0; /*0x71ca6*/
      *(_QWORD *)(a1 + 16) = 13; /*0x71ca9*/
      *(_QWORD *)(a1 + 24) = 15; /*0x71cb1*/
      strcpy((char *)a1, "Bounce In Out"); /*0x71cc1*/
      result = a1; /*0x71cd8*/
      break; /*0x71ce4*/
    case 8: /*0x71b2b*/
      *(_OWORD *)a1 = 0; /*0x71ce8*/
      *(_QWORD *)(a1 + 16) = 9; /*0x71ceb*/
      *(_QWORD *)(a1 + 24) = 15; /*0x71cf3*/
      strcpy((char *)a1, "Bounce In"); /*0x71d03*/
      result = a1; /*0x71d11*/
      break; /*0x71d1d*/
    case 9: /*0x71b2b*/
      *(_OWORD *)a1 = 0; /*0x71d21*/
      *(_QWORD *)(a1 + 16) = 10; /*0x71d24*/
      *(_QWORD *)(a1 + 24) = 15; /*0x71d2c*/
      strcpy((char *)a1, "Bounce Out"); /*0x71d3c*/
      result = a1; /*0x71d4b*/
      break; /*0x71d57*/
    case 10: /*0x71b2b*/
      *(_OWORD *)a1 = 0; /*0x71d60*/
      *(_QWORD *)(a1 + 16) = 0; /*0x71d63*/
      *(_QWORD *)(a1 + 24) = 0; /*0x71d67*/
      v4 = (char *)sub_3C460(32); /*0x71d6b*/
      *(_QWORD *)a1 = v4; /*0x71d70*/
      *(_QWORD *)(a1 + 16) = 18; /*0x71d73*/
      *(_QWORD *)(a1 + 24) = 31; /*0x71d7b*/
      strcpy(v4, "Exponential In Out"); /*0x71d8a*/
      result = a1; /*0x71d9c*/
      break; /*0x71da4*/
    case 11: /*0x71b2b*/
      *(_OWORD *)a1 = 0; /*0x71da8*/
      *(_QWORD *)(a1 + 16) = 14; /*0x71dab*/
      *(_QWORD *)(a1 + 24) = 15; /*0x71db3*/
      strcpy((char *)a1, "Exponential In"); /*0x71dc3*/
      result = a1; /*0x71ddb*/
      break; /*0x71de7*/
    case 12: /*0x71b2b*/
      *(_OWORD *)a1 = 0; /*0x71deb*/
      *(_QWORD *)(a1 + 16) = 15; /*0x71dee*/
      *(_QWORD *)(a1 + 24) = 15; /*0x71df6*/
      strcpy((char *)a1, "Exponential Out"); /*0x71e06*/
      result = a1; /*0x71e28*/
      break; /*0x71e34*/
    case 13: /*0x71b2b*/
      *(_OWORD *)a1 = 0; /*0x71e38*/
      *(_QWORD *)(a1 + 16) = 11; /*0x71e3b*/
      *(_QWORD *)(a1 + 24) = 15; /*0x71e43*/
      strcpy((char *)a1, "Sine In Out"); /*0x71e53*/
      result = a1; /*0x71e6c*/
      break; /*0x71e78*/
    case 14: /*0x71b2b*/
      *(_OWORD *)a1 = 0; /*0x71e7c*/
      *(_QWORD *)(a1 + 16) = 7; /*0x71e7f*/
      *(_QWORD *)(a1 + 24) = 15; /*0x71e87*/
      *(_DWORD *)a1 = 1701734739; /*0x71e96*/
      *(_WORD *)(a1 + 4) = 18720; /*0x71e9f*/
      *(_BYTE *)(a1 + 6) = 110; /*0x71eaa*/
      *(_BYTE *)(a1 + 7) = 0; /*0x71eb0*/
      result = a1; /*0x71ead*/
      break; /*0x71eb9*/
    case 15: /*0x71b2b*/
      *(_OWORD *)a1 = 0; /*0x71ec7*/
      *(_QWORD *)(a1 + 16) = 8; /*0x71eca*/
      *(_QWORD *)(a1 + 24) = 15; /*0x71ed2*/
      strcpy((char *)a1, "Sine Out"); /*0x71eda*/
      result = a1; /*0x71edd*/
      break; /*0x71ee9*/
    case 16: /*0x71b2b*/
      *(_OWORD *)a1 = 0; /*0x71eed*/
      *(_QWORD *)(a1 + 16) = 11; /*0x71ef0*/
      *(_QWORD *)(a1 + 24) = 15; /*0x71ef8*/
      strcpy((char *)a1, "Back In Out"); /*0x71f08*/
      result = a1; /*0x71f21*/
      break; /*0x71f2d*/
    case 17: /*0x71b2b*/
      *(_OWORD *)a1 = 0; /*0x71f31*/
      *(_QWORD *)(a1 + 16) = 7; /*0x71f34*/
      *(_QWORD *)(a1 + 24) = 15; /*0x71f3c*/
      *(_DWORD *)a1 = 1801675074; /*0x71f4b*/
      *(_WORD *)(a1 + 4) = 18720; /*0x71f54*/
      *(_BYTE *)(a1 + 6) = 110; /*0x71f5f*/
      *(_BYTE *)(a1 + 7) = 0; /*0x71f65*/
      result = a1; /*0x71f62*/
      break; /*0x71f6e*/
    case 18: /*0x71b2b*/
      *(_OWORD *)a1 = 0; /*0x71f7c*/
      *(_QWORD *)(a1 + 16) = 8; /*0x71f7f*/
      *(_QWORD *)(a1 + 24) = 15; /*0x71f87*/
      strcpy((char *)a1, "Back Out"); /*0x71f8f*/
      result = a1; /*0x71f92*/
      break; /*0x71f9e*/
    default:
      *(_OWORD *)a1 = 0; /*0x71fa5*/
      *(_QWORD *)(a1 + 16) = 4; /*0x71fa8*/
      *(_QWORD *)(a1 + 24) = 15; /*0x71fb0*/
      strcpy((char *)a1, "None"); /*0x71fb8*/
      result = a1; /*0x71fa2*/
      break; /*0x71fa2*/
  }
  return result; /*0x71b6b*/
}

// [10/15] Address: 0x72010
// Method: GameToolbox::bounceTime
float __fastcall GameToolbox_bounceTime(float a1)
{
  double v1; // xmm3_8

  v1 = a1; /*0x7201e*/
  if ( a1 < 0.3636363636363636 ) /*0x72026*/
    return (float)(a1 * 7.5625) * a1; /*0x72030*/
  if ( v1 < 0.7272727272727273 ) /*0x72041*/
    return (float)((float)((float)(a1 - 0.54545456) * 7.5625) * (float)(a1 - 0.54545456)) + 0.75; /*0x7205a*/
  if ( v1 >= 0.9090909090909091 ) /*0x7206f*/
    return (float)((float)((float)(a1 - 0.95454544) * 7.5625) * (float)(a1 - 0.95454544)) + 0.984375; /*0x720a8*/
  return (float)((float)((float)(a1 - 0.81818181) * 7.5625) * (float)(a1 - 0.81818181)) + 0.9375; /*0x72034*/
}

// [11/15] Address: 0x725f0
// Method: GameToolbox::intToString
// Hidden C++ exception states: #wind=1
__int64 __fastcall GameToolbox_intToString(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  _BYTE v7[528]; // [rsp+30h] [rbp-228h] BYREF

  fmt::BasicWriter<char>::BasicWriter<char>(v7); /*0x7261e*/
  fmt::BasicWriter<char>::operator<<(v7, a2); /*0x7262c*/
  v4 = fmt::BasicWriter<char>::c_str(v7); /*0x72637*/
  *(_OWORD *)a1 = 0; /*0x72640*/
  *(_QWORD *)(a1 + 16) = 0; /*0x72643*/
  *(_QWORD *)(a1 + 24) = 0; /*0x7264b*/
  v5 = -1; /*0x72653*/
  do /*0x72663*/
    ++v5; /*0x72660*/
  while ( *(_BYTE *)(v4 + v5) ); /*0x72663*/
  sub_3C230(a1); /*0x72670*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v7); /*0x7267b*/
  return a1; /*0x72684*/
}

// [12/15] Address: 0x73010
// Method: GameToolbox::timestampToHumanReadable
// Hidden C++ exception states: #wind=1
__int64 __fastcall GameToolbox_timestampToHumanReadable(__int64 a1, __time64_t a2)
{
  __time64_t v4; // rax
  double v5; // xmm0_8
  char *v6; // rax
  signed int v7; // ebx
  void *v8; // rax
  char *v9; // rdx
  size_t v10; // r8
  signed int v11; // ebx
  signed int v12; // ebx
  signed int v13; // ebx
  signed int v14; // ebx
  __int64 v15; // rax
  _BYTE v17[32]; // [rsp+30h] [rbp-38h] BYREF

  v4 = time64(0); /*0x7303d*/
  v5 = difftime64(v4, a2); /*0x73049*/
  if ( v5 >= 60.0 ) /*0x7305b*/
  {
    if ( v5 >= 3600.0 ) /*0x730c0*/
    {
      if ( v5 >= 86400.0 ) /*0x7313e*/
      {
        if ( v5 >= 2592000.0 ) /*0x731be*/
        {
          if ( v5 >= 31536000.0 ) /*0x7323e*/
          {
            v14 = (int)(v5 / 31536000.0); /*0x732b3*/
            v8 = (void *)GameToolbox_intToString((__int64)v17, v14); /*0x732b9*/
            v9 = " year ago"; /*0x732c6*/
            if ( v14 > 1 ) /*0x732d0*/
              v9 = " years ago"; /*0x732d0*/
            v10 = -1; /*0x732d4*/
            do /*0x732e3*/
              ++v10; /*0x732e0*/
            while ( v9[v10] ); /*0x732e3*/
          }
          else
          {
            v13 = (int)(v5 / 2592000.0); /*0x73244*/
            v8 = (void *)GameToolbox_intToString((__int64)v17, v13); /*0x7324a*/
            v9 = " month ago"; /*0x73257*/
            if ( v13 > 1 ) /*0x73261*/
              v9 = " months ago"; /*0x73261*/
            v10 = -1; /*0x73265*/
            do /*0x73273*/
              ++v10; /*0x73270*/
            while ( v9[v10] ); /*0x73273*/
          }
        }
        else
        {
          v12 = (int)(v5 / 86400.0); /*0x731c4*/
          v8 = (void *)GameToolbox_intToString((__int64)v17, v12); /*0x731ca*/
          v9 = " day ago"; /*0x731d7*/
          if ( v12 > 1 ) /*0x731e1*/
            v9 = " days ago"; /*0x731e1*/
          v10 = -1; /*0x731e5*/
          do /*0x731f3*/
            ++v10; /*0x731f0*/
          while ( v9[v10] ); /*0x731f3*/
        }
      }
      else
      {
        v11 = (int)(v5 / 3600.0); /*0x73144*/
        v8 = (void *)GameToolbox_intToString((__int64)v17, v11); /*0x7314a*/
        v9 = " hour ago"; /*0x73157*/
        if ( v11 > 1 ) /*0x73161*/
          v9 = " hours ago"; /*0x73161*/
        v10 = -1; /*0x73165*/
        do /*0x73173*/
          ++v10; /*0x73170*/
        while ( v9[v10] ); /*0x73173*/
      }
    }
    else
    {
      v7 = (int)(v5 / 60.0); /*0x730c6*/
      v8 = (void *)GameToolbox_intToString((__int64)v17, v7); /*0x730cc*/
      v9 = " minute ago"; /*0x730d9*/
      if ( v7 > 1 ) /*0x730e3*/
        v9 = " minutes ago"; /*0x730e3*/
      v10 = -1; /*0x730e7*/
      do /*0x730f3*/
        ++v10; /*0x730f0*/
      while ( v9[v10] ); /*0x730f3*/
    }
    v15 = sub_43D80(v8, v9, v10); /*0x732ed*/
    *(_OWORD *)a1 = 0; /*0x732f5*/
    *(_QWORD *)(a1 + 16) = 0; /*0x732f8*/
    *(_QWORD *)(a1 + 24) = 0; /*0x732fc*/
    *(_OWORD *)a1 = *(_OWORD *)v15; /*0x73303*/
    *(_OWORD *)(a1 + 16) = *(_OWORD *)(v15 + 16); /*0x7330a*/
    *(_QWORD *)(v15 + 16) = 0; /*0x7330e*/
    *(_QWORD *)(v15 + 24) = 15; /*0x73312*/
    *(_BYTE *)v15 = 0; /*0x7331a*/
    sub_3C310(v17); /*0x73322*/
  }
  else
  {
    *(_OWORD *)a1 = 0; /*0x73060*/
    *(_QWORD *)(a1 + 16) = 0; /*0x73063*/
    *(_QWORD *)(a1 + 24) = 0; /*0x73067*/
    v6 = (char *)sub_3C460(32); /*0x73070*/
    *(_QWORD *)a1 = v6; /*0x73075*/
    *(_QWORD *)(a1 + 16) = 22; /*0x73078*/
    *(_QWORD *)(a1 + 24) = 31; /*0x73080*/
    strcpy(v6, "Less than 1 minute ago"); /*0x7308f*/
  }
  return a1; /*0x7332a*/
}

// [13/15] Address: 0x73770
// Method: GameToolbox::pointsToString
// Hidden C++ exception states: #wind=2
__m128i *__fastcall GameToolbox_pointsToString(__int64 a1, signed int a2)
{
  __m128i *v3; // rbx
  unsigned int v4; // edx
  __int64 v5; // rcx
  __m128i si128; // xmm1
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // rdx
  unsigned __int64 v10; // r13
  _QWORD *v11; // rax
  char v12; // al
  size_t v13; // r15
  void **v14; // r12
  char *v15; // rdi
  unsigned __int64 v16; // xmm1_8
  size_t v17; // r14
  unsigned __int64 v18; // rbx
  void **v19; // rsi
  char *v20; // rax
  __m128i v21; // xmm2
  __int64 v22; // rcx
  size_t v23; // r14
  void **v24; // r12
  void *v25; // rsi
  unsigned __int64 v26; // xmm1_8
  size_t v27; // r15
  unsigned __int64 v28; // rbx
  void **v29; // rdi
  size_t v30; // r14
  void **v31; // r12
  char *v32; // rbx
  unsigned __int64 v33; // xmm1_8
  size_t v34; // rsi
  void **v35; // rdi
  char *v36; // rax
  char v38; // [rsp+30h] [rbp-69h]
  unsigned int v39; // [rsp+34h] [rbp-65h]
  __int64 v40; // [rsp+38h] [rbp-61h]
  unsigned int v41; // [rsp+40h] [rbp-59h]
  void *Src[2]; // [rsp+48h] [rbp-51h] BYREF
  __m128i v43; // [rsp+58h] [rbp-41h]
  __m128i *v44; // [rsp+70h] [rbp-29h]
  void *Block[2]; // [rsp+78h] [rbp-21h] BYREF
  size_t Size[2]; // [rsp+88h] [rbp-11h]
  _QWORD v47[2]; // [rsp+98h] [rbp-1h] BYREF
  int v48; // [rsp+A8h] [rbp+Fh]
  unsigned __int64 v49; // [rsp+B0h] [rbp+17h]

  v3 = (__m128i *)a1; /*0x7379d*/
  v44 = (__m128i *)a1; /*0x737a0*/
  if ( (unsigned int)(a2 + 999) > 0x7CE ) /*0x737b4*/
  {
    v41 = (unsigned int)a2 >> 31; /*0x737c9*/
    v4 = -a2; /*0x737cc*/
    if ( a2 >= 0 ) /*0x737d0*/
      v4 = a2; /*0x737d0*/
    GameToolbox_intToString((__int64)v47, v4); /*0x737d8*/
    *(_OWORD *)Src = 0; /*0x737e1*/
    si128 = _mm_load_si128((const __m128i *)&::Size); /*0x737e5*/
    v43 = si128; /*0x737ed*/
    LOBYTE(Src[0]) = 0; /*0x737f2*/
    v7 = 0; /*0x737f6*/
    v8 = v48 - 1; /*0x737fc*/
    v9 = 0x7FFFFFFFFFFFFFFFLL; /*0x737ff*/
    v10 = 15; /*0x73809*/
    if ( v48 - 1 < 0 ) /*0x73815*/
    {
      v21 = *(__m128i *)Src; /*0x73a62*/
    }
    else
    {
      v5 = v8; /*0x7381b*/
      v40 = v8; /*0x7381e*/
      do /*0x73a54*/
      {
        v7 = (unsigned int)(v7 + 1); /*0x73830*/
        v39 = v7; /*0x73833*/
        v11 = v47; /*0x73837*/
        if ( v49 > 0xF ) /*0x73840*/
          v11 = (_QWORD *)v47[0]; /*0x73840*/
        v12 = *((_BYTE *)v11 + v5); /*0x73845*/
        v38 = v12; /*0x73849*/
        v13 = si128.m128i_i64[0]; /*0x7384c*/
        if ( si128.m128i_i64[0] == 0x7FFFFFFFFFFFFFFFLL ) /*0x73854*/
          goto LABEL_59; /*0x73854*/
        v14 = Src; /*0x7385a*/
        v15 = (char *)Src[0]; /*0x7385e*/
        v16 = _mm_srli_si128(si128, 8).m128i_u64[0]; /*0x73862*/
        if ( v16 > 0xF ) /*0x73870*/
          v14 = (void **)Src[0]; /*0x73870*/
        *(_OWORD *)Block = 0; /*0x73877*/
        v17 = v13 + 1; /*0x7387b*/
        v18 = 15; /*0x7387f*/
        v19 = Block; /*0x73884*/
        if ( v13 + 1 > 0xF ) /*0x7388b*/
        {
          v18 = v17 | 0xF; /*0x73890*/
          if ( (v17 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x73897*/
          {
            if ( v18 < 0x16 ) /*0x738a2*/
              v18 = 22; /*0x738a2*/
          }
          else
          {
            v18 = 0x7FFFFFFFFFFFFFFFLL; /*0x73899*/
          }
          v19 = (void **)sub_3C460(v18 + 1); /*0x738af*/
          Block[0] = v19; /*0x738b2*/
          v12 = v38; /*0x738b6*/
        }
        Size[0] = v13 + 1; /*0x738ba*/
        Size[1] = v18; /*0x738be*/
        *(_BYTE *)v19 = v12; /*0x738c2*/
        memcpy((char *)v19 + 1, v14, v13); /*0x738ce*/
        *((_BYTE *)v19 + v17) = 0; /*0x738d3*/
        if ( v16 > 0xF ) /*0x738dc*/
        {
          v20 = v15; /*0x738e2*/
          if ( v16 + 1 >= 0x1000 ) /*0x738ec*/
          {
            v15 = (char *)*((_QWORD *)v15 - 1); /*0x738f2*/
            if ( (unsigned __int64)(v20 - v15 - 8) > 0x1F ) /*0x73901*/
              goto LABEL_54; /*0x73901*/
          }
          j_j_free(v15); /*0x7390a*/
        }
        v21 = *(__m128i *)Block; /*0x7390f*/
        *(_OWORD *)Src = *(_OWORD *)Block; /*0x73913*/
        si128 = *(__m128i *)Size; /*0x73917*/
        v43 = *(__m128i *)Size; /*0x7391b*/
        v7 = v39; /*0x73925*/
        v9 = (unsigned int)((int)v39 / 3); /*0x73931*/
        v22 = v40; /*0x73939*/
        if ( v39 == 3 * (_DWORD)v9 && v40 ) /*0x73946*/
        {
          v5 = 0x7FFFFFFFFFFFFFFFLL; /*0x7394c*/
          v23 = Size[0]; /*0x73959*/
          if ( Size[0] == 0x7FFFFFFFFFFFFFFFLL ) /*0x73965*/
            goto LABEL_59; /*0x73965*/
          v24 = Src; /*0x7396b*/
          v25 = Block[0]; /*0x7396f*/
          v26 = _mm_srli_si128(*(__m128i *)Size, 8).m128i_u64[0]; /*0x73974*/
          if ( v26 > 0xF ) /*0x73982*/
            v24 = (void **)Block[0]; /*0x73982*/
          *(_OWORD *)Block = 0; /*0x73989*/
          v27 = Size[0] + 1; /*0x7398d*/
          v28 = 15; /*0x73991*/
          v29 = Block; /*0x73996*/
          if ( Size[0] + 1 > 0xF ) /*0x7399d*/
          {
            v28 = v27 | 0xF; /*0x739a2*/
            if ( (v27 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x739a9*/
            {
              if ( v28 < 0x16 ) /*0x739b9*/
                v28 = 22; /*0x739b9*/
            }
            else
            {
              v28 = 0x7FFFFFFFFFFFFFFFLL; /*0x739ab*/
            }
            v29 = (void **)sub_3C460(v28 + 1); /*0x739c6*/
            Block[0] = v29; /*0x739c9*/
          }
          Size[0] = v23 + 1; /*0x739cd*/
          Size[1] = v28; /*0x739d1*/
          *(_BYTE *)v29 = 44; /*0x739d5*/
          memcpy((char *)v29 + 1, v24, v23); /*0x739e2*/
          *((_BYTE *)v29 + v27) = 0; /*0x739e7*/
          if ( v26 > 0xF ) /*0x739f0*/
          {
            if ( v26 + 1 >= 0x1000 ) /*0x73a00*/
            {
              v25 = *(void **)(v21.m128i_i64[0] - 8); /*0x73a06*/
              if ( (unsigned __int64)(v21.m128i_i64[0] - (_QWORD)v25 - 8) > 0x1F ) /*0x73a15*/
                goto LABEL_54; /*0x73a15*/
            }
            j_j_free(v25); /*0x73a1e*/
          }
          v21 = *(__m128i *)Block; /*0x73a23*/
          *(_OWORD *)Src = *(_OWORD *)Block; /*0x73a27*/
          si128 = *(__m128i *)Size; /*0x73a2b*/
          v43 = *(__m128i *)Size; /*0x73a2f*/
          v22 = v40; /*0x73a34*/
          v7 = v39; /*0x73a38*/
        }
        v5 = v22 - 1; /*0x73a3c*/
        v40 = v5; /*0x73a40*/
        v9 = 0x7FFFFFFFFFFFFFFFLL; /*0x73a44*/
      }
      while ( v5 >= 0 ); /*0x73a54*/
      v10 = 15; /*0x73a5a*/
    }
    if ( (_BYTE)v41 ) /*0x73a6a*/
    {
      v30 = si128.m128i_i64[0]; /*0x73a73*/
      if ( si128.m128i_i64[0] == 0x7FFFFFFFFFFFFFFFLL ) /*0x73a7f*/
LABEL_59:
        sub_8D90(v5, v9, v7); /*0x73b8c*/
      v31 = Src; /*0x73a85*/
      v32 = (char *)Src[0]; /*0x73a89*/
      v33 = _mm_srli_si128(si128, 8).m128i_u64[0]; /*0x73a8d*/
      if ( v33 > 0xF ) /*0x73a9b*/
        v31 = (void **)Src[0]; /*0x73a9b*/
      *(_OWORD *)Block = 0; /*0x73aa2*/
      v34 = v30 + 1; /*0x73aa6*/
      v35 = Block; /*0x73aaa*/
      if ( v30 + 1 > 0xF ) /*0x73ab2*/
      {
        v10 = v34 | 0xF; /*0x73ab7*/
        if ( (v34 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x73abe*/
        {
          if ( v10 < 0x16 ) /*0x73ac9*/
            v10 = 22; /*0x73ac9*/
        }
        else
        {
          v10 = 0x7FFFFFFFFFFFFFFFLL; /*0x73ac0*/
        }
        v35 = (void **)sub_3C460(v10 + 1); /*0x73ad6*/
        Block[0] = v35; /*0x73ad9*/
      }
      Size[0] = v30 + 1; /*0x73add*/
      Size[1] = v10; /*0x73ae1*/
      *(_BYTE *)v35 = 45; /*0x73ae5*/
      memcpy((char *)v35 + 1, v31, v30); /*0x73af2*/
      *((_BYTE *)v35 + v34) = 0; /*0x73af7*/
      if ( v33 > 0xF ) /*0x73aff*/
      {
        v36 = v32; /*0x73b05*/
        if ( v33 + 1 >= 0x1000 ) /*0x73b0f*/
        {
          v32 = (char *)*((_QWORD *)v32 - 1); /*0x73b15*/
          if ( (unsigned __int64)(v36 - v32 - 8) > 0x1F ) /*0x73b24*/
LABEL_54:
            invoke_watson(0, 0, 0, 0, 0); /*0x73b26*/
        }
        j_j_free(v32); /*0x73b41*/
      }
      v21 = *(__m128i *)Block; /*0x73b46*/
      si128 = *(__m128i *)Size; /*0x73b4a*/
    }
    v3 = v44; /*0x73b4e*/
    *v44 = v21; /*0x73b52*/
    v3[1] = si128; /*0x73b55*/
    sub_3C310(v47); /*0x73b5d*/
  }
  else
  {
    GameToolbox_intToString(a1, a2); /*0x737b9*/
  }
  return v3; /*0x73b65*/
}

// [14/15] Address: 0x11f8c0
// Method: GameToolbox::createToggleButton
// Hidden C++ exception states: #wind=2
unsigned __int64 __fastcall GameToolbox_createToggleButton(__int64 a1)
{
  unsigned __int64 v2; // rbx
  __int64 *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // r15
  int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // r12
  int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rax
  float v18; // xmm6_4
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 *v21; // rdx
  float v22; // xmm7_4
  int v23; // r12d
  __int64 v24; // r8
  __int64 v25; // r13
  int v26; // edi
  int v27; // ebx
  __int64 v28; // r14
  __int64 v29; // rbx
  __int64 v30; // rax
  int v31; // eax
  float v32; // xmm6_4
  __int64 v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 *v37; // rdx
  char v38[8]; // [rsp+30h] [rbp-98h] BYREF
  char v39[8]; // [rsp+38h] [rbp-90h] BYREF
  __int64 v40; // [rsp+D0h] [rbp+8h] BYREF
  void *v41; // [rsp+D8h] [rbp+10h] BYREF
  void *v42; // [rsp+E0h] [rbp+18h] BYREF
  char v43; // [rsp+E8h] [rbp+20h] BYREF

  v2 = 0; /*0x11f8ed*/
  v3 = (__int64 *)(a1 + 688); /*0x11f8ef*/
  v4 = *(_QWORD *)(a1 + 696); /*0x11f8f6*/
  v5 = *(_QWORD *)(a1 + 688); /*0x11f8fa*/
  if ( (v4 - v5) >> 3 ) /*0x11f903*/
  {
    do /*0x11f934*/
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 8 * v2) + 512LL))(*(_QWORD *)(v5 + 8 * v2)); /*0x11f917*/
      ++v2; /*0x11f91d*/
      v4 = v3[1]; /*0x11f920*/
      v5 = *v3; /*0x11f924*/
    }
    while ( v2 < (v4 - *v3) >> 3 ); /*0x11f934*/
  }
  if ( v5 != v4 ) /*0x11f939*/
    v3[1] = v5; /*0x11f93b*/
  v6 = *(_QWORD *)(a1 + 672) - *(_QWORD *)(a1 + 664); /*0x11f946*/
  result = (unsigned __int64)((unsigned __int128)(v6 * (__int128)0xE38E38E38E38E39LL) >> 64) >> 63; /*0x11f961*/
  v8 = v6 / 72; /*0x11f965*/
  v9 = (int)(v6 / 72); /*0x11f968*/
  if ( !*(_QWORD *)(a1 + 720) || !*(_QWORD *)(a1 + 712) ) /*0x11f979*/
  {
    v22 = (float)((float)((float)(int)v8 * *(float *)(a1 + 824)) * 0.5) + *(float *)(a1 + 828); /*0x11fb65*/
    v23 = 0; /*0x11fb6d*/
    if ( (int)v8 <= 0 ) /*0x11fb72*/
      return result; /*0x11fb72*/
    v24 = a1 + 736; /*0x11fb78*/
    v25 = 0; /*0x11fb7f*/
    v26 = v8 - 1; /*0x11fb82*/
    LODWORD(v40) = v8 - 1; /*0x11fb85*/
    while ( 1 ) /*0x11fbba*/
    {
      v27 = sub_11F650(*(_QWORD *)(a1 + 664) + 72LL * v23, v24); /*0x11fbba*/
      v42 = operator new(0x208u); /*0x11fbc7*/
      v28 = CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v42); /*0x11fbd7*/
      if ( !v28 ) /*0x11fbdd*/
        goto LABEL_25; /*0x11fbdd*/
      if ( !(unsigned __int8)sub_47940(v28, v27, 0, a1, (__int64)sub_1200E0) ) /*0x11fbf7*/
        break; /*0x11fbf7*/
      cocos2d::CCObject::autorelease((cocos2d::CCObject *)v28); /*0x11fc03*/
LABEL_26:
      v41 = (void *)v28; /*0x11fc19*/
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v28 + 64LL))( /*0x11fc32*/
        v28,
        *(unsigned int *)(*(_QWORD *)(a1 + 664) + v25));
      v29 = *(_QWORD *)v28; /*0x11fc35*/
      v30 = cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v43, *(float *)(a1 + 820) - 6.0, *(float *)(a1 + 824)); /*0x11fc55*/
      (*(void (__fastcall **)(__int64, __int64))(v29 + 312))(v28, v30); /*0x11fc61*/
      *(_DWORD *)(v28 + 372) = 1065353216; /*0x11fc67*/
      *(_WORD *)(v28 + 408) = 256; /*0x11fc72*/
      *(_DWORD *)(v28 + 480) = 1056964608; /*0x11fc7c*/
      v31 = v26; /*0x11fcae*/
      if ( !*(_BYTE *)(a1 + 920) ) /*0x11fcb0*/
        v31 = v23; /*0x11fcb7*/
      v32 = (float)((float)((float)(v22 + *(float *)(a1 + 884)) - *(float *)(a1 + 828)) /*0x11fcc6*/
                  - (float)(*(float *)(a1 + 824) * 0.5))
          - (float)((float)v31 * *(float *)(a1 + 824));
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 552) + 464LL))(*(_QWORD *)(a1 + 552), v28); /*0x11fcd7*/
      v33 = *(_QWORD *)v28; /*0x11fcdd*/
      v34 = *(_QWORD *)(a1 + 552); /*0x11fce0*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v38, *(float *)(a1 + 880), v32); /*0x11fcf7*/
      v36 = cocos2d::CCNode::convertToNodeSpace(v34, v39, v35); /*0x11fd08*/
      result = (*(__int64 (__fastcall **)(__int64, __int64))(v33 + 184))(v28, v36); /*0x11fd14*/
      v37 = (__int64 *)v3[1]; /*0x11fd1a*/
      if ( v37 == (__int64 *)v3[2] ) /*0x11fd22*/
      {
        result = sub_68840(v3, v37, &v41); /*0x11fd39*/
      }
      else
      {
        *v37 = v28; /*0x11fd24*/
        v3[1] += 8; /*0x11fd27*/
      }
      ++v23; /*0x11fd3e*/
      v26 = v40 - 1; /*0x11fd48*/
      LODWORD(v40) = v40 - 1; /*0x11fd4a*/
      v25 += 72; /*0x11fd51*/
      --v9; /*0x11fd55*/
      v24 = a1 + 736; /*0x11fd59*/
      if ( !v9 ) /*0x11fd60*/
        return result; /*0x11fd60*/
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 8LL))(v28, 1); /*0x11fc13*/
LABEL_25:
    v28 = 0; /*0x11fc16*/
    goto LABEL_26; /*0x11fc16*/
  }
  v10 = 0; /*0x11f987*/
  if ( (int)v8 > 0 ) /*0x11f98c*/
  {
    v11 = a1 + 736; /*0x11f992*/
    v12 = 0; /*0x11f999*/
    while ( 1 ) /*0x11f9d7*/
    {
      v13 = sub_11F650(*(_QWORD *)(a1 + 664) + 72LL * v10, v11); /*0x11f9d7*/
      v41 = operator new(0x208u); /*0x11f9e4*/
      v14 = CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v41); /*0x11f9ef*/
      v15 = v14; /*0x11f9f4*/
      if ( !v14 ) /*0x11f9fa*/
        goto LABEL_13; /*0x11f9fa*/
      if ( !(unsigned __int8)sub_47940(v14, v13, 0, a1, (__int64)sub_1200E0) ) /*0x11fa0d*/
        break; /*0x11fa0d*/
      cocos2d::CCObject::autorelease((cocos2d::CCObject *)v15); /*0x11fa19*/
LABEL_14:
      v40 = v15; /*0x11fa2e*/
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 64LL))( /*0x11fa47*/
        v15,
        *(unsigned int *)(*(_QWORD *)(a1 + 664) + v12));
      v16 = *(_QWORD *)v15; /*0x11fa4a*/
      v17 = cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v42, *(float *)(a1 + 820) - 6.0, *(float *)(a1 + 824)); /*0x11fa6a*/
      (*(void (__fastcall **)(__int64, __int64))(v16 + 312))(v15, v17); /*0x11fa76*/
      *(_DWORD *)(v15 + 372) = 1065353216; /*0x11fa7c*/
      *(_WORD *)(v15 + 408) = 256; /*0x11fa86*/
      *(_DWORD *)(v15 + 480) = 1056964608; /*0x11fa8f*/
      v18 = (float)((float)-*(float *)(a1 + 828) - (float)(*(float *)(a1 + 824) * 0.5)) /*0x11fac4*/
          - (float)((float)v10 * *(float *)(a1 + 824));
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 712) + 464LL))(*(_QWORD *)(a1 + 712), v15); /*0x11fad5*/
      v19 = *(_QWORD *)v15; /*0x11fadb*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v43, *(float *)(a1 + 820) * 0.5, v18); /*0x11faf5*/
      result = (*(__int64 (__fastcall **)(__int64, __int64))(v19 + 184))(v15, v20); /*0x11fb01*/
      v21 = (__int64 *)v3[1]; /*0x11fb07*/
      if ( v21 == (__int64 *)v3[2] ) /*0x11fb0f*/
      {
        result = sub_68840(v3, v21, &v40); /*0x11fb26*/
      }
      else
      {
        *v21 = v15; /*0x11fb11*/
        v3[1] += 8; /*0x11fb14*/
      }
      ++v10; /*0x11fb2b*/
      v12 += 72; /*0x11fb2e*/
      --v9; /*0x11fb32*/
      v11 = a1 + 736; /*0x11fb36*/
      if ( !v9 ) /*0x11fb3d*/
        return result; /*0x11fb3d*/
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 8LL))(v15, 1); /*0x11fa29*/
LABEL_13:
    v15 = 0; /*0x11fa2c*/
    goto LABEL_14; /*0x11fa2c*/
  }
  return result; /*0x11fd66*/
}

// [15/15] Address: 0x4826d0
// Method: GameToolbox::stringFromHSV
// Hidden C++ exception states: #wind=2
__int64 __fastcall GameToolbox_stringFromHSV(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  _QWORD *v6; // rcx
  unsigned __int64 *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v12; // rsi
  __int64 v13; // rdi
  void **v14; // rdx
  char v15; // bl
  __int64 v16; // rax
  char v17; // bl
  void *v18; // rcx
  void *v19; // rcx
  _BYTE v21[32]; // [rsp+40h] [rbp-88h] BYREF
  void *v22[2]; // [rsp+60h] [rbp-68h] BYREF
  __int128 v23; // [rsp+70h] [rbp-58h]
  void *Block[2]; // [rsp+80h] [rbp-48h] BYREF
  __int128 v25; // [rsp+90h] [rbp-38h]

  v4 = a2; /*0x4826f1*/
  v6 = a2; /*0x482704*/
  if ( a2[3] > 0xFu ) /*0x48270c*/
    v6 = (_QWORD *)*a2; /*0x48270e*/
  v7 = a2 + 2; /*0x482711*/
  LOBYTE(a4) = 47; /*0x482715*/
  v8 = sub_7A0D0(v6, a2[2], a3, a4); /*0x48271b*/
  if ( v8 == -1 ) /*0x48272a*/
  {
    *(_OWORD *)v22 = 0; /*0x482730*/
    v23 = 0; /*0x482735*/
    if ( v4[3] > 0xFu ) /*0x482740*/
      v4 = (_QWORD *)*v4; /*0x482742*/
    v12 = *v7; /*0x482745*/
    v13 = 0x7FFFFFFFFFFFFFFFLL; /*0x482748*/
    if ( v12 > 0x7FFFFFFFFFFFFFFFLL ) /*0x482755*/
      sub_8D90(v10, v9, v11); /*0x482923*/
    if ( v12 > 0xF ) /*0x48275f*/
    {
      if ( (v12 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x482783*/
      {
        v13 = v12 | 0xF; /*0x482785*/
        if ( (v12 | 0xF) < 0x16 ) /*0x482790*/
          v13 = 22; /*0x482790*/
      }
      v22[0] = (void *)sub_3C460(v13 + 1); /*0x48279d*/
      *(_QWORD *)&v23 = v12; /*0x4827a2*/
      *((_QWORD *)&v23 + 1) = v13; /*0x4827a7*/
      memcpy(v22[0], v4, v12 + 1); /*0x4827b6*/
    }
    else
    {
      *(_QWORD *)&v23 = v12; /*0x482761*/
      *((_QWORD *)&v23 + 1) = 15; /*0x482766*/
      *(_OWORD *)v22 = *(_OWORD *)v4; /*0x482772*/
    }
    v14 = v22; /*0x4827bb*/
    v15 = 1; /*0x4827c0*/
  }
  else
  {
    *(_OWORD *)Block = 0; /*0x4827cb*/
    v25 = 0; /*0x4827d3*/
    if ( *v7 < v8 + 1 ) /*0x4827e2*/
      sub_3E4D0(v8 + 1, v9); /*0x48291d*/
    sub_3C230(Block); /*0x48280f*/
    v14 = Block; /*0x482814*/
    v15 = 10; /*0x48281c*/
  }
  v16 = sub_3E4F0(v21, v14); /*0x48282a*/
  sub_463F60(a1, v16); /*0x482835*/
  v17 = v15 | 4; /*0x48283a*/
  if ( (v17 & 2) != 0 ) /*0x482840*/
  {
    v17 &= ~2u; /*0x482842*/
    if ( *((_QWORD *)&v25 + 1) > 0xFu ) /*0x482851*/
    {
      v18 = Block[0]; /*0x482856*/
      if ( (unsigned __int64)(*((_QWORD *)&v25 + 1) + 1LL) >= 0x1000 ) /*0x482868*/
      {
        v18 = (void *)*((_QWORD *)Block[0] - 1); /*0x48286e*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v18 - 8) > 0x1F ) /*0x48287d*/
          invoke_watson(0, 0, 0, 0, 0); /*0x482892*/
      }
      j_j_free(v18); /*0x482899*/
    }
  }
  if ( (v17 & 1) != 0 && *((_QWORD *)&v23 + 1) > 0xFu ) /*0x4828ad*/
  {
    v19 = v22[0]; /*0x4828b2*/
    if ( (unsigned __int64)(*((_QWORD *)&v23 + 1) + 1LL) >= 0x1000 ) /*0x4828c1*/
    {
      v19 = (void *)*((_QWORD *)v22[0] - 1); /*0x4828c7*/
      if ( (unsigned __int64)((char *)v22[0] - (char *)v19 - 8) > 0x1F ) /*0x4828d6*/
        invoke_watson(0, 0, 0, 0, 0); /*0x4828eb*/
    }
    j_j_free(v19); /*0x4828f2*/
  }
  return a1; /*0x4828fa*/
}
