#include <Geode/binding/SetupAnimationPopup.hpp>
#include <cocos2d.h>

using namespace cocos2d;

// [1/3] Address: 0x59b560
// Method: SetupAnimationPopup::~SetupAnimationPopup
cocos2d::CCNode *__fastcall SetupAnimationPopup__dtor_SetupAnimationPopup(cocos2d::CCNode *Block, char a2)
{
  *(_QWORD *)Block = &SetupAnimationPopup::`vftable'; /*0x59b573*/
  *((_QWORD *)Block + 40) = &SetupAnimationPopup::`vftable'; /*0x59b580*/
  *((_QWORD *)Block + 41) = &SetupAnimationPopup::`vftable'; /*0x59b58e*/
  *((_QWORD *)Block + 42) = &SetupAnimationPopup::`vftable'; /*0x59b59c*/
  *((_QWORD *)Block + 43) = &SetupAnimationPopup::`vftable'; /*0x59b5aa*/
  *((_QWORD *)Block + 44) = &SetupAnimationPopup::`vftable'; /*0x59b5b8*/
  *((_QWORD *)Block + 51) = &SetupAnimationPopup::`vftable'; /*0x59b5c6*/
  *((_QWORD *)Block + 54) = &SetupAnimationPopup::`vftable'; /*0x59b5d4*/
  *((_QWORD *)Block + 68) = &SetupAnimationPopup::`vftable'; /*0x59b5e2*/
  *((_QWORD *)Block + 83) = &SetupAnimationPopup::`vftable'; /*0x59b5f0*/
  *((_QWORD *)Block + 84) = &SetupAnimationPopup::`vftable'; /*0x59b5fe*/
  UIPOptionsLayer__dtor_UIPOptionsLayer(Block); /*0x59b605*/
  if ( (a2 & 1) != 0 ) /*0x59b60d*/
    j_j_free(Block); /*0x59b617*/
  return Block; /*0x59b61c*/
}

// [2/3] Address: 0x59c4b0
// Method: SetupAnimationPopup::determineStartValues
void __fastcall SetupAnimationPopup_determineStartValues(__int64 a1)
{
  __int64 v2; // rcx
  cocos2d::CCArray *v3; // rsi
  unsigned int v4; // edi
  struct cocos2d::CCObject *v5; // rax
  int v6; // edx
  int v7; // ecx
  int v8; // ecx
  int v9; // eax

  SetupTriggerPopup_determineStartValues(a1); /*0x59c4bd*/
  if ( *(_QWORD *)(a1 + 680) ) /*0x59c4c2*/
  {
    v3 = (cocos2d::CCArray *)cocos2d::CCArray::create(v2); /*0x59c4dc*/
    cocos2d::CCArray::addObject(v3, *(struct cocos2d::CCObject **)(a1 + 680)); /*0x59c4df*/
  }
  else
  {
    v3 = *(cocos2d::CCArray **)(a1 + 688); /*0x59c4e7*/
  }
  if ( v3 ) /*0x59c4f1*/
  {
    if ( cocos2d::CCArray::count(v3) ) /*0x59c4fa*/
    {
      v4 = 0; /*0x59c517*/
      for ( *(_QWORD *)(a1 + 1016) = -1; v4 < cocos2d::CCArray::count(v3); ++v4 ) /*0x59c524*/
      {
        v5 = cocos2d::CCArray::objectAtIndex(v3, v4); /*0x59c535*/
        v6 = *(_DWORD *)(a1 + 1016); /*0x59c53b*/
        v7 = *((_DWORD *)v5 + 370); /*0x59c541*/
        if ( v6 == -1 ) /*0x59c54a*/
        {
          *(_DWORD *)(a1 + 1016) = v7; /*0x59c54c*/
        }
        else if ( v6 != v7 ) /*0x59c556*/
        {
          *(_DWORD *)(a1 + 1016) = 0; /*0x59c558*/
        }
        v8 = *(_DWORD *)(a1 + 1020); /*0x59c55e*/
        v9 = *((_DWORD *)v5 + 417); /*0x59c564*/
        if ( v8 == -1 ) /*0x59c56d*/
        {
          *(_DWORD *)(a1 + 1020) = v9; /*0x59c56f*/
        }
        else if ( v8 != v9 ) /*0x59c579*/
        {
          *(_DWORD *)(a1 + 1020) = 0; /*0x59c57b*/
        }
      }
    }
  }
}

// [3/3] Address: 0x59c5f0
// Method: SetupAnimationPopup::textChanged
void __fastcall SetupAnimationPopup_textChanged(__int64 a1, _QWORD *a2)
{
  bool v4; // zf
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r8
  const char *v8; // rcx
  int v9; // eax
  unsigned __int64 v10; // rdx
  char *v11; // rcx
  int v12; // ecx
  __int64 v13; // rax
  cocos2d::CCArray *v14; // rcx
  unsigned int v15; // edi
  struct cocos2d::CCObject *v16; // rax
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // r8
  const char *v20; // rcx
  int v21; // eax
  unsigned __int64 v22; // rdx
  char *v23; // rcx
  char *String[2]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v25; // [rsp+48h] [rbp-30h]

  if ( !*(_BYTE *)(a1 + 200) ) /*0x59c613*/
  {
    v4 = (*(unsigned int (__fastcall **)(_QWORD *))(*a2 + 56LL))(a2) == 0; /*0x59c637*/
    v5 = *(_QWORD *)(a2[75] + 600LL); /*0x59c639*/
    if ( v4 ) /*0x59c63c*/
    {
      v6 = (*(__int64 (**)(void))(v5 + 8))(); /*0x59c642*/
      *(_OWORD *)String = 0; /*0x59c64b*/
      v7 = -1; /*0x59c650*/
      v25 = 0; /*0x59c657*/
      do /*0x59c663*/
        ++v7; /*0x59c660*/
      while ( *(_BYTE *)(v6 + v7) ); /*0x59c663*/
      sub_3C230(String); /*0x59c671*/
      v8 = (const char *)String; /*0x59c67c*/
      if ( *((_QWORD *)&v25 + 1) > 0xFu ) /*0x59c681*/
        v8 = String[0]; /*0x59c681*/
      v9 = atoi(v8); /*0x59c687*/
      v10 = *((_QWORD *)&v25 + 1); /*0x59c68d*/
      *(_DWORD *)(a1 + 472) = v9; /*0x59c692*/
      if ( v10 > 0xF ) /*0x59c69c*/
      {
        v11 = String[0]; /*0x59c69e*/
        if ( v10 + 1 >= 0x1000 ) /*0x59c6b0*/
        {
          v11 = (char *)*((_QWORD *)String[0] - 1); /*0x59c6b2*/
          if ( (unsigned __int64)(String[0] - v11 - 8) > 0x1F ) /*0x59c6c5*/
            invoke_watson(0, 0, 0, 0, 0); /*0x59c6d6*/
        }
        j_j_free(v11); /*0x59c6dd*/
      }
      v12 = 0; /*0x59c6e8*/
      if ( *(int *)(a1 + 472) >= 0 ) /*0x59c6fa*/
        v12 = *(_DWORD *)(a1 + 472); /*0x59c6fa*/
      v13 = *(_QWORD *)(a1 + 136); /*0x59c6fd*/
      if ( v12 > 9999 ) /*0x59c707*/
        v12 = 9999; /*0x59c707*/
      *(_DWORD *)(a1 + 472) = v12; /*0x59c70b*/
      if ( v13 ) /*0x59c714*/
      {
        *(_DWORD *)(v13 + 1480) = v12; /*0x59c722*/
      }
      else
      {
        v14 = *(cocos2d::CCArray **)(a1 + 144); /*0x59c72a*/
        if ( v14 ) /*0x59c734*/
        {
          v15 = 0; /*0x59c736*/
          if ( cocos2d::CCArray::count(v14) ) /*0x59c738*/
          {
            do /*0x59c788*/
            {
              v16 = cocos2d::CCArray::objectAtIndex(*(cocos2d::CCArray **)(a1 + 144), v15); /*0x59c759*/
              v17 = *(_DWORD *)(a1 + 472); /*0x59c75f*/
              if ( v17 < 0 ) /*0x59c767*/
                v17 = 0; /*0x59c767*/
              if ( v17 > 9999 ) /*0x59c76d*/
                v17 = 9999; /*0x59c76d*/
              ++v15; /*0x59c771*/
              *((_DWORD *)v16 + 370) = v17; /*0x59c773*/
            }
            while ( v15 < cocos2d::CCArray::count(*(cocos2d::CCArray **)(a1 + 144)) ); /*0x59c788*/
          }
        }
      }
      sub_607BB0(a1 - 544); /*0x59c791*/
    }
    else
    {
      v18 = (*(__int64 (**)(void))(v5 + 8))(); /*0x59c7a3*/
      *(_OWORD *)String = 0; /*0x59c7ac*/
      v19 = -1; /*0x59c7b1*/
      v25 = 0; /*0x59c7b8*/
      do /*0x59c7c3*/
        ++v19; /*0x59c7c0*/
      while ( *(_BYTE *)(v18 + v19) ); /*0x59c7c3*/
      sub_3C230(String); /*0x59c7d1*/
      v20 = (const char *)String; /*0x59c7dc*/
      if ( *((_QWORD *)&v25 + 1) > 0xFu ) /*0x59c7e1*/
        v20 = String[0]; /*0x59c7e1*/
      v21 = atoi(v20); /*0x59c7e7*/
      v22 = *((_QWORD *)&v25 + 1); /*0x59c7ed*/
      *(_DWORD *)(a1 + 476) = v21; /*0x59c7f2*/
      if ( v22 > 0xF ) /*0x59c7fc*/
      {
        v23 = String[0]; /*0x59c7fe*/
        if ( v22 + 1 >= 0x1000 ) /*0x59c810*/
        {
          v23 = (char *)*((_QWORD *)String[0] - 1); /*0x59c812*/
          if ( (unsigned __int64)(String[0] - v23 - 8) > 0x1F ) /*0x59c825*/
            invoke_watson(0, 0, 0, 0, 0); /*0x59c836*/
        }
        j_j_free(v23); /*0x59c83d*/
      }
      sub_59C8F0(a1 - 544); /*0x59c849*/
    }
  }
}
