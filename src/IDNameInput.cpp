#include <Geode/binding/IDNameInput.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/10] Address: 0x3c37f0
// Method: IDNameInput::~IDNameInput
// Hidden C++ exception states: #wind=1
cocos2d::CCNode *__fastcall IDNameInput__dtor_IDNameInput(cocos2d::CCNode *Block, char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)Block = &IDNameInput::`vftable'; /*0x3c3806*/
  *((_QWORD *)Block + 40) = &IDNameInput::`vftable'; /*0x3c3810*/
  *((_QWORD *)Block + 41) = &IDNameInput::`vftable'; /*0x3c381e*/
  *((_QWORD *)Block + 42) = &IDNameInput::`vftable'; /*0x3c382c*/
  v4 = *((_QWORD *)Block + 55); /*0x3c3833*/
  if ( v4 ) /*0x3c383d*/
  {
    *((_QWORD *)Block + 55) = 0; /*0x3c383f*/
    (**(void (__fastcall ***)(__int64))(v4 + 336))(v4 + 336); /*0x3c3854*/
  }
  sub_3C310((char *)Block + 464); /*0x3c385d*/
  cocos2d::CCNode::~CCNode(Block); /*0x3c3865*/
  if ( (a2 & 1) != 0 ) /*0x3c3870*/
    j_j_free(Block); /*0x3c387a*/
  return Block; /*0x3c3882*/
}

// [2/10] Address: 0x3c5b80
// Method: IDNameInput::idNameBrowserClosed
__int64 __fastcall IDNameInput_idNameBrowserClosed(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 i; // rbx
  __int64 v9; // rcx

  v3 = a1 - 328; /*0x3c5b86*/
  if ( a3 > 0 ) /*0x3c5b90*/
    result = sub_3C5C10(a1 - 328, (unsigned int)a3); /*0x3c5b98*/
  v5 = *(_QWORD *)(v3 + 344); /*0x3c5b9d*/
  if ( !v5 ) /*0x3c5ba7*/
    return sub_3C5CB0(v3); /*0x3c5ba7*/
  v6 = *(_QWORD *)(v5 + 984); /*0x3c5ba9*/
  if ( !v6 ) /*0x3c5bb3*/
    return sub_3C5CB0(v3); /*0x3c5bfa*/
  v7 = *(_QWORD *)(v6 + 56); /*0x3c5bb5*/
  if ( v7 ) /*0x3c5bbc*/
  {
    for ( i = *(_QWORD *)(v7 + 288); ; i = *(_QWORD *)(i + 288) ) /*0x3c5bbe*/
    {
      v9 = *(_QWORD *)(v7 + 264); /*0x3c5bd0*/
      if ( v9 ) /*0x3c5bda*/
        result = sub_3C5CB0(v9); /*0x3c5bdc*/
      v7 = i; /*0x3c5be1*/
      if ( !i ) /*0x3c5be7*/
        break; /*0x3c5be7*/
    }
  }
  return result; /*0x3c5bf5*/
}

// [3/10] Address: 0x3c7120
// Method: IDNameInput::textChanged
// Hidden C++ exception states: #wind=1
void __fastcall IDNameInput_textChanged(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  char *v8; // rdi
  size_t v9; // r8
  __int64 v10; // rcx
  void **v11; // rax
  void **v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rcx
  void (__fastcall ***v15)(_QWORD, __int64, size_t); // rcx
  char *v16; // rax
  void *Block[2]; // [rsp+38h] [rbp-50h] BYREF
  size_t Size; // [rsp+48h] [rbp-40h]
  unsigned __int64 v19; // [rsp+50h] [rbp-38h]

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a2 + 600) + 600LL) + 8LL))(*(_QWORD *)(a2 + 600) + 600LL); /*0x3c7159*/
  *(_OWORD *)Block = 0; /*0x3c715f*/
  Size = 0; /*0x3c7164*/
  v19 = 0; /*0x3c7169*/
  v5 = -1; /*0x3c716e*/
  do /*0x3c7178*/
    ++v5; /*0x3c7175*/
  while ( *(_BYTE *)(v4 + v5) ); /*0x3c7178*/
  sub_3C230(Block); /*0x3c7186*/
  v7 = v19; /*0x3c718c*/
  v8 = (char *)Block[0]; /*0x3c7191*/
  v9 = Size; /*0x3c7196*/
  if ( *(_BYTE *)(a2 + 468) && Size ) /*0x3c71ae*/
  {
    v10 = 0; /*0x3c71b8*/
    while ( 1 ) /*0x3c71c0*/
    {
      v11 = Block; /*0x3c71c0*/
      if ( v19 > 0xF ) /*0x3c71c9*/
        v11 = (void **)Block[0]; /*0x3c71c9*/
      v6 = *((unsigned __int8 *)v11 + v10); /*0x3c71cd*/
      if ( v10 || (_BYTE)v6 != 45 ) /*0x3c71d9*/
      {
        LOBYTE(v6) = v6 - 48; /*0x3c71db*/
        if ( (unsigned __int8)v6 > 9u ) /*0x3c71e1*/
          break; /*0x3c71e1*/
      }
      if ( ++v10 >= Size ) /*0x3c71ed*/
        goto LABEL_12; /*0x3c71ed*/
    }
    v13 = a1 - 320; /*0x3c729d*/
    sub_3C6090(a1 - 320); /*0x3c72a7*/
  }
  else
  {
LABEL_12:
    if ( (void **)(a1 + 144) != Block ) /*0x3c71fe*/
    {
      v12 = Block; /*0x3c7200*/
      if ( v19 > 0xF ) /*0x3c7209*/
        v12 = (void **)Block[0]; /*0x3c7209*/
      sub_3F5A0((void *)(a1 + 144), v12, Size); /*0x3c720d*/
      v7 = v19; /*0x3c7212*/
      v8 = (char *)Block[0]; /*0x3c7217*/
    }
    v13 = a1 - 320; /*0x3c721c*/
    v14 = *(_QWORD *)(a1 - 320 + 440); /*0x3c7223*/
    if ( v14 ) /*0x3c722d*/
    {
      *(_QWORD *)(v13 + 440) = 0; /*0x3c722f*/
      (**(void (__fastcall ***)(__int64, __int64, size_t))(v14 + 336))(v14 + 336, v6, v9); /*0x3c7240*/
    }
    v15 = *(void (__fastcall ****)(_QWORD, __int64, size_t))(a1 + 48); /*0x3c7242*/
    if ( v15 ) /*0x3c7249*/
      (**v15)(v15, a2, v9); /*0x3c7251*/
  }
  sub_3C5CB0(v13); /*0x3c7256*/
  if ( v7 > 0xF ) /*0x3c7260*/
  {
    v16 = v8; /*0x3c7266*/
    if ( v7 + 1 >= 0x1000 ) /*0x3c7270*/
    {
      v8 = (char *)*((_QWORD *)v8 - 1); /*0x3c7276*/
      if ( (unsigned __int64)(v16 - v8 - 8) > 0x1F ) /*0x3c7285*/
        invoke_watson(0, 0, 0, 0, 0); /*0x3c7296*/
    }
    j_j_free(v8); /*0x3c72b1*/
  }
}

// [4/10] Address: 0x3c72e0
// Method: IDNameInput::textInputClosed
// Hidden C++ exception states: #wind=1
void __fastcall IDNameInput_textInputClosed(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rbp
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r8
  const void *v8; // rdx
  void **v9; // rcx
  void **v10; // rdi
  unsigned __int64 v11; // rsi
  size_t v12; // rbx
  __int64 v13; // rcx
  void **v14; // rax
  char v15; // dl
  __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  __int64 v19; // rcx
  void **v20; // rax
  _BYTE v21[32]; // [rsp+38h] [rbp-70h] BYREF
  void *Buf1[2]; // [rsp+58h] [rbp-50h] BYREF
  size_t Size; // [rsp+68h] [rbp-40h]
  unsigned __int64 v24; // [rsp+70h] [rbp-38h]

  v4 = a1 - 40; /*0x3c7311*/
  v5 = a1[15]; /*0x3c7318*/
  if ( v5 ) /*0x3c7322*/
  {
    v4[55] = 0; /*0x3c7324*/
    (**(void (__fastcall ***)(__int64))(v5 + 336))(v5 + 336); /*0x3c7335*/
  }
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a2 + 600) + 600LL) + 8LL))(*(_QWORD *)(a2 + 600) + 600LL); /*0x3c7348*/
  *(_OWORD *)Buf1 = 0; /*0x3c734e*/
  Size = 0; /*0x3c7353*/
  v24 = 0; /*0x3c7358*/
  v7 = -1; /*0x3c735d*/
  do /*0x3c7367*/
    ++v7; /*0x3c7364*/
  while ( *(_BYTE *)(v6 + v7) ); /*0x3c7367*/
  sub_3C230(Buf1); /*0x3c7375*/
  v8 = a1 + 18; /*0x3c737b*/
  if ( a1[21] > 0xFu ) /*0x3c738a*/
    v8 = (const void *)a1[18]; /*0x3c738c*/
  v9 = Buf1; /*0x3c7393*/
  v10 = (void **)Buf1[0]; /*0x3c7398*/
  v11 = v24; /*0x3c739d*/
  if ( v24 > 0xF ) /*0x3c73a6*/
    v9 = (void **)Buf1[0]; /*0x3c73a6*/
  v12 = Size; /*0x3c73aa*/
  if ( (Size != a1[20] || Size && memcmp(v9, v8, Size)) && v12 ) /*0x3c73d4*/
  {
    v13 = 0; /*0x3c73da*/
    while ( 1 ) /*0x3c73e0*/
    {
      v14 = Buf1; /*0x3c73e0*/
      if ( v11 > 0xF ) /*0x3c73e9*/
        v14 = v10; /*0x3c73e9*/
      v15 = *((_BYTE *)v14 + v13); /*0x3c73ed*/
      if ( (v13 || v15 != 45) && (unsigned __int8)(v15 - 48) > 9u ) /*0x3c7401*/
        break; /*0x3c7401*/
      if ( ++v13 >= v12 ) /*0x3c7409*/
        goto LABEL_26; /*0x3c7409*/
    }
    if ( !(unsigned __int8)sub_3C6E70(v4) ) /*0x3c7410*/
    {
      v16 = v4[48]; /*0x3c7419*/
      if ( v16 ) /*0x3c7423*/
      {
        *(_QWORD *)(v16 + 608) = 0; /*0x3c7425*/
        v17 = (_QWORD *)sub_3E4F0(v21, v4 + 58); /*0x3c7438*/
        CCTextInputNode_setString((_QWORD *)v4[48], v17); /*0x3c7447*/
        v18 = a1; /*0x3c744c*/
        if ( !v4 ) /*0x3c7452*/
          v18 = 0; /*0x3c7452*/
        *(_QWORD *)(v4[48] + 608LL) = v18; /*0x3c745d*/
      }
    }
  }
LABEL_26:
  v19 = a1[6]; /*0x3c7464*/
  if ( v19 ) /*0x3c746b*/
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 16LL))(v19, a2); /*0x3c7473*/
  sub_3C5CB0(v4); /*0x3c7479*/
  if ( v11 > 0xF ) /*0x3c7483*/
  {
    v20 = v10; /*0x3c7489*/
    if ( v11 + 1 >= 0x1000 ) /*0x3c7493*/
    {
      v10 = (void **)*(v10 - 1); /*0x3c7499*/
      if ( (unsigned __int64)((char *)v20 - (char *)v10 - 8) > 0x1F ) /*0x3c74a8*/
        invoke_watson(0, 0, 0, 0, 0); /*0x3c74b9*/
    }
    j_j_free(v10); /*0x3c74c3*/
  }
}

// [5/10] Address: 0x3c7500
// Method: IDNameInput::textInputOpened
__int64 __fastcall IDNameInput_textInputOpened(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 48); /*0x3c7500*/
  if ( v1 ) /*0x3c7507*/
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1); /*0x3c750c*/
  return result; /*0x3c7510*/
}

// [6/10] Address: 0x3c7520
// Method: IDNameInput::textInputShouldOffset
__int64 __fastcall IDNameInput_textInputShouldOffset(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 48); /*0x3c7520*/
  if ( v1 ) /*0x3c7527*/
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1); /*0x3c752c*/
  return result; /*0x3c7530*/
}

// [7/10] Address: 0x3c7540
// Method: IDNameInput::textInputReturn
__int64 __fastcall IDNameInput_textInputReturn(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 48); /*0x3c7540*/
  if ( v1 ) /*0x3c7547*/
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(v1); /*0x3c754c*/
  return result; /*0x3c7550*/
}

// [8/10] Address: 0x3c7560
// Method: IDNameInput::allowTextInput
char __fastcall IDNameInput_allowTextInput(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 48); /*0x3c7560*/
  if ( v1 ) /*0x3c7567*/
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 40LL))(v1); /*0x3c756f*/
  else
    return 1; /*0x3c7569*/
}

// [9/10] Address: 0x3c7580
// Method: IDNameInput::enterPressed
__int64 __fastcall IDNameInput_enterPressed(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 48); /*0x3c7580*/
  if ( v1 ) /*0x3c7587*/
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 48LL))(v1); /*0x3c758c*/
  return result; /*0x3c7590*/
}

// [10/10] Address: 0x3c7680
// Method: IDNameInput::dropdownListPopupClosed
void __fastcall IDNameInput_dropdownListPopupClosed(__int64 a1, __int64 a2)
{
  if ( a2 == *(_QWORD *)(a1 + 104) ) /*0x3c7684*/
    *(_QWORD *)(a1 + 104) = 0; /*0x3c7686*/
}
