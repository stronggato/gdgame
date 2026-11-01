#include <Geode/binding/CreateMenuItem.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x128510
// Method: CreateMenuItem::create
// Hidden C++ exception states: #wind=4
__int64 __fastcall CreateMenuItem_create(__int64 a1, _QWORD *a2)
{
  int v4; // edi
  unsigned int v5; // r15d
  __int64 v6; // rbx
  _QWORD *v7; // rax
  _QWORD *v8; // r14
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  _BYTE *v15; // rax
  _QWORD *v16; // rbx
  __int64 v17; // rax
  __int64 i; // rcx
  _BYTE *v19; // rax
  _QWORD *v20; // rbx
  __int64 v21; // rax
  __int64 j; // rcx
  _BYTE *v23; // rax
  _QWORD *v24; // rbx
  __int64 v25; // rax
  __int64 k; // rcx
  _BYTE *v27; // rax
  _QWORD *v28; // rbx
  __int64 v29; // rax
  __int64 m; // rcx
  _BYTE *v31; // rax
  _QWORD *v32; // rbx
  __int64 v33; // rax
  __int64 n; // rcx
  _BYTE *v35; // rax
  _QWORD *v36; // rbx
  __int64 v37; // rax
  __int64 ii; // rcx
  _BYTE *v39; // rax
  _QWORD *v40; // rbx
  __int64 v41; // rax
  __int64 jj; // rcx
  _BYTE *v43; // rax
  _QWORD *v44; // rbx
  __int64 v45; // rax
  __int64 kk; // rcx
  _BYTE *v47; // rax
  _QWORD *v48; // rbx
  __int64 v49; // rax
  __int64 mm; // rcx
  _BYTE *v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rax
  __int64 v58; // rbx
  _QWORD *v59; // rbx
  __int64 v60; // rax
  __int64 nn; // rcx
  _BYTE *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  _QWORD *v66; // rbx
  __int64 v67; // rax
  __int64 i1; // rcx
  _BYTE *v69; // rax
  _QWORD *v70; // rbx
  __int64 v71; // rax
  __int64 i2; // rcx
  _BYTE *v73; // rax
  _QWORD *v74; // rbx
  __int64 v75; // rax
  __int64 i3; // rcx
  _BYTE *v77; // rax
  char v78; // r14
  char v79; // r15
  char v80; // r12
  _QWORD *v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rbx
  _QWORD *v84; // rax
  char v86[8]; // [rsp+30h] [rbp-69h] BYREF
  _QWORD *v87; // [rsp+38h] [rbp-61h] BYREF
  __int64 v88; // [rsp+40h] [rbp-59h]
  _OWORD v89[2]; // [rsp+50h] [rbp-49h] BYREF
  __int16 v90; // [rsp+70h] [rbp-29h]
  _OWORD v91[2]; // [rsp+80h] [rbp-19h] BYREF
  __int128 v92; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v93; // [rsp+B0h] [rbp+17h]
  _QWORD *v94; // [rsp+B8h] [rbp+1Fh]

  v94 = a2; /*0x12854d*/
  v4 = 0; /*0x128551*/
  v5 = 0; /*0x128553*/
  if ( a2[2] ) /*0x128556*/
  {
    v6 = 0; /*0x12855c*/
    do /*0x12858d*/
    {
      v7 = a2; /*0x128560*/
      if ( a2[3] <= 0xFu ) /*0x128568*/
      {
        v8 = a2; /*0x128572*/
      }
      else
      {
        v8 = (_QWORD *)*a2; /*0x12856a*/
        v7 = (_QWORD *)*a2; /*0x12856d*/
      }
      *((_BYTE *)v8 + v6) = toupper(*((char *)v7 + v6)); /*0x12857f*/
      v6 = ++v5; /*0x128586*/
    }
    while ( (unsigned __int64)v5 < a2[2] ); /*0x12858d*/
  }
  v88 = 0; /*0x128593*/
  v9 = operator new(0x28u); /*0x12859c*/
  v14 = (__int64)v9; /*0x1285a1*/
  *v9 = v9; /*0x1285a4*/
  v9[1] = v9; /*0x1285a7*/
  v9[2] = v9; /*0x1285ab*/
  *((_WORD *)v9 + 12) = 257; /*0x1285af*/
  v87 = v9; /*0x1285b5*/
  *(_QWORD *)&v89[0] = v9; /*0x1285b9*/
  DWORD2(v89[0]) = 0; /*0x1285bd*/
  if ( *((_BYTE *)v9 + 25) || *((char *)v9 + 28) > 48 ) /*0x1285d4*/
  {
    if ( v88 == 0x666666666666666LL ) /*0x1285da*/
      sub_5AC20(v11, v10, v12, v13); /*0x1290d2*/
    *(_QWORD *)&v91[0] = &v87; /*0x1285e4*/
    *((_QWORD *)&v91[0] + 1) = 0; /*0x1285e8*/
    v15 = operator new(0x28u); /*0x1285f1*/
    v15[28] = 48; /*0x1285f7*/
    *((_DWORD *)v15 + 8) = 0; /*0x1285fb*/
    *(_QWORD *)v15 = v14; /*0x1285fe*/
    *((_QWORD *)v15 + 1) = v14; /*0x128601*/
    *((_QWORD *)v15 + 2) = v14; /*0x128605*/
    *((_WORD *)v15 + 12) = 0; /*0x128609*/
    v91[0] = v89[0]; /*0x128613*/
    v14 = sub_69600(&v87, v91, v15); /*0x128627*/
  }
  *(_DWORD *)(v14 + 32) = 0; /*0x12862a*/
  v16 = v87; /*0x12862d*/
  v17 = v87[1]; /*0x128631*/
  *(_QWORD *)&v89[0] = v17; /*0x128635*/
  DWORD2(v89[0]) = 0; /*0x128639*/
  for ( i = (__int64)v87; !*(_BYTE *)(v17 + 25); v17 = *(_QWORD *)v17 ) /*0x12863f*/
  {
    *(_QWORD *)&v89[0] = v17; /*0x128645*/
    if ( *(char *)(v17 + 28) >= 49 ) /*0x12864d*/
    {
      DWORD2(v89[0]) = 1; /*0x128658*/
      i = v17; /*0x12865f*/
    }
    else
    {
      DWORD2(v89[0]) = 0; /*0x12864f*/
      v17 += 16; /*0x128652*/
    }
  }
  if ( *(_BYTE *)(i + 25) || *(char *)(i + 28) > 49 ) /*0x128675*/
  {
    if ( v88 == 0x666666666666666LL ) /*0x12867b*/
      sub_5AC20(i, v10, v12, v13); /*0x1290d8*/
    *(_QWORD *)&v91[0] = &v87; /*0x128685*/
    *((_QWORD *)&v91[0] + 1) = 0; /*0x128689*/
    v19 = operator new(0x28u); /*0x128692*/
    v19[28] = 49; /*0x128698*/
    *((_DWORD *)v19 + 8) = 0; /*0x12869c*/
    *(_QWORD *)v19 = v16; /*0x12869f*/
    *((_QWORD *)v19 + 1) = v16; /*0x1286a2*/
    *((_QWORD *)v19 + 2) = v16; /*0x1286a6*/
    *((_WORD *)v19 + 12) = 0; /*0x1286aa*/
    v91[0] = v89[0]; /*0x1286b4*/
    i = sub_69600(&v87, v91, v19); /*0x1286c8*/
  }
  *(_DWORD *)(i + 32) = 1; /*0x1286cb*/
  v20 = v87; /*0x1286d2*/
  v21 = v87[1]; /*0x1286d6*/
  *(_QWORD *)&v89[0] = v21; /*0x1286da*/
  DWORD2(v89[0]) = 0; /*0x1286de*/
  for ( j = (__int64)v87; !*(_BYTE *)(v21 + 25); v21 = *(_QWORD *)v21 ) /*0x1286e4*/
  {
    *(_QWORD *)&v89[0] = v21; /*0x1286f0*/
    if ( *(char *)(v21 + 28) >= 50 ) /*0x1286f8*/
    {
      DWORD2(v89[0]) = 1; /*0x128703*/
      j = v21; /*0x12870a*/
    }
    else
    {
      DWORD2(v89[0]) = 0; /*0x1286fa*/
      v21 += 16; /*0x1286fd*/
    }
  }
  if ( *(_BYTE *)(j + 25) || *(char *)(j + 28) > 50 ) /*0x128720*/
  {
    if ( v88 == 0x666666666666666LL ) /*0x128726*/
      sub_5AC20(j, v10, v12, v13); /*0x1290de*/
    *(_QWORD *)&v91[0] = &v87; /*0x128730*/
    *((_QWORD *)&v91[0] + 1) = 0; /*0x128734*/
    v23 = operator new(0x28u); /*0x12873d*/
    v23[28] = 50; /*0x128743*/
    *((_DWORD *)v23 + 8) = 0; /*0x128747*/
    *(_QWORD *)v23 = v20; /*0x12874a*/
    *((_QWORD *)v23 + 1) = v20; /*0x12874d*/
    *((_QWORD *)v23 + 2) = v20; /*0x128751*/
    *((_WORD *)v23 + 12) = 0; /*0x128755*/
    v91[0] = v89[0]; /*0x12875f*/
    j = sub_69600(&v87, v91, v23); /*0x128773*/
  }
  *(_DWORD *)(j + 32) = 2; /*0x128776*/
  v24 = v87; /*0x12877d*/
  v25 = v87[1]; /*0x128781*/
  *(_QWORD *)&v89[0] = v25; /*0x128785*/
  DWORD2(v89[0]) = 0; /*0x128789*/
  for ( k = (__int64)v87; !*(_BYTE *)(v25 + 25); v25 = *(_QWORD *)v25 ) /*0x12878f*/
  {
    *(_QWORD *)&v89[0] = v25; /*0x128795*/
    if ( *(char *)(v25 + 28) >= 51 ) /*0x12879d*/
    {
      DWORD2(v89[0]) = 1; /*0x1287a8*/
      k = v25; /*0x1287af*/
    }
    else
    {
      DWORD2(v89[0]) = 0; /*0x12879f*/
      v25 += 16; /*0x1287a2*/
    }
  }
  if ( *(_BYTE *)(k + 25) || *(char *)(k + 28) > 51 ) /*0x1287c5*/
  {
    if ( v88 == 0x666666666666666LL ) /*0x1287cb*/
      sub_5AC20(k, v10, v12, v13); /*0x1290e4*/
    *(_QWORD *)&v91[0] = &v87; /*0x1287d5*/
    *((_QWORD *)&v91[0] + 1) = 0; /*0x1287d9*/
    v27 = operator new(0x28u); /*0x1287e2*/
    v27[28] = 51; /*0x1287e8*/
    *((_DWORD *)v27 + 8) = 0; /*0x1287ec*/
    *(_QWORD *)v27 = v24; /*0x1287ef*/
    *((_QWORD *)v27 + 1) = v24; /*0x1287f2*/
    *((_QWORD *)v27 + 2) = v24; /*0x1287f6*/
    *((_WORD *)v27 + 12) = 0; /*0x1287fa*/
    v91[0] = v89[0]; /*0x128804*/
    k = sub_69600(&v87, v91, v27); /*0x128818*/
  }
  *(_DWORD *)(k + 32) = 3; /*0x12881b*/
  v28 = v87; /*0x128822*/
  v29 = v87[1]; /*0x128826*/
  *(_QWORD *)&v89[0] = v29; /*0x12882a*/
  DWORD2(v89[0]) = 0; /*0x12882e*/
  for ( m = (__int64)v87; !*(_BYTE *)(v29 + 25); v29 = *(_QWORD *)v29 ) /*0x128834*/
  {
    *(_QWORD *)&v89[0] = v29; /*0x128840*/
    if ( *(char *)(v29 + 28) >= 52 ) /*0x128848*/
    {
      DWORD2(v89[0]) = 1; /*0x128853*/
      m = v29; /*0x12885a*/
    }
    else
    {
      DWORD2(v89[0]) = 0; /*0x12884a*/
      v29 += 16; /*0x12884d*/
    }
  }
  if ( *(_BYTE *)(m + 25) || *(char *)(m + 28) > 52 ) /*0x128870*/
  {
    if ( v88 == 0x666666666666666LL ) /*0x128876*/
      sub_5AC20(m, v10, v12, v13); /*0x1290ea*/
    *(_QWORD *)&v91[0] = &v87; /*0x128880*/
    *((_QWORD *)&v91[0] + 1) = 0; /*0x128884*/
    v31 = operator new(0x28u); /*0x12888d*/
    v31[28] = 52; /*0x128893*/
    *((_DWORD *)v31 + 8) = 0; /*0x128897*/
    *(_QWORD *)v31 = v28; /*0x12889a*/
    *((_QWORD *)v31 + 1) = v28; /*0x12889d*/
    *((_QWORD *)v31 + 2) = v28; /*0x1288a1*/
    *((_WORD *)v31 + 12) = 0; /*0x1288a5*/
    v91[0] = v89[0]; /*0x1288af*/
    m = sub_69600(&v87, v91, v31); /*0x1288c3*/
  }
  *(_DWORD *)(m + 32) = 4; /*0x1288c6*/
  v32 = v87; /*0x1288cd*/
  v33 = v87[1]; /*0x1288d1*/
  *(_QWORD *)&v89[0] = v33; /*0x1288d5*/
  DWORD2(v89[0]) = 0; /*0x1288d9*/
  for ( n = (__int64)v87; !*(_BYTE *)(v33 + 25); v33 = *(_QWORD *)v33 ) /*0x1288df*/
  {
    *(_QWORD *)&v89[0] = v33; /*0x1288e5*/
    if ( *(char *)(v33 + 28) >= 53 ) /*0x1288ed*/
    {
      DWORD2(v89[0]) = 1; /*0x1288f8*/
      n = v33; /*0x1288ff*/
    }
    else
    {
      DWORD2(v89[0]) = 0; /*0x1288ef*/
      v33 += 16; /*0x1288f2*/
    }
  }
  if ( *(_BYTE *)(n + 25) || *(char *)(n + 28) > 53 ) /*0x128915*/
  {
    if ( v88 == 0x666666666666666LL ) /*0x12891b*/
      sub_5AC20(n, v10, v12, v13); /*0x1290f0*/
    *(_QWORD *)&v91[0] = &v87; /*0x128925*/
    *((_QWORD *)&v91[0] + 1) = 0; /*0x128929*/
    v35 = operator new(0x28u); /*0x128932*/
    v35[28] = 53; /*0x128938*/
    *((_DWORD *)v35 + 8) = 0; /*0x12893c*/
    *(_QWORD *)v35 = v32; /*0x12893f*/
    *((_QWORD *)v35 + 1) = v32; /*0x128942*/
    *((_QWORD *)v35 + 2) = v32; /*0x128946*/
    *((_WORD *)v35 + 12) = 0; /*0x12894a*/
    v91[0] = v89[0]; /*0x128954*/
    n = sub_69600(&v87, v91, v35); /*0x128968*/
  }
  *(_DWORD *)(n + 32) = 5; /*0x12896b*/
  v36 = v87; /*0x128972*/
  v37 = v87[1]; /*0x128976*/
  *(_QWORD *)&v89[0] = v37; /*0x12897a*/
  DWORD2(v89[0]) = 0; /*0x12897e*/
  for ( ii = (__int64)v87; !*(_BYTE *)(v37 + 25); v37 = *(_QWORD *)v37 ) /*0x128984*/
  {
    *(_QWORD *)&v89[0] = v37; /*0x128990*/
    if ( *(char *)(v37 + 28) >= 54 ) /*0x128998*/
    {
      DWORD2(v89[0]) = 1; /*0x1289a3*/
      ii = v37; /*0x1289aa*/
    }
    else
    {
      DWORD2(v89[0]) = 0; /*0x12899a*/
      v37 += 16; /*0x12899d*/
    }
  }
  if ( *(_BYTE *)(ii + 25) || *(char *)(ii + 28) > 54 ) /*0x1289c0*/
  {
    if ( v88 == 0x666666666666666LL ) /*0x1289c6*/
      sub_5AC20(ii, v10, v12, v13); /*0x1290f6*/
    *(_QWORD *)&v91[0] = &v87; /*0x1289d0*/
    *((_QWORD *)&v91[0] + 1) = 0; /*0x1289d4*/
    v39 = operator new(0x28u); /*0x1289dd*/
    v39[28] = 54; /*0x1289e3*/
    *((_DWORD *)v39 + 8) = 0; /*0x1289e7*/
    *(_QWORD *)v39 = v36; /*0x1289ea*/
    *((_QWORD *)v39 + 1) = v36; /*0x1289ed*/
    *((_QWORD *)v39 + 2) = v36; /*0x1289f1*/
    *((_WORD *)v39 + 12) = 0; /*0x1289f5*/
    v91[0] = v89[0]; /*0x1289ff*/
    ii = sub_69600(&v87, v91, v39); /*0x128a13*/
  }
  *(_DWORD *)(ii + 32) = 6; /*0x128a16*/
  v40 = v87; /*0x128a1d*/
  v41 = v87[1]; /*0x128a21*/
  *(_QWORD *)&v89[0] = v41; /*0x128a25*/
  DWORD2(v89[0]) = 0; /*0x128a29*/
  for ( jj = (__int64)v87; !*(_BYTE *)(v41 + 25); v41 = *(_QWORD *)v41 ) /*0x128a2f*/
  {
    *(_QWORD *)&v89[0] = v41; /*0x128a35*/
    if ( *(char *)(v41 + 28) >= 55 ) /*0x128a3d*/
    {
      DWORD2(v89[0]) = 1; /*0x128a48*/
      jj = v41; /*0x128a4f*/
    }
    else
    {
      DWORD2(v89[0]) = 0; /*0x128a3f*/
      v41 += 16; /*0x128a42*/
    }
  }
  if ( *(_BYTE *)(jj + 25) || *(char *)(jj + 28) > 55 ) /*0x128a65*/
  {
    if ( v88 == 0x666666666666666LL ) /*0x128a6b*/
      sub_5AC20(jj, v10, v12, v13); /*0x1290fc*/
    *(_QWORD *)&v91[0] = &v87; /*0x128a75*/
    *((_QWORD *)&v91[0] + 1) = 0; /*0x128a79*/
    v43 = operator new(0x28u); /*0x128a82*/
    v43[28] = 55; /*0x128a88*/
    *((_DWORD *)v43 + 8) = 0; /*0x128a8c*/
    *(_QWORD *)v43 = v40; /*0x128a8f*/
    *((_QWORD *)v43 + 1) = v40; /*0x128a92*/
    *((_QWORD *)v43 + 2) = v40; /*0x128a96*/
    *((_WORD *)v43 + 12) = 0; /*0x128a9a*/
    v91[0] = v89[0]; /*0x128aa4*/
    jj = sub_69600(&v87, v91, v43); /*0x128ab8*/
  }
  *(_DWORD *)(jj + 32) = 7; /*0x128abb*/
  v44 = v87; /*0x128ac2*/
  v45 = v87[1]; /*0x128ac6*/
  *(_QWORD *)&v89[0] = v45; /*0x128aca*/
  DWORD2(v89[0]) = 0; /*0x128ace*/
  for ( kk = (__int64)v87; !*(_BYTE *)(v45 + 25); v45 = *(_QWORD *)v45 ) /*0x128ad4*/
  {
    *(_QWORD *)&v89[0] = v45; /*0x128ae0*/
    if ( *(char *)(v45 + 28) >= 56 ) /*0x128ae8*/
    {
      DWORD2(v89[0]) = 1; /*0x128af3*/
      kk = v45; /*0x128afa*/
    }
    else
    {
      DWORD2(v89[0]) = 0; /*0x128aea*/
      v45 += 16; /*0x128aed*/
    }
  }
  if ( *(_BYTE *)(kk + 25) || *(char *)(kk + 28) > 56 ) /*0x128b10*/
  {
    if ( v88 == 0x666666666666666LL ) /*0x128b16*/
      sub_5AC20(kk, v10, v12, v13); /*0x129102*/
    *(_QWORD *)&v91[0] = &v87; /*0x128b20*/
    *((_QWORD *)&v91[0] + 1) = 0; /*0x128b24*/
    v47 = operator new(0x28u); /*0x128b2d*/
    v47[28] = 56; /*0x128b33*/
    *((_DWORD *)v47 + 8) = 0; /*0x128b37*/
    *(_QWORD *)v47 = v44; /*0x128b3a*/
    *((_QWORD *)v47 + 1) = v44; /*0x128b3d*/
    *((_QWORD *)v47 + 2) = v44; /*0x128b41*/
    *((_WORD *)v47 + 12) = 0; /*0x128b45*/
    v91[0] = v89[0]; /*0x128b4f*/
    kk = sub_69600(&v87, v91, v47); /*0x128b63*/
  }
  *(_DWORD *)(kk + 32) = 8; /*0x128b66*/
  v48 = v87; /*0x128b6d*/
  v49 = v87[1]; /*0x128b71*/
  *(_QWORD *)&v89[0] = v49; /*0x128b75*/
  DWORD2(v89[0]) = 0; /*0x128b79*/
  for ( mm = (__int64)v87; !*(_BYTE *)(v49 + 25); v49 = *(_QWORD *)v49 ) /*0x128b7f*/
  {
    *(_QWORD *)&v89[0] = v49; /*0x128b85*/
    if ( *(char *)(v49 + 28) >= 57 ) /*0x128b8d*/
    {
      DWORD2(v89[0]) = 1; /*0x128b98*/
      mm = v49; /*0x128b9f*/
    }
    else
    {
      DWORD2(v89[0]) = 0; /*0x128b8f*/
      v49 += 16; /*0x128b92*/
    }
  }
  if ( *(_BYTE *)(mm + 25) || *(char *)(mm + 28) > 57 ) /*0x128bb5*/
  {
    if ( v88 == 0x666666666666666LL ) /*0x128bbb*/
      sub_5AC20(mm, v10, v12, v13); /*0x129108*/
    *(_QWORD *)&v91[0] = &v87; /*0x128bc5*/
    *((_QWORD *)&v91[0] + 1) = 0; /*0x128bc9*/
    v51 = operator new(0x28u); /*0x128bd2*/
    v51[28] = 57; /*0x128bd8*/
    *((_DWORD *)v51 + 8) = 0; /*0x128bdc*/
    *(_QWORD *)v51 = v48; /*0x128bdf*/
    *((_QWORD *)v51 + 1) = v48; /*0x128be2*/
    *((_QWORD *)v51 + 2) = v48; /*0x128be6*/
    *((_WORD *)v51 + 12) = 0; /*0x128bea*/
    v91[0] = v89[0]; /*0x128bf4*/
    mm = sub_69600(&v87, v91, v51); /*0x128c08*/
  }
  *(_DWORD *)(mm + 32) = 9; /*0x128c0b*/
  v86[0] = 65; /*0x128c12*/
  sub_12A760(&v87, &v92, v86); /*0x128c22*/
  if ( !(unsigned __int8)sub_12A7B0(v52, v93, v86) ) /*0x128c2f*/
  {
    if ( v88 == 0x666666666666666LL ) /*0x128c3c*/
      sub_5AC20(v54, v53, v55, v56); /*0x12910e*/
    *(_QWORD *)&v91[0] = v86; /*0x128c46*/
    v57 = sub_12A7D0((unsigned int)v89, (unsigned int)&v87, (_DWORD)v87, v56, (__int64)v91); /*0x128c5f*/
    v58 = *(_QWORD *)(v57 + 8); /*0x128c64*/
    *(_QWORD *)(v57 + 8) = 0; /*0x128c68*/
    sub_7F850(v89); /*0x128c70*/
    v91[0] = v92; /*0x128c79*/
    v53 = sub_69600(&v87, v91, v58); /*0x128c8d*/
  }
  *(_DWORD *)(v53 + 32) = 10; /*0x128c90*/
  v59 = v87; /*0x128c97*/
  v60 = v87[1]; /*0x128c9b*/
  *(_QWORD *)&v91[0] = v60; /*0x128c9f*/
  DWORD2(v91[0]) = 0; /*0x128ca3*/
  for ( nn = (__int64)v87; !*(_BYTE *)(v60 + 25); v60 = *(_QWORD *)v60 ) /*0x128ca9*/
  {
    *(_QWORD *)&v91[0] = v60; /*0x128cb0*/
    if ( *(char *)(v60 + 28) >= 66 ) /*0x128cb8*/
    {
      DWORD2(v91[0]) = 1; /*0x128cc3*/
      nn = v60; /*0x128cca*/
    }
    else
    {
      DWORD2(v91[0]) = 0; /*0x128cba*/
      v60 += 16; /*0x128cbd*/
    }
  }
  if ( *(_BYTE *)(nn + 25) || *(char *)(nn + 28) > 66 ) /*0x128ce0*/
  {
    if ( v88 == 0x666666666666666LL ) /*0x128ce6*/
      sub_5AC20(nn, v53, v55, v56); /*0x129114*/
    *(_QWORD *)&v89[0] = &v87; /*0x128cf0*/
    *((_QWORD *)&v89[0] + 1) = 0; /*0x128cf4*/
    v62 = operator new(0x28u); /*0x128cfd*/
    v62[28] = 66; /*0x128d03*/
    *((_DWORD *)v62 + 8) = 0; /*0x128d07*/
    *(_QWORD *)v62 = v59; /*0x128d0a*/
    *((_QWORD *)v62 + 1) = v59; /*0x128d0d*/
    *((_QWORD *)v62 + 2) = v59; /*0x128d11*/
    *((_WORD *)v62 + 12) = 0; /*0x128d15*/
    v89[0] = v91[0]; /*0x128d1f*/
    nn = sub_69600(&v87, v89, v62); /*0x128d33*/
  }
  *(_DWORD *)(nn + 32) = 11; /*0x128d36*/
  v86[0] = 67; /*0x128d3d*/
  *(_DWORD *)sub_12A660(&v87, v86) = 12; /*0x128d4e*/
  v66 = v87; /*0x128d54*/
  v67 = v87[1]; /*0x128d58*/
  *(_QWORD *)&v91[0] = v67; /*0x128d5c*/
  DWORD2(v91[0]) = 0; /*0x128d60*/
  for ( i1 = (__int64)v87; !*(_BYTE *)(v67 + 25); v67 = *(_QWORD *)v67 ) /*0x128d66*/
  {
    *(_QWORD *)&v91[0] = v67; /*0x128d70*/
    if ( *(char *)(v67 + 28) >= 68 ) /*0x128d78*/
    {
      DWORD2(v91[0]) = 1; /*0x128d83*/
      i1 = v67; /*0x128d8a*/
    }
    else
    {
      DWORD2(v91[0]) = 0; /*0x128d7a*/
      v67 += 16; /*0x128d7d*/
    }
  }
  if ( *(_BYTE *)(i1 + 25) || *(char *)(i1 + 28) > 68 ) /*0x128da0*/
  {
    if ( v88 == 0x666666666666666LL ) /*0x128da6*/
      sub_5AC20(i1, v63, v64, v65); /*0x12911a*/
    *(_QWORD *)&v89[0] = &v87; /*0x128db0*/
    *((_QWORD *)&v89[0] + 1) = 0; /*0x128db4*/
    v69 = operator new(0x28u); /*0x128dbd*/
    v69[28] = 68; /*0x128dc3*/
    *((_DWORD *)v69 + 8) = 0; /*0x128dc7*/
    *(_QWORD *)v69 = v66; /*0x128dca*/
    *((_QWORD *)v69 + 1) = v66; /*0x128dcd*/
    *((_QWORD *)v69 + 2) = v66; /*0x128dd1*/
    *((_WORD *)v69 + 12) = 0; /*0x128dd5*/
    v89[0] = v91[0]; /*0x128ddf*/
    i1 = sub_69600(&v87, v89, v69); /*0x128df3*/
  }
  *(_DWORD *)(i1 + 32) = 13; /*0x128df6*/
  v70 = v87; /*0x128dfd*/
  v71 = v87[1]; /*0x128e01*/
  *(_QWORD *)&v91[0] = v71; /*0x128e05*/
  DWORD2(v91[0]) = 0; /*0x128e09*/
  for ( i2 = (__int64)v87; !*(_BYTE *)(v71 + 25); v71 = *(_QWORD *)v71 ) /*0x128e0f*/
  {
    *(_QWORD *)&v91[0] = v71; /*0x128e15*/
    if ( *(char *)(v71 + 28) >= 69 ) /*0x128e1d*/
    {
      DWORD2(v91[0]) = 1; /*0x128e28*/
      i2 = v71; /*0x128e2f*/
    }
    else
    {
      DWORD2(v91[0]) = 0; /*0x128e1f*/
      v71 += 16; /*0x128e22*/
    }
  }
  if ( *(_BYTE *)(i2 + 25) || *(char *)(i2 + 28) > 69 ) /*0x128e45*/
  {
    if ( v88 == 0x666666666666666LL ) /*0x128e4b*/
      sub_5AC20(i2, v63, v64, v65); /*0x129120*/
    *(_QWORD *)&v89[0] = &v87; /*0x128e55*/
    *((_QWORD *)&v89[0] + 1) = 0; /*0x128e59*/
    v73 = operator new(0x28u); /*0x128e62*/
    v73[28] = 69; /*0x128e68*/
    *((_DWORD *)v73 + 8) = 0; /*0x128e6c*/
    *(_QWORD *)v73 = v70; /*0x128e6f*/
    *((_QWORD *)v73 + 1) = v70; /*0x128e72*/
    *((_QWORD *)v73 + 2) = v70; /*0x128e76*/
    *((_WORD *)v73 + 12) = 0; /*0x128e7a*/
    v89[0] = v91[0]; /*0x128e84*/
    i2 = sub_69600(&v87, v89, v73); /*0x128e98*/
  }
  *(_DWORD *)(i2 + 32) = 14; /*0x128e9b*/
  v74 = v87; /*0x128ea2*/
  v75 = v87[1]; /*0x128ea6*/
  *(_QWORD *)&v91[0] = v75; /*0x128eaa*/
  DWORD2(v91[0]) = 0; /*0x128eae*/
  for ( i3 = (__int64)v87; !*(_BYTE *)(v75 + 25); v75 = *(_QWORD *)v75 ) /*0x128eb4*/
  {
    *(_QWORD *)&v91[0] = v75; /*0x128ec0*/
    if ( *(char *)(v75 + 28) >= 70 ) /*0x128ec8*/
    {
      DWORD2(v91[0]) = 1; /*0x128ed3*/
      i3 = v75; /*0x128eda*/
    }
    else
    {
      DWORD2(v91[0]) = 0; /*0x128eca*/
      v75 += 16; /*0x128ecd*/
    }
  }
  if ( *(_BYTE *)(i3 + 25) || *(char *)(i3 + 28) > 70 ) /*0x128ef0*/
  {
    if ( v88 == 0x666666666666666LL ) /*0x128ef6*/
      sub_5AC20(i3, v63, v64, v65); /*0x1290cc*/
    *(_QWORD *)&v89[0] = &v87; /*0x128f00*/
    *((_QWORD *)&v89[0] + 1) = 0; /*0x128f04*/
    v77 = operator new(0x28u); /*0x128f0d*/
    v77[28] = 70; /*0x128f13*/
    *((_DWORD *)v77 + 8) = 0; /*0x128f17*/
    *(_QWORD *)v77 = v74; /*0x128f1a*/
    *((_QWORD *)v77 + 1) = v74; /*0x128f1d*/
    *((_QWORD *)v77 + 2) = v74; /*0x128f21*/
    *((_WORD *)v77 + 12) = 0; /*0x128f25*/
    v89[0] = v91[0]; /*0x128f2f*/
    i3 = sub_69600(&v87, v89, v77); /*0x128f43*/
  }
  *(_DWORD *)(i3 + 32) = 15; /*0x128f46*/
  v78 = 0; /*0x128f4d*/
  v90 = 0; /*0x128f50*/
  v79 = 0; /*0x128f56*/
  v80 = 0; /*0x128f59*/
  v81 = a2; /*0x128f5c*/
  if ( a2[3] > 0xFu ) /*0x128f64*/
    v81 = (_QWORD *)*a2; /*0x128f66*/
  v82 = -1; /*0x128f69*/
  do /*0x128f73*/
    ++v82; /*0x128f70*/
  while ( *((_BYTE *)v81 + v82) ); /*0x128f73*/
  if ( (_DWORD)v82 == 6 ) /*0x128f7c*/
  {
    v83 = 0; /*0x128f8a*/
    while ( 2 ) /*0x128f94*/
    {
      v84 = a2; /*0x128f94*/
      if ( a2[3] > 0xFu ) /*0x128f9c*/
        v84 = (_QWORD *)*a2; /*0x128f9e*/
      v86[0] = *((_BYTE *)v84 + v83); /*0x128fa5*/
      switch ( v4 ) /*0x128fb5*/
      {
        case 0: /*0x128fb5*/
          v78 += 16 * *(_BYTE *)sub_12A660(&v87, v86); /*0x128fca*/
          LOBYTE(v90) = v78; /*0x128fcd*/
          ++v4; /*0x128fd1*/
          ++v83; /*0x128fd3*/
          continue; /*0x128fd6*/
        case 1: /*0x128fb5*/
          v78 += *(_BYTE *)sub_12A660(&v87, v86); /*0x128fe5*/
          LOBYTE(v90) = v78; /*0x128fe8*/
          ++v4; /*0x128fec*/
          ++v83; /*0x128fee*/
          continue; /*0x128ff1*/
        case 2: /*0x128fb5*/
          v79 += 16 * *(_BYTE *)sub_12A660(&v87, v86); /*0x129006*/
          HIBYTE(v90) = v79; /*0x129009*/
          ++v4; /*0x12900d*/
          ++v83; /*0x12900f*/
          continue; /*0x129012*/
        case 3: /*0x128fb5*/
          v79 += *(_BYTE *)sub_12A660(&v87, v86); /*0x129024*/
          HIBYTE(v90) = v79; /*0x129027*/
          ++v4; /*0x12902b*/
          ++v83; /*0x12902d*/
          continue; /*0x129030*/
        case 4: /*0x128fb5*/
          v80 += 16 * *(_BYTE *)sub_12A660(&v87, v86); /*0x129048*/
          ++v4; /*0x12904b*/
          ++v83; /*0x12904d*/
          continue; /*0x129050*/
        case 5: /*0x128fb5*/
          v80 += *(_BYTE *)sub_12A660(&v87, v86); /*0x12907a*/
          *(_WORD *)a1 = v90; /*0x129081*/
          break; /*0x129081*/
      }
      break;
    }
  }
  else
  {
    *(_WORD *)a1 = 0; /*0x128f7e*/
  }
  *(_BYTE *)(a1 + 2) = v80; /*0x129086*/
  sub_7F2E0(&v87); /*0x12908e*/
  sub_3C310(a2); /*0x129097*/
  return a1; /*0x12909f*/
}

// [2/2] Address: 0x19cb10
// Method: CreateMenuItem::~CreateMenuItem
cocos2d::CCMenuItemSprite *__fastcall CreateMenuItem__dtor_CreateMenuItem(cocos2d::CCMenuItemSprite *Block, char a2)
{
  sub_3C310((char *)Block + 520); /*0x19cb26*/
  *(_QWORD *)Block = &CCMenuItemSpriteExtra::`vftable'; /*0x19cb32*/
  *((_QWORD *)Block + 40) = &CCMenuItemSpriteExtra::`vftable'; /*0x19cb43*/
  sub_3C310((char *)Block + 448); /*0x19cb4a*/
  sub_3C310((char *)Block + 416); /*0x19cb56*/
  cocos2d::CCMenuItemSprite::~CCMenuItemSprite(Block); /*0x19cb5e*/
  if ( (a2 & 1) != 0 ) /*0x19cb67*/
    j_j_free(Block); /*0x19cb71*/
  return Block; /*0x19cb76*/
}
