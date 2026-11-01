#include <Geode/binding/SpriteAnimationManager.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/6] Address: 0x54d30
// Method: SpriteAnimationManager::executeAnimation
// Hidden C++ exception states: #wind=6
double __fastcall SpriteAnimationManager_executeAnimation(__int64 a1, void **a2)
{
  char v4; // r15
  __int64 v5; // rcx
  const void *v6; // rcx
  size_t v7; // rbx
  size_t v8; // r8
  __int64 i; // rdx
  int *v10; // r8
  void **v11; // r9
  _QWORD *v12; // rdx
  size_t v13; // r8
  _BYTE *v14; // rdi
  __int64 v15; // rbx
  void **v16; // rdx
  int **v17; // r12
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r8
  void **v22; // rcx
  char *v23; // rbx
  size_t v24; // r8
  char v25; // bl
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rbx
  int v29; // r11d
  unsigned __int64 v30; // r13
  char *v31; // rdi
  void **v32; // r10
  int v33; // r9d
  int v34; // r8d
  __int64 v35; // rdx
  unsigned __int8 v36; // cl
  __int64 v37; // rax
  int v38; // r10d
  int v39; // eax
  unsigned int v40; // ecx
  char *v41; // rax
  __int64 v42; // rax
  int *v43; // rdx
  int *v44; // rcx
  signed __int64 v45; // rcx
  unsigned __int64 v46; // rdx
  __int64 v47; // rbx
  char *v48; // rdi
  const void *v49; // rdx
  signed __int64 v50; // rbx
  _QWORD *v51; // rax
  _QWORD *v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rcx
  int v56; // eax
  void *v57; // r8
  void **v58; // rdx
  __int64 v59; // rax
  void **v60; // rdx
  __int64 v61; // r8
  __int64 v62; // rax
  __int64 v63; // r8
  void **v64; // rcx
  char *v65; // rdi
  size_t v66; // r8
  int v67; // ebx
  __int64 v68; // rcx
  float v69; // xmm6_4
  float v70; // xmm0_4
  __int64 v71; // rbx
  void *Buf1[2]; // [rsp+40h] [rbp-79h] BYREF
  char *v74; // [rsp+50h] [rbp-69h]
  unsigned __int64 v75; // [rsp+58h] [rbp-61h]
  __int128 Buf2; // [rsp+60h] [rbp-59h] BYREF
  __int64 v77; // [rsp+70h] [rbp-49h]
  __int64 v78; // [rsp+78h] [rbp-41h]
  void *Src[2]; // [rsp+80h] [rbp-39h] BYREF
  size_t Size; // [rsp+90h] [rbp-29h]
  unsigned __int64 v81; // [rsp+98h] [rbp-21h]
  void *Block[2]; // [rsp+A0h] [rbp-19h] BYREF
  __int128 v83; // [rsp+B0h] [rbp-9h]

  v4 = 0; /*0x54d70*/
  v5 = *(_QWORD *)(a1 + 624); /*0x54d78*/
  if ( v5 ) /*0x54d82*/
  {
    *(_DWORD *)(v5 + 528) = *(_DWORD *)(a1 + 732); /*0x54d98*/
  }
  else if ( !*(_QWORD *)(a1 + 640) ) /*0x54d84*/
  {
    return sub_3C310(a2); /*0x54d8b*/
  }
  Buf2 = 0; /*0x54da1*/
  v77 = 0; /*0x54da5*/
  v78 = 15; /*0x54da9*/
  LOBYTE(Buf2) = 0; /*0x54db1*/
  v6 = a2; /*0x54db5*/
  if ( (unsigned __int64)a2[3] > 0xF ) /*0x54dbd*/
    v6 = *a2; /*0x54dbf*/
  v7 = (size_t)a2[2]; /*0x54dc2*/
  v8 = v7; /*0x54dc6*/
  if ( v7 ) /*0x54dcc*/
    v8 = 0; /*0x54dcc*/
  if ( memcmp(v6, &Buf2, v8) || v7 ) /*0x54de0*/
  {
    v14 = (_BYTE *)(a1 + 633); /*0x54e1e*/
    if ( *(_BYTE *)(a1 + 633) ) /*0x54e25*/
    {
      v15 = (unsigned int)sub_52CE0(a2); /*0x54e36*/
      *(_OWORD *)Src = 0; /*0x54e3b*/
      Size = 0; /*0x54e3f*/
      v81 = 15; /*0x54e43*/
      LOBYTE(Src[0]) = 0; /*0x54e4b*/
      sub_58940(Src); /*0x54e5a*/
      if ( (int)v15 > 0 ) /*0x54e61*/
      {
        do /*0x54e7d*/
        {
          sub_43D80(Src, &dword_7080B8, 3u); /*0x54e74*/
          --v15; /*0x54e79*/
        }
        while ( v15 ); /*0x54e7d*/
      }
      if ( a2 != Src ) /*0x54e86*/
      {
        v16 = Src; /*0x54e88*/
        if ( v81 > 0xF ) /*0x54e91*/
          v16 = (void **)Src[0]; /*0x54e91*/
        sub_3F5A0(a2, v16, Size); /*0x54e9d*/
      }
      sub_3C310(Src); /*0x54ea7*/
    }
  }
  else
  {
    v12 = (_QWORD *)(a1 + 432); /*0x54de2*/
    if ( *(_QWORD *)(a1 + 456) > 0xFu ) /*0x54dee*/
      v12 = (_QWORD *)*v12; /*0x54df0*/
    v13 = -1; /*0x54df3*/
    do /*0x54e03*/
      ++v13; /*0x54e00*/
    while ( *((_BYTE *)v12 + v13) ); /*0x54e03*/
    sub_3F5A0(a2, v12, v13); /*0x54e0d*/
    v14 = (_BYTE *)(a1 + 633); /*0x54e12*/
  }
  v17 = (int **)(a1 + 536); /*0x54eac*/
  v18 = *(_QWORD *)(a1 + 536); /*0x54eb3*/
  if ( v18 != *(_QWORD *)(a1 + 544) ) /*0x54ebc*/
    *(_QWORD *)(a1 + 544) = v18; /*0x54ebe*/
  v19 = *(_QWORD *)(a1 + 560); /*0x54ec3*/
  if ( v19 ) /*0x54ecd*/
  {
    LOBYTE(i) = 1; /*0x54ed2*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 576LL))(v19, i); /*0x54ed4*/
  }
  if ( *(int *)(a1 + 528) <= 0 || *v14 ) /*0x54ee7*/
    goto LABEL_39; /*0x54ee7*/
  Buf2 = 0; /*0x54ef3*/
  v77 = 0; /*0x54ef7*/
  v78 = 15; /*0x54efb*/
  LOBYTE(Buf2) = 0; /*0x54f03*/
  v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 600) + 600LL) + 8LL))(*(_QWORD *)(a1 + 600) + 600LL); /*0x54f20*/
  *(_OWORD *)Buf1 = 0; /*0x54f26*/
  v74 = 0; /*0x54f2a*/
  v75 = 0; /*0x54f2e*/
  v21 = -1; /*0x54f32*/
  do /*0x54f43*/
    ++v21; /*0x54f40*/
  while ( *(_BYTE *)(v20 + v21) ); /*0x54f43*/
  sub_3C230(Buf1); /*0x54f51*/
  v4 = 3; /*0x54f56*/
  v22 = Buf1; /*0x54f5c*/
  if ( v75 > 0xF ) /*0x54f65*/
    v22 = (void **)Buf1[0]; /*0x54f65*/
  v23 = v74; /*0x54f6a*/
  v24 = (size_t)v74; /*0x54f6e*/
  if ( v74 ) /*0x54f74*/
    v24 = 0; /*0x54f74*/
  if ( !memcmp(v22, &Buf2, v24) && !v23 ) /*0x54f88*/
LABEL_39:
    v25 = 0; /*0x54f8e*/
  else
    v25 = 1; /*0x54f8a*/
  if ( (v4 & 2) != 0 ) /*0x54f94*/
  {
    v4 &= ~2u; /*0x54f96*/
    sub_3C310(Buf1); /*0x54f9e*/
  }
  if ( (v4 & 1) != 0 ) /*0x54fa8*/
    sub_3C310(&Buf2); /*0x54fae*/
  if ( v25 ) /*0x54fbf*/
  {
    sub_7E840(a2, a1 + 536, *(unsigned int *)(a1 + 528)); /*0x54fd2*/
    v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 600) + 600LL) + 8LL))(*(_QWORD *)(a1 + 600) + 600LL); /*0x54fe8*/
    *(_OWORD *)Block = 0; /*0x54fee*/
    v83 = 0; /*0x54ff5*/
    v27 = -1; /*0x54ffa*/
    do /*0x55004*/
      ++v27; /*0x55001*/
    while ( *(_BYTE *)(v26 + v27) ); /*0x55004*/
    sub_3C230(Block); /*0x55012*/
    v28 = *(_QWORD *)(a1 + 600); /*0x55017*/
    v29 = *(_DWORD *)(v28 + 760); /*0x55023*/
    v30 = *((_QWORD *)&v83 + 1); /*0x5502a*/
    v31 = (char *)Block[0]; /*0x5502e*/
    if ( v29 >= 0 ) /*0x55035*/
    {
      v32 = Block; /*0x5503b*/
      if ( *((_QWORD *)&v83 + 1) > 0xFu ) /*0x55043*/
        v32 = (void **)Block[0]; /*0x55043*/
      v33 = 0; /*0x55047*/
      v34 = 0; /*0x5504a*/
      if ( v29 > 0 ) /*0x55054*/
      {
        v35 = 0; /*0x55059*/
        while ( 1 ) /*0x55060*/
        {
          if ( v35 >= (int)v83 ) /*0x55063*/
            goto LABEL_61; /*0x55063*/
          v36 = *((_BYTE *)v32 + v35); /*0x55065*/
          if ( v36 < 0x80u ) /*0x5506d*/
            break; /*0x5506d*/
          if ( (v36 & 0xE0) == 0xC0 ) /*0x55076*/
          {
            v37 = 2; /*0x55078*/
          }
          else if ( (v36 & 0xF0) == 0xE0 ) /*0x55086*/
          {
            v37 = 3; /*0x55088*/
          }
          else
          {
            v37 = 4; /*0x55095*/
            if ( (v36 & 0xF8) != 0xF0 ) /*0x5509a*/
              break; /*0x5509a*/
          }
LABEL_60:
          v33 += v37; /*0x550a1*/
          v35 += v37; /*0x550a7*/
          if ( ++v34 >= v29 ) /*0x550b0*/
            goto LABEL_61; /*0x550b0*/
        }
        v37 = 1; /*0x5509c*/
        goto LABEL_60; /*0x5509c*/
      }
LABEL_61:
      v38 = v83; /*0x550b7*/
      if ( v33 < (int)v83 ) /*0x550bd*/
        v38 = v33; /*0x550bd*/
      v11 = 0; /*0x550c1*/
      v10 = *v17; /*0x550c4*/
      i = (*(_QWORD *)(a1 + 544) - *(_QWORD *)(a1 + 536)) / 24LL; /*0x550e8*/
      if ( i ) /*0x550eb*/
      {
        while ( v38 <= *v10 || v38 >= v10[2] + *v10 ) /*0x550ff*/
        {
          v11 = (void **)((char *)v11 + 1); /*0x55101*/
          v10 += 6; /*0x55104*/
          if ( (unsigned __int64)v11 >= i ) /*0x5510b*/
            goto LABEL_67; /*0x5510b*/
        }
      }
      else
      {
LABEL_67:
        v10 = 0; /*0x5510d*/
      }
      if ( v10 ) /*0x55113*/
      {
        v39 = *v10 + v10[2]; /*0x55119*/
        v11 = Block; /*0x5511c*/
        if ( *((_QWORD *)&v83 + 1) > 0xFu ) /*0x55124*/
          v11 = (void **)Block[0]; /*0x55124*/
        if ( v39 > (int)v83 ) /*0x5512b*/
          v39 = v83; /*0x5512b*/
        v10 = 0; /*0x5512f*/
        if ( v39 > 0 ) /*0x55137*/
        {
          for ( i = 0; i < v39; ++i ) /*0x55139*/
          {
            v40 = (_DWORD)v10 + 1; /*0x55147*/
            if ( (*((_BYTE *)v11 + i) & 0xC0) == 0x80 ) /*0x5514b*/
              v40 = (unsigned int)v10; /*0x5514d*/
            v10 = (int *)v40; /*0x55151*/
          }
        }
        *(_DWORD *)(v28 + 760) = (_DWORD)v10; /*0x5515c*/
      }
    }
    if ( v30 > 0xF ) /*0x55171*/
    {
      v41 = v31; /*0x55177*/
      if ( v30 + 1 >= 0x1000 ) /*0x55181*/
      {
        v31 = (char *)*((_QWORD *)v31 - 1); /*0x55187*/
        if ( (unsigned __int64)(v41 - v31 - 8) > 0x1F ) /*0x55196*/
          goto LABEL_96; /*0x55196*/
      }
      j_j_free(v31); /*0x5519f*/
    }
  }
  v42 = *(_QWORD *)(a1 + 624); /*0x551a7*/
  if ( v42 ) /*0x551b1*/
  {
    v43 = *v17; /*0x551b7*/
    v44 = *(int **)(a1 + 544); /*0x551bb*/
    if ( *v17 != v44 ) /*0x551c3*/
    {
      *(_OWORD *)Buf1 = 0; /*0x551cc*/
      v74 = 0; /*0x551d1*/
      v45 = (char *)v44 - (char *)v43; /*0x551d5*/
      v46 = v45 / 24; /*0x551e9*/
      if ( v45 / 24 ) /*0x551e9*/
      {
        if ( v46 > 0xAAAAAAAAAAAAAAALL ) /*0x551fb*/
          sub_59000(v45, v46, v10, v11); /*0x555a8*/
        v47 = 24 * v46; /*0x55205*/
        v48 = (char *)sub_3C460(24 * v46); /*0x55215*/
        Buf1[0] = v48; /*0x55218*/
        v74 = &v48[v47]; /*0x55220*/
        v49 = *(const void **)(a1 + 536); /*0x55224*/
        v50 = *(_QWORD *)(a1 + 544) - (_QWORD)v49; /*0x55232*/
        memmove(v48, v49, v50); /*0x5523b*/
        Buf1[1] = &v48[24 * (v50 / 24)]; /*0x5525c*/
      }
      v51 = (_QWORD *)sub_7EE30(&Buf2); /*0x5526e*/
      v52 = v51; /*0x55273*/
      if ( v51[3] > 0xFu ) /*0x5527b*/
        v52 = (_QWORD *)*v51; /*0x5527d*/
      (**(void (__fastcall ***)(__int64, _QWORD *))(*(_QWORD *)(a1 + 624) + 360LL))(*(_QWORD *)(a1 + 624) + 360LL, v52); /*0x55291*/
      sub_3C310(&Buf2); /*0x55298*/
      sub_555B0(a1, v53); /*0x552a0*/
      if ( !*(_QWORD *)(a1 + 560) ) /*0x552a5*/
      {
        *(_QWORD *)(a1 + 560) = cocos2d::CCNode::create(v55, v54); /*0x552b5*/
        v56 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 624) + 96LL))(*(_QWORD *)(a1 + 624)); /*0x552c6*/
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 456LL))( /*0x552da*/
          a1,
          *(_QWORD *)(a1 + 560),
          (unsigned int)(v56 + 1));
      }
      sub_7EFD0(*(_QWORD *)(a1 + 624), *(_QWORD *)(a1 + 560), Buf1); /*0x552f5*/
      v57 = Buf1[0]; /*0x552fb*/
      if ( !Buf1[0] ) /*0x55302*/
        goto LABEL_110; /*0x55302*/
      if ( (unsigned __int64)(24 * ((v74 - (char *)Buf1[0]) / 24)) < 0x1000 /*0x5534a*/
        || (v57 = (void *)*((_QWORD *)Buf1[0] - 1), (unsigned __int64)((char *)Buf1[0] - (char *)v57 - 8) <= 0x1F) )
      {
        j_j_free(v57); /*0x5534f*/
        goto LABEL_110; /*0x55354*/
      }
LABEL_96:
      invoke_watson(0, 0, 0, 0, 0); /*0x5535c*/
    }
    v58 = a2; /*0x55372*/
    if ( (unsigned __int64)a2[3] > 0xF ) /*0x5537a*/
      v58 = (void **)*a2; /*0x5537c*/
    (**(void (__fastcall ***)(__int64, void **))(v42 + 360))(v42 + 360, v58); /*0x55389*/
  }
  else if ( *(_QWORD *)(a1 + 640) ) /*0x55390*/
  {
    if ( *(_QWORD *)(a1 + 664) || *(float *)(a1 + 676) <= 0.0 ) /*0x553b6*/
    {
      v60 = a2; /*0x553f9*/
      if ( (unsigned __int64)a2[3] > 0xF ) /*0x55401*/
        v60 = (void **)*a2; /*0x55403*/
      Buf2 = 0; /*0x55409*/
      v77 = 0; /*0x5540d*/
      v78 = 0; /*0x55411*/
      v61 = -1; /*0x55415*/
      do /*0x55423*/
        ++v61; /*0x55420*/
      while ( *((_BYTE *)v60 + v61) ); /*0x55423*/
      sub_3C230(&Buf2); /*0x5542e*/
      TextArea_setString(*(__int64 **)(a1 + 640), (const void **)&Buf2); /*0x5543e*/
    }
    else
    {
      v59 = sub_3E4F0(&Buf2, a2); /*0x553bf*/
      PlayLayer_updateProgressbar( /*0x553f2*/
        *(_QWORD *)(a1 + 640),
        v59,
        *(float *)(a1 + 680),
        COERCE_DOUBLE((unsigned __int64)*(_DWORD *)(a1 + 676)),
        0.5,
        0.0);
    }
  }
  sub_555B0(a1, i); /*0x55446*/
LABEL_110:
  Buf2 = 0; /*0x5544b*/
  v77 = 0; /*0x55452*/
  v78 = 15; /*0x55456*/
  LOBYTE(Buf2) = 0; /*0x5545e*/
  v62 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 600) + 600LL) + 8LL))(*(_QWORD *)(a1 + 600) + 600LL); /*0x55473*/
  *(_OWORD *)Buf1 = 0; /*0x55479*/
  v74 = 0; /*0x5547d*/
  v75 = 0; /*0x55481*/
  v63 = -1; /*0x55485*/
  do /*0x55493*/
    ++v63; /*0x55490*/
  while ( *(_BYTE *)(v62 + v63) ); /*0x55493*/
  sub_3C230(Buf1); /*0x554a1*/
  v64 = Buf1; /*0x554a6*/
  if ( v75 > 0xF ) /*0x554af*/
    v64 = (void **)Buf1[0]; /*0x554af*/
  v65 = v74; /*0x554b4*/
  v66 = (size_t)v74; /*0x554b8*/
  if ( v74 ) /*0x554be*/
    v66 = 0; /*0x554be*/
  v67 = memcmp(v64, &Buf2, v66); /*0x554cb*/
  if ( !v67 ) /*0x554cf*/
    v67 = v65 != 0; /*0x554d7*/
  sub_3C310(Buf1); /*0x554de*/
  if ( !v67 ) /*0x554e6*/
    *(_DWORD *)(*(_QWORD *)(a1 + 600) + 760LL) = -1; /*0x554ef*/
  if ( *(_QWORD *)(a1 + 664) ) /*0x554f9*/
  {
    v68 = *(_QWORD *)(a1 + 640); /*0x55503*/
    if ( v68 ) /*0x5550d*/
    {
      v69 = (float)*(int *)(v68 + 688) + *(float *)(v68 + 664); /*0x5551a*/
      v70 = (*(float (__fastcall **)(__int64))(*(_QWORD *)v68 + 168LL))(v68); /*0x55525*/
      v71 = *(_QWORD *)(a1 + 664); /*0x55537*/
      *(float *)(v71 + 432) = (float)(v70 * v69) + 4.0; /*0x5553e*/
      sub_7FF60(v71); /*0x55549*/
      sub_801A0(); /*0x5554e*/
      sub_7FFD0(v71); /*0x55556*/
    }
  }
  CustomSFXWidget_init(a1, *(unsigned int *)(*(_QWORD *)(a1 + 600) + 760LL)); /*0x5556b*/
  return sub_3C310(a2); /*0x55579*/
}

// [2/6] Address: 0x85c10
// Method: SpriteAnimationManager::runAnimation
// Hidden C++ exception states: #wind=1
double __fastcall SpriteAnimationManager_runAnimation(__int64 a1, void *a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rax
  int Prio; // r14d
  _QWORD *v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  __int128 v13; // [rsp+28h] [rbp-60h] BYREF
  __int64 v14; // [rsp+38h] [rbp-50h]
  __int64 v15; // [rsp+40h] [rbp-48h]
  void *v16; // [rsp+48h] [rbp-40h]

  v16 = a2; /*0x85c35*/
  v4 = (_QWORD *)(a1 + 408); /*0x85c3a*/
  if ( (unsigned int)sub_3C160((void *)(a1 + 408), a2) ) /*0x85c44*/
  {
    v5 = sub_3E4F0(&v13, a2); /*0x85c59*/
    Prio = SpriteAnimationManager_getPrio(a1, v5); /*0x85c69*/
    v7 = v4; /*0x85c6c*/
    if ( v4[3] > 0xFu ) /*0x85c74*/
      v7 = (_QWORD *)*v4; /*0x85c76*/
    v13 = 0; /*0x85c7c*/
    v14 = 0; /*0x85c84*/
    v15 = 0; /*0x85c89*/
    v8 = -1; /*0x85c8e*/
    v9 = -1; /*0x85c95*/
    do /*0x85ca3*/
      ++v9; /*0x85ca0*/
    while ( *((_BYTE *)v7 + v9) ); /*0x85ca3*/
    sub_3C230(&v13); /*0x85cae*/
    if ( Prio > (int)SpriteAnimationManager_getPrio(a1, &v13) ) /*0x85cc3*/
    {
      v11 = sub_3E4F0(&v13, a2); /*0x85d29*/
      SpriteAnimationManager_queueAnimation(a1, v11); /*0x85d34*/
    }
    else
    {
      if ( v4[3] > 0xFu ) /*0x85cca*/
        v4 = (_QWORD *)*v4; /*0x85ccc*/
      v13 = 0; /*0x85cd2*/
      v14 = 0; /*0x85cd7*/
      v15 = 0; /*0x85cdc*/
      do /*0x85ce4*/
        ++v8; /*0x85ce1*/
      while ( *((_BYTE *)v4 + v8) ); /*0x85ce4*/
      sub_3C230(&v13); /*0x85cf5*/
      SpriteAnimationManager_queueAnimation(a1, &v13); /*0x85d02*/
      v10 = sub_3E4F0(&v13, a2); /*0x85d0f*/
      sub_85D70(a1, v10); /*0x85d1a*/
    }
  }
  return sub_3C310(a2); /*0x85d42*/
}

// [3/6] Address: 0x86360
// Method: SpriteAnimationManager::queueAnimation
// Hidden C++ exception states: #wind=1
double __fastcall SpriteAnimationManager_queueAnimation(__int64 a1, size_t *a2)
{
  __int64 v4; // rax
  int Prio; // ebp
  size_t *v6; // rdi
  size_t v7; // rdx
  __int64 v8; // r8
  void *v9; // rdx
  __int128 v11; // [rsp+28h] [rbp-50h] BYREF
  __int64 v12; // [rsp+38h] [rbp-40h]
  __int64 v13; // [rsp+40h] [rbp-38h]
  size_t *v14; // [rsp+48h] [rbp-30h]

  v14 = a2; /*0x86381*/
  v4 = sub_3E4F0(&v11, a2); /*0x8638b*/
  Prio = SpriteAnimationManager_getPrio(a1, v4); /*0x8639b*/
  v6 = (size_t *)(a1 + 352); /*0x8639d*/
  v7 = a1 + 352; /*0x863a4*/
  if ( *(_QWORD *)(a1 + 376) > 0xFu ) /*0x863ac*/
    v7 = *v6; /*0x863ae*/
  v11 = 0; /*0x863b4*/
  v12 = 0; /*0x863bb*/
  v13 = 0; /*0x863c0*/
  v8 = -1; /*0x863c5*/
  do /*0x863d3*/
    ++v8; /*0x863d0*/
  while ( *(_BYTE *)(v7 + v8) ); /*0x863d3*/
  sub_3C230(&v11); /*0x863de*/
  if ( Prio <= (int)SpriteAnimationManager_getPrio(a1, &v11) && v6 != a2 ) /*0x863f7*/
  {
    v9 = a2; /*0x863f9*/
    if ( a2[3] > 0xF ) /*0x86401*/
      v9 = (void *)*a2; /*0x86403*/
    sub_3F5A0((void *)(a1 + 352), v9, a2[2]); /*0x8640d*/
  }
  return sub_3C310(a2); /*0x8641b*/
}

// [4/6] Address: 0x86490
// Method: SpriteAnimationManager::callAnimationFinished
// Hidden C++ exception states: #wind=3
double __fastcall SpriteAnimationManager_callAnimationFinished(__int64 a1)
{
  const void *v2; // rcx
  unsigned __int64 v3; // rbx
  size_t v4; // r8
  int v5; // eax
  __int64 v6; // rdx
  _QWORD *v7; // rdx
  __int128 Buf2; // [rsp+20h] [rbp-58h] BYREF
  __int64 v10; // [rsp+30h] [rbp-48h]
  __int64 v11; // [rsp+38h] [rbp-40h]
  _QWORD v12[4]; // [rsp+40h] [rbp-38h] BYREF

  v10 = 8; /*0x864b9*/
  v11 = 15; /*0x864be*/
  Buf2 = 0x646573755F746F6EuLL; /*0x864d1*/
  v2 = (const void *)(a1 + 408); /*0x864db*/
  if ( *(_QWORD *)(a1 + 432) > 0xFu ) /*0x864ea*/
    v2 = *(const void **)(a1 + 408); /*0x864ec*/
  v3 = *(_QWORD *)(a1 + 424); /*0x864f3*/
  v4 = v3; /*0x864fa*/
  if ( v3 > 8 ) /*0x86501*/
    v4 = 8; /*0x86501*/
  v5 = memcmp(v2, &Buf2, v4); /*0x8650a*/
  if ( !v5 ) /*0x86511*/
  {
    if ( v3 >= 8 ) /*0x86517*/
      v5 = v3 > 8; /*0x86526*/
    else
      v5 = -1; /*0x86519*/
  }
  v6 = 440; /*0x86529*/
  if ( v5 ) /*0x86535*/
    v6 = 408; /*0x86535*/
  sub_3E4F0(v12, a1 + v6); /*0x86540*/
  v7 = v12; /*0x86546*/
  if ( v12[3] > 0xFu ) /*0x86551*/
    v7 = (_QWORD *)v12[0]; /*0x86551*/
  (*(void (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(a1 + 320) + 1088LL))(*(_QWORD *)(a1 + 320), v7); /*0x86561*/
  return sub_3C310(v12); /*0x86572*/
}

// [5/6] Address: 0x86590
// Method: SpriteAnimationManager::getPrio
// Hidden C++ exception states: #wind=1
__int64 __fastcall SpriteAnimationManager_getPrio(__int64 a1, __int64 a2)
{
  cocos2d::CCString *v3; // rax
  unsigned int v5; // ebx

  v3 = (cocos2d::CCString *)cocos2d::CCDictionary::objectForKey(*(_QWORD *)(a1 + 328), a2); /*0x865b8*/
  if ( v3 ) /*0x865c1*/
  {
    v5 = cocos2d::CCString::intValue(v3); /*0x865db*/
    sub_3C310(a2); /*0x865e0*/
    return v5; /*0x865e5*/
  }
  else
  {
    sub_3C310(a2); /*0x865c6*/
    return 99; /*0x865cb*/
  }
}

// [6/6] Address: 0x11d5f0
// Method: SpriteAnimationManager::animationFinished
__int64 __fastcall SpriteAnimationManager_animationFinished(_QWORD *a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx
  __int64 v4; // rdx

  cocos2d::CCNode::unschedule(a1, sub_11CCE0); /*0x11d604*/
  v2 = (_QWORD *)a1[126]; /*0x11d60a*/
  v3 = (_QWORD *)a1[127]; /*0x11d611*/
  if ( v2 ) /*0x11d61b*/
  {
    v2[76] = 0; /*0x11d61d*/
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v2 + 1032LL))(v2, 0); /*0x11d62d*/
  }
  if ( v3 ) /*0x11d636*/
  {
    v3[76] = 0; /*0x11d638*/
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v3 + 1032LL))(v3, 0); /*0x11d64b*/
  }
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 992LL))(a1, 0); /*0x11d659*/
  LOBYTE(v4) = 1; /*0x11d662*/
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 520LL))(a1, v4);
}
