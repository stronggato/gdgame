#include <new>
#include <Geode/Bindings.hpp>
#include <Geode/binding/AutoBackupOptionsPopup.hpp>
#include <cocos2d.h>


inline __m128i Size = {0};
inline GDStub COERCE_UNSIGNED_INT;
inline GDStub FLAlert_Clicked;
inline GDStub SetupTriggerPopup_getValue;
using namespace cocos2d;

// [1/3] Address: 0xcc3e0
// Method: AutoBackupOptionsPopup::getValue
float AutoBackupOptionsPopup::getValue(int p0)
{
  __int64 a1 = (__int64)this;
  int a2 = (int)to_gd_arg(p0);
  uint64_t a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  double result; // xmm0_8

  if ( a2 != -1 ) /*0xcc3e7*/
    return SetupTriggerPopup_getValue(a1, a2); /*0xcc3fe*/
  *(_QWORD *)&result  = (uintptr_t)(COERCE_UNSIGNED_INT((float)(int)sub_9BFB0())); /*0xcc3f2*/
  return result; /*0xcc3f5*/
}

// [2/3] Address: 0xcc410
// Method: AutoBackupOptionsPopup::valueDidChange
void AutoBackupOptionsPopup::valueDidChange(int p0, float p1)
{
  __int64 a1 = (__int64)this;
  int a2 = (int)to_gd_arg(p0);
  float a3 = (float)to_gd_arg(p1);
  uint64_t a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  int v3; // edi
  __int64 v4; // rbx
  __int64 v5; // rbx
  struct cocos2d::CCString *v6; // rax
  void *v7; // rcx
  void *v8; // [rsp+30h] [rbp-38h]
  void *Block[2]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v10; // [rsp+48h] [rbp-20h]
  unsigned __int64 v11; // [rsp+50h] [rbp-18h]

  if ( a2 == -1 ) /*0xcc413*/
  {
    v3 = (int)a3; /*0xcc437*/
    if ( (int)a3 > 1000 ) /*0xcc442*/
      v3 = 1000; /*0xcc442*/
    if ( v3 < 0 ) /*0xcc449*/
      v3 = 0; /*0xcc449*/
    v4 = qword_905FD0; /*0xcc44c*/
    if ( !qword_905FD0 ) /*0xcc456*/
    {
      v8 = (_QWORD *)operator new(0x6E8u); /*0xcc462*/
      qword_905FD0 = sub_2723A0(v8); /*0xcc470*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0xcc481*/
      v4 = qword_905FD0; /*0xcc483*/
    }
    *(_OWORD *)Block = 0; /*0xcc48d*/
    v10 = 3; /*0xcc492*/
    v11 = 15; /*0xcc49b*/
    LODWORD(Block[0]) = 6256231; /*0xcc4aa*/
    sub_43D80(Block, "0236", 4u); /*0xcc4d1*/
    v5 = *(_QWORD *)(v4 + 432); /*0xcc4d6*/
    v6 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, (unsigned int)(v3 + 1)); /*0xcc4e7*/
    (((cocos2d::CCDictionary*)(v5))->setObject((cocos2d::CCObject*)(v6), (const char*)to_gd_arg(Block))); /*0xcc4f8*/
    if ( v11 > 0xF ) /*0xcc508*/
    {
      v7 = Block[0]; /*0xcc50d*/
      if ( v11 + 1 >= 0x1000 ) /*0xcc51c*/
      {
        v7 = (void *)*((_QWORD *)Block[0] - 1); /*0xcc522*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v7 - 8) > 0x1F ) /*0xcc531*/
          invoke_watson(0, 0, 0, 0, 0); /*0xcc542*/
      }
//       j_j_free(v7); /*0xcc549*/ // cleaned scalar delete
    }
  }
}

// [3/3] Address: 0xcd170
// Method: AutoBackupOptionsPopup::FLAlert_Clicked
void AutoBackupOptionsPopup::FLAlert_Clicked(FLAlertLayer* p0, bool p1)
{
  void** a1 = (void**)this;
  __int64 a2 = (__int64)to_gd_arg(p0);
  char a3 = (char)to_gd_arg(p1);
  uint64_t a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0;

  void **v4; // r14
  __int64 v5; // rdi
  void **v6; // rax
  void **v7; // rax
  int v8; // ebx
  void *v9; // r8
  const char *v10; // r8
  cocos2d::CCString *v11; // rax
  const char *CString; // rax
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  void *v18; // rcx
  unsigned __int64 v19; // r9
  __int64 v20; // r8
  _QWORD *v21; // rdi
  size_t v22; // r15
  size_t v23; // r12
  void **v24; // r13
  size_t v25; // r14
  unsigned __int64 v26; // rbx
  void **v27; // rsi
  void **v28; // rcx
  void *v29; // rcx
  void (__fastcall ***v30)(_QWORD); // rcx
  double result; // xmm0_8
  unsigned __int64 v32; // [rsp+38h] [rbp-61h]
  __int64 v33; // [rsp+40h] [rbp-59h]
  __int128 v34; // [rsp+48h] [rbp-51h] BYREF
  __int64 v35; // [rsp+58h] [rbp-41h]
  __int64 v36; // [rsp+60h] [rbp-39h]
  __int64 v37; // [rsp+68h] [rbp-31h]
  void **v38; // [rsp+70h] [rbp-29h]
  void *Block[2]; // [rsp+78h] [rbp-21h] BYREF
  __m128i si128; // [rsp+88h] [rbp-11h]
  void *Src[2]; // [rsp+98h] [rbp-1h] BYREF
  size_t Size; // [rsp+A8h] [rbp+Fh]
  unsigned __int64 v43; // [rsp+B0h] [rbp+17h]

  if ( a3 ) /*0xcd173*/
  {
    v4 = a1; /*0xcd1a6*/
    v38 = a1; /*0xcd1a9*/
    v5 = 0; /*0xcd1ad*/
    sub_9C250(Src); /*0xcd1b6*/
    v37 = 1; /*0xcd1c0*/
    if ( Size ) /*0xcd1ce*/
    {
      v6 = Src; /*0xcd1d0*/
      if ( v43 > 0xF ) /*0xcd1e0*/
        v6 = (void **)Src[0]; /*0xcd1e0*/
      if ( *((_BYTE *)v6 + Size - 1) != 47 ) /*0xcd1e9*/
      {
        v7 = Src; /*0xcd1eb*/
        if ( v43 > 0xF ) /*0xcd1f3*/
          v7 = (void **)Src[0]; /*0xcd1f3*/
        if ( *((_BYTE *)v7 + Size - 1) != 92 ) /*0xcd1fc*/
          sub_43D80(Src, "/", 1u); /*0xcd20c*/
      }
    }
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 1 ) /*0xcd21c*/
    {
      *(_OWORD *)Block = 0; /*0xcd225*/
      si128 = _mm_load_si128((const __m128i *)&::Size); /*0xcd231*/
      LOBYTE(Block[0]) = 0; /*0xcd236*/
      sub_9BFB0(); /*0xcd23a*/
      v8 = sub_CB940(Src); /*0xcd251*/
      if ( si128.m128i_i64[1] > 0xFuLL ) /*0xcd25b*/
      {
        v9 = Block[0]; /*0xcd260*/
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0xcd26e*/
        {
          v9 = (void *)*((_QWORD *)Block[0] - 1); /*0xcd274*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v9 - 8) > 0x1F ) /*0xcd283*/
            invoke_watson(0, 0, 0, 0, 0); /*0xcd294*/
        }
//         j_j_free(v9); /*0xcd29e*/ // cleaned scalar delete
      }
      v38 = Block; /*0xcd2a7*/
      *(_OWORD *)Block = 0; /*0xcd2ae*/
      si128.m128i_i64[0] = 0; /*0xcd2b2*/
      si128.m128i_i64[1] = 15; /*0xcd2b6*/
      LOBYTE(Block[0]) = 0; /*0xcd2be*/
      v10 = (const char *)&unk_70802C; /*0xcd2c9*/
      if ( v8 == 1 ) /*0xcd2d3*/
        v10 = &byte_6E86E0; /*0xcd2d3*/
      v11 = cocos2d::CCString::createWithFormat("Removed %i backup%s", v8, v10); /*0xcd2e0*/
      CString = (((cocos2d::CCString*)(v11))->getCString()); /*0xcd2e9*/
      v34 = 0; /*0xcd2f2*/
      v35 = 0; /*0xcd2f6*/
      v36 = 0; /*0xcd2fa*/
      v13 = -1; /*0xcd2fe*/
      do /*0xcd308*/
        ++v13; /*0xcd305*/
      while ( CString[v13] ); /*0xcd308*/
      sub_3C230(&v34); /*0xcd316*/
      v14 = (__int64)*(v4 - 125); /*0xcd31b*/
      v17 = sub_3A4CA0(&v34, v15, v16, 150, Block); /*0xcd345*/
      (*(void (__fastcall **)(void **, __int64, __int64))(v14 + 456))(v4 - 125, v17, 100); /*0xcd35a*/
    }
    else if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 2 ) /*0xcd371*/
    {
      v34 = 0; /*0xcd37a*/
      v35 = 0; /*0xcd37f*/
      *(_OWORD *)Block = 0; /*0xcd383*/
      si128 = _mm_load_si128((const __m128i *)&::Size); /*0xcd38f*/
      LOBYTE(Block[0]) = 0; /*0xcd394*/
      sub_CAF60(Src); /*0xcd3a4*/
      if ( si128.m128i_i64[1] > 0xFuLL ) /*0xcd3b2*/
      {
        v18 = Block[0]; /*0xcd3b7*/
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0xcd3c5*/
        {
          v18 = (void *)*((_QWORD *)Block[0] - 1); /*0xcd3cb*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v18 - 8) > 0x1F ) /*0xcd3da*/
            invoke_watson(0, 0, 0, 0, 0); /*0xcd3eb*/
        }
//         j_j_free(v18); /*0xcd3f2*/ // cleaned scalar delete
      }
      v19 = 0; /*0xcd3f7*/
      v32 = 0; /*0xcd3fa*/
      v20 = v34; /*0xcd402*/
      if ( (*((_QWORD *)&v34 + 1) - (_QWORD)v34) / 168LL ) /*0xcd424*/
      {
        v33 = 0; /*0xcd42d*/
        do /*0xcd594*/
        {
          v21 = (_QWORD *)(v20 + v5); /*0xcd440*/
          if ( v21[6] ) /*0xcd443*/
          {
            v22 = Size; /*0xcd44e*/
            v23 = v21[2]; /*0xcd452*/
            if ( 0x7FFFFFFFFFFFFFFFLL - Size < v23 ) /*0xcd45f*/
              sub_8D90(0x7FFFFFFFFFFFFFFFLL, 22, v20); /*0xcd60c*/
            v24 = Src; /*0xcd465*/
            if ( v43 > 0xF ) /*0xcd46e*/
              v24 = (void **)Src[0]; /*0xcd46e*/
            if ( v21[3] > 0xFu ) /*0xcd478*/
              v21 = (_QWORD *)*v21; /*0xcd47a*/
            *(_OWORD *)Block = 0; /*0xcd480*/
            si128 = _mm_setzero_si128(); /*0xcd487*/
            v25 = Size + v23; /*0xcd48c*/
            v26 = 15; /*0xcd490*/
            v27 = Block; /*0xcd495*/
            if ( Size + v23 > 0xF ) /*0xcd49c*/
            {
              v26 = v25 | 0xF; /*0xcd4a1*/
              if ( (v25 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0xcd4a8*/
              {
                if ( v26 < 0x16 ) /*0xcd4b3*/
                  v26 = 22; /*0xcd4b3*/
              }
              else
              {
                v26 = 0x7FFFFFFFFFFFFFFFLL; /*0xcd4aa*/
              }
              v27 = (void **)sub_3C460(v26 + 1); /*0xcd4c0*/
              Block[0] = v27; /*0xcd4c3*/
            }
            si128.m128i_i64[0] = v22 + v23; /*0xcd4c7*/
            si128.m128i_i64[1] = v26; /*0xcd4cb*/
            memcpy(v27, v24, v22); /*0xcd4d8*/
            memcpy((char *)v27 + v22, v21, v23); /*0xcd4e7*/
            *((_BYTE *)v27 + v25) = 0; /*0xcd4ec*/
            v37 = (unsigned int)v37 | 2; /*0xcd4f8*/
            v28 = Block; /*0xcd4ff*/
            if ( si128.m128i_i64[1] > 0xFuLL ) /*0xcd508*/
              v28 = (void **)Block[0]; /*0xcd508*/
            remove((const char *)v28); /*0xcd50d*/
            if ( si128.m128i_i64[1] > 0xFuLL ) /*0xcd51b*/
            {
              v29 = Block[0]; /*0xcd520*/
              if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0xcd52e*/
              {
                v29 = (void *)*((_QWORD *)Block[0] - 1); /*0xcd534*/
                if ( (unsigned __int64)((char *)Block[0] - (char *)v29 - 8) > 0x1F ) /*0xcd543*/
                  invoke_watson(0, 0, 0, 0, 0); /*0xcd605*/
              }
//               j_j_free(v29); /*0xcd549*/ // cleaned scalar delete
            }
            v19 = v32; /*0xcd54e*/
            v20 = v34; /*0xcd552*/
          }
          v32 = ++v19; /*0xcd559*/
          v5 = v33 + 168; /*0xcd561*/
          v33 += 168; /*0xcd568*/
        }
        while ( v19 < (*((_QWORD *)&v34 + 1) - v20) / 168 ); /*0xcd594*/
        v4 = v38; /*0xcd59a*/
      }
      sub_CDC80(&v34); /*0xcd5a2*/
    }
    sub_CC570(v4 - 125); /*0xcd5ae*/
    v30 = (void (__fastcall ***)(_QWORD))v4[1]; /*0xcd5b3*/
    if ( v30 ) /*0xcd5ba*/
      (**v30)((uintptr_t)v30); /*0xcd5bf*/
    { sub_3C310(Src); return; } /*0xcd5c6*/
  }
  { result; return; } /*0xcd5f1*/
}
