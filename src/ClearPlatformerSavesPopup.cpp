#include <Geode/binding/ClearPlatformerSavesPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0xa1fc0
// Method: ClearPlatformerSavesPopup::~ClearPlatformerSavesPopup
_QWORD *__fastcall ClearPlatformerSavesPopup__dtor_ClearPlatformerSavesPopup(_QWORD *Block, char a2)
{
  *Block = &ClearPlatformerSavesPopup::`vftable'; /*0xa1fd3*/
  Block[40] = &ClearPlatformerSavesPopup::`vftable'; /*0xa1fe0*/
  Block[41] = &ClearPlatformerSavesPopup::`vftable'; /*0xa1fee*/
  Block[42] = &ClearPlatformerSavesPopup::`vftable'; /*0xa1ffc*/
  Block[43] = &ClearPlatformerSavesPopup::`vftable'; /*0xa200a*/
  Block[44] = &ClearPlatformerSavesPopup::`vftable'; /*0xa2018*/
  Block[51] = &ClearPlatformerSavesPopup::`vftable'; /*0xa2026*/
  Block[54] = &ClearPlatformerSavesPopup::`vftable'; /*0xa2034*/
  Block[68] = &ClearPlatformerSavesPopup::`vftable'; /*0xa2042*/
  Block[83] = &ClearPlatformerSavesPopup::`vftable'; /*0xa2050*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0xa2057*/
  if ( (a2 & 1) != 0 ) /*0xa205f*/
    j_j_free(Block); /*0xa2069*/
  return Block; /*0xa206e*/
}

// [3/3] Address: 0xa30d0
// Method: ClearPlatformerSavesPopup::FLAlert_Clicked
// Hidden C++ exception states: #wind=3
void __fastcall ClearPlatformerSavesPopup_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  char v5; // di
  const char *v6; // r8
  cocos2d::CCString *v7; // rax
  const char *CString; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  void **v13; // r14
  char *v14; // rsi
  unsigned __int64 v15; // r15
  __int64 v16; // rbx
  unsigned __int64 v17; // rdi
  __int64 v18; // rax
  cocos2d::CCObject *v19; // rbx
  char *v20; // rax
  __int128 *v21; // [rsp+50h] [rbp-49h] BYREF
  __int128 v22; // [rsp+58h] [rbp-41h] BYREF
  unsigned __int64 v23; // [rsp+68h] [rbp-31h]
  __int64 v24; // [rsp+70h] [rbp-29h]
  char v25[32]; // [rsp+80h] [rbp-19h] BYREF
  void *Src[2]; // [rsp+A0h] [rbp+7h] BYREF
  unsigned __int64 v27; // [rsp+B0h] [rbp+17h]
  unsigned __int64 v28; // [rsp+B8h] [rbp+1Fh]

  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 1 && a3 ) /*0xa3118*/
  {
    v5 = *(_BYTE *)(a1 + 8); /*0xa311e*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0xa312a*/
    {
      v21 = (__int128 *)operator new(0x690u); /*0xa3136*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v21); /*0xa3143*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xa3154*/
    }
    LODWORD(v21) = 0; /*0xa3159*/
    RewardUnlockLayer_create(v5 != 0, &v21); /*0xa316a*/
    sub_A2800(a1 - 664); /*0xa3176*/
    v6 = (const char *)&unk_70802C; /*0xa3185*/
    if ( (_DWORD)v21 == 1 ) /*0xa318f*/
      v6 = &byte_6E86E0; /*0xa318f*/
    v7 = cocos2d::CCString::createWithFormat("Cleared <cg>%i</c> platformer save%s.", (_DWORD)v21, v6); /*0xa319a*/
    CString = cocos2d::CCString::getCString(v7); /*0xa31a3*/
    *(_OWORD *)Src = 0; /*0xa31ac*/
    v27 = 0; /*0xa31b0*/
    v28 = 0; /*0xa31b4*/
    v9 = -1; /*0xa31b8*/
    do /*0xa31c3*/
      ++v9; /*0xa31c0*/
    while ( CString[v9] ); /*0xa31c3*/
    sub_3C230(Src); /*0xa31d0*/
    v22 = 0; /*0xa31d9*/
    v23 = 0; /*0xa31dd*/
    v24 = 0; /*0xa31e1*/
    v13 = Src; /*0xa31e5*/
    v14 = (char *)Src[0]; /*0xa31e9*/
    v15 = v28; /*0xa31ed*/
    if ( v28 > 0xF ) /*0xa31f5*/
      v13 = (void **)Src[0]; /*0xa31f5*/
    v16 = 0x7FFFFFFFFFFFFFFFLL; /*0xa31f9*/
    v17 = v27; /*0xa3203*/
    if ( v27 > 0x7FFFFFFFFFFFFFFFLL ) /*0xa320a*/
      sub_8D90(v11, v10, v12); /*0xa3354*/
    if ( v27 > 0xF ) /*0xa3214*/
    {
      if ( (v27 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0xa3236*/
      {
        v16 = v27 | 0xF; /*0xa3238*/
        if ( (v27 | 0xF) < 0x16 ) /*0xa3243*/
          v16 = 22; /*0xa3243*/
      }
      *(_QWORD *)&v22 = sub_3C460(v16 + 1); /*0xa3250*/
      v23 = v17; /*0xa3254*/
      v24 = v16; /*0xa3258*/
      memcpy((void *)v22, v13, v17 + 1); /*0xa3266*/
    }
    else
    {
      v23 = v27; /*0xa3216*/
      v24 = 15; /*0xa321a*/
      v22 = *(_OWORD *)v13; /*0xa3226*/
    }
    v21 = &v22; /*0xa326f*/
    sub_3E4F0(v25, &v22); /*0xa327b*/
    v19 = FLAlertLayer_create_0(0, (int)"Cleared", v18, (__int64)"OK", 0, 1133903872, 0, 0, 1065353216); /*0xa32c7*/
    sub_3C310(&v22); /*0xa32ce*/
    (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v19 + 1064LL))(v19); /*0xa32e0*/
    if ( v15 > 0xF ) /*0xa32e7*/
    {
      v20 = v14; /*0xa32ed*/
      if ( v15 + 1 >= 0x1000 ) /*0xa32f7*/
      {
        v14 = (char *)*((_QWORD *)v14 - 1); /*0xa32fd*/
        if ( (unsigned __int64)(v20 - v14 - 8) > 0x1F ) /*0xa330c*/
          invoke_watson(0, 0, 0, 0, 0); /*0xa331d*/
      }
      j_j_free(v14); /*0xa3327*/
    }
  }
}
