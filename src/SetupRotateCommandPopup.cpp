#include <Geode/binding/SetupRotateCommandPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/8] Address: 0xbe430
// Method: SetupRotateCommandPopup::init
// Hidden C++ exception states: #wind=3
char *__fastcall SetupRotateCommandPopup_init(__int64 a1)
{
  __m128i si128; // xmm8
  __m128i *v3; // xmm6_8
  __m128i v4; // xmm7
  __m128i *v5; // rdx
  __m128i *p_Src; // rbx
  char v7; // di
  void *v8; // rcx
  char *v9; // rbx
  _BYTE *v10; // rcx
  char *v11; // rbx
  __m128i Src; // [rsp+38h] [rbp-C8h] BYREF
  __m128i v14; // [rsp+48h] [rbp-B8h]
  _DWORD v15[4]; // [rsp+60h] [rbp-A0h] BYREF
  __m128i v16; // [rsp+70h] [rbp-90h] BYREF
  __m128i v17; // [rsp+80h] [rbp-80h]
  void *Block[2]; // [rsp+90h] [rbp-70h] BYREF
  __m128i v19; // [rsp+A0h] [rbp-60h]
  __int64 v20; // [rsp+B0h] [rbp-50h]
  __int128 v21; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v22; // [rsp+C8h] [rbp-38h]
  __int64 v23; // [rsp+D0h] [rbp-30h]
  void *v24; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v25; // [rsp+E0h] [rbp-20h]
  _BYTE v26[32]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v27[16]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v28; // [rsp+120h] [rbp+20h]

  if ( !a1 || *(_BYTE *)(a1 + 465) ) /*0xbe478*/
    return 0; /*0xbe706*/
  v15[2] = 0; /*0xbe485*/
  v16 = 0; /*0xbe48c*/
  v17.m128i_i64[0] = 0; /*0xbe491*/
  v17.m128i_i64[1] = 15; /*0xbe49b*/
  v16.m128i_i8[0] = 0; /*0xbe49f*/
  *(_OWORD *)Block = 0; /*0xbe4a4*/
  si128 = _mm_load_si128((const __m128i *)&Size); /*0xbe4a8*/
  v19 = si128; /*0xbe4b1*/
  LOBYTE(Block[0]) = 0; /*0xbe4b7*/
  v20 = 0; /*0xbe4bb*/
  v21 = 0; /*0xbe4bf*/
  v22 = 0; /*0xbe4c3*/
  v23 = 15; /*0xbe4c7*/
  LOBYTE(v21) = 0; /*0xbe4cb*/
  v24 = 0; /*0xbe4cf*/
  v25 = 0; /*0xbe4d3*/
  v15[0] = 5; /*0xbe4d8*/
  v15[1] = *(_DWORD *)(a1 + 320); /*0xbe4e6*/
  sub_3E4F0(&Src, a1 + 400); /*0xbe4f6*/
  v3 = (__m128i *)Src.m128i_i64[0]; /*0xbe4fb*/
  v16 = Src; /*0xbe500*/
  v4 = v14; /*0xbe505*/
  v17 = v14; /*0xbe50a*/
  v14 = si128; /*0xbe50e*/
  Src.m128i_i8[0] = 0; /*0xbe515*/
  sub_3C310(&Src); /*0xbe51f*/
  v5 = &v16; /*0xbe524*/
  if ( _mm_srli_si128(v4, 8).m128i_u64[0] > 0xF ) /*0xbe53f*/
    v5 = v3; /*0xbe53f*/
  sub_3F5A0(&v21, v5, v4.m128i_u64[0]); /*0xbe54c*/
  sub_3E4F0(v27, a1 + 368); /*0xbe55c*/
  if ( v28 ) /*0xbe56d*/
  {
    sub_3E4F0(&Src, a1 + 368); /*0xbe596*/
    p_Src = &Src; /*0xbe59b*/
    v7 = 78; /*0xbe5a0*/
  }
  else
  {
    sub_3E4F0(v26, a1 + 336); /*0xbe57a*/
    p_Src = (__m128i *)v26; /*0xbe57f*/
    v7 = 45; /*0xbe583*/
  }
  if ( v19.m128i_i64[1] > 0xFuLL ) /*0xbe5ad*/
  {
    v8 = Block[0]; /*0xbe5b2*/
    if ( (unsigned __int64)(v19.m128i_i64[1] + 1) >= 0x1000 ) /*0xbe5c0*/
    {
      v8 = (void *)*((_QWORD *)Block[0] - 1); /*0xbe5c6*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F ) /*0xbe5d5*/
        invoke_watson(0, 0, 0, 0, 0); /*0xbe5e6*/
    }
    j_j_free(v8); /*0xbe5ed*/
  }
  *(__m128i *)Block = *p_Src; /*0xbe5f5*/
  v19 = p_Src[1]; /*0xbe5fd*/
  p_Src[1].m128i_i64[0] = 0; /*0xbe601*/
  p_Src[1].m128i_i64[1] = 15; /*0xbe605*/
  p_Src->m128i_i8[0] = 0; /*0xbe609*/
  if ( (v7 & 2) != 0 ) /*0xbe610*/
  {
    v7 &= ~2u; /*0xbe612*/
    sub_3C310(&Src); /*0xbe61a*/
  }
  if ( (v7 & 1) != 0 ) /*0xbe624*/
    sub_3C310(v26); /*0xbe62a*/
  sub_3C310(v27); /*0xbe634*/
  Src = _mm_load_si128((const __m128i *)&xmmword_831130); /*0xbe641*/
  v14.m128i_i32[0] = 7; /*0xbe647*/
  v9 = (char *)sub_3C460(20); /*0xbe659*/
  memmove(v9, &Src, 0x14u); /*0xbe66e*/
  v10 = v24; /*0xbe673*/
  if ( v24 ) /*0xbe67a*/
  {
    if ( ((*((_QWORD *)&v25 + 1) - (_QWORD)v24) & 0xFFFFFFFFFFFFFFFCuLL) >= 0x1000 ) /*0xbe691*/
    {
      v10 = (_BYTE *)*((_QWORD *)v24 - 1); /*0xbe697*/
      if ( (unsigned __int64)((_BYTE *)v24 - v10 - 8) > 0x1F ) /*0xbe6a6*/
        invoke_watson(0, 0, 0, 0, 0); /*0xbe6b7*/
    }
    j_j_free(v10); /*0xbe6be*/
  }
  v24 = v9; /*0xbe6c3*/
  *(_QWORD *)&v25 = v9 + 20; /*0xbe6c7*/
  *((_QWORD *)&v25 + 1) = v9 + 20; /*0xbe6cb*/
  v11 = GJMessagePopup_create((__int64)v15); /*0xbe6d9*/
  sub_685C0(&v24); /*0xbe6e0*/
  sub_3C310(&v21); /*0xbe6e9*/
  sub_3C310(Block); /*0xbe6f2*/
  sub_3C310(&v16); /*0xbe6fc*/
  return v11; /*0xbe708*/
}

// [2/8] Address: 0x3aa240
// Method: SetupRotateCommandPopup::~SetupRotateCommandPopup
cocos2d::CCNode *__fastcall SetupRotateCommandPopup__dtor_SetupRotateCommandPopup(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &SetupRotateCommandPopup::`vftable'; /*0x3aa253*/
  *((_QWORD *)Block + 40) = &SetupRotateCommandPopup::`vftable'; /*0x3aa260*/
  *((_QWORD *)Block + 41) = &SetupRotateCommandPopup::`vftable'; /*0x3aa26e*/
  *((_QWORD *)Block + 42) = &SetupRotateCommandPopup::`vftable'; /*0x3aa27c*/
  *((_QWORD *)Block + 43) = &SetupRotateCommandPopup::`vftable'; /*0x3aa28a*/
  *((_QWORD *)Block + 44) = &SetupRotateCommandPopup::`vftable'; /*0x3aa298*/
  *((_QWORD *)Block + 51) = &SetupRotateCommandPopup::`vftable'; /*0x3aa2a6*/
  *((_QWORD *)Block + 54) = &SetupRotateCommandPopup::`vftable'; /*0x3aa2b4*/
  *((_QWORD *)Block + 68) = &SetupRotateCommandPopup::`vftable'; /*0x3aa2c2*/
  *((_QWORD *)Block + 83) = &SetupRotateCommandPopup::`vftable'; /*0x3aa2d0*/
  *((_QWORD *)Block + 84) = &SetupRotateCommandPopup::`vftable'; /*0x3aa2de*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x3aa2e5*/
  if ( (a2 & 1) != 0 ) /*0x3aa2ed*/
    j_j_free(Block); /*0x3aa2f7*/
  return Block; /*0x3aa2fc*/
}

// [3/8] Address: 0x3ab6d0
// Method: SetupRotateCommandPopup::triggerValueFromSliderValue
float __fastcall SetupRotateCommandPopup_triggerValueFromSliderValue(__int64 a1, int a2, float a3)
{
  float v3; // xmm0_4

  if ( a2 != 68 ) /*0x3ab6d7*/
    return SetupTriggerPopup_triggerValueFromSliderValue(a1, a2, a3); /*0x3ab6ed*/
  v3 = SetupTriggerPopup_triggerValueFromSliderValue(a1, 68, a3); /*0x3ab6d9*/
  return roundf(v3); /*0x3ab6de*/
}

// [4/8] Address: 0x3ab700
// Method: SetupRotateCommandPopup::triggerSliderValueFromValue
// attributes: thunk
__m128 __fastcall SetupRotateCommandPopup_triggerSliderValueFromValue(__int64 a1, int a2, float a3)
{
  return SetupTriggerPopup_triggerSliderValueFromValue(a1, a2, a3);
}

// [5/8] Address: 0x3ab710
// Method: SetupRotateCommandPopup::updateInputNode
// attributes: thunk
struct cocos2d::CCObject *__fastcall SetupRotateCommandPopup_updateInputNode(__int64 a1, int a2, float a3)
{
  return SetupTriggerPopup_updateInputNode(a1, a2, a3);
}

// [6/8] Address: 0x3ab720
// Method: SetupRotateCommandPopup::valueDidChange
void __fastcall SetupRotateCommandPopup_valueDidChange(__int64 a1, int a2, float a3)
{
  __int64 v4; // rdx
  int v5; // edx
  int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // rdx
  bool v9; // di
  __int64 v10; // rcx

  v4 = (unsigned int)(a2 - 100); /*0x3ab736*/
  if ( (_DWORD)v4 ) /*0x3ab739*/
  {
    v5 = v4 - 38; /*0x3ab73f*/
    if ( v5 ) /*0x3ab742*/
    {
      v6 = v5 - 62; /*0x3ab748*/
      if ( v6 ) /*0x3ab74b*/
      {
        v7 = (unsigned int)(v6 - 194); /*0x3ab751*/
        if ( (_DWORD)v7 ) /*0x3ab757*/
        {
          if ( (_DWORD)v7 != 3 ) /*0x3ab75c*/
            return; /*0x3ab75c*/
        }
        else if ( a3 != 0.0 ) /*0x3ab776*/
        {
          if ( cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 752), 100) ) /*0x3ab784*/
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 1152LL))(a1, 100, 0); /*0x3ab79d*/
          else
            sub_60A5A0(a1, 100); /*0x3ab7a8*/
          sub_60ABF0(a1, 100); /*0x3ab7b8*/
        }
        SetupRotateCommandPopup_updateControlVisibility(a1, v7); /*0x3ab7cf*/
        return; /*0x3ab7cf*/
      }
      if ( a3 == 0.0 ) /*0x3ab7dc*/
        return; /*0x3ab7dc*/
      if ( cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 752), 138) ) /*0x3ab7ee*/
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 1152LL))(a1, 138, 0); /*0x3ab807*/
      else
        sub_60A5A0(a1, 138); /*0x3ab817*/
      v8 = 138; /*0x3ab80d*/
    }
    else
    {
      if ( a3 == 0.0 ) /*0x3ab82b*/
        return; /*0x3ab82b*/
      if ( cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 752), 200) ) /*0x3ab83d*/
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 1152LL))(a1, 200, 0); /*0x3ab856*/
      else
        sub_60A5A0(a1, 200); /*0x3ab861*/
      v8 = 200; /*0x3ab866*/
    }
    sub_60ABF0(a1, v8); /*0x3ab871*/
    if ( cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 752), 401) ) /*0x3ab882*/
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 1152LL))(a1, 401, 0); /*0x3ab89b*/
    else
      sub_60A5A0(a1, 401); /*0x3ab8a6*/
    sub_60ABF0(a1, 401); /*0x3ab8c5*/
  }
  else
  {
    if ( a3 != 0.0 ) /*0x3ab8d2*/
    {
      if ( cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 752), 394) ) /*0x3ab8e0*/
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 1152LL))(a1, 394, 0); /*0x3ab8f9*/
      else
        sub_60A5A0(a1, 394); /*0x3ab904*/
      sub_60ABF0(a1, 394); /*0x3ab914*/
    }
    SetupRotateCommandPopup_updateControlVisibility(a1, v4); /*0x3ab921*/
    v9 = a3 != 0.0; /*0x3ab92b*/
    v10 = *(_QWORD *)(a1 + 960); /*0x3ab935*/
    if ( v10 ) /*0x3ab93f*/
    {
      (*(void (__fastcall **)(__int64, bool))(*(_QWORD *)v10 + 336LL))(v10, v9); /*0x3ab948*/
      (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 960) + 936LL))(*(_QWORD *)(a1 + 960), v9); /*0x3ab95c*/
      (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 968) + 336LL))(*(_QWORD *)(a1 + 968), v9); /*0x3ab970*/
      (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 968) + 936LL))(*(_QWORD *)(a1 + 968), v9); /*0x3ab984*/
    }
  }
}

// [7/8] Address: 0x3ab9a0
// Method: SetupRotateCommandPopup::updateControlVisibility
__int64 __fastcall SetupRotateCommandPopup_updateControlVisibility(__int64 a1)
{
  bool v2; // di
  bool v3; // di

  v2 = (*(float (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 1168LL))(a1, 100) != 0.0 /*0x3ab9e2*/
    || (*(float (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 1168LL))(a1, 394) != 0.0;
  (*(void (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)a1 + 1088LL))(a1, 9002, v2); /*0x3ab9f9*/
  (*(void (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)a1 + 1088LL))(a1, 9001, !v2); /*0x3aba12*/
  v3 = (*(float (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 1168LL))(a1, 397) != 0.0 && v2; /*0x3aba3a*/
  (*(void (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)a1 + 1088LL))(a1, 9003, !v3); /*0x3aba50*/
  return (*(__int64 (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)a1 + 1088LL))(a1, 9004, v3);
}

// [8/8] Address: 0x3aba80
// Method: SetupRotateCommandPopup::onInfiniteDuration
double __fastcall SetupRotateCommandPopup_onInfiniteDuration(cocos2d::CCDictionary **a1)
{
  __int64 v2; // r8

  if ( cocos2d::CCDictionary::objectForKey(a1[94], 10) ) /*0x3aba95*/
  {
    LOBYTE(v2) = 1; /*0x3abaab*/
    (*((void (__fastcall **)(cocos2d::CCDictionary **, __int64, __int64))*a1 + 144))(a1, 10, v2); /*0x3abaae*/
  }
  else
  {
    sub_60A5A0(a1, 10); /*0x3ababe*/
  }
  return sub_60ABF0(a1, 10); /*0x3abad3*/
}
