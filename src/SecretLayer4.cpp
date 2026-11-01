#include <Geode/binding/SecretLayer4.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/8] Address: 0x20d3b0
// Method: SecretLayer4::onSubmit
// Hidden C++ exception states: #wind=10
void __fastcall SecretLayer4_onSubmit(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // r8
  void **v5; // rax
  char v6; // bl
  void *v7; // rcx
  void *v8; // rcx
  _OWORD *v9; // rcx
  __int128 *v10; // r14
  unsigned __int64 v11; // xmm1_8
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rsi
  _BYTE *v14; // rax
  __int64 v15; // r13
  __int64 v16; // rbx
  void *v17; // r8
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  void *v23; // rcx
  cocos2d::CCString *v24; // rax
  const char *CString; // rax
  cocos2d::CCString *v26; // rax
  char *v27; // rax
  size_t v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int128 *v32; // r15
  __int64 v33; // rbx
  __int128 v34; // xmm0
  void **v35; // rdx
  void *v36; // rcx
  _QWORD *v37; // rdx
  __int64 v38; // rdi
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rdx
  char *v42; // rax
  void *Src[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v44; // [rsp+50h] [rbp-B0h]
  void **v45; // [rsp+60h] [rbp-A0h]
  void *Block[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v47; // [rsp+78h] [rbp-88h]
  unsigned __int64 v48; // [rsp+80h] [rbp-80h]
  __int64 v49; // [rsp+88h] [rbp-78h]
  __int128 v50; // [rsp+90h] [rbp-70h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-60h]
  __int64 v52; // [rsp+A8h] [rbp-58h]
  void *v53[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v54; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v55; // [rsp+C8h] [rbp-38h]
  void *v56[2]; // [rsp+D0h] [rbp-30h] BYREF
  size_t Size[2]; // [rsp+E0h] [rbp-20h]
  _QWORD v58[4]; // [rsp+F0h] [rbp-10h] BYREF
  _OWORD v59[2]; // [rsp+110h] [rbp+10h] BYREF

  v49 = a1; /*0x20d3e2*/
  LODWORD(v45) = 0; /*0x20d3e9*/
  v1 = *(_QWORD *)(a1 + 880); /*0x20d3ee*/
  v2 = -1; /*0x20d3f5*/
  if ( v1 ) /*0x20d3ff*/
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v1 + 600) + 600LL) + 8LL))(*(_QWORD *)(v1 + 600) + 600LL); /*0x20d412*/
    *(_OWORD *)v53 = 0; /*0x20d418*/
    v54 = 0; /*0x20d41c*/
    v55 = 0; /*0x20d420*/
    v4 = -1; /*0x20d424*/
    do /*0x20d42a*/
      ++v4; /*0x20d427*/
    while ( *(_BYTE *)(v3 + v4) ); /*0x20d42a*/
    sub_3C230(v53); /*0x20d437*/
    v5 = v53; /*0x20d43c*/
    v6 = 5; /*0x20d440*/
  }
  else
  {
    *(_OWORD *)Block = 0; /*0x20d44a*/
    v47 = 0; /*0x20d44f*/
    v48 = 15; /*0x20d454*/
    LOBYTE(Block[0]) = 0; /*0x20d45c*/
    v5 = Block; /*0x20d461*/
    v6 = 2; /*0x20d466*/
  }
  *(_OWORD *)Src = *(_OWORD *)v5; /*0x20d46e*/
  v59[0] = *(_OWORD *)Src; /*0x20d473*/
  *(_OWORD *)v56 = *((_OWORD *)v5 + 1); /*0x20d47b*/
  v59[1] = *(_OWORD *)v56; /*0x20d47f*/
  v5[2] = 0; /*0x20d483*/
  v5[3] = &loc_D + 2; /*0x20d487*/
  *(_BYTE *)v5 = 0; /*0x20d48f*/
  if ( (v6 & 2) != 0 ) /*0x20d495*/
  {
    v6 &= ~2u; /*0x20d497*/
    if ( v48 > 0xF ) /*0x20d4a2*/
    {
      v7 = Block[0]; /*0x20d4a7*/
      if ( v48 + 1 >= 0x1000 ) /*0x20d4b6*/
      {
        v7 = (void *)*((_QWORD *)Block[0] - 1); /*0x20d4bc*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v7 - 8) > 0x1F ) /*0x20d4cb*/
          invoke_watson(0, 0, 0, 0, 0); /*0x20d4dc*/
      }
      j_j_free(v7); /*0x20d4e3*/
    }
  }
  if ( (v6 & 1) != 0 && v55 > 0xF ) /*0x20d4f6*/
  {
    v8 = v53[0]; /*0x20d4fb*/
    if ( v55 + 1 >= 0x1000 ) /*0x20d509*/
    {
      v8 = (void *)*((_QWORD *)v53[0] - 1); /*0x20d50f*/
      if ( (unsigned __int64)((char *)v53[0] - (char *)v8 - 8) > 0x1F ) /*0x20d51e*/
        invoke_watson(0, 0, 0, 0, 0); /*0x20d52f*/
    }
    j_j_free(v8); /*0x20d536*/
  }
  v9 = v59; /*0x20d53b*/
  v10 = (__int128 *)Src[0]; /*0x20d53f*/
  v11 = (unsigned __int64)v56[0]; /*0x20d544*/
  v12 = _mm_srli_si128(*(__m128i *)v56, 8).m128i_u64[0]; /*0x20d551*/
  if ( v12 > 0xF ) /*0x20d55a*/
    v9 = Src[0]; /*0x20d55a*/
  v13 = (unsigned __int64)v56[0]; /*0x20d55e*/
  if ( v56[0] ) /*0x20d566*/
  {
    v14 = v9; /*0x20d570*/
    if ( v9 < (_OWORD *)((char *)v56[0] + (unsigned __int64)v9) ) /*0x20d576*/
    {
      while ( *v14 == 32 ) /*0x20d583*/
      {
        if ( ++v14 >= (char *)v56[0] + (unsigned __int64)v9 ) /*0x20d58b*/
          goto LABEL_68; /*0x20d58b*/
      }
      if ( v14 - (_BYTE *)v9 != -1 ) /*0x20d599*/
      {
        v15 = *(_QWORD *)&qword_905FB0; /*0x20d59f*/
        if ( !*(_QWORD *)&qword_905FB0 ) /*0x20d5a9*/
        {
          v45 = (void **)operator new(0x690u); /*0x20d5b5*/
          *(_QWORD *)&qword_905FB0 = sub_214250(v45); /*0x20d5c3*/
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x20d5d4*/
          v15 = *(_QWORD *)&qword_905FB0; /*0x20d5d6*/
        }
        if ( v11 ) /*0x20d5e0*/
        {
          *(_OWORD *)v53 = 0; /*0x20d5e9*/
          v54 = 0; /*0x20d5ed*/
          v55 = 0; /*0x20d5f1*/
          sub_3C230(v53); /*0x20d606*/
          v16 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(v15 + 1200), v53); /*0x20d61d*/
          if ( v55 > 0xF ) /*0x20d628*/
          {
            v17 = v53[0]; /*0x20d62d*/
            if ( v55 + 1 >= 0x1000 ) /*0x20d63b*/
            {
              v17 = (void *)*((_QWORD *)v53[0] - 1); /*0x20d641*/
              if ( (unsigned __int64)((char *)v53[0] - (char *)v17 - 8) > 0x1F ) /*0x20d650*/
                invoke_watson(0, 0, 0, 0, 0); /*0x20d661*/
            }
            j_j_free(v17); /*0x20d66b*/
          }
          if ( !v16 ) /*0x20d673*/
          {
            *(_OWORD *)v53 = 0; /*0x20d67c*/
            v54 = 0; /*0x20d680*/
            v55 = 0; /*0x20d684*/
            sub_3C230(v53); /*0x20d699*/
            v18 = *(_QWORD *)(v15 + 1200); /*0x20d69f*/
            v21 = cocos2d::CCNode::create(v20, v19); /*0x20d6a6*/
            cocos2d::CCDictionary::setObject(v18, v21, v53); /*0x20d6b6*/
            if ( v55 > 0xF ) /*0x20d6c5*/
            {
              v23 = v53[0]; /*0x20d6ca*/
              if ( v55 + 1 >= 0x1000 ) /*0x20d6d8*/
              {
                v23 = (void *)*((_QWORD *)v53[0] - 1); /*0x20d6de*/
                if ( (unsigned __int64)((char *)v53[0] - (char *)v23 - 8) > 0x1F ) /*0x20d6ed*/
                  invoke_watson(0, 0, 0, 0, 0); /*0x20d6fe*/
              }
              j_j_free(v23); /*0x20d705*/
            }
            GameLevelManager_getBasePostString(v22, v58); /*0x20d70e*/
            v24 = cocos2d::CCString::createWithFormat( /*0x20d74a*/
                    "%c%s%s%c%c%s",
                    87,
                    "mfd",
                    "2893",
                    103,
                    98,
                    (const char *)&word_708030);
            CString = cocos2d::CCString::getCString(v24); /*0x20d753*/
            v26 = cocos2d::CCString::createWithFormat("&secret=%s&str=", CString); /*0x20d763*/
            v27 = (char *)cocos2d::CCString::getCString(v26); /*0x20d76c*/
            v28 = -1; /*0x20d772*/
            do /*0x20d778*/
              ++v28; /*0x20d775*/
            while ( v27[v28] ); /*0x20d778*/
            sub_43D80(v58, v27, v28); /*0x20d786*/
            *(_OWORD *)Src = 0; /*0x20d78e*/
            v44 = 0u; /*0x20d793*/
            v32 = v59; /*0x20d79d*/
            if ( v12 > 0xF ) /*0x20d7a5*/
              v32 = v10; /*0x20d7a5*/
            v33 = 0x7FFFFFFFFFFFFFFFLL; /*0x20d7a9*/
            if ( v11 > 0x7FFFFFFFFFFFFFFFLL ) /*0x20d7b6*/
              sub_8D90(v30, v29, v31); /*0x20dad7*/
            if ( v11 > 0xF ) /*0x20d7c0*/
            {
              if ( (v11 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x20d7e5*/
              {
                v33 = v13 | 0xF; /*0x20d7e7*/
                if ( (v11 | 0xF) < 0x16 ) /*0x20d7f2*/
                  v33 = 22; /*0x20d7f2*/
              }
              Src[0] = (void *)sub_3C460(v33 + 1); /*0x20d7ff*/
              *(_QWORD *)&v44 = v11; /*0x20d804*/
              *((_QWORD *)&v44 + 1) = v33; /*0x20d809*/
              memcpy(Src[0], v32, v11 + 1); /*0x20d818*/
              v13 = v11; /*0x20d81d*/
              v34 = *(_OWORD *)Src; /*0x20d822*/
            }
            else
            {
              *(_QWORD *)&v44 = v11; /*0x20d7c2*/
              *((_QWORD *)&v44 + 1) = 15; /*0x20d7c7*/
              v34 = *v32; /*0x20d7d0*/
              *(_OWORD *)Src = *v32; /*0x20d7d4*/
            }
            v45 = Src; /*0x20d82c*/
            if ( v13 ) /*0x20d834*/
            {
              cocos2d::ZipUtils::base64URLEncode(v56, Src); /*0x20d86e*/
            }
            else
            {
              *(_OWORD *)v56 = v34; /*0x20d836*/
              *(_OWORD *)Size = v44; /*0x20d83f*/
              *(_QWORD *)&v44 = 0; /*0x20d846*/
              *((_QWORD *)&v44 + 1) = 15; /*0x20d84b*/
              LOBYTE(Src[0]) = 0; /*0x20d854*/
            }
            sub_3C310(Src); /*0x20d85e*/
            v35 = v56; /*0x20d882*/
            if ( Size[1] > 0xF ) /*0x20d88b*/
              v35 = (void **)v56[0]; /*0x20d88b*/
            sub_43D80(v58, v35, Size[0]); /*0x20d898*/
            if ( Size[1] > 0xF ) /*0x20d8a6*/
            {
              v36 = v56[0]; /*0x20d8ab*/
              if ( Size[1] + 1 >= 0x1000 ) /*0x20d8b9*/
              {
                v36 = (void *)*((_QWORD *)v56[0] - 1); /*0x20d8bf*/
                if ( (unsigned __int64)((char *)v56[0] - (char *)v36 - 8) > 0x1F ) /*0x20d8ce*/
                  invoke_watson(0, 0, 0, 0, 0); /*0x20d8df*/
              }
              j_j_free(v36); /*0x20d8e6*/
            }
            v45 = v53; /*0x20d8ef*/
            v56[0] = &v50; /*0x20d8f8*/
            *(_OWORD *)v53 = 0; /*0x20d8ff*/
            v54 = 0; /*0x20d903*/
            v55 = 0; /*0x20d907*/
            sub_3C230(v53); /*0x20d91c*/
            v37 = v58; /*0x20d922*/
            if ( v58[3] > 0xFu ) /*0x20d92b*/
              v37 = (_QWORD *)v58[0]; /*0x20d92b*/
            v50 = 0; /*0x20d933*/
            v51 = 0; /*0x20d937*/
            v52 = 0; /*0x20d93b*/
            do /*0x20d943*/
              ++v2; /*0x20d940*/
            while ( *((_BYTE *)v37 + v2) ); /*0x20d943*/
            sub_3C230(&v50); /*0x20d950*/
            *(_OWORD *)Block = 0; /*0x20d959*/
            v47 = 0; /*0x20d95e*/
            v48 = 0; /*0x20d963*/
            Block[0] = (void *)sub_3C460(64); /*0x20d974*/
            v47 = 54; /*0x20d979*/
            v48 = 63; /*0x20d982*/
            strcpy((char *)Block[0], "https://www.boomlings.com/database/getGJUserSearch.php"); /*0x20d991*/
            sub_216210(v15, Block, &v50, v53, 96); /*0x20d9dc*/
            sub_3C310(v58); /*0x20d9e6*/
            v38 = v49; /*0x20d9eb*/
            v39 = v49 + 696; /*0x20d9ef*/
            v40 = *(_QWORD *)&qword_905FB0; /*0x20d9f6*/
            if ( !*(_QWORD *)&qword_905FB0 ) /*0x20da00*/
            {
              Src[0] = operator new(0x690u); /*0x20da0c*/
              *(_QWORD *)&qword_905FB0 = sub_214250(Src[0]); /*0x20da1a*/
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x20da2b*/
              v40 = *(_QWORD *)&qword_905FB0; /*0x20da2d*/
            }
            *(_QWORD *)(v40 + 1496) = v39; /*0x20da34*/
            (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v38 + 792) + 336LL))(*(_QWORD *)(v38 + 792), 0); /*0x20da47*/
            LOBYTE(v41) = 1; /*0x20da57*/
            (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v38 + 808) + 336LL))(*(_QWORD *)(v38 + 808), v41); /*0x20da59*/
          }
        }
      }
    }
  }
LABEL_68:
  if ( v12 > 0xF ) /*0x20da64*/
  {
    v42 = (char *)v10; /*0x20da6b*/
    if ( v12 + 1 >= 0x1000 ) /*0x20da75*/
    {
      v10 = (__int128 *)*((_QWORD *)v10 - 1); /*0x20da7b*/
      if ( (unsigned __int64)(v42 - (char *)v10 - 8) > 0x1F ) /*0x20da8a*/
        invoke_watson(0, 0, 0, 0, 0); /*0x20da9b*/
    }
    j_j_free(v10); /*0x20daa5*/
  }
}

// [2/8] Address: 0x577d00
// Method: SecretLayer4::textInputOpened
void __fastcall SecretLayer4_textInputOpened(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  void **v5; // rcx
  char *v6; // rbx
  unsigned __int64 v7; // rdi
  size_t v8; // r8
  char *v9; // rax
  __int128 Buf2; // [rsp+30h] [rbp-68h] BYREF
  __int64 v11; // [rsp+40h] [rbp-58h]
  __int64 v12; // [rsp+48h] [rbp-50h]
  void *Buf1[2]; // [rsp+58h] [rbp-40h] BYREF
  size_t v14; // [rsp+68h] [rbp-30h]
  unsigned __int64 v15; // [rsp+70h] [rbp-28h]

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a2 + 600) + 600LL) + 8LL))(*(_QWORD *)(a2 + 600) + 600LL); /*0x577d36*/
  *(_OWORD *)Buf1 = 0; /*0x577d3c*/
  v14 = 0; /*0x577d41*/
  v15 = 0; /*0x577d46*/
  v4 = -1; /*0x577d4b*/
  do /*0x577d55*/
    ++v4; /*0x577d52*/
  while ( *(_BYTE *)(v3 + v4) ); /*0x577d55*/
  sub_3C230(Buf1); /*0x577d63*/
  Buf2 = 0; /*0x577d6c*/
  v11 = 0; /*0x577d71*/
  v12 = 15; /*0x577d76*/
  LOBYTE(Buf2) = 0; /*0x577d7f*/
  v5 = Buf1; /*0x577d84*/
  v6 = (char *)Buf1[0]; /*0x577d89*/
  v7 = v15; /*0x577d8e*/
  if ( v15 > 0xF ) /*0x577d97*/
    v5 = (void **)Buf1[0]; /*0x577d97*/
  v8 = v14; /*0x577d9b*/
  if ( v14 ) /*0x577da3*/
    v8 = 0; /*0x577da3*/
  if ( !memcmp(v5, &Buf2, v8) && !v14 ) /*0x577dbb*/
  {
    Buf2 = 0; /*0x577dc0*/
    v11 = 1; /*0x577dc5*/
    v12 = 15; /*0x577dce*/
    LOWORD(Buf2) = 32; /*0x577dd7*/
    SpriteAnimationManager_executeAnimation(*(_QWORD *)(a1 + 48), &Buf2); /*0x577de7*/
  }
  if ( v7 > 0xF ) /*0x577df1*/
  {
    v9 = v6; /*0x577df7*/
    if ( v7 + 1 >= 0x1000 ) /*0x577e01*/
    {
      v6 = (char *)*((_QWORD *)v6 - 1); /*0x577e07*/
      if ( (unsigned __int64)(v9 - v6 - 8) > 0x1F ) /*0x577e16*/
        invoke_watson(0, 0, 0, 0, 0); /*0x577e27*/
    }
    j_j_free(v6); /*0x577e31*/
  }
}

// [3/8] Address: 0x577e60
// Method: SecretLayer4::textChanged
void __fastcall SecretLayer4_textChanged(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  void **v5; // rdx
  void *v6; // rcx
  void *Block[2]; // [rsp+38h] [rbp-30h] BYREF
  __int128 v8; // [rsp+48h] [rbp-20h]

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a2 + 600) + 600LL) + 8LL))(*(_QWORD *)(a2 + 600) + 600LL); /*0x577e89*/
  *(_OWORD *)Block = 0; /*0x577e8f*/
  v8 = 0; /*0x577e97*/
  v4 = -1; /*0x577e9d*/
  do /*0x577ea7*/
    ++v4; /*0x577ea4*/
  while ( *(_BYTE *)(v3 + v4) ); /*0x577ea7*/
  sub_3C230(Block); /*0x577eb6*/
  v5 = Block; /*0x577ebc*/
  if ( *((_QWORD *)&v8 + 1) > 0xFu ) /*0x577ec7*/
    v5 = (void **)Block[0]; /*0x577ec7*/
  sub_577F40(a1 - 408, v5); /*0x577ed4*/
  if ( *((_QWORD *)&v8 + 1) > 0xFu ) /*0x577ee3*/
  {
    v6 = Block[0]; /*0x577ee8*/
    if ( (unsigned __int64)(*((_QWORD *)&v8 + 1) + 1LL) >= 0x1000 ) /*0x577ef7*/
    {
      v6 = (void *)*((_QWORD *)Block[0] - 1); /*0x577efd*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v6 - 8) > 0x1F ) /*0x577f0c*/
        invoke_watson(0, 0, 0, 0, 0); /*0x577f21*/
    }
    j_j_free(v6); /*0x577f28*/
  }
}

// [4/8] Address: 0x579660
// Method: SecretLayer4::getErrorMessage
// Hidden C++ exception states: #wind=4
__int64 __fastcall SecretLayer4_getErrorMessage(__int64 a1, __int64 a2)
{
  int *v3; // rdi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rax
  char v8; // cl
  char *v9; // rax
  char *v10; // rax
  char *v11; // rax
  __int64 v12; // rdx
  const char *v13; // rdx
  cocos2d::CCString *v14; // rax
  const char *CString; // rax
  __int64 v16; // r8
  char *v17; // rax
  char *v18; // rax
  char *v19; // rax
  char *v20; // rax
  char *v21; // rax
  char *v22; // rax
  char *v23; // rax
  char *v24; // rax
  char *v25; // rax
  char *v26; // rax
  __int64 v27; // rdx
  const char *v28; // rdx
  cocos2d::CCString *v29; // rax
  const char *v30; // rax
  __int64 v31; // r8
  char *v32; // rax
  char *v33; // rax
  char *v34; // rax
  char *v35; // rax
  __int64 v36; // rdx
  const char *v37; // rdx
  cocos2d::CCString *v38; // rax
  const char *v39; // rax
  __int64 v40; // r8
  void *v42; // [rsp+20h] [rbp-48h]
  void *v43; // [rsp+20h] [rbp-48h]
  void *v44; // [rsp+20h] [rbp-48h]
  _QWORD v45[3]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v46; // [rsp+48h] [rbp-20h]

  v3 = (int *)(a1 + 452); /*0x579688*/
  v4 = *(_DWORD *)(a1 + 452); /*0x57968f*/
  if ( v4 >= 0 ) /*0x579693*/
  {
    v6 = v4 + 1; /*0x5796be*/
  }
  else
  {
    v5 = rand(); /*0x579695*/
    v6 = (int)roundf((float)((float)v5 / 32767.0) * 30.0); /*0x5796b8*/
  }
  *v3 = v6; /*0x5796c5*/
  if ( v6 < 30 ) /*0x5796ca*/
  {
    if ( (unsigned int)v6 > 0x1E ) /*0x57970e*/
    {
      *(_OWORD *)a2 = 0; /*0x57a15e*/
      *(_QWORD *)(a2 + 16) = 0; /*0x57a161*/
      *(_QWORD *)(a2 + 24) = 0; /*0x57a165*/
      v7 = sub_3C460(32); /*0x57a16e*/
      *(_QWORD *)a2 = v7; /*0x57a173*/
      *(_QWORD *)(a2 + 16) = 17; /*0x57a176*/
      *(_QWORD *)(a2 + 24) = 31; /*0x57a17e*/
      *(_OWORD *)v7 = xmmword_7D9200; /*0x57a18d*/
      v8 = 33; /*0x57a190*/
LABEL_57:
      *(_BYTE *)(v7 + 16) = v8; /*0x57a197*/
      *(_BYTE *)(v7 + 17) = 0; /*0x57a19a*/
    }
    else
    {
      switch ( v6 ) /*0x579727*/
      {
        case 0: /*0x579727*/
          goto LABEL_6;
        case 1: /*0x579727*/
          *(_OWORD *)a2 = 0; /*0x57972c*/
          *(_QWORD *)(a2 + 16) = 0; /*0x57972f*/
          *(_QWORD *)(a2 + 24) = 0; /*0x579733*/
          v7 = sub_3C460(32); /*0x57973c*/
          *(_QWORD *)a2 = v7; /*0x579741*/
          *(_QWORD *)(a2 + 16) = 17; /*0x579744*/
          *(_QWORD *)(a2 + 24) = 31; /*0x57974c*/
          *(_OWORD *)v7 = xmmword_7DB308; /*0x57975b*/
          v8 = 33; /*0x57975e*/
          goto LABEL_57; /*0x579765*/
        case 2: /*0x579727*/
          *(_OWORD *)a2 = 0; /*0x57976d*/
          *(_QWORD *)(a2 + 16) = 0; /*0x579770*/
          *(_QWORD *)(a2 + 24) = 0; /*0x579774*/
          v9 = (char *)sub_3C460(32); /*0x57977d*/
          *(_QWORD *)a2 = v9; /*0x579785*/
          *(_QWORD *)(a2 + 16) = 27; /*0x579788*/
          *(_QWORD *)(a2 + 24) = 31; /*0x579790*/
          strcpy(v9, "I told you, it wont work..."); /*0x57979f*/
          return a2; /*0x5797c8*/
        case 3: /*0x579727*/
          *(_OWORD *)a2 = 0; /*0x5797d0*/
          *(_QWORD *)(a2 + 16) = 0; /*0x5797d3*/
          *(_QWORD *)(a2 + 24) = 0; /*0x5797d7*/
          v10 = (char *)sub_3C460(48); /*0x5797e0*/
          *(_QWORD *)a2 = v10; /*0x5797e8*/
          *(_QWORD *)(a2 + 16) = 39; /*0x5797eb*/
          *(_QWORD *)(a2 + 24) = 47; /*0x5797f3*/
          strcpy(v10, "Door is now open. Oh wait, no it's not."); /*0x579802*/
          return a2; /*0x579832*/
        case 4: /*0x579727*/
          *(_OWORD *)a2 = 0; /*0x57983a*/
          *(_QWORD *)(a2 + 16) = 0; /*0x57983d*/
          *(_QWORD *)(a2 + 24) = 0; /*0x579841*/
          v11 = (char *)sub_3C460(32); /*0x57984a*/
          *(_QWORD *)a2 = v11; /*0x57984f*/
          *(_QWORD *)(a2 + 16) = 28; /*0x579852*/
          *(_QWORD *)(a2 + 24) = 31; /*0x57985a*/
          strcpy(v11, "Is that actually your guess?"); /*0x579869*/
          return a2; /*0x579886*/
        case 5: /*0x579727*/
          v12 = qword_905FD0; /*0x57988b*/
          if ( !qword_905FD0 ) /*0x579895*/
          {
            v42 = operator new(0x6E8u); /*0x5798a1*/
            qword_905FD0 = sub_2723A0(v42); /*0x5798af*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x5798c0*/
            v12 = qword_905FD0; /*0x5798c2*/
          }
          sub_3E4F0(v45, v12 + 656); /*0x5798d5*/
          v13 = (const char *)v45; /*0x5798db*/
          if ( v46 > 0xF ) /*0x5798e6*/
            v13 = (const char *)v45[0]; /*0x5798e6*/
          v14 = cocos2d::CCString::createWithFormat("Go home %s.", v13); /*0x5798f3*/
          CString = cocos2d::CCString::getCString(v14); /*0x5798fc*/
          *(_OWORD *)a2 = 0; /*0x579905*/
          *(_QWORD *)(a2 + 16) = 0; /*0x579908*/
          *(_QWORD *)(a2 + 24) = 0; /*0x57990c*/
          v16 = -1; /*0x579910*/
          do /*0x579923*/
            ++v16; /*0x579920*/
          while ( CString[v16] ); /*0x579923*/
          goto LABEL_55; /*0x579928*/
        case 6: /*0x579727*/
          *(_OWORD *)a2 = 0; /*0x579948*/
          *(_QWORD *)(a2 + 16) = 4; /*0x57994b*/
          *(_QWORD *)(a2 + 24) = 15; /*0x579953*/
          strcpy((char *)a2, "Nope"); /*0x579961*/
          return a2; /*0x579967*/
        case 7: /*0x579727*/
          *(_OWORD *)a2 = 0; /*0x57996f*/
          *(_QWORD *)(a2 + 16) = 15; /*0x579972*/
          *(_QWORD *)(a2 + 24) = 15; /*0x57997a*/
          strcpy((char *)a2, "Give up, please"); /*0x57998a*/
          return a2; /*0x5799b0*/
        case 8: /*0x579727*/
          *(_OWORD *)a2 = 0; /*0x5799b8*/
          *(_QWORD *)(a2 + 16) = 0; /*0x5799bb*/
          *(_QWORD *)(a2 + 24) = 0; /*0x5799bf*/
          v17 = (char *)sub_3C460(32); /*0x5799c8*/
          *(_QWORD *)a2 = v17; /*0x5799cd*/
          *(_QWORD *)(a2 + 16) = 20; /*0x5799d0*/
          *(_QWORD *)(a2 + 24) = 31; /*0x5799d8*/
          strcpy(v17, "Door is still locked"); /*0x5799e7*/
          return a2; /*0x5799f7*/
        case 9: /*0x579727*/
          *(_OWORD *)a2 = 0; /*0x5799ff*/
          *(_QWORD *)(a2 + 16) = 13; /*0x579a02*/
          *(_QWORD *)(a2 + 24) = 15; /*0x579a0a*/
          strcpy((char *)a2, "That tickles!"); /*0x579a1a*/
          return a2; /*0x579a35*/
        case 10: /*0x579727*/
          *(_OWORD *)a2 = 0; /*0x579a3d*/
          *(_QWORD *)(a2 + 16) = 0; /*0x579a40*/
          *(_QWORD *)(a2 + 24) = 0; /*0x579a44*/
          v7 = sub_3C460(32); /*0x579a4d*/
          *(_QWORD *)a2 = v7; /*0x579a52*/
          *(_QWORD *)(a2 + 16) = 17; /*0x579a55*/
          *(_QWORD *)(a2 + 24) = 31; /*0x579a5d*/
          *(_OWORD *)v7 = xmmword_7DB7C0; /*0x579a6c*/
          v8 = 101; /*0x579a6f*/
          goto LABEL_57; /*0x579a76*/
        case 11: /*0x579727*/
          *(_OWORD *)a2 = 0; /*0x579a7e*/
          *(_QWORD *)(a2 + 16) = 0; /*0x579a81*/
          *(_QWORD *)(a2 + 24) = 0; /*0x579a85*/
          v18 = (char *)sub_3C460(32); /*0x579a8e*/
          *(_QWORD *)a2 = v18; /*0x579a93*/
          *(_QWORD *)(a2 + 16) = 19; /*0x579a96*/
          *(_QWORD *)(a2 + 24) = 31; /*0x579a9e*/
          strcpy(v18, "Don't make me angry"); /*0x579aad*/
          return a2; /*0x579ac9*/
        case 12: /*0x579727*/
          *(_OWORD *)a2 = 0; /*0x579ad1*/
          *(_QWORD *)(a2 + 16) = 0; /*0x579ad4*/
          *(_QWORD *)(a2 + 24) = 0; /*0x579ad8*/
          v19 = (char *)sub_3C460(48); /*0x579ae1*/
          *(_QWORD *)a2 = v19; /*0x579ae6*/
          *(_QWORD *)(a2 + 16) = 34; /*0x579ae9*/
          *(_QWORD *)(a2 + 24) = 47; /*0x579af1*/
          strcpy(v19, "You won't like me when im angry..."); /*0x579b00*/
          return a2; /*0x579b1d*/
        case 13: /*0x579727*/
          *(_OWORD *)a2 = 0; /*0x579b25*/
          *(_QWORD *)(a2 + 16) = 0; /*0x579b28*/
          *(_QWORD *)(a2 + 24) = 0; /*0x579b2c*/
          v20 = (char *)sub_3C460(48); /*0x579b35*/
          *(_QWORD *)a2 = v20; /*0x579b3d*/
          *(_QWORD *)(a2 + 16) = 35; /*0x579b40*/
          *(_QWORD *)(a2 + 24) = 47; /*0x579b48*/
          strcpy(v20, "Oh no, you just unlocked... NOTHING"); /*0x579b57*/
          return a2; /*0x579b7e*/
        case 14: /*0x579727*/
          *(_OWORD *)a2 = 0; /*0x579b86*/
          *(_QWORD *)(a2 + 16) = 0; /*0x579b89*/
          *(_QWORD *)(a2 + 24) = 0; /*0x579b8d*/
          v21 = (char *)sub_3C460(32); /*0x579b96*/
          *(_QWORD *)a2 = v21; /*0x579b9b*/
          *(_QWORD *)(a2 + 16) = 21; /*0x579b9e*/
          *(_QWORD *)(a2 + 24) = 31; /*0x579ba6*/
          strcpy(v21, "Only 3 attempts left!"); /*0x579bb5*/
          return a2; /*0x579bcf*/
        case 15: /*0x579727*/
          *(_OWORD *)a2 = 0; /*0x579bd7*/
          *(_QWORD *)(a2 + 16) = 0; /*0x579bda*/
          *(_QWORD *)(a2 + 24) = 0; /*0x579bde*/
          v22 = (char *)sub_3C460(32); /*0x579be7*/
          *(_QWORD *)a2 = v22; /*0x579bec*/
          *(_QWORD *)(a2 + 16) = 21; /*0x579bef*/
          *(_QWORD *)(a2 + 24) = 31; /*0x579bf7*/
          strcpy(v22, "Only 2 attempts left!"); /*0x579c06*/
          return a2; /*0x579c20*/
        case 16: /*0x579727*/
          *(_OWORD *)a2 = 0; /*0x579c28*/
          *(_QWORD *)(a2 + 16) = 13; /*0x579c2b*/
          *(_QWORD *)(a2 + 24) = 15; /*0x579c33*/
          strcpy((char *)a2, "LAST ATTEMPT!"); /*0x579c43*/
          return a2; /*0x579c5e*/
        case 17: /*0x579727*/
          *(_OWORD *)a2 = 0; /*0x579c66*/
          *(_QWORD *)(a2 + 16) = 0; /*0x579c69*/
          *(_QWORD *)(a2 + 24) = 0; /*0x579c6d*/
          v23 = (char *)sub_3C460(48); /*0x579c76*/
          *(_QWORD *)a2 = v23; /*0x579c7b*/
          *(_QWORD *)(a2 + 16) = 32; /*0x579c7e*/
          *(_QWORD *)(a2 + 24) = 47; /*0x579c86*/
          strcpy(v23, "Just kidding, unlimited attempts"); /*0x579c95*/
          return a2; /*0x579ca7*/
        case 18: /*0x579727*/
          *(_OWORD *)a2 = 0; /*0x579caf*/
          *(_QWORD *)(a2 + 16) = 0; /*0x579cb2*/
          *(_QWORD *)(a2 + 24) = 0; /*0x579cb6*/
          v24 = (char *)sub_3C460(48); /*0x579cbf*/
          *(_QWORD *)a2 = v24; /*0x579cc7*/
          *(_QWORD *)(a2 + 16) = 35; /*0x579cca*/
          *(_QWORD *)(a2 + 24) = 47; /*0x579cd2*/
          strcpy(v24, "Maybe you should do something else?"); /*0x579ce1*/
          return a2; /*0x579d08*/
        case 19: /*0x579727*/
          *(_OWORD *)a2 = 0; /*0x579d10*/
          *(_QWORD *)(a2 + 16) = 0; /*0x579d13*/
          *(_QWORD *)(a2 + 24) = 0; /*0x579d17*/
          v25 = (char *)sub_3C460(32); /*0x579d20*/
          *(_QWORD *)a2 = v25; /*0x579d25*/
          *(_QWORD *)(a2 + 16) = 28; /*0x579d28*/
          *(_QWORD *)(a2 + 24) = 31; /*0x579d30*/
          strcpy(v25, "This is getting ridiculus..."); /*0x579d3f*/
          return a2; /*0x579d5c*/
        case 20: /*0x579727*/
          *(_OWORD *)a2 = 0; /*0x579d64*/
          *(_QWORD *)(a2 + 16) = 0; /*0x579d67*/
          *(_QWORD *)(a2 + 24) = 0; /*0x579d6b*/
          v26 = (char *)sub_3C460(32); /*0x579d74*/
          *(_QWORD *)a2 = v26; /*0x579d79*/
          *(_QWORD *)(a2 + 16) = 21; /*0x579d7c*/
          *(_QWORD *)(a2 + 24) = 31; /*0x579d84*/
          strcpy(v26, "Go collect some stars"); /*0x579d93*/
          return a2; /*0x579dad*/
        case 21: /*0x579727*/
          *(_OWORD *)a2 = 0; /*0x579db5*/
          *(_QWORD *)(a2 + 16) = 13; /*0x579db8*/
          *(_QWORD *)(a2 + 24) = 15; /*0x579dc0*/
          strcpy((char *)a2, "How about no?"); /*0x579dd0*/
          return a2; /*0x579deb*/
        case 22: /*0x579727*/
          v27 = qword_905FD0; /*0x579df0*/
          if ( !qword_905FD0 ) /*0x579dfa*/
          {
            v43 = operator new(0x6E8u); /*0x579e06*/
            qword_905FD0 = sub_2723A0(v43); /*0x579e14*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x579e25*/
            v27 = qword_905FD0; /*0x579e27*/
          }
          sub_3E4F0(v45, v27 + 656); /*0x579e3a*/
          v28 = (const char *)v45; /*0x579e40*/
          if ( v46 > 0xF ) /*0x579e4b*/
            v28 = (const char *)v45[0]; /*0x579e4b*/
          v29 = cocos2d::CCString::createWithFormat("%s, please give up...", v28); /*0x579e58*/
          v30 = cocos2d::CCString::getCString(v29); /*0x579e61*/
          *(_OWORD *)a2 = 0; /*0x579e6a*/
          *(_QWORD *)(a2 + 16) = 0; /*0x579e6d*/
          *(_QWORD *)(a2 + 24) = 0; /*0x579e71*/
          v31 = -1; /*0x579e75*/
          do /*0x579e83*/
            ++v31; /*0x579e80*/
          while ( v30[v31] ); /*0x579e83*/
          goto LABEL_55; /*0x579e88*/
        case 23: /*0x579727*/
          *(_OWORD *)a2 = 0; /*0x579ea8*/
          *(_QWORD *)(a2 + 16) = 0; /*0x579eab*/
          *(_QWORD *)(a2 + 24) = 0; /*0x579eaf*/
          v32 = (char *)sub_3C460(32); /*0x579eb8*/
          *(_QWORD *)a2 = v32; /*0x579ebd*/
          *(_QWORD *)(a2 + 16) = 26; /*0x579ec0*/
          *(_QWORD *)(a2 + 24) = 31; /*0x579ec8*/
          strcpy(v32, "Error, error. Bad answers."); /*0x579ed7*/
          return a2; /*0x579ef6*/
        case 24: /*0x579727*/
          *(_OWORD *)a2 = 0; /*0x579efe*/
          *(_QWORD *)(a2 + 16) = 7; /*0x579f01*/
          *(_QWORD *)(a2 + 24) = 15; /*0x579f09*/
          *(_DWORD *)a2 = 1818845510; /*0x579f18*/
          *(_WORD *)(a2 + 4) = 29301; /*0x579f21*/
          *(_BYTE *)(a2 + 6) = 101; /*0x579f2c*/
          *(_BYTE *)(a2 + 7) = 0; /*0x579f2f*/
          return a2; /*0x579f33*/
        case 25: /*0x579727*/
          *(_OWORD *)a2 = 0; /*0x579f3b*/
          *(_QWORD *)(a2 + 16) = 0; /*0x579f3e*/
          *(_QWORD *)(a2 + 24) = 0; /*0x579f42*/
          v33 = (char *)sub_3C460(32); /*0x579f4b*/
          *(_QWORD *)a2 = v33; /*0x579f53*/
          *(_QWORD *)(a2 + 16) = 23; /*0x579f56*/
          *(_QWORD *)(a2 + 24) = 31; /*0x579f5e*/
          strcpy(v33, "May I suggest thinking?"); /*0x579f6d*/
          return a2; /*0x579f92*/
        case 26: /*0x579727*/
          *(_OWORD *)a2 = 0; /*0x579f9a*/
          *(_QWORD *)(a2 + 16) = 5; /*0x579f9d*/
          *(_QWORD *)(a2 + 24) = 15; /*0x579fa5*/
          *(_DWORD *)a2 = 1313821271; /*0x579fb3*/
          *(_BYTE *)(a2 + 4) = 71; /*0x579fbc*/
          *(_BYTE *)(a2 + 5) = 0; /*0x579fbf*/
          return a2; /*0x579fc3*/
        case 27: /*0x579727*/
          *(_OWORD *)a2 = 0; /*0x579fcb*/
          *(_QWORD *)(a2 + 16) = 0; /*0x579fce*/
          *(_QWORD *)(a2 + 24) = 0; /*0x579fd2*/
          v34 = (char *)sub_3C460(32); /*0x579fdb*/
          *(_QWORD *)a2 = v34; /*0x579fe0*/
          *(_QWORD *)(a2 + 16) = 18; /*0x579fe3*/
          *(_QWORD *)(a2 + 24) = 31; /*0x579feb*/
          strcpy(v34, "You're hopeless..."); /*0x579ffa*/
          return a2; /*0x57a00c*/
        case 28: /*0x579727*/
          *(_OWORD *)a2 = 0; /*0x57a014*/
          *(_QWORD *)(a2 + 16) = 0; /*0x57a017*/
          *(_QWORD *)(a2 + 24) = 0; /*0x57a01b*/
          v35 = (char *)sub_3C460(32); /*0x57a024*/
          *(_QWORD *)a2 = v35; /*0x57a029*/
          *(_QWORD *)(a2 + 16) = 19; /*0x57a02c*/
          *(_QWORD *)(a2 + 24) = 31; /*0x57a034*/
          strcpy(v35, "Really, still here?"); /*0x57a043*/
          return a2; /*0x57a05f*/
        case 29: /*0x579727*/
          v36 = qword_905FD0; /*0x57a064*/
          if ( !qword_905FD0 ) /*0x57a06e*/
          {
            v44 = operator new(0x6E8u); /*0x57a07a*/
            qword_905FD0 = sub_2723A0(v44); /*0x57a088*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x57a099*/
            v36 = qword_905FD0; /*0x57a09b*/
          }
          sub_3E4F0(v45, v36 + 656); /*0x57a0ae*/
          v37 = (const char *)v45; /*0x57a0b4*/
          if ( v46 > 0xF ) /*0x57a0bf*/
            v37 = (const char *)v45[0]; /*0x57a0bf*/
          v38 = cocos2d::CCString::createWithFormat("What kind of name is %s anyway?", v37); /*0x57a0cc*/
          v39 = cocos2d::CCString::getCString(v38); /*0x57a0d5*/
          *(_OWORD *)a2 = 0; /*0x57a0de*/
          *(_QWORD *)(a2 + 16) = 0; /*0x57a0e1*/
          *(_QWORD *)(a2 + 24) = 0; /*0x57a0e5*/
          v40 = -1; /*0x57a0e9*/
          do /*0x57a0f3*/
            ++v40; /*0x57a0f0*/
          while ( v39[v40] ); /*0x57a0f3*/
LABEL_55:
          sub_3C230(a2); /*0x57a0fa*/
          sub_3C310(v45); /*0x57a10b*/
          break; /*0x57a110*/
      }
    }
  }
  else
  {
    *v3 = 0; /*0x5796cc*/
LABEL_6:
    *(_OWORD *)a2 = 0; /*0x5796ce*/
    *(_QWORD *)(a2 + 16) = 11; /*0x5796d4*/
    *(_QWORD *)(a2 + 24) = 15; /*0x5796dc*/
    strcpy((char *)a2, "No, just no"); /*0x5796ec*/
  }
  return a2; /*0x57a1a1*/
}

// [6/8] Address: 0x581760
// Method: SecretLayer4::onChest01
// Hidden C++ exception states: #wind=2
__int64 __fastcall SecretLayer4_onChest01(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // rdi
  cocos2d::CCObject *v8; // rcx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+38h] [rbp-10h]
  void *v12; // [rsp+60h] [rbp+18h]

  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 936LL))(a2, 0); /*0x58177d*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 336LL))(a2, 0); /*0x58178b*/
  v9 = 0; /*0x58179e*/
  v10 = 4; /*0x5817a3*/
  v11 = 15; /*0x5817ac*/
  strcpy((char *)&v9, "0003"); /*0x5817bb*/
  v4 = qword_905FE0; /*0x5817c4*/
  if ( !qword_905FE0 ) /*0x5817ce*/
  {
    v12 = operator new(0x3E8u); /*0x5817da*/
    qword_905FE0 = sub_2D2B40(v12); /*0x5817e8*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x5817f9*/
    v4 = qword_905FE0; /*0x5817fb*/
  }
  result = GameStatsManager_unlockSpecialChest(v4, (__int64)&v9); /*0x581807*/
  v6 = result; /*0x58180c*/
  if ( result ) /*0x581812*/
  {
    v7 = sub_55E830(*(unsigned int *)(result + 64), 0); /*0x581822*/
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 456LL))(a1, v7, 100); /*0x58183b*/
    v8 = *(cocos2d::CCObject **)(v7 + 704); /*0x58183e*/
    if ( v8 ) /*0x581848*/
      cocos2d::CCObject::release(v8); /*0x58184a*/
    *(_QWORD *)(v7 + 704) = v6; /*0x581850*/
    cocos2d::CCObject::retain((cocos2d::CCObject *)v6); /*0x58185a*/
    if ( !*(_BYTE *)(v6 + 80) || (result = *(unsigned int *)(v7 + 696), *(_DWORD *)(v6 + 64) == (_DWORD)result) ) /*0x58186f*/
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v7 + 720) + 336LL))(*(_QWORD *)(v7 + 720), 0); /*0x58187d*/
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v7 + 720) + 936LL))(*(_QWORD *)(v7 + 720), 0); /*0x58188f*/
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v7 + 712) + 336LL))(*(_QWORD *)(v7 + 712), 0); /*0x5818a1*/
      *(_BYTE *)(v7 + 700) = 1; /*0x5818a7*/
      if ( *(_BYTE *)(v7 + 701) ) /*0x5818ae*/
        return RewardUnlockLayer_playRewardEffect(v7); /*0x5818ba*/
    }
  }
  return result; /*0x5818bf*/
}

// [7/8] Address: 0x582f00
// Method: SecretLayer4::getThreadMessage
// Hidden C++ exception states: #wind=1
__int64 __fastcall SecretLayer4_getThreadMessage(_DWORD *a1, __int64 a2)
{
  size_t v4; // r8
  char *v5; // rdx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx

  a1[112] = 0; /*0x582f20*/
  *(_OWORD *)a2 = 0; /*0x582f29*/
  *(_QWORD *)(a2 + 16) = 15; /*0x582f2c*/
  *(_QWORD *)(a2 + 24) = 15; /*0x582f34*/
  strcpy((char *)a2, "zzzzzzZZZZZZZZZ"); /*0x582f44*/
  switch ( a1[110] ) /*0x582f96*/
  {
    case 1: /*0x582f96*/
      switch ( a1[111] ) /*0x582fb2*/
      {
        case 0: /*0x582fb2*/
          v4 = 29; /*0x582fb4*/
          v5 = "I hide behind rocks and rills"; /*0x582fba*/
          goto LABEL_58; /*0x582fc1*/
        case 1: /*0x582fb2*/
          v4 = 29; /*0x582fc6*/
          v5 = "under the mountains and hills"; /*0x582fcc*/
          goto LABEL_58; /*0x582fd3*/
        case 2: /*0x582fb2*/
          v4 = 24; /*0x582fd8*/
          v5 = "I cannot be seen or felt"; /*0x582fde*/
          goto LABEL_58; /*0x582fe5*/
        case 3: /*0x582fb2*/
          v4 = 18; /*0x582fea*/
          v5 = "nor heard or smelt"; /*0x582ff0*/
          goto LABEL_58; /*0x582ff7*/
        case 4: /*0x582fb2*/
          v4 = 30; /*0x582ffc*/
          v5 = "the more I am the less you see"; /*0x583002*/
          goto LABEL_58; /*0x583009*/
        case 5: /*0x582fb2*/
          sub_3F5A0((void *)a2, "what am I?", 0xAu); /*0x58301e*/
          a1[110] = 0; /*0x583023*/
          break; /*0x583029*/
        default:
          goto LABEL_59;
      }
      goto LABEL_59;
    case 2: /*0x582f96*/
      v6 = a1[111]; /*0x58302e*/
      if ( !v6 ) /*0x583036*/
      {
        v4 = 11; /*0x5830a6*/
        v5 = "Shh, quiet!"; /*0x5830ac*/
        goto LABEL_58; /*0x5830b3*/
      }
      v7 = v6 - 1; /*0x583038*/
      if ( !v7 ) /*0x58303b*/
      {
        v4 = 27; /*0x583094*/
        v5 = "Can you feel it closing in?"; /*0x58309a*/
        goto LABEL_58; /*0x5830a1*/
      }
      v8 = v7 - 1; /*0x58303d*/
      if ( !v8 ) /*0x583040*/
      {
        v4 = 29; /*0x583082*/
        v5 = "Shadows creep where it begins"; /*0x583088*/
        goto LABEL_58; /*0x58308f*/
      }
      v9 = v8 - 1; /*0x583042*/
      if ( !v9 ) /*0x583045*/
      {
        v4 = 29; /*0x583070*/
        v5 = "Speak its name and it is gone"; /*0x583076*/
        goto LABEL_58; /*0x58307d*/
      }
      if ( v9 == 1 ) /*0x58304a*/
      {
        sub_3F5A0((void *)a2, "from every moment dusk till dawn", 0x20u); /*0x583060*/
        a1[110] = 0; /*0x583065*/
      }
      goto LABEL_59; /*0x58306b*/
    case 3: /*0x582f96*/
      v10 = a1[111]; /*0x5830b8*/
      if ( !v10 ) /*0x5830c0*/
      {
        v4 = 33; /*0x583119*/
        v5 = "What always runs, but never walks"; /*0x58311f*/
        goto LABEL_58; /*0x583126*/
      }
      v11 = v10 - 1; /*0x5830c2*/
      if ( !v11 ) /*0x5830c5*/
      {
        v4 = 26; /*0x583107*/
        v5 = "Often murmurs, never talks"; /*0x58310d*/
        goto LABEL_58; /*0x583114*/
      }
      v12 = v11 - 1; /*0x5830c7*/
      if ( !v12 ) /*0x5830ca*/
      {
        v4 = 27; /*0x5830f5*/
        v5 = "Has a bed, but never sleeps"; /*0x5830fb*/
        goto LABEL_58; /*0x583102*/
      }
      if ( v12 == 1 ) /*0x5830cf*/
      {
        sub_3F5A0((void *)a2, "Has a mouth, but never eats?", 0x1Cu); /*0x5830e5*/
        a1[110] = 0; /*0x5830ea*/
      }
      goto LABEL_59; /*0x5830f0*/
    case 4: /*0x582f96*/
      v13 = a1[111]; /*0x58312b*/
      if ( v13 ) /*0x583133*/
      {
        v14 = v13 - 1; /*0x583135*/
        if ( v14 ) /*0x583138*/
        {
          v15 = v14 - 1; /*0x58313a*/
          if ( v15 ) /*0x58313d*/
          {
            v16 = v15 - 1; /*0x58313f*/
            if ( v16 ) /*0x583142*/
              goto LABEL_31; /*0x583142*/
            v4 = 19; /*0x58316d*/
            v5 = "and death will come"; /*0x583173*/
          }
          else
          {
            v4 = 13; /*0x58317f*/
            v5 = "wait too long"; /*0x583185*/
          }
        }
        else
        {
          v4 = 21; /*0x583191*/
          v5 = "the stronger I become"; /*0x583197*/
        }
      }
      else
      {
        v4 = 20; /*0x5831a3*/
        v5 = "The less you consume"; /*0x5831a9*/
      }
      goto LABEL_58; /*0x58317a*/
    case 5: /*0x582f96*/
      v17 = a1[111]; /*0x5831b5*/
      if ( !v17 ) /*0x5831bd*/
      {
        v4 = 36; /*0x5831f1*/
        v5 = "My thunder comes before my lightning"; /*0x5831f7*/
        goto LABEL_58; /*0x5831fe*/
      }
      v18 = v17 - 1; /*0x5831bf*/
      if ( !v18 ) /*0x5831c2*/
      {
        v4 = 33; /*0x5831df*/
        v5 = "My lightning comes before my rain"; /*0x5831e5*/
        goto LABEL_58; /*0x5831ec*/
      }
      v16 = v18 - 1; /*0x5831c4*/
      if ( !v16 ) /*0x5831c7*/
      {
        v4 = 40; /*0x5831cd*/
        v5 = "My rain dries up all the land it touches"; /*0x5831d3*/
        goto LABEL_58; /*0x5831da*/
      }
LABEL_31:
      if ( v16 == 1 ) /*0x583147*/
      {
        sub_3F5A0((void *)a2, "What am I?", 0xAu); /*0x58315d*/
        a1[110] = 0; /*0x583162*/
      }
      goto LABEL_59; /*0x583168*/
    case 6: /*0x582f96*/
      v19 = a1[111]; /*0x583203*/
      if ( !v19 ) /*0x58320b*/
      {
        v4 = 50; /*0x58324a*/
        v5 = "Legend tells of a level so hard no one can beat it"; /*0x583250*/
        goto LABEL_58; /*0x583257*/
      }
      v20 = v19 - 1; /*0x58320d*/
      if ( !v20 ) /*0x583210*/
      {
        v4 = 37; /*0x58323b*/
        v5 = "Anything harder than it is impossible"; /*0x583241*/
        goto LABEL_58; /*0x583248*/
      }
      if ( v20 == 1 ) /*0x583215*/
      {
        sub_3F5A0((void *)a2, "Don't even get me started", 0x19u); /*0x58322b*/
        a1[110] = 0; /*0x583230*/
      }
      goto LABEL_59; /*0x583236*/
    case 7: /*0x582f96*/
      v21 = a1[111]; /*0x583259*/
      if ( !v21 ) /*0x583261*/
      {
        v4 = 38; /*0x5832ad*/
        v5 = "Good levels are hard to find sometimes"; /*0x5832b3*/
        goto LABEL_58; /*0x5832ba*/
      }
      v22 = v21 - 1; /*0x583263*/
      if ( !v22 ) /*0x583266*/
      {
        v4 = 45; /*0x58329e*/
        v5 = "Wish I had someone who could find them for me"; /*0x5832a4*/
        goto LABEL_58; /*0x5832ab*/
      }
      v23 = v22 - 1; /*0x583268*/
      if ( !v23 ) /*0x58326b*/
      {
        v4 = 3; /*0x58328f*/
        v5 = "..."; /*0x583295*/
LABEL_58:
        sub_3F5A0((void *)a2, v5, v4); /*0x5832c9*/
        goto LABEL_59; /*0x5832cc*/
      }
      if ( v23 == 1 ) /*0x583270*/
      {
        sub_3F5A0((void *)a2, "Forget it...", 0xCu); /*0x583282*/
        a1[110] = 0; /*0x583287*/
      }
LABEL_59:
      ++a1[111]; /*0x5832d1*/
      return a2;
    default:
      v4 = 7; /*0x5832bc*/
      v5 = "zzzZZZZ"; /*0x5832c2*/
      goto LABEL_58; /*0x5832c2*/
  }
}

// [8/8] Address: 0x584070
// Method: SecretLayer4::keyBackClicked
__int64 __fastcall SecretLayer4_keyBackClicked(__int64 a1)
{
  return sub_583FB0(a1 - 336, 0);
}
