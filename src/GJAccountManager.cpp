#include <Geode/binding/GJAccountManager.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/11] Address: 0x53f60
// Method: GJAccountManager::backupAccount
// Hidden C++ exception states: #wind=3
double __fastcall GJAccountManager_backupAccount(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r8
  int v7; // ebx
  int v8; // r8d
  int v9; // r14d
  void **v10; // r11
  int v11; // r10d
  int v12; // r9d
  __int64 v13; // rdx
  unsigned __int8 v14; // cl
  __int64 v15; // rax
  int v16; // eax
  _QWORD *v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // esi
  void **v22; // rdi
  unsigned __int64 v23; // rbx
  void **v24; // r9
  int v25; // r15d
  __int64 v26; // rax
  void **v27; // r10
  int v28; // r9d
  __int64 v29; // rdx
  unsigned __int8 v30; // cl
  __int64 v31; // rax
  void **v32; // rax
  void **v33; // rsi
  unsigned __int64 v34; // rdi
  __int64 v35; // rbx
  __int64 v36; // rbx
  int v37; // ecx
  void **v38; // r10
  int v39; // r8d
  __int64 i; // r9
  int v41; // edx
  void *v42; // rcx
  void *Src[2]; // [rsp+40h] [rbp-49h] BYREF
  unsigned __int64 v45; // [rsp+50h] [rbp-39h]
  unsigned __int64 v46; // [rsp+58h] [rbp-31h]
  __int128 v47; // [rsp+60h] [rbp-29h] BYREF
  unsigned __int64 v48; // [rsp+70h] [rbp-19h]
  __int64 v49; // [rsp+78h] [rbp-11h]
  _QWORD v50[2]; // [rsp+80h] [rbp-9h] BYREF
  __int64 v51; // [rsp+90h] [rbp+7h]
  unsigned __int64 v52; // [rsp+98h] [rbp+Fh]

  if ( *(int *)(a1 + 528) > 0 ) /*0x53f9b*/
  {
    v4 = sub_7E1C0(&v47); /*0x53fa1*/
    sub_58AD0(a2, v4); /*0x53fac*/
    sub_3C310(&v47); /*0x53fb5*/
  }
  sub_52E20(v50, *(_BYTE *)(a1 + 648)); /*0x53fdc*/
  if ( !v51 ) /*0x53fe7*/
    goto LABEL_93; /*0x53fe7*/
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 600) + 600LL) + 8LL))(*(_QWORD *)(a1 + 600) + 600LL); /*0x53ffe*/
  *(_OWORD *)Src = 0; /*0x54004*/
  v45 = 0; /*0x5400b*/
  v46 = 0; /*0x5400f*/
  v6 = -1; /*0x54013*/
  do /*0x54023*/
    ++v6; /*0x54020*/
  while ( *(_BYTE *)(v5 + v6) ); /*0x54023*/
  sub_3C230(Src); /*0x54030*/
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 600) + 760LL); /*0x5403d*/
  if ( v7 >= 0 ) /*0x54045*/
  {
    v10 = Src; /*0x54050*/
    if ( v46 > 0xF ) /*0x54059*/
      v10 = (void **)Src[0]; /*0x54059*/
    v11 = 0; /*0x5405e*/
    v12 = 0; /*0x54061*/
    v8 = v45; /*0x54064*/
    if ( v7 <= 0 ) /*0x5406a*/
    {
LABEL_21:
      v9 = v45; /*0x540c2*/
      if ( v11 < (int)v45 ) /*0x540c8*/
        v9 = v11; /*0x540c8*/
      goto LABEL_23; /*0x540c8*/
    }
    v13 = 0; /*0x5406c*/
    while ( 1 ) /*0x54070*/
    {
      if ( v13 >= (int)v45 ) /*0x54073*/
        goto LABEL_21; /*0x54073*/
      v14 = *((_BYTE *)v10 + v13); /*0x54075*/
      if ( v14 < 0x80u ) /*0x5407d*/
        break; /*0x5407d*/
      if ( (v14 & 0xE0) == 0xC0 ) /*0x54086*/
      {
        v15 = 2; /*0x54088*/
      }
      else if ( (v14 & 0xF0) == 0xE0 ) /*0x54096*/
      {
        v15 = 3; /*0x54098*/
      }
      else
      {
        v15 = 4; /*0x540a5*/
        if ( (v14 & 0xF8) != 0xF0 ) /*0x540aa*/
          break; /*0x540aa*/
      }
LABEL_20:
      v11 += v15; /*0x540b1*/
      v13 += v15; /*0x540b7*/
      if ( ++v12 >= v7 ) /*0x540c0*/
        goto LABEL_21; /*0x540c0*/
    }
    v15 = 1; /*0x540ac*/
    goto LABEL_20; /*0x540ac*/
  }
  v8 = v45; /*0x54047*/
  v9 = v45; /*0x5404b*/
LABEL_23:
  v16 = v9; /*0x540cc*/
  if ( v9 >= v8 ) /*0x540d2*/
    v16 = v8; /*0x540d2*/
  if ( v16 >= 0 ) /*0x540d8*/
  {
    if ( v9 >= v8 ) /*0x540e2*/
      v9 = v8; /*0x540e2*/
  }
  else
  {
    v9 = 0; /*0x540da*/
  }
  v17 = v50; /*0x540e6*/
  if ( v52 > 0xF ) /*0x540ef*/
    v17 = (_QWORD *)v50[0]; /*0x540ef*/
  sub_58C00(Src, v9, v17, v51); /*0x540ff*/
  v21 = *(_DWORD *)(a1 + 616); /*0x54104*/
  v22 = (void **)Src[0]; /*0x5410b*/
  v23 = v46; /*0x5410f*/
  if ( v21 > 0 ) /*0x54115*/
  {
    v24 = Src; /*0x5411b*/
    if ( v46 > 0xF ) /*0x54123*/
      v24 = (void **)Src[0]; /*0x54123*/
    v20 = 0; /*0x54127*/
    v25 = v45; /*0x5412a*/
    if ( (int)v45 > 0 ) /*0x54131*/
    {
      v18 = 0; /*0x54137*/
      do /*0x5418c*/
      {
        v19 = *((unsigned __int8 *)v24 + v18); /*0x54140*/
        if ( (unsigned __int8)v19 >= 0x80u ) /*0x54148*/
        {
          if ( (v19 & 0xE0) == 0xC0 ) /*0x54158*/
          {
            v26 = 2; /*0x5415a*/
          }
          else if ( (v19 & 0xF0) == 0xE0 ) /*0x54168*/
          {
            v26 = 3; /*0x5416a*/
          }
          else
          {
            LOBYTE(v19) = v19 & 0xF8; /*0x54171*/
            if ( (_BYTE)v19 != 0xF0 ) /*0x54177*/
              break; /*0x54177*/
            v26 = 4; /*0x54179*/
          }
        }
        else
        {
          v26 = 1; /*0x5414a*/
        }
        v18 += v26; /*0x5417e*/
        if ( v18 > (int)v45 ) /*0x54184*/
          break; /*0x54184*/
        v20 = (unsigned int)(v20 + 1); /*0x54186*/
      }
      while ( v18 < (int)v45 ); /*0x5418c*/
      if ( (int)v20 <= v21 ) /*0x54191*/
        goto LABEL_67; /*0x54191*/
      v27 = Src; /*0x54197*/
      v20 = 0; /*0x5419b*/
      v28 = 0; /*0x5419e*/
      if ( v46 > 0xF ) /*0x541a5*/
        v27 = (void **)Src[0]; /*0x541a7*/
      v29 = 0; /*0x541aa*/
      while ( 1 ) /*0x541b0*/
      {
        if ( v29 >= (int)v45 ) /*0x541b3*/
        {
LABEL_59:
          if ( (int)v20 < (int)v45 ) /*0x54205*/
            v25 = v20; /*0x54205*/
          v18 = v25; /*0x54209*/
          if ( v25 > v45 ) /*0x54213*/
          {
            sub_58D00(Src, v25 - v45); /*0x54232*/
          }
          else
          {
            v45 = v25; /*0x54215*/
            v32 = Src; /*0x54219*/
            if ( v46 > 0xF ) /*0x54221*/
              v32 = (void **)Src[0]; /*0x54221*/
            *((_BYTE *)v32 + v25) = 0; /*0x54225*/
          }
          v22 = (void **)Src[0]; /*0x54237*/
          v23 = v46; /*0x5423b*/
          goto LABEL_67; /*0x5423b*/
        }
        v30 = *((_BYTE *)v27 + v29); /*0x541b5*/
        if ( v30 < 0x80u ) /*0x541bd*/
          break; /*0x541bd*/
        if ( (v30 & 0xE0) == 0xC0 ) /*0x541c6*/
        {
          v31 = 2; /*0x541c8*/
        }
        else if ( (v30 & 0xF0) == 0xE0 ) /*0x541d6*/
        {
          v31 = 3; /*0x541d8*/
        }
        else
        {
          v31 = 4; /*0x541e5*/
          if ( (v30 & 0xF8) != 0xF0 ) /*0x541ea*/
            break; /*0x541ea*/
        }
LABEL_58:
        v19 = v31; /*0x541f1*/
        v20 = (unsigned int)(v31 + v20); /*0x541f4*/
        v29 += v31; /*0x541f7*/
        if ( ++v28 >= v21 ) /*0x54200*/
          goto LABEL_59; /*0x54200*/
      }
      v31 = 1; /*0x541ec*/
      goto LABEL_58; /*0x541ec*/
    }
  }
LABEL_67:
  v47 = 0; /*0x54242*/
  v48 = 0; /*0x54249*/
  v49 = 0; /*0x5424d*/
  v33 = Src; /*0x54251*/
  if ( v23 > 0xF ) /*0x54259*/
    v33 = v22; /*0x54259*/
  v34 = v45; /*0x5425d*/
  v35 = 0x7FFFFFFFFFFFFFFFLL; /*0x54261*/
  if ( v45 > 0x7FFFFFFFFFFFFFFFLL ) /*0x5426e*/
    sub_8D90(v19, v18, v20); /*0x543e1*/
  if ( v45 > 0xF ) /*0x54278*/
  {
    if ( (v45 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x54299*/
    {
      v35 = v45 | 0xF; /*0x5429b*/
      if ( (v45 | 0xF) < 0x16 ) /*0x542a6*/
        v35 = 22; /*0x542a6*/
    }
    *(_QWORD *)&v47 = sub_3C460(v35 + 1); /*0x542b3*/
    v48 = v34; /*0x542b7*/
    v49 = v35; /*0x542bb*/
    memcpy((void *)v47, v33, v34 + 1); /*0x542c9*/
  }
  else
  {
    v48 = v45; /*0x5427a*/
    v49 = 15; /*0x5427e*/
    v47 = *(_OWORD *)v33; /*0x54289*/
  }
  CCTextInputNode_setString((_QWORD *)a1, &v47); /*0x542d5*/
  v36 = *(_QWORD *)(a1 + 600); /*0x542da*/
  if ( *(int *)(v36 + 760) >= 0 ) /*0x542e8*/
  {
    v37 = v9 + v51; /*0x542ed*/
    v38 = Src; /*0x542f0*/
    if ( v46 > 0xF ) /*0x542f9*/
      v38 = (void **)Src[0]; /*0x542f9*/
    if ( v37 > (int)v45 ) /*0x54301*/
      v37 = v45; /*0x54301*/
    v39 = 0; /*0x54305*/
    if ( v37 > 0 ) /*0x5430d*/
    {
      for ( i = 0; i < v37; ++i ) /*0x5430f*/
      {
        v41 = v39 + 1; /*0x54319*/
        if ( (*((_BYTE *)v38 + i) & 0xC0) == 0x80 ) /*0x5431d*/
          v41 = v39; /*0x5431f*/
        v39 = v41; /*0x54323*/
      }
    }
    *(_DWORD *)(v36 + 760) = v39; /*0x5432e*/
    CustomSFXWidget_init(a1, *(unsigned int *)(*(_QWORD *)(a1 + 600) + 760LL)); /*0x54345*/
  }
  if ( v46 > 0xF ) /*0x54353*/
  {
    v42 = Src[0]; /*0x54358*/
    if ( v46 + 1 >= 0x1000 ) /*0x54366*/
    {
      v42 = (void *)*((_QWORD *)Src[0] - 1); /*0x5436c*/
      if ( (unsigned __int64)((char *)Src[0] - (char *)v42 - 8) > 0x1F ) /*0x5437b*/
        invoke_watson(0, 0, 0, 0, 0); /*0x5438c*/
    }
    j_j_free(v42); /*0x54393*/
  }
  v45 = 0; /*0x54398*/
  v46 = 15; /*0x5439c*/
  LOBYTE(Src[0]) = 0; /*0x543a4*/
LABEL_93:
  sub_3C310(v50); /*0x543a8*/
  return sub_3C310(a2); /*0x543ba*/
}

// [2/11] Address: 0x649b0
// Method: GJAccountManager::syncAccount
// Hidden C++ exception states: #wind=4
__int64 __fastcall GJAccountManager_syncAccount(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  _QWORD *v5; // r8
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // rsi
  unsigned __int64 v9; // rax
  char *v10; // rbx
  __int64 v11; // rax
  void **v12; // rdx
  int v13; // eax
  __int64 v14; // rbx
  void *v15; // rcx
  void *v17; // rcx
  __int64 v18; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v19[56]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v20; // [rsp+120h] [rbp+20h]
  void *Block[2]; // [rsp+128h] [rbp+28h] BYREF
  __m128i si128; // [rsp+138h] [rbp+38h]
  _BYTE v23[32]; // [rsp+148h] [rbp+48h] BYREF

  v20 = a2; /*0x649de*/
  v4 = cocos2d::CCFileUtils::sharedFileUtils(); /*0x649e2*/
  v5 = a2; /*0x649e8*/
  if ( a2[3] > 0xFu ) /*0x649f0*/
    v5 = (_QWORD *)*a2; /*0x649f2*/
  v6 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD *, _QWORD))(*(_QWORD *)v4 + 40LL))(v4, v23, v5, 0); /*0x64a06*/
  if ( v6[3] > 0xFu ) /*0x64a0f*/
    v6 = (_QWORD *)*v6; /*0x64a11*/
  *(_OWORD *)Block = 0; /*0x64a17*/
  si128 = 0; /*0x64a1e*/
  v7 = -1; /*0x64a23*/
  do /*0x64a33*/
    ++v7; /*0x64a30*/
  while ( *((_BYTE *)v6 + v7) ); /*0x64a33*/
  sub_3C230(Block); /*0x64a41*/
  sub_3C310(v23); /*0x64a4b*/
  memset(&v19[1], 0, 0xDCu); /*0x64a5d*/
  v19[0] = 224; /*0x64a62*/
  v8 = a2; /*0x64a6a*/
  if ( a2[3] > 0xFu ) /*0x64a72*/
    v8 = (_QWORD *)*a2; /*0x64a74*/
  v9 = a2[2]; /*0x64a77*/
  if ( v9 < 4 /*0x64ab0*/
    || (v10 = (char *)v8 + v9, v11 = sub_672690(v8, (char *)v8 + v9, ".ogg", 4), (char *)v11 == v10)
    || (v19[28] = 10, v11 - (_QWORD)v8 == -1) )
  {
    v19[28] = 9; /*0x64ab2*/
  }
  v12 = Block; /*0x64ab9*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x64ac2*/
    v12 = (void **)Block[0]; /*0x64ac2*/
  v13 = FMOD::System::createStream(*(_QWORD *)(a1 + 560), v12, 134299658, v19, &v18); /*0x64ae3*/
  *(_DWORD *)(a1 + 608) = v13; /*0x64ae9*/
  if ( !v13 ) /*0x64af2*/
  {
    FMOD::Sound::setLoopCount(v18, 0); /*0x64afb*/
    v14 = v18; /*0x64b01*/
    if ( si128.m128i_i64[1] <= 0xFuLL ) /*0x64b0e*/
    {
LABEL_20:
      si128 = _mm_load_si128((const __m128i *)&Size); /*0x64b3d*/
      LOBYTE(Block[0]) = 0; /*0x64b4a*/
      sub_3C310(a2); /*0x64b51*/
      return v14; /*0x64b59*/
    }
    v15 = Block[0]; /*0x64b13*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) < 0x1000 /*0x64b36*/
      || (v15 = (void *)*((_QWORD *)Block[0] - 1), (unsigned __int64)((char *)Block[0] - (char *)v15 - 8) <= 0x1F) )
    {
      j_j_free(v15); /*0x64b38*/
      goto LABEL_20; /*0x64b38*/
    }
LABEL_24:
    invoke_watson(0, 0, 0, 0, 0); /*0x64b8d*/
  }
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x64b63*/
  {
    v17 = Block[0]; /*0x64b68*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x64b76*/
    {
      v17 = (void *)*((_QWORD *)Block[0] - 1); /*0x64b7c*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v17 - 8) > 0x1F ) /*0x64b8b*/
        goto LABEL_24; /*0x64b8b*/
    }
    j_j_free(v17); /*0x64ba7*/
  }
  si128 = _mm_load_si128((const __m128i *)&Size); /*0x64bb4*/
  LOBYTE(Block[0]) = 0; /*0x64bb9*/
  sub_3C310(a2); /*0x64bc0*/
  return 0; /*0x64bc7*/
}

// [3/11] Address: 0x301790
// Method: GJAccountManager::~GJAccountManager
// Hidden C++ exception states: #wind=1
cocos2d::CCNode *__fastcall GJAccountManager__dtor_GJAccountManager(cocos2d::CCNode *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *(_QWORD *)Block = &GJAccountManager::`vftable'; /*0x3017a6*/
  qword_905FE8 = 0; /*0x3017a9*/
  v4 = (cocos2d::CCObject *)*((_QWORD *)Block + 40); /*0x3017b4*/
  if ( v4 ) /*0x3017be*/
    cocos2d::CCObject::release(v4); /*0x3017c0*/
  sub_3C310((char *)Block + 496); /*0x3017cd*/
  sub_3C310((char *)Block + 464); /*0x3017d9*/
  sub_3C310((char *)Block + 376); /*0x3017e5*/
  sub_3C310((char *)Block + 328); /*0x3017f1*/
  cocos2d::CCNode::~CCNode(Block); /*0x3017f9*/
  if ( (a2 & 1) != 0 ) /*0x301804*/
    j_j_free(Block); /*0x30180e*/
  return Block; /*0x301816*/
}

// [4/11] Address: 0x301830
// Method: GJAccountManager::sharedState
// Hidden C++ exception states: #wind=1
__int64 GJAccountManager_sharedState()
{
  __int64 result; // rax
  void (__fastcall *v1)(char *); // rdx
  char *v2; // [rsp+30h] [rbp+8h]

  result = qword_905FE8; /*0x301836*/
  if ( !qword_905FE8 ) /*0x301840*/
  {
    v2 = (char *)operator new(0x210u); /*0x301853*/
    cocos2d::CCNode::CCNode((cocos2d::CCNode *)v2); /*0x30185b*/
    *(_QWORD *)v2 = &GJAccountManager::`vftable'; /*0x301868*/
    *((_QWORD *)v2 + 40) = 0; /*0x30186d*/
    *(_OWORD *)(v2 + 328) = 0; /*0x301877*/
    *((_QWORD *)v2 + 43) = 0; /*0x30187e*/
    *((_QWORD *)v2 + 44) = 15; /*0x301885*/
    v2[328] = 0; /*0x301890*/
    *((_QWORD *)v2 + 45) = 0; /*0x301896*/
    *((_DWORD *)v2 + 92) = 0; /*0x30189d*/
    *(_OWORD *)(v2 + 376) = 0; /*0x3018a3*/
    *((_QWORD *)v2 + 49) = 0; /*0x3018aa*/
    *((_QWORD *)v2 + 50) = 15; /*0x3018b1*/
    v2[376] = 0; /*0x3018bc*/
    *((_QWORD *)v2 + 51) = 0; /*0x3018c2*/
    *((_QWORD *)v2 + 52) = 0; /*0x3018c9*/
    *((_QWORD *)v2 + 53) = 0; /*0x3018d0*/
    *((_QWORD *)v2 + 54) = 0; /*0x3018d7*/
    *((_QWORD *)v2 + 55) = 0; /*0x3018de*/
    *((_QWORD *)v2 + 56) = 0; /*0x3018e5*/
    *((_QWORD *)v2 + 57) = 0; /*0x3018ec*/
    *((_OWORD *)v2 + 29) = 0; /*0x3018f3*/
    *((_QWORD *)v2 + 60) = 0; /*0x3018fa*/
    *((_QWORD *)v2 + 61) = 15; /*0x301901*/
    v2[464] = 0; /*0x30190c*/
    *((_OWORD *)v2 + 31) = 0; /*0x301912*/
    *((_QWORD *)v2 + 64) = 0; /*0x301919*/
    *((_QWORD *)v2 + 65) = 15; /*0x301920*/
    v2[496] = 0; /*0x30192b*/
    qword_905FE8 = (__int64)v2; /*0x301931*/
    v1 = *(void (__fastcall **)(char *))(*(_QWORD *)v2 + 72LL); /*0x30193b*/
    if ( (char *)v1 == (char *)GJActionManager_init ) /*0x30194c*/
      GJActionManager_init(v2); /*0x30194e*/
    else
      v1(v2); /*0x301960*/
    return qword_905FE8; /*0x301953*/
  }
  return result; /*0x30195a*/
}

// [5/11] Address: 0x301970
// Method: GJAccountManager::ProcessHttpRequest
// Hidden C++ exception states: #wind=4
double __fastcall GJAccountManager_ProcessHttpRequest(
        cocos2d::CCObject *a1,
        __int64 a2,
        const char *a3,
        __int64 a4,
        int a5)
{
  cocos2d::extension::CCHttpRequest *v9; // rbx
  const char *v10; // rdx
  const char *v11; // rax
  const char *v12; // rdx
  __int64 v13; // r8
  const char *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  cocos2d::extension::CCHttpClient *Instance; // rax

  v9 = (cocos2d::extension::CCHttpRequest *)operator new(0xE0u); /*0x3019b0*/
  cocos2d::extension::CCHttpRequest::CCHttpRequest(v9); /*0x3019bb*/
  *(_QWORD *)v9 = &cocos2d::extension::CCHttpRequest::`vftable'; /*0x3019c8*/
  v10 = (const char *)a2; /*0x3019cb*/
  if ( *(_QWORD *)(a2 + 24) > 0xFu ) /*0x3019d3*/
    v10 = *(const char **)a2; /*0x3019d5*/
  cocos2d::extension::CCHttpRequest::setUrl(v9, v10); /*0x3019db*/
  *((_DWORD *)v9 + 14) = 1; /*0x3019e1*/
  *((_QWORD *)v9 + 19) = a1; /*0x3019e8*/
  *((_QWORD *)v9 + 20) = sub_301AC0; /*0x3019f6*/
  if ( a1 ) /*0x301a00*/
    cocos2d::CCObject::retain(a1); /*0x301a05*/
  if ( (unsigned int)(a5 - 22) <= 1 ) /*0x301a18*/
    *((_DWORD *)v9 + 53) = 600; /*0x301a1a*/
  v11 = a3; /*0x301a24*/
  if ( *((_QWORD *)a3 + 3) <= 0xFu ) /*0x301a2c*/
  {
    v12 = a3; /*0x301a36*/
  }
  else
  {
    v11 = *(const char **)a3; /*0x301a2e*/
    v12 = *(const char **)a3; /*0x301a31*/
  }
  v13 = -1; /*0x301a39*/
  do /*0x301a43*/
    ++v13; /*0x301a40*/
  while ( v11[v13] ); /*0x301a43*/
  cocos2d::extension::CCHttpRequest::setRequestData(v9, v12, v13); /*0x301a4d*/
  v14 = (const char *)a4; /*0x301a53*/
  if ( *(_QWORD *)(a4 + 24) > 0xFu ) /*0x301a5b*/
    v14 = *(const char **)a4; /*0x301a5d*/
  cocos2d::extension::CCHttpRequest::setTag(v9, v14); /*0x301a63*/
  *((_DWORD *)v9 + 50) = a5; /*0x301a69*/
  Instance = (cocos2d::extension::CCHttpClient *)cocos2d::extension::CCHttpClient::getInstance(v16, v15, v17, v18); /*0x301a6f*/
  cocos2d::extension::CCHttpClient::send(Instance, v9); /*0x301a7b*/
  cocos2d::CCObject::release(v9); /*0x301a84*/
  sub_3C310(a2); /*0x301a8e*/
  sub_3C310(a3); /*0x301a97*/
  return sub_3C310(a4); /*0x301aa5*/
}

// [6/11] Address: 0x301ed0
// Method: GJAccountManager::addDLToActive
// Hidden C++ exception states: #wind=1
void __fastcall GJAccountManager_addDLToActive(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // r8
  void *v6; // rcx
  void *Block[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v8; // [rsp+40h] [rbp-28h]

  v4 = cocos2d::CCNode::create(a1, a2); /*0x301efa*/
  *(_OWORD *)Block = 0; /*0x301f00*/
  v8 = 0; /*0x301f08*/
  v5 = -1; /*0x301f0e*/
  do /*0x301f18*/
    ++v5; /*0x301f15*/
  while ( *(_BYTE *)(a2 + v5) ); /*0x301f18*/
  sub_3C230(Block); /*0x301f27*/
  cocos2d::CCDictionary::setObject(*(_QWORD *)(a1 + 320), v4, Block); /*0x301f3c*/
  if ( *((_QWORD *)&v8 + 1) > 0xFu ) /*0x301f4c*/
  {
    v6 = Block[0]; /*0x301f51*/
    if ( (unsigned __int64)(*((_QWORD *)&v8 + 1) + 1LL) >= 0x1000 ) /*0x301f60*/
    {
      v6 = (void *)*((_QWORD *)Block[0] - 1); /*0x301f66*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v6 - 8) > 0x1F ) /*0x301f75*/
        invoke_watson(0, 0, 0, 0, 0); /*0x301f8a*/
    }
    j_j_free(v6); /*0x301f91*/
  }
}

// [7/11] Address: 0x302850
// Method: GJAccountManager::onRegisterAccountCompleted
// Hidden C++ exception states: #wind=3
double __fastcall GJAccountManager_onRegisterAccountCompleted(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  void *v6; // rcx
  const void *v7; // rcx
  unsigned __int64 v8; // rsi
  size_t v9; // r8
  _QWORD *v10; // rbx
  _QWORD *v11; // rsi
  const char *v12; // rcx
  __int64 v13; // rbx
  unsigned int v14; // eax
  void (__fastcall ***v15)(_QWORD); // rcx
  void *Block[2]; // [rsp+40h] [rbp-48h] BYREF
  __m128i si128; // [rsp+50h] [rbp-38h]

  HIWORD(Block[1]) = 0; /*0x302882*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_830F80); /*0x30288f*/
  qmemcpy(Block, "reg_accoun", 10); /*0x30289d*/
  *(_DWORD *)((char *)&Block[1] + 2) = (unsigned __int8)aRegAccount[10]; /*0x3028b6*/
  cocos2d::CCDictionary::removeObjectForKey(*(_QWORD *)(a1 + 320), Block); /*0x3028cb*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x3028db*/
  {
    v6 = Block[0]; /*0x3028e0*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x3028ef*/
    {
      v6 = (void *)*((_QWORD *)Block[0] - 1); /*0x3028f5*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v6 - 8) > 0x1F ) /*0x302904*/
        invoke_watson(0, 0, 0, 0, 0); /*0x302919*/
    }
    j_j_free(v6); /*0x302920*/
  }
  *(_OWORD *)Block = 0; /*0x302928*/
  si128.m128i_i64[0] = 1; /*0x302932*/
  si128.m128i_i64[1] = 15; /*0x302937*/
  LOWORD(Block[0]) = 49; /*0x302940*/
  v7 = a2; /*0x302947*/
  if ( a2[3] > 0xF ) /*0x30294f*/
    v7 = (const void *)*a2; /*0x302951*/
  v8 = a2[2]; /*0x302954*/
  v9 = v8; /*0x302958*/
  if ( v8 > 1 ) /*0x30295e*/
    v9 = 1; /*0x30295e*/
  if ( !memcmp(v7, Block, v9) && v8 == 1 ) /*0x302974*/
  {
    v15 = *(void (__fastcall ****)(_QWORD))(a1 + 408); /*0x3029a7*/
    if ( v15 ) /*0x3029b1*/
      (**v15)(v15); /*0x3029b6*/
  }
  else
  {
    v10 = *(_QWORD **)(a1 + 408); /*0x302978*/
    v11 = v10; /*0x30297f*/
    if ( v10 ) /*0x302985*/
    {
      v12 = (const char *)a2; /*0x302987*/
      if ( a2[3] > 0xF ) /*0x30298f*/
        v12 = (const char *)*a2; /*0x302991*/
      v13 = *v10; /*0x302994*/
      v14 = atoi(v12); /*0x302997*/
      (*(void (__fastcall **)(_QWORD *, _QWORD))(v13 + 8))(v11, v14); /*0x3029a2*/
    }
  }
  sub_3C310(a2); /*0x3029bc*/
  return sub_3C310(a3); /*0x3029ca*/
}

// [8/11] Address: 0x302ca0
// Method: GJAccountManager::loginAccount
// Hidden C++ exception states: #wind=8
char __fastcall GJAccountManager_loginAccount(cocos2d::CCObject *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  void *v7; // r8
  __int64 v9; // rdx
  const char *v10; // r9
  const char *v11; // r8
  const char *v12; // rdx
  cocos2d::CCString *v13; // rax
  const char *CString; // rax
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rdx
  cocos2d::CCString *v24; // rax
  char *v25; // rax
  size_t v26; // r8
  cocos2d::CCString *v27; // rax
  char *v28; // rax
  size_t v29; // r8
  void **v30; // rdx
  void *v31; // rcx
  char *v32; // [rsp+40h] [rbp-C0h] BYREF
  char v33[14]; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v34; // [rsp+56h] [rbp-AAh]
  __int64 v35; // [rsp+58h] [rbp-A8h]
  __int64 v36; // [rsp+60h] [rbp-A0h]
  __int128 v37; // [rsp+68h] [rbp-98h] BYREF
  __int64 v38; // [rsp+78h] [rbp-88h]
  __int64 v39; // [rsp+80h] [rbp-80h]
  __int128 *v40; // [rsp+88h] [rbp-78h]
  __int64 v41; // [rsp+98h] [rbp-68h]
  __int64 v42; // [rsp+A0h] [rbp-60h]
  void *Block[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v44; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v45; // [rsp+C0h] [rbp-40h]
  void *Src[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v47; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v48; // [rsp+E0h] [rbp-20h]
  _QWORD v49[4]; // [rsp+E8h] [rbp-18h] BYREF

  v41 = a2; /*0x302ccf*/
  v42 = a3; /*0x302cd3*/
  *(_OWORD *)Block = 0; /*0x302cdd*/
  v44 = 0; /*0x302ce1*/
  v45 = 0; /*0x302ce5*/
  sub_3C230(Block); /*0x302cfa*/
  v6 = cocos2d::CCDictionary::objectForKey(*((_QWORD *)a1 + 40), Block); /*0x302d11*/
  if ( v45 > 0xF ) /*0x302d1c*/
  {
    v7 = Block[0]; /*0x302d21*/
    if ( v45 + 1 >= 0x1000 ) /*0x302d2f*/
    {
      v7 = (void *)*((_QWORD *)Block[0] - 1); /*0x302d35*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v7 - 8) > 0x1F ) /*0x302d44*/
        invoke_watson(0, 0, 0, 0, 0); /*0x302d55*/
    }
    j_j_free(v7); /*0x302d5f*/
  }
  if ( v6 ) /*0x302d67*/
  {
    sub_3C310(a2); /*0x302d6c*/
    sub_3C310(a3); /*0x302d75*/
    return 0; /*0x302d7a*/
  }
  else
  {
    GJAccountManager_addDLToActive((__int64)a1, (__int64)"login_account"); /*0x302d8b*/
    v9 = qword_905FD0; /*0x302d90*/
    if ( !qword_905FD0 ) /*0x302d9a*/
    {
      v32 = (char *)operator new(0x6E8u); /*0x302da6*/
      qword_905FD0 = sub_2723A0(v32); /*0x302db4*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x302dc5*/
      v9 = qword_905FD0; /*0x302dc7*/
    }
    sub_3E4F0(v49, v9 + 624); /*0x302dd9*/
    v10 = (const char *)a3; /*0x302ddf*/
    if ( *(_QWORD *)(a3 + 24) > 0xFu ) /*0x302de7*/
      v10 = *(const char **)a3; /*0x302de9*/
    v11 = (const char *)a2; /*0x302dec*/
    if ( *(_QWORD *)(a2 + 24) > 0xFu ) /*0x302df4*/
      v11 = *(const char **)a2; /*0x302df6*/
    v12 = (const char *)v49; /*0x302df9*/
    if ( v49[3] > 0xFu ) /*0x302e02*/
      v12 = (const char *)v49[0]; /*0x302e02*/
    v13 = cocos2d::CCString::createWithFormat("udid=%s&userName=%s&gjp2=%s", v12, v11, v10); /*0x302e0e*/
    CString = cocos2d::CCString::getCString(v13); /*0x302e17*/
    *(_OWORD *)Src = 0; /*0x302e20*/
    v47 = 0; /*0x302e24*/
    v48 = 0; /*0x302e28*/
    v15 = -1; /*0x302e2c*/
    v16 = -1; /*0x302e33*/
    do /*0x302e39*/
      ++v16; /*0x302e36*/
    while ( CString[v16] ); /*0x302e39*/
    sub_3C230(Src); /*0x302e47*/
    sub_43D80(Src, "&sID=", 5u); /*0x302e5e*/
    sub_8A020(v18, v17, v19, v20); /*0x302e63*/
    if ( *(_QWORD *)SteamInternal_ContextInit(off_8F8060) /*0x302ea1*/
      && *(_QWORD *)SteamInternal_ContextInit(off_8F8048)
      && (v21 = (_QWORD *)SteamInternal_ContextInit(off_8F8048),
          (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v21 + 8LL))(*v21)) )
    {
      v22 = (_QWORD *)SteamInternal_ContextInit(off_8F8048); /*0x302eaf*/
      v23 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, char **))(*(_QWORD *)*v22 + 16LL))(*v22, &v32); /*0x302ec3*/
    }
    else
    {
      v23 = 0; /*0x302ec8*/
    }
    v24 = cocos2d::CCString::createWithFormat("%lld", v23); /*0x302ed2*/
    v25 = (char *)cocos2d::CCString::getCString(v24); /*0x302edb*/
    v26 = -1; /*0x302ee1*/
    do /*0x302ee7*/
      ++v26; /*0x302ee4*/
    while ( v25[v26] ); /*0x302ee7*/
    sub_43D80(Src, v25, v26); /*0x302ef5*/
    sub_43D80(Src, "&secret=", 8u); /*0x302f0b*/
    v27 = cocos2d::CCString::createWithFormat("%c%s%s%c%c%s", 87, "mfv", "3899", 103, 99, "9"); /*0x302f46*/
    v28 = (char *)cocos2d::CCString::getCString(v27); /*0x302f4f*/
    v29 = -1; /*0x302f55*/
    do /*0x302f63*/
      ++v29; /*0x302f60*/
    while ( v28[v29] ); /*0x302f63*/
    sub_43D80(Src, v28, v29); /*0x302f71*/
    v30 = Src; /*0x302f76*/
    if ( v48 > 0xF ) /*0x302f7f*/
      v30 = (void **)Src[0]; /*0x302f7f*/
    v32 = v33; /*0x302f89*/
    v40 = &v37; /*0x302f93*/
    v35 = 12; /*0x302f9f*/
    v36 = 15; /*0x302fa8*/
    strcpy(v33, "LoginAccount"); /*0x302fb9*/
    v33[13] = 0; /*0x302fc5*/
    v34 = 0; /*0x302fc5*/
    v37 = 0; /*0x302fd1*/
    v38 = 0; /*0x302fd6*/
    v39 = 0; /*0x302fdb*/
    do /*0x302fe3*/
      ++v15; /*0x302fe0*/
    while ( *((_BYTE *)v30 + v15) ); /*0x302fe3*/
    sub_3C230(&v37); /*0x302ff1*/
    *(_OWORD *)Block = 0; /*0x302ffa*/
    v44 = 0; /*0x302ffe*/
    v45 = 0; /*0x303002*/
    Block[0] = (void *)sub_3C460(64); /*0x303013*/
    v44 = 62; /*0x303017*/
    v45 = 63; /*0x30301f*/
    strcpy((char *)Block[0], "https://www.boomlings.com/database/accounts/loginGJAccount.php"); /*0x30302e*/
    GJAccountManager_ProcessHttpRequest(a1, (__int64)Block, (const char *)&v37, (__int64)v33, 26); /*0x303085*/
    if ( v48 > 0xF ) /*0x303093*/
    {
      v31 = Src[0]; /*0x303098*/
      if ( v48 + 1 >= 0x1000 ) /*0x3030a6*/
      {
        v31 = (void *)*((_QWORD *)Src[0] - 1); /*0x3030ac*/
        if ( (unsigned __int64)((char *)Src[0] - (char *)v31 - 8) > 0x1F ) /*0x3030bb*/
          invoke_watson(0, 0, 0, 0, 0); /*0x3030cc*/
      }
      j_j_free(v31); /*0x3030d3*/
    }
    sub_3C310(v49); /*0x3030dd*/
    sub_3C310(a2); /*0x3030e6*/
    sub_3C310(a3); /*0x3030ef*/
    return 1; /*0x3030f4*/
  }
}

// [9/11] Address: 0x303120
// Method: GJAccountManager::onLoginAccountCompleted
// Hidden C++ exception states: #wind=3
double __fastcall GJAccountManager_onLoginAccountCompleted(__int64 a1, size_t *a2, __int64 a3)
{
  void *v5; // rcx
  cocos2d::CCString *v6; // rax
  const char *CString; // rax
  __int64 v8; // r8
  void **v9; // rdx
  char *v10; // r15
  const void *v11; // rcx
  size_t v12; // r12
  size_t v13; // r8
  size_t v14; // r13
  int v15; // r14d
  char *v16; // rax
  __int64 v17; // rcx
  cocos2d::CCString *v18; // rax
  const char *v19; // rax
  __int64 v20; // r8
  void **v21; // rdx
  char *v22; // r15
  const void *v23; // rcx
  size_t v24; // r12
  size_t v25; // r8
  size_t v26; // r13
  int v27; // r14d
  char *v28; // rax
  __int64 v29; // rcx
  const void *v30; // rcx
  unsigned __int64 v31; // rsi
  size_t v32; // r8
  __int64 v33; // r8
  cocos2d::CCArray *v34; // r14
  cocos2d::CCString *v35; // rax
  int v36; // esi
  cocos2d::CCString *v37; // rax
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  void (__fastcall ***v41)(_QWORD, _QWORD, __int64); // rcx
  void *Block[2]; // [rsp+48h] [rbp-28h] BYREF
  size_t Size[2]; // [rsp+58h] [rbp-18h]

  *(__m128i *)Size = _mm_load_si128((const __m128i *)&xmmword_830FA0); /*0x303169*/
  qmemcpy(Block, "login_accoun", 12); /*0x303176*/
  HIDWORD(Block[1]) = (unsigned __int8)aLoginAccount[12]; /*0x30318b*/
  cocos2d::CCDictionary::removeObjectForKey(*(_QWORD *)(a1 + 320), Block); /*0x30319d*/
  if ( Size[1] > 0xF ) /*0x3031ac*/
  {
    v5 = Block[0]; /*0x3031b1*/
    if ( Size[1] + 1 >= 0x1000 ) /*0x3031bf*/
    {
      v5 = (void *)*((_QWORD *)Block[0] - 1); /*0x3031c5*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v5 - 8) > 0x1F ) /*0x3031d4*/
        invoke_watson(0, 0, 0, 0, 0); /*0x3031e7*/
    }
    j_j_free(v5); /*0x3031ee*/
  }
  v6 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, 4294967284LL); /*0x3031ff*/
  CString = cocos2d::CCString::getCString(v6); /*0x303208*/
  *(_OWORD *)Block = 0; /*0x303211*/
  Size[0] = 0; /*0x303217*/
  Size[1] = 0; /*0x30321b*/
  v8 = -1; /*0x30321f*/
  do /*0x303229*/
    ++v8; /*0x303226*/
  while ( CString[v8] ); /*0x303229*/
  sub_3C230(Block); /*0x303236*/
  v9 = Block; /*0x30323b*/
  v10 = (char *)Block[0]; /*0x30323f*/
  if ( Size[1] > 0xF ) /*0x303248*/
    v9 = (void **)Block[0]; /*0x303248*/
  v11 = a2; /*0x30324c*/
  if ( a2[3] > 0xF ) /*0x303254*/
    v11 = (const void *)*a2; /*0x303256*/
  v12 = a2[2]; /*0x303259*/
  v13 = v12; /*0x30325d*/
  v14 = Size[0]; /*0x303260*/
  if ( Size[0] < v12 ) /*0x303267*/
    v13 = Size[0]; /*0x303267*/
  v15 = memcmp(v11, v9, v13); /*0x303270*/
  if ( !v15 ) /*0x303275*/
  {
    if ( v12 >= v14 ) /*0x30327a*/
      v15 = v12 > v14; /*0x303287*/
    else
      v15 = -1; /*0x30327c*/
  }
  if ( Size[1] > 0xF ) /*0x303293*/
  {
    v16 = v10; /*0x303299*/
    if ( Size[1] + 1 >= 0x1000 ) /*0x3032a3*/
    {
      v10 = (char *)*((_QWORD *)v10 - 1); /*0x3032a9*/
      if ( (unsigned __int64)(v16 - v10 - 8) > 0x1F ) /*0x3032b8*/
LABEL_40:
        invoke_watson(0, 0, 0, 0, 0); /*0x3033b4*/
    }
    j_j_free(v10); /*0x3032c1*/
  }
  if ( !v15 ) /*0x3032c9*/
  {
    v17 = *(_QWORD *)(a1 + 416); /*0x3032cb*/
    if ( v17 ) /*0x3032d5*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 8LL))(v17, 4294967284LL); /*0x3032e3*/
    goto LABEL_61; /*0x3032e6*/
  }
  v18 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, 4294967283LL); /*0x3032f7*/
  v19 = cocos2d::CCString::getCString(v18); /*0x303300*/
  *(_OWORD *)Block = 0; /*0x303309*/
  Size[0] = 0; /*0x30330d*/
  Size[1] = 0; /*0x303311*/
  v20 = -1; /*0x303315*/
  do /*0x303323*/
    ++v20; /*0x303320*/
  while ( v19[v20] ); /*0x303323*/
  sub_3C230(Block); /*0x303330*/
  v21 = Block; /*0x303335*/
  v22 = (char *)Block[0]; /*0x303339*/
  if ( Size[1] > 0xF ) /*0x303342*/
    v21 = (void **)Block[0]; /*0x303342*/
  v23 = a2; /*0x303346*/
  if ( a2[3] > 0xF ) /*0x30334e*/
    v23 = (const void *)*a2; /*0x303350*/
  v24 = a2[2]; /*0x303353*/
  v25 = v24; /*0x303357*/
  v26 = Size[0]; /*0x30335a*/
  if ( Size[0] < v24 ) /*0x303361*/
    v25 = Size[0]; /*0x303361*/
  v27 = memcmp(v23, v21, v25); /*0x30336a*/
  if ( !v27 ) /*0x30336f*/
  {
    if ( v24 >= v26 ) /*0x303374*/
      v27 = v24 > v26; /*0x303381*/
    else
      v27 = -1; /*0x303376*/
  }
  if ( Size[1] > 0xF ) /*0x30338d*/
  {
    v28 = v22; /*0x303393*/
    if ( Size[1] + 1 >= 0x1000 ) /*0x30339d*/
    {
      v22 = (char *)*((_QWORD *)v22 - 1); /*0x3033a3*/
      if ( (unsigned __int64)(v28 - v22 - 8) > 0x1F ) /*0x3033b2*/
        goto LABEL_40; /*0x3033b2*/
    }
    j_j_free(v22); /*0x3033cd*/
  }
  if ( v27 ) /*0x3033d5*/
  {
    *(_OWORD *)Block = 0; /*0x3033fa*/
    Size[0] = 2; /*0x303403*/
    Size[1] = 15; /*0x303407*/
    strcpy((char *)Block, "-1"); /*0x303414*/
    v30 = a2; /*0x30341c*/
    if ( a2[3] > 0xF ) /*0x303424*/
      v30 = (const void *)*a2; /*0x303426*/
    v31 = a2[2]; /*0x303429*/
    v32 = v31; /*0x30342d*/
    if ( v31 > 2 ) /*0x303433*/
      v32 = 2; /*0x303433*/
    if ( !memcmp(v30, Block, v32) && v31 == 2 /*0x30349c*/
      || (v34 = (cocos2d::CCArray *)sub_D09B0(a2, &unk_709CE8), cocos2d::CCArray::count(v34) < 2)
      || (v35 = cocos2d::CCArray::stringAtIndex(v34, 0),
          v36 = cocos2d::CCString::intValue(v35),
          v37 = cocos2d::CCArray::stringAtIndex(v34, 1u),
          v33 = (unsigned int)cocos2d::CCString::intValue(v37),
          v36 <= 0) )
    {
      v38 = *(_QWORD *)(a1 + 416); /*0x30349e*/
      if ( v38 ) /*0x3034a8*/
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v38 + 8LL))(v38, 0xFFFFFFFFLL, v33); /*0x3034b2*/
    }
    else
    {
      v39 = *(_DWORD *)(a1 + 360); /*0x3034b7*/
      if ( !v39 || v39 == v36 ) /*0x3034c3*/
      {
        v41 = *(void (__fastcall ****)(_QWORD, _QWORD, __int64))(a1 + 416); /*0x3034de*/
        if ( v41 ) /*0x3034e8*/
          (**v41)(v41, (unsigned int)v36, v33); /*0x3034ef*/
      }
      else
      {
        v40 = *(_QWORD *)(a1 + 416); /*0x3034c5*/
        if ( v40 ) /*0x3034cf*/
          (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v40 + 8LL))(v40, 4294967286LL, v33); /*0x3034d9*/
      }
    }
  }
  else
  {
    v29 = *(_QWORD *)(a1 + 416); /*0x3033d7*/
    if ( v29 ) /*0x3033e1*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 8LL))(v29, 4294967283LL); /*0x3033ef*/
  }
LABEL_61:
  sub_3C310(a2); /*0x3034f2*/
  return sub_3C310(a3); /*0x303504*/
}

// [10/11] Address: 0x305c50
// Method: GJAccountManager::linkToAccount
// Hidden C++ exception states: #wind=9
double __fastcall GJAccountManager_linkToAccount(__int64 a1, size_t *a2, size_t *a3, int a4, int a5)
{
  size_t *v9; // rcx
  void *v10; // rdx
  void *v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rcx
  void *v14; // rcx
  void *v15; // rdx
  _DWORD *v16; // rbp
  float v17; // xmm0_4
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  void (__fastcall ***v21)(_QWORD); // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  void *v25; // [rsp+20h] [rbp-78h]
  void *v26; // [rsp+20h] [rbp-78h]
  void *v27; // [rsp+20h] [rbp-78h]
  void *v28; // [rsp+20h] [rbp-78h]
  void *v29; // [rsp+28h] [rbp-70h]
  char v30[32]; // [rsp+38h] [rbp-60h] BYREF
  size_t *v31; // [rsp+58h] [rbp-40h]
  size_t *v32; // [rsp+60h] [rbp-38h]

  v31 = a2; /*0x305c76*/
  v32 = a3; /*0x305c7b*/
  v9 = (size_t *)(a1 + 376); /*0x305c80*/
  if ( v9 != a3 ) /*0x305c8a*/
  {
    v10 = a3; /*0x305c8c*/
    if ( a3[3] > 0xF ) /*0x305c94*/
      v10 = (void *)*a3; /*0x305c96*/
    sub_3F5A0(v9, v10, a3[2]); /*0x305c9d*/
  }
  if ( (size_t *)(a1 + 328) != a2 ) /*0x305cac*/
  {
    v11 = a2; /*0x305cae*/
    if ( a2[3] > 0xF ) /*0x305cb6*/
      v11 = (void *)*a2; /*0x305cb8*/
    sub_3F5A0((void *)(a1 + 328), v11, a2[2]); /*0x305cc2*/
  }
  *(_DWORD *)(a1 + 360) = a4; /*0x305cc7*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x305cd8*/
  {
    v29 = operator new(0x690u); /*0x305ce4*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v29); /*0x305cf2*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x305d03*/
  }
  sub_21F040(); /*0x305d0c*/
  v12 = sub_3E4F0(v30, a1 + 328); /*0x305d28*/
  v13 = qword_905FD0; /*0x305d30*/
  if ( !qword_905FD0 ) /*0x305d3a*/
  {
    v25 = operator new(0x6E8u); /*0x305d46*/
    qword_905FD0 = sub_2723A0(v25); /*0x305d54*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x305d65*/
    v13 = qword_905FD0; /*0x305d67*/
  }
  v14 = (void *)(v13 + 656); /*0x305d6e*/
  if ( v14 != (void *)v12 ) /*0x305d78*/
  {
    v15 = (void *)v12; /*0x305d7a*/
    if ( *(_QWORD *)(v12 + 24) > 0xFu ) /*0x305d82*/
      v15 = *(void **)v12; /*0x305d84*/
    sub_3F5A0(v14, v15, *(_QWORD *)(v12 + 16)); /*0x305d8b*/
  }
  sub_3C310(v12); /*0x305d94*/
  v16 = (_DWORD *)qword_905FD0; /*0x305d99*/
  if ( !qword_905FD0 ) /*0x305da3*/
  {
    v26 = operator new(0x6E8u); /*0x305daf*/
    qword_905FD0 = sub_2723A0(v26); /*0x305dbd*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x305dce*/
    v16 = (_DWORD *)qword_905FD0; /*0x305dd0*/
  }
  v16[175] = a5; /*0x305dde*/
  v17 = (float)((float)rand() / 32767.0) * 1000.0; /*0x305df9*/
  v16[174] = (int)v17; /*0x305e05*/
  v16[173] = a5 + (int)v17; /*0x305e0d*/
  v18 = *(_QWORD *)&qword_905FB0; /*0x305e13*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x305e1d*/
  {
    v27 = operator new(0x690u); /*0x305e29*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v27); /*0x305e37*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x305e48*/
    v18 = *(_QWORD *)&qword_905FB0; /*0x305e4a*/
  }
  LevelLeaderboard_onUpdate(v18); /*0x305e51*/
  v21 = *(void (__fastcall ****)(_QWORD))(a1 + 424); /*0x305e56*/
  if ( v21 ) /*0x305e60*/
    (**v21)(v21); /*0x305e65*/
  v22 = qword_905FD0; /*0x305e67*/
  if ( !qword_905FD0 ) /*0x305e71*/
  {
    v28 = operator new(0x6E8u); /*0x305e7d*/
    qword_905FD0 = sub_2723A0(v28); /*0x305e8b*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x305e9c*/
    v22 = qword_905FD0; /*0x305e9e*/
  }
  v23 = *(_QWORD *)(v22 + 592); /*0x305ea5*/
  if ( v23 ) /*0x305eaf*/
    sub_46FC30(v23, v19, v20); /*0x305eb1*/
  sub_3C310(a2); /*0x305eba*/
  return sub_3C310(a3); /*0x305ec8*/
}

// [11/11] Address: 0x306770
// Method: GJAccountManager::getShaPassword
// Hidden C++ exception states: #wind=2
__int64 __fastcall GJAccountManager_getShaPassword(__int64 a1, __int64 a2)
{
  cocos2d::CCString *v4; // rax
  char *CString; // rax
  __int64 v6; // rbx
  size_t v7; // r8
  _QWORD *v8; // r8
  _QWORD *v9; // r9
  __int64 v10; // rdx
  int v12; // [rsp+20h] [rbp-A8h]
  int v13; // [rsp+28h] [rbp-A0h]
  _BYTE v14[24]; // [rsp+48h] [rbp-80h] BYREF
  __int64 v15; // [rsp+60h] [rbp-68h]
  _QWORD Src[3]; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int64 v17; // [rsp+80h] [rbp-48h]
  _BYTE v18[48]; // [rsp+88h] [rbp-40h] BYREF

  v15 = a2; /*0x30679f*/
  sub_3E4F0(Src, a2); /*0x3067a9*/
  v13 = 103; /*0x3067bb*/
  v12 = 120; /*0x3067c3*/
  v4 = cocos2d::CCString::createWithFormat("%c%s%s%c%c%s", 109, "I29", "fmAn", v12, v13, "Ts"); /*0x3067e5*/
  CString = (char *)cocos2d::CCString::getCString(v4); /*0x3067ee*/
  v6 = -1; /*0x3067f4*/
  v7 = -1; /*0x3067fb*/
  do /*0x306803*/
    ++v7; /*0x306800*/
  while ( CString[v7] ); /*0x306803*/
  sub_43D80(Src, CString, v7); /*0x306812*/
  v8 = Src; /*0x306817*/
  if ( v17 > 0xF ) /*0x306825*/
    v8 = (_QWORD *)Src[0]; /*0x306825*/
  v9 = Src; /*0x30682b*/
  if ( v17 > 0xF ) /*0x306830*/
    v9 = (_QWORD *)Src[0]; /*0x306830*/
  v10 = -1; /*0x306836*/
  do /*0x306843*/
    ++v10; /*0x306840*/
  while ( *((_BYTE *)v8 + v10) ); /*0x306843*/
  sub_7D030(v9, v10, v14); /*0x306852*/
  sub_7D300(v14, v18); /*0x306864*/
  *(_OWORD *)a1 = 0; /*0x30686c*/
  *(_QWORD *)(a1 + 16) = 0; /*0x30686f*/
  *(_QWORD *)(a1 + 24) = 0; /*0x306877*/
  do /*0x30688a*/
    ++v6; /*0x306887*/
  while ( v18[v6] ); /*0x30688a*/
  sub_3C230(a1); /*0x30689e*/
  sub_3C310(Src); /*0x3068a9*/
  sub_3C310(a2); /*0x3068b2*/
  return a1; /*0x3068ba*/
}
