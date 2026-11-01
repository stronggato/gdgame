#include <Geode/binding/ThreadSearchPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/4] Address: 0xa5410
// Method: ThreadSearchPopup::keyBackClicked
__int64 __fastcall ThreadSearchPopup_keyBackClicked(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 336) + 1104LL))(a1 - 336, 0);
}

// [2/4] Address: 0xd13d0
// Method: ThreadSearchPopup::~ThreadSearchPopup
cocos2d::CCNode *__fastcall ThreadSearchPopup__dtor_ThreadSearchPopup(cocos2d::CCNode *Block, char a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  *(_QWORD *)Block = &ThreadSearchPopup::`vftable'; /*0xd13e4*/
  *((_QWORD *)Block + 40) = &ThreadSearchPopup::`vftable'; /*0xd13f0*/
  *((_QWORD *)Block + 41) = &ThreadSearchPopup::`vftable'; /*0xd13fe*/
  *((_QWORD *)Block + 42) = &ThreadSearchPopup::`vftable'; /*0xd140c*/
  *((_QWORD *)Block + 43) = &ThreadSearchPopup::`vftable'; /*0xd141a*/
  *((_QWORD *)Block + 44) = &ThreadSearchPopup::`vftable'; /*0xd1428*/
  *((_QWORD *)Block + 51) = &ThreadSearchPopup::`vftable'; /*0xd1436*/
  *((_QWORD *)Block + 54) = &ThreadSearchPopup::`vftable'; /*0xd1444*/
  *((_QWORD *)Block + 68) = &ThreadSearchPopup::`vftable'; /*0xd1452*/
  *((_QWORD *)Block + 83) = &ThreadSearchPopup::`vftable'; /*0xd1460*/
  *((_QWORD *)Block + 84) = &ThreadSearchPopup::`vftable'; /*0xd146e*/
  v4 = *((_QWORD *)Block + 126); /*0xd1475*/
  if ( v4 ) /*0xd1481*/
    *(_QWORD *)(v4 + 608) = 0; /*0xd1483*/
  v5 = *((_QWORD *)Block + 127); /*0xd148a*/
  if ( v5 ) /*0xd1494*/
    *(_QWORD *)(v5 + 608) = 0; /*0xd1496*/
  v6 = *((_QWORD *)Block + 128); /*0xd149d*/
  if ( v6 ) /*0xd14a7*/
    *(_QWORD *)(v6 + 608) = 0; /*0xd14a9*/
  v7 = *((_QWORD *)Block + 129); /*0xd14b0*/
  if ( v7 ) /*0xd14ba*/
    *(_QWORD *)(v7 + 608) = 0; /*0xd14bc*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0xd14c6*/
  if ( (a2 & 1) != 0 ) /*0xd14cf*/
    j_j_free(Block); /*0xd14d9*/
  return Block; /*0xd14e1*/
}

// [3/4] Address: 0xf9c00
// Method: ThreadSearchPopup::textChanged
void __fastcall ThreadSearchPopup_textChanged(__int64 a1, _QWORD *a2)
{
  char v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r8
  const char *v8; // rcx
  char v9; // r15
  char *v10; // rcx
  cocos2d::CCString *v11; // rax
  const char *CString; // rax
  __int64 v13; // rax
  const char *v14; // rcx
  char v15; // bl
  char *v16; // rcx
  char *String[2]; // [rsp+38h] [rbp-28h] BYREF
  __int128 v18; // [rsp+48h] [rbp-18h]

  v4 = 0; /*0xf9c30*/
  v5 = -1; /*0xf9c33*/
  if ( a2 != *(_QWORD **)(a1 + 472) ) /*0xf9c45*/
    goto LABEL_8; /*0xf9c45*/
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0xf9c58*/
  *(_OWORD *)String = 0; /*0xf9c61*/
  v7 = -1; /*0xf9c65*/
  v18 = 0; /*0xf9c68*/
  do /*0xf9c73*/
    ++v7; /*0xf9c70*/
  while ( *(_BYTE *)(v6 + v7) ); /*0xf9c73*/
  sub_3C230(String); /*0xf9c80*/
  v8 = (const char *)String; /*0xf9c8a*/
  v4 = 5; /*0xf9c8e*/
  if ( *((_QWORD *)&v18 + 1) > 0xFu ) /*0xf9c94*/
    v8 = String[0]; /*0xf9c94*/
  if ( atoi(v8) > *(_DWORD *)(a1 + 496) ) /*0xf9ca5*/
    v9 = 1; /*0xf9ca7*/
  else
LABEL_8:
    v9 = 0; /*0xf9cac*/
  if ( (v4 & 1) != 0 ) /*0xf9cb3*/
  {
    v4 &= ~1u; /*0xf9cb9*/
    if ( *((_QWORD *)&v18 + 1) > 0xFu ) /*0xf9cc1*/
    {
      v10 = String[0]; /*0xf9cc3*/
      if ( (unsigned __int64)(*((_QWORD *)&v18 + 1) + 1LL) >= 0x1000 ) /*0xf9cd4*/
      {
        v10 = (char *)*((_QWORD *)String[0] - 1); /*0xf9cd6*/
        if ( (unsigned __int64)(String[0] - v10 - 8) > 0x1F ) /*0xf9ce9*/
          invoke_watson(0, 0, 0, 0, 0); /*0xf9cfa*/
      }
      j_j_free(v10); /*0xf9d01*/
    }
  }
  if ( v9 ) /*0xf9d09*/
  {
    v11 = cocos2d::CCString::createWithFormat((const char *)&word_6E86F8, *(unsigned int *)(a1 + 496)); /*0xf9d18*/
    CString = cocos2d::CCString::getCString(v11); /*0xf9d21*/
    v18 = 0u; /*0xf9d2a*/
    *(_OWORD *)String = 0; /*0xf9d2e*/
    do /*0xf9d39*/
      ++v5; /*0xf9d36*/
    while ( CString[v5] ); /*0xf9d39*/
    sub_3C230(String); /*0xf9d49*/
    CCTextInputNode_setString(a2, String); /*0xf9d55*/
  }
  else
  {
    if ( a2 != *(_QWORD **)(a1 + 480) ) /*0xf9d66*/
      goto LABEL_26; /*0xf9d66*/
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2[75] + 600LL) + 8LL))(a2[75] + 600LL); /*0xf9d79*/
    *(_OWORD *)String = 0; /*0xf9d82*/
    v18 = 0; /*0xf9d86*/
    do /*0xf9d93*/
      ++v5; /*0xf9d90*/
    while ( *(_BYTE *)(v13 + v5) ); /*0xf9d93*/
    sub_3C230(String); /*0xf9da3*/
    v4 |= 0xAu; /*0xf9da8*/
    v14 = (const char *)String; /*0xf9dac*/
    if ( *((_QWORD *)&v18 + 1) > 0xFu ) /*0xf9db5*/
      v14 = String[0]; /*0xf9db5*/
    if ( atoi(v14) > 12 ) /*0xf9dc3*/
      v15 = 1; /*0xf9dc5*/
    else
LABEL_26:
      v15 = 0; /*0xf9dc9*/
    if ( (v4 & 2) != 0 && *((_QWORD *)&v18 + 1) > 0xFu ) /*0xf9dd9*/
    {
      v16 = String[0]; /*0xf9ddb*/
      if ( (unsigned __int64)(*((_QWORD *)&v18 + 1) + 1LL) >= 0x1000 ) /*0xf9dec*/
      {
        v16 = (char *)*((_QWORD *)String[0] - 1); /*0xf9dee*/
        if ( (unsigned __int64)(String[0] - v16 - 8) > 0x1F ) /*0xf9e01*/
          invoke_watson(0, 0, 0, 0, 0); /*0xf9e12*/
      }
      j_j_free(v16); /*0xf9e19*/
    }
    if ( v15 ) /*0xf9e20*/
    {
      *(_QWORD *)&v18 = 2; /*0xf9e25*/
      *(_OWORD *)String = 0; /*0xf9e2d*/
      strcpy((char *)String, "12"); /*0xf9e3e*/
      *((_QWORD *)&v18 + 1) = 15; /*0xf9e45*/
      CCTextInputNode_setString(a2, String); /*0xf9e4d*/
    }
    else if ( a2 == *(_QWORD **)(a1 + 472) || a2 == *(_QWORD **)(a1 + 480) || a2 == *(_QWORD **)(a1 + 488) ) /*0xf9e6d*/
    {
      sub_F9A10(a1 - 544); /*0xf9e76*/
    }
  }
}

// [4/4] Address: 0xfa750
// Method: ThreadSearchPopup::onClose
__int64 __fastcall ThreadSearchPopup_onClose(_QWORD *a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // r14
  _QWORD *v4; // rsi
  _QWORD *v5; // rdi
  __int64 v6; // rdx

  v2 = (_QWORD *)a1[126]; /*0xfa76f*/
  v3 = (_QWORD *)a1[127]; /*0xfa776*/
  v4 = (_QWORD *)a1[128]; /*0xfa77d*/
  v5 = (_QWORD *)a1[129]; /*0xfa784*/
  if ( v2 ) /*0xfa78e*/
  {
    v2[76] = 0; /*0xfa790*/
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v2 + 1032LL))(v2, 0); /*0xfa79c*/
  }
  if ( v3 ) /*0xfa7a5*/
  {
    v3[76] = 0; /*0xfa7a7*/
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v3 + 1032LL))(v3, 0); /*0xfa7b6*/
  }
  if ( v4 ) /*0xfa7bf*/
  {
    v4[76] = 0; /*0xfa7c1*/
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v4 + 1032LL))(v4, 0); /*0xfa7d0*/
  }
  if ( v5 ) /*0xfa7d9*/
  {
    v5[76] = 0; /*0xfa7db*/
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v5 + 1032LL))(v5, 0); /*0xfa7ea*/
  }
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 992LL))(a1, 0); /*0xfa7f8*/
  LOBYTE(v6) = 1; /*0xfa801*/
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 520LL))(a1, v6);
}
