#include <Geode/binding/LevelPickerPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/7] Address: 0xd1740
// Method: LevelPickerPopup::~LevelPickerPopup
// Hidden C++ exception states: #wind=1
char *__fastcall LevelPickerPopup__dtor_LevelPickerPopup(char *Block, char a2)
{
  char *v4; // rdi
  __int64 v5; // rax
  void *v6; // rax
  __int64 v7; // rax
  cocos2d::CCObject *v8; // rcx
  cocos2d::CCObject *v9; // rcx

  *(_QWORD *)Block = &LevelPickerPopup::`vftable'; /*0xd175b*/
  *((_QWORD *)Block + 40) = &LevelPickerPopup::`vftable'; /*0xd1765*/
  *((_QWORD *)Block + 41) = &LevelPickerPopup::`vftable'; /*0xd1773*/
  *((_QWORD *)Block + 42) = &LevelPickerPopup::`vftable'; /*0xd1781*/
  *((_QWORD *)Block + 43) = &LevelPickerPopup::`vftable'; /*0xd178f*/
  *((_QWORD *)Block + 44) = &LevelPickerPopup::`vftable'; /*0xd179d*/
  *((_QWORD *)Block + 51) = &LevelPickerPopup::`vftable'; /*0xd17ab*/
  *((_QWORD *)Block + 54) = &LevelPickerPopup::`vftable'; /*0xd17b9*/
  *((_QWORD *)Block + 68) = &LevelPickerPopup::`vftable'; /*0xd17c7*/
  v4 = Block + 776; /*0xd17ce*/
  *((_QWORD *)Block + 97) = &LevelPickerPopup::`vftable'; /*0xd17dc*/
  *((_QWORD *)Block + 98) = &LevelPickerPopup::`vftable'; /*0xd17e6*/
  v5 = *(_QWORD *)&qword_905FB0; /*0xd17ed*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0xd17f7*/
  {
    v6 = operator new(0x690u); /*0xd17fe*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v6); /*0xd180b*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xd181c*/
    v5 = *(_QWORD *)&qword_905FB0; /*0xd181e*/
  }
  if ( *(char **)(v5 + 1352) == v4 ) /*0xd182e*/
    *(_QWORD *)(v5 + 1352) = 0; /*0xd1830*/
  v7 = *((_QWORD *)Block + 114); /*0xd1837*/
  if ( v7 ) /*0xd1841*/
    *(_QWORD *)(v7 + 608) = 0; /*0xd1843*/
  v8 = (cocos2d::CCObject *)*((_QWORD *)Block + 126); /*0xd184a*/
  if ( v8 ) /*0xd1854*/
    cocos2d::CCObject::release(v8); /*0xd1856*/
  v9 = (cocos2d::CCObject *)*((_QWORD *)Block + 127); /*0xd185c*/
  if ( v9 ) /*0xd1866*/
    cocos2d::CCObject::release(v9); /*0xd1868*/
  sub_3C310(Block + 1048); /*0xd1875*/
  sub_685C0(Block + 1024); /*0xd1881*/
  sub_FDCC0(Block + 984); /*0xd188d*/
  sub_FDCC0(Block + 960); /*0xd1899*/
  sub_3C310(Block + 880); /*0xd18a5*/
  sub_3C310(Block + 840); /*0xd18b1*/
  PagedListPopup__dtor_PagedListPopup(Block); /*0xd18b9*/
  if ( (a2 & 1) != 0 ) /*0xd18c3*/
    j_j_free(Block); /*0xd18cd*/
  return Block; /*0xd18d5*/
}

// [2/7] Address: 0xe7f90
// Method: LevelPickerPopup::requestPage
char __fastcall LevelPickerPopup_requestPage(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 832) = a2; /*0xe7f94*/
  cocos2d::CCNode::scheduleOnce(a1, sub_E7FC0); /*0xe7fa4*/
  return 1; /*0xe7fac*/
}

// [3/7] Address: 0xe8650
// Method: LevelPickerPopup::setupPageInfo
// Hidden C++ exception states: #wind=2
double __fastcall LevelPickerPopup_setupPageInfo(__int64 a1, _QWORD *a2, _BYTE *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  const void *v8; // rcx
  size_t v9; // r8
  _QWORD *v10; // rdx
  cocos2d::CCArray *v11; // rbx
  void *v12; // r8
  cocos2d::CCString *v13; // rax
  cocos2d::CCString *v14; // rax
  void *Block[2]; // [rsp+38h] [rbp-30h] BYREF
  __m128i si128; // [rsp+48h] [rbp-20h]

  v6 = -1; /*0xe867c*/
  if ( !a3 ) /*0xe8686*/
    goto LABEL_9; /*0xe8686*/
  v7 = -1; /*0xe8688*/
  do /*0xe8693*/
    ++v7; /*0xe8690*/
  while ( a3[v7] ); /*0xe8693*/
  v8 = (const void *)(a1 + 64); /*0xe869a*/
  if ( *(_QWORD *)(a1 + 88) > 0xFu ) /*0xe86a3*/
    v8 = *(const void **)(a1 + 64); /*0xe86a5*/
  v9 = *(_QWORD *)(a1 + 80); /*0xe86a9*/
  if ( v9 == v7 && (!v9 || !memcmp(v8, a3, v9)) ) /*0xe86be*/
  {
LABEL_9:
    v10 = a2; /*0xe86cb*/
    if ( a2[3] > 0xFu ) /*0xe86d3*/
      v10 = (_QWORD *)*a2; /*0xe86d5*/
    *(_OWORD *)Block = 0; /*0xe86db*/
    si128 = 0; /*0xe86e3*/
    do /*0xe86f3*/
      ++v6; /*0xe86f0*/
    while ( *((_BYTE *)v10 + v6) ); /*0xe86f3*/
    sub_3C230(Block); /*0xe8701*/
    v11 = (cocos2d::CCArray *)sub_D09B0(Block, &word_7222A8); /*0xe8718*/
    if ( si128.m128i_i64[1] > 0xFuLL ) /*0xe8724*/
    {
      v12 = Block[0]; /*0xe8729*/
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0xe8738*/
      {
        v12 = (void *)*((_QWORD *)Block[0] - 1); /*0xe873e*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v12 - 8) > 0x1F ) /*0xe874d*/
          invoke_watson(0, 0, 0, 0, 0); /*0xe8762*/
      }
      j_j_free(v12); /*0xe876c*/
    }
    si128 = _mm_load_si128((const __m128i *)&Size); /*0xe8779*/
    LOBYTE(Block[0]) = 0; /*0xe877f*/
    if ( v11 && cocos2d::CCArray::count(v11) >= 2 ) /*0xe8795*/
    {
      v13 = cocos2d::CCArray::stringAtIndex(v11, 0); /*0xe879c*/
      *(_DWORD *)(a1 + 96) = cocos2d::CCString::intValue(v13); /*0xe87ab*/
      v14 = cocos2d::CCArray::stringAtIndex(v11, 1u); /*0xe87b6*/
      *(_DWORD *)(a1 + 100) = cocos2d::CCString::intValue(v14); /*0xe87c5*/
    }
  }
  return sub_3C310(a2); /*0xe87d0*/
}

// [4/7] Address: 0xe87f0
// Method: LevelPickerPopup::loadLevelsFinished
void __fastcall LevelPickerPopup_loadLevelsFinished(__int64 a1, cocos2d::CCArray *a2, size_t a3)
{
  const void *v3; // r9
  __int64 v6; // rax
  const void *v7; // rcx
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // r8
  __int64 v11; // r9
  cocos2d::CCArray *v12; // rax
  const char *v13; // rdx

  v3 = (const void *)a3; /*0xe8803*/
  if ( *(_BYTE *)(a1 + 32) ) /*0xe87ff*/
  {
    if ( !a3 ) /*0xe8815*/
      goto LABEL_10; /*0xe8815*/
    v6 = -1; /*0xe8817*/
    do /*0xe8823*/
      ++v6; /*0xe8820*/
    while ( *(_BYTE *)(a3 + v6) ); /*0xe8823*/
    v7 = (const void *)(a1 + 64); /*0xe882a*/
    if ( *(_QWORD *)(a1 + 88) > 0xFu ) /*0xe8833*/
      v7 = *(const void **)(a1 + 64); /*0xe8835*/
    a3 = *(_QWORD *)(a1 + 80); /*0xe8839*/
    if ( a3 == v6 && (!a3 || !memcmp(v7, v3, a3)) ) /*0xe884e*/
    {
LABEL_10:
      v8 = *(_QWORD *)(a1 - 80); /*0xe885b*/
      if ( v8 ) /*0xe8867*/
        LoadingCircle_fadeAndRemove(v8); /*0xe8869*/
      if ( a2 ) /*0xe8871*/
      {
        v9 = cocos2d::CCArray::count(a2); /*0xe887c*/
        v12 = 0; /*0xe8885*/
        if ( v9 > 0 ) /*0xe8889*/
          v12 = a2; /*0xe8889*/
        sub_E8B60(a1 - 776, v12, v10, v11); /*0xe8890*/
        if ( v9 ) /*0xe8897*/
          goto LABEL_21; /*0xe8897*/
      }
      else
      {
        v9 = 0; /*0xe88a6*/
        sub_E8B60(a1 - 776, 0, a3, v3); /*0xe88a8*/
      }
      v13 = "No online levels"; /*0xe88b8*/
      if ( *(_BYTE *)(a1 + 33) ) /*0xe88ad*/
        v13 = "No online lists"; /*0xe88bf*/
      sub_C1980(a1 - 776, v13); /*0xe88ca*/
LABEL_21:
      sub_C1A50(a1 - 776, *(unsigned int *)(a1 + 96), *(unsigned int *)(a1 + 100), (unsigned int)v9); /*0xe88cf*/
    }
  }
}

// [5/7] Address: 0xe8900
// Method: LevelPickerPopup::loadLevelsFailed
void __fastcall LevelPickerPopup_loadLevelsFailed(__int64 a1, _BYTE *a2)
{
  __int64 v3; // rax
  const void *v4; // rcx
  size_t v5; // r8
  __int64 v6; // rcx
  const char *v7; // rdx

  if ( *(_BYTE *)(a1 + 32) ) /*0xe890a*/
  {
    if ( !a2 ) /*0xe8916*/
      goto LABEL_10; /*0xe8916*/
    v3 = -1; /*0xe8918*/
    do /*0xe8923*/
      ++v3; /*0xe8920*/
    while ( a2[v3] ); /*0xe8923*/
    v4 = (const void *)(a1 + 64); /*0xe8929*/
    if ( *(_QWORD *)(a1 + 88) > 0xFu ) /*0xe8932*/
      v4 = *(const void **)(a1 + 64); /*0xe8934*/
    v5 = *(_QWORD *)(a1 + 80); /*0xe8938*/
    if ( v5 == v3 && (!v5 || !memcmp(v4, a2, v5)) ) /*0xe8946*/
    {
LABEL_10:
      v6 = *(_QWORD *)(a1 - 80); /*0xe894f*/
      if ( v6 ) /*0xe8956*/
        LoadingCircle_fadeAndRemove(v6); /*0xe8958*/
      v7 = "No levels found"; /*0xe8968*/
      if ( *(_BYTE *)(a1 + 33) ) /*0xe895d*/
        v7 = "No lists found"; /*0xe896f*/
      sub_C1980(a1 - 776, v7); /*0xe897a*/
    }
  }
}

// [6/7] Address: 0xe8990
// Method: LevelPickerPopup::textChanged
// Hidden C++ exception states: #wind=1
__int64 __fastcall LevelPickerPopup_textChanged(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r8
  unsigned __int64 i; // rdi
  _QWORD *v10; // rdx
  _QWORD *v11; // rbx
  void *v12; // rcx
  __int64 v13; // rcx
  _QWORD v15[2]; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-50h]
  unsigned __int64 v17; // [rsp+50h] [rbp-48h]
  void *Block[2]; // [rsp+58h] [rbp-40h] BYREF
  __int128 v19; // [rsp+68h] [rbp-30h]

  *(_BYTE *)(a1 + 264) = 0; /*0xe89b4*/
  *(_DWORD *)(a1 + 136) = 0; /*0xe89bb*/
  v4 = *(_QWORD *)(a1 + 392); /*0xe89c5*/
  if ( v4 ) /*0xe89cf*/
    ButtonSprite_setString(v4, "Online"); /*0xe89d8*/
  v5 = *(_QWORD *)(a1 + 376); /*0xe89dd*/
  if ( v5 ) /*0xe89e7*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 336LL))(v5, 0); /*0xe89ee*/
  v6 = *(_QWORD *)(a1 + 384); /*0xe89f4*/
  if ( v6 ) /*0xe89fe*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 336LL))(v6, 0); /*0xe8a05*/
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a2 + 600) + 600LL) + 8LL))(*(_QWORD *)(a2 + 600) + 600LL); /*0xe8a1c*/
  *(_OWORD *)Block = 0; /*0xe8a22*/
  v19 = 0; /*0xe8a2a*/
  v8 = -1; /*0xe8a30*/
  do /*0xe8a43*/
    ++v8; /*0xe8a40*/
  while ( *(_BYTE *)(v7 + v8) ); /*0xe8a43*/
  sub_3C230(Block); /*0xe8a52*/
  sub_3E4F0(v15, Block); /*0xe8a62*/
  for ( i = 0; i < v16; ++i ) /*0xe8a6e*/
  {
    v10 = v15; /*0xe8a70*/
    if ( v17 > 0xF ) /*0xe8a7b*/
      v10 = (_QWORD *)v15[0]; /*0xe8a7b*/
    v11 = v15; /*0xe8a81*/
    if ( v17 > 0xF ) /*0xe8a86*/
      v11 = (_QWORD *)v15[0]; /*0xe8a86*/
    *((_BYTE *)v11 + i) = tolower(*((char *)v10 + i)); /*0xe8a96*/
  }
  sub_58AD0(a1 + 336, v15); /*0xe8aaf*/
  sub_3C310(v15); /*0xe8ab9*/
  if ( *((_QWORD *)&v19 + 1) > 0xFu ) /*0xe8ac8*/
  {
    v12 = Block[0]; /*0xe8acd*/
    if ( (unsigned __int64)(*((_QWORD *)&v19 + 1) + 1LL) >= 0x1000 ) /*0xe8adc*/
    {
      v12 = (void *)*((_QWORD *)Block[0] - 1); /*0xe8ae2*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v12 - 8) > 0x1F ) /*0xe8af1*/
        invoke_watson(0, 0, 0, 0, 0); /*0xe8b06*/
    }
    j_j_free(v12); /*0xe8b0d*/
  }
  sub_E7AC0(a1 - 544); /*0xe8b19*/
  v13 = *(_QWORD *)(a1 + 152); /*0xe8b1e*/
  if ( v13 ) /*0xe8b28*/
    LoadingCircle_fadeAndRemove(v13); /*0xe8b2a*/
  return sub_E9760(a1 - 544); /*0xe8b3b*/
}

// [7/7] Address: 0xe9900
// Method: LevelPickerPopup::cellPerformedAction
char __fastcall LevelPickerPopup_cellPerformedAction(__int64 a1, __int64 a2, int a3, int a4)
{
  void (__fastcall ***v5)(_QWORD); // rcx
  __int64 v6; // rcx

  if ( a4 == 1 ) /*0xe990d*/
  {
    if ( a3 == 37 ) /*0xe9913*/
    {
      if ( *(_QWORD *)(a2 + 568) ) /*0xe9915*/
      {
        v5 = *(void (__fastcall ****)(_QWORD))(a1 + 8); /*0xe9921*/
        if ( v5 ) /*0xe9928*/
          (**v5)(v5); /*0xe992d*/
      }
LABEL_10:
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 784) + 1096LL))(a1 - 784, 0); /*0xe9952*/
      return 1; /*0xe996b*/
    }
    if ( a3 == 39 ) /*0xe9935*/
    {
      if ( *(_QWORD *)(a2 + 560) ) /*0xe9937*/
      {
        v6 = *(_QWORD *)(a1 + 8); /*0xe9943*/
        if ( v6 ) /*0xe994a*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6); /*0xe994f*/
      }
      goto LABEL_10; /*0xe994f*/
    }
  }
  return 0; /*0xe9966*/
}
