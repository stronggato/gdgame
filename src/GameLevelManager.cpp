#include <Geode/binding/GameLevelManager.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/86] Address: 0x6af10
// Method: GameLevelManager::onUpdateDescriptionCompleted
// Hidden C++ exception states: #wind=1
void __fastcall GameLevelManager_onUpdateDescriptionCompleted(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // rbx
  unsigned __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *Block[2]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v12; // [rsp+48h] [rbp-40h]
  unsigned __int64 v13; // [rsp+50h] [rbp-38h]

  v4 = a1; /*0x6af32*/
  v5 = 0; /*0x6af38*/
  if ( (unsigned __int64)a1[3] > 0xF ) /*0x6af40*/
    a1 = (__int64 *)*a1; /*0x6af42*/
  v6 = sub_44BF0((_DWORD)a1, v4[2], 0, (unsigned int)&unk_708034, 1); /*0x6af61*/
  v7 = v4[2]; /*0x6af64*/
  while ( 1 ) /*0x6af73*/
  {
    *(_OWORD *)Block = 0; /*0x6af73*/
    v12 = 0; /*0x6af78*/
    v13 = 0; /*0x6af7d*/
    if ( v4[2] < v5 ) /*0x6af89*/
      sub_3E4D0(); /*0x6b0bd*/
    sub_3C230(Block); /*0x6afb5*/
    if ( v12 || v5 != v7 ) /*0x6afc6*/
      sub_74DE0(a3, Block); /*0x6afd0*/
    if ( v6 == -1 ) /*0x6afd9*/
      break; /*0x6afd9*/
    v5 = v6 + 1; /*0x6afdb*/
    LODWORD(v8) = (_DWORD)v4; /*0x6afdf*/
    if ( (unsigned __int64)v4[3] > 0xF ) /*0x6afe7*/
      v8 = *v4; /*0x6afe9*/
    v6 = sub_44BF0(v8, v4[2], (int)v6 + 1, (unsigned int)&unk_708034, 1); /*0x6b008*/
    if ( v13 > 0xF ) /*0x6b014*/
    {
      v9 = Block[0]; /*0x6b01d*/
      if ( v13 + 1 >= 0x1000 ) /*0x6b02c*/
      {
        v9 = (void *)*((_QWORD *)Block[0] - 1); /*0x6b032*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v9 - 8) > 0x1F ) /*0x6b041*/
          goto LABEL_18; /*0x6b041*/
      }
      j_j_free(v9); /*0x6b043*/
    }
  }
  if ( v13 > 0xF ) /*0x6b056*/
  {
    v10 = Block[0]; /*0x6b05b*/
    if ( v13 + 1 >= 0x1000 ) /*0x6b06a*/
    {
      v10 = (void *)*((_QWORD *)Block[0] - 1); /*0x6b070*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v10 - 8) > 0x1F ) /*0x6b07f*/
LABEL_18:
        invoke_watson(0, 0, 0, 0, 0); /*0x6b081*/
    }
    j_j_free(v10); /*0x6b097*/
  }
}

// [2/86] Address: 0x6e950
// Method: GameLevelManager::onUpdateUserScoreCompleted
// Hidden C++ exception states: #wind=2
void __fastcall GameLevelManager_onUpdateUserScoreCompleted(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 *v5; // rbx
  unsigned __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r14
  bool v9; // r15
  __int64 v10; // r12
  void **v11; // rcx
  void **v12; // rax
  void **v13; // rdx
  void *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  void *v17; // rcx
  void *Src[2]; // [rsp+38h] [rbp-48h] BYREF
  size_t Size; // [rsp+48h] [rbp-38h]
  unsigned __int64 v20; // [rsp+50h] [rbp-30h]
  void *Block[2]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v22; // [rsp+68h] [rbp-18h]
  unsigned __int64 v23; // [rsp+70h] [rbp-10h]

  v5 = a1; /*0x6e97e*/
  v6 = 0; /*0x6e981*/
  v7 = -1; /*0x6e983*/
  do /*0x6e993*/
    ++v7; /*0x6e990*/
  while ( *(_BYTE *)(a2 + v7) ); /*0x6e993*/
  if ( (unsigned __int64)a1[3] > 0xF ) /*0x6e99e*/
    a1 = (__int64 *)*a1; /*0x6e9a0*/
  v8 = sub_44BF0((_DWORD)a1, v5[2], 0, a2, v7); /*0x6e9b7*/
  *(_OWORD *)Block = 0; /*0x6e9bd*/
  v22 = 0; /*0x6e9c1*/
  v23 = 15; /*0x6e9c5*/
  LOBYTE(Block[0]) = 0; /*0x6e9cd*/
  v9 = 1; /*0x6e9d1*/
  v10 = *((int *)v5 + 4); /*0x6e9d4*/
  while ( 1 ) /*0x6e9e0*/
  {
    if ( v6 == v10 ) /*0x6e9e3*/
      goto LABEL_20; /*0x6e9e3*/
    *(_OWORD *)Src = 0; /*0x6e9ec*/
    Size = 0; /*0x6e9f0*/
    v20 = 0; /*0x6e9f8*/
    if ( v5[2] < v6 ) /*0x6ea07*/
      sub_3E4D0(); /*0x6eb94*/
    sub_3C230(Src); /*0x6ea32*/
    if ( v9 ) /*0x6ea3b*/
    {
      v11 = Block; /*0x6ea3d*/
LABEL_13:
      v13 = Src; /*0x6ea62*/
      if ( v20 > 0xF ) /*0x6ea6f*/
        v13 = (void **)Src[0]; /*0x6ea6f*/
      sub_3F5A0(v11, v13, Size); /*0x6ea74*/
      goto LABEL_16; /*0x6ea74*/
    }
    if ( v22 ) /*0x6ea48*/
    {
      v12 = (void **)sub_74A10(a3, Block); /*0x6ea51*/
      if ( v12 != Src ) /*0x6ea5d*/
      {
        v11 = v12; /*0x6ea5f*/
        goto LABEL_13; /*0x6ea5f*/
      }
    }
LABEL_16:
    v9 = !v9; /*0x6ea79*/
    if ( v20 > 0xF ) /*0x6ea88*/
    {
      v14 = Src[0]; /*0x6ea8d*/
      if ( v20 + 1 >= 0x1000 ) /*0x6ea9b*/
      {
        v14 = (void *)*((_QWORD *)Src[0] - 1); /*0x6eaa1*/
        if ( (unsigned __int64)((char *)Src[0] - (char *)v14 - 8) > 0x1F ) /*0x6eab0*/
          invoke_watson(0, 0, 0, 0, 0); /*0x6eb15*/
      }
      j_j_free(v14); /*0x6eab2*/
    }
LABEL_20:
    if ( v8 == -1 ) /*0x6eabb*/
      break; /*0x6eabb*/
    v6 = v8 + 1; /*0x6eabd*/
    v15 = -1; /*0x6eac1*/
    do /*0x6ead3*/
      ++v15; /*0x6ead0*/
    while ( *(_BYTE *)(a2 + v15) ); /*0x6ead3*/
    LODWORD(v16) = (_DWORD)v5; /*0x6ead9*/
    if ( (unsigned __int64)v5[3] > 0xF ) /*0x6eae1*/
      v16 = *v5; /*0x6eae3*/
    v8 = sub_44BF0(v16, v5[2], (int)v8 + 1, a2, v15); /*0x6eafa*/
  }
  if ( v23 > 0xF ) /*0x6eb24*/
  {
    v17 = Block[0]; /*0x6eb29*/
    if ( v23 + 1 >= 0x1000 ) /*0x6eb37*/
    {
      v17 = (void *)*((_QWORD *)Block[0] - 1); /*0x6eb3d*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v17 - 8) > 0x1F ) /*0x6eb4c*/
        invoke_watson(0, 0, 0, 0, 0); /*0x6eb61*/
    }
    j_j_free(v17); /*0x6eb68*/
  }
}

// [3/86] Address: 0x8efd0
// Method: GameLevelManager::getGJSecretReward
// Hidden C++ exception states: #wind=4
void __fastcall GameLevelManager_getGJSecretReward(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r8
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  void **v11; // r14
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r8
  void **v16; // rcx
  size_t v17; // r12
  size_t v18; // r8
  int v19; // eax
  size_t v20; // r15
  void **v21; // rsi
  unsigned __int64 v22; // r13
  void *v23; // rdi
  void **v24; // rcx
  size_t v25; // r8
  _BYTE *v26; // rax
  void **v27; // rdx
  unsigned __int64 v28; // r13
  void **v29; // rcx
  unsigned __int64 v30; // rdi
  size_t v31; // r8
  void **v32; // rcx
  __int64 v33; // rax
  void **v34; // rax
  _QWORD *v35; // rbx
  void **v36; // rax
  void **v37; // rax
  unsigned __int64 v38; // r15
  size_t v39; // rdi
  void **v40; // r12
  __int64 v41; // rsi
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // r8
  void *v45; // r9
  char v46; // r13
  void **v47; // rcx
  size_t v48; // r12
  size_t v49; // r8
  void **v50; // rcx
  size_t v51; // r8
  void *v52; // rcx
  void **v53; // rdx
  unsigned __int64 v54; // r13
  void **v55; // rcx
  unsigned __int64 v56; // r15
  size_t v57; // r8
  void **v58; // rcx
  __int64 v59; // rax
  void **v60; // rax
  _QWORD *v61; // rbx
  void **v62; // rax
  bool v63; // [rsp+30h] [rbp-79h]
  bool v64; // [rsp+30h] [rbp-79h]
  char v65; // [rsp+34h] [rbp-75h]
  __int64 Buf2; // [rsp+38h] [rbp-71h] BYREF
  __int64 Buf2_8; // [rsp+40h] [rbp-69h]
  __int64 v68; // [rsp+48h] [rbp-61h]
  __int64 v69; // [rsp+50h] [rbp-59h]
  int v70; // [rsp+58h] [rbp-51h]
  _QWORD *v71; // [rsp+60h] [rbp-49h]
  void *Block[2]; // [rsp+68h] [rbp-41h]
  __int64 v73; // [rsp+78h] [rbp-31h]
  __int64 v74; // [rsp+80h] [rbp-29h]
  void *v75[2]; // [rsp+88h] [rbp-21h] BYREF
  size_t Size; // [rsp+98h] [rbp-11h]
  unsigned __int64 v77; // [rsp+A0h] [rbp-9h]
  void *Buf1[2]; // [rsp+A8h] [rbp-1h] BYREF
  size_t v79; // [rsp+B8h] [rbp+Fh]
  unsigned __int64 v80; // [rsp+C0h] [rbp+17h]

  v71 = a1; /*0x8f000*/
  v70 = 0; /*0x8f006*/
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x8f01a*/
  *(_OWORD *)Buf1 = 0; /*0x8f020*/
  v79 = 0; /*0x8f024*/
  v80 = 0; /*0x8f028*/
  v5 = -1; /*0x8f02c*/
  v6 = -1; /*0x8f033*/
  do /*0x8f039*/
    ++v6; /*0x8f036*/
  while ( *(_BYTE *)(v4 + v6) ); /*0x8f039*/
  sub_3C230(Buf1); /*0x8f046*/
  v7 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2); /*0x8f052*/
  v11 = (void **)Buf1[0]; /*0x8f055*/
  v12 = v7 - 2; /*0x8f059*/
  if ( v12 ) /*0x8f05c*/
  {
    if ( v12 == 1 ) /*0x8f065*/
    {
      v13 = *(_QWORD *)(a1[18] + 600LL) + 600LL; /*0x8f079*/
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13); /*0x8f083*/
      *(_OWORD *)v75 = 0; /*0x8f089*/
      Size = 0; /*0x8f08d*/
      v77 = 0; /*0x8f091*/
      v15 = -1; /*0x8f095*/
      do /*0x8f0a3*/
        ++v15; /*0x8f0a0*/
      while ( *(_BYTE *)(v14 + v15) ); /*0x8f0a3*/
      sub_3C230(v75); /*0x8f0b1*/
      Buf2_8 = 58; /*0x8f0ba*/
      v68 = 9; /*0x8f0c3*/
      v69 = 15; /*0x8f0cd*/
      Buf2 = 0x64726F7773736150LL; /*0x8f0d9*/
      v65 = 84; /*0x8f0f1*/
      v70 = 84; /*0x8f0f4*/
      v16 = Buf1; /*0x8f0f7*/
      if ( v80 > 0xF ) /*0x8f0ff*/
        v16 = v11; /*0x8f0ff*/
      v17 = v79; /*0x8f103*/
      v18 = v79; /*0x8f107*/
      if ( v79 > 9 ) /*0x8f10d*/
        v18 = 9; /*0x8f10d*/
      v19 = memcmp(v16, &Buf2, v18); /*0x8f115*/
      v20 = Size; /*0x8f11a*/
      v21 = (void **)v75[0]; /*0x8f11e*/
      if ( v19 || v17 != 9 ) /*0x8f12a*/
      {
        Block[1] = 0; /*0x8f13a*/
        v23 = (void *)sub_3C460(32); /*0x8f14c*/
        Block[0] = v23; /*0x8f14f*/
        v73 = 17; /*0x8f158*/
        v22 = 31; /*0x8f15c*/
        v74 = 31; /*0x8f162*/
        strcpy((char *)v23, "Confirm Password:"); /*0x8f16d*/
        v65 = 92; /*0x8f17e*/
        v24 = v75; /*0x8f185*/
        if ( v77 > 0xF ) /*0x8f18e*/
          v24 = v21; /*0x8f18e*/
        v25 = v20; /*0x8f192*/
        if ( v20 > 0x11 ) /*0x8f198*/
          v25 = 17; /*0x8f198*/
        v63 = !memcmp(v24, v23, v25) && v20 == 17; /*0x8f1a6*/
      }
      else
      {
        v22 = v74; /*0x8f12c*/
        v23 = Block[0]; /*0x8f130*/
        v63 = 1; /*0x8f134*/
      }
      if ( (v65 & 8) != 0 && v22 > 0xF ) /*0x8f1c2*/
      {
        v26 = v23; /*0x8f1c8*/
        if ( v22 + 1 >= 0x1000 ) /*0x8f1d2*/
        {
          v23 = (void *)*((_QWORD *)v23 - 1); /*0x8f1d8*/
          if ( (unsigned __int64)(v26 - (_BYTE *)v23 - 8) > 0x1F ) /*0x8f1e7*/
            invoke_watson(0, 0, 0, 0, 0); /*0x8f1fc*/
        }
        j_j_free(v23); /*0x8f206*/
      }
      v27 = v75; /*0x8f20c*/
      v28 = v77; /*0x8f210*/
      if ( v77 > 0xF ) /*0x8f218*/
        v27 = v21; /*0x8f218*/
      v29 = Buf1; /*0x8f21c*/
      v30 = v80; /*0x8f220*/
      if ( v80 > 0xF ) /*0x8f228*/
        v29 = v11; /*0x8f228*/
      v31 = v17; /*0x8f22c*/
      if ( v20 < v17 ) /*0x8f232*/
        v31 = v20; /*0x8f232*/
      if ( memcmp(v29, v27, v31) || v17 < v20 || v17 > v20 ) /*0x8f244*/
      {
        v32 = Buf1; /*0x8f246*/
        if ( v30 > 0xF ) /*0x8f24e*/
          v32 = v11; /*0x8f24e*/
        v33 = -1; /*0x8f252*/
        do /*0x8f258*/
          ++v33; /*0x8f255*/
        while ( *((_BYTE *)v32 + v33) ); /*0x8f258*/
        if ( v33 ) /*0x8f261*/
        {
          v34 = v75; /*0x8f263*/
          if ( v28 > 0xF ) /*0x8f26b*/
            v34 = v21; /*0x8f26b*/
          do /*0x8f273*/
            ++v5; /*0x8f270*/
          while ( *((_BYTE *)v34 + v5) ); /*0x8f273*/
          if ( v5 && !v63 ) /*0x8f282*/
          {
            v35 = v71; /*0x8f284*/
            (**(void (__fastcall ***)(__int64, const char *))(v71[25] + 360LL))( /*0x8f2a0*/
              v71[25] + 360LL,
              "Passwords do not match");
            (**(void (__fastcall ***)(__int64, __int16 *))(v35[25] + 368LL))(v35[25] + 368LL, &word_6FDD00); /*0x8f2ba*/
          }
        }
      }
      if ( v28 > 0xF ) /*0x8f2c1*/
      {
        v36 = v21; /*0x8f2c7*/
        if ( v28 + 1 < 0x1000 || (v21 = (void **)*(v21 - 1), (unsigned __int64)((char *)v36 - (char *)v21 - 8) <= 0x1F) ) /*0x8f2e6*/
        {
LABEL_51:
          j_j_free(v21); /*0x8f2ec*/
          goto LABEL_52; /*0x8f2ef*/
        }
LABEL_116:
        invoke_watson(0, 0, 0, 0, 0); /*0x8f6d4*/
      }
    }
  }
  else
  {
    v38 = 15; /*0x8f347*/
    v39 = v79; /*0x8f34d*/
    if ( v79 ) /*0x8f354*/
    {
      *(_OWORD *)v75 = 0; /*0x8f378*/
      Size = 0; /*0x8f37c*/
      v77 = 0; /*0x8f380*/
      v40 = Buf1; /*0x8f384*/
      if ( v80 > 0xF ) /*0x8f38c*/
        v40 = (void **)Buf1[0]; /*0x8f38c*/
      v41 = 0x7FFFFFFFFFFFFFFFLL; /*0x8f390*/
      if ( v79 > 0x7FFFFFFFFFFFFFFFLL ) /*0x8f39d*/
        sub_8D90(v9, v8, v10); /*0x8f71d*/
      if ( v79 > 0xF ) /*0x8f3a6*/
      {
        if ( (v79 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x8f3c4*/
        {
          v41 = v79 | 0xF; /*0x8f3c6*/
          if ( (v79 | 0xF) < 0x16 ) /*0x8f3d1*/
            v41 = 22; /*0x8f3d1*/
        }
        v75[0] = (void *)sub_3C460(v41 + 1); /*0x8f3de*/
        Size = v39; /*0x8f3e2*/
        v77 = v41; /*0x8f3e6*/
        memcpy(v75[0], v40, v39 + 1); /*0x8f3f4*/
      }
      else
      {
        Size = v79; /*0x8f3a8*/
        v77 = 15; /*0x8f3ac*/
        *(_OWORD *)v75 = *(_OWORD *)v40; /*0x8f3b5*/
      }
      sub_8E870(a1 - 68, v75); /*0x8f404*/
    }
    else
    {
      (**(void (__fastcall ***)(__int64, char *))(a1[24] + 360LL))(a1[24] + 360LL, &byte_6E86E0); /*0x8f36e*/
    }
    (**(void (__fastcall ***)(__int64, __int128 *))(a1[25] + 360LL))(a1[25] + 360LL, &xmmword_711980); /*0x8f423*/
    (**(void (__fastcall ***)(__int64, __int16 *))(a1[25] + 368LL))(a1[25] + 368LL, &word_6FDD04); /*0x8f43d*/
    v42 = *(_QWORD *)(a1[19] + 600LL) + 600LL; /*0x8f44d*/
    v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v42 + 8LL))(v42); /*0x8f457*/
    *(_OWORD *)v75 = 0; /*0x8f45d*/
    Size = 0; /*0x8f461*/
    v77 = 0; /*0x8f465*/
    v44 = -1; /*0x8f469*/
    do /*0x8f473*/
      ++v44; /*0x8f470*/
    while ( *(_BYTE *)(v43 + v44) ); /*0x8f473*/
    sub_3C230(v75); /*0x8f481*/
    *(_OWORD *)Block = 0; /*0x8f48a*/
    v45 = (void *)sub_3C460(32); /*0x8f498*/
    Block[0] = v45; /*0x8f49b*/
    v73 = 17; /*0x8f4a4*/
    v74 = 31; /*0x8f4ae*/
    strcpy((char *)v45, "Confirm Password:"); /*0x8f4b9*/
    v46 = 49; /*0x8f4cc*/
    v47 = v75; /*0x8f4d2*/
    v21 = (void **)v75[0]; /*0x8f4d6*/
    if ( v77 > 0xF ) /*0x8f4df*/
      v47 = (void **)v75[0]; /*0x8f4df*/
    v48 = Size; /*0x8f4e3*/
    v49 = Size; /*0x8f4e7*/
    if ( Size > 0x11 ) /*0x8f4ed*/
      v49 = 17; /*0x8f4ed*/
    if ( !memcmp(v47, v45, v49) && v48 == 17 ) /*0x8f501*/
    {
      v38 = v69; /*0x8f503*/
      v64 = 1; /*0x8f507*/
    }
    else
    {
      Buf2_8 = 58; /*0x8f510*/
      v68 = 9; /*0x8f519*/
      v69 = 15; /*0x8f51d*/
      Buf2 = 0x64726F7773736150LL; /*0x8f529*/
      v46 = 51; /*0x8f53c*/
      v50 = Buf1; /*0x8f542*/
      if ( v80 > 0xF ) /*0x8f54b*/
        v50 = v11; /*0x8f54b*/
      v51 = v39; /*0x8f54f*/
      if ( v39 > 9 ) /*0x8f555*/
        v51 = 9; /*0x8f555*/
      v64 = !memcmp(v50, &Buf2, v51) && v39 == 9; /*0x8f56c*/
    }
    if ( (v46 & 2) != 0 ) /*0x8f57a*/
    {
      v46 &= ~2u; /*0x8f57c*/
      if ( v38 > 0xF ) /*0x8f584*/
      {
        v52 = (void *)Buf2; /*0x8f58a*/
        if ( v38 + 1 >= 0x1000 ) /*0x8f598*/
        {
          v52 = *(void **)(Buf2 - 8); /*0x8f59e*/
          if ( (unsigned __int64)(Buf2 - (_QWORD)v52 - 8) > 0x1F ) /*0x8f5ad*/
            invoke_watson(0, 0, 0, 0, 0); /*0x8f5c2*/
        }
        j_j_free(v52); /*0x8f5c9*/
      }
    }
    if ( (v46 & 1) != 0 ) /*0x8f5d3*/
      j_j_free(Block[0]); /*0x8f5de*/
    v53 = v75; /*0x8f5e3*/
    v54 = v77; /*0x8f5e7*/
    if ( v77 > 0xF ) /*0x8f5ef*/
      v53 = v21; /*0x8f5ef*/
    v55 = Buf1; /*0x8f5f3*/
    v56 = v80; /*0x8f5f7*/
    if ( v80 > 0xF ) /*0x8f5ff*/
      v55 = v11; /*0x8f5ff*/
    v57 = v39; /*0x8f603*/
    if ( v48 < v39 ) /*0x8f609*/
      v57 = v48; /*0x8f609*/
    if ( memcmp(v55, v53, v57) || v39 < v48 || v39 > v48 ) /*0x8f61b*/
    {
      v58 = Buf1; /*0x8f621*/
      if ( v56 > 0xF ) /*0x8f629*/
        v58 = v11; /*0x8f629*/
      v59 = -1; /*0x8f62d*/
      do /*0x8f633*/
        ++v59; /*0x8f630*/
      while ( *((_BYTE *)v58 + v59) ); /*0x8f633*/
      if ( v59 ) /*0x8f63c*/
      {
        v60 = v75; /*0x8f63e*/
        if ( v54 > 0xF ) /*0x8f646*/
          v60 = v21; /*0x8f646*/
        do /*0x8f653*/
          ++v5; /*0x8f650*/
        while ( *((_BYTE *)v60 + v5) ); /*0x8f653*/
        if ( v5 && !v64 ) /*0x8f662*/
        {
          v61 = v71; /*0x8f664*/
          (**(void (__fastcall ***)(__int64, const char *))(v71[25] + 360LL))(v71[25] + 360LL, "Passwords do not match"); /*0x8f680*/
          (**(void (__fastcall ***)(__int64, __int16 *))(v61[25] + 368LL))(v61[25] + 368LL, &word_6FDD00); /*0x8f69a*/
        }
      }
    }
    if ( v54 > 0xF ) /*0x8f6a1*/
    {
      v62 = v21; /*0x8f6ab*/
      if ( v54 + 1 < 0x1000 ) /*0x8f6b5*/
        goto LABEL_51; /*0x8f6b5*/
      v21 = (void **)*(v21 - 1); /*0x8f6bf*/
      if ( (unsigned __int64)((char *)v62 - (char *)v21 - 8) <= 0x1F ) /*0x8f6ce*/
        goto LABEL_51; /*0x8f6ce*/
      goto LABEL_116; /*0x8f6ce*/
    }
  }
LABEL_52:
  if ( v80 > 0xF ) /*0x8f2fe*/
  {
    v37 = v11; /*0x8f308*/
    if ( v80 + 1 >= 0x1000 ) /*0x8f312*/
    {
      v11 = (void **)*(v11 - 1); /*0x8f31c*/
      if ( (unsigned __int64)((char *)v37 - (char *)v11 - 8) > 0x1F ) /*0x8f32b*/
        invoke_watson(0, 0, 0, 0, 0); /*0x8f340*/
    }
    j_j_free(v11); /*0x8f6f1*/
  }
}

// [4/86] Address: 0xfdb80
// Method: GameLevelManager::levelIDFromCommentKey
// Hidden C++ exception states: #wind=1
void __fastcall GameLevelManager_levelIDFromCommentKey(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // r8
  void *Block[2]; // [rsp+30h] [rbp-38h] BYREF
  __m128i si128; // [rsp+40h] [rbp-28h]

  *(_OWORD *)Block = 0; /*0xfdb98*/
  si128 = _mm_load_si128((const __m128i *)&Size); /*0xfdba5*/
  LOBYTE(Block[0]) = 0; /*0xfdbab*/
  v1 = sub_BE740(*(_QWORD *)(a1 + 664), 0, Block); /*0xfdbc3*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0xfdbcf*/
  {
    v2 = Block[0]; /*0xfdbd4*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0xfdbe3*/
    {
      v2 = (void *)*((_QWORD *)Block[0] - 1); /*0xfdbe9*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v2 - 8) > 0x1F ) /*0xfdbf8*/
        invoke_watson(0, 0, 0, 0, 0); /*0xfdc0d*/
    }
    j_j_free(v2); /*0xfdc17*/
  }
  if ( v1 ) /*0xfdc1f*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 1064LL))(v1); /*0xfdc27*/
}

// [5/86] Address: 0x1737a0
// Method: GameLevelManager::getSavedLevelLists
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall GameLevelManager_getSavedLevelLists(_QWORD *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx
  cocos2d::CCObject *v5; // rcx
  cocos2d::CCObject *v6; // rcx
  cocos2d::CCObject *v7; // rcx

  *Block = &EasingSelectPopup::`vftable'; /*0x1737bb*/
  Block[40] = &EasingSelectPopup::`vftable'; /*0x1737c5*/
  Block[41] = &EasingSelectPopup::`vftable'; /*0x1737d3*/
  Block[42] = &EasingSelectPopup::`vftable'; /*0x1737e1*/
  Block[43] = &EasingSelectPopup::`vftable'; /*0x1737ef*/
  Block[44] = &EasingSelectPopup::`vftable'; /*0x1737fd*/
  Block[51] = &EasingSelectPopup::`vftable'; /*0x17380b*/
  Block[54] = &EasingSelectPopup::`vftable'; /*0x173819*/
  Block[68] = &EasingSelectPopup::`vftable'; /*0x173827*/
  Block[83] = &EasingSelectPopup::`vftable'; /*0x173835*/
  Block[84] = &EasingSelectPopup::`vftable'; /*0x173843*/
  v4 = (cocos2d::CCObject *)Block[129]; /*0x17384a*/
  if ( v4 ) /*0x173856*/
  {
    cocos2d::CCObject::release(v4); /*0x173858*/
    Block[129] = 0; /*0x17385e*/
  }
  v5 = (cocos2d::CCObject *)Block[130]; /*0x173865*/
  if ( v5 ) /*0x17386f*/
  {
    cocos2d::CCObject::release(v5); /*0x173871*/
    Block[130] = 0; /*0x173877*/
  }
  v6 = (cocos2d::CCObject *)Block[131]; /*0x17387e*/
  if ( v6 ) /*0x173888*/
  {
    cocos2d::CCObject::release(v6); /*0x17388a*/
    Block[131] = 0; /*0x173890*/
  }
  v7 = (cocos2d::CCObject *)Block[132]; /*0x173897*/
  if ( v7 ) /*0x1738a1*/
  {
    cocos2d::CCObject::release(v7); /*0x1738a3*/
    Block[132] = 0; /*0x1738a9*/
  }
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x1738b3*/
  if ( (a2 & 1) != 0 ) /*0x1738bd*/
    j_j_free(Block); /*0x1738c7*/
  return Block; /*0x1738cf*/
}

// [6/86] Address: 0x178160
// Method: GameLevelManager::getLevelLists
// Hidden C++ exception states: #wind=5
double __fastcall GameLevelManager_getLevelLists(__int64 a1, _QWORD *a2)
{
  double result; // xmm0_8
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  void **v12; // r13
  _BYTE *v13; // r12
  size_t v14; // rdi
  size_t v15; // r14
  unsigned __int64 v16; // rsi
  void **v17; // rcx
  void **v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r8
  void **v21; // rdx
  void *v22; // rcx
  _BYTE *v23; // rax
  char *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  void **v30; // r15
  char *v31; // r14
  unsigned __int64 v32; // r13
  size_t v33; // rdi
  size_t v34; // rbx
  __int128 v35; // xmm0
  void **v36; // rcx
  void **v37; // rdx
  char *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  void **v44; // r15
  unsigned __int64 v45; // r13
  size_t v46; // rdi
  size_t v47; // rbx
  __int64 v48; // rax
  void **v49; // rdx
  char *v50; // rax
  void *v52[2]; // [rsp+38h] [rbp-C8h] BYREF
  size_t v53; // [rsp+48h] [rbp-B8h]
  __int64 v54; // [rsp+50h] [rbp-B0h]
  void *v55[2]; // [rsp+58h] [rbp-A8h] BYREF
  size_t v56; // [rsp+68h] [rbp-98h]
  unsigned __int64 v57; // [rsp+70h] [rbp-90h]
  void **v58; // [rsp+78h] [rbp-88h]
  void *v59[2]; // [rsp+80h] [rbp-80h] BYREF
  size_t v60[2]; // [rsp+90h] [rbp-70h]
  __int128 v61; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v62; // [rsp+B0h] [rbp-50h]
  __int64 v63; // [rsp+B8h] [rbp-48h]
  void *v64; // [rsp+C0h] [rbp-40h]
  void *Block[2]; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int128 v66; // [rsp+D8h] [rbp-28h]
  void *Src[2]; // [rsp+E8h] [rbp-18h] BYREF
  size_t Size; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v69; // [rsp+100h] [rbp+0h]

  v5 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2); /*0x17819d*/
  if ( v5 != 1 ) /*0x1781a3*/
  {
    if ( v5 == 2 ) /*0x1783e7*/
    {
      v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x1783fe*/
      *(_OWORD *)Src = 0; /*0x178404*/
      Size = 0; /*0x178408*/
      v69 = 0; /*0x17840c*/
      v26 = -1; /*0x178410*/
      do /*0x17841a*/
        ++v26; /*0x178417*/
      while ( *(_BYTE *)(v25 + v26) ); /*0x17841a*/
      sub_3C230(Src); /*0x17842a*/
      *(_OWORD *)Block = 0; /*0x178433*/
      v66 = 0u; /*0x178437*/
      v30 = Src; /*0x17843f*/
      v31 = (char *)Src[0]; /*0x178443*/
      v32 = v69; /*0x178447*/
      if ( v69 > 0xF ) /*0x17844f*/
        v30 = (void **)Src[0]; /*0x17844f*/
      v33 = 0x7FFFFFFFFFFFFFFFLL; /*0x178453*/
      v34 = Size; /*0x17845d*/
      if ( Size > 0x7FFFFFFFFFFFFFFFLL ) /*0x178464*/
        sub_8D90(v28, v27, v29); /*0x17877c*/
      if ( Size > 0xF ) /*0x178472*/
      {
        if ( (Size | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x17848f*/
        {
          v33 = Size | 0xF; /*0x178491*/
          if ( (Size | 0xF) < 0x16 ) /*0x17849c*/
            v33 = 22; /*0x17849c*/
        }
        Block[0] = (void *)sub_3C460(v33 + 1); /*0x1784a9*/
        *(_QWORD *)&v66 = v34; /*0x1784ad*/
        *((_QWORD *)&v66 + 1) = v33; /*0x1784b1*/
        memcpy(Block[0], v30, v34 + 1); /*0x1784bf*/
        v35 = *(_OWORD *)Block; /*0x1784c8*/
      }
      else
      {
        *(_QWORD *)&v66 = Size; /*0x178474*/
        *((_QWORD *)&v66 + 1) = 15; /*0x178478*/
        v35 = *(_OWORD *)v30; /*0x17847c*/
        *(_OWORD *)Block = *(_OWORD *)v30; /*0x178480*/
      }
      if ( v34 ) /*0x1784d8*/
      {
        cocos2d::ZipUtils::base64URLEncode(v59, Block); /*0x1784fe*/
      }
      else
      {
        *(_OWORD *)v59 = v35; /*0x1784da*/
        *(_OWORD *)v60 = v66; /*0x1784e2*/
        v66 = __PAIR128__(15, 0); /*0x1784e8*/
        LOBYTE(Block[0]) = 0; /*0x1784f0*/
      }
      sub_3C310(Block); /*0x17850b*/
      v36 = (void **)(*(_QWORD *)(a1 + 64) + 376LL); /*0x17851e*/
      if ( v36 != v59 ) /*0x17852c*/
      {
        v37 = v59; /*0x17852e*/
        if ( v60[1] > 0xF ) /*0x178537*/
          v37 = (void **)v59[0]; /*0x178537*/
        sub_3F5A0(v36, v37, v60[0]); /*0x178540*/
      }
      result = sub_3C310(v59); /*0x17854a*/
      if ( v32 <= 0xF ) /*0x178554*/
        return result; /*0x178554*/
      v38 = v31; /*0x17855a*/
      if ( v32 + 1 >= 0x1000 ) /*0x178564*/
      {
        v31 = (char *)*((_QWORD *)v31 - 1); /*0x17856a*/
        if ( (unsigned __int64)(v38 - v31 - 8) > 0x1F ) /*0x178579*/
          goto LABEL_78; /*0x178579*/
      }
    }
    else
    {
      if ( v5 != 3 ) /*0x1785b1*/
        return result; /*0x1785b1*/
      v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x1785c4*/
      *(_OWORD *)Src = 0; /*0x1785ca*/
      Size = 0; /*0x1785ce*/
      v69 = 0; /*0x1785d2*/
      v40 = -1; /*0x1785d6*/
      do /*0x1785e3*/
        ++v40; /*0x1785e0*/
      while ( *(_BYTE *)(v39 + v40) ); /*0x1785e3*/
      sub_3C230(Src); /*0x1785f3*/
      *(_OWORD *)v55 = 0; /*0x178606*/
      v56 = 0; /*0x17860b*/
      v57 = 0; /*0x178610*/
      v44 = Src; /*0x178615*/
      v31 = (char *)Src[0]; /*0x178619*/
      v45 = v69; /*0x17861d*/
      if ( v69 > 0xF ) /*0x178625*/
        v44 = (void **)Src[0]; /*0x178625*/
      v46 = 0x7FFFFFFFFFFFFFFFLL; /*0x178629*/
      v47 = Size; /*0x178633*/
      if ( Size > 0x7FFFFFFFFFFFFFFFLL ) /*0x17863a*/
        sub_8D90(v42, v41, v43); /*0x178770*/
      if ( Size > 0xF ) /*0x178644*/
      {
        if ( (Size | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x17866a*/
        {
          v46 = Size | 0xF; /*0x17866c*/
          if ( (Size | 0xF) < 0x16 ) /*0x178677*/
            v46 = 22; /*0x178677*/
        }
        v55[0] = (void *)sub_3C460(v46 + 1); /*0x178684*/
        v56 = v47; /*0x178689*/
        v57 = v46; /*0x17868e*/
        memcpy(v55[0], v44, v47 + 1); /*0x17869d*/
      }
      else
      {
        v56 = Size; /*0x178646*/
        v57 = 15; /*0x178650*/
        *(_OWORD *)v55 = *(_OWORD *)v44; /*0x178659*/
      }
      v58 = v55; /*0x1786a7*/
      v48 = qword_905FD0; /*0x1786ac*/
      if ( !qword_905FD0 ) /*0x1786b6*/
      {
        v64 = operator new(0x6E8u); /*0x1786c2*/
        qword_905FD0 = sub_2723A0(v64); /*0x1786cf*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x1786e0*/
        v48 = qword_905FD0; /*0x1786e2*/
      }
      if ( (void **)(v48 + 656) != v55 ) /*0x1786f8*/
      {
        v49 = v55; /*0x1786fa*/
        if ( v57 > 0xF ) /*0x178705*/
          v49 = (void **)v55[0]; /*0x178705*/
        sub_3F5A0((void *)(v48 + 656), v49, v56); /*0x178710*/
      }
      result = sub_3C310(v55); /*0x17871b*/
      if ( v45 <= 0xF ) /*0x178725*/
        return result; /*0x178725*/
      v50 = v31; /*0x17872f*/
      if ( v45 + 1 >= 0x1000 ) /*0x178739*/
      {
        v31 = (char *)*((_QWORD *)v31 - 1); /*0x178743*/
        if ( (unsigned __int64)(v50 - v31 - 8) > 0x1F ) /*0x178752*/
          goto LABEL_78; /*0x178752*/
      }
    }
    v24 = v31; /*0x17857f*/
    goto LABEL_55; /*0x17857f*/
  }
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x1781ba*/
  *(_OWORD *)Src = 0; /*0x1781c0*/
  Size = 0; /*0x1781c4*/
  v69 = 0; /*0x1781c8*/
  v7 = -1; /*0x1781cc*/
  v8 = -1; /*0x1781d3*/
  do /*0x1781d9*/
    ++v8; /*0x1781d6*/
  while ( *(_BYTE *)(v6 + v8) ); /*0x1781d9*/
  sub_3C230(Src); /*0x1781e6*/
  *(_OWORD *)v52 = 0; /*0x1781ef*/
  v53 = 0; /*0x1781f4*/
  v54 = 0; /*0x1781f9*/
  v12 = Src; /*0x1781fe*/
  v13 = Src[0]; /*0x178202*/
  if ( v69 > 0xF ) /*0x17820b*/
    v12 = (void **)Src[0]; /*0x17820b*/
  v14 = 0x7FFFFFFFFFFFFFFFLL; /*0x17820f*/
  v15 = Size; /*0x178219*/
  if ( Size > 0x7FFFFFFFFFFFFFFFLL ) /*0x178220*/
    sub_8D90(v10, v9, v11); /*0x178776*/
  if ( Size > 0xF ) /*0x17822a*/
  {
    if ( (Size | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x178251*/
    {
      v14 = Size | 0xF; /*0x178253*/
      if ( (Size | 0xF) < 0x16 ) /*0x17825e*/
        v14 = 22; /*0x17825e*/
    }
    v52[0] = (void *)sub_3C460(v14 + 1); /*0x17826b*/
    v53 = v15; /*0x178270*/
    v54 = v14; /*0x178275*/
    memcpy(v52[0], v12, v15 + 1); /*0x178284*/
    v16 = v14; /*0x178289*/
  }
  else
  {
    v53 = Size; /*0x17822c*/
    v16 = 15; /*0x178231*/
    v54 = 15; /*0x178236*/
    *(_OWORD *)v52 = *(_OWORD *)v12; /*0x178240*/
  }
  v58 = v52; /*0x178298*/
  v17 = (void **)(*(_QWORD *)(a1 + 64) + 344LL); /*0x1782a6*/
  if ( v17 != v52 ) /*0x1782b5*/
  {
    v18 = v52; /*0x1782b7*/
    if ( v16 > 0xF ) /*0x1782c0*/
      v18 = (void **)v52[0]; /*0x1782c0*/
    sub_3F5A0(v17, v18, v15); /*0x1782c9*/
  }
  sub_3C310(v52); /*0x1782d4*/
  v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x1782ea*/
  *(_OWORD *)Block = 0; /*0x1782f0*/
  v66 = 0u; /*0x1782f6*/
  v20 = -1; /*0x1782fe*/
  do /*0x178304*/
    ++v20; /*0x178301*/
  while ( *(_BYTE *)(v19 + v20) ); /*0x178304*/
  sub_3C230(Block); /*0x178311*/
  v21 = Block; /*0x178317*/
  if ( *((_QWORD *)&v66 + 1) > 0xFu ) /*0x178320*/
    v21 = (void **)Block[0]; /*0x178320*/
  result = 0.0; /*0x178325*/
  v61 = 0; /*0x178328*/
  v62 = 0; /*0x17832c*/
  v63 = 0; /*0x178330*/
  do /*0x178337*/
    ++v7; /*0x178334*/
  while ( *((_BYTE *)v21 + v7) ); /*0x178337*/
  sub_3C230(&v61); /*0x178344*/
  SpriteAnimationManager_executeAnimation(a2, &v61); /*0x178350*/
  if ( *((_QWORD *)&v66 + 1) > 0xFu ) /*0x17835e*/
  {
    v22 = Block[0]; /*0x178363*/
    if ( (unsigned __int64)(*((_QWORD *)&v66 + 1) + 1LL) >= 0x1000 ) /*0x178371*/
    {
      v22 = (void *)*((_QWORD *)Block[0] - 1); /*0x178377*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v22 - 8) > 0x1F ) /*0x178386*/
        invoke_watson(0, 0, 0, 0, 0); /*0x178397*/
    }
    j_j_free(v22); /*0x17839e*/
  }
  if ( v69 > 0xF ) /*0x1783ac*/
  {
    v23 = v13; /*0x1783b6*/
    if ( v69 + 1 < 0x1000 || (v13 = (_BYTE *)*((_QWORD *)v13 - 1), (unsigned __int64)(v23 - v13 - 8) <= 0x1F) ) /*0x1783d6*/
    {
      v24 = v13; /*0x1783dc*/
LABEL_55:
      j_j_free(v24); /*0x178582*/
      return result; /*0x178582*/
    }
LABEL_78:
    invoke_watson(0, 0, 0, 0, 0); /*0x17875a*/
  }
  return result; /*0x178587*/
}

// [7/86] Address: 0x1996c0
// Method: GameLevelManager::deleteServerLevel
// Hidden C++ exception states: #wind=9
double __fastcall GameLevelManager_deleteServerLevel(__int64 a1, int a2)
{
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rax
  int v11; // eax
  __int64 v12; // rbx
  double result; // xmm0_8
  int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // rax
  int v17; // r14d
  int v18; // esi
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // eax
  void *v27; // [rsp+50h] [rbp-B0h]
  void *v28; // [rsp+50h] [rbp-B0h]
  _BYTE v29[32]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v30; // [rsp+80h] [rbp-80h] BYREF
  __int64 v31; // [rsp+90h] [rbp-70h]
  __int64 v32; // [rsp+98h] [rbp-68h]
  _QWORD v33[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v34; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v35; // [rsp+B8h] [rbp-48h]
  _BYTE v36[16]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v37; // [rsp+D0h] [rbp-30h]
  _BYTE v38[32]; // [rsp+E0h] [rbp-20h] BYREF

  v4 = 0; /*0x1996ec*/
  if ( !*(_BYTE *)(a1 + 1040) ) /*0x1996ee*/
  {
    v5 = GJAccountManager_sharedState(a1); /*0x1996fb*/
    if ( *(_DWORD *)(v5 + 360) - *(_DWORD *)(v5 + 364) <= 0 ) /*0x19970e*/
    {
      GJAccountManager_sharedState((unsigned int)(*(_DWORD *)(v5 + 360) - *(_DWORD *)(v5 + 364))); /*0x199710*/
      sub_305EE0(v6, "upload <cg>sound packs</c>"); /*0x19971c*/
      return result; /*0x199721*/
    }
    sub_3E4F0(v33, *(_QWORD *)(a1 + 1048) + 384LL); /*0x199738*/
    sub_3E4F0(v38, *(_QWORD *)(a1 + 1048) + 416LL); /*0x199750*/
    v7 = v34; /*0x199756*/
    if ( !v34 ) /*0x19975d*/
      goto LABEL_11; /*0x19975d*/
    while ( 1 ) /*0x199760*/
    {
      v8 = v33; /*0x199760*/
      if ( v35 > 0xF ) /*0x199770*/
        v8 = (_QWORD *)v33[0]; /*0x199770*/
      if ( *((_BYTE *)v8 + v7 - 1) != 32 ) /*0x199779*/
        break; /*0x199779*/
      v9 = v7 - 1; /*0x19977f*/
      v34 = v9; /*0x199782*/
      v10 = v33; /*0x199786*/
      if ( v35 > 0xF ) /*0x19978e*/
        v10 = (_QWORD *)v33[0]; /*0x19978e*/
      *((_BYTE *)v10 + v9) = 0; /*0x199792*/
      v7 = v34; /*0x199796*/
      if ( !v34 ) /*0x19979d*/
        goto LABEL_11; /*0x19979d*/
    }
    if ( !v7 ) /*0x1998ba*/
    {
LABEL_11:
      v30 = 0; /*0x19979f*/
      HIBYTE(v32) = 0; /*0x1997aa*/
      *(_QWORD *)&v30 = sub_3C460(64); /*0x1997bb*/
      v31 = 54; /*0x1997bf*/
      v32 = 63; /*0x1997c7*/
      strcpy((char *)v30, "This sound pack has no name. Set one before uploading."); /*0x1997d6*/
      v11 = sub_3E4F0(v29, &v30); /*0x199819*/
      v12 = FLAlertLayer_create_0(0, (unsigned int)"Error", v11, (unsigned int)"OK", 0, 1132068864, 0, 0, 1065353216); /*0x199865*/
      sub_3C310(&v30); /*0x19986c*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 1064LL))(v12); /*0x19987e*/
LABEL_12:
      sub_3C310(v38); /*0x199881*/
      return sub_3C310(v33); /*0x19988f*/
    }
    sub_3E4F0(v36, *(_QWORD *)(a1 + 1048) + 512LL); /*0x1998d2*/
    if ( v37 ) /*0x1998dd*/
    {
      v16 = *(_QWORD *)(a1 + 1048); /*0x19999a*/
      v17 = *(_DWORD *)(v16 + 356); /*0x1999a1*/
      v18 = *(_DWORD *)(v16 + 360); /*0x1999a8*/
      if ( v17 > 0 && v18 > 0 ) /*0x1999b9*/
      {
        if ( *(_BYTE *)(a1 + 1088) ) /*0x1999bf*/
          v4 = 4 - (*(_BYTE *)(a1 + 1089) != 0); /*0x1999d3*/
        *(_DWORD *)(a1 + 1092) = v4; /*0x1999d6*/
        *(_DWORD *)(a1 + 1104) = a2; /*0x1999dc*/
        *(_BYTE *)(a1 + 1040) = 1; /*0x1999e3*/
        v19 = *(_QWORD *)(a1 + 1016); /*0x1999ea*/
        if ( v19 ) /*0x1999f4*/
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 336LL))(v19, 0); /*0x1999fb*/
        v20 = *(_QWORD *)(a1 + 1024); /*0x199a01*/
        if ( v20 ) /*0x199a0b*/
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 336LL))(v20, 0); /*0x199a12*/
        v21 = *(_QWORD *)(a1 + 1032); /*0x199a18*/
        if ( v21 ) /*0x199a22*/
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v21 + 336LL))(v21, 0); /*0x199a29*/
        v22 = *(_QWORD *)(a1 + 1096); /*0x199a2f*/
        if ( v22 ) /*0x199a39*/
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v22 + 336LL))(v22, 0); /*0x199a40*/
        v23 = LoadingCircle_create(); /*0x199a46*/
        *(_QWORD *)(a1 + 1008) = v23; /*0x199a4b*/
        *(_QWORD *)(v23 + 552) = *(_QWORD *)(a1 + 584); /*0x199a59*/
        LoadingCircle_show(*(_QWORD *)(a1 + 1008)); /*0x199a67*/
        v24 = *(_QWORD *)&qword_905FB0; /*0x199a73*/
        if ( !*(_QWORD *)&qword_905FB0 ) /*0x199a7d*/
        {
          v27 = operator new(0x690u); /*0x199a89*/
          *(_QWORD *)&qword_905FB0 = sub_214250(v27); /*0x199a97*/
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x199aa8*/
          v24 = *(_QWORD *)&qword_905FB0; /*0x199aaa*/
        }
        *(_QWORD *)(v24 + 1448) = a1 + 1000; /*0x199ab1*/
        sub_3E4F0(&v30, *(_QWORD *)(a1 + 1048) + 448LL); /*0x199aca*/
        v25 = *(_QWORD *)&qword_905FB0; /*0x199ad0*/
        if ( !*(_QWORD *)&qword_905FB0 ) /*0x199ada*/
        {
          v28 = operator new(0x690u); /*0x199ae6*/
          *(_QWORD *)&qword_905FB0 = sub_214250(v28); /*0x199af4*/
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x199b05*/
          v25 = *(_QWORD *)&qword_905FB0; /*0x199b07*/
        }
        sub_22B0C0(v25, v33, v38, v36, v17, v18, a2, *(_DWORD *)(a1 + 1092), &v30); /*0x199b3b*/
        sub_3C310(&v30); /*0x199b45*/
        goto LABEL_36; /*0x199b4a*/
      }
      v30 = 0; /*0x199b52*/
      HIBYTE(v32) = 0; /*0x199b5a*/
      *(_QWORD *)&v30 = sub_3C460(80); /*0x199b6b*/
      v31 = 66; /*0x199b6f*/
      v32 = 79; /*0x199b77*/
      strcpy((char *)v30, "This sound pack is empty. Add at least one sound before uploading."); /*0x199b86*/
      v26 = sub_3E4F0(v29, &v30); /*0x199bcb*/
      v15 = FLAlertLayer_create_0(0, (unsigned int)"Error", v26, (unsigned int)"OK", 0, 1132068864, 0, 0, 1065353216); /*0x199c17*/
    }
    else
    {
      v30 = 0; /*0x1998e6*/
      HIBYTE(v32) = 0; /*0x1998ee*/
      *(_QWORD *)&v30 = sub_3C460(32); /*0x1998fc*/
      v31 = 28; /*0x199900*/
      v32 = 31; /*0x199908*/
      strcpy((char *)v30, "This sound pack has no data."); /*0x199917*/
      v14 = sub_3E4F0(v29, &v30); /*0x199946*/
      v15 = FLAlertLayer_create_0(0, (unsigned int)"Error", v14, (unsigned int)"OK", 0, 1132068864, 0, 0, 1065353216); /*0x199992*/
    }
    sub_3C310(&v30); /*0x199c1e*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 1064LL))(v15); /*0x199c30*/
LABEL_36:
    sub_3C310(v36); /*0x199c33*/
    goto LABEL_12; /*0x199c3c*/
  }
  return result; /*0x199894*/
}

// [8/86] Address: 0x1c2cd0
// Method: GameLevelManager::onGetLevelRateInfoCompleted
// Hidden C++ exception states: #wind=2
_QWORD *__fastcall GameLevelManager_onGetLevelRateInfoCompleted(__int64 a1, _QWORD *a2, cocos2d::CCArray *a3)
{
  __int64 v6; // rcx
  unsigned int *v7; // rbx
  __int64 v8; // rax
  _QWORD *v9; // rbx
  _QWORD *i; // rbp
  _DWORD *v11; // rdi
  const struct cocos2d::CCPoint *v12; // rax
  __int64 v13; // rax
  void **v14; // rdx
  _BYTE v16[8]; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v17[8]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v18[8]; // [rsp+38h] [rbp-60h] BYREF
  _QWORD *v19; // [rsp+40h] [rbp-58h]
  void *v20[4]; // [rsp+48h] [rbp-50h] BYREF

  v19 = a2; /*0x1c2cf3*/
  qsort(*(void **)(*((_QWORD *)a3 + 7) + 16LL), **((unsigned int **)a3 + 7), 8u, sub_19CD00); /*0x1c2d15*/
  EditorUI_getGroupCenter(v6, (cocos2d::CCPoint *)v16, a3, 0); /*0x1c2d26*/
  *(_OWORD *)a2 = 0; /*0x1c2d2e*/
  a2[2] = 0; /*0x1c2d31*/
  a2[3] = 15; /*0x1c2d35*/
  *(_BYTE *)a2 = 0; /*0x1c2d3d*/
  v7 = (unsigned int *)*((_QWORD *)a3 + 7); /*0x1c2d48*/
  v8 = *v7; /*0x1c2d4c*/
  if ( (_DWORD)v8 ) /*0x1c2d50*/
  {
    v9 = (_QWORD *)*((_QWORD *)v7 + 2); /*0x1c2d56*/
    for ( i = &v9[v8 - 1]; v9 <= i; ++v9 ) /*0x1c2d65*/
    {
      v11 = (_DWORD *)*v9; /*0x1c2d70*/
      if ( !*v9 ) /*0x1c2d70*/
        break; /*0x1c2d76*/
      if ( v11[259] != 749 ) /*0x1c2d86*/
      {
        v12 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 200LL))(*v9); /*0x1c2d92*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v18, v12); /*0x1c2da0*/
        v13 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 200LL))(v11); /*0x1c2dac*/
        cocos2d::CCPoint::operator-(v13, v17, v16); /*0x1c2dbf*/
        (*(void (__fastcall **)(_DWORD *, _BYTE *))(*(_QWORD *)v11 + 184LL))(v11, v17); /*0x1c2dd0*/
        (*(void (__fastcall **)(_DWORD *, void **, _QWORD))(*(_QWORD *)v11 + 1240LL))(v11, v20, *(_QWORD *)(a1 + 1512)); /*0x1c2de8*/
        (*(void (__fastcall **)(_DWORD *, _BYTE *))(*(_QWORD *)v11 + 184LL))(v11, v18); /*0x1c2dfa*/
        v14 = v20; /*0x1c2e00*/
        if ( v20[3] > (char *)&loc_D + 2 ) /*0x1c2e0b*/
          v14 = (void **)v20[0]; /*0x1c2e0b*/
        sub_43D80(a2, v14, (size_t)v20[2]); /*0x1c2e19*/
        sub_43D80(a2, &unk_74CF98, 1u); /*0x1c2e2e*/
        sub_3C310(v20); /*0x1c2e39*/
      }
    }
  }
  return a2; /*0x1c2e4e*/
}

// [9/86] Address: 0x216520
// Method: GameLevelManager::onProcessHttpRequestCompleted
// Hidden C++ exception states: #wind=2
double __fastcall GameLevelManager_onProcessHttpRequestCompleted(void *a1, __int64 a2, __int64 a3)
{
  const char *Tag; // rdi
  int v6; // ebp
  __int64 v7; // r8
  __int128 v9; // [rsp+30h] [rbp-98h] BYREF
  __int64 v10; // [rsp+40h] [rbp-88h]
  __int64 v11; // [rsp+48h] [rbp-80h]
  __int128 *v12; // [rsp+50h] [rbp-78h]
  _BYTE v13[32]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE v14[32]; // [rsp+80h] [rbp-48h] BYREF

  Tag = cocos2d::extension::CCHttpRequest::getTag(*(cocos2d::extension::CCHttpRequest **)(a3 + 56)); /*0x216551*/
  v6 = *(_DWORD *)(*(_QWORD *)(a3 + 56) + 200LL); /*0x216558*/
  sub_6B990(v14, a3); /*0x216569*/
  v12 = &v9; /*0x216574*/
  v9 = 0; /*0x21657c*/
  v10 = 0; /*0x216583*/
  v11 = 0; /*0x216588*/
  v7 = -1; /*0x21658d*/
  do /*0x216597*/
    ++v7; /*0x216594*/
  while ( Tag[v7] ); /*0x216597*/
  sub_3C230(&v9); /*0x2165a5*/
  sub_3E4F0(v13, v14); /*0x2165b8*/
  sub_216690(a1, v6); /*0x2165cf*/
  return sub_3C310(v14); /*0x2165e2*/
}

// [10/86] Address: 0x2185e0
// Method: GameLevelManager::~GameLevelManager
void __fastcall GameLevelManager__dtor_GameLevelManager(_QWORD *a1)
{
  cocos2d::CCObject *v2; // rcx
  cocos2d::CCObject *v3; // rcx
  cocos2d::CCObject *v4; // rcx
  cocos2d::CCObject *v5; // rcx
  cocos2d::CCObject *v6; // rcx
  cocos2d::CCObject *v7; // rcx
  cocos2d::CCObject *v8; // rcx
  cocos2d::CCObject *v9; // rcx
  cocos2d::CCObject *v10; // rcx
  cocos2d::CCObject *v11; // rcx
  cocos2d::CCObject *v12; // rcx
  cocos2d::CCObject *v13; // rcx
  cocos2d::CCObject *v14; // rcx
  cocos2d::CCObject *v15; // rcx
  cocos2d::CCObject *v16; // rcx
  cocos2d::CCObject *v17; // rcx
  cocos2d::CCObject *v18; // rcx
  cocos2d::CCObject *v19; // rcx
  cocos2d::CCObject *v20; // rcx
  cocos2d::CCObject *v21; // rcx
  cocos2d::CCObject *v22; // rcx

  *a1 = &GameLevelManager::`vftable'; /*0x2185f0*/
  *(_QWORD *)&qword_905FB0 = 0; /*0x2185f3*/
  v2 = (cocos2d::CCObject *)a1[132]; /*0x2185fe*/
  if ( v2 ) /*0x218608*/
    cocos2d::CCObject::release(v2); /*0x21860a*/
  v3 = (cocos2d::CCObject *)a1[133]; /*0x218610*/
  if ( v3 ) /*0x21861a*/
    cocos2d::CCObject::release(v3); /*0x21861c*/
  v4 = (cocos2d::CCObject *)a1[146]; /*0x218622*/
  if ( v4 ) /*0x21862c*/
    cocos2d::CCObject::release(v4); /*0x21862e*/
  v5 = (cocos2d::CCObject *)a1[107]; /*0x218634*/
  if ( v5 ) /*0x21863e*/
    cocos2d::CCObject::release(v5); /*0x218640*/
  v6 = (cocos2d::CCObject *)a1[149]; /*0x218646*/
  if ( v6 ) /*0x218650*/
    cocos2d::CCObject::release(v6); /*0x218652*/
  v7 = (cocos2d::CCObject *)a1[144]; /*0x218658*/
  if ( v7 ) /*0x218662*/
    cocos2d::CCObject::release(v7); /*0x218664*/
  v8 = (cocos2d::CCObject *)a1[145]; /*0x21866a*/
  if ( v8 ) /*0x218674*/
    cocos2d::CCObject::release(v8); /*0x218676*/
  v9 = (cocos2d::CCObject *)a1[150]; /*0x21867c*/
  if ( v9 ) /*0x218686*/
    cocos2d::CCObject::release(v9); /*0x218688*/
  v10 = (cocos2d::CCObject *)a1[147]; /*0x21868e*/
  if ( v10 ) /*0x218698*/
    cocos2d::CCObject::release(v10); /*0x21869a*/
  v11 = (cocos2d::CCObject *)a1[110]; /*0x2186a0*/
  if ( v11 ) /*0x2186aa*/
    cocos2d::CCObject::release(v11); /*0x2186ac*/
  v12 = (cocos2d::CCObject *)a1[148]; /*0x2186b2*/
  if ( v12 ) /*0x2186bc*/
    cocos2d::CCObject::release(v12); /*0x2186be*/
  v13 = (cocos2d::CCObject *)a1[134]; /*0x2186c4*/
  if ( v13 ) /*0x2186ce*/
    cocos2d::CCObject::release(v13); /*0x2186d0*/
  v14 = (cocos2d::CCObject *)a1[135]; /*0x2186d6*/
  if ( v14 ) /*0x2186e0*/
    cocos2d::CCObject::release(v14); /*0x2186e2*/
  v15 = (cocos2d::CCObject *)a1[109]; /*0x2186e8*/
  if ( v15 ) /*0x2186f2*/
    cocos2d::CCObject::release(v15); /*0x2186f4*/
  v16 = (cocos2d::CCObject *)a1[154]; /*0x2186fa*/
  if ( v16 ) /*0x218704*/
    cocos2d::CCObject::release(v16); /*0x218706*/
  v17 = (cocos2d::CCObject *)a1[155]; /*0x21870c*/
  if ( v17 ) /*0x218716*/
    cocos2d::CCObject::release(v17); /*0x218718*/
  v18 = (cocos2d::CCObject *)a1[156]; /*0x21871e*/
  if ( v18 ) /*0x218728*/
    cocos2d::CCObject::release(v18); /*0x21872a*/
  v19 = (cocos2d::CCObject *)a1[157]; /*0x218730*/
  if ( v19 ) /*0x21873a*/
    cocos2d::CCObject::release(v19); /*0x21873c*/
  v20 = (cocos2d::CCObject *)a1[206]; /*0x218742*/
  if ( v20 ) /*0x21874c*/
    cocos2d::CCObject::release(v20); /*0x21874e*/
  v21 = (cocos2d::CCObject *)a1[208]; /*0x218754*/
  if ( v21 ) /*0x21875e*/
    cocos2d::CCObject::release(v21); /*0x218760*/
  v22 = (cocos2d::CCObject *)a1[158]; /*0x218766*/
  if ( v22 ) /*0x218770*/
    cocos2d::CCObject::release(v22); /*0x218772*/
  sub_3C310(a1 + 202); /*0x21877f*/
  sub_3C310(a1 + 163); /*0x21878b*/
  sub_3C310(a1 + 159); /*0x218797*/
  sub_3DA90(a1 + 139); /*0x2187a3*/
  sub_65700(a1 + 137); /*0x2187af*/
  sub_7F340(a1 + 130); /*0x2187bb*/
  sub_CDA30(a1 + 103); /*0x2187c7*/
  sub_3C310(a1 + 94); /*0x2187d3*/
  sub_3C310(a1 + 89); /*0x2187df*/
  sub_3C310(a1 + 85); /*0x2187eb*/
  sub_3C310(a1 + 77); /*0x2187f7*/
  sub_3DA90(a1 + 59); /*0x218803*/
  sub_3DB00(a1 + 57); /*0x21880f*/
  sub_3DA90(a1 + 51); /*0x21881b*/
  sub_3DB00(a1 + 49); /*0x218827*/
  sub_3DA90(a1 + 43); /*0x218833*/
  sub_65700(a1 + 41); /*0x21883f*/
  cocos2d::CCNode::~CCNode((cocos2d::CCNode *)a1); /*0x21884c*/
}

// [11/86] Address: 0x218860
// Method: GameLevelManager::init
char __fastcall GameLevelManager_init(__int64 a1)
{
  cocos2d::CCObject *v2; // rax
  cocos2d::CCObject *v3; // rax
  cocos2d::CCObject *v4; // rax
  cocos2d::CCObject *v5; // rax
  cocos2d::CCObject *v6; // rax
  cocos2d::CCObject *v7; // rax
  cocos2d::CCObject *v8; // rax
  cocos2d::CCObject *v9; // rax
  cocos2d::CCObject *v10; // rax
  cocos2d::CCObject *v11; // rax
  cocos2d::CCObject *v12; // rax
  cocos2d::CCObject *v13; // rax
  cocos2d::CCObject *v14; // rax
  cocos2d::CCObject *v15; // rax
  cocos2d::CCObject *v16; // rax
  cocos2d::CCObject *v17; // rax
  cocos2d::CCObject *v18; // rax
  cocos2d::CCObject *v19; // rax
  cocos2d::CCObject *v20; // rax
  cocos2d::CCObject *v21; // rax
  cocos2d::CCObject *v22; // rax

  v2 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, 1); /*0x218875*/
  *(_QWORD *)(a1 + 1648) = v2; /*0x21887e*/
  cocos2d::CCObject::retain(v2); /*0x218885*/
  v3 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x21888b*/
  *(_QWORD *)(a1 + 1056) = v3; /*0x218894*/
  cocos2d::CCObject::retain(v3); /*0x21889b*/
  v4 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2188a1*/
  *(_QWORD *)(a1 + 1168) = v4; /*0x2188aa*/
  cocos2d::CCObject::retain(v4); /*0x2188b1*/
  v5 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2188b7*/
  *(_QWORD *)(a1 + 1192) = v5; /*0x2188c0*/
  cocos2d::CCObject::retain(v5); /*0x2188c7*/
  v6 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2188cd*/
  *(_QWORD *)(a1 + 1152) = v6; /*0x2188d6*/
  cocos2d::CCObject::retain(v6); /*0x2188dd*/
  v7 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2188e3*/
  *(_QWORD *)(a1 + 1160) = v7; /*0x2188ec*/
  cocos2d::CCObject::retain(v7); /*0x2188f3*/
  v8 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2188f9*/
  *(_QWORD *)(a1 + 1200) = v8; /*0x218902*/
  cocos2d::CCObject::retain(v8); /*0x218909*/
  v9 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x21890f*/
  *(_QWORD *)(a1 + 1208) = v9; /*0x218918*/
  cocos2d::CCObject::retain(v9); /*0x21891f*/
  v10 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x218925*/
  *(_QWORD *)(a1 + 1216) = v10; /*0x21892e*/
  cocos2d::CCObject::retain(v10); /*0x218935*/
  v11 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x21893b*/
  *(_QWORD *)(a1 + 1224) = v11; /*0x218944*/
  cocos2d::CCObject::retain(v11); /*0x21894b*/
  v12 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x218951*/
  *(_QWORD *)(a1 + 1176) = v12; /*0x21895a*/
  cocos2d::CCObject::retain(v12); /*0x218961*/
  v13 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x218967*/
  *(_QWORD *)(a1 + 880) = v13; /*0x218970*/
  cocos2d::CCObject::retain(v13); /*0x218977*/
  v14 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x21897d*/
  *(_QWORD *)(a1 + 1184) = v14; /*0x218986*/
  cocos2d::CCObject::retain(v14); /*0x21898d*/
  v15 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x218993*/
  *(_QWORD *)(a1 + 1064) = v15; /*0x21899c*/
  cocos2d::CCObject::retain(v15); /*0x2189a3*/
  v16 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2189a9*/
  *(_QWORD *)(a1 + 1072) = v16; /*0x2189b2*/
  cocos2d::CCObject::retain(v16); /*0x2189b9*/
  v17 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2189bf*/
  *(_QWORD *)(a1 + 1080) = v17; /*0x2189c8*/
  cocos2d::CCObject::retain(v17); /*0x2189cf*/
  v18 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2189d5*/
  *(_QWORD *)(a1 + 1232) = v18; /*0x2189de*/
  cocos2d::CCObject::retain(v18); /*0x2189e5*/
  v19 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2189eb*/
  *(_QWORD *)(a1 + 1240) = v19; /*0x2189f4*/
  cocos2d::CCObject::retain(v19); /*0x2189fb*/
  v20 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x218a01*/
  *(_QWORD *)(a1 + 1248) = v20; /*0x218a0a*/
  cocos2d::CCObject::retain(v20); /*0x218a11*/
  v21 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x218a17*/
  *(_QWORD *)(a1 + 1256) = v21; /*0x218a1d*/
  cocos2d::CCObject::retain(v21); /*0x218a27*/
  v22 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x218a2d*/
  *(_QWORD *)(a1 + 1264) = v22; /*0x218a36*/
  cocos2d::CCObject::retain(v22); /*0x218a3d*/
  *(_DWORD *)(a1 + 1336) = 1; /*0x218a45*/
  *(_DWORD *)(a1 + 1608) = 99; /*0x218a4f*/
  return 1; /*0x218a59*/
}

// [12/86] Address: 0x218a60
// Method: GameLevelManager::getMainLevel
// Hidden C++ exception states: #wind=2
__int64 __fastcall GameLevelManager_getMainLevel(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
  cocos2d::CCString *v6; // rax
  const char *CString; // rax
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rdi
  void *v11; // rcx
  __int64 Level; // rax
  __int64 v13; // rsi
  cocos2d::CCString *v14; // rax
  const char *v15; // rax
  void *v16; // rcx
  void **v17; // rdx
  int v18; // ebx
  float v19; // xmm0_4
  void **v20; // rdx
  int v21; // ebx
  float v22; // xmm0_4
  void **v23; // rdx
  float v24; // xmm0_4
  void *Src[4]; // [rsp+38h] [rbp-51h] BYREF
  void *v27[4]; // [rsp+58h] [rbp-31h] BYREF
  void *v28[4]; // [rsp+78h] [rbp-11h] BYREF
  void *Block[2]; // [rsp+98h] [rbp+Fh] BYREF
  __m128i si128; // [rsp+A8h] [rbp+1Fh]

  v6 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8); /*0x218a97*/
  CString = cocos2d::CCString::getCString(v6); /*0x218aa0*/
  *(_OWORD *)Block = 0; /*0x218aa9*/
  si128 = 0; /*0x218ab0*/
  v8 = -1; /*0x218ab5*/
  v9 = -1; /*0x218abc*/
  do /*0x218ac3*/
    ++v9; /*0x218ac0*/
  while ( CString[v9] ); /*0x218ac3*/
  sub_3C230(Block); /*0x218ad1*/
  v10 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(a1 + 840), Block); /*0x218ae8*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x218af3*/
  {
    v11 = Block[0]; /*0x218af8*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x218b06*/
    {
      v11 = (void *)*((_QWORD *)Block[0] - 1); /*0x218b0c*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v11 - 8) > 0x1F ) /*0x218b1b*/
        invoke_watson(0, 0, 0, 0, 0); /*0x218b30*/
    }
    j_j_free(v11); /*0x218b37*/
  }
  si128 = _mm_load_si128((const __m128i *)&Size); /*0x218b44*/
  LOBYTE(Block[0]) = 0; /*0x218b49*/
  Level = LevelTools_getLevel(a2, a3); /*0x218b54*/
  v13 = Level; /*0x218b59*/
  if ( v10 ) /*0x218b5f*/
  {
    sub_3E4F0(Src, Level + 408); /*0x218c33*/
    if ( (void **)(v10 + 408) != Src ) /*0x218c4e*/
    {
      v17 = Src; /*0x218c50*/
      if ( Src[3] > (char *)&loc_D + 2 ) /*0x218c59*/
        v17 = (void **)Src[0]; /*0x218c59*/
      sub_3F5A0((void *)(v10 + 408), v17, (size_t)Src[2]); /*0x218c62*/
    }
    sub_3C310(Src); /*0x218c6c*/
    v18 = *(_DWORD *)(v13 + 1020) - *(_DWORD *)(v13 + 1024); /*0x218c77*/
    *(_DWORD *)(v10 + 1028) = v18; /*0x218c7d*/
    v19 = (float)((float)rand() / 32767.0) * 1000.0; /*0x218c98*/
    *(_DWORD *)(v10 + 1024) = (int)v19; /*0x218ca4*/
    *(_DWORD *)(v10 + 1020) = v18 + (int)v19; /*0x218cac*/
    *(_DWORD *)(v10 + 1036) = *(_DWORD *)(v13 + 1036); /*0x218cb8*/
    *(_DWORD *)(v10 + 1188) = *(_DWORD *)(v13 + 1188); /*0x218cc4*/
    sub_3E4F0(v27, v13 + 344); /*0x218cd5*/
    if ( (void **)(v10 + 344) != v27 ) /*0x218cf0*/
    {
      v20 = v27; /*0x218cf2*/
      if ( v27[3] > (char *)&loc_D + 2 ) /*0x218cfb*/
        v20 = (void **)v27[0]; /*0x218cfb*/
      sub_3F5A0((void *)(v10 + 344), v20, (size_t)v27[2]); /*0x218d04*/
    }
    sub_3C310(v27); /*0x218d0e*/
    *(_DWORD *)(v10 + 676) = *(_DWORD *)(v13 + 676); /*0x218d19*/
    *(_BYTE *)(v10 + 1072) = *(_BYTE *)(v13 + 1072); /*0x218d26*/
    v21 = *(_DWORD *)(v13 + 1004) - *(_DWORD *)(v13 + 1008); /*0x218d32*/
    *(_DWORD *)(v10 + 1012) = v21; /*0x218d38*/
    v22 = (float)((float)rand() / 32767.0) * 1000.0; /*0x218d53*/
    *(_DWORD *)(v10 + 1008) = (int)v22; /*0x218d5f*/
    *(_DWORD *)(v10 + 1004) = v21 + (int)v22; /*0x218d67*/
    *(_DWORD *)(v10 + 672) = *(_DWORD *)(v13 + 672); /*0x218d73*/
    sub_3E4F0(v28, v13 + 1264); /*0x218d84*/
    if ( (void **)(v10 + 1264) != v28 ) /*0x218d9f*/
    {
      v23 = v28; /*0x218da1*/
      if ( v28[3] > (char *)&loc_D + 2 ) /*0x218daa*/
        v23 = (void **)v28[0]; /*0x218daa*/
      sub_3F5A0((void *)(v10 + 1264), v23, (size_t)v28[2]); /*0x218db3*/
    }
    sub_3C310(v28); /*0x218dbd*/
    *(_DWORD *)(v10 + 336) = a2; /*0x218dc2*/
    v24 = (float)((float)rand() / 32767.0) * 1000.0; /*0x218dde*/
    *(_DWORD *)(v10 + 332) = (int)v24; /*0x218dea*/
    *(_DWORD *)(v10 + 328) = a2 + (int)v24; /*0x218df3*/
    *(_DWORD *)(v10 + 1336) = *(_DWORD *)(v13 + 1336); /*0x218dff*/
    *(_DWORD *)(v10 + 972) = *(_DWORD *)(v13 + 972); /*0x218e0b*/
  }
  else
  {
    v10 = LevelTools_getLevel(a2, 0); /*0x218b6f*/
    v14 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, a2); /*0x218b7c*/
    v15 = cocos2d::CCString::getCString(v14); /*0x218b85*/
    *(_OWORD *)Block = 0; /*0x218b8e*/
    si128 = 0; /*0x218b95*/
    do /*0x218ba3*/
      ++v8; /*0x218ba0*/
    while ( v15[v8] ); /*0x218ba3*/
    sub_3C230(Block); /*0x218bb3*/
    cocos2d::CCDictionary::setObject(*(_QWORD *)(a1 + 840), v10, Block); /*0x218bc7*/
    if ( si128.m128i_i64[1] > 0xFuLL ) /*0x218bd6*/
    {
      v16 = Block[0]; /*0x218bdf*/
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x218bed*/
      {
        v16 = (void *)*((_QWORD *)Block[0] - 1); /*0x218bf3*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v16 - 8) > 0x1F ) /*0x218c02*/
          invoke_watson(0, 0, 0, 0, 0); /*0x218c17*/
      }
      j_j_free(v16); /*0x218c1e*/
    }
  }
  return v10; /*0x218e14*/
}

// [13/86] Address: 0x218eb0
// Method: GameLevelManager::createNewLevel
// Hidden C++ exception states: #wind=4
__int64 GameLevelManager_createNewLevel()
{
  __int64 v0; // rax
  __int64 v1; // rdi
  __int64 v2; // rdx
  void **v3; // rdx
  __int64 v4; // rax
  int v5; // r12d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r13
  int v10; // r15d
  __int64 v11; // rsi
  cocos2d::CCString *v12; // rax
  const char *CString; // rax
  const char *v14; // rbx
  __int64 v15; // r8
  bool v16; // r14
  void *v17; // rcx
  void **v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  void *v23; // [rsp+30h] [rbp-39h]
  void *v24; // [rsp+30h] [rbp-39h]
  void *v25[2]; // [rsp+38h] [rbp-31h] BYREF
  size_t v26; // [rsp+48h] [rbp-21h]
  unsigned __int64 v27; // [rsp+50h] [rbp-19h]
  void *Src[4]; // [rsp+58h] [rbp-11h] BYREF
  __int128 v29; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v30; // [rsp+88h] [rbp+1Fh]
  unsigned __int64 v31; // [rsp+90h] [rbp+27h]

  v23 = operator new(0x840u); /*0x218ef3*/
  v0 = GJGameLevel_GJGameLevel(v23); /*0x218efa*/
  v1 = v0; /*0x218eff*/
  if ( v0 ) /*0x218f05*/
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v0 + 72LL))(v0) ) /*0x218f0d*/
    {
      cocos2d::CCObject::autorelease((cocos2d::CCObject *)v1); /*0x218f17*/
    }
    else
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 8LL))(v1, 1); /*0x218f27*/
      v1 = 0; /*0x218f2a*/
    }
  }
  *(_DWORD *)(v1 + 1220) = 2; /*0x218f2d*/
  *(_BYTE *)(v1 + 720) = 1; /*0x218f37*/
  v2 = qword_905FD0; /*0x218f3e*/
  if ( !qword_905FD0 ) /*0x218f48*/
  {
    v24 = operator new(0x6E8u); /*0x218f54*/
    qword_905FD0 = sub_2723A0(v24); /*0x218f61*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x218f72*/
    v2 = qword_905FD0; /*0x218f74*/
  }
  sub_3E4F0(Src, v2 + 656); /*0x218f86*/
  if ( (void **)(v1 + 440) != Src ) /*0x218fa1*/
  {
    v3 = Src; /*0x218fa3*/
    if ( Src[3] > (char *)&loc_D + 2 ) /*0x218fac*/
      v3 = (void **)Src[0]; /*0x218fac*/
    sub_3F5A0((void *)(v1 + 440), v3, (size_t)Src[2]); /*0x218fb5*/
  }
  sub_3C310(Src); /*0x218fbf*/
  if ( !*(_QWORD *)(v1 + 1608) ) /*0x218fc4*/
  {
    v4 = sub_6F810(&v29); /*0x218fd7*/
    sub_58AD0(v1 + 1592, v4); /*0x218fe6*/
    sub_3C310(&v29); /*0x218fef*/
  }
  sub_3E4F0(&v29, v1 + 1592); /*0x218fff*/
  v5 = 6; /*0x219004*/
  sub_3C310(&v29); /*0x21900e*/
  v8 = sub_466AC0(v7, v6); /*0x219013*/
  v9 = sub_467040(v8); /*0x219020*/
  v10 = 0; /*0x219023*/
  v11 = -1; /*0x219026*/
  while ( 1 ) /*0x21903a*/
  {
    v12 = cocos2d::CCString::createWithFormat("Unnamed %i", v10); /*0x21903a*/
    CString = cocos2d::CCString::getCString(v12); /*0x219043*/
    v14 = CString; /*0x219049*/
    v29 = 0; /*0x21904f*/
    v30 = 0; /*0x219053*/
    v31 = 0; /*0x219057*/
    v15 = -1; /*0x21905b*/
    do /*0x219063*/
      ++v15; /*0x219060*/
    while ( CString[v15] ); /*0x219063*/
    sub_3C230(&v29); /*0x219071*/
    v5 |= 1u; /*0x219077*/
    v16 = !cocos2d::CCDictionary::objectForKey(v9, &v29) || v10 >= 999; /*0x21909a*/
    if ( (v5 & 1) != 0 ) /*0x2190a6*/
    {
      v5 &= ~1u; /*0x2190a8*/
      if ( v31 > 0xF ) /*0x2190b4*/
      {
        v17 = (void *)v29; /*0x2190b9*/
        if ( v31 + 1 >= 0x1000 ) /*0x2190c7*/
        {
          v17 = *(void **)(v29 - 8); /*0x2190cd*/
          if ( (unsigned __int64)(v29 - (_QWORD)v17 - 8) > 0x1F ) /*0x2190dc*/
            invoke_watson(0, 0, 0, 0, 0); /*0x219104*/
        }
        j_j_free(v17); /*0x2190de*/
      }
    }
    if ( v16 ) /*0x2190e6*/
      break; /*0x2190e6*/
    ++v10; /*0x2190e8*/
  }
  *(_OWORD *)v25 = 0; /*0x21910e*/
  v26 = 0; /*0x219114*/
  v27 = 0; /*0x219118*/
  do /*0x219123*/
    ++v11; /*0x219120*/
  while ( v14[v11] ); /*0x219123*/
  sub_3C230(v25); /*0x219132*/
  if ( (void **)(v1 + 1232) != v25 ) /*0x21914d*/
  {
    v18 = v25; /*0x21914f*/
    if ( v27 > 0xF ) /*0x219158*/
      v18 = (void **)v25[0]; /*0x219158*/
    sub_3F5A0((void *)(v1 + 1232), v18, v26); /*0x219161*/
  }
  sub_3C310(v25); /*0x21916b*/
  v21 = sub_466AC0(v20, v19); /*0x219170*/
  cocos2d::CCArray::insertObject(*(cocos2d::CCArray **)(v21 + 368), (struct cocos2d::CCObject *)v1, 0); /*0x219182*/
  return v1; /*0x21918b*/
}

// [14/86] Address: 0x2191c0
// Method: GameLevelManager::getNextLevelName
// Hidden C++ exception states: #wind=6
__int64 __fastcall GameLevelManager_getNextLevelName(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // esi
  int v6; // ebx
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int64 v15; // r8
  size_t v16; // r12
  const char *v17; // rcx
  int v18; // eax
  int v19; // esi
  cocos2d::CCString *v20; // rax
  const char *CString; // rax
  __int64 v22; // r8
  size_t v23; // r15
  int v24; // ebx
  unsigned __int64 v25; // rsi
  void **v26; // rdx
  void **v27; // rdx
  void **v28; // rdx
  void **v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rbx
  void *v32; // rcx
  void *v33; // rcx
  void *v34; // rcx
  void *v35; // rcx
  _QWORD *v36; // rcx
  unsigned __int64 v37; // r8
  size_t v38; // r14
  unsigned __int64 v39; // rax
  const char *v40; // rdx
  cocos2d::CCString *v41; // rax
  char *v42; // rax
  int v44; // [rsp+30h] [rbp-89h]
  int v45; // [rsp+34h] [rbp-85h]
  __int64 v46; // [rsp+38h] [rbp-81h]
  void *v47[2]; // [rsp+50h] [rbp-69h] BYREF
  size_t v48; // [rsp+60h] [rbp-59h]
  unsigned __int64 v49; // [rsp+68h] [rbp-51h]
  void *Src[2]; // [rsp+70h] [rbp-49h] BYREF
  size_t Size[2]; // [rsp+80h] [rbp-39h]
  void *Block[2]; // [rsp+90h] [rbp-29h] BYREF
  __int128 v53; // [rsp+A0h] [rbp-19h]
  char *String[2]; // [rsp+B0h] [rbp-9h] BYREF
  __int128 v55; // [rsp+C0h] [rbp+7h]

  v5 = 0; /*0x2191fc*/
  v6 = 0; /*0x2191ff*/
  v7 = a3[2]; /*0x219202*/
  if ( !v7 ) /*0x219209*/
    goto LABEL_51; /*0x219209*/
  v8 = 0; /*0x21920f*/
  do /*0x219259*/
  {
    v9 = ~v8; /*0x219220*/
    v10 = v9 + v7; /*0x219223*/
    if ( v7 <= v9 + v7 ) /*0x21922a*/
      sub_3E4D0(); /*0x21971a*/
    v11 = a3; /*0x219230*/
    if ( a3[3] > 0xFu ) /*0x219238*/
      v11 = (_QWORD *)*a3; /*0x21923a*/
    if ( !isdigit(*((char *)v11 + v10)) ) /*0x219241*/
      break; /*0x219249*/
    ++v5; /*0x21924b*/
    v8 = ++v6; /*0x21924f*/
    v7 = a3[2]; /*0x219252*/
  }
  while ( v6 < v7 ); /*0x219259*/
  if ( v5 > 0 ) /*0x21925d*/
  {
    v13 = sub_466AC0(v7, v12); /*0x219263*/
    v14 = sub_467040(v13); /*0x219270*/
    v46 = v14; /*0x219273*/
    v15 = a3[2]; /*0x219278*/
    v16 = v5; /*0x21927c*/
    *(_OWORD *)String = 0; /*0x219288*/
    v55 = 0; /*0x21928f*/
    if ( v15 < v15 - v5 ) /*0x219297*/
      sub_3E4D0(); /*0x219720*/
    sub_3C230(String); /*0x2192b9*/
    v17 = (const char *)String; /*0x2192bf*/
    if ( *((_QWORD *)&v55 + 1) > 0xFu ) /*0x2192c8*/
      v17 = String[0]; /*0x2192c8*/
    v18 = atoi(v17); /*0x2192cd*/
    v19 = 0; /*0x2192d3*/
    v44 = 0; /*0x2192d6*/
    while ( 1 ) /*0x2192e9*/
    {
      v45 = v18 + 1; /*0x2192e9*/
      v20 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, (unsigned int)(v18 + 1)); /*0x2192f6*/
      CString = cocos2d::CCString::getCString(v20); /*0x2192ff*/
      *(_OWORD *)v47 = 0; /*0x219308*/
      v48 = 0; /*0x21930c*/
      v49 = 0; /*0x219310*/
      v22 = -1; /*0x219314*/
      do /*0x219323*/
        ++v22; /*0x219320*/
      while ( CString[v22] ); /*0x219323*/
      sub_3C230(v47); /*0x219331*/
      v23 = v48; /*0x219337*/
      if ( v48 < v16 ) /*0x21933e*/
      {
        *(_OWORD *)Src = 0; /*0x219347*/
        Size[0] = 0; /*0x21934b*/
        Size[1] = 15; /*0x219353*/
        LOBYTE(Src[0]) = 0; /*0x21935b*/
        v24 = 0; /*0x21935f*/
        v25 = v16 - v48; /*0x219364*/
        if ( v16 != v48 ) /*0x219367*/
        {
          do /*0x21938e*/
          {
            sub_43D80(Src, "0", 1u); /*0x219381*/
            ++v24; /*0x219386*/
          }
          while ( v24 < v25 ); /*0x21938e*/
        }
        v26 = v47; /*0x219390*/
        if ( v49 > 0xF ) /*0x219399*/
          v26 = (void **)v47[0]; /*0x219399*/
        sub_43D80(Src, v26, v23); /*0x2193a5*/
        v27 = Src; /*0x2193aa*/
        if ( Size[1] > 0xF ) /*0x2193b3*/
          v27 = (void **)Src[0]; /*0x2193b3*/
        sub_3F5A0(v47, v27, Size[0]); /*0x2193c0*/
        sub_3C310(Src); /*0x2193ca*/
        v23 = v48; /*0x2193cf*/
        v19 = v44; /*0x2193d3*/
        v14 = v46; /*0x2193d7*/
      }
      *(_OWORD *)Block = 0; /*0x2193e9*/
      v53 = 0; /*0x2193f0*/
      sub_3C230(Block); /*0x21940d*/
      v28 = v47; /*0x219413*/
      if ( v49 > 0xF ) /*0x21941c*/
        v28 = (void **)v47[0]; /*0x21941c*/
      sub_43D80(Block, v28, v23); /*0x219428*/
      v29 = Block; /*0x21942d*/
      if ( *((_QWORD *)&v53 + 1) > 0xFu ) /*0x219436*/
        v29 = (void **)Block[0]; /*0x219436*/
      *(_OWORD *)Src = 0; /*0x21943e*/
      *(_OWORD *)Size = 0; /*0x219445*/
      v30 = -1; /*0x21944a*/
      do /*0x219453*/
        ++v30; /*0x219450*/
      while ( *((_BYTE *)v29 + v30) ); /*0x219453*/
      sub_3C230(Src); /*0x21945e*/
      v31 = cocos2d::CCDictionary::objectForKey(v14, Src); /*0x219471*/
      sub_3C310(Src); /*0x219478*/
      if ( !v31 ) /*0x219480*/
      {
        *(_QWORD *)(a2 + 16) = 0; /*0x219613*/
        *(_QWORD *)(a2 + 24) = 0; /*0x21961b*/
        *(_OWORD *)a2 = *(_OWORD *)Block; /*0x219627*/
        *(_OWORD *)(a2 + 16) = v53; /*0x219630*/
        sub_3C310(v47); /*0x219639*/
        sub_3C310(String); /*0x219643*/
        goto LABEL_62; /*0x219648*/
      }
      if ( v19 >= 999 ) /*0x21948c*/
        break; /*0x21948c*/
      v44 = ++v19; /*0x219494*/
      if ( *((_QWORD *)&v53 + 1) > 0xFu ) /*0x2194a0*/
      {
        v32 = Block[0]; /*0x2194a5*/
        if ( (unsigned __int64)(*((_QWORD *)&v53 + 1) + 1LL) >= 0x1000 ) /*0x2194b3*/
        {
          v32 = (void *)*((_QWORD *)Block[0] - 1); /*0x2194b9*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v32 - 8) > 0x1F ) /*0x2194c8*/
            goto LABEL_42; /*0x2194c8*/
        }
        j_j_free(v32); /*0x2194ce*/
      }
      v18 = v45; /*0x2194dc*/
      v14 = v46; /*0x2194e0*/
      if ( v49 > 0xF ) /*0x2194e5*/
      {
        v33 = v47[0]; /*0x2194ee*/
        if ( v49 + 1 >= 0x1000 ) /*0x2194fc*/
        {
          v33 = (void *)*((_QWORD *)v47[0] - 1); /*0x219502*/
          if ( (unsigned __int64)((char *)v47[0] - (char *)v33 - 8) > 0x1F ) /*0x219511*/
            goto LABEL_47; /*0x219511*/
        }
        j_j_free(v33); /*0x219517*/
        v18 = v45; /*0x21951c*/
      }
    }
    *(_OWORD *)a2 = 0; /*0x219528*/
    *(_QWORD *)(a2 + 16) = 0; /*0x21952d*/
    *(_QWORD *)(a2 + 24) = 0; /*0x219535*/
    *(_OWORD *)a2 = *(_OWORD *)a3; /*0x219540*/
    *(_OWORD *)(a2 + 16) = *((_OWORD *)a3 + 1); /*0x219549*/
    a3[2] = 0; /*0x21954e*/
    a3[3] = 15; /*0x219556*/
    *(_BYTE *)a3 = 0; /*0x21955e*/
    if ( *((_QWORD *)&v53 + 1) > 0xFu ) /*0x219569*/
    {
      v34 = Block[0]; /*0x21956e*/
      if ( (unsigned __int64)(*((_QWORD *)&v53 + 1) + 1LL) >= 0x1000 ) /*0x21957c*/
      {
        v34 = (void *)*((_QWORD *)Block[0] - 1); /*0x219582*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v34 - 8) > 0x1F ) /*0x219591*/
LABEL_42:
          invoke_watson(0, 0, 0, 0, 0); /*0x219593*/
      }
      j_j_free(v34); /*0x2195ad*/
    }
    if ( v49 > 0xF ) /*0x2195bb*/
    {
      v35 = v47[0]; /*0x2195c0*/
      if ( v49 + 1 >= 0x1000 ) /*0x2195ce*/
      {
        v35 = (void *)*((_QWORD *)v47[0] - 1); /*0x2195d4*/
        if ( (unsigned __int64)((char *)v47[0] - (char *)v35 - 8) > 0x1F ) /*0x2195e3*/
LABEL_47:
          invoke_watson(0, 0, 0, 0, 0); /*0x2195e5*/
      }
      j_j_free(v35); /*0x2195ff*/
    }
    sub_3C310(String); /*0x219609*/
  }
  else
  {
LABEL_51:
    v36 = a3; /*0x21964d*/
    v37 = a3[3]; /*0x219650*/
    if ( v37 > 0xF ) /*0x219658*/
      v36 = (_QWORD *)*a3; /*0x21965a*/
    v38 = -1; /*0x21965d*/
    v39 = -1; /*0x219664*/
    do /*0x21966a*/
      ++v39; /*0x219667*/
    while ( *((_BYTE *)v36 + v39) ); /*0x21966a*/
    if ( v39 <= 0x12 ) /*0x219674*/
    {
      v40 = (const char *)a3; /*0x219676*/
      if ( v37 > 0xF ) /*0x21967d*/
        v40 = (const char *)*a3; /*0x21967f*/
      v41 = cocos2d::CCString::createWithFormat("%s 2", v40); /*0x219689*/
      v42 = (char *)cocos2d::CCString::getCString(v41); /*0x219692*/
      do /*0x2196a3*/
        ++v38; /*0x2196a0*/
      while ( v42[v38] ); /*0x2196a3*/
      sub_3F5A0(a3, v42, v38); /*0x2196b3*/
    }
    *(_OWORD *)a2 = 0; /*0x2196bb*/
    *(_QWORD *)(a2 + 16) = 0; /*0x2196c0*/
    *(_QWORD *)(a2 + 24) = 0; /*0x2196c4*/
    *(_OWORD *)a2 = *(_OWORD *)a3; /*0x2196cb*/
    *(_OWORD *)(a2 + 16) = *((_OWORD *)a3 + 1); /*0x2196d4*/
    a3[2] = 0; /*0x2196d9*/
    a3[3] = 15; /*0x2196dd*/
    *(_BYTE *)a3 = 0; /*0x2196e5*/
  }
LABEL_62:
  sub_3C310(a3); /*0x2196e8*/
  return a2; /*0x2196f3*/
}

// [15/86] Address: 0x219fe0
// Method: GameLevelManager::deleteLevelList
// Hidden C++ exception states: #wind=1
void __fastcall GameLevelManager_deleteLevelList(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rax
  cocos2d::CCString *v5; // rax
  const char *CString; // rax
  __int64 v7; // r8
  void *v8; // rcx
  void *Block[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h]

  if ( a2[146] == 2 ) /*0x21a006*/
  {
    v4 = sub_466AC0(a1, a2); /*0x21a008*/
    cocos2d::CCArray::removeObject(*(cocos2d::CCArray **)(v4 + 376), (struct cocos2d::CCObject *)a2, 1); /*0x21a01a*/
  }
  else
  {
    v5 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, a2[86]); /*0x21a032*/
    CString = cocos2d::CCString::getCString(v5); /*0x21a03b*/
    *(_OWORD *)Block = 0; /*0x21a044*/
    v10 = 0; /*0x21a04c*/
    v7 = -1; /*0x21a052*/
    do /*0x21a063*/
      ++v7; /*0x21a060*/
    while ( CString[v7] ); /*0x21a063*/
    sub_3C230(Block); /*0x21a072*/
    cocos2d::CCDictionary::removeObjectForKey(*(_QWORD *)(a1 + 880), Block); /*0x21a084*/
    if ( *((_QWORD *)&v10 + 1) > 0xFu ) /*0x21a094*/
    {
      v8 = Block[0]; /*0x21a099*/
      if ( (unsigned __int64)(*((_QWORD *)&v10 + 1) + 1LL) >= 0x1000 ) /*0x21a0a8*/
      {
        v8 = (void *)*((_QWORD *)Block[0] - 1); /*0x21a0ae*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F ) /*0x21a0bd*/
          invoke_watson(0, 0, 0, 0, 0); /*0x21a0d2*/
      }
      j_j_free(v8); /*0x21a0d9*/
    }
  }
}

// [16/86] Address: 0x21a6a0
// Method: GameLevelManager::userNameForUserID
// Hidden C++ exception states: #wind=1
__int64 __fastcall GameLevelManager_userNameForUserID(__int64 a1, __int64 a2, int a3)
{
  cocos2d::CCString *v5; // rax
  const char *CString; // rax
  __int64 v7; // rdi
  __int64 v8; // r8
  cocos2d::CCString *v9; // rsi
  void *v10; // r8
  const char *v11; // rax
  void *Block[2]; // [rsp+40h] [rbp-48h] BYREF
  __m128i si128; // [rsp+50h] [rbp-38h]

  if ( a3 > 0 ) /*0x21a6cb*/
  {
    v5 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, (unsigned int)a3); /*0x21a6f7*/
    CString = cocos2d::CCString::getCString(v5); /*0x21a700*/
    *(_OWORD *)Block = 0; /*0x21a709*/
    si128 = 0; /*0x21a711*/
    v7 = -1; /*0x21a717*/
    v8 = -1; /*0x21a71e*/
    do /*0x21a724*/
      ++v8; /*0x21a721*/
    while ( CString[v8] ); /*0x21a724*/
    sub_3C230(Block); /*0x21a732*/
    v9 = (cocos2d::CCString *)cocos2d::CCDictionary::objectForKey(*(_QWORD *)(a1 + 1064), Block); /*0x21a74a*/
    if ( si128.m128i_i64[1] > 0xFuLL ) /*0x21a756*/
    {
      v10 = Block[0]; /*0x21a75b*/
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x21a76a*/
      {
        v10 = (void *)*((_QWORD *)Block[0] - 1); /*0x21a770*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v10 - 8) > 0x1F ) /*0x21a77f*/
          invoke_watson(0, 0, 0, 0, 0); /*0x21a790*/
      }
      j_j_free(v10); /*0x21a79a*/
    }
    si128 = _mm_load_si128((const __m128i *)&Size); /*0x21a7a7*/
    LOBYTE(Block[0]) = 0; /*0x21a7ad*/
    if ( v9 ) /*0x21a7b5*/
    {
      v11 = cocos2d::CCString::getCString(v9); /*0x21a7ba*/
      *(_OWORD *)a2 = 0; /*0x21a7c3*/
      *(_QWORD *)(a2 + 16) = 0; /*0x21a7c6*/
      *(_QWORD *)(a2 + 24) = 0; /*0x21a7ca*/
      do /*0x21a7d3*/
        ++v7; /*0x21a7d0*/
      while ( v11[v7] ); /*0x21a7d3*/
      sub_3C230(a2); /*0x21a7e2*/
    }
    else
    {
      *(_OWORD *)a2 = 0; /*0x21a7ec*/
      *(_QWORD *)(a2 + 16) = 1; /*0x21a7ef*/
      *(_QWORD *)(a2 + 24) = 15; /*0x21a7f7*/
      *(_WORD *)a2 = 45; /*0x21a7ff*/
    }
  }
  else
  {
    *(_OWORD *)a2 = 0; /*0x21a6d0*/
    *(_QWORD *)(a2 + 16) = 1; /*0x21a6d3*/
    *(_QWORD *)(a2 + 24) = 15; /*0x21a6db*/
    *(_WORD *)a2 = 45; /*0x21a6e3*/
  }
  return a2; /*0x21a807*/
}

// [17/86] Address: 0x21aca0
// Method: GameLevelManager::updateLevelRewards
// Hidden C++ exception states: #wind=6
__int64 __fastcall GameLevelManager_updateLevelRewards(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rcx
  float v4; // xmm0_4
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rsi
  int i; // ebp
  __int64 v9; // rbx
  __int64 v10; // r8
  void *v11; // rcx
  __int64 result; // rax
  void *v13; // [rsp+30h] [rbp-48h]
  void *v14; // [rsp+30h] [rbp-48h]
  void *v15; // [rsp+30h] [rbp-48h]
  void *v16; // [rsp+30h] [rbp-48h]
  void *v17; // [rsp+30h] [rbp-48h]
  __int128 v18; // [rsp+38h] [rbp-40h] BYREF
  __int64 v19; // [rsp+48h] [rbp-30h]
  unsigned __int64 v20; // [rsp+50h] [rbp-28h]

  v3 = qword_905FE0; /*0x21acc4*/
  if ( !qword_905FE0 ) /*0x21acce*/
  {
    v13 = operator new(0x3E8u); /*0x21acda*/
    qword_905FE0 = sub_2D2B40(v13); /*0x21ace8*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x21acf9*/
    v3 = qword_905FE0; /*0x21acfb*/
  }
  if ( !GameStatsManager_hasCompletedStarLevel(v3, (__int64)a2) ) /*0x21ad0c*/
    goto LABEL_28; /*0x21ad0c*/
  a2[231] = 100; /*0x21ad12*/
  v4 = (float)((float)rand() / 32767.0) * 1000.0; /*0x21ad31*/
  a2[232] = (int)v4; /*0x21ad3d*/
  a2[233] = (int)v4 + 100; /*0x21ad46*/
  if ( a2[251] - a2[252] == 1 ) /*0x21ad5b*/
  {
    v5 = qword_905FE0; /*0x21ad5d*/
    if ( !qword_905FE0 ) /*0x21ad67*/
    {
      v14 = operator new(0x3E8u); /*0x21ad73*/
      qword_905FE0 = sub_2D2B40(v14); /*0x21ad81*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x21ad92*/
      v5 = qword_905FE0; /*0x21ad94*/
    }
    sub_2DE410(v5, a2); /*0x21ad9e*/
  }
  if ( a2[255] - a2[256] > 0 ) /*0x21adb1*/
  {
    v6 = qword_905FE0; /*0x21adb3*/
    if ( !qword_905FE0 ) /*0x21adbd*/
    {
      v15 = operator new(0x3E8u); /*0x21adc9*/
      qword_905FE0 = sub_2D2B40(v15); /*0x21add7*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x21ade8*/
      v6 = qword_905FE0; /*0x21adea*/
    }
    GameStatsManager_completedStarLevel(v6, (__int64)a2); /*0x21adf4*/
  }
  v7 = qword_905FE0; /*0x21adf9*/
  if ( !qword_905FE0 ) /*0x21ae03*/
  {
    v16 = operator new(0x3E8u); /*0x21ae0f*/
    qword_905FE0 = sub_2D2B40(v16); /*0x21ae1d*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x21ae2e*/
    v7 = qword_905FE0; /*0x21ae30*/
  }
  if ( (int)a2[259] > 0 && a2[260] - a2[261] == 1 ) /*0x21ae53*/
  {
    for ( i = 1; i <= 3; ++i ) /*0x21ae59*/
    {
      v9 = sub_261000(a2, (unsigned int)i, (unsigned int)(a2[248] - a2[249])); /*0x21ae78*/
      if ( (unsigned __int8)sub_2DFE90(v7, v9) ) /*0x21ae81*/
      {
        if ( !(unsigned __int8)sub_2DFCF0(v7, v9) ) /*0x21ae94*/
        {
          GameStatsManager_storeUserCoin(v7, v9); /*0x21aea3*/
          GameStatsManager_incrementStat(v7, (const char *)&word_7231BC, 1u); /*0x21aeb8*/
        }
        v18 = 0; /*0x21aec0*/
        v19 = 0; /*0x21aec5*/
        v20 = 0; /*0x21aeca*/
        v10 = -1; /*0x21aecf*/
        do /*0x21aed9*/
          ++v10; /*0x21aed6*/
        while ( *(_BYTE *)(v9 + v10) ); /*0x21aed9*/
        sub_3C230(&v18); /*0x21aee8*/
        cocos2d::CCDictionary::removeObjectForKey(*(_QWORD *)(v7 + 728), &v18); /*0x21aefa*/
        if ( v20 > 0xF ) /*0x21af0a*/
        {
          v11 = (void *)v18; /*0x21af0f*/
          if ( v20 + 1 >= 0x1000 ) /*0x21af1e*/
          {
            v11 = *(void **)(v18 - 8); /*0x21af24*/
            if ( (unsigned __int64)(v18 - (_QWORD)v11 - 8) > 0x1F ) /*0x21af33*/
              invoke_watson(0, 0, 0, 0, 0); /*0x21afe7*/
          }
          j_j_free(v11); /*0x21af39*/
        }
        v19 = 0; /*0x21af3e*/
        v20 = 15; /*0x21af43*/
        LOBYTE(v18) = 0; /*0x21af4c*/
      }
    }
LABEL_28:
    v7 = qword_905FE0; /*0x21af5c*/
  }
  result = (unsigned int)(a2[255] - a2[256]); /*0x21af63*/
  if ( a2[255] - a2[256] > 0 ) /*0x21af71*/
  {
    if ( !v7 ) /*0x21af76*/
    {
      v17 = operator new(0x3E8u); /*0x21af82*/
      qword_905FE0 = sub_2D2B40(v17); /*0x21af90*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x21afa1*/
      v7 = qword_905FE0; /*0x21afa4*/
    }
    return sub_2E0A40(v7, a2); /*0x21afb1*/
  }
  return result; /*0x21afb6*/
}

// [18/86] Address: 0x21b2c0
// Method: GameLevelManager::saveFetchedLevels
// Hidden C++ exception states: #wind=1
unsigned int __fastcall GameLevelManager_saveFetchedLevels(__int64 a1, cocos2d::CCArray *a2)
{
  unsigned int v4; // ebp
  unsigned int result; // eax
  struct cocos2d::CCObject *v6; // rax
  __int64 v7; // rdi
  _DWORD *v8; // rax
  __int64 v9; // rdx
  _DWORD *v10; // rsi
  int v11; // ebx
  float v12; // xmm0_4
  int v13; // ebx
  float v14; // xmm0_4
  int v15; // ebx
  __int64 v16; // rcx
  float v17; // xmm0_4
  __int64 v18; // rcx
  float v19; // xmm0_4
  void *v20; // [rsp+70h] [rbp+18h]

  v4 = 0; /*0x21b2e8*/
  result = cocos2d::CCArray::count(a2); /*0x21b2ed*/
  if ( result )
  {
    do
    {
      v6 = cocos2d::CCArray::objectAtIndex(a2, v4); /*0x21b315*/
      v7 = (__int64)v6; /*0x21b31b*/
      if ( v6
        && (*((_DWORD *)v6 + 248) - *((_DWORD *)v6 + 249) <= 0
          ? ((v9 = (unsigned int)(*((_DWORD *)v6 + 82) - *((_DWORD *)v6 + 83)), !*((_BYTE *)v6 + 721))
           ? (v8 = (_DWORD *)sub_21D5C0(a1, v9))
           : (v8 = (_DWORD *)sub_21D780(a1, v9)))
          : (v8 = (_DWORD *)sub_21D6A0(a1)),
            (v10 = v8) != 0) )
      {
        v8[241] = *(_DWORD *)(v7 + 964); /*0x21b374*/
        v8[242] = *(_DWORD *)(v7 + 968); /*0x21b380*/
        v8[179] = *(_DWORD *)(v7 + 716); /*0x21b38c*/
        v11 = *(_DWORD *)(v7 + 1004) - *(_DWORD *)(v7 + 1008); /*0x21b398*/
        v8[253] = v11; /*0x21b39e*/
        v12 = (float)((float)rand() / 32767.0) * 1000.0; /*0x21b3b5*/
        v10[252] = (int)v12; /*0x21b3bd*/
        v10[251] = v11 + (int)v12; /*0x21b3c5*/
        v10[254] = *(_DWORD *)(v7 + 1016); /*0x21b3d1*/
        v13 = *(_DWORD *)(v7 + 1020) - *(_DWORD *)(v7 + 1024); /*0x21b3dd*/
        v10[257] = v13; /*0x21b3e3*/
        v14 = (float)((float)rand() / 32767.0) * 1000.0; /*0x21b3fa*/
        v10[256] = (int)v14; /*0x21b402*/
        v10[255] = v13 + (int)v14; /*0x21b40a*/
        v10[244] = *(_DWORD *)(v7 + 976); /*0x21b416*/
        v10[177] = *(_DWORD *)(v7 + 708); /*0x21b422*/
        v10[178] = *(_DWORD *)(v7 + 712); /*0x21b42e*/
        *((_BYTE *)v10 + 1032) = *(_BYTE *)(v7 + 1032); /*0x21b43b*/
        v10[259] = *(_DWORD *)(v7 + 1036); /*0x21b447*/
        v15 = *(_DWORD *)(v7 + 1040) - *(_DWORD *)(v7 + 1044); /*0x21b453*/
        v10[262] = v15; /*0x21b459*/
        v17 = (float)((float)rand() / 32767.0) * 1000.0; /*0x21b470*/
        v10[261] = (int)v17; /*0x21b478*/
        v10[260] = v15 + (int)v17; /*0x21b480*/
        if ( *((_BYTE *)v10 + 722) ) /*0x21b486*/
          *(_BYTE *)(v7 + 722) = 1; /*0x21b48f*/
        GameLevelManager_updateLevelRewards(v16, v10); /*0x21b499*/
      }
      else
      {
        v18 = qword_905FE0; /*0x21b4a0*/
        if ( !qword_905FE0 ) /*0x21b4aa*/
        {
          v20 = operator new(0x3E8u); /*0x21b4b6*/
          qword_905FE0 = sub_2D2B40(v20); /*0x21b4c4*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x21b4d5*/
          v18 = qword_905FE0; /*0x21b4d7*/
        }
        if ( GameStatsManager_hasCompletedStarLevel(v18, v7) ) /*0x21b4e1*/
        {
          *(_DWORD *)(v7 + 924) = 100; /*0x21b4ea*/
          v19 = (float)((float)rand() / 32767.0) * 1000.0; /*0x21b505*/
          *(_DWORD *)(v7 + 928) = (int)v19; /*0x21b50d*/
          *(_DWORD *)(v7 + 932) = (int)v19 + 100; /*0x21b516*/
        }
      }
      ++v4; /*0x21b51c*/
      result = cocos2d::CCArray::count(a2); /*0x21b521*/
    }
    while ( v4 < result );
  }
  return result; /*0x21b52f*/
}

// [19/86] Address: 0x21bb00
// Method: GameLevelManager::createAndGetScores
// Hidden C++ exception states: #wind=3
__int64 __fastcall GameLevelManager_createAndGetScores(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  _QWORD *v5; // rdx
  __int64 v6; // r8
  cocos2d::CCArray *v7; // r13
  void *v8; // r8
  unsigned int v9; // r12d
  cocos2d::CCString *v10; // rax
  const char *CString; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  void **v16; // r14
  char *v17; // rsi
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rbx
  __int64 updated; // rax
  struct cocos2d::CCObject *v22; // rbx
  char *v23; // rax
  cocos2d::CCArray *v26; // [rsp+38h] [rbp-91h]
  __int128 v27; // [rsp+40h] [rbp-89h] BYREF
  unsigned __int64 v28; // [rsp+50h] [rbp-79h]
  __int64 v29; // [rsp+58h] [rbp-71h]
  __int64 v30; // [rsp+60h] [rbp-69h]
  _QWORD *v31; // [rsp+68h] [rbp-61h]
  _BYTE v32[32]; // [rsp+78h] [rbp-51h] BYREF
  _QWORD *v33; // [rsp+98h] [rbp-31h]
  void *Block[2]; // [rsp+A0h] [rbp-29h] BYREF
  __m128i si128; // [rsp+B0h] [rbp-19h]
  void *Src[2]; // [rsp+C0h] [rbp-9h] BYREF
  unsigned __int64 v37; // [rsp+D0h] [rbp+7h]
  unsigned __int64 v38; // [rsp+D8h] [rbp+Fh]

  v3 = a2; /*0x21bb2f*/
  v31 = a2; /*0x21bb32*/
  v30 = a1; /*0x21bb36*/
  v33 = a2; /*0x21bb3a*/
  v4 = cocos2d::CCArray::create(a1); /*0x21bb46*/
  v26 = (cocos2d::CCArray *)v4; /*0x21bb49*/
  v5 = v3; /*0x21bb4e*/
  if ( v3[3] > 0xFu ) /*0x21bb56*/
    v5 = (_QWORD *)*v3; /*0x21bb58*/
  *(_OWORD *)Block = 0; /*0x21bb5e*/
  si128 = 0; /*0x21bb65*/
  v6 = -1; /*0x21bb6a*/
  do /*0x21bb74*/
    ++v6; /*0x21bb71*/
  while ( *((_BYTE *)v5 + v6) ); /*0x21bb74*/
  sub_3C230(Block); /*0x21bb7f*/
  v7 = (cocos2d::CCArray *)sub_D09B0(Block, &word_70806C); /*0x21bb95*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x21bba0*/
  {
    v8 = Block[0]; /*0x21bba5*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x21bbb3*/
    {
      v8 = (void *)*((_QWORD *)Block[0] - 1); /*0x21bbb9*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F ) /*0x21bbc8*/
        invoke_watson(0, 0, 0, 0, 0); /*0x21bbd9*/
    }
    j_j_free(v8); /*0x21bbe3*/
  }
  si128 = _mm_load_si128((const __m128i *)&Size); /*0x21bbf0*/
  LOBYTE(Block[0]) = 0; /*0x21bbf5*/
  v9 = 0; /*0x21bbf9*/
  if ( cocos2d::CCArray::count(v7) ) /*0x21bbff*/
  {
    do /*0x21bd96*/
    {
      v10 = cocos2d::CCArray::objectAtIndex(v7, v9); /*0x21bc16*/
      CString = cocos2d::CCString::getCString(v10); /*0x21bc1f*/
      *(_OWORD *)Src = 0; /*0x21bc28*/
      v37 = 0; /*0x21bc2c*/
      v38 = 0; /*0x21bc30*/
      v12 = -1; /*0x21bc34*/
      do /*0x21bc43*/
        ++v12; /*0x21bc40*/
      while ( CString[v12] ); /*0x21bc43*/
      sub_3C230(Src); /*0x21bc51*/
      v27 = 0; /*0x21bc5a*/
      v28 = 0; /*0x21bc5f*/
      v29 = 0; /*0x21bc63*/
      v16 = Src; /*0x21bc67*/
      v17 = (char *)Src[0]; /*0x21bc6b*/
      v18 = v38; /*0x21bc6f*/
      if ( v38 > 0xF ) /*0x21bc77*/
        v16 = (void **)Src[0]; /*0x21bc77*/
      v19 = v37; /*0x21bc7b*/
      if ( v37 > 0x7FFFFFFFFFFFFFFFLL ) /*0x21bc8c*/
        sub_8D90(v14, v13, v15); /*0x21bdef*/
      if ( v37 > 0xF ) /*0x21bc96*/
      {
        v20 = v37 | 0xF; /*0x21bcb2*/
        if ( (v37 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x21bcb9*/
        {
          if ( v20 < 0x16 ) /*0x21bcc9*/
            v20 = 22; /*0x21bcc9*/
        }
        else
        {
          v20 = 0x7FFFFFFFFFFFFFFFLL; /*0x21bcbb*/
        }
        *(_QWORD *)&v27 = sub_3C460(v20 + 1); /*0x21bcd6*/
        v28 = v19; /*0x21bcdb*/
        v29 = v20; /*0x21bcdf*/
        memcpy((void *)v27, v16, v19 + 1); /*0x21bced*/
      }
      else
      {
        v28 = v37; /*0x21bc98*/
        v29 = 15; /*0x21bc9c*/
        v27 = *(_OWORD *)v16; /*0x21bca8*/
      }
      updated = GJLevelList_updateLevelsString(&v27, 0); /*0x21bcf9*/
      v22 = (struct cocos2d::CCObject *)sub_2689D0(updated); /*0x21bd06*/
      v4 = (__int64)v26; /*0x21bd09*/
      if ( v22 ) /*0x21bd11*/
      {
        *((_DWORD *)v22 + 96) = a3; /*0x21bd17*/
        cocos2d::CCArray::addObject(v26, v22); /*0x21bd23*/
        sub_3E4F0(v32, (char *)v22 + 320); /*0x21bd34*/
        sub_21A440(v30, *((unsigned int *)v22 + 97), *((unsigned int *)v22 + 98), v32); /*0x21bd4e*/
      }
      if ( v18 > 0xF ) /*0x21bd58*/
      {
        v23 = v17; /*0x21bd5e*/
        if ( v18 + 1 >= 0x1000 ) /*0x21bd68*/
        {
          v17 = (char *)*((_QWORD *)v17 - 1); /*0x21bd6e*/
          if ( (unsigned __int64)(v23 - v17 - 8) > 0x1F ) /*0x21bd7d*/
            invoke_watson(0, 0, 0, 0, 0); /*0x21bdb2*/
        }
        j_j_free(v17); /*0x21bd82*/
      }
      ++v9; /*0x21bd87*/
    }
    while ( v9 < cocos2d::CCArray::count(v7) ); /*0x21bd96*/
    v3 = v31; /*0x21bdb9*/
  }
  sub_3C310(v3); /*0x21bdc0*/
  return v4; /*0x21bdc8*/
}

// [20/86] Address: 0x21c420
// Method: GameLevelManager::getDemonLevelsString
// Hidden C++ exception states: #wind=2
__int64 __fastcall GameLevelManager_getDemonLevelsString(__int64 a1, __int64 a2)
{
  char v4; // bp
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 i; // rdi
  _DWORD *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  void *v14; // [rsp+38h] [rbp-270h]
  __int128 v15; // [rsp+50h] [rbp-258h] BYREF
  _BYTE v16[528]; // [rsp+60h] [rbp-248h] BYREF

  fmt::BasicWriter<char>::BasicWriter<char>(v16); /*0x21c458*/
  v4 = 1; /*0x21c45f*/
  v5 = *(_QWORD *)(a1 + 856); /*0x21c462*/
  if ( !v5 ) /*0x21c46c*/
    goto LABEL_19; /*0x21c46c*/
  v6 = *(_QWORD *)(v5 + 56); /*0x21c472*/
  if ( !v6 ) /*0x21c479*/
    goto LABEL_19; /*0x21c479*/
  for ( i = *(_QWORD *)(v6 + 288); ; i = *(_QWORD *)(i + 288) ) /*0x21c47f*/
  {
    v8 = (_DWORD *)_RTDynamicCast( /*0x21c4ac*/
                     *(_QWORD *)(v6 + 264),
                     0,
                     &cocos2d::CCObject `RTTI Type Descriptor',
                     &GJGameLevel `RTTI Type Descriptor',
                     0);
    v9 = (__int64)v8; /*0x21c4b1*/
    if ( v8 && v8[255] - v8[256] == 10 && v8[233] - v8[232] == 100 ) /*0x21c4e1*/
    {
      v10 = qword_905FE0; /*0x21c4e7*/
      if ( !qword_905FE0 ) /*0x21c4f1*/
      {
        v14 = operator new(0x3E8u); /*0x21c4fd*/
        qword_905FE0 = sub_2D2B40(v14); /*0x21c50d*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x21c517*/
        v10 = qword_905FE0; /*0x21c51a*/
      }
      if ( GameStatsManager_hasCompletedStarLevel(v10, v9) ) /*0x21c524*/
      {
        if ( !v4 ) /*0x21c530*/
        {
          v15 = (unsigned __int64)&unk_709CE8; /*0x21c541*/
          fmt::BasicWriter<char>::operator<<(v16, &v15); /*0x21c551*/
        }
        fmt::BasicWriter<char>::operator<<(v16, (unsigned int)(*(_DWORD *)(v9 + 328) - *(_DWORD *)(v9 + 332))); /*0x21c568*/
        v4 = 0; /*0x21c56e*/
      }
    }
    v6 = i; /*0x21c571*/
    if ( !i ) /*0x21c577*/
      break; /*0x21c577*/
  }
  if ( !v4 ) /*0x21c588*/
  {
    v11 = fmt::BasicWriter<char>::c_str(v16); /*0x21c58f*/
    *(_OWORD *)a2 = 0; /*0x21c598*/
    *(_QWORD *)(a2 + 16) = 0; /*0x21c59b*/
    *(_QWORD *)(a2 + 24) = 0; /*0x21c59f*/
    v12 = -1; /*0x21c5a3*/
    do /*0x21c5b3*/
      ++v12; /*0x21c5b0*/
    while ( *(_BYTE *)(v11 + v12) ); /*0x21c5b3*/
    sub_3C230(a2); /*0x21c5c0*/
  }
  else
  {
LABEL_19:
    *(_OWORD *)a2 = 0; /*0x21c5ca*/
    *(_QWORD *)(a2 + 16) = 0; /*0x21c5cd*/
    *(_QWORD *)(a2 + 24) = 15; /*0x21c5d1*/
    *(_BYTE *)a2 = 0; /*0x21c5d9*/
  }
  fmt::BasicWriter<char>::~BasicWriter<char>(v16); /*0x21c5e1*/
  return a2; /*0x21c5ea*/
}

// [21/86] Address: 0x21c620
// Method: GameLevelManager::getStarLevelsString
// Hidden C++ exception states: #wind=10
_QWORD *__fastcall GameLevelManager_getStarLevelsString(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 i; // rdi
  __int64 v9; // rax
  _DWORD *v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  int *v13; // r8
  char *v14; // rdx
  int *v15; // rcx
  __int64 v16; // rax
  int j; // ebx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 Level; // rax
  int *v21; // r8
  char *v22; // rdx
  __int64 v23; // rax
  int k; // ebx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  int *v28; // r8
  char *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // r8
  void *v52; // [rsp+30h] [rbp-D0h] BYREF
  int v53; // [rsp+38h] [rbp-C8h] BYREF
  void *v54; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v55; // [rsp+48h] [rbp-B8h]
  _BYTE v56[16]; // [rsp+50h] [rbp-B0h] BYREF
  int v57; // [rsp+60h] [rbp-A0h] BYREF
  int v58; // [rsp+64h] [rbp-9Ch] BYREF
  int v59; // [rsp+68h] [rbp-98h] BYREF
  int v60; // [rsp+6Ch] [rbp-94h] BYREF
  int v61; // [rsp+70h] [rbp-90h] BYREF
  int v62; // [rsp+74h] [rbp-8Ch] BYREF
  int v63; // [rsp+78h] [rbp-88h] BYREF
  int v64; // [rsp+7Ch] [rbp-84h] BYREF
  int v65; // [rsp+80h] [rbp-80h] BYREF
  int v66; // [rsp+84h] [rbp-7Ch] BYREF
  _BYTE v67[24]; // [rsp+88h] [rbp-78h] BYREF
  int v68; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v69[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v70; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v71; // [rsp+C0h] [rbp-40h]
  __int64 v72; // [rsp+D0h] [rbp-30h]
  __int64 v73; // [rsp+D8h] [rbp-28h]
  int v74; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v75[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v76; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v77; // [rsp+100h] [rbp+0h]
  __int64 v78; // [rsp+110h] [rbp+10h]
  __int64 v79; // [rsp+118h] [rbp+18h]
  char v80; // [rsp+128h] [rbp+28h] BYREF
  char v81; // [rsp+138h] [rbp+38h] BYREF
  char v82; // [rsp+148h] [rbp+48h] BYREF
  char v83; // [rsp+158h] [rbp+58h] BYREF
  char v84; // [rsp+168h] [rbp+68h] BYREF
  char v85; // [rsp+178h] [rbp+78h] BYREF
  char v86; // [rsp+188h] [rbp+88h] BYREF
  char v87; // [rsp+198h] [rbp+98h] BYREF
  char v88; // [rsp+1A8h] [rbp+A8h] BYREF
  char v89; // [rsp+1B8h] [rbp+B8h] BYREF
  _BYTE v90[528]; // [rsp+1D0h] [rbp+D0h] BYREF

  v52 = a2; /*0x21c654*/
  v75[1] = 0; /*0x21c664*/
  v4 = operator new(0x18u); /*0x21c66d*/
  *v4 = v4; /*0x21c672*/
  v4[1] = v4; /*0x21c675*/
  v75[0] = v4; /*0x21c679*/
  v76 = 0; /*0x21c67d*/
  v77 = 0; /*0x21c684*/
  v78 = 7; /*0x21c689*/
  v79 = 8; /*0x21c691*/
  v74 = 1065353216; /*0x21c699*/
  sub_3E200(&v76, 16, v4); /*0x21c6ac*/
  v69[1] = 0; /*0x21c6ba*/
  v5 = operator new(0x18u); /*0x21c6c3*/
  *v5 = v5; /*0x21c6c8*/
  v5[1] = v5; /*0x21c6cb*/
  v69[0] = v5; /*0x21c6cf*/
  v70 = 0; /*0x21c6d3*/
  v71 = 0; /*0x21c6da*/
  v72 = 7; /*0x21c6df*/
  v73 = 8; /*0x21c6e7*/
  v68 = 1065353216; /*0x21c6ef*/
  sub_3E200(&v70, 16, v5); /*0x21c702*/
  v6 = *(_QWORD *)(a1 + 856); /*0x21c708*/
  if ( v6 ) /*0x21c712*/
  {
    v7 = *(_QWORD *)(v6 + 56); /*0x21c718*/
    if ( v7 ) /*0x21c71f*/
    {
      for ( i = *(_QWORD *)(v7 + 288); ; i = *(_QWORD *)(i + 288) ) /*0x21c725*/
      {
        v9 = _RTDynamicCast( /*0x21c74c*/
               *(_QWORD *)(v7 + 264),
               0,
               &cocos2d::CCObject `RTTI Type Descriptor',
               &GJGameLevel `RTTI Type Descriptor',
               0);
        v10 = (_DWORD *)v9; /*0x21c751*/
        if ( v9 ) /*0x21c757*/
        {
          v11 = *(_DWORD *)(v9 + 1020) - *(_DWORD *)(v9 + 1024); /*0x21c763*/
          if ( v11 > 0 && v11 < 10 && v10[233] - v10[232] == 100 ) /*0x21c789*/
          {
            v12 = qword_905FE0; /*0x21c78f*/
            if ( !qword_905FE0 ) /*0x21c799*/
            {
              v52 = operator new(0x3E8u); /*0x21c7a5*/
              qword_905FE0 = sub_2D2B40(v52); /*0x21c7b5*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x21c7bf*/
              v12 = qword_905FE0; /*0x21c7c2*/
            }
            if ( GameStatsManager_hasCompletedStarLevel(v12, (__int64)v10) ) /*0x21c7cc*/
            {
              if ( v10[243] == 5 ) /*0x21c7e8*/
              {
                v57 = v10[255] - v10[256]; /*0x21c7ea*/
                v13 = &v57; /*0x21c7ee*/
                v14 = &v80; /*0x21c7f3*/
                v15 = &v68; /*0x21c7f7*/
              }
              else
              {
                v58 = v10[255] - v10[256]; /*0x21c7fd*/
                v13 = &v58; /*0x21c801*/
                v14 = &v81; /*0x21c806*/
                v15 = &v74; /*0x21c80a*/
              }
              v16 = sub_271330(v15, v14, v13); /*0x21c80e*/
              ++*(_DWORD *)(*(_QWORD *)v16 + 20LL); /*0x21c816*/
            }
          }
        }
        v7 = i; /*0x21c819*/
        if ( !i ) /*0x21c81f*/
          break; /*0x21c81f*/
      }
    }
  }
  for ( j = 1; j <= 22; ++j ) /*0x21c82d*/
  {
    v18 = qword_905FE0; /*0x21c832*/
    if ( !qword_905FE0 ) /*0x21c83c*/
    {
      v52 = operator new(0x3E8u); /*0x21c848*/
      qword_905FE0 = sub_2D2B40(v52); /*0x21c858*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x21c862*/
      v18 = qword_905FE0; /*0x21c865*/
    }
    if ( (unsigned __int8)sub_2DDD20(v18, (unsigned int)j) ) /*0x21c86e*/
    {
      LOBYTE(v19) = 1; /*0x21c87b*/
      Level = LevelTools_getLevel((unsigned int)j, v19); /*0x21c87f*/
      if ( Level ) /*0x21c887*/
      {
        switch ( *(_DWORD *)(Level + 672) ) /*0x21c896*/
        {
          case 1: /*0x21c896*/
            v63 = 2; /*0x21c8f8*/
            v21 = &v63; /*0x21c900*/
            v22 = &v86; /*0x21c905*/
            break;
          case 2: /*0x21c896*/
            v62 = 3; /*0x21c8e5*/
            v21 = &v62; /*0x21c8ed*/
            v22 = &v85; /*0x21c8f2*/
            break;
          case 3: /*0x21c896*/
            v61 = 4; /*0x21c8d2*/
            v21 = &v61; /*0x21c8da*/
            v22 = &v84; /*0x21c8df*/
            break;
          case 4: /*0x21c896*/
            v60 = 6; /*0x21c8bf*/
            v21 = &v60; /*0x21c8c7*/
            v22 = &v83; /*0x21c8cc*/
            break;
          case 5: /*0x21c896*/
            v59 = 8; /*0x21c8ac*/
            v21 = &v59; /*0x21c8b4*/
            v22 = &v82; /*0x21c8b9*/
            break;
          default:
            continue; /*0x21c8aa*/
        }
        v23 = sub_271330(&v74, v22, v21); /*0x21c910*/
        ++*(_DWORD *)(*(_QWORD *)v23 + 20LL); /*0x21c918*/
      }
    }
  }
  for ( k = 5001; k <= 5004; ++k ) /*0x21c926*/
  {
    v25 = qword_905FE0; /*0x21c930*/
    if ( !qword_905FE0 ) /*0x21c93a*/
    {
      v54 = operator new(0x3E8u); /*0x21c946*/
      qword_905FE0 = sub_2D2B40(v54); /*0x21c956*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x21c960*/
      v25 = qword_905FE0; /*0x21c963*/
    }
    if ( (unsigned __int8)sub_2DDD20(v25, (unsigned int)k) ) /*0x21c96c*/
    {
      LOBYTE(v26) = 1; /*0x21c979*/
      v27 = LevelTools_getLevel((unsigned int)k, v26); /*0x21c97d*/
      if ( v27 ) /*0x21c985*/
      {
        switch ( *(_DWORD *)(v27 + 672) ) /*0x21c994*/
        {
          case 1: /*0x21c994*/
            LODWORD(v52) = 2; /*0x21c9fb*/
            v28 = (int *)&v52; /*0x21ca03*/
            v29 = v56; /*0x21ca08*/
            break;
          case 2: /*0x21c994*/
            v53 = 3; /*0x21c9e8*/
            v28 = &v53; /*0x21c9f0*/
            v29 = v67; /*0x21c9f5*/
            break;
          case 3: /*0x21c994*/
            v66 = 4; /*0x21c9d4*/
            v28 = &v66; /*0x21c9db*/
            v29 = &v89; /*0x21c9df*/
            break;
          case 4: /*0x21c994*/
            v65 = 6; /*0x21c9c0*/
            v28 = &v65; /*0x21c9c7*/
            v29 = &v88; /*0x21c9cb*/
            break;
          case 5: /*0x21c994*/
            v64 = 8; /*0x21c9aa*/
            v28 = &v64; /*0x21c9b2*/
            v29 = &v87; /*0x21c9b7*/
            break;
          default:
            continue; /*0x21c9a8*/
        }
        v30 = sub_271330(&v68, v29, v28); /*0x21ca11*/
        ++*(_DWORD *)(*(_QWORD *)v30 + 20LL); /*0x21ca19*/
      }
    }
  }
  fmt::BasicWriter<char>::BasicWriter<char>(v90); /*0x21ca31*/
  LODWORD(v52) = 1; /*0x21ca38*/
  v31 = sub_271330(&v74, v56, &v52); /*0x21ca4e*/
  fmt::BasicWriter<char>::operator<<(v90, *(unsigned int *)(*(_QWORD *)v31 + 20LL)); /*0x21ca60*/
  v54 = &unk_709CE8; /*0x21ca6d*/
  v55 = 0; /*0x21ca72*/
  fmt::BasicWriter<char>::operator<<(v90, &v54); /*0x21ca8e*/
  LODWORD(v52) = 2; /*0x21ca94*/
  v32 = sub_271330(&v74, v56, &v52); /*0x21caaa*/
  fmt::BasicWriter<char>::operator<<(v90, *(unsigned int *)(*(_QWORD *)v32 + 20LL)); /*0x21cabc*/
  v54 = &unk_709CE8; /*0x21cac2*/
  v55 = 0; /*0x21cac7*/
  fmt::BasicWriter<char>::operator<<(v90, &v54); /*0x21cae3*/
  LODWORD(v52) = 3; /*0x21cae9*/
  v33 = sub_271330(&v74, v56, &v52); /*0x21caff*/
  fmt::BasicWriter<char>::operator<<(v90, *(unsigned int *)(*(_QWORD *)v33 + 20LL)); /*0x21cb11*/
  v54 = &unk_709CE8; /*0x21cb17*/
  v55 = 0; /*0x21cb1c*/
  fmt::BasicWriter<char>::operator<<(v90, &v54); /*0x21cb38*/
  LODWORD(v52) = 4; /*0x21cb3e*/
  v53 = 5; /*0x21cb46*/
  v34 = *(_QWORD *)sub_271330(&v74, v56, &v52); /*0x21cb61*/
  v35 = sub_271330(&v74, v67, &v53); /*0x21cb71*/
  fmt::BasicWriter<char>::operator<<(v90, (unsigned int)(*(_DWORD *)(v34 + 20) + *(_DWORD *)(*(_QWORD *)v35 + 20LL))); /*0x21cb86*/
  v54 = &unk_709CE8; /*0x21cb8c*/
  v55 = 0; /*0x21cb91*/
  fmt::BasicWriter<char>::operator<<(v90, &v54); /*0x21cbad*/
  LODWORD(v52) = 6; /*0x21cbb3*/
  v53 = 7; /*0x21cbbb*/
  v36 = *(_QWORD *)sub_271330(&v74, v56, &v52); /*0x21cbd6*/
  v37 = sub_271330(&v74, v67, &v53); /*0x21cbe6*/
  fmt::BasicWriter<char>::operator<<(v90, (unsigned int)(*(_DWORD *)(v36 + 20) + *(_DWORD *)(*(_QWORD *)v37 + 20LL))); /*0x21cbfb*/
  v54 = &unk_709CE8; /*0x21cc01*/
  v55 = 0; /*0x21cc06*/
  fmt::BasicWriter<char>::operator<<(v90, &v54); /*0x21cc22*/
  LODWORD(v52) = 8; /*0x21cc28*/
  v53 = 9; /*0x21cc30*/
  v38 = *(_QWORD *)sub_271330(&v74, v56, &v52); /*0x21cc4b*/
  v39 = sub_271330(&v74, v67, &v53); /*0x21cc5b*/
  fmt::BasicWriter<char>::operator<<(v90, (unsigned int)(*(_DWORD *)(v38 + 20) + *(_DWORD *)(*(_QWORD *)v39 + 20LL))); /*0x21cc70*/
  v54 = &unk_709CE8; /*0x21cc76*/
  v55 = 0; /*0x21cc7b*/
  fmt::BasicWriter<char>::operator<<(v90, &v54); /*0x21cc97*/
  LODWORD(v52) = 1; /*0x21cc9d*/
  v40 = sub_271330(&v68, v56, &v52); /*0x21ccb3*/
  fmt::BasicWriter<char>::operator<<(v90, *(unsigned int *)(*(_QWORD *)v40 + 20LL)); /*0x21ccc5*/
  v54 = &unk_709CE8; /*0x21cccb*/
  v55 = 0; /*0x21ccd0*/
  fmt::BasicWriter<char>::operator<<(v90, &v54); /*0x21ccec*/
  LODWORD(v52) = 2; /*0x21ccf2*/
  v41 = sub_271330(&v68, v56, &v52); /*0x21cd08*/
  fmt::BasicWriter<char>::operator<<(v90, *(unsigned int *)(*(_QWORD *)v41 + 20LL)); /*0x21cd1a*/
  v54 = &unk_709CE8; /*0x21cd20*/
  v55 = 0; /*0x21cd25*/
  fmt::BasicWriter<char>::operator<<(v90, &v54); /*0x21cd41*/
  LODWORD(v52) = 3; /*0x21cd47*/
  v42 = sub_271330(&v68, v56, &v52); /*0x21cd5d*/
  fmt::BasicWriter<char>::operator<<(v90, *(unsigned int *)(*(_QWORD *)v42 + 20LL)); /*0x21cd6f*/
  v54 = &unk_709CE8; /*0x21cd75*/
  v55 = 0; /*0x21cd7a*/
  fmt::BasicWriter<char>::operator<<(v90, &v54); /*0x21cd96*/
  LODWORD(v52) = 4; /*0x21cd9c*/
  v53 = 5; /*0x21cda4*/
  v43 = *(_QWORD *)sub_271330(&v68, v56, &v52); /*0x21cdbf*/
  v44 = sub_271330(&v68, v67, &v53); /*0x21cdcf*/
  fmt::BasicWriter<char>::operator<<(v90, (unsigned int)(*(_DWORD *)(v43 + 20) + *(_DWORD *)(*(_QWORD *)v44 + 20LL))); /*0x21cde4*/
  v54 = &unk_709CE8; /*0x21cdea*/
  v55 = 0; /*0x21cdef*/
  fmt::BasicWriter<char>::operator<<(v90, &v54); /*0x21ce0b*/
  v53 = 6; /*0x21ce11*/
  LODWORD(v52) = 7; /*0x21ce19*/
  v45 = *(_QWORD *)sub_271330(&v68, v56, &v52); /*0x21ce34*/
  v46 = sub_271330(&v68, v67, &v53); /*0x21ce44*/
  fmt::BasicWriter<char>::operator<<(v90, (unsigned int)(*(_DWORD *)(v45 + 20) + *(_DWORD *)(*(_QWORD *)v46 + 20LL))); /*0x21ce59*/
  v54 = &unk_709CE8; /*0x21ce5f*/
  v55 = 0; /*0x21ce64*/
  fmt::BasicWriter<char>::operator<<(v90, &v54); /*0x21ce80*/
  LODWORD(v52) = 8; /*0x21ce86*/
  v53 = 9; /*0x21ce8e*/
  v47 = *(_QWORD *)sub_271330(&v68, v56, &v52); /*0x21cea9*/
  v48 = sub_271330(&v68, v67, &v53); /*0x21ceb9*/
  fmt::BasicWriter<char>::operator<<(v90, (unsigned int)(*(_DWORD *)(v47 + 20) + *(_DWORD *)(*(_QWORD *)v48 + 20LL))); /*0x21cece*/
  v49 = fmt::BasicWriter<char>::c_str(v90); /*0x21cedb*/
  *(_OWORD *)a2 = 0; /*0x21cee4*/
  a2[2] = 0; /*0x21cee7*/
  a2[3] = 0; /*0x21ceeb*/
  v50 = -1; /*0x21ceef*/
  do /*0x21cef9*/
    ++v50; /*0x21cef6*/
  while ( *(_BYTE *)(v49 + v50) ); /*0x21cef9*/
  sub_3C230(a2); /*0x21cf06*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v90); /*0x21cf13*/
  sub_3DA90(&v70); /*0x21cf1e*/
  sub_3DB00(v69); /*0x21cf27*/
  sub_3DA90(&v76); /*0x21cf31*/
  sub_3DB00(v75); /*0x21cf3a*/
  return a2; /*0x21cf42*/
}

// [22/86] Address: 0x21cf70
// Method: GameLevelManager::getCompletedWeeklyLevels
// Hidden C++ exception states: #wind=2
__int64 __fastcall GameLevelManager_getCompletedWeeklyLevels(__int64 a1)
{
  unsigned int v2; // esi
  struct cocos2d::CCArray *v3; // rax
  unsigned int *v4; // rdi
  __int64 v5; // rax
  cocos2d::CCString **v6; // rdi
  cocos2d::CCString **i; // rbp
  cocos2d::CCString *v8; // rbx
  int v9; // eax
  const char *CString; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  _DWORD *v13; // rbx
  void *v14; // rcx
  __int64 v15; // rcx
  void *v17; // [rsp+30h] [rbp-48h]
  __int128 v18; // [rsp+38h] [rbp-40h] BYREF
  __int64 v19; // [rsp+48h] [rbp-30h]
  unsigned __int64 v20; // [rsp+50h] [rbp-28h]

  v2 = 0; /*0x21cf9d*/
  v3 = cocos2d::CCDictionary::allKeys(*(cocos2d::CCDictionary **)(a1 + 944)); /*0x21cfa7*/
  if ( v3 ) /*0x21cfb0*/
  {
    v4 = (unsigned int *)*((_QWORD *)v3 + 7); /*0x21cfb6*/
    v5 = *v4; /*0x21cfba*/
    if ( (_DWORD)v5 ) /*0x21cfbe*/
    {
      v6 = (cocos2d::CCString **)*((_QWORD *)v4 + 2); /*0x21cfc4*/
      for ( i = &v6[v5 - 1]; v6 <= i; ++v6 ) /*0x21cfd3*/
      {
        v8 = *v6; /*0x21cfe0*/
        if ( !*v6 ) /*0x21cfe0*/
          break; /*0x21cfe6*/
        v9 = cocos2d::CCString::intValue(*v6); /*0x21cfef*/
        if ( v9 > 100000 && v9 <= 200000 ) /*0x21d005*/
        {
          CString = cocos2d::CCString::getCString(v8); /*0x21d00e*/
          v18 = 0; /*0x21d017*/
          v19 = 0; /*0x21d01c*/
          v20 = 0; /*0x21d021*/
          v11 = -1; /*0x21d026*/
          do /*0x21d033*/
            ++v11; /*0x21d030*/
          while ( CString[v11] ); /*0x21d033*/
          sub_3C230(&v18); /*0x21d042*/
          v12 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(a1 + 944), &v18); /*0x21d054*/
          v13 = (_DWORD *)_RTDynamicCast( /*0x21d077*/
                            v12,
                            0,
                            &cocos2d::CCObject `RTTI Type Descriptor',
                            &GJGameLevel `RTTI Type Descriptor',
                            0);
          if ( v20 > 0xF ) /*0x21d083*/
          {
            v14 = (void *)v18; /*0x21d088*/
            if ( v20 + 1 >= 0x1000 ) /*0x21d097*/
            {
              v14 = *(void **)(v18 - 8); /*0x21d09d*/
              if ( (unsigned __int64)(v18 - (_QWORD)v14 - 8) > 0x1F ) /*0x21d0ac*/
                invoke_watson(0, 0, 0, 0, 0); /*0x21d17e*/
            }
            j_j_free(v14); /*0x21d0b2*/
          }
          v19 = 0; /*0x21d0b7*/
          v20 = 15; /*0x21d0bc*/
          LOBYTE(v18) = 0; /*0x21d0c5*/
          if ( v13 && v13[255] - v13[256] == 10 && v13[233] - v13[232] == 100 ) /*0x21d0ef*/
          {
            v15 = qword_905FE0; /*0x21d0f1*/
            if ( !qword_905FE0 ) /*0x21d0fb*/
            {
              v17 = operator new(0x3E8u); /*0x21d107*/
              qword_905FE0 = sub_2D2B40(v17); /*0x21d117*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x21d121*/
              v15 = qword_905FE0; /*0x21d124*/
            }
            if ( GameStatsManager_hasCompletedStarLevel(v15, (__int64)v13) ) /*0x21d12e*/
              ++v2; /*0x21d137*/
          }
        }
      }
    }
  }
  return v2; /*0x21d148*/
}

// [23/86] Address: 0x21d190
// Method: GameLevelManager::getCompletedDailyLevels
// Hidden C++ exception states: #wind=2
__int64 __fastcall GameLevelManager_getCompletedDailyLevels(__int64 a1)
{
  unsigned int v2; // esi
  struct cocos2d::CCArray *v3; // rax
  unsigned int *v4; // rdi
  __int64 v5; // rax
  cocos2d::CCString **v6; // rdi
  cocos2d::CCString **i; // rbp
  cocos2d::CCString *v8; // rbx
  const char *CString; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  _DWORD *v12; // rbx
  void *v13; // rcx
  __int64 v14; // rcx
  void *v16; // [rsp+30h] [rbp-48h]
  __int128 v17; // [rsp+38h] [rbp-40h] BYREF
  __int64 v18; // [rsp+48h] [rbp-30h]
  unsigned __int64 v19; // [rsp+50h] [rbp-28h]

  v2 = 0; /*0x21d1bd*/
  v3 = cocos2d::CCDictionary::allKeys(*(cocos2d::CCDictionary **)(a1 + 944)); /*0x21d1c7*/
  if ( v3 ) /*0x21d1d0*/
  {
    v4 = (unsigned int *)*((_QWORD *)v3 + 7); /*0x21d1d6*/
    v5 = *v4; /*0x21d1da*/
    if ( (_DWORD)v5 ) /*0x21d1de*/
    {
      v6 = (cocos2d::CCString **)*((_QWORD *)v4 + 2); /*0x21d1e4*/
      for ( i = &v6[v5 - 1]; v6 <= i; ++v6 ) /*0x21d1f3*/
      {
        v8 = *v6; /*0x21d200*/
        if ( !*v6 ) /*0x21d200*/
          break; /*0x21d206*/
        if ( (int)cocos2d::CCString::intValue(*v6) <= 100000 ) /*0x21d21a*/
        {
          CString = cocos2d::CCString::getCString(v8); /*0x21d223*/
          v17 = 0; /*0x21d22c*/
          v18 = 0; /*0x21d231*/
          v19 = 0; /*0x21d236*/
          v10 = -1; /*0x21d23b*/
          do /*0x21d245*/
            ++v10; /*0x21d242*/
          while ( CString[v10] ); /*0x21d245*/
          sub_3C230(&v17); /*0x21d254*/
          v11 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(a1 + 944), &v17); /*0x21d266*/
          v12 = (_DWORD *)_RTDynamicCast( /*0x21d289*/
                            v11,
                            0,
                            &cocos2d::CCObject `RTTI Type Descriptor',
                            &GJGameLevel `RTTI Type Descriptor',
                            0);
          if ( v19 > 0xF ) /*0x21d295*/
          {
            v13 = (void *)v17; /*0x21d29a*/
            if ( v19 + 1 >= 0x1000 ) /*0x21d2a9*/
            {
              v13 = *(void **)(v17 - 8); /*0x21d2af*/
              if ( (unsigned __int64)(v17 - (_QWORD)v13 - 8) > 0x1F ) /*0x21d2be*/
                invoke_watson(0, 0, 0, 0, 0); /*0x21d390*/
            }
            j_j_free(v13); /*0x21d2c4*/
          }
          v18 = 0; /*0x21d2c9*/
          v19 = 15; /*0x21d2ce*/
          LOBYTE(v17) = 0; /*0x21d2d7*/
          if ( v12 && v12[255] - v12[256] < 10 && v12[233] - v12[232] == 100 ) /*0x21d301*/
          {
            v14 = qword_905FE0; /*0x21d303*/
            if ( !qword_905FE0 ) /*0x21d30d*/
            {
              v16 = operator new(0x3E8u); /*0x21d319*/
              qword_905FE0 = sub_2D2B40(v16); /*0x21d329*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x21d333*/
              v14 = qword_905FE0; /*0x21d336*/
            }
            if ( GameStatsManager_hasCompletedStarLevel(v14, (__int64)v12) ) /*0x21d340*/
              ++v2; /*0x21d349*/
          }
        }
      }
    }
  }
  return v2; /*0x21d35a*/
}

// [24/86] Address: 0x21d3a0
// Method: GameLevelManager::getCompletedEventLevels
// Hidden C++ exception states: #wind=2
__int64 __fastcall GameLevelManager_getCompletedEventLevels(__int64 a1, int a2, int a3)
{
  unsigned int v6; // esi
  struct cocos2d::CCArray *v7; // rax
  unsigned int *v8; // rdi
  __int64 v9; // rax
  cocos2d::CCString **v10; // rdi
  cocos2d::CCString **i; // rbp
  cocos2d::CCString *v12; // rbx
  const char *CString; // rax
  __int64 v14; // r8
  __int64 v15; // rax
  _DWORD *v16; // rbx
  void *v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  void *v21; // [rsp+30h] [rbp-58h]
  __int128 v22; // [rsp+38h] [rbp-50h] BYREF
  __int64 v23; // [rsp+48h] [rbp-40h]
  unsigned __int64 v24; // [rsp+50h] [rbp-38h]

  v6 = 0; /*0x21d3d7*/
  v7 = cocos2d::CCDictionary::allKeys(*(cocos2d::CCDictionary **)(a1 + 944)); /*0x21d3e1*/
  if ( v7 ) /*0x21d3ea*/
  {
    v8 = (unsigned int *)*((_QWORD *)v7 + 7); /*0x21d3f0*/
    v9 = *v8; /*0x21d3f4*/
    if ( (_DWORD)v9 ) /*0x21d3f8*/
    {
      v10 = (cocos2d::CCString **)*((_QWORD *)v8 + 2); /*0x21d3fe*/
      for ( i = &v10[v9 - 1]; v10 <= i; ++v10 ) /*0x21d40d*/
      {
        v12 = *v10; /*0x21d413*/
        if ( !*v10 ) /*0x21d413*/
          break; /*0x21d419*/
        if ( (int)cocos2d::CCString::intValue(*v10) > 200000 ) /*0x21d42d*/
        {
          CString = cocos2d::CCString::getCString(v12); /*0x21d436*/
          v22 = 0; /*0x21d43f*/
          v23 = 0; /*0x21d444*/
          v24 = 0; /*0x21d449*/
          v14 = -1; /*0x21d44e*/
          do /*0x21d458*/
            ++v14; /*0x21d455*/
          while ( CString[v14] ); /*0x21d458*/
          sub_3C230(&v22); /*0x21d467*/
          v15 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(a1 + 944), &v22); /*0x21d479*/
          v16 = (_DWORD *)_RTDynamicCast( /*0x21d49c*/
                            v15,
                            0,
                            &cocos2d::CCObject `RTTI Type Descriptor',
                            &GJGameLevel `RTTI Type Descriptor',
                            0);
          if ( v24 > 0xF ) /*0x21d4a8*/
          {
            v17 = (void *)v22; /*0x21d4ad*/
            if ( v24 + 1 >= 0x1000 ) /*0x21d4bc*/
            {
              v17 = *(void **)(v22 - 8); /*0x21d4c2*/
              if ( (unsigned __int64)(v22 - (_QWORD)v17 - 8) > 0x1F ) /*0x21d4d1*/
                invoke_watson(0, 0, 0, 0, 0); /*0x21d5ac*/
            }
            j_j_free(v17); /*0x21d4d7*/
          }
          v23 = 0; /*0x21d4dc*/
          v24 = 15; /*0x21d4e1*/
          LOBYTE(v22) = 0; /*0x21d4ea*/
          if ( v16 ) /*0x21d4f2*/
          {
            v18 = v16[255] - v16[256]; /*0x21d4fa*/
            if ( v18 >= a2 && v18 <= a3 && v16[233] - v16[232] == 100 ) /*0x21d519*/
            {
              v19 = qword_905FE0; /*0x21d51b*/
              if ( !qword_905FE0 ) /*0x21d525*/
              {
                v21 = operator new(0x3E8u); /*0x21d531*/
                qword_905FE0 = sub_2D2B40(v21); /*0x21d541*/
                (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x21d54b*/
                v19 = qword_905FE0; /*0x21d54e*/
              }
              if ( GameStatsManager_hasCompletedStarLevel(v19, (__int64)v16) ) /*0x21d558*/
                ++v6; /*0x21d561*/
            }
          }
        }
      }
    }
  }
  return v6; /*0x21d572*/
}

// [25/86] Address: 0x21e440
// Method: GameLevelManager::markItemAsLiked
// Hidden C++ exception states: #wind=4
double __fastcall GameLevelManager_markItemAsLiked(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v8; // rbx
  __int64 v9; // r8
  void *v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rax
  void *v15; // rcx
  void *v16; // rcx
  void *Block[2]; // [rsp+38h] [rbp-70h] BYREF
  __m128i si128; // [rsp+48h] [rbp-60h]
  void *v20[2]; // [rsp+58h] [rbp-50h] BYREF
  __int128 v21; // [rsp+68h] [rbp-40h]

  if ( a2 ) /*0x21e471*/
  {
    GameLevelManager_makeTimeStamp(a1, a4); /*0x21e47a*/
    *(_OWORD *)Block = 0; /*0x21e482*/
    si128 = 0; /*0x21e48a*/
    v8 = -1; /*0x21e490*/
    v9 = -1; /*0x21e497*/
    do /*0x21e4a3*/
      ++v9; /*0x21e4a0*/
    while ( *(_BYTE *)(a4 + v9) ); /*0x21e4a3*/
    sub_3C230(Block); /*0x21e4b2*/
    cocos2d::CCDictionary::setObject(*(_QWORD *)(a1 + 1152), a2, Block); /*0x21e4c7*/
    if ( si128.m128i_i64[1] > 0xFuLL ) /*0x21e4d7*/
    {
      v10 = Block[0]; /*0x21e4dc*/
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x21e4eb*/
      {
        v10 = (void *)*((_QWORD *)Block[0] - 1); /*0x21e4f1*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v10 - 8) > 0x1F ) /*0x21e500*/
          invoke_watson(0, 0, 0, 0, 0); /*0x21e515*/
      }
      j_j_free(v10); /*0x21e51c*/
    }
    *(_OWORD *)v20 = 0; /*0x21e524*/
    v21 = 0; /*0x21e52c*/
    v11 = -1; /*0x21e532*/
    do /*0x21e538*/
      ++v11; /*0x21e535*/
    while ( *(_BYTE *)(a4 + v11) ); /*0x21e538*/
    sub_3C230(v20); /*0x21e547*/
    v12 = a3; /*0x21e54d*/
    if ( a3[3] > 0xFu ) /*0x21e555*/
      v12 = (_QWORD *)*a3; /*0x21e557*/
    *(_OWORD *)Block = 0; /*0x21e55d*/
    si128 = 0; /*0x21e565*/
    do /*0x21e573*/
      ++v8; /*0x21e570*/
    while ( *((_BYTE *)v12 + v8) ); /*0x21e573*/
    sub_3C230(Block); /*0x21e581*/
    v13 = *(_QWORD *)(a1 + 1160); /*0x21e587*/
    v14 = cocos2d::CCString::create(Block); /*0x21e593*/
    cocos2d::CCDictionary::setObject(v13, v14, v20); /*0x21e5a4*/
    if ( si128.m128i_i64[1] > 0xFuLL ) /*0x21e5b4*/
    {
      v15 = Block[0]; /*0x21e5b9*/
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x21e5c8*/
      {
        v15 = (void *)*((_QWORD *)Block[0] - 1); /*0x21e5ce*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v15 - 8) > 0x1F ) /*0x21e5dd*/
          invoke_watson(0, 0, 0, 0, 0); /*0x21e5f2*/
      }
      j_j_free(v15); /*0x21e5f9*/
    }
    si128 = _mm_load_si128((const __m128i *)&Size); /*0x21e606*/
    LOBYTE(Block[0]) = 0; /*0x21e60c*/
    if ( *((_QWORD *)&v21 + 1) > 0xFu ) /*0x21e61a*/
    {
      v16 = v20[0]; /*0x21e61f*/
      if ( (unsigned __int64)(*((_QWORD *)&v21 + 1) + 1LL) >= 0x1000 ) /*0x21e62e*/
      {
        v16 = (void *)*((_QWORD *)v20[0] - 1); /*0x21e634*/
        if ( (unsigned __int64)((char *)v20[0] - (char *)v16 - 8) > 0x1F ) /*0x21e643*/
          invoke_watson(0, 0, 0, 0, 0); /*0x21e658*/
      }
      j_j_free(v16); /*0x21e65f*/
    }
  }
  return sub_3C310(a3); /*0x21e66d*/
}

// [26/86] Address: 0x21eaf0
// Method: GameLevelManager::makeTimeStamp
// Hidden C++ exception states: #wind=1
void __fastcall GameLevelManager_makeTimeStamp(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rbx
  struct cocos2d::CCString *v5; // rax
  void *v6; // rcx
  struct __timeb64 Time; // [rsp+30h] [rbp-48h] BYREF
  void *Block[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v9; // [rsp+50h] [rbp-28h]

  *(_OWORD *)Block = 0; /*0x21eb0b*/
  v9 = 0; /*0x21eb13*/
  v3 = -1; /*0x21eb19*/
  do /*0x21eb23*/
    ++v3; /*0x21eb20*/
  while ( *(_BYTE *)(a2 + v3) ); /*0x21eb23*/
  sub_3C230(Block); /*0x21eb2f*/
  ftime64(&Time); /*0x21eb3a*/
  v4 = *(_QWORD *)(a1 + 1056); /*0x21eb40*/
  v5 = cocos2d::CCString::createWithFormat("%f", (double)Time.millitm / 1000.0 + (double)SLODWORD(Time.time)); /*0x21eb76*/
  cocos2d::CCDictionary::setObject(v4, v5, Block); /*0x21eb87*/
  if ( *((_QWORD *)&v9 + 1) > 0xFu ) /*0x21eb97*/
  {
    v6 = Block[0]; /*0x21eb9c*/
    if ( (unsigned __int64)(*((_QWORD *)&v9 + 1) + 1LL) >= 0x1000 ) /*0x21ebab*/
    {
      v6 = (void *)*((_QWORD *)Block[0] - 1); /*0x21ebb1*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v6 - 8) > 0x1F ) /*0x21ebc0*/
        invoke_watson(0, 0, 0, 0, 0); /*0x21ebd5*/
    }
    j_j_free(v6); /*0x21ebdc*/
  }
}

// [27/86] Address: 0x21f0e0
// Method: GameLevelManager::limitSavedLevels
// Hidden C++ exception states: #wind=4
unsigned int __fastcall GameLevelManager_limitSavedLevels(__int64 a1)
{
  cocos2d::CCArray *v2; // rsi
  cocos2d::CCArray *v3; // rbp
  char v4; // r14
  unsigned int v5; // edi
  cocos2d::CCString *v6; // rax
  const char *CString; // rax
  __int64 v8; // r8
  __int64 v9; // rbx
  void *v10; // rcx
  int v11; // edx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // ebp
  __int64 v15; // rcx
  signed int i; // ebx
  __int64 v17; // rcx
  unsigned int result; // eax
  cocos2d::CCArray *v19; // r14
  unsigned int v20; // edi
  unsigned int v21; // eax
  cocos2d::CCString *v22; // rax
  const char *v23; // rax
  __int64 v24; // r8
  __int64 v25; // rsi
  void *v26; // rcx
  void *v27; // [rsp+30h] [rbp-58h]
  void *v28; // [rsp+30h] [rbp-58h]
  void *v29; // [rsp+30h] [rbp-58h]
  __int128 v30; // [rsp+38h] [rbp-50h] BYREF
  __int64 v31; // [rsp+48h] [rbp-40h]
  unsigned __int64 v32; // [rsp+50h] [rbp-38h]

  v2 = (cocos2d::CCArray *)sub_21BE00(a1, 0, 0); /*0x21f118*/
  v3 = cocos2d::CCDictionary::allKeys(*(cocos2d::CCDictionary **)(a1 + 944)); /*0x21f128*/
  v4 = 0; /*0x21f12b*/
  v5 = 0; /*0x21f131*/
  if ( !cocos2d::CCArray::count(v3) ) /*0x21f146*/
    goto LABEL_20; /*0x21f146*/
  do /*0x21f267*/
  {
    v6 = cocos2d::CCArray::objectAtIndex(v3, v5); /*0x21f155*/
    CString = cocos2d::CCString::getCString(v6); /*0x21f15e*/
    v30 = 0; /*0x21f167*/
    v31 = 0; /*0x21f16c*/
    v32 = 0; /*0x21f171*/
    v8 = -1; /*0x21f176*/
    do /*0x21f183*/
      ++v8; /*0x21f180*/
    while ( CString[v8] ); /*0x21f183*/
    sub_3C230(&v30); /*0x21f192*/
    v9 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(a1 + 944), &v30); /*0x21f1aa*/
    if ( v32 > 0xF ) /*0x21f1b6*/
    {
      v10 = (void *)v30; /*0x21f1bb*/
      if ( v32 + 1 >= 0x1000 ) /*0x21f1ca*/
      {
        v10 = *(void **)(v30 - 8); /*0x21f1d0*/
        if ( (unsigned __int64)(v30 - (_QWORD)v10 - 8) > 0x1F ) /*0x21f1df*/
          invoke_watson(0, 0, 0, 0, 0); /*0x21f508*/
      }
      j_j_free(v10); /*0x21f1e5*/
    }
    v31 = 0; /*0x21f1ea*/
    v32 = 15; /*0x21f1ef*/
    LOBYTE(v30) = 0; /*0x21f1f8*/
    if ( !*(_BYTE *)(v9 + 1185) ) /*0x21f1fd*/
    {
      v11 = *(_DWORD *)(v9 + 992) - *(_DWORD *)(v9 + 996); /*0x21f20c*/
      if ( v11 > 0 ) /*0x21f214*/
      {
        if ( v11 <= 200000 ) /*0x21f21c*/
        {
          if ( v11 <= 100000 ) /*0x21f22c*/
          {
            v12 = *(_DWORD *)(a1 + 960); /*0x21f4ed*/
          }
          else
          {
            if ( v11 <= 100000 ) /*0x21f227*/
            {
              if ( v11 > 100000 != 2 ) /*0x21f23e*/
              {
LABEL_16:
                cocos2d::CCArray::addObject(v2, (struct cocos2d::CCObject *)v9); /*0x21f24b*/
                v4 = 1; /*0x21f257*/
                goto LABEL_17; /*0x21f257*/
              }
              goto LABEL_14; /*0x21f23e*/
            }
            v12 = *(_DWORD *)(a1 + 972); /*0x21f4e1*/
          }
LABEL_15:
          if ( v11 == v12 ) /*0x21f249*/
            goto LABEL_17; /*0x21f249*/
          goto LABEL_16; /*0x21f249*/
        }
LABEL_14:
        v12 = *(_DWORD *)(a1 + 984); /*0x21f240*/
        goto LABEL_15; /*0x21f240*/
      }
    }
LABEL_17:
    ++v5; /*0x21f25a*/
  }
  while ( v5 < cocos2d::CCArray::count(v3) ); /*0x21f267*/
  if ( v4 ) /*0x21f270*/
    qsort(*(void **)(*((_QWORD *)v2 + 7) + 16LL), **((unsigned int **)v2 + 7), 8u, sub_215FC0); /*0x21f289*/
LABEL_20:
  v13 = qword_905FD0; /*0x21f28f*/
  if ( !qword_905FD0 ) /*0x21f299*/
  {
    v27 = operator new(0x6E8u); /*0x21f2a5*/
    qword_905FD0 = sub_2723A0(v27); /*0x21f2b3*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x21f2c4*/
    v13 = qword_905FD0; /*0x21f2c6*/
  }
  v14 = 10; /*0x21f2d9*/
  if ( GameManager_getGameVariable(v13, "0042") ) /*0x21f2d4*/
    v14 = 100; /*0x21f2e5*/
  v15 = qword_905FD0; /*0x21f2e8*/
  if ( !qword_905FD0 ) /*0x21f2f2*/
  {
    v28 = operator new(0x6E8u); /*0x21f2fe*/
    qword_905FD0 = sub_2723A0(v28); /*0x21f30c*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x21f31d*/
    v15 = qword_905FD0; /*0x21f31f*/
  }
  if ( GameManager_getGameVariable(v15, "0119") ) /*0x21f32d*/
    v14 = -1; /*0x21f334*/
  for ( i = 0; i < cocos2d::CCArray::count(v2); ++i ) /*0x21f33e*/
    *((_BYTE *)cocos2d::CCArray::objectAtIndex(v2, i) + 1184) = i > v14; /*0x21f360*/
  v17 = qword_905FD0; /*0x21f375*/
  if ( !qword_905FD0 ) /*0x21f37f*/
  {
    v29 = operator new(0x6E8u); /*0x21f38b*/
    qword_905FD0 = sub_2723A0(v29); /*0x21f399*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x21f3aa*/
    v17 = qword_905FD0; /*0x21f3ac*/
  }
  result = GameManager_getGameVariable(v17, "0127"); /*0x21f3ba*/
  if ( !(_BYTE)result ) /*0x21f3c1*/
  {
    v19 = cocos2d::CCDictionary::allKeys(*(cocos2d::CCDictionary **)(a1 + 1032)); /*0x21f3d4*/
    v20 = 0; /*0x21f3d7*/
    result = cocos2d::CCArray::count(v19); /*0x21f3dd*/
    if ( result ) /*0x21f3e5*/
    {
      do /*0x21f4b0*/
      {
        v21 = cocos2d::CCArray::count(v19); /*0x21f3f3*/
        v22 = cocos2d::CCArray::objectAtIndex(v19, v21 + -1 - v20); /*0x21f405*/
        v23 = cocos2d::CCString::getCString(v22); /*0x21f40e*/
        v30 = 0; /*0x21f417*/
        v31 = 0; /*0x21f41c*/
        v32 = 0; /*0x21f421*/
        v24 = -1; /*0x21f426*/
        do /*0x21f433*/
          ++v24; /*0x21f430*/
        while ( v23[v24] ); /*0x21f433*/
        sub_3C230(&v30); /*0x21f442*/
        v25 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(a1 + 1032), &v30); /*0x21f45a*/
        if ( v32 > 0xF ) /*0x21f466*/
        {
          v26 = (void *)v30; /*0x21f46b*/
          if ( v32 + 1 >= 0x1000 ) /*0x21f47a*/
          {
            v26 = *(void **)(v30 - 8); /*0x21f480*/
            if ( (unsigned __int64)(v30 - (_QWORD)v26 - 8) > 0x1F ) /*0x21f48f*/
              invoke_watson(0, 0, 0, 0, 0); /*0x21f51e*/
          }
          j_j_free(v26); /*0x21f491*/
        }
        *(_BYTE *)(v25 + 1184) = i++ > v14; /*0x21f49b*/
        ++v20; /*0x21f4a3*/
        result = cocos2d::CCArray::count(v19); /*0x21f4a8*/
      }
      while ( v20 < result ); /*0x21f4b0*/
    }
  }
  return result; /*0x21f4b6*/
}

// [28/86] Address: 0x2214e0
// Method: GameLevelManager::firstSetup
void __fastcall GameLevelManager_firstSetup(_QWORD *a1)
{
  cocos2d::CCObject *v2; // rax
  cocos2d::CCObject *v3; // rdi
  cocos2d::CCObject *v4; // rcx
  cocos2d::CCObject *v5; // rax
  cocos2d::CCObject *v6; // rdi
  cocos2d::CCObject *v7; // rcx
  cocos2d::CCObject *v8; // rax
  cocos2d::CCObject *v9; // rdi
  cocos2d::CCObject *v10; // rcx
  cocos2d::CCObject *v11; // rax
  cocos2d::CCObject *v12; // rdi
  cocos2d::CCObject *v13; // rcx
  cocos2d::CCObject *v14; // rax
  cocos2d::CCObject *v15; // rdi
  cocos2d::CCObject *v16; // rcx
  cocos2d::CCObject *v17; // rax
  cocos2d::CCObject *v18; // rdi
  cocos2d::CCObject *v19; // rcx
  cocos2d::CCObject *v20; // rax
  cocos2d::CCObject *v21; // rdi
  cocos2d::CCObject *v22; // rcx
  cocos2d::CCObject *v23; // rax
  cocos2d::CCObject *v24; // rdi
  cocos2d::CCObject *v25; // rcx
  cocos2d::CCObject *v26; // rax
  cocos2d::CCObject *v27; // rdi
  cocos2d::CCObject *v28; // rcx
  cocos2d::CCObject *v29; // rax
  cocos2d::CCObject *v30; // rdi
  cocos2d::CCObject *v31; // rcx
  cocos2d::CCObject *v32; // rax
  cocos2d::CCObject *v33; // rdi
  cocos2d::CCObject *v34; // rcx
  cocos2d::CCObject *v35; // rax
  cocos2d::CCObject *v36; // rdi
  cocos2d::CCObject *v37; // rcx
  cocos2d::CCObject *v38; // rax
  cocos2d::CCObject *v39; // rdi
  cocos2d::CCObject *v40; // rcx
  cocos2d::CCObject *v41; // rax
  cocos2d::CCObject *v42; // rdi
  cocos2d::CCObject *v43; // rcx
  cocos2d::CCObject *v44; // rax
  cocos2d::CCObject *v45; // rdi
  cocos2d::CCObject *v46; // rcx

  v2 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2214ed*/
  v3 = v2; /*0x2214f3*/
  if ( (cocos2d::CCObject *)a1[105] != v2 ) /*0x2214fd*/
  {
    if ( v2 ) /*0x221502*/
      cocos2d::CCObject::retain(v2); /*0x221507*/
    v4 = (cocos2d::CCObject *)a1[105]; /*0x22150d*/
    if ( v4 ) /*0x221517*/
      cocos2d::CCObject::release(v4); /*0x221519*/
    a1[105] = v3; /*0x22151f*/
  }
  if ( !a1[111] ) /*0x221526*/
  {
    v5 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x221530*/
    v6 = v5; /*0x221536*/
    if ( (cocos2d::CCObject *)a1[111] != v5 ) /*0x221540*/
    {
      if ( v5 ) /*0x221545*/
        cocos2d::CCObject::retain(v5); /*0x22154a*/
      v7 = (cocos2d::CCObject *)a1[111]; /*0x221550*/
      if ( v7 ) /*0x22155a*/
        cocos2d::CCObject::release(v7); /*0x22155c*/
      a1[111] = v6; /*0x221562*/
    }
  }
  if ( !a1[106] ) /*0x221569*/
  {
    v8 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x221573*/
    v9 = v8; /*0x221579*/
    if ( (cocos2d::CCObject *)a1[106] != v8 ) /*0x221583*/
    {
      if ( v8 ) /*0x221588*/
        cocos2d::CCObject::retain(v8); /*0x22158d*/
      v10 = (cocos2d::CCObject *)a1[106]; /*0x221593*/
      if ( v10 ) /*0x22159d*/
        cocos2d::CCObject::release(v10); /*0x22159f*/
      a1[106] = v9; /*0x2215a5*/
    }
  }
  if ( !a1[113] ) /*0x2215ac*/
  {
    v11 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2215b6*/
    v12 = v11; /*0x2215bc*/
    if ( (cocos2d::CCObject *)a1[113] != v11 ) /*0x2215c6*/
    {
      if ( v11 ) /*0x2215cb*/
        cocos2d::CCObject::retain(v11); /*0x2215d0*/
      v13 = (cocos2d::CCObject *)a1[113]; /*0x2215d6*/
      if ( v13 ) /*0x2215e0*/
        cocos2d::CCObject::release(v13); /*0x2215e2*/
      a1[113] = v12; /*0x2215e8*/
    }
  }
  if ( !a1[114] ) /*0x2215ef*/
  {
    v14 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2215f9*/
    v15 = v14; /*0x2215ff*/
    if ( (cocos2d::CCObject *)a1[114] != v14 ) /*0x221609*/
    {
      if ( v14 ) /*0x22160e*/
        cocos2d::CCObject::retain(v14); /*0x221613*/
      v16 = (cocos2d::CCObject *)a1[114]; /*0x221619*/
      if ( v16 ) /*0x221623*/
        cocos2d::CCObject::release(v16); /*0x221625*/
      a1[114] = v15; /*0x22162b*/
    }
  }
  if ( !a1[115] ) /*0x221632*/
  {
    v17 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x22163c*/
    v18 = v17; /*0x221642*/
    if ( (cocos2d::CCObject *)a1[115] != v17 ) /*0x22164c*/
    {
      if ( v17 ) /*0x221651*/
        cocos2d::CCObject::retain(v17); /*0x221656*/
      v19 = (cocos2d::CCObject *)a1[115]; /*0x22165c*/
      if ( v19 ) /*0x221666*/
        cocos2d::CCObject::release(v19); /*0x221668*/
      a1[115] = v18; /*0x22166e*/
    }
  }
  if ( !a1[112] ) /*0x221675*/
  {
    v20 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x22167f*/
    v21 = v20; /*0x221685*/
    if ( (cocos2d::CCObject *)a1[112] != v20 ) /*0x22168f*/
    {
      if ( v20 ) /*0x221694*/
        cocos2d::CCObject::retain(v20); /*0x221699*/
      v22 = (cocos2d::CCObject *)a1[112]; /*0x22169f*/
      if ( v22 ) /*0x2216a9*/
        cocos2d::CCObject::release(v22); /*0x2216ab*/
      a1[112] = v21; /*0x2216b1*/
    }
  }
  if ( !a1[116] ) /*0x2216b8*/
  {
    v23 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2216c2*/
    v24 = v23; /*0x2216c8*/
    if ( (cocos2d::CCObject *)a1[116] != v23 ) /*0x2216d2*/
    {
      if ( v23 ) /*0x2216d7*/
        cocos2d::CCObject::retain(v23); /*0x2216dc*/
      v25 = (cocos2d::CCObject *)a1[116]; /*0x2216e2*/
      if ( v25 ) /*0x2216ec*/
        cocos2d::CCObject::release(v25); /*0x2216ee*/
      a1[116] = v24; /*0x2216f4*/
    }
  }
  if ( !a1[117] ) /*0x2216fb*/
  {
    v26 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x221705*/
    v27 = v26; /*0x22170b*/
    if ( (cocos2d::CCObject *)a1[117] != v26 ) /*0x221715*/
    {
      if ( v26 ) /*0x22171a*/
        cocos2d::CCObject::retain(v26); /*0x22171f*/
      v28 = (cocos2d::CCObject *)a1[117]; /*0x221725*/
      if ( v28 ) /*0x22172f*/
        cocos2d::CCObject::release(v28); /*0x221731*/
      a1[117] = v27; /*0x221737*/
    }
  }
  v29 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x22173e*/
  v30 = v29; /*0x221744*/
  if ( (cocos2d::CCObject *)a1[107] != v29 ) /*0x22174e*/
  {
    if ( v29 ) /*0x221753*/
      cocos2d::CCObject::retain(v29); /*0x221758*/
    v31 = (cocos2d::CCObject *)a1[107]; /*0x22175e*/
    if ( v31 ) /*0x221768*/
      cocos2d::CCObject::release(v31); /*0x22176a*/
    a1[107] = v30; /*0x221770*/
  }
  v32 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x221777*/
  v33 = v32; /*0x22177d*/
  if ( (cocos2d::CCObject *)a1[118] != v32 ) /*0x221787*/
  {
    if ( v32 ) /*0x22178c*/
      cocos2d::CCObject::retain(v32); /*0x221791*/
    v34 = (cocos2d::CCObject *)a1[118]; /*0x221797*/
    if ( v34 ) /*0x2217a1*/
      cocos2d::CCObject::release(v34); /*0x2217a3*/
    a1[118] = v33; /*0x2217a9*/
  }
  v35 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2217b0*/
  v36 = v35; /*0x2217b6*/
  if ( (cocos2d::CCObject *)a1[129] != v35 ) /*0x2217c0*/
  {
    if ( v35 ) /*0x2217c5*/
      cocos2d::CCObject::retain(v35); /*0x2217ca*/
    v37 = (cocos2d::CCObject *)a1[129]; /*0x2217d0*/
    if ( v37 ) /*0x2217da*/
      cocos2d::CCObject::release(v37); /*0x2217dc*/
    a1[129] = v36; /*0x2217e2*/
  }
  v38 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x2217e9*/
  v39 = v38; /*0x2217ef*/
  if ( (cocos2d::CCObject *)a1[108] != v38 ) /*0x2217f9*/
  {
    if ( v38 ) /*0x2217fe*/
      cocos2d::CCObject::retain(v38); /*0x221803*/
    v40 = (cocos2d::CCObject *)a1[108]; /*0x221809*/
    if ( v40 ) /*0x221813*/
      cocos2d::CCObject::release(v40); /*0x221815*/
    a1[108] = v39; /*0x22181b*/
  }
  v41 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x221822*/
  v42 = v41; /*0x221828*/
  if ( (cocos2d::CCObject *)a1[109] != v41 ) /*0x221832*/
  {
    if ( v41 ) /*0x221837*/
      cocos2d::CCObject::retain(v41); /*0x22183c*/
    v43 = (cocos2d::CCObject *)a1[109]; /*0x221842*/
    if ( v43 ) /*0x22184c*/
      cocos2d::CCObject::release(v43); /*0x22184e*/
    a1[109] = v42; /*0x221854*/
  }
  v44 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x22185b*/
  v45 = v44; /*0x221861*/
  if ( (cocos2d::CCObject *)a1[110] != v44 ) /*0x22186b*/
  {
    if ( v44 ) /*0x221870*/
      cocos2d::CCObject::retain(v44); /*0x221875*/
    v46 = (cocos2d::CCObject *)a1[110]; /*0x22187b*/
    if ( v46 ) /*0x221885*/
      cocos2d::CCObject::release(v46); /*0x221887*/
    a1[110] = v45; /*0x22188d*/
  }
}

// [29/86] Address: 0x2218a0
// Method: GameLevelManager::encodeDataTo
// Hidden C++ exception states: #wind=1
void __fastcall GameLevelManager_encodeDataTo(__int64 a1, DS_Dictionary *a2)
{
  __int64 v4; // rcx
  cocos2d::CCArray *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 i; // rbx
  __int64 v9; // rax
  void *v10; // [rsp+30h] [rbp+8h]

  DS_Dictionary::setDictForKey(a2, "GLM_01", *(struct cocos2d::CCDictionary **)(a1 + 840)); /*0x2218cb*/
  GameLevelManager_limitSavedLevels(a1); /*0x2218d4*/
  sub_21F530(a1); /*0x2218dc*/
  sub_21C090(a1); /*0x2218e4*/
  sub_21C090(a1); /*0x2218ec*/
  DS_Dictionary::setDictForKey(a2, "GLM_03", *(struct cocos2d::CCDictionary **)(a1 + 856)); /*0x221902*/
  sub_220D90(a1); /*0x22190b*/
  DS_Dictionary::setDictForKey(a2, "GLM_10", *(struct cocos2d::CCDictionary **)(a1 + 944)); /*0x221921*/
  DS_Dictionary::setIntegerForKey(a2, "GLM_11", *(_DWORD *)(a1 + 960)); /*0x221938*/
  DS_Dictionary::setIntegerForKey(a2, "GLM_17", *(_DWORD *)(a1 + 972)); /*0x22194f*/
  DS_Dictionary::setIntegerForKey(a2, "GLM_23", *(_DWORD *)(a1 + 984)); /*0x221966*/
  DS_Dictionary::setIntegerForKey(a2, "GLM_24", *(_DWORD *)(a1 + 1012)); /*0x22197d*/
  DS_Dictionary::setIntegerForKey(a2, "GLM_25", *(_DWORD *)(a1 + 1016)); /*0x221994*/
  DS_Dictionary::setIntegerForKey(a2, "GLM_26", *(_DWORD *)(a1 + 1020)); /*0x2219ab*/
  DS_Dictionary::setIntegerForKey(a2, "GLM_27", *(_DWORD *)(a1 + 1024)); /*0x2219c2*/
  DS_Dictionary::setIntegerForKey(a2, "GLM_28", *(_BYTE *)(a1 + 1028) != 0); /*0x2219e0*/
  DS_Dictionary::setDictForKey(a2, "GLM_16", *(struct cocos2d::CCDictionary **)(a1 + 1032)); /*0x2219f7*/
  v5 = (cocos2d::CCArray *)cocos2d::CCArray::create(v4); /*0x221a03*/
  v6 = *(_QWORD *)(a1 + 880); /*0x221a06*/
  if ( v6 ) /*0x221a10*/
  {
    v7 = *(_QWORD *)(v6 + 56); /*0x221a12*/
    if ( v7 ) /*0x221a19*/
    {
      for ( i = *(_QWORD *)(v7 + 288); ; i = *(_QWORD *)(i + 288) ) /*0x221a1b*/
      {
        cocos2d::CCArray::addObject(v5, *(struct cocos2d::CCObject **)(v7 + 264)); /*0x221a3a*/
        v7 = i; /*0x221a40*/
        if ( !i ) /*0x221a46*/
          break; /*0x221a46*/
      }
    }
  }
  DS_Dictionary::setArrayForKey(a2, "GLM_22", v5); /*0x221a5e*/
  DS_Dictionary::setBoolMapForKey(a2, "GLM_09", a1 + 1040); /*0x221a75*/
  v9 = qword_905FD0; /*0x221a7b*/
  if ( !qword_905FD0 ) /*0x221a85*/
  {
    v10 = operator new(0x6E8u); /*0x221a91*/
    qword_905FD0 = sub_2723A0(v10); /*0x221a9f*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x221ab0*/
    v9 = qword_905FD0; /*0x221ab2*/
  }
  if ( !*(_BYTE *)(v9 + 354) ) /*0x221ab9*/
  {
    DS_Dictionary::setDictForKey(a2, "GLM_07", *(struct cocos2d::CCDictionary **)(a1 + 888)); /*0x221ad3*/
    DS_Dictionary::setDictForKey(a2, "GLM_14", *(struct cocos2d::CCDictionary **)(a1 + 920)); /*0x221aea*/
  }
  DS_Dictionary::setDictForKey(a2, "GLM_12", *(struct cocos2d::CCDictionary **)(a1 + 896)); /*0x221b01*/
  DS_Dictionary::setDictForKey(a2, "GLM_13", *(struct cocos2d::CCDictionary **)(a1 + 904)); /*0x221b18*/
  DS_Dictionary::setDictForKey(a2, "GLM_15", *(struct cocos2d::CCDictionary **)(a1 + 912)); /*0x221b2f*/
  DS_Dictionary::setDictForKey(a2, "GLM_06", *(struct cocos2d::CCDictionary **)(a1 + 872)); /*0x221b46*/
  DS_Dictionary::setDictForKey(a2, "GLM_08", *(struct cocos2d::CCDictionary **)(a1 + 848)); /*0x221b5d*/
  DS_Dictionary::setDictForKey(a2, "GLM_18", *(struct cocos2d::CCDictionary **)(a1 + 928)); /*0x221b74*/
  DS_Dictionary::setDictForKey(a2, "GLM_19", *(struct cocos2d::CCDictionary **)(a1 + 936)); /*0x221b8b*/
  DS_Dictionary::setArrayForKey(a2, "GLM_20", *(struct cocos2d::CCArray **)(a1 + 1656)); /*0x221bb6*/
}

// [30/86] Address: 0x223220
// Method: GameLevelManager::getBasePostString
// Hidden C++ exception states: #wind=5
_QWORD *__fastcall GameLevelManager_getBasePostString(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  const char *v5; // r9
  cocos2d::CCString *v6; // rax
  const char *CString; // rax
  size_t v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  const char *v14; // rbx
  __int64 v15; // rax
  cocos2d::CCString *v16; // rax
  char *v17; // rax
  void *v19; // [rsp+38h] [rbp-60h]
  void *v20; // [rsp+38h] [rbp-60h]
  _QWORD v21[4]; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v22[4]; // [rsp+68h] [rbp-30h] BYREF

  v3 = qword_905FD0; /*0x223252*/
  if ( !qword_905FD0 ) /*0x22325c*/
  {
    v19 = operator new(0x6E8u); /*0x223268*/
    qword_905FD0 = sub_2723A0(v19); /*0x223278*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x223282*/
    v3 = qword_905FD0; /*0x223285*/
  }
  sub_3E4F0(v21, v3 + 624); /*0x223298*/
  v4 = qword_905FD0; /*0x2232a5*/
  if ( !qword_905FD0 ) /*0x2232af*/
  {
    v20 = operator new(0x6E8u); /*0x2232bb*/
    qword_905FD0 = sub_2723A0(v20); /*0x2232cb*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2232d5*/
    v4 = qword_905FD0; /*0x2232d8*/
  }
  v5 = (const char *)v21; /*0x2232eb*/
  if ( v21[3] > 0xFu ) /*0x2232f6*/
    v5 = (const char *)v21[0]; /*0x2232f6*/
  v6 = cocos2d::CCString::createWithFormat( /*0x22331a*/
         "gameVersion=%i&binaryVersion=%i&udid=%s&uuid=%i&dvs=%i",
         22,
         51,
         v5,
         *(_DWORD *)(v4 + 692) - *(_DWORD *)(v4 + 696),
         3);
  CString = cocos2d::CCString::getCString(v6); /*0x223323*/
  *(_OWORD *)a2 = 0; /*0x22332c*/
  a2[2] = 0; /*0x22332f*/
  a2[3] = 0; /*0x223333*/
  v8 = -1; /*0x223337*/
  v9 = -1; /*0x22333e*/
  do /*0x223344*/
    ++v9; /*0x223341*/
  while ( CString[v9] ); /*0x223344*/
  sub_3C230(a2); /*0x223351*/
  sub_3C310(v21); /*0x223363*/
  v11 = GJAccountManager_sharedState(v10); /*0x22336d*/
  if ( *(_DWORD *)(v11 + 360) - *(_DWORD *)(v11 + 364) > 0 ) /*0x22337e*/
  {
    v12 = GJAccountManager_sharedState(v11); /*0x223384*/
    sub_3E4F0(v22, v12 + 376); /*0x223395*/
    v14 = (const char *)v22; /*0x2233a2*/
    if ( v22[3] > 0xFu ) /*0x2233b0*/
      v14 = (const char *)v22[0]; /*0x2233b0*/
    v15 = GJAccountManager_sharedState(v13); /*0x2233b6*/
    v16 = cocos2d::CCString::createWithFormat( /*0x2233d1*/
            "&accountID=%i&gjp2=%s",
            *(_DWORD *)(v15 + 360) - *(_DWORD *)(v15 + 364),
            v14);
    v17 = (char *)cocos2d::CCString::getCString(v16); /*0x2233da*/
    do /*0x2233e3*/
      ++v8; /*0x2233e0*/
    while ( v17[v8] ); /*0x2233e3*/
    sub_43D80(a2, v17, v8); /*0x2233f2*/
    sub_3C310(v22); /*0x2233fd*/
  }
  return a2; /*0x223405*/
}

// [31/86] Address: 0x2270f0
// Method: GameLevelManager::getDifficultyStr
// Hidden C++ exception states: #wind=1
__int64 __fastcall GameLevelManager_getDifficultyStr(
        __int64 a1,
        __int64 a2,
        char a3,
        char a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10)
{
  int v12; // ebp
  __int64 v13; // rdx
  int v14; // edi
  __int64 v15; // rsi
  char v16; // al
  cocos2d::CCString *v17; // rax
  char *CString; // rax
  size_t v19; // r8
  cocos2d::CCString *v20; // rax
  const char *v21; // rax
  void **v22; // rcx
  __int64 v23; // rdi
  size_t v24; // r8
  __int128 Buf2; // [rsp+28h] [rbp-80h] BYREF
  __int64 v27; // [rsp+38h] [rbp-70h]
  __int64 v28; // [rsp+40h] [rbp-68h]
  __int64 v29; // [rsp+48h] [rbp-60h]
  void *Buf1[2]; // [rsp+50h] [rbp-58h] BYREF
  __int128 v31; // [rsp+60h] [rbp-48h]

  v29 = a2; /*0x227125*/
  if ( a3 ) /*0x227132*/
  {
    *(_OWORD *)a2 = 0; /*0x227134*/
    *(_QWORD *)(a2 + 16) = 2; /*0x227137*/
    *(_QWORD *)(a2 + 24) = 15; /*0x22713f*/
    strcpy((char *)a2, "-1"); /*0x227147*/
    return a2; /*0x22714f*/
  }
  if ( a9 ) /*0x22715b*/
  {
    *(_OWORD *)a2 = 0; /*0x22715d*/
    *(_QWORD *)(a2 + 16) = 2; /*0x227160*/
    *(_QWORD *)(a2 + 24) = 15; /*0x227168*/
    strcpy((char *)a2, "-2"); /*0x227170*/
    return a2; /*0x227178*/
  }
  if ( a10 ) /*0x227184*/
  {
    *(_OWORD *)a2 = 0; /*0x227186*/
    *(_QWORD *)(a2 + 16) = 2; /*0x227189*/
    *(_QWORD *)(a2 + 24) = 15; /*0x227191*/
    strcpy((char *)a2, "-3"); /*0x227199*/
    return a2; /*0x2271a1*/
  }
  *(_OWORD *)Buf1 = 0; /*0x2271a6*/
  *(_QWORD *)&v31 = 0; /*0x2271ab*/
  *((_QWORD *)&v31 + 1) = 15; /*0x2271b0*/
  LOBYTE(Buf1[0]) = 0; /*0x2271b9*/
  v12 = 0; /*0x2271bd*/
  v13 = 0; /*0x2271bf*/
  v14 = 1; /*0x2271c1*/
  v15 = -1; /*0x2271c6*/
  do /*0x227280*/
  {
    switch ( v14 ) /*0x2271ed*/
    {
      case 1: /*0x2271ed*/
        v16 = a4; /*0x22721f*/
        break;
      case 2: /*0x2271ed*/
        v16 = a5; /*0x227215*/
        break;
      case 3: /*0x2271ed*/
        v16 = a6; /*0x22720f*/
        break;
      case 4: /*0x2271ed*/
        v16 = a7; /*0x227209*/
        break;
      case 5: /*0x2271ed*/
        v16 = a8; /*0x227203*/
        break;
      default:
        goto LABEL_24; /*0x227201*/
    }
    if ( v16 ) /*0x227225*/
    {
      if ( v12 > 0 ) /*0x227229*/
        sub_43D80(Buf1, &unk_709CE8, 1u); /*0x22723d*/
      v17 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, (unsigned int)v14); /*0x22724b*/
      CString = (char *)cocos2d::CCString::getCString(v17); /*0x227254*/
      v19 = -1; /*0x22725a*/
      do /*0x227263*/
        ++v19; /*0x227260*/
      while ( CString[v19] ); /*0x227263*/
      sub_43D80(Buf1, CString, v19); /*0x227272*/
      ++v12; /*0x227277*/
      v13 = (unsigned int)v14; /*0x227279*/
    }
LABEL_24:
    ++v14; /*0x22727b*/
  }
  while ( v14 <= 5 ); /*0x227280*/
  if ( v12 == 1 ) /*0x227289*/
  {
    v20 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v13); /*0x227292*/
    v21 = cocos2d::CCString::getCString(v20); /*0x22729b*/
    *(_OWORD *)a2 = 0; /*0x2272a4*/
    *(_QWORD *)(a2 + 16) = 0; /*0x2272a9*/
    *(_QWORD *)(a2 + 24) = 0; /*0x2272ad*/
    do /*0x2272b4*/
      ++v15; /*0x2272b1*/
    while ( v21[v15] ); /*0x2272b4*/
    sub_3C230(a2); /*0x2272c3*/
    sub_3C310(Buf1); /*0x2272ce*/
  }
  else
  {
    Buf2 = 0; /*0x2272db*/
    v27 = 0; /*0x2272e2*/
    v28 = 15; /*0x2272e7*/
    LOBYTE(Buf2) = 0; /*0x2272f0*/
    v22 = Buf1; /*0x2272f5*/
    if ( *((_QWORD *)&v31 + 1) > 0xFu ) /*0x227300*/
      v22 = (void **)Buf1[0]; /*0x227300*/
    v23 = v31; /*0x227306*/
    v24 = v31; /*0x22730b*/
    if ( (_QWORD)v31 ) /*0x227311*/
      v24 = 0; /*0x227311*/
    if ( memcmp(v22, &Buf2, v24) || v23 ) /*0x227326*/
    {
      *(_OWORD *)a2 = *(_OWORD *)Buf1; /*0x227354*/
      *(_OWORD *)(a2 + 16) = v31; /*0x22735c*/
    }
    else
    {
      *(_OWORD *)a2 = 0; /*0x22732b*/
      *(_QWORD *)(a2 + 16) = 1; /*0x22732e*/
      *(_QWORD *)(a2 + 24) = 15; /*0x227336*/
      *(_WORD *)a2 = 45; /*0x22733e*/
      sub_3C310(Buf1); /*0x227348*/
    }
  }
  return a2; /*0x227363*/
}

// [32/86] Address: 0x2273a0
// Method: GameLevelManager::getLengthStr
// Hidden C++ exception states: #wind=1
__int64 __fastcall GameLevelManager_getLengthStr(
        __int64 a1,
        __int64 a2,
        char a3,
        char a4,
        char a5,
        char a6,
        char a7,
        char a8)
{
  int v11; // ebp
  __int64 v12; // rdx
  int v13; // esi
  __int64 v14; // rdi
  char v15; // al
  cocos2d::CCString *v16; // rax
  char *CString; // rax
  size_t v18; // r8
  cocos2d::CCString *v19; // rax
  const char *v20; // rax
  void **v21; // rcx
  __int64 v22; // rdi
  size_t v23; // r8
  __int128 Buf2; // [rsp+28h] [rbp-80h] BYREF
  __int64 v26; // [rsp+38h] [rbp-70h]
  __int64 v27; // [rsp+40h] [rbp-68h]
  __int64 v28; // [rsp+48h] [rbp-60h]
  void *Buf1[2]; // [rsp+50h] [rbp-58h] BYREF
  __int128 v30; // [rsp+60h] [rbp-48h]

  v28 = a2; /*0x2273d9*/
  *(_OWORD *)Buf1 = 0; /*0x2273e4*/
  *(_QWORD *)&v30 = 0; /*0x2273e9*/
  *((_QWORD *)&v30 + 1) = 15; /*0x2273ee*/
  LOBYTE(Buf1[0]) = 0; /*0x2273f7*/
  v11 = 0; /*0x2273fc*/
  v12 = 0; /*0x2273ff*/
  v13 = 0; /*0x227402*/
  v14 = -1; /*0x22740c*/
  do /*0x2274c0*/
  {
    switch ( v13 ) /*0x22742e*/
    {
      case 0: /*0x22742e*/
        v15 = a3; /*0x227430*/
        break; /*0x227434*/
      case 1: /*0x22742e*/
        v15 = a4; /*0x227436*/
        break; /*0x22743a*/
      case 2: /*0x22742e*/
        v15 = a5; /*0x22743c*/
        break; /*0x227444*/
      case 3: /*0x22742e*/
        v15 = a6; /*0x227446*/
        break; /*0x22744e*/
      case 4: /*0x22742e*/
        v15 = a7; /*0x227450*/
        break; /*0x227458*/
      case 5: /*0x22742e*/
        v15 = a8; /*0x22745a*/
        break; /*0x22745a*/
    }
    if ( v15 ) /*0x227464*/
    {
      if ( v11 > 0 ) /*0x227468*/
        sub_43D80(Buf1, &unk_709CE8, 1u); /*0x22747c*/
      v16 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, (unsigned int)v13); /*0x22748a*/
      CString = (char *)cocos2d::CCString::getCString(v16); /*0x227493*/
      v18 = -1; /*0x227499*/
      do /*0x2274a3*/
        ++v18; /*0x2274a0*/
      while ( CString[v18] ); /*0x2274a3*/
      sub_43D80(Buf1, CString, v18); /*0x2274b2*/
      ++v11; /*0x2274b7*/
      v12 = (unsigned int)v13; /*0x2274b9*/
    }
    ++v13; /*0x2274bb*/
  }
  while ( v13 <= 5 ); /*0x2274c0*/
  if ( v11 == 1 ) /*0x2274c9*/
  {
    v19 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v12); /*0x2274d2*/
    v20 = cocos2d::CCString::getCString(v19); /*0x2274db*/
    *(_OWORD *)a2 = 0; /*0x2274e4*/
    *(_QWORD *)(a2 + 16) = 0; /*0x2274e7*/
    *(_QWORD *)(a2 + 24) = 0; /*0x2274eb*/
    do /*0x2274f3*/
      ++v14; /*0x2274f0*/
    while ( v20[v14] ); /*0x2274f3*/
    sub_3C230(a2); /*0x227502*/
    sub_3C310(Buf1); /*0x22750d*/
  }
  else
  {
    Buf2 = 0; /*0x22751a*/
    v26 = 0; /*0x22751f*/
    v27 = 15; /*0x227524*/
    LOBYTE(Buf2) = 0; /*0x22752d*/
    v21 = Buf1; /*0x227532*/
    if ( *((_QWORD *)&v30 + 1) > 0xFu ) /*0x22753d*/
      v21 = (void **)Buf1[0]; /*0x22753d*/
    v22 = v30; /*0x227543*/
    v23 = v30; /*0x227548*/
    if ( (_QWORD)v30 ) /*0x22754e*/
      v23 = 0; /*0x22754e*/
    if ( memcmp(v21, &Buf2, v23) || v22 ) /*0x227563*/
    {
      *(_OWORD *)a2 = *(_OWORD *)Buf1; /*0x227591*/
      *(_OWORD *)(a2 + 16) = v30; /*0x227599*/
    }
    else
    {
      *(_OWORD *)a2 = 0; /*0x227568*/
      *(_QWORD *)(a2 + 16) = 1; /*0x22756b*/
      *(_QWORD *)(a2 + 24) = 15; /*0x227573*/
      *(_WORD *)a2 = 45; /*0x22757b*/
      sub_3C310(Buf1); /*0x227585*/
    }
  }
  return a2; /*0x2275a0*/
}

// [33/86] Address: 0x2275f0
// Method: GameLevelManager::writeSpecialFilters
// Hidden C++ exception states: #wind=5
_QWORD *__fastcall GameLevelManager_writeSpecialFilters(__int64 a1, _QWORD *a2, __int64 a3)
{
  signed int v5; // ebx
  unsigned __int64 v6; // r15
  void **v7; // rdx
  size_t v8; // r8
  char *v9; // rdx
  int v10; // ecx
  unsigned int v11; // edi
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rax
  void *v17; // rdx
  __int64 v18; // rcx
  cocos2d::CCArray *v19; // rdi
  cocos2d::CCString *v20; // rax
  unsigned int v21; // r14d
  __int64 v22; // rax
  void *v23; // rdx
  void **v24; // rdx
  size_t v25; // r8
  void *v27; // [rsp+30h] [rbp-50h]
  void *Src[2]; // [rsp+38h] [rbp-48h] BYREF
  size_t Size; // [rsp+48h] [rbp-38h]
  unsigned __int64 v30; // [rsp+50h] [rbp-30h]
  _BYTE v31[32]; // [rsp+58h] [rbp-28h] BYREF

  v5 = 0; /*0x22761e*/
  *(_OWORD *)a2 = 0; /*0x227626*/
  a2[2] = 0; /*0x227629*/
  v6 = 15; /*0x22762d*/
  a2[3] = 15; /*0x227633*/
  *(_BYTE *)a2 = 0; /*0x227637*/
  sub_43D80(a2, "&diff=", 6u); /*0x227650*/
  sub_3E4F0(Src, a3 + 360); /*0x227660*/
  v7 = Src; /*0x22766c*/
  if ( v30 > 0xF ) /*0x227674*/
    v7 = (void **)Src[0]; /*0x227674*/
  sub_43D80(a2, v7, Size); /*0x227680*/
  sub_3C310(Src); /*0x22768a*/
  if ( *(_BYTE *)(a3 + 428) ) /*0x22768f*/
  {
    v8 = 7; /*0x227698*/
    v9 = "&star=1"; /*0x22769e*/
  }
  else
  {
    if ( !*(_BYTE *)(a3 + 429) ) /*0x2276af*/
      goto LABEL_8; /*0x2276af*/
    v8 = 9; /*0x2276b1*/
    v9 = "&noStar=1"; /*0x2276b7*/
  }
  sub_43D80(a2, v9, v8); /*0x2276c1*/
LABEL_8:
  v10 = *(_DWORD *)(a3 + 448); /*0x2276c6*/
  if ( v10 > 0 ) /*0x2276cf*/
  {
    v11 = 0; /*0x2276d5*/
    v12 = v10 - 6; /*0x2276d7*/
    if ( v12 ) /*0x2276da*/
    {
      v13 = v12 - 1; /*0x2276dc*/
      if ( v13 ) /*0x2276df*/
      {
        v14 = v13 - 1; /*0x2276e1*/
        if ( v14 ) /*0x2276e4*/
        {
          v15 = v14 - 1; /*0x2276e6*/
          if ( v15 ) /*0x2276e9*/
          {
            if ( v15 == 1 ) /*0x2276ee*/
              v11 = 5; /*0x2276f0*/
          }
          else
          {
            v11 = 4; /*0x2276f7*/
          }
        }
        else
        {
          v11 = 2; /*0x2276fe*/
        }
      }
      else
      {
        v11 = 1; /*0x227705*/
      }
    }
    else
    {
      v11 = 3; /*0x22770c*/
    }
    sub_43D80(a2, "&demonFilter=", 0xDu); /*0x227721*/
    v16 = GameToolbox_intToString(v31, v11); /*0x22772c*/
    v17 = (void *)v16; /*0x227732*/
    if ( *(_QWORD *)(v16 + 24) > 0xFu ) /*0x22773a*/
      v17 = *(void **)v16; /*0x22773c*/
    sub_43D80(a2, v17, *(_QWORD *)(v16 + 16)); /*0x227746*/
    sub_3C310(v31); /*0x227750*/
  }
  if ( *(_DWORD *)(a3 + 320) == 12 ) /*0x22775d*/
  {
    *(_OWORD *)Src = 0; /*0x227766*/
    Size = 0; /*0x22776a*/
    v30 = 15; /*0x22776e*/
    LOBYTE(Src[0]) = 0; /*0x227772*/
    v18 = *(_QWORD *)&qword_905FB0; /*0x227776*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x227780*/
    {
      v27 = operator new(0x690u); /*0x22778c*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v27); /*0x22779b*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x2277a5*/
      v18 = *(_QWORD *)&qword_905FB0; /*0x2277a8*/
    }
    v19 = cocos2d::CCDictionary::allKeys(*(cocos2d::CCDictionary **)(v18 + 872)); /*0x2277bc*/
    if ( cocos2d::CCArray::count(v19) ) /*0x2277c2*/
    {
      do /*0x22783f*/
      {
        v20 = cocos2d::CCArray::stringAtIndex(v19, v5); /*0x2277d5*/
        v21 = cocos2d::CCString::intValue(v20); /*0x2277e4*/
        if ( v5 > 0 ) /*0x2277e9*/
          sub_43D80(Src, &unk_709CE8, 1u); /*0x2277fc*/
        v22 = GameToolbox_intToString(v31, v21); /*0x227808*/
        v23 = (void *)v22; /*0x22780e*/
        if ( *(_QWORD *)(v22 + 24) > 0xFu ) /*0x227816*/
          v23 = *(void **)v22; /*0x227818*/
        sub_43D80(Src, v23, *(_QWORD *)(v22 + 16)); /*0x227823*/
        sub_3C310(v31); /*0x22782d*/
        ++v5; /*0x227832*/
      }
      while ( v5 < cocos2d::CCArray::count(v19) ); /*0x22783f*/
      v6 = v30; /*0x227841*/
    }
    sub_43D80(a2, "&followed=", 0xAu); /*0x227855*/
    v24 = Src; /*0x22785a*/
    if ( v6 > 0xF ) /*0x227862*/
      v24 = (void **)Src[0]; /*0x227862*/
    v25 = -1; /*0x227867*/
    do /*0x227873*/
      ++v25; /*0x227870*/
    while ( *((_BYTE *)v24 + v25) ); /*0x227873*/
    sub_43D80(a2, v24, v25); /*0x22787d*/
    sub_3C310(Src); /*0x227887*/
  }
  return a2; /*0x22788f*/
}

// [34/86] Address: 0x228390
// Method: GameLevelManager::onGetGJDailyLevelStateCompleted
// Hidden C++ exception states: #wind=13
double __fastcall GameLevelManager_onGetGJDailyLevelStateCompleted(__int64 a1, unsigned __int64 *a2, __int64 *a3)
{
  __int64 *v6; // rax
  const void *v7; // rcx
  unsigned __int64 v8; // r14
  size_t v9; // r8
  int v10; // ebx
  __int64 v11; // rsi
  _BYTE *v12; // rdx
  __int64 v13; // r8
  cocos2d::CCArray *v14; // rbx
  void *v15; // r8
  __int64 v16; // rcx
  __int64 *v17; // rcx
  cocos2d::CCString *v18; // rax
  const char *CString; // rax
  __int64 v20; // r8
  cocos2d::CCString *v21; // rax
  const char *v22; // rax
  __int64 v23; // r8
  cocos2d::CCString *v24; // rax
  const char *v25; // rax
  __int64 v26; // r8
  cocos2d::CCString *v27; // rax
  const char *v28; // rax
  __int64 v29; // r8
  cocos2d::CCString *v30; // rax
  const char *v31; // rax
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r14
  unsigned __int64 v36; // rdi
  void **v37; // r15
  unsigned __int64 v38; // rbx
  __int64 v39; // rcx
  void **v40; // r15
  unsigned __int64 v41; // rdi
  unsigned __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int128 *p_Buf2; // r15
  unsigned __int64 v47; // rdi
  unsigned __int64 v48; // rbx
  cocos2d::CCArray *v49; // r13
  unsigned int i; // edi
  struct cocos2d::CCObject *v51; // rbx
  cocos2d::CCString *v52; // rax
  const char *v53; // rax
  __int64 v54; // r8
  cocos2d::CCString *v55; // rax
  char *v56; // rax
  size_t v57; // r8
  cocos2d::CCString *v58; // rax
  char *v59; // rax
  size_t v60; // r8
  cocos2d::CCString *v61; // rax
  char *v62; // rax
  size_t v63; // r8
  __int128 *v64; // r9
  __int128 *v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  unsigned __int64 v69; // r15
  unsigned __int64 v70; // rbx
  void **v71; // r12
  __int64 v72; // rsi
  void **v73; // rsi
  unsigned __int64 v74; // rdi
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  void **v78; // rdi
  __int64 v79; // rcx
  __int64 v81; // [rsp+40h] [rbp-C0h]
  void *v82; // [rsp+48h] [rbp-B8h]
  __int128 v86; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v87; // [rsp+98h] [rbp-68h]
  __int64 v88; // [rsp+A0h] [rbp-60h]
  __int128 v89; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v90; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v91; // [rsp+C0h] [rbp-40h]
  void *Block[2]; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 v93; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v94; // [rsp+E0h] [rbp-20h]
  __int128 Buf2; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v96; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v97; // [rsp+100h] [rbp+0h]
  void *v98[2]; // [rsp+108h] [rbp+8h] BYREF
  unsigned __int64 v99; // [rsp+118h] [rbp+18h]
  unsigned __int64 v100; // [rsp+120h] [rbp+20h]
  void *Src[2]; // [rsp+128h] [rbp+28h] BYREF
  unsigned __int64 v102; // [rsp+138h] [rbp+38h]
  unsigned __int64 v103; // [rsp+140h] [rbp+40h]
  void *v104[2]; // [rsp+148h] [rbp+48h] BYREF
  unsigned __int64 v105; // [rsp+158h] [rbp+58h]
  unsigned __int64 v106; // [rsp+160h] [rbp+60h]
  __int128 v107; // [rsp+168h] [rbp+68h] BYREF
  __int64 v108; // [rsp+178h] [rbp+78h]
  __int64 v109; // [rsp+180h] [rbp+80h]

  v6 = a3; /*0x2283e1*/
  v81 = (__int64)a3; /*0x2283e4*/
  if ( (unsigned __int64)a3[3] > 0xF ) /*0x2283ee*/
  {
    v6 = (__int64 *)*a3; /*0x2283f0*/
    v81 = *a3; /*0x2283f3*/
  }
  sub_21EA30(a1, v6); /*0x2283fb*/
  Buf2 = 0; /*0x228403*/
  v96 = 2; /*0x22840d*/
  v97 = 15; /*0x228416*/
  strcpy((char *)&Buf2, "-1"); /*0x228421*/
  v7 = a2; /*0x22842d*/
  if ( a2[3] > 0xF ) /*0x228435*/
    v7 = (const void *)*a2; /*0x228437*/
  v8 = a2[2]; /*0x22843a*/
  v9 = v8; /*0x22843e*/
  if ( v8 > 2 ) /*0x228444*/
    v9 = 2; /*0x228444*/
  v10 = memcmp(v7, &Buf2, v9); /*0x22844d*/
  v11 = -1; /*0x22844f*/
  if ( !v10 ) /*0x22845a*/
  {
    if ( v8 >= 2 ) /*0x228460*/
      v10 = v8 > 2; /*0x228468*/
    else
      v10 = -1; /*0x228462*/
  }
  if ( !v10 ) /*0x228473*/
    goto LABEL_22; /*0x228473*/
  v12 = a2; /*0x228479*/
  if ( a2[3] > 0xF ) /*0x228480*/
    v12 = (_BYTE *)*a2; /*0x228482*/
  *(_OWORD *)Block = 0; /*0x228488*/
  v93 = 0; /*0x22848c*/
  v94 = 0; /*0x228490*/
  v13 = -1; /*0x228494*/
  do /*0x22849a*/
    ++v13; /*0x228497*/
  while ( v12[v13] ); /*0x22849a*/
  sub_3C230(Block); /*0x2284a4*/
  v14 = (cocos2d::CCArray *)sub_D09B0(Block, &unk_74CF9C); /*0x2284ba*/
  if ( v94 > 0xF ) /*0x2284c5*/
  {
    v15 = Block[0]; /*0x2284ca*/
    if ( v94 + 1 >= 0x1000 ) /*0x2284d8*/
    {
      v15 = (void *)*((_QWORD *)Block[0] - 1); /*0x2284de*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v15 - 8) > 0x1F ) /*0x2284ed*/
        invoke_watson(0, 0, 0, 0, 0); /*0x228500*/
    }
    j_j_free(v15); /*0x22850a*/
  }
  v93 = 0; /*0x228511*/
  v94 = 15; /*0x228515*/
  LOBYTE(Block[0]) = 0; /*0x228519*/
  if ( cocos2d::CCArray::count(v14) >= 5 ) /*0x228528*/
  {
    v18 = cocos2d::CCArray::objectAtIndex(v14, 0); /*0x228558*/
    CString = cocos2d::CCString::getCString(v18); /*0x228561*/
    Buf2 = 0; /*0x22856a*/
    v96 = 0; /*0x228571*/
    v97 = 0; /*0x228575*/
    v20 = -1; /*0x228579*/
    do /*0x228583*/
      ++v20; /*0x228580*/
    while ( CString[v20] ); /*0x228583*/
    sub_3C230(&Buf2); /*0x228590*/
    v21 = cocos2d::CCArray::objectAtIndex(v14, 1u); /*0x22859e*/
    v22 = cocos2d::CCString::getCString(v21); /*0x2285a7*/
    *(_OWORD *)v104 = 0; /*0x2285b0*/
    v105 = 0; /*0x2285b4*/
    v106 = 0; /*0x2285b8*/
    v23 = -1; /*0x2285bc*/
    do /*0x2285c3*/
      ++v23; /*0x2285c0*/
    while ( v22[v23] ); /*0x2285c3*/
    sub_3C230(v104); /*0x2285d1*/
    v24 = cocos2d::CCArray::objectAtIndex(v14, 2u); /*0x2285df*/
    v25 = cocos2d::CCString::getCString(v24); /*0x2285e8*/
    *(_OWORD *)Src = 0; /*0x2285f1*/
    v102 = 0; /*0x2285f5*/
    v103 = 0; /*0x2285f9*/
    v26 = -1; /*0x2285fd*/
    do /*0x228603*/
      ++v26; /*0x228600*/
    while ( v25[v26] ); /*0x228603*/
    sub_3C230(Src); /*0x228611*/
    v27 = cocos2d::CCArray::objectAtIndex(v14, 3u); /*0x22861f*/
    v28 = cocos2d::CCString::getCString(v27); /*0x228628*/
    *(_OWORD *)v98 = 0; /*0x228631*/
    v99 = 0; /*0x228635*/
    v100 = 0; /*0x228639*/
    v29 = -1; /*0x22863d*/
    do /*0x228643*/
      ++v29; /*0x228640*/
    while ( v28[v29] ); /*0x228643*/
    sub_3C230(v98); /*0x228651*/
    v30 = cocos2d::CCArray::stringAtIndex(v14, 4u); /*0x22865f*/
    v31 = cocos2d::CCString::getCString(v30); /*0x228668*/
    v107 = 0; /*0x228671*/
    v108 = 0; /*0x228675*/
    v109 = 0; /*0x228679*/
    v32 = -1; /*0x228680*/
    do /*0x228686*/
      ++v32; /*0x228683*/
    while ( v31[v32] ); /*0x228686*/
    sub_3C230(&v107); /*0x228694*/
    v35 = 0x7FFFFFFFFFFFFFFFLL; /*0x22869f*/
    v36 = v102; /*0x2286a9*/
    if ( v102 ) /*0x2286b0*/
    {
      *(_OWORD *)Block = 0; /*0x2286cb*/
      v93 = 0; /*0x2286cf*/
      v94 = 15; /*0x2286d3*/
      LOBYTE(Block[0]) = 0; /*0x2286db*/
      v89 = 0; /*0x2286df*/
      v90 = 0; /*0x2286e3*/
      v91 = 0; /*0x2286e7*/
      v37 = Src; /*0x2286eb*/
      if ( v103 > 0xF ) /*0x2286f4*/
        v37 = (void **)Src[0]; /*0x2286f4*/
      if ( v102 > 0x7FFFFFFFFFFFFFFFLL ) /*0x2286fc*/
        sub_8D90(22, v33, v34); /*0x228cc1*/
      if ( v102 > 0xF ) /*0x228706*/
      {
        v38 = v102 | 0xF; /*0x228721*/
        if ( (v102 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x228728*/
        {
          if ( v38 < 0x16 ) /*0x228733*/
            v38 = 22; /*0x228733*/
        }
        else
        {
          v38 = 0x7FFFFFFFFFFFFFFFLL; /*0x22872a*/
        }
        *(_QWORD *)&v89 = sub_3C460(v38 + 1); /*0x228740*/
        v90 = v36; /*0x228744*/
        v91 = v38; /*0x228748*/
        memcpy((void *)v89, v37, v36 + 1); /*0x228756*/
      }
      else
      {
        v90 = v102; /*0x228708*/
        v91 = 15; /*0x22870c*/
        v89 = *(_OWORD *)v37; /*0x228718*/
      }
      v39 = qword_906070; /*0x22875c*/
      if ( !qword_906070 ) /*0x228766*/
      {
        v82 = operator new(0x3D0u); /*0x228772*/
        qword_906070 = sub_47C350(v82); /*0x228780*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x228791*/
        v39 = qword_906070; /*0x228793*/
      }
      sub_47EF50(v39, &v89, Block); /*0x2287a2*/
    }
    v89 = 0; /*0x2287af*/
    v90 = 0; /*0x2287b3*/
    v91 = 0; /*0x2287b7*/
    v40 = v104; /*0x2287bb*/
    if ( v106 > 0xF ) /*0x2287c4*/
      v40 = (void **)v104[0]; /*0x2287c4*/
    v41 = v105; /*0x2287c9*/
    if ( v105 > 0x7FFFFFFFFFFFFFFFLL ) /*0x2287d0*/
      sub_8D90(22, v33, v34); /*0x228cc7*/
    if ( v105 > 0xF ) /*0x2287da*/
    {
      v42 = v105 | 0xF; /*0x2287f5*/
      if ( (v105 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x2287fc*/
      {
        if ( v42 < 0x16 ) /*0x228807*/
          v42 = 22; /*0x228807*/
      }
      else
      {
        v42 = 0x7FFFFFFFFFFFFFFFLL; /*0x2287fe*/
      }
      *(_QWORD *)&v89 = sub_3C460(v42 + 1); /*0x228814*/
      v90 = v41; /*0x228818*/
      v91 = v42; /*0x22881c*/
      memcpy((void *)v89, v40, v41 + 1); /*0x22882a*/
    }
    else
    {
      v90 = v105; /*0x2287dc*/
      v91 = 15; /*0x2287e0*/
      v89 = *(_OWORD *)v40; /*0x2287ec*/
    }
    sub_21A100(a1, &v89); /*0x228836*/
    *(_OWORD *)Block = 0; /*0x22883e*/
    v93 = 0; /*0x228842*/
    v94 = 0; /*0x228846*/
    p_Buf2 = &Buf2; /*0x22884a*/
    if ( v97 > 0xF ) /*0x228853*/
      p_Buf2 = (__int128 *)Buf2; /*0x228853*/
    v47 = v96; /*0x228858*/
    if ( v96 > 0x7FFFFFFFFFFFFFFFLL ) /*0x22885f*/
      sub_8D90(v44, v43, v45); /*0x228ccd*/
    if ( v96 > 0xF ) /*0x228869*/
    {
      v48 = v96 | 0xF; /*0x228884*/
      if ( (v96 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x22888b*/
      {
        if ( v48 < 0x16 ) /*0x22889b*/
          v48 = 22; /*0x22889b*/
      }
      else
      {
        v48 = 0x7FFFFFFFFFFFFFFFLL; /*0x22888d*/
      }
      Block[0] = (void *)sub_3C460(v48 + 1); /*0x2288a8*/
      v93 = v47; /*0x2288ac*/
      v94 = v48; /*0x2288b0*/
      memcpy(Block[0], p_Buf2, v47 + 1); /*0x2288be*/
    }
    else
    {
      v93 = v96; /*0x22886b*/
      v94 = 15; /*0x22886f*/
      *(_OWORD *)Block = *p_Buf2; /*0x22887b*/
    }
    v49 = (cocos2d::CCArray *)sub_21AFF0(v44, Block); /*0x2288cc*/
    v89 = 0; /*0x2288d2*/
    v90 = 0; /*0x2288d6*/
    v91 = 15; /*0x2288da*/
    LOBYTE(v89) = 0; /*0x2288e2*/
    for ( i = 0; i < cocos2d::CCArray::count(v49); ++i ) /*0x2288ec*/
    {
      v51 = cocos2d::CCArray::objectAtIndex(v49, i); /*0x22890b*/
      v52 = cocos2d::CCString::createWithFormat( /*0x228921*/
              (const char *)&word_6E86F8,
              (unsigned int)(*((_DWORD *)v51 + 82) - *((_DWORD *)v51 + 83)));
      v53 = cocos2d::CCString::getCString(v52); /*0x22892a*/
      v86 = 0; /*0x228933*/
      v87 = 0; /*0x228937*/
      v88 = 0; /*0x22893b*/
      v54 = -1; /*0x22893f*/
      do /*0x228945*/
        ++v54; /*0x228942*/
      while ( v53[v54] ); /*0x228945*/
      sub_3C230(&v86); /*0x228953*/
      if ( v87 ) /*0x22895e*/
      {
        sub_3CBD0(&v89); /*0x228975*/
        sub_3CBD0(&v89); /*0x228995*/
      }
      v55 = cocos2d::CCString::createWithFormat( /*0x2289ad*/
              (const char *)&word_6E86F8,
              (unsigned int)(*((_DWORD *)v51 + 255) - *((_DWORD *)v51 + 256)));
      v56 = (char *)cocos2d::CCString::getCString(v55); /*0x2289b6*/
      v57 = -1; /*0x2289bc*/
      do /*0x2289c3*/
        ++v57; /*0x2289c0*/
      while ( v56[v57] ); /*0x2289c3*/
      sub_43D80(&v89, v56, v57); /*0x2289d1*/
      v58 = cocos2d::CCString::createWithFormat( /*0x2289e9*/
              (const char *)&word_6E86F8,
              (unsigned int)(*((_DWORD *)v51 + 260) - *((_DWORD *)v51 + 261)));
      v59 = (char *)cocos2d::CCString::getCString(v58); /*0x2289f2*/
      v60 = -1; /*0x2289f8*/
      do /*0x228a03*/
        ++v60; /*0x228a00*/
      while ( v59[v60] ); /*0x228a03*/
      sub_43D80(&v89, v59, v60); /*0x228a11*/
      sub_3C310(&v86); /*0x228a1b*/
    }
    v61 = cocos2d::CCString::createWithFormat("%c%s%s%c%c%s", 120, "I25", "fpAa", 112, 67, "Qg"); /*0x228a69*/
    v62 = (char *)cocos2d::CCString::getCString(v61); /*0x228a72*/
    v63 = -1; /*0x228a78*/
    do /*0x228a83*/
      ++v63; /*0x228a80*/
    while ( v62[v63] ); /*0x228a83*/
    sub_43D80(&v89, v62, v63); /*0x228a91*/
    v64 = &v89; /*0x228a96*/
    if ( v91 > 0xF ) /*0x228a9f*/
      v64 = (__int128 *)v89; /*0x228a9f*/
    v65 = &v89; /*0x228aa4*/
    if ( v91 > 0xF ) /*0x228aa8*/
      v65 = (__int128 *)v89; /*0x228aa8*/
    do /*0x228ab3*/
      ++v11; /*0x228ab0*/
    while ( *((_BYTE *)v65 + v11) ); /*0x228ab3*/
    sub_7D030(v64, (unsigned int)v11, &v86); /*0x228ac2*/
    v69 = v100; /*0x228ac7*/
    v70 = v99; /*0x228acb*/
    v71 = (void **)v98[0]; /*0x228acf*/
    v72 = a1; /*0x228ad3*/
    if ( *(_QWORD *)(a1 + 1352) ) /*0x228ad8*/
    {
      v86 = 0; /*0x228ae9*/
      v87 = 0; /*0x228aef*/
      v88 = 0; /*0x228af3*/
      v73 = v98; /*0x228af7*/
      if ( v100 > 0xF ) /*0x228aff*/
        v73 = (void **)v98[0]; /*0x228aff*/
      if ( v99 > 0x7FFFFFFFFFFFFFFFLL ) /*0x228b06*/
        sub_8D90(v67, v66, v68); /*0x228cd3*/
      if ( v99 > 0xF ) /*0x228b10*/
      {
        v74 = v99 | 0xF; /*0x228b2a*/
        if ( (v99 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x228b31*/
        {
          if ( v74 < 0x16 ) /*0x228b41*/
            v74 = 22; /*0x228b41*/
        }
        else
        {
          v74 = 0x7FFFFFFFFFFFFFFFLL; /*0x228b33*/
        }
        *(_QWORD *)&v86 = sub_3C460(v74 + 1); /*0x228b4e*/
        v87 = v70; /*0x228b52*/
        v88 = v74; /*0x228b56*/
        memcpy((void *)v86, v73, v70 + 1); /*0x228b64*/
      }
      else
      {
        v87 = v99; /*0x228b12*/
        v88 = 15; /*0x228b16*/
        v86 = *(_OWORD *)v73; /*0x228b21*/
      }
      v72 = a1; /*0x228b69*/
      (*(void (__fastcall **)(_QWORD, __int128 *, __int64))(**(_QWORD **)(a1 + 1352) + 32LL))( /*0x228b81*/
        *(_QWORD *)(a1 + 1352),
        &v86,
        v81);
    }
    GameLevelManager_saveFetchedLevels(v72, v49); /*0x228b8a*/
    v86 = 0; /*0x228b92*/
    v87 = 0; /*0x228b98*/
    v88 = 0; /*0x228b9c*/
    v78 = v98; /*0x228ba0*/
    if ( v69 > 0xF ) /*0x228ba8*/
      v78 = v71; /*0x228ba8*/
    if ( v70 > 0x7FFFFFFFFFFFFFFFLL ) /*0x228baf*/
      sub_8D90(v76, v75, v77); /*0x228cbb*/
    if ( v70 > 0xF ) /*0x228bb9*/
    {
      if ( (v70 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x228bda*/
      {
        v35 = v70 | 0xF; /*0x228bdc*/
        if ( (v70 | 0xF) < 0x16 ) /*0x228be8*/
          v35 = 22; /*0x228be8*/
      }
      *(_QWORD *)&v86 = sub_3C460(v35 + 1); /*0x228bf5*/
      v87 = v70; /*0x228bf9*/
      v88 = v35; /*0x228bfd*/
      memcpy((void *)v86, v78, v70 + 1); /*0x228c0b*/
    }
    else
    {
      v87 = v70; /*0x228bbb*/
      v88 = 15; /*0x228bbf*/
      v86 = *(_OWORD *)v78; /*0x228bca*/
    }
    GameLevelManager_markItemAsLiked(v72, (__int64)v49, &v86, v81); /*0x228c22*/
    v79 = *(_QWORD *)(v72 + 1352); /*0x228c27*/
    if ( v79 ) /*0x228c31*/
      (*(void (__fastcall **)(__int64, cocos2d::CCArray *, __int64))(*(_QWORD *)v79 + 8LL))(v79, v49, v81); /*0x228c3c*/
    sub_3C310(&v89); /*0x228c44*/
    sub_3C310(&v107); /*0x228c4e*/
    sub_3C310(v98); /*0x228c58*/
    sub_3C310(Src); /*0x228c62*/
    sub_3C310(v104); /*0x228c6c*/
    sub_3C310(&Buf2); /*0x228c76*/
    sub_3C310(a2); /*0x228c81*/
    v17 = a3; /*0x228c87*/
  }
  else
  {
LABEL_22:
    v16 = *(_QWORD *)(a1 + 1352); /*0x22852a*/
    if ( v16 ) /*0x228534*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 24LL))(v16, v81); /*0x22853e*/
    sub_3C310(a2); /*0x228545*/
    v17 = a3; /*0x22854b*/
  }
  return sub_3C310(v17); /*0x228c91*/
}

// [35/86] Address: 0x228fd0
// Method: GameLevelManager::onGetLevelSaveDataCompleted
// Hidden C++ exception states: #wind=6
double __fastcall GameLevelManager_onGetLevelSaveDataCompleted(__int64 a1, unsigned __int64 *a2, _QWORD *a3)
{
  _QWORD *v6; // rdx
  const void *v7; // rcx
  unsigned __int64 v8; // rbp
  size_t v9; // r8
  __int64 v10; // rcx
  int v11; // edi
  unsigned __int64 v12; // rbx
  _BYTE *v13; // rax
  cocos2d::CCArray *v14; // r15
  unsigned int v15; // esi
  cocos2d::CCString *v16; // rax
  unsigned int v17; // ebx
  cocos2d::CCString *v18; // rax
  int v19; // ebp
  __int64 v20; // rax
  __int64 v21; // rdi
  int v22; // ecx
  BOOL v23; // ebx
  float v24; // xmm0_4
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // eax
  int v29; // eax
  int v30; // eax
  void *v32; // [rsp+30h] [rbp-E8h]
  __int128 Buf2; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v34; // [rsp+48h] [rbp-D0h]
  __int64 v35; // [rsp+50h] [rbp-C8h]
  void *v36; // [rsp+58h] [rbp-C0h]
  unsigned __int64 *v37; // [rsp+60h] [rbp-B8h]
  _QWORD *v38; // [rsp+68h] [rbp-B0h]
  __int128 v39; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+80h] [rbp-98h]
  __int64 v41; // [rsp+88h] [rbp-90h]
  _BYTE v42[32]; // [rsp+90h] [rbp-88h] BYREF

  v37 = a2; /*0x22900c*/
  v38 = a3; /*0x229011*/
  v6 = a3; /*0x229019*/
  if ( a3[3] > 0xFu ) /*0x229021*/
    v6 = (_QWORD *)*a3; /*0x229023*/
  sub_21EA30(a1, v6); /*0x229026*/
  Buf2 = 0; /*0x22902e*/
  v34 = 2; /*0x229039*/
  v35 = 15; /*0x229043*/
  strcpy((char *)&Buf2, "-1"); /*0x22904f*/
  v7 = a2; /*0x22905e*/
  if ( a2[3] > 0xF ) /*0x229066*/
    v7 = (const void *)*a2; /*0x229068*/
  v8 = a2[2]; /*0x22906b*/
  v9 = v8; /*0x22906f*/
  if ( v8 > 2 ) /*0x229075*/
    v9 = 2; /*0x229075*/
  v11 = memcmp(v7, &Buf2, v9); /*0x22907e*/
  v12 = -1; /*0x229080*/
  if ( !v11 ) /*0x229089*/
  {
    if ( v8 >= 2 ) /*0x22908f*/
      v11 = v8 > 2; /*0x229098*/
    else
      v11 = -1; /*0x229091*/
  }
  if ( v11 ) /*0x2290a3*/
  {
    v13 = a2; /*0x2290a9*/
    if ( a2[3] > 0xF ) /*0x2290b3*/
      v13 = (_BYTE *)*a2; /*0x2290b5*/
    do /*0x2290c3*/
      ++v12; /*0x2290c0*/
    while ( v13[v12] ); /*0x2290c3*/
    if ( v12 > 0x28 ) /*0x2290cd*/
    {
      v39 = 0; /*0x2290da*/
      v40 = 0; /*0x2290df*/
      v41 = 0; /*0x2290e7*/
      if ( v8 < 0x14 ) /*0x2290f3*/
        sub_3E4D0(v10, v8 - 40); /*0x229426*/
      sub_3C230(&v39); /*0x22912a*/
      cocos2d::ZipUtils::decompressString(v42, &v39, 0, 11); /*0x229146*/
      v14 = (cocos2d::CCArray *)sub_D09B0(v42, &unk_709CE8); /*0x229161*/
      if ( cocos2d::CCArray::count(v14) > 1 ) /*0x229170*/
      {
        v15 = 1; /*0x229176*/
        do /*0x2293c1*/
        {
          v16 = cocos2d::CCArray::stringAtIndex(v14, v15 - 1); /*0x229196*/
          v17 = cocos2d::CCString::intValue(v16); /*0x2291a5*/
          v18 = cocos2d::CCArray::stringAtIndex(v14, v15); /*0x2291ac*/
          v19 = cocos2d::CCString::intValue(v18); /*0x2291bb*/
          if ( (unsigned int)(v19 - 1) <= 9 ) /*0x2291c3*/
          {
            v20 = sub_21D5C0(a1, v17); /*0x2291ce*/
            v21 = v20; /*0x2291d3*/
            if ( v20 ) /*0x2291d9*/
            {
              *(_DWORD *)(v20 + 1028) = v19; /*0x2291df*/
              v22 = (int)(float)((float)((float)rand() / 32767.0) * 1000.0); /*0x2291fa*/
              *(_DWORD *)(v21 + 1024) = v22; /*0x2291fe*/
              *(_DWORD *)(v21 + 1020) = v22 + v19; /*0x229207*/
              v23 = v19 == 10; /*0x229212*/
              *(_DWORD *)(v21 + 1012) = v23; /*0x229215*/
              v24 = (float)((float)rand() / 32767.0) * 1000.0; /*0x22922c*/
              *(_DWORD *)(v21 + 1008) = (int)v24; /*0x229234*/
              *(_DWORD *)(v21 + 1004) = v23 + (int)v24; /*0x22923c*/
              v25 = qword_905FE0; /*0x229242*/
              if ( !qword_905FE0 ) /*0x22924c*/
              {
                v32 = operator new(0x3E8u); /*0x229258*/
                qword_905FE0 = sub_2D2B40(v32); /*0x229266*/
                (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x229277*/
                v25 = qword_905FE0; /*0x229279*/
              }
              if ( GameStatsManager_hasCompletedStarLevel(v25, v21) /*0x2292c9*/
                && *(_DWORD *)(v21 + 1020) - *(_DWORD *)(v21 + 1024) >= 8
                && *(_DWORD *)(v21 + 880) - *(_DWORD *)(v21 + 884) < 50
                && *(_DWORD *)(v21 + 892) - *(_DWORD *)(v21 + 896) < 50 )
              {
                v27 = qword_905FE0; /*0x2292cf*/
                if ( !qword_905FE0 ) /*0x2292d9*/
                {
                  v36 = operator new(0x3E8u); /*0x2292e5*/
                  qword_905FE0 = sub_2D2B40(v36); /*0x2292f3*/
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x229304*/
                  v27 = qword_905FE0; /*0x229306*/
                }
                sub_2DEB10(v27, v21); /*0x229310*/
                *(_DWORD *)(v21 + 924) = 0; /*0x229317*/
                v28 = (int)(float)((float)((float)rand() / 32767.0) * 1000.0); /*0x229332*/
                *(_DWORD *)(v21 + 928) = v28; /*0x229336*/
                *(_DWORD *)(v21 + 932) = v28; /*0x22933c*/
                *(_DWORD *)(v21 + 944) = 0; /*0x229342*/
                v29 = (int)(float)((float)((float)rand() / 32767.0) * 1000.0); /*0x22935d*/
                *(_DWORD *)(v21 + 940) = v29; /*0x229361*/
                *(_DWORD *)(v21 + 936) = v29; /*0x229367*/
                *(_DWORD *)(v21 + 956) = 0; /*0x22936d*/
                v30 = (int)(float)((float)((float)rand() / 32767.0) * 1000.0); /*0x229388*/
                *(_DWORD *)(v21 + 952) = v30; /*0x22938c*/
                *(_DWORD *)(v21 + 948) = v30; /*0x229392*/
                *(_DWORD *)(v21 + 1416) = 0; /*0x229398*/
                *(_DWORD *)(v21 + 1464) = 0; /*0x22939e*/
                *(_BYTE *)(v21 + 921) = 1; /*0x2293a4*/
              }
              GameLevelManager_updateLevelRewards(v26, (_DWORD *)v21); /*0x2293ae*/
            }
          }
          v15 += 2; /*0x2293b3*/
        }
        while ( v15 < cocos2d::CCArray::count(v14) ); /*0x2293c1*/
      }
      sub_3C310(v42); /*0x2293cf*/
      sub_3C310(&v39); /*0x2293da*/
    }
  }
  sub_3C310(a2); /*0x2293e3*/
  return sub_3C310(a3); /*0x2293f1*/
}

// [36/86] Address: 0x229430
// Method: GameLevelManager::getMapPacks
// Hidden C++ exception states: #wind=3
double __fastcall GameLevelManager_getMapPacks(__int64 a1, __int64 a2)
{
  __int64 Key; // rdi
  __int64 v5; // rcx
  int v6; // ebx
  cocos2d::CCString *v7; // rax
  const char *CString; // rax
  cocos2d::CCString *v9; // rax
  char *v10; // rax
  __int64 v11; // rbx
  size_t v12; // r8
  __int64 v13; // r8
  _QWORD *v14; // rdx
  double result; // xmm0_8
  int v16; // [rsp+20h] [rbp-79h]
  int v17; // [rsp+28h] [rbp-71h]
  __int128 v18; // [rsp+40h] [rbp-59h] BYREF
  __int64 v19; // [rsp+50h] [rbp-49h]
  __int64 v20; // [rsp+58h] [rbp-41h]
  __int128 v21; // [rsp+60h] [rbp-39h] BYREF
  __int64 v22; // [rsp+70h] [rbp-29h]
  __int64 v23; // [rsp+78h] [rbp-21h]
  __int128 v24; // [rsp+80h] [rbp-19h] BYREF
  __int64 v25; // [rsp+90h] [rbp-9h]
  __int64 v26; // [rsp+98h] [rbp-1h]
  __int128 *v27; // [rsp+A0h] [rbp+7h]
  __int128 *v28; // [rsp+A8h] [rbp+Fh]
  _QWORD Src[4]; // [rsp+B8h] [rbp+1Fh] BYREF

  Key = GJSearchObject_getKey(a2); /*0x229466*/
  if ( !(unsigned __int8)sub_21E890(a1, Key) ) /*0x22946f*/
  {
    sub_21E960(a1, Key); /*0x229482*/
    GameLevelManager_getBasePostString(v5, Src); /*0x22948b*/
    v6 = *(_DWORD *)(a2 + 424); /*0x229491*/
    v17 = 98; /*0x2294a3*/
    v16 = 103; /*0x2294ab*/
    v7 = cocos2d::CCString::createWithFormat("%c%s%s%c%c%s", 87, "mfd", "2893", v16, v17, (const char *)&word_708030); /*0x2294cd*/
    CString = cocos2d::CCString::getCString(v7); /*0x2294d6*/
    v9 = cocos2d::CCString::createWithFormat("&page=%i&secret=%s", v6, CString); /*0x2294e8*/
    v10 = (char *)cocos2d::CCString::getCString(v9); /*0x2294f1*/
    v11 = -1; /*0x2294f7*/
    v12 = -1; /*0x2294fe*/
    do /*0x229504*/
      ++v12; /*0x229501*/
    while ( v10[v12] ); /*0x229504*/
    sub_43D80(Src, v10, v12); /*0x229512*/
    v27 = &v21; /*0x22951b*/
    v28 = &v24; /*0x229523*/
    v21 = 0; /*0x22952a*/
    v22 = 0; /*0x229531*/
    v23 = 0; /*0x229535*/
    v13 = -1; /*0x229539*/
    do /*0x229543*/
      ++v13; /*0x229540*/
    while ( *(_BYTE *)(Key + v13) ); /*0x229543*/
    sub_3C230(&v21); /*0x229550*/
    v14 = Src; /*0x229556*/
    if ( Src[3] > 0xFu ) /*0x22955f*/
      v14 = (_QWORD *)Src[0]; /*0x22955f*/
    v24 = 0; /*0x229567*/
    v25 = 0; /*0x22956b*/
    v26 = 0; /*0x22956f*/
    do /*0x229576*/
      ++v11; /*0x229573*/
    while ( *((_BYTE *)v14 + v11) ); /*0x229576*/
    sub_3C230(&v24); /*0x229583*/
    v18 = 0; /*0x22958c*/
    *(_QWORD *)&v18 = sub_3C460(64); /*0x2295a5*/
    v19 = 54; /*0x2295a9*/
    v20 = 63; /*0x2295b1*/
    strcpy((char *)v18, "https://www.boomlings.com/database/getGJMapPacks21.php"); /*0x2295c0*/
    sub_216210(a1, &v18, &v24, &v21, 3); /*0x22960a*/
    return sub_3C310(Src); /*0x229614*/
  }
  return result; /*0x229619*/
}

// [37/86] Address: 0x229640
// Method: GameLevelManager::onGetMapPacksCompleted
// Hidden C++ exception states: #wind=8
double __fastcall GameLevelManager_onGetMapPacksCompleted(__int64 a1, unsigned __int64 *a2, __int64 *a3)
{
  __int64 v6; // r13
  const void *v7; // rcx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  size_t v10; // r8
  _BYTE *v11; // rdx
  __int64 v12; // r8
  cocos2d::CCArray *v13; // rbx
  __int64 v14; // rcx
  __int64 *v15; // rcx
  cocos2d::CCString *v16; // rax
  const char *CString; // rax
  __int64 v18; // r8
  cocos2d::CCString *v19; // rax
  const char *v20; // rax
  __int64 v21; // r8
  cocos2d::CCString *v22; // rax
  const char *v23; // rax
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  cocos2d::CCArray *v27; // r14
  unsigned int i; // ebx
  unsigned int *v29; // rdi
  cocos2d::CCString *v30; // rax
  const char *v31; // rax
  __int64 v32; // r8
  cocos2d::CCString *v33; // rax
  char *v34; // rax
  size_t v35; // r8
  cocos2d::CCString *v36; // rax
  char *v37; // rax
  size_t v38; // r8
  void *v39; // rcx
  cocos2d::CCString *v40; // rax
  char *v41; // rax
  size_t v42; // r8
  __int128 *p_Src; // r9
  __int128 *v44; // r8
  __int64 v45; // rdx
  __int64 v46; // r8
  int v47; // ebx
  __int64 v48; // rcx
  unsigned int j; // ebx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  struct cocos2d::CCObject *v53; // rdi
  cocos2d::CCString *v54; // rax
  const char *v55; // rax
  __int64 v56; // r8
  void *v57; // rcx
  __int64 v58; // rax
  __int128 *p_Buf2; // rsi
  __int64 v60; // rbx
  unsigned __int64 v61; // rdi
  __int64 v62; // rcx
  char v65[32]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 *v66; // [rsp+70h] [rbp-90h]
  __int64 *v67; // [rsp+78h] [rbp-88h]
  __int128 v68; // [rsp+80h] [rbp-80h] BYREF
  __int128 v69; // [rsp+90h] [rbp-70h]
  __int128 Src; // [rsp+A0h] [rbp-60h] BYREF
  __m128i si128; // [rsp+B0h] [rbp-50h]
  __int128 Buf2; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v73; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v74; // [rsp+D8h] [rbp-28h]
  _OWORD Buf1[2]; // [rsp+E0h] [rbp-20h] BYREF
  _OWORD v76[2]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v77[48]; // [rsp+120h] [rbp+20h] BYREF

  v66 = a2; /*0x229678*/
  v67 = a3; /*0x22967d*/
  v6 = (__int64)a3; /*0x229682*/
  if ( (unsigned __int64)a3[3] > 0xF ) /*0x22968a*/
    v6 = *a3; /*0x22968c*/
  sub_21EA30(a1, v6); /*0x229692*/
  Buf2 = 0; /*0x22969a*/
  v73 = 2; /*0x2296a3*/
  v74 = 15; /*0x2296a7*/
  strcpy((char *)&Buf2, "-1"); /*0x2296b4*/
  v7 = a2; /*0x2296bc*/
  v8 = a2[3]; /*0x2296bf*/
  if ( v8 > 0xF ) /*0x2296c8*/
    v7 = (const void *)*a2; /*0x2296ca*/
  v9 = a2[2]; /*0x2296ce*/
  v10 = v9; /*0x2296d3*/
  if ( v9 > 2 ) /*0x2296d9*/
    v10 = 2; /*0x2296d9*/
  if ( !memcmp(v7, &Buf2, v10) && v9 == 2 ) /*0x2296ed*/
    goto LABEL_14; /*0x2296ed*/
  v11 = a2; /*0x2296ef*/
  if ( v8 > 0xF ) /*0x2296f6*/
    v11 = (_BYTE *)*a2; /*0x2296f8*/
  Src = 0; /*0x2296ff*/
  si128 = 0; /*0x229706*/
  v12 = -1; /*0x22970b*/
  do /*0x229715*/
    ++v12; /*0x229712*/
  while ( v11[v12] ); /*0x229715*/
  sub_3C230(&Src); /*0x229720*/
  v13 = (cocos2d::CCArray *)sub_D09B0(&Src, &unk_74CF9C); /*0x229736*/
  sub_3C310(&Src); /*0x22973d*/
  if ( cocos2d::CCArray::count(v13) < 3 ) /*0x22974e*/
  {
LABEL_14:
    v14 = *(_QWORD *)(a1 + 1352); /*0x229750*/
    if ( v14 ) /*0x22975a*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 24LL))(v14, v6); /*0x229762*/
    sub_3C310(a2); /*0x229769*/
    v15 = a3; /*0x22976f*/
  }
  else
  {
    v16 = cocos2d::CCArray::objectAtIndex(v13, 0); /*0x22977c*/
    CString = cocos2d::CCString::getCString(v16); /*0x229785*/
    memset(v76, 0, sizeof(v76)); /*0x22978e*/
    v18 = -1; /*0x22979a*/
    do /*0x2297a4*/
      ++v18; /*0x2297a1*/
    while ( CString[v18] ); /*0x2297a4*/
    sub_3C230(v76); /*0x2297b2*/
    v19 = cocos2d::CCArray::objectAtIndex(v13, 1u); /*0x2297c0*/
    v20 = cocos2d::CCString::getCString(v19); /*0x2297c9*/
    Buf2 = 0; /*0x2297d2*/
    v73 = 0; /*0x2297d8*/
    v74 = 0; /*0x2297dc*/
    v21 = -1; /*0x2297e0*/
    do /*0x2297ea*/
      ++v21; /*0x2297e7*/
    while ( v20[v21] ); /*0x2297ea*/
    sub_3C230(&Buf2); /*0x2297f7*/
    v22 = cocos2d::CCArray::stringAtIndex(v13, 2u); /*0x229802*/
    v23 = cocos2d::CCString::getCString(v22); /*0x22980b*/
    memset(Buf1, 0, sizeof(Buf1)); /*0x229814*/
    v24 = -1; /*0x229820*/
    do /*0x229833*/
      ++v24; /*0x229830*/
    while ( v23[v24] ); /*0x229833*/
    sub_3C230(Buf1); /*0x229841*/
    v25 = sub_3E4F0(v65, v76); /*0x229850*/
    v27 = (cocos2d::CCArray *)sub_21B830(v26, v25); /*0x22985d*/
    Src = 0; /*0x229863*/
    si128 = _mm_load_si128((const __m128i *)&Size); /*0x22986f*/
    LOBYTE(Src) = 0; /*0x229874*/
    for ( i = 0; i < cocos2d::CCArray::count(v27); ++i ) /*0x22987f*/
    {
      v29 = (unsigned int *)cocos2d::CCArray::objectAtIndex(v27, i); /*0x22989b*/
      v30 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v29[82]); /*0x2298ab*/
      v31 = cocos2d::CCString::getCString(v30); /*0x2298b4*/
      v68 = 0; /*0x2298bd*/
      v69 = 0u; /*0x2298c1*/
      v32 = -1; /*0x2298c9*/
      do /*0x2298d3*/
        ++v32; /*0x2298d0*/
      while ( v31[v32] ); /*0x2298d3*/
      sub_3C230(&v68); /*0x2298e1*/
      if ( (_QWORD)v69 ) /*0x2298ec*/
      {
        sub_3CBD0(&Src); /*0x229903*/
        sub_3CBD0(&Src); /*0x229923*/
      }
      v33 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v29[84]); /*0x229935*/
      v34 = (char *)cocos2d::CCString::getCString(v33); /*0x22993e*/
      v35 = -1; /*0x229944*/
      do /*0x229953*/
        ++v35; /*0x229950*/
      while ( v34[v35] ); /*0x229953*/
      sub_43D80(&Src, v34, v35); /*0x229961*/
      v36 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v29[85]); /*0x229973*/
      v37 = (char *)cocos2d::CCString::getCString(v36); /*0x22997c*/
      v38 = -1; /*0x229982*/
      do /*0x229993*/
        ++v38; /*0x229990*/
      while ( v37[v38] ); /*0x229993*/
      sub_43D80(&Src, v37, v38); /*0x2299a1*/
      if ( *((_QWORD *)&v69 + 1) > 0xFu ) /*0x2299af*/
      {
        v39 = (void *)v68; /*0x2299b4*/
        if ( (unsigned __int64)(*((_QWORD *)&v69 + 1) + 1LL) >= 0x1000 ) /*0x2299c2*/
        {
          v39 = *(void **)(v68 - 8); /*0x2299c8*/
          if ( (unsigned __int64)(v68 - (_QWORD)v39 - 8) > 0x1F ) /*0x2299d7*/
            invoke_watson(0, 0, 0, 0, 0); /*0x229b12*/
        }
        j_j_free(v39); /*0x2299dd*/
      }
    }
    v40 = cocos2d::CCString::createWithFormat("%c%s%s%c%c%s", 120, "I25", "fpAa", 112, 67, "Qg"); /*0x229a2b*/
    v41 = (char *)cocos2d::CCString::getCString(v40); /*0x229a34*/
    v42 = -1; /*0x229a3a*/
    do /*0x229a44*/
      ++v42; /*0x229a41*/
    while ( v41[v42] ); /*0x229a44*/
    sub_43D80(&Src, v41, v42); /*0x229a52*/
    p_Src = &Src; /*0x229a57*/
    if ( si128.m128i_i64[1] > 0xFuLL ) /*0x229a60*/
      p_Src = (__int128 *)Src; /*0x229a60*/
    v44 = &Src; /*0x229a65*/
    if ( si128.m128i_i64[1] > 0xFuLL ) /*0x229a69*/
      v44 = (__int128 *)Src; /*0x229a69*/
    v45 = -1; /*0x229a6e*/
    do /*0x229a78*/
      ++v45; /*0x229a75*/
    while ( *((_BYTE *)v44 + v45) ); /*0x229a78*/
    sub_7D030(p_Src, v45, &v68); /*0x229a86*/
    sub_7D300(&v68, v77); /*0x229a93*/
    v68 = 0; /*0x229a9b*/
    v69 = 0; /*0x229aa2*/
    v46 = -1; /*0x229aab*/
    do /*0x229ab5*/
      ++v46; /*0x229ab2*/
    while ( v77[v46] ); /*0x229ab5*/
    sub_3C230(&v68); /*0x229ac4*/
    v47 = sub_3C160(Buf1, &v68); /*0x229ad6*/
    sub_3C310(&v68); /*0x229adc*/
    if ( v47 ) /*0x229ae3*/
    {
      v48 = *(_QWORD *)(a1 + 1352); /*0x229ae5*/
      if ( v48 ) /*0x229aef*/
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v48 + 24LL))(v48, v6); /*0x229afb*/
    }
    else
    {
      for ( j = 0; j < cocos2d::CCArray::count(v27); ++j ) /*0x229b1e*/
      {
        v53 = cocos2d::CCArray::objectAtIndex(v27, j); /*0x229b3b*/
        v54 = cocos2d::CCString::createWithFormat("pack_%i", *((_DWORD *)v53 + 82)); /*0x229b4b*/
        v55 = cocos2d::CCString::getCString(v54); /*0x229b54*/
        v68 = 0; /*0x229b5d*/
        v69 = 0; /*0x229b64*/
        v56 = -1; /*0x229b69*/
        do /*0x229b73*/
          ++v56; /*0x229b70*/
        while ( v55[v56] ); /*0x229b73*/
        sub_3C230(&v68); /*0x229b81*/
        cocos2d::CCDictionary::setObject(*(_QWORD *)(a1 + 1176), v53, &v68); /*0x229b95*/
        if ( *((_QWORD *)&v69 + 1) > 0xFu ) /*0x229ba4*/
        {
          v57 = (void *)v68; /*0x229ba9*/
          if ( (unsigned __int64)(*((_QWORD *)&v69 + 1) + 1LL) >= 0x1000 ) /*0x229bb7*/
          {
            v57 = *(void **)(v68 - 8); /*0x229bbd*/
            if ( (unsigned __int64)(v68 - (_QWORD)v57 - 8) > 0x1F ) /*0x229bcc*/
              invoke_watson(0, 0, 0, 0, 0); /*0x229c76*/
          }
          j_j_free(v57); /*0x229bd2*/
        }
      }
      if ( *(_QWORD *)(a1 + 1352) ) /*0x229bea*/
      {
        v58 = sub_3E4F0(&v68, &Buf2); /*0x229bfc*/
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 1352) + 32LL))( /*0x229c15*/
          *(_QWORD *)(a1 + 1352),
          v58,
          v6);
      }
      v68 = 0; /*0x229c1b*/
      v69 = 0u; /*0x229c1f*/
      p_Buf2 = &Buf2; /*0x229c27*/
      if ( v74 > 0xF ) /*0x229c30*/
        p_Buf2 = (__int128 *)Buf2; /*0x229c30*/
      v60 = 0x7FFFFFFFFFFFFFFFLL; /*0x229c35*/
      v61 = v73; /*0x229c3f*/
      if ( v73 > 0x7FFFFFFFFFFFFFFFLL ) /*0x229c46*/
        sub_8D90(v51, v50, v52); /*0x229d49*/
      if ( v73 > 0xF ) /*0x229c50*/
      {
        if ( (v73 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x229c87*/
        {
          v60 = v73 | 0xF; /*0x229c89*/
          if ( (v73 | 0xF) < 0x16 ) /*0x229c94*/
            v60 = 22; /*0x229c94*/
        }
        *(_QWORD *)&v68 = sub_3C460(v60 + 1); /*0x229ca1*/
        *(_QWORD *)&v69 = v61; /*0x229ca5*/
        *((_QWORD *)&v69 + 1) = v60; /*0x229ca9*/
        memcpy((void *)v68, p_Buf2, v61 + 1); /*0x229cb7*/
      }
      else
      {
        *(_QWORD *)&v69 = v73; /*0x229c52*/
        *((_QWORD *)&v69 + 1) = 15; /*0x229c56*/
        v68 = *p_Buf2; /*0x229c61*/
      }
      GameLevelManager_markItemAsLiked(a1, (__int64)v27, &v68, v6); /*0x229cc9*/
      v62 = *(_QWORD *)(a1 + 1352); /*0x229cce*/
      if ( v62 ) /*0x229cd8*/
        (*(void (__fastcall **)(__int64, cocos2d::CCArray *, __int64))(*(_QWORD *)v62 + 8LL))(v62, v27, v6); /*0x229ce3*/
    }
    sub_3C310(&Src); /*0x229ceb*/
    sub_3C310(Buf1); /*0x229cf5*/
    sub_3C310(&Buf2); /*0x229cff*/
    sub_3C310(v76); /*0x229d09*/
    sub_3C310(a2); /*0x229d12*/
    v15 = a3; /*0x229d18*/
  }
  return sub_3C310(v15); /*0x229d22*/
}

// [38/86] Address: 0x22aad0
// Method: GameLevelManager::onGetGauntletsCompleted
// Hidden C++ exception states: #wind=7
double __fastcall GameLevelManager_onGetGauntletsCompleted(__int64 a1, unsigned __int64 *a2, __int64 *a3)
{
  __int64 v5; // r13
  __int64 *v6; // rsi
  const void *v7; // rcx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  size_t v10; // r8
  _BYTE *v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // r8
  cocos2d::CCArray *v14; // rdi
  void *v15; // r8
  __int64 v16; // rcx
  cocos2d::CCString *v17; // rax
  const char *CString; // rax
  __int64 v19; // r8
  cocos2d::CCString *v20; // rax
  const char *v21; // rax
  __int64 v22; // r8
  cocos2d::CCString *v23; // rax
  const char *v24; // rax
  __int64 v25; // r8
  cocos2d::CCString *v26; // rax
  const char *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  unsigned int *v33; // rbx
  __int64 v34; // rcx
  __int64 *v35; // rbx
  __int64 *i; // rdi
  __int64 v37; // rdi
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rbx
  void **v40; // rcx
  void **v41; // r13
  unsigned __int64 v42; // rsi
  void **v43; // rsi
  void (__fastcall ***v44)(_QWORD, __int64, __int64, __int64); // rcx
  __int64 v46; // [rsp+30h] [rbp-D0h]
  __int64 v47; // [rsp+38h] [rbp-C8h]
  char v49[32]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 *v50; // [rsp+70h] [rbp-90h]
  __int64 *v51; // [rsp+78h] [rbp-88h]
  __int128 Buf2; // [rsp+80h] [rbp-80h] BYREF
  __m128i si128; // [rsp+90h] [rbp-70h]
  void *Src[2]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v55; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v56; // [rsp+B8h] [rbp-48h]
  _OWORD v57[2]; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v58[2]; // [rsp+E0h] [rbp-20h] BYREF
  _OWORD v59[2]; // [rsp+100h] [rbp+0h] BYREF

  v5 = a1; /*0x22ab00*/
  v50 = a2; /*0x22ab08*/
  v51 = a3; /*0x22ab0d*/
  v6 = a3; /*0x22ab12*/
  v46 = (__int64)a3; /*0x22ab15*/
  if ( (unsigned __int64)a3[3] > 0xF ) /*0x22ab1f*/
  {
    v6 = (__int64 *)*a3; /*0x22ab21*/
    v46 = *a3; /*0x22ab24*/
  }
  sub_21EA30(a1, v6); /*0x22ab2c*/
  Buf2 = 0; /*0x22ab34*/
  si128.m128i_i64[0] = 2; /*0x22ab3e*/
  si128.m128i_i64[1] = 15; /*0x22ab42*/
  strcpy((char *)&Buf2, "-1"); /*0x22ab4f*/
  v7 = a2; /*0x22ab57*/
  v8 = a2[3]; /*0x22ab5a*/
  if ( v8 > 0xF ) /*0x22ab62*/
    v7 = (const void *)*a2; /*0x22ab64*/
  v9 = a2[2]; /*0x22ab67*/
  v10 = v9; /*0x22ab6b*/
  if ( v9 > 2 ) /*0x22ab71*/
    v10 = 2; /*0x22ab71*/
  if ( !memcmp(v7, &Buf2, v10) && v9 == 2 ) /*0x22ab85*/
    goto LABEL_19; /*0x22ab85*/
  v11 = a2; /*0x22ab8b*/
  if ( v8 > 0xF ) /*0x22ab92*/
    v11 = (_BYTE *)*a2; /*0x22ab94*/
  Buf2 = 0; /*0x22ab9a*/
  si128 = 0; /*0x22aba1*/
  v12 = -1; /*0x22aba6*/
  v13 = -1; /*0x22abad*/
  do /*0x22abb3*/
    ++v13; /*0x22abb0*/
  while ( v11[v13] ); /*0x22abb3*/
  sub_3C230(&Buf2); /*0x22abbe*/
  v14 = (cocos2d::CCArray *)sub_D09B0(&Buf2, &unk_74CF9C); /*0x22abd4*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x22abdf*/
  {
    v15 = (void *)Buf2; /*0x22abe4*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x22abf2*/
    {
      v15 = *(void **)(Buf2 - 8); /*0x22abf8*/
      if ( (unsigned __int64)(Buf2 - (_QWORD)v15 - 8) > 0x1F ) /*0x22ac07*/
        invoke_watson(0, 0, 0, 0, 0); /*0x22ac1b*/
    }
    j_j_free(v15); /*0x22ac25*/
  }
  si128 = _mm_load_si128((const __m128i *)&Size); /*0x22ac32*/
  LOBYTE(Buf2) = 0; /*0x22ac37*/
  if ( cocos2d::CCArray::count(v14) < 4 ) /*0x22ac47*/
  {
LABEL_19:
    v16 = *(_QWORD *)(v5 + 1352); /*0x22ac49*/
    if ( v16 ) /*0x22ac53*/
      (*(void (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v16 + 16LL))(v16, v6, 1); /*0x22ac65*/
  }
  else
  {
    v17 = cocos2d::CCArray::objectAtIndex(v14, 0); /*0x22ac72*/
    CString = cocos2d::CCString::getCString(v17); /*0x22ac7b*/
    memset(v58, 0, sizeof(v58)); /*0x22ac84*/
    v19 = -1; /*0x22ac90*/
    do /*0x22ac96*/
      ++v19; /*0x22ac93*/
    while ( CString[v19] ); /*0x22ac96*/
    sub_3C230(v58); /*0x22aca4*/
    v20 = cocos2d::CCArray::objectAtIndex(v14, 1u); /*0x22acb2*/
    v21 = cocos2d::CCString::getCString(v20); /*0x22acbb*/
    memset(v57, 0, sizeof(v57)); /*0x22acc4*/
    v22 = -1; /*0x22acd0*/
    do /*0x22acd6*/
      ++v22; /*0x22acd3*/
    while ( v21[v22] ); /*0x22acd6*/
    sub_3C230(v57); /*0x22ace4*/
    v23 = cocos2d::CCArray::objectAtIndex(v14, 2u); /*0x22acf0*/
    v24 = cocos2d::CCString::getCString(v23); /*0x22acf9*/
    *(_OWORD *)Src = 0; /*0x22ad02*/
    v55 = 0; /*0x22ad09*/
    v56 = 0; /*0x22ad0d*/
    v25 = -1; /*0x22ad11*/
    do /*0x22ad17*/
      ++v25; /*0x22ad14*/
    while ( v24[v25] ); /*0x22ad17*/
    sub_3C230(Src); /*0x22ad24*/
    v26 = cocos2d::CCArray::stringAtIndex(v14, 3u); /*0x22ad32*/
    v27 = cocos2d::CCString::getCString(v26); /*0x22ad3b*/
    memset(v59, 0, sizeof(v59)); /*0x22ad44*/
    do /*0x22ad53*/
      ++v12; /*0x22ad50*/
    while ( v27[v12] ); /*0x22ad53*/
    sub_3C230(v59); /*0x22ad63*/
    v28 = sub_3E4F0(&Buf2, v57); /*0x22ad71*/
    sub_21A100(v5, v28); /*0x22ad7c*/
    v29 = sub_3E4F0(v49, v58); /*0x22ad8a*/
    v31 = sub_21B560(v30, v29); /*0x22ad92*/
    v47 = v31; /*0x22ad97*/
    if ( v31 ) /*0x22ad9f*/
    {
      v33 = *(unsigned int **)(v31 + 56); /*0x22ada1*/
      v34 = *v33; /*0x22ada5*/
      if ( (_DWORD)v34 ) /*0x22ada9*/
      {
        v35 = (__int64 *)*((_QWORD *)v33 + 2); /*0x22adab*/
        for ( i = &v35[v34 - 1]; v35 <= i; ++v35 ) /*0x22adba*/
        {
          v32 = *v35; /*0x22adc0*/
          if ( !*v35 ) /*0x22adc0*/
            break; /*0x22adc6*/
          sub_22D7B0(); /*0x22adc8*/
        }
      }
    }
    v37 = 0x7FFFFFFFFFFFFFFFLL; /*0x22add6*/
    v38 = v56; /*0x22ade6*/
    v39 = v55; /*0x22adea*/
    v40 = (void **)Src[0]; /*0x22adee*/
    if ( *(_QWORD *)(v5 + 1352) ) /*0x22adf2*/
    {
      Buf2 = 0; /*0x22ae03*/
      si128 = 0u; /*0x22ae07*/
      v41 = Src; /*0x22ae0f*/
      if ( v56 > 0xF ) /*0x22ae17*/
        v41 = (void **)Src[0]; /*0x22ae17*/
      if ( v55 > 0x7FFFFFFFFFFFFFFFLL ) /*0x22ae1e*/
        sub_8D90(Src[0], v32, 22); /*0x22afc3*/
      if ( v55 > 0xF ) /*0x22ae28*/
      {
        v42 = v55 | 0xF; /*0x22ae44*/
        if ( (v55 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x22ae4b*/
        {
          if ( v42 < 0x16 ) /*0x22ae55*/
            v42 = 22; /*0x22ae55*/
        }
        else
        {
          v42 = 0x7FFFFFFFFFFFFFFFLL; /*0x22ae4d*/
        }
        *(_QWORD *)&Buf2 = sub_3C460(v42 + 1); /*0x22ae62*/
        si128.m128i_i64[0] = v39; /*0x22ae66*/
        si128.m128i_i64[1] = v42; /*0x22ae6a*/
        memcpy((void *)Buf2, v41, v39 + 1); /*0x22ae78*/
        v6 = (__int64 *)v46; /*0x22ae7d*/
      }
      else
      {
        si128.m128i_i64[0] = v55; /*0x22ae2a*/
        si128.m128i_i64[1] = 15; /*0x22ae2e*/
        Buf2 = *(_OWORD *)v41; /*0x22ae3b*/
      }
      v5 = a1; /*0x22ae82*/
      (*(void (__fastcall **)(_QWORD, __int128 *, __int64 *))(**(_QWORD **)(a1 + 1352) + 32LL))( /*0x22ae98*/
        *(_QWORD *)(a1 + 1352),
        &Buf2,
        v6);
      v38 = v56; /*0x22ae9b*/
      v40 = (void **)Src[0]; /*0x22ae9f*/
    }
    Buf2 = 0; /*0x22aeac*/
    si128 = 0u; /*0x22aeb0*/
    v43 = Src; /*0x22aeb8*/
    if ( v38 > 0xF ) /*0x22aec0*/
      v43 = v40; /*0x22aec0*/
    if ( v39 > 0x7FFFFFFFFFFFFFFFLL ) /*0x22aec7*/
      sub_8D90(v40, v32, 22); /*0x22afbd*/
    if ( v39 > 0xF ) /*0x22aed1*/
    {
      if ( (v39 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x22aef2*/
      {
        v37 = v39 | 0xF; /*0x22aef4*/
        if ( (v39 | 0xF) < 0x16 ) /*0x22aefb*/
          v37 = 22; /*0x22aefb*/
      }
      *(_QWORD *)&Buf2 = sub_3C460(v37 + 1); /*0x22af08*/
      si128.m128i_i64[0] = v39; /*0x22af0c*/
      si128.m128i_i64[1] = v37; /*0x22af10*/
      memcpy((void *)Buf2, v43, v39 + 1); /*0x22af1e*/
    }
    else
    {
      si128.m128i_i64[0] = v39; /*0x22aed3*/
      si128.m128i_i64[1] = 15; /*0x22aed7*/
      Buf2 = *(_OWORD *)v43; /*0x22aee2*/
    }
    GameLevelManager_markItemAsLiked(v5, v47, &Buf2, v46); /*0x22af3a*/
    v44 = *(void (__fastcall ****)(_QWORD, __int64, __int64, __int64))(v5 + 1352); /*0x22af3f*/
    if ( v44 ) /*0x22af49*/
      (**v44)(v44, v47, v46, 1); /*0x22af5a*/
    sub_3C310(v59); /*0x22af61*/
    sub_3C310(Src); /*0x22af6b*/
    sub_3C310(v57); /*0x22af75*/
    sub_3C310(v58); /*0x22af7f*/
  }
  sub_3C310(a2); /*0x22af88*/
  return sub_3C310(a3); /*0x22af96*/
}

// [39/86] Address: 0x22c130
// Method: GameLevelManager::getLevelRateInfo
// Hidden C++ exception states: #wind=4
void __fastcall GameLevelManager_getLevelRateInfo(__int64 a1, int a2)
{
  cocos2d::CCString *v4; // rax
  const char *CString; // rax
  __int64 v6; // rbx
  __int64 v7; // r8
  void **v8; // rdx
  void **v9; // rdx
  __int64 v10; // rcx
  cocos2d::CCString *v11; // rax
  const char *v12; // rax
  cocos2d::CCString *v13; // rax
  char *v14; // rax
  size_t v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  void **v19; // r12
  char *v20; // rsi
  unsigned __int64 v21; // r15
  __int64 v22; // rdi
  unsigned __int64 v23; // r14
  _QWORD *v24; // rdx
  char *v25; // rax
  int Reserved; // [rsp+20h] [rbp-B9h]
  int v27; // [rsp+28h] [rbp-B1h]
  __int128 v28; // [rsp+40h] [rbp-99h] BYREF
  unsigned __int64 v29; // [rsp+50h] [rbp-89h]
  __int64 v30; // [rsp+58h] [rbp-81h]
  __int128 v31; // [rsp+60h] [rbp-79h] BYREF
  __int64 v32; // [rsp+70h] [rbp-69h]
  __int64 v33; // [rsp+78h] [rbp-61h]
  __int128 v34; // [rsp+80h] [rbp-59h] BYREF
  __int64 v35; // [rsp+90h] [rbp-49h]
  __int64 v36; // [rsp+98h] [rbp-41h]
  __int128 *v37; // [rsp+A0h] [rbp-39h]
  __int128 *v38; // [rsp+A8h] [rbp-31h]
  void *Src[2]; // [rsp+B8h] [rbp-21h] BYREF
  unsigned __int64 v40; // [rsp+C8h] [rbp-11h]
  unsigned __int64 v41; // [rsp+D0h] [rbp-9h]
  _QWORD v42[4]; // [rsp+D8h] [rbp-1h] BYREF

  v4 = cocos2d::CCString::createWithFormat("es_dl_%i", a2); /*0x22c166*/
  CString = cocos2d::CCString::getCString(v4); /*0x22c16f*/
  *(_OWORD *)Src = 0; /*0x22c178*/
  v40 = 0; /*0x22c17f*/
  v41 = 0; /*0x22c183*/
  v6 = -1; /*0x22c187*/
  v7 = -1; /*0x22c18e*/
  do /*0x22c194*/
    ++v7; /*0x22c191*/
  while ( CString[v7] ); /*0x22c194*/
  sub_3C230(Src); /*0x22c1a1*/
  v8 = Src; /*0x22c1a7*/
  if ( v41 > 0xF ) /*0x22c1b0*/
    v8 = (void **)Src[0]; /*0x22c1b0*/
  if ( (unsigned __int8)sub_21E890(a1, v8) ) /*0x22c1b8*/
  {
    v21 = v41; /*0x22c3e0*/
    v20 = (char *)Src[0]; /*0x22c3e4*/
  }
  else
  {
    v9 = Src; /*0x22c1c5*/
    if ( v41 > 0xF ) /*0x22c1ce*/
      v9 = (void **)Src[0]; /*0x22c1ce*/
    sub_21E960(a1, v9); /*0x22c1d6*/
    GameLevelManager_getBasePostString(v10, v42); /*0x22c1df*/
    v27 = 98; /*0x22c1f1*/
    Reserved = 103; /*0x22c1f9*/
    v11 = cocos2d::CCString::createWithFormat( /*0x22c21b*/
            "%c%s%s%c%c%s",
            87,
            "mfd",
            "2893",
            Reserved,
            v27,
            (const char *)&word_708030);
    v12 = cocos2d::CCString::getCString(v11); /*0x22c224*/
    v13 = cocos2d::CCString::createWithFormat("&soundID=%i&secret=%s", a2, v12); /*0x22c236*/
    v14 = (char *)cocos2d::CCString::getCString(v13); /*0x22c23f*/
    v15 = -1; /*0x22c245*/
    do /*0x22c253*/
      ++v15; /*0x22c250*/
    while ( v14[v15] ); /*0x22c253*/
    sub_43D80(v42, v14, v15); /*0x22c261*/
    v37 = &v28; /*0x22c26b*/
    v38 = &v34; /*0x22c273*/
    v28 = 0; /*0x22c27a*/
    v29 = 0; /*0x22c27f*/
    v30 = 0; /*0x22c284*/
    v19 = Src; /*0x22c289*/
    v20 = (char *)Src[0]; /*0x22c28d*/
    v21 = v41; /*0x22c291*/
    if ( v41 > 0xF ) /*0x22c299*/
      v19 = (void **)Src[0]; /*0x22c299*/
    v22 = 0x7FFFFFFFFFFFFFFFLL; /*0x22c29d*/
    v23 = v40; /*0x22c2a7*/
    if ( v40 > 0x7FFFFFFFFFFFFFFFLL ) /*0x22c2ae*/
      sub_8D90(v17, v16, v18); /*0x22c458*/
    if ( v40 > 0xF ) /*0x22c2b8*/
    {
      if ( (v40 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x22c2de*/
      {
        v22 = v40 | 0xF; /*0x22c2e0*/
        if ( (v40 | 0xF) < 0x16 ) /*0x22c2eb*/
          v22 = 22; /*0x22c2eb*/
      }
      *(_QWORD *)&v28 = sub_3C460(v22 + 1); /*0x22c2f8*/
      v29 = v23; /*0x22c2fd*/
      v30 = v22; /*0x22c302*/
      memcpy((void *)v28, v19, v23 + 1); /*0x22c311*/
    }
    else
    {
      v29 = v40; /*0x22c2ba*/
      v30 = 15; /*0x22c2bf*/
      v28 = *(_OWORD *)v19; /*0x22c2cd*/
    }
    v24 = v42; /*0x22c317*/
    if ( v42[3] > 0xFu ) /*0x22c320*/
      v24 = (_QWORD *)v42[0]; /*0x22c320*/
    v34 = 0; /*0x22c328*/
    v35 = 0; /*0x22c32f*/
    v36 = 0; /*0x22c333*/
    do /*0x22c33a*/
      ++v6; /*0x22c337*/
    while ( *((_BYTE *)v24 + v6) ); /*0x22c33a*/
    sub_3C230(&v34); /*0x22c347*/
    v31 = 0; /*0x22c350*/
    v32 = 0; /*0x22c354*/
    v33 = 0; /*0x22c358*/
    *(_QWORD *)&v31 = sub_3C460(64); /*0x22c369*/
    v32 = 60; /*0x22c36d*/
    v33 = 63; /*0x22c375*/
    strcpy((char *)v31, "https://www.boomlings.com/database/downloadGJEditorSound.php"); /*0x22c384*/
    sub_216210(a1, &v31, &v34, &v28, 71); /*0x22c3cf*/
    sub_3C310(v42); /*0x22c3d9*/
  }
  if ( v21 > 0xF ) /*0x22c3ec*/
  {
    v25 = v20; /*0x22c3f2*/
    if ( v21 + 1 >= 0x1000 ) /*0x22c3fc*/
    {
      v20 = (char *)*((_QWORD *)v20 - 1); /*0x22c402*/
      if ( (unsigned __int64)(v25 - v20 - 8) > 0x1F ) /*0x22c411*/
        invoke_watson(0, 0, 0, 0, 0); /*0x22c422*/
    }
    j_j_free(v20); /*0x22c42c*/
  }
}

// [40/86] Address: 0x22dd30
// Method: GameLevelManager::onGetTopArtistsCompleted
// Hidden C++ exception states: #wind=5
double __fastcall GameLevelManager_onGetTopArtistsCompleted(__int64 a1, unsigned __int64 *a2, __int64 *a3)
{
  __int64 v6; // r12
  const void *v7; // rcx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  size_t v10; // r8
  _BYTE *v11; // rdx
  __int64 v12; // r8
  cocos2d::CCArray *v13; // rbx
  __int64 v14; // rcx
  cocos2d::CCString *v15; // rax
  const char *CString; // rax
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int128 *p_Buf2; // rsi
  __int64 v22; // rbx
  unsigned __int64 v23; // rdi
  cocos2d::CCArray *v24; // rdi
  signed int i; // ebx
  unsigned int j; // ebx
  struct cocos2d::CCObject *v27; // rsi
  cocos2d::CCString *v28; // rax
  const char *v29; // rax
  __int64 v30; // r8
  void *v31; // rcx
  __int64 v32; // rcx
  __int128 v34; // [rsp+30h] [rbp-59h] BYREF
  unsigned __int64 v35; // [rsp+40h] [rbp-49h]
  __int64 v36; // [rsp+48h] [rbp-41h]
  unsigned __int64 *v37; // [rsp+58h] [rbp-31h]
  __int64 *v38; // [rsp+60h] [rbp-29h]
  __int128 v39; // [rsp+68h] [rbp-21h] BYREF
  __int128 v40; // [rsp+78h] [rbp-11h]
  __int128 Buf2; // [rsp+88h] [rbp-1h] BYREF
  unsigned __int64 v42; // [rsp+98h] [rbp+Fh]
  unsigned __int64 v43; // [rsp+A0h] [rbp+17h]

  v37 = a2; /*0x22dd63*/
  v38 = a3; /*0x22dd67*/
  v6 = (__int64)a3; /*0x22dd6b*/
  if ( (unsigned __int64)a3[3] > 0xF ) /*0x22dd73*/
    v6 = *a3; /*0x22dd75*/
  sub_21EA30(a1, v6); /*0x22dd7b*/
  Buf2 = 0; /*0x22dd83*/
  v42 = 2; /*0x22dd8c*/
  v43 = 15; /*0x22dd90*/
  strcpy((char *)&Buf2, "-1"); /*0x22dd9d*/
  v7 = a2; /*0x22dda5*/
  v8 = a2[3]; /*0x22dda8*/
  if ( v8 > 0xF ) /*0x22ddb0*/
    v7 = (const void *)*a2; /*0x22ddb2*/
  v9 = a2[2]; /*0x22ddb5*/
  v10 = v9; /*0x22ddb9*/
  if ( v9 > 2 ) /*0x22ddbf*/
    v10 = 2; /*0x22ddbf*/
  if ( !memcmp(v7, &Buf2, v10) && v9 == 2 ) /*0x22ddd4*/
    goto LABEL_14; /*0x22ddd4*/
  v11 = a2; /*0x22ddd6*/
  if ( v8 > 0xF ) /*0x22dddd*/
    v11 = (_BYTE *)*a2; /*0x22dddf*/
  v39 = 0; /*0x22dde5*/
  v40 = 0; /*0x22ddec*/
  v12 = -1; /*0x22ddf1*/
  do /*0x22de03*/
    ++v12; /*0x22de00*/
  while ( v11[v12] ); /*0x22de03*/
  sub_3C230(&v39); /*0x22de0e*/
  v13 = (cocos2d::CCArray *)sub_D09B0(&v39, &unk_74CF9C); /*0x22de24*/
  sub_3C310(&v39); /*0x22de2b*/
  if ( cocos2d::CCArray::count(v13) < 2 ) /*0x22de3c*/
  {
LABEL_14:
    v14 = *(_QWORD *)(a1 + 1352); /*0x22de3e*/
    if ( v14 ) /*0x22de48*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 24LL))(v14, v6); /*0x22de54*/
  }
  else
  {
    v15 = cocos2d::CCArray::objectAtIndex(v13, 0); /*0x22de61*/
    CString = cocos2d::CCString::getCString(v15); /*0x22de6a*/
    Buf2 = 0; /*0x22de73*/
    v42 = 0; /*0x22de79*/
    v43 = 0; /*0x22de7d*/
    v17 = -1; /*0x22de81*/
    do /*0x22de93*/
      ++v17; /*0x22de90*/
    while ( CString[v17] ); /*0x22de93*/
    sub_3C230(&Buf2); /*0x22dea0*/
    v34 = 0; /*0x22dea9*/
    v35 = 0; /*0x22dead*/
    v36 = 0; /*0x22deb1*/
    p_Buf2 = &Buf2; /*0x22deb5*/
    if ( v43 > 0xF ) /*0x22debe*/
      p_Buf2 = (__int128 *)Buf2; /*0x22debe*/
    v22 = 0x7FFFFFFFFFFFFFFFLL; /*0x22dec3*/
    v23 = v42; /*0x22decd*/
    if ( v42 > 0x7FFFFFFFFFFFFFFFLL ) /*0x22ded4*/
      sub_8D90(v19, v18, v20); /*0x22e0fc*/
    if ( v42 > 0xF ) /*0x22dede*/
    {
      if ( (v42 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x22deff*/
      {
        v22 = v42 | 0xF; /*0x22df01*/
        if ( (v42 | 0xF) < 0x16 ) /*0x22df0c*/
          v22 = 22; /*0x22df0c*/
      }
      *(_QWORD *)&v34 = sub_3C460(v22 + 1); /*0x22df19*/
      v35 = v23; /*0x22df1d*/
      v36 = v22; /*0x22df21*/
      memcpy((void *)v34, p_Buf2, v23 + 1); /*0x22df2f*/
    }
    else
    {
      v35 = v42; /*0x22dee0*/
      v36 = 15; /*0x22dee4*/
      v34 = *p_Buf2; /*0x22deef*/
    }
    v24 = (cocos2d::CCArray *)sub_21B830(v19, &v34); /*0x22df3d*/
    for ( i = cocos2d::CCArray::count(v24) - 1; i >= 0; --i ) /*0x22df4e*/
    {
      if ( *((int *)cocos2d::CCArray::objectAtIndex(v24, i) + 82) > 62 ) /*0x22df62*/
        cocos2d::CCArray::removeObjectAtIndex(v24, i, 1); /*0x22df6c*/
    }
    for ( j = 0; j < cocos2d::CCArray::count(v24); ++j ) /*0x22df7c*/
    {
      v27 = cocos2d::CCArray::objectAtIndex(v24, j); /*0x22df9b*/
      *((_BYTE *)v27 + 420) = 1; /*0x22df9e*/
      v28 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, *((unsigned int *)v27 + 82)); /*0x22dfb2*/
      v29 = cocos2d::CCString::getCString(v28); /*0x22dfbb*/
      v39 = 0; /*0x22dfc4*/
      v40 = 0; /*0x22dfcb*/
      v30 = -1; /*0x22dfd0*/
      do /*0x22dfe3*/
        ++v30; /*0x22dfe0*/
      while ( v29[v30] ); /*0x22dfe3*/
      sub_3C230(&v39); /*0x22dff1*/
      cocos2d::CCDictionary::setObject(*(_QWORD *)(a1 + 1184), v27, &v39); /*0x22e005*/
      if ( *((_QWORD *)&v40 + 1) > 0xFu ) /*0x22e014*/
      {
        v31 = (void *)v39; /*0x22e019*/
        if ( (unsigned __int64)(*((_QWORD *)&v40 + 1) + 1LL) >= 0x1000 ) /*0x22e027*/
        {
          v31 = *(void **)(v39 - 8); /*0x22e02d*/
          if ( (unsigned __int64)(v39 - (_QWORD)v31 - 8) > 0x1F ) /*0x22e03c*/
            invoke_watson(0, 0, 0, 0, 0); /*0x22e0f5*/
        }
        j_j_free(v31); /*0x22e042*/
      }
    }
    v39 = 0; /*0x22e05d*/
    *(_QWORD *)&v40 = 0; /*0x22e061*/
    *((_QWORD *)&v40 + 1) = 15; /*0x22e069*/
    LOBYTE(v39) = 0; /*0x22e071*/
    GameLevelManager_markItemAsLiked(a1, (__int64)v24, &v39, v6); /*0x22e082*/
    v32 = *(_QWORD *)(a1 + 1352); /*0x22e087*/
    if ( v32 ) /*0x22e091*/
      (*(void (__fastcall **)(__int64, cocos2d::CCArray *, __int64))(*(_QWORD *)v32 + 8LL))(v32, v24, v6); /*0x22e09c*/
    sub_3C310(&Buf2); /*0x22e0a4*/
  }
  sub_3C310(a2); /*0x22e0ad*/
  return sub_3C310(a3); /*0x22e0bb*/
}

// [41/86] Address: 0x22e630
// Method: GameLevelManager::getGauntletLevels
// Hidden C++ exception states: #wind=4
void __fastcall GameLevelManager_getGauntletLevels(__int64 a1, unsigned int a2)
{
  cocos2d::CCString *v4; // rax
  const char *CString; // rax
  __int64 v6; // rbx
  __int64 v7; // r8
  void **v8; // rdx
  void **v9; // rdx
  __int64 v10; // rcx
  cocos2d::CCString *v11; // rax
  char *v12; // rax
  size_t v13; // r8
  cocos2d::CCString *v14; // rax
  char *v15; // rax
  size_t v16; // r8
  void **v17; // rdx
  __int64 v18; // r8
  _QWORD *v19; // rdx
  __int64 v20; // rax
  void *v21; // rcx
  int Reserved; // [rsp+20h] [rbp-E0h]
  int v23; // [rsp+28h] [rbp-D8h]
  __int128 v24; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A0h]
  __int64 v26; // [rsp+68h] [rbp-98h]
  __int128 v27; // [rsp+70h] [rbp-90h] BYREF
  __int64 v28; // [rsp+80h] [rbp-80h]
  __int64 v29; // [rsp+88h] [rbp-78h]
  __int128 v30; // [rsp+90h] [rbp-70h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  __int128 *v33; // [rsp+B0h] [rbp-50h]
  _BYTE v34[32]; // [rsp+B8h] [rbp-48h] BYREF
  void *Block[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v36; // [rsp+E8h] [rbp-18h]
  _QWORD Src[4]; // [rsp+F8h] [rbp-8h] BYREF

  v4 = cocos2d::CCString::createWithFormat("gauntlet_%i", a2); /*0x22e667*/
  CString = cocos2d::CCString::getCString(v4); /*0x22e670*/
  *(_OWORD *)Block = 0; /*0x22e679*/
  v36 = 0; /*0x22e680*/
  v6 = -1; /*0x22e685*/
  v7 = -1; /*0x22e68c*/
  do /*0x22e693*/
    ++v7; /*0x22e690*/
  while ( CString[v7] ); /*0x22e693*/
  sub_3C230(Block); /*0x22e6a0*/
  v8 = Block; /*0x22e6a6*/
  if ( *((_QWORD *)&v36 + 1) > 0xFu ) /*0x22e6af*/
    v8 = (void **)Block[0]; /*0x22e6af*/
  if ( !(unsigned __int8)sub_21E890(a1, v8) ) /*0x22e6b7*/
  {
    v9 = Block; /*0x22e6c4*/
    if ( *((_QWORD *)&v36 + 1) > 0xFu ) /*0x22e6cd*/
      v9 = (void **)Block[0]; /*0x22e6cd*/
    sub_21E960(a1, v9); /*0x22e6d5*/
    GameLevelManager_getBasePostString(v10, Src); /*0x22e6de*/
    sub_43D80(Src, "&gauntlet=", 0xAu); /*0x22e6f5*/
    v11 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, a2); /*0x22e703*/
    v12 = (char *)cocos2d::CCString::getCString(v11); /*0x22e70c*/
    v13 = -1; /*0x22e712*/
    do /*0x22e718*/
      ++v13; /*0x22e715*/
    while ( v12[v13] ); /*0x22e718*/
    sub_43D80(Src, v12, v13); /*0x22e726*/
    sub_43D80(Src, "&secret=", 8u); /*0x22e73c*/
    v23 = 98; /*0x22e74d*/
    Reserved = 103; /*0x22e755*/
    v14 = cocos2d::CCString::createWithFormat( /*0x22e777*/
            "%c%s%s%c%c%s",
            87,
            "mfd",
            "2893",
            Reserved,
            v23,
            (const char *)&word_708030);
    v15 = (char *)cocos2d::CCString::getCString(v14); /*0x22e780*/
    v16 = -1; /*0x22e786*/
    do /*0x22e793*/
      ++v16; /*0x22e790*/
    while ( v15[v16] ); /*0x22e793*/
    sub_43D80(Src, v15, v16); /*0x22e7a1*/
    v33 = &v30; /*0x22e7b4*/
    v17 = Block; /*0x22e7b8*/
    if ( *((_QWORD *)&v36 + 1) > 0xFu ) /*0x22e7c1*/
      v17 = (void **)Block[0]; /*0x22e7c1*/
    v27 = 0; /*0x22e7c9*/
    v28 = 0; /*0x22e7ce*/
    v29 = 0; /*0x22e7d2*/
    v18 = -1; /*0x22e7d6*/
    do /*0x22e7e3*/
      ++v18; /*0x22e7e0*/
    while ( *((_BYTE *)v17 + v18) ); /*0x22e7e3*/
    sub_3C230(&v27); /*0x22e7ef*/
    v19 = Src; /*0x22e7f5*/
    if ( Src[3] > 0xFu ) /*0x22e7fe*/
      v19 = (_QWORD *)Src[0]; /*0x22e7fe*/
    v30 = 0; /*0x22e806*/
    v31 = 0; /*0x22e80a*/
    v32 = 0; /*0x22e80e*/
    do /*0x22e815*/
      ++v6; /*0x22e812*/
    while ( *((_BYTE *)v19 + v6) ); /*0x22e815*/
    sub_3C230(&v30); /*0x22e822*/
    v24 = 0; /*0x22e82b*/
    *(_QWORD *)&v24 = sub_3C460(80); /*0x22e847*/
    v25 = 68; /*0x22e84c*/
    v26 = 79; /*0x22e855*/
    strcpy((char *)v24, "aHR0cDovL3d3dy5ib29tbGluZ3MuY29tL2RhdGFiYXNlL2dldEdKTGV2ZWxzMjEucGhw"); /*0x22e865*/
    v20 = sub_463F60(v34, &v24); /*0x22e89f*/
    sub_216210(a1, v20, &v30, &v27, 2); /*0x22e8bc*/
    sub_3C310(Src); /*0x22e8c6*/
  }
  if ( *((_QWORD *)&v36 + 1) > 0xFu ) /*0x22e8d4*/
  {
    v21 = Block[0]; /*0x22e8d9*/
    if ( (unsigned __int64)(*((_QWORD *)&v36 + 1) + 1LL) >= 0x1000 ) /*0x22e8e7*/
    {
      v21 = (void *)*((_QWORD *)Block[0] - 1); /*0x22e8ed*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v21 - 8) > 0x1F ) /*0x22e8fc*/
        invoke_watson(0, 0, 0, 0, 0); /*0x22e90d*/
    }
    j_j_free(v21); /*0x22e914*/
  }
}

// [42/86] Address: 0x22ef60
// Method: GameLevelManager::processOnDownloadLevelCompleted
// Hidden C++ exception states: #wind=19
double __fastcall GameLevelManager_processOnDownloadLevelCompleted(
        __int64 a1,
        unsigned __int64 *a2,
        _QWORD *a3,
        char a4)
{
  unsigned __int64 *v5; // r15
  __int64 v6; // rsi
  char v7; // r12
  cocos2d::CCArray *v8; // rbx
  __int64 v9; // rcx
  cocos2d::CCString *v10; // rax
  unsigned int v11; // r13d
  cocos2d::CCString *v12; // rax
  cocos2d::CCString *v13; // rax
  _QWORD *v14; // rdx
  cocos2d::CCArray *v15; // rbx
  unsigned __int64 v16; // r14
  char *v17; // rdi
  const void *v18; // rcx
  unsigned __int64 v19; // r15
  size_t v20; // r8
  char v21; // r15
  char *v22; // rax
  __int64 v23; // rcx
  unsigned __int64 *v24; // rcx
  __int64 v25; // r14
  cocos2d::CCString *v26; // rax
  char *CString; // rax
  size_t v28; // r8
  cocos2d::CCString *v29; // rax
  char *v30; // rax
  size_t v31; // r8
  cocos2d::CCString *v32; // rax
  char *v33; // rax
  size_t v34; // r8
  cocos2d::CCString *v35; // rax
  const char *v36; // rax
  __int64 v37; // r8
  cocos2d::CCString *v38; // rax
  const char *v39; // rax
  __int64 v40; // r8
  cocos2d::CCString *v41; // rax
  const char *v42; // rax
  __int64 v43; // r8
  __int64 v44; // rdi
  cocos2d::CCString *v45; // rax
  const char *v46; // rax
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int128 *p_Buf2; // rax
  char *v52; // r12
  size_t v53; // r13
  size_t v54; // r15
  char *v55; // rax
  cocos2d::CCString *v56; // rax
  const char *v57; // rax
  __int64 v58; // r8
  cocos2d::CCString *v59; // rax
  char *v60; // rax
  __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int128 *v65; // r13
  char *v66; // r12
  size_t v67; // r15
  size_t v68; // rbx
  void **v69; // r13
  char *v70; // r15
  size_t v71; // rbx
  __int64 v72; // rcx
  char *v73; // rax
  char *v74; // rax
  __int64 v75; // rax
  __int64 updated; // rax
  __int64 v77; // rdx
  __int64 v78; // rdi
  __int64 v79; // rcx
  int v80; // eax
  int v81; // ebx
  float v82; // xmm0_4
  __int64 v83; // rbx
  __int128 *v84; // rcx
  __int64 v85; // rax
  __int128 *v86; // rdx
  __int64 v87; // rsi
  __int64 v88; // r15
  cocos2d::CCString *v89; // rax
  char *v90; // rax
  size_t v91; // r8
  void **v92; // r8
  void **v93; // r9
  __int64 v94; // rdx
  __int64 v95; // r8
  void **v96; // rdx
  _BYTE *v97; // rbx
  void **v98; // rcx
  char *v99; // r12
  size_t v100; // r13
  size_t v101; // r8
  int v102; // r15d
  char *v103; // rax
  __int64 v104; // rcx
  void *v105; // rcx
  _BYTE *v106; // rax
  void *v107; // rcx
  void *v108; // rcx
  void *v109; // rcx
  void *v110; // rcx
  cocos2d::CCString *v112; // rax
  const char *v113; // rax
  __int64 v114; // r8
  cocos2d::CCString *v115; // rax
  char *v116; // rax
  size_t v117; // r8
  void **v118; // r8
  void **v119; // r9
  __int64 v120; // rdx
  __int64 v121; // r8
  void **v122; // rdx
  _BYTE *v123; // r15
  void **v124; // rcx
  char *v125; // r13
  size_t v126; // r8
  int v127; // r12d
  char *v128; // rax
  __int64 v129; // rcx
  void *v130; // rcx
  void *v131; // rcx
  _BYTE *v132; // rax
  float v133; // xmm0_4
  __int64 v134; // rax
  __int64 v135; // rdx
  unsigned int v136; // r14d
  cocos2d::CCString *v137; // rax
  const char *v138; // rax
  __int64 v139; // rcx
  void (__fastcall ***v140)(_QWORD, __int64, _QWORD); // rcx
  int v141; // eax
  int v142; // eax
  int v143; // eax
  cocos2d::CCArray *v144; // r12
  cocos2d::CCString *v145; // rax
  const char *v146; // rax
  __int64 v147; // r8
  cocos2d::CCString *v148; // rax
  const char *v149; // rax
  __int64 v150; // rcx
  __int64 v151; // r12
  unsigned int v152; // r14d
  __int64 v153; // rcx
  cocos2d::CCString *v154; // rax
  const char *v155; // rax
  void (__fastcall ***v156)(_QWORD, __int64); // rcx
  void *v157; // rcx
  void *v158; // rcx
  _BYTE *v159; // rax
  _BYTE *v160; // rax
  void *v161; // rcx
  void *v162; // rcx
  void *v163; // rcx
  uintptr_t Reserved; // [rsp+20h] [rbp-E0h]
  __int64 v165; // [rsp+28h] [rbp-D8h]
  bool v167; // [rsp+51h] [rbp-AFh]
  unsigned int v168; // [rsp+54h] [rbp-ACh]
  __int128 *Src; // [rsp+58h] [rbp-A8h]
  int Srca; // [rsp+58h] [rbp-A8h]
  int v171; // [rsp+60h] [rbp-A0h]
  void *v173; // [rsp+70h] [rbp-90h]
  void *v174; // [rsp+70h] [rbp-90h]
  void *v175; // [rsp+70h] [rbp-90h]
  char v178[32]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 *v179; // [rsp+B0h] [rbp-50h]
  _QWORD *v180; // [rsp+B8h] [rbp-48h]
  void *Buf1[2]; // [rsp+C0h] [rbp-40h] BYREF
  size_t v182; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v183; // [rsp+D8h] [rbp-28h]
  __int128 Buf2; // [rsp+E0h] [rbp-20h] BYREF
  size_t v185; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v186; // [rsp+F8h] [rbp-8h]
  void *Block[2]; // [rsp+100h] [rbp+0h] BYREF
  size_t v188; // [rsp+110h] [rbp+10h]
  unsigned __int64 v189; // [rsp+118h] [rbp+18h]
  void *v190[2]; // [rsp+120h] [rbp+20h] BYREF
  size_t v191; // [rsp+130h] [rbp+30h]
  unsigned __int64 v192; // [rsp+138h] [rbp+38h]
  void *v193[2]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v194; // [rsp+150h] [rbp+50h]
  unsigned __int64 v195; // [rsp+158h] [rbp+58h]
  void *v196[2]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v197; // [rsp+170h] [rbp+70h]
  unsigned __int64 v198; // [rsp+178h] [rbp+78h]
  __int128 v199; // [rsp+180h] [rbp+80h] BYREF
  __int64 v200; // [rsp+190h] [rbp+90h]
  unsigned __int64 v201; // [rsp+198h] [rbp+98h]
  void *v202[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  size_t v203; // [rsp+1B0h] [rbp+B0h]
  unsigned __int64 v204; // [rsp+1B8h] [rbp+B8h]
  void *v205[2]; // [rsp+1C0h] [rbp+C0h] BYREF
  size_t Size; // [rsp+1D0h] [rbp+D0h]
  unsigned __int64 v207; // [rsp+1D8h] [rbp+D8h]
  void *v208[2]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v209; // [rsp+1F0h] [rbp+F0h]
  unsigned __int64 v210; // [rsp+1F8h] [rbp+F8h]
  __int128 v211; // [rsp+200h] [rbp+100h] BYREF
  __int64 v212; // [rsp+210h] [rbp+110h]
  __int64 v213; // [rsp+218h] [rbp+118h]

  v5 = a2; /*0x22efa1*/
  v6 = a1; /*0x22efa9*/
  v179 = a2; /*0x22efb0*/
  v180 = a3; /*0x22efb4*/
  v7 = 0; /*0x22efb8*/
  v8 = (cocos2d::CCArray *)sub_D09B0(a3, &unk_70F154); /*0x22efcf*/
  if ( cocos2d::CCArray::count(v8) ) /*0x22efd5*/
  {
    v10 = cocos2d::CCArray::stringAtIndex(v8, 0); /*0x22f00f*/
    v11 = cocos2d::CCString::intValue(v10); /*0x22f01e*/
    v168 = v11; /*0x22f021*/
    v12 = cocos2d::CCArray::stringAtIndex(v8, 1u); /*0x22f02f*/
    v167 = cocos2d::CCString::boolValue(v12); /*0x22f03e*/
    v13 = cocos2d::CCArray::stringAtIndex(v8, 2u); /*0x22f04e*/
    v171 = cocos2d::CCString::intValue(v13); /*0x22f05d*/
    v14 = a3; /*0x22f066*/
    if ( a3[3] > 0xFu ) /*0x22f06e*/
      v14 = (_QWORD *)*a3; /*0x22f070*/
    sub_21EA30(v6, v14); /*0x22f076*/
    v15 = (cocos2d::CCArray *)sub_D09B0(v5, &unk_74CF9C); /*0x22f08a*/
    if ( cocos2d::CCArray::count(v15) < 3 ) /*0x22f099*/
    {
      v16 = v186; /*0x22f103*/
      v17 = (char *)Buf2; /*0x22f107*/
    }
    else
    {
      Buf2 = 0; /*0x22f09e*/
      v185 = 2; /*0x22f0a2*/
      v16 = 15; /*0x22f0a6*/
      v186 = 15; /*0x22f0ac*/
      strcpy((char *)&Buf2, "-1"); /*0x22f0b7*/
      v7 = 1; /*0x22f0bf*/
      v17 = (char *)Buf2; /*0x22f0c6*/
      v18 = v5; /*0x22f0ca*/
      if ( v5[3] > 0xF ) /*0x22f0d1*/
        v18 = (const void *)*v5; /*0x22f0d3*/
      v19 = v5[2]; /*0x22f0d6*/
      v20 = v19; /*0x22f0da*/
      if ( v19 > 2 ) /*0x22f0e5*/
        v20 = 2; /*0x22f0e5*/
      if ( memcmp(v18, &Buf2, v20) || v19 != 2 ) /*0x22f0fa*/
      {
        v21 = 0; /*0x22f0fe*/
LABEL_19:
        if ( (v7 & 1) != 0 && v16 > 0xF ) /*0x22f118*/
        {
          v22 = v17; /*0x22f11e*/
          if ( v16 + 1 >= 0x1000 ) /*0x22f128*/
          {
            v17 = (char *)*((_QWORD *)v17 - 1); /*0x22f12e*/
            if ( (unsigned __int64)(v22 - v17 - 8) > 0x1F ) /*0x22f13d*/
              goto LABEL_311; /*0x22f13d*/
          }
          j_j_free(v17); /*0x22f146*/
        }
        if ( v21 ) /*0x22f14e*/
        {
          if ( a4 ) /*0x22f155*/
            v23 = *(_QWORD *)(v6 + 1416); /*0x22f160*/
          else
            v23 = *(_QWORD *)(v6 + 1360); /*0x22f157*/
          if ( v23 ) /*0x22f16a*/
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 8LL))(v23, v11); /*0x22f172*/
          v5 = a2; /*0x22f175*/
          goto LABEL_31; /*0x22f175*/
        }
        v199 = 0; /*0x22f185*/
        v200 = 0; /*0x22f18f*/
        v201 = 15; /*0x22f196*/
        LOBYTE(v199) = 0; /*0x22f1a1*/
        *(_OWORD *)v196 = 0; /*0x22f1a8*/
        v197 = 0; /*0x22f1ac*/
        v198 = 15; /*0x22f1b0*/
        LOBYTE(v196[0]) = 0; /*0x22f1b8*/
        *(_OWORD *)v193 = 0; /*0x22f1bc*/
        v194 = 0; /*0x22f1c0*/
        v195 = 15; /*0x22f1c4*/
        LOBYTE(v193[0]) = 0; /*0x22f1cc*/
        v25 = -1; /*0x22f1d9*/
        if ( cocos2d::CCArray::count(v15) > 6 ) /*0x22f1e3*/
        {
          v26 = cocos2d::CCArray::stringAtIndex(v15, 6u); /*0x22f1ed*/
          CString = (char *)cocos2d::CCString::getCString(v26); /*0x22f1f6*/
          v28 = -1; /*0x22f1fc*/
          do /*0x22f203*/
            ++v28; /*0x22f200*/
          while ( CString[v28] ); /*0x22f203*/
          sub_3F5A0(&v199, CString, v28); /*0x22f214*/
        }
        if ( cocos2d::CCArray::count(v15) > 7 ) /*0x22f225*/
        {
          v29 = cocos2d::CCArray::stringAtIndex(v15, 7u); /*0x22f22f*/
          v30 = (char *)cocos2d::CCString::getCString(v29); /*0x22f238*/
          v31 = -1; /*0x22f23e*/
          do /*0x22f244*/
            ++v31; /*0x22f241*/
          while ( v30[v31] ); /*0x22f244*/
          sub_3F5A0(v196, v30, v31); /*0x22f252*/
        }
        if ( cocos2d::CCArray::count(v15) > 8 ) /*0x22f263*/
        {
          v32 = cocos2d::CCArray::stringAtIndex(v15, 8u); /*0x22f26d*/
          v33 = (char *)cocos2d::CCString::getCString(v32); /*0x22f276*/
          v34 = -1; /*0x22f27c*/
          do /*0x22f283*/
            ++v34; /*0x22f280*/
          while ( v33[v34] ); /*0x22f283*/
          sub_3F5A0(v193, v33, v34); /*0x22f291*/
        }
        v35 = cocos2d::CCArray::stringAtIndex(v15, 0); /*0x22f29b*/
        v36 = cocos2d::CCString::getCString(v35); /*0x22f2a4*/
        *(_OWORD *)v208 = 0; /*0x22f2ad*/
        v209 = 0; /*0x22f2b4*/
        v210 = 0; /*0x22f2bb*/
        v37 = -1; /*0x22f2c2*/
        do /*0x22f2c8*/
          ++v37; /*0x22f2c5*/
        while ( v36[v37] ); /*0x22f2c8*/
        sub_3C230(v208); /*0x22f2d9*/
        v38 = cocos2d::CCArray::stringAtIndex(v15, 1u); /*0x22f2e7*/
        v39 = cocos2d::CCString::getCString(v38); /*0x22f2f0*/
        *(_OWORD *)v205 = 0; /*0x22f2f9*/
        Size = 0; /*0x22f300*/
        v207 = 0; /*0x22f307*/
        v40 = -1; /*0x22f30e*/
        do /*0x22f314*/
          ++v40; /*0x22f311*/
        while ( v39[v40] ); /*0x22f314*/
        sub_3C230(v205); /*0x22f325*/
        v41 = cocos2d::CCArray::stringAtIndex(v15, 2u); /*0x22f333*/
        v42 = cocos2d::CCString::getCString(v41); /*0x22f33c*/
        *(_OWORD *)v202 = 0; /*0x22f345*/
        v203 = 0; /*0x22f34c*/
        v204 = 0; /*0x22f353*/
        v43 = -1; /*0x22f35a*/
        do /*0x22f363*/
          ++v43; /*0x22f360*/
        while ( v42[v43] ); /*0x22f363*/
        sub_3C230(v202); /*0x22f374*/
        v44 = 0x7FFFFFFFFFFFFFFFLL; /*0x22f388*/
        if ( cocos2d::CCArray::count(v15) > 3 ) /*0x22f394*/
        {
          v45 = cocos2d::CCArray::stringAtIndex(v15, 3u); /*0x22f39d*/
          v46 = cocos2d::CCString::getCString(v45); /*0x22f3a6*/
          Buf2 = 0; /*0x22f3af*/
          v185 = 0; /*0x22f3b3*/
          v186 = 0; /*0x22f3b7*/
          v47 = -1; /*0x22f3bb*/
          do /*0x22f3c3*/
            ++v47; /*0x22f3c0*/
          while ( v46[v47] ); /*0x22f3c3*/
          sub_3C230(&Buf2); /*0x22f3d1*/
          *(_OWORD *)Buf1 = 0; /*0x22f3da*/
          v182 = 0; /*0x22f3de*/
          v183 = 0; /*0x22f3e2*/
          p_Buf2 = &Buf2; /*0x22f3e6*/
          v52 = (char *)Buf2; /*0x22f3ea*/
          if ( v186 > 0xF ) /*0x22f3f3*/
            p_Buf2 = (__int128 *)Buf2; /*0x22f3f3*/
          Src = p_Buf2; /*0x22f3f7*/
          v53 = v185; /*0x22f3fc*/
          if ( v185 > 0x7FFFFFFFFFFFFFFFLL ) /*0x22f403*/
            sub_8D90(v49, v48, v50); /*0x230684*/
          if ( v185 > 0xF ) /*0x22f40d*/
          {
            v54 = v185 | 0xF; /*0x22f427*/
            if ( (v185 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x22f42e*/
            {
              if ( v54 < 0x16 ) /*0x22f43e*/
                v54 = 22; /*0x22f43e*/
            }
            else
            {
              v54 = 0x7FFFFFFFFFFFFFFFLL; /*0x22f430*/
            }
            Buf1[0] = (void *)sub_3C460(v54 + 1); /*0x22f44b*/
            v182 = v53; /*0x22f44f*/
            v183 = v54; /*0x22f453*/
            memcpy(Buf1[0], Src, v53 + 1); /*0x22f463*/
          }
          else
          {
            v182 = v185; /*0x22f40f*/
            v183 = 15; /*0x22f413*/
            *(_OWORD *)Buf1 = *p_Buf2; /*0x22f41e*/
          }
          sub_21A100(v6, Buf1); /*0x22f472*/
          if ( v186 > 0xF ) /*0x22f480*/
          {
            v55 = v52; /*0x22f486*/
            if ( v186 + 1 >= 0x1000 ) /*0x22f490*/
            {
              v52 = (char *)*((_QWORD *)v52 - 1); /*0x22f496*/
              if ( (unsigned __int64)(v55 - v52 - 8) > 0x1F ) /*0x22f4a6*/
LABEL_104:
                invoke_watson(0, 0, 0, 0, 0); /*0x22f760*/
            }
            j_j_free(v52); /*0x22f4af*/
          }
        }
        if ( cocos2d::CCArray::count(v15) > 4 ) /*0x22f4c0*/
        {
          v56 = cocos2d::CCArray::stringAtIndex(v15, 4u); /*0x22f4ce*/
          v57 = cocos2d::CCString::getCString(v56); /*0x22f4d7*/
          *(_OWORD *)Block = 0; /*0x22f4e0*/
          v188 = 0; /*0x22f4e4*/
          v189 = 0; /*0x22f4e8*/
          v58 = -1; /*0x22f4ec*/
          do /*0x22f4f3*/
            ++v58; /*0x22f4f0*/
          while ( v57[v58] ); /*0x22f4f3*/
          sub_3C230(Block); /*0x22f501*/
          if ( cocos2d::CCArray::count(v15) <= 5 ) /*0x22f513*/
          {
            v60 = &byte_6E86E0; /*0x22f52e*/
          }
          else
          {
            v59 = cocos2d::CCArray::stringAtIndex(v15, 5u); /*0x22f51d*/
            v60 = (char *)cocos2d::CCString::getCString(v59); /*0x22f526*/
          }
          Buf2 = 0; /*0x22f538*/
          v185 = 0; /*0x22f53c*/
          v186 = 0; /*0x22f540*/
          v61 = -1; /*0x22f544*/
          do /*0x22f553*/
            ++v61; /*0x22f550*/
          while ( v60[v61] ); /*0x22f553*/
          sub_3C230(&Buf2); /*0x22f561*/
          *(_OWORD *)Buf1 = 0; /*0x22f57b*/
          v182 = 0; /*0x22f57f*/
          v183 = 0; /*0x22f583*/
          v65 = &Buf2; /*0x22f587*/
          v66 = (char *)Buf2; /*0x22f58b*/
          if ( v186 > 0xF ) /*0x22f594*/
            v65 = (__int128 *)Buf2; /*0x22f594*/
          v67 = v185; /*0x22f598*/
          if ( v185 > 0x7FFFFFFFFFFFFFFFLL ) /*0x22f59f*/
            sub_8D90(v63, v62, v64); /*0x23068a*/
          if ( v185 > 0xF ) /*0x22f5a9*/
          {
            v68 = v185 | 0xF; /*0x22f5c5*/
            if ( (v185 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x22f5cc*/
            {
              if ( v68 < 0x16 ) /*0x22f5dc*/
                v68 = 22; /*0x22f5dc*/
            }
            else
            {
              v68 = 0x7FFFFFFFFFFFFFFFLL; /*0x22f5ce*/
            }
            Buf1[0] = (void *)sub_3C460(v68 + 1); /*0x22f5e9*/
            v182 = v67; /*0x22f5ed*/
            v183 = v68; /*0x22f5f1*/
            memcpy(Buf1[0], v65, v67 + 1); /*0x22f5ff*/
          }
          else
          {
            v182 = v185; /*0x22f5ab*/
            v183 = 15; /*0x22f5af*/
            *(_OWORD *)Buf1 = *v65; /*0x22f5bc*/
          }
          *(_OWORD *)v190 = 0; /*0x22f608*/
          v191 = 0; /*0x22f60e*/
          v192 = 0; /*0x22f612*/
          v69 = Block; /*0x22f616*/
          v70 = (char *)Block[0]; /*0x22f61a*/
          if ( v189 > 0xF ) /*0x22f623*/
            v69 = (void **)Block[0]; /*0x22f623*/
          v71 = v188; /*0x22f627*/
          if ( v188 > 0x7FFFFFFFFFFFFFFFLL ) /*0x22f62e*/
            sub_8D90(v63, v62, v64); /*0x23067e*/
          if ( v188 > 0xF ) /*0x22f638*/
          {
            if ( (v188 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x22f65b*/
            {
              v44 = v188 | 0xF; /*0x22f65d*/
              if ( (v188 | 0xF) < 0x16 ) /*0x22f669*/
                v44 = 22; /*0x22f669*/
            }
            v190[0] = (void *)sub_3C460(v44 + 1); /*0x22f676*/
            v191 = v71; /*0x22f67a*/
            v192 = v44; /*0x22f67e*/
            memcpy(v190[0], v69, v71 + 1); /*0x22f68c*/
          }
          else
          {
            v191 = v188; /*0x22f63a*/
            v192 = 15; /*0x22f63e*/
            *(_OWORD *)v190 = *(_OWORD *)v69; /*0x22f64b*/
          }
          v72 = qword_906070; /*0x22f692*/
          if ( !qword_906070 ) /*0x22f69c*/
          {
            v173 = operator new(0x3D0u); /*0x22f6a8*/
            qword_906070 = sub_47C350(v173); /*0x22f6b6*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x22f6c7*/
            v72 = qword_906070; /*0x22f6c9*/
          }
          sub_47EF50(v72, v190, Buf1); /*0x22f6d8*/
          if ( v186 > 0xF ) /*0x22f6e6*/
          {
            v73 = v66; /*0x22f6ec*/
            if ( v186 + 1 >= 0x1000 ) /*0x22f6f6*/
            {
              v66 = (char *)*((_QWORD *)v66 - 1); /*0x22f6fc*/
              if ( (unsigned __int64)(v73 - v66 - 8) > 0x1F ) /*0x22f70c*/
                invoke_watson(0, 0, 0, 0, 0); /*0x22f721*/
            }
            j_j_free(v66); /*0x22f72b*/
          }
          if ( v189 > 0xF ) /*0x22f739*/
          {
            v74 = v70; /*0x22f73f*/
            if ( v189 + 1 >= 0x1000 ) /*0x22f749*/
            {
              v70 = (char *)*((_QWORD *)v70 - 1); /*0x22f74f*/
              if ( (unsigned __int64)(v74 - v70 - 8) > 0x1F ) /*0x22f75e*/
                goto LABEL_104; /*0x22f75e*/
            }
            j_j_free(v70); /*0x22f77d*/
          }
        }
        v75 = sub_3E4F0(v178, v208); /*0x22f78d*/
        updated = GJLevelList_updateLevelsString(v75, 0); /*0x22f797*/
        LOBYTE(v77) = 1; /*0x22f79f*/
        v78 = sub_25E6D0(updated, v77); /*0x22f7a6*/
        if ( *(_BYTE *)(v78 + 840) ) /*0x22f7a9*/
        {
          v79 = qword_905FD0; /*0x22f7b2*/
          if ( !qword_905FD0 ) /*0x22f7bc*/
          {
            v174 = operator new(0x6E8u); /*0x22f7c8*/
            qword_905FD0 = sub_2723A0(v174); /*0x22f7d6*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x22f7e7*/
            v79 = qword_905FD0; /*0x22f7e9*/
          }
          if ( GameManager_getGameVariable(v79, "0108") ) /*0x22f7f7*/
            *(_BYTE *)(v78 + 841) = 1; /*0x22f800*/
        }
        if ( v200 ) /*0x22f80f*/
        {
          v80 = sub_2246C0(v6, (unsigned int)(*(_DWORD *)(v78 + 328) - *(_DWORD *)(v78 + 332)), &v199); /*0x22f82e*/
          Srca = v80; /*0x22f833*/
          if ( v80 >= 0 ) /*0x22f839*/
            *(_DWORD *)(v78 + 1980) = v80; /*0x22f83b*/
        }
        else
        {
          Srca = -1; /*0x22f811*/
        }
        if ( v167 ) /*0x22f846*/
          *(_BYTE *)(v78 + 721) = 1; /*0x22f848*/
        if ( v168 == -2 ) /*0x22f854*/
        {
          v81 = *(_DWORD *)(v78 + 992) - *(_DWORD *)(v78 + 996); /*0x22f85c*/
          *(_DWORD *)(v78 + 1000) = v81; /*0x22f862*/
          v82 = (float)((float)rand() / 32767.0) * 1000.0; /*0x22f87d*/
          *(_DWORD *)(v78 + 996) = (int)v82; /*0x22f889*/
          *(_DWORD *)(v78 + 992) = v81 + (int)v82; /*0x22f891*/
        }
        sub_3E4F0(&Buf2, v78 + 408); /*0x22f8a2*/
        *(_OWORD *)v190 = 0; /*0x22f8ab*/
        v83 = 0; /*0x22f8af*/
        v191 = 0; /*0x22f8b1*/
        v192 = 15; /*0x22f8b5*/
        LOBYTE(v190[0]) = 0; /*0x22f8bd*/
        v84 = &Buf2; /*0x22f8c0*/
        if ( v186 > 0xF ) /*0x22f8d0*/
          v84 = (__int128 *)Buf2; /*0x22f8d0*/
        v85 = -1; /*0x22f8d4*/
        do /*0x22f8da*/
          ++v85; /*0x22f8d7*/
        while ( *((_BYTE *)v84 + v85) ); /*0x22f8da*/
        if ( (int)v85 >= 40 ) /*0x22f8e3*/
        {
          v87 = (int)(float)((float)(int)v85 / 40.0); /*0x22f913*/
          v88 = 40; /*0x22f916*/
          do /*0x22f940*/
          {
            sub_3CBD0(v190); /*0x22f934*/
            v83 += v87; /*0x22f939*/
            --v88; /*0x22f93c*/
          }
          while ( v88 ); /*0x22f940*/
          v6 = a1; /*0x22f942*/
        }
        else
        {
          v86 = &Buf2; /*0x22f8e5*/
          if ( v186 > 0xF ) /*0x22f8ed*/
            v86 = (__int128 *)Buf2; /*0x22f8ed*/
          sub_3F5A0(v190, v86, v185); /*0x22f8f9*/
        }
        v89 = cocos2d::CCString::createWithFormat("%c%s%s%c%c%s", 120, "I25", "fpAa", 112, 67, "Qg"); /*0x22f97e*/
        v90 = (char *)cocos2d::CCString::getCString(v89); /*0x22f987*/
        v91 = -1; /*0x22f98d*/
        do /*0x22f993*/
          ++v91; /*0x22f990*/
        while ( v90[v91] ); /*0x22f993*/
        sub_43D80(v190, v90, v91); /*0x22f9a1*/
        v92 = v190; /*0x22f9a6*/
        if ( v192 > 0xF ) /*0x22f9af*/
          v92 = (void **)v190[0]; /*0x22f9af*/
        v93 = v190; /*0x22f9b4*/
        if ( v192 > 0xF ) /*0x22f9b8*/
          v93 = (void **)v190[0]; /*0x22f9b8*/
        v94 = -1; /*0x22f9bd*/
        do /*0x22f9c3*/
          ++v94; /*0x22f9c0*/
        while ( *((_BYTE *)v92 + v94) ); /*0x22f9c3*/
        sub_7D030(v93, v94, Block); /*0x22f9d1*/
        sub_7D300(Block, &v211); /*0x22f9e1*/
        *(_OWORD *)Buf1 = 0; /*0x22f9e9*/
        v182 = 0; /*0x22f9ed*/
        v183 = 0; /*0x22f9f1*/
        v95 = -1; /*0x22f9fc*/
        do /*0x22fa03*/
          ++v95; /*0x22fa00*/
        while ( *((_BYTE *)&v211 + v95) ); /*0x22fa03*/
        sub_3C230(Buf1); /*0x22fa15*/
        v96 = v205; /*0x22fa1a*/
        v97 = v205[0]; /*0x22fa21*/
        if ( v207 > 0xF ) /*0x22fa30*/
          v96 = (void **)v205[0]; /*0x22fa30*/
        v98 = Buf1; /*0x22fa34*/
        v99 = (char *)Buf1[0]; /*0x22fa38*/
        if ( v183 > 0xF ) /*0x22fa41*/
          v98 = (void **)Buf1[0]; /*0x22fa41*/
        v100 = v182; /*0x22fa45*/
        v101 = v182; /*0x22fa49*/
        if ( Size < v182 ) /*0x22fa53*/
          v101 = Size; /*0x22fa53*/
        v102 = memcmp(v98, v96, v101); /*0x22fa60*/
        if ( !v102 ) /*0x22fa65*/
        {
          if ( v100 >= Size ) /*0x22fa71*/
            v102 = v100 > Size; /*0x22fa7e*/
          else
            v102 = -1; /*0x22fa73*/
        }
        if ( v183 > 0xF ) /*0x22fa8a*/
        {
          v103 = v99; /*0x22fa90*/
          if ( v183 + 1 >= 0x1000 ) /*0x22fa9a*/
          {
            v99 = (char *)*((_QWORD *)v99 - 1); /*0x22faa0*/
            if ( (unsigned __int64)(v103 - v99 - 8) > 0x1F ) /*0x22fab0*/
              goto LABEL_276; /*0x22fab0*/
          }
          j_j_free(v99); /*0x22fab9*/
        }
        if ( v102 ) /*0x22fac1*/
        {
          if ( a4 ) /*0x22facc*/
            v104 = *(_QWORD *)(v6 + 1416); /*0x22fad7*/
          else
            v104 = *(_QWORD *)(v6 + 1360); /*0x22face*/
          if ( v104 ) /*0x22fae1*/
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v104 + 8LL))(v104, v168); /*0x22faea*/
          sub_3C310(v190); /*0x22faf2*/
          sub_3C310(&Buf2); /*0x22fafc*/
          if ( v204 <= 0xF ) /*0x22fb0d*/
            goto LABEL_164; /*0x22fb0d*/
          v105 = v202[0]; /*0x22fb12*/
          if ( v204 + 1 < 0x1000 ) /*0x22fb23*/
            goto LABEL_163; /*0x22fb23*/
          v105 = (void *)*((_QWORD *)v202[0] - 1); /*0x22fb29*/
          if ( (unsigned __int64)((char *)v202[0] - (char *)v105 - 8) <= 0x1F ) /*0x22fb38*/
            goto LABEL_163; /*0x22fb38*/
          goto LABEL_286; /*0x22fb38*/
        }
        v112 = cocos2d::CCString::createWithFormat( /*0x22fd74*/
                 "%i,%i,%i,%i,%i,%i,%i,%i",
                 *(_DWORD *)(v78 + 648) - *(_DWORD *)(v78 + 652),
                 *(_DWORD *)(v78 + 1020) - *(_DWORD *)(v78 + 1024),
                 *(_DWORD *)(v78 + 1004) - *(_DWORD *)(v78 + 1008),
                 *(_DWORD *)(v78 + 328) - *(_DWORD *)(v78 + 332),
                 *(_DWORD *)(v78 + 1040) - *(_DWORD *)(v78 + 1044),
                 *(_DWORD *)(v78 + 976),
                 *(_DWORD *)(v78 + 1052) - *(_DWORD *)(v78 + 1056),
                 *(_DWORD *)(v78 + 992) - *(_DWORD *)(v78 + 996));
        v113 = cocos2d::CCString::getCString(v112); /*0x22fd7d*/
        *(_OWORD *)Buf1 = 0; /*0x22fd86*/
        v182 = 0; /*0x22fd8d*/
        v183 = 0; /*0x22fd91*/
        v114 = -1; /*0x22fd95*/
        do /*0x22fda3*/
          ++v114; /*0x22fda0*/
        while ( v113[v114] ); /*0x22fda3*/
        sub_3C230(Buf1); /*0x22fdb0*/
        LODWORD(v165) = 67; /*0x22fdc2*/
        LODWORD(Reserved) = 112; /*0x22fdca*/
        v115 = cocos2d::CCString::createWithFormat("%c%s%s%c%c%s", 120, "I25", "fpAa", Reserved, v165, "Qg"); /*0x22fdec*/
        v116 = (char *)cocos2d::CCString::getCString(v115); /*0x22fdf5*/
        v117 = -1; /*0x22fdfb*/
        do /*0x22fe03*/
          ++v117; /*0x22fe00*/
        while ( v116[v117] ); /*0x22fe03*/
        sub_43D80(Buf1, v116, v117); /*0x22fe11*/
        v118 = Buf1; /*0x22fe16*/
        if ( v183 > 0xF ) /*0x22fe1f*/
          v118 = (void **)Buf1[0]; /*0x22fe1f*/
        v119 = Buf1; /*0x22fe24*/
        if ( v183 > 0xF ) /*0x22fe28*/
          v119 = (void **)Buf1[0]; /*0x22fe28*/
        v120 = -1; /*0x22fe2d*/
        do /*0x22fe33*/
          ++v120; /*0x22fe30*/
        while ( *((_BYTE *)v118 + v120) ); /*0x22fe33*/
        sub_7D030(v119, v120, Block); /*0x22fe41*/
        sub_7D300(Block, &v211); /*0x22fe51*/
        *(_OWORD *)Block = 0; /*0x22fe59*/
        v188 = 0; /*0x22fe5d*/
        v189 = 0; /*0x22fe61*/
        v121 = -1; /*0x22fe6c*/
        do /*0x22fe73*/
          ++v121; /*0x22fe70*/
        while ( *((_BYTE *)&v211 + v121) ); /*0x22fe73*/
        sub_3C230(Block); /*0x22fe85*/
        v122 = v202; /*0x22fe8a*/
        v123 = v202[0]; /*0x22fe91*/
        if ( v204 > 0xF ) /*0x22fea0*/
          v122 = (void **)v202[0]; /*0x22fea0*/
        v124 = Block; /*0x22fea4*/
        v125 = (char *)Block[0]; /*0x22fea8*/
        if ( v189 > 0xF ) /*0x22feb1*/
          v124 = (void **)Block[0]; /*0x22feb1*/
        v126 = v188; /*0x22feb9*/
        if ( v203 < v188 ) /*0x22fec3*/
          v126 = v203; /*0x22fec3*/
        v127 = memcmp(v124, v122, v126); /*0x22fed0*/
        if ( !v127 ) /*0x22fed5*/
        {
          if ( v188 >= v203 ) /*0x22fee5*/
            v127 = v188 > v203; /*0x22fef2*/
          else
            v127 = -1; /*0x22fee7*/
        }
        if ( v189 > 0xF ) /*0x22fefe*/
        {
          v128 = v125; /*0x22ff04*/
          if ( v189 + 1 >= 0x1000 ) /*0x22ff0e*/
          {
            v125 = (char *)*((_QWORD *)v125 - 1); /*0x22ff14*/
            if ( (unsigned __int64)(v128 - v125 - 8) > 0x1F ) /*0x22ff23*/
              invoke_watson(0, 0, 0, 0, 0); /*0x22ff38*/
          }
          j_j_free(v125); /*0x22ff42*/
        }
        if ( v127 ) /*0x22ff4a*/
        {
          if ( !a4 ) /*0x22ff55*/
          {
            v129 = *(_QWORD *)(v6 + 1360); /*0x22ff57*/
LABEL_217:
            if ( v129 ) /*0x22ff6a*/
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v129 + 8LL))(v129, v168); /*0x22ff73*/
            if ( v183 <= 0xF ) /*0x22ff7f*/
              goto LABEL_223; /*0x22ff7f*/
            v130 = Buf1[0]; /*0x22ff84*/
            if ( v183 + 1 < 0x1000 /*0x22ffa7*/
              || (v130 = (void *)*((_QWORD *)Buf1[0] - 1), (unsigned __int64)((char *)Buf1[0] - (char *)v130 - 8) <= 0x1F) )
            {
              j_j_free(v130); /*0x22ffad*/
LABEL_223:
              if ( v192 <= 0xF ) /*0x22ffbb*/
                goto LABEL_227; /*0x22ffbb*/
              v131 = v190[0]; /*0x22ffc0*/
              if ( v192 + 1 < 0x1000 /*0x22ffe3*/
                || (v131 = (void *)*((_QWORD *)v190[0] - 1),
                    (unsigned __int64)((char *)v190[0] - (char *)v131 - 8) <= 0x1F) )
              {
                j_j_free(v131); /*0x22ffe9*/
LABEL_227:
                sub_3C310(&Buf2); /*0x22ffef*/
                if ( v204 <= 0xF ) /*0x230004*/
                  goto LABEL_164; /*0x230004*/
                v132 = v123; /*0x23000e*/
                if ( v204 + 1 < 0x1000 /*0x23002d*/
                  || (v123 = (_BYTE *)*((_QWORD *)v123 - 1), (unsigned __int64)(v132 - v123 - 8) <= 0x1F) )
                {
                  v105 = v123; /*0x230033*/
LABEL_163:
                  j_j_free(v105); /*0x22fb3e*/
LABEL_164:
                  if ( v207 <= 0xF ) /*0x22fb4f*/
                  {
LABEL_168:
                    if ( v210 <= 0xF ) /*0x22fb8e*/
                    {
LABEL_172:
                      if ( v195 <= 0xF ) /*0x22fbcd*/
                      {
LABEL_176:
                        LOBYTE(v193[0]) = 0; /*0x22fc00*/
                        v195 = 15; /*0x22fc05*/
                        v194 = 0; /*0x22fc0d*/
                        if ( v198 <= 0xF ) /*0x22fc19*/
                          goto LABEL_180; /*0x22fc19*/
                        v109 = v196[0]; /*0x22fc1e*/
                        if ( v198 + 1 < 0x1000 /*0x22fc41*/
                          || (v109 = (void *)*((_QWORD *)v196[0] - 1),
                              (unsigned __int64)((char *)v196[0] - (char *)v109 - 8) <= 0x1F) )
                        {
                          j_j_free(v109); /*0x22fc47*/
LABEL_180:
                          v197 = 0; /*0x22fc4c*/
                          v198 = 15; /*0x22fc50*/
                          LOBYTE(v196[0]) = 0; /*0x22fc58*/
                          if ( v201 <= 0xF ) /*0x22fc67*/
                          {
LABEL_184:
                            v200 = 0; /*0x22fc9d*/
                            v201 = 15; /*0x22fca4*/
                            LOBYTE(v199) = 0; /*0x22fcaf*/
                            v24 = a2; /*0x22fcb6*/
                            goto LABEL_185; /*0x22fcb6*/
                          }
                          v110 = (void *)v199; /*0x22fc6c*/
                          if ( v201 + 1 < 0x1000 /*0x22fc92*/
                            || (v110 = *(void **)(v199 - 8), (unsigned __int64)(v199 - (_QWORD)v110 - 8) <= 0x1F) )
                          {
LABEL_183:
                            j_j_free(v110); /*0x22fc98*/
                            goto LABEL_184; /*0x22fc98*/
                          }
LABEL_311:
                          invoke_watson(0, 0, 0, 0, 0); /*0x230664*/
                        }
LABEL_306:
                        invoke_watson(0, 0, 0, 0, 0); /*0x2305f1*/
                      }
                      v108 = v193[0]; /*0x22fbcf*/
                      if ( v195 + 1 < 0x1000 /*0x22fbf5*/
                        || (v108 = (void *)*((_QWORD *)v193[0] - 1),
                            (unsigned __int64)((char *)v193[0] - (char *)v108 - 8) <= 0x1F) )
                      {
                        j_j_free(v108); /*0x22fbfb*/
                        goto LABEL_176; /*0x22fbfb*/
                      }
LABEL_301:
                      invoke_watson(0, 0, 0, 0, 0); /*0x23058f*/
                    }
                    v107 = v208[0]; /*0x22fb90*/
                    if ( v210 + 1 < 0x1000 /*0x22fbb9*/
                      || (v107 = (void *)*((_QWORD *)v208[0] - 1),
                          (unsigned __int64)((char *)v208[0] - (char *)v107 - 8) <= 0x1F) )
                    {
                      j_j_free(v107); /*0x22fbbf*/
                      goto LABEL_172; /*0x22fbbf*/
                    }
LABEL_296:
                    invoke_watson(0, 0, 0, 0, 0); /*0x23053d*/
                  }
                  v106 = v97; /*0x22fb55*/
                  if ( v207 + 1 < 0x1000 /*0x22fb74*/
                    || (v97 = (_BYTE *)*((_QWORD *)v97 - 1), (unsigned __int64)(v106 - v97 - 8) <= 0x1F) )
                  {
                    j_j_free(v97); /*0x22fb7d*/
                    goto LABEL_168; /*0x22fb7d*/
                  }
LABEL_291:
                  invoke_watson(0, 0, 0, 0, 0); /*0x2304e2*/
                }
LABEL_286:
                invoke_watson(0, 0, 0, 0, 0); /*0x23048d*/
              }
LABEL_281:
              invoke_watson(0, 0, 0, 0, 0); /*0x230431*/
            }
LABEL_276:
            invoke_watson(0, 0, 0, 0, 0); /*0x2303df*/
          }
LABEL_216:
          v129 = *(_QWORD *)(v6 + 1416); /*0x22ff60*/
          goto LABEL_217; /*0x22ff60*/
        }
        if ( a4 ) /*0x230040*/
        {
          if ( v171 > 0 ) /*0x23004e*/
          {
            *(_DWORD *)(v78 + 1000) = v171; /*0x230050*/
            v133 = (float)((float)rand() / 32767.0) * 1000.0; /*0x23006c*/
            *(_DWORD *)(v78 + 996) = (int)v133; /*0x230078*/
            *(_DWORD *)(v78 + 992) = v171 + (int)v133; /*0x230081*/
          }
          if ( *(_DWORD *)(v78 + 992) - *(_DWORD *)(v78 + 996) <= 0 ) /*0x230098*/
          {
            v135 = (unsigned int)(*(_DWORD *)(v78 + 328) - *(_DWORD *)(v78 + 332)); /*0x2300a7*/
            if ( *(_BYTE *)(v78 + 721) ) /*0x2300ad*/
              v134 = sub_21D780(v6, v135); /*0x2300b6*/
            else
              v134 = sub_21D5C0(v6, v135); /*0x2300bd*/
          }
          else
          {
            v134 = sub_21D6A0(v6); /*0x23009a*/
          }
          if ( !v134 ) /*0x2300c5*/
            goto LABEL_216; /*0x2300c5*/
          v136 = 1; /*0x2300dc*/
          if ( *(_DWORD *)(v78 + 860) > *(_DWORD *)(v134 + 860) ) /*0x2300e2*/
            v136 = 3; /*0x2300e2*/
          sub_21D860(v6, v78); /*0x2300ec*/
          v137 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v168); /*0x2300fc*/
          v138 = cocos2d::CCString::getCString(v137); /*0x230105*/
          GameLevelManager_makeTimeStamp(v6, (__int64)v138); /*0x230111*/
          GameLevelManager_updateLevelRewards(v139, (_DWORD *)v78); /*0x230119*/
          v140 = *(void (__fastcall ****)(_QWORD, __int64, _QWORD))(v6 + 1416); /*0x23011e*/
          if ( v140 ) /*0x230128*/
            (**v140)(v140, v78, v136); /*0x230137*/
LABEL_269:
          if ( Srca >= 0 ) /*0x230391*/
            *(_DWORD *)(v78 + 1980) = Srca; /*0x230393*/
          if ( v197 ) /*0x23039e*/
            sub_224E00(v140, v78, v196); /*0x2303a7*/
          if ( v183 > 0xF ) /*0x2303b5*/
          {
            v157 = Buf1[0]; /*0x2303ba*/
            if ( v183 + 1 >= 0x1000 ) /*0x2303c8*/
            {
              v157 = (void *)*((_QWORD *)Buf1[0] - 1); /*0x2303ce*/
              if ( (unsigned __int64)((char *)Buf1[0] - (char *)v157 - 8) > 0x1F ) /*0x2303dd*/
                goto LABEL_276; /*0x2303dd*/
            }
            j_j_free(v157); /*0x2303f9*/
          }
          if ( v192 > 0xF ) /*0x230407*/
          {
            v158 = v190[0]; /*0x23040c*/
            if ( v192 + 1 >= 0x1000 ) /*0x23041a*/
            {
              v158 = (void *)*((_QWORD *)v190[0] - 1); /*0x230420*/
              if ( (unsigned __int64)((char *)v190[0] - (char *)v158 - 8) > 0x1F ) /*0x23042f*/
                goto LABEL_281; /*0x23042f*/
            }
            j_j_free(v158); /*0x23044b*/
          }
          sub_3C310(&Buf2); /*0x230455*/
          if ( v204 > 0xF ) /*0x230466*/
          {
            v159 = v123; /*0x23046c*/
            if ( v204 + 1 >= 0x1000 ) /*0x230476*/
            {
              v123 = (_BYTE *)*((_QWORD *)v123 - 1); /*0x23047c*/
              if ( (unsigned __int64)(v159 - v123 - 8) > 0x1F ) /*0x23048b*/
                goto LABEL_286; /*0x23048b*/
            }
            j_j_free(v123); /*0x2304aa*/
          }
          if ( v207 > 0xF ) /*0x2304bb*/
          {
            v160 = v97; /*0x2304c1*/
            if ( v207 + 1 >= 0x1000 ) /*0x2304cb*/
            {
              v97 = (_BYTE *)*((_QWORD *)v97 - 1); /*0x2304d1*/
              if ( (unsigned __int64)(v160 - v97 - 8) > 0x1F ) /*0x2304e0*/
                goto LABEL_291; /*0x2304e0*/
            }
            j_j_free(v97); /*0x2304ff*/
          }
          if ( v210 > 0xF ) /*0x230510*/
          {
            v161 = v208[0]; /*0x230515*/
            if ( v210 + 1 >= 0x1000 ) /*0x230526*/
            {
              v161 = (void *)*((_QWORD *)v208[0] - 1); /*0x23052c*/
              if ( (unsigned __int64)((char *)v208[0] - (char *)v161 - 8) > 0x1F ) /*0x23053b*/
                goto LABEL_296; /*0x23053b*/
            }
            j_j_free(v161); /*0x230557*/
          }
          if ( v195 > 0xF ) /*0x230565*/
          {
            v162 = v193[0]; /*0x23056a*/
            if ( v195 + 1 >= 0x1000 ) /*0x230578*/
            {
              v162 = (void *)*((_QWORD *)v193[0] - 1); /*0x23057e*/
              if ( (unsigned __int64)((char *)v193[0] - (char *)v162 - 8) > 0x1F ) /*0x23058d*/
                goto LABEL_301; /*0x23058d*/
            }
            j_j_free(v162); /*0x2305a9*/
          }
          v194 = 0; /*0x2305b0*/
          v195 = 15; /*0x2305b4*/
          LOBYTE(v193[0]) = 0; /*0x2305bc*/
          if ( v198 > 0xF ) /*0x2305c7*/
          {
            v163 = v196[0]; /*0x2305cc*/
            if ( v198 + 1 >= 0x1000 ) /*0x2305da*/
            {
              v163 = (void *)*((_QWORD *)v196[0] - 1); /*0x2305e0*/
              if ( (unsigned __int64)((char *)v196[0] - (char *)v163 - 8) > 0x1F ) /*0x2305ef*/
                goto LABEL_306; /*0x2305ef*/
            }
            j_j_free(v163); /*0x23060b*/
          }
          v197 = 0; /*0x230610*/
          v198 = 15; /*0x230614*/
          LOBYTE(v196[0]) = 0; /*0x23061c*/
          if ( v201 <= 0xF ) /*0x23062b*/
            goto LABEL_184; /*0x23062b*/
          v110 = (void *)v199; /*0x230634*/
          if ( v201 + 1 < 0x1000 ) /*0x230645*/
            goto LABEL_183; /*0x230645*/
          v110 = *(void **)(v199 - 8); /*0x23064f*/
          if ( (unsigned __int64)(v199 - (_QWORD)v110 - 8) <= 0x1F ) /*0x23065e*/
            goto LABEL_183; /*0x23065e*/
          goto LABEL_311; /*0x23065e*/
        }
        switch ( v168 ) /*0x23014a*/
        {
          case 0xFFFFFFFF: /*0x23014a*/
            sub_21D860(v6, v78); /*0x23014f*/
            v141 = *(_DWORD *)(v78 + 992) - *(_DWORD *)(v78 + 996); /*0x23015a*/
            if ( *(_DWORD *)(v6 + 960) < v141 ) /*0x230166*/
              *(_DWORD *)(v6 + 960) = v141; /*0x230168*/
            break;
          case 0xFFFFFFFE: /*0x23014a*/
            sub_21D860(v6, v78); /*0x230179*/
            v142 = *(_DWORD *)(v78 + 992) - *(_DWORD *)(v78 + 996); /*0x230184*/
            if ( *(_DWORD *)(v6 + 972) < v142 ) /*0x230190*/
              *(_DWORD *)(v6 + 972) = v142; /*0x230192*/
            break;
          case 0xFFFFFFFD: /*0x23014a*/
            sub_21D860(v6, v78); /*0x2301a3*/
            v143 = *(_DWORD *)(v78 + 992) - *(_DWORD *)(v78 + 996); /*0x2301ae*/
            if ( *(_DWORD *)(v6 + 984) < v143 ) /*0x2301ba*/
              *(_DWORD *)(v6 + 984) = v143; /*0x2301bc*/
            break;
          default:
            GameLevelManager_markLevelAsDownloaded(v6, v168); /*0x2301e2*/
            sub_21D860(v6, v78); /*0x2301ed*/
            if ( v194 ) /*0x2301f7*/
            {
              if ( *(_DWORD *)(v78 + 992) - *(_DWORD *)(v78 + 996) > 200000 ) /*0x23020e*/
              {
                v144 = (cocos2d::CCArray *)sub_D09B0(v193, &word_70806C); /*0x230224*/
                if ( cocos2d::CCArray::count(v144) >= 2 ) /*0x230233*/
                {
                  v145 = cocos2d::CCArray::stringAtIndex(v144, 1u); /*0x23024a*/
                  v146 = cocos2d::CCString::getCString(v145); /*0x230253*/
                  *(_OWORD *)Block = 0; /*0x23025c*/
                  v188 = 0; /*0x230262*/
                  v189 = 0; /*0x230266*/
                  v147 = -1; /*0x23026a*/
                  do /*0x230273*/
                    ++v147; /*0x230270*/
                  while ( v146[v147] ); /*0x230273*/
                  sub_3C230(Block); /*0x230280*/
                  v148 = cocos2d::CCArray::stringAtIndex(v144, 0); /*0x23028b*/
                  v149 = cocos2d::CCString::getCString(v148); /*0x230294*/
                  v211 = 0; /*0x23029d*/
                  v212 = 0; /*0x2302a6*/
                  v213 = 0; /*0x2302ad*/
                  do /*0x2302b7*/
                    ++v25; /*0x2302b4*/
                  while ( v149[v25] ); /*0x2302b7*/
                  sub_3C230(&v211); /*0x2302ca*/
                  v151 = sub_25C5E0(v150, &v211, Block); /*0x2302e0*/
                  if ( v151 ) /*0x2302e6*/
                  {
                    v152 = *(_DWORD *)(v78 + 992) - *(_DWORD *)(v78 + 996); /*0x2302ef*/
                    v153 = qword_905FE0; /*0x2302f6*/
                    if ( !qword_905FE0 ) /*0x230300*/
                    {
                      v175 = operator new(0x3E8u); /*0x23030c*/
                      qword_905FE0 = sub_2D2B40(v175); /*0x23031a*/
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x23032b*/
                      v153 = qword_905FE0; /*0x23032e*/
                    }
                    ParticleGameObject_updateParticleAngle(v153, v152, v151); /*0x23033b*/
                  }
                }
              }
            }
            v154 = cocos2d::CCString::createWithFormat("%i_%i_%i", v168, v167, v171); /*0x230355*/
            v155 = cocos2d::CCString::getCString(v154); /*0x23035e*/
            GameLevelManager_makeTimeStamp(v6, (__int64)v155); /*0x23036a*/
            v156 = *(void (__fastcall ****)(_QWORD, __int64))(v6 + 1360); /*0x23036f*/
            if ( v156 ) /*0x230379*/
              (**v156)(v156, v78); /*0x230381*/
            GameLevelManager_updateLevelRewards((__int64)v156, (_DWORD *)v78); /*0x230386*/
            goto LABEL_269; /*0x230386*/
        }
        v140 = *(void (__fastcall ****)(_QWORD, __int64, _QWORD))(v6 + 1360); /*0x2301c2*/
        if ( v140 ) /*0x2301cc*/
          ((void (__fastcall *)(void (__fastcall ***)(_QWORD, __int64, _QWORD), __int64))**v140)(v140, v78); /*0x2301d8*/
        goto LABEL_269; /*0x2301da*/
      }
    }
    v21 = 1; /*0x22f10b*/
    goto LABEL_19; /*0x22f10b*/
  }
  if ( a4 ) /*0x22efe2*/
    v9 = *(_QWORD *)(v6 + 1416); /*0x22efed*/
  else
    v9 = *(_QWORD *)(v6 + 1360); /*0x22efe4*/
  if ( v9 ) /*0x22eff7*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 8LL))(v9, 0); /*0x22f002*/
LABEL_31:
  v24 = v5; /*0x22f17a*/
LABEL_185:
  sub_3C310(v24); /*0x22fcbb*/
  return sub_3C310(a3); /*0x22fccb*/
}

// [43/86] Address: 0x230690
// Method: GameLevelManager::markLevelAsDownloaded
// Hidden C++ exception states: #wind=1
void __fastcall GameLevelManager_markLevelAsDownloaded(__int64 a1, unsigned int a2)
{
  cocos2d::CCString *v4; // rax
  const char *CString; // rax
  __int64 v6; // r8
  void *v7; // rcx
  void *Block[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v9; // [rsp+40h] [rbp-28h]

  if ( cocos2d::CCDictionary::count(*(cocos2d::CCDictionary **)(a1 + 888)) >= 0x64 ) /*0x2306be*/
  {
    cocos2d::CCDictionary::getFirstKey(*(_QWORD *)(a1 + 888), Block); /*0x2306cc*/
    cocos2d::CCDictionary::removeObjectForKey(*(_QWORD *)(a1 + 888), Block); /*0x2306df*/
    sub_3C310(Block); /*0x2306eb*/
  }
  v4 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, a2); /*0x2306f9*/
  CString = cocos2d::CCString::getCString(v4); /*0x230702*/
  *(_OWORD *)Block = 0; /*0x23070b*/
  v9 = 0; /*0x230713*/
  v6 = -1; /*0x230719*/
  do /*0x230723*/
    ++v6; /*0x230720*/
  while ( CString[v6] ); /*0x230723*/
  sub_3C230(Block); /*0x230732*/
  cocos2d::CCDictionary::setObject(*(_QWORD *)(a1 + 888), *(_QWORD *)(a1 + 1648), Block); /*0x23074b*/
  if ( *((_QWORD *)&v9 + 1) > 0xFu ) /*0x23075b*/
  {
    v7 = Block[0]; /*0x230760*/
    if ( (unsigned __int64)(*((_QWORD *)&v9 + 1) + 1LL) >= 0x1000 ) /*0x23076f*/
    {
      v7 = (void *)*((_QWORD *)Block[0] - 1); /*0x230775*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v7 - 8) > 0x1F ) /*0x230784*/
        invoke_watson(0, 0, 0, 0, 0); /*0x230799*/
    }
    j_j_free(v7); /*0x2307a0*/
  }
}

// [44/86] Address: 0x2308a0
// Method: GameLevelManager::updateLevel
// Hidden C++ exception states: #wind=3
double __fastcall GameLevelManager_updateLevel(__int64 a1, __int64 a2)
{
  int v3; // ebx
  cocos2d::CCString *v4; // rax
  const char *CString; // rdi
  __int64 v6; // rcx
  cocos2d::CCString *v7; // rax
  const char *v8; // rax
  cocos2d::CCString *v9; // rax
  char *v10; // rax
  __int64 v11; // rbx
  size_t v12; // r8
  __int64 v13; // r8
  _QWORD *v14; // rdx
  double result; // xmm0_8
  __int128 v16; // [rsp+40h] [rbp-59h] BYREF
  __int64 v17; // [rsp+50h] [rbp-49h]
  __int64 v18; // [rsp+58h] [rbp-41h]
  __int128 v19; // [rsp+60h] [rbp-39h] BYREF
  __int64 v20; // [rsp+70h] [rbp-29h]
  __int64 v21; // [rsp+78h] [rbp-21h]
  __int128 v22; // [rsp+80h] [rbp-19h] BYREF
  __int64 v23; // [rsp+90h] [rbp-9h]
  __int64 v24; // [rsp+98h] [rbp-1h]
  __int128 *v25; // [rsp+A0h] [rbp+7h]
  __int128 *v26; // [rsp+A8h] [rbp+Fh]
  _QWORD Src[4]; // [rsp+B8h] [rbp+1Fh] BYREF

  v3 = *(_DWORD *)(a2 + 328) - *(_DWORD *)(a2 + 332); /*0x2308d1*/
  v4 = cocos2d::CCString::createWithFormat( /*0x2308f6*/
         "%i_%i_%i",
         v3,
         *(unsigned __int8 *)(a2 + 721),
         *(_DWORD *)(a2 + 992) - *(_DWORD *)(a2 + 996));
  CString = cocos2d::CCString::getCString(v4); /*0x230905*/
  if ( !(unsigned __int8)sub_21E890(a1, CString) ) /*0x23090e*/
  {
    sub_21E960(a1, CString); /*0x230921*/
    GameLevelManager_getBasePostString(v6, Src); /*0x23092a*/
    v7 = cocos2d::CCString::createWithFormat("%c%s%s%c%c%s", 87, "mfd", "2893", 103, 98, (const char *)&word_708030); /*0x230966*/
    v8 = cocos2d::CCString::getCString(v7); /*0x23096f*/
    v9 = cocos2d::CCString::createWithFormat("&levelID=%i&gameVersion=%i&secret=%s", v3, 22, v8); /*0x230987*/
    v10 = (char *)cocos2d::CCString::getCString(v9); /*0x230990*/
    v11 = -1; /*0x230996*/
    v12 = -1; /*0x23099d*/
    do /*0x2309a3*/
      ++v12; /*0x2309a0*/
    while ( v10[v12] ); /*0x2309a3*/
    sub_43D80(Src, v10, v12); /*0x2309b1*/
    v25 = &v19; /*0x2309ba*/
    v26 = &v22; /*0x2309c2*/
    v19 = 0; /*0x2309c9*/
    v20 = 0; /*0x2309d0*/
    v21 = 0; /*0x2309d4*/
    v13 = -1; /*0x2309d8*/
    do /*0x2309e3*/
      ++v13; /*0x2309e0*/
    while ( CString[v13] ); /*0x2309e3*/
    sub_3C230(&v19); /*0x2309f0*/
    v14 = Src; /*0x2309f6*/
    if ( Src[3] > 0xFu ) /*0x2309ff*/
      v14 = (_QWORD *)Src[0]; /*0x2309ff*/
    v22 = 0; /*0x230a07*/
    v23 = 0; /*0x230a0b*/
    v24 = 0; /*0x230a0f*/
    do /*0x230a16*/
      ++v11; /*0x230a13*/
    while ( *((_BYTE *)v14 + v11) ); /*0x230a16*/
    sub_3C230(&v22); /*0x230a23*/
    v16 = 0; /*0x230a2c*/
    *(_QWORD *)&v16 = sub_3C460(64); /*0x230a42*/
    v17 = 56; /*0x230a46*/
    v18 = 63; /*0x230a4e*/
    strcpy((char *)v16, "https://www.boomlings.com/database/downloadGJLevel22.php"); /*0x230a5d*/
    sub_216210(a1, &v16, &v22, &v19, 5); /*0x230a9e*/
    return sub_3C310(Src); /*0x230aa8*/
  }
  return result; /*0x230aad*/
}

// [45/86] Address: 0x231300
// Method: GameLevelManager::onRateStarsCompleted
// Hidden C++ exception states: #wind=4
double __fastcall GameLevelManager_onRateStarsCompleted(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  const char *v6; // rcx
  unsigned int v7; // r12d
  const void *v8; // rcx
  unsigned __int64 v9; // r15
  size_t v10; // r8
  int v11; // ebp
  __int64 v12; // rbx
  cocos2d::CCString *v13; // rax
  const char *CString; // rax
  void *v15; // rcx
  __int64 v16; // rcx
  void *v18; // [rsp+30h] [rbp-78h]
  __int128 Buf2; // [rsp+48h] [rbp-60h] BYREF
  __int64 v20; // [rsp+58h] [rbp-50h]
  unsigned __int64 v21; // [rsp+60h] [rbp-48h]

  v6 = (const char *)a3; /*0x231336*/
  if ( *(_QWORD *)(a3 + 24) > 0xFu ) /*0x23133e*/
    v6 = *(const char **)a3; /*0x231340*/
  v7 = atoi(v6); /*0x231349*/
  Buf2 = 0; /*0x23134f*/
  v20 = 2; /*0x231359*/
  v21 = 15; /*0x231364*/
  strcpy((char *)&Buf2, "-1"); /*0x231370*/
  v8 = a2; /*0x23137f*/
  if ( a2[3] > 0xF ) /*0x231386*/
    v8 = (const void *)*a2; /*0x231388*/
  v9 = a2[2]; /*0x23138b*/
  v10 = v9; /*0x23138f*/
  if ( v9 > 2 ) /*0x231395*/
    v10 = 2; /*0x231395*/
  v11 = memcmp(v8, &Buf2, v10); /*0x23139e*/
  v12 = -1; /*0x2313a0*/
  if ( !v11 ) /*0x2313a9*/
  {
    if ( v9 >= 2 ) /*0x2313af*/
      v11 = v9 > 2; /*0x2313bb*/
    else
      v11 = -1; /*0x2313b1*/
  }
  if ( v11 ) /*0x2313c1*/
  {
    v16 = qword_905FE0; /*0x231476*/
    if ( !qword_905FE0 ) /*0x231480*/
    {
      v18 = operator new(0x3E8u); /*0x23148c*/
      qword_905FE0 = sub_2D2B40(v18); /*0x23149a*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x2314ab*/
      v16 = qword_905FE0; /*0x2314ad*/
    }
    GameStatsManager_incrementStat(v16, "11", 1u); /*0x2314c1*/
  }
  else
  {
    v13 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v7); /*0x2313d1*/
    CString = cocos2d::CCString::getCString(v13); /*0x2313da*/
    Buf2 = 0; /*0x2313e3*/
    v20 = 0; /*0x2313ea*/
    v21 = 0; /*0x2313ef*/
    do /*0x2313f7*/
      ++v12; /*0x2313f4*/
    while ( CString[v12] ); /*0x2313f7*/
    sub_3C230(&Buf2); /*0x231408*/
    cocos2d::CCDictionary::removeObjectForKey(*(_QWORD *)(a1 + 904), &Buf2); /*0x23141a*/
    if ( v21 > 0xF ) /*0x23142a*/
    {
      v15 = (void *)Buf2; /*0x231433*/
      if ( v21 + 1 >= 0x1000 ) /*0x231442*/
      {
        v15 = *(void **)(Buf2 - 8); /*0x231448*/
        if ( (unsigned __int64)(Buf2 - (_QWORD)v15 - 8) > 0x1F ) /*0x231457*/
          invoke_watson(0, 0, 0, 0, 0); /*0x231468*/
      }
      j_j_free(v15); /*0x23146f*/
    }
  }
  sub_3C310(a2); /*0x2314ca*/
  return sub_3C310(a3); /*0x2314d8*/
}

// [46/86] Address: 0x231cb0
// Method: GameLevelManager::onBanUserCompleted
// Hidden C++ exception states: #wind=3
double __fastcall GameLevelManager_onBanUserCompleted(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  const void *v6; // rcx
  unsigned __int64 v7; // rbx
  size_t v8; // r8
  cocos2d::CCString *v9; // rax
  const char *CString; // rax
  __int64 v11; // rbx
  __int64 v12; // r8
  __int128 *p_Buf2; // rdx
  void *v14; // rcx
  cocos2d::CCString *v15; // rax
  const char *v16; // rax
  __int64 v17; // r8
  __int128 *v18; // rdx
  void *v19; // rcx
  cocos2d::CCString *v20; // rax
  const char *v21; // rax
  __int64 v22; // r8
  __int128 *v23; // rdx
  void *v24; // rcx
  cocos2d::CCString *v25; // rax
  const char *v26; // rax
  __int128 *v27; // rdx
  void *v28; // rcx
  __int128 Buf2; // [rsp+48h] [rbp-28h] BYREF
  __int128 v31; // [rsp+58h] [rbp-18h]

  Buf2 = 0; /*0x231ce5*/
  *(_QWORD *)&v31 = 2; /*0x231cef*/
  *((_QWORD *)&v31 + 1) = 15; /*0x231cf3*/
  strcpy((char *)&Buf2, "-1"); /*0x231d00*/
  v6 = a2; /*0x231d08*/
  if ( a2[3] > 0xF ) /*0x231d10*/
    v6 = (const void *)*a2; /*0x231d12*/
  v7 = a2[2]; /*0x231d15*/
  v8 = v7; /*0x231d19*/
  if ( v7 > 2 ) /*0x231d1f*/
    v8 = 2; /*0x231d1f*/
  if ( !memcmp(v6, &Buf2, v8) && v7 == 2 ) /*0x231d33*/
    goto LABEL_40; /*0x231d33*/
  v9 = cocos2d::CCString::createWithFormat("lb_%i_%i", 1, 0); /*0x231d48*/
  CString = cocos2d::CCString::getCString(v9); /*0x231d51*/
  Buf2 = 0; /*0x231d5a*/
  v31 = 0; /*0x231d61*/
  v11 = -1; /*0x231d66*/
  v12 = -1; /*0x231d6d*/
  do /*0x231d73*/
    ++v12; /*0x231d70*/
  while ( CString[v12] ); /*0x231d73*/
  sub_3C230(&Buf2); /*0x231d81*/
  p_Buf2 = &Buf2; /*0x231d87*/
  if ( *((_QWORD *)&v31 + 1) > 0xFu ) /*0x231d90*/
    p_Buf2 = (__int128 *)Buf2; /*0x231d90*/
  sub_21EF80(a1, p_Buf2); /*0x231d98*/
  if ( *((_QWORD *)&v31 + 1) > 0xFu ) /*0x231da6*/
  {
    v14 = (void *)Buf2; /*0x231dab*/
    if ( (unsigned __int64)(*((_QWORD *)&v31 + 1) + 1LL) >= 0x1000 ) /*0x231db9*/
    {
      v14 = *(void **)(Buf2 - 8); /*0x231dbf*/
      if ( (unsigned __int64)(Buf2 - (_QWORD)v14 - 8) > 0x1F ) /*0x231dce*/
        goto LABEL_38; /*0x231dce*/
    }
    j_j_free(v14); /*0x231dd4*/
  }
  v15 = cocos2d::CCString::createWithFormat("lb_%i_%i", 1, 1); /*0x231de8*/
  v16 = cocos2d::CCString::getCString(v15); /*0x231df1*/
  Buf2 = 0; /*0x231dfa*/
  v31 = 0; /*0x231e01*/
  v17 = -1; /*0x231e06*/
  do /*0x231e13*/
    ++v17; /*0x231e10*/
  while ( v16[v17] ); /*0x231e13*/
  sub_3C230(&Buf2); /*0x231e21*/
  v18 = &Buf2; /*0x231e27*/
  if ( *((_QWORD *)&v31 + 1) > 0xFu ) /*0x231e30*/
    v18 = (__int128 *)Buf2; /*0x231e30*/
  sub_21EF80(a1, v18); /*0x231e38*/
  if ( *((_QWORD *)&v31 + 1) > 0xFu ) /*0x231e46*/
  {
    v19 = (void *)Buf2; /*0x231e4b*/
    if ( (unsigned __int64)(*((_QWORD *)&v31 + 1) + 1LL) >= 0x1000 ) /*0x231e59*/
    {
      v19 = *(void **)(Buf2 - 8); /*0x231e5f*/
      if ( (unsigned __int64)(Buf2 - (_QWORD)v19 - 8) > 0x1F ) /*0x231e6e*/
        goto LABEL_38; /*0x231e6e*/
    }
    j_j_free(v19); /*0x231e74*/
  }
  v20 = cocos2d::CCString::createWithFormat("lb_%i_%i", 1, 2); /*0x231e88*/
  v21 = cocos2d::CCString::getCString(v20); /*0x231e91*/
  Buf2 = 0; /*0x231e9a*/
  v31 = 0; /*0x231ea1*/
  v22 = -1; /*0x231ea6*/
  do /*0x231eb3*/
    ++v22; /*0x231eb0*/
  while ( v21[v22] ); /*0x231eb3*/
  sub_3C230(&Buf2); /*0x231ec1*/
  v23 = &Buf2; /*0x231ec7*/
  if ( *((_QWORD *)&v31 + 1) > 0xFu ) /*0x231ed0*/
    v23 = (__int128 *)Buf2; /*0x231ed0*/
  sub_21EF80(a1, v23); /*0x231ed8*/
  if ( *((_QWORD *)&v31 + 1) > 0xFu ) /*0x231ee6*/
  {
    v24 = (void *)Buf2; /*0x231eeb*/
    if ( (unsigned __int64)(*((_QWORD *)&v31 + 1) + 1LL) < 0x1000 /*0x231f0e*/
      || (v24 = *(void **)(Buf2 - 8), (unsigned __int64)(Buf2 - (_QWORD)v24 - 8) <= 0x1F) )
    {
      j_j_free(v24); /*0x231f14*/
      goto LABEL_31; /*0x231f14*/
    }
LABEL_38:
    invoke_watson(0, 0, 0, 0, 0); /*0x231fb2*/
  }
LABEL_31:
  v25 = cocos2d::CCString::createWithFormat("lb_%i_%i", 1, 3); /*0x231f19*/
  v26 = cocos2d::CCString::getCString(v25); /*0x231f34*/
  Buf2 = 0; /*0x231f3d*/
  v31 = 0; /*0x231f44*/
  do /*0x231f53*/
    ++v11; /*0x231f50*/
  while ( v26[v11] ); /*0x231f53*/
  sub_3C230(&Buf2); /*0x231f63*/
  v27 = &Buf2; /*0x231f69*/
  if ( *((_QWORD *)&v31 + 1) > 0xFu ) /*0x231f72*/
    v27 = (__int128 *)Buf2; /*0x231f72*/
  sub_21EF80(a1, v27); /*0x231f7a*/
  if ( *((_QWORD *)&v31 + 1) > 0xFu ) /*0x231f88*/
  {
    v28 = (void *)Buf2; /*0x231f8d*/
    if ( (unsigned __int64)(*((_QWORD *)&v31 + 1) + 1LL) >= 0x1000 ) /*0x231f9b*/
    {
      v28 = *(void **)(Buf2 - 8); /*0x231fa1*/
      if ( (unsigned __int64)(Buf2 - (_QWORD)v28 - 8) > 0x1F ) /*0x231fb0*/
        goto LABEL_38; /*0x231fb0*/
    }
    j_j_free(v28); /*0x231fcc*/
  }
LABEL_40:
  sub_3C310(a2); /*0x231fd2*/
  return sub_3C310(a3); /*0x231fe3*/
}

// [47/86] Address: 0x232010
// Method: GameLevelManager::suggestLevelStars
// Hidden C++ exception states: #wind=4
char __fastcall GameLevelManager_suggestLevelStars(__int64 a1, int a2, int a3, int a4, unsigned __int8 a5, int a6)
{
  cocos2d::CCString *v10; // rax
  const char *CString; // rax
  const char *v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v15; // rbx
  void *v16; // r8
  __int64 v18; // r8
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  void *v24; // rcx
  cocos2d::CCString *v25; // rax
  const char *v26; // rax
  cocos2d::CCString *v27; // rax
  char *v28; // rax
  size_t v29; // r8
  __int64 v30; // r8
  _QWORD *v31; // rdx
  __int128 v32; // [rsp+48h] [rbp-91h] BYREF
  __int64 v33; // [rsp+58h] [rbp-81h]
  __int64 v34; // [rsp+60h] [rbp-79h]
  __int128 v35; // [rsp+68h] [rbp-71h] BYREF
  __int64 v36; // [rsp+78h] [rbp-61h]
  __int64 v37; // [rsp+80h] [rbp-59h]
  __int128 *v38; // [rsp+88h] [rbp-51h]
  void *Block[2]; // [rsp+98h] [rbp-41h] BYREF
  __int128 v40; // [rsp+A8h] [rbp-31h]
  _QWORD Src[4]; // [rsp+B8h] [rbp-21h] BYREF

  v10 = cocos2d::CCString::createWithFormat("suggest_%i_%i_%i", a2, a3, a4); /*0x232051*/
  CString = cocos2d::CCString::getCString(v10); /*0x23205a*/
  v12 = CString; /*0x232060*/
  *(_OWORD *)Block = 0; /*0x232066*/
  v40 = 0; /*0x23206d*/
  v13 = -1; /*0x232072*/
  v14 = -1; /*0x232079*/
  do /*0x232083*/
    ++v14; /*0x232080*/
  while ( CString[v14] ); /*0x232083*/
  sub_3C230(Block); /*0x232091*/
  v15 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(a1 + 1200), Block); /*0x2320a8*/
  if ( *((_QWORD *)&v40 + 1) > 0xFu ) /*0x2320b3*/
  {
    v16 = Block[0]; /*0x2320b8*/
    if ( (unsigned __int64)(*((_QWORD *)&v40 + 1) + 1LL) >= 0x1000 ) /*0x2320c6*/
    {
      v16 = (void *)*((_QWORD *)Block[0] - 1); /*0x2320cc*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v16 - 8) > 0x1F ) /*0x2320db*/
        invoke_watson(0, 0, 0, 0, 0); /*0x2320ee*/
    }
    j_j_free(v16); /*0x2320f8*/
  }
  if ( v15 ) /*0x232100*/
    return 0; /*0x232102*/
  *(_OWORD *)Block = 0; /*0x23210c*/
  v40 = 0; /*0x232113*/
  v18 = -1; /*0x232118*/
  do /*0x232123*/
    ++v18; /*0x232120*/
  while ( v12[v18] ); /*0x232123*/
  sub_3C230(Block); /*0x232131*/
  v19 = *(_QWORD *)(a1 + 1200); /*0x232137*/
  v22 = cocos2d::CCNode::create(v21, v20); /*0x23213e*/
  cocos2d::CCDictionary::setObject(v19, v22, Block); /*0x23214e*/
  if ( *((_QWORD *)&v40 + 1) > 0xFu ) /*0x23215d*/
  {
    v24 = Block[0]; /*0x232162*/
    if ( (unsigned __int64)(*((_QWORD *)&v40 + 1) + 1LL) >= 0x1000 ) /*0x232170*/
    {
      v24 = (void *)*((_QWORD *)Block[0] - 1); /*0x232176*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v24 - 8) > 0x1F ) /*0x232185*/
        invoke_watson(0, 0, 0, 0, 0); /*0x232198*/
    }
    j_j_free(v24); /*0x23219f*/
  }
  GameLevelManager_getBasePostString(v23, Src); /*0x2321a8*/
  v25 = cocos2d::CCString::createWithFormat("%c%s%s%c%c%s", 87, "mfp", "3879", 103, 99, (const char *)&word_708044); /*0x2321e4*/
  v26 = cocos2d::CCString::getCString(v25); /*0x2321ed*/
  v27 = cocos2d::CCString::createWithFormat( /*0x232218*/
          "&levelID=%i&stars=%i&feature=%i&coin=%i&demonDiff=%i&secret=%s",
          a2,
          a3,
          a4,
          a5,
          a6,
          v26);
  v28 = (char *)cocos2d::CCString::getCString(v27); /*0x232221*/
  v29 = -1; /*0x232227*/
  do /*0x232233*/
    ++v29; /*0x232230*/
  while ( v28[v29] ); /*0x232233*/
  sub_43D80(Src, v28, v29); /*0x232241*/
  v38 = &v35; /*0x232254*/
  v32 = 0; /*0x23225b*/
  v33 = 0; /*0x232262*/
  v34 = 0; /*0x232267*/
  v30 = -1; /*0x23226b*/
  do /*0x232273*/
    ++v30; /*0x232270*/
  while ( v12[v30] ); /*0x232273*/
  sub_3C230(&v32); /*0x232281*/
  v31 = Src; /*0x232287*/
  if ( Src[3] > 0xFu ) /*0x232290*/
    v31 = (_QWORD *)Src[0]; /*0x232290*/
  v35 = 0; /*0x232298*/
  v36 = 0; /*0x23229c*/
  v37 = 0; /*0x2322a0*/
  do /*0x2322a7*/
    ++v13; /*0x2322a4*/
  while ( *((_BYTE *)v31 + v13) ); /*0x2322a7*/
  sub_3C230(&v35); /*0x2322b4*/
  *(_OWORD *)Block = 0; /*0x2322bd*/
  v40 = 0u; /*0x2322c1*/
  Block[0] = (void *)sub_3C460(64); /*0x2322d6*/
  *(_QWORD *)&v40 = 55; /*0x2322da*/
  *((_QWORD *)&v40 + 1) = 63; /*0x2322e2*/
  strcpy((char *)Block[0], "https://www.boomlings.com/database/suggestGJStars20.php"); /*0x2322f1*/
  sub_216210(a1, Block, &v35, &v32, 51); /*0x232347*/
  sub_3C310(Src); /*0x232351*/
  return 1; /*0x232358*/
}

// [48/86] Address: 0x232380
// Method: GameLevelManager::onSuggestLevelStarsCompleted
// Hidden C++ exception states: #wind=4
double __fastcall GameLevelManager_onSuggestLevelStarsCompleted(__int64 a1, unsigned __int64 *a2, _QWORD *a3)
{
  _QWORD *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rcx
  void *v9; // rcx
  unsigned int SplitIntFromKey; // r12d
  const void *v11; // rcx
  unsigned __int64 v12; // r15
  size_t v13; // r8
  int v14; // ebx
  const void *v15; // rcx
  size_t v16; // r8
  int v17; // ebx
  _DWORD *v18; // rbx
  int v19; // eax
  __int64 v20; // rcx
  void (__fastcall ***v21)(_QWORD, _QWORD, __int64); // rcx
  void *v23; // [rsp+30h] [rbp-40h]
  void *Block[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v25; // [rsp+58h] [rbp-18h]
  unsigned __int64 v26; // [rsp+60h] [rbp-10h]

  v6 = a3; /*0x2323b6*/
  if ( a3[3] > 0xFu ) /*0x2323be*/
    v6 = (_QWORD *)*a3; /*0x2323c0*/
  *(_OWORD *)Block = 0; /*0x2323c6*/
  v25 = 0; /*0x2323cc*/
  v26 = 0; /*0x2323d0*/
  v7 = -1; /*0x2323d4*/
  do /*0x2323e3*/
    ++v7; /*0x2323e0*/
  while ( *((_BYTE *)v6 + v7) ); /*0x2323e3*/
  sub_3C230(Block); /*0x2323f0*/
  cocos2d::CCDictionary::removeObjectForKey(*(_QWORD *)(a1 + 1200), Block); /*0x232401*/
  if ( v26 > 0xF ) /*0x232410*/
  {
    v9 = Block[0]; /*0x232415*/
    if ( v26 + 1 >= 0x1000 ) /*0x232423*/
    {
      v9 = (void *)*((_QWORD *)Block[0] - 1); /*0x232429*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v9 - 8) > 0x1F ) /*0x232438*/
        invoke_watson(0, 0, 0, 0, 0); /*0x232449*/
    }
    j_j_free(v9); /*0x232450*/
  }
  SplitIntFromKey = GameLevelManager_getSplitIntFromKey(v8, v6, 1); /*0x232463*/
  *(_OWORD *)Block = 0; /*0x232469*/
  v25 = 2; /*0x232472*/
  v26 = 15; /*0x23247c*/
  strcpy((char *)Block, "-1"); /*0x232487*/
  v11 = a2; /*0x232493*/
  if ( a2[3] > 0xF ) /*0x23249a*/
    v11 = (const void *)*a2; /*0x23249c*/
  v12 = a2[2]; /*0x23249f*/
  v13 = v12; /*0x2324a3*/
  if ( v12 > 2 ) /*0x2324a9*/
    v13 = 2; /*0x2324a9*/
  v14 = memcmp(v11, Block, v13); /*0x2324b2*/
  if ( !v14 ) /*0x2324b6*/
  {
    if ( v12 >= 2 ) /*0x2324c0*/
      v14 = v12 > 2; /*0x2324ce*/
    else
      v14 = -1; /*0x2324c2*/
  }
  if ( !v14 ) /*0x2324d8*/
    goto LABEL_31; /*0x2324d8*/
  *(_OWORD *)Block = 0; /*0x2324e1*/
  v25 = 2; /*0x2324eb*/
  v26 = 15; /*0x2324ef*/
  strcpy((char *)Block, "-2"); /*0x2324fa*/
  v15 = a2; /*0x232506*/
  if ( a2[3] > 0xF ) /*0x23250e*/
    v15 = (const void *)*a2; /*0x232510*/
  v16 = v12; /*0x232513*/
  if ( v12 > 2 ) /*0x232519*/
    v16 = 2; /*0x232519*/
  v17 = memcmp(v15, Block, v16); /*0x232522*/
  if ( !v17 ) /*0x232526*/
  {
    if ( v12 >= 2 ) /*0x232530*/
      v17 = v12 > 2; /*0x23253e*/
    else
      v17 = -1; /*0x232532*/
  }
  if ( !v17 ) /*0x232543*/
  {
    v18 = (_DWORD *)qword_905FD0; /*0x232549*/
    if ( !qword_905FD0 ) /*0x232553*/
    {
      v23 = operator new(0x6E8u); /*0x23255f*/
      qword_905FD0 = sub_2723A0(v23); /*0x23256c*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x23257d*/
      v18 = (_DWORD *)qword_905FD0; /*0x23257f*/
    }
    v18[268] = 0; /*0x232586*/
    v19 = (int)(float)((float)((float)rand() / 32767.0) * 1000.0); /*0x2325ad*/
    v18[267] = v19; /*0x2325b1*/
    v18[266] = v19; /*0x2325b7*/
LABEL_31:
    v20 = *(_QWORD *)(a1 + 1488); /*0x2325bd*/
    if ( v20 ) /*0x2325c7*/
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v20 + 8LL))(v20, SplitIntFromKey, 51); /*0x2325d5*/
    goto LABEL_35; /*0x2325d8*/
  }
  v21 = *(void (__fastcall ****)(_QWORD, _QWORD, __int64))(a1 + 1488); /*0x2325da*/
  if ( v21 ) /*0x2325e4*/
    (**v21)(v21, SplitIntFromKey, 51); /*0x2325f2*/
LABEL_35:
  sub_3C310(a2); /*0x2325f5*/
  return sub_3C310(a3); /*0x232606*/
}

// [49/86] Address: 0x232630
// Method: GameLevelManager::rateDemon
// Hidden C++ exception states: #wind=5
char __fastcall GameLevelManager_rateDemon(__int64 a1, unsigned int a2, int a3, char a4)
{
  __int64 v8; // rdi
  cocos2d::CCString *v9; // rax
  const char *CString; // rax
  __int64 v11; // r8
  void *v12; // rcx
  cocos2d::CCString *v13; // rax
  const char *v14; // rax
  const char *v15; // rsi
  __int64 v16; // r8
  __int64 v17; // rbx
  void *v18; // r8
  __int64 v20; // r8
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  void *v26; // rcx
  cocos2d::CCString *v27; // rax
  const char *v28; // rax
  cocos2d::CCString *v29; // rax
  char *v30; // rax
  size_t v31; // r8
  __int64 v32; // r8
  _QWORD *v33; // rdx
  __int128 v34; // [rsp+40h] [rbp-79h] BYREF
  __int64 v35; // [rsp+50h] [rbp-69h]
  __int64 v36; // [rsp+58h] [rbp-61h]
  __int128 *v37; // [rsp+60h] [rbp-59h]
  __int128 *v38; // [rsp+68h] [rbp-51h]
  void *Block[2]; // [rsp+78h] [rbp-41h] BYREF
  __int128 v40; // [rsp+88h] [rbp-31h]
  __int128 v41; // [rsp+98h] [rbp-21h] BYREF
  __int64 v42; // [rsp+A8h] [rbp-11h]
  __int64 v43; // [rsp+B0h] [rbp-9h]
  _QWORD Src[4]; // [rsp+B8h] [rbp-1h] BYREF

  v8 = -1; /*0x232667*/
  if ( !a4 ) /*0x232671*/
  {
    if ( (unsigned __int8)sub_2315E0() ) /*0x232677*/
      return 0; /*0x232824*/
    if ( cocos2d::CCDictionary::count(*(cocos2d::CCDictionary **)(a1 + 912)) >= 0x3E8 ) /*0x232696*/
    {
      cocos2d::CCDictionary::getFirstKey(*(_QWORD *)(a1 + 912), &v41); /*0x2326a3*/
      cocos2d::CCDictionary::removeObjectForKey(*(_QWORD *)(a1 + 912), &v41); /*0x2326b5*/
      sub_3C310(&v41); /*0x2326c0*/
    }
    v9 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, a2); /*0x2326cf*/
    CString = cocos2d::CCString::getCString(v9); /*0x2326d8*/
    *(_OWORD *)Block = 0; /*0x2326e1*/
    v40 = 0; /*0x2326e8*/
    v11 = -1; /*0x2326ed*/
    do /*0x2326f3*/
      ++v11; /*0x2326f0*/
    while ( CString[v11] ); /*0x2326f3*/
    sub_3C230(Block); /*0x232701*/
    cocos2d::CCDictionary::setObject(*(_QWORD *)(a1 + 912), *(_QWORD *)(a1 + 1648), Block); /*0x232719*/
    if ( *((_QWORD *)&v40 + 1) > 0xFu ) /*0x232728*/
    {
      v12 = Block[0]; /*0x23272d*/
      if ( (unsigned __int64)(*((_QWORD *)&v40 + 1) + 1LL) >= 0x1000 ) /*0x23273b*/
      {
        v12 = (void *)*((_QWORD *)Block[0] - 1); /*0x232741*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v12 - 8) > 0x1F ) /*0x232750*/
          invoke_watson(0, 0, 0, 0, 0); /*0x232763*/
      }
      j_j_free(v12); /*0x23276a*/
    }
  }
  v13 = cocos2d::CCString::createWithFormat("rd_%i_%i", a2, a3); /*0x23277c*/
  v14 = cocos2d::CCString::getCString(v13); /*0x232785*/
  v15 = v14; /*0x23278b*/
  *(_OWORD *)Block = 0; /*0x232791*/
  v40 = 0; /*0x232798*/
  v16 = -1; /*0x23279d*/
  do /*0x2327a3*/
    ++v16; /*0x2327a0*/
  while ( v14[v16] ); /*0x2327a3*/
  sub_3C230(Block); /*0x2327b1*/
  v17 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(a1 + 1200), Block); /*0x2327c8*/
  if ( *((_QWORD *)&v40 + 1) > 0xFu ) /*0x2327d3*/
  {
    v18 = Block[0]; /*0x2327d8*/
    if ( (unsigned __int64)(*((_QWORD *)&v40 + 1) + 1LL) >= 0x1000 ) /*0x2327e6*/
    {
      v18 = (void *)*((_QWORD *)Block[0] - 1); /*0x2327ec*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v18 - 8) > 0x1F ) /*0x2327fb*/
        invoke_watson(0, 0, 0, 0, 0); /*0x23280e*/
    }
    j_j_free(v18); /*0x232818*/
  }
  if ( v17 ) /*0x232820*/
    return 0; /*0x232820*/
  *(_OWORD *)Block = 0; /*0x23282c*/
  v40 = 0; /*0x232833*/
  v20 = -1; /*0x232838*/
  do /*0x232843*/
    ++v20; /*0x232840*/
  while ( v15[v20] ); /*0x232843*/
  sub_3C230(Block); /*0x232851*/
  v21 = *(_QWORD *)(a1 + 1200); /*0x232857*/
  v24 = cocos2d::CCNode::create(v23, v22); /*0x23285e*/
  cocos2d::CCDictionary::setObject(v21, v24, Block); /*0x23286e*/
  if ( *((_QWORD *)&v40 + 1) > 0xFu ) /*0x23287d*/
  {
    v26 = Block[0]; /*0x232882*/
    if ( (unsigned __int64)(*((_QWORD *)&v40 + 1) + 1LL) >= 0x1000 ) /*0x232890*/
    {
      v26 = (void *)*((_QWORD *)Block[0] - 1); /*0x232896*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v26 - 8) > 0x1F ) /*0x2328a5*/
        invoke_watson(0, 0, 0, 0, 0); /*0x2328b8*/
    }
    j_j_free(v26); /*0x2328bf*/
  }
  GameLevelManager_getBasePostString(v25, Src); /*0x2328c8*/
  v27 = cocos2d::CCString::createWithFormat("%c%s%s%c%c%s", 87, "mfp", "3879", 103, 99, (const char *)&word_708044); /*0x232904*/
  v28 = cocos2d::CCString::getCString(v27); /*0x23290d*/
  v29 = cocos2d::CCString::createWithFormat("&levelID=%i&rating=%i&secret=%s", a2, a3, v28); /*0x232923*/
  v30 = (char *)cocos2d::CCString::getCString(v29); /*0x23292c*/
  v31 = -1; /*0x232932*/
  do /*0x232938*/
    ++v31; /*0x232935*/
  while ( v30[v31] ); /*0x232938*/
  sub_43D80(Src, v30, v31); /*0x232946*/
  if ( a4 ) /*0x23294e*/
    sub_43D80(Src, "&mode=1", 7u); /*0x232961*/
  v37 = &v34; /*0x23296a*/
  v38 = &v41; /*0x232972*/
  v34 = 0; /*0x232979*/
  v35 = 0; /*0x23297f*/
  v36 = 0; /*0x232983*/
  v32 = -1; /*0x232987*/
  do /*0x232993*/
    ++v32; /*0x232990*/
  while ( v15[v32] ); /*0x232993*/
  sub_3C230(&v34); /*0x2329a0*/
  v33 = Src; /*0x2329a6*/
  if ( Src[3] > 0xFu ) /*0x2329af*/
    v33 = (_QWORD *)Src[0]; /*0x2329af*/
  v41 = 0; /*0x2329b7*/
  v42 = 0; /*0x2329bb*/
  v43 = 0; /*0x2329bf*/
  do /*0x2329c6*/
    ++v8; /*0x2329c3*/
  while ( *((_BYTE *)v33 + v8) ); /*0x2329c6*/
  sub_3C230(&v41); /*0x2329d3*/
  *(_OWORD *)Block = 0; /*0x2329dc*/
  v40 = 0u; /*0x2329e0*/
  Block[0] = (void *)sub_3C460(64); /*0x2329f2*/
  *(_QWORD *)&v40 = 52; /*0x2329f6*/
  *((_QWORD *)&v40 + 1) = 63; /*0x2329fe*/
  strcpy((char *)Block[0], "https://www.boomlings.com/database/rateGJDemon21.php"); /*0x232a0d*/
  sub_216210(a1, Block, &v41, &v34, 56); /*0x232a4a*/
  sub_3C310(Src); /*0x232a54*/
  return 1; /*0x232a5b*/
}

// [50/86] Address: 0x232fb0
// Method: GameLevelManager::updateUserScore
// Hidden C++ exception states: #wind=68
double __fastcall GameLevelManager_updateUserScore(__int64 a1)
{
  double result; // xmm0_8
  __int64 v3; // rbx
  void *v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  void *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // r12d
  int v23; // esi
  int v24; // r13d
  int v25; // r14d
  int v26; // edi
  const char *v27; // r15
  int v28; // ebx
  cocos2d::CCString *v29; // rax
  const char *CString; // rax
  unsigned int v31; // esi
  cocos2d::CCString *v32; // rax
  char *v33; // rax
  __int64 v34; // rbx
  size_t v35; // r8
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 DemonLevelsString; // rax
  char v40; // r15
  void *v41; // rcx
  unsigned int CompletedDailyLevels; // r14d
  unsigned int v43; // r12d
  size_t v44; // r13
  void **v45; // rdx
  __int64 v46; // rcx
  unsigned int CompletedWeeklyLevels; // r14d
  __int64 v48; // r9
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 i; // r14
  _DWORD *v52; // rax
  __int64 v53; // rdi
  __int64 v54; // rcx
  unsigned int CompletedEventLevels; // edi
  __int64 v56; // rax
  void *v57; // rdx
  __int64 v58; // rax
  void *v59; // rdx
  __int64 v60; // rax
  void *v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rcx
  _OWORD *StarLevelsString; // rax
  char v65; // r15
  void *v66; // rcx
  unsigned int v67; // r15d
  size_t v68; // rdi
  void **v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r9
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 j; // r14
  _DWORD *v75; // rax
  __int64 v76; // rdi
  __int64 v77; // rcx
  unsigned int v78; // edi
  __int64 v79; // rax
  void *v80; // rdx
  __int64 v81; // rax
  void *v82; // rdx
  __int64 v83; // rax
  void *v84; // rdx
  __int64 v85; // rax
  cocos2d::CCString *v86; // rax
  char *v87; // rax
  size_t v88; // r8
  cocos2d::CCString *v89; // rax
  char *v90; // rax
  size_t v91; // r8
  cocos2d::CCString *v92; // rax
  char *v93; // rax
  size_t v94; // r8
  cocos2d::CCString *v95; // rax
  char *v96; // rax
  size_t v97; // r8
  cocos2d::CCString *v98; // rax
  char *v99; // rax
  size_t v100; // r8
  cocos2d::CCString *v101; // rax
  char *v102; // rax
  size_t v103; // r8
  cocos2d::CCString *v104; // rax
  char *v105; // rax
  size_t v106; // r8
  cocos2d::CCString *v107; // rax
  char *v108; // rax
  size_t v109; // r8
  __int64 v110; // rax
  cocos2d::CCString *v111; // rax
  char *v112; // rax
  size_t v113; // r8
  __int64 v114; // rax
  cocos2d::CCString *v115; // rax
  char *v116; // rax
  size_t v117; // r8
  __int64 v118; // rax
  cocos2d::CCString *v119; // rax
  char *v120; // rax
  size_t v121; // r8
  __int64 v122; // rax
  cocos2d::CCString *v123; // rax
  char *v124; // rax
  size_t v125; // r8
  __int64 v126; // rax
  cocos2d::CCString *v127; // rax
  char *v128; // rax
  size_t v129; // r8
  __int64 v130; // rax
  cocos2d::CCString *v131; // rax
  char *v132; // rax
  size_t v133; // r8
  __int64 v134; // rax
  cocos2d::CCString *v135; // rax
  char *v136; // rax
  size_t v137; // r8
  __int64 v138; // rax
  cocos2d::CCString *v139; // rax
  char *v140; // rax
  size_t v141; // r8
  __int64 v142; // rax
  cocos2d::CCString *v143; // rax
  char *v144; // rax
  size_t v145; // r8
  cocos2d::CCString *v146; // rax
  char *v147; // rax
  size_t v148; // r8
  cocos2d::CCString *v149; // rax
  char *v150; // rax
  size_t v151; // r8
  cocos2d::CCString *v152; // rax
  char *v153; // rax
  size_t v154; // r8
  cocos2d::CCString *v155; // rax
  char *v156; // rax
  size_t v157; // r8
  void **v158; // rdx
  cocos2d::CCString *v159; // rax
  char *v160; // rax
  size_t v161; // r8
  cocos2d::CCString *v162; // rax
  char *v163; // rax
  size_t v164; // r8
  cocos2d::CCString *v165; // rax
  char *v166; // rax
  size_t v167; // r8
  cocos2d::CCString *v168; // rax
  char *v169; // rax
  size_t v170; // r8
  __int128 *v171; // r8
  __int128 *v172; // r9
  __int64 v173; // rdx
  __int64 v174; // r8
  void *v175; // rcx
  const char *v176; // r8
  const char *v177; // rdx
  cocos2d::CCString *v178; // rax
  char *v179; // rax
  size_t v180; // r8
  _QWORD *v181; // rdx
  void *v182; // rcx
  void *v183; // rcx
  uintptr_t Reserved; // [rsp+20h] [rbp-140h]
  __int64 v185; // [rsp+28h] [rbp-138h]
  int v186; // [rsp+80h] [rbp-E0h]
  int v187; // [rsp+E0h] [rbp-80h]
  unsigned int v188; // [rsp+E0h] [rbp-80h]
  int v189; // [rsp+E4h] [rbp-7Ch]
  int v190; // [rsp+E4h] [rbp-7Ch]
  int v191; // [rsp+E8h] [rbp-78h]
  int v192; // [rsp+E8h] [rbp-78h]
  void *v193; // [rsp+F0h] [rbp-70h]
  void *v194; // [rsp+F0h] [rbp-70h]
  void *v195; // [rsp+F0h] [rbp-70h]
  void *v196; // [rsp+F0h] [rbp-70h]
  void *v197; // [rsp+F0h] [rbp-70h]
  int v198; // [rsp+F0h] [rbp-70h]
  void *v199; // [rsp+F0h] [rbp-70h]
  void *v200; // [rsp+F0h] [rbp-70h]
  unsigned int v201; // [rsp+F8h] [rbp-68h]
  unsigned int v202; // [rsp+FCh] [rbp-64h]
  unsigned int Stat; // [rsp+100h] [rbp-60h]
  unsigned int v204; // [rsp+104h] [rbp-5Ch]
  unsigned int v205; // [rsp+108h] [rbp-58h]
  unsigned int v206; // [rsp+10Ch] [rbp-54h]
  void *v207; // [rsp+110h] [rbp-50h]
  int v208; // [rsp+110h] [rbp-50h]
  int v209; // [rsp+118h] [rbp-48h]
  int v210; // [rsp+11Ch] [rbp-44h]
  int v211; // [rsp+120h] [rbp-40h]
  int v212; // [rsp+124h] [rbp-3Ch]
  int v213; // [rsp+128h] [rbp-38h]
  size_t Size[2]; // [rsp+138h] [rbp-28h] BYREF
  __int64 v216; // [rsp+148h] [rbp-18h]
  unsigned __int64 v217; // [rsp+150h] [rbp-10h]
  __int128 v218; // [rsp+158h] [rbp-8h] BYREF
  __int64 v219; // [rsp+168h] [rbp+8h]
  unsigned __int64 v220; // [rsp+170h] [rbp+10h]
  void *v221[2]; // [rsp+178h] [rbp+18h] BYREF
  __int64 v222; // [rsp+188h] [rbp+28h]
  unsigned __int64 v223; // [rsp+190h] [rbp+30h]
  _QWORD Src[4]; // [rsp+198h] [rbp+38h] BYREF
  void *v225[2]; // [rsp+1B8h] [rbp+58h] BYREF
  __int128 v226; // [rsp+1C8h] [rbp+68h]
  __int128 v227; // [rsp+1D8h] [rbp+78h] BYREF
  __int64 v228; // [rsp+1E8h] [rbp+88h]
  __int64 v229; // [rsp+1F0h] [rbp+90h]
  void *Block[2]; // [rsp+1F8h] [rbp+98h] BYREF
  __int128 v231; // [rsp+208h] [rbp+A8h]
  _QWORD v232[4]; // [rsp+218h] [rbp+B8h] BYREF
  _QWORD v233[4]; // [rsp+238h] [rbp+D8h] BYREF
  _QWORD v234[4]; // [rsp+258h] [rbp+F8h] BYREF
  __int128 v235; // [rsp+278h] [rbp+118h] BYREF
  __int64 v236; // [rsp+288h] [rbp+128h]
  __int64 v237; // [rsp+290h] [rbp+130h]

  LODWORD(Size[0]) = 0; /*0x232ff1*/
  result = 0.0; /*0x232ff4*/
  *(_OWORD *)Block = 0; /*0x232ff7*/
  v231 = 0u; /*0x232ffe*/
  sub_3C230(Block); /*0x233020*/
  v3 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(a1 + 1192), Block); /*0x23303a*/
  if ( *((_QWORD *)&v231 + 1) > 0xFu ) /*0x233048*/
  {
    v4 = Block[0]; /*0x23304d*/
    if ( (unsigned __int64)(*((_QWORD *)&v231 + 1) + 1LL) >= 0x1000 ) /*0x23305e*/
    {
      v4 = (void *)*((_QWORD *)Block[0] - 1); /*0x233064*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v4 - 8) > 0x1F ) /*0x233073*/
        invoke_watson(0, 0, 0, 0, 0); /*0x233084*/
    }
    j_j_free(v4); /*0x23308e*/
  }
  if ( !v3 )
  {
    *(_OWORD *)v225 = 0; /*0x23309f*/
    v226 = 0u; /*0x2330a3*/
    sub_3C230(v225); /*0x2330bc*/
    v5 = *(_QWORD *)(a1 + 1192); /*0x2330c2*/
    v8 = cocos2d::CCNode::create(v7, v6); /*0x2330c9*/
    cocos2d::CCDictionary::setObject(v5, v8, v225); /*0x2330d9*/
    if ( *((_QWORD *)&v226 + 1) > 0xFu ) /*0x2330e8*/
    {
      v9 = v225[0]; /*0x2330ed*/
      if ( (unsigned __int64)(*((_QWORD *)&v226 + 1) + 1LL) >= 0x1000 ) /*0x2330fb*/
      {
        v9 = (void *)*((_QWORD *)v225[0] - 1); /*0x233101*/
        if ( (unsigned __int64)((char *)v225[0] - (char *)v9 - 8) > 0x1F ) /*0x233110*/
          invoke_watson(0, 0, 0, 0, 0); /*0x233121*/
      }
      j_j_free(v9); /*0x233128*/
    }
    *(_QWORD *)&v226 = 0; /*0x23312d*/
    *((_QWORD *)&v226 + 1) = 15; /*0x233131*/
    LOBYTE(v225[0]) = 0; /*0x233139*/
    v10 = qword_905FD0; /*0x23313d*/
    if ( !qword_905FD0 ) /*0x233147*/
    {
      Size[0] = (size_t)operator new(0x6E8u); /*0x233153*/
      qword_905FD0 = sub_2723A0(Size[0]); /*0x233160*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x233171*/
      v10 = qword_905FD0; /*0x233173*/
    }
    sub_3E4F0(v232, v10 + 656); /*0x233188*/
    v11 = qword_905FE0; /*0x23318e*/
    if ( !qword_905FE0 ) /*0x233198*/
    {
      Size[0] = (size_t)operator new(0x3E8u); /*0x2331a4*/
      qword_905FE0 = sub_2D2B40(Size[0]); /*0x2331b1*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x2331c2*/
      v11 = qword_905FE0; /*0x2331c4*/
    }
    Stat = GameStatsManager_getStat(v11, "6"); /*0x2331d7*/
    v12 = qword_905FE0; /*0x2331da*/
    if ( !qword_905FE0 ) /*0x2331e4*/
    {
      Size[0] = (size_t)operator new(0x3E8u); /*0x2331f0*/
      qword_905FE0 = sub_2D2B40(Size[0]); /*0x2331fd*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x23320e*/
      v12 = qword_905FE0; /*0x233210*/
    }
    LODWORD(Size[0]) = GameStatsManager_getStat(v12, "28"); /*0x233223*/
    v13 = qword_905FE0; /*0x233226*/
    if ( !qword_905FE0 ) /*0x233230*/
    {
      v193 = operator new(0x3E8u); /*0x23323c*/
      qword_905FE0 = sub_2D2B40(v193); /*0x233249*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x23325a*/
      v13 = qword_905FE0; /*0x23325c*/
    }
    v206 = GameStatsManager_getStat(v13, "13"); /*0x23326f*/
    v14 = qword_905FE0; /*0x233272*/
    if ( !qword_905FE0 ) /*0x23327c*/
    {
      v194 = operator new(0x3E8u); /*0x233288*/
      qword_905FE0 = sub_2D2B40(v194); /*0x233295*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x2332a6*/
      v14 = qword_905FE0; /*0x2332a8*/
    }
    v202 = GameStatsManager_getStat(v14, (const char *)&word_708038); /*0x2332bb*/
    v15 = qword_905FE0; /*0x2332be*/
    if ( !qword_905FE0 ) /*0x2332c8*/
    {
      v195 = operator new(0x3E8u); /*0x2332d4*/
      qword_905FE0 = sub_2D2B40(v195); /*0x2332e1*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x2332f2*/
      v15 = qword_905FE0; /*0x2332f4*/
    }
    v204 = GameStatsManager_getStat(v15, (const char *)&word_708028); /*0x233307*/
    v16 = qword_905FE0; /*0x23330a*/
    if ( !qword_905FE0 ) /*0x233314*/
    {
      v196 = operator new(0x3E8u); /*0x233320*/
      qword_905FE0 = sub_2D2B40(v196); /*0x23332d*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x23333e*/
      v16 = qword_905FE0; /*0x233340*/
    }
    v201 = GameStatsManager_getStat(v16, (const char *)&word_7231BC); /*0x233353*/
    v17 = qword_905FD0; /*0x233356*/
    if ( !qword_905FD0 ) /*0x233360*/
    {
      v197 = operator new(0x6E8u); /*0x23336c*/
      qword_905FD0 = sub_2723A0(v197); /*0x233379*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x23338a*/
      v17 = qword_905FD0; /*0x23338c*/
    }
    v205 = *(_DWORD *)(v17 + 948); /*0x233399*/
    v198 = *(_BYTE *)(v17 + 944) != 0 ? 2 : 0;
    switch ( v205 ) /*0x2333cd*/
    {
      case 1u: /*0x2333cd*/
        v187 = *(_DWORD *)(v17 + 760) - *(_DWORD *)(v17 + 764); /*0x2333db*/
        break; /*0x2333de*/
      case 2u: /*0x2333cd*/
        v187 = *(_DWORD *)(v17 + 772) - *(_DWORD *)(v17 + 776); /*0x2333ef*/
        break; /*0x2333f2*/
      case 3u: /*0x2333cd*/
        v187 = *(_DWORD *)(v17 + 784) - *(_DWORD *)(v17 + 788); /*0x233400*/
        break; /*0x233403*/
      case 4u: /*0x2333cd*/
        v187 = *(_DWORD *)(v17 + 796) - *(_DWORD *)(v17 + 800); /*0x233411*/
        break; /*0x233414*/
      case 5u: /*0x2333cd*/
        v187 = *(_DWORD *)(v17 + 808) - *(_DWORD *)(v17 + 812); /*0x233422*/
        break; /*0x233425*/
      case 6u: /*0x2333cd*/
        v187 = *(_DWORD *)(v17 + 820) - *(_DWORD *)(v17 + 824); /*0x233433*/
        break; /*0x233436*/
      case 7u: /*0x2333cd*/
        v187 = *(_DWORD *)(v17 + 832) - *(_DWORD *)(v17 + 836); /*0x233444*/
        break; /*0x233447*/
      case 8u: /*0x2333cd*/
        v187 = *(_DWORD *)(v17 + 916) - *(_DWORD *)(v17 + 920); /*0x233455*/
        break; /*0x233458*/
      default:
        v187 = *(_DWORD *)(v17 + 748) - *(_DWORD *)(v17 + 752); /*0x233466*/
        break; /*0x233466*/
    }
    v18 = sub_3E4F0(&v235, v232); /*0x233477*/
    sub_25DFF0(v19, v18, 0); /*0x233482*/
    GameLevelManager_getBasePostString(v20, Src); /*0x23348b*/
    v21 = qword_905FD0; /*0x233491*/
    if ( !qword_905FD0 ) /*0x23349b*/
    {
      v207 = operator new(0x6E8u); /*0x2334a7*/
      qword_905FD0 = sub_2723A0(v207); /*0x2334b4*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2334c5*/
      v21 = qword_905FD0; /*0x2334c7*/
    }
    v191 = *(_DWORD *)(v21 + 916) - *(_DWORD *)(v21 + 920); /*0x2334da*/
    v189 = *(_DWORD *)(v21 + 832) - *(_DWORD *)(v21 + 836); /*0x2334e9*/
    v209 = *(_DWORD *)(v21 + 904) - *(_DWORD *)(v21 + 908); /*0x2334f8*/
    v210 = *(_DWORD *)(v21 + 820) - *(_DWORD *)(v21 + 824); /*0x233507*/
    v211 = *(_DWORD *)(v21 + 808) - *(_DWORD *)(v21 + 812); /*0x233516*/
    v212 = *(_DWORD *)(v21 + 796) - *(_DWORD *)(v21 + 800); /*0x233525*/
    v213 = *(_DWORD *)(v21 + 784) - *(_DWORD *)(v21 + 788); /*0x233534*/
    v208 = *(_DWORD *)(v21 + 772) - *(_DWORD *)(v21 + 776); /*0x233543*/
    v22 = *(_DWORD *)(v21 + 760) - *(_DWORD *)(v21 + 764); /*0x23354d*/
    v23 = *(_DWORD *)(v21 + 748) - *(_DWORD *)(v21 + 752); /*0x23355a*/
    v24 = *(_DWORD *)(v21 + 868) - *(_DWORD *)(v21 + 872); /*0x233567*/
    v25 = *(_DWORD *)(v21 + 856) - *(_DWORD *)(v21 + 860); /*0x233575*/
    v26 = *(_DWORD *)(v21 + 844) - *(_DWORD *)(v21 + 848); /*0x233582*/
    v27 = (const char *)v232; /*0x233588*/
    if ( v232[3] > 0xFu ) /*0x233597*/
      v27 = (const char *)v232[0]; /*0x233597*/
    v28 = *(unsigned __int8 *)(v21 + 944); /*0x23359f*/
    v29 = cocos2d::CCString::createWithFormat("%c%s%s%c%c%s", 87, "mfd", "2893", 103, 98, (const char *)&word_708030); /*0x2335dc*/
    CString = cocos2d::CCString::getCString(v29); /*0x2335e5*/
    v186 = v23; /*0x23364a*/
    v31 = v187; /*0x233688*/
    v32 = cocos2d::CCString::createWithFormat( /*0x2336af*/
            "&userName=%s&stars=%i&moons=%i&demons=%i&diamonds=%i&icon=%i&color1=%i&color2=%i&color3=%i&iconType=%i&coins"
            "=%i&userCoins=%i&special=%i&gameVersion=%i&secret=%s&accIcon=%i&accShip=%i&accBall=%i&accBird=%i&accDart=%i&"
            "accRobot=%i&accGlow=%i&accSpider=%i&accExplosion=%i&accSwing=%i&accJetpack=%i",
            v27,
            Stat,
            LODWORD(Size[0]),
            v202,
            v206,
            v187,
            v26,
            v25,
            v24,
            v205,
            v204,
            v201,
            v198,
            22,
            CString,
            v186,
            v22,
            v208,
            v213,
            v212,
            v211,
            v28,
            v210,
            v209,
            v189,
            v191);
    v33 = (char *)cocos2d::CCString::getCString(v32); /*0x2336b8*/
    v34 = -1; /*0x2336be*/
    v35 = -1; /*0x2336c5*/
    do /*0x2336d3*/
      ++v35; /*0x2336d0*/
    while ( v33[v35] ); /*0x2336d3*/
    sub_43D80(Src, v33, v35); /*0x2336e1*/
    v37 = GJAccountManager_sharedState(v36); /*0x2336e6*/
    v38 = (unsigned int)(*(_DWORD *)(v37 + 360) - *(_DWORD *)(v37 + 364)); /*0x2336f1*/
    if ( *(_DWORD *)(v37 + 360) - *(_DWORD *)(v37 + 364) <= 0 ) /*0x2336f9*/
    {
      *(_OWORD *)v221 = 0; /*0x233719*/
      v222 = 0; /*0x23371f*/
      v223 = 15; /*0x233723*/
      LOBYTE(v221[0]) = 0; /*0x23372b*/
      DemonLevelsString = (__int64)v221; /*0x23372f*/
      v40 = 18; /*0x233733*/
    }
    else
    {
      DemonLevelsString = GameLevelManager_getDemonLevelsString(a1, (__int64)&v235); /*0x233706*/
      v40 = 17; /*0x23370e*/
    }
    *(_OWORD *)Block = *(_OWORD *)DemonLevelsString; /*0x23373c*/
    *(_OWORD *)Size = *(_OWORD *)(DemonLevelsString + 16); /*0x233747*/
    v231 = *(_OWORD *)Size; /*0x23374b*/
    *(_QWORD *)(DemonLevelsString + 16) = 0; /*0x233752*/
    *(_QWORD *)(DemonLevelsString + 24) = 15; /*0x233756*/
    *(_BYTE *)DemonLevelsString = 0; /*0x23375e*/
    if ( (v40 & 2) != 0 ) /*0x233765*/
    {
      v40 &= ~2u; /*0x233767*/
      if ( v223 > 0xF ) /*0x233773*/
      {
        v41 = v221[0]; /*0x233778*/
        if ( v223 + 1 >= 0x1000 ) /*0x233786*/
        {
          v41 = (void *)*((_QWORD *)v221[0] - 1); /*0x23378c*/
          if ( (unsigned __int64)((char *)v221[0] - (char *)v41 - 8) > 0x1F ) /*0x23379b*/
            invoke_watson(0, 0, 0, 0, 0); /*0x2337ac*/
        }
        j_j_free(v41); /*0x2337b3*/
      }
    }
    if ( (v40 & 1) != 0 ) /*0x2337bd*/
    {
      v40 &= ~1u; /*0x2337bf*/
      sub_3C310(&v235); /*0x2337ca*/
    }
    v188 = 0; /*0x2337cf*/
    CompletedDailyLevels = 0; /*0x2337d2*/
    v43 = 0; /*0x2337d5*/
    v192 = 0; /*0x2337d8*/
    v190 = 0; /*0x2337dc*/
    v44 = Size[0]; /*0x2337e0*/
    if ( Size[0] ) /*0x2337e7*/
    {
      sub_43D80(Src, "&dinfo=", 7u); /*0x2337fe*/
      v45 = Block; /*0x233803*/
      if ( *((_QWORD *)&v231 + 1) > 0xFu ) /*0x233812*/
        v45 = (void **)Block[0]; /*0x233812*/
      sub_43D80(Src, v45, Size[0]); /*0x233821*/
      v46 = *(_QWORD *)&qword_905FB0; /*0x233826*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x233830*/
      {
        Size[0] = (size_t)operator new(0x690u); /*0x23383c*/
        *(_QWORD *)&qword_905FB0 = sub_214250(Size[0]); /*0x233849*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x23385a*/
        v46 = *(_QWORD *)&qword_905FB0; /*0x23385c*/
      }
      CompletedWeeklyLevels = GameLevelManager_getCompletedWeeklyLevels(v46); /*0x233868*/
      v188 = CompletedWeeklyLevels; /*0x23386b*/
      v48 = *(_QWORD *)&qword_905FB0; /*0x23386e*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x233878*/
      {
        Size[0] = (size_t)operator new(0x690u); /*0x233884*/
        *(_QWORD *)&qword_905FB0 = sub_214250(Size[0]); /*0x233891*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x2338a2*/
        v48 = *(_QWORD *)&qword_905FB0; /*0x2338a4*/
      }
      v43 = 0; /*0x2338ab*/
      v49 = *(_QWORD *)(v48 + 1032); /*0x2338ae*/
      if ( v49 ) /*0x2338b8*/
      {
        v50 = *(_QWORD *)(v49 + 56); /*0x2338be*/
        if ( v50 ) /*0x2338c5*/
        {
          for ( i = *(_QWORD *)(v50 + 288); ; i = *(_QWORD *)(i + 288) ) /*0x2338cb*/
          {
            v52 = (_DWORD *)_RTDynamicCast( /*0x2338ff*/
                              *(_QWORD *)(v50 + 264),
                              0,
                              &cocos2d::CCObject `RTTI Type Descriptor',
                              &GJGameLevel `RTTI Type Descriptor',
                              0);
            v53 = (__int64)v52; /*0x233904*/
            if ( v52 && v52[255] - v52[256] == 10 && v52[233] - v52[232] == 100 ) /*0x23392c*/
            {
              v54 = qword_905FE0; /*0x23392e*/
              if ( !qword_905FE0 ) /*0x233938*/
              {
                Size[0] = (size_t)operator new(0x3E8u); /*0x233944*/
                qword_905FE0 = sub_2D2B40(Size[0]); /*0x233951*/
                (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x233962*/
                v54 = qword_905FE0; /*0x233964*/
              }
              if ( GameStatsManager_hasCompletedStarLevel(v54, v53) ) /*0x23396e*/
                ++v43; /*0x233977*/
            }
            v50 = i; /*0x23397a*/
            if ( !i ) /*0x233980*/
              break; /*0x233980*/
          }
          v48 = *(_QWORD *)&qword_905FB0; /*0x23398e*/
          CompletedWeeklyLevels = v188; /*0x233995*/
        }
      }
      if ( !v48 ) /*0x23399c*/
      {
        Size[0] = (size_t)operator new(0x690u); /*0x2339a8*/
        *(_QWORD *)&qword_905FB0 = sub_214250(Size[0]); /*0x2339b5*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x2339c6*/
        v48 = *(_QWORD *)&qword_905FB0; /*0x2339c8*/
      }
      CompletedEventLevels = GameLevelManager_getCompletedEventLevels(v48, 10, 10); /*0x2339df*/
      v190 = CompletedEventLevels; /*0x2339e1*/
      sub_43D80(Src, "&dinfow=", 8u); /*0x2339f5*/
      v56 = GameToolbox_intToString(v221, CompletedWeeklyLevels); /*0x233a01*/
      v57 = (void *)v56; /*0x233a07*/
      if ( *(_QWORD *)(v56 + 24) > 0xFu ) /*0x233a0f*/
        v57 = *(void **)v56; /*0x233a11*/
      sub_43D80(Src, v57, *(_QWORD *)(v56 + 16)); /*0x233a1c*/
      sub_3C310(v221); /*0x233a26*/
      sub_43D80(Src, "&dinfog=", 8u); /*0x233a3c*/
      v58 = GameToolbox_intToString(v221, v43); /*0x233a48*/
      v59 = (void *)v58; /*0x233a4e*/
      if ( *(_QWORD *)(v58 + 24) > 0xFu ) /*0x233a56*/
        v59 = *(void **)v58; /*0x233a58*/
      sub_43D80(Src, v59, *(_QWORD *)(v58 + 16)); /*0x233a63*/
      sub_3C310(v221); /*0x233a6d*/
      sub_43D80(Src, "&dinfoe=", 8u); /*0x233a83*/
      v60 = GameToolbox_intToString(v221, CompletedEventLevels); /*0x233a8e*/
      v61 = (void *)v60; /*0x233a94*/
      if ( *(_QWORD *)(v60 + 24) > 0xFu ) /*0x233a9c*/
        v61 = *(void **)v60; /*0x233a9e*/
      sub_43D80(Src, v61, *(_QWORD *)(v60 + 16)); /*0x233aa9*/
      sub_3C310(v221); /*0x233ab3*/
      v44 = v231; /*0x233ab8*/
      CompletedDailyLevels = 0; /*0x233abf*/
    }
    v62 = GJAccountManager_sharedState(v38); /*0x233ac2*/
    v63 = (unsigned int)(*(_DWORD *)(v62 + 360) - *(_DWORD *)(v62 + 364)); /*0x233acd*/
    if ( *(_DWORD *)(v62 + 360) - *(_DWORD *)(v62 + 364) <= 0 ) /*0x233ad5*/
    {
      *(_OWORD *)v221 = 0; /*0x233aee*/
      v222 = 0; /*0x233af2*/
      v223 = 15; /*0x233af6*/
      LOBYTE(v221[0]) = 0; /*0x233afe*/
      StarLevelsString = v221; /*0x233b02*/
      v65 = v40 | 8; /*0x233b06*/
    }
    else
    {
      StarLevelsString = GameLevelManager_getStarLevelsString(a1, &v227); /*0x233adf*/
      v65 = v40 | 4; /*0x233ae5*/
    }
    *(_OWORD *)v225 = *StarLevelsString; /*0x233b0d*/
    *(_OWORD *)Size = StarLevelsString[1]; /*0x233b15*/
    v226 = *(_OWORD *)Size; /*0x233b19*/
    *((_QWORD *)StarLevelsString + 2) = 0; /*0x233b1d*/
    *((_QWORD *)StarLevelsString + 3) = 15; /*0x233b21*/
    *(_BYTE *)StarLevelsString = 0; /*0x233b29*/
    if ( (v65 & 8) != 0 ) /*0x233b30*/
    {
      v65 &= ~8u; /*0x233b32*/
      if ( v223 > 0xF ) /*0x233b3e*/
      {
        v66 = v221[0]; /*0x233b43*/
        if ( v223 + 1 >= 0x1000 ) /*0x233b51*/
        {
          v66 = (void *)*((_QWORD *)v221[0] - 1); /*0x233b57*/
          if ( (unsigned __int64)((char *)v221[0] - (char *)v66 - 8) > 0x1F ) /*0x233b66*/
            invoke_watson(0, 0, 0, 0, 0); /*0x233b77*/
        }
        j_j_free(v66); /*0x233b7e*/
      }
    }
    if ( (v65 & 4) != 0 ) /*0x233b88*/
      sub_3C310(&v227); /*0x233b8e*/
    v67 = 0; /*0x233b93*/
    v68 = Size[0]; /*0x233b96*/
    if ( Size[0] ) /*0x233b9d*/
    {
      sub_43D80(Src, "&sinfo=", 7u); /*0x233bb4*/
      v69 = v225; /*0x233bb9*/
      if ( *((_QWORD *)&v226 + 1) > 0xFu ) /*0x233bc2*/
        v69 = (void **)v225[0]; /*0x233bc2*/
      sub_43D80(Src, v69, Size[0]); /*0x233bce*/
      v70 = *(_QWORD *)&qword_905FB0; /*0x233bd3*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x233bdd*/
      {
        Size[0] = (size_t)operator new(0x690u); /*0x233be9*/
        *(_QWORD *)&qword_905FB0 = sub_214250(Size[0]); /*0x233bf6*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x233c07*/
        v70 = *(_QWORD *)&qword_905FB0; /*0x233c09*/
      }
      CompletedDailyLevels = GameLevelManager_getCompletedDailyLevels(v70); /*0x233c15*/
      LODWORD(Size[0]) = CompletedDailyLevels; /*0x233c18*/
      v71 = *(_QWORD *)&qword_905FB0; /*0x233c1b*/
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x233c25*/
      {
        v199 = operator new(0x690u); /*0x233c31*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v199); /*0x233c3e*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x233c4f*/
        v71 = *(_QWORD *)&qword_905FB0; /*0x233c51*/
      }
      v67 = 0; /*0x233c58*/
      v72 = *(_QWORD *)(v71 + 1032); /*0x233c5b*/
      if ( v72 ) /*0x233c65*/
      {
        v73 = *(_QWORD *)(v72 + 56); /*0x233c6b*/
        if ( v73 ) /*0x233c72*/
        {
          for ( j = *(_QWORD *)(v73 + 288); ; j = *(_QWORD *)(j + 288) ) /*0x233c78*/
          {
            v75 = (_DWORD *)_RTDynamicCast( /*0x233c9f*/
                              *(_QWORD *)(v73 + 264),
                              0,
                              &cocos2d::CCObject `RTTI Type Descriptor',
                              &GJGameLevel `RTTI Type Descriptor',
                              0);
            v76 = (__int64)v75; /*0x233ca4*/
            if ( v75 && v75[255] - v75[256] < 10 && v75[233] - v75[232] == 100 ) /*0x233ccc*/
            {
              v77 = qword_905FE0; /*0x233cce*/
              if ( !qword_905FE0 ) /*0x233cd8*/
              {
                v200 = operator new(0x3E8u); /*0x233ce4*/
                qword_905FE0 = sub_2D2B40(v200); /*0x233cf1*/
                (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x233d02*/
                v77 = qword_905FE0; /*0x233d04*/
              }
              if ( GameStatsManager_hasCompletedStarLevel(v77, v76) ) /*0x233d0e*/
                ++v67; /*0x233d17*/
            }
            v73 = j; /*0x233d1a*/
            if ( !j ) /*0x233d20*/
              break; /*0x233d20*/
          }
          v71 = *(_QWORD *)&qword_905FB0; /*0x233d2e*/
          CompletedDailyLevels = Size[0]; /*0x233d35*/
        }
      }
      if ( !v71 ) /*0x233d3c*/
      {
        Size[0] = (size_t)operator new(0x690u); /*0x233d48*/
        *(_QWORD *)&qword_905FB0 = sub_214250(Size[0]); /*0x233d55*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x233d66*/
        v71 = *(_QWORD *)&qword_905FB0; /*0x233d68*/
      }
      v78 = GameLevelManager_getCompletedEventLevels(v71, 1, 9); /*0x233d82*/
      v192 = v78; /*0x233d84*/
      sub_43D80(Src, "&sinfod=", 8u); /*0x233d98*/
      v79 = GameToolbox_intToString(&v235, CompletedDailyLevels); /*0x233da7*/
      v80 = (void *)v79; /*0x233dad*/
      if ( *(_QWORD *)(v79 + 24) > 0xFu ) /*0x233db5*/
        v80 = *(void **)v79; /*0x233db7*/
      sub_43D80(Src, v80, *(_QWORD *)(v79 + 16)); /*0x233dc2*/
      sub_3C310(&v235); /*0x233dcf*/
      sub_43D80(Src, "&sinfog=", 8u); /*0x233de5*/
      v81 = GameToolbox_intToString(&v235, v67); /*0x233df4*/
      v82 = (void *)v81; /*0x233dfa*/
      if ( *(_QWORD *)(v81 + 24) > 0xFu ) /*0x233e02*/
        v82 = *(void **)v81; /*0x233e04*/
      sub_43D80(Src, v82, *(_QWORD *)(v81 + 16)); /*0x233e0f*/
      sub_3C310(&v235); /*0x233e1c*/
      sub_43D80(Src, "&sinfoe=", 8u); /*0x233e32*/
      v83 = GameToolbox_intToString(&v235, v78); /*0x233e40*/
      v84 = (void *)v83; /*0x233e46*/
      if ( *(_QWORD *)(v83 + 24) > 0xFu ) /*0x233e4e*/
        v84 = *(void **)v83; /*0x233e50*/
      sub_43D80(Src, v84, *(_QWORD *)(v83 + 16)); /*0x233e5b*/
      sub_3C310(&v235); /*0x233e68*/
      v68 = v226; /*0x233e6d*/
    }
    v218 = 0; /*0x233e74*/
    v219 = 0; /*0x233e78*/
    v220 = 15; /*0x233e80*/
    LOBYTE(v218) = 0; /*0x233e88*/
    v85 = GJAccountManager_sharedState(v63); /*0x233e8c*/
    v86 = cocos2d::CCString::createWithFormat( /*0x233ea4*/
            (const char *)&word_6E86F8,
            (unsigned int)(*(_DWORD *)(v85 + 360) - *(_DWORD *)(v85 + 364)));
    v87 = (char *)cocos2d::CCString::getCString(v86); /*0x233ead*/
    v88 = -1; /*0x233eb3*/
    do /*0x233eb9*/
      ++v88; /*0x233eb6*/
    while ( v87[v88] ); /*0x233eb9*/
    sub_43D80(&v218, v87, v88); /*0x233ec7*/
    v89 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v201); /*0x233ed6*/
    v90 = (char *)cocos2d::CCString::getCString(v89); /*0x233edf*/
    v91 = -1; /*0x233ee5*/
    do /*0x233ef3*/
      ++v91; /*0x233ef0*/
    while ( v90[v91] ); /*0x233ef3*/
    sub_43D80(&v218, v90, v91); /*0x233f01*/
    v92 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v202); /*0x233f10*/
    v93 = (char *)cocos2d::CCString::getCString(v92); /*0x233f19*/
    v94 = -1; /*0x233f1f*/
    do /*0x233f25*/
      ++v94; /*0x233f22*/
    while ( v93[v94] ); /*0x233f25*/
    sub_43D80(&v218, v93, v94); /*0x233f33*/
    v95 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, Stat); /*0x233f42*/
    v96 = (char *)cocos2d::CCString::getCString(v95); /*0x233f4b*/
    v97 = -1; /*0x233f51*/
    do /*0x233f57*/
      ++v97; /*0x233f54*/
    while ( v96[v97] ); /*0x233f57*/
    sub_43D80(&v218, v96, v97); /*0x233f65*/
    v98 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v204); /*0x233f74*/
    v99 = (char *)cocos2d::CCString::getCString(v98); /*0x233f7d*/
    v100 = -1; /*0x233f83*/
    do /*0x233f89*/
      ++v100; /*0x233f86*/
    while ( v99[v100] ); /*0x233f89*/
    sub_43D80(&v218, v99, v100); /*0x233f97*/
    v101 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v205); /*0x233fa6*/
    v102 = (char *)cocos2d::CCString::getCString(v101); /*0x233faf*/
    v103 = -1; /*0x233fb5*/
    do /*0x233fc3*/
      ++v103; /*0x233fc0*/
    while ( v102[v103] ); /*0x233fc3*/
    sub_43D80(&v218, v102, v103); /*0x233fd1*/
    v104 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v31); /*0x233fdf*/
    v105 = (char *)cocos2d::CCString::getCString(v104); /*0x233fe8*/
    v106 = -1; /*0x233fee*/
    do /*0x233ff4*/
      ++v106; /*0x233ff1*/
    while ( v105[v106] ); /*0x233ff4*/
    sub_43D80(&v218, v105, v106); /*0x234002*/
    v107 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v206); /*0x234011*/
    v108 = (char *)cocos2d::CCString::getCString(v107); /*0x23401a*/
    v109 = -1; /*0x234020*/
    do /*0x234026*/
      ++v109; /*0x234023*/
    while ( v108[v109] ); /*0x234026*/
    sub_43D80(&v218, v108, v109); /*0x234034*/
    v110 = qword_905FD0; /*0x234039*/
    if ( !qword_905FD0 ) /*0x234043*/
    {
      Size[0] = (size_t)operator new(0x6E8u); /*0x23404f*/
      qword_905FD0 = sub_2723A0(Size[0]); /*0x23405c*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x23406d*/
      v110 = qword_905FD0; /*0x23406f*/
    }
    v111 = cocos2d::CCString::createWithFormat( /*0x234089*/
             (const char *)&word_6E86F8,
             (unsigned int)(*(_DWORD *)(v110 + 748) - *(_DWORD *)(v110 + 752)));
    v112 = (char *)cocos2d::CCString::getCString(v111); /*0x234092*/
    v113 = -1; /*0x234098*/
    do /*0x2340a3*/
      ++v113; /*0x2340a0*/
    while ( v112[v113] ); /*0x2340a3*/
    sub_43D80(&v218, v112, v113); /*0x2340b1*/
    v114 = qword_905FD0; /*0x2340b6*/
    if ( !qword_905FD0 ) /*0x2340c0*/
    {
      Size[0] = (size_t)operator new(0x6E8u); /*0x2340cc*/
      qword_905FD0 = sub_2723A0(Size[0]); /*0x2340d9*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2340ea*/
      v114 = qword_905FD0; /*0x2340ec*/
    }
    v115 = cocos2d::CCString::createWithFormat( /*0x234106*/
             (const char *)&word_6E86F8,
             (unsigned int)(*(_DWORD *)(v114 + 760) - *(_DWORD *)(v114 + 764)));
    v116 = (char *)cocos2d::CCString::getCString(v115); /*0x23410f*/
    v117 = -1; /*0x234115*/
    do /*0x234123*/
      ++v117; /*0x234120*/
    while ( v116[v117] ); /*0x234123*/
    sub_43D80(&v218, v116, v117); /*0x234131*/
    v118 = qword_905FD0; /*0x234136*/
    if ( !qword_905FD0 ) /*0x234140*/
    {
      Size[0] = (size_t)operator new(0x6E8u); /*0x23414c*/
      qword_905FD0 = sub_2723A0(Size[0]); /*0x234159*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x23416a*/
      v118 = qword_905FD0; /*0x23416c*/
    }
    v119 = cocos2d::CCString::createWithFormat( /*0x234186*/
             (const char *)&word_6E86F8,
             (unsigned int)(*(_DWORD *)(v118 + 772) - *(_DWORD *)(v118 + 776)));
    v120 = (char *)cocos2d::CCString::getCString(v119); /*0x23418f*/
    v121 = -1; /*0x234195*/
    do /*0x2341a3*/
      ++v121; /*0x2341a0*/
    while ( v120[v121] ); /*0x2341a3*/
    sub_43D80(&v218, v120, v121); /*0x2341b1*/
    v122 = qword_905FD0; /*0x2341b6*/
    if ( !qword_905FD0 ) /*0x2341c0*/
    {
      Size[0] = (size_t)operator new(0x6E8u); /*0x2341cc*/
      qword_905FD0 = sub_2723A0(Size[0]); /*0x2341d9*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2341ea*/
      v122 = qword_905FD0; /*0x2341ec*/
    }
    v123 = cocos2d::CCString::createWithFormat( /*0x234206*/
             (const char *)&word_6E86F8,
             (unsigned int)(*(_DWORD *)(v122 + 784) - *(_DWORD *)(v122 + 788)));
    v124 = (char *)cocos2d::CCString::getCString(v123); /*0x23420f*/
    v125 = -1; /*0x234215*/
    do /*0x234223*/
      ++v125; /*0x234220*/
    while ( v124[v125] ); /*0x234223*/
    sub_43D80(&v218, v124, v125); /*0x234231*/
    v126 = qword_905FD0; /*0x234236*/
    if ( !qword_905FD0 ) /*0x234240*/
    {
      Size[0] = (size_t)operator new(0x6E8u); /*0x23424c*/
      qword_905FD0 = sub_2723A0(Size[0]); /*0x234259*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x23426a*/
      v126 = qword_905FD0; /*0x23426c*/
    }
    v127 = cocos2d::CCString::createWithFormat( /*0x234286*/
             (const char *)&word_6E86F8,
             (unsigned int)(*(_DWORD *)(v126 + 796) - *(_DWORD *)(v126 + 800)));
    v128 = (char *)cocos2d::CCString::getCString(v127); /*0x23428f*/
    v129 = -1; /*0x234295*/
    do /*0x2342a3*/
      ++v129; /*0x2342a0*/
    while ( v128[v129] ); /*0x2342a3*/
    sub_43D80(&v218, v128, v129); /*0x2342b1*/
    v130 = qword_905FD0; /*0x2342b6*/
    if ( !qword_905FD0 ) /*0x2342c0*/
    {
      Size[0] = (size_t)operator new(0x6E8u); /*0x2342cc*/
      qword_905FD0 = sub_2723A0(Size[0]); /*0x2342d9*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2342ea*/
      v130 = qword_905FD0; /*0x2342ec*/
    }
    v131 = cocos2d::CCString::createWithFormat( /*0x234306*/
             (const char *)&word_6E86F8,
             (unsigned int)(*(_DWORD *)(v130 + 808) - *(_DWORD *)(v130 + 812)));
    v132 = (char *)cocos2d::CCString::getCString(v131); /*0x23430f*/
    v133 = -1; /*0x234315*/
    do /*0x234323*/
      ++v133; /*0x234320*/
    while ( v132[v133] ); /*0x234323*/
    sub_43D80(&v218, v132, v133); /*0x234331*/
    v134 = qword_905FD0; /*0x234336*/
    if ( !qword_905FD0 ) /*0x234340*/
    {
      Size[0] = (size_t)operator new(0x6E8u); /*0x23434c*/
      qword_905FD0 = sub_2723A0(Size[0]); /*0x234359*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x23436a*/
      v134 = qword_905FD0; /*0x23436c*/
    }
    v135 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, *(unsigned __int8 *)(v134 + 944)); /*0x234381*/
    v136 = (char *)cocos2d::CCString::getCString(v135); /*0x23438a*/
    v137 = -1; /*0x234390*/
    do /*0x234396*/
      ++v137; /*0x234393*/
    while ( v136[v137] ); /*0x234396*/
    sub_43D80(&v218, v136, v137); /*0x2343a4*/
    v138 = qword_905FD0; /*0x2343a9*/
    if ( !qword_905FD0 ) /*0x2343b3*/
    {
      Size[0] = (size_t)operator new(0x6E8u); /*0x2343bf*/
      qword_905FD0 = sub_2723A0(Size[0]); /*0x2343cc*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2343dd*/
      v138 = qword_905FD0; /*0x2343df*/
    }
    v139 = cocos2d::CCString::createWithFormat( /*0x2343f9*/
             (const char *)&word_6E86F8,
             (unsigned int)(*(_DWORD *)(v138 + 820) - *(_DWORD *)(v138 + 824)));
    v140 = (char *)cocos2d::CCString::getCString(v139); /*0x234402*/
    v141 = -1; /*0x234408*/
    do /*0x234413*/
      ++v141; /*0x234410*/
    while ( v140[v141] ); /*0x234413*/
    sub_43D80(&v218, v140, v141); /*0x234421*/
    v142 = qword_905FD0; /*0x234426*/
    if ( !qword_905FD0 ) /*0x234430*/
    {
      Size[0] = (size_t)operator new(0x6E8u); /*0x23443c*/
      qword_905FD0 = sub_2723A0(Size[0]); /*0x234449*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x23445a*/
      v142 = qword_905FD0; /*0x23445c*/
    }
    v143 = cocos2d::CCString::createWithFormat( /*0x234476*/
             (const char *)&word_6E86F8,
             (unsigned int)(*(_DWORD *)(v142 + 904) - *(_DWORD *)(v142 + 908)));
    v144 = (char *)cocos2d::CCString::getCString(v143); /*0x23447f*/
    v145 = -1; /*0x234485*/
    do /*0x234493*/
      ++v145; /*0x234490*/
    while ( v144[v145] ); /*0x234493*/
    sub_43D80(&v218, v144, v145); /*0x2344a1*/
    if ( v44 ) /*0x2344a9*/
    {
      v146 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v44); /*0x2344b9*/
      v147 = (char *)cocos2d::CCString::getCString(v146); /*0x2344c2*/
      v148 = -1; /*0x2344c8*/
      do /*0x2344d3*/
        ++v148; /*0x2344d0*/
      while ( v147[v148] ); /*0x2344d3*/
      sub_43D80(&v218, v147, v148); /*0x2344e1*/
      v149 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v188); /*0x2344f0*/
      v150 = (char *)cocos2d::CCString::getCString(v149); /*0x2344f9*/
      v151 = -1; /*0x2344ff*/
      do /*0x234505*/
        ++v151; /*0x234502*/
      while ( v150[v151] ); /*0x234505*/
      sub_43D80(&v218, v150, v151); /*0x234513*/
      v152 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v43); /*0x234522*/
      v153 = (char *)cocos2d::CCString::getCString(v152); /*0x23452b*/
      v154 = -1; /*0x234531*/
      do /*0x234537*/
        ++v154; /*0x234534*/
      while ( v153[v154] ); /*0x234537*/
      sub_43D80(&v218, v153, v154); /*0x234545*/
      if ( v190 > 0 ) /*0x23454f*/
      {
        v155 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8); /*0x234558*/
        v156 = (char *)cocos2d::CCString::getCString(v155); /*0x234561*/
        v157 = -1; /*0x234567*/
        do /*0x234573*/
          ++v157; /*0x234570*/
        while ( v156[v157] ); /*0x234573*/
        sub_43D80(&v218, v156, v157); /*0x234581*/
      }
    }
    if ( v68 ) /*0x234589*/
    {
      v158 = v225; /*0x23458f*/
      if ( *((_QWORD *)&v226 + 1) > 0xFu ) /*0x234598*/
        v158 = (void **)v225[0]; /*0x234598*/
      sub_43D80(&v218, v158, v68); /*0x2345a4*/
      v159 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, CompletedDailyLevels); /*0x2345b3*/
      v160 = (char *)cocos2d::CCString::getCString(v159); /*0x2345bc*/
      v161 = -1; /*0x2345c2*/
      do /*0x2345c8*/
        ++v161; /*0x2345c5*/
      while ( v160[v161] ); /*0x2345c8*/
      sub_43D80(&v218, v160, v161); /*0x2345d6*/
      v162 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v67); /*0x2345e5*/
      v163 = (char *)cocos2d::CCString::getCString(v162); /*0x2345ee*/
      v164 = -1; /*0x2345f4*/
      do /*0x234603*/
        ++v164; /*0x234600*/
      while ( v163[v164] ); /*0x234603*/
      sub_43D80(&v218, v163, v164); /*0x234611*/
      if ( v192 > 0 ) /*0x23461b*/
      {
        v165 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, (unsigned int)v192); /*0x234626*/
        v166 = (char *)cocos2d::CCString::getCString(v165); /*0x23462f*/
        v167 = -1; /*0x234635*/
        do /*0x234643*/
          ++v167; /*0x234640*/
        while ( v166[v167] ); /*0x234643*/
        sub_43D80(&v218, v166, v167); /*0x234651*/
      }
    }
    LODWORD(v185) = 67; /*0x234662*/
    LODWORD(Reserved) = 112; /*0x23466a*/
    v168 = cocos2d::CCString::createWithFormat("%c%s%s%c%c%s", 120, "I35", "fsAa", Reserved, v185, "Rg"); /*0x23468c*/
    v169 = (char *)cocos2d::CCString::getCString(v168); /*0x234695*/
    v170 = -1; /*0x23469b*/
    do /*0x2346a3*/
      ++v170; /*0x2346a0*/
    while ( v169[v170] ); /*0x2346a3*/
    sub_43D80(&v218, v169, v170); /*0x2346b1*/
    v171 = &v218; /*0x2346b6*/
    if ( v220 > 0xF ) /*0x2346bf*/
      v171 = (__int128 *)v218; /*0x2346bf*/
    v172 = &v218; /*0x2346c4*/
    if ( v220 > 0xF ) /*0x2346c8*/
      v172 = (__int128 *)v218; /*0x2346c8*/
    v173 = -1; /*0x2346cd*/
    do /*0x2346d3*/
      ++v173; /*0x2346d0*/
    while ( *((_BYTE *)v171 + v173) ); /*0x2346d3*/
    sub_7D030(v172, v173, Size); /*0x2346e1*/
    sub_7D300(Size, &v235); /*0x2346f1*/
    *(_OWORD *)Size = 0; /*0x2346f9*/
    v216 = 0; /*0x2346ff*/
    v217 = 0; /*0x234703*/
    v174 = -1; /*0x23470e*/
    do /*0x234714*/
      ++v174; /*0x234711*/
    while ( *((_BYTE *)&v235 + v174) ); /*0x234714*/
    sub_3C230(Size); /*0x234725*/
    v227 = 0; /*0x23472e*/
    v228 = 5; /*0x234732*/
    v229 = 15; /*0x23473d*/
    strcpy((char *)&v227, "85271"); /*0x23474e*/
    cocos2d::ZipUtils::base64EncodeEnc(v234, Size, &v227); /*0x23476e*/
    if ( v217 > 0xF ) /*0x23477d*/
    {
      v175 = (void *)Size[0]; /*0x234782*/
      if ( v217 + 1 >= 0x1000 ) /*0x234790*/
      {
        v175 = *(void **)(Size[0] - 8); /*0x234796*/
        if ( Size[0] - (unsigned __int64)v175 - 8 > 0x1F ) /*0x2347a5*/
          invoke_watson(0, 0, 0, 0, 0); /*0x2347b6*/
      }
      j_j_free(v175); /*0x2347bd*/
    }
    v216 = 0; /*0x2347c2*/
    v217 = 15; /*0x2347c6*/
    LOBYTE(Size[0]) = 0; /*0x2347ce*/
    sub_216020(v233, 10); /*0x2347de*/
    v176 = (const char *)v234; /*0x2347e4*/
    if ( v234[3] > 0xFu ) /*0x2347f3*/
      v176 = (const char *)v234[0]; /*0x2347f3*/
    v177 = (const char *)v233; /*0x2347fb*/
    if ( v233[3] > 0xFu ) /*0x23480a*/
      v177 = (const char *)v233[0]; /*0x23480a*/
    v178 = cocos2d::CCString::createWithFormat("&seed=%s&seed2=%s", v177, v176); /*0x234819*/
    v179 = (char *)cocos2d::CCString::getCString(v178); /*0x234822*/
    v180 = -1; /*0x234828*/
    do /*0x234833*/
      ++v180; /*0x234830*/
    while ( v179[v180] ); /*0x234833*/
    sub_43D80(Src, v179, v180); /*0x234841*/
    Size[0] = (size_t)&v227; /*0x23484a*/
    v227 = 0; /*0x23485c*/
    v228 = 0; /*0x234860*/
    v229 = 0; /*0x234867*/
    *(_QWORD *)&v227 = sub_3C460(32); /*0x234878*/
    v228 = 17; /*0x23487c*/
    v229 = 31; /*0x234887*/
    strcpy((char *)v227, "Update user score"); /*0x234899*/
    v181 = Src; /*0x2348aa*/
    if ( Src[3] > 0xFu ) /*0x2348b3*/
      v181 = (_QWORD *)Src[0]; /*0x2348b3*/
    v235 = 0; /*0x2348bb*/
    v236 = 0; /*0x2348c2*/
    v237 = 0; /*0x2348c9*/
    do /*0x2348d3*/
      ++v34; /*0x2348d0*/
    while ( *((_BYTE *)v181 + v34) ); /*0x2348d3*/
    sub_3C230(&v235); /*0x2348e3*/
    *(_OWORD *)v221 = 0; /*0x2348ec*/
    v222 = 0; /*0x2348f0*/
    v223 = 0; /*0x2348f4*/
    v221[0] = (void *)sub_3C460(64); /*0x234905*/
    v222 = 58; /*0x234909*/
    v223 = 63; /*0x234911*/
    strcpy((char *)v221[0], "https://www.boomlings.com/database/updateGJUserScore22.php"); /*0x234920*/
    sub_216210(a1, v221, &v235, &v227, 10); /*0x234970*/
    sub_3C310(v233); /*0x23497d*/
    sub_3C310(v234); /*0x23498a*/
    sub_3C310(&v218); /*0x234994*/
    if ( *((_QWORD *)&v226 + 1) > 0xFu ) /*0x2349a2*/
    {
      v182 = v225[0]; /*0x2349a7*/
      if ( (unsigned __int64)(*((_QWORD *)&v226 + 1) + 1LL) >= 0x1000 ) /*0x2349b5*/
      {
        v182 = (void *)*((_QWORD *)v225[0] - 1); /*0x2349bb*/
        if ( (unsigned __int64)((char *)v225[0] - (char *)v182 - 8) > 0x1F ) /*0x2349ca*/
          invoke_watson(0, 0, 0, 0, 0); /*0x2349db*/
      }
      j_j_free(v182); /*0x2349e2*/
    }
    if ( *((_QWORD *)&v231 + 1) > 0xFu ) /*0x2349f3*/
    {
      v183 = Block[0]; /*0x2349f8*/
      if ( (unsigned __int64)(*((_QWORD *)&v231 + 1) + 1LL) >= 0x1000 ) /*0x234a09*/
      {
        v183 = (void *)*((_QWORD *)Block[0] - 1); /*0x234a0f*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v183 - 8) > 0x1F ) /*0x234a1e*/
          invoke_watson(0, 0, 0, 0, 0); /*0x234a2f*/
      }
      j_j_free(v183); /*0x234a36*/
    }
    sub_3C310(Src); /*0x234a40*/
    return sub_3C310(v232); /*0x234a4d*/
  }
  return result; /*0x234a52*/
}

// [51/86] Address: 0x234df0
// Method: GameLevelManager::getLeaderboardScores
// Hidden C++ exception states: #wind=6
void __fastcall GameLevelManager_getLeaderboardScores(__int64 a1, int a2, int a3)
{
  cocos2d::CCString *v6; // rax
  const char *CString; // rax
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  void **v13; // rdx
  void **v14; // rdx
  void **v15; // rdx
  int v16; // r14d
  const char *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  cocos2d::CCString *v20; // rax
  const char *v21; // rax
  int v22; // r9d
  cocos2d::CCString *v23; // rax
  char *v24; // rax
  size_t v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  void **v29; // r14
  unsigned __int64 v30; // rsi
  __int64 v31; // rdi
  _QWORD *v32; // rdx
  void *v33; // rcx
  void *v34; // [rsp+40h] [rbp-C0h]
  __int128 v35; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v36; // [rsp+58h] [rbp-A8h]
  __int64 v37; // [rsp+60h] [rbp-A0h]
  __int128 v38; // [rsp+68h] [rbp-98h] BYREF
  __int64 v39; // [rsp+78h] [rbp-88h]
  __int64 v40; // [rsp+80h] [rbp-80h]
  __int128 v41; // [rsp+88h] [rbp-78h] BYREF
  __int64 v42; // [rsp+98h] [rbp-68h]
  __int64 v43; // [rsp+A0h] [rbp-60h]
  __int128 *v44; // [rsp+A8h] [rbp-58h]
  void *Src[2]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v46; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v47; // [rsp+D0h] [rbp-30h]
  _QWORD v48[4]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v49[32]; // [rsp+F8h] [rbp-8h] BYREF

  v6 = cocos2d::CCString::createWithFormat("lb_%i_%i", a2, a3); /*0x234e2c*/
  CString = cocos2d::CCString::getCString(v6); /*0x234e35*/
  *(_OWORD *)Src = 0; /*0x234e3e*/
  v46 = 0; /*0x234e42*/
  v47 = 0; /*0x234e46*/
  v8 = -1; /*0x234e4a*/
  v9 = -1; /*0x234e51*/
  do /*0x234e57*/
    ++v9; /*0x234e54*/
  while ( CString[v9] ); /*0x234e57*/
  sub_3C230(Src); /*0x234e64*/
  if ( ((a2 - 2) & 0xFFFFFFFD) != 0 /*0x234e87*/
    || (v11 = GJAccountManager_sharedState(v10), *(_DWORD *)(v11 + 360) - *(_DWORD *)(v11 + 364) > 0) )
  {
    v14 = Src; /*0x234eb2*/
    if ( v47 > 0xF ) /*0x234ebb*/
      v14 = (void **)Src[0]; /*0x234ebb*/
    if ( !(unsigned __int8)sub_21E890(a1, v14) ) /*0x234ec3*/
    {
      v15 = Src; /*0x234ed0*/
      if ( v47 > 0xF ) /*0x234ed9*/
        v15 = (void **)Src[0]; /*0x234ed9*/
      sub_21E960(a1, v15); /*0x234ee1*/
      v16 = 100; /*0x234eed*/
      if ( a2 == 2 ) /*0x234ef6*/
      {
        v17 = "relative"; /*0x234ef8*/
        v16 = 50; /*0x234eff*/
      }
      else if ( a2 == 4 ) /*0x234f0a*/
      {
        v17 = "friends"; /*0x234f0c*/
      }
      else
      {
        v17 = "creators"; /*0x234f15*/
        if ( a2 != 3 ) /*0x234f1f*/
          v17 = "top"; /*0x234f1f*/
      }
      v18 = qword_905FD0; /*0x234f23*/
      if ( !qword_905FD0 ) /*0x234f2d*/
      {
        v34 = operator new(0x6E8u); /*0x234f39*/
        qword_905FD0 = sub_2723A0(v34); /*0x234f47*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x234f58*/
        v18 = qword_905FD0; /*0x234f5a*/
      }
      sub_3E4F0(v49, v18 + 624); /*0x234f6c*/
      GameLevelManager_getBasePostString(v19, v48); /*0x234f76*/
      v20 = cocos2d::CCString::createWithFormat("%c%s%s%c%c%s", 87, "mfd", "2893", 103, 98, (const char *)&word_708030); /*0x234fb2*/
      v21 = cocos2d::CCString::getCString(v20); /*0x234fbb*/
      v22 = 0; /*0x234fc1*/
      if ( a2 != 3 ) /*0x234fc7*/
        v22 = a3; /*0x234fc7*/
      v23 = cocos2d::CCString::createWithFormat("&type=%s&count=%i&stat=%i&secret=%s", v17, v16, v22, v21); /*0x234fdd*/
      v24 = (char *)cocos2d::CCString::getCString(v23); /*0x234fe6*/
      v25 = -1; /*0x234fec*/
      do /*0x234ff3*/
        ++v25; /*0x234ff0*/
      while ( v24[v25] ); /*0x234ff3*/
      sub_43D80(v48, v24, v25); /*0x235001*/
      v44 = &v41; /*0x235014*/
      v35 = 0; /*0x23501b*/
      v36 = 0; /*0x235020*/
      v37 = 0; /*0x235025*/
      v29 = Src; /*0x23502a*/
      if ( v47 > 0xF ) /*0x235033*/
        v29 = (void **)Src[0]; /*0x235033*/
      v30 = v46; /*0x235038*/
      v31 = 0x7FFFFFFFFFFFFFFFLL; /*0x23503c*/
      if ( v46 > 0x7FFFFFFFFFFFFFFFLL ) /*0x235049*/
        sub_8D90(v27, v26, v28); /*0x2351eb*/
      if ( v46 > 0xF ) /*0x235053*/
      {
        if ( (v46 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x235078*/
        {
          v31 = v46 | 0xF; /*0x23507a*/
          if ( (v46 | 0xF) < 0x16 ) /*0x235085*/
            v31 = 22; /*0x235085*/
        }
        *(_QWORD *)&v35 = sub_3C460(v31 + 1); /*0x235092*/
        v36 = v30; /*0x235097*/
        v37 = v31; /*0x23509c*/
        memcpy((void *)v35, v29, v30 + 1); /*0x2350ab*/
      }
      else
      {
        v36 = v46; /*0x235055*/
        v37 = 15; /*0x23505a*/
        v35 = *(_OWORD *)v29; /*0x235067*/
      }
      v32 = v48; /*0x2350b1*/
      if ( v48[3] > 0xFu ) /*0x2350ba*/
        v32 = (_QWORD *)v48[0]; /*0x2350ba*/
      v41 = 0; /*0x2350c2*/
      v42 = 0; /*0x2350c6*/
      v43 = 0; /*0x2350ca*/
      do /*0x2350d3*/
        ++v8; /*0x2350d0*/
      while ( *((_BYTE *)v32 + v8) ); /*0x2350d3*/
      sub_3C230(&v41); /*0x2350e0*/
      v38 = 0; /*0x2350e9*/
      v39 = 0; /*0x2350ee*/
      v40 = 0; /*0x2350f3*/
      *(_QWORD *)&v38 = sub_3C460(64); /*0x235101*/
      v39 = 52; /*0x235106*/
      v40 = 63; /*0x23510f*/
      strcpy((char *)v38, "https://www.boomlings.com/database/getGJScores20.php"); /*0x23511e*/
      sub_216210(a1, &v38, &v41, &v35, 11); /*0x23515d*/
      sub_3C310(v48); /*0x235167*/
      sub_3C310(v49); /*0x235171*/
    }
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 1424); /*0x234e89*/
    if ( v12 ) /*0x234e93*/
    {
      v13 = Src; /*0x234e99*/
      if ( v47 > 0xF ) /*0x234ea2*/
        v13 = (void **)Src[0]; /*0x234ea2*/
      (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v12 + 24LL))(v12, v13); /*0x234eaa*/
    }
  }
  if ( v47 > 0xF ) /*0x23517f*/
  {
    v33 = Src[0]; /*0x235184*/
    if ( v47 + 1 >= 0x1000 ) /*0x235192*/
    {
      v33 = (void *)*((_QWORD *)Src[0] - 1); /*0x235198*/
      if ( (unsigned __int64)((char *)Src[0] - (char *)v33 - 8) > 0x1F ) /*0x2351a7*/
        invoke_watson(0, 0, 0, 0, 0); /*0x2351b8*/
    }
    j_j_free(v33); /*0x2351bf*/
  }
}

// [52/86] Address: 0x235200
// Method: GameLevelManager::onGetLeaderboardScoresCompleted
// Hidden C++ exception states: #wind=2
double __fastcall GameLevelManager_onGetLeaderboardScoresCompleted(__int64 a1, size_t *a2, __int64 *a3)
{
  __int64 v6; // r12
  cocos2d::CCArray *v7; // rbx
  int v8; // edi
  cocos2d::CCString *v9; // rax
  int v10; // r15d
  cocos2d::CCString *v11; // rax
  int v12; // eax
  int v13; // ebx
  const void *v14; // rcx
  size_t v15; // r8
  __int64 v16; // rcx
  _QWORD *v17; // rax
  cocos2d::CCArray *Scores; // rdi
  unsigned int *v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 i; // rdx
  int v23; // ebx
  int v24; // ebx
  int (__cdecl *v25)(const void *, const void *); // r9
  int v26; // edx
  unsigned int *v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  unsigned __int64 j; // r8
  __int64 v31; // rcx
  __int128 Buf2; // [rsp+20h] [rbp-98h] BYREF
  __int64 v34; // [rsp+30h] [rbp-88h]
  __int64 v35; // [rsp+38h] [rbp-80h]
  char v36[32]; // [rsp+48h] [rbp-70h] BYREF
  size_t *v37; // [rsp+68h] [rbp-50h]
  __int64 *v38; // [rsp+70h] [rbp-48h]

  v37 = a2; /*0x23522b*/
  v38 = a3; /*0x235230*/
  v6 = (__int64)a3; /*0x235235*/
  if ( (unsigned __int64)a3[3] > 0xF ) /*0x23523d*/
    v6 = *a3; /*0x23523f*/
  sub_21EA30(a1, v6); /*0x235245*/
  v7 = (cocos2d::CCArray *)sub_D09B0(a3, &unk_70F154); /*0x235259*/
  v8 = 0; /*0x235265*/
  if ( cocos2d::CCArray::count(v7) == 3 ) /*0x23526a*/
  {
    v9 = cocos2d::CCArray::stringAtIndex(v7, 1u); /*0x235274*/
    v10 = cocos2d::CCString::intValue(v9); /*0x235283*/
  }
  else
  {
    v10 = 0; /*0x235288*/
  }
  if ( cocos2d::CCArray::count(v7) == 3 ) /*0x23529c*/
  {
    v11 = cocos2d::CCArray::stringAtIndex(v7, 2u); /*0x2352a1*/
    v12 = cocos2d::CCString::intValue(v11); /*0x2352aa*/
  }
  else
  {
    v12 = 0; /*0x2352b7*/
  }
  v13 = 0; /*0x2352b9*/
  if ( v10 != 3 ) /*0x2352bf*/
    v13 = v12; /*0x2352bf*/
  Buf2 = 0; /*0x2352c5*/
  v34 = 2; /*0x2352ca*/
  v35 = 15; /*0x2352cf*/
  strcpy((char *)&Buf2, "-1"); /*0x2352dd*/
  v14 = a2; /*0x2352e7*/
  if ( a2[3] > 0xF ) /*0x2352ef*/
    v14 = (const void *)*a2; /*0x2352f1*/
  v15 = a2[2]; /*0x2352f4*/
  if ( v15 > 2 ) /*0x2352fc*/
    v15 = 2; /*0x2352fc*/
  if ( !memcmp(v14, &Buf2, v15) && a2[2] == 2 )
  {
    v16 = *(_QWORD *)(a1 + 1424); /*0x235315*/
    if ( v16 ) /*0x23531f*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 24LL))(v16, v6); /*0x23532b*/
  }
  else
  {
    v17 = (_QWORD *)sub_3E4F0(v36, a2); /*0x23533b*/
    LOBYTE(v8) = v10 == 3; /*0x235344*/
    Scores = (cocos2d::CCArray *)GameLevelManager_createAndGetScores(a1, v17, v8); /*0x235356*/
    if ( cocos2d::CCArray::count(Scores) ) /*0x23535c*/
    {
      if ( v13 ) /*0x235368*/
      {
        if ( Scores ) /*0x23536d*/
        {
          v19 = (unsigned int *)*((_QWORD *)Scores + 7); /*0x23536f*/
          v20 = *v19; /*0x235373*/
          if ( (_DWORD)v20 ) /*0x235377*/
          {
            v21 = *((_QWORD *)v19 + 2); /*0x235379*/
            for ( i = v21 + 8 * (v20 - 1); v21 <= i; v21 += 8LL ) /*0x235388*/
            {
              if ( !*(_QWORD *)v21 ) /*0x235390*/
                break; /*0x235396*/
              *(_DWORD *)(*(_QWORD *)v21 + 944LL) = v13; /*0x235398*/
            }
          }
        }
      }
    }
    if ( cocos2d::CCArray::count(Scores) && v10 == 4 )
    {
      v23 = v13 - 1; /*0x2353cc*/
      if ( v23 )
      {
        v24 = v23 - 1; /*0x2353d1*/
        if ( v24 )
          v25 = (int (__cdecl *)(const void *, const void *))(v24 == 1 ? sub_215F90 : sub_215E90);
        else
          v25 = (int (__cdecl *)(const void *, const void *))sub_215F60; /*0x2353f3*/
      }
      else
      {
        v25 = sub_215F30; /*0x2353fc*/
      }
      qsort(*(void **)(*((_QWORD *)Scores + 7) + 16LL), **((unsigned int **)Scores + 7), 8u, v25); /*0x235409*/
      v26 = 1; /*0x23540f*/
      if ( Scores ) /*0x235417*/
      {
        v27 = (unsigned int *)*((_QWORD *)Scores + 7); /*0x235419*/
        v28 = *v27; /*0x23541d*/
        if ( (_DWORD)v28 ) /*0x235421*/
        {
          v29 = *((_QWORD *)v27 + 2); /*0x235423*/
          for ( j = v29 + 8 * (v28 - 1); v29 <= j; v29 += 8LL ) /*0x235432*/
          {
            if ( !*(_QWORD *)v29 ) /*0x235434*/
              break; /*0x23543a*/
            *(_DWORD *)(*(_QWORD *)v29 + 412LL) = v26++; /*0x23543c*/
          }
        }
      }
    }
    Buf2 = 0; /*0x235450*/
    v34 = 1; /*0x235455*/
    v35 = 15; /*0x23545e*/
    LOWORD(Buf2) = 32; /*0x235467*/
    GameLevelManager_markItemAsLiked(a1, (__int64)Scores, &Buf2, v6); /*0x23547c*/
    v31 = *(_QWORD *)(a1 + 1424); /*0x235481*/
    if ( v31 ) /*0x23548b*/
      (*(void (__fastcall **)(__int64, cocos2d::CCArray *, __int64))(*(_QWORD *)v31 + 16LL))(v31, Scores, v6); /*0x235496*/
  }
  sub_3C310(a2); /*0x23549d*/
  return sub_3C310(a3); /*0x2354ab*/
}

// [53/86] Address: 0x236470
// Method: GameLevelManager::getTopArtists
// Hidden C++ exception states: #wind=4
void __fastcall GameLevelManager_getTopArtists(__int64 a1, int a2, int a3)
{
  cocos2d::CCString *v6; // rax
  const char *CString; // rax
  __int64 v8; // rbx
  __int64 v9; // r8
  void **v10; // rdx
  void **v11; // rdx
  __int64 v12; // rcx
  cocos2d::CCString *v13; // rax
  const char *v14; // rax
  cocos2d::CCString *v15; // rax
  char *v16; // rax
  size_t v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  void **v21; // r12
  char *v22; // rsi
  unsigned __int64 v23; // r15
  __int64 v24; // rdi
  unsigned __int64 v25; // r14
  _QWORD *v26; // rdx
  char *v27; // rax
  int Reserved; // [rsp+20h] [rbp-B9h]
  int v29; // [rsp+28h] [rbp-B1h]
  __int128 v30; // [rsp+40h] [rbp-99h] BYREF
  unsigned __int64 v31; // [rsp+50h] [rbp-89h]
  __int64 v32; // [rsp+58h] [rbp-81h]
  __int128 v33; // [rsp+60h] [rbp-79h] BYREF
  __int64 v34; // [rsp+70h] [rbp-69h]
  __int64 v35; // [rsp+78h] [rbp-61h]
  __int128 v36; // [rsp+80h] [rbp-59h] BYREF
  __int64 v37; // [rsp+90h] [rbp-49h]
  __int64 v38; // [rsp+98h] [rbp-41h]
  __int128 *v39; // [rsp+A0h] [rbp-39h]
  __int128 *v40; // [rsp+A8h] [rbp-31h]
  void *Src[2]; // [rsp+B8h] [rbp-21h] BYREF
  unsigned __int64 v42; // [rsp+C8h] [rbp-11h]
  unsigned __int64 v43; // [rsp+D0h] [rbp-9h]
  _QWORD v44[4]; // [rsp+D8h] [rbp-1h] BYREF

  v6 = cocos2d::CCString::createWithFormat("topArtists_%i", a2); /*0x2364a9*/
  CString = cocos2d::CCString::getCString(v6); /*0x2364b2*/
  *(_OWORD *)Src = 0; /*0x2364bb*/
  v42 = 0; /*0x2364c2*/
  v43 = 0; /*0x2364c6*/
  v8 = -1; /*0x2364ca*/
  v9 = -1; /*0x2364d1*/
  do /*0x2364d7*/
    ++v9; /*0x2364d4*/
  while ( CString[v9] ); /*0x2364d7*/
  sub_3C230(Src); /*0x2364e4*/
  v10 = Src; /*0x2364ea*/
  if ( v43 > 0xF ) /*0x2364f3*/
    v10 = (void **)Src[0]; /*0x2364f3*/
  if ( (unsigned __int8)sub_21E890(a1, v10) ) /*0x2364fb*/
  {
    v23 = v43; /*0x236720*/
    v22 = (char *)Src[0]; /*0x236724*/
  }
  else
  {
    v11 = Src; /*0x236508*/
    if ( v43 > 0xF ) /*0x236511*/
      v11 = (void **)Src[0]; /*0x236511*/
    sub_21E960(a1, v11); /*0x236519*/
    GameLevelManager_getBasePostString(v12, v44); /*0x236522*/
    v29 = 98; /*0x236534*/
    Reserved = 103; /*0x23653c*/
    v13 = cocos2d::CCString::createWithFormat( /*0x23655e*/
            "%c%s%s%c%c%s",
            87,
            "mfd",
            "2893",
            Reserved,
            v29,
            (const char *)&word_708030);
    v14 = cocos2d::CCString::getCString(v13); /*0x236567*/
    v15 = cocos2d::CCString::createWithFormat("&page=%i&secret=%s&total=%i", a2, v14, a3); /*0x23657c*/
    v16 = (char *)cocos2d::CCString::getCString(v15); /*0x236585*/
    v17 = -1; /*0x23658b*/
    do /*0x236593*/
      ++v17; /*0x236590*/
    while ( v16[v17] ); /*0x236593*/
    sub_43D80(v44, v16, v17); /*0x2365a1*/
    v39 = &v30; /*0x2365ab*/
    v40 = &v36; /*0x2365b3*/
    v30 = 0; /*0x2365ba*/
    v31 = 0; /*0x2365bf*/
    v32 = 0; /*0x2365c4*/
    v21 = Src; /*0x2365c9*/
    v22 = (char *)Src[0]; /*0x2365cd*/
    v23 = v43; /*0x2365d1*/
    if ( v43 > 0xF ) /*0x2365d9*/
      v21 = (void **)Src[0]; /*0x2365d9*/
    v24 = 0x7FFFFFFFFFFFFFFFLL; /*0x2365dd*/
    v25 = v42; /*0x2365e7*/
    if ( v42 > 0x7FFFFFFFFFFFFFFFLL ) /*0x2365ee*/
      sub_8D90(v19, v18, v20); /*0x236798*/
    if ( v42 > 0xF ) /*0x2365f8*/
    {
      if ( (v42 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x23661e*/
      {
        v24 = v42 | 0xF; /*0x236620*/
        if ( (v42 | 0xF) < 0x16 ) /*0x23662b*/
          v24 = 22; /*0x23662b*/
      }
      *(_QWORD *)&v30 = sub_3C460(v24 + 1); /*0x236638*/
      v31 = v25; /*0x23663d*/
      v32 = v24; /*0x236642*/
      memcpy((void *)v30, v21, v25 + 1); /*0x236651*/
    }
    else
    {
      v31 = v42; /*0x2365fa*/
      v32 = 15; /*0x2365ff*/
      v30 = *(_OWORD *)v21; /*0x23660d*/
    }
    v26 = v44; /*0x236657*/
    if ( v44[3] > 0xFu ) /*0x236660*/
      v26 = (_QWORD *)v44[0]; /*0x236660*/
    v36 = 0; /*0x236668*/
    v37 = 0; /*0x23666f*/
    v38 = 0; /*0x236673*/
    do /*0x23667a*/
      ++v8; /*0x236677*/
    while ( *((_BYTE *)v26 + v8) ); /*0x23667a*/
    sub_3C230(&v36); /*0x236687*/
    v33 = 0; /*0x236690*/
    v34 = 0; /*0x236694*/
    v35 = 0; /*0x236698*/
    *(_QWORD *)&v33 = sub_3C460(64); /*0x2366a9*/
    v34 = 54; /*0x2366ad*/
    v35 = 63; /*0x2366b5*/
    strcpy((char *)v33, "https://www.boomlings.com/database/getGJTopArtists.php"); /*0x2366c4*/
    sub_216210(a1, &v33, &v36, &v30, 59); /*0x23670f*/
    sub_3C310(v44); /*0x236719*/
  }
  if ( v23 > 0xF ) /*0x23672c*/
  {
    v27 = v22; /*0x236732*/
    if ( v23 + 1 >= 0x1000 ) /*0x23673c*/
    {
      v22 = (char *)*((_QWORD *)v22 - 1); /*0x236742*/
      if ( (unsigned __int64)(v27 - v22 - 8) > 0x1F ) /*0x236751*/
        invoke_watson(0, 0, 0, 0, 0); /*0x236762*/
    }
    j_j_free(v22); /*0x23676c*/
  }
}

// [54/86] Address: 0x236c50
// Method: GameLevelManager::getUsers
// Hidden C++ exception states: #wind=4
double __fastcall GameLevelManager_getUsers(__int64 a1, __int64 a2)
{
  __int64 Key; // r14
  __int64 v5; // rcx
  int v6; // ebx
  int v7; // edi
  const char *v8; // rsi
  cocos2d::CCString *v9; // rax
  const char *CString; // rax
  cocos2d::CCString *v11; // rax
  char *v12; // rax
  __int64 v13; // rbx
  size_t v14; // r8
  __int64 v15; // r8
  _QWORD *v16; // rdx
  double result; // xmm0_8
  int v18; // [rsp+20h] [rbp-89h]
  int v19; // [rsp+28h] [rbp-81h]
  __int128 v20; // [rsp+48h] [rbp-61h] BYREF
  __int64 v21; // [rsp+58h] [rbp-51h]
  __int64 v22; // [rsp+60h] [rbp-49h]
  __int128 v23; // [rsp+68h] [rbp-41h] BYREF
  __int64 v24; // [rsp+78h] [rbp-31h]
  __int64 v25; // [rsp+80h] [rbp-29h]
  __int128 *v26; // [rsp+88h] [rbp-21h]
  __int128 v27; // [rsp+98h] [rbp-11h] BYREF
  __int64 v28; // [rsp+A8h] [rbp-1h]
  unsigned __int64 v29; // [rsp+B0h] [rbp+7h]
  _QWORD Src[4]; // [rsp+B8h] [rbp+Fh] BYREF

  Key = GJSearchObject_getKey(a2); /*0x236c8d*/
  if ( !(unsigned __int8)sub_21E890(a1, Key) ) /*0x236c96*/
  {
    sub_21E960(a1, Key); /*0x236ca9*/
    GameLevelManager_getBasePostString(v5, Src); /*0x236cb2*/
    sub_3E4F0(&v27, a2 + 328); /*0x236cc3*/
    v6 = *(_DWORD *)(a2 + 424); /*0x236cc9*/
    v7 = *(_DWORD *)(a2 + 432); /*0x236ccf*/
    v8 = (const char *)&v27; /*0x236cd5*/
    if ( v29 > 0xF ) /*0x236cde*/
      v8 = (const char *)v27; /*0x236cde*/
    v19 = 98; /*0x236cef*/
    v18 = 103; /*0x236cf7*/
    v9 = cocos2d::CCString::createWithFormat("%c%s%s%c%c%s", 87, "mfd", "2893", v18, v19, (const char *)&word_708030); /*0x236d19*/
    CString = cocos2d::CCString::getCString(v9); /*0x236d22*/
    v11 = cocos2d::CCString::createWithFormat("&str=%s&total=%i&page=%i&secret=%s", v8, v7, v6, CString); /*0x236d3d*/
    v12 = (char *)cocos2d::CCString::getCString(v11); /*0x236d46*/
    v13 = -1; /*0x236d4c*/
    v14 = -1; /*0x236d53*/
    do /*0x236d59*/
      ++v14; /*0x236d56*/
    while ( v12[v14] ); /*0x236d59*/
    sub_43D80(Src, v12, v14); /*0x236d67*/
    sub_3C310(&v27); /*0x236d71*/
    v26 = &v27; /*0x236d82*/
    v23 = 0; /*0x236d89*/
    v24 = 0; /*0x236d8d*/
    v25 = 0; /*0x236d91*/
    v15 = -1; /*0x236d95*/
    do /*0x236da3*/
      ++v15; /*0x236da0*/
    while ( *(_BYTE *)(Key + v15) ); /*0x236da3*/
    sub_3C230(&v23); /*0x236db1*/
    v16 = Src; /*0x236db7*/
    if ( Src[3] > 0xFu ) /*0x236dc0*/
      v16 = (_QWORD *)Src[0]; /*0x236dc0*/
    v27 = 0; /*0x236dc8*/
    v28 = 0; /*0x236dcc*/
    v29 = 0; /*0x236dd0*/
    do /*0x236dd7*/
      ++v13; /*0x236dd4*/
    while ( *((_BYTE *)v16 + v13) ); /*0x236dd7*/
    sub_3C230(&v27); /*0x236de4*/
    v20 = 0; /*0x236ded*/
    *(_QWORD *)&v20 = sub_3C460(64); /*0x236e06*/
    v21 = 51; /*0x236e0a*/
    v22 = 63; /*0x236e12*/
    strcpy((char *)v20, "https://www.boomlings.com/database/getGJUsers20.php"); /*0x236e21*/
    sub_216210(a1, &v20, &v27, &v23, 47); /*0x236e6c*/
    return sub_3C310(Src); /*0x236e76*/
  }
  return result; /*0x236e7b*/
}

// [55/86] Address: 0x236eb0
// Method: GameLevelManager::onUploadCommentCompleted
// Hidden C++ exception states: #wind=5
double __fastcall GameLevelManager_onUploadCommentCompleted(__int64 a1, unsigned __int64 *a2, __int64 *a3)
{
  __int64 v4; // rdi
  __int64 v5; // r13
  const void *v6; // rcx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  size_t v9; // r8
  _BYTE *v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // r8
  cocos2d::CCArray *v13; // rsi
  void *v14; // r8
  __int64 v15; // rcx
  cocos2d::CCString *v16; // rax
  const char *CString; // rax
  __int64 v18; // r8
  cocos2d::CCString *v19; // rax
  const char *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rsi
  unsigned __int64 v24; // rbx
  __int128 *v25; // r12
  __int128 *p_Buf2; // rax
  unsigned __int64 v27; // rdi
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int128 *v32; // rax
  void *v33; // rbx
  __int64 v34; // rcx
  char *v35; // rax
  void *v36; // rcx
  __int128 *v39; // [rsp+30h] [rbp-89h]
  __int128 v40; // [rsp+38h] [rbp-81h] BYREF
  unsigned __int64 v41; // [rsp+48h] [rbp-71h]
  __int64 v42; // [rsp+50h] [rbp-69h]
  void *Src; // [rsp+58h] [rbp-61h]
  __int64 *v44; // [rsp+60h] [rbp-59h]
  char v45[32]; // [rsp+68h] [rbp-51h] BYREF
  unsigned __int64 *v46; // [rsp+88h] [rbp-31h]
  __int64 *v47; // [rsp+90h] [rbp-29h]
  __int128 Buf2; // [rsp+98h] [rbp-21h] BYREF
  __m128i si128; // [rsp+A8h] [rbp-11h]
  void *Block[2]; // [rsp+B8h] [rbp-1h] BYREF
  __int128 v51; // [rsp+C8h] [rbp+Fh]

  v44 = a3; /*0x236edd*/
  v4 = a1; /*0x236ee4*/
  v46 = a2; /*0x236eec*/
  v47 = a3; /*0x236ef0*/
  v5 = (__int64)a3; /*0x236ef4*/
  if ( (unsigned __int64)a3[3] > 0xF ) /*0x236efc*/
    v5 = *a3; /*0x236efe*/
  sub_21EA30(a1, v5); /*0x236f04*/
  Buf2 = 0; /*0x236f0c*/
  si128.m128i_i64[0] = 2; /*0x236f15*/
  si128.m128i_i64[1] = 15; /*0x236f19*/
  strcpy((char *)&Buf2, "-1"); /*0x236f26*/
  v6 = a2; /*0x236f2e*/
  v7 = a2[3]; /*0x236f31*/
  if ( v7 > 0xF ) /*0x236f39*/
    v6 = (const void *)*a2; /*0x236f3b*/
  v8 = a2[2]; /*0x236f3e*/
  v9 = v8; /*0x236f42*/
  if ( v8 > 2 ) /*0x236f48*/
    v9 = 2; /*0x236f48*/
  if ( !memcmp(v6, &Buf2, v9) && v8 == 2 ) /*0x236f5d*/
    goto LABEL_19; /*0x236f5d*/
  v10 = a2; /*0x236f63*/
  if ( v7 > 0xF ) /*0x236f6a*/
    v10 = (_BYTE *)*a2; /*0x236f6c*/
  Buf2 = 0; /*0x236f72*/
  si128 = 0; /*0x236f79*/
  v11 = -1; /*0x236f7e*/
  v12 = -1; /*0x236f85*/
  do /*0x236f93*/
    ++v12; /*0x236f90*/
  while ( v10[v12] ); /*0x236f93*/
  sub_3C230(&Buf2); /*0x236f9e*/
  v13 = (cocos2d::CCArray *)sub_D09B0(&Buf2, &unk_74CF9C); /*0x236fb4*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x236fbf*/
  {
    v14 = (void *)Buf2; /*0x236fc4*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x236fd2*/
    {
      v14 = *(void **)(Buf2 - 8); /*0x236fd8*/
      if ( (unsigned __int64)(Buf2 - (_QWORD)v14 - 8) > 0x1F ) /*0x236fe7*/
        invoke_watson(0, 0, 0, 0, 0); /*0x236ffb*/
    }
    j_j_free(v14); /*0x237005*/
  }
  si128 = _mm_load_si128((const __m128i *)&Size); /*0x237012*/
  LOBYTE(Buf2) = 0; /*0x237017*/
  if ( cocos2d::CCArray::count(v13) < 2 ) /*0x237027*/
  {
LABEL_19:
    v15 = *(_QWORD *)(v4 + 1352); /*0x237029*/
    if ( v15 ) /*0x237033*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 24LL))(v15, v5); /*0x23703f*/
  }
  else
  {
    v16 = cocos2d::CCArray::objectAtIndex(v13, 0); /*0x23704c*/
    CString = cocos2d::CCString::getCString(v16); /*0x237055*/
    *(_OWORD *)Block = 0; /*0x23705e*/
    v51 = 0; /*0x237065*/
    v18 = -1; /*0x23706a*/
    do /*0x237073*/
      ++v18; /*0x237070*/
    while ( CString[v18] ); /*0x237073*/
    sub_3C230(Block); /*0x237081*/
    v19 = cocos2d::CCArray::objectAtIndex(v13, 1u); /*0x23708f*/
    v20 = cocos2d::CCString::getCString(v19); /*0x237098*/
    Buf2 = 0; /*0x2370a1*/
    si128 = 0u; /*0x2370a8*/
    do /*0x2370b3*/
      ++v11; /*0x2370b0*/
    while ( v20[v11] ); /*0x2370b3*/
    sub_3C230(&Buf2); /*0x2370c3*/
    v23 = 0x7FFFFFFFFFFFFFFFLL; /*0x2370c9*/
    v24 = si128.m128i_i64[0]; /*0x2370d8*/
    v25 = (__int128 *)Buf2; /*0x2370dc*/
    if ( *(_QWORD *)(v4 + 1352) ) /*0x2370e0*/
    {
      v40 = 0; /*0x2370f1*/
      v41 = 0; /*0x2370f6*/
      v42 = 0; /*0x2370fa*/
      p_Buf2 = &Buf2; /*0x2370fe*/
      if ( si128.m128i_i64[1] > 0xFuLL ) /*0x237107*/
        p_Buf2 = (__int128 *)Buf2; /*0x237107*/
      Src = p_Buf2; /*0x23710b*/
      if ( si128.m128i_i64[0] > 0x7FFFFFFFFFFFFFFFuLL ) /*0x237112*/
        sub_8D90(22, v21, v22); /*0x237343*/
      if ( si128.m128i_i64[0] > 0xFuLL ) /*0x23711c*/
      {
        v27 = si128.m128i_i64[0] | 0xF; /*0x237137*/
        if ( (si128.m128i_i64[0] | 0xFuLL) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x23713e*/
        {
          if ( v27 < 0x16 ) /*0x237148*/
            v27 = 22; /*0x237148*/
        }
        else
        {
          v27 = 0x7FFFFFFFFFFFFFFFLL; /*0x237140*/
        }
        *(_QWORD *)&v40 = sub_3C460(v27 + 1); /*0x237155*/
        v41 = v24; /*0x23715a*/
        v42 = v27; /*0x23715e*/
        memcpy((void *)v40, Src, v24 + 1); /*0x23716d*/
        v4 = a1; /*0x237172*/
      }
      else
      {
        v41 = si128.m128i_i64[0]; /*0x23711e*/
        v42 = 15; /*0x237122*/
        v40 = *p_Buf2; /*0x23712d*/
      }
      (*(void (__fastcall **)(_QWORD, __int128 *, __int64))(**(_QWORD **)(v4 + 1352) + 32LL))( /*0x237189*/
        *(_QWORD *)(v4 + 1352),
        &v40,
        v5);
    }
    v28 = (_QWORD *)sub_3E4F0(v45, a2); /*0x237193*/
    Src = (void *)GameLevelManager_createAndGetScores(v4, v28, 2); /*0x2371a9*/
    v40 = 0; /*0x2371b0*/
    v41 = 0; /*0x2371b5*/
    v42 = 0; /*0x2371b9*/
    v32 = &Buf2; /*0x2371bd*/
    if ( si128.m128i_i64[1] > 0xFuLL ) /*0x2371c6*/
      v32 = v25; /*0x2371c6*/
    v39 = v32; /*0x2371ca*/
    if ( v24 > 0x7FFFFFFFFFFFFFFFLL ) /*0x2371d2*/
      sub_8D90(v30, v29, v31); /*0x23733d*/
    if ( v24 > 0xF ) /*0x2371dc*/
    {
      if ( (v24 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x2371fe*/
      {
        v23 = v24 | 0xF; /*0x237200*/
        if ( (v24 | 0xF) < 0x16 ) /*0x23720c*/
          v23 = 22; /*0x23720c*/
      }
      *(_QWORD *)&v40 = sub_3C460(v23 + 1); /*0x237219*/
      v41 = v24; /*0x23721e*/
      v42 = v23; /*0x237222*/
      memcpy((void *)v40, v39, v24 + 1); /*0x237232*/
    }
    else
    {
      v41 = v24; /*0x2371de*/
      v42 = 15; /*0x2371e2*/
      v40 = *v32; /*0x2371ed*/
    }
    v33 = Src; /*0x23723f*/
    GameLevelManager_markItemAsLiked(v4, (__int64)Src, &v40, v5); /*0x237249*/
    v34 = *(_QWORD *)(v4 + 1352); /*0x23724e*/
    if ( v34 ) /*0x237258*/
      (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v34 + 8LL))(v34, v33, v5); /*0x237263*/
    if ( si128.m128i_i64[1] > 0xFuLL ) /*0x23726f*/
    {
      v35 = (char *)v25; /*0x237275*/
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x23727f*/
      {
        v25 = (__int128 *)*((_QWORD *)v25 - 1); /*0x237285*/
        if ( (unsigned __int64)(v35 - (char *)v25 - 8) > 0x1F ) /*0x237295*/
          invoke_watson(0, 0, 0, 0, 0); /*0x2372a6*/
      }
      j_j_free(v25); /*0x2372b0*/
    }
    if ( *((_QWORD *)&v51 + 1) > 0xFu ) /*0x2372be*/
    {
      v36 = Block[0]; /*0x2372c3*/
      if ( (unsigned __int64)(*((_QWORD *)&v51 + 1) + 1LL) >= 0x1000 ) /*0x2372d1*/
      {
        v36 = (void *)*((_QWORD *)Block[0] - 1); /*0x2372d7*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v36 - 8) > 0x1F ) /*0x2372e6*/
          invoke_watson(0, 0, 0, 0, 0); /*0x2372f7*/
      }
      j_j_free(v36); /*0x2372fe*/
    }
  }
  sub_3C310(a2); /*0x237307*/
  return sub_3C310(v44); /*0x237316*/
}

// [56/86] Address: 0x237570
// Method: GameLevelManager::onGetLevelLeaderboardCompleted
// Hidden C++ exception states: #wind=3
double __fastcall GameLevelManager_onGetLevelLeaderboardCompleted(__int64 a1, unsigned __int64 *a2, _QWORD *a3)
{
  char v6; // r12
  _QWORD *v7; // rbp
  __int64 v8; // rcx
  __int64 SplitIntFromKey; // r14
  const void *v10; // rcx
  unsigned __int64 v11; // rbp
  size_t v12; // r8
  __int64 v13; // rax
  __int64 updated; // r13
  __int64 v15; // rax
  struct cocos2d::CCObject *v16; // rbp
  __int64 v17; // rcx
  __int64 v18; // rax
  bool v19; // r15
  void *v20; // rcx
  struct cocos2d::CCObject *v21; // rax
  void (__fastcall ***v22)(_QWORD, struct cocos2d::CCObject *); // rcx
  char v24[32]; // [rsp+38h] [rbp-90h] BYREF
  unsigned __int64 *v25; // [rsp+58h] [rbp-70h]
  _QWORD *v26; // [rsp+60h] [rbp-68h]
  __int128 Buf2; // [rsp+68h] [rbp-60h] BYREF
  __m128i si128; // [rsp+78h] [rbp-50h]

  v25 = a2; /*0x2375a2*/
  v26 = a3; /*0x2375a7*/
  v6 = 0; /*0x2375ac*/
  v7 = a3; /*0x2375b4*/
  if ( a3[3] > 0xFu ) /*0x2375bc*/
    v7 = (_QWORD *)*a3; /*0x2375be*/
  sub_21EA30(a1, v7); /*0x2375c4*/
  SplitIntFromKey = (int)GameLevelManager_getSplitIntFromKey(v8, v7, 1); /*0x2375d7*/
  Buf2 = 0; /*0x2375dd*/
  si128.m128i_i64[0] = 2; /*0x2375e7*/
  si128.m128i_i64[1] = 15; /*0x2375ec*/
  strcpy((char *)&Buf2, "-1"); /*0x2375fd*/
  v10 = a2; /*0x237607*/
  if ( a2[3] > 0xF ) /*0x23760f*/
    v10 = (const void *)*a2; /*0x237611*/
  v11 = a2[2]; /*0x237614*/
  v12 = v11; /*0x237618*/
  if ( v11 > 2 ) /*0x23761e*/
    v12 = 2; /*0x23761e*/
  if ( !memcmp(v10, &Buf2, v12) && v11 == 2 /*0x23765e*/
    || (v13 = sub_3E4F0(v24, a2),
        updated = GJLevelList_updateLevelsString(v13, 0),
        v15 = sub_2689D0(updated),
        (v16 = (struct cocos2d::CCObject *)v15) == 0) )
  {
    v17 = *(_QWORD *)(a1 + 1480); /*0x237660*/
    if ( v17 ) /*0x23766a*/
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 8LL))(v17, (unsigned int)SplitIntFromKey); /*0x237676*/
  }
  else
  {
    v18 = *(int *)(v15 + 392); /*0x23767e*/
    if ( (int)v18 > 0 ) /*0x237687*/
      cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(a1 + 1232), v16, v18); /*0x237696*/
    v19 = 0; /*0x2376e8*/
    if ( *((_DWORD *)v16 + 190) == 4 ) /*0x2376a3*/
    {
      Buf2 = 0; /*0x2376a8*/
      si128 = _mm_load_si128((const __m128i *)&xmmword_830EF0); /*0x2376b5*/
      strcpy((char *)&Buf2, "32"); /*0x2376c0*/
      v6 = 1; /*0x2376ca*/
      if ( cocos2d::CCDictionary::objectForKey(updated, &Buf2) ) /*0x2376dd*/
        v19 = 1; /*0x2376a3*/
    }
    if ( (v6 & 1) != 0 && si128.m128i_i64[1] > 0xFuLL ) /*0x237703*/
    {
      v20 = (void *)Buf2; /*0x237708*/
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x237717*/
      {
        v20 = *(void **)(Buf2 - 8); /*0x23771d*/
        if ( (unsigned __int64)(Buf2 - (_QWORD)v20 - 8) > 0x1F ) /*0x23772c*/
          invoke_watson(0, 0, 0, 0, 0); /*0x237741*/
      }
      j_j_free(v20); /*0x237748*/
    }
    if ( *((_DWORD *)v16 + 190) == 3 || v19 ) /*0x237759*/
    {
      v21 = (struct cocos2d::CCObject *)sub_26AA20(updated); /*0x23775e*/
      *((_DWORD *)v21 + 81) = SplitIntFromKey; /*0x237763*/
      if ( (int)SplitIntFromKey > 0 ) /*0x23776d*/
        cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(a1 + 1240), v21, SplitIntFromKey); /*0x23777c*/
    }
    v22 = *(void (__fastcall ****)(_QWORD, struct cocos2d::CCObject *))(a1 + 1480); /*0x237782*/
    if ( v22 ) /*0x23778c*/
      (**v22)(v22, v16); /*0x237794*/
  }
  sub_3C310(a2); /*0x23779a*/
  return sub_3C310(a3); /*0x2377a8*/
}

// [57/86] Address: 0x2380c0
// Method: GameLevelManager::downloadUserMessage
// Hidden C++ exception states: #wind=3
double __fastcall GameLevelManager_downloadUserMessage(__int64 a1, int a2, char a3)
{
  cocos2d::CCString *v6; // rax
  const char *CString; // rdi
  __int64 v8; // rcx
  cocos2d::CCString *v9; // rax
  const char *v10; // rax
  cocos2d::CCString *v11; // rax
  char *v12; // rax
  __int64 v13; // rbx
  size_t v14; // r8
  __int64 v15; // r8
  _QWORD *v16; // rdx
  double result; // xmm0_8
  int v18; // [rsp+20h] [rbp-79h]
  int v19; // [rsp+28h] [rbp-71h]
  __int128 v20; // [rsp+40h] [rbp-59h] BYREF
  __int64 v21; // [rsp+50h] [rbp-49h]
  __int64 v22; // [rsp+58h] [rbp-41h]
  __int128 v23; // [rsp+60h] [rbp-39h] BYREF
  __int64 v24; // [rsp+70h] [rbp-29h]
  __int64 v25; // [rsp+78h] [rbp-21h]
  __int128 v26; // [rsp+80h] [rbp-19h] BYREF
  __int64 v27; // [rsp+90h] [rbp-9h]
  __int64 v28; // [rsp+98h] [rbp-1h]
  __int128 *v29; // [rsp+A0h] [rbp+7h]
  __int128 *v30; // [rsp+A8h] [rbp+Fh]
  _QWORD Src[4]; // [rsp+B8h] [rbp+1Fh] BYREF

  v6 = cocos2d::CCString::createWithFormat("message_%i", a2); /*0x2380f8*/
  CString = cocos2d::CCString::getCString(v6); /*0x238107*/
  if ( !(unsigned __int8)sub_21E890(a1, CString) ) /*0x238110*/
  {
    sub_21E960(a1, CString); /*0x238123*/
    GameLevelManager_getBasePostString(v8, Src); /*0x23812c*/
    v19 = 98; /*0x23813e*/
    v18 = 103; /*0x238146*/
    v9 = cocos2d::CCString::createWithFormat("%c%s%s%c%c%s", 87, "mfd", "2893", v18, v19, (const char *)&word_708030); /*0x238168*/
    v10 = cocos2d::CCString::getCString(v9); /*0x238171*/
    v11 = cocos2d::CCString::createWithFormat("&messageID=%i&secret=%s", a2, v10); /*0x238183*/
    v12 = (char *)cocos2d::CCString::getCString(v11); /*0x23818c*/
    v13 = -1; /*0x238192*/
    v14 = -1; /*0x238199*/
    do /*0x2381a3*/
      ++v14; /*0x2381a0*/
    while ( v12[v14] ); /*0x2381a3*/
    sub_43D80(Src, v12, v14); /*0x2381b1*/
    if ( a3 ) /*0x2381b9*/
      sub_43D80(Src, "&isSender=1", 0xBu); /*0x2381cc*/
    v29 = &v23; /*0x2381d5*/
    v30 = &v26; /*0x2381dd*/
    v23 = 0; /*0x2381e4*/
    v24 = 0; /*0x2381ea*/
    v25 = 0; /*0x2381ee*/
    v15 = -1; /*0x2381f2*/
    do /*0x2381f8*/
      ++v15; /*0x2381f5*/
    while ( CString[v15] ); /*0x2381f8*/
    sub_3C230(&v23); /*0x238205*/
    v16 = Src; /*0x23820b*/
    if ( Src[3] > 0xFu ) /*0x238214*/
      v16 = (_QWORD *)Src[0]; /*0x238214*/
    v26 = 0; /*0x23821c*/
    v27 = 0; /*0x238220*/
    v28 = 0; /*0x238224*/
    do /*0x238233*/
      ++v13; /*0x238230*/
    while ( *((_BYTE *)v16 + v13) ); /*0x238233*/
    sub_3C230(&v26); /*0x238240*/
    v20 = 0; /*0x238249*/
    *(_QWORD *)&v20 = sub_3C460(64); /*0x238262*/
    v21 = 58; /*0x238266*/
    v22 = 63; /*0x23826e*/
    strcpy((char *)v20, "https://www.boomlings.com/database/downloadGJMessage20.php"); /*0x23827d*/
    sub_216210(a1, &v20, &v26, &v23, 44); /*0x2382c9*/
    return sub_3C310(Src); /*0x2382d3*/
  }
  return result; /*0x2382d8*/
}

// [58/86] Address: 0x238300
// Method: GameLevelManager::onDownloadUserMessageCompleted
// Hidden C++ exception states: #wind=2
double __fastcall GameLevelManager_onDownloadUserMessageCompleted(__int64 a1, unsigned __int64 *a2, _QWORD *a3)
{
  _QWORD *v6; // rbp
  unsigned int SplitIntFromKey; // r15d
  const void *v8; // rcx
  unsigned __int64 v9; // rbp
  size_t v10; // r8
  _BYTE *v11; // rdx
  __int64 v12; // r8
  __int64 updated; // rax
  int *v14; // rax
  int *v15; // rbp
  __int64 v16; // rcx
  void (__fastcall ***v17)(_QWORD, int *); // rcx
  __int128 Buf2; // [rsp+20h] [rbp-68h] BYREF
  __int64 v20; // [rsp+30h] [rbp-58h]
  __int64 v21; // [rsp+38h] [rbp-50h]
  unsigned __int64 *v22; // [rsp+48h] [rbp-40h]
  _QWORD *v23; // [rsp+50h] [rbp-38h]

  v22 = a2; /*0x238323*/
  v23 = a3; /*0x238328*/
  v6 = a3; /*0x23832d*/
  if ( a3[3] > 0xFu ) /*0x238335*/
    v6 = (_QWORD *)*a3; /*0x238337*/
  SplitIntFromKey = GameLevelManager_getSplitIntFromKey(a1, v6, 1); /*0x238348*/
  sub_21EA30(a1, v6); /*0x238351*/
  Buf2 = 0; /*0x238359*/
  v20 = 2; /*0x238363*/
  v21 = 15; /*0x238368*/
  strcpy((char *)&Buf2, "-1"); /*0x238376*/
  v8 = a2; /*0x238380*/
  if ( a2[3] > 0xF ) /*0x238388*/
    v8 = (const void *)*a2; /*0x23838a*/
  v9 = a2[2]; /*0x23838d*/
  v10 = v9; /*0x238391*/
  if ( v9 > 2 ) /*0x238397*/
    v10 = 2; /*0x238397*/
  if ( !memcmp(v8, &Buf2, v10) && v9 == 2 ) /*0x2383ad*/
    goto LABEL_14; /*0x2383ad*/
  v11 = a2; /*0x2383af*/
  if ( a2[3] > 0xF ) /*0x2383b7*/
    v11 = (_BYTE *)*a2; /*0x2383b9*/
  Buf2 = 0; /*0x2383bf*/
  v20 = 0; /*0x2383c6*/
  v21 = 0; /*0x2383cb*/
  v12 = -1; /*0x2383d0*/
  do /*0x2383da*/
    ++v12; /*0x2383d7*/
  while ( v11[v12] ); /*0x2383da*/
  sub_3C230(&Buf2); /*0x2383e5*/
  updated = GJLevelList_updateLevelsString(&Buf2, 0); /*0x2383f1*/
  v14 = (int *)sub_26B1B0(updated); /*0x2383f9*/
  v15 = v14; /*0x2383fe*/
  if ( !v14 ) /*0x238404*/
  {
LABEL_14:
    v16 = *(_QWORD *)(a1 + 1520); /*0x238406*/
    if ( v16 ) /*0x238410*/
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 8LL))(v16, SplitIntFromKey); /*0x238418*/
  }
  else
  {
    cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(a1 + 1248), (struct cocos2d::CCObject *)v14, v14[80]); /*0x23842e*/
    v17 = *(void (__fastcall ****)(_QWORD, int *))(a1 + 1520); /*0x238434*/
    if ( v17 ) /*0x23843e*/
      (**v17)(v17, v15); /*0x238446*/
  }
  sub_3C310(a2); /*0x23844c*/
  return sub_3C310(a3); /*0x23845a*/
}

// [59/86] Address: 0x238480
// Method: GameLevelManager::onUploadUserMessageCompleted
// Hidden C++ exception states: #wind=4
double __fastcall GameLevelManager_onUploadUserMessageCompleted(__int64 a1, unsigned __int64 *a2, _QWORD *a3)
{
  _QWORD *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rcx
  void *v9; // rcx
  unsigned int SplitIntFromKey; // r13d
  const void *v11; // rcx
  unsigned __int64 v12; // r12
  size_t v13; // r8
  int v14; // ebp
  __int64 v15; // rcx
  cocos2d::CCString *v16; // rax
  const char *CString; // rbx
  __int64 v18; // rcx
  void (__fastcall ***v19)(_QWORD, _QWORD); // rcx
  void *v21; // [rsp+30h] [rbp-78h]
  void *Block[2]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v23; // [rsp+58h] [rbp-50h]
  unsigned __int64 v24; // [rsp+60h] [rbp-48h]

  v6 = a3; /*0x2384b6*/
  if ( a3[3] > 0xFu ) /*0x2384be*/
    v6 = (_QWORD *)*a3; /*0x2384c0*/
  *(_OWORD *)Block = 0; /*0x2384c6*/
  v23 = 0; /*0x2384cd*/
  v24 = 0; /*0x2384d2*/
  v7 = -1; /*0x2384d7*/
  do /*0x2384e3*/
    ++v7; /*0x2384e0*/
  while ( *((_BYTE *)v6 + v7) ); /*0x2384e3*/
  sub_3C230(Block); /*0x2384f1*/
  cocos2d::CCDictionary::removeObjectForKey(*(_QWORD *)(a1 + 1200), Block); /*0x238503*/
  if ( v24 > 0xF ) /*0x238513*/
  {
    v9 = Block[0]; /*0x238518*/
    if ( v24 + 1 >= 0x1000 ) /*0x238527*/
    {
      v9 = (void *)*((_QWORD *)Block[0] - 1); /*0x23852d*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v9 - 8) > 0x1F ) /*0x23853c*/
        invoke_watson(0, 0, 0, 0, 0); /*0x23854d*/
    }
    j_j_free(v9); /*0x238554*/
  }
  SplitIntFromKey = GameLevelManager_getSplitIntFromKey(v8, v6, 1); /*0x238567*/
  *(_OWORD *)Block = 0; /*0x23856d*/
  v23 = 2; /*0x238577*/
  v24 = 15; /*0x238582*/
  strcpy((char *)Block, "-1"); /*0x23858e*/
  v11 = a2; /*0x23859d*/
  if ( a2[3] > 0xF ) /*0x2385a4*/
    v11 = (const void *)*a2; /*0x2385a6*/
  v12 = a2[2]; /*0x2385a9*/
  v13 = v12; /*0x2385ad*/
  if ( v12 > 2 ) /*0x2385b3*/
    v13 = 2; /*0x2385b3*/
  v14 = memcmp(v11, Block, v13); /*0x2385bc*/
  if ( !v14 ) /*0x2385c0*/
  {
    if ( v12 >= 2 ) /*0x2385c6*/
      v14 = v12 > 2; /*0x2385d5*/
    else
      v14 = -1; /*0x2385c8*/
  }
  if ( v14 ) /*0x2385db*/
  {
    v16 = cocos2d::CCString::createWithFormat("messages_%i_%i", 1, 0); /*0x23860e*/
    CString = cocos2d::CCString::getCString(v16); /*0x23861d*/
    v18 = *(_QWORD *)&qword_905FB0; /*0x238620*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x23862a*/
    {
      v21 = operator new(0x690u); /*0x238636*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v21); /*0x238644*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x238655*/
      v18 = *(_QWORD *)&qword_905FB0; /*0x238657*/
    }
    sub_21EF80(v18, CString); /*0x238661*/
    v19 = *(void (__fastcall ****)(_QWORD, _QWORD))(a1 + 1528); /*0x238666*/
    if ( v19 ) /*0x238670*/
      (**v19)(v19, SplitIntFromKey); /*0x238678*/
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 1528); /*0x2385dd*/
    if ( v15 ) /*0x2385e7*/
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 8LL))(v15, SplitIntFromKey); /*0x2385ef*/
    sub_21EF80(a1, v6); /*0x2385f8*/
  }
  sub_3C310(a2); /*0x23867e*/
  return sub_3C310(a3); /*0x23868c*/
}

// [60/86] Address: 0x238b10
// Method: GameLevelManager::onAcceptFriendRequestCompleted
// Hidden C++ exception states: #wind=3
double __fastcall GameLevelManager_onAcceptFriendRequestCompleted(__int64 a1, unsigned __int64 *a2, _QWORD *a3)
{
  _QWORD *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rcx
  void *v9; // rcx
  unsigned int SplitIntFromKey; // ebp
  __int64 v11; // rcx
  bool v12; // r15
  const void *v13; // rcx
  unsigned __int64 v14; // rbx
  size_t v15; // r8
  __int64 v16; // r8
  void (__fastcall ***v17)(_QWORD, _QWORD, __int64); // rcx
  __int64 v18; // rcx
  void *Block[2]; // [rsp+40h] [rbp-68h] BYREF
  __int128 v21; // [rsp+50h] [rbp-58h]

  v6 = a3; /*0x238b41*/
  if ( a3[3] > 0xFu ) /*0x238b49*/
    v6 = (_QWORD *)*a3; /*0x238b4b*/
  *(_OWORD *)Block = 0; /*0x238b51*/
  v21 = 0; /*0x238b59*/
  v7 = -1; /*0x238b5f*/
  do /*0x238b69*/
    ++v7; /*0x238b66*/
  while ( *((_BYTE *)v6 + v7) ); /*0x238b69*/
  sub_3C230(Block); /*0x238b78*/
  cocos2d::CCDictionary::removeObjectForKey(*(_QWORD *)(a1 + 1200), Block); /*0x238b8a*/
  if ( *((_QWORD *)&v21 + 1) > 0xFu ) /*0x238b9a*/
  {
    v9 = Block[0]; /*0x238b9f*/
    if ( (unsigned __int64)(*((_QWORD *)&v21 + 1) + 1LL) >= 0x1000 ) /*0x238bae*/
    {
      v9 = (void *)*((_QWORD *)Block[0] - 1); /*0x238bb4*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v9 - 8) > 0x1F ) /*0x238bc3*/
        invoke_watson(0, 0, 0, 0, 0); /*0x238bd8*/
    }
    j_j_free(v9); /*0x238bdf*/
  }
  SplitIntFromKey = GameLevelManager_getSplitIntFromKey(v8, v6, 1); /*0x238bf2*/
  v12 = (unsigned int)GameLevelManager_getSplitIntFromKey(v11, v6, 2) != 0; /*0x238c07*/
  *(_OWORD *)Block = 0; /*0x238c0e*/
  *(_QWORD *)&v21 = 2; /*0x238c13*/
  *((_QWORD *)&v21 + 1) = 15; /*0x238c18*/
  strcpy((char *)Block, "-1"); /*0x238c26*/
  v13 = a2; /*0x238c30*/
  if ( a2[3] > 0xF ) /*0x238c38*/
    v13 = (const void *)*a2; /*0x238c3a*/
  v14 = a2[2]; /*0x238c3d*/
  v15 = v14; /*0x238c41*/
  if ( v14 > 2 ) /*0x238c47*/
    v15 = 2; /*0x238c47*/
  if ( !memcmp(v13, Block, v15) && v14 == 2 ) /*0x238c5c*/
  {
    v18 = *(_QWORD *)(a1 + 1488); /*0x238c9c*/
    if ( v18 ) /*0x238ca6*/
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v18 + 8LL))(v18, SplitIntFromKey, 45); /*0x238cb3*/
  }
  else
  {
    v17 = *(void (__fastcall ****)(_QWORD, _QWORD, __int64))(a1 + 1488); /*0x238c60*/
    if ( v17 ) /*0x238c6a*/
      (**v17)(v17, SplitIntFromKey, 45); /*0x238c77*/
    if ( SplitIntFromKey == -1 ) /*0x238c7f*/
    {
      LOBYTE(v16) = 1; /*0x238c81*/
      sub_238EC0(a1, v12, v16); /*0x238c88*/
    }
    else
    {
      sub_238CF0(a1, SplitIntFromKey, v12); /*0x238c95*/
    }
  }
  sub_3C310(a2); /*0x238cba*/
  return sub_3C310(a3); /*0x238cc8*/
}

// [61/86] Address: 0x239010
// Method: GameLevelManager::getLevelComments
// Hidden C++ exception states: #wind=7
void __fastcall GameLevelManager_getLevelComments(__int64 a1, unsigned int a2, int a3, int a4, int a5, int a6)
{
  cocos2d::CCString *v10; // rax
  const char *CString; // rax
  __int64 v12; // rbx
  __int64 v13; // r8
  void **v14; // rdx
  void **v15; // rdx
  __int64 v16; // rcx
  cocos2d::CCString *v17; // rax
  const char *v18; // rax
  cocos2d::CCString *v19; // rax
  char *v20; // rax
  size_t v21; // r8
  int v22; // edi
  char *v23; // rdx
  size_t v24; // r8
  cocos2d::CCString *v25; // rax
  char *v26; // rax
  size_t v27; // r8
  cocos2d::CCString *v28; // rax
  char *v29; // rax
  size_t v30; // r8
  __int64 v31; // rcx
  unsigned int v32; // edi
  __int64 v33; // rcx
  cocos2d::CCString *v34; // rax
  char *v35; // rax
  size_t v36; // r8
  const char *v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  void **v42; // r12
  char *v43; // r14
  unsigned __int64 v44; // r13
  __int64 v45; // rsi
  unsigned __int64 v46; // r15
  unsigned __int64 v47; // rdi
  _QWORD *v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  void **v52; // r15
  char *v53; // rdi
  unsigned __int64 v54; // r12
  unsigned __int64 v55; // rbx
  char *v56; // rax
  char *v57; // rax
  uintptr_t Reserved; // [rsp+20h] [rbp-E0h]
  void *v59; // [rsp+40h] [rbp-C0h]
  void *v60; // [rsp+40h] [rbp-C0h]
  __int128 v61; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v62; // [rsp+58h] [rbp-A8h]
  __int64 v63; // [rsp+60h] [rbp-A0h]
  __int128 v64; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v65; // [rsp+78h] [rbp-88h]
  __int64 v66; // [rsp+80h] [rbp-80h]
  __int64 v67; // [rsp+88h] [rbp-78h]
  __int128 v68; // [rsp+90h] [rbp-70h] BYREF
  __int64 v69; // [rsp+A0h] [rbp-60h]
  __int64 v70; // [rsp+A8h] [rbp-58h]
  __int128 *v71; // [rsp+B0h] [rbp-50h]
  void *Src[2]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v73; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v74; // [rsp+D8h] [rbp-28h]
  _QWORD v75[4]; // [rsp+E0h] [rbp-20h] BYREF
  void *Block[2]; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v77; // [rsp+110h] [rbp+10h]
  unsigned __int64 v78; // [rsp+118h] [rbp+18h]

  v67 = a1; /*0x239043*/
  v10 = cocos2d::CCString::createWithFormat("comment_%i_%i_%i_%i", a2, a3, a5, a6); /*0x239064*/
  CString = cocos2d::CCString::getCString(v10); /*0x23906d*/
  *(_OWORD *)Src = 0; /*0x239076*/
  v73 = 0; /*0x23907a*/
  v74 = 0; /*0x23907e*/
  v12 = -1; /*0x239082*/
  v13 = -1; /*0x239089*/
  do /*0x239093*/
    ++v13; /*0x239090*/
  while ( CString[v13] ); /*0x239093*/
  sub_3C230(Src); /*0x2390a1*/
  v14 = Src; /*0x2390a7*/
  if ( v74 > 0xF ) /*0x2390b0*/
    v14 = (void **)Src[0]; /*0x2390b0*/
  if ( (unsigned __int8)sub_21E890(a1, v14) ) /*0x2390b8*/
  {
    v44 = v74; /*0x239528*/
    v43 = (char *)Src[0]; /*0x23952c*/
    goto LABEL_69; /*0x23952c*/
  }
  v15 = Src; /*0x2390c5*/
  if ( v74 > 0xF ) /*0x2390ce*/
    v15 = (void **)Src[0]; /*0x2390ce*/
  sub_21E960(a1, v15); /*0x2390d6*/
  GameLevelManager_getBasePostString(v16, v75); /*0x2390df*/
  LODWORD(Reserved) = 103; /*0x2390f9*/
  v17 = cocos2d::CCString::createWithFormat("%c%s%s%c%c%s", 87, "mfd", "2893", Reserved, 98, (const char *)&word_708030); /*0x23911b*/
  v18 = cocos2d::CCString::getCString(v17); /*0x239124*/
  v19 = cocos2d::CCString::createWithFormat("&page=%i&total=%i&secret=%s&mode=%i", a3, a4, v18, a5); /*0x23913e*/
  v20 = (char *)cocos2d::CCString::getCString(v19); /*0x239147*/
  v21 = -1; /*0x23914d*/
  do /*0x239153*/
    ++v21; /*0x239150*/
  while ( v20[v21] ); /*0x239153*/
  sub_43D80(v75, v20, v21); /*0x239161*/
  v22 = 8; /*0x239166*/
  if ( a6 == 1 ) /*0x239172*/
  {
    v23 = "&userID="; /*0x239174*/
    v24 = 8; /*0x23917b*/
  }
  else
  {
    v23 = "&levelID="; /*0x239180*/
    v24 = 9; /*0x239187*/
  }
  sub_43D80(v75, v23, v24); /*0x23918d*/
  v25 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, a2); /*0x23919c*/
  v26 = (char *)cocos2d::CCString::getCString(v25); /*0x2391a5*/
  v27 = -1; /*0x2391ab*/
  do /*0x2391b3*/
    ++v27; /*0x2391b0*/
  while ( v26[v27] ); /*0x2391b3*/
  sub_43D80(v75, v26, v27); /*0x2391c1*/
  switch ( a6 ) /*0x2391c9*/
  {
    case 3: /*0x2391c9*/
      v22 = 6; /*0x2391cb*/
      goto LABEL_20; /*0x2391d0*/
    case 4: /*0x2391c9*/
      v22 = 7; /*0x2391d7*/
      goto LABEL_20; /*0x2391dc*/
    case 5: /*0x2391c9*/
LABEL_20:
      v28 = cocos2d::CCString::createWithFormat("&cType=%i", v22); /*0x2391e3*/
      v29 = (char *)cocos2d::CCString::getCString(v28); /*0x2391f5*/
      v30 = -1; /*0x2391fb*/
      do /*0x239203*/
        ++v30; /*0x239200*/
      while ( v29[v30] ); /*0x239203*/
      sub_43D80(v75, v29, v30); /*0x239211*/
      break;
  }
  v31 = qword_905FD0; /*0x239216*/
  if ( !qword_905FD0 ) /*0x239220*/
  {
    v59 = operator new(0x6E8u); /*0x23922c*/
    qword_905FD0 = sub_2723A0(v59); /*0x23923a*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x23924b*/
    v31 = qword_905FD0; /*0x23924d*/
  }
  v32 = 20; /*0x239260*/
  if ( !GameManager_getGameVariable(v31, "0088") ) /*0x23925b*/
    v32 = 10; /*0x23926c*/
  v33 = qword_905FD0; /*0x23926f*/
  if ( !qword_905FD0 ) /*0x239279*/
  {
    v60 = operator new(0x6E8u); /*0x239285*/
    qword_905FD0 = sub_2723A0(v60); /*0x239293*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2392a4*/
    v33 = qword_905FD0; /*0x2392a6*/
  }
  if ( GameManager_getGameVariable(v33, "0094") ) /*0x2392b4*/
    v32 *= 2; /*0x2392bd*/
  if ( v32 > 0xA ) /*0x2392c2*/
  {
    v34 = cocos2d::CCString::createWithFormat("&count=%i", v32); /*0x2392cd*/
    v35 = (char *)cocos2d::CCString::getCString(v34); /*0x2392d6*/
    v36 = -1; /*0x2392dc*/
    do /*0x2392e3*/
      ++v36; /*0x2392e0*/
    while ( v35[v36] ); /*0x2392e3*/
    sub_43D80(v75, v35, v36); /*0x2392f1*/
  }
  v37 = "https://www.boomlings.com/database/getGJComments21.php"; /*0x2392fd*/
  if ( a6 == 1 ) /*0x239307*/
    v37 = "https://www.boomlings.com/database/getGJCommentHistory.php"; /*0x239307*/
  *(_OWORD *)Block = 0; /*0x23930e*/
  v77 = 0; /*0x239314*/
  v78 = 0; /*0x239318*/
  v38 = -1; /*0x23931c*/
  do /*0x239323*/
    ++v38; /*0x239320*/
  while ( v37[v38] ); /*0x239323*/
  sub_3C230(Block); /*0x23932d*/
  v71 = &v68; /*0x239341*/
  v61 = 0; /*0x239348*/
  v62 = 0; /*0x23934d*/
  v63 = 0; /*0x239352*/
  v42 = Src; /*0x239357*/
  v43 = (char *)Src[0]; /*0x23935b*/
  v44 = v74; /*0x23935f*/
  if ( v74 > 0xF ) /*0x239367*/
    v42 = (void **)Src[0]; /*0x239367*/
  v45 = 0x7FFFFFFFFFFFFFFFLL; /*0x23936b*/
  v46 = v73; /*0x239375*/
  if ( v73 > 0x7FFFFFFFFFFFFFFFLL ) /*0x23937c*/
    sub_8D90(v40, v39, v41); /*0x2395a3*/
  if ( v73 > 0xF ) /*0x23938b*/
  {
    v47 = v73 | 0xF; /*0x2393aa*/
    if ( (v73 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x2393b1*/
    {
      if ( v47 < 0x16 ) /*0x2393bb*/
        v47 = 22; /*0x2393bb*/
    }
    else
    {
      v47 = 0x7FFFFFFFFFFFFFFFLL; /*0x2393b3*/
    }
    *(_QWORD *)&v61 = sub_3C460(v47 + 1); /*0x2393c8*/
    v62 = v46; /*0x2393cd*/
    v63 = v47; /*0x2393d2*/
    memcpy((void *)v61, v42, v46 + 1); /*0x2393e1*/
  }
  else
  {
    v62 = v73; /*0x23938d*/
    v63 = 15; /*0x239392*/
    v61 = *(_OWORD *)v42; /*0x2393a0*/
  }
  v48 = v75; /*0x2393e8*/
  if ( v75[3] > 0xFu ) /*0x2393f1*/
    v48 = (_QWORD *)v75[0]; /*0x2393f1*/
  v68 = 0; /*0x2393f9*/
  v69 = 0; /*0x2393fd*/
  v70 = 0; /*0x239401*/
  do /*0x239408*/
    ++v12; /*0x239405*/
  while ( *((_BYTE *)v48 + v12) ); /*0x239408*/
  sub_3C230(&v68); /*0x239415*/
  v64 = 0; /*0x23941e*/
  v65 = 0; /*0x239423*/
  v66 = 0; /*0x239428*/
  v52 = Block; /*0x23942c*/
  v53 = (char *)Block[0]; /*0x239430*/
  v54 = v78; /*0x239434*/
  if ( v78 > 0xF ) /*0x23943c*/
    v52 = (void **)Block[0]; /*0x23943c*/
  v55 = v77; /*0x239440*/
  if ( v77 > 0x7FFFFFFFFFFFFFFFLL ) /*0x239447*/
    sub_8D90(v50, v49, v51); /*0x23959d*/
  if ( v77 > 0xF ) /*0x239451*/
  {
    if ( (v77 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x239475*/
    {
      v45 = v77 | 0xF; /*0x239477*/
      if ( (v77 | 0xF) < 0x16 ) /*0x239483*/
        v45 = 22; /*0x239483*/
    }
    *(_QWORD *)&v64 = sub_3C460(v45 + 1); /*0x239490*/
    v65 = v55; /*0x239495*/
    v66 = v45; /*0x23949a*/
    memcpy((void *)v64, v52, v55 + 1); /*0x2394a8*/
  }
  else
  {
    v65 = v77; /*0x239453*/
    v66 = 15; /*0x239458*/
    v64 = *(_OWORD *)v52; /*0x239464*/
  }
  sub_216210(v67, &v64, &v68, &v61, 12); /*0x2394c8*/
  if ( v54 > 0xF ) /*0x2394d2*/
  {
    v56 = v53; /*0x2394d9*/
    if ( v54 + 1 >= 0x1000 ) /*0x2394e3*/
    {
      v53 = (char *)*((_QWORD *)v53 - 1); /*0x2394e9*/
      if ( (unsigned __int64)(v56 - v53 - 8) > 0x1F ) /*0x2394f8*/
        invoke_watson(0, 0, 0, 0, 0); /*0x23950d*/
    }
    j_j_free(v53); /*0x239517*/
  }
  sub_3C310(v75); /*0x239521*/
LABEL_69:
  if ( v44 > 0xF ) /*0x239534*/
  {
    v57 = v43; /*0x23953a*/
    if ( v44 + 1 >= 0x1000 ) /*0x239544*/
    {
      v43 = (char *)*((_QWORD *)v43 - 1); /*0x23954a*/
      if ( (unsigned __int64)(v57 - v43 - 8) > 0x1F ) /*0x239559*/
        invoke_watson(0, 0, 0, 0, 0); /*0x23956e*/
    }
    j_j_free(v43); /*0x239578*/
  }
}

// [62/86] Address: 0x239c00
// Method: GameLevelManager::getAccountComments
// Hidden C++ exception states: #wind=3
double __fastcall GameLevelManager_getAccountComments(__int64 a1, int a2, int a3, int a4)
{
  cocos2d::CCString *v8; // rax
  const char *CString; // rdi
  __int64 v10; // rcx
  cocos2d::CCString *v11; // rax
  const char *v12; // rax
  cocos2d::CCString *v13; // rax
  char *v14; // rax
  __int64 v15; // rbx
  size_t v16; // r8
  __int64 v17; // r8
  _QWORD *v18; // rdx
  double result; // xmm0_8
  int v20; // [rsp+20h] [rbp-99h]
  int v21; // [rsp+28h] [rbp-91h]
  __int128 v22; // [rsp+40h] [rbp-79h] BYREF
  __int64 v23; // [rsp+50h] [rbp-69h]
  __int64 v24; // [rsp+58h] [rbp-61h]
  __int128 v25; // [rsp+60h] [rbp-59h] BYREF
  __int64 v26; // [rsp+70h] [rbp-49h]
  __int64 v27; // [rsp+78h] [rbp-41h]
  __int128 v28; // [rsp+80h] [rbp-39h] BYREF
  __int64 v29; // [rsp+90h] [rbp-29h]
  __int64 v30; // [rsp+98h] [rbp-21h]
  __int128 *v31; // [rsp+A0h] [rbp-19h]
  __int128 *v32; // [rsp+A8h] [rbp-11h]
  _QWORD Src[4]; // [rsp+B8h] [rbp-1h] BYREF

  v8 = cocos2d::CCString::createWithFormat("a_%i_%i", a2, a3); /*0x239c35*/
  CString = cocos2d::CCString::getCString(v8); /*0x239c44*/
  if ( !(unsigned __int8)sub_21E890(a1, CString) ) /*0x239c4d*/
  {
    sub_21E960(a1, CString); /*0x239c60*/
    GameLevelManager_getBasePostString(v10, Src); /*0x239c69*/
    v21 = 98; /*0x239c7b*/
    v20 = 103; /*0x239c83*/
    v11 = cocos2d::CCString::createWithFormat("%c%s%s%c%c%s", 87, "mfd", "2893", v20, v21, (const char *)&word_708030); /*0x239ca5*/
    v12 = cocos2d::CCString::getCString(v11); /*0x239cae*/
    v13 = cocos2d::CCString::createWithFormat("&accountID=%i&page=%i&total=%i&secret=%s", a2, a3, a4, v12); /*0x239cc8*/
    v14 = (char *)cocos2d::CCString::getCString(v13); /*0x239cd1*/
    v15 = -1; /*0x239cd7*/
    v16 = -1; /*0x239cde*/
    do /*0x239ce4*/
      ++v16; /*0x239ce1*/
    while ( v14[v16] ); /*0x239ce4*/
    sub_43D80(Src, v14, v16); /*0x239cf2*/
    v31 = &v25; /*0x239cfb*/
    v32 = &v28; /*0x239d03*/
    v25 = 0; /*0x239d0a*/
    v26 = 0; /*0x239d10*/
    v27 = 0; /*0x239d14*/
    v17 = -1; /*0x239d18*/
    do /*0x239d23*/
      ++v17; /*0x239d20*/
    while ( CString[v17] ); /*0x239d23*/
    sub_3C230(&v25); /*0x239d30*/
    v18 = Src; /*0x239d36*/
    if ( Src[3] > 0xFu ) /*0x239d3f*/
      v18 = (_QWORD *)Src[0]; /*0x239d3f*/
    v28 = 0; /*0x239d47*/
    v29 = 0; /*0x239d4b*/
    v30 = 0; /*0x239d4f*/
    do /*0x239d56*/
      ++v15; /*0x239d53*/
    while ( *((_BYTE *)v18 + v15) ); /*0x239d56*/
    sub_3C230(&v28); /*0x239d63*/
    v22 = 0; /*0x239d6c*/
    *(_QWORD *)&v22 = sub_3C460(64); /*0x239d85*/
    v23 = 61; /*0x239d89*/
    v24 = 63; /*0x239d91*/
    strcpy((char *)v22, "https://www.boomlings.com/database/getGJAccountComments20.php"); /*0x239da0*/
    sub_216210(a1, &v22, &v28, &v25, 31); /*0x239df4*/
    return sub_3C310(Src); /*0x239dfe*/
  }
  return result; /*0x239e03*/
}

// [63/86] Address: 0x23a3a0
// Method: GameLevelManager::createAndGetCommentsFull
// Hidden C++ exception states: #wind=5
cocos2d::CCArray *__fastcall GameLevelManager_createAndGetCommentsFull(__int64 a1, _QWORD *a2, int a3, char a4, int a5)
{
  char v5; // r15
  int v6; // r14d
  _QWORD *v7; // rbx
  cocos2d::CCArray *v8; // r12
  _QWORD *v9; // rdx
  __int64 v10; // r8
  cocos2d::CCArray *v11; // rsi
  unsigned int v12; // edi
  cocos2d::CCString *v13; // rax
  const char *CString; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  cocos2d::CCArray *v19; // rbx
  cocos2d::CCString *v20; // rax
  const char *v21; // rax
  __int64 v22; // r8
  cocos2d::CCString *v23; // rax
  const char *v24; // rax
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  void **v29; // rsi
  char *v30; // r12
  unsigned __int64 v31; // rdi
  unsigned __int64 v32; // rbx
  __int64 updated; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // r8
  void **v38; // r14
  char *v39; // r15
  unsigned __int64 v40; // r13
  unsigned __int64 v41; // rsi
  unsigned __int64 v42; // rdi
  __int64 v43; // rax
  cocos2d::CCObject *v44; // rax
  cocos2d::CCObject *v45; // rdi
  cocos2d::CCObject *v46; // rcx
  char *v47; // rax
  char *v48; // rax
  void **v49; // rsi
  unsigned __int64 v50; // rdi
  unsigned __int64 v51; // rbx
  __int64 v52; // rax
  void *v53; // rcx
  unsigned int v56; // [rsp+34h] [rbp-CCh]
  cocos2d::CCArray *v58; // [rsp+48h] [rbp-B8h]
  cocos2d::CCArray *v59; // [rsp+50h] [rbp-B0h]
  __int128 v60; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v61; // [rsp+68h] [rbp-98h]
  __int64 v62; // [rsp+70h] [rbp-90h]
  __int128 v63; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v64; // [rsp+88h] [rbp-78h]
  __int64 v65; // [rsp+90h] [rbp-70h]
  __int128 v66; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v67; // [rsp+A8h] [rbp-58h]
  __int64 v68; // [rsp+B0h] [rbp-50h]
  __int64 v69; // [rsp+B8h] [rbp-48h]
  _QWORD *v70; // [rsp+C0h] [rbp-40h]
  _BYTE v71[32]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD *v72; // [rsp+E8h] [rbp-18h]
  void *v73[2]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v74; // [rsp+100h] [rbp+0h]
  unsigned __int64 v75; // [rsp+108h] [rbp+8h]
  void *Src[2]; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int64 v77; // [rsp+120h] [rbp+20h]
  unsigned __int64 v78; // [rsp+128h] [rbp+28h]
  void *Block[2]; // [rsp+130h] [rbp+30h] BYREF
  unsigned __int64 v80; // [rsp+140h] [rbp+40h]
  unsigned __int64 v81; // [rsp+148h] [rbp+48h]
  _OWORD v82[2]; // [rsp+150h] [rbp+50h] BYREF

  v5 = a4; /*0x23a3ca*/
  v6 = a3; /*0x23a3d3*/
  v7 = a2; /*0x23a3db*/
  v70 = a2; /*0x23a3de*/
  v69 = a1; /*0x23a3e2*/
  v72 = a2; /*0x23a3e6*/
  v8 = (cocos2d::CCArray *)cocos2d::CCArray::create(a1); /*0x23a3f3*/
  v58 = v8; /*0x23a3f6*/
  v9 = v7; /*0x23a3fb*/
  if ( v7[3] > 0xFu ) /*0x23a403*/
    v9 = (_QWORD *)*v7; /*0x23a405*/
  memset(v82, 0, sizeof(v82)); /*0x23a40b*/
  v10 = -1; /*0x23a417*/
  do /*0x23a423*/
    ++v10; /*0x23a420*/
  while ( *((_BYTE *)v9 + v10) ); /*0x23a423*/
  sub_3C230(v82); /*0x23a42e*/
  v11 = (cocos2d::CCArray *)sub_D09B0(v82, &word_70806C); /*0x23a444*/
  v59 = v11; /*0x23a447*/
  sub_3C310(v82); /*0x23a450*/
  v12 = 0; /*0x23a455*/
  v56 = 0; /*0x23a458*/
  if ( cocos2d::CCArray::count(v11) ) /*0x23a460*/
  {
    while ( 1 ) /*0x23a475*/
    {
      v13 = cocos2d::CCArray::objectAtIndex(v11, v12); /*0x23a475*/
      CString = cocos2d::CCString::getCString(v13); /*0x23a47e*/
      *(_OWORD *)v73 = 0; /*0x23a487*/
      v74 = 0; /*0x23a48b*/
      v75 = 0; /*0x23a48f*/
      v15 = -1; /*0x23a493*/
      do /*0x23a4a3*/
        ++v15; /*0x23a4a0*/
      while ( CString[v15] ); /*0x23a4a3*/
      sub_3C230(v73); /*0x23a4b1*/
      if ( v5 ) /*0x23a4ba*/
        break; /*0x23a4ba*/
      v19 = (cocos2d::CCArray *)sub_D09B0(v73, &word_7222A8); /*0x23a4d0*/
      if ( cocos2d::CCArray::count(v19) >= 2 ) /*0x23a4df*/
      {
        v20 = cocos2d::CCArray::stringAtIndex(v19, 0); /*0x23a4ea*/
        v21 = cocos2d::CCString::getCString(v20); /*0x23a4f3*/
        *(_OWORD *)Src = 0; /*0x23a4fc*/
        v77 = 0; /*0x23a500*/
        v78 = 0; /*0x23a504*/
        v22 = -1; /*0x23a508*/
        do /*0x23a513*/
          ++v22; /*0x23a510*/
        while ( v21[v22] ); /*0x23a513*/
        sub_3C230(Src); /*0x23a521*/
        v23 = cocos2d::CCArray::stringAtIndex(v19, 1u); /*0x23a52f*/
        v24 = cocos2d::CCString::getCString(v23); /*0x23a538*/
        *(_OWORD *)Block = 0; /*0x23a541*/
        v80 = 0; /*0x23a545*/
        v81 = 0; /*0x23a549*/
        v25 = -1; /*0x23a54d*/
        do /*0x23a557*/
          ++v25; /*0x23a554*/
        while ( v24[v25] ); /*0x23a557*/
        sub_3C230(Block); /*0x23a565*/
        v60 = 0; /*0x23a56e*/
        v61 = 0; /*0x23a573*/
        v62 = 0; /*0x23a578*/
        v29 = Src; /*0x23a57d*/
        v30 = (char *)Src[0]; /*0x23a581*/
        if ( v78 > 0xF ) /*0x23a58a*/
          v29 = (void **)Src[0]; /*0x23a58a*/
        v31 = v77; /*0x23a58e*/
        if ( v77 > 0x7FFFFFFFFFFFFFFFLL ) /*0x23a59f*/
          sub_8D90(v27, v26, v28); /*0x23a989*/
        if ( v77 > 0xF ) /*0x23a5a9*/
        {
          v32 = v77 | 0xF; /*0x23a5c6*/
          if ( (v77 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x23a5cd*/
          {
            if ( v32 < 0x16 ) /*0x23a5dd*/
              v32 = 22; /*0x23a5dd*/
          }
          else
          {
            v32 = 0x7FFFFFFFFFFFFFFFLL; /*0x23a5cf*/
          }
          *(_QWORD *)&v60 = sub_3C460(v32 + 1); /*0x23a5ea*/
          v61 = v31; /*0x23a5ef*/
          v62 = v32; /*0x23a5f4*/
          memcpy((void *)v60, v29, v31 + 1); /*0x23a603*/
        }
        else
        {
          v61 = v77; /*0x23a5ab*/
          v62 = 15; /*0x23a5b0*/
          v60 = *(_OWORD *)v29; /*0x23a5bc*/
        }
        LOBYTE(v26) = 1; /*0x23a608*/
        updated = GJLevelList_updateLevelsString(&v60, v26); /*0x23a60f*/
        v36 = sub_26D3F0(updated); /*0x23a61c*/
        v63 = 0; /*0x23a622*/
        v64 = 0; /*0x23a627*/
        v65 = 0; /*0x23a62b*/
        v38 = Block; /*0x23a62f*/
        v39 = (char *)Block[0]; /*0x23a633*/
        v40 = v81; /*0x23a637*/
        if ( v81 > 0xF ) /*0x23a63f*/
          v38 = (void **)Block[0]; /*0x23a63f*/
        v41 = v80; /*0x23a643*/
        if ( v80 > 0x7FFFFFFFFFFFFFFFLL ) /*0x23a654*/
          sub_8D90(v35, v34, v37); /*0x23a995*/
        if ( v80 > 0xF ) /*0x23a65e*/
        {
          v42 = v80 | 0xF; /*0x23a67a*/
          if ( (v80 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x23a681*/
          {
            if ( v42 < 0x16 ) /*0x23a691*/
              v42 = 22; /*0x23a691*/
          }
          else
          {
            v42 = 0x7FFFFFFFFFFFFFFFLL; /*0x23a683*/
          }
          *(_QWORD *)&v63 = sub_3C460(v42 + 1); /*0x23a69e*/
          v64 = v41; /*0x23a6a3*/
          v65 = v42; /*0x23a6a7*/
          memcpy((void *)v63, v38, v41 + 1); /*0x23a6b5*/
        }
        else
        {
          v64 = v80; /*0x23a660*/
          v65 = 15; /*0x23a664*/
          v63 = *(_OWORD *)v38; /*0x23a670*/
        }
        LOBYTE(v34) = 1; /*0x23a6ba*/
        v43 = GJLevelList_updateLevelsString(&v63, v34); /*0x23a6c1*/
        v44 = (cocos2d::CCObject *)sub_2689D0(v43); /*0x23a6c9*/
        v45 = v44; /*0x23a6ce*/
        if ( v44 ) /*0x23a6d4*/
        {
          if ( *(cocos2d::CCObject **)(v36 + 472) != v44 ) /*0x23a6dd*/
          {
            cocos2d::CCObject::retain(v44); /*0x23a6e2*/
            v46 = *(cocos2d::CCObject **)(v36 + 472); /*0x23a6e8*/
            if ( v46 ) /*0x23a6f2*/
              cocos2d::CCObject::release(v46); /*0x23a6f4*/
            *(_QWORD *)(v36 + 472) = v45; /*0x23a6fa*/
          }
          sub_3E4F0(v71, (char *)v45 + 320); /*0x23a70c*/
          sub_21A440(v69, *(unsigned int *)(v36 + 388), *((unsigned int *)v45 + 98), v71); /*0x23a726*/
        }
        if ( v40 > 0xF ) /*0x23a730*/
        {
          v47 = v39; /*0x23a736*/
          if ( v40 + 1 >= 0x1000 ) /*0x23a740*/
          {
            v39 = (char *)*((_QWORD *)v39 - 1); /*0x23a746*/
            if ( (unsigned __int64)(v47 - v39 - 8) > 0x1F ) /*0x23a755*/
              invoke_watson(0, 0, 0, 0, 0); /*0x23a952*/
          }
          j_j_free(v39); /*0x23a75e*/
        }
        if ( v78 > 0xF ) /*0x23a76c*/
        {
          v48 = v30; /*0x23a772*/
          if ( v78 + 1 >= 0x1000 ) /*0x23a77c*/
          {
            v30 = (char *)*((_QWORD *)v30 - 1); /*0x23a782*/
            if ( (unsigned __int64)(v48 - v30 - 8) > 0x1F ) /*0x23a792*/
              invoke_watson(0, 0, 0, 0, 0); /*0x23a96c*/
          }
          j_j_free(v30); /*0x23a79b*/
        }
        v8 = v58; /*0x23a7a3*/
        v5 = a4; /*0x23a7a8*/
        v6 = a3; /*0x23a7ae*/
LABEL_49:
        if ( v36 ) /*0x23a7b6*/
        {
          if ( v5 ) /*0x23a7bf*/
          {
            *(_DWORD *)(v36 + 404) = v6; /*0x23a7c5*/
          }
          else if ( !*(_DWORD *)(v36 + 396) ) /*0x23a87d*/
          {
            *(_DWORD *)(v36 + 396) = v6; /*0x23a886*/
          }
          if ( *(_DWORD *)(v36 + 460) != 3 ) /*0x23a894*/
            *(_DWORD *)(v36 + 460) = a5; /*0x23a89c*/
          cocos2d::CCArray::addObject(v8, (struct cocos2d::CCObject *)v36); /*0x23a8a8*/
        }
        v11 = v59; /*0x23a8ae*/
        v12 = v56; /*0x23a8b3*/
      }
      if ( v75 > 0xF ) /*0x23a8bf*/
      {
        v53 = v73[0]; /*0x23a8c4*/
        if ( v75 + 1 >= 0x1000 ) /*0x23a8d2*/
        {
          v53 = (void *)*((_QWORD *)v73[0] - 1); /*0x23a8d8*/
          if ( (unsigned __int64)((char *)v73[0] - (char *)v53 - 8) > 0x1F ) /*0x23a8e7*/
            invoke_watson(0, 0, 0, 0, 0); /*0x23a982*/
        }
        j_j_free(v53); /*0x23a8ed*/
      }
      v56 = ++v12; /*0x23a8f4*/
      if ( v12 >= cocos2d::CCArray::count(v11) ) /*0x23a903*/
      {
        v7 = v70; /*0x23a909*/
        goto LABEL_75; /*0x23a909*/
      }
    }
    v66 = 0; /*0x23a7d4*/
    v67 = 0; /*0x23a7d8*/
    v68 = 0; /*0x23a7dc*/
    v49 = v73; /*0x23a7e0*/
    if ( v75 > 0xF ) /*0x23a7e9*/
      v49 = (void **)v73[0]; /*0x23a7e9*/
    v50 = v74; /*0x23a7ee*/
    if ( v74 > 0x7FFFFFFFFFFFFFFFLL ) /*0x23a7ff*/
      sub_8D90(v17, v16, v18); /*0x23a98f*/
    if ( v74 > 0xF ) /*0x23a809*/
    {
      v51 = v74 | 0xF; /*0x23a823*/
      if ( (v74 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x23a82a*/
      {
        if ( v51 < 0x16 ) /*0x23a83a*/
          v51 = 22; /*0x23a83a*/
      }
      else
      {
        v51 = 0x7FFFFFFFFFFFFFFFLL; /*0x23a82c*/
      }
      *(_QWORD *)&v66 = sub_3C460(v51 + 1); /*0x23a847*/
      v67 = v50; /*0x23a84b*/
      v68 = v51; /*0x23a84f*/
      memcpy((void *)v66, v49, v50 + 1); /*0x23a85d*/
    }
    else
    {
      v67 = v74; /*0x23a80b*/
      v68 = 15; /*0x23a80f*/
      v66 = *(_OWORD *)v49; /*0x23a81a*/
    }
    LOBYTE(v16) = 1; /*0x23a862*/
    v52 = GJLevelList_updateLevelsString(&v66, v16); /*0x23a868*/
    v36 = sub_26D3F0(v52); /*0x23a875*/
    goto LABEL_49; /*0x23a878*/
  }
LABEL_75:
  sub_3C310(v7); /*0x23a90d*/
  return v8; /*0x23a918*/
}

// [64/86] Address: 0x23ab00
// Method: GameLevelManager::getSplitIntFromKey
// Hidden C++ exception states: #wind=1
int __fastcall GameLevelManager_getSplitIntFromKey(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r8
  cocos2d::CCArray *v5; // rbx
  void *v6; // r8
  cocos2d::CCString *v7; // rax
  const char *CString; // rax
  void *Block[2]; // [rsp+30h] [rbp-38h] BYREF
  __m128i si128; // [rsp+40h] [rbp-28h]

  *(_OWORD *)Block = 0; /*0x23ab1f*/
  si128 = 0; /*0x23ab27*/
  v4 = -1; /*0x23ab2d*/
  do /*0x23ab37*/
    ++v4; /*0x23ab34*/
  while ( *(_BYTE *)(a2 + v4) ); /*0x23ab37*/
  sub_3C230(Block); /*0x23ab43*/
  v5 = (cocos2d::CCArray *)sub_D09B0(Block, &unk_70F154); /*0x23ab5a*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x23ab66*/
  {
    v6 = Block[0]; /*0x23ab6b*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x23ab7a*/
    {
      v6 = (void *)*((_QWORD *)Block[0] - 1); /*0x23ab80*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v6 - 8) > 0x1F ) /*0x23ab8f*/
        invoke_watson(0, 0, 0, 0, 0); /*0x23aba4*/
    }
    j_j_free(v6); /*0x23abae*/
  }
  si128 = _mm_load_si128((const __m128i *)&Size); /*0x23abbb*/
  LOBYTE(Block[0]) = 0; /*0x23abc1*/
  if ( cocos2d::CCArray::count(v5) < a3 + 1 ) /*0x23abd4*/
    return 0; /*0x23abf5*/
  v7 = cocos2d::CCArray::objectAtIndex(v5, a3); /*0x23abdb*/
  CString = cocos2d::CCString::getCString(v7); /*0x23abe4*/
  return atoi(CString); /*0x23abf7*/
}

// [65/86] Address: 0x23cc20
// Method: GameLevelManager::resetCommentTimersForLevelID
// Hidden C++ exception states: #wind=2
void __fastcall GameLevelManager_resetCommentTimersForLevelID(__int64 a1, int a2, int a3)
{
  int v6; // r14d
  int v7; // esi
  char v8; // di
  int v9; // ebx
  cocos2d::CCString *v10; // rax
  const char *CString; // rax
  __int64 v12; // r8
  void **v13; // rdx
  void **v14; // rdx
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // [rsp+30h] [rbp-68h]
  void *Block[2]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v19; // [rsp+48h] [rbp-50h]
  unsigned __int64 v20; // [rsp+50h] [rbp-48h]

  v6 = 0; /*0x23cc4f*/
  v7 = 0; /*0x23cc57*/
  while ( 2 ) /*0x23cc60*/
  {
    v8 = 1; /*0x23cc60*/
    v9 = 0; /*0x23cc63*/
    do /*0x23cd79*/
    {
      if ( !*(_QWORD *)&qword_905FB0 ) /*0x23cc6e*/
      {
        v17 = operator new(0x690u); /*0x23cc7a*/
        *(_QWORD *)&qword_905FB0 = sub_214250(v17); /*0x23cc88*/
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x23cc99*/
      }
      v10 = cocos2d::CCString::createWithFormat("comment_%i_%i_%i_%i", a2, v9, v7, a3); /*0x23ccb0*/
      CString = cocos2d::CCString::getCString(v10); /*0x23ccb9*/
      *(_OWORD *)Block = 0; /*0x23ccc2*/
      v19 = 0; /*0x23ccc7*/
      v20 = 0; /*0x23cccc*/
      v12 = -1; /*0x23ccd1*/
      do /*0x23cce3*/
        ++v12; /*0x23cce0*/
      while ( CString[v12] ); /*0x23cce3*/
      sub_3C230(Block); /*0x23ccf2*/
      v6 |= 1u; /*0x23ccf7*/
      v13 = Block; /*0x23ccfb*/
      if ( v20 > 0xF ) /*0x23cd06*/
        v13 = (void **)Block[0]; /*0x23cd06*/
      if ( (unsigned __int8)sub_21EEB0(a1, v13) ) /*0x23cd0f*/
      {
        v14 = Block; /*0x23cd18*/
        if ( v20 > 0xF ) /*0x23cd23*/
          v14 = (void **)Block[0]; /*0x23cd23*/
        sub_21EF80(a1, v14); /*0x23cd2c*/
      }
      else
      {
        v8 = 0; /*0x23cd33*/
      }
      if ( ++v9 > 100 ) /*0x23cd40*/
      {
        if ( v20 > 0xF ) /*0x23cd90*/
        {
          v16 = Block[0]; /*0x23cd95*/
          if ( v20 + 1 >= 0x1000 ) /*0x23cda4*/
          {
            v16 = (void *)*((_QWORD *)Block[0] - 1); /*0x23cdaa*/
            if ( (unsigned __int64)((char *)Block[0] - (char *)v16 - 8) > 0x1F ) /*0x23cdb9*/
LABEL_25:
              invoke_watson(0, 0, 0, 0, 0); /*0x23cdbb*/
          }
          j_j_free(v16); /*0x23cdd1*/
        }
        return; /*0x23cdd1*/
      }
      if ( v20 > 0xF ) /*0x23cd46*/
      {
        v15 = Block[0]; /*0x23cd4b*/
        if ( v20 + 1 >= 0x1000 ) /*0x23cd5a*/
        {
          v15 = (void *)*((_QWORD *)Block[0] - 1); /*0x23cd60*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v15 - 8) > 0x1F ) /*0x23cd6f*/
            goto LABEL_25; /*0x23cd6f*/
        }
        j_j_free(v15); /*0x23cd71*/
      }
    }
    while ( v8 ); /*0x23cd79*/
    if ( ++v7 < 2 ) /*0x23cd84*/
      continue; /*0x23cd84*/
    break;
  }
}

// [66/86] Address: 0x23ce00
// Method: GameLevelManager::resetCommentTimersForAccountID
// Hidden C++ exception states: #wind=2
void __fastcall GameLevelManager_resetCommentTimersForAccountID(__int64 a1, int a2)
{
  char v4; // di
  int v5; // ebx
  cocos2d::CCString *v6; // rax
  const char *CString; // rax
  __int64 v8; // r8
  void **v9; // rdx
  void **v10; // rdx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // [rsp+30h] [rbp-48h]
  void *Block[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v15; // [rsp+48h] [rbp-30h]
  unsigned __int64 v16; // [rsp+50h] [rbp-28h]

  v4 = 1; /*0x23ce26*/
  v5 = 0; /*0x23ce2c*/
  while ( 1 ) /*0x23ce30*/
  {
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x23ce38*/
    {
      v13 = operator new(0x690u); /*0x23ce44*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v13); /*0x23ce52*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x23ce63*/
    }
    v6 = cocos2d::CCString::createWithFormat("a_%i_%i", a2, v5); /*0x23ce71*/
    CString = cocos2d::CCString::getCString(v6); /*0x23ce7a*/
    *(_OWORD *)Block = 0; /*0x23ce83*/
    v15 = 0; /*0x23ce88*/
    v16 = 0; /*0x23ce8d*/
    v8 = -1; /*0x23ce92*/
    do /*0x23cea3*/
      ++v8; /*0x23cea0*/
    while ( CString[v8] ); /*0x23cea3*/
    sub_3C230(Block); /*0x23ceb2*/
    v9 = Block; /*0x23ceb8*/
    if ( v16 > 0xF ) /*0x23cec3*/
      v9 = (void **)Block[0]; /*0x23cec3*/
    if ( (unsigned __int8)sub_21EEB0(a1, v9) ) /*0x23cecc*/
    {
      v10 = Block; /*0x23ced5*/
      if ( v16 > 0xF ) /*0x23cee0*/
        v10 = (void **)Block[0]; /*0x23cee0*/
      sub_21EF80(a1, v10); /*0x23cee9*/
    }
    else
    {
      v4 = 0; /*0x23cef0*/
    }
    if ( ++v5 > 100 ) /*0x23cefd*/
      break; /*0x23cefd*/
    if ( v16 > 0xF ) /*0x23cf03*/
    {
      v11 = Block[0]; /*0x23cf08*/
      if ( v16 + 1 >= 0x1000 ) /*0x23cf17*/
      {
        v11 = (void *)*((_QWORD *)Block[0] - 1); /*0x23cf1d*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v11 - 8) > 0x1F ) /*0x23cf2c*/
          goto LABEL_23; /*0x23cf2c*/
      }
      j_j_free(v11); /*0x23cf2e*/
    }
    if ( !v4 ) /*0x23cf36*/
      return; /*0x23cf36*/
  }
  if ( v16 > 0xF ) /*0x23cf42*/
  {
    v12 = Block[0]; /*0x23cf47*/
    if ( v16 + 1 >= 0x1000 ) /*0x23cf56*/
    {
      v12 = (void *)*((_QWORD *)Block[0] - 1); /*0x23cf5c*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v12 - 8) > 0x1F ) /*0x23cf6b*/
LABEL_23:
        invoke_watson(0, 0, 0, 0, 0); /*0x23cf6d*/
    }
    j_j_free(v12); /*0x23cf83*/
  }
}

// [67/86] Address: 0x23d510
// Method: GameLevelManager::onDeleteCommentCompleted
// Hidden C++ exception states: #wind=3
double __fastcall GameLevelManager_onDeleteCommentCompleted(__int64 a1, unsigned __int64 *a2, _QWORD *a3)
{
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // r8
  void *v9; // rcx
  __int64 v10; // r8
  cocos2d::CCArray *v11; // r15
  void *v12; // rcx
  __int64 v13; // rcx
  cocos2d::CCString *v14; // rax
  const char *CString; // rax
  __int64 v16; // rax
  unsigned int v17; // r15d
  cocos2d::CCArray *v18; // rbx
  void *v19; // rcx
  cocos2d::CCString *v20; // rax
  const char *v21; // rax
  unsigned int v22; // ebx
  const void *v23; // rcx
  unsigned __int64 v24; // rdi
  size_t v25; // r8
  __int64 v26; // rcx
  void *Block[2]; // [rsp+40h] [rbp-30h] BYREF
  __m128i si128; // [rsp+50h] [rbp-20h]

  v6 = a3; /*0x23d546*/
  if ( a3[3] > 0xFu ) /*0x23d54e*/
    v6 = (_QWORD *)*a3; /*0x23d550*/
  *(_OWORD *)Block = 0; /*0x23d556*/
  si128 = 0; /*0x23d55d*/
  v7 = -1; /*0x23d562*/
  v8 = -1; /*0x23d569*/
  do /*0x23d573*/
    ++v8; /*0x23d570*/
  while ( *((_BYTE *)v6 + v8) ); /*0x23d573*/
  sub_3C230(Block); /*0x23d581*/
  cocos2d::CCDictionary::removeObjectForKey(*(_QWORD *)(a1 + 1200), Block); /*0x23d592*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x23d5a1*/
  {
    v9 = Block[0]; /*0x23d5a6*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x23d5b4*/
    {
      v9 = (void *)*((_QWORD *)Block[0] - 1); /*0x23d5ba*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v9 - 8) > 0x1F ) /*0x23d5c9*/
        invoke_watson(0, 0, 0, 0, 0); /*0x23d5dc*/
    }
    j_j_free(v9); /*0x23d5e3*/
  }
  *(_OWORD *)Block = 0; /*0x23d5eb*/
  si128 = 0; /*0x23d5f2*/
  v10 = -1; /*0x23d5f7*/
  do /*0x23d603*/
    ++v10; /*0x23d600*/
  while ( *((_BYTE *)v6 + v10) ); /*0x23d603*/
  sub_3C230(Block); /*0x23d611*/
  v11 = (cocos2d::CCArray *)sub_D09B0(Block, &unk_70F154); /*0x23d627*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x23d632*/
  {
    v12 = Block[0]; /*0x23d637*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x23d645*/
    {
      v12 = (void *)*((_QWORD *)Block[0] - 1); /*0x23d64b*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v12 - 8) > 0x1F ) /*0x23d65a*/
        invoke_watson(0, 0, 0, 0, 0); /*0x23d66d*/
    }
    j_j_free(v12); /*0x23d674*/
  }
  si128 = _mm_load_si128((const __m128i *)&Size); /*0x23d681*/
  LOBYTE(Block[0]) = 0; /*0x23d686*/
  if ( cocos2d::CCArray::count(v11) >= 4 /*0x23d6bb*/
    && (v14 = cocos2d::CCArray::objectAtIndex(v11, 3u), CString = cocos2d::CCString::getCString(v14), atoi(CString) == 1) )
  {
    v16 = GJAccountManager_sharedState(v13); /*0x23d6bd*/
    v17 = *(_DWORD *)(v16 + 360) - *(_DWORD *)(v16 + 364); /*0x23d6c9*/
  }
  else
  {
    v17 = sub_23AC10(v13, v6); /*0x23d6da*/
  }
  *(_OWORD *)Block = 0; /*0x23d6e0*/
  si128 = 0; /*0x23d6e7*/
  do /*0x23d6f3*/
    ++v7; /*0x23d6f0*/
  while ( *((_BYTE *)v6 + v7) ); /*0x23d6f3*/
  sub_3C230(Block); /*0x23d703*/
  v18 = (cocos2d::CCArray *)sub_D09B0(Block, &unk_70F154); /*0x23d719*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x23d724*/
  {
    v19 = Block[0]; /*0x23d729*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x23d737*/
    {
      v19 = (void *)*((_QWORD *)Block[0] - 1); /*0x23d73d*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v19 - 8) > 0x1F ) /*0x23d74c*/
        invoke_watson(0, 0, 0, 0, 0); /*0x23d75f*/
    }
    j_j_free(v19); /*0x23d766*/
  }
  si128 = _mm_load_si128((const __m128i *)&Size); /*0x23d773*/
  LOBYTE(Block[0]) = 0; /*0x23d778*/
  if ( cocos2d::CCArray::count(v18) < 3 ) /*0x23d78e*/
  {
    v22 = 0; /*0x23d7b2*/
  }
  else
  {
    v20 = cocos2d::CCArray::objectAtIndex(v18, 2u); /*0x23d796*/
    v21 = cocos2d::CCString::getCString(v20); /*0x23d79f*/
    v22 = atoi(v21); /*0x23d7ae*/
  }
  *(_OWORD *)Block = 0; /*0x23d7b7*/
  si128.m128i_i64[0] = 2; /*0x23d7bb*/
  si128.m128i_i64[1] = 15; /*0x23d7bf*/
  strcpy((char *)Block, "-1"); /*0x23d7cc*/
  v23 = a2; /*0x23d7d4*/
  if ( a2[3] > 0xF ) /*0x23d7dc*/
    v23 = (const void *)*a2; /*0x23d7de*/
  v24 = a2[2]; /*0x23d7e1*/
  v25 = v24; /*0x23d7e5*/
  if ( v24 > 2 ) /*0x23d7eb*/
    v25 = 2; /*0x23d7eb*/
  if ( !memcmp(v23, Block, v25) && v24 == 2 ) /*0x23d7ff*/
  {
    v26 = *(_QWORD *)(a1 + 1376); /*0x23d801*/
    if ( v26 ) /*0x23d80b*/
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v26 + 16LL))(v26, v17, v22); /*0x23d816*/
  }
  sub_3C310(a2); /*0x23d81d*/
  return sub_3C310(a3); /*0x23d82b*/
}

// [68/86] Address: 0x23fea0
// Method: GameLevelManager::onGetOnlineLevelsCompleted
// Hidden C++ exception states: #wind=19
double __fastcall GameLevelManager_onGetOnlineLevelsCompleted(__int64 a1, unsigned __int64 *a2, _QWORD *a3)
{
  _QWORD *v3; // r14
  unsigned __int64 *v4; // r13
  _QWORD *v6; // rdx
  __int64 v7; // r8
  void *v8; // rcx
  unsigned int v9; // r12d
  const void *v10; // rcx
  unsigned __int64 v11; // rsi
  size_t v12; // r8
  int v13; // ebx
  __int64 v14; // r8
  char *v15; // rsi
  unsigned __int64 v16; // rax
  char *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rdi
  unsigned __int64 v21; // rax
  char *v22; // r14
  unsigned __int64 v23; // rcx
  char *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rsi
  unsigned int v27; // r14d
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  cocos2d::CCArray *v31; // r12
  cocos2d::CCString *v32; // rax
  cocos2d::CCString *v33; // rax
  cocos2d::CCString *v34; // rax
  cocos2d::CCString *v35; // rax
  const char *CString; // rax
  __int64 v37; // r8
  cocos2d::CCArray *v38; // r15
  cocos2d::CCString *v39; // rax
  const char *v40; // rax
  __int64 v41; // r8
  __int64 v42; // r8
  __int128 *v43; // rsi
  char *v44; // rcx
  unsigned __int64 v45; // rdx
  char *v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rdi
  const char *v50; // rcx
  int v51; // ebx
  const char *v52; // rcx
  char *v53; // rax
  cocos2d::CCString *v54; // rax
  cocos2d::CCString *v55; // rax
  cocos2d::CCString *v56; // rax
  cocos2d::CCString *v57; // rax
  cocos2d::CCString *v58; // rax
  const char *v59; // rax
  __int64 v60; // r8
  void *v61; // rcx
  cocos2d::CCString *v62; // rax
  char *v63; // rax
  size_t v64; // r8
  cocos2d::CCArray *v65; // rbx
  __int64 v66; // rcx
  cocos2d::CCString *v67; // rax
  cocos2d::CCString *v68; // rax
  cocos2d::CCArray *v69; // rsi
  cocos2d::CCArray *v70; // rdi
  unsigned int v71; // ebx
  cocos2d::CCString *v72; // rax
  const char *v73; // rax
  __int64 v74; // r8
  cocos2d::CCArray *v75; // r12
  char *v76; // rcx
  char *v77; // r13
  cocos2d::CCString *v78; // rax
  cocos2d::CCString *v79; // rax
  cocos2d::CCString *v80; // rax
  cocos2d::CCString *v81; // rax
  cocos2d::CCString *v82; // rax
  cocos2d::CCString *v83; // rax
  const char *v84; // rax
  __int64 v85; // r8
  cocos2d::CCArray *v86; // r15
  cocos2d::CCString *v87; // rax
  const char *v88; // rax
  __int64 v89; // r8
  __int64 v90; // r8
  __int128 *v91; // rsi
  char *v92; // rcx
  unsigned __int64 v93; // rdx
  char *v94; // rbx
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rdi
  const char *v98; // rcx
  int v99; // ebx
  void **v100; // rcx
  char *v101; // rcx
  char *v102; // rax
  cocos2d::CCString *v103; // rax
  cocos2d::CCString *v104; // rax
  const char *v105; // rax
  __int64 v106; // r8
  void *v107; // rcx
  cocos2d::CCString *v108; // rax
  const char *v109; // rax
  __int64 v110; // r8
  cocos2d::CCString *v111; // rax
  const char *v112; // rax
  cocos2d::CCString *v113; // rax
  const char *v114; // rax
  cocos2d::CCString *v115; // rax
  cocos2d::CCString *v116; // rax
  char *v117; // rax
  size_t v118; // r8
  cocos2d::CCString *v119; // rax
  const char *v120; // rax
  cocos2d::CCString *v121; // rax
  __int64 v122; // rcx
  _QWORD *v123; // rcx
  __int64 v124; // rcx
  char **v126; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v127; // [rsp+38h] [rbp-C8h]
  _QWORD *v128; // [rsp+40h] [rbp-C0h]
  char **v129; // [rsp+48h] [rbp-B8h]
  _DWORD v130[2]; // [rsp+50h] [rbp-B0h] BYREF
  cocos2d::CCArray *v131; // [rsp+58h] [rbp-A8h]
  unsigned __int64 *v132; // [rsp+60h] [rbp-A0h]
  __int64 v133; // [rsp+68h] [rbp-98h]
  char *v134; // [rsp+70h] [rbp-90h]
  unsigned __int64 *v135; // [rsp+78h] [rbp-88h]
  _QWORD *v136; // [rsp+80h] [rbp-80h]
  char *String[2]; // [rsp+88h] [rbp-78h] BYREF
  __int128 v138; // [rsp+98h] [rbp-68h]
  void *Block[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v140; // [rsp+B8h] [rbp-48h]
  char *v141[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v142; // [rsp+D8h] [rbp-28h]
  __int128 v143; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v144; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v145; // [rsp+100h] [rbp+0h]
  __int128 v146; // [rsp+108h] [rbp+8h] BYREF
  unsigned __int64 v147; // [rsp+118h] [rbp+18h]
  unsigned __int64 v148; // [rsp+120h] [rbp+20h]
  __int64 v149; // [rsp+130h] [rbp+30h] BYREF
  int v150; // [rsp+138h] [rbp+38h]
  __int128 v151; // [rsp+140h] [rbp+40h] BYREF
  __int64 v152; // [rsp+150h] [rbp+50h]
  __int64 v153; // [rsp+158h] [rbp+58h]
  int v154; // [rsp+160h] [rbp+60h]
  int v155; // [rsp+164h] [rbp+64h]
  void *v156[2]; // [rsp+168h] [rbp+68h] BYREF
  __int128 v157; // [rsp+178h] [rbp+78h]
  __int128 v158; // [rsp+188h] [rbp+88h] BYREF
  __int64 v159; // [rsp+198h] [rbp+98h]
  __int64 v160; // [rsp+1A0h] [rbp+A0h]
  int v161; // [rsp+1A8h] [rbp+A8h]
  int v162; // [rsp+1ACh] [rbp+ACh]
  __int128 v163; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v164; // [rsp+1C0h] [rbp+C0h]
  __int64 v165; // [rsp+1C8h] [rbp+C8h]
  __int128 v166; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v167; // [rsp+1E0h] [rbp+E0h]
  __int64 v168; // [rsp+1E8h] [rbp+E8h]
  __int128 v169; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v170; // [rsp+200h] [rbp+100h]
  __int64 v171; // [rsp+208h] [rbp+108h]
  __int128 v172; // [rsp+210h] [rbp+110h] BYREF
  __int64 v173; // [rsp+220h] [rbp+120h]
  __int64 v174; // [rsp+228h] [rbp+128h]

  v3 = a3; /*0x23fed0*/
  v128 = a3; /*0x23fed3*/
  v4 = a2; /*0x23fed8*/
  v132 = a2; /*0x23fedb*/
  v133 = a1; /*0x23fee3*/
  v135 = a2; /*0x23fee8*/
  v136 = a3; /*0x23feed*/
  v6 = a3; /*0x23fef3*/
  if ( a3[3] > 0xFu ) /*0x23fefb*/
    v6 = (_QWORD *)*a3; /*0x23fefd*/
  *(_OWORD *)Block = 0; /*0x23ff03*/
  v140 = 0u; /*0x23ff07*/
  v7 = -1; /*0x23ff0f*/
  do /*0x23ff19*/
    ++v7; /*0x23ff16*/
  while ( *((_BYTE *)v6 + v7) ); /*0x23ff19*/
  sub_3C230(Block); /*0x23ff24*/
  cocos2d::CCDictionary::removeObjectForKey(*(_QWORD *)(a1 + 1200), Block); /*0x23ff35*/
  if ( *((_QWORD *)&v140 + 1) > 0xFu ) /*0x23ff44*/
  {
    v8 = Block[0]; /*0x23ff49*/
    if ( (unsigned __int64)(*((_QWORD *)&v140 + 1) + 1LL) >= 0x1000 ) /*0x23ff57*/
    {
      v8 = (void *)*((_QWORD *)Block[0] - 1); /*0x23ff5d*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F ) /*0x23ff6c*/
        invoke_watson(0, 0, 0, 0, 0); /*0x23ff7d*/
    }
    j_j_free(v8); /*0x23ff84*/
  }
  v9 = sub_23EC60(v3); /*0x23ff91*/
  v127 = v9; /*0x23ff94*/
  *(_OWORD *)Block = 0; /*0x23ff9b*/
  *(_QWORD *)&v140 = 2; /*0x23ffa5*/
  *((_QWORD *)&v140 + 1) = 15; /*0x23ffae*/
  strcpy((char *)Block, "-1"); /*0x23ffb9*/
  v10 = v4; /*0x23ffc5*/
  if ( v4[3] > 0xF ) /*0x23ffcc*/
    v10 = (const void *)*v4; /*0x23ffce*/
  v11 = v4[2]; /*0x23ffd2*/
  v12 = v11; /*0x23ffd6*/
  if ( v11 > 2 ) /*0x23ffdc*/
    v12 = 2; /*0x23ffdc*/
  v13 = memcmp(v10, Block, v12); /*0x23ffe5*/
  if ( !v13 ) /*0x23ffe9*/
  {
    if ( v11 >= 2 ) /*0x23ffef*/
      v13 = v11 > 2; /*0x23fffe*/
    else
      v13 = -1; /*0x23fff1*/
  }
  if ( !v13 ) /*0x240008*/
    goto LABEL_151; /*0x240008*/
  v15 = (char *)v4; /*0x24000e*/
  if ( v4[3] > 0xF ) /*0x240015*/
    v15 = (char *)*v4; /*0x240017*/
  v16 = v4[2]; /*0x24001b*/
  if ( !v16 ) /*0x240022*/
    goto LABEL_151; /*0x240022*/
  v17 = &v15[v16]; /*0x240028*/
  LOBYTE(v14) = 35; /*0x24002c*/
  v18 = sub_6722F0(v15, &v15[v16], v14); /*0x240035*/
  if ( (char *)v18 == v17 ) /*0x240040*/
    goto LABEL_151; /*0x240040*/
  v20 = v18 - (_QWORD)v15; /*0x240046*/
  if ( v18 - (_QWORD)v15 == -1 ) /*0x24004d*/
    goto LABEL_151; /*0x24004d*/
  v21 = v20 + 1; /*0x240053*/
  v22 = (char *)v4; /*0x240057*/
  if ( v4[3] > 0xF ) /*0x24005f*/
    v22 = (char *)*v4; /*0x240061*/
  v23 = v4[2]; /*0x240065*/
  if ( v21 >= v23 /*0x240098*/
    || (v24 = &v22[v23], LOBYTE(v19) = 35, v25 = sub_6722F0(&v22[v21], &v22[v23], v19), (char *)v25 == v24)
    || (v26 = v25 - (_QWORD)v22, v25 - (_QWORD)v22 == -1) )
  {
    v3 = v128; /*0x24100d*/
LABEL_151:
    v124 = *(_QWORD *)(a1 + 1384); /*0x241012*/
    if ( v124 ) /*0x24101c*/
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v124 + 232LL))(v124, v9); /*0x241024*/
    sub_3C310(v4); /*0x24102e*/
    v123 = v3; /*0x241034*/
    return sub_3C310(v123); /*0x241034*/
  }
  v172 = 0; /*0x2400a1*/
  v27 = 0; /*0x2400a8*/
  v173 = 0; /*0x2400ab*/
  v174 = 0; /*0x2400b2*/
  sub_3C230(&v172); /*0x2400da*/
  v166 = 0; /*0x2400e7*/
  v167 = 0; /*0x2400ee*/
  v168 = 0; /*0x2400f5*/
  v28 = v4[2]; /*0x2400fc*/
  if ( v28 < v20 + 1 ) /*0x240103*/
    sub_3E4D0(v28, v20 + 1); /*0x24106c*/
  sub_3C230(&v166); /*0x240134*/
  v169 = 0; /*0x240140*/
  v170 = 0; /*0x240147*/
  v171 = 0; /*0x24014e*/
  if ( v4[2] < v26 + 1 ) /*0x24015c*/
    sub_3E4D0(v30, v29); /*0x241072*/
  sub_3C230(&v169); /*0x24018c*/
  v149 = 0; /*0x240192*/
  v150 = 0; /*0x240196*/
  v151 = 0; /*0x24019d*/
  v152 = 0; /*0x2401a2*/
  v153 = 0; /*0x2401a6*/
  v154 = -1; /*0x2401aa*/
  v155 = 0; /*0x2401b1*/
  *(_OWORD *)v156 = 0; /*0x2401b5*/
  *(_QWORD *)&v157 = 0; /*0x2401b9*/
  *((_QWORD *)&v157 + 1) = 15; /*0x2401c3*/
  LOBYTE(v156[0]) = 0; /*0x2401ca*/
  v158 = 0; /*0x2401ce*/
  v159 = 0; /*0x2401d5*/
  v160 = 15; /*0x2401dc*/
  LOBYTE(v158) = 0; /*0x2401e3*/
  v161 = 0; /*0x2401ea*/
  v162 = 20; /*0x2401f1*/
  v31 = (cocos2d::CCArray *)sub_D09B0(&v172, &word_7222A8); /*0x24020e*/
  if ( cocos2d::CCArray::count(v31) >= 7 ) /*0x24021d*/
  {
    v32 = cocos2d::CCArray::stringAtIndex(v31, 0); /*0x240228*/
    LODWORD(v149) = cocos2d::CCString::intValue(v32); /*0x240237*/
    v33 = cocos2d::CCArray::stringAtIndex(v31, 1u); /*0x240242*/
    HIDWORD(v149) = cocos2d::CCString::intValue(v33); /*0x240251*/
    v34 = cocos2d::CCArray::stringAtIndex(v31, 2u); /*0x24025c*/
    v150 = cocos2d::CCString::intValue(v34); /*0x24026b*/
    v35 = cocos2d::CCArray::stringAtIndex(v31, 3u); /*0x240276*/
    CString = cocos2d::CCString::getCString(v35); /*0x24027f*/
    *(_OWORD *)Block = 0; /*0x240288*/
    v140 = 0u; /*0x24028c*/
    v37 = -1; /*0x240294*/
    do /*0x2402a3*/
      ++v37; /*0x2402a0*/
    while ( CString[v37] ); /*0x2402a3*/
    sub_3C230(Block); /*0x2402b1*/
    if ( (_QWORD)v140 ) /*0x2402bc*/
    {
      v38 = (cocos2d::CCArray *)sub_D09B0(Block, &unk_709CE8); /*0x2402d2*/
      if ( cocos2d::CCArray::count(v38) ) /*0x2402d8*/
      {
        do /*0x2402f6*/
        {
          v39 = cocos2d::CCArray::stringAtIndex(v38, v27); /*0x2402f6*/
          v40 = cocos2d::CCString::getCString(v39); /*0x2402ff*/
          v143 = 0; /*0x240308*/
          v144 = 0; /*0x24030c*/
          v145 = 0; /*0x240310*/
          v41 = -1; /*0x240314*/
          do /*0x240323*/
            ++v41; /*0x240320*/
          while ( v40[v41] ); /*0x240323*/
          sub_3C230(&v143); /*0x240331*/
          v43 = &v143; /*0x240337*/
          v44 = (char *)v143; /*0x24033b*/
          v45 = v145; /*0x24033f*/
          if ( v145 > 0xF ) /*0x240347*/
            v43 = (__int128 *)v143; /*0x240347*/
          if ( v144 ) /*0x240352*/
          {
            v46 = (char *)v43 + v144; /*0x240358*/
            LOBYTE(v42) = 45; /*0x24035c*/
            v47 = sub_6722F0(v43, (char *)v43 + v144, v42); /*0x240365*/
            if ( (char *)v47 != v46 ) /*0x240370*/
            {
              v49 = v47 - (_QWORD)v43; /*0x240376*/
              if ( v47 - (_QWORD)v43 != -1 ) /*0x24037d*/
              {
                *(_OWORD *)String = 0; /*0x24038a*/
                v138 = 0u; /*0x240390*/
                if ( v144 < v49 + 1 ) /*0x24039f*/
                  sub_3E4D0(v49 + 1, v48); /*0x241078*/
                sub_3C230(String); /*0x2403cb*/
                v50 = (const char *)String; /*0x2403d1*/
                if ( *((_QWORD *)&v138 + 1) > 0xFu ) /*0x2403da*/
                  v50 = String[0]; /*0x2403da*/
                v51 = atoi(v50); /*0x2403e5*/
                *(_OWORD *)v141 = 0; /*0x2403ea*/
                v142 = 0u; /*0x2403ee*/
                sub_3C230(v141); /*0x240414*/
                v52 = (const char *)v141; /*0x24041a*/
                if ( *((_QWORD *)&v142 + 1) > 0xFu ) /*0x240423*/
                  v52 = v141[0]; /*0x240423*/
                v126 = (char **)__PAIR64__(v51, atoi(v52)); /*0x24042e*/
                sub_BB550(&v151, &v126); /*0x24043f*/
                sub_3C310(v141); /*0x240449*/
                sub_3C310(String); /*0x240453*/
                if ( v145 <= 0xF ) /*0x240461*/
                  goto LABEL_57; /*0x240461*/
                v44 = (char *)v143; /*0x240466*/
                if ( v145 + 1 >= 0x1000 ) /*0x240474*/
                {
                  v44 = *(char **)(v143 - 8); /*0x24047a*/
                  if ( (unsigned __int64)(v143 - (_QWORD)v44 - 8) > 0x1F ) /*0x240489*/
                    goto LABEL_64; /*0x240489*/
                }
                goto LABEL_56; /*0x240489*/
              }
            }
            v45 = v145; /*0x240496*/
            v44 = (char *)v143; /*0x24049a*/
          }
          if ( v45 > 0xF ) /*0x2404a2*/
          {
            v53 = v44; /*0x2404a7*/
            if ( v45 + 1 >= 0x1000 ) /*0x2404b1*/
            {
              v44 = (char *)*((_QWORD *)v44 - 1); /*0x2404b7*/
              if ( (unsigned __int64)(v53 - v44 - 8) > 0x1F ) /*0x2404c6*/
LABEL_64:
                invoke_watson(0, 0, 0, 0, 0); /*0x2405e6*/
            }
LABEL_56:
            j_j_free(v44); /*0x2404cc*/
          }
LABEL_57:
          ++v27; /*0x2404d3*/
        }
        while ( v27 < cocos2d::CCArray::count(v38) ); /*0x2402f6*/
      }
      v27 = 0; /*0x2404e8*/
    }
    v54 = cocos2d::CCArray::stringAtIndex(v31, 4u); /*0x2404f9*/
    LODWORD(v153) = cocos2d::CCString::intValue(v54); /*0x240508*/
    v55 = cocos2d::CCArray::stringAtIndex(v31, 5u); /*0x240513*/
    HIDWORD(v153) = cocos2d::CCString::intValue(v55); /*0x240522*/
    v56 = cocos2d::CCArray::stringAtIndex(v31, 6u); /*0x24052d*/
    v154 = cocos2d::CCString::intValue(v56); /*0x24053c*/
    if ( cocos2d::CCArray::count(v31) >= 0xA ) /*0x24054b*/
    {
      v57 = cocos2d::CCArray::stringAtIndex(v31, 7u); /*0x240559*/
      v155 = cocos2d::CCString::intValue(v57); /*0x240568*/
      v58 = cocos2d::CCArray::stringAtIndex(v31, 8u); /*0x240573*/
      v59 = cocos2d::CCString::getCString(v58); /*0x24057c*/
      *(_OWORD *)String = 0; /*0x240585*/
      v138 = 0u; /*0x240589*/
      v60 = -1; /*0x240591*/
      do /*0x2405a3*/
        ++v60; /*0x2405a0*/
      while ( v59[v60] ); /*0x2405a3*/
      sub_3C230(String); /*0x2405b1*/
      v129 = String; /*0x2405ba*/
      if ( (_QWORD)v138 ) /*0x2405c4*/
      {
        cocos2d::ZipUtils::base64URLDecode(v141, String); /*0x240604*/
      }
      else
      {
        *(_OWORD *)v141 = *(_OWORD *)String; /*0x2405ca*/
        v142 = v138; /*0x2405d2*/
        *(_QWORD *)&v138 = 0; /*0x2405d6*/
        *((_QWORD *)&v138 + 1) = 15; /*0x2405da*/
        LOBYTE(String[0]) = 0; /*0x2405de*/
      }
      sub_3C310(String); /*0x24060f*/
      if ( *((_QWORD *)&v157 + 1) > 0xFu ) /*0x24061f*/
      {
        v61 = v156[0]; /*0x240624*/
        if ( (unsigned __int64)(*((_QWORD *)&v157 + 1) + 1LL) >= 0x1000 ) /*0x240632*/
        {
          v61 = (void *)*((_QWORD *)v156[0] - 1); /*0x240638*/
          if ( (unsigned __int64)((char *)v156[0] - (char *)v61 - 8) > 0x1F ) /*0x240647*/
            invoke_watson(0, 0, 0, 0, 0); /*0x240658*/
        }
        j_j_free(v61); /*0x24065f*/
      }
      *(_OWORD *)v156 = *(_OWORD *)v141; /*0x240668*/
      v157 = v142; /*0x240670*/
      *(_QWORD *)&v142 = 0; /*0x240674*/
      *((_QWORD *)&v142 + 1) = 15; /*0x240678*/
      LOBYTE(v141[0]) = 0; /*0x24067c*/
      sub_3C310(v141); /*0x240684*/
      v62 = cocos2d::CCArray::stringAtIndex(v31, 9u); /*0x240691*/
      v63 = (char *)cocos2d::CCString::getCString(v62); /*0x24069a*/
      v64 = -1; /*0x2406a0*/
      do /*0x2406b3*/
        ++v64; /*0x2406b0*/
      while ( v63[v64] ); /*0x2406b3*/
      sub_3F5A0(&v158, v63, v64); /*0x2406c4*/
    }
    sub_3C310(Block); /*0x2406ce*/
  }
  v65 = (cocos2d::CCArray *)sub_D09B0(&v169, &word_7222A8); /*0x2406e6*/
  if ( cocos2d::CCArray::count(v65) >= 3 ) /*0x2406f5*/
  {
    v67 = cocos2d::CCArray::stringAtIndex(v65, 1u); /*0x2406ff*/
    v161 = cocos2d::CCString::intValue(v67); /*0x24070e*/
    v68 = cocos2d::CCArray::stringAtIndex(v65, 2u); /*0x24071c*/
    v162 = cocos2d::CCString::intValue(v68); /*0x24072b*/
  }
  v69 = (cocos2d::CCArray *)cocos2d::CCArray::create(v66); /*0x240737*/
  v129 = (char **)v69; /*0x24073a*/
  if ( v167 ) /*0x240747*/
  {
    v70 = (cocos2d::CCArray *)sub_D09B0(&v166, &word_70806C); /*0x240760*/
    v131 = v70; /*0x240763*/
    v71 = 0; /*0x240768*/
    LODWORD(v126) = 0; /*0x24076b*/
    if ( cocos2d::CCArray::count(v70) ) /*0x240772*/
    {
LABEL_79:
      v72 = cocos2d::CCArray::stringAtIndex(v70, v71); /*0x240780*/
      v73 = cocos2d::CCString::getCString(v72); /*0x24078e*/
      *(_OWORD *)v141 = 0; /*0x240797*/
      v142 = 0u; /*0x24079b*/
      v74 = -1; /*0x2407a3*/
      do /*0x2407b3*/
        ++v74; /*0x2407b0*/
      while ( v73[v74] ); /*0x2407b3*/
      sub_3C230(v141); /*0x2407c1*/
      v75 = (cocos2d::CCArray *)sub_D09B0(v141, &word_7222A8); /*0x2407d7*/
      if ( *((_QWORD *)&v142 + 1) > 0xFu ) /*0x2407e2*/
      {
        v76 = v141[0]; /*0x2407e7*/
        if ( (unsigned __int64)(*((_QWORD *)&v142 + 1) + 1LL) >= 0x1000 ) /*0x2407f5*/
        {
          v76 = (char *)*((_QWORD *)v141[0] - 1); /*0x2407fb*/
          if ( (unsigned __int64)(v141[0] - v76 - 8) > 0x1F ) /*0x24080a*/
            invoke_watson(0, 0, 0, 0, 0); /*0x240fc2*/
        }
        j_j_free(v76); /*0x240810*/
      }
      *(_QWORD *)&v142 = 0; /*0x240815*/
      *((_QWORD *)&v142 + 1) = 15; /*0x240819*/
      LOBYTE(v141[0]) = 0; /*0x24081d*/
      if ( cocos2d::CCArray::count(v75) < 0xA ) /*0x24082d*/
        goto LABEL_141; /*0x24082d*/
      v77 = (char *)operator new(0xF8u); /*0x24083d*/
      v134 = v77; /*0x240840*/
      cocos2d::CCObject::CCObject((cocos2d::CCObject *)v77); /*0x240848*/
      *(_QWORD *)v77 = &AdminReportedEntry::`vftable'; /*0x240855*/
      *((_QWORD *)v77 + 7) = 0; /*0x240859*/
      *((_QWORD *)v77 + 8) = 0; /*0x240861*/
      *((_DWORD *)v77 + 18) = 0; /*0x240869*/
      *((_QWORD *)v77 + 10) = 0; /*0x24086d*/
      *((_QWORD *)v77 + 11) = 0; /*0x240871*/
      *((_QWORD *)v77 + 12) = 0; /*0x240875*/
      v77[104] = 0; /*0x240879*/
      *((_OWORD *)v77 + 7) = 0; /*0x240881*/
      *((_QWORD *)v77 + 16) = 0; /*0x240886*/
      *((_QWORD *)v77 + 17) = 15; /*0x24088d*/
      v77[112] = 0; /*0x240894*/
      *((_OWORD *)v77 + 9) = 0; /*0x240899*/
      *((_QWORD *)v77 + 20) = 0; /*0x2408a1*/
      *((_QWORD *)v77 + 21) = 15; /*0x2408a8*/
      v77[144] = 0; /*0x2408af*/
      *((_QWORD *)v77 + 22) = 0; /*0x2408b7*/
      *((_QWORD *)v77 + 23) = 0; /*0x2408be*/
      v77[192] = 1; /*0x2408c5*/
      *((_QWORD *)v77 + 25) = 0; /*0x2408cd*/
      *((_DWORD *)v77 + 52) = 0; /*0x2408d4*/
      *(_OWORD *)(v77 + 216) = 0; /*0x2408db*/
      *((_QWORD *)v77 + 29) = 0; /*0x2408e3*/
      *((_QWORD *)v77 + 30) = 15; /*0x2408ea*/
      v77[216] = 0; /*0x2408f1*/
      cocos2d::CCObject::autorelease((cocos2d::CCObject *)v77); /*0x2408fc*/
      v78 = cocos2d::CCArray::stringAtIndex(v75, 0); /*0x240907*/
      *((_DWORD *)v77 + 14) = cocos2d::CCString::intValue(v78); /*0x240916*/
      v79 = cocos2d::CCArray::stringAtIndex(v75, 1u); /*0x240922*/
      *((_DWORD *)v77 + 15) = cocos2d::CCString::intValue(v79); /*0x240931*/
      v80 = cocos2d::CCArray::stringAtIndex(v75, 2u); /*0x24093d*/
      *((_DWORD *)v77 + 16) = cocos2d::CCString::intValue(v80); /*0x24094c*/
      v81 = cocos2d::CCArray::stringAtIndex(v75, 3u); /*0x240958*/
      *((_DWORD *)v77 + 17) = cocos2d::CCString::intValue(v81); /*0x240967*/
      v82 = cocos2d::CCArray::stringAtIndex(v75, 4u); /*0x240973*/
      *((_DWORD *)v77 + 18) = cocos2d::CCString::intValue(v82); /*0x240982*/
      v83 = cocos2d::CCArray::stringAtIndex(v75, 5u); /*0x24098e*/
      v84 = cocos2d::CCString::getCString(v83); /*0x240997*/
      v163 = 0; /*0x2409a0*/
      v164 = 0; /*0x2409a7*/
      v165 = 0; /*0x2409ae*/
      v85 = -1; /*0x2409b5*/
      do /*0x2409c3*/
        ++v85; /*0x2409c0*/
      while ( v84[v85] ); /*0x2409c3*/
      sub_3C230(&v163); /*0x2409d4*/
      if ( !v164 ) /*0x2409e2*/
        goto LABEL_118; /*0x2409e2*/
      v86 = (cocos2d::CCArray *)sub_D09B0(&v163, &unk_709CE8); /*0x2409fb*/
      if ( !cocos2d::CCArray::count(v86) ) /*0x240a09*/
        goto LABEL_117; /*0x240a09*/
      while ( 1 ) /*0x240a17*/
      {
        v87 = cocos2d::CCArray::stringAtIndex(v86, v27); /*0x240a17*/
        v88 = cocos2d::CCString::getCString(v87); /*0x240a20*/
        v146 = 0; /*0x240a29*/
        v147 = 0; /*0x240a2d*/
        v148 = 0; /*0x240a31*/
        v89 = -1; /*0x240a35*/
        do /*0x240a43*/
          ++v89; /*0x240a40*/
        while ( v88[v89] ); /*0x240a43*/
        sub_3C230(&v146); /*0x240a51*/
        v91 = &v146; /*0x240a57*/
        v92 = (char *)v146; /*0x240a5b*/
        v93 = v148; /*0x240a5f*/
        if ( v148 > 0xF ) /*0x240a67*/
          v91 = (__int128 *)v146; /*0x240a67*/
        if ( v147 ) /*0x240a72*/
        {
          v94 = (char *)v91 + v147; /*0x240a78*/
          LOBYTE(v90) = 45; /*0x240a7c*/
          v95 = sub_6722F0(v91, (char *)v91 + v147, v90); /*0x240a85*/
          if ( (char *)v95 != v94 ) /*0x240a90*/
          {
            v97 = v95 - (_QWORD)v91; /*0x240a96*/
            if ( v95 - (_QWORD)v91 != -1 ) /*0x240a9d*/
            {
              *(_OWORD *)String = 0; /*0x240aaa*/
              v138 = 0u; /*0x240ab0*/
              if ( v147 < v97 + 1 ) /*0x240abf*/
                sub_3E4D0(v97 + 1, v96); /*0x241066*/
              sub_3C230(String); /*0x240aeb*/
              v98 = (const char *)String; /*0x240af1*/
              if ( *((_QWORD *)&v138 + 1) > 0xFu ) /*0x240afa*/
                v98 = String[0]; /*0x240afa*/
              v99 = atoi(v98); /*0x240b05*/
              *(_OWORD *)Block = 0; /*0x240b0a*/
              v140 = 0u; /*0x240b0e*/
              sub_3C230(Block); /*0x240b34*/
              v100 = Block; /*0x240b3a*/
              if ( *((_QWORD *)&v140 + 1) > 0xFu ) /*0x240b43*/
                v100 = (void **)Block[0]; /*0x240b43*/
              v130[0] = atoi((const char *)v100); /*0x240b4e*/
              v130[1] = v99; /*0x240b52*/
              sub_BB550(v77 + 80, v130); /*0x240b5f*/
              sub_3C310(Block); /*0x240b69*/
              if ( *((_QWORD *)&v138 + 1) > 0xFu ) /*0x240b77*/
              {
                v101 = String[0]; /*0x240b7c*/
                if ( (unsigned __int64)(*((_QWORD *)&v138 + 1) + 1LL) >= 0x1000 ) /*0x240b8a*/
                {
                  v101 = (char *)*((_QWORD *)String[0] - 1); /*0x240b90*/
                  if ( (unsigned __int64)(String[0] - v101 - 8) > 0x1F ) /*0x240b9f*/
                    invoke_watson(0, 0, 0, 0, 0); /*0x240fd8*/
                }
                j_j_free(v101); /*0x240ba5*/
              }
              if ( v148 <= 0xF ) /*0x240bb3*/
                goto LABEL_115; /*0x240bb3*/
              v92 = (char *)v146; /*0x240bb8*/
              if ( v148 + 1 >= 0x1000 ) /*0x240bc6*/
              {
                v92 = *(char **)(v146 - 8); /*0x240bcc*/
                if ( (unsigned __int64)(v146 - (_QWORD)v92 - 8) > 0x1F ) /*0x240bdb*/
                  goto LABEL_148; /*0x240bdb*/
              }
              goto LABEL_114; /*0x240bdb*/
            }
          }
          v93 = v148; /*0x240be8*/
          v92 = (char *)v146; /*0x240bec*/
        }
        if ( v93 > 0xF ) /*0x240bf4*/
        {
          v102 = v92; /*0x240bf9*/
          if ( v93 + 1 >= 0x1000 ) /*0x240c03*/
          {
            v92 = (char *)*((_QWORD *)v92 - 1); /*0x240c09*/
            if ( (unsigned __int64)(v102 - v92 - 8) > 0x1F ) /*0x240c18*/
LABEL_148:
              invoke_watson(0, 0, 0, 0, 0); /*0x240fe1*/
          }
LABEL_114:
          j_j_free(v92); /*0x240c1e*/
        }
LABEL_115:
        if ( ++v27 >= cocos2d::CCArray::count(v86) ) /*0x240c34*/
        {
          v71 = (unsigned int)v126; /*0x240c3a*/
          v70 = v131; /*0x240c3e*/
          v69 = (cocos2d::CCArray *)v129; /*0x240c43*/
LABEL_117:
          v27 = 0; /*0x240c48*/
LABEL_118:
          v103 = cocos2d::CCArray::stringAtIndex(v75, 6u); /*0x240c51*/
          v77[104] = cocos2d::CCString::intValue(v103) != 0; /*0x240c6d*/
          v104 = cocos2d::CCArray::stringAtIndex(v75, 7u); /*0x240c79*/
          v105 = cocos2d::CCString::getCString(v104); /*0x240c82*/
          *(_OWORD *)String = 0; /*0x240c8b*/
          v138 = 0u; /*0x240c8f*/
          v106 = -1; /*0x240c97*/
          do /*0x240ca3*/
            ++v106; /*0x240ca0*/
          while ( v105[v106] ); /*0x240ca3*/
          sub_3C230(String); /*0x240cb1*/
          v126 = String; /*0x240cba*/
          if ( (_QWORD)v138 ) /*0x240cc4*/
          {
            cocos2d::ZipUtils::base64URLDecode(Block, String); /*0x240cec*/
          }
          else
          {
            *(_OWORD *)Block = *(_OWORD *)String; /*0x240cca*/
            v140 = v138; /*0x240cd2*/
            *(_QWORD *)&v138 = 0; /*0x240cd6*/
            *((_QWORD *)&v138 + 1) = 15; /*0x240cda*/
            LOBYTE(String[0]) = 0; /*0x240cde*/
          }
          sub_3C310(String); /*0x240cf7*/
          sub_58AD0(v77 + 112, Block); /*0x240d04*/
          if ( *((_QWORD *)&v140 + 1) > 0xFu ) /*0x240d11*/
          {
            v107 = Block[0]; /*0x240d16*/
            if ( (unsigned __int64)(*((_QWORD *)&v140 + 1) + 1LL) >= 0x1000 ) /*0x240d24*/
            {
              v107 = (void *)*((_QWORD *)Block[0] - 1); /*0x240d2a*/
              if ( (unsigned __int64)((char *)Block[0] - (char *)v107 - 8) > 0x1F ) /*0x240d39*/
                invoke_watson(0, 0, 0, 0, 0); /*0x241006*/
            }
            j_j_free(v107); /*0x240d3f*/
          }
          v108 = cocos2d::CCArray::stringAtIndex(v75, 8u); /*0x240d4c*/
          v109 = cocos2d::CCString::getCString(v108); /*0x240d55*/
          *(_OWORD *)String = 0; /*0x240d5e*/
          v138 = 0u; /*0x240d62*/
          v110 = -1; /*0x240d6a*/
          do /*0x240d74*/
            ++v110; /*0x240d71*/
          while ( v109[v110] ); /*0x240d74*/
          sub_3C230(String); /*0x240d82*/
          v126 = String; /*0x240d8b*/
          if ( (_QWORD)v138 ) /*0x240d95*/
          {
            cocos2d::ZipUtils::base64URLDecode(Block, String); /*0x240dbd*/
          }
          else
          {
            *(_OWORD *)Block = *(_OWORD *)String; /*0x240d9b*/
            v140 = v138; /*0x240da3*/
            *(_QWORD *)&v138 = 0; /*0x240da7*/
            *((_QWORD *)&v138 + 1) = 15; /*0x240dab*/
            LOBYTE(String[0]) = 0; /*0x240daf*/
          }
          sub_3C310(String); /*0x240dc8*/
          sub_58AD0(v77 + 144, Block); /*0x240dd8*/
          sub_3C310(Block); /*0x240de1*/
          v111 = cocos2d::CCArray::stringAtIndex(v75, 9u); /*0x240dee*/
          v112 = cocos2d::CCString::getCString(v111); /*0x240df7*/
          *((_QWORD *)v77 + 22) = atoll(v112); /*0x240e06*/
          if ( cocos2d::CCArray::count(v75) >= 0xD ) /*0x240e19*/
          {
            v113 = cocos2d::CCArray::stringAtIndex(v75, 0xAu); /*0x240e23*/
            v114 = cocos2d::CCString::getCString(v113); /*0x240e2c*/
            *((_QWORD *)v77 + 25) = atoll(v114); /*0x240e3b*/
            v115 = cocos2d::CCArray::stringAtIndex(v75, 0xBu); /*0x240e4a*/
            *((_DWORD *)v77 + 52) = cocos2d::CCString::intValue(v115); /*0x240e59*/
            v116 = cocos2d::CCArray::stringAtIndex(v75, 0xCu); /*0x240e68*/
            v117 = (char *)cocos2d::CCString::getCString(v116); /*0x240e71*/
            v118 = -1; /*0x240e77*/
            do /*0x240e83*/
              ++v118; /*0x240e80*/
            while ( v117[v118] ); /*0x240e83*/
            sub_3F5A0(v77 + 216, v117, v118); /*0x240e94*/
          }
          if ( cocos2d::CCArray::count(v75) >= 0xE ) /*0x240ea5*/
          {
            v119 = cocos2d::CCArray::stringAtIndex(v75, 0xDu); /*0x240eaf*/
            v120 = cocos2d::CCString::getCString(v119); /*0x240eb8*/
            *((_QWORD *)v77 + 23) = atoll(v120); /*0x240ec7*/
          }
          if ( cocos2d::CCArray::count(v75) >= 0xF ) /*0x240eda*/
          {
            v121 = cocos2d::CCArray::stringAtIndex(v75, 0xEu); /*0x240ee4*/
            v77[192] = cocos2d::CCString::intValue(v121) != 0; /*0x240ef8*/
          }
          cocos2d::CCArray::addObject(v69, (struct cocos2d::CCObject *)v77); /*0x240f05*/
          sub_3C310(&v163); /*0x240f13*/
LABEL_141:
          LODWORD(v126) = ++v71; /*0x240f1a*/
          if ( v71 >= cocos2d::CCArray::count(v70) ) /*0x240f29*/
          {
            v4 = v132; /*0x240f2f*/
            break; /*0x240f2f*/
          }
          goto LABEL_79; /*0x240f29*/
        }
      }
    }
  }
  v122 = *(_QWORD *)(v133 + 1384); /*0x240f34*/
  if ( v122 ) /*0x240f43*/
    (*(void (__fastcall **)(__int64, _QWORD, cocos2d::CCArray *, __int64 *))(*(_QWORD *)v122 + 224LL))( /*0x240f53*/
      v122,
      v127,
      v69,
      &v149);
  sub_3C310(&v158); /*0x240f61*/
  sub_3C310(v156); /*0x240f6a*/
  sub_3DA90(&v151); /*0x240f73*/
  sub_3C310(&v169); /*0x240f80*/
  sub_3C310(&v166); /*0x240f8d*/
  sub_3C310(&v172); /*0x240f9a*/
  sub_3C310(v4); /*0x240fa3*/
  v123 = v128; /*0x240fa9*/
  return sub_3C310(v123); /*0x24103c*/
}

// [69/86] Address: 0x243a90
// Method: GameLevelManager::deleteServerLevelList
// Hidden C++ exception states: #wind=4
char __fastcall GameLevelManager_deleteServerLevelList(__int64 a1, int a2)
{
  cocos2d::CCString *v4; // rax
  const char *CString; // rax
  const char *v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rbx
  void *v10; // r8
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  void *v17; // rcx
  cocos2d::CCString *v18; // rax
  const char *v19; // rax
  cocos2d::CCString *v20; // rax
  char *v21; // rax
  size_t v22; // r8
  __int64 v23; // r8
  _QWORD *v24; // rdx
  __int128 v26; // [rsp+40h] [rbp-69h] BYREF
  __int64 v27; // [rsp+50h] [rbp-59h]
  __int64 v28; // [rsp+58h] [rbp-51h]
  __int128 v29; // [rsp+60h] [rbp-49h] BYREF
  __int64 v30; // [rsp+70h] [rbp-39h]
  __int64 v31; // [rsp+78h] [rbp-31h]
  __int128 *v32; // [rsp+80h] [rbp-29h]
  __int128 *v33; // [rsp+88h] [rbp-21h]
  void *Block[2]; // [rsp+98h] [rbp-11h] BYREF
  __int128 v35; // [rsp+A8h] [rbp-1h]
  _QWORD Src[4]; // [rsp+B8h] [rbp+Fh] BYREF

  if ( a2 <= 0 ) /*0x243abe*/
    return 0; /*0x243abe*/
  v4 = cocos2d::CCString::createWithFormat("adminCard_%i", a2); /*0x243acb*/
  CString = cocos2d::CCString::getCString(v4); /*0x243ad4*/
  v6 = CString; /*0x243ada*/
  *(_OWORD *)Block = 0; /*0x243ae0*/
  v35 = 0; /*0x243ae7*/
  v7 = -1; /*0x243aec*/
  v8 = -1; /*0x243af3*/
  do /*0x243af9*/
    ++v8; /*0x243af6*/
  while ( CString[v8] ); /*0x243af9*/
  sub_3C230(Block); /*0x243b07*/
  v9 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(a1 + 1200), Block); /*0x243b1e*/
  if ( *((_QWORD *)&v35 + 1) > 0xFu ) /*0x243b29*/
  {
    v10 = Block[0]; /*0x243b2e*/
    if ( (unsigned __int64)(*((_QWORD *)&v35 + 1) + 1LL) >= 0x1000 ) /*0x243b3c*/
    {
      v10 = (void *)*((_QWORD *)Block[0] - 1); /*0x243b42*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v10 - 8) > 0x1F ) /*0x243b51*/
        invoke_watson(0, 0, 0, 0, 0); /*0x243b64*/
    }
    j_j_free(v10); /*0x243b6e*/
  }
  if ( v9 ) /*0x243b76*/
    return 0; /*0x243d9d*/
  *(_OWORD *)Block = 0; /*0x243b7f*/
  v35 = 0; /*0x243b86*/
  v11 = -1; /*0x243b8b*/
  do /*0x243b93*/
    ++v11; /*0x243b90*/
  while ( v6[v11] ); /*0x243b93*/
  sub_3C230(Block); /*0x243ba1*/
  v12 = *(_QWORD *)(a1 + 1200); /*0x243ba7*/
  v15 = cocos2d::CCNode::create(v14, v13); /*0x243bae*/
  cocos2d::CCDictionary::setObject(v12, v15, Block); /*0x243bbe*/
  if ( *((_QWORD *)&v35 + 1) > 0xFu ) /*0x243bcd*/
  {
    v17 = Block[0]; /*0x243bd2*/
    if ( (unsigned __int64)(*((_QWORD *)&v35 + 1) + 1LL) >= 0x1000 ) /*0x243be0*/
    {
      v17 = (void *)*((_QWORD *)Block[0] - 1); /*0x243be6*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v17 - 8) > 0x1F ) /*0x243bf5*/
        invoke_watson(0, 0, 0, 0, 0); /*0x243c08*/
    }
    j_j_free(v17); /*0x243c0f*/
  }
  GameLevelManager_getBasePostString(v16, Src); /*0x243c18*/
  v18 = cocos2d::CCString::createWithFormat("%c%s%s%c%c%s", 87, "mfd", "2893", 103, 98, (const char *)&word_708030); /*0x243c54*/
  v19 = cocos2d::CCString::getCString(v18); /*0x243c5d*/
  v20 = cocos2d::CCString::createWithFormat("&targetAccountID=%i&secret=%s", a2, v19); /*0x243c70*/
  v21 = (char *)cocos2d::CCString::getCString(v20); /*0x243c79*/
  v22 = -1; /*0x243c7f*/
  do /*0x243c85*/
    ++v22; /*0x243c82*/
  while ( v21[v22] ); /*0x243c85*/
  sub_43D80(Src, v21, v22); /*0x243c93*/
  v32 = &v26; /*0x243c9c*/
  v33 = &v29; /*0x243ca4*/
  v26 = 0; /*0x243cab*/
  v27 = 0; /*0x243cb1*/
  v28 = 0; /*0x243cb5*/
  v23 = -1; /*0x243cb9*/
  do /*0x243cc3*/
    ++v23; /*0x243cc0*/
  while ( v6[v23] ); /*0x243cc3*/
  sub_3C230(&v26); /*0x243cd0*/
  v24 = Src; /*0x243cd6*/
  if ( Src[3] > 0xFu ) /*0x243cdf*/
    v24 = (_QWORD *)Src[0]; /*0x243cdf*/
  v29 = 0; /*0x243ce7*/
  v30 = 0; /*0x243ceb*/
  v31 = 0; /*0x243cef*/
  do /*0x243cf6*/
    ++v7; /*0x243cf3*/
  while ( *((_BYTE *)v24 + v7) ); /*0x243cf6*/
  sub_3C230(&v29); /*0x243d03*/
  *(_OWORD *)Block = 0; /*0x243d0c*/
  v35 = 0u; /*0x243d10*/
  Block[0] = (void *)sub_3C460(64); /*0x243d25*/
  *(_QWORD *)&v35 = 60; /*0x243d29*/
  *((_QWORD *)&v35 + 1) = 63; /*0x243d31*/
  strcpy((char *)Block[0], "https://www.boomlings.com/database/adminGetAccountReview.php"); /*0x243d40*/
  sub_216210(a1, Block, &v29, &v26, 89); /*0x243d8a*/
  sub_3C310(Src); /*0x243d94*/
  return 1; /*0x243d9f*/
}

// [70/86] Address: 0x2518e0
// Method: GameLevelManager::onUploadFriendRequestCompleted
// Hidden C++ exception states: #wind=3
double __fastcall GameLevelManager_onUploadFriendRequestCompleted(__int64 a1, size_t *a2, __int64 *a3)
{
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rcx
  void *v9; // rcx
  __int64 SplitIntFromKey; // r14
  const void *v11; // rcx
  size_t v12; // r8
  __int64 v13; // rcx
  struct cocos2d::CCObject *v14; // rax
  __int64 v15; // rcx
  void (__fastcall ***v16)(_QWORD, _QWORD, __int64); // rcx
  void *Block[2]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v19; // [rsp+50h] [rbp-48h]

  v6 = (__int64)a3; /*0x25190d*/
  if ( (unsigned __int64)a3[3] > 0xF ) /*0x251915*/
    v6 = *a3; /*0x251917*/
  *(_OWORD *)Block = 0; /*0x25191d*/
  v19 = 0; /*0x251925*/
  v7 = -1; /*0x25192b*/
  do /*0x251935*/
    ++v7; /*0x251932*/
  while ( *(_BYTE *)(v6 + v7) ); /*0x251935*/
  sub_3C230(Block); /*0x251944*/
  cocos2d::CCDictionary::removeObjectForKey(*(_QWORD *)(a1 + 1200), Block); /*0x251956*/
  if ( *((_QWORD *)&v19 + 1) > 0xFu ) /*0x251966*/
  {
    v9 = Block[0]; /*0x25196b*/
    if ( (unsigned __int64)(*((_QWORD *)&v19 + 1) + 1LL) >= 0x1000 ) /*0x25197a*/
    {
      v9 = (void *)*((_QWORD *)Block[0] - 1); /*0x251980*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v9 - 8) > 0x1F ) /*0x25198f*/
        invoke_watson(0, 0, 0, 0, 0); /*0x2519a4*/
    }
    j_j_free(v9); /*0x2519ab*/
  }
  SplitIntFromKey = GameLevelManager_getSplitIntFromKey(v8, v6, 1u); /*0x2519be*/
  *(_OWORD *)Block = 0; /*0x2519c4*/
  *(_QWORD *)&v19 = 2; /*0x2519ce*/
  *((_QWORD *)&v19 + 1) = 15; /*0x2519d3*/
  strcpy((char *)Block, "-1"); /*0x2519e1*/
  v11 = a2; /*0x2519eb*/
  if ( a2[3] > 0xF ) /*0x2519f3*/
    v11 = (const void *)*a2; /*0x2519f5*/
  v12 = a2[2]; /*0x2519f8*/
  if ( v12 > 2 ) /*0x2519ff*/
    v12 = 2; /*0x2519ff*/
  if ( !memcmp(v11, Block, v12) && a2[2] == 2 ) /*0x251a16*/
  {
    v13 = *(_QWORD *)(a1 + 1488); /*0x251a18*/
    if ( v13 ) /*0x251a22*/
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v13 + 8LL))(v13, (unsigned int)SplitIntFromKey, 35); /*0x251a30*/
    sub_21EF80(a1, v6); /*0x251a39*/
  }
  else
  {
    v14 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 1232), SplitIntFromKey); /*0x251a4a*/
    if ( v14 ) /*0x251a53*/
    {
      *((_DWORD *)v14 + 190) = 4; /*0x251a55*/
      v15 = *(_QWORD *)(a1 + 1480); /*0x251a5f*/
      if ( v15 ) /*0x251a69*/
        (*(void (__fastcall **)(__int64, struct cocos2d::CCObject *))(*(_QWORD *)v15 + 16LL))(v15, v14); /*0x251a75*/
    }
    v16 = *(void (__fastcall ****)(_QWORD, _QWORD, __int64))(a1 + 1488); /*0x251a78*/
    if ( v16 ) /*0x251a82*/
      (**v16)(v16, (unsigned int)SplitIntFromKey, 35); /*0x251a90*/
  }
  sub_3C310(a2); /*0x251a96*/
  return sub_3C310(a3); /*0x251aa4*/
}

// [71/86] Address: 0x251ac0
// Method: GameLevelManager::deleteFriendRequests
// Hidden C++ exception states: #wind=5
char __fastcall GameLevelManager_deleteFriendRequests(__int64 a1, int a2, cocos2d::CCArray *a3, unsigned __int8 a4)
{
  int v4; // ebx
  cocos2d::CCArray *v5; // rsi
  int v8; // r12d
  int v9; // edx
  __int64 v10; // rdi
  cocos2d::CCString *v11; // rax
  const char *CString; // rax
  const char *v13; // r14
  __int64 v14; // r8
  __int64 v15; // rbx
  void *v16; // r8
  __int64 v18; // r8
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  cocos2d::CCString *v24; // rax
  const char *v25; // rax
  cocos2d::CCString *v26; // rax
  char *v27; // rax
  size_t v28; // r8
  unsigned int i; // ebx
  struct cocos2d::CCObject *v30; // r15
  cocos2d::CCString *v31; // rax
  char *v32; // rax
  size_t v33; // r8
  __int64 v34; // r8
  _QWORD *v35; // rdx
  __int128 v36; // [rsp+40h] [rbp-89h] BYREF
  __int64 v37; // [rsp+50h] [rbp-79h]
  __int64 v38; // [rsp+58h] [rbp-71h]
  __int128 *v39; // [rsp+60h] [rbp-69h]
  __int128 *v40; // [rsp+68h] [rbp-61h]
  void *Block[2]; // [rsp+78h] [rbp-51h] BYREF
  __int128 v42; // [rsp+88h] [rbp-41h]
  __int128 v43; // [rsp+98h] [rbp-31h] BYREF
  __int128 v44; // [rsp+A8h] [rbp-21h]
  _QWORD Src[4]; // [rsp+B8h] [rbp-11h] BYREF

  v4 = a4; /*0x251ae7*/
  v5 = a3; /*0x251aeb*/
  if ( a3 && cocos2d::CCArray::count(a3) == 1 ) /*0x251b05*/
  {
    a2 = *((_DWORD *)cocos2d::CCArray::objectAtIndex(v5, 0) + 98); /*0x251b12*/
    v5 = 0; /*0x251b19*/
  }
  if ( a2 <= 0 && (!v5 || !cocos2d::CCArray::count(v5)) ) /*0x251b2c*/
    return 0; /*0x251b2c*/
  v8 = v4; /*0x251b3a*/
  v9 = a2; /*0x251b3d*/
  v10 = -1; /*0x251b40*/
  if ( v5 ) /*0x251b4a*/
    v9 = -1; /*0x251b4a*/
  v11 = cocos2d::CCString::createWithFormat("delFriendReq_%i_%i", v9, v4); /*0x251b57*/
  CString = cocos2d::CCString::getCString(v11); /*0x251b60*/
  v13 = CString; /*0x251b66*/
  *(_OWORD *)Block = 0; /*0x251b6c*/
  v42 = 0; /*0x251b73*/
  v14 = -1; /*0x251b78*/
  do /*0x251b83*/
    ++v14; /*0x251b80*/
  while ( CString[v14] ); /*0x251b83*/
  sub_3C230(Block); /*0x251b91*/
  v15 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(a1 + 1200), Block); /*0x251ba8*/
  if ( *((_QWORD *)&v42 + 1) > 0xFu ) /*0x251bb3*/
  {
    v16 = Block[0]; /*0x251bb8*/
    if ( (unsigned __int64)(*((_QWORD *)&v42 + 1) + 1LL) >= 0x1000 ) /*0x251bc6*/
    {
      v16 = (void *)*((_QWORD *)Block[0] - 1); /*0x251bcc*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v16 - 8) > 0x1F ) /*0x251bdb*/
        invoke_watson(0, 0, 0, 0, 0); /*0x251bf0*/
    }
    j_j_free(v16); /*0x251bfa*/
  }
  if ( v15 ) /*0x251c02*/
    return 0; /*0x251c04*/
  v43 = 0; /*0x251c0e*/
  v44 = 0; /*0x251c15*/
  v18 = -1; /*0x251c1a*/
  do /*0x251c23*/
    ++v18; /*0x251c20*/
  while ( v13[v18] ); /*0x251c23*/
  sub_3C230(&v43); /*0x251c31*/
  v19 = *(_QWORD *)(a1 + 1200); /*0x251c37*/
  v22 = cocos2d::CCNode::create(v21, v20); /*0x251c3e*/
  cocos2d::CCDictionary::setObject(v19, v22, &v43); /*0x251c4e*/
  sub_3C310(&v43); /*0x251c59*/
  GameLevelManager_getBasePostString(v23, Src); /*0x251c62*/
  v24 = cocos2d::CCString::createWithFormat("%c%s%s%c%c%s", 87, "mfd", "2893", 103, 98, (const char *)&word_708030); /*0x251c9e*/
  v25 = cocos2d::CCString::getCString(v24); /*0x251ca7*/
  v26 = cocos2d::CCString::createWithFormat("&targetAccountID=%i&isSender=%i&secret=%s", a2, v8, v25); /*0x251cbd*/
  v27 = (char *)cocos2d::CCString::getCString(v26); /*0x251cc6*/
  v28 = -1; /*0x251ccc*/
  do /*0x251cd3*/
    ++v28; /*0x251cd0*/
  while ( v27[v28] ); /*0x251cd3*/
  sub_43D80(Src, v27, v28); /*0x251ce1*/
  if ( v5 ) /*0x251ce9*/
  {
    sub_43D80(Src, "&accounts=", 0xAu); /*0x251d00*/
    for ( i = 0; i < cocos2d::CCArray::count(v5); ++i ) /*0x251d0a*/
    {
      v30 = cocos2d::CCArray::objectAtIndex(v5, i); /*0x251d1f*/
      if ( i ) /*0x251d24*/
        sub_43D80(Src, &unk_709CE8, 1u); /*0x251d37*/
      v31 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, *((unsigned int *)v30 + 98)); /*0x251d4a*/
      v32 = (char *)cocos2d::CCString::getCString(v31); /*0x251d53*/
      v33 = -1; /*0x251d59*/
      do /*0x251d63*/
        ++v33; /*0x251d60*/
      while ( v32[v33] ); /*0x251d63*/
      sub_43D80(Src, v32, v33); /*0x251d71*/
    }
  }
  v39 = &v36; /*0x251d8a*/
  v40 = &v43; /*0x251d92*/
  v36 = 0; /*0x251d99*/
  v37 = 0; /*0x251da0*/
  v38 = 0; /*0x251da4*/
  v34 = -1; /*0x251da8*/
  do /*0x251db3*/
    ++v34; /*0x251db0*/
  while ( v13[v34] ); /*0x251db3*/
  sub_3C230(&v36); /*0x251dc1*/
  v35 = Src; /*0x251dc7*/
  if ( Src[3] > 0xFu ) /*0x251dd0*/
    v35 = (_QWORD *)Src[0]; /*0x251dd0*/
  v43 = 0; /*0x251dd8*/
  v44 = 0u; /*0x251ddc*/
  do /*0x251de7*/
    ++v10; /*0x251de4*/
  while ( *((_BYTE *)v35 + v10) ); /*0x251de7*/
  sub_3C230(&v43); /*0x251df4*/
  *(_OWORD *)Block = 0; /*0x251dfd*/
  v42 = 0u; /*0x251e01*/
  Block[0] = (void *)sub_3C460(64); /*0x251e16*/
  *(_QWORD *)&v42 = 63; /*0x251e1a*/
  *((_QWORD *)&v42 + 1) = 63; /*0x251e22*/
  strcpy((char *)Block[0], "https://www.boomlings.com/database/deleteGJFriendRequests20.php"); /*0x251e31*/
  sub_216210(a1, Block, &v43, &v36, 36); /*0x251e91*/
  sub_3C310(Src); /*0x251e9b*/
  return 1; /*0x251ea2*/
}

// [72/86] Address: 0x252440
// Method: GameLevelManager::onDeleteUserMessagesCompleted
// Hidden C++ exception states: #wind=3
double __fastcall GameLevelManager_onDeleteUserMessagesCompleted(__int64 a1, unsigned __int64 *a2, __int64 *a3)
{
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rcx
  void *v9; // rcx
  __int64 SplitIntFromKey; // rbp
  __int64 v11; // rcx
  unsigned int v12; // r15d
  const void *v13; // rcx
  unsigned __int64 v14; // rbx
  size_t v15; // r8
  __int64 v16; // rcx
  struct cocos2d::CCObject *v17; // rax
  __int64 v18; // r9
  void (__fastcall ***v19)(_QWORD, _QWORD, __int64); // rcx
  void *Block[2]; // [rsp+40h] [rbp-68h] BYREF
  __int128 v22; // [rsp+50h] [rbp-58h]

  v6 = (__int64)a3; /*0x252471*/
  if ( (unsigned __int64)a3[3] > 0xF ) /*0x252479*/
    v6 = *a3; /*0x25247b*/
  *(_OWORD *)Block = 0; /*0x252481*/
  v22 = 0; /*0x252489*/
  v7 = -1; /*0x25248f*/
  do /*0x252499*/
    ++v7; /*0x252496*/
  while ( *(_BYTE *)(v6 + v7) ); /*0x252499*/
  sub_3C230(Block); /*0x2524a8*/
  cocos2d::CCDictionary::removeObjectForKey(*(_QWORD *)(a1 + 1200), Block); /*0x2524ba*/
  if ( *((_QWORD *)&v22 + 1) > 0xFu ) /*0x2524ca*/
  {
    v9 = Block[0]; /*0x2524cf*/
    if ( (unsigned __int64)(*((_QWORD *)&v22 + 1) + 1LL) >= 0x1000 ) /*0x2524de*/
    {
      v9 = (void *)*((_QWORD *)Block[0] - 1); /*0x2524e4*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v9 - 8) > 0x1F ) /*0x2524f3*/
        invoke_watson(0, 0, 0, 0, 0); /*0x252508*/
    }
    j_j_free(v9); /*0x25250f*/
  }
  SplitIntFromKey = GameLevelManager_getSplitIntFromKey(v8, v6, 1u); /*0x252522*/
  v12 = GameLevelManager_getSplitIntFromKey(v11, v6, 2u); /*0x252536*/
  *(_OWORD *)Block = 0; /*0x25253c*/
  *(_QWORD *)&v22 = 2; /*0x252541*/
  *((_QWORD *)&v22 + 1) = 15; /*0x252546*/
  strcpy((char *)Block, "-1"); /*0x252554*/
  v13 = a2; /*0x25255e*/
  if ( a2[3] > 0xF ) /*0x252566*/
    v13 = (const void *)*a2; /*0x252568*/
  v14 = a2[2]; /*0x25256b*/
  v15 = v14; /*0x25256f*/
  if ( v14 > 2 ) /*0x252575*/
    v15 = 2; /*0x252575*/
  if ( !memcmp(v13, Block, v15) && v14 == 2 ) /*0x25258a*/
  {
    v16 = *(_QWORD *)(a1 + 1488); /*0x25258c*/
    if ( v16 ) /*0x252596*/
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v16 + 8LL))(v16, v12, 37); /*0x2525a4*/
  }
  else
  {
    v17 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 1232), SplitIntFromKey); /*0x2525b3*/
    if ( v17 ) /*0x2525bc*/
    {
      *((_DWORD *)v17 + 190) = 1; /*0x2525be*/
      v18 = *(_QWORD *)(a1 + 1480); /*0x2525c8*/
      if ( v18 ) /*0x2525d2*/
        (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *))(*(_QWORD *)v18 + 16LL))( /*0x2525e1*/
          *(_QWORD *)(a1 + 1480),
          v17);
    }
    v19 = *(void (__fastcall ****)(_QWORD, _QWORD, __int64))(a1 + 1488); /*0x2525e4*/
    if ( v19 ) /*0x2525ee*/
      (**v19)(v19, v12, 37); /*0x2525fc*/
    sub_254B10(a1, (unsigned int)SplitIntFromKey, 0); /*0x252606*/
    sub_254840(a1, 0); /*0x252610*/
  }
  sub_3C310(a2); /*0x252619*/
  return sub_3C310(a3); /*0x252627*/
}

// [73/86] Address: 0x253b70
// Method: GameLevelManager::removeUserFromList
void __fastcall GameLevelManager_removeUserFromList(__int64 a1, int a2, unsigned int a3)
{
  cocos2d::CCArray *v6; // rax
  cocos2d::CCArray *v7; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rcx

  v6 = (cocos2d::CCArray *)sub_254550(a1, a3); /*0x253b90*/
  v7 = v6; /*0x253b95*/
  if ( v6 ) /*0x253b9b*/
  {
    v8 = 0; /*0x253ba5*/
    if ( cocos2d::CCArray::count(v6) ) /*0x253ba7*/
    {
      while ( *((_DWORD *)cocos2d::CCArray::objectAtIndex(v7, v8) + 98) != a2 ) /*0x253bc5*/
      {
        if ( ++v8 >= cocos2d::CCArray::count(v7) ) /*0x253bd1*/
          return; /*0x253bd1*/
      }
      cocos2d::CCArray::removeObjectAtIndex(v7, v8, 1); /*0x253bda*/
      v9 = *(_QWORD *)(a1 + 1496); /*0x253be0*/
      if ( v9 ) /*0x253bea*/
        (*(void (__fastcall **)(__int64, cocos2d::CCArray *, _QWORD))(*(_QWORD *)v9 + 16LL))(v9, v7, a3); /*0x253bf5*/
    }
  }
}

// [74/86] Address: 0x253e50
// Method: GameLevelManager::onGetUserListCompleted
// Hidden C++ exception states: #wind=4
double __fastcall GameLevelManager_onGetUserListCompleted(__int64 a1, unsigned __int64 *a2, _QWORD *a3)
{
  unsigned __int64 *v3; // r12
  _QWORD *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // r8
  void **v7; // rcx
  char *v8; // r14
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r15
  size_t v11; // r8
  int v12; // ebx
  char *v13; // rax
  unsigned int v14; // r14d
  __int64 v15; // r8
  __int128 *p_Buf2; // rcx
  char *v17; // r14
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // r15
  size_t v20; // r8
  int v21; // ebx
  char *v22; // rax
  __int128 v23; // xmm0
  __int64 v24; // r8
  int v25; // ebx
  const void *v26; // rcx
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // rbx
  size_t v29; // r8
  __int64 v30; // rcx
  const char *v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  cocos2d::CCArray *v34; // r13
  _BYTE *v35; // rdx
  __int64 v36; // r8
  cocos2d::CCArray *v37; // r12
  void *v38; // r8
  unsigned int i; // r15d
  cocos2d::CCString *v40; // rax
  const char *CString; // rax
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 updated; // rax
  __int64 v45; // rax
  __int64 v46; // rbx
  void *v47; // rcx
  __int64 v48; // rcx
  void *v49; // rcx
  void (__fastcall ***v50)(_QWORD, cocos2d::CCArray *, _QWORD); // rcx
  _BYTE v55[32]; // [rsp+50h] [rbp-79h] BYREF
  char v56[32]; // [rsp+70h] [rbp-59h] BYREF
  unsigned __int64 *v57; // [rsp+90h] [rbp-39h]
  _QWORD *v58; // [rsp+98h] [rbp-31h]
  __int128 Buf2; // [rsp+A0h] [rbp-29h] BYREF
  __m128i si128; // [rsp+B0h] [rbp-19h]
  void *Buf1[2]; // [rsp+C0h] [rbp-9h] BYREF
  __int128 v62; // [rsp+D0h] [rbp+7h]

  v3 = a2; /*0x253e82*/
  v57 = a2; /*0x253e8f*/
  v58 = a3; /*0x253e93*/
  v4 = a3; /*0x253e99*/
  if ( a3[3] > 0xFu ) /*0x253ea1*/
    v4 = (_QWORD *)*a3; /*0x253ea3*/
  HIWORD(Buf2) = 0; /*0x253ea9*/
  si128.m128i_i64[0] = 11; /*0x253eb2*/
  si128.m128i_i64[1] = 15; /*0x253eb6*/
  qmemcpy(&Buf2, "get_friend", 10); /*0x253ec6*/
  *(_DWORD *)((char *)&Buf2 + 10) = (unsigned __int8)aGetFriends[10]; /*0x253edd*/
  *(_OWORD *)Buf1 = 0; /*0x253ee7*/
  v62 = 0u; /*0x253eeb*/
  v5 = -1; /*0x253ef3*/
  v6 = -1; /*0x253efa*/
  do /*0x253f03*/
    ++v6; /*0x253f00*/
  while ( *((_BYTE *)v4 + v6) ); /*0x253f03*/
  sub_3C230(Buf1); /*0x253f11*/
  v7 = Buf1; /*0x253f16*/
  v8 = (char *)Buf1[0]; /*0x253f1a*/
  v9 = *((_QWORD *)&v62 + 1); /*0x253f1e*/
  if ( *((_QWORD *)&v62 + 1) > 0xFu ) /*0x253f26*/
    v7 = (void **)Buf1[0]; /*0x253f26*/
  v10 = v62; /*0x253f2a*/
  v11 = v62; /*0x253f2e*/
  if ( (unsigned __int64)v62 > 0xB ) /*0x253f35*/
    v11 = 11; /*0x253f35*/
  v12 = memcmp(v7, &Buf2, v11); /*0x253f42*/
  if ( !v12 ) /*0x253f46*/
  {
    if ( v10 >= 0xB ) /*0x253f4c*/
      v12 = v10 > 0xB; /*0x253f58*/
    else
      v12 = -1; /*0x253f4e*/
  }
  if ( v9 > 0xF ) /*0x253f5f*/
  {
    v13 = v8; /*0x253f65*/
    if ( v9 + 1 >= 0x1000 ) /*0x253f6f*/
    {
      v8 = (char *)*((_QWORD *)v8 - 1); /*0x253f75*/
      if ( (unsigned __int64)(v13 - v8 - 8) > 0x1F ) /*0x253f84*/
        invoke_watson(0, 0, 0, 0, 0); /*0x253f99*/
    }
    j_j_free(v8); /*0x253fa3*/
  }
  if ( v12 ) /*0x253fab*/
  {
    *(_QWORD *)&v62 = 13; /*0x253fc1*/
    *((_QWORD *)&v62 + 1) = 15; /*0x253fc5*/
    strcpy((char *)Buf1, "get_following"); /*0x253fd5*/
    HIWORD(Buf1[1]) = 0; /*0x253fe0*/
    Buf2 = 0; /*0x253ff4*/
    si128 = 0u; /*0x253ffa*/
    v15 = -1; /*0x254002*/
    do /*0x254008*/
      ++v15; /*0x254005*/
    while ( *((_BYTE *)v4 + v15) ); /*0x254008*/
    sub_3C230(&Buf2); /*0x254015*/
    p_Buf2 = &Buf2; /*0x25401a*/
    v17 = (char *)Buf2; /*0x25401e*/
    v18 = si128.m128i_u64[1]; /*0x254022*/
    if ( si128.m128i_i64[1] > 0xFuLL ) /*0x25402a*/
      p_Buf2 = (__int128 *)Buf2; /*0x25402a*/
    v19 = si128.m128i_i64[0]; /*0x25402e*/
    v20 = si128.m128i_i64[0]; /*0x254032*/
    if ( si128.m128i_i64[0] > 0xDuLL ) /*0x254039*/
      v20 = 13; /*0x254039*/
    v21 = memcmp(p_Buf2, Buf1, v20); /*0x254046*/
    if ( !v21 ) /*0x25404a*/
    {
      if ( v19 >= 0xD ) /*0x254050*/
        v21 = v19 > 0xD; /*0x25405c*/
      else
        v21 = -1; /*0x254052*/
    }
    if ( v18 > 0xF ) /*0x254063*/
    {
      v22 = v17; /*0x254069*/
      if ( v18 + 1 >= 0x1000 ) /*0x254073*/
      {
        v17 = (char *)*((_QWORD *)v17 - 1); /*0x254079*/
        if ( (unsigned __int64)(v22 - v17 - 8) > 0x1F ) /*0x254088*/
          invoke_watson(0, 0, 0, 0, 0); /*0x25409d*/
      }
      j_j_free(v17); /*0x2540a7*/
    }
    if ( v21 ) /*0x2540af*/
    {
      v23 = 0; /*0x2540bc*/
      si128 = _mm_load_si128((const __m128i *)&xmmword_830F60); /*0x2540cb*/
      *(_QWORD *)&v23 = 0x6574756D5F746567LL; /*0x2540d0*/
      Buf2 = v23; /*0x2540d8*/
      WORD4(Buf2) = 100; /*0x2540e4*/
      *(_OWORD *)Buf1 = 0; /*0x2540ee*/
      v62 = 0; /*0x2540f5*/
      v24 = -1; /*0x2540fa*/
      do /*0x254103*/
        ++v24; /*0x254100*/
      while ( *((_BYTE *)v4 + v24) ); /*0x254103*/
      sub_3C230(Buf1); /*0x254111*/
      v25 = sub_3C160(Buf1, &Buf2); /*0x254123*/
      sub_3C310(Buf1); /*0x254129*/
      sub_3C310(&Buf2); /*0x254133*/
      v14 = 1; /*0x25413d*/
      if ( !v25 ) /*0x254145*/
        v14 = 4; /*0x254145*/
    }
    else
    {
      v14 = 3; /*0x2540b1*/
    }
  }
  else
  {
    v14 = 0; /*0x253fad*/
  }
  sub_21EA30(a1, v4); /*0x254154*/
  Buf2 = 0; /*0x25415c*/
  si128.m128i_i64[0] = 2; /*0x254165*/
  si128.m128i_i64[1] = 15; /*0x254169*/
  strcpy((char *)&Buf2, "-1"); /*0x254176*/
  v26 = v3; /*0x25417e*/
  v27 = v3[3]; /*0x254181*/
  if ( v27 > 0xF ) /*0x25418a*/
    v26 = (const void *)*v3; /*0x25418c*/
  v28 = v3[2]; /*0x254190*/
  v29 = v28; /*0x254195*/
  if ( v28 > 2 ) /*0x25419b*/
    v29 = 2; /*0x25419b*/
  if ( !memcmp(v26, &Buf2, v29) && v28 == 2 ) /*0x2541b0*/
  {
    v30 = *(_QWORD *)(a1 + 1496); /*0x2541b2*/
    if ( v30 ) /*0x2541bc*/
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v30 + 8LL))(v30, v14, 0xFFFFFFFFLL); /*0x2541cb*/
  }
  else
  {
    v31 = (const char *)v3; /*0x2541d3*/
    if ( v27 > 0xF ) /*0x2541da*/
      v31 = (const char *)*v3; /*0x2541dc*/
    if ( atoi(v31) >= 0 ) /*0x2541e8*/
    {
      v34 = (cocos2d::CCArray *)cocos2d::CCArray::create(v32); /*0x254214*/
      v35 = v3; /*0x254217*/
      if ( v3[3] > 0xF ) /*0x254220*/
        v35 = (_BYTE *)*v3; /*0x254222*/
      Buf2 = 0; /*0x254229*/
      si128 = 0; /*0x254230*/
      v36 = -1; /*0x254235*/
      do /*0x254243*/
        ++v36; /*0x254240*/
      while ( v35[v36] ); /*0x254243*/
      sub_3C230(&Buf2); /*0x25424e*/
      v37 = (cocos2d::CCArray *)sub_D09B0(&Buf2, &word_70806C); /*0x254264*/
      if ( si128.m128i_i64[1] > 0xFuLL ) /*0x25426f*/
      {
        v38 = (void *)Buf2; /*0x254274*/
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x254282*/
        {
          v38 = *(void **)(Buf2 - 8); /*0x254288*/
          if ( (unsigned __int64)(Buf2 - (_QWORD)v38 - 8) > 0x1F ) /*0x254297*/
            invoke_watson(0, 0, 0, 0, 0); /*0x2542ac*/
        }
        j_j_free(v38); /*0x2542b6*/
      }
      si128 = _mm_load_si128((const __m128i *)&Size); /*0x2542c3*/
      LOBYTE(Buf2) = 0; /*0x2542c8*/
      for ( i = 0; i < cocos2d::CCArray::count(v37); ++i ) /*0x2542d2*/
      {
        v40 = cocos2d::CCArray::objectAtIndex(v37, i); /*0x2542e6*/
        CString = cocos2d::CCString::getCString(v40); /*0x2542ef*/
        *(_OWORD *)Buf1 = 0; /*0x2542f8*/
        v62 = 0; /*0x2542ff*/
        v42 = -1; /*0x254304*/
        do /*0x254313*/
          ++v42; /*0x254310*/
        while ( CString[v42] ); /*0x254313*/
        sub_3C230(Buf1); /*0x254321*/
        v43 = sub_3E4F0(v56, Buf1); /*0x25432f*/
        updated = GJLevelList_updateLevelsString(v43, 0); /*0x254339*/
        v45 = sub_2689D0(updated); /*0x254341*/
        v46 = v45; /*0x254346*/
        switch ( v14 ) /*0x25434d*/
        {
          case 1u: /*0x25434d*/
            *(_DWORD *)(v45 + 760) = 2; /*0x25434f*/
            break;
          case 3u: /*0x25434d*/
            *(_BYTE *)(v45 + 792) = 1; /*0x254361*/
            break;
          case 4u: /*0x25434d*/
            *(_BYTE *)(v45 + 794) = 1; /*0x254370*/
            break;
          default:
            *(_DWORD *)(v45 + 760) = 1; /*0x254379*/
            break;
        }
        if ( *(int *)(v45 + 392) > 0 && *(int *)(v45 + 388) > 0 ) /*0x254393*/
        {
          cocos2d::CCArray::addObject(v34, (struct cocos2d::CCObject *)v45); /*0x25439b*/
          sub_3E4F0(v55, v46 + 320); /*0x2543ac*/
          sub_21A440(a1, *(unsigned int *)(v46 + 388), *(unsigned int *)(v46 + 392), v55); /*0x2543c7*/
        }
        if ( *((_QWORD *)&v62 + 1) > 0xFu ) /*0x2543d5*/
        {
          v47 = Buf1[0]; /*0x2543da*/
          if ( (unsigned __int64)(*((_QWORD *)&v62 + 1) + 1LL) >= 0x1000 ) /*0x2543e8*/
          {
            v47 = (void *)*((_QWORD *)Buf1[0] - 1); /*0x2543ee*/
            if ( (unsigned __int64)((char *)Buf1[0] - (char *)v47 - 8) > 0x1F ) /*0x2543fd*/
              invoke_watson(0, 0, 0, 0, 0); /*0x25445f*/
          }
          j_j_free(v47); /*0x2543ff*/
        }
      }
      if ( cocos2d::CCArray::count(v34) ) /*0x25441c*/
      {
        Buf2 = 0; /*0x254469*/
        si128 = 0; /*0x254470*/
        do /*0x254478*/
          ++v5; /*0x254475*/
        while ( *((_BYTE *)v4 + v5) ); /*0x254478*/
        sub_3C230(&Buf2); /*0x254488*/
        cocos2d::CCDictionary::setObject(*(_QWORD *)(a1 + 1152), v34, &Buf2); /*0x2544a1*/
        if ( si128.m128i_i64[1] > 0xFuLL ) /*0x2544b0*/
        {
          v49 = (void *)Buf2; /*0x2544b5*/
          if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x2544c3*/
          {
            v49 = *(void **)(Buf2 - 8); /*0x2544c9*/
            if ( (unsigned __int64)(Buf2 - (_QWORD)v49 - 8) > 0x1F ) /*0x2544d8*/
              invoke_watson(0, 0, 0, 0, 0); /*0x2544ed*/
          }
          j_j_free(v49); /*0x2544f4*/
        }
        v50 = *(void (__fastcall ****)(_QWORD, cocos2d::CCArray *, _QWORD))(a1 + 1496); /*0x2544f9*/
        if ( v50 ) /*0x254503*/
          (**v50)(v50, v34, v14); /*0x25450e*/
      }
      else
      {
        v48 = *(_QWORD *)(a1 + 1496); /*0x25442b*/
        if ( v48 ) /*0x254435*/
          (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v48 + 8LL))(v48, v14, 0xFFFFFFFFLL); /*0x254444*/
      }
      v3 = a2; /*0x254510*/
    }
    else
    {
      v33 = *(_QWORD *)(a1 + 1496); /*0x2541ea*/
      if ( v33 ) /*0x2541f4*/
        (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v33 + 8LL))(v33, v14, 4294967294LL); /*0x254206*/
    }
  }
  sub_3C310(v3); /*0x254518*/
  return sub_3C310(a3); /*0x254528*/
}

// [75/86] Address: 0x255620
// Method: GameLevelManager::onRemoveFriendCompleted
// Hidden C++ exception states: #wind=3
double __fastcall GameLevelManager_onRemoveFriendCompleted(__int64 a1, unsigned __int64 *a2, _QWORD *a3)
{
  _QWORD *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r8
  void *v9; // rcx
  unsigned int v10; // esi
  cocos2d::CCArray *v11; // rbx
  void *v12; // rcx
  cocos2d::CCString *v13; // rax
  const char *CString; // rax
  const void *v15; // rcx
  unsigned __int64 v16; // rbx
  size_t v17; // r8
  void (__fastcall ***v18)(_QWORD, _QWORD, __int64); // rcx
  __int64 v19; // rcx
  void *Block[2]; // [rsp+40h] [rbp-58h] BYREF
  __m128i si128; // [rsp+50h] [rbp-48h]

  v6 = a3; /*0x255652*/
  if ( a3[3] > 0xFu ) /*0x25565a*/
    v6 = (_QWORD *)*a3; /*0x25565c*/
  *(_OWORD *)Block = 0; /*0x255662*/
  si128 = 0; /*0x25566a*/
  v7 = -1; /*0x255670*/
  v8 = -1; /*0x255677*/
  do /*0x255683*/
    ++v8; /*0x255680*/
  while ( *((_BYTE *)v6 + v8) ); /*0x255683*/
  sub_3C230(Block); /*0x255692*/
  cocos2d::CCDictionary::removeObjectForKey(*(_QWORD *)(a1 + 1200), Block); /*0x2556a4*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x2556b4*/
  {
    v9 = Block[0]; /*0x2556b9*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x2556c8*/
    {
      v9 = (void *)*((_QWORD *)Block[0] - 1); /*0x2556ce*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v9 - 8) > 0x1F ) /*0x2556dd*/
        invoke_watson(0, 0, 0, 0, 0); /*0x2556f0*/
    }
    j_j_free(v9); /*0x2556f7*/
  }
  v10 = 0; /*0x2556fc*/
  *(_OWORD *)Block = 0; /*0x255701*/
  si128 = 0; /*0x255709*/
  do /*0x255713*/
    ++v7; /*0x255710*/
  while ( *((_BYTE *)v6 + v7) ); /*0x255713*/
  sub_3C230(Block); /*0x255724*/
  v11 = (cocos2d::CCArray *)sub_D09B0(Block, &unk_70F154); /*0x25573b*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x255747*/
  {
    v12 = Block[0]; /*0x25574c*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x25575b*/
    {
      v12 = (void *)*((_QWORD *)Block[0] - 1); /*0x255761*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v12 - 8) > 0x1F ) /*0x255770*/
        invoke_watson(0, 0, 0, 0, 0); /*0x255781*/
    }
    j_j_free(v12); /*0x255788*/
  }
  si128 = _mm_load_si128((const __m128i *)&Size); /*0x255795*/
  LOBYTE(Block[0]) = 0; /*0x25579b*/
  if ( cocos2d::CCArray::count(v11) >= 2 ) /*0x2557ac*/
  {
    v13 = cocos2d::CCArray::objectAtIndex(v11, 1u); /*0x2557b6*/
    CString = cocos2d::CCString::getCString(v13); /*0x2557bf*/
    v10 = atoi(CString); /*0x2557ce*/
  }
  *(_OWORD *)Block = 0; /*0x2557d3*/
  si128.m128i_i64[0] = 2; /*0x2557dd*/
  si128.m128i_i64[1] = 15; /*0x2557e2*/
  strcpy((char *)Block, "-1"); /*0x2557f0*/
  v15 = a2; /*0x2557fa*/
  if ( a2[3] > 0xF ) /*0x255802*/
    v15 = (const void *)*a2; /*0x255804*/
  v16 = a2[2]; /*0x255807*/
  v17 = v16; /*0x25580b*/
  if ( v16 > 2 ) /*0x255811*/
    v17 = 2; /*0x255811*/
  if ( !memcmp(v15, Block, v17) && v16 == 2 ) /*0x255827*/
  {
    v19 = *(_QWORD *)(a1 + 1488); /*0x255846*/
    if ( v19 ) /*0x255850*/
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v19 + 8LL))(v19, v10, 27); /*0x25585d*/
  }
  else
  {
    v18 = *(void (__fastcall ****)(_QWORD, _QWORD, __int64))(a1 + 1488); /*0x25582b*/
    if ( v18 ) /*0x255835*/
      (**v18)(v18, v10, 27); /*0x255842*/
  }
  sub_3C310(a2); /*0x255864*/
  return sub_3C310(a3); /*0x255872*/
}

// [76/86] Address: 0x258380
// Method: GameLevelManager::onRequestUserAccessCompleted
// Hidden C++ exception states: #wind=7
double __fastcall GameLevelManager_onRequestUserAccessCompleted(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  void *v6; // rcx
  const void *v7; // rcx
  unsigned __int64 v8; // r14
  size_t v9; // r8
  int v10; // ebx
  int v11; // esi
  __int64 v12; // rcx
  const char *v13; // rcx
  __int64 v14; // r8
  int v15; // r14d
  char *v16; // rbp
  unsigned __int64 v17; // rax
  char *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  const char *v21; // rcx
  __int64 v22; // rcx
  _DWORD *v23; // rbx
  float v24; // xmm0_4
  __int64 v25; // rax
  void (__fastcall ***v26)(_QWORD, _QWORD, __int64); // rcx
  void *v28; // [rsp+30h] [rbp-78h]
  void *v29; // [rsp+30h] [rbp-78h]
  void *v30; // [rsp+30h] [rbp-78h]
  void *Block[2]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v32; // [rsp+58h] [rbp-50h]
  unsigned __int64 v33; // [rsp+60h] [rbp-48h]

  *(_OWORD *)Block = 0; /*0x2583b9*/
  v32 = 6; /*0x2583be*/
  v33 = 15; /*0x2583cc*/
  strcpy((char *)Block, "req_ua"); /*0x2583d7*/
  cocos2d::CCDictionary::removeObjectForKey(*(_QWORD *)(a1 + 1200), Block); /*0x2583f8*/
  if ( v33 > 0xF ) /*0x258407*/
  {
    v6 = Block[0]; /*0x25840c*/
    if ( v33 + 1 >= 0x1000 ) /*0x25841b*/
    {
      v6 = (void *)*((_QWORD *)Block[0] - 1); /*0x258421*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v6 - 8) > 0x1F ) /*0x258430*/
        invoke_watson(0, 0, 0, 0, 0); /*0x258443*/
    }
    j_j_free(v6); /*0x25844a*/
  }
  *(_OWORD *)Block = 0; /*0x258452*/
  v32 = 2; /*0x25845d*/
  v33 = 15; /*0x258462*/
  strcpy((char *)Block, "-1"); /*0x25846e*/
  v7 = a2; /*0x25847d*/
  if ( a2[3] > 0xF ) /*0x258485*/
    v7 = (const void *)*a2; /*0x258487*/
  v8 = a2[2]; /*0x25848a*/
  v9 = v8; /*0x25848e*/
  if ( v8 > 2 ) /*0x258494*/
    v9 = 2; /*0x258494*/
  v10 = memcmp(v7, Block, v9); /*0x25849d*/
  v11 = 0; /*0x25849f*/
  if ( !v10 ) /*0x2584a3*/
  {
    if ( v8 >= 2 ) /*0x2584a8*/
      v10 = v8 > 2; /*0x2584b3*/
    else
      v10 = -1; /*0x2584aa*/
  }
  if ( !v10 ) /*0x2584b8*/
  {
    v12 = *(_QWORD *)(a1 + 1488); /*0x2584ba*/
    if ( v12 ) /*0x2584c4*/
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v12 + 8LL))(v12, 0, 49); /*0x2584d1*/
  }
  v13 = (const char *)a2; /*0x2584d4*/
  if ( a2[3] > 0xF ) /*0x2584dc*/
    v13 = (const char *)*a2; /*0x2584de*/
  v15 = atoi(v13); /*0x2584e7*/
  v16 = (char *)a2; /*0x2584ea*/
  if ( a2[3] > 0xF ) /*0x2584f2*/
    v16 = (char *)*a2; /*0x2584f4*/
  v17 = a2[2]; /*0x2584f7*/
  if ( v17 ) /*0x2584fe*/
  {
    v18 = &v16[v17]; /*0x258500*/
    LOBYTE(v14) = 44; /*0x258504*/
    v19 = sub_6722F0(v16, &v16[v17], v14); /*0x25850d*/
    if ( (char *)v19 != v18 ) /*0x258515*/
    {
      v20 = v19 - (_QWORD)v16; /*0x258517*/
      if ( v20 != -1 ) /*0x25851e*/
      {
        v21 = (const char *)a2; /*0x258520*/
        if ( a2[3] > 0xF ) /*0x258528*/
          v21 = (const char *)*a2; /*0x25852a*/
        v11 = atoi(&v21[v20 + 1]); /*0x258539*/
      }
    }
  }
  if ( v15 == 99 ) /*0x25853f*/
  {
    v22 = qword_905FD0; /*0x258541*/
    if ( !qword_905FD0 ) /*0x25854b*/
    {
      v28 = operator new(0x6E8u); /*0x258557*/
      qword_905FD0 = sub_2723A0(v28); /*0x258565*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x258576*/
      v22 = qword_905FD0; /*0x258578*/
    }
    *(_BYTE *)(v22 + 1076) = 1; /*0x25857f*/
    *(_DWORD *)(v22 + 1080) = v11; /*0x258586*/
  }
  else
  {
    if ( (unsigned int)(v15 - 1) > 1 ) /*0x258598*/
      goto LABEL_39; /*0x258598*/
    v23 = (_DWORD *)qword_905FD0; /*0x25859e*/
    if ( !qword_905FD0 ) /*0x2585a8*/
    {
      v29 = operator new(0x6E8u); /*0x2585b4*/
      qword_905FD0 = sub_2723A0(v29); /*0x2585c2*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x2585d3*/
      v23 = (_DWORD *)qword_905FD0; /*0x2585d5*/
    }
    v23[268] = v15; /*0x2585dc*/
    v24 = (float)((float)rand() / 32767.0) * 1000.0; /*0x2585f8*/
    v23[267] = (int)v24; /*0x258604*/
    v23[266] = v15 + (int)v24; /*0x25860d*/
    v25 = qword_905FD0; /*0x258613*/
    if ( !qword_905FD0 ) /*0x25861d*/
    {
      v30 = operator new(0x6E8u); /*0x258629*/
      qword_905FD0 = sub_2723A0(v30); /*0x258637*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x258648*/
      v25 = qword_905FD0; /*0x25864a*/
    }
    *(_DWORD *)(v25 + 1080) = v11; /*0x258651*/
  }
  v26 = *(void (__fastcall ****)(_QWORD, _QWORD, __int64))(a1 + 1488); /*0x258657*/
  if ( v26 ) /*0x258661*/
    (**v26)(v26, 0, 49); /*0x25866e*/
LABEL_39:
  sub_3C310(a2); /*0x258671*/
  return sub_3C310(a3); /*0x258682*/
}

// [77/86] Address: 0x2586b0
// Method: GameLevelManager::hasLikedItemFullCheck
char __fastcall GameLevelManager_hasLikedItemFullCheck(int a1, int a2, int a3, int a4)
{
  int v4; // ebx
  char result; // al
  int v9; // [rsp+20h] [rbp-18h]

  v4 = a4; /*0x2586c4*/
  v9 = a4; /*0x2586ca*/
  LOBYTE(a4) = 1; /*0x2586d3*/
  if ( a2 == 3 ) /*0x2586d9*/
  {
    if ( !(unsigned __int8)GameLevelManager_hasLikedItem(a1, 3, a3, a4, v9) ) /*0x2586ff*/
    {
      result = GameLevelManager_hasLikedItem(a1, 3, a3, 0, v4); /*0x25871a*/
LABEL_6:
      if ( !result ) /*0x258721*/
        return result; /*0x258721*/
    }
  }
  else if ( !(unsigned __int8)GameLevelManager_hasLikedItem(a1, a2, a3, a4, v9) ) /*0x2586db*/
  {
    result = GameLevelManager_hasLikedItem(a1, a2, a3, 0, v4); /*0x2586f3*/
    goto LABEL_6; /*0x2586f8*/
  }
  return 1; /*0x258725*/
}

// [78/86] Address: 0x258740
// Method: GameLevelManager::hasLikedItem
// Hidden C++ exception states: #wind=1
_BOOL8 __fastcall GameLevelManager_hasLikedItem(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4, int a5)
{
  cocos2d::CCString *v6; // rax
  const char *CString; // rax
  __int64 v8; // r8
  bool v9; // bl
  void *v10; // rcx
  void *Block[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v14; // [rsp+40h] [rbp-28h]

  v6 = cocos2d::CCString::createWithFormat("like_%i_%i_%i_%i", a2, a3, a4, a5); /*0x25876e*/
  CString = cocos2d::CCString::getCString(v6); /*0x258777*/
  *(_OWORD *)Block = 0; /*0x258780*/
  v14 = 0; /*0x258788*/
  v8 = -1; /*0x25878e*/
  do /*0x258798*/
    ++v8; /*0x258795*/
  while ( CString[v8] ); /*0x258798*/
  sub_3C230(Block); /*0x2587a7*/
  v9 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(a1 + 896), Block) != 0; /*0x2587c2*/
  if ( *((_QWORD *)&v14 + 1) > 0xFu ) /*0x2587ce*/
  {
    v10 = Block[0]; /*0x2587d3*/
    if ( (unsigned __int64)(*((_QWORD *)&v14 + 1) + 1LL) >= 0x1000 ) /*0x2587e2*/
    {
      v10 = (void *)*((_QWORD *)Block[0] - 1); /*0x2587e8*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v10 - 8) > 0x1F ) /*0x2587f7*/
        invoke_watson(0, 0, 0, 0, 0); /*0x25880c*/
    }
    j_j_free(v10); /*0x258813*/
  }
  return v9; /*0x25881b*/
}

// [79/86] Address: 0x25ac40
// Method: GameLevelManager::getGJChallenges
// Hidden C++ exception states: #wind=8
char __fastcall GameLevelManager_getGJChallenges(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  unsigned __int64 v4; // rdx
  void *v5; // r8
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  void *v10; // rcx
  __int64 v11; // rax
  cocos2d::CCString *v12; // rax
  const char *CString; // rax
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rax
  const char *v17; // rdi
  const char *v18; // rsi
  cocos2d::CCString *v19; // rax
  const char *v20; // rax
  cocos2d::CCString *v21; // rax
  char *v22; // rax
  size_t v23; // r8
  _QWORD *v24; // rdx
  void *v25; // rcx
  void *v26; // [rsp+40h] [rbp-C0h]
  __int128 v27; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+58h] [rbp-A8h]
  __int64 v29; // [rsp+60h] [rbp-A0h]
  __int128 v30; // [rsp+68h] [rbp-98h] BYREF
  __int64 v31; // [rsp+78h] [rbp-88h]
  __int64 v32; // [rsp+80h] [rbp-80h]
  __int128 *v33; // [rsp+88h] [rbp-78h]
  void *Block[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v35; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v36; // [rsp+B0h] [rbp-50h]
  void *v37[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v38; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v39; // [rsp+D0h] [rbp-30h]
  __int128 v40; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v41; // [rsp+E8h] [rbp-18h]
  __int64 v42; // [rsp+F0h] [rbp-10h]
  _QWORD Src[4]; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v44[4]; // [rsp+118h] [rbp+18h] BYREF

  Block[1] = 0; /*0x25ac74*/
  v35 = 8; /*0x25ac78*/
  v36 = 15; /*0x25ac80*/
  Block[0] = (void *)0x6C6168635F746567LL; /*0x25ac8f*/
  v3 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(a1 + 1192), Block); /*0x25aca8*/
  v4 = v36; /*0x25acab*/
  if ( v36 > 0xF ) /*0x25acb3*/
  {
    v5 = Block[0]; /*0x25acb8*/
    if ( v36 + 1 >= 0x1000 ) /*0x25acc6*/
    {
      v5 = (void *)*((_QWORD *)Block[0] - 1); /*0x25accc*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v5 - 8) > 0x1F ) /*0x25acdb*/
        invoke_watson(0, 0, 0, 0, 0); /*0x25acec*/
    }
    j_j_free(v5); /*0x25acf6*/
  }
  if ( v3 ) /*0x25acfe*/
    return 0; /*0x25ad00*/
  Block[1] = 0; /*0x25ad07*/
  v35 = 8; /*0x25ad0b*/
  v36 = 15; /*0x25ad13*/
  Block[0] = (void *)0x6C6168635F746567LL; /*0x25ad22*/
  v7 = *(_QWORD *)(a1 + 1192); /*0x25ad2a*/
  v8 = cocos2d::CCNode::create(v2, v4); /*0x25ad31*/
  cocos2d::CCDictionary::setObject(v7, v8, Block); /*0x25ad41*/
  if ( v36 > 0xF ) /*0x25ad50*/
  {
    v10 = Block[0]; /*0x25ad55*/
    if ( v36 + 1 >= 0x1000 ) /*0x25ad63*/
    {
      v10 = (void *)*((_QWORD *)Block[0] - 1); /*0x25ad69*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v10 - 8) > 0x1F ) /*0x25ad78*/
        invoke_watson(0, 0, 0, 0, 0); /*0x25ad89*/
    }
    j_j_free(v10); /*0x25ad90*/
  }
  GameLevelManager_getBasePostString(v9, Src); /*0x25ad99*/
  v11 = qword_905FD0; /*0x25ad9f*/
  if ( !qword_905FD0 ) /*0x25ada9*/
  {
    v26 = operator new(0x6E8u); /*0x25adb5*/
    qword_905FD0 = sub_2723A0(v26); /*0x25adc3*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x25add4*/
    v11 = qword_905FD0; /*0x25add6*/
  }
  v12 = cocos2d::CCString::createWithFormat( /*0x25adf0*/
          (const char *)&word_6E86F8,
          (unsigned int)(*(_DWORD *)(v11 + 928) - *(_DWORD *)(v11 + 932)));
  CString = cocos2d::CCString::getCString(v12); /*0x25adf9*/
  *(_OWORD *)v37 = 0; /*0x25ae02*/
  v38 = 0; /*0x25ae06*/
  v39 = 0; /*0x25ae0a*/
  v14 = -1; /*0x25ae0e*/
  v15 = -1; /*0x25ae15*/
  do /*0x25ae23*/
    ++v15; /*0x25ae20*/
  while ( CString[v15] ); /*0x25ae23*/
  sub_3C230(v37); /*0x25ae31*/
  *(_OWORD *)Block = 0; /*0x25ae3a*/
  v35 = 5; /*0x25ae3e*/
  v36 = 15; /*0x25ae46*/
  strcpy((char *)Block, "19847"); /*0x25ae54*/
  cocos2d::ZipUtils::base64EncodeEnc(v44, v37, Block); /*0x25ae71*/
  v16 = sub_216020(&v40, 5); /*0x25ae81*/
  v17 = (const char *)v16; /*0x25ae86*/
  v18 = (const char *)v44; /*0x25ae89*/
  if ( v44[3] > 0xFu ) /*0x25ae92*/
    v18 = (const char *)v44[0]; /*0x25ae92*/
  if ( *(_QWORD *)(v16 + 24) > 0xFu ) /*0x25ae9c*/
    v17 = *(const char **)v16; /*0x25ae9e*/
  v19 = cocos2d::CCString::createWithFormat("%c%s%s%c%c%s", 87, "mfd", "2893", 103, 98, (const char *)&word_708030); /*0x25aed7*/
  v20 = cocos2d::CCString::getCString(v19); /*0x25aee0*/
  v21 = cocos2d::CCString::createWithFormat("&world=%i&gdl=%i&secret=%s&chk=%s%s", 0, 0, v20, v17, v18); /*0x25aeff*/
  v22 = (char *)cocos2d::CCString::getCString(v21); /*0x25af08*/
  v23 = -1; /*0x25af0e*/
  do /*0x25af14*/
    ++v23; /*0x25af11*/
  while ( v22[v23] ); /*0x25af14*/
  sub_43D80(Src, v22, v23); /*0x25af22*/
  sub_3C310(&v40); /*0x25af2c*/
  v33 = &v40; /*0x25af3f*/
  v31 = 8; /*0x25af4b*/
  v32 = 15; /*0x25af54*/
  v30 = 0x6C6168635F746567uLL; /*0x25af63*/
  v24 = Src; /*0x25af6d*/
  if ( Src[3] > 0xFu ) /*0x25af76*/
    v24 = (_QWORD *)Src[0]; /*0x25af76*/
  v40 = 0; /*0x25af7b*/
  v41 = 0; /*0x25af7f*/
  v42 = 0; /*0x25af83*/
  do /*0x25af8a*/
    ++v14; /*0x25af87*/
  while ( *((_BYTE *)v24 + v14) ); /*0x25af8a*/
  sub_3C230(&v40); /*0x25af97*/
  v27 = 0; /*0x25afa0*/
  *(_QWORD *)&v27 = sub_3C460(64); /*0x25afbc*/
  v28 = 54; /*0x25afc1*/
  v29 = 63; /*0x25afca*/
  strcpy((char *)v27, "https://www.boomlings.com/database/getGJChallenges.php"); /*0x25afda*/
  sub_216210(a1, &v27, &v40, &v30, 53); /*0x25b026*/
  sub_3C310(v44); /*0x25b030*/
  if ( v39 > 0xF ) /*0x25b03e*/
  {
    v25 = v37[0]; /*0x25b043*/
    if ( v39 + 1 >= 0x1000 ) /*0x25b051*/
    {
      v25 = (void *)*((_QWORD *)v37[0] - 1); /*0x25b057*/
      if ( (unsigned __int64)((char *)v37[0] - (char *)v25 - 8) > 0x1F ) /*0x25b066*/
        invoke_watson(0, 0, 0, 0, 0); /*0x25b077*/
    }
    j_j_free(v25); /*0x25b07e*/
  }
  v38 = 0; /*0x25b083*/
  v39 = 15; /*0x25b087*/
  LOBYTE(v37[0]) = 0; /*0x25b08f*/
  sub_3C310(Src); /*0x25b097*/
  return 1; /*0x25b09e*/
}

// [80/86] Address: 0x25b0d0
// Method: GameLevelManager::onGetGJChallengesCompleted
// Hidden C++ exception states: #wind=23
double __fastcall GameLevelManager_onGetGJChallengesCompleted(_QWORD *a1, unsigned __int64 *a2, __int64 a3)
{
  void *v5; // rcx
  const void *v6; // rcx
  unsigned __int64 v7; // rsi
  size_t v8; // r8
  int v9; // ebx
  __int64 v10; // rcx
  unsigned __int64 *v11; // rdi
  unsigned __int64 *v12; // rcx
  cocos2d::CCArray *v13; // rbx
  __int64 v14; // rcx
  cocos2d::CCString *v15; // rax
  const char *CString; // rax
  __int64 v17; // r8
  unsigned int v18; // edi
  cocos2d::CCString *v19; // rax
  const char *v20; // rax
  __int64 v21; // r8
  __int64 v22; // rcx
  void *v23; // rcx
  void *v24; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  void *v28; // rcx
  __int64 v29; // xmm2_8
  __int128 *v30; // r14
  __int64 v31; // rbx
  cocos2d::CCString *v32; // rax
  char *v33; // rax
  size_t v34; // r8
  void **v35; // r8
  void **v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  void **v39; // rdx
  _BYTE *v40; // r15
  unsigned __int64 v41; // r13
  void **v42; // rcx
  size_t v43; // rbx
  size_t v44; // r8
  size_t v45; // rsi
  __int64 v46; // rcx
  void *v47; // rcx
  _BYTE *v48; // rax
  cocos2d::CCArray *v49; // rsi
  __int64 v50; // rcx
  cocos2d::CCString *v51; // rax
  int v52; // r14d
  _DWORD *v53; // rbx
  float v54; // xmm0_4
  cocos2d::CCString *v55; // rax
  int v56; // ebx
  __int64 v57; // rcx
  __int64 v58; // rcx
  cocos2d::CCString *v59; // rax
  const char *v60; // rax
  __int64 v61; // r8
  __int64 v62; // rdx
  int v63; // ebx
  __int64 v64; // rcx
  void *v65; // rcx
  cocos2d::CCString *v66; // rax
  int v67; // ebx
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rcx
  cocos2d::CCString *v71; // rax
  cocos2d::CCString *v72; // rax
  const char *v73; // rax
  __int64 v74; // r8
  cocos2d::CCString *v75; // rax
  const char *v76; // rax
  __int64 v77; // r8
  cocos2d::CCString *v78; // rax
  const char *v79; // rax
  __int64 v80; // r8
  __int64 v81; // rcx
  __int64 v82; // rsi
  __int64 v83; // rcx
  __int64 v84; // r14
  __int64 v85; // rcx
  __int64 SecondaryQueuedChallenge; // r12
  __int128 *v87; // rdx
  __int64 v88; // rax
  __int64 v89; // rbx
  __int64 v90; // rcx
  __int64 v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rsi
  cocos2d::CCString *v94; // rax
  const char *v95; // rax
  __int64 v96; // r8
  void *v97; // rcx
  __int64 v98; // rbx
  void (__fastcall ***v99)(_QWORD); // rcx
  __int64 v100; // rcx
  void *v101; // rcx
  _BYTE *v102; // rax
  void *v103; // [rsp+40h] [rbp-C0h]
  void *v104; // [rsp+40h] [rbp-C0h]
  void *v105; // [rsp+40h] [rbp-C0h]
  int v106; // [rsp+40h] [rbp-C0h]
  void *v110; // [rsp+60h] [rbp-A0h]
  void *v111; // [rsp+68h] [rbp-98h]
  void *v112; // [rsp+70h] [rbp-90h]
  void *v113; // [rsp+80h] [rbp-80h]
  void *v114; // [rsp+88h] [rbp-78h]
  void *v115; // [rsp+90h] [rbp-70h]
  __int128 v116; // [rsp+A8h] [rbp-58h] BYREF
  __m128i v117; // [rsp+B8h] [rbp-48h]
  void *Block[2]; // [rsp+C8h] [rbp-38h] BYREF
  __m128i v119; // [rsp+D8h] [rbp-28h]
  void *Src[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v121; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v122; // [rsp+100h] [rbp+0h]
  void *Buf1[2]; // [rsp+108h] [rbp+8h] BYREF
  size_t v124; // [rsp+118h] [rbp+18h]
  unsigned __int64 v125; // [rsp+120h] [rbp+20h]
  __int128 v126; // [rsp+128h] [rbp+28h] BYREF
  __int64 v127; // [rsp+138h] [rbp+38h]
  unsigned __int64 v128; // [rsp+140h] [rbp+40h]
  void *Buf2[2]; // [rsp+148h] [rbp+48h] BYREF
  size_t Size; // [rsp+158h] [rbp+58h]
  unsigned __int64 v131; // [rsp+160h] [rbp+60h]
  __int128 v132; // [rsp+168h] [rbp+68h] BYREF
  __int64 v133; // [rsp+178h] [rbp+78h]
  __int64 v134; // [rsp+180h] [rbp+80h]
  _BYTE v135[32]; // [rsp+188h] [rbp+88h] BYREF
  __int128 v136; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v137; // [rsp+1B8h] [rbp+B8h]
  __int64 v138; // [rsp+1C0h] [rbp+C0h]
  __int128 v139; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v140; // [rsp+1D8h] [rbp+D8h]
  __int64 v141; // [rsp+1E0h] [rbp+E0h]
  _BYTE v142[48]; // [rsp+1E8h] [rbp+E8h] BYREF

  Block[1] = 0; /*0x25b122*/
  v119.m128i_i64[0] = 8; /*0x25b126*/
  v119.m128i_i64[1] = 15; /*0x25b133*/
  Block[0] = (void *)0x6C6168635F746567LL; /*0x25b13e*/
  cocos2d::CCDictionary::removeObjectForKey(a1[149], Block); /*0x25b151*/
  if ( v119.m128i_i64[1] > 0xFuLL ) /*0x25b15f*/
  {
    v5 = Block[0]; /*0x25b164*/
    if ( (unsigned __int64)(v119.m128i_i64[1] + 1) >= 0x1000 ) /*0x25b172*/
    {
      v5 = (void *)*((_QWORD *)Block[0] - 1); /*0x25b178*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v5 - 8) > 0x1F ) /*0x25b187*/
        invoke_watson(0, 0, 0, 0, 0); /*0x25b198*/
    }
    j_j_free(v5); /*0x25b19f*/
  }
  *(_OWORD *)Block = 0; /*0x25b1a7*/
  v119.m128i_i64[0] = 2; /*0x25b1b1*/
  v119.m128i_i64[1] = 15; /*0x25b1b5*/
  strcpy((char *)Block, "-1"); /*0x25b1c0*/
  v6 = a2; /*0x25b1cc*/
  if ( a2[3] > 0xF ) /*0x25b1d4*/
    v6 = (const void *)*a2; /*0x25b1d6*/
  v7 = a2[2]; /*0x25b1d9*/
  v8 = v7; /*0x25b1dd*/
  if ( v7 > 2 ) /*0x25b1e3*/
    v8 = 2; /*0x25b1e3*/
  v9 = memcmp(v6, Block, v8); /*0x25b1ec*/
  if ( !v9 ) /*0x25b1f0*/
  {
    if ( v7 >= 2 ) /*0x25b1f5*/
      v9 = v7 > 2; /*0x25b203*/
    else
      v9 = -1; /*0x25b1f7*/
  }
  if ( !v9 ) /*0x25b208*/
  {
    v10 = a1[194]; /*0x25b20a*/
    if ( v10 ) /*0x25b215*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10); /*0x25b21a*/
    v11 = a2; /*0x25b21d*/
LABEL_18:
    v12 = v11; /*0x25b222*/
    goto LABEL_38; /*0x25b225*/
  }
  v11 = a2; /*0x25b231*/
  v13 = (cocos2d::CCArray *)sub_D09B0(a2, &word_70806C); /*0x25b23e*/
  if ( cocos2d::CCArray::count(v13) < 2 ) /*0x25b24d*/
  {
    v14 = a1[194]; /*0x25b24f*/
    if ( v14 ) /*0x25b25a*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14); /*0x25b25f*/
    goto LABEL_18; /*0x25b262*/
  }
  v15 = cocos2d::CCArray::stringAtIndex(v13, 0); /*0x25b269*/
  CString = cocos2d::CCString::getCString(v15); /*0x25b272*/
  v116 = 0; /*0x25b27b*/
  v117 = 0u; /*0x25b27f*/
  v17 = -1; /*0x25b28f*/
  do /*0x25b299*/
    ++v17; /*0x25b296*/
  while ( CString[v17] ); /*0x25b299*/
  sub_3C230(&v116); /*0x25b2a7*/
  v18 = 1; /*0x25b2ad*/
  v19 = cocos2d::CCArray::stringAtIndex(v13, 1u); /*0x25b2b7*/
  v20 = cocos2d::CCString::getCString(v19); /*0x25b2c0*/
  *(_OWORD *)Buf2 = 0; /*0x25b2c9*/
  Size = 0; /*0x25b2cd*/
  v131 = 0; /*0x25b2d5*/
  v21 = -1; /*0x25b2dd*/
  do /*0x25b2e7*/
    ++v21; /*0x25b2e4*/
  while ( v20[v21] ); /*0x25b2e7*/
  sub_3C230(Buf2); /*0x25b2f5*/
  if ( v117.m128i_i64[0] < 5uLL ) /*0x25b303*/
  {
    v22 = a1[194]; /*0x25b309*/
    if ( v22 ) /*0x25b314*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22); /*0x25b319*/
    if ( v131 > 0xF ) /*0x25b325*/
    {
      v23 = Buf2[0]; /*0x25b32a*/
      if ( v131 + 1 >= 0x1000 ) /*0x25b338*/
      {
        v23 = (void *)*((_QWORD *)Buf2[0] - 1); /*0x25b33e*/
        if ( (unsigned __int64)((char *)Buf2[0] - (char *)v23 - 8) > 0x1F ) /*0x25b34d*/
          goto LABEL_173; /*0x25b34d*/
      }
LABEL_32:
      j_j_free(v23); /*0x25b353*/
    }
    goto LABEL_33; /*0x25b353*/
  }
  *(_OWORD *)Block = 0; /*0x25b3ea*/
  v119 = 0u; /*0x25b3ee*/
  sub_3C230(Block); /*0x25b426*/
  v27 = v117.m128i_i64[1]; /*0x25b42b*/
  if ( v117.m128i_i64[1] > 0xFuLL ) /*0x25b433*/
  {
    v28 = (void *)v116; /*0x25b438*/
    if ( (unsigned __int64)(v117.m128i_i64[1] + 1) >= 0x1000 ) /*0x25b446*/
    {
      v28 = *(void **)(v116 - 8); /*0x25b44c*/
      if ( (unsigned __int64)(v116 - (_QWORD)v28 - 8) > 0x1F ) /*0x25b45b*/
        goto LABEL_168; /*0x25b45b*/
    }
    j_j_free(v28); /*0x25b461*/
  }
  v116 = *(_OWORD *)Block; /*0x25b46a*/
  v29 = v119.m128i_i64[0]; /*0x25b46e*/
  v117 = v119; /*0x25b472*/
  *(_OWORD *)Src = 0; /*0x25b479*/
  v121 = 0; /*0x25b47d*/
  v122 = 0; /*0x25b485*/
  v30 = &v116; /*0x25b48d*/
  if ( _mm_srli_si128(v119, 8).m128i_u64[0] > 0xF ) /*0x25b4a8*/
    v30 = (__int128 *)Block[0]; /*0x25b4a8*/
  v31 = 0x7FFFFFFFFFFFFFFFLL; /*0x25b4b1*/
  if ( v119.m128i_i64[0] > 0x7FFFFFFFFFFFFFFFuLL ) /*0x25b4be*/
    sub_8D90(Block[0], v27, v26); /*0x25c057*/
  if ( v119.m128i_i64[0] > 0xFuLL ) /*0x25b4c8*/
  {
    if ( (v119.m128i_i64[0] | 0xFuLL) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x25b4ea*/
    {
      v31 = v119.m128i_i64[0] | 0xF; /*0x25b4ec*/
      if ( (v119.m128i_i64[0] | 0xFuLL) < 0x16 ) /*0x25b4f7*/
        v31 = 22; /*0x25b4f7*/
    }
    Src[0] = (void *)sub_3C460(v31 + 1); /*0x25b504*/
    v121 = v29; /*0x25b508*/
    v122 = v31; /*0x25b50c*/
    memcpy(Src[0], v30, v29 + 1); /*0x25b51a*/
  }
  else
  {
    v121 = v119.m128i_i64[0]; /*0x25b4ca*/
    v122 = 15; /*0x25b4ce*/
    *(_OWORD *)Src = *v30; /*0x25b4da*/
  }
  v32 = cocos2d::CCString::createWithFormat("%c%s%s%c%c%s", 111, "C36", "fpYa", 80, 116, "dg"); /*0x25b556*/
  v33 = (char *)cocos2d::CCString::getCString(v32); /*0x25b55f*/
  v34 = -1; /*0x25b565*/
  do /*0x25b573*/
    ++v34; /*0x25b570*/
  while ( v33[v34] ); /*0x25b573*/
  sub_43D80(Src, v33, v34); /*0x25b581*/
  v35 = Src; /*0x25b586*/
  if ( v122 > 0xF ) /*0x25b58f*/
    v35 = (void **)Src[0]; /*0x25b58f*/
  v36 = Src; /*0x25b594*/
  if ( v122 > 0xF ) /*0x25b598*/
    v36 = (void **)Src[0]; /*0x25b598*/
  v37 = -1; /*0x25b59d*/
  do /*0x25b5a7*/
    ++v37; /*0x25b5a4*/
  while ( *((_BYTE *)v35 + v37) ); /*0x25b5a7*/
  sub_7D030(v36, v37, Buf1); /*0x25b5b5*/
  sub_7D300(Buf1, v142); /*0x25b5c5*/
  *(_OWORD *)Buf1 = 0; /*0x25b5cd*/
  v124 = 0; /*0x25b5d3*/
  v125 = 0; /*0x25b5d7*/
  v38 = -1; /*0x25b5e2*/
  do /*0x25b5f3*/
    ++v38; /*0x25b5f0*/
  while ( v142[v38] ); /*0x25b5f3*/
  sub_3C230(Buf1); /*0x25b605*/
  v39 = Buf2; /*0x25b60a*/
  v40 = Buf2[0]; /*0x25b60e*/
  v41 = v131; /*0x25b612*/
  if ( v131 > 0xF ) /*0x25b61a*/
    v39 = (void **)Buf2[0]; /*0x25b61a*/
  v42 = Buf1; /*0x25b61e*/
  if ( v125 > 0xF ) /*0x25b627*/
    v42 = (void **)Buf1[0]; /*0x25b627*/
  v43 = v124; /*0x25b62c*/
  v44 = v124; /*0x25b630*/
  v45 = Size; /*0x25b633*/
  if ( Size < v124 ) /*0x25b63a*/
    v44 = Size; /*0x25b63a*/
  if ( memcmp(v42, v39, v44) || v43 < v45 || v43 > v45 ) /*0x25b64c*/
  {
    sub_3C310(Buf1); /*0x25b656*/
    v46 = a1[194]; /*0x25b65b*/
    if ( v46 ) /*0x25b666*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 8LL))(v46); /*0x25b66b*/
    goto LABEL_73; /*0x25b66b*/
  }
  sub_3C310(Buf1); /*0x25b6ea*/
  v126 = 0; /*0x25b6f2*/
  v127 = 5; /*0x25b6f6*/
  v128 = 15; /*0x25b6fe*/
  strcpy((char *)&v126, "19847"); /*0x25b70c*/
  cocos2d::ZipUtils::base64DecodeEnc(v135, &v116, &v126); /*0x25b72c*/
  v49 = (cocos2d::CCArray *)sub_D09B0(v135, &word_7222A8); /*0x25b746*/
  if ( cocos2d::CCArray::count(v49) < 9 ) /*0x25b755*/
  {
    v50 = a1[194]; /*0x25b757*/
    if ( v50 ) /*0x25b762*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 8LL))(v50); /*0x25b767*/
    goto LABEL_84; /*0x25b767*/
  }
  v51 = cocos2d::CCArray::stringAtIndex(v49, 1u); /*0x25b781*/
  v52 = cocos2d::CCString::intValue(v51); /*0x25b790*/
  if ( v52 > 0 ) /*0x25b795*/
  {
    v53 = (_DWORD *)qword_905FD0; /*0x25b79b*/
    if ( !qword_905FD0 ) /*0x25b7a5*/
    {
      v103 = operator new(0x6E8u); /*0x25b7b1*/
      qword_905FD0 = sub_2723A0(v103); /*0x25b7bf*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x25b7d0*/
      v53 = (_DWORD *)qword_905FD0; /*0x25b7d2*/
    }
    v53[175] = v52; /*0x25b7d9*/
    v54 = (float)((float)rand() / 32767.0) * 1000.0; /*0x25b7f5*/
    v53[174] = (int)v54; /*0x25b801*/
    v53[173] = v52 + (int)v54; /*0x25b80a*/
    v55 = cocos2d::CCArray::stringAtIndex(v49, 2u); /*0x25b818*/
    v56 = cocos2d::CCString::intValue(v55); /*0x25b827*/
    v57 = qword_905FD0; /*0x25b829*/
    if ( !qword_905FD0 ) /*0x25b833*/
    {
      v104 = operator new(0x6E8u); /*0x25b83f*/
      qword_905FD0 = sub_2723A0(v104); /*0x25b84d*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x25b85e*/
      v57 = qword_905FD0; /*0x25b860*/
    }
    if ( v56 != *(_DWORD *)(v57 + 928) - *(_DWORD *)(v57 + 932) ) /*0x25b875*/
    {
      v58 = a1[192]; /*0x25b877*/
      if ( v58 ) /*0x25b882*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 8LL))(v58); /*0x25b887*/
      goto LABEL_84; /*0x25b887*/
    }
    v59 = cocos2d::CCArray::stringAtIndex(v49, 3u); /*0x25b8a4*/
    v60 = cocos2d::CCString::getCString(v59); /*0x25b8ad*/
    *(_OWORD *)Block = 0; /*0x25b8b6*/
    v119 = 0u; /*0x25b8ba*/
    v61 = -1; /*0x25b8ca*/
    do /*0x25b8d4*/
      ++v61; /*0x25b8d1*/
    while ( v60[v61] ); /*0x25b8d4*/
    sub_3C230(Block); /*0x25b8e2*/
    v62 = qword_905FD0; /*0x25b8e8*/
    if ( !qword_905FD0 ) /*0x25b8f2*/
    {
      v105 = operator new(0x6E8u); /*0x25b8fe*/
      qword_905FD0 = sub_2723A0(v105); /*0x25b90c*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x25b91d*/
      v62 = qword_905FD0; /*0x25b91f*/
    }
    sub_3E4F0(&v132, v62 + 624); /*0x25b931*/
    v63 = sub_3C160(Block, &v132); /*0x25b943*/
    sub_3C310(&v132); /*0x25b949*/
    if ( v63 ) /*0x25b950*/
    {
      v64 = a1[192]; /*0x25b952*/
      if ( v64 ) /*0x25b95d*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 8LL))(v64); /*0x25b962*/
      if ( v119.m128i_i64[1] <= 0xFuLL ) /*0x25b96e*/
        goto LABEL_84; /*0x25b96e*/
      v65 = Block[0]; /*0x25b977*/
      if ( (unsigned __int64)(v119.m128i_i64[1] + 1) < 0x1000 ) /*0x25b985*/
        goto LABEL_104; /*0x25b985*/
      v65 = (void *)*((_QWORD *)Block[0] - 1); /*0x25b98b*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v65 - 8) <= 0x1F ) /*0x25b99a*/
        goto LABEL_104; /*0x25b99a*/
      goto LABEL_111; /*0x25b99a*/
    }
    v66 = cocos2d::CCArray::stringAtIndex(v49, 4u); /*0x25b9b2*/
    v67 = cocos2d::CCString::intValue(v66); /*0x25b9c1*/
    v69 = GJAccountManager_sharedState(v68); /*0x25b9c3*/
    if ( v67 != *(_DWORD *)(v69 + 360) - *(_DWORD *)(v69 + 364) ) /*0x25b9d6*/
    {
      v70 = a1[192]; /*0x25b9d8*/
      if ( v70 ) /*0x25b9e3*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 8LL))(v70); /*0x25b9e8*/
      if ( v119.m128i_i64[1] <= 0xFuLL ) /*0x25b9f4*/
        goto LABEL_84; /*0x25b9f4*/
      v65 = Block[0]; /*0x25b9fd*/
      if ( (unsigned __int64)(v119.m128i_i64[1] + 1) < 0x1000 /*0x25ba20*/
        || (v65 = (void *)*((_QWORD *)Block[0] - 1), (unsigned __int64)((char *)Block[0] - (char *)v65 - 8) <= 0x1F) )
      {
LABEL_104:
        j_j_free(v65); /*0x25b9a0*/
        goto LABEL_84; /*0x25b9a5*/
      }
LABEL_111:
      invoke_watson(0, 0, 0, 0, 0); /*0x25ba26*/
    }
    v71 = cocos2d::CCArray::stringAtIndex(v49, 5u); /*0x25ba48*/
    v106 = cocos2d::CCString::intValue(v71); /*0x25ba57*/
    v72 = cocos2d::CCArray::stringAtIndex(v49, 6u); /*0x25ba63*/
    v73 = cocos2d::CCString::getCString(v72); /*0x25ba6c*/
    v132 = 0; /*0x25ba75*/
    v133 = 0; /*0x25ba7c*/
    v134 = 0; /*0x25ba80*/
    v74 = -1; /*0x25ba87*/
    do /*0x25ba93*/
      ++v74; /*0x25ba90*/
    while ( v73[v74] ); /*0x25ba93*/
    sub_3C230(&v132); /*0x25baa0*/
    v75 = cocos2d::CCArray::stringAtIndex(v49, 7u); /*0x25baae*/
    v76 = cocos2d::CCString::getCString(v75); /*0x25bab7*/
    v139 = 0; /*0x25bac0*/
    v140 = 0; /*0x25bac7*/
    v141 = 0; /*0x25bace*/
    v77 = -1; /*0x25bad5*/
    do /*0x25bae3*/
      ++v77; /*0x25bae0*/
    while ( v76[v77] ); /*0x25bae3*/
    sub_3C230(&v139); /*0x25baf4*/
    v78 = cocos2d::CCArray::stringAtIndex(v49, 8u); /*0x25bb02*/
    v79 = cocos2d::CCString::getCString(v78); /*0x25bb0b*/
    v136 = 0; /*0x25bb14*/
    v137 = 0; /*0x25bb1b*/
    v138 = 0; /*0x25bb22*/
    v80 = -1; /*0x25bb29*/
    do /*0x25bb33*/
      ++v80; /*0x25bb30*/
    while ( v79[v80] ); /*0x25bb33*/
    sub_3C230(&v136); /*0x25bb44*/
    while ( 1 ) /*0x25bb50*/
    {
      v81 = qword_905FE0; /*0x25bb50*/
      if ( !qword_905FE0 ) /*0x25bb5a*/
      {
        v110 = operator new(0x3E8u); /*0x25bb66*/
        qword_905FE0 = sub_2D2B40(v110); /*0x25bb74*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x25bb85*/
        v81 = qword_905FE0; /*0x25bb87*/
      }
      v82 = sub_2E1EF0(v81, v18); /*0x25bb95*/
      v83 = qword_905FE0; /*0x25bb98*/
      if ( !qword_905FE0 ) /*0x25bba2*/
      {
        v111 = operator new(0x3E8u); /*0x25bbae*/
        qword_905FE0 = sub_2D2B40(v111); /*0x25bbbc*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x25bbcd*/
        v83 = qword_905FE0; /*0x25bbcf*/
      }
      v84 = sub_2E1FD0(v83, v18); /*0x25bbdd*/
      v85 = qword_905FE0; /*0x25bbe0*/
      if ( !qword_905FE0 ) /*0x25bbea*/
      {
        v112 = operator new(0x3E8u); /*0x25bbf6*/
        qword_905FE0 = sub_2D2B40(v112); /*0x25bc04*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x25bc15*/
        v85 = qword_905FE0; /*0x25bc17*/
      }
      SecondaryQueuedChallenge = GameStatsManager_getSecondaryQueuedChallenge(v85, v18); /*0x25bc25*/
      if ( v18 == 1 ) /*0x25bc2b*/
      {
        v87 = &v132; /*0x25bc2d*/
      }
      else
      {
        v87 = &v139; /*0x25bc33*/
        if ( v18 != 2 ) /*0x25bc44*/
          v87 = &v136; /*0x25bc44*/
      }
      v88 = sub_3E4F0(v142, v87); /*0x25bc4f*/
      v89 = GJChallengeItem_createFromString(v88); /*0x25bc5c*/
      *(_DWORD *)(v89 + 104) = v18; /*0x25bc5f*/
      v90 = qword_905FE0; /*0x25bc62*/
      if ( !qword_905FE0 ) /*0x25bc6c*/
      {
        v113 = operator new(0x3E8u); /*0x25bc78*/
        qword_905FE0 = sub_2D2B40(v113); /*0x25bc85*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x25bc96*/
        v90 = qword_905FE0; /*0x25bc98*/
      }
      if ( GameStatsManager_hasCompletedChallenge(v90, v89) /*0x25bcdf*/
        || v82 && *(_DWORD *)(v82 + 96) >= *(_DWORD *)(v89 + 96)
        || v84 && *(_DWORD *)(v84 + 96) >= *(_DWORD *)(v89 + 96)
        || SecondaryQueuedChallenge && *(_DWORD *)(SecondaryQueuedChallenge + 96) >= *(_DWORD *)(v89 + 96) )
      {
        goto LABEL_156; /*0x25bcdf*/
      }
      if ( !v82 || *(_BYTE *)(v82 + 100) ) /*0x25bcea*/
      {
        if ( v84 ) /*0x25bd3f*/
        {
          v93 = qword_905FE0; /*0x25bd66*/
          if ( !qword_905FE0 ) /*0x25bd70*/
          {
            Buf1[0] = operator new(0x3E8u); /*0x25bd7c*/
            qword_905FE0 = sub_2D2B40(Buf1[0]); /*0x25bd89*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x25bd9a*/
            v93 = qword_905FE0; /*0x25bd9c*/
          }
          *(_DWORD *)(v89 + 104) = v18; /*0x25bda3*/
          v94 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v18 + 100); /*0x25bdb0*/
          v95 = cocos2d::CCString::getCString(v94); /*0x25bdb9*/
          v126 = 0; /*0x25bdc2*/
          v127 = 0; /*0x25bdc9*/
          v128 = 0; /*0x25bdcd*/
          v96 = -1; /*0x25bdd1*/
          do /*0x25bde3*/
            ++v96; /*0x25bde0*/
          while ( v95[v96] ); /*0x25bde3*/
          sub_3C230(&v126); /*0x25bdf0*/
          cocos2d::CCDictionary::setObject(*(_QWORD *)(v93 + 560), v89, &v126); /*0x25be04*/
          if ( v128 > 0xF ) /*0x25be13*/
          {
            v97 = (void *)v126; /*0x25be18*/
            if ( v128 + 1 >= 0x1000 ) /*0x25be26*/
            {
              v97 = *(void **)(v126 - 8); /*0x25be2c*/
              if ( (unsigned __int64)(v126 - (_QWORD)v97 - 8) > 0x1F ) /*0x25be3b*/
                invoke_watson(0, 0, 0, 0, 0); /*0x25bf37*/
            }
            j_j_free(v97); /*0x25be41*/
          }
          v127 = 0; /*0x25be46*/
          v128 = 15; /*0x25be4a*/
          LOBYTE(v126) = 0; /*0x25be52*/
          goto LABEL_156; /*0x25be52*/
        }
        v91 = qword_905FE0; /*0x25bd41*/
        if ( !qword_905FE0 ) /*0x25bd4b*/
        {
          v115 = operator new(0x3E8u); /*0x25bd57*/
          v92 = sub_2D2B40(v115); /*0x25bd5e*/
          goto LABEL_142; /*0x25bd64*/
        }
      }
      else
      {
        v91 = qword_905FE0; /*0x25bcf0*/
        if ( !qword_905FE0 ) /*0x25bcfa*/
        {
          v114 = operator new(0x3E8u); /*0x25bd06*/
          v92 = sub_2D2B40(v114); /*0x25bd0d*/
LABEL_142:
          qword_905FE0 = v92; /*0x25bd13*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v92 + 72LL))(v92); /*0x25bd24*/
          v91 = qword_905FE0; /*0x25bd26*/
        }
      }
      GameStatsManager_storeQueuedChallenge(v91, v18, v89); /*0x25bd2d*/
LABEL_156:
      if ( (int)++v18 > 3 ) /*0x25be5b*/
      {
        v98 = qword_905FE0; /*0x25be61*/
        if ( !qword_905FE0 ) /*0x25be6b*/
        {
          Buf1[0] = operator new(0x3E8u); /*0x25be77*/
          qword_905FE0 = sub_2D2B40(Buf1[0]); /*0x25be84*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x25be95*/
          v98 = qword_905FE0; /*0x25be97*/
        }
        ftime64((struct __timeb64 *)Buf1); /*0x25bea2*/
        *(double *)(v98 + 568) = (double)LOWORD(Buf1[1]) / 1000.0 + (double)SLODWORD(Buf1[0]) + (double)v106; /*0x25bed7*/
        v99 = (void (__fastcall ***)(_QWORD))a1[194]; /*0x25bee4*/
        if ( v99 ) /*0x25beee*/
          (**v99)(v99); /*0x25bef3*/
        sub_3C310(&v136); /*0x25befd*/
        sub_3C310(&v139); /*0x25bf0a*/
        sub_3C310(&v132); /*0x25bf14*/
        sub_3C310(Block); /*0x25bf1e*/
LABEL_84:
        sub_3C310(v135); /*0x25b76b*/
LABEL_73:
        if ( v122 > 0xF ) /*0x25b677*/
        {
          v47 = Src[0]; /*0x25b679*/
          if ( v122 + 1 < 0x1000 /*0x25b69f*/
            || (v47 = (void *)*((_QWORD *)Src[0] - 1), (unsigned __int64)((char *)Src[0] - (char *)v47 - 8) <= 0x1F) )
          {
            j_j_free(v47); /*0x25b6a5*/
            goto LABEL_77; /*0x25b6a5*/
          }
LABEL_168:
          invoke_watson(0, 0, 0, 0, 0); /*0x25bf91*/
        }
LABEL_77:
        if ( v41 > 0xF ) /*0x25b6af*/
        {
          v48 = v40; /*0x25b6c0*/
          if ( v41 + 1 < 0x1000 || (v40 = (_BYTE *)*((_QWORD *)v40 - 1), (unsigned __int64)(v48 - v40 - 8) <= 0x1F) ) /*0x25b6d8*/
          {
            v23 = v40; /*0x25b6de*/
            goto LABEL_32; /*0x25b6e1*/
          }
LABEL_173:
          invoke_watson(0, 0, 0, 0, 0); /*0x25bfdc*/
        }
LABEL_33:
        if ( v117.m128i_i64[1] > 0xFuLL ) /*0x25b361*/
        {
          v24 = (void *)v116; /*0x25b366*/
          if ( (unsigned __int64)(v117.m128i_i64[1] + 1) < 0x1000 ) /*0x25b374*/
            goto LABEL_36; /*0x25b374*/
          v24 = *(void **)(v116 - 8); /*0x25b37a*/
          if ( (unsigned __int64)(v116 - (_QWORD)v24 - 8) <= 0x1F ) /*0x25b389*/
            goto LABEL_36; /*0x25b389*/
LABEL_178:
          invoke_watson(0, 0, 0, 0, 0); /*0x25c03d*/
        }
        goto LABEL_37; /*0x25b361*/
      }
    }
  }
  v100 = a1[192]; /*0x25bf3e*/
  if ( v100 ) /*0x25bf49*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v100 + 8LL))(v100); /*0x25bf4e*/
  sub_3C310(v135); /*0x25bf59*/
  if ( v122 > 0xF ) /*0x25bf67*/
  {
    v101 = Src[0]; /*0x25bf6c*/
    if ( v122 + 1 >= 0x1000 ) /*0x25bf7a*/
    {
      v101 = (void *)*((_QWORD *)Src[0] - 1); /*0x25bf80*/
      if ( (unsigned __int64)((char *)Src[0] - (char *)v101 - 8) > 0x1F ) /*0x25bf8f*/
        goto LABEL_168; /*0x25bf8f*/
    }
    j_j_free(v101); /*0x25bfab*/
  }
  if ( v41 > 0xF ) /*0x25bfb5*/
  {
    v102 = v40; /*0x25bfbb*/
    if ( v41 + 1 >= 0x1000 ) /*0x25bfc5*/
    {
      v40 = (_BYTE *)*((_QWORD *)v40 - 1); /*0x25bfcb*/
      if ( (unsigned __int64)(v102 - v40 - 8) > 0x1F ) /*0x25bfda*/
        goto LABEL_173; /*0x25bfda*/
    }
    j_j_free(v40); /*0x25bff9*/
  }
  if ( v117.m128i_i64[1] > 0xFuLL ) /*0x25c007*/
  {
    v24 = (void *)v116; /*0x25c010*/
    if ( (unsigned __int64)(v117.m128i_i64[1] + 1) >= 0x1000 ) /*0x25c01e*/
    {
      v24 = *(void **)(v116 - 8); /*0x25c028*/
      if ( (unsigned __int64)(v116 - (_QWORD)v24 - 8) > 0x1F ) /*0x25c037*/
        goto LABEL_178; /*0x25c037*/
    }
LABEL_36:
    j_j_free(v24); /*0x25b38f*/
  }
LABEL_37:
  v117.m128i_i64[0] = 0; /*0x25b394*/
  v117.m128i_i64[1] = 15; /*0x25b39c*/
  LOBYTE(v116) = 0; /*0x25b3a4*/
  v12 = a2; /*0x25b3a8*/
LABEL_38:
  sub_3C310(v12); /*0x25b3ad*/
  return sub_3C310(a3); /*0x25b3bd*/
}

// [81/86] Address: 0x25d1f0
// Method: GameLevelManager::onRestoreItemsCompleted
// Hidden C++ exception states: #wind=5
double __fastcall GameLevelManager_onRestoreItemsCompleted(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  void *v5; // rcx
  const void *v6; // rcx
  unsigned __int64 v7; // rbx
  size_t v8; // r8
  int v9; // eax
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rax
  _BYTE v15[32]; // [rsp+60h] [rbp-19h] BYREF
  unsigned __int64 *v16; // [rsp+80h] [rbp+7h]
  __int64 v17; // [rsp+88h] [rbp+Fh]
  void *Block[2]; // [rsp+90h] [rbp+17h] BYREF
  __m128i si128; // [rsp+A0h] [rbp+27h]

  v16 = a2; /*0x25d218*/
  v17 = a3; /*0x25d21c*/
  Block[1] = &loc_7961 + 4; /*0x25d223*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_830F70); /*0x25d22f*/
  Block[0] = (void *)0x4B65726F74736572LL; /*0x25d23c*/
  cocos2d::CCDictionary::removeObjectForKey(*(_QWORD *)(a1 + 1192), Block); /*0x25d25b*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x25d26a*/
  {
    v5 = Block[0]; /*0x25d26f*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x25d27d*/
    {
      v5 = (void *)*((_QWORD *)Block[0] - 1); /*0x25d283*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v5 - 8) > 0x1F ) /*0x25d292*/
        invoke_watson(0, 0, 0, 0, 0); /*0x25d2a5*/
    }
    j_j_free(v5); /*0x25d2ac*/
  }
  *(_OWORD *)Block = 0; /*0x25d2b4*/
  si128.m128i_i64[0] = 2; /*0x25d2bd*/
  si128.m128i_i64[1] = 15; /*0x25d2c1*/
  strcpy((char *)Block, "-1"); /*0x25d2ce*/
  v6 = a2; /*0x25d2d6*/
  if ( a2[3] > 0xF ) /*0x25d2de*/
    v6 = (const void *)*a2; /*0x25d2e0*/
  v7 = a2[2]; /*0x25d2e3*/
  v8 = v7; /*0x25d2e7*/
  if ( v7 > 2 ) /*0x25d2ed*/
    v8 = 2; /*0x25d2ed*/
  if ( !memcmp(v6, Block, v8) && v7 == 2 ) /*0x25d306*/
  {
    *(_OWORD *)Block = 0; /*0x25d30f*/
    si128 = 0u; /*0x25d315*/
    Block[0] = (void *)sub_3C460(32); /*0x25d327*/
    si128.m128i_i64[0] = 22; /*0x25d32b*/
    si128.m128i_i64[1] = 31; /*0x25d333*/
    strcpy((char *)Block[0], "No restore data found."); /*0x25d342*/
    v9 = sub_3E4F0(v15, Block); /*0x25d36c*/
    v10 = FLAlertLayer_create_0(0, (unsigned int)"Error", v9, (unsigned int)"OK", 0, 1133903872, 0, 0, 1065353216); /*0x25d3b7*/
    sub_3C310(Block); /*0x25d3be*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 1064LL))(v10); /*0x25d3c9*/
  }
  else
  {
    *(_OWORD *)Block = 0; /*0x25d3d7*/
    si128 = 0u; /*0x25d3dd*/
    Block[0] = (void *)sub_3C460(32); /*0x25d3ef*/
    si128.m128i_i64[0] = 28; /*0x25d3f3*/
    si128.m128i_i64[1] = 31; /*0x25d3fb*/
    strcpy((char *)Block[0], "Your data has been restored."); /*0x25d40a*/
    v11 = sub_3E4F0(v15, Block); /*0x25d436*/
    v12 = FLAlertLayer_create_0( /*0x25d481*/
            0,
            (unsigned int)"Data restored",
            v11,
            (unsigned int)"OK",
            0,
            1133903872,
            0,
            0,
            1065353216);
    sub_3C310(Block); /*0x25d488*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 1064LL))(v12); /*0x25d49a*/
    v13 = sub_3E4F0(v15, a2); /*0x25d4a3*/
    sub_3C310(v13); /*0x25d4ab*/
  }
  sub_3C310(a2); /*0x25d4b4*/
  return sub_3C310(a3); /*0x25d4c2*/
}

// [82/86] Address: 0x25d4f0
// Method: GameLevelManager::submitUserInfo
// Hidden C++ exception states: #wind=7
double __fastcall GameLevelManager_submitUserInfo(__int64 a1)
{
  __int64 v1; // r12
  unsigned __int64 v2; // r14
  __int64 v3; // rcx
  cocos2d::CCArray *v4; // r15
  unsigned int v5; // edi
  __int64 v6; // rsi
  struct cocos2d::CCObject *v7; // r14
  __int128 *v8; // rcx
  __int64 v9; // rbx
  cocos2d::CCString *v10; // rax
  char *CString; // rax
  size_t v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // edi
  const char *v17; // rbx
  cocos2d::CCString *v18; // rax
  const char *v19; // rax
  cocos2d::CCString *v20; // rax
  const char *v21; // rax
  __int64 v22; // r8
  __int128 *p_Src; // rdx
  size_t v24; // r8
  __int128 *v25; // rdx
  __int64 v27; // [rsp+20h] [rbp-E0h]
  __int64 v28; // [rsp+28h] [rbp-D8h]
  void *v30; // [rsp+50h] [rbp-B0h]
  void *v31; // [rsp+58h] [rbp-A8h]
  __int128 v32; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+70h] [rbp-90h]
  __int64 v34; // [rsp+78h] [rbp-88h]
  __int128 v35; // [rsp+80h] [rbp-80h] BYREF
  __int64 v36; // [rsp+90h] [rbp-70h]
  __int64 v37; // [rsp+98h] [rbp-68h]
  __int128 v38; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v39; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v40; // [rsp+C0h] [rbp-40h]
  __int128 v41; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v42; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v43; // [rsp+E0h] [rbp-20h]
  __int128 Src; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v45; // [rsp+F8h] [rbp-8h]
  __int64 v46; // [rsp+100h] [rbp+0h]
  _QWORD v47[4]; // [rsp+108h] [rbp+8h] BYREF

  v1 = a1; /*0x25d522*/
  Src = 0; /*0x25d530*/
  v45 = 0; /*0x25d534*/
  v2 = 15; /*0x25d538*/
  v46 = 15; /*0x25d53e*/
  LOBYTE(Src) = 0; /*0x25d542*/
  v3 = *(_QWORD *)&qword_905FB0; /*0x25d546*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x25d550*/
  {
    v31 = operator new(0x690u); /*0x25d55c*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v31); /*0x25d56a*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x25d57b*/
    v3 = *(_QWORD *)&qword_905FB0; /*0x25d57d*/
  }
  v4 = (cocos2d::CCArray *)sub_21C270(v3, 0); /*0x25d58b*/
  v5 = 0; /*0x25d58e*/
  v6 = -1; /*0x25d59a*/
  if ( cocos2d::CCArray::count(v4) ) /*0x25d594*/
  {
    do /*0x25d6b3*/
    {
      v7 = cocos2d::CCArray::objectAtIndex(v4, v5); /*0x25d5cb*/
      if ( v5 ) /*0x25d5d0*/
        sub_43D80(&Src, &unk_74CF98, 1u); /*0x25d5e3*/
      sub_3E4F0(&v38, (char *)v7 + 408); /*0x25d5f3*/
      v8 = &v38; /*0x25d5f8*/
      if ( v40 > 0xF ) /*0x25d601*/
        v8 = (__int128 *)v38; /*0x25d601*/
      v9 = -1; /*0x25d606*/
      do /*0x25d613*/
        ++v9; /*0x25d610*/
      while ( *((_BYTE *)v8 + v9) ); /*0x25d613*/
      sub_3C310(&v38); /*0x25d61d*/
      v10 = cocos2d::CCString::createWithFormat( /*0x25d677*/
              "%s,%i,%s,%i,%s,%i,%s,%i",
              (const char *)&word_708050,
              *((_DWORD *)v7 + 82) - *((_DWORD *)v7 + 83),
              (const char *)&word_708048,
              *((_DWORD *)v7 + 217) - *((_DWORD *)v7 + 218),
              (const char *)&word_708044,
              *((_DWORD *)v7 + 220) - *((_DWORD *)v7 + 221),
              (const char *)&word_70803C,
              v9);
      CString = (char *)cocos2d::CCString::getCString(v10); /*0x25d680*/
      v12 = -1; /*0x25d686*/
      do /*0x25d693*/
        ++v12; /*0x25d690*/
      while ( CString[v12] ); /*0x25d693*/
      sub_43D80(&Src, CString, v12); /*0x25d6a1*/
      ++v5; /*0x25d6a6*/
    }
    while ( v5 < cocos2d::CCArray::count(v4) ); /*0x25d6b3*/
    v2 = v46; /*0x25d6b9*/
    v1 = a1; /*0x25d6bd*/
  }
  v13 = qword_905FD0; /*0x25d6c5*/
  if ( !qword_905FD0 ) /*0x25d6cf*/
  {
    v30 = operator new(0x6E8u); /*0x25d6db*/
    qword_905FD0 = sub_2723A0(v30); /*0x25d6e9*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x25d6fa*/
    v13 = qword_905FD0; /*0x25d6fc*/
  }
  sub_3E4F0(v47, v13 + 624); /*0x25d70e*/
  v15 = GJAccountManager_sharedState(v14); /*0x25d714*/
  v16 = *(_DWORD *)(v15 + 360) - *(_DWORD *)(v15 + 364); /*0x25d71f*/
  v17 = (const char *)v47; /*0x25d725*/
  if ( v47[3] > 0xFu ) /*0x25d72e*/
    v17 = (const char *)v47[0]; /*0x25d72e*/
  LODWORD(v28) = 98; /*0x25d73f*/
  LODWORD(v27) = 103; /*0x25d747*/
  v18 = cocos2d::CCString::createWithFormat("%c%s%s%c%c%s", 87, "mfd", "2893", v27, v28, (const char *)&word_708030); /*0x25d769*/
  v19 = cocos2d::CCString::getCString(v18); /*0x25d772*/
  v20 = cocos2d::CCString::createWithFormat("udid=%s&accountID=%i&secret=%s", v17, v16, v19); /*0x25d788*/
  v21 = cocos2d::CCString::getCString(v20); /*0x25d791*/
  v41 = 0; /*0x25d79a*/
  v42 = 0; /*0x25d79e*/
  v43 = 0; /*0x25d7a2*/
  v22 = -1; /*0x25d7a6*/
  do /*0x25d7b3*/
    ++v22; /*0x25d7b0*/
  while ( v21[v22] ); /*0x25d7b3*/
  sub_3C230(&v41); /*0x25d7c1*/
  sub_43D80(&v41, "&levelsInfo=", 0xCu); /*0x25d7d8*/
  p_Src = &Src; /*0x25d7dd*/
  if ( v2 > 0xF ) /*0x25d7e5*/
    p_Src = (__int128 *)Src; /*0x25d7e5*/
  v24 = -1; /*0x25d7ea*/
  do /*0x25d7f3*/
    ++v24; /*0x25d7f0*/
  while ( *((_BYTE *)p_Src + v24) ); /*0x25d7f3*/
  sub_43D80(&v41, p_Src, v24); /*0x25d7fe*/
  v25 = &v41; /*0x25d803*/
  if ( v43 > 0xF ) /*0x25d80c*/
    v25 = (__int128 *)v41; /*0x25d80c*/
  v35 = 0; /*0x25d826*/
  v36 = 0; /*0x25d82a*/
  v37 = 15; /*0x25d82e*/
  LOBYTE(v35) = 0; /*0x25d836*/
  v38 = 0; /*0x25d83a*/
  v39 = 0; /*0x25d83e*/
  v40 = 0; /*0x25d842*/
  do /*0x25d849*/
    ++v6; /*0x25d846*/
  while ( *((_BYTE *)v25 + v6) ); /*0x25d849*/
  sub_3C230(&v38); /*0x25d856*/
  v32 = 0; /*0x25d85f*/
  *(_QWORD *)&v32 = sub_3C460(64); /*0x25d87b*/
  v33 = 55; /*0x25d880*/
  v34 = 63; /*0x25d889*/
  strcpy((char *)v32, "https://www.boomlings.com/database/submitGJUserInfo.php"); /*0x25d899*/
  sub_216210(v1, &v32, &v38, &v35, 18); /*0x25d8ef*/
  sub_3C310(&v41); /*0x25d8f9*/
  sub_3C310(v47); /*0x25d903*/
  return sub_3C310(&Src); /*0x25d912*/
}

// [83/86] Address: 0x296740
// Method: GameLevelManager::likeItem
// Hidden C++ exception states: #wind=2
__int64 __fastcall GameLevelManager_likeItem(__int64 a1, __int64 a2, bool a3, unsigned __int8 a4)
{
  bool v5; // r12
  __int64 v6; // r13
  int v8; // r14d
  unsigned int *v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // ecx
  unsigned int *v12; // rax
  unsigned int v13; // edi
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // esi
  __int64 v18; // rdi
  __int64 v19; // rsi
  unsigned __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r8
  __int128 v26; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v27; // [rsp+38h] [rbp-C8h]
  _BYTE v28[16]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v29[32]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v30[528]; // [rsp+70h] [rbp-90h] BYREF

  v5 = a3; /*0x296771*/
  v6 = a2; /*0x296775*/
  v27 = a2; /*0x296778*/
  *(_QWORD *)&v26 = a2; /*0x296780*/
  v8 = 0; /*0x296785*/
  if ( !a3 ) /*0x29678b*/
    v5 = *(_BYTE *)(a1 + 1046) != 0; /*0x296799*/
  fmt::BasicWriter<char>::BasicWriter<char>(v30); /*0x2967a2*/
  if ( v5 ) /*0x2967ac*/
  {
    v9 = *(unsigned int **)(a1 + 1104); /*0x2967b2*/
    if ( v9 ) /*0x2967bc*/
    {
      v10 = *v9; /*0x2967be*/
      v11 = v9[1]; /*0x2967c0*/
      if ( v11 == (_DWORD)v10 || !(_DWORD)v10 ) /*0x2967c9*/
        v10 = v11; /*0x2967cb*/
    }
    else
    {
      v10 = 0; /*0x2967cf*/
    }
    fmt::BasicWriter<char>::operator<<(v30, v10); /*0x2967d7*/
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 32LL) ) /*0x2967eb*/
    {
      *(_QWORD *)&v26 = "."; /*0x2967f5*/
      *((_QWORD *)&v26 + 1) = 0; /*0x2967fa*/
      fmt::BasicWriter<char>::operator<<(v30, &v26); /*0x296809*/
      fmt::BasicWriter<char>::operator<<(v30); /*0x296823*/
      fmt::BasicWriter<char>::operator<<(v30); /*0x29683d*/
      fmt::BasicWriter<char>::operator<<(v30); /*0x296857*/
      fmt::BasicWriter<char>::operator<<(v30, *(unsigned __int8 *)(*(_QWORD *)(a1 + 1104) + 28LL)); /*0x29686d*/
      fmt::BasicWriter<char>::operator<<(v30, *(unsigned __int8 *)(*(_QWORD *)(a1 + 1104) + 29LL)); /*0x296883*/
    }
    if ( *(_BYTE *)(a1 + 1046) ) /*0x296889*/
    {
      *(_QWORD *)&v26 = "d"; /*0x29689d*/
      *((_QWORD *)&v26 + 1) = 0; /*0x2968a2*/
      fmt::BasicWriter<char>::operator<<(v30, &v26); /*0x2968b1*/
    }
  }
  else
  {
    v12 = *(unsigned int **)(a1 + 1112); /*0x2968bc*/
    if ( v12 ) /*0x2968cd*/
    {
      v13 = *v12; /*0x2968d3*/
      if ( v12[1] == *v12 || !v13 ) /*0x2968de*/
        v13 = v12[1]; /*0x2968e0*/
      fmt::BasicWriter<char>::operator<<(v30, v13); /*0x2968e9*/
      if ( v13 == 1012 ) /*0x2968f5*/
      {
        *(_QWORD *)&v26 = "."; /*0x2968f7*/
        *((_QWORD *)&v26 + 1) = 0; /*0x2968fc*/
        fmt::BasicWriter<char>::operator<<(v30, &v26); /*0x29690b*/
        LOBYTE(v14) = 1; /*0x296915*/
        v15 = GameLevelManager_likeItem(a1, v29, v14, a4); /*0x296920*/
        v26 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v28, v15); /*0x296937*/
        fmt::BasicWriter<char>::operator<<(v30, &v26); /*0x296946*/
        sub_3C310(v29); /*0x296952*/
      }
    }
    else
    {
      fmt::BasicWriter<char>::operator<<(v30, 0); /*0x296960*/
    }
    v16 = *(_QWORD *)(a1 + 1112); /*0x296966*/
    if ( v16 && *(_BYTE *)(v16 + 32) ) /*0x296976*/
    {
      *(_QWORD *)&v26 = "."; /*0x296980*/
      *((_QWORD *)&v26 + 1) = 0; /*0x296985*/
      fmt::BasicWriter<char>::operator<<(v30, &v26); /*0x296994*/
      fmt::BasicWriter<char>::operator<<(v30); /*0x2969ae*/
      fmt::BasicWriter<char>::operator<<(v30); /*0x2969c8*/
      fmt::BasicWriter<char>::operator<<(v30); /*0x2969e2*/
      fmt::BasicWriter<char>::operator<<(v30, *(unsigned __int8 *)(*(_QWORD *)(a1 + 1112) + 28LL)); /*0x2969f8*/
      fmt::BasicWriter<char>::operator<<(v30, *(unsigned __int8 *)(*(_QWORD *)(a1 + 1112) + 29LL)); /*0x296a0e*/
    }
  }
  *(_QWORD *)&v26 = "."; /*0x296a14*/
  *((_QWORD *)&v26 + 1) = 0; /*0x296a19*/
  fmt::BasicWriter<char>::operator<<(v30, &v26); /*0x296a28*/
  if ( a4 ) /*0x296a31*/
  {
    v17 = 0; /*0x296a33*/
    if ( *(__int16 *)(a1 + 1192) > 0 ) /*0x296a3e*/
    {
      v18 = 0; /*0x296a44*/
      do /*0x296a8f*/
      {
        fmt::BasicWriter<char>::operator<<(v30, (unsigned int)*(__int16 *)(v18 + *(_QWORD *)(a1 + 1184))); /*0x296a60*/
        *(_QWORD *)&v26 = "."; /*0x296a66*/
        *((_QWORD *)&v26 + 1) = 0; /*0x296a6b*/
        fmt::BasicWriter<char>::operator<<(v30, &v26); /*0x296a7a*/
        ++v17; /*0x296a80*/
        v18 += 2; /*0x296a82*/
      }
      while ( v17 < *(__int16 *)(a1 + 1192) ); /*0x296a8f*/
    }
  }
  else if ( *(__int16 *)(a1 + 1176) > 0 ) /*0x296a9c*/
  {
    v19 = 0; /*0x296aa1*/
    v20 = 0; /*0x296aa4*/
    do /*0x296afb*/
    {
      if ( v20 <= 9 && (v21 = *(_QWORD *)(a1 + 1168)) != 0 ) /*0x296ab7*/
        v22 = (unsigned int)*(__int16 *)(v19 + v21); /*0x296ab9*/
      else
        v22 = 0; /*0x296abf*/
      fmt::BasicWriter<char>::operator<<(v30, v22); /*0x296ac7*/
      *(_QWORD *)&v26 = "."; /*0x296acd*/
      *((_QWORD *)&v26 + 1) = 0; /*0x296ad2*/
      fmt::BasicWriter<char>::operator<<(v30, &v26); /*0x296ae1*/
      ++v8; /*0x296ae7*/
      ++v20; /*0x296aea*/
      v19 += 2; /*0x296aed*/
    }
    while ( v8 < *(__int16 *)(a1 + 1176) ); /*0x296afb*/
    v6 = v27; /*0x296afd*/
  }
  *(_QWORD *)&v26 = "."; /*0x296b05*/
  *((_QWORD *)&v26 + 1) = 0; /*0x296b0a*/
  fmt::BasicWriter<char>::operator<<(v30, &v26); /*0x296b19*/
  fmt::BasicWriter<char>::operator<<(v30, v5); /*0x296b28*/
  v23 = fmt::BasicWriter<char>::c_str(v30); /*0x296b33*/
  *(_OWORD *)v6 = 0; /*0x296b3c*/
  *(_QWORD *)(v6 + 16) = 0; /*0x296b41*/
  *(_QWORD *)(v6 + 24) = 0; /*0x296b45*/
  v24 = -1; /*0x296b49*/
  do /*0x296b53*/
    ++v24; /*0x296b50*/
  while ( *(_BYTE *)(v23 + v24) ); /*0x296b53*/
  sub_3C230(v6); /*0x296b60*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v30); /*0x296b6b*/
  return v6; /*0x296b74*/
}

// [84/86] Address: 0x408bd0
// Method: GameLevelManager::getOnlineLevels
// Hidden C++ exception states: #wind=3
unsigned __int64 __fastcall GameLevelManager_getOnlineLevels(_QWORD *a1, __int64 a2)
{
  __int64 v4; // r8
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rsi
  _QWORD *v7; // r15
  char *v8; // rdi
  __int64 v9; // rax
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rax
  _QWORD *v12; // r12
  char *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // r15
  const char *v18; // rcx
  __int64 v19; // r8
  char *v20; // rcx
  unsigned __int64 v21; // rax
  _QWORD *v22; // rsi
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  char *v25; // rcx
  size_t v26; // rdi
  void **v27; // rcx
  void **v28; // rdx
  int v29; // [rsp+30h] [rbp-39h] BYREF
  char v30[16]; // [rsp+38h] [rbp-31h] BYREF
  char *String[2]; // [rsp+48h] [rbp-21h] BYREF
  __int128 v32; // [rsp+58h] [rbp-11h]
  void *Src[2]; // [rsp+68h] [rbp-1h] BYREF
  size_t Size; // [rsp+78h] [rbp+Fh]
  unsigned __int64 v35; // [rsp+80h] [rbp+17h]

  sub_6AB20(a2); /*0x408c03*/
  result = a1[2]; /*0x408c08*/
  if ( result ) /*0x408c0f*/
  {
    v6 = 0; /*0x408c15*/
    do /*0x408e77*/
    {
      v7 = a1; /*0x408c20*/
      if ( a1[3] > 0xFu ) /*0x408c28*/
        v7 = (_QWORD *)*a1; /*0x408c2a*/
      if ( v6 >= result /*0x408c54*/
        || (v8 = (char *)v7 + result,
            LOBYTE(v4) = 94,
            v9 = sub_6722F0((char *)v7 + v6, (char *)v7 + result, v4),
            (char *)v9 == v8)
        || (v10 = v9 - (_QWORD)v7, v9 - (_QWORD)v7 == -1) )
      {
        v10 = a1[2]; /*0x408c5c*/
        v11 = v10; /*0x408c60*/
      }
      else
      {
        v11 = a1[2]; /*0x408c56*/
      }
      v12 = a1; /*0x408c63*/
      if ( a1[3] > 0xFu ) /*0x408c6b*/
        v12 = (_QWORD *)*a1; /*0x408c6d*/
      if ( v6 < v11 ) /*0x408c73*/
      {
        v13 = (char *)v12 + v11; /*0x408c79*/
        LOBYTE(v4) = 126; /*0x408c81*/
        v14 = sub_6722F0((char *)v12 + v6, (char *)v12 + v11, v4); /*0x408c87*/
        if ( (char *)v14 != v13 ) /*0x408c92*/
        {
          v17 = v14 - (_QWORD)v12; /*0x408c98*/
          if ( v14 - (_QWORD)v12 != -1 && v17 < v10 ) /*0x408ca8*/
          {
            *(_OWORD *)String = 0; /*0x408cb1*/
            v32 = 0; /*0x408cb8*/
            if ( a1[2] < v6 ) /*0x408cc4*/
              sub_3E4D0(v16, v15); /*0x408ede*/
            sub_3C230(String); /*0x408cef*/
            v18 = (const char *)String; /*0x408cf4*/
            if ( *((_QWORD *)&v32 + 1) > 0xFu ) /*0x408cfd*/
              v18 = String[0]; /*0x408cfd*/
            v29 = atoi(v18); /*0x408d08*/
            if ( *((_QWORD *)&v32 + 1) > 0xFu ) /*0x408d13*/
            {
              v20 = String[0]; /*0x408d18*/
              if ( (unsigned __int64)(*((_QWORD *)&v32 + 1) + 1LL) >= 0x1000 ) /*0x408d26*/
              {
                v20 = (char *)*((_QWORD *)String[0] - 1); /*0x408d2c*/
                if ( (unsigned __int64)(String[0] - v20 - 8) > 0x1F ) /*0x408d3b*/
                  invoke_watson(0, 0, 0, 0, 0); /*0x408eb7*/
              }
              j_j_free(v20); /*0x408d41*/
            }
            v21 = v17 + 1; /*0x408d46*/
            v22 = a1; /*0x408d4a*/
            if ( a1[3] > 0xFu ) /*0x408d52*/
              v22 = (_QWORD *)*a1; /*0x408d54*/
            v23 = a1[2]; /*0x408d57*/
            if ( v21 < v23 ) /*0x408d5e*/
            {
              LOBYTE(v19) = 126; /*0x408d68*/
              sub_6722F0((char *)v22 + v21, (char *)v22 + v23, v19); /*0x408d6e*/
            }
            *(_OWORD *)String = 0; /*0x408d90*/
            v32 = 0; /*0x408d97*/
            v24 = a1[2]; /*0x408d9c*/
            if ( v24 < v17 + 1 ) /*0x408da3*/
              sub_3E4D0(v24, v17 + 1); /*0x408ed8*/
            sub_3C230(String); /*0x408dce*/
            sub_4085A0(Src, String); /*0x408ddc*/
            if ( *((_QWORD *)&v32 + 1) > 0xFu ) /*0x408dea*/
            {
              v25 = String[0]; /*0x408def*/
              if ( (unsigned __int64)(*((_QWORD *)&v32 + 1) + 1LL) >= 0x1000 ) /*0x408dfd*/
              {
                v25 = (char *)*((_QWORD *)String[0] - 1); /*0x408e03*/
                if ( (unsigned __int64)(String[0] - v25 - 8) > 0x1F ) /*0x408e12*/
                  invoke_watson(0, 0, 0, 0, 0); /*0x408ed1*/
              }
              j_j_free(v25); /*0x408e18*/
            }
            if ( v29 > 0 ) /*0x408e21*/
            {
              v26 = Size; /*0x408e23*/
              if ( Size ) /*0x408e2a*/
              {
                v27 = (void **)(*(_QWORD *)sub_66BC0(a2, v30, &v29) + 24LL); /*0x408e3f*/
                if ( v27 != Src ) /*0x408e4a*/
                {
                  v28 = Src; /*0x408e4c*/
                  if ( v35 > 0xF ) /*0x408e55*/
                    v28 = (void **)Src[0]; /*0x408e55*/
                  sub_3F5A0(v27, v28, v26); /*0x408e5d*/
                }
              }
            }
            sub_3C310(Src); /*0x408e67*/
          }
        }
      }
      v6 = v10 + 1; /*0x408e6c*/
      result = a1[2]; /*0x408e70*/
    }
    while ( v10 + 1 < result ); /*0x408e77*/
  }
  return result; /*0x408e7d*/
}

// [85/86] Address: 0x5429c0
// Method: GameLevelManager::uploadLevelList
double __fastcall GameLevelManager_uploadLevelList(__int64 a1, __int64 a2)
{
  bool v4; // zf
  __int16 *v5; // rbx
  __int16 *v6; // rax
  __int16 *v7; // rax
  __int16 *v8; // rax
  __int16 *v9; // rax
  __int16 *v10; // rax
  __int16 *v11; // rax
  __int16 *v12; // rax
  __int16 *v13; // rax
  __int16 *v14; // rax
  __int16 *v15; // rax
  __int16 *v16; // rax
  __int16 *v17; // rax
  __int16 *v18; // rax
  __int16 *v19; // rax
  __int16 *v20; // rax
  __int16 *v21; // rax
  __int16 *v22; // rax
  __int16 *v23; // rax
  __int16 *v24; // rax
  __int16 *v25; // rax
  __int16 *v26; // rax
  __int16 *v27; // rax
  __int16 *v28; // rax
  __int16 *v29; // rax
  __int16 *v30; // rax
  __int16 *v31; // rax
  __int16 *v32; // rax
  __int16 *v33; // rax
  __int16 *v34; // rax
  __int16 *v35; // rax
  __int16 *v36; // rax
  __int16 *v37; // rax
  __int16 *v38; // rax
  __int16 *v39; // rax
  __int16 *v40; // rax
  __int16 *v41; // rax
  __int16 *v42; // rax
  __int16 *v43; // rax
  __int128 v45... [52214 chars total]

// [86/86] Address: 0x65f5a0
// Method: GameLevelManager::updateLevelOrders
// Hidden C++ exception states: #wind=1
void __fastcall GameLevelManager_updateLevelOrders(__int64 *a1)
{
  char *v2; // rdi
  size_t v3; // rbx
  unsigned __int64 v4; // rbp
  const char *v5; // rsi
  char *v6; // rdx
  const char *v7; // rcx
  size_t v8; // r14
  size_t v9; // r8
  char *v10; // rdx
  __int64 v11; // rbx
  cocos2d::CCSpriteFrameCache *v12; // rax
  struct cocos2d::CCSpriteFrame *v13; // rax
  char *v14; // rax
  __int128 v15; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+40h] [rbp-38h]
  __int64 v17; // [rsp+48h] [rbp-30h]

  v15 = 0; /*0x65f5cd*/
  v2 = (char *)sub_3C460(32); /*0x65f5dc*/
  *(_QWORD *)&v15 = v2; /*0x65f5df*/
  v3 = 26; /*0x65f5e4*/
  v16 = 26; /*0x65f5e9*/
  v4 = 31; /*0x65f5ee*/
  v17 = 31; /*0x65f5f3*/
  strcpy(v2, "edit_eStopMoverBtn_001.png"); /*0x65f5ff*/
  if ( *((_DWORD *)a1 + 472) == 1 ) /*0x65f628*/
  {
    v16 = 22; /*0x65f653*/
    memmove(v2, "edit_ePauseBtn_001.png", 0x16u); /*0x65f66c*/
    v2[22] = 0; /*0x65f671*/
  }
  else
  {
    if ( *((_DWORD *)a1 + 472) != 2 ) /*0x65f62d*/
      goto LABEL_6; /*0x65f62d*/
    v16 = 23; /*0x65f62f*/
    memmove(v2, "edit_eResumeBtn_001.png", 0x17u); /*0x65f648*/
    v2[23] = 0; /*0x65f64d*/
  }
  v2 = (char *)v15; /*0x65f675*/
  v3 = v16; /*0x65f67a*/
  v4 = v17; /*0x65f67f*/
LABEL_6:
  v5 = (const char *)(a1 + 232); /*0x65f684*/
  v6 = (char *)&v15; /*0x65f68b*/
  if ( v4 > 0xF ) /*0x65f694*/
    v6 = v2; /*0x65f694*/
  v7 = (const char *)(a1 + 232); /*0x65f698*/
  if ( (unsigned __int64)a1[235] > 0xF ) /*0x65f6a0*/
    v7 = *(const char **)v5; /*0x65f6a2*/
  v8 = a1[234]; /*0x65f6a5*/
  v9 = v8; /*0x65f6a9*/
  if ( v3 < v8 ) /*0x65f6af*/
    v9 = v3; /*0x65f6af*/
  if ( memcmp(v7, v6, v9) || v8 < v3 || v8 > v3 ) /*0x65f6c1*/
  {
    if ( v5 != (const char *)&v15 ) /*0x65f6cb*/
    {
      v10 = (char *)&v15; /*0x65f6cd*/
      if ( v4 > 0xF ) /*0x65f6d6*/
        v10 = v2; /*0x65f6d6*/
      sub_3F5A0(a1 + 232, v10, v3); /*0x65f6e0*/
      v4 = v17; /*0x65f6e5*/
      v2 = (char *)v15; /*0x65f6ea*/
    }
    if ( (unsigned __int64)a1[235] > 0xF ) /*0x65f6f4*/
      v5 = *(const char **)v5; /*0x65f6f6*/
    v11 = *a1; /*0x65f6f9*/
    v12 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x65f6fc*/
    v13 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v12, v5); /*0x65f708*/
    (*(void (__fastcall **)(__int64 *, struct cocos2d::CCSpriteFrame *))(v11 + 1008))(a1, v13); /*0x65f714*/
  }
  if ( v4 > 0xF ) /*0x65f71f*/
  {
    v14 = v2; /*0x65f725*/
    if ( v4 + 1 >= 0x1000 ) /*0x65f72f*/
    {
      v2 = (char *)*((_QWORD *)v2 - 1); /*0x65f735*/
      if ( (unsigned __int64)(v14 - v2 - 8) > 0x1F ) /*0x65f744*/
        invoke_watson(0, 0, 0, 0, 0); /*0x65f759*/
    }
    j_j_free(v2); /*0x65f763*/
  }
}
