#include <Geode/binding/GJUserCell.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x4431a0
// Method: GJUserCell::onRemoveFriend
// Hidden C++ exception states: #wind=7
double __fastcall GJUserCell_onRemoveFriend(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // eax
  char *v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rax
  cocos2d::CCObject *v7; // rbx
  double result; // xmm0_8
  void *v9; // rcx
  char *v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rax
  cocos2d::CCObject *v13; // rbx
  const char *v14; // rdx
  cocos2d::CCString *v15; // rax
  const char *CString; // rax
  __int64 v17; // rbx
  __int64 v18; // r8
  int v19; // edx
  cocos2d::CCString *v20; // rax
  char *v21; // rax
  size_t v22; // r8
  cocos2d::CCString *v23; // rax
  char *v24; // rax
  size_t v25; // r8
  __int128 *p_Src; // rdx
  __int64 v27; // rax
  cocos2d::CCObject *v28; // rbx
  _BYTE v29[32]; // [rsp+60h] [rbp-39h] BYREF
  __int128 Src; // [rsp+80h] [rbp-19h] BYREF
  __int128 v31; // [rsp+90h] [rbp-9h]
  __int128 v32; // [rsp+A0h] [rbp+7h] BYREF
  __m128i si128; // [rsp+B0h] [rbp+17h]
  _QWORD v34[4]; // [rsp+C0h] [rbp+27h] BYREF

  v2 = *(_QWORD *)(a1 + 424); /*0x4431cf*/
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 328) - *(_DWORD *)(v2 + 332); /*0x4431e5*/
    if ( v3 == -1 )
    {
      v32 = 0; /*0x4431f7*/
      v4 = (char *)sub_3C460(80); /*0x443205*/
      *(_QWORD *)&v32 = v4; /*0x443208*/
      si128 = _mm_load_si128((const __m128i *)&xmmword_8310B0); /*0x443214*/
      strcpy(v4, "<cr>Roses are red</c>\n<cl>Violets are blue</c>\n<cg>Welcome to</c>\n<cy>2.2</c>"); /*0x443220*/
      Src = 0; /*0x44326b*/
      v31 = 0u; /*0x44326f*/
      v5 = -1; /*0x443277*/
      do /*0x443283*/
        ++v5; /*0x443280*/
      while ( v4[v5] ); /*0x443283*/
      sub_3C230(&Src); /*0x443290*/
      sub_3E4F0(v34, &Src); /*0x4432a5*/
      v7 = FLAlertLayer_create_0(0, (int)"It's a secret...", v6, (__int64)"OK", 0, 1135869952, 0, 0, 1065353216); /*0x4432f1*/
      result = sub_3C310(&Src); /*0x4432f8*/
      (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v7 + 1064LL))(v7); /*0x44330a*/
      if ( si128.m128i_i64[1] > 0xFuLL ) /*0x443315*/
      {
        v9 = (void *)v32; /*0x44331e*/
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) < 0x1000 /*0x443341*/
          || (v9 = *(void **)(v32 - 8), (unsigned __int64)(v32 - (_QWORD)v9 - 8) <= 0x1F) )
        {
LABEL_8:
          j_j_free(v9); /*0x443347*/
          return result; /*0x44334c*/
        }
LABEL_15:
        invoke_watson(0, 0, 0, 0, 0); /*0x4434cb*/
      }
    }
    else if ( v3 == -2 )
    {
      v32 = 0; /*0x44335d*/
      v10 = (char *)sub_3C460(128); /*0x44336b*/
      *(_QWORD *)&v32 = v10; /*0x44336e*/
      si128 = _mm_load_si128((const __m128i *)&xmmword_8310C0); /*0x44337a*/
      strcpy( /*0x443386*/
        v10,
        "The path leads to an <cr>old tower</c>. It's been left alone for <cg>years</c>, with little reason to <co>explore</c>.");
      Src = 0; /*0x4433e6*/
      v31 = 0u; /*0x4433ea*/
      v11 = -1; /*0x4433f2*/
      do /*0x443403*/
        ++v11; /*0x443400*/
      while ( v10[v11] ); /*0x443403*/
      sub_3C230(&Src); /*0x443410*/
      sub_3E4F0(v34, &Src); /*0x443425*/
      v13 = FLAlertLayer_create_0(0, (int)"The Tower", v12, (__int64)"OK", 0, 1135869952, 0, 0, 1065353216); /*0x443471*/
      result = sub_3C310(&Src); /*0x443478*/
      (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v13 + 1064LL))(v13); /*0x44348a*/
      if ( si128.m128i_i64[1] > 0xFuLL ) /*0x443495*/
      {
        v9 = (void *)v32; /*0x44349e*/
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) < 0x1000 ) /*0x4434ac*/
          goto LABEL_8; /*0x4434ac*/
        v9 = *(void **)(v32 - 8); /*0x4434b6*/
        if ( (unsigned __int64)(v32 - (_QWORD)v9 - 8) <= 0x1F ) /*0x4434c5*/
          goto LABEL_8; /*0x4434c5*/
        goto LABEL_15; /*0x4434c5*/
      }
    }
    else
    {
      sub_3E4F0(v34, v2 + 344); /*0x4434ec*/
      v14 = (const char *)v34; /*0x443507*/
      if ( v34[3] > 0xFu ) /*0x443510*/
        v14 = (const char *)v34[0]; /*0x443510*/
      v15 = cocos2d::CCString::createWithFormat(
              "<cy>%s</c>\n<cg>Total Attempts</c>: %i",
              v14,
              *(_DWORD *)(*(_QWORD *)(a1 + 424) + 868LL) - *(_DWORD *)(*(_QWORD *)(a1 + 424) + 872LL));
      CString = cocos2d::CCString::getCString(v15); /*0x443525*/
      Src = 0; /*0x44352e*/
      v31 = 0; /*0x443535*/
      v17 = -1; /*0x44353a*/
      v18 = -1; /*0x443541*/
      do /*0x443547*/
        ++v18; /*0x443544*/
      while ( CString[v18] ); /*0x443547*/
      sub_3C230(&Src); /*0x443555*/
      sub_3C310(v34); /*0x44355f*/
      v19 = *(_DWORD *)(*(_QWORD *)(a1 + 424) + 1708LL); /*0x44356b*/
      if ( v19 > 0 )
      {
        v20 = cocos2d::CCString::createWithFormat("\n<co>Practice Attempts</c>: %i", v19);
        v21 = (char *)cocos2d::CCString::getCString(v20); /*0x443585*/
        v22 = -1; /*0x44358b*/
        do /*0x443593*/
          ++v22; /*0x443590*/
        while ( v21[v22] ); /*0x443593*/
        sub_43D80(&Src, v21, v22); /*0x4435a1*/
      }
      v23 = cocos2d::CCString::createWithFormat(
              "\n<cl>Total Jumps</c>: %i\n<cp>Normal</c>: %i%%\n<co>Practice</c>: %i%%",
              *(_DWORD *)(*(_QWORD *)(a1 + 424) + 880LL) - *(_DWORD *)(*(_QWORD *)(a1 + 424) + 884LL),
              *(_DWORD *)(*(_QWORD *)(a1 + 424) + 932LL) - *(_DWORD *)(*(_QWORD *)(a1 + 424) + 928LL),
              *(_DWORD *)(*(_QWORD *)(a1 + 424) + 960LL));
      v24 = (char *)cocos2d::CCString::getCString(v23); /*0x4435e0*/
      v25 = -1; /*0x4435e6*/
      do /*0x4435f3*/
        ++v25; /*0x4435f0*/
      while ( v24[v25] ); /*0x4435f3*/
      sub_43D80(&Src, v24, v25); /*0x443601*/
      p_Src = &Src; /*0x443606*/
      if ( *((_QWORD *)&v31 + 1) > 0xFu ) /*0x44360f*/
        p_Src = (__int128 *)Src; /*0x44360f*/
      v32 = 0; /*0x443617*/
      si128 = 0u; /*0x44361b*/
      do /*0x443626*/
        ++v17; /*0x443623*/
      while ( *((_BYTE *)p_Src + v17) ); /*0x443626*/
      sub_3C230(&v32); /*0x443633*/
      sub_3E4F0(v29, &v32); /*0x443648*/
      v28 = FLAlertLayer_create_0(0, (int)"Level Stats", v27, (__int64)"OK", 0, 1133903872, 0, 0, 1065353216); /*0x443694*/
      sub_3C310(&v32); /*0x44369b*/
      (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v28 + 1064LL))(v28); /*0x4436ad*/
      return sub_3C310(&Src); /*0x4436b4*/
    }
  }
  return result; /*0x4436b9*/
}

// [2/2] Address: 0x552900
// Method: GJUserCell::onUnblockUser
// Hidden C++ exception states: #wind=4
void __fastcall GJUserCell_onUnblockUser(__int64 a1)
{
  const char *v2; // rdx
  cocos2d::CCString *v3; // rax
  const char *CString; // rax
  __int64 v5; // rbx
  __int64 v6; // r8
  int v7; // esi
  void **v8; // rdx
  __int64 v9; // rax
  cocos2d::CCObject *v10; // rbx
  void *v11; // rcx
  __int128 v12; // [rsp+58h] [rbp-51h] BYREF
  __int64 v13; // [rsp+68h] [rbp-41h]
  __int64 v14; // [rsp+70h] [rbp-39h]
  _BYTE v15[32]; // [rsp+80h] [rbp-29h] BYREF
  void *Block[2]; // [rsp+A0h] [rbp-9h] BYREF
  __int128 v17; // [rsp+B0h] [rbp+7h]
  _QWORD v18[4]; // [rsp+C0h] [rbp+17h] BYREF

  sub_3E4F0(v18, *(_QWORD *)(a1 + 728) + 320LL); /*0x552940*/
  v2 = (const char *)v18; /*0x552946*/
  if ( v18[3] > 0xFu ) /*0x55294f*/
    v2 = (const char *)v18[0]; /*0x55294f*/
  v3 = cocos2d::CCString::createWithFormat("Are you sure you want to <cl>unblock</c> <cy>%s</c>?", v2); /*0x55295b*/
  CString = cocos2d::CCString::getCString(v3); /*0x552964*/
  *(_OWORD *)Block = 0; /*0x55296d*/
  v17 = 0; /*0x552974*/
  v5 = -1; /*0x552979*/
  v6 = -1; /*0x552980*/
  do /*0x552986*/
    ++v6; /*0x552983*/
  while ( CString[v6] ); /*0x552986*/
  sub_3C230(Block); /*0x552994*/
  sub_3C310(v18); /*0x55299e*/
  v7 = a1 + 664; /*0x5529a3*/
  if ( !a1 ) /*0x5529ad*/
    v7 = 0; /*0x5529ad*/
  v8 = Block; /*0x5529b1*/
  if ( *((_QWORD *)&v17 + 1) > 0xFu ) /*0x5529ba*/
    v8 = (void **)Block[0]; /*0x5529ba*/
  v12 = 0; /*0x5529c2*/
  v13 = 0; /*0x5529c6*/
  v14 = 0; /*0x5529ca*/
  do /*0x5529d3*/
    ++v5; /*0x5529d0*/
  while ( *((_BYTE *)v8 + v5) ); /*0x5529d3*/
  sub_3C230(&v12); /*0x5529e0*/
  sub_3E4F0(v15, &v12); /*0x5529f5*/
  v10 = FLAlertLayer_create_0( /*0x552a49*/
          v7,
          (int)"Unblock user",
          v9,
          (__int64)"Back",
          (__int64)"Unblock",
          1133903872,
          0,
          0,
          1065353216);
  sub_3C310(&v12); /*0x552a50*/
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v10 + 64LL))(v10, 4); /*0x552a64*/
  (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v10 + 1064LL))(v10); /*0x552a74*/
  if ( *((_QWORD *)&v17 + 1) > 0xFu ) /*0x552a7f*/
  {
    v11 = Block[0]; /*0x552a84*/
    if ( (unsigned __int64)(*((_QWORD *)&v17 + 1) + 1LL) >= 0x1000 ) /*0x552a92*/
    {
      v11 = (void *)*((_QWORD *)Block[0] - 1); /*0x552a98*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v11 - 8) > 0x1F ) /*0x552aa7*/
        invoke_watson(0, 0, 0, 0, 0); /*0x552ab8*/
    }
    j_j_free(v11); /*0x552abf*/
  }
}
