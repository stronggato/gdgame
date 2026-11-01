#include <Geode/binding/EventLinkTrigger.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x633780
// Method: EventLinkTrigger::~EventLinkTrigger
cocos2d::CCSprite *__fastcall EventLinkTrigger__dtor_EventLinkTrigger(cocos2d::CCSprite *Block, char a2)
{
  *(_QWORD *)Block = &EventLinkTrigger::`vftable'; /*0x633794*/
  *((_QWORD *)Block + 40) = &EventLinkTrigger::`vftable'; /*0x6337a0*/
  *((_QWORD *)Block + 43) = &EventLinkTrigger::`vftable'; /*0x6337ae*/
  sub_BB6F0((char *)Block + 1856, (char *)Block + 1856); /*0x6337bf*/
  *(_QWORD *)Block = &EffectGameObject::`vftable'; /*0x6337ce*/
  *((_QWORD *)Block + 40) = &EffectGameObject::`vftable'; /*0x6337d8*/
  *((_QWORD *)Block + 43) = &EffectGameObject::`vftable'; /*0x6337e6*/
  TextGameObject__dtor_TextGameObject(Block); /*0x6337ed*/
  if ( (a2 & 1) != 0 ) /*0x6337f5*/
    j_j_free(Block); /*0x6337ff*/
  return Block; /*0x633804*/
}

// [2/5] Address: 0x654b90
// Method: EventLinkTrigger::init
char __fastcall EventLinkTrigger_init(__int64 a1)
{
  *(_DWORD *)(a1 + 28) = 13; /*0x654b9d*/
  if ( !cocos2d::CCSprite::initWithSpriteFrameName((cocos2d::CCSprite *)a1, "edit_eEventLinkBtn_001.png") ) /*0x654ba7*/
    return 0; /*0x654bf3*/
  sub_287800(a1); /*0x654bb4*/
  *(_BYTE *)(a1 + 313) = 0; /*0x654bb9*/
  *(_DWORD *)(a1 + 1256) = 1; /*0x654bc2*/
  *(_WORD *)(a1 + 1465) = -1; /*0x654bcc*/
  *(_BYTE *)(a1 + 1467) = -1; /*0x654bd5*/
  *(_DWORD *)(a1 + 1468) = 1056964608; /*0x654bdc*/
  *(_BYTE *)(a1 + 1652) = 1; /*0x654be6*/
  return 1; /*0x654bed*/
}

// [3/5] Address: 0x654c00
// Method: EventLinkTrigger::triggerObject
// Hidden C++ exception states: #wind=2
void __fastcall EventLinkTrigger_triggerObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void **v6; // rax
  char v7; // bl
  void *v8; // rcx
  void *Block[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-28h]
  _BYTE v11[32]; // [rsp+48h] [rbp-20h] BYREF

  if ( a4 ) /*0x654c20*/
  {
    v6 = (void **)sub_18A9D0(v11, a4); /*0x654c29*/
    v7 = 1; /*0x654c2f*/
  }
  else
  {
    *(_OWORD *)Block = 0; /*0x654c39*/
    v10 = 0; /*0x654c3f*/
    v6 = Block; /*0x654c48*/
    v7 = 2; /*0x654c4d*/
  }
  sub_3372B0(a2, a1, v6); /*0x654c62*/
  if ( (v7 & 2) != 0 ) /*0x654c6b*/
  {
    v7 &= ~2u; /*0x654c6d*/
    v8 = Block[0]; /*0x654c70*/
    if ( Block[0] ) /*0x654c78*/
    {
      if ( ((v10 - (unsigned __int64)Block[0]) & 0xFFFFFFFFFFFFFFFCuLL) >= 0x1000 ) /*0x654c90*/
      {
        v8 = (void *)*((_QWORD *)Block[0] - 1); /*0x654c96*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F ) /*0x654ca5*/
          invoke_watson(0, 0, 0, 0, 0); /*0x654cba*/
      }
      j_j_free(v8); /*0x654cc1*/
    }
  }
  if ( (v7 & 1) != 0 ) /*0x654cca*/
    sub_685C0(v11); /*0x654cd1*/
}

// [4/5] Address: 0x654cf0
// Method: EventLinkTrigger::getSaveString
// Hidden C++ exception states: #wind=2
__int64 __fastcall EventLinkTrigger_getSaveString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SaveString; // rax
  int v7; // edi
  __int64 *v8; // rbx
  __int64 **v9; // rcx
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 v12; // rax
  __int64 v13; // r8
  __int128 v15; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v16[16]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v17[40]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v18[528]; // [rsp+70h] [rbp-90h] BYREF

  *(_QWORD *)&v15 = a2; /*0x654d25*/
  fmt::BasicWriter<char>::BasicWriter<char>(v18); /*0x654d32*/
  SaveString = EffectGameObject_getSaveString(a1, (__int64)v17, a3); /*0x654d44*/
  v15 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v16, SaveString); /*0x654d5b*/
  fmt::BasicWriter<char>::operator<<(v18, &v15); /*0x654d6a*/
  sub_3C310(v17); /*0x654d76*/
  if ( *(_DWORD *)(a1 + 1480) ) /*0x654d82*/
  {
    *(_QWORD *)&v15 = &unk_709CE8; /*0x654d8b*/
    *((_QWORD *)&v15 + 1) = 0; /*0x654d90*/
    fmt::BasicWriter<char>::operator<<(v18, &v15); /*0x654d9f*/
    fmt::BasicWriter<char>::operator<<(v18, 51); /*0x654daf*/
    *(_QWORD *)&v15 = &unk_709CE8; /*0x654db5*/
    *((_QWORD *)&v15 + 1) = 0; /*0x654dba*/
    fmt::BasicWriter<char>::operator<<(v18, &v15); /*0x654dc9*/
    fmt::BasicWriter<char>::operator<<(v18, *(unsigned int *)(a1 + 1480)); /*0x654dda*/
  }
  if ( *(_DWORD *)(a1 + 1876) ) /*0x654de0*/
  {
    *(_QWORD *)&v15 = &unk_709CE8; /*0x654de9*/
    *((_QWORD *)&v15 + 1) = 0; /*0x654dee*/
    fmt::BasicWriter<char>::operator<<(v18, &v15); /*0x654dfd*/
    fmt::BasicWriter<char>::operator<<(v18, 447); /*0x654e0d*/
    *(_QWORD *)&v15 = &unk_709CE8; /*0x654e13*/
    *((_QWORD *)&v15 + 1) = 0; /*0x654e18*/
    fmt::BasicWriter<char>::operator<<(v18, &v15); /*0x654e27*/
    fmt::BasicWriter<char>::operator<<(v18, *(unsigned int *)(a1 + 1876)); /*0x654e38*/
  }
  if ( *(_DWORD *)(a1 + 1880) ) /*0x654e3e*/
  {
    *(_QWORD *)&v15 = &unk_709CE8; /*0x654e47*/
    *((_QWORD *)&v15 + 1) = 0; /*0x654e4c*/
    fmt::BasicWriter<char>::operator<<(v18, &v15); /*0x654e5b*/
    fmt::BasicWriter<char>::operator<<(v18, 525); /*0x654e6b*/
    *(_QWORD *)&v15 = &unk_709CE8; /*0x654e71*/
    *((_QWORD *)&v15 + 1) = 0; /*0x654e76*/
    fmt::BasicWriter<char>::operator<<(v18, &v15); /*0x654e85*/
    fmt::BasicWriter<char>::operator<<(v18, *(unsigned int *)(a1 + 1880)); /*0x654e96*/
  }
  if ( *(_BYTE *)(a1 + 1872) ) /*0x654e9c*/
  {
    *(_QWORD *)&v15 = &unk_709CE8; /*0x654ea5*/
    *((_QWORD *)&v15 + 1) = 0; /*0x654eaa*/
    fmt::BasicWriter<char>::operator<<(v18, &v15); /*0x654eb9*/
    fmt::BasicWriter<char>::operator<<(v18, 431); /*0x654ec9*/
    *(_QWORD *)&v15 = &unk_709CE8; /*0x654ecf*/
    *((_QWORD *)&v15 + 1) = 0; /*0x654ed4*/
    fmt::BasicWriter<char>::operator<<(v18, &v15); /*0x654ee3*/
    fmt::BasicWriter<char>::operator<<(v18, *(unsigned __int8 *)(a1 + 1872)); /*0x654ef5*/
  }
  if ( *(_QWORD *)(a1 + 1864) ) /*0x654efb*/
  {
    *(_QWORD *)&v15 = &unk_709CE8; /*0x654f09*/
    *((_QWORD *)&v15 + 1) = 0; /*0x654f0e*/
    fmt::BasicWriter<char>::operator<<(v18, &v15); /*0x654f1d*/
    fmt::BasicWriter<char>::operator<<(v18, 430); /*0x654f2d*/
    *(_QWORD *)&v15 = &unk_709CE8; /*0x654f33*/
    *((_QWORD *)&v15 + 1) = 0; /*0x654f38*/
    fmt::BasicWriter<char>::operator<<(v18, &v15); /*0x654f47*/
    v7 = 0; /*0x654f4d*/
    v8 = **(__int64 ***)(a1 + 1856); /*0x654f57*/
    while ( !*((_BYTE *)v8 + 25) ) /*0x654f5a*/
    {
      if ( v7 > 0 ) /*0x654f72*/
      {
        *(_QWORD *)&v15 = "."; /*0x654f74*/
        *((_QWORD *)&v15 + 1) = 0; /*0x654f79*/
        fmt::BasicWriter<char>::operator<<(v18, &v15); /*0x654f88*/
      }
      fmt::BasicWriter<char>::operator<<(v18, *((unsigned int *)v8 + 7)); /*0x654f96*/
      ++v7; /*0x654f9c*/
      v9 = (__int64 **)v8[2]; /*0x654f9e*/
      if ( *((_BYTE *)v9 + 25) ) /*0x654fa2*/
      {
        for ( i = (__int64 *)v8[1]; !*((_BYTE *)i + 25); i = (__int64 *)i[1] ) /*0x654fac*/
        {
          if ( v8 != (__int64 *)i[2] ) /*0x654fb6*/
            break; /*0x654fb6*/
          v8 = i; /*0x654fb8*/
        }
        v8 = i; /*0x654fc5*/
      }
      else
      {
        v8 = (__int64 *)v8[2]; /*0x654fca*/
        for ( j = *v9; !*((_BYTE *)j + 25); j = (__int64 *)*j ) /*0x654fd0*/
          v8 = j; /*0x654fe0*/
      }
    }
  }
  v12 = fmt::BasicWriter<char>::c_str(v18); /*0x654ffe*/
  *(_OWORD *)a2 = 0; /*0x655007*/
  *(_QWORD *)(a2 + 16) = 0; /*0x65500b*/
  *(_QWORD *)(a2 + 24) = 0; /*0x65500f*/
  v13 = -1; /*0x655013*/
  do /*0x655023*/
    ++v13; /*0x655020*/
  while ( *(_BYTE *)(v12 + v13) ); /*0x655023*/
  sub_3C230(a2); /*0x655030*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v18); /*0x65503b*/
  return a2; /*0x655044*/
}

// [5/5] Address: 0x655070
// Method: EventLinkTrigger::customObjectSetup
// Hidden C++ exception states: #wind=4
double __fastcall EventLinkTrigger_customObjectSetup(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  int v7; // eax
  const char *v8; // rcx
  int v9; // eax
  const char *v10; // rcx
  int v11; // eax
  const char *v12; // rcx
  int v13; // eax
  const char *v14; // rcx
  _QWORD *v15; // rdi
  _QWORD *v16; // rsi
  _QWORD *v17; // rbx
  void *v18; // rcx
  void **v19; // rax
  char v20; // bl
  void *v21; // rcx
  const char *v22; // rbx
  const char *i; // rsi
  const char *v24; // rcx
  int v26; // [rsp+30h] [rbp-49h] BYREF
  void *Block[2]; // [rsp+38h] [rbp-41h] BYREF
  __m128i si128; // [rsp+48h] [rbp-31h]
  __int128 v29; // [rsp+58h] [rbp-21h] BYREF
  __int128 v30; // [rsp+68h] [rbp-11h]
  _BYTE v31[32]; // [rsp+78h] [rbp-1h] BYREF

  v26 = 0; /*0x6550a1*/
  EffectGameObject_customObjectSetup(a1, a2, a3); /*0x6550a5*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 408LL) ) /*0x6550ad*/
  {
    v8 = (const char *)(*(_QWORD *)a2 + 1632LL); /*0x6550be*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 1656LL) > 0xFu ) /*0x6550ca*/
      v8 = *(const char **)v8; /*0x6550cc*/
    v7 = atoi(v8); /*0x6550cf*/
  }
  else
  {
    v7 = 0; /*0x6550b6*/
  }
  *(_DWORD *)(a1 + 1480) = v7; /*0x6550d5*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3576LL) ) /*0x6550de*/
  {
    v10 = (const char *)(*(_QWORD *)a2 + 14304LL); /*0x6550ef*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 14328LL) > 0xFu ) /*0x6550fb*/
      v10 = *(const char **)v10; /*0x6550fd*/
    v9 = atoi(v10); /*0x655100*/
  }
  else
  {
    v9 = 0; /*0x6550e7*/
  }
  *(_DWORD *)(a1 + 1876) = v9; /*0x655106*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 4200LL) ) /*0x65510f*/
  {
    v12 = (const char *)(*(_QWORD *)a2 + 16800LL); /*0x655120*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 16824LL) > 0xFu ) /*0x65512c*/
      v12 = *(const char **)v12; /*0x65512e*/
    v11 = atoi(v12); /*0x655131*/
  }
  else
  {
    v11 = 0; /*0x655118*/
  }
  *(_DWORD *)(a1 + 1880) = v11; /*0x655137*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3448LL) ) /*0x655140*/
  {
    v14 = (const char *)(*(_QWORD *)a2 + 13792LL); /*0x655151*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 13816LL) > 0xFu ) /*0x65515d*/
      v14 = *(const char **)v14; /*0x65515f*/
    v13 = atoi(v14); /*0x655162*/
  }
  else
  {
    v13 = 0; /*0x655149*/
  }
  *(_BYTE *)(a1 + 1872) = v13 != 0; /*0x65516d*/
  v15 = (_QWORD *)(a1 + 1856); /*0x655173*/
  v16 = (_QWORD *)*v15; /*0x65517a*/
  v17 = *(_QWORD **)(*v15 + 8LL); /*0x65517d*/
  while ( !*((_BYTE *)v17 + 25) ) /*0x655181*/
  {
    sub_BB690(v15, v15, v17[2]); /*0x65519a*/
    v18 = v17; /*0x65519f*/
    v17 = (_QWORD *)*v17; /*0x6551a2*/
    j_j_free(v18); /*0x6551aa*/
  }
  v16[1] = v16; /*0x6551b5*/
  *v16 = v16; /*0x6551b9*/
  v16[2] = v16; /*0x6551bc*/
  v15[1] = 0; /*0x6551c0*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 3440LL) ) /*0x6551c7*/
  {
    v19 = (void **)sub_3E4F0(v31, *(_QWORD *)a2 + 13760LL); /*0x655201*/
    v20 = 2; /*0x655206*/
  }
  else
  {
    *(_OWORD *)Block = 0; /*0x6551d3*/
    si128 = _mm_load_si128((const __m128i *)&Size); /*0x6551df*/
    LOBYTE(Block[0]) = 0; /*0x6551e4*/
    v19 = Block; /*0x6551e8*/
    v20 = 1; /*0x6551ec*/
  }
  v29 = 0; /*0x65520e*/
  v30 = 0u; /*0x655212*/
  v29 = *(_OWORD *)v19; /*0x65521d*/
  v30 = *((_OWORD *)v19 + 1); /*0x655225*/
  v19[2] = 0; /*0x655229*/
  v19[3] = &loc_D + 2; /*0x65522d*/
  *(_BYTE *)v19 = 0; /*0x655235*/
  if ( (v20 & 2) != 0 ) /*0x65523b*/
  {
    v20 &= ~2u; /*0x65523d*/
    sub_3C310(v31); /*0x655244*/
  }
  if ( (v20 & 1) != 0 ) /*0x65524d*/
  {
    v6 = si128.m128i_i64[1]; /*0x65524f*/
    if ( si128.m128i_i64[1] > 0xFuLL ) /*0x655257*/
    {
      v21 = Block[0]; /*0x65525c*/
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x65526a*/
      {
        v21 = (void *)*((_QWORD *)Block[0] - 1); /*0x655270*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v21 - 8) > 0x1F ) /*0x65527f*/
          invoke_watson(0, 0, 0, 0, 0); /*0x655290*/
      }
      j_j_free(v21); /*0x655297*/
    }
  }
  if ( (_QWORD)v30 ) /*0x6552a1*/
  {
    *(_OWORD *)Block = 0; /*0x6552a6*/
    si128.m128i_i64[0] = 0; /*0x6552ab*/
    sub_47B400(&v29, v6, Block); /*0x6552b7*/
    v22 = (const char *)Block[0]; /*0x6552bc*/
    for ( i = (const char *)Block[1]; v22 != i; v22 += 32 ) /*0x6552c7*/
    {
      v24 = v22; /*0x6552d0*/
      if ( *((_QWORD *)v22 + 3) > 0xFu ) /*0x6552d8*/
        v24 = *(const char **)v22; /*0x6552da*/
      v26 = atoi(v24); /*0x6552e3*/
      sub_BB1F0(v15, v31, &v26); /*0x6552f1*/
    }
    sub_74F50(Block); /*0x655303*/
  }
  return sub_3C310(&v29); /*0x655312*/
}
