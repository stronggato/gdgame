#include <Geode/binding/GJGarageLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/24] Address: 0x162910
// Method: GJGarageLayer::textChanged
void __fastcall GJGarageLayer_textChanged(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  void *v4; // rcx
  void *Block[2]; // [rsp+38h] [rbp-30h] BYREF
  __int128 v6; // [rsp+48h] [rbp-20h]

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a2 + 600) + 600LL) + 8LL))(*(_QWORD *)(a2 + 600) + 600LL); /*0x162934*/
  *(_OWORD *)Block = 0; /*0x16293d*/
  v3 = -1; /*0x162942*/
  v6 = 0; /*0x162949*/
  do /*0x162953*/
    ++v3; /*0x162950*/
  while ( *(_BYTE *)(v2 + v3) ); /*0x162953*/
  sub_3C230(Block); /*0x162962*/
  if ( *((_QWORD *)&v6 + 1) > 0xFu ) /*0x162970*/
  {
    v4 = Block[0]; /*0x162972*/
    if ( (unsigned __int64)(*((_QWORD *)&v6 + 1) + 1LL) >= 0x1000 ) /*0x162984*/
    {
      v4 = (void *)*((_QWORD *)Block[0] - 1); /*0x162986*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v4 - 8) > 0x1F ) /*0x162999*/
        invoke_watson(0, 0, 0, 0, 0); /*0x1629ae*/
    }
    j_j_free(v4); /*0x1629b5*/
  }
}

// [2/24] Address: 0x377bb0
// Method: GJGarageLayer::scene
// Hidden C++ exception states: #wind=2
__int64 GJGarageLayer_scene()
{
  __int64 v0; // rsi
  cocos2d::CCLayer *v1; // rdi
  _QWORD *v2; // rax
  __int64 (__fastcall *v3)(cocos2d::CCLayer *); // rdx
  char v4; // al

  v0 = cocos2d::CCScene::create(); /*0x377bc2*/
  *(_QWORD *)(cocos2d::CCApplication::sharedApplication() + 232) = v0; /*0x377bcb*/
  v1 = (cocos2d::CCLayer *)operator new(0x260u); /*0x377bdc*/
  cocos2d::CCLayer::CCLayer(v1); /*0x377be7*/
  *(_QWORD *)v1 = &GJGarageLayer::`vftable'; /*0x377bf5*/
  *((_QWORD *)v1 + 40) = &GJGarageLayer::`vftable'; /*0x377bff*/
  *((_QWORD *)v1 + 41) = &GJGarageLayer::`vftable'; /*0x377c0d*/
  *((_QWORD *)v1 + 42) = &GJGarageLayer::`vftable'; /*0x377c1b*/
  *((_QWORD *)v1 + 43) = &GJGarageLayer::`vftable'; /*0x377c29*/
  *((_QWORD *)v1 + 44) = &GJGarageLayer::`vftable'; /*0x377c37*/
  *((_QWORD *)v1 + 51) = &GJGarageLayer::`vftable'; /*0x377c45*/
  *((_QWORD *)v1 + 52) = &GJGarageLayer::`vftable'; /*0x377c53*/
  *((_QWORD *)v1 + 53) = &GJGarageLayer::`vftable'; /*0x377c61*/
  *((_QWORD *)v1 + 54) = &GJGarageLayer::`vftable'; /*0x377c6f*/
  *((_QWORD *)v1 + 55) = &GJGarageLayer::`vftable'; /*0x377c7d*/
  *((_QWORD *)v1 + 56) = &GJGarageLayer::`vftable'; /*0x377c8b*/
  *((_QWORD *)v1 + 57) = &GJGarageLayer::`vftable'; /*0x377c99*/
  *((_QWORD *)v1 + 59) = 0; /*0x377ca2*/
  *((_QWORD *)v1 + 62) = 0; /*0x377ca9*/
  *((_QWORD *)v1 + 63) = 0; /*0x377cb0*/
  *((_BYTE *)v1 + 512) = 0; /*0x377cb7*/
  *((_QWORD *)v1 + 65) = 0; /*0x377cbe*/
  *((_QWORD *)v1 + 66) = 0; /*0x377cc5*/
  v2 = operator new(0x28u); /*0x377cd1*/
  *v2 = v2; /*0x377cd6*/
  v2[1] = v2; /*0x377cd9*/
  v2[2] = v2; /*0x377cdd*/
  *((_WORD *)v2 + 12) = 257; /*0x377ce1*/
  *((_QWORD *)v1 + 65) = v2; /*0x377ce7*/
  *((_QWORD *)v1 + 68) = 0; /*0x377cee*/
  *((_QWORD *)v1 + 69) = 0; /*0x377cf5*/
  *((_QWORD *)v1 + 70) = 0; /*0x377cfc*/
  *((_QWORD *)v1 + 74) = 0; /*0x377d03*/
  *((_BYTE *)v1 + 600) = 0; /*0x377d0a*/
  v3 = *(__int64 (__fastcall **)(cocos2d::CCLayer *))(*(_QWORD *)v1 + 72LL); /*0x377d14*/
  if ( (char *)v3 == (char *)GJGarageLayer_init ) /*0x377d25*/
    v4 = GJGarageLayer_init(v1); /*0x377d27*/
  else
    v4 = v3(v1); /*0x377d2e*/
  if ( v4 ) /*0x377d35*/
  {
    cocos2d::CCObject::autorelease(v1); /*0x377d37*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCLayer *, __int64))(*(_QWORD *)v1 + 8LL))(v1, 1); /*0x377d47*/
    v1 = 0; /*0x377d4a*/
  }
  (*(void (__fastcall **)(__int64, cocos2d::CCLayer *))(*(_QWORD *)v0 + 464LL))(v0, v1); /*0x377d56*/
  return v0; /*0x377d5f*/
}

// [4/24] Address: 0x379840
// Method: GJGarageLayer::onInfo
// Hidden C++ exception states: #wind=3
void GJGarageLayer_onInfo()
{
  __int64 v0; // rax
  cocos2d::CCString *v1; // rax
  const char *CString; // rax
  __int64 v3; // rbx
  __int64 v4; // r8
  void **v5; // rdx
  int v6; // eax
  __int64 v7; // rbx
  void *v8; // rcx
  void *v9; // [rsp+50h] [rbp-88h]
  __int128 v10; // [rsp+58h] [rbp-80h] BYREF
  __int64 v11; // [rsp+68h] [rbp-70h]
  __int64 v12; // [rsp+70h] [rbp-68h]
  _BYTE v13[32]; // [rsp+80h] [rbp-58h] BYREF
  void *Block[2]; // [rsp+A0h] [rbp-38h] BYREF
  __int64 v15; // [rsp+B0h] [rbp-28h]
  unsigned __int64 v16; // [rsp+B8h] [rbp-20h]

  v0 = qword_905FD0; /*0x37985f*/
  if ( !qword_905FD0 ) /*0x379869*/
  {
    v9 = operator new(0x6E8u); /*0x379875*/
    qword_905FD0 = sub_2723A0(v9); /*0x379883*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x379894*/
    v0 = qword_905FD0; /*0x379896*/
  }
  v1 = cocos2d::CCString::createWithFormat("<cy>UserID:</c> %i", *(_DWORD *)(v0 + 692) - *(_DWORD *)(v0 + 696)); /*0x3798b0*/
  CString = cocos2d::CCString::getCString(v1); /*0x3798b9*/
  *(_OWORD *)Block = 0; /*0x3798c2*/
  v15 = 0; /*0x3798cc*/
  v16 = 0; /*0x3798d4*/
  v3 = -1; /*0x3798dc*/
  v4 = -1; /*0x3798e3*/
  do /*0x3798e9*/
    ++v4; /*0x3798e6*/
  while ( CString[v4] ); /*0x3798e9*/
  sub_3C230(Block); /*0x3798fa*/
  v5 = Block; /*0x379900*/
  if ( v16 > 0xF ) /*0x379911*/
    v5 = (void **)Block[0]; /*0x379911*/
  v10 = 0; /*0x37991d*/
  v11 = 0; /*0x379922*/
  v12 = 0; /*0x379927*/
  do /*0x379933*/
    ++v3; /*0x379930*/
  while ( *((_BYTE *)v5 + v3) ); /*0x379933*/
  sub_3C230(&v10); /*0x379941*/
  v6 = sub_3E4F0(v13, &v10); /*0x37995d*/
  v7 = FLAlertLayer_create_0(0, (unsigned int)"User Info", v6, (unsigned int)"OK", 0, 1133903872, 0, 0, 1065353216); /*0x3799a9*/
  sub_3C310(&v10); /*0x3799b1*/
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 1064LL))(v7); /*0x3799c3*/
  if ( v16 > 0xF ) /*0x3799d2*/
  {
    v8 = Block[0]; /*0x3799d7*/
    if ( v16 + 1 >= 0x1000 ) /*0x3799e9*/
    {
      v8 = (void *)*((_QWORD *)Block[0] - 1); /*0x3799ef*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F ) /*0x3799fe*/
        invoke_watson(0, 0, 0, 0, 0); /*0x379a0f*/
    }
    j_j_free(v8); /*0x379a16*/
  }
}

// [5/24] Address: 0x379a40
// Method: GJGarageLayer::rewardedVideoFinished
void __fastcall GJGarageLayer_rewardedVideoFinished(__int64 a1)
{
  *(_BYTE *)(a1 + 144) = 0; /*0x379a40*/
}

// [6/24] Address: 0x379a50
// Method: GJGarageLayer::textInputOpened
// Hidden C++ exception states: #wind=2
void __fastcall GJGarageLayer_textInputOpened(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // r8
  void **v6; // rcx
  char *v7; // rbx
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r15
  size_t v10; // r8
  int v11; // edi
  char *v12; // rax
  __int128 Buf2; // [rsp+30h] [rbp-50h] BYREF
  __int64 v14; // [rsp+40h] [rbp-40h]
  __int64 v15; // [rsp+48h] [rbp-38h]
  void *v16; // [rsp+50h] [rbp-30h]
  void *Buf1[2]; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v18; // [rsp+68h] [rbp-18h]
  unsigned __int64 v19; // [rsp+70h] [rbp-10h]

  v3 = qword_905FD0; /*0x379a86*/
  if ( !qword_905FD0 ) /*0x379a90*/
  {
    v16 = operator new(0x6E8u); /*0x379a9c*/
    qword_905FD0 = sub_2723A0(v16); /*0x379aa9*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x379aba*/
    v3 = qword_905FD0; /*0x379abc*/
  }
  *(_BYTE *)(v3 + 961) = 1; /*0x379ac3*/
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a2 + 600) + 600LL) + 8LL))(*(_QWORD *)(a2 + 600) + 600LL); /*0x379adb*/
  *(_OWORD *)Buf1 = 0; /*0x379ae1*/
  v18 = 0; /*0x379ae5*/
  v19 = 0; /*0x379ae9*/
  v5 = -1; /*0x379aed*/
  do /*0x379af7*/
    ++v5; /*0x379af4*/
  while ( *(_BYTE *)(v4 + v5) ); /*0x379af7*/
  sub_3C230(Buf1); /*0x379b05*/
  Buf2 = 0; /*0x379b0e*/
  v14 = 6; /*0x379b18*/
  v15 = 15; /*0x379b21*/
  strcpy((char *)&Buf2, "Player"); /*0x379b2b*/
  v6 = Buf1; /*0x379b41*/
  v7 = (char *)Buf1[0]; /*0x379b45*/
  v8 = v19; /*0x379b49*/
  if ( v19 > 0xF ) /*0x379b51*/
    v6 = (void **)Buf1[0]; /*0x379b51*/
  v9 = v18; /*0x379b55*/
  v10 = v18; /*0x379b59*/
  if ( v18 > 6 ) /*0x379b5f*/
    v10 = 6; /*0x379b5f*/
  v11 = memcmp(v6, &Buf2, v10); /*0x379b68*/
  if ( !v11 ) /*0x379b6c*/
  {
    if ( v9 >= 6 ) /*0x379b72*/
      v11 = v9 > 6; /*0x379b7e*/
    else
      v11 = -1; /*0x379b74*/
  }
  if ( !v11 ) /*0x379b8a*/
  {
    Buf2 = 0; /*0x379b8f*/
    v14 = 0; /*0x379b93*/
    v15 = 15; /*0x379b97*/
    LOBYTE(Buf2) = 0; /*0x379b9b*/
    CCTextInputNode_setString(a2, &Buf2); /*0x379ba6*/
    Buf2 = 0; /*0x379bae*/
    v14 = 1; /*0x379bb2*/
    v15 = 15; /*0x379bba*/
    strcpy((char *)&Buf2, " "); /*0x379bc5*/
    SpriteAnimationManager_executeAnimation(a2, &Buf2); /*0x379bd3*/
  }
  if ( v8 > 0xF ) /*0x379bdd*/
  {
    v12 = v7; /*0x379be3*/
    if ( v8 + 1 >= 0x1000 ) /*0x379bed*/
    {
      v7 = (char *)*((_QWORD *)v7 - 1); /*0x379bf3*/
      if ( (unsigned __int64)(v12 - v7 - 8) > 0x1F ) /*0x379c02*/
        invoke_watson(0, 0, 0, 0, 0); /*0x379c13*/
    }
    j_j_free(v7); /*0x379c1d*/
  }
}

// [7/24] Address: 0x379c50
// Method: GJGarageLayer::textInputClosed
// Hidden C++ exception states: #wind=5
void __fastcall GJGarageLayer_textInputClosed(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // r8
  void **v6; // rcx
  char *v7; // r14
  unsigned __int64 v8; // r15
  size_t v9; // rsi
  size_t v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r13
  void **v14; // rbx
  unsigned __int64 v15; // rax
  char *v16; // r12
  __int64 v17; // rax
  void **v18; // rbx
  void **v19; // rdx
  void **v20; // rdx
  void *v21; // rcx
  void *v23; // [rsp+30h] [rbp-49h]
  void *Src[2]; // [rsp+38h] [rbp-41h] BYREF
  size_t Size; // [rsp+48h] [rbp-31h]
  unsigned __int64 v26; // [rsp+50h] [rbp-29h]
  __int128 Buf2; // [rsp+58h] [rbp-21h] BYREF
  __int64 v28; // [rsp+68h] [rbp-11h]
  __int64 v29; // [rsp+70h] [rbp-9h]
  void **v30; // [rsp+78h] [rbp-1h]
  void *v31; // [rsp+80h] [rbp+7h]
  void *Buf1[2]; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v33; // [rsp+98h] [rbp+1Fh]
  unsigned __int64 v34; // [rsp+A0h] [rbp+27h]

  v2 = a2; /*0x379c82*/
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a2 + 600) + 600LL) + 8LL))(*(_QWORD *)(a2 + 600) + 600LL); /*0x379c9c*/
  *(_OWORD *)Buf1 = 0; /*0x379ca2*/
  v33 = 0; /*0x379ca6*/
  v34 = 0; /*0x379caa*/
  v4 = -1; /*0x379cae*/
  v5 = -1; /*0x379cb5*/
  do /*0x379cc3*/
    ++v5; /*0x379cc0*/
  while ( *(_BYTE *)(v3 + v5) ); /*0x379cc3*/
  sub_3C230(Buf1); /*0x379cd0*/
  Buf2 = 0; /*0x379cd9*/
  v28 = 0; /*0x379cdd*/
  v29 = 15; /*0x379ce1*/
  LOBYTE(Buf2) = 0; /*0x379ce9*/
  v6 = Buf1; /*0x379ced*/
  v7 = (char *)Buf1[0]; /*0x379cf1*/
  v8 = v34; /*0x379cf5*/
  if ( v34 > 0xF ) /*0x379cfd*/
    v6 = (void **)Buf1[0]; /*0x379cfd*/
  v9 = v33; /*0x379d01*/
  v10 = v33; /*0x379d05*/
  if ( v33 ) /*0x379d0b*/
    v10 = 0; /*0x379d0b*/
  v13 = 0x7FFFFFFFFFFFFFFFLL; /*0x379d18*/
  if ( !memcmp(v6, &Buf2, v10) && !v9 ) /*0x379d2d*/
  {
    if ( v8 < 6 ) /*0x379d37*/
    {
      if ( v8 <= 0x7FFFFFFFFFFFFFFFLL - (v8 >> 1) ) /*0x379d87*/
      {
        v15 = v8 + (v8 >> 1); /*0x379d8e*/
        v8 = 15; /*0x379d92*/
        if ( v15 > 0xF ) /*0x379d9b*/
          v8 = v15; /*0x379d9b*/
      }
      else
      {
        v8 = 0x7FFFFFFFFFFFFFFFLL; /*0x379d89*/
      }
      v16 = (char *)sub_3C460(v8 + 1); /*0x379da8*/
      v9 = 6; /*0x379dab*/
      v33 = 6; /*0x379db0*/
      v34 = v8; /*0x379db4*/
      strcpy(v16, "Player"); /*0x379dbe*/
      v7 = v16; /*0x379e1a*/
      Buf1[0] = v16; /*0x379e1d*/
      v2 = a2; /*0x379e21*/
    }
    else
    {
      v14 = Buf1; /*0x379d39*/
      if ( v8 > 0xF ) /*0x379d41*/
        v14 = (void **)v7; /*0x379d41*/
      v33 = 6; /*0x379d4a*/
      memmove(v14, "Player", 6u); /*0x379d5b*/
      *((_BYTE *)v14 + 6) = 0; /*0x379d60*/
      v8 = v34; /*0x379d64*/
      v9 = v33; /*0x379d68*/
      v7 = (char *)Buf1[0]; /*0x379d6c*/
    }
  }
  v17 = qword_905FD0; /*0x379e27*/
  if ( !qword_905FD0 ) /*0x379e31*/
  {
    v23 = operator new(0x6E8u); /*0x379e3d*/
    qword_905FD0 = sub_2723A0(v23); /*0x379e4a*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x379e5b*/
    v17 = qword_905FD0; /*0x379e5d*/
  }
  *(_BYTE *)(v17 + 688) = 0; /*0x379e64*/
  *(_OWORD *)Src = 0; /*0x379e76*/
  Size = 0; /*0x379e7a*/
  v26 = 0; /*0x379e7e*/
  v18 = Buf1; /*0x379e82*/
  if ( v8 > 0xF ) /*0x379e8a*/
    v18 = (void **)v7; /*0x379e8a*/
  if ( v9 > 0x7FFFFFFFFFFFFFFFLL ) /*0x379e91*/
    sub_8D90(Src, v11, v12); /*0x37a01f*/
  if ( v9 > 0xF ) /*0x379e9b*/
  {
    if ( (v9 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x379ebc*/
    {
      v13 = v9 | 0xF; /*0x379ebe*/
      if ( (v9 | 0xF) < 0x16 ) /*0x379ec9*/
        v13 = 22; /*0x379ec9*/
    }
    Src[0] = (void *)sub_3C460(v13 + 1); /*0x379ed6*/
    Size = v9; /*0x379eda*/
    v26 = v13; /*0x379ede*/
    memcpy(Src[0], v18, v9 + 1); /*0x379eec*/
    v17 = qword_905FD0; /*0x379ef1*/
  }
  else
  {
    Size = v9; /*0x379e9d*/
    v26 = 15; /*0x379ea1*/
    *(_OWORD *)Src = *(_OWORD *)v18; /*0x379eac*/
  }
  v30 = Src; /*0x379efc*/
  if ( !v17 ) /*0x379f03*/
  {
    v31 = operator new(0x6E8u); /*0x379f0f*/
    qword_905FD0 = sub_2723A0(v31); /*0x379f1c*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x379f2d*/
    v17 = qword_905FD0; /*0x379f2f*/
  }
  if ( (void **)(v17 + 656) != Src ) /*0x379f44*/
  {
    v19 = Src; /*0x379f46*/
    if ( v26 > 0xF ) /*0x379f4f*/
      v19 = (void **)Src[0]; /*0x379f4f*/
    sub_3F5A0((void *)(v17 + 656), v19, Size); /*0x379f58*/
  }
  sub_3C310(Src); /*0x379f62*/
  v20 = Buf1; /*0x379f67*/
  if ( v8 > 0xF ) /*0x379f6f*/
    v20 = (void **)v7; /*0x379f6f*/
  Buf2 = 0; /*0x379f76*/
  v28 = 0; /*0x379f7c*/
  v29 = 0; /*0x379f80*/
  do /*0x379f87*/
    ++v4; /*0x379f84*/
  while ( *((_BYTE *)v20 + v4) ); /*0x379f87*/
  sub_3C230(&Buf2); /*0x379f93*/
  CCTextInputNode_setString(v2, &Buf2); /*0x379f9f*/
  if ( v34 > 0xF ) /*0x379fad*/
  {
    v21 = Buf1[0]; /*0x379fb2*/
    if ( v34 + 1 >= 0x1000 ) /*0x379fc0*/
    {
      v21 = (void *)*((_QWORD *)Buf1[0] - 1); /*0x379fc6*/
      if ( (unsigned __int64)((char *)Buf1[0] - (char *)v21 - 8) > 0x1F ) /*0x379fd5*/
        invoke_watson(0, 0, 0, 0, 0); /*0x379fe6*/
    }
    j_j_free(v21); /*0x379fed*/
  }
}

// [8/24] Address: 0x37a030
// Method: GJGarageLayer::setupIconSelect
// Hidden C++ exception states: #wind=2
__int64 __fastcall GJGarageLayer_setupIconSelect(_QWORD *a1)
{
  __int64 v2; // rax
  float v3; // xmm6_4
  __int64 v4; // rax
  _QWORD *v5; // r12
  __int64 v6; // rdx
  void (__fastcall *v7)(_QWORD *, __int64); // r8
  __int64 v8; // rbx
  __int64 v9; // rax
  struct cocos2d::CCSprite *v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  cocos2d::CCObject *v17; // rax
  cocos2d::CCMenu *v18; // r14
  struct cocos2d::CCSprite *v19; // rbx
  struct cocos2d::CCSprite *v20; // rax
  struct cocos2d::CCObject *v21; // rbx
  struct cocos2d::CCSprite *v22; // rbx
  struct cocos2d::CCSprite *v23; // rax
  struct cocos2d::CCObject *v24; // rbx
  struct cocos2d::CCSprite *v25; // rbx
  struct cocos2d::CCSprite *v26; // rax
  struct cocos2d::CCObject *v27; // rbx
  struct cocos2d::CCSprite *v28; // rbx
  struct cocos2d::CCSprite *v29; // rax
  struct cocos2d::CCObject *v30; // rbx
  struct cocos2d::CCSprite *v31; // rbx
  struct cocos2d::CCSprite *v32; // rax
  struct cocos2d::CCObject *v33; // rbx
  struct cocos2d::CCSprite *v34; // rbx
  struct cocos2d::CCSprite *v35; // rax
  struct cocos2d::CCObject *v36; // rbx
  struct cocos2d::CCSprite *v37; // rbx
  struct cocos2d::CCSprite *v38; // rax
  struct cocos2d::CCObject *v39; // rbx
  struct cocos2d::CCSprite *v40; // rbx
  struct cocos2d::CCSprite *v41; // rax
  struct cocos2d::CCObject *v42; // rbx
  struct cocos2d::CCSprite *v43; // rbx
  struct cocos2d::CCSprite *v44; // rax
  struct cocos2d::CCObject *v45; // rbx
  struct cocos2d::CCSprite *v46; // rbx
  struct cocos2d::CCSprite *v47; // rax
  struct cocos2d::CCObject *v48; // rbx
  struct cocos2d::CCSprite *v49; // rbx
  struct cocos2d::CCSprite *v50; // rax
  struct cocos2d::CCObject *v51; // rbx
  unsigned int i; // edi
  struct cocos2d::CCObject *v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rbx
  __int64 v57; // rax
  struct cocos2d::CCSprite *v58; // rax
  struct cocos2d::CCSprite *v59; // rax
  cocos2d::CCString *v60; // rax
  const char *CString; // r15
  struct cocos2d::CCSprite *v62; // rdi
  __int64 v63; // rax
  cocos2d::CCObject *v64; // rbx
  __int64 v65; // rax
  __int64 v66; // rbx
  __int64 v67; // rax
  __int64 v68; // rdi
  __int64 v69; // rbx
  __int64 v70; // rax
  cocos2d::CCSprite *v71; // rdi
  __int64 v72; // rax
  cocos2d::CCObject *v73; // rbx
  __int64 v74; // rax
  __int64 v75; // rbx
  __int64 v76; // rax
  __int64 v77; // rdi
  __int64 v78; // rbx
  __int64 v79; // rax
  __int64 v80; // rcx
  cocos2d::CCObject *v81; // rax
  __int64 v82; // rax
  __int64 v83; // rdi
  __int64 v84; // rbx
  __int64 v85; // rax
  _BYTE v87[8]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v88[24]; // [rsp+38h] [rbp-40h] BYREF
  void *v89; // [rsp+C0h] [rbp+48h] BYREF
  float v90; // [rsp+C8h] [rbp+50h] BYREF
  float v91; // [rsp+CCh] [rbp+54h]
  char v92; // [rsp+D0h] [rbp+58h] BYREF
  float v93; // [rsp+D4h] [rbp+5Ch]
  char v94; // [rsp+D8h] [rbp+60h] BYREF

  v2 = cocos2d::CCDirector::sharedDirector(a1); /*0x37a051*/
  cocos2d::CCDirector::getWinSize(v2, &v90); /*0x37a05e*/
  v3 = (float)(v91 * 0.5) - 5.0; /*0x37a075*/
  v4 = cocos2d::CCRect::CCRect((cocos2d::CCRect *)v88, 0.0, 0.0, 80.0, 80.0); /*0x37a095*/
  v5 = (_QWORD *)cocos2d::extension::CCScale9Sprite::create("square02_001.png", v4); /*0x37a0ab*/
  v6 = v5[40]; /*0x37a0b5*/
  v7 = *(void (__fastcall **)(_QWORD *, __int64))(v6 + 40); /*0x37a0b8*/
  LOBYTE(v6) = 75; /*0x37a0bc*/
  v7(v5 + 40, v6); /*0x37a0be*/
  cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v92, 385.0, 100.0); /*0x37a0d5*/
  (*(void (__fastcall **)(_QWORD *, char *))(*v5 + 312LL))(v5, &v92); /*0x37a0ed*/
  (*(void (__fastcall **)(_QWORD *, _QWORD *, __int64))(*a1 + 456LL))(a1, v5, 0xFFFFFFFFLL); /*0x37a0ff*/
  v8 = *v5; /*0x37a105*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v89, v90 * 0.5, v3 - 60.0); /*0x37a121*/
  (*(void (__fastcall **)(_QWORD *, __int64))(v8 + 184))(v5, v9); /*0x37a12d*/
  v10 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_unlockTxt_001.png"); /*0x37a140*/
  (*(void (__fastcall **)(_QWORD *, struct cocos2d::CCSprite *))(*a1 + 464LL))(a1, v10); /*0x37a153*/
  v11 = *(_QWORD *)v10; /*0x37a156*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v89, 0.5, 0.5); /*0x37a163*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v11 + 288))(v10, v12); /*0x37a16f*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v94, 0.0, (float)(v93 * 0.5) + 12.0); /*0x37a18d*/
  v14 = v13; /*0x37a193*/
  v15 = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 200LL))(v5); /*0x37a1a4*/
  cocos2d::CCPoint::operator+(v15, &v89, v14); /*0x37a1b0*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *, void **))(*(_QWORD *)v10 + 184LL))(v10, &v89); /*0x37a1c0*/
  v17 = (cocos2d::CCObject *)cocos2d::CCArray::create(v16); /*0x37a1c6*/
  a1[60] = v17; /*0x37a1cc*/
  cocos2d::CCObject::retain(v17); /*0x37a1d6*/
  v18 = (cocos2d::CCMenu *)cocos2d::CCMenu::create(); /*0x37a1e2*/
  (*(void (__fastcall **)(_QWORD *, cocos2d::CCMenu *, __int64))(*a1 + 456LL))(a1, v18, 100); /*0x37a1fb*/
  v19 = cocos2d::CCSprite::createWithSpriteFrameName("gj_iconBtn_on_001.png"); /*0x37a20b*/
  v20 = cocos2d::CCSprite::createWithSpriteFrameName("gj_iconBtn_off_001.png"); /*0x37a215*/
  v21 = (struct cocos2d::CCObject *)CCMenuItemToggler_create(v20, v19, a1, sub_37AE30); /*0x37a230*/
  *(_DWORD *)(*((_QWORD *)v21 + 47) + 372LL) = 1067030938; /*0x37a23a*/
  *(_DWORD *)(*((_QWORD *)v21 + 48) + 372LL) = 1067030938; /*0x37a24b*/
  CCMenuItemToggler_toggle(v21, *((unsigned __int8 *)v21 + 392)); /*0x37a25f*/
  (*(void (__fastcall **)(cocos2d::CCMenu *, struct cocos2d::CCObject *))(*(_QWORD *)v18 + 464LL))(v18, v21); /*0x37a274*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v21 + 64LL))(v21, 0); /*0x37a283*/
  cocos2d::CCArray::addObject((cocos2d::CCArray *)a1[60], v21); /*0x37a28f*/
  v22 = cocos2d::CCSprite::createWithSpriteFrameName("gj_shipBtn_on_001.png"); /*0x37a2a2*/
  v23 = cocos2d::CCSprite::createWithSpriteFrameName("gj_shipBtn_off_001.png"); /*0x37a2ac*/
  v24 = (struct cocos2d::CCObject *)CCMenuItemToggler_create(v23, v22, a1, sub_37AE30); /*0x37a2c7*/
  *(_DWORD *)(*((_QWORD *)v24 + 47) + 372LL) = 1067030938; /*0x37a2d1*/
  *(_DWORD *)(*((_QWORD *)v24 + 48) + 372LL) = 1067030938; /*0x37a2e2*/
  CCMenuItemToggler_toggle(v24, *((unsigned __int8 *)v24 + 392)); /*0x37a2f6*/
  (*(void (__fastcall **)(cocos2d::CCMenu *, struct cocos2d::CCObject *))(*(_QWORD *)v18 + 464LL))(v18, v24); /*0x37a30b*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v24 + 64LL))(v24, 1); /*0x37a31d*/
  cocos2d::CCArray::addObject((cocos2d::CCArray *)a1[60], v24); /*0x37a32a*/
  v25 = cocos2d::CCSprite::createWithSpriteFrameName("gj_ballBtn_on_001.png"); /*0x37a33d*/
  v26 = cocos2d::CCSprite::createWithSpriteFrameName("gj_ballBtn_off_001.png"); /*0x37a347*/
  v27 = (struct cocos2d::CCObject *)CCMenuItemToggler_create(v26, v25, a1, sub_37AE30); /*0x37a362*/
  *(_DWORD *)(*((_QWORD *)v27 + 47) + 372LL) = 1067030938; /*0x37a36c*/
  *(_DWORD *)(*((_QWORD *)v27 + 48) + 372LL) = 1067030938; /*0x37a37d*/
  CCMenuItemToggler_toggle(v27, *((unsigned __int8 *)v27 + 392)); /*0x37a391*/
  (*(void (__fastcall **)(cocos2d::CCMenu *, struct cocos2d::CCObject *))(*(_QWORD *)v18 + 464LL))(v18, v27); /*0x37a3a6*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v27 + 64LL))(v27, 2); /*0x37a3b8*/
  cocos2d::CCArray::addObject((cocos2d::CCArray *)a1[60], v27); /*0x37a3c5*/
  v28 = cocos2d::CCSprite::createWithSpriteFrameName("gj_birdBtn_on_001.png"); /*0x37a3d8*/
  v29 = cocos2d::CCSprite::createWithSpriteFrameName("gj_birdBtn_off_001.png"); /*0x37a3e2*/
  v30 = (struct cocos2d::CCObject *)CCMenuItemToggler_create(v29, v28, a1, sub_37AE30); /*0x37a3fd*/
  *(_DWORD *)(*((_QWORD *)v30 + 47) + 372LL) = 1067030938; /*0x37a407*/
  *(_DWORD *)(*((_QWORD *)v30 + 48) + 372LL) = 1067030938; /*0x37a418*/
  CCMenuItemToggler_toggle(v30, *((unsigned __int8 *)v30 + 392)); /*0x37a42c*/
  (*(void (__fastcall **)(cocos2d::CCMenu *, struct cocos2d::CCObject *))(*(_QWORD *)v18 + 464LL))(v18, v30); /*0x37a441*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v30 + 64LL))(v30, 3); /*0x37a453*/
  cocos2d::CCArray::addObject((cocos2d::CCArray *)a1[60], v30); /*0x37a460*/
  v31 = cocos2d::CCSprite::createWithSpriteFrameName("gj_dartBtn_on_001.png"); /*0x37a473*/
  v32 = cocos2d::CCSprite::createWithSpriteFrameName("gj_dartBtn_off_001.png"); /*0x37a47d*/
  v33 = (struct cocos2d::CCObject *)CCMenuItemToggler_create(v32, v31, a1, sub_37AE30); /*0x37a498*/
  *(_DWORD *)(*((_QWORD *)v33 + 47) + 372LL) = 1067030938; /*0x37a4a2*/
  *(_DWORD *)(*((_QWORD *)v33 + 48) + 372LL) = 1067030938; /*0x37a4b3*/
  CCMenuItemToggler_toggle(v33, *((unsigned __int8 *)v33 + 392)); /*0x37a4c7*/
  (*(void (__fastcall **)(cocos2d::CCMenu *, struct cocos2d::CCObject *))(*(_QWORD *)v18 + 464LL))(v18, v33); /*0x37a4dc*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v33 + 64LL))(v33, 4); /*0x37a4ee*/
  cocos2d::CCArray::addObject((cocos2d::CCArray *)a1[60], v33); /*0x37a4fb*/
  v34 = cocos2d::CCSprite::createWithSpriteFrameName("gj_robotBtn_on_001.png"); /*0x37a50e*/
  v35 = cocos2d::CCSprite::createWithSpriteFrameName("gj_robotBtn_off_001.png"); /*0x37a518*/
  v36 = (struct cocos2d::CCObject *)CCMenuItemToggler_create(v35, v34, a1, sub_37AE30); /*0x37a533*/
  *(_DWORD *)(*((_QWORD *)v36 + 47) + 372LL) = 1067030938; /*0x37a53d*/
  *(_DWORD *)(*((_QWORD *)v36 + 48) + 372LL) = 1067030938; /*0x37a54e*/
  CCMenuItemToggler_toggle(v36, *((unsigned __int8 *)v36 + 392)); /*0x37a562*/
  (*(void (__fastcall **)(cocos2d::CCMenu *, struct cocos2d::CCObject *))(*(_QWORD *)v18 + 464LL))(v18, v36); /*0x37a577*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v36 + 64LL))(v36, 5); /*0x37a589*/
  cocos2d::CCArray::addObject((cocos2d::CCArray *)a1[60], v36); /*0x37a596*/
  v37 = cocos2d::CCSprite::createWithSpriteFrameName("gj_spiderBtn_on_001.png"); /*0x37a5a9*/
  v38 = cocos2d::CCSprite::createWithSpriteFrameName("gj_spiderBtn_off_001.png"); /*0x37a5b3*/
  v39 = (struct cocos2d::CCObject *)CCMenuItemToggler_create(v38, v37, a1, sub_37AE30); /*0x37a5ce*/
  *(_DWORD *)(*((_QWORD *)v39 + 47) + 372LL) = 1067030938; /*0x37a5d8*/
  *(_DWORD *)(*((_QWORD *)v39 + 48) + 372LL) = 1067030938; /*0x37a5e9*/
  CCMenuItemToggler_toggle(v39, *((unsigned __int8 *)v39 + 392)); /*0x37a5fd*/
  (*(void (__fastcall **)(cocos2d::CCMenu *, struct cocos2d::CCObject *))(*(_QWORD *)v18 + 464LL))(v18, v39); /*0x37a612*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v39 + 64LL))(v39, 6); /*0x37a624*/
  cocos2d::CCArray::addObject((cocos2d::CCArray *)a1[60], v39); /*0x37a631*/
  v40 = cocos2d::CCSprite::createWithSpriteFrameName("gj_swingBtn_on_001.png"); /*0x37a644*/
  v41 = cocos2d::CCSprite::createWithSpriteFrameName("gj_swingBtn_off_001.png"); /*0x37a64e*/
  v42 = (struct cocos2d::CCObject *)CCMenuItemToggler_create(v41, v40, a1, sub_37AE30); /*0x37a669*/
  *(_DWORD *)(*((_QWORD *)v42 + 47) + 372LL) = 1067030938; /*0x37a673*/
  *(_DWORD *)(*((_QWORD *)v42 + 48) + 372LL) = 1067030938; /*0x37a684*/
  CCMenuItemToggler_toggle(v42, *((unsigned __int8 *)v42 + 392)); /*0x37a698*/
  (*(void (__fastcall **)(cocos2d::CCMenu *, struct cocos2d::CCObject *))(*(_QWORD *)v18 + 464LL))(v18, v42); /*0x37a6ad*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v42 + 64LL))(v42, 7); /*0x37a6bf*/
  cocos2d::CCArray::addObject((cocos2d::CCArray *)a1[60], v42); /*0x37a6cc*/
  v43 = cocos2d::CCSprite::createWithSpriteFrameName("gj_jetpackBtn_on_001.png"); /*0x37a6df*/
  v44 = cocos2d::CCSprite::createWithSpriteFrameName("gj_jetpackBtn_off_001.png"); /*0x37a6e9*/
  v45 = (struct cocos2d::CCObject *)CCMenuItemToggler_create(v44, v43, a1, sub_37AE30); /*0x37a704*/
  *(_DWORD *)(*((_QWORD *)v45 + 47) + 372LL) = 1067030938; /*0x37a70e*/
  *(_DWORD *)(*((_QWORD *)v45 + 48) + 372LL) = 1067030938; /*0x37a71f*/
  CCMenuItemToggler_toggle(v45, *((unsigned __int8 *)v45 + 392)); /*0x37a733*/
  (*(void (__fastcall **)(cocos2d::CCMenu *, struct cocos2d::CCObject *))(*(_QWORD *)v18 + 464LL))(v18, v45); /*0x37a748*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v45 + 64LL))(v45, 8); /*0x37a75a*/
  cocos2d::CCArray::addObject((cocos2d::CCArray *)a1[60], v45); /*0x37a767*/
  v46 = cocos2d::CCSprite::createWithSpriteFrameName("gj_streakBtn_on_001.png"); /*0x37a77a*/
  v47 = cocos2d::CCSprite::createWithSpriteFrameName("gj_streakBtn_off_001.png"); /*0x37a784*/
  v48 = (struct cocos2d::CCObject *)CCMenuItemToggler_create(v47, v46, a1, sub_37AE30); /*0x37a79f*/
  *(_DWORD *)(*((_QWORD *)v48 + 47) + 372LL) = 1067030938; /*0x37a7a9*/
  *(_DWORD *)(*((_QWORD *)v48 + 48) + 372LL) = 1067030938; /*0x37a7ba*/
  CCMenuItemToggler_toggle(v48, *((unsigned __int8 *)v48 + 392)); /*0x37a7ce*/
  (*(void (__fastcall **)(cocos2d::CCMenu *, struct cocos2d::CCObject *))(*(_QWORD *)v18 + 464LL))(v18, v48); /*0x37a7e3*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v48 + 64LL))(v48, 99); /*0x37a7f5*/
  cocos2d::CCArray::addObject((cocos2d::CCArray *)a1[60], v48); /*0x37a802*/
  v49 = cocos2d::CCSprite::createWithSpriteFrameName("gj_explosionBtn_on_001.png"); /*0x37a815*/
  v50 = cocos2d::CCSprite::createWithSpriteFrameName("gj_explosionBtn_off_001.png"); /*0x37a81f*/
  v51 = (struct cocos2d::CCObject *)CCMenuItemToggler_create(v50, v49, a1, sub_37AE30); /*0x37a83a*/
  *(_DWORD *)(*((_QWORD *)v51 + 47) + 372LL) = 1067030938; /*0x37a844*/
  *(_DWORD *)(*((_QWORD *)v51 + 48) + 372LL) = 1067030938; /*0x37a855*/
  CCMenuItemToggler_toggle(v51, *((unsigned __int8 *)v51 + 392)); /*0x37a869*/
  (*(void (__fastcall **)(cocos2d::CCMenu *, struct cocos2d::CCObject *))(*(_QWORD *)v18 + 464LL))(v18, v51); /*0x37a87e*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v51 + 64LL))(v51, 98); /*0x37a890*/
  cocos2d::CCArray::addObject((cocos2d::CCArray *)a1[60], v51); /*0x37a89d*/
  for ( i = 0; i < cocos2d::CCArray::count((cocos2d::CCArray *)a1[60]); ++i ) /*0x37a8ac*/
  {
    v53 = cocos2d::CCArray::objectAtIndex((cocos2d::CCArray *)a1[60], i); /*0x37a8df*/
    LODWORD(v89) = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v53 + 56LL))(v53); /*0x37a8ee*/
    v54 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v53 + 47) + 952LL))(*((_QWORD *)v53 + 47)); /*0x37a8fb*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 160LL))(v54); /*0x37a911*/
    v55 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v53 + 48) + 952LL))(*((_QWORD *)v53 + 48)); /*0x37a91d*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 160LL))(v55); /*0x37a933*/
    *(_DWORD *)sub_10C920(a1 + 65, &v89) = -1; /*0x37a945*/
  }
  cocos2d::CCMenu::alignItemsHorizontallyWithPadding(v18, 2.0); /*0x37a96d*/
  v56 = *(_QWORD *)v18; /*0x37a973*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v89, v90 * 0.5, (float)(v91 * 0.5) + 30.0); /*0x37a994*/
  (*(void (__fastcall **)(cocos2d::CCMenu *, __int64))(v56 + 184))(v18, v57); /*0x37a9a0*/
  v58 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_select_001.png"); /*0x37a9ad*/
  a1[67] = v58; /*0x37a9b3*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v58 + 160LL))(v58); /*0x37a9cb*/
  (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 456LL))(a1, a1[67], 1); /*0x37a9e4*/
  v59 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_select_001.png"); /*0x37a9f1*/
  a1[68] = v59; /*0x37a9f7*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v59 + 160LL))(v59); /*0x37aa0e*/
  (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 456LL))(a1, a1[68], 1); /*0x37aa23*/
  v60 = cocos2d::CCString::createWithFormat("GJ_arrow_%02d_001.png", 1); /*0x37aa35*/
  CString = cocos2d::CCString::getCString(v60); /*0x37aa44*/
  v62 = cocos2d::CCSprite::createWithSpriteFrameName(CString); /*0x37aa50*/
  (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v62 + 160LL))(v62); /*0x37aa6b*/
  v89 = operator new(0x208u); /*0x37aa77*/
  v63 = CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v89); /*0x37aa7e*/
  v64 = (cocos2d::CCObject *)v63; /*0x37aa83*/
  if ( v63 ) /*0x37aa90*/
  {
    if ( (unsigned __int8)sub_47940(v63, (_DWORD)v62, 0, (_DWORD)a1, (__int64)GJGarageLayer_onArrow) ) /*0x37aaa3*/
    {
      cocos2d::CCObject::autorelease(v64); /*0x37aaaf*/
      goto LABEL_8; /*0x37aab5*/
    }
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v64 + 8LL))(v64, 1); /*0x37aabf*/
  }
  v64 = 0; /*0x37aac2*/
LABEL_8:
  a1[71] = v64; /*0x37aac4*/
  (*(void (__fastcall **)(cocos2d::CCMenu *, cocos2d::CCObject *))(*(_QWORD *)v18 + 464LL))(v18, v64); /*0x37aad4*/
  *(_DWORD *)(a1[71] + 372LL) = 1069547520; /*0x37aae1*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v94, -220.0, 0.0); /*0x37aafa*/
  v66 = v65; /*0x37ab00*/
  v67 = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 200LL))(v5); /*0x37ab11*/
  cocos2d::CCPoint::operator+(v67, &v89, v66); /*0x37ab1d*/
  v68 = *(_QWORD *)a1[71]; /*0x37ab2a*/
  v69 = a1[71]; /*0x37ab2d*/
  v70 = cocos2d::CCNode::convertToNodeSpace(v18, v87, &v89); /*0x37ab3b*/
  (*(void (__fastcall **)(__int64, __int64))(v68 + 184))(v69, v70); /*0x37ab47*/
  v71 = cocos2d::CCSprite::createWithSpriteFrameName(CString); /*0x37ab56*/
  (*(void (__fastcall **)(cocos2d::CCSprite *))(*(_QWORD *)v71 + 160LL))(v71); /*0x37ab62*/
  cocos2d::CCSprite::setFlipX(v71, 1); /*0x37ab6d*/
  v89 = operator new(0x208u); /*0x37ab7d*/
  v72 = CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v89); /*0x37ab84*/
  v73 = (cocos2d::CCObject *)v72; /*0x37ab89*/
  if ( !v72 ) /*0x37ab8f*/
  {
LABEL_12:
    v73 = 0; /*0x37abc1*/
    goto LABEL_13; /*0x37abc1*/
  }
  if ( !(unsigned __int8)sub_47940(v72, (_DWORD)v71, 0, (_DWORD)a1, (__int64)GJGarageLayer_onArrow) ) /*0x37abac*/
  {
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v73 + 8LL))(v73, 1); /*0x37abbe*/
    goto LABEL_12; /*0x37abbe*/
  }
  cocos2d::CCObject::autorelease(v73); /*0x37abae*/
LABEL_13:
  a1[72] = v73; /*0x37abc3*/
  (*(void (__fastcall **)(cocos2d::CCMenu *, cocos2d::CCObject *))(*(_QWORD *)v18 + 464LL))(v18, v73); /*0x37abd3*/
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)a1[72] + 64LL))(a1[72], 1); /*0x37abe8*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v94, 220.0, 0.0); /*0x37abfa*/
  v75 = v74; /*0x37ac00*/
  v76 = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 200LL))(v5); /*0x37ac11*/
  cocos2d::CCPoint::operator+(v76, &v89, v75); /*0x37ac1d*/
  v77 = *(_QWORD *)a1[72]; /*0x37ac2a*/
  v78 = a1[72]; /*0x37ac2d*/
  v79 = cocos2d::CCNode::convertToNodeSpace(v18, v87, &v89); /*0x37ac3b*/
  (*(void (__fastcall **)(__int64, __int64))(v77 + 184))(v78, v79); /*0x37ac47*/
  *(_DWORD *)(a1[72] + 372LL) = 1069547520; /*0x37ac54*/
  v81 = (cocos2d::CCObject *)cocos2d::CCArray::create(v80); /*0x37ac5e*/
  a1[61] = v81; /*0x37ac64*/
  cocos2d::CCObject::retain(v81); /*0x37ac6e*/
  v82 = cocos2d::CCMenu::create(); /*0x37ac74*/
  a1[73] = v82; /*0x37ac7a*/
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 464LL))(a1, v82); /*0x37ac91*/
  v83 = *(_QWORD *)a1[73]; /*0x37ac9b*/
  v84 = a1[73]; /*0x37ac9e*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v89, v90 * 0.5, 25.0); /*0x37acb6*/
  (*(void (__fastcall **)(__int64, __int64))(v83 + 184))(v84, v85); /*0x37acc2*/
  return GJGarageLayer_selectTab(a1, 0); /*0x37acd2*/
}

// [9/24] Address: 0x37acf0
// Method: GJGarageLayer::onArrow
// Hidden C++ exception states: #wind=2
__int64 __fastcall GJGarageLayer_onArrow(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  int v4; // ebp
  int v5; // ebx
  _DWORD *v6; // r8
  int v7; // r9d
  int v8; // edx
  int v9; // edx
  void *v11; // [rsp+30h] [rbp+8h]
  void *v12; // [rsp+30h] [rbp+8h]

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x37ad10*/
  if ( !qword_905FD0 ) /*0x37ad1a*/
  {
    v11 = operator new(0x6E8u); /*0x37ad26*/
    qword_905FD0 = sub_2723A0(v11); /*0x37ad34*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x37ad41*/
    if ( !qword_905FD0 ) /*0x37ad4c*/
    {
      v12 = operator new(0x6E8u); /*0x37ad58*/
      qword_905FD0 = sub_2723A0(v12); /*0x37ad66*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x37ad77*/
    }
  }
  v5 = GameManager_countForType(v3, *(_DWORD *)(a1 + 516)); /*0x37ad84*/
  v6 = (_DWORD *)sub_10C920(a1 + 520, a1 + 516); /*0x37ad99*/
  v7 = v5 / 36; /*0x37adb0*/
  v8 = 1; /*0x37adb3*/
  if ( v4 != 1 ) /*0x37adbf*/
    v8 = -1; /*0x37adbf*/
  v9 = *v6 + v8; /*0x37adc2*/
  if ( v9 >= 0 ) /*0x37adc5*/
  {
    if ( v9 > v7 ) /*0x37adcc*/
      v9 = 0; /*0x37adcc*/
    v7 = v9; /*0x37adcf*/
  }
  return GJGarageLayer_setupPage(a1, (unsigned int)v7, *(unsigned int *)(a1 + 516)); /*0x37addf*/
}

// [10/24] Address: 0x37ae00
// Method: GJGarageLayer::onNavigate
__int64 __fastcall GJGarageLayer_onNavigate(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x37ae0f*/
  return GJGarageLayer_setupPage(a1, v3, *(unsigned int *)(a1 + 516)); /*0x37ae1e*/
}

// [11/24] Address: 0x37ae60
// Method: GJGarageLayer::selectTab
__int64 __fastcall GJGarageLayer_selectTab(__int64 a1, unsigned int a2)
{
  unsigned int i; // ebp
  struct cocos2d::CCObject *v4; // rdi
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rdx
  unsigned int *v8; // rax
  unsigned int v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2; /*0x37ae65*/
  for ( i = 0; i < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 480)); ++i ) /*0x37ae7a*/
  {
    v4 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 480), i); /*0x37ae9f*/
    v5 = (*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v4 + 56LL))(v4); /*0x37aeb5*/
    LOBYTE(v6) = v10 == v5; /*0x37aeb7*/
    CCMenuItemToggler_toggle(v4, v6); /*0x37aeba*/
    LOBYTE(v7) = v10 != v5; /*0x37aec6*/
    (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)v4 + 936LL))(v4, v7); /*0x37aed3*/
  }
  v8 = (unsigned int *)sub_10C920(a1 + 520, &v10); /*0x37aeff*/
  return GJGarageLayer_setupPage(a1, *v8, v10); /*0x37af13*/
}

// [13/24] Address: 0x37b640
// Method: GJGarageLayer::getItems
// Hidden C++ exception states: #wind=2
__int64 __fastcall GJGarageLayer_getItems(int a1, int a2)
{
  _DWORD *v4; // rbx
  __int64 v5; // rcx
  int v6; // eax
  int v7; // r9d
  void *v9; // [rsp+50h] [rbp+18h]
  void *v10; // [rsp+50h] [rbp+18h]

  v4 = (_DWORD *)qword_905FD0; /*0x37b654*/
  if ( !qword_905FD0 ) /*0x37b65e*/
  {
    v9 = operator new(0x6E8u); /*0x37b66a*/
    qword_905FD0 = sub_2723A0(v9); /*0x37b678*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x37b685*/
    v4 = (_DWORD *)qword_905FD0; /*0x37b688*/
    if ( !qword_905FD0 ) /*0x37b692*/
    {
      v10 = operator new(0x6E8u); /*0x37b69e*/
      qword_905FD0 = sub_2723A0(v10); /*0x37b6ac*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x37b6b9*/
    }
  }
  GameManager_activeIconForType(v4, a2); /*0x37b6c1*/
  v6 = GameManager_countForType(v5, a2); /*0x37b6cb*/
  return GJGarageLayer_getItems_0(a1, v6, 0, a2, v7); /*0x37b6e5*/
}

// [14/24] Address: 0x37b700
// Method: GJGarageLayer::getItems_0
// Hidden C++ exception states: #wind=4
__int64 __fastcall GJGarageLayer_getItems_0(__int64 a1, int a2, int a3, unsigned int a4, int a5)
{
  __int64 v8; // rcx
  unsigned int v9; // r13d
  __int64 v10; // rcx
  __int64 v11; // r14
  int v12; // ecx
  int v13; // r12d
  unsigned int v14; // esi
  __int64 v15; // rcx
  char isIconUnlocked; // r15
  __int64 v17; // r14
  __int64 v18; // rax
  cocos2d::CCObject *v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rbx
  float v23; // xmm6_4
  float *v24; // rax
  __int64 v25; // rax
  cocos2d::CCArray *v26; // rbx
  struct cocos2d::CCSprite *v28; // [rsp+30h] [rbp-98h]
  void *v29; // [rsp+38h] [rbp-90h]
  void *v30; // [rsp+40h] [rbp-88h]
  _BYTE v31[40]; // [rsp+48h] [rbp-80h] BYREF
  void *v32; // [rsp+D0h] [rbp+8h]
  cocos2d::CCArray *v33; // [rsp+D0h] [rbp+8h]
  unsigned int v34; // [rsp+E8h] [rbp+20h] BYREF

  v34 = a4; /*0x37b707*/
  *(_DWORD *)sub_10C920(a1 + 520, &v34) = a3; /*0x37b747*/
  if ( !qword_905FD0 ) /*0x37b751*/
  {
    v32 = operator new(0x6E8u); /*0x37b75d*/
    qword_905FD0 = sub_2723A0(v32); /*0x37b76e*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x37b77f*/
  }
  v9 = GameManager_iconTypeToUnlockType(v8, v34); /*0x37b78d*/
  v11 = cocos2d::CCArray::create(v10); /*0x37b796*/
  v33 = (cocos2d::CCArray *)v11; /*0x37b799*/
  v28 = cocos2d::CCSprite::createWithSpriteFrameName("playerSquare_001.png"); /*0x37b7ae*/
  *(_QWORD *)(a1 + 552) = 0; /*0x37b7b3*/
  v12 = 36 * a3; /*0x37b7c1*/
  v13 = 36 * a3 + 36; /*0x37b7c8*/
  if ( a2 < v13 ) /*0x37b7cf*/
    v13 = a2; /*0x37b7cf*/
  v14 = v12 + 1; /*0x37b7d3*/
  if ( v12 + 1 <= v13 ) /*0x37b7d9*/
  {
    while ( 1 ) /*0x37b7f8*/
    {
      v15 = qword_905FD0; /*0x37b7f8*/
      if ( !qword_905FD0 ) /*0x37b802*/
      {
        v29 = operator new(0x6E8u); /*0x37b80e*/
        qword_905FD0 = sub_2723A0(v29); /*0x37b81c*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x37b82d*/
        v15 = qword_905FD0; /*0x37b82f*/
      }
      isIconUnlocked = GameManager_isIconUnlocked(v15, v14, v34); /*0x37b845*/
      v17 = sub_37F9B0(v9, v14); /*0x37b853*/
      if ( v17 ) /*0x37b859*/
        break; /*0x37b859*/
      v26 = v33; /*0x37b985*/
LABEL_19:
      if ( (int)++v14 > v13 ) /*0x37b992*/
        return (__int64)v26; /*0x37b99b*/
    }
    GJItemIcon_scaleForType(v9); /*0x37b862*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 160LL))(v17); /*0x37b87a*/
    v30 = operator new(0x208u); /*0x37b886*/
    v18 = CCMenuItemSpriteExtra_CCMenuItemSpriteExtra(v30); /*0x37b88e*/
    v19 = (cocos2d::CCObject *)v18; /*0x37b893*/
    if ( v18 ) /*0x37b899*/
    {
      if ( (unsigned __int8)sub_47940(v18, v17, 0, a1, (__int64)sub_37C110) ) /*0x37b8ac*/
      {
        cocos2d::CCObject::autorelease(v19); /*0x37b8b8*/
LABEL_14:
        v20 = *(_QWORD *)v19; /*0x37b8cd*/
        v21 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v28 + 320LL))(v28); /*0x37b8d8*/
        (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v20 + 312))(v19, v21); /*0x37b8e4*/
        v22 = *(_QWORD *)v17; /*0x37b8ea*/
        v23 = *(float *)((*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v19 + 320LL))(v19) + 4) * 0.5; /*0x37b8fe*/
        v24 = (float *)(*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v19 + 320LL))(v19); /*0x37b909*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v31, *v24 * 0.5, v23); /*0x37b920*/
        (*(void (__fastcall **)(__int64, __int64))(v22 + 184))(v17, v25); /*0x37b92c*/
        (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)v19 + 64LL))(v19, v14); /*0x37b93a*/
        *((_DWORD *)v19 + 128) = v34; /*0x37b944*/
        v26 = v33; /*0x37b94d*/
        cocos2d::CCArray::addObject(v33, v19); /*0x37b958*/
        if ( v14 == a5 ) /*0x37b965*/
          *(_QWORD *)(a1 + 552) = v19; /*0x37b967*/
        if ( !isIconUnlocked ) /*0x37b971*/
          sub_380620(v17); /*0x37b97e*/
        goto LABEL_19; /*0x37b983*/
      }
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v19 + 8LL))(v19, 1); /*0x37b8c8*/
    }
    v19 = 0; /*0x37b8cb*/
    goto LABEL_14; /*0x37b8cb*/
  }
  return v11; /*0x37b9a0*/
}

// [15/24] Address: 0x37c7c0
// Method: GJGarageLayer::onToggleItem
// Hidden C++ exception states: #wind=5
__int64 __fastcall GJGarageLayer_onToggleItem(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  unsigned int v6; // ebx
  unsigned int v7; // esi
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  bool v13; // bl
  cocos2d::CCString *v14; // rax
  unsigned __int8 v15; // bl
  __int64 v16; // rcx
  __int64 v17; // rax
  void *v18; // [rsp+20h] [rbp-48h]
  void *v19; // [rsp+20h] [rbp-48h]
  void *v20; // [rsp+20h] [rbp-48h]
  void *v21; // [rsp+20h] [rbp-48h]
  _BYTE v22[32]; // [rsp+28h] [rbp-40h] BYREF

  v5 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 56LL))(a2); /*0x37c7f0*/
  v6 = a2[128]; /*0x37c7f2*/
  if ( !qword_905FD0 ) /*0x37c803*/
  {
    v18 = operator new(0x6E8u); /*0x37c80f*/
    qword_905FD0 = sub_2723A0(v18); /*0x37c81d*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x37c82a*/
  }
  v7 = GameManager_iconTypeToUnlockType(v4, v6); /*0x37c83b*/
  if ( !v8 ) /*0x37c840*/
  {
    v19 = operator new(0x6E8u); /*0x37c84c*/
    qword_905FD0 = sub_2723A0(v19); /*0x37c85a*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x37c86b*/
    v8 = qword_905FD0; /*0x37c86d*/
  }
  if ( !GameManager_isIconUnlocked(v8, v5, v6) ) /*0x37c87c*/
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a1 + 448) + 8LL))(a1 + 448, v5, v7); /*0x37c894*/
  v11 = qword_905FE0; /*0x37c89c*/
  if ( !qword_905FE0 ) /*0x37c8a6*/
  {
    v20 = operator new(0x3E8u); /*0x37c8b2*/
    qword_905FE0 = sub_2D2B40(v20); /*0x37c8c0*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x37c8d1*/
    v11 = qword_905FE0; /*0x37c8d3*/
  }
  if ( (unsigned __int8)sub_2E5B30(v9, v7, v5) ) /*0x37c8df*/
  {
    GameStatsManager_getRewardKey(v12, (__int64)v22, v5, v7); /*0x37c8f7*/
    v14 = (cocos2d::CCString *)cocos2d::CCDictionary::valueForKey(*(_QWORD *)(v11 + 896), v22); /*0x37c909*/
    v13 = cocos2d::CCString::boolValue(v14); /*0x37c918*/
    sub_3C310(v22); /*0x37c920*/
  }
  else
  {
    v13 = 0; /*0x37c8e8*/
  }
  v15 = !v13; /*0x37c925*/
  v16 = qword_905FE0; /*0x37c928*/
  if ( !qword_905FE0 ) /*0x37c932*/
  {
    v21 = operator new(0x3E8u); /*0x37c93e*/
    qword_905FE0 = sub_2D2B40(v21); /*0x37c94c*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0); /*0x37c959*/
    v16 = qword_905FE0; /*0x37c95c*/
  }
  GameStatsManager_toggleEnableItem(v16, v7, v5, v15); /*0x37c96c*/
  v17 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 952LL))(a2); /*0x37c977*/
  return GJItemIcon_toggleEnabledState(v17, v15); /*0x37c988*/
}

// [16/24] Address: 0x37ca00
// Method: GJGarageLayer::playerColorChanged
__int64 __fastcall GJGarageLayer_playerColorChanged(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  v2 = a1 - 448; /*0x37ca06*/
  v3 = *(_QWORD *)(a1 + 112); /*0x37ca0d*/
  if ( v3 ) /*0x37ca14*/
  {
    LOBYTE(a2) = 1; /*0x37ca19*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 336LL))(v3, a2); /*0x37ca1b*/
  }
  return GJGarageLayer_updatePlayerColors(v2); /*0x37ca24*/
}

// [17/24] Address: 0x37ca30
// Method: GJGarageLayer::updatePlayerColors
// Hidden C++ exception states: #wind=8
__int64 __fastcall GJGarageLayer_updatePlayerColors(__int64 a1)
{
  __int64 v2; // rbp
  int v3; // ebx
  char *v4; // rdi
  char *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // r8d
  char *v9; // rax
  __int64 v10; // rdx
  void *v12; // [rsp+40h] [rbp+8h] BYREF
  char v13; // [rsp+48h] [rbp+10h] BYREF
  void *v14; // [rsp+50h] [rbp+18h] BYREF

  v2 = qword_905FD0; /*0x37ca3f*/
  if ( !qword_905FD0 ) /*0x37ca49*/
  {
    v12 = operator new(0x6E8u); /*0x37ca55*/
    qword_905FD0 = sub_2723A0(v12); /*0x37ca63*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x37ca74*/
    v2 = qword_905FD0; /*0x37ca76*/
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 472) + 660LL) = *(_BYTE *)(v2 + 944); /*0x37ca8b*/
  v3 = *(_DWORD *)(v2 + 844) - *(_DWORD *)(v2 + 848); /*0x37ca97*/
  v4 = GameManager_colorForIdx(v2, (char *)&v12, *(_DWORD *)(v2 + 856) - *(_DWORD *)(v2 + 860)); /*0x37cab8*/
  v5 = GameManager_colorForIdx(v2, &v13, v3); /*0x37cac6*/
  v6 = *(_QWORD *)(a1 + 472); /*0x37cacb*/
  (**(void (__fastcall ***)(__int64, char *))(*(_QWORD *)(v6 + 600) + 320LL))(*(_QWORD *)(v6 + 600) + 320LL, v5); /*0x37cae9*/
  (**(void (__fastcall ***)(__int64, char *))(*(_QWORD *)(v6 + 608) + 320LL))(*(_QWORD *)(v6 + 608) + 320LL, v4); /*0x37cb00*/
  SimplePlayer_updateColors(v6); /*0x37cb05*/
  v7 = qword_905FD0; /*0x37cb0a*/
  if ( !qword_905FD0 ) /*0x37cb14*/
  {
    v14 = operator new(0x6E8u); /*0x37cb20*/
    qword_905FD0 = sub_2723A0(v14); /*0x37cb2e*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x37cb3f*/
    v7 = qword_905FD0; /*0x37cb41*/
  }
  v8 = *(_DWORD *)(v7 + 868) - *(_DWORD *)(v7 + 872); /*0x37cb4f*/
  if ( v8 < 0 ) /*0x37cb56*/
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 472) + 668LL) = 0; /*0x37cb8d*/
  }
  else
  {
    v9 = GameManager_colorForIdx(v7, (char *)&v14, v8); /*0x37cb5d*/
    v10 = *(_QWORD *)(a1 + 472); /*0x37cb62*/
    *(_BYTE *)(v10 + 668) = 1; /*0x37cb69*/
    *(_WORD *)(v10 + 669) = *(_WORD *)v9; /*0x37cb73*/
    *(_BYTE *)(v10 + 671) = v9[2]; /*0x37cb7e*/
  }
  return SimplePlayer_updateColors(*(_QWORD *)(a1 + 472)); /*0x37cb9b*/
}

// [18/24] Address: 0x37cbb0
// Method: GJGarageLayer::showUnlockPopup
// Hidden C++ exception states: #wind=13
__int64 __fastcall GJGarageLayer_showUnlockPopup(__int64 a1, unsigned int a2, unsigned int a3)
{
  cocos2d::CCArray *v4; // rbx
  int v5; // r9d
  struct cocos2d::CCObject *v6; // rax
  int v7; // r9d
  struct cocos2d::CCObject *v8; // rax
  int v9; // r9d
  struct cocos2d::CCObject *v10; // rax
  int v11; // r9d
  struct cocos2d::CCObject *v12; // rax
  int v13; // r9d
  struct cocos2d::CCObject *v14; // rax
  int v15; // r9d
  struct cocos2d::CCObject *v16; // rax
  __int64 DialogLayer; // rsi
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 *v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v24; // rax
  __int16 v25; // [rsp+30h] [rbp-39h] BYREF
  char v26; // [rsp+32h] [rbp-37h]
  __int128 *v27; // [rsp+40h] [rbp-29h] BYREF
  char v28[8]; // [rsp+48h] [rbp-21h] BYREF
  __int64 v29; // [rsp+50h] [rbp-19h]
  __int64 v30; // [rsp+58h] [rbp-11h]
  __int64 v31; // [rsp+60h] [rbp-9h]
  __int128 v32; // [rsp+68h] [rbp-1h] BYREF
  __int64 v33; // [rsp+78h] [rbp+Fh]
  __int64 v34; // [rsp+80h] [rbp+17h]
  _BYTE v35[8]; // [rsp+88h] [rbp+1Fh] BYREF

  if ( a3 == 1 && a2 == 13 ) /*0x37cbdd*/
  {
    v4 = (cocos2d::CCArray *)cocos2d::CCArray::create(a1); /*0x37cbe9*/
    v27 = &v32; /*0x37cbf0*/
    v25 = -1; /*0x37cbfb*/
    v26 = -1; /*0x37cc06*/
    v32 = 0; /*0x37cc0c*/
    v33 = 0; /*0x37cc13*/
    v34 = 0; /*0x37cc17*/
    *(_QWORD *)&v32 = sub_3C460(32); /*0x37cc25*/
    v33 = 17; /*0x37cc29*/
    v34 = 31; /*0x37cc31*/
    strcpy((char *)v32, "Hey, over here..."); /*0x37cc40*/
    v29 = 0; /*0x37cc51*/
    v30 = 7; /*0x37cc55*/
    v31 = 15; /*0x37cc5d*/
    strcpy(v28, "Scratch"); /*0x37cc6c*/
    v6 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v28, (unsigned int)&v32, 10, v5, 0, (__int64)&v25); /*0x37ccac*/
    cocos2d::CCArray::addObject(v4, v6); /*0x37ccb7*/
    v27 = &v32; /*0x37ccc1*/
    v25 = -1; /*0x37cccc*/
    v26 = -1; /*0x37ccd7*/
    v32 = 0; /*0x37ccdd*/
    v33 = 0; /*0x37cce1*/
    v34 = 0; /*0x37cce5*/
    *(_QWORD *)&v32 = sub_3C460(64); /*0x37ccf3*/
    v33 = 48; /*0x37ccf7*/
    v34 = 63; /*0x37ccff*/
    strcpy((char *)v32, "I've been watching you, and you got some skills."); /*0x37cd0e*/
    v29 = 0; /*0x37cd2b*/
    v30 = 7; /*0x37cd2f*/
    v31 = 15; /*0x37cd37*/
    strcpy(v28, "Scratch"); /*0x37cd46*/
    v8 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v28, (unsigned int)&v32, 13, v7, 0, (__int64)&v25); /*0x37cd89*/
    cocos2d::CCArray::addObject(v4, v8); /*0x37cd94*/
    v27 = &v32; /*0x37cd9e*/
    v25 = -1; /*0x37cda9*/
    v26 = -1; /*0x37cdb4*/
    v32 = 0; /*0x37cdba*/
    v33 = 0; /*0x37cdbe*/
    v34 = 0; /*0x37cdc2*/
    *(_QWORD *)&v32 = sub_3C460(48); /*0x37cdd0*/
    v33 = 44; /*0x37cdd4*/
    v34 = 47; /*0x37cddc*/
    strcpy((char *)v32, "Whatever you need, <co>Scratch</c>'s got it."); /*0x37cdeb*/
    v29 = 0; /*0x37ce13*/
    v30 = 7; /*0x37ce17*/
    v31 = 15; /*0x37ce1f*/
    strcpy(v28, "Scratch"); /*0x37ce2e*/
    v10 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v28, (unsigned int)&v32, 10, v9, 0, (__int64)&v25); /*0x37ce69*/
    cocos2d::CCArray::addObject(v4, v10); /*0x37ce74*/
    v27 = &v32; /*0x37ce7e*/
    v25 = -1; /*0x37ce89*/
    v26 = -1; /*0x37ce94*/
    v32 = 0; /*0x37ce9a*/
    v33 = 0; /*0x37ce9e*/
    v34 = 0; /*0x37cea2*/
    *(_QWORD *)&v32 = sub_3C460(64); /*0x37ceb0*/
    v33 = 48; /*0x37ceb4*/
    v34 = 63; /*0x37cebc*/
    strcpy((char *)v32, "Here's a free sample. Come find me when you can."); /*0x37cecb*/
    v29 = 0; /*0x37cee8*/
    v30 = 7; /*0x37ceec*/
    v31 = 15; /*0x37cef4*/
    strcpy(v28, "Scratch"); /*0x37cf03*/
    v12 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v28, (unsigned int)&v32, 8, v11, 0, (__int64)&v25); /*0x37cf3e*/
    cocos2d::CCArray::addObject(v4, v12); /*0x37cf49*/
    v27 = &v32; /*0x37cf53*/
    v25 = -1; /*0x37cf5e*/
    v26 = -1; /*0x37cf69*/
    v32 = 0; /*0x37cf6f*/
    v33 = 0; /*0x37cf73*/
    v34 = 0; /*0x37cf77*/
    *(_QWORD *)&v32 = sub_3C460(32); /*0x37cf85*/
    v33 = 23; /*0x37cf89*/
    v34 = 31; /*0x37cf91*/
    strcpy((char *)v32, "Did you hear something?"); /*0x37cfa0*/
    v29 = 0; /*0x37cfc5*/
    v30 = 7; /*0x37cfc9*/
    v31 = 15; /*0x37cfd1*/
    strcpy(v28, "Scratch"); /*0x37cfe0*/
    v14 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v28, (unsigned int)&v32, 9, v13, 0, (__int64)&v25); /*0x37d01b*/
    cocos2d::CCArray::addObject(v4, v14); /*0x37d026*/
    v27 = &v32; /*0x37d030*/
    v25 = -1; /*0x37d03b*/
    v26 = -1; /*0x37d046*/
    v32 = 0; /*0x37d04c*/
    v33 = 0; /*0x37d050*/
    v34 = 0; /*0x37d054*/
    *(_QWORD *)&v32 = sub_3C460(32); /*0x37d062*/
    v33 = 21; /*0x37d066*/
    v34 = 31; /*0x37d06e*/
    strcpy((char *)v32, "<d010>.<d010>.<d010>."); /*0x37d07d*/
    v29 = 0; /*0x37d097*/
    v30 = 7; /*0x37d09b*/
    v31 = 15; /*0x37d0a3*/
    strcpy(v28, "Scratch"); /*0x37d0b2*/
    v16 = (struct cocos2d::CCObject *)sub_1723F0((unsigned int)v28, (unsigned int)&v32, 8, v15, 0, (__int64)&v25); /*0x37d0ed*/
    cocos2d::CCArray::addObject(v4, v16); /*0x37d0f8*/
    DialogLayer = DialogLayer_createDialogLayer(0, v4, 2); /*0x37d10e*/
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(a1 - 448) + 456LL))(a1 - 448, DialogLayer, 100); /*0x37d12e*/
    v18 = a1 - 8; /*0x37d131*/
    if ( a1 == 448 ) /*0x37d138*/
      v18 = 0; /*0x37d138*/
    *(_QWORD *)(DialogLayer + 624) = v18; /*0x37d13c*/
    v19 = cocos2d::CCDirector::sharedDirector(v18); /*0x37d143*/
    cocos2d::CCDirector::getWinSize(v19, &v27); /*0x37d150*/
    v20 = *(__int64 **)(DialogLayer + 560); /*0x37d156*/
    v21 = *v20; /*0x37d15d*/
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v35, *(float *)&v27 * 0.5, *((float *)&v27 + 1) * 0.5); /*0x37d17e*/
    (*(void (__fastcall **)(__int64 *, __int64))(v21 + 184))(v20, v22); /*0x37d18a*/
    return sub_1734F0(DialogLayer, 2); /*0x37d198*/
  }
  else
  {
    v24 = sub_380790(a2, a3); /*0x37d1a4*/
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 1064LL))(v24); /*0x37d1b6*/
  }
}

// [19/24] Address: 0x37d370
// Method: GJGarageLayer::FLAlert_Clicked
// Hidden C++ exception states: #wind=9
void __fastcall GJGarageLayer_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rcx
  void *v19; // [rsp+20h] [rbp-18h]
  void *v20; // [rsp+20h] [rbp-18h]
  void *v21; // [rsp+20h] [rbp-18h]
  void *v22; // [rsp+20h] [rbp-18h]

  if ( a3 ) /*0x37d373*/
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 1 ) /*0x37d395*/
    {
      v5 = a1 - 416; /*0x37d39b*/
      v6 = a1 + 8; /*0x37d3a2*/
      v7 = 0; /*0x37d3a6*/
      if ( !v5 ) /*0x37d3ab*/
        v6 = 0; /*0x37d3ab*/
      v8 = qword_905FD0; /*0x37d3af*/
      if ( !qword_905FD0 ) /*0x37d3b9*/
      {
        v19 = operator new(0x6E8u); /*0x37d3c5*/
        qword_905FD0 = sub_2723A0(v19); /*0x37d3d3*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x37d3e4*/
        v8 = qword_905FD0; /*0x37d3e6*/
      }
      *(_QWORD *)(v8 + 968) = v6; /*0x37d3ed*/
      v9 = cocos2d::CCApplication::sharedApplication(v7); /*0x37d3f4*/
      (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)v9 + 96LL))( /*0x37d40b*/
        v9,
        "https://store.steampowered.com/recommended/recommendgame/322170");
      *(_BYTE *)(v8 + 716) = 1; /*0x37d40e*/
      *(_BYTE *)(v8 + 1056) = 1; /*0x37d415*/
    }
    else if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 2 ) /*0x37d433*/
    {
      v10 = a1 - 416; /*0x37d435*/
      v11 = a1 + 8; /*0x37d43c*/
      if ( !v10 ) /*0x37d445*/
        v11 = 0; /*0x37d445*/
      v12 = qword_905FD0; /*0x37d449*/
      if ( !qword_905FD0 ) /*0x37d453*/
      {
        v20 = operator new(0x6E8u); /*0x37d45f*/
        qword_905FD0 = sub_2723A0(v20); /*0x37d46d*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x37d47e*/
        v12 = qword_905FD0; /*0x37d480*/
      }
      *(_QWORD *)(v12 + 968) = v11; /*0x37d487*/
      sub_279680(); /*0x37d498*/
    }
    else if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 3 ) /*0x37d4a9*/
    {
      v13 = a1 - 416; /*0x37d4ab*/
      v14 = a1 + 8; /*0x37d4b2*/
      if ( !v13 ) /*0x37d4bb*/
        v14 = 0; /*0x37d4bb*/
      v15 = qword_905FD0; /*0x37d4bf*/
      if ( !qword_905FD0 ) /*0x37d4c9*/
      {
        v21 = operator new(0x6E8u); /*0x37d4d5*/
        qword_905FD0 = sub_2723A0(v21); /*0x37d4e3*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x37d4f4*/
        v15 = qword_905FD0; /*0x37d4f6*/
      }
      *(_QWORD *)(v15 + 968) = v14; /*0x37d4fd*/
      sub_279710(); /*0x37d50e*/
    }
    else if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) == 4 ) /*0x37d51f*/
    {
      v16 = a1 - 416; /*0x37d521*/
      v17 = a1 + 8; /*0x37d528*/
      if ( !v16 ) /*0x37d531*/
        v17 = 0; /*0x37d531*/
      v18 = qword_905FD0; /*0x37d535*/
      if ( !qword_905FD0 ) /*0x37d53f*/
      {
        v22 = operator new(0x6E8u); /*0x37d54b*/
        qword_905FD0 = sub_2723A0(v22); /*0x37d559*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x37d56a*/
        v18 = qword_905FD0; /*0x37d56c*/
      }
      *(_QWORD *)(v18 + 968) = v17; /*0x37d573*/
      sub_2797A0(v18); /*0x37d57a*/
    }
  }
}

// [20/24] Address: 0x37d590
// Method: GJGarageLayer::dialogClosed
// Hidden C++ exception states: #wind=3
__int64 __fastcall GJGarageLayer_dialogClosed(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  const struct cocos2d::CCPoint *v11; // rax
  const struct cocos2d::CCPoint *v12; // rbx
  int v13; // edi
  __int64 v14; // rax
  _BYTE v16[8]; // [rsp+60h] [rbp-58h] BYREF
  __int128 v17; // [rsp+68h] [rbp-50h] BYREF
  __int64 v18; // [rsp+78h] [rbp-40h]
  __int64 v19; // [rsp+80h] [rbp-38h]
  float v20; // [rsp+C0h] [rbp+8h] BYREF
  float v21; // [rsp+C4h] [rbp+Ch]
  void *v22; // [rsp+D0h] [rbp+18h] BYREF
  char v23; // [rsp+D8h] [rbp+20h] BYREF

  v2 = qword_905FD0; /*0x37d5a6*/
  if ( !qword_905FD0 ) /*0x37d5b0*/
  {
    v22 = operator new(0x6E8u); /*0x37d5bc*/
    qword_905FD0 = sub_2723A0(v22); /*0x37d5cd*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x37d5de*/
    v2 = qword_905FD0; /*0x37d5e0*/
  }
  v3 = AchievementManager_sharedState(a1); /*0x37d5e7*/
  if ( (int)AchievementManager_percentForAchievement(v3, "geometry.ach.rate") < 100 ) /*0x37d600*/
  {
    v17 = 0; /*0x37d605*/
    v18 = 0; /*0x37d60a*/
    v19 = 0; /*0x37d60f*/
    sub_3C230(&v17); /*0x37d629*/
    sub_274AD0(v2, &v17); /*0x37d636*/
    v5 = AchievementManager_sharedState(v4); /*0x37d63b*/
    GameManager_isColorUnlocked(v5, (__int64)"geometry.ach.rate", 100); /*0x37d650*/
  }
  v6 = qword_905FD0; /*0x37d655*/
  if ( !qword_905FD0 ) /*0x37d65f*/
  {
    v22 = operator new(0x6E8u); /*0x37d66b*/
    qword_905FD0 = sub_2723A0(v22); /*0x37d67c*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x37d68d*/
    v6 = qword_905FD0; /*0x37d68f*/
  }
  *(_BYTE *)(v6 + 716) = 1; /*0x37d696*/
  *(_BYTE *)(v6 + 1056) = 1; /*0x37d69d*/
  (**(void (__fastcall ***)(__int64))(a1 - 16))(a1 - 16); /*0x37d6ab*/
  v8 = cocos2d::CCDirector::sharedDirector(v7); /*0x37d6ad*/
  cocos2d::CCDirector::getWinSize(v8, &v20); /*0x37d6be*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v22, v20 * 0.5, v21 * 0.5); /*0x37d6ee*/
  v10 = CurrencyRewardLayer_create(0, 0, 0, 0, 0, 0, 0, 0, v9, 0, 0, 1065353216); /*0x37d733*/
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(a1 - 440) + 456LL))(a1 - 440, v10, 100); /*0x37d750*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v23, v20 * 0.5, v21 * 0.5); /*0x37d775*/
  v12 = v11; /*0x37d77b*/
  v13 = sub_37F9B0(1, 13); /*0x37d78d*/
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v16, v12); /*0x37d798*/
  return sub_139750(v10, 0, 1, v13, v14, 1056964608); /*0x37d7bc*/
}

// [21/24] Address: 0x37d7d0
// Method: GJGarageLayer::updateRate
// Hidden C++ exception states: #wind=4
__int64 __fastcall GJGarageLayer_updateRate(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  cocos2d::CCString *v4; // rax
  const char *CString; // rsi
  cocos2d::CCString *v6; // rax
  const char *v7; // rbp
  __int64 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rbx
  cocos2d::CCSpriteFrameCache *v12; // rax
  struct cocos2d::CCSpriteFrame *v13; // rax
  struct cocos2d::CCSprite *v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  void *v18; // [rsp+48h] [rbp+10h] BYREF
  void *v19; // [rsp+50h] [rbp+18h]

  result = qword_905FD0; /*0x37d7e5*/
  if ( !qword_905FD0 ) /*0x37d7ef*/
  {
    v18 = operator new(0x6E8u); /*0x37d7fb*/
    qword_905FD0 = sub_2723A0(v18); /*0x37d809*/
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x37d81a*/
    result = qword_905FD0; /*0x37d81c*/
  }
  if ( *(_BYTE *)(result + 716) && *(_QWORD *)(a1 + 80) ) /*0x37d830*/
  {
    v4 = cocos2d::CCString::createWithFormat("player_%02d_001.png", 13); /*0x37d847*/
    CString = cocos2d::CCString::getCString(v4); /*0x37d856*/
    v6 = cocos2d::CCString::createWithFormat("player_%02d_2_001.png", 13); /*0x37d865*/
    v7 = cocos2d::CCString::getCString(v6); /*0x37d874*/
    v8 = *(__int64 **)(a1 + 80); /*0x37d877*/
    v9 = *v8; /*0x37d87b*/
    LOBYTE(v9) = 1; /*0x37d885*/
    (*(void (__fastcall **)(__int64 *, __int64))(*v8 + 576))(v8, v9); /*0x37d887*/
    v10 = **(_QWORD **)(a1 + 80); /*0x37d88e*/
    v11 = *(_QWORD *)(a1 + 80); /*0x37d891*/
    v12 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(); /*0x37d894*/
    v13 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v12, CString); /*0x37d8a0*/
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSpriteFrame *))(v10 + 1008))(v11, v13); /*0x37d8ac*/
    v14 = cocos2d::CCSprite::createWithSpriteFrameName(v7); /*0x37d8bb*/
    (*(void (__fastcall **)(_QWORD, struct cocos2d::CCSprite *, __int64))(**(_QWORD **)(a1 + 80) + 456LL))( /*0x37d8d5*/
      *(_QWORD *)(a1 + 80),
      v14,
      0xFFFFFFFFLL);
    v15 = *(_QWORD *)v14; /*0x37d8dc*/
    cocos2d::CCPoint::CCPoint( /*0x37d904*/
      (cocos2d::CCPoint *)&v18,
      *(float *)(*(_QWORD *)(a1 + 80) + 432LL) * 0.5,
      *(float *)(*(_QWORD *)(a1 + 80) + 436LL) * 0.5);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v15 + 184))(v14, v16); /*0x37d910*/
    LOWORD(v18) = -20561; /*0x37d922*/
    BYTE2(v18) = -81; /*0x37d927*/
    (**(void (__fastcall ***)(__int64, void **))(*(_QWORD *)(a1 + 80) + 320LL))(*(_QWORD *)(a1 + 80) + 320LL, &v18); /*0x37d93f*/
    LOWORD(v18) = -1; /*0x37d94d*/
    BYTE2(v18) = -1; /*0x37d952*/
    (**((void (__fastcall ***)(__int64, void **))v14 + 40))((__int64)v14 + 320, &v18); /*0x37d966*/
    result = qword_905FD0; /*0x37d968*/
    if ( !qword_905FD0 ) /*0x37d972*/
    {
      v19 = operator new(0x6E8u); /*0x37d97e*/
      qword_905FD0 = sub_2723A0(v19); /*0x37d98c*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x37d99d*/
      result = qword_905FD0; /*0x37d99f*/
    }
    *(_QWORD *)(result + 968) = 0; /*0x37d9a6*/
  }
  if ( *(_BYTE *)(result + 717) ) /*0x37d9b1*/
  {
    v17 = *(_QWORD *)(a1 + 72); /*0x37d9ba*/
    if ( v17 ) /*0x37d9c1*/
    {
      LOBYTE(a2) = 1; /*0x37d9c6*/
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 576LL))(v17, a2); /*0x37d9c8*/
      result = qword_905FD0; /*0x37d9ce*/
      if ( !qword_905FD0 ) /*0x37d9d8*/
      {
        v18 = operator new(0x6E8u); /*0x37d9e4*/
        qword_905FD0 = sub_2723A0(v18); /*0x37d9f2*/
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x37da03*/
        result = qword_905FD0; /*0x37da05*/
      }
      *(_QWORD *)(result + 968) = 0; /*0x37da0c*/
    }
  }
  return result; /*0x37da17*/
}

// [22/24] Address: 0x37da30
// Method: GJGarageLayer::playRainbowEffect
__int64 __fastcall GJGarageLayer_playRainbowEffect(_QWORD **a1, int a2, int a3)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 result; // rax

  v4 = CCCircleWave_create((_DWORD)a1, a2, a3, 0, 1); /*0x37da6e*/
  v5 = *(_QWORD *)v4; /*0x37da78*/
  *(_WORD *)(v4 + 340) = 255; /*0x37da7b*/
  *(_BYTE *)(v4 + 342) = 0; /*0x37da82*/
  *(_BYTE *)(v4 + 364) = 1; /*0x37da88*/
  *(_DWORD *)(v4 + 360) = 1061997773; /*0x37da8f*/
  v6 = (*(__int64 (__fastcall **)(_QWORD *))(*a1[59] + 200LL))(a1[59]); /*0x37daa3*/
  (*(void (__fastcall **)(__int64, __int64))(v5 + 184))(v4, v6); /*0x37daaf*/
  ((void (__fastcall *)(_QWORD **, __int64, __int64))(*a1)[57])(a1, v4, 0xFFFFFFFFLL); /*0x37dac4*/
  *(_DWORD *)(v4 + 356) = 4; /*0x37dae5*/
  *(_DWORD *)(v4 + 352) = 1; /*0x37daef*/
  v10 = CCCircleWave_create(v8, v7, v9, 0, 1); /*0x37db0a*/
  v11 = *(_QWORD *)v10; /*0x37db0d*/
  *(_WORD *)(v10 + 340) = -256; /*0x37db10*/
  *(_BYTE *)(v10 + 342) = 0; /*0x37db1e*/
  *(_BYTE *)(v10 + 364) = 1; /*0x37db24*/
  *(_DWORD *)(v10 + 360) = 1061997773; /*0x37db2b*/
  v12 = (*(__int64 (__fastcall **)(_QWORD *))(*a1[59] + 200LL))(a1[59]); /*0x37db3f*/
  (*(void (__fastcall **)(__int64, __int64))(v11 + 184))(v10, v12); /*0x37db4b*/
  ((void (__fastcall *)(_QWORD **, __int64, __int64))(*a1)[57])(a1, v10, 0xFFFFFFFFLL); /*0x37db60*/
  *(_DWORD *)(v10 + 356) = 4; /*0x37db81*/
  *(_DWORD *)(v10 + 352) = 1; /*0x37db8b*/
  v16 = CCCircleWave_create(v14, v13, v15, 0, 1); /*0x37dba6*/
  v17 = *(_QWORD *)v16; /*0x37dba9*/
  *(_WORD *)(v16 + 340) = 0; /*0x37dbac*/
  *(_BYTE *)(v16 + 342) = -1; /*0x37dbba*/
  *(_BYTE *)(v16 + 364) = 1; /*0x37dbc0*/
  *(_DWORD *)(v16 + 360) = 1065353216; /*0x37dbc7*/
  v18 = (*(__int64 (__fastcall **)(_QWORD *))(*a1[59] + 200LL))(a1[59]); /*0x37dbdb*/
  (*(void (__fastcall **)(__int64, __int64))(v17 + 184))(v16, v18); /*0x37dbe7*/
  result = ((__int64 (__fastcall *)(_QWORD **, __int64, __int64))(*a1)[57])(a1, v16, 0xFFFFFFFFLL); /*0x37dbfc*/
  *(_DWORD *)(v16 + 356) = 4; /*0x37dc02*/
  return result; /*0x37dc0c*/
}

// [23/24] Address: 0x37df50
// Method: GJGarageLayer::onBack
// Hidden C++ exception states: #wind=2
void __fastcall GJGarageLayer_onBack(cocos2d::CCObject *a1)
{
  __int64 v2; // rax
  struct cocos2d::CCScene *v3; // rax
  struct cocos2d::CCScene *v4; // rbx
  __int64 v5; // rcx
  cocos2d::CCDirector *v6; // rax
  __int64 v7; // rcx
  cocos2d::CCDirector *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct cocos2d::CCScene *v11; // rbx
  cocos2d::CCDirector *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  const struct cocos2d::CCPoint *v15; // rax
  struct cocos2d::CCActionInterval *v16; // rax
  struct cocos2d::CCFiniteTimeAction *v17; // rbx
  __int64 v18; // rax
  struct cocos2d::CCAction *v19; // rax
  void *v20; // [rsp+30h] [rbp+8h] BYREF
  char v21; // [rsp+40h] [rbp+18h] BYREF

  if ( !*((_BYTE *)a1 + 512) ) /*0x37df5d*/
  {
    (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x37df6f*/
    v2 = qword_905FD0; /*0x37df75*/
    if ( !qword_905FD0 ) /*0x37df7f*/
    {
      v20 = operator new(0x6E8u); /*0x37df8b*/
      qword_905FD0 = sub_2723A0(v20); /*0x37df99*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x37dfaa*/
      v2 = qword_905FD0; /*0x37dfac*/
    }
    if ( *(_BYTE *)(v2 + 1112) ) /*0x37dfb3*/
    {
      *(_BYTE *)(v2 + 1112) = 0; /*0x37dffb*/
      cocos2d::CCObject::retain(a1); /*0x37e005*/
      (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)a1 + 512LL))(a1); /*0x37e011*/
      (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x37e01f*/
      v8 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v7); /*0x37e025*/
      cocos2d::CCDirector::popScene(v8); /*0x37e02e*/
      v11 = *(struct cocos2d::CCScene **)(cocos2d::CCDirector::sharedDirector(v9) + 280); /*0x37e03a*/
      if ( v11 ) /*0x37e044*/
      {
        *((_BYTE *)a1 + 512) = 1; /*0x37e04a*/
        v12 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v10); /*0x37e051*/
        cocos2d::CCDirector::willSwitchToScene(v12, v11); /*0x37e05d*/
        (*(void (__fastcall **)(struct cocos2d::CCScene *, cocos2d::CCObject *, __int64))(*(_QWORD *)v11 + 456LL))( /*0x37e072*/
          v11,
          a1,
          1000);
        cocos2d::CCObject::release(a1); /*0x37e07b*/
        v14 = cocos2d::CCDirector::sharedDirector(v13); /*0x37e081*/
        cocos2d::CCDirector::getWinSize(v14, &v20); /*0x37e08f*/
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v21, 0.0, *((float *)&v20 + 1)); /*0x37e0a3*/
        v16 = cocos2d::CCMoveTo::create(0.30000001, v15); /*0x37e0b4*/
        v17 = cocos2d::CCEaseIn::create(v16, 2.0); /*0x37e0cb*/
        v18 = cocos2d::CCCallFunc::create(a1, sub_3E5B0); /*0x37e0d8*/
        v19 = cocos2d::CCSequence::create(v17, v18, 0); /*0x37e0e7*/
        cocos2d::CCNode::runAction(a1, v19); /*0x37e0f3*/
      }
    }
    else
    {
      *((_BYTE *)a1 + 512) = 1; /*0x37dfbc*/
      v3 = (struct cocos2d::CCScene *)MenuLayer_scene(0); /*0x37dfc5*/
      v4 = cocos2d::CCTransitionFade::create(0.5, v3); /*0x37dfdb*/
      v6 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v5); /*0x37dfde*/
      cocos2d::CCDirector::replaceScene(v6, v4); /*0x37dff4*/
    }
  }
}

// [24/24] Address: 0x37e110
// Method: GJGarageLayer::keyBackClicked
void __fastcall GJGarageLayer_keyBackClicked(__int64 a1)
{
  GJGarageLayer_onBack((cocos2d::CCObject *)(a1 - 336)); /*0x37e119*/
}

// Address: 0x377d70
// Method: GJGarageLayer::init
// Hidden C++ exception states: #wind=26
bool __fastcall GJGarageLayer_init(__int64 a1)
{
  bool result; // al
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  float v8; // xmm12_4
  struct cocos2d::CCSprite *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  struct cocos2d::CCSprite *v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rcx
  cocos2d::CCDirector *v19; // rax
  float v20; // xmm6_4
  __int64 v21; // rcx
  cocos2d::CCDirector *v22; // rax
  float v23; // xmm0_4
  __int64 v24; // rax
  __int64 v25; // r14
  struct cocos2d::CCSprite *v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rcx
  cocos2d::CCDirector *v31; // rax
  float v32; // xmm6_4
  __int64 v33; // rcx
  cocos2d::CCDirector *v34; // rax
  float v35; // xmm0_4
  __int64 v36; // rax
  struct cocos2d::CCSprite *v37; // rdi
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rcx
  cocos2d::CCDirector *v42; // rax
  float v43; // xmm6_4
  __int64 v44; // rcx
  cocos2d::CCDirector *v45; // rax
  float v46; // xmm0_4
  __int64 v47; // rax
  __int64 v48; // rax
  char *v49; // rax
  __int64 v50; // rdi
  cocos2d::CCDirector *v51; // rax
  float v52; // xmm0_4
  __int64 v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rax
  __int128 *v61; // rdx
  struct cocos2d::CCSprite *v62; // rdi
  const struct cocos2d::CCSize *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rbx
  __int64 v66; // rax
  __int64 v67; // rdx
  void **v68; // rcx
  __int64 v69; // rdi
  size_t v70; // r8
  int v71; // ebx
  __int64 v72; // rdx
  __int128 *p_Buf2; // rdx
  __int64 v74; // rax
  struct cocos2d::CCSprite *v75; // rdi
  __int64 v76; // rax
  __int64 v77; // rbx
  __int64 v78; // rax
  struct cocos2d::CCSprite *v79; // rdi
  __int64 v80; // rbx
  __int64 v81; // rax
  __int64 v82; // rax
  cocos2d::CCSprite *v83; // rax
  _QWORD *v84; // rbx
  __int64 v85; // rax
  double v86; // xmm0_8
  __int64 v87; // rax
  __int64 v88; // rbx
  __int64 v89; // rax
  _DWORD *v90; // r8
  __int64 v91; // rdx
  unsigned int v92; // r8d
  int v93; // eax
  cocos2d::CCObject *v94; // r13
  struct cocos2d::CCMenu *v95; // r12
  __int64 v96; // rbx
  __int64 v97; // rcx
  cocos2d::CCDirector *v98; // rax
  float v99; // xmm6_4
  __int64 v100; // rcx
  cocos2d::CCDirector *v101; // rax
  float v102; // xmm0_4
  __int64 v103; // rax
  int v104; // eax
  cocos2d::CCObject *v105; // rdi
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rbx
  __int64 v110; // rax
  __int64 v111; // rax
  int v112; // eax
  cocos2d::CCObject *v113; // rdi
  __int64 v114; // rbx
  __int64 v115; // rax
  __int64 v116; // rax
  int v117; // eax
  cocos2d::CCObject *v118; // rdi
  __int64 v119; // rbx
  __int64 v120; // rax
  __int64 v121; // rax
  struct cocos2d::CCSprite *v122; // r15
  __int64 v123; // rbx
  __int64 v124; // rcx
  cocos2d::CCDirector *v125; // rax
  float v126; // xmm6_4
  __int64 v127; // rcx
  cocos2d::CCDirector *v128; // rax
  float v129; // xmm0_4
  __int64 v130; // rax
  __int64 v131; // rcx
  unsigned int Stat; // eax
  cocos2d::CCString *v133; // rax
  const char *CString; // rax
  struct cocos2d::CCLabelBMFont *v135; // rdi
  __int64 v136; // rbx
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rbx
  __int64 v140; // rax
  struct cocos2d::CCSprite *v141; // r14
  __int64 v142; // rax
  __int64 v143; // rbx
  __int64 v144; // rax
  __int64 v145; // rcx
  unsigned int v146; // eax
  cocos2d::CCString *v147; // rax
  const char *v148; // rax
  struct cocos2d::CCLabelBMFont *v149; // rdi
  __int64 v150; // rbx
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rbx
  __int64 v154; // rax
  struct cocos2d::CCSprite *v155; // r15
  __int64 v156; // rax
  __int64 v157; // rbx
  __int64 v158; // rax
  __int64 v159; // rcx
  unsigned int v160; // eax
  cocos2d::CCString *v161; // rax
  const char *v162; // rax
  struct cocos2d::CCLabelBMFont *v163; // rdi
  __int64 v164; // rbx
  __int64 v165; // rax
  __int64 v166; // rax
  __int64 v167; // rbx
  __int64 v168; // rax
  struct cocos2d::CCSprite *v169; // r14
  __int64 v170; // rax
  __int64 v171; // rbx
  __int64 v172; // rax
  __int64 v173; // rcx
  unsigned int v174; // eax
  cocos2d::CCString *v175; // rax
  const char *v176; // rax
  struct cocos2d::CCLabelBMFont *v177; // rdi
  __int64 v178; // rbx
  __int64 v179; // rax
  __int64 v180; // rax
  __int64 v181; // rbx
  __int64 v182; // rax
  struct cocos2d::CCSprite *v183; // r15
  __int64 v184; // rax
  __int64 v185; // rbx
  __int64 v186; // rax
  __int64 v187; // rcx
  unsigned int v188; // eax
  cocos2d::CCString *v189; // rax
  const char *v190; // rax
  struct cocos2d::CCLabelBMFont *v191; // rdi
  __int64 v192; // rbx
  __int64 v193; // rax
  __int64 v194; // rax
  __int64 v195; // rbx
  __int64 v196; // rax
  struct cocos2d::CCSprite *v197; // r14
  __int64 v198; // rax
  __int64 v199; // rbx
  __int64 v200; // rax
  __int64 v201; // rcx
  unsigned int v202; // eax
  cocos2d::CCString *v203; // rax
  const char *v204; // rax
  struct cocos2d::CCLabelBMFont *v205; // rdi
  __int64 v206; // rbx
  __int64 v207; // rax
  __int64 v208; // rax
  __int64 v209; // rbx
  __int64 v210; // rax
  struct cocos2d::CCSprite *v211; // r15
  __int64 v212; // rax
  __int64 v213; // rbx
  __int64 v214; // rax
  __int64 v215; // rcx
  unsigned int v216; // eax
  cocos2d::CCString *v217; // rax
  const char *v218; // rax
  struct cocos2d::CCLabelBMFont *v219; // rdi
  __int64 v220; // rbx
  __int64 v221; // rax
  __int64 v222; // rax
  __int64 v223; // rbx
  __int64 v224; // rax
  __int64 v225; // rcx
  struct cocos2d::CCSprite *v226; // rax
  int v227; // ebx
  cocos2d::CCObject *v228; // rdi
  __int64 v229; // rbx
  __int64 v230; // rcx
  cocos2d::CCDirector *v231; // rax
  float v232; // xmm7_4
  __int64 v233; // rcx
  cocos2d::CCDirector *v234; // rax
  float v235; // xmm0_4
  __int64 v236; // rax
  __int64 v237; // rax
  void *v238; // [rsp+30h] [rbp-D0h] BYREF
  void *v239; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v240; // [rsp+40h] [rbp-C0h] BYREF
  float v241; // [rsp+48h] [rbp-B8h] BYREF
  float v242; // [rsp+4Ch] [rbp-B4h]
  void *v243; // [rsp+50h] [rbp-B0h] BYREF
  void *v244; // [rsp+58h] [rbp-A8h] BYREF
  void *Buf1[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v246; // [rsp+70h] [rbp-90h]
  unsigned __int64 v247; // [rsp+78h] [rbp-88h]
  __int128 Buf2; // [rsp+80h] [rbp-80h] BYREF
  __int64 v249; // [rsp+90h] [rbp-70h]
  unsigned __int64 v250; // [rsp+98h] [rbp-68h]

  result = cocos2d::CCLayer::init((cocos2d::CCLayer *)a1);
  if ( result )
  {
    v4 = qword_905FD0;
    if ( !qword_905FD0 )
    {
      v238 = operator new(0x6E8u);
      qword_905FD0 = sub_2723A0(v238);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
      v4 = qword_905FD0;
    }
    *(_BYTE *)(v4 + 600) = 1;
    *(_DWORD *)(v4 + 740) = 0;
    LOBYTE(v3) = 1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 992LL))(a1, v3);
    LOBYTE(v5) = 1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 1008LL))(a1, v5);
    v7 = cocos2d::CCDirector::sharedDirector(v6);
    cocos2d::CCDirector::getWinSize(v7, &v241);
    v8 = (float)(v242 * 0.5) + 50.0;
    v9 = cocos2d::CCSprite::create("GJ_gradientBG.png");
    v10 = *(_QWORD *)v9;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v238, 0.0, 0.0);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v10 + 288))(v9, v11);
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v9, 4294967294LL);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v9 + 120LL))(v9);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v9 + 136LL))(v9);
    v12 = *(_QWORD *)v9;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v238, -5.0, -5.0);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v12 + 184))(v9, v13);
    LOWORD(v240) = -26986;
    BYTE2(v240) = -106;
    (**((void (__fastcall ***)(__int64, __int64 *))v9 + 40))((__int64)v9 + 320, &v240);
    v14 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_sideArt_001.png");
    v15 = *(_QWORD *)v14;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v238, 0.0, 1.0);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v15 + 288))(v14, v16);
    v17 = *(_QWORD *)v14;
    v19 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v18);
    v20 = cocos2d::CCDirector::getScreenTop(v19) + 1.0;
    v22 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v21);
    v23 = cocos2d::CCDirector::getScreenLeft(v22) - 1.0;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v238, v23, v20);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v17 + 184))(v14, v24);
    cocos2d::CCSprite::setFlipY(v14, 1);
    v25 = -1;
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(
      a1,
      v14,
      0xFFFFFFFFLL);
    v26 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_sideArt_001.png");
    v27 = *(_QWORD *)v26;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v238, 0.0, 0.0);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v27 + 288))(v26, v28);
    v29 = *(_QWORD *)v26;
    v31 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v30);
    v32 = cocos2d::CCDirector::getScreenBottom(v31) - 1.0;
    v34 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v33);
    v35 = cocos2d::CCDirector::getScreenLeft(v34) - 1.0;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v238, v35, v32);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v29 + 184))(v26, v36);
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v26, 1);
    v37 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_sideArt_001.png");
    v38 = *(_QWORD *)v37;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v238, 1.0, 0.0);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v38 + 288))(v37, v39);
    v40 = *(_QWORD *)v37;
    v42 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v41);
    v43 = cocos2d::CCDirector::getScreenBottom(v42) - 1.0;
    v45 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v44);
    v46 = cocos2d::CCDirector::getScreenRight(v45) + 1.0;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v238, v46, v43);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v40 + 184))(v37, v47);
    cocos2d::CCSprite::setFlipX(v37, 1);
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v37, 1);
    v48 = GJAccountManager_sharedState();
    v49 = CCTextInputNode_create(*(unsigned int *)(v48 + 364), *(unsigned int *)(v48 + 360), (__int64)"Player");
    *(_QWORD *)(a1 + 464) = v49;
    (*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v49, 20);
    *(_QWORD *)(*(_QWORD *)(a1 + 464) + 608LL) = a1 + 408;
    v50 = **(_QWORD **)(a1 + 464);
    v51 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(a1 + 408);
    v52 = cocos2d::CCDirector::getScreenTop(v51) - 34.0;
    v53 = *(_QWORD *)(a1 + 464);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v238, v241 * 0.5, v52);
    (*(void (__fastcall **)(__int64, __int64))(v50 + 184))(v53, v54);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 464) + 600LL) + 336LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 464) + 600LL),
      0);
    *(_DWORD *)(*(_QWORD *)(a1 + 464) + 616LL) = 15;
    LOWORD(v240) = -21896;
    v55 = *(_QWORD *)(a1 + 464);
    *(_WORD *)(v55 + 580) = -21896;
    *(_BYTE *)(v55 + 582) = -16;
    sub_555B0(v55, v56);
    v57 = *(_QWORD *)(a1 + 464);
    *(_DWORD *)(v57 + 576) = 1060320051;
    sub_555B0(v57, v58);
    *(_OWORD *)Buf1 = 0;
    v246 = 0;
    v247 = 0;
    Buf1[0] = (void *)sub_3C460(64);
    v246 = 62;
    v247 = 63;
    strcpy((char *)Buf1[0], "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
    GameManager_getMenuMusicFile(*(_DWORD **)(a1 + 464), Buf1);
    v59 = GJAccountManager_sharedState();
    if ( *(_DWORD *)(v59 + 360) == *(_DWORD *)(v59 + 364) )
    {
      Buf2 = 0;
      v249 = 0;
      v250 = 15;
      LOBYTE(Buf2) = 0;
      v67 = qword_905FD0;
      if ( !qword_905FD0 )
      {
        v239 = operator new(0x6E8u);
        qword_905FD0 = sub_2723A0(v239);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
        v67 = qword_905FD0;
      }
      sub_3E4F0(Buf1, v67 + 656);
      v68 = Buf1;
      if ( v247 > 0xF )
        v68 = (void **)Buf1[0];
      v69 = v246;
      v70 = v246;
      if ( v246 )
        v70 = 0;
      v71 = memcmp(v68, &Buf2, v70);
      if ( !v71 )
        v71 = v69 != 0;
      sub_3C310(Buf1);
      if ( v71 )
      {
        v72 = qword_905FD0;
        if ( !qword_905FD0 )
        {
          v239 = operator new(0x6E8u);
          qword_905FD0 = sub_2723A0(v239);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
          v72 = qword_905FD0;
        }
        sub_3E4F0(&Buf2, v72 + 656);
        p_Buf2 = &Buf2;
        if ( v250 > 0xF )
          p_Buf2 = (__int128 *)Buf2;
        *(_OWORD *)Buf1 = 0;
        v246 = 0;
        v247 = 0;
        do
          ++v25;
        while ( *((_BYTE *)p_Buf2 + v25) );
        sub_3C230(Buf1);
        CCTextInputNode_setString(*(_QWORD **)(a1 + 464), Buf1);
        sub_3C310(&Buf2);
      }
      v74 = qword_905FD0;
      if ( !qword_905FD0 )
      {
        v239 = operator new(0x6E8u);
        qword_905FD0 = sub_2723A0(v239);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
        v74 = qword_905FD0;
      }
      if ( !*(_BYTE *)(v74 + 961) )
      {
        v75 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_nameTxt_001.png");
        (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *))(*(_QWORD *)a1 + 464LL))(a1, v75);
        cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v239, 115.0, 10.0);
        v77 = v76;
        v78 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 464) + 200LL))(*(_QWORD *)(a1 + 464));
        cocos2d::CCPoint::operator+(v78, &v238, v77);
        (*(void (__fastcall **)(struct cocos2d::CCSprite *, void **))(*(_QWORD *)v75 + 184LL))(v75, &v238);
      }
    }
    else
    {
      v60 = GJAccountManager_sharedState();
      sub_3E4F0(&Buf2, v60 + 328);
      v61 = &Buf2;
      if ( v250 > 0xF )
        v61 = (__int128 *)Buf2;
      *(_OWORD *)Buf1 = 0;
      v246 = 0;
      v247 = 0;
      do
        ++v25;
      while ( *((_BYTE *)v61 + v25) );
      sub_3C230(Buf1);
      CCTextInputNode_setString(*(_QWORD **)(a1 + 464), Buf1);
      sub_3C310(&Buf2);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 464) + 920LL))(*(_QWORD *)(a1 + 464), 0);
      v62 = cocos2d::CCSprite::createWithSpriteFrameName((const char *)&xmmword_7178B0);
      (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v62, 2);
      v63 = (const struct cocos2d::CCSize *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 464)
                                                                                            + 624LL)
                                                                              + 320LL))(*(_QWORD *)(*(_QWORD *)(a1 + 464)
                                                                                                  + 624LL));
      cocos2d::CCSize::CCSize((cocos2d::CCSize *)&v240, v63);
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v239, (float)(*(float *)&v240 * 0.5) + 8.0, 10.0);
      v65 = v64;
      v66 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 464) + 200LL))(*(_QWORD *)(a1 + 464));
      cocos2d::CCPoint::operator+(v66, &v238, v65);
      (*(void (__fastcall **)(struct cocos2d::CCSprite *, void **))(*(_QWORD *)v62 + 184LL))(v62, &v238);
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v62 + 160LL))(v62);
    }
    v79 = cocos2d::CCSprite::createWithSpriteFrameName("floorLine_001.png");
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *, _QWORD))(*(_QWORD *)a1 + 456LL))(a1, v79, 0);
    v80 = *(_QWORD *)v79;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v239, v241 * 0.5, v8);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v80 + 184))(v79, v81);
    v240 = 0x100000302LL;
    (**((void (__fastcall ***)(__int64, __int64))v79 + 43))((__int64)v79 + 344, 0x100000302LL);
    v82 = qword_905FD0;
    if ( !qword_905FD0 )
    {
      v239 = operator new(0x6E8u);
      qword_905FD0 = sub_2723A0(v239);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
      v82 = qword_905FD0;
    }
    v83 = SimplePlayer_create(*(_DWORD *)(v82 + 748) - *(_DWORD *)(v82 + 752));
    *(_QWORD *)(a1 + 472) = v83;
    (*(void (__fastcall **)(__int64, cocos2d::CCSprite *, _QWORD))(*(_QWORD *)a1 + 456LL))(a1, v83, 0);
    v84 = *(_QWORD **)(a1 + 472);
    if ( !v84[80] )
    {
      v85 = sub_3A8C80(1);
      v84[80] = v85;
      (*(void (__fastcall **)(_QWORD *, __int64))(*v84 + 464LL))(v84, v85);
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v84[80] + 336LL))(v84[80], 0);
    }
    SimplePlayer_createSpiderSprite(*(__int64 **)(a1 + 472), 1u);
    if ( !qword_905FD0 )
    {
      v239 = operator new(0x6E8u);
      qword_905FD0 = sub_2723A0(v239);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 472) + 160LL))(*(_QWORD *)(a1 + 472));
    v86 = (*(double (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 472) + 168LL))(*(_QWORD *)(a1 + 472));
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v239, 0.0, (float)((float)(*(float *)&v86 * 30.0) * 0.5) + 1.0);
    v88 = v87;
    v89 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v79 + 200LL))(v79);
    cocos2d::CCPoint::operator+(v89, &v238, v88);
    (*(void (__fastcall **)(_QWORD, void **))(**(_QWORD **)(a1 + 472) + 184LL))(*(_QWORD *)(a1 + 472), &v238);
    GJGarageLayer_updatePlayerColors(a1);
    v90 = (_DWORD *)qword_905FD0;
    if ( !qword_905FD0 )
    {
      v239 = operator new(0x6E8u);
      qword_905FD0 = sub_2723A0(v239);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
      v90 = (_DWORD *)qword_905FD0;
    }
    switch ( v90[237] )
    {
      case 1:
        v91 = (unsigned int)(v90[190] - v90[191]);
        v92 = 1;
        goto LABEL_47;
      case 2:
        v91 = (unsigned int)(v90[193] - v90[194]);
        v92 = 2;
        goto LABEL_47;
      case 3:
        v91 = (unsigned int)(v90[196] - v90[197]);
        v92 = 3;
        goto LABEL_47;
      case 4:
        v91 = (unsigned int)(v90[199] - v90[200]);
        v92 = 4;
        goto LABEL_47;
      case 5:
        v91 = (unsigned int)(v90[202] - v90[203]);
        v92 = 5;
        goto LABEL_47;
      case 6:
        v91 = (unsigned int)(v90[205] - v90[206]);
        v92 = 6;
        goto LABEL_47;
      case 7:
        v91 = (unsigned int)(v90[208] - v90[209]);
        v92 = 7;
        goto LABEL_47;
      case 8:
        v91 = (unsigned int)(v90[229] - v90[230]);
        v92 = 8;
LABEL_47:
        SimplePlayer_updatePlayerFrame(*(_QWORD *)(a1 + 472), v91, v92);
        break;
      default:
        break;
    }
    GJGarageLayer_setupIconSelect((_QWORD *)a1);
    v93 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_arrow_03_001.png");
    v94 = CCMenuItemSpriteExtra_create(v93, 0, a1, (__int64)GJGarageLayer_onBack);
    *((_DWORD *)v94 + 93) = 1070386381;
    v95 = cocos2d::CCMenu::create(v94, 0);
    (*(void (__fastcall **)(__int64, struct cocos2d::CCMenu *, __int64))(*(_QWORD *)a1 + 456LL))(a1, v95, 1);
    v96 = *(_QWORD *)v95;
    v98 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v97);
    v99 = cocos2d::CCDirector::getScreenTop(v98) - 23.0;
    v101 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v100);
    v102 = cocos2d::CCDirector::getScreenLeft(v101) + 24.0;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v239, v102, v99);
    (*(void (__fastcall **)(struct cocos2d::CCMenu *, __int64))(v96 + 184))(v95, v103);
    v104 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("shopRope_001.png");
    v105 = CCMenuItemSpriteExtra_create(v104, 0, a1, (__int64)sub_37DEF0);
    v106 = (*(__int64 (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v105 + 952LL))(v105);
    v107 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v106 + 200LL))(v106);
    cocos2d::CCPoint::operator=((char *)v105 + 504, v107);
    *((_DWORD *)v105 + 125) = 1;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v239, 0.0, -15.0);
    cocos2d::CCPoint::operator=((char *)v105 + 484, v108);
    *((_DWORD *)v105 + 123) = 1050253722;
    *((_DWORD *)v105 + 124) = 1050253722;
    (*(void (__fastcall **)(struct cocos2d::CCMenu *, cocos2d::CCObject *))(*(_QWORD *)v95 + 464LL))(v95, v105);
    v109 = *(_QWORD *)v105;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v239, (float)(v241 * 0.5) - 135.0, v242 - 25.0);
    cocos2d::CCNode::convertToNodeSpace(v95, &v238, v110);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v109 + 184))(v105, v111);
    v112 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_shardsBtn_001.png");
    v113 = CCMenuItemSpriteExtra_create(v112, 0, a1, (__int64)NewgroundsInfoLayer_onArtists);
    (*(void (__fastcall **)(struct cocos2d::CCMenu *, cocos2d::CCObject *))(*(_QWORD *)v95 + 464LL))(v95, v113);
    v114 = *(_QWORD *)v113;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v239, 30.0, v242 - 80.0);
    cocos2d::CCNode::convertToNodeSpace(v95, &v238, v115);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v114 + 184))(v113, v116);
    v117 = (unsigned int)cocos2d::CCSprite::createWithSpriteFrameName("GJ_paintBtn_001.png");
    v118 = CCMenuItemSpriteExtra_create(v117, 0, a1, (__int64)sub_37DD70);
    (*(void (__fastcall **)(struct cocos2d::CCMenu *, cocos2d::CCObject *))(*(_QWORD *)v95 + 464LL))(v95, v118);
    v119 = *(_QWORD *)v118;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v239, 30.0, v242 - 120.0);
    cocos2d::CCNode::convertToNodeSpace(v95, &v238, v120);
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v119 + 184))(v118, v121);
    v122 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_starsIcon_001.png");
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v122 + 160LL))(v122);
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *))(*(_QWORD *)a1 + 464LL))(a1, v122);
    v123 = *(_QWORD *)v122;
    v125 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v124);
    v126 = cocos2d::CCDirector::getScreenTop(v125) - 12.0;
    v128 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v127);
    v129 = (float)(cocos2d::CCDirector::getScreenRight(v128) - 18.0) - 0.0;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v239, v129, v126);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, __int64))(v123 + 184))(v122, v130);
    v131 = qword_905FE0;
    if ( !qword_905FE0 )
    {
      v238 = operator new(0x3E8u);
      qword_905FE0 = sub_2D2B40(v238);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
      v131 = qword_905FE0;
    }
    Stat = GameStatsManager_getStat(v131, "6");
    v133 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, Stat);
    CString = cocos2d::CCString::getCString(v133);
    v135 = cocos2d::CCLabelBMFont::create(CString, (const char *)&qword_6FFF68);
    (*(void (__fastcall **)(__int64, struct cocos2d::CCLabelBMFont *))(*(_QWORD *)a1 + 464LL))(a1, v135);
    v136 = *(_QWORD *)v135;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v239, 1.0, 0.5);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v136 + 288))(v135, v137);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v239, -12.0, 0.5);
    v139 = v138;
    v140 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v122 + 200LL))(v122);
    cocos2d::CCPoint::operator+(v140, &v238, v139);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, void **))(*(_QWORD *)v135 + 184LL))(v135, &v238);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v135 + 160LL))(v135);
    v141 = cocos2d::CCSprite::createWithSpriteFrameName((const char *)&xmmword_734D10);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v141 + 160LL))(v141);
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *))(*(_QWORD *)a1 + 464LL))(a1, v141);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v239, 0.0, -15.0);
    v143 = v142;
    v144 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v122 + 200LL))(v122);
    cocos2d::CCPoint::operator+(v144, &v238, v143);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, void **))(*(_QWORD *)v141 + 184LL))(v141, &v238);
    v145 = qword_905FE0;
    if ( !qword_905FE0 )
    {
      v240 = (__int64)operator new(0x3E8u);
      qword_905FE0 = sub_2D2B40(v240);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
      v145 = qword_905FE0;
    }
    v146 = GameStatsManager_getStat(v145, "28");
    v147 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v146);
    v148 = cocos2d::CCString::getCString(v147);
    v149 = cocos2d::CCLabelBMFont::create(v148, (const char *)&qword_6FFF68);
    (*(void (__fastcall **)(__int64, struct cocos2d::CCLabelBMFont *))(*(_QWORD *)a1 + 464LL))(a1, v149);
    v150 = *(_QWORD *)v149;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v239, 1.0, 0.5);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v150 + 288))(v149, v151);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v239, -12.0, 0.5);
    v153 = v152;
    v154 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v141 + 200LL))(v141);
    cocos2d::CCPoint::operator+(v154, &v238, v153);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, void **))(*(_QWORD *)v149 + 184LL))(v149, &v238);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v149 + 160LL))(v149);
    v155 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_coinsIcon_001.png");
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *))(*(_QWORD *)a1 + 464LL))(a1, v155);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v239, 0.0, -15.0);
    v157 = v156;
    v158 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v141 + 200LL))(v141);
    cocos2d::CCPoint::operator+(v158, &v238, v157);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, void **))(*(_QWORD *)v155 + 184LL))(v155, &v238);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v155 + 160LL))(v155);
    v159 = qword_905FE0;
    if ( !qword_905FE0 )
    {
      v239 = operator new(0x3E8u);
      qword_905FE0 = sub_2D2B40(v239);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
      v159 = qword_905FE0;
    }
    v160 = GameStatsManager_getStat(v159, (const char *)&word_708028);
    v161 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v160);
    v162 = cocos2d::CCString::getCString(v161);
    v163 = cocos2d::CCLabelBMFont::create(v162, (const char *)&qword_6FFF68);
    (*(void (__fastcall **)(__int64, struct cocos2d::CCLabelBMFont *))(*(_QWORD *)a1 + 464LL))(a1, v163);
    v164 = *(_QWORD *)v163;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v239, 1.0, 0.5);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v164 + 288))(v163, v165);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v239, -12.0, 0.5);
    v167 = v166;
    v168 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v155 + 200LL))(v155);
    cocos2d::CCPoint::operator+(v168, &v238, v167);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, void **))(*(_QWORD *)v163 + 184LL))(v163, &v238);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v163 + 160LL))(v163);
    v169 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_coinsIcon2_001.png");
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *))(*(_QWORD *)a1 + 464LL))(a1, v169);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v239, 0.0, -15.0);
    v171 = v170;
    v172 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v155 + 200LL))(v155);
    cocos2d::CCPoint::operator+(v172, &v238, v171);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, void **))(*(_QWORD *)v169 + 184LL))(v169, &v238);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v169 + 160LL))(v169);
    v173 = qword_905FE0;
    if ( !qword_905FE0 )
    {
      v239 = operator new(0x3E8u);
      qword_905FE0 = sub_2D2B40(v239);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
      v173 = qword_905FE0;
    }
    v174 = GameStatsManager_getStat(v173, (const char *)&word_7231BC);
    v175 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v174);
    v176 = cocos2d::CCString::getCString(v175);
    v177 = cocos2d::CCLabelBMFont::create(v176, (const char *)&qword_6FFF68);
    (*(void (__fastcall **)(__int64, struct cocos2d::CCLabelBMFont *))(*(_QWORD *)a1 + 464LL))(a1, v177);
    v178 = *(_QWORD *)v177;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v239, 1.0, 0.5);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v178 + 288))(v177, v179);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v239, -12.0, 0.5);
    v181 = v180;
    v182 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v169 + 200LL))(v169);
    cocos2d::CCPoint::operator+(v182, &v238, v181);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, void **))(*(_QWORD *)v177 + 184LL))(v177, &v238);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v177 + 160LL))(v177);
    v183 = cocos2d::CCSprite::createWithSpriteFrameName((const char *)&xmmword_716E08);
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *))(*(_QWORD *)a1 + 464LL))(a1, v183);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v183 + 160LL))(v183);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v240, 0.0, -15.0);
    v185 = v184;
    v186 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v169 + 200LL))(v169);
    cocos2d::CCPoint::operator+(v186, &v238, v185);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, void **))(*(_QWORD *)v183 + 184LL))(v183, &v238);
    v187 = qword_905FE0;
    if ( !qword_905FE0 )
    {
      v239 = operator new(0x3E8u);
      qword_905FE0 = sub_2D2B40(v239);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
      v187 = qword_905FE0;
    }
    v188 = GameStatsManager_getStat(v187, (const char *)&word_732AF4);
    v189 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v188);
    v190 = cocos2d::CCString::getCString(v189);
    v191 = cocos2d::CCLabelBMFont::create(v190, (const char *)&qword_6FFF68);
    (*(void (__fastcall **)(__int64, struct cocos2d::CCLabelBMFont *))(*(_QWORD *)a1 + 464LL))(a1, v191);
    v192 = *(_QWORD *)v191;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v239, 1.0, 0.5);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v192 + 288))(v191, v193);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v243, -12.0, 0.5);
    v195 = v194;
    v196 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v183 + 200LL))(v183);
    cocos2d::CCPoint::operator+(v196, &v238, v195);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, void **))(*(_QWORD *)v191 + 184LL))(v191, &v238);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v191 + 160LL))(v191);
    v197 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_diamondsIcon_001.png");
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *))(*(_QWORD *)a1 + 464LL))(a1, v197);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v197 + 160LL))(v197);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v244, 0.0, -15.0);
    v199 = v198;
    v200 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v183 + 200LL))(v183);
    cocos2d::CCPoint::operator+(v200, &v238, v199);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, void **))(*(_QWORD *)v197 + 184LL))(v197, &v238);
    v201 = qword_905FE0;
    if ( !qword_905FE0 )
    {
      v243 = operator new(0x3E8u);
      qword_905FE0 = sub_2D2B40(v243);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
      v201 = qword_905FE0;
    }
    v202 = GameStatsManager_getStat(v201, "13");
    v203 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v202);
    v204 = cocos2d::CCString::getCString(v203);
    v205 = cocos2d::CCLabelBMFont::create(v204, (const char *)&qword_6FFF68);
    (*(void (__fastcall **)(__int64, struct cocos2d::CCLabelBMFont *))(*(_QWORD *)a1 + 464LL))(a1, v205);
    v206 = *(_QWORD *)v205;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v243, 1.0, 0.5);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v206 + 288))(v205, v207);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v239, -12.0, 0.5);
    v209 = v208;
    v210 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v197 + 200LL))(v197);
    cocos2d::CCPoint::operator+(v210, &v238, v209);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, void **))(*(_QWORD *)v205 + 184LL))(v205, &v238);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v205 + 160LL))(v205);
    v211 = cocos2d::CCSprite::createWithSpriteFrameName("currencyDiamondIcon_001.png");
    (*(void (__fastcall **)(__int64, struct cocos2d::CCSprite *))(*(_QWORD *)a1 + 464LL))(a1, v211);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v211 + 160LL))(v211);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v240, 0.0, -15.0);
    v213 = v212;
    v214 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v197 + 200LL))(v197);
    cocos2d::CCPoint::operator+(v214, &v238, v213);
    (*(void (__fastcall **)(struct cocos2d::CCSprite *, void **))(*(_QWORD *)v211 + 184LL))(v211, &v238);
    v215 = qword_905FE0;
    if ( !qword_905FE0 )
    {
      v244 = operator new(0x3E8u);
      qword_905FE0 = sub_2D2B40(v244);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FE0 + 72LL))(qword_905FE0);
      v215 = qword_905FE0;
    }
    v216 = GameStatsManager_getStat(v215, (const char *)&word_755560);
    v217 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, v216);
    v218 = cocos2d::CCString::getCString(v217);
    v219 = cocos2d::CCLabelBMFont::create(v218, (const char *)&qword_6FFF68);
    (*(void (__fastcall **)(__int64, struct cocos2d::CCLabelBMFont *))(*(_QWORD *)a1 + 464LL))(a1, v219);
    v220 = *(_QWORD *)v219;
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v244, 1.0, 0.5);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, __int64))(v220 + 288))(v219, v221);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v243, -12.0, 0.5);
    v223 = v222;
    v224 = (*(__int64 (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v211 + 200LL))(v211);
    cocos2d::CCPoint::operator+(v224, &v238, v223);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *, void **))(*(_QWORD *)v219 + 184LL))(v219, &v238);
    (*(void (__fastcall **)(struct cocos2d::CCLabelBMFont *))(*(_QWORD *)v219 + 160LL))(v219);
    v225 = qword_905FD0;
    if ( !qword_905FD0 )
    {
      v244 = operator new(0x6E8u);
      qword_905FD0 = sub_2723A0(v244);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
      v225 = qword_905FD0;
    }
    if ( *(_DWORD *)(v225 + 692) != *(_DWORD *)(v225 + 696) )
    {
      v226 = cocos2d::CCSprite::createWithSpriteFrameName("GJ_infoIcon_001.png");
      v227 = (int)v226;
      (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v226 + 160LL))(v226);
      v228 = CCMenuItemSpriteExtra_create(v227, 0, a1, (__int64)GJGarageLayer_onInfo);
      *((_DWORD *)v228 + 93) = 0x40000000;
      v229 = *(_QWORD *)v228;
      v231 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v230);
      v232 = cocos2d::CCDirector::getScreenTop(v231) - 15.0;
      v234 = (cocos2d::CCDirector *)cocos2d::CCDirector::sharedDirector(v233);
      v235 = cocos2d::CCDirector::getScreenRight(v234) - 15.0;
      cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v244, v235, v232);
      cocos2d::CCNode::convertToNodeSpace(v95, &v243, v236);
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(v229 + 184))(v228, v237);
    }
    if ( *(_BYTE *)(cocos2d::CCApplication::sharedApplication(v225) + 209) )
      sub_6DEB0(a1, v94);
    return 1;
  }
  return result;
}

// Address: 0x37af20
// Method: GJGarageLayer::setupPage
// Hidden C++ exception states: #wind=5
void __fastcall GJGarageLayer_setupPage(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // r12d
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  int active; // ebx
  int v8; // r9d
  int v9; // r15d
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  int Items_0; // ebx
  __int64 v14; // rcx
  const struct cocos2d::CCPoint *v15; // rax
  cocos2d::CCNode *v16; // rax
  __int64 v17; // rdi
  cocos2d::CCArray *v18; // rcx
  unsigned int v19; // ebx
  struct cocos2d::CCObject *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rbx
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 *v29; // rcx
  __int64 v30; // r8
  __int64 *v31; // rcx
  __int64 v32; // rdx
  unsigned int v33; // r15d
  struct cocos2d::CCSprite *v34; // rbx
  __int64 v35; // rax
  cocos2d::CCObject *v36; // rdi
  __int64 v37; // rbx
  unsigned int v38; // eax
  signed int i; // edi
  struct cocos2d::CCObject *v40; // rbx
  _QWORD *v41; // rbx
  void (__fastcall *v42)(_QWORD *, struct cocos2d::CCSpriteFrame *); // rsi
  __int64 v43; // rdx
  cocos2d::CCSpriteFrameCache *v44; // rcx
  const char *v45; // rdx
  struct cocos2d::CCSpriteFrame *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // r15
  __int64 v52; // rcx
  bool GameVariable; // si
  __int64 v54; // rax
  __int64 v55; // rbx
  __int64 v56; // rdi
  __int64 v57; // rax
  void *v58; // [rsp+88h] [rbp-41h]
  _BYTE v59[8]; // [rsp+90h] [rbp-39h] BYREF
  _BYTE v60[8]; // [rsp+98h] [rbp-31h] BYREF
  char v61[8]; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v62; // [rsp+A8h] [rbp-21h]
  __int64 v63; // [rsp+B0h] [rbp-19h]
  __int64 v64; // [rsp+B8h] [rbp-11h]
  float v65; // [rsp+130h] [rbp+67h] BYREF
  float v66; // [rsp+134h] [rbp+6Bh]
  unsigned int v67; // [rsp+140h] [rbp+77h] BYREF
  void *v68; // [rsp+148h] [rbp+7Fh] BYREF

  v67 = a3;
  v3 = a2;
  *(_DWORD *)(a1 + 516) = a3;
  LOBYTE(a2) = a3 == 99;
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 544) + 336LL))(*(_QWORD *)(a1 + 544), a2);
  if ( *(_DWORD *)(a1 + 516) == 99 )
  {
    sub_37B9D0(a1);
    return;
  }
  v5 = (_DWORD *)qword_905FD0;
  if ( !qword_905FD0 )
  {
    v68 = operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v68);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
    v5 = (_DWORD *)qword_905FD0;
  }
  active = GameManager_activeIconForType(v5, v67);
  if ( !v6 )
  {
    v68 = operator new(0x6E8u);
    qword_905FD0 = sub_2723A0(v68);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
    v8 = v67;
  }
  v9 = GameManager_countForType(v6, v8);
  if ( v3 == -1 )
  {
    v10 = (int)floorf((float)((active - 1) / 36));
    v3 = 0;
    if ( v10 > 0 )
      v3 = v10;
  }
  *(_DWORD *)sub_10C920(a1 + 520, &v67) = v3;
  v12 = cocos2d::CCDirector::sharedDirector(v11);
  cocos2d::CCDirector::getWinSize(v12, &v65);
  Items_0 = GJGarageLayer_getItems_0(a1, v9, v3, v67, active);
  v14 = *(_QWORD *)(a1 + 560);
  if ( v14 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 528LL))(v14);
    *(_QWORD *)(a1 + 560) = 0;
  }
  cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v68, v65 * 0.5, (float)((float)(v66 * 0.5) - 5.0) - 60.0);
  v16 = ListButtonBar_create(Items_0, v15, 12, 3, 1084227584, 1084227584, 1103626240, 1130102784);
  *(_QWORD *)(a1 + 560) = v16;
  v17 = *((_QWORD *)v16 + 40);
  v18 = *(cocos2d::CCArray **)(v17 + 416);
  if ( v18 )
  {
    v19 = 0;
    if ( cocos2d::CCArray::count(v18) )
    {
      do
      {
        v20 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(v17 + 416), v19);
        (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)v20 + 336LL))(v20, 0);
        ++v19;
      }
      while ( v19 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(v17 + 416)) );
    }
  }
  (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 456LL))(a1, *(_QWORD *)(a1 + 560), 100);
  v21 = *(_QWORD *)(a1 + 552);
  v22 = **(_QWORD **)(a1 + 536);
  if ( v21 )
  {
    v23 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v21 + 200LL))(*(_QWORD *)(a1 + 552));
    v24 = *(_QWORD *)(a1 + 536);
    v25 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 552) + 504LL))(*(_QWORD *)(a1 + 552));
    cocos2d::CCNode::convertToWorldSpace(v25, &v68, v23);
    (*(void (__fastcall **)(__int64, __int64))(v22 + 184))(v24, v26);
    LOBYTE(v27) = 1;
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 536) + 336LL))(*(_QWORD *)(a1 + 536), v27);
  }
  else
  {
    (*(void (**)(void))(v22 + 336))();
  }
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 568) + 936LL))(*(_QWORD *)(a1 + 568), v9 > 36);
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 568) + 336LL))(*(_QWORD *)(a1 + 568), v9 > 36);
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 576) + 936LL))(*(_QWORD *)(a1 + 576), v9 > 36);
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a1 + 576) + 336LL))(*(_QWORD *)(a1 + 576), v9 > 36);
  v29 = *(__int64 **)(a1 + 584);
  v30 = *v29;
  if ( v9 <= 36 )
  {
    (*(void (__fastcall **)(__int64 *, _QWORD))(v30 + 1040))(v29, 0);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 584) + 336LL))(*(_QWORD *)(a1 + 584), 0);
  }
  else
  {
    LOBYTE(v28) = 1;
    (*(void (__fastcall **)(__int64 *, __int64))(v30 + 1040))(v29, v28);
    v31 = *(__int64 **)(a1 + 584);
    v32 = *v31;
    LOBYTE(v32) = 1;
    (*(void (__fastcall **)(__int64 *, __int64))(*v31 + 336))(v31, v32);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 584) + 568LL))(*(_QWORD *)(a1 + 584));
    v33 = (int)(float)(floorf((float)(v9 / 36)) + 1.0);
    if ( v33 > cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 488)) )
    {
      while ( 1 )
      {
        v34 = cocos2d::CCSprite::createWithSpriteFrameName("gj_navDotBtn_on_001.png");
        (*(void (__fastcall **)(struct cocos2d::CCSprite *))(*(_QWORD *)v34 + 160LL))(v34);
        v68 = operator new(0x208u);
        v35 = CCMenuItemSpriteExtra_CCMenuItemSpriteExtra((__int64)v68);
        v36 = (cocos2d::CCObject *)v35;
        if ( !v35 )
          goto LABEL_24;
        if ( !(unsigned __int8)sub_47940(v35, (_DWORD)v34, 0, a1, (__int64)GJGarageLayer_onNavigate) )
          break;
        cocos2d::CCObject::autorelease(v36);
LABEL_25:
        v37 = *(_QWORD *)v36;
        v38 = cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 488));
        (*(void (__fastcall **)(cocos2d::CCObject *, _QWORD))(v37 + 64))(v36, v38);
        cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 488), v36);
        *((_DWORD *)v36 + 93) = 1066192077;
        if ( v33 <= cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 488)) )
          goto LABEL_26;
      }
      (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v36 + 8LL))(v36, 1);
LABEL_24:
      v36 = 0;
      goto LABEL_25;
    }
LABEL_26:
    for ( i = 0; i < (int)v33; ++i )
    {
      v40 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 488), i);
      (*(void (__fastcall **)(_QWORD, struct cocos2d::CCObject *))(**(_QWORD **)(a1 + 584) + 464LL))(
        *(_QWORD *)(a1 + 584),
        v40);
      v41 = (_QWORD *)(*(__int64 (__fastcall **)(struct cocos2d::CCObject *))(*(_QWORD *)v40 + 952LL))(v40);
      v42 = *(void (__fastcall **)(_QWORD *, struct cocos2d::CCSpriteFrame *))(*v41 + 1008LL);
      v44 = (cocos2d::CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(*v41, v43);
      v45 = "gj_navDotBtn_on_001.png";
      if ( i != v3 )
        v45 = "gj_navDotBtn_off_001.png";
      v46 = cocos2d::CCSpriteFrameCache::spriteFrameByName(v44, v45);
      v42(v41, v46);
    }
    cocos2d::CCMenu::alignItemsHorizontallyWithPadding(*(cocos2d::CCMenu **)(a1 + 584), 6.0);
  }
  if ( v67 == 98 )
  {
    v51 = cocos2d::CCMenu::create(v48, v47, v49, v50);
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 560) + 456LL))(*(_QWORD *)(a1 + 560), v51, 1);
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)&v68, 8.0, 0.0);
    v52 = qword_905FD0;
    if ( !qword_905FD0 )
    {
      v58 = operator new(0x6E8u);
      qword_905FD0 = sub_2723A0(v58);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0);
      v52 = qword_905FD0;
    }
    GameVariable = GameManager_getGameVariable(v52, "0153");
    v62 = 0;
    v63 = 7;
    v64 = 15;
    strcpy(v61, "Explode");
    cocos2d::CCPoint::CCPoint((cocos2d::CCPoint *)v59, (const struct cocos2d::CCPoint *)&v68);
    v55 = v54;
    v56 = *(_QWORD *)(a1 + 560);
    cocos2d::CCPoint::CCPoint(
      (cocos2d::CCPoint *)v60,
      (float)(v65 * 0.5) - 165.0,
      (float)((float)((float)(v66 * 0.5) - 5.0) - 60.0) - 30.0);
    sub_6D440(
      (unsigned int)v61,
      (unsigned int)sub_37C9B0,
      !GameVariable,
      v51,
      v57,
      v56,
      v56,
      1058642330,
      1056964608,
      1117782016,
      v55,
      (__int64)"goldFont.fnt",
      0,
      0,
      0);
  }
}
