#include <Geode/binding/SetupSmartTemplateLayer.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/10] Address: 0x1629d0
// Method: SetupSmartTemplateLayer::textChanged
__int64 __fastcall SetupSmartTemplateLayer_textChanged(__int64 a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
}

// [2/10] Address: 0x194450
// Method: SetupSmartTemplateLayer::onClick
// Hidden C++ exception states: #wind=3
__int64 __fastcall SetupSmartTemplateLayer_onClick(__int64 *a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 i; // rdi
  cocos2d::CCObject *v5; // rcx
  cocos2d::CCString *v6; // rax
  const char *CString; // rax
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v14; // [rsp+30h] [rbp-68h] BYREF
  __int64 v15; // [rsp+38h] [rbp-60h]
  __int128 v16; // [rsp+48h] [rbp-50h] BYREF
  __int64 v17; // [rsp+58h] [rbp-40h]
  __int64 v18; // [rsp+60h] [rbp-38h]
  __int128 v19; // [rsp+68h] [rbp-30h] BYREF
  __int64 v20; // [rsp+78h] [rbp-20h]
  __int64 v21; // [rsp+80h] [rbp-18h]
  void *v22; // [rsp+A8h] [rbp+10h]

  sub_193FB0(a1, &v14); /*0x19446a*/
  v2 = 0; /*0x194470*/
  v3 = v15; /*0x194472*/
  for ( i = v14; v2 < (v15 - v14) >> 2; i = v14 ) /*0x194482*/
  {
    v5 = (cocos2d::CCObject *)qword_906070; /*0x194490*/
    if ( !qword_906070 ) /*0x19449a*/
    {
      v22 = operator new(0x3D0u); /*0x1944a6*/
      qword_906070 = sub_47C350(v22); /*0x1944b7*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_906070 + 72LL))(qword_906070); /*0x1944c8*/
      v5 = (cocos2d::CCObject *)qword_906070; /*0x1944ca*/
    }
    MusicDownloadManager_downloadSFX(v5, *(_DWORD *)(i + 4 * v2++)); /*0x1944d4*/
    v3 = v15; /*0x1944dc*/
  }
  v6 = cocos2d::CCString::createWithFormat("Downloading %i SFX", (v3 - i) >> 2); /*0x194503*/
  CString = cocos2d::CCString::getCString(v6); /*0x19450c*/
  v16 = 0; /*0x194522*/
  v17 = 0; /*0x194527*/
  v18 = 15; /*0x194530*/
  LOBYTE(v16) = 0; /*0x194539*/
  v19 = 0; /*0x19453e*/
  v20 = 0; /*0x194543*/
  v21 = 0; /*0x19454c*/
  v8 = -1; /*0x194558*/
  do /*0x194563*/
    ++v8; /*0x194560*/
  while ( CString[v8] ); /*0x194563*/
  sub_3C230(&v19); /*0x194572*/
  v9 = *a1; /*0x194577*/
  v12 = sub_3A4CA0(&v19, v10, v11, 150, &v16); /*0x19459f*/
  (*(void (__fastcall **)(__int64 *, __int64, __int64))(v9 + 456))(a1, v12, 100); /*0x1945b0*/
  return sub_685C0(&v14); /*0x1945c1*/
}

// [3/10] Address: 0x5e7190
// Method: SetupSmartTemplateLayer::~SetupSmartTemplateLayer
_QWORD *__fastcall SetupSmartTemplateLayer__dtor_SetupSmartTemplateLayer(_QWORD *Block, char a2)
{
  cocos2d::CCObject *v4; // rcx

  *Block = &SetupSmartTemplateLayer::`vftable'; /*0x5e71a6*/
  Block[40] = &SetupSmartTemplateLayer::`vftable'; /*0x5e71b0*/
  Block[41] = &SetupSmartTemplateLayer::`vftable'; /*0x5e71be*/
  Block[42] = &SetupSmartTemplateLayer::`vftable'; /*0x5e71cc*/
  Block[43] = &SetupSmartTemplateLayer::`vftable'; /*0x5e71da*/
  Block[44] = &SetupSmartTemplateLayer::`vftable'; /*0x5e71e8*/
  Block[51] = &SetupSmartTemplateLayer::`vftable'; /*0x5e71f6*/
  Block[54] = &SetupSmartTemplateLayer::`vftable'; /*0x5e7204*/
  Block[68] = &SetupSmartTemplateLayer::`vftable'; /*0x5e7212*/
  Block[83] = &SetupSmartTemplateLayer::`vftable'; /*0x5e7220*/
  v4 = (cocos2d::CCObject *)Block[84]; /*0x5e7227*/
  if ( v4 ) /*0x5e7231*/
    cocos2d::CCObject::release(v4); /*0x5e7233*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0x5e723c*/
  if ( (a2 & 1) != 0 ) /*0x5e7246*/
    j_j_free(Block); /*0x5e7250*/
  return Block; /*0x5e7258*/
}

// [4/10] Address: 0x5e9660
// Method: SetupSmartTemplateLayer::create
// Hidden C++ exception states: #wind=1
cocos2d::CCObject *__fastcall SetupSmartTemplateLayer_create(__int64 a1)
{
  cocos2d::CCObject *v2; // rdi

  v2 = (cocos2d::CCObject *)operator new(0x2B8u); /*0x5e9677*/
  FLAlertLayer_FLAlertLayer((__int64)v2); /*0x5e9682*/
  *(_QWORD *)v2 = &SetupSmartTemplateLayer::`vftable'; /*0x5e968e*/
  *((_QWORD *)v2 + 40) = &SetupSmartTemplateLayer::`vftable'; /*0x5e9698*/
  *((_QWORD *)v2 + 41) = &SetupSmartTemplateLayer::`vftable'; /*0x5e96a6*/
  *((_QWORD *)v2 + 42) = &SetupSmartTemplateLayer::`vftable'; /*0x5e96b4*/
  *((_QWORD *)v2 + 43) = &SetupSmartTemplateLayer::`vftable'; /*0x5e96c2*/
  *((_QWORD *)v2 + 44) = &SetupSmartTemplateLayer::`vftable'; /*0x5e96d0*/
  *((_QWORD *)v2 + 51) = &SetupSmartTemplateLayer::`vftable'; /*0x5e96de*/
  *((_QWORD *)v2 + 54) = &SetupSmartTemplateLayer::`vftable'; /*0x5e96ec*/
  *((_QWORD *)v2 + 68) = &SetupSmartTemplateLayer::`vftable'; /*0x5e96fa*/
  *((_QWORD *)v2 + 83) = &SetupSmartTemplateLayer::`vftable'; /*0x5e9708*/
  *((_QWORD *)v2 + 84) = 0; /*0x5e970f*/
  *((_QWORD *)v2 + 85) = 0; /*0x5e971a*/
  *((_QWORD *)v2 + 86) = 0; /*0x5e9725*/
  if ( (unsigned __int8)sub_5E9780(v2, a1) ) /*0x5e9736*/
  {
    cocos2d::CCObject::autorelease(v2); /*0x5e9742*/
    return v2; /*0x5e9748*/
  }
  else
  {
    (*(void (__fastcall **)(cocos2d::CCObject *, __int64))(*(_QWORD *)v2 + 8LL))(v2, 1); /*0x5e9765*/
    return 0; /*0x5e9768*/
  }
}

// [5/10] Address: 0x5ea3b0
// Method: SetupSmartTemplateLayer::FLAlert_Clicked
// Hidden C++ exception states: #wind=1
__int64 __fastcall SetupSmartTemplateLayer_FLAlert_Clicked(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int64 v6; // rcx
  struct cocos2d::CCObject *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  void *v11; // [rsp+38h] [rbp+10h]

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2); /*0x5ea3c7*/
  if ( (_DWORD)result == 5 && a3 ) /*0x5ea3d5*/
  {
    v6 = *(_QWORD *)&qword_905FB0; /*0x5ea3db*/
    if ( !*(_QWORD *)&qword_905FB0 ) /*0x5ea3e5*/
    {
      v11 = operator new(0x690u); /*0x5ea3f1*/
      *(_QWORD *)&qword_905FB0 = sub_214250(v11); /*0x5ea3ff*/
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0x5ea410*/
      v6 = *(_QWORD *)&qword_905FB0; /*0x5ea412*/
    }
    v7 = *(struct cocos2d::CCObject **)(a1 + 8); /*0x5ea419*/
    if ( v7 ) /*0x5ea420*/
    {
      v8 = *(_QWORD *)(v6 + 1664); /*0x5ea422*/
      if ( v8 ) /*0x5ea42c*/
      {
        if ( *(_DWORD *)(v8 + 200) == *((_DWORD *)v7 + 50) ) /*0x5ea43b*/
          *(_QWORD *)(v6 + 1664) = 0; /*0x5ea43d*/
      }
      cocos2d::CCArray::removeObject(*(cocos2d::CCArray **)(v6 + 1656), v7, 1); /*0x5ea452*/
    }
    SetupSmartTemplateLayer_onClose(a1 - 664); /*0x5ea45f*/
    v9 = GJSearchObject_create(101); /*0x5ea469*/
    *(_BYTE *)(v9 + 462) = 1; /*0x5ea46e*/
    v10 = sub_3DE4D0(v9); /*0x5ea478*/
    return sub_3E7B80(v10); /*0x5ea480*/
  }
  return result; /*0x5ea485*/
}

// [6/10] Address: 0x5ea490
// Method: SetupSmartTemplateLayer::textInputClosed
// Hidden C++ exception states: #wind=3
void __fastcall SetupSmartTemplateLayer_textInputClosed(__int64 a1, _QWORD *a2)
{
  int v4; // esi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v12; // r15
  char *v13; // rsi
  void **v14; // r14
  size_t v15; // rdi
  size_t v16; // rbx
  unsigned __int64 v17; // rcx
  void **v18; // rdx
  char *v19; // rax
  void *v20; // rcx
  void *v21[2]; // [rsp+30h] [rbp-49h] BYREF
  size_t v22; // [rsp+40h] [rbp-39h]
  __int64 v23; // [rsp+48h] [rbp-31h]
  void **v24; // [rsp+50h] [rbp-29h]
  void *Src[2]; // [rsp+58h] [rbp-21h] BYREF
  size_t Size; // [rsp+68h] [rbp-11h]
  unsigned __int64 v27; // [rsp+70h] [rbp-9h]
  void *Block[2]; // [rsp+78h] [rbp-1h] BYREF
  __int128 v29; // [rsp+88h] [rbp+Fh]

  v4 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2); /*0x5ea4cc*/
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x5ea4df*/
  *(_OWORD *)Block = 0; /*0x5ea4e5*/
  v29 = 0; /*0x5ea4ec*/
  v6 = -1; /*0x5ea4f1*/
  v7 = -1; /*0x5ea4f8*/
  do /*0x5ea503*/
    ++v7; /*0x5ea500*/
  while ( *(_BYTE *)(v5 + v7) ); /*0x5ea503*/
  sub_3C230(Block); /*0x5ea510*/
  if ( !v4 ) /*0x5ea518*/
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x5ea52f*/
    *(_OWORD *)Src = 0; /*0x5ea535*/
    Size = 0; /*0x5ea539*/
    v27 = 0; /*0x5ea53d*/
    do /*0x5ea544*/
      ++v6; /*0x5ea541*/
    while ( *(_BYTE *)(v8 + v6) ); /*0x5ea544*/
    sub_3C230(Src); /*0x5ea554*/
    v12 = v27; /*0x5ea55a*/
    v13 = (char *)Src[0]; /*0x5ea55e*/
    if ( *(_QWORD *)(a1 + 128) ) /*0x5ea562*/
    {
      *(_OWORD *)v21 = 0; /*0x5ea573*/
      v22 = 0; /*0x5ea577*/
      v23 = 0; /*0x5ea57b*/
      v14 = Src; /*0x5ea57f*/
      if ( v27 > 0xF ) /*0x5ea587*/
        v14 = (void **)Src[0]; /*0x5ea587*/
      v15 = 0x7FFFFFFFFFFFFFFFLL; /*0x5ea58b*/
      v16 = Size; /*0x5ea595*/
      if ( Size > 0x7FFFFFFFFFFFFFFFLL ) /*0x5ea59c*/
        sub_8D90(v10, v9, v11); /*0x5ea705*/
      if ( Size > 0xF ) /*0x5ea5a6*/
      {
        if ( (Size | 0xF) <= 0x7FFFFFFFFFFFFFFFLL ) /*0x5ea5c9*/
        {
          v15 = Size | 0xF; /*0x5ea5cb*/
          if ( (Size | 0xF) < 0x16 ) /*0x5ea5d6*/
            v15 = 22; /*0x5ea5d6*/
        }
        v21[0] = (void *)sub_3C460(v15 + 1); /*0x5ea5e3*/
        v22 = v16; /*0x5ea5e7*/
        v23 = v15; /*0x5ea5eb*/
        memcpy(v21[0], v14, v16 + 1); /*0x5ea5f9*/
        v17 = v15; /*0x5ea5fe*/
      }
      else
      {
        v22 = Size; /*0x5ea5a8*/
        v17 = 15; /*0x5ea5ac*/
        v23 = 15; /*0x5ea5b1*/
        *(_OWORD *)v21 = *(_OWORD *)v14; /*0x5ea5b9*/
      }
      v24 = v21; /*0x5ea60a*/
      if ( (void **)(*(_QWORD *)(a1 + 128) + 136LL) != v21 ) /*0x5ea622*/
      {
        v18 = v21; /*0x5ea624*/
        if ( v17 > 0xF ) /*0x5ea62c*/
          v18 = (void **)v21[0]; /*0x5ea62c*/
        sub_3F5A0((void *)(*(_QWORD *)(a1 + 128) + 136LL), v18, v16); /*0x5ea637*/
      }
      sub_3C310(v21); /*0x5ea641*/
    }
    if ( v12 > 0xF ) /*0x5ea64b*/
    {
      v19 = v13; /*0x5ea651*/
      if ( v12 + 1 >= 0x1000 ) /*0x5ea65b*/
      {
        v13 = (char *)*((_QWORD *)v13 - 1); /*0x5ea661*/
        if ( (unsigned __int64)(v19 - v13 - 8) > 0x1F ) /*0x5ea670*/
          invoke_watson(0, 0, 0, 0, 0); /*0x5ea681*/
      }
      j_j_free(v13); /*0x5ea68b*/
    }
  }
  if ( *((_QWORD *)&v29 + 1) > 0xFu ) /*0x5ea699*/
  {
    v20 = Block[0]; /*0x5ea69e*/
    if ( (unsigned __int64)(*((_QWORD *)&v29 + 1) + 1LL) >= 0x1000 ) /*0x5ea6ac*/
    {
      v20 = (void *)*((_QWORD *)Block[0] - 1); /*0x5ea6b2*/
      if ( (unsigned __int64)((char *)Block[0] - (char *)v20 - 8) > 0x1F ) /*0x5ea6c1*/
        invoke_watson(0, 0, 0, 0, 0); /*0x5ea6d2*/
    }
    j_j_free(v20); /*0x5ea6d9*/
  }
}

// [7/10] Address: 0x5ea710
// Method: SetupSmartTemplateLayer::textInputOpened
// Hidden C++ exception states: #wind=1
void __fastcall SetupSmartTemplateLayer_textInputOpened(__int64 a1, _QWORD *a2)
{
  int v3; // esi
  __int64 v4; // rax
  __int64 v5; // r8
  unsigned __int64 v6; // rdi
  char *v7; // rbx
  void **v8; // rcx
  size_t v9; // rsi
  size_t v10; // r8
  char *v11; // rax
  __int128 Buf2; // [rsp+30h] [rbp-68h] BYREF
  __int64 v13; // [rsp+40h] [rbp-58h]
  __int64 v14; // [rsp+48h] [rbp-50h]
  void *Buf1[2]; // [rsp+58h] [rbp-40h] BYREF
  size_t v16; // [rsp+68h] [rbp-30h]
  unsigned __int64 v17; // [rsp+70h] [rbp-28h]

  v3 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2); /*0x5ea742*/
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0x5ea75d*/
  *(_OWORD *)Buf1 = 0; /*0x5ea762*/
  v16 = 0; /*0x5ea767*/
  v17 = 0; /*0x5ea76c*/
  v5 = -1; /*0x5ea771*/
  do /*0x5ea783*/
    ++v5; /*0x5ea780*/
  while ( *(_BYTE *)(v4 + v5) ); /*0x5ea783*/
  sub_3C230(Buf1); /*0x5ea791*/
  v6 = v17; /*0x5ea797*/
  v7 = (char *)Buf1[0]; /*0x5ea79c*/
  if ( !v3 ) /*0x5ea7a3*/
  {
    Buf2 = 0; /*0x5ea7a8*/
    v13 = 0; /*0x5ea7ad*/
    v14 = 15; /*0x5ea7b2*/
    LOBYTE(Buf2) = 0; /*0x5ea7bb*/
    v8 = Buf1; /*0x5ea7c0*/
    if ( v17 > 0xF ) /*0x5ea7c9*/
      v8 = (void **)Buf1[0]; /*0x5ea7c9*/
    v9 = v16; /*0x5ea7cd*/
    v10 = v16; /*0x5ea7d2*/
    if ( v16 ) /*0x5ea7d8*/
      v10 = 0; /*0x5ea7d8*/
    if ( !memcmp(v8, &Buf2, v10) && !v9 ) /*0x5ea7ed*/
    {
      Buf2 = 0; /*0x5ea7f2*/
      v13 = 1; /*0x5ea7f7*/
      v14 = 15; /*0x5ea800*/
      LOWORD(Buf2) = 32; /*0x5ea809*/
      SpriteAnimationManager_executeAnimation(a2, &Buf2); /*0x5ea818*/
    }
  }
  if ( v6 > 0xF ) /*0x5ea822*/
  {
    v11 = v7; /*0x5ea828*/
    if ( v6 + 1 >= 0x1000 ) /*0x5ea832*/
    {
      v7 = (char *)*((_QWORD *)v7 - 1); /*0x5ea838*/
      if ( (unsigned __int64)(v11 - v7 - 8) > 0x1F ) /*0x5ea847*/
        invoke_watson(0, 0, 0, 0, 0); /*0x5ea858*/
    }
    j_j_free(v7); /*0x5ea862*/
  }
}

// [8/10] Address: 0x5ea890
// Method: SetupSmartTemplateLayer::onBack
__int64 __fastcall SetupSmartTemplateLayer_onBack(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  SetupSmartTemplateLayer_onClose(a1); /*0x5ea894*/
  v1 = GJSearchObject_create(101); /*0x5ea89e*/
  *(_BYTE *)(v1 + 462) = 1; /*0x5ea8a6*/
  v2 = sub_3DE4D0(v1); /*0x5ea8ad*/
  return sub_3E7B80(v2); /*0x5ea8b5*/
}

// [9/10] Address: 0x5ea8c0
// Method: SetupSmartTemplateLayer::onClose
void __fastcall SetupSmartTemplateLayer_onClose(struct cocos2d::CCObject *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  cocos2d::CCString *v5; // rax
  char *CString; // rax
  size_t v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  cocos2d::CCTouchDispatcher *v11; // rax

  v3 = *((_QWORD *)a1 + 86); /*0x5ea8c9*/
  if ( v3 ) /*0x5ea8d3*/
  {
    LOBYTE(a2) = 1; /*0x5ea8d8*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 336LL))(v3, a2); /*0x5ea8da*/
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a1 + 85) + 1032LL))(*((_QWORD *)a1 + 85), 0); /*0x5ea8ec*/
  v4 = *((_QWORD *)a1 + 84); /*0x5ea8f2*/
  if ( !*(_QWORD *)(v4 + 152) ) /*0x5ea8f9*/
  {
    v5 = cocos2d::CCString::createWithFormat("SmartTemplate_%i", *(_DWORD *)(v4 + 200)); /*0x5ea910*/
    CString = (char *)cocos2d::CCString::getCString(v5); /*0x5ea919*/
    v7 = -1; /*0x5ea91f*/
    do /*0x5ea929*/
      ++v7; /*0x5ea926*/
    while ( CString[v7] ); /*0x5ea929*/
    sub_3F5A0((void *)(*((_QWORD *)a1 + 84) + 136LL), CString, v7); /*0x5ea941*/
  }
  (*(void (__fastcall **)(struct cocos2d::CCObject *, _QWORD))(*(_QWORD *)a1 + 992LL))(a1, 0); /*0x5ea94e*/
  LOBYTE(v8) = 1; /*0x5ea957*/
  (*(void (__fastcall **)(struct cocos2d::CCObject *, __int64))(*(_QWORD *)a1 + 520LL))(a1, v8); /*0x5ea95c*/
  v10 = cocos2d::CCDirector::sharedDirector(v9); /*0x5ea962*/
  v11 = (cocos2d::CCTouchDispatcher *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 144LL))(v10); /*0x5ea975*/
  cocos2d::CCTouchDispatcher::unregisterForcePrio(v11, a1); /*0x5ea982*/
}

// [10/10] Address: 0x5ea990
// Method: SetupSmartTemplateLayer::keyBackClicked
__int64 __fastcall SetupSmartTemplateLayer_keyBackClicked(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax

  SetupSmartTemplateLayer_onClose((struct cocos2d::CCObject *)(a1 - 336), a2); /*0x5ea99b*/
  v2 = GJSearchObject_create(101); /*0x5ea9a5*/
  *(_BYTE *)(v2 + 462) = 1; /*0x5ea9ad*/
  v3 = sub_3DE4D0(v2); /*0x5ea9b4*/
  return sub_3E7B80(v3); /*0x5ea9bc*/
}
