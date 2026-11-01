#include <Geode/binding/PlatformToolbox.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/2] Address: 0x8a680
// Method: PlatformToolbox::getUniqueUserID
__int64 __fastcall PlatformToolbox_getUniqueUserID(__int64 a1)
{
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  int v4; // eax
  cocos2d::CCString *v5; // rax
  const char *CString; // rax
  __int64 v7; // r8
  __int128 *v8; // rcx
  __int64 v9; // r8
  char *v10; // rbx
  __int128 *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r8
  __int128 *v14; // r10
  __int128 *v15; // rcx
  char *v16; // r10
  char *v17; // r10
  __int64 v18; // rdx
  __int128 *v19; // rcx
  __int64 v20; // rbx
  __int128 v21; // xmm1
  HANDLE TokenHandle[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v24; // [rsp+30h] [rbp-38h] BYREF
  __int128 v25; // [rsp+40h] [rbp-28h]

  TokenHandle[0] = 0; /*0x8a6a0*/
  CurrentThread = GetCurrentThread(); /*0x8a6a8*/
  if ( OpenThreadToken(CurrentThread, 8u, 0, TokenHandle) /*0x8a6df*/
    || (CurrentProcess = GetCurrentProcess(), OpenProcessToken(CurrentProcess, 8u, TokenHandle)) )
  {
    sub_8A4B0(&v24, TokenHandle[0]); /*0x8a75f*/
    v8 = &v24; /*0x8a76a*/
    LOBYTE(v9) = 45; /*0x8a774*/
    if ( *((_QWORD *)&v25 + 1) > 0xFu ) /*0x8a777*/
      v8 = (__int128 *)v24; /*0x8a777*/
    v10 = (char *)v8 + v25; /*0x8a77d*/
    v11 = &v24; /*0x8a780*/
    if ( *((_QWORD *)&v25 + 1) > 0xFu ) /*0x8a78e*/
      v11 = (__int128 *)v24; /*0x8a78e*/
    v12 = sub_6722F0(v11, v10, v9); /*0x8a794*/
    if ( (char *)v12 != v10 ) /*0x8a79c*/
    {
      LOBYTE(v13) = 45; /*0x8a79e*/
      v12 = sub_672320(v12, v10, v13); /*0x8a7a7*/
    }
    v14 = &v24; /*0x8a7b1*/
    v15 = &v24; /*0x8a7bb*/
    if ( *((_QWORD *)&v25 + 1) > 0xFu ) /*0x8a7cc*/
      v14 = (__int128 *)v24; /*0x8a7cc*/
    v16 = (char *)v14 + v25; /*0x8a7d0*/
    if ( *((_QWORD *)&v25 + 1) > 0xFu ) /*0x8a7d7*/
      v15 = (__int128 *)v24; /*0x8a7d7*/
    v17 = &v16[-v12]; /*0x8a7db*/
    v18 = v12 - (_QWORD)v15; /*0x8a7de*/
    v19 = &v24; /*0x8a7e7*/
    if ( (__int64)v25 - v18 < (unsigned __int64)v17 ) /*0x8a7ef*/
      v17 = (char *)(v25 - v18); /*0x8a7ef*/
    if ( *((_QWORD *)&v25 + 1) > 0xFu ) /*0x8a7f7*/
      v19 = (__int128 *)v24; /*0x8a7f7*/
    v20 = v25 - (_QWORD)v17; /*0x8a7fb*/
    memmove((char *)v19 + v18, &v17[(_QWORD)v19 + v18], v25 - (_QWORD)v17 - v18 + 1); /*0x8a80e*/
    *(_QWORD *)&v25 = v20; /*0x8a818*/
    CloseHandle(TokenHandle[0]); /*0x8a81d*/
    v21 = v25; /*0x8a82d*/
    *(_OWORD *)a1 = v24; /*0x8a832*/
    *(_OWORD *)(a1 + 16) = v21; /*0x8a835*/
  }
  else
  {
    v4 = rand(); /*0x8a6e9*/
    v5 = cocos2d::CCString::createWithFormat("NoUDID_%lld", (unsigned int)(v4 % 10000000)); /*0x8a713*/
    CString = cocos2d::CCString::getCString(v5); /*0x8a71c*/
    v7 = -1; /*0x8a725*/
    *(_OWORD *)a1 = 0; /*0x8a72c*/
    *(_QWORD *)(a1 + 16) = 0; /*0x8a72f*/
    *(_QWORD *)(a1 + 24) = 0; /*0x8a733*/
    do /*0x8a73a*/
      ++v7; /*0x8a737*/
    while ( CString[v7] ); /*0x8a73a*/
    sub_3C230(a1); /*0x8a746*/
  }
  return a1; /*0x8a83c*/
}

// [2/2] Address: 0x8aa20
// Method: PlatformToolbox::getDisplaySize
// Hidden C++ exception states: #wind=1
cocos2d::CCSize *__fastcall PlatformToolbox_getDisplaySize(cocos2d::CCSize *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v5; // rcx
  void *v6; // [rsp+38h] [rbp+10h]

  if ( cocos2d::CCEGLView::sharedOpenGLView(a1) ) /*0x8aa29*/
  {
    v3 = cocos2d::CCEGLView::sharedOpenGLView(v2); /*0x8aa34*/
    cocos2d::CCEGLView::getDisplaySize(v3, a1); /*0x8aa40*/
    return a1; /*0x8aa46*/
  }
  else
  {
    v5 = qword_905FD0; /*0x8aa4f*/
    if ( !qword_905FD0 ) /*0x8aa59*/
    {
      v6 = operator new(0x6E8u); /*0x8aa65*/
      qword_905FD0 = sub_2723A0(v6); /*0x8aa73*/
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_905FD0 + 72LL))(qword_905FD0); /*0x8aa84*/
      v5 = qword_905FD0; /*0x8aa86*/
    }
    GameManager_resolutionForKey(v5, a1, 1); /*0x8aa96*/
    return a1; /*0x8aa9b*/
  }
}
