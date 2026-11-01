#include <Geode/binding/CountTriggerGameObject.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x657510
// Method: CountTriggerGameObject::triggerObject
// Hidden C++ exception states: #wind=5
void __fastcall CountTriggerGameObject_triggerObject(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v6; // ecx
  int v7; // ecx
  unsigned int v8; // esi
  int v9; // r15d
  __int64 v10; // r14
  int v11; // r8d
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  unsigned int v19; // eax
  void **v20; // r15
  int v21; // esi
  int v22; // r12d
  int v23; // r13d
  int v24; // r14d
  int v25; // eax
  int v26; // edx
  int v27; // edx
  bool v28; // al
  void *v29; // rcx
  void **v30; // rcx
  void **v31; // r14
  int v32; // esi
  int v33; // r15d
  int v34; // r12d
  char v35; // r13
  __int64 v36; // rbx
  int v37; // edi
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rdx
  unsigned int v41; // eax
  void *v42; // rcx
  _BYTE v43[8]; // [rsp+60h] [rbp-69h] BYREF
  _BYTE v44[8]; // [rsp+68h] [rbp-61h] BYREF
  int v45; // [rsp+70h] [rbp-59h]
  unsigned int v46; // [rsp+78h] [rbp-51h] BYREF
  int v47; // [rsp+80h] [rbp-49h]
  int v48; // [rsp+84h] [rbp-45h]
  int v49; // [rsp+88h] [rbp-41h] BYREF
  int v50; // [rsp+90h] [rbp-39h] BYREF
  int v51; // [rsp+98h] [rbp-31h] BYREF
  int v52; // [rsp+A0h] [rbp-29h] BYREF
  void *Block[2]; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v54; // [rsp+B8h] [rbp-11h]
  void *v55[2]; // [rsp+C0h] [rbp-9h] BYREF
  __int64 v56; // [rsp+D0h] [rbp+7h]
  _QWORD v57[2]; // [rsp+D8h] [rbp+Fh] BYREF
  _BYTE v58[24]; // [rsp+E8h] [rbp+1Fh] BYREF
  unsigned int v59; // [rsp+130h] [rbp+67h] BYREF

  v45 = 0; /*0x65753c*/
  v6 = *(_DWORD *)(a1 + 1036) - 1611; /*0x657545*/
  if ( v6 ) /*0x65754b*/
  {
    v7 = v6 - 200; /*0x657551*/
    if ( v7 ) /*0x657557*/
    {
      if ( v7 != 6 ) /*0x657560*/
      {
        EffectGameObject_triggerObject(a1, (_QWORD *)a2, a3, a4); /*0x657568*/
        return; /*0x65756d*/
      }
      v8 = *(_DWORD *)(a1 + 1696); /*0x657572*/
      if ( *(_DWORD *)(a1 + 1860) == 1 ) /*0x657581*/
      {
        v17 = (float)(int)sub_369120(*(_QWORD *)(a2 + 2472), v8) * *(float *)(a1 + 1868); /*0x657629*/
      }
      else
      {
        if ( *(_DWORD *)(a1 + 1860) != 2 ) /*0x65758a*/
        {
          v9 = *(_DWORD *)(a1 + 1856); /*0x65758c*/
          v10 = *(_QWORD *)(a2 + 2472); /*0x657593*/
          if ( !*(_BYTE *)(a1 + 1865) ) /*0x6575a0*/
          {
            v13 = *(_DWORD *)(a1 + 1696); /*0x6575ad*/
            if ( (v8 & 0x80000000) != 0 ) /*0x6575b1*/
              v13 = 0; /*0x6575b1*/
            if ( v13 > 9999 ) /*0x6575bb*/
              v13 = 9999; /*0x6575bb*/
            v59 = v13; /*0x6575be*/
            v11 = v9 + *(_DWORD *)(*(_QWORD *)sub_66DF0(v10 + 816, v57, &v59) + 20LL); /*0x6575dc*/
            v14 = v59; /*0x6575df*/
            v12 = v10; /*0x6575e2*/
            goto LABEL_19; /*0x6575e5*/
          }
          v11 = *(_DWORD *)(a1 + 1856); /*0x6575a2*/
          v12 = *(_QWORD *)(a2 + 2472); /*0x6575a5*/
LABEL_18:
          v14 = v8; /*0x657643*/
LABEL_19:
          GJEffectManager_updateCountForItem(v12, v14, v11); /*0x657645*/
          goto LABEL_20; /*0x657645*/
        }
        v15 = sub_369120(*(_QWORD *)(a2 + 2472), v8); /*0x6575f0*/
        v16 = *(float *)(a1 + 1868); /*0x6575f5*/
        if ( v16 == 0.0 ) /*0x657605*/
        {
LABEL_20:
          v19 = sub_369120(*(_QWORD *)(a2 + 2472), v8); /*0x65764a*/
          sub_339100(a2, v8, v19); /*0x657660*/
          return; /*0x657665*/
        }
        v17 = (float)v15 / v16; /*0x65760e*/
      }
      v18 = roundf(v17); /*0x657631*/
      v12 = *(_QWORD *)(a2 + 2472); /*0x657637*/
      v11 = (int)v18; /*0x65763e*/
      goto LABEL_18; /*0x65763e*/
    }
    if ( a4 ) /*0x65766d*/
    {
      v20 = (void **)sub_18A9D0(v55, a4); /*0x65767b*/
      v21 = 4; /*0x65767e*/
    }
    else
    {
      *(_OWORD *)Block = 0; /*0x657688*/
      v54 = 0; /*0x65768d*/
      v20 = Block; /*0x657691*/
      v21 = 8; /*0x657695*/
    }
    v45 = v21; /*0x65769a*/
    v22 = *(_DWORD *)(a1 + 1688); /*0x65769d*/
    v23 = *(_DWORD *)(a1 + 924); /*0x6576a4*/
    v24 = *(_DWORD *)(a1 + 1856); /*0x6576ab*/
    v25 = sub_369120(*(_QWORD *)(a2 + 2472), *(unsigned int *)(a1 + 1696)); /*0x6576bf*/
    v26 = *(_DWORD *)(a1 + 1860); /*0x6576c4*/
    if ( v26 ) /*0x6576cc*/
    {
      v27 = v26 - 1; /*0x6576ce*/
      if ( v27 ) /*0x6576d1*/
      {
        if ( v27 != 1 ) /*0x6576d6*/
          goto LABEL_32; /*0x6576d6*/
        v28 = v25 < v24; /*0x6576db*/
      }
      else
      {
        v28 = v25 > v24; /*0x6576e3*/
      }
    }
    else
    {
      v28 = v25 == v24; /*0x6576eb*/
    }
    if ( v28 ) /*0x6576f0*/
      (**(void (__fastcall ***)(__int64, _QWORD, _QWORD, void **, int, int))(a2 + 408))( /*0x657717*/
        a2 + 408,
        *(unsigned int *)(a1 + 1480),
        *(unsigned __int8 *)(a1 + 1653),
        v20,
        v23,
        v22);
LABEL_32:
    if ( (v21 & 8) != 0 ) /*0x65771e*/
    {
      LOBYTE(v21) = v21 & 0xF7; /*0x657720*/
      v29 = Block[0]; /*0x657723*/
      if ( Block[0] ) /*0x65772a*/
      {
        if ( ((v54 - (unsigned __int64)Block[0]) & 0xFFFFFFFFFFFFFFFCuLL) >= 0x1000 ) /*0x657741*/
        {
          v29 = (void *)*((_QWORD *)Block[0] - 1); /*0x657747*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v29 - 8) > 0x1F ) /*0x657756*/
            invoke_watson(0, 0, 0, 0, 0); /*0x65776b*/
        }
        j_j_free(v29); /*0x657772*/
        *(_OWORD *)Block = 0; /*0x65777a*/
        v54 = 0; /*0x65777f*/
      }
    }
    if ( (v21 & 4) != 0 ) /*0x65778b*/
    {
      v30 = v55; /*0x657791*/
LABEL_54:
      sub_685C0(v30); /*0x65795e*/
      return; /*0x65795e*/
    }
    return; /*0x65778b*/
  }
  if ( a4 ) /*0x65779d*/
  {
    v31 = (void **)sub_18A9D0(v58, a4); /*0x6577ab*/
    v32 = 1; /*0x6577ae*/
  }
  else
  {
    *(_OWORD *)v55 = 0; /*0x6577b8*/
    v56 = 0; /*0x6577bd*/
    v31 = v55; /*0x6577c1*/
    v32 = 2; /*0x6577c5*/
  }
  v45 = v32; /*0x6577ca*/
  v33 = *(_DWORD *)(a1 + 1688); /*0x6577cd*/
  v49 = v33; /*0x6577d4*/
  v34 = *(_DWORD *)(a1 + 924); /*0x6577d8*/
  v50 = v34; /*0x6577df*/
  v35 = *(_BYTE *)(a1 + 1653); /*0x6577e3*/
  v44[0] = v35; /*0x6577eb*/
  v47 = *(_DWORD *)(a1 + 1480); /*0x6577f5*/
  LODWORD(v57[0]) = v47; /*0x6577f8*/
  LOBYTE(v59) = *(_BYTE *)(a1 + 1864); /*0x657802*/
  v43[0] = v59; /*0x657805*/
  v48 = *(_DWORD *)(a1 + 1856); /*0x65780e*/
  v52 = v48; /*0x657811*/
  v46 = *(_DWORD *)(a1 + 1696); /*0x65781a*/
  v36 = *(_QWORD *)(a2 + 2472); /*0x65781d*/
  v37 = sub_369120(v36, v46); /*0x65782c*/
  v51 = v37; /*0x65782e*/
  v38 = sub_36E3F0(v36 + 520, Block, &v46); /*0x657840*/
  v39 = *(_QWORD *)v38; /*0x657845*/
  v40 = *(_QWORD *)(*(_QWORD *)v38 + 32LL); /*0x657848*/
  if ( v40 == *(_QWORD *)(*(_QWORD *)v38 + 40LL) ) /*0x657850*/
  {
    sub_371CD0( /*0x6578f0*/
      v39 + 24,
      v40,
      (unsigned int)v57,
      (unsigned int)&v52,
      (__int64)v44,
      (__int64)v43,
      (__int64)&v46,
      (__int64)&v51,
      (__int64)v31,
      (__int64)&v50,
      (__int64)&v49);
  }
  else
  {
    v57[0] = *(_QWORD *)(*(_QWORD *)v38 + 32LL); /*0x657852*/
    v41 = v46; /*0x657856*/
    *(_BYTE *)v40 = 0; /*0x657859*/
    *(_QWORD *)(v40 + 40) = 0; /*0x657863*/
    *(_QWORD *)(v40 + 48) = 0; /*0x657866*/
    *(_QWORD *)(v40 + 56) = 0; /*0x65786a*/
    *(_DWORD *)(v40 + 12) = v47; /*0x657872*/
    *(_DWORD *)(v40 + 8) = v48; /*0x65787a*/
    *(_BYTE *)(v40 + 16) = v35; /*0x65787e*/
    *(_BYTE *)(v40 + 32) = v59; /*0x657887*/
    *(_DWORD *)(v40 + 28) = v41; /*0x65788b*/
    *(_DWORD *)(v40 + 4) = v37; /*0x65788e*/
    *(_DWORD *)(v40 + 20) = v34; /*0x657891*/
    *(_DWORD *)(v40 + 24) = v33; /*0x657895*/
    sub_98E50(v40 + 40, v31); /*0x65789c*/
    *(_QWORD *)(v39 + 32) += 64LL; /*0x6578a2*/
  }
  if ( (v32 & 2) != 0 ) /*0x6578fa*/
  {
    LOBYTE(v32) = v32 & 0xFD; /*0x6578fc*/
    v42 = v55[0]; /*0x6578ff*/
    if ( v55[0] ) /*0x657906*/
    {
      if ( ((v56 - (unsigned __int64)v55[0]) & 0xFFFFFFFFFFFFFFFCuLL) >= 0x1000 ) /*0x65791d*/
      {
        v42 = (void *)*((_QWORD *)v55[0] - 1); /*0x657923*/
        if ( (unsigned __int64)((char *)v55[0] - (char *)v42 - 8) > 0x1F ) /*0x657932*/
          invoke_watson(0, 0, 0, 0, 0); /*0x657947*/
      }
      j_j_free(v42); /*0x65794e*/
    }
  }
  if ( (v32 & 1) != 0 ) /*0x657958*/
  {
    v30 = (void **)v58; /*0x65795a*/
    goto LABEL_54; /*0x65795a*/
  }
}

// [2/3] Address: 0x657990
// Method: CountTriggerGameObject::customObjectSetup
char __fastcall CountTriggerGameObject_customObjectSetup(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  int v7; // ebx
  int v8; // eax
  const char *v9; // rcx
  int v10; // eax
  const char *v11; // rcx
  int v12; // eax
  const char *v13; // rcx
  float v14; // xmm1_4
  const char *v15; // rcx
  float v16; // xmm6_4
  const char *v17; // rcx
  int v18; // ebx
  int v19; // eax
  const char *v20; // rcx
  int v21; // eax
  const char *v22; // rcx
  int v23; // eax
  const char *v24; // rcx
  int v25; // eax
  const char *v26; // rcx
  const char *v27; // rcx
  int v28; // ebx
  int v29; // eax
  const char *v30; // rcx
  int v31; // eax
  const char *v32; // rcx
  int v33; // eax
  const char *v34; // rcx
  int v35; // eax
  const char *v36; // rcx
  const char *v37; // rcx

  LOBYTE(v6) = EffectGameObject_customObjectSetup(a1, a2, a3); /*0x6579ae*/
  switch ( *(_DWORD *)(a1 + 1036) ) /*0x6579bf*/
  {
    case 0x64B: /*0x6579bf*/
      v28 = 0; /*0x657c0f*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 640LL) ) /*0x657c11*/
      {
        v30 = (const char *)(*(_QWORD *)a2 + 2560LL); /*0x657c21*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 2584LL) > 0xFu ) /*0x657c2d*/
          v30 = *(const char **)v30; /*0x657c2f*/
        v29 = atoi(v30); /*0x657c32*/
      }
      else
      {
        v29 = 0; /*0x657c1a*/
      }
      *(_DWORD *)(a1 + 1696) = v29; /*0x657c38*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 408LL) ) /*0x657c41*/
      {
        v32 = (const char *)(*(_QWORD *)a2 + 1632LL); /*0x657c51*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 1656LL) > 0xFu ) /*0x657c5d*/
          v32 = *(const char **)v32; /*0x657c5f*/
        v31 = atoi(v32); /*0x657c62*/
      }
      else
      {
        v31 = 0; /*0x657c4a*/
      }
      *(_DWORD *)(a1 + 1480) = v31; /*0x657c68*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 616LL) ) /*0x657c71*/
      {
        v34 = (const char *)(*(_QWORD *)a2 + 2464LL); /*0x657c81*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 2488LL) > 0xFu ) /*0x657c8d*/
          v34 = *(const char **)v34; /*0x657c8f*/
        v33 = atoi(v34); /*0x657c92*/
      }
      else
      {
        v33 = 0; /*0x657c7a*/
      }
      *(_DWORD *)(a1 + 1856) = v33; /*0x657c98*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 448LL) ) /*0x657ca1*/
      {
        v36 = (const char *)(*(_QWORD *)a2 + 1792LL); /*0x657cb1*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 1816LL) > 0xFu ) /*0x657cbd*/
          v36 = *(const char **)v36; /*0x657cbf*/
        v35 = atoi(v36); /*0x657cc2*/
      }
      else
      {
        v35 = 0; /*0x657caa*/
      }
      *(_BYTE *)(a1 + 1653) = v35 != 0; /*0x657ccd*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 832LL) ) /*0x657cd6*/
      {
        v37 = (const char *)(*(_QWORD *)a2 + 3328LL); /*0x657ce2*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 3352LL) > 0xFu ) /*0x657cee*/
          v37 = *(const char **)v37; /*0x657cf0*/
        v28 = atoi(v37); /*0x657cf9*/
      }
      *(_BYTE *)(a1 + 1864) = v28 != 0; /*0x657d00*/
      LOBYTE(v6) = v28 != 0; /*0x657cfd*/
      break;
    case 0x713: /*0x6579bf*/
      v18 = 0; /*0x657b15*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 640LL) ) /*0x657b17*/
      {
        v20 = (const char *)(*(_QWORD *)a2 + 2560LL); /*0x657b27*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 2584LL) > 0xFu ) /*0x657b33*/
          v20 = *(const char **)v20; /*0x657b35*/
        v19 = atoi(v20); /*0x657b38*/
      }
      else
      {
        v19 = 0; /*0x657b20*/
      }
      *(_DWORD *)(a1 + 1696) = v19; /*0x657b3e*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 408LL) ) /*0x657b47*/
      {
        v22 = (const char *)(*(_QWORD *)a2 + 1632LL); /*0x657b57*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 1656LL) > 0xFu ) /*0x657b63*/
          v22 = *(const char **)v22; /*0x657b65*/
        v21 = atoi(v22); /*0x657b68*/
      }
      else
      {
        v21 = 0; /*0x657b50*/
      }
      *(_DWORD *)(a1 + 1480) = v21; /*0x657b6e*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 616LL) ) /*0x657b77*/
      {
        v24 = (const char *)(*(_QWORD *)a2 + 2464LL); /*0x657b87*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 2488LL) > 0xFu ) /*0x657b93*/
          v24 = *(const char **)v24; /*0x657b95*/
        v23 = atoi(v24); /*0x657b98*/
      }
      else
      {
        v23 = 0; /*0x657b80*/
      }
      *(_DWORD *)(a1 + 1856) = v23; /*0x657b9e*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 704LL) ) /*0x657ba7*/
      {
        v26 = (const char *)(*(_QWORD *)a2 + 2816LL); /*0x657bb7*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 2840LL) > 0xFu ) /*0x657bc3*/
          v26 = *(const char **)v26; /*0x657bc5*/
        v25 = atoi(v26); /*0x657bc8*/
      }
      else
      {
        v25 = 0; /*0x657bb0*/
      }
      *(_DWORD *)(a1 + 1860) = v25; /*0x657bce*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 448LL) ) /*0x657bd7*/
      {
        v27 = (const char *)(*(_QWORD *)a2 + 1792LL); /*0x657be3*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 1816LL) > 0xFu ) /*0x657bef*/
          v27 = *(const char **)v27; /*0x657bf1*/
        v18 = atoi(v27); /*0x657bfa*/
      }
      *(_BYTE *)(a1 + 1653) = v18 != 0; /*0x657c01*/
      LOBYTE(v6) = v18 != 0; /*0x657bfe*/
      break;
    case 0x719: /*0x6579bf*/
      v7 = 0; /*0x6579dd*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 640LL) ) /*0x6579df*/
      {
        v9 = (const char *)(*(_QWORD *)a2 + 2560LL); /*0x6579ef*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 2584LL) > 0xFu ) /*0x6579fb*/
          v9 = *(const char **)v9; /*0x6579fd*/
        v8 = atoi(v9); /*0x657a00*/
      }
      else
      {
        v8 = 0; /*0x6579e8*/
      }
      *(_DWORD *)(a1 + 1696) = v8; /*0x657a06*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 616LL) ) /*0x657a0f*/
      {
        v11 = (const char *)(*(_QWORD *)a2 + 2464LL); /*0x657a1f*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 2488LL) > 0xFu ) /*0x657a2b*/
          v11 = *(const char **)v11; /*0x657a2d*/
        v10 = atoi(v11); /*0x657a30*/
      }
      else
      {
        v10 = 0; /*0x657a18*/
      }
      *(_DWORD *)(a1 + 1856) = v10; /*0x657a36*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 1112LL) ) /*0x657a3f*/
      {
        v13 = (const char *)(*(_QWORD *)a2 + 4448LL); /*0x657a4f*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 4472LL) > 0xFu ) /*0x657a5b*/
          v13 = *(const char **)v13; /*0x657a5d*/
        v12 = atoi(v13); /*0x657a60*/
      }
      else
      {
        v12 = 0; /*0x657a48*/
      }
      *(_BYTE *)(a1 + 1865) = v12 != 0; /*0x657a6b*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 3592LL) ) /*0x657a74*/
      {
        v15 = (const char *)(*(_QWORD *)a2 + 14368LL); /*0x657a85*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 14392LL) > 0xFu ) /*0x657a96*/
          v15 = *(const char **)v15; /*0x657a98*/
        v16 = atof(v15); /*0x657aa4*/
        if ( isnan(v16) ) /*0x657aab*/
          v14 = 0.0; /*0x657ab5*/
        else
          v14 = fminf(1000000000.0, fmaxf(-1000000000.0, v16)); /*0x657ace*/
      }
      else
      {
        v14 = 0.0; /*0x657a7d*/
      }
      *(float *)(a1 + 1868) = v14; /*0x657ad7*/
      v6 = *(_QWORD *)a3; /*0x657adf*/
      if ( *(_QWORD *)(*(_QWORD *)a3 + 704LL) ) /*0x657ae2*/
      {
        v17 = (const char *)(*(_QWORD *)a2 + 2816LL); /*0x657aee*/
        if ( *(_QWORD *)(*(_QWORD *)a2 + 2840LL) > 0xFu ) /*0x657afa*/
          v17 = *(const char **)v17; /*0x657afc*/
        LODWORD(v6) = atoi(v17); /*0x657aff*/
        v7 = v6; /*0x657b05*/
      }
      *(_DWORD *)(a1 + 1860) = v7; /*0x657b07*/
      break;
  }
  return v6; /*0x657d06*/
}

// [3/3] Address: 0x657d20
// Method: CountTriggerGameObject::getSaveString
// Hidden C++ exception states: #wind=2
__int64 __fastcall CountTriggerGameObject_getSaveString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SaveString; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r8
  __int128 v11; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v12[24]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v13[528]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v14[32]; // [rsp+260h] [rbp+160h] BYREF

  *(_QWORD *)&v11 = a2; /*0x657d50*/
  fmt::BasicWriter<char>::BasicWriter<char>(v13); /*0x657d5d*/
  SaveString = EffectGameObject_getSaveString(a1, (__int64)v14, a3); /*0x657d71*/
  v11 = *(_OWORD *)fmt::BasicStringRef<char>::BasicStringRef<char>(v12, SaveString); /*0x657d88*/
  fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x657d97*/
  sub_3C310(v14); /*0x657da5*/
  if ( *(_DWORD *)(a1 + 1036) == 1611 ) /*0x657db6*/
  {
    if ( *(_DWORD *)(a1 + 1480) ) /*0x65814b*/
    {
      *(_QWORD *)&v11 = &unk_709CE8; /*0x658154*/
      *((_QWORD *)&v11 + 1) = 0; /*0x658159*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x658168*/
      fmt::BasicWriter<char>::operator<<(v13, 51); /*0x658178*/
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65817e*/
      *((_QWORD *)&v11 + 1) = 0; /*0x658183*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x658192*/
      fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1480)); /*0x6581a3*/
    }
    if ( *(_DWORD *)(a1 + 1696) ) /*0x6581a9*/
    {
      *(_QWORD *)&v11 = &unk_709CE8; /*0x6581b2*/
      *((_QWORD *)&v11 + 1) = 0; /*0x6581b7*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x6581c6*/
      fmt::BasicWriter<char>::operator<<(v13, 80); /*0x6581d6*/
      *(_QWORD *)&v11 = &unk_709CE8; /*0x6581dc*/
      *((_QWORD *)&v11 + 1) = 0; /*0x6581e1*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x6581f0*/
      fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1696)); /*0x658201*/
    }
    if ( *(_DWORD *)(a1 + 1856) ) /*0x658207*/
    {
      *(_QWORD *)&v11 = &unk_709CE8; /*0x658210*/
      *((_QWORD *)&v11 + 1) = 0; /*0x658215*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x658224*/
      fmt::BasicWriter<char>::operator<<(v13, 77); /*0x658234*/
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65823a*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65823f*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65824e*/
      fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1856)); /*0x65825f*/
    }
    if ( *(_BYTE *)(a1 + 1653) ) /*0x658265*/
    {
      *(_QWORD *)&v11 = &unk_709CE8; /*0x65826e*/
      *((_QWORD *)&v11 + 1) = 0; /*0x658273*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x658282*/
      fmt::BasicWriter<char>::operator<<(v13, 56); /*0x658292*/
      *(_QWORD *)&v11 = &unk_709CE8; /*0x658298*/
      *((_QWORD *)&v11 + 1) = 0; /*0x65829d*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x6582ac*/
      fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1653)); /*0x6582be*/
    }
    if ( *(_BYTE *)(a1 + 1864) ) /*0x6582c4*/
    {
      *(_QWORD *)&v11 = &unk_709CE8; /*0x6582cd*/
      *((_QWORD *)&v11 + 1) = 0; /*0x6582d2*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x6582e1*/
      fmt::BasicWriter<char>::operator<<(v13, 104); /*0x6582f1*/
      *(_QWORD *)&v11 = &unk_709CE8; /*0x6582f7*/
      *((_QWORD *)&v11 + 1) = 0; /*0x6582fc*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65830b*/
      v7 = *(unsigned __int8 *)(a1 + 1864); /*0x658311*/
      goto LABEL_32; /*0x658311*/
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 1036) == 1811 ) /*0x657dc2*/
    {
      if ( *(_DWORD *)(a1 + 1480) ) /*0x657fc2*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x657fcb*/
        *((_QWORD *)&v11 + 1) = 0; /*0x657fd0*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x657fdf*/
        fmt::BasicWriter<char>::operator<<(v13, 51); /*0x657fef*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x657ff5*/
        *((_QWORD *)&v11 + 1) = 0; /*0x657ffa*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x658009*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1480)); /*0x65801a*/
      }
      if ( *(_DWORD *)(a1 + 1696) ) /*0x658020*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x658029*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65802e*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65803d*/
        fmt::BasicWriter<char>::operator<<(v13, 80); /*0x65804d*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x658053*/
        *((_QWORD *)&v11 + 1) = 0; /*0x658058*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x658067*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1696)); /*0x658078*/
      }
      if ( *(_DWORD *)(a1 + 1856) ) /*0x65807e*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x658087*/
        *((_QWORD *)&v11 + 1) = 0; /*0x65808c*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x65809b*/
        fmt::BasicWriter<char>::operator<<(v13, 77); /*0x6580ab*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x6580b1*/
        *((_QWORD *)&v11 + 1) = 0; /*0x6580b6*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x6580c5*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1856)); /*0x6580d6*/
      }
      if ( *(_BYTE *)(a1 + 1653) ) /*0x6580dc*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x6580e9*/
        *((_QWORD *)&v11 + 1) = 0; /*0x6580ee*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x6580fd*/
        fmt::BasicWriter<char>::operator<<(v13, 56); /*0x65810d*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x658113*/
        *((_QWORD *)&v11 + 1) = 0; /*0x658118*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x658127*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1653)); /*0x658139*/
      }
    }
    else
    {
      if ( *(_DWORD *)(a1 + 1036) != 1817 ) /*0x657dcb*/
        goto LABEL_33; /*0x657dcb*/
      if ( *(_DWORD *)(a1 + 1696) ) /*0x657dd8*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x657de1*/
        *((_QWORD *)&v11 + 1) = 0; /*0x657de6*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x657df5*/
        fmt::BasicWriter<char>::operator<<(v13, 80); /*0x657e05*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x657e0b*/
        *((_QWORD *)&v11 + 1) = 0; /*0x657e10*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x657e1f*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1696)); /*0x657e30*/
      }
      if ( *(_DWORD *)(a1 + 1856) ) /*0x657e36*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x657e3f*/
        *((_QWORD *)&v11 + 1) = 0; /*0x657e44*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x657e53*/
        fmt::BasicWriter<char>::operator<<(v13, 77); /*0x657e63*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x657e69*/
        *((_QWORD *)&v11 + 1) = 0; /*0x657e6e*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x657e7d*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned int *)(a1 + 1856)); /*0x657e8e*/
      }
      if ( *(_BYTE *)(a1 + 1865) ) /*0x657e94*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x657e9d*/
        *((_QWORD *)&v11 + 1) = 0; /*0x657ea2*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x657eb1*/
        fmt::BasicWriter<char>::operator<<(v13, 139); /*0x657ec1*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x657ec7*/
        *((_QWORD *)&v11 + 1) = 0; /*0x657ecc*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x657edb*/
        fmt::BasicWriter<char>::operator<<(v13, *(unsigned __int8 *)(a1 + 1865)); /*0x657eed*/
      }
      if ( *(float *)(a1 + 1868) != 0.0 ) /*0x657f03*/
      {
        *(_QWORD *)&v11 = &unk_709CE8; /*0x657f05*/
        *((_QWORD *)&v11 + 1) = 0; /*0x657f0a*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x657f19*/
        fmt::BasicWriter<char>::operator<<(v13, 449); /*0x657f29*/
        *(_QWORD *)&v11 = &unk_709CE8; /*0x657f2f*/
        *((_QWORD *)&v11 + 1) = 0; /*0x657f34*/
        fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x657f43*/
        fmt::BasicWriter<char>::operator<<(v13); /*0x657f59*/
      }
    }
    if ( *(_DWORD *)(a1 + 1860) ) /*0x657f5f*/
    {
      *(_QWORD *)&v11 = &unk_709CE8; /*0x657f6c*/
      *((_QWORD *)&v11 + 1) = 0; /*0x657f71*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x657f80*/
      fmt::BasicWriter<char>::operator<<(v13, 88); /*0x657f90*/
      *(_QWORD *)&v11 = &unk_709CE8; /*0x657f96*/
      *((_QWORD *)&v11 + 1) = 0; /*0x657f9b*/
      fmt::BasicWriter<char>::operator<<(v13, &v11); /*0x657faa*/
      v7 = *(unsigned int *)(a1 + 1860); /*0x657fb0*/
LABEL_32:
      fmt::BasicWriter<char>::operator<<(v13, v7); /*0x658318*/
    }
  }
LABEL_33:
  v8 = fmt::BasicWriter<char>::c_str(v13); /*0x658323*/
  *(_OWORD *)a2 = 0; /*0x658331*/
  *(_QWORD *)(a2 + 16) = 0; /*0x658334*/
  *(_QWORD *)(a2 + 24) = 0; /*0x658338*/
  v9 = -1; /*0x65833c*/
  do /*0x658346*/
    ++v9; /*0x658343*/
  while ( *(_BYTE *)(v8 + v9) ); /*0x658346*/
  sub_3C230(a2); /*0x658353*/
  fmt::BasicWriter<char>::~BasicWriter<char>(v13); /*0x65835e*/
  return a2; /*0x658367*/
}
