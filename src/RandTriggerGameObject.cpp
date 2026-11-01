#include <Geode/binding/RandTriggerGameObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/5] Address: 0x633390
// Method: RandTriggerGameObject::~RandTriggerGameObject
cocos2d::CCSprite *__fastcall RandTriggerGameObject__dtor_RandTriggerGameObject(cocos2d::CCSprite *Block, char a2)
{
  sub_C4C10((char *)Block + 1856); /*0x6333a6*/
  *(_QWORD *)Block = &EffectGameObject::`vftable'; /*0x6333b5*/
  *((_QWORD *)Block + 40) = &EffectGameObject::`vftable'; /*0x6333bf*/
  *((_QWORD *)Block + 43) = &EffectGameObject::`vftable'; /*0x6333cd*/
  TextGameObject__dtor_TextGameObject(Block); /*0x6333d4*/
  if ( (a2 & 1) != 0 ) /*0x6333dc*/
    j_j_free(Block); /*0x6333e6*/
  return Block; /*0x6333eb*/
}

// [2/5] Address: 0x650840
// Method: RandTriggerGameObject::init
bool __fastcall RandTriggerGameObject_init(__int64 a1)
{
  return EffectGameObject_init(a1, "edit_eAdvRandomBtn_001.png") != 0; /*0x650855*/
}

// [3/5] Address: 0x650860
// Method: RandTriggerGameObject::triggerObject
// Hidden C++ exception states: #wind=2
void __fastcall RandTriggerGameObject_triggerObject(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v7; // ecx
  __int64 v8; // rdx
  __int64 i; // rax
  int v10; // r8d
  int v11; // ecx
  unsigned int *v12; // rax
  unsigned int *v13; // rdx
  unsigned int v14; // esi
  char v15; // bl
  _BYTE *v16; // rcx
  _BYTE *Block; // [rsp+40h] [rbp-48h]
  __int64 v18; // [rsp+50h] [rbp-38h]
  _BYTE v19[24]; // [rsp+58h] [rbp-30h] BYREF

  if ( *(_DWORD *)(a1 + 1036) == 2068 ) /*0x650890*/
  {
    v7 = 0; /*0x65089c*/
    v8 = *(_QWORD *)(a1 + 1864); /*0x65089f*/
    for ( i = *(_QWORD *)(a1 + 1856); i != v8; i += 16 ) /*0x6508b0*/
      v7 += *(_DWORD *)(i + 8); /*0x6508b2*/
    qword_905F68 = 214013 * qword_905F68 + 2531011; /*0x6508cf*/
    v10 = (int)roundf((float)((float)(((unsigned __int64)qword_905F68 >> 16) & 0x7FFF) / 32767.0) * (float)v7); /*0x650900*/
    v11 = 0; /*0x650905*/
    v12 = *(unsigned int **)(a1 + 1856); /*0x650908*/
    v13 = *(unsigned int **)(a1 + 1864); /*0x65090f*/
    if ( v12 == v13 ) /*0x650919*/
    {
LABEL_8:
      v14 = 0; /*0x650931*/
    }
    else
    {
      while ( 1 ) /*0x650920*/
      {
        v11 += v12[2]; /*0x650920*/
        if ( v11 >= v10 ) /*0x650926*/
          break; /*0x650926*/
        v12 += 4; /*0x650928*/
        if ( v12 == v13 ) /*0x65092f*/
          goto LABEL_8; /*0x65092f*/
      }
      v14 = *v12; /*0x650950*/
    }
    if ( a4 ) /*0x650937*/
    {
      sub_18A9D0(v19, a4); /*0x650941*/
      v15 = 1; /*0x650949*/
    }
    else
    {
      Block = 0; /*0x650957*/
      v18 = 0; /*0x65095d*/
      v15 = 2; /*0x650967*/
    }
    if ( !*(_BYTE *)(a2 + 13712) ) /*0x650981*/
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a2 + 408) + 8LL))(a2 + 408, v14, 0); /*0x6509b0*/
    if ( (v15 & 2) != 0 ) /*0x6509b7*/
    {
      v15 &= ~2u; /*0x6509b9*/
      v16 = Block; /*0x6509bc*/
      if ( Block ) /*0x6509c4*/
      {
        if ( ((v18 - (_QWORD)Block) & 0xFFFFFFFFFFFFFFFCuLL) >= 0x1000 ) /*0x6509dc*/
        {
          v16 = (_BYTE *)*((_QWORD *)Block - 1); /*0x6509e2*/
          if ( (unsigned __int64)(Block - v16 - 8) > 0x1F ) /*0x6509f1*/
            invoke_watson(0, 0, 0, 0, 0); /*0x650a02*/
        }
        j_j_free(v16); /*0x650a09*/
      }
    }
    if ( (v15 & 1) != 0 ) /*0x650a1f*/
      sub_685C0(v19); /*0x650a26*/
  }
  else
  {
    EffectGameObject_triggerObject(a1, (_QWORD *)a2, a3, a4); /*0x650892*/
  }
}

// [4/5] Address: 0x650a40
// Method: RandTriggerGameObject::customObjectSetup
// Hidden C++ exception states: #wind=3
double __fastcall RandTriggerGameObject_customObjectSetup(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  int v7; // eax
  const char *v8; // rcx
  void **v9; // rax
  char v10; // di
  void *v11; // rcx
  cocos2d::CCArray *v12; // rdi
  cocos2d::CCString *v13; // rax
  cocos2d::CCString *v14; // rax
  int v16; // [rsp+30h] [rbp-88h] BYREF
  int v17; // [rsp+34h] [rbp-84h] BYREF
  void *Block[2]; // [rsp+38h] [rbp-80h] BYREF
  __m128i si128; // [rsp+48h] [rbp-70h]
  __int128 v20; // [rsp+58h] [rbp-60h] BYREF
  __int128 v21; // [rsp+68h] [rbp-50h]
  _BYTE v22[32]; // [rsp+78h] [rbp-40h] BYREF

  v6 = 0; /*0x650a6b*/
  v16 = 0; /*0x650a6d*/
  EffectGameObject_customObjectSetup(a1, a2, a3); /*0x650a71*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 448LL) ) /*0x650a79*/
  {
    v8 = (const char *)(*(_QWORD *)a2 + 1792LL); /*0x650a89*/
    if ( *(_QWORD *)(*(_QWORD *)a2 + 1816LL) > 0xFu ) /*0x650a95*/
      v8 = *(const char **)v8; /*0x650a97*/
    v7 = atoi(v8); /*0x650a9a*/
  }
  else
  {
    v7 = 0; /*0x650a82*/
  }
  *(_BYTE *)(a1 + 1653) = v7 != 0; /*0x650aa5*/
  if ( *(_QWORD *)(*(_QWORD *)a3 + 1216LL) ) /*0x650aae*/
  {
    v9 = (void **)sub_3E4F0(v22, *(_QWORD *)a2 + 4864LL); /*0x650aec*/
    v10 = 2; /*0x650af1*/
  }
  else
  {
    *(_OWORD *)Block = 0; /*0x650aba*/
    si128 = _mm_load_si128((const __m128i *)&Size); /*0x650ac7*/
    LOBYTE(Block[0]) = 0; /*0x650acd*/
    v9 = Block; /*0x650ad1*/
    v10 = 1; /*0x650ad6*/
  }
  v20 = 0; /*0x650af9*/
  v21 = 0; /*0x650b01*/
  v20 = *(_OWORD *)v9; /*0x650b0a*/
  v21 = *((_OWORD *)v9 + 1); /*0x650b13*/
  v9[2] = 0; /*0x650b18*/
  v9[3] = &loc_D + 2; /*0x650b1c*/
  *(_BYTE *)v9 = 0; /*0x650b24*/
  if ( (v10 & 2) != 0 ) /*0x650b2b*/
  {
    v10 &= ~2u; /*0x650b2d*/
    sub_3C310(v22); /*0x650b35*/
  }
  if ( (v10 & 1) != 0 && si128.m128i_i64[1] > 0xFuLL ) /*0x650b4a*/
  {
    v11 = Block[0]; /*0x650b4f*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x650b5e*/
    {
      v11 = (void *)*((_QWORD *)Block[0] - 1); /*0x650b64*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v11 - 8) > 0x1F ) /*0x650b73*/
        invoke_watson(0, 0, 0, 0, 0); /*0x650b84*/
    }
    j_j_free(v11); /*0x650b8b*/
  }
  v12 = (cocos2d::CCArray *)sub_6325A0(&v20); /*0x650b9a*/
  if ( cocos2d::CCArray::count(v12) ) /*0x650ba0*/
  {
    do /*0x650c05*/
    {
      v13 = cocos2d::CCArray::stringAtIndex(v12, v6); /*0x650bb5*/
      v16 = cocos2d::CCString::intValue(v13); /*0x650bc4*/
      v14 = cocos2d::CCArray::stringAtIndex(v12, v6 + 1); /*0x650bce*/
      v17 = cocos2d::CCString::intValue(v14); /*0x650bdd*/
      sub_5CFDB0(a1 + 1856, &v16, &v17); /*0x650bf2*/
      v6 += 2; /*0x650bf7*/
    }
    while ( v6 < cocos2d::CCArray::count(v12) ); /*0x650c05*/
  }
  return sub_3C310(&v20); /*0x650c11*/
}

// [5/5] Address: 0x650c40
// Method: RandTriggerGameObject::getSaveString
// Hidden C++ exception states: #wind=2
__int64 __fastcall RandTriggerGameObject_getSaveString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SaveString; // rax
  int v7; // edi
  unsigned int *v8; // rsi
  unsigned int *i; // rbx
  __int64 v10; // rax
  __int64 v11; // r8
  const char *v13; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+28h] [rbp-D8h]
  __int128 v15; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v16[40]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v17[528]; // [rsp+70h] [rbp-90h] BYREF

  v13 = (const char *)a2; /*0x650c74*/
  fmt::BasicWriter<char>::BasicWriter<char>(v17); /*0x650c81*/
  SaveString = EffectGameObject_getSaveString(a1, (__int64)v16, a3); /*0x650c93*/
  v15 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(&v13, SaveString); /*0x650caa*/
  fmt::BasicWriter<char>::operator<<(v17, &v15); /*0x650cb9*/
  sub_3C310(v16); /*0x650cc5*/
  if ( *(_BYTE *)(a1 + 1653) ) /*0x650cd1*/
  {
    v13 = (const char *)&unk_709CE8; /*0x650cda*/
    v14 = 0; /*0x650cdf*/
    fmt::BasicWriter<char>::operator<<(v17, &v13); /*0x650cee*/
    fmt::BasicWriter<char>::operator<<(v17, 56); /*0x650cfe*/
    v13 = (const char *)&unk_709CE8; /*0x650d04*/
    v14 = 0; /*0x650d09*/
    fmt::BasicWriter<char>::operator<<(v17, &v13); /*0x650d18*/
    fmt::BasicWriter<char>::operator<<(v17, *(unsigned __int8 *)(a1 + 1653)); /*0x650d2b*/
  }
  v13 = (const char *)&unk_709CE8; /*0x650d31*/
  v14 = 0; /*0x650d36*/
  fmt::BasicWriter<char>::operator<<(v17, &v13); /*0x650d45*/
  fmt::BasicWriter<char>::operator<<(v17, 152); /*0x650d55*/
  v13 = (const char *)&unk_709CE8; /*0x650d5b*/
  v14 = 0; /*0x650d60*/
  fmt::BasicWriter<char>::operator<<(v17, &v13); /*0x650d6f*/
  v7 = 0; /*0x650d75*/
  v8 = *(unsigned int **)(a1 + 1864); /*0x650d78*/
  for ( i = *(unsigned int **)(a1 + 1856); i != v8; i += 4 ) /*0x650d89*/
  {
    if ( v7 > 0 ) /*0x650d94*/
    {
      v13 = "."; /*0x650d96*/
      v14 = 0; /*0x650d9b*/
      fmt::BasicWriter<char>::operator<<(v17, &v13); /*0x650daa*/
    }
    fmt::BasicWriter<char>::operator<<(v17, *i); /*0x650db7*/
    *(_QWORD *)&v15 = "."; /*0x650dbd*/
    *((_QWORD *)&v15 + 1) = 0; /*0x650dc2*/
    fmt::BasicWriter<char>::operator<<(v17, &v15); /*0x650dd1*/
    fmt::BasicWriter<char>::operator<<(v17, i[2]); /*0x650ddf*/
    ++v7; /*0x650de5*/
  }
  v10 = fmt::BasicWriter<char>::c_str(v17); /*0x650df5*/
  *(_OWORD *)a2 = 0; /*0x650dfe*/
  *(_QWORD *)(a2 + 16) = 0; /*0x650e02*/
  *(_QWORD *)(a2 + 24) = 0; /*0x650e06*/
  v11 = -1; /*0x650e0a*/
  do /*0x650e14*/
    ++v11; /*0x650e11*/
  while ( *(_BYTE *)(v10 + v11) ); /*0x650e14*/
  sub_3C230(a2); /*0x650e21*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v17); /*0x650e2c*/
  return a2; /*0x650e35*/
}
