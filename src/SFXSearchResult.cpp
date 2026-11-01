#include <Geode/binding/SFXSearchResult.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x47cd00
// Method: SFXSearchResult::~SFXSearchResult
cocos2d::CCObject *__fastcall SFXSearchResult__dtor_SFXSearchResult(cocos2d::CCObject *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *(_QWORD *)Block = &SFXSearchResult::`vftable'; /*0x47cd16*/
  *((_QWORD *)Block + 7) = &SFXSearchResult::`vftable'; /*0x47cd20*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 23); /*0x47cd24*/
  if ( v4 ) /*0x47cd2e*/
    cocos2d::CCObject::release(v4); /*0x47cd30*/
  MusicSearchResult__dtor_MusicSearchResult(Block); /*0x47cd39*/
  if ( (a2 & 1) != 0 ) /*0x47cd43*/
    j_j_free(Block); /*0x47cd4d*/
  return Block; /*0x47cd55*/
}

// [2/3] Address: 0x496b60
// Method: SFXSearchResult::create
// Hidden C++ exception states: #wind=1
_QWORD *__fastcall SFXSearchResult_create(int a1)
{
  _QWORD *v3; // [rsp+38h] [rbp+10h]

  v3 = operator new(0xC0u); /*0x496b79*/
  MusicSearchResult_MusicSearchResult((__int64)v3); /*0x496b81*/
  *v3 = &SFXSearchResult::`vftable'; /*0x496b8d*/
  v3[7] = &SFXSearchResult::`vftable'; /*0x496b97*/
  v3[23] = 0; /*0x496b9b*/
  *((_DWORD *)v3 + 36) = -1; /*0x496ba6*/
  *((_DWORD *)v3 + 44) = a1; /*0x496bb0*/
  *((_DWORD *)v3 + 25) = 1; /*0x496bb6*/
  cocos2d::CCObject::autorelease((cocos2d::CCObject *)v3); /*0x496bc0*/
  return v3; /*0x496bc9*/
}

// [3/3] Address: 0x496c80
// Method: SFXSearchResult::updateObjects
// Hidden C++ exception states: #wind=19
void __fastcall SFXSearchResult_updateObjects(__int64 a1, unsigned int a2)
{
  unsigned int v2; // esi
  __int64 v3; // r13
  unsigned __int64 v4; // r14
  char *v5; // rcx
  char *v6; // rdi
  char *v7; // rbx
  const char *v8; // rbx
  __int64 v9; // rdi
  int v10; // eax
  struct cocos2d::CCObject *v11; // rax
  cocos2d::CCObject *v12; // rax
  cocos2d::CCObject *v13; // rbx
  cocos2d::CCObject *v14; // rcx
  int v15; // edx
  cocos2d::CCArray *v16; // r12
  __int64 v17; // rax
  struct cocos2d::CCArray *v18; // r15
  cocos2d::CCArray *v19; // rdi
  struct cocos2d::CCObject *v20; // rbx
  __int64 v21; // rbx
  unsigned int *v22; // rbx
  __int64 v23; // rax
  struct cocos2d::CCObject **v24; // rbx
  struct cocos2d::CCObject **m; // rsi
  struct cocos2d::CCObject *v26; // rdx
  cocos2d::CCArray *v27; // rcx
  __int64 v28; // rax
  void (__fastcall *v29)(__int64); // rdx
  unsigned int v30; // eax
  unsigned int *v31; // rbx
  __int64 v32; // rax
  struct cocos2d::CCObject **v33; // rbx
  struct cocos2d::CCObject **i; // rdi
  unsigned int *v35; // rcx
  __int64 v36; // rax
  unsigned __int64 v37; // rcx
  unsigned __int64 j; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdi
  __int128 *v41; // rbx
  __int128 *v42; // rax
  cocos2d::CCArray *v43; // rdi
  struct cocos2d::CCObject *Object; // rbx
  __int128 *v45; // r9
  _QWORD *v46; // rcx
  char v47; // si
  __int64 v48; // rax
  unsigned int *v49; // rbx
  __int64 v50; // rax
  struct cocos2d::CCObject **v51; // rbx
  struct cocos2d::CCObject **k; // r14
  struct cocos2d::CCObject *v53; // rdx
  __int64 v54; // rax
  cocos2d::CCObject *v55; // rcx
  cocos2d::CCArray *v56; // rdi
  int v57; // eax
  __int64 v58; // rcx
  __int64 *v59; // rbx
  struct cocos2d::CCObject *v60; // rax
  int *v61; // rbx
  struct cocos2d::CCObject *v62; // rax
  __int64 v63; // rax
  unsigned int *v64; // rbx
  __int64 v65; // rax
  struct cocos2d::CCObject **v66; // rbx
  struct cocos2d::CCObject **n; // rsi
  unsigned int *v68; // rcx
  __int64 v69; // rax
  unsigned __int64 v70; // rcx
  unsigned __int64 ii; // rdx
  __int64 v72; // rax
  cocos2d::CCObject *v73; // rcx
  __int64 v74; // rsi
  __int64 v75; // rcx
  unsigned __int64 v76; // r12
  __int64 v77; // r15
  __int64 v78; // rbx
  struct cocos2d::CCObject *v79; // rbx
  void *v80; // rcx
  int *v81; // rbx
  unsigned __int64 v82; // rbx
  cocos2d::CCDictionary *v83; // rcx
  struct cocos2d::CCObject *v84; // rax
  void *v86; // [rsp+38h] [rbp-41h]
  void *v87; // [rsp+38h] [rbp-41h]
  void *v88; // [rsp+38h] [rbp-41h]
  void *v89; // [rsp+38h] [rbp-41h]
  void *v90; // [rsp+38h] [rbp-41h]
  void *v91; // [rsp+38h] [rbp-41h]
  void *v92; // [rsp+38h] [rbp-41h]
  void *v93; // [rsp+38h] [rbp-41h]
  void *v94; // [rsp+40h] [rbp-39h]
  void *v95; // [rsp+40h] [rbp-39h]
  void *v96; // [rsp+48h] [rbp-31h]
  void *v97; // [rsp+50h] [rbp-29h]
  void *v98; // [rsp+58h] [rbp-21h]
  __int128 v99; // [rsp+60h] [rbp-19h] BYREF
  __int64 v100; // [rsp+70h] [rbp-9h]
  unsigned __int64 v101; // [rsp+78h] [rbp-1h]
  _DWORD v102[4]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v103; // [rsp+90h] [rbp+17h]
  unsigned __int64 v104; // [rsp+98h] [rbp+1Fh]

  v2 = a2; /*0x496cb2*/
  v3 = a1; /*0x496cb7*/
  v4 = 0; /*0x496cba*/
  if ( !*(_DWORD *)(a1 + 148) && *(_QWORD *)(a1 + 120) ) /*0x496cca*/
  {
    if ( *(_QWORD *)(a1 + 128) <= 0xFu ) /*0x496cdc*/
    {
      v6 = (char *)(a1 + 104); /*0x496ce7*/
      v5 = (char *)(a1 + 104); /*0x496ceb*/
    }
    else
    {
      v5 = *(char **)(a1 + 104); /*0x496cde*/
      v6 = v5; /*0x496ce2*/
    }
    v7 = &v5[*(_QWORD *)(v3 + 120)]; /*0x496cf3*/
    if ( v6 == v7 ) /*0x496cf9*/
    {
LABEL_9:
      v8 = (const char *)(v3 + 104); /*0x496d19*/
      if ( *(_QWORD *)(v3 + 128) > 0xFu ) /*0x496d22*/
        v8 = *(const char **)v8; /*0x496d24*/
      v9 = qword_906070; /*0x496d27*/
      if ( !qword_906070 ) /*0x496d31*/
      {
        v86 = operator new(0x3D0u); /*0x496d3d*/
        qword_906070 = sub_47C350(v86); /*0x496d4a*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x496d57*/
        v9 = qword_906070; /*0x496d5a*/
      }
      v10 = atoi(v8); /*0x496d64*/
      a1 = *(_QWORD *)(v9 + 408); /*0x496d6a*/
      if ( a1 ) /*0x496d74*/
      {
        v11 = cocos2d::CCDictionary::objectForKey((cocos2d::CCDictionary *)a1, v10); /*0x496d79*/
        if ( v11 ) /*0x496d82*/
        {
          v12 = cocos2d::CCArray::createWithObject(v11); /*0x496d87*/
          v13 = v12; /*0x496d8d*/
          if ( *(cocos2d::CCObject **)(v3 + 64) != v12 ) /*0x496d94*/
          {
            if ( v12 ) /*0x496d9d*/
              cocos2d::CCObject::retain(v12); /*0x496da2*/
            v14 = *(cocos2d::CCObject **)(v3 + 64); /*0x496da8*/
            if ( v14 ) /*0x496daf*/
              cocos2d::CCObject::release(v14); /*0x496db1*/
            *(_QWORD *)(v3 + 64) = v13; /*0x496db7*/
          }
          return; /*0x496dbb*/
        }
      }
    }
    else
    {
      while ( isdigit(*v6) ) /*0x496d0b*/
      {
        if ( ++v6 == v7 ) /*0x496d17*/
          goto LABEL_9; /*0x496d17*/
      }
    }
  }
  *(_DWORD *)(v3 + 136) = v2; /*0x496dc0*/
  v15 = *(_DWORD *)(v3 + 148); /*0x496dc7*/
  if ( v15 != 1 && (unsigned int)(v15 - 2) > 1 ) /*0x496ddd*/
  {
    v16 = 0; /*0x496de3*/
    v17 = *(_QWORD *)(v3 + 184); /*0x496de6*/
    if ( v17 ) /*0x496df0*/
    {
      if ( !*(_QWORD *)(v3 + 120) ) /*0x496dfa*/
      {
        v16 = *(cocos2d::CCArray **)(v17 + 176); /*0x496edb*/
LABEL_44:
        v30 = cocos2d::CCArray::count(v16); /*0x496f29*/
        v18 = cocos2d::CCArray::createWithCapacity(v30); /*0x496f3a*/
        if ( v16 ) /*0x496f40*/
        {
          v31 = (unsigned int *)*((_QWORD *)v16 + 7); /*0x496f42*/
          v32 = *v31; /*0x496f47*/
          if ( (_DWORD)v32 ) /*0x496f4b*/
          {
            v33 = (struct cocos2d::CCObject **)*((_QWORD *)v31 + 2); /*0x496f4d*/
            for ( i = &v33[v32 - 1]; v33 <= i; ++v33 ) /*0x496f5c*/
            {
              if ( !*v33 ) /*0x496f60*/
                break; /*0x496f66*/
              cocos2d::CCArray::addObject(v18, *v33); /*0x496f6b*/
            }
          }
        }
LABEL_49:
        if ( *(_QWORD *)(v3 + 120) ) /*0x496f7a*/
        {
          if ( v18 ) /*0x496f88*/
          {
            v35 = (unsigned int *)*((_QWORD *)v18 + 7); /*0x496f8a*/
            v36 = *v35; /*0x496f8e*/
            if ( (_DWORD)v36 ) /*0x496f92*/
            {
              v37 = *((_QWORD *)v35 + 2); /*0x496f94*/
              for ( j = v37 + 8 * (v36 - 1); v37 <= j; v37 += 8LL ) /*0x496fa3*/
              {
                if ( !*(_QWORD *)v37 ) /*0x496fa5*/
                  break; /*0x496fab*/
                *(_BYTE *)(*(_QWORD *)v37 + 73LL) = 0; /*0x496fad*/
              }
            }
          }
          v39 = qword_905FD0; /*0x496fba*/
          if ( !qword_905FD0 ) /*0x496fc4*/
          {
            v88 = operator new(0x6E8u); /*0x496fd0*/
            qword_905FD0 = sub_2723A0(v88); /*0x496fdd*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x496fee*/
            v39 = qword_905FD0; /*0x496ff0*/
          }
          if ( GameManager_getGameVariable(v39, "0147") && *(_QWORD *)(v3 + 184) ) /*0x49700b*/
          {
            sub_3E4F0(&v99, v3 + 104); /*0x497021*/
            if ( (_DWORD)v100 ) /*0x49702d*/
            {
              v40 = (unsigned int)v100; /*0x49702f*/
              do /*0x49705f*/
              {
                v41 = &v99; /*0x497031*/
                if ( v101 > 0xF ) /*0x49703a*/
                  v41 = (__int128 *)v99; /*0x49703a*/
                v42 = &v99; /*0x49703f*/
                if ( v101 > 0xF ) /*0x497043*/
                  v42 = (__int128 *)v99; /*0x497043*/
                *((_BYTE *)v41 + v4) = tolower(*((char *)v42 + v4)); /*0x497053*/
                ++v4; /*0x497057*/
                --v40; /*0x49705b*/
              }
              while ( v40 ); /*0x49705f*/
            }
            v43 = cocos2d::CCArray::createWithObject(*(struct cocos2d::CCObject **)(v3 + 184)); /*0x49706e*/
            while ( cocos2d::CCArray::count(v43) ) /*0x497074*/
            {
              Object = cocos2d::CCArray::lastObject(v43); /*0x49708b*/
              cocos2d::CCArray::removeLastObject(v43, 1); /*0x497093*/
              sub_3E4F0(v102, (char *)Object + 112); /*0x4970a1*/
              if ( *((_BYTE *)Object + 73) ) /*0x4970a7*/
                goto LABEL_74; /*0x4970a7*/
              v45 = &v99; /*0x4970ad*/
              if ( v101 > 0xF ) /*0x4970b6*/
                LODWORD(v45) = v99; /*0x4970b6*/
              v46 = v102; /*0x4970bb*/
              if ( v104 > 0xF ) /*0x4970c4*/
                LODWORD(v46) = v102[0]; /*0x4970c4*/
              if ( sub_3DFB0((_DWORD)v46, v103, 0, (_DWORD)v45, v100) != -1 ) /*0x4970e2*/
LABEL_74:
                v47 = 1; /*0x4970e9*/
              else
                v47 = 0; /*0x4970e4*/
              v48 = *((_QWORD *)Object + 22); /*0x4970ec*/
              if ( v48 ) /*0x4970f6*/
              {
                v49 = *(unsigned int **)(v48 + 56); /*0x4970f8*/
                v50 = *v49; /*0x4970fc*/
                if ( (_DWORD)v50 ) /*0x497100*/
                {
                  v51 = (struct cocos2d::CCObject **)*((_QWORD *)v49 + 2); /*0x497102*/
                  for ( k = &v51[v50 - 1]; v51 <= k; ++v51 ) /*0x497111*/
                  {
                    v53 = *v51; /*0x497113*/
                    if ( !*v51 ) /*0x497113*/
                      break; /*0x497119*/
                    *((_BYTE *)v53 + 73) = v47; /*0x49711b*/
                    if ( *((_BYTE *)v53 + 72) ) /*0x49711f*/
                      cocos2d::CCArray::addObject(v43, v53); /*0x497128*/
                  }
                }
              }
              sub_3C310(v102); /*0x49713b*/
            }
            sub_3C310(&v99); /*0x497155*/
          }
          sub_3E4F0(v102, v3 + 104); /*0x497162*/
          v18 = (struct cocos2d::CCArray *)sub_4948A0(v3, v18, v54); /*0x497175*/
        }
        sub_496BE0(v18, a2); /*0x49717e*/
        if ( *(struct cocos2d::CCArray **)(v3 + 64) != v18 ) /*0x497187*/
        {
          if ( v18 ) /*0x497190*/
            cocos2d::CCObject::retain(v18); /*0x497195*/
          v55 = *(cocos2d::CCObject **)(v3 + 64); /*0x49719b*/
          if ( v55 ) /*0x4971a2*/
            cocos2d::CCObject::release(v55); /*0x4971a4*/
          *(_QWORD *)(v3 + 64) = v18; /*0x4971aa*/
        }
        return; /*0x4971ae*/
      }
      if ( v15 || *(_DWORD *)(v17 + 56) != 1 ) /*0x496e08*/
      {
        v18 = (struct cocos2d::CCArray *)cocos2d::CCArray::create(a1); /*0x496e3c*/
        v19 = cocos2d::CCArray::createWithObject(*(struct cocos2d::CCObject **)(v3 + 184)); /*0x496e4c*/
        while ( cocos2d::CCArray::count(v19) ) /*0x496e52*/
        {
          v20 = cocos2d::CCArray::lastObject(v19); /*0x496e69*/
          cocos2d::CCArray::removeLastObject(v19, 1); /*0x496e71*/
          v21 = *((_QWORD *)v20 + 22); /*0x496e77*/
          if ( v21 ) /*0x496e81*/
          {
            v22 = *(unsigned int **)(v21 + 56); /*0x496e83*/
            v23 = *v22; /*0x496e87*/
            if ( (_DWORD)v23 ) /*0x496e8b*/
            {
              v24 = (struct cocos2d::CCObject **)*((_QWORD *)v22 + 2); /*0x496e8d*/
              for ( m = &v24[v23 - 1]; v24 <= m; ++v24 ) /*0x496e9c*/
              {
                v26 = *v24; /*0x496ea0*/
                if ( !*v24 ) /*0x496ea0*/
                  break; /*0x496ea6*/
                v27 = v19; /*0x496eac*/
                if ( !*((_BYTE *)v26 + 72) ) /*0x496ea8*/
                  v27 = v18; /*0x496eb1*/
                cocos2d::CCArray::addObject(v27, v26); /*0x496eb4*/
              }
            }
          }
        }
        if ( v18 ) /*0x496ed3*/
          goto LABEL_49; /*0x496ed3*/
        goto LABEL_44; /*0x496ed3*/
      }
      if ( !qword_906070 ) /*0x496e14*/
        goto LABEL_42; /*0x496e14*/
    }
    else if ( !qword_906070 ) /*0x496eee*/
    {
LABEL_42:
      v87 = operator new(0x3D0u); /*0x496ef0*/
      v28 = sub_47C350(v87); /*0x496f01*/
      v29 = *(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 72LL); /*0x496f0a*/
      qword_906070 = v28; /*0x496f0e*/
      v29(v28); /*0x496f18*/
    }
    v16 = (cocos2d::CCArray *)sub_48C9C0(); /*0x496f21*/
    goto LABEL_44; /*0x496f26*/
  }
  v56 = (cocos2d::CCArray *)cocos2d::CCArray::create(a1); /*0x4971b9*/
  v57 = *(_DWORD *)(v3 + 148); /*0x4971bc*/
  if ( v57 == 1 ) /*0x4971c6*/
  {
    v58 = qword_906070; /*0x4971cc*/
    if ( !qword_906070 ) /*0x4971d6*/
    {
      v89 = operator new(0x3D0u); /*0x4971e2*/
      qword_906070 = sub_47C350(v89); /*0x4971ef*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x497200*/
      v58 = qword_906070; /*0x497202*/
    }
    v59 = *(__int64 **)(v58 + 656); /*0x497209*/
    while ( 1 ) /*0x497210*/
    {
      v59 = (__int64 *)*v59; /*0x497210*/
      if ( !v58 ) /*0x497216*/
      {
        v90 = operator new(0x3D0u); /*0x497222*/
        qword_906070 = sub_47C350(v90); /*0x49722f*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x497240*/
        v58 = qword_906070; /*0x497242*/
      }
      if ( v59 == *(__int64 **)(v58 + 656) ) /*0x497250*/
        break; /*0x497250*/
      if ( *(_QWORD *)(v58 + 408) ) /*0x497252*/
      {
        v60 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(v58 + 408), *((int *)v59 + 4)); /*0x497265*/
        if ( v60 && !*((_BYTE *)v60 + 72) ) /*0x497270*/
          cocos2d::CCArray::addObject(v56, v60); /*0x49727c*/
        v58 = qword_906070; /*0x497282*/
      }
    }
    v61 = *(int **)(v58 + 720); /*0x49728b*/
    while ( 1 ) /*0x497292*/
    {
      v61 = *(int **)v61; /*0x497292*/
      if ( !v58 ) /*0x497298*/
      {
        v91 = operator new(0x3D0u); /*0x4972a4*/
        qword_906070 = sub_47C350(v91); /*0x4972b1*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x4972c2*/
        v58 = qword_906070; /*0x4972c4*/
      }
      if ( v61 == *(int **)(v58 + 720) ) /*0x4972d2*/
        break; /*0x4972d2*/
      if ( *(_QWORD *)(v58 + 920) && v61[4] > 0 ) /*0x4972ea*/
      {
        v62 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(v58 + 920), v61[4]); /*0x4972f2*/
        if ( v62 && !*((_BYTE *)v62 + 72) ) /*0x4972fd*/
          cocos2d::CCArray::addObject(v56, v62); /*0x497309*/
        v58 = qword_906070; /*0x49730f*/
      }
    }
    goto LABEL_120; /*0x4972d2*/
  }
  if ( v57 != 3 ) /*0x49731e*/
  {
    if ( v57 != 2 ) /*0x497432*/
    {
LABEL_163:
      v82 = (__int64)(*(_QWORD *)(v3 + 160) - *(_QWORD *)(v3 + 152)) >> 2; /*0x4976a7*/
      if ( v82 ) /*0x4976bc*/
      {
        do /*0x497737*/
        {
          if ( !qword_906070 ) /*0x4976ca*/
          {
            v95 = operator new(0x3D0u); /*0x4976d6*/
            qword_906070 = sub_47C350(v95); /*0x4976e3*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x4976f4*/
          }
          v83 = *(cocos2d::CCDictionary **)(qword_906070 + 408); /*0x497708*/
          if ( v83 ) /*0x497712*/
          {
            v84 = cocos2d::CCDictionary::objectForKey(v83, *(int *)(*(_QWORD *)(v3 + 152) + 4 * v4)); /*0x497714*/
            if ( v84 ) /*0x49771d*/
            {
              if ( !*((_BYTE *)v84 + 72) ) /*0x49771f*/
                cocos2d::CCArray::addObject(v56, v84); /*0x49772b*/
            }
          }
          ++v4; /*0x497731*/
        }
        while ( v4 < v82 ); /*0x497737*/
      }
      goto LABEL_120; /*0x497737*/
    }
    v74 = 0; /*0x497438*/
    v75 = qword_906070; /*0x49743b*/
    if ( !qword_906070 ) /*0x497445*/
    {
      v92 = operator new(0x3D0u); /*0x497451*/
      qword_906070 = sub_47C350(v92); /*0x49745e*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x49746f*/
      v75 = qword_906070; /*0x497471*/
    }
    v76 = (__int64)(*(_QWORD *)(v75 + 848) - *(_QWORD *)(v75 + 840)) >> 3; /*0x497486*/
    if ( !v76 ) /*0x49748d*/
      goto LABEL_119; /*0x49748d*/
    while ( 1 ) /*0x497496*/
    {
      v99 = 0; /*0x497496*/
      v100 = 0; /*0x49749a*/
      v101 = 15; /*0x49749e*/
      LOBYTE(v99) = 0; /*0x4974a6*/
      if ( !v75 ) /*0x4974ad*/
      {
        v93 = operator new(0x3D0u); /*0x4974b9*/
        qword_906070 = sub_47C350(v93); /*0x4974c6*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x4974d7*/
        v75 = qword_906070; /*0x4974d9*/
      }
      v77 = *(_QWORD *)(v75 + 840) + 8 * v74; /*0x4974e7*/
      if ( !v75 ) /*0x4974ee*/
      {
        v96 = operator new(0x3D0u); /*0x4974fa*/
        qword_906070 = sub_47C350(v96); /*0x497507*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x497518*/
        v75 = qword_906070; /*0x49751a*/
      }
      v78 = v75; /*0x497521*/
      if ( !v75 ) /*0x497527*/
      {
        v97 = operator new(0x3D0u); /*0x497533*/
        qword_906070 = sub_47C350(v97); /*0x497540*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x497551*/
        v75 = qword_906070; /*0x497554*/
      }
      v79 = (struct cocos2d::CCObject *)sub_482510( /*0x497572*/
                                          v75,
                                          *(unsigned int *)(*(_QWORD *)(v78 + 840) + 8 * v74),
                                          *(unsigned int *)(v77 + 4),
                                          &v99);
      if ( v101 > 0xF ) /*0x49757d*/
      {
        v80 = (void *)v99; /*0x497582*/
        if ( v101 + 1 >= 0x1000 ) /*0x497590*/
        {
          v80 = *(void **)(v99 - 8); /*0x497596*/
          if ( (unsigned __int64)(v99 - (_QWORD)v80 - 8) > 0x1F ) /*0x4975a5*/
            invoke_watson(0, 0, 0, 0, 0); /*0x4976a0*/
        }
        j_j_free(v80); /*0x4975ab*/
      }
      v100 = 0; /*0x4975b0*/
      v101 = 15; /*0x4975b4*/
      LOBYTE(v99) = 0; /*0x4975bc*/
      if ( v79 ) /*0x4975c3*/
        goto LABEL_174; /*0x4975c3*/
      v75 = qword_906070; /*0x4975c9*/
      if ( !qword_906070 ) /*0x4975d3*/
      {
        v98 = operator new(0x3D0u); /*0x4975df*/
        qword_906070 = sub_47C350(v98); /*0x4975ec*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x4975fd*/
        v75 = qword_906070; /*0x4975ff*/
      }
      v81 = (int *)(*(_QWORD *)(v75 + 840) + 8 * v74); /*0x49760d*/
      if ( !v75 ) /*0x497614*/
      {
        v94 = operator new(0x3D0u); /*0x497620*/
        qword_906070 = sub_47C350(v94); /*0x49762d*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x49763e*/
        v75 = qword_906070; /*0x497640*/
      }
      if ( !*(_QWORD *)(v75 + 408) ) /*0x497651*/
        goto LABEL_160; /*0x497651*/
      v79 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(v75 + 408), *v81); /*0x49765f*/
      if ( v79 ) /*0x497665*/
      {
LABEL_174:
        if ( !*((_BYTE *)v79 + 72) ) /*0x497667*/
          cocos2d::CCArray::addObject(v56, v79); /*0x497673*/
      }
      v75 = qword_906070; /*0x497679*/
LABEL_160:
      if ( ++v74 >= v76 ) /*0x497686*/
        goto LABEL_119; /*0x497686*/
    }
  }
  v63 = *(_QWORD *)(v3 + 88); /*0x497324*/
  if ( !v63 ) /*0x49732b*/
    goto LABEL_163; /*0x49732b*/
  v64 = *(unsigned int **)(v63 + 56); /*0x497331*/
  v65 = *v64; /*0x497335*/
  if ( (_DWORD)v65 ) /*0x497339*/
  {
    v66 = (struct cocos2d::CCObject **)*((_QWORD *)v64 + 2); /*0x49733b*/
    for ( n = &v66[v65 - 1]; v66 <= n; ++v66 ) /*0x49734a*/
    {
      if ( !*v66 ) /*0x497350*/
        break; /*0x497356*/
      cocos2d::CCArray::addObject(v56, *v66); /*0x49735b*/
    }
LABEL_119:
    v2 = a2; /*0x49736a*/
  }
LABEL_120:
  if ( *(_QWORD *)(v3 + 120) ) /*0x49736d*/
  {
    if ( v56 ) /*0x497377*/
    {
      v68 = (unsigned int *)*((_QWORD *)v56 + 7); /*0x497379*/
      v69 = *v68; /*0x49737d*/
      if ( (_DWORD)v69 ) /*0x497381*/
      {
        v70 = *((_QWORD *)v68 + 2); /*0x497383*/
        for ( ii = v70 + 8 * (v69 - 1); v70 <= ii; v70 += 8LL ) /*0x497392*/
        {
          if ( !*(_QWORD *)v70 ) /*0x497394*/
            break; /*0x49739a*/
          *(_BYTE *)(*(_QWORD *)v70 + 73LL) = 0; /*0x49739c*/
        }
      }
    }
    sub_3E4F0(v102, v3 + 104); /*0x4973b1*/
    v56 = (cocos2d::CCArray *)sub_4948A0(v3, v56, v72); /*0x4973c4*/
  }
  if ( *(_DWORD *)(v3 + 148) != 2 ) /*0x4973cf*/
    sub_496BE0(v56, v2); /*0x4973d6*/
  if ( *(cocos2d::CCArray **)(v3 + 64) != v56 ) /*0x4973df*/
  {
    if ( v56 ) /*0x4973e4*/
      cocos2d::CCObject::retain(v56); /*0x4973e9*/
    v73 = *(cocos2d::CCObject **)(v3 + 64); /*0x4973ef*/
    if ( v73 ) /*0x4973f6*/
      cocos2d::CCObject::release(v73); /*0x4973f8*/
    *(_QWORD *)(v3 + 64) = v56; /*0x4973fe*/
  }
}
