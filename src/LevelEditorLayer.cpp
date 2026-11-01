#include <Geode/binding/LevelEditorLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/56] Address: 0xc43e0
// Method: LevelEditorLayer::copyObjectState
void __fastcall LevelEditorLayer_copyObjectState(__int64 a1, cocos2d::CCObject *a2)
{
  int v4; // esi
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 ) /*0xc43e3*/
  {
    v6 = (*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)a2 + 56LL))(a2); /*0xc4407*/
    v4 = v6; /*0xc440b*/
    if ( v6 > 0 ) /*0xc440f*/
    {
      cocos2d::CCObject::retain(a2); /*0xc4414*/
      cocos2d::CCObject::autorelease(a2); /*0xc441d*/
      if ( *(_DWORD *)(a1 + 672) == 2 ) /*0xc442a*/
      {
        if ( v4 == 1 ) /*0xc442f*/
        {
          sub_C4740(a1, 0); /*0xc4445*/
          return; /*0xc4445*/
        }
        if ( !sub_BB450(a1 + 696, &v6) ) /*0xc4456*/
          sub_BB1F0(a1 + 696, v5, &v6); /*0xc4471*/
      }
      else
      {
        *(_DWORD *)(a1 + 712) = v4; /*0xc4478*/
      }
      sub_C3F10(a1); /*0xc4481*/
    }
  }
}

// [2/56] Address: 0xcf4d0
// Method: LevelEditorLayer::quickUpdateAllPositions
char *__fastcall LevelEditorLayer_quickUpdateAllPositions(char *Buf1, char *a2)
{
  char *v4; // r15
  char *v5; // rbx
  _QWORD *v6; // r12
  __int128 v7; // xmm1
  _QWORD *v8; // rsi
  __int128 v9; // xmm0
  char *v10; // rbp
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  char *i; // rbx
  char *v14; // rdi
  _QWORD *v15; // rbx
  _OWORD Buf1a[2]; // [rsp+20h] [rbp-78h] BYREF
  _OWORD v18[2]; // [rsp+40h] [rbp-58h] BYREF

  if ( Buf1 == a2 ) /*0xcf4f6*/
    return a2; /*0xcf6e9*/
  v4 = Buf1 + 64; /*0xcf500*/
  if ( Buf1 + 64 != a2 ) /*0xcf507*/
  {
    v5 = Buf1 + 32; /*0xcf517*/
    v6 = Buf1 + 120; /*0xcf527*/
    do /*0xcf69d*/
    {
      v7 = *(_OWORD *)v4; /*0xcf530*/
      v8 = v6 - 3; /*0xcf534*/
      v9 = *((_OWORD *)v4 + 1); /*0xcf53c*/
      *(v6 - 5) = 0; /*0xcf541*/
      *(v6 - 4) = 15; /*0xcf54b*/
      v10 = v4; /*0xcf554*/
      *v4 = 0; /*0xcf557*/
      Buf1a[0] = v7; /*0xcf55b*/
      v11 = *(_OWORD *)(v6 - 1); /*0xcf560*/
      Buf1a[1] = v9; /*0xcf564*/
      v12 = *(_OWORD *)(v6 - 3); /*0xcf569*/
      *(v6 - 1) = 0; /*0xcf56c*/
      v18[1] = v11; /*0xcf571*/
      v18[0] = v12; /*0xcf576*/
      *v6 = 15; /*0xcf57b*/
      *((_BYTE *)v6 - 24) = 0; /*0xcf583*/
      if ( (int)sub_3C160(Buf1a, Buf1) >= 0 && ((int)sub_3C160(Buf1, Buf1a) < 0 || (int)sub_3C160(v18, v5) >= 0) ) /*0xcf5bc*/
      {
        for ( i = v4; ; v10 = i ) /*0xcf5be*/
        {
          i -= 64; /*0xcf5c1*/
          if ( (int)sub_3C160(Buf1a, i) < 0 ) /*0xcf5d7*/
          {
            v14 = i + 32; /*0xcf607*/
          }
          else
          {
            if ( (int)sub_3C160(i, Buf1a) < 0 ) /*0xcf5eb*/
              goto LABEL_17; /*0xcf5eb*/
            v14 = i + 32; /*0xcf5ed*/
            if ( (int)sub_3C160(v18, i + 32) >= 0 ) /*0xcf603*/
              goto LABEL_17; /*0xcf603*/
          }
          sub_58AD0(v10, i); /*0xcf611*/
          sub_58AD0(v10 + 32, v14); /*0xcf61d*/
        }
      }
      if ( v4 != Buf1 ) /*0xcf62a*/
      {
        do /*0xcf655*/
        {
          v15 = v8; /*0xcf630*/
          v8 -= 8; /*0xcf633*/
          sub_58AD0(v8 + 4, v8 - 4); /*0xcf642*/
          sub_58AD0(v15, v8); /*0xcf64d*/
        }
        while ( v8 - 4 != (_QWORD *)Buf1 ); /*0xcf655*/
      }
      v10 = Buf1; /*0xcf657*/
LABEL_17:
      sub_58AD0(v10, Buf1a); /*0xcf65a*/
      sub_58AD0(v10 + 32, v18); /*0xcf670*/
      sub_3C310(v18); /*0xcf67a*/
      sub_3C310(Buf1a); /*0xcf684*/
      v4 += 64; /*0xcf689*/
      v5 = Buf1 + 32; /*0xcf68d*/
      v6 += 8; /*0xcf691*/
    }
    while ( v4 != a2 ); /*0xcf69d*/
  }
  return a2; /*0xcf6d0*/
}

// [4/56] Address: 0x310ea0
// Method: LevelEditorLayer::objectAtPosition
unsigned __int64 __fastcall LevelEditorLayer_objectAtPosition(__int64 a1, __int64 a2, char a3)
{
  int v3; // ebx
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // r14
  __int64 v11; // r9
  __int64 v12; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v14; // rdx
  int v15; // r8d
  signed int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rbp
  __int64 i; // rbx
  __int64 v21; // rbx
  __int64 v22; // rcx
  _BYTE v23[16]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v24[16]; // [rsp+30h] [rbp-48h] BYREF
  signed int v25; // [rsp+88h] [rbp+10h] BYREF
  signed int v26; // [rsp+90h] [rbp+18h] BYREF

  v3 = 0; /*0x310eb5*/
  v26 = *(_DWORD *)(a2 + 2048); /*0x310eb7*/
  if ( (unsigned int)v26 > 0x64 ) /*0x310eca*/
    v26 = 0; /*0x310ed1*/
  if ( a3 ) /*0x310ef0*/
  {
    v7 = a1 + 1448; /*0x310ef2*/
    v8 = sub_354A60(a1 + 1448, v23, &v26); /*0x310f01*/
    v9 = a1 + 1512; /*0x310f06*/
  }
  else
  {
    v9 = a1 + 1512; /*0x310f0f*/
    v8 = sub_354A60(a1 + 1512, v24, &v26); /*0x310f1e*/
    v7 = a1 + 1448; /*0x310f23*/
  }
  v10 = *(_QWORD *)v8; /*0x310f2a*/
  v11 = *(_QWORD *)(*(_QWORD *)v8 + 24LL); /*0x310f3a*/
  v12 = *(_QWORD *)(*(_QWORD *)v8 + 32LL) - v11; /*0x310f42*/
  result = (unsigned __int64)((unsigned __int128)(v12 * (__int128)0x469EE58469EE5847LL) >> 64) >> 63; /*0x310f4f*/
  v14 = v12 / 232; /*0x310f53*/
  if ( v12 / 232 ) /*0x310f53*/
  {
    v15 = *(_DWORD *)(a2 + 2008); /*0x310f5c*/
    if ( !v15 ) /*0x310f66*/
    {
      v16 = v26; /*0x310f68*/
      v25 = v26; /*0x310f6f*/
      if ( (unsigned int)v26 <= 0x64 ) /*0x310f79*/
      {
        if ( a3 ) /*0x310f86*/
        {
          sub_351100(v7, &v25); /*0x310f8b*/
          v17 = v26; /*0x310f97*/
          result = *(_QWORD *)(a1 + 1576); /*0x310f9a*/
LABEL_27:
          *(_DWORD *)(result + 4 * v17) = -2; /*0x311096*/
          return result; /*0x311096*/
        }
        sub_351100(v9, &v25); /*0x310fa9*/
        v16 = v26; /*0x310fae*/
        goto LABEL_12; /*0x310fae*/
      }
      if ( !a3 ) /*0x310fc0*/
      {
LABEL_12:
        v17 = v16; /*0x310fb5*/
LABEL_26:
        result = *(_QWORD *)(a1 + 1600); /*0x31108f*/
        goto LABEL_27; /*0x31108f*/
      }
      v17 = v26; /*0x310fc2*/
LABEL_15:
      result = *(_QWORD *)(a1 + 1576); /*0x310fc5*/
      goto LABEL_27; /*0x310fcc*/
    }
    if ( v14 ) /*0x310fd4*/
    {
      v18 = v11 + 160; /*0x310fda*/
      while ( *(_DWORD *)(*(_QWORD *)v18 + 2008LL) != v15 ) /*0x310feb*/
      {
        ++v3; /*0x310fed*/
        v18 += 232; /*0x310fef*/
        if ( v3 >= v14 ) /*0x310ffc*/
          goto LABEL_24; /*0x310ffc*/
      }
      v19 = *(_QWORD *)(v10 + 32); /*0x311000*/
      for ( i = v11 + 232LL * v3 + 232; i != v19; i += 232 ) /*0x31101b*/
        sub_3564F0(i - 232, i); /*0x311027*/
      v21 = *(_QWORD *)(v10 + 32); /*0x311038*/
      sub_685C0(v21 - 32); /*0x311040*/
      sub_354F30(v21 - 232, v21 - 232); /*0x311053*/
      *(_QWORD *)(v10 + 32) -= 232LL; /*0x311058*/
    }
LABEL_24:
    v22 = *(_QWORD *)(v10 + 32) - *(_QWORD *)(v10 + 24); /*0x311060*/
    result = (unsigned __int64)((unsigned __int128)(v22 * (__int128)0x469EE58469EE5847LL) >> 64) >> 63; /*0x311075*/
    if ( !(v22 / 232) ) /*0x311079*/
    {
      v17 = v26; /*0x31107e*/
      if ( !a3 ) /*0x311089*/
        goto LABEL_26; /*0x311089*/
      goto LABEL_15; /*0x311089*/
    }
  }
  return result; /*0x31109d*/
}

// [5/56] Address: 0x368200
// Method: LevelEditorLayer::updateEditorMode
// Hidden C++ exception states: #wind=1
void __fastcall LevelEditorLayer_updateEditorMode(__int64 a1)
{
  int v2; // r15d
  __int64 v3; // r8
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rax
  char v10; // al
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // r15
  void *v19; // rcx
  int v20; // r8d
  __int64 v21; // rdx
  __int64 v22; // rcx
  char *v23; // rax
  void *Src[2]; // [rsp+30h] [rbp-28h]
  char *v25; // [rsp+40h] [rbp-18h]
  __int16 v26; // [rsp+A0h] [rbp+48h] BYREF
  char v27; // [rsp+A2h] [rbp+4Ah]
  char v28; // [rsp+A8h] [rbp+50h] BYREF
  int v29; // [rsp+B0h] [rbp+58h]
  __int64 v30; // [rsp+B8h] [rbp+60h]

  *(_OWORD *)Src = 0; /*0x36821a*/
  v25 = 0; /*0x36821f*/
  v2 = 0; /*0x368227*/
  v29 = 0; /*0x36822a*/
  v3 = *(_QWORD *)(a1 + 344); /*0x36822e*/
  v4 = 0; /*0x36825a*/
  if ( (*(_QWORD *)(a1 + 352) - v3) / 72 ) /*0x368257*/
  {
    v5 = 0; /*0x368264*/
    v30 = 0; /*0x368266*/
    while ( 1 ) /*0x368270*/
    {
      v6 = v3 + v5; /*0x368270*/
      if ( *(_DWORD *)(v6 + 52) ) /*0x368273*/
        break; /*0x368273*/
LABEL_24:
      v29 = ++v2; /*0x368435*/
      v5 = v30 + 72; /*0x36843d*/
      v30 += 72; /*0x368441*/
      v3 = *(_QWORD *)(a1 + 344); /*0x368445*/
      if ( v2 >= (unsigned __int64)((*(_QWORD *)(a1 + 352) - v3) / 72) ) /*0x368477*/
        goto LABEL_25; /*0x368477*/
    }
    v7 = sub_362560(a1, *(unsigned int *)(v6 + 20)); /*0x368288*/
    v8 = *(unsigned int *)(v6 + 20); /*0x36828b*/
    if ( (_DWORD)v8 ) /*0x368293*/
    {
      if ( (_DWORD)v8 == 1010 ) /*0x36829c*/
      {
        v26 = 0; /*0x3682cc*/
        v10 = 0; /*0x3682d0*/
        goto LABEL_11; /*0x3682d7*/
      }
      if ( (_DWORD)v8 != 1011 ) /*0x3682a2*/
      {
        v9 = sub_362560(a1, v8); /*0x3682a7*/
        if ( v9 ) /*0x3682af*/
        {
          v26 = *(_WORD *)(v9 + 327); /*0x3682b8*/
          v10 = *(_BYTE *)(v9 + 329); /*0x3682bc*/
          goto LABEL_11; /*0x3682c3*/
        }
      }
    }
    v26 = -1; /*0x3682e0*/
    v10 = -1; /*0x3682e4*/
LABEL_11:
    v27 = v10; /*0x3682eb*/
    v11 = sub_368560(a1, &v28, &v26, v6); /*0x3682fc*/
    *(_WORD *)(v7 + 336) = *(_WORD *)v11; /*0x368304*/
    *(_BYTE *)(v7 + 338) = *(_BYTE *)(v11 + 2); /*0x368310*/
    if ( Src[1] == v25 ) /*0x368322*/
    {
      v12 = ((char *)Src[1] - (char *)Src[0]) >> 3; /*0x36833f*/
      if ( v12 == 0x1FFFFFFFFFFFFFFFLL ) /*0x368350*/
        sub_59000(); /*0x36854d*/
      v13 = v12 + 1; /*0x368356*/
      v14 = (v25 - (char *)Src[0]) >> 3; /*0x36835d*/
      v15 = v14 >> 1; /*0x368364*/
      if ( v14 <= 0x1FFFFFFFFFFFFFFFLL - (v14 >> 1) ) /*0x368370*/
      {
        v17 = v15 + v14; /*0x368377*/
        v16 = v12 + 1; /*0x36837b*/
        if ( v17 >= v13 ) /*0x368381*/
          v16 = v17; /*0x368381*/
        if ( v16 > 0x1FFFFFFFFFFFFFFFLL ) /*0x368388*/
          sub_8CF0(v16, v15); /*0x368553*/
      }
      else
      {
        v16 = 0x1FFFFFFFFFFFFFFFLL; /*0x368372*/
      }
      v18 = v16; /*0x36838e*/
      v4 = (_QWORD *)sub_3C460(8 * v16); /*0x36839e*/
      v4[v12] = v7; /*0x3683a1*/
      memmove(v4, Src[0], (char *)Src[1] - (char *)Src[0]); /*0x3683d7*/
      v19 = Src[0]; /*0x3683dc*/
      if ( Src[0] ) /*0x3683e3*/
      {
        if ( ((v25 - (char *)Src[0]) & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 ) /*0x3683fa*/
        {
          v19 = (void *)*((_QWORD *)Src[0] - 1); /*0x368400*/
          if ( (unsigned __int64)((char *)Src[0] - (char *)v19 - 8) > 0x1F ) /*0x36840f*/
            invoke_watson(0, 0, 0, 0, 0); /*0x36852d*/
        }
        j_j_free(v19); /*0x368415*/
      }
      Src[0] = v4; /*0x36841a*/
      Src[1] = &v4[v13]; /*0x368422*/
      v25 = (char *)&v4[v18]; /*0x36842a*/
      v2 = v29; /*0x36842e*/
    }
    else
    {
      *(_QWORD *)Src[1] = v7; /*0x368324*/
      Src[1] = (char *)Src[1] + 8; /*0x368327*/
      v4 = Src[0]; /*0x36832c*/
    }
    goto LABEL_24; /*0x368330*/
  }
LABEL_25:
  v20 = 0; /*0x36847d*/
  if ( ((char *)Src[1] - (char *)v4) >> 3 ) /*0x368487*/
  {
    v21 = 0; /*0x368490*/
    do /*0x3684cd*/
    {
      v22 = v4[v21]; /*0x368492*/
      *(_WORD *)(v22 + 327) = *(_WORD *)(v22 + 336); /*0x36849d*/
      *(_BYTE *)(v22 + 329) = *(_BYTE *)(v22 + 338); /*0x3684ab*/
      ++v20; /*0x3684b1*/
      ++v21; /*0x3684b4*/
      v4 = Src[0]; /*0x3684bc*/
    }
    while ( v20 < (unsigned __int64)(((char *)Src[1] - (char *)Src[0]) >> 3) ); /*0x3684cd*/
  }
  if ( v4 ) /*0x3684d2*/
  {
    v23 = (char *)v4; /*0x3684df*/
    if ( ((v25 - (char *)v4) & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 ) /*0x3684e9*/
    {
      v4 = (_QWORD *)*(v4 - 1); /*0x3684ef*/
      if ( (unsigned __int64)(v23 - (char *)v4 - 8) > 0x1F ) /*0x3684fe*/
        invoke_watson(0, 0, 0, 0, 0); /*0x368513*/
    }
    j_j_free(v4); /*0x368537*/
  }
}

// [6/56] Address: 0x369c60
// Method: LevelEditorLayer::getLastObjectX
void __fastcall LevelEditorLayer_getLastObjectX(__int64 a1)
{
  _QWORD *v1; // rsi
  _QWORD *v2; // rbx
  __int64 v3; // rbp
  int v4; // edi
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD **)(a1 + 888); /*0x369c6a*/
  v2 = (_QWORD *)*v1; /*0x369c71*/
  if ( (_QWORD *)*v1 != v1 ) /*0x369c77*/
  {
    v3 = a1 + 816; /*0x369c7e*/
    do /*0x369cc8*/
    {
      v4 = *((_DWORD *)v2 + 5); /*0x369c90*/
      v6 = *((_DWORD *)v2 + 4); /*0x369c99*/
      if ( v4 ) /*0x369c9f*/
        *(_DWORD *)(*(_QWORD *)sub_66DF0(v3, v5, &v6) + 20LL) = v4; /*0x369cbf*/
      else
        sub_658F0(v3, &v6); /*0x369ca6*/
      v2 = (_QWORD *)*v2; /*0x369cc2*/
    }
    while ( v2 != v1 ); /*0x369cc8*/
  }
}

// [7/56] Address: 0x3e9540
// Method: LevelEditorLayer::~LevelEditorLayer
__int64 __fastcall LevelEditorLayer__dtor_LevelEditorLayer(_QWORD *a1)
{
  __int64 v2; // rbx
  const void *v3; // rdx
  const void *v4; // rcx
  __int64 v5; // rsi
  _QWORD *v6; // rax
  size_t v7; // r8
  char v8; // si
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rax
  void *v15; // rdx
  __int64 v16; // rax
  const char *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  char *v21; // rcx
  cocos2d::CCObject *v22; // rcx
  cocos2d::CCObject *v23; // rcx
  cocos2d::CCObject *v24; // rcx
  cocos2d::CCObject *v25; // rcx
  cocos2d::CCObject *v26; // rcx
  cocos2d::CCObject *v27; // rcx
  cocos2d::CCObject *v28; // rcx
  cocos2d::CCObject *v29; // rcx
  cocos2d::CCObject *v30; // rcx
  cocos2d::CCObject *v31; // rcx
  cocos2d::CCObject *v32; // rcx
  cocos2d::CCObject *v33; // rcx
  cocos2d::CCObject *v34; // rcx
  cocos2d::CCObject *v35; // rcx
  cocos2d::CCObject *v36; // rcx
  cocos2d::CCObject *v37; // rcx
  cocos2d::CCObject *v38; // rcx
  cocos2d::CCObject *v39; // rcx
  cocos2d::CCObject *v40; // rcx
  cocos2d::CCObject *v41; // rcx
  cocos2d::CCObject *v42; // rcx
  cocos2d::CCObject *v43; // rcx
  cocos2d::CCObject *v44; // rcx
  cocos2d::CCObject *v45; // rcx
  cocos2d::CCObject *v46; // rcx
  cocos2d::CCObject *v47; // rcx
  void **v48; // rsi
  void **i; // rbx
  void **v50; // rsi
  void **j; // rbx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  void *v55; // rax
  _QWORD *v56; // rcx
  _QWORD *v57; // rcx
  _QWORD *v58; // rcx
  _QWORD *v59; // rcx
  _QWORD *v60; // rcx
  void *v61; // rcx
  char *FileName[2]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v64; // [rsp+40h] [rbp-48h]
  _BYTE Src[32]; // [rsp+50h] [rbp-38h] BYREF

  *a1 = &LevelEditorLayer::`vftable'; /*0x3e9570*/
  a1[40] = &LevelEditorLayer::`vftable'; /*0x3e957a*/
  a1[41] = &LevelEditorLayer::`vftable'; /*0x3e9588*/
  a1[42] = &LevelEditorLayer::`vftable'; /*0x3e9596*/
  a1[43] = &LevelEditorLayer::`vftable'; /*0x3e95a4*/
  a1[44] = &LevelEditorLayer::`vftable'; /*0x3e95b2*/
  a1[51] = &LevelEditorLayer::`vftable'; /*0x3e95c0*/
  a1[1839] = &LevelEditorLayer::`vftable'; /*0x3e95ce*/
  sub_406000(); /*0x3e95d5*/
  v2 = ((__int64 (*)(void))sub_466AC0)() + 496; /*0x3e95df*/
  if ( Mtx_lock((_Mtx_t)v2) ) /*0x3e95e9*/
  {
    std::_Throw_Cpp_error(5); /*0x3e95f8*/
    __debugbreak(); /*0x3e95fe*/
  }
  if ( *(_DWORD *)(v2 + 76) == 0x7FFFFFFF ) /*0x3e9607*/
  {
    *(_DWORD *)(v2 + 76) = 2147483646; /*0x3e960b*/
    std::_Throw_Cpp_error(6); /*0x3e9613*/
    __debugbreak(); /*0x3e9619*/
  }
  if ( !*(_QWORD *)(((__int64 (*)(void))sub_466AC0)() + 624) ) /*0x3e961f*/
    goto LABEL_14; /*0x3e961f*/
  v5 = ((__int64 (*)(void))sub_466AC0)() + 576; /*0x3e962e*/
  v6 = (_QWORD *)((__int64 (*)(void))sub_466AC0)(); /*0x3e9635*/
  v3 = (const void *)v5; /*0x3e963a*/
  if ( *(_QWORD *)(v5 + 24) > 0xFu ) /*0x3e9642*/
    v3 = *(const void **)v5; /*0x3e9644*/
  v4 = v6 + 76; /*0x3e9647*/
  if ( v6[79] > 0xFu ) /*0x3e9656*/
    v4 = (const void *)v6[76]; /*0x3e9658*/
  v7 = v6[78]; /*0x3e965f*/
  if ( v7 == *(_QWORD *)(v5 + 16) && (!v7 || !memcmp(v4, v3, v7)) ) /*0x3e9671*/
    v8 = 1; /*0x3e967a*/
  else
LABEL_14:
    v8 = 0; /*0x3e967f*/
  v10 = *(unsigned __int8 *)(sub_466AC0(v4, v3) + 673); /*0x3e9687*/
  if ( !(_BYTE)v10 && *(_QWORD *)(sub_466AC0(v10, v9) + 592) && !v8 ) /*0x3e96ad*/
  {
    v13 = sub_466AC0(v12, v11) + 576; /*0x3e96b8*/
    v14 = cocos2d::CCFileUtils::sharedFileUtils(); /*0x3e96bf*/
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v14 + 136LL))(v14, Src); /*0x3e96d7*/
    v15 = (void *)v13; /*0x3e96da*/
    if ( *(_QWORD *)(v13 + 24) > 0xFu ) /*0x3e96e2*/
      v15 = *(void **)v13; /*0x3e96e4*/
    v16 = sub_43D80(Src, v15, *(_QWORD *)(v13 + 16)); /*0x3e96f0*/
    *(_OWORD *)FileName = 0; /*0x3e96f8*/
    v64 = 0u; /*0x3e96fd*/
    *(_OWORD *)FileName = *(_OWORD *)v16; /*0x3e970a*/
    v64 = *(_OWORD *)(v16 + 16); /*0x3e9713*/
    *(_QWORD *)(v16 + 16) = 0; /*0x3e9718*/
    *(_QWORD *)(v16 + 24) = 15; /*0x3e971c*/
    *(_BYTE *)v16 = 0; /*0x3e9724*/
    sub_3C310(Src); /*0x3e972c*/
    v17 = (const char *)FileName; /*0x3e9731*/
    if ( *((_QWORD *)&v64 + 1) > 0xFu ) /*0x3e973c*/
      v17 = FileName[0]; /*0x3e973c*/
    remove(v17); /*0x3e9742*/
    v20 = (_QWORD *)(sub_466AC0(v19, v18) + 576); /*0x3e974d*/
    v20[2] = 0; /*0x3e9753*/
    if ( v20[3] > 0xFu ) /*0x3e975c*/
      v20 = (_QWORD *)*v20; /*0x3e975e*/
    *(_BYTE *)v20 = 0; /*0x3e9761*/
    if ( *((_QWORD *)&v64 + 1) > 0xFu ) /*0x3e976d*/
    {
      v21 = FileName[0]; /*0x3e9772*/
      if ( (unsigned __int64)(*((_QWORD *)&v64 + 1) + 1LL) >= 0x1000 ) /*0x3e9781*/
      {
        v21 = (char *)*((_QWORD *)FileName[0] - 1); /*0x3e9787*/
        if ( (unsigned __int64)(FileName[0] - v21 - 8) > 0x1F ) /*0x3e9796*/
          invoke_watson(0, 0, 0, 0, 0); /*0x3e97a7*/
      }
      j_j_free(v21); /*0x3e97ae*/
    }
  }
  Mtx_unlock((_Mtx_t)v2); /*0x3e97b6*/
  v22 = (cocos2d::CCObject *)a1[1872]; /*0x3e97bc*/
  if ( v22 ) /*0x3e97c6*/
    cocos2d::CCObject::release(v22); /*0x3e97c8*/
  v23 = (cocos2d::CCObject *)a1[1873]; /*0x3e97ce*/
  if ( v23 ) /*0x3e97d8*/
    cocos2d::CCObject::release(v23); /*0x3e97da*/
  v24 = (cocos2d::CCObject *)a1[271]; /*0x3e97e0*/
  if ( v24 ) /*0x3e97ea*/
    cocos2d::CCObject::release(v24); /*0x3e97ec*/
  v25 = (cocos2d::CCObject *)a1[449]; /*0x3e97f2*/
  if ( v25 ) /*0x3e97fc*/
    cocos2d::CCObject::release(v25); /*0x3e97fe*/
  v26 = (cocos2d::CCObject *)a1[1867]; /*0x3e9804*/
  if ( v26 ) /*0x3e980e*/
    cocos2d::CCObject::release(v26); /*0x3e9810*/
  v27 = (cocos2d::CCObject *)a1[448]; /*0x3e9816*/
  if ( v27 ) /*0x3e9820*/
    cocos2d::CCObject::release(v27); /*0x3e9822*/
  v28 = (cocos2d::CCObject *)a1[1622]; /*0x3e9828*/
  if ( v28 ) /*0x3e9832*/
    cocos2d::CCObject::release(v28); /*0x3e9834*/
  v29 = (cocos2d::CCObject *)a1[1855]; /*0x3e983a*/
  if ( v29 ) /*0x3e9844*/
    cocos2d::CCObject::release(v29); /*0x3e9846*/
  v30 = (cocos2d::CCObject *)a1[1856]; /*0x3e984c*/
  if ( v30 ) /*0x3e9856*/
    cocos2d::CCObject::release(v30); /*0x3e9858*/
  v31 = (cocos2d::CCObject *)a1[1844]; /*0x3e985e*/
  if ( v31 ) /*0x3e9868*/
    cocos2d::CCObject::release(v31); /*0x3e986a*/
  v32 = (cocos2d::CCObject *)a1[1845]; /*0x3e9870*/
  if ( v32 ) /*0x3e987a*/
    cocos2d::CCObject::release(v32); /*0x3e987c*/
  v33 = (cocos2d::CCObject *)a1[1846]; /*0x3e9882*/
  if ( v33 ) /*0x3e988c*/
    cocos2d::CCObject::release(v33); /*0x3e988e*/
  v34 = (cocos2d::CCObject *)a1[1847]; /*0x3e9894*/
  if ( v34 ) /*0x3e989e*/
    cocos2d::CCObject::release(v34); /*0x3e98a0*/
  v35 = (cocos2d::CCObject *)a1[1849]; /*0x3e98a6*/
  if ( v35 ) /*0x3e98b0*/
    cocos2d::CCObject::release(v35); /*0x3e98b2*/
  v36 = (cocos2d::CCObject *)a1[1854]; /*0x3e98b8*/
  if ( v36 ) /*0x3e98c2*/
    cocos2d::CCObject::release(v36); /*0x3e98c4*/
  v37 = (cocos2d::CCObject *)a1[1848]; /*0x3e98ca*/
  if ( v37 ) /*0x3e98d4*/
    cocos2d::CCObject::release(v37); /*0x3e98d6*/
  v38 = (cocos2d::CCObject *)a1[1853]; /*0x3e98dc*/
  if ( v38 ) /*0x3e98e6*/
    cocos2d::CCObject::release(v38); /*0x3e98e8*/
  v39 = (cocos2d::CCObject *)a1[1862]; /*0x3e98ee*/
  if ( v39 ) /*0x3e98f8*/
    cocos2d::CCObject::release(v39); /*0x3e98fa*/
  v40 = (cocos2d::CCObject *)a1[1888]; /*0x3e9900*/
  if ( v40 ) /*0x3e990a*/
    cocos2d::CCObject::release(v40); /*0x3e990c*/
  v41 = (cocos2d::CCObject *)a1[1864]; /*0x3e9912*/
  if ( v41 ) /*0x3e991c*/
    cocos2d::CCObject::release(v41); /*0x3e991e*/
  v42 = (cocos2d::CCObject *)a1[1865]; /*0x3e9924*/
  if ( v42 ) /*0x3e992e*/
    cocos2d::CCObject::release(v42); /*0x3e9930*/
  v43 = (cocos2d::CCObject *)a1[1857]; /*0x3e9936*/
  if ( v43 ) /*0x3e9940*/
    cocos2d::CCObject::release(v43); /*0x3e9942*/
  v44 = (cocos2d::CCObject *)a1[1858]; /*0x3e9948*/
  if ( v44 ) /*0x3e9952*/
    cocos2d::CCObject::release(v44); /*0x3e9954*/
  v45 = (cocos2d::CCObject *)a1[1850]; /*0x3e995a*/
  if ( v45 ) /*0x3e9964*/
    cocos2d::CCObject::release(v45); /*0x3e9966*/
  v46 = (cocos2d::CCObject *)a1[1851]; /*0x3e996c*/
  if ( v46 ) /*0x3e9976*/
    cocos2d::CCObject::release(v46); /*0x3e9978*/
  v47 = (cocos2d::CCObject *)a1[1852]; /*0x3e997e*/
  if ( v47 ) /*0x3e9988*/
    cocos2d::CCObject::release(v47); /*0x3e998a*/
  v48 = (void **)a1[1953]; /*0x3e9990*/
  for ( i = (void **)a1[1952]; i != v48; ++i ) /*0x3e99a1*/
    j_j_free(*i); /*0x3e99ab*/
  v50 = (void **)a1[1956]; /*0x3e99b9*/
  for ( j = (void **)a1[1955]; j != v50; ++j ) /*0x3e99ca*/
    j_j_free(*j); /*0x3e99d8*/
  v52 = a1[1952]; /*0x3e99e6*/
  if ( v52 != a1[1953] ) /*0x3e99f4*/
    a1[1953] = v52; /*0x3e99f6*/
  v53 = a1[1955]; /*0x3e99fd*/
  if ( v53 != a1[1956] ) /*0x3e9a0b*/
    a1[1956] = v53; /*0x3e9a0d*/
  v54 = qword_905FD0; /*0x3e9a14*/
  if ( !qword_905FD0 ) /*0x3e9a1e*/
  {
    v55 = operator new(0x6E8u); /*0x3e9a25*/
    qword_905FD0 = sub_2723A0(v55); /*0x3e9a32*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3e9a43*/
    v54 = qword_905FD0; /*0x3e9a45*/
  }
  *(_QWORD *)(v54 + 568) = 0; /*0x3e9a4c*/
  *(_BYTE *)(v54 + 738) = 0; /*0x3e9a53*/
  sub_3C310(a1 + 1989); /*0x3e9a61*/
  sub_3C310(a1 + 1985); /*0x3e9a6d*/
  sub_3DA90(a1 + 1979); /*0x3e9a79*/
  sub_410540(a1 + 1977); /*0x3e9a85*/
  sub_410690(a1 + 1973); /*0x3e9a91*/
  sub_410690(a1 + 1970); /*0x3e9a9d*/
  sub_3DA90(a1 + 1961); /*0x3e9aa9*/
  sub_3DB00(a1 + 1959); /*0x3e9ab5*/
  v56 = (_QWORD *)a1[1955]; /*0x3e9aba*/
  if ( v56 ) /*0x3e9ac4*/
  {
    if ( ((a1[1957] - (_QWORD)v56) & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 ) /*0x3e9adb*/
    {
      if ( (unsigned __int64)v56 - *(v56 - 1) - 8 > 0x1F ) /*0x3e9af0*/
        goto LABEL_122; /*0x3e9af0*/
      v56 = (_QWORD *)*(v56 - 1); /*0x3e9af6*/
    }
    j_j_free(v56); /*0x3e9af9*/
    a1[1955] = 0; /*0x3e9afe*/
    a1[1956] = 0; /*0x3e9b05*/
    a1[1957] = 0; /*0x3e9b0c*/
  }
  v57 = (_QWORD *)a1[1952]; /*0x3e9b13*/
  if ( v57 ) /*0x3e9b1d*/
  {
    if ( ((a1[1954] - (_QWORD)v57) & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 ) /*0x3e9b34*/
    {
      if ( (unsigned __int64)v57 - *(v57 - 1) - 8 > 0x1F ) /*0x3e9b49*/
        goto LABEL_122; /*0x3e9b49*/
      v57 = (_QWORD *)*(v57 - 1); /*0x3e9b4f*/
    }
    j_j_free(v57); /*0x3e9b52*/
    a1[1952] = 0; /*0x3e9b57*/
    a1[1953] = 0; /*0x3e9b5e*/
    a1[1954] = 0; /*0x3e9b65*/
  }
  sub_685C0(a1 + 1929); /*0x3e9b73*/
  v58 = (_QWORD *)a1[1926]; /*0x3e9b78*/
  if ( v58 ) /*0x3e9b82*/
  {
    if ( a1[1928] - (_QWORD)v58 >= 0x1000u ) /*0x3e9b95*/
    {
      if ( (unsigned __int64)v58 - *(v58 - 1) - 8 > 0x1F ) /*0x3e9baa*/
        goto LABEL_122; /*0x3e9baa*/
      v58 = (_QWORD *)*(v58 - 1); /*0x3e9bb0*/
    }
    j_j_free(v58); /*0x3e9bb3*/
    a1[1926] = 0; /*0x3e9bb8*/
    a1[1927] = 0; /*0x3e9bbf*/
    a1[1928] = 0; /*0x3e9bc6*/
  }
  sub_685C0(a1 + 1922); /*0x3e9bd4*/
  sub_685C0(a1 + 1918); /*0x3e9be0*/
  sub_3DA90(a1 + 1914); /*0x3e9bec*/
  sub_685C0(a1 + 1909); /*0x3e9bf8*/
  sub_685C0(a1 + 1905); /*0x3e9c04*/
  sub_685C0(a1 + 1901); /*0x3e9c10*/
  sub_3DA90(a1 + 1898); /*0x3e9c1c*/
  sub_410720(a1 + 1895); /*0x3e9c28*/
  sub_3DA90(a1 + 1892); /*0x3e9c34*/
  v59 = (_QWORD *)a1[1889]; /*0x3e9c39*/
  if ( v59 ) /*0x3e9c43*/
  {
    if ( ((a1[1891] - (_QWORD)v59) & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 ) /*0x3e9c5a*/
    {
      if ( (unsigned __int64)v59 - *(v59 - 1) - 8 > 0x1F ) /*0x3e9c6f*/
        goto LABEL_122; /*0x3e9c6f*/
      v59 = (_QWORD *)*(v59 - 1); /*0x3e9c75*/
    }
    j_j_free(v59); /*0x3e9c78*/
    a1[1889] = 0; /*0x3e9c7d*/
    a1[1890] = 0; /*0x3e9c84*/
    a1[1891] = 0; /*0x3e9c8b*/
  }
  v60 = (_QWORD *)a1[1885]; /*0x3e9c92*/
  if ( v60 ) /*0x3e9c9c*/
  {
    if ( ((a1[1887] - (_QWORD)v60) & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 ) /*0x3e9cb3*/
    {
      if ( (unsigned __int64)v60 - *(v60 - 1) - 8 > 0x1F ) /*0x3e9cc8*/
        goto LABEL_122; /*0x3e9cc8*/
      v60 = (_QWORD *)*(v60 - 1); /*0x3e9cce*/
    }
    j_j_free(v60); /*0x3e9cd1*/
    a1[1885] = 0; /*0x3e9cd6*/
    a1[1886] = 0; /*0x3e9cdd*/
    a1[1887] = 0; /*0x3e9ce4*/
  }
  v61 = (void *)a1[1882]; /*0x3e9ceb*/
  if ( v61 ) /*0x3e9cf5*/
  {
    if ( ((a1[1884] - (_QWORD)v61) & 0xFFFFFFFFFFFFFFF8uLL) < 0x1000 ) /*0x3e9d0c*/
    {
LABEL_120:
      j_j_free(v61); /*0x3e9d26*/
      a1[1882] = 0; /*0x3e9d2b*/
      a1[1883] = 0; /*0x3e9d32*/
      a1[1884] = 0; /*0x3e9d39*/
      goto LABEL_121; /*0x3e9d39*/
    }
    if ( (unsigned __int64)v61 - *((_QWORD *)v61 - 1) - 8 <= 0x1F ) /*0x3e9d21*/
    {
      v61 = (void *)*((_QWORD *)v61 - 1); /*0x3e9d23*/
      goto LABEL_120; /*0x3e9d23*/
    }
LABEL_122:
    invoke_watson(0, 0, 0, 0, 0); /*0x3e9d7b*/
  }
LABEL_121:
  sub_3C310(a1 + 1878); /*0x3e9d40*/
  return GJBaseGameLayer__dtor_GJBaseGameLayer(a1); /*0x3e9d55*/
}

// [8/56] Address: 0x3e9da0
// Method: LevelEditorLayer::create
// Hidden C++ exception states: #wind=1
cocos2d::CCObject *__fastcall LevelEditorLayer_create(__int64 a1, unsigned __int8 a2)
{
  __int64 v4; // rax
  cocos2d::CCObject *v5; // rbx
  void *v7; // [rsp+40h] [rbp+18h]

  v7 = operator new(0x3E48u); /*0x3e9dbf*/
  v4 = PlayerObject_PlayerObject((__int64)v7); /*0x3e9dc7*/
  v5 = (cocos2d::CCObject *)v4; /*0x3e9dcc*/
  if ( v4 ) /*0x3e9dd2*/
  {
    if ( (unsigned __int8)sub_3E9E30(v4, a1, a2) ) /*0x3e9dde*/
    {
      cocos2d::CCObject::autorelease(v5); /*0x3e9dea*/
      return v5; /*0x3e9e02*/
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v5 + 8LL))(v5, 1); /*0x3e9e0b*/
    return 0; /*0x3e9e0e*/
  }
  return v5; /*0x3e9df3*/
}

// [9/56] Address: 0x3ebd60
// Method: LevelEditorLayer::levelSettingsUpdated
__int64 __fastcall LevelEditorLayer_levelSettingsUpdated(__int64 a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rdi
  _BYTE *v4; // rdx
  float v5; // xmm1_4
  __int64 result; // rax
  unsigned int *v7; // rbx
  _QWORD *v8; // rbx
  _QWORD *i; // rsi
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 - 12544); /*0x3ebd6a*/
  v2 = (_QWORD *)(a1 - 14712); /*0x3ebd71*/
  if ( *(_DWORD *)(v1 + 680) ) /*0x3ebd7b*/
  {
    sub_3E4F0(v10, *(_QWORD *)(a1 - 11120) + 392LL); /*0x3ebd97*/
    v4 = v10; /*0x3ebd9c*/
  }
  else
  {
    v4 = (_BYTE *)sub_462330(v10, *(unsigned int *)(v1 + 676)); /*0x3ebdb3*/
  }
  sub_406670(*(_QWORD *)(a1 + 296), v4); /*0x3ebdbd*/
  v5 = *(float *)(a1 - 404); /*0x3ebdc2*/
  result = GJBaseGameLayer_loadLevelSettings(v2); /*0x3ebdcd*/
  if ( v5 != *(float *)(a1 - 404) ) /*0x3ebddb*/
  {
    result = v2[450]; /*0x3ebddd*/
    if ( result ) /*0x3ebde7*/
    {
      v7 = *(unsigned int **)(result + 56); /*0x3ebde9*/
      result = *v7; /*0x3ebded*/
      if ( (_DWORD)result ) /*0x3ebdf1*/
      {
        v8 = (_QWORD *)*((_QWORD *)v7 + 2); /*0x3ebdf3*/
        for ( i = &v8[result - 1]; v8 <= i; ++v8 ) /*0x3ebe07*/
        {
          if ( !*v8 ) /*0x3ebe10*/
            break; /*0x3ebe16*/
          result = (*(__int64 (__fastcall **)(_QWORD *))(*v2 + 1216LL))(v2); /*0x3ebe1e*/
        }
      }
    }
  }
  return result; /*0x3ebe32*/
}

// [10/56] Address: 0x3ed0e0
// Method: LevelEditorLayer::typeExistsAtPosition
char __fastcall LevelEditorLayer_typeExistsAtPosition(__int64 a1, int a2, float *a3, char a4, char a5, float a6)
{
  char v8; // bl
  float *v10; // rax
  float v11; // xmm3_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm3_4
  float v16; // xmm1_4
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // edx
  int v20; // r10d
  int v21; // ecx
  int v22; // eax
  float v23; // xmm8_4
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rdx
  __int64 v27; // r12
  _QWORD *v28; // r15
  __int64 v29; // rsi
  __int64 v30; // rbp
  __int64 v31; // rdi
  int v32; // eax
  int v33; // ecx
  char v34; // al
  float v35; // xmm6_4
  double v36; // xmm0_8
  float v37; // xmm7_4
  float v38; // xmm6_4
  double v39; // xmm0_8
  float *v40; // rbx
  __int64 v41; // rax
  const struct cocos2d::CCPoint *v42; // rax
  float *v43; // rax
  float v45; // [rsp+30h] [rbp-D8h] BYREF
  float v46; // [rsp+34h] [rbp-D4h]
  float v47[2]; // [rsp+38h] [rbp-D0h] BYREF
  float v48[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v49; // [rsp+48h] [rbp-C0h]
  __int64 v50; // [rsp+50h] [rbp-B8h]
  __int64 v51; // [rsp+58h] [rbp-B0h]
  __int64 v52; // [rsp+60h] [rbp-A8h]
  _BYTE v53[8]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v54[16]; // [rsp+70h] [rbp-98h] BYREF
  int v55; // [rsp+110h] [rbp+8h] BYREF
  const struct cocos2d::CCPoint *v56; // [rsp+120h] [rbp+18h]
  char v57; // [rsp+128h] [rbp+20h]

  v57 = a4; /*0x3ed0e3*/
  v56 = (const struct cocos2d::CCPoint *)a3; /*0x3ed0e7*/
  v8 = a4; /*0x3ed10a*/
  v10 = (float *)cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v55, (const struct cocos2d::CCPoint *)a3); /*0x3ed111*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v47, *v10 / 30.0, v10[1] / 30.0); /*0x3ed138*/
  v11 = *a3; /*0x3ed13e*/
  v12 = 0.0; /*0x3ed142*/
  if ( *a3 > 0.0 ) /*0x3ed150*/
  {
    v14 = *(float *)(a1 + 14304); /*0x3ed15a*/
    if ( v11 < 10000000.0 ) /*0x3ed163*/
      v13 = v14 * v11; /*0x3ed16b*/
    else
      v13 = v14 * 10000000.0; /*0x3ed165*/
  }
  else
  {
    v13 = 0.0; /*0x3ed152*/
  }
  v15 = a3[1]; /*0x3ed16f*/
  if ( v15 > 0.0 ) /*0x3ed177*/
  {
    v16 = *(float *)(a1 + 14308); /*0x3ed17c*/
    if ( v15 < 10000000.0 ) /*0x3ed185*/
      v12 = v16 * v15; /*0x3ed18d*/
    else
      v12 = v16 * 10000000.0; /*0x3ed187*/
  }
  v17 = *(_QWORD *)(a1 + 14048); /*0x3ed191*/
  v18 = *(_QWORD *)(a1 + 14040); /*0x3ed198*/
  v19 = (int)v13 + 1; /*0x3ed1f6*/
  if ( v19 >= (unsigned __int64)(((v17 - v18) >> 3) - 1) ) /*0x3ed1fe*/
    v19 = ((v17 - v18) >> 3) - 1; /*0x3ed1fe*/
  v20 = 0; /*0x3ed201*/
  if ( (int)v12 - 1 >= 0 ) /*0x3ed20d*/
    v20 = (int)v12 - 1; /*0x3ed20d*/
  v21 = (int)v12 + 1; /*0x3ed211*/
  v55 = v21; /*0x3ed213*/
  if ( v18 != v17 ) /*0x3ed21d*/
  {
    v22 = 0; /*0x3ed223*/
    if ( (int)v13 - 1 >= 0 ) /*0x3ed228*/
      v22 = (int)v13 - 1; /*0x3ed228*/
    if ( v22 <= v19 ) /*0x3ed22e*/
    {
      v23 = a6; /*0x3ed234*/
      v24 = v22; /*0x3ed247*/
      v25 = v20; /*0x3ed24a*/
      v52 = v19; /*0x3ed256*/
      v49 = v22; /*0x3ed25b*/
      v51 = v20; /*0x3ed260*/
      while ( 1 ) /*0x3ed277*/
      {
        v26 = *(_QWORD **)(*(_QWORD *)(a1 + 14040) + 8 * v24); /*0x3ed277*/
        if ( v26 ) /*0x3ed27e*/
        {
          if ( v21 >= (unsigned __int64)(((__int64)(v26[1] - *v26) >> 3) - 1) ) /*0x3ed294*/
            v21 = ((__int64)(v26[1] - *v26) >> 3) - 1; /*0x3ed294*/
        }
        else
        {
          v21 = -1; /*0x3ed299*/
        }
        v27 = v25; /*0x3ed29f*/
        v50 = v21; /*0x3ed2a2*/
        if ( v25 <= v21 ) /*0x3ed2aa*/
        {
          do /*0x3ed4b1*/
          {
            v28 = *(_QWORD **)(**(_QWORD **)(*(_QWORD *)(a1 + 14040) + 8 * v24) + 8 * v27); /*0x3ed2be*/
            if ( v28 ) /*0x3ed2c5*/
            {
              v29 = 0; /*0x3ed2d2*/
              v30 = *(int *)(**(_QWORD **)(*(_QWORD *)(a1 + 14208) + 8 * v24) + 4 * v27); /*0x3ed2db*/
              if ( v30 > 0 ) /*0x3ed2e2*/
              {
                while ( 1 ) /*0x3ed2f3*/
                {
                  v31 = *(_QWORD *)(*v28 + 8 * v29); /*0x3ed2f3*/
                  v32 = *(__int16 *)(a1 + 14930); /*0x3ed2f7*/
                  v33 = *(__int16 *)(v31 + 1212); /*0x3ed2ff*/
                  if ( !*(_WORD *)(v31 + 1212) ) /*0x3ed2ff*/
                    v33 = -1; /*0x3ed308*/
                  if ( ((_WORD)v32 == 0xFFFF || v32 == *(__int16 *)(v31 + 1210) || v32 == v33) /*0x3ed35e*/
                    && a2 == *(_DWORD *)(v31 + 1036)
                    && (*(float (__fastcall **)(_QWORD))(*(_QWORD *)v31 + 360LL))(*(_QWORD *)(*v28 + 8 * v29)) == v23
                    && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v31 + 1272LL))(v31) == v8 )
                  {
                    v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 1280LL))(v31); /*0x3ed36a*/
                    if ( v34 == a5 ) /*0x3ed377*/
                    {
                      v35 = *(float *)(v31 + 436); /*0x3ed383*/
                      v36 = (*(double (__fastcall **)(__int64))(*(_QWORD *)v31 + 1320LL))(v31); /*0x3ed38b*/
                      v37 = *(float *)&v36 * v35; /*0x3ed39a*/
                      v38 = *(float *)(v31 + 432); /*0x3ed39e*/
                      v39 = (*(double (__fastcall **)(__int64))(*(_QWORD *)v31 + 1312LL))(v31); /*0x3ed3a6*/
                      cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v45, *(float *)&v39 * v38, v37); /*0x3ed3bb*/
                      v40 = (float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 200LL))(v31); /*0x3ed3d0*/
                      v41 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 200LL))(v31); /*0x3ed3dd*/
                      cocos2d::CCRect::CCRect( /*0x3ed417*/
                        (cocos2d::CCRect *)v54,
                        *v40 - (float)(v45 * 0.5),
                        *(float *)(v41 + 4) - (float)(v46 * 0.5),
                        v45,
                        v46);
                      v42 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 200LL))(v31); /*0x3ed423*/
                      v43 = (float *)cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v53, v42); /*0x3ed431*/
                      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v48, *v43 / 30.0, v43[1] / 30.0); /*0x3ed44f*/
                      if ( cocos2d::CCRect::containsPoint((cocos2d::CCRect *)v54, v56) /*0x3ed488*/
                        && v47[0] == v48[0]
                        && v47[1] == v48[1] )
                      {
                        return 1; /*0x3ed4d9*/
                      }
                      v8 = v57; /*0x3ed48a*/
                    }
                  }
                  if ( ++v29 >= v30 ) /*0x3ed49e*/
                  {
                    v24 = v49; /*0x3ed4a4*/
                    break; /*0x3ed4a4*/
                  }
                }
              }
            }
            ++v27; /*0x3ed4a9*/
          }
          while ( v27 <= v50 ); /*0x3ed4b1*/
          v25 = v51; /*0x3ed4b7*/
        }
        v49 = ++v24; /*0x3ed4bf*/
        if ( v24 > v52 ) /*0x3ed4c9*/
          break; /*0x3ed4c9*/
        v21 = v55; /*0x3ed4cb*/
      }
    }
  }
  return 0; /*0x3ed4f7*/
}

// [11/56] Address: 0x3ed540
// Method: LevelEditorLayer::rotationForSlopeNearObject
float __fastcall LevelEditorLayer_rotationForSlopeNearObject(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  cocos2d::CCArray *v6; // rsi
  unsigned int v7; // ebx
  struct cocos2d::CCObject *v8; // rdi
  const struct cocos2d::CCRect *v10; // rax
  float v11; // xmm0_4
  int v12; // ecx
  int v13; // ebx
  int v14; // ecx
  int v15; // ebx
  _BYTE v16[8]; // [rsp+20h] [rbp-28h] BYREF
  float v17; // [rsp+28h] [rbp-20h]
  float v18; // [rsp+2Ch] [rbp-1Ch]
  _BYTE v19[24]; // [rsp+30h] [rbp-18h] BYREF

  sub_28A130(a2); /*0x3ed55e*/
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 1176LL))(a2, v19); /*0x3ed579*/
  v4 = cocos2d::CCRect::CCRect((cocos2d::CCRect *)v16, (const struct cocos2d::CCRect *)v19); /*0x3ed589*/
  LOBYTE(v5) = 1; /*0x3ed58f*/
  v6 = (cocos2d::CCArray *)LevelEditorLayer_objectsInRect(a1, v4, v5); /*0x3ed5a0*/
  v7 = 0; /*0x3ed5a3*/
  if ( !cocos2d::CCArray::count(v6) ) /*0x3ed5a5*/
    return -1.0; /*0x3ed5e1*/
  while ( 1 ) /*0x3ed5bb*/
  {
    v8 = cocos2d::CCArray::objectAtIndex(v6, v7); /*0x3ed5bb*/
    if ( (*(unsigned int (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v8 + 1648LL))(v8) == 25 ) /*0x3ed5d0*/
      break; /*0x3ed5d0*/
    if ( ++v7 >= cocos2d::CCArray::count(v6) ) /*0x3ed5df*/
      return -1.0; /*0x3ed5df*/
  }
  GameObject_determineSlopeDirection(v8); /*0x3ed602*/
  v10 = (const struct cocos2d::CCRect *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v8 + 1184LL))(v8); /*0x3ed60d*/
  cocos2d::CCRect::CCRect((cocos2d::CCRect *)v16, v10); /*0x3ed61b*/
  v11 = atanf(v18 / v17); /*0x3ed62d*/
  v12 = *((_DWORD *)v8 + 273); /*0x3ed63a*/
  v13 = -(int)(float)(v11 * 57.29578); /*0x3ed646*/
  if ( !*((_BYTE *)v8 + 1088) ) /*0x3ed648*/
    v13 = (int)(float)(v11 * 57.29578); /*0x3ed64f*/
  if ( (v12 == 1 || ((v12 - 3) & 0xFFFFFFFC) == 0 && v12 != 4) /*0x3ed696*/
    && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 1280LL))(a2)
    || (v14 = *((_DWORD *)v8 + 273), v14 != 1)
    && (((v14 - 3) & 0xFFFFFFFC) != 0 || v14 == 4)
    && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 1280LL))(a2) )
  {
    if ( v13 <= 0 ) /*0x3ed6a7*/
      v15 = v13 - 180; /*0x3ed6b1*/
    else
      v15 = v13 + 180; /*0x3ed6a9*/
    return (float)(v15 % 360); /*0x3ed6cb*/
  }
  return (float)v13; /*0x3ed5e9*/
}

// [12/56] Address: 0x3ee2a0
// Method: LevelEditorLayer::objectsInRect
cocos2d::CCArray *__fastcall LevelEditorLayer_objectsInRect(__int64 a1, float *a2, char a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  float v8; // xmm6_4
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rcx
  __int64 v12; // rax
  float v13; // xmm1_4
  cocos2d::CCArray *v14; // r12
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm4_4
  float v18; // xmm4_4
  float v19; // xmm4_4
  float v20; // xmm1_4
  float v21; // xmm3_4
  float v22; // xmm3_4
  __int64 v23; // r10
  __int64 v24; // r9
  __int64 v25; // rcx
  float v26; // xmm0_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  int v30; // r8d
  float v31; // xmm0_4
  float v32; // xmm0_4
  float v33; // xmm0_4
  float v34; // xmm0_4
  float v35; // xmm0_4
  float v36; // xmm1_4
  int v37; // edx
  float v38; // xmm6_4
  int v39; // ecx
  __int64 v40; // r9
  __int64 v41; // r8
  _QWORD *v42; // rdx
  __int64 v43; // r15
  _QWORD *v44; // r14
  __int64 v45; // rbx
  __int64 v46; // rbp
  cocos2d::CCRect *v47; // r15
  struct cocos2d::CCObject *v48; // rsi
  __int64 v49; // r9
  __int64 v51; // [rsp+30h] [rbp-78h]
  __int64 v52; // [rsp+38h] [rbp-70h]
  __int64 v53; // [rsp+40h] [rbp-68h]
  __int64 v54; // [rsp+48h] [rbp-60h]
  _BYTE v55[16]; // [rsp+50h] [rbp-58h] BYREF
  int v56; // [rsp+B0h] [rbp+8h] BYREF
  float *v57; // [rsp+B8h] [rbp+10h]
  __int64 v58; // [rsp+C8h] [rbp+20h] BYREF

  v57 = a2; /*0x3ee2a0*/
  v6 = cocos2d::CCRect::CCRect((cocos2d::CCRect *)v55, (const struct cocos2d::CCRect *)a2); /*0x3ee2d5*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v58, *(float *)(v6 + 8) * 0.5, *(float *)(v6 + 12) * 0.5); /*0x3ee2f2*/
  cocos2d::CCPoint::operator+(v6, &v56, v7); /*0x3ee306*/
  v8 = 0.0; /*0x3ee31e*/
  sub_7A310(*(_QWORD *)(a1 + 2312), (int)&v56, v9, v10, 0.0); /*0x3ee32e*/
  v12 = cocos2d::CCArray::create(v11); /*0x3ee333*/
  v13 = *a2; /*0x3ee339*/
  v14 = (cocos2d::CCArray *)v12; /*0x3ee33d*/
  if ( *a2 > 0.0 ) /*0x3ee34b*/
  {
    v16 = *(float *)(a1 + 14304); /*0x3ee355*/
    if ( v13 < 10000000.0 ) /*0x3ee35d*/
      v15 = v16 * v13; /*0x3ee365*/
    else
      v15 = v16 * 10000000.0; /*0x3ee35f*/
  }
  else
  {
    v15 = 0.0; /*0x3ee34d*/
  }
  if ( (float)(v15 - 1.0) >= 0.0 ) /*0x3ee380*/
  {
    if ( v13 > 0.0 ) /*0x3ee38a*/
    {
      v19 = *(float *)(a1 + 14304); /*0x3ee394*/
      if ( v13 < 10000000.0 ) /*0x3ee39a*/
        v18 = v19 * v13; /*0x3ee3a2*/
      else
        v18 = v19 * 10000000.0; /*0x3ee39c*/
    }
    else
    {
      v18 = 0.0; /*0x3ee38c*/
    }
    v17 = v18 - 1.0; /*0x3ee3a6*/
  }
  else
  {
    v17 = 0.0; /*0x3ee382*/
  }
  v20 = v13 + a2[2]; /*0x3ee3aa*/
  if ( v20 > 0.0 ) /*0x3ee3b2*/
  {
    v22 = *(float *)(a1 + 14304); /*0x3ee3bc*/
    if ( v20 < 10000000.0 ) /*0x3ee3c2*/
      v21 = v22 * v20; /*0x3ee3ca*/
    else
      v21 = v22 * 10000000.0; /*0x3ee3c4*/
  }
  else
  {
    v21 = 0.0; /*0x3ee3b4*/
  }
  v23 = *(_QWORD *)(a1 + 14048); /*0x3ee3ce*/
  v24 = *(_QWORD *)(a1 + 14040); /*0x3ee3d8*/
  v25 = ((v23 - v24) >> 3) - 1; /*0x3ee3e9*/
  if ( v25 < 0 ) /*0x3ee3ed*/
    v26 = (float)(v25 & 1 | (unsigned int)((unsigned __int64)v25 >> 1)) /*0x3ee407*/
        + (float)(v25 & 1 | (unsigned int)((unsigned __int64)v25 >> 1));
  else
    v26 = (float)(int)v25; /*0x3ee3ef*/
  if ( v26 > (float)(v21 + 1.0) ) /*0x3ee412*/
  {
    if ( v20 > 0.0 ) /*0x3ee417*/
    {
      v28 = *(float *)(a1 + 14304); /*0x3ee421*/
      if ( v20 < 10000000.0 ) /*0x3ee427*/
        v27 = v28 * v20; /*0x3ee42f*/
      else
        v27 = v28 * 10000000.0; /*0x3ee429*/
    }
    else
    {
      v27 = 0.0; /*0x3ee419*/
    }
    v26 = v27 + 1.0; /*0x3ee433*/
  }
  v29 = a2[1]; /*0x3ee437*/
  v30 = (int)v26; /*0x3ee43f*/
  if ( v29 > 0.0 ) /*0x3ee444*/
  {
    v32 = *(float *)(a1 + 14308); /*0x3ee44e*/
    if ( v29 < 10000000.0 ) /*0x3ee456*/
      v31 = v32 * v29; /*0x3ee45e*/
    else
      v31 = v32 * 10000000.0; /*0x3ee458*/
  }
  else
  {
    v31 = 0.0; /*0x3ee446*/
  }
  if ( (float)(v31 - 1.0) >= 0.0 ) /*0x3ee471*/
  {
    if ( v29 > 0.0 ) /*0x3ee47b*/
    {
      v35 = *(float *)(a1 + 14308); /*0x3ee485*/
      if ( v29 < 10000000.0 ) /*0x3ee48a*/
        v34 = v35 * v29; /*0x3ee492*/
      else
        v34 = v35 * 10000000.0; /*0x3ee48c*/
    }
    else
    {
      v34 = 0.0; /*0x3ee47d*/
    }
    v33 = v34 - 1.0; /*0x3ee496*/
  }
  else
  {
    v33 = 0.0; /*0x3ee473*/
  }
  v36 = v29 + a2[3]; /*0x3ee49a*/
  v37 = (int)v33; /*0x3ee49f*/
  if ( v36 > 0.0 ) /*0x3ee4a6*/
  {
    v38 = *(float *)(a1 + 14308); /*0x3ee4ab*/
    if ( v36 < 10000000.0 ) /*0x3ee4b0*/
      v8 = v38 * v36; /*0x3ee4b8*/
    else
      v8 = v38 * 10000000.0; /*0x3ee4b2*/
  }
  v39 = (int)(float)(v8 + 1.0); /*0x3ee4c0*/
  v56 = v39; /*0x3ee4c9*/
  if ( v24 != v23 ) /*0x3ee4d3*/
  {
    v40 = (int)v17; /*0x3ee4dd*/
    v51 = v40; /*0x3ee4e3*/
    v54 = v30; /*0x3ee4e8*/
    if ( v40 <= v30 ) /*0x3ee4f0*/
    {
      v41 = v37; /*0x3ee4fe*/
      v53 = v37; /*0x3ee50b*/
      while ( 1 ) /*0x3ee517*/
      {
        v42 = *(_QWORD **)(*(_QWORD *)(a1 + 14040) + 8 * v40); /*0x3ee517*/
        if ( v42 ) /*0x3ee51e*/
        {
          if ( v39 >= (unsigned __int64)(((__int64)(v42[1] - *v42) >> 3) - 1) ) /*0x3ee534*/
            v39 = ((__int64)(v42[1] - *v42) >> 3) - 1; /*0x3ee534*/
        }
        else
        {
          v39 = -1; /*0x3ee539*/
        }
        v43 = v41; /*0x3ee541*/
        v58 = v41; /*0x3ee544*/
        v52 = v39; /*0x3ee54c*/
        if ( v41 <= v39 ) /*0x3ee554*/
          break; /*0x3ee554*/
LABEL_70:
        v39 = v56; /*0x3ee65d*/
        v51 = ++v40; /*0x3ee667*/
        if ( v40 > v54 ) /*0x3ee671*/
          return v14; /*0x3ee671*/
      }
      while ( 1 ) /*0x3ee56e*/
      {
        v44 = *(_QWORD **)(**(_QWORD **)(*(_QWORD *)(a1 + 14040) + 8 * v40) + 8 * v43); /*0x3ee56e*/
        if ( v44 ) /*0x3ee575*/
        {
          v45 = 0; /*0x3ee582*/
          v46 = *(int *)(**(_QWORD **)(*(_QWORD *)(a1 + 14208) + 8 * v40) + 4 * v43); /*0x3ee58b*/
          if ( v46 > 0 ) /*0x3ee592*/
            break; /*0x3ee592*/
        }
LABEL_68:
        v58 = ++v43; /*0x3ee645*/
        if ( v43 > v52 ) /*0x3ee652*/
        {
          v41 = v53; /*0x3ee658*/
          goto LABEL_70; /*0x3ee658*/
        }
      }
      v47 = (cocos2d::CCRect *)v57; /*0x3ee598*/
      while ( 1 ) /*0x3ee5a3*/
      {
        v48 = *(struct cocos2d::CCObject **)(*v44 + 8 * v45); /*0x3ee5a3*/
        if ( !a3 ) /*0x3ee5aa*/
        {
          LOBYTE(v41) = 1; /*0x3ee5ac*/
          if ( !(unsigned __int8)sub_3F0840(a1, *(_QWORD *)(*v44 + 8 * v45), v41) ) /*0x3ee5bc*/
            goto LABEL_66; /*0x3ee5bc*/
        }
        sub_3EDE50(a1, v55, v48); /*0x3ee5c9*/
        if ( *(_BYTE *)(a1 + 14965) ) /*0x3ee5ce*/
          break; /*0x3ee5ce*/
        if ( cocos2d::CCRect::intersectsRect(v47, (const struct cocos2d::CCRect *)v55) ) /*0x3ee5df*/
          goto LABEL_65; /*0x3ee5e7*/
        if ( *(_BYTE *)(a1 + 14965) ) /*0x3ee5e9*/
          break; /*0x3ee5e9*/
LABEL_66:
        if ( ++v45 >= v46 ) /*0x3ee62f*/
        {
          v43 = v58; /*0x3ee635*/
          v40 = v51; /*0x3ee63d*/
          goto LABEL_68; /*0x3ee63d*/
        }
      }
      if ( !(unsigned __int8)sub_7AA00(*(_QWORD *)(a1 + 14936), *(_QWORD *)(a1 + 2312)) /*0x3ee614*/
        || !(unsigned __int8)sub_7AA00(v41, v49) )
      {
        goto LABEL_66; /*0x3ee61b*/
      }
LABEL_65:
      cocos2d::CCArray::addObject(v14, v48); /*0x3ee61d*/
      goto LABEL_66; /*0x3ee623*/
    }
  }
  return v14; /*0x3ee68c*/
}

// [13/56] Address: 0x3ee6a0
// Method: LevelEditorLayer::removeObject
// Hidden C++ exception states: #wind=2
void __fastcall LevelEditorLayer_removeObject(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rsi
  cocos2d::CCObject *v5; // r14
  cocos2d::CCObject *v6; // rax
  unsigned int v7; // ebx

  if ( a2 ) /*0x3ee6a3*/
  {
    v3 = a2; /*0x3ee6be*/
    if ( !a3 ) /*0x3ee6c7*/
    {
      ++*(_DWORD *)(a1 + 15480); /*0x3ee6cd*/
      cocos2d::CCArray::removeAllObjects(*(cocos2d::CCArray **)(a1 + 14984)); /*0x3ee6da*/
      v5 = (cocos2d::CCObject *)operator new(0xA0u); /*0x3ee6ea*/
      cocos2d::CCObject::CCObject(v5); /*0x3ee6f5*/
      *(_QWORD *)v5 = &UndoObject::`vftable'; /*0x3ee703*/
      *((_QWORD *)v5 + 7) = 0; /*0x3ee708*/
      *((_DWORD *)v5 + 16) = 0; /*0x3ee70c*/
      *((_QWORD *)v5 + 9) = 0; /*0x3ee710*/
      *((_WORD *)v5 + 40) = 0; /*0x3ee714*/
      sub_1A6040((char *)v5 + 84); /*0x3ee71d*/
      v6 = (cocos2d::CCObject *)GameObjectCopy_create(v3); /*0x3ee726*/
      *((_QWORD *)v5 + 7) = v6; /*0x3ee72b*/
      cocos2d::CCObject::retain(v6); /*0x3ee732*/
      *((_DWORD *)v5 + 16) = 1; /*0x3ee738*/
      cocos2d::CCObject::autorelease(v5); /*0x3ee743*/
      cocos2d::CCArray::removeAllObjects(*(cocos2d::CCArray **)(a1 + 14984)); /*0x3ee750*/
      v7 = 1000; /*0x3ee756*/
      if ( !*(_BYTE *)(a1 + 14726) ) /*0x3ee760*/
        v7 = 200; /*0x3ee767*/
      if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 14976)) >= v7 ) /*0x3ee779*/
        cocos2d::CCArray::removeObjectAtIndex(*(cocos2d::CCArray **)(a1 + 14976), 0, 1); /*0x3ee787*/
      cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 14976), v5); /*0x3ee797*/
    }
    LOBYTE(a2) = 1; /*0x3ee7a0*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 1160LL))(v3, a2); /*0x3ee7a5*/
    GJBaseGameLayer_removeObjectFromSection(a1, v3); /*0x3ee7b1*/
    sub_3F1780(a1, v3); /*0x3ee7bc*/
    *(_BYTE *)(a1 + 15730) = 1; /*0x3ee7c1*/
  }
}

// [14/56] Address: 0x3ee7e0
// Method: LevelEditorLayer::removeAllObjectsOfType
// Hidden C++ exception states: #wind=4
void __fastcall LevelEditorLayer_removeAllObjectsOfType(__int64 a1, int a2)
{
  cocos2d::CCArray *v4; // rbp
  __int64 v5; // r8
  __int64 v6; // rdx
  unsigned int v7; // r12d
  int v8; // r9d
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rsi
  _QWORD *v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rdi
  struct cocos2d::CCObject *v16; // rdx
  cocos2d::CCObject **v17; // rdi
  __int64 v18; // rcx
  cocos2d::CCArray *v19; // rax
  unsigned int v20; // ebx
  struct cocos2d::CCObject *v21; // rax
  __int64 v22; // rdx
  struct cocos2d::CCObject *v23; // rbx
  int v24; // [rsp+68h] [rbp+10h]
  __int64 v25; // [rsp+70h] [rbp+18h]
  __int64 v26; // [rsp+78h] [rbp+20h]

  if ( a2 != 749 ) /*0x3ee7e6*/
  {
    v4 = (cocos2d::CCArray *)cocos2d::CCArray::create(a1); /*0x3ee80c*/
    v5 = *(_QWORD *)(a1 + 14040); /*0x3ee80f*/
    v6 = *(_QWORD *)(a1 + 14048); /*0x3ee816*/
    v7 = 0; /*0x3ee81d*/
    if ( v5 != v6 ) /*0x3ee823*/
    {
      v8 = 0; /*0x3ee829*/
      v24 = 0; /*0x3ee82c*/
      if ( (v6 - v5) >> 3 ) /*0x3ee834*/
      {
        v9 = 0; /*0x3ee841*/
        v25 = 0; /*0x3ee844*/
        do /*0x3ee921*/
        {
          v10 = *(_QWORD **)(v9 + v5); /*0x3ee850*/
          if ( v10 ) /*0x3ee857*/
            v11 = (__int64)(v10[1] - *v10) >> 3; /*0x3ee860*/
          else
            LODWORD(v11) = -1; /*0x3ee866*/
          v12 = 0; /*0x3ee86b*/
          v26 = (int)v11; /*0x3ee870*/
          if ( (int)v11 > 0 ) /*0x3ee878*/
          {
            do /*0x3ee8ee*/
            {
              v13 = *(_QWORD **)(**(_QWORD **)(v9 + *(_QWORD *)(a1 + 14040)) + 8 * v12); /*0x3ee88e*/
              if ( v13 ) /*0x3ee895*/
              {
                v14 = 0; /*0x3ee897*/
                v15 = *(int *)(**(_QWORD **)(v9 + *(_QWORD *)(a1 + 14208)) + 4 * v12); /*0x3ee8a8*/
                if ( v15 > 0 ) /*0x3ee8af*/
                {
                  do /*0x3ee8df*/
                  {
                    v16 = *(struct cocos2d::CCObject **)(*v13 + 8 * v14); /*0x3ee8c3*/
                    if ( *((_DWORD *)v16 + 259) == a2 ) /*0x3ee8ce*/
                      cocos2d::CCArray::addObject(v4, v16); /*0x3ee8d3*/
                    ++v14; /*0x3ee8d9*/
                  }
                  while ( v14 < v15 ); /*0x3ee8df*/
                  v9 = v25; /*0x3ee8e1*/
                }
              }
              ++v12; /*0x3ee8e6*/
            }
            while ( v12 < v26 ); /*0x3ee8ee*/
            v8 = v24; /*0x3ee8f0*/
          }
          v24 = ++v8; /*0x3ee8f8*/
          v9 += 8; /*0x3ee8fd*/
          v25 = v9; /*0x3ee901*/
          v5 = *(_QWORD *)(a1 + 14040); /*0x3ee906*/
        }
        while ( v8 < (unsigned __int64)((*(_QWORD *)(a1 + 14048) - v5) >> 3) ); /*0x3ee921*/
      }
    }
    v17 = (cocos2d::CCObject **)operator new(0xA0u); /*0x3ee931*/
    cocos2d::CCObject::CCObject((cocos2d::CCObject *)v17); /*0x3ee93c*/
    *v17 = (cocos2d::CCObject *)&UndoObject::`vftable'; /*0x3ee94a*/
    v17[7] = 0; /*0x3ee94d*/
    *((_DWORD *)v17 + 16) = 0; /*0x3ee951*/
    v17[9] = 0; /*0x3ee955*/
    *((_WORD *)v17 + 40) = 0; /*0x3ee959*/
    sub_1A6040((char *)v17 + 84); /*0x3ee963*/
    if ( v4 ) /*0x3ee96c*/
    {
      v19 = (cocos2d::CCArray *)cocos2d::CCArray::create(v18); /*0x3ee96e*/
      v17[9] = v19; /*0x3ee974*/
      cocos2d::CCArray::addObjectsFromArray(v19, v4); /*0x3ee97e*/
      cocos2d::CCObject::retain(v17[9]); /*0x3ee988*/
    }
    *((_DWORD *)v17 + 16) = 4; /*0x3ee98e*/
    cocos2d::CCObject::autorelease((cocos2d::CCObject *)v17); /*0x3ee998*/
    cocos2d::CCArray::removeAllObjects(*(cocos2d::CCArray **)(a1 + 14984)); /*0x3ee9a5*/
    v20 = 1000; /*0x3ee9ab*/
    if ( !*(_BYTE *)(a1 + 14726) ) /*0x3ee9b5*/
      v20 = 200; /*0x3ee9bd*/
    if ( cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 14976)) >= v20 ) /*0x3ee9cf*/
      cocos2d::CCArray::removeObjectAtIndex(*(cocos2d::CCArray **)(a1 + 14976), 0, 1); /*0x3ee9dd*/
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 14976), (struct cocos2d::CCObject *)v17); /*0x3ee9ed*/
    if ( cocos2d::CCArray::count(v4) ) /*0x3ee9f6*/
    {
      do /*0x3eea53*/
      {
        v21 = cocos2d::CCArray::objectAtIndex(v4, v7); /*0x3eea06*/
        v23 = v21; /*0x3eea0c*/
        if ( v21 ) /*0x3eea12*/
        {
          LOBYTE(v22) = 1; /*0x3eea1e*/
          (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v21 + 1160LL))(v21, v22); /*0x3eea23*/
          GJBaseGameLayer_removeObjectFromSection(a1, v23); /*0x3eea2c*/
          sub_3F1780(a1, v23); /*0x3eea37*/
          *(_BYTE *)(a1 + 15730) = 1; /*0x3eea3c*/
        }
        ++v7; /*0x3eea44*/
      }
      while ( v7 < cocos2d::CCArray::count(v4) ); /*0x3eea53*/
    }
  }
}

// [15/56] Address: 0x3eea70
// Method: LevelEditorLayer::handleAction
// Hidden C++ exception states: #wind=4
void __fastcall LevelEditorLayer_handleAction(__int64 a1, char a2, cocos2d::CCArray *a3)
{
  struct cocos2d::CCObject *Object; // rbp
  __int64 v7; // rcx
  cocos2d::CCObject **v8; // r14
  int v9; // r13d
  char v10; // r12
  __int64 v11; // rdi
  __int64 v12; // rbx
  struct cocos2d::CCArray *v13; // rax
  __int64 v14; // r8
  int v15; // eax
  _BYTE *v16; // rbx
  __int64 v17; // rdx
  cocos2d::CCArray *v18; // r15
  unsigned int j; // edi
  struct cocos2d::CCObject *v20; // rbx
  __int64 v21; // rdx
  cocos2d::CCArray *v22; // r12
  cocos2d::CCArray *v23; // r15
  unsigned int i; // edi
  struct cocos2d::CCObject *v25; // rbx
  int v26; // eax
  __int64 v27; // r8
  cocos2d::CCArray *v28; // r15
  cocos2d::CCArray *v29; // r12
  unsigned int k; // r14d
  struct cocos2d::CCObject *v31; // rbx
  struct cocos2d::CCObject *v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rcx
  cocos2d::CCArray *v35; // rax
  __int64 v36; // rbx
  cocos2d::CCObject *v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rbx
  struct cocos2d::CCObject *v41; // rax
  struct cocos2d::CCObject *v42; // rax
  struct cocos2d::CCObject *v43; // rax
  __int64 v44; // r12
  __int64 v45; // r15
  const struct cocos2d::CCPoint *v46; // rax
  __int64 v47; // rbx
  unsigned int *v48; // r15
  __int64 v49; // rax
  __int64 *v50; // r15
  __int64 v51; // rdi
  float *v52; // r13
  __int64 v53; // rax
  float v54; // xmm4_4
  float v55; // xmm3_4
  float v56; // xmm1_4
  float v57; // xmm2_4
  cocos2d::CCObject *SelectedObjects; // rbx
  cocos2d::CCArray *v59; // r15
  __int64 v60; // rdi
  __int64 v61; // r8
  cocos2d::CCObject *v62; // rcx
  char v63; // bl
  unsigned int v64; // eax
  unsigned int v65; // ecx
  cocos2d::CCArray *v66; // rcx
  unsigned int v67; // eax
  unsigned int v68; // ecx
  cocos2d::CCObject **v69; // [rsp+20h] [rbp-98h]
  char v70[8]; // [rsp+28h] [rbp-90h] BYREF
  char v71[8]; // [rsp+30h] [rbp-88h] BYREF
  __int64 *v72; // [rsp+38h] [rbp-80h]
  struct cocos2d::CCObject *v73; // [rsp+40h] [rbp-78h]
  char v74[8]; // [rsp+48h] [rbp-70h] BYREF
  char v75[16]; // [rsp+50h] [rbp-68h] BYREF
  cocos2d::CCObject **v78; // [rsp+D8h] [rbp+20h] BYREF

  if ( !cocos2d::CCArray::count(a3) ) /*0x3eeaae*/
    return; /*0x3eeaae*/
  Object = cocos2d::CCArray::lastObject(a3); /*0x3eeabd*/
  v73 = Object; /*0x3eeac0*/
  cocos2d::CCObject::retain(Object); /*0x3eeac8*/
  cocos2d::CCArray::removeLastObject(a3, 1); /*0x3eead3*/
  v8 = (cocos2d::CCObject **)Object; /*0x3eead9*/
  v9 = *((_DWORD *)Object + 16); /*0x3eeadc*/
  if ( a2 ) /*0x3eeae3*/
    goto LABEL_7; /*0x3eeae3*/
  switch ( v9 ) /*0x3eeaeb*/
  {
    case 1: /*0x3eeaeb*/
LABEL_11:
      v16 = *(_BYTE **)(*((_QWORD *)Object + 7) + 56LL); /*0x3eeb92*/
      GJBaseGameLayer_removeObjectFromSection(a1, v16); /*0x3eeba0*/
      sub_3F1780(a1, v16); /*0x3eebab*/
      v16[1140] = v16[1141]; /*0x3eebb7*/
      EditorUI_deselectObject(*(_QWORD *)(a1 + 14968), v16); /*0x3eebc7*/
      LOBYTE(v17) = 1; /*0x3eebcf*/
      (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v16 + 1160LL))(v16, v17); /*0x3eebd4*/
      break;
    case 2: /*0x3eeaeb*/
LABEL_8:
      v11 = *(_QWORD *)(*((_QWORD *)Object + 7) + 56LL); /*0x3eeb2d*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 1192LL))(a1, v11); /*0x3eeb3e*/
      sub_3F1070(a1, v11); /*0x3eeb4a*/
      if ( *(_BYTE *)(v11 + 1140) ) /*0x3eeb4f*/
      {
        v12 = *(_QWORD *)(a1 + 14968); /*0x3eeb58*/
        v13 = cocos2d::CCArray::createWithObject((struct cocos2d::CCObject *)v11); /*0x3eeb62*/
        LOBYTE(v14) = 1; /*0x3eeb6b*/
        sub_1C47B0(v12, v13, v14); /*0x3eeb71*/
      }
      v15 = dword_8F8470; /*0x3eeb76*/
      *(_DWORD *)(v11 + 924) = dword_8F8470; /*0x3eeb7c*/
      *(_DWORD *)(v11 + 52) = v15; /*0x3eeb82*/
      dword_8F8470 = v15 + 1; /*0x3eeb87*/
      break;
    case 3: /*0x3eeaeb*/
LABEL_15:
      v22 = (cocos2d::CCArray *)cocos2d::CCArray::create(v7); /*0x3eec66*/
      v23 = (cocos2d::CCArray *)*((_QWORD *)Object + 9); /*0x3eec6f*/
      for ( i = 0; i < cocos2d::CCArray::count(v23); ++i ) /*0x3eec78*/
      {
        v25 = cocos2d::CCArray::objectAtIndex(v23, i); /*0x3eec8d*/
        (*(void (__fastcall **)(__int64, struct cocos2d::CCObject *))(*(_QWORD *)a1 + 1192LL))(a1, v25); /*0x3eeca0*/
        sub_3F1070(a1, v25); /*0x3eeca9*/
        if ( *((_BYTE *)v25 + 1140) ) /*0x3eecae*/
          cocos2d::CCArray::addObject(v22, v25); /*0x3eecbd*/
        v26 = dword_8F8470; /*0x3eecc3*/
        *((_DWORD *)v25 + 231) = dword_8F8470; /*0x3eecc9*/
        *((_DWORD *)v25 + 13) = v26; /*0x3eeccf*/
        dword_8F8470 = v26 + 1; /*0x3eecd4*/
      }
      if ( cocos2d::CCArray::count(v22) ) /*0x3eecec*/
      {
        LOBYTE(v27) = 1; /*0x3eecfa*/
        sub_1C47B0(*(_QWORD *)(a1 + 14968), v22, v27); /*0x3eed07*/
      }
      break;
    case 4: /*0x3eeaeb*/
LABEL_12:
      v18 = (cocos2d::CCArray *)*((_QWORD *)Object + 9); /*0x3eebdf*/
      for ( j = 0; j < cocos2d::CCArray::count(v18); ++j ) /*0x3eebe8*/
      {
        v20 = cocos2d::CCArray::objectAtIndex(v18, j); /*0x3eec0b*/
        GJBaseGameLayer_removeObjectFromSection(a1, v20); /*0x3eec14*/
        sub_3F1780(a1, v20); /*0x3eec1f*/
        *((_BYTE *)v20 + 1140) = *((_BYTE *)v20 + 1141); /*0x3eec2b*/
        EditorUI_deselectObject(*(_QWORD *)(a1 + 14968), v20); /*0x3eec3b*/
        LOBYTE(v21) = 1; /*0x3eec4a*/
        (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v20 + 1160LL))(v20, v21); /*0x3eec4f*/
      }
      break;
    default:
LABEL_7:
      v10 = 0; /*0x3eeb08*/
      switch ( v9 ) /*0x3eeb2b*/
      {
        case 1: /*0x3eeb2b*/
          goto LABEL_8;
        case 2: /*0x3eeb2b*/
          goto LABEL_11;
        case 3: /*0x3eeb2b*/
          goto LABEL_12;
        case 4: /*0x3eeb2b*/
          goto LABEL_15;
        case 5: /*0x3eeb2b*/
          v28 = (cocos2d::CCArray *)*((_QWORD *)Object + 9); /*0x3eed11*/
          if ( v28 ) /*0x3eed18*/
          {
            v29 = (cocos2d::CCArray *)cocos2d::CCArray::create(v7); /*0x3eed24*/
            for ( k = 0; k < cocos2d::CCArray::count(v28); ++k ) /*0x3eed2f*/
            {
              v31 = cocos2d::CCArray::objectAtIndex(v28, k); /*0x3eed4c*/
              v32 = (struct cocos2d::CCObject *)GameObjectCopy_create(*((_QWORD *)v31 + 7)); /*0x3eed53*/
              cocos2d::CCArray::addObject(v29, v32); /*0x3eed5e*/
              sub_4061F0(v31); /*0x3eed67*/
              v33 = *((_QWORD *)v31 + 7); /*0x3eed6c*/
              GJBaseGameLayer_removeObjectFromSection(a1, v33); /*0x3eed76*/
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 1192LL))(a1, v33); /*0x3eed84*/
            }
            v8 = (cocos2d::CCObject **)operator new(0xA0u); /*0x3eeda5*/
            v69 = v8; /*0x3eeda8*/
            v78 = v8; /*0x3eedad*/
            cocos2d::CCObject::CCObject((cocos2d::CCObject *)v8); /*0x3eedb8*/
            *v8 = (cocos2d::CCObject *)&UndoObject::`vftable'; /*0x3eedc6*/
            v8[7] = 0; /*0x3eedc9*/
            *((_DWORD *)v8 + 16) = 0; /*0x3eedcd*/
            v8[9] = 0; /*0x3eedd1*/
            *((_WORD *)v8 + 40) = 0; /*0x3eedd5*/
            sub_1A6040((char *)v8 + 84); /*0x3eede0*/
            if ( v29 ) /*0x3eede9*/
            {
              v35 = (cocos2d::CCArray *)cocos2d::CCArray::create(v34); /*0x3eedeb*/
              v8[9] = v35; /*0x3eedf1*/
              cocos2d::CCArray::addObjectsFromArray(v35, v29); /*0x3eedfb*/
              cocos2d::CCObject::retain(v8[9]); /*0x3eee05*/
            }
            *((_DWORD *)v8 + 16) = v9; /*0x3eee0b*/
            cocos2d::CCObject::autorelease((cocos2d::CCObject *)v8); /*0x3eee12*/
            v10 = 0; /*0x3eee18*/
          }
          else
          {
            v36 = *(_QWORD *)(*((_QWORD *)Object + 7) + 56LL); /*0x3eee24*/
            v8 = (cocos2d::CCObject **)operator new(0xA0u); /*0x3eee32*/
            v69 = v8; /*0x3eee35*/
            v78 = v8; /*0x3eee3a*/
            cocos2d::CCObject::CCObject((cocos2d::CCObject *)v8); /*0x3eee45*/
            *v8 = (cocos2d::CCObject *)&UndoObject::`vftable'; /*0x3eee53*/
            v8[7] = 0; /*0x3eee58*/
            *((_DWORD *)v8 + 16) = 0; /*0x3eee5c*/
            v8[9] = 0; /*0x3eee60*/
            *((_WORD *)v8 + 40) = 0; /*0x3eee64*/
            sub_1A6040((char *)v8 + 84); /*0x3eee6d*/
            if ( v36 ) /*0x3eee76*/
            {
              v37 = (cocos2d::CCObject *)GameObjectCopy_create(v36); /*0x3eee7b*/
              v8[7] = v37; /*0x3eee80*/
              cocos2d::CCObject::retain(v37); /*0x3eee87*/
            }
            *((_DWORD *)v8 + 16) = v9; /*0x3eee8d*/
            cocos2d::CCObject::autorelease((cocos2d::CCObject *)v8); /*0x3eee94*/
            sub_4061F0(*((_QWORD *)Object + 7)); /*0x3eee9e*/
            v38 = *(_QWORD *)(*((_QWORD *)Object + 7) + 56LL); /*0x3eeea7*/
            GJBaseGameLayer_removeObjectFromSection(a1, v38); /*0x3eeeb1*/
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 1192LL))(a1, v38); /*0x3eeebf*/
          }
          if ( *((_BYTE *)Object + 81) /*0x3eeee0*/
            && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 14968) + 840LL) + 344LL))(*(_QWORD *)(*(_QWORD *)(a1 + 14968) + 840LL)) )
          {
            v39 = sub_200810(*(_QWORD *)(a1 + 14968)); /*0x3eeef5*/
            sub_1B0E20((char *)v8 + 84, v39); /*0x3eef01*/
            *((_BYTE *)v8 + 81) = 1; /*0x3eef06*/
            sub_1B0E20(*(_QWORD *)(a1 + 14968) + 528LL, (char *)Object + 84); /*0x3eef1d*/
            v40 = *(_QWORD *)(*(_QWORD *)(a1 + 14968) + 840LL); /*0x3eef29*/
            *(_DWORD *)(v40 + 572) = *((_DWORD *)Object + 29); /*0x3eef33*/
            *(_DWORD *)(v40 + 576) = *((_DWORD *)Object + 30); /*0x3eef3e*/
            *(_DWORD *)(v40 + 560) = *((_DWORD *)Object + 37); /*0x3eef4c*/
            *(_DWORD *)(v40 + 564) = *((_DWORD *)Object + 38); /*0x3eef58*/
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v40 + 416) + 352LL))(*(_QWORD *)(v40 + 416)); /*0x3eef68*/
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v40 + 184LL))(v40, (__int64)Object + 124); /*0x3eef78*/
            v41 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(v40 + 512), 0); /*0x3eef87*/
            (*(void (__fastcall **)(struct cocos2d::CCObject *, void *))(*(_QWORD *)v41 + 184LL))(v41, &unk_9046C8); /*0x3eefa1*/
            v42 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(v40 + 512), 9u); /*0x3eefb0*/
            (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v42 + 184LL))( /*0x3eefca*/
              v42,
              (__int64)Object + 132);
            v43 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(v40 + 512), 0xAu); /*0x3eefd9*/
            (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v43 + 184LL))( /*0x3eeff3*/
              v43,
              (__int64)Object + 140);
            v44 = *(_QWORD *)(a1 + 14968); /*0x3eeff6*/
            v45 = *(_QWORD *)(*(_QWORD *)(v44 + 840) + 424LL); /*0x3ef005*/
            if ( v45 ) /*0x3ef00f*/
            {
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 4360) + 168LL))(*(_QWORD *)(a1 + 4360)); /*0x3ef01f*/
              v46 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 4360) + 200LL))(*(_QWORD *)(a1 + 4360)); /*0x3ef032*/
              cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v74, v46); /*0x3ef040*/
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 4360) + 160LL))(*(_QWORD *)(a1 + 4360)); /*0x3ef058*/
              (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 4360) + 184LL))( /*0x3ef06f*/
                *(_QWORD *)(a1 + 4360),
                &dword_904F10);
              v47 = *(_QWORD *)(*(_QWORD *)(a1 + 14968) + 848LL); /*0x3ef07c*/
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v47 + 184LL))(v47, v44 + 568); /*0x3ef091*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 120LL))(v47); /*0x3ef0a7*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 136LL))(v47); /*0x3ef0ba*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 368LL))(v47); /*0x3ef0d0*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 384LL))(v47); /*0x3ef0e6*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 256LL))(v47); /*0x3ef0fc*/
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 272LL))(v47); /*0x3ef112*/
              v48 = *(unsigned int **)(v45 + 56); /*0x3ef118*/
              v49 = *v48; /*0x3ef11c*/
              if ( (_DWORD)v49 ) /*0x3ef121*/
              {
                v50 = (__int64 *)*((_QWORD *)v48 + 2); /*0x3ef127*/
                v72 = &v50[v49 - 1]; /*0x3ef132*/
                if ( v50 <= v72 ) /*0x3ef13a*/
                {
                  do /*0x3ef270*/
                  {
                    v51 = *v50; /*0x3ef143*/
                    if ( !*v50 ) /*0x3ef143*/
                      break; /*0x3ef149*/
                    LODWORD(v78) = *(_DWORD *)(v51 + 924); /*0x3ef155*/
                    v52 = *(float **)sub_1A5D10(*(_QWORD *)(a1 + 14968) + 464LL, v75, &v78); /*0x3ef17c*/
                    v53 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v51 + 200LL))(v51); /*0x3ef185*/
                    cocos2d::CCNode::convertToNodeSpace(v47, v70, v53); /*0x3ef196*/
                    cocos2d::CCPoint::operator+(v70, v71, v44 + 568); /*0x3ef1ae*/
                    cocos2d::CCPoint::operator=(v52 + 5, v71); /*0x3ef1bd*/
                    v52[9] = (*(float (__fastcall **)(__int64))(*(_QWORD *)v51 + 376LL))(v51) - *(float *)(v44 + 536); /*0x3ef1d9*/
                    v52[10] = (*(float (__fastcall **)(__int64))(*(_QWORD *)v51 + 392LL))(v51) - *(float *)(v44 + 540); /*0x3ef1f5*/
                    v54 = *(float *)(v44 + 528); /*0x3ef1fb*/
                    v55 = *(float *)(v44 + 532); /*0x3ef205*/
                    v56 = *(float *)(v51 + 1320); /*0x3ef20f*/
                    v57 = *(float *)(v51 + 1324); /*0x3ef217*/
                    if ( v54 != 0.0 && v56 != 0.0 ) /*0x3ef22b*/
                      v52[7] = *(float *)(v51 + 1160) / (float)(v56 * v54); /*0x3ef23d*/
                    if ( v55 != 0.0 && v57 != 0.0 ) /*0x3ef24f*/
                      v52[8] = *(float *)(v51 + 1164) / (float)(v57 * v55); /*0x3ef261*/
                    ++v50; /*0x3ef267*/
                  }
                  while ( v50 <= v72 ); /*0x3ef270*/
                  v8 = v69; /*0x3ef276*/
                  Object = v73; /*0x3ef27b*/
                }
              }
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 4360) + 160LL))(*(_QWORD *)(a1 + 4360)); /*0x3ef28d*/
              (*(void (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a1 + 4360) + 184LL))(*(_QWORD *)(a1 + 4360), v74); /*0x3ef2a2*/
            }
            sub_1A2C30(*(_QWORD *)(*(_QWORD *)(a1 + 14968) + 840LL)); /*0x3ef2b6*/
            v10 = 1; /*0x3ef2bb*/
          }
          *((_BYTE *)v8 + 80) = *((_BYTE *)Object + 80); /*0x3ef2c2*/
          if ( !v10 ) /*0x3ef2c9*/
            goto LABEL_56; /*0x3ef2c9*/
          break; /*0x3ef2c9*/
        case 6: /*0x3eeb2b*/
          SelectedObjects = (cocos2d::CCObject *)EditorUI_getSelectedObjects(*(_QWORD *)(a1 + 14968)); /*0x3ef2dd*/
          v59 = (cocos2d::CCArray *)*((_QWORD *)Object + 9); /*0x3ef2e0*/
          v60 = *(_QWORD *)(a1 + 14968); /*0x3ef2e4*/
          EditorUI_deselectAll(v60); /*0x3ef2ee*/
          if ( cocos2d::CCArray::count(v59) ) /*0x3ef2f6*/
          {
            LOBYTE(v61) = 1; /*0x3ef300*/
            sub_1C47B0(v60, v59, v61); /*0x3ef309*/
            *(_BYTE *)(v60 + 824) = 1; /*0x3ef30e*/
            sub_1B0FC0(v60); /*0x3ef318*/
          }
          if ( *((cocos2d::CCObject **)Object + 9) != SelectedObjects ) /*0x3ef321*/
          {
            if ( SelectedObjects ) /*0x3ef326*/
              cocos2d::CCObject::retain(SelectedObjects); /*0x3ef32b*/
            v62 = (cocos2d::CCObject *)*((_QWORD *)Object + 9); /*0x3ef331*/
            if ( v62 ) /*0x3ef338*/
              cocos2d::CCObject::release(v62); /*0x3ef33a*/
            *((_QWORD *)Object + 9) = SelectedObjects; /*0x3ef340*/
          }
          goto LABEL_56; /*0x3ef340*/
        default:
          goto LABEL_56;
      }
      goto LABEL_58; /*0x3ef2c9*/
  }
LABEL_56:
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 14968) + 840LL) + 344LL))(*(_QWORD *)(*(_QWORD *)(a1 + 14968) + 840LL)) ) /*0x3ef355*/
  {
    sub_200430(*(_QWORD *)(a1 + 14968)); /*0x3ef366*/
    sub_2002B0(*(_QWORD *)(a1 + 14968)); /*0x3ef372*/
  }
LABEL_58:
  v63 = *(_BYTE *)(a1 + 14726); /*0x3ef377*/
  if ( a2 ) /*0x3ef389*/
  {
    v64 = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 14984)); /*0x3ef392*/
    v65 = 1000; /*0x3ef398*/
    if ( !v63 ) /*0x3ef3a4*/
      v65 = 200; /*0x3ef3a4*/
    if ( v64 >= v65 ) /*0x3ef3a9*/
      cocos2d::CCArray::removeObjectAtIndex(*(cocos2d::CCArray **)(a1 + 14984), 0, 1); /*0x3ef3b7*/
    v66 = *(cocos2d::CCArray **)(a1 + 14984); /*0x3ef3bd*/
  }
  else
  {
    v67 = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 14976)); /*0x3ef3cd*/
    v68 = 1000; /*0x3ef3d3*/
    if ( !v63 ) /*0x3ef3df*/
      v68 = 200; /*0x3ef3df*/
    if ( v67 >= v68 ) /*0x3ef3e4*/
      cocos2d::CCArray::removeObjectAtIndex(*(cocos2d::CCArray **)(a1 + 14976), 0, 1); /*0x3ef3f2*/
    v66 = *(cocos2d::CCArray **)(a1 + 14976); /*0x3ef3f8*/
  }
  cocos2d::CCArray::addObject(v66, (struct cocos2d::CCObject *)v8); /*0x3ef402*/
  if ( cocos2d::CCArray::count(a3) ) /*0x3ef413*/
  {
    if ( a2 ) /*0x3ef420*/
    {
      if ( *((_BYTE *)cocos2d::CCArray::lastObject(a3) + 80) ) /*0x3ef43b*/
        sub_3EF510(a1); /*0x3ef444*/
    }
    else if ( *((_BYTE *)Object + 80) ) /*0x3ef422*/
    {
      sub_3EF490(a1); /*0x3ef42b*/
    }
  }
  cocos2d::CCObject::release(Object); /*0x3ef44c*/
}

// [16/56] Address: 0x3f1d10
// Method: LevelEditorLayer::tryUpdateSpeedObject
__int64 __fastcall LevelEditorLayer_tryUpdateSpeedObject(__int64 a1, __int64 a2, char a3)
{
  bool v5; // bp
  int v6; // ecx
  bool v7; // zf
  unsigned __int8 v8; // bl
  __int64 v9; // rsi
  cocos2d::CCArray *v10; // rcx
  __int64 v11; // rsi
  bool v12; // al

  v5 = !*(_BYTE *)(a2 + 1784) || a3; /*0x3f1d3e*/
  v6 = *(_DWORD *)(a2 + 1036); /*0x3f1d41*/
  if ( v6 > 1934 ) /*0x3f1d4d*/
  {
    if ( v6 == 1935 || v6 == 2900 || v6 == 2902 || v6 == 3022 ) /*0x3f1d99*/
      goto LABEL_21; /*0x3f1d99*/
    v7 = v6 == 3027; /*0x3f1d9b*/
    goto LABEL_19; /*0x3f1d9b*/
  }
  if ( v6 == 1934 ) /*0x3f1d4f*/
  {
LABEL_21:
    v8 = 1; /*0x3f1da4*/
    goto LABEL_22; /*0x3f1da4*/
  }
  if ( v6 > 203 ) /*0x3f1d57*/
  {
    if ( v6 != 1334 ) /*0x3f1d75*/
    {
      v7 = v6 == 1917; /*0x3f1d77*/
      goto LABEL_19; /*0x3f1d7d*/
    }
    goto LABEL_21; /*0x3f1d75*/
  }
  if ( v6 == 203 || v6 == 200 || v6 == 201 ) /*0x3f1d68*/
    goto LABEL_21; /*0x3f1d68*/
  v7 = v6 == 202; /*0x3f1d6a*/
LABEL_19:
  if ( v7 ) /*0x3f1d9e*/
    goto LABEL_21; /*0x3f1d9e*/
  v8 = 0; /*0x3f1da0*/
LABEL_22:
  if ( v6 == 660 || v6 == 13 || v6 == 47 || v6 == 111 || v6 == 1331 || v6 == 1933 ) /*0x3f1dd0*/
  {
    v9 = *(_QWORD *)(a1 + 15008); /*0x3f1dd2*/
    v10 = *(cocos2d::CCArray **)(v9 + 584); /*0x3f1ddc*/
    if ( v5 ) /*0x3f1de6*/
    {
      cocos2d::CCArray::removeObject(v10, (struct cocos2d::CCObject *)a2, 1); /*0x3f1deb*/
    }
    else if ( !cocos2d::CCArray::containsObject(v10, (struct cocos2d::CCObject *)a2) ) /*0x3f1df3*/
    {
      cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(v9 + 584), (struct cocos2d::CCObject *)a2); /*0x3f1e07*/
    }
  }
  if ( !v8 ) /*0x3f1e0f*/
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 1528LL))(a2) || !*(_BYTE *)(a2 + 1796) ) /*0x3f1e21*/
      return v8; /*0x3f1e27*/
    v8 = 1; /*0x3f1e29*/
  }
  v11 = *(_QWORD *)(a1 + 15008); /*0x3f1e2b*/
  v12 = cocos2d::CCArray::containsObject(*(cocos2d::CCArray **)(v11 + 592), (struct cocos2d::CCObject *)a2); /*0x3f1e3c*/
  if ( v5 ) /*0x3f1e45*/
  {
    if ( v12 ) /*0x3f1e49*/
    {
      cocos2d::CCArray::removeObject(*(cocos2d::CCArray **)(v11 + 592), (struct cocos2d::CCObject *)a2, 1); /*0x3f1e58*/
      *(_BYTE *)(v11 + 633) = 1; /*0x3f1e5e*/
    }
  }
  else if ( !v12 ) /*0x3f1e69*/
  {
    cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(v11 + 592), (struct cocos2d::CCObject *)a2); /*0x3f1e75*/
    *(_BYTE *)(v11 + 633) = 1; /*0x3f1e7e*/
    EffectGameObject_updateSpeedModType(a2); /*0x3f1e85*/
  }
  return v8; /*0x3f1e92*/
}

// [18/56] Address: 0x3f38e0
// Method: LevelEditorLayer::manualUpdateObjectColors
__int64 __fastcall LevelEditorLayer_manualUpdateObjectColors(__int64 a1, struct cocos2d::CCObject *a2)
{
  struct cocos2d::CCArray *v4; // rax

  sub_295730(a2); /*0x3f38f3*/
  v4 = cocos2d::CCArray::createWithObject(a2); /*0x3f38fb*/
  return LevelEditorLayer_updateObjectColors(a1, v4); /*0x3f3907*/
}

// [19/56] Address: 0x3f3920
// Method: LevelEditorLayer::updateObjectColors
unsigned int __fastcall LevelEditorLayer_updateObjectColors(__int64 a1, cocos2d::CCArray *a2)
{
  __int64 v2; // r13
  cocos2d::CCArray *v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // rsi
  unsigned int v6; // r12d
  unsigned int result; // eax
  struct cocos2d::CCObject *v8; // rdi
  unsigned int *v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // ecx
  __int64 v12; // rax
  float v13; // xmm0_4
  float *v14; // rbx
  __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rax
  float v18; // xmm0_4
  int *v19; // rax
  int v20; // ebx
  __int64 v21; // rax
  __int16 v22; // cx
  char v23; // dl
  int v24; // r15d
  __int64 v25; // r14
  __int64 v26; // rax
  int v27; // r8d
  __int64 v28; // rax
  __m128 *v29; // r8
  __m128 v30; // xmm0
  __int64 v31; // rax
  float v32; // xmm1_4
  __int64 v33; // rax
  unsigned __int64 v34; // rbx
  signed __int64 v35; // rsi
  __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // rdx
  int *v39; // rax
  int v40; // r15d
  int v41; // ecx
  __int16 v42; // r10
  char v43; // r11
  __m128 v44; // xmm0
  __int64 v45; // rax
  __int64 v46; // rax
  int v47; // esi
  __int64 v48; // r13
  unsigned __int64 v49; // r12
  __int64 v50; // rax
  int v51; // r9d
  _QWORD *v52; // r14
  int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rbx
  __int64 v57; // rax
  __int64 v58; // rsi
  __int64 i; // rbx
  __int64 v60; // rax
  int v61; // eax
  __m128 *v62; // rcx
  __m128 v63; // xmm0
  __int64 v64; // rax
  float v65; // xmm1_4
  __int64 v66; // rax
  unsigned __int64 v67; // rbx
  signed __int64 v68; // rsi
  __int64 v69; // r14
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  cocos2d::CCArray *v73; // rdi
  unsigned int j; // ebx
  struct cocos2d::CCObject *v75; // rax
  __int16 v76; // [rsp+30h] [rbp-D0h] BYREF
  char v77; // [rsp+32h] [rbp-CEh]
  unsigned int v78; // [rsp+34h] [rbp-CCh]
  int v79; // [rsp+38h] [rbp-C8h]
  int v80; // [rsp+3Ch] [rbp-C4h]
  __int16 v81; // [rsp+40h] [rbp-C0h] BYREF
  char v82; // [rsp+42h] [rbp-BEh]
  __int16 v83; // [rsp+50h] [rbp-B0h] BYREF
  char v84; // [rsp+52h] [rbp-AEh]
  __int16 v85; // [rsp+60h] [rbp-A0h] BYREF
  char v86; // [rsp+62h] [rbp-9Eh]
  __int16 v87; // [rsp+70h] [rbp-90h] BYREF
  char v88; // [rsp+72h] [rbp-8Eh]
  __int16 v89; // [rsp+80h] [rbp-80h] BYREF
  char v90; // [rsp+82h] [rbp-7Eh]
  __m128 v91; // [rsp+90h] [rbp-70h] BYREF
  float v92; // [rsp+ACh] [rbp-54h]
  __m128 v93; // [rsp+B0h] [rbp-50h] BYREF
  char v94; // [rsp+C0h] [rbp-40h] BYREF
  char v95[4]; // [rsp+C4h] [rbp-3Ch] BYREF
  char v96[4]; // [rsp+C8h] [rbp-38h] BYREF
  char v97[4]; // [rsp+CCh] [rbp-34h] BYREF
  char v98[16]; // [rsp+D0h] [rbp-30h] BYREF
  __int16 v101; // [rsp+160h] [rbp+60h] BYREF
  char v102; // [rsp+162h] [rbp+62h]
  __int16 v103; // [rsp+168h] [rbp+68h] BYREF
  char v104; // [rsp+16Ah] [rbp+6Ah]

  v2 = a1; /*0x3f393d*/
  v3 = a2; /*0x3f3940*/
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 4384) + 320LL) + 8LL))(*(_QWORD *)(a1 + 4384) + 320LL); /*0x3f3954*/
  LOWORD(v92) = 257; /*0x3f3957*/
  v91.m128_f32[3] = v92; /*0x3f396e*/
  v91.m128_u64[0] = 0xBE99999A00000000uLL; /*0x3f3973*/
  v91.m128_i32[2] = 1053609165; /*0x3f3981*/
  GameToolbox_transformColor(&v87, v4, &v91); /*0x3f3988*/
  v5 = 0; /*0x3f398d*/
  v6 = 0; /*0x3f3992*/
  v78 = 0; /*0x3f3995*/
  result = cocos2d::CCArray::count(v3); /*0x3f3999*/
  if ( result ) /*0x3f39a1*/
  {
    do /*0x3f39ec*/
    {
      v8 = cocos2d::CCArray::objectAtIndex(v3, v6); /*0x3f39ec*/
      v9 = (unsigned int *)*((_QWORD *)v8 + 138); /*0x3f39ef*/
      if ( v9 ) /*0x3f39f9*/
      {
        v10 = *v9; /*0x3f39fb*/
        v11 = v9[1]; /*0x3f39fd*/
        if ( v11 == (_DWORD)v10 || !(_DWORD)v10 ) /*0x3f3a06*/
          v10 = v11; /*0x3f3a08*/
      }
      else
      {
        v10 = 0; /*0x3f3a0c*/
      }
      v12 = sub_362560(*(_QWORD *)(v2 + 2472), v10); /*0x3f3a15*/
      if ( v12 ) /*0x3f3a1d*/
        v13 = *(float *)(v12 + 320) / 255.0; /*0x3f3a27*/
      else
        v13 = 1.0; /*0x3f3a2d*/
      *(float *)(*((_QWORD *)v8 + 138) + 8LL) = v13; /*0x3f3a37*/
      if ( *((_QWORD *)v8 + 112) ) /*0x3f3a3c*/
      {
        v14 = (float *)*((_QWORD *)v8 + 139); /*0x3f3a46*/
        if ( v14 ) /*0x3f3a50*/
        {
          v15 = *(unsigned int *)v14; /*0x3f3a52*/
          v16 = *((_DWORD *)v14 + 1); /*0x3f3a54*/
          if ( v16 == (_DWORD)v15 || !(_DWORD)v15 ) /*0x3f3a5d*/
            v15 = v16; /*0x3f3a5f*/
        }
        else
        {
          v15 = 0; /*0x3f3a63*/
        }
        v17 = sub_362560(*(_QWORD *)(v2 + 2472), v15); /*0x3f3a6c*/
        if ( v17 ) /*0x3f3a74*/
          v18 = *(float *)(v17 + 320) / 255.0; /*0x3f3a7e*/
        else
          v18 = 1.0; /*0x3f3a84*/
        v14[2] = v18; /*0x3f3a87*/
      }
      v19 = (int *)*((_QWORD *)v8 + 138); /*0x3f3a8c*/
      if ( v19 ) /*0x3f3a96*/
      {
        v20 = *v19; /*0x3f3a98*/
        if ( v19[1] == *v19 || !v20 ) /*0x3f3aa3*/
          v20 = v19[1]; /*0x3f3aa5*/
        v103 = -1; /*0x3f3ab0*/
        v104 = -1; /*0x3f3abb*/
        if ( v20 ) /*0x3f3ac0*/
        {
          if ( v20 == 1010 ) /*0x3f3ac8*/
          {
            v22 = 0; /*0x3f3af2*/
            v23 = 0; /*0x3f3af9*/
            goto LABEL_32; /*0x3f3b00*/
          }
          if ( v20 != 1011 ) /*0x3f3acd*/
          {
            v21 = sub_362560(*(_QWORD *)(v2 + 2472), (unsigned int)v20); /*0x3f3ad8*/
            if ( v21 ) /*0x3f3ae0*/
            {
              v22 = *(_WORD *)(v21 + 327); /*0x3f3ae2*/
              v23 = *(_BYTE *)(v21 + 329); /*0x3f3ae9*/
              goto LABEL_32; /*0x3f3af0*/
            }
          }
        }
      }
      else
      {
        v20 = 0; /*0x3f3b02*/
      }
      v23 = -1; /*0x3f3b04*/
      v22 = -1; /*0x3f3b0b*/
LABEL_32:
      v103 = v22; /*0x3f3b12*/
      v104 = v23; /*0x3f3b16*/
      if ( *((__int16 *)v8 + 588) > 0 ) /*0x3f3b21*/
      {
        v24 = 0; /*0x3f3b23*/
        v25 = 0; /*0x3f3b26*/
        do /*0x3f3b90*/
        {
          if ( v5 <= 9 && (v26 = *((_QWORD *)v8 + 146)) != 0 ) /*0x3f3b40*/
            v27 = *(__int16 *)(v26 + v25); /*0x3f3b42*/
          else
            v27 = 0; /*0x3f3b49*/
          v28 = sub_368900( /*0x3f3b69*/
                  *(_QWORD *)(v2 + 2472),
                  (unsigned int)&v94,
                  v27,
                  (unsigned int)&v103,
                  *((_BYTE *)v8 + 1046) == 0);
          ++v24; /*0x3f3b6e*/
          ++v5; /*0x3f3b71*/
          v25 += 2; /*0x3f3b74*/
          v22 = *(_WORD *)v28; /*0x3f3b78*/
          v103 = *(_WORD *)v28; /*0x3f3b7b*/
          v23 = *(_BYTE *)(v28 + 2); /*0x3f3b7f*/
          v104 = v23; /*0x3f3b83*/
        }
        while ( v24 < *((__int16 *)v8 + 588) ); /*0x3f3b90*/
        v6 = v78; /*0x3f3b92*/
      }
      v29 = (__m128 *)*((_QWORD *)v8 + 138); /*0x3f3b97*/
      if ( v29[1].m128_f32[0] != *(float *)&dword_8F84C8 /*0x3f3bdc*/
        || v29[1].m128_f32[1] != *(float *)&dword_8F84CC
        || v29[1].m128_f32[2] != *(float *)&dword_8F84D0
        || v29[1].m128_i16[6] != (_WORD)dword_8F84D4 )
      {
        v30 = v29[1]; /*0x3f3beb*/
        v81 = v22; /*0x3f3bf0*/
        v82 = v23; /*0x3f3bf9*/
        v93 = v30; /*0x3f3c06*/
        v31 = GameToolbox_transformColor(v95, &v81, &v93); /*0x3f3c0a*/
        v103 = *(_WORD *)v31; /*0x3f3c12*/
        v104 = *(_BYTE *)(v31 + 2); /*0x3f3c1a*/
      }
      (*(void (__fastcall **)(struct cocos2d::CCObject *, __int16 *))(*(_QWORD *)v8 + 1432LL))(v8, &v103); /*0x3f3c27*/
      v32 = 1.0; /*0x3f3c2d*/
      if ( v20 > 0 ) /*0x3f3c32*/
      {
        v33 = sub_362560(*(_QWORD *)(v2 + 2472), (unsigned int)v20); /*0x3f3c3d*/
        if ( v33 ) /*0x3f3c45*/
          v32 = *(float *)(v33 + 320) / 255.0; /*0x3f3c4f*/
        else
          v32 = 1.0; /*0x3f3c55*/
      }
      if ( *((__int16 *)v8 + 588) > 0 ) /*0x3f3c65*/
      {
        v34 = 0; /*0x3f3c67*/
        v35 = *((__int16 *)v8 + 588); /*0x3f3c69*/
        v36 = *(_QWORD *)(v2 + 2472); /*0x3f3c71*/
        do /*0x3f3cad*/
        {
          if ( v34 <= 9 && (v37 = *((_QWORD *)v8 + 146)) != 0 ) /*0x3f3c90*/
            v38 = (unsigned int)*(__int16 *)(v37 + 2 * v34); /*0x3f3c92*/
          else
            v38 = 0; /*0x3f3c98*/
          ++v34; /*0x3f3ca3*/
          v32 = v32 * sub_367870(v36, v38); /*0x3f3ca6*/
        }
        while ( (__int64)v34 < v35 ); /*0x3f3cad*/
        v6 = v78; /*0x3f3caf*/
      }
      *(float *)(*((_QWORD *)v8 + 138) + 8LL) = v32; /*0x3f3cbd*/
      if ( !*((_QWORD *)v8 + 112) ) /*0x3f3cca*/
        goto LABEL_117; /*0x3f3cca*/
      v39 = (int *)*((_QWORD *)v8 + 139); /*0x3f3cd0*/
      if ( v39 ) /*0x3f3cda*/
      {
        v40 = *v39; /*0x3f3ce0*/
        v41 = v39[1]; /*0x3f3ce3*/
        v79 = v40; /*0x3f3ce6*/
        if ( v41 == v40 || !v40 ) /*0x3f3cf3*/
        {
          v40 = v41; /*0x3f3cf5*/
          v79 = v41; /*0x3f3cf8*/
        }
        v42 = -1; /*0x3f3cfc*/
        v43 = -1; /*0x3f3d04*/
        v101 = -1; /*0x3f3d0c*/
        v102 = -1; /*0x3f3d11*/
        if ( v40 == 1012 ) /*0x3f3d1c*/
        {
          v91.m128_u64[0] = 0x3F26666600000000LL; /*0x3f3d26*/
          v91.m128_i32[2] = 1041865114; /*0x3f3d3d*/
          v44 = _mm_shuffle_ps(v91, v91, 147); /*0x3f3d48*/
          v83 = v103; /*0x3f3d4c*/
          LOWORD(v92) = 256; /*0x3f3d55*/
          v44.m128_f32[0] = v92; /*0x3f3d60*/
          v84 = v104; /*0x3f3d64*/
          v91 = _mm_shuffle_ps(v44, v44, 57); /*0x3f3d6c*/
          v93 = v91; /*0x3f3d70*/
          v45 = GameToolbox_transformColor(v96, &v83, &v93); /*0x3f3d75*/
          v42 = *(_WORD *)v45; /*0x3f3d7a*/
          v101 = *(_WORD *)v45; /*0x3f3d7e*/
          v43 = *(_BYTE *)(v45 + 2); /*0x3f3d83*/
          v102 = v43; /*0x3f3d88*/
          goto LABEL_99; /*0x3f3d8c*/
        }
        if ( v40 > 0 ) /*0x3f3d94*/
        {
          if ( v40 == 1010 ) /*0x3f3d9f*/
          {
            v42 = 0; /*0x3f3dcc*/
            v43 = 0; /*0x3f3dd4*/
          }
          else if ( v40 == 1011 || (v46 = sub_362560(*(_QWORD *)(v2 + 2472), (unsigned int)v40)) == 0 ) /*0x3f3db8*/
          {
            v43 = -1; /*0x3f3dde*/
            v42 = -1; /*0x3f3de6*/
          }
          else
          {
            v42 = *(_WORD *)(v46 + 327); /*0x3f3dba*/
            v43 = *(_BYTE *)(v46 + 329); /*0x3f3dc2*/
          }
          v101 = v42; /*0x3f3dee*/
          v102 = v43; /*0x3f3df3*/
          v79 = v40; /*0x3f3df7*/
        }
      }
      else
      {
        v42 = -1; /*0x3f3e1e*/
        v40 = 0; /*0x3f3e26*/
        v43 = -1; /*0x3f3e29*/
        v101 = -1; /*0x3f3e31*/
        v102 = -1; /*0x3f3e36*/
        v79 = 0; /*0x3f3e3a*/
      }
      if ( *((__int16 *)v8 + 588) > 0 ) /*0x3f3e06*/
      {
        v47 = 0; /*0x3f3e10*/
        v80 = 0; /*0x3f3e12*/
        v48 = 0; /*0x3f3e16*/
        v49 = 0; /*0x3f3e19*/
        while ( 2 ) /*0x3f3e52*/
        {
          if ( v49 <= 9 && (v50 = *((_QWORD *)v8 + 146)) != 0 ) /*0x3f3e52*/
          {
            v51 = *(__int16 *)(v50 + v48); /*0x3f3e54*/
            v52 = *(_QWORD **)(a1 + 2472); /*0x3f3e59*/
            if ( v51 < 0 ) /*0x3f3e63*/
              v51 = 0; /*0x3f3e63*/
            if ( v51 > 9999 ) /*0x3f3e6e*/
              v51 = 9999; /*0x3f3e70*/
          }
          else
          {
            v52 = *(_QWORD **)(a1 + 2472); /*0x3f3e78*/
            v51 = 0; /*0x3f3e7f*/
          }
          v53 = *(_DWORD *)(v52[98] + 4 * ((unsigned __int64)v51 >> 5)); /*0x3f3e98*/
          if ( !_bittest(&v53, v51 & 0x1F) ) /*0x3f3e9f*/
            goto LABEL_97; /*0x3f3e9f*/
          v76 = v42; /*0x3f3ebd*/
          v77 = v43; /*0x3f3ec6*/
          v54 = v52[47]; /*0x3f3eee*/
          v55 = v52[49]; /*0x3f3f00*/
          v56 = *(_QWORD *)(v55 /*0x3f3f15*/
                          + 16
                          * (v52[52]
                           & (0x100000001B3LL
                            * (((unsigned __int64)(unsigned int)v51 >> 24)
                             ^ (0x100000001B3LL
                              * (BYTE2(v51)
                               ^ (0x100000001B3LL
                                * (BYTE1(v51) ^ (0x100000001B3LL * ((unsigned __int8)v51 ^ 0xCBF29CE484222325uLL)))))))))
                          + 8);
          if ( v56 == v54 ) /*0x3f3f1d*/
          {
LABEL_88:
            v56 = 0; /*0x3f3f41*/
          }
          else
          {
            v57 = *(_QWORD *)(v55 /*0x3f3f1f*/
                            + 16
                            * (v52[52]
                             & (0x100000001B3LL
                              * (((unsigned __int64)(unsigned int)v51 >> 24)
                               ^ (0x100000001B3LL
                                * (BYTE2(v51)
                                 ^ (0x100000001B3LL
                                  * (BYTE1(v51) ^ (0x100000001B3LL * ((unsigned __int8)v51 ^ 0xCBF29CE484222325uLL))))))))));
            if ( v51 != *(_DWORD *)(v56 + 16) ) /*0x3f3f27*/
            {
              while ( v56 != v57 ) /*0x3f3f33*/
              {
                v56 = *(_QWORD *)(v56 + 8); /*0x3f3f35*/
                if ( v51 == *(_DWORD *)(v56 + 16) ) /*0x3f3f3d*/
                  goto LABEL_89; /*0x3f3f3d*/
              }
              goto LABEL_88; /*0x3f3f33*/
            }
          }
LABEL_89:
          if ( v56 && v56 != v54 ) /*0x3f3f4d*/
          {
            v58 = *(_QWORD *)(v56 + 32); /*0x3f3f4f*/
            for ( i = *(_QWORD *)(v56 + 24); i != v58; i += 72 ) /*0x3f3f5a*/
            {
              if ( !*(_BYTE *)(i + 56) || *(_BYTE *)(i + 57) ) /*0x3f3f66*/
              {
                v60 = sub_368560(v52, v97, &v76, i); /*0x3f3f7b*/
                v42 = *(_WORD *)v60; /*0x3f3f80*/
                v43 = *(_BYTE *)(v60 + 2); /*0x3f3f84*/
                v76 = *(_WORD *)v60; /*0x3f3f89*/
                v77 = v43; /*0x3f3f8f*/
              }
            }
            v47 = v80; /*0x3f3f9d*/
          }
LABEL_97:
          v61 = *((__int16 *)v8 + 588); /*0x3f3fa1*/
          ++v47; /*0x3f3fa8*/
          ++v49; /*0x3f3faa*/
          v101 = v42; /*0x3f3fad*/
          v48 += 2; /*0x3f3fb2*/
          v102 = v43; /*0x3f3fb6*/
          v80 = v47; /*0x3f3fba*/
          if ( v47 >= v61 ) /*0x3f3fc0*/
          {
            v40 = v79; /*0x3f3fc6*/
            v2 = a1; /*0x3f3fcb*/
            v6 = v78; /*0x3f3fcf*/
            break; /*0x3f3fcf*/
          }
          continue; /*0x3f3fc0*/
        }
      }
LABEL_99:
      v62 = (__m128 *)*((_QWORD *)v8 + 139); /*0x3f3fd4*/
      if ( v62[1].m128_f32[0] != *(float *)&dword_8F84C8 /*0x3f4015*/
        || v62[1].m128_f32[1] != *(float *)&dword_8F84CC
        || v62[1].m128_f32[2] != *(float *)&dword_8F84D0
        || v62[1].m128_i16[6] != (_WORD)dword_8F84D4 )
      {
        v63 = v62[1]; /*0x3f4023*/
        v85 = v42; /*0x3f402b*/
        v86 = v43; /*0x3f4036*/
        v93 = v63; /*0x3f403f*/
        v64 = GameToolbox_transformColor(v98, &v85, &v93); /*0x3f4043*/
        v101 = *(_WORD *)v64; /*0x3f404b*/
        v102 = *(_BYTE *)(v64 + 2); /*0x3f4053*/
      }
      (*(void (__fastcall **)(struct cocos2d::CCObject *, __int16 *))(*(_QWORD *)v8 + 1440LL))(v8, &v101); /*0x3f4060*/
      v65 = 1.0; /*0x3f4066*/
      if ( v40 > 0 ) /*0x3f406c*/
      {
        v66 = sub_362560(*(_QWORD *)(v2 + 2472), (unsigned int)v40); /*0x3f4078*/
        if ( v66 ) /*0x3f4080*/
          v65 = *(float *)(v66 + 320) / 255.0; /*0x3f408a*/
        else
          v65 = 1.0; /*0x3f4090*/
      }
      if ( *((__int16 *)v8 + 588) > 0 ) /*0x3f409e*/
      {
        v67 = 0; /*0x3f40a0*/
        v68 = *((__int16 *)v8 + 588); /*0x3f40a2*/
        v69 = *(_QWORD *)(v2 + 2472); /*0x3f40aa*/
        do /*0x3f40e1*/
        {
          if ( v67 <= 9 && (v70 = *((_QWORD *)v8 + 146)) != 0 ) /*0x3f40c4*/
            v71 = (unsigned int)*(__int16 *)(v70 + 2 * v67); /*0x3f40c6*/
          else
            v71 = 0; /*0x3f40cc*/
          ++v67; /*0x3f40d7*/
          v65 = v65 * sub_367870(v69, v71); /*0x3f40da*/
        }
        while ( (__int64)v67 < v68 ); /*0x3f40e1*/
        v6 = v78; /*0x3f40e3*/
      }
      *(float *)(*((_QWORD *)v8 + 139) + 8LL) = v65; /*0x3f40ef*/
LABEL_117:
      if ( *((_BYTE *)v8 + 895) && (v72 = *((_QWORD *)v8 + 186), v89 = v87, v90 = v88, v72) ) /*0x3f4118*/
      {
        v5 = 0; /*0x3f4123*/
        v73 = (cocos2d::CCArray *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v72 + 480LL))(v72); /*0x3f4128*/
        for ( j = 0; j < cocos2d::CCArray::count(v73); ++j ) /*0x3f412d*/
        {
          v75 = cocos2d::CCArray::objectAtIndex(v73, j); /*0x3f4145*/
          (**((void (__fastcall ***)(__int64, __int16 *))v75 + 40))((__int64)v75 + 320, &v89); /*0x3f4159*/
        }
      }
      else
      {
        v5 = 0; /*0x3f416c*/
      }
      v3 = a2; /*0x3f416e*/
      v78 = ++v6; /*0x3f4178*/
      result = cocos2d::CCArray::count(a2); /*0x3f417d*/
    }
    while ( v6 < result ); /*0x3f39ec*/
  }
  return result; /*0x3f41b4*/
}

// [20/56] Address: 0x3f5da0
// Method: LevelEditorLayer::getNextColorChannel
// Hidden C++ exception states: #wind=3
__int64 __fastcall LevelEditorLayer_getNextColorChannel(_QWORD *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdi
  unsigned int *v4; // rdi
  __int64 v5; // rax
  __int64 *v6; // rdi
  __int64 *i; // rsi
  __int64 v8; // rcx
  int *v9; // rdx
  int v10; // eax
  int *v11; // rdx
  int v12; // ebx
  __int64 v13; // rax
  unsigned int *v14; // rbx
  __int64 v15; // rax
  __int64 *v16; // rbx
  __int64 *j; // rdi
  __int64 v18; // rdx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  bool v22; // zf
  int v23; // ecx
  int v24; // ecx
  int k; // r14d
  int v26; // r12d
  __int64 v27; // rax
  int v28; // esi
  __int64 v29; // r15
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rax
  char v34[16]; // [rsp+20h] [rbp-49h] BYREF
  _BYTE v35[16]; // [rsp+30h] [rbp-39h] BYREF
  int v36; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v37[2]; // [rsp+48h] [rbp-21h] BYREF
  __int64 v38; // [rsp+58h] [rbp-11h] BYREF
  __int128 v39; // [rsp+60h] [rbp-9h]
  __int64 v40; // [rsp+70h] [rbp+7h]
  __int64 v41; // [rsp+78h] [rbp+Fh]
  int v42; // [rsp+D8h] [rbp+6Fh] BYREF
  int v43; // [rsp+E0h] [rbp+77h] BYREF

  v37[1] = 0; /*0x3f5dd5*/
  v2 = operator new(0x18u); /*0x3f5dde*/
  *v2 = v2; /*0x3f5de3*/
  v2[1] = v2; /*0x3f5de6*/
  v37[0] = v2; /*0x3f5dea*/
  v38 = 0; /*0x3f5dee*/
  v39 = 0; /*0x3f5df5*/
  v40 = 7; /*0x3f5dfa*/
  v41 = 8; /*0x3f5e02*/
  v36 = 1065353216; /*0x3f5e12*/
  sub_3E200(&v38, 16, v2); /*0x3f5e25*/
  v3 = a1[450]; /*0x3f5e2b*/
  if ( v3 ) /*0x3f5e35*/
  {
    v4 = *(unsigned int **)(v3 + 56); /*0x3f5e3b*/
    v5 = *v4; /*0x3f5e3f*/
    if ( (_DWORD)v5 ) /*0x3f5e43*/
    {
      v6 = (__int64 *)*((_QWORD *)v4 + 2); /*0x3f5e49*/
      for ( i = &v6[v5 - 1]; v6 <= i; ++v6 ) /*0x3f5e58*/
      {
        v8 = *v6; /*0x3f5e60*/
        if ( !*v6 ) /*0x3f5e60*/
          break; /*0x3f5e66*/
        v9 = *(int **)(v8 + 1104); /*0x3f5e6c*/
        if ( v9 ) /*0x3f5e76*/
        {
          v10 = *v9; /*0x3f5e78*/
          if ( v9[1] == *v9 || !v10 ) /*0x3f5e85*/
            v10 = v9[1]; /*0x3f5e87*/
        }
        else
        {
          v10 = 0; /*0x3f5e8c*/
        }
        v42 = v10; /*0x3f5e8f*/
        v11 = *(int **)(v8 + 1112); /*0x3f5e92*/
        if ( v11 ) /*0x3f5e9c*/
        {
          v12 = *v11; /*0x3f5e9e*/
          if ( v11[1] == *v11 || !v12 ) /*0x3f5ea9*/
            v12 = v11[1]; /*0x3f5eab*/
        }
        else
        {
          v12 = 0; /*0x3f5eaf*/
        }
        v43 = v12; /*0x3f5eb2*/
        if ( v10 < 1000 ) /*0x3f5eba*/
          sub_67020(&v36, v34, &v42); /*0x3f5ec8*/
        if ( v12 < 1000 ) /*0x3f5ed3*/
          sub_67020(&v36, v35, &v43); /*0x3f5ee1*/
      }
    }
  }
  v13 = a1[1846]; /*0x3f5ef3*/
  if ( v13 ) /*0x3f5efd*/
  {
    v14 = *(unsigned int **)(v13 + 56); /*0x3f5f03*/
    v15 = *v14; /*0x3f5f07*/
    if ( (_DWORD)v15 ) /*0x3f5f0b*/
    {
      v16 = (__int64 *)*((_QWORD *)v14 + 2); /*0x3f5f0d*/
      for ( j = &v16[v15 - 1]; v16 <= j; ++v16 ) /*0x3f5f1c*/
      {
        v18 = *v16; /*0x3f5f20*/
        if ( !*v16 ) /*0x3f5f26*/
          break; /*0x3f5f26*/
        v19 = *(_DWORD *)(v18 + 1036); /*0x3f5f28*/
        if ( v19 > 744 ) /*0x3f5f34*/
        {
          v23 = v19 - 899; /*0x3f5f47*/
          if ( !v23 ) /*0x3f5f4d*/
          {
            v42 = *(_DWORD *)(v18 + 1032); /*0x3f5f65*/
            if ( v42 < 1000 ) /*0x3f5f6d*/
              goto LABEL_35; /*0x3f5f6d*/
            continue; /*0x3f5f6d*/
          }
          v24 = v23 - 1; /*0x3f5f4f*/
          if ( !v24 ) /*0x3f5f52*/
            continue; /*0x3f5f52*/
          v22 = v24 == 15; /*0x3f5f54*/
        }
        else
        {
          if ( v19 == 744 ) /*0x3f5f36*/
            continue; /*0x3f5f36*/
          v20 = v19 - 29; /*0x3f5f38*/
          if ( !v20 ) /*0x3f5f3b*/
            continue; /*0x3f5f3b*/
          v21 = v20 - 1; /*0x3f5f3d*/
          if ( !v21 ) /*0x3f5f40*/
            continue; /*0x3f5f40*/
          v22 = v21 == 75; /*0x3f5f42*/
        }
        if ( !v22 ) /*0x3f5f57*/
        {
          v42 = 0; /*0x3f5f59*/
LABEL_35:
          sub_67020(&v36, v35, &v42); /*0x3f5f6f*/
        }
      }
    }
  }
  for ( k = 1; k <= 1000; ++k ) /*0x3f5f98*/
  {
    v26 = k; /*0x3f5fb0*/
    v27 = *(_QWORD *)(v38 /*0x3f5ff7*/
                    + 16
                    * (v40
                     & (0x100000001B3LL
                      * (((unsigned __int64)(unsigned int)k >> 24)
                       ^ (0x100000001B3LL
                        * (BYTE2(k)
                         ^ (0x100000001B3LL
                          * ((0x100000001B3LL * ((unsigned __int8)k ^ 0xCBF29CE484222325uLL)) ^ BYTE1(k))))))))
                    + 8);
    if ( v27 != v37[0] ) /*0x3f6000*/
    {
      if ( k == *(_DWORD *)(v27 + 16) ) /*0x3f600a*/
        goto LABEL_44; /*0x3f600a*/
      while ( v27 != *(_QWORD *)(v38 /*0x3f6013*/
                               + 16
                               * (v40
                                & (0x100000001B3LL
                                 * (((unsigned __int64)(unsigned int)k >> 24)
                                  ^ (0x100000001B3LL
                                   * (BYTE2(k)
                                    ^ (0x100000001B3LL
                                     * ((0x100000001B3LL * ((unsigned __int8)k ^ 0xCBF29CE484222325uLL)) ^ BYTE1(k))))))))) )
      {
        v27 = *(_QWORD *)(v27 + 8); /*0x3f6015*/
        if ( k == *(_DWORD *)(v27 + 16) ) /*0x3f601d*/
          goto LABEL_44; /*0x3f601d*/
      }
    }
    v27 = 0; /*0x3f6021*/
LABEL_44:
    if ( !v27 ) /*0x3f6027*/
    {
      v28 = k; /*0x3f602d*/
      if ( k < 0 ) /*0x3f6033*/
        v28 = 0; /*0x3f6033*/
      v29 = *(_QWORD *)(a1[449] + 320LL); /*0x3f6045*/
      v30 = *(_QWORD *)(v29 + 736); /*0x3f604c*/
      if ( !*(_QWORD *)(v30 + 8LL * v28) ) /*0x3f6056*/
        break; /*0x3f6056*/
      v31 = *(_QWORD *)(v30 + 8LL * v28); /*0x3f6069*/
      if ( !v31 ) /*0x3f6070*/
      {
        v31 = ColorAction_create( /*0x3f6077*/
                (unsigned int)v28,
                2
              * (v40
               & (0x100000001B3LL
                * (((unsigned __int64)(unsigned int)k >> 24)
                 ^ (0x100000001B3LL
                  * (BYTE2(k)
                   ^ (0x100000001B3LL * ((0x100000001B3LL * ((unsigned __int8)k ^ 0xCBF29CE484222325uLL)) ^ BYTE1(k)))))))),
                0x100000001B3LL);
        if ( v28 < 0 ) /*0x3f6081*/
          v28 = 0; /*0x3f6081*/
        *(_DWORD *)(v31 + 92) = v28; /*0x3f6089*/
        cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(v29 + 328), (struct cocos2d::CCObject *)v31, v28); /*0x3f609c*/
        *(_QWORD *)(*(_QWORD *)(v29 + 736) + 8LL * v28) = v31; /*0x3f60a9*/
        v32 = sub_362560(v29, (unsigned int)v28); /*0x3f60b2*/
        *(_QWORD *)(v31 + 144) = v32; /*0x3f60b7*/
        *(_QWORD *)(v32 + 344) = v31; /*0x3f60be*/
      }
      LOWORD(v42) = *(_WORD *)(v31 + 72); /*0x3f60d8*/
      if ( (_WORD)v42 == 0xFFFF /*0x3f6106*/
        && *(_BYTE *)(v31 + 74) == 0xFF
        && *(float *)(v31 + 96) == 1.0
        && !*(_DWORD *)(v31 + 120)
        && !*(_BYTE *)(v31 + 84)
        && *(int *)(v31 + 88) <= 0 )
      {
        break; /*0x3f6106*/
      }
    }
  }
  if ( v26 > 999 ) /*0x3f612d*/
    v26 = 999; /*0x3f612d*/
  sub_3DA90(&v38); /*0x3f6135*/
  sub_3DB00(v37); /*0x3f613e*/
  return (unsigned int)v26; /*0x3f6146*/
}

// [21/56] Address: 0x3f6170
// Method: LevelEditorLayer::resetUnusedColorChannels
// Hidden C++ exception states: #wind=3
__int64 __fastcall LevelEditorLayer_resetUnusedColorChannels(_QWORD *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdi
  unsigned int *v4; // rdi
  __int64 v5; // rax
  __int64 *v6; // rdi
  __int64 *i; // rsi
  __int64 v8; // rcx
  int *v9; // rdx
  int v10; // eax
  int *v11; // rdx
  int v12; // ebx
  __int64 v13; // rax
  unsigned int *v14; // rbx
  __int64 v15; // rax
  __int64 *v16; // rbx
  __int64 *j; // rdi
  __int64 v18; // rdx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  bool v22; // zf
  int v23; // ecx
  int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 k; // rsi
  int v28; // ecx
  unsigned int v29; // r8d
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rbx
  char v34[16]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v35[16]; // [rsp+30h] [rbp-50h] BYREF
  int v36; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v37[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v38; // [rsp+58h] [rbp-28h] BYREF
  __int128 v39; // [rsp+60h] [rbp-20h]
  __int64 v40; // [rsp+70h] [rbp-10h]
  __int64 v41; // [rsp+78h] [rbp-8h]
  int v42; // [rsp+C8h] [rbp+48h] BYREF
  int v43; // [rsp+D0h] [rbp+50h] BYREF

  v37[1] = 0; /*0x3f619b*/
  v2 = operator new(0x18u); /*0x3f61a4*/
  *v2 = v2; /*0x3f61a9*/
  v2[1] = v2; /*0x3f61ac*/
  v37[0] = v2; /*0x3f61b0*/
  v38 = 0; /*0x3f61b4*/
  v39 = 0; /*0x3f61bb*/
  v40 = 7; /*0x3f61c0*/
  v41 = 8; /*0x3f61c8*/
  v36 = 1065353216; /*0x3f61d0*/
  sub_3E200(&v38, 16, v2); /*0x3f61e3*/
  v3 = a1[450]; /*0x3f61e9*/
  if ( v3 ) /*0x3f61f3*/
  {
    v4 = *(unsigned int **)(v3 + 56); /*0x3f61f9*/
    v5 = *v4; /*0x3f61fd*/
    if ( (_DWORD)v5 ) /*0x3f6201*/
    {
      v6 = (__int64 *)*((_QWORD *)v4 + 2); /*0x3f6207*/
      for ( i = &v6[v5 - 1]; v6 <= i; ++v6 ) /*0x3f6216*/
      {
        v8 = *v6; /*0x3f6220*/
        if ( !*v6 ) /*0x3f6220*/
          break; /*0x3f6226*/
        v9 = *(int **)(v8 + 1104); /*0x3f622c*/
        if ( v9 ) /*0x3f6236*/
        {
          v10 = *v9; /*0x3f6238*/
          if ( v9[1] == *v9 || !v10 ) /*0x3f6245*/
            v10 = v9[1]; /*0x3f6247*/
        }
        else
        {
          v10 = 0; /*0x3f624c*/
        }
        v42 = v10; /*0x3f624f*/
        v11 = *(int **)(v8 + 1112); /*0x3f6252*/
        if ( v11 ) /*0x3f625c*/
        {
          v12 = *v11; /*0x3f625e*/
          if ( v11[1] == *v11 || !v12 ) /*0x3f6269*/
            v12 = v11[1]; /*0x3f626b*/
        }
        else
        {
          v12 = 0; /*0x3f626f*/
        }
        v43 = v12; /*0x3f6272*/
        if ( v10 < 1000 ) /*0x3f627a*/
          sub_67020(&v36, v34, &v42); /*0x3f6288*/
        if ( v12 < 1000 ) /*0x3f6293*/
          sub_67020(&v36, v35, &v43); /*0x3f62a1*/
      }
    }
  }
  v13 = a1[1846]; /*0x3f62b3*/
  if ( v13 ) /*0x3f62bd*/
  {
    v14 = *(unsigned int **)(v13 + 56); /*0x3f62c3*/
    v15 = *v14; /*0x3f62c7*/
    if ( (_DWORD)v15 ) /*0x3f62cb*/
    {
      v16 = (__int64 *)*((_QWORD *)v14 + 2); /*0x3f62d1*/
      for ( j = &v16[v15 - 1]; v16 <= j; ++v16 ) /*0x3f62e0*/
      {
        v18 = *v16; /*0x3f62e2*/
        if ( !*v16 ) /*0x3f62e8*/
          break; /*0x3f62e8*/
        v19 = *(_DWORD *)(v18 + 1036); /*0x3f62ea*/
        if ( v19 > 744 ) /*0x3f62f6*/
        {
          v23 = v19 - 899; /*0x3f6309*/
          if ( !v23 ) /*0x3f630f*/
          {
            v42 = *(_DWORD *)(v18 + 1032); /*0x3f6327*/
            if ( v42 < 1000 ) /*0x3f632f*/
              goto LABEL_35; /*0x3f632f*/
            continue; /*0x3f632f*/
          }
          v24 = v23 - 1; /*0x3f6311*/
          if ( !v24 ) /*0x3f6314*/
            continue; /*0x3f6314*/
          v22 = v24 == 15; /*0x3f6316*/
        }
        else
        {
          if ( v19 == 744 ) /*0x3f62f8*/
            continue; /*0x3f62f8*/
          v20 = v19 - 29; /*0x3f62fa*/
          if ( !v20 ) /*0x3f62fd*/
            continue; /*0x3f62fd*/
          v21 = v20 - 1; /*0x3f62ff*/
          if ( !v21 ) /*0x3f6302*/
            continue; /*0x3f6302*/
          v22 = v21 == 75; /*0x3f6304*/
        }
        if ( !v22 ) /*0x3f6319*/
        {
          v42 = 0; /*0x3f631b*/
LABEL_35:
          sub_67020(&v36, v35, &v42); /*0x3f6331*/
        }
      }
    }
  }
  v25 = *(_QWORD *)(*(_QWORD *)(a1[449] + 320LL) + 328LL); /*0x3f634b*/
  if ( v25 ) /*0x3f6363*/
  {
    v26 = *(_QWORD *)(v25 + 56); /*0x3f6369*/
    if ( v26 ) /*0x3f6370*/
    {
      for ( k = *(_QWORD *)(v26 + 288); ; k = *(_QWORD *)(k + 288) ) /*0x3f6376*/
      {
        v28 = *(_DWORD *)(*(_QWORD *)(v26 + 264) + 92LL); /*0x3f63a7*/
        v29 = HIBYTE(v28); /*0x3f63ad*/
        if ( (unsigned int)(v28 - 1) > 0x3E6 ) /*0x3f63c7*/
          goto LABEL_53; /*0x3f63c7*/
        v30 = *(_QWORD *)(v38 /*0x3f6402*/
                        + 16
                        * (v40
                         & (0x100000001B3LL
                          * (v29
                           ^ (0x100000001B3LL
                            * (BYTE2(v28)
                             ^ (0x100000001B3LL
                              * (BYTE1(v28) ^ (0x100000001B3LL * ((unsigned __int8)v28 ^ 0xCBF29CE484222325uLL)))))))))
                        + 8);
        if ( v30 != v37[0] ) /*0x3f640b*/
        {
          if ( v28 == *(_DWORD *)(v30 + 16) ) /*0x3f6414*/
            goto LABEL_47; /*0x3f6414*/
          while ( v30 != *(_QWORD *)(v38 /*0x3f6419*/
                                   + 16
                                   * (v40
                                    & (0x100000001B3LL
                                     * (v29
                                      ^ (0x100000001B3LL
                                       * (BYTE2(v28)
                                        ^ (0x100000001B3LL
                                         * (BYTE1(v28)
                                          ^ (0x100000001B3LL * ((unsigned __int8)v28 ^ 0xCBF29CE484222325uLL)))))))))) )
          {
            v30 = *(_QWORD *)(v30 + 8); /*0x3f641b*/
            if ( v28 == *(_DWORD *)(v30 + 16) ) /*0x3f6422*/
              goto LABEL_47; /*0x3f6422*/
          }
        }
        v30 = 0; /*0x3f6426*/
LABEL_47:
        if ( !v30 ) /*0x3f642c*/
        {
          v31 = *(_QWORD *)(a1[449] + 320LL); /*0x3f6435*/
          if ( v28 < 0 ) /*0x3f643e*/
            v28 = 0; /*0x3f643e*/
          if ( v28 > 1101 ) /*0x3f6445*/
            v28 = 1101; /*0x3f6445*/
          v32 = v28; /*0x3f6449*/
          cocos2d::CCDictionary::removeObjectForKey(*(cocos2d::CCDictionary **)(v31 + 328), v28); /*0x3f6456*/
          *(_QWORD *)(*(_QWORD *)(v31 + 736) + 8 * v32) = 0; /*0x3f6463*/
          cocos2d::CCDictionary::removeObjectForKey(*(cocos2d::CCDictionary **)(v31 + 632), v32); /*0x3f6471*/
        }
LABEL_53:
        v26 = k; /*0x3f6481*/
        if ( !k ) /*0x3f6487*/
          break; /*0x3f6487*/
      }
    }
  }
  sub_3DA90(&v38); /*0x3f6495*/
  return sub_3DB00(v37); /*0x3f64a7*/
}

// [22/56] Address: 0x3f6af0
// Method: LevelEditorLayer::transferDefaultColors
__int64 __fastcall LevelEditorLayer_transferDefaultColors(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 AllColorActions; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int *v9; // rdi
  __int64 v10; // rax
  __int64 *v11; // rdi
  __int64 *i; // r14
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rcx
  __int16 v17; // dx
  char v18; // al
  __int64 v19; // rax
  __int64 v20; // r8
  int v21; // edx
  __int64 v22; // rax
  __int16 v23; // di
  char v24; // r14
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rax
  __int16 v28; // di
  char v29; // r14
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rax
  __int16 v33; // bx
  char v34; // di
  __int64 v35; // rax
  __int64 v36; // rax
  __int16 v37; // bx
  char v38; // di
  __int64 v39; // rax
  __int64 v40; // rax
  __int16 v41; // bx
  char v42; // di
  __int64 v43; // rax
  __int64 v44; // rax
  __int16 v45; // bx
  char v46; // di
  __int64 v47; // rax
  __int64 v48; // rax
  __int16 v49; // cx
  char v50; // al
  __int64 v51; // rcx
  __int16 v53; // [rsp+40h] [rbp+8h] BYREF
  char v54; // [rsp+42h] [rbp+Ah]

  AllColorActions = GJEffectManager_getAllColorActions(a2); /*0x3f6b0b*/
  if ( AllColorActions ) /*0x3f6b13*/
  {
    v9 = *(unsigned int **)(AllColorActions + 56); /*0x3f6b19*/
    v10 = *v9; /*0x3f6b1d*/
    if ( (_DWORD)v10 ) /*0x3f6b21*/
    {
      v11 = (__int64 *)*((_QWORD *)v9 + 2); /*0x3f6b27*/
      for ( i = &v11[v10 - 1]; v11 <= i; ++v11 ) /*0x3f6b36*/
      {
        v13 = *v11; /*0x3f6b40*/
        if ( !*v11 ) /*0x3f6b40*/
          break; /*0x3f6b46*/
        v14 = sub_3624A0(a3, *(unsigned int *)(v13 + 92)); /*0x3f6b52*/
        v15 = *(_DWORD *)(v13 + 88); /*0x3f6b57*/
        v16 = v14; /*0x3f6b5a*/
        if ( v15 > 0 ) /*0x3f6b5f*/
        {
          v19 = *(_QWORD *)(a1 + 3576); /*0x3f6b6b*/
          if ( v15 == 1 ) /*0x3f6b75*/
          {
            v17 = *(_WORD *)(v19 + 2706); /*0x3f6b77*/
            v18 = *(_BYTE *)(v19 + 2708); /*0x3f6b7e*/
          }
          else
          {
            v17 = *(_WORD *)(v19 + 2709); /*0x3f6b87*/
            v18 = *(_BYTE *)(v19 + 2711); /*0x3f6b8e*/
          }
        }
        else
        {
          v17 = *(_WORD *)(v13 + 72); /*0x3f6b61*/
          v18 = *(_BYTE *)(v13 + 74); /*0x3f6b65*/
        }
        v20 = *(int *)(v16 + 92); /*0x3f6b95*/
        *(_WORD *)(v16 + 75) = v17; /*0x3f6b99*/
        *(_BYTE *)(v16 + 77) = v18; /*0x3f6b9d*/
        *(_DWORD *)(v16 + 100) = *(_DWORD *)(v13 + 96); /*0x3f6ba3*/
        *(_BYTE *)(v16 + 84) = *(_BYTE *)(v13 + 84); /*0x3f6baa*/
        v21 = *(_DWORD *)(v13 + 120); /*0x3f6bad*/
        *(_DWORD *)(v16 + 120) = v21; /*0x3f6bb0*/
        *(_OWORD *)(v16 + 104) = *(_OWORD *)(v13 + 104); /*0x3f6bb7*/
        *(_BYTE *)(v16 + 125) = *(_BYTE *)(v13 + 125); /*0x3f6bbf*/
        if ( v21 <= 0 ) /*0x3f6bcb*/
          cocos2d::CCDictionary::removeObjectForKey(*(cocos2d::CCDictionary **)(a3 + 632), v20); /*0x3f6be1*/
        else
          cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(a3 + 632), (struct cocos2d::CCObject *)v16, v20); /*0x3f6bd3*/
      }
    }
  }
  v22 = *(_QWORD *)(a1 + 3576); /*0x3f6bf4*/
  v23 = *(_WORD *)(v22 + 2706); /*0x3f6bfb*/
  v24 = *(_BYTE *)(v22 + 2708); /*0x3f6c02*/
  v25 = *(_QWORD *)(*(_QWORD *)(a3 + 736) + 8040LL); /*0x3f6c11*/
  if ( !v25 ) /*0x3f6c1b*/
  {
    v25 = ColorAction_create(v7, v6, v8); /*0x3f6c2b*/
    *(_DWORD *)(v25 + 92) = 1005; /*0x3f6c2e*/
    cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(a3 + 328), (struct cocos2d::CCObject *)v25, 1005); /*0x3f6c3c*/
    *(_QWORD *)(*(_QWORD *)(a3 + 736) + 8040LL) = v25; /*0x3f6c4e*/
    v26 = sub_362560(a3, 1005); /*0x3f6c58*/
    *(_QWORD *)(v25 + 144) = v26; /*0x3f6c5d*/
    *(_QWORD *)(v26 + 344) = v25; /*0x3f6c64*/
  }
  *(_WORD *)(v25 + 75) = v23; /*0x3f6c6b*/
  *(_BYTE *)(v25 + 77) = v24; /*0x3f6c6f*/
  v27 = *(_QWORD *)(a1 + 3576); /*0x3f6c73*/
  v28 = *(_WORD *)(v27 + 2709); /*0x3f6c7a*/
  v29 = *(_BYTE *)(v27 + 2711); /*0x3f6c81*/
  v30 = *(_QWORD *)(*(_QWORD *)(a3 + 736) + 8048LL); /*0x3f6c90*/
  if ( !v30 ) /*0x3f6c9a*/
  {
    v30 = ColorAction_create(v7, v6, v8); /*0x3f6caa*/
    *(_DWORD *)(v30 + 92) = 1006; /*0x3f6cad*/
    cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(a3 + 328), (struct cocos2d::CCObject *)v30, 1006); /*0x3f6cbb*/
    *(_QWORD *)(*(_QWORD *)(a3 + 736) + 8048LL) = v30; /*0x3f6ccd*/
    v31 = sub_362560(a3, 1006); /*0x3f6cd7*/
    *(_QWORD *)(v30 + 144) = v31; /*0x3f6cdc*/
    *(_QWORD *)(v31 + 344) = v30; /*0x3f6ce3*/
  }
  *(_WORD *)(v30 + 75) = v28; /*0x3f6cea*/
  *(_BYTE *)(v30 + 77) = v29; /*0x3f6cf3*/
  v32 = *(_QWORD *)(a1 + 3576); /*0x3f6cfa*/
  v33 = *(_WORD *)(v32 + 2706); /*0x3f6d01*/
  v34 = *(_BYTE *)(v32 + 2708); /*0x3f6d08*/
  v35 = sub_362560(a3, 1005); /*0x3f6d0f*/
  *(_WORD *)(v35 + 324) = v33; /*0x3f6d1c*/
  *(_BYTE *)(v35 + 326) = v34; /*0x3f6d23*/
  v36 = *(_QWORD *)(a1 + 3576); /*0x3f6d2a*/
  v37 = *(_WORD *)(v36 + 2706); /*0x3f6d31*/
  v38 = *(_BYTE *)(v36 + 2708); /*0x3f6d38*/
  v39 = sub_362560(a3, 1005); /*0x3f6d3f*/
  *(_WORD *)(v39 + 327) = v37; /*0x3f6d4c*/
  *(_BYTE *)(v39 + 329) = v38; /*0x3f6d53*/
  v40 = *(_QWORD *)(a1 + 3576); /*0x3f6d5a*/
  v41 = *(_WORD *)(v40 + 2709); /*0x3f6d61*/
  v42 = *(_BYTE *)(v40 + 2711); /*0x3f6d68*/
  v43 = sub_362560(a3, 1006); /*0x3f6d6f*/
  *(_WORD *)(v43 + 324) = v41; /*0x3f6d7c*/
  *(_BYTE *)(v43 + 326) = v42; /*0x3f6d83*/
  v44 = *(_QWORD *)(a1 + 3576); /*0x3f6d8a*/
  v45 = *(_WORD *)(v44 + 2709); /*0x3f6d91*/
  v46 = *(_BYTE *)(v44 + 2711); /*0x3f6d98*/
  v47 = sub_362560(a3, 1006); /*0x3f6d9f*/
  *(_WORD *)(v47 + 327) = v45; /*0x3f6da9*/
  *(_BYTE *)(v47 + 329) = v46; /*0x3f6db0*/
  v48 = sub_362560(*(_QWORD *)(a1 + 2472), 1005); /*0x3f6dbe*/
  if ( v48 ) /*0x3f6dc6*/
  {
    v49 = *(_WORD *)(v48 + 327); /*0x3f6dc8*/
    v50 = *(_BYTE *)(v48 + 329); /*0x3f6dcf*/
  }
  else
  {
    v49 = -1; /*0x3f6dd8*/
    v50 = -1; /*0x3f6ddf*/
  }
  v53 = v49; /*0x3f6de6*/
  v51 = *(_QWORD *)(a1 + 2472); /*0x3f6df0*/
  v54 = v50; /*0x3f6df7*/
  return GJEffectManager_calculateLightBGColor(v51, &v53); /*0x3f6e00*/
}

// [23/56] Address: 0x3f87c0
// Method: LevelEditorLayer::runColorEffect
__int64 __fastcall LevelEditorLayer_runColorEffect(_QWORD *a1, __int64 a2, unsigned int a3, float a4, int a5, char a6)
{
  bool v9; // di
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // r10
  __int64 v13; // rcx

  v9 = *(float *)(a2 + 1468) <= 0.0; /*0x3f8801*/
  v10 = sub_3624A0(a1[309], a3); /*0x3f8805*/
  if ( *(float *)(v10 + 160) != 0.0 ) /*0x3f881a*/
  {
    if ( !v9 && a6 && (*(float *)(v10 + 68) == 0.0 || *(_BYTE *)(v10 + 56)) && *(int *)(v10 + 120) > 0 ) /*0x3f8845*/
      return 0; /*0x3f8849*/
    *(_DWORD *)(v10 + 164) = 0; /*0x3f8857*/
    *(_DWORD *)(v10 + 68) = 0; /*0x3f8861*/
    sub_35F9A0(v10); /*0x3f8865*/
    if ( !*(_DWORD *)(v12 + 120) ) /*0x3f886a*/
    {
      v13 = *(_QWORD *)(v12 + 144); /*0x3f8876*/
      *(_WORD *)(v13 + 324) = *(_WORD *)(v12 + 58); /*0x3f887d*/
      *(_BYTE *)(v13 + 326) = *(_BYTE *)(v12 + 60); /*0x3f8889*/
      *(float *)(v13 + 320) = *(float *)(v12 + 64) * 255.0; /*0x3f889d*/
    }
  }
  result = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, _QWORD, _BYTE, _DWORD, __int64, _DWORD, _BYTE, __int64, _DWORD, _DWORD))(*a1 + 1112LL))( /*0x3f8917*/
             a1,
             a2 + 1465,
             *(_QWORD *)(*a1 + 1112LL),
             a3,
             *(_BYTE *)(a2 + 1503),
             *(_DWORD *)(a2 + 1472),
             a2 + 1628,
             *(_DWORD *)(a2 + 1644),
             *(_BYTE *)(a2 + 1648),
             a2,
             *(_DWORD *)(a2 + 924),
             *(_DWORD *)(a2 + 1688));
  *(float *)(result + 160) = a4; /*0x3f8923*/
  *(_DWORD *)(result + 164) = a5; /*0x3f892b*/
  return result; /*0x3f8933*/
}

// [24/56] Address: 0x3f8960
// Method: LevelEditorLayer::updateColor
__int64 __fastcall LevelEditorLayer_updateColor(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        int a6,
        __int64 a7,
        int a8,
        char a9,
        __int64 a10,
        int a11)
{
  int v11; // edi
  __int64 v14; // rax
  __int16 v15; // cx
  char v16; // dl
  __int64 v17; // rax
  __int64 result; // rax
  __int64 v19; // r10
  __int64 v20; // r11
  char v21; // r9
  unsigned __int64 v22; // r8
  int v23; // edx
  int v24; // edx
  __int64 v25; // rcx
  int v26; // eax

  v11 = a4; /*0x3f897c*/
  if ( a4 < 0 ) /*0x3f8985*/
    v11 = 0; /*0x3f8985*/
  if ( v11 > 1101 ) /*0x3f898f*/
    v11 = 1101; /*0x3f898f*/
  if ( a10 ) /*0x3f8995*/
  {
    if ( *(_BYTE *)(a10 + 1501) ) /*0x3f8997*/
    {
      v14 = *(_QWORD *)(a1 + 3576); /*0x3f89a1*/
      v15 = *(_WORD *)(v14 + 2706); /*0x3f89a8*/
      v16 = *(_BYTE *)(v14 + 2708); /*0x3f89af*/
    }
    else
    {
      if ( !*(_BYTE *)(a10 + 1502) ) /*0x3f89c0*/
        goto LABEL_11; /*0x3f89c0*/
      v17 = *(_QWORD *)(a1 + 3576); /*0x3f89c2*/
      v15 = *(_WORD *)(v17 + 2709); /*0x3f89c9*/
      v16 = *(_BYTE *)(v17 + 2711); /*0x3f89d0*/
    }
    *(_WORD *)a2 = v15; /*0x3f89d7*/
    *(_BYTE *)(a2 + 2) = v16; /*0x3f89db*/
  }
LABEL_11:
  result = GJBaseGameLayer_updateColor(a1, a2, a10, v11, a5, a6, a7, a8, a9, a10, a11); /*0x3f89df*/
  v19 = result; /*0x3f8a4f*/
  if ( *(_DWORD *)(a1 + 2204) ) /*0x3f8a48*/
  {
    v20 = *(_QWORD *)(a1 + 15344); /*0x3f8a54*/
    v21 = v11 & 0x1F; /*0x3f8a66*/
    v22 = (unsigned __int64)v11 >> 5; /*0x3f8a6a*/
    v23 = *(_DWORD *)(v20 + 4 * v22); /*0x3f8a73*/
    if ( a5 == (((1 << (v11 & 0x1F)) & v23) != 0) ) /*0x3f8a7f*/
    {
      v25 = *(_QWORD *)(a1 + 15376); /*0x3f8aa5*/
      v26 = *(_DWORD *)(v25 + 4 * v22) & ~(1 << v21); /*0x3f8ab0*/
    }
    else
    {
      if ( a5 ) /*0x3f8a84*/
        v24 = v23 | (1 << v21); /*0x3f8a86*/
      else
        v24 = v23 & ~(1 << v21); /*0x3f8a8c*/
      *(_DWORD *)(v20 + 4 * v22) = v24; /*0x3f8a90*/
      v25 = *(_QWORD *)(a1 + 15376); /*0x3f8a94*/
      v26 = *(_DWORD *)(v25 + 4 * v22) | (1 << v21); /*0x3f8a9f*/
    }
    *(_DWORD *)(v25 + 4 * v22) = v26; /*0x3f8ab4*/
    return v19; /*0x3f8ab8*/
  }
  return result; /*0x3f8abb*/
}

// [25/56] Address: 0x3f8ad0
// Method: LevelEditorLayer::stopTriggersInGroup
char *__fastcall LevelEditorLayer_stopTriggersInGroup(_QWORD *a1, int a2, float a3)
{
  __int64 TriggerGroup; // rax
  unsigned int *v7; // rsi
  __int64 v8; // rax
  _QWORD *v9; // rsi
  _QWORD *i; // r14
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r9
  float v15; // xmm0_4
  float v16; // xmm2_4
  float v17; // xmm2_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  char v20; // al
  __int64 v21; // rcx
  __int16 v22; // ax
  __int16 v23; // cx
  float v24; // xmm3_4
  __int16 v25; // ax
  int v26; // ecx
  int v27; // r8d
  float v28; // xmm1_4
  char *v29; // rbx
  char *result; // rax
  char *v31; // rsi
  __int64 v32; // r9
  __int64 v33; // r8
  __int16 *v34; // rcx
  __int64 v35; // rdx
  _QWORD *v36; // rdx
  __int64 v37; // [rsp+A0h] [rbp+8h] BYREF

  TriggerGroup = LevelEditorLayer_getTriggerGroup(); /*0x3f8af4*/
  if ( TriggerGroup ) /*0x3f8aff*/
  {
    v7 = *(unsigned int **)(TriggerGroup + 56); /*0x3f8b05*/
    v8 = *v7; /*0x3f8b09*/
    if ( (_DWORD)v8 ) /*0x3f8b0d*/
    {
      v9 = (_QWORD *)*((_QWORD *)v7 + 2); /*0x3f8b13*/
      for ( i = &v9[v8 - 1]; v9 <= i; ++v9 ) /*0x3f8b2a*/
      {
        v11 = *v9; /*0x3f8b54*/
        if ( !*v9 ) /*0x3f8b5a*/
          break; /*0x3f8b5a*/
        if ( *(_BYTE *)(v11 + 1264) ) /*0x3f8b60*/
        {
          v12 = a1[309]; /*0x3f8b6d*/
          if ( *(_BYTE *)(v11 + 1262) ) /*0x3f8b74*/
          {
            v13 = sub_3624A0(v12, *(unsigned int *)(v11 + 1032)); /*0x3f8b87*/
            v14 = v13; /*0x3f8b92*/
            if ( *(_DWORD *)(v13 + 128) == *(_DWORD *)(v11 + 924) ) /*0x3f8b9b*/
            {
              *(_DWORD *)(v13 + 164) = 0; /*0x3f8ba1*/
              *(_DWORD *)(v13 + 68) = 0; /*0x3f8ba8*/
              if ( !*(_BYTE *)(v13 + 56) && !*(_BYTE *)(v13 + 57) ) /*0x3f8bb2*/
              {
                v15 = *(float *)(v13 + 80); /*0x3f8bb8*/
                v16 = (float)(a3 - *(float *)(v13 + 160)) + 0.0; /*0x3f8bc9*/
                *(float *)(v13 + 68) = v16; /*0x3f8bcd*/
                v17 = v16 + 0.0; /*0x3f8bd2*/
                if ( v17 >= v15 ) /*0x3f8bd9*/
                  goto LABEL_13; /*0x3f8bd9*/
                if ( v17 <= 0.0 ) /*0x3f8bde*/
                {
                  v18 = 0.0; /*0x3f8c4c*/
                }
                else
                {
                  v18 = v17 / v15; /*0x3f8be0*/
                  if ( v18 >= 1.0 ) /*0x3f8be7*/
                  {
LABEL_13:
                    v19 = *(float *)(v13 + 100); /*0x3f8be9*/
                    *(_WORD *)(v13 + 58) = *(_WORD *)(v13 + 75); /*0x3f8bf3*/
                    v20 = *(_BYTE *)(v13 + 77); /*0x3f8bf8*/
                    goto LABEL_14; /*0x3f8bf8*/
                  }
                }
                if ( v18 > 0.0 ) /*0x3f8c52*/
                {
                  v22 = *(_WORD *)(v13 + 75); /*0x3f8c6a*/
                  v23 = *(_WORD *)(v14 + 72); /*0x3f8c71*/
                  v24 = fminf(1.0, v18); /*0x3f8c76*/
                  if ( v24 <= 0.0 ) /*0x3f8c87*/
                  {
                    v25 = *(_WORD *)(v14 + 72); /*0x3f8d3e*/
                    LOWORD(v37) = v25; /*0x3f8d41*/
                    LOBYTE(v26) = *(_BYTE *)(v14 + 74); /*0x3f8d49*/
                  }
                  else if ( v24 == 1.0 ) /*0x3f8c9d*/
                  {
                    v25 = *(_WORD *)(v14 + 75); /*0x3f8c9f*/
                    LOBYTE(v26) = *(_BYTE *)(v14 + 77); /*0x3f8ca4*/
                    LOWORD(v37) = v25; /*0x3f8ca9*/
                  }
                  else
                  {
                    v27 = *(unsigned __int8 *)(v14 + 74); /*0x3f8cbb*/
                    LOBYTE(v37) = (int)(float)((float)((float)((unsigned __int8)v22 - (unsigned __int8)v23) * v24) /*0x3f8ce9*/
                                             + (float)(unsigned __int8)v23);
                    BYTE1(v37) = (int)(float)((float)((float)(HIBYTE(v22) - HIBYTE(v23)) * v24) + (float)HIBYTE(v23)); /*0x3f8d12*/
                    v25 = v37; /*0x3f8d25*/
                    v26 = (int)(float)((float)((float)(*(unsigned __int8 *)(v14 + 77) - v27) * v24) + (float)v27); /*0x3f8d38*/
                  }
                  v28 = *(float *)(v14 + 100) - *(float *)(v14 + 96); /*0x3f8d54*/
                  *(_WORD *)(v14 + 58) = v25; /*0x3f8d5a*/
                  *(_BYTE *)(v14 + 60) = v26; /*0x3f8d5f*/
                  v19 = (float)(v28 * v18) + *(float *)(v14 + 96); /*0x3f8d67*/
                }
                else
                {
                  v19 = *(float *)(v13 + 96); /*0x3f8c58*/
                  *(_WORD *)(v13 + 58) = *(_WORD *)(v13 + 72); /*0x3f8c5e*/
                  v20 = *(_BYTE *)(v13 + 74); /*0x3f8c63*/
LABEL_14:
                  *(_BYTE *)(v14 + 60) = v20; /*0x3f8bfd*/
                }
                *(float *)(v14 + 64) = v19; /*0x3f8c01*/
              }
              *(_BYTE *)(v14 + 56) = 1; /*0x3f8c07*/
              if ( !*(_DWORD *)(v14 + 120) ) /*0x3f8c0c*/
              {
                v21 = *(_QWORD *)(v14 + 144); /*0x3f8c1b*/
                *(_WORD *)(v21 + 324) = *(_WORD *)(v14 + 58); /*0x3f8c22*/
                *(_BYTE *)(v21 + 326) = *(_BYTE *)(v14 + 60); /*0x3f8c2e*/
                *(float *)(v21 + 320) = *(float *)(v14 + 64) * 255.0; /*0x3f8c3f*/
              }
            }
          }
          else
          {
            sub_365170(v12, *v9, 0); /*0x3f8d78*/
          }
        }
      }
    }
  }
  v29 = (char *)a1[1952]; /*0x3f8da2*/
  result = (char *)a1[1953]; /*0x3f8da9*/
  if ( v29 != result ) /*0x3f8db9*/
  {
    v31 = v29 + 8; /*0x3f8dbf*/
    do /*0x3f8e69*/
    {
      v32 = *(_QWORD *)v29; /*0x3f8dd0*/
      v37 = v32; /*0x3f8dd3*/
      v33 = *(__int16 *)(*(_QWORD *)v32 + 1176LL); /*0x3f8dde*/
      if ( (__int16)v33 <= 0 ) /*0x3f8dea*/
      {
LABEL_36:
        v29 += 8; /*0x3f8e10*/
        v31 += 8; /*0x3f8e14*/
      }
      else
      {
        v34 = *(__int16 **)(*(_QWORD *)v32 + 1168LL); /*0x3f8dec*/
        v35 = 0; /*0x3f8df3*/
        while ( *v34 != a2 ) /*0x3f8dfb*/
        {
          ++v35; /*0x3f8dfd*/
          ++v34; /*0x3f8e00*/
          if ( v35 >= v33 ) /*0x3f8e07*/
          {
            result = (char *)a1[1953]; /*0x3f8e09*/
            goto LABEL_36; /*0x3f8e09*/
          }
        }
        v36 = (_QWORD *)a1[1956]; /*0x3f8e21*/
        if ( v36 == (_QWORD *)a1[1957] ) /*0x3f8e29*/
        {
          sub_68840(a1 + 1955, v36, &v37); /*0x3f8e3d*/
        }
        else
        {
          *v36 = v32; /*0x3f8e2b*/
          a1[1956] += 8LL; /*0x3f8e2e*/
        }
        memmove(v29, v31, a1[1953] - (_QWORD)v31); /*0x3f8e52*/
        a1[1953] -= 8LL; /*0x3f8e57*/
        result = (char *)a1[1953]; /*0x3f8e5f*/
      }
    }
    while ( v29 != result ); /*0x3f8e69*/
  }
  return result; /*0x3f8e6f*/
}

// [26/56] Address: 0x3f8e90
// Method: LevelEditorLayer::spawnGroupPreview
void __fastcall LevelEditorLayer_spawnGroupPreview(
        _QWORD *a1,
        int a2,
        __int64 a3,
        float a4,
        int a5,
        float a6,
        int a7,
        char a8,
        char a9)
{
  unsigned __int64 v9; // r9
  int v10; // eax
  __int64 v12; // rdx
  unsigned int v13; // ecx
  int v14; // eax
  __int64 v15; // rax
  unsigned __int64 v16; // rdi
  cocos2d::CCArray *TriggerGroup; // rax
  int v18; // r9d
  __int64 v19; // r8
  unsigned __int64 v20; // rsi
  char v21; // di
  unsigned __int64 v22; // rsi
  cocos2d::CCArray *v23; // r14
  char v24; // r15
  float v25; // xmm7_4
  unsigned int *v26; // rdi
  __int64 v27; // rax
  _QWORD *v28; // rdi
  _QWORD *i; // r14
  __int64 v30; // rbx
  float *v31; // rax
  int v32; // r8d
  int v33; // r9d
  double v34; // xmm2_8
  char v35; // al
  int v36; // esi
  unsigned int *v37; // rdi
  __int64 v38; // rax
  __int64 *v39; // rdi
  __int64 *j; // r14
  __int64 v41; // rbx
  char v42; // al

  if ( a2 > 0 ) /*0x3f8e92*/
  {
    v9 = a2; /*0x3f8ea3*/
    v10 = 9999; /*0x3f8ea6*/
    if ( a2 <= 9999 ) /*0x3f8ebd*/
      v10 = a2; /*0x3f8ebd*/
    v12 = *(_QWORD *)(a1[309] + 1280LL); /*0x3f8ecc*/
    v13 = v10 & 0x1F; /*0x3f8edc*/
    v14 = *(_DWORD *)(v12 + 4 * ((unsigned __int64)v10 >> 5)); /*0x3f8ee3*/
    if ( _bittest(&v14, v13) ) /*0x3f8ee7*/
    {
      if ( a4 <= a6 ) /*0x3f8f03*/
      {
        v15 = a1[1929]; /*0x3f8f09*/
        v16 = v9; /*0x3f8f14*/
        if ( *(float *)(v15 + 4 * v9) < a4 ) /*0x3f8f20*/
        {
          *(float *)(v15 + 4 * v9) = a4; /*0x3f8f38*/
          TriggerGroup = (cocos2d::CCArray *)LevelEditorLayer_getTriggerGroup(a1, (unsigned int)v9); /*0x3f8f3e*/
          v19 = a1[1901]; /*0x3f8f43*/
          v20 = v16; /*0x3f8f4a*/
          v21 = v16 & 0x1F; /*0x3f8f4d*/
          v22 = v20 >> 5; /*0x3f8f50*/
          v23 = TriggerGroup; /*0x3f8f5d*/
          if ( ((1 << v21) & *(_DWORD *)(v19 + 4 * v22)) == 0 ) /*0x3f8f64*/
          {
            if ( cocos2d::CCArray::count(TriggerGroup) > 1 ) /*0x3f8f72*/
              qsort(*(void **)(*((_QWORD *)v23 + 7) + 16LL), **((unsigned int **)v23 + 7), 8u, sub_3078A0); /*0x3f8f8b*/
            *(_DWORD *)(a1[1901] + 4 * v22) |= 1 << v21; /*0x3f8f9e*/
          }
          if ( a8 ) /*0x3f8fc2*/
          {
            v24 = 0; /*0x3f8fc8*/
            v25 = 0.0; /*0x3f8fcb*/
            if ( v23 ) /*0x3f8fd1*/
            {
              v26 = (unsigned int *)*((_QWORD *)v23 + 7); /*0x3f8fd7*/
              v27 = *v26; /*0x3f8fdb*/
              if ( (_DWORD)v27 ) /*0x3f8fdf*/
              {
                v28 = (_QWORD *)*((_QWORD *)v26 + 2); /*0x3f8fe5*/
                for ( i = &v28[v27 - 1]; v28 <= i; ++v28 ) /*0x3f8ff4*/
                {
                  v30 = *v28; /*0x3f9040*/
                  if ( !*v28 ) /*0x3f9046*/
                    return; /*0x3f9046*/
                  if ( *(_BYTE *)(v30 + 1260) /*0x3f906f*/
                    && *(_BYTE *)(v30 + 1489)
                    && (*(_BYTE *)(v30 + 1680) || !*(_BYTE *)(v30 + 1460)) )
                  {
                    v31 = (float *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v30 + 200LL))(*v28); /*0x3f9089*/
                    if ( v24 ) /*0x3f908e*/
                    {
                      v34 = (float)((float)(*v31 - v25) / 311.58011); /*0x3f90a6*/
                      if ( v34 != 0.0 ) /*0x3f90b0*/
                      {
                        if ( a6 >= a4 + v34 ) /*0x3f9122*/
                          sub_3F86D0(a1, v30); /*0x3f912e*/
                        continue; /*0x3f912e*/
                      }
                    }
                    else
                    {
                      v25 = *v31; /*0x3f9090*/
                      v24 = 1; /*0x3f9094*/
                    }
                    *(float *)(v30 + 1824) = a4; /*0x3f90b2*/
                    *(_DWORD *)(v30 + 1676) = 0; /*0x3f90ba*/
                    v35 = a9 && a4 > *(float *)(a1[1876] + 504LL); /*0x3f90d5*/
                    sub_3F7DC0((_DWORD)a1, v30, v32, v33, a7, v35); /*0x3f90f4*/
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 1336LL))(v30); /*0x3f9103*/
                  }
                }
              }
            }
          }
          else
          {
            v36 = 0; /*0x3f91b0*/
            if ( v23 ) /*0x3f91b5*/
            {
              v37 = (unsigned int *)*((_QWORD *)v23 + 7); /*0x3f91b7*/
              v38 = *v37; /*0x3f91bb*/
              if ( (_DWORD)v38 ) /*0x3f91bf*/
              {
                v39 = (__int64 *)*((_QWORD *)v37 + 2); /*0x3f91c1*/
                for ( j = &v39[v38 - 1]; v39 <= j; ++v39 ) /*0x3f91d0*/
                {
                  v41 = *v39; /*0x3f91f0*/
                  if ( !*v39 ) /*0x3f91f0*/
                    break; /*0x3f91f6*/
                  if ( *(_BYTE *)(v41 + 1260) /*0x3f9217*/
                    && *(_BYTE *)(v41 + 1489)
                    && (*(_BYTE *)(v41 + 1680) || !*(_BYTE *)(v41 + 1460)) )
                  {
                    *(_DWORD *)(v41 + 1676) = v36++; /*0x3f9220*/
                    *(float *)(v41 + 1824) = a4; /*0x3f9228*/
                    v42 = a9 && a4 > *(float *)(a1[1876] + 504LL); /*0x3f9245*/
                    sub_3F7DC0((_DWORD)a1, v41, v19, v18, a7, v42); /*0x3f9263*/
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 1336LL))(v41); /*0x3f9272*/
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

// [27/56] Address: 0x3f9410
// Method: LevelEditorLayer::resetToggledGroupsAndObjects
int __fastcall LevelEditorLayer_resetToggledGroupsAndObjects(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // r8
  unsigned int *v4; // rax
  __int64 v5; // rcx
  __int64 *v6; // rax
  __int64 *i; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // r9
  __int64 v10; // r11
  int *v11; // rdx
  int result; // eax

  v1 = a1[450]; /*0x3f9410*/
  v2 = 0; /*0x3f9417*/
  if ( v1 ) /*0x3f9420*/
  {
    v4 = *(unsigned int **)(v1 + 56); /*0x3f9422*/
    v5 = *v4; /*0x3f9426*/
    if ( (_DWORD)v5 ) /*0x3f942a*/
    {
      v6 = (__int64 *)*((_QWORD *)v4 + 2); /*0x3f942c*/
      for ( i = &v6[v5 - 1]; v6 <= i; *(_BYTE *)(v8 + 654) = 0 ) /*0x3f943b*/
      {
        v8 = *v6; /*0x3f9440*/
        if ( !*v6 ) /*0x3f9440*/
          break; /*0x3f9446*/
        ++v6; /*0x3f9448*/
        *(_DWORD *)(v8 + 1216) = 0; /*0x3f944c*/
      }
    }
  }
  v9 = 0; /*0x3f945f*/
  v10 = 10000; /*0x3f9462*/
  do /*0x3f94a7*/
  {
    *(_BYTE *)(++v2 + a1[1926] - 1) = 0; /*0x3f9482*/
    v11 = (int *)(a1[1905] + 4 * (v9 >> 5)); /*0x3f948f*/
    result = *v11 & ~(1 << (v9++ & 0x1F)); /*0x3f949b*/
    *v11 = result; /*0x3f94a1*/
    --v10; /*0x3f94a3*/
  }
  while ( v10 ); /*0x3f94a7*/
  return result; /*0x3f94a9*/
}

// [28/56] Address: 0x3f95e0
// Method: LevelEditorLayer::timeForPos
__int64 __fastcall LevelEditorLayer_timeForPos(
        __int64 a1,
        const struct cocos2d::CCPoint *a2,
        int a3,
        int a4,
        char a5,
        int a6)
{
  __int64 v9; // r10
  __int64 v10; // rsi
  __int64 v11; // rdx
  int v12; // edi
  const struct cocos2d::CCPoint *v13; // rax
  int v14; // eax
  _BYTE v16[16]; // [rsp+50h] [rbp-28h] BYREF
  char v17; // [rsp+80h] [rbp+8h] BYREF

  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v17, a2); /*0x3f9603*/
  v9 = *(_QWORD *)(a1 + 15008); /*0x3f9609*/
  v10 = *(_QWORD *)(v9 + 592); /*0x3f9617*/
  v11 = *(_QWORD *)(*(_QWORD *)(v9 + 520) + 3592LL); /*0x3f961e*/
  LOBYTE(a1) = *(_BYTE *)(v11 + 341); /*0x3f962a*/
  v12 = *(_DWORD *)(v11 + 332); /*0x3f9631*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v16, v13); /*0x3f963a*/
  return LevelTools_timeForPos(v14, v10, v12, a3, a4, a5, a1, 0, 0, a6); /*0x3f967a*/
}

// [29/56] Address: 0x3f9690
// Method: LevelEditorLayer::posForTime
__int64 __fastcall LevelEditorLayer_posForTime(__int64 a1, __int64 a2)
{
  sub_463590( /*0x3f96e3*/
    a2,
    a2,
    *(_QWORD *)(*(_QWORD *)(a1 + 15008) + 592LL),
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 15008) + 520LL) + 3592LL) + 332LL),
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 15008) + 520LL) + 3592LL) + 341LL),
    0,
    0,
    *(_QWORD *)(*(_QWORD *)(a1 + 15008) + 520LL) + 832LL);
  return a2; /*0x3f96eb*/
}

// [30/56] Address: 0x3f9700
// Method: LevelEditorLayer::resetSPTriggered
__int64 *__fastcall LevelEditorLayer_resetSPTriggered(__int64 a1)
{
  __int64 *result; // rax
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 *i; // rdx
  __int64 v5; // rcx

  result = *(__int64 **)(a1 + 15008); /*0x3f9700*/
  v2 = result[74]; /*0x3f9707*/
  if ( v2 ) /*0x3f9711*/
  {
    result = *(__int64 **)(v2 + 56); /*0x3f9713*/
    v3 = *(unsigned int *)result; /*0x3f9717*/
    if ( (_DWORD)v3 ) /*0x3f971b*/
    {
      result = (__int64 *)result[2]; /*0x3f971d*/
      for ( i = &result[v3 - 1]; result <= i; *(_BYTE *)(v5 + 1850) = 0 ) /*0x3f972c*/
      {
        v5 = *result; /*0x3f9730*/
        if ( !*result ) /*0x3f9730*/
          break; /*0x3f9736*/
        ++result; /*0x3f9738*/
      }
    }
  }
  return result; /*0x3f9748*/
}

// [31/56] Address: 0x3f9800
// Method: LevelEditorLayer::addToGroup
void __fastcall LevelEditorLayer_addToGroup(__int64 a1, struct cocos2d::CCObject *a2, int a3, char a4)
{
  __int64 v4; // rbp
  cocos2d::CCArray *Group; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // r14
  struct cocos2d::CCObject *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  struct cocos2d::CCObject *v15; // rsi

  v4 = a3; /*0x3f980d*/
  if ( a3 > 9999 ) /*0x3f9820*/
    return; /*0x3f9820*/
  Group = (cocos2d::CCArray *)GJBaseGameLayer_getGroup(a1, (unsigned int)a3); /*0x3f9832*/
  cocos2d::CCArray::addObject(Group, a2); /*0x3f983d*/
  v10 = 0; /*0x3f9843*/
  if ( *((_BYTE *)a2 + 1298) ) /*0x3f9845*/
  {
    if ( (int)v4 >= 0 ) /*0x3f984f*/
      v10 = v4; /*0x3f984f*/
    v11 = v10; /*0x3f9852*/
    v12 = *(struct cocos2d::CCObject **)(*(_QWORD *)(a1 + 4008) + 8LL * v10); /*0x3f985c*/
    if ( v12 ) /*0x3f9863*/
      goto LABEL_12; /*0x3f9863*/
    v12 = (struct cocos2d::CCObject *)cocos2d::CCArray::create(v9); /*0x3f9878*/
    cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(a1 + 3952), v12, v11); /*0x3f987b*/
    v13 = *(_QWORD *)(a1 + 4008); /*0x3f9881*/
  }
  else
  {
    if ( (int)v4 >= 0 ) /*0x3f988c*/
      v10 = v4; /*0x3f988c*/
    v11 = v10; /*0x3f988f*/
    v12 = *(struct cocos2d::CCObject **)(*(_QWORD *)(a1 + 3984) + 8LL * v10); /*0x3f9899*/
    if ( v12 ) /*0x3f98a0*/
      goto LABEL_12; /*0x3f98a0*/
    v12 = (struct cocos2d::CCObject *)cocos2d::CCArray::create(v9); /*0x3f98b5*/
    cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(a1 + 3944), v12, v11); /*0x3f98b8*/
    v13 = *(_QWORD *)(a1 + 3984); /*0x3f98be*/
  }
  *(_QWORD *)(v13 + 8 * v11) = v12; /*0x3f98c5*/
LABEL_12:
  cocos2d::CCArray::addObject(v12, a2); /*0x3f98c9*/
  if ( *((_BYTE *)a2 + 1261) ) /*0x3f98d5*/
  {
    v15 = *(struct cocos2d::CCObject **)(*(_QWORD *)(a1 + 15112) + 8 * v4); /*0x3f98ea*/
    if ( !v15 ) /*0x3f98f1*/
    {
      v15 = (struct cocos2d::CCObject *)cocos2d::CCArray::create(v14); /*0x3f9906*/
      *(_QWORD *)(*(_QWORD *)(a1 + 15112) + 8 * v4) = v15; /*0x3f9909*/
      cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(a1 + 15104), v15, v4); /*0x3f9914*/
    }
    if ( a4 || !cocos2d::CCArray::containsObject(v15, a2) ) /*0x3f9925*/
      cocos2d::CCArray::addObject(v15, a2); /*0x3f9935*/
  }
  *(_BYTE *)(a1 + 15730) = 1; /*0x3f9940*/
}

// [32/56] Address: 0x3f9960
// Method: LevelEditorLayer::removeFromGroup
void __fastcall LevelEditorLayer_removeFromGroup(__int64 a1, struct cocos2d::CCObject *a2, unsigned int a3)
{
  __int64 v3; // rbp
  cocos2d::CCArray *Group; // rax
  int v7; // eax
  __int64 v8; // r14
  struct cocos2d::CCObject *v9; // rsi
  __int64 v10; // rax
  cocos2d::CCArray *v11; // rax
  cocos2d::CCArray *TriggerGroup; // rax

  v3 = (int)a3; /*0x3f996f*/
  Group = (cocos2d::CCArray *)GJBaseGameLayer_getGroup(a1, a3); /*0x3f9984*/
  cocos2d::CCArray::removeObject(Group, a2, 1); /*0x3f9992*/
  v7 = v3; /*0x3f999f*/
  if ( *((_BYTE *)a2 + 1298) ) /*0x3f9998*/
  {
    if ( (int)v3 > 9999 ) /*0x3f99aa*/
      v7 = 9999; /*0x3f99aa*/
    if ( v7 < 0 ) /*0x3f99b1*/
      v7 = 0; /*0x3f99b1*/
    v8 = (unsigned int)v7; /*0x3f99b4*/
    v9 = *(struct cocos2d::CCObject **)(*(_QWORD *)(a1 + 4008) + 8LL * (unsigned int)v7); /*0x3f99be*/
    if ( !v9 ) /*0x3f99c5*/
    {
      v9 = (struct cocos2d::CCObject *)cocos2d::CCArray::create(0); /*0x3f99da*/
      cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(a1 + 3952), v9, (unsigned int)v8); /*0x3f99dd*/
      v10 = *(_QWORD *)(a1 + 4008); /*0x3f99e3*/
LABEL_14:
      *(_QWORD *)(v10 + 8 * v8) = v9; /*0x3f9a2e*/
    }
  }
  else
  {
    if ( (int)v3 > 9999 ) /*0x3f99ee*/
      v7 = 9999; /*0x3f99ee*/
    if ( v7 < 0 ) /*0x3f99f5*/
      v7 = 0; /*0x3f99f5*/
    v8 = (unsigned int)v7; /*0x3f99f8*/
    v9 = *(struct cocos2d::CCObject **)(*(_QWORD *)(a1 + 3984) + 8LL * (unsigned int)v7); /*0x3f9a02*/
    if ( !v9 ) /*0x3f9a09*/
    {
      v9 = (struct cocos2d::CCObject *)cocos2d::CCArray::create(0); /*0x3f9a1e*/
      cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(a1 + 3944), v9, (unsigned int)v8); /*0x3f9a21*/
      v10 = *(_QWORD *)(a1 + 3984); /*0x3f9a27*/
      goto LABEL_14; /*0x3f9a27*/
    }
  }
  cocos2d::CCArray::removeObject(v9, a2, 1); /*0x3f9a32*/
  if ( *((_BYTE *)a2 + 1178) ) /*0x3f9a41*/
  {
    v11 = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 4032), v3); /*0x3f9a5e*/
    if ( v11 ) /*0x3f9a67*/
    {
      if ( cocos2d::CCArray::containsObject(v11, a2) ) /*0x3f9a6f*/
        sub_328B40(a1, a2, (unsigned int)v3); /*0x3f9a82*/
    }
  }
  if ( *((_BYTE *)a2 + 1261) ) /*0x3f9a87*/
  {
    TriggerGroup = (cocos2d::CCArray *)LevelEditorLayer_getTriggerGroup(a1, (unsigned int)v3); /*0x3f9a95*/
    cocos2d::CCArray::removeObject(TriggerGroup, a2, 1); /*0x3f9aa3*/
  }
  *(_BYTE *)(a1 + 15730) = 1; /*0x3f9aae*/
}

// [33/56] Address: 0x3f9ac0
// Method: LevelEditorLayer::getTriggerGroup
struct cocos2d::CCObject *__fastcall LevelEditorLayer_getTriggerGroup(__int64 a1, int a2)
{
  __int64 v3; // rsi
  struct cocos2d::CCObject *result; // rax
  struct cocos2d::CCObject *v5; // rbx

  v3 = a2; /*0x3f9ad4*/
  result = *(struct cocos2d::CCObject **)(*(_QWORD *)(a1 + 15112) + 8LL * a2); /*0x3f9ad7*/
  if ( !result ) /*0x3f9ade*/
  {
    v5 = (struct cocos2d::CCObject *)cocos2d::CCArray::create(a1); /*0x3f9aeb*/
    *(_QWORD *)(*(_QWORD *)(a1 + 15112) + 8 * v3) = v5; /*0x3f9afb*/
    cocos2d::CCDictionary::setObject(*(cocos2d::CCDictionary **)(a1 + 15104), v5, v3); /*0x3f9b06*/
    return v5; /*0x3f9b0c*/
  }
  return result; /*0x3f9b14*/
}

// [34/56] Address: 0x3f9b20
// Method: LevelEditorLayer::recreateGroups
void __fastcall LevelEditorLayer_recreateGroups(__int64 a1)
{
  __int64 v1; // rax
  unsigned int *v3; // rcx
  __int64 v4; // rax
  __int64 *v5; // rcx
  __int64 *i; // r8
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 j; // rbx
  cocos2d::CCArray *v10; // rcx
  cocos2d::CCArray *v11; // rcx
  cocos2d::CCArray *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 k; // rbx
  cocos2d::CCArray *v16; // r12
  unsigned int m; // r15d
  struct cocos2d::CCObject *v18; // rbx
  __int64 v19; // r9
  int v20; // r14d
  __int64 v21; // rbp
  unsigned __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // r8
  int v25; // eax
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rcx
  struct cocos2d::CCObject **v29; // rdx
  __int64 v30; // rax
  __int64 n; // rbx
  __int64 v32; // rcx
  _BYTE v33[16]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v34[16]; // [rsp+30h] [rbp-48h] BYREF
  int v35; // [rsp+80h] [rbp+8h] BYREF
  struct cocos2d::CCObject *v36; // [rsp+88h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 3600); /*0x3f9b27*/
  if ( v1 ) /*0x3f9b48*/
  {
    v3 = *(unsigned int **)(v1 + 56); /*0x3f9b4a*/
    v4 = *v3; /*0x3f9b4e*/
    if ( (_DWORD)v4 ) /*0x3f9b52*/
    {
      v5 = (__int64 *)*((_QWORD *)v3 + 2); /*0x3f9b54*/
      for ( i = &v5[v4 - 1]; v5 <= i; *(_BYTE *)(v7 + 1298) = *(_BYTE *)(v7 + 1297) ) /*0x3f9b63*/
      {
        v7 = *v5; /*0x3f9b65*/
        if ( !*v5 ) /*0x3f9b65*/
          break; /*0x3f9b6b*/
        ++v5; /*0x3f9b74*/
      }
    }
  }
  sub_350A90(a1 + 4440); /*0x3f9b8a*/
  v8 = a1 + 4504; /*0x3f9b8f*/
  sub_350A90(a1 + 4504); /*0x3f9b99*/
  cocos2d::CCArray::removeAllObjects(*(cocos2d::CCArray **)(a1 + 3608)); /*0x3f9ba5*/
  cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 3608), *(struct cocos2d::CCObject **)(a1 + 12736)); /*0x3f9bb9*/
  cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 3608), *(struct cocos2d::CCObject **)(a1 + 12744)); /*0x3f9bcd*/
  for ( j = 0; j <= 79992; j += 8 ) /*0x3f9bd3*/
  {
    v10 = *(cocos2d::CCArray **)(j + *(_QWORD *)(a1 + 3960)); /*0x3f9be7*/
    if ( v10 ) /*0x3f9bee*/
      cocos2d::CCArray::removeAllObjects(v10); /*0x3f9bf0*/
    v11 = *(cocos2d::CCArray **)(j + *(_QWORD *)(a1 + 3984)); /*0x3f9bfd*/
    if ( v11 ) /*0x3f9c04*/
      cocos2d::CCArray::removeAllObjects(v11); /*0x3f9c06*/
    v12 = *(cocos2d::CCArray **)(j + *(_QWORD *)(a1 + 4008)); /*0x3f9c13*/
    if ( v12 ) /*0x3f9c1a*/
      cocos2d::CCArray::removeAllObjects(v12); /*0x3f9c1c*/
  }
  v13 = *(_QWORD *)(a1 + 15104); /*0x3f9c2f*/
  if ( v13 ) /*0x3f9c39*/
  {
    v14 = *(_QWORD *)(v13 + 56); /*0x3f9c3b*/
    if ( v14 ) /*0x3f9c42*/
    {
      for ( k = *(_QWORD *)(v14 + 288); ; k = *(_QWORD *)(k + 288) ) /*0x3f9c44*/
      {
        cocos2d::CCArray::removeAllObjects(*(cocos2d::CCArray **)(v14 + 264)); /*0x3f9c57*/
        v14 = k; /*0x3f9c5d*/
        if ( !k ) /*0x3f9c63*/
          break; /*0x3f9c63*/
      }
    }
  }
  v16 = *(cocos2d::CCArray **)(a1 + 3600); /*0x3f9c6e*/
  for ( m = 0; m < cocos2d::CCArray::count(v16); ++m ) /*0x3f9c7b*/
  {
    v18 = cocos2d::CCArray::objectAtIndex(v16, m); /*0x3f9cac*/
    if ( *((__int16 *)v18 + 588) > 0 ) /*0x3f9cb7*/
    {
      v20 = 0; /*0x3f9cb9*/
      v21 = 0; /*0x3f9cbc*/
      v22 = 0; /*0x3f9cbe*/
      do /*0x3f9d02*/
      {
        if ( v22 <= 9 && (v23 = *((_QWORD *)v18 + 146)) != 0 ) /*0x3f9cd0*/
          v24 = (unsigned int)*(__int16 *)(v23 + v21); /*0x3f9cd2*/
        else
          v24 = 0; /*0x3f9cd9*/
        LOBYTE(v19) = 1; /*0x3f9cdf*/
        (*(void (__fastcall **)(__int64, struct cocos2d::CCObject *, __int64, __int64))(*(_QWORD *)a1 + 1200LL))( /*0x3f9ce8*/
          a1,
          v18,
          v24,
          v19);
        ++v20; /*0x3f9cf5*/
        ++v22; /*0x3f9cf8*/
        v21 += 2; /*0x3f9cfb*/
      }
      while ( v20 < *((__int16 *)v18 + 588) ); /*0x3f9d02*/
      v8 = a1 + 4504; /*0x3f9d04*/
    }
    v25 = *((_DWORD *)v18 + 259); /*0x3f9d0b*/
    if ( v25 != 1615 ) /*0x3f9d16*/
    {
      if ( v25 == 1816 && *((_BYTE *)v18 + 1693) ) /*0x3f9dbd*/
        cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 3608), v18); /*0x3f9dd0*/
      continue; /*0x3f9dd0*/
    }
    v35 = *((_DWORD *)v18 + 424); /*0x3f9d22*/
    v26 = *((_DWORD *)v18 + 479); /*0x3f9d29*/
    v36 = v18; /*0x3f9d2f*/
    if ( v26 < 0 ) /*0x3f9d39*/
      v35 = v26; /*0x3f9d3b*/
    if ( *((_BYTE *)v18 + 1920) ) /*0x3f9d42*/
    {
      v27 = sub_353880(v8, v33, &v35); /*0x3f9d5b*/
      v28 = *(_QWORD *)v27 + 24LL; /*0x3f9d63*/
      v29 = *(struct cocos2d::CCObject ***)(*(_QWORD *)v27 + 32LL); /*0x3f9d67*/
      if ( v29 == *(struct cocos2d::CCObject ***)(*(_QWORD *)v27 + 40LL) ) /*0x3f9d6f*/
        goto LABEL_36; /*0x3f9d6f*/
      *v29 = v18; /*0x3f9d71*/
      *(_QWORD *)(v28 + 8) += 8LL; /*0x3f9d74*/
    }
    else
    {
      v30 = sub_353880(a1 + 4440, v34, &v35); /*0x3f9d87*/
      v28 = *(_QWORD *)v30 + 24LL; /*0x3f9d8f*/
      v29 = *(struct cocos2d::CCObject ***)(*(_QWORD *)v30 + 32LL); /*0x3f9d93*/
      if ( v29 == *(struct cocos2d::CCObject ***)(*(_QWORD *)v30 + 40LL) ) /*0x3f9d9b*/
      {
LABEL_36:
        sub_68840(v28, v29, &v36); /*0x3f9da7*/
        continue; /*0x3f9db4*/
      }
      *v29 = v18; /*0x3f9d9d*/
      *(_QWORD *)(v28 + 8) += 8LL; /*0x3f9da0*/
    }
  }
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 3592) + 462LL) ) /*0x3f9e0e*/
  {
    for ( n = 8; n <= 79992; n += 8 ) /*0x3f9e1c*/
    {
      v32 = *(_QWORD *)(n + *(_QWORD *)(a1 + 3960)); /*0x3f9e37*/
      if ( v32 ) /*0x3f9e3e*/
        qsort(*(void **)(*(_QWORD *)(v32 + 56) + 16LL), **(unsigned int **)(v32 + 56), 8u, sub_3078A0); /*0x3f9e57*/
    }
  }
}

// [35/56] Address: 0x3fa6c0
// Method: LevelEditorLayer::didRotateGameplay
void __fastcall LevelEditorLayer_didRotateGameplay(__int64 a1)
{
  const struct cocos2d::CCPoint *v2; // rax
  const struct cocos2d::CCPoint *v3; // rax
  cocos2d::CCPoint *v4; // rcx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 3576) + 200LL))(*(_QWORD *)(a1 + 3576)); /*0x3fa6d3*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v5, v2); /*0x3fa6e1*/
  v4 = *(cocos2d::CCPoint **)(a1 + 15192); /*0x3fa6e7*/
  if ( v4 == *(cocos2d::CCPoint **)(a1 + 15200) ) /*0x3fa6f5*/
  {
    sub_3BCD70(a1 + 15184, *(_QWORD *)(a1 + 15192), v3); /*0x3fa71b*/
  }
  else
  {
    cocos2d::CCPoint::CCPoint(v4, v3); /*0x3fa6fa*/
    *(_QWORD *)(a1 + 15192) += 8LL; /*0x3fa700*/
  }
}

// [36/56] Address: 0x3fa730
// Method: LevelEditorLayer::updateObjectSection
void __fastcall LevelEditorLayer_updateObjectSection(__int64 a1, __int64 a2)
{
  int v4; // ecx
  double v5; // xmm3_8
  double v6; // xmm0_8
  double v7; // xmm2_8
  float v8; // xmm1_4
  double v9; // xmm3_8
  float v10; // xmm1_4
  int v11; // eax
  int v12; // eax

  if ( !*(_BYTE *)(a1 + 14503) || *(_DWORD *)(a2 + 1036) == 1816 ) /*0x3fa753*/
  {
    v4 = *(_DWORD *)(a2 + 632); /*0x3fa759*/
    if ( v4 >= 0 ) /*0x3fa761*/
    {
      v5 = *(double *)(a2 + 952); /*0x3fa767*/
      v6 = 0.0; /*0x3fa76f*/
      if ( v5 > 0.0 ) /*0x3fa786*/
      {
        v8 = *(float *)(a1 + 14304); /*0x3fa791*/
        if ( v5 < 10000000.0 ) /*0x3fa799*/
          v7 = v8 * v5; /*0x3fa7a7*/
        else
          v7 = (float)(v8 * 10000000.0); /*0x3fa79f*/
      }
      else
      {
        v7 = 0.0; /*0x3fa788*/
      }
      v9 = *(double *)(a2 + 960); /*0x3fa7ab*/
      if ( v9 > 0.0 ) /*0x3fa7b7*/
      {
        v10 = *(float *)(a1 + 14308); /*0x3fa7bd*/
        if ( v9 < 10000000.0 ) /*0x3fa7c5*/
          v6 = v10 * v9; /*0x3fa7d3*/
        else
          v6 = (float)(v10 * 10000000.0); /*0x3fa7cb*/
      }
      if ( (int)v7 != v4 || (int)v6 != *(_DWORD *)(a2 + 636) ) /*0x3fa7e9*/
      {
        GJBaseGameLayer_removeObjectFromSection(a1, a2); /*0x3fa7ee*/
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 1192LL))(a1, a2); /*0x3fa7fc*/
        if ( *(_BYTE *)(a2 + 773) ) /*0x3fa802*/
        {
          v11 = *(_DWORD *)(a2 + 632); /*0x3fa80b*/
          if ( v11 > *(_DWORD *)(a1 + 12720) /*0x3fa835*/
            || v11 < *(_DWORD *)(a1 + 12716)
            || (v12 = *(_DWORD *)(a2 + 636), v12 > *(_DWORD *)(a1 + 12728))
            || v12 < *(_DWORD *)(a1 + 12724) )
          {
            cocos2d::CCDictionary::setObject( /*0x3fa848*/
              *(cocos2d::CCDictionary **)(a1 + 4432),
              (struct cocos2d::CCObject *)a2,
              *(unsigned int *)(a2 + 924));
            *(_BYTE *)(a2 + 1006) = 1; /*0x3fa84e*/
          }
        }
      }
    }
  }
}

// [37/56] Address: 0x3fa9e0
// Method: LevelEditorLayer::updateDisabledObjectsLastPos
void __fastcall LevelEditorLayer_updateDisabledObjectsLastPos(__int64 a1, __int64 a2)
{
  unsigned int *v3; // rdi
  __int64 v4; // rax
  __int64 *v5; // rdi
  __int64 *i; // rsi
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 14503) ) /*0x3fa9e6*/
  {
    if ( a2 ) /*0x3fa9f9*/
    {
      v3 = *(unsigned int **)(a2 + 56); /*0x3faa04*/
      v4 = *v3; /*0x3faa08*/
      if ( (_DWORD)v4 ) /*0x3faa0c*/
      {
        v5 = (__int64 *)*((_QWORD *)v3 + 2); /*0x3faa12*/
        for ( i = &v5[v4 - 1]; v5 <= i; ++v5 ) /*0x3faa26*/
        {
          v7 = *v5; /*0x3faa28*/
          if ( !*v5 ) /*0x3faa28*/
            break; /*0x3faa2e*/
          if ( *(_BYTE *)(v7 + 1298) ) /*0x3faa30*/
          {
            v8 = *(_DWORD *)(a1 + 992); /*0x3faa39*/
            if ( *(_DWORD *)(v7 + 1244) != v8 ) /*0x3faa45*/
            {
              *(_DWORD *)(v7 + 1244) = v8; /*0x3faa47*/
              v9 = *(int *)(a1 + 3900); /*0x3faa4d*/
              v10 = v7; /*0x3faa54*/
              if ( *(_DWORD *)(a1 + 3920) > (int)v9 ) /*0x3faa5f*/
              {
                *(_QWORD *)(*(_QWORD *)(a1 + 3672) + 8 * v9) = v7; /*0x3faa81*/
              }
              else
              {
                sub_BB550(a1 + 3672, &v10); /*0x3faa6d*/
                ++*(_DWORD *)(a1 + 3920); /*0x3faa72*/
              }
              ++*(_DWORD *)(a1 + 3900); /*0x3faa85*/
            }
          }
        }
      }
    }
  }
}

// [38/56] Address: 0x3faab0
// Method: LevelEditorLayer::onPlaytest
// Hidden C++ exception states: #wind=2
__int64 __fastcall LevelEditorLayer_onPlaytest(__int64 a1)
{
  int v2; // ecx
  int v3; // eax
  int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // edx
  int v13; // r8d
  cocos2d::CCDirector *v14; // rax
  double v15; // xmm0_8
  __int64 v16; // rdx
  __int64 v17; // rax
  char *v18; // rbx
  char *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  cocos2d::CCObject *v24; // rcx
  __int64 v25; // rax
  unsigned int *v26; // rdi
  __int64 v27; // rax
  _QWORD *v28; // rdi
  _QWORD *i; // rbp
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  cocos2d::CCArray *v33; // rbp
  __int64 v34; // rax
  unsigned int *v35; // rbx
  __int64 v36; // rax
  __int64 *v37; // rbx
  __int64 *j; // rdi
  __int64 v39; // rdx
  cocos2d::CCObject *v40; // rax
  cocos2d::CCObject *v41; // rbx
  cocos2d::CCObject *v42; // rcx
  __int64 v43; // rax
  unsigned int *v44; // rdi
  __int64 v45; // rax
  struct cocos2d::CCObject **v46; // rdi
  struct cocos2d::CCObject **k; // rbp
  struct cocos2d::CCObject *v48; // rbx
  _QWORD *v49; // r14
  _QWORD *m; // rbx
  _QWORD *v51; // rdi
  _QWORD *n; // rbp
  _QWORD *v53; // r15
  _QWORD *ii; // rbx
  __int64 *v55; // rdi
  __int64 *jj; // r14
  __int64 v57; // rbp
  const char *v58; // rdx
  __int64 v59; // r8
  __int64 v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  unsigned int *v64; // rbx
  __int64 v65; // rax
  _QWORD *v66; // rbx
  _QWORD *kk; // rdi
  const struct cocos2d::CCPoint *v68; // rax
  __int64 v69; // rax
  const struct cocos2d::CCPoint *v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 result; // rax
  __int64 v76; // rax
  __int128 v77; // [rsp+40h] [rbp-58h] BYREF
  __int64 v78; // [rsp+50h] [rbp-48h]
  __int64 v79; // [rsp+58h] [rbp-40h]
  void *v80; // [rsp+A0h] [rbp+8h] BYREF

  ++*(_DWORD *)(a1 + 15496); /*0x3faad4*/
  v2 = *(_DWORD *)(a1 + 15568); /*0x3faada*/
  if ( v2 >= 0 ) /*0x3faae5*/
  {
    v3 = *(_DWORD *)(a1 + 15504) - v2; /*0x3faaed*/
    v4 = 0; /*0x3faaef*/
    if ( v3 > 1 ) /*0x3faaf5*/
    {
      do /*0x3fab03*/
      {
        if ( v4 >= 7 ) /*0x3faafa*/
          break; /*0x3faafa*/
        v3 = (unsigned int)v3 >> 1; /*0x3faafc*/
        ++v4; /*0x3faafe*/
      }
      while ( (unsigned int)v3 > 1 ); /*0x3fab03*/
    }
    ++*(_DWORD *)(a1 + 4LL * v4 + 15536); /*0x3fab08*/
  }
  *(_DWORD *)(a1 + 15568) = *(_DWORD *)(a1 + 15504); /*0x3fab15*/
  v5 = cocos2d::CCDirector::sharedDirector(); /*0x3fab1b*/
  *(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 176LL))(v5) + 156) = 1; /*0x3fab30*/
  *(_DWORD *)(a1 + 13284) = 2; /*0x3fab37*/
  v6 = *(_QWORD *)(a1 + 13952); /*0x3fab41*/
  *(_QWORD *)(v6 + 584) = -1; /*0x3fab48*/
  *(_WORD *)(v6 + 578) = 0; /*0x3fab53*/
  *(_BYTE *)(v6 + 580) = 0; /*0x3fab5b*/
  UILayer_resetUINodeState(v6); /*0x3fab65*/
  LOBYTE(v7) = 1; /*0x3fab6a*/
  UILayer_toggleMenuVisibility(v6, v7); /*0x3fab6f*/
  LOBYTE(v8) = 1; /*0x3fab77*/
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 336LL))(v6, v8); /*0x3fab7c*/
  *(_BYTE *)(cocos2d::CCEGLView::sharedOpenGLView() + 237) = 1; /*0x3fab88*/
  *(_BYTE *)(v6 + 627) = 1; /*0x3fab8f*/
  sub_66BC70(v6); /*0x3fab99*/
  if ( (!*(_BYTE *)(v6 + 626) || *(_BYTE *)(v6 + 627)) /*0x3fabcb*/
    && *(_BYTE *)(v6 + 596)
    && (v9 = *(_QWORD *)(v6 + 640)) != 0
    && (*(_QWORD *)(v9 + 88) || *(_QWORD *)(v9 + 120)) )
  {
    v10 = sub_384880(); /*0x3fabd1*/
    sub_3854A0(v10, v9 + 72, v9 + 104); /*0x3fabe1*/
  }
  else
  {
    v11 = sub_384880(); /*0x3fabe8*/
    sub_385C10(v11); /*0x3fabf0*/
  }
  sub_66C1D0(*(_QWORD *)(a1 + 13952), *(unsigned __int8 *)(a1 + 12734)); /*0x3fac03*/
  *(_DWORD *)(a1 + 428) = -1082130432; /*0x3fac08*/
  GJBaseGameLayer_updateZoom(a1, v12, v13, 0, 0, -1, -1); /*0x3fac3c*/
  GJBaseGameLayer_resetLevelVariables(a1); /*0x3fac44*/
  *(_QWORD *)(a1 + 13984) = 0; /*0x3fac49*/
  *(_BYTE *)(a1 + 2214) = 0; /*0x3fac50*/
  *(_BYTE *)(a1 + 1889) = 1; /*0x3fac57*/
  if ( !*(_BYTE *)(a1 + 14744) ) /*0x3fac5e*/
  {
    *(_BYTE *)(a1 + 14744) = 1; /*0x3fac67*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 1192LL))(a1, *(_QWORD *)(a1 + 12736)); /*0x3fac7b*/
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 1192LL))(a1, *(_QWORD *)(a1 + 12744)); /*0x3fac8e*/
  }
  *(_DWORD *)(a1 + 14740) = 0; /*0x3fac94*/
  GJBaseGameLayer_loadLevelSettings(a1); /*0x3fac9e*/
  GJBaseGameLayer_updateMaxGameplayY(a1); /*0x3faca6*/
  if ( *(_BYTE *)(a1 + 14736) ) /*0x3facab*/
  {
    v14 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(); /*0x3facb4*/
    cocos2d::CCDirector::resetSmoothFixCounter(v14); /*0x3facbd*/
    *(_BYTE *)(cocos2d::CCDirector::sharedDirector() + 178) = 1; /*0x3facc9*/
  }
  sub_3DB60(*(_QWORD *)(a1 + 2472) + 880LL); /*0x3facde*/
  GJEffectManager_reset(*(_QWORD *)(a1 + 2472)); /*0x3facea*/
  LevelEditorLayer_transferDefaultColors(a1, *(_QWORD *)(*(_QWORD *)(a1 + 3592) + 320LL), *(_QWORD *)(a1 + 2472)); /*0x3fad07*/
  GJEffectManager_updateEffects(*(_QWORD *)(a1 + 2472)); /*0x3fad16*/
  GJEffectManager_processColors(*(_QWORD *)(a1 + 2472)); /*0x3fad22*/
  sub_3F94B0(a1); /*0x3fad2a*/
  PlayerObject_toggleVisibility(*(__int64 **)(a1 + 3576), 1u); /*0x3fad38*/
  if ( *(_BYTE *)(a1 + 1058) ) /*0x3fad3d*/
    PlayerObject_toggleVisibility(*(__int64 **)(a1 + 3584), 1u); /*0x3fad4f*/
  *(_DWORD *)(a1 + 14960) = 0; /*0x3fad54*/
  *(float *)(a1 + 14932) = (*(float (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 4360) + 168LL))(*(_QWORD *)(a1 + 4360)); /*0x3fad6b*/
  v15 = (*(double (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 4360) + 168LL))(*(_QWORD *)(a1 + 4360)); /*0x3fad7d*/
  *(_DWORD *)(a1 + 14932) = LODWORD(v15); /*0x3fad83*/
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 4360) + 160LL))(*(_QWORD *)(a1 + 4360)); /*0x3fada1*/
  *(_QWORD *)(a1 + 968) = 0; /*0x3fada7*/
  v17 = *(_QWORD *)(a1 + 15136); /*0x3fadae*/
  if ( v17 != *(_QWORD *)(a1 + 15144) ) /*0x3fadbc*/
    *(_QWORD *)(a1 + 15144) = v17; /*0x3fadbe*/
  v18 = *(char **)(a1 + 15160); /*0x3fadc5*/
  v19 = *(char **)(a1 + 15168); /*0x3fadcc*/
  if ( v18 != v19 ) /*0x3fadd6*/
  {
    do /*0x3fade7*/
    {
      sub_3DA90(v18); /*0x3faddb*/
      v18 += 24; /*0x3fade0*/
    }
    while ( v18 != v19 ); /*0x3fade7*/
    *(_QWORD *)(a1 + 15168) = *(_QWORD *)(a1 + 15160); /*0x3fadf0*/
  }
  v20 = *(_QWORD *)(a1 + 15184); /*0x3fadf7*/
  if ( v20 != *(_QWORD *)(a1 + 15192) ) /*0x3fae05*/
    *(_QWORD *)(a1 + 15192) = v20; /*0x3fae07*/
  v21 = *(_QWORD *)(a1 + 14544); /*0x3fae0e*/
  if ( v21 != *(_QWORD *)(a1 + 14552) ) /*0x3fae1c*/
    *(_QWORD *)(a1 + 14552) = v21; /*0x3fae1e*/
  v22 = *(_QWORD *)(a1 + 14568); /*0x3fae25*/
  if ( v22 != *(_QWORD *)(a1 + 14576) ) /*0x3fae33*/
    *(_QWORD *)(a1 + 14576) = v22; /*0x3fae35*/
  *(_QWORD *)(a1 + 14592) = 0; /*0x3fae3c*/
  *(_BYTE *)(a1 + 14600) = 1; /*0x3fae43*/
  LOBYTE(v16) = 1; /*0x3fae54*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 3576) + 336LL))(*(_QWORD *)(a1 + 3576), v16); /*0x3fae56*/
  LOBYTE(v23) = 1; /*0x3fae66*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 3584) + 336LL))(*(_QWORD *)(a1 + 3584), v23); /*0x3fae68*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 14952) + 336LL))(*(_QWORD *)(a1 + 14952), 0); /*0x3fae7a*/
  v24 = *(cocos2d::CCObject **)(a1 + 12976); /*0x3fae80*/
  if ( v24 ) /*0x3fae8a*/
  {
    cocos2d::CCObject::release(v24); /*0x3fae8c*/
    *(_QWORD *)(a1 + 12976) = 0; /*0x3fae92*/
    *(_BYTE *)(a1 + 13160) = 0; /*0x3fae99*/
  }
  v25 = *(_QWORD *)(a1 + 3600); /*0x3faea0*/
  if ( v25 ) /*0x3faeaa*/
  {
    v26 = *(unsigned int **)(v25 + 56); /*0x3faeac*/
    v27 = *v26; /*0x3faeb0*/
    if ( (_DWORD)v27 ) /*0x3faeb4*/
    {
      v28 = (_QWORD *)*((_QWORD *)v26 + 2); /*0x3faeb6*/
      for ( i = &v28[v27 - 1]; v28 <= i; ++v28 ) /*0x3faec5*/
      {
        v30 = *v28; /*0x3faec7*/
        if ( !*v28 ) /*0x3faec7*/
          break; /*0x3faecd*/
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v30 + 1224LL))(*v28); /*0x3faed5*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 1136LL))(v30); /*0x3faee1*/
        LOBYTE(v31) = 1; /*0x3faeea*/
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 1624LL))(v30, v31); /*0x3faeef*/
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v30 + 1648LL))(v30) == 25 ) /*0x3faf07*/
          GameObject_determineSlopeDirection(v30); /*0x3faf09*/
        else
          GameObject_updateIsOriented(v30); /*0x3faf10*/
      }
    }
  }
  LevelEditorLayer_updateAnimateOnTriggerObjects(a1, 0); /*0x3faf23*/
  v33 = (cocos2d::CCArray *)cocos2d::CCArray::create(v32); /*0x3faf2e*/
  v34 = *(_QWORD *)(a1 + 3600); /*0x3faf31*/
  if ( v34 ) /*0x3faf3b*/
  {
    v35 = *(unsigned int **)(v34 + 56); /*0x3faf3d*/
    v36 = *v35; /*0x3faf41*/
    if ( (_DWORD)v36 ) /*0x3faf45*/
    {
      v37 = (__int64 *)*((_QWORD *)v35 + 2); /*0x3faf47*/
      for ( j = &v37[v36 - 1]; v37 <= j; ++v37 ) /*0x3faf56*/
      {
        v39 = *v37; /*0x3faf58*/
        if ( !*v37 ) /*0x3faf58*/
          break; /*0x3faf5e*/
        if ( *(_DWORD *)(v39 + 1036) == 31 && !*(_BYTE *)(*(_QWORD *)(v39 + 1856) + 472LL) ) /*0x3faf70*/
          cocos2d::CCArray::addObject(v33, (struct cocos2d::CCObject *)v39); /*0x3faf7c*/
      }
    }
  }
  v40 = (cocos2d::CCObject *)sub_315870(v33); /*0x3faf8e*/
  v41 = v40; /*0x3faf93*/
  if ( *(cocos2d::CCObject **)(a1 + 12976) != v40 ) /*0x3faf9d*/
  {
    if ( v40 ) /*0x3fafa2*/
      cocos2d::CCObject::retain(v40); /*0x3fafa7*/
    v42 = *(cocos2d::CCObject **)(a1 + 12976); /*0x3fafad*/
    if ( v42 ) /*0x3fafb7*/
      cocos2d::CCObject::release(v42); /*0x3fafb9*/
    *(_QWORD *)(a1 + 12976) = v41; /*0x3fafbf*/
    *(_BYTE *)(a1 + 13160) = v41 != 0; /*0x3fafcc*/
  }
  cocos2d::CCArray::removeAllObjects(*(cocos2d::CCArray **)(a1 + 3624)); /*0x3fafd9*/
  v43 = *(_QWORD *)(a1 + 14832); /*0x3fafdf*/
  if ( v43 ) /*0x3fafe9*/
  {
    v44 = *(unsigned int **)(v43 + 56); /*0x3fafeb*/
    v45 = *v44; /*0x3fafef*/
    if ( (_DWORD)v45 ) /*0x3faff3*/
    {
      v46 = (struct cocos2d::CCObject **)*((_QWORD *)v44 + 2); /*0x3faff5*/
      for ( k = &v46[v45 - 1]; v46 <= k; ++v46 ) /*0x3fb004*/
      {
        v48 = *v46; /*0x3fb006*/
        if ( !*v46 ) /*0x3fb006*/
          break; /*0x3fb00c*/
        if ( !*((_BYTE *)v48 + 1488) && !*((_BYTE *)v48 + 1489) /*0x3fb026*/
          || (*(unsigned __int8 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v48 + 1536LL))(*v46) )
        {
          cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 3624), v48); /*0x3fb03a*/
        }
      }
    }
  }
  GJBaseGameLayer_orderSpawnObjects(a1); /*0x3fb04c*/
  GJBaseGameLayer_resetSpawnChannelIndex(a1); /*0x3fb054*/
  LevelEditorLayer_resetToggledGroupsAndObjects((_QWORD *)a1); /*0x3fb05c*/
  GJEffectManager_resetEffects(*(_QWORD *)(*(_QWORD *)(a1 + 3592) + 320LL)); /*0x3fb06f*/
  LevelEditorLayer_recreateGroups(a1); /*0x3fb077*/
  GJBaseGameLayer_updateSpecialGroupData(a1); /*0x3fb07f*/
  *(_DWORD *)(a1 + 14888) = 16843009; /*0x3fb084*/
  *(_BYTE *)(a1 + 14892) = 1; /*0x3fb08e*/
  v49 = *(_QWORD **)(a1 + 4448); /*0x3fb095*/
  for ( m = (_QWORD *)*v49; m != v49; m = (_QWORD *)*m ) /*0x3fb0a2*/
  {
    v51 = (_QWORD *)m[3]; /*0x3fb0b0*/
    for ( n = (_QWORD *)m[4]; v51 != n; ++v51 ) /*0x3fb0bb*/
    {
      v77 = 0; /*0x3fb0c3*/
      v78 = 1; /*0x3fb0c8*/
      v79 = 15; /*0x3fb0d1*/
      LOWORD(v77) = (unsigned __int8)a0[0]; /*0x3fb0e1*/
      LabelGameObject_updateLabel(*v51, &v77); /*0x3fb0f2*/
    }
  }
  v53 = *(_QWORD **)(a1 + 4512); /*0x3fb10b*/
  for ( ii = (_QWORD *)*v53; ii != v53; ii = (_QWORD *)*ii ) /*0x3fb118*/
  {
    v55 = (__int64 *)ii[3]; /*0x3fb121*/
    for ( jj = (__int64 *)ii[4]; v55 != jj; ++v55 ) /*0x3fb12c*/
    {
      v57 = *v55; /*0x3fb130*/
      v58 = "0.00"; /*0x3fb133*/
      if ( *(_BYTE *)(*v55 + 1912) ) /*0x3fb13a*/
        v58 = "0"; /*0x3fb141*/
      v77 = 0; /*0x3fb148*/
      v78 = 0; /*0x3fb14d*/
      v79 = 0; /*0x3fb152*/
      v59 = -1; /*0x3fb157*/
      do /*0x3fb163*/
        ++v59; /*0x3fb160*/
      while ( v58[v59] ); /*0x3fb163*/
      sub_3C230(&v77); /*0x3fb16e*/
      LabelGameObject_updateLabel(v57, &v77); /*0x3fb17b*/
    }
  }
  sub_315640(a1); /*0x3fb197*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 3584) + 320LL) + 40LL))( /*0x3fb1af*/
    *(_QWORD *)(a1 + 3584) + 320LL,
    0);
  GJBaseGameLayer_updateCamera(a1); /*0x3fb1b8*/
  v60 = *(_QWORD *)(a1 + 12976); /*0x3fb1bd*/
  if ( v60 ) /*0x3fb1c7*/
    v61 = *(_QWORD *)(v60 + 1856); /*0x3fb1c9*/
  else
    v61 = *(_QWORD *)(a1 + 3592); /*0x3fb1d2*/
  sub_315A50(a1, v61); /*0x3fb1dc*/
  if ( *(_QWORD *)(a1 + 12976) ) /*0x3fb1e1*/
  {
    GJBaseGameLayer_loadStartPosObject(a1); /*0x3fb1f4*/
    v62 = qword_905FD0; /*0x3fb1f9*/
    if ( !qword_905FD0 ) /*0x3fb203*/
    {
      v80 = operator new(0x6E8u); /*0x3fb20f*/
      qword_905FD0 = sub_2723A0(v80); /*0x3fb220*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3fb231*/
      v62 = qword_905FD0; /*0x3fb233*/
    }
    if ( GameManager_getGameVariable(v62, "0151") ) /*0x3fb241*/
    {
      v63 = *(_QWORD *)(a1 + 3600); /*0x3fb24a*/
      if ( v63 ) /*0x3fb254*/
      {
        v64 = *(unsigned int **)(v63 + 56); /*0x3fb256*/
        v65 = *v64; /*0x3fb25a*/
        if ( (_DWORD)v65 ) /*0x3fb25e*/
        {
          v66 = (_QWORD *)*((_QWORD *)v64 + 2); /*0x3fb260*/
          for ( kk = &v66[v65 - 1]; v66 <= kk; ++v66 ) /*0x3fb26f*/
          {
            if ( !*v66 ) /*0x3fb271*/
              break; /*0x3fb277*/
            (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 1216LL))(a1); /*0x3fb27f*/
          }
        }
      }
    }
  }
  else
  {
    *(_BYTE *)(a1 + 2215) = 1; /*0x3fb290*/
    GJBaseGameLayer_checkSpawnObjects(a1); /*0x3fb297*/
  }
  sub_3414A0(a1); /*0x3fb29f*/
  v68 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 3576) + 200LL))(*(_QWORD *)(a1 + 3576)); /*0x3fb2ae*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v80, v68); /*0x3fb2bf*/
  cocos2d::CCPoint::operator=(*(_QWORD *)(a1 + 3576) + 2712LL, v69); /*0x3fb2d6*/
  if ( *(_BYTE *)(a1 + 1058) ) /*0x3fb2dc*/
  {
    v70 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 3584) + 200LL))(*(_QWORD *)(a1 + 3584)); /*0x3fb2ef*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v80, v70); /*0x3fb300*/
    cocos2d::CCPoint::operator=(*(_QWORD *)(a1 + 3584) + 2712LL, v71); /*0x3fb317*/
  }
  v72 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 3576) + 200LL))(*(_QWORD *)(a1 + 3576)); /*0x3fb327*/
  cocos2d::CCPoint::operator=(*(_QWORD *)(a1 + 3576) + 1232LL, v72); /*0x3fb33e*/
  if ( *(_BYTE *)(a1 + 1058) ) /*0x3fb344*/
  {
    v73 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 3584) + 200LL))(*(_QWORD *)(a1 + 3584)); /*0x3fb357*/
    cocos2d::CCPoint::operator=(*(_QWORD *)(a1 + 3584) + 1232LL, v73); /*0x3fb36e*/
  }
  cocos2d::CCNode::resumeSchedulerAndActions(*(cocos2d::CCNode **)(a1 + 3576)); /*0x3fb37b*/
  cocos2d::CCNode::resumeSchedulerAndActions(*(cocos2d::CCNode **)(a1 + 3584)); /*0x3fb388*/
  *(_DWORD *)(a1 + 2204) = 1; /*0x3fb38e*/
  sub_3FD360(a1); /*0x3fb39b*/
  *(_BYTE *)(a1 + 1309) = 0; /*0x3fb3a0*/
  *(_DWORD *)(a1 + 1312) = 0; /*0x3fb3a7*/
  if ( *(_BYTE *)(a1 + 15017) ) /*0x3fb3ae*/
    GJBaseGameLayer_updateLevelColors(a1); /*0x3fb3ba*/
  GJBaseGameLayer_updateGradientLayers(a1); /*0x3fb3c2*/
  sub_3265D0(a1); /*0x3fb3cd*/
  GJBaseGameLayer_updateCamera(a1); /*0x3fb3d8*/
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 1072LL))(a1); /*0x3fb3e6*/
  v74 = qword_905FD0; /*0x3fb3ec*/
  if ( !qword_905FD0 ) /*0x3fb3f6*/
  {
    v80 = operator new(0x6E8u); /*0x3fb402*/
    qword_905FD0 = sub_2723A0(v80); /*0x3fb413*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x3fb424*/
    v74 = qword_905FD0; /*0x3fb426*/
  }
  result = GameManager_getGameVariable(v74, "0002"); /*0x3fb434*/
  if ( (_BYTE)result ) /*0x3fb43b*/
  {
    GJBaseGameLayer_processActivatedAudioTriggers(a1); /*0x3fb44c*/
    sub_350D50(a1 + 1976); /*0x3fb458*/
    sub_350C80(a1 + 2040); /*0x3fb464*/
    v76 = *(_QWORD *)(a1 + 2104); /*0x3fb469*/
    if ( v76 != *(_QWORD *)(a1 + 2112) ) /*0x3fb477*/
      *(_QWORD *)(a1 + 2112) = v76; /*0x3fb479*/
    result = sub_342010(a1); /*0x3fb483*/
  }
  *(_BYTE *)(a1 + 13149) = 0; /*0x3fb488*/
  *(_BYTE *)(a1 + 2215) = 0; /*0x3fb48f*/
  return result; /*0x3fb496*/
}

// [39/56] Address: 0x3fc180
// Method: LevelEditorLayer::onStopPlaytest
// Hidden C++ exception states: #wind=4
__int64 __fastcall LevelEditorLayer_onStopPlaytest(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v8; // r13d
  unsigned int *v9; // r14
  __int64 v10; // rax
  __int64 **v11; // r14
  __int64 **i; // rbp
  __int64 *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // ebp
  __int64 v20; // rdi
  __int64 v21; // rbx
  cocos2d::CCDirector *v22; // rax
  cocos2d::CCObject *v23; // rcx
  _BYTE *v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r12
  _QWORD *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // r14
  _QWORD *v35; // r15
  __int64 v36; // rdi
  __int64 v37; // rbp
  __int64 v38; // rbx
  const struct cocos2d::CCPoint *v39; // rax
  __int64 v40; // r10
  unsigned __int64 v41; // r9
  __int64 v42; // r11
  cocos2d::CCArray *v43; // rbp
  __int64 v44; // rdx
  struct cocos2d::CCObject *v45; // rdi
  __int64 v46; // rbx
  __int64 v47; // rax
  _QWORD *v48; // r14
  _QWORD *j; // rbx
  _QWORD *v50; // rdi
  _QWORD *k; // rbp
  _QWORD *v52; // r14
  _QWORD *m; // rbx
  _QWORD *v54; // rdi
  _QWORD *n; // rbp
  __int64 v56; // rbx
  __int64 v57; // rcx
  __int64 result; // rax
  _BYTE v59[16]; // [rsp+30h] [rbp-68h] BYREF
  void *v60; // [rsp+A0h] [rbp+8h] BYREF
  float v61; // [rsp+A8h] [rbp+10h] BYREF
  float v62; // [rsp+ACh] [rbp+14h]
  float v63; // [rsp+B0h] [rbp+18h] BYREF
  float v64; // [rsp+B4h] [rbp+1Ch]
  __int64 v65; // [rsp+B8h] [rbp+20h]

  v2 = cocos2d::CCDirector::sharedDirector(); /*0x3fc199*/
  *(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 176LL))(v2) + 156) = 0; /*0x3fc1ab*/
  v3 = *(_QWORD *)(a1 + 13952); /*0x3fc1b2*/
  *(_QWORD *)(v3 + 584) = -1; /*0x3fc1b9*/
  *(_WORD *)(v3 + 578) = 0; /*0x3fc1c4*/
  *(_BYTE *)(v3 + 580) = 0; /*0x3fc1cd*/
  UILayer_resetUINodeState(v3); /*0x3fc1d7*/
  UILayer_toggleMenuVisibility(v3, 0); /*0x3fc1e1*/
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 336LL))(v3, 0); /*0x3fc1ee*/
  *(_BYTE *)(cocos2d::CCEGLView::sharedOpenGLView() + 237) = 0; /*0x3fc1fa*/
  *(_BYTE *)(v3 + 627) = 0; /*0x3fc201*/
  if ( !*(_BYTE *)(v3 + 626) /*0x3fc22d*/
    && *(_BYTE *)(v3 + 596)
    && (v4 = *(_QWORD *)(v3 + 640)) != 0
    && (*(_QWORD *)(v4 + 88) || *(_QWORD *)(v4 + 120)) )
  {
    v5 = sub_384880(); /*0x3fc234*/
    sub_3854A0(v5, v4 + 72, v4 + 104); /*0x3fc244*/
  }
  else
  {
    v6 = sub_384880(); /*0x3fc24b*/
    sub_385C10(v6); /*0x3fc253*/
  }
  v7 = *(_QWORD *)(a1 + 13960); /*0x3fc258*/
  v8 = 0; /*0x3fc25f*/
  if ( v7 ) /*0x3fc265*/
  {
    v9 = *(unsigned int **)(v7 + 56); /*0x3fc26b*/
    v10 = *v9; /*0x3fc26f*/
    if ( (_DWORD)v10 ) /*0x3fc274*/
    {
      v11 = (__int64 **)*((_QWORD *)v9 + 2); /*0x3fc27a*/
      for ( i = &v11[v10 - 1]; v11 <= i; ++v11 ) /*0x3fc289*/
      {
        v13 = *v11; /*0x3fc290*/
        if ( !*v11 ) /*0x3fc290*/
          break; /*0x3fc296*/
        LODWORD(v60) = *((_DWORD *)v13 + 231); /*0x3fc2a2*/
        v14 = sub_354370(a1 + 2344, v59, &v60); /*0x3fc2bd*/
        v15 = *v13; /*0x3fc2c2*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v61, (const struct cocos2d::CCPoint *)(*(_QWORD *)v14 + 20LL)); /*0x3fc2d4*/
        (*(void (__fastcall **)(__int64 *, __int64))(v15 + 1216))(v13, v16); /*0x3fc2e0*/
        LOBYTE(v17) = 1; /*0x3fc2e9*/
        (*(void (__fastcall **)(__int64 *, __int64))(*v13 + 1160))(v13, v17); /*0x3fc2ee*/
        *((_DWORD *)v13 + 158) = 0; /*0x3fc2f4*/
        *((_BYTE *)v13 + 1353) = 0; /*0x3fc2fb*/
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 1192LL))(a1, v13); /*0x3fc30b*/
        cocos2d::CCDictionary::setObject( /*0x3fc322*/
          *(cocos2d::CCDictionary **)(a1 + 4432),
          (struct cocos2d::CCObject *)v13,
          *((unsigned int *)v13 + 231));
        *((_BYTE *)v13 + 1006) = 1; /*0x3fc328*/
      }
    }
  }
  cocos2d::CCArray::removeAllObjects(*(cocos2d::CCArray **)(a1 + 13960)); /*0x3fc343*/
  sub_654A0(a1 + 2344); /*0x3fc350*/
  v18 = *(_QWORD *)(a1 + 14176); /*0x3fc355*/
  if ( v18 != *(_QWORD *)(a1 + 14184) ) /*0x3fc363*/
    *(_QWORD *)(a1 + 14184) = v18; /*0x3fc365*/
  *(_DWORD *)(a1 + 14200) = 0; /*0x3fc36c*/
  v19 = 0; /*0x3fc373*/
  if ( *(int *)(a1 + 3908) > 0 ) /*0x3fc385*/
  {
    v20 = 0; /*0x3fc387*/
    do /*0x3fc3f6*/
    {
      v21 = *(_QWORD *)(v20 + *(_QWORD *)(a1 + 3720)); /*0x3fc397*/
      *(_BYTE *)(v21 + 848) = 1; /*0x3fc39b*/
      *(_WORD *)(v21 + 872) = 257; /*0x3fc3a2*/
      if ( (unsigned __int8)GJBaseGameLayer_resetAreaObjectValues(a1, v21, 0) ) /*0x3fc3b4*/
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 1216LL))(a1, v21); /*0x3fc3c6*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 1328LL))(v21); /*0x3fc3d5*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 1304LL))(v21); /*0x3fc3e4*/
      ++v19; /*0x3fc3ea*/
      v20 += 8; /*0x3fc3ec*/
    }
    while ( v19 < *(_DWORD *)(a1 + 3908) ); /*0x3fc3f6*/
  }
  sub_3FA860(a1); /*0x3fc3fb*/
  GJBaseGameLayer_resetLevelVariables(a1); /*0x3fc403*/
  sub_3414A0(a1); /*0x3fc40b*/
  if ( *(_BYTE *)(a1 + 14744) ) /*0x3fc410*/
  {
    *(_BYTE *)(a1 + 14744) = 0; /*0x3fc419*/
    GJBaseGameLayer_removeObjectFromSection(a1, *(_QWORD *)(a1 + 12736)); /*0x3fc42a*/
    GJBaseGameLayer_removeObjectFromSection(a1, *(_QWORD *)(a1 + 12744)); /*0x3fc439*/
  }
  if ( *(_BYTE *)(a1 + 14736) ) /*0x3fc43e*/
  {
    v22 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(); /*0x3fc447*/
    cocos2d::CCDirector::resetSmoothFixCounter(v22); /*0x3fc450*/
    *(_BYTE *)(cocos2d::CCDirector::sharedDirector() + 178) = 0; /*0x3fc45c*/
  }
  v23 = *(cocos2d::CCObject **)(a1 + 12976); /*0x3fc463*/
  if ( v23 ) /*0x3fc46d*/
  {
    cocos2d::CCObject::release(v23); /*0x3fc46f*/
    *(_QWORD *)(a1 + 12976) = 0; /*0x3fc475*/
    *(_BYTE *)(a1 + 13160) = 0; /*0x3fc47c*/
  }
  *(_DWORD *)(a1 + 14944) = 1065353216; /*0x3fc483*/
  *(_BYTE *)(a1 + 2214) = 1; /*0x3fc48d*/
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 1312LL))(a1); /*0x3fc49d*/
  *(_DWORD *)(a1 + 14948) = 1065353216; /*0x3fc4a3*/
  *(_DWORD *)(a1 + 2204) = 0; /*0x3fc4ad*/
  PlayerObject_releaseAllButtons(*(_QWORD *)(a1 + 3576)); /*0x3fc4bb*/
  cocos2d::CCNode::pauseSchedulerAndActions(*(cocos2d::CCNode **)(a1 + 3576)); /*0x3fc4c7*/
  sub_3FD360(a1); /*0x3fc4d0*/
  GJBaseGameLayer_toggleDualMode(a1, 0, 0, *(_QWORD *)(a1 + 3576), 1); /*0x3fc4e9*/
  v24 = *(_BYTE **)(a1 + 3576); /*0x3fc4ee*/
  if ( v24[2504] || *(_BYTE *)(a1 + 1058) && (v24 = *(_BYTE **)(a1 + 3584), v24[2504]) ) /*0x3fc50e*/
  {
    v25 = **(_QWORD **)(a1 + 14952); /*0x3fc51e*/
    v26 = *(_QWORD *)(a1 + 14952); /*0x3fc521*/
    v27 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v24 + 200LL))(v24); /*0x3fc527*/
    (*(void (__fastcall **)(__int64, __int64))(v25 + 184))(v26, v27); /*0x3fc533*/
    LOBYTE(v28) = 1; /*0x3fc543*/
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 14952) + 336LL))(*(_QWORD *)(a1 + 14952), v28); /*0x3fc545*/
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 3576) + 336LL))(*(_QWORD *)(a1 + 3576), 0); /*0x3fc557*/
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 3584) + 336LL))(*(_QWORD *)(a1 + 3584), 0); /*0x3fc569*/
  v29 = 0; /*0x3fc56f*/
  LODWORD(v60) = 0; /*0x3fc572*/
  v30 = *(_QWORD *)(a1 + 14040); /*0x3fc57a*/
  if ( (*(_QWORD *)(a1 + 14048) - v30) >> 3 ) /*0x3fc58b*/
  {
    v31 = 0; /*0x3fc598*/
    do /*0x3fc6fd*/
    {
      v32 = *(_QWORD **)(v31 + v30); /*0x3fc5a0*/
      if ( v32 ) /*0x3fc5a7*/
        v33 = (__int64)(v32[1] - *v32) >> 3; /*0x3fc5b0*/
      else
        LODWORD(v33) = -1; /*0x3fc5b6*/
      v34 = 0; /*0x3fc5bb*/
      v65 = (int)v33; /*0x3fc5c0*/
      if ( (int)v33 > 0 ) /*0x3fc5cb*/
      {
        do /*0x3fc6c5*/
        {
          v35 = *(_QWORD **)(**(_QWORD **)(v31 + *(_QWORD *)(a1 + 14040)) + 8 * v34); /*0x3fc5df*/
          if ( v35 ) /*0x3fc5e6*/
          {
            v36 = 0; /*0x3fc5ec*/
            v37 = *(int *)(**(_QWORD **)(v31 + *(_QWORD *)(a1 + 14208)) + 4 * v34); /*0x3fc5fd*/
            if ( v37 > 0 ) /*0x3fc604*/
            {
              do /*0x3fc6b4*/
              {
                v38 = *(_QWORD *)(*v35 + 8 * v36); /*0x3fc613*/
                (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v38 + 1224LL))(v38, v30, v29); /*0x3fc61d*/
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 1136LL))(v38); /*0x3fc629*/
                v39 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 200LL))(v38); /*0x3fc635*/
                cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v63, v39); /*0x3fc646*/
                (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)v38 + 1208LL))(v38, &v61); /*0x3fc65a*/
                if ( v63 != v61 || v64 != v62 ) /*0x3fc688*/
                  (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)v38 + 184LL))(v38, &v61); /*0x3fc698*/
                *(_WORD *)(v38 + 872) = 257; /*0x3fc69e*/
                *(_BYTE *)(v38 + 848) = 1; /*0x3fc6a7*/
                ++v36; /*0x3fc6ae*/
              }
              while ( v36 < v37 ); /*0x3fc6b4*/
            }
          }
          ++v34; /*0x3fc6ba*/
        }
        while ( v34 < v65 ); /*0x3fc6c5*/
        LODWORD(v29) = (_DWORD)v60; /*0x3fc6cb*/
      }
      v29 = (unsigned int)(v29 + 1); /*0x3fc6d3*/
      LODWORD(v60) = v29; /*0x3fc6d6*/
      v31 += 8; /*0x3fc6de*/
      v30 = *(_QWORD *)(a1 + 14040); /*0x3fc6e2*/
    }
    while ( (int)v29 < (unsigned __int64)((*(_QWORD *)(a1 + 14048) - v30) >> 3) ); /*0x3fc6fd*/
  }
  v40 = 0; /*0x3fc703*/
  v41 = 0; /*0x3fc706*/
  v42 = 10000; /*0x3fc709*/
  do /*0x3fc745*/
  {
    *(_BYTE *)(v40 + *(_QWORD *)(a1 + 15408)) = 0; /*0x3fc717*/
    *(_DWORD *)(*(_QWORD *)(a1 + 15240) + 4 * (v41 >> 5)) &= ~(1 << (v41 & 0x1F)); /*0x3fc736*/
    ++v41; /*0x3fc73a*/
    ++v40; /*0x3fc73d*/
    --v42; /*0x3fc741*/
  }
  while ( v42 ); /*0x3fc745*/
  v43 = *(cocos2d::CCArray **)(a1 + 3600); /*0x3fc747*/
  if ( cocos2d::CCArray::count(v43) ) /*0x3fc751*/
  {
    do /*0x3fc7bb*/
    {
      v45 = cocos2d::CCArray::objectAtIndex(v43, v8); /*0x3fc76c*/
      *(__m128d *)((char *)v45 + 952) = _mm_cvtps_pd(*(__m64 *)((char *)v45 + 968)); /*0x3fc776*/
      v46 = *(_QWORD *)v45; /*0x3fc77d*/
      v47 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *, void **))(*(_QWORD *)v45 + 1208LL))(v45, &v60); /*0x3fc78b*/
      (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(v46 + 184))(v45, v47); /*0x3fc797*/
      (*(void (__fastcall **)(__int64, struct cocos2d::CCObject *))(*(_QWORD *)a1 + 1216LL))(a1, v45); /*0x3fc7a6*/
      ++v8; /*0x3fc7ac*/
    }
    while ( v8 < cocos2d::CCArray::count(v43) ); /*0x3fc7bb*/
  }
  LOBYTE(v44) = 1; /*0x3fc7bd*/
  LevelEditorLayer_updateAnimateOnTriggerObjects(a1, v44); /*0x3fc7c2*/
  GJEffectManager_reset(*(_QWORD *)(a1 + 2472)); /*0x3fc7ce*/
  v48 = *(_QWORD **)(a1 + 4448); /*0x3fc7d3*/
  for ( j = (_QWORD *)*v48; j != v48; j = (_QWORD *)*j ) /*0x3fc7e0*/
  {
    v50 = (_QWORD *)j[3]; /*0x3fc7e2*/
    for ( k = (_QWORD *)j[4]; v50 != k; ++v50 ) /*0x3fc7ed*/
      LabelGameObject_updatePreviewLabel(*v50); /*0x3fc7f3*/
  }
  v52 = *(_QWORD **)(a1 + 4512); /*0x3fc80c*/
  for ( m = (_QWORD *)*v52; m != v52; m = (_QWORD *)*m ) /*0x3fc819*/
  {
    v54 = (_QWORD *)m[3]; /*0x3fc820*/
    for ( n = (_QWORD *)m[4]; v54 != n; ++v54 ) /*0x3fc82b*/
      LabelGameObject_updatePreviewLabel(*v54); /*0x3fc833*/
  }
  v56 = qword_905F60; /*0x3fc84c*/
  if ( !qword_905F60 ) /*0x3fc856*/
  {
    v60 = operator new(0x8A8u); /*0x3fc862*/
    qword_905F60 = sub_5AE20(v60); /*0x3fc873*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x3fc884*/
    v56 = qword_905F60; /*0x3fc886*/
  }
  if ( *(_BYTE *)(v56 + 617) ) /*0x3fc88d*/
  {
    *(_BYTE *)(v56 + 617) = 0; /*0x3fc896*/
    FMOD::ChannelControl::setPaused(*(_QWORD *)(v56 + 552), 0); /*0x3fc8a6*/
    FMOD::ChannelControl::setPaused(*(_QWORD *)(v56 + 584), 0); /*0x3fc8b5*/
    v56 = qword_905F60; /*0x3fc8bb*/
  }
  if ( !v56 ) /*0x3fc8c5*/
  {
    v60 = operator new(0x8A8u); /*0x3fc8d1*/
    qword_905F60 = sub_5AE20(v60); /*0x3fc8e2*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x3fc8f3*/
    v56 = qword_905F60; /*0x3fc8f5*/
  }
  v57 = *(_QWORD *)(v56 + 552); /*0x3fc8fc*/
  if ( v57 ) /*0x3fc906*/
    FMOD::ChannelControl::stop(v57); /*0x3fc908*/
  sub_3DB60(v56 + 1096); /*0x3fc915*/
  sub_3DB60(v56 + 1160); /*0x3fc921*/
  sub_3DB60(v56 + 1224); /*0x3fc92d*/
  if ( !qword_905F60 ) /*0x3fc93c*/
  {
    v60 = operator new(0x8A8u); /*0x3fc948*/
    qword_905F60 = sub_5AE20(v60); /*0x3fc959*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905F60 + 72LL))(qword_905F60); /*0x3fc96a*/
  }
  result = sub_613B0(); /*0x3fc973*/
  if ( *(_BYTE *)(a1 + 14730) ) /*0x3fc978*/
    *(_BYTE *)(a1 + 14904) = 1; /*0x3fc981*/
  if ( *(_QWORD *)(a1 + 14968) ) /*0x3fc988*/
    result = EditorUI_updateSlider(); /*0x3fc994*/
  *(_BYTE *)(a1 + 13149) = 0; /*0x3fc999*/
  return result; /*0x3fc9a0*/
}

// [40/56] Address: 0x3fc9c0
// Method: LevelEditorLayer::activatedAudioTrigger
__int64 LevelEditorLayer_activatedAudioTrigger()
{
  return sub_349520();
}

// [41/56] Address: 0x3fc9f0
// Method: LevelEditorLayer::checkpointActivated
// Hidden C++ exception states: #wind=1
__int64 __fastcall LevelEditorLayer_checkpointActivated(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx

  v4 = *(unsigned int *)(a2 + 1864); /*0x3fca05*/
  if ( (int)v4 > 0 ) /*0x3fca0f*/
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(a1 + 408) + 8LL))(a1 + 408, v4, 0); /*0x3fca55*/
  v5 = *(unsigned int *)(a2 + 1480); /*0x3fcaab*/
  if ( (int)v5 > 0 ) /*0x3fcab3*/
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(a1 + 408) + 8LL))(a1 + 408, v5, 0); /*0x3fcaf9*/
  sub_337190(a1, 60, 0, 0); /*0x3fcb5d*/
  return GJBaseGameLayer_checkpointActivated(a1, a2); /*0x3fcb68*/
}

// [42/56] Address: 0x3fcb80
// Method: LevelEditorLayer::playerTookDamage
void __fastcall LevelEditorLayer_playerTookDamage(__int64 a1, __int64 a2)
{
  *(_BYTE *)(a2 + 2444) = 1; /*0x3fcb80*/
  *(_BYTE *)(a1 + 13194) = 1; /*0x3fcb87*/
}

// [43/56] Address: 0x3fcb90
// Method: LevelEditorLayer::postUpdate
void __fastcall LevelEditorLayer_postUpdate(__int64 a1, float a2)
{
  __int64 v3; // rax
  __int16 v4; // cx
  char v5; // dl
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  const struct cocos2d::CCPoint *v9; // rax
  const struct cocos2d::CCPoint *v10; // rax
  cocos2d::CCPoint *v11; // rcx
  float *v12; // r14
  __int64 *v13; // r15
  _BYTE *v14; // rbp
  __int64 *v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  const struct cocos2d::CCPoint *v20; // rax
  const struct cocos2d::CCPoint *v21; // rax
  cocos2d::CCPoint *v22; // rcx
  _BYTE *v23; // rdi
  char v24; // bl
  const struct cocos2d::CCPoint *v25; // rax
  const struct cocos2d::CCPoint *v26; // rax
  const struct cocos2d::CCPoint *v27; // rbp
  _QWORD *v28; // rdx
  __int64 v29; // rbx
  _BYTE v30[16]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v31; // [rsp+70h] [rbp+8h] BYREF
  char v32; // [rsp+72h] [rbp+Ah]

  if ( !*(_BYTE *)(a1 + 1058) ) /*0x3fcb9b*/
    *(_BYTE *)(a1 + 14964) = 1; /*0x3fcbaf*/
  GJEffectManager_processColors(*(_QWORD *)(a1 + 2472)); /*0x3fcbbd*/
  v3 = sub_362560(*(_QWORD *)(a1 + 2472), 1005); /*0x3fcbce*/
  if ( v3 ) /*0x3fcbd6*/
  {
    v4 = *(_WORD *)(v3 + 327); /*0x3fcbd8*/
    v5 = *(_BYTE *)(v3 + 329); /*0x3fcbdf*/
  }
  else
  {
    v4 = -1; /*0x3fcbe8*/
    v5 = -1; /*0x3fcbef*/
  }
  v31 = v4; /*0x3fcbf6*/
  v6 = *(_QWORD *)(a1 + 2472); /*0x3fcbfb*/
  v32 = v5; /*0x3fcc02*/
  GJEffectManager_calculateLightBGColor(v6, &v31); /*0x3fcc0b*/
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 1072LL))(a1); /*0x3fcc19*/
  if ( *(_QWORD *)(a1 + 2176) || *(_QWORD *)(a1 + 2184) ) /*0x3fcc29*/
  {
    sub_3F1EB0(v30, *(_QWORD *)(a1 + 4360)); /*0x3fcc3f*/
    v7 = *(_QWORD *)(a1 + 2176); /*0x3fcc44*/
    if ( v7 ) /*0x3fcc4e*/
      sub_1168E0(v7, v30); /*0x3fcc55*/
    v8 = *(_QWORD *)(a1 + 2184); /*0x3fcc5a*/
    if ( v8 ) /*0x3fcc64*/
      sub_1168E0(v8, v30); /*0x3fcc6b*/
  }
  if ( *(_BYTE *)(a1 + 15017) ) /*0x3fcc70*/
    GJBaseGameLayer_updateLevelColors(a1); /*0x3fcc7c*/
  if ( *(_BYTE *)(a1 + 12712) ) /*0x3fcc81*/
  {
    v9 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 3576) + 200LL))(*(_QWORD *)(a1 + 3576)); /*0x3fcc99*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v31, v9); /*0x3fcca7*/
    v11 = *(cocos2d::CCPoint **)(a1 + 15192); /*0x3fccad*/
    if ( v11 == *(cocos2d::CCPoint **)(a1 + 15200) ) /*0x3fccbb*/
    {
      sub_3BCD70(a1 + 15184, *(_QWORD *)(a1 + 15192), v10); /*0x3fccdd*/
    }
    else
    {
      cocos2d::CCPoint::CCPoint(v11, v10); /*0x3fccc0*/
      *(_QWORD *)(a1 + 15192) += 8LL; /*0x3fccc6*/
    }
  }
  v12 = (float *)(a1 + 14960); /*0x3fcce2*/
  v13 = (__int64 *)(a1 + 3576); /*0x3fccf6*/
  v14 = *(_BYTE **)(a1 + 3576); /*0x3fccfd*/
  *(float *)(a1 + 14960) = a2 + *(float *)(a1 + 14960); /*0x3fcd00*/
  if ( !v14[2444] ) /*0x3fcd05*/
  {
    if ( !*(_BYTE *)(a1 + 1058) ) /*0x3fcd13*/
      goto LABEL_24; /*0x3fcd13*/
    v14 = *(_BYTE **)(a1 + 3584); /*0x3fcd1c*/
    if ( !v14[2444] ) /*0x3fcd23*/
      goto LABEL_24; /*0x3fcd2a*/
    v12 = (float *)(a1 + 14960); /*0x3fcd2c*/
    v13 = (__int64 *)(a1 + 3576); /*0x3fcd33*/
  }
  PlayerObject_playerDestroyed((__int64)v14, 0); /*0x3fcd3f*/
  v15 = *(__int64 **)(a1 + 14952); /*0x3fcd44*/
  v16 = *v15; /*0x3fcd52*/
  v17 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v14 + 200LL))(v14); /*0x3fcd55*/
  (*(void (__fastcall **)(__int64 *, __int64))(v16 + 184))(v15, v17); /*0x3fcd61*/
  LOBYTE(v18) = 1; /*0x3fcd6e*/
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 14952) + 336LL))(*(_QWORD *)(a1 + 14952), v18); /*0x3fcd73*/
  LevelEditorLayer_onStopPlaytest(a1); /*0x3fcd7c*/
  if ( *(_QWORD *)(a1 + 14968) ) /*0x3fcd81*/
    EditorUI_playtestStopped(); /*0x3fcd8d*/
LABEL_24:
  if ( *(_DWORD *)(a1 + 2204) == 1 && *v12 >= 0.033333335 ) /*0x3fcdab*/
  {
    v19 = *v13; /*0x3fcdb1*/
    *v12 = 0.0; /*0x3fcdbc*/
    v20 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 200LL))(v19); /*0x3fcdc2*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v31, v20); /*0x3fcdd0*/
    v22 = *(cocos2d::CCPoint **)(a1 + 15144); /*0x3fcdd6*/
    if ( v22 == *(cocos2d::CCPoint **)(a1 + 15152) ) /*0x3fcde4*/
    {
      sub_3BCD70(a1 + 15136, *(_QWORD *)(a1 + 15144), v21); /*0x3fce06*/
    }
    else
    {
      cocos2d::CCPoint::CCPoint(v22, v21); /*0x3fcde9*/
      *(_QWORD *)(a1 + 15144) += 8LL; /*0x3fcdef*/
    }
    if ( *(_BYTE *)(a1 + 1058) ) /*0x3fce0b*/
    {
      v23 = (_BYTE *)(a1 + 14964); /*0x3fce1f*/
      v24 = *(_BYTE *)(a1 + 14964); /*0x3fce26*/
      v25 = (const struct cocos2d::CCPoint *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 3584) + 200LL))(*(_QWORD *)(a1 + 3584)); /*0x3fce2c*/
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v31, v25); /*0x3fce3a*/
      v27 = v26; /*0x3fce47*/
      if ( !v24 ) /*0x3fce4c*/
      {
        if ( *(_QWORD *)(a1 + 15160) != *(_QWORD *)(a1 + 15168) ) /*0x3fce55*/
          goto LABEL_36; /*0x3fce55*/
        v23 = (_BYTE *)(a1 + 14964); /*0x3fce57*/
      }
      v28 = *(_QWORD **)(a1 + 15168); /*0x3fce5e*/
      if ( v28 == *(_QWORD **)(a1 + 15176) ) /*0x3fce66*/
      {
        sub_4136F0(a1 + 15160); /*0x3fce7d*/
      }
      else
      {
        *v28 = 0; /*0x3fce68*/
        v28[1] = 0; /*0x3fce6b*/
        v28[2] = 0; /*0x3fce6f*/
        *(_QWORD *)(a1 + 15168) += 24LL; /*0x3fce73*/
      }
LABEL_36:
      v29 = *(_QWORD *)(a1 + 15168); /*0x3fce82*/
      if ( *(_QWORD *)(v29 - 16) == *(_QWORD *)(v29 - 8) ) /*0x3fce91*/
      {
        sub_3BCD70(v29 - 24, *(_QWORD *)(v29 - 16), v27); /*0x3fceb0*/
      }
      else
      {
        cocos2d::CCPoint::CCPoint(*(cocos2d::CCPoint **)(v29 - 16), v27); /*0x3fce99*/
        *(_QWORD *)(v29 - 16) += 8LL; /*0x3fce9f*/
      }
      *v23 = 0; /*0x3fceb5*/
    }
  }
}

// [44/56] Address: 0x3fd080
// Method: LevelEditorLayer::applyGroupState
__int64 __fastcall LevelEditorLayer_applyGroupState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v7; // ebp
  __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // r9

  result = GJBaseGameLayer_removeFromGroups(); /*0x3fd097*/
  *(_WORD *)(a2 + 1176) = 0; /*0x3fd09f*/
  v7 = 0; /*0x3fd0a7*/
  *(_DWORD *)(a2 + 1216) = 0; /*0x3fd0aa*/
  *(_BYTE *)(a2 + 654) = 0; /*0x3fd0b1*/
  if ( *(__int16 *)(a3 + 1176) > 0 ) /*0x3fd0c0*/
  {
    v8 = 0; /*0x3fd0cc*/
    v9 = 0; /*0x3fd0d4*/
    do /*0x3fd12e*/
    {
      if ( v9 <= 9 && (v10 = *(_QWORD *)(a3 + 1168)) != 0 ) /*0x3fd0e7*/
        v11 = *(__int16 *)(v8 + v10); /*0x3fd0e9*/
      else
        v11 = 0; /*0x3fd0ef*/
      if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 1448LL))(a2, v11) == 1 ) /*0x3fd103*/
      {
        LOBYTE(v12) = 1; /*0x3fd109*/
        (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a1 + 1200LL))(a1, a2, v11, v12); /*0x3fd115*/
      }
      result = (unsigned int)*(__int16 *)(a3 + 1176); /*0x3fd11b*/
      ++v7; /*0x3fd123*/
      ++v9; /*0x3fd125*/
      v8 += 2; /*0x3fd128*/
    }
    while ( v7 < (int)result ); /*0x3fd12e*/
  }
  return result; /*0x3fd13f*/
}

// [45/56] Address: 0x3fd2d0
// Method: LevelEditorLayer::updateAnimateOnTriggerObjects
__int64 __fastcall LevelEditorLayer_updateAnimateOnTriggerObjects(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax
  unsigned int *v4; // rbx
  _QWORD *v5; // rbx
  _QWORD *i; // rsi
  __int64 v7; // rdi

  result = *(_QWORD *)(a1 + 3600); /*0x3fd2d6*/
  if ( result ) /*0x3fd2e3*/
  {
    v4 = *(unsigned int **)(result + 56); /*0x3fd2ea*/
    result = *v4; /*0x3fd2ee*/
    if ( (_DWORD)result ) /*0x3fd2f2*/
    {
      v5 = (_QWORD *)*((_QWORD *)v4 + 2); /*0x3fd2f4*/
      for ( i = &v5[result - 1]; v5 <= i; ++v5 ) /*0x3fd308*/
      {
        v7 = *v5; /*0x3fd310*/
        if ( !*v5 ) /*0x3fd310*/
          break; /*0x3fd316*/
        result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 1576LL))(*v5); /*0x3fd31e*/
        if ( (_BYTE)result ) /*0x3fd326*/
          result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 1704LL))(v7, a2); /*0x3fd332*/
      }
    }
  }
  return result; /*0x3fd350*/
}

// [46/56] Address: 0x3fd470
// Method: LevelEditorLayer::updatePreviewParticle
__int64 __fastcall LevelEditorLayer_updatePreviewParticle(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)a2; /*0x3fd484*/
  if ( *(_BYTE *)(a1 + 14731) ) /*0x3fd47a*/
  {
    a2[1817] = 0; /*0x3fd48f*/
    if ( (*(unsigned __int8 (__fastcall **)(_BYTE *))(v2 + 344))(a2) ) /*0x3fd496*/
      (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a2 + 1248LL))(a2); /*0x3fd4a6*/
  }
  else
  {
    a2[1817] = 1; /*0x3fd4c9*/
    (*(void (__fastcall **)(_BYTE *))(v2 + 1256))(a2); /*0x3fd4d0*/
  }
  return ParticleGameObject_updateParticlePreviewArtOpacity(a2); /*0x3fd4f1*/
}

// [47/56] Address: 0x3fd500
// Method: LevelEditorLayer::claimCustomParticle
struct cocos2d::CCObject *__fastcall LevelEditorLayer_claimCustomParticle(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        int a6,
        unsigned __int8 a7)
{
  __int64 v8; // rax
  struct cocos2d::CCObject *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rax

  v8 = a3; /*0x3fd514*/
  if ( !*(_BYTE *)(a1 + 14731) ) /*0x3fd50a*/
    return 0; /*0x3fd51c*/
  LOBYTE(a3) = 1; /*0x3fd529*/
  v11 = (struct cocos2d::CCObject *)GameToolbox_particleFromStruct(v8, 0, a3); /*0x3fd545*/
  cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 12872), v11); /*0x3fd548*/
  cocos2d::CCParticleSystem::resetSystem(v11); /*0x3fd551*/
  LOBYTE(v12) = 1; /*0x3fd55a*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v11 + 336LL))(v11, v12); /*0x3fd566*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v11 + 1544LL))(v11, a7); /*0x3fd57b*/
  v13 = GJBaseGameLayer_parentForZLayer(a1, a4, 0, 4, 0); /*0x3fd594*/
  (*(void (__fastcall **)(__int64, struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v13 + 456LL))(v13, v11, a5); /*0x3fd5ae*/
  return v11; /*0x3fd51e*/
}

// [48/56] Address: 0x3fd5d0
// Method: LevelEditorLayer::unclaimCustomParticle
__int64 __fastcall LevelEditorLayer_unclaimCustomParticle(__int64 a1, __int64 a2, struct cocos2d::CCObject *a3)
{
  __int64 result; // rax

  if ( a3 ) /*0x3fd5d3*/
  {
    cocos2d::CCArray::removeObject(*(cocos2d::CCArray **)(a1 + 12872), a3, 1); /*0x3fd5ea*/
    return (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)a3 + 528LL))(a3); /*0x3fd5f6*/
  }
  return result; /*0x3fd601*/
}

// [49/56] Address: 0x3fd610
// Method: LevelEditorLayer::addKeyframe
cocos2d::CCArray *__fastcall LevelEditorLayer_addKeyframe(__int64 a1, __int64 a2)
{
  int v2; // eax
  cocos2d::CCArray *result; // rax
  cocos2d::CCArray *v6; // rsi
  unsigned int v7; // r14d

  v2 = *(_DWORD *)(a1 + 15612); /*0x3fd624*/
  if ( v2 > 0 ) /*0x3fd632*/
    *(_DWORD *)(a2 + 1872) = v2; /*0x3fd634*/
  *(_BYTE *)(a2 + 1897) = 1; /*0x3fd63a*/
  result = cocos2d::CCDictionary::objectForKey(*(cocos2d::CCDictionary **)(a1 + 13936), *(int *)(a2 + 1872)); /*0x3fd64f*/
  v6 = result; /*0x3fd655*/
  if ( result ) /*0x3fd65b*/
  {
    v7 = *(_DWORD *)(a2 + 1876); /*0x3fd665*/
    if ( v7 < cocos2d::CCArray::count(result) ) /*0x3fd67b*/
      cocos2d::CCArray::insertObject(v6, (struct cocos2d::CCObject *)a2, v7); /*0x3fd688*/
    else
      cocos2d::CCArray::addObject(v6, (struct cocos2d::CCObject *)a2); /*0x3fd67d*/
    return (cocos2d::CCArray *)GJBaseGameLayer_updateKeyframeOrder(a1, *(unsigned int *)(a2 + 1872)); /*0x3fd697*/
  }
  return result; /*0x3fd6a1*/
}

// [50/56] Address: 0x3fd6c0
// Method: LevelEditorLayer::updateKeyframeObjects
void __fastcall LevelEditorLayer_updateKeyframeObjects(__int64 a1)
{
  unsigned int i; // edi
  struct cocos2d::CCObject *v3; // rax

  if ( !*(_DWORD *)(a1 + 2204) ) /*0x3fd6c6*/
  {
    for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 14816)); ++i ) /*0x3fd6e0*/
    {
      v3 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 14816), i); /*0x3fd6f9*/
      if ( *((_BYTE *)v3 + 1897) ) /*0x3fd6ff*/
      {
        *((_BYTE *)v3 + 1897) = 0; /*0x3fd708*/
        KeyframeGameObject_updateShadowObjects(v3, a1, *(_QWORD *)(a1 + 14968)); /*0x3fd71c*/
      }
    }
  }
}

// [51/56] Address: 0x402e50
// Method: LevelEditorLayer::shouldDrawDebugHitboxes
__int64 __fastcall LevelEditorLayer_shouldDrawDebugHitboxes(__int64 a1)
{
  return *(unsigned __int8 *)(a1 + 14536); /*0x402e57*/
}

// [52/56] Address: 0x402e60
// Method: LevelEditorLayer::shouldDrawHitboxTrail
__int64 __fastcall LevelEditorLayer_shouldDrawHitboxTrail(__int64 a1)
{
  return *(unsigned __int8 *)(a1 + 14539); /*0x402e67*/
}

// [53/56] Address: 0x402e70
// Method: LevelEditorLayer::shouldRecordHitboxTrail
bool __fastcall LevelEditorLayer_shouldRecordHitboxTrail(__int64 a1)
{
  return *(_BYTE *)(a1 + 14539) && *(_DWORD *)(a1 + 2204) == 1; /*0x402e84*/
}

// [54/56] Address: 0x402e90
// Method: LevelEditorLayer::getHitboxTrailMax
__int64 LevelEditorLayer_getHitboxTrailMax()
{
  return 72000; /*0x402e95*/
}

// [56/56] Address: 0x404cb0
// Method: LevelEditorLayer::draw
// attributes: thunk
void __fastcall LevelEditorLayer_draw(cocos2d::CCNode *this)
{
  cocos2d::CCNode::draw(this); /*0x404cb0*/
}
