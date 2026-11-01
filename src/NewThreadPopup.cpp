#include <Geode/binding/NewThreadPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/16] Address: 0xd1bd0
// Method: NewThreadPopup::~NewThreadPopup
// Hidden C++ exception states: #wind=1
char *__fastcall NewThreadPopup__dtor_NewThreadPopup(char *Block, char a2)
{
  char *v4; // rdi
  __int64 v5; // rax
  void *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  cocos2d::CCObject *v9; // rcx

  *(_QWORD *)Block = &NewThreadPopup::`vftable'; /*0xd1beb*/
  *((_QWORD *)Block + 40) = &NewThreadPopup::`vftable'; /*0xd1bf5*/
  *((_QWORD *)Block + 41) = &NewThreadPopup::`vftable'; /*0xd1c03*/
  *((_QWORD *)Block + 42) = &NewThreadPopup::`vftable'; /*0xd1c11*/
  *((_QWORD *)Block + 43) = &NewThreadPopup::`vftable'; /*0xd1c1f*/
  *((_QWORD *)Block + 44) = &NewThreadPopup::`vftable'; /*0xd1c2d*/
  *((_QWORD *)Block + 51) = &NewThreadPopup::`vftable'; /*0xd1c3b*/
  *((_QWORD *)Block + 54) = &NewThreadPopup::`vftable'; /*0xd1c49*/
  *((_QWORD *)Block + 68) = &NewThreadPopup::`vftable'; /*0xd1c57*/
  v4 = Block + 664; /*0xd1c5e*/
  *((_QWORD *)Block + 83) = &NewThreadPopup::`vftable'; /*0xd1c6c*/
  *((_QWORD *)Block + 84) = &NewThreadPopup::`vftable'; /*0xd1c76*/
  *((_QWORD *)Block + 85) = &NewThreadPopup::`vftable'; /*0xd1c84*/
  *((_QWORD *)Block + 86) = &NewThreadPopup::`vftable'; /*0xd1c92*/
  v5 = *(_QWORD *)&qword_905FB0; /*0xd1c99*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0xd1ca3*/
  {
    v6 = operator new(0x690u); /*0xd1caa*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v6); /*0xd1cb7*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xd1cc8*/
    v5 = *(_QWORD *)&qword_905FB0; /*0xd1cca*/
  }
  if ( *(char **)(v5 + 1392) == v4 ) /*0xd1cda*/
    *(_QWORD *)(v5 + 1392) = 0; /*0xd1cdc*/
  v7 = *((_QWORD *)Block + 112); /*0xd1ce3*/
  if ( v7 ) /*0xd1ced*/
    *(_QWORD *)(v7 + 608) = 0; /*0xd1cef*/
  v8 = *((_QWORD *)Block + 113); /*0xd1cf6*/
  if ( v8 ) /*0xd1d00*/
    *(_QWORD *)(v8 + 608) = 0; /*0xd1d02*/
  v9 = (cocos2d::CCObject *)*((_QWORD *)Block + 92); /*0xd1d09*/
  if ( v9 ) /*0xd1d13*/
    cocos2d::CCObject::release(v9); /*0xd1d15*/
  sub_3C310(Block + 928); /*0xd1d22*/
  sub_3C310(Block + 792); /*0xd1d2e*/
  sub_3C310(Block + 704); /*0xd1d3a*/
  StarInfoPopup__dtor_StarInfoPopup(Block); /*0xd1d42*/
  if ( (a2 & 1) != 0 ) /*0xd1d4c*/
    j_j_free(Block); /*0xd1d56*/
  return Block; /*0xd1d5e*/
}

// [2/16] Address: 0xee520
// Method: NewThreadPopup::keyDown
void __fastcall NewThreadPopup_keyDown(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rax

  if ( a2 == 13 /*0xee568*/
    && (v4 = *(_QWORD *)(a1 + 560)) != 0
    && *(_BYTE *)(v4 + 468)
    && (v5 = cocos2d::CCDirector::sharedDirector(a1),
        !*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 176LL))(v5) + 152)) )
  {
    GameStatsManager_tryFixPathBug(a1 - 344); /*0xee57a*/
  }
  else
  {
    FLAlertLayer_keyDown(a1, a2); /*0xee589*/
  }
}

// [3/16] Address: 0xee700
// Method: NewThreadPopup::emotePickerClosed
void __fastcall NewThreadPopup_emotePickerClosed(__int64 a1)
{
  *(_QWORD *)(a1 + 72) = 0; /*0xee700*/
}

// [4/16] Address: 0xee890
// Method: NewThreadPopup::emotePicked
__int64 __fastcall NewThreadPopup_emotePicked(__int64 a1, __int64 a2, void **a3)
{
  _BYTE *v3; // rdx
  size_t v5; // r8
  __int64 result; // rax

  if ( a3 ) /*0xee893*/
  {
    v3 = *a3; /*0xee89a*/
    if ( *a3 ) /*0xee89a*/
    {
      v5 = -1; /*0xee8a5*/
      do /*0xee8b3*/
        ++v5; /*0xee8b0*/
      while ( v3[v5] ); /*0xee8b3*/
      sub_3F5A0((void *)(a1 + 104), v3, v5); /*0xee8be*/
      return sub_EE8E0(a1 - 688); /*0xee8ca*/
    }
  }
  return result; /*0xee8d4*/
}

// [5/16] Address: 0xef0e0
// Method: NewThreadPopup::textChanged
// Hidden C++ exception states: #wind=2
void __fastcall NewThreadPopup_textChanged(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  _BYTE *i; // rbx
  void **v10; // rax
  _BYTE *v11; // rax
  void *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  unsigned int v15; // ebx
  __int64 v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rcx
  void *Block[2]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v20; // [rsp+48h] [rbp-40h]
  __int128 v21; // [rsp+58h] [rbp-30h] BYREF
  __int128 v22; // [rsp+68h] [rbp-20h]

  if ( a2 == *(_QWORD *)(a1 + 352) ) /*0xef10b*/
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a2 + 600) + 600LL) + 8LL))(*(_QWORD *)(a2 + 600) + 600LL); /*0xef122*/
    *(_OWORD *)Block = 0; /*0xef128*/
    v20 = 0; /*0xef130*/
    v4 = -1; /*0xef136*/
    do /*0xef143*/
      ++v4; /*0xef140*/
    while ( *(_BYTE *)(v3 + v4) ); /*0xef143*/
    sub_3C230(Block); /*0xef152*/
    v6 = 0; /*0xef158*/
    v7 = 0; /*0xef15b*/
    v8 = *((_QWORD *)&v20 + 1); /*0xef15d*/
    for ( i = Block[0]; v7 < (unsigned __int64)v20; ++v7 ) /*0xef16f*/
    {
      v10 = Block; /*0xef171*/
      if ( *((_QWORD *)&v20 + 1) > 0xFu ) /*0xef17a*/
        v10 = (void **)Block[0]; /*0xef17a*/
      v5 = (unsigned int)(v6 + 1); /*0xef184*/
      if ( (*((_BYTE *)v10 + v7) & 0xC0) == 0x80 ) /*0xef188*/
        v5 = (unsigned int)v6; /*0xef18a*/
      v6 = (unsigned int)v5; /*0xef18e*/
    }
    sub_EF010(v5, *(_QWORD *)(a1 + 336), v6, 64); /*0xef1a6*/
    if ( v8 > 0xF ) /*0xef1b0*/
    {
      v11 = i; /*0xef1b6*/
      if ( v8 + 1 < 0x1000 || (i = (_BYTE *)*((_QWORD *)i - 1), (unsigned __int64)(v11 - i - 8) <= 0x1F) ) /*0xef1d5*/
      {
        v12 = i; /*0xef1db*/
LABEL_14:
        j_j_free(v12); /*0xef1de*/
        return; /*0xef1de*/
      }
LABEL_25:
      invoke_watson(0, 0, 0, 0, 0); /*0xef2e5*/
    }
  }
  else if ( a2 == *(_QWORD *)(a1 + 360) ) /*0xef20c*/
  {
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a2 + 600) + 600LL) + 8LL))(*(_QWORD *)(a2 + 600) + 600LL); /*0xef21f*/
    v21 = 0; /*0xef225*/
    v22 = 0; /*0xef22d*/
    v14 = -1; /*0xef233*/
    do /*0xef243*/
      ++v14; /*0xef240*/
    while ( *(_BYTE *)(v13 + v14) ); /*0xef243*/
    sub_3C230(&v21); /*0xef252*/
    v15 = 300; /*0xef25f*/
    if ( *(_BYTE *)(a1 + 201) ) /*0xef258*/
    {
      v15 = 500; /*0xef26b*/
      SetupSmartBlockLayer_onCreateAll(500); /*0xef270*/
      v16 = (unsigned int)dword_8F8394; /*0xef275*/
    }
    else
    {
      SetupSmartBlockLayer_onCreateAll(500); /*0xef27d*/
      v16 = (unsigned int)dword_8F83A4; /*0xef282*/
    }
    v17 = sub_7EAA0(&v21, v16); /*0xef28d*/
    sub_EF010(v18, *(_QWORD *)(a1 + 344), v17, v15); /*0xef29f*/
    if ( *((_QWORD *)&v22 + 1) > 0xFu ) /*0xef2ae*/
    {
      v12 = (void *)v21; /*0xef2b7*/
      if ( (unsigned __int64)(*((_QWORD *)&v22 + 1) + 1LL) < 0x1000 ) /*0xef2c6*/
        goto LABEL_14; /*0xef2c6*/
      v12 = *(void **)(v21 - 8); /*0xef2d0*/
      if ( (unsigned __int64)(v21 - (_QWORD)v12 - 8) <= 0x1F ) /*0xef2df*/
        goto LABEL_14; /*0xef2df*/
      goto LABEL_25; /*0xef2df*/
    }
  }
}

// [6/16] Address: 0xef340
// Method: NewThreadPopup::levelPicked
void __fastcall NewThreadPopup_levelPicked(__int64 a1, __int64 a2)
{
  int v3; // edx
  cocos2d::CCString *v4; // rax
  const char *CString; // rax
  __int64 v6; // r8
  void *v7; // rcx
  void *Block[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v9; // [rsp+40h] [rbp-28h]

  if ( a2 ) /*0xef343*/
  {
    v3 = *(_DWORD *)(a2 + 328) - *(_DWORD *)(a2 + 332); /*0xef369*/
    if ( v3 > 0 ) /*0xef371*/
    {
      v4 = cocos2d::CCString::createWithFormat("l_%i", v3); /*0xef37e*/
      CString = cocos2d::CCString::getCString(v4); /*0xef387*/
      *(_OWORD *)Block = 0; /*0xef390*/
      v9 = 0; /*0xef398*/
      v6 = -1; /*0xef39e*/
      do /*0xef3a8*/
        ++v6; /*0xef3a5*/
      while ( CString[v6] ); /*0xef3a8*/
      sub_3C230(Block); /*0xef3b7*/
      sub_EF620(a1 - 680, Block); /*0xef3c9*/
      if ( *((_QWORD *)&v9 + 1) > 0xFu ) /*0xef3d8*/
      {
        v7 = Block[0]; /*0xef3dd*/
        if ( (unsigned __int64)(*((_QWORD *)&v9 + 1) + 1LL) >= 0x1000 ) /*0xef3ec*/
        {
          v7 = (void *)*((_QWORD *)Block[0] - 1); /*0xef3f2*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v7 - 8) > 0x1F ) /*0xef401*/
            invoke_watson(0, 0, 0, 0, 0); /*0xef416*/
        }
        j_j_free(v7); /*0xef41d*/
      }
    }
  }
}

// [7/16] Address: 0xef440
// Method: NewThreadPopup::listPicked
void __fastcall NewThreadPopup_listPicked(__int64 a1, __int64 a2)
{
  int v3; // edx
  cocos2d::CCString *v4; // rax
  const char *CString; // rax
  __int64 v6; // r8
  void *v7; // rcx
  void *Block[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v9; // [rsp+40h] [rbp-28h]

  if ( a2 ) /*0xef443*/
  {
    v3 = *(_DWORD *)(a2 + 344); /*0xef460*/
    if ( v3 > 0 ) /*0xef468*/
    {
      v4 = cocos2d::CCString::createWithFormat("li_%i", v3); /*0xef475*/
      CString = cocos2d::CCString::getCString(v4); /*0xef47e*/
      *(_OWORD *)Block = 0; /*0xef487*/
      v9 = 0; /*0xef48f*/
      v6 = -1; /*0xef495*/
      do /*0xef4a3*/
        ++v6; /*0xef4a0*/
      while ( CString[v6] ); /*0xef4a3*/
      sub_3C230(Block); /*0xef4b2*/
      sub_EF620(a1 - 680, Block); /*0xef4c4*/
      if ( *((_QWORD *)&v9 + 1) > 0xFu ) /*0xef4d3*/
      {
        v7 = Block[0]; /*0xef4d8*/
        if ( (unsigned __int64)(*((_QWORD *)&v9 + 1) + 1LL) >= 0x1000 ) /*0xef4e7*/
        {
          v7 = (void *)*((_QWORD *)Block[0] - 1); /*0xef4ed*/
          if ( (unsigned __int64)((char *)Block[0] - (char *)v7 - 8) > 0x1F ) /*0xef4fc*/
            invoke_watson(0, 0, 0, 0, 0); /*0xef511*/
        }
        j_j_free(v7); /*0xef518*/
      }
    }
  }
}

// [8/16] Address: 0xef530
// Method: NewThreadPopup::shareIDPicked
void __fastcall NewThreadPopup_shareIDPicked(__int64 a1, int a2, char a3)
{
  const char *v4; // rcx
  cocos2d::CCString *v5; // rax
  const char *CString; // rax
  __int64 v7; // r8
  void *v8; // rcx
  void *Block[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h]

  if ( a2 > 0 ) /*0xef532*/
  {
    v4 = "l_%i"; /*0xef556*/
    if ( a3 ) /*0xef560*/
      v4 = "li_%i"; /*0xef560*/
    v5 = cocos2d::CCString::createWithFormat(v4); /*0xef564*/
    CString = cocos2d::CCString::getCString(v5); /*0xef56d*/
    *(_OWORD *)Block = 0; /*0xef576*/
    v10 = 0; /*0xef57e*/
    v7 = -1; /*0xef584*/
    do /*0xef593*/
      ++v7; /*0xef590*/
    while ( CString[v7] ); /*0xef593*/
    sub_3C230(Block); /*0xef5a2*/
    sub_EF620(a1 - 680, Block); /*0xef5b4*/
    if ( *((_QWORD *)&v10 + 1) > 0xFu ) /*0xef5c3*/
    {
      v8 = Block[0]; /*0xef5c8*/
      if ( (unsigned __int64)(*((_QWORD *)&v10 + 1) + 1LL) >= 0x1000 ) /*0xef5d7*/
      {
        v8 = (void *)*((_QWORD *)Block[0] - 1); /*0xef5dd*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v8 - 8) > 0x1F ) /*0xef5ec*/
          invoke_watson(0, 0, 0, 0, 0); /*0xef601*/
      }
      j_j_free(v8); /*0xef608*/
    }
  }
}

// [9/16] Address: 0xefa00
// Method: NewThreadPopup::selectedRecipientCount
unsigned int __fastcall NewThreadPopup_selectedRecipientCount(__int64 a1)
{
  cocos2d::CCArray *v1; // rcx

  v1 = *(cocos2d::CCArray **)(a1 + 64); /*0xefa00*/
  if ( v1 ) /*0xefa07*/
    return cocos2d::CCArray::count(v1); /*0xefa09*/
  else
    return 0; /*0xefa10*/
}

// [10/16] Address: 0xefa20
// Method: NewThreadPopup::selectedRecipients
__int64 __fastcall NewThreadPopup_selectedRecipients(__int64 a1)
{
  return *(_QWORD *)(a1 + 64); /*0xefa24*/
}

// [11/16] Address: 0xefa30
// Method: NewThreadPopup::isRecipientSelected
char __fastcall NewThreadPopup_isRecipientSelected(__int64 a1, int a2)
{
  cocos2d::CCArray *v4; // rcx
  unsigned int v5; // ebx

  v4 = *(cocos2d::CCArray **)(a1 + 64); /*0xefa44*/
  if ( !v4 ) /*0xefa4b*/
    return 0; /*0xefa4b*/
  v5 = 0; /*0xefa4d*/
  if ( (int)cocos2d::CCArray::count(v4) <= 0 ) /*0xefa57*/
    return 0; /*0xefa84*/
  while ( *((_DWORD *)cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 64), v5) + 98) != a2 ) /*0xefa72*/
  {
    if ( (int)++v5 >= (int)cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 64)) ) /*0xefa82*/
      return 0; /*0xefa82*/
  }
  return 1; /*0xefa86*/
}

// [12/16] Address: 0xefdc0
// Method: NewThreadPopup::friendPicked
// Hidden C++ exception states: #wind=1
void __fastcall NewThreadPopup_friendPicked(__int64 a1, struct cocos2d::CCObject *a2)
{
  cocos2d::CCArray *v4; // rcx
  unsigned int v5; // ebx
  struct cocos2d::CCObject *v6; // rax
  cocos2d::CCArray *v7; // rcx
  __int64 v8; // rcx
  __int64 *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  __int128 v14; // [rsp+30h] [rbp-58h] BYREF
  __int64 v15; // [rsp+40h] [rbp-48h]
  __int64 v16; // [rsp+48h] [rbp-40h]
  __int128 v17; // [rsp+50h] [rbp-38h] BYREF
  __int64 v18; // [rsp+60h] [rbp-28h]
  __int64 v19; // [rsp+68h] [rbp-20h]

  if ( a2 ) /*0xefdc3*/
  {
    v4 = *(cocos2d::CCArray **)(a1 + 64); /*0xefdd7*/
    if ( v4 ) /*0xefdde*/
    {
      if ( *(_BYTE *)(a1 + 73) ) /*0xefde0*/
      {
        cocos2d::CCArray::removeAllObjects(v4); /*0xefde6*/
      }
      else
      {
        v5 = 0; /*0xefe15*/
        if ( (int)cocos2d::CCArray::count(v4) > 0 ) /*0xefe1f*/
        {
          while ( 1 ) /*0xefe27*/
          {
            v6 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 64), v5); /*0xefe27*/
            v7 = *(cocos2d::CCArray **)(a1 + 64); /*0xefe2d*/
            if ( *((_DWORD *)v6 + 98) == *((_DWORD *)a2 + 98) ) /*0xefe3d*/
              break; /*0xefe3d*/
            if ( (int)++v5 >= (int)cocos2d::CCArray::count(v7) ) /*0xefe4d*/
              goto LABEL_11; /*0xefe4d*/
          }
          cocos2d::CCArray::removeObjectAtIndex(v7, v5, 1); /*0xeff3a*/
          goto LABEL_6; /*0xeff40*/
        }
LABEL_11:
        if ( (int)cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 64)) >= 9 ) /*0xefe5c*/
        {
          v9 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(v8) + 272); /*0xefe64*/
          v17 = 0; /*0xefe7b*/
          v18 = 0; /*0xefe80*/
          v19 = 15; /*0xefe89*/
          LOBYTE(v17) = 0; /*0xefe92*/
          v14 = 0; /*0xefe97*/
          *(_QWORD *)&v14 = sub_3C460(32); /*0xefeb8*/
          v15 = 20; /*0xefebd*/
          v16 = 31; /*0xefec6*/
          strcpy((char *)v14, "Member limit reached"); /*0xefed6*/
          v10 = *v9; /*0xefee6*/
          v13 = sub_3A4CA0(&v14, v11, v12, 150, &v17); /*0xeff0e*/
          (*(void (__fastcall **)(__int64 *, __int64, __int64))(v10 + 456))(v9, v13, 1000); /*0xeff1f*/
          return; /*0xeff34*/
        }
      }
      cocos2d::CCArray::addObject(*(cocos2d::CCArray **)(a1 + 64), a2); /*0xefdf3*/
LABEL_6:
      CustomSFXWidget_onPlayback(a1 - 672); /*0xefdf9*/
    }
  }
}

// [13/16] Address: 0xf13f0
// Method: NewThreadPopup::threadSendFinished
// Hidden C++ exception states: #wind=12
void __fastcall NewThreadPopup_threadSendFinished(__int64 a1, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 *v6; // r13
  cocos2d::CCArray *v7; // rcx
  int v8; // r15d
  struct cocos2d::CCObject *v9; // rsi
  __int64 v10; // rax
  cocos2d::CCNotificationCenter *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdi
  char v17; // bl
  int v18; // eax
  void **v19; // rdx
  char v20; // bl
  __int64 v21; // rax
  __int64 v22; // rcx
  void **v23; // rsi
  void *v24; // rcx
  void *v25; // rdx
  cocos2d::CCObject *v26; // rax
  int v27; // r13d
  int v28; // r12d
  char v29; // di
  __int64 v30; // rsi
  cocos2d::CCString *v31; // rax
  char *CString; // rax
  size_t v33; // r8
  cocos2d::CCString *v34; // rax
  char *v35; // rax
  size_t v36; // r8
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rax
  int v42; // ebx
  _DWORD *v43; // r15
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // r8
  void **v47; // rdx
  void *v48; // rcx
  void *v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  void **v53; // rdx
  char v54; // di
  void *v55; // rcx
  void *v56; // rcx
  void *v57; // rdx
  cocos2d::CCObject *v58; // rax
  void *v59; // rcx
  __int64 *v61; // [rsp+38h] [rbp-91h]
  void *v62; // [rsp+40h] [rbp-89h]
  void *v63; // [rsp+40h] [rbp-89h]
  void *Block[2]; // [rsp+50h] [rbp-79h] BYREF
  __int128 v65; // [rsp+60h] [rbp-69h]
  void *v66[2]; // [rsp+70h] [rbp-59h] BYREF
  __int64 v67; // [rsp+80h] [rbp-49h]
  unsigned __int64 v68; // [rsp+88h] [rbp-41h]
  void *Src[2]; // [rsp+90h] [rbp-39h] BYREF
  __int64 v70; // [rsp+A0h] [rbp-29h]
  unsigned __int64 v71; // [rsp+A8h] [rbp-21h]
  _BYTE v72[32]; // [rsp+B0h] [rbp-19h] BYREF
  _BYTE v73[32]; // [rsp+D0h] [rbp+7h] BYREF

  if ( !*(_BYTE *)(a1 + 80) ) /*0xf1435*/
    return; /*0xf1435*/
  UILayer_togglePlatformerMode(a1 - 664, 0); /*0xf1444*/
  v6 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(v4) + 272); /*0xf144f*/
  v61 = v6; /*0xf1456*/
  v7 = *(cocos2d::CCArray **)(a1 + 72); /*0xf145b*/
  if ( v7 ) /*0xf1462*/
  {
    v8 = cocos2d::CCArray::count(v7); /*0xf146a*/
    if ( v8 >= 1 ) /*0xf1470*/
    {
      v9 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 72), 0); /*0xf147e*/
      goto LABEL_7; /*0xf1481*/
    }
  }
  else
  {
    v8 = 0; /*0xf1483*/
  }
  v9 = 0; /*0xf1486*/
LABEL_7:
  v10 = *(_QWORD *)&qword_905FB0; /*0xf1489*/
  if ( !*(_QWORD *)&qword_905FB0 ) /*0xf1493*/
  {
    v62 = operator new(0x690u); /*0xf149f*/
    *(_QWORD *)&qword_905FB0 = sub_214250(v62); /*0xf14ad*/
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xf14be*/
    v10 = *(_QWORD *)&qword_905FB0; /*0xf14c0*/
  }
  if ( *(_BYTE *)(v10 + 520) ) /*0xf14c7*/
  {
    if ( *(_BYTE *)(v10 + 522) ) /*0xf14d4*/
    {
      v11 = (cocos2d::CCNotificationCenter *)cocos2d::CCNotificationCenter::sharedNotificationCenter(v7, v5); /*0xf14e1*/
      cocos2d::CCNotificationCenter::postNotification(v11, "ThreadsChangedNotification", 0); /*0xf14f4*/
      *(_OWORD *)Block = 0; /*0xf1506*/
      *(_QWORD *)&v65 = 0; /*0xf150a*/
      *((_QWORD *)&v65 + 1) = 15; /*0xf150e*/
      LOBYTE(Block[0]) = 0; /*0xf1516*/
      *(_OWORD *)v66 = 0; /*0xf151a*/
      v67 = 0; /*0xf151e*/
      v68 = 0; /*0xf1522*/
      v66[0] = (void *)sub_3C460(32); /*0xf1530*/
      v67 = 20; /*0xf1534*/
      v68 = 31; /*0xf153c*/
      strcpy((char *)v66[0], "Message request sent"); /*0xf154b*/
      v12 = *v6; /*0xf155b*/
      v15 = sub_3A4CA0(v66, v13, v14, 150, Block); /*0xf1582*/
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v12 + 456))(v6, v15, 1000); /*0xf1593*/
      sub_F1DA0(a1 - 664, 0); /*0xf15a2*/
    }
    else
    {
      v16 = sub_AA0F0(); /*0xf15b1*/
      *(_DWORD *)(v16 + 56) = a2; /*0xf15b4*/
      *(_BYTE *)(v16 + 320) = 1; /*0xf15b7*/
      v17 = 2; /*0xf15be*/
      *(_DWORD *)(v16 + 200) = 2; /*0xf15c3*/
      if ( v9 ) /*0xf15cc*/
        v18 = *((_DWORD *)v9 + 98); /*0xf15ce*/
      else
        v18 = *(_DWORD *)(a1 + 32); /*0xf15d6*/
      *(_DWORD *)(v16 + 60) = v18; /*0xf15da*/
      if ( v9 ) /*0xf15e0*/
      {
        sub_3E4F0(v66, (char *)v9 + 320); /*0xf15ed*/
        v19 = v66; /*0xf15f2*/
        v20 = 1; /*0xf15f6*/
      }
      else
      {
        if ( *(_QWORD *)(a1 + 56) ) /*0xf1600*/
        {
          v21 = sub_3E4F0(v72, a1 + 40); /*0xf160f*/
        }
        else
        {
          v22 = *(_QWORD *)&qword_905FB0; /*0xf1617*/
          if ( !*(_QWORD *)&qword_905FB0 ) /*0xf1621*/
          {
            v63 = operator new(0x690u); /*0xf162d*/
            *(_QWORD *)&qword_905FB0 = sub_214250(v63); /*0xf163b*/
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&qword_905FB0 + 72LL))(*(_QWORD *)&qword_905FB0); /*0xf164c*/
            v22 = *(_QWORD *)&qword_905FB0; /*0xf164e*/
          }
          v21 = sub_21A830(v22, v73, *(unsigned int *)(a1 + 32)); /*0xf165d*/
          v17 = 4; /*0xf1662*/
        }
        *(_OWORD *)Block = *(_OWORD *)v21; /*0xf166a*/
        v65 = *(_OWORD *)(v21 + 16); /*0xf1672*/
        *(_QWORD *)(v21 + 16) = 0; /*0xf1676*/
        *(_QWORD *)(v21 + 24) = 15; /*0xf167e*/
        *(_BYTE *)v21 = 0; /*0xf1686*/
        v19 = Block; /*0xf1689*/
        v20 = v17 | 8; /*0xf168d*/
      }
      v23 = (void **)(v16 + 64); /*0xf1690*/
      sub_58AD0(v16 + 64, v19); /*0xf1697*/
      if ( (v20 & 8) != 0 ) /*0xf169f*/
      {
        v20 &= ~8u; /*0xf16a1*/
        if ( *((_QWORD *)&v65 + 1) > 0xFu ) /*0xf16ac*/
        {
          v24 = Block[0]; /*0xf16b1*/
          if ( (unsigned __int64)(*((_QWORD *)&v65 + 1) + 1LL) >= 0x1000 ) /*0xf16bf*/
          {
            v24 = (void *)*((_QWORD *)Block[0] - 1); /*0xf16c5*/
            if ( (unsigned __int64)((char *)Block[0] - (char *)v24 - 8) > 0x1F ) /*0xf16d4*/
              invoke_watson(0, 0, 0, 0, 0); /*0xf16e9*/
          }
          j_j_free(v24); /*0xf16f0*/
        }
      }
      if ( (v20 & 4) != 0 ) /*0xf16f8*/
      {
        v20 &= ~4u; /*0xf16fa*/
        sub_3C310(v73); /*0xf1701*/
      }
      if ( (v20 & 2) != 0 ) /*0xf170a*/
      {
        v20 &= ~2u; /*0xf170c*/
        sub_3C310(v72); /*0xf1713*/
      }
      if ( (v20 & 1) != 0 ) /*0xf171c*/
        sub_3C310(v66); /*0xf1722*/
      if ( (void **)(v16 + 96) != v23 ) /*0xf172e*/
      {
        v25 = (void *)(v16 + 64); /*0xf1730*/
        if ( *(_QWORD *)(v16 + 88) > 0xFu ) /*0xf1738*/
          v25 = *v23; /*0xf173a*/
        sub_3F5A0((void *)(v16 + 96), v25, *(_QWORD *)(v16 + 80)); /*0xf1741*/
      }
      v26 = LevelBrowserLayer_create(v16); /*0xf1749*/
      (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v26 + 1064LL))(v26); /*0xf175b*/
      sub_F1DA0(a1 - 664, 0); /*0xf1766*/
    }
    return; /*0xf15a7*/
  }
  v27 = *(_DWORD *)(v10 + 512); /*0xf1770*/
  v28 = *(_DWORD *)(v10 + 516); /*0xf1777*/
  *(_OWORD *)Src = 0; /*0xf1781*/
  v29 = 32; /*0xf178d*/
  Src[0] = (void *)sub_3C460(32); /*0xf1799*/
  v70 = 18; /*0xf179d*/
  v71 = 31; /*0xf17a5*/
  strcpy((char *)Src[0], "Group chat created"); /*0xf17b4*/
  v30 = -1; /*0xf17c6*/
  if ( v27 > 0 ) /*0xf17d0*/
  {
    v31 = cocos2d::CCString::createWithFormat(" - %i invited", v27); /*0xf17dc*/
    CString = (char *)cocos2d::CCString::getCString(v31); /*0xf17e5*/
    v33 = -1; /*0xf17eb*/
    do /*0xf17f3*/
      ++v33; /*0xf17f0*/
    while ( CString[v33] ); /*0xf17f3*/
    sub_43D80(Src, CString, v33); /*0xf1801*/
  }
  if ( v28 > 0 ) /*0xf1809*/
  {
    v34 = cocos2d::CCString::createWithFormat(" - %i unavailable", v28); /*0xf1815*/
    v35 = (char *)cocos2d::CCString::getCString(v34); /*0xf181e*/
    v36 = -1; /*0xf1824*/
    do /*0xf1833*/
      ++v36; /*0xf1830*/
    while ( v35[v36] ); /*0xf1833*/
    sub_43D80(Src, v35, v36); /*0xf1841*/
  }
  *(_OWORD *)Block = 0; /*0xf1852*/
  *(_QWORD *)&v65 = 0; /*0xf1856*/
  *((_QWORD *)&v65 + 1) = 15; /*0xf185e*/
  LOBYTE(Block[0]) = 0; /*0xf1866*/
  v37 = sub_3E4F0(v72, Src); /*0xf1872*/
  v38 = *v61; /*0xf187c*/
  v41 = sub_3A4CA0(v37, v39, v40, 150, Block); /*0xf18a1*/
  (*(void (__fastcall **)(__int64 *, __int64, __int64))(v38 + 456))(v61, v41, 1000); /*0xf18b4*/
  v42 = 1; /*0xf18c3*/
  if ( v8 > 0 ) /*0xf18cb*/
    v42 = v8 - v28 - v27; /*0xf18cb*/
  v43 = (_DWORD *)sub_AA0F0(); /*0xf18d3*/
  v43[14] = a2; /*0xf18da*/
  if ( v42 < 0 ) /*0xf18e6*/
    v42 = 0; /*0xf18e6*/
  v43[50] = v42 + 1; /*0xf18ec*/
  v44 = *(_QWORD *)(a1 + 232); /*0xf18f3*/
  if ( v44 ) /*0xf18fd*/
  {
    v45 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v44 + 600) + 600LL) + 8LL))(*(_QWORD *)(v44 + 600) + 600LL); /*0xf1910*/
    *(_OWORD *)Block = 0; /*0xf1916*/
    v65 = 0u; /*0xf191a*/
    v46 = -1; /*0xf1922*/
    do /*0xf1928*/
      ++v46; /*0xf1925*/
    while ( *(_BYTE *)(v45 + v46) ); /*0xf1928*/
    sub_3C230(Block); /*0xf1935*/
    v47 = Block; /*0xf193a*/
    v29 = 16; /*0xf193e*/
  }
  else
  {
    *(_OWORD *)v66 = 0; /*0xf1948*/
    v67 = 0; /*0xf194c*/
    v68 = 15; /*0xf1950*/
    LOBYTE(v66[0]) = 0; /*0xf1958*/
    v47 = v66; /*0xf195c*/
  }
  sub_58AD0(v43 + 24, v47); /*0xf1964*/
  if ( (v29 & 0x20) != 0 ) /*0xf196d*/
  {
    v29 &= ~0x20u; /*0xf196f*/
    if ( v68 > 0xF ) /*0xf197a*/
    {
      v48 = v66[0]; /*0xf197f*/
      if ( v68 + 1 >= 0x1000 ) /*0xf198d*/
      {
        v48 = (void *)*((_QWORD *)v66[0] - 1); /*0xf1993*/
        if ( (unsigned __int64)((char *)v66[0] - (char *)v48 - 8) > 0x1F ) /*0xf19a2*/
          invoke_watson(0, 0, 0, 0, 0); /*0xf19b3*/
      }
      j_j_free(v48); /*0xf19ba*/
    }
  }
  if ( (v29 & 0x10) != 0 ) /*0xf19c4*/
  {
    v29 &= ~0x10u; /*0xf19c6*/
    if ( *((_QWORD *)&v65 + 1) > 0xFu ) /*0xf19d1*/
    {
      v49 = Block[0]; /*0xf19d6*/
      if ( (unsigned __int64)(*((_QWORD *)&v65 + 1) + 1LL) >= 0x1000 ) /*0xf19e4*/
      {
        v49 = (void *)*((_QWORD *)Block[0] - 1); /*0xf19ea*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v49 - 8) > 0x1F ) /*0xf19f9*/
LABEL_83:
          invoke_watson(0, 0, 0, 0, 0); /*0xf1b2f*/
      }
      j_j_free(v49); /*0xf19ff*/
    }
  }
  v50 = GJAccountManager_sharedState(); /*0xf1a04*/
  v43[60] = *(_DWORD *)(v50 + 360) - *(_DWORD *)(v50 + 364); /*0xf1a15*/
  v51 = *(_QWORD *)(a1 + 240); /*0xf1a1c*/
  if ( v51 ) /*0xf1a26*/
  {
    v52 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v51 + 600) + 600LL) + 8LL))(*(_QWORD *)(v51 + 600) + 600LL); /*0xf1a39*/
    *(_OWORD *)v66 = 0; /*0xf1a3f*/
    v67 = 0; /*0xf1a43*/
    v68 = 0; /*0xf1a47*/
    do /*0xf1a53*/
      ++v30; /*0xf1a50*/
    while ( *(_BYTE *)(v52 + v30) ); /*0xf1a53*/
    sub_3C230(v66); /*0xf1a63*/
    v53 = v66; /*0xf1a6c*/
    v54 = v29 | 0x40; /*0xf1a70*/
  }
  else
  {
    *(_OWORD *)Block = 0; /*0xf1a78*/
    *(_QWORD *)&v65 = 0; /*0xf1a7c*/
    *((_QWORD *)&v65 + 1) = 15; /*0xf1a80*/
    LOBYTE(Block[0]) = 0; /*0xf1a88*/
    v53 = Block; /*0xf1a8c*/
    v54 = v29 | 0x80; /*0xf1a90*/
  }
  sub_58AD0(v43 + 64, v53); /*0xf1a9b*/
  if ( v54 < 0 ) /*0xf1aa3*/
  {
    v54 &= ~0x80u; /*0xf1aa5*/
    if ( *((_QWORD *)&v65 + 1) > 0xFu ) /*0xf1ab1*/
    {
      v55 = Block[0]; /*0xf1ab6*/
      if ( (unsigned __int64)(*((_QWORD *)&v65 + 1) + 1LL) >= 0x1000 ) /*0xf1ac4*/
      {
        v55 = (void *)*((_QWORD *)Block[0] - 1); /*0xf1aca*/
        if ( (unsigned __int64)((char *)Block[0] - (char *)v55 - 8) > 0x1F ) /*0xf1ad9*/
          invoke_watson(0, 0, 0, 0, 0); /*0xf1aea*/
      }
      j_j_free(v55); /*0xf1af1*/
    }
  }
  if ( (v54 & 0x40) != 0 && v68 > 0xF ) /*0xf1b05*/
  {
    v56 = v66[0]; /*0xf1b0a*/
    if ( v68 + 1 >= 0x1000 ) /*0xf1b18*/
    {
      v56 = (void *)*((_QWORD *)v66[0] - 1); /*0xf1b1e*/
      if ( (unsigned __int64)((char *)v66[0] - (char *)v56 - 8) > 0x1F ) /*0xf1b2d*/
        goto LABEL_83; /*0xf1b2d*/
    }
    j_j_free(v56); /*0xf1b45*/
  }
  if ( v43 + 72 != (_DWORD *)(a1 + 128) ) /*0xf1b5b*/
  {
    v57 = (void *)(a1 + 128); /*0xf1b5d*/
    if ( *(_QWORD *)(a1 + 152) > 0xFu ) /*0xf1b65*/
      v57 = *(void **)(a1 + 128); /*0xf1b67*/
    sub_3F5A0(v43 + 72, v57, *(_QWORD *)(a1 + 144)); /*0xf1b6e*/
  }
  v58 = LevelBrowserLayer_create((__int64)v43); /*0xf1b76*/
  (*(void (__fastcall **)(cocos2d::CCObject *))(*(_QWORD *)v58 + 1064LL))(v58); /*0xf1b88*/
  sub_F1DA0(a1 - 664, 0); /*0xf1b93*/
  if ( v71 > 0xF ) /*0xf1ba1*/
  {
    v59 = Src[0]; /*0xf1ba6*/
    if ( v71 + 1 >= 0x1000 ) /*0xf1bb4*/
    {
      v59 = (void *)*((_QWORD *)Src[0] - 1); /*0xf1bba*/
      if ( (unsigned __int64)((char *)Src[0] - (char *)v59 - 8) > 0x1F ) /*0xf1bc9*/
        invoke_watson(0, 0, 0, 0, 0); /*0xf1bda*/
    }
    j_j_free(v59); /*0xf1be1*/
  }
}

// [14/16] Address: 0xf1c20
// Method: NewThreadPopup::threadSendFailed
// Hidden C++ exception states: #wind=1
void __fastcall NewThreadPopup_threadSendFailed(__int64 a1)
{
  __int64 v1; // rcx
  __int64 *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rax
  _DWORD v7[4]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v8; // [rsp+40h] [rbp-38h]
  __int64 v9; // [rsp+48h] [rbp-30h]
  __int128 v10; // [rsp+50h] [rbp-28h] BYREF
  __int64 v11; // [rsp+60h] [rbp-18h]
  __int64 v12; // [rsp+68h] [rbp-10h]

  UILayer_togglePlatformerMode(a1 - 664, 0); /*0xf1c33*/
  if ( !byte_9037D9 ) /*0xf1c3f*/
  {
    v2 = *(__int64 **)(cocos2d::CCDirector::sharedDirector(v1) + 272); /*0xf1c4b*/
    v10 = 0; /*0xf1c62*/
    v11 = 0; /*0xf1c69*/
    v12 = 15; /*0xf1c6e*/
    LOBYTE(v10) = 0; /*0xf1c77*/
    v7[3] = 0; /*0xf1c7b*/
    v8 = 11; /*0xf1c7f*/
    v9 = 15; /*0xf1c88*/
    strcpy((char *)v7, "Send failed"); /*0xf1c99*/
    v3 = *v2; /*0xf1cbb*/
    v6 = sub_3A4CA0(v7, v4, v5, 150, &v10); /*0xf1ce3*/
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(v3 + 456))(v2, v6, 1000); /*0xf1cf4*/
  }
}

// [15/16] Address: 0xf1d10
// Method: NewThreadPopup::show
__int64 __fastcall NewThreadPopup_show(__int64 a1)
{
  cocos2d::CCScene *v2; // rbx
  int v3; // eax

  v2 = *(cocos2d::CCScene **)(cocos2d::CCDirector::sharedDirector(a1) + 272); /*0xf1d23*/
  if ( *(_QWORD *)(a1 + 568) ) /*0xf1d2a*/
  {
    v2 = *(cocos2d::CCScene **)(a1 + 568); /*0xf1d36*/
  }
  else
  {
    if ( cocos2d::CCScene::getHighestChildZ(v2) + 1 >= 110 ) /*0xf1d49*/
      v3 = cocos2d::CCScene::getHighestChildZ(v2) + 1; /*0xf1d5b*/
    else
      v3 = 110; /*0xf1d4b*/
    *(_DWORD *)(a1 + 592) = v3; /*0xf1d5d*/
  }
  if ( !*(_DWORD *)(a1 + 592) ) /*0xf1d63*/
    *(_DWORD *)(a1 + 592) = 110; /*0xf1d6f*/
  (*(void (__fastcall **)(cocos2d::CCScene *, __int64))(*(_QWORD *)v2 + 456LL))(v2, a1); /*0xf1d88*/
  return sub_F1FE0(); /*0xf1d8e*/
}

// [16/16] Address: 0xf1e40
// Method: NewThreadPopup::keyBackClicked
__int64 __fastcall NewThreadPopup_keyBackClicked(__int64 a1)
{
  return sub_F1DA0(a1 - 336, 0);
}
