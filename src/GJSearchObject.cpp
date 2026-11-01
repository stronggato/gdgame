#include <Geode/binding/GJSearchObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/9] Address: 0x215d40
// Method: GJSearchObject::~GJSearchObject
cocos2d::CCNode *__fastcall GJSearchObject__dtor_GJSearchObject(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &GJSearchObject::`vftable'; /*0x215d54*/
  sub_3C310((char *)Block + 392); /*0x215d60*/
  sub_3C310((char *)Block + 360); /*0x215d6c*/
  sub_3C310((char *)Block + 328); /*0x215d78*/
  cocos2d::CCNode::~CCNode(Block); /*0x215d80*/
  if ( (a2 & 1) != 0 ) /*0x215d89*/
    j_j_free(Block); /*0x215d93*/
  return Block; /*0x215d98*/
}

// [2/9] Address: 0x26be80
// Method: GJSearchObject::createFromKey
// Hidden C++ exception states: #wind=6
__int64 __fastcall GJSearchObject_createFromKey(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r8
  cocos2d::CCArray *v3; // rsi
  void *v4; // rax
  cocos2d::CCString *v6; // rax
  cocos2d::CCString *v7; // rax
  const char *CString; // rax
  __int64 v9; // r8
  cocos2d::CCString *v10; // rax
  const char *v11; // rax
  __int64 v12; // r8
  cocos2d::CCString *v13; // rax
  const char *v14; // rax
  cocos2d::CCString *v15; // rax
  cocos2d::CCString *v16; // rax
  cocos2d::CCString *v17; // rax
  cocos2d::CCString *v18; // rax
  cocos2d::CCString *v19; // rax
  cocos2d::CCString *v20; // rax
  cocos2d::CCString *v21; // rax
  cocos2d::CCString *v22; // rax
  cocos2d::CCString *v23; // rax
  cocos2d::CCString *v24; // rax
  cocos2d::CCString *v25; // rax
  cocos2d::CCString *v26; // rax
  cocos2d::CCString *v27; // rax
  cocos2d::CCString *v28; // rax
  cocos2d::CCString *v29; // rax
  cocos2d::CCString *v30; // rax
  cocos2d::CCString *v31; // rax
  cocos2d::CCString *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  void **v36; // r15
  __int64 v37; // rbx
  unsigned __int64 v38; // r14
  unsigned __int64 v39; // rsi
  void **v40; // r12
  char *v41; // r15
  unsigned __int64 v42; // r14
  unsigned __int64 v43; // rsi
  void **v44; // r12
  char *v45; // r14
  unsigned __int64 v46; // r13
  unsigned __int64 v47; // rsi
  __int64 v48; // rbx
  void *v49; // rax
  char *v50; // rax
  char *v51; // rax
  char v52; // [rsp+B0h] [rbp-80h]
  char v53; // [rsp+B1h] [rbp-7Fh]
  char v54; // [rsp+B2h] [rbp-7Eh]
  char v55; // [rsp+B3h] [rbp-7Dh]
  char v56; // [rsp+B4h] [rbp-7Ch]
  char v57; // [rsp+B5h] [rbp-7Bh]
  char v58; // [rsp+B6h] [rbp-7Ah]
  char v59; // [rsp+B7h] [rbp-79h]
  char v60; // [rsp+B8h] [rbp-78h]
  char v61; // [rsp+B9h] [rbp-77h]
  char v62; // [rsp+BAh] [rbp-76h]
  char v63; // [rsp+BBh] [rbp-75h]
  char v64; // [rsp+BCh] [rbp-74h]
  int v65; // [rsp+C0h] [rbp-70h]
  int v66; // [rsp+C4h] [rbp-6Ch]
  int v67; // [rsp+C8h] [rbp-68h]
  int v68; // [rsp+CCh] [rbp-64h]
  int v69; // [rsp+D0h] [rbp-60h]
  int v70; // [rsp+D4h] [rbp-5Ch]
  __int128 v71; // [rsp+D8h] [rbp-58h] BYREF
  unsigned __int64 v72; // [rsp+E8h] [rbp-48h]
  __int64 v73; // [rsp+F0h] [rbp-40h]
  __int128 v74; // [rsp+F8h] [rbp-38h] BYREF
  unsigned __int64 v75; // [rsp+108h] [rbp-28h]
  __int64 v76; // [rsp+110h] [rbp-20h]
  __int128 *v77; // [rsp+118h] [rbp-18h]
  __int128 *v78; // [rsp+120h] [rbp-10h]
  void *Block[2]; // [rsp+130h] [rbp+0h] BYREF
  __m128i si128; // [rsp+140h] [rbp+10h]
  void *Src[2]; // [rsp+150h] [rbp+20h] BYREF
  unsigned __int64 v82; // [rsp+160h] [rbp+30h]
  unsigned __int64 v83; // [rsp+168h] [rbp+38h]
  void *v84[2]; // [rsp+170h] [rbp+40h] BYREF
  unsigned __int64 v85; // [rsp+180h] [rbp+50h]
  unsigned __int64 v86; // [rsp+188h] [rbp+58h]
  void *v87[2]; // [rsp+190h] [rbp+60h] BYREF
  unsigned __int64 v88; // [rsp+1A0h] [rbp+70h]
  unsigned __int64 v89; // [rsp+1A8h] [rbp+78h]

  *(_OWORD *)Block = 0; /*0x26bebb*/
  si128 = 0; /*0x26bec2*/
  v1 = -1; /*0x26bec7*/
  v2 = -1; /*0x26bece*/
  do /*0x26bed4*/
    ++v2; /*0x26bed1*/
  while ( *(_BYTE *)(a1 + v2) ); /*0x26bed4*/
  sub_3C230(Block); /*0x26bee2*/
  v3 = (cocos2d::CCArray *)sub_D09B0(Block, &unk_70F154); /*0x26bef8*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x26bf03*/
  {
    v4 = Block[0]; /*0x26bf08*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x26bf16*/
    {
      v4 = (void *)*((_QWORD *)Block[0] - 1); /*0x26bf1c*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v4 - 8) > 0x1F ) /*0x26bf2b*/
        invoke_watson(0, 0, 0, 0, 0); /*0x26bf3e*/
    }
    j_j_free(v4); /*0x26bf48*/
  }
  si128 = _mm_load_si128((const __m128i *)&Size); /*0x26bf55*/
  LOBYTE(Block[0]) = 0; /*0x26bf5a*/
  if ( cocos2d::CCArray::count(v3) < 0x12 ) /*0x26bf6a*/
    return 0; /*0x26bf6c*/
  v6 = cocos2d::CCArray::objectAtIndex(v3, 0); /*0x26bf78*/
  v70 = cocos2d::CCString::intValue(v6); /*0x26bf87*/
  v7 = cocos2d::CCArray::objectAtIndex(v3, 1u); /*0x26bf92*/
  CString = cocos2d::CCString::getCString(v7); /*0x26bf9b*/
  *(_OWORD *)v87 = 0; /*0x26bfa4*/
  v88 = 0; /*0x26bfaa*/
  v89 = 0; /*0x26bfae*/
  v9 = -1; /*0x26bfb2*/
  do /*0x26bfb8*/
    ++v9; /*0x26bfb5*/
  while ( CString[v9] ); /*0x26bfb8*/
  sub_3C230(v87); /*0x26bfc5*/
  v10 = cocos2d::CCArray::objectAtIndex(v3, 2u); /*0x26bfd3*/
  v11 = cocos2d::CCString::getCString(v10); /*0x26bfdc*/
  *(_OWORD *)v84 = 0; /*0x26bfe5*/
  v85 = 0; /*0x26bfe9*/
  v86 = 0; /*0x26bfed*/
  v12 = -1; /*0x26bff1*/
  do /*0x26bff7*/
    ++v12; /*0x26bff4*/
  while ( v11[v12] ); /*0x26bff7*/
  sub_3C230(v84); /*0x26c005*/
  v13 = cocos2d::CCArray::objectAtIndex(v3, 3u); /*0x26c013*/
  v14 = cocos2d::CCString::getCString(v13); /*0x26c01c*/
  *(_OWORD *)Src = 0; /*0x26c025*/
  v82 = 0; /*0x26c029*/
  v83 = 0; /*0x26c02d*/
  do /*0x26c034*/
    ++v1; /*0x26c031*/
  while ( v14[v1] ); /*0x26c034*/
  sub_3C230(Src); /*0x26c044*/
  v15 = cocos2d::CCArray::objectAtIndex(v3, 4u); /*0x26c052*/
  v69 = cocos2d::CCString::intValue(v15); /*0x26c061*/
  v16 = cocos2d::CCArray::objectAtIndex(v3, 5u); /*0x26c06c*/
  v64 = cocos2d::CCString::boolValue(v16); /*0x26c07b*/
  v17 = cocos2d::CCArray::objectAtIndex(v3, 6u); /*0x26c086*/
  v63 = cocos2d::CCString::boolValue(v17); /*0x26c095*/
  v18 = cocos2d::CCArray::objectAtIndex(v3, 7u); /*0x26c0a0*/
  v62 = cocos2d::CCString::boolValue(v18); /*0x26c0af*/
  v19 = cocos2d::CCArray::objectAtIndex(v3, 8u); /*0x26c0ba*/
  v68 = cocos2d::CCString::intValue(v19); /*0x26c0c9*/
  v20 = cocos2d::CCArray::objectAtIndex(v3, 9u); /*0x26c0d4*/
  v61 = cocos2d::CCString::boolValue(v20); /*0x26c0e3*/
  v21 = cocos2d::CCArray::objectAtIndex(v3, 0xAu); /*0x26c0ee*/
  v60 = cocos2d::CCString::boolValue(v21); /*0x26c0fd*/
  v22 = cocos2d::CCArray::objectAtIndex(v3, 0xBu); /*0x26c108*/
  v59 = cocos2d::CCString::boolValue(v22); /*0x26c117*/
  v23 = cocos2d::CCArray::objectAtIndex(v3, 0xCu); /*0x26c122*/
  v58 = cocos2d::CCString::boolValue(v23); /*0x26c131*/
  v24 = cocos2d::CCArray::objectAtIndex(v3, 0xDu); /*0x26c13c*/
  v57 = cocos2d::CCString::boolValue(v24); /*0x26c14b*/
  v25 = cocos2d::CCArray::stringAtIndex(v3, 0xEu); /*0x26c156*/
  v56 = cocos2d::CCString::boolValue(v25); /*0x26c165*/
  v26 = cocos2d::CCArray::stringAtIndex(v3, 0xFu); /*0x26c170*/
  v55 = cocos2d::CCString::boolValue(v26); /*0x26c17f*/
  v27 = cocos2d::CCArray::stringAtIndex(v3, 0x10u); /*0x26c18a*/
  v54 = cocos2d::CCString::boolValue(v27); /*0x26c199*/
  v28 = cocos2d::CCArray::stringAtIndex(v3, 0x11u); /*0x26c1a4*/
  v53 = cocos2d::CCString::boolValue(v28); /*0x26c1b3*/
  v29 = cocos2d::CCArray::stringAtIndex(v3, 0x12u); /*0x26c1be*/
  v52 = cocos2d::CCString::boolValue(v29); /*0x26c1cd*/
  v30 = cocos2d::CCArray::stringAtIndex(v3, 0x13u); /*0x26c1d8*/
  v67 = cocos2d::CCString::intValue(v30); /*0x26c1e7*/
  v31 = cocos2d::CCArray::stringAtIndex(v3, 0x14u); /*0x26c1f2*/
  v66 = cocos2d::CCString::intValue(v31); /*0x26c201*/
  v32 = cocos2d::CCArray::stringAtIndex(v3, 0x15u); /*0x26c20c*/
  v65 = cocos2d::CCString::intValue(v32); /*0x26c21b*/
  v77 = &v71; /*0x26c222*/
  v78 = &v74; /*0x26c22a*/
  v71 = 0; /*0x26c231*/
  v72 = 0; /*0x26c235*/
  v73 = 0; /*0x26c239*/
  v36 = Src; /*0x26c23d*/
  if ( v83 > 0xF ) /*0x26c246*/
    v36 = (void **)Src[0]; /*0x26c246*/
  v37 = 0x7FFFFFFFFFFFFFFFLL; /*0x26c24b*/
  v38 = v82; /*0x26c255*/
  if ( v82 > 0x7FFFFFFFFFFFFFFFLL ) /*0x26c25c*/
    sub_8D90(v34, v33, v35); /*0x26c5b0*/
  if ( v82 > 0xF ) /*0x26c26b*/
  {
    v39 = v82 | 0xF; /*0x26c286*/
    if ( (v82 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x26c28d*/
    {
      if ( v39 < 0x16 ) /*0x26c297*/
        v39 = 22; /*0x26c297*/
    }
    else
    {
      v39 = 0x7FFFFFFFFFFFFFFFLL; /*0x26c28f*/
    }
    *(_QWORD *)&v71 = sub_3C460(v39 + 1); /*0x26c2a4*/
    v72 = v38; /*0x26c2a8*/
    v73 = v39; /*0x26c2ac*/
    memcpy((void *)v71, v36, v38 + 1); /*0x26c2ba*/
  }
  else
  {
    v72 = v82; /*0x26c26d*/
    v73 = 15; /*0x26c271*/
    v71 = *(_OWORD *)v36; /*0x26c27d*/
  }
  v74 = 0; /*0x26c2c7*/
  v75 = 0; /*0x26c2cb*/
  v76 = 0; /*0x26c2cf*/
  v40 = v84; /*0x26c2d3*/
  v41 = (char *)v84[0]; /*0x26c2d7*/
  if ( v86 > 0xF ) /*0x26c2e0*/
    v40 = (void **)v84[0]; /*0x26c2e0*/
  v42 = v85; /*0x26c2e4*/
  if ( v85 > 0x7FFFFFFFFFFFFFFFLL ) /*0x26c2eb*/
    sub_8D90(v34, v33, v35); /*0x26c5b6*/
  if ( v85 > 0xF ) /*0x26c2f5*/
  {
    v43 = v85 | 0xF; /*0x26c311*/
    if ( (v85 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x26c318*/
    {
      if ( v43 < 0x16 ) /*0x26c323*/
        v43 = 22; /*0x26c323*/
    }
    else
    {
      v43 = 0x7FFFFFFFFFFFFFFFLL; /*0x26c31a*/
    }
    *(_QWORD *)&v74 = sub_3C460(v43 + 1); /*0x26c330*/
    v75 = v42; /*0x26c334*/
    v76 = v43; /*0x26c338*/
    memcpy((void *)v74, v40, v42 + 1); /*0x26c346*/
  }
  else
  {
    v75 = v85; /*0x26c2f7*/
    v76 = 15; /*0x26c2fb*/
    v74 = *(_OWORD *)v40; /*0x26c308*/
  }
  *(_OWORD *)Block = 0; /*0x26c34f*/
  si128 = 0u; /*0x26c353*/
  v44 = v87; /*0x26c35b*/
  v45 = (char *)v87[0]; /*0x26c35f*/
  v46 = v89; /*0x26c363*/
  if ( v89 > 0xF ) /*0x26c36b*/
    v44 = (void **)v87[0]; /*0x26c36b*/
  v47 = v88; /*0x26c36f*/
  if ( v88 > 0x7FFFFFFFFFFFFFFFLL ) /*0x26c376*/
    sub_8D90(v34, v33, v35); /*0x26c5aa*/
  if ( v88 > 0xF ) /*0x26c380*/
  {
    if ( (v88 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x26c3a3*/
    {
      v37 = v88 | 0xF; /*0x26c3a5*/
      if ( (v88 | 0xF) < 0x16 ) /*0x26c3b1*/
        v37 = 22; /*0x26c3b1*/
    }
    Block[0] = (void *)sub_3C460(v37 + 1); /*0x26c3be*/
    si128.m128i_i64[0] = v47; /*0x26c3c2*/
    si128.m128i_i64[1] = v37; /*0x26c3c6*/
    memcpy(Block[0], v44, v47 + 1); /*0x26c3d4*/
  }
  else
  {
    si128.m128i_i64[0] = v88; /*0x26c382*/
    si128.m128i_i64[1] = 15; /*0x26c386*/
    *(_OWORD *)Block = *(_OWORD *)v44; /*0x26c393*/
  }
  v48 = GJSearchObject_create_1( /*0x26c48b*/
          v70,
          (unsigned int)Block,
          (unsigned int)&v74,
          (unsigned int)&v71,
          v69,
          v64,
          v63,
          v62,
          v68,
          v61,
          v60,
          v59,
          v58,
          v57,
          v56,
          v55,
          v54,
          v53,
          v52,
          v67,
          v66,
          v65);
  if ( v83 > 0xF ) /*0x26c496*/
  {
    v49 = Src[0]; /*0x26c49c*/
    if ( v83 + 1 >= 0x1000 ) /*0x26c4aa*/
    {
      v49 = (void *)*((_QWORD *)Src[0] - 1); /*0x26c4b0*/
      if ( (unsigned __int64)((char *)Src[0] - (char *)v49 - 8) > 0x1F ) /*0x26c4bf*/
        invoke_watson(0, 0, 0, 0, 0); /*0x26c4d0*/
    }
    j_j_free(v49); /*0x26c4da*/
  }
  if ( v86 > 0xF ) /*0x26c4e8*/
  {
    v50 = v41; /*0x26c4ee*/
    if ( v86 + 1 >= 0x1000 ) /*0x26c4f8*/
    {
      v41 = (char *)*((_QWORD *)v41 - 1); /*0x26c4fe*/
      if ( (unsigned __int64)(v50 - v41 - 8) > 0x1F ) /*0x26c50d*/
        invoke_watson(0, 0, 0, 0, 0); /*0x26c51e*/
    }
    j_j_free(v41); /*0x26c528*/
  }
  if ( v46 > 0xF ) /*0x26c532*/
  {
    v51 = v45; /*0x26c538*/
    if ( v46 + 1 >= 0x1000 ) /*0x26c542*/
    {
      v45 = (char *)*((_QWORD *)v45 - 1); /*0x26c548*/
      if ( (unsigned __int64)(v51 - v45 - 8) > 0x1F ) /*0x26c557*/
        invoke_watson(0, 0, 0, 0, 0); /*0x26c568*/
    }
    j_j_free(v45); /*0x26c572*/
  }
  return v48; /*0x26c57a*/
}

// [3/9] Address: 0x26c5c0
// Method: GJSearchObject::create
// Hidden C++ exception states: #wind=2
__int64 __fastcall GJSearchObject_create(int a1)
{
  __int128 v2; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v3; // [rsp+C0h] [rbp-58h]
  __int64 v4; // [rsp+C8h] [rbp-50h]
  __int128 v5; // [rsp+D0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+E0h] [rbp-38h]
  __int64 v7; // [rsp+E8h] [rbp-30h]
  __int128 v8; // [rsp+F0h] [rbp-28h] BYREF
  __int64 v9; // [rsp+100h] [rbp-18h]
  __int64 v10; // [rsp+108h] [rbp-10h]

  v2 = 0; /*0x26c5dd*/
  v3 = 1; /*0x26c5e2*/
  v4 = 15; /*0x26c5ea*/
  LOWORD(v2) = 45; /*0x26c5f2*/
  v5 = 0; /*0x26c5f9*/
  v6 = 1; /*0x26c5fe*/
  v7 = 15; /*0x26c606*/
  LOWORD(v5) = 45; /*0x26c60e*/
  v8 = 0; /*0x26c615*/
  v9 = 0; /*0x26c61c*/
  v10 = 15; /*0x26c620*/
  LOBYTE(v8) = 0; /*0x26c628*/
  return GJSearchObject_create_1( /*0x26c68e*/
           a1,
           (unsigned int)&v8,
           (unsigned int)&v5,
           (unsigned int)&v2,
           0,
           0,
           0,
           0,
           0,
           0,
           0,
           0,
           0,
           0,
           0,
           0,
           0,
           0,
           0,
           0,
           0,
           0);
}

// [4/9] Address: 0x26c6a0
// Method: GJSearchObject::create_0
// Hidden C++ exception states: #wind=3
__int64 __fastcall GJSearchObject_create_0(int a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rbx
  __int128 v7; // [rsp+B0h] [rbp-98h] BYREF
  __int64 v8; // [rsp+C0h] [rbp-88h]
  __int64 v9; // [rsp+C8h] [rbp-80h]
  __int128 v10; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v11; // [rsp+E0h] [rbp-68h]
  __int64 v12; // [rsp+E8h] [rbp-60h]
  __int128 *v13; // [rsp+F0h] [rbp-58h]
  __int128 *v14; // [rsp+F8h] [rbp-50h]
  _QWORD v15[5]; // [rsp+108h] [rbp-40h] BYREF

  v15[4] = a2; /*0x26c6c6*/
  v13 = &v7; /*0x26c6d1*/
  v14 = &v10; /*0x26c6d9*/
  v7 = 0; /*0x26c6e0*/
  v8 = 1; /*0x26c6e8*/
  v9 = 15; /*0x26c6f3*/
  LOWORD(v7) = 45; /*0x26c6fb*/
  v10 = 0; /*0x26c705*/
  v11 = 1; /*0x26c70a*/
  v12 = 15; /*0x26c712*/
  LOWORD(v10) = 45; /*0x26c71a*/
  v4 = sub_3E4F0(v15, a2); /*0x26c725*/
  v5 = GJSearchObject_create_1( /*0x26c7a1*/
         a1,
         v4,
         (unsigned int)&v10,
         (unsigned int)&v7,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0,
         0);
  sub_3C310(a2); /*0x26c7a7*/
  return v5; /*0x26c7af*/
}

// [5/9] Address: 0x26c7d0
// Method: GJSearchObject::create_1
// Hidden C++ exception states: #wind=9
char *__fastcall GJSearchObject_create_1(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        int a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17,
        char a18,
        char a19,
        int a20,
        int a21,
        int a22)
{
  char *v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // r15
  void *v31; // rdx
  void *v32; // rdx
  void *v33; // rdx
  _BYTE v38[32]; // [rsp+58h] [rbp-C0h] BYREF
  _BYTE v39[32]; // [rsp+78h] [rbp-A0h] BYREF
  _BYTE v40[32]; // [rsp+98h] [rbp-80h] BYREF
  __int64 v41; // [rsp+B8h] [rbp-60h]
  __int64 v42; // [rsp+C0h] [rbp-58h]
  __int64 v43; // [rsp+C8h] [rbp-50h]

  v41 = a2; /*0x26c815*/
  v42 = a3; /*0x26c819*/
  v43 = a4; /*0x26c81d*/
  v26 = (char *)operator new(0x1D8u); /*0x26c82b*/
  cocos2d::CCNode::CCNode((cocos2d::CCNode *)v26); /*0x26c836*/
  *(_QWORD *)v26 = &GJSearchObject::`vftable'; /*0x26c843*/
  *((_DWORD *)v26 + 80) = 0; /*0x26c848*/
  *(_OWORD *)(v26 + 328) = 0; /*0x26c858*/
  *((_QWORD *)v26 + 43) = 0; /*0x26c85d*/
  *((_QWORD *)v26 + 44) = 15; /*0x26c861*/
  v26[328] = 0; /*0x26c869*/
  *(_OWORD *)(v26 + 360) = 0; /*0x26c874*/
  *((_QWORD *)v26 + 47) = 0; /*0x26c878*/
  *((_QWORD *)v26 + 48) = 15; /*0x26c87c*/
  v26[360] = 0; /*0x26c884*/
  *(_OWORD *)(v26 + 392) = 0; /*0x26c88e*/
  *((_QWORD *)v26 + 51) = 0; /*0x26c893*/
  *((_QWORD *)v26 + 52) = 15; /*0x26c898*/
  v26[392] = 0; /*0x26c8a1*/
  *((_DWORD *)v26 + 106) = 0; /*0x26c8a5*/
  *((_WORD *)v26 + 214) = 0; /*0x26c8ab*/
  *((_QWORD *)v26 + 54) = 0; /*0x26c8b2*/
  *((_DWORD *)v26 + 110) = 0; /*0x26c8b9*/
  v26[444] = 0; /*0x26c8bf*/
  *((_QWORD *)v26 + 56) = 0; /*0x26c8c5*/
  *((_DWORD *)v26 + 114) = 0; /*0x26c8cc*/
  *((_WORD *)v26 + 230) = 0; /*0x26c8d2*/
  v26[462] = 0; /*0x26c8d9*/
  *((_DWORD *)v26 + 116) = 0; /*0x26c8df*/
  v27 = sub_3E4F0(v38, a4); /*0x26c906*/
  v28 = sub_3E4F0(v39, a3); /*0x26c91b*/
  v29 = sub_3E4F0(v40, a2); /*0x26c92e*/
  v30 = v29; /*0x26c933*/
  *((_DWORD *)v26 + 80) = a1; /*0x26c93b*/
  if ( v26 + 328 != (char *)v29 ) /*0x26c944*/
  {
    v31 = (void *)v29; /*0x26c946*/
    if ( *(_QWORD *)(v29 + 24) > 0xFu ) /*0x26c94e*/
      v31 = *(void **)v29; /*0x26c950*/
    sub_3F5A0(v26 + 328, v31, *(_QWORD *)(v29 + 16)); /*0x26c95a*/
  }
  if ( v26 + 360 != (char *)v28 ) /*0x26c962*/
  {
    v32 = (void *)v28; /*0x26c964*/
    if ( *(_QWORD *)(v28 + 24) > 0xFu ) /*0x26c96c*/
      v32 = *(void **)v28; /*0x26c96e*/
    sub_3F5A0(v26 + 360, v32, *(_QWORD *)(v28 + 16)); /*0x26c978*/
  }
  if ( v26 + 392 != (char *)v27 ) /*0x26c980*/
  {
    v33 = (void *)v27; /*0x26c982*/
    if ( *(_QWORD *)(v27 + 24) > 0xFu ) /*0x26c98a*/
      v33 = *(void **)v27; /*0x26c98c*/
    sub_3F5A0(v26 + 392, v33, *(_QWORD *)(v27 + 16)); /*0x26c996*/
  }
  *((_DWORD *)v26 + 106) = a5; /*0x26c9a2*/
  v26[428] = a6; /*0x26c9b0*/
  v26[436] = a7; /*0x26c9be*/
  v26[438] = a8; /*0x26c9cc*/
  *((_DWORD *)v26 + 114) = a9; /*0x26c9d9*/
  v26[439] = a10; /*0x26c9e7*/
  v26[440] = a11; /*0x26c9f5*/
  v26[460] = a12; /*0x26ca03*/
  v26[461] = a13; /*0x26ca11*/
  v26[429] = a14; /*0x26ca1f*/
  v26[441] = a15; /*0x26ca2d*/
  v26[442] = a16; /*0x26ca3b*/
  v26[444] = a18; /*0x26ca49*/
  v26[443] = a17; /*0x26ca57*/
  v26[437] = a19; /*0x26ca65*/
  *((_DWORD *)v26 + 112) = a20; /*0x26ca72*/
  *((_DWORD *)v26 + 113) = a21; /*0x26ca7f*/
  *((_DWORD *)v26 + 116) = a22; /*0x26ca8c*/
  sub_3C310(v30); /*0x26ca95*/
  sub_3C310(v28); /*0x26ca9e*/
  sub_3C310(v27); /*0x26caa7*/
  cocos2d::CCObject::autorelease((cocos2d::CCObject *)v26); /*0x26caaf*/
  sub_3C310(a2); /*0x26cabb*/
  sub_3C310(a3); /*0x26cac6*/
  sub_3C310(a4); /*0x26cad1*/
  return v26; /*0x26cad9*/
}

// [6/9] Address: 0x26cb10
// Method: GJSearchObject::getKey
// Hidden C++ exception states: #wind=2
__int64 __fastcall GJSearchObject_getKey(__int64 a1)
{
  int v2; // edi
  int v3; // ebx
  int v4; // eax
  __int64 v6; // [rsp+B0h] [rbp-78h] BYREF
  _BYTE v7[32]; // [rsp+D0h] [rbp-58h] BYREF
  _BYTE v8[56]; // [rsp+F0h] [rbp-38h] BYREF

  v2 = sub_3E4F0(&v6, a1 + 392); /*0x26cb40*/
  v3 = sub_3E4F0(v7, a1 + 360); /*0x26cb57*/
  v4 = sub_3E4F0(v8, a1 + 328); /*0x26cb69*/
  return GJSearchObject_getSearchKey( /*0x26cc55*/
           *(_DWORD *)(a1 + 320),
           v4,
           v3,
           v2,
           *(_DWORD *)(a1 + 424),
           *(_BYTE *)(a1 + 428),
           *(_BYTE *)(a1 + 436),
           *(_BYTE *)(a1 + 438),
           *(_DWORD *)(a1 + 456),
           *(_BYTE *)(a1 + 439),
           *(_BYTE *)(a1 + 440),
           *(_BYTE *)(a1 + 460),
           *(_BYTE *)(a1 + 461),
           *(_BYTE *)(a1 + 429),
           *(_BYTE *)(a1 + 441),
           *(_BYTE *)(a1 + 442),
           *(_BYTE *)(a1 + 443),
           *(_BYTE *)(a1 + 444),
           *(_BYTE *)(a1 + 437),
           *(_DWORD *)(a1 + 448),
           *(_DWORD *)(a1 + 452),
           *(_DWORD *)(a1 + 464));
}

// [7/9] Address: 0x26cc60
// Method: GJSearchObject::getPageObject
// Hidden C++ exception states: #wind=2
char *__fastcall GJSearchObject_getPageObject(__int64 a1, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  char *result; // rax
  __int64 v8; // [rsp+B0h] [rbp-78h] BYREF
  _BYTE v9[32]; // [rsp+D0h] [rbp-58h] BYREF
  _BYTE v10[56]; // [rsp+F0h] [rbp-38h] BYREF

  v4 = sub_3E4F0(&v8, a1 + 392); /*0x26cc96*/
  v5 = sub_3E4F0(v9, a1 + 360); /*0x26ccad*/
  v6 = sub_3E4F0(v10, a1 + 328); /*0x26ccbf*/
  result = GJSearchObject_create_1( /*0x26cda0*/
             *(_DWORD *)(a1 + 320),
             v6,
             v5,
             v4,
             a2,
             *(_BYTE *)(a1 + 428),
             *(_BYTE *)(a1 + 436),
             *(_BYTE *)(a1 + 438),
             *(_DWORD *)(a1 + 456),
             *(_BYTE *)(a1 + 439),
             *(_BYTE *)(a1 + 440),
             *(_BYTE *)(a1 + 460),
             *(_BYTE *)(a1 + 461),
             *(_BYTE *)(a1 + 429),
             *(_BYTE *)(a1 + 441),
             *(_BYTE *)(a1 + 442),
             *(_BYTE *)(a1 + 443),
             *(_BYTE *)(a1 + 444),
             *(_BYTE *)(a1 + 437),
             *(_DWORD *)(a1 + 448),
             *(_DWORD *)(a1 + 452),
             *(_DWORD *)(a1 + 464));
  *((_DWORD *)result + 108) = *(_DWORD *)(a1 + 432); /*0x26cdab*/
  return result; /*0x26cdb1*/
}

// [8/9] Address: 0x26cdd0
// Method: GJSearchObject::getSearchKey
// Hidden C++ exception states: #wind=6
const char *__fastcall GJSearchObject_getSearchKey(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        int a9,
        unsigned __int8 a10,
        unsigned __int8 a11,
        unsigned __int8 a12,
        unsigned __int8 a13,
        unsigned __int8 a14,
        unsigned __int8 a15,
        unsigned __int8 a16,
        unsigned __int8 a17,
        unsigned __int8 a18,
        unsigned __int8 a19,
        int a20,
        int a21,
        int a22)
{
  unsigned __int8 v25; // bl
  unsigned __int8 v26; // r11
  unsigned __int8 v27; // r10
  unsigned __int8 v28; // dl
  const char *v30; // r8
  cocos2d::CCString *v31; // rax
  const char *CString; // rbx
  __int64 v33; // rcx
  int v34; // ecx
  int v35; // ecx
  int v36; // ebx
  _DWORD *v37; // rcx
  int v38; // ebx
  const char *v39; // r9
  cocos2d::CCString *v40; // rax
  const char *v41; // rax
  size_t v42; // rbx
  __int64 v43; // r8
  _DWORD *v44; // rdx
  int v45; // edx
  cocos2d::CCString *v46; // rax
  char *v47; // rax
  cocos2d::CCString *v48; // rax
  void *v49; // r8
  char v51; // [rsp+C0h] [rbp-D8h]
  int v52; // [rsp+CCh] [rbp-CCh]
  void *v53; // [rsp+D0h] [rbp-C8h]
  const char *v54; // [rsp+D0h] [rbp-C8h]
  void *v55; // [rsp+D0h] [rbp-C8h]
  const char *v57; // [rsp+F0h] [rbp-A8h]
  void *Block[2]; // [rsp+128h] [rbp-70h] BYREF
  __int64 v62; // [rsp+138h] [rbp-60h]
  unsigned __int64 v63; // [rsp+140h] [rbp-58h]

  v25 = a14; /*0x26ce98*/
  v26 = a15; /*0x26cea7*/
  v27 = a16; /*0x26ceb8*/
  v28 = a17; /*0x26cec9*/
  if ( a1 == 14 ) /*0x26cf25*/
  {
    v30 = (const char *)a2; /*0x26cf27*/
    if ( *(_QWORD *)(a2 + 24) > 0xFu ) /*0x26cf2f*/
      v30 = *(const char **)a2; /*0x26cf31*/
    v31 = cocos2d::CCString::createWithFormat("%i_%s_%i", 14, v30, a5); /*0x26cf43*/
    CString = cocos2d::CCString::getCString(v31); /*0x26cf52*/
    sub_3C310(a2); /*0x26cf58*/
    sub_3C310(a3); /*0x26cf61*/
    v33 = a4; /*0x26cf67*/
    goto LABEL_49; /*0x26cf6a*/
  }
  v34 = a1 - 32; /*0x26cf6f*/
  if ( !v34 ) /*0x26cf72*/
  {
    v36 = 0; /*0x26cf99*/
    goto LABEL_12; /*0x26cf99*/
  }
  v35 = v34 - 1; /*0x26cf74*/
  if ( !v35 ) /*0x26cf77*/
  {
    v36 = 1; /*0x26cf92*/
    goto LABEL_12; /*0x26cf97*/
  }
  if ( v35 == 1 ) /*0x26cf7c*/
  {
    v36 = 2; /*0x26cf8b*/
LABEL_12:
    v52 = v36; /*0x26cf9b*/
    v51 = 1; /*0x26cfa2*/
    v37 = *(_DWORD **)&qword_905FB0; /*0x26cfaa*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x26cfb4*/
    {
      v53 = operator new(0x690u); /*0x26cfc0*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v53); /*0x26cfd1*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x26cfe2*/
      v37 = *(_DWORD **)&qword_905FB0; /*0x26cfe4*/
      v26 = a15; /*0x26cfeb*/
      v27 = a16; /*0x26cff4*/
      v28 = a17; /*0x26cffd*/
    }
    if ( v36 ) /*0x26d007*/
    {
      v38 = v36 - 1; /*0x26d009*/
      if ( v38 ) /*0x26d00c*/
      {
        if ( v38 == 1 ) /*0x26d011*/
          a21 = v37[246]; /*0x26d018*/
        else
          a21 = 0; /*0x26d013*/
      }
      else
      {
        a21 = v37[243]; /*0x26d021*/
      }
    }
    else
    {
      a21 = v37[240]; /*0x26d02a*/
    }
    v25 = a14; /*0x26d031*/
    goto LABEL_22; /*0x26d031*/
  }
  v51 = 0; /*0x26cf7e*/
LABEL_22:
  v57 = (const char *)a4; /*0x26d039*/
  if ( *(_QWORD *)(a4 + 24) > 0xFu ) /*0x26d046*/
    v57 = *(const char **)a4; /*0x26d04b*/
  v39 = (const char *)a3; /*0x26d053*/
  if ( *(_QWORD *)(a3 + 24) > 0xFu ) /*0x26d05b*/
    v39 = *(const char **)a3; /*0x26d05d*/
  v54 = (const char *)a2; /*0x26d060*/
  if ( *(_QWORD *)(a2 + 24) > 0xFu ) /*0x26d06d*/
    v54 = *(const char **)a2; /*0x26d072*/
  v40 = cocos2d::CCString::createWithFormat( /*0x26d156*/
          "%i_%s_%s_%s_%i_%i_%i_%i_%i_%i_%i_%i_%i_%i_%i_%i_%i_%i_%i_%i_%i_%i",
          a1,
          v54,
          v39,
          v57,
          a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          a11,
          a12,
          a13,
          v25,
          v26,
          v27,
          v28,
          a18,
          a19,
          a20,
          a21,
          a22);
  v41 = cocos2d::CCString::getCString(v40); /*0x26d15f*/
  *(_OWORD *)Block = 0; /*0x26d168*/
  v62 = 0; /*0x26d172*/
  v63 = 0; /*0x26d17a*/
  v42 = -1; /*0x26d182*/
  v43 = -1; /*0x26d189*/
  do /*0x26d193*/
    ++v43; /*0x26d190*/
  while ( v41[v43] ); /*0x26d193*/
  sub_3C230(Block); /*0x26d1a4*/
  if ( v51 ) /*0x26d1b2*/
  {
    v44 = *(_DWORD **)&qword_905FB0; /*0x26d1b8*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x26d1c2*/
    {
      v55 = operator new(0x690u); /*0x26d1ce*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v55); /*0x26d1df*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x26d1f0*/
      v44 = *(_DWORD **)&qword_905FB0; /*0x26d1f2*/
    }
    if ( v52 ) /*0x26d202*/
    {
      if ( v52 == 1 ) /*0x26d207*/
      {
        v45 = v44[242]; /*0x26d21a*/
      }
      else if ( v52 == 2 ) /*0x26d20c*/
      {
        v45 = v44[245]; /*0x26d212*/
      }
      else
      {
        v45 = 0; /*0x26d20e*/
      }
    }
    else
    {
      v45 = v44[239]; /*0x26d222*/
    }
    v46 = cocos2d::CCString::createWithFormat("_%i", v45); /*0x26d22f*/
    v47 = (char *)cocos2d::CCString::getCString(v46); /*0x26d238*/
    do /*0x26d243*/
      ++v42; /*0x26d240*/
    while ( v47[v42] ); /*0x26d243*/
    sub_43D80(Block, v47, v42); /*0x26d257*/
  }
  v48 = (cocos2d::CCString *)cocos2d::CCString::create(Block); /*0x26d264*/
  CString = cocos2d::CCString::getCString(v48); /*0x26d273*/
  if ( v63 > 0xF ) /*0x26d282*/
  {
    v49 = Block[0]; /*0x26d287*/
    if ( v63 + 1 >= 0x1000 ) /*0x26d299*/
    {
      v49 = (void *)*((_QWORD *)Block[0] - 1); /*0x26d29f*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v49 - 8) > 0x1F ) /*0x26d2ae*/
        invoke_watson(0, 0, 0, 0, 0); /*0x26d2bf*/
    }
    j_j_free(v49); /*0x26d2c9*/
  }
  v62 = 0; /*0x26d2ce*/
  v63 = 15; /*0x26d2d6*/
  LOBYTE(Block[0]) = 0; /*0x26d2e2*/
  sub_3C310(a2); /*0x26d2f2*/
  sub_3C310(a3); /*0x26d300*/
  v33 = a4; /*0x26d306*/
LABEL_49:
  sub_3C310(v33); /*0x26d30e*/
  return CString; /*0x26d316*/
}

// [9/9] Address: 0x26d340
// Method: GJSearchObject::isLevelSearchObject
bool __fastcall GJSearchObject_isLevelSearchObject(__int64 a1)
{
  bool result; // al

  switch ( *(_DWORD *)(a1 + 320) ) /*0x26d36b*/
  {
    case 5: /*0x26d36b*/
    case 9: /*0x26d36b*/
    case 0xA: /*0x26d36b*/
    case 0xE: /*0x26d36b*/
    case 0x65: /*0x26d36b*/
    case 0x66: /*0x26d36b*/
      result = 0; /*0x26d36d*/
      break; /*0x26d36f*/
    default:
      result = *(_DWORD *)(a1 + 464) == 0; /*0x26d377*/
      break; /*0x26d377*/
  }
  return result; /*0x26d36f*/
}
