#include <Geode/binding/MusicDownloadManager.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/27] Address: 0x6bc60
// Method: MusicDownloadManager::sharedState
// Hidden C++ exception states: #wind=2
__int64 MusicDownloadManager_sharedState()
{
  __int64 result; // rax
  _QWORD *v1; // rax
  cocos2d::CCNode *v2; // [rsp+30h] [rbp+8h]

  result = qword_9060A0; /*0x6bc6f*/
  if ( !qword_9060A0 ) /*0x6bc79*/
  {
    v2 = (cocos2d::CCNode *)operator new(0x188u); /*0x6bc8c*/
    cocos2d::CCNode::CCNode(v2); /*0x6bc94*/
    *(_QWORD *)v2 = &`anonymous namespace'::ServerPopupQueue::`vftable'; /*0x6bca2*/
    *((_QWORD *)v2 + 40) = &`anonymous namespace'::ServerPopupQueue::`vftable'; /*0x6bcac*/
    *((_QWORD *)v2 + 41) = 0; /*0x6bcbc*/
    *((_QWORD *)v2 + 42) = 0; /*0x6bcbf*/
    *((_QWORD *)v2 + 43) = 0; /*0x6bcc3*/
    *((_QWORD *)v2 + 44) = 0; /*0x6bcc7*/
    *((_QWORD *)v2 + 45) = 0; /*0x6bccb*/
    v1 = operator new(0x10u); /*0x6bcd4*/
    v1[1] = 0; /*0x6bcd9*/
    *((_QWORD *)v2 + 41) = v1; /*0x6bcdd*/
    *v1 = (char *)v2 + 328; /*0x6bce0*/
    *((_BYTE *)v2 + 368) = 0; /*0x6bce3*/
    *((_QWORD *)v2 + 47) = 0; /*0x6bcea*/
    *((_QWORD *)v2 + 48) = 0; /*0x6bcf1*/
    qword_9060A0 = (__int64)v2; /*0x6bcf8*/
    (*(void (__fastcall **)(cocos2d::CCNode *))(*(_QWORD *)v2 + 72LL))(v2); /*0x6bd05*/
    cocos2d::CCObject::retain((cocos2d::CCObject *)qword_9060A0); /*0x6bd0f*/
    return qword_9060A0; /*0x6bd15*/
  }
  return result; /*0x6bd1c*/
}

// [2/27] Address: 0x3a0e10
// Method: MusicDownloadManager::addSongObjectFromString
// Hidden C++ exception states: #wind=2
double __fastcall MusicDownloadManager_addSongObjectFromString(__int64 a1)
{
  __int64 v2; // rdx
  size_t v3; // rdi
  void **v4; // rsi
  void **v5; // rcx
  size_t v6; // rdx
  size_t v7; // rbx
  __int64 v8; // rax
  void **v9; // r15
  size_t v10; // r14
  unsigned __int64 v11; // rbx
  void **v12; // rsi
  void *v13; // rcx
  __int64 v14; // rax
  void *v15; // rcx
  double result; // xmm0_8
  void *Src[2]; // [rsp+38h] [rbp-48h] BYREF
  size_t Size[2]; // [rsp+48h] [rbp-38h]
  void *Block[2]; // [rsp+58h] [rbp-28h] BYREF
  __m128i si128; // [rsp+68h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 712); /*0x3a0e3d*/
  if ( !v2 || *(int *)(v2 + 324) <= 0 ) /*0x3a0e54*/
    return result; /*0x3a0e54*/
  sub_3E4F0(Src, v2 + 336); /*0x3a0e65*/
  v3 = Size[0]; /*0x3a0e6b*/
  if ( Size[0] )
  {
    v4 = Src; /*0x3a0e78*/
    v5 = (void **)Src[0]; /*0x3a0e7c*/
    v6 = Size[1]; /*0x3a0e80*/
    if ( Size[1] > 0xF ) /*0x3a0e88*/
      v4 = (void **)Src[0]; /*0x3a0e88*/
    if ( Size[0] < 4 ) /*0x3a0e90*/
      goto LABEL_10; /*0x3a0e90*/
    v7 = (size_t)v4 + Size[0]; /*0x3a0e92*/
    v8 = sub_672690(v4, (char *)v4 + Size[0], "Re: ", 4);
    if ( v8 == v7 || v8 - (_QWORD)v4 == -1 ) /*0x3a0eba*/
    {
      v6 = Size[1]; /*0x3a0ec0*/
      v3 = Size[0]; /*0x3a0ec4*/
      v5 = (void **)Src[0]; /*0x3a0ec8*/
LABEL_10:
      if ( 0x7FFFFFFFFFFFFFFFLL - v3 < 4 ) /*0x3a0ee0*/
        sub_8D90(v5, v6, 0x7FFFFFFFFFFFFFFFLL); /*0x3a1080*/
      v9 = Src; /*0x3a0ee6*/
      if ( v6 > 0xF ) /*0x3a0eee*/
        v9 = v5; /*0x3a0eee*/
      *(_OWORD *)Block = 0; /*0x3a0ef5*/
      v10 = v3 + 4; /*0x3a0ef9*/
      v11 = 15; /*0x3a0efd*/
      v12 = Block; /*0x3a0f02*/
      if ( v3 + 4 > 0xF ) /*0x3a0f09*/
      {
        v11 = v10 | 0xF; /*0x3a0f0e*/
        if ( (v10 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x3a0f15*/
        {
          if ( v11 < 0x16 ) /*0x3a0f24*/
            v11 = 22; /*0x3a0f24*/
        }
        else
        {
          v11 = 0x7FFFFFFFFFFFFFFFLL; /*0x3a0f17*/
        }
        v12 = (void **)sub_3C460(v11 + 1); /*0x3a0f31*/
        Block[0] = v12; /*0x3a0f34*/
      }
      si128.m128i_i64[0] = v3 + 4; /*0x3a0f38*/
      si128.m128i_i64[1] = v11; /*0x3a0f3c*/
      *(_DWORD *)v12 = 540697938; /*0x3a0f40*/
      memcpy((char *)v12 + 4, v9, v3); /*0x3a0f50*/
      *((_BYTE *)v12 + v10) = 0; /*0x3a0f55*/
      if ( Size[1] > 0xF ) /*0x3a0f62*/
      {
        v13 = Src[0]; /*0x3a0f67*/
        if ( Size[1] + 1 >= 0x1000 ) /*0x3a0f75*/
        {
          v13 = (void *)*((_QWORD *)Src[0] - 1); /*0x3a0f7b*/
          if ( (unsigned __int64)((char *)Src[0] - (char *)v13 - 8) > 0x1F ) /*0x3a0f8a*/
            invoke_watson(0, 0, 0, 0, 0); /*0x3a0f9f*/
        }
        j_j_free(v13); /*0x3a0fa6*/
      }
      *(_OWORD *)Src = *(_OWORD *)Block; /*0x3a0faf*/
      *(__m128i *)Size = si128; /*0x3a0fb7*/
    }
  }
  *(_OWORD *)Block = 0; /*0x3a0fbb*/
  si128 = _mm_load_si128((const __m128i *)&::Size); /*0x3a0fca*/
  LOBYTE(Block[0]) = 0; /*0x3a0fcf*/
  v14 = sub_ECDB0(*(unsigned int *)(*(_QWORD *)(a1 + 712) + 324LL), Src, Block); /*0x3a0fe8*/
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 1064LL))(v14); /*0x3a0ffa*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x3a1005*/
  {
    v15 = Block[0]; /*0x3a100a*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x3a1018*/
    {
      v15 = (void *)*((_QWORD *)Block[0] - 1); /*0x3a101e*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v15 - 8) > 0x1F ) /*0x3a102d*/
        invoke_watson(0, 0, 0, 0, 0); /*0x3a1042*/
    }
    j_j_free(v15); /*0x3a1049*/
  }
  return sub_3C310(Src); /*0x3a1058*/
}

// [3/27] Address: 0x3c79a0
// Method: MusicDownloadManager::onGetSongInfoCompleted
void __fastcall MusicDownloadManager_onGetSongInfoCompleted(int *a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v6; // rbp
  int *v7; // rsi
  int *v8; // r14
  __int64 v9; // r15
  __int64 v10; // r15
  __int64 v11; // r14
  int *v12; // rdi
  __int128 v13; // xmm0
  int v14; // eax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 *v18; // r14
  __int64 v19; // r15
  __int128 v20; // xmm0
  int v21; // eax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  int v25; // eax
  int v26; // [rsp+20h] [rbp-C8h]
  __int64 v27; // [rsp+30h] [rbp-B8h] BYREF
  int *v28; // [rsp+38h] [rbp-B0h]
  int v29; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v30; // [rsp+48h] [rbp-A0h] BYREF
  __int128 v31; // [rsp+58h] [rbp-90h]
  __int128 v32; // [rsp+68h] [rbp-80h] BYREF
  __int128 v33; // [rsp+78h] [rbp-70h]

  v6 = a2; /*0x3c79d1*/
  v7 = a1; /*0x3c79d4*/
  if ( a2 - (__int64)a1 < 2376 ) /*0x3c79dd*/
  {
LABEL_7:
    sub_3C88E0(v7, v6); /*0x3c7a97*/
  }
  else
  {
    while ( a3 > 0 ) /*0x3c79f3*/
    {
      sub_3C8AA0(&v27, v7, v6, a4); /*0x3c7a08*/
      v8 = v28; /*0x3c7a0d*/
      v9 = v27; /*0x3c7a15*/
      a3 = (a3 >> 2) + (a3 >> 1); /*0x3c7a28*/
      if ( (v27 - (__int64)v7) / 72 >= (v6 - (__int64)v28) / 72 ) /*0x3c7a65*/
      {
        MusicDownloadManager_onGetSongInfoCompleted(v28, v6, a3, a4); /*0x3c7a7d*/
        v6 = v9; /*0x3c7a82*/
      }
      else
      {
        MusicDownloadManager_onGetSongInfoCompleted(v7, v27, a3, a4); /*0x3c7a6d*/
        v7 = v8; /*0x3c7a72*/
      }
      if ( v6 - (__int64)v7 < 2376 ) /*0x3c7a91*/
        goto LABEL_7; /*0x3c7a91*/
    }
    v10 = (v6 - (__int64)v7) / 72; /*0x3c7ae1*/
    v11 = v10 >> 1; /*0x3c7ae7*/
    if ( v10 >> 1 > 0 ) /*0x3c7aed*/
    {
      v12 = &v7[16 * v11 + 8 + 2 * v11]; /*0x3c7afe*/
      do /*0x3c7b95*/
      {
        v13 = *((_OWORD *)v12 - 6); /*0x3c7b10*/
        v14 = *(v12 - 26); /*0x3c7b14*/
        v12 -= 18; /*0x3c7b17*/
        v15 = *(_OWORD *)(v12 - 2); /*0x3c7b1b*/
        *((_QWORD *)v12 - 1) = 0; /*0x3c7b1f*/
        *(_QWORD *)v12 = 15; /*0x3c7b28*/
        --v11; /*0x3c7b2f*/
        *((_BYTE *)v12 - 24) = 0; /*0x3c7b32*/
        v30 = v13; /*0x3c7b39*/
        v29 = v14; /*0x3c7b41*/
        v16 = *(_OWORD *)(v12 + 2); /*0x3c7b45*/
        LOBYTE(v26) = a4; /*0x3c7b49*/
        v31 = v15; /*0x3c7b4d*/
        v17 = *(_OWORD *)(v12 + 6); /*0x3c7b52*/
        *((_QWORD *)v12 + 3) = 0; /*0x3c7b56*/
        v32 = v16; /*0x3c7b5d*/
        *((_QWORD *)v12 + 4) = 15; /*0x3c7b62*/
        v33 = v17; /*0x3c7b6a*/
        *((_BYTE *)v12 + 8) = 0; /*0x3c7b6f*/
        sub_3C94F0(v7, v11, v10, &v29, v26); /*0x3c7b73*/
        sub_3C310(&v32); /*0x3c7b7d*/
        sub_3C310(&v30); /*0x3c7b87*/
      }
      while ( v11 > 0 ); /*0x3c7b95*/
    }
    if ( v10 >= 2 ) /*0x3c7b9f*/
    {
      v18 = (__int128 *)(v6 - 48); /*0x3c7bad*/
      v19 = 48LL - (_QWORD)v7; /*0x3c7bc1*/
      do /*0x3c7cb3*/
      {
        if ( ((__int64)v18 + v19) / 72 >= 2 ) /*0x3c7bec*/
        {
          v20 = *(v18 - 1); /*0x3c7bf2*/
          v21 = *((_DWORD *)v18 - 6); /*0x3c7bf7*/
          v22 = *v18; /*0x3c7bff*/
          *(_QWORD *)v18 = 0; /*0x3c7c03*/
          *((_QWORD *)v18 + 1) = 15; /*0x3c7c0a*/
          *((_BYTE *)v18 - 16) = 0; /*0x3c7c12*/
          v30 = v20; /*0x3c7c15*/
          v29 = v21; /*0x3c7c1a*/
          v23 = v18[1]; /*0x3c7c1e*/
          v31 = v22; /*0x3c7c23*/
          v24 = v18[2]; /*0x3c7c28*/
          *((_QWORD *)v18 + 4) = 0; /*0x3c7c2d*/
          *((_QWORD *)v18 + 5) = 15; /*0x3c7c31*/
          *((_BYTE *)v18 + 16) = 0; /*0x3c7c39*/
          v25 = *v7; /*0x3c7c3e*/
          v32 = v23; /*0x3c7c40*/
          *((_DWORD *)v18 - 6) = v25; /*0x3c7c45*/
          v33 = v24; /*0x3c7c49*/
          sub_58AD0(v18 - 1, v7 + 2); /*0x3c7c4e*/
          sub_58AD0(v18 + 1, v7 + 10); /*0x3c7c5b*/
          LOBYTE(v26) = a4; /*0x3c7c64*/
          sub_3C94F0(v7, 0, ((__int64)v18 - 24 - (__int64)v7) / 72, &v29, v26); /*0x3c7c86*/
          sub_3C310(&v32); /*0x3c7c90*/
          sub_3C310(&v30); /*0x3c7c9a*/
        }
        v18 = (__int128 *)((char *)v18 - 72); /*0x3c7c9f*/
      }
      while ( (__int64)v18 + v19 >= 144 ); /*0x3c7cb3*/
    }
  }
}

// [4/27] Address: 0x47dcc0
// Method: MusicDownloadManager::ProcessHttpRequest
// Hidden C++ exception states: #wind=4
double __fastcall MusicDownloadManager_ProcessHttpRequest(
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

  v9 = (cocos2d::extension::CCHttpRequest *)operator new(0xE0u); /*0x47dcff*/
  cocos2d::extension::CCHttpRequest::CCHttpRequest(v9); /*0x47dd0a*/
  *(_QWORD *)v9 = &cocos2d::extension::CCHttpRequest::`vftable'; /*0x47dd17*/
  v10 = (const char *)a2; /*0x47dd1a*/
  if ( *(_QWORD *)(a2 + 24) > 0xFu ) /*0x47dd22*/
    v10 = *(const char **)a2; /*0x47dd24*/
  cocos2d::extension::CCHttpRequest::setUrl(v9, v10); /*0x47dd2a*/
  *((_DWORD *)v9 + 14) = 1; /*0x47dd30*/
  *((_QWORD *)v9 + 19) = a1; /*0x47dd37*/
  *((_QWORD *)v9 + 20) = sub_47DF20; /*0x47dd45*/
  if ( a1 ) /*0x47dd4f*/
    cocos2d::CCObject::retain(a1); /*0x47dd54*/
  v11 = a3; /*0x47dd5a*/
  if ( *((_QWORD *)a3 + 3) <= 0xFu ) /*0x47dd62*/
  {
    v12 = a3; /*0x47dd6c*/
  }
  else
  {
    v11 = *(const char **)a3; /*0x47dd64*/
    v12 = *(const char **)a3; /*0x47dd67*/
  }
  v13 = -1; /*0x47dd6f*/
  do /*0x47dd79*/
    ++v13; /*0x47dd76*/
  while ( v11[v13] ); /*0x47dd79*/
  cocos2d::extension::CCHttpRequest::setRequestData(v9, v12, v13); /*0x47dd83*/
  v14 = (const char *)a4; /*0x47dd89*/
  if ( *(_QWORD *)(a4 + 24) > 0xFu ) /*0x47dd91*/
    v14 = *(const char **)a4; /*0x47dd93*/
  cocos2d::extension::CCHttpRequest::setTag(v9, v14); /*0x47dd99*/
  *((_DWORD *)v9 + 50) = a5; /*0x47dda6*/
  Instance = (cocos2d::extension::CCHttpClient *)cocos2d::extension::CCHttpClient::getInstance(v16, v15, v17, v18); /*0x47ddac*/
  cocos2d::extension::CCHttpClient::send(Instance, v9); /*0x47ddb8*/
  cocos2d::CCObject::release(v9); /*0x47ddc1*/
  sub_3C310(a2); /*0x47ddcb*/
  sub_3C310(a3); /*0x47ddd4*/
  return sub_3C310(a4); /*0x47dde2*/
}

// [5/27] Address: 0x47de00
// Method: MusicDownloadManager::ProcessHttpGetRequest
// Hidden C++ exception states: #wind=3
cocos2d::extension::CCHttpRequest *__fastcall MusicDownloadManager_ProcessHttpGetRequest(
        cocos2d::CCObject *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6)
{
  cocos2d::extension::CCHttpRequest *v10; // rbx
  const char *v11; // rdx
  const char *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  cocos2d::extension::CCHttpClient *Instance; // rax

  v10 = (cocos2d::extension::CCHttpRequest *)operator new(0xE0u); /*0x47de41*/
  cocos2d::extension::CCHttpRequest::CCHttpRequest(v10); /*0x47de4c*/
  *(_QWORD *)v10 = &cocos2d::extension::CCHttpRequest::`vftable'; /*0x47de59*/
  *((_DWORD *)v10 + 54) = a5; /*0x47de63*/
  *((_DWORD *)v10 + 53) = a6; /*0x47de70*/
  v11 = (const char *)a2; /*0x47de76*/
  if ( *(_QWORD *)(a2 + 24) > 0xFu ) /*0x47de7e*/
    v11 = *(const char **)a2; /*0x47de80*/
  cocos2d::extension::CCHttpRequest::setUrl(v10, v11); /*0x47de86*/
  *((_DWORD *)v10 + 14) = 0; /*0x47de8c*/
  *((_QWORD *)v10 + 19) = a1; /*0x47de93*/
  *((_QWORD *)v10 + 20) = a4; /*0x47de9a*/
  if ( a1 ) /*0x47dea4*/
    cocos2d::CCObject::retain(a1); /*0x47dea9*/
  v12 = (const char *)a3; /*0x47deaf*/
  if ( *(_QWORD *)(a3 + 24) > 0xFu ) /*0x47deb7*/
    v12 = *(const char **)a3; /*0x47deb9*/
  cocos2d::extension::CCHttpRequest::setTag(v10, v12); /*0x47debf*/
  Instance = (cocos2d::extension::CCHttpClient *)cocos2d::extension::CCHttpClient::getInstance(v14, v13, v15, v16); /*0x47dec5*/
  cocos2d::extension::CCHttpClient::send(Instance, v10); /*0x47ded1*/
  cocos2d::CCObject::release(v10); /*0x47deda*/
  sub_3C310(a2); /*0x47dee4*/
  sub_3C310(a3); /*0x47deed*/
  return v10; /*0x47def5*/
}

// [6/27] Address: 0x47e020
// Method: MusicDownloadManager::handleIt
// Hidden C++ exception states: #wind=4
double __fastcall MusicDownloadManager_handleIt(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  _BYTE v15[32]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v16[32]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v17; // [rsp+70h] [rbp-38h]
  __int64 v18; // [rsp+78h] [rbp-30h]

  v17 = a3; /*0x47e04a*/
  v18 = a4; /*0x47e04f*/
  sub_6C100(a3); /*0x47e057*/
  switch ( a5 ) /*0x47e066*/
  {
    case 21: /*0x47e066*/
      v12 = sub_3E4F0(v16, a4); /*0x47e0fd*/
      v13 = sub_3E4F0(v15, a3); /*0x47e108*/
      sub_47EA40(a1, v13, v12); /*0x47e117*/
      break;
    case 65: /*0x47e066*/
      v10 = sub_3E4F0(v16, a4); /*0x47e0c5*/
      v11 = sub_3E4F0(v15, a3); /*0x47e0d0*/
      sub_4876D0(a1, v11, v10); /*0x47e0df*/
      break;
    case 107: /*0x47e066*/
      v8 = sub_3E4F0(v15, a4); /*0x47e08d*/
      v9 = sub_3E4F0(v16, a3); /*0x47e098*/
      sub_487FD0(a1, v9, v8); /*0x47e0a7*/
      break;
  }
  sub_3C310(a3); /*0x47e120*/
  return sub_3C310(a4); /*0x47e12e*/
}

// [7/27] Address: 0x47e160
// Method: MusicDownloadManager::~MusicDownloadManager
void __fastcall MusicDownloadManager__dtor_MusicDownloadManager(__int64 a1)
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

  *(_QWORD *)a1 = &MusicDownloadManager::`vftable'; /*0x47e174*/
  *(_QWORD *)(a1 + 320) = &MusicDownloadManager::`vftable'; /*0x47e17e*/
  qword_906070 = 0; /*0x47e185*/
  v2 = *(cocos2d::CCObject **)(a1 + 328); /*0x47e190*/
  if ( v2 ) /*0x47e19a*/
    cocos2d::CCObject::release(v2); /*0x47e19c*/
  v3 = *(cocos2d::CCObject **)(a1 + 344); /*0x47e1a2*/
  if ( v3 ) /*0x47e1ac*/
    cocos2d::CCObject::release(v3); /*0x47e1ae*/
  v4 = *(cocos2d::CCObject **)(a1 + 336); /*0x47e1b4*/
  if ( v4 ) /*0x47e1be*/
    cocos2d::CCObject::release(v4); /*0x47e1c0*/
  v5 = *(cocos2d::CCObject **)(a1 + 408); /*0x47e1c6*/
  if ( v5 ) /*0x47e1d0*/
    cocos2d::CCObject::release(v5); /*0x47e1d2*/
  v6 = *(cocos2d::CCObject **)(a1 + 416); /*0x47e1d8*/
  if ( v6 ) /*0x47e1e2*/
    cocos2d::CCObject::release(v6); /*0x47e1e4*/
  v7 = *(cocos2d::CCObject **)(a1 + 424); /*0x47e1ea*/
  if ( v7 ) /*0x47e1f4*/
    cocos2d::CCObject::release(v7); /*0x47e1f6*/
  v8 = *(cocos2d::CCObject **)(a1 + 352); /*0x47e1fc*/
  if ( v8 ) /*0x47e206*/
    cocos2d::CCObject::release(v8); /*0x47e208*/
  v9 = *(cocos2d::CCObject **)(a1 + 448); /*0x47e20e*/
  if ( v9 ) /*0x47e218*/
    cocos2d::CCObject::release(v9); /*0x47e21a*/
  v10 = *(cocos2d::CCObject **)(a1 + 456); /*0x47e220*/
  if ( v10 ) /*0x47e22a*/
    cocos2d::CCObject::release(v10); /*0x47e22c*/
  v11 = *(cocos2d::CCObject **)(a1 + 464); /*0x47e232*/
  if ( v11 ) /*0x47e23c*/
    cocos2d::CCObject::release(v11); /*0x47e23e*/
  v12 = *(cocos2d::CCObject **)(a1 + 920); /*0x47e244*/
  if ( v12 ) /*0x47e24e*/
    cocos2d::CCObject::release(v12); /*0x47e250*/
  sub_48AD60(a1); /*0x47e259*/
  sub_497830(a1 + 936); /*0x47e265*/
  sub_7F2E0(a1 + 904); /*0x47e271*/
  sub_7F2E0(a1 + 888); /*0x47e27d*/
  sub_685C0(a1 + 864); /*0x47e289*/
  sub_3DA90((void *)(a1 + 840)); /*0x47e295*/
  sub_3DA90((void *)(a1 + 800)); /*0x47e2a1*/
  sub_3DB00(a1 + 784); /*0x47e2ad*/
  sub_3DA90((void *)(a1 + 736)); /*0x47e2b9*/
  sub_3DB00(a1 + 720); /*0x47e2c5*/
  sub_3DA90((void *)(a1 + 672)); /*0x47e2d1*/
  sub_3DB00(a1 + 656); /*0x47e2dd*/
  sub_3DA90((void *)(a1 + 608)); /*0x47e2e9*/
  sub_3DB00(a1 + 592); /*0x47e2f5*/
  sub_3DA90((void *)(a1 + 544)); /*0x47e301*/
  sub_3DB00(a1 + 528); /*0x47e30d*/
  sub_821C0(a1 + 488); /*0x47e319*/
  sub_18A270(a1 + 472, a1 + 472, *(_QWORD *)(*(_QWORD *)(a1 + 472) + 8LL)); /*0x47e337*/
  j_j_free(*(void **)(a1 + 472)); /*0x47e348*/
  sub_3C310(a1 + 368); /*0x47e354*/
  cocos2d::CCNode::~CCNode((cocos2d::CCNode *)a1); /*0x47e366*/
}

// [8/27] Address: 0x47e370
// Method: MusicDownloadManager::init
bool __fastcall MusicDownloadManager_init(cocos2d::CCNode *a1)
{
  bool result; // al
  cocos2d::CCObject *v3; // rax
  __int64 v4; // rcx
  cocos2d::CCObject *v5; // rax
  __int128 *v6; // rax
  __int64 v7; // rdx
  __int128 *v8; // rcx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 *v17; // rbx
  char *v18; // rbx
  _BYTE v19[16]; // [rsp+20h] [rbp-468h] BYREF
  _OWORD v20[2]; // [rsp+30h] [rbp-458h] BYREF
  int v21; // [rsp+50h] [rbp-438h]
  char v22; // [rsp+54h] [rbp-434h] BYREF
  _BYTE v23[1040]; // [rsp+60h] [rbp-428h] BYREF
  __int64 v24; // [rsp+470h] [rbp-18h] BYREF

  result = cocos2d::CCNode::init(a1); /*0x47e38e*/
  if ( result ) /*0x47e396*/
  {
    v3 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x47e3ac*/
    *((_QWORD *)a1 + 41) = v3; /*0x47e3b5*/
    cocos2d::CCObject::retain(v3); /*0x47e3bc*/
    v5 = (cocos2d::CCObject *)cocos2d::CCArray::create(v4); /*0x47e3c2*/
    *((_QWORD *)a1 + 42) = v5; /*0x47e3cb*/
    cocos2d::CCObject::retain(v5); /*0x47e3d2*/
    v6 = (__int128 *)v23; /*0x47e3d8*/
    v7 = 8; /*0x47e3dd*/
    v8 = (__int128 *)&unk_830AB0; /*0x47e3e2*/
    do /*0x47e441*/
    {
      v6 += 8; /*0x47e3f0*/
      v9 = *v8; /*0x47e3f7*/
      v10 = v8[1]; /*0x47e3fa*/
      v8 += 8; /*0x47e3fe*/
      *(v6 - 8) = v9; /*0x47e405*/
      v11 = *(v8 - 6); /*0x47e409*/
      *(v6 - 7) = v10; /*0x47e40d*/
      v12 = *(v8 - 5); /*0x47e411*/
      *(v6 - 6) = v11; /*0x47e415*/
      v13 = *(v8 - 4); /*0x47e419*/
      *(v6 - 5) = v12; /*0x47e41d*/
      v14 = *(v8 - 3); /*0x47e421*/
      *(v6 - 4) = v13; /*0x47e425*/
      v15 = *(v8 - 2); /*0x47e429*/
      *(v6 - 3) = v14; /*0x47e42d*/
      v16 = *(v8 - 1); /*0x47e431*/
      *(v6 - 2) = v15; /*0x47e435*/
      *(v6 - 1) = v16; /*0x47e439*/
      --v7; /*0x47e43d*/
    }
    while ( v7 ); /*0x47e441*/
    *v6 = *v8; /*0x47e44d*/
    sub_3DB60((char *)a1 + 520); /*0x47e450*/
    v17 = (__int64 *)v23; /*0x47e455*/
    do /*0x47e483*/
    {
      sub_67020((char *)a1 + 520, v19, v17); /*0x47e46f*/
      v17 = (__int64 *)((char *)v17 + 4); /*0x47e47c*/
    }
    while ( v17 != &v24 ); /*0x47e483*/
    v20[0] = _mm_load_si128((const __m128i *)&xmmword_8312A0); /*0x47e49c*/
    v21 = 10006555; /*0x47e4a2*/
    v20[1] = _mm_load_si128((const __m128i *)&xmmword_8312B0); /*0x47e4aa*/
    sub_3DB60((char *)a1 + 584); /*0x47e4b0*/
    v18 = (char *)v20; /*0x47e4b5*/
    do /*0x47e4e0*/
    {
      sub_67020((char *)a1 + 584, v19, v18); /*0x47e4cf*/
      v18 += 4; /*0x47e4d9*/
    }
    while ( v18 != &v22 ); /*0x47e4e0*/
    return 1; /*0x47e4ea*/
  }
  return result; /*0x47e4f4*/
}

// [9/27] Address: 0x47e510
// Method: MusicDownloadManager::addMusicDownloadDelegate
// Hidden C++ exception states: #wind=1
void __fastcall MusicDownloadManager_addMusicDownloadDelegate(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  cocos2d::CCNode *v5; // rbx

  v4 = 0; /*0x47e525*/
  if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 336)) ) /*0x47e52e*/
  {
    while ( *((_QWORD *)cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 336), v4) + 40) != a2 ) /*0x47e556*/
    {
      if ( ++v4 >= cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 336)) ) /*0x47e569*/
        goto LABEL_4; /*0x47e569*/
    }
  }
  else
  {
LABEL_4:
    v5 = (cocos2d::CCNode *)operator new(0x148u); /*0x47e56b*/
    cocos2d::CCNode::CCNode(v5); /*0x47e580*/
    *(_QWORD *)v5 = &MusicDelegateHandler::`vftable'; /*0x47e58d*/
    *((_QWORD *)v5 + 40) = 0; /*0x47e590*/
    if ( cocos2d::CCNode::init(v5) ) /*0x47e59e*/
    {
      *((_QWORD *)v5 + 40) = a2; /*0x47e5ba*/
      cocos2d::CCObject::autorelease(v5); /*0x47e5c1*/
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCNode *, __int64))(*(_QWORD *)v5 + 8LL))(v5, 1); /*0x47e5b3*/
      v5 = 0; /*0x47e5b6*/
    }
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 336), v5); /*0x47e5d1*/
  }
}

// [10/27] Address: 0x47e5f0
// Method: MusicDownloadManager::removeMusicDownloadDelegate
void __fastcall MusicDownloadManager_removeMusicDownloadDelegate(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  struct cocos2d::CCObject *v5; // rax
  cocos2d::CCArray *v6; // rcx

  v4 = 0; /*0x47e60c*/
  if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 336)) ) /*0x47e60e*/
  {
    while ( 1 ) /*0x47e629*/
    {
      v5 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 336), v4); /*0x47e629*/
      v6 = *(cocos2d::CCArray **)(a1 + 336); /*0x47e62f*/
      if ( *((_QWORD *)v5 + 40) == a2 ) /*0x47e63d*/
        break; /*0x47e63d*/
      if ( ++v4 >= cocos2d::CCArray::count(v6) ) /*0x47e649*/
        return; /*0x47e649*/
    }
    cocos2d::CCArray::removeObjectAtIndex(v6, v4, 1); /*0x47e660*/
  }
}

// [11/27] Address: 0x47e680
// Method: MusicDownloadManager::isRunningActionForSongID
char __fastcall MusicDownloadManager_isRunningActionForSongID(__int64 a1, int a2)
{
  cocos2d::CCString *v4; // rax
  const char *CString; // rax
  cocos2d::CCString *v6; // rax
  const char *v7; // rax
  __int64 v8; // rax

  v4 = cocos2d::CCString::createWithFormat("i_%i", a2); /*0x47e696*/
  CString = cocos2d::CCString::getCString(v4); /*0x47e69f*/
  if ( sub_3B560(a1, CString) /*0x47e6db*/
    || (v6 = cocos2d::CCString::createWithFormat("d_%i", a2),
        v7 = cocos2d::CCString::getCString(v6),
        (v8 = sub_3B560(a1, v7)) != 0) )
  {
    LOBYTE(v8) = 1; /*0x47e6ed*/
  }
  return v8; /*0x47e6dd*/
}

// [12/27] Address: 0x47e700
// Method: MusicDownloadManager::songStateChanged
unsigned int __fastcall MusicDownloadManager_songStateChanged(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int result; // eax
  struct cocos2d::CCObject *v4; // rax

  v2 = 0; /*0x47e70d*/
  result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 336)); /*0x47e716*/
  if ( result ) /*0x47e71e*/
  {
    do /*0x47e74d*/
    {
      v4 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 336), v2); /*0x47e729*/
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v4 + 40) + 40LL))(*((_QWORD *)v4 + 40)); /*0x47e739*/
      ++v2; /*0x47e743*/
      result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 336)); /*0x47e745*/
    }
    while ( v2 < result ); /*0x47e74d*/
  }
  return result; /*0x47e74f*/
}

// [13/27] Address: 0x47f6a0
// Method: MusicDownloadManager::getDownloadedSongs
cocos2d::CCArray *__fastcall MusicDownloadManager_getDownloadedSongs(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  cocos2d::CCArray *v4; // rdi
  __int64 v5; // rdx
  __int64 i; // rbx
  unsigned int *v7; // rsi

  v2 = cocos2d::CCArray::create(a1); /*0x47f6ae*/
  v3 = *(_QWORD *)(a1 + 344); /*0x47f6b4*/
  v4 = (cocos2d::CCArray *)v2; /*0x47f6bb*/
  if ( v3 ) /*0x47f6c1*/
  {
    v5 = *(_QWORD *)(v3 + 56); /*0x47f6c3*/
    if ( v5 ) /*0x47f6ca*/
    {
      for ( i = *(_QWORD *)(v5 + 288); ; i = *(_QWORD *)(i + 288) ) /*0x47f6d1*/
      {
        v7 = *(unsigned int **)(v5 + 264); /*0x47f6e0*/
        if ( (unsigned __int8)sub_4803B0(a1, v7[80]) ) /*0x47f6f0*/
          cocos2d::CCArray::addObject(v4, (struct cocos2d::CCObject *)v7); /*0x47f6ff*/
        v5 = i; /*0x47f705*/
        if ( !i ) /*0x47f70b*/
          break; /*0x47f70b*/
      }
    }
  }
  if ( cocos2d::CCArray::count(v4) > 1 ) /*0x47f731*/
    qsort(*(void **)(*((_QWORD *)v4 + 7) + 16LL), **((unsigned int **)v4 + 7), 8u, sub_47D850); /*0x47f74a*/
  return v4; /*0x47f753*/
}

// [14/27] Address: 0x47f760
// Method: MusicDownloadManager::clearUnusedSongs
// Hidden C++ exception states: #wind=2
unsigned int __fastcall MusicDownloadManager_clearUnusedSongs(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  cocos2d::CCDictionary *v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 i; // rdi
  __int64 v9; // rbx
  __int64 v10; // rbx
  struct cocos2d::CCObject *v11; // rax
  cocos2d::CCArray *v12; // rsi
  unsigned int j; // edi
  __int64 v14; // rcx
  struct cocos2d::CCObject *v15; // rax
  struct cocos2d::CCObject *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  struct cocos2d::CCObject *v21; // rax
  cocos2d::CCArray *v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 k; // rbx
  unsigned int v26; // edi
  unsigned int result; // eax
  struct cocos2d::CCObject *v28; // rbx
  cocos2d::CCString *v29; // rax
  const char *CString; // rax
  __int64 v31; // r8
  void *v32; // rcx
  void *v33; // [rsp+30h] [rbp-48h]
  __int128 v34; // [rsp+38h] [rbp-40h] BYREF
  __int64 v35; // [rsp+48h] [rbp-30h]
  unsigned __int64 v36; // [rsp+50h] [rbp-28h]

  v2 = *(_QWORD *)&qword_905FB0; /*0x47f78a*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0x47f794*/
  {
    v33 = operator new(0x690u); /*0x47f7a0*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v33); /*0x47f7ae*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x47f7bf*/
    v2 = *(_QWORD *)&qword_905FB0; /*0x47f7c1*/
  }
  v5 = (cocos2d::CCDictionary *)cocos2d::CCDictionary::create(); /*0x47f7ce*/
  v6 = *(_QWORD *)(v2 + 856); /*0x47f7d1*/
  if ( v6 ) /*0x47f7db*/
  {
    v7 = *(_QWORD *)(v6 + 56); /*0x47f7dd*/
    if ( v7 ) /*0x47f7e4*/
    {
      for ( i = *(_QWORD *)(v7 + 288); ; i = *(_QWORD *)(i + 288) ) /*0x47f7e6*/
      {
        v9 = *(_QWORD *)(v7 + 264); /*0x47f7f0*/
        if ( !*(_BYTE *)(v9 + 1185) /*0x47f811*/
          && *(int *)(v9 + 680) > 0
          && !cocos2d::CCDictionary::objectForKey(v5, *(int *)(v9 + 680)) )
        {
          v10 = *(int *)(v9 + 680); /*0x47f81c*/
          v11 = (struct cocos2d::CCObject *)cocos2d::CCNode::create(v4, v3); /*0x47f823*/
          cocos2d::CCDictionary::setObject(v5, v11, v10); /*0x47f832*/
        }
        v7 = i; /*0x47f838*/
        if ( !i ) /*0x47f83e*/
          break; /*0x47f83e*/
      }
    }
  }
  v12 = *(cocos2d::CCArray **)(sub_466AC0(v4, v3) + 368); /*0x47f84e*/
  for ( j = 0; j < cocos2d::CCArray::count(v12); ++j ) /*0x47f85e*/
  {
    v15 = cocos2d::CCArray::objectAtIndex(v12, j); /*0x47f875*/
    v16 = v15; /*0x47f87b*/
    if ( !*((_BYTE *)v15 + 1185) ) /*0x47f87e*/
    {
      v17 = *((int *)v15 + 170); /*0x47f887*/
      if ( (int)v17 > 0 && !cocos2d::CCDictionary::objectForKey(v5, v17) ) /*0x47f898*/
      {
        v20 = *((int *)v16 + 170); /*0x47f8a3*/
        v21 = (struct cocos2d::CCObject *)cocos2d::CCNode::create(v19, v18); /*0x47f8aa*/
        cocos2d::CCDictionary::setObject(v5, v21, v20); /*0x47f8b9*/
      }
    }
  }
  v22 = (cocos2d::CCArray *)cocos2d::CCArray::create(v14); /*0x47f8d4*/
  v23 = *(_QWORD *)(a1 + 344); /*0x47f8d7*/
  if ( v23 ) /*0x47f8e1*/
  {
    v24 = *(_QWORD *)(v23 + 56); /*0x47f8e3*/
    if ( v24 ) /*0x47f8ea*/
    {
      for ( k = *(_QWORD *)(v24 + 288); ; k = *(_QWORD *)(k + 288) ) /*0x47f8ec*/
      {
        cocos2d::CCArray::addObject(v22, *(struct cocos2d::CCObject **)(v24 + 264)); /*0x47f90a*/
        v24 = k; /*0x47f910*/
        if ( !k ) /*0x47f916*/
          break; /*0x47f916*/
      }
    }
  }
  v26 = 0; /*0x47f921*/
  result = cocos2d::CCArray::count(v22); /*0x47f927*/
  if ( result ) /*0x47f92f*/
  {
    do /*0x47fa21*/
    {
      v28 = cocos2d::CCArray::objectAtIndex(v22, v26); /*0x47f940*/
      if ( !(unsigned __int8)sub_4803B0(a1, *((unsigned int *)v28 + 80)) /*0x47f963*/
        && !cocos2d::CCDictionary::objectForKey(v5, *((int *)v28 + 80)) )
      {
        v29 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, *((unsigned int *)v28 + 80)); /*0x47f97f*/
        CString = cocos2d::CCString::getCString(v29); /*0x47f988*/
        v34 = 0; /*0x47f991*/
        v35 = 0; /*0x47f996*/
        v36 = 0; /*0x47f99b*/
        v31 = -1; /*0x47f9a0*/
        do /*0x47f9b3*/
          ++v31; /*0x47f9b0*/
        while ( CString[v31] ); /*0x47f9b3*/
        sub_3C230(&v34); /*0x47f9c2*/
        cocos2d::CCDictionary::removeObjectForKey(*(_QWORD *)(a1 + 344), &v34); /*0x47f9d4*/
        if ( v36 > 0xF ) /*0x47f9e4*/
        {
          v32 = (void *)v34; /*0x47f9e9*/
          if ( v36 + 1 >= 0x1000 ) /*0x47f9f8*/
          {
            v32 = *(void **)(v34 - 8); /*0x47f9fe*/
            if ( (unsigned __int64)(v34 - (_QWORD)v32 - 8) > 0x1F ) /*0x47fa0d*/
              invoke_watson(0, 0, 0, 0, 0); /*0x47fa5d*/
          }
          j_j_free(v32); /*0x47fa0f*/
        }
      }
      ++v26; /*0x47fa14*/
      result = cocos2d::CCArray::count(v22); /*0x47fa19*/
    }
    while ( v26 < result ); /*0x47fa21*/
  }
  return result; /*0x47fa27*/
}

// [15/27] Address: 0x47fa70
// Method: MusicDownloadManager::downloadSongStarted
unsigned int __fastcall MusicDownloadManager_downloadSongStarted(__int64 a1, unsigned int a2)
{
  unsigned int v4; // ebx
  unsigned int result; // eax
  __int64 v6; // rcx

  v4 = 0; /*0x47fa8b*/
  result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 336)); /*0x47fa8d*/
  if ( result ) /*0x47fa95*/
  {
    do /*0x47fad4*/
    {
      v6 = *((_QWORD *)cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 336), v4) + 40); /*0x47faaf*/
      if ( v6 ) /*0x47fab9*/
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 16LL))(v6, a2); /*0x47fac0*/
      ++v4; /*0x47faca*/
      result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 336)); /*0x47facc*/
    }
    while ( v4 < result ); /*0x47fad4*/
  }
  return result; /*0x47fad6*/
}

// [16/27] Address: 0x47fe40
// Method: MusicDownloadManager::onDownloadSongCompleted
// Hidden C++ exception states: #wind=4
double __fastcall MusicDownloadManager_onDownloadSongCompleted(__int64 a1, __int64 a2, __int64 a3)
{
  const char *Tag; // rax
  unsigned int v6; // esi
  cocos2d::CCString *v7; // rax
  const char *CString; // rax
  const char *v9; // rcx
  FILE *v10; // rax
  FILE *v11; // rbp
  __int64 SongInfoObject; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // r14d
  int v16; // ebp
  cocos2d::CCArray *i; // rdi
  __int64 v18; // r8
  const char *v19; // rcx
  unsigned int j; // edi
  struct cocos2d::CCObject *v21; // rax
  double result; // xmm0_8
  void *v23; // [rsp+20h] [rbp-68h]
  void *v24; // [rsp+20h] [rbp-68h]
  char *v25[4]; // [rsp+28h] [rbp-60h] BYREF
  char *FileName[4]; // [rsp+48h] [rbp-40h] BYREF

  Tag = cocos2d::extension::CCHttpRequest::getTag(*(cocos2d::extension::CCHttpRequest **)(a3 + 56)); /*0x47fe6b*/
  v6 = atoi(Tag); /*0x47fe7a*/
  v7 = cocos2d::CCString::createWithFormat("d_%i", v6); /*0x47fe85*/
  CString = cocos2d::CCString::getCString(v7); /*0x47fe8e*/
  sub_4801D0(a1, CString); /*0x47fe9a*/
  if ( *(_BYTE *)(a3 + 64) )
  {
    MusicDownloadManager_pathForSong(a1, FileName, v6); /*0x47fed2*/
    v9 = (const char *)FileName; /*0x47fed8*/
    if ( FileName[3] > (_BYTE *)&loc_D + 2 ) /*0x47fee3*/
      v9 = FileName[0]; /*0x47fee3*/
    v10 = fopen(v9, "wb"); /*0x47fef0*/
    v11 = v10; /*0x47fef6*/
    if ( v10 ) /*0x47fefc*/
    {
      fwrite(*(const void **)(a3 + 72), 1u, *(_QWORD *)(a3 + 80) - *(_QWORD *)(a3 + 72), v10); /*0x47ff23*/
      fclose(v11); /*0x47ff2c*/
      SongInfoObject = MusicDownloadManager_getSongInfoObject(a1, v6); /*0x47ff37*/
      if ( SongInfoObject ) /*0x47ff3f*/
        *(_DWORD *)(SongInfoObject + 476) = ++*(_DWORD *)(a1 + 360); /*0x47ff4d*/
      v13 = qword_905FD0; /*0x47ff53*/
      if ( !qword_905FD0 ) /*0x47ff5d*/
      {
        v23 = operator new(0x6E8u); /*0x47ff69*/
        qword_905FD0 = sub_2723A0(v23); /*0x47ff77*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x47ff88*/
        v13 = qword_905FD0; /*0x47ff8a*/
      }
      if ( !GameManager_getGameVariable(v13, "0018") ) /*0x47ff98*/
      {
        v14 = qword_905FD0; /*0x47ffa5*/
        if ( !qword_905FD0 ) /*0x47ffaf*/
        {
          v24 = operator new(0x6E8u); /*0x47ffbb*/
          qword_905FD0 = sub_2723A0(v24); /*0x47ffc9*/
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x47ffda*/
          v14 = qword_905FD0; /*0x47ffdc*/
        }
        v15 = *(_DWORD *)(v14 + 1164); /*0x47ffe3*/
        v16 = *(_DWORD *)(v14 + 1168); /*0x47ffea*/
        for ( i = MusicDownloadManager_getDownloadedSongs(a1); /*0x47fff8*/
              cocos2d::CCArray::count(i) > 0x32;
              cocos2d::CCArray::removeLastObject(i, 1) )
        {
          v18 = *((unsigned int *)cocos2d::CCArray::lastObject(i) + 80); /*0x480019*/
          if ( (_DWORD)v18 != v15 && (_DWORD)v18 != v16 ) /*0x480028*/
          {
            MusicDownloadManager_pathForSong(a1, v25, v18); /*0x480032*/
            v19 = (const char *)v25; /*0x480037*/
            if ( v25[3] > (_BYTE *)&loc_D + 2 ) /*0x480042*/
              v19 = v25[0]; /*0x480042*/
            remove(v19); /*0x480048*/
            sub_3C310(v25); /*0x480053*/
          }
        }
      }
      for ( j = 0; j < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 336)); ++j ) /*0x48007a*/
      {
        v21 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 336), j); /*0x480099*/
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v21 + 40) + 24LL))(*((_QWORD *)v21 + 40), v6); /*0x4800ab*/
      }
    }
    else
    {
      sub_48FD40(a1, v6, 0); /*0x47ff06*/
    }
    return sub_3C310(FileName); /*0x4800c6*/
  }
  else
  {
    sub_48FD40(a1, v6, *(_BYTE *)(*(_QWORD *)(a3 + 56) + 204LL) != 0 ? 3 : 0);
  }
  return result; /*0x4800cb*/
}

// [17/27] Address: 0x4800f0
// Method: MusicDownloadManager::addDLToActive
// Hidden C++ exception states: #wind=1
void __fastcall MusicDownloadManager_addDLToActive(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r8
  void *v6; // rcx
  void *Block[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v8; // [rsp+40h] [rbp-28h]

  *(_OWORD *)Block = 0; /*0x480112*/
  v8 = 0; /*0x48011a*/
  v5 = -1; /*0x480120*/
  do /*0x480133*/
    ++v5; /*0x480130*/
  while ( *(_BYTE *)(a2 + v5) ); /*0x480133*/
  sub_3C230(Block); /*0x48013f*/
  cocos2d::CCDictionary::setObject(*(_QWORD *)(a1 + 328), a3, Block); /*0x480154*/
  if ( *((_QWORD *)&v8 + 1) > 0xFu ) /*0x480164*/
  {
    v6 = Block[0]; /*0x480169*/
    if ( (unsigned __int64)(*((_QWORD *)&v8 + 1) + 1LL) >= 0x1000 ) /*0x480178*/
    {
      v6 = (void *)*((_QWORD *)Block[0] - 1); /*0x48017e*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v6 - 8) > 0x1F ) /*0x48018d*/
        invoke_watson(0, 0, 0, 0, 0); /*0x4801a2*/
    }
    j_j_free(v6); /*0x4801a9*/
  }
}

// [18/27] Address: 0x480290
// Method: MusicDownloadManager::getSongInfoObject
// Hidden C++ exception states: #wind=1
struct cocos2d::CCObject *__fastcall MusicDownloadManager_getSongInfoObject(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  cocos2d::CCString *v4; // rax
  const char *CString; // rax
  __int64 v6; // r8
  __int64 v7; // rbx
  void *v8; // r8
  cocos2d::CCDictionary *v9; // rcx
  void *Block[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v12; // [rsp+40h] [rbp-28h]

  v2 = (int)a2; /*0x4802ae*/
  v4 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, a2); /*0x4802bd*/
  CString = cocos2d::CCString::getCString(v4); /*0x4802c6*/
  *(_OWORD *)Block = 0; /*0x4802cf*/
  v12 = 0; /*0x4802d7*/
  v6 = -1; /*0x4802dd*/
  do /*0x4802e7*/
    ++v6; /*0x4802e4*/
  while ( CString[v6] ); /*0x4802e7*/
  sub_3C230(Block); /*0x4802f6*/
  v7 = cocos2d::CCDictionary::objectForKey(*(_QWORD *)(a1 + 344), Block); /*0x48030e*/
  if ( *((_QWORD *)&v12 + 1) > 0xFu ) /*0x48031a*/
  {
    v8 = Block[0]; /*0x48031f*/
    if ( (unsigned __int64)(*((_QWORD *)&v12 + 1) + 1LL) >= 0x1000 ) /*0x48032e*/
    {
      v8 = (void *)*((_QWORD *)Block[0] - 1); /*0x480334*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F ) /*0x480343*/
        invoke_watson(0, 0, 0, 0, 0); /*0x480356*/
    }
    j_j_free(v8); /*0x480360*/
  }
  if ( v7 || (int)v2 <= 10000000 ) /*0x480370*/
    return (struct cocos2d::CCObject *)v7; /*0x48038d*/
  v9 = *(cocos2d::CCDictionary **)(a1 + 448); /*0x480372*/
  if ( v9 ) /*0x48037c*/
    return cocos2d::CCDictionary::objectForKey(v9, v2); /*0x480381*/
  else
    return 0; /*0x480389*/
}

// [19/27] Address: 0x480640
// Method: MusicDownloadManager::pathForSong
// Hidden C++ exception states: #wind=2
void *__fastcall MusicDownloadManager_pathForSong(__int64 a1, void *a2, int a3)
{
  __int64 v5; // rax
  void *v6; // rdx
  char *v7; // rdx
  _BYTE v9[32]; // [rsp+30h] [rbp-38h] BYREF

  sub_4804F0(a1, a2); /*0x48066c*/
  v5 = GameToolbox_intToString(v9, (unsigned int)a3); /*0x480680*/
  v6 = (void *)v5; /*0x480686*/
  if ( *(_QWORD *)(v5 + 24) > 0xFu ) /*0x48068e*/
    v6 = *(void **)v5; /*0x480690*/
  sub_43D80(a2, v6, *(_QWORD *)(v5 + 16)); /*0x48069a*/
  sub_3C310(v9); /*0x4806a5*/
  v7 = ".ogg"; /*0x4806b9*/
  if ( a3 <= 10000000 ) /*0x4806c0*/
    v7 = ".mp3"; /*0x4806c2*/
  sub_43D80(a2, v7, 4u); /*0x4806c9*/
  return a2; /*0x4806d1*/
}

// [20/27] Address: 0x480980
// Method: MusicDownloadManager::pathForSFX
// Hidden C++ exception states: #wind=2
void *__fastcall MusicDownloadManager_pathForSFX(__int64 a1, void *a2, unsigned int a3)
{
  __int64 v5; // rax
  void *v6; // rdx
  _BYTE v8[32]; // [rsp+30h] [rbp-38h] BYREF

  sub_480830(a1, a2); /*0x4809ac*/
  sub_43D80(a2, &unk_70802C, 1u); /*0x4809c9*/
  v5 = GameToolbox_intToString(v8, a3); /*0x4809d5*/
  v6 = (void *)v5; /*0x4809db*/
  if ( *(_QWORD *)(v5 + 24) > 0xFu ) /*0x4809e3*/
    v6 = *(void **)v5; /*0x4809e5*/
  sub_43D80(a2, v6, *(_QWORD *)(v5 + 16)); /*0x4809ef*/
  sub_3C310(v8); /*0x4809fa*/
  sub_43D80(a2, ".ogg", 4u); /*0x480a0f*/
  return a2; /*0x480a17*/
}

// [21/27] Address: 0x480a40
// Method: MusicDownloadManager::showTOS
// Hidden C++ exception states: #wind=2
__int64 __fastcall MusicDownloadManager_showTOS(__int64 a1, int a2)
{
  cocos2d::CCObject *v3; // rbx
  int v4; // eax
  __int128 v6; // [rsp+50h] [rbp-48h] BYREF
  __int64 v7; // [rsp+60h] [rbp-38h]
  __int64 v8; // [rsp+68h] [rbp-30h]
  _BYTE v9[40]; // [rsp+70h] [rbp-28h] BYREF
  void *v10; // [rsp+B0h] [rbp+18h]

  v6 = 0; /*0x480a58*/
  *(_QWORD *)&v6 = sub_3C460(1696); /*0x480a7c*/
  v7 = 1686; /*0x480a81*/
  v8 = 1695; /*0x480a8a*/
  strcpy(
    (char *)v6,
    "Important notification - Terms of use. RobTop Games provides a library of music and sound effects for creative use w"
    "ithin Geometry Dash. You are free to use these assets for creating and sharing levels within the game. However, redi"
    "stributing, selling, manipulating, or using these assets outside the game is prohibited. If you share game-related c"
    "ontent on social media or upload videos featuring custom music, please give credit to the respective artist. Regardi"
    "ng music from Newgrounds.com: Some custom songs are available via a third party website, Newgrounds.com. These songs"
    ", created by artists using Newgrounds.com, are under Creative Commons licensing terms accessible on Newgrounds.com. "
    "By downloading a song from Newgrounds, you accept these terms and any others designated by Newgrounds. RobTop Games "
    "is not the provider of songs from Newgrounds.com, nor a party to the licensing agreements, and does not store any au"
    "dio files downloaded from Newgrounds.com. You are responsible for the content you create using all music and sound e"
    "ffects provided. Ensure your creations adhere to the game's community guidelines and do not infringe on any rights. "
    "The availability of music and sound effects in Geometry Dash is subject to change. RobTop Games may add or remove co"
    "ntent from both the custom library and the Newgrounds.com selection without prior notice. We do not guarantee the co"
    "ntinuous availability or suitability of any music or sound effects in the game. We may update these terms at any tim"
    "e, with your continued use of Geometry Dash signifying acceptance of any changes. By clicking the 'I Accept' button,"
    " you acknowledge and approve of the above-stated terms of use.");
  v10 = operator new(0x298u); /*0x480ac6*/
  v3 = (cocos2d::CCObject *)FLAlertLayer_FLAlertLayer(v10); /*0x480ad6*/
  if ( v3 ) /*0x480adc*/
  {
    v4 = sub_3E4F0(v9, &v6); /*0x480aec*/
    if ( (unsigned __int8)GJRateLevelLayer_init( /*0x480b48*/
                            (_DWORD)v3,
                            a2,
                            (unsigned int)"Terms of Use",
                            v4,
                            (__int64)"Cancel",
                            (__int64)"I Accept",
                            1137180672,
                            1,
                            1133248512,
                            1065353216) )
    {
      cocos2d::CCObject::autorelease(v3); /*0x480b54*/
    }
    else
    {
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v3 + 8LL))(v3, 1); /*0x480b64*/
      v3 = 0; /*0x480b67*/
    }
  }
  sub_3C310(&v6); /*0x480b6e*/
  (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v3 + 64LL))(v3, 1); /*0x480b7e*/
  return (*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v3 + 1064LL))(v3); /*0x480b8d*/
}

// [22/27] Address: 0x487440
// Method: MusicDownloadManager::getCustomContentURL
// Hidden C++ exception states: #wind=4
double __fastcall MusicDownloadManager_getCustomContentURL(cocos2d::CCObject *a1)
{
  double result; // xmm0_8
  __int64 v3; // rcx
  __int64 v4; // rbx
  unsigned __int64 v5; // rdx
  void *v6; // r8
  __int64 v7; // rax
  __int64 v8; // rcx
  void *v9; // rcx
  const char *BasePostString; // rbx
  void *v11; // [rsp+30h] [rbp-29h]
  __int128 v12; // [rsp+38h] [rbp-21h] BYREF
  __int64 v13; // [rsp+48h] [rbp-11h]
  __int64 v14; // [rsp+50h] [rbp-9h]
  void **v15; // [rsp+58h] [rbp-1h]
  void **v16; // [rsp+60h] [rbp+7h]
  _QWORD v17[4]; // [rsp+68h] [rbp+Fh] BYREF
  void *Block[2]; // [rsp+88h] [rbp+2Fh] BYREF
  __int64 v19; // [rsp+98h] [rbp+3Fh]
  unsigned __int64 v20; // [rsp+A0h] [rbp+47h]

  Block[1] = algn_65 + 7; /*0x48746b*/
  v19 = 9; /*0x48746f*/
  v20 = 15; /*0x487477*/
  result = 2.280205957537912e243; /*0x48747f*/
  Block[0] = (void *)0x72755F635F746567LL; /*0x487487*/
  v4 = cocos2d::CCDictionary::objectForKey(*((_QWORD *)a1 + 41), Block); /*0x4874ab*/
  v5 = v20; /*0x4874ae*/
  if ( v20 > 0xF ) /*0x4874b6*/
  {
    v6 = Block[0]; /*0x4874bb*/
    if ( v20 + 1 >= 0x1000 ) /*0x4874c9*/
    {
      v6 = (void *)*((_QWORD *)Block[0] - 1); /*0x4874cf*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v6 - 8) > 0x1F ) /*0x4874de*/
        invoke_watson(0, 0, 0, 0, 0); /*0x4874f1*/
    }
    j_j_free(v6); /*0x4874fb*/
  }
  if ( !v4 ) /*0x487503*/
  {
    v7 = cocos2d::CCNode::create(v3, v5); /*0x487509*/
    Block[1] = algn_65 + 7; /*0x487512*/
    v19 = 9; /*0x487516*/
    v20 = 15; /*0x48751e*/
    Block[0] = (void *)0x72755F635F746567LL; /*0x48752e*/
    cocos2d::CCDictionary::setObject(*((_QWORD *)a1 + 41), v7, Block); /*0x48754e*/
    if ( v20 > 0xF ) /*0x48755d*/
    {
      v9 = Block[0]; /*0x487562*/
      if ( v20 + 1 >= 0x1000 ) /*0x487570*/
      {
        v9 = (void *)*((_QWORD *)Block[0] - 1); /*0x487576*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v9 - 8) > 0x1F ) /*0x487585*/
          invoke_watson(0, 0, 0, 0, 0); /*0x487598*/
      }
      j_j_free(v9); /*0x48759f*/
    }
    v15 = Block; /*0x4875a8*/
    v16 = (void **)v17; /*0x4875b0*/
    Block[1] = algn_65 + 7; /*0x4875b7*/
    v19 = 9; /*0x4875bb*/
    v20 = 15; /*0x4875c3*/
    Block[0] = (void *)0x72755F635F746567LL; /*0x4875d3*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x4875ee*/
    {
      v11 = operator new(0x690u); /*0x4875fa*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v11); /*0x487607*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x487618*/
    }
    BasePostString = (const char *)GameLevelManager_getBasePostString(v8, v17); /*0x487623*/
    v12 = 0; /*0x487629*/
    *(_QWORD *)&v12 = sub_3C460(64); /*0x487644*/
    v13 = 58; /*0x487648*/
    v14 = 63; /*0x487650*/
    strcpy((char *)v12, "https://www.boomlings.com/database/getCustomContentURL.php"); /*0x48765f*/
    return MusicDownloadManager_ProcessHttpRequest(a1, (__int64)&v12, BasePostString, (__int64)Block, 65); /*0x4876aa*/
  }
  return result; /*0x4876af*/
}

// [23/27] Address: 0x488240
// Method: MusicDownloadManager::downloadCustomSong
// Hidden C++ exception states: #wind=4
double __fastcall MusicDownloadManager_downloadCustomSong(cocos2d::CCObject *a1, unsigned int a2)
{
  cocos2d::CCString *v4; // rax
  const char *CString; // r12
  void **v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  void **v10; // r15
  char *v11; // rsi
  unsigned __int64 v12; // r13
  __int64 v13; // rbx
  unsigned __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rax
  cocos2d::extension::CCHttpRequest *Request; // rax
  char *v18; // rax
  double result; // xmm0_8
  __int128 v20; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v21; // [rsp+40h] [rbp-C0h]
  __int64 v22; // [rsp+48h] [rbp-B8h]
  _BYTE *v23; // [rsp+50h] [rbp-B0h]
  _BYTE v24[32]; // [rsp+60h] [rbp-A0h] BYREF
  char v25[32]; // [rsp+80h] [rbp-80h] BYREF
  void *Src[2]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v27; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v28; // [rsp+B8h] [rbp-48h]
  void *v29[4]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v30[32]; // [rsp+E0h] [rbp-20h] BYREF

  if ( *((_QWORD *)a1 + 48) ) /*0x48826f*/
  {
    v4 = cocos2d::CCString::createWithFormat("d_%i", a2); /*0x488284*/
    CString = cocos2d::CCString::getCString(v4); /*0x488293*/
    if ( !sub_3B560(a1, CString) ) /*0x48829c*/
    {
      MusicDownloadManager_downloadSongStarted((__int64)a1, a2); /*0x4882af*/
      GameToolbox_intToString(v29, a2); /*0x4882ba*/
      Src[1] = 0; /*0x4882c3*/
      v27 = 7; /*0x4882c7*/
      v28 = 15; /*0x4882cf*/
      Src[0] = (void *)0x2F636973756D2FLL; /*0x4882de*/
      v6 = v29; /*0x4882fa*/
      if ( v29[3] > (char *)&loc_D + 2 ) /*0x488303*/
        v6 = (void **)v29[0]; /*0x488303*/
      sub_43D80(Src, v6, (size_t)v29[2]); /*0x488310*/
      sub_43D80(Src, ".ogg", 4u); /*0x488326*/
      v20 = 0; /*0x48832e*/
      v21 = 0; /*0x488335*/
      v22 = 0; /*0x48833a*/
      v10 = Src; /*0x48833f*/
      v11 = (char *)Src[0]; /*0x488343*/
      v12 = v28; /*0x488347*/
      if ( v28 > 0xF ) /*0x48834f*/
        v10 = (void **)Src[0]; /*0x48834f*/
      v13 = 0x7FFFFFFFFFFFFFFFLL; /*0x488353*/
      v14 = v27; /*0x48835d*/
      if ( v27 > 0x7FFFFFFFFFFFFFFFLL ) /*0x488364*/
        sub_8D90(v8, v7, v9); /*0x4884b8*/
      if ( v27 > 0xF ) /*0x48836e*/
      {
        if ( (v27 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x488393*/
        {
          v13 = v27 | 0xF; /*0x488395*/
          if ( (v27 | 0xF) < 0x16 ) /*0x4883a0*/
            v13 = 22; /*0x4883a0*/
        }
        *(_QWORD *)&v20 = sub_3C460(v13 + 1); /*0x4883ad*/
        v21 = v14; /*0x4883b2*/
        v22 = v13; /*0x4883b7*/
        memcpy((void *)v20, v10, v14 + 1); /*0x4883c6*/
      }
      else
      {
        v21 = v27; /*0x488370*/
        v22 = 15; /*0x488375*/
        v20 = *(_OWORD *)v10; /*0x488382*/
      }
      MusicDownloadManager_generateCustomContentURL(a1, v30, &v20); /*0x4883d7*/
      v23 = v24; /*0x4883e2*/
      v15 = sub_3E4F0(v24, v29); /*0x4883f5*/
      v16 = sub_3E4F0(v25, v30); /*0x488400*/
      Request = MusicDownloadManager_ProcessHttpGetRequest( /*0x488420*/
                  a1,
                  v16,
                  v15,
                  (__int64)MusicDownloadManager_onDownloadSongCompleted,
                  0,
                  0);
      MusicDownloadManager_addDLToActive((__int64)a1, (__int64)CString, (__int64)Request); /*0x48842e*/
      sub_3C310(v30); /*0x488438*/
      if ( v12 > 0xF ) /*0x488442*/
      {
        v18 = v11; /*0x488448*/
        if ( v12 + 1 >= 0x1000 ) /*0x488452*/
        {
          v11 = (char *)*((_QWORD *)v11 - 1); /*0x488458*/
          if ( (unsigned __int64)(v18 - v11 - 8) > 0x1F ) /*0x488467*/
            invoke_watson(0, 0, 0, 0, 0); /*0x488478*/
        }
        j_j_free(v11); /*0x488482*/
      }
      return sub_3C310(v29); /*0x48848c*/
    }
  }
  return result; /*0x488491*/
}

// [24/27] Address: 0x48ae40
// Method: MusicDownloadManager::downloadSFX
// Hidden C++ exception states: #wind=4
double __fastcall MusicDownloadManager_downloadSFX(cocos2d::CCObject *a1, unsigned int a2)
{
  cocos2d::CCString *v4; // rax
  const char *CString; // r12
  void **v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  void **v10; // r15
  char *v11; // rsi
  unsigned __int64 v12; // r13
  __int64 v13; // rbx
  unsigned __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rax
  cocos2d::extension::CCHttpRequest *Request; // rax
  char *v18; // rax
  double result; // xmm0_8
  __int128 v20; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v21; // [rsp+40h] [rbp-C0h]
  __int64 v22; // [rsp+48h] [rbp-B8h]
  _BYTE *v23; // [rsp+50h] [rbp-B0h]
  _BYTE v24[32]; // [rsp+60h] [rbp-A0h] BYREF
  char v25[32]; // [rsp+80h] [rbp-80h] BYREF
  void *Src[2]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v27; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v28; // [rsp+B8h] [rbp-48h]
  void *v29[4]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v30[32]; // [rsp+E0h] [rbp-20h] BYREF

  if ( *((_QWORD *)a1 + 48) ) /*0x48ae6f*/
  {
    v4 = cocos2d::CCString::createWithFormat("sfx_%i", a2); /*0x48ae84*/
    CString = cocos2d::CCString::getCString(v4); /*0x48ae93*/
    if ( !sub_3B560(a1, CString) ) /*0x48ae9c*/
    {
      GameToolbox_intToString(v29, a2); /*0x48aeb0*/
      *(_OWORD *)Src = 0; /*0x48aeb9*/
      v27 = 6; /*0x48aebd*/
      v28 = 15; /*0x48aec5*/
      strcpy((char *)Src, "/sfx/s"); /*0x48aed3*/
      v6 = v29; /*0x48aee5*/
      if ( v29[3] > (char *)&loc_D + 2 ) /*0x48aeee*/
        v6 = (void **)v29[0]; /*0x48aeee*/
      sub_43D80(Src, v6, (size_t)v29[2]); /*0x48aefb*/
      sub_43D80(Src, ".ogg", 4u); /*0x48af11*/
      v20 = 0; /*0x48af19*/
      v21 = 0; /*0x48af20*/
      v22 = 0; /*0x48af25*/
      v10 = Src; /*0x48af2a*/
      v11 = (char *)Src[0]; /*0x48af2e*/
      v12 = v28; /*0x48af32*/
      if ( v28 > 0xF ) /*0x48af3a*/
        v10 = (void **)Src[0]; /*0x48af3a*/
      v13 = 0x7FFFFFFFFFFFFFFFLL; /*0x48af3e*/
      v14 = v27; /*0x48af48*/
      if ( v27 > 0x7FFFFFFFFFFFFFFFLL ) /*0x48af4f*/
        sub_8D90(v8, v7, v9); /*0x48b0ad*/
      if ( v27 > 0xF ) /*0x48af59*/
      {
        if ( (v27 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x48af7e*/
        {
          v13 = v27 | 0xF; /*0x48af80*/
          if ( (v27 | 0xF) < 0x16 ) /*0x48af8b*/
            v13 = 22; /*0x48af8b*/
        }
        *(_QWORD *)&v20 = sub_3C460(v13 + 1); /*0x48af98*/
        v21 = v14; /*0x48af9d*/
        v22 = v13; /*0x48afa2*/
        memcpy((void *)v20, v10, v14 + 1); /*0x48afb1*/
      }
      else
      {
        v21 = v27; /*0x48af5b*/
        v22 = 15; /*0x48af60*/
        v20 = *(_OWORD *)v10; /*0x48af6d*/
      }
      MusicDownloadManager_generateCustomContentURL(a1, v30, &v20); /*0x48afc2*/
      v23 = v24; /*0x48afcd*/
      v15 = sub_3E4F0(v24, v29); /*0x48afe0*/
      v16 = sub_3E4F0(v25, v30); /*0x48afeb*/
      Request = MusicDownloadManager_ProcessHttpGetRequest(a1, v16, v15, (__int64)sub_48B0C0, 5, 10); /*0x48b011*/
      MusicDownloadManager_addDLToActive((__int64)a1, (__int64)CString, (__int64)Request); /*0x48b01f*/
      sub_3C310(v30); /*0x48b029*/
      if ( v12 > 0xF ) /*0x48b033*/
      {
        v18 = v11; /*0x48b039*/
        if ( v12 + 1 >= 0x1000 ) /*0x48b043*/
        {
          v11 = (char *)*((_QWORD *)v11 - 1); /*0x48b049*/
          if ( (unsigned __int64)(v18 - v11 - 8) > 0x1F ) /*0x48b058*/
            invoke_watson(0, 0, 0, 0, 0); /*0x48b06d*/
        }
        j_j_free(v11); /*0x48b077*/
      }
      return sub_3C310(v29); /*0x48b081*/
    }
  }
  return result; /*0x48b086*/
}

// [25/27] Address: 0x48ba40
// Method: MusicDownloadManager::parseSFXLibrary
// Hidden C++ exception states: #wind=16
double __fastcall MusicDownloadManager_parseSFXLibrary(unsigned __int64 a1)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _QWORD *v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rbx
  void *v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  cocos2d::CCObject *v10; // rcx
  cocos2d::CCObject *v11; // rcx
  cocos2d::CCObject *v12; // rax
  __int64 v13; // rcx
  cocos2d::CCObject *v14; // rax
  __int64 v15; // rsi
  char *v16; // rdi
  const char *v17; // rbx
  int v18; // ebx
  char *v19; // rdx
  __int64 v20; // r8
  char *v21; // rcx
  int v22; // r14d
  char *v23; // rcx
  unsigned int v24; // r13d
  char *v25; // rcx
  int v26; // r12d
  char *v27; // rcx
  __int64 v28; // rdx
  char *v29; // rcx
  __int64 v30; // r8
  int v31; // r15d
  const char *v32; // rcx
  int v33; // eax
  unsigned __int64 v34; // rdi
  char *v35; // rbx
  char **v36; // rsi
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // rcx
  __int64 v39; // rsi
  char *v40; // rcx
  unsigned __int64 v41; // rbx
  int *v42; // rbx
  struct cocos2d::CCObject *v43; // rax
  unsigned __int64 v44; // rbx
  int *v45; // rbx
  struct cocos2d::CCObject *v46; // rax
  int v47; // r14d
  __int64 v48; // rcx
  __int64 v49; // rsi
  char *v50; // rdi
  char *v51; // rbx
  __int64 v52; // rdi
  __int64 v53; // rax
  cocos2d::CCArray *v54; // rbx
  struct cocos2d::CCObject *v55; // rax
  cocos2d::CCObject *v56; // rcx
  cocos2d::CCObject *v57; // rax
  __int64 v58; // rax
  __int64 v59; // rbx
  unsigned __int64 v60; // r14
  __int64 v61; // r12
  void *v62; // rcx
  char *v63; // rdi
  char *v64; // rbx
  char *v65; // rax
  char *v66; // rbx
  char *v67; // rdi
  char *v68; // rax
  char *v69; // rcx
  int v70; // esi
  char *v71; // rcx
  int v72; // edi
  int v73; // ebx
  void *v74; // r15
  __int64 v75; // rcx
  cocos2d::CCObject *v76; // rax
  unsigned __int64 v77; // r14
  __int64 v78; // rcx
  __int64 v79; // rsi
  char *v80; // rdi
  char *v81; // rbx
  __int64 v82; // rdi
  __int64 v83; // rax
  cocos2d::CCArray *v84; // rbx
  struct cocos2d::CCObject *v85; // rax
  char *v86; // rax
  char *v87; // rdi
  char *v88; // rax
  char *String[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v91; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v92; // [rsp+48h] [rbp-B8h]
  __int128 v93; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v94; // [rsp+60h] [rbp-A0h]
  __int64 v95; // [rsp+68h] [rbp-98h]
  unsigned int v96; // [rsp+70h] [rbp-90h] BYREF
  __int128 *v97; // [rsp+78h] [rbp-88h]
  void *v98[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v99; // [rsp+90h] [rbp-70h]
  _BYTE *v100; // [rsp+98h] [rbp-68h]
  unsigned int v101; // [rsp+A0h] [rbp-60h]
  char *v102[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v103; // [rsp+B8h] [rbp-48h]
  __int128 v104; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v105; // [rsp+D0h] [rbp-30h]
  void *v106[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v107; // [rsp+E8h] [rbp-18h]
  __int128 v108; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v109; // [rsp+100h] [rbp+0h]
  __int128 v110; // [rsp+108h] [rbp+8h] BYREF
  __int64 v111; // [rsp+118h] [rbp+18h]
  _BYTE v112[32]; // [rsp+120h] [rbp+20h] BYREF
  char v113[32]; // [rsp+140h] [rbp+40h] BYREF
  char *v114[2]; // [rsp+160h] [rbp+60h] BYREF
  unsigned __int64 v115; // [rsp+170h] [rbp+70h]
  unsigned __int64 v116; // [rsp+178h] [rbp+78h]
  void *Block[2]; // [rsp+180h] [rbp+80h] BYREF
  __int128 v118; // [rsp+190h] [rbp+90h]
  __int128 v119; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v120; // [rsp+1B0h] [rbp+B0h]
  _QWORD Src[4]; // [rsp+1C0h] [rbp+C0h] BYREF

  v1 = a1; /*0x48ba78*/
  v92 = a1; /*0x48ba7b*/
  sub_480830(a1, Src); /*0x48ba8d*/
  sub_43D80(Src, "sfxlibrary.dat", 0xEu); /*0x48baa7*/
  v96 = 0; /*0x48baac*/
  v2 = cocos2d::CCFileUtils::sharedFileUtils(); /*0x48bab1*/
  v3 = Src; /*0x48bab7*/
  if ( Src[3] > 0xFu ) /*0x48bac6*/
    v3 = (_QWORD *)Src[0]; /*0x48bac6*/
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD *, const char *, unsigned int *))(*(_QWORD *)v2 + 24LL))( /*0x48bae4*/
         v2,
         v3,
         "r",
         &v96);
  *(_OWORD *)Block = 0; /*0x48baea*/
  *(_QWORD *)&v118 = 0; /*0x48baf1*/
  *((_QWORD *)&v118 + 1) = 15; /*0x48baf8*/
  LOBYTE(Block[0]) = 0; /*0x48bb03*/
  if ( v4 ) /*0x48bb0d*/
  {
    v5 = cocos2d::ZipUtils::decompressString2(&v119, v4, 0, v96, 11); /*0x48bb33*/
    if ( Block != (void **)v5 ) /*0x48bb40*/
    {
      if ( *((_QWORD *)&v118 + 1) > 0xFu ) /*0x48bb51*/
      {
        v6 = Block[0]; /*0x48bb56*/
        if ( (unsigned __int64)(*((_QWORD *)&v118 + 1) + 1LL) >= 0x1000 ) /*0x48bb67*/
        {
          v6 = (void *)*((_QWORD *)Block[0] - 1); /*0x48bb6d*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v6 - 8) > 0x1F ) /*0x48bb7c*/
            invoke_watson(0, 0, 0, 0, 0); /*0x48bb8d*/
        }
        j_j_free(v6); /*0x48bb94*/
      }
      *(_QWORD *)&v118 = 0; /*0x48bb99*/
      *((_QWORD *)&v118 + 1) = 15; /*0x48bba0*/
      LOBYTE(Block[0]) = 0; /*0x48bbab*/
      *(_OWORD *)Block = *(_OWORD *)v5; /*0x48bbb5*/
      v118 = *(_OWORD *)(v5 + 16); /*0x48bbc0*/
      *(_QWORD *)(v5 + 16) = 0; /*0x48bbc7*/
      *(_QWORD *)(v5 + 24) = 15; /*0x48bbcb*/
      *(_BYTE *)v5 = 0; /*0x48bbd3*/
    }
    sub_3C310(&v119); /*0x48bbdd*/
    if ( (_QWORD)v118 ) /*0x48bbea*/
    {
      v108 = 0; /*0x48bbf3*/
      v109 = 0; /*0x48bbf8*/
      sub_1C2580(Block, &word_70806C, &v108); /*0x48bc0e*/
      if ( (unsigned __int64)((__int64)(*((_QWORD *)&v108 + 1) - v108) >> 5) >= 2 ) /*0x48bc26*/
      {
        v104 = 0; /*0x48bc2f*/
        v105 = 0; /*0x48bc34*/
        sub_1C2580(v108, &unk_74CF98, &v104); /*0x48bc43*/
        v7 = (_QWORD *)v108; /*0x48bc48*/
        *(_QWORD *)(v108 + 16) = 0; /*0x48bc4c*/
        if ( v7[3] > 0xFu ) /*0x48bc55*/
          v7 = (_QWORD *)*v7; /*0x48bc57*/
        *(_BYTE *)v7 = 0; /*0x48bc5a*/
        *(_OWORD *)String = 0; /*0x48bc60*/
        v91 = 0; /*0x48bc66*/
        v8 = *((_QWORD *)&v104 + 1); /*0x48bc6b*/
        v9 = v104; /*0x48bc72*/
        if ( (__int64)(*((_QWORD *)&v104 + 1) - v104) >> 5 ) /*0x48bc79*/
        {
          v10 = *(cocos2d::CCObject **)(v1 + 408); /*0x48bc82*/
          if ( v10 ) /*0x48bc8c*/
          {
            cocos2d::CCObject::release(v10); /*0x48bc8e*/
            v11 = *(cocos2d::CCObject **)(v1 + 416); /*0x48bc94*/
            if ( v11 ) /*0x48bc9e*/
              cocos2d::CCObject::release(v11); /*0x48bca0*/
          }
          v12 = (cocos2d::CCObject *)cocos2d::CCDictionary::create(); /*0x48bca6*/
          *(_QWORD *)(v1 + 408) = v12; /*0x48bcac*/
          cocos2d::CCObject::retain(v12); /*0x48bcb6*/
          v14 = (cocos2d::CCObject *)cocos2d::CCArray::create(v13); /*0x48bcbc*/
          *(_QWORD *)(v1 + 416) = v14; /*0x48bcc2*/
          cocos2d::CCObject::retain(v14); /*0x48bccc*/
          *(_DWORD *)(v1 + 436) = 0; /*0x48bcd2*/
          v8 = *((_QWORD *)&v104 + 1); /*0x48bcd9*/
          v9 = v104; /*0x48bcdd*/
        }
        LODWORD(v100) = 0; /*0x48bce1*/
        if ( (v8 - v9) >> 5 ) /*0x48bce8*/
        {
          v15 = 0; /*0x48bcf5*/
          v16 = String[1]; /*0x48bcf8*/
          v17 = String[0]; /*0x48bcfd*/
          do /*0x48bd02*/
          {
            if ( v17 != v16 ) /*0x48bd05*/
            {
              do /*0x48bd16*/
              {
                sub_3C310(v17); /*0x48bd0a*/
                v17 += 32; /*0x48bd0f*/
              }
              while ( v17 != v16 ); /*0x48bd16*/
              String[1] = String[0]; /*0x48bd1d*/
              v9 = v104; /*0x48bd22*/
            }
            sub_1C2580(32 * v15 + v9, &unk_709CE8, String); /*0x48bd39*/
            v16 = String[1]; /*0x48bd3e*/
            v17 = String[0]; /*0x48bd46*/
            if ( (unsigned __int64)((String[1] - String[0]) >> 5) < 6 ) /*0x48bd56*/
              goto LABEL_88; /*0x48bd56*/
            if ( *((_QWORD *)String[0] + 3) > 0xFu ) /*0x48bd61*/
              v17 = *(const char **)String[0]; /*0x48bd63*/
            v18 = atoi(v17); /*0x48bd6f*/
            v101 = v18; /*0x48bd71*/
            v19 = String[0] + 32; /*0x48bd79*/
            if ( *((_QWORD *)String[0] + 7) > 0xFu ) /*0x48bd82*/
              v19 = *(char **)v19; /*0x48bd84*/
            *(_OWORD *)v114 = 0; /*0x48bd8a*/
            v115 = 0; /*0x48bd8e*/
            v116 = 0; /*0x48bd92*/
            v20 = -1; /*0x48bd96*/
            do /*0x48bda3*/
              ++v20; /*0x48bda0*/
            while ( v19[v20] ); /*0x48bda3*/
            sub_3C230(v114); /*0x48bdae*/
            v21 = String[0] + 64; /*0x48bdb9*/
            if ( *((_QWORD *)String[0] + 11) > 0xFu ) /*0x48bdc2*/
              v21 = *(char **)v21; /*0x48bdc4*/
            v22 = atoi(v21); /*0x48bdcd*/
            v23 = String[0] + 96; /*0x48bdd5*/
            if ( *((_QWORD *)String[0] + 15) > 0xFu ) /*0x48bdde*/
              v23 = *(char **)v23; /*0x48bde0*/
            v24 = atoi(v23); /*0x48bde9*/
            v25 = String[0] + 128; /*0x48bdf1*/
            if ( *((_QWORD *)String[0] + 19) > 0xFu ) /*0x48bdfa*/
              v25 = *(char **)v25; /*0x48bdfc*/
            v26 = atoi(v25); /*0x48be05*/
            v27 = String[0] + 160; /*0x48be0d*/
            if ( *((_QWORD *)String[0] + 23) > 0xFu ) /*0x48be19*/
              v27 = *(char **)v27; /*0x48be1b*/
            v31 = atoi(v27); /*0x48be24*/
            if ( v18 == 1 ) /*0x48be2a*/
            {
              v32 = (const char *)v114; /*0x48be2c*/
              if ( v116 > 0xF ) /*0x48be35*/
                v32 = v114[0]; /*0x48be35*/
              v33 = atoi(v32); /*0x48be3a*/
              *(_DWORD *)(v92 + 432) = v33; /*0x48be45*/
              v34 = v116; /*0x48be4b*/
              if ( v116 < 4 ) /*0x48be53*/
              {
                v38 = v116 >> 1; /*0x48bee7*/
                if ( v116 <= 0x7FFFFFFFFFFFFFFFLL - (v116 >> 1) ) /*0x48befd*/
                {
                  v39 = 15; /*0x48bf08*/
                  if ( v116 + v38 > 0xF ) /*0x48bf10*/
                    v39 = v116 + v38; /*0x48bf10*/
                }
                else
                {
                  v39 = 0x7FFFFFFFFFFFFFFFLL; /*0x48beff*/
                }
                v35 = (char *)sub_3C460(v39 + 1); /*0x48bf1d*/
                v115 = 4; /*0x48bf20*/
                v116 = v39; /*0x48bf28*/
                v29 = (char *)1953460050; /*0x48bf2c*/
                strcpy(v35, "Root"); /*0x48bf32*/
                if ( v34 > 0xF ) /*0x48bf3c*/
                {
                  v40 = v114[0]; /*0x48bf42*/
                  if ( v34 + 1 >= 0x1000 ) /*0x48bf50*/
                  {
                    v40 = (char *)*((_QWORD *)v114[0] - 1); /*0x48bf56*/
                    if ( (unsigned __int64)(v114[0] - v40 - 8) > 0x1F ) /*0x48bf65*/
                      invoke_watson(0, 0, 0, 0, 0); /*0x48c320*/
                  }
                  j_j_free(v40); /*0x48bf6b*/
                }
                v114[0] = v35; /*0x48bf70*/
                goto LABEL_48; /*0x48bf74*/
              }
              v29 = (char *)v114; /*0x48be59*/
              if ( v116 > 0xF ) /*0x48be61*/
                v29 = v114[0]; /*0x48be61*/
              v115 = 4; /*0x48be66*/
              strcpy(v29, "Root"); /*0x48be74*/
            }
            v35 = v114[0]; /*0x48be7a*/
LABEL_48:
            v36 = v114; /*0x48be7e*/
            v37 = v115; /*0x48be85*/
            v93 = 0; /*0x48be89*/
            if ( v22 ) /*0x48be9b*/
            {
              v94 = 0; /*0x48c037*/
              v95 = 0; /*0x48c03c*/
              if ( v116 > 0xF ) /*0x48c046*/
                v36 = (char **)v35; /*0x48c046*/
              if ( v115 > 0x7FFFFFFFFFFFFFFFLL ) /*0x48c04d*/
                sub_8D90(v29, v28, v30); /*0x48c8b9*/
              if ( v115 > 0xF ) /*0x48c057*/
              {
                v44 = v115 | 0xF; /*0x48c074*/
                if ( (v115 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x48c07b*/
                {
                  if ( v44 < 0x16 ) /*0x48c08b*/
                    v44 = 22; /*0x48c08b*/
                }
                else
                {
                  v44 = 0x7FFFFFFFFFFFFFFFLL; /*0x48c07d*/
                }
                *(_QWORD *)&v93 = sub_3C460(v44 + 1); /*0x48c098*/
                v94 = v37; /*0x48c09d*/
                v95 = v44; /*0x48c0a2*/
                memcpy((void *)v93, v36, v37 + 1); /*0x48c0b1*/
              }
              else
              {
                v94 = v115; /*0x48c059*/
                v95 = 15; /*0x48c05e*/
                v93 = *(_OWORD *)v36; /*0x48c06a*/
              }
              v45 = (int *)sub_4936B0(v101, &v93, v24); /*0x48c0c6*/
              v1 = v92; /*0x48c0d0*/
              cocos2d::CCDictionary::setObject( /*0x48c0dc*/
                *(cocos2d::CCDictionary **)(v92 + 408),
                (struct cocos2d::CCObject *)v45,
                v45[14]);
              if ( v45[15] > 0 ) /*0x48c0e8*/
              {
                v46 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(v1 + 408), v45[15]); /*0x48c0f4*/
                if ( v46 ) /*0x48c0fd*/
                {
                  if ( *((_BYTE *)v46 + 72) ) /*0x48c0ff*/
                    cocos2d::CCArray::addObject(*((cocos2d::CCArray **)v46 + 22), (struct cocos2d::CCObject *)v45); /*0x48c10f*/
                }
              }
            }
            else
            {
              v94 = 0; /*0x48bea3*/
              v95 = 0; /*0x48bea8*/
              if ( v116 > 0xF ) /*0x48beb2*/
                v36 = (char **)v35; /*0x48beb2*/
              if ( v115 > 0x7FFFFFFFFFFFFFFFLL ) /*0x48beb9*/
                sub_8D90(v29, v28, v30); /*0x48c8bf*/
              if ( v115 > 0xF ) /*0x48bec3*/
              {
                v41 = v115 | 0xF; /*0x48bf7c*/
                if ( (v115 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x48bf83*/
                {
                  if ( v41 < 0x16 ) /*0x48bf93*/
                    v41 = 22; /*0x48bf93*/
                }
                else
                {
                  v41 = 0x7FFFFFFFFFFFFFFFLL; /*0x48bf85*/
                }
                *(_QWORD *)&v93 = sub_3C460(v41 + 1); /*0x48bfa0*/
                v94 = v37; /*0x48bfa5*/
                v95 = v41; /*0x48bfaa*/
                memcpy((void *)v93, v36, v37 + 1); /*0x48bfb9*/
              }
              else
              {
                v94 = v115; /*0x48bec9*/
                v95 = 15; /*0x48bece*/
                v93 = *(_OWORD *)v36; /*0x48beda*/
              }
              v42 = (int *)sub_4934E0(v101, (unsigned int)&v93, v24, v26, v31); /*0x48bfd6*/
              v1 = v92; /*0x48bfe0*/
              cocos2d::CCDictionary::setObject( /*0x48bfec*/
                *(cocos2d::CCDictionary **)(v92 + 408),
                (struct cocos2d::CCObject *)v42,
                v42[14]);
              if ( v42[15] > 0 ) /*0x48bff8*/
              {
                v43 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(v1 + 408), v42[15]); /*0x48c004*/
                if ( v43 ) /*0x48c00d*/
                {
                  if ( *((_BYTE *)v43 + 72) ) /*0x48c00f*/
                    cocos2d::CCArray::addObject(*((cocos2d::CCArray **)v43 + 22), (struct cocos2d::CCObject *)v42); /*0x48c01f*/
                }
              }
              ++*(_DWORD *)(v1 + 436); /*0x48c025*/
            }
            sub_3C310(v114); /*0x48c11a*/
            v16 = String[1]; /*0x48c11f*/
            v17 = String[0]; /*0x48c124*/
LABEL_88:
            LODWORD(v100) = (_DWORD)v100 + 1; /*0x48c129*/
            v15 = (int)v100; /*0x48c134*/
            v9 = v104; /*0x48c13b*/
          }
          while ( (int)v100 < (unsigned __int64)((__int64)(*((_QWORD *)&v104 + 1) - v104) >> 5) ); /*0x48bd02*/
        }
        v110 = 0; /*0x48c14f*/
        v111 = 0; /*0x48c157*/
        sub_1C2580(v108 + 32, &unk_74CF98, &v110); /*0x48c16e*/
        v47 = 0; /*0x48c173*/
        v48 = v110; /*0x48c17a*/
        if ( (__int64)(*((_QWORD *)&v110 + 1) - v110) >> 5 ) /*0x48c181*/
        {
          v49 = 0; /*0x48c18e*/
          v50 = String[1]; /*0x48c191*/
          v51 = String[0]; /*0x48c196*/
          do /*0x48c263*/
          {
            if ( v51 != v50 ) /*0x48c1a3*/
            {
              do /*0x48c1b4*/
              {
                sub_3C310(v51); /*0x48c1a8*/
                v51 += 32; /*0x48c1ad*/
              }
              while ( v51 != v50 ); /*0x48c1b4*/
              String[1] = String[0]; /*0x48c1bb*/
              v48 = v110; /*0x48c1c0*/
            }
            sub_1C2580(32 * v49 + v48, &unk_709CE8, String); /*0x48c1d7*/
            v50 = String[1]; /*0x48c1dc*/
            v51 = String[0]; /*0x48c1e4*/
            if ( (unsigned __int64)((String[1] - String[0]) >> 5) >= 2 ) /*0x48c1f4*/
            {
              v97 = &v119; /*0x48c1fd*/
              v52 = sub_3E4F0(&v119, String[0] + 32); /*0x48c212*/
              v53 = sub_3E4F0(v114, String[0]); /*0x48c21e*/
              v54 = *(cocos2d::CCArray **)(v1 + 416); /*0x48c223*/
              v55 = (struct cocos2d::CCObject *)CCURLObject_create(v53, v52); /*0x48c230*/
              cocos2d::CCArray::addObject(v54, v55); /*0x48c23b*/
              v50 = String[1]; /*0x48c241*/
              v51 = String[0]; /*0x48c246*/
            }
            v49 = ++v47; /*0x48c24e*/
            v48 = v110; /*0x48c255*/
          }
          while ( v47 < (unsigned __int64)((__int64)(*((_QWORD *)&v110 + 1) - v110) >> 5) ); /*0x48c263*/
        }
        v56 = *(cocos2d::CCObject **)(v1 + 424); /*0x48c269*/
        if ( v56 ) /*0x48c273*/
          cocos2d::CCObject::release(v56); /*0x48c275*/
        v57 = (cocos2d::CCObject *)cocos2d::CCArray::create(v56); /*0x48c27b*/
        *(_QWORD *)(v1 + 424) = v57; /*0x48c281*/
        cocos2d::CCObject::retain(v57); /*0x48c28b*/
        if ( (unsigned __int64)((__int64)(*((_QWORD *)&v108 + 1) - v108) >> 5) >= 3 && *(_QWORD *)(v108 + 80) ) /*0x48c2aa*/
        {
          v58 = sub_3E4F0(v114, v108 + 64); /*0x48c2bd*/
          v59 = v58; /*0x48c2c2*/
          v97 = (__int128 *)v58; /*0x48c2c5*/
          if ( *(_QWORD *)(v58 + 16) ) /*0x48c2ca*/
          {
            cocos2d::ZipUtils::base64URLDecode(&v119, v58); /*0x48c331*/
          }
          else
          {
            v119 = 0; /*0x48c2d4*/
            v120 = 0u; /*0x48c2db*/
            v119 = *(_OWORD *)v58; /*0x48c2ec*/
            v120 = *(_OWORD *)(v58 + 16); /*0x48c2f7*/
            *(_QWORD *)(v58 + 16) = 0; /*0x48c2fe*/
            *(_QWORD *)(v58 + 24) = 15; /*0x48c302*/
            *(_BYTE *)v58 = 0; /*0x48c30a*/
          }
          sub_3C310(v59); /*0x48c33b*/
          if ( (_QWORD)v120 ) /*0x48c349*/
          {
            *(_OWORD *)v114 = 0; /*0x48c352*/
            v115 = 0; /*0x48c357*/
            sub_1C2580(&v119, "$", v114); /*0x48c36d*/
            v60 = 0; /*0x48c372*/
            v92 = 0; /*0x48c375*/
            if ( (v114[1] - v114[0]) >> 5 ) /*0x48c382*/
            {
              v61 = 0; /*0x48c38f*/
              do /*0x48c392*/
              {
                if ( *(_QWORD *)&v114[0][v61 + 16] ) /*0x48c399*/
                {
                  *(_OWORD *)v98 = 0; /*0x48c3a7*/
                  v99 = 0; /*0x48c3ac*/
                  sub_1C2580(&v114[0][v61], &word_7222A8, v98); /*0x48c3bb*/
                  v62 = v98[0]; /*0x48c3c0*/
                  if ( v98[0] == v98[1] ) /*0x48c3c8*/
                  {
                    if ( v98[0] ) /*0x48c3cd*/
                    {
                      if ( ((v99 - (unsigned __int64)v98[0]) & 0xFFFFFFFFFFFFFFE0uLL) >= 0x1000 ) /*0x48c3e8*/
                      {
                        v62 = (void *)*((_QWORD *)v98[0] - 1); /*0x48c3ee*/
                        if ( (unsigned __int64)((char *)v98[0] - (char *)v62 - 8) > 0x1F ) /*0x48c3fd*/
                          goto LABEL_167; /*0x48c3fd*/
                      }
                      j_j_free(v62); /*0x48c403*/
                    }
                  }
                  else
                  {
                    *(_OWORD *)v102 = 0; /*0x48c410*/
                    v103 = 0; /*0x48c415*/
                    sub_1C2580(v98[0], &unk_709CE8, v102); /*0x48c424*/
                    v63 = v102[1]; /*0x48c429*/
                    v64 = v102[0]; /*0x48c430*/
                    if ( (unsigned __int64)((v102[1] - v102[0]) >> 5) >= 3 ) /*0x48c43f*/
                    {
                      if ( *((_QWORD *)v102[0] + 3) > 0xFu ) /*0x48c51a*/
                        v64 = *(char **)v102[0]; /*0x48c51c*/
                      v69 = v102[0] + 64; /*0x48c51f*/
                      if ( *((_QWORD *)v102[0] + 11) > 0xFu ) /*0x48c528*/
                        v69 = *(char **)v69; /*0x48c52a*/
                      v70 = atoi(v69); /*0x48c533*/
                      v71 = v102[0] + 32; /*0x48c539*/
                      if ( *((_QWORD *)v102[0] + 7) > 0xFu ) /*0x48c542*/
                        v71 = *(char **)v71; /*0x48c544*/
                      v72 = atoi(v71); /*0x48c54d*/
                      v73 = atoi(v64); /*0x48c558*/
                      v74 = operator new(0x50u); /*0x48c564*/
                      v97 = (__int128 *)v74; /*0x48c567*/
                      cocos2d::CCObject::CCObject((cocos2d::CCObject *)v74); /*0x48c56f*/
                      *(_QWORD *)v74 = &SFXChangelogEntry::`vftable'; /*0x48c57c*/
                      *((_QWORD *)v74 + 9) = 0; /*0x48c581*/
                      *((_DWORD *)v74 + 14) = v73; /*0x48c585*/
                      *((_DWORD *)v74 + 15) = v72; /*0x48c589*/
                      *((_DWORD *)v74 + 16) = v70; /*0x48c58d*/
                      v76 = (cocos2d::CCObject *)cocos2d::CCArray::create(v75); /*0x48c591*/
                      *((_QWORD *)v74 + 9) = v76; /*0x48c597*/
                      cocos2d::CCObject::retain(v76); /*0x48c59e*/
                      cocos2d::CCObject::autorelease((cocos2d::CCObject *)v74); /*0x48c5a7*/
                      if ( (unsigned __int64)(((char *)v98[1] - (char *)v98[0]) >> 5) >= 2 && *((_QWORD *)v98[0] + 6) ) /*0x48c5c6*/
                      {
                        v93 = 0; /*0x48c5d4*/
                        v94 = 0; /*0x48c5da*/
                        sub_1C2580((char *)v98[0] + 32, &unk_74CF98, &v93); /*0x48c5f3*/
                        v77 = 0; /*0x48c5f8*/
                        v78 = v93; /*0x48c600*/
                        if ( (__int64)(*((_QWORD *)&v93 + 1) - v93) >> 5 ) /*0x48c608*/
                        {
                          v79 = 0; /*0x48c615*/
                          do /*0x48c728*/
                          {
                            if ( *(_QWORD *)(v78 + v79 + 16) ) /*0x48c624*/
                            {
                              *(_OWORD *)v106 = 0; /*0x48c632*/
                              v107 = 0; /*0x48c637*/
                              sub_1C2580(v78 + v79, "~", v106); /*0x48c64d*/
                              v80 = (char *)v106[1]; /*0x48c652*/
                              v81 = (char *)v106[0]; /*0x48c659*/
                              if ( (unsigned __int64)(((char *)v106[1] - (char *)v106[0]) >> 5) >= 2 ) /*0x48c668*/
                              {
                                v100 = v112; /*0x48c66e*/
                                v82 = sub_3E4F0(v112, (char *)v106[0] + 32); /*0x48c67f*/
                                v83 = sub_3E4F0(v113, v106[0]); /*0x48c68a*/
                                v84 = (cocos2d::CCArray *)*((_QWORD *)v74 + 9); /*0x48c68f*/
                                v85 = (struct cocos2d::CCObject *)CCURLObject_create(v83, v82); /*0x48c699*/
                                cocos2d::CCArray::addObject(v84, v85); /*0x48c6a4*/
                                v80 = (char *)v106[1]; /*0x48c6aa*/
                                v81 = (char *)v106[0]; /*0x48c6ae*/
                              }
                              if ( v81 ) /*0x48c6b5*/
                              {
                                if ( v81 != v80 ) /*0x48c6ba*/
                                {
                                  do /*0x48c6cf*/
                                  {
                                    sub_3C310(v81); /*0x48c6c3*/
                                    v81 += 32; /*0x48c6c8*/
                                  }
                                  while ( v81 != v80 ); /*0x48c6cf*/
                                  v81 = (char *)v106[0]; /*0x48c6d1*/
                                }
                                v86 = v81; /*0x48c6e0*/
                                if ( ((v107 - (_QWORD)v81) & 0xFFFFFFFFFFFFFFE0uLL) >= 0x1000 ) /*0x48c6ea*/
                                {
                                  v81 = (char *)*((_QWORD *)v81 - 1); /*0x48c6f0*/
                                  if ( (unsigned __int64)(v86 - v81 - 8) > 0x1F ) /*0x48c6ff*/
                                    invoke_watson(0, 0, 0, 0, 0); /*0x48c899*/
                                }
                                j_j_free(v81); /*0x48c708*/
                              }
                              v78 = v93; /*0x48c70d*/
                            }
                            ++v77; /*0x48c712*/
                            v79 += 32; /*0x48c715*/
                          }
                          while ( v77 < (*((_QWORD *)&v93 + 1) - v78) >> 5 ); /*0x48c728*/
                        }
                        sub_74F50(&v93); /*0x48c733*/
                        v60 = v92; /*0x48c738*/
                      }
                      cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(v1 + 424), (struct cocos2d::CCObject *)v74); /*0x48c747*/
                      sub_74F50(v102); /*0x48c752*/
                      v66 = (char *)v98[0]; /*0x48c758*/
                      if ( !v98[0] ) /*0x48c75f*/
                        goto LABEL_159; /*0x48c75f*/
                      v87 = (char *)v98[1]; /*0x48c761*/
                      if ( v98[0] != v98[1] ) /*0x48c768*/
                      {
                        do /*0x48c77f*/
                        {
                          sub_3C310(v66); /*0x48c773*/
                          v66 += 32; /*0x48c778*/
                        }
                        while ( v66 != v87 ); /*0x48c77f*/
                        v66 = (char *)v98[0]; /*0x48c781*/
                      }
                      v88 = v66; /*0x48c790*/
                      if ( ((v99 - (_QWORD)v66) & 0xFFFFFFFFFFFFFFE0uLL) >= 0x1000 ) /*0x48c79a*/
                      {
                        v66 = (char *)*((_QWORD *)v66 - 1); /*0x48c7a0*/
                        if ( (unsigned __int64)(v88 - v66 - 8) > 0x1F ) /*0x48c7af*/
LABEL_167:
                          invoke_watson(0, 0, 0, 0, 0); /*0x48c8a3*/
                      }
                    }
                    else
                    {
                      if ( v102[0] ) /*0x48c448*/
                      {
                        if ( v102[0] != v102[1] ) /*0x48c44d*/
                        {
                          do /*0x48c45f*/
                          {
                            sub_3C310(v64); /*0x48c453*/
                            v64 += 32; /*0x48c458*/
                          }
                          while ( v64 != v63 ); /*0x48c45f*/
                          v64 = v102[0]; /*0x48c461*/
                        }
                        v65 = v64; /*0x48c470*/
                        if ( ((v103 - (_QWORD)v64) & 0xFFFFFFFFFFFFFFE0uLL) >= 0x1000 ) /*0x48c47a*/
                        {
                          v64 = (char *)*((_QWORD *)v64 - 1); /*0x48c480*/
                          if ( (unsigned __int64)(v65 - v64 - 8) > 0x1F ) /*0x48c48f*/
                            invoke_watson(0, 0, 0, 0, 0); /*0x48c881*/
                        }
                        j_j_free(v64); /*0x48c498*/
                        *(_OWORD *)v102 = 0; /*0x48c4a0*/
                        v103 = 0; /*0x48c4a5*/
                      }
                      v66 = (char *)v98[0]; /*0x48c4a9*/
                      if ( !v98[0] ) /*0x48c4b0*/
                        goto LABEL_159; /*0x48c4b0*/
                      v67 = (char *)v98[1]; /*0x48c4b6*/
                      if ( v98[0] != v98[1] ) /*0x48c4bd*/
                      {
                        do /*0x48c4cf*/
                        {
                          sub_3C310(v66); /*0x48c4c3*/
                          v66 += 32; /*0x48c4c8*/
                        }
                        while ( v66 != v67 ); /*0x48c4cf*/
                        v66 = (char *)v98[0]; /*0x48c4d1*/
                      }
                      v68 = v66; /*0x48c4e0*/
                      if ( ((v99 - (_QWORD)v66) & 0xFFFFFFFFFFFFFFE0uLL) >= 0x1000 ) /*0x48c4ea*/
                      {
                        v66 = (char *)*((_QWORD *)v66 - 1); /*0x48c4f0*/
                        if ( (unsigned __int64)(v68 - v66 - 8) > 0x1F ) /*0x48c4ff*/
                          goto LABEL_167; /*0x48c4ff*/
                      }
                    }
                    j_j_free(v66); /*0x48c7b8*/
                  }
                }
LABEL_159:
                v92 = ++v60; /*0x48c7c3*/
                v61 += 32; /*0x48c7c8*/
              }
              while ( v60 < (v114[1] - v114[0]) >> 5 ); /*0x48c392*/
            }
            sub_74F50(v114); /*0x48c7e1*/
          }
          sub_3C310(&v119); /*0x48c7f2*/
        }
        sub_486090(v1); /*0x48c7fa*/
        sub_74F50(&v110); /*0x48c804*/
        sub_74F50(String); /*0x48c80f*/
        sub_74F50(&v104); /*0x48c819*/
      }
      sub_74F50(&v108); /*0x48c823*/
    }
  }
  sub_3C310(Block); /*0x48c830*/
  return sub_3C310(Src); /*0x48c842*/
}

// [26/27] Address: 0x48ca30
// Method: MusicDownloadManager::generateCustomContentURL
// Hidden C++ exception states: #wind=10
__int64 __fastcall MusicDownloadManager_generateCustomContentURL(__int64 a1, __int64 a2, __int64 a3)
{
  int ticks; // eax
  __int64 v5; // rbx
  __int64 v6; // rax
  const char *v7; // r9
  const char *v8; // r8
  cocos2d::CCString *v9; // rax
  const char *CString; // rbx
  void *v11; // rax
  __int64 v12; // r12
  __int64 v13; // r8
  unsigned int v14; // r8d
  char *v15; // rdx
  __int64 v16; // r9
  unsigned int v17; // r8d
  char *v18; // rdx
  __int64 v19; // r9
  char *v20; // rbx
  char *v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // r8
  __int64 v24; // r14
  unsigned __int64 v25; // r13
  __int64 v26; // r15
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rdi
  void **v29; // rdx
  _QWORD *v30; // rsi
  unsigned __int64 v31; // rcx
  char *v32; // rbx
  __int64 v33; // rax
  void **v34; // r9
  void *v35; // rcx
  void *v36; // rcx
  __int64 v37; // r14
  unsigned __int64 v38; // r13
  unsigned __int64 v39; // r8
  unsigned __int64 v40; // rdi
  void **v41; // rdx
  _QWORD *v42; // rsi
  char *v43; // rbx
  __int64 v44; // rax
  void **v45; // r9
  void *v46; // rcx
  void *v47; // rcx
  __int64 v48; // r14
  unsigned __int64 v49; // r13
  unsigned __int64 v50; // r8
  unsigned __int64 v51; // rdi
  void **v52; // rdx
  _QWORD *v53; // rsi
  char *v54; // rbx
  __int64 v55; // rax
  void **v56; // r9
  void *v57; // rcx
  void *v58; // rcx
  unsigned __int64 v59; // r14
  unsigned __int64 v60; // r8
  unsigned __int64 v61; // rdi
  void **v62; // rdx
  _QWORD *v63; // rsi
  char *v64; // rbx
  __int64 v65; // rax
  void **v66; // r9
  void *v67; // rcx
  void *v68; // rcx
  const char *v69; // rax
  const char *v70; // r9
  const char *v71; // r8
  const char *v72; // rdx
  cocos2d::CCString *v73; // rax
  const char *v74; // rax
  void *v75; // rcx
  void *v80[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v81; // [rsp+68h] [rbp-98h]
  unsigned __int64 v82; // [rsp+70h] [rbp-90h]
  void *Block[2]; // [rsp+78h] [rbp-88h] BYREF
  __m128i si128; // [rsp+88h] [rbp-78h]
  _QWORD Src[2]; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v86; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v87; // [rsp+B0h] [rbp-50h]
  __int128 v88; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v89[4]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v90; // [rsp+110h] [rbp+10h]
  char v91; // [rsp+118h] [rbp+18h] BYREF
  char v92; // [rsp+11Ah] [rbp+1Ah] BYREF
  char Buffer[40]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v94[3]; // [rsp+150h] [rbp+50h] BYREF
  unsigned __int64 v95; // [rsp+168h] [rbp+68h]
  void *v96[2]; // [rsp+170h] [rbp+70h] BYREF
  __int128 v97; // [rsp+180h] [rbp+80h]
  void **v98; // [rsp+190h] [rbp+90h] BYREF

  v98 = (void **)a2; /*0x48ca72*/
  ticks = Xtime_get_ticks(); /*0x48ca80*/
  GameToolbox_intToString(v94, (unsigned int)(ticks / 10000000 + 3600)); /*0x48cab1*/
  *(_QWORD *)&v89[0] = 0; /*0x48cab7*/
  *(_QWORD *)&v88 = 0xEFCDAB8967452301uLL; /*0x48cabb*/
  *((_QWORD *)&v88 + 1) = 0x1032547698BADCFELL; /*0x48cac9*/
  v98 = v96; /*0x48cadb*/
  v5 = GameToolbox_intToString(v96, 57709); /*0x48caf0*/
  *(_OWORD *)Block = 0; /*0x48caf6*/
  Block[0] = (void *)sub_3C460(64); /*0x48cb0d*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_831070); /*0x48cb1a*/
  strcpy((char *)Block[0], "DQIHAV8MVAUdDgBVVh0NBwQHHQEEDw8dDAQHBAdaAVNWAQkH"); /*0x48cb26*/
  v6 = cocos2d::ZipUtils::base64DecodeEnc(v80, Block, v5); /*0x48cb50*/
  v7 = (const char *)v94; /*0x48cb57*/
  if ( v95 > 0xF ) /*0x48cb60*/
    v7 = (const char *)v94[0]; /*0x48cb60*/
  v8 = (const char *)a3; /*0x48cb65*/
  if ( *(_QWORD *)(a3 + 24) > 0xFu ) /*0x48cb6d*/
    v8 = *(const char **)a3; /*0x48cb6f*/
  if ( *(_QWORD *)(v6 + 24) > 0xFu ) /*0x48cb77*/
    v6 = *(_QWORD *)v6; /*0x48cb79*/
  v9 = cocos2d::CCString::createWithFormat("%s%s%s", (const char *)v6, v8, v7); /*0x48cb86*/
  CString = cocos2d::CCString::getCString(v9); /*0x48cb95*/
  sub_3C310(v80); /*0x48cb9d*/
  if ( si128.m128i_i64[1] > 0xFuLL ) /*0x48cbab*/
  {
    v11 = Block[0]; /*0x48cbb0*/
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 ) /*0x48cbbf*/
    {
      v11 = (void *)*((_QWORD *)Block[0] - 1); /*0x48cbc5*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v11 - 8) > 0x1F ) /*0x48cbd4*/
        invoke_watson(0, 0, 0, 0, 0); /*0x48cbe5*/
    }
    j_j_free(v11); /*0x48cbef*/
  }
  si128 = _mm_load_si128((const __m128i *)&Size); /*0x48cbfc*/
  LOBYTE(Block[0]) = 0; /*0x48cc01*/
  *(_QWORD *)&v89[0] = 0; /*0x48cc06*/
  *(_QWORD *)&v88 = 0xEFCDAB8967452301uLL; /*0x48cc0a*/
  *((_QWORD *)&v88 + 1) = 0x1032547698BADCFELL; /*0x48cc18*/
  v12 = -1; /*0x48cc26*/
  v13 = -1; /*0x48cc2d*/
  do /*0x48cc33*/
    ++v13; /*0x48cc30*/
  while ( CString[v13] ); /*0x48cc33*/
  sub_47D670(&v88, CString); /*0x48cc41*/
  v14 = 0; /*0x48cc46*/
  v15 = (char *)&v98 + 2; /*0x48cc49*/
  v16 = 2; /*0x48cc50*/
  do /*0x48cc95*/
  {
    *(v15 - 2) = *((_BYTE *)v89 + 4 * v14); /*0x48cc70*/
    *(v15 - 1) = *((_BYTE *)v89 + 4 * v14 + 1); /*0x48cc78*/
    *v15 = *((_BYTE *)v89 + 4 * v14 + 2); /*0x48cc80*/
    v15[1] = *((_BYTE *)v89 + 4 * v14++ + 3); /*0x48cc87*/
    v15 += 4; /*0x48cc8d*/
    --v16; /*0x48cc91*/
  }
  while ( v16 ); /*0x48cc95*/
  sub_47D670(&v88, &unk_8F8520); /*0x48ccc2*/
  sub_47D670(&v88, &v98); /*0x48ccd8*/
  v17 = 0; /*0x48ccdd*/
  v18 = &v92; /*0x48cce0*/
  v19 = 4; /*0x48cce4*/
  do /*0x48cd25*/
  {
    *(v18 - 2) = *((_BYTE *)&v89[-1] + 4 * v17); /*0x48cd00*/
    *(v18 - 1) = *((_BYTE *)&v88 + 4 * v17 + 1); /*0x48cd08*/
    *v18 = *((_BYTE *)&v88 + 4 * v17 + 2); /*0x48cd10*/
    v18[1] = *((_BYTE *)&v88 + 4 * v17++ + 3); /*0x48cd17*/
    v18 += 4; /*0x48cd1d*/
    --v19; /*0x48cd21*/
  }
  while ( v19 ); /*0x48cd25*/
  v88 = 0; /*0x48cd2c*/
  memset(v89, 0, sizeof(v89)); /*0x48cd30*/
  v90 = 0; /*0x48cd40*/
  v20 = &v91; /*0x48cd44*/
  v21 = Buffer; /*0x48cd48*/
  v22 = 16; /*0x48cd4c*/
  do /*0x48cd70*/
  {
    sub_1A5FE0(v21, "%02x"); /*0x48cd5f*/
    v21 += 2; /*0x48cd64*/
    ++v20; /*0x48cd68*/
    --v22; /*0x48cd6c*/
  }
  while ( v22 ); /*0x48cd70*/
  *(_OWORD *)v96 = 0; /*0x48cd75*/
  v97 = 0; /*0x48cd7c*/
  v23 = -1; /*0x48cd88*/
  do /*0x48cd93*/
    ++v23; /*0x48cd90*/
  while ( Buffer[v23] ); /*0x48cd93*/
  sub_3C230(v96); /*0x48cda2*/
  sub_3C8D0(Src); /*0x48cdb0*/
  *(_OWORD *)Block = 0; /*0x48cdb9*/
  v24 = 0; /*0x48cdc0*/
  si128.m128i_i64[0] = 0; /*0x48cdc3*/
  v25 = 15; /*0x48cdc7*/
  si128.m128i_i64[1] = 15; /*0x48cdcd*/
  LOBYTE(Block[0]) = 0; /*0x48cdd1*/
  *(_OWORD *)v80 = 0; /*0x48cdd5*/
  v26 = 1; /*0x48cdda*/
  v27 = 1; /*0x48cde0*/
  v81 = 1; /*0x48cde3*/
  v82 = 15; /*0x48cde8*/
  LOWORD(v80[0]) = 61; /*0x48cded*/
  v28 = 0; /*0x48cdf4*/
  while ( 1 ) /*0x48ce00*/
  {
    v29 = v80; /*0x48ce00*/
    if ( v82 > 0xF ) /*0x48ce0b*/
      v29 = (void **)v80[0]; /*0x48ce0b*/
    v30 = Src; /*0x48ce11*/
    if ( v87 > 0xF ) /*0x48ce1a*/
      v30 = (_QWORD *)Src[0]; /*0x48ce1a*/
    v31 = v86; /*0x48ce1f*/
    if ( v27 > v86 || v28 > v86 - v27 ) /*0x48ce31*/
      break; /*0x48ce31*/
    if ( v27 ) /*0x48ce36*/
    {
      v32 = (char *)v30 + v86; /*0x48ce38*/
      v33 = sub_672690((char *)v30 + v28, (char *)v30 + v86, v29, v27); /*0x48ce49*/
      v31 = v86; /*0x48ce51*/
      if ( (char *)v33 == v32 ) /*0x48ce58*/
        break; /*0x48ce58*/
      v28 = v33 - (_QWORD)v30; /*0x48ce5a*/
      v27 = v81; /*0x48ce5d*/
    }
    if ( v28 == -1 ) /*0x48ce66*/
      break; /*0x48ce66*/
    v34 = Block; /*0x48ce68*/
    if ( v25 > 0xF ) /*0x48ce71*/
      v34 = (void **)Block[0]; /*0x48ce71*/
    sub_44CE0(Src, v28, v27, v34, v24); /*0x48ce83*/
    v24 = si128.m128i_i64[0]; /*0x48ce88*/
    v28 += si128.m128i_i64[0]; /*0x48ce8c*/
    v25 = si128.m128i_u64[1]; /*0x48ce8f*/
    v27 = v81; /*0x48ce93*/
  }
  if ( v82 > 0xF ) /*0x48cea6*/
  {
    v35 = v80[0]; /*0x48ceab*/
    if ( v82 + 1 >= 0x1000 ) /*0x48ceba*/
    {
      v35 = (void *)*((_QWORD *)v80[0] - 1); /*0x48cec0*/
      if ( (unsigned __int64)((char *)v80[0] - (char *)v35 - 8) > 0x1F ) /*0x48cecf*/
        invoke_watson(0, 0, 0, 0, 0); /*0x48cee2*/
    }
    j_j_free(v35); /*0x48cee9*/
    v31 = v86; /*0x48ceee*/
  }
  v81 = 0; /*0x48cef4*/
  v82 = 15; /*0x48cef9*/
  LOBYTE(v80[0]) = 0; /*0x48cf02*/
  if ( v25 > 0xF ) /*0x48cf0a*/
  {
    v36 = Block[0]; /*0x48cf10*/
    if ( v25 + 1 >= 0x1000 ) /*0x48cf1f*/
    {
      v36 = (void *)*((_QWORD *)Block[0] - 1); /*0x48cf25*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v36 - 8) > 0x1F ) /*0x48cf34*/
        invoke_watson(0, 0, 0, 0, 0); /*0x48cf45*/
    }
    j_j_free(v36); /*0x48cf4c*/
    v31 = v86; /*0x48cf51*/
  }
  *(_OWORD *)Block = 0; /*0x48cf58*/
  v37 = 0; /*0x48cf5d*/
  si128.m128i_i64[0] = 0; /*0x48cf60*/
  v38 = 15; /*0x48cf64*/
  si128.m128i_i64[1] = 15; /*0x48cf6a*/
  LOBYTE(Block[0]) = 0; /*0x48cf6e*/
  *(_OWORD *)v80 = 0; /*0x48cf72*/
  v39 = 1; /*0x48cf77*/
  v81 = 1; /*0x48cf7a*/
  v82 = 15; /*0x48cf7f*/
  LOWORD(v80[0]) = 10; /*0x48cf84*/
  v40 = 0; /*0x48cf8b*/
  while ( 1 ) /*0x48cf90*/
  {
    v41 = v80; /*0x48cf90*/
    if ( v82 > 0xF ) /*0x48cf9b*/
      v41 = (void **)v80[0]; /*0x48cf9b*/
    v42 = Src; /*0x48cfa1*/
    if ( v87 > 0xF ) /*0x48cfaa*/
      v42 = (_QWORD *)Src[0]; /*0x48cfaa*/
    if ( v39 > v31 || v40 > v31 - v39 ) /*0x48cfbd*/
      break; /*0x48cfbd*/
    if ( v39 ) /*0x48cfc2*/
    {
      v43 = (char *)v42 + v31; /*0x48cfc4*/
      v44 = sub_672690((char *)v42 + v40, (char *)v42 + v31, v41, v39); /*0x48cfd5*/
      v31 = v86; /*0x48cfdd*/
      if ( (char *)v44 == v43 ) /*0x48cfe4*/
        break; /*0x48cfe4*/
      v40 = v44 - (_QWORD)v42; /*0x48cfe6*/
      v39 = v81; /*0x48cfe9*/
    }
    if ( v40 == -1 ) /*0x48cff2*/
      break; /*0x48cff2*/
    v45 = Block; /*0x48cff4*/
    if ( v38 > 0xF ) /*0x48cffd*/
      v45 = (void **)Block[0]; /*0x48cffd*/
    sub_44CE0(Src, v40, v39, v45, v37); /*0x48d00f*/
    v37 = si128.m128i_i64[0]; /*0x48d014*/
    v40 += si128.m128i_i64[0]; /*0x48d018*/
    v31 = v86; /*0x48d01b*/
    v38 = si128.m128i_u64[1]; /*0x48d01f*/
    v39 = v81; /*0x48d023*/
  }
  if ( v82 > 0xF ) /*0x48d036*/
  {
    v46 = v80[0]; /*0x48d03b*/
    if ( v82 + 1 >= 0x1000 ) /*0x48d04a*/
    {
      v46 = (void *)*((_QWORD *)v80[0] - 1); /*0x48d050*/
      if ( (unsigned __int64)((char *)v80[0] - (char *)v46 - 8) > 0x1F ) /*0x48d05f*/
        invoke_watson(0, 0, 0, 0, 0); /*0x48d072*/
    }
    j_j_free(v46); /*0x48d079*/
    v31 = v86; /*0x48d07e*/
  }
  v81 = 0; /*0x48d084*/
  v82 = 15; /*0x48d089*/
  LOBYTE(v80[0]) = 0; /*0x48d092*/
  if ( v38 > 0xF ) /*0x48d09a*/
  {
    v47 = Block[0]; /*0x48d0a0*/
    if ( v38 + 1 >= 0x1000 ) /*0x48d0af*/
    {
      v47 = (void *)*((_QWORD *)Block[0] - 1); /*0x48d0b5*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v47 - 8) > 0x1F ) /*0x48d0c4*/
        invoke_watson(0, 0, 0, 0, 0); /*0x48d0d5*/
    }
    j_j_free(v47); /*0x48d0dc*/
    v31 = v86; /*0x48d0e1*/
  }
  *(_OWORD *)Block = 0; /*0x48d0e8*/
  v48 = 1; /*0x48d0ed*/
  si128.m128i_i64[0] = 1; /*0x48d0f0*/
  v49 = 15; /*0x48d0f4*/
  si128.m128i_i64[1] = 15; /*0x48d0fa*/
  LOWORD(Block[0]) = 45; /*0x48d0fe*/
  *(_OWORD *)v80 = 0; /*0x48d105*/
  v50 = 1; /*0x48d10a*/
  v81 = 1; /*0x48d10d*/
  v82 = 15; /*0x48d112*/
  LOWORD(v80[0]) = 43; /*0x48d117*/
  v51 = 0; /*0x48d11e*/
  while ( 1 ) /*0x48d121*/
  {
    v52 = v80; /*0x48d121*/
    if ( v82 > 0xF ) /*0x48d12c*/
      v52 = (void **)v80[0]; /*0x48d12c*/
    v53 = Src; /*0x48d132*/
    if ( v87 > 0xF ) /*0x48d13b*/
      v53 = (_QWORD *)Src[0]; /*0x48d13b*/
    if ( v50 > v31 || v51 > v31 - v50 ) /*0x48d14e*/
      break; /*0x48d14e*/
    if ( v50 ) /*0x48d153*/
    {
      v54 = (char *)v53 + v31; /*0x48d155*/
      v55 = sub_672690((char *)v53 + v51, (char *)v53 + v31, v52, v50); /*0x48d166*/
      v31 = v86; /*0x48d16e*/
      if ( (char *)v55 == v54 ) /*0x48d175*/
        break; /*0x48d175*/
      v51 = v55 - (_QWORD)v53; /*0x48d177*/
      v50 = v81; /*0x48d17a*/
    }
    if ( v51 == -1 ) /*0x48d183*/
      break; /*0x48d183*/
    v56 = Block; /*0x48d185*/
    if ( v49 > 0xF ) /*0x48d18e*/
      v56 = (void **)Block[0]; /*0x48d18e*/
    sub_44CE0(Src, v51, v50, v56, v48); /*0x48d1a0*/
    v48 = si128.m128i_i64[0]; /*0x48d1a5*/
    v51 += si128.m128i_i64[0]; /*0x48d1a9*/
    v31 = v86; /*0x48d1ac*/
    v49 = si128.m128i_u64[1]; /*0x48d1b0*/
    v50 = v81; /*0x48d1b4*/
  }
  if ( v82 > 0xF ) /*0x48d1c7*/
  {
    v57 = v80[0]; /*0x48d1cc*/
    if ( v82 + 1 >= 0x1000 ) /*0x48d1db*/
    {
      v57 = (void *)*((_QWORD *)v80[0] - 1); /*0x48d1e1*/
      if ( (unsigned __int64)((char *)v80[0] - (char *)v57 - 8) > 0x1F ) /*0x48d1f0*/
        invoke_watson(0, 0, 0, 0, 0); /*0x48d203*/
    }
    j_j_free(v57); /*0x48d20a*/
    v31 = v86; /*0x48d20f*/
  }
  v81 = 0; /*0x48d215*/
  v82 = 15; /*0x48d21a*/
  LOBYTE(v80[0]) = 0; /*0x48d223*/
  if ( v49 > 0xF ) /*0x48d22b*/
  {
    v58 = Block[0]; /*0x48d231*/
    if ( v49 + 1 >= 0x1000 ) /*0x48d240*/
    {
      v58 = (void *)*((_QWORD *)Block[0] - 1); /*0x48d246*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v58 - 8) > 0x1F ) /*0x48d255*/
        invoke_watson(0, 0, 0, 0, 0); /*0x48d266*/
    }
    j_j_free(v58); /*0x48d26d*/
    v31 = v86; /*0x48d272*/
  }
  *(_OWORD *)Block = 0; /*0x48d279*/
  si128.m128i_i64[0] = 1; /*0x48d27e*/
  v59 = 15; /*0x48d282*/
  si128.m128i_i64[1] = 15; /*0x48d288*/
  LOWORD(Block[0]) = 95; /*0x48d28c*/
  *(_OWORD *)v80 = 0; /*0x48d293*/
  v60 = 1; /*0x48d298*/
  v81 = 1; /*0x48d29b*/
  v82 = 15; /*0x48d2a0*/
  LOWORD(v80[0]) = 47; /*0x48d2a5*/
  v61 = 0; /*0x48d2ac*/
  while ( 1 ) /*0x48d2b0*/
  {
    v62 = v80; /*0x48d2b0*/
    if ( v82 > 0xF ) /*0x48d2bb*/
      v62 = (void **)v80[0]; /*0x48d2bb*/
    v63 = Src; /*0x48d2c1*/
    if ( v87 > 0xF ) /*0x48d2ca*/
      v63 = (_QWORD *)Src[0]; /*0x48d2ca*/
    if ( v60 > v31 || v61 > v31 - v60 ) /*0x48d2dd*/
      break; /*0x48d2dd*/
    if ( v60 ) /*0x48d2e2*/
    {
      v64 = (char *)v63 + v31; /*0x48d2e4*/
      v65 = sub_672690((char *)v63 + v61, (char *)v63 + v31, v62, v60); /*0x48d2f5*/
      if ( (char *)v65 == v64 ) /*0x48d300*/
        break; /*0x48d300*/
      v61 = v65 - (_QWORD)v63; /*0x48d302*/
      v60 = v81; /*0x48d305*/
    }
    if ( v61 == -1 ) /*0x48d30e*/
      break; /*0x48d30e*/
    v66 = Block; /*0x48d310*/
    if ( v59 > 0xF ) /*0x48d319*/
      v66 = (void **)Block[0]; /*0x48d319*/
    sub_44CE0(Src, v61, v60, v66, v26); /*0x48d32b*/
    v26 = si128.m128i_i64[0]; /*0x48d330*/
    v61 += si128.m128i_i64[0]; /*0x48d334*/
    v31 = v86; /*0x48d337*/
    v59 = si128.m128i_u64[1]; /*0x48d33b*/
    v60 = v81; /*0x48d33f*/
  }
  if ( v82 > 0xF ) /*0x48d352*/
  {
    v67 = v80[0]; /*0x48d357*/
    if ( v82 + 1 >= 0x1000 ) /*0x48d366*/
    {
      v67 = (void *)*((_QWORD *)v80[0] - 1); /*0x48d36c*/
      if ( (unsigned __int64)((char *)v80[0] - (char *)v67 - 8) > 0x1F ) /*0x48d37b*/
        invoke_watson(0, 0, 0, 0, 0); /*0x48d38e*/
    }
    j_j_free(v67); /*0x48d395*/
  }
  v81 = 0; /*0x48d39c*/
  v82 = 15; /*0x48d3a1*/
  LOBYTE(v80[0]) = 0; /*0x48d3aa*/
  if ( v59 > 0xF ) /*0x48d3b2*/
  {
    v68 = Block[0]; /*0x48d3b8*/
    if ( v59 + 1 >= 0x1000 ) /*0x48d3c7*/
    {
      v68 = (void *)*((_QWORD *)Block[0] - 1); /*0x48d3cd*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v68 - 8) > 0x1F ) /*0x48d3dc*/
        invoke_watson(0, 0, 0, 0, 0); /*0x48d3ed*/
    }
    j_j_free(v68); /*0x48d3f4*/
  }
  v69 = (const char *)v94; /*0x48d3f9*/
  if ( v95 > 0xF ) /*0x48d402*/
    v69 = (const char *)v94[0]; /*0x48d402*/
  v70 = (const char *)Src; /*0x48d407*/
  if ( v87 > 0xF ) /*0x48d410*/
    v70 = (const char *)Src[0]; /*0x48d410*/
  v71 = (const char *)a3; /*0x48d41a*/
  if ( *(_QWORD *)(a3 + 24) > 0xFu ) /*0x48d422*/
    v71 = *(const char **)a3; /*0x48d424*/
  v72 = (const char *)(a1 + 368); /*0x48d42c*/
  if ( *(_QWORD *)(a1 + 392) > 0xFu ) /*0x48d438*/
    v72 = *(const char **)v72; /*0x48d43a*/
  v73 = cocos2d::CCString::createWithFormat("%s%s?token=%s&expires=%s", v72, v71, v70, v69); /*0x48d449*/
  v74 = cocos2d::CCString::getCString(v73); /*0x48d452*/
  *(_OWORD *)a2 = 0; /*0x48d460*/
  *(_QWORD *)(a2 + 16) = 0; /*0x48d465*/
  *(_QWORD *)(a2 + 24) = 0; /*0x48d469*/
  do /*0x48d473*/
    ++v12; /*0x48d470*/
  while ( v74[v12] ); /*0x48d473*/
  sub_3C230(a2); /*0x48d482*/
  sub_3C310(Src); /*0x48d48c*/
  if ( *((_QWORD *)&v97 + 1) > 0xFu ) /*0x48d49d*/
  {
    v75 = v96[0]; /*0x48d4a2*/
    if ( (unsigned __int64)(*((_QWORD *)&v97 + 1) + 1LL) >= 0x1000 ) /*0x48d4b0*/
    {
      v75 = (void *)*((_QWORD *)v96[0] - 1); /*0x48d4b6*/
      if ( (unsigned __int64)((char *)v96[0] - (char *)v75 - 8) > 0x1F ) /*0x48d4c5*/
        invoke_watson(0, 0, 0, 0, 0); /*0x48d4d6*/
    }
    j_j_free(v75); /*0x48d4dd*/
  }
  sub_3C310(v94); /*0x48d4e7*/
  sub_3C310(a3); /*0x48d4f0*/
  return a2; /*0x48d4f8*/
}

// [27/27] Address: 0x48fc40
// Method: MusicDownloadManager::loadSongInfoFinished
unsigned int __fastcall MusicDownloadManager_loadSongInfoFinished(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  unsigned int result; // eax
  struct cocos2d::CCObject *v6; // rax

  v4 = 0; /*0x48fc5c*/
  result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 336)); /*0x48fc5e*/
  if ( result ) /*0x48fc66*/
  {
    do /*0x48fc9f*/
    {
      v6 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 336), v4); /*0x48fc79*/
      (***((void (__fastcall ****)(_QWORD, __int64))v6 + 40))(*((_QWORD *)v6 + 40), a2); /*0x48fc8c*/
      ++v4; /*0x48fc95*/
      result = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 336)); /*0x48fc97*/
    }
    while ( v4 < result ); /*0x48fc9f*/
  }
  return result; /*0x48fca1*/
}
