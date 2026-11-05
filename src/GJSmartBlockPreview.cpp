#include <Geode/binding/GJSmartBlockPreview.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0x3b3090
// Method: GJSmartBlockPreview::~GJSmartBlockPreview
cocos2d::CCNode *__fastcall GJSmartBlockPreview__dtor_GJSmartBlockPreview(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &GJSmartBlockPreview::`vftable'; /*0x3b30a4*/
  sub_3C310((char *)Block + 320); /*0x3b30b0*/
  cocos2d::CCNode::~CCNode(Block); /*0x3b30b8*/
  if ( (a2 & 1) != 0 ) /*0x3b30c1*/
    j_j_free(Block); /*0x3b30cb*/
  return Block; /*0x3b30d0*/
}

// [2/4] Address: 0x3b8430
// Method: GJSmartBlockPreview::create
// Hidden C++ exception states: #wind=3
char *__fastcall GJSmartBlockPreview_create(__int64 a1)
{
  char *v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rax
  void *v6; // rdx
  char v8[8]; // [rsp+28h] [rbp-50h] BYREF
  char v9[32]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v10; // [rsp+50h] [rbp-28h]

  v10 = a1; /*0x3b8454*/
  v2 = (char *)operator new(0x178u); /*0x3b8463*/
  cocos2d::CCNode::CCNode((cocos2d::CCNode *)v2); /*0x3b846e*/
  *(_QWORD *)v2 = &GJSmartBlockPreview::`vftable'; /*0x3b847b*/
  *((_OWORD *)v2 + 20) = 0; /*0x3b8488*/
  *((_QWORD *)v2 + 42) = 0; /*0x3b848e*/
  *((_QWORD *)v2 + 43) = 15; /*0x3b8492*/
  v2[320] = 0; /*0x3b849a*/
  *((_QWORD *)v2 + 44) = 0; /*0x3b849d*/
  *((_QWORD *)v2 + 45) = 0; /*0x3b84a4*/
  v2[368] = 0; /*0x3b84ab*/
  v3 = sub_3E4F0(v9, a1); /*0x3b84be*/
  if ( cocos2d::CCNode::init((cocos2d::CCNode *)v2) ) /*0x3b84c9*/
  {
    v4 = *(_QWORD *)v2; /*0x3b84ed*/
    cocos2d::CCSize::CCSize((cocos2d::CCSize *)v8, 90.0, 90.0); /*0x3b8500*/
    (*(void (__fastcall **)(char *, __int64))(v4 + 312))(v2, v5); /*0x3b850c*/
    if ( v2 + 320 != (char *)v3 ) /*0x3b8515*/
    {
      v6 = (void *)v3; /*0x3b8517*/
      if ( *(_QWORD *)(v3 + 24) > 0xFu ) /*0x3b851f*/
        v6 = *(void **)v3; /*0x3b8521*/
      sub_3F5A0(v2 + 320, v6, *(_QWORD *)(v3 + 16)); /*0x3b852b*/
    }
    sub_3C310(v3); /*0x3b8534*/
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v2); /*0x3b853c*/
  }
  else
  {
    sub_3C310(v3); /*0x3b84d6*/
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v2 + 8LL))(v2, 1); /*0x3b84e6*/
    v2 = 0; /*0x3b84e9*/
  }
  sub_3C310(a1); /*0x3b8546*/
  return v2; /*0x3b854e*/
}

// [3/4] Address: 0x3b8570
// Method: GJSmartBlockPreview::addTemplateGuide_0
// Hidden C++ exception states: #wind=4
double __fastcall GJSmartBlockPreview_addTemplateGuide_0(__int64 a1, size_t *a2, int a3)
{
  size_t *v4; // r14
  unsigned int v6; // edi
  void *v7; // rdx
  cocos2d::CCArray *v8; // rax
  cocos2d::CCArray *v9; // rsi
  struct cocos2d::CCObject *v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  struct cocos2d::CCObject *v13; // rbx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v18; // [rsp+28h] [rbp-91h] BYREF
  char v19[32]; // [rsp+30h] [rbp-89h] BYREF
  char v20[32]; // [rsp+50h] [rbp-69h] BYREF
  int v21; // [rsp+70h] [rbp-49h]
  char v22; // [rsp+74h] [rbp-45h]
  int v23; // [rsp+78h] [rbp-41h]
  __int16 v24; // [rsp+7Ch] [rbp-3Dh]
  char v25; // [rsp+7Eh] [rbp-3Bh]
  size_t *v26; // [rsp+80h] [rbp-39h]
  __int64 v27; // [rsp+90h] [rbp-29h]
  __int128 v28; // [rsp+98h] [rbp-21h] BYREF
  __int64 v29; // [rsp+A8h] [rbp-11h]
  __int64 v30; // [rsp+B0h] [rbp-9h]
  __int128 v31; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v32; // [rsp+C8h] [rbp+Fh]
  __int64 v33; // [rsp+D0h] [rbp+17h]
  int v34; // [rsp+D8h] [rbp+1Fh]
  char v35; // [rsp+DCh] [rbp+23h]
  int v36; // [rsp+E0h] [rbp+27h]
  __int16 v37; // [rsp+E4h] [rbp+2Bh]
  char v38; // [rsp+E6h] [rbp+2Dh]

  v4 = a2; /*0x3b859b*/
  v26 = a2; /*0x3b85a1*/
  v6 = 0; /*0x3b85a5*/
  v27 = 0; /*0x3b85a7*/
  v28 = 0; /*0x3b85ae*/
  v29 = 0; /*0x3b85b2*/
  v30 = 15; /*0x3b85b6*/
  LOBYTE(v28) = 0; /*0x3b85be*/
  v31 = 0; /*0x3b85c2*/
  v32 = 0; /*0x3b85c6*/
  v33 = 15; /*0x3b85ca*/
  LOBYTE(v31) = 0; /*0x3b85d2*/
  v34 = 0; /*0x3b85d6*/
  v35 = 0; /*0x3b85d9*/
  v36 = 0; /*0x3b85dd*/
  v37 = 0; /*0x3b85e0*/
  v38 = 0; /*0x3b85e4*/
  if ( &v28 != (__int128 *)a2 ) /*0x3b85ef*/
  {
    if ( a2[3] > 0xF ) /*0x3b85f6*/
      a2 = (size_t *)*a2; /*0x3b85f8*/
    sub_3F5A0(&v28, a2, v4[2]); /*0x3b8603*/
  }
  if ( &v31 != (__int128 *)v4 ) /*0x3b860f*/
  {
    v7 = v4; /*0x3b8611*/
    if ( v4[3] > 0xF ) /*0x3b8619*/
      v7 = (void *)*v4; /*0x3b861b*/
    sub_3F5A0(&v31, v7, v4[2]); /*0x3b8626*/
  }
  v18 = v27; /*0x3b8639*/
  sub_3E4F0(v19, &v28); /*0x3b8647*/
  sub_3E4F0(v20, &v31); /*0x3b8655*/
  v21 = v34; /*0x3b865d*/
  v22 = v35; /*0x3b8664*/
  v23 = v36; /*0x3b866a*/
  v24 = v37; /*0x3b8671*/
  v25 = v38; /*0x3b867f*/
  v8 = (cocos2d::CCArray *)GJSmartBlockPreview_addTemplateGuide(a1, &v18); /*0x3b8692*/
  v9 = v8; /*0x3b8697*/
  if ( a3 != 1 ) /*0x3b869d*/
  {
    if ( a3 != 2 || !cocos2d::CCArray::count(v8) ) /*0x3b871a*/
      goto LABEL_26; /*0x3b8722*/
    while ( 1 ) /*0x3b873b*/
    {
      v13 = cocos2d::CCArray::objectAtIndex(v9, v6); /*0x3b873b*/
      v14 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v13 + 56LL))(v13); /*0x3b8748*/
      if ( !v14 ) /*0x3b874c*/
      {
        (**((void (__fastcall ***)(__int64, __int16 *))v13 + 40))((__int64)v13 + 320, &word_6FE4C0); /*0x3b87a3*/
        LOBYTE(v16) = -1; /*0x3b87a5*/
        goto LABEL_24; /*0x3b87a5*/
      }
      v15 = v14 - 1; /*0x3b874e*/
      if ( !v15 ) /*0x3b8751*/
        break; /*0x3b8751*/
      if ( v15 == 1 ) /*0x3b8756*/
      {
        (**((void (__fastcall ***)(__int64, void *))v13 + 40))((__int64)v13 + 320, &unk_6FE4BC); /*0x3b876d*/
        LOBYTE(v16) = 100; /*0x3b876f*/
LABEL_24:
        (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v13 + 40) + 40LL))((__int64)v13 + 320, v16); /*0x3b87a7*/
      }
      if ( ++v6 >= cocos2d::CCArray::count(v9) ) /*0x3b87c5*/
        goto LABEL_26; /*0x3b87c5*/
    }
    (**((void (__fastcall ***)(__int64, __int16 *))v13 + 40))((__int64)v13 + 320, &word_6FE4C0); /*0x3b8788*/
    LOBYTE(v16) = -56; /*0x3b878a*/
    goto LABEL_24; /*0x3b878c*/
  }
  if ( cocos2d::CCArray::count(v8) ) /*0x3b86a2*/
  {
    do /*0x3b8707*/
    {
      v10 = cocos2d::CCArray::objectAtIndex(v9, v6); /*0x3b86bb*/
      v11 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v10 + 56LL))(v10); /*0x3b86c8*/
      if ( !v11 || (unsigned int)(v11 - 1) <= 1 ) /*0x3b86d1*/
      {
        LOBYTE(v12) = 50; /*0x3b86e2*/
        (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v10 + 40) + 40LL))((__int64)v10 + 320, v12); /*0x3b86e4*/
      }
      (**((void (__fastcall ***)(__int64, void *))v10 + 40))((__int64)v10 + 320, &unk_6FE4BC); /*0x3b86f8*/
      ++v6; /*0x3b86fa*/
    }
    while ( v6 < cocos2d::CCArray::count(v9) ); /*0x3b8707*/
  }
LABEL_26:
  sub_3C310(&v31); /*0x3b87cb*/
  sub_3C310(&v28); /*0x3b87d8*/
  return sub_3C310(v4); /*0x3b87e6*/
}

// Address: 0x3b8570
// Method: GJSmartBlockPreview::addTemplateGuide
// Hidden C++ exception states: #wind=4
double __fastcall GJSmartBlockPreview_addTemplateGuide_0(__int64 a1, size_t **a2, int a3)
{
  size_t *v4; // r14
  unsigned int v6; // edi
  void *v7; // rdx
  cocos2d::CCArray *v8; // rax
  cocos2d::CCArray *v9; // rsi
  struct cocos2d::CCObject *v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  struct cocos2d::CCObject *v13; // rbx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v18; // [rsp+28h] [rbp-91h] BYREF
  char v19[32]; // [rsp+30h] [rbp-89h] BYREF
  char v20[32]; // [rsp+50h] [rbp-69h] BYREF
  int v21; // [rsp+70h] [rbp-49h]
  char v22; // [rsp+74h] [rbp-45h]
  int v23; // [rsp+78h] [rbp-41h]
  __int16 v24; // [rsp+7Ch] [rbp-3Dh]
  char v25; // [rsp+7Eh] [rbp-3Bh]
  size_t *v26; // [rsp+80h] [rbp-39h]
  __int64 v27; // [rsp+90h] [rbp-29h]
  __int128 v28; // [rsp+98h] [rbp-21h] BYREF
  __int64 v29; // [rsp+A8h] [rbp-11h]
  __int64 v30; // [rsp+B0h] [rbp-9h]
  __int128 v31; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v32; // [rsp+C8h] [rbp+Fh]
  __int64 v33; // [rsp+D0h] [rbp+17h]
  int v34; // [rsp+D8h] [rbp+1Fh]
  char v35; // [rsp+DCh] [rbp+23h]
  int v36; // [rsp+E0h] [rbp+27h]
  __int16 v37; // [rsp+E4h] [rbp+2Bh]
  char v38; // [rsp+E6h] [rbp+2Dh]

  v4 = (size_t *)a2;
  v26 = (size_t *)a2;
  v6 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 15;
  LOBYTE(v28) = 0;
  v31 = 0;
  v32 = 0;
  v33 = 15;
  LOBYTE(v31) = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  if ( &v28 != (__int128 *)a2 )
  {
    if ( (unsigned __int64)a2[3] > 0xF )
      a2 = (size_t **)*a2;
    sub_3F5A0(&v28, a2, v4[2]);
  }
  if ( &v31 != (__int128 *)v4 )
  {
    v7 = v4;
    if ( v4[3] > 0xF )
      v7 = (void *)*v4;
    sub_3F5A0(&v31, v7, v4[2]);
  }
  v18 = v27;
  sub_3E4F0(v19, &v28);
  sub_3E4F0(v20, &v31);
  v21 = v34;
  v22 = v35;
  v23 = v36;
  v24 = v37;
  v25 = v38;
  v8 = (cocos2d::CCArray *)GJSmartBlockPreview_addTemplateGuide(a1, &v18);
  v9 = v8;
  if ( a3 != 1 )
  {
    if ( a3 != 2 || !cocos2d::CCArray::count(v8) )
      goto LABEL_26;
    while ( 1 )
    {
      v13 = cocos2d::CCArray::objectAtIndex(v9, v6);
      v14 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v13 + 56LL))(v13);
      if ( !v14 )
      {
        (**((void (__fastcall ***)(__int64, __int16 *))v13 + 40))((__int64)v13 + 320, &word_6FE4C0);
        LOBYTE(v16) = -1;
        goto LABEL_24;
      }
      v15 = v14 - 1;
      if ( !v15 )
        break;
      if ( v15 == 1 )
      {
        (**((void (__fastcall ***)(__int64, void *))v13 + 40))((__int64)v13 + 320, &unk_6FE4BC);
        LOBYTE(v16) = 100;
LABEL_24:
        (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v13 + 40) + 40LL))((__int64)v13 + 320, v16);
      }
      if ( ++v6 >= cocos2d::CCArray::count(v9) )
        goto LABEL_26;
    }
    (**((void (__fastcall ***)(__int64, __int16 *))v13 + 40))((__int64)v13 + 320, &word_6FE4C0);
    LOBYTE(v16) = -56;
    goto LABEL_24;
  }
  if ( cocos2d::CCArray::count(v8) )
  {
    do
    {
      v10 = cocos2d::CCArray::objectAtIndex(v9, v6);
      v11 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v10 + 56LL))(v10);
      if ( !v11 || (unsigned int)(v11 - 1) <= 1 )
      {
        LOBYTE(v12) = 50;
        (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v10 + 40) + 40LL))((__int64)v10 + 320, v12);
      }
      (**((void (__fastcall ***)(__int64, void *))v10 + 40))((__int64)v10 + 320, &unk_6FE4BC);
      ++v6;
    }
    while ( v6 < cocos2d::CCArray::count(v9) );
  }
LABEL_26:
  sub_3C310(&v31);
  sub_3C310(&v28);
  return sub_3C310(v4);
}

// Address: 0x3b8570
// Method: GJSmartBlockPreview::addTemplateGuide
// Hidden C++ exception states: #wind=4
double __fastcall GJSmartBlockPreview_addTemplateGuide_0(__int64 a1, size_t ***a2, int a3)
{
  size_t **v4; // r14
  unsigned int v6; // edi
  void *v7; // rdx
  cocos2d::CCArray *v8; // rax
  cocos2d::CCArray *v9; // rsi
  struct cocos2d::CCObject *v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  struct cocos2d::CCObject *v13; // rbx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v18; // [rsp+28h] [rbp-91h] BYREF
  char v19[32]; // [rsp+30h] [rbp-89h] BYREF
  char v20[32]; // [rsp+50h] [rbp-69h] BYREF
  int v21; // [rsp+70h] [rbp-49h]
  char v22; // [rsp+74h] [rbp-45h]
  int v23; // [rsp+78h] [rbp-41h]
  __int16 v24; // [rsp+7Ch] [rbp-3Dh]
  char v25; // [rsp+7Eh] [rbp-3Bh]
  size_t **v26; // [rsp+80h] [rbp-39h]
  __int64 v27; // [rsp+90h] [rbp-29h]
  __int128 v28; // [rsp+98h] [rbp-21h] BYREF
  __int64 v29; // [rsp+A8h] [rbp-11h]
  __int64 v30; // [rsp+B0h] [rbp-9h]
  __int128 v31; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v32; // [rsp+C8h] [rbp+Fh]
  __int64 v33; // [rsp+D0h] [rbp+17h]
  int v34; // [rsp+D8h] [rbp+1Fh]
  char v35; // [rsp+DCh] [rbp+23h]
  int v36; // [rsp+E0h] [rbp+27h]
  __int16 v37; // [rsp+E4h] [rbp+2Bh]
  char v38; // [rsp+E6h] [rbp+2Dh]

  v4 = (size_t **)a2;
  v26 = (size_t **)a2;
  v6 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 15;
  LOBYTE(v28) = 0;
  v31 = 0;
  v32 = 0;
  v33 = 15;
  LOBYTE(v31) = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  if ( &v28 != (__int128 *)a2 )
  {
    if ( (unsigned __int64)a2[3] > 0xF )
      a2 = (size_t ***)*a2;
    sub_3F5A0(&v28, a2, (size_t)v4[2]);
  }
  if ( &v31 != (__int128 *)v4 )
  {
    v7 = v4;
    if ( (unsigned __int64)v4[3] > 0xF )
      v7 = *v4;
    sub_3F5A0(&v31, v7, (size_t)v4[2]);
  }
  v18 = v27;
  sub_3E4F0(v19, &v28);
  sub_3E4F0(v20, &v31);
  v21 = v34;
  v22 = v35;
  v23 = v36;
  v24 = v37;
  v25 = v38;
  v8 = (cocos2d::CCArray *)GJSmartBlockPreview_addTemplateGuide(a1, &v18);
  v9 = v8;
  if ( a3 != 1 )
  {
    if ( a3 != 2 || !cocos2d::CCArray::count(v8) )
      goto LABEL_26;
    while ( 1 )
    {
      v13 = cocos2d::CCArray::objectAtIndex(v9, v6);
      v14 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v13 + 56LL))(v13);
      if ( !v14 )
      {
        (**((void (__fastcall ***)(__int64, __int16 *))v13 + 40))((__int64)v13 + 320, &word_6FE4C0);
        LOBYTE(v16) = -1;
        goto LABEL_24;
      }
      v15 = v14 - 1;
      if ( !v15 )
        break;
      if ( v15 == 1 )
      {
        (**((void (__fastcall ***)(__int64, void *))v13 + 40))((__int64)v13 + 320, &unk_6FE4BC);
        LOBYTE(v16) = 100;
LABEL_24:
        (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v13 + 40) + 40LL))((__int64)v13 + 320, v16);
      }
      if ( ++v6 >= cocos2d::CCArray::count(v9) )
        goto LABEL_26;
    }
    (**((void (__fastcall ***)(__int64, __int16 *))v13 + 40))((__int64)v13 + 320, &word_6FE4C0);
    LOBYTE(v16) = -56;
    goto LABEL_24;
  }
  if ( cocos2d::CCArray::count(v8) )
  {
    do
    {
      v10 = cocos2d::CCArray::objectAtIndex(v9, v6);
      v11 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v10 + 56LL))(v10);
      if ( !v11 || (unsigned int)(v11 - 1) <= 1 )
      {
        LOBYTE(v12) = 50;
        (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v10 + 40) + 40LL))((__int64)v10 + 320, v12);
      }
      (**((void (__fastcall ***)(__int64, void *))v10 + 40))((__int64)v10 + 320, &unk_6FE4BC);
      ++v6;
    }
    while ( v6 < cocos2d::CCArray::count(v9) );
  }
LABEL_26:
  sub_3C310(&v31);
  sub_3C310(&v28);
  return sub_3C310(v4);
}
